// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IAModule.h"
#include "Common/IACommon.h"
#include "Object/IAOO.h"
#include "IACenterModule.generated.h"

/*
 * 中心模组
 */
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class IAFRAMEWORK_API UIACenterModule : public UIAModule
{
	GENERATED_BODY()

public:
	//加载保存模组
	void LoadAllModules(UIAModule* Module);
	//递归创建模块
	void Create(UIAModule* Module);
	//递归初始化
	void ModuleInit(UIAModule* Module);
	//递归BeginPlay
	void ModuleBeginPlay(UIAModule* Module);
	//递归Tick
	void ModuleTick(UIAModule* Module, float DeltaSeconds);
	//提取所有模组到模组数组
	void GatherAllModules();
	//获得所有模组
	void GatherModule(UIAModule* Module, TArray<UIAModule*>& GatherGroup);
	//注册对象到模组
	bool RegisterToModule(IIAOO* ObejctInst);

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

	//保存模组的字典
	TMap<EGameModule,UIAModule*> ModuleGroup;
};

template <typename RetType, typename ... VarTypes>
IAFunHandle UIACenterModule::RegisterFunPort(EGameModule ModuleType, FName CallName, TFunction<RetType(VarTypes...)> InsFun)
{
	if (ModuleGroup[ModuleType])
		return ModuleGroup[ModuleType]->RegisterFunPort<RetType, VarTypes...>(CallName, InsFun);
	return IAFunHandle();
}
