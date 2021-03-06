// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Tank.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class SOURCE_API ATankPlayerController : public APlayerController
{
    GENERATED_BODY()

public:
    
    virtual void BeginPlay(); 

private:

    virtual void Tick(float DeltaTime) override;

    ATank* GetControlledTank() const;

    void AimTowardsCrosshair();

    bool GetSightRayHitLocation(FVector& HitLocation) const;

    bool GetLookVectorHitLocation(FVector LookDirection, FVector& HitLocation) const;

    bool GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection) const;

    UPROPERTY(EditAnywhere)
    float LineTraceRange = 1000000;

    UPROPERTY(EditAnywhere)
    float CrosshairYLocation = 0.3333f;

    UPROPERTY(EditAnywhere)
    float CrosshairXLocation = 0.5f;
    
};
