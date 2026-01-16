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
UPackage* Z_Construct_UPackage__Script_KSH_ScoreGame();
// End Cross Module References

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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScoreCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_AScoreCharacter, AScoreCharacter::StaticClass, TEXT("AScoreCharacter"), &Z_Registration_Info_UClass_AScoreCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AScoreCharacter), 3932185607U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_Character_ScoreCharacter_h_3484141517(TEXT("/Script/KSH_ScoreGame"),
	Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_Character_ScoreCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_Character_ScoreCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
