// Copyright Epic Games, Inc. All Rights Reserved.

#include "Battery_CollectorGameMode.h"
#include "Battery_CollectorCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"

ABattery_CollectorGameMode::ABattery_CollectorGameMode()
{
	PrimaryActorTick.bCanEverTick = true;

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	//DecayRate 초기값 설정
	DecayRate = 0.01f;
}

void ABattery_CollectorGameMode::Tick(float DeltaTime)
{
	//이 설정으로 부모에서 원래 실행되던 부분을 그냥 넘어가지 않게함
	Super::Tick(DeltaTime);
	//케릭터 클래스를 변수로 담아
	ABattery_CollectorCharacter* MyCharacter = Cast<ABattery_CollectorCharacter>(UGameplayStatics::GetPlayerPawn(this, 0));
	if (MyCharacter)
	{
		//만약 케릭터의 파워가 0보다 크다면 (0이하로 떨어지지 않게 하려함
		if (MyCharacter->GetCurrentPower() > 0)
		{
			//DecayRate를 이용해 파워를 감소
			MyCharacter->UpdatePower(-DeltaTime * DecayRate * (MyCharacter->GetInitialPower()));
		}
	}
}

