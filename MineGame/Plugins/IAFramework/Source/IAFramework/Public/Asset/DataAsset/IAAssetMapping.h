// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Asset/IAAssetTypes.h"
#include "Engine/DataAsset.h"
#include "IAAssetMapping.generated.h"

/**
 * 通用的资源映射
 */
UCLASS()
class IAFRAMEWORK_API UIAAssetMapping : public UDataAsset
{
	GENERATED_BODY()

public:
	
	UPROPERTY(EditAnywhere)
	TArray<FObjectAsset> ObjectData;
	
	UPROPERTY(EditAnywhere)
	TArray<FClassAsset> ClassData;

public:

	virtual FPrimaryAssetId GetPrimaryAssetId() const override;
};
