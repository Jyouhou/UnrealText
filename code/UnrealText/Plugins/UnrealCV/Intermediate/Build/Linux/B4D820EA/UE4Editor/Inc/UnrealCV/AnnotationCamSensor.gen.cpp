// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCV/Public/Sensor/CameraSensor/AnnotationCamSensor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnnotationCamSensor() {}
// Cross Module References
	UNREALCV_API UClass* Z_Construct_UClass_UAnnotationCamSensor_NoRegister();
	UNREALCV_API UClass* Z_Construct_UClass_UAnnotationCamSensor();
	UNREALCV_API UClass* Z_Construct_UClass_UBaseCameraSensor();
	UPackage* Z_Construct_UPackage__Script_UnrealCV();
// End Cross Module References
	void UAnnotationCamSensor::StaticRegisterNativesUAnnotationCamSensor()
	{
	}
	UClass* Z_Construct_UClass_UAnnotationCamSensor_NoRegister()
	{
		return UAnnotationCamSensor::StaticClass();
	}
	struct Z_Construct_UClass_UAnnotationCamSensor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnnotationCamSensor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseCameraSensor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnnotationCamSensor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "HideCategories", "Collision Object Physics SceneComponent abstract Collision Object Physics SceneComponent Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "Sensor/CameraSensor/AnnotationCamSensor.h" },
		{ "ModuleRelativePath", "Public/Sensor/CameraSensor/AnnotationCamSensor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Annotation sensor, utilize the UAnnnotationComponent" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnnotationCamSensor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnnotationCamSensor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnnotationCamSensor_Statics::ClassParams = {
		&UAnnotationCamSensor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAnnotationCamSensor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnnotationCamSensor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnnotationCamSensor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnnotationCamSensor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnnotationCamSensor, 2385195086);
	template<> UNREALCV_API UClass* StaticClass<UAnnotationCamSensor>()
	{
		return UAnnotationCamSensor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnnotationCamSensor(Z_Construct_UClass_UAnnotationCamSensor, &UAnnotationCamSensor::StaticClass, TEXT("/Script/UnrealCV"), TEXT("UAnnotationCamSensor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnnotationCamSensor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
