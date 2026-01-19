// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KSH_ScoreGame/Public/Character/ScoreCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScoreCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
KSH_SCOREGAME_API UClass* Z_Construct_UClass_AScoreCharacter();
KSH_SCOREGAME_API UClass* Z_Construct_UClass_AScoreCharacter_NoRegister();
KSH_SCOREGAME_API UClass* Z_Construct_UClass_AScorePlayerState_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_KSH_ScoreGame();
// End Cross Module References

// Begin Class AScoreCharacter Function OnPlayerStateReady
struct ScoreCharacter_eventOnPlayerStateReady_Parms
{
	AScorePlayerState* NewState;
};
static const FName NAME_AScoreCharacter_OnPlayerStateReady = FName(TEXT("OnPlayerStateReady"));
void AScoreCharacter::OnPlayerStateReady(AScorePlayerState* NewState)
{
	ScoreCharacter_eventOnPlayerStateReady_Parms Parms;
	Parms.NewState=NewState;
	UFunction* Func = FindFunctionChecked(NAME_AScoreCharacter_OnPlayerStateReady);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AScoreCharacter_OnPlayerStateReady_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Public/Character/ScoreCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AScoreCharacter_OnPlayerStateReady_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScoreCharacter_eventOnPlayerStateReady_Parms, NewState), Z_Construct_UClass_AScorePlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AScoreCharacter_OnPlayerStateReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScoreCharacter_OnPlayerStateReady_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AScoreCharacter_OnPlayerStateReady_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScoreCharacter_OnPlayerStateReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScoreCharacter, nullptr, "OnPlayerStateReady", nullptr, nullptr, Z_Construct_UFunction_AScoreCharacter_OnPlayerStateReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AScoreCharacter_OnPlayerStateReady_Statics::PropPointers), sizeof(ScoreCharacter_eventOnPlayerStateReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AScoreCharacter_OnPlayerStateReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_AScoreCharacter_OnPlayerStateReady_Statics::Function_MetaDataParams) };
static_assert(sizeof(ScoreCharacter_eventOnPlayerStateReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AScoreCharacter_OnPlayerStateReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AScoreCharacter_OnPlayerStateReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AScoreCharacter Function OnPlayerStateReady

// Begin Class AScoreCharacter
void AScoreCharacter::StaticRegisterNativesAScoreCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AScoreCharacter);
UClass* Z_Construct_UClass_AScoreCharacter_NoRegister()
{
	return AScoreCharacter::StaticClass();
}
struct Z_Construct_UClass_AScoreCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/ScoreCharacter.h" },
		{ "ModuleRelativePath", "Public/Character/ScoreCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScoreBar_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/ScoreCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScoreBar;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AScoreCharacter_OnPlayerStateReady, "OnPlayerStateReady" }, // 2917810626
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScoreCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScoreCharacter_Statics::NewProp_ScoreBar = { "ScoreBar", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScoreCharacter, ScoreBar), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoreBar_MetaData), NewProp_ScoreBar_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AScoreCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScoreCharacter_Statics::NewProp_ScoreBar,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AScoreCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AScoreCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_KSH_ScoreGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AScoreCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AScoreCharacter_Statics::ClassParams = {
	&AScoreCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AScoreCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AScoreCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AScoreCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AScoreCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AScoreCharacter()
{
	if (!Z_Registration_Info_UClass_AScoreCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AScoreCharacter.OuterSingleton, Z_Construct_UClass_AScoreCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AScoreCharacter.OuterSingleton;
}
template<> KSH_SCOREGAME_API UClass* StaticClass<AScoreCharacter>()
{
	return AScoreCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AScoreCharacter);
AScoreCharacter::~AScoreCharacter() {}
// End Class AScoreCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_Character_ScoreCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AScoreCharacter, AScoreCharacter::StaticClass, TEXT("AScoreCharacter"), &Z_Registration_Info_UClass_AScoreCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AScoreCharacter), 2598460968U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_Character_ScoreCharacter_h_3274665873(TEXT("/Script/KSH_ScoreGame"),
	Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_Character_ScoreCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_Character_ScoreCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
