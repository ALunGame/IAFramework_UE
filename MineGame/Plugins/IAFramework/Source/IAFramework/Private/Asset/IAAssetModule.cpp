// Fill out your copyright notice in the Description page of Project Settings.


#include "Asset/IAAssetModule.h"

UIAAssetModule::UIAAssetModule()
{
	LoadFinish = false;
}

void UIAAssetModule::ModuleInit()
{
	Super::ModuleInit();
}

void UIAAssetModule::ModuleBeginPlay()
{
	Super::ModuleBeginPlay();

#if WITH_EDITOR
	//循环设置WealthObject和WealthClass为空, 目的在于每次从编辑器启动游戏时资源Asset的状态都重置
	for (int i = 0; i < AssetMappings.Num(); ++i)
	{
		for (int j = 0; j < AssetMappings[i]->ObjectData.Num(); ++j)
		{
			AssetMappings[i]->ObjectData[j].Object = nullptr;
		}

		for (int z = 0; z < AssetMappings[i]->ObjectData.Num(); ++z)
		{
			AssetMappings[i]->ClassData[z].Class = nullptr;
		}
	}

#endif
}

void UIAAssetModule::LoadAllMappings()
{
	TArray<FPrimaryAssetId> PrimaryAssetIdList;
	UAssetManager::Get().GetPrimaryAssetIdList(UIAAssetTypes::AssetMappingType,PrimaryAssetIdList);

	for (FPrimaryAssetId AssetIdList : PrimaryAssetIdList)
	{
		UAssetManager::Get().LoadPrimaryAssetsWithType(UIAAssetTypes::AssetMappingType,TArray<FName>{},FStreamableDelegate::CreateUObject(this,&UIAAssetModule::OnAssetManagerAsyncLoadCompleted));
	}
}

void UIAAssetModule::OnAssetManagerAsyncLoadCompleted()
{
	TArray<UObject*> ObjectList;
	UAssetManager::Get().GetPrimaryAssetObjectList(UIAAssetTypes::AssetMappingType,ObjectList);
	
	for (const auto Obj : ObjectList)
	{
		AssetMappings.Add(Cast<UIAAssetMapping>(Obj));
	}
}

FObjectAsset* UIAAssetModule::GetObjectAsset(const FName ObjectName)
{
	for (int i = 0; i < AssetMappings.Num(); ++i)
		for (int j = 0; j < AssetMappings[i]->ObjectData.Num(); ++j)
			if (AssetMappings[i]->ObjectData[j].Name.IsEqual(ObjectName))
				return &(AssetMappings[i]->ObjectData[j]);
	return nullptr;
}

FClassAsset* UIAAssetModule::GetClassAsset(const FName ObjectName)
{
	for (int i = 0; i < AssetMappings.Num(); ++i)
		for (int j = 0; j < AssetMappings[i]->ClassData.Num(); ++j)
			if (AssetMappings[i]->ClassData[j].Name.IsEqual(ObjectName))
				return &(AssetMappings[i]->ClassData[j]);
	return nullptr;
}

template <typename T>
T* UIAAssetModule::LoadObject(const FName ObjectName)
{
	if (!LoadFinish)
	{
		IA::Debug() << "加载出错，资源模块尚未初始化:" << ObjectName << IA::Endl();
		return nullptr;
	}
	
	FObjectAsset* ObjectAsset = GetObjectAsset(ObjectName);
	if (!ObjectAsset)
	{
		IA::Debug() << "加载出错，文件不存在:" << ObjectName << IA::Endl();
		return nullptr;
	}

	if (!ObjectAsset->AssetPath.IsValid())
	{
		IA::Debug() << "加载出错，文件路径非法:" << ObjectName << IA::Endl();
		return nullptr;
	}

	if (ObjectAsset->Object)
	{
		return Cast<T>(ObjectAsset->Object);
	}
	
	TSharedPtr<FStreamableHandle> OneHandle = UAssetManager::GetStreamableManager().RequestSyncLoad(ObjectAsset->AssetPath);
	if (OneHandle.IsValid())
	{
		ObjectAsset->Object = OneHandle->GetLoadedAsset();
		return Cast<T>(ObjectAsset->Object);
	}

	IA::Debug() << "StreamableManager加载失败:" << ObjectName << ">>" << ObjectAsset->AssetPath.ToString() << IA::Endl();
	return nullptr;
}

template <typename T>
void UIAAssetModule::LoadObjectSync(const FName ObjectName,TFunction<T*>&& Callback)
{
	if (!LoadFinish)
	{
		IA::Debug() << "加载出错，资源模块尚未初始化:" << ObjectName << IA::Endl();
		return;
	}
	
	FObjectAsset* ObjectAsset = GetObjectAsset(ObjectName);
	if (!ObjectAsset)
	{
		IA::Debug() << "加载出错，文件不存在:" << ObjectName << IA::Endl();
		return;
	}

	if (!ObjectAsset->AssetPath.IsValid())
	{
		IA::Debug() << "加载出错，文件路径非法:" << ObjectName << IA::Endl();
		return;
	}

	if (ObjectAsset->Object)
	{
		if (Callback)
		{
			Callback(Cast<T>(ObjectAsset->Object));
		}
		return;
	}
	
	UAssetManager::GetStreamableManager().RequestAsyncLoad(ObjectAsset->AssetPath,[ObjectAsset,Callback](){
		ObjectAsset->Object = ObjectAsset->AssetPath.ResolveObject();
		if (Callback)
		{
			Callback(Cast<T>(ObjectAsset->Object));
		}
	});
}

UClass* UIAAssetModule::LoadClass(const FName ClassName)
{
	if (!LoadFinish)
	{
		IA::Debug() << "加载出错，资源模块尚未初始化:" << ClassName << IA::Endl();
		return nullptr;
	}
	
	FClassAsset* ClassAsset = GetClassAsset(ClassName);
	if (!ClassAsset)
	{
		IA::Debug() << "加载出错，文件不存在:" << ClassName << IA::Endl();
		return nullptr;
	}

	if (!ClassAsset->AssetPath.IsValid())
	{
		IA::Debug() << "加载出错，文件路径非法:" << ClassName << IA::Endl();
		return nullptr;
	}

	if (ClassAsset->Class)
	{
		return ClassAsset->Class;
	}
	
	TSharedPtr<FStreamableHandle> OneHandle = UAssetManager::GetStreamableManager().RequestSyncLoad(ClassAsset->AssetPath);
	if (OneHandle.IsValid())
	{
		ClassAsset->Class = Cast<UClass>(ClassAsset->AssetPath.ResolveObject());
		return ClassAsset->Class;
	}

	IA::Debug() << "StreamableManager加载失败:" << ClassName << ">>" << ClassAsset->AssetPath.ToString() << IA::Endl();
	return nullptr;
}

