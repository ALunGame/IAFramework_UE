// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IAAssetTypes.generated.h"

/**
 * 
 */
UCLASS()
class IAFRAMEWORK_API UIAAssetTypes : public UObject
{
	GENERATED_BODY()
	
public:
	inline static const FPrimaryAssetType AssetMappingType = TEXT("AssetMappingType");
};

USTRUCT()
struct FObjectAsset
{
	GENERATED_BODY()
	
public:

	//资源名
	UPROPERTY(EditAnywhere)
	FName Name;
	
	//资源链接
	UPROPERTY(EditAnywhere)
	FSoftObjectPath AssetPath;

	//加载出来的对象
	UPROPERTY()
	UObject* Object;
};

USTRUCT()
struct FClassAsset
{
	GENERATED_BODY()

public:

	//资源名
	UPROPERTY(EditAnywhere)
	FName Name;
	
	//资源链接
	UPROPERTY(EditAnywhere)
	FSoftClassPath AssetPath;

	//加载出来的对象
	UPROPERTY()
	UClass* Class;
};
