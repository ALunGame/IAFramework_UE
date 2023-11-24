﻿// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/IAPanelWidget.h"

FName UIAPanelWidget::PanelHiddenName(TEXT("PanelHiddenTask"));

EGameModule UIAPanelWidget::UIFrameModuleType(EGameModule::HUD);

FName UIAPanelWidget::UIFrameName(TEXT("UIFrame"));

FName UIAPanelWidget::ExitCallBackName(TEXT("ExitCallBack"));

FName UIAPanelWidget::ShowUIPanelName(TEXT("ShowUIPanel"));

FName UIAPanelWidget::HideUIPanelName(TEXT("HideUIPanel"));

FName UIAPanelWidget::ExitUIPanelName(TEXT("ExitUIPanel"));

FName UIAPanelWidget::AdvanceLoadPanelName(TEXT("AdvanceLoadPanel"));

void UIAPanelWidget::PanelEnter()
{
	SetVisibility(ESlateVisibility::Visible);
	//调用进入界面动画
	DisplayEnterMovie();
}

void UIAPanelWidget::PanelDisplay()
{
	SetVisibility(ESlateVisibility::Visible);
	//调用进入界面动画
	DisplayEnterMovie();
}

void UIAPanelWidget::PanelHidden()
{
	//运行完移出界面动画后调用隐藏函数
	//InvokeDelay(PanelHiddenName, DisplayLeaveMovie(), this, &UIAPanelWidget::SetSelfHidden);
}

void UIAPanelWidget::PanelFreeze()
{
}

void UIAPanelWidget::PanelResume()
{
}

void UIAPanelWidget::PanelExit()
{
	//如果UI面板正在显示
	if (GetVisibility() != ESlateVisibility::Hidden)
	{
		//InvokeDelay(PanelHiddenName, DisplayLeaveMovie(), this, &UIAPanelWidget::RemoveCallBack);
	}
	else
		RemoveCallBack();
}

void UIAPanelWidget::SetSelfHidden()
{
	SetVisibility(ESlateVisibility::Hidden);
}

void UIAPanelWidget::RemoveCallBack()
{
	//获取父控件
	UPanelWidget* WorkLayout = GetParent();
	//已经加载了UI面板, 但是一直没有运行显示命令的情况下, WorkLayout为空
	if (WorkLayout)
	{
		RemoveFromParent();
		//告诉UI管理器处理父控件
		//ExitCallBack(UIFrameModuleType, UIFrameName, ExitCallBackName, UINature.LayoutType, WorkLayout);
	}
	//执行销毁
	IADestroy();
}

void UIAPanelWidget::ShowSelfPanel()
{
	ShowUIPanel(GetObjectName());
}

void UIAPanelWidget::HideSelfPanel()
{
	HideUIPanel(GetObjectName());
}

void UIAPanelWidget::ExitSelfPanel()
{
	ExitUIPanel(GetObjectName());
}

void UIAPanelWidget::AdvanceLoadPanel(FName PanelName)
{
	//OperatorUIPanel(UIFrameModuleType, UIFrameName, AdvanceLoadPanelName, PanelName);
}

void UIAPanelWidget::ShowUIPanel(FName PanelName)
{
	//OperatorUIPanel(UIFrameModuleType, UIFrameName, ShowUIPanelName, PanelName);
}

void UIAPanelWidget::HideUIPanel(FName PanelName)
{
	//OperatorUIPanel(UIFrameModuleType, UIFrameName, HideUIPanelName, PanelName);
}

void UIAPanelWidget::ExitUIPanel(FName PanelName)
{
	//OperatorUIPanel(UIFrameModuleType, UIFrameName, ExitUIPanelName, PanelName);
}