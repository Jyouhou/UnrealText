// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCV/Public/UnrealText/StickerTextActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStickerTextActor() {}
// Cross Module References
	UNREALCV_API UClass* Z_Construct_UClass_AStickerTextActor_NoRegister();
	UNREALCV_API UClass* Z_Construct_UClass_AStickerTextActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealCV();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
// End Cross Module References
	void AStickerTextActor::StaticRegisterNativesAStickerTextActor()
	{
	}
	UClass* Z_Construct_UClass_AStickerTextActor_NoRegister()
	{
		return AStickerTextActor::StaticClass();
	}
	struct Z_Construct_UClass_AStickerTextActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_roughness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_roughness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VisThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RenderThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SanityCheckThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SanityCheckThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAspectRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAspectRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isProcessed_MetaData[];
#endif
		static void NewProp_isProcessed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isProcessed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SanityCheckRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SanityCheckRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpandRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExpandRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorStepSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HorStepSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerStepSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VerStepSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_boxHorCenterNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_boxHorCenterNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_boxVerCenterNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_boxVerCenterNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_boxCenterNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_boxCenterNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_triCenterNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_triCenterNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isTriangulationFinished_MetaData[];
#endif
		static void NewProp_isTriangulationFinished_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isTriangulationFinished;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StepDen_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StepDen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloseTraceThickness_LB_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CloseTraceThickness_LB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloseTraceThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CloseTraceThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SanityCheckDensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SanityCheckDensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isBoxValid_MetaData[];
#endif
		static void NewProp_isBoxValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isBoxValid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isTickAdjustAndGenMesh_MetaData[];
#endif
		static void NewProp_isTickAdjustAndGenMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isTickAdjustAndGenMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Color_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_G_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Color_G;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_R_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Color_R;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BR_Y_shrink_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BR_Y_shrink;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BR_X_shrink_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BR_X_shrink;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UL_Y_shrink_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UL_Y_shrink;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UL_X_shrink_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UL_X_shrink;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BR_Y_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BR_Y;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BR_X_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BR_X;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UL_Y_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UL_Y;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UL_X_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UL_X;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatTraceDepthFar_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatTraceDepthFar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceDepthFar_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceDepthFar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceDepth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceDepth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexCosine_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VertexCosine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShrinkTrialCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ShrinkTrialCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShrinkRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShrinkRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumShrinkTrialNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaximumShrinkTrialNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrthogonalDegreeThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OrthogonalDegreeThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrthogonalCosineThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OrthogonalCosineThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamRoughness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ParamRoughness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamMetallic_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ParamMetallic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamSpecular_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ParamSpecular;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmissiveColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EmissiveColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BLPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BLPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BRPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BRPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_URPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_URPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ULPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ULPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshDensityY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MeshDensityY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshDensityX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MeshDensityX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshDensityMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MeshDensityMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialAssetFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MaterialAssetFilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultTextPngFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultTextPngFilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStickerTextActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UnrealText/StickerTextActor.h" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_roughness_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_roughness = { "roughness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStickerTextActor, roughness), METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_roughness_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_roughness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_VisThreshold_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_VisThreshold = { "VisThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStickerTextActor, VisThreshold), METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_VisThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_VisThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_RenderThickness_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_RenderThickness = { "RenderThickness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStickerTextActor, RenderThickness), METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_RenderThickness_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_RenderThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_SanityCheckThreshold_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
		{ "ToolTip", "ver / hor" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_SanityCheckThreshold = { "SanityCheckThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStickerTextActor, SanityCheckThreshold), METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_SanityCheckThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_SanityCheckThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_MaxAspectRatio_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_MaxAspectRatio = { "MaxAspectRatio", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStickerTextActor, MaxAspectRatio), METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_MaxAspectRatio_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_MaxAspectRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_isProcessed_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
	};
#endif
	void Z_Construct_UClass_AStickerTextActor_Statics::NewProp_isProcessed_SetBit(void* Obj)
	{
		((AStickerTextActor*)Obj)->isProcessed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_isProcessed = { "isProcessed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AStickerTextActor), &Z_Construct_UClass_AStickerTextActor_Statics::NewProp_isProcessed_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_isProcessed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_isProcessed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_SanityCheckRange_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_SanityCheckRange = { "SanityCheckRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStickerTextActor, SanityCheckRange), METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_SanityCheckRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_SanityCheckRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_ExpandRatio_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_ExpandRatio = { "ExpandRatio", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStickerTextActor, ExpandRatio), METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_ExpandRatio_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_ExpandRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_HorStepSize_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_HorStepSize = { "HorStepSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStickerTextActor, HorStepSize), METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_HorStepSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_HorStepSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_VerStepSize_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_VerStepSize = { "VerStepSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStickerTextActor, VerStepSize), METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_VerStepSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_VerStepSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_boxHorCenterNormal_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_boxHorCenterNormal = { "boxHorCenterNormal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStickerTextActor, boxHorCenterNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_boxHorCenterNormal_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_boxHorCenterNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_boxVerCenterNormal_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_boxVerCenterNormal = { "boxVerCenterNormal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStickerTextActor, boxVerCenterNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_boxVerCenterNormal_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_boxVerCenterNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_boxCenterNormal_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_boxCenterNormal = { "boxCenterNormal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStickerTextActor, boxCenterNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_boxCenterNormal_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_boxCenterNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_triCenterNormal_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_triCenterNormal = { "triCenterNormal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStickerTextActor, triCenterNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_triCenterNormal_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_triCenterNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_isTriangulationFinished_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
	};
#endif
	void Z_Construct_UClass_AStickerTextActor_Statics::NewProp_isTriangulationFinished_SetBit(void* Obj)
	{
		((AStickerTextActor*)Obj)->isTriangulationFinished = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_isTriangulationFinished = { "isTriangulationFinished", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AStickerTextActor), &Z_Construct_UClass_AStickerTextActor_Statics::NewProp_isTriangulationFinished_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_isTriangulationFinished_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_isTriangulationFinished_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_StepDen_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_StepDen = { "StepDen", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStickerTextActor, StepDen), METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_StepDen_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_StepDen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_CloseTraceThickness_LB_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_CloseTraceThickness_LB = { "CloseTraceThickness_LB", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStickerTextActor, CloseTraceThickness_LB), METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_CloseTraceThickness_LB_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_CloseTraceThickness_LB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_CloseTraceThickness_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_CloseTraceThickness = { "CloseTraceThickness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStickerTextActor, CloseTraceThickness), METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_CloseTraceThickness_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_CloseTraceThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_SanityCheckDensity_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_SanityCheckDensity = { "SanityCheckDensity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStickerTextActor, SanityCheckDensity), METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_SanityCheckDensity_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_SanityCheckDensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_isBoxValid_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
	};
#endif
	void Z_Construct_UClass_AStickerTextActor_Statics::NewProp_isBoxValid_SetBit(void* Obj)
	{
		((AStickerTextActor*)Obj)->isBoxValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_isBoxValid = { "isBoxValid", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AStickerTextActor), &Z_Construct_UClass_AStickerTextActor_Statics::NewProp_isBoxValid_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_isBoxValid_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_isBoxValid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_isTickAdjustAndGenMesh_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
	};
#endif
	void Z_Construct_UClass_AStickerTextActor_Statics::NewProp_isTickAdjustAndGenMesh_SetBit(void* Obj)
	{
		((AStickerTextActor*)Obj)->isTickAdjustAndGenMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_isTickAdjustAndGenMesh = { "isTickAdjustAndGenMesh", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AStickerTextActor), &Z_Construct_UClass_AStickerTextActor_Statics::NewProp_isTickAdjustAndGenMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_isTickAdjustAndGenMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_isTickAdjustAndGenMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_Color_B_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_Color_B = { "Color_B", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStickerTextActor, Color_B), METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_Color_B_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_Color_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_Color_G_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_Color_G = { "Color_G", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStickerTextActor, Color_G), METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_Color_G_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_Color_G_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_Color_R_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_Color_R = { "Color_R", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStickerTextActor, Color_R), METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_Color_R_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_Color_R_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_BR_Y_shrink_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_BR_Y_shrink = { "BR_Y_shrink", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStickerTextActor, BR_Y_shrink), METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_BR_Y_shrink_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_BR_Y_shrink_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_BR_X_shrink_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_BR_X_shrink = { "BR_X_shrink", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStickerTextActor, BR_X_shrink), METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_BR_X_shrink_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_BR_X_shrink_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_UL_Y_shrink_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_UL_Y_shrink = { "UL_Y_shrink", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStickerTextActor, UL_Y_shrink), METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_UL_Y_shrink_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_UL_Y_shrink_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_UL_X_shrink_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_UL_X_shrink = { "UL_X_shrink", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStickerTextActor, UL_X_shrink), METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_UL_X_shrink_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_UL_X_shrink_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_BR_Y_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_BR_Y = { "BR_Y", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStickerTextActor, BR_Y), METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_BR_Y_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_BR_Y_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_BR_X_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_BR_X = { "BR_X", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStickerTextActor, BR_X), METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_BR_X_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_BR_X_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_UL_Y_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_UL_Y = { "UL_Y", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStickerTextActor, UL_Y), METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_UL_Y_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_UL_Y_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_UL_X_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_UL_X = { "UL_X", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStickerTextActor, UL_X), METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_UL_X_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_UL_X_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_FloatTraceDepthFar_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_FloatTraceDepthFar = { "FloatTraceDepthFar", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStickerTextActor, FloatTraceDepthFar), METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_FloatTraceDepthFar_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_FloatTraceDepthFar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_TraceDepthFar_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
		{ "ToolTip", "used in setting mesh vertexes" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_TraceDepthFar = { "TraceDepthFar", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStickerTextActor, TraceDepthFar), METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_TraceDepthFar_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_TraceDepthFar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_TraceDepth_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_TraceDepth = { "TraceDepth", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStickerTextActor, TraceDepth), METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_TraceDepth_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_TraceDepth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_VertexCosine_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_VertexCosine = { "VertexCosine", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(VertexCosine, AStickerTextActor), STRUCT_OFFSET(AStickerTextActor, VertexCosine), METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_VertexCosine_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_VertexCosine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_ShrinkTrialCount_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_ShrinkTrialCount = { "ShrinkTrialCount", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStickerTextActor, ShrinkTrialCount), METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_ShrinkTrialCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_ShrinkTrialCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_ShrinkRatio_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_ShrinkRatio = { "ShrinkRatio", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStickerTextActor, ShrinkRatio), METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_ShrinkRatio_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_ShrinkRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_MaximumShrinkTrialNumber_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_MaximumShrinkTrialNumber = { "MaximumShrinkTrialNumber", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStickerTextActor, MaximumShrinkTrialNumber), METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_MaximumShrinkTrialNumber_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_MaximumShrinkTrialNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_OrthogonalDegreeThreshold_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_OrthogonalDegreeThreshold = { "OrthogonalDegreeThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStickerTextActor, OrthogonalDegreeThreshold), METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_OrthogonalDegreeThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_OrthogonalDegreeThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_OrthogonalCosineThreshold_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_OrthogonalCosineThreshold = { "OrthogonalCosineThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStickerTextActor, OrthogonalCosineThreshold), METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_OrthogonalCosineThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_OrthogonalCosineThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_ParamRoughness_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_ParamRoughness = { "ParamRoughness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStickerTextActor, ParamRoughness), METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_ParamRoughness_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_ParamRoughness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_ParamMetallic_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_ParamMetallic = { "ParamMetallic", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStickerTextActor, ParamMetallic), METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_ParamMetallic_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_ParamMetallic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_ParamSpecular_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
		{ "ToolTip", "should be larger than 1 to glow" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_ParamSpecular = { "ParamSpecular", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStickerTextActor, ParamSpecular), METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_ParamSpecular_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_ParamSpecular_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_EmissiveColor_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
		{ "ToolTip", "text materials" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_EmissiveColor = { "EmissiveColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStickerTextActor, EmissiveColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_EmissiveColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_EmissiveColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_BLPosition_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
		{ "ToolTip", "world space location for bottom-right corner" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_BLPosition = { "BLPosition", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStickerTextActor, BLPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_BLPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_BLPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_BRPosition_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
		{ "ToolTip", "world space location for upper-right corner" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_BRPosition = { "BRPosition", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStickerTextActor, BRPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_BRPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_BRPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_URPosition_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
		{ "ToolTip", "world space location for upper-left corner" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_URPosition = { "URPosition", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStickerTextActor, URPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_URPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_URPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_ULPosition_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
		{ "ToolTip", "mesh density in the vertical direction" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_ULPosition = { "ULPosition", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStickerTextActor, ULPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_ULPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_ULPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_MeshDensityY_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
		{ "ToolTip", "mesh density in the horizonal direction" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_MeshDensityY = { "MeshDensityY", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStickerTextActor, MeshDensityY), METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_MeshDensityY_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_MeshDensityY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_MeshDensityX_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_MeshDensityX = { "MeshDensityX", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStickerTextActor, MeshDensityX), METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_MeshDensityX_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_MeshDensityX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_MeshDensityMultiplier_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
		{ "ToolTip", "text-instance level data\nlocation&rotation are bound to RootComponent\nuse RootComponent->SetWorldLocation/SetWorldRotation/SetWorldLocationAndRotation to modify\nuse GetActorLocation/GetActorRotation to retrieve" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_MeshDensityMultiplier = { "MeshDensityMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStickerTextActor, MeshDensityMultiplier), METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_MeshDensityMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_MeshDensityMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_MaterialAssetFilePath_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_MaterialAssetFilePath = { "MaterialAssetFilePath", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStickerTextActor, MaterialAssetFilePath), METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_MaterialAssetFilePath_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_MaterialAssetFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_DefaultTextPngFilePath_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
		{ "ToolTip", "for the texture" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_DefaultTextPngFilePath = { "DefaultTextPngFilePath", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStickerTextActor, DefaultTextPngFilePath), METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_DefaultTextPngFilePath_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_DefaultTextPngFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickerTextActor_Statics::NewProp_mesh_MetaData[] = {
		{ "Category", "StickerTextActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UnrealText/StickerTextActor.h" },
		{ "ToolTip", "low level CG data" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStickerTextActor_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStickerTextActor, mesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_mesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::NewProp_mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStickerTextActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_roughness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_VisThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_RenderThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_SanityCheckThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_MaxAspectRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_isProcessed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_SanityCheckRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_ExpandRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_HorStepSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_VerStepSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_boxHorCenterNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_boxVerCenterNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_boxCenterNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_triCenterNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_isTriangulationFinished,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_StepDen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_CloseTraceThickness_LB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_CloseTraceThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_SanityCheckDensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_isBoxValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_isTickAdjustAndGenMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_Color_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_Color_G,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_Color_R,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_BR_Y_shrink,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_BR_X_shrink,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_UL_Y_shrink,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_UL_X_shrink,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_BR_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_BR_X,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_UL_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_UL_X,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_FloatTraceDepthFar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_TraceDepthFar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_TraceDepth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_VertexCosine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_ShrinkTrialCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_ShrinkRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_MaximumShrinkTrialNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_OrthogonalDegreeThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_OrthogonalCosineThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_ParamRoughness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_ParamMetallic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_ParamSpecular,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_EmissiveColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_BLPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_BRPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_URPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_ULPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_MeshDensityY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_MeshDensityX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_MeshDensityMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_MaterialAssetFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_DefaultTextPngFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickerTextActor_Statics::NewProp_mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStickerTextActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStickerTextActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStickerTextActor_Statics::ClassParams = {
		&AStickerTextActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AStickerTextActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AStickerTextActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AStickerTextActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStickerTextActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStickerTextActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStickerTextActor, 1574511650);
	template<> UNREALCV_API UClass* StaticClass<AStickerTextActor>()
	{
		return AStickerTextActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStickerTextActor(Z_Construct_UClass_AStickerTextActor, &AStickerTextActor::StaticClass, TEXT("/Script/UnrealCV"), TEXT("AStickerTextActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStickerTextActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
