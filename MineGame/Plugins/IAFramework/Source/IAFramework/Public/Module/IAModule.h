// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Common/IACommon.h"
#include "IAModule.generated.h"


/*
 * 模组
 */
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class IAFRAMEWORK_API UIAModule : public USceneComponent
{
	GENERATED_BODY()

public:

	/*
	 * 
	 */
	UPROPERTY(EditAnywhere, DisplayName = "模组类型",Category="IA")
	EGameModule ModuleType;

public:

	UIAModule();

	/*
	 * 创建
	 */
	void Create() {};

	/*
	 * Module的Init函数
	 */
	virtual void ModuleInit();

	/*
	 * Module的BeginPlay函数
	 */
	virtual void ModuleBeginPlay() {};

	/*
	 * Module的Tick函数
	 */
	virtual void ModuleTick(float DeltaSeconds) {};
	
	/*
	 * Module的情路函数
	 */
	virtual void ModuleClear();

	/*
	 * Module是否初始化完成
	 */
	bool IsInit() const { return Init; }

protected:

	bool Init;
};