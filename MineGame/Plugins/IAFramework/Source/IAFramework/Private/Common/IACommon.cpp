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

AIADriver* UIACommon::GetDriver()
{
	return Driver;
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
