// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GunBase.h"
#include "Launcher.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLESHOOTER_API ALauncher : public AGunBase
{
    GENERATED_BODY()

public:
    ALauncher();

    virtual void Tick(float DeltaTime) override;

    virtual void Fire() override;

protected:
    virtual void BeginPlay() override;
};
