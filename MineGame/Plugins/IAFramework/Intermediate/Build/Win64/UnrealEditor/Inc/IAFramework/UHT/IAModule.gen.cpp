// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IAFramework/Public/Module/IAModule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAModule() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAModule();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAModule_NoRegister();
	IAFRAMEWORK_API UEnum* Z_Construct_UEnum_IAFramework_EAgreementType();
	IAFRAMEWORK_API UEnum* Z_Construct_UEnum_IAFramework_EGameModule();
	UPackage* Z_Construct_UPackage__Script_IAFramework();
// End Cross Module References
	DEFINE_FUNCTION(UIAModule::execDisableObject)
	{
		P_GET_ENUM(EAgreementType,Z_Param_Agreement);
		P_GET_TARRAY(FName,Z_Param_TargetNameGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableObject(EAgreementType(Z_Param_Agreement),Z_Param_TargetNameGroup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIAModule::execEnableObject)
	{
		P_GET_ENUM(EAgreementType,Z_Param_Agreement);
		P_GET_TARRAY(FName,Z_Param_TargetNameGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableObject(EAgreementType(Z_Param_Agreement),Z_Param_TargetNameGroup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIAModule::execDestroyObject)
	{
		P_GET_ENUM(EAgreementType,Z_Param_Agreement);
		P_GET_TARRAY(FName,Z_Param_TargetNameGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyObject(EAgreementType(Z_Param_Agreement),Z_Param_TargetNameGroup);
		P_NATIVE_END;
	}
	void UIAModule::StaticRegisterNativesUIAModule()
	{
		UClass* Class = UIAModule::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroyObject", &UIAModule::execDestroyObject },
			{ "DisableObject", &UIAModule::execDisableObject },
			{ "EnableObject", &UIAModule::execEnableObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIAModule_DestroyObject_Statics
	{
		struct IAModule_eventDestroyObject_Parms
		{
			EAgreementType Agreement;
			TArray<FName> TargetNameGroup;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Agreement_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Agreement;
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetNameGroup_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetNameGroup;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIAModule_DestroyObject_Statics::NewProp_Agreement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIAModule_DestroyObject_Statics::NewProp_Agreement = { "Agreement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IAModule_eventDestroyObject_Parms, Agreement), Z_Construct_UEnum_IAFramework_EAgreementType, METADATA_PARAMS(nullptr, 0) }; // 3778841268
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIAModule_DestroyObject_Statics::NewProp_TargetNameGroup_Inner = { "TargetNameGroup", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UIAModule_DestroyObject_Statics::NewProp_TargetNameGroup = { "TargetNameGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IAModule_eventDestroyObject_Parms, TargetNameGroup), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIAModule_DestroyObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAModule_DestroyObject_Statics::NewProp_Agreement_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAModule_DestroyObject_Statics::NewProp_Agreement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAModule_DestroyObject_Statics::NewProp_TargetNameGroup_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAModule_DestroyObject_Statics::NewProp_TargetNameGroup,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAModule_DestroyObject_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\xe5\x8f\x8d\xe5\xb0\x84\xe4\xba\x8b\xe4\xbb\xb6\xe6\x89\xb9\xe9\x87\x8f\xe9\x94\x80\xe6\xaf\x81\xe5\xaf\xb9\xe8\xb1\xa1\n" },
		{ "ModuleRelativePath", "Public/Module/IAModule.h" },
		{ "ToolTip", "\xe5\x8f\x8d\xe5\xb0\x84\xe4\xba\x8b\xe4\xbb\xb6\xe6\x89\xb9\xe9\x87\x8f\xe9\x94\x80\xe6\xaf\x81\xe5\xaf\xb9\xe8\xb1\xa1" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIAModule_DestroyObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIAModule, nullptr, "DestroyObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIAModule_DestroyObject_Statics::IAModule_eventDestroyObject_Parms), Z_Construct_UFunction_UIAModule_DestroyObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAModule_DestroyObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIAModule_DestroyObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAModule_DestroyObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIAModule_DestroyObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIAModule_DestroyObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIAModule_DisableObject_Statics
	{
		struct IAModule_eventDisableObject_Parms
		{
			EAgreementType Agreement;
			TArray<FName> TargetNameGroup;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Agreement_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Agreement;
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetNameGroup_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetNameGroup;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIAModule_DisableObject_Statics::NewProp_Agreement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIAModule_DisableObject_Statics::NewProp_Agreement = { "Agreement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IAModule_eventDisableObject_Parms, Agreement), Z_Construct_UEnum_IAFramework_EAgreementType, METADATA_PARAMS(nullptr, 0) }; // 3778841268
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIAModule_DisableObject_Statics::NewProp_TargetNameGroup_Inner = { "TargetNameGroup", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UIAModule_DisableObject_Statics::NewProp_TargetNameGroup = { "TargetNameGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IAModule_eventDisableObject_Parms, TargetNameGroup), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIAModule_DisableObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAModule_DisableObject_Statics::NewProp_Agreement_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAModule_DisableObject_Statics::NewProp_Agreement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAModule_DisableObject_Statics::NewProp_TargetNameGroup_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAModule_DisableObject_Statics::NewProp_TargetNameGroup,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAModule_DisableObject_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\xe5\x8f\x8d\xe5\xb0\x84\xe4\xba\x8b\xe4\xbb\xb6\xe6\x89\xb9\xe9\x87\x8f\xe5\xa4\xb1\xe6\xb4\xbb\xe5\xaf\xb9\xe8\xb1\xa1\n" },
		{ "ModuleRelativePath", "Public/Module/IAModule.h" },
		{ "ToolTip", "\xe5\x8f\x8d\xe5\xb0\x84\xe4\xba\x8b\xe4\xbb\xb6\xe6\x89\xb9\xe9\x87\x8f\xe5\xa4\xb1\xe6\xb4\xbb\xe5\xaf\xb9\xe8\xb1\xa1" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIAModule_DisableObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIAModule, nullptr, "DisableObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIAModule_DisableObject_Statics::IAModule_eventDisableObject_Parms), Z_Construct_UFunction_UIAModule_DisableObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAModule_DisableObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIAModule_DisableObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAModule_DisableObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIAModule_DisableObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIAModule_DisableObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIAModule_EnableObject_Statics
	{
		struct IAModule_eventEnableObject_Parms
		{
			EAgreementType Agreement;
			TArray<FName> TargetNameGroup;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Agreement_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Agreement;
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetNameGroup_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetNameGroup;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIAModule_EnableObject_Statics::NewProp_Agreement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIAModule_EnableObject_Statics::NewProp_Agreement = { "Agreement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IAModule_eventEnableObject_Parms, Agreement), Z_Construct_UEnum_IAFramework_EAgreementType, METADATA_PARAMS(nullptr, 0) }; // 3778841268
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIAModule_EnableObject_Statics::NewProp_TargetNameGroup_Inner = { "TargetNameGroup", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UIAModule_EnableObject_Statics::NewProp_TargetNameGroup = { "TargetNameGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IAModule_eventEnableObject_Parms, TargetNameGroup), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIAModule_EnableObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAModule_EnableObject_Statics::NewProp_Agreement_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAModule_EnableObject_Statics::NewProp_Agreement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAModule_EnableObject_Statics::NewProp_TargetNameGroup_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAModule_EnableObject_Statics::NewProp_TargetNameGroup,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAModule_EnableObject_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\xe5\x8f\x8d\xe5\xb0\x84\xe4\xba\x8b\xe4\xbb\xb6\xe6\x89\xb9\xe9\x87\x8f\xe6\xbf\x80\xe6\xb4\xbb\xe5\xaf\xb9\xe8\xb1\xa1\n" },
		{ "ModuleRelativePath", "Public/Module/IAModule.h" },
		{ "ToolTip", "\xe5\x8f\x8d\xe5\xb0\x84\xe4\xba\x8b\xe4\xbb\xb6\xe6\x89\xb9\xe9\x87\x8f\xe6\xbf\x80\xe6\xb4\xbb\xe5\xaf\xb9\xe8\xb1\xa1" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIAModule_EnableObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIAModule, nullptr, "EnableObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIAModule_EnableObject_Statics::IAModule_eventEnableObject_Parms), Z_Construct_UFunction_UIAModule_EnableObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAModule_EnableObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIAModule_EnableObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAModule_EnableObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIAModule_EnableObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIAModule_EnableObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIAModule);
	UClass* Z_Construct_UClass_UIAModule_NoRegister()
	{
		return UIAModule::StaticClass();
	}
	struct Z_Construct_UClass_UIAModule_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ModuleType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModuleType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ModuleType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIAModule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_IAFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIAModule_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIAModule_DestroyObject, "DestroyObject" }, // 3266409491
		{ &Z_Construct_UFunction_UIAModule_DisableObject, "DisableObject" }, // 160090086
		{ &Z_Construct_UFunction_UIAModule_EnableObject, "EnableObject" }, // 3962396141
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAModule_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/*\n * \xe6\xa8\xa1\xe7\xbb\x84\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Module/IAModule.h" },
		{ "ModuleRelativePath", "Public/Module/IAModule.h" },
		{ "ToolTip", "* \xe6\xa8\xa1\xe7\xbb\x84" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIAModule_Statics::NewProp_ModuleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAModule_Statics::NewProp_ModuleType_MetaData[] = {
		{ "Category", "IA" },
		{ "Comment", "/*\n\x09 * \n\x09 */" },
		{ "DisplayName", "\xe6\xa8\xa1\xe7\xbb\x84\xe7\xb1\xbb\xe5\x9e\x8b" },
		{ "ModuleRelativePath", "Public/Module/IAModule.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIAModule_Statics::NewProp_ModuleType = { "ModuleType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIAModule, ModuleType), Z_Construct_UEnum_IAFramework_EGameModule, METADATA_PARAMS(Z_Construct_UClass_UIAModule_Statics::NewProp_ModuleType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIAModule_Statics::NewProp_ModuleType_MetaData)) }; // 769984659
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIAModule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIAModule_Statics::NewProp_ModuleType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIAModule_Statics::NewProp_ModuleType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIAModule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIAModule>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIAModule_Statics::ClassParams = {
		&UIAModule::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UIAModule_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UIAModule_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UIAModule_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIAModule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIAModule()
	{
		if (!Z_Registration_Info_UClass_UIAModule.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIAModule.OuterSingleton, Z_Construct_UClass_UIAModule_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIAModule.OuterSingleton;
	}
	template<> IAFRAMEWORK_API UClass* StaticClass<UIAModule>()
	{
		return UIAModule::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIAModule);
	UIAModule::~UIAModule() {}
	struct Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Module_IAModule_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Module_IAModule_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIAModule, UIAModule::StaticClass, TEXT("UIAModule"), &Z_Registration_Info_UClass_UIAModule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIAModule), 2309997512U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Module_IAModule_h_1147145694(TEXT("/Script/IAFramework"),
		Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Module_IAModule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Module_IAModule_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
