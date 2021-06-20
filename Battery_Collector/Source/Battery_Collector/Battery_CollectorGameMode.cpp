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
	//DecayRate �ʱⰪ ����
	DecayRate = 0.01f;
}

void ABattery_CollectorGameMode::Tick(float DeltaTime)
{
	//�� �������� �θ𿡼� ���� ����Ǵ� �κ��� �׳� �Ѿ�� �ʰ���
	Super::Tick(DeltaTime);
	//�ɸ��� Ŭ������ ������ ���
	ABattery_CollectorCharacter* MyCharacter = Cast<ABattery_CollectorCharacter>(UGameplayStatics::GetPlayerPawn(this, 0));
	if (MyCharacter)
	{
		//���� �ɸ����� �Ŀ��� 0���� ũ�ٸ� (0���Ϸ� �������� �ʰ� �Ϸ���
		if (MyCharacter->GetCurrentPower() > 0)
		{
			//DecayRate�� �̿��� �Ŀ��� ����
			MyCharacter->UpdatePower(-DeltaTime * DecayRate * (MyCharacter->GetInitialPower()));
		}
	}
}

