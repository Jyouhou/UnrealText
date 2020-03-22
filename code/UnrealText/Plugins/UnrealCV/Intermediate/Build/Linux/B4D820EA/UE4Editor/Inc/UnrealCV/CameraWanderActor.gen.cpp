// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCV/Public/UnrealText/CameraWanderActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraWanderActor() {}
// Cross Module References
	UNREALCV_API UClass* Z_Construct_UClass_ACameraWanderActor_NoRegister();
	UNREALCV_API UClass* Z_Construct_UClass_ACameraWanderActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealCV();
// End Cross Module References
	void ACameraWanderActor::StaticRegisterNativesACameraWanderActor()
	{
	}
	UClass* Z_Construct_UClass_ACameraWanderActor_NoRegister()
	{
		return ACameraWanderActor::StaticClass();
	}
	struct Z_Construct_UClass_ACameraWanderActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsUseNormal_MetaData[];
#endif
		static void NewProp_bIsUseNormal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsUseNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinStepRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinStepRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxStepRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxStepRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_roll_abs_range_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_roll_abs_range;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_yaw_sigma_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_yaw_sigma;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pitch_sigma_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_pitch_sigma;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindowsWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WindowsWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindowsHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WindowsHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinStepSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinStepSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxStepSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxStepSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACameraWanderActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraWanderActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UnrealText/CameraWanderActor.h" },
		{ "ModuleRelativePath", "Public/UnrealText/CameraWanderActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_bIsUseNormal_MetaData[] = {
		{ "Category", "CameraWanderActor" },
		{ "ModuleRelativePath", "Public/UnrealText/CameraWanderActor.h" },
	};
#endif
	void Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_bIsUseNormal_SetBit(void* Obj)
	{
		((ACameraWanderActor*)Obj)->bIsUseNormal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_bIsUseNormal = { "bIsUseNormal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACameraWanderActor), &Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_bIsUseNormal_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_bIsUseNormal_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_bIsUseNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_MinStepRatio_MetaData[] = {
		{ "Category", "CameraWanderActor" },
		{ "ModuleRelativePath", "Public/UnrealText/CameraWanderActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_MinStepRatio = { "MinStepRatio", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraWanderActor, MinStepRatio), METADATA_PARAMS(Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_MinStepRatio_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_MinStepRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_MaxStepRatio_MetaData[] = {
		{ "Category", "CameraWanderActor" },
		{ "ModuleRelativePath", "Public/UnrealText/CameraWanderActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_MaxStepRatio = { "MaxStepRatio", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraWanderActor, MaxStepRatio), METADATA_PARAMS(Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_MaxStepRatio_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_MaxStepRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_roll_abs_range_MetaData[] = {
		{ "Category", "CameraWanderActor" },
		{ "ModuleRelativePath", "Public/UnrealText/CameraWanderActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_roll_abs_range = { "roll_abs_range", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraWanderActor, roll_abs_range), METADATA_PARAMS(Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_roll_abs_range_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_roll_abs_range_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_yaw_sigma_MetaData[] = {
		{ "Category", "CameraWanderActor" },
		{ "ModuleRelativePath", "Public/UnrealText/CameraWanderActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_yaw_sigma = { "yaw_sigma", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraWanderActor, yaw_sigma), METADATA_PARAMS(Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_yaw_sigma_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_yaw_sigma_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_pitch_sigma_MetaData[] = {
		{ "Category", "CameraWanderActor" },
		{ "ModuleRelativePath", "Public/UnrealText/CameraWanderActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_pitch_sigma = { "pitch_sigma", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraWanderActor, pitch_sigma), METADATA_PARAMS(Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_pitch_sigma_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_pitch_sigma_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_WindowsWidth_MetaData[] = {
		{ "Category", "CameraWanderActor" },
		{ "ModuleRelativePath", "Public/UnrealText/CameraWanderActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_WindowsWidth = { "WindowsWidth", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraWanderActor, WindowsWidth), METADATA_PARAMS(Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_WindowsWidth_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_WindowsWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_WindowsHeight_MetaData[] = {
		{ "Category", "CameraWanderActor" },
		{ "ModuleRelativePath", "Public/UnrealText/CameraWanderActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_WindowsHeight = { "WindowsHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraWanderActor, WindowsHeight), METADATA_PARAMS(Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_WindowsHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_WindowsHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_MinStepSize_MetaData[] = {
		{ "Category", "CameraWanderActor" },
		{ "ModuleRelativePath", "Public/UnrealText/CameraWanderActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_MinStepSize = { "MinStepSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraWanderActor, MinStepSize), METADATA_PARAMS(Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_MinStepSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_MinStepSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_MaxStepSize_MetaData[] = {
		{ "Category", "CameraWanderActor" },
		{ "ModuleRelativePath", "Public/UnrealText/CameraWanderActor.h" },
		{ "ToolTip", "Hyper parameters" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_MaxStepSize = { "MaxStepSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraWanderActor, MaxStepSize), METADATA_PARAMS(Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_MaxStepSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_MaxStepSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACameraWanderActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_bIsUseNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_MinStepRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_MaxStepRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_roll_abs_range,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_yaw_sigma,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_pitch_sigma,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_WindowsWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_WindowsHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_MinStepSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraWanderActor_Statics::NewProp_MaxStepSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACameraWanderActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACameraWanderActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACameraWanderActor_Statics::ClassParams = {
		&ACameraWanderActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACameraWanderActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ACameraWanderActor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ACameraWanderActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACameraWanderActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACameraWanderActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACameraWanderActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACameraWanderActor, 522483863);
	template<> UNREALCV_API UClass* StaticClass<ACameraWanderActor>()
	{
		return ACameraWanderActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACameraWanderActor(Z_Construct_UClass_ACameraWanderActor, &ACameraWanderActor::StaticClass, TEXT("/Script/UnrealCV"), TEXT("ACameraWanderActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraWanderActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
