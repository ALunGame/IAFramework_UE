#include "UI/Panel/IAPanelWidget.h"

bool UIAPanelWidget::Initialize()
{
	if (!Super::Initialize()) return false;
	
	return true;
}

void UIAPanelWidget::Awake()
{
}

void UIAPanelWidget::Show()
{
}

void UIAPanelWidget::Hide()
{
}

void UIAPanelWidget::Destroy()
{
}

#if WITH_EDITOR

void UIAPanelWidget::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	
	// if (PropertyChangedEvent.MemberProperty)
	// {
	// 	if (PropertyChangedEvent.MemberProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UIAPanelWidget, UIProperty))
	// 	{
	// 		//UIProperty.UIName = FName(GetFName().GetPlainNameString());
	// 		GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::White, GetFName().GetPlainNameString());
	// 	}
	// }
}

#endif
