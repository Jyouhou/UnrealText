// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCV/Public/Actor/FusionCameraActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFusionCameraActor() {}
// Cross Module References
	UNREALCV_API UClass* Z_Construct_UClass_AFusionCameraActor_NoRegister();
	UNREALCV_API UClass* Z_Construct_UClass_AFusionCameraActor();
	UNREALCV_API UClass* Z_Construct_UClass_ACamSensorActor();
	UPackage* Z_Construct_UPackage__Script_UnrealCV();
	UNREALCV_API UClass* Z_Construct_UClass_UFusionCamSensor_NoRegister();
// End Cross Module References
	void AFusionCameraActor::StaticRegisterNativesAFusionCameraActor()
	{
	}
	UClass* Z_Construct_UClass_AFusionCameraActor_NoRegister()
	{
		return AFusionCameraActor::StaticClass();
	}
	struct Z_Construct_UClass_AFusionCameraActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FusionCamSensor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FusionCamSensor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFusionCameraActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACamSensorActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFusionCameraActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/FusionCameraActor.h" },
		{ "ModuleRelativePath", "Public/Actor/FusionCameraActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFusionCameraActor_Statics::NewProp_FusionCamSensor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AFusionCameraActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/FusionCameraActor.h" },
		{ "ToolTip", "Define it to be VisibleAnywhere not EditableAnywhere. This is enough for changing the component property" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFusionCameraActor_Statics::NewProp_FusionCamSensor = { "FusionCamSensor", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFusionCameraActor, FusionCamSensor), Z_Construct_UClass_UFusionCamSensor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFusionCameraActor_Statics::NewProp_FusionCamSensor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFusionCameraActor_Statics::NewProp_FusionCamSensor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFusionCameraActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFusionCameraActor_Statics::NewProp_FusionCamSensor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFusionCameraActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFusionCameraActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFusionCameraActor_Statics::ClassParams = {
		&AFusionCameraActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFusionCameraActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AFusionCameraActor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFusionCameraActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFusionCameraActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFusionCameraActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFusionCameraActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFusionCameraActor, 2474514972);
	template<> UNREALCV_API UClass* StaticClass<AFusionCameraActor>()
	{
		return AFusionCameraActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFusionCameraActor(Z_Construct_UClass_AFusionCameraActor, &AFusionCameraActor::StaticClass, TEXT("/Script/UnrealCV"), TEXT("AFusionCameraActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFusionCameraActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
