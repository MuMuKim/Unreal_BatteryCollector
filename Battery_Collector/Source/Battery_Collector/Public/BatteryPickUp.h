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

	//케릭터등 값을 확인할 수있도록 접근함수를 만듬
	float GetPower();

protected:
	//베터리가 케릭터로 보내는 파워의 양
	//이 변수는 C++상속관계에서만 편집이 가능하고 이를 상속받는 BP에서는 변경이 불가능 /
	//->하지만 메타키워드를 써서 Protected옵션을 떼어 수정가능하게 할수있따.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Power", Meta = (BlueprintProtected = "true"))
	float BetteryPower;
};
