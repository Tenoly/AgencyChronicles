// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gameplay/3C/Control/PCInGame.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AGENCYCHRONICLES_PCInGame_generated_h
#error "PCInGame.generated.h already included, missing '#pragma once' in PCInGame.h"
#endif
#define AGENCYCHRONICLES_PCInGame_generated_h

#define FID_UnrealProjects_AgencyChronicles_AgencyChronicles_Source_AgencyChronicles_Gameplay_3C_Control_PCInGame_h_40_SPARSE_DATA
#define FID_UnrealProjects_AgencyChronicles_AgencyChronicles_Source_AgencyChronicles_Gameplay_3C_Control_PCInGame_h_40_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UnrealProjects_AgencyChronicles_AgencyChronicles_Source_AgencyChronicles_Gameplay_3C_Control_PCInGame_h_40_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UnrealProjects_AgencyChronicles_AgencyChronicles_Source_AgencyChronicles_Gameplay_3C_Control_PCInGame_h_40_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_UnrealProjects_AgencyChronicles_AgencyChronicles_Source_AgencyChronicles_Gameplay_3C_Control_PCInGame_h_40_ACCESSORS
#define FID_UnrealProjects_AgencyChronicles_AgencyChronicles_Source_AgencyChronicles_Gameplay_3C_Control_PCInGame_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPCInGame(); \
	friend struct Z_Construct_UClass_APCInGame_Statics; \
public: \
	DECLARE_CLASS(APCInGame, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AgencyChronicles"), NO_API) \
	DECLARE_SERIALIZER(APCInGame)


#define FID_UnrealProjects_AgencyChronicles_AgencyChronicles_Source_AgencyChronicles_Gameplay_3C_Control_PCInGame_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APCInGame(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APCInGame(APCInGame&&); \
	NO_API APCInGame(const APCInGame&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APCInGame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APCInGame); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APCInGame) \
	NO_API virtual ~APCInGame();


#define FID_UnrealProjects_AgencyChronicles_AgencyChronicles_Source_AgencyChronicles_Gameplay_3C_Control_PCInGame_h_38_PROLOG
#define FID_UnrealProjects_AgencyChronicles_AgencyChronicles_Source_AgencyChronicles_Gameplay_3C_Control_PCInGame_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_AgencyChronicles_AgencyChronicles_Source_AgencyChronicles_Gameplay_3C_Control_PCInGame_h_40_SPARSE_DATA \
	FID_UnrealProjects_AgencyChronicles_AgencyChronicles_Source_AgencyChronicles_Gameplay_3C_Control_PCInGame_h_40_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UnrealProjects_AgencyChronicles_AgencyChronicles_Source_AgencyChronicles_Gameplay_3C_Control_PCInGame_h_40_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UnrealProjects_AgencyChronicles_AgencyChronicles_Source_AgencyChronicles_Gameplay_3C_Control_PCInGame_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_AgencyChronicles_AgencyChronicles_Source_AgencyChronicles_Gameplay_3C_Control_PCInGame_h_40_ACCESSORS \
	FID_UnrealProjects_AgencyChronicles_AgencyChronicles_Source_AgencyChronicles_Gameplay_3C_Control_PCInGame_h_40_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_AgencyChronicles_AgencyChronicles_Source_AgencyChronicles_Gameplay_3C_Control_PCInGame_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGENCYCHRONICLES_API UClass* StaticClass<class APCInGame>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_AgencyChronicles_AgencyChronicles_Source_AgencyChronicles_Gameplay_3C_Control_PCInGame_h


#define FOREACH_ENUM_EINPUTACTIONTYPE(op) \
	op(IAT_None) \
	op(IAT_Moving) \
	op(IAT_Looking) \
	op(IAT_Interact) \
	op(IAT_Zoom) \
	op(IAT_Jump) \
	op(IAT_ToggleRunning) \
	op(IAT_OpenCaseMenu) \
	op(IAT_OpenInventoryMenu) \
	op(IAT_OpenMapMenu) \
	op(IAT_OpenOptionMenuOrCloseAllMenu) \
	op(IAT_SwitchGameplayMenu) 
#define FOREACH_ENUM_EINPUTMAPPINGCONTEXTTYPE(op) \
	op(IMCT_None) \
	op(IMCT_InGame) \
	op(IMCT_Menu) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
