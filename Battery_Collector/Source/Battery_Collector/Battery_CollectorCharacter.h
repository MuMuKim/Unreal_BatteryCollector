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

	// 아이템 탐지용 구체 콜리전
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

	//InitialPower 값을 얻어오는 함수
	UFUNCTION(BlueprintPure, Category = "Power")
	float GetInitialPower();

	//현재 Power 값을 얻어오는 함수
	UFUNCTION(BlueprintPure, Category = "Power")
	float GetCurrentPower();

	//케릭터의 현재 파워 값을 업데이트함
	//PowerChange는 현재 파워값에 더할 값으로 값은 양수,음수 일수있음
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

	//콜렉션 픽업 함수
	//->이함수는 버튼을 누르면 동작 + CollectionSphere 속에 들어있는 아이템을 수거함
	UFUNCTION(BlueprintCallable,Category = "Pickups")
	void CollectionPickups();

	//케릭터 파워 초기값
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Power", Meta = (BluePrintProtected = "true"))
	float initialPower;

	//케릭터 속도에 곱해지는 값
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Power", Meta = (BluePrintProtected = "true"))
	float SpeedFactor;

	//파워 레벨0 일때의 케릭터 속도
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Power", Meta = (BluePrintProtected = "true"))
	float BaseFactor;

	//시각효과 함수 (Bp에서 기능을 만듦)
	UFUNCTION(BlueprintImplementableEvent, Category = "Power")
	void PowerChangeEffect();

private:
	//케릭터의 현재파워를 저장하는 변수
	UPROPERTY(VisibleAnywhere, Category = "Power")
	float CharacterPower;

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

	// Collision Sphere subObject를 반환해줌
	FORCEINLINE class USphereComponent* GetCollectionSphere() const { return CollectionSphere; }
};

