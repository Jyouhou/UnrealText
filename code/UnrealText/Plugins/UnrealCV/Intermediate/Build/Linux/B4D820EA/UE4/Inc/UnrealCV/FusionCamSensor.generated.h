// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRotator;
struct FVector;
struct FColor;
enum class ESegMode : uint8;
enum class EDepthMode : uint8;
enum class ELitMode : uint8;
#ifdef UNREALCV_FusionCamSensor_generated_h
#error "FusionCamSensor.generated.h already included, missing '#pragma once' in FusionCamSensor.h"
#endif
#define UNREALCV_FusionCamSensor_generated_h

#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_Sensor_CameraSensor_FusionCamSensor_h_40_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSensorFOV) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FOV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSensorFOV(Z_Param_FOV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSensorFOV) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetSensorFOV(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFilmHeight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetFilmHeight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFilmWidth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetFilmWidth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFilmSize) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Width); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Height); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFilmSize(Z_Param_Width,Z_Param_Height); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSensorRotation) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_Rotator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSensorRotation(Z_Param_Rotator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSensorLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSensorLocation(Z_Param_Location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSensorRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetSensorRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSensorLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetSensorLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSeg) \
	{ \
		P_GET_TARRAY_REF(FColor,Z_Param_Out_ObjMaskData); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Width); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Height); \
		P_GET_ENUM(ESegMode,Z_Param_SegMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetSeg(Z_Param_Out_ObjMaskData,Z_Param_Out_Width,Z_Param_Out_Height,ESegMode(Z_Param_SegMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNormal) \
	{ \
		P_GET_TARRAY_REF(FColor,Z_Param_Out_NormalData); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Width); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Height); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetNormal(Z_Param_Out_NormalData,Z_Param_Out_Width,Z_Param_Out_Height); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDepth) \
	{ \
		P_GET_TARRAY_REF(float,Z_Param_Out_DepthData); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_InOutWidth); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_InOutHeight); \
		P_GET_ENUM(EDepthMode,Z_Param_DepthMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetDepth(Z_Param_Out_DepthData,Z_Param_Out_InOutWidth,Z_Param_Out_InOutHeight,EDepthMode(Z_Param_DepthMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLit) \
	{ \
		P_GET_TARRAY_REF(FColor,Z_Param_Out_LitData); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_InOutWidth); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_InOutHeight); \
		P_GET_ENUM(ELitMode,Z_Param_LitMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetLit(Z_Param_Out_LitData,Z_Param_Out_InOutWidth,Z_Param_Out_InOutHeight,ELitMode(Z_Param_LitMode)); \
		P_NATIVE_END; \
	}


#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_Sensor_CameraSensor_FusionCamSensor_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSensorFOV) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FOV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSensorFOV(Z_Param_FOV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSensorFOV) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetSensorFOV(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFilmHeight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetFilmHeight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFilmWidth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetFilmWidth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFilmSize) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Width); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Height); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFilmSize(Z_Param_Width,Z_Param_Height); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSensorRotation) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_Rotator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSensorRotation(Z_Param_Rotator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSensorLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSensorLocation(Z_Param_Location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSensorRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetSensorRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSensorLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetSensorLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSeg) \
	{ \
		P_GET_TARRAY_REF(FColor,Z_Param_Out_ObjMaskData); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Width); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Height); \
		P_GET_ENUM(ESegMode,Z_Param_SegMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetSeg(Z_Param_Out_ObjMaskData,Z_Param_Out_Width,Z_Param_Out_Height,ESegMode(Z_Param_SegMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNormal) \
	{ \
		P_GET_TARRAY_REF(FColor,Z_Param_Out_NormalData); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Width); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Height); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetNormal(Z_Param_Out_NormalData,Z_Param_Out_Width,Z_Param_Out_Height); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDepth) \
	{ \
		P_GET_TARRAY_REF(float,Z_Param_Out_DepthData); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_InOutWidth); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_InOutHeight); \
		P_GET_ENUM(EDepthMode,Z_Param_DepthMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetDepth(Z_Param_Out_DepthData,Z_Param_Out_InOutWidth,Z_Param_Out_InOutHeight,EDepthMode(Z_Param_DepthMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLit) \
	{ \
		P_GET_TARRAY_REF(FColor,Z_Param_Out_LitData); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_InOutWidth); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_InOutHeight); \
		P_GET_ENUM(ELitMode,Z_Param_LitMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetLit(Z_Param_Out_LitData,Z_Param_Out_InOutWidth,Z_Param_Out_InOutHeight,ELitMode(Z_Param_LitMode)); \
		P_NATIVE_END; \
	}


#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_Sensor_CameraSensor_FusionCamSensor_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFusionCamSensor(); \
	friend struct Z_Construct_UClass_UFusionCamSensor_Statics; \
public: \
	DECLARE_CLASS(UFusionCamSensor, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealCV"), NO_API) \
	DECLARE_SERIALIZER(UFusionCamSensor)


#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_Sensor_CameraSensor_FusionCamSensor_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUFusionCamSensor(); \
	friend struct Z_Construct_UClass_UFusionCamSensor_Statics; \
public: \
	DECLARE_CLASS(UFusionCamSensor, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealCV"), NO_API) \
	DECLARE_SERIALIZER(UFusionCamSensor)


#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_Sensor_CameraSensor_FusionCamSensor_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFusionCamSensor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFusionCamSensor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFusionCamSensor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFusionCamSensor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFusionCamSensor(UFusionCamSensor&&); \
	NO_API UFusionCamSensor(const UFusionCamSensor&); \
public:


#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_Sensor_CameraSensor_FusionCamSensor_h_40_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFusionCamSensor(UFusionCamSensor&&); \
	NO_API UFusionCamSensor(const UFusionCamSensor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFusionCamSensor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFusionCamSensor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFusionCamSensor)


#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_Sensor_CameraSensor_FusionCamSensor_h_40_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PresetFilmSize() { return STRUCT_OFFSET(UFusionCamSensor, PresetFilmSize); } \
	FORCEINLINE static uint32 __PPO__FilmWidth() { return STRUCT_OFFSET(UFusionCamSensor, FilmWidth); } \
	FORCEINLINE static uint32 __PPO__FilmHeight() { return STRUCT_OFFSET(UFusionCamSensor, FilmHeight); } \
	FORCEINLINE static uint32 __PPO__FOV() { return STRUCT_OFFSET(UFusionCamSensor, FOV); } \
	FORCEINLINE static uint32 __PPO__FusionSensors() { return STRUCT_OFFSET(UFusionCamSensor, FusionSensors); } \
	FORCEINLINE static uint32 __PPO__DepthCamSensor() { return STRUCT_OFFSET(UFusionCamSensor, DepthCamSensor); } \
	FORCEINLINE static uint32 __PPO__NormalCamSensor() { return STRUCT_OFFSET(UFusionCamSensor, NormalCamSensor); } \
	FORCEINLINE static uint32 __PPO__AnnotationCamSensor() { return STRUCT_OFFSET(UFusionCamSensor, AnnotationCamSensor); } \
	FORCEINLINE static uint32 __PPO__LitCamSensor() { return STRUCT_OFFSET(UFusionCamSensor, LitCamSensor); }


#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_Sensor_CameraSensor_FusionCamSensor_h_37_PROLOG
#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_Sensor_CameraSensor_FusionCamSensor_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_Sensor_CameraSensor_FusionCamSensor_h_40_PRIVATE_PROPERTY_OFFSET \
	UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_Sensor_CameraSensor_FusionCamSensor_h_40_RPC_WRAPPERS \
	UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_Sensor_CameraSensor_FusionCamSensor_h_40_INCLASS \
	UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_Sensor_CameraSensor_FusionCamSensor_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_Sensor_CameraSensor_FusionCamSensor_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_Sensor_CameraSensor_FusionCamSensor_h_40_PRIVATE_PROPERTY_OFFSET \
	UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_Sensor_CameraSensor_FusionCamSensor_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_Sensor_CameraSensor_FusionCamSensor_h_40_INCLASS_NO_PURE_DECLS \
	UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_Sensor_CameraSensor_FusionCamSensor_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALCV_API UClass* StaticClass<class UFusionCamSensor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_Sensor_CameraSensor_FusionCamSensor_h


#define FOREACH_ENUM_EPRESETFILMSIZE(op) \
	op(EPresetFilmSize::F640x480) \
	op(EPresetFilmSize::F720p) \
	op(EPresetFilmSize::F1080p) 

enum class EPresetFilmSize : uint8;
template<> UNREALCV_API UEnum* StaticEnum<EPresetFilmSize>();

#define FOREACH_ENUM_ESEGMODE(op) \
	op(ESegMode::AnnotationComponent) \
	op(ESegMode::VertexColor) \
	op(ESegMode::CustomStencil) 

enum class ESegMode : uint8;
template<> UNREALCV_API UEnum* StaticEnum<ESegMode>();

#define FOREACH_ENUM_EDEPTHMODE(op) \
	op(EDepthMode::PlaneDepth) \
	op(EDepthMode::DistToCamCenter) 

enum class EDepthMode : uint8;
template<> UNREALCV_API UEnum* StaticEnum<EDepthMode>();

#define FOREACH_ENUM_ELITMODE(op) \
	op(ELitMode::Lit) \
	op(ELitMode::Slow) 

enum class ELitMode : uint8;
template<> UNREALCV_API UEnum* StaticEnum<ELitMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
