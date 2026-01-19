// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKSH_ScoreGame_init() {}
	KSH_SCOREGAME_API UFunction* Z_Construct_UDelegateFunction_KSH_ScoreGame_OnScoreChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_KSH_ScoreGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_KSH_ScoreGame()
	{
		if (!Z_Registration_Info_UPackage__Script_KSH_ScoreGame.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_KSH_ScoreGame_OnScoreChanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/KSH_ScoreGame",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x99DBACB8,
				0xF00D2F10,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_KSH_ScoreGame.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_KSH_ScoreGame.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_KSH_ScoreGame(Z_Construct_UPackage__Script_KSH_ScoreGame, TEXT("/Script/KSH_ScoreGame"), Z_Registration_Info_UPackage__Script_KSH_ScoreGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x99DBACB8, 0xF00D2F10));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
