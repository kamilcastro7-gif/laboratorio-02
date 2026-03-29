#include "USFXLAB2GameMode.h"
#include "TimerManager.h"
#include "EngineUtils.h"

// --- INCLUDES DE TODAS TUS CLASES ---
#include "ETSoldado.h" 
#include "ETTanque.h" 
#include "ETCamion.h" 
#include "ETBlindado.h"

#include "EAHelicoptero.h"
#include "EAAvion.h"
#include "EADron.h"

#include "EABarco.h"
#include "EALancha.h"
#include "EAMotoAcuatica.h"

void AUSFXLAB2GameMode::BeginPlay() {
    Super::BeginPlay();
    FaseActual = 0;
    EjecutarFase();
}

void AUSFXLAB2GameMode::EjecutarFase() {
    LimpiarCuadrilla();
    UWorld* World = GetWorld();
    if (!World) return;

    // --- FASE 0: TERRESTRES (4 Clases) ---
    if (FaseActual == 0) {
        // Hacemos 4 iteraciones porque tienes 4 clases terrestres
        for (int i = 0; i < 4; i++) {
            FVector Loc(i * 400.0f, 0.0f, 150.0f);
            if (i == 0) World->SpawnActor<AETSoldado>(AETSoldado::StaticClass(), Loc, FRotator::ZeroRotator);
            if (i == 1) World->SpawnActor<AETTanque>(AETTanque::StaticClass(), Loc, FRotator::ZeroRotator);
            if (i == 2) World->SpawnActor<AETCamion>(AETCamion::StaticClass(), Loc, FRotator::ZeroRotator);
            if (i == 3) World->SpawnActor<AETBlindado>(AETBlindado::StaticClass(), Loc, FRotator::ZeroRotator);
        }
    }
    // --- FASE 1: AEREOS (3 Clases) ---
    else if (FaseActual == 1) {
        for (int i = 0; i < 3; i++) {
            FVector Loc(i * 400.0f, 0.0f, 300.0f); // Más alto por ser aéreos
            if (i == 0) World->SpawnActor<AEAHelicoptero>(AEAHelicoptero::StaticClass(), Loc, FRotator::ZeroRotator);
            if (i == 1) World->SpawnActor<AEAAvion>(AEAAvion::StaticClass(), Loc, FRotator::ZeroRotator);
            if (i == 2) World->SpawnActor<AEADron>(AEADron::StaticClass(), Loc, FRotator::ZeroRotator);
        }
    }
    // --- FASE 2: ACUATICOS (3 Clases) ---
    else if (FaseActual == 2) {
        for (int i = 0; i < 3; i++) {
            FVector Loc(i * 400.0f, 0.0f, 50.0f); // Más bajo por ser agua
            if (i == 0) World->SpawnActor<AEABarco>(AEABarco::StaticClass(), Loc, FRotator::ZeroRotator);
            if (i == 1) World->SpawnActor<AEALancha>(AEALancha::StaticClass(), Loc, FRotator::ZeroRotator);
            if (i == 2) World->SpawnActor<AEAMotoAcuatica>(AEAMotoAcuatica::StaticClass(), Loc, FRotator::ZeroRotator);
        }
    }

    // Rotar fase: 0 -> 1 -> 2
    FaseActual = (FaseActual + 1) % 3;

    // Siguiente cambio en 5 segundos
    GetWorldTimerManager().SetTimer(TimerHandle_Secuencia, this, &AUSFXLAB2GameMode::EjecutarFase, 5.0f, false);
}

void AUSFXLAB2GameMode::LimpiarCuadrilla() {
    UWorld* World = GetWorld();
    if (World) {
        // Borra absolutamente todo lo que herede de AEnemigo
        for (TActorIterator<AEnemigo> It(World); It; ++It) {
            It->Destroy();
        }
    }
}