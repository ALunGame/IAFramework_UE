// Fill out your copyright notice in the Description page of Project Settings.


#include "Module/IACacheModule.h"

#include "Asset/IAAssetModule.h"
#include "Object/Actor/IAActor.h"

void UIACacheModule::ModuleInit()
{
	Super::ModuleInit();
}

AIAActor* UIACacheModule::CreateActor(const FName ActorName, FTransform SpawnTransform)
{
	//缓存
	if (ActorCache.Contains(ActorName) && ActorCache.Find(ActorName)->Num() > 0)
	{
		AIAActor* CacheActor = ActorCache.Find(ActorName)->Pop();
		return CacheActor;
	}
	
	UClass* ActorClass = UIACommon::Get()->GetAssetModule()->LoadClass(ActorName);
	AIAActor* InstActor = GetWorld()->SpawnActor<AIAActor>(ActorClass, SpawnTransform);
	return InstActor;
}

void UIACacheModule::RecycleActor(AIAActor* InActor)
{
	
}

UIAObject* UIACacheModule::CreateObject(FName ObjectName)
{
}

void UIACacheModule::RecycleObject(AIAActor* InObject)
{
}

UIAUserWidget* UIACacheModule::CreateWidget(FName WidgetName)
{
}

void UIACacheModule::RecycleWidget(UIAUserWidget* InWidget)
{
}


