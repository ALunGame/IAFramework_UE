// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class MINEGAME_API MineGameTypes
{
public:
	MineGameTypes();
	~MineGameTypes();
};


UENUM(BlueprintType)
enum class EEnemyCamp : uint8
{
	EC_Friendly					UMETA(DisplayName = "友善"),//友善
	EC_Hostility				UMETA(DisplayName = "敌对"),//敌对
	EC_Neutral_Friendly			UMETA(DisplayName = "中立-友善"),//中立-友善
	EC_Neutral_Hostility		UMETA(DisplayName = "中立-敌对"),//中立-敌对
};