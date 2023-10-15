// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AgencyChronicles/Gameplay/GMGameplay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGMGameplay() {}
// Cross Module References
	AGENCYCHRONICLES_API UClass* Z_Construct_UClass_AGMGameplay();
	AGENCYCHRONICLES_API UClass* Z_Construct_UClass_AGMGameplay_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_AgencyChronicles();
// End Cross Module References
	void AGMGameplay::StaticRegisterNativesAGMGameplay()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGMGameplay);
	UClass* Z_Construct_UClass_AGMGameplay_NoRegister()
	{
		return AGMGameplay::StaticClass();
	}
	struct Z_Construct_UClass_AGMGameplay_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGMGameplay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AgencyChronicles,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGMGameplay_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMGameplay_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Gameplay/GMGameplay.h" },
		{ "ModuleRelativePath", "Gameplay/GMGameplay.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGMGameplay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGMGameplay>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGMGameplay_Statics::ClassParams = {
		&AGMGameplay::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGMGameplay_Statics::Class_MetaDataParams), Z_Construct_UClass_AGMGameplay_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AGMGameplay()
	{
		if (!Z_Registration_Info_UClass_AGMGameplay.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGMGameplay.OuterSingleton, Z_Construct_UClass_AGMGameplay_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGMGameplay.OuterSingleton;
	}
	template<> AGENCYCHRONICLES_API UClass* StaticClass<AGMGameplay>()
	{
		return AGMGameplay::StaticClass();
	}
	AGMGameplay::AGMGameplay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGMGameplay);
	AGMGameplay::~AGMGameplay() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_AgencyChronicles_AgencyChronicles_Source_AgencyChronicles_Gameplay_GMGameplay_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_AgencyChronicles_AgencyChronicles_Source_AgencyChronicles_Gameplay_GMGameplay_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGMGameplay, AGMGameplay::StaticClass, TEXT("AGMGameplay"), &Z_Registration_Info_UClass_AGMGameplay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGMGameplay), 454604655U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_AgencyChronicles_AgencyChronicles_Source_AgencyChronicles_Gameplay_GMGameplay_h_724162990(TEXT("/Script/AgencyChronicles"),
		Z_CompiledInDeferFile_FID_UnrealProjects_AgencyChronicles_AgencyChronicles_Source_AgencyChronicles_Gameplay_GMGameplay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_AgencyChronicles_AgencyChronicles_Source_AgencyChronicles_Gameplay_GMGameplay_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
