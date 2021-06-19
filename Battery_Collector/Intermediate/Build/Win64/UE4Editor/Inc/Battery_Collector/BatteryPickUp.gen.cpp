// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Battery_Collector/Public/BatteryPickUp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBatteryPickUp() {}
// Cross Module References
	BATTERY_COLLECTOR_API UClass* Z_Construct_UClass_ABatteryPickUp_NoRegister();
	BATTERY_COLLECTOR_API UClass* Z_Construct_UClass_ABatteryPickUp();
	BATTERY_COLLECTOR_API UClass* Z_Construct_UClass_APickUp();
	UPackage* Z_Construct_UPackage__Script_Battery_Collector();
// End Cross Module References
	void ABatteryPickUp::StaticRegisterNativesABatteryPickUp()
	{
	}
	UClass* Z_Construct_UClass_ABatteryPickUp_NoRegister()
	{
		return ABatteryPickUp::StaticClass();
	}
	struct Z_Construct_UClass_ABatteryPickUp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABatteryPickUp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickUp,
		(UObject* (*)())Z_Construct_UPackage__Script_Battery_Collector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatteryPickUp_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BatteryPickUp.h" },
		{ "ModuleRelativePath", "Public/BatteryPickUp.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABatteryPickUp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABatteryPickUp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABatteryPickUp_Statics::ClassParams = {
		&ABatteryPickUp::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABatteryPickUp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryPickUp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABatteryPickUp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABatteryPickUp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABatteryPickUp, 2754169123);
	template<> BATTERY_COLLECTOR_API UClass* StaticClass<ABatteryPickUp>()
	{
		return ABatteryPickUp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABatteryPickUp(Z_Construct_UClass_ABatteryPickUp, &ABatteryPickUp::StaticClass, TEXT("/Script/Battery_Collector"), TEXT("ABatteryPickUp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABatteryPickUp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
