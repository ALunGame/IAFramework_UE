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
	RootWidget = CreateWidget<UIARootWidget>(GetWorld(), UIRootWidgetClass);

	//注入模块
	UIACommon::Get()->SetUIModule(this);
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
	
	//数据
	UIAPanelWidget* Panel = ActivePanels[InPanelType];
	ActivePanels.Remove(InPanelType);
	if (!HidePanels.Contains(InPanelType))
		HidePanels.Add(InPanelType,Panel);

	//执行隐藏
	DealHidePanel(Panel);	
	
	//判断栈顶元素
	if (!PanelStack.IsEmpty() && PanelStack.Last()->GetPanelType() == InPanelType)
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

UIARootWidget* UIAUIModule::GeRootWidget() const
{
	return RootWidget;
}

FUIPanelConfig* UIAUIModule::GetUIPanelConfig(EUIPanelType InPanelType) const
{
	if (!UIPanelConfig)
	{
		return nullptr;
	}

	for(TArray<FUIPanelConfig>::TIterator It(UIPanelConfig->PanelConfig); It; ++It)
	{
		if ((*It).PanelType == InPanelType)
		{
			return &(*It);
		}
	}
	
	return nullptr;
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
	{
		SetCanvasInTop(*HidePanels.Find(InPanelCfg->PanelType));
		return *HidePanels.Find(InPanelCfg->PanelType);
	}
	
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
	
	//初始化方法
	NewPanel->InitData(InPanelCfg->PanelType);
	NewPanel->Awake();

	return NewPanel;
}

void UIAUIModule::DealShowPanel(UIAPanelWidget* Panel, EUIShowRule ShowRule)
{
	//移除冗余元素
	if (PanelStack.Contains(Panel))
		PanelStack.Remove(Panel);
	if (HidePanels.Contains(Panel->GetPanelType()))
		HidePanels.Remove(Panel->GetPanelType());
	
	//隐藏其他
	if (ShowRule == EUIShowRule::HideOther || ShowRule == EUIShowRule::HideOther_NoNeedBack)
		HideAllPanels();

	//设置数据
	if (!ActivePanels.Contains(Panel->GetPanelType()))
		ActivePanels.Add(Panel->GetPanelType(),Panel);

	//入栈
	if (ShowRule == EUIShowRule::Overlay || ShowRule == EUIShowRule::HideOther)
		PanelStack.Push(Panel);
	
	//执行显示
	Panel->ResetPanelOffset();
	Panel->SetVisibility(ESlateVisibility::Visible);
	Panel->Show();
}

void UIAUIModule::DealHidePanel(UIAPanelWidget* Panel)
{
	//移除冗余元素
	if (PanelStack.Contains(Panel))
		PanelStack.Remove(Panel);
	if (ActivePanels.Contains(Panel->GetPanelType()))
		ActivePanels.Remove(Panel->GetPanelType());

	if (!HidePanels.Contains(Panel->GetPanelType()))
		HidePanels.Add(Panel->GetPanelType(),Panel);

	//执行隐藏
	Panel->SetVisibility(ESlateVisibility::Collapsed);
	Panel->Hide();
}

void UIAUIModule::SetCanvasInTop(UIAPanelWidget* Panel)
{
	UCanvasPanel* ParentCanvas = Cast<UCanvasPanel>(Panel->GetParent());
	Panel->RemoveFromRoot();
	ParentCanvas->AddChildToCanvas(Panel);
}
