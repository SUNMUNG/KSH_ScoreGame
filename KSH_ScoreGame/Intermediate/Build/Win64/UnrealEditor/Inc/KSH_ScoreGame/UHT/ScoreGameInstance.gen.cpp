// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KSH_ScoreGame/Public/Framework/ScoreGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScoreGameInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
KSH_SCOREGAME_API UClass* Z_Construct_UClass_UScoreGameInstance();
KSH_SCOREGAME_API UClass* Z_Construct_UClass_UScoreGameInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_KSH_ScoreGame();
// End Cross Module References

// Begin Class UScoreGameInstance
void UScoreGameInstance::StaticRegisterNativesUScoreGameInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScoreGameInstance);
UClass* Z_Construct_UClass_UScoreGameInstance_NoRegister()
{
	return UScoreGameInstance::StaticClass();
}
struct Z_Construct_UClass_UScoreGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Framework/ScoreGameInstance.h" },
		{ "ModuleRelativePath", "Public/Framework/ScoreGameInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScoreGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UScoreGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_KSH_ScoreGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScoreGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UScoreGameInstance_Statics::ClassParams = {
	&UScoreGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UScoreGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UScoreGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UScoreGameInstance()
{
	if (!Z_Registration_Info_UClass_UScoreGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScoreGameInstance.OuterSingleton, Z_Construct_UClass_UScoreGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UScoreGameInstance.OuterSingleton;
}
template<> KSH_SCOREGAME_API UClass* StaticClass<UScoreGameInstance>()
{
	return UScoreGameInstance::StaticClass();
}
UScoreGameInstance::UScoreGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UScoreGameInstance);
UScoreGameInstance::~UScoreGameInstance() {}
// End Class UScoreGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_Framework_ScoreGameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UScoreGameInstance, UScoreGameInstance::StaticClass, TEXT("UScoreGameInstance"), &Z_Registration_Info_UClass_UScoreGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScoreGameInstance), 1809350703U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_Framework_ScoreGameInstance_h_2159378436(TEXT("/Script/KSH_ScoreGame"),
	Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_Framework_ScoreGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_Framework_ScoreGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
