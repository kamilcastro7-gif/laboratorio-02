#include "EnemigoAcuatico.h"
#include "UObject/ConstructorHelpers.h"

AEnemigoAcuatico::AEnemigoAcuatico() {
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Engine/BasicShapes/Sphere.Sphere"));
    if (MeshAsset.Succeeded()) MeshEnemigo->SetStaticMesh(MeshAsset.Object);
}

void AEnemigoAcuatico::Tick(float DeltaTime) {
    Super::Tick(DeltaTime);
    float T = GetGameTimeSinceCreation() * 2.0f;
    FVector Loc = GetActorLocation();
    Loc.X += FMath::Cos(T) * 3.0f;
    Loc.Y += FMath::Sin(T) * 3.0f; // Circular
    SetActorLocation(Loc);
}

void AEnemigoAcuatico::Mover() {}