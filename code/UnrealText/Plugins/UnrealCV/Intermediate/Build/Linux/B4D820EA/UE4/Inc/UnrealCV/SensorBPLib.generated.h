// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFusionCamSensor;
#ifdef UNREALCV_SensorBPLib_generated_h
#error "SensorBPLib.generated.h already included, missing '#pragma once' in SensorBPLib.h"
#endif
#define UNREALCV_SensorBPLib_generated_h

#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_SensorBPLib_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSensorById) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SensorId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFusionCamSensor**)Z_Param__Result=USensorBPLib::GetSensorById(Z_Param_SensorId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFusionSensorList) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UFusionCamSensor*>*)Z_Param__Result=USensorBPLib::GetFusionSensorList(); \
		P_NATIVE_END; \
	}


#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_SensorBPLib_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSensorById) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SensorId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFusionCamSensor**)Z_Param__Result=USensorBPLib::GetSensorById(Z_Param_SensorId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFusionSensorList) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UFusionCamSensor*>*)Z_Param__Result=USensorBPLib::GetFusionSensorList(); \
		P_NATIVE_END; \
	}


#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_SensorBPLib_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSensorBPLib(); \
	friend struct Z_Construct_UClass_USensorBPLib_Statics; \
public: \
	DECLARE_CLASS(USensorBPLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealCV"), NO_API) \
	DECLARE_SERIALIZER(USensorBPLib)


#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_SensorBPLib_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSensorBPLib(); \
	friend struct Z_Construct_UClass_USensorBPLib_Statics; \
public: \
	DECLARE_CLASS(USensorBPLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealCV"), NO_API) \
	DECLARE_SERIALIZER(USensorBPLib)


#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_SensorBPLib_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USensorBPLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USensorBPLib) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USensorBPLib); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USensorBPLib); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USensorBPLib(USensorBPLib&&); \
	NO_API USensorBPLib(const USensorBPLib&); \
public:


#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_SensorBPLib_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USensorBPLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USensorBPLib(USensorBPLib&&); \
	NO_API USensorBPLib(const USensorBPLib&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USensorBPLib); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USensorBPLib); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USensorBPLib)


#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_SensorBPLib_h_11_PRIVATE_PROPERTY_OFFSET
#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_SensorBPLib_h_8_PROLOG
#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_SensorBPLib_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_SensorBPLib_h_11_PRIVATE_PROPERTY_OFFSET \
	UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_SensorBPLib_h_11_RPC_WRAPPERS \
	UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_SensorBPLib_h_11_INCLASS \
	UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_SensorBPLib_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_SensorBPLib_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_SensorBPLib_h_11_PRIVATE_PROPERTY_OFFSET \
	UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_SensorBPLib_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_SensorBPLib_h_11_INCLASS_NO_PURE_DECLS \
	UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_SensorBPLib_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALCV_API UClass* StaticClass<class USensorBPLib>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_SensorBPLib_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
