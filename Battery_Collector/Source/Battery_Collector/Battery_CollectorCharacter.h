// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Battery_CollectorCharacter.generated.h"

UCLASS(config=Game)
class ABattery_CollectorCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;

	// ������ Ž���� ��ü �ݸ���
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USphereComponent* CollectionSphere;
public:
	ABattery_CollectorCharacter();

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;

	//InitialPower ���� ������ �Լ�
	UFUNCTION(BlueprintPure, Category = "Power")
	float GetInitialPower();

	//���� Power ���� ������ �Լ�
	UFUNCTION(BlueprintPure, Category = "Power")
	float GetCurrentPower();

	//�ɸ����� ���� �Ŀ� ���� ������Ʈ��
	//PowerChange�� ���� �Ŀ����� ���� ������ ���� ���,���� �ϼ�����
	UFUNCTION(BlueprintCallable, Category = "Power")
	void UpdatePower(float PowerChange);

protected:

	/** Resets HMD orientation in VR. */
	void OnResetVR();

	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	/** 
	 * Called via input to turn at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	/** Handler for when a touch input begins. */
	void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);

	/** Handler for when a touch input stops. */
	void TouchStopped(ETouchIndex::Type FingerIndex, FVector Location);

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface

	//�ݷ��� �Ⱦ� �Լ�
	//->���Լ��� ��ư�� ������ ���� + CollectionSphere �ӿ� ����ִ� �������� ������
	UFUNCTION(BlueprintCallable,Category = "Pickups")
	void CollectionPickups();

	//�ɸ��� �Ŀ� �ʱⰪ
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Power", Meta = (BluePrintProtected = "true"))
	float initialPower;

	//�ɸ��� �ӵ��� �������� ��
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Power", Meta = (BluePrintProtected = "true"))
	float SpeedFactor;

	//�Ŀ� ����0 �϶��� �ɸ��� �ӵ�
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Power", Meta = (BluePrintProtected = "true"))
	float BaseFactor;

	//�ð�ȿ�� �Լ� (Bp���� ����� ����)
	UFUNCTION(BlueprintImplementableEvent, Category = "Power")
	void PowerChangeEffect();

private:
	//�ɸ����� �����Ŀ��� �����ϴ� ����
	UPROPERTY(VisibleAnywhere, Category = "Power")
	float CharacterPower;

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

	// Collision Sphere subObject�� ��ȯ����
	FORCEINLINE class USphereComponent* GetCollectionSphere() const { return CollectionSphere; }
};

