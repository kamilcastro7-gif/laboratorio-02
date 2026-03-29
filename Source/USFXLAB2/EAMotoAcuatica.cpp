// Fill out your copyright notice in the Description page of Project Settings.


#include "EAMotoAcuatica.h"
#include "UObject/ConstructorHelpers.h"
 
void AEAMotoAcuatica::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	Mover();
}

void AEAMotoAcuatica::Mover(){
    float T = GetGameTimeSinceCreation() * 2.0f;
    FVector Loc = GetActorLocation();
    Loc.X += FMath::Cos(T) * 5.0f;
    Loc.Y += FMath::Sin(T) * 5.0f; // Circular
    SetActorLocation(Loc);
}