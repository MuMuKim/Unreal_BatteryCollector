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
// End Cross Module References
	void ABattery_CollectorGameMode::StaticRegisterNativesABattery_CollectorGameMode()
	{
	}
	UClass* Z_Construct_UClass_ABattery_CollectorGameMode_NoRegister()
	{
		return ABattery_CollectorGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABattery_CollectorGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecayRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABattery_CollectorGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Battery_Collector,
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
		{ "Category", "Power" },
		{ "Comment", "//?\xc9\xb8????? ?\xc4\xbf??? ?\xd9\xbe????? ????\n" },
		{ "ModuleRelativePath", "Battery_CollectorGameMode.h" },
		{ "ToolTip", "?\xc9\xb8????? ?\xc4\xbf??? ?\xd9\xbe????? ????" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABattery_CollectorGameMode_Statics::NewProp_DecayRate = { "DecayRate", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABattery_CollectorGameMode, DecayRate), METADATA_PARAMS(Z_Construct_UClass_ABattery_CollectorGameMode_Statics::NewProp_DecayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABattery_CollectorGameMode_Statics::NewProp_DecayRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABattery_CollectorGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABattery_CollectorGameMode_Statics::NewProp_DecayRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABattery_CollectorGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABattery_CollectorGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABattery_CollectorGameMode_Statics::ClassParams = {
		&ABattery_CollectorGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABattery_CollectorGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
	IMPLEMENT_CLASS(ABattery_CollectorGameMode, 875136513);
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
