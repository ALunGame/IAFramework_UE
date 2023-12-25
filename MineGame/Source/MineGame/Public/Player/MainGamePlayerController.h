// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InputMappingContext.h"
#include "MainGamePlayerCharacter.h"
#include "GameFramework/PlayerController.h"
#include "MainGamePlayerController.generated.h"

/**
 * 
 */
UCLASS()
class MINEGAME_API AMainGamePlayerController : public APlayerController
{
	GENERATED_BODY()

public:

	bool BanMove;
	
	AMainGamePlayerCharacter* MainGamePlayerCharacter;

public:
	
#pragma region 移动输入映射
	
	UPROPERTY(EditAnywhere, Category="Input_Move")
	UInputMappingContext* InputMoveContext;

	UPROPERTY(EditAnywhere, Category="Input_Move|Action")
	UInputAction* IA_MoveForward;

	UPROPERTY(EditAnywhere, Category="Input_Move|Action")
	UInputAction* IA_MoveRight;
	
#pragma endregion

#pragma region 交互输入映射
	
	UPROPERTY(EditAnywhere, Category="Input_Interactive")
	UInputMappingContext* InputInteractiveMapping;

	UPROPERTY(EditAnywhere, Category="Input_Interactive|Action")
	UInputAction* IA_LeftMouseClick;

	UPROPERTY(EditAnywhere, Category="Input_Interactive|Action")
	UInputAction* IA_RightMouseClick;
	
#pragma endregion

public:

	AMainGamePlayerController();
	
	virtual void OnPossess(APawn* InPawn) override;
	
	virtual void SetupInputComponent() override;

	UFUNCTION(BlueprintCallable)
	void SetBanMove(bool InBanMove);

private:

private:
	
#pragma region 输入相关
	
	void RegisterInputMove();

	void RegisterInputInteractive();

	//前进
	void MoveForward(const FInputActionValue& Value);

	//左右
	void MoveRight(const FInputActionValue& Value);

	//开始鼠标左键
	void OnLeftMouseClickStart(const FInputActionValue& Value);

	//结束鼠标左键
	void OnLeftMouseClickEnd(const FInputActionValue& Value);

	//开始鼠标右键
	void OnRightMouseClickStart(const FInputActionValue& Value);

	//开始鼠标右键
	void OnRightMouseClickEnd(const FInputActionValue& Value);
	
#pragma endregion
	
};
