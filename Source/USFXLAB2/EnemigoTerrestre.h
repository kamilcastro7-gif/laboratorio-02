#pragma once
#include "Enemigo.h"
#include "EnemigoTerrestre.generated.h"

UCLASS()
class USFXLAB2_API AEnemigoTerrestre : public AEnemigo {
    GENERATED_BODY()
public:
    AEnemigoTerrestre();
    virtual void Tick(float DeltaTime) override;
	virtual void Mover() override;
};