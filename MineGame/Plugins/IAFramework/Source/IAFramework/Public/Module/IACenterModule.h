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
	void LoadAllModules();

	virtual void ModuleInit() override;

	virtual void ModuleBeginPlay() override;

	virtual void ModuleTick(float DeltaSeconds) override;

	virtual void ModuleClear() override;

	UIAModule* GetModule(EGameModule InModuleType);
	
protected:

	//保存模组的字典
	TMap<EGameModule,UIAModule*> ModuleGroup;
};

