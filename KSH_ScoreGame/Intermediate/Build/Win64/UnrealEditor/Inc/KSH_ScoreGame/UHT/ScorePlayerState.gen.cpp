// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KSH_ScoreGame/Public/Framework/ScorePlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScorePlayerState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
KSH_SCOREGAME_API UClass* Z_Construct_UClass_AScorePlayerState();
KSH_SCOREGAME_API UClass* Z_Construct_UClass_AScorePlayerState_NoRegister();
KSH_SCOREGAME_API UFunction* Z_Construct_UDelegateFunction_KSH_ScoreGame_OnScoreChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_KSH_ScoreGame();
// End Cross Module References

// Begin Delegate FOnScoreChanged
struct Z_Construct_UDelegateFunction_KSH_ScoreGame_OnScoreChanged__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Framework/ScorePlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_KSH_ScoreGame_OnScoreChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_KSH_ScoreGame, nullptr, "OnScoreChanged__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KSH_ScoreGame_OnScoreChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_KSH_ScoreGame_OnScoreChanged__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_KSH_ScoreGame_OnScoreChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_KSH_ScoreGame_OnScoreChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnScoreChanged_DelegateWrapper(const FMulticastScriptDelegate& OnScoreChanged)
{
	OnScoreChanged.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnScoreChanged

// Begin Class AScorePlayerState Function GetMyScore
struct Z_Construct_UFunction_AScorePlayerState_GetMyScore_Statics
{
	struct ScorePlayerState_eventGetMyScore_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Getter\n" },
#endif
		{ "ModuleRelativePath", "Public/Framework/ScorePlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getter" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AScorePlayerState_GetMyScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScorePlayerState_eventGetMyScore_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AScorePlayerState_GetMyScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScorePlayerState_GetMyScore_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AScorePlayerState_GetMyScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScorePlayerState_GetMyScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScorePlayerState, nullptr, "GetMyScore", nullptr, nullptr, Z_Construct_UFunction_AScorePlayerState_GetMyScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AScorePlayerState_GetMyScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_AScorePlayerState_GetMyScore_Statics::ScorePlayerState_eventGetMyScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AScorePlayerState_GetMyScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_AScorePlayerState_GetMyScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AScorePlayerState_GetMyScore_Statics::ScorePlayerState_eventGetMyScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AScorePlayerState_GetMyScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AScorePlayerState_GetMyScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AScorePlayerState::execGetMyScore)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMyScore();
	P_NATIVE_END;
}
// End Class AScorePlayerState Function GetMyScore

// Begin Class AScorePlayerState Function IsPlayerReady
struct Z_Construct_UFunction_AScorePlayerState_IsPlayerReady_Statics
{
	struct ScorePlayerState_eventIsPlayerReady_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\xa4\x80\xeb\xb9\x84 \xec\x83\x81\xed\x83\x9c \xed\x99\x95\xec\x9d\xb8\xec\x9a\xa9 (UI \xeb\xb0\x94\xec\x9d\xb8\xeb\x94\xa9\xec\x9a\xa9)\n" },
#endif
		{ "ModuleRelativePath", "Public/Framework/ScorePlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xa4\x80\xeb\xb9\x84 \xec\x83\x81\xed\x83\x9c \xed\x99\x95\xec\x9d\xb8\xec\x9a\xa9 (UI \xeb\xb0\x94\xec\x9d\xb8\xeb\x94\xa9\xec\x9a\xa9)" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AScorePlayerState_IsPlayerReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ScorePlayerState_eventIsPlayerReady_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AScorePlayerState_IsPlayerReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ScorePlayerState_eventIsPlayerReady_Parms), &Z_Construct_UFunction_AScorePlayerState_IsPlayerReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AScorePlayerState_IsPlayerReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScorePlayerState_IsPlayerReady_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AScorePlayerState_IsPlayerReady_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScorePlayerState_IsPlayerReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScorePlayerState, nullptr, "IsPlayerReady", nullptr, nullptr, Z_Construct_UFunction_AScorePlayerState_IsPlayerReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AScorePlayerState_IsPlayerReady_Statics::PropPointers), sizeof(Z_Construct_UFunction_AScorePlayerState_IsPlayerReady_Statics::ScorePlayerState_eventIsPlayerReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AScorePlayerState_IsPlayerReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_AScorePlayerState_IsPlayerReady_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AScorePlayerState_IsPlayerReady_Statics::ScorePlayerState_eventIsPlayerReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AScorePlayerState_IsPlayerReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AScorePlayerState_IsPlayerReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AScorePlayerState::execIsPlayerReady)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlayerReady();
	P_NATIVE_END;
}
// End Class AScorePlayerState Function IsPlayerReady

// Begin Class AScorePlayerState Function OnRep_IsReady
struct Z_Construct_UFunction_AScorePlayerState_OnRep_IsReady_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Framework/ScorePlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScorePlayerState_OnRep_IsReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScorePlayerState, nullptr, "OnRep_IsReady", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AScorePlayerState_OnRep_IsReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_AScorePlayerState_OnRep_IsReady_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AScorePlayerState_OnRep_IsReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AScorePlayerState_OnRep_IsReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AScorePlayerState::execOnRep_IsReady)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_IsReady();
	P_NATIVE_END;
}
// End Class AScorePlayerState Function OnRep_IsReady

// Begin Class AScorePlayerState Function OnRepNotify_MyScore
struct Z_Construct_UFunction_AScorePlayerState_OnRepNotify_MyScore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xed\x81\xb4\xeb\x9d\xbc\xec\x9d\xb4\xec\x96\xb8\xed\x8a\xb8\xeb\x93\xa4\xec\x9d\x98 UI \xeb\x8d\xb8\xeb\xa6\xac\xea\xb2\x8c\xec\x9d\xb4\xed\x8a\xb8 \xeb\xb0\x9c\xec\x86\xa1\n//\xec\x84\x9c\xeb\xb2\x84\xeb\x8a\x94 \xeb\x94\xb0\xeb\xa1\x9c\n" },
#endif
		{ "ModuleRelativePath", "Public/Framework/ScorePlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x81\xb4\xeb\x9d\xbc\xec\x9d\xb4\xec\x96\xb8\xed\x8a\xb8\xeb\x93\xa4\xec\x9d\x98 UI \xeb\x8d\xb8\xeb\xa6\xac\xea\xb2\x8c\xec\x9d\xb4\xed\x8a\xb8 \xeb\xb0\x9c\xec\x86\xa1\n\xec\x84\x9c\xeb\xb2\x84\xeb\x8a\x94 \xeb\x94\xb0\xeb\xa1\x9c" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScorePlayerState_OnRepNotify_MyScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScorePlayerState, nullptr, "OnRepNotify_MyScore", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AScorePlayerState_OnRepNotify_MyScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_AScorePlayerState_OnRepNotify_MyScore_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AScorePlayerState_OnRepNotify_MyScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AScorePlayerState_OnRepNotify_MyScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AScorePlayerState::execOnRepNotify_MyScore)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRepNotify_MyScore();
	P_NATIVE_END;
}
// End Class AScorePlayerState Function OnRepNotify_MyScore

// Begin Class AScorePlayerState Function Server_SetPlayerReady
struct ScorePlayerState_eventServer_SetPlayerReady_Parms
{
	bool bReady;
};
static const FName NAME_AScorePlayerState_Server_SetPlayerReady = FName(TEXT("Server_SetPlayerReady"));
void AScorePlayerState::Server_SetPlayerReady(bool bReady)
{
	ScorePlayerState_eventServer_SetPlayerReady_Parms Parms;
	Parms.bReady=bReady ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_AScorePlayerState_Server_SetPlayerReady);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AScorePlayerState_Server_SetPlayerReady_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\x84\x9c\xeb\xb2\x84\xeb\xa1\x9c \xec\xa4\x80\xeb\xb9\x84 \xec\x8b\xa0\xed\x98\xb8\xeb\xa5\xbc \xeb\xb3\xb4\xeb\x82\xb4\xeb\x8a\x94 RPC\n" },
#endif
		{ "ModuleRelativePath", "Public/Framework/ScorePlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x84\x9c\xeb\xb2\x84\xeb\xa1\x9c \xec\xa4\x80\xeb\xb9\x84 \xec\x8b\xa0\xed\x98\xb8\xeb\xa5\xbc \xeb\xb3\xb4\xeb\x82\xb4\xeb\x8a\x94 RPC" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bReady_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReady;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AScorePlayerState_Server_SetPlayerReady_Statics::NewProp_bReady_SetBit(void* Obj)
{
	((ScorePlayerState_eventServer_SetPlayerReady_Parms*)Obj)->bReady = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AScorePlayerState_Server_SetPlayerReady_Statics::NewProp_bReady = { "bReady", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ScorePlayerState_eventServer_SetPlayerReady_Parms), &Z_Construct_UFunction_AScorePlayerState_Server_SetPlayerReady_Statics::NewProp_bReady_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AScorePlayerState_Server_SetPlayerReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScorePlayerState_Server_SetPlayerReady_Statics::NewProp_bReady,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AScorePlayerState_Server_SetPlayerReady_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScorePlayerState_Server_SetPlayerReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScorePlayerState, nullptr, "Server_SetPlayerReady", nullptr, nullptr, Z_Construct_UFunction_AScorePlayerState_Server_SetPlayerReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AScorePlayerState_Server_SetPlayerReady_Statics::PropPointers), sizeof(ScorePlayerState_eventServer_SetPlayerReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AScorePlayerState_Server_SetPlayerReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_AScorePlayerState_Server_SetPlayerReady_Statics::Function_MetaDataParams) };
static_assert(sizeof(ScorePlayerState_eventServer_SetPlayerReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AScorePlayerState_Server_SetPlayerReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AScorePlayerState_Server_SetPlayerReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AScorePlayerState::execServer_SetPlayerReady)
{
	P_GET_UBOOL(Z_Param_bReady);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_SetPlayerReady_Implementation(Z_Param_bReady);
	P_NATIVE_END;
}
// End Class AScorePlayerState Function Server_SetPlayerReady

// Begin Class AScorePlayerState Function SetPlayerReady
struct Z_Construct_UFunction_AScorePlayerState_SetPlayerReady_Statics
{
	struct ScorePlayerState_eventSetPlayerReady_Parms
	{
		bool bReady;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xed\x81\xb4\xeb\x9d\xbc\xec\x9d\xb4\xec\x96\xb8\xed\x8a\xb8(UI)\xec\x97\x90\xec\x84\x9c \xed\x98\xb8\xec\xb6\x9c\xed\x95\xa0 \xec\xa4\x80\xeb\xb9\x84 \xed\x86\xa0\xea\xb8\x80 \xed\x95\xa8\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/Framework/ScorePlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x81\xb4\xeb\x9d\xbc\xec\x9d\xb4\xec\x96\xb8\xed\x8a\xb8(UI)\xec\x97\x90\xec\x84\x9c \xed\x98\xb8\xec\xb6\x9c\xed\x95\xa0 \xec\xa4\x80\xeb\xb9\x84 \xed\x86\xa0\xea\xb8\x80 \xed\x95\xa8\xec\x88\x98" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bReady_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReady;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AScorePlayerState_SetPlayerReady_Statics::NewProp_bReady_SetBit(void* Obj)
{
	((ScorePlayerState_eventSetPlayerReady_Parms*)Obj)->bReady = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AScorePlayerState_SetPlayerReady_Statics::NewProp_bReady = { "bReady", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ScorePlayerState_eventSetPlayerReady_Parms), &Z_Construct_UFunction_AScorePlayerState_SetPlayerReady_Statics::NewProp_bReady_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AScorePlayerState_SetPlayerReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScorePlayerState_SetPlayerReady_Statics::NewProp_bReady,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AScorePlayerState_SetPlayerReady_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScorePlayerState_SetPlayerReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScorePlayerState, nullptr, "SetPlayerReady", nullptr, nullptr, Z_Construct_UFunction_AScorePlayerState_SetPlayerReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AScorePlayerState_SetPlayerReady_Statics::PropPointers), sizeof(Z_Construct_UFunction_AScorePlayerState_SetPlayerReady_Statics::ScorePlayerState_eventSetPlayerReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AScorePlayerState_SetPlayerReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_AScorePlayerState_SetPlayerReady_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AScorePlayerState_SetPlayerReady_Statics::ScorePlayerState_eventSetPlayerReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AScorePlayerState_SetPlayerReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AScorePlayerState_SetPlayerReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AScorePlayerState::execSetPlayerReady)
{
	P_GET_UBOOL(Z_Param_bReady);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlayerReady(Z_Param_bReady);
	P_NATIVE_END;
}
// End Class AScorePlayerState Function SetPlayerReady

// Begin Class AScorePlayerState
void AScorePlayerState::StaticRegisterNativesAScorePlayerState()
{
	UClass* Class = AScorePlayerState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMyScore", &AScorePlayerState::execGetMyScore },
		{ "IsPlayerReady", &AScorePlayerState::execIsPlayerReady },
		{ "OnRep_IsReady", &AScorePlayerState::execOnRep_IsReady },
		{ "OnRepNotify_MyScore", &AScorePlayerState::execOnRepNotify_MyScore },
		{ "Server_SetPlayerReady", &AScorePlayerState::execServer_SetPlayerReady },
		{ "SetPlayerReady", &AScorePlayerState::execSetPlayerReady },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AScorePlayerState);
UClass* Z_Construct_UClass_AScorePlayerState_NoRegister()
{
	return AScorePlayerState::StaticClass();
}
struct Z_Construct_UClass_AScorePlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Framework/ScorePlayerState.h" },
		{ "ModuleRelativePath", "Public/Framework/ScorePlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnScoreChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/Framework/ScorePlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsReady_MetaData[] = {
		{ "Category", "Game State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\xa4\x80\xeb\xb9\x84\xec\x97\xac\xeb\xb6\x80\n" },
#endif
		{ "ModuleRelativePath", "Public/Framework/ScorePlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xa4\x80\xeb\xb9\x84\xec\x97\xac\xeb\xb6\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyScore_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\xa0\x90\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/Framework/ScorePlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xa0\x90\xec\x88\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnScoreChanged;
	static void NewProp_bIsReady_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReady;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MyScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AScorePlayerState_GetMyScore, "GetMyScore" }, // 343450725
		{ &Z_Construct_UFunction_AScorePlayerState_IsPlayerReady, "IsPlayerReady" }, // 1038552000
		{ &Z_Construct_UFunction_AScorePlayerState_OnRep_IsReady, "OnRep_IsReady" }, // 3483553626
		{ &Z_Construct_UFunction_AScorePlayerState_OnRepNotify_MyScore, "OnRepNotify_MyScore" }, // 2422732675
		{ &Z_Construct_UFunction_AScorePlayerState_Server_SetPlayerReady, "Server_SetPlayerReady" }, // 323865463
		{ &Z_Construct_UFunction_AScorePlayerState_SetPlayerReady, "SetPlayerReady" }, // 1746426672
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScorePlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AScorePlayerState_Statics::NewProp_OnScoreChanged = { "OnScoreChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScorePlayerState, OnScoreChanged), Z_Construct_UDelegateFunction_KSH_ScoreGame_OnScoreChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnScoreChanged_MetaData), NewProp_OnScoreChanged_MetaData) }; // 1471739720
void Z_Construct_UClass_AScorePlayerState_Statics::NewProp_bIsReady_SetBit(void* Obj)
{
	((AScorePlayerState*)Obj)->bIsReady = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AScorePlayerState_Statics::NewProp_bIsReady = { "bIsReady", "OnRep_IsReady", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AScorePlayerState), &Z_Construct_UClass_AScorePlayerState_Statics::NewProp_bIsReady_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsReady_MetaData), NewProp_bIsReady_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AScorePlayerState_Statics::NewProp_MyScore = { "MyScore", "OnRepNotify_MyScore", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScorePlayerState, MyScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyScore_MetaData), NewProp_MyScore_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AScorePlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScorePlayerState_Statics::NewProp_OnScoreChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScorePlayerState_Statics::NewProp_bIsReady,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScorePlayerState_Statics::NewProp_MyScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AScorePlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AScorePlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_KSH_ScoreGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AScorePlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AScorePlayerState_Statics::ClassParams = {
	&AScorePlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AScorePlayerState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AScorePlayerState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AScorePlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_AScorePlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AScorePlayerState()
{
	if (!Z_Registration_Info_UClass_AScorePlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AScorePlayerState.OuterSingleton, Z_Construct_UClass_AScorePlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AScorePlayerState.OuterSingleton;
}
template<> KSH_SCOREGAME_API UClass* StaticClass<AScorePlayerState>()
{
	return AScorePlayerState::StaticClass();
}
void AScorePlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_bIsReady(TEXT("bIsReady"));
	static const FName Name_MyScore(TEXT("MyScore"));
	const bool bIsValid = true
		&& Name_bIsReady == ClassReps[(int32)ENetFields_Private::bIsReady].Property->GetFName()
		&& Name_MyScore == ClassReps[(int32)ENetFields_Private::MyScore].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AScorePlayerState"));
}
AScorePlayerState::AScorePlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AScorePlayerState);
AScorePlayerState::~AScorePlayerState() {}
// End Class AScorePlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_Framework_ScorePlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AScorePlayerState, AScorePlayerState::StaticClass, TEXT("AScorePlayerState"), &Z_Registration_Info_UClass_AScorePlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AScorePlayerState), 287807855U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_Framework_ScorePlayerState_h_626774597(TEXT("/Script/KSH_ScoreGame"),
	Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_Framework_ScorePlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_Framework_ScorePlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
