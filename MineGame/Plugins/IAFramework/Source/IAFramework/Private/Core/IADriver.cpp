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
	//加载模组
	Center->LoadAllModules(Center);
	//收集模组
	Center->GatherAllModules();
	//创建
	Center->Create(Center);
}

void AIADriver::BeginPlay()
{
	Super::BeginPlay();


	//迭代调用Init函数
	Center->ModuleInit(Center);
}

void AIADriver::RegisterGamePlay()
{
	//获取GameInstance
	UGameInstance* GameInstance = UGameplayStatics::GetGameInstance(GetWorld());
	//如果存在并且继承自IDDOO,就注册进Center,类名和对象名都是GameInstance
	if (GameInstance && Cast<IIAOO>(GameInstance))
		Cast<IIAOO>(GameInstance)->RegisterToModule(EGameModule::Center, "GameInstacne", "GameInstacne");

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
		Center->ModuleBeginPlay(Center);
		//只执行第一帧
		IsBeginPlay = true;
	}
	else
		//迭代调用Tick函数
		Center->ModuleTick(Center, DeltaTime);
}

bool AIADriver::RegisterToModule(IIAOO* ObjectInst)
{
	return Center->RegisterToModule(ObjectInst);
}

void AIADriver::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	//判断变更属性
	// if (PropertyChangedEvent.Property && PropertyChangedEvent.Property->GetFName() == GET_MEMBER_NAME_CHECKED(AIADriver, ModuleType))
	// 	Center->IterChangeModuleType(Center, ModuleType);
}

void AIADriver::ExecuteFunction(IAModuleAgreement Agreement, IAParam* Param)
{
	Center->ExecuteFunction(Agreement, Param);
}

void AIADriver::ExecuteFunction(IAObjectAgreement Agreement, IAParam* Param)
{
	Center->ExecuteFunction(Agreement, Param);
}

