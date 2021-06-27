// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Battery_Collector/Battery_CollectorGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBattery_CollectorGameMode() {}
// Cross Module References
	BATTERY_COLLECTOR_API UClass* Z_Construct_UClass_ABattery_CollectorGameMode_NoRegister();
	BATTERY_COLLECTOR_API UClass* Z_Construct_UClass_ABattery_CollectorGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Battery_Collector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABattery_CollectorGameMode::execGetPowerToWin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPowerToWin();
		P_NATIVE_END;
	}
	void ABattery_CollectorGameMode::StaticRegisterNativesABattery_CollectorGameMode()
	{
		UClass* Class = ABattery_CollectorGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPowerToWin", &ABattery_CollectorGameMode::execGetPowerToWin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABattery_CollectorGameMode_GetPowerToWin_Statics
	{
		struct Battery_CollectorGameMode_eventGetPowerToWin_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABattery_CollectorGameMode_GetPowerToWin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Battery_CollectorGameMode_eventGetPowerToWin_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABattery_CollectorGameMode_GetPowerToWin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABattery_CollectorGameMode_GetPowerToWin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABattery_CollectorGameMode_GetPowerToWin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "Comment", "//???? ?\xc2\xb8??? ?\xca\xbf??? ?\xc4\xbf??? ?\xcb\xb7??? - UHD?? ?\xca\xbf?\n" },
		{ "ModuleRelativePath", "Battery_CollectorGameMode.h" },
		{ "ToolTip", "???? ?\xc2\xb8??? ?\xca\xbf??? ?\xc4\xbf??? ?\xcb\xb7??? - UHD?? ?\xca\xbf?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABattery_CollectorGameMode_GetPowerToWin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABattery_CollectorGameMode, nullptr, "GetPowerToWin", nullptr, nullptr, sizeof(Battery_CollectorGameMode_eventGetPowerToWin_Parms), Z_Construct_UFunction_ABattery_CollectorGameMode_GetPowerToWin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABattery_CollectorGameMode_GetPowerToWin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABattery_CollectorGameMode_GetPowerToWin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABattery_CollectorGameMode_GetPowerToWin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABattery_CollectorGameMode_GetPowerToWin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABattery_CollectorGameMode_GetPowerToWin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABattery_CollectorGameMode_NoRegister()
	{
		return ABattery_CollectorGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABattery_CollectorGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerToWin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PowerToWin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UHDWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_UHDWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABattery_CollectorGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Battery_Collector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABattery_CollectorGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABattery_CollectorGameMode_GetPowerToWin, "GetPowerToWin" }, // 1766935182
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABattery_CollectorGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Battery_CollectorGameMode.h" },
		{ "ModuleRelativePath", "Battery_CollectorGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABattery_CollectorGameMode_Statics::NewProp_DecayRate_MetaData[] = {
		{ "BluePrintProtected", "true" },
		{ "Category", "Power" },
		{ "Comment", "//?\xc9\xb8????? ?\xc4\xbf??? ?\xd9\xbe????? ????\n" },
		{ "ModuleRelativePath", "Battery_CollectorGameMode.h" },
		{ "ToolTip", "?\xc9\xb8????? ?\xc4\xbf??? ?\xd9\xbe????? ????" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABattery_CollectorGameMode_Statics::NewProp_DecayRate = { "DecayRate", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABattery_CollectorGameMode, DecayRate), METADATA_PARAMS(Z_Construct_UClass_ABattery_CollectorGameMode_Statics::NewProp_DecayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABattery_CollectorGameMode_Statics::NewProp_DecayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABattery_CollectorGameMode_Statics::NewProp_PowerToWin_MetaData[] = {
		{ "BluePrintProtected", "true" },
		{ "Category", "Power" },
		{ "Comment", "//?\xc2\xb8??\xcf\xb1? ???? ???\xc6\xbe? ?\xcf\xb4? ???\xcd\xb8??? ??\n" },
		{ "ModuleRelativePath", "Battery_CollectorGameMode.h" },
		{ "ToolTip", "?\xc2\xb8??\xcf\xb1? ???? ???\xc6\xbe? ?\xcf\xb4? ???\xcd\xb8??? ??" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABattery_CollectorGameMode_Statics::NewProp_PowerToWin = { "PowerToWin", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABattery_CollectorGameMode, PowerToWin), METADATA_PARAMS(Z_Construct_UClass_ABattery_CollectorGameMode_Statics::NewProp_PowerToWin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABattery_CollectorGameMode_Statics::NewProp_PowerToWin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABattery_CollectorGameMode_Statics::NewProp_UHDWidgetClass_MetaData[] = {
		{ "BluePrintProtected", "true" },
		{ "Category", "Power" },
		{ "Comment", "//UHD \xc8\xad?\xe9\xbf\xa1 ?????? ???? \xc5\xac????\n" },
		{ "ModuleRelativePath", "Battery_CollectorGameMode.h" },
		{ "ToolTip", "UHD \xc8\xad?\xe9\xbf\xa1 ?????? ???? \xc5\xac????" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABattery_CollectorGameMode_Statics::NewProp_UHDWidgetClass = { "UHDWidgetClass", nullptr, (EPropertyFlags)0x0024080000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABattery_CollectorGameMode, UHDWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABattery_CollectorGameMode_Statics::NewProp_UHDWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABattery_CollectorGameMode_Statics::NewProp_UHDWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABattery_CollectorGameMode_Statics::NewProp_CurrentWidget_MetaData[] = {
		{ "Comment", "// UHD?? ?\xce\xbd??\xcf\xbd?\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Battery_CollectorGameMode.h" },
		{ "ToolTip", "UHD?? ?\xce\xbd??\xcf\xbd?" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABattery_CollectorGameMode_Statics::NewProp_CurrentWidget = { "CurrentWidget", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABattery_CollectorGameMode, CurrentWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABattery_CollectorGameMode_Statics::NewProp_CurrentWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABattery_CollectorGameMode_Statics::NewProp_CurrentWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABattery_CollectorGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABattery_CollectorGameMode_Statics::NewProp_DecayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABattery_CollectorGameMode_Statics::NewProp_PowerToWin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABattery_CollectorGameMode_Statics::NewProp_UHDWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABattery_CollectorGameMode_Statics::NewProp_CurrentWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABattery_CollectorGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABattery_CollectorGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABattery_CollectorGameMode_Statics::ClassParams = {
		&ABattery_CollectorGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABattery_CollectorGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABattery_CollectorGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABattery_CollectorGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABattery_CollectorGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABattery_CollectorGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABattery_CollectorGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABattery_CollectorGameMode, 3583274278);
	template<> BATTERY_COLLECTOR_API UClass* StaticClass<ABattery_CollectorGameMode>()
	{
		return ABattery_CollectorGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABattery_CollectorGameMode(Z_Construct_UClass_ABattery_CollectorGameMode, &ABattery_CollectorGameMode::StaticClass, TEXT("/Script/Battery_Collector"), TEXT("ABattery_CollectorGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABattery_CollectorGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
