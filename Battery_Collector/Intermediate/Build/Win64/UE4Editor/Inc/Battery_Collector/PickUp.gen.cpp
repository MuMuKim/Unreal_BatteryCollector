// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Battery_Collector/Public/PickUp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickUp() {}
// Cross Module References
	BATTERY_COLLECTOR_API UClass* Z_Construct_UClass_APickUp_NoRegister();
	BATTERY_COLLECTOR_API UClass* Z_Construct_UClass_APickUp();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Battery_Collector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APickUp::execWasCollected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WasCollected_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APickUp::execSetActive)
	{
		P_GET_UBOOL(Z_Param_NewPickupState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActive(Z_Param_NewPickupState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APickUp::execIsActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActive();
		P_NATIVE_END;
	}
	static FName NAME_APickUp_WasCollected = FName(TEXT("WasCollected"));
	void APickUp::WasCollected()
	{
		ProcessEvent(FindFunctionChecked(NAME_APickUp_WasCollected),NULL);
	}
	void APickUp::StaticRegisterNativesAPickUp()
	{
		UClass* Class = APickUp::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsActive", &APickUp::execIsActive },
			{ "SetActive", &APickUp::execSetActive },
			{ "WasCollected", &APickUp::execWasCollected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APickUp_IsActive_Statics
	{
		struct PickUp_eventIsActive_Parms
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
	void Z_Construct_UFunction_APickUp_IsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PickUp_eventIsActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APickUp_IsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PickUp_eventIsActive_Parms), &Z_Construct_UFunction_APickUp_IsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickUp_IsActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickUp_IsActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickUp_IsActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
		{ "Comment", "//bIsActive?? ???\xc2\xb8? ??\xc8\xaf???\xd6\xb4? ?\xd4\xbc?\n" },
		{ "ModuleRelativePath", "Public/PickUp.h" },
		{ "ToolTip", "bIsActive?? ???\xc2\xb8? ??\xc8\xaf???\xd6\xb4? ?\xd4\xbc?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickUp_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickUp, nullptr, "IsActive", nullptr, nullptr, sizeof(PickUp_eventIsActive_Parms), Z_Construct_UFunction_APickUp_IsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickUp_IsActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickUp_IsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APickUp_IsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickUp_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickUp_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickUp_SetActive_Statics
	{
		struct PickUp_eventSetActive_Parms
		{
			bool NewPickupState;
		};
		static void NewProp_NewPickupState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewPickupState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APickUp_SetActive_Statics::NewProp_NewPickupState_SetBit(void* Obj)
	{
		((PickUp_eventSetActive_Parms*)Obj)->NewPickupState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APickUp_SetActive_Statics::NewProp_NewPickupState = { "NewPickupState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PickUp_eventSetActive_Parms), &Z_Construct_UFunction_APickUp_SetActive_Statics::NewProp_NewPickupState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickUp_SetActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickUp_SetActive_Statics::NewProp_NewPickupState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickUp_SetActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
		{ "Comment", "//bIsActive?? ?\xd9\xb8? \xc5\xac???????? ?????\xcf\xb0? ???? ?????\xcf\xb0??\xcf\xb4? ?\xd4\xbc?\n" },
		{ "ModuleRelativePath", "Public/PickUp.h" },
		{ "ToolTip", "bIsActive?? ?\xd9\xb8? \xc5\xac???????? ?????\xcf\xb0? ???? ?????\xcf\xb0??\xcf\xb4? ?\xd4\xbc?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickUp_SetActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickUp, nullptr, "SetActive", nullptr, nullptr, sizeof(PickUp_eventSetActive_Parms), Z_Construct_UFunction_APickUp_SetActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickUp_SetActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickUp_SetActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APickUp_SetActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickUp_SetActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickUp_SetActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickUp_WasCollected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickUp_WasCollected_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// BlueprintNativeEvent = C++, BluePrint???? ?\xd4\xbc??? ??\xc3\xbc?? ???? ?? ?\xd6\xb4?.\n// ->C++???? NativeEvent?\xd4\xbc??? ?????? ???? _Implementation \xc5\xb0???\xe5\xb0\xa1 ?\xd9\xbe?????.\n//???????? ?\xd4\xbe??? ?? \xc8\xa3???\xcf\xb4? ?\xd4\xbc?\n" },
		{ "ModuleRelativePath", "Public/PickUp.h" },
		{ "ToolTip", "BlueprintNativeEvent = C++, BluePrint???? ?\xd4\xbc??? ??\xc3\xbc?? ???? ?? ?\xd6\xb4?.\n->C++???? NativeEvent?\xd4\xbc??? ?????? ???? _Implementation \xc5\xb0???\xe5\xb0\xa1 ?\xd9\xbe?????.\n???????? ?\xd4\xbe??? ?? \xc8\xa3???\xcf\xb4? ?\xd4\xbc?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickUp_WasCollected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickUp, nullptr, "WasCollected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickUp_WasCollected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APickUp_WasCollected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickUp_WasCollected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickUp_WasCollected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APickUp_NoRegister()
	{
		return APickUp::StaticClass();
	}
	struct Z_Construct_UClass_APickUp_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PicupMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PicupMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickUp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Battery_Collector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APickUp_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APickUp_IsActive, "IsActive" }, // 3826912444
		{ &Z_Construct_UFunction_APickUp_SetActive, "SetActive" }, // 2481635935
		{ &Z_Construct_UFunction_APickUp_WasCollected, "WasCollected" }, // 1031424283
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickUp_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PickUp.h" },
		{ "ModuleRelativePath", "Public/PickUp.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickUp_Statics::NewProp_PicupMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Pickup" },
		{ "Comment", "//?\xdc\xb0??? ?????? Mesh\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PickUp.h" },
		{ "ToolTip", "?\xdc\xb0??? ?????? Mesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickUp_Statics::NewProp_PicupMesh = { "PicupMesh", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickUp, PicupMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickUp_Statics::NewProp_PicupMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickUp_Statics::NewProp_PicupMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUp_Statics::NewProp_PicupMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickUp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickUp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APickUp_Statics::ClassParams = {
		&APickUp::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APickUp_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APickUp_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APickUp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APickUp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APickUp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APickUp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APickUp, 3060811429);
	template<> BATTERY_COLLECTOR_API UClass* StaticClass<APickUp>()
	{
		return APickUp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APickUp(Z_Construct_UClass_APickUp, &APickUp::StaticClass, TEXT("/Script/Battery_Collector"), TEXT("APickUp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickUp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
