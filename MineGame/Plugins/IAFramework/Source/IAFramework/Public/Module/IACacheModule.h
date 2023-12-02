// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IAModule.h"
#include "IACacheModule.generated.h"

class AIAActor;
class UIAObject;
class UIAUserWidget;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class IAFRAMEWORK_API UIACacheModule : public UIAModule
{
	GENERATED_BODY()

public:

	virtual void ModuleInit() override;

	//实例化演员
	AIAActor* CreateActor(const FName ActorName, FTransform SpawnTransform = FTransform::Identity);
	//回收演员
	void RecycleActor(AIAActor* InActor);

	//实例化Object
	UIAObject* CreateObject(const FName ObjectName);
	//回收Object
	void RecycleObject(UIAObject* InObject);

	//实例化Widget
	UIAUserWidget* CreateWidget(const FName WidgetName);
	//回收Widget
	void RecycleWidget(UIAUserWidget* InWidget);

private:
	
	UPROPERTY()		//UPROPERTY为了强引用避免回收
	TMap<FName,TArray<AIAActor*>> ActorCache;

	UPROPERTY()		//UPROPERTY为了强引用避免回收
	TMap<FName,TArray<UIAObject*>> ObjectCache;

	UPROPERTY()
	TMap<FName,TArray<UIAUserWidget*>> WidgetCache;
};
