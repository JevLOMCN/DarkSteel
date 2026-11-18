// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 16

// StaticClass @ 147c17e50

UClass * __cdecl AGameNetworkManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGameNetworkManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"GameNetworkManager",
               &Z_Registration_Info_UClass_AGameNetworkManager.InnerSingleton,
               StaticRegisterNativesAGameNetworkManager,0x368,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<AGameNetworkManager>,
               InternalVTableHelperCtorCaller<AGameNetworkManager>,local_res8,AInfo::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGameNetworkManager.InnerSingleton;
}

// AGameNetworkManager @ 147c2bf90

AGameNetworkManager * __thiscall
AGameNetworkManager::AGameNetworkManager(AGameNetworkManager *this,FVTableHelper *param_1)

{
  AInfo::AInfo((AInfo *)this,param_1);
  this->BadPacketLossThreshold = 0.05;
  this->_padding_ = (longlong)&___7AGameNetworkManager__6B_;
  (this->TimerHandle_UpdateNetSpeedsTimer).Handle = 0;
  this->SeverePacketLossThreshold = 0.15;
  return this;
}

// AGameNetworkManager @ 147c2bfe0

AGameNetworkManager * __thiscall
AGameNetworkManager::AGameNetworkManager(AGameNetworkManager *this,FObjectInitializer *param_1)

{
  AInfo::AInfo((AInfo *)this,param_1);
  this->BadPacketLossThreshold = 0.05;
  this->_padding_ = (longlong)&___7AGameNetworkManager__6B_;
  (this->TimerHandle_UpdateNetSpeedsTimer).Handle = 0;
  this->ClientAuthorativePosition = false;
  this->bMovementTimeDiscrepancyDetection = false;
  this->bMovementTimeDiscrepancyResolution = false;
  this->SeverePacketLossThreshold = 0.15;
  this->BadPingThreshold = 200;
  this->SeverePingThreshold = 500;
  this->MoveRepSize = 42.0;
  this->MAXPOSITIONERRORSQUARED = 3.0;
  this->MAXNEARZEROVELOCITYSQUARED = 9.0;
  this->CLIENTADJUSTUPDATECOST = 180.0;
  this->MAXCLIENTUPDATEINTERVAL = 0.25;
  this->MaxClientForcedUpdateDuration = 1.0;
  this->ServerForcedUpdateHitchThreshold = 0.15;
  this->ServerForcedUpdateHitchCooldown = 0.1;
  this->MaxMoveDeltaTime = 0.125;
  this->MaxClientSmoothingDeltaTime = 0.5;
  this->ClientNetSendMoveDeltaTime = 0.0166;
  this->ClientNetSendMoveDeltaTimeThrottled = 0.0222;
  this->ClientNetSendMoveDeltaTimeStationary = 0.0166;
  this->ClientNetSendMoveThrottleAtNetSpeed = 10000;
  this->ClientNetSendMoveThrottleOverPlayerCount = 10;
  this->ClientErrorUpdateRateLimit = 0.0;
  this->ClientNetCamUpdateDeltaTime = 0.0166;
  this->ClientNetCamUpdatePositionLimit = 1000.0;
  this->MovementTimeDiscrepancyMaxTimeMargin = 0.25;
  this->MovementTimeDiscrepancyMinTimeMargin = -0.25;
  this->MovementTimeDiscrepancyResolutionRate = 1.0;
  this->MovementTimeDiscrepancyDriftAllowance = 0.0;
  this->bMovementTimeDiscrepancyForceCorrectionsDuringResolution = false;
  this->bUseDistanceBasedRelevancy = true;
  return this;
}

// ~AGameNetworkManager @ 147c30f50

void __thiscall AGameNetworkManager::~AGameNetworkManager(AGameNetworkManager *this)

{
  this->_padding_ = (longlong)&___7AGameNetworkManager__6B_;
  AInfo::~AInfo((AInfo *)this);
  return;
}

// CalculatedNetSpeed @ 147c3b0b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall AGameNetworkManager::CalculatedNetSpeed(AGameNetworkManager *this)

{
  AGameModeBase *pAVar1;
  int iVar2;
  int iVar3;
  UWorld *pUVar4;
  
  pUVar4 = AActor::GetWorld((AActor *)this);
  pAVar1 = (pUVar4->AuthorityGameMode).field0_0x0.DebugPtr;
  iVar3 = 1;
  if (pAVar1 != (AGameModeBase *)0x0) {
    iVar2 = (**(code **)(pAVar1->_padding_ + 0x7d8))();
    iVar3 = 1;
    if (1 < iVar2) {
      iVar3 = iVar2;
    }
  }
  iVar3 = this->TotalNetBandwidth / iVar3;
  iVar2 = this->MaxDynamicBandwidth;
  if (iVar3 < this->MaxDynamicBandwidth) {
    iVar2 = iVar3;
  }
  iVar3 = this->MinDynamicBandwidth;
  if (this->MinDynamicBandwidth < iVar2) {
    iVar3 = iVar2;
  }
  return iVar3;
}

// EnableStandbyCheatDetection @ 147c4d820

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AGameNetworkManager::EnableStandbyCheatDetection(AGameNetworkManager *this,bool param_1)

{
  UNetDriver *pUVar1;
  byte bVar2;
  UWorld *pUVar3;
  byte bVar4;
  
  pUVar3 = AActor::GetWorld((AActor *)this);
  pUVar1 = (pUVar3->NetDriver).field0_0x0.DebugPtr;
  if (pUVar1 == (UNetDriver *)0x0) {
    return;
  }
  bVar4 = pUVar1->field_0x32a;
  if (param_1) {
    bVar4 = bVar4 & 0xbf;
    pUVar1->field_0x32a = bVar4;
    pUVar1->StandbyRxCheatTime = this->StandbyRxCheatTime;
    pUVar1->StandbyTxCheatTime = this->StandbyTxCheatTime;
    pUVar1->BadPingThreshold = this->BadPingThreshold;
    pUVar1->PercentMissingForRxStandby = this->PercentMissingForRxStandby;
    pUVar1->PercentMissingForTxStandby = this->PercentMissingForTxStandby;
    pUVar1->PercentForBadPing = this->PercentForBadPing;
    pUVar1->JoinInProgressStandbyWaitTime = this->JoinInProgressStandbyWaitTime;
    if (0.0 < this->StandbyRxCheatTime) {
      bVar2 = 0x20;
      goto LAB_147c4d8cb;
    }
  }
  bVar2 = 0;
LAB_147c4d8cb:
  pUVar1->field_0x32a = bVar4 & 0xdf | bVar2;
  if (4 < (byte)LogGameNetworkManager._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGameNetworkManager);
  }
  return;
}

// ExceedsAllowablePositionError @ 147c4da70

bool __thiscall
AGameNetworkManager::ExceedsAllowablePositionError
          (AGameNetworkManager *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  AGameNetworkManager *pAVar4;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  pAVar4 = GetDefault<AGameNetworkManager>((UClass *)this->_padding_);
  return (double)pAVar4->MAXPOSITIONERRORSQUARED < dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
}

// GetPrivateStaticClass @ 147c59e90

UClass * __cdecl AGameNetworkManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGameNetworkManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"GameNetworkManager",
               &Z_Registration_Info_UClass_AGameNetworkManager.InnerSingleton,
               StaticRegisterNativesAGameNetworkManager,0x368,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<AGameNetworkManager>,
               InternalVTableHelperCtorCaller<AGameNetworkManager>,local_res8,AInfo::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGameNetworkManager.InnerSingleton;
}

// IsInLowBandwidthMode @ 147c69230

bool __thiscall AGameNetworkManager::IsInLowBandwidthMode(AGameNetworkManager *this)

{
  return false;
}

// NetworkVelocityNearZero @ 147c6fed0

bool __thiscall
AGameNetworkManager::NetworkVelocityNearZero(AGameNetworkManager *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  AGameNetworkManager *pAVar4;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  pAVar4 = GetDefault<AGameNetworkManager>((UClass *)this->_padding_);
  return dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2 < (double)pAVar4->MAXNEARZEROVELOCITYSQUARED;
}

// PostInitializeComponents @ 147c720f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AGameNetworkManager::PostInitializeComponents(AGameNetworkManager *this)

{
  AActor::PostInitializeComponents((AActor *)this);
  this->AdjustedNetSpeed = this->MaxDynamicBandwidth;
  return;
}

// StandbyCheatDetected @ 147c87500

void __thiscall
AGameNetworkManager::StandbyCheatDetected(AGameNetworkManager *this,EStandbyType param_1)

{
  return;
}

// StaticRegisterNativesAGameNetworkManager @ 147c87f70

void __cdecl AGameNetworkManager::StaticRegisterNativesAGameNetworkManager(void)

{
  return;
}

// UpdateNetSpeeds @ 147c8eb30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AGameNetworkManager::UpdateNetSpeeds(AGameNetworkManager *this,bool param_1)

{
  code *pcVar1;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar2;
  bool bVar3;
  ENetMode EVar4;
  int iVar5;
  UWorld *pUVar6;
  FTimerManager *this_00;
  APlayerController *this_01;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_18;
  
  EVar4 = AActor::InternalGetNetMode((AActor *)this);
  if ((NM_DedicatedServer < EVar4) && (!param_1)) {
    pUVar6 = AActor::GetWorld((AActor *)this);
    if (pUVar6->TimeSeconds - (double)this->LastNetSpeedUpdateTime < __real_3ff0000000000000) {
      this_00 = AActor::GetWorldTimerManager((AActor *)this);
      FTimerManager::SetTimer<AGameNetworkManager>
                (this_00,&this->TimerHandle_UpdateNetSpeedsTimer,this,(pmf_ad46f124)0x147c33930,
                 __real_3f800000,param_1,__real_bf800000);
      return;
    }
    pUVar6 = AActor::GetWorld((AActor *)this);
    this->LastNetSpeedUpdateTime = (float)pUVar6->TimeSeconds;
    iVar5 = (**(code **)(this->_padding_ + 0x790))(this);
    if (4 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
    if (this->AdjustedNetSpeed != iVar5) {
      this->AdjustedNetSpeed = iVar5;
      pUVar6 = AActor::GetWorld((AActor *)this);
      UWorld::GetPlayerControllerIterator(pUVar6,&local_18);
      for (; (iVar5 = local_18.Index, pTVar2 = local_18.Container, -1 < local_18.Index &&
             (local_18.Index < (local_18.Container)->ArrayNum)); local_18.Index = local_18.Index + 1
          ) {
        if ((local_18.Index < 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this_01 = (APlayerController *)
                  FWeakObjectPtr::Get((FWeakObjectPtr *)
                                      ((pTVar2->AllocatorInstance).Data + (longlong)iVar5 * 8));
        if (this_01 != (APlayerController *)0x0) {
          APlayerController::SetNetSpeed(this_01,this->AdjustedNetSpeed);
        }
      }
    }
  }
  return;
}

// UpdateNetSpeedsTimer @ 147c8ece0

void __thiscall AGameNetworkManager::UpdateNetSpeedsTimer(AGameNetworkManager *this)

{
                    /* WARNING: Could not recover jumptable at 0x000147c8ece5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x760))(this,0);
  return;
}

// WithinUpdateDelayBounds @ 147c8ff30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
AGameNetworkManager::WithinUpdateDelayBounds
          (AGameNetworkManager *this,APlayerController *param_1,float param_2)

{
  UPlayer *pUVar1;
  UWorld *pUVar2;
  AGameNetworkManager *pAVar3;
  float fVar4;
  
  if ((param_1 == (APlayerController *)0x0) ||
     ((param_1->Player).field0_0x0.DebugPtr == (UPlayer *)0x0)) {
    return false;
  }
  pUVar2 = AActor::GetWorld((AActor *)param_1);
  fVar4 = (float)(pUVar2->TimeSeconds - (double)param_2);
  if (((this->ClientErrorUpdateRateLimit <= 0.0) || (this->ClientErrorUpdateRateLimit <= fVar4)) &&
     (pUVar1 = (param_1->Player).field0_0x0.DebugPtr,
     pAVar3 = GetDefault<AGameNetworkManager>((UClass *)this->_padding_),
     pAVar3->CLIENTADJUSTUPDATECOST / (float)pUVar1->CurrentNetSpeed <= fVar4)) {
    return false;
  }
  return true;
}

