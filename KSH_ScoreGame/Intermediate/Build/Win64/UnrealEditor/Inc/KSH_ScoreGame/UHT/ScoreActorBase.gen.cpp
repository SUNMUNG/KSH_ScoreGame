// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KSH_ScoreGame/Public/ScoreActor/ScoreActorBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScoreActorBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
KSH_SCOREGAME_API UClass* Z_Construct_UClass_AScoreActorBase();
KSH_SCOREGAME_API UClass* Z_Construct_UClass_AScoreActorBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_KSH_ScoreGame();
// End Cross Module References

// Begin Class AScoreActorBase
void AScoreActorBase::StaticRegisterNativesAScoreActorBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AScoreActorBase);
UClass* Z_Construct_UClass_AScoreActorBase_NoRegister()
{
	return AScoreActorBase::StaticClass();
}
struct Z_Construct_UClass_AScoreActorBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ScoreActor/ScoreActorBase.h" },
		{ "ModuleRelativePath", "Public/ScoreActor/ScoreActorBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScoreActorBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AScoreActorBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_KSH_ScoreGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AScoreActorBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AScoreActorBase_Statics::ClassParams = {
	&AScoreActorBase::StaticClass,
	"Engine",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AScoreActorBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AScoreActorBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AScoreActorBase()
{
	if (!Z_Registration_Info_UClass_AScoreActorBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AScoreActorBase.OuterSingleton, Z_Construct_UClass_AScoreActorBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AScoreActorBase.OuterSingleton;
}
template<> KSH_SCOREGAME_API UClass* StaticClass<AScoreActorBase>()
{
	return AScoreActorBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AScoreActorBase);
AScoreActorBase::~AScoreActorBase() {}
// End Class AScoreActorBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_ScoreActor_ScoreActorBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AScoreActorBase, AScoreActorBase::StaticClass, TEXT("AScoreActorBase"), &Z_Registration_Info_UClass_AScoreActorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AScoreActorBase), 3741192908U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_ScoreActor_ScoreActorBase_h_2018074402(TEXT("/Script/KSH_ScoreGame"),
	Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_ScoreActor_ScoreActorBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_ScoreActor_ScoreActorBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
