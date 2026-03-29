// Fill out your copyright notice in the Description page of Project Settings.


#include "EALancha.h"
#include "UObject/ConstructorHelpers.h"

void AEALancha::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover();
}

void AEALancha::Mover(){
	float T = GetGameTimeSinceCreation() * 2.0f;
	FVector Loc = GetActorLocation();
	Loc.X += FMath::Cos(T) * 7.0f;
	Loc.Y += FMath::Sin(T) * 7.0f; // Circular
	SetActorLocation(Loc);
}