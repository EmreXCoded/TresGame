#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TresAutoNavLinkExclusiveInterface.h"
#include "TresAutoNavLinkExclusiveVolumeInfo.h"
#include "TresAutoNavLinkExclusiveComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresAutoNavLinkExclusiveComponent : public UActorComponent, public ITresAutoNavLinkExclusiveInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresAutoNavLinkExclusiveVolumeInfo> ExclusiveInfo;
    
public:
    UTresAutoNavLinkExclusiveComponent();
    
    // Fix for true pure virtual functions not being implemented
};

