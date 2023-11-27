// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/IAMM.h"

#include "Core/IADriver.h"

void IIAMM::AssignModule(UIAModule* Mod)
{
	IModule = Mod;
	//ModuleId = IModule->ModuleId;
	IDriver = UIACommon::Get()->GetDriver();
}

void IIAMM::ExecuteFunction(IAModuleAgreement Agreement, IAParam* Param)
{
	if (Agreement.ModuleType == Module)
		IModule->ExecuteFunction(Agreement, Param);
	else
		IDriver->ExecuteFunction(Agreement, Param);
}

void IIAMM::ExecuteFunction(IAObjectAgreement Agreement, IAParam* Param)
{
	if (Agreement.ModuleType == Module)
		IModule->ExecuteFunction(Agreement, Param);
	else
		IDriver->ExecuteFunction(Agreement, Param);
}

UWorld* IIAMM::GetIAWorld() const
{
	if (IDriver)
		return IDriver->GetWorld();
	return nullptr;
}
