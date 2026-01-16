// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Framework/ScorePlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KSH_SCOREGAME_ScorePlayerState_generated_h
#error "ScorePlayerState.generated.h already included, missing '#pragma once' in ScorePlayerState.h"
#endif
#define KSH_SCOREGAME_ScorePlayerState_generated_h

#define FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_Framework_ScorePlayerState_h_10_DELEGATE \
KSH_SCOREGAME_API void FOnScoreChanged_DelegateWrapper(const FMulticastScriptDelegate& OnScoreChanged);


#define FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_Framework_ScorePlayerState_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRepNotify_MyScore); \
	DECLARE_FUNCTION(execGetMyScore);


#define FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_Framework_ScorePlayerState_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAScorePlayerState(); \
	friend struct Z_Construct_UClass_AScorePlayerState_Statics; \
public: \
	DECLARE_CLASS(AScorePlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KSH_ScoreGame"), NO_API) \
	DECLARE_SERIALIZER(AScorePlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MyScore=NETFIELD_REP_START, \
		NETFIELD_REP_END=MyScore	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_Framework_ScorePlayerState_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AScorePlayerState(AScorePlayerState&&); \
	AScorePlayerState(const AScorePlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AScorePlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AScorePlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AScorePlayerState) \
	NO_API virtual ~AScorePlayerState();


#define FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_Framework_ScorePlayerState_h_14_PROLOG
#define FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_Framework_ScorePlayerState_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_Framework_ScorePlayerState_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_Framework_ScorePlayerState_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_Framework_ScorePlayerState_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KSH_SCOREGAME_API UClass* StaticClass<class AScorePlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_Framework_ScorePlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
