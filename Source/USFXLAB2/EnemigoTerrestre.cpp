#include "EnemigoTerrestre.h"
#include "UObject/ConstructorHelpers.h"

AEnemigoTerrestre::AEnemigoTerrestre() {
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Engine/BasicShapes/Cube.Cube"));
    if (MeshAsset.Succeeded()) MeshEnemigo->SetStaticMesh(MeshAsset.Object);
}

void AEnemigoTerrestre::Tick(float DeltaTime) {
    Super::Tick(DeltaTime);
    Mover();
}
void AEnemigoTerrestre::Mover() {
    FVector Loc = GetActorLocation();
    Loc.X += FMath::Cos(GetGameTimeSinceCreation() * 2.0f) * 5.0f; // Arriba/Abajo
    SetActorLocation(Loc);
}