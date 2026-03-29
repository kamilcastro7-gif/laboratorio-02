#pragma once
#include "CoreMinimal.h"
#include "EnemigoAcuatico.h"
#include "EAMotoAcuatica.generated.h"

UCLASS()
class USFXLAB2_API AEAMotoAcuatica : public AEnemigoAcuatico { 
	GENERATED_BODY() 

	void Tick(float DeltaTime) override;
	void Mover() override;
};