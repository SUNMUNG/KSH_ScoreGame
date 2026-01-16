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
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
KSH_SCOREGAME_API UClass* Z_Construct_UClass_AScoreActorBase();
KSH_SCOREGAME_API UClass* Z_Construct_UClass_AScoreActorBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_KSH_ScoreGame();
// End Cross Module References

// Begin Class AScoreActorBase Function OnActorOverlap
struct Z_Construct_UFunction_AScoreActorBase_OnActorOverlap_Statics
{
	struct ScoreActorBase_eventOnActorOverlap_Parms
	{
		AActor* OverlappedActor;
		AActor* OtherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScoreActor/ScoreActorBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AScoreActorBase_OnActorOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScoreActorBase_eventOnActorOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AScoreActorBase_OnActorOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScoreActorBase_eventOnActorOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AScoreActorBase_OnActorOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScoreActorBase_OnActorOverlap_Statics::NewProp_OverlappedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScoreActorBase_OnActorOverlap_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AScoreActorBase_OnActorOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScoreActorBase_OnActorOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScoreActorBase, nullptr, "OnActorOverlap", nullptr, nullptr, Z_Construct_UFunction_AScoreActorBase_OnActorOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AScoreActorBase_OnActorOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AScoreActorBase_OnActorOverlap_Statics::ScoreActorBase_eventOnActorOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AScoreActorBase_OnActorOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AScoreActorBase_OnActorOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AScoreActorBase_OnActorOverlap_Statics::ScoreActorBase_eventOnActorOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AScoreActorBase_OnActorOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AScoreActorBase_OnActorOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AScoreActorBase::execOnActorOverlap)
{
	P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnActorOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor);
	P_NATIVE_END;
}
// End Class AScoreActorBase Function OnActorOverlap

// Begin Class AScoreActorBase
void AScoreActorBase::StaticRegisterNativesAScoreActorBase()
{
	UClass* Class = AScoreActorBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnActorOverlap", &AScoreActorBase::execOnActorOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collision_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ScoreActor/ScoreActorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ScoreActor/ScoreActorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorScore_MetaData[] = {
		{ "Category", "Components" },
		{ "ModuleRelativePath", "Public/ScoreActor/ScoreActorBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Collision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActorScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AScoreActorBase_OnActorOverlap, "OnActorOverlap" }, // 1129495873
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScoreActorBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScoreActorBase_Statics::NewProp_Collision = { "Collision", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScoreActorBase, Collision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collision_MetaData), NewProp_Collision_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScoreActorBase_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScoreActorBase, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AScoreActorBase_Statics::NewProp_ActorScore = { "ActorScore", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScoreActorBase, ActorScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorScore_MetaData), NewProp_ActorScore_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AScoreActorBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScoreActorBase_Statics::NewProp_Collision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScoreActorBase_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScoreActorBase_Statics::NewProp_ActorScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AScoreActorBase_Statics::PropPointers) < 2048);
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
	FuncInfo,
	Z_Construct_UClass_AScoreActorBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AScoreActorBase_Statics::PropPointers),
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
		{ Z_Construct_UClass_AScoreActorBase, AScoreActorBase::StaticClass, TEXT("AScoreActorBase"), &Z_Registration_Info_UClass_AScoreActorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AScoreActorBase), 2512672777U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_ScoreActor_ScoreActorBase_h_629732790(TEXT("/Script/KSH_ScoreGame"),
	Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_ScoreActor_ScoreActorBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSH_ScoreGame_KSH_ScoreGame_Source_KSH_ScoreGame_Public_ScoreActor_ScoreActorBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
