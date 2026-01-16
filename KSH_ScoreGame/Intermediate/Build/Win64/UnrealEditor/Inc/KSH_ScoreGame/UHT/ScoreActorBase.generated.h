// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ScoreActor/ScoreActorBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef KSH_SCOREGAME_ScoreActorBase_generated_h
#error "ScoreActorBase.generated.h already included, missing '#pragma once' in ScoreActorBase.h"
#endif
#define KSH_SCOREGAME_ScoreActorBase_generated_h

#define FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_ScoreActor_ScoreActorBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnActorOverlap);


#define FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_ScoreActor_ScoreActorBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAScoreActorBase(); \
	friend struct Z_Construct_UClass_AScoreActorBase_Statics; \
public: \
	DECLARE_CLASS(AScoreActorBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KSH_ScoreGame"), NO_API) \
	DECLARE_SERIALIZER(AScoreActorBase)


#define FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_ScoreActor_ScoreActorBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AScoreActorBase(AScoreActorBase&&); \
	AScoreActorBase(const AScoreActorBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AScoreActorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AScoreActorBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AScoreActorBase) \
	NO_API virtual ~AScoreActorBase();


#define FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_ScoreActor_ScoreActorBase_h_9_PROLOG
#define FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_ScoreActor_ScoreActorBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_ScoreActor_ScoreActorBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_ScoreActor_ScoreActorBase_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_ScoreActor_ScoreActorBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KSH_SCOREGAME_API UClass* StaticClass<class AScoreActorBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_ScoreActor_ScoreActorBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
