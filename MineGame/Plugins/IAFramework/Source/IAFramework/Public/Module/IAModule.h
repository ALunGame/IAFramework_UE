// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Core/IAMessage.h"
#include "Common/IACommon.h"
#include "IAModule.generated.h"


class IIAOO;
class UIAModel;
class UIAWealth;

/*
 * 模组
 */
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class IAFRAMEWORK_API UIAModule : public USceneComponent
{
	GENERATED_BODY()

public:

	TArray<UIAModule*> ChildrenModule;

	//模组类型索引
	int32 ModuleTypeIndex;

	/*
	 * 
	 */
	UPROPERTY(EditAnywhere, DisplayName = "模组类型",Category="IA")
	EGameModule ModuleType;

public:

	UIAModule();

	/*
	 * 创建Model, Message, Wealth三个模块
	 */
	void Create();

	/*
	 * Module的Init函数
	 */
	virtual void ModuleInit();

	/*
	 * Module的BeginPlay函数
	 */
	virtual void ModuleBeginPlay();

	/*
	 * Module的Tick函数
	 */
	virtual void ModuleTick(float DeltaSeconds);

	//注册对象到数据模块
    void RegisterObject(IIAOO* ObjectInst);

	//模组所属对象销毁自身
	void ChildDestroy(FName ObjectName);

	//反射事件批量销毁对象
	UFUNCTION()
	void DestroyObject(EAgreementType Agreement, TArray<FName> TargetNameGroup);

	//反射事件批量激活对象
	UFUNCTION()
	void EnableObject(EAgreementType Agreement, TArray<FName> TargetNameGroup);

	//反射事件批量失活对象
	UFUNCTION()
	void DisableObject(EAgreementType Agreement, TArray<FName> TargetNameGroup);

	//调用模组方法
	void ExecuteFunction(IAModuleAgreement Agreement, IAParam* Param);

	//调用对象方法
	void ExecuteFunction(IAObjectAgreement Agreement, IAParam* Param);

	//注册调用方法
	template<typename RetType, typename... VarTypes>
	IACallHandle<RetType, VarTypes...> RegisterCallPort(FName CallName);

	//注册执行方法
	template<typename RetType, typename... VarTypes>
	IAFunHandle RegisterFunPort(FName CallName, TFunction<RetType(VarTypes...)> InsFun);

	//外部方法单纯获取资源链接
	FWealthURL* GainWealthURL(FName WealthName);
	void GainWealthURL(FName WealthKind, TArray<FWealthURL*>& OutURL);

	//加载Object类型资源接口
	void LoadObjectWealth(FName WealthName, FName ObjectName, FName FunName);
	void LoadObjectWealthKind(FName WealthKind, FName ObjectName, FName FunName);

	//加载Class类型资源接口
	void LoadClassWealth(FName WealthName, FName ObjectName, FName FunName);
	void LoadClassWealthKind(FName WealthKind, FName ObjectName, FName FunName);

	//创建一个对象实例
	void BuildSingleClassWealth(EWealthType WealthType, FName WealthName, FName ObjectName, FName FunName, FTransform SpawnTransform);

	//创建同资源种类名的对象实例, 同种类名下的每个资源链接创建一个对象实例
	void BuildKindClassWealth(EWealthType WealthType, FName WealthKind, FName ObjectName, FName FunName, TArray<FTransform> SpawnTransforms);

	//创建多个同资源名的对象实例
	void BuildMultiClassWealth(EWealthType WealthType, FName WealthName, int32 Amount, FName ObjectName, FName FunName, TArray<FTransform> SpawnTransforms);

protected:

	//数据模块指针
	UIAModel* Model;
	//消息模块指针
	UIAMessage* Message;
	//资源模块指针
	UIAWealth* Wealth;

protected:

	//执行单个对象方法
	void ExecuteSelfObject(IAObjectAgreement Agreement, IAParam* Param);
	//执行其余对象的方法
	void ExecuteOtherObject(IAObjectAgreement Agreement, IAParam* Param);
	//支持相同类的区域对象方法
	void ExecuteClassOtherObject(IAObjectAgreement Agreement, IAParam* Param);
	//执行类对象的方法
	void ExecuteSelfClass(IAObjectAgreement Agreement, IAParam* Param);
	//执行其他类对象的方法
	void ExecuteOtherClass(IAObjectAgreement Agreement, IAParam* Param);
	//执行所有对象的方法
	void ExecuteAll(IAObjectAgreement Agreement, IAParam* Param);
};

template <typename RetType, typename ... VarTypes>
IACallHandle<RetType, VarTypes...> UIAModule::RegisterCallPort(FName CallName)
{
	return Message->RegisterCallPort<RetType, VarTypes...>(CallName);
}

template <typename RetType, typename ... VarTypes>
IAFunHandle UIAModule::RegisterFunPort(FName CallName, TFunction<RetType(VarTypes...)> InsFun)
{
	return Message->RegisterFunPort<RetType, VarTypes...>(CallName, InsFun);
}