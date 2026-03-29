// Fill out your copyright notice in the Description page of Project Settings.


#include "EAHelicoptero.h"
#include "UObject/ConstructorHelpers.h"

void AEAHelicoptero::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover();
}

void AEAHelicoptero::Mover(){
	FVector Loc = GetActorLocation();
	Loc.Z += FMath::Sin(GetGameTimeSinceCreation() * 3.0f) * 3.0f; // Arriba/Abajo
	SetActorLocation(Loc);
}
