// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Widgets/Layout/Anchors.h"
#include "IAUITypes.generated.h"

/**
 * 
 */
UCLASS()
class IAFRAMEWORK_API UIAUITypes : public UObject
{
	GENERATED_BODY()
};

//UI层级
UENUM()
enum class EUILayer : uint8
{
	Base = 0,			//基础一般放置主界面
	First,				//由主界面打开
	Second,				//一级界面打开
	Third,				//二级界面打开
	Top,				//弹窗界面
};

//UI显示规则
UENUM()
enum class EUIShowRule : uint8 {
	DoNothing,							//不影响其他面板
	
	Overlay,							//覆盖，并加入界面栈
	Overlay_NoNeedBack,					//覆盖，不加入界面栈
	
	HideOther,							//隐藏其他，并加入界面栈
	HideOther_NoNeedBack,				//隐藏其他，不加入界面栈
};

//UI遮罩透明度
UENUM()
enum class EUIMaskType : uint8 {
	Lucency,        //全透明, 不能穿透
	Translucence,   //半透明，不能穿透
	ImPenetrable,   //低透明度，不能穿透
	Pentrate,       //全透明, 可以穿透
};

//面板属性
USTRUCT()
struct FUIProperty
{
	GENERATED_BODY()

public:
	
	//UI层级
	UPROPERTY(EditAnywhere)
	EUILayer UILayer;
	
	//UI默认显示规则
	UPROPERTY(EditAnywhere)
	EUIShowRule DefaultPanelShowRule;

	//UI显示默认遮罩
	UPROPERTY(EditAnywhere)
	EUIMaskType UIMaskType;

	//Canvas锚点
	UPROPERTY(EditAnywhere)
	FAnchors Anchors;

	//Canvas的Offset(pos, size)  Overlay的padding
	UPROPERTY(EditAnywhere)
	FMargin Offsets;

};

