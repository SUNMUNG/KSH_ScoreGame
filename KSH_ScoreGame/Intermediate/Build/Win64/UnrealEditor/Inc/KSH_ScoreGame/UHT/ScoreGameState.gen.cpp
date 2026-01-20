// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KSH_ScoreGame/Public/Framework/ScoreGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScoreGameState() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
KSH_SCOREGAME_API UClass* Z_Construct_UClass_AScoreActorBase_NoRegister();
KSH_SCOREGAME_API UClass* Z_Construct_UClass_AScoreGameState();
KSH_SCOREGAME_API UClass* Z_Construct_UClass_AScoreGameState_NoRegister();
KSH_SCOREGAME_API UEnum* Z_Construct_UEnum_KSH_ScoreGame_EScoreGameState();
UPackage* Z_Construct_UPackage__Script_KSH_ScoreGame();
// End Cross Module References

// Begin Enum EScoreGameState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EScoreGameState;
static UEnum* EScoreGameState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EScoreGameState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EScoreGameState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_KSH_ScoreGame_EScoreGameState, (UObject*)Z_Construct_UPackage__Script_KSH_ScoreGame(), TEXT("EScoreGameState"));
	}
	return Z_Registration_Info_UEnum_EScoreGameState.OuterSingleton;
}
template<> KSH_SCOREGAME_API UEnum* StaticEnum<EScoreGameState>()
{
	return EScoreGameState_StaticEnum();
}
struct Z_Construct_UEnum_KSH_ScoreGame_EScoreGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "GameOver.Comment", "// \xec\xa7\x84\xed\x96\x89 \xec\xa4\x91 (\xec\xa0\x90\xec\x88\x98 \xed\x9a\x8d\xeb\x93\x9d \xea\xb0\x80\xeb\x8a\xa5)\n" },
		{ "GameOver.DisplayName", "Game Over" },
		{ "GameOver.Name", "EScoreGameState::GameOver" },
		{ "GameOver.ToolTip", "\xec\xa7\x84\xed\x96\x89 \xec\xa4\x91 (\xec\xa0\x90\xec\x88\x98 \xed\x9a\x8d\xeb\x93\x9d \xea\xb0\x80\xeb\x8a\xa5)" },
		{ "InProgress.Comment", "// \xec\xa4\x80\xeb\xb9\x84 (\xec\xb9\xb4\xec\x9a\xb4\xed\x8a\xb8\xeb\x8b\xa4\xec\x9a\xb4)\n" },
		{ "InProgress.DisplayName", "In Progress" },
		{ "InProgress.Name", "EScoreGameState::InProgress" },
		{ "InProgress.ToolTip", "\xec\xa4\x80\xeb\xb9\x84 (\xec\xb9\xb4\xec\x9a\xb4\xed\x8a\xb8\xeb\x8b\xa4\xec\x9a\xb4)" },
		{ "ModuleRelativePath", "Public/Framework/ScoreGameState.h" },
		{ "Ready.Comment", "// \xeb\x8c\x80\xea\xb8\xb0 (\xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4 \xec\xa0\x91\xec\x86\x8d \xeb\x8c\x80\xea\xb8\xb0)\n" },
		{ "Ready.DisplayName", "Ready" },
		{ "Ready.Name", "EScoreGameState::Ready" },
		{ "Ready.ToolTip", "\xeb\x8c\x80\xea\xb8\xb0 (\xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4 \xec\xa0\x91\xec\x86\x8d \xeb\x8c\x80\xea\xb8\xb0)" },
		{ "WaitingToStart.DisplayName", "Waiting To Start" },
		{ "WaitingToStart.Name", "EScoreGameState::WaitingToStart" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EScoreGameState::WaitingToStart", (int64)EScoreGameState::WaitingToStart },
		{ "EScoreGameState::Ready", (int64)EScoreGameState::Ready },
		{ "EScoreGameState::InProgress", (int64)EScoreGameState::InProgress },
		{ "EScoreGameState::GameOver", (int64)EScoreGameState::GameOver },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_KSH_ScoreGame_EScoreGameState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_KSH_ScoreGame,
	nullptr,
	"EScoreGameState",
	"EScoreGameState",
	Z_Construct_UEnum_KSH_ScoreGame_EScoreGameState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_KSH_ScoreGame_EScoreGameState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_KSH_ScoreGame_EScoreGameState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_KSH_ScoreGame_EScoreGameState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_KSH_ScoreGame_EScoreGameState()
{
	if (!Z_Registration_Info_UEnum_EScoreGameState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EScoreGameState.InnerSingleton, Z_Construct_UEnum_KSH_ScoreGame_EScoreGameState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EScoreGameState.InnerSingleton;
}
// End Enum EScoreGameState

// Begin Class AScoreGameState Function FindRandomLocation
struct Z_Construct_UFunction_AScoreGameState_FindRandomLocation_Statics
{
	struct ScoreGameState_eventFindRandomLocation_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xeb\x9e\x9c\xeb\x8d\xa4\xec\x9c\x84\xec\xb9\x98 \xeb\xa6\xac\xed\x84\xb4\n" },
#endif
		{ "ModuleRelativePath", "Public/Framework/ScoreGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\x9e\x9c\xeb\x8d\xa4\xec\x9c\x84\xec\xb9\x98 \xeb\xa6\xac\xed\x84\xb4" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AScoreGameState_FindRandomLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScoreGameState_eventFindRandomLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AScoreGameState_FindRandomLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScoreGameState_FindRandomLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AScoreGameState_FindRandomLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScoreGameState_FindRandomLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScoreGameState, nullptr, "FindRandomLocation", nullptr, nullptr, Z_Construct_UFunction_AScoreGameState_FindRandomLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AScoreGameState_FindRandomLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AScoreGameState_FindRandomLocation_Statics::ScoreGameState_eventFindRandomLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AScoreGameState_FindRandomLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AScoreGameState_FindRandomLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AScoreGameState_FindRandomLocation_Statics::ScoreGameState_eventFindRandomLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AScoreGameState_FindRandomLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AScoreGameState_FindRandomLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AScoreGameState::execFindRandomLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->FindRandomLocation();
	P_NATIVE_END;
}
// End Class AScoreGameState Function FindRandomLocation

// Begin Class AScoreGameState Function GetScoreGameState
struct Z_Construct_UFunction_AScoreGameState_GetScoreGameState_Statics
{
	struct ScoreGameState_eventGetScoreGameState_Parms
	{
		EScoreGameState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Framework/ScoreGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AScoreGameState_GetScoreGameState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AScoreGameState_GetScoreGameState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScoreGameState_eventGetScoreGameState_Parms, ReturnValue), Z_Construct_UEnum_KSH_ScoreGame_EScoreGameState, METADATA_PARAMS(0, nullptr) }; // 2835500952
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AScoreGameState_GetScoreGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScoreGameState_GetScoreGameState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScoreGameState_GetScoreGameState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AScoreGameState_GetScoreGameState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScoreGameState_GetScoreGameState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScoreGameState, nullptr, "GetScoreGameState", nullptr, nullptr, Z_Construct_UFunction_AScoreGameState_GetScoreGameState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AScoreGameState_GetScoreGameState_Statics::PropPointers), sizeof(Z_Construct_UFunction_AScoreGameState_GetScoreGameState_Statics::ScoreGameState_eventGetScoreGameState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AScoreGameState_GetScoreGameState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AScoreGameState_GetScoreGameState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AScoreGameState_GetScoreGameState_Statics::ScoreGameState_eventGetScoreGameState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AScoreGameState_GetScoreGameState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AScoreGameState_GetScoreGameState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AScoreGameState::execGetScoreGameState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EScoreGameState*)Z_Param__Result=P_THIS->GetScoreGameState();
	P_NATIVE_END;
}
// End Class AScoreGameState Function GetScoreGameState

// Begin Class AScoreGameState Function OnReadyTimerFinished
struct Z_Construct_UFunction_AScoreGameState_OnReadyTimerFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Framework/ScoreGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScoreGameState_OnReadyTimerFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScoreGameState, nullptr, "OnReadyTimerFinished", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AScoreGameState_OnReadyTimerFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_AScoreGameState_OnReadyTimerFinished_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AScoreGameState_OnReadyTimerFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AScoreGameState_OnReadyTimerFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AScoreGameState::execOnReadyTimerFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnReadyTimerFinished();
	P_NATIVE_END;
}
// End Class AScoreGameState Function OnReadyTimerFinished

// Begin Class AScoreGameState Function OnRep_CurrentGameState
struct Z_Construct_UFunction_AScoreGameState_OnRep_CurrentGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Framework/ScoreGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScoreGameState_OnRep_CurrentGameState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScoreGameState, nullptr, "OnRep_CurrentGameState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AScoreGameState_OnRep_CurrentGameState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AScoreGameState_OnRep_CurrentGameState_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AScoreGameState_OnRep_CurrentGameState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AScoreGameState_OnRep_CurrentGameState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AScoreGameState::execOnRep_CurrentGameState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentGameState();
	P_NATIVE_END;
}
// End Class AScoreGameState Function OnRep_CurrentGameState

// Begin Class AScoreGameState Function SpawnProps
struct Z_Construct_UFunction_AScoreGameState_SpawnProps_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\xa3\xbc\xea\xb8\xb0\xec\xa0\x81\xec\x9c\xbc\xeb\xa1\x9c \xec\x95\xa1\xed\x84\xb0 \xec\x8a\xa4\xed\x8f\xb0 \n" },
#endif
		{ "ModuleRelativePath", "Public/Framework/ScoreGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xa3\xbc\xea\xb8\xb0\xec\xa0\x81\xec\x9c\xbc\xeb\xa1\x9c \xec\x95\xa1\xed\x84\xb0 \xec\x8a\xa4\xed\x8f\xb0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScoreGameState_SpawnProps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScoreGameState, nullptr, "SpawnProps", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AScoreGameState_SpawnProps_Statics::Function_MetaDataParams), Z_Construct_UFunction_AScoreGameState_SpawnProps_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AScoreGameState_SpawnProps()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AScoreGameState_SpawnProps_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AScoreGameState::execSpawnProps)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnProps();
	P_NATIVE_END;
}
// End Class AScoreGameState Function SpawnProps

// Begin Class AScoreGameState
void AScoreGameState::StaticRegisterNativesAScoreGameState()
{
	UClass* Class = AScoreGameState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindRandomLocation", &AScoreGameState::execFindRandomLocation },
		{ "GetScoreGameState", &AScoreGameState::execGetScoreGameState },
		{ "OnReadyTimerFinished", &AScoreGameState::execOnReadyTimerFinished },
		{ "OnRep_CurrentGameState", &AScoreGameState::execOnRep_CurrentGameState },
		{ "SpawnProps", &AScoreGameState::execSpawnProps },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AScoreGameState);
UClass* Z_Construct_UClass_AScoreGameState_NoRegister()
{
	return AScoreGameState::StaticClass();
}
struct Z_Construct_UClass_AScoreGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Framework/ScoreGameState.h" },
		{ "ModuleRelativePath", "Public/Framework/ScoreGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentGameState_MetaData[] = {
		{ "Category", "Game State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xed\x98\x84\xec\x9e\xac \xea\xb2\x8c\xec\x9e\x84 \xec\x83\x81\xed\x83\x9c\n" },
#endif
		{ "ModuleRelativePath", "Public/Framework/ScoreGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x98\x84\xec\x9e\xac \xea\xb2\x8c\xec\x9e\x84 \xec\x83\x81\xed\x83\x9c" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameRemainingTime_MetaData[] = {
		{ "Category", "Game Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\xa7\x84\xed\x96\x89 \xec\x8b\x9c\xea\xb0\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/Framework/ScoreGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xa7\x84\xed\x96\x89 \xec\x8b\x9c\xea\xb0\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultGameTime_MetaData[] = {
		{ "Category", "Game Data" },
		{ "ModuleRelativePath", "Public/Framework/ScoreGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScoreActor_MetaData[] = {
		{ "Category", "Game Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\x86\x8c\xed\x99\x98\xed\x95\xa0 \xec\x8a\xa4\xec\xbd\x94\xec\x96\xb4 \xec\x95\xa1\xed\x84\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/Framework/ScoreGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x86\x8c\xed\x99\x98\xed\x95\xa0 \xec\x8a\xa4\xec\xbd\x94\xec\x96\xb4 \xec\x95\xa1\xed\x84\xb0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentGameState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentGameState;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GameRemainingTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultGameTime;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ScoreActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AScoreGameState_FindRandomLocation, "FindRandomLocation" }, // 519643114
		{ &Z_Construct_UFunction_AScoreGameState_GetScoreGameState, "GetScoreGameState" }, // 2334255789
		{ &Z_Construct_UFunction_AScoreGameState_OnReadyTimerFinished, "OnReadyTimerFinished" }, // 2544165193
		{ &Z_Construct_UFunction_AScoreGameState_OnRep_CurrentGameState, "OnRep_CurrentGameState" }, // 2983778138
		{ &Z_Construct_UFunction_AScoreGameState_SpawnProps, "SpawnProps" }, // 3644378415
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScoreGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AScoreGameState_Statics::NewProp_CurrentGameState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AScoreGameState_Statics::NewProp_CurrentGameState = { "CurrentGameState", "OnRep_CurrentGameState", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScoreGameState, CurrentGameState), Z_Construct_UEnum_KSH_ScoreGame_EScoreGameState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentGameState_MetaData), NewProp_CurrentGameState_MetaData) }; // 2835500952
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AScoreGameState_Statics::NewProp_GameRemainingTime = { "GameRemainingTime", nullptr, (EPropertyFlags)0x0020080000000034, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScoreGameState, GameRemainingTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameRemainingTime_MetaData), NewProp_GameRemainingTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AScoreGameState_Statics::NewProp_DefaultGameTime = { "DefaultGameTime", nullptr, (EPropertyFlags)0x0020080000000034, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScoreGameState, DefaultGameTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultGameTime_MetaData), NewProp_DefaultGameTime_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AScoreGameState_Statics::NewProp_ScoreActor = { "ScoreActor", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScoreGameState, ScoreActor), Z_Construct_UClass_UClass, Z_Construct_UClass_AScoreActorBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoreActor_MetaData), NewProp_ScoreActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AScoreGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScoreGameState_Statics::NewProp_CurrentGameState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScoreGameState_Statics::NewProp_CurrentGameState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScoreGameState_Statics::NewProp_GameRemainingTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScoreGameState_Statics::NewProp_DefaultGameTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScoreGameState_Statics::NewProp_ScoreActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AScoreGameState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AScoreGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_KSH_ScoreGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AScoreGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AScoreGameState_Statics::ClassParams = {
	&AScoreGameState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AScoreGameState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AScoreGameState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AScoreGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_AScoreGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AScoreGameState()
{
	if (!Z_Registration_Info_UClass_AScoreGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AScoreGameState.OuterSingleton, Z_Construct_UClass_AScoreGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AScoreGameState.OuterSingleton;
}
template<> KSH_SCOREGAME_API UClass* StaticClass<AScoreGameState>()
{
	return AScoreGameState::StaticClass();
}
void AScoreGameState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_CurrentGameState(TEXT("CurrentGameState"));
	static const FName Name_GameRemainingTime(TEXT("GameRemainingTime"));
	static const FName Name_DefaultGameTime(TEXT("DefaultGameTime"));
	const bool bIsValid = true
		&& Name_CurrentGameState == ClassReps[(int32)ENetFields_Private::CurrentGameState].Property->GetFName()
		&& Name_GameRemainingTime == ClassReps[(int32)ENetFields_Private::GameRemainingTime].Property->GetFName()
		&& Name_DefaultGameTime == ClassReps[(int32)ENetFields_Private::DefaultGameTime].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AScoreGameState"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AScoreGameState);
AScoreGameState::~AScoreGameState() {}
// End Class AScoreGameState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_Framework_ScoreGameState_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EScoreGameState_StaticEnum, TEXT("EScoreGameState"), &Z_Registration_Info_UEnum_EScoreGameState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2835500952U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AScoreGameState, AScoreGameState::StaticClass, TEXT("AScoreGameState"), &Z_Registration_Info_UClass_AScoreGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AScoreGameState), 951001980U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_Framework_ScoreGameState_h_1101365938(TEXT("/Script/KSH_ScoreGame"),
	Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_Framework_ScoreGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_Framework_ScoreGameState_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_Framework_ScoreGameState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_Framework_ScoreGameState_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
