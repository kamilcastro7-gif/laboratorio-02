// Fill out your copyright notice in the Description page of Project Settings.


#include "ETCamion.h"
#include "UObject/ConstructorHelpers.h"

void AETCamion::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover();
}

void AETCamion::Mover() {
	FVector Loc = GetActorLocation();
	Loc.X += FMath::Cos(GetGameTimeSinceCreation() * 1.0f) * 1.0f; // Arriba/Abajo
	SetActorLocation(Loc);
}