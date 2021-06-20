// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Battery_CollectorGameMode.generated.h"

UCLASS(minimalapi)
class ABattery_CollectorGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABattery_CollectorGameMode();

	virtual void Tick(float DeltaTime) override;

protected:
	//케릭터의 파워가 줄어드는 정도
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Power")
	float DecayRate;
};



