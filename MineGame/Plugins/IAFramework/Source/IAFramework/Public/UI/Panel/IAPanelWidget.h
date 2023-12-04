// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Object/IAUserWidget.h"
#include "UI/IAUITypes.h"
#include "IAPanelWidget.generated.h"

/**
 * 
 */
UCLASS()
class IAFRAMEWORK_API UIAPanelWidget : public UIAUserWidget
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	FUIProperty UIProperty;

public:

	virtual bool Initialize() override;

	//UI面板生命周期
	virtual void Awake();		//初始化
	virtual void Show();		//显示
	virtual void Hide();		//隐藏
	virtual void Destroy();		//销毁

	//蓝图重写
	UFUNCTION(BlueprintImplementableEvent, Category="IA", meta=(DisplayName = "界面初始化"))
	void OnAwake();  
	
	UFUNCTION(BlueprintImplementableEvent, Category="IA", meta=(DisplayName = "显示界面"))
	void OnShow(); 

	UFUNCTION(BlueprintImplementableEvent, Category="IA", meta=(DisplayName = "隐藏界面"))
	void OnHide();  

	UFUNCTION(BlueprintImplementableEvent, Category="IA", meta=(DisplayName = "销毁界面"))
	void OnDestroy();  

	//动画回调函数
	UFUNCTION(BlueprintImplementableEvent)
	float DisplayEnterMovie();

	UFUNCTION(BlueprintImplementableEvent)
	float DisplayLeaveMovie();
	
};
