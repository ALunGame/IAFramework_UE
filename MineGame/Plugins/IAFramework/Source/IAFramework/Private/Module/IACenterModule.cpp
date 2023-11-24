// Fill out your copyright notice in the Description page of Project Settings.


#include "Module/IACenterModule.h"

void UIACenterModule::LoadAllModules(UIAModule* Module)
{
	for (int i = 0; i < Module->GetAttachChildren().Num(); ++i)
	{
		UIAModule* ChildModule = Cast<UIAModule>(Module->GetAttachChildren()[i]);
		if (ChildModule)
		{
			//添加这个对象到这个Module的ChildModule
			Module->ChildrenModule.Push(ChildModule);
			LoadAllModules(ChildModule);
		}
	}
}

void UIACenterModule::Create(UIAModule* Module)
{
	Module->Create();
	for (int i = 0; i < Module->ChildrenModule.Num(); ++i)
		Create(Module->ChildrenModule[i]);
}

void UIACenterModule::ModuleInit(UIAModule* Module)
{
	Module->ModuleInit();
	for (int i = 0; i < Module->ChildrenModule.Num(); ++i)
		ModuleInit(Module->ChildrenModule[i]);
}

void UIACenterModule::ModuleBeginPlay(UIAModule* Module)
{
	Module->ModuleBeginPlay();
	for (int i = 0; i < Module->ChildrenModule.Num(); ++i)
		ModuleBeginPlay(Module->ChildrenModule[i]);
}

void UIACenterModule::ModuleTick(UIAModule* Module, float DeltaSeconds)
{
	Module->ModuleTick(DeltaSeconds);
	for (int i = 0; i < Module->ChildrenModule.Num(); ++i)
		ModuleTick(Module->ChildrenModule[i], DeltaSeconds);
}

void UIACenterModule::GatherAllModules()
{
	//先获取所有的模组到GatherGroup
	TArray<UIAModule*> GatherGroup;
	GatherModule(this, GatherGroup);
	
	//按模组ID填充模组到ModuleGroup
	for (int i = 0; i < GatherGroup.Num(); ++i)
		ModuleGroup.Add(GatherGroup[i]->ModuleType,GatherGroup[i]);
}

void UIACenterModule::GatherModule(UIAModule* Module, TArray<UIAModule*>& GatherGroup)
{
	GatherGroup.Push(Module);
	for (int i = 0; i < Module->ChildrenModule.Num(); ++i)
		GatherModule(Module->ChildrenModule[i], GatherGroup);
}

bool UIACenterModule::RegisterToModule(IIAOO* ObejctInst)
{
	if (!ModuleGroup.Contains(ObejctInst->GetModuleType()))
	{
		return false;
	}
	ModuleGroup[ObejctInst->GetModuleType()]->RegisterObject(ObejctInst);
	return true;
}

void UIACenterModule::ExecuteFunction(IAModuleAgreement Agreement, IAParam* Param)
{
}

void UIACenterModule::ExecuteFunction(IAObjectAgreement Agreement, IAParam* Param)
{
}
