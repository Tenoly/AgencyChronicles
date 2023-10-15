// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AgencyChronicles/Gameplay/3C/Control/PCInGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCInGame() {}
// Cross Module References
	AGENCYCHRONICLES_API UClass* Z_Construct_UClass_APCInGame();
	AGENCYCHRONICLES_API UClass* Z_Construct_UClass_APCInGame_NoRegister();
	AGENCYCHRONICLES_API UEnum* Z_Construct_UEnum_AgencyChronicles_EInputActionType();
	AGENCYCHRONICLES_API UEnum* Z_Construct_UEnum_AgencyChronicles_EInputMappingContextType();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AgencyChronicles();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInputActionType;
	static UEnum* EInputActionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInputActionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInputActionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AgencyChronicles_EInputActionType, (UObject*)Z_Construct_UPackage__Script_AgencyChronicles(), TEXT("EInputActionType"));
		}
		return Z_Registration_Info_UEnum_EInputActionType.OuterSingleton;
	}
	template<> AGENCYCHRONICLES_API UEnum* StaticEnum<EInputActionType>()
	{
		return EInputActionType_StaticEnum();
	}
	struct Z_Construct_UEnum_AgencyChronicles_EInputActionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AgencyChronicles_EInputActionType_Statics::Enumerators[] = {
		{ "IAT_None", (int64)IAT_None },
		{ "IAT_Moving", (int64)IAT_Moving },
		{ "IAT_Looking", (int64)IAT_Looking },
		{ "IAT_Interact", (int64)IAT_Interact },
		{ "IAT_Zoom", (int64)IAT_Zoom },
		{ "IAT_Jump", (int64)IAT_Jump },
		{ "IAT_ToggleRunning", (int64)IAT_ToggleRunning },
		{ "IAT_OpenCaseMenu", (int64)IAT_OpenCaseMenu },
		{ "IAT_OpenInventoryMenu", (int64)IAT_OpenInventoryMenu },
		{ "IAT_OpenMapMenu", (int64)IAT_OpenMapMenu },
		{ "IAT_OpenOptionMenuOrCloseAllMenu", (int64)IAT_OpenOptionMenuOrCloseAllMenu },
		{ "IAT_SwitchGameplayMenu", (int64)IAT_SwitchGameplayMenu },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AgencyChronicles_EInputActionType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IAT_Interact.Name", "IAT_Interact" },
		{ "IAT_Jump.Name", "IAT_Jump" },
		{ "IAT_Looking.Name", "IAT_Looking" },
		{ "IAT_Moving.Comment", "// General\n" },
		{ "IAT_Moving.Name", "IAT_Moving" },
		{ "IAT_Moving.ToolTip", "General" },
		{ "IAT_None.Name", "IAT_None" },
		{ "IAT_OpenCaseMenu.Comment", "// Menus\n" },
		{ "IAT_OpenCaseMenu.Name", "IAT_OpenCaseMenu" },
		{ "IAT_OpenCaseMenu.ToolTip", "Menus" },
		{ "IAT_OpenInventoryMenu.Name", "IAT_OpenInventoryMenu" },
		{ "IAT_OpenMapMenu.Name", "IAT_OpenMapMenu" },
		{ "IAT_OpenOptionMenuOrCloseAllMenu.Name", "IAT_OpenOptionMenuOrCloseAllMenu" },
		{ "IAT_SwitchGameplayMenu.Name", "IAT_SwitchGameplayMenu" },
		{ "IAT_ToggleRunning.Name", "IAT_ToggleRunning" },
		{ "IAT_Zoom.Name", "IAT_Zoom" },
		{ "ModuleRelativePath", "Gameplay/3C/Control/PCInGame.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AgencyChronicles_EInputActionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AgencyChronicles,
		nullptr,
		"EInputActionType",
		"EInputActionType",
		Z_Construct_UEnum_AgencyChronicles_EInputActionType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AgencyChronicles_EInputActionType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AgencyChronicles_EInputActionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AgencyChronicles_EInputActionType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AgencyChronicles_EInputActionType()
	{
		if (!Z_Registration_Info_UEnum_EInputActionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInputActionType.InnerSingleton, Z_Construct_UEnum_AgencyChronicles_EInputActionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInputActionType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInputMappingContextType;
	static UEnum* EInputMappingContextType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInputMappingContextType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInputMappingContextType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AgencyChronicles_EInputMappingContextType, (UObject*)Z_Construct_UPackage__Script_AgencyChronicles(), TEXT("EInputMappingContextType"));
		}
		return Z_Registration_Info_UEnum_EInputMappingContextType.OuterSingleton;
	}
	template<> AGENCYCHRONICLES_API UEnum* StaticEnum<EInputMappingContextType>()
	{
		return EInputMappingContextType_StaticEnum();
	}
	struct Z_Construct_UEnum_AgencyChronicles_EInputMappingContextType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AgencyChronicles_EInputMappingContextType_Statics::Enumerators[] = {
		{ "IMCT_None", (int64)IMCT_None },
		{ "IMCT_InGame", (int64)IMCT_InGame },
		{ "IMCT_Menu", (int64)IMCT_Menu },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AgencyChronicles_EInputMappingContextType_Statics::Enum_MetaDataParams[] = {
		{ "IMCT_InGame.Name", "IMCT_InGame" },
		{ "IMCT_Menu.Name", "IMCT_Menu" },
		{ "IMCT_None.Name", "IMCT_None" },
		{ "ModuleRelativePath", "Gameplay/3C/Control/PCInGame.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AgencyChronicles_EInputMappingContextType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AgencyChronicles,
		nullptr,
		"EInputMappingContextType",
		"EInputMappingContextType",
		Z_Construct_UEnum_AgencyChronicles_EInputMappingContextType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AgencyChronicles_EInputMappingContextType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AgencyChronicles_EInputMappingContextType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AgencyChronicles_EInputMappingContextType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AgencyChronicles_EInputMappingContextType()
	{
		if (!Z_Registration_Info_UEnum_EInputMappingContextType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInputMappingContextType.InnerSingleton, Z_Construct_UEnum_AgencyChronicles_EInputMappingContextType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInputMappingContextType.InnerSingleton;
	}
	void APCInGame::StaticRegisterNativesAPCInGame()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APCInGame);
	UClass* Z_Construct_UClass_APCInGame_NoRegister()
	{
		return APCInGame::StaticClass();
	}
	struct Z_Construct_UClass_APCInGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Inputs_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Inputs_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Inputs;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MappingContexts_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MappingContexts_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MappingContexts_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MappingContexts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APCInGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_AgencyChronicles,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APCInGame_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCInGame_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Gameplay/3C/Control/PCInGame.h" },
		{ "ModuleRelativePath", "Gameplay/3C/Control/PCInGame.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APCInGame_Statics::NewProp_Inputs_ValueProp = { "Inputs", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APCInGame_Statics::NewProp_Inputs_Key_KeyProp = { "Inputs_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_AgencyChronicles_EInputActionType, METADATA_PARAMS(0, nullptr) }; // 2853742659
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCInGame_Statics::NewProp_Inputs_MetaData[] = {
		{ "Category", "Inputs" },
		{ "ModuleRelativePath", "Gameplay/3C/Control/PCInGame.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_APCInGame_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APCInGame, Inputs), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APCInGame_Statics::NewProp_Inputs_MetaData), Z_Construct_UClass_APCInGame_Statics::NewProp_Inputs_MetaData) }; // 2853742659
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APCInGame_Statics::NewProp_MappingContexts_ValueProp = { "MappingContexts", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APCInGame_Statics::NewProp_MappingContexts_Key_KeyProp = { "MappingContexts_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_AgencyChronicles_EInputMappingContextType, METADATA_PARAMS(0, nullptr) }; // 4264988636
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCInGame_Statics::NewProp_MappingContexts_MetaData[] = {
		{ "Category", "Inputs" },
		{ "ModuleRelativePath", "Gameplay/3C/Control/PCInGame.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_APCInGame_Statics::NewProp_MappingContexts = { "MappingContexts", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APCInGame, MappingContexts), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APCInGame_Statics::NewProp_MappingContexts_MetaData), Z_Construct_UClass_APCInGame_Statics::NewProp_MappingContexts_MetaData) }; // 4264988636
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APCInGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCInGame_Statics::NewProp_Inputs_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCInGame_Statics::NewProp_Inputs_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCInGame_Statics::NewProp_Inputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCInGame_Statics::NewProp_MappingContexts_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCInGame_Statics::NewProp_MappingContexts_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCInGame_Statics::NewProp_MappingContexts,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APCInGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APCInGame>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APCInGame_Statics::ClassParams = {
		&APCInGame::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APCInGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APCInGame_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APCInGame_Statics::Class_MetaDataParams), Z_Construct_UClass_APCInGame_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APCInGame_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APCInGame()
	{
		if (!Z_Registration_Info_UClass_APCInGame.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APCInGame.OuterSingleton, Z_Construct_UClass_APCInGame_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APCInGame.OuterSingleton;
	}
	template<> AGENCYCHRONICLES_API UClass* StaticClass<APCInGame>()
	{
		return APCInGame::StaticClass();
	}
	APCInGame::APCInGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APCInGame);
	APCInGame::~APCInGame() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_AgencyChronicles_AgencyChronicles_Source_AgencyChronicles_Gameplay_3C_Control_PCInGame_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_AgencyChronicles_AgencyChronicles_Source_AgencyChronicles_Gameplay_3C_Control_PCInGame_h_Statics::EnumInfo[] = {
		{ EInputActionType_StaticEnum, TEXT("EInputActionType"), &Z_Registration_Info_UEnum_EInputActionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2853742659U) },
		{ EInputMappingContextType_StaticEnum, TEXT("EInputMappingContextType"), &Z_Registration_Info_UEnum_EInputMappingContextType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4264988636U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_AgencyChronicles_AgencyChronicles_Source_AgencyChronicles_Gameplay_3C_Control_PCInGame_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APCInGame, APCInGame::StaticClass, TEXT("APCInGame"), &Z_Registration_Info_UClass_APCInGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APCInGame), 2070507764U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_AgencyChronicles_AgencyChronicles_Source_AgencyChronicles_Gameplay_3C_Control_PCInGame_h_3499770724(TEXT("/Script/AgencyChronicles"),
		Z_CompiledInDeferFile_FID_UnrealProjects_AgencyChronicles_AgencyChronicles_Source_AgencyChronicles_Gameplay_3C_Control_PCInGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_AgencyChronicles_AgencyChronicles_Source_AgencyChronicles_Gameplay_3C_Control_PCInGame_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealProjects_AgencyChronicles_AgencyChronicles_Source_AgencyChronicles_Gameplay_3C_Control_PCInGame_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_AgencyChronicles_AgencyChronicles_Source_AgencyChronicles_Gameplay_3C_Control_PCInGame_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
