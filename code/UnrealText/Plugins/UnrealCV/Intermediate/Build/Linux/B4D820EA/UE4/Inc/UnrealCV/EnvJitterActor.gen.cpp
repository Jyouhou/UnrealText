// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCV/Public/UnrealText/EnvJitterActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvJitterActor() {}
// Cross Module References
	UNREALCV_API UClass* Z_Construct_UClass_AEnvJitterActor_NoRegister();
	UNREALCV_API UClass* Z_Construct_UClass_AEnvJitterActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealCV();
// End Cross Module References
	void AEnvJitterActor::StaticRegisterNativesAEnvJitterActor()
	{
	}
	UClass* Z_Construct_UClass_AEnvJitterActor_NoRegister()
	{
		return AEnvJitterActor::StaticClass();
	}
	struct Z_Construct_UClass_AEnvJitterActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_max_fog_opacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_max_fog_opacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_max_fog_density_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_max_fog_density;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Light_dir_point_mul_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Light_dir_point_mul;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Light_color_power_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Light_color_power;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Light_row_pitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Light_row_pitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Light_row_yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Light_row_yaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Light_int_ub_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Light_int_ub;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnvJitterActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnvJitterActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UnrealText/EnvJitterActor.h" },
		{ "ModuleRelativePath", "Public/UnrealText/EnvJitterActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnvJitterActor_Statics::NewProp_max_fog_opacity_MetaData[] = {
		{ "Category", "EnvJitterActor" },
		{ "ModuleRelativePath", "Public/UnrealText/EnvJitterActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnvJitterActor_Statics::NewProp_max_fog_opacity = { "max_fog_opacity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnvJitterActor, max_fog_opacity), METADATA_PARAMS(Z_Construct_UClass_AEnvJitterActor_Statics::NewProp_max_fog_opacity_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnvJitterActor_Statics::NewProp_max_fog_opacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnvJitterActor_Statics::NewProp_max_fog_density_MetaData[] = {
		{ "Category", "EnvJitterActor" },
		{ "ModuleRelativePath", "Public/UnrealText/EnvJitterActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnvJitterActor_Statics::NewProp_max_fog_density = { "max_fog_density", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnvJitterActor, max_fog_density), METADATA_PARAMS(Z_Construct_UClass_AEnvJitterActor_Statics::NewProp_max_fog_density_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnvJitterActor_Statics::NewProp_max_fog_density_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnvJitterActor_Statics::NewProp_Light_dir_point_mul_MetaData[] = {
		{ "Category", "EnvJitterActor" },
		{ "ModuleRelativePath", "Public/UnrealText/EnvJitterActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnvJitterActor_Statics::NewProp_Light_dir_point_mul = { "Light_dir_point_mul", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnvJitterActor, Light_dir_point_mul), METADATA_PARAMS(Z_Construct_UClass_AEnvJitterActor_Statics::NewProp_Light_dir_point_mul_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnvJitterActor_Statics::NewProp_Light_dir_point_mul_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnvJitterActor_Statics::NewProp_Light_color_power_MetaData[] = {
		{ "Category", "EnvJitterActor" },
		{ "ModuleRelativePath", "Public/UnrealText/EnvJitterActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnvJitterActor_Statics::NewProp_Light_color_power = { "Light_color_power", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnvJitterActor, Light_color_power), METADATA_PARAMS(Z_Construct_UClass_AEnvJitterActor_Statics::NewProp_Light_color_power_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnvJitterActor_Statics::NewProp_Light_color_power_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnvJitterActor_Statics::NewProp_Light_row_pitch_MetaData[] = {
		{ "Category", "EnvJitterActor" },
		{ "ModuleRelativePath", "Public/UnrealText/EnvJitterActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnvJitterActor_Statics::NewProp_Light_row_pitch = { "Light_row_pitch", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnvJitterActor, Light_row_pitch), METADATA_PARAMS(Z_Construct_UClass_AEnvJitterActor_Statics::NewProp_Light_row_pitch_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnvJitterActor_Statics::NewProp_Light_row_pitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnvJitterActor_Statics::NewProp_Light_row_yaw_MetaData[] = {
		{ "Category", "EnvJitterActor" },
		{ "ModuleRelativePath", "Public/UnrealText/EnvJitterActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnvJitterActor_Statics::NewProp_Light_row_yaw = { "Light_row_yaw", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnvJitterActor, Light_row_yaw), METADATA_PARAMS(Z_Construct_UClass_AEnvJitterActor_Statics::NewProp_Light_row_yaw_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnvJitterActor_Statics::NewProp_Light_row_yaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnvJitterActor_Statics::NewProp_Light_int_ub_MetaData[] = {
		{ "Category", "EnvJitterActor" },
		{ "ModuleRelativePath", "Public/UnrealText/EnvJitterActor.h" },
		{ "ToolTip", "light hyper-param" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnvJitterActor_Statics::NewProp_Light_int_ub = { "Light_int_ub", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnvJitterActor, Light_int_ub), METADATA_PARAMS(Z_Construct_UClass_AEnvJitterActor_Statics::NewProp_Light_int_ub_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnvJitterActor_Statics::NewProp_Light_int_ub_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnvJitterActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnvJitterActor_Statics::NewProp_max_fog_opacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnvJitterActor_Statics::NewProp_max_fog_density,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnvJitterActor_Statics::NewProp_Light_dir_point_mul,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnvJitterActor_Statics::NewProp_Light_color_power,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnvJitterActor_Statics::NewProp_Light_row_pitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnvJitterActor_Statics::NewProp_Light_row_yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnvJitterActor_Statics::NewProp_Light_int_ub,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnvJitterActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnvJitterActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnvJitterActor_Statics::ClassParams = {
		&AEnvJitterActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnvJitterActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AEnvJitterActor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AEnvJitterActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AEnvJitterActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnvJitterActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnvJitterActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnvJitterActor, 2684749213);
	template<> UNREALCV_API UClass* StaticClass<AEnvJitterActor>()
	{
		return AEnvJitterActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnvJitterActor(Z_Construct_UClass_AEnvJitterActor, &AEnvJitterActor::StaticClass, TEXT("/Script/UnrealCV"), TEXT("AEnvJitterActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnvJitterActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
