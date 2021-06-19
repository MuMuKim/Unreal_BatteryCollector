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

	//�������� �޽��� ��ȯ����
	FORCEINLINE class UStaticMeshComponent* GetMesh() const { return PicupMesh; }

	//bIsActive�� ���¸� ��ȯ���ִ� �Լ�
	UFUNCTION(BluePrintPure, Category = "Pickup")
	bool IsActive();
	//bIsActive�� �ٸ� Ŭ�������� �����ϰ� ���� �����ϰ��ϴ� �Լ�
	UFUNCTION(BluePrintCallable, Category = "Pickup")
	void SetActive(bool NewPickupState);

	// BlueprintNativeEvent = C++, BluePrint���� �Լ��� ��ü�� ���� �� �ִ�.
	// ->C++���� NativeEvent�Լ��� ������ ���� _Implementation Ű���尡 �پ����.
	//�������� �Ծ��� �� ȣ���ϴ� �Լ�
	UFUNCTION(BlueprintNativeEvent)
	void WasCollected();
	virtual void WasCollected_Implementation(); // �ڼ�	�ڵ� Ŭ�������� �������̵� �� ������

protected:
	//�⺻���� True, ������ ����� �Ұ��� �Ҷ� False
	bool bIsActive;

private:
	//�ܰ��� ����� Mesh
	UPROPERTY(VisibleAnywhere, BluePrintReadOnly, Category = "Pickup", meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* PicupMesh;
	
	
};
