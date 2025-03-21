#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SaveInfo_e_ex046.generated.h"

USTRUCT(BlueprintType)
struct FSaveInfo_e_ex046 {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame)
    int32 RegionHitPoint[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint8 bInheritParam: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint8 bIsModeChangeRegionBreak: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector ModeChangePawnSpawnLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FRotator ModeChangePawnSpawnRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 ModeChangePawnAppearMode;
    
    TRESGAME_API FSaveInfo_e_ex046();
};

