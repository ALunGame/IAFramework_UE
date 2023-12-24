// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IAFramework/Public/Game/IABaseGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIABaseGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_AIABaseGameMode();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_AIABaseGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IAFramework();
// End Cross Module References
	static FName NAME_AIABaseGameMode_OnGameInit = FName(TEXT("OnGameInit"));
	void AIABaseGameMode::OnGameInit()
	{
		ProcessEvent(FindFunctionChecked(NAME_AIABaseGameMode_OnGameInit),NULL);
	}
	void AIABaseGameMode::StaticRegisterNativesAIABaseGameMode()
	{
	}
	struct Z_Construct_UFunction_AIABaseGameMode_OnGameInit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AIABaseGameMode_OnGameInit_Statics::Function_MetaDataParams[] = {
		{ "Category", "IA" },
		{ "Comment", "//void SendGameInitEvent();\n" },
		{ "DisplayName", "\xe6\xb8\xb8\xe6\x88\x8f\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\xae\x8c\xe6\x88\x90" },
		{ "ModuleRelativePath", "Public/Game/IABaseGameMode.h" },
		{ "ToolTip", "void SendGameInitEvent();" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIABaseGameMode_OnGameInit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AIABaseGameMode, nullptr, "OnGameInit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AIABaseGameMode_OnGameInit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AIABaseGameMode_OnGameInit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AIABaseGameMode_OnGameInit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIABaseGameMode_OnGameInit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AIABaseGameMode);
	UClass* Z_Construct_UClass_AIABaseGameMode_NoRegister()
	{
		return AIABaseGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AIABaseGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIABaseGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_IAFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AIABaseGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AIABaseGameMode_OnGameInit, "OnGameInit" }, // 736945693
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIABaseGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Game/IABaseGameMode.h" },
		{ "ModuleRelativePath", "Public/Game/IABaseGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIABaseGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIABaseGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AIABaseGameMode_Statics::ClassParams = {
		&AIABaseGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AIABaseGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AIABaseGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIABaseGameMode()
	{
		if (!Z_Registration_Info_UClass_AIABaseGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIABaseGameMode.OuterSingleton, Z_Construct_UClass_AIABaseGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AIABaseGameMode.OuterSingleton;
	}
	template<> IAFRAMEWORK_API UClass* StaticClass<AIABaseGameMode>()
	{
		return AIABaseGameMode::StaticClass();
	}
	AIABaseGameMode::AIABaseGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIABaseGameMode);
	AIABaseGameMode::~AIABaseGameMode() {}
	struct Z_CompiledInDeferFile_FID_Project_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Game_IABaseGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Game_IABaseGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AIABaseGameMode, AIABaseGameMode::StaticClass, TEXT("AIABaseGameMode"), &Z_Registration_Info_UClass_AIABaseGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIABaseGameMode), 3933494343U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Game_IABaseGameMode_h_189935121(TEXT("/Script/IAFramework"),
		Z_CompiledInDeferFile_FID_Project_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Game_IABaseGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Game_IABaseGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
