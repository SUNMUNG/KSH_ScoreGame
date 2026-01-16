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
		{ "ModuleRelativePath", "Public/Framework/ScorePlayerState.h" },
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScorePlayerState_GetMyScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScorePlayerState, nullptr, "GetMyScore", nullptr, nullptr, Z_Construct_UFunction_AScorePlayerState_GetMyScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AScorePlayerState_GetMyScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_AScorePlayerState_GetMyScore_Statics::ScorePlayerState_eventGetMyScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AScorePlayerState_GetMyScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_AScorePlayerState_GetMyScore_Statics::Function_MetaDataParams) };
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

// Begin Class AScorePlayerState Function OnRepNotify_MyScore
struct Z_Construct_UFunction_AScorePlayerState_OnRepNotify_MyScore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Framework/ScorePlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScorePlayerState_OnRepNotify_MyScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScorePlayerState, nullptr, "OnRepNotify_MyScore", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AScorePlayerState_OnRepNotify_MyScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_AScorePlayerState_OnRepNotify_MyScore_Statics::Function_MetaDataParams) };
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

// Begin Class AScorePlayerState
void AScorePlayerState::StaticRegisterNativesAScorePlayerState()
{
	UClass* Class = AScorePlayerState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMyScore", &AScorePlayerState::execGetMyScore },
		{ "OnRepNotify_MyScore", &AScorePlayerState::execOnRepNotify_MyScore },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyScore_MetaData[] = {
		{ "ModuleRelativePath", "Public/Framework/ScorePlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnScoreChanged;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MyScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AScorePlayerState_GetMyScore, "GetMyScore" }, // 1366089204
		{ &Z_Construct_UFunction_AScorePlayerState_OnRepNotify_MyScore, "OnRepNotify_MyScore" }, // 2119341473
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScorePlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AScorePlayerState_Statics::NewProp_OnScoreChanged = { "OnScoreChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScorePlayerState, OnScoreChanged), Z_Construct_UDelegateFunction_KSH_ScoreGame_OnScoreChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnScoreChanged_MetaData), NewProp_OnScoreChanged_MetaData) }; // 1471739720
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AScorePlayerState_Statics::NewProp_MyScore = { "MyScore", "OnRepNotify_MyScore", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScorePlayerState, MyScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyScore_MetaData), NewProp_MyScore_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AScorePlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScorePlayerState_Statics::NewProp_OnScoreChanged,
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
	static const FName Name_MyScore(TEXT("MyScore"));
	const bool bIsValid = true
		&& Name_MyScore == ClassReps[(int32)ENetFields_Private::MyScore].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AScorePlayerState"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AScorePlayerState);
AScorePlayerState::~AScorePlayerState() {}
// End Class AScorePlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_Framework_ScorePlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AScorePlayerState, AScorePlayerState::StaticClass, TEXT("AScorePlayerState"), &Z_Registration_Info_UClass_AScorePlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AScorePlayerState), 2472646781U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_Framework_ScorePlayerState_h_1153651983(TEXT("/Script/KSH_ScoreGame"),
	Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_Framework_ScorePlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_Framework_ScorePlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
