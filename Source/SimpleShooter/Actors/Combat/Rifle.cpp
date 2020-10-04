// Fill out your copyright notice in the Description page of Project Settings.


#include "Rifle.h"

ARifle::ARifle()
{
}

void ARifle::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ARifle::Fire()
{
    UE_LOG(LogTemp, Warning, TEXT("Fire by Rifle"));
}

void ARifle::BeginPlay()
{
    Super::BeginPlay();
}
