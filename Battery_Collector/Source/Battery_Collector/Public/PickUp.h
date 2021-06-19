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

	// BlueprintNativeEvent = C++, BluePrint에서 함수의 몸체를 만들 수 있다.
	// ->C++에서 NativeEvent함수를 구현할 때는 _Implementation 키워드가 붙어야함.
	//아이템을 먹었을 때 호출하는 함수
	UFUNCTION(BlueprintNativeEvent)
	void WasCollected();
	virtual void WasCollected_Implementation(); // 자손	코드 클래스에서 오버라이딩 할 수있음

protected:
	//기본값은 True, 아이템 사용이 불가능 할땐 False
	bool bIsActive;

private:
	//외관을 담당할 Mesh
	UPROPERTY(VisibleAnywhere, BluePrintReadOnly, Category = "Pickup", meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* PicupMesh;
	
	
};
