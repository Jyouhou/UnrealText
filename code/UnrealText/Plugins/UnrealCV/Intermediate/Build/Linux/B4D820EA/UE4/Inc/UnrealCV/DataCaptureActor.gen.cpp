// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCV/Public/Actor/DataCaptureActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataCaptureActor() {}
// Cross Module References
	UNREALCV_API UEnum* Z_Construct_UEnum_UnrealCV_EImageId();
	UPackage* Z_Construct_UPackage__Script_UnrealCV();
	UNREALCV_API UEnum* Z_Construct_UEnum_UnrealCV_EFolderStructure();
	UNREALCV_API UClass* Z_Construct_UClass_ADataCaptureActor_NoRegister();
	UNREALCV_API UClass* Z_Construct_UClass_ADataCaptureActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	UNREALCV_API UClass* Z_Construct_UClass_ACamSensorActor_NoRegister();
	UNREALCV_API UClass* Z_Construct_UClass_APuppeteer_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
// End Cross Module References
	static UEnum* EImageId_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealCV_EImageId, Z_Construct_UPackage__Script_UnrealCV(), TEXT("EImageId"));
		}
		return Singleton;
	}
	template<> UNREALCV_API UEnum* StaticEnum<EImageId>()
	{
		return EImageId_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EImageId(EImageId_StaticEnum, TEXT("/Script/UnrealCV"), TEXT("EImageId"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealCV_EImageId_Hash() { return 248674511U; }
	UEnum* Z_Construct_UEnum_UnrealCV_EImageId()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealCV();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EImageId"), 0, Get_Z_Construct_UEnum_UnrealCV_EImageId_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EImageId::GameFrameId", (int64)EImageId::GameFrameId },
				{ "EImageId::RecordedFrameId", (int64)EImageId::RecordedFrameId },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Actor/DataCaptureActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealCV,
				nullptr,
				"EImageId",
				"EImageId",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EFolderStructure_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealCV_EFolderStructure, Z_Construct_UPackage__Script_UnrealCV(), TEXT("EFolderStructure"));
		}
		return Singleton;
	}
	template<> UNREALCV_API UEnum* StaticEnum<EFolderStructure>()
	{
		return EFolderStructure_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFolderStructure(EFolderStructure_StaticEnum, TEXT("/Script/UnrealCV"), TEXT("EFolderStructure"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealCV_EFolderStructure_Hash() { return 949069453U; }
	UEnum* Z_Construct_UEnum_UnrealCV_EFolderStructure()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealCV();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFolderStructure"), 0, Get_Z_Construct_UEnum_UnrealCV_EFolderStructure_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFolderStructure::Flat", (int64)EFolderStructure::Flat },
				{ "EFolderStructure::Tree", (int64)EFolderStructure::Tree },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Actor/DataCaptureActor.h" },
				{ "Tree.ToolTip", "Put all files in the root folder" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealCV,
				nullptr,
				"EFolderStructure",
				"EFolderStructure",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void ADataCaptureActor::StaticRegisterNativesADataCaptureActor()
	{
	}
	UClass* Z_Construct_UClass_ADataCaptureActor_NoRegister()
	{
		return ADataCaptureActor::StaticClass();
	}
	struct Z_Construct_UClass_ADataCaptureActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Billboard_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Billboard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCaptureVertex_MetaData[];
#endif
		static void NewProp_bCaptureVertex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCaptureVertex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCaptureJoint_MetaData[];
#endif
		static void NewProp_bCaptureJoint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCaptureJoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCapturePuppeteer_MetaData[];
#endif
		static void NewProp_bCapturePuppeteer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCapturePuppeteer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCaptureAnnotationColor_MetaData[];
#endif
		static void NewProp_bCaptureAnnotationColor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCaptureAnnotationColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCaptureSceneInfo_MetaData[];
#endif
		static void NewProp_bCaptureSceneInfo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCaptureSceneInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCaptureSceneSummary_MetaData[];
#endif
		static void NewProp_bCaptureSceneSummary_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCaptureSceneSummary;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnlyFirstFrame_MetaData[];
#endif
		static void NewProp_bOnlyFirstFrame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyFirstFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCaptureNormal_MetaData[];
#endif
		static void NewProp_bCaptureNormal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCaptureNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCaptureDepth_MetaData[];
#endif
		static void NewProp_bCaptureDepth_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCaptureDepth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCaptureSegMask_MetaData[];
#endif
		static void NewProp_bCaptureSegMask_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCaptureSegMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLitSlow_MetaData[];
#endif
		static void NewProp_bLitSlow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLitSlow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCaptureImage_MetaData[];
#endif
		static void NewProp_bCaptureImage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCaptureImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sensors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Sensors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sensors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bListSensors_MetaData[];
#endif
		static void NewProp_bListSensors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bListSensors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageIdType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ImageIdType;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ImageIdType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeDilation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeDilation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SimDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CaptureInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Puppeteers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Puppeteers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Puppeteers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bListPuppeteers_MetaData[];
#endif
		static void NewProp_bListPuppeteers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bListPuppeteers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FolderStructure_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FolderStructure;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_FolderStructure_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAddTimestamp_MetaData[];
#endif
		static void NewProp_bAddTimestamp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAddTimestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataFolder_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DataFolder;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADataCaptureActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADataCaptureActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/DataCaptureActor.h" },
		{ "ModuleRelativePath", "Public/Actor/DataCaptureActor.h" },
		{ "ToolTip", "An actor to capture data from the scene.\n\\image html https://i.imgur.com/MdOxOZ3.png" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_Billboard_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/DataCaptureActor.h" },
		{ "ToolTip", "UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = \"true\"))" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_Billboard = { "Billboard", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADataCaptureActor, Billboard), Z_Construct_UClass_UMaterialBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_Billboard_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_Billboard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/DataCaptureActor.h" },
		{ "ToolTip", "UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = \"true\"))" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADataCaptureActor, MeshComponent), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_MeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureVertex_MetaData[] = {
		{ "Category", "DataCapture| Vertex Setting" },
		{ "DisplayName", "Capture 3D Vertex" },
		{ "ModuleRelativePath", "Public/Actor/DataCaptureActor.h" },
	};
#endif
	void Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureVertex_SetBit(void* Obj)
	{
		((ADataCaptureActor*)Obj)->bCaptureVertex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureVertex = { "bCaptureVertex", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADataCaptureActor), &Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureVertex_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureVertex_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureVertex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureJoint_MetaData[] = {
		{ "Category", "DataCapture| Joint Setting" },
		{ "DisplayName", "Capture 3D Joint" },
		{ "ModuleRelativePath", "Public/Actor/DataCaptureActor.h" },
	};
#endif
	void Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureJoint_SetBit(void* Obj)
	{
		((ADataCaptureActor*)Obj)->bCaptureJoint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureJoint = { "bCaptureJoint", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADataCaptureActor), &Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureJoint_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureJoint_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureJoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCapturePuppeteer_MetaData[] = {
		{ "Category", "DataCapture| Scene Setting" },
		{ "ModuleRelativePath", "Public/Actor/DataCaptureActor.h" },
	};
#endif
	void Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCapturePuppeteer_SetBit(void* Obj)
	{
		((ADataCaptureActor*)Obj)->bCapturePuppeteer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCapturePuppeteer = { "bCapturePuppeteer", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADataCaptureActor), &Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCapturePuppeteer_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCapturePuppeteer_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCapturePuppeteer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureAnnotationColor_MetaData[] = {
		{ "Category", "DataCapture| Scene Setting" },
		{ "ModuleRelativePath", "Public/Actor/DataCaptureActor.h" },
	};
#endif
	void Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureAnnotationColor_SetBit(void* Obj)
	{
		((ADataCaptureActor*)Obj)->bCaptureAnnotationColor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureAnnotationColor = { "bCaptureAnnotationColor", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADataCaptureActor), &Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureAnnotationColor_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureAnnotationColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureAnnotationColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureSceneInfo_MetaData[] = {
		{ "Category", "DataCapture| Scene Setting" },
		{ "ModuleRelativePath", "Public/Actor/DataCaptureActor.h" },
	};
#endif
	void Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureSceneInfo_SetBit(void* Obj)
	{
		((ADataCaptureActor*)Obj)->bCaptureSceneInfo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureSceneInfo = { "bCaptureSceneInfo", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADataCaptureActor), &Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureSceneInfo_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureSceneInfo_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureSceneInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureSceneSummary_MetaData[] = {
		{ "Category", "DataCapture| Scene Setting" },
		{ "ModuleRelativePath", "Public/Actor/DataCaptureActor.h" },
	};
#endif
	void Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureSceneSummary_SetBit(void* Obj)
	{
		((ADataCaptureActor*)Obj)->bCaptureSceneSummary = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureSceneSummary = { "bCaptureSceneSummary", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADataCaptureActor), &Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureSceneSummary_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureSceneSummary_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureSceneSummary_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bOnlyFirstFrame_MetaData[] = {
		{ "Category", "DataCapture| Scene Setting" },
		{ "ModuleRelativePath", "Public/Actor/DataCaptureActor.h" },
		{ "ToolTip", "Combine information into a single json file" },
	};
#endif
	void Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bOnlyFirstFrame_SetBit(void* Obj)
	{
		((ADataCaptureActor*)Obj)->bOnlyFirstFrame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bOnlyFirstFrame = { "bOnlyFirstFrame", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADataCaptureActor), &Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bOnlyFirstFrame_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bOnlyFirstFrame_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bOnlyFirstFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureNormal_MetaData[] = {
		{ "Category", "DataCapture| Camera Setting" },
		{ "ModuleRelativePath", "Public/Actor/DataCaptureActor.h" },
	};
#endif
	void Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureNormal_SetBit(void* Obj)
	{
		((ADataCaptureActor*)Obj)->bCaptureNormal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureNormal = { "bCaptureNormal", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADataCaptureActor), &Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureNormal_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureNormal_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureDepth_MetaData[] = {
		{ "Category", "DataCapture| Camera Setting" },
		{ "ModuleRelativePath", "Public/Actor/DataCaptureActor.h" },
	};
#endif
	void Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureDepth_SetBit(void* Obj)
	{
		((ADataCaptureActor*)Obj)->bCaptureDepth = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureDepth = { "bCaptureDepth", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADataCaptureActor), &Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureDepth_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureDepth_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureDepth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureSegMask_MetaData[] = {
		{ "Category", "DataCapture| Camera Setting" },
		{ "ModuleRelativePath", "Public/Actor/DataCaptureActor.h" },
	};
#endif
	void Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureSegMask_SetBit(void* Obj)
	{
		((ADataCaptureActor*)Obj)->bCaptureSegMask = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureSegMask = { "bCaptureSegMask", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADataCaptureActor), &Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureSegMask_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureSegMask_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureSegMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bLitSlow_MetaData[] = {
		{ "Category", "DataCapture| Camera Setting" },
		{ "ModuleRelativePath", "Public/Actor/DataCaptureActor.h" },
	};
#endif
	void Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bLitSlow_SetBit(void* Obj)
	{
		((ADataCaptureActor*)Obj)->bLitSlow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bLitSlow = { "bLitSlow", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADataCaptureActor), &Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bLitSlow_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bLitSlow_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bLitSlow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureImage_MetaData[] = {
		{ "Category", "DataCapture| Camera Setting" },
		{ "ModuleRelativePath", "Public/Actor/DataCaptureActor.h" },
	};
#endif
	void Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureImage_SetBit(void* Obj)
	{
		((ADataCaptureActor*)Obj)->bCaptureImage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureImage = { "bCaptureImage", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADataCaptureActor), &Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureImage_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureImage_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_Sensors_MetaData[] = {
		{ "Category", "DataCapture| Camera Setting" },
		{ "ModuleRelativePath", "Public/Actor/DataCaptureActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_Sensors = { "Sensors", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADataCaptureActor, Sensors), METADATA_PARAMS(Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_Sensors_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_Sensors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_Sensors_Inner = { "Sensors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACamSensorActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bListSensors_MetaData[] = {
		{ "Category", "DataCapture| Camera Setting" },
		{ "ModuleRelativePath", "Public/Actor/DataCaptureActor.h" },
		{ "ToolTip", "A button to list all sensors in the map" },
	};
#endif
	void Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bListSensors_SetBit(void* Obj)
	{
		((ADataCaptureActor*)Obj)->bListSensors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bListSensors = { "bListSensors", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADataCaptureActor), &Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bListSensors_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bListSensors_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bListSensors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_ImageIdType_MetaData[] = {
		{ "Category", "DataCapture" },
		{ "ModuleRelativePath", "Public/Actor/DataCaptureActor.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_ImageIdType = { "ImageIdType", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADataCaptureActor, ImageIdType), Z_Construct_UEnum_UnrealCV_EImageId, METADATA_PARAMS(Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_ImageIdType_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_ImageIdType_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_ImageIdType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_TimeDilation_MetaData[] = {
		{ "Category", "DataCapture" },
		{ "ModuleRelativePath", "Public/Actor/DataCaptureActor.h" },
		{ "ToolTip", "Reduce the simulation speed to a percentage" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_TimeDilation = { "TimeDilation", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADataCaptureActor, TimeDilation), METADATA_PARAMS(Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_TimeDilation_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_TimeDilation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_SimDuration_MetaData[] = {
		{ "Category", "DataCapture" },
		{ "ModuleRelativePath", "Public/Actor/DataCaptureActor.h" },
		{ "ToolTip", "The duration of simulation, stop after this period of time" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_SimDuration = { "SimDuration", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADataCaptureActor, SimDuration), METADATA_PARAMS(Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_SimDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_SimDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_CaptureInterval_MetaData[] = {
		{ "Category", "DataCapture" },
		{ "ModuleRelativePath", "Public/Actor/DataCaptureActor.h" },
		{ "ToolTip", "How frequent to capture data to the disk, 0 means capture every frame, negative value means no automatic capture\nNote: this is the real world time, not the game world time which can be dilated." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_CaptureInterval = { "CaptureInterval", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADataCaptureActor, CaptureInterval), METADATA_PARAMS(Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_CaptureInterval_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_CaptureInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_Puppeteers_MetaData[] = {
		{ "Category", "DataCapture" },
		{ "ModuleRelativePath", "Public/Actor/DataCaptureActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_Puppeteers = { "Puppeteers", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADataCaptureActor, Puppeteers), METADATA_PARAMS(Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_Puppeteers_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_Puppeteers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_Puppeteers_Inner = { "Puppeteers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APuppeteer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bListPuppeteers_MetaData[] = {
		{ "Category", "DataCapture" },
		{ "ModuleRelativePath", "Public/Actor/DataCaptureActor.h" },
	};
#endif
	void Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bListPuppeteers_SetBit(void* Obj)
	{
		((ADataCaptureActor*)Obj)->bListPuppeteers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bListPuppeteers = { "bListPuppeteers", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADataCaptureActor), &Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bListPuppeteers_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bListPuppeteers_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bListPuppeteers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_FolderStructure_MetaData[] = {
		{ "Category", "DataCapture" },
		{ "ModuleRelativePath", "Public/Actor/DataCaptureActor.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_FolderStructure = { "FolderStructure", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADataCaptureActor, FolderStructure), Z_Construct_UEnum_UnrealCV_EFolderStructure, METADATA_PARAMS(Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_FolderStructure_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_FolderStructure_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_FolderStructure_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bAddTimestamp_MetaData[] = {
		{ "Category", "DataCapture" },
		{ "ModuleRelativePath", "Public/Actor/DataCaptureActor.h" },
		{ "ToolTip", "Do not support resume, merge two generated batch later if needed" },
	};
#endif
	void Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bAddTimestamp_SetBit(void* Obj)
	{
		((ADataCaptureActor*)Obj)->bAddTimestamp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bAddTimestamp = { "bAddTimestamp", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADataCaptureActor), &Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bAddTimestamp_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bAddTimestamp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bAddTimestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_DataFolder_MetaData[] = {
		{ "Category", "DataCapture" },
		{ "ModuleRelativePath", "Public/Actor/DataCaptureActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_DataFolder = { "DataFolder", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADataCaptureActor, DataFolder), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_DataFolder_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_DataFolder_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADataCaptureActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_Billboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_MeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureVertex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureJoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCapturePuppeteer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureAnnotationColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureSceneInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureSceneSummary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bOnlyFirstFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureDepth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureSegMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bLitSlow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bCaptureImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_Sensors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_Sensors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bListSensors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_ImageIdType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_ImageIdType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_TimeDilation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_SimDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_CaptureInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_Puppeteers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_Puppeteers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bListPuppeteers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_FolderStructure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_FolderStructure_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_bAddTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataCaptureActor_Statics::NewProp_DataFolder,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADataCaptureActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADataCaptureActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADataCaptureActor_Statics::ClassParams = {
		&ADataCaptureActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADataCaptureActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ADataCaptureActor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ADataCaptureActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADataCaptureActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADataCaptureActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADataCaptureActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADataCaptureActor, 1913378825);
	template<> UNREALCV_API UClass* StaticClass<ADataCaptureActor>()
	{
		return ADataCaptureActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADataCaptureActor(Z_Construct_UClass_ADataCaptureActor, &ADataCaptureActor::StaticClass, TEXT("/Script/UnrealCV"), TEXT("ADataCaptureActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADataCaptureActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
