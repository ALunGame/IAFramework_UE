// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IAModule.h"
#include "IACacheModule.generated.h"

class AIAActor;
class UIAObject;
class UIAUserWidget;

class UIACacheActorNode;
class UIACacheObjectNode;
class UIACacheUserWidgetNode;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class IAFRAMEWORK_API UIACacheModule : public UIAModule
{
	GENERATED_BODY()

public:

	virtual void ModuleInit() override;

	//实例化演员
	AIAActor* GetActor(const FName ActorName, FTransform SpawnTransform = FTransform::Identity);
	//回收演员
	void RecycleActor(AIAActor* InActor);

	//实例化Object
	UIAObject* GetObject(const FName ObjectName);
	//回收Object
	void RecycleObject(UIAObject* InObject);

	//实例化Widget
	TSharedPtr<UIAUserWidget> GetWidget(const FName WidgetName);
	//回收Widget
	void RecycleWidget(TSharedPtr<UIAUserWidget> InWidget);

private:

	UPROPERTY()
	TMap<FName,UIACacheActorNode*> ActorCache;

	UPROPERTY()
	TMap<FName,UIACacheObjectNode*> ObjectCache;

	UPROPERTY()
	TMap<FName,UIACacheUserWidgetNode*> WidgetCache;
};
