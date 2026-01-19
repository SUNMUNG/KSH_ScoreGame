// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/ScoreBar.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
class AScorePlayerState;
#ifdef KSH_SCOREGAME_ScoreBar_generated_h
#error "ScoreBar.generated.h already included, missing '#pragma once' in ScoreBar.h"
#endif
#define KSH_SCOREGAME_ScoreBar_generated_h

#define FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_UI_ScoreBar_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetOwnerCharacter); \
	DECLARE_FUNCTION(execInitializeScoreWidget); \
	DECLARE_FUNCTION(execSetScoreText);


#define FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_UI_ScoreBar_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScoreBar(); \
	friend struct Z_Construct_UClass_UScoreBar_Statics; \
public: \
	DECLARE_CLASS(UScoreBar, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KSH_ScoreGame"), NO_API) \
	DECLARE_SERIALIZER(UScoreBar)


#define FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_UI_ScoreBar_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScoreBar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UScoreBar(UScoreBar&&); \
	UScoreBar(const UScoreBar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScoreBar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScoreBar); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScoreBar) \
	NO_API virtual ~UScoreBar();


#define FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_UI_ScoreBar_h_12_PROLOG
#define FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_UI_ScoreBar_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_UI_ScoreBar_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_UI_ScoreBar_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_UI_ScoreBar_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KSH_SCOREGAME_API UClass* StaticClass<class UScoreBar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_UI_ScoreBar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
