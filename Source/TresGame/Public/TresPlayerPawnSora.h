#pragma once
#include "CoreMinimal.h"
#include "TresPlayerPawnBase.h"
#include "TresPlayerPawnSora.generated.h"

UCLASS(Blueprintable)
class ATresPlayerPawnSora : public ATresPlayerPawnBase {
    GENERATED_BODY()
public:
    ATresPlayerPawnSora();
    UFUNCTION(BlueprintCallable, Exec)
    void DebugNotifyCommandQuickBattle();
    
};

