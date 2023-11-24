// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Object/IAOO.h"
#include "IAGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class IAFRAMEWORK_API AIAGameModeBase : public AGameModeBase, public IIAOO
{
	GENERATED_BODY()

public:
	
	UPROPERTY(EditAnywhere, DisplayName = "模组类型",Category="IA")
	EGameModule ModuleType;

	//对象名字,如果为空,说明要手动指定,不为空就是自动指定
	UPROPERTY(EditAnywhere, Category = "IA")
	FName ObjectName;

	//类名字,如果为空,说明要手动指定,不为空就是自动指定
	UPROPERTY(EditAnywhere, Category = "IA")
	FName ClassName;

public:

	AIAGameModeBase();

protected:

	virtual void BeginPlay() override;
};
