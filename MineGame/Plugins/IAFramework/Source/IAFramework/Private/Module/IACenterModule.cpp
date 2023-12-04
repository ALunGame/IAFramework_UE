// Fill out your copyright notice in the Description page of Project Settings.


#include "Module/IACenterModule.h"

void UIACenterModule::LoadAllModules()
{
	for (int i = 0; i < this->GetAttachChildren().Num(); ++i)
	{
		UIAModule* ChildModule = Cast<UIAModule>(this->GetAttachChildren()[i]);
		ChildModule->Create();
		
		if (ChildModule)
		{
			//添加这个对象到这个Module的ChildModule
			ModuleGroup.Add(ChildModule->ModuleType,ChildModule);
			//设置全局模组
			if (ChildModule->ModuleType == EGameModule::Timer)
			{
				UIACommon::Get()->SetTimerModule((UIATimerModule*)ChildModule);
			}
		}
	}
}

void UIACenterModule::ModuleInit()
{
	Super::ModuleInit();
	//初始化
	for (const auto Element : ModuleGroup)
	{
		Element.Value->ModuleInit();
	}
}

void UIACenterModule::ModuleBeginPlay()
{
	Super::ModuleBeginPlay();
	for (const auto Element : ModuleGroup)
	{
		Element.Value->ModuleBeginPlay();
	}
}

void UIACenterModule::ModuleTick(float DeltaSeconds)
{
	Super::ModuleTick(DeltaSeconds);
	for (const auto Element : ModuleGroup)
	{
		Element.Value->ModuleTick(DeltaSeconds);
	}
}

void UIACenterModule::ModuleClear()
{
	Super::ModuleClear();
	for (const auto Element : ModuleGroup)
	{
		Element.Value->ModuleClear();
	}
}

UIAModule* UIACenterModule::GetModule(EGameModule InModuleType)
{
	if (!ModuleGroup.Contains(InModuleType))
	{
		return nullptr;
	}
	return ModuleGroup[InModuleType];
}
