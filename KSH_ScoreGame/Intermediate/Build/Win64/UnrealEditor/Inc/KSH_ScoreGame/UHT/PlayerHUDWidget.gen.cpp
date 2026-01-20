// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KSH_ScoreGame/Public/UI/PlayerHUDWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerHUDWidget() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
KSH_SCOREGAME_API UClass* Z_Construct_UClass_UPlayerHUDWidget();
KSH_SCOREGAME_API UClass* Z_Construct_UClass_UPlayerHUDWidget_NoRegister();
KSH_SCOREGAME_API UClass* Z_Construct_UClass_UScoreBoardBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_USizeBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_KSH_ScoreGame();
// End Cross Module References

// Begin Class UPlayerHUDWidget Function OnReadyButtonClicked
struct Z_Construct_UFunction_UPlayerHUDWidget_OnReadyButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PlayerHUDWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerHUDWidget_OnReadyButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerHUDWidget, nullptr, "OnReadyButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHUDWidget_OnReadyButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerHUDWidget_OnReadyButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPlayerHUDWidget_OnReadyButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerHUDWidget_OnReadyButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerHUDWidget::execOnReadyButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnReadyButtonClicked();
	P_NATIVE_END;
}
// End Class UPlayerHUDWidget Function OnReadyButtonClicked

// Begin Class UPlayerHUDWidget Function UpdateGameStatusUI
struct Z_Construct_UFunction_UPlayerHUDWidget_UpdateGameStatusUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PlayerHUDWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerHUDWidget_UpdateGameStatusUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerHUDWidget, nullptr, "UpdateGameStatusUI", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHUDWidget_UpdateGameStatusUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerHUDWidget_UpdateGameStatusUI_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPlayerHUDWidget_UpdateGameStatusUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerHUDWidget_UpdateGameStatusUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerHUDWidget::execUpdateGameStatusUI)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateGameStatusUI();
	P_NATIVE_END;
}
// End Class UPlayerHUDWidget Function UpdateGameStatusUI

// Begin Class UPlayerHUDWidget Function UpdateLeaderboard
struct Z_Construct_UFunction_UPlayerHUDWidget_UpdateLeaderboard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PlayerHUDWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerHUDWidget_UpdateLeaderboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerHUDWidget, nullptr, "UpdateLeaderboard", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHUDWidget_UpdateLeaderboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerHUDWidget_UpdateLeaderboard_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPlayerHUDWidget_UpdateLeaderboard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerHUDWidget_UpdateLeaderboard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerHUDWidget::execUpdateLeaderboard)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateLeaderboard();
	P_NATIVE_END;
}
// End Class UPlayerHUDWidget Function UpdateLeaderboard

// Begin Class UPlayerHUDWidget
void UPlayerHUDWidget::StaticRegisterNativesUPlayerHUDWidget()
{
	UClass* Class = UPlayerHUDWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnReadyButtonClicked", &UPlayerHUDWidget::execOnReadyButtonClicked },
		{ "UpdateGameStatusUI", &UPlayerHUDWidget::execUpdateGameStatusUI },
		{ "UpdateLeaderboard", &UPlayerHUDWidget::execUpdateLeaderboard },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerHUDWidget);
UClass* Z_Construct_UClass_UPlayerHUDWidget_NoRegister()
{
	return UPlayerHUDWidget::StaticClass();
}
struct Z_Construct_UClass_UPlayerHUDWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/PlayerHUDWidget.h" },
		{ "ModuleRelativePath", "Public/UI/PlayerHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemainGameTime_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerHUDWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PlayerHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RankBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerHUDWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PlayerHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReadyPanel_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerHUDWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xeb\xa0\x88\xeb\x94\x94 \xed\x8c\xa8\xeb\x84\x90\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PlayerHUDWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xa0\x88\xeb\x94\x94 \xed\x8c\xa8\xeb\x84\x90" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerHUDWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PlayerHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerHUDWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PlayerHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReadyButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerHUDWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PlayerHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReadyText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerHUDWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PlayerHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CountdownText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerHUDWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PlayerHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatusText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerHUDWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PlayerHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScoreBoardBarClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\x8a\xa4\xec\xbd\x94\xec\x96\xb4\xeb\xb3\xb4\xeb\x93\x9c\xec\x97\x90 \xec\xb6\x94\xea\xb0\x80\xeb\x90\xa0 \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/PlayerHUDWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8a\xa4\xec\xbd\x94\xec\x96\xb4\xeb\xb3\xb4\xeb\x93\x9c\xec\x97\x90 \xec\xb6\x94\xea\xb0\x80\xeb\x90\xa0 \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RemainGameTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RankBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReadyPanel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TotalText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReadyButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReadyText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CountdownText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatusText;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ScoreBoardBarClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerHUDWidget_OnReadyButtonClicked, "OnReadyButtonClicked" }, // 918661026
		{ &Z_Construct_UFunction_UPlayerHUDWidget_UpdateGameStatusUI, "UpdateGameStatusUI" }, // 931012154
		{ &Z_Construct_UFunction_UPlayerHUDWidget_UpdateLeaderboard, "UpdateLeaderboard" }, // 3429461182
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerHUDWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_RemainGameTime = { "RemainGameTime", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerHUDWidget, RemainGameTime), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemainGameTime_MetaData), NewProp_RemainGameTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_RankBox = { "RankBox", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerHUDWidget, RankBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RankBox_MetaData), NewProp_RankBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_ReadyPanel = { "ReadyPanel", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerHUDWidget, ReadyPanel), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReadyPanel_MetaData), NewProp_ReadyPanel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_CurrentText = { "CurrentText", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerHUDWidget, CurrentText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentText_MetaData), NewProp_CurrentText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_TotalText = { "TotalText", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerHUDWidget, TotalText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalText_MetaData), NewProp_TotalText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_ReadyButton = { "ReadyButton", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerHUDWidget, ReadyButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReadyButton_MetaData), NewProp_ReadyButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_ReadyText = { "ReadyText", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerHUDWidget, ReadyText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReadyText_MetaData), NewProp_ReadyText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_CountdownText = { "CountdownText", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerHUDWidget, CountdownText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CountdownText_MetaData), NewProp_CountdownText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_StatusText = { "StatusText", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerHUDWidget, StatusText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatusText_MetaData), NewProp_StatusText_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_ScoreBoardBarClass = { "ScoreBoardBarClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerHUDWidget, ScoreBoardBarClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UScoreBoardBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoreBoardBarClass_MetaData), NewProp_ScoreBoardBarClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerHUDWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_RemainGameTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_RankBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_ReadyPanel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_CurrentText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_TotalText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_ReadyButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_ReadyText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_CountdownText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_StatusText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_ScoreBoardBarClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUDWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerHUDWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_KSH_ScoreGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUDWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerHUDWidget_Statics::ClassParams = {
	&UPlayerHUDWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPlayerHUDWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUDWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUDWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerHUDWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerHUDWidget()
{
	if (!Z_Registration_Info_UClass_UPlayerHUDWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerHUDWidget.OuterSingleton, Z_Construct_UClass_UPlayerHUDWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerHUDWidget.OuterSingleton;
}
template<> KSH_SCOREGAME_API UClass* StaticClass<UPlayerHUDWidget>()
{
	return UPlayerHUDWidget::StaticClass();
}
UPlayerHUDWidget::UPlayerHUDWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerHUDWidget);
UPlayerHUDWidget::~UPlayerHUDWidget() {}
// End Class UPlayerHUDWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_UI_PlayerHUDWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerHUDWidget, UPlayerHUDWidget::StaticClass, TEXT("UPlayerHUDWidget"), &Z_Registration_Info_UClass_UPlayerHUDWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerHUDWidget), 587531395U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_UI_PlayerHUDWidget_h_2855772050(TEXT("/Script/KSH_ScoreGame"),
	Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_UI_PlayerHUDWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_UI_PlayerHUDWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
