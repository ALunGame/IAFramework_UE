// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IAFramework/Public/UI/Panel/IARootWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIARootWidget() {}
// Cross Module References
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIARootWidget();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIARootWidget_NoRegister();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAUserWidget();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IAFramework();
// End Cross Module References
	void UIARootWidget::StaticRegisterNativesUIARootWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIARootWidget);
	UClass* Z_Construct_UClass_UIARootWidget_NoRegister()
	{
		return UIARootWidget::StaticClass();
	}
	struct Z_Construct_UClass_UIARootWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootCanvas_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RootCanvas;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaskImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaskImage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIARootWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIAUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_IAFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIARootWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UI\xe6\xa0\xb9\n */" },
		{ "IncludePath", "UI/Panel/IARootWidget.h" },
		{ "ModuleRelativePath", "Public/UI/Panel/IARootWidget.h" },
		{ "ToolTip", "UI\xe6\xa0\xb9" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIARootWidget_Statics::NewProp_RootCanvas_MetaData[] = {
		{ "Comment", "//\xe6\xa0\xb9\xe8\x8a\x82\xe7\x82\xb9\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Panel/IARootWidget.h" },
		{ "ToolTip", "\xe6\xa0\xb9\xe8\x8a\x82\xe7\x82\xb9" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIARootWidget_Statics::NewProp_RootCanvas = { "RootCanvas", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIARootWidget, RootCanvas), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIARootWidget_Statics::NewProp_RootCanvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIARootWidget_Statics::NewProp_RootCanvas_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIARootWidget_Statics::NewProp_MaskImage_MetaData[] = {
		{ "Comment", "//\xe9\x81\xae\xe7\xbd\xa9\xe5\x9b\xbe\xe7\x89\x87\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Panel/IARootWidget.h" },
		{ "ToolTip", "\xe9\x81\xae\xe7\xbd\xa9\xe5\x9b\xbe\xe7\x89\x87" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIARootWidget_Statics::NewProp_MaskImage = { "MaskImage", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIARootWidget, MaskImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIARootWidget_Statics::NewProp_MaskImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIARootWidget_Statics::NewProp_MaskImage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIARootWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIARootWidget_Statics::NewProp_RootCanvas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIARootWidget_Statics::NewProp_MaskImage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIARootWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIARootWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIARootWidget_Statics::ClassParams = {
		&UIARootWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIARootWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIARootWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIARootWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIARootWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIARootWidget()
	{
		if (!Z_Registration_Info_UClass_UIARootWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIARootWidget.OuterSingleton, Z_Construct_UClass_UIARootWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIARootWidget.OuterSingleton;
	}
	template<> IAFRAMEWORK_API UClass* StaticClass<UIARootWidget>()
	{
		return UIARootWidget::StaticClass();
	}
	UIARootWidget::UIARootWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIARootWidget);
	UIARootWidget::~UIARootWidget() {}
	struct Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_UI_Panel_IARootWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_UI_Panel_IARootWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIARootWidget, UIARootWidget::StaticClass, TEXT("UIARootWidget"), &Z_Registration_Info_UClass_UIARootWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIARootWidget), 3233471288U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_UI_Panel_IARootWidget_h_3874894305(TEXT("/Script/IAFramework"),
		Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_UI_Panel_IARootWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_UI_Panel_IARootWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
