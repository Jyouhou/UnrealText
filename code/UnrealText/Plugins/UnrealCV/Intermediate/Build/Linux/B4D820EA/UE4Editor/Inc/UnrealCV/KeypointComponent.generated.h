// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FJsonObjectBP;
struct FVector;
#ifdef UNREALCV_KeypointComponent_generated_h
#error "KeypointComponent.generated.h already included, missing '#pragma once' in KeypointComponent.h"
#endif
#define UNREALCV_KeypointComponent_generated_h

#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_Component_KeypointComponent_h_38_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetKeypointsJson) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_KeypointNames); \
		P_GET_TARRAY_REF(FJsonObjectBP,Z_Param_Out_LocationsBP); \
		P_GET_UBOOL(Z_Param_bWorldSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetKeypointsJson(Z_Param_Out_KeypointNames,Z_Param_Out_LocationsBP,Z_Param_bWorldSpace); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetKeypoints) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_KeypointNames); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Locations); \
		P_GET_UBOOL(Z_Param_bWorldSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetKeypoints(Z_Param_Out_KeypointNames,Z_Param_Out_Locations,Z_Param_bWorldSpace); \
		P_NATIVE_END; \
	}


#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_Component_KeypointComponent_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetKeypointsJson) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_KeypointNames); \
		P_GET_TARRAY_REF(FJsonObjectBP,Z_Param_Out_LocationsBP); \
		P_GET_UBOOL(Z_Param_bWorldSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetKeypointsJson(Z_Param_Out_KeypointNames,Z_Param_Out_LocationsBP,Z_Param_bWorldSpace); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetKeypoints) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_KeypointNames); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Locations); \
		P_GET_UBOOL(Z_Param_bWorldSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetKeypoints(Z_Param_Out_KeypointNames,Z_Param_Out_Locations,Z_Param_bWorldSpace); \
		P_NATIVE_END; \
	}


#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_Component_KeypointComponent_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKeypointComponent(); \
	friend struct Z_Construct_UClass_UKeypointComponent_Statics; \
public: \
	DECLARE_CLASS(UKeypointComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealCV"), NO_API) \
	DECLARE_SERIALIZER(UKeypointComponent)


#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_Component_KeypointComponent_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUKeypointComponent(); \
	friend struct Z_Construct_UClass_UKeypointComponent_Statics; \
public: \
	DECLARE_CLASS(UKeypointComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealCV"), NO_API) \
	DECLARE_SERIALIZER(UKeypointComponent)


#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_Component_KeypointComponent_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKeypointComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKeypointComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKeypointComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKeypointComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKeypointComponent(UKeypointComponent&&); \
	NO_API UKeypointComponent(const UKeypointComponent&); \
public:


#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_Component_KeypointComponent_h_38_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKeypointComponent(UKeypointComponent&&); \
	NO_API UKeypointComponent(const UKeypointComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKeypointComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKeypointComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKeypointComponent)


#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_Component_KeypointComponent_h_38_PRIVATE_PROPERTY_OFFSET
#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_Component_KeypointComponent_h_35_PROLOG
#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_Component_KeypointComponent_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_Component_KeypointComponent_h_38_PRIVATE_PROPERTY_OFFSET \
	UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_Component_KeypointComponent_h_38_RPC_WRAPPERS \
	UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_Component_KeypointComponent_h_38_INCLASS \
	UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_Component_KeypointComponent_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_Component_KeypointComponent_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_Component_KeypointComponent_h_38_PRIVATE_PROPERTY_OFFSET \
	UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_Component_KeypointComponent_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_Component_KeypointComponent_h_38_INCLASS_NO_PURE_DECLS \
	UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_Component_KeypointComponent_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALCV_API UClass* StaticClass<class UKeypointComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_Component_KeypointComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
