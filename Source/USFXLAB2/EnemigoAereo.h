#pragma once
#include "Enemigo.h"
#include "EnemigoAereo.generated.h"

UCLASS()
class USFXLAB2_API AEnemigoAereo : public AEnemigo {
    GENERATED_BODY()
public:
    AEnemigoAereo();
    virtual void Tick(float DeltaTime) override;
	virtual void Mover() override;
};