// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Module/IAModule.h"
#include "Common/IACommon.h"
#include "Game/IAGameTypes.h"
#include "Module/IATimerModule.h"
#include "UObject/Interface.h"
#include "IAOO.generated.h"

// This class does not need to be modified.
UINTERFACE()
class UIAOO : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class IAFRAMEWORK_API IIAOO
{
	GENERATED_BODY()

public:

	//是否允许帧运行,如果要允许帧运行需要在构造函数或者BeginPlay设置,在UE4里默认为false
	bool IsAllowTickEvent;

	//生命周期状态
	EBaseObjectLife LifeState;

	//生命运行状态
	EBaseObjectState RunState;

public:

	//注册到框架
	void RegisterToModule(EGameModule ModType, FName ObjName = FName(), FName ClsName = FName());
	
	//获取对象名
	FName GetObjectName();

	//获取类名
	FName GetClassName();

	//获得所属模组
	EGameModule GetModuleType() const;

	//获取Obejct主体
	UObject* GetObjectBody() const;
	
	//框架获取世界函数
	UWorld* GetIAWorld() const;

	//从外部指定模组
	void AssignModule(UIAModule* Mod);

	//激活生命周期, 激活成功后返回true, 停止调用
	bool ActiveLife();

	//销毁生命周期函数, 销毁成功后返回true, 从数据模块注销
	bool DestroyLife();

	//生命周期,由模组管理器调用
	virtual void IAInit();//初始化
	virtual void IALoading();//加载绑定的资源
	virtual void IARegister();//注册数据或者事件
	virtual void IAEnable();//激活对象

	virtual void IATick(float DeltaSeconds);//帧函数

	virtual void IADisable();//失活对象
	virtual void IAUnRegister();//注销数据或者事件
	virtual void IAUnLoading();//销毁绑定资源
	virtual void IARelease();//释放自己

	//激活对象
	virtual void OnEnable();

	//失活对象
	virtual void OnDisable();

	//销毁自己
	void IADestroy();
	
protected:

	//保存自身的UObject
	UObject* IBody;

	//保存对应的模组
	UIAModule* IModule;

	//保存驱动器
	AIADriver* IDriver;

	//对象名字
	FName IObjectName;

	//对象类名字
	FName IClassName;

	//对应模组的序号
	EGameModule Module;

protected:
	
	//执行反射方法
	void ExecuteFunction(IAModuleAgreement Agreement, IAParam* Param);

	//执行反射方法
	void ExecuteFunction(IAObjectAgreement Agreement, IAParam* Param);

	//注册调用接口
	template<typename RetType, typename... VarTypes>
	IACallHandle<RetType, VarTypes...> RegisterCallPort(FName CallName);

	//注册方法接口
	template<typename RetType, typename... VarTypes>
	IAFunHandle RegisterFunPort(EGameModule ModuleType, FName CallName, TFunction<RetType(VarTypes...)> InsFun);

	//外部方法单纯获取资源链接
	FWealthURL* GainWealthURL(FName WealthName);
	void GainWealthURL(FName WealthKind, TArray<FWealthURL*>& OutURL);

	//加载Object类型资源接口
	void LoadObjectWealth(FName WealthName, FName FunName);
	void LoadObjectWealthKind(FName WealthKind, FName FunName);

	//加载Class类型资源接口
	void LoadClassWealth(FName WealthName, FName FunName);
	void LoadClassWealthKind(FName WealthKind, FName FunName);

	//创建一个对象实例
	void BuildSingleClassWealth(EWealthType WealthType, FName WealthName, FName FunName);
	void BuildSingleClassWealth(EWealthType WealthType, FName WealthName, FName FunName, FTransform SpawnTransform);

	//创建同资源种类名的对象实例, 同种类名下的每个资源链接创建一个对象实例
	void BuildKindClassWealth(EWealthType WealthType, FName WealthKind, FName FunName);
	void BuildKindClassWealth(EWealthType WealthType, FName WealthKind, FName FunName, FTransform SpawnTransform);
	void BuildKindClassWealth(EWealthType WealthType, FName WealthKind, FName FunName, TArray<FTransform> SpawnTransforms);

	//创建多个同资源名的对象实例
	void BuildMultiClassWealth(EWealthType WealthType, FName WealthName, int32 Amount, FName FunName);
	void BuildMultiClassWealth(EWealthType WealthType, FName WealthName, int32 Amount, FName FunName, FTransform SpawnTransform);
	void BuildMultiClassWealth(EWealthType WealthType, FName WealthName, int32 Amount, FName FunName, TArray<FTransform> SpawnTransforms);

	//设置计时器
	template<class UserClass>
	void SetTimer(FName TimerName, UserClass* UserObj, typename IATimerEvent::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod, float InRateTime, int InTotalRunTimes = -1, float InFirstDelayTime = -1.f);

	//暂停计时器
	void StopTimer(FName TimerName);

	//清空所有计时器
	void StopTimers();
};

template <typename RetType, typename ... VarTypes>
IACallHandle<RetType, VarTypes...> IIAOO::RegisterCallPort(FName CallName)
{
	return IModule->RegisterCallPort<RetType, VarTypes...>(CallName);
}

template <typename RetType, typename ... VarTypes>
IAFunHandle IIAOO::RegisterFunPort(EGameModule ModuleType, FName CallName, TFunction<RetType(VarTypes...)> InsFun)
{
	if (this->Module == ModuleType)
		return IModule->RegisterFunPort<RetType, VarTypes...>(CallName, InsFun);
	else
		return IDriver->RegisterFunPort<RetType, VarTypes...>(ModuleType, CallName, InsFun);
}

template <class UserClass>
void IIAOO::SetTimer(FName TimerName, UserClass* UserObj, typename IATimerEvent::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod,
	float InRateTime, int InTotalRunTimes, float InFirstDelayTime)
{
	UIACommon::Get()->GetTimerModule()->SetTimer(TimerName,UserObj,InMethod,InRateTime,InTotalRunTimes,InFirstDelayTime);
}

inline void IIAOO::StopTimer(FName TimerName)
{
	UIACommon::Get()->GetTimerModule()->StopTimer(this,TimerName);
}

inline void IIAOO::StopTimers()
{
	UIACommon::Get()->GetTimerModule()->StopTimers(this);
}
