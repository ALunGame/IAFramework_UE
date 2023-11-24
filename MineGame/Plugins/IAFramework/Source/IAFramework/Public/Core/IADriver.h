// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Module/IACenterModule.h"
#include "Common/IACommon.h"
#include "Object/IAOO.h"
#include "IADriver.generated.h"

/*
* 框架的中心
*/
UCLASS()
class IAFRAMEWORK_API AIADriver : public AActor
{
	GENERATED_BODY()

public:

	//组件
	UPROPERTY(EditAnywhere, NoClear, BlueprintReadOnly, Category = "IA")
	USceneComponent* RootScene;

	//中央模组
	UPROPERTY(EditAnywhere, NoClear, BlueprintReadOnly, Category = "IA")
	UIACenterModule* Center;
	
public:
	AIADriver();

	//进行框架数据初始化, 模组创建模块, 设定全局数据
	virtual void PostInitializeComponents() override;

	//第一帧调用BeginPlay()，其他帧调用Tick
	virtual void Tick(float DeltaTime) override;

	//提供给资源们进行注册
	bool RegisterToModule(IIAOO* ObjectInst);
	
#if WITH_EDITOR
	//属性修改方法
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

	/*
	 * 执行模组反射方法
	 */
	void ExecuteFunction(IAModuleAgreement Agreement, IAParam* Param);

	/*
	 * 执行对象反射方法
	 */
	void ExecuteFunction(IAObjectAgreement Agreement, IAParam* Param);

	//注册执行方法
	template<typename RetType, typename... VarTypes>
	IAFunHandle RegisterFunPort(EGameModule ModuleType, FName CallName, TFunction<RetType(VarTypes...)> InsFun);

protected:
	//是否已经运行BeginPlay函数
	bool IsBeginPlay;
	
protected:

	//调用框架模组与模块的Init()函数
	virtual void BeginPlay() override;

	//注册GamePlay相关数据
	void RegisterGamePlay();

};

template <typename RetType, typename ... VarTypes>
IAFunHandle AIADriver::RegisterFunPort(EGameModule ModuleType, FName CallName, TFunction<RetType(VarTypes...)> InsFun)
{
	return Center->RegisterFunPort<RetType, VarTypes...>(ModuleType, CallName, InsFun);
}
