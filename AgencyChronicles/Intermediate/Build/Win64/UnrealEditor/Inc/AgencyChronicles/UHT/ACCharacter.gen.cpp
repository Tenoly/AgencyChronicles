// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AgencyChronicles/Gameplay/3C/Character/ACCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACCharacter() {}
// Cross Module References
	AGENCYCHRONICLES_API UClass* Z_Construct_UClass_AACCharacter();
	AGENCYCHRONICLES_API UClass* Z_Construct_UClass_AACCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_AgencyChronicles();
// End Cross Module References
	void AACCharacter::StaticRegisterNativesAACCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AACCharacter);
	UClass* Z_Construct_UClass_AACCharacter_NoRegister()
	{
		return AACCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AACCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AACCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_AgencyChronicles,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Gameplay/3C/Character/ACCharacter.h" },
		{ "ModuleRelativePath", "Gameplay/3C/Character/ACCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AACCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AACCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AACCharacter_Statics::ClassParams = {
		&AACCharacter::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AACCharacter_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AACCharacter()
	{
		if (!Z_Registration_Info_UClass_AACCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AACCharacter.OuterSingleton, Z_Construct_UClass_AACCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AACCharacter.OuterSingleton;
	}
	template<> AGENCYCHRONICLES_API UClass* StaticClass<AACCharacter>()
	{
		return AACCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AACCharacter);
	AACCharacter::~AACCharacter() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_AgencyChronicles_AgencyChronicles_Source_AgencyChronicles_Gameplay_3C_Character_ACCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_AgencyChronicles_AgencyChronicles_Source_AgencyChronicles_Gameplay_3C_Character_ACCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AACCharacter, AACCharacter::StaticClass, TEXT("AACCharacter"), &Z_Registration_Info_UClass_AACCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AACCharacter), 1244390005U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_AgencyChronicles_AgencyChronicles_Source_AgencyChronicles_Gameplay_3C_Character_ACCharacter_h_197447065(TEXT("/Script/AgencyChronicles"),
		Z_CompiledInDeferFile_FID_UnrealProjects_AgencyChronicles_AgencyChronicles_Source_AgencyChronicles_Gameplay_3C_Character_ACCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_AgencyChronicles_AgencyChronicles_Source_AgencyChronicles_Gameplay_3C_Character_ACCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
