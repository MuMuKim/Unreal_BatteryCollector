// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTERY_COLLECTOR_PickUp_generated_h
#error "PickUp.generated.h already included, missing '#pragma once' in PickUp.h"
#endif
#define BATTERY_COLLECTOR_PickUp_generated_h

#define Battery_Collector_Source_Battery_Collector_Public_PickUp_h_12_SPARSE_DATA
#define Battery_Collector_Source_Battery_Collector_Public_PickUp_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetActive); \
	DECLARE_FUNCTION(execIsActive);


#define Battery_Collector_Source_Battery_Collector_Public_PickUp_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetActive); \
	DECLARE_FUNCTION(execIsActive);


#define Battery_Collector_Source_Battery_Collector_Public_PickUp_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickUp(); \
	friend struct Z_Construct_UClass_APickUp_Statics; \
public: \
	DECLARE_CLASS(APickUp, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Battery_Collector"), NO_API) \
	DECLARE_SERIALIZER(APickUp)


#define Battery_Collector_Source_Battery_Collector_Public_PickUp_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPickUp(); \
	friend struct Z_Construct_UClass_APickUp_Statics; \
public: \
	DECLARE_CLASS(APickUp, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Battery_Collector"), NO_API) \
	DECLARE_SERIALIZER(APickUp)


#define Battery_Collector_Source_Battery_Collector_Public_PickUp_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickUp(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickUp) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickUp); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickUp); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickUp(APickUp&&); \
	NO_API APickUp(const APickUp&); \
public:


#define Battery_Collector_Source_Battery_Collector_Public_PickUp_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickUp(APickUp&&); \
	NO_API APickUp(const APickUp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickUp); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickUp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickUp)


#define Battery_Collector_Source_Battery_Collector_Public_PickUp_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PicupMesh() { return STRUCT_OFFSET(APickUp, PicupMesh); }


#define Battery_Collector_Source_Battery_Collector_Public_PickUp_h_9_PROLOG
#define Battery_Collector_Source_Battery_Collector_Public_PickUp_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Battery_Collector_Source_Battery_Collector_Public_PickUp_h_12_PRIVATE_PROPERTY_OFFSET \
	Battery_Collector_Source_Battery_Collector_Public_PickUp_h_12_SPARSE_DATA \
	Battery_Collector_Source_Battery_Collector_Public_PickUp_h_12_RPC_WRAPPERS \
	Battery_Collector_Source_Battery_Collector_Public_PickUp_h_12_INCLASS \
	Battery_Collector_Source_Battery_Collector_Public_PickUp_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Battery_Collector_Source_Battery_Collector_Public_PickUp_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Battery_Collector_Source_Battery_Collector_Public_PickUp_h_12_PRIVATE_PROPERTY_OFFSET \
	Battery_Collector_Source_Battery_Collector_Public_PickUp_h_12_SPARSE_DATA \
	Battery_Collector_Source_Battery_Collector_Public_PickUp_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Battery_Collector_Source_Battery_Collector_Public_PickUp_h_12_INCLASS_NO_PURE_DECLS \
	Battery_Collector_Source_Battery_Collector_Public_PickUp_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTERY_COLLECTOR_API UClass* StaticClass<class APickUp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Battery_Collector_Source_Battery_Collector_Public_PickUp_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
