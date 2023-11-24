// Fill out your copyright notice in the Description page of Project Settings.


#include "Module/IAModule.h"

#include "Core/IAModel.h"
#include "Core/IAWealth.h"
#include "Object/IAOO.h"

UIAModule::UIAModule()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UIAModule::Create()
{
	//实例化组件, 这里用NewObject实例化组件时不能在括号内填this, 否则编辑器运行游戏退出时会奔溃
	Model = NewObject<UIAModel>();
	Message = NewObject<UIAMessage>();
	Wealth = NewObject<UIAWealth>();

	//避免销毁
	Model->AddToRoot();
	Message->AddToRoot();
	Wealth->AddToRoot();
	
	//指定模组
	Model->AssignModule(this);
	Message->AssignModule(this);
	Wealth->AssignModule(this);
}

void UIAModule::ModuleInit()
{
	//调用Init函数
	Model->ModelInit();
	Message->MessageInit();
	Wealth->WealthInit();
}

void UIAModule::ModuleBeginPlay()
{

	//调用BeginPlay
	Model->ModelBeginPlay();
	Message->MessageBeginPlay();
	Wealth->WealthBeginPlay();
}

void UIAModule::ModuleTick(float DeltaSeconds)
{
	//调用Tick
	Model->ModelTick(DeltaSeconds);
	Wealth->WealthTick(DeltaSeconds);
	Message->MessageTick(DeltaSeconds);
}

void UIAModule::RegisterObject(IIAOO* ObjectInst)
{
	//注册对象到数据组件
	Model->RegisterObject(ObjectInst);
	//把自己注册到对象的模组
	ObjectInst->AssignModule(this);
}

void UIAModule::ChildDestroy(FName ObjectName)
{
	Model->DestroyObject(ObjectName);
}

void UIAModule::DestroyObject(EAgreementType Agreement, TArray<FName> TargetNameGroup)
{
	Model->DestroyObject(Agreement, TargetNameGroup);
}

void UIAModule::EnableObject(EAgreementType Agreement, TArray<FName> TargetNameGroup)
{
	Model->EnableObject(Agreement, TargetNameGroup);
}

void UIAModule::DisableObject(EAgreementType Agreement, TArray<FName> TargetNameGroup)
{
	Model->DisableObject(Agreement, TargetNameGroup);
}

void UIAModule::ExecuteFunction(IAModuleAgreement Agreement, IAParam* Param)
{
	//调用Module的UFuntion
	UFunction* ExeFunc = FindFunction(Agreement.FunctionName);
	//如果方法存在
	if (ExeFunc)
	{
		//设置调用成功
		Param->CallResult = ECallResult::Succeed;
		//调用方法
		ProcessEvent(ExeFunc, Param->ParamPtr);
	}
	else
	{
		//设置方法不存在
		Param->CallResult = ECallResult::NoFunction;
	}
}

void UIAModule::ExecuteFunction(IAObjectAgreement Agreement, IAParam* Param)
{
	//区分类型执行放射方法
	switch (Agreement.AgreementType)
	{
	case EAgreementType::SelfObject:
		ExecuteSelfObject(Agreement, Param);
		break;
	case EAgreementType::OtherObject:
		ExecuteOtherObject(Agreement, Param);
		break;
	case EAgreementType::ClassOtherObject:
		ExecuteClassOtherObject(Agreement, Param);
		break;
	case EAgreementType::SelfClass:
		ExecuteSelfClass(Agreement, Param);
		break;
	case EAgreementType::OtherClass:
		ExecuteOtherClass(Agreement, Param);
		break;
	case EAgreementType::All:
		ExecuteAll(Agreement, Param);
		break;
	}
}

FWealthURL* UIAModule::GainWealthURL(FName WealthName)
{
	return Wealth->GainWealthURL(WealthName);
}

void UIAModule::GainWealthURL(FName WealthKind, TArray<FWealthURL*>& OutURL)
{
	Wealth->GainWealthURL(WealthKind, OutURL);
}

void UIAModule::LoadObjectWealth(FName WealthName, FName ObjectName, FName FunName)
{
	Wealth->LoadObjectWealth(WealthName, ObjectName, FunName);
}

void UIAModule::LoadObjectWealthKind(FName WealthKind, FName ObjectName, FName FunName)
{
	Wealth->LoadObjectWealthKind(WealthKind, ObjectName, FunName);
}

void UIAModule::LoadClassWealth(FName WealthName, FName ObjectName, FName FunName)
{
	Wealth->LoadClassWealth(WealthName, ObjectName, FunName);
}

void UIAModule::LoadClassWealthKind(FName WealthKind, FName ObjectName, FName FunName)
{
	Wealth->LoadClassWealthKind(WealthKind, ObjectName, FunName);
}

void UIAModule::BuildSingleClassWealth(EWealthType WealthType, FName WealthName, FName ObjectName, FName FunName,
	FTransform SpawnTransform)
{
	Wealth->BuildSingleClassWealth(WealthType, WealthName, ObjectName, FunName, SpawnTransform);
}

void UIAModule::BuildKindClassWealth(EWealthType WealthType, FName WealthKind, FName ObjectName, FName FunName,
	TArray<FTransform> SpawnTransforms)
{
	Wealth->BuildKindClassWealth(WealthType, WealthKind, ObjectName, FunName, SpawnTransforms);
}

void UIAModule::BuildMultiClassWealth(EWealthType WealthType, FName WealthName, int32 Amount, FName ObjectName,
	FName FunName, TArray<FTransform> SpawnTransforms)
{
	Wealth->BuildMultiClassWealth(WealthType, WealthName, Amount, ObjectName, FunName, SpawnTransforms);
}

void UIAModule::ExecuteSelfObject(IAObjectAgreement Agreement, IAParam* Param)
{
	//定义存储目标对象的组
	TArray<IIAOO*> TargetObjectGroup;
	//从数据模组获取对象组
	Model->GetSelfObject(Agreement.ObjectGroup, TargetObjectGroup);
	//循环调用反射事件
	for (int i = 0; i < TargetObjectGroup.Num(); ++i)
	{
		//获取反射方法
		UFunction* ExeFunc = TargetObjectGroup[i]->GetObjectBody()->FindFunction(Agreement.FunctionName);
		if (ExeFunc)
		{
			//设置调用成功
			Param->CallResult = ECallResult::Succeed;
			//执行方法
			TargetObjectGroup[i]->GetObjectBody()->ProcessEvent(ExeFunc, Param->ParamPtr);
		}
		else
		{
			//设置找不到方法
			Param->CallResult = ECallResult::NoFunction;
		}
	}
	//如果获取的对象有缺失, 设置结果为对象缺失, 这个结果的优先级最高
	if (TargetObjectGroup.Num() != Agreement.ObjectGroup.Num())
		Param->CallResult = ECallResult::LackObject;
}

void UIAModule::ExecuteOtherObject(IAObjectAgreement Agreement, IAParam* Param)
{
	//定义存储目标对象的组
	TArray<IIAOO*> TargetObjectGroup;
	//从数据组件获取对象组
	int32 TotalObjectNum = Model->GetOtherObject(Agreement.ObjectGroup, TargetObjectGroup);
	//循环调用反射事件
	for (int i = 0; i < TargetObjectGroup.Num(); ++i)
	{
		//获取反射方法
		UFunction* ExeFunc = TargetObjectGroup[i]->GetObjectBody()->FindFunction(Agreement.FunctionName);
		if (ExeFunc)
		{
			//设置调用成功
			Param->CallResult = ECallResult::Succeed;
			//执行方法
			TargetObjectGroup[i]->GetObjectBody()->ProcessEvent(ExeFunc, Param->ParamPtr);
		}
		else
		{
			//设置找不到方法
			Param->CallResult = ECallResult::NoFunction;
		}
	}
	//判断对象有没有缺失
	if (Agreement.ObjectGroup.Num() + TargetObjectGroup.Num() != TotalObjectNum)
		Param->CallResult = ECallResult::LackObject;
}

void UIAModule::ExecuteClassOtherObject(IAObjectAgreement Agreement, IAParam* Param)
{
	//定义存储目标对象的组
	TArray<IIAOO*> TargetObjectGroup;
	//从数据组件获取对象组
	int32 TotalClassNum = Model->GetClassOtherObject(Agreement.ObjectGroup, TargetObjectGroup);
	//循环调用反射事件
	for (int i = 0; i < TargetObjectGroup.Num(); ++i)
	{
		//获取反射方法
		UFunction* ExeFunc = TargetObjectGroup[i]->GetObjectBody()->FindFunction(Agreement.FunctionName);
		if (ExeFunc)
		{
			//设置调用成功
			Param->CallResult = ECallResult::Succeed;
			//执行方法
			TargetObjectGroup[i]->GetObjectBody()->ProcessEvent(ExeFunc, Param->ParamPtr);
		}
		else
		{
			//设置找不到方法
			Param->CallResult = ECallResult::NoFunction;
		}
	}
	//判断对象缺失
	if (Agreement.ObjectGroup.Num() + TargetObjectGroup.Num() != TotalClassNum)
		Param->CallResult = ECallResult::LackObject;
}

void UIAModule::ExecuteSelfClass(IAObjectAgreement Agreement, IAParam* Param)
{
	//定义存储目标对象的组
	TArray<IIAOO*> TargetObjectGroup;
	//从数据组件获取对象组
	Model->GetSelfClass(Agreement.ObjectGroup, TargetObjectGroup);
	//循环调用反射事件
	for (int i = 0; i < TargetObjectGroup.Num(); ++i)
	{
		//获取反射方法
		UFunction* ExeFunc = TargetObjectGroup[i]->GetObjectBody()->FindFunction(Agreement.FunctionName);
		if (ExeFunc)
		{
			//设置调用成功
			Param->CallResult = ECallResult::Succeed;
			//执行方法
			TargetObjectGroup[i]->GetObjectBody()->ProcessEvent(ExeFunc, Param->ParamPtr);
		}
		else
		{
			//设置找不到方法
			Param->CallResult = ECallResult::NoFunction;
		}
	}
	//判断对象缺失
	if(TargetObjectGroup.Num() == 0)
		Param->CallResult = ECallResult::LackObject;
}

void UIAModule::ExecuteOtherClass(IAObjectAgreement Agreement, IAParam* Param)
{
	//定义存储目标对象的组
	TArray<IIAOO*> TargetObjectGroup;
	//从数据组件获取对象组
	Model->GetOtherClass(Agreement.ObjectGroup, TargetObjectGroup);
	//循环调用反射事件
	for (int i = 0; i < TargetObjectGroup.Num(); ++i)
	{
		//获取反射方法
		UFunction* ExeFunc = TargetObjectGroup[i]->GetObjectBody()->FindFunction(Agreement.FunctionName);
		if (ExeFunc)
		{
			//设置调用成功
			Param->CallResult = ECallResult::Succeed;
			//执行方法
			TargetObjectGroup[i]->GetObjectBody()->ProcessEvent(ExeFunc, Param->ParamPtr);
		}
		else
		{
			//设置找不到方法
			Param->CallResult = ECallResult::NoFunction;
		}
	}
	//判断对象缺失
	if (TargetObjectGroup.Num() == 0)
		Param->CallResult = ECallResult::LackObject;
}

void UIAModule::ExecuteAll(IAObjectAgreement Agreement, IAParam* Param)
{
	//定义存储目标对象的组
	TArray<IIAOO*> TargetObjectGroup;
	//从数据组件获取对象组
	Model->GetAll(TargetObjectGroup);
	//循环调用反射事件
	for (int i = 0; i < TargetObjectGroup.Num(); ++i)
	{
		//获取反射方法
		UFunction* ExeFunc = TargetObjectGroup[i]->GetObjectBody()->FindFunction(Agreement.FunctionName);
		if (ExeFunc)
		{
			//设置调用成功
			Param->CallResult = ECallResult::Succeed;
			//执行方法
			TargetObjectGroup[i]->GetObjectBody()->ProcessEvent(ExeFunc, Param->ParamPtr);
		}
		else
		{
			//设置找不到方法
			Param->CallResult = ECallResult::NoFunction;
		}
	}
}


