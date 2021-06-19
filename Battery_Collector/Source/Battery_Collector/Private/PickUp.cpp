// Fill out your copyright notice in the Description page of Project Settings.


#include "PickUp.h"

// Sets default values
APickUp::APickUp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	//����Ʈ��  �������� Ȱ��ȭ������
	bIsActive = true;

	//�ܰ��� ���� 
	PicupMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PickupMesh"));
	RootComponent = PicupMesh;
}

// Called when the game starts or when spawned
void APickUp::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APickUp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//��������� �Բ� ����������Ʈ�� �� �� �ڵ��� �������� ���� protected�� ����� ������ Get�ؿ�
bool APickUp::IsActive()
{
	return bIsActive;
}

// ĸ��ȭ�� ������ ������ �� �ִ� Set�Լ� 
void APickUp::SetActive(bool NewPickupState)
{
	bIsActive = NewPickupState;
}

void APickUp::WasCollected_Implementation()
{
	//����� �޽��� ���
	FString PickupDebugString = GetName();
	UE_LOG(LogClass, Log, TEXT("You have collected %s"), *PickupDebugString);
}
