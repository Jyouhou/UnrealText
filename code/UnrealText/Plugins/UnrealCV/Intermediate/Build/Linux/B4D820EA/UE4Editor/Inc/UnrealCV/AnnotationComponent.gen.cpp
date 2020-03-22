// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCV/Public/Component/AnnotationComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnnotationComponent() {}
// Cross Module References
	UNREALCV_API UClass* Z_Construct_UClass_UAnnotationComponent_NoRegister();
	UNREALCV_API UClass* Z_Construct_UClass_UAnnotationComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_UnrealCV();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
// End Cross Module References
	void UAnnotationComponent::StaticRegisterNativesUAnnotationComponent()
	{
	}
	UClass* Z_Construct_UClass_UAnnotationComponent_NoRegister()
	{
		return UAnnotationComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAnnotationComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnnotationMID_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnnotationMID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnnotationMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnnotationMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnnotationComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnnotationComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "HideCategories", "Mobility Trigger" },
		{ "IncludePath", "Component/AnnotationComponent.h" },
		{ "ModuleRelativePath", "Public/Component/AnnotationComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A proxy component class to render annotation color\nShould be attached to a MeshComponent to provide annotation color for AnnotationCamSensor" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnnotationComponent_Statics::NewProp_AnnotationMID_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/AnnotationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnnotationComponent_Statics::NewProp_AnnotationMID = { "AnnotationMID", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnnotationComponent, AnnotationMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnnotationComponent_Statics::NewProp_AnnotationMID_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnnotationComponent_Statics::NewProp_AnnotationMID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnnotationComponent_Statics::NewProp_AnnotationMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/AnnotationComponent.h" },
		{ "ToolTip", "FParentMeshInfo ParentMeshInfo;\nTSharedPtr<class FParentMeshInfo> ParentMeshInfo;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnnotationComponent_Statics::NewProp_AnnotationMaterial = { "AnnotationMaterial", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnnotationComponent, AnnotationMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnnotationComponent_Statics::NewProp_AnnotationMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnnotationComponent_Statics::NewProp_AnnotationMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnnotationComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnnotationComponent_Statics::NewProp_AnnotationMID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnnotationComponent_Statics::NewProp_AnnotationMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnnotationComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnnotationComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnnotationComponent_Statics::ClassParams = {
		&UAnnotationComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnnotationComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAnnotationComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAnnotationComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnnotationComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnnotationComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnnotationComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnnotationComponent, 1497050991);
	template<> UNREALCV_API UClass* StaticClass<UAnnotationComponent>()
	{
		return UAnnotationComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnnotationComponent(Z_Construct_UClass_UAnnotationComponent, &UAnnotationComponent::StaticClass, TEXT("/Script/UnrealCV"), TEXT("UAnnotationComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnnotationComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
