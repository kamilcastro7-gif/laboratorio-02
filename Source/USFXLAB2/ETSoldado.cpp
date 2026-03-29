// Fill out your copyright notice in the Description page of Project Settings.


#include "ETSoldado.h"
#include "UObject/ConstructorHelpers.h"

void AETSoldado::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover();
}
void AETSoldado::Mover() {
	FVector Loc = GetActorLocation();
	Loc.X += FMath::Cos(GetGameTimeSinceCreation() * 3.0f) * 3.0f; // Arriba/Abajo
	SetActorLocation(Loc);
}
