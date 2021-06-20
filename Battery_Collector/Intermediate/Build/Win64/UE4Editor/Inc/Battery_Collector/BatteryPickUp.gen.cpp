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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BetteryPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BetteryPower;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatteryPickUp_Statics::NewProp_BetteryPower_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Power" },
		{ "Comment", "//???\xcd\xb8??? ?\xc9\xb8??\xcd\xb7? ?????? ?\xc4\xbf??? ??\n//?? ?????? C++???\xd3\xb0??\xe8\xbf\xa1???? ?????? ?????\xcf\xb0? ?\xcc\xb8? ???\xd3\xb9\xde\xb4? BP?????? ?????? ?\xd2\xb0??? /\n//->?????? ??\xc5\xb8\xc5\xb0???\xe5\xb8\xa6 ?\xe1\xbc\xad Protected?\xc9\xbc??? ???? ?????????\xcf\xb0? ?\xd2\xbc??\xd6\xb5?.\n" },
		{ "ModuleRelativePath", "Public/BatteryPickUp.h" },
		{ "ToolTip", "???\xcd\xb8??? ?\xc9\xb8??\xcd\xb7? ?????? ?\xc4\xbf??? ??\n?? ?????? C++???\xd3\xb0??\xe8\xbf\xa1???? ?????? ?????\xcf\xb0? ?\xcc\xb8? ???\xd3\xb9\xde\xb4? BP?????? ?????? ?\xd2\xb0??? /\n->?????? ??\xc5\xb8\xc5\xb0???\xe5\xb8\xa6 ?\xe1\xbc\xad Protected?\xc9\xbc??? ???? ?????????\xcf\xb0? ?\xd2\xbc??\xd6\xb5?." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABatteryPickUp_Statics::NewProp_BetteryPower = { "BetteryPower", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABatteryPickUp, BetteryPower), METADATA_PARAMS(Z_Construct_UClass_ABatteryPickUp_Statics::NewProp_BetteryPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryPickUp_Statics::NewProp_BetteryPower_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABatteryPickUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatteryPickUp_Statics::NewProp_BetteryPower,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABatteryPickUp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABatteryPickUp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABatteryPickUp_Statics::ClassParams = {
		&ABatteryPickUp::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABatteryPickUp_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryPickUp_Statics::PropPointers),
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
	IMPLEMENT_CLASS(ABatteryPickUp, 1094360203);
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
