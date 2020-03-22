// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCV/Public/Actor/StereoCameraActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStereoCameraActor() {}
// Cross Module References
	UNREALCV_API UClass* Z_Construct_UClass_AStereoCameraActor_NoRegister();
	UNREALCV_API UClass* Z_Construct_UClass_AStereoCameraActor();
	UNREALCV_API UClass* Z_Construct_UClass_ACamSensorActor();
	UPackage* Z_Construct_UPackage__Script_UnrealCV();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	UNREALCV_API UClass* Z_Construct_UClass_UFusionCamSensor_NoRegister();
// End Cross Module References
	void AStereoCameraActor::StaticRegisterNativesAStereoCameraActor()
	{
	}
	UClass* Z_Construct_UClass_AStereoCameraActor_NoRegister()
	{
		return AStereoCameraActor::StaticClass();
	}
	struct Z_Construct_UClass_AStereoCameraActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightSensor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightSensor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftSensor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftSensor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaselineDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaselineDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStereoCameraActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACamSensorActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStereoCameraActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/StereoCameraActor.h" },
		{ "ModuleRelativePath", "Public/Actor/StereoCameraActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStereoCameraActor_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "StereoCameraActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/StereoCameraActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStereoCameraActor_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStereoCameraActor, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStereoCameraActor_Statics::NewProp_SceneComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStereoCameraActor_Statics::NewProp_SceneComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStereoCameraActor_Statics::NewProp_RightSensor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "StereoCameraActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/StereoCameraActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStereoCameraActor_Statics::NewProp_RightSensor = { "RightSensor", nullptr, (EPropertyFlags)0x00420000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStereoCameraActor, RightSensor), Z_Construct_UClass_UFusionCamSensor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStereoCameraActor_Statics::NewProp_RightSensor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStereoCameraActor_Statics::NewProp_RightSensor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStereoCameraActor_Statics::NewProp_LeftSensor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "StereoCameraActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/StereoCameraActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStereoCameraActor_Statics::NewProp_LeftSensor = { "LeftSensor", nullptr, (EPropertyFlags)0x00420000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStereoCameraActor, LeftSensor), Z_Construct_UClass_UFusionCamSensor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStereoCameraActor_Statics::NewProp_LeftSensor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStereoCameraActor_Statics::NewProp_LeftSensor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStereoCameraActor_Statics::NewProp_BaselineDistance_MetaData[] = {
		{ "Category", "StereoCameraActor" },
		{ "ModuleRelativePath", "Public/Actor/StereoCameraActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStereoCameraActor_Statics::NewProp_BaselineDistance = { "BaselineDistance", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStereoCameraActor, BaselineDistance), METADATA_PARAMS(Z_Construct_UClass_AStereoCameraActor_Statics::NewProp_BaselineDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStereoCameraActor_Statics::NewProp_BaselineDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStereoCameraActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStereoCameraActor_Statics::NewProp_SceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStereoCameraActor_Statics::NewProp_RightSensor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStereoCameraActor_Statics::NewProp_LeftSensor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStereoCameraActor_Statics::NewProp_BaselineDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStereoCameraActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStereoCameraActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStereoCameraActor_Statics::ClassParams = {
		&AStereoCameraActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AStereoCameraActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AStereoCameraActor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AStereoCameraActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AStereoCameraActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStereoCameraActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStereoCameraActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStereoCameraActor, 2438400694);
	template<> UNREALCV_API UClass* StaticClass<AStereoCameraActor>()
	{
		return AStereoCameraActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStereoCameraActor(Z_Construct_UClass_AStereoCameraActor, &AStereoCameraActor::StaticClass, TEXT("/Script/UnrealCV"), TEXT("AStereoCameraActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStereoCameraActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
