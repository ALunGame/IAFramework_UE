// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Object/Player/IAPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IAFRAMEWORK_IAPlayerState_generated_h
#error "IAPlayerState.generated.h already included, missing '#pragma once' in IAPlayerState.h"
#endif
#define IAFRAMEWORK_IAPlayerState_generated_h

#define FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Player_IAPlayerState_h_16_SPARSE_DATA
#define FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Player_IAPlayerState_h_16_RPC_WRAPPERS
#define FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Player_IAPlayerState_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Player_IAPlayerState_h_16_ACCESSORS
#define FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Player_IAPlayerState_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIAPlayerState(); \
	friend struct Z_Construct_UClass_AIAPlayerState_Statics; \
public: \
	DECLARE_CLASS(AIAPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IAFramework"), NO_API) \
	DECLARE_SERIALIZER(AIAPlayerState) \
	virtual UObject* _getUObject() const override { return const_cast<AIAPlayerState*>(this); }


#define FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Player_IAPlayerState_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAIAPlayerState(); \
	friend struct Z_Construct_UClass_AIAPlayerState_Statics; \
public: \
	DECLARE_CLASS(AIAPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IAFramework"), NO_API) \
	DECLARE_SERIALIZER(AIAPlayerState) \
	virtual UObject* _getUObject() const override { return const_cast<AIAPlayerState*>(this); }


#define FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Player_IAPlayerState_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AIAPlayerState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AIAPlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIAPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIAPlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AIAPlayerState(AIAPlayerState&&); \
	NO_API AIAPlayerState(const AIAPlayerState&); \
public: \
	NO_API virtual ~AIAPlayerState();


#define FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Player_IAPlayerState_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AIAPlayerState(AIAPlayerState&&); \
	NO_API AIAPlayerState(const AIAPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIAPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIAPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AIAPlayerState) \
	NO_API virtual ~AIAPlayerState();


#define FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Player_IAPlayerState_h_13_PROLOG
#define FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Player_IAPlayerState_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Player_IAPlayerState_h_16_SPARSE_DATA \
	FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Player_IAPlayerState_h_16_RPC_WRAPPERS \
	FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Player_IAPlayerState_h_16_ACCESSORS \
	FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Player_IAPlayerState_h_16_INCLASS \
	FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Player_IAPlayerState_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Player_IAPlayerState_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Player_IAPlayerState_h_16_SPARSE_DATA \
	FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Player_IAPlayerState_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Player_IAPlayerState_h_16_ACCESSORS \
	FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Player_IAPlayerState_h_16_INCLASS_NO_PURE_DECLS \
	FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Player_IAPlayerState_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IAFRAMEWORK_API UClass* StaticClass<class AIAPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Player_IAPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
