// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/IADriver.h"

#include "Kismet/GameplayStatics.h"

// Sets default values
AIADriver::AIADriver()
{
	IsBeginPlay =  false;
	
	PrimaryActorTick.bCanEverTick = true;

	//生成组件
	RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
	RootComponent = RootScene;
	
	//创建中央模组
	Center = CreateDefaultSubobject<UIACenterModule>(TEXT("Center"));
	Center->SetupAttachment(RootComponent);
}

void AIADriver::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	//设置到全局方法中
	UIACommon::Get()->SetDriver(this);
	//创建
    Center->Create();
	//加载模组
	Center->LoadAllModules();
}

void AIADriver::BeginPlay()
{
	Super::BeginPlay();
	
	//迭代调用Init函数
	Center->ModuleInit();
}

void AIADriver::RegisterGamePlay()
{
	//获取Controller并且注册到DDCommon
	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	//注册到Common
	if (!PlayerController)
		IA::Debug() << "No PlayerController" << IA::Endl();
	else
		UIACommon::Get()->InitController(PlayerController);
}

void AIADriver::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!IsBeginPlay)
	{
		//迭代调用Begin函数
		Center->ModuleBeginPlay();
		//只执行第一帧
		IsBeginPlay = true;
	}
	else
		//迭代调用Tick函数
		Center->ModuleTick(DeltaTime);
}

void AIADriver::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
}
