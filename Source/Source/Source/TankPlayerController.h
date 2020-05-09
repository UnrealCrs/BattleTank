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

    UPROPERTY(EditAnywhere)
    float CrosshairXLocation = 0.5f;
    float CrosshairYLocation = 0.3333f;
};
