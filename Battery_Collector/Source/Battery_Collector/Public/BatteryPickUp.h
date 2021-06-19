// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PickUp.h"
#include "BatteryPickUp.generated.h"

/**
 * 
 */
UCLASS()
class BATTERY_COLLECTOR_API ABatteryPickUp : public APickUp
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABatteryPickUp();

	//WasCollected 함수를 오버라이딩
	void WasCollected_Implementation() override;
};
