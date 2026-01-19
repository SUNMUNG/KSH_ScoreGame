// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KSH_ScoreGame/Public/UI/ScoreBar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScoreBar() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
KSH_SCOREGAME_API UClass* Z_Construct_UClass_AScorePlayerState_NoRegister();
KSH_SCOREGAME_API UClass* Z_Construct_UClass_UScoreBar();
KSH_SCOREGAME_API UClass* Z_Construct_UClass_UScoreBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_KSH_ScoreGame();
// End Cross Module References

// Begin Class UScoreBar Function InitializeScoreWidget
struct Z_Construct_UFunction_UScoreBar_InitializeScoreWidget_Statics
{
	struct ScoreBar_eventInitializeScoreWidget_Parms
	{
		AScorePlayerState* NewPlayerState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ScoreBar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPlayerState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScoreBar_InitializeScoreWidget_Statics::NewProp_NewPlayerState = { "NewPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScoreBar_eventInitializeScoreWidget_Parms, NewPlayerState), Z_Construct_UClass_AScorePlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScoreBar_InitializeScoreWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScoreBar_InitializeScoreWidget_Statics::NewProp_NewPlayerState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UScoreBar_InitializeScoreWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScoreBar_InitializeScoreWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScoreBar, nullptr, "InitializeScoreWidget", nullptr, nullptr, Z_Construct_UFunction_UScoreBar_InitializeScoreWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScoreBar_InitializeScoreWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UScoreBar_InitializeScoreWidget_Statics::ScoreBar_eventInitializeScoreWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScoreBar_InitializeScoreWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScoreBar_InitializeScoreWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UScoreBar_InitializeScoreWidget_Statics::ScoreBar_eventInitializeScoreWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UScoreBar_InitializeScoreWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScoreBar_InitializeScoreWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UScoreBar::execInitializeScoreWidget)
{
	P_GET_OBJECT(AScorePlayerState,Z_Param_NewPlayerState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeScoreWidget(Z_Param_NewPlayerState);
	P_NATIVE_END;
}
// End Class UScoreBar Function InitializeScoreWidget

// Begin Class UScoreBar Function SetOwnerCharacter
struct Z_Construct_UFunction_UScoreBar_SetOwnerCharacter_Statics
{
	struct ScoreBar_eventSetOwnerCharacter_Parms
	{
		ACharacter* InCh;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ScoreBar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InCh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScoreBar_SetOwnerCharacter_Statics::NewProp_InCh = { "InCh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScoreBar_eventSetOwnerCharacter_Parms, InCh), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScoreBar_SetOwnerCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScoreBar_SetOwnerCharacter_Statics::NewProp_InCh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UScoreBar_SetOwnerCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScoreBar_SetOwnerCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScoreBar, nullptr, "SetOwnerCharacter", nullptr, nullptr, Z_Construct_UFunction_UScoreBar_SetOwnerCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScoreBar_SetOwnerCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UScoreBar_SetOwnerCharacter_Statics::ScoreBar_eventSetOwnerCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScoreBar_SetOwnerCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScoreBar_SetOwnerCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UScoreBar_SetOwnerCharacter_Statics::ScoreBar_eventSetOwnerCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UScoreBar_SetOwnerCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScoreBar_SetOwnerCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UScoreBar::execSetOwnerCharacter)
{
	P_GET_OBJECT(ACharacter,Z_Param_InCh);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOwnerCharacter(Z_Param_InCh);
	P_NATIVE_END;
}
// End Class UScoreBar Function SetOwnerCharacter

// Begin Class UScoreBar Function SetScoreText
struct Z_Construct_UFunction_UScoreBar_SetScoreText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ScoreBar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScoreBar_SetScoreText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScoreBar, nullptr, "SetScoreText", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScoreBar_SetScoreText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScoreBar_SetScoreText_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UScoreBar_SetScoreText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScoreBar_SetScoreText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UScoreBar::execSetScoreText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetScoreText();
	P_NATIVE_END;
}
// End Class UScoreBar Function SetScoreText

// Begin Class UScoreBar
void UScoreBar::StaticRegisterNativesUScoreBar()
{
	UClass* Class = UScoreBar::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InitializeScoreWidget", &UScoreBar::execInitializeScoreWidget },
		{ "SetOwnerCharacter", &UScoreBar::execSetOwnerCharacter },
		{ "SetScoreText", &UScoreBar::execSetScoreText },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScoreBar);
UClass* Z_Construct_UClass_UScoreBar_NoRegister()
{
	return UScoreBar::StaticClass();
}
struct Z_Construct_UClass_UScoreBar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/ScoreBar.h" },
		{ "ModuleRelativePath", "Public/UI/ScoreBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScoreText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ScoreBar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ScoreBar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScoreText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UScoreBar_InitializeScoreWidget, "InitializeScoreWidget" }, // 3983529272
		{ &Z_Construct_UFunction_UScoreBar_SetOwnerCharacter, "SetOwnerCharacter" }, // 856154327
		{ &Z_Construct_UFunction_UScoreBar_SetScoreText, "SetScoreText" }, // 105270995
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScoreBar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScoreBar_Statics::NewProp_ScoreText = { "ScoreText", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScoreBar, ScoreText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoreText_MetaData), NewProp_ScoreText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScoreBar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScoreBar_Statics::NewProp_ScoreText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScoreBar_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UScoreBar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_KSH_ScoreGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScoreBar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UScoreBar_Statics::ClassParams = {
	&UScoreBar::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UScoreBar_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UScoreBar_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UScoreBar_Statics::Class_MetaDataParams), Z_Construct_UClass_UScoreBar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UScoreBar()
{
	if (!Z_Registration_Info_UClass_UScoreBar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScoreBar.OuterSingleton, Z_Construct_UClass_UScoreBar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UScoreBar.OuterSingleton;
}
template<> KSH_SCOREGAME_API UClass* StaticClass<UScoreBar>()
{
	return UScoreBar::StaticClass();
}
UScoreBar::UScoreBar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UScoreBar);
UScoreBar::~UScoreBar() {}
// End Class UScoreBar

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_UI_ScoreBar_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UScoreBar, UScoreBar::StaticClass, TEXT("UScoreBar"), &Z_Registration_Info_UClass_UScoreBar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScoreBar), 621895320U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_UI_ScoreBar_h_859331047(TEXT("/Script/KSH_ScoreGame"),
	Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_UI_ScoreBar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_UI_ScoreBar_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
