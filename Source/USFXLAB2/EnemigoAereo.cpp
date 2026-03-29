#include "EnemigoAereo.h"
#include "UObject/ConstructorHelpers.h"

AEnemigoAereo::AEnemigoAereo() {
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Engine/BasicShapes/Cone.Cone"));
    if (MeshAsset.Succeeded()) MeshEnemigo->SetStaticMesh(MeshAsset.Object);
}

void AEnemigoAereo::Tick(float DeltaTime) {
    Super::Tick(DeltaTime);
	Mover();
}

void AEnemigoAereo::Mover(){
    FVector Loc = GetActorLocation();
    Loc.Z += FMath::Sin(GetGameTimeSinceCreation() * 4.0f) * 4.0f; // Arriba/Abajo
    SetActorLocation(Loc);
}