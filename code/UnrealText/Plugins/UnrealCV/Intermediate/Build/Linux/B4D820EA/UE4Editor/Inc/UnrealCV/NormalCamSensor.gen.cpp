// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCV/Public/Sensor/CameraSensor/NormalCamSensor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNormalCamSensor() {}
// Cross Module References
	UNREALCV_API UClass* Z_Construct_UClass_UNormalCamSensor_NoRegister();
	UNREALCV_API UClass* Z_Construct_UClass_UNormalCamSensor();
	UNREALCV_API UClass* Z_Construct_UClass_UBaseCameraSensor();
	UPackage* Z_Construct_UPackage__Script_UnrealCV();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
// End Cross Module References
	void UNormalCamSensor::StaticRegisterNativesUNormalCamSensor()
	{
	}
	UClass* Z_Construct_UClass_UNormalCamSensor_NoRegister()
	{
		return UNormalCamSensor::StaticClass();
	}
	struct Z_Construct_UClass_UNormalCamSensor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurfaceNormalPPMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SurfaceNormalPPMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNormalCamSensor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseCameraSensor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNormalCamSensor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Object Physics SceneComponent abstract Collision Object Physics SceneComponent Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "Sensor/CameraSensor/NormalCamSensor.h" },
		{ "ModuleRelativePath", "Public/Sensor/CameraSensor/NormalCamSensor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Surface normal sensor" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNormalCamSensor_Statics::NewProp_SurfaceNormalPPMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sensor/CameraSensor/NormalCamSensor.h" },
		{ "ToolTip", "Post process material to extract surface normal data" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNormalCamSensor_Statics::NewProp_SurfaceNormalPPMaterial = { "SurfaceNormalPPMaterial", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNormalCamSensor, SurfaceNormalPPMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNormalCamSensor_Statics::NewProp_SurfaceNormalPPMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNormalCamSensor_Statics::NewProp_SurfaceNormalPPMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNormalCamSensor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNormalCamSensor_Statics::NewProp_SurfaceNormalPPMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNormalCamSensor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNormalCamSensor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNormalCamSensor_Statics::ClassParams = {
		&UNormalCamSensor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNormalCamSensor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UNormalCamSensor_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNormalCamSensor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNormalCamSensor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNormalCamSensor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNormalCamSensor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNormalCamSensor, 4103884872);
	template<> UNREALCV_API UClass* StaticClass<UNormalCamSensor>()
	{
		return UNormalCamSensor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNormalCamSensor(Z_Construct_UClass_UNormalCamSensor, &UNormalCamSensor::StaticClass, TEXT("/Script/UnrealCV"), TEXT("UNormalCamSensor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNormalCamSensor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
