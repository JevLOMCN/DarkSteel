// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FUpdateStreamingStateParams @ 148ab36c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FUpdateStreamingStateParams * __thiscall
UWorldPartitionStreamingPolicy::FUpdateStreamingStateParams::FUpdateStreamingStateParams
          (FUpdateStreamingStateParams *this,FUpdateStreamingStateParams *param_1)

{
  bool bVar1;
  FWorldDataLayersEffectiveStates *pFVar2;
  double dVar3;
  
  this->World = param_1->World;
  this->RuntimeHash = param_1->RuntimeHash;
  this->bCanStream = param_1->bCanStream;
  this->bIsServer = param_1->bIsServer;
  this->bIsStreamingInEnabled = param_1->bIsStreamingInEnabled;
  this->bIsServerStreamingEnabled = param_1->bIsServerStreamingEnabled;
  this->bIsServerStreamingOutEnabled = param_1->bIsServerStreamingOutEnabled;
  this->bIsBlockingCausedByBadStreamingPerformance =
       param_1->bIsBlockingCausedByBadStreamingPerformance;
  this->bIsPlaybackEnabled = param_1->bIsPlaybackEnabled;
  this->bMatchStarted = param_1->bMatchStarted;
  this->bShouldMergeStreamingSourceInfo = param_1->bShouldMergeStreamingSourceInfo;
  this->PolicyUpdateStreamingStateEpoch = param_1->PolicyUpdateStreamingStateEpoch;
  this->DataLayersLogicOperator = param_1->DataLayersLogicOperator;
  dVar3 = (param_1->WorldPartitionInstanceTransform).Rotation.XY.m128d_f64[1];
  (this->WorldPartitionInstanceTransform).Rotation.XY.m128d_f64[0] =
       (param_1->WorldPartitionInstanceTransform).Rotation.XY.m128d_f64[0];
  (this->WorldPartitionInstanceTransform).Rotation.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_1->WorldPartitionInstanceTransform).Rotation.ZW.m128d_f64[1];
  (this->WorldPartitionInstanceTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->WorldPartitionInstanceTransform).Rotation.ZW.m128d_f64[0];
  (this->WorldPartitionInstanceTransform).Rotation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (param_1->WorldPartitionInstanceTransform).Translation.XY.m128d_f64[1];
  (this->WorldPartitionInstanceTransform).Translation.XY.m128d_f64[0] =
       (param_1->WorldPartitionInstanceTransform).Translation.XY.m128d_f64[0];
  (this->WorldPartitionInstanceTransform).Translation.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_1->WorldPartitionInstanceTransform).Translation.ZW.m128d_f64[1];
  (this->WorldPartitionInstanceTransform).Translation.ZW.m128d_f64[0] =
       (param_1->WorldPartitionInstanceTransform).Translation.ZW.m128d_f64[0];
  (this->WorldPartitionInstanceTransform).Translation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (param_1->WorldPartitionInstanceTransform).Scale3D.XY.m128d_f64[1];
  (this->WorldPartitionInstanceTransform).Scale3D.XY.m128d_f64[0] =
       (param_1->WorldPartitionInstanceTransform).Scale3D.XY.m128d_f64[0];
  (this->WorldPartitionInstanceTransform).Scale3D.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_1->WorldPartitionInstanceTransform).Scale3D.ZW.m128d_f64[1];
  (this->WorldPartitionInstanceTransform).Scale3D.ZW.m128d_f64[0] =
       (param_1->WorldPartitionInstanceTransform).Scale3D.ZW.m128d_f64[0];
  (this->WorldPartitionInstanceTransform).Scale3D.ZW.m128d_f64[1] = dVar3;
  this->CurrentState = param_1->CurrentState;
  this->ServerDisallowedStreamingOutDataLayers = param_1->ServerDisallowedStreamingOutDataLayers;
  this->FrameActivateCells = param_1->FrameActivateCells;
  this->FrameLoadCells = param_1->FrameLoadCells;
  this->FrameAnalysePerformanceCells = param_1->FrameAnalysePerformanceCells;
  pFVar2 = param_1->WorldDataLayersEffectiveStatesRef;
  (this->WorldDataLayersEffectiveStatesCopy).bIsSet = false;
  this->WorldDataLayersEffectiveStatesRef = pFVar2;
  bVar1 = (param_1->WorldDataLayersEffectiveStatesCopy).bIsSet;
  (this->WorldDataLayersEffectiveStatesCopy).bIsSet = bVar1;
  if (bVar1 != false) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
               &this->WorldDataLayersEffectiveStatesCopy,
               (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
               &param_1->WorldDataLayersEffectiveStatesCopy);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
              (&(this->WorldDataLayersEffectiveStatesCopy).TypedValue.
                ReplicatedEffectiveLoadedDataLayerNames,
               &(param_1->WorldDataLayersEffectiveStatesCopy).TypedValue.
                ReplicatedEffectiveLoadedDataLayerNames);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
              (&(this->WorldDataLayersEffectiveStatesCopy).TypedValue.
                LocalEffectiveActiveDataLayerNames,
               &(param_1->WorldDataLayersEffectiveStatesCopy).TypedValue.
                LocalEffectiveActiveDataLayerNames);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
              (&(this->WorldDataLayersEffectiveStatesCopy).TypedValue.
                LocalEffectiveLoadedDataLayerNames,
               &(param_1->WorldDataLayersEffectiveStatesCopy).TypedValue.
                LocalEffectiveLoadedDataLayerNames);
    (this->WorldDataLayersEffectiveStatesCopy).TypedValue.UpdateEpoch =
         (param_1->WorldDataLayersEffectiveStatesCopy).TypedValue.UpdateEpoch;
    (this->WorldDataLayersEffectiveStatesCopy).TypedValue.AllEffectiveActiveDataLayerNamesEpoch =
         (param_1->WorldDataLayersEffectiveStatesCopy).TypedValue.
         AllEffectiveActiveDataLayerNamesEpoch;
    (this->WorldDataLayersEffectiveStatesCopy).TypedValue.AllEffectiveLoadedDataLayerNamesEpoch =
         (param_1->WorldDataLayersEffectiveStatesCopy).TypedValue.
         AllEffectiveLoadedDataLayerNamesEpoch;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
              (&(this->WorldDataLayersEffectiveStatesCopy).TypedValue.
                AllEffectiveActiveDataLayerNames,
               &(param_1->WorldDataLayersEffectiveStatesCopy).TypedValue.
                AllEffectiveActiveDataLayerNames);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
              (&(this->WorldDataLayersEffectiveStatesCopy).TypedValue.
                AllEffectiveLoadedDataLayerNames,
               &(param_1->WorldDataLayersEffectiveStatesCopy).TypedValue.
                AllEffectiveLoadedDataLayerNames);
  }
  return this;
}

// FUpdateStreamingStateParams @ 148ab3890

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FUpdateStreamingStateParams * __thiscall
UWorldPartitionStreamingPolicy::FUpdateStreamingStateParams::FUpdateStreamingStateParams
          (FUpdateStreamingStateParams *this,UWorldPartitionStreamingPolicy *param_1,
          FWorldPartitionUpdateStreamingCurrentState *param_2)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  UWorld *pUVar4;
  FUpdateStreamingStateParams *pFVar5;
  longlong lVar6;
  UWorldPartition *pUVar7;
  TTransform<double> *pTVar8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar9;
  UClass *pUVar10;
  AWorldDataLayers *this_00;
  FWorldDataLayersEffectiveStates *pFVar11;
  UWorldPartition *this_01;
  
  pUVar4 = (UWorld *)(**(code **)(param_1->_padding_ + 0x180))(param_1);
  this->World = pUVar4;
  this_01 = (UWorldPartition *)0x0;
  if ((param_1->_padding_ & 0x10) == 0) {
    pUVar7 = (UWorldPartition *)param_1->_padding_;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3241921295901786207>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\WorldPartitionStreamingPolicy.h"
                       ,0x5f,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    pUVar7 = this_01;
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FUpdateStreamingStateParams *)(*pcVar1)();
      return pFVar5;
    }
  }
  this->RuntimeHash = (UWorldPartitionRuntimeHash *)(pUVar7->RuntimeHash).field0_0x0;
  if ((param_1->_padding_ & 0x10) == 0) {
    pUVar7 = (UWorldPartition *)param_1->_padding_;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3241921295901786207>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\WorldPartitionStreamingPolicy.h"
                       ,0x5f,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    pUVar7 = this_01;
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FUpdateStreamingStateParams *)(*pcVar1)();
      return pFVar5;
    }
  }
  bVar3 = UWorldPartition::CanStream(pUVar7);
  this->bCanStream = bVar3;
  if ((param_1->_padding_ & 0x10) == 0) {
    pUVar7 = (UWorldPartition *)param_1->_padding_;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3241921295901786207>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\WorldPartitionStreamingPolicy.h"
                       ,0x5f,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    pUVar7 = this_01;
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FUpdateStreamingStateParams *)(*pcVar1)();
      return pFVar5;
    }
  }
  bVar3 = UWorldPartition::IsServer(pUVar7);
  this->bIsServer = bVar3;
  if ((param_1->_padding_ & 0x10) == 0) {
    pUVar7 = (UWorldPartition *)param_1->_padding_;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3241921295901786207>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\WorldPartitionStreamingPolicy.h"
                       ,0x5f,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    pUVar7 = this_01;
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FUpdateStreamingStateParams *)(*pcVar1)();
      return pFVar5;
    }
  }
  bVar3 = UWorldPartition::IsStreamingInEnabled(pUVar7);
  this->bIsStreamingInEnabled = bVar3;
  if ((param_1->_padding_ & 0x10) == 0) {
    pUVar7 = (UWorldPartition *)param_1->_padding_;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3241921295901786207>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\WorldPartitionStreamingPolicy.h"
                       ,0x5f,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    pUVar7 = this_01;
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FUpdateStreamingStateParams *)(*pcVar1)();
      return pFVar5;
    }
  }
  bVar3 = UWorldPartition::IsServerStreamingEnabled(pUVar7);
  this->bIsServerStreamingEnabled = bVar3;
  if ((param_1->_padding_ & 0x10) == 0) {
    pUVar7 = (UWorldPartition *)param_1->_padding_;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3241921295901786207>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\WorldPartitionStreamingPolicy.h"
                       ,0x5f,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    pUVar7 = this_01;
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FUpdateStreamingStateParams *)(*pcVar1)();
      return pFVar5;
    }
  }
  bVar3 = UWorldPartition::IsServerStreamingOutEnabled(pUVar7);
  this->bIsServerStreamingOutEnabled = bVar3;
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                         ,0x8c,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FUpdateStreamingStateParams *)(*pcVar1)();
    return pFVar5;
  }
  lVar6 = (**(code **)(param_1->_padding_ + 0x180))(param_1);
  if (((*(int *)(lVar6 + 0x194) == 0) || (param_1->CurrentStreamingPerformance == Good)) ||
     (param_1->CriticalPerformanceBlockTillLevelStreamingCompletedEpoch != *(int *)(lVar6 + 0x198)))
  {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  this->bIsBlockingCausedByBadStreamingPerformance = bVar3;
  pUVar4 = (UWorld *)(**(code **)(param_1->_padding_ + 0x180))(param_1);
  if (((GUseReplayStreamingSources == 0) || (bVar3 = UWorld::IsPlayingReplay(pUVar4), !bVar3)) ||
     (pUVar7 = UWorld::GetWorldPartition(pUVar4), pUVar7 == (UWorldPartition *)0x0)) {
    bVar3 = false;
  }
  else {
    bVar3 = pUVar7->Replay != (AWorldPartitionReplay *)0x0;
  }
  this->bIsPlaybackEnabled = bVar3;
  lVar6 = (**(code **)(param_1->_padding_ + 0x180))(param_1);
  this->bMatchStarted = (bool)(*(byte *)(lVar6 + 0x18d) >> 2 & 1);
  this->bShouldMergeStreamingSourceInfo = param_1->bShouldMergeStreamingSourceInfo;
  this->PolicyUpdateStreamingStateEpoch = param_1->UpdateStreamingStateCounter;
  if ((param_1->_padding_ & 0x10) == 0) {
    pUVar7 = (UWorldPartition *)param_1->_padding_;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3241921295901786207>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\WorldPartitionStreamingPolicy.h"
                       ,0x5f,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    pUVar7 = this_01;
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FUpdateStreamingStateParams *)(*pcVar1)();
      return pFVar5;
    }
  }
  this->DataLayersLogicOperator = pUVar7->DataLayersLogicOperator;
  if ((param_1->_padding_ & 0x10) == 0) {
    pUVar7 = (UWorldPartition *)param_1->_padding_;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3241921295901786207>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\WorldPartitionStreamingPolicy.h"
                       ,0x5f,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    pUVar7 = this_01;
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FUpdateStreamingStateParams *)(*pcVar1)();
      return pFVar5;
    }
  }
  pTVar8 = UWorldPartition::GetInstanceTransform(pUVar7);
  dVar2 = (pTVar8->Rotation).XY.m128d_f64[1];
  (this->WorldPartitionInstanceTransform).Rotation.XY.m128d_f64[0] =
       (pTVar8->Rotation).XY.m128d_f64[0];
  (this->WorldPartitionInstanceTransform).Rotation.XY.m128d_f64[1] = dVar2;
  dVar2 = (pTVar8->Rotation).ZW.m128d_f64[1];
  (this->WorldPartitionInstanceTransform).Rotation.ZW.m128d_f64[0] =
       (pTVar8->Rotation).ZW.m128d_f64[0];
  (this->WorldPartitionInstanceTransform).Rotation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (pTVar8->Translation).XY.m128d_f64[1];
  (this->WorldPartitionInstanceTransform).Translation.XY.m128d_f64[0] =
       (pTVar8->Translation).XY.m128d_f64[0];
  (this->WorldPartitionInstanceTransform).Translation.XY.m128d_f64[1] = dVar2;
  dVar2 = (pTVar8->Translation).ZW.m128d_f64[1];
  (this->WorldPartitionInstanceTransform).Translation.ZW.m128d_f64[0] =
       (pTVar8->Translation).ZW.m128d_f64[0];
  (this->WorldPartitionInstanceTransform).Translation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (pTVar8->Scale3D).XY.m128d_f64[1];
  (this->WorldPartitionInstanceTransform).Scale3D.XY.m128d_f64[0] =
       (pTVar8->Scale3D).XY.m128d_f64[0];
  (this->WorldPartitionInstanceTransform).Scale3D.XY.m128d_f64[1] = dVar2;
  dVar2 = (pTVar8->Scale3D).ZW.m128d_f64[1];
  (this->WorldPartitionInstanceTransform).Scale3D.ZW.m128d_f64[0] =
       (pTVar8->Scale3D).ZW.m128d_f64[0];
  (this->WorldPartitionInstanceTransform).Scale3D.ZW.m128d_f64[1] = dVar2;
  this->CurrentState = param_2;
  pTVar9 = GetServerDisallowedStreamingOutDataLayers(param_1);
  this->ServerDisallowedStreamingOutDataLayers = pTVar9;
  this->FrameActivateCells = &param_1->FrameActivateCells;
  this->FrameLoadCells = &param_1->FrameLoadCells;
  this->FrameAnalysePerformanceCells = &param_1->FrameAnalysePerformanceCells;
  if ((param_1->_padding_ & 0x10) == 0) {
    this_01 = (UWorldPartition *)param_1->_padding_;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3241921295901786207>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\WorldPartitionStreamingPolicy.h"
                       ,0x5f,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FUpdateStreamingStateParams *)(*pcVar1)();
      return pFVar5;
    }
  }
  pUVar10 = Z_Construct_UClass_UWorld_NoRegister();
  pUVar4 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_01,pUVar10);
  this_00 = UWorld::GetWorldDataLayers(pUVar4);
  if ((this_00 == (AWorldDataLayers *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InWorldDataLayers",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\DataLayer\\WorldDataLayers.h"
                         ,0x17e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FUpdateStreamingStateParams *)(*pcVar1)();
    return pFVar5;
  }
  pFVar11 = AWorldDataLayers::GetEffectiveStates(this_00);
  this->WorldDataLayersEffectiveStatesRef = pFVar11;
  (this->WorldDataLayersEffectiveStatesCopy).bIsSet = false;
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                         ,0x50d,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FUpdateStreamingStateParams *)(*pcVar1)();
    return pFVar5;
  }
  bVar3 = UWorld::IsGameWorld(this->World);
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("World->IsGameWorld()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                         ,0x50e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FUpdateStreamingStateParams *)(*pcVar1)();
    return pFVar5;
  }
  return this;
}

// SetRequiredWorldDataLayersEffectiveStatesCopy @ 148adb310

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FUpdateStreamingStateParams * __thiscall
UWorldPartitionStreamingPolicy::FUpdateStreamingStateParams::
SetRequiredWorldDataLayersEffectiveStatesCopy(FUpdateStreamingStateParams *this,bool param_1)

{
  TOptional<FWorldDataLayersEffectiveStates> *this_00;
  FWorldDataLayersEffectiveStates *pFVar1;
  code *pcVar2;
  bool bVar3;
  FUpdateStreamingStateParams *pFVar4;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                       ,0x513,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FUpdateStreamingStateParams *)(*pcVar2)();
      return pFVar4;
    }
  }
  this_00 = &this->WorldDataLayersEffectiveStatesCopy;
  if (param_1) {
    pFVar1 = this->WorldDataLayersEffectiveStatesRef;
    if ((TOptional<FWorldDataLayersEffectiveStates> *)pFVar1 != this_00) {
      if ((this->WorldDataLayersEffectiveStatesCopy).bIsSet != false) {
        FWorldDataLayersEffectiveStates::~FWorldDataLayersEffectiveStates(&this_00->TypedValue);
      }
      FWorldDataLayersEffectiveStates::FWorldDataLayersEffectiveStates(&this_00->TypedValue,pFVar1);
      (this->WorldDataLayersEffectiveStatesCopy).bIsSet = true;
      return this;
    }
  }
  else if ((this->WorldDataLayersEffectiveStatesCopy).bIsSet != false) {
    FWorldDataLayersEffectiveStates::~FWorldDataLayersEffectiveStates(&this_00->TypedValue);
    (this->WorldDataLayersEffectiveStatesCopy).bIsSet = false;
  }
  return this;
}

