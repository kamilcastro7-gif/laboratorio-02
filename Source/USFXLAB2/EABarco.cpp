// Fill out your copyright notice in the Description page of Project Settings.


#include "EABarco.h"
#include "UObject/ConstructorHelpers.h"

void AEABarco::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover();
}

void AEABarco::Mover(){
	float T = GetGameTimeSinceCreation() * 2.0f;
	FVector Loc = GetActorLocation();
	Loc.X += FMath::Cos(T) * 9.0f;
	Loc.Y += FMath::Sin(T) * 9.0f; // Circular
	SetActorLocation(Loc);
}

