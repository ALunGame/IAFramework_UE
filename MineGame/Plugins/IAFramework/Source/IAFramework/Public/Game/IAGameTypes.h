// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IAGameTypes.generated.h"


#pragma region GamePart

/************************************************************************/
/* 开发的游戏的内容放这里              Begin            开发的游戏的内容放这里*/
/************************************************************************/

//当前不能有多个驱动器
//模组约定, 如果要使用DataDriven本身的UI框架, 请一定要把HUD模组放在第二位, UIFrame框架管理器始终在HUD模组下
UENUM(BlueprintType)
enum class EGameModule : uint8
{
	Null		UMETA(DisplayName = "空"),		
	Center		UMETA(DisplayName = "中央模组"),				//中央模组
	HUD			UMETA(DisplayName = "UI模组"),				//UI模组
	Timer		UMETA(DisplayName = "计时器模组"),			//计时器模组
	Player		UMETA(DisplayName = "玩家模组"),				//玩家模组
	Cache		UMETA(DisplayName = "缓存模组"),				//缓存模组
};

/************************************************************************/
/* 开发的游戏的内容放这里               End             开发的游戏的内容放这里*/
/************************************************************************/


#pragma endregion

/**
 * 
 */
UCLASS()
class IAFRAMEWORK_API UIAGameTypes : public UObject
{
	GENERATED_BODY()
};
