// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "IABaseGameMode.generated.h"

//DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGameInit);

/**
 * 
 */
UCLASS()
class IAFRAMEWORK_API AIABaseGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:

	// UPROPERTY(BlueprintAssignable, Category = "IABP") //动态多播委托，使用BlueprintAssignable可以让其在蓝图中被使用
	// FOnGameInit OnGameInit;

public:

	//void SendGameInitEvent();

	UFUNCTION(BlueprintImplementableEvent, Category="IA", meta=(DisplayName = "游戏初始化完成"))
	void OnGameInit(); 

	
};
