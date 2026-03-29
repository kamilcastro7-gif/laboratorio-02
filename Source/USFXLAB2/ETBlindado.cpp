// Fill out your copyright notice in the Description page of Project Settings.


#include "ETBlindado.h"
#include "UObject/ConstructorHelpers.h"

void AETBlindado::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover();
}

void AETBlindado::Mover() {
	FVector Loc = GetActorLocation();
	Loc.X += FMath::Sin(GetGameTimeSinceCreation() * 4.0f) * 4.0f; // Arriba/Abajo
	SetActorLocation(Loc);
}
