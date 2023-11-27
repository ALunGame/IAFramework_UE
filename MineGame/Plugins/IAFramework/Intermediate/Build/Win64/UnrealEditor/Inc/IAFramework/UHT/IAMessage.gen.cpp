// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IAFramework/Public/Core/IAMessage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAMessage() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAMessage();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAMessage_NoRegister();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAMM_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IAFramework();
// End Cross Module References
	void UIAMessage::StaticRegisterNativesUIAMessage()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIAMessage);
	UClass* Z_Construct_UClass_UIAMessage_NoRegister()
	{
		return UIAMessage::StaticClass();
	}
	struct Z_Construct_UClass_UIAMessage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIAMessage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IAFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAMessage_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \xe6\xb6\x88\xe6\x81\xaf\n */" },
		{ "IncludePath", "Core/IAMessage.h" },
		{ "ModuleRelativePath", "Public/Core/IAMessage.h" },
		{ "ToolTip", "\xe6\xb6\x88\xe6\x81\xaf" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UIAMessage_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIAMM_NoRegister, (int32)VTABLE_OFFSET(UIAMessage, IIAMM), false },  // 3942511474
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIAMessage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIAMessage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIAMessage_Statics::ClassParams = {
		&UIAMessage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIAMessage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIAMessage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIAMessage()
	{
		if (!Z_Registration_Info_UClass_UIAMessage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIAMessage.OuterSingleton, Z_Construct_UClass_UIAMessage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIAMessage.OuterSingleton;
	}
	template<> IAFRAMEWORK_API UClass* StaticClass<UIAMessage>()
	{
		return UIAMessage::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIAMessage);
	UIAMessage::~UIAMessage() {}
	struct Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Core_IAMessage_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Core_IAMessage_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIAMessage, UIAMessage::StaticClass, TEXT("UIAMessage"), &Z_Registration_Info_UClass_UIAMessage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIAMessage), 3274222298U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Core_IAMessage_h_3918932812(TEXT("/Script/IAFramework"),
		Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Core_IAMessage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Core_IAMessage_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
