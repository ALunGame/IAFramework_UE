// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/MainGamePlayerController.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"

AMainGamePlayerController::AMainGamePlayerController()
{
}

void AMainGamePlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	
	MainGamePlayerCharacter = Cast<AMainGamePlayerCharacter>(InPawn);
	MainGamePlayerCharacter->MineController = this;
}

#pragma region 输入相关

void AMainGamePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(
		GetLocalPlayer()))
	{
		Subsystem->AddMappingContext(InputMoveContext, 100);
		Subsystem->AddMappingContext(InputInteractiveMapping, 100);
	}

	RegisterInputMove();
	RegisterInputInteractive();
}

void AMainGamePlayerController::RegisterInputMove()
{
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(InputComponent))
	{
		if (IA_MoveForward)
		{
			EnhancedInputComponent->BindAction(IA_MoveForward, ETriggerEvent::Triggered, this,
			                                   &AMainGamePlayerController::MoveForward);
		}

		if (IA_MoveRight)
		{
			EnhancedInputComponent->BindAction(IA_MoveRight, ETriggerEvent::Triggered, this,
			                                   &AMainGamePlayerController::MoveRight);
		}
	}
}

void AMainGamePlayerController::RegisterInputInteractive()
{
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(InputComponent))
	{
		if (IA_LeftMouseClick)
		{
			EnhancedInputComponent->BindAction(IA_LeftMouseClick, ETriggerEvent::Started, this,
			                                   &AMainGamePlayerController::OnLeftMouseClickStart);
			EnhancedInputComponent->BindAction(IA_LeftMouseClick, ETriggerEvent::Completed, this,
			                                   &AMainGamePlayerController::OnLeftMouseClickEnd);
		}

		if (IA_RightMouseClick)
		{
			EnhancedInputComponent->BindAction(IA_RightMouseClick, ETriggerEvent::Started, this,
			                                   &AMainGamePlayerController::OnRightMouseClickStart);
			EnhancedInputComponent->BindAction(IA_RightMouseClick, ETriggerEvent::Completed, this,
			                                   &AMainGamePlayerController::OnRightMouseClickEnd);
		}
	}
}

void AMainGamePlayerController::MoveForward(const FInputActionValue& Value)
{
	if (BanMove)
	{
		return;
	}

	if ((GetPawn() != nullptr) && Value.IsNonZero())
	{
		//找到当前前方方向
		const FRotator Rotation = GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		//向量
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		//指定向量位移
		GetPawn()->AddMovementInput(Direction, Value.GetMagnitude());
	}
}

void AMainGamePlayerController::MoveRight(const FInputActionValue& Value)
{
	if (BanMove)
	{
		return;
	}

	if ((GetPawn() != nullptr) && (Value.IsNonZero()))
	{
		//找到当前右方向
		const FRotator Rotation = GetControlRotation();;
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		//向量
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		//指定向量位移
		GetPawn()->AddMovementInput(Direction, Value.GetMagnitude());
	}
}

void AMainGamePlayerController::OnLeftMouseClickStart(const FInputActionValue& Value)
{
}

void AMainGamePlayerController::OnLeftMouseClickEnd(const FInputActionValue& Value)
{
}

void AMainGamePlayerController::OnRightMouseClickStart(const FInputActionValue& Value)
{
}

void AMainGamePlayerController::OnRightMouseClickEnd(const FInputActionValue& Value)
{
}

#pragma endregion

void AMainGamePlayerController::SetBanMove(bool InBanMove)
{
	BanMove = InBanMove;
}

