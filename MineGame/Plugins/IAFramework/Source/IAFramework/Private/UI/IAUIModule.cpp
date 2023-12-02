// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/IAUIModule.h"

#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/Image.h"
#include "Components/OverlaySlot.h"
#include "Module/IACacheModule.h"
#include "UI/Panel/IAPanelWidget.h"
#include "UI/Panel/IARootWidget.h"

void UIAUIModule::ModuleInit()
{
	Super::ModuleInit();

	//创建UI根
	RootWidget = CreateWidget<UIARootWidget>(GetWorld(), UIRootWidgetClass);
}

void UIAUIModule::ShowPanel(FName PanelName)
{
	UIAPanelWidget* Panel = GetOrCreatePanel(PanelName);
	if (!Panel)
	{
		IA::Error() << "UI打开失败！！没有对应UI" << PanelName << IA::Endl();
		return;
	}

	DealShowPanel(Panel,Panel->UIProperty.DefaultPanelShowRule);
}

void UIAUIModule::HidePanel(FName PanelName)
{
	if (!ActivePanels.Contains(PanelName))
	{
		IA::Warning() << "UI隐藏失败！！该UI已经隐藏" << PanelName << IA::Endl();
		return;
	}
	ActivePanels.Remove(PanelName);

	//数据
	UIAPanelWidget* Panel = ActivePanels[PanelName];
	ActivePanels.Remove(PanelName);
	if (!HidePanels.Contains(PanelName))
		HidePanels.Add(PanelName,Panel);

	//执行隐藏
	DealHidePanel(Panel);	
	
	//判断栈顶元素
	if (PanelStack.Last()->UIProperty.UIName == PanelName)
	{
		//显示下一个
		PanelStack.Remove(Panel);
		//下一个应该啥也不做
		DealShowPanel(PanelStack.Last(),EUIShowRule::DoNothing);
	}
	else
	{
		if (PanelStack.Contains(Panel))
		{
			PanelStack.Remove(Panel);
		}
	}
}

void UIAUIModule::HideAllPanels()
{
	for (const auto Element : ActivePanels)
	{
		if (Element.Value)
		{
			DealHidePanel(Element.Value);
		}
	}
	ActivePanels.Empty();
}

UIAPanelWidget* UIAUIModule::GetOrCreatePanel(FName PanelName)
{
	if (ActivePanels.Contains(PanelName))
		return *ActivePanels.Find(PanelName);
	
	if (HidePanels.Contains(PanelName))
		return *HidePanels.Find(PanelName);

	UIAPanelWidget* NewPanel = Cast<UIAPanelWidget>(UIACommon::Get()->GetCacheModule()->CreateWidget(PanelName));
	
	//添加UI面板到父控件
	UCanvasPanelSlot* PanelSlot = RootWidget->GetLayerCanvas(NewPanel->UIProperty.UILayer)->AddChildToCanvas(NewPanel);
	PanelSlot->SetAnchors(NewPanel->UIProperty.Anchors);
	PanelSlot->SetOffsets(NewPanel->UIProperty.Offsets);

	//初始化方法
	NewPanel->Awake();

	return NewPanel;
}

void UIAUIModule::DealShowPanel(UIAPanelWidget* Panel, EUIShowRule ShowRule)
{
	//移除冗余元素
	if (PanelStack.Contains(Panel))
		PanelStack.Remove(Panel);
	if (HidePanels.Contains(Panel->UIProperty.UIName))
		HidePanels.Remove(Panel->UIProperty.UIName);
	
	//隐藏其他
	if (ShowRule == EUIShowRule::HideOther || ShowRule == EUIShowRule::HideOther_NoNeedBack)
		HideAllPanels();

	//设置数据
	if (!ActivePanels.Contains(Panel->UIProperty.UIName))
		ActivePanels.Add(Panel->UIProperty.UIName,Panel);

	//入栈
	if (ShowRule == EUIShowRule::Overlay || ShowRule == EUIShowRule::HideOther)
		PanelStack.Push(Panel);

	//显示遮罩
	DealMask(RootWidget->GetLayerCanvas(Panel->UIProperty.UILayer),Panel->UIProperty.UIMaskType);
	
	//执行显示
	Panel->SetVisibility(ESlateVisibility::Visible);
	Panel->Show();
}

void UIAUIModule::DealHidePanel(UIAPanelWidget* Panel)
{
	//移除冗余元素
	if (PanelStack.Contains(Panel))
		PanelStack.Remove(Panel);
	if (ActivePanels.Contains(Panel->UIProperty.UIName))
		ActivePanels.Remove(Panel->UIProperty.UIName);

	if (!HidePanels.Contains(Panel->UIProperty.UIName))
		HidePanels.Add(Panel->UIProperty.UIName,Panel);

	//执行隐藏
	Panel->SetVisibility(ESlateVisibility::Collapsed);
	Panel->Hide();
}

void UIAUIModule::DealMask(UCanvasPanel* LayerCanvas, EUIMaskType UIMaskType)
{
	//移出遮罩
	RootWidget->GetMask()->RemoveFromParent();

	//添加遮罩到新的父控件
	UCanvasPanelSlot* MaskSlot = LayerCanvas->AddChildToCanvas(RootWidget->GetMask());
	MaskSlot->SetAnchors(FAnchors(0.f, 0.f, 1.f, 1.f));
	MaskSlot->SetOffsets(FMargin(0.f, 0.f, 0.f, 0.f));

	RootWidget->SetMask(UIMaskType);
}
