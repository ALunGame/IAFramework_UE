// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Panel/IARootWidget.h"

#include "Blueprint/WidgetTree.h"
#include "Components/CanvasPanel.h"
#include "Components/Image.h"

bool UIARootWidget::Initialize()
{
	Super::Initialize();

	//添加到视图
	AddToViewport();

	//获取根节点
	RootCanvas = Cast<UCanvasPanel>(GetRootWidget());
	RootCanvas->SetVisibility(ESlateVisibility::SelfHitTestInvisible);

	//生成遮罩
	MaskImage = WidgetTree->ConstructWidget<UImage>(UImage::StaticClass());

	//设置透明度
	NormalLucency = FLinearColor(1.f, 1.f, 1.f, 0.f);
	TranslucenceLucency = FLinearColor(0.f, 0.f, 0.f, 0.6f);
	ImPenetrableLucency = FLinearColor(0.f, 0.f, 0.f, 0.3f);
}

void UIARootWidget::OnEnable()
{
	//TODO : 注入
}

UCanvasPanel* UIARootWidget::GetRootCanvas()
{
	return RootCanvas;
}

UCanvasPanel* UIARootWidget::GetLayerCanvas(EUILayer Layer)
{
	if (LayerCanvas.Contains(Layer))
	{
		IA::Error() << "获取层级Canvas失败，没有对应层级" << IA::GetEnumValueAsString(Layer) << IA::Endl();
		return nullptr;
	}

	return *LayerCanvas.Find(Layer);
}

UImage* UIARootWidget::GetMask()
{
	return MaskImage;
}

void UIARootWidget::SetMask(EUIMaskType MaskType)
{
	switch (MaskType)
	{
	case EUIMaskType::Lucency:
		MaskImage->SetVisibility(ESlateVisibility::Visible);
		MaskImage->SetColorAndOpacity(NormalLucency);
		break;
	case EUIMaskType::Translucence:
		MaskImage->SetVisibility(ESlateVisibility::Visible);
		MaskImage->SetColorAndOpacity(TranslucenceLucency);
		break;
	case EUIMaskType::ImPenetrable:
		MaskImage->SetVisibility(ESlateVisibility::Visible);
		MaskImage->SetColorAndOpacity(ImPenetrableLucency);
		break;
	case EUIMaskType::Pentrate:
		MaskImage->SetVisibility(ESlateVisibility::Hidden);
		MaskImage->SetColorAndOpacity(NormalLucency);
		break;
	default: ;
	}
}
