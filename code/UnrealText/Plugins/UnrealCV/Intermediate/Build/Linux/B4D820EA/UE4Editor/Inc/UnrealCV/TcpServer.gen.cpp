// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCV/Public/Server/TcpServer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTcpServer() {}
// Cross Module References
	UNREALCV_API UClass* Z_Construct_UClass_UTcpServer_NoRegister();
	UNREALCV_API UClass* Z_Construct_UClass_UTcpServer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UnrealCV();
// End Cross Module References
	void UTcpServer::StaticRegisterNativesUTcpServer()
	{
	}
	UClass* Z_Construct_UClass_UTcpServer_NoRegister()
	{
		return UTcpServer::StaticClass();
	}
	struct Z_Construct_UClass_UTcpServer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTcpServer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTcpServer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Server/TcpServer.h" },
		{ "ModuleRelativePath", "Public/Server/TcpServer.h" },
		{ "ToolTip", "Server to send and receive message" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTcpServer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTcpServer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTcpServer_Statics::ClassParams = {
		&UTcpServer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTcpServer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTcpServer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTcpServer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTcpServer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTcpServer, 2176876850);
	template<> UNREALCV_API UClass* StaticClass<UTcpServer>()
	{
		return UTcpServer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTcpServer(Z_Construct_UClass_UTcpServer, &UTcpServer::StaticClass, TEXT("/Script/UnrealCV"), TEXT("UTcpServer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTcpServer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
