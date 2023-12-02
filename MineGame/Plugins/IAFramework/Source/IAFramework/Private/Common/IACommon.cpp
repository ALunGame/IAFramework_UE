// Fill out your copyright notice in the Description page of Project Settings.


#include "Common/IACommon.h"

UIACommon* UIACommon::IAInst = nullptr;

UIACommon* UIACommon::Get()
{
	if (!IAInst)
	{
		IAInst = NewObject<UIACommon>();
		IAInst->AddToRoot();
	}
	return IAInst;
}

void UIACommon::SetDriver(AIADriver* InDriver)
{
	Driver = InDriver;
}

AIADriver* UIACommon::GetDriver() const
{
	return Driver;
}

void UIACommon::SetTimerModule(UIATimerModule* InTimerModule)
{
	TimerModule = InTimerModule;
}

UIATimerModule* UIACommon::GetTimerModule() const
{
	return TimerModule;
}

void UIACommon::SetAssetModule(UIAAssetModule* InAssetModule)
{
	AssetModule = InAssetModule;
}

UIAAssetModule* UIACommon::GetAssetModule() const
{
	return AssetModule;
}

void UIACommon::SetCacheModule(UIACacheModule* InCacheModule)
{
	CacheModule = InCacheModule;
}

UIACacheModule* UIACommon::GetCacheModule() const
{
	return CacheModule;
}

void UIACommon::SetUIModule(UIAUIModule* InUIModule)
{
	UIModule = InUIModule;
}

UIAUIModule* UIACommon::GetUIModule() const
{
	return UIModule;
}

void UIACommon::InitController(APlayerController* InController)
{
	PlayerController = InController;
}

APlayerController* UIACommon::GetController()
{
	return PlayerController;
}

void UIACommon::SetPauseGame(bool IsPause)
{
	PlayerController->SetPause(IsPause);
}

const bool UIACommon::IsPauseGame() const
{
	return PlayerController->IsPaused();
}
