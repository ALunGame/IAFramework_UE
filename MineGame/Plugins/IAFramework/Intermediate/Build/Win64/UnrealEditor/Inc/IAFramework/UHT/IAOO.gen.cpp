// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IAFramework/Public/Object/IAOO.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAOO() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAOO();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAOO_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IAFramework();
// End Cross Module References
	void UIAOO::StaticRegisterNativesUIAOO()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIAOO);
	UClass* Z_Construct_UClass_UIAOO_NoRegister()
	{
		return UIAOO::StaticClass();
	}
	struct Z_Construct_UClass_UIAOO_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIAOO_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_IAFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAOO_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Object/IAOO.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIAOO_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIAOO>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIAOO_Statics::ClassParams = {
		&UIAOO::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UIAOO_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIAOO_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIAOO()
	{
		if (!Z_Registration_Info_UClass_UIAOO.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIAOO.OuterSingleton, Z_Construct_UClass_UIAOO_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIAOO.OuterSingleton;
	}
	template<> IAFRAMEWORK_API UClass* StaticClass<UIAOO>()
	{
		return UIAOO::StaticClass();
	}
	UIAOO::UIAOO(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIAOO);
	UIAOO::~UIAOO() {}
	struct Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_IAOO_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_IAOO_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIAOO, UIAOO::StaticClass, TEXT("UIAOO"), &Z_Registration_Info_UClass_UIAOO, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIAOO), 1876789362U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_IAOO_h_2917669768(TEXT("/Script/IAFramework"),
		Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_IAOO_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_IAOO_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
