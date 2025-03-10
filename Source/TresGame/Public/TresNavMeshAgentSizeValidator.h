#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "TresAgentInfoStruct.h"
#include "TresNavMeshAgentSizeValidator.generated.h"

class APawn;

UCLASS(Blueprintable)
class ATresNavMeshAgentSizeValidator : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<APawn>> PawnTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresAgentInfoStruct> PawnStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresAgentInfoStruct> NavMeshGroups;
    
    ATresNavMeshAgentSizeValidator();
};

