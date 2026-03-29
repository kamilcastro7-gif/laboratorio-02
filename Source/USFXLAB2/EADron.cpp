// Fill out your copyright notice in the Description page of Project Settings.


#include "EADron.h"

#include "UObject/ConstructorHelpers.h"

void AEADron::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover();
}

void AEADron::Mover(){
	FVector Loc = GetActorLocation();
	Loc.Z += FMath::Sin(GetGameTimeSinceCreation() * 4.0f) * 3.0f; // Arriba/Abajo
	SetActorLocation(Loc);
}