// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFusionCamSensor;
class UMeshComponent;
struct FVector;
class UStaticMeshComponent;
class USkinnedMeshComponent;
class AActor;
struct FColor;
class APawn;
class USkeletalMeshComponent;
struct FJsonObjectBP;
struct FTransform;
#ifdef UNREALCV_VisionBPLib_generated_h
#error "VisionBPLib.generated.h already included, missing '#pragma once' in VisionBPLib.h"
#endif
#define UNREALCV_VisionBPLib_generated_h

#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_VisionBPLib_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAnnotateWorld) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVisionBPLib::AnnotateWorld(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerSensor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFusionCamSensor**)Z_Param__Result=UVisionBPLib::GetPlayerSensor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVertexArrayFromMeshComponent) \
	{ \
		P_GET_OBJECT(UMeshComponent,Z_Param_MeshComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FVector>*)Z_Param__Result=UVisionBPLib::GetVertexArrayFromMeshComponent(Z_Param_MeshComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStaticMeshComponentGetVertexArray) \
	{ \
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FVector>*)Z_Param__Result=UVisionBPLib::StaticMeshComponentGetVertexArray(Z_Param_StaticMeshComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSkinnedMeshComponentGetVertexArray) \
	{ \
		P_GET_OBJECT(USkinnedMeshComponent,Z_Param_Component); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FVector>*)Z_Param__Result=UVisionBPLib::SkinnedMeshComponentGetVertexArray(Z_Param_Component); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnnotationColor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_STRUCT_REF(FColor,Z_Param_Out_AnnotationColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVisionBPLib::GetAnnotationColor(Z_Param_Actor,Z_Param_Out_AnnotationColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorList) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorList); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVisionBPLib::GetActorList(Z_Param_Out_ActorList); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateInput) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Pawn); \
		P_GET_UBOOL(Z_Param_Enable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVisionBPLib::UpdateInput(Z_Param_Pawn,Z_Param_Enable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVertexArray) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_VertexArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVisionBPLib::GetVertexArray(Z_Param_Actor,Z_Param_Out_VertexArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoneTransformJson) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkeletalMeshComponent); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_IncludedBones); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_BoneNames); \
		P_GET_TARRAY_REF(FJsonObjectBP,Z_Param_Out_BoneTransformsJson); \
		P_GET_UBOOL(Z_Param_bWorldSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVisionBPLib::GetBoneTransformJson(Z_Param_SkeletalMeshComponent,Z_Param_Out_IncludedBones,Z_Param_Out_BoneNames,Z_Param_Out_BoneTransformsJson,Z_Param_bWorldSpace); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoneTransform) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkeletalMeshComponent); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_IncludedBones); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_BoneNames); \
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_BoneTransforms); \
		P_GET_UBOOL(Z_Param_bWorldSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVisionBPLib::GetBoneTransform(Z_Param_SkeletalMeshComponent,Z_Param_Out_IncludedBones,Z_Param_Out_BoneNames,Z_Param_Out_BoneTransforms,Z_Param_bWorldSpace); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveNpy) \
	{ \
		P_GET_TARRAY_REF(float,Z_Param_Out_FloatData); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Width); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Height); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Filename); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVisionBPLib::SaveNpy(Z_Param_Out_FloatData,Z_Param_Width,Z_Param_Height,Z_Param_Filename); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSavePng) \
	{ \
		P_GET_TARRAY_REF(FColor,Z_Param_Out_ImageData); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Width); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Height); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Filename); \
		P_GET_UBOOL(Z_Param_bKeepAlpha); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVisionBPLib::SavePng(Z_Param_Out_ImageData,Z_Param_Width,Z_Param_Height,Z_Param_Filename,Z_Param_bKeepAlpha); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendMessageBP) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVisionBPLib::SendMessageBP(Z_Param_Message); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAppendData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Data); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Filename); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVisionBPLib::AppendData(Z_Param_Data,Z_Param_Filename); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Data); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Filename); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVisionBPLib::SaveData(Z_Param_Data,Z_Param_Filename); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Filename); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVisionBPLib::CreateFile(Z_Param_Filename); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFrameNumber) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UVisionBPLib::FrameNumber(); \
		P_NATIVE_END; \
	}


#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_VisionBPLib_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAnnotateWorld) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVisionBPLib::AnnotateWorld(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerSensor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFusionCamSensor**)Z_Param__Result=UVisionBPLib::GetPlayerSensor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVertexArrayFromMeshComponent) \
	{ \
		P_GET_OBJECT(UMeshComponent,Z_Param_MeshComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FVector>*)Z_Param__Result=UVisionBPLib::GetVertexArrayFromMeshComponent(Z_Param_MeshComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStaticMeshComponentGetVertexArray) \
	{ \
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FVector>*)Z_Param__Result=UVisionBPLib::StaticMeshComponentGetVertexArray(Z_Param_StaticMeshComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSkinnedMeshComponentGetVertexArray) \
	{ \
		P_GET_OBJECT(USkinnedMeshComponent,Z_Param_Component); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FVector>*)Z_Param__Result=UVisionBPLib::SkinnedMeshComponentGetVertexArray(Z_Param_Component); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnnotationColor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_STRUCT_REF(FColor,Z_Param_Out_AnnotationColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVisionBPLib::GetAnnotationColor(Z_Param_Actor,Z_Param_Out_AnnotationColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorList) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorList); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVisionBPLib::GetActorList(Z_Param_Out_ActorList); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateInput) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Pawn); \
		P_GET_UBOOL(Z_Param_Enable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVisionBPLib::UpdateInput(Z_Param_Pawn,Z_Param_Enable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVertexArray) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_VertexArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVisionBPLib::GetVertexArray(Z_Param_Actor,Z_Param_Out_VertexArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoneTransformJson) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkeletalMeshComponent); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_IncludedBones); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_BoneNames); \
		P_GET_TARRAY_REF(FJsonObjectBP,Z_Param_Out_BoneTransformsJson); \
		P_GET_UBOOL(Z_Param_bWorldSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVisionBPLib::GetBoneTransformJson(Z_Param_SkeletalMeshComponent,Z_Param_Out_IncludedBones,Z_Param_Out_BoneNames,Z_Param_Out_BoneTransformsJson,Z_Param_bWorldSpace); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoneTransform) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkeletalMeshComponent); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_IncludedBones); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_BoneNames); \
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_BoneTransforms); \
		P_GET_UBOOL(Z_Param_bWorldSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVisionBPLib::GetBoneTransform(Z_Param_SkeletalMeshComponent,Z_Param_Out_IncludedBones,Z_Param_Out_BoneNames,Z_Param_Out_BoneTransforms,Z_Param_bWorldSpace); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveNpy) \
	{ \
		P_GET_TARRAY_REF(float,Z_Param_Out_FloatData); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Width); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Height); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Filename); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVisionBPLib::SaveNpy(Z_Param_Out_FloatData,Z_Param_Width,Z_Param_Height,Z_Param_Filename); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSavePng) \
	{ \
		P_GET_TARRAY_REF(FColor,Z_Param_Out_ImageData); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Width); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Height); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Filename); \
		P_GET_UBOOL(Z_Param_bKeepAlpha); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVisionBPLib::SavePng(Z_Param_Out_ImageData,Z_Param_Width,Z_Param_Height,Z_Param_Filename,Z_Param_bKeepAlpha); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendMessageBP) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVisionBPLib::SendMessageBP(Z_Param_Message); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAppendData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Data); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Filename); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVisionBPLib::AppendData(Z_Param_Data,Z_Param_Filename); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Data); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Filename); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVisionBPLib::SaveData(Z_Param_Data,Z_Param_Filename); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Filename); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVisionBPLib::CreateFile(Z_Param_Filename); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFrameNumber) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UVisionBPLib::FrameNumber(); \
		P_NATIVE_END; \
	}


#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_VisionBPLib_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVisionBPLib(); \
	friend struct Z_Construct_UClass_UVisionBPLib_Statics; \
public: \
	DECLARE_CLASS(UVisionBPLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealCV"), NO_API) \
	DECLARE_SERIALIZER(UVisionBPLib)


#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_VisionBPLib_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUVisionBPLib(); \
	friend struct Z_Construct_UClass_UVisionBPLib_Statics; \
public: \
	DECLARE_CLASS(UVisionBPLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealCV"), NO_API) \
	DECLARE_SERIALIZER(UVisionBPLib)


#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_VisionBPLib_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVisionBPLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVisionBPLib) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVisionBPLib); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVisionBPLib); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVisionBPLib(UVisionBPLib&&); \
	NO_API UVisionBPLib(const UVisionBPLib&); \
public:


#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_VisionBPLib_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVisionBPLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVisionBPLib(UVisionBPLib&&); \
	NO_API UVisionBPLib(const UVisionBPLib&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVisionBPLib); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVisionBPLib); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVisionBPLib)


#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_VisionBPLib_h_19_PRIVATE_PROPERTY_OFFSET
#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_VisionBPLib_h_16_PROLOG
#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_VisionBPLib_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_VisionBPLib_h_19_PRIVATE_PROPERTY_OFFSET \
	UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_VisionBPLib_h_19_RPC_WRAPPERS \
	UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_VisionBPLib_h_19_INCLASS \
	UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_VisionBPLib_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_VisionBPLib_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_VisionBPLib_h_19_PRIVATE_PROPERTY_OFFSET \
	UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_VisionBPLib_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_VisionBPLib_h_19_INCLASS_NO_PURE_DECLS \
	UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_VisionBPLib_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALCV_API UClass* StaticClass<class UVisionBPLib>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_VisionBPLib_h


#define FOREACH_ENUM_EFILEFORMAT(op) \
	op(EFileFormat::Png) \
	op(EFileFormat::Npy) 

enum class EFileFormat : uint8;
template<> UNREALCV_API UEnum* StaticEnum<EFileFormat>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
