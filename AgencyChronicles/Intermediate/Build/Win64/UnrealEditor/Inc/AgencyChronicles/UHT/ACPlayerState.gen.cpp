// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AgencyChronicles/Gameplay/3C/Character/ACPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACPlayerState() {}
// Cross Module References
	AGENCYCHRONICLES_API UClass* Z_Construct_UClass_AACPlayerState();
	AGENCYCHRONICLES_API UClass* Z_Construct_UClass_AACPlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_AgencyChronicles();
// End Cross Module References
	void AACPlayerState::StaticRegisterNativesAACPlayerState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AACPlayerState);
	UClass* Z_Construct_UClass_AACPlayerState_NoRegister()
	{
		return AACPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_AACPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AACPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_AgencyChronicles,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACPlayerState_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACPlayerState_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Gameplay/3C/Character/ACPlayerState.h" },
		{ "ModuleRelativePath", "Gameplay/3C/Character/ACPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AACPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AACPlayerState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AACPlayerState_Statics::ClassParams = {
		&AACPlayerState::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_AACPlayerState_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AACPlayerState()
	{
		if (!Z_Registration_Info_UClass_AACPlayerState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AACPlayerState.OuterSingleton, Z_Construct_UClass_AACPlayerState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AACPlayerState.OuterSingleton;
	}
	template<> AGENCYCHRONICLES_API UClass* StaticClass<AACPlayerState>()
	{
		return AACPlayerState::StaticClass();
	}
	AACPlayerState::AACPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AACPlayerState);
	AACPlayerState::~AACPlayerState() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_AgencyChronicles_AgencyChronicles_Source_AgencyChronicles_Gameplay_3C_Character_ACPlayerState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_AgencyChronicles_AgencyChronicles_Source_AgencyChronicles_Gameplay_3C_Character_ACPlayerState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AACPlayerState, AACPlayerState::StaticClass, TEXT("AACPlayerState"), &Z_Registration_Info_UClass_AACPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AACPlayerState), 394561266U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_AgencyChronicles_AgencyChronicles_Source_AgencyChronicles_Gameplay_3C_Character_ACPlayerState_h_2608242903(TEXT("/Script/AgencyChronicles"),
		Z_CompiledInDeferFile_FID_UnrealProjects_AgencyChronicles_AgencyChronicles_Source_AgencyChronicles_Gameplay_3C_Character_ACPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_AgencyChronicles_AgencyChronicles_Source_AgencyChronicles_Gameplay_3C_Character_ACPlayerState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
