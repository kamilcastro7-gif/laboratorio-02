#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Enemigo.h"
#include "USFXLAB2GameMode.generated.h"

UCLASS()
class USFXLAB2_API AUSFXLAB2GameMode : public AGameModeBase {
    GENERATED_BODY()
public:
    virtual void BeginPlay() override;

    UPROPERTY() TArray<AEnemigo*> CuadrillaActiva;
    FTimerHandle TimerHandle_Secuencia;
    int32 FaseActual;

    void EjecutarFase();
    void LimpiarCuadrilla();
};