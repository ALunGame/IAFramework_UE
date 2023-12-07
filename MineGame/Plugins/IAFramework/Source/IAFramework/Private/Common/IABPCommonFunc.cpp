// Fill out your copyright notice in the Description page of Project Settings.


#include "Common/IABPCommonFunc.h"

#include "Common/IACommon.h"
#include "UI/IAUIModule.h"

void UIABPCommonFunc::ShowUI(EUIPanelType InPanelType)
{
	UIAUIModule* UIModule = UIACommon::Get()->GetUIModule();
	if (!UIModule)
	{
		IA::Error() << TEXT("ShowUI 出错，没有UI模块") << IA::Endl();
		return;
	}

	UIModule->ShowPanel(InPanelType);
}

void UIABPCommonFunc::HideUI(EUIPanelType InPanelType)
{
	UIAUIModule* UIModule = UIACommon::Get()->GetUIModule();
	if (!UIModule)
	{
		IA::Error() << TEXT("HideUI 出错，没有UI模块") << IA::Endl();
		return;
	}

	UIModule->HidePanel(InPanelType);
}
