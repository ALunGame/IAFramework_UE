// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IAFramework/Public/Game/IAGameCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAGameCommon() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAGameCommon();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAGameCommon_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IAFramework();
// End Cross Module References
	void UIAGameCommon::StaticRegisterNativesUIAGameCommon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIAGameCommon);
	UClass* Z_Construct_UClass_UIAGameCommon_NoRegister()
	{
		return UIAGameCommon::StaticClass();
	}
	struct Z_Construct_UClass_UIAGameCommon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIAGameCommon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IAFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAGameCommon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Game/IAGameCommon.h" },
		{ "ModuleRelativePath", "Public/Game/IAGameCommon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIAGameCommon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIAGameCommon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIAGameCommon_Statics::ClassParams = {
		&UIAGameCommon::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIAGameCommon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIAGameCommon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIAGameCommon()
	{
		if (!Z_Registration_Info_UClass_UIAGameCommon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIAGameCommon.OuterSingleton, Z_Construct_UClass_UIAGameCommon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIAGameCommon.OuterSingleton;
	}
	template<> IAFRAMEWORK_API UClass* StaticClass<UIAGameCommon>()
	{
		return UIAGameCommon::StaticClass();
	}
	UIAGameCommon::UIAGameCommon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIAGameCommon);
	UIAGameCommon::~UIAGameCommon() {}
	struct Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Game_IAGameCommon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Game_IAGameCommon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIAGameCommon, UIAGameCommon::StaticClass, TEXT("UIAGameCommon"), &Z_Registration_Info_UClass_UIAGameCommon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIAGameCommon), 16874411U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Game_IAGameCommon_h_1348045047(TEXT("/Script/IAFramework"),
		Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Game_IAGameCommon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Game_IAGameCommon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
