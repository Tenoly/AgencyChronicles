// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AgencyChronicles/Misc/Utils/MathUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMathUtils() {}
// Cross Module References
	AGENCYCHRONICLES_API UClass* Z_Construct_UClass_UMathUtils();
	AGENCYCHRONICLES_API UClass* Z_Construct_UClass_UMathUtils_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AgencyChronicles();
// End Cross Module References
	void UMathUtils::StaticRegisterNativesUMathUtils()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMathUtils);
	UClass* Z_Construct_UClass_UMathUtils_NoRegister()
	{
		return UMathUtils::StaticClass();
	}
	struct Z_Construct_UClass_UMathUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMathUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AgencyChronicles,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMathUtils_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMathUtils_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Misc/Utils/MathUtils.h" },
		{ "ModuleRelativePath", "Misc/Utils/MathUtils.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMathUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMathUtils>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMathUtils_Statics::ClassParams = {
		&UMathUtils::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMathUtils_Statics::Class_MetaDataParams), Z_Construct_UClass_UMathUtils_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMathUtils()
	{
		if (!Z_Registration_Info_UClass_UMathUtils.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMathUtils.OuterSingleton, Z_Construct_UClass_UMathUtils_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMathUtils.OuterSingleton;
	}
	template<> AGENCYCHRONICLES_API UClass* StaticClass<UMathUtils>()
	{
		return UMathUtils::StaticClass();
	}
	UMathUtils::UMathUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMathUtils);
	UMathUtils::~UMathUtils() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_AgencyChronicles_AgencyChronicles_Source_AgencyChronicles_Misc_Utils_MathUtils_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_AgencyChronicles_AgencyChronicles_Source_AgencyChronicles_Misc_Utils_MathUtils_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMathUtils, UMathUtils::StaticClass, TEXT("UMathUtils"), &Z_Registration_Info_UClass_UMathUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMathUtils), 2490727805U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_AgencyChronicles_AgencyChronicles_Source_AgencyChronicles_Misc_Utils_MathUtils_h_2582172559(TEXT("/Script/AgencyChronicles"),
		Z_CompiledInDeferFile_FID_UnrealProjects_AgencyChronicles_AgencyChronicles_Source_AgencyChronicles_Misc_Utils_MathUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_AgencyChronicles_AgencyChronicles_Source_AgencyChronicles_Misc_Utils_MathUtils_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
