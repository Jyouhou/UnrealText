// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALCV_CommandInterface_generated_h
#error "CommandInterface.generated.h already included, missing '#pragma once' in CommandInterface.h"
#endif
#define UNREALCV_CommandInterface_generated_h

#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_CommandInterface_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUnbindCommands) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnbindCommands(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBindCommands) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BindCommands(); \
		P_NATIVE_END; \
	}


#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_CommandInterface_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUnbindCommands) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnbindCommands(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBindCommands) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BindCommands(); \
		P_NATIVE_END; \
	}


#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_CommandInterface_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommandInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommandInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommandInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommandInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommandInterface(UCommandInterface&&); \
	NO_API UCommandInterface(const UCommandInterface&); \
public:


#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_CommandInterface_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommandInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommandInterface(UCommandInterface&&); \
	NO_API UCommandInterface(const UCommandInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommandInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommandInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommandInterface)


#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_CommandInterface_h_9_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCommandInterface(); \
	friend struct Z_Construct_UClass_UCommandInterface_Statics; \
public: \
	DECLARE_CLASS(UCommandInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UnrealCV"), NO_API) \
	DECLARE_SERIALIZER(UCommandInterface)


#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_CommandInterface_h_9_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_CommandInterface_h_9_GENERATED_UINTERFACE_BODY() \
	UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_CommandInterface_h_9_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_CommandInterface_h_9_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_CommandInterface_h_9_GENERATED_UINTERFACE_BODY() \
	UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_CommandInterface_h_9_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_CommandInterface_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICommandInterface() {} \
public: \
	typedef UCommandInterface UClassType; \
	typedef ICommandInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_CommandInterface_h_9_INCLASS_IINTERFACE \
protected: \
	virtual ~ICommandInterface() {} \
public: \
	typedef UCommandInterface UClassType; \
	typedef ICommandInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_CommandInterface_h_6_PROLOG
#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_CommandInterface_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_CommandInterface_h_9_RPC_WRAPPERS \
	UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_CommandInterface_h_9_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_CommandInterface_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_CommandInterface_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_CommandInterface_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALCV_API UClass* StaticClass<class UCommandInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealText_Synthetic_Scene_Text_Images_code_UnrealText_Plugins_UnrealCV_HostProject_Plugins_UnrealCV_Source_UnrealCV_Public_CommandInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
