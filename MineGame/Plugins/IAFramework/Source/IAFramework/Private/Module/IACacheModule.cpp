// Fill out your copyright notice in the Description page of Project Settings.


#include "Module/IACacheModule.h"

#include "Asset/IAAssetModule.h"
#include "Core/IADriver.h"
#include "Module/Cache/IACacheActorNode.h"
#include "Module/Cache/IACacheObjectNode.h"
#include "Module/Cache/IACacheUserWidgetNode.h"
#include "Object/IAActor.h"
#include "Object/IAObject.h"
#include "Object/IAUserWidget.h"

void UIACacheModule::ModuleInit()
{
	Super::ModuleInit();
}

AIAActor* UIACacheModule::GetActor(const FName ActorName, FTransform SpawnTransform)
{
	//缓存
	if (ActorCache.Contains(ActorName) && ActorCache[ActorName]->Actors.Num() > 0)
	{
		AIAActor* CacheActor = ActorCache[ActorName]->Actors.Pop();
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
		ActorCache.Add(InActor->GetCacheName(), NewObject<UIACacheActorNode>());
	}
	ActorCache[InActor->GetCacheName()]->Actors.Add(InActor);

	//执行隐藏
	InActor->SetActorHiddenInGame(true);
}

UIAObject* UIACacheModule::GetObject(FName ObjectName)
{
	//缓存
	if (ObjectCache.Contains(ObjectName) && ObjectCache[ObjectName]->Objects.Num() > 0)
	{
		UIAObject* CacheObject = ObjectCache[ObjectName]->Objects.Pop();
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
		ObjectCache.Add(InObject->GetCacheName(), NewObject<UIACacheObjectNode>());
	}
	ObjectCache[InObject->GetCacheName()]->Objects.Add(InObject);
}

TSharedPtr<UIAUserWidget> UIACacheModule::GetWidget(const FName WidgetName)
{
	//缓存
	if (WidgetCache.Contains(WidgetName) && WidgetCache[WidgetName]->Widgets.Num() > 0)
	{
		TSharedPtr<UIAUserWidget> CacheWidget = WidgetCache[WidgetName]->Widgets.Pop();
		CacheWidget->SetVisibility(ESlateVisibility::Visible);
		return CacheWidget;
	}
	
	UClass* WidgetClass = UIACommon::Get()->GetAssetModule()->LoadClass(WidgetName);
	UIAUserWidget* InstWidget = CreateWidget<UIAUserWidget>(UIACommon::Get()->GetDriver()->GetWorld(), WidgetClass);
	return MakeShareable<UIAUserWidget>(InstWidget);
}

void UIACacheModule::RecycleWidget(TSharedPtr<UIAUserWidget> InWidget)
{
	//放入缓存
	if (!WidgetCache.Contains(InWidget->GetCacheName()))
	{
		WidgetCache.Add(InWidget->GetCacheName(), NewObject<UIACacheUserWidgetNode>());
	}
	WidgetCache[InWidget->GetCacheName()]->Widgets.Add(InWidget);
}


