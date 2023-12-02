// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Object/IAUserWidget.h"
#include "UI/IAUITypes.h"
#include "IARootWidget.generated.h"

class UImage;
class UCanvasPanel;
/**
 * UI根
 */
UCLASS()
class IAFRAMEWORK_API UIARootWidget : public UIAUserWidget
{
	GENERATED_BODY()

public:

	virtual bool Initialize() override;

	virtual void OnEnable() override;

	UCanvasPanel* GetRootCanvas();
	
	UCanvasPanel* GetLayerCanvas(EUILayer Layer);
	
	UImage* GetMask();

	void SetMask(EUIMaskType MaskType);

private:

	//根节点
	UCanvasPanel* RootCanvas;
	
	//层级Canvas
	UPROPERTY()
	TMap<EUILayer,UCanvasPanel*> LayerCanvas;

	//遮罩图片
	UPROPERTY()
	UImage* MaskImage;

	//透明度值
	FLinearColor NormalLucency;
	FLinearColor TranslucenceLucency;
	FLinearColor ImPenetrableLucency;
};
