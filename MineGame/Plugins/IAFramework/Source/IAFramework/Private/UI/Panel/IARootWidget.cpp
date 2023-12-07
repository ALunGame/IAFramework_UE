// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Panel/IARootWidget.h"

#include "Blueprint/WidgetTree.h"
#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/Image.h"

bool UIARootWidget::Initialize()
{
	if (!Super::Initialize()) return false;

	//添加到视图
	//AddToViewport();

	//获取根节点
	RootCanvas = WidgetTree->ConstructWidget<UCanvasPanel>(UCanvasPanel::StaticClass());
	RootCanvas->SetVisibility(ESlateVisibility::SelfHitTestInvisible);

	//创建层级
	CreateLayerCanvas(EUILayer::Base,0);
	CreateLayerCanvas(EUILayer::First,100);
	CreateLayerCanvas(EUILayer::Second,200);
	CreateLayerCanvas(EUILayer::Third,300);
	CreateLayerCanvas(EUILayer::Top,400);

	//生成遮罩
	MaskImage = WidgetTree->ConstructWidget<UImage>(UImage::StaticClass());

	//设置透明度
	NormalLucency = FLinearColor(1.f, 1.f, 1.f, 0.f);
	TranslucenceLucency = FLinearColor(0.f, 0.f, 0.f, 0.6f);
	ImPenetrableLucency = FLinearColor(1.f, 1.f, 1.f, 1.f);

	SetMask(EUIMaskType::ImPenetrable);
	return true;
}

UCanvasPanel* UIARootWidget::GetRootCanvas() const
{
	return RootCanvas;
}

UCanvasPanel* UIARootWidget::GetLayerCanvas(EUILayer Layer)
{
	if (!LayerCanvas.Contains(Layer))
	{
		IA::Error() << "获取层级Canvas失败，没有对应层级" << IA::GetEnumValueAsString(Layer) << IA::Endl();
		return nullptr;
	}

	return LayerCanvas[Layer];
}

UImage* UIARootWidget::GetMask() const
{
	return MaskImage;
}

void UIARootWidget::SetMask(EUIMaskType MaskType) const
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

void UIARootWidget::CreateLayerCanvas(EUILayer InLayer, int InZOrder)
{
	UCanvasPanel* InstCanvas   = NewObject<UCanvasPanel>(this,UCanvasPanel::StaticClass());
	UCanvasPanelSlot* InstSlot = RootCanvas->AddChildToCanvas(InstCanvas);
	InstSlot->SetZOrder(InZOrder);
	InstCanvas->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
	LayerCanvas.Add(InLayer, InstCanvas);
}
