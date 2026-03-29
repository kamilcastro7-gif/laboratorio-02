// Fill out your copyright notice in the Description page of Project Settings.


#include "ETTanque.h"
#include "UObject/ConstructorHelpers.h"

void AETTanque::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover();
}

void AETTanque::Mover() {
	FVector Loc = GetActorLocation();
	Loc.X += FMath::Cos(GetGameTimeSinceCreation() * 2.0f) * 2.0f; // Arriba/Abajo
	SetActorLocation(Loc);
}