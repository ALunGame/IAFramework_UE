// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IAFramework/Public/Object/IAActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_AIAActor();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_AIAActor_NoRegister();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAOO_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IAFramework();
// End Cross Module References
	void AIAActor::StaticRegisterNativesAIAActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AIAActor);
	UClass* Z_Construct_UClass_AIAActor_NoRegister()
	{
		return AIAActor::StaticClass();
	}
	struct Z_Construct_UClass_AIAActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIAActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_IAFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIAActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Object/IAActor.h" },
		{ "ModuleRelativePath", "Public/Object/IAActor.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AIAActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIAOO_NoRegister, (int32)VTABLE_OFFSET(AIAActor, IIAOO), false },  // 1876789362
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIAActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIAActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AIAActor_Statics::ClassParams = {
		&AIAActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AIAActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AIAActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIAActor()
	{
		if (!Z_Registration_Info_UClass_AIAActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIAActor.OuterSingleton, Z_Construct_UClass_AIAActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AIAActor.OuterSingleton;
	}
	template<> IAFRAMEWORK_API UClass* StaticClass<AIAActor>()
	{
		return AIAActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIAActor);
	AIAActor::~AIAActor() {}
	struct Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_IAActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_IAActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AIAActor, AIAActor::StaticClass, TEXT("AIAActor"), &Z_Registration_Info_UClass_AIAActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIAActor), 260728774U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_IAActor_h_1309002635(TEXT("/Script/IAFramework"),
		Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_IAActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_IAActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
