// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DataAsset/IAAssetMapping.h"
#include "Engine/AssetManager.h"
#include "Engine/StreamableManager.h"
#include "Module/IAModule.h"
#include "IAAssetModule.generated.h"


struct FObjectAsset;
struct FClassAsset;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class IAFRAMEWORK_API UIAAssetModule : public UIAModule
{
	GENERATED_BODY()

public:
	
	UIAAssetModule();
	
	virtual void ModuleInit() override;

	virtual void ModuleBeginPlay() override;

	//同步加载Object
	template<typename T>
	T* LoadObject(const FName ObjectName);

	//异步加载Object
	template<typename T>
	void LoadObjectSync(const FName ObjectName,TFunction<T*>&& Callback);

	//同步加载Class
	UClass* LoadClass(const FName ClassName);

	//异步加载Class
	//void LoadClassSync(const FName ClassName,TFunction<UClass*>&& Callback);

private:

	bool LoadFinish;

	//资源映射文件
	TArray<UIAAssetMapping*> AssetMappings;
	
	//Object加载缓存
	TMap<FName,FObjectAsset*> ObjectCacheMap;
	
	//Class加载缓存
	TMap<FName,FClassAsset*> ClassCacheMap;

private:

	void LoadAllMappings();
	
	void OnAssetManagerAsyncLoadCompleted();

	FObjectAsset* GetObjectAsset(const FName ObjectName);
	
	FClassAsset* GetClassAsset(const FName ObjectName);
	
};

