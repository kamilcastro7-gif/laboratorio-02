// Fill out your copyright notice in the Description page of Project Settings.


#include "EAAvion.h"

#include "UObject/ConstructorHelpers.h"

void AEAAvion::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover();
}

void AEAAvion::Mover() {
	FVector Loc = GetActorLocation();
	Loc.Z += FMath::Sin(GetGameTimeSinceCreation() * 2.0f) * 5.0f; // Arriba/Abajo
	SetActorLocation(Loc);
}