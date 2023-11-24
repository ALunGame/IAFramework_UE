// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IAFramework/Public/Common/IADefine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIADefine() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIADefine();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIADefine_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IAFramework();
// End Cross Module References
	void UIADefine::StaticRegisterNativesUIADefine()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIADefine);
	UClass* Z_Construct_UClass_UIADefine_NoRegister()
	{
		return UIADefine::StaticClass();
	}
	struct Z_Construct_UClass_UIADefine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIADefine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IAFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIADefine_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \xe6\xa1\x86\xe6\x9e\xb6\xe5\xae\x8f\xe5\xae\x9a\xe4\xb9\x89\n */" },
		{ "IncludePath", "Common/IADefine.h" },
		{ "ModuleRelativePath", "Public/Common/IADefine.h" },
		{ "ToolTip", "\xe6\xa1\x86\xe6\x9e\xb6\xe5\xae\x8f\xe5\xae\x9a\xe4\xb9\x89" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIADefine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIADefine>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIADefine_Statics::ClassParams = {
		&UIADefine::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIADefine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIADefine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIADefine()
	{
		if (!Z_Registration_Info_UClass_UIADefine.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIADefine.OuterSingleton, Z_Construct_UClass_UIADefine_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIADefine.OuterSingleton;
	}
	template<> IAFRAMEWORK_API UClass* StaticClass<UIADefine>()
	{
		return UIADefine::StaticClass();
	}
	UIADefine::UIADefine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIADefine);
	UIADefine::~UIADefine() {}
	struct Z_CompiledInDeferFile_FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Common_IADefine_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Common_IADefine_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIADefine, UIADefine::StaticClass, TEXT("UIADefine"), &Z_Registration_Info_UClass_UIADefine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIADefine), 2439208223U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Common_IADefine_h_1358281023(TEXT("/Script/IAFramework"),
		Z_CompiledInDeferFile_FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Common_IADefine_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Common_IADefine_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
