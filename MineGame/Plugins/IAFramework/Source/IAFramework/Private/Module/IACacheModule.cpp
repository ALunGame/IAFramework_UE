// Fill out your copyright notice in the Description page of Project Settings.


#include "Module/IACacheModule.h"

#include "Asset/IAAssetModule.h"
#include "Object/Actor/IAActor.h"
#include "Object/Object/IAObject.h"
#include "Object/UI/IAUserWidget.h"

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
		//执行显示
		CacheActor->SetActorHiddenInGame(false);
		return CacheActor;
	}
	
	UClass* ActorClass = UIACommon::Get()->GetAssetModule()->LoadClass(ActorName);
	AIAActor* InstActor = GetWorld()->SpawnActor<AIAActor>(ActorClass, SpawnTransform);
	return InstActor;
}

void UIACacheModule::RecycleActor(AIAActor* InActor)
{
	//放入缓存
	if (!ActorCache.Contains(InActor->GetCacheName()))
	{
		ActorCache.Add(InActor->GetCacheName(), TArray<AIAActor*>());
	}
	ActorCache.Find(InActor->GetCacheName())->Add(InActor);

	//执行隐藏
	InActor->SetActorHiddenInGame(true);
}

UIAObject* UIACacheModule::CreateObject(FName ObjectName)
{
	//缓存
	if (ObjectCache.Contains(ObjectName) && ObjectCache.Find(ObjectName)->Num() > 0)
	{
		UIAObject* CacheObject = ObjectCache.Find(ObjectName)->Pop();
		return CacheObject;
	}
	
	UClass* ObjectClass = UIACommon::Get()->GetAssetModule()->LoadClass(ObjectName);
	UIAObject* InstObject = NewObject<UIAObject>(this, ObjectClass);
	InstObject->AddToRoot();
	
	return InstObject;
}

void UIACacheModule::RecycleObject(UIAObject* InObject)
{
	//放入缓存
	if (!ObjectCache.Contains(InObject->GetCacheName()))
	{
		ObjectCache.Add(InObject->GetCacheName(), TArray<UIAObject*>());
	}
	ObjectCache.Find(InObject->GetCacheName())->Add(InObject);
}

UIAUserWidget* UIACacheModule::CreateWidget(FName WidgetName)
{
	//缓存
	if (WidgetCache.Contains(WidgetName) && WidgetCache.Find(WidgetName)->Num() > 0)
	{
		UIAUserWidget* CacheWidget = WidgetCache.Find(WidgetName)->Pop();
		CacheWidget->SetVisibility(ESlateVisibility::Visible);
		return CacheWidget;
	}
	
	UClass* WidgetClass = UIACommon::Get()->GetAssetModule()->LoadClass(WidgetName);
	UIAUserWidget* InstWidget = CreateWidget<UIAUserWidget>(GetWorld(), WidgetClass);
	
	return InstWidget;
}

void UIACacheModule::RecycleWidget(UIAUserWidget* InWidget)
{
	//放入缓存
	if (!ObjectCache.Contains(InObject->GetCacheName()))
	{
		ObjectCache.Add(InObject->GetCacheName(), TArray<UIAObject*>());
	}
	ObjectCache.Find(InObject->GetCacheName())->Add(InObject);
}


