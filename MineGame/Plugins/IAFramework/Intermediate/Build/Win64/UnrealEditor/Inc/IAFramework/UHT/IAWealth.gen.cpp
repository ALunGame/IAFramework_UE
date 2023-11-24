// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IAFramework/Public/Core/IAWealth.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAWealth() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAMM_NoRegister();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAWealth();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAWealth_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IAFramework();
// End Cross Module References
	void UIAWealth::StaticRegisterNativesUIAWealth()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIAWealth);
	UClass* Z_Construct_UClass_UIAWealth_NoRegister()
	{
		return UIAWealth::StaticClass();
	}
	struct Z_Construct_UClass_UIAWealth_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GCWidgetGroup_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GCWidgetGroup_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GCWidgetGroup;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIAWealth_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IAFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAWealth_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \xe8\xb5\x84\xe6\xba\x90\n */" },
		{ "IncludePath", "Core/IAWealth.h" },
		{ "ModuleRelativePath", "Public/Core/IAWealth.h" },
		{ "ToolTip", "\xe8\xb5\x84\xe6\xba\x90" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIAWealth_Statics::NewProp_GCWidgetGroup_Inner = { "GCWidgetGroup", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAWealth_Statics::NewProp_GCWidgetGroup_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/IAWealth.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIAWealth_Statics::NewProp_GCWidgetGroup = { "GCWidgetGroup", nullptr, (EPropertyFlags)0x0020088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIAWealth, GCWidgetGroup), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIAWealth_Statics::NewProp_GCWidgetGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIAWealth_Statics::NewProp_GCWidgetGroup_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIAWealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIAWealth_Statics::NewProp_GCWidgetGroup_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIAWealth_Statics::NewProp_GCWidgetGroup,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UIAWealth_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIAMM_NoRegister, (int32)VTABLE_OFFSET(UIAWealth, IIAMM), false },  // 3942511474
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIAWealth_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIAWealth>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIAWealth_Statics::ClassParams = {
		&UIAWealth::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIAWealth_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIAWealth_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIAWealth_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIAWealth_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIAWealth()
	{
		if (!Z_Registration_Info_UClass_UIAWealth.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIAWealth.OuterSingleton, Z_Construct_UClass_UIAWealth_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIAWealth.OuterSingleton;
	}
	template<> IAFRAMEWORK_API UClass* StaticClass<UIAWealth>()
	{
		return UIAWealth::StaticClass();
	}
	UIAWealth::UIAWealth(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIAWealth);
	UIAWealth::~UIAWealth() {}
	struct Z_CompiledInDeferFile_FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Core_IAWealth_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Core_IAWealth_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIAWealth, UIAWealth::StaticClass, TEXT("UIAWealth"), &Z_Registration_Info_UClass_UIAWealth, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIAWealth), 2629866704U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Core_IAWealth_h_2770257397(TEXT("/Script/IAFramework"),
		Z_CompiledInDeferFile_FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Core_IAWealth_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Core_IAWealth_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
