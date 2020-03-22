// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeleton;
class UAnimSequence;
class UAnimationAsset;
class USkeletalMeshComponent;
#ifdef UNREALCV_AnimationBPLib_generated_h
#error "AnimationBPLib.generated.h already included, missing '#pragma once' in AnimationBPLib.h"
#endif
#define UNREALCV_AnimationBPLib_generated_h

#define UnrealText_UnrealCV_TEXT_plugin_unrealcv_diva_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_AnimationBPLib_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAllAnimationSequenceOfSkeleton) \
	{ \
		P_GET_OBJECT(USkeleton,Z_Param_Skeleton); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UAnimSequence*>*)Z_Param__Result=UAnimationBPLib::GetAllAnimationSequenceOfSkeleton(Z_Param_Skeleton); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllAnimationOfSkeleton) \
	{ \
		P_GET_OBJECT(USkeleton,Z_Param_Skeleton); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UAnimationAsset*>*)Z_Param__Result=UAnimationBPLib::GetAllAnimationOfSkeleton(Z_Param_Skeleton); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationName) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkeletalMeshComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UAnimationBPLib::GetAnimationName(Z_Param_SkeletalMeshComponent); \
		P_NATIVE_END; \
	}


#define UnrealText_UnrealCV_TEXT_plugin_unrealcv_diva_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_AnimationBPLib_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAllAnimationSequenceOfSkeleton) \
	{ \
		P_GET_OBJECT(USkeleton,Z_Param_Skeleton); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UAnimSequence*>*)Z_Param__Result=UAnimationBPLib::GetAllAnimationSequenceOfSkeleton(Z_Param_Skeleton); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllAnimationOfSkeleton) \
	{ \
		P_GET_OBJECT(USkeleton,Z_Param_Skeleton); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UAnimationAsset*>*)Z_Param__Result=UAnimationBPLib::GetAllAnimationOfSkeleton(Z_Param_Skeleton); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationName) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkeletalMeshComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UAnimationBPLib::GetAnimationName(Z_Param_SkeletalMeshComponent); \
		P_NATIVE_END; \
	}


#define UnrealText_UnrealCV_TEXT_plugin_unrealcv_diva_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_AnimationBPLib_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationBPLib(); \
	friend struct Z_Construct_UClass_UAnimationBPLib_Statics; \
public: \
	DECLARE_CLASS(UAnimationBPLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealCV"), NO_API) \
	DECLARE_SERIALIZER(UAnimationBPLib)


#define UnrealText_UnrealCV_TEXT_plugin_unrealcv_diva_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_AnimationBPLib_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUAnimationBPLib(); \
	friend struct Z_Construct_UClass_UAnimationBPLib_Statics; \
public: \
	DECLARE_CLASS(UAnimationBPLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealCV"), NO_API) \
	DECLARE_SERIALIZER(UAnimationBPLib)


#define UnrealText_UnrealCV_TEXT_plugin_unrealcv_diva_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_AnimationBPLib_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationBPLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationBPLib) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationBPLib); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationBPLib); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationBPLib(UAnimationBPLib&&); \
	NO_API UAnimationBPLib(const UAnimationBPLib&); \
public:


#define UnrealText_UnrealCV_TEXT_plugin_unrealcv_diva_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_AnimationBPLib_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationBPLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationBPLib(UAnimationBPLib&&); \
	NO_API UAnimationBPLib(const UAnimationBPLib&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationBPLib); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationBPLib); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationBPLib)


#define UnrealText_UnrealCV_TEXT_plugin_unrealcv_diva_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_AnimationBPLib_h_11_PRIVATE_PROPERTY_OFFSET
#define UnrealText_UnrealCV_TEXT_plugin_unrealcv_diva_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_AnimationBPLib_h_8_PROLOG
#define UnrealText_UnrealCV_TEXT_plugin_unrealcv_diva_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_AnimationBPLib_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealText_UnrealCV_TEXT_plugin_unrealcv_diva_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_AnimationBPLib_h_11_PRIVATE_PROPERTY_OFFSET \
	UnrealText_UnrealCV_TEXT_plugin_unrealcv_diva_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_AnimationBPLib_h_11_RPC_WRAPPERS \
	UnrealText_UnrealCV_TEXT_plugin_unrealcv_diva_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_AnimationBPLib_h_11_INCLASS \
	UnrealText_UnrealCV_TEXT_plugin_unrealcv_diva_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_AnimationBPLib_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealText_UnrealCV_TEXT_plugin_unrealcv_diva_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_AnimationBPLib_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealText_UnrealCV_TEXT_plugin_unrealcv_diva_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_AnimationBPLib_h_11_PRIVATE_PROPERTY_OFFSET \
	UnrealText_UnrealCV_TEXT_plugin_unrealcv_diva_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_AnimationBPLib_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealText_UnrealCV_TEXT_plugin_unrealcv_diva_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_AnimationBPLib_h_11_INCLASS_NO_PURE_DECLS \
	UnrealText_UnrealCV_TEXT_plugin_unrealcv_diva_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_AnimationBPLib_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALCV_API UClass* StaticClass<class UAnimationBPLib>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealText_UnrealCV_TEXT_plugin_unrealcv_diva_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_BPFunctionLib_AnimationBPLib_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
