// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FJsonObjectBP;
struct FTransform;
struct FColor;
struct FRotator;
struct FVector;
#ifdef UNREALCV_SerializeBPLib_generated_h
#error "SerializeBPLib.generated.h already included, missing '#pragma once' in SerializeBPLib.h"
#endif
#define UNREALCV_SerializeBPLib_generated_h

#define UnrealText_UnrealCV_TEXT_plugin_unrealcv_diva_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_SerializeBPLib_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execJsonToStr) \
	{ \
		P_GET_STRUCT_REF(FJsonObjectBP,Z_Param_Out_JsonObjectBP); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=USerializeBPLib::JsonToStr(Z_Param_Out_JsonObjectBP); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStringMapToJson) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Keys); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Values); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FJsonObjectBP*)Z_Param__Result=USerializeBPLib::StringMapToJson(Z_Param_Out_Keys,Z_Param_Out_Values); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTMapToJson) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Keys); \
		P_GET_TARRAY_REF(FJsonObjectBP,Z_Param_Out_Values); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FJsonObjectBP*)Z_Param__Result=USerializeBPLib::TMapToJson(Z_Param_Out_Keys,Z_Param_Out_Values); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execArrayToJson) \
	{ \
		P_GET_TARRAY_REF(FJsonObjectBP,Z_Param_Out_Array); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FJsonObjectBP*)Z_Param__Result=USerializeBPLib::ArrayToJson(Z_Param_Out_Array); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransformToJson) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FJsonObjectBP*)Z_Param__Result=USerializeBPLib::TransformToJson(Z_Param_Out_Transform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execColorToJson) \
	{ \
		P_GET_STRUCT_REF(FColor,Z_Param_Out_Color); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FJsonObjectBP*)Z_Param__Result=USerializeBPLib::ColorToJson(Z_Param_Out_Color); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRotatorToJson) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FJsonObjectBP*)Z_Param__Result=USerializeBPLib::RotatorToJson(Z_Param_Out_Rotator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVectorToJson) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Vec); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FJsonObjectBP*)Z_Param__Result=USerializeBPLib::VectorToJson(Z_Param_Out_Vec); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStringToJson) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FJsonObjectBP*)Z_Param__Result=USerializeBPLib::StringToJson(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIntToJson) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FJsonObjectBP*)Z_Param__Result=USerializeBPLib::IntToJson(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFloatToJson) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FJsonObjectBP*)Z_Param__Result=USerializeBPLib::FloatToJson(Z_Param_Value); \
		P_NATIVE_END; \
	}


#define UnrealText_UnrealCV_TEXT_plugin_unrealcv_diva_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_SerializeBPLib_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execJsonToStr) \
	{ \
		P_GET_STRUCT_REF(FJsonObjectBP,Z_Param_Out_JsonObjectBP); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=USerializeBPLib::JsonToStr(Z_Param_Out_JsonObjectBP); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStringMapToJson) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Keys); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Values); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FJsonObjectBP*)Z_Param__Result=USerializeBPLib::StringMapToJson(Z_Param_Out_Keys,Z_Param_Out_Values); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTMapToJson) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Keys); \
		P_GET_TARRAY_REF(FJsonObjectBP,Z_Param_Out_Values); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FJsonObjectBP*)Z_Param__Result=USerializeBPLib::TMapToJson(Z_Param_Out_Keys,Z_Param_Out_Values); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execArrayToJson) \
	{ \
		P_GET_TARRAY_REF(FJsonObjectBP,Z_Param_Out_Array); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FJsonObjectBP*)Z_Param__Result=USerializeBPLib::ArrayToJson(Z_Param_Out_Array); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransformToJson) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FJsonObjectBP*)Z_Param__Result=USerializeBPLib::TransformToJson(Z_Param_Out_Transform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execColorToJson) \
	{ \
		P_GET_STRUCT_REF(FColor,Z_Param_Out_Color); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FJsonObjectBP*)Z_Param__Result=USerializeBPLib::ColorToJson(Z_Param_Out_Color); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRotatorToJson) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FJsonObjectBP*)Z_Param__Result=USerializeBPLib::RotatorToJson(Z_Param_Out_Rotator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVectorToJson) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Vec); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FJsonObjectBP*)Z_Param__Result=USerializeBPLib::VectorToJson(Z_Param_Out_Vec); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStringToJson) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FJsonObjectBP*)Z_Param__Result=USerializeBPLib::StringToJson(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIntToJson) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FJsonObjectBP*)Z_Param__Result=USerializeBPLib::IntToJson(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFloatToJson) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FJsonObjectBP*)Z_Param__Result=USerializeBPLib::FloatToJson(Z_Param_Value); \
		P_NATIVE_END; \
	}


#define UnrealText_UnrealCV_TEXT_plugin_unrealcv_diva_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_SerializeBPLib_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSerializeBPLib(); \
	friend struct Z_Construct_UClass_USerializeBPLib_Statics; \
public: \
	DECLARE_CLASS(USerializeBPLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealCV"), NO_API) \
	DECLARE_SERIALIZER(USerializeBPLib)


#define UnrealText_UnrealCV_TEXT_plugin_unrealcv_diva_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_SerializeBPLib_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSerializeBPLib(); \
	friend struct Z_Construct_UClass_USerializeBPLib_Statics; \
public: \
	DECLARE_CLASS(USerializeBPLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealCV"), NO_API) \
	DECLARE_SERIALIZER(USerializeBPLib)


#define UnrealText_UnrealCV_TEXT_plugin_unrealcv_diva_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_SerializeBPLib_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USerializeBPLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USerializeBPLib) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USerializeBPLib); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USerializeBPLib); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USerializeBPLib(USerializeBPLib&&); \
	NO_API USerializeBPLib(const USerializeBPLib&); \
public:


#define UnrealText_UnrealCV_TEXT_plugin_unrealcv_diva_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_SerializeBPLib_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USerializeBPLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USerializeBPLib(USerializeBPLib&&); \
	NO_API USerializeBPLib(const USerializeBPLib&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USerializeBPLib); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USerializeBPLib); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USerializeBPLib)


#define UnrealText_UnrealCV_TEXT_plugin_unrealcv_diva_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_SerializeBPLib_h_13_PRIVATE_PROPERTY_OFFSET
#define UnrealText_UnrealCV_TEXT_plugin_unrealcv_diva_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_SerializeBPLib_h_9_PROLOG
#define UnrealText_UnrealCV_TEXT_plugin_unrealcv_diva_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_SerializeBPLib_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealText_UnrealCV_TEXT_plugin_unrealcv_diva_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_SerializeBPLib_h_13_PRIVATE_PROPERTY_OFFSET \
	UnrealText_UnrealCV_TEXT_plugin_unrealcv_diva_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_SerializeBPLib_h_13_RPC_WRAPPERS \
	UnrealText_UnrealCV_TEXT_plugin_unrealcv_diva_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_SerializeBPLib_h_13_INCLASS \
	UnrealText_UnrealCV_TEXT_plugin_unrealcv_diva_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_SerializeBPLib_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealText_UnrealCV_TEXT_plugin_unrealcv_diva_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_SerializeBPLib_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealText_UnrealCV_TEXT_plugin_unrealcv_diva_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_SerializeBPLib_h_13_PRIVATE_PROPERTY_OFFSET \
	UnrealText_UnrealCV_TEXT_plugin_unrealcv_diva_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_SerializeBPLib_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealText_UnrealCV_TEXT_plugin_unrealcv_diva_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_SerializeBPLib_h_13_INCLASS_NO_PURE_DECLS \
	UnrealText_UnrealCV_TEXT_plugin_unrealcv_diva_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_SerializeBPLib_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALCV_API UClass* StaticClass<class USerializeBPLib>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealText_UnrealCV_TEXT_plugin_unrealcv_diva_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_SerializeBPLib_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
