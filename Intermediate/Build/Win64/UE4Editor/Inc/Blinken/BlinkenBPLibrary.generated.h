// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FColor;
#ifdef BLINKEN_BlinkenBPLibrary_generated_h
#error "BlinkenBPLibrary.generated.h already included, missing '#pragma once' in BlinkenBPLibrary.h"
#endif
#define BLINKEN_BlinkenBPLibrary_generated_h

#define MyProject_425_Plugins_BlinkenPlugin_Source_Blinken_Public_BlinkenBPLibrary_h_28_SPARSE_DATA
#define MyProject_425_Plugins_BlinkenPlugin_Source_Blinken_Public_BlinkenBPLibrary_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFlashColor); \
	DECLARE_FUNCTION(execSetGlobalColor); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execEnable);


#define MyProject_425_Plugins_BlinkenPlugin_Source_Blinken_Public_BlinkenBPLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFlashColor); \
	DECLARE_FUNCTION(execSetGlobalColor); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execEnable);


#define MyProject_425_Plugins_BlinkenPlugin_Source_Blinken_Public_BlinkenBPLibrary_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlinkenBPLibrary(); \
	friend struct Z_Construct_UClass_UBlinkenBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UBlinkenBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Blinken"), NO_API) \
	DECLARE_SERIALIZER(UBlinkenBPLibrary)


#define MyProject_425_Plugins_BlinkenPlugin_Source_Blinken_Public_BlinkenBPLibrary_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUBlinkenBPLibrary(); \
	friend struct Z_Construct_UClass_UBlinkenBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UBlinkenBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Blinken"), NO_API) \
	DECLARE_SERIALIZER(UBlinkenBPLibrary)


#define MyProject_425_Plugins_BlinkenPlugin_Source_Blinken_Public_BlinkenBPLibrary_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlinkenBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlinkenBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlinkenBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlinkenBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlinkenBPLibrary(UBlinkenBPLibrary&&); \
	NO_API UBlinkenBPLibrary(const UBlinkenBPLibrary&); \
public:


#define MyProject_425_Plugins_BlinkenPlugin_Source_Blinken_Public_BlinkenBPLibrary_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlinkenBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlinkenBPLibrary(UBlinkenBPLibrary&&); \
	NO_API UBlinkenBPLibrary(const UBlinkenBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlinkenBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlinkenBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlinkenBPLibrary)


#define MyProject_425_Plugins_BlinkenPlugin_Source_Blinken_Public_BlinkenBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET
#define MyProject_425_Plugins_BlinkenPlugin_Source_Blinken_Public_BlinkenBPLibrary_h_25_PROLOG
#define MyProject_425_Plugins_BlinkenPlugin_Source_Blinken_Public_BlinkenBPLibrary_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_425_Plugins_BlinkenPlugin_Source_Blinken_Public_BlinkenBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET \
	MyProject_425_Plugins_BlinkenPlugin_Source_Blinken_Public_BlinkenBPLibrary_h_28_SPARSE_DATA \
	MyProject_425_Plugins_BlinkenPlugin_Source_Blinken_Public_BlinkenBPLibrary_h_28_RPC_WRAPPERS \
	MyProject_425_Plugins_BlinkenPlugin_Source_Blinken_Public_BlinkenBPLibrary_h_28_INCLASS \
	MyProject_425_Plugins_BlinkenPlugin_Source_Blinken_Public_BlinkenBPLibrary_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_425_Plugins_BlinkenPlugin_Source_Blinken_Public_BlinkenBPLibrary_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_425_Plugins_BlinkenPlugin_Source_Blinken_Public_BlinkenBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET \
	MyProject_425_Plugins_BlinkenPlugin_Source_Blinken_Public_BlinkenBPLibrary_h_28_SPARSE_DATA \
	MyProject_425_Plugins_BlinkenPlugin_Source_Blinken_Public_BlinkenBPLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_425_Plugins_BlinkenPlugin_Source_Blinken_Public_BlinkenBPLibrary_h_28_INCLASS_NO_PURE_DECLS \
	MyProject_425_Plugins_BlinkenPlugin_Source_Blinken_Public_BlinkenBPLibrary_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BlinkenBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLINKEN_API UClass* StaticClass<class UBlinkenBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_425_Plugins_BlinkenPlugin_Source_Blinken_Public_BlinkenBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
