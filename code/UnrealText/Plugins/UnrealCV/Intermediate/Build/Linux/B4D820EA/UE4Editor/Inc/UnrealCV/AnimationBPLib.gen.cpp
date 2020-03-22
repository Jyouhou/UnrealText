// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCV/Public/BPFunctionLib/AnimationBPLib.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationBPLib() {}
// Cross Module References
	UNREALCV_API UClass* Z_Construct_UClass_UAnimationBPLib_NoRegister();
	UNREALCV_API UClass* Z_Construct_UClass_UAnimationBPLib();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_UnrealCV();
	UNREALCV_API UFunction* Z_Construct_UFunction_UAnimationBPLib_GetAllAnimationOfSkeleton();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	UNREALCV_API UFunction* Z_Construct_UFunction_UAnimationBPLib_GetAllAnimationSequenceOfSkeleton();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	UNREALCV_API UFunction* Z_Construct_UFunction_UAnimationBPLib_GetAnimationName();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void UAnimationBPLib::StaticRegisterNativesUAnimationBPLib()
	{
		UClass* Class = UAnimationBPLib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllAnimationOfSkeleton", &UAnimationBPLib::execGetAllAnimationOfSkeleton },
			{ "GetAllAnimationSequenceOfSkeleton", &UAnimationBPLib::execGetAllAnimationSequenceOfSkeleton },
			{ "GetAnimationName", &UAnimationBPLib::execGetAnimationName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimationBPLib_GetAllAnimationOfSkeleton_Statics
	{
		struct AnimationBPLib_eventGetAllAnimationOfSkeleton_Parms
		{
			USkeleton* Skeleton;
			TArray<UAnimationAsset*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationBPLib_GetAllAnimationOfSkeleton_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationBPLib_eventGetAllAnimationOfSkeleton_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBPLib_GetAllAnimationOfSkeleton_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBPLib_GetAllAnimationOfSkeleton_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationBPLib_eventGetAllAnimationOfSkeleton_Parms, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBPLib_GetAllAnimationOfSkeleton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBPLib_GetAllAnimationOfSkeleton_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBPLib_GetAllAnimationOfSkeleton_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBPLib_GetAllAnimationOfSkeleton_Statics::NewProp_Skeleton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBPLib_GetAllAnimationOfSkeleton_Statics::Function_MetaDataParams[] = {
		{ "Category", "unrealcv" },
		{ "ModuleRelativePath", "Public/BPFunctionLib/AnimationBPLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBPLib_GetAllAnimationOfSkeleton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBPLib, nullptr, "GetAllAnimationOfSkeleton", sizeof(AnimationBPLib_eventGetAllAnimationOfSkeleton_Parms), Z_Construct_UFunction_UAnimationBPLib_GetAllAnimationOfSkeleton_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAnimationBPLib_GetAllAnimationOfSkeleton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBPLib_GetAllAnimationOfSkeleton_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAnimationBPLib_GetAllAnimationOfSkeleton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBPLib_GetAllAnimationOfSkeleton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimationBPLib_GetAllAnimationOfSkeleton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBPLib_GetAllAnimationSequenceOfSkeleton_Statics
	{
		struct AnimationBPLib_eventGetAllAnimationSequenceOfSkeleton_Parms
		{
			USkeleton* Skeleton;
			TArray<UAnimSequence*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationBPLib_GetAllAnimationSequenceOfSkeleton_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationBPLib_eventGetAllAnimationSequenceOfSkeleton_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBPLib_GetAllAnimationSequenceOfSkeleton_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBPLib_GetAllAnimationSequenceOfSkeleton_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationBPLib_eventGetAllAnimationSequenceOfSkeleton_Parms, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBPLib_GetAllAnimationSequenceOfSkeleton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBPLib_GetAllAnimationSequenceOfSkeleton_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBPLib_GetAllAnimationSequenceOfSkeleton_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBPLib_GetAllAnimationSequenceOfSkeleton_Statics::NewProp_Skeleton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBPLib_GetAllAnimationSequenceOfSkeleton_Statics::Function_MetaDataParams[] = {
		{ "Category", "unrealcv" },
		{ "ModuleRelativePath", "Public/BPFunctionLib/AnimationBPLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBPLib_GetAllAnimationSequenceOfSkeleton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBPLib, nullptr, "GetAllAnimationSequenceOfSkeleton", sizeof(AnimationBPLib_eventGetAllAnimationSequenceOfSkeleton_Parms), Z_Construct_UFunction_UAnimationBPLib_GetAllAnimationSequenceOfSkeleton_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAnimationBPLib_GetAllAnimationSequenceOfSkeleton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBPLib_GetAllAnimationSequenceOfSkeleton_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAnimationBPLib_GetAllAnimationSequenceOfSkeleton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBPLib_GetAllAnimationSequenceOfSkeleton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimationBPLib_GetAllAnimationSequenceOfSkeleton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBPLib_GetAnimationName_Statics
	{
		struct AnimationBPLib_eventGetAnimationName_Parms
		{
			USkeletalMeshComponent* SkeletalMeshComponent;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnimationBPLib_GetAnimationName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationBPLib_eventGetAnimationName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBPLib_GetAnimationName_Statics::NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBPLib_GetAnimationName_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationBPLib_eventGetAnimationName_Parms, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBPLib_GetAnimationName_Statics::NewProp_SkeletalMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAnimationBPLib_GetAnimationName_Statics::NewProp_SkeletalMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBPLib_GetAnimationName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBPLib_GetAnimationName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBPLib_GetAnimationName_Statics::NewProp_SkeletalMeshComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBPLib_GetAnimationName_Statics::Function_MetaDataParams[] = {
		{ "Category", "unrealcv" },
		{ "ModuleRelativePath", "Public/BPFunctionLib/AnimationBPLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBPLib_GetAnimationName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBPLib, nullptr, "GetAnimationName", sizeof(AnimationBPLib_eventGetAnimationName_Parms), Z_Construct_UFunction_UAnimationBPLib_GetAnimationName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAnimationBPLib_GetAnimationName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBPLib_GetAnimationName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAnimationBPLib_GetAnimationName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBPLib_GetAnimationName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimationBPLib_GetAnimationName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAnimationBPLib_NoRegister()
	{
		return UAnimationBPLib::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationBPLib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationBPLib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCV,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimationBPLib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimationBPLib_GetAllAnimationOfSkeleton, "GetAllAnimationOfSkeleton" }, // 2488479518
		{ &Z_Construct_UFunction_UAnimationBPLib_GetAllAnimationSequenceOfSkeleton, "GetAllAnimationSequenceOfSkeleton" }, // 1135545638
		{ &Z_Construct_UFunction_UAnimationBPLib_GetAnimationName, "GetAnimationName" }, // 1690200091
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationBPLib_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BPFunctionLib/AnimationBPLib.h" },
		{ "ModuleRelativePath", "Public/BPFunctionLib/AnimationBPLib.h" },
		{ "ToolTip", "A static BP library to control the animation in UE4" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationBPLib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationBPLib>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimationBPLib_Statics::ClassParams = {
		&UAnimationBPLib::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimationBPLib_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimationBPLib_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationBPLib()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimationBPLib_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimationBPLib, 3570455432);
	template<> UNREALCV_API UClass* StaticClass<UAnimationBPLib>()
	{
		return UAnimationBPLib::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimationBPLib(Z_Construct_UClass_UAnimationBPLib, &UAnimationBPLib::StaticClass, TEXT("/Script/UnrealCV"), TEXT("UAnimationBPLib"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationBPLib);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
