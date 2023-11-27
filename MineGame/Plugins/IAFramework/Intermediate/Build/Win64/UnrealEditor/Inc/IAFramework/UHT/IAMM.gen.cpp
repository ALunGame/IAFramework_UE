// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IAFramework/Public/Core/IAMM.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAMM() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAMM();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAMM_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IAFramework();
// End Cross Module References
	void UIAMM::StaticRegisterNativesUIAMM()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIAMM);
	UClass* Z_Construct_UClass_UIAMM_NoRegister()
	{
		return UIAMM::StaticClass();
	}
	struct Z_Construct_UClass_UIAMM_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIAMM_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_IAFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAMM_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/IAMM.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIAMM_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIAMM>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIAMM_Statics::ClassParams = {
		&UIAMM::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UIAMM_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIAMM_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIAMM()
	{
		if (!Z_Registration_Info_UClass_UIAMM.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIAMM.OuterSingleton, Z_Construct_UClass_UIAMM_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIAMM.OuterSingleton;
	}
	template<> IAFRAMEWORK_API UClass* StaticClass<UIAMM>()
	{
		return UIAMM::StaticClass();
	}
	UIAMM::UIAMM(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIAMM);
	UIAMM::~UIAMM() {}
	struct Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Core_IAMM_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Core_IAMM_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIAMM, UIAMM::StaticClass, TEXT("UIAMM"), &Z_Registration_Info_UClass_UIAMM, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIAMM), 3942511474U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Core_IAMM_h_3099550819(TEXT("/Script/IAFramework"),
		Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Core_IAMM_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Core_IAMM_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
