// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Framework/ScoreGameState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KSH_SCOREGAME_ScoreGameState_generated_h
#error "ScoreGameState.generated.h already included, missing '#pragma once' in ScoreGameState.h"
#endif
#define KSH_SCOREGAME_ScoreGameState_generated_h

#define FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_Framework_ScoreGameState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindRandomLocation); \
	DECLARE_FUNCTION(execSpawnProps); \
	DECLARE_FUNCTION(execScoreGameEnd); \
	DECLARE_FUNCTION(execScoreGameStart);


#define FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_Framework_ScoreGameState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAScoreGameState(); \
	friend struct Z_Construct_UClass_AScoreGameState_Statics; \
public: \
	DECLARE_CLASS(AScoreGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KSH_ScoreGame"), NO_API) \
	DECLARE_SERIALIZER(AScoreGameState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		GameElapsedTime=NETFIELD_REP_START, \
		NETFIELD_REP_END=GameElapsedTime	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_Framework_ScoreGameState_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AScoreGameState(AScoreGameState&&); \
	AScoreGameState(const AScoreGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AScoreGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AScoreGameState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AScoreGameState) \
	NO_API virtual ~AScoreGameState();


#define FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_Framework_ScoreGameState_h_12_PROLOG
#define FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_Framework_ScoreGameState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_Framework_ScoreGameState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_Framework_ScoreGameState_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_Framework_ScoreGameState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KSH_SCOREGAME_API UClass* StaticClass<class AScoreGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_Framework_ScoreGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
