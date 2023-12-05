// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/IAUIModule.h"

#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/Image.h"
#include "Core/IADriver.h"
#include "Module/IACacheModule.h"
#include "UI/IAUIPanelConfig.h"
#include "UI/Panel/IAPanelWidget.h"
#include "UI/Panel/IARootWidget.h"

void UIAUIModule::ModuleInit()
{
	Super::ModuleInit();

	//创建UI根
	RootWidget = MakeShareable(CreateWidget<UIARootWidget>(GetWorld(), UIRootWidgetClass));
}

void UIAUIModule::ShowPanel(EUIPanelType InPanelType)
{
	FUIPanelConfig* PanelCfg = GetUIPanelConfig(InPanelType);
	if (!PanelCfg)
	{
		IA::Error() << "UI打开失败！！没有对应UI配置" << IA::GetEnumValueAsString(InPanelType) << IA::Endl();
		return;
	}
	UIAPanelWidget* Panel = GetOrCreatePanel(PanelCfg);
	if (!Panel)
	{
		IA::Error() << "UI打开失败！！没有对应UI" << IA::GetEnumValueAsString(InPanelType) << IA::Endl();
		return;
	}

	DealShowPanel(Panel,Panel->UIProperty.DefaultPanelShowRule);
}

void UIAUIModule::HidePanel(EUIPanelType InPanelType)
{
	if (!ActivePanels.Contains(InPanelType))
	{
		IA::Warning() << "UI隐藏失败！！该UI已经隐藏" << IA::GetEnumValueAsString(InPanelType) << IA::Endl();
		return;
	}
	ActivePanels.Remove(InPanelType);

	//数据
	UIAPanelWidget* Panel = ActivePanels[InPanelType];
	ActivePanels.Remove(InPanelType);
	if (!HidePanels.Contains(InPanelType))
		HidePanels.Add(InPanelType,Panel);

	//执行隐藏
	DealHidePanel(Panel);	
	
	//判断栈顶元素
	if (PanelStack.Last()->PanelType == InPanelType)
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

TSharedPtr<UIARootWidget> UIAUIModule::GeRootWidget()
{
	return RootWidget;
}

FUIPanelConfig* UIAUIModule::GetUIPanelConfig(EUIPanelType InPanelType) const
{
	if (!UIPanelConfig || !UIPanelConfig->PanelConfig.Contains(InPanelType))
	{
		return nullptr;
	}

	return UIPanelConfig->PanelConfig.Find(InPanelType);
}

void UIAUIModule::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	// if (PropertyChangedEvent.Property)
	// {
	// 	if (PropertyChangedEvent.Property->GetFName() == GET_MEMBER_NAME_CHECKED(UIAUIModule, DataTable))
	// 	{
	// 	}
	// }
}

UIAPanelWidget* UIAUIModule::GetOrCreatePanel(FUIPanelConfig* InPanelCfg)
{
	if (ActivePanels.Contains(InPanelCfg->PanelType))
		return *ActivePanels.Find(InPanelCfg->PanelType);
	
	if (HidePanels.Contains(InPanelCfg->PanelType))
		return *HidePanels.Find(InPanelCfg->PanelType);

	//加载资源
	if (!InPanelCfg->Class)
	{
		InPanelCfg->Class = InPanelCfg->PanelClass.LoadSynchronous();
		if (!InPanelCfg->Class)
		{
			IA::Error() << "UI加载失败！！" << IA::GetEnumValueAsString(InPanelCfg->PanelType) << IA::Endl();
			return nullptr;
		}
	}
	UIAPanelWidget* NewPanel = CreateWidget<UIAPanelWidget>(UIACommon::Get()->GetDriver()->GetWorld(), InPanelCfg->Class);
	
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
	if (HidePanels.Contains(Panel->PanelType))
		HidePanels.Remove(Panel->PanelType);
	
	//隐藏其他
	if (ShowRule == EUIShowRule::HideOther || ShowRule == EUIShowRule::HideOther_NoNeedBack)
		HideAllPanels();

	//设置数据
	if (!ActivePanels.Contains(Panel->PanelType))
		ActivePanels.Add(Panel->PanelType,Panel);

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
	if (ActivePanels.Contains(Panel->PanelType))
		ActivePanels.Remove(Panel->PanelType);

	if (!HidePanels.Contains(Panel->PanelType))
		HidePanels.Add(Panel->PanelType,Panel);

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
