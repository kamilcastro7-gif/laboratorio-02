#include "Enemigo.h"

AEnemigo::AEnemigo() {
    PrimaryActorTick.bCanEverTick = true;
    MeshEnemigo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaBase"));
    RootComponent = MeshEnemigo;
}

void AEnemigo::Tick(float DeltaTime) {
    Super::Tick(DeltaTime);
    // No hace nada, cada clase hija hará su propia lógica de movimiento
    
}
void AEnemigo::Mover() {

}