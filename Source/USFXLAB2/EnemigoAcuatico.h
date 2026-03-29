#pragma once
#include "Enemigo.h"
#include "EnemigoAcuatico.generated.h"

UCLASS()
class USFXLAB2_API AEnemigoAcuatico : public AEnemigo {
    GENERATED_BODY()
public:
    AEnemigoAcuatico();
    virtual void Tick(float DeltaTime) override;
	virtual void Mover() override;
};