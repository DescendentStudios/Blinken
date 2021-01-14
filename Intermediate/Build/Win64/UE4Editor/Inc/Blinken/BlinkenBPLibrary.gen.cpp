// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blinken/Public/BlinkenBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlinkenBPLibrary() {}
// Cross Module References
	BLINKEN_API UClass* Z_Construct_UClass_UBlinkenBPLibrary_NoRegister();
	BLINKEN_API UClass* Z_Construct_UClass_UBlinkenBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Blinken();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	DEFINE_FUNCTION(UBlinkenBPLibrary::execFlashColor)
	{
		P_GET_STRUCT(FColor,Z_Param_color);
		P_GET_PROPERTY(FFloatProperty,Z_Param_duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlinkenBPLibrary::FlashColor(Z_Param_color,Z_Param_duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlinkenBPLibrary::execSetGlobalColor)
	{
		P_GET_STRUCT(FColor,Z_Param_color);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlinkenBPLibrary::SetGlobalColor(Z_Param_color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlinkenBPLibrary::execIsEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlinkenBPLibrary::IsEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlinkenBPLibrary::execEnable)
	{
		P_GET_UBOOL(Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlinkenBPLibrary::Enable(Z_Param_value);
		P_NATIVE_END;
	}
	void UBlinkenBPLibrary::StaticRegisterNativesUBlinkenBPLibrary()
	{
		UClass* Class = UBlinkenBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Enable", &UBlinkenBPLibrary::execEnable },
			{ "FlashColor", &UBlinkenBPLibrary::execFlashColor },
			{ "IsEnabled", &UBlinkenBPLibrary::execIsEnabled },
			{ "SetGlobalColor", &UBlinkenBPLibrary::execSetGlobalColor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlinkenBPLibrary_Enable_Statics
	{
		struct BlinkenBPLibrary_eventEnable_Parms
		{
			bool value;
		};
		static void NewProp_value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBlinkenBPLibrary_Enable_Statics::NewProp_value_SetBit(void* Obj)
	{
		((BlinkenBPLibrary_eventEnable_Parms*)Obj)->value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlinkenBPLibrary_Enable_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlinkenBPLibrary_eventEnable_Parms), &Z_Construct_UFunction_UBlinkenBPLibrary_Enable_Statics::NewProp_value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlinkenBPLibrary_Enable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlinkenBPLibrary_Enable_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlinkenBPLibrary_Enable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Blinken" },
		{ "CPP_Default_value", "true" },
		{ "DisplayName", "Enable" },
		{ "Keywords", "Blinken Razer Chroma Logitech AlienFX Alienware set global color" },
		{ "ModuleRelativePath", "Public/BlinkenBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlinkenBPLibrary_Enable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlinkenBPLibrary, nullptr, "Enable", nullptr, nullptr, sizeof(BlinkenBPLibrary_eventEnable_Parms), Z_Construct_UFunction_UBlinkenBPLibrary_Enable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlinkenBPLibrary_Enable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlinkenBPLibrary_Enable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlinkenBPLibrary_Enable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlinkenBPLibrary_Enable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlinkenBPLibrary_Enable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlinkenBPLibrary_FlashColor_Statics
	{
		struct BlinkenBPLibrary_eventFlashColor_Parms
		{
			FColor color;
			float duration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_duration;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_color;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBlinkenBPLibrary_FlashColor_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlinkenBPLibrary_eventFlashColor_Parms, duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlinkenBPLibrary_FlashColor_Statics::NewProp_color = { "color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlinkenBPLibrary_eventFlashColor_Parms, color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlinkenBPLibrary_FlashColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlinkenBPLibrary_FlashColor_Statics::NewProp_duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlinkenBPLibrary_FlashColor_Statics::NewProp_color,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlinkenBPLibrary_FlashColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Blinken" },
		{ "DisplayName", "Flash Color" },
		{ "Keywords", "Blinken Razer Chroma Logitech AlienFX Alienware flash color" },
		{ "ModuleRelativePath", "Public/BlinkenBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlinkenBPLibrary_FlashColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlinkenBPLibrary, nullptr, "FlashColor", nullptr, nullptr, sizeof(BlinkenBPLibrary_eventFlashColor_Parms), Z_Construct_UFunction_UBlinkenBPLibrary_FlashColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlinkenBPLibrary_FlashColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlinkenBPLibrary_FlashColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlinkenBPLibrary_FlashColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlinkenBPLibrary_FlashColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlinkenBPLibrary_FlashColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlinkenBPLibrary_IsEnabled_Statics
	{
		struct BlinkenBPLibrary_eventIsEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBlinkenBPLibrary_IsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlinkenBPLibrary_eventIsEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlinkenBPLibrary_IsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlinkenBPLibrary_eventIsEnabled_Parms), &Z_Construct_UFunction_UBlinkenBPLibrary_IsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlinkenBPLibrary_IsEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlinkenBPLibrary_IsEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlinkenBPLibrary_IsEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Blinken" },
		{ "DisplayName", "Is Enabled" },
		{ "Keywords", "Blinken Razer Chroma Logitech AlienFX Alienware set global color" },
		{ "ModuleRelativePath", "Public/BlinkenBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlinkenBPLibrary_IsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlinkenBPLibrary, nullptr, "IsEnabled", nullptr, nullptr, sizeof(BlinkenBPLibrary_eventIsEnabled_Parms), Z_Construct_UFunction_UBlinkenBPLibrary_IsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlinkenBPLibrary_IsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlinkenBPLibrary_IsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlinkenBPLibrary_IsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlinkenBPLibrary_IsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlinkenBPLibrary_IsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlinkenBPLibrary_SetGlobalColor_Statics
	{
		struct BlinkenBPLibrary_eventSetGlobalColor_Parms
		{
			FColor color;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_color;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlinkenBPLibrary_SetGlobalColor_Statics::NewProp_color = { "color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlinkenBPLibrary_eventSetGlobalColor_Parms, color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlinkenBPLibrary_SetGlobalColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlinkenBPLibrary_SetGlobalColor_Statics::NewProp_color,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlinkenBPLibrary_SetGlobalColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Blinken" },
		{ "DisplayName", "Set Global Color" },
		{ "Keywords", "Blinken Razer Chroma Logitech AlienFX Alienware set global color" },
		{ "ModuleRelativePath", "Public/BlinkenBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlinkenBPLibrary_SetGlobalColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlinkenBPLibrary, nullptr, "SetGlobalColor", nullptr, nullptr, sizeof(BlinkenBPLibrary_eventSetGlobalColor_Parms), Z_Construct_UFunction_UBlinkenBPLibrary_SetGlobalColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlinkenBPLibrary_SetGlobalColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlinkenBPLibrary_SetGlobalColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlinkenBPLibrary_SetGlobalColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlinkenBPLibrary_SetGlobalColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlinkenBPLibrary_SetGlobalColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBlinkenBPLibrary_NoRegister()
	{
		return UBlinkenBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UBlinkenBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlinkenBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Blinken,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlinkenBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlinkenBPLibrary_Enable, "Enable" }, // 1735746752
		{ &Z_Construct_UFunction_UBlinkenBPLibrary_FlashColor, "FlashColor" }, // 1617049139
		{ &Z_Construct_UFunction_UBlinkenBPLibrary_IsEnabled, "IsEnabled" }, // 2533187600
		{ &Z_Construct_UFunction_UBlinkenBPLibrary_SetGlobalColor, "SetGlobalColor" }, // 2566349959
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlinkenBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "BlinkenBPLibrary.h" },
		{ "ModuleRelativePath", "Public/BlinkenBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlinkenBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlinkenBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlinkenBPLibrary_Statics::ClassParams = {
		&UBlinkenBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBlinkenBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlinkenBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlinkenBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlinkenBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlinkenBPLibrary, 2416569954);
	template<> BLINKEN_API UClass* StaticClass<UBlinkenBPLibrary>()
	{
		return UBlinkenBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlinkenBPLibrary(Z_Construct_UClass_UBlinkenBPLibrary, &UBlinkenBPLibrary::StaticClass, TEXT("/Script/Blinken"), TEXT("UBlinkenBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlinkenBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
