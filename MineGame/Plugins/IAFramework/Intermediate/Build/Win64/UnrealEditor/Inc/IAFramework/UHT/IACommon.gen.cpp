// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IAFramework/Public/Common/IACommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIACommon() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIACommon();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIACommon_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IAFramework();
// End Cross Module References
	void UIACommon::StaticRegisterNativesUIACommon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIACommon);
	UClass* Z_Construct_UClass_UIACommon_NoRegister()
	{
		return UIACommon::StaticClass();
	}
	struct Z_Construct_UClass_UIACommon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIACommon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IAFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIACommon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \xe9\x80\x9a\xe7\x94\xa8\xe5\x85\xac\xe5\x85\xb1\xe6\x96\xb9\xe6\xb3\x95\n */" },
		{ "IncludePath", "Common/IACommon.h" },
		{ "ModuleRelativePath", "Public/Common/IACommon.h" },
		{ "ToolTip", "\xe9\x80\x9a\xe7\x94\xa8\xe5\x85\xac\xe5\x85\xb1\xe6\x96\xb9\xe6\xb3\x95" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIACommon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIACommon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIACommon_Statics::ClassParams = {
		&UIACommon::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIACommon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIACommon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIACommon()
	{
		if (!Z_Registration_Info_UClass_UIACommon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIACommon.OuterSingleton, Z_Construct_UClass_UIACommon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIACommon.OuterSingleton;
	}
	template<> IAFRAMEWORK_API UClass* StaticClass<UIACommon>()
	{
		return UIACommon::StaticClass();
	}
	UIACommon::UIACommon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIACommon);
	UIACommon::~UIACommon() {}
	struct Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Common_IACommon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Common_IACommon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIACommon, UIACommon::StaticClass, TEXT("UIACommon"), &Z_Registration_Info_UClass_UIACommon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIACommon), 480210402U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Common_IACommon_h_816116871(TEXT("/Script/IAFramework"),
		Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Common_IACommon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Common_IACommon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
