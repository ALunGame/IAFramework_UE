// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Common/IACommon.h"
#include "IAMM.generated.h"

class UIAModule;

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIAMM : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class IAFRAMEWORK_API IIAMM
{
	GENERATED_BODY()

public:

	//指定模组
	void AssignModule(UIAModule* Mod);
	
protected:

	//保存对应的模组
	UIAModule* IModule;

	//保存驱动器
	AIADriver* IDriver;

	//对应模组的序号
	EGameModule ModuleType;


protected:

	//执行反射方法
	void ExecuteFunction(IAModuleAgreement Agreement, IAParam* Param);

	//执行反射方法
	void ExecuteFunction(IAObjectAgreement Agreement, IAParam* Param);
	
	//获取世界
	UWorld* GetIAWorld() const;
};
