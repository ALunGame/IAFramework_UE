// Fill out your copyright notice in the Description page of Project Settings.


#include "Object/IAOO.h"

#include "Core/IADriver.h"

void IIAOO::RegisterToModule(EGameModule ModType, FName ObjName, FName ClsName)
{
	//判断是否已经注册到框架了
	if (IDriver && IModule)
		return;
	//指定对象名和类名
	if (!ObjName.IsNone())
		IObjectName = ObjName;
	if (!ClsName.IsNone())
		IClassName = ClsName;
	
	//获取UObject主体
	IBody = Cast<UObject>(this);

	//获取驱动器
	IDriver = UIACommon::Get()->GetDriver();

	//注册到模组
	if (IDriver)
	{
		//如果注册不成功说明还没有实例化对应的Module
		if (!IDriver->RegisterToModule(this))
			IA::Debug() << GetObjectName() << " Register To " << IA::GetEnumValueAsString(ModType) << " Failed !" << IA::Endl();
	}
	else
		//DDriver不存在
		IA::Debug() << GetObjectName() << " Get DDDriver Failed !" << IA::Endl();
}

FName IIAOO::GetObjectName()
{
	if (!IObjectName.IsNone())
		return IObjectName;
	IObjectName = IBody->GetFName();
	return IObjectName;
}

FName IIAOO::GetClassName()
{
	if (!IClassName.IsNone())
		return IClassName;
	IClassName = IBody->GetClass()->GetFName();
	return IClassName;
}

EGameModule IIAOO::GetModuleType() const
{
	return Module;
}

UObject* IIAOO::GetObjectBody() const
{
	return IBody;
}

UWorld* IIAOO::GetIAWorld() const
{
	if (IDriver)
		return IDriver->GetWorld();
	return nullptr;
}

void IIAOO::AssignModule(UIAModule* Mod)
{
	IModule = Mod;
}

bool IIAOO::ActiveLife()
{
	switch (LifeState)
	{
	case EBaseObjectLife::None:
		IAInit();
		LifeState = EBaseObjectLife::Init;
		break;
	case EBaseObjectLife::Init:
		IALoading();
		LifeState = EBaseObjectLife::Loading;
		break;
	case EBaseObjectLife::Loading:
		IARegister();
		LifeState = EBaseObjectLife::Register;
		break;
	case EBaseObjectLife::Register:
		IAEnable();
		LifeState = EBaseObjectLife::Enable;
		//设置运行状态为稳定
		RunState = EBaseObjectState::Stable;
		//返回true, 停止运行激活状态函数
		return true;
	}
	return false;
}

bool IIAOO::DestroyLife()
{
	switch (LifeState)
	{
	case EBaseObjectLife::Enable:
		IADisable();
		LifeState = EBaseObjectLife::Disable;
		//设置状态为销毁
		RunState = EBaseObjectState::Destroy;
		break;
	case EBaseObjectLife::Disable:
		IAUnRegister();
		LifeState = EBaseObjectLife::UnRegister;
		//设置运行状态为销毁,避免从Disable状态下运行的对象没有修改RunState为销毁
		RunState = EBaseObjectState::Destroy;
		break;
	case EBaseObjectLife::UnRegister:
		IAUnLoading();
		LifeState = EBaseObjectLife::UnLoading;
		//返回true, 停止运行销毁状态函数
		return true;
	}
	return false;
}

void IIAOO::IAInit() {}

void IIAOO::IALoading() {}

void IIAOO::IARegister() {}

void IIAOO::IAEnable() {}

void IIAOO::IATick(float DeltaSeconds) {}

void IIAOO::IADisable() {}

void IIAOO::IAUnRegister() {}

void IIAOO::IAUnLoading() {}

void IIAOO::IARelease()
{
	StopTimers();
}

void IIAOO::OnEnable()
{
	//设置状态为激活状态
	LifeState = EBaseObjectLife::Enable;
}

void IIAOO::OnDisable()
{
	//设置状态为失活状态
	LifeState = EBaseObjectLife::Disable;
}

void IIAOO::IADestroy()
{
	IModule->ChildDestroy(GetObjectName());
}

void IIAOO::ExecuteFunction(IAModuleAgreement Agreement, IAParam* Param)
{
	if (Agreement.ModuleType == Module)
		IModule->ExecuteFunction(Agreement, Param);
	else
		IDriver->ExecuteFunction(Agreement, Param);
}

void IIAOO::ExecuteFunction(IAObjectAgreement Agreement, IAParam* Param)
{
	if (Agreement.ModuleType == Module)
		IModule->ExecuteFunction(Agreement, Param);
	else
		IDriver->ExecuteFunction(Agreement, Param);
}

FWealthURL* IIAOO::GainWealthURL(FName WealthName)
{
	return IModule->GainWealthURL(WealthName);
}

void IIAOO::GainWealthURL(FName WealthKind, TArray<FWealthURL*>& OutURL)
{
	IModule->GainWealthURL(WealthKind, OutURL);
}

void IIAOO::LoadObjectWealth(FName WealthName, FName FunName)
{
	IModule->LoadObjectWealth(WealthName, GetObjectName(), FunName);
}

void IIAOO::LoadObjectWealthKind(FName WealthKind, FName FunName)
{
	IModule->LoadObjectWealthKind(WealthKind, GetObjectName(), FunName);
}

void IIAOO::LoadClassWealth(FName WealthName, FName FunName)
{
	IModule->LoadClassWealth(WealthName, GetObjectName(), FunName);
}

void IIAOO::LoadClassWealthKind(FName WealthKind, FName FunName)
{
	IModule->LoadClassWealthKind(WealthKind, GetObjectName(), FunName);
}

void IIAOO::BuildSingleClassWealth(EWealthType WealthType, FName WealthName, FName FunName)
{
	IModule->BuildSingleClassWealth(WealthType, WealthName, GetObjectName(), FunName, FTransform::Identity);
}

void IIAOO::BuildSingleClassWealth(EWealthType WealthType, FName WealthName, FName FunName, FTransform SpawnTransform)
{
	IModule->BuildSingleClassWealth(WealthType, WealthName, GetObjectName(), FunName, SpawnTransform);
}

void IIAOO::BuildKindClassWealth(EWealthType WealthType, FName WealthKind, FName FunName)
{
	IModule->BuildKindClassWealth(WealthType, WealthKind, GetObjectName(), FunName, TArray<FTransform>{ FTransform::Identity });
}

void IIAOO::BuildKindClassWealth(EWealthType WealthType, FName WealthKind, FName FunName, FTransform SpawnTransform)
{
	IModule->BuildKindClassWealth(WealthType, WealthKind, GetObjectName(), FunName, TArray<FTransform>{ SpawnTransform });
}

void IIAOO::BuildKindClassWealth(EWealthType WealthType, FName WealthKind, FName FunName,
	TArray<FTransform> SpawnTransforms)
{
	IModule->BuildKindClassWealth(WealthType, WealthKind, GetObjectName(), FunName, SpawnTransforms);
}

void IIAOO::BuildMultiClassWealth(EWealthType WealthType, FName WealthName, int32 Amount, FName FunName)
{
	IModule->BuildMultiClassWealth(WealthType, WealthName, Amount, GetObjectName(), FunName, TArray<FTransform>{ FTransform::Identity });
}

void IIAOO::BuildMultiClassWealth(EWealthType WealthType, FName WealthName, int32 Amount, FName FunName,
	FTransform SpawnTransform)
{
	IModule->BuildMultiClassWealth(WealthType, WealthName, Amount, GetObjectName(), FunName, TArray<FTransform>{ SpawnTransform });
}

void IIAOO::BuildMultiClassWealth(EWealthType WealthType, FName WealthName, int32 Amount, FName FunName,
	TArray<FTransform> SpawnTransforms)
{
	IModule->BuildMultiClassWealth(WealthType, WealthName, Amount, GetObjectName(), FunName, SpawnTransforms);
}
