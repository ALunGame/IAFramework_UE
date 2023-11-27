// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IAFramework/Public/Object/Object/IAObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAObject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAObject();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAObject_NoRegister();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAOO_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IAFramework();
// End Cross Module References
	void UIAObject::StaticRegisterNativesUIAObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIAObject);
	UClass* Z_Construct_UClass_UIAObject_NoRegister()
	{
		return UIAObject::StaticClass();
	}
	struct Z_Construct_UClass_UIAObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIAObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IAFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Object/Object/IAObject.h" },
		{ "ModuleRelativePath", "Public/Object/Object/IAObject.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UIAObject_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIAOO_NoRegister, (int32)VTABLE_OFFSET(UIAObject, IIAOO), false },  // 1876789362
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIAObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIAObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIAObject_Statics::ClassParams = {
		&UIAObject::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIAObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIAObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIAObject()
	{
		if (!Z_Registration_Info_UClass_UIAObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIAObject.OuterSingleton, Z_Construct_UClass_UIAObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIAObject.OuterSingleton;
	}
	template<> IAFRAMEWORK_API UClass* StaticClass<UIAObject>()
	{
		return UIAObject::StaticClass();
	}
	UIAObject::UIAObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIAObject);
	UIAObject::~UIAObject() {}
	struct Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Object_IAObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Object_IAObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIAObject, UIAObject::StaticClass, TEXT("UIAObject"), &Z_Registration_Info_UClass_UIAObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIAObject), 1667620351U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Object_IAObject_h_3931896485(TEXT("/Script/IAFramework"),
		Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Object_IAObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Object_IAObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
