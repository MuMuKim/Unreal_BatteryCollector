// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PickUp.generated.h"

UCLASS()
class BATTERY_COLLECTOR_API APickUp : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickUp();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//아이템의 메쉬를 반환해줌
	FORCEINLINE class UStaticMeshComponent* GetMesh() const { return PicupMesh; }

	//bIsActive의 상태를 반환해주는 함수
	UFUNCTION(BluePrintPure, Category = "Pickup")
	bool IsActive();
	//bIsActive를 다른 클래스에서 안전하게 값을 변경하게하는 함수
	UFUNCTION(BluePrintCallable, Category = "Pickup")
	void SetActive(bool NewPickupState);
protected:
	//기본값은 True, 아이템 사용이 불가능 할땐 False
	bool bIsActive;

private:
	//외관을 담당할 Mesh
	UPROPERTY(VisibleAnywhere, BluePrintReadOnly, Category = "Pickup", meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* PicupMesh;
	
	
};
