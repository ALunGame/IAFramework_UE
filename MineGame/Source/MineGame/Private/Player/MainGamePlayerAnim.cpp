// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/MainGamePlayerAnim.h"

UMainGamePlayerAnim::UMainGamePlayerAnim()
{
	Speed = 0.f;
}

void UMainGamePlayerAnim::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	if (!MainGamePlayerCharacter)
	{
		MainGamePlayerCharacter = Cast<AMainGamePlayerCharacter>(TryGetPawnOwner());
	}

	if (MainGamePlayerCharacter)
	{
		UpdateAnimParam();
	}
}

void UMainGamePlayerAnim::UpdateAnimParam()
{
	if (!MainGamePlayerCharacter) return;
	
	//速度
	Speed = MainGamePlayerCharacter->GetVelocity().Size();

	float PreDir = MainGamePlayerCharacter->GetVelocity().ToOrientationRotator().Yaw - MainGamePlayerCharacter->GetActorRotation().Yaw;
	
	if (PreDir > 180.f)
	{
		PreDir -= 360.f;
	}
	if (PreDir < -180.f)
	{
		PreDir += 360.f;
	}

	Direction = PreDir;
}
