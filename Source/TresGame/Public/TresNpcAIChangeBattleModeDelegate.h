#pragma once
#include "CoreMinimal.h"
#include "TresNpcAIChangeBattleModeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresNpcAIChangeBattleMode, bool, bBattleMode);

