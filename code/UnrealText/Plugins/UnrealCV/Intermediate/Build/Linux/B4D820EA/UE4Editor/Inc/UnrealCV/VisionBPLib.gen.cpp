// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCV/Public/BPFunctionLib/VisionBPLib.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVisionBPLib() {}
// Cross Module References
	UNREALCV_API UEnum* Z_Construct_UEnum_UnrealCV_EFileFormat();
	UPackage* Z_Construct_UPackage__Script_UnrealCV();
	UNREALCV_API UClass* Z_Construct_UClass_UVisionBPLib_NoRegister();
	UNREALCV_API UClass* Z_Construct_UClass_UVisionBPLib();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UNREALCV_API UFunction* Z_Construct_UFunction_UVisionBPLib_AnnotateWorld();
	UNREALCV_API UFunction* Z_Construct_UFunction_UVisionBPLib_AppendData();
	UNREALCV_API UFunction* Z_Construct_UFunction_UVisionBPLib_CreateFile();
	UNREALCV_API UFunction* Z_Construct_UFunction_UVisionBPLib_FrameNumber();
	UNREALCV_API UFunction* Z_Construct_UFunction_UVisionBPLib_GetActorList();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UNREALCV_API UFunction* Z_Construct_UFunction_UVisionBPLib_GetAnnotationColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	UNREALCV_API UFunction* Z_Construct_UFunction_UVisionBPLib_GetBoneTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	UNREALCV_API UFunction* Z_Construct_UFunction_UVisionBPLib_GetBoneTransformJson();
	UNREALCV_API UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectBP();
	UNREALCV_API UFunction* Z_Construct_UFunction_UVisionBPLib_GetPlayerSensor();
	UNREALCV_API UClass* Z_Construct_UClass_UFusionCamSensor_NoRegister();
	UNREALCV_API UFunction* Z_Construct_UFunction_UVisionBPLib_GetVertexArray();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UNREALCV_API UFunction* Z_Construct_UFunction_UVisionBPLib_GetVertexArrayFromMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	UNREALCV_API UFunction* Z_Construct_UFunction_UVisionBPLib_SaveData();
	UNREALCV_API UFunction* Z_Construct_UFunction_UVisionBPLib_SaveNpy();
	UNREALCV_API UFunction* Z_Construct_UFunction_UVisionBPLib_SavePng();
	UNREALCV_API UFunction* Z_Construct_UFunction_UVisionBPLib_SendMessageBP();
	UNREALCV_API UFunction* Z_Construct_UFunction_UVisionBPLib_SkinnedMeshComponentGetVertexArray();
	ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
	UNREALCV_API UFunction* Z_Construct_UFunction_UVisionBPLib_StaticMeshComponentGetVertexArray();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UNREALCV_API UFunction* Z_Construct_UFunction_UVisionBPLib_UpdateInput();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	static UEnum* EFileFormat_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealCV_EFileFormat, Z_Construct_UPackage__Script_UnrealCV(), TEXT("EFileFormat"));
		}
		return Singleton;
	}
	template<> UNREALCV_API UEnum* StaticEnum<EFileFormat>()
	{
		return EFileFormat_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFileFormat(EFileFormat_StaticEnum, TEXT("/Script/UnrealCV"), TEXT("EFileFormat"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealCV_EFileFormat_Hash() { return 46876956U; }
	UEnum* Z_Construct_UEnum_UnrealCV_EFileFormat()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealCV();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFileFormat"), 0, Get_Z_Construct_UEnum_UnrealCV_EFileFormat_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFileFormat::Png", (int64)EFileFormat::Png },
				{ "EFileFormat::Npy", (int64)EFileFormat::Npy },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/BPFunctionLib/VisionBPLib.h" },
				{ "Npy.DisplayName", "Npy" },
				{ "Png.DisplayName", "Png" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealCV,
				nullptr,
				"EFileFormat",
				"EFileFormat",
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
	void UVisionBPLib::StaticRegisterNativesUVisionBPLib()
	{
		UClass* Class = UVisionBPLib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnnotateWorld", &UVisionBPLib::execAnnotateWorld },
			{ "AppendData", &UVisionBPLib::execAppendData },
			{ "CreateFile", &UVisionBPLib::execCreateFile },
			{ "FrameNumber", &UVisionBPLib::execFrameNumber },
			{ "GetActorList", &UVisionBPLib::execGetActorList },
			{ "GetAnnotationColor", &UVisionBPLib::execGetAnnotationColor },
			{ "GetBoneTransform", &UVisionBPLib::execGetBoneTransform },
			{ "GetBoneTransformJson", &UVisionBPLib::execGetBoneTransformJson },
			{ "GetPlayerSensor", &UVisionBPLib::execGetPlayerSensor },
			{ "GetVertexArray", &UVisionBPLib::execGetVertexArray },
			{ "GetVertexArrayFromMeshComponent", &UVisionBPLib::execGetVertexArrayFromMeshComponent },
			{ "SaveData", &UVisionBPLib::execSaveData },
			{ "SaveNpy", &UVisionBPLib::execSaveNpy },
			{ "SavePng", &UVisionBPLib::execSavePng },
			{ "SendMessageBP", &UVisionBPLib::execSendMessageBP },
			{ "SkinnedMeshComponentGetVertexArray", &UVisionBPLib::execSkinnedMeshComponentGetVertexArray },
			{ "StaticMeshComponentGetVertexArray", &UVisionBPLib::execStaticMeshComponentGetVertexArray },
			{ "UpdateInput", &UVisionBPLib::execUpdateInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVisionBPLib_AnnotateWorld_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisionBPLib_AnnotateWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "unrealcv" },
		{ "ModuleRelativePath", "Public/BPFunctionLib/VisionBPLib.h" },
		{ "ToolTip", "If there is manually crated objects,\nneed to manually call this function to annotate the world" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisionBPLib_AnnotateWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisionBPLib, nullptr, "AnnotateWorld", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVisionBPLib_AnnotateWorld_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_AnnotateWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVisionBPLib_AnnotateWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVisionBPLib_AnnotateWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVisionBPLib_AppendData_Statics
	{
		struct VisionBPLib_eventAppendData_Parms
		{
			FString Data;
			FString Filename;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVisionBPLib_AppendData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VisionBPLib_eventAppendData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVisionBPLib_AppendData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VisionBPLib_eventAppendData_Parms), &Z_Construct_UFunction_UVisionBPLib_AppendData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisionBPLib_AppendData_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVisionBPLib_AppendData_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisionBPLib_eventAppendData_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UVisionBPLib_AppendData_Statics::NewProp_Filename_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_AppendData_Statics::NewProp_Filename_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisionBPLib_AppendData_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVisionBPLib_AppendData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisionBPLib_eventAppendData_Parms, Data), METADATA_PARAMS(Z_Construct_UFunction_UVisionBPLib_AppendData_Statics::NewProp_Data_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_AppendData_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisionBPLib_AppendData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_AppendData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_AppendData_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_AppendData_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisionBPLib_AppendData_Statics::Function_MetaDataParams[] = {
		{ "Category", "unrealcv" },
		{ "ModuleRelativePath", "Public/BPFunctionLib/VisionBPLib.h" },
		{ "ToolTip", "Append data to an existing file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisionBPLib_AppendData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisionBPLib, nullptr, "AppendData", sizeof(VisionBPLib_eventAppendData_Parms), Z_Construct_UFunction_UVisionBPLib_AppendData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_AppendData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVisionBPLib_AppendData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_AppendData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVisionBPLib_AppendData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVisionBPLib_AppendData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVisionBPLib_CreateFile_Statics
	{
		struct VisionBPLib_eventCreateFile_Parms
		{
			FString Filename;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVisionBPLib_CreateFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VisionBPLib_eventCreateFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVisionBPLib_CreateFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VisionBPLib_eventCreateFile_Parms), &Z_Construct_UFunction_UVisionBPLib_CreateFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisionBPLib_CreateFile_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVisionBPLib_CreateFile_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisionBPLib_eventCreateFile_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UVisionBPLib_CreateFile_Statics::NewProp_Filename_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_CreateFile_Statics::NewProp_Filename_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisionBPLib_CreateFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_CreateFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_CreateFile_Statics::NewProp_Filename,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisionBPLib_CreateFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "unrealcv" },
		{ "ModuleRelativePath", "Public/BPFunctionLib/VisionBPLib.h" },
		{ "ToolTip", "Create an empty" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisionBPLib_CreateFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisionBPLib, nullptr, "CreateFile", sizeof(VisionBPLib_eventCreateFile_Parms), Z_Construct_UFunction_UVisionBPLib_CreateFile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_CreateFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVisionBPLib_CreateFile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_CreateFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVisionBPLib_CreateFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVisionBPLib_CreateFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVisionBPLib_FrameNumber_Statics
	{
		struct VisionBPLib_eventFrameNumber_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVisionBPLib_FrameNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisionBPLib_eventFrameNumber_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisionBPLib_FrameNumber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_FrameNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisionBPLib_FrameNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "unrealcv" },
		{ "ModuleRelativePath", "Public/BPFunctionLib/VisionBPLib.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"unrealcv\")\nstatic FString SerializeBoneInfo(USkeletalMeshComponent* Component);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisionBPLib_FrameNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisionBPLib, nullptr, "FrameNumber", sizeof(VisionBPLib_eventFrameNumber_Parms), Z_Construct_UFunction_UVisionBPLib_FrameNumber_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_FrameNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVisionBPLib_FrameNumber_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_FrameNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVisionBPLib_FrameNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVisionBPLib_FrameNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVisionBPLib_GetActorList_Statics
	{
		struct VisionBPLib_eventGetActorList_Parms
		{
			TArray<AActor*> ActorList;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorList_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVisionBPLib_GetActorList_Statics::NewProp_ActorList = { "ActorList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisionBPLib_eventGetActorList_Parms, ActorList), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisionBPLib_GetActorList_Statics::NewProp_ActorList_Inner = { "ActorList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisionBPLib_GetActorList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_GetActorList_Statics::NewProp_ActorList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_GetActorList_Statics::NewProp_ActorList_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisionBPLib_GetActorList_Statics::Function_MetaDataParams[] = {
		{ "Category", "unrealcv" },
		{ "ModuleRelativePath", "Public/BPFunctionLib/VisionBPLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisionBPLib_GetActorList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisionBPLib, nullptr, "GetActorList", sizeof(VisionBPLib_eventGetActorList_Parms), Z_Construct_UFunction_UVisionBPLib_GetActorList_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_GetActorList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVisionBPLib_GetActorList_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_GetActorList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVisionBPLib_GetActorList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVisionBPLib_GetActorList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVisionBPLib_GetAnnotationColor_Statics
	{
		struct VisionBPLib_eventGetAnnotationColor_Parms
		{
			AActor* Actor;
			FColor AnnotationColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnnotationColor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisionBPLib_GetAnnotationColor_Statics::NewProp_AnnotationColor = { "AnnotationColor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisionBPLib_eventGetAnnotationColor_Parms, AnnotationColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisionBPLib_GetAnnotationColor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisionBPLib_eventGetAnnotationColor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisionBPLib_GetAnnotationColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_GetAnnotationColor_Statics::NewProp_AnnotationColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_GetAnnotationColor_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisionBPLib_GetAnnotationColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "unrealcv" },
		{ "ModuleRelativePath", "Public/BPFunctionLib/VisionBPLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisionBPLib_GetAnnotationColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisionBPLib, nullptr, "GetAnnotationColor", sizeof(VisionBPLib_eventGetAnnotationColor_Parms), Z_Construct_UFunction_UVisionBPLib_GetAnnotationColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_GetAnnotationColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVisionBPLib_GetAnnotationColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_GetAnnotationColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVisionBPLib_GetAnnotationColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVisionBPLib_GetAnnotationColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVisionBPLib_GetBoneTransform_Statics
	{
		struct VisionBPLib_eventGetBoneTransform_Parms
		{
			const USkeletalMeshComponent* SkeletalMeshComponent;
			TArray<FString> IncludedBones;
			TArray<FString> BoneNames;
			TArray<FTransform> BoneTransforms;
			bool bWorldSpace;
		};
		static void NewProp_bWorldSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWorldSpace;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneTransforms;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneTransforms_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneNames;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BoneNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncludedBones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IncludedBones;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IncludedBones_Inner;
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
	void Z_Construct_UFunction_UVisionBPLib_GetBoneTransform_Statics::NewProp_bWorldSpace_SetBit(void* Obj)
	{
		((VisionBPLib_eventGetBoneTransform_Parms*)Obj)->bWorldSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVisionBPLib_GetBoneTransform_Statics::NewProp_bWorldSpace = { "bWorldSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VisionBPLib_eventGetBoneTransform_Parms), &Z_Construct_UFunction_UVisionBPLib_GetBoneTransform_Statics::NewProp_bWorldSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVisionBPLib_GetBoneTransform_Statics::NewProp_BoneTransforms = { "BoneTransforms", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisionBPLib_eventGetBoneTransform_Parms, BoneTransforms), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisionBPLib_GetBoneTransform_Statics::NewProp_BoneTransforms_Inner = { "BoneTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVisionBPLib_GetBoneTransform_Statics::NewProp_BoneNames = { "BoneNames", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisionBPLib_eventGetBoneTransform_Parms, BoneNames), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVisionBPLib_GetBoneTransform_Statics::NewProp_BoneNames_Inner = { "BoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisionBPLib_GetBoneTransform_Statics::NewProp_IncludedBones_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVisionBPLib_GetBoneTransform_Statics::NewProp_IncludedBones = { "IncludedBones", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisionBPLib_eventGetBoneTransform_Parms, IncludedBones), METADATA_PARAMS(Z_Construct_UFunction_UVisionBPLib_GetBoneTransform_Statics::NewProp_IncludedBones_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_GetBoneTransform_Statics::NewProp_IncludedBones_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVisionBPLib_GetBoneTransform_Statics::NewProp_IncludedBones_Inner = { "IncludedBones", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisionBPLib_GetBoneTransform_Statics::NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisionBPLib_GetBoneTransform_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisionBPLib_eventGetBoneTransform_Parms, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVisionBPLib_GetBoneTransform_Statics::NewProp_SkeletalMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_GetBoneTransform_Statics::NewProp_SkeletalMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisionBPLib_GetBoneTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_GetBoneTransform_Statics::NewProp_bWorldSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_GetBoneTransform_Statics::NewProp_BoneTransforms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_GetBoneTransform_Statics::NewProp_BoneTransforms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_GetBoneTransform_Statics::NewProp_BoneNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_GetBoneTransform_Statics::NewProp_BoneNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_GetBoneTransform_Statics::NewProp_IncludedBones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_GetBoneTransform_Statics::NewProp_IncludedBones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_GetBoneTransform_Statics::NewProp_SkeletalMeshComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisionBPLib_GetBoneTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "unrealcv" },
		{ "CPP_Default_bWorldSpace", "false" },
		{ "ModuleRelativePath", "Public/BPFunctionLib/VisionBPLib.h" },
		{ "ToolTip", "Extract SkeletalMesh bone information" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisionBPLib_GetBoneTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisionBPLib, nullptr, "GetBoneTransform", sizeof(VisionBPLib_eventGetBoneTransform_Parms), Z_Construct_UFunction_UVisionBPLib_GetBoneTransform_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_GetBoneTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVisionBPLib_GetBoneTransform_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_GetBoneTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVisionBPLib_GetBoneTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVisionBPLib_GetBoneTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVisionBPLib_GetBoneTransformJson_Statics
	{
		struct VisionBPLib_eventGetBoneTransformJson_Parms
		{
			const USkeletalMeshComponent* SkeletalMeshComponent;
			TArray<FString> IncludedBones;
			TArray<FString> BoneNames;
			TArray<FJsonObjectBP> BoneTransformsJson;
			bool bWorldSpace;
		};
		static void NewProp_bWorldSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWorldSpace;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneTransformsJson;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneTransformsJson_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneNames;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BoneNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncludedBones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IncludedBones;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IncludedBones_Inner;
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
	void Z_Construct_UFunction_UVisionBPLib_GetBoneTransformJson_Statics::NewProp_bWorldSpace_SetBit(void* Obj)
	{
		((VisionBPLib_eventGetBoneTransformJson_Parms*)Obj)->bWorldSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVisionBPLib_GetBoneTransformJson_Statics::NewProp_bWorldSpace = { "bWorldSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VisionBPLib_eventGetBoneTransformJson_Parms), &Z_Construct_UFunction_UVisionBPLib_GetBoneTransformJson_Statics::NewProp_bWorldSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVisionBPLib_GetBoneTransformJson_Statics::NewProp_BoneTransformsJson = { "BoneTransformsJson", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisionBPLib_eventGetBoneTransformJson_Parms, BoneTransformsJson), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisionBPLib_GetBoneTransformJson_Statics::NewProp_BoneTransformsJson_Inner = { "BoneTransformsJson", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FJsonObjectBP, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVisionBPLib_GetBoneTransformJson_Statics::NewProp_BoneNames = { "BoneNames", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisionBPLib_eventGetBoneTransformJson_Parms, BoneNames), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVisionBPLib_GetBoneTransformJson_Statics::NewProp_BoneNames_Inner = { "BoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisionBPLib_GetBoneTransformJson_Statics::NewProp_IncludedBones_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVisionBPLib_GetBoneTransformJson_Statics::NewProp_IncludedBones = { "IncludedBones", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisionBPLib_eventGetBoneTransformJson_Parms, IncludedBones), METADATA_PARAMS(Z_Construct_UFunction_UVisionBPLib_GetBoneTransformJson_Statics::NewProp_IncludedBones_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_GetBoneTransformJson_Statics::NewProp_IncludedBones_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVisionBPLib_GetBoneTransformJson_Statics::NewProp_IncludedBones_Inner = { "IncludedBones", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisionBPLib_GetBoneTransformJson_Statics::NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisionBPLib_GetBoneTransformJson_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisionBPLib_eventGetBoneTransformJson_Parms, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVisionBPLib_GetBoneTransformJson_Statics::NewProp_SkeletalMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_GetBoneTransformJson_Statics::NewProp_SkeletalMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisionBPLib_GetBoneTransformJson_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_GetBoneTransformJson_Statics::NewProp_bWorldSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_GetBoneTransformJson_Statics::NewProp_BoneTransformsJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_GetBoneTransformJson_Statics::NewProp_BoneTransformsJson_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_GetBoneTransformJson_Statics::NewProp_BoneNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_GetBoneTransformJson_Statics::NewProp_BoneNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_GetBoneTransformJson_Statics::NewProp_IncludedBones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_GetBoneTransformJson_Statics::NewProp_IncludedBones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_GetBoneTransformJson_Statics::NewProp_SkeletalMeshComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisionBPLib_GetBoneTransformJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "unrealcv" },
		{ "CPP_Default_bWorldSpace", "false" },
		{ "ModuleRelativePath", "Public/BPFunctionLib/VisionBPLib.h" },
		{ "ToolTip", "Get bone transformation and return as JsonObject array, this can make BP programming much easier" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisionBPLib_GetBoneTransformJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisionBPLib, nullptr, "GetBoneTransformJson", sizeof(VisionBPLib_eventGetBoneTransformJson_Parms), Z_Construct_UFunction_UVisionBPLib_GetBoneTransformJson_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_GetBoneTransformJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVisionBPLib_GetBoneTransformJson_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_GetBoneTransformJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVisionBPLib_GetBoneTransformJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVisionBPLib_GetBoneTransformJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVisionBPLib_GetPlayerSensor_Statics
	{
		struct VisionBPLib_eventGetPlayerSensor_Parms
		{
			UFusionCamSensor* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisionBPLib_GetPlayerSensor_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisionBPLib_GetPlayerSensor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisionBPLib_eventGetPlayerSensor_Parms, ReturnValue), Z_Construct_UClass_UFusionCamSensor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVisionBPLib_GetPlayerSensor_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_GetPlayerSensor_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisionBPLib_GetPlayerSensor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_GetPlayerSensor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisionBPLib_GetPlayerSensor_Statics::Function_MetaDataParams[] = {
		{ "Category", "unrealcv" },
		{ "ModuleRelativePath", "Public/BPFunctionLib/VisionBPLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisionBPLib_GetPlayerSensor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisionBPLib, nullptr, "GetPlayerSensor", sizeof(VisionBPLib_eventGetPlayerSensor_Parms), Z_Construct_UFunction_UVisionBPLib_GetPlayerSensor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_GetPlayerSensor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVisionBPLib_GetPlayerSensor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_GetPlayerSensor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVisionBPLib_GetPlayerSensor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVisionBPLib_GetPlayerSensor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVisionBPLib_GetVertexArray_Statics
	{
		struct VisionBPLib_eventGetVertexArray_Parms
		{
			const AActor* Actor;
			TArray<FVector> VertexArray;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertexArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVisionBPLib_GetVertexArray_Statics::NewProp_VertexArray = { "VertexArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisionBPLib_eventGetVertexArray_Parms, VertexArray), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisionBPLib_GetVertexArray_Statics::NewProp_VertexArray_Inner = { "VertexArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisionBPLib_GetVertexArray_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisionBPLib_GetVertexArray_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisionBPLib_eventGetVertexArray_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVisionBPLib_GetVertexArray_Statics::NewProp_Actor_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_GetVertexArray_Statics::NewProp_Actor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisionBPLib_GetVertexArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_GetVertexArray_Statics::NewProp_VertexArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_GetVertexArray_Statics::NewProp_VertexArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_GetVertexArray_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisionBPLib_GetVertexArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "unrealcv" },
		{ "ModuleRelativePath", "Public/BPFunctionLib/VisionBPLib.h" },
		{ "ToolTip", "Extract vertex data of a mesh" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisionBPLib_GetVertexArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisionBPLib, nullptr, "GetVertexArray", sizeof(VisionBPLib_eventGetVertexArray_Parms), Z_Construct_UFunction_UVisionBPLib_GetVertexArray_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_GetVertexArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVisionBPLib_GetVertexArray_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_GetVertexArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVisionBPLib_GetVertexArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVisionBPLib_GetVertexArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVisionBPLib_GetVertexArrayFromMeshComponent_Statics
	{
		struct VisionBPLib_eventGetVertexArrayFromMeshComponent_Parms
		{
			UMeshComponent* MeshComponent;
			TArray<FVector> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVisionBPLib_GetVertexArrayFromMeshComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisionBPLib_eventGetVertexArrayFromMeshComponent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisionBPLib_GetVertexArrayFromMeshComponent_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisionBPLib_GetVertexArrayFromMeshComponent_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisionBPLib_GetVertexArrayFromMeshComponent_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisionBPLib_eventGetVertexArrayFromMeshComponent_Parms, MeshComponent), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVisionBPLib_GetVertexArrayFromMeshComponent_Statics::NewProp_MeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_GetVertexArrayFromMeshComponent_Statics::NewProp_MeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisionBPLib_GetVertexArrayFromMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_GetVertexArrayFromMeshComponent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_GetVertexArrayFromMeshComponent_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_GetVertexArrayFromMeshComponent_Statics::NewProp_MeshComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisionBPLib_GetVertexArrayFromMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "unrealcv" },
		{ "ModuleRelativePath", "Public/BPFunctionLib/VisionBPLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisionBPLib_GetVertexArrayFromMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisionBPLib, nullptr, "GetVertexArrayFromMeshComponent", sizeof(VisionBPLib_eventGetVertexArrayFromMeshComponent_Parms), Z_Construct_UFunction_UVisionBPLib_GetVertexArrayFromMeshComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_GetVertexArrayFromMeshComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVisionBPLib_GetVertexArrayFromMeshComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_GetVertexArrayFromMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVisionBPLib_GetVertexArrayFromMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVisionBPLib_GetVertexArrayFromMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVisionBPLib_SaveData_Statics
	{
		struct VisionBPLib_eventSaveData_Parms
		{
			FString Data;
			FString Filename;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVisionBPLib_SaveData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VisionBPLib_eventSaveData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVisionBPLib_SaveData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VisionBPLib_eventSaveData_Parms), &Z_Construct_UFunction_UVisionBPLib_SaveData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisionBPLib_SaveData_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVisionBPLib_SaveData_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisionBPLib_eventSaveData_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UVisionBPLib_SaveData_Statics::NewProp_Filename_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_SaveData_Statics::NewProp_Filename_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisionBPLib_SaveData_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVisionBPLib_SaveData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisionBPLib_eventSaveData_Parms, Data), METADATA_PARAMS(Z_Construct_UFunction_UVisionBPLib_SaveData_Statics::NewProp_Data_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_SaveData_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisionBPLib_SaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_SaveData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_SaveData_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_SaveData_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisionBPLib_SaveData_Statics::Function_MetaDataParams[] = {
		{ "Category", "unrealcv" },
		{ "ModuleRelativePath", "Public/BPFunctionLib/VisionBPLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisionBPLib_SaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisionBPLib, nullptr, "SaveData", sizeof(VisionBPLib_eventSaveData_Parms), Z_Construct_UFunction_UVisionBPLib_SaveData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_SaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVisionBPLib_SaveData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_SaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVisionBPLib_SaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVisionBPLib_SaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVisionBPLib_SaveNpy_Statics
	{
		struct VisionBPLib_eventSaveNpy_Parms
		{
			TArray<float> FloatData;
			int32 Width;
			int32 Height;
			FString Filename;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Height;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FloatData;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatData_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVisionBPLib_SaveNpy_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisionBPLib_eventSaveNpy_Parms, Filename), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVisionBPLib_SaveNpy_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisionBPLib_eventSaveNpy_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVisionBPLib_SaveNpy_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisionBPLib_eventSaveNpy_Parms, Width), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisionBPLib_SaveNpy_Statics::NewProp_FloatData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVisionBPLib_SaveNpy_Statics::NewProp_FloatData = { "FloatData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisionBPLib_eventSaveNpy_Parms, FloatData), METADATA_PARAMS(Z_Construct_UFunction_UVisionBPLib_SaveNpy_Statics::NewProp_FloatData_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_SaveNpy_Statics::NewProp_FloatData_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVisionBPLib_SaveNpy_Statics::NewProp_FloatData_Inner = { "FloatData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisionBPLib_SaveNpy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_SaveNpy_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_SaveNpy_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_SaveNpy_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_SaveNpy_Statics::NewProp_FloatData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_SaveNpy_Statics::NewProp_FloatData_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisionBPLib_SaveNpy_Statics::Function_MetaDataParams[] = {
		{ "Category", "unrealcv" },
		{ "ModuleRelativePath", "Public/BPFunctionLib/VisionBPLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisionBPLib_SaveNpy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisionBPLib, nullptr, "SaveNpy", sizeof(VisionBPLib_eventSaveNpy_Parms), Z_Construct_UFunction_UVisionBPLib_SaveNpy_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_SaveNpy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVisionBPLib_SaveNpy_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_SaveNpy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVisionBPLib_SaveNpy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVisionBPLib_SaveNpy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVisionBPLib_SavePng_Statics
	{
		struct VisionBPLib_eventSavePng_Parms
		{
			TArray<FColor> ImageData;
			int32 Width;
			int32 Height;
			FString Filename;
			bool bKeepAlpha;
		};
		static void NewProp_bKeepAlpha_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKeepAlpha;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Height;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ImageData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImageData_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVisionBPLib_SavePng_Statics::NewProp_bKeepAlpha_SetBit(void* Obj)
	{
		((VisionBPLib_eventSavePng_Parms*)Obj)->bKeepAlpha = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVisionBPLib_SavePng_Statics::NewProp_bKeepAlpha = { "bKeepAlpha", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VisionBPLib_eventSavePng_Parms), &Z_Construct_UFunction_UVisionBPLib_SavePng_Statics::NewProp_bKeepAlpha_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVisionBPLib_SavePng_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisionBPLib_eventSavePng_Parms, Filename), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVisionBPLib_SavePng_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisionBPLib_eventSavePng_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVisionBPLib_SavePng_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisionBPLib_eventSavePng_Parms, Width), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisionBPLib_SavePng_Statics::NewProp_ImageData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVisionBPLib_SavePng_Statics::NewProp_ImageData = { "ImageData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisionBPLib_eventSavePng_Parms, ImageData), METADATA_PARAMS(Z_Construct_UFunction_UVisionBPLib_SavePng_Statics::NewProp_ImageData_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_SavePng_Statics::NewProp_ImageData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisionBPLib_SavePng_Statics::NewProp_ImageData_Inner = { "ImageData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisionBPLib_SavePng_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_SavePng_Statics::NewProp_bKeepAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_SavePng_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_SavePng_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_SavePng_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_SavePng_Statics::NewProp_ImageData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_SavePng_Statics::NewProp_ImageData_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisionBPLib_SavePng_Statics::Function_MetaDataParams[] = {
		{ "Category", "unrealcv" },
		{ "CPP_Default_bKeepAlpha", "false" },
		{ "ModuleRelativePath", "Public/BPFunctionLib/VisionBPLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisionBPLib_SavePng_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisionBPLib, nullptr, "SavePng", sizeof(VisionBPLib_eventSavePng_Parms), Z_Construct_UFunction_UVisionBPLib_SavePng_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_SavePng_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVisionBPLib_SavePng_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_SavePng_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVisionBPLib_SavePng()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVisionBPLib_SavePng_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVisionBPLib_SendMessageBP_Statics
	{
		struct VisionBPLib_eventSendMessageBP_Parms
		{
			FString Message;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVisionBPLib_SendMessageBP_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VisionBPLib_eventSendMessageBP_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVisionBPLib_SendMessageBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VisionBPLib_eventSendMessageBP_Parms), &Z_Construct_UFunction_UVisionBPLib_SendMessageBP_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisionBPLib_SendMessageBP_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVisionBPLib_SendMessageBP_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisionBPLib_eventSendMessageBP_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_UVisionBPLib_SendMessageBP_Statics::NewProp_Message_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_SendMessageBP_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisionBPLib_SendMessageBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_SendMessageBP_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_SendMessageBP_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisionBPLib_SendMessageBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "unrealcv" },
		{ "ModuleRelativePath", "Public/BPFunctionLib/VisionBPLib.h" },
		{ "ToolTip", "FilenameFmt is the format string which contains %d\nUFUNCTION(BlueprintCallable, Category = \"unrealcv\")\nstatic FString FormatFrameFilename(FString FilenameFmt);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisionBPLib_SendMessageBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisionBPLib, nullptr, "SendMessageBP", sizeof(VisionBPLib_eventSendMessageBP_Parms), Z_Construct_UFunction_UVisionBPLib_SendMessageBP_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_SendMessageBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVisionBPLib_SendMessageBP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_SendMessageBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVisionBPLib_SendMessageBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVisionBPLib_SendMessageBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVisionBPLib_SkinnedMeshComponentGetVertexArray_Statics
	{
		struct VisionBPLib_eventSkinnedMeshComponentGetVertexArray_Parms
		{
			USkinnedMeshComponent* Component;
			TArray<FVector> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVisionBPLib_SkinnedMeshComponentGetVertexArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisionBPLib_eventSkinnedMeshComponentGetVertexArray_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisionBPLib_SkinnedMeshComponentGetVertexArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisionBPLib_SkinnedMeshComponentGetVertexArray_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisionBPLib_SkinnedMeshComponentGetVertexArray_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisionBPLib_eventSkinnedMeshComponentGetVertexArray_Parms, Component), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVisionBPLib_SkinnedMeshComponentGetVertexArray_Statics::NewProp_Component_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_SkinnedMeshComponentGetVertexArray_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisionBPLib_SkinnedMeshComponentGetVertexArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_SkinnedMeshComponentGetVertexArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_SkinnedMeshComponentGetVertexArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_SkinnedMeshComponentGetVertexArray_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisionBPLib_SkinnedMeshComponentGetVertexArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "unrealcv" },
		{ "ModuleRelativePath", "Public/BPFunctionLib/VisionBPLib.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"unrealcv\")\nstatic void AnnotateWorld();" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisionBPLib_SkinnedMeshComponentGetVertexArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisionBPLib, nullptr, "SkinnedMeshComponentGetVertexArray", sizeof(VisionBPLib_eventSkinnedMeshComponentGetVertexArray_Parms), Z_Construct_UFunction_UVisionBPLib_SkinnedMeshComponentGetVertexArray_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_SkinnedMeshComponentGetVertexArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVisionBPLib_SkinnedMeshComponentGetVertexArray_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_SkinnedMeshComponentGetVertexArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVisionBPLib_SkinnedMeshComponentGetVertexArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVisionBPLib_SkinnedMeshComponentGetVertexArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVisionBPLib_StaticMeshComponentGetVertexArray_Statics
	{
		struct VisionBPLib_eventStaticMeshComponentGetVertexArray_Parms
		{
			UStaticMeshComponent* StaticMeshComponent;
			TArray<FVector> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVisionBPLib_StaticMeshComponentGetVertexArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisionBPLib_eventStaticMeshComponentGetVertexArray_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisionBPLib_StaticMeshComponentGetVertexArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisionBPLib_StaticMeshComponentGetVertexArray_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisionBPLib_StaticMeshComponentGetVertexArray_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisionBPLib_eventStaticMeshComponentGetVertexArray_Parms, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVisionBPLib_StaticMeshComponentGetVertexArray_Statics::NewProp_StaticMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_StaticMeshComponentGetVertexArray_Statics::NewProp_StaticMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisionBPLib_StaticMeshComponentGetVertexArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_StaticMeshComponentGetVertexArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_StaticMeshComponentGetVertexArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_StaticMeshComponentGetVertexArray_Statics::NewProp_StaticMeshComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisionBPLib_StaticMeshComponentGetVertexArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "unrealcv" },
		{ "ModuleRelativePath", "Public/BPFunctionLib/VisionBPLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisionBPLib_StaticMeshComponentGetVertexArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisionBPLib, nullptr, "StaticMeshComponentGetVertexArray", sizeof(VisionBPLib_eventStaticMeshComponentGetVertexArray_Parms), Z_Construct_UFunction_UVisionBPLib_StaticMeshComponentGetVertexArray_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_StaticMeshComponentGetVertexArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVisionBPLib_StaticMeshComponentGetVertexArray_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_StaticMeshComponentGetVertexArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVisionBPLib_StaticMeshComponentGetVertexArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVisionBPLib_StaticMeshComponentGetVertexArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVisionBPLib_UpdateInput_Statics
	{
		struct VisionBPLib_eventUpdateInput_Parms
		{
			APawn* Pawn;
			bool Enable;
		};
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVisionBPLib_UpdateInput_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((VisionBPLib_eventUpdateInput_Parms*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVisionBPLib_UpdateInput_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VisionBPLib_eventUpdateInput_Parms), &Z_Construct_UFunction_UVisionBPLib_UpdateInput_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisionBPLib_UpdateInput_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisionBPLib_eventUpdateInput_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisionBPLib_UpdateInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_UpdateInput_Statics::NewProp_Enable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionBPLib_UpdateInput_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisionBPLib_UpdateInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "unrealcv" },
		{ "ModuleRelativePath", "Public/BPFunctionLib/VisionBPLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisionBPLib_UpdateInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisionBPLib, nullptr, "UpdateInput", sizeof(VisionBPLib_eventUpdateInput_Parms), Z_Construct_UFunction_UVisionBPLib_UpdateInput_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_UpdateInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVisionBPLib_UpdateInput_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVisionBPLib_UpdateInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVisionBPLib_UpdateInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVisionBPLib_UpdateInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVisionBPLib_NoRegister()
	{
		return UVisionBPLib::StaticClass();
	}
	struct Z_Construct_UClass_UVisionBPLib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVisionBPLib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCV,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVisionBPLib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVisionBPLib_AnnotateWorld, "AnnotateWorld" }, // 2967605574
		{ &Z_Construct_UFunction_UVisionBPLib_AppendData, "AppendData" }, // 2973319809
		{ &Z_Construct_UFunction_UVisionBPLib_CreateFile, "CreateFile" }, // 3030213092
		{ &Z_Construct_UFunction_UVisionBPLib_FrameNumber, "FrameNumber" }, // 2802886703
		{ &Z_Construct_UFunction_UVisionBPLib_GetActorList, "GetActorList" }, // 1880189114
		{ &Z_Construct_UFunction_UVisionBPLib_GetAnnotationColor, "GetAnnotationColor" }, // 3552400488
		{ &Z_Construct_UFunction_UVisionBPLib_GetBoneTransform, "GetBoneTransform" }, // 1778860277
		{ &Z_Construct_UFunction_UVisionBPLib_GetBoneTransformJson, "GetBoneTransformJson" }, // 4137235438
		{ &Z_Construct_UFunction_UVisionBPLib_GetPlayerSensor, "GetPlayerSensor" }, // 2414785276
		{ &Z_Construct_UFunction_UVisionBPLib_GetVertexArray, "GetVertexArray" }, // 1133216824
		{ &Z_Construct_UFunction_UVisionBPLib_GetVertexArrayFromMeshComponent, "GetVertexArrayFromMeshComponent" }, // 3545640357
		{ &Z_Construct_UFunction_UVisionBPLib_SaveData, "SaveData" }, // 523600086
		{ &Z_Construct_UFunction_UVisionBPLib_SaveNpy, "SaveNpy" }, // 1443202519
		{ &Z_Construct_UFunction_UVisionBPLib_SavePng, "SavePng" }, // 2761940440
		{ &Z_Construct_UFunction_UVisionBPLib_SendMessageBP, "SendMessageBP" }, // 2637009446
		{ &Z_Construct_UFunction_UVisionBPLib_SkinnedMeshComponentGetVertexArray, "SkinnedMeshComponentGetVertexArray" }, // 1018832074
		{ &Z_Construct_UFunction_UVisionBPLib_StaticMeshComponentGetVertexArray, "StaticMeshComponentGetVertexArray" }, // 1703557745
		{ &Z_Construct_UFunction_UVisionBPLib_UpdateInput, "UpdateInput" }, // 3686274977
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVisionBPLib_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BPFunctionLib/VisionBPLib.h" },
		{ "ModuleRelativePath", "Public/BPFunctionLib/VisionBPLib.h" },
		{ "ToolTip", "A static bp library for computer vision" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVisionBPLib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVisionBPLib>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVisionBPLib_Statics::ClassParams = {
		&UVisionBPLib::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVisionBPLib_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVisionBPLib_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVisionBPLib()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVisionBPLib_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVisionBPLib, 843088590);
	template<> UNREALCV_API UClass* StaticClass<UVisionBPLib>()
	{
		return UVisionBPLib::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVisionBPLib(Z_Construct_UClass_UVisionBPLib, &UVisionBPLib::StaticClass, TEXT("/Script/UnrealCV"), TEXT("UVisionBPLib"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVisionBPLib);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
