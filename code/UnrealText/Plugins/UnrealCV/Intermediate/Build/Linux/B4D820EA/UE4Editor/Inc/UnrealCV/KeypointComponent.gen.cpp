// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCV/Public/Component/KeypointComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeypointComponent() {}
// Cross Module References
	UNREALCV_API UClass* Z_Construct_UClass_UKeypointComponent_NoRegister();
	UNREALCV_API UClass* Z_Construct_UClass_UKeypointComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_UnrealCV();
	UNREALCV_API UFunction* Z_Construct_UFunction_UKeypointComponent_GetKeypoints();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UNREALCV_API UFunction* Z_Construct_UFunction_UKeypointComponent_GetKeypointsJson();
	UNREALCV_API UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectBP();
// End Cross Module References
	void UKeypointComponent::StaticRegisterNativesUKeypointComponent()
	{
		UClass* Class = UKeypointComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetKeypoints", &UKeypointComponent::execGetKeypoints },
			{ "GetKeypointsJson", &UKeypointComponent::execGetKeypointsJson },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKeypointComponent_GetKeypoints_Statics
	{
		struct KeypointComponent_eventGetKeypoints_Parms
		{
			TArray<FString> KeypointNames;
			TArray<FVector> Locations;
			bool bWorldSpace;
		};
		static void NewProp_bWorldSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWorldSpace;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Locations;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Locations_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KeypointNames;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_KeypointNames_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKeypointComponent_GetKeypoints_Statics::NewProp_bWorldSpace_SetBit(void* Obj)
	{
		((KeypointComponent_eventGetKeypoints_Parms*)Obj)->bWorldSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKeypointComponent_GetKeypoints_Statics::NewProp_bWorldSpace = { "bWorldSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KeypointComponent_eventGetKeypoints_Parms), &Z_Construct_UFunction_UKeypointComponent_GetKeypoints_Statics::NewProp_bWorldSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKeypointComponent_GetKeypoints_Statics::NewProp_Locations = { "Locations", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KeypointComponent_eventGetKeypoints_Parms, Locations), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKeypointComponent_GetKeypoints_Statics::NewProp_Locations_Inner = { "Locations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKeypointComponent_GetKeypoints_Statics::NewProp_KeypointNames = { "KeypointNames", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KeypointComponent_eventGetKeypoints_Parms, KeypointNames), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKeypointComponent_GetKeypoints_Statics::NewProp_KeypointNames_Inner = { "KeypointNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKeypointComponent_GetKeypoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeypointComponent_GetKeypoints_Statics::NewProp_bWorldSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeypointComponent_GetKeypoints_Statics::NewProp_Locations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeypointComponent_GetKeypoints_Statics::NewProp_Locations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeypointComponent_GetKeypoints_Statics::NewProp_KeypointNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeypointComponent_GetKeypoints_Statics::NewProp_KeypointNames_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKeypointComponent_GetKeypoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "unrealcv" },
		{ "CPP_Default_bWorldSpace", "false" },
		{ "ModuleRelativePath", "Public/Component/KeypointComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKeypointComponent_GetKeypoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKeypointComponent, nullptr, "GetKeypoints", sizeof(KeypointComponent_eventGetKeypoints_Parms), Z_Construct_UFunction_UKeypointComponent_GetKeypoints_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKeypointComponent_GetKeypoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKeypointComponent_GetKeypoints_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKeypointComponent_GetKeypoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKeypointComponent_GetKeypoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKeypointComponent_GetKeypoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKeypointComponent_GetKeypointsJson_Statics
	{
		struct KeypointComponent_eventGetKeypointsJson_Parms
		{
			TArray<FString> KeypointNames;
			TArray<FJsonObjectBP> LocationsBP;
			bool bWorldSpace;
		};
		static void NewProp_bWorldSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWorldSpace;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LocationsBP;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocationsBP_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KeypointNames;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_KeypointNames_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKeypointComponent_GetKeypointsJson_Statics::NewProp_bWorldSpace_SetBit(void* Obj)
	{
		((KeypointComponent_eventGetKeypointsJson_Parms*)Obj)->bWorldSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKeypointComponent_GetKeypointsJson_Statics::NewProp_bWorldSpace = { "bWorldSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KeypointComponent_eventGetKeypointsJson_Parms), &Z_Construct_UFunction_UKeypointComponent_GetKeypointsJson_Statics::NewProp_bWorldSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKeypointComponent_GetKeypointsJson_Statics::NewProp_LocationsBP = { "LocationsBP", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KeypointComponent_eventGetKeypointsJson_Parms, LocationsBP), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKeypointComponent_GetKeypointsJson_Statics::NewProp_LocationsBP_Inner = { "LocationsBP", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FJsonObjectBP, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKeypointComponent_GetKeypointsJson_Statics::NewProp_KeypointNames = { "KeypointNames", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KeypointComponent_eventGetKeypointsJson_Parms, KeypointNames), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKeypointComponent_GetKeypointsJson_Statics::NewProp_KeypointNames_Inner = { "KeypointNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKeypointComponent_GetKeypointsJson_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeypointComponent_GetKeypointsJson_Statics::NewProp_bWorldSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeypointComponent_GetKeypointsJson_Statics::NewProp_LocationsBP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeypointComponent_GetKeypointsJson_Statics::NewProp_LocationsBP_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeypointComponent_GetKeypointsJson_Statics::NewProp_KeypointNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeypointComponent_GetKeypointsJson_Statics::NewProp_KeypointNames_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKeypointComponent_GetKeypointsJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "unrealcv" },
		{ "CPP_Default_bWorldSpace", "false" },
		{ "ModuleRelativePath", "Public/Component/KeypointComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKeypointComponent_GetKeypointsJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKeypointComponent, nullptr, "GetKeypointsJson", sizeof(KeypointComponent_eventGetKeypointsJson_Parms), Z_Construct_UFunction_UKeypointComponent_GetKeypointsJson_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKeypointComponent_GetKeypointsJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKeypointComponent_GetKeypointsJson_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKeypointComponent_GetKeypointsJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKeypointComponent_GetKeypointsJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKeypointComponent_GetKeypointsJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKeypointComponent_NoRegister()
	{
		return UKeypointComponent::StaticClass();
	}
	struct Z_Construct_UClass_UKeypointComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawKeypointName_MetaData[];
#endif
		static void NewProp_bDrawKeypointName_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawKeypointName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMatchNearestVertex_MetaData[];
#endif
		static void NewProp_bMatchNearestVertex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMatchNearestVertex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisualizePointSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VisualizePointSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVisualize_MetaData[];
#endif
		static void NewProp_bVisualize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVisualize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonFilename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JsonFilename;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKeypointComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCV,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKeypointComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKeypointComponent_GetKeypoints, "GetKeypoints" }, // 2181495957
		{ &Z_Construct_UFunction_UKeypointComponent_GetKeypointsJson, "GetKeypointsJson" }, // 3329726410
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKeypointComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Component/KeypointComponent.h" },
		{ "ModuleRelativePath", "Public/Component/KeypointComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKeypointComponent_Statics::NewProp_bDrawKeypointName_MetaData[] = {
		{ "Category", "KeypointComponent" },
		{ "ModuleRelativePath", "Public/Component/KeypointComponent.h" },
	};
#endif
	void Z_Construct_UClass_UKeypointComponent_Statics::NewProp_bDrawKeypointName_SetBit(void* Obj)
	{
		((UKeypointComponent*)Obj)->bDrawKeypointName = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKeypointComponent_Statics::NewProp_bDrawKeypointName = { "bDrawKeypointName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UKeypointComponent), &Z_Construct_UClass_UKeypointComponent_Statics::NewProp_bDrawKeypointName_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKeypointComponent_Statics::NewProp_bDrawKeypointName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKeypointComponent_Statics::NewProp_bDrawKeypointName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKeypointComponent_Statics::NewProp_bMatchNearestVertex_MetaData[] = {
		{ "Category", "KeypointComponent" },
		{ "ModuleRelativePath", "Public/Component/KeypointComponent.h" },
	};
#endif
	void Z_Construct_UClass_UKeypointComponent_Statics::NewProp_bMatchNearestVertex_SetBit(void* Obj)
	{
		((UKeypointComponent*)Obj)->bMatchNearestVertex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKeypointComponent_Statics::NewProp_bMatchNearestVertex = { "bMatchNearestVertex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UKeypointComponent), &Z_Construct_UClass_UKeypointComponent_Statics::NewProp_bMatchNearestVertex_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKeypointComponent_Statics::NewProp_bMatchNearestVertex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKeypointComponent_Statics::NewProp_bMatchNearestVertex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKeypointComponent_Statics::NewProp_VisualizePointSize_MetaData[] = {
		{ "Category", "KeypointComponent" },
		{ "ModuleRelativePath", "Public/Component/KeypointComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKeypointComponent_Statics::NewProp_VisualizePointSize = { "VisualizePointSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKeypointComponent, VisualizePointSize), METADATA_PARAMS(Z_Construct_UClass_UKeypointComponent_Statics::NewProp_VisualizePointSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKeypointComponent_Statics::NewProp_VisualizePointSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKeypointComponent_Statics::NewProp_bVisualize_MetaData[] = {
		{ "Category", "KeypointComponent" },
		{ "ModuleRelativePath", "Public/Component/KeypointComponent.h" },
	};
#endif
	void Z_Construct_UClass_UKeypointComponent_Statics::NewProp_bVisualize_SetBit(void* Obj)
	{
		((UKeypointComponent*)Obj)->bVisualize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKeypointComponent_Statics::NewProp_bVisualize = { "bVisualize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UKeypointComponent), &Z_Construct_UClass_UKeypointComponent_Statics::NewProp_bVisualize_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKeypointComponent_Statics::NewProp_bVisualize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKeypointComponent_Statics::NewProp_bVisualize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKeypointComponent_Statics::NewProp_JsonFilename_MetaData[] = {
		{ "Category", "KeypointComponent" },
		{ "ModuleRelativePath", "Public/Component/KeypointComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UKeypointComponent_Statics::NewProp_JsonFilename = { "JsonFilename", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKeypointComponent, JsonFilename), METADATA_PARAMS(Z_Construct_UClass_UKeypointComponent_Statics::NewProp_JsonFilename_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKeypointComponent_Statics::NewProp_JsonFilename_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKeypointComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKeypointComponent_Statics::NewProp_bDrawKeypointName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKeypointComponent_Statics::NewProp_bMatchNearestVertex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKeypointComponent_Statics::NewProp_VisualizePointSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKeypointComponent_Statics::NewProp_bVisualize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKeypointComponent_Statics::NewProp_JsonFilename,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKeypointComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKeypointComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKeypointComponent_Statics::ClassParams = {
		&UKeypointComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UKeypointComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UKeypointComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UKeypointComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UKeypointComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKeypointComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKeypointComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKeypointComponent, 3246404649);
	template<> UNREALCV_API UClass* StaticClass<UKeypointComponent>()
	{
		return UKeypointComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKeypointComponent(Z_Construct_UClass_UKeypointComponent, &UKeypointComponent::StaticClass, TEXT("/Script/UnrealCV"), TEXT("UKeypointComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKeypointComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
