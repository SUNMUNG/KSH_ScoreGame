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
UPackage* Z_Construct_UPackage__Script_KSH_ScoreGame();
// End Cross Module References

// Begin Class AScoreGameState Function FindRandomLocation
struct Z_Construct_UFunction_AScoreGameState_FindRandomLocation_Statics
{
	struct ScoreGameState_eventFindRandomLocation_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Framework/ScoreGameState.h" },
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScoreGameState_FindRandomLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScoreGameState, nullptr, "FindRandomLocation", nullptr, nullptr, Z_Construct_UFunction_AScoreGameState_FindRandomLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AScoreGameState_FindRandomLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AScoreGameState_FindRandomLocation_Statics::ScoreGameState_eventFindRandomLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AScoreGameState_FindRandomLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AScoreGameState_FindRandomLocation_Statics::Function_MetaDataParams) };
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

// Begin Class AScoreGameState Function ScoreGameEnd
struct Z_Construct_UFunction_AScoreGameState_ScoreGameEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Framework/ScoreGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScoreGameState_ScoreGameEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScoreGameState, nullptr, "ScoreGameEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AScoreGameState_ScoreGameEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_AScoreGameState_ScoreGameEnd_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AScoreGameState_ScoreGameEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AScoreGameState_ScoreGameEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AScoreGameState::execScoreGameEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ScoreGameEnd();
	P_NATIVE_END;
}
// End Class AScoreGameState Function ScoreGameEnd

// Begin Class AScoreGameState Function ScoreGameStart
struct Z_Construct_UFunction_AScoreGameState_ScoreGameStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Framework/ScoreGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScoreGameState_ScoreGameStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScoreGameState, nullptr, "ScoreGameStart", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AScoreGameState_ScoreGameStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_AScoreGameState_ScoreGameStart_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AScoreGameState_ScoreGameStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AScoreGameState_ScoreGameStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AScoreGameState::execScoreGameStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ScoreGameStart();
	P_NATIVE_END;
}
// End Class AScoreGameState Function ScoreGameStart

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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScoreGameState_SpawnProps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScoreGameState, nullptr, "SpawnProps", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AScoreGameState_SpawnProps_Statics::Function_MetaDataParams), Z_Construct_UFunction_AScoreGameState_SpawnProps_Statics::Function_MetaDataParams) };
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
		{ "ScoreGameEnd", &AScoreGameState::execScoreGameEnd },
		{ "ScoreGameStart", &AScoreGameState::execScoreGameStart },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameElapsedTime_MetaData[] = {
		{ "Category", "Game Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\xa7\x84\xed\x96\x89 \xec\x8b\x9c\xea\xb0\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/Framework/ScoreGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xa7\x84\xed\x96\x89 \xec\x8b\x9c\xea\xb0\x84" },
#endif
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
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GameElapsedTime;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ScoreActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AScoreGameState_FindRandomLocation, "FindRandomLocation" }, // 1084879134
		{ &Z_Construct_UFunction_AScoreGameState_ScoreGameEnd, "ScoreGameEnd" }, // 1863015027
		{ &Z_Construct_UFunction_AScoreGameState_ScoreGameStart, "ScoreGameStart" }, // 848962687
		{ &Z_Construct_UFunction_AScoreGameState_SpawnProps, "SpawnProps" }, // 44311223
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScoreGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AScoreGameState_Statics::NewProp_GameElapsedTime = { "GameElapsedTime", nullptr, (EPropertyFlags)0x0020080000000034, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScoreGameState, GameElapsedTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameElapsedTime_MetaData), NewProp_GameElapsedTime_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AScoreGameState_Statics::NewProp_ScoreActor = { "ScoreActor", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScoreGameState, ScoreActor), Z_Construct_UClass_UClass, Z_Construct_UClass_AScoreActorBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoreActor_MetaData), NewProp_ScoreActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AScoreGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScoreGameState_Statics::NewProp_GameElapsedTime,
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
	static const FName Name_GameElapsedTime(TEXT("GameElapsedTime"));
	const bool bIsValid = true
		&& Name_GameElapsedTime == ClassReps[(int32)ENetFields_Private::GameElapsedTime].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AScoreGameState"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AScoreGameState);
AScoreGameState::~AScoreGameState() {}
// End Class AScoreGameState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_Framework_ScoreGameState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AScoreGameState, AScoreGameState::StaticClass, TEXT("AScoreGameState"), &Z_Registration_Info_UClass_AScoreGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AScoreGameState), 3063421727U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_Framework_ScoreGameState_h_4294930522(TEXT("/Script/KSH_ScoreGame"),
	Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_Framework_ScoreGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_Framework_ScoreGameState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
