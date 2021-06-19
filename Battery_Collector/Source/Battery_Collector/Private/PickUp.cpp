// Fill out your copyright notice in the Description page of Project Settings.


#include "PickUp.h"

// Sets default values
APickUp::APickUp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	//디폴트로  아이템이 활성화되있음
	bIsActive = true;

	//외관을 만듬 
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

//여러사람과 함께 공동프로젝트를 할 시 코드의 안전성을 위해 protected를 사용해 변수를 Get해옴
bool APickUp::IsActive()
{
	return bIsActive;
}

// 캡슐화된 변수를 수정할 수 있는 Set함수 
void APickUp::SetActive(bool NewPickupState)
{
	bIsActive = NewPickupState;
}

void APickUp::WasCollected_Implementation()
{
	//디버그 메시지 출력
	FString PickupDebugString = GetName();
	UE_LOG(LogClass, Log, TEXT("You have collected %s"), *PickupDebugString);
}
