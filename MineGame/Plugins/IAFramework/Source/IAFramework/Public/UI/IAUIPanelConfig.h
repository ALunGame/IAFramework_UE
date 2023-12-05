// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Game/IAGameCommon.h"
#include "IAUIPanelConfig.generated.h"

// struct FUIPanelConfig;
// enum class EUIPanelType : uint8;

/**
 * 
 */
UCLASS()
class IAFRAMEWORK_API UIAUIPanelConfig : public UDataAsset
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere,meta=(DisplayName = "UI界面配置"))
	TMap<EUIPanelType,FUIPanelConfig> PanelConfig;
};
