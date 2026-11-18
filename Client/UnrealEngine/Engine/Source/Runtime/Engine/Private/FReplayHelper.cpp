// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 58

// ClearLevelStreamingState @ 147acac60

void __thiscall FReplayHelper::ClearLevelStreamingState(FReplayHelper *this)

{
  undefined1 *puVar1;
  int *piVar2;
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *this_00;
  TSet<ULevel_*,DefaultKeyFuncs<ULevel_*,0>,FDefaultSetAllocator> *this_01;
  int iVar3;
  bool bVar4;
  
  DestructItems<FReplayHelper::FLevelStatus,int>
            ((FLevelStatus *)(this->AllLevelStatuses).AllocatorInstance.Data,
             (this->AllLevelStatuses).ArrayNum);
  piVar2 = &(this->AllLevelStatuses).ArrayMax;
  (this->AllLevelStatuses).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->AllLevelStatuses).AllocatorInstance,0,piVar2);
  }
  this_00 = &this->LevelStatusesByName;
  bVar4 = 1 < *(int *)&(this->LevelStatusesByName).field_0x48;
  if (!bVar4) {
    TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                    *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->LevelStatusesByName).field_0x8);
  puVar1 = &(this->LevelStatusesByName).field_0xc;
  *(undefined4 *)&(this->LevelStatusesByName).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->LevelStatusesByName).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LevelStatusesByName).field_0x34 = 0;
  iVar3 = *(int *)&(this->LevelStatusesByName).field_0x2c;
  *(undefined4 *)&(this->LevelStatusesByName).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->LevelStatusesByName).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->LevelStatusesByName).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->LevelStatusesByName).field_0x48 = 1;
    TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
    Rehash((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
            *)this_00);
  }
  piVar2 = &(this->SeenLevelStatuses).ArrayMax;
  (this->SeenLevelStatuses).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->SeenLevelStatuses).AllocatorInstance,0,piVar2);
  }
  this_01 = &this->LevelsPendingFastForward;
  bVar4 = 1 < (this->LevelsPendingFastForward).HashSize;
  if (!bVar4) {
    TSet<ULevel_*,DefaultKeyFuncs<ULevel_*,0>,FDefaultSetAllocator>::UnhashElements(this_01);
  }
  puVar1 = &(this->LevelsPendingFastForward).Elements.field_0xc;
  *(undefined4 *)&(this->LevelsPendingFastForward).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this_01,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->LevelsPendingFastForward).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LevelsPendingFastForward).Elements.field_0x34 = 0;
  iVar3 = *(int *)&(this->LevelsPendingFastForward).Elements.field_0x2c;
  *(undefined4 *)&(this->LevelsPendingFastForward).Elements.field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->LevelsPendingFastForward).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->LevelsPendingFastForward).Elements.field_0x10,0);
  }
  if (bVar4) {
    (this->LevelsPendingFastForward).HashSize = 1;
    TSet<ULevel_*,DefaultKeyFuncs<ULevel_*,0>,FDefaultSetAllocator>::Rehash(this_01);
  }
  this->NumLevelsAddedThisFrame = 0;
  TSet<TTuple<ULevel_const_*,int>,TDefaultMapHashableKeyFuncs<ULevel_const_*,int,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<ULevel_const_*,int>,TDefaultMapHashableKeyFuncs<ULevel_const_*,int,0>,FDefaultSetAllocator>
           *)&this->LevelStatusIndexByLevel);
  return;
}

// FindOrAddLevelStatus @ 147ade6b0

FLevelStatus * __thiscall FReplayHelper::FindOrAddLevelStatus(FReplayHelper *this,FString *param_1)

{
  int *piVar1;
  TArray<FReplayHelper::FLevelStatus,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FLevelStatus *pFVar7;
  int *piVar8;
  longlong lVar9;
  uint *puVar10;
  wchar_t *pwVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  uint local_res8 [2];
  TPairInitializer<FString_&&,int_const_&> local_res10;
  FString *local_48;
  uint *local_40;
  
  iVar6 = (param_1->Data).ArrayNum;
  if (iVar6 == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar13 = 0;
  uVar5 = iVar6 - 1;
  if (iVar6 == 0) {
    uVar5 = uVar13;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar5,pwVar11);
  iVar6 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                      *)&this->LevelStatusesByName,uVar5,param_1);
  pTVar2 = &this->AllLevelStatuses;
  if (iVar6 != -1) {
    lVar9 = (longlong)iVar6 * 0x20 + *(longlong *)&this->LevelStatusesByName;
    puVar10 = (uint *)(lVar9 + 0x10);
    if (lVar9 == 0) {
      puVar10 = (uint *)0x0;
    }
    if (puVar10 != (uint *)0x0) {
      uVar5 = *puVar10;
      if ((int)uVar5 < (this->AllLevelStatuses).ArrayNum) {
        uVar13 = ~uVar5 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FLevelStatus *)(*pcVar3)();
        return pFVar7;
      }
      pFVar12 = (pTVar2->AllocatorInstance).Data;
      goto LAB_147ade8da;
    }
  }
  piVar8 = &(this->AllLevelStatuses).ArrayNum;
  piVar1 = &(this->AllLevelStatuses).ArrayMax;
  uVar5 = *piVar8;
  if (uVar5 == *piVar1) {
    uVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar2->AllocatorInstance,piVar1);
    *piVar8 = uVar5;
  }
  pFVar12 = (pTVar2->AllocatorInstance).Data;
  *piVar8 = uVar5 + 1;
  local_res10.Value = (int *)((longlong)(int)uVar5 * 0x18);
  pFVar12 = pFVar12 + (longlong)local_res10.Value;
  ::FString::FString((FString *)pFVar12,param_1);
  *(undefined4 *)(pFVar12 + 0x10) = 0xffffffff;
  *(undefined2 *)(pFVar12 + 0x14) = 0;
  if ((int)uVar5 < *piVar8) {
    uVar13 = ~uVar5 >> 0x1f;
  }
  local_res8[0] = uVar5;
  if ((uVar13 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FLevelStatus *)(*pcVar3)();
    return pFVar7;
  }
  *(uint *)((pTVar2->AllocatorInstance).Data + 0x10 + (longlong)local_res10.Value) = uVar5;
  local_40 = local_res8;
  local_48 = param_1;
  TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FString_&&,int_const_&>_>
            ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
              *)&this->LevelStatusesByName,&local_res10,(bool *)&local_48);
  uVar5 = local_res8[0];
  this->NumLevelsAddedThisFrame = this->NumLevelsAddedThisFrame + 1;
  uVar13 = 0;
  if ((int)local_res8[0] < *piVar8) {
    uVar13 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FLevelStatus *)(*pcVar3)();
    return pFVar7;
  }
  pFVar12 = (pTVar2->AllocatorInstance).Data;
LAB_147ade8da:
  return (FLevelStatus *)(pFVar12 + (longlong)(int)uVar5 * 0x18);
}

// FindOrAddLevelStatus @ 147ade910

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FLevelStatus * __thiscall FReplayHelper::FindOrAddLevelStatus(FReplayHelper *this,ULevel *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  FLevelStatus *pFVar7;
  uint *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint uVar11;
  TPairInitializer<ULevel_const_*_&&,int_const_&> local_res8;
  int **local_28;
  int *local_20;
  FString local_18;
  
  uVar11 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
           -0x7a143595;
  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
  if (*(int *)&(this->LevelStatusIndexByLevel).field_0x8 !=
      *(int *)&(this->LevelStatusIndexByLevel).field_0x34) {
    puVar10 = *(undefined1 **)&(this->LevelStatusIndexByLevel).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->LevelStatusIndexByLevel).field_0x38;
    }
    iVar5 = *(int *)(puVar10 +
                    (ulonglong)
                    (*(int *)&(this->LevelStatusIndexByLevel).field_0x48 - 1U &
                    (uVar11 >> 0x10 ^ uVar11)) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->LevelStatusIndexByLevel).field_0x0;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(ULevel **)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          puVar8 = (uint *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar8 = (uint *)0x0;
          }
          if (puVar8 != (uint *)0x0) {
            uVar11 = *puVar8;
            uVar9 = 0;
            if ((int)uVar11 < (this->AllLevelStatuses).ArrayNum) {
              uVar9 = ~uVar11 >> 0x1f;
            }
            if (uVar9 == 0) {
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FLevelStatus *)(*pcVar3)();
                return pFVar7;
              }
            }
            return (FLevelStatus *)
                   ((this->AllLevelStatuses).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x18);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  pFVar6 = GetLevelPackageName(&local_18,param_1);
  pFVar7 = FindOrAddLevelStatus(this,pFVar6);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  local_20 = &pFVar7->LevelIndex;
  local_28 = &local_res8.Value;
  local_res8.Value = (int *)param_1;
  TSet<TTuple<ULevel_const_*,int>,TDefaultMapHashableKeyFuncs<ULevel_const_*,int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<ULevel_const_*_&&,int_const_&>_>
            ((TSet<TTuple<ULevel_const_*,int>,TDefaultMapHashableKeyFuncs<ULevel_const_*,int,0>,FDefaultSetAllocator>
              *)&this->LevelStatusIndexByLevel,&local_res8,(bool *)&local_28);
  return pFVar7;
}

// GetLevelStatus @ 147ae89b0

FLevelStatus * __thiscall FReplayHelper::GetLevelStatus(FReplayHelper *this,FString *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  FLevelStatus *pFVar6;
  
  puVar5 = (uint *)TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                   ::FindChecked((TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                                  *)&this->LevelStatusesByName,param_1);
  uVar1 = *puVar5;
  uVar4 = 0;
  if ((int)uVar1 < (this->AllLevelStatuses).ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FLevelStatus *)(*pcVar2)();
      return pFVar6;
    }
  }
  return (FLevelStatus *)
         ((this->AllLevelStatuses).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x18);
}

// GetLevelStatus @ 147ae8a40

FLevelStatus * __thiscall FReplayHelper::GetLevelStatus(FReplayHelper *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FLevelStatus *pFVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_1 - 1;
  uVar4 = 0;
  if ((int)uVar5 < (this->SeenLevelStatuses).ArrayNum) {
    uVar4 = ~uVar5 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FLevelStatus *)(*pcVar1)();
      return pFVar3;
    }
  }
  uVar4 = *(uint *)((this->SeenLevelStatuses).AllocatorInstance.Data + (longlong)(int)uVar5 * 4);
  uVar5 = 0;
  if ((int)uVar4 < (this->AllLevelStatuses).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FLevelStatus *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FLevelStatus *)
         ((this->AllLevelStatuses).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x18);
}

// FReplayHelper @ 148442060

FReplayHelper * __thiscall FReplayHelper::FReplayHelper(FReplayHelper *this)

{
  *(undefined8 *)&this->OnReplayRecordError = 0;
  *(undefined8 *)&(this->OnReplayRecordError).field_0x8 = 0;
  *(undefined4 *)&(this->OnReplayRecordError).field_0x10 = 0;
  *(undefined8 *)&this->OnReplayPlaybackError = 0;
  *(undefined8 *)&(this->OnReplayPlaybackError).field_0x8 = 0;
  *(undefined4 *)&(this->OnReplayPlaybackError).field_0x10 = 0;
  *(undefined8 *)&this->ObjectsWithExternalDataMap = 0;
  *(undefined8 *)&(this->ObjectsWithExternalDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->ObjectsWithExternalDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->ObjectsWithExternalDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->ObjectsWithExternalDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ObjectsWithExternalDataMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ObjectsWithExternalDataMap).field_0x34 = 0;
  *(undefined8 *)&(this->ObjectsWithExternalDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->ObjectsWithExternalDataMap).field_0x48 = 0;
  *(undefined8 *)&this->ExternalDataMap = 0;
  *(undefined8 *)&(this->ExternalDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->ExternalDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->ExternalDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->ExternalDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExternalDataMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExternalDataMap).field_0x34 = 0;
  *(undefined8 *)&(this->ExternalDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->ExternalDataMap).field_0x48 = 0;
  FURL::FURL(&this->DemoURL,(wchar_t *)0x0);
  (this->ActiveReplayName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveReplayName).Data.ArrayNum = 0;
  (this->ActiveReplayName).Data.ArrayMax = 0;
  (this->ReplayStreamer).Object = (INetworkReplayStreamer *)0x0;
  (this->ReplayStreamer).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->World).WeakPtr = (FWeakObjectPtr)0x0;
  (this->LevelNamesAndTimes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LevelNamesAndTimes).ArrayNum = 0;
  (this->LevelNamesAndTimes).ArrayMax = 0;
  this->CurrentLevelIndex = 0;
  this->DemoFrameNum = 0;
  this->DemoCurrentTime = 0.0;
  this->DemoTotalTime = 0.0;
  this->LastCheckpointTime = 0.0;
  this->LatestReadFrameTime = 0.0;
  this->bWasStartRecordingSuccessful = false;
  this->bIsWaitingForStream = false;
  this->bIsLoadingCheckpoint = false;
  this->bHasLevelStreamingFixes = false;
  this->bHasDeltaCheckpoints = false;
  this->bHasGameSpecificFrameData = false;
  this->bPauseRecording = false;
  this->bRecordMapChanges = false;
  this->CheckpointSaveMaxMSPerFrame = 0.0;
  FNetworkDemoHeader::FNetworkDemoHeader(&this->PlaybackDemoHeader);
  (this->CheckpointSaveContext).CheckpointSaveState = Idle;
  *(undefined8 *)&(this->CheckpointSaveContext).CheckpointAckState.NetGUIDAckStatus = 0;
  *(undefined8 *)&(this->CheckpointSaveContext).CheckpointAckState.NetGUIDAckStatus.field_0x8 = 0;
  *(undefined8 *)&(this->CheckpointSaveContext).CheckpointAckState.NetGUIDAckStatus.field_0x20 = 0;
  *(undefined4 *)&(this->CheckpointSaveContext).CheckpointAckState.NetGUIDAckStatus.field_0x28 = 0;
  *(undefined4 *)&(this->CheckpointSaveContext).CheckpointAckState.NetGUIDAckStatus.field_0x2c =
       0x80;
  *(undefined4 *)&(this->CheckpointSaveContext).CheckpointAckState.NetGUIDAckStatus.field_0x30 =
       0xffffffff;
  *(undefined4 *)&(this->CheckpointSaveContext).CheckpointAckState.NetGUIDAckStatus.field_0x34 = 0;
  *(undefined8 *)&(this->CheckpointSaveContext).CheckpointAckState.NetGUIDAckStatus.field_0x40 = 0;
  *(undefined4 *)&(this->CheckpointSaveContext).CheckpointAckState.NetGUIDAckStatus.field_0x48 = 0;
  *(undefined8 *)
   &(this->CheckpointSaveContext).CheckpointAckState.NetFieldExportGroupPathAcked.Elements = 0;
  *(undefined8 *)
   &(this->CheckpointSaveContext).CheckpointAckState.NetFieldExportGroupPathAcked.Elements.field_0x8
       = 0;
  *(undefined8 *)
   &(this->CheckpointSaveContext).CheckpointAckState.NetFieldExportGroupPathAcked.Elements.
    field_0x20 = 0;
  *(undefined4 *)
   &(this->CheckpointSaveContext).CheckpointAckState.NetFieldExportGroupPathAcked.Elements.
    field_0x28 = 0;
  *(undefined4 *)
   &(this->CheckpointSaveContext).CheckpointAckState.NetFieldExportGroupPathAcked.Elements.
    field_0x2c = 0x80;
  *(undefined4 *)
   &(this->CheckpointSaveContext).CheckpointAckState.NetFieldExportGroupPathAcked.Elements.
    field_0x30 = 0xffffffff;
  *(undefined4 *)
   &(this->CheckpointSaveContext).CheckpointAckState.NetFieldExportGroupPathAcked.Elements.
    field_0x34 = 0;
  (this->CheckpointSaveContext).CheckpointAckState.NetFieldExportGroupPathAcked.Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->CheckpointSaveContext).CheckpointAckState.NetFieldExportGroupPathAcked.HashSize = 0;
  *(undefined8 *)&(this->CheckpointSaveContext).CheckpointAckState.NetFieldExportAcked.Elements = 0;
  *(undefined8 *)
   &(this->CheckpointSaveContext).CheckpointAckState.NetFieldExportAcked.Elements.field_0x8 = 0;
  *(undefined8 *)
   &(this->CheckpointSaveContext).CheckpointAckState.NetFieldExportAcked.Elements.field_0x20 = 0;
  *(undefined4 *)
   &(this->CheckpointSaveContext).CheckpointAckState.NetFieldExportAcked.Elements.field_0x28 = 0;
  *(undefined4 *)
   &(this->CheckpointSaveContext).CheckpointAckState.NetFieldExportAcked.Elements.field_0x2c = 0x80;
  *(undefined4 *)
   &(this->CheckpointSaveContext).CheckpointAckState.NetFieldExportAcked.Elements.field_0x30 =
       0xffffffff;
  *(undefined4 *)
   &(this->CheckpointSaveContext).CheckpointAckState.NetFieldExportAcked.Elements.field_0x34 = 0;
  (this->CheckpointSaveContext).CheckpointAckState.NetFieldExportAcked.Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->CheckpointSaveContext).CheckpointAckState.NetFieldExportAcked.HashSize = 0;
  (this->CheckpointSaveContext).PendingCheckpointActors.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CheckpointSaveContext).PendingCheckpointActors.ArrayNum = 0;
  (this->CheckpointSaveContext).PendingCheckpointActors.ArrayMax = 0;
  *(undefined8 *)&(this->CheckpointSaveContext).PendingActorToIndex = 0;
  *(undefined8 *)&(this->CheckpointSaveContext).PendingActorToIndex.field_0x8 = 0;
  *(undefined8 *)&(this->CheckpointSaveContext).PendingActorToIndex.field_0x20 = 0;
  *(undefined4 *)&(this->CheckpointSaveContext).PendingActorToIndex.field_0x28 = 0;
  *(undefined4 *)&(this->CheckpointSaveContext).PendingActorToIndex.field_0x2c = 0x80;
  *(undefined4 *)&(this->CheckpointSaveContext).PendingActorToIndex.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CheckpointSaveContext).PendingActorToIndex.field_0x34 = 0;
  *(undefined8 *)&(this->CheckpointSaveContext).PendingActorToIndex.field_0x40 = 0;
  *(undefined4 *)&(this->CheckpointSaveContext).PendingActorToIndex.field_0x48 = 0;
  (this->CheckpointSaveContext).TotalCheckpointSaveTimeSeconds = 0.0;
  (this->CheckpointSaveContext).TotalCheckpointReplicationTimeSeconds = 0.0;
  (this->CheckpointSaveContext).bWriteCheckpointOffset = false;
  (this->CheckpointSaveContext).TotalCheckpointSaveFrames = 0;
  (this->CheckpointSaveContext).TotalCheckpointActors = 0;
  (this->CheckpointSaveContext).CheckpointOffset = 0;
  (this->CheckpointSaveContext).GuidCacheSize = 0;
  FDeltaCheckpointData::FDeltaCheckpointData(&(this->CheckpointSaveContext).DeltaCheckpointData);
  (this->CheckpointSaveContext).DeltaChannelCloseKeys.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CheckpointSaveContext).DeltaChannelCloseKeys.ArrayNum = 0;
  (this->CheckpointSaveContext).DeltaChannelCloseKeys.ArrayMax = 0;
  (this->CheckpointSaveContext).NetGuidCacheSnapshot.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CheckpointSaveContext).NetGuidCacheSnapshot.ArrayNum = 0;
  (this->CheckpointSaveContext).NetGuidCacheSnapshot.ArrayMax = 0;
  (this->CheckpointSaveContext).NextAmortizedItem = 0;
  (this->CheckpointSaveContext).NumNetGuidsForRecording = 0;
  (this->CheckpointSaveContext).NetGuidsCountPos = 0;
  (this->CheckpointSaveContext).CheckpointDeletedNetStartupActors.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CheckpointSaveContext).CheckpointDeletedNetStartupActors.ArrayNum = 0;
  (this->CheckpointSaveContext).CheckpointDeletedNetStartupActors.ArrayMax = 0;
  *(undefined8 *)&(this->CheckpointSaveContext).NameTableMap = 0;
  *(undefined8 *)&(this->CheckpointSaveContext).NameTableMap.field_0x8 = 0;
  *(undefined8 *)&(this->CheckpointSaveContext).NameTableMap.field_0x20 = 0;
  *(undefined4 *)&(this->CheckpointSaveContext).NameTableMap.field_0x28 = 0;
  *(undefined4 *)&(this->CheckpointSaveContext).NameTableMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->CheckpointSaveContext).NameTableMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CheckpointSaveContext).NameTableMap.field_0x34 = 0;
  *(undefined8 *)&(this->CheckpointSaveContext).NameTableMap.field_0x40 = 0;
  *(undefined4 *)&(this->CheckpointSaveContext).NameTableMap.field_0x48 = 0;
  FDeltaCheckpointData::FDeltaCheckpointData(&this->RecordingDeltaCheckpointData);
  (this->PlaybackDeltaCheckpointData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlaybackDeltaCheckpointData).ArrayNum = 0;
  (this->PlaybackDeltaCheckpointData).ArrayMax = 0;
  *(undefined8 *)&(this->UniqueStreamingLevels).Elements = 0;
  *(undefined8 *)&(this->UniqueStreamingLevels).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->UniqueStreamingLevels).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->UniqueStreamingLevels).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->UniqueStreamingLevels).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->UniqueStreamingLevels).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UniqueStreamingLevels).Elements.field_0x34 = 0;
  (this->UniqueStreamingLevels).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->UniqueStreamingLevels).HashSize = 0;
  *(undefined8 *)&(this->NewStreamingLevelsThisFrame).Elements = 0;
  *(undefined8 *)&(this->NewStreamingLevelsThisFrame).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->NewStreamingLevelsThisFrame).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->NewStreamingLevelsThisFrame).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->NewStreamingLevelsThisFrame).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->NewStreamingLevelsThisFrame).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NewStreamingLevelsThisFrame).Elements.field_0x34 = 0;
  (this->NewStreamingLevelsThisFrame).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->NewStreamingLevelsThisFrame).HashSize = 0;
  (this->QueuedDemoPackets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueuedDemoPackets).ArrayNum = 0;
  (this->QueuedDemoPackets).ArrayMax = 0;
  (this->QueuedCheckpointPackets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueuedCheckpointPackets).ArrayNum = 0;
  (this->QueuedCheckpointPackets).ArrayMax = 0;
  (this->AllLevelStatuses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllLevelStatuses).ArrayNum = 0;
  (this->AllLevelStatuses).ArrayMax = 0;
  *(undefined8 *)&this->LevelStatusesByName = 0;
  *(undefined8 *)&(this->LevelStatusesByName).field_0x8 = 0;
  *(undefined8 *)&(this->LevelStatusesByName).field_0x20 = 0;
  *(undefined4 *)&(this->LevelStatusesByName).field_0x28 = 0;
  *(undefined4 *)&(this->LevelStatusesByName).field_0x2c = 0x80;
  *(undefined4 *)&(this->LevelStatusesByName).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LevelStatusesByName).field_0x34 = 0;
  *(undefined8 *)&(this->LevelStatusesByName).field_0x40 = 0;
  *(undefined4 *)&(this->LevelStatusesByName).field_0x48 = 0;
  *(undefined8 *)&this->LevelStatusIndexByLevel = 0;
  *(undefined8 *)&(this->LevelStatusIndexByLevel).field_0x8 = 0;
  *(undefined8 *)&(this->LevelStatusIndexByLevel).field_0x20 = 0;
  *(undefined4 *)&(this->LevelStatusIndexByLevel).field_0x28 = 0;
  *(undefined4 *)&(this->LevelStatusIndexByLevel).field_0x2c = 0x80;
  *(undefined4 *)&(this->LevelStatusIndexByLevel).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LevelStatusIndexByLevel).field_0x34 = 0;
  *(undefined8 *)&(this->LevelStatusIndexByLevel).field_0x40 = 0;
  *(undefined4 *)&(this->LevelStatusIndexByLevel).field_0x48 = 0;
  *(undefined8 *)&this->WeakLevelsByName = 0;
  *(undefined8 *)&(this->WeakLevelsByName).field_0x8 = 0;
  *(undefined8 *)&(this->WeakLevelsByName).field_0x20 = 0;
  *(undefined4 *)&(this->WeakLevelsByName).field_0x28 = 0;
  *(undefined4 *)&(this->WeakLevelsByName).field_0x2c = 0x80;
  *(undefined4 *)&(this->WeakLevelsByName).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WeakLevelsByName).field_0x34 = 0;
  *(undefined8 *)&(this->WeakLevelsByName).field_0x40 = 0;
  *(undefined4 *)&(this->WeakLevelsByName).field_0x48 = 0;
  (this->SeenLevelStatuses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SeenLevelStatuses).ArrayNum = 0;
  (this->SeenLevelStatuses).ArrayMax = 0;
  *(undefined8 *)&(this->LevelsPendingFastForward).Elements = 0;
  *(undefined8 *)&(this->LevelsPendingFastForward).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->LevelsPendingFastForward).Elements.field_0x20 = 0;
  this->NumLevelsAddedThisFrame = 0;
  *(undefined4 *)&(this->LevelsPendingFastForward).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->LevelsPendingFastForward).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->LevelsPendingFastForward).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LevelsPendingFastForward).Elements.field_0x34 = 0;
  (this->LevelsPendingFastForward).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->LevelsPendingFastForward).HashSize = 0;
  (this->ResultManager).ResultHandlers.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Net::FNetResultHandler_*>)0x0;
  this->bPendingCheckpointRequest = false;
  (this->ResultManager).ResultHandlers.ArrayNum = 0;
  (this->ResultManager).ResultHandlers.ArrayMax = 8;
  (this->ResultManager).OwnedResultHandlers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResultManager).OwnedResultHandlers.ArrayNum = 0;
  (this->ResultManager).OwnedResultHandlers.ArrayMax = 0;
  *(undefined8 *)&(this->ResultManager).UnhandledResultCallback = 0;
  *(undefined8 *)&(this->ResultManager).UnhandledResultCallback.field_0x28 = 0;
  *(undefined8 *)&this->ExternalDataToObjectMap = 0;
  *(undefined8 *)&(this->ExternalDataToObjectMap).field_0x8 = 0;
  *(undefined8 *)&(this->ExternalDataToObjectMap).field_0x20 = 0;
  *(undefined4 *)&(this->ExternalDataToObjectMap).field_0x28 = 0;
  *(undefined4 *)&(this->ExternalDataToObjectMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExternalDataToObjectMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExternalDataToObjectMap).field_0x34 = 0;
  *(undefined8 *)&(this->ExternalDataToObjectMap).field_0x40 = 0;
  *(undefined4 *)&(this->ExternalDataToObjectMap).field_0x48 = 0;
  *(undefined8 *)&this->PlaybackFrames = 0;
  *(undefined8 *)&(this->PlaybackFrames).field_0x8 = 0;
  *(undefined8 *)&(this->PlaybackFrames).field_0x20 = 0;
  *(undefined4 *)&(this->PlaybackFrames).field_0x28 = 0;
  *(undefined4 *)&(this->PlaybackFrames).field_0x2c = 0x80;
  *(undefined4 *)&(this->PlaybackFrames).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PlaybackFrames).field_0x34 = 0;
  *(undefined8 *)&(this->PlaybackFrames).field_0x40 = 0;
  *(undefined4 *)&(this->PlaybackFrames).field_0x48 = 0;
  (this->RecordingDeletedNetStartupActors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RecordingDeletedNetStartupActors).ArrayNum = 0;
  (this->RecordingDeletedNetStartupActors).ArrayMax = 0;
  *(undefined8 *)&(this->PlaybackDeletedNetStartupActors).Elements = 0;
  *(undefined8 *)&(this->PlaybackDeletedNetStartupActors).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PlaybackDeletedNetStartupActors).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PlaybackDeletedNetStartupActors).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PlaybackDeletedNetStartupActors).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PlaybackDeletedNetStartupActors).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PlaybackDeletedNetStartupActors).Elements.field_0x34 = 0;
  (this->PlaybackDeletedNetStartupActors).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PlaybackDeletedNetStartupActors).HashSize = 0;
  (this->AnalyticsProvider).Object = (IAnalyticsProvider *)0x0;
  (this->AnalyticsProvider).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bRecording = false;
  return this;
}

// ~FReplayHelper @ 148445db0

void __thiscall FReplayHelper::~FReplayHelper(FReplayHelper *this)

{
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  longlong *plVar4;
  ForElementType<UE::Net::FNetResultHandler_*> FVar5;
  longlong *plVar6;
  
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FWorldDelegates::LevelRemovedFromWorld,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FWorldDelegates::LevelAddedToWorld,this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AnalyticsProvider).SharedReferenceCount.ReferenceController);
  (this->PlaybackDeletedNetStartupActors).HashSize = 0;
  FVar1 = (this->PlaybackDeletedNetStartupActors).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PlaybackDeletedNetStartupActors).Elements);
  DestructItems<FString,int>
            ((FString *)(this->RecordingDeletedNetStartupActors).AllocatorInstance.Data,
             (this->RecordingDeletedNetStartupActors).ArrayNum);
  pFVar2 = (this->RecordingDeletedNetStartupActors).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->PlaybackFrames).field_0x48 = 0;
  pvVar3 = *(void **)&(this->PlaybackFrames).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PlaybackFrames);
  *(undefined4 *)&(this->ExternalDataToObjectMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ExternalDataToObjectMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExternalDataToObjectMap);
  if (*(longlong *)&(this->ResultManager).UnhandledResultCallback != 0) {
    plVar4 = *(longlong **)&(this->ResultManager).UnhandledResultCallback.field_0x28;
    plVar6 = (longlong *)&(this->ResultManager).UnhandledResultCallback.field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar6 = plVar4;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  DestructItems<TUniquePtr<UE::Net::FNetResultHandler,TDefaultDelete<UE::Net::FNetResultHandler>_>,int>
            ((TUniquePtr<UE::Net::FNetResultHandler,TDefaultDelete<UE::Net::FNetResultHandler>_> *)
             (this->ResultManager).OwnedResultHandlers.AllocatorInstance.Data,
             (this->ResultManager).OwnedResultHandlers.ArrayNum);
  pFVar2 = (this->ResultManager).OwnedResultHandlers.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FVar5 = (this->ResultManager).ResultHandlers.AllocatorInstance.SecondaryData;
  if (FVar5 != (ForElementType<UE::Net::FNetResultHandler_*>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  (this->LevelsPendingFastForward).HashSize = 0;
  FVar1 = (this->LevelsPendingFastForward).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<ULevel_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<ULevel_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->LevelsPendingFastForward).Elements);
  pFVar2 = (this->SeenLevelStatuses).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->WeakLevelsByName).field_0x48 = 0;
  pvVar3 = *(void **)&(this->WeakLevelsByName).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<ULevel,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<ULevel,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<ULevel,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->WeakLevelsByName);
  *(undefined4 *)&(this->LevelStatusIndexByLevel).field_0x48 = 0;
  pvVar3 = *(void **)&(this->LevelStatusIndexByLevel).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<ULevel_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<ULevel_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<ULevel_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LevelStatusIndexByLevel);
  *(undefined4 *)&(this->LevelStatusesByName).field_0x48 = 0;
  pvVar3 = *(void **)&(this->LevelStatusesByName).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LevelStatusesByName);
  DestructItems<FReplayHelper::FLevelStatus,int>
            ((FLevelStatus *)(this->AllLevelStatuses).AllocatorInstance.Data,
             (this->AllLevelStatuses).ArrayNum);
  pFVar2 = (this->AllLevelStatuses).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FQueuedDemoPacket,int>
            ((FQueuedDemoPacket *)(this->QueuedCheckpointPackets).AllocatorInstance.Data,
             (this->QueuedCheckpointPackets).ArrayNum);
  pFVar2 = (this->QueuedCheckpointPackets).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FQueuedDemoPacket,int>
            ((FQueuedDemoPacket *)(this->QueuedDemoPackets).AllocatorInstance.Data,
             (this->QueuedDemoPackets).ArrayNum);
  pFVar2 = (this->QueuedDemoPackets).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  (this->NewStreamingLevelsThisFrame).HashSize = 0;
  FVar1 = (this->NewStreamingLevelsThisFrame).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->NewStreamingLevelsThisFrame).Elements);
  (this->UniqueStreamingLevels).HashSize = 0;
  FVar1 = (this->UniqueStreamingLevels).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->UniqueStreamingLevels).Elements);
  DestructItems<TUniquePtr<FDeltaCheckpointData,TDefaultDelete<FDeltaCheckpointData>_>,int>
            ((TUniquePtr<FDeltaCheckpointData,TDefaultDelete<FDeltaCheckpointData>_> *)
             (this->PlaybackDeltaCheckpointData).AllocatorInstance.Data,
             (this->PlaybackDeltaCheckpointData).ArrayNum);
  pFVar2 = (this->PlaybackDeltaCheckpointData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FDeltaCheckpointData::~FDeltaCheckpointData(&this->RecordingDeltaCheckpointData);
  FCheckpointSaveStateContext::~FCheckpointSaveStateContext(&this->CheckpointSaveContext);
  FNetworkDemoHeader::~FNetworkDemoHeader(&this->PlaybackDemoHeader);
  DestructItems<FLevelNameAndTime,int>
            ((FLevelNameAndTime *)(this->LevelNamesAndTimes).AllocatorInstance.Data,
             (this->LevelNamesAndTimes).ArrayNum);
  pFVar2 = (this->LevelNamesAndTimes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ReplayStreamer).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->ActiveReplayName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FURL::~FURL(&this->DemoURL);
  *(undefined4 *)&(this->ExternalDataMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ExternalDataMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FReplayHelper::FExternalDataWrapper>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FReplayHelper::FExternalDataWrapper>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FReplayHelper::FExternalDataWrapper>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExternalDataMap);
  *(undefined4 *)&(this->ObjectsWithExternalDataMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ObjectsWithExternalDataMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ObjectsWithExternalDataMap);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnReplayPlaybackError);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  return;
}

// AddNewLevel @ 14844e220

/* WARNING: Removing unreachable block (ram,0x00014844e370) */

void __thiscall FReplayHelper::AddNewLevel(FReplayHelper *this,FString *param_1)

{
  int *piVar1;
  TArray<FLevelNameAndTime,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  FString *pFVar8;
  FString local_38;
  FString local_28;
  undefined4 local_18;
  
  pTVar2 = &this->LevelNamesAndTimes;
  if (((this->ReplayStreamer).Object == (INetworkReplayStreamer *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = (**(code **)(((this->ReplayStreamer).Object)->_padding_ + 0x60))();
  pFVar8 = UWorld::RemovePIEPrefix(&local_38,param_1,(int *)0x0);
  ::FString::FString(&local_28,pFVar8);
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  local_18 = uVar6;
  if (((pFVar3 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 <
       pFVar3 + (longlong)(this->LevelNamesAndTimes).ArrayMax * 0x18)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = (this->LevelNamesAndTimes).ArrayNum;
  piVar1 = &(this->LevelNamesAndTimes).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->LevelNamesAndTimes).ArrayNum = iVar7 + 1;
  pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x18;
  *(undefined8 *)pFVar3 = 0;
  *(FScriptContainerElement **)pFVar3 = local_28.Data.AllocatorInstance.Data;
  *(int *)(pFVar3 + 8) = local_28.Data.ArrayNum;
  *(int *)(pFVar3 + 0xc) = local_28.Data.ArrayMax;
  *(undefined4 *)(pFVar3 + 0x10) = local_18;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// AddOrUpdateEvent @ 14844e3a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FReplayHelper::AddOrUpdateEvent
          (FReplayHelper *this,FString *param_1,FString *param_2,FString *param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  INetworkReplayStreamer *pIVar1;
  
  pIVar1 = (this->ReplayStreamer).Object;
  if (pIVar1 != (INetworkReplayStreamer *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x90))
              (pIVar1,param_1,(longlong)(this->DemoCurrentTime * __real_447a0000) & 0xffffffff,
               param_2,param_3,param_4);
  }
  if (5 < (byte)LogDemo._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
  }
  return;
}

// CacheNetGuids @ 14845a020

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FReplayHelper::CacheNetGuids(FReplayHelper *this,UNetConnection *param_1)

{
  int *piVar1;
  TArray<FReplayHelper::FNetGuidCacheItem,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong lVar3;
  bool bVar4;
  UNetDriver *pUVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  UObject *pUVar11;
  ulonglong uVar12;
  longlong lVar13;
  TMap<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
  *pTVar14;
  longlong lVar15;
  uint uVar16;
  LARGE_INTEGER local_res10;
  LARGE_INTEGER local_res18 [2];
  undefined1 auStack_f0 [16];
  uint uStack_e0;
  uint uStack_dc;
  longlong local_d8;
  TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
  *pTStack_d0;
  TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
  *local_c8;
  undefined2 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80 [32];
  longlong local_60;
  TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
  *pTStack_58;
  
  if ((param_1 != (UNetConnection *)0x0) &&
     ((param_1->Driver).field0_0x0.DebugPtr != (UNetDriver *)0x0)) {
    bVar4 = this->bHasDeltaCheckpoints;
    QueryPerformanceCounter(&local_res10);
    pTVar2 = &(this->CheckpointSaveContext).NetGuidCacheSnapshot;
    iVar10 = (this->CheckpointSaveContext).NetGuidCacheSnapshot.ArrayMax;
    piVar1 = &(this->CheckpointSaveContext).NetGuidCacheSnapshot.ArrayMax;
    (this->CheckpointSaveContext).NetGuidCacheSnapshot.ArrayNum = 0;
    if (iVar10 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
    (this->CheckpointSaveContext).NextAmortizedItem = 0;
    (this->CheckpointSaveContext).NumNetGuidsForRecording = 0;
    pUVar5 = (param_1->Driver).field0_0x0.DebugPtr;
    if (((pUVar5->GuidCache).Object == (FNetGUIDCache *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pTVar14 = &((pUVar5->GuidCache).Object)->ObjectLookup;
    TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_80,
               (TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
                *)pTVar14);
    local_c0 = 0;
    stack0xffffffffffffff18 = local_80._16_16_;
    auStack_f0._0_8_ = local_80._8_8_;
    local_d8 = local_60;
    pTStack_d0 = pTStack_58;
    uVar12 = local_80._24_8_ >> 0x20;
    local_c8 = (TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
                *)pTVar14;
    if (local_80._28_4_ < *(int *)(local_80._16_8_ + 0x18)) {
      do {
        lVar15 = (longlong)(int)uVar12 * 0x40;
        lVar13 = *(longlong *)local_80._0_8_;
        lVar3 = lVar15 + lVar13;
        if ((((bVar4 == false) || ((*(byte *)(lVar3 + 0x30) & 0x10) != 0)) &&
            (*(longlong *)(lVar15 + lVar13) != 0)) &&
           (pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar3 + 8)), pUVar11 != (UObject *)0x0)
           ) {
          if ((*(byte *)(lVar15 + lVar13) & 1) == 0) {
            pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar3 + 8));
            cVar9 = (**(code **)(*(longlong *)pUVar11 + 0x200))(pUVar11);
            if (cVar9 == '\0') goto LAB_14845a2a4;
          }
          uStack_b0 = *(undefined8 *)(lVar3 + 8);
          uStack_a8 = *(undefined8 *)(lVar3 + 0x10);
          local_b8 = *(undefined8 *)(lVar15 + lVar13);
          uStack_a0 = *(undefined8 *)(lVar3 + 0x18);
          uStack_98 = *(undefined8 *)(lVar3 + 0x20);
          pFVar6 = (pTVar2->AllocatorInstance).Data;
          local_90 = *(undefined8 *)(lVar3 + 0x28);
          uStack_88 = *(undefined8 *)(lVar3 + 0x30);
          if (((pFVar6 <= (FScriptContainerElement *)&local_b8) &&
              ((FScriptContainerElement *)&local_b8 < pFVar6 + (longlong)*piVar1 * 0x38)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar10 = (this->CheckpointSaveContext).NetGuidCacheSnapshot.ArrayNum;
          if (iVar10 == *piVar1) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x838,&pTVar2->AllocatorInstance,piVar1);
          }
          (this->CheckpointSaveContext).NetGuidCacheSnapshot.ArrayNum = iVar10 + 1;
          lVar13 = (longlong)iVar10 * 0x38;
          pFVar6 = (pTVar2->AllocatorInstance).Data;
          *(undefined8 *)(pFVar6 + lVar13) = local_b8;
          *(undefined8 *)(pFVar6 + lVar13 + 8) = uStack_b0;
          *(undefined8 *)(pFVar6 + lVar13 + 0x10) = uStack_a8;
          *(undefined8 *)(pFVar6 + lVar13 + 0x10 + 8) = uStack_a0;
          *(undefined8 *)(pFVar6 + lVar13 + 0x20) = uStack_98;
          *(undefined8 *)(pFVar6 + lVar13 + 0x20 + 8) = local_90;
          *(undefined8 *)(pFVar6 + lVar13 + 0x30) = uStack_88;
          *(byte *)(lVar3 + 0x30) = *(byte *)(lVar3 + 0x30) & 0xef;
        }
LAB_14845a2a4:
        uStack_e0 = uStack_e0 & ~auStack_f0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_f0);
        uVar12 = (ulonglong)uStack_dc;
      } while ((int)uStack_dc < *(int *)(auStack_f0._8_8_ + 0x18));
      if (((char)local_c0 != '\0') && (local_c0._1_1_ != '\0')) {
        uVar16 = *(int *)&(local_c8->Elements).field_0x8 - *(int *)&(local_c8->Elements).field_0x34;
        if (uVar16 < 4) {
          iVar10 = 1;
        }
        else {
          uVar12 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
          lVar3 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar3 == 0; lVar3 = lVar3 + -1) {
            }
          }
          iVar10 = 1 << ((byte)lVar3 & 0x1f);
        }
        if (((0 < (int)uVar16) && (local_c8->HashSize < iVar10)) || (iVar10 < local_c8->HashSize)) {
          local_c8->HashSize = iVar10;
          TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
          ::Rehash(local_c8);
        }
      }
    }
    if (5 < (byte)LogDemo._0_1_) {
      QueryPerformanceCounter(local_res18);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
    }
  }
  return;
}

// ClearLevelMap @ 14845c4d0

void __thiscall FReplayHelper::ClearLevelMap(FReplayHelper *this)

{
  TSet<TTuple<FName,TWeakObjectPtr<ULevel,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<ULevel,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,TWeakObjectPtr<ULevel,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<ULevel,FWeakObjectPtr>,0>,FDefaultSetAllocator>
           *)&this->WeakLevelsByName);
  return;
}

// CreateSpectatorController @ 14845eb70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

APlayerController * __thiscall
FReplayHelper::CreateSpectatorController(FReplayHelper *this,UNetConnection *param_1)

{
  FWeakObjectPtr *pFVar1;
  UNetDriver *pUVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  bool bVar7;
  int iVar8;
  APlayerController *pAVar9;
  UObject *pUVar10;
  UClass *pUVar11;
  wchar_t *pwVar12;
  size_t sVar13;
  UClass *pUVar14;
  UWorld *pUVar15;
  FWeakObjectPtr FVar16;
  AActor *pAVar17;
  APlayerStart *pAVar18;
  FWeakObjectPtr FVar19;
  APlayerStart *extraout_RAX;
  TRotator<double> *pTVar20;
  FString *pFVar21;
  uint uVar22;
  FWeakObjectPtr FVar23;
  longlong *plVar24;
  wchar_t *pwVar25;
  FWeakObjectPtr FVar26;
  TWeakObjectPtr<UWorld,FWeakObjectPtr> *this_00;
  longlong lVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined1 auStackY_238 [32];
  UClass *local_208 [2];
  wchar_t *local_1f8;
  undefined8 uStack_1f0;
  wchar_t *local_1e8;
  int iStack_1e0;
  undefined4 uStack_1dc;
  TQuat<double> local_1d8;
  TActorIteratorBase<TActorIterator<APlayerStart>_> local_1b8;
  UClass *local_158;
  undefined8 local_150;
  FWeakObjectPtr local_148 [2];
  TStringView<wchar_t> local_138;
  TStringView<wchar_t> local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  FString local_e8;
  FString local_d8;
  TRotator<double> local_c8;
  undefined1 local_a8 [112];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_238;
  bVar7 = FURL::HasOption(&this->DemoURL,L"SkipSpawnSpectatorController");
  if (bVar7) {
    return (APlayerController *)0x0;
  }
  pwVar25 = L"";
  if ((param_1 == (UNetConnection *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Connection != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                         ,0x149,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    pAVar9 = (APlayerController *)(*pcVar3)();
    return pAVar9;
  }
  this_00 = &this->World;
  bVar7 = TWeakObjectPtr<UWorld,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
  FVar26.ObjectIndex = 0;
  FVar26.ObjectSerialNumber = 0;
  if (bVar7) {
LAB_14845ec43:
    local_150 = 0;
    pUVar14 = (UClass *)0x0;
LAB_14845ec4a:
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14845ec62;
    if (pUVar14 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar14);
      goto LAB_14845ec67;
    }
LAB_14845ec99:
    pwVar12 = FURL::GetOption(&this->DemoURL,L"game=",(wchar_t *)0x0);
    if (pwVar12 != (wchar_t *)0x0) {
      uStack_1f0._0_4_ = 0;
      uStack_1f0._4_4_ = 0;
      local_1f8 = (wchar_t *)0x0;
      local_1e8 = pwVar12;
      sVar13 = wcslen(pwVar12);
      iStack_1e0 = (int)sVar13;
      pUVar14 = Z_Construct_UClass_AGameModeBase_NoRegister();
      local_128._12_4_ = uStack_1dc;
      local_128.Size = iStack_1e0;
      local_138.DataPtr = local_1f8;
      local_138.Size = (int)uStack_1f0;
      local_138._12_4_ = uStack_1f0._4_4_;
      local_128.DataPtr = local_1e8;
      pUVar14 = StaticLoadClass(pUVar14,(UObject *)0x0,&local_128,&local_138,0,(UPackageMap *)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar14);
      }
    }
    if (pUVar14 == (UClass *)0x0) goto LAB_14845f201;
  }
  else {
    pUVar10 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    if (*(longlong *)&pUVar10[10].field_0x20 == 0) goto LAB_14845ec43;
    pUVar14 = *(UClass **)(*(longlong *)&pUVar10[10].field_0x20 + 0x2c0);
    local_158 = pUVar14;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar14 != (UClass *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar14);
      }
      goto LAB_14845ec4a;
    }
LAB_14845ec62:
    if (pUVar14 == (UClass *)0x0) goto LAB_14845ec99;
LAB_14845ec67:
    pUVar11 = Z_Construct_UClass_AGameModeBase_NoRegister();
    if (pUVar11 == (UClass *)0x0) goto LAB_14845ec99;
    iVar8 = (int)pUVar11->_padding_;
    if (((int)pUVar14->_padding_ < iVar8) ||
       ((longlong *)*(undefined1 **)(pUVar14->_padding_ + (longlong)iVar8 * 8) !=
        &pUVar11->_padding_)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_14845ec99;
  }
  if ((pUVar14->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar14);
  }
  pUVar10 = (pUVar14->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar10 == (UObject *)0x0) {
LAB_14845ed62:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result->IsA(T::StaticClass())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Templates\\SubclassOf.h"
                       ,0x93,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pAVar9 = (APlayerController *)(*pcVar3)();
      return pAVar9;
    }
    if (pUVar10 == (UObject *)0x0) goto LAB_14845f201;
  }
  else {
    pUVar14 = Z_Construct_UClass_AGameModeBase_NoRegister();
    iVar8 = (int)pUVar14->_padding_;
    if ((*(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38) < iVar8) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar8 * 8) !=
        &pUVar14->_padding_)) goto LAB_14845ed62;
  }
  lVar27 = *(longlong *)&pUVar10[0x13].field_0x10;
  FVar16 = FVar26;
  if ((lVar27 != 0) &&
     (pUVar14 = Z_Construct_UClass_APlayerController_NoRegister(), pUVar14 != (UClass *)0x0)) {
    iVar8 = (int)pUVar14->_padding_;
    if ((*(int *)(lVar27 + 0x38) < iVar8) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar27 + 0x30) + (longlong)iVar8 * 8) !=
        &pUVar14->_padding_)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      FVar16.ObjectIndex = *(int *)&pUVar10[0x13].field_0x10;
      FVar16.ObjectSerialNumber = *(int *)&pUVar10[0x13].field_0x14;
    }
  }
  if (FVar16 != (FWeakObjectPtr)0x0) {
    FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_a8);
    local_a8._52_4_ = local_a8._52_4_ | RF_Transient;
    pUVar15 = (UWorld *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    FVar16 = (FWeakObjectPtr)
             UWorld::SpawnActor(pUVar15,(UClass *)FVar16,(TVector<double> *)0x0,
                                (TRotator<double> *)0x0,(FActorSpawnParameters *)local_a8);
    if (FVar16 == (FWeakObjectPtr)0x0) {
      if (1 < (byte)LogDemo._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
      }
    }
    else {
      pUVar14 = Z_Construct_UClass_APlayerController_NoRegister();
      iVar8 = (int)pUVar14->_padding_;
      if ((*(int *)(*(longlong *)((longlong)FVar16 + 0x10) + 0x38) < iVar8) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)((longlong)FVar16 + 0x10) + 0x30) + (longlong)iVar8 * 8) !=
          &pUVar14->_padding_)) {
        pFVar21 = GetTypeName<APlayerController>(&local_e8);
        if ((pFVar21->Data).ArrayNum == 0) {
          pwVar12 = L"";
        }
        else {
          pwVar12 = (wchar_t *)(pFVar21->Data).AllocatorInstance.Data;
        }
        pFVar21 = GetFullNameForCastLogError<AActor>(&local_d8,(AActor *)FVar16);
        if ((pFVar21->Data).ArrayNum != 0) {
          pwVar25 = (wchar_t *)(pFVar21->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar25,pwVar12);
      }
      *(uint *)&(((TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *)
                 ((longlong)FVar16 + 0x4f8))->AllocatorInstance).Data =
           *(uint *)&(((TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *)
                      ((longlong)FVar16 + 0x4f8))->AllocatorInstance).Data & 0xfffffff7;
      *(uint *)((longlong)FVar16 + 0x58c) = *(uint *)((longlong)FVar16 + 0x58c) & 0xffffff7f;
      pUVar2 = (param_1->Driver).field0_0x0.DebugPtr;
      if (pUVar2 != (UNetDriver *)0x0) {
        AActor::SetNetDriverName((AActor *)FVar16,pUVar2->NetDriverName);
      }
      if ((*(longlong *)((longlong)FVar16 + 0x2c8) == 0) &&
         (bVar7 = TWeakObjectPtr<UWorld,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0), !bVar7)) {
        pUVar15 = (UWorld *)FWeakObjectPtr::Get(&this_00->WeakPtr);
        bVar7 = UWorld::IsRecordingClientReplay(pUVar15);
        if (bVar7) {
          (**(code **)(*(longlong *)FVar16 + 0x830))(FVar16);
        }
      }
      if (*(APlayerState **)((longlong)FVar16 + 0x2c8) != (APlayerState *)0x0) {
        APlayerState::SetIsOnlyASpectator(*(APlayerState **)((longlong)FVar16 + 0x2c8),true);
      }
      pUVar14 = Z_Construct_UClass_APlayerStart_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar14);
      }
      pUVar15 = (UWorld *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar14);
      }
      local_1b8.Flags = OnlyActiveLevels|SkipPendingKill;
      local_1b8.State.bIsSet = false;
      local_208[0] = pUVar14;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar14);
      }
      FActorIteratorState::FActorIteratorState
                (&local_1b8.State.TypedValue,pUVar15,(TSubclassOf<AActor>)local_208);
      local_1b8.State.bIsSet = true;
      TActorIteratorBase<TActorIterator<APlayerStart>_>::operator++(&local_1b8);
      if ((local_1b8.State.bIsSet == false) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        pAVar9 = (APlayerController *)(*pcVar3)();
        return pAVar9;
      }
      if (local_1b8.State.TypedValue.ReachedEnd == false) {
        pcVar3 = *(code **)(*(longlong *)FVar16 + 0x7b8);
        if ((local_1b8.State.bIsSet == false) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar7)) {
          pcVar3 = (code *)swi(3);
          pAVar9 = (APlayerController *)(*pcVar3)();
          return pAVar9;
        }
        pAVar17 = FActorIteratorState::GetActorChecked(&local_1b8.State.TypedValue);
        pAVar18 = CastChecked<APlayerStart,AActor>(pAVar17);
        FVar23 = (FWeakObjectPtr)pAVar18->_padding_;
        if (FVar23 == (FWeakObjectPtr)0x0) {
          uVar28 = SUB84(UE::Math::TRotator<double>::ZeroRotator.Roll,0);
          uVar29 = (undefined4)((ulonglong)UE::Math::TRotator<double>::ZeroRotator.Roll >> 0x20);
          local_118 = UE::Math::TRotator<double>::ZeroRotator.Pitch._0_4_;
          uStack_114 = UE::Math::TRotator<double>::ZeroRotator.Pitch._4_4_;
          uStack_110 = UE::Math::TRotator<double>::ZeroRotator.Yaw._0_4_;
          uStack_10c = UE::Math::TRotator<double>::ZeroRotator.Yaw._4_4_;
        }
        else {
          local_1d8.X._0_4_ = *(int *)((longlong)FVar23 + 0x1f0);
          local_1d8.X._4_4_ = *(int *)((longlong)FVar23 + 500);
          local_1d8.Y._0_4_ =
               *(undefined4 *)
                &(((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)FVar23 + 0x1f8))->
                 AllocatorInstance).Data;
          local_1d8.Y._4_4_ = *(undefined4 *)((longlong)FVar23 + 0x1fc);
          pFVar1 = (FWeakObjectPtr *)((longlong)FVar23 + 0x1e0);
          local_1d8.Z._0_4_ = *(int *)((longlong)FVar23 + 0x200);
          local_1d8.Z._4_4_ = *(int *)((longlong)FVar23 + 0x204);
          local_1d8.W._0_4_ = *(undefined4 *)((longlong)FVar23 + 0x208);
          local_1d8.W._4_4_ = *(undefined4 *)((longlong)FVar23 + 0x20c);
          if (*pFVar1 == (FWeakObjectPtr)0x0) {
            FVar19 = (FWeakObjectPtr)::operator_new(0x40);
            dVar6 = UE::Math::TQuat<double>::Identity.Y;
            FVar23 = FVar26;
            if (FVar19 != (FWeakObjectPtr)0x0) {
              *(double *)FVar19 = UE::Math::TQuat<double>::Identity.X;
              *(double *)((longlong)FVar19 + 8) = dVar6;
              dVar6 = UE::Math::TQuat<double>::Identity.W;
              *(double *)((longlong)FVar19 + 0x10) = UE::Math::TQuat<double>::Identity.Z;
              *(double *)((longlong)FVar19 + 0x18) = dVar6;
              dVar6 = (double)CONCAT44(UE::Math::TRotator<double>::ZeroRotator.Yaw._4_4_,
                                       UE::Math::TRotator<double>::ZeroRotator.Yaw._0_4_);
              *(ulonglong *)((longlong)FVar19 + 0x20) =
                   CONCAT44(UE::Math::TRotator<double>::ZeroRotator.Pitch._4_4_,
                            UE::Math::TRotator<double>::ZeroRotator.Pitch._0_4_);
              *(double *)((longlong)FVar19 + 0x28) = dVar6;
              *(double *)((longlong)FVar19 + 0x30) = UE::Math::TRotator<double>::ZeroRotator.Roll;
              FVar23 = FVar19;
            }
            if (pFVar1 != local_148) {
              FVar19 = *pFVar1;
              *pFVar1 = FVar23;
              ::operator_delete((void *)FVar19,0x40);
              FVar23 = FVar26;
            }
            ::operator_delete((void *)FVar23,0x40);
            pAVar18 = extraout_RAX;
          }
          FVar26 = *pFVar1;
          lVar27 = -(ulonglong)
                    (*(double *)((longlong)FVar26 + 0x18) !=
                    (double)CONCAT44(local_1d8.W._4_4_,local_1d8.W._0_4_));
          auVar4._8_4_ = (int)lVar27;
          auVar4._0_8_ = -(ulonglong)
                          (*(double *)((longlong)FVar26 + 0x10) !=
                          (double)CONCAT44(local_1d8.Z._4_4_,local_1d8.Z._0_4_));
          auVar4._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
          uVar22 = movmskpd(FVar23.ObjectIndex,auVar4);
          lVar27 = -(ulonglong)
                    ((double)CONCAT44(local_1d8.Y._4_4_,local_1d8.Y._0_4_) !=
                    *(double *)((longlong)FVar26 + 8));
          auVar5._8_4_ = (int)lVar27;
          auVar5._0_8_ = -(ulonglong)
                          ((double)CONCAT44(local_1d8.X._4_4_,local_1d8.X._0_4_) !=
                          *(double *)FVar26);
          auVar5._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
          iVar8 = movmskpd((int)pAVar18,auVar5);
          if ((uVar22 & 0x3fffffff) != 0 || iVar8 != 0) {
            *(int *)FVar26 = local_1d8.X._0_4_;
            *(int *)((longlong)FVar26 + 4) = local_1d8.X._4_4_;
            *(undefined4 *)((longlong)FVar26 + 8) = local_1d8.Y._0_4_;
            *(undefined4 *)((longlong)FVar26 + 0xc) = local_1d8.Y._4_4_;
            *(ulonglong *)((longlong)FVar26 + 0x10) = CONCAT44(local_1d8.Z._4_4_,local_1d8.Z._0_4_);
            *(ulonglong *)((longlong)FVar26 + 0x18) = CONCAT44(local_1d8.W._4_4_,local_1d8.W._0_4_);
            pTVar20 = UE::Math::TQuat<double>::Rotator(&local_1d8,&local_c8);
            dVar6 = pTVar20->Yaw;
            *(double *)((longlong)FVar26 + 0x20) = pTVar20->Pitch;
            *(double *)((longlong)FVar26 + 0x28) = dVar6;
            *(double *)((longlong)FVar26 + 0x30) = pTVar20->Roll;
          }
          uVar28 = SUB84(*(double *)((longlong)FVar26 + 0x30),0);
          uVar29 = (undefined4)((ulonglong)*(double *)((longlong)FVar26 + 0x30) >> 0x20);
          local_118 = *(undefined4 *)((longlong)FVar26 + 0x20);
          uStack_114 = *(undefined4 *)((longlong)FVar26 + 0x24);
          uStack_110 = *(undefined4 *)((longlong)FVar26 + 0x28);
          uStack_10c = *(undefined4 *)((longlong)FVar26 + 0x2c);
        }
        local_108 = CONCAT44(uVar29,uVar28);
        if ((local_1b8.State.bIsSet == false) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar7)) {
          pcVar3 = (code *)swi(3);
          pAVar9 = (APlayerController *)(*pcVar3)();
          return pAVar9;
        }
        pAVar17 = FActorIteratorState::GetActorChecked(&local_1b8.State.TypedValue);
        pAVar18 = CastChecked<APlayerStart,AActor>(pAVar17);
        lVar27 = pAVar18->_padding_;
        if (lVar27 == 0) {
          uVar28 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
          uVar29 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
          local_100 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
          uStack_fc = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
          uStack_f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
          uStack_f4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        }
        else {
          uVar28 = (undefined4)*(undefined8 *)(lVar27 + 0x220);
          uVar29 = (undefined4)((ulonglong)*(undefined8 *)(lVar27 + 0x220) >> 0x20);
          local_100 = *(undefined4 *)(lVar27 + 0x210);
          uStack_fc = *(undefined4 *)(lVar27 + 0x214);
          uStack_f8 = *(undefined4 *)(lVar27 + 0x218);
          uStack_f4 = *(undefined4 *)(lVar27 + 0x21c);
        }
        local_f0 = CONCAT44(uVar29,uVar28);
        (*pcVar3)(FVar16,&local_100,&local_118);
      }
      if (local_1b8.State.bIsSet != false) {
        UWorld::RemoveOnActorSpawnedHandler
                  (local_1b8.State.TypedValue.CurrentWorld,
                   local_1b8.State.TypedValue.ActorSpawnedDelegateHandle);
        if (local_1b8.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b8.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
        }
        if (local_1b8.State.TypedValue.ActorArray.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b8.State.TypedValue.ActorArray.AllocatorInstance.Data);
        }
      }
      AActor::SetReplicates((AActor *)FVar16,true);
      AActor::SetAutonomousProxy((AActor *)FVar16,true,true);
      (**(code **)(*(longlong *)FVar16 + 0xdf0))(FVar16,param_1);
      FVar26 = FVar16;
    }
    if (local_a8._64_8_ != 0) {
      plVar24 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar24 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar24 + 0x10))();
      return (APlayerController *)FVar26;
    }
    return (APlayerController *)FVar26;
  }
LAB_14845f201:
  if (1 < (byte)LogDemo._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
  }
  return (APlayerController *)0x0;
}

// FlushNetChecked @ 148467200

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl FReplayHelper::FlushNetChecked(UNetConnection *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_private:_static_void___cdecl_FReplayHelper::FlushNetChecked(UNetConnection_&)_::_2_::FStat_STAT_ReplayFlushNet>
  FVar8;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_58;
  FName local_50;
  FStatMessage local_40;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_ReplayFlushNet ==
          (FThreadSafeStaticStat<_private:_static_void___cdecl_FReplayHelper::FlushNetChecked(UNetConnection_&)_::_2_::FStat_STAT_ReplayFlushNet>
           )0x0) {
        pFVar7 = ::FName::FName(&local_res20,"STAT_ReplayFlushNet");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ReplayFlushNet,*pFVar7,
                   L"Replay net flush","STATGROUP_Net","STATCAT_Advanced",L"Net",true,true,ST_int64,
                   true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar8 = StatPtr_STAT_ReplayFlushNet;
  if (StatPtr_STAT_ReplayFlushNet ==
      (FThreadSafeStaticStat<_private:_static_void___cdecl_FReplayHelper::FlushNetChecked(UNetConnection_&)_::_2_::FStat_STAT_ReplayFlushNet>
       )0x0) {
    pFVar7 = ::FName::FName(&local_58,"STAT_ReplayFlushNet");
    FVar8 = (FThreadSafeStaticStat<_private:_static_void___cdecl_FReplayHelper::FlushNetChecked(UNetConnection_&)_::_2_::FStat_STAT_ReplayFlushNet>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ReplayFlushNet,*pFVar7,
                         L"Replay net flush","STATGROUP_Net","STATCAT_Advanced",L"Net",true,true,
                         ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar10.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                   ,0x217);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar10.Value;
      local_res18.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      goto LAB_148467372;
    }
  }
  bVar4 = false;
  FVar11 = local_50;
LAB_148467372:
  (**(code **)(param_1->_padding_ + 0x308))(param_1,0);
  if ((param_1->SendBuffer).Num != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NetConnection.SendBuffer.GetNumBits() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                       ,0x21a,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_40.NameAndInfo.Index = FVar11.ComparisonIndex.Value;
      local_40.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_40.StatData.Pad[4] = '\0';
      local_40.StatData.Pad[5] = '\0';
      local_40.StatData.Pad[6] = '\0';
      local_40.StatData.Pad[7] = '\0';
      local_40.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_40.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_40.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_40.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_40);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return;
}

// GetCheckpointSaveMaxMSPerFrame @ 14846ae00

float __thiscall FReplayHelper::GetCheckpointSaveMaxMSPerFrame(FReplayHelper *this)

{
  TConsoleVariableData<float> *pTVar1;
  bool bVar2;
  longlong lVar3;
  float fVar4;
  
  pTVar1 = CVarCheckpointSaveMaxMSPerFrameOverride.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      lVar3 = 4;
      goto LAB_14846ae2f;
    }
  }
  lVar3 = 0;
LAB_14846ae2f:
  fVar4 = *(float *)((longlong)pTVar1->ShadowedValue + lVar3);
  if (fVar4 < 0.0) {
    fVar4 = this->CheckpointSaveMaxMSPerFrame;
  }
  return fVar4;
}

// GetClampedDeltaSeconds @ 14846ae60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

float __cdecl FReplayHelper::GetClampedDeltaSeconds(UWorld *param_1,float param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  AWorldSettings *pAVar4;
  float fVar5;
  
  if ((param_1 == (UWorld *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("World != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                         ,0x5cf,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    fVar5 = (float)(*pcVar2)();
    return fVar5;
  }
  pAVar4 = UWorld::GetWorldSettings(param_1,false,true);
  lVar1 = pAVar4->_padding_;
  fVar5 = (float)(**(code **)(lVar1 + 0x790))(pAVar4);
  fVar5 = (float)(**(code **)(lVar1 + 0x798))(pAVar4,fVar5 * param_2,param_2);
  if ((fVar5 < 0.0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ClampedDeltaSeconds >= 0.0f",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                         ,0x5d6,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    fVar5 = (float)(*pcVar2)();
    return fVar5;
  }
  return fVar5;
}

// GetLevelPackageName @ 14846c940

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __cdecl
FReplayHelper::GetLevelPackageName(FString *__return_storage_ptr__,ULevel *param_1)

{
  UPackage *pUVar1;
  FName local_res8 [4];
  FString local_18;
  
  pUVar1 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1);
  local_res8[0] = (FName)pUVar1->_padding_;
  ::FName::ToString(local_res8,&local_18);
  UWorld::RemovePIEPrefix(__return_storage_ptr__,&local_18,(int *)0x0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPlaybackReplayVersion @ 14846d5d0

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall FReplayHelper::GetPlaybackReplayVersion(FReplayHelper *this)

{
  Type TVar1;
  
  TVar1 = FNetworkDemoHeader::GetCustomVersion
                    (&this->PlaybackDemoHeader,&FReplayCustomVersion::Guid);
  return TVar1;
}

// Init @ 148474710

TSharedPtr<INetworkReplayStreamer,1> * __thiscall
FReplayHelper::Init(FReplayHelper *this,TSharedPtr<INetworkReplayStreamer,1> *__return_storage_ptr__
                   ,FURL *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FURL *this_00;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FName FVar6;
  INetworkReplayStreamer *pIVar7;
  TReferenceControllerBase<1> *pTVar8;
  code *pcVar9;
  bool bVar10;
  wchar_t *pwVar11;
  FName *pFVar12;
  FModuleManager *this_01;
  IModuleInterface *pIVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  TSharedPtr<INetworkReplayStreamer,1> *pTVar16;
  double dVar17;
  TUniquePtr<UE::Net::FNetResultHandler,TDefaultDelete<UE::Net::FNetResultHandler>_> local_res8;
  FName local_res10 [3];
  FString local_58;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  
  this_00 = &this->DemoURL;
  ::FString::operator=(&this_00->Protocol,&param_1->Protocol);
  ::FString::operator=(&(this->DemoURL).Host,&param_1->Host);
  (this->DemoURL).Port = param_1->Port;
  (this->DemoURL).Valid = param_1->Valid;
  ::FString::operator=(&(this->DemoURL).Map,&param_1->Map);
  ::FString::operator=(&(this->DemoURL).RedirectURL,&param_1->RedirectURL);
  pTVar1 = &(this->DemoURL).Op;
  if (pTVar1 != &param_1->Op) {
    DestructItems<FString,int>
              ((FString *)(pTVar1->AllocatorInstance).Data,(this->DemoURL).Op.ArrayNum);
    iVar3 = (param_1->Op).ArrayNum;
    piVar2 = &(this->DemoURL).Op.ArrayMax;
    pFVar5 = (param_1->Op).AllocatorInstance.Data;
    iVar4 = *piVar2;
    (this->DemoURL).Op.ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar4 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar3,iVar4,&pTVar1->AllocatorInstance,iVar3,piVar2);
      ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,(FString *)pFVar5,iVar3);
    }
  }
  ::FString::operator=(&(this->DemoURL).Portal,&param_1->Portal);
  pwVar11 = FURL::GetOption(this_00,L"ReplayStreamerOverride=",(wchar_t *)0x0);
  pFVar12 = ::FName::FName(local_res10,"NetworkReplayStreaming");
  FVar6 = *pFVar12;
  this_01 = FModuleManager::Get();
  pIVar13 = FModuleManager::LoadModuleChecked(this_01,FVar6);
  plVar14 = (longlong *)(**(code **)((longlong)*pIVar13 + 0x40))(pIVar13,pwVar11);
  puVar15 = (undefined8 *)(**(code **)(*plVar14 + 0x40))(plVar14,local_48);
  pTVar16 = &this->ReplayStreamer;
  if (pTVar16 != (TSharedPtr<INetworkReplayStreamer,1> *)puVar15) {
    pTVar16->Object = (INetworkReplayStreamer *)*puVar15;
    *puVar15 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ReplayStreamer).SharedReferenceCount,(FSharedReferencer<1> *)(puVar15 + 1));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  pIVar7 = pTVar16->Object;
  if (pIVar7 != (INetworkReplayStreamer *)0x0) {
    (**(code **)(pIVar7->_padding_ + 0x1a8))(pIVar7,&this->AnalyticsProvider);
    pwVar11 = FURL::GetOption(this_00,L"ReplayStreamerDemoPath=",(wchar_t *)0x0);
    if (pwVar11 != (wchar_t *)0x0) {
      if (pTVar16->Object == (INetworkReplayStreamer *)0x0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          pTVar16 = (TSharedPtr<INetworkReplayStreamer,1> *)(*pcVar9)();
          return pTVar16;
        }
      }
      pIVar7 = pTVar16->Object;
      pcVar9 = *(code **)(pIVar7->_padding_ + 0x198);
      ::FString::FString(&local_58,pwVar11);
      (*pcVar9)(pIVar7,&local_58);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
  }
  local_res8.Ptr = ::operator_new(0x18);
  if (local_res8.Ptr != (FNetResultHandler *)0x0) {
    (local_res8.Ptr)->ResultManager = (FNetResultManager *)0x0;
    (local_res8.Ptr)->_padding_ = (longlong)&___7FReplayResultHandler__6B_;
  }
  local_res8.Ptr[1]._padding_ = (longlong)this;
  UE::Net::FNetResultManager::AddResultHandler(&this->ResultManager,&local_res8,First);
  if (local_res8.Ptr != (FNetResultHandler *)0x0) {
    (**(code **)(local_res8.Ptr)->_padding_)(local_res8.Ptr,1);
  }
  TMulticastDelegateRegistration<void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>::
  AddRaw<FReplayHelper>
            ((TMulticastDelegateRegistration<void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
              *)&FWorldDelegates::LevelRemovedFromWorld,(FReplayHelper *)(local_res10 + 1),
             (pmf_e08a6a4d)this);
  TMulticastDelegateRegistration<void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>::
  AddRaw<FReplayHelper>
            ((TMulticastDelegateRegistration<void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
              *)&FWorldDelegates::LevelAddedToWorld,(FReplayHelper *)(local_res10 + 2),
             (pmf_e08a6a4d)this);
  bVar10 = FURL::HasOption(this_00,L"CheckpointSaveMaxMSPerFrame");
  if (bVar10) {
    pwVar11 = FURL::GetOption(this_00,L"CheckpointSaveMaxMSPerFrame=",(wchar_t *)0x0);
    dVar17 = _wtof(pwVar11);
    this->CheckpointSaveMaxMSPerFrame = (float)dVar17;
  }
  __return_storage_ptr__->Object = pTVar16->Object;
  pTVar8 = (this->ReplayStreamer).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// LoadExternalData @ 148478c90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FReplayHelper::LoadExternalData(FReplayHelper *this,FArchive *param_1,float param_2)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  TMap<FNetworkGUID,TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  code *pcVar3;
  undefined1 *puVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<_private:_void___cdecl_FReplayHelper::LoadExternalData(FArchive_&,float)_::_2_::FStat_Demo_LoadExternalData>
  FVar14;
  FBitReader *this_01;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  longlong *plVar15;
  FName FVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  uint local_res20 [2];
  FBitReader *local_168;
  FColor_u_0 local_160;
  int local_15c;
  longlong local_158;
  FName local_150;
  FName local_148;
  FName local_140;
  longlong *local_130;
  LARGE_INTEGER local_128;
  FStatMessage local_120;
  FName local_110;
  FName local_108 [2];
  FBitReader local_f8;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_Demo_LoadExternalData ==
        (FThreadSafeStaticStat<_private:_void___cdecl_FReplayHelper::LoadExternalData(FArchive_&,float)_::_2_::FStat_Demo_LoadExternalData>
         )0x0) {
      pFVar13 = ::FName::FName(&local_110,"Demo_LoadExternalData");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_Demo_LoadExternalData,*pFVar13,
                 L"Demo_LoadExternalData","STATGROUP_Net","STATCAT_Advanced",L"Net",true,true,
                 ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar14 = StatPtr_Demo_LoadExternalData;
  if (StatPtr_Demo_LoadExternalData ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FReplayHelper::LoadExternalData(FArchive_&,float)_::_2_::FStat_Demo_LoadExternalData>
       )0x0) {
    pFVar13 = ::FName::FName(local_108,"Demo_LoadExternalData");
    FVar14 = (FThreadSafeStaticStat<_private:_void___cdecl_FReplayHelper::LoadExternalData(FArchive_&,float)_::_2_::FStat_Demo_LoadExternalData>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_Demo_LoadExternalData,*pFVar13,
                          L"Demo_LoadExternalData","STATGROUP_Net","STATCAT_Advanced",L"Net",true,
                          true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar14;
  bVar6 = false;
  bVar9 = false;
  local_140.ComparisonIndex.Value = 0;
  local_140.Number = 0;
  bVar10 = false;
  bVar7 = false;
  if ((FVar16.ComparisonIndex.Value.Value != 0) ||
     (bVar5 = bVar6, bVar8 = bVar9, FVar16.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_160.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_160._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar6 = false;
      bVar9 = true;
      bVar10 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_150.ComparisonIndex.Value = FVar16.ComparisonIndex.Value.Value;
        local_150.Number = FVar16.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_150,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                   ,0x638);
        bVar6 = true;
        bVar9 = true;
        bVar10 = true;
        bVar7 = true;
      }
    }
    bVar5 = bVar6;
    bVar8 = bVar9;
    if (FThreadStats::bPrimaryEnable != false) {
      local_148 = FVar16;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar10 = true;
      bVar7 = true;
      goto LAB_148478e31;
    }
  }
  bVar9 = bVar7;
  bVar6 = bVar10;
  bVar10 = false;
  bVar7 = false;
  local_148 = local_140;
  FVar16 = local_140;
LAB_148478e31:
  (**(code **)(*(longlong *)param_1 + 0x1a0))(param_1,local_res20);
  if (local_res20[0] != 0) {
    this_00 = &this->ExternalDataToObjectMap;
    do {
      local_158 = 0;
      (**(code **)(*(longlong *)param_1 + 0x1a8))(param_1);
      uVar17 = (ulonglong)local_res20[0];
      FBitReader::FBitReader(&local_f8,(uchar *)0x0,(ulonglong)local_res20[0]);
      (**(code **)(*(longlong *)param_1 + 0x188))
                (param_1,local_f8.Buffer.AllocatorInstance.Data,uVar17 + 7 >> 3);
      pcVar3 = *(code **)(local_f8._padding_ + 0x128);
      uVar11 = FNetworkDemoHeader::GetCustomVersion
                         (&this->PlaybackDemoHeader,&FEngineNetworkCustomVersion::Guid);
      (*pcVar3)(&local_f8,uVar11);
      pcVar3 = *(code **)(local_f8._padding_ + 0x130);
      uVar11 = FNetworkDemoHeader::GetCustomVersion
                         (&this->PlaybackDemoHeader,&FGameNetworkCustomVersion::Guid);
      (*pcVar3)(&local_f8,uVar11);
      (**(code **)(local_f8._padding_ + 0x110))
                (&local_f8,(this->PlaybackDemoHeader).PackageVersionUE);
      (**(code **)(local_f8._padding_ + 0x118))
                (&local_f8,(this->PlaybackDemoHeader).PackageVersionLicenseeUE);
      (**(code **)(local_f8._padding_ + 0x120))(&local_f8,&(this->PlaybackDemoHeader).EngineVersion)
      ;
      (**(code **)(local_f8._padding_ + 0x68))(&local_f8,&(this->PlaybackDemoHeader).CustomVersions)
      ;
      uVar11 = (int)((ulonglong)local_158 >> 0x20) * 0x17 + (int)local_158;
      if (*(int *)&(this->ExternalDataToObjectMap).field_0x8 !=
          *(int *)&(this->ExternalDataToObjectMap).field_0x34) {
        puVar4 = *(undefined1 **)&(this->ExternalDataToObjectMap).field_0x40;
        puVar18 = &(this->ExternalDataToObjectMap).field_0x38;
        if (puVar4 != (undefined1 *)0x0) {
          puVar18 = puVar4;
        }
        iVar12 = *(int *)(puVar18 +
                         (ulonglong)
                         (*(int *)&(this->ExternalDataToObjectMap).field_0x48 - 1U & uVar11) * 4);
        if (iVar12 != -1) {
          do {
            plVar15 = (longlong *)((longlong)iVar12 * 0x20 + *(longlong *)&this_00->field_0x0);
            if (*plVar15 == local_158) {
              if (plVar15 != (longlong *)0x0) goto LAB_148478fe0;
              break;
            }
            iVar12 = (int)plVar15[3];
          } while (iVar12 != -1);
        }
      }
      local_130 = &local_158;
      TSet<TTuple<FNetworkGUID,TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<FNetworkGUID_const_&>_>
                ((TSet<TTuple<FNetworkGUID,TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)this_00,(uint)&local_15c,
                 (TKeyInitializer<FNetworkGUID_const_&> *)(ulonglong)uVar11,(bool *)&local_130);
      plVar15 = (longlong *)((longlong)local_15c * 0x20 + *(longlong *)&this_00->field_0x0);
LAB_148478fe0:
      pFVar1 = (ForAnyElementType *)(plVar15 + 1);
      this_01 = ::operator_new(0xb8);
      if (this_01 == (FBitReader *)0x0) {
        this_01 = (FBitReader *)0x0;
      }
      else {
        FBitReader::FBitReader(this_01,&local_f8);
        *(float *)&this_01[1]._padding_ = param_2;
      }
      local_168 = this_01;
      if (((pFVar1->Data <= (FScriptContainerElement *)&local_168) &&
          ((FScriptContainerElement *)&local_168 <
           pFVar1->Data + (longlong)*(int *)((longlong)plVar15 + 0x14) * 8)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar12 = (int)plVar15[2];
      if (iVar12 == *(int *)((longlong)plVar15 + 0x14)) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,pFVar1,(int *)((longlong)plVar15 + 0x14));
      }
      *(int *)(plVar15 + 2) = iVar12 + 1;
      *(FBitReader **)(pFVar1->Data + (longlong)iVar12 * 8) = local_168;
      FBitReader::~FBitReader(&local_f8);
      (**(code **)(*(longlong *)param_1 + 0x1a0))(param_1,local_res20);
      FVar16 = local_148;
      bVar5 = bVar6;
      bVar10 = bVar7;
      bVar8 = bVar9;
    } while (local_res20[0] != 0);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar10) && (FVar16 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_02 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_02 == (FThreadStats *)0x0) {
      this_03 = FThreadStatsPool::Get();
      this_02 = FThreadStatsPool::GetFromPool(this_03);
    }
    if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
      local_120.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
      local_120.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_128);
      local_120.StatData.Pad[4] = '\0';
      local_120.StatData.Pad[5] = '\0';
      local_120.StatData.Pad[6] = '\0';
      local_120.StatData.Pad[7] = '\0';
      local_120.StatData.Pad[0] = local_128.s.LowPart._0_1_;
      local_120.StatData.Pad[1] = local_128.s.LowPart._1_1_;
      local_120.StatData.Pad[2] = local_128.s.LowPart._2_1_;
      local_120.StatData.Pad[3] = local_128.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_02,&local_120);
      piVar2 = &this_02->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_02,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
    }
  }
  return;
}

// NotifyActorDestroyed @ 148479ef0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FReplayHelper::NotifyActorDestroyed(FReplayHelper *this,UNetConnection *param_1,AActor *param_2)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  FDeltaCheckpointData *pFVar3;
  undefined1 uVar4;
  UNetDriver *pUVar5;
  FNetGUIDCache *pFVar6;
  code *pcVar7;
  ForAnyElementType FVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID> *pTVar13;
  FScriptContainerElement *pFVar14;
  FNetworkGUID local_res8;
  FWeakObjectPtr local_res10;
  AActor *local_res18;
  longlong local_res20;
  FString local_48;
  
  if ((param_2 == (AActor *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Actor",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                          ,0x906,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((param_1 == (UNetConnection *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Connection",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                          ,0x907,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  bVar11 = AActor::IsNetStartupActor(param_2);
  bVar10 = this->bHasDeltaCheckpoints;
  if (bVar11) {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_2,&local_48,(UObject *)0x0,None);
    if ((2 < (byte)LogDemo._0_1_) && ((bool)param_2->bReplayRewindable)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
    }
    if (6 < (byte)LogDemo._0_1_) {
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
    }
    pTVar2 = &this->RecordingDeletedNetStartupActors;
    pFVar14 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar14 <= (FScriptContainerElement *)&local_48) &&
        ((FScriptContainerElement *)&local_48 <
         pFVar14 + (longlong)(this->RecordingDeletedNetStartupActors).ArrayMax * 0x10)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar12 = (this->RecordingDeletedNetStartupActors).ArrayNum;
    piVar1 = &(this->RecordingDeletedNetStartupActors).ArrayMax;
    if (iVar12 == *piVar1) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar2->AllocatorInstance,piVar1);
    }
    iVar9 = local_48.Data.ArrayNum;
    FVar8.Data = local_48.Data.AllocatorInstance.Data;
    (this->RecordingDeletedNetStartupActors).ArrayNum = iVar12 + 1;
    pFVar14 = (pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
    *(undefined8 *)pFVar14 = 0;
    *(int *)(pFVar14 + 8) = local_48.Data.ArrayNum;
    if (local_48.Data.ArrayNum == 0) {
      *(int *)(pFVar14 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)pFVar14,local_48.Data.ArrayNum,
                 (int *)(pFVar14 + 0xc));
      memcpy(*(void **)pFVar14,FVar8.Data,(longlong)iVar9 * 2);
    }
    if (bVar10 != false) {
      pFVar3 = &this->RecordingDeltaCheckpointData;
      pFVar14 = (pFVar3->RecordingDeletedNetStartupActors).AllocatorInstance.Data;
      if (((pFVar14 <= (FScriptContainerElement *)&local_48) &&
          ((FScriptContainerElement *)&local_48 <
           pFVar14 + (longlong)
                     (this->RecordingDeltaCheckpointData).RecordingDeletedNetStartupActors.ArrayMax
                     * 0x10)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar12 = (this->RecordingDeltaCheckpointData).RecordingDeletedNetStartupActors.ArrayNum;
      piVar1 = &(this->RecordingDeltaCheckpointData).RecordingDeletedNetStartupActors.ArrayMax;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,(ForAnyElementType *)pFVar3,piVar1);
      }
      FVar8.Data = local_48.Data.AllocatorInstance.Data;
      (this->RecordingDeltaCheckpointData).RecordingDeletedNetStartupActors.ArrayNum = iVar12 + 1;
      pFVar14 = (pFVar3->RecordingDeletedNetStartupActors).AllocatorInstance.Data +
                (longlong)iVar12 * 0x10;
      *(undefined8 *)&pFVar14->field_0x0 = 0;
      *(int *)&pFVar14[8].field_0x0 = local_48.Data.ArrayNum;
      if (local_48.Data.ArrayNum == 0) {
        *(int *)(pFVar14 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)pFVar14,local_48.Data.ArrayNum,
                   (int *)(pFVar14 + 0xc));
        memcpy(*(void **)&pFVar14->field_0x0,FVar8.Data,(longlong)local_48.Data.ArrayNum * 2);
      }
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
      return;
    }
  }
  else if (bVar10 != false) {
    pUVar5 = (param_1->Driver).field0_0x0.DebugPtr;
    if (((pUVar5->GuidCache).Object == (FNetGUIDCache *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar6 = (pUVar5->GuidCache).Object;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18 = param_2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
    pTVar13 = TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
                      *)&pFVar6->NetGUIDLookup,
                     (TWeakObjectPtr<UObject_const_,FWeakObjectPtr>)local_res10);
    if ((pTVar13 != (TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID> *)0x0) &&
       (local_res20 = *(longlong *)&pTVar13->field_0x8, local_res20 != 0)) {
      TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::
      Emplace<FNetworkGUID_const_&>
                (&(this->RecordingDeltaCheckpointData).DestroyedDynamicActors,&local_res8,
                 (bool *)&local_res20);
    }
  }
  return;
}

// NotifyReplayError @ 14847a320

void __thiscall
FReplayHelper::NotifyReplayError(FReplayHelper *this,TNetResult<EReplayResult> *param_1)

{
  UE::Net::FNetResultManager::HandleNetResult(&this->ResultManager,(FNetResult *)param_1);
  return;
}

// OnLevelAddedToWorld @ 14847a3e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FReplayHelper::OnLevelAddedToWorld(FReplayHelper *this,ULevel *param_1,UWorld *param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  FLevelStatus *pFVar4;
  UPackage *pUVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  FLLMScope local_res10 [2];
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_48;
  longlong local_40;
  FMemScope local_38;
  longlong *local_30;
  FWeakObjectPtr *local_28;
  
  FLLMScope::FLLMScope(local_res10,Replays,false,None,Default,true);
  FMemScope::FMemScope(&local_38,Replays,true);
  if ((param_1 != (ULevel *)0x0) && (param_1->bClientOnlyVisible == '\0')) {
    bVar2 = TWeakObjectPtr<UWorld,FWeakObjectPtr>::UEOpEquals<UWorld,bool>(&this->World,param_2);
    if (bVar2) {
      bVar2 = UWorld::IsPlayingReplay(param_2);
      if (bVar2) {
        if (this->bHasLevelStreamingFixes != false) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          local_res20.ObjectIndex = 0;
          local_res20.ObjectSerialNumber = 0;
          local_48 = (FWeakObjectPtr)param_1;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_48);
          local_48 = local_res20;
          iVar3 = TSet<TWeakObjectPtr<UObject,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                  ::FindIndexByHash<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>
                            (&this->NewStreamingLevelsThisFrame,
                             local_res20.ObjectSerialNumber ^ local_res20.ObjectIndex,
                             (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_48);
          if (iVar3 == -1) {
            uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4))
                    * -0x7a143595;
            uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
            if (*(int *)&(this->LevelsPendingFastForward).Elements.field_0x8 !=
                *(int *)&(this->LevelsPendingFastForward).Elements.field_0x34) {
              FVar7 = (this->LevelsPendingFastForward).Hash.SecondaryData;
              if (FVar7 == (ForElementType<FSetElementId>)0x0) {
                FVar7 = (ForElementType<FSetElementId>)&(this->LevelsPendingFastForward).Hash;
              }
              iVar3 = *(int *)((longlong)FVar7 +
                              (ulonglong)
                              ((this->LevelsPendingFastForward).HashSize - 1U &
                              (uVar6 >> 0x10 ^ uVar6)) * 4);
              if (iVar3 != -1) {
                lVar1 = *(longlong *)&(this->LevelsPendingFastForward).Elements;
                do {
                  if (*(ULevel **)(lVar1 + (longlong)iVar3 * 0x10) == param_1) goto LAB_14847a5c7;
                  iVar3 = *(int *)(lVar1 + 8 + (longlong)iVar3 * 0x10);
                } while (iVar3 != -1);
              }
            }
            pFVar4 = FindOrAddLevelStatus(this,param_1);
            if (pFVar4->bHasBeenSeen == false) {
              pFVar4->bIsReady = true;
            }
            else if (pFVar4->bIsReady == false) {
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)param_1);
              }
              local_48.ObjectIndex = 0;
              local_48.ObjectSerialNumber = 0;
              local_res20 = (FWeakObjectPtr)param_1;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)param_1);
              }
              FWeakObjectPtr::operator=(&local_48,(FObjectPtr)&local_res20);
              TSet<TWeakObjectPtr<UObject,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              ::Emplace<TWeakObjectPtr<UObject,FWeakObjectPtr>_>
                        (&this->NewStreamingLevelsThisFrame,
                         (TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_res20,(bool *)&local_48);
            }
          }
        }
LAB_14847a5c7:
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        local_48.ObjectIndex = 0;
        local_48.ObjectSerialNumber = 0;
        local_res20 = (FWeakObjectPtr)param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        FWeakObjectPtr::operator=(&local_48,(FObjectPtr)&local_res20);
        pUVar5 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1);
        local_40 = pUVar5->_padding_;
        local_30 = &local_40;
        local_28 = &local_48;
        TSet<TTuple<FName,TWeakObjectPtr<ULevel,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<ULevel,FWeakObjectPtr>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_&&,TWeakObjectPtr<ULevel,FWeakObjectPtr>_&&>_>
                  ((TSet<TTuple<FName,TWeakObjectPtr<ULevel,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<ULevel,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                    *)&this->WeakLevelsByName,
                   (TPairInitializer<FName_&&,TWeakObjectPtr<ULevel,FWeakObjectPtr>_&&> *)
                   &local_res20,(bool *)&local_30);
      }
    }
  }
  FMemScope::~FMemScope(&local_38);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// OnLevelRemovedFromWorld @ 14847a750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FReplayHelper::OnLevelRemovedFromWorld(FReplayHelper *this,ULevel *param_1,UWorld *param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UPackage *pUVar6;
  ForAnyElementType FVar7;
  longlong lVar8;
  uint uVar9;
  FWeakObjectPtr local_res8;
  FName local_res10;
  ULevel *local_res20;
  FWeakObjectPtr local_68;
  FName local_60;
  ULevel *local_58;
  FString local_50;
  FString local_40;
  
  if ((((param_1 != (ULevel *)0x0) && (param_1->bClientOnlyVisible == '\0')) &&
      (bVar3 = TWeakObjectPtr<UWorld,FWeakObjectPtr>::UEOpEquals<UWorld,bool>(&this->World,param_2),
      bVar3)) && (bVar3 = UWorld::IsPlayingReplay(param_2), bVar3)) {
    if (this->bHasLevelStreamingFixes != false) {
      pUVar6 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1);
      local_res10 = (FName)pUVar6->_padding_;
      ::FName::ToString(&local_res10,&local_40);
      UWorld::RemovePIEPrefix(&local_50,&local_40,(int *)0x0);
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_50.Data.ArrayNum != 0) {
        FVar7.Data = local_50.Data.AllocatorInstance.Data;
      }
      lVar8 = 0;
      uVar9 = 0;
      uVar4 = local_50.Data.ArrayNum - 1;
      if (local_50.Data.ArrayNum == 0) {
        uVar4 = uVar9;
      }
      uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar4,(wchar_t *)FVar7.Data);
      iVar5 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>
                        ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                          *)&this->LevelStatusesByName,uVar4,&local_50);
      if (iVar5 != -1) {
        uVar4 = local_50.Data.ArrayNum - 1;
        FVar7.Data = local_50.Data.AllocatorInstance.Data;
        if (local_50.Data.ArrayNum == 0) {
          uVar4 = uVar9;
          FVar7.Data = (FScriptContainerElement *)L"";
        }
        uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar4,(wchar_t *)FVar7.Data);
        iVar5 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FString>
                          ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                            *)&this->LevelStatusesByName,uVar4,&local_50);
        if (((iVar5 == -1) ||
            (lVar8 = (longlong)iVar5 * 0x20 + *(longlong *)&this->LevelStatusesByName, lVar8 == 0))
           && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Pair != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                  ,0x288,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar4 = *(uint *)(lVar8 + 0x10);
        if ((int)uVar4 < (this->AllLevelStatuses).ArrayNum) {
          uVar9 = ~uVar4 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        (this->AllLevelStatuses).AllocatorInstance.Data[(longlong)(int)uVar4 * 0x18 + 0x14] =
             (FScriptContainerElement)0x0;
        TSet<ULevel_*,DefaultKeyFuncs<ULevel_*,0>,FDefaultSetAllocator>::Remove
                  (&this->LevelsPendingFastForward,param_1);
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        local_res8.ObjectIndex = 0;
        local_res8.ObjectSerialNumber = 0;
        local_res20 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
        local_68 = local_res8;
        if (*(int *)&(this->NewStreamingLevelsThisFrame).Elements.field_0x8 !=
            *(int *)&(this->NewStreamingLevelsThisFrame).Elements.field_0x34) {
          TSet<TWeakObjectPtr<UObject,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::RemoveImpl<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>
                    (&this->NewStreamingLevelsThisFrame,
                     local_res8.ObjectSerialNumber ^ local_res8.ObjectIndex,
                     (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_68);
        }
      }
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
    }
    pUVar6 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1);
    FVar1 = (FName)pUVar6->_padding_;
    local_60 = FVar1;
    if (*(int *)&(this->WeakLevelsByName).field_0x8 != *(int *)&(this->WeakLevelsByName).field_0x34)
    {
      uVar4 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
      TSet<TTuple<FName,TWeakObjectPtr<ULevel,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<ULevel,FWeakObjectPtr>,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,TWeakObjectPtr<ULevel,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<ULevel,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                           *)&this->WeakLevelsByName,FVar1.Number + uVar4,&local_60);
    }
  }
  if (*(int *)&(this->LevelStatusIndexByLevel).field_0x8 !=
      *(int *)&(this->LevelStatusIndexByLevel).field_0x34) {
    uVar4 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    local_58 = param_1;
    TSet<TTuple<ULevel_const_*,int>,TDefaultMapHashableKeyFuncs<ULevel_const_*,int,0>,FDefaultSetAllocator>
    ::RemoveImpl<ULevel_const_*>
              ((TSet<TTuple<ULevel_const_*,int>,TDefaultMapHashableKeyFuncs<ULevel_const_*,int,0>,FDefaultSetAllocator>
                *)&this->LevelStatusIndexByLevel,uVar4 >> 0x10 ^ uVar4,&local_58);
  }
  return;
}

// OnSeamlessTravelStart @ 14847ab20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FReplayHelper::OnSeamlessTravelStart
          (FReplayHelper *this,UWorld *param_1,FString *param_2,UNetConnection *param_3)

{
  INetworkReplayStreamer *pIVar1;
  UWorld *pUVar2;
  
  pUVar2 = (UWorld *)FWeakObjectPtr::Get(&(this->World).WeakPtr);
  if (pUVar2 == param_1) {
    this->bPauseRecording = true;
    AddNewLevel(this,param_2);
    WriteNetworkDemoHeader(this,param_3);
    pIVar1 = (this->ReplayStreamer).Object;
    if (pIVar1 != (INetworkReplayStreamer *)0x0) {
      (**(code **)(pIVar1->_padding_ + 0xe8))();
    }
  }
  return;
}

// OnStartRecordingComplete @ 14847ac30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FReplayHelper::OnStartRecordingComplete(FReplayHelper *this,FStartStreamingResult *param_1)

{
  int iVar1;
  INetworkReplayStreamer *pIVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  UEnum *pUVar9;
  wchar_t *pwVar10;
  UObject *pUVar11;
  uint uVar12;
  longlong lVar13;
  UEnum *local_res8;
  FScriptContainerElement *local_78 [2];
  FDestructionSentinel local_68;
  FNetResult local_50;
  
  if ((param_1->bRecording == false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result.bRecording",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                         ,0x82,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this->bIsWaitingForStream = false;
  iVar1 = (int)param_1->_padding_;
  this->bWasStartRecordingSuccessful = iVar1 == 0;
  if (iVar1 == 0) {
    pIVar2 = (this->ReplayStreamer).Object;
    if (pIVar2 == (INetworkReplayStreamer *)0x0) {
      return;
    }
    (**(code **)(pIVar2->_padding_ + 0x130))(pIVar2,local_78);
    pUVar11 = FWeakObjectPtr::Get(&(this->World).WeakPtr);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &FNetworkReplayDelegates::OnReplayIDChanged,(FWriteAccessScope *)&local_68);
    bVar5 = false;
    FNetworkReplayDelegates::OnReplayIDChanged._28_4_ =
         FNetworkReplayDelegates::OnReplayIDChanged._28_4_ + 1;
    uVar12 = FNetworkReplayDelegates::OnReplayIDChanged._16_4_ - 1;
    if (-1 < (int)uVar12) {
      lVar13 = (longlong)(int)uVar12 << 4;
      bVar5 = false;
      do {
        uVar8 = 0;
        if ((int)uVar12 < (int)FNetworkReplayDelegates::OnReplayIDChanged._16_4_) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (((*(int *)(lVar13 + 8 + FNetworkReplayDelegates::OnReplayIDChanged._8_8_) == 0) ||
            (plVar3 = *(longlong **)(lVar13 + FNetworkReplayDelegates::OnReplayIDChanged._8_8_),
            plVar3 == (longlong *)0x0)) ||
           (cVar7 = (**(code **)(*plVar3 + 0x68))(plVar3,pUVar11,local_78), cVar7 == '\0')) {
          bVar5 = true;
        }
        lVar13 = lVar13 + -0x10;
        uVar12 = uVar12 - 1;
      } while (-1 < (int)uVar12);
    }
    FNetworkReplayDelegates::OnReplayIDChanged._28_4_ =
         FNetworkReplayDelegates::OnReplayIDChanged._28_4_ + -1;
    if (bVar5) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &FNetworkReplayDelegates::OnReplayIDChanged,false);
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
  }
  else {
    if (2 < (byte)LogDemo._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
    }
    pUVar9 = StaticEnum<enum_EReplayResult>();
    local_50.Result = 8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UEnum *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    local_50.ResultEnumObj.WeakPtr.ObjectIndex = 0;
    local_50.ResultEnumObj.WeakPtr.ObjectSerialNumber = 0;
    local_res8 = pUVar9;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UEnum *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    FWeakObjectPtr::operator=(&local_50.ResultEnumObj.WeakPtr,(FObjectPtr)&local_res8);
    local_50.ErrorContext.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50.ErrorContext.Data.ArrayNum = 0;
    local_50.ErrorContext.Data.ArrayMax = 0;
    local_50.NextResult = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
    local_50.RawResultEnumObj = pUVar9;
    pwVar10 = ::LexToString(StreamerError);
    ::FString::operator=(&local_50.ErrorContext,pwVar10);
    UE::Net::FNetResultManager::HandleNetResult(&this->ResultManager,&local_50);
    local_78[0] = local_50.ErrorContext.Data.AllocatorInstance.Data;
    if (local_50.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
      (**(code **)((longlong)local_50.NextResult + -0x10))((longlong)local_50.NextResult + -0x10);
      local_78[0] = local_50.ErrorContext.Data.AllocatorInstance.Data;
    }
  }
  if (local_78[0] != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78[0]);
  }
  return;
}

// ProcessCheckpointActors @ 14847c670

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FReplayHelper::ProcessCheckpointActors
          (FReplayHelper *this,UNetConnection *param_1,
          TArrayView<FReplayHelper::FPendingCheckPointActor,int> *param_2,int *param_3,
          FRepActorsCheckpointParams *param_4)

{
  EResendAllDataState EVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  AActor *pAVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  UPackageMapClient *this_00;
  undefined4 uVar11;
  undefined4 uVar12;
  
  if ((param_1->PackageMap).field0_0x0.DebugPtr == (UPackageMap *)0x0) {
LAB_14847c6bb:
    this_00 = (UPackageMapClient *)0x0;
  }
  else {
    pUVar5 = Z_Construct_UClass_UPackageMapClient_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&param_1->PackageMap,pUVar5);
    if (!bVar3) goto LAB_14847c6bb;
    this_00 = (UPackageMapClient *)(param_1->PackageMap).field0_0x0.DebugPtr;
  }
  UPackageMapClient::OverridePackageMapExportAckStatus
            (this_00,&(this->CheckpointSaveContext).CheckpointAckState);
  UNetConnection::SetReserveDestroyedChannels(param_1,false);
  bVar3 = TWeakObjectPtr<UWorld,FWeakObjectPtr>::UEOpEquals(&this->World,(void *)0x0);
  if (bVar3) {
    plVar10 = (longlong *)0x0;
  }
  else {
    pUVar6 = FWeakObjectPtr::Get(&(this->World).WeakPtr);
    plVar10 = *(longlong **)&pUVar6[10].field_0x20;
    if (plVar10 != (longlong *)0x0) {
      uVar11 = (undefined4)plVar10[0x5e];
      uVar12 = (undefined4)((ulonglong)plVar10[0x5e] >> 0x20);
      (**(code **)(*plVar10 + 0x7e0))(plVar10);
      goto LAB_14847c726;
    }
  }
  uVar11 = (undefined4)__real_bff0000000000000;
  uVar12 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
LAB_14847c726:
  EVar1 = param_1->ResendAllDataState;
  iVar8 = param_2->ArrayNum;
  param_1->ResendAllDataState = (this->bHasDeltaCheckpoints != false) + SinceOpen;
  uVar9 = *param_3;
  if ((int)uVar9 < iVar8) {
    do {
      uVar4 = 0;
      if ((int)uVar9 < iVar8) {
        uVar4 = ~uVar9 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pAVar7 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)(param_2->DataPtr + (int)uVar9));
      *param_3 = *param_3 + 1;
      bVar3 = ReplicateCheckpointActor(this,pAVar7,param_1,param_4);
      if (!bVar3) break;
      uVar9 = *param_3;
      iVar8 = param_2->ArrayNum;
    } while ((int)uVar9 < iVar8);
  }
  if (plVar10 != (longlong *)0x0) {
    plVar10[0x5e] = CONCAT44(uVar12,uVar11);
  }
  FlushNetChecked(param_1);
  param_1->ResendAllDataState = EVar1;
  UNetConnection::SetReserveDestroyedChannels(param_1,true);
  UPackageMapClient::OverridePackageMapExportAckStatus(this_00,(FPackageMapAckState *)0x0);
  return;
}

// ReadDeletedStartupActors @ 14847dfa0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FReplayHelper::ReadDeletedStartupActors
          (FReplayHelper *this,UNetConnection *param_1,FArchive *param_2,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  ForAnyElementType FVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res20 [8];
  undefined1 local_38 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_30;
  
  local_30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.ArrayNum = 0;
  local_30.ArrayMax = 0;
  TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>(param_2,&local_30);
  iVar3 = local_30.ArrayNum;
  if ((uint)(*(int *)&(param_3->Elements).field_0x8 - *(int *)&(param_3->Elements).field_0x34) <
      (uint)local_30.ArrayNum) {
    if (local_30.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)local_30.ArrayNum);
    }
    TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)param_3,local_30.ArrayNum);
    if ((uint)iVar3 < 4) {
      iVar3 = 1;
    }
    else {
      uVar1 = (ulonglong)(((uint)iVar3 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar3 = 1 << ((byte)lVar2 & 0x1f);
    }
    if ((param_3->HashSize == 0) || (param_3->HashSize < iVar3)) {
      param_3->HashSize = iVar3;
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Rehash(param_3);
    }
  }
  iVar3 = local_30.ArrayNum;
  pFVar5 = local_30.AllocatorInstance.Data + (longlong)local_30.ArrayNum * 0x10;
  FVar4.Data = local_30.AllocatorInstance.Data;
  while( true ) {
    if (local_30.ArrayNum != iVar3) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (FVar4.Data == pFVar5) break;
    (**(code **)(GEngine->_padding_ + 0x498))(GEngine,param_1,FVar4.Data,1);
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
              (param_3,(FString *)local_38,(bool *)FVar4.Data);
    FVar4.Data = FVar4.Data + 0x10;
  }
  DestructItems<FString,int>((FString *)local_30.AllocatorInstance.Data,local_30.ArrayNum);
  if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.AllocatorInstance.Data);
  }
  return;
}

// ReadDemoFrame @ 14847e0d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014847f565) */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
FReplayHelper::ReadDemoFrame
          (FReplayHelper *this,UNetConnection *param_1,FArchive *param_2,
          TArray<FPlaybackPacket,TSizedDefaultAllocator<32>_> *param_3,bool param_4,long64 param_5,
          float *param_6)

{
  int *piVar1;
  int *piVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  TWeakObjectPtr<UWorld,FWeakObjectPtr> *this_00;
  UPackageMapClient *this_01;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FReplayHelper *this_02;
  undefined8 *puVar10;
  bool bVar11;
  undefined1 uVar12;
  char cVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<_private:_bool___cdecl_FReplayHelper::ReadDemoFrame(UNetConnection_*,FArchive_&,TArray<FPlaybackPacket,TSizedDefaultAllocator<32>_>_&,bool,__int64,float_*)_::_2_::FStat_ReadDemoFrame>
  FVar18;
  UEnum *pUVar19;
  wchar_t *pwVar20;
  INetworkReplayStreamer *pIVar21;
  TStatId TVar22;
  UClass *pUVar23;
  FLevelStatus *pFVar24;
  UObject *pUVar25;
  ULevelStreaming *pUVar26;
  UWorld *this_03;
  longlong lVar27;
  TStatIdData *pTVar28;
  longlong lVar29;
  longlong lVar30;
  FThreadStats *this_04;
  FThreadStatsPool *this_05;
  FString *pFVar31;
  ForAnyElementType FVar32;
  longlong *plVar33;
  FStaticBasicLogRecord *pFVar34;
  FName FVar35;
  FName FVar36;
  wchar_t *pwVar37;
  byte bVar38;
  undefined8 *puVar39;
  bool bVar40;
  uint uVar41;
  bool bVar42;
  float fVar43;
  undefined1 auStackY_4a8 [32];
  float local_444;
  undefined1 local_440 [4];
  uint local_43c;
  uint local_438;
  uint local_434;
  uint local_430;
  uint local_42c;
  longlong local_428;
  FName local_420;
  ulong64 local_418;
  FReplayHelper *local_410;
  FName local_408;
  FString local_400;
  FString local_3f0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_3e0;
  float local_3d0;
  uint local_3cc;
  undefined4 local_3c8 [2];
  ulong64 local_3c0;
  FColor_u_0 local_3b8;
  FColor_u_0 local_3b4;
  undefined1 local_3b0 [16];
  byte local_3a0;
  FName local_398;
  undefined8 local_390;
  FName local_388;
  TArray<FPlaybackPacket,TSizedDefaultAllocator<32>_> *local_380;
  FString local_378;
  FName local_368;
  FName local_358;
  FString local_348;
  FString local_338;
  FNetResult local_328;
  FNetResult local_2f8;
  FNetResult local_2c8;
  FNetResult local_298;
  LARGE_INTEGER local_268;
  UEnum *local_260;
  UEnum *local_258;
  undefined8 *local_250;
  UEnum *local_248;
  UEnum *local_240;
  FStatMessage local_238;
  FSourceLocation local_228;
  float *local_208;
  TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_200;
  FName local_1f8;
  FName local_1f0;
  FName local_1e8;
  FName local_1e0;
  FName local_1d8;
  FName local_1d0;
  FName local_1c8;
  FName local_1c0;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  undefined1 local_188 [128];
  TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  local_108;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [24];
  double dStack_80;
  undefined1 local_78 [24];
  double dStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_4a8;
  local_410 = this;
  local_380 = param_3;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Purple,"FReplayHelper_ReadDemoFrame");
  bVar42 = -1 < CpuChannel->Enabled;
  if (bVar42) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1828,"FReplayHelper_ReadDemoFrame",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
               ,0x724);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1828);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_ReadDemoFrame =
         (FThreadSafeStaticStat<_private:_bool___cdecl_FReplayHelper::ReadDemoFrame(UNetConnection_*,FArchive_&,TArray<FPlaybackPacket,TSizedDefaultAllocator<32>_>_&,bool,__int64,float_*)_::_2_::FStat_ReadDemoFrame>
          )0x0;
    pFVar17 = ::FName::FName(&local_1c0,"ReadDemoFrame");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_ReadDemoFrame,*pFVar17,L"ReadDemoFrame",
               "STATGROUP_Net","STATCAT_Advanced",L"Net",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar18 = StatPtr_ReadDemoFrame;
  if (StatPtr_ReadDemoFrame ==
      (FThreadSafeStaticStat<_private:_bool___cdecl_FReplayHelper::ReadDemoFrame(UNetConnection_*,FArchive_&,TArray<FPlaybackPacket,TSizedDefaultAllocator<32>_>_&,bool,__int64,float_*)_::_2_::FStat_ReadDemoFrame>
       )0x0) {
    pFVar17 = ::FName::FName(&local_1d0,"ReadDemoFrame");
    FVar18 = (FThreadSafeStaticStat<_private:_bool___cdecl_FReplayHelper::ReadDemoFrame(UNetConnection_*,FArchive_&,TArray<FPlaybackPacket,TSizedDefaultAllocator<32>_>_&,bool,__int64,float_*)_::_2_::FStat_ReadDemoFrame>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_ReadDemoFrame,*pFVar17,
                          L"ReadDemoFrame","STATGROUP_Net","STATCAT_Advanced",L"Net",true,true,
                          ST_int64,true,false,MCR_Invalid);
  }
  local_358.ComparisonIndex.Value = 0;
  local_358.Number = 0;
  bVar8 = false;
  bVar7 = false;
  FVar36 = *(FName *)FVar18;
  if ((FVar36.ComparisonIndex.Value.Value == 0) && (FVar36.Number == 0)) {
LAB_14847e35f:
    bVar9 = false;
    local_408 = local_358;
    FVar36 = local_358;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_3b8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_3b8._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_398.ComparisonIndex.Value = FVar36.ComparisonIndex.Value.Value;
        local_398.Number = FVar36.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_398,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                   ,0x726);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14847e35f;
    local_420 = FVar36;
    local_408 = FVar36;
    FThreadStats::AddMessage(FVar36,CycleScopeStart);
    bVar9 = true;
  }
  if (((param_4) && (this->bHasLevelStreamingFixes == false)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bForLevelFastForward || HasLevelStreamingFixes()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                          ,0x728,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    uVar12 = (*pcVar5)();
    return (bool)uVar12;
  }
  if ((param_1 == (UNetConnection *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Connection",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                          ,0x729,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    uVar12 = (*pcVar5)();
    return (bool)uVar12;
  }
  if ((param_2->field_0x29 & 2) == 0) {
    cVar13 = (**(code **)(*(longlong *)param_2 + 0x38))(param_2);
    if (cVar13 != '\0') goto LAB_14847e4ce;
    if (((this->ReplayStreamer).Object == (INetworkReplayStreamer *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar5 = (code *)swi(3);
      uVar12 = (*pcVar5)();
      return (bool)uVar12;
    }
    local_420 = (FName)&this->ResultManager;
    cVar13 = (**(code **)(((this->ReplayStreamer).Object)->_padding_ + 0x170))();
    if (cVar13 == '\x01') {
      pUVar19 = StaticEnum<enum_EReplayResult>();
      local_2f8.Result = 8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar19 != (UEnum *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar19);
      }
      local_2f8.ResultEnumObj.WeakPtr.ObjectIndex = 0;
      local_2f8.ResultEnumObj.WeakPtr.ObjectSerialNumber = 0;
      local_248 = pUVar19;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar19 != (UEnum *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar19);
      }
      FWeakObjectPtr::operator=(&local_2f8.ResultEnumObj.WeakPtr,(FObjectPtr)&local_248);
      local_2f8.ErrorContext.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2f8.ErrorContext.Data.ArrayNum = 0;
      local_2f8.ErrorContext.Data.ArrayMax = 0;
      local_2f8.NextResult = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
      local_2f8.RawResultEnumObj = pUVar19;
      pwVar20 = ::LexToString(StreamerError);
      ::FString::operator=(&local_2f8.ErrorContext,pwVar20);
      UE::Net::FNetResultManager::HandleNetResult((FNetResultManager *)local_420,&local_2f8);
      FVar32.Data = local_2f8.ErrorContext.Data.AllocatorInstance.Data;
      if (local_2f8.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
        (**(code **)((longlong)local_2f8.NextResult + -0x10))
                  ((longlong)local_2f8.NextResult + -0x10);
        FVar32.Data = local_2f8.ErrorContext.Data.AllocatorInstance.Data;
      }
    }
    else {
      if (this->bIsLoadingCheckpoint == false) {
        pIVar21 = TSharedPtr<INetworkReplayStreamer,1>::operator->(&this->ReplayStreamer);
        cVar13 = (**(code **)(pIVar21->_padding_ + 0x68))(pIVar21);
        if (cVar13 == '\0') goto LAB_14847e4ce;
      }
      plVar33 = *(longlong **)&param_2->field_0x8;
      local_438 = 0;
      if ((uint *)plVar33[1] < (uint *)*plVar33 + 1) {
        if ((param_2->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_438,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_2,&local_438);
        }
      }
      else {
        local_438 = *(uint *)*plVar33;
        *plVar33 = *plVar33 + 4;
      }
      plVar33 = *(longlong **)&param_2->field_0x8;
      local_444 = 0.0;
      local_428 = 0x2a;
      if ((float *)plVar33[1] < (float *)*plVar33 + 1) {
        if ((param_2->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_444,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_2,(uint *)&local_444);
        }
      }
      else {
        local_444 = *(float *)*plVar33;
        *plVar33 = *plVar33 + 4;
      }
      if (param_6 != (float *)0x0) {
        *param_6 = local_444;
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        StatPtr_Demo_ReceiveExports =
             (FThreadSafeStaticStat<_private:_bool___cdecl_FReplayHelper::ReadDemoFrame(UNetConnection_*,FArchive_&,TArray<FPlaybackPacket,TSizedDefaultAllocator<32>_>_&,bool,__int64,float_*)_::_50_::FStat_Demo_ReceiveExports>
              )0x0;
        pFVar17 = ::FName::FName(&local_1c8,"Demo_ReceiveExports");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_Demo_ReceiveExports,*pFVar17,
                   L"Demo_ReceiveExports","STATGROUP_Net","STATCAT_Advanced",L"Net",true,true,
                   ST_int64,true,false,MCR_Invalid);
        _Init_thread_footer(&::_TSS1);
      }
      TVar22.StatIdPtr = (TStatIdData *)StatPtr_Demo_ReceiveExports;
      if (StatPtr_Demo_ReceiveExports ==
          (FThreadSafeStaticStat<_private:_bool___cdecl_FReplayHelper::ReadDemoFrame(UNetConnection_*,FArchive_&,TArray<FPlaybackPacket,TSizedDefaultAllocator<32>_>_&,bool,__int64,float_*)_::_50_::FStat_Demo_ReceiveExports>
           )0x0) {
        pFVar17 = ::FName::FName(&local_1f8,"Demo_ReceiveExports");
        TVar22.StatIdPtr =
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_Demo_ReceiveExports,*pFVar17,
                        L"Demo_ReceiveExports","STATGROUP_Net","STATCAT_Advanced",L"Net",true,true,
                        ST_int64,true,false,MCR_Invalid);
      }
      local_228.Impl._Line = 0x753;
      local_228.Impl._File =
           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
      ;
      local_228.Impl._Column = 3;
      local_228.Impl._Function =
           "bool __cdecl FReplayHelper::ReadDemoFrame(class UNetConnection *,class FArchive &,class TArray<struct FPlaybackPacket,class TSizedDefaultAllocator<32> > &,const bool,const __int64,float *)"
      ;
      FScopeCycleCounter::FScopeCycleCounter
                ((FScopeCycleCounter *)(local_3b0 + 8),TVar22,CycleStat|ClearEveryFrame,false,
                 &local_228);
      if ((param_1->PackageMap).field0_0x0.DebugPtr == (UPackageMap *)0x0) {
        pFVar31 = GetTypeName<UPackageMapClient>(&local_198);
        if ((pFVar31->Data).ArrayNum == 0) {
          pwVar20 = L"";
        }
        else {
          pwVar20 = (wchar_t *)(pFVar31->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar20);
      }
      pUVar23 = Z_Construct_UClass_UPackageMapClient_NoRegister();
      bVar11 = FObjectPtr::IsA((FObjectPtr *)&param_1->PackageMap,pUVar23);
      if ((!bVar11) ||
         (this_01 = (UPackageMapClient *)(param_1->PackageMap).field0_0x0.DebugPtr,
         this_01 == (UPackageMapClient *)0x0)) {
        pFVar31 = GetTypeName<UPackageMapClient>(&local_1b8);
        pwVar20 = L"";
        if ((pFVar31->Data).ArrayNum == 0) {
          pwVar37 = L"";
        }
        else {
          pwVar37 = (wchar_t *)(pFVar31->Data).AllocatorInstance.Data;
        }
        pFVar31 = GetFullNameForCastLogError<UPackageMap>
                            (&local_1a8,(param_1->PackageMap).field0_0x0.DebugPtr);
        if ((pFVar31->Data).ArrayNum != 0) {
          pwVar20 = (wchar_t *)(pFVar31->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar20,pwVar37);
      }
      UPackageMapClient::ReceiveExportData(this_01,param_2);
      if ((local_3a0 & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((local_3a0 & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((local_3a0 & 4) != 0) {
        FThreadStats::AddMessage((FName)local_3b0._8_8_,CycleScopeEnd);
      }
      local_3a0 = 0;
      if (((this->bIsLoadingCheckpoint != false) || (param_4)) ||
         (this->LatestReadFrameTime <= local_444 && local_444 != this->LatestReadFrameTime)) {
        bVar38 = 1;
      }
      else {
        bVar38 = 0;
      }
      fVar43 = this->LatestReadFrameTime;
      if (this->LatestReadFrameTime <= local_444) {
        fVar43 = local_444;
      }
      this->LatestReadFrameTime = fVar43;
      if (this->bHasLevelStreamingFixes == false) {
        local_42c = 0;
        (**(code **)(*(longlong *)param_2 + 0x1a0))(param_2,&local_42c);
        local_434 = 0;
        if (local_42c != 0) {
          this_00 = &this->World;
LAB_14847eae0:
          local_400.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_400.Data.ArrayNum = 0;
          local_400.Data.ArrayMax = 0;
          local_3f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_3f0.Data.ArrayNum = 0;
          local_3f0.Data.ArrayMax = 0;
          local_b8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_b8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_b8._12_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_a8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_a8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_a8._12_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_98._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_98._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_98._12_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          unique0x10000889 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_98._16_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          unique0x1000088d =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_78._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_78._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_78._12_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          unique0x100008ad = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_78._16_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          unique0x100008b1 =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          ::operator<<(param_2,&local_400);
          ::operator<<(param_2,&local_3f0);
          UE::Math::operator<<(param_2,(TQuat<double> *)local_b8);
          UE::Math::operator<<(param_2,(TVector<double> *)local_98);
          UE::Math::operator<<(param_2,(TVector<double> *)local_78);
          if ((param_2->field_0x28 & 1) != 0) {
            dStack_80 = 0.0;
            dStack_60 = 0.0;
          }
          pUVar25 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          puVar39 = *(undefined8 **)&pUVar25[3].field_0x18;
          iVar15 = *(int *)&pUVar25[3].field_0x20;
          local_250 = puVar39 + iVar15;
          do {
            puVar10 = local_250;
            if (*(int *)&pUVar25[3].field_0x20 != iVar15) {
              local_440[0] = 0;
              `TCheckedPointerIterator<ULevelStreaming_*_const,int,0>::operator!='::__l2::<lambda_1>
              ::operator()(local_440);
            }
            if (puVar39 == puVar10) {
              local_390 = 0;
              pUVar25 = FWeakObjectPtr::Get(&this_00->WeakPtr);
              FObjectInitializer::AssertIfInConstructor
                        (pUVar25,
                         L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                        );
              pUVar23 = Z_Construct_UClass_ULevelStreamingDynamic_NoRegister();
              FStaticConstructObjectParameters::FStaticConstructObjectParameters
                        ((FStaticConstructObjectParameters *)local_188,pUVar23);
              local_188._48_8_ = (FObjectInstancingGraph *)0x0;
              local_188._56_8_ = (UPackage *)0x0;
              local_188._16_4_ = 0;
              local_188._20_4_ = 0;
              local_188._24_4_ = RF_NoFlags;
              local_188._40_8_ = (UObject *)0x0;
              local_188[0x20] = false;
              local_188._8_8_ = pUVar25;
              pUVar26 = (ULevelStreaming *)
                        StaticConstructObject_Internal
                                  ((FStaticConstructObjectParameters *)local_188);
              if (local_188._64_8_ != 0) {
                plVar33 = (longlong *)(local_188 + 0x50);
                if ((longlong *)local_188._104_8_ != (longlong *)0x0) {
                  plVar33 = (longlong *)local_188._104_8_;
                }
                (**(code **)(*plVar33 + 0x10))();
              }
              (**(code **)(pUVar26->_padding_ + 0x2d0))(pUVar26,1);
              ULevelStreaming::SetShouldBeVisible(pUVar26,true);
              pUVar26->bShouldBlockOnLoad = '\0';
              *(uint *)&pUVar26[1]._padding_ = (uint)pUVar26[1]._padding_ | 3;
              (pUVar26->LevelTransform).Rotation.XY.m128d_f64[0] = (double)local_b8._0_8_;
              (pUVar26->LevelTransform).Rotation.XY.m128d_f64[1] = (double)local_b8._8_8_;
              (pUVar26->LevelTransform).Rotation.ZW.m128d_f64[0] = (double)local_a8._0_8_;
              (pUVar26->LevelTransform).Rotation.ZW.m128d_f64[1] = (double)local_a8._8_8_;
              (pUVar26->LevelTransform).Translation.XY.m128d_f64[0] = (double)local_98._0_8_;
              (pUVar26->LevelTransform).Translation.XY.m128d_f64[1] = (double)local_98._8_8_;
              (pUVar26->LevelTransform).Translation.ZW.m128d_f64[0] = (double)local_98._16_8_;
              (pUVar26->LevelTransform).Translation.ZW.m128d_f64[1] = dStack_80;
              (pUVar26->LevelTransform).Scale3D.XY.m128d_f64[0] = (double)local_78._0_8_;
              (pUVar26->LevelTransform).Scale3D.XY.m128d_f64[1] = (double)local_78._8_8_;
              (pUVar26->LevelTransform).Scale3D.ZW.m128d_f64[0] = (double)local_78._16_8_;
              (pUVar26->LevelTransform).Scale3D.ZW.m128d_f64[1] = dStack_60;
              FVar32.Data = (FScriptContainerElement *)L"";
              if (local_3f0.Data.ArrayNum != 0) {
                FVar32.Data = local_3f0.Data.AllocatorInstance.Data;
              }
              pFVar17 = ::FName::FName(&local_1f0,(wchar_t *)FVar32.Data);
              pUVar26->PackageNameToLoad = *pFVar17;
              FVar32.Data = (FScriptContainerElement *)L"";
              if (local_400.Data.ArrayNum != 0) {
                FVar32.Data = local_400.Data.AllocatorInstance.Data;
              }
              pFVar17 = ::FName::FName(&local_1e8,(wchar_t *)FVar32.Data);
              ULevelStreaming::SetWorldAssetByPackageName(pUVar26,*pFVar17);
              this_03 = (UWorld *)FWeakObjectPtr::Get(&this_00->WeakPtr);
              UWorld::AddStreamingLevel(this_03,pUVar26);
              if (4 < (byte)LogDemo._0_1_) {
                UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
              }
              if (local_3f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_3f0.Data.AllocatorInstance.Data);
              }
              if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_400.Data.AllocatorInstance.Data);
              }
              goto LAB_14847eeb0;
            }
            pUVar26 = (ULevelStreaming *)*puVar39;
            ULevelStreaming::GetWorldAssetPackageName(pUVar26,&local_338);
            ::FName::ToString(&pUVar26->PackageNameToLoad,&local_348);
            iVar16 = local_338.Data.ArrayNum;
            if (iVar16 == local_400.Data.ArrayNum) {
              if (1 < iVar16) {
                iVar16 = FGenericPlatformStricmp::Stricmp
                                   ((wchar_t *)local_338.Data.AllocatorInstance.Data,
                                    (wchar_t *)local_400.Data.AllocatorInstance.Data);
                bVar11 = iVar16 == 0;
                goto LAB_14847ec53;
              }
LAB_14847ec5a:
              iVar16 = local_348.Data.ArrayNum;
              if (iVar16 == local_3f0.Data.ArrayNum) {
                if (iVar16 < 2) goto LAB_14847ecb3;
                iVar16 = FGenericPlatformStricmp::Stricmp
                                   ((wchar_t *)local_348.Data.AllocatorInstance.Data,
                                    (wchar_t *)local_3f0.Data.AllocatorInstance.Data);
                bVar11 = iVar16 == 0;
              }
              else {
                bVar11 = iVar16 + local_3f0.Data.ArrayNum == 1;
              }
              if (bVar11) goto LAB_14847ecb3;
            }
            else {
              bVar11 = iVar16 + local_400.Data.ArrayNum == 1;
LAB_14847ec53:
              if (bVar11) goto LAB_14847ec5a;
            }
            if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_348.Data.AllocatorInstance.Data);
            }
            if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_338.Data.AllocatorInstance.Data);
            }
            puVar39 = puVar39 + 1;
          } while( true );
        }
      }
      else {
        local_430 = 0;
        (**(code **)(*(longlong *)param_2 + 0x1a0))(param_2,&local_430);
        this_02 = local_410;
        if ((bVar38 == 0) || (param_4)) {
          bVar11 = false;
        }
        else {
          bVar11 = true;
        }
        uVar41 = 0;
        this = local_410;
        if (local_430 != 0) {
          do {
            local_378.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_378.Data.ArrayNum = 0;
            local_378.Data.ArrayMax = 0;
            ::operator<<(param_2,&local_378);
            if (bVar11) {
              pFVar24 = FindOrAddLevelStatus(this_02,&local_378);
              pTVar3 = &this_02->SeenLevelStatuses;
              pFVar4 = (pTVar3->AllocatorInstance).Data;
              piVar1 = &pFVar24->LevelIndex;
              if (((pFVar4 <= piVar1) &&
                  (piVar1 < pFVar4 + (longlong)(this_02->SeenLevelStatuses).ArrayMax * 4)) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar14)) {
                pcVar5 = (code *)swi(3);
                uVar12 = (*pcVar5)();
                return (bool)uVar12;
              }
              iVar15 = (this_02->SeenLevelStatuses).ArrayNum;
              piVar2 = &(this_02->SeenLevelStatuses).ArrayMax;
              if (iVar15 == *piVar2) {
                iVar15 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&pTVar3->AllocatorInstance,piVar2);
              }
              (this_02->SeenLevelStatuses).ArrayNum = iVar15 + 1;
              *(int *)((pTVar3->AllocatorInstance).Data + (longlong)iVar15 * 4) = *piVar1;
            }
            if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_378.Data.AllocatorInstance.Data);
            }
            uVar41 = uVar41 + 1;
            this = local_410;
          } while (uVar41 < local_430);
        }
      }
LAB_14847eed1:
      lVar29 = local_428;
      if ((param_2->field_0x29 & 2) == 0) {
        local_3c0 = 0;
        if (this->bHasLevelStreamingFixes != false) {
          plVar33 = *(longlong **)&param_2->field_0x8;
          if ((ulong64 *)plVar33[1] < (ulong64 *)*plVar33 + 1) {
            if (((&param_2->field_0x0)[local_428] & 1) == 0) {
              (**(code **)(*(longlong *)param_2 + 0x188))();
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_2,&local_3c0);
            }
          }
          else {
            local_3c0 = *(ulong64 *)*plVar33;
            *plVar33 = *plVar33 + 8;
          }
        }
        if (param_4) {
          lVar27 = *(longlong *)param_2;
          lVar30 = (**(code **)(lVar27 + 0x28))(param_2);
          (**(code **)(lVar27 + 0x1b8))(param_2,lVar30 + local_3c0);
        }
        else {
          LoadExternalData(this,param_2,local_444);
        }
        local_418 = 0;
        if (this->bHasGameSpecificFrameData != false) {
          plVar33 = *(longlong **)&param_2->field_0x8;
          if ((ulong64 *)plVar33[1] < (ulong64 *)*plVar33 + 1) {
            if (((&param_2->field_0x0)[lVar29] & 1) == 0) {
              (**(code **)(*(longlong *)param_2 + 0x188))();
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_2,&local_418);
            }
          }
          else {
            local_418 = *(ulong64 *)*plVar33;
            *plVar33 = *plVar33 + 8;
          }
          if (((longlong)local_418 < 1) || (param_4)) {
            lVar29 = *(longlong *)param_2;
            lVar27 = (**(code **)(lVar29 + 0x28))(param_2);
            (**(code **)(lVar29 + 0x1b8))(param_2,lVar27 + local_418);
          }
          else {
            local_108.Elements._44_4_ = 0x80;
            local_108.Elements._0_8_ = 0;
            local_108.Elements._8_8_ = 0;
            local_108.Elements._32_8_ = 0;
            local_108.Elements._40_4_ = 0;
            local_108.Elements._52_4_ = 0;
            local_108.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
            local_108.HashSize = 0;
            local_108.Elements._48_4_ = 0xffffffff;
            TSetPrivateFriend::
            Serialize<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      (param_2,&local_108);
            if (0 < (int)(local_108.Elements._8_4_ - local_108.Elements._52_4_)) {
              local_208 = &local_444;
              local_200 = &local_108;
              TSet<TTuple<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
              ::
              Emplace<TPairInitializer<float_&,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>_&&>_>
                        ((TSet<TTuple<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
                          *)&this->PlaybackFrames,
                         (TPairInitializer<float_&,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>_&&>
                          *)local_3b0,(bool *)&local_208);
            }
            local_108.HashSize = 0;
            if (local_108.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_108.Hash.SecondaryData);
            }
            TSparseArray<TSparseSetElement<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_108.Elements);
          }
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < DAT_15523bd00) &&
           (_Init_thread_header(&DAT_15523bd00), DAT_15523bd00 == -1)) {
          DAT_15523bcf8 = (TStatIdData *)0x0;
          pFVar17 = ::FName::FName(&local_1e0,"Demo_ReadPackets");
          FThreadSafeStaticStatBase::DoSetup
                    ((FThreadSafeStaticStatBase *)&DAT_15523bcf8,*pFVar17,L"Demo_ReadPackets",
                     "STATGROUP_Net","STATCAT_Advanced",L"Net",true,true,ST_int64,true,false,
                     MCR_Invalid);
          _Init_thread_footer(&DAT_15523bd00);
        }
        pTVar28 = DAT_15523bcf8;
        if (DAT_15523bcf8 == (TStatIdData *)0x0) {
          pFVar17 = ::FName::FName(&local_1d8,"Demo_ReadPackets");
          pTVar28 = FThreadSafeStaticStatBase::DoSetup
                              ((FThreadSafeStaticStatBase *)&DAT_15523bcf8,*pFVar17,
                               L"Demo_ReadPackets","STATGROUP_Net","STATCAT_Advanced",L"Net",true,
                               true,ST_int64,true,false,MCR_Invalid);
        }
        FVar35 = *(FName *)&pTVar28->Name;
        bVar11 = false;
        bVar14 = false;
        local_368.ComparisonIndex.Value = 0;
        local_368.Number = 0;
        if ((FVar35.ComparisonIndex.Value.Value != 0) || (FVar35.Number != 0)) {
          if (GCycleStatsShouldEmitNamedEvents != 0) {
            local_3b4.Bits = 0;
            FGenericPlatformMisc::BeginNamedEvent
                      ((FColor *)&local_3b4._s_0,(pTVar28->StatDescriptionAnsi).Ptr);
            bVar11 = false;
            bVar14 = true;
            if (-1 < CpuChannel->Enabled) {
              local_388.ComparisonIndex.Value = FVar35.ComparisonIndex.Value.Value;
              local_388.Number = FVar35.Number;
              FCpuProfilerTrace::OutputBeginDynamicEventWithId
                        (&local_388,(pTVar28->StatDescriptionWide).Ptr,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                         ,0x7d7);
              bVar11 = true;
              bVar14 = true;
            }
          }
          if (FThreadStats::bPrimaryEnable != false) {
            local_408 = FVar35;
            FThreadStats::AddMessage(FVar35,CycleScopeStart);
            bVar6 = true;
            goto LAB_14847f396;
          }
        }
        bVar6 = false;
        FVar35 = local_368;
LAB_14847f396:
        uVar41 = bVar38 ^ 1;
        local_3d0 = local_444;
        local_3cc = local_438;
        local_3c8[0] = 0xffffffff;
        local_434 = uVar41;
        do {
          local_3e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_3e0.ArrayNum = 0;
          local_3e0.ArrayMax = 0;
          do {
            if ((param_5 != 0) &&
               (lVar29 = (**(code **)(*(longlong *)param_2 + 0x28))(param_2), param_5 <= lVar29)) {
              if (local_3e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_3e0.AllocatorInstance.Data);
              }
              if (bVar14) {
                FGenericPlatformMisc::EndNamedEvent();
              }
              if (bVar11) {
                FCpuProfilerTrace::OutputEndEvent();
              }
              if (bVar6) {
                FThreadStats::AddMessage(FVar35,CycleScopeEnd);
              }
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("false",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                                  ,0x80b,L"");
              if (bVar11) {
                pcVar5 = (code *)swi(3);
                uVar12 = (*pcVar5)();
                return (bool)uVar12;
              }
              goto LAB_14847e4ce;
            }
            if (local_410->bHasLevelStreamingFixes != false) {
              (**(code **)(*(longlong *)param_2 + 0x1a0))(param_2,local_3c8);
            }
            plVar33 = *(longlong **)&param_2->field_0x8;
            local_43c = 0;
            if ((uint *)plVar33[1] < (uint *)*plVar33 + 1) {
              if (((&param_2->field_0x0)[local_428] & 1) == 0) {
                (**(code **)(*(longlong *)param_2 + 0x188))();
              }
              else {
                FArchive::SerializeByteOrderSwapped(param_2,&local_43c);
              }
            }
            else {
              local_43c = *(uint *)*plVar33;
              *plVar33 = *plVar33 + 4;
            }
            if ((param_2->field_0x29 & 2) != 0) {
              if (1 < (byte)LogDemo._0_1_) {
                pFVar34 = &::LOG_Static;
                goto LAB_14847f62a;
              }
              goto LAB_14847f652;
            }
            lVar29 = (longlong)(int)local_43c;
            if (local_43c == 0) {
              bVar40 = true;
LAB_14847f725:
              if (local_3e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_3e0.AllocatorInstance.Data);
              }
              if (bVar14) {
                FGenericPlatformMisc::EndNamedEvent();
              }
              if (bVar11) {
                FCpuProfilerTrace::OutputEndEvent();
              }
              if ((((bVar6) && (FVar35 != (FName)0x0)) &&
                  (FThreadStats::bPrimaryDisableForever == false)) &&
                 (FThreadStats::TlsSlot != 0xffffffff)) {
                this_04 = TlsGetValue(FThreadStats::TlsSlot);
                if (this_04 == (FThreadStats *)0x0) {
                  this_05 = FThreadStatsPool::Get();
                  this_04 = FThreadStatsPool::GetFromPool(this_05);
                }
                if (this_04->bWaitForExplicitFlush < this_04->ScopeCount) {
                  local_238.NameAndInfo.Index = FVar35.ComparisonIndex.Value;
                  local_238.NameAndInfo.Number = FVar35.Number & 0xffff6fff | 0x6000;
                  QueryPerformanceCounter(&local_268);
                  local_238.StatData.Pad[4] = '\0';
                  local_238.StatData.Pad[5] = '\0';
                  local_238.StatData.Pad[6] = '\0';
                  local_238.StatData.Pad[7] = '\0';
                  local_238.StatData.Pad[0] = local_268.s.LowPart._0_1_;
                  local_238.StatData.Pad[1] = local_268.s.LowPart._1_1_;
                  local_238.StatData.Pad[2] = local_268.s.LowPart._2_1_;
                  local_238.StatData.Pad[3] = local_268.s.LowPart._3_1_;
                  FThreadStats::AddStatMessage(this_04,&local_238);
                  piVar1 = &this_04->ScopeCount;
                  *piVar1 = *piVar1 + -1;
                  if (*piVar1 == 0) {
                    FThreadStats::Flush(this_04,false,false);
                  }
                  else if (FThreadStats::bIsRawStatsActive != false) {
                    FThreadStats::FlushRawStats(this_04,false,false);
                  }
                }
              }
              goto LAB_14847e4d1;
            }
            if (0x800 < (int)local_43c) {
              if (1 < (byte)LogDemo._0_1_) {
                pFVar34 = &::LOG_Static;
LAB_14847f62a:
                UE::Logging::Private::BasicLog<2>(pFVar34,(FLogCategoryBase *)&LogDemo);
                if (1 < (byte)LogDemo._0_1_) {
                  UE::Logging::Private::BasicLog<2>
                            ((FStaticBasicLogRecord *)&PTR_u_FReplayHelper___151ad0388,
                             (FLogCategoryBase *)&LogDemo);
                }
              }
LAB_14847f652:
              pUVar19 = StaticEnum<enum_EReplayResult>();
              local_298.Result = 7;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar19 != (UEnum *)0x0))
              {
                UE::GC::MarkAsReachable((UObject *)pUVar19);
              }
              bVar40 = false;
              local_298.ResultEnumObj.WeakPtr.ObjectIndex = 0;
              local_298.ResultEnumObj.WeakPtr.ObjectSerialNumber = 0;
              local_260 = pUVar19;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar19 != (UEnum *)0x0))
              {
                UE::GC::MarkAsReachable((UObject *)pUVar19);
              }
              FWeakObjectPtr::operator=(&local_298.ResultEnumObj.WeakPtr,(FObjectPtr)&local_260);
              local_298.ErrorContext.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_298.ErrorContext.Data.ArrayNum = 0;
              local_298.ErrorContext.Data.ArrayMax = 0;
              local_298.NextResult = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
              local_298.RawResultEnumObj = pUVar19;
              pwVar20 = ::LexToString(Serialization);
              ::FString::operator=(&local_298.ErrorContext,pwVar20);
              UE::Net::FNetResultManager::HandleNetResult((FNetResultManager *)local_420,&local_298)
              ;
              if (local_298.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
                (**(code **)((longlong)local_298.NextResult + -0x10))
                          ((longlong)local_298.NextResult + -0x10);
              }
              if (local_298.ErrorContext.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_298.ErrorContext.Data.AllocatorInstance.Data);
              }
              goto LAB_14847f725;
            }
            if ((int)local_43c < 0) {
              if (1 < (byte)LogDemo._0_1_) {
                pFVar34 = &::LOG_Static;
                goto LAB_14847f62a;
              }
              goto LAB_14847f652;
            }
            if ((char)uVar41 == '\0') {
              TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                        (&local_3e0,local_43c,No);
              (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_3e0.AllocatorInstance.Data);
            }
            else {
              lVar27 = *(longlong *)param_2;
              lVar30 = (**(code **)(lVar27 + 0x28))(param_2);
              (**(code **)(lVar27 + 0x1b8))(param_2,lVar29 + lVar30);
              uVar41 = local_434;
            }
            if ((param_2->field_0x29 & 2) != 0) {
              if (1 < (byte)LogDemo._0_1_) {
                pFVar34 = &::LOG_Static;
                goto LAB_14847f62a;
              }
              goto LAB_14847f652;
            }
          } while (uVar41 == 1);
          iVar15 = local_380->ArrayNum;
          if (iVar15 == local_380->ArrayMax) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x820,&local_380->AllocatorInstance,&local_380->ArrayMax);
          }
          local_380->ArrayNum = iVar15 + 1;
          pFVar4 = (local_380->AllocatorInstance).Data;
          lVar29 = (longlong)iVar15 * 0x20;
          *(undefined8 *)(pFVar4 + lVar29) = 0;
          *(FScriptContainerElement **)(pFVar4 + lVar29) = local_3e0.AllocatorInstance.Data;
          *(int *)(pFVar4 + lVar29 + 8) = local_3e0.ArrayNum;
          *(int *)(pFVar4 + lVar29 + 0xc) = local_3e0.ArrayMax;
          *(float *)(pFVar4 + lVar29 + 0x10) = local_3d0;
          *(uint *)(pFVar4 + lVar29 + 0x14) = local_3cc;
          *(undefined4 *)(pFVar4 + lVar29 + 0x18) = local_3c8[0];
        } while( true );
      }
      if (1 < (byte)LogDemo._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
      }
      pUVar19 = StaticEnum<enum_EReplayResult>();
      local_2c8.Result = 7;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar19 != (UEnum *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar19);
      }
      local_2c8.ResultEnumObj.WeakPtr.ObjectIndex = 0;
      local_2c8.ResultEnumObj.WeakPtr.ObjectSerialNumber = 0;
      local_258 = pUVar19;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar19 != (UEnum *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar19);
      }
      FWeakObjectPtr::operator=(&local_2c8.ResultEnumObj.WeakPtr,(FObjectPtr)&local_258);
      local_2c8.ErrorContext.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2c8.ErrorContext.Data.ArrayNum = 0;
      local_2c8.ErrorContext.Data.ArrayMax = 0;
      local_2c8.NextResult = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
      local_2c8.RawResultEnumObj = pUVar19;
      pwVar20 = ::LexToString(Serialization);
      ::FString::operator=(&local_2c8.ErrorContext,pwVar20);
      UE::Net::FNetResultManager::HandleNetResult((FNetResultManager *)local_420,&local_2c8);
      FVar32.Data = local_2c8.ErrorContext.Data.AllocatorInstance.Data;
      if (local_2c8.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
        (**(code **)((longlong)local_2c8.NextResult + -0x10))
                  ((longlong)local_2c8.NextResult + -0x10);
        FVar32.Data = local_2c8.ErrorContext.Data.AllocatorInstance.Data;
      }
    }
  }
  else {
    if (1 < (byte)LogDemo._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
    }
    pUVar19 = StaticEnum<enum_EReplayResult>();
    local_328.Result = 7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar19 != (UEnum *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar19);
    }
    local_328.ResultEnumObj.WeakPtr.ObjectIndex = 0;
    local_328.ResultEnumObj.WeakPtr.ObjectSerialNumber = 0;
    local_240 = pUVar19;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar19 != (UEnum *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar19);
    }
    FWeakObjectPtr::operator=(&local_328.ResultEnumObj.WeakPtr,(FObjectPtr)&local_240);
    local_328.ErrorContext.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_328.ErrorContext.Data.ArrayNum = 0;
    local_328.ErrorContext.Data.ArrayMax = 0;
    local_328.NextResult = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
    local_328.RawResultEnumObj = pUVar19;
    pwVar20 = ::LexToString(Serialization);
    ::FString::operator=(&local_328.ErrorContext,pwVar20);
    UE::Net::FNetResultManager::HandleNetResult(&this->ResultManager,&local_328);
    FVar32.Data = local_328.ErrorContext.Data.AllocatorInstance.Data;
    if (local_328.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
      (**(code **)((longlong)local_328.NextResult + -0x10))((longlong)local_328.NextResult + -0x10);
      FVar32.Data = local_328.ErrorContext.Data.AllocatorInstance.Data;
    }
  }
  if (FVar32.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar32.Data);
  }
LAB_14847e4ce:
  bVar40 = false;
LAB_14847e4d1:
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FThreadStats::AddMessage(FVar36,CycleScopeEnd);
  }
  if (bVar42) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return bVar40;
LAB_14847ecb3:
  if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.Data.AllocatorInstance.Data);
  }
  if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_338.Data.AllocatorInstance.Data);
  }
  if (local_3f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3f0.Data.AllocatorInstance.Data);
  }
  if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_400.Data.AllocatorInstance.Data);
  }
LAB_14847eeb0:
  local_434 = local_434 + 1;
  FVar36 = local_408;
  this = local_410;
  if (local_42c <= local_434) goto LAB_14847eed1;
  goto LAB_14847eae0;
}

// ReadPacket @ 14847f8a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

EReadPacketState __cdecl
FReplayHelper::ReadPacket
          (FArchive *param_1,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,
          EReadPacketMode param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  FStaticBasicLogRecord *pFVar4;
  longlong lVar5;
  uint local_res18 [4];
  
  local_res18[0] = 0;
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res18);
    }
  }
  else {
    local_res18[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if ((param_1->field_0x29 & 2) == 0) {
    lVar5 = (longlong)(int)local_res18[0];
    if (local_res18[0] == 0) {
      return End;
    }
    if ((int)local_res18[0] < 0x801) {
      if ((int)local_res18[0] < 0) {
        if ((byte)LogDemo._0_1_ < 2) {
          return Error;
        }
        pFVar4 = &::LOG_Static;
      }
      else {
        if (param_3 == SkipData) {
          lVar2 = *(longlong *)param_1;
          lVar3 = (**(code **)(lVar2 + 0x28))(param_1);
          (**(code **)(lVar2 + 0x1b8))(param_1,lVar5 + lVar3);
        }
        else {
          TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                    (param_2,local_res18[0],No);
          (**(code **)(*(longlong *)param_1 + 0x188))
                    (param_1,(param_2->AllocatorInstance).Data,(longlong)(int)local_res18[0]);
        }
        if ((param_1->field_0x29 & 2) == 0) {
          return Success;
        }
        if ((byte)LogDemo._0_1_ < 2) {
          return Error;
        }
        pFVar4 = &::LOG_Static;
      }
    }
    else {
      if ((byte)LogDemo._0_1_ < 2) {
        return Error;
      }
      pFVar4 = &::LOG_Static;
    }
  }
  else {
    if ((byte)LogDemo._0_1_ < 2) {
      return Error;
    }
    pFVar4 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<2>(pFVar4,(FLogCategoryBase *)&LogDemo);
  return Error;
}

// ReadPlaybackDemoHeader @ 14847fa10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FReplayHelper::ReadPlaybackDemoHeader(FReplayHelper *this,FString *param_1)

{
  EReplayHeaderFlags EVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  FNetworkDemoHeader *pFVar9;
  FArchive *pFVar10;
  UEnum *pUVar11;
  wchar_t *pwVar12;
  FString *pFVar13;
  INetworkReplayStreamer *pIVar14;
  longlong *plVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  longlong lVar18;
  UEnum *local_res8;
  UEnum *local_res18;
  UEnum *local_res20;
  FString local_278;
  FNetResult local_268;
  FNetResult local_238;
  FNetResult local_208;
  FNetResult local_1d8;
  UEnum *local_1a8;
  FDestructionSentinel local_1a0;
  FString local_188;
  FReadAccessScope local_178;
  FReadAccessScope local_160;
  FOverridableReplayVersionData local_148;
  FNetworkDemoHeader local_f8;
  
  FWeakObjectPtr::Get(&(this->World).WeakPtr);
  pFVar9 = FNetworkDemoHeader::FNetworkDemoHeader(&local_f8);
  FNetworkDemoHeader::operator=(&this->PlaybackDemoHeader,pFVar9);
  DestructItems<FString,int>
            ((FString *)local_f8.GameSpecificData.AllocatorInstance.Data,
             local_f8.GameSpecificData.ArrayNum);
  if (local_f8.GameSpecificData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.GameSpecificData.AllocatorInstance.Data);
  }
  DestructItems<FLevelNameAndTime,int>
            ((FLevelNameAndTime *)local_f8.LevelNamesAndTimes.AllocatorInstance.Data,
             local_f8.LevelNamesAndTimes.ArrayNum);
  if ((FLevelNameAndTime *)local_f8.LevelNamesAndTimes.AllocatorInstance.Data !=
      (FLevelNameAndTime *)0x0) {
    FMemory::Free(local_f8.LevelNamesAndTimes.AllocatorInstance.Data);
  }
  if (local_f8.EngineVersion.Branch.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.EngineVersion.Branch.Data.AllocatorInstance.Data);
  }
  if (local_f8.Platform.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Platform.Data.AllocatorInstance.Data);
  }
  if (local_f8.CustomVersions.Versions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.CustomVersions.Versions.AllocatorInstance.Data);
  }
  FNetworkDemoHeader::SetDefaultNetworkVersions(&this->PlaybackDemoHeader);
  if (((this->ReplayStreamer).Object == (INetworkReplayStreamer *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pFVar10 = (FArchive *)(**(code **)(((this->ReplayStreamer).Object)->_padding_ + 0x18))();
  if (pFVar10 == (FArchive *)0x0) {
    ::FString::PrintfImpl(&local_278,L"Couldn\'t open demo file %s for reading");
    if (param_1 != &local_278) {
      pFVar2 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (param_1->Data).AllocatorInstance.Data = local_278.Data.AllocatorInstance.Data;
      (param_1->Data).ArrayNum = local_278.Data.ArrayNum;
      (param_1->Data).ArrayMax = local_278.Data.ArrayMax;
      local_278.Data.ArrayNum = 0;
      local_278.Data.ArrayMax = 0;
      local_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Data.AllocatorInstance.Data);
    }
    if (1 < (byte)LogDemo._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
    }
    pUVar11 = StaticEnum<enum_EReplayResult>();
    local_268.Result = 1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UEnum *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
    local_268.ResultEnumObj.WeakPtr.ObjectIndex = 0;
    local_268.ResultEnumObj.WeakPtr.ObjectSerialNumber = 0;
    local_res8 = pUVar11;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UEnum *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
    FWeakObjectPtr::operator=(&local_268.ResultEnumObj.WeakPtr,(FObjectPtr)&local_res8);
    local_268.ErrorContext.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_268.ErrorContext.Data.ArrayNum = 0;
    local_268.ErrorContext.Data.ArrayMax = 0;
    local_268.NextResult = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
    local_268.RawResultEnumObj = pUVar11;
    pwVar12 = ::LexToString(ReplayNotFound);
    ::FString::operator=(&local_268.ErrorContext,pwVar12);
    UE::Net::FNetResultManager::HandleNetResult(&this->ResultManager,&local_268);
    FVar16.Data = local_268.ErrorContext.Data.AllocatorInstance.Data;
    if (local_268.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
      (**(code **)((longlong)local_268.NextResult + -0x10))((longlong)local_268.NextResult + -0x10);
      FVar16.Data = local_268.ErrorContext.Data.AllocatorInstance.Data;
    }
  }
  else {
    pFVar10->field_0x2b = pFVar10->field_0x2b | 0x80;
    *(undefined8 *)&pFVar10->field_0x38 = 0x1000000;
    ::operator<<(pFVar10,&this->PlaybackDemoHeader);
    if ((pFVar10->field_0x29 & 2) == 0) {
      EVar1 = (this->PlaybackDemoHeader).HeaderFlags;
      uVar17 = EVar1 >> 2;
      this->bHasLevelStreamingFixes = (bool)((byte)(EVar1 >> 1) & 1);
      this->bHasDeltaCheckpoints = (bool)((byte)uVar17 & 1);
      if ((uVar17 & 1) != 0) {
        pIVar14 = TSharedPtr<INetworkReplayStreamer,1>::operator->(&this->ReplayStreamer);
        cVar6 = (**(code **)(pIVar14->_padding_ + 0x48))(pIVar14,1);
        if (cVar6 == '\0') {
          if (1 < (byte)LogDemo._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
          }
          pUVar11 = StaticEnum<enum_EReplayResult>();
          local_208.Result = 3;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UEnum *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar11);
          }
          local_208.ResultEnumObj.WeakPtr.ObjectIndex = 0;
          local_208.ResultEnumObj.WeakPtr.ObjectSerialNumber = 0;
          local_res20 = pUVar11;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UEnum *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar11);
          }
          FWeakObjectPtr::operator=(&local_208.ResultEnumObj.WeakPtr,(FObjectPtr)&local_res20);
          local_208.ErrorContext.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_208.ErrorContext.Data.ArrayNum = 0;
          local_208.ErrorContext.Data.ArrayMax = 0;
          local_208.NextResult = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
          local_208.RawResultEnumObj = pUVar11;
          pwVar12 = ::LexToString(UnsupportedCheckpoint);
          ::FString::operator=(&local_208.ErrorContext,pwVar12);
          UE::Net::FNetResultManager::HandleNetResult(&this->ResultManager,&local_208);
          FVar16.Data = local_208.ErrorContext.Data.AllocatorInstance.Data;
          if (local_208.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
            (**(code **)((longlong)local_208.NextResult + -0x10))
                      ((longlong)local_208.NextResult + -0x10);
            FVar16.Data = local_208.ErrorContext.Data.AllocatorInstance.Data;
          }
          goto LAB_14848018c;
        }
      }
      this->bHasGameSpecificFrameData =
           (bool)((byte)((this->PlaybackDemoHeader).HeaderFlags >> 3) & 1);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &FNetworkReplayDelegates::OnProcessGameSpecificDemoHeader,
                 (FWriteAccessScope *)&local_1a0);
      bVar4 = false;
      FNetworkReplayDelegates::OnProcessGameSpecificDemoHeader._28_4_ =
           FNetworkReplayDelegates::OnProcessGameSpecificDemoHeader._28_4_ + 1;
      uVar17 = FNetworkReplayDelegates::OnProcessGameSpecificDemoHeader._16_4_ - 1;
      if (-1 < (int)uVar17) {
        lVar18 = (longlong)(int)uVar17 << 4;
        bVar4 = false;
        do {
          uVar8 = 0;
          if ((int)uVar17 < (int)FNetworkReplayDelegates::OnProcessGameSpecificDemoHeader._16_4_) {
            uVar8 = ~uVar17 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          if (((*(int *)(FNetworkReplayDelegates::OnProcessGameSpecificDemoHeader._8_8_ + 8 + lVar18
                        ) == 0) ||
              (plVar15 = *(longlong **)
                          (FNetworkReplayDelegates::OnProcessGameSpecificDemoHeader._8_8_ + lVar18),
              plVar15 == (longlong *)0x0)) ||
             (cVar6 = (**(code **)(*plVar15 + 0x68))
                                (plVar15,&(this->PlaybackDemoHeader).GameSpecificData,param_1),
             cVar6 == '\0')) {
            bVar4 = true;
          }
          lVar18 = lVar18 + -0x10;
          uVar17 = uVar17 - 1;
        } while (-1 < (int)uVar17);
      }
      FNetworkReplayDelegates::OnProcessGameSpecificDemoHeader._28_4_ =
           FNetworkReplayDelegates::OnProcessGameSpecificDemoHeader._28_4_ + -1;
      if (bVar4) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &FNetworkReplayDelegates::OnProcessGameSpecificDemoHeader,false);
      }
      if (local_1a0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a0.Accessor,&local_1a0);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &FNetworkReplayDelegates::GetOverridableVersionDataForHeaderRead,&local_178);
      if (((FNetworkReplayDelegates::GetOverridableVersionDataForHeaderRead._16_4_ == 0) ||
          (FNetworkReplayDelegates::GetOverridableVersionDataForHeaderRead._8_8_ == 0)) ||
         (cVar6 = (**(code **)(*(longlong *)
                                FNetworkReplayDelegates::GetOverridableVersionDataForHeaderRead.
                                _8_8_ + 0x38))(), cVar6 == '\0')) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_178);
      if (bVar4) {
        FOverridableReplayVersionData::FOverridableReplayVersionData
                  (&local_148,&this->PlaybackDemoHeader);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &FNetworkReplayDelegates::GetOverridableVersionDataForHeaderRead,&local_160);
        plVar15 = (longlong *)0x0;
        if (FNetworkReplayDelegates::GetOverridableVersionDataForHeaderRead._16_4_ != 0) {
          plVar15 = (longlong *)
                    FNetworkReplayDelegates::GetOverridableVersionDataForHeaderRead._8_8_;
        }
        (**(code **)(*plVar15 + 0x60))(plVar15,&local_148);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_160);
        FOverridableReplayVersionData::ApplyVersionDataToDemoHeader
                  (&local_148,&this->PlaybackDemoHeader);
        if (local_148.EngineVersion.Branch.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.EngineVersion.Branch.Data.AllocatorInstance.Data);
        }
        if (local_148.CustomVersions.Versions.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.CustomVersions.Versions.AllocatorInstance.Data);
        }
      }
      if ((param_1->Data).ArrayNum < 2) {
        return true;
      }
      if (1 < (byte)LogDemo._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
      }
      pUVar11 = StaticEnum<enum_EReplayResult>();
      local_1d8.Result = 4;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UEnum *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar11);
      }
      local_1d8.ResultEnumObj.WeakPtr.ObjectIndex = 0;
      local_1d8.ResultEnumObj.WeakPtr.ObjectSerialNumber = 0;
      local_1a8 = pUVar11;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UEnum *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar11);
      }
      FWeakObjectPtr::operator=(&local_1d8.ResultEnumObj.WeakPtr,(FObjectPtr)&local_1a8);
      local_1d8.ErrorContext.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1d8.ErrorContext.Data.ArrayNum = 0;
      local_1d8.ErrorContext.Data.ArrayMax = 0;
      local_1d8.NextResult = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
      local_1d8.RawResultEnumObj = pUVar11;
      pwVar12 = ::LexToString(GameSpecific);
      ::FString::operator=(&local_1d8.ErrorContext,pwVar12);
      UE::Net::FNetResultManager::HandleNetResult(&this->ResultManager,&local_1d8);
      FVar16.Data = local_1d8.ErrorContext.Data.AllocatorInstance.Data;
      if (local_1d8.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
        (**(code **)((longlong)local_1d8.NextResult + -0x10))
                  ((longlong)local_1d8.NextResult + -0x10);
        FVar16.Data = local_1d8.ErrorContext.Data.AllocatorInstance.Data;
      }
    }
    else {
      pFVar13 = ::FString::FString(&local_188,L"Demo file is corrupt");
      if (param_1 != pFVar13) {
        pFVar2 = (param_1->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (param_1->Data).AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
        (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (param_1->Data).ArrayNum = (pFVar13->Data).ArrayNum;
        (param_1->Data).ArrayMax = (pFVar13->Data).ArrayMax;
        (pFVar13->Data).ArrayNum = 0;
        (pFVar13->Data).ArrayMax = 0;
      }
      if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data.AllocatorInstance.Data);
      }
      if (1 < (byte)LogDemo._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
      }
      pUVar11 = StaticEnum<enum_EReplayResult>();
      local_238.Result = 2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UEnum *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar11);
      }
      local_238.ResultEnumObj.WeakPtr.ObjectIndex = 0;
      local_238.ResultEnumObj.WeakPtr.ObjectSerialNumber = 0;
      local_res18 = pUVar11;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UEnum *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar11);
      }
      FWeakObjectPtr::operator=(&local_238.ResultEnumObj.WeakPtr,(FObjectPtr)&local_res18);
      local_238.ErrorContext.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_238.ErrorContext.Data.ArrayNum = 0;
      local_238.ErrorContext.Data.ArrayMax = 0;
      local_238.NextResult = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
      local_238.RawResultEnumObj = pUVar11;
      pwVar12 = ::LexToString(Corrupt);
      ::FString::operator=(&local_238.ErrorContext,pwVar12);
      UE::Net::FNetResultManager::HandleNetResult(&this->ResultManager,&local_238);
      FVar16.Data = local_238.ErrorContext.Data.AllocatorInstance.Data;
      if (local_238.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
        (**(code **)((longlong)local_238.NextResult + -0x10))
                  ((longlong)local_238.NextResult + -0x10);
        FVar16.Data = local_238.ErrorContext.Data.AllocatorInstance.Data;
      }
    }
  }
LAB_14848018c:
  if (FVar16.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar16.Data);
  }
  return false;
}

// RecordFrame @ 1484802a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FReplayHelper::RecordFrame(FReplayHelper *this,float param_1,UNetConnection *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  FArchive *pFVar8;
  UObject *pUVar9;
  undefined8 *puVar10;
  undefined1 local_res8 [8];
  TWeakObjectPtr<UObject,FWeakObjectPtr> local_res20;
  TWeakObjectPtr<UObject,FWeakObjectPtr> local_58;
  FWeakObjectPtr local_50;
  UObject *local_48;
  FWeakObjectPtr local_40;
  
  if (((this->ReplayStreamer).Object == (INetworkReplayStreamer *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar8 = (FArchive *)(**(code **)(((this->ReplayStreamer).Object)->_padding_ + 0x20))();
  if (pFVar8 != (FArchive *)0x0) {
    if (this->bHasLevelStreamingFixes == false) {
      pUVar9 = FWeakObjectPtr::Get(&(this->World).WeakPtr);
      puVar10 = *(undefined8 **)&pUVar9[3].field_0x18;
      iVar2 = *(int *)&pUVar9[3].field_0x20;
      puVar1 = puVar10 + iVar2;
      while( true ) {
        if (*(int *)&pUVar9[3].field_0x20 != iVar2) {
          `TCheckedPointerIterator<ULevelStreaming_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (puVar10 == puVar1) break;
        pUVar3 = (UObject *)*puVar10;
        if (((pUVar3 != (UObject *)0x0) &&
            (cVar6 = (**(code **)(*(longlong *)pUVar3 + 0x2e8))(pUVar3), cVar6 != '\0')) &&
           (cVar6 = (**(code **)(*(longlong *)pUVar3 + 0x300))(pUVar3), cVar6 == '\0')) {
          local_50.ObjectIndex = 0;
          local_50.ObjectSerialNumber = 0;
          local_48 = pUVar3;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar3);
          }
          FWeakObjectPtr::operator=(&local_50,(FObjectPtr)&local_48);
          local_40 = local_50;
          iVar7 = TSet<TWeakObjectPtr<UObject,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                  ::FindIndexByHash<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>
                            (&this->UniqueStreamingLevels,
                             local_50.ObjectSerialNumber ^ local_50.ObjectIndex,
                             (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_40);
          if (iVar7 == -1) {
            TSet<TWeakObjectPtr<UObject,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
            ::Emplace<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&>
                      (&this->UniqueStreamingLevels,&local_res20,(bool *)&local_50);
            TSet<TWeakObjectPtr<UObject,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
            ::Emplace<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&>
                      (&this->NewStreamingLevelsThisFrame,&local_58,(bool *)&local_50);
          }
        }
        puVar10 = puVar10 + 1;
      }
    }
    FlushNetChecked(param_2);
    WriteDemoFrame(this,param_2,pFVar8,&this->QueuedDemoPackets,this->DemoCurrentTime,None);
  }
  return;
}

// RemoveActorFromCheckpoint @ 148485c30

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
FReplayHelper::RemoveActorFromCheckpoint
          (FReplayHelper *this,UNetConnection *param_1,AActor *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  code *pcVar6;
  FWeakObjectPtr FVar7;
  bool bVar8;
  TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*> *pTVar9;
  AActor *pAVar10;
  uint uVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  float fVar15;
  int local_res8 [2];
  undefined4 local_res10 [2];
  int local_res20 [2];
  FWeakObjectPtr local_b8;
  FWeakObjectPtr local_b0;
  FWeakObjectPtr local_a8 [2];
  FPendingCheckPointActor *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  FString local_88;
  AActor *local_78;
  AActor *local_70;
  FName local_68;
  FScriptContainerElement *local_60;
  FRepActorsCheckpointParams local_58;
  TArrayView<FReplayHelper::FPendingCheckPointActor,int> local_48;
  
  if ((param_1 == (UNetConnection *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Connection",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                         ,0x8d8,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((this->CheckpointSaveContext).CheckpointSaveState == ProcessCheckpointActors) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    local_b0.ObjectIndex = 0;
    local_b0.ObjectSerialNumber = 0;
    local_78 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_b0,(FObjectPtr)&local_78);
    pTVar9 = TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
                     *)&param_1->ActorChannels,
                    (TWeakObjectPtr<AActor_const_,FWeakObjectPtr>)local_b0);
    if (((pTVar9 != (TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*> *)0x0) &&
        (lVar3 = *(longlong *)&pTVar9->field_0x8, lVar3 != 0)) && (*(int *)(lVar3 + 0x34) != -1)) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (AActor *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      local_b8.ObjectIndex = 0;
      local_b8.ObjectSerialNumber = 0;
      local_70 = param_2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (AActor *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      FWeakObjectPtr::operator=(&local_b8,(FObjectPtr)&local_70);
      if (*(int *)&(this->CheckpointSaveContext).PendingActorToIndex.field_0x8 !=
          *(int *)&(this->CheckpointSaveContext).PendingActorToIndex.field_0x34) {
        puVar12 = *(undefined1 **)&(this->CheckpointSaveContext).PendingActorToIndex.field_0x40;
        if (puVar12 == (undefined1 *)0x0) {
          puVar12 = &(this->CheckpointSaveContext).PendingActorToIndex.field_0x38;
        }
        iVar13 = *(int *)(puVar12 +
                         (((ulonglong)local_b8 >> 0x20 ^ (ulonglong)local_b8 & 0xffffffff) &
                         (ulonglong)
                         (*(int *)&(this->CheckpointSaveContext).PendingActorToIndex.field_0x48 - 1)
                         ) * 4);
        if (iVar13 != -1) {
          lVar4 = *(longlong *)&(this->CheckpointSaveContext).PendingActorToIndex;
          do {
            uVar5 = *(undefined8 *)(lVar4 + (longlong)iVar13 * 0x14);
            lVar1 = lVar4 + (longlong)iVar13 * 0x14;
            if (((int)uVar5 == local_b8.ObjectIndex) &&
               ((int)((ulonglong)uVar5 >> 0x20) == local_b8.ObjectSerialNumber)) {
              if (iVar13 == -1) {
                return;
              }
              puVar14 = (uint *)(lVar1 + 8);
              if (lVar1 == 0) {
                puVar14 = (uint *)0x0;
              }
              if (puVar14 == (uint *)0x0) {
                return;
              }
              uVar2 = *puVar14;
              if ((int)uVar2 < 0) {
                return;
              }
              if ((this->CheckpointSaveContext).PendingCheckpointActors.ArrayNum <= (int)uVar2) {
                return;
              }
              if ((int)uVar2 < (this->CheckpointSaveContext).NextAmortizedItem) {
                return;
              }
              uVar11 = 0;
              if ((int)uVar2 < (this->CheckpointSaveContext).PendingCheckpointActors.ArrayNum) {
                uVar11 = ~uVar2 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pAVar10 = (AActor *)
                        FWeakObjectPtr::Get((FWeakObjectPtr *)
                                            ((this->CheckpointSaveContext).PendingCheckpointActors.
                                             AllocatorInstance.Data + (longlong)(int)uVar2 * 0xc));
              if (pAVar10 != param_2) {
                return;
              }
              if (5 < (byte)LogDemo._0_1_) {
                if (param_2 == (AActor *)0x0) {
                  ::FString::FString(&local_88,L"None");
                }
                else {
                  local_68 = (FName)param_2->_padding_;
                  ::FName::ToString(&local_68,&local_88);
                }
                UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
                if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_88.Data.AllocatorInstance.Data);
                }
              }
              local_58.StartCheckpointTime = FWindowsPlatformTime::Seconds();
              fVar15 = GetCheckpointSaveMaxMSPerFrame(this);
              iVar13 = (this->CheckpointSaveContext).PendingCheckpointActors.ArrayNum;
              local_60 = (this->CheckpointSaveContext).PendingCheckpointActors.AllocatorInstance.
                         Data;
              local_58.CheckpointMaxUploadTimePerFrame = (double)fVar15 * __real_3f50624dd2f1a9fc;
              if ((iVar13 < 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InCount >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0xeb,L""), bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uVar2 = *puVar14;
              local_res8[0] = 0;
              if (((int)uVar2 < 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x15b,L"Invalid index (%lld)"), bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              if ((iVar13 < (int)(uVar2 + 1)) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index + InNum <= ArrayNum",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x15d,
                                     L"Range (index: %lld, count: %lld) lies outside the view of %lld elements"
                                    ), bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uStack_90 = 1;
              local_98 = (FPendingCheckPointActor *)(local_60 + (longlong)(int)uVar2 * 0xc);
              local_48._12_4_ = uStack_8c;
              local_48.ArrayNum = 1;
              local_48.DataPtr = local_98;
              ProcessCheckpointActors(this,param_1,&local_48,local_res8,&local_58);
              local_a8[0].ObjectIndex = 0;
              local_a8[0].ObjectSerialNumber = 0;
              local_98 = (FPendingCheckPointActor *)0x0;
              FWeakObjectPtr::operator=(local_a8,(FObjectPtr)&local_98);
              FVar7 = local_a8[0];
              uVar2 = *puVar14;
              uVar11 = 0;
              if ((int)uVar2 < (this->CheckpointSaveContext).PendingCheckpointActors.ArrayNum) {
                uVar11 = ~uVar2 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              *(FWeakObjectPtr *)
               ((this->CheckpointSaveContext).PendingCheckpointActors.AllocatorInstance.Data +
               (longlong)(int)uVar2 * 0xc) = FVar7;
              local_res10[0] = *(undefined4 *)(lVar3 + 0x34);
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                        (&param_1->ReservedChannels,local_res20,(bool *)local_res10);
              return;
            }
            iVar13 = *(int *)(lVar1 + 0xc);
          } while (iVar13 != -1);
        }
      }
    }
  }
  return;
}

// ReplicateActor @ 148487470

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FReplayHelper::ReplicateActor
          (FReplayHelper *this,AActor *param_1,UNetConnection *param_2,bool param_3)

{
  uint uVar1;
  int iVar2;
  UNetDriver *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  FNameEntryId FVar8;
  UClass *pUVar9;
  ULevel *pUVar10;
  TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*> *pTVar11;
  undefined4 extraout_var;
  UActorChannel *this_00;
  long64 lVar12;
  bool bVar13;
  undefined1 local_68 [4];
  FWeakObjectPtr local_64;
  FName local_5c;
  AActor *local_50;
  FName local_48;
  FScopedActorRoleSwap local_40;
  FString local_38;
  
  bVar5 = UNetDriver::IsDormInitialStartupActor(param_1);
  if (bVar5) {
    return false;
  }
  if (((param_2 == (UNetConnection *)0x0) ||
      ((param_2->Driver).field0_0x0.DebugPtr == (UNetDriver *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Connection && Connection->Driver",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                         ,0x6ec,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pUVar3 = (param_2->Driver).field0_0x0.DebugPtr;
  bVar5 = false;
  uVar1 = pUVar3->OutBunches;
  AActor::CallPreReplication(param_1,pUVar3);
  FScopedActorRoleSwap::FScopedActorRoleSwap(&local_40,param_1);
  if (((param_1->RemoteRole).Value == '\0') && (param_1->bTearOff == 0)) goto LAB_148487693;
  if ((AActor *)param_2->_padding_ == (AActor *)0x0) {
    bVar13 = param_1 == (AActor *)0x0;
  }
  else {
    bVar13 = (AActor *)param_2->_padding_ == param_1;
  }
  if (!bVar13) {
    pUVar9 = Z_Construct_UClass_APlayerController_NoRegister();
    iVar2 = (int)pUVar9->_padding_;
    if ((iVar2 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar9->_padding_)) goto LAB_148487693;
  }
  if ((param_1->bRelevantForNetworkReplays == '\0') || (param_1->bTearOff != 0)) {
LAB_1484875a3:
    bVar13 = false;
  }
  else {
    bVar13 = AActor::IsNetStartupActor(param_1);
    if (bVar13) {
      pcVar4 = *(code **)(param_2->_padding_ + 0x3a0);
      pUVar10 = AActor::GetLevel(param_1);
      cVar7 = (*pcVar4)(param_2,pUVar10);
      if (cVar7 == '\0') goto LAB_1484875a3;
    }
    bVar13 = true;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  this_00 = (UActorChannel *)0x0;
  local_64.ObjectIndex = 0;
  local_64.ObjectSerialNumber = 0;
  local_50 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_64,(FObjectPtr)&local_50);
  pTVar11 = TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
                    *)&param_2->ActorChannels,(TWeakObjectPtr<AActor_const_,FWeakObjectPtr>)local_64
                  );
  if (pTVar11 != (TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*> *)0x0) {
    this_00 = *(UActorChannel **)&pTVar11->field_0x8;
  }
  if (bVar13) {
    if (this_00 == (UActorChannel *)0x0) {
      FVar8 = FNameEntryId::FromValidEName((EName)local_68);
      local_5c.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar8.Value);
      local_5c.Number = 0;
      this_00 = (UActorChannel *)
                UNetConnection::CreateChannelByName(param_2,&local_5c,OpenedLocally,-1);
      if (this_00 == (UActorChannel *)0x0) goto LAB_148487693;
      UActorChannel::SetChannelActor(this_00,param_1,None);
    }
  }
  else if (this_00 == (UActorChannel *)0x0) goto LAB_148487693;
  if ((this_00->_padding_ & 2) == 0) {
    lVar12 = UActorChannel::ReplicateActor(this_00);
    bVar5 = 0 < lVar12;
    if ((!bVar13) && (param_2->ResendAllDataState == None)) {
      (**(code **)(this_00->_padding_ + 0x2c8))(this_00,param_1->bTearOff << 2);
    }
  }
LAB_148487693:
  if ((((param_3) && (this->bHasDeltaCheckpoints == false)) &&
      (((param_2->Driver).field0_0x0.DebugPtr)->OutBunches == uVar1)) && (1 < (byte)LogDemo._0_1_))
  {
    local_48 = (FName)param_1->_padding_;
    ::FName::ToString(&local_48,&local_38);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  FScopedActorRoleSwap::~FScopedActorRoleSwap(&local_40);
  return bVar5;
}

// ReplicateCheckpointActor @ 148487750

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FReplayHelper::ReplicateCheckpointActor
          (FReplayHelper *this,AActor *param_1,UNetConnection *param_2,
          FRepActorsCheckpointParams *param_3)

{
  int iVar1;
  bool bVar2;
  FNameEntryId FVar3;
  UWorld *pUVar4;
  TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*> *pTVar5;
  undefined4 extraout_var;
  UActorChannel *this_00;
  UClass *pUVar6;
  LARGE_INTEGER local_res10;
  FWeakObjectPtr local_28;
  FName local_20;
  
  if (param_1 == (AActor *)0x0) {
    return true;
  }
  pUVar4 = AActor::GetWorld(param_1);
  if (pUVar4 == (UWorld *)0x0) {
    return true;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_28.ObjectIndex = 0;
  local_28.ObjectSerialNumber = 0;
  local_res10 = (LARGE_INTEGER)param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_28,(FObjectPtr)&local_res10);
  pTVar5 = TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
                   *)&param_2->ActorChannels,(TWeakObjectPtr<AActor_const_,FWeakObjectPtr>)local_28)
  ;
  if ((pTVar5 == (TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*> *)0x0) ||
     (*(longlong *)&pTVar5->field_0x8 == 0)) {
    if ((param_1->NetDormancy).Value < 2) {
      return true;
    }
    FVar3 = FNameEntryId::FromValidEName((EName)&local_res10);
    local_20.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar3.Value);
    local_20.Number = 0;
    this_00 = (UActorChannel *)
              UNetConnection::CreateChannelByName(param_2,&local_20,OpenedLocally,-1);
    if (this_00 == (UActorChannel *)0x0) {
      return true;
    }
    pUVar6 = Z_Construct_UClass_UActorChannel_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if (*(int *)(this_00->_padding_ + 0x38) < iVar1) {
      return true;
    }
    if ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar6->_padding_) {
      return true;
    }
    UActorChannel::SetChannelActor(this_00,param_1,SkipMarkActive);
    bVar2 = ReplicateActor(this,param_1,param_2,true);
    *(uint *)&this_00->_padding_ = (uint)this_00->_padding_ & 0xfffffe7f;
    *(uint *)&this_00->_padding_ = (uint)this_00->_padding_ | 4;
    if (bVar2) {
      (**(code **)(this_00->_padding_ + 0x2c8))(this_00);
    }
    UChannel::ConditionalCleanUp((UChannel *)this_00,false,Dormancy);
  }
  else {
    ReplicateActor(this,param_1,param_2,true);
  }
  QueryPerformanceCounter(&local_res10);
  if ((0.0 < param_3->CheckpointMaxUploadTimePerFrame) &&
     (param_3->CheckpointMaxUploadTimePerFrame <
      ((double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle +
      __real_4170000000000000) - param_3->StartCheckpointTime)) {
    return false;
  }
  return true;
}

// RequestCheckpoint @ 148487d70

void __thiscall FReplayHelper::RequestCheckpoint(FReplayHelper *this)

{
  this->bPendingCheckpointRequest = true;
  return;
}

// ResetDeltaCheckpointTracking @ 148488a50

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FReplayHelper::ResetDeltaCheckpointTracking(FReplayHelper *this,UNetConnection *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  UNetDriver *this_00;
  FNetGUIDCache *this_01;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator> *pTVar9;
  TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator> *pTVar10;
  bool bVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<_private:_void___cdecl_FReplayHelper::ResetDeltaCheckpointTracking(UNetConnection_*)_::_2_::FStat_STAT_ReplayResetDeltaCheckpoint>
  FVar13;
  FNetworkObjectList *this_02;
  longlong lVar14;
  FNameEntryId FVar15;
  FName FVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  undefined1 *puVar20;
  uint *puVar21;
  uint uVar22;
  uint local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18 [2];
  int local_res20;
  FName local_c8;
  FName local_c0;
  TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator> *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator> *local_80;
  TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator> *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  FName local_48;
  FName local_40;
  
  iVar18 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_ReplayResetDeltaCheckpoint ==
        (FThreadSafeStaticStat<_private:_void___cdecl_FReplayHelper::ResetDeltaCheckpointTracking(UNetConnection_*)_::_2_::FStat_STAT_ReplayResetDeltaCheckpoint>
         )0x0) {
      pFVar12 = ::FName::FName(&local_48,"STAT_ReplayResetDeltaCheckpoint");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ReplayResetDeltaCheckpoint,*pFVar12,
                 L"ReplayResetDeltaCheckpoint time","STATGROUP_Net","STATCAT_Advanced",L"Net",true,
                 true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar13 = StatPtr_STAT_ReplayResetDeltaCheckpoint;
  if (StatPtr_STAT_ReplayResetDeltaCheckpoint ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FReplayHelper::ResetDeltaCheckpointTracking(UNetConnection_*)_::_2_::FStat_STAT_ReplayResetDeltaCheckpoint>
       )0x0) {
    pFVar12 = ::FName::FName(&local_40,"STAT_ReplayResetDeltaCheckpoint");
    FVar13 = (FThreadSafeStaticStat<_private:_void___cdecl_FReplayHelper::ResetDeltaCheckpointTracking(UNetConnection_*)_::_2_::FStat_STAT_ReplayResetDeltaCheckpoint>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ReplayResetDeltaCheckpoint,
                          *pFVar12,L"ReplayResetDeltaCheckpoint time","STATGROUP_Net",
                          "STATCAT_Advanced",L"Net",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar13;
  bVar6 = false;
  bVar8 = false;
  local_c0.ComparisonIndex.Value = 0;
  local_c0.Number = 0;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar17 = FVar16.Number;
  if ((FVar15.Value != 0) || (uVar17 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_c8.ComparisonIndex.Value = FVar15.Value;
        local_c8.Number = uVar17;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_c8,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                   ,0x931);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10 = FVar15.Value;
      uStackX_14 = uVar17;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar7 = true;
      goto LAB_148488bba;
    }
  }
  bVar7 = false;
  FVar16 = local_c0;
LAB_148488bba:
  if ((param_1 != (UNetConnection *)0x0) &&
     (this_00 = (param_1->Driver).field0_0x0.DebugPtr, this_00 != (UNetDriver *)0x0)) {
    this_02 = UNetDriver::GetNetworkObjectList(this_00);
    FNetworkObjectList::ResetReplayDirtyTracking(this_02);
    this_01 = (((param_1->Driver).field0_0x0.DebugPtr)->GuidCache).Object;
    if (this_01 != (FNetGUIDCache *)0x0) {
      FNetGUIDCache::ResetReplayDirtyTracking(this_01);
    }
    puVar1 = &(this_00->AllOwnedReplicators).Elements.field_0x10;
    uStack_a4 = 1;
    iVar3 = *(int *)&(this_00->AllOwnedReplicators).Elements.field_0x28;
    local_b0 = &this_00->AllOwnedReplicators;
    local_90 = 0;
    iStack_94 = local_90;
    if (iVar3 != 0) {
      puVar21 = *(uint **)&(this_00->AllOwnedReplicators).Elements.field_0x20;
      if (puVar21 == (uint *)0x0) {
        puVar21 = (uint *)puVar1;
      }
      uVar17 = *puVar21;
      local_90 = 0;
      iVar18 = 0;
      while (uVar17 == 0) {
        lVar14 = (longlong)iVar18;
        local_90 = local_90 + 0x20;
        iVar18 = iVar18 + 1;
        iStack_94 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_148488c8d;
        uVar17 = puVar21[lVar14 + 1];
      }
      uStack_a4 = -uVar17 & uVar17;
      uVar2 = (ulonglong)uStack_a4 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_res20 = (int)lVar14;
      iStack_94 = local_res20 + -1 + local_90;
      if (iVar3 < iStack_94) {
        iStack_94 = iVar3;
      }
    }
LAB_148488c8d:
    iStack_88 = *(int *)&(this_00->AllOwnedReplicators).Elements.field_0x8 -
                *(int *)&(this_00->AllOwnedReplicators).Elements.field_0x34;
    uVar17 = *(uint *)&(this_00->AllOwnedReplicators).Elements.field_0x28;
    TStack_70._padding_ = CONCAT44(uStack_a4,iVar18);
    uStack_98 = 0xffffffff;
    uVar22 = uVar17 & 0xffffffe0;
    TStack_70.CurrentBitIndex = iStack_94;
    TStack_70.UnvisitedBitMask = 0xffffffff;
    iVar19 = (int)uVar17 >> 5;
    TStack_70._28_4_ = iStack_94;
    TStack_70.BaseBitIndex = local_90;
    uStack_50 = CONCAT44(uStack_84,iStack_88);
    iStack_a8 = iVar18;
    local_a0 = puVar1;
    iStack_8c = iStack_94;
    local_80 = local_b0;
    local_78 = local_b0;
    TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar17 < 0) || (iVar3 < (int)uVar17)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar9 = local_80;
    uVar4 = *(uint *)&(this_00->AllOwnedReplicators).Elements.field_0x28;
    if (uVar17 != uVar4) {
      puVar20 = *(undefined1 **)&(this_00->AllOwnedReplicators).Elements.field_0x20;
      if (puVar20 == (undefined1 *)0x0) {
        puVar20 = puVar1;
      }
      uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar19 * 4);
      while (uVar17 == 0) {
        lVar14 = (longlong)iVar19;
        uVar22 = uVar22 + 0x20;
        iVar19 = iVar19 + 1;
        uVar17 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
        goto LAB_148488d91;
        uVar17 = *(uint *)(puVar20 + lVar14 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      uVar17 = (int)lVar14 + -1 + uVar22;
      if ((int)uVar4 < (int)uVar17) {
        uVar17 = uVar4;
      }
    }
LAB_148488d91:
    while( true ) {
      pTVar10 = local_78;
      if (*(int *)&(local_78->Elements).field_0x8 - *(int *)&(local_78->Elements).field_0x34 !=
          (int)uStack_50) {
        `TSparseArray<TSparseSetElement<FObjectReplicator_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_res10);
      }
      if (((TStack_70.CurrentBitIndex == uVar17) &&
          (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar10 == pTVar9)) break;
      lVar14 = *(longlong *)
                (*(longlong *)&pTVar10->Elements + (longlong)TStack_70.CurrentBitIndex * 0x10);
      if (lVar14 != 0) {
        puVar21 = (uint *)(lVar14 + 0xc);
        *puVar21 = *puVar21 | 0x80;
      }
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    }
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FThreadStats::AddMessage(FVar16,CycleScopeEnd);
  }
  return;
}

// ResetLevelMap @ 148488ef0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FReplayHelper::ResetLevelMap(FReplayHelper *this)

{
  TMap<FName,TWeakObjectPtr<ULevel,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<ULevel,FWeakObjectPtr>,0>_>
  *this_00;
  TWeakObjectPtr<UWorld,FWeakObjectPtr> *this_01;
  undefined8 *puVar1;
  int iVar2;
  ULevelStreaming *this_02;
  ULevel *this_03;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  UPackage *pUVar6;
  undefined8 *puVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [16];
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_98;
  UObject *local_90;
  longlong local_88;
  ULevel *local_80;
  longlong local_78;
  longlong *local_70;
  FWeakObjectPtr *local_68;
  longlong *local_60;
  FWeakObjectPtr *local_58;
  
  this_00 = &this->WeakLevelsByName;
  this_01 = &this->World;
  TSet<TTuple<FName,TWeakObjectPtr<ULevel,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<ULevel,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,TWeakObjectPtr<ULevel,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<ULevel,FWeakObjectPtr>,0>,FDefaultSetAllocator>
           *)this_00);
  pUVar5 = FWeakObjectPtr::Get(&this_01->WeakPtr);
  if (pUVar5 == (UObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("World.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                       ,0x523,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pUVar5 = FWeakObjectPtr::Get(&this_01->WeakPtr);
  pUVar5 = *(UObject **)&pUVar5[1].field_0x8;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar5 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_90 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_90);
  pUVar5 = FWeakObjectPtr::Get(&this_01->WeakPtr);
  pUVar6 = UObjectBaseUtility::GetOutermost(*(UObjectBaseUtility **)&pUVar5[1].field_0x8);
  local_88 = pUVar6->_padding_;
  local_70 = &local_88;
  local_68 = &local_res20;
  TSet<TTuple<FName,TWeakObjectPtr<ULevel,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<ULevel,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,TWeakObjectPtr<ULevel,FWeakObjectPtr>_&&>_>
            ((TSet<TTuple<FName,TWeakObjectPtr<ULevel,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<ULevel,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              *)this_00,
             (TPairInitializer<FName_&&,TWeakObjectPtr<ULevel,FWeakObjectPtr>_&&> *)local_res10,
             (bool *)&local_70);
  pUVar5 = FWeakObjectPtr::Get(&this_01->WeakPtr);
  puVar7 = *(undefined8 **)&pUVar5[3].field_0x18;
  iVar2 = *(int *)&pUVar5[3].field_0x20;
  puVar1 = puVar7 + iVar2;
  while( true ) {
    if (*(int *)&pUVar5[3].field_0x20 != iVar2) {
      `TCheckedPointerIterator<ULevelStreaming_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (puVar7 == puVar1) break;
    this_02 = (ULevelStreaming *)*puVar7;
    if (this_02 != (ULevelStreaming *)0x0) {
      bVar4 = ULevelStreaming::IsLevelVisible(this_02);
      if ((bVar4) &&
         (this_03 = (this_02->LoadedLevel).field0_0x0.DebugPtr, this_03 != (ULevel *)0x0)) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_03);
        }
        local_98.ObjectIndex = 0;
        local_98.ObjectSerialNumber = 0;
        local_80 = this_03;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_03);
        }
        FWeakObjectPtr::operator=(&local_98,(FObjectPtr)&local_80);
        pUVar6 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this_03);
        local_78 = pUVar6->_padding_;
        local_60 = &local_78;
        local_58 = &local_98;
        TSet<TTuple<FName,TWeakObjectPtr<ULevel,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<ULevel,FWeakObjectPtr>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_&&,TWeakObjectPtr<ULevel,FWeakObjectPtr>_&&>_>
                  ((TSet<TTuple<FName,TWeakObjectPtr<ULevel,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<ULevel,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                    *)this_00,
                   (TPairInitializer<FName_&&,TWeakObjectPtr<ULevel,FWeakObjectPtr>_&&> *)
                   (local_res10 + 8),(bool *)&local_60);
      }
    }
    puVar7 = puVar7 + 1;
  }
  return;
}

// ResetLevelStatuses @ 1484890e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FReplayHelper::ResetLevelStatuses(FReplayHelper *this)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  ULevelStreaming *this_00;
  TObjectPtr<ULevel>_u_0 this_01;
  undefined1 *puVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  UObject *pUVar10;
  FLevelStatus *pFVar11;
  UPackage *pUVar12;
  uint uVar13;
  uint *puVar14;
  undefined1 *puVar15;
  undefined8 *puVar16;
  undefined1 local_res8 [8];
  TPairInitializer<ULevel_const_*_&&,int_const_&> local_res10;
  TObjectPtr<ULevel>_u_0 local_res20;
  FString local_78;
  FString local_68;
  TObjectPtr<ULevel>_u_0 *local_58;
  int *local_50;
  
  ClearLevelStreamingState(this);
  pUVar10 = FWeakObjectPtr::Get(&(this->World).WeakPtr);
  if (pUVar10 == (UObject *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("World.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                       ,0x509,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pUVar10 = FWeakObjectPtr::Get(&(this->World).WeakPtr);
  pFVar11 = FindOrAddLevelStatus(this,*(ULevel **)&pUVar10[1].field_0x8);
  pFVar11->bIsReady = true;
  pUVar10 = FWeakObjectPtr::Get(&(this->World).WeakPtr);
  puVar16 = *(undefined8 **)&pUVar10[3].field_0x18;
  iVar3 = *(int *)&pUVar10[3].field_0x20;
  puVar1 = puVar16 + iVar3;
LAB_148489170:
  do {
    if (*(int *)&pUVar10[3].field_0x20 != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<ULevelStreaming_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (puVar16 == puVar1) {
      return;
    }
    this_00 = (ULevelStreaming *)*puVar16;
    if (this_00 != (ULevelStreaming *)0x0) {
      bVar7 = ULevelStreaming::IsLevelVisible(this_00);
      if (bVar7) {
        this_01 = (TObjectPtr<ULevel>_u_0)(this_00->LoadedLevel).field0_0x0.DebugPtr;
        uVar13 = ((uint)((ulonglong)this_01.DebugPtr >> 0x14) & 0xffff ^
                 (uint)((ulonglong)this_01.DebugPtr >> 4)) * -0x7a143595;
        uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
        if (*(int *)&(this->LevelStatusIndexByLevel).field_0x8 !=
            *(int *)&(this->LevelStatusIndexByLevel).field_0x34) {
          puVar4 = *(undefined1 **)&(this->LevelStatusIndexByLevel).field_0x40;
          puVar15 = &(this->LevelStatusIndexByLevel).field_0x38;
          if (puVar4 != (undefined1 *)0x0) {
            puVar15 = puVar4;
          }
          iVar8 = *(int *)(puVar15 +
                          (ulonglong)
                          (*(int *)&(this->LevelStatusIndexByLevel).field_0x48 - 1U &
                          (uVar13 >> 0x10 ^ uVar13)) * 4);
          if (iVar8 != -1) {
            lVar5 = *(longlong *)&(this->LevelStatusIndexByLevel).field_0x0;
            do {
              lVar2 = lVar5 + (longlong)iVar8 * 0x18;
              if (*(ULevel **)(lVar5 + (longlong)iVar8 * 0x18) == this_01.DebugPtr) {
                puVar14 = (uint *)(lVar2 + 8);
                if (lVar2 == 0) {
                  puVar14 = (uint *)0x0;
                }
                if (puVar14 != (uint *)0x0) {
                  uVar13 = *puVar14;
                  uVar9 = 0;
                  if ((int)uVar13 < (this->AllLevelStatuses).ArrayNum) {
                    uVar9 = ~uVar13 >> 0x1f;
                  }
                  if (uVar9 == 0) {
                    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      );
                    if (bVar7) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                  }
                  (this->AllLevelStatuses).AllocatorInstance.Data
                  [(longlong)(int)uVar13 * 0x18 + 0x14] = (FScriptContainerElement)0x1;
                  puVar16 = puVar16 + 1;
                  goto LAB_148489170;
                }
                break;
              }
              iVar8 = *(int *)(lVar2 + 0x10);
            } while (iVar8 != -1);
          }
        }
        pUVar12 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this_01.DebugPtr);
        local_res10.Value = (int *)pUVar12->_padding_;
        ::FName::ToString((FName *)&local_res10.Value,&local_78);
        UWorld::RemovePIEPrefix(&local_68,&local_78,(int *)0x0);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        pFVar11 = FindOrAddLevelStatus(this,&local_68);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        local_50 = &pFVar11->LevelIndex;
        local_58 = &local_res20;
        local_res20 = this_01;
        TSet<TTuple<ULevel_const_*,int>,TDefaultMapHashableKeyFuncs<ULevel_const_*,int,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<ULevel_const_*_&&,int_const_&>_>
                  ((TSet<TTuple<ULevel_const_*,int>,TDefaultMapHashableKeyFuncs<ULevel_const_*,int,0>,FDefaultSetAllocator>
                    *)&this->LevelStatusIndexByLevel,&local_res10,(bool *)&local_58);
        pFVar11->bIsReady = true;
      }
    }
    puVar16 = puVar16 + 1;
  } while( true );
}

// ResetState @ 148489380

void __thiscall FReplayHelper::ResetState(FReplayHelper *this)

{
  undefined1 *puVar1;
  TMap<FNetworkGUID,TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  TMap<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>,0>_>
  *this_01;
  int iVar2;
  bool bVar3;
  
  this_00 = &this->ExternalDataToObjectMap;
  this->DemoFrameNum = 0;
  this->LatestReadFrameTime = 0.0;
  this->bIsLoadingCheckpoint = false;
  this->LastCheckpointTime = 0.0;
  bVar3 = 1 < *(int *)&(this->ExternalDataToObjectMap).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FNetworkGUID,TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FNetworkGUID,TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->ExternalDataToObjectMap).field_0x8);
  puVar1 = &(this->ExternalDataToObjectMap).field_0xc;
  *(undefined4 *)&(this->ExternalDataToObjectMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ExternalDataToObjectMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExternalDataToObjectMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->ExternalDataToObjectMap).field_0x2c;
  *(undefined4 *)&(this->ExternalDataToObjectMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->ExternalDataToObjectMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ExternalDataToObjectMap).field_0x10,0
              );
  }
  if (bVar3) {
    *(undefined4 *)&(this->ExternalDataToObjectMap).field_0x48 = 1;
    TSet<TTuple<FNetworkGUID,TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FNetworkGUID,TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  this_01 = &this->PlaybackFrames;
  bVar3 = 1 < *(int *)&(this->PlaybackFrames).field_0x48;
  if (!bVar3) {
    TSet<TTuple<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
                      *)this_01);
  }
  TSparseArray<TSparseSetElement<TTuple<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_01,0,*(int *)&(this->PlaybackFrames).field_0x8);
  puVar1 = &(this->PlaybackFrames).field_0xc;
  *(undefined4 *)&(this->PlaybackFrames).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,(ForAnyElementType *)this_01,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->PlaybackFrames).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PlaybackFrames).field_0x34 = 0;
  iVar2 = *(int *)&(this->PlaybackFrames).field_0x2c;
  *(undefined4 *)&(this->PlaybackFrames).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->PlaybackFrames).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->PlaybackFrames).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->PlaybackFrames).field_0x48 = 1;
    TSet<TTuple<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
              *)this_01);
  }
  ClearLevelStreamingState(this);
  return;
}

// SaveCheckpoint @ 14848cf90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FReplayHelper::SaveCheckpoint(FReplayHelper *this,UNetConnection *param_1)

{
  int *piVar1;
  TMap<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,FDefaultSetAllocator,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>_>
  *pTVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  TMap<FName,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>_>
  *this_00;
  TSharedPtr<FNetworkObjectInfo,1> *pTVar4;
  ulonglong uVar5;
  float fVar6;
  uint uVar7;
  FName FVar8;
  UNetDriver *pUVar9;
  FNetworkObjectList *pFVar10;
  AActor *this_01;
  ForElementType<FSetElementId> FVar11;
  FScriptContainerElement *pFVar12;
  undefined8 *puVar13;
  UObject *pUVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  FWeakObjectPtr *pFVar17;
  code *pcVar18;
  TConsoleVariableData<float> *pTVar19;
  FNetworkObjectList *pFVar20;
  TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
  *this_02;
  TBitArray<FDefaultBitArrayAllocator> *pTVar21;
  bool bVar22;
  bool bVar23;
  int iVar24;
  uint uVar25;
  FName *pFVar26;
  FThreadSafeStaticStat<_private:_void___cdecl_FReplayHelper::SaveCheckpoint(UNetConnection_*)_::_2_::FStat_STAT_ReplayCheckpointSaveTime>
  FVar27;
  longlong *plVar28;
  longlong lVar29;
  TStatId TVar30;
  FNetworkObjectInfo *pFVar31;
  UClass *pUVar32;
  longlong lVar33;
  ULevel *pUVar34;
  FNetworkObjectInfo *pFVar35;
  UPackage *pUVar36;
  FLevelStatus *pFVar37;
  byte bVar38;
  uint uVar39;
  UPackageMapClient *this_03;
  uint uVar40;
  ForElementType<FSetElementId> FVar41;
  uint *puVar42;
  undefined1 *puVar43;
  TArray<FReplayHelper::FPendingCheckPointActor,TSizedDefaultAllocator<32>_> *pTVar44;
  int iVar45;
  UObjectBaseUtility *this_04;
  int iVar46;
  undefined1 *puVar47;
  uint uVar48;
  TSet<TTuple<ULevel_const_*,int>,TDefaultMapHashableKeyFuncs<ULevel_const_*,int,0>,FDefaultSetAllocator>
  *this_05;
  bool bVar49;
  FIdentityFunctor local_res8;
  undefined1 local_398;
  undefined1 local_397 [7];
  ForAnyElementType local_390;
  undefined8 local_388;
  FName local_380;
  byte local_378;
  undefined1 local_370 [8];
  ulonglong local_368;
  FNetworkObjectList *local_360;
  FWeakObjectPtr local_358;
  undefined4 local_350;
  FNetworkObjectList *local_348;
  undefined8 uStack_340;
  TBitArray<FDefaultBitArrayAllocator> *local_338;
  uint uStack_330;
  uint uStack_32c;
  uint local_328;
  int iStack_324;
  int iStack_320;
  undefined4 uStack_31c;
  FWeakObjectPtr local_318;
  FWeakObjectPtr local_310;
  FWeakObjectPtr local_308;
  FWeakObjectPtr local_300;
  FWeakObjectPtr local_2f8;
  TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
  *local_2f0;
  undefined8 local_2e8;
  int local_2e0;
  FColor_u_0 local_2dc;
  int local_2d8;
  uint local_2d4;
  FName local_2d0;
  byte local_2c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2c0;
  int local_2a0;
  undefined4 uStack_29c;
  int iStack_298;
  undefined4 uStack_294;
  FName local_290;
  FStrippedActorInfo local_288;
  FString local_278;
  FString local_268;
  FName local_258;
  FName local_250;
  UObjectBaseUtility *local_248;
  UObjectBaseUtility *local_240;
  UObject *local_238;
  UNetConnection *local_230;
  UNetConnection *local_228;
  UObject *local_220;
  int local_218;
  undefined1 local_214 [8];
  int local_20c;
  int local_208;
  FWeakObjectPtr local_200;
  UNetConnection *local_1f8;
  UNetConnection *local_1f0;
  FString local_1e8;
  FName local_1d8;
  FName local_1d0;
  FNetworkObjectList *local_1c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1c0;
  undefined8 uStack_1a0;
  FNetworkObjectList *local_198;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_190;
  undefined8 uStack_170;
  FString local_168;
  FString local_158;
  UObjectBaseUtility **local_148;
  int *local_140;
  FStrippedActorInfo *local_138;
  int *local_130;
  FName local_120;
  FName local_118 [2];
  source_location local_108;
  FName local_e8;
  FNetworkObjectList *local_e0;
  longlong lStack_d8;
  undefined8 local_d0;
  uint uStack_c8;
  uint uStack_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_94;
  int local_74;
  undefined4 local_54;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_ReplayCheckpointSaveTime ==
        (FThreadSafeStaticStat<_private:_void___cdecl_FReplayHelper::SaveCheckpoint(UNetConnection_*)_::_2_::FStat_STAT_ReplayCheckpointSaveTime>
         )0x0) {
      pFVar26 = ::FName::FName(&local_120,"STAT_ReplayCheckpointSaveTime");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ReplayCheckpointSaveTime,*pFVar26,
                 L"SaveCheckpoint time","STATGROUP_Net","STATCAT_Advanced",L"Net",true,true,ST_int64
                 ,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar27 = StatPtr_STAT_ReplayCheckpointSaveTime;
  if (StatPtr_STAT_ReplayCheckpointSaveTime ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FReplayHelper::SaveCheckpoint(UNetConnection_*)_::_2_::FStat_STAT_ReplayCheckpointSaveTime>
       )0x0) {
    pFVar26 = ::FName::FName(local_118,"STAT_ReplayCheckpointSaveTime");
    FVar27 = (FThreadSafeStaticStat<_private:_void___cdecl_FReplayHelper::SaveCheckpoint(UNetConnection_*)_::_2_::FStat_STAT_ReplayCheckpointSaveTime>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ReplayCheckpointSaveTime,
                          *pFVar26,L"SaveCheckpoint time","STATGROUP_Net","STATCAT_Advanced",L"Net",
                          true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_380.ComparisonIndex.Value = 0;
  local_380.Number = 0;
  local_378 = 0;
  FVar8 = *(FName *)FVar27;
  if ((FVar8.ComparisonIndex.Value.Value != 0) || (FVar8.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2dc.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2dc._s_0,(char *)*(FName *)((longlong)FVar27 + 0x10));
      local_378 = local_378 | 1;
      if (-1 < CpuChannel->Enabled) {
        local_290.ComparisonIndex.Value = FVar8.ComparisonIndex.Value.Value;
        local_290.Number = FVar8.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_290,(wchar_t *)*(FName *)((longlong)FVar27 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                   ,0x240);
        local_378 = local_378 | 2;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_380 = FVar8;
      FThreadStats::AddMessage(FVar8,CycleScopeStart);
      local_378 = local_378 | 4;
    }
  }
  if ((this->ReplayStreamer).Object == (INetworkReplayStreamer *)0x0) {
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("ReplayStreamer.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                        ,0x242,L"");
    if (bVar22) {
      pcVar18 = (code *)swi(3);
      (*pcVar18)();
      return;
    }
    if (((this->ReplayStreamer).Object == (INetworkReplayStreamer *)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar22)) {
      pcVar18 = (code *)swi(3);
      (*pcVar18)();
      return;
    }
  }
  plVar28 = (longlong *)(**(code **)(((this->ReplayStreamer).Object)->_padding_ + 0x28))();
  if (plVar28 == (longlong *)0x0) goto LAB_14848e957;
  if ((param_1 == (UNetConnection *)0x0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("Connection",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                          ,0x24c,L""), bVar22)) {
    pcVar18 = (code *)swi(3);
    (*pcVar18)();
    return;
  }
  lVar29 = (**(code **)(*plVar28 + 0x30))(plVar28);
  if ((lVar29 != 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("CheckpointArchive->TotalSize() == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                          ,0x24d,L""), bVar22)) {
    pcVar18 = (code *)swi(3);
    (*pcVar18)();
    return;
  }
  if (((param_1->SendBuffer).Num != 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("Connection->SendBuffer.GetNumBits() == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                          ,0x24e,L""), bVar22)) {
    pcVar18 = (code *)swi(3);
    (*pcVar18)();
    return;
  }
  if (((this->CheckpointSaveContext).CheckpointSaveState != Idle) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("CheckpointSaveContext.CheckpointSaveState == ECheckpointSaveState::Idle",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                          ,0x24f,L""), bVar22)) {
    pcVar18 = (code *)swi(3);
    (*pcVar18)();
    return;
  }
  pUVar9 = (param_1->Driver).field0_0x0.DebugPtr;
  if ((pUVar9 == (UNetDriver *)0x0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("Driver",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                          ,0x252,L""), bVar22)) {
    pcVar18 = (code *)swi(3);
    (*pcVar18)();
    return;
  }
  if (((pUVar9->NetworkObjects).Object == (FNetworkObjectList *)0x0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar22)) {
    pcVar18 = (code *)swi(3);
    (*pcVar18)();
    return;
  }
  pFVar10 = (pUVar9->NetworkObjects).Object;
  bVar22 = this->bHasDeltaCheckpoints;
  local_360 = pFVar10;
  if (__CsvProfilerStat600 == false) {
    FCsvProfilerTrace::OutputInlineStat("DemoSaveCheckpointTime",_GCsvCategory_Demo.Index);
    __CsvProfilerStat600 = true;
  }
  local_2d4 = _GCsvCategory_Demo.Index;
  FCsvProfiler::BeginStat
            ("DemoSaveCheckpointTime",_GCsvCategory_Demo.Index,"CSV_DemoSaveCheckpointTime");
  pTVar2 = &param_1->ActorChannels;
  local_2f0 = (TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
               *)pTVar2;
  if (this->bHasLevelStreamingFixes == false) {
    iVar45 = *(int *)&(pFVar10->AllNetworkObjects).Elements.field_0x28;
    TStack_190.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)&(pFVar10->AllNetworkObjects).Elements.field_0x10;
    iVar46 = 0;
    local_2a0 = 0;
    uVar25 = 1;
    local_2c0._28_4_ = 0;
    if (iVar45 != 0) {
      puVar42 = *(uint **)&(pFVar10->AllNetworkObjects).Elements.field_0x20;
      if (puVar42 == (uint *)0x0) {
        puVar42 = (uint *)TStack_190.Array;
      }
      uVar39 = *puVar42;
      while (uVar39 == 0) {
        iVar46 = iVar46 + 1;
        local_2a0 = local_2a0 + 0x20;
        local_2c0._28_4_ = iVar45;
        if ((int)(iVar45 + -1 + (iVar45 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar46) goto LAB_14848e1a1;
        uVar39 = puVar42[iVar46];
      }
      uVar25 = -uVar39 & uVar39;
      uVar5 = (ulonglong)uVar25 * 2 + 1;
      lVar29 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar29 == 0; lVar29 = lVar29 + -1) {
        }
      }
      local_20c = (int)lVar29;
      local_2c0._28_4_ = local_20c + -1 + local_2a0;
      if (iVar45 < (int)local_2c0._28_4_) {
        local_2c0._28_4_ = iVar45;
      }
    }
LAB_14848e1a1:
    uStack_29c = local_54;
    iStack_298 = *(int *)&(pFVar10->AllNetworkObjects).Elements.field_0x8 -
                 *(int *)&(pFVar10->AllNetworkObjects).Elements.field_0x34;
    uVar39 = *(uint *)&(pFVar10->AllNetworkObjects).Elements.field_0x28;
    bVar38 = (byte)uVar39 & 0x1f;
    puVar15 = &(pFVar10->AllNetworkObjects).Elements.field_0x10;
    local_2c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(uVar25,iVar46);
    local_2c0._padding_ = CONCAT44(1 << bVar38,(int)uVar39 >> 5);
    local_2c0.BaseBitIndex = uVar39 & 0xffffffe0;
    TStack_190.CurrentBitIndex = local_2c0._28_4_;
    TStack_190.UnvisitedBitMask = 0xffffffff;
    local_2c0.CurrentBitIndex = uVar39;
    local_2c0.UnvisitedBitMask = -1 << bVar38;
    TStack_190._padding_ = (longlong)local_2c0.Array;
    TStack_190._28_4_ = local_54;
    TStack_190.BaseBitIndex = local_2a0;
    uStack_170 = CONCAT44(uStack_294,iStack_298);
    local_2c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar15;
    local_198 = pFVar10;
    if (((int)uVar39 < 0) ||
       (uVar25 = *(uint *)&(pFVar10->AllNetworkObjects).Elements.field_0x28,
       (int)uVar25 < (int)uVar39)) {
      bVar49 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L"");
      if (bVar49) {
        pcVar18 = (code *)swi(3);
        (*pcVar18)();
        return;
      }
      uVar25 = *(uint *)&(pFVar10->AllNetworkObjects).Elements.field_0x28;
    }
    if (uVar39 != uVar25) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2c0);
    }
    pTVar21 = local_2c0.Array;
    iVar45 = local_2c0.CurrentBitIndex;
    uStack_340 = (char *)local_2c0._padding_;
    local_338 = local_2c0.Array;
    uStack_330 = local_2c0.UnvisitedBitMask;
    uStack_32c = local_2c0.CurrentBitIndex;
    local_328 = local_2c0.BaseBitIndex;
    iStack_324 = local_2c0._28_4_;
    while( true ) {
      pFVar10 = local_198;
      if (*(int *)&(local_198->AllNetworkObjects).Elements.field_0x8 -
          *(int *)&(local_198->AllNetworkObjects).Elements.field_0x34 != (int)uStack_170) {
        local_397[0] = 0;
        `TSparseArray<TSparseSetElement<TSharedPtr<FNetworkObjectInfo,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_397);
      }
      if (((TStack_190.CurrentBitIndex == iVar45) && (TStack_190.Array == pTVar21)) &&
         (pFVar10 == local_360)) break;
      lVar29 = *(longlong *)&(pFVar10->AllNetworkObjects).Elements;
      pTVar4 = (TSharedPtr<FNetworkObjectInfo,1> *)
               (lVar29 + (longlong)TStack_190.CurrentBitIndex * 0x18);
      puVar13 = *(undefined8 **)(lVar29 + (longlong)TStack_190.CurrentBitIndex * 0x18);
      pUVar14 = (UObject *)*puVar13;
      if (bVar22 == false) {
LAB_14848e329:
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar14);
        }
        local_310.ObjectIndex = 0;
        local_310.ObjectSerialNumber = 0;
        local_238 = pUVar14;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar14);
        }
        FWeakObjectPtr::operator=(&local_310,(FObjectPtr)&local_238);
        if (*(int *)&(param_1->ActorChannels).field_0x8 !=
            *(int *)&(param_1->ActorChannels).field_0x34) {
          puVar15 = *(undefined1 **)&(param_1->ActorChannels).field_0x40;
          puVar43 = &(param_1->ActorChannels).field_0x38;
          if (puVar15 != (undefined1 *)0x0) {
            puVar43 = puVar15;
          }
          iVar46 = *(int *)(puVar43 +
                           (ulonglong)
                           (*(int *)&(param_1->ActorChannels).field_0x48 - 1U &
                           (local_310.ObjectSerialNumber ^ local_310.ObjectIndex)) * 4);
          if (iVar46 != -1) {
            do {
              uVar16 = *(undefined8 *)(*(longlong *)&pTVar2->field_0x0 + (longlong)iVar46 * 0x18);
              if (((uint)uVar16 == local_310.ObjectIndex) &&
                 ((uint)((ulonglong)uVar16 >> 0x20) == local_310.ObjectSerialNumber)) {
                if (iVar46 != -1) goto LAB_14848e58d;
                break;
              }
              iVar46 = *(int *)(*(longlong *)&pTVar2->field_0x0 + 0x10 + (longlong)iVar46 * 0x18);
            } while (iVar46 != -1);
          }
        }
        if (pUVar14[9].field_0x1 != '\x04') {
          pFVar35 = TSharedPtr<FNetworkObjectInfo,1>::operator->(pTVar4);
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          local_318.ObjectIndex = 0;
          local_318.ObjectSerialNumber = 0;
          local_230 = param_1;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          FWeakObjectPtr::operator=(&local_318,(FObjectPtr)&local_230);
          if (*(int *)&(pFVar35->DormantConnections).Elements.field_0x8 !=
              *(int *)&(pFVar35->DormantConnections).Elements.field_0x34) {
            FVar11 = (pFVar35->DormantConnections).Hash.SecondaryData;
            FVar41 = (ForElementType<FSetElementId>)&(pFVar35->DormantConnections).Hash;
            if (FVar11 != (ForElementType<FSetElementId>)0x0) {
              FVar41 = FVar11;
            }
            iVar46 = *(int *)((longlong)FVar41 +
                             (ulonglong)
                             ((pFVar35->DormantConnections).HashSize - 1U &
                             (local_318.ObjectSerialNumber ^ local_318.ObjectIndex)) * 4);
            if (iVar46 != -1) {
              lVar29 = *(longlong *)&(pFVar35->DormantConnections).Elements;
              do {
                lVar33 = (longlong)iVar46;
                if ((*(uint *)(lVar29 + lVar33 * 0x10) == local_318.ObjectIndex) &&
                   (*(uint *)(lVar29 + 4 + lVar33 * 0x10) == local_318.ObjectSerialNumber)) {
                  if (iVar46 != -1) goto LAB_14848e58d;
                  break;
                }
                iVar46 = *(int *)(lVar29 + 8 + lVar33 * 0x10);
              } while (iVar46 != -1);
            }
          }
          pFVar35 = TSharedPtr<FNetworkObjectInfo,1>::operator->(pTVar4);
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          local_308.ObjectIndex = 0;
          local_308.ObjectSerialNumber = 0;
          local_228 = param_1;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          FWeakObjectPtr::operator=(&local_308,(FObjectPtr)&local_228);
          if (*(int *)&(pFVar35->RecentlyDormantConnections).Elements.field_0x8 !=
              *(int *)&(pFVar35->RecentlyDormantConnections).Elements.field_0x34) {
            FVar11 = (pFVar35->RecentlyDormantConnections).Hash.SecondaryData;
            FVar41 = (ForElementType<FSetElementId>)&(pFVar35->RecentlyDormantConnections).Hash;
            if (FVar11 != (ForElementType<FSetElementId>)0x0) {
              FVar41 = FVar11;
            }
            iVar46 = *(int *)((longlong)FVar41 +
                             (ulonglong)
                             ((pFVar35->RecentlyDormantConnections).HashSize - 1U &
                             (local_308.ObjectSerialNumber ^ local_308.ObjectIndex)) * 4);
            if (iVar46 != -1) {
              lVar29 = *(longlong *)&(pFVar35->RecentlyDormantConnections).Elements;
              do {
                lVar33 = (longlong)iVar46;
                if ((*(uint *)(lVar29 + lVar33 * 0x10) == local_308.ObjectIndex) &&
                   (*(uint *)(lVar29 + 4 + lVar33 * 0x10) == local_308.ObjectSerialNumber)) {
                  if (iVar46 != -1) {
LAB_14848e58d:
                    pTVar44 = &(this->CheckpointSaveContext).PendingCheckpointActors;
                    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                       (pUVar14 != (UObject *)0x0)) {
                      UE::GC::MarkAsReachable(pUVar14);
                    }
                    local_358.ObjectIndex = 0;
                    local_358.ObjectSerialNumber = 0;
                    local_220 = pUVar14;
                    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                       (pUVar14 != (UObject *)0x0)) {
                      UE::GC::MarkAsReachable(pUVar14);
                    }
                    FWeakObjectPtr::operator=(&local_358,(FObjectPtr)&local_220);
                    pFVar17 = (FWeakObjectPtr *)(pTVar44->AllocatorInstance).Data;
                    local_350 = 0xffffffff;
                    if (((pFVar17 <= &local_358) &&
                        (&local_358 <
                         (FWeakObjectPtr *)
                         ((longlong)pFVar17 +
                         (longlong)(this->CheckpointSaveContext).PendingCheckpointActors.ArrayMax *
                         0xc))) &&
                       (bVar49 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar49)) {
                      pcVar18 = (code *)swi(3);
                      (*pcVar18)();
                      return;
                    }
                    iVar46 = (this->CheckpointSaveContext).PendingCheckpointActors.ArrayNum;
                    piVar1 = &(this->CheckpointSaveContext).PendingCheckpointActors.ArrayMax;
                    if (iVar46 == *piVar1) {
                      iVar46 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x40c,&pTVar44->AllocatorInstance,piVar1);
                    }
                    (this->CheckpointSaveContext).PendingCheckpointActors.ArrayNum = iVar46 + 1;
                    pFVar12 = (pTVar44->AllocatorInstance).Data;
                    *(FWeakObjectPtr *)(pFVar12 + (longlong)iVar46 * 0xc) = local_358;
                    *(undefined4 *)(pFVar12 + (longlong)iVar46 * 0xc + 8) = local_350;
                    if ((pTVar4->Object == (FNetworkObjectInfo *)0x0) &&
                       (bVar49 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsValid()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                            ,0x458,L""), bVar49)) {
                      pcVar18 = (code *)swi(3);
                      (*pcVar18)();
                      return;
                    }
                    pTVar4->Object->bDirtyForReplay = '\0';
                  }
                  break;
                }
                iVar46 = *(int *)(lVar29 + 8 + lVar33 * 0x10);
              } while (iVar46 != -1);
            }
          }
        }
      }
      else {
        if ((puVar13 == (undefined8 *)0x0) &&
           (bVar49 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar49)) {
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        if (pTVar4->Object->bDirtyForReplay != '\0') goto LAB_14848e329;
      }
      TStack_190.UnvisitedBitMask = TStack_190.UnvisitedBitMask & ~TStack_190._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_190);
    }
  }
  else {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Purple,"FReplayHelper_ReplayLevelSortAndAssign");
    bVar49 = -1 < CpuChannel->Enabled;
    if (bVar49) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId606,"FReplayHelper_ReplayLevelSortAndAssign",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                 ,0x25e);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId606);
    }
    iVar45 = *(int *)&(param_1->ActorChannels).field_0x8;
    iVar46 = *(int *)&(param_1->ActorChannels).field_0x34;
    local_390.Data = (FScriptContainerElement *)0x0;
    local_388 = 0;
    iVar24 = FNetworkObjectList::GetNumDormantActorsForConnection(pFVar10,param_1);
    uVar25 = iVar24 + (iVar45 - iVar46);
    if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
    }
    if (local_388._4_4_ < (int)uVar25) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar25,&local_390,(int)local_388,(int *)((longlong)&local_388 + 4));
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      if (StatPtr_STAT_ReplayLevelSorting ==
          (FThreadSafeStaticStat<_private:_void___cdecl_FReplayHelper::SaveCheckpoint(UNetConnection_*)_::_54_::FStat_STAT_ReplayLevelSorting>
           )0x0) {
        pFVar26 = ::FName::FName(&local_e8,"STAT_ReplayLevelSorting");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ReplayLevelSorting,*pFVar26,
                   L"Replay actor level sorting time.","STATGROUP_Net","STATCAT_Advanced",L"Net",
                   true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS1);
    }
    local_338 = (TBitArray<FDefaultBitArrayAllocator> *)0x151acf270;
    local_348 = (FNetworkObjectList *)0x40000026c;
    uStack_340 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp";
    TVar30 = FThreadSafeStaticStatInner<`FReplayHelper::SaveCheckpoint'::__l54::FStat_STAT_ReplayLevelSorting,1>
             ::GetStatId(&StatPtr_STAT_ReplayLevelSorting);
    local_108._0_8_ = local_348;
    local_108._File = uStack_340;
    local_108._Function = (char *)local_338;
    FScopeCycleCounter::FScopeCycleCounter
              ((FScopeCycleCounter *)&local_2d0,*(TStatIdData **)&(TVar30.StatIdPtr)->Name,
               CycleStat|ClearEveryFrame,false,(FSourceLocation *)&local_108);
    pFVar20 = local_360;
    iVar45 = *(int *)&(pFVar10->AllNetworkObjects).Elements.field_0x28;
    local_338 = (TBitArray<FDefaultBitArrayAllocator> *)
                &(pFVar10->AllNetworkObjects).Elements.field_0x10;
    iVar46 = 0;
    local_328 = 0;
    uVar25 = 1;
    uStack_32c = 0;
    if (iVar45 != 0) {
      puVar42 = *(uint **)&(pFVar10->AllNetworkObjects).Elements.field_0x20;
      if (puVar42 == (uint *)0x0) {
        puVar42 = (uint *)local_338;
      }
      uVar39 = *puVar42;
      while (uVar39 == 0) {
        iVar46 = iVar46 + 1;
        local_328 = local_328 + 0x20;
        uStack_32c = iVar45;
        if ((int)(iVar45 + -1 + (iVar45 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar46) goto LAB_14848d4b2;
        uVar39 = puVar42[iVar46];
      }
      uVar25 = ~(uVar39 - 1) & uVar39;
      uVar5 = (ulonglong)uVar25 * 2 + 1;
      lVar29 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar29 == 0; lVar29 = lVar29 + -1) {
        }
      }
      local_218 = (int)lVar29;
      uStack_32c = local_218 + -1 + local_328;
      if (iVar45 < (int)uStack_32c) {
        uStack_32c = iVar45;
      }
    }
LAB_14848d4b2:
    iStack_324 = local_94;
    iStack_320 = *(int *)&(pFVar10->AllNetworkObjects).Elements.field_0x8 -
                 *(int *)&(pFVar10->AllNetworkObjects).Elements.field_0x34;
    uVar39 = *(uint *)&(pFVar10->AllNetworkObjects).Elements.field_0x28;
    bVar38 = (byte)uVar39 & 0x1f;
    uVar48 = 1 << bVar38;
    local_368 = (ulonglong)uVar48;
    uStack_340 = (char *)CONCAT44(uVar25,iVar46);
    uStack_330 = 0xffffffff;
    puVar15 = &(local_360->AllNetworkObjects).Elements.field_0x10;
    TStack_1c0.CurrentBitIndex = uStack_32c;
    TStack_1c0.UnvisitedBitMask = 0xffffffff;
    TStack_1c0._padding_ = (longlong)uStack_340;
    uVar25 = -1 << bVar38;
    TStack_1c0._28_4_ = local_94;
    TStack_1c0.BaseBitIndex = local_328;
    uStack_1a0 = CONCAT44(uStack_31c,iStack_320);
    iVar45 = (int)uVar39 >> 5;
    local_1c8 = pFVar10;
    TStack_1c0.Array = local_338;
    if (((int)uVar39 < 0) ||
       (*(int *)&(local_360->AllNetworkObjects).Elements.field_0x28 < (int)uVar39)) {
      local_348 = pFVar10;
      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L"");
      if (bVar23) {
        pcVar18 = (code *)swi(3);
        (*pcVar18)();
        return;
      }
      uVar48 = (uint)local_368;
    }
    this_02 = local_2f0;
    uVar7 = *(uint *)&(pFVar20->AllNetworkObjects).Elements.field_0x28;
    uStack_32c = uVar39;
    local_328 = uVar39 & 0xffffffe0;
    if (uVar39 != uVar7) {
      puVar43 = *(undefined1 **)&(pFVar20->AllNetworkObjects).Elements.field_0x20;
      puVar47 = puVar15;
      if (puVar43 != (undefined1 *)0x0) {
        puVar47 = puVar43;
      }
      uVar40 = uVar25 & *(uint *)(puVar47 + (longlong)iVar45 * 4);
      while (uVar40 == 0) {
        iVar45 = iVar45 + 1;
        local_328 = local_328 + 0x20;
        uStack_32c = uVar7;
        if ((int)(((int)(uVar7 - 1) >> 0x1f & 0x1fU) + (uVar7 - 1)) >> 5 < iVar45)
        goto LAB_14848d5f3;
        uVar25 = 0xffffffff;
        uVar40 = *(uint *)(puVar47 + (longlong)iVar45 * 4);
      }
      uVar48 = ~(uVar40 - 1) & uVar40;
      uVar5 = (ulonglong)uVar48 * 2 + 1;
      lVar29 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar29 == 0; lVar29 = lVar29 + -1) {
        }
      }
      local_208 = (int)lVar29;
      uStack_32c = local_208 + -1 + local_328;
      if ((int)uVar7 < (int)uStack_32c) {
        uStack_32c = uVar7;
      }
    }
LAB_14848d5f3:
    iStack_324 = local_74;
    iStack_320 = *(int *)&(local_360->AllNetworkObjects).Elements.field_0x8 -
                 *(int *)&(local_360->AllNetworkObjects).Elements.field_0x34;
    local_348 = local_360;
    uStack_340 = (char *)CONCAT44(uVar48,iVar45);
    local_e0 = local_360;
    lStack_d8 = (longlong)uStack_340;
    local_c0 = CONCAT44(local_74,local_328);
    uStack_b8 = CONCAT44(uStack_31c,iStack_320);
    local_338 = (TBitArray<FDefaultBitArrayAllocator> *)puVar15;
    uStack_330 = uVar25;
    uStack_c8 = uVar25;
    uStack_c4 = uStack_32c;
    local_d0 = (TBitArray<FDefaultBitArrayAllocator> *)puVar15;
    while( true ) {
      pFVar10 = local_1c8;
      if (*(int *)&(local_1c8->AllNetworkObjects).Elements.field_0x8 -
          *(int *)&(local_1c8->AllNetworkObjects).Elements.field_0x34 != (int)uStack_1a0) {
        local_398 = 0;
        `TSparseArray<TSparseSetElement<TSharedPtr<FNetworkObjectInfo,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_398);
      }
      if (((TStack_1c0.CurrentBitIndex == uStack_c4) && (TStack_1c0.Array == local_d0)) &&
         (pFVar10 == local_e0)) break;
      lVar29 = *(longlong *)&(pFVar10->AllNetworkObjects).Elements;
      pTVar4 = (TSharedPtr<FNetworkObjectInfo,1> *)
               (lVar29 + (longlong)TStack_1c0.CurrentBitIndex * 0x18);
      if ((*(longlong *)(lVar29 + (longlong)TStack_1c0.CurrentBitIndex * 0x18) != 0) &&
         ((bVar22 == false || (pTVar4->Object->bDirtyForReplay != '\0')))) {
        pFVar35 = pTVar4->Object;
        bVar23 = FWeakObjectPtr::IsValid(&(pFVar35->WeakActor).WeakPtr);
        if (bVar23) {
          pFVar31 = TSharedPtr<FNetworkObjectInfo,1>::operator->(pTVar4);
          this_01 = pFVar31->Actor;
          if (((this_01->RemoteRole).Value != '\0') || (this_01->bTearOff != 0)) {
            if ((AActor *)param_1->_padding_ == (AActor *)0x0) {
              bVar23 = this_01 == (AActor *)0x0;
            }
            else {
              bVar23 = (AActor *)param_1->_padding_ == this_01;
            }
            if (!bVar23) {
              pUVar32 = Z_Construct_UClass_APlayerController_NoRegister();
              iVar45 = (int)pUVar32->_padding_;
              if ((iVar45 <= *(int *)(this_01->_padding_ + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar45 * 8)
                  == &pUVar32->_padding_)) goto LAB_14848d775;
            }
            local_200 = (pFVar35->WeakActor).WeakPtr;
            iVar45 = TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
                     ::FindIndexByHash<TWeakObjectPtr<AActor_const_,FWeakObjectPtr>_>
                               (this_02,local_200.ObjectSerialNumber ^ local_200.ObjectIndex,
                                (TWeakObjectPtr<AActor_const_,FWeakObjectPtr> *)&local_200);
            if (iVar45 != -1) {
LAB_14848d90d:
              pUVar34 = AActor::GetLevel(this_01);
              if ((ULevel *)this_01->_padding_ != pUVar34) {
                local_1d8 = (FName)this_01->_padding_;
                ::FName::ToString(&local_1d8,&local_1e8);
                if (pUVar34 == (ULevel *)0x0) {
                  ::FString::FString(&local_268,L"None");
                }
                else {
                  local_1d0 = (FName)pUVar34->_padding_;
                  ::FName::ToString(&local_1d0,&local_268);
                }
                if (this_01->_padding_ == 0) {
                  ::FString::FString(&local_278,L"None");
                }
                else {
                  local_258 = *(FName *)(this_01->_padding_ + 0x18);
                  ::FName::ToString(&local_258,&local_278);
                }
                bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Actor->GetOuter() == ActorLevel",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                                    ,0x28f,L"Outer %p %s != Level %p %s. Actor %s");
                if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_278.Data.AllocatorInstance.Data);
                }
                if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_268.Data.AllocatorInstance.Data);
                }
                if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
                }
                if (bVar23) {
                  pcVar18 = (code *)swi(3);
                  (*pcVar18)();
                  return;
                }
              }
              local_288.Actor.WeakPtr = (pFVar35->WeakActor).WeakPtr;
              local_288.Level = (UObject *)this_01->_padding_;
              if ((local_390.Data <= &local_288) &&
                 (&local_288 <
                  (FStrippedActorInfo *)(local_390.Data + (longlong)local_388._4_4_ * 0x10))) {
                bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   );
                if (bVar23) {
                  pcVar18 = (code *)swi(3);
                  (*pcVar18)();
                  return;
                }
              }
              iVar45 = (int)local_388;
              if ((int)local_388 == local_388._4_4_) {
                iVar45 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&local_390,(int *)((longlong)&local_388 + 4));
              }
              local_388 = CONCAT44(local_388._4_4_,iVar45 + 1);
              *(FWeakObjectPtr *)&local_390.Data[(longlong)iVar45 * 0x10].field_0x0 =
                   local_288.Actor.WeakPtr;
              *(UObject **)(local_390.Data + (longlong)iVar45 * 0x10 + 8) = local_288.Level;
              goto LAB_14848db31;
            }
          }
LAB_14848d775:
          if ((this_01->NetDormancy).Value != '\x04') {
            pFVar31 = TSharedPtr<FNetworkObjectInfo,1>::operator->(pTVar4);
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)param_1);
            }
            local_300.ObjectIndex = 0;
            local_300.ObjectSerialNumber = 0;
            local_1f8 = param_1;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)param_1);
            }
            FWeakObjectPtr::operator=(&local_300,(FObjectPtr)&local_1f8);
            if (*(int *)&(pFVar31->DormantConnections).Elements.field_0x8 !=
                *(int *)&(pFVar31->DormantConnections).Elements.field_0x34) {
              FVar11 = (pFVar31->DormantConnections).Hash.SecondaryData;
              FVar41 = (ForElementType<FSetElementId>)&(pFVar31->DormantConnections).Hash;
              if (FVar11 != (ForElementType<FSetElementId>)0x0) {
                FVar41 = FVar11;
              }
              iVar45 = *(int *)((longlong)FVar41 +
                               (ulonglong)
                               ((pFVar31->DormantConnections).HashSize - 1U &
                               (local_300.ObjectSerialNumber ^ local_300.ObjectIndex)) * 4);
              if (iVar45 != -1) {
                lVar29 = *(longlong *)&(pFVar31->DormantConnections).Elements;
                do {
                  lVar33 = (longlong)iVar45;
                  if ((*(uint *)(lVar29 + lVar33 * 0x10) == local_300.ObjectIndex) &&
                     (*(uint *)(lVar29 + 4 + lVar33 * 0x10) == local_300.ObjectSerialNumber)) {
                    if (iVar45 != -1) goto LAB_14848d90d;
                    break;
                  }
                  iVar45 = *(int *)(lVar29 + 8 + lVar33 * 0x10);
                } while (iVar45 != -1);
              }
            }
            pFVar31 = TSharedPtr<FNetworkObjectInfo,1>::operator->(pTVar4);
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)param_1);
            }
            local_2f8.ObjectIndex = 0;
            local_2f8.ObjectSerialNumber = 0;
            local_1f0 = param_1;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)param_1);
            }
            FWeakObjectPtr::operator=(&local_2f8,(FObjectPtr)&local_1f0);
            if (*(int *)&(pFVar31->RecentlyDormantConnections).Elements.field_0x8 !=
                *(int *)&(pFVar31->RecentlyDormantConnections).Elements.field_0x34) {
              FVar11 = (pFVar31->RecentlyDormantConnections).Hash.SecondaryData;
              FVar41 = (ForElementType<FSetElementId>)&(pFVar31->RecentlyDormantConnections).Hash;
              if (FVar11 != (ForElementType<FSetElementId>)0x0) {
                FVar41 = FVar11;
              }
              iVar45 = *(int *)((longlong)FVar41 +
                               (ulonglong)
                               ((pFVar31->RecentlyDormantConnections).HashSize - 1U &
                               (local_2f8.ObjectSerialNumber ^ local_2f8.ObjectIndex)) * 4);
              if (iVar45 != -1) {
                lVar29 = *(longlong *)&(pFVar31->RecentlyDormantConnections).Elements;
                do {
                  lVar33 = (longlong)iVar45;
                  if ((*(uint *)(lVar29 + lVar33 * 0x10) == local_2f8.ObjectIndex) &&
                     (*(uint *)(lVar29 + 4 + lVar33 * 0x10) == local_2f8.ObjectSerialNumber)) {
                    if (iVar45 != -1) goto LAB_14848d90d;
                    break;
                  }
                  iVar45 = *(int *)(lVar29 + 8 + lVar33 * 0x10);
                } while (iVar45 != -1);
              }
            }
          }
        }
        else {
LAB_14848db31:
          pFVar35 = TSharedPtr<FNetworkObjectInfo,1>::operator->(pTVar4);
          pFVar35->bDirtyForReplay = '\0';
        }
      }
      TStack_1c0.UnvisitedBitMask = TStack_1c0.UnvisitedBitMask & ~TStack_1c0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1c0);
    }
    local_res8 = SUB81(this,0);
    AlgoImpl::
    IntroSortInternal<_FReplayHelper::SaveCheckpoint_::__l53::FStrippedActorInfo,int,FIdentityFunctor,TDereferenceWrapper<_FReplayHelper::SaveCheckpoint_::__l53::FStrippedActorInfo,_FReplayHelper::SaveCheckpoint_::__l54::<lambda_1>_>_>
              ((FStrippedActorInfo *)local_390.Data,(int)local_388,local_res8,
               (<lambda_1> *)local_370);
    if ((local_2c8 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_2c8 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_2c8 & 4) != 0) {
      FThreadStats::AddMessage(local_2d0,CycleScopeEnd);
    }
    local_2c8 = 0;
    pTVar44 = &(this->CheckpointSaveContext).PendingCheckpointActors;
    if ((int)local_388 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(local_388 & 0xffffffff);
    }
    if ((this->CheckpointSaveContext).PendingCheckpointActors.ArrayMax < (int)local_388) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,(int)local_388,&pTVar44->AllocatorInstance,
                 (this->CheckpointSaveContext).PendingCheckpointActors.ArrayNum,
                 &(this->CheckpointSaveContext).PendingCheckpointActors.ArrayMax);
    }
    TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,int>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
    ::Reserve((TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,int>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
               *)&(this->CheckpointSaveContext).PendingActorToIndex,(int)local_388);
    local_368 = (ulonglong)(int)local_388;
    uVar25 = 0;
    lVar29 = 0;
    if (local_368 != 0) {
      local_2f0 = (TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
                   *)&this->LevelStatusIndexByLevel;
      this_05 = (TSet<TTuple<ULevel_const_*,int>,TDefaultMapHashableKeyFuncs<ULevel_const_*,int,0>,FDefaultSetAllocator>
                 *)local_2f0;
LAB_14848dc50:
      do {
        uVar39 = 0;
        if ((int)uVar25 < (int)local_388) {
          uVar39 = ~uVar25 >> 0x1f;
        }
        if (uVar39 == 0) {
          bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar23) {
            pcVar18 = (code *)swi(3);
            (*pcVar18)();
            return;
          }
        }
        this_04 = *(UObjectBaseUtility **)(local_390.Data + lVar29 * 0x10 + 8);
        local_240 = this_04;
        if (this_04 == (UObjectBaseUtility *)0x0) {
LAB_14848dcd9:
          this_04 = (UObjectBaseUtility *)0x0;
        }
        else {
          pUVar32 = Z_Construct_UClass_ULevel_NoRegister();
          iVar45 = (int)pUVar32->_padding_;
          if ((*(int *)(*(longlong *)&this_04->field_0x10 + 0x38) < iVar45) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&this_04->field_0x10 + 0x30) + (longlong)iVar45 * 8) !=
              &pUVar32->_padding_)) goto LAB_14848dcd9;
        }
        uVar39 = ((uint)((ulonglong)this_04 >> 0x14) & 0xffff ^ (uint)((ulonglong)this_04 >> 4)) *
                 -0x7a143595;
        uVar39 = (uVar39 >> 0xd ^ uVar39) * -0x3d4d51cb;
        if (*(int *)&(this_05->Elements).field_0x8 != *(int *)&(this_05->Elements).field_0x34) {
          FVar11 = (this_05->Hash).SecondaryData;
          FVar41 = (ForElementType<FSetElementId>)&this_05->Hash;
          if (FVar11 != (ForElementType<FSetElementId>)0x0) {
            FVar41 = FVar11;
          }
          iVar45 = *(int *)((longlong)FVar41 +
                           (ulonglong)(this_05->HashSize - 1U & (uVar39 >> 0x10 ^ uVar39)) * 4);
          if (iVar45 != -1) {
            lVar33 = *(longlong *)&this_05->Elements;
            do {
              if (*(UObjectBaseUtility **)(lVar33 + (longlong)iVar45 * 0x18) == this_04) {
                if (((iVar45 != -1) && (lVar33 = lVar33 + (longlong)iVar45 * 0x18, lVar33 != 0)) &&
                   (puVar42 = (uint *)(lVar33 + 8), puVar42 != (uint *)0x0)) {
                  uVar39 = *puVar42;
                  uVar48 = 0;
                  if ((int)uVar39 < (this->AllLevelStatuses).ArrayNum) {
                    uVar48 = ~uVar39 >> 0x1f;
                  }
                  if (uVar48 == 0) {
                    bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar23) {
                      pcVar18 = (code *)swi(3);
                      (*pcVar18)();
                      return;
                    }
                  }
                  pFVar37 = (FLevelStatus *)
                            ((this->AllLevelStatuses).AllocatorInstance.Data +
                            (longlong)(int)uVar39 * 0x18);
                  goto LAB_14848de05;
                }
                break;
              }
              iVar45 = *(int *)(lVar33 + 0x10 + (longlong)iVar45 * 0x18);
            } while (iVar45 != -1);
          }
        }
        pUVar36 = UObjectBaseUtility::GetOutermost(this_04);
        local_250 = (FName)pUVar36->_padding_;
        ::FName::ToString(&local_250,&local_168);
        UWorld::RemovePIEPrefix(&local_158,&local_168,(int *)0x0);
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
        pFVar37 = FindOrAddLevelStatus(this,&local_158);
        if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_158.Data.AllocatorInstance.Data);
        }
        local_140 = &pFVar37->LevelIndex;
        local_148 = &local_248;
        local_248 = this_04;
        TSet<TTuple<ULevel_const_*,int>,TDefaultMapHashableKeyFuncs<ULevel_const_*,int,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<ULevel_const_*_&&,int_const_&>_>
                  (this_05,(TPairInitializer<ULevel_const_*_&&,int_const_&> *)local_214,
                   (bool *)&local_148);
LAB_14848de05:
        bVar23 = lVar29 == local_368;
        if (lVar29 < (longlong)local_368) {
          lVar33 = lVar29 << 4;
          do {
            uVar39 = 0;
            if ((int)uVar25 < (int)local_388) {
              uVar39 = ~uVar25 >> 0x1f;
            }
            if (uVar39 == 0) {
              bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar23) {
                pcVar18 = (code *)swi(3);
                (*pcVar18)();
                return;
              }
            }
            this_05 = (TSet<TTuple<ULevel_const_*,int>,TDefaultMapHashableKeyFuncs<ULevel_const_*,int,0>,FDefaultSetAllocator>
                       *)local_2f0;
            if (local_240 != *(UObjectBaseUtility **)(local_390.Data + lVar33 + 8))
            goto LAB_14848dc50;
            uVar39 = 0;
            if ((int)uVar25 < (int)local_388) {
              uVar39 = ~uVar25 >> 0x1f;
            }
            if (uVar39 == 0) {
              bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar23) {
                pcVar18 = (code *)swi(3);
                (*pcVar18)();
                return;
              }
            }
            pFVar12 = (pTVar44->AllocatorInstance).Data;
            local_2e8 = *(undefined8 *)(local_390.Data + lVar33);
            local_2e0 = pFVar37->LevelIndex;
            if ((pFVar12 <= (FScriptContainerElement *)&local_2e8) &&
               ((FScriptContainerElement *)&local_2e8 <
                pFVar12 + (longlong)(this->CheckpointSaveContext).PendingCheckpointActors.ArrayMax *
                          0xc)) {
              bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar23) {
                pcVar18 = (code *)swi(3);
                (*pcVar18)();
                return;
              }
            }
            iVar45 = (this->CheckpointSaveContext).PendingCheckpointActors.ArrayNum;
            if (iVar45 == (this->CheckpointSaveContext).PendingCheckpointActors.ArrayMax) {
              iVar45 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x40c,&pTVar44->AllocatorInstance,
                                  &(this->CheckpointSaveContext).PendingCheckpointActors.ArrayMax);
            }
            pFVar12 = (pTVar44->AllocatorInstance).Data;
            (this->CheckpointSaveContext).PendingCheckpointActors.ArrayNum = iVar45 + 1;
            *(undefined8 *)(pFVar12 + (longlong)iVar45 * 0xc) = local_2e8;
            *(int *)(pFVar12 + (longlong)iVar45 * 0xc + 8) = local_2e0;
            uVar39 = 0;
            if ((int)uVar25 < (int)local_388) {
              uVar39 = ~uVar25 >> 0x1f;
            }
            local_2d8 = iVar45;
            if (uVar39 == 0) {
              bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar23) {
                pcVar18 = (code *)swi(3);
                (*pcVar18)();
                return;
              }
            }
            local_138 = (FStrippedActorInfo *)(local_390.Data + (longlong)(int)uVar25 * 0x10);
            local_130 = &local_2d8;
            TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,int>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<TWeakObjectPtr<AActor,FWeakObjectPtr>_const_&,int_const_&>_>
                      ((TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,int>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
                        *)&(this->CheckpointSaveContext).PendingActorToIndex,
                       (TPairInitializer<TWeakObjectPtr<AActor,FWeakObjectPtr>_const_&,int_const_&>
                        *)(local_214 + 4),(bool *)&local_138);
            uVar25 = uVar25 + 1;
            lVar29 = lVar29 + 1;
            lVar33 = lVar33 + 0x10;
            bVar23 = lVar29 == local_368;
            this_05 = (TSet<TTuple<ULevel_const_*,int>,TDefaultMapHashableKeyFuncs<ULevel_const_*,int,0>,FDefaultSetAllocator>
                       *)local_2f0;
          } while (lVar29 < (longlong)local_368);
        }
      } while (!bVar23);
    }
    if ((FStrippedActorInfo *)local_390.Data != (FStrippedActorInfo *)0x0) {
      FMemory::Free(local_390.Data);
    }
    if (bVar49) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((this->CheckpointSaveContext).PendingCheckpointActors.ArrayNum != 0) {
    if ((param_1->PackageMap).field0_0x0.DebugPtr == (UPackageMap *)0x0) {
LAB_14848e6e9:
      this_03 = (UPackageMapClient *)0x0;
    }
    else {
      pUVar32 = Z_Construct_UClass_UPackageMapClient_NoRegister();
      bVar49 = FObjectPtr::IsA((FObjectPtr *)&param_1->PackageMap,pUVar32);
      if (!bVar49) goto LAB_14848e6e9;
      this_03 = (UPackageMapClient *)(param_1->PackageMap).field0_0x0.DebugPtr;
    }
    UPackageMapClient::SavePackageMapExportAckStatus
              (this_03,&(this->CheckpointSaveContext).CheckpointAckState);
    UNetConnection::SetIgnoreReservedChannels(param_1,true);
    UNetConnection::SetReserveDestroyedChannels(param_1,true);
    iVar45 = (this->CheckpointSaveContext).PendingCheckpointActors.ArrayNum;
    pTVar3 = &(this->CheckpointSaveContext).CheckpointDeletedNetStartupActors;
    (this->CheckpointSaveContext).CheckpointSaveState = ProcessCheckpointActors;
    piVar1 = &(this->CheckpointSaveContext).CheckpointDeletedNetStartupActors.ArrayMax;
    (this->CheckpointSaveContext).NextAmortizedItem = 0;
    (this->CheckpointSaveContext).TotalCheckpointSaveTimeSeconds = 0.0;
    (this->CheckpointSaveContext).TotalCheckpointReplicationTimeSeconds = 0.0;
    (this->CheckpointSaveContext).TotalCheckpointSaveFrames = 0;
    (this->CheckpointSaveContext).TotalCheckpointActors = iVar45;
    pFVar12 = (pTVar3->AllocatorInstance).Data;
    iVar45 = (this->CheckpointSaveContext).CheckpointDeletedNetStartupActors.ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<FString,int>((FString *)pFVar12,iVar45);
      iVar45 = *piVar1;
      (this->CheckpointSaveContext).CheckpointDeletedNetStartupActors.ArrayNum = 0;
      if (iVar45 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&pTVar3->AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FString,int>((FString *)pFVar12,iVar45);
      (this->CheckpointSaveContext).CheckpointDeletedNetStartupActors.ArrayNum = 0;
    }
    this->bPendingCheckpointRequest = false;
    this->LastCheckpointTime = (double)this->DemoCurrentTime;
    if (bVar22 == false) {
      this_00 = &(this->CheckpointSaveContext).NameTableMap;
      bVar22 = 1 < *(int *)&(this->CheckpointSaveContext).NameTableMap.field_0x48;
      if (!bVar22) {
        TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
                          *)this_00);
      }
      iVar45 = *(int *)&(this->CheckpointSaveContext).NameTableMap.field_0xc;
      *(undefined4 *)&(this->CheckpointSaveContext).NameTableMap.field_0x8 = 0;
      if (iVar45 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x14,4,0,(ForAnyElementType *)this_00,0,
                   (int *)&(this->CheckpointSaveContext).NameTableMap.field_0xc);
      }
      *(undefined4 *)&(this->CheckpointSaveContext).NameTableMap.field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->CheckpointSaveContext).NameTableMap.field_0x34 = 0;
      iVar45 = *(int *)&(this->CheckpointSaveContext).NameTableMap.field_0x2c;
      *(undefined4 *)&(this->CheckpointSaveContext).NameTableMap.field_0x28 = 0;
      if ((iVar45 < 0) || (0x80 < iVar45)) {
        *(undefined4 *)&(this->CheckpointSaveContext).NameTableMap.field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)
                   &(this->CheckpointSaveContext).NameTableMap.field_0x10,0);
      }
      if (bVar22) {
        *(undefined4 *)&(this->CheckpointSaveContext).NameTableMap.field_0x48 = 1;
        TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
                  *)this_00);
      }
      pTVar3 = &(this->CheckpointSaveContext).CheckpointDeletedNetStartupActors;
      if (pTVar3 == &this->RecordingDeletedNetStartupActors) {
        bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x96e,L"");
        if (bVar22) {
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
      }
      iVar45 = (this->RecordingDeletedNetStartupActors).ArrayNum;
      if (iVar45 != 0) {
        iVar46 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10,8,iVar45,&pTVar3->AllocatorInstance,
                            &(this->CheckpointSaveContext).CheckpointDeletedNetStartupActors.
                             ArrayNum,
                            &(this->CheckpointSaveContext).CheckpointDeletedNetStartupActors.
                             ArrayMax);
        ConstructItems<FString,FString,int>
                  ((pTVar3->AllocatorInstance).Data + (longlong)iVar46 * 0x10,
                   (FString *)(this->RecordingDeletedNetStartupActors).AllocatorInstance.Data,iVar45
                  );
      }
    }
    else {
      FDeltaCheckpointData::operator=
                (&(this->CheckpointSaveContext).DeltaCheckpointData,
                 &this->RecordingDeltaCheckpointData);
    }
    if (4 < (byte)LogDemo._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
    }
    pTVar19 = CVarCheckpointSaveMaxMSPerFrameOverride.Ref;
    bVar22 = IsInParallelGameThread();
    if (bVar22) {
LAB_14848e920:
      lVar29 = 0;
    }
    else {
      bVar22 = IsInGameThread();
      lVar29 = 4;
      if (bVar22) goto LAB_14848e920;
    }
    fVar6 = *(float *)((longlong)pTVar19->ShadowedValue + lVar29);
    bVar22 = false;
    if (fVar6 < 0.0) {
      fVar6 = this->CheckpointSaveMaxMSPerFrame;
      bVar22 = fVar6 < 0.0;
    }
    if (bVar22 || fVar6 == 0.0) {
      TickCheckpoint(this,param_1);
    }
  }
  FCsvProfiler::EndStat("DemoSaveCheckpointTime",local_2d4);
LAB_14848e957:
  if ((local_378 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_378 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_378 & 4) != 0) {
    FThreadStats::AddMessage(local_380,CycleScopeEnd);
  }
  return;
}

// SaveExternalData @ 14848eae0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FReplayHelper::SaveExternalData(FReplayHelper *this,UNetConnection *param_1,FArchive *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  UNetDriver *pUVar3;
  FNetGUIDCache *pFVar4;
  code *pcVar5;
  TMap<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,FDefaultSetAllocator,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>_>
  *pTVar6;
  bool bVar7;
  bool bVar8;
  UObject *pUVar9;
  TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID> *pTVar10;
  longlong lVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  int iVar15;
  longlong *plVar16;
  int iVar17;
  undefined1 *puVar18;
  uint *puVar19;
  uint uVar20;
  undefined1 local_res18 [8];
  undefined4 local_res20 [2];
  FWeakObjectPtr local_118;
  undefined4 local_110 [2];
  FWeakObjectPtr local_108;
  longlong local_100;
  int local_f8;
  int local_f4;
  UObject *local_f0;
  UObject *local_e8;
  FName local_e0;
  FString local_d8;
  TMap<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,FDefaultSetAllocator,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>_>
  *local_c8;
  int iStack_c0;
  uint uStack_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  TMap<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,FDefaultSetAllocator,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>_>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  if (((param_1 == (UNetConnection *)0x0) ||
      ((param_1->Driver).field0_0x0.DebugPtr == (UNetDriver *)0x0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Connection && Connection->Driver",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                         ,0x598,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Blue,"FReplayHelper_SaveExternalData");
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1434,"FReplayHelper_SaveExternalData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
               ,0x59a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1434);
  }
  local_c8 = &this->ObjectsWithExternalDataMap;
  iVar17 = *(int *)&(this->ObjectsWithExternalDataMap).field_0x28;
  local_b8 = &(this->ObjectsWithExternalDataMap).field_0x10;
  iStack_c0 = 0;
  uStack_bc = 1;
  local_a8 = 0;
  iStack_ac = 0;
  if (iVar17 != 0) {
    puVar19 = *(uint **)&(this->ObjectsWithExternalDataMap).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)local_b8;
    }
    uVar14 = *puVar19;
    local_a8 = 0;
    while (uVar14 == 0) {
      lVar11 = (longlong)iStack_c0;
      local_a8 = local_a8 + 0x20;
      iStack_c0 = iStack_c0 + 1;
      iStack_ac = iVar17;
      if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c0) goto LAB_14848ec20;
      uVar14 = puVar19[lVar11 + 1];
    }
    uStack_bc = -uVar14 & uVar14;
    uVar1 = (ulonglong)uStack_bc * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_f8 = (int)lVar11;
    iStack_ac = local_a8 + -1 + local_f8;
    if (iVar17 < iStack_ac) {
      iStack_ac = iVar17;
    }
  }
LAB_14848ec20:
  uStack_a4 = local_4c;
  iStack_a0 = *(int *)&(this->ObjectsWithExternalDataMap).field_0x8 -
              *(int *)&(this->ObjectsWithExternalDataMap).field_0x34;
  uVar14 = *(uint *)&(this->ObjectsWithExternalDataMap).field_0x28;
  uStack_b0 = 0xffffffff;
  TStack_90.CurrentBitIndex = iStack_ac;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  TStack_90._padding_ = CONCAT44(uStack_bc,iStack_c0);
  uVar20 = uVar14 & 0xffffffe0;
  iVar15 = (int)uVar14 >> 5;
  TStack_90._28_4_ = local_4c;
  TStack_90.BaseBitIndex = local_a8;
  uStack_70 = CONCAT44(uStack_9c,iStack_a0);
  local_98 = local_c8;
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_b8;
  if ((((int)uVar14 < 0) || (iVar17 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar2 = *(uint *)&(this->ObjectsWithExternalDataMap).field_0x28;
  if (uVar14 != uVar2) {
    puVar18 = *(undefined1 **)&(this->ObjectsWithExternalDataMap).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = &(this->ObjectsWithExternalDataMap).field_0x10;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar15 * 4);
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar15;
      uVar20 = uVar20 + 0x20;
      iVar15 = iVar15 + 1;
      uVar14 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14848ed30;
      uVar14 = *(uint *)(puVar18 + lVar11 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_f4 = (int)lVar11;
    uVar14 = local_f4 + -1 + uVar20;
    if ((int)uVar2 < (int)uVar14) {
      uVar14 = uVar2;
    }
  }
LAB_14848ed30:
  do {
    pTVar6 = local_98;
    if (*(int *)(&local_98->field_0x0 + 8) - *(int *)(&local_98->field_0x0 + 0x34) != (int)uStack_70
       ) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_90.CurrentBitIndex == uVar14) &&
        (TStack_90.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&(this->ObjectsWithExternalDataMap).field_0x10)) &&
       (pTVar6 == &this->ObjectsWithExternalDataMap)) {
      TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
               *)&this->ObjectsWithExternalDataMap);
      TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FReplayHelper::FExternalDataWrapper>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FReplayHelper::FExternalDataWrapper,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FReplayHelper::FExternalDataWrapper>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FReplayHelper::FExternalDataWrapper,0>,FDefaultSetAllocator>
               *)&this->ExternalDataMap);
      local_110[0] = 0;
      (**(code **)(*(longlong *)param_2 + 0x1a0))(param_2,local_110);
      if (bVar7) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FGenericPlatformMisc::EndNamedEvent();
      return;
    }
    pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                 (*(longlong *)&pTVar6->field_0x0 +
                                 (longlong)TStack_90.CurrentBitIndex * 0x18));
    if (pUVar9 != (UObject *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar9);
      }
      local_118.ObjectIndex = 0;
      local_118.ObjectSerialNumber = 0;
      local_f0 = pUVar9;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar9);
      }
      FWeakObjectPtr::operator=(&local_118,(FObjectPtr)&local_f0);
      if (*(int *)&(this->ExternalDataMap).field_0x8 != *(int *)&(this->ExternalDataMap).field_0x34)
      {
        puVar18 = *(undefined1 **)&(this->ExternalDataMap).field_0x40;
        puVar12 = &(this->ExternalDataMap).field_0x38;
        if (puVar18 != (undefined1 *)0x0) {
          puVar12 = puVar18;
        }
        iVar17 = *(int *)(puVar12 +
                         (ulonglong)
                         (*(int *)&(this->ExternalDataMap).field_0x48 - 1U &
                         (local_118.ObjectIndex ^ local_118.ObjectSerialNumber)) * 4);
        if (iVar17 != -1) {
          do {
            puVar13 = (undefined8 *)((longlong)iVar17 * 0x30 + *(longlong *)&this->ExternalDataMap);
            if (((uint)*puVar13 == local_118.ObjectIndex) &&
               ((uint)((ulonglong)*puVar13 >> 0x20) == local_118.ObjectSerialNumber)) {
              if (iVar17 == -1) break;
              plVar16 = puVar13 + 1;
              if (puVar13 == (undefined8 *)0x0) {
                plVar16 = (longlong *)0x0;
              }
              if ((plVar16 == (longlong *)0x0) || ((int)plVar16[3] < 1)) break;
              local_100 = *plVar16;
              if (local_100 == 0) {
                pUVar3 = (param_1->Driver).field0_0x0.DebugPtr;
                if (((pUVar3->GuidCache).Object == (FNetGUIDCache *)0x0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar8)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                pFVar4 = (pUVar3->GuidCache).Object;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable(pUVar9);
                }
                local_108.ObjectIndex = 0;
                local_108.ObjectSerialNumber = 0;
                local_e8 = pUVar9;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable(pUVar9);
                }
                FWeakObjectPtr::operator=(&local_108,(FObjectPtr)&local_e8);
                pTVar10 = TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
                          ::Find((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
                                  *)&pFVar4->NetGUIDLookup,
                                 (TWeakObjectPtr<UObject_const_,FWeakObjectPtr>)local_108);
                local_100 = 0;
                if (pTVar10 != (TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID> *)0x0) {
                  local_100 = *(longlong *)&pTVar10->field_0x8;
                }
                if (local_100 == 0) {
                  if (2 < (byte)LogDemo._0_1_) {
                    local_e0.ComparisonIndex.Value = *(uint *)&pUVar9->field_0x18;
                    local_e0.Number = *(uint *)&pUVar9->field_0x1c;
                    ::FName::ToString(&local_e0,&local_d8);
                    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
                    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
                    }
                  }
                  break;
                }
              }
              local_res20[0] = (undefined4)plVar16[3];
              (**(code **)(*(longlong *)param_2 + 0x1a0))(param_2,local_res20);
              (**(code **)(*(longlong *)param_2 + 0x1a8))(param_2,&local_100);
              (**(code **)(*(longlong *)param_2 + 0x188))
                        (param_2,plVar16[1],(longlong)(int)plVar16[2]);
              break;
            }
            iVar17 = *(int *)(puVar13 + 5);
          } while (iVar17 != -1);
        }
      }
    }
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  } while( true );
}

// Serialize @ 148490150

void __thiscall FReplayHelper::Serialize(FReplayHelper *this,FArchive *param_1)

{
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *pTVar1;
  undefined1 *puVar2;
  TMap<FNetworkGUID,TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar3;
  TMap<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>,0>_>
  *this_00;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  TMap<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>,0>_>
  *pTVar8;
  bool bVar9;
  longlong lVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_2f8;
  undefined1 local_2f7;
  undefined1 local_2f6;
  undefined1 local_2f5;
  undefined1 local_2f4;
  undefined1 local_2f3 [3];
  FScopeMarker local_2f0;
  ulonglong local_2c8;
  TMap<FNetworkGUID,TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32>_>,0>_>
  *local_2c0;
  int iStack_2b8;
  uint uStack_2b4;
  undefined1 *local_2b0;
  undefined4 uStack_2a8;
  int iStack_2a4;
  int local_2a0;
  int iStack_29c;
  int iStack_298;
  undefined4 uStack_294;
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *local_290;
  int iStack_288;
  uint uStack_284;
  undefined1 *local_280;
  undefined4 uStack_278;
  int iStack_274;
  int local_270;
  undefined4 uStack_26c;
  int iStack_268;
  undefined4 uStack_264;
  int local_260;
  int local_25c;
  int local_258;
  int local_254;
  int local_250;
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *local_248;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_240;
  undefined8 uStack_220;
  TMap<FNetworkGUID,TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32>_>,0>_>
  *local_218;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_210;
  undefined8 uStack_1f0;
  TMap<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>,0>_>
  *local_1e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1e0;
  undefined8 uStack_1c0;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88 [2];
  undefined4 local_5c;
  undefined4 local_3c;
  
  ::FString::FString(&local_1b8,"FReplayHelper::Serialize");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::FScopeMarker
            (&local_2f0,param_1,&local_1b8);
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  if ((param_1->field_0x2b & 4) != 0) {
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_2f0);
    TSet<TWeakObjectPtr<UObject,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::CountBytes(&this->UniqueStreamingLevels,param_1);
    ::FString::FString(&local_1a8,"UniqueStreamingLevels");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_2f0,&local_1a8);
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_2f0);
    TSet<TWeakObjectPtr<UObject,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::CountBytes(&this->NewStreamingLevelsThisFrame,param_1);
    ::FString::FString(&local_198,"NewStreamingLevelsThisFrame");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_2f0,&local_198);
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_2f0);
    FNetworkDemoHeader::CountBytes(&this->PlaybackDemoHeader,param_1);
    ::FString::FString(&local_188,"PlaybackDemoHeader");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_2f0,&local_188);
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_2f0);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)(this->LevelNamesAndTimes).ArrayNum * 0x18,
               (longlong)(this->LevelNamesAndTimes).ArrayMax * 0x18);
    iVar5 = (this->LevelNamesAndTimes).ArrayNum;
    pFVar12 = (this->LevelNamesAndTimes).AllocatorInstance.Data;
    pFVar13 = pFVar12 + (longlong)iVar5 * 0x18;
    while( true ) {
      if ((this->LevelNamesAndTimes).ArrayNum != iVar5) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FLevelNameAndTime,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar12 == pFVar13) break;
      (**(code **)(*(longlong *)param_1 + 0x10))
                (param_1,(longlong)*(int *)(pFVar12 + 8) * 2,(longlong)*(int *)(pFVar12 + 0xc) * 2);
      pFVar12 = pFVar12 + 0x18;
    }
    ::FString::FString(&local_178,"LevelNamesAndTimes");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_2f0,&local_178);
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_2f0);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)(this->AllLevelStatuses).ArrayNum * 0x18,
               (longlong)(this->AllLevelStatuses).ArrayMax * 0x18);
    iVar5 = (this->AllLevelStatuses).ArrayNum;
    pFVar12 = (this->AllLevelStatuses).AllocatorInstance.Data;
    pFVar13 = pFVar12 + (longlong)iVar5 * 0x18;
    while( true ) {
      if ((this->AllLevelStatuses).ArrayNum != iVar5) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FReplayHelper::FLevelStatus,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar12 == pFVar13) break;
      (**(code **)(*(longlong *)param_1 + 0x10))
                (param_1,(longlong)*(int *)(pFVar12 + 8) * 2,(longlong)*(int *)(pFVar12 + 0xc) * 2);
      pFVar12 = pFVar12 + 0x18;
    }
    ::FString::FString(&local_b8,"AllLevelStatuses");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_2f0,&local_b8);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_2f0);
    pTVar1 = &this->LevelStatusesByName;
    TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
    CountBytes((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                *)pTVar1,param_1);
    puVar2 = &(this->LevelStatusesByName).field_0x10;
    iVar5 = *(int *)&(this->LevelStatusesByName).field_0x28;
    local_2c8 = 1;
    iStack_288 = 0;
    local_270 = 0;
    uStack_284 = 1;
    iStack_274 = 0;
    if (iVar5 != 0) {
      puVar15 = *(uint **)&(this->LevelStatusesByName).field_0x20;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)puVar2;
      }
      uStack_284 = *puVar15;
      local_270 = 0;
      while (uStack_284 == 0) {
        lVar10 = (longlong)iStack_288;
        local_270 = local_270 + 0x20;
        iStack_288 = iStack_288 + 1;
        uStack_284 = 1;
        iStack_274 = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_288) goto LAB_1484904cf;
        uStack_284 = puVar15[lVar10 + 1];
      }
      uStack_284 = -uStack_284 & uStack_284;
      uVar4 = (ulonglong)uStack_284 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_260 = (int)lVar10;
      iStack_274 = local_260 + -1 + local_270;
      if (iVar5 < iStack_274) {
        iStack_274 = iVar5;
      }
    }
LAB_1484904cf:
    uVar16 = *(uint *)&(this->LevelStatusesByName).field_0x28;
    uStack_26c = local_5c;
    iStack_268 = *(int *)&(this->LevelStatusesByName).field_0x8 -
                 *(int *)&(this->LevelStatusesByName).field_0x34;
    uVar18 = uVar16 & 0xffffffe0;
    TStack_240._padding_ = CONCAT44(uStack_284,iStack_288);
    uStack_278 = 0xffffffff;
    TStack_240.CurrentBitIndex = iStack_274;
    TStack_240.UnvisitedBitMask = 0xffffffff;
    iVar11 = (int)uVar16 >> 5;
    TStack_240._28_4_ = local_5c;
    TStack_240.BaseBitIndex = local_270;
    uStack_220 = CONCAT44(uStack_264,iStack_268);
    local_290 = pTVar1;
    local_280 = puVar2;
    local_248 = pTVar1;
    TStack_240.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    if ((((int)uVar16 < 0) || (iVar5 < (int)uVar16)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar17 = *(uint *)&(this->LevelStatusesByName).field_0x28;
    if (uVar16 != uVar17) {
      puVar14 = *(undefined1 **)&(this->LevelStatusesByName).field_0x20;
      if (puVar14 == (undefined1 *)0x0) {
        puVar14 = puVar2;
      }
      uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar11 * 4);
      while (uVar16 == 0) {
        lVar10 = (longlong)iVar11;
        uVar18 = uVar18 + 0x20;
        iVar11 = iVar11 + 1;
        uVar16 = uVar17;
        if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_1484905e2;
        uVar16 = *(uint *)(puVar14 + lVar10 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_25c = (int)lVar10;
      uVar16 = local_25c + -1 + uVar18;
      if ((int)uVar17 < (int)uVar16) {
        uVar16 = uVar17;
      }
    }
LAB_1484905e2:
    while( true ) {
      pTVar1 = local_248;
      if (*(int *)(&local_248->field_0x0 + 8) - *(int *)(&local_248->field_0x0 + 0x34) !=
          (int)uStack_220) {
        local_res20[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (((TStack_240.CurrentBitIndex == uVar16) &&
          (TStack_240.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
         (pTVar1 == &this->LevelStatusesByName)) break;
      lVar10 = *(longlong *)&pTVar1->field_0x0;
      (**(code **)(*(longlong *)param_1 + 0x10))
                (param_1,(longlong)
                         *(int *)((longlong)TStack_240.CurrentBitIndex * 0x20 + 8 + lVar10) * 2,
                 (longlong)*(int *)((longlong)TStack_240.CurrentBitIndex * 0x20 + 0xc + lVar10) * 2)
      ;
      TStack_240.UnvisitedBitMask = TStack_240.UnvisitedBitMask & ~TStack_240._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_240);
    }
    ::FString::FString(&local_c8,"LevelStatusesByName");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_2f0,&local_c8);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_2f0);
    TSet<TTuple<ULevel_const_*,int>,TDefaultMapHashableKeyFuncs<ULevel_const_*,int,0>,FDefaultSetAllocator>
    ::CountBytes((TSet<TTuple<ULevel_const_*,int>,TDefaultMapHashableKeyFuncs<ULevel_const_*,int,0>,FDefaultSetAllocator>
                  *)&this->LevelStatusIndexByLevel,param_1);
    ::FString::FString(&local_d8,"LevelStatusIndexByLevel");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_2f0,&local_d8);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_2f0);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)(this->SeenLevelStatuses).ArrayNum << 2,
               (longlong)(this->SeenLevelStatuses).ArrayMax << 2);
    ::FString::FString(local_88,"SeenLevelStatuses");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_2f0,local_88);
    if (local_88[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88[0].Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_2f0);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)*(int *)&(this->LevelsPendingFastForward).Elements.field_0x8 << 4,
               (longlong)*(int *)&(this->LevelsPendingFastForward).Elements.field_0xc << 4);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(ulonglong)
                       (*(int *)&(this->LevelsPendingFastForward).Elements.field_0x28 + 0x1fU >> 5)
                       << 2,
               (ulonglong)
               (*(int *)&(this->LevelsPendingFastForward).Elements.field_0x2c + 0x1fU >> 5) << 2);
    lVar10 = (longlong)(this->LevelsPendingFastForward).HashSize << 2;
    (**(code **)(*(longlong *)param_1 + 0x10))(param_1,lVar10,lVar10);
    ::FString::FString(&local_a8,"LevelsPendingFastForward");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_2f0,&local_a8);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_2f0);
    TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
    ::CountBytes((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
                  *)&this->ObjectsWithExternalDataMap,param_1);
    ::FString::FString(&local_98,"ObjectsWithExternalDataMap");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_2f0,&local_98);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_2f0);
    TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FReplayHelper::FExternalDataWrapper>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FReplayHelper::FExternalDataWrapper,0>,FDefaultSetAllocator>
    ::CountBytes((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FReplayHelper::FExternalDataWrapper>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FReplayHelper::FExternalDataWrapper,0>,FDefaultSetAllocator>
                  *)&this->ExternalDataMap,param_1);
    ::FString::FString(&local_168,"ExternalDataMap");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_2f0,&local_168);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_2f0);
    FCheckpointSaveStateContext::CountBytes(&this->CheckpointSaveContext,param_1);
    ::FString::FString(&local_158,"CheckpointSaveContext");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_2f0,&local_158);
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_2f0);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)(this->QueuedDemoPackets).ArrayNum * 0x28,
               (longlong)(this->QueuedDemoPackets).ArrayMax * 0x28);
    iVar5 = (this->QueuedDemoPackets).ArrayNum;
    pFVar12 = (this->QueuedDemoPackets).AllocatorInstance.Data;
    pFVar13 = pFVar12 + (longlong)iVar5 * 0x28;
    while( true ) {
      if ((this->QueuedDemoPackets).ArrayNum != iVar5) {
        local_2f8 = 0;
        `TCheckedPointerIterator<FQueuedDemoPacket,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_2f8);
      }
      if (pFVar12 == pFVar13) break;
      (**(code **)(*(longlong *)param_1 + 0x10))
                (param_1,(longlong)*(int *)(pFVar12 + 8),(longlong)*(int *)(pFVar12 + 0xc));
      pFVar12 = pFVar12 + 0x28;
    }
    ::FString::FString(&local_148,"QueuedDemoPackets");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_2f0,&local_148);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_2f0);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)(this->QueuedCheckpointPackets).ArrayNum * 0x28,
               (longlong)(this->QueuedCheckpointPackets).ArrayMax * 0x28);
    iVar5 = (this->QueuedCheckpointPackets).ArrayNum;
    pFVar12 = (this->QueuedCheckpointPackets).AllocatorInstance.Data;
    pFVar13 = pFVar12 + (longlong)iVar5 * 0x28;
    while( true ) {
      if ((this->QueuedCheckpointPackets).ArrayNum != iVar5) {
        local_2f7 = 0;
        `TCheckedPointerIterator<FQueuedDemoPacket,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_2f7);
      }
      if (pFVar12 == pFVar13) break;
      (**(code **)(*(longlong *)param_1 + 0x10))
                (param_1,(longlong)*(int *)(pFVar12 + 8),(longlong)*(int *)(pFVar12 + 0xc));
      pFVar12 = pFVar12 + 0x28;
    }
    ::FString::FString(&local_138,"QueuedCheckpointPackets");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_2f0,&local_138);
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_2f0);
    pTVar3 = &this->ExternalDataToObjectMap;
    TSet<TTuple<FNetworkGUID,TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::CountBytes((TSet<TTuple<FNetworkGUID,TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)pTVar3,param_1);
    puVar2 = &(this->ExternalDataToObjectMap).field_0x10;
    iVar5 = *(int *)&(this->ExternalDataToObjectMap).field_0x28;
    local_2a0 = 0;
    iStack_2b8 = 0;
    uStack_2b4 = (uint)local_2c8;
    iStack_2a4 = 0;
    if (iVar5 != 0) {
      puVar15 = *(uint **)&(this->ExternalDataToObjectMap).field_0x20;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)puVar2;
      }
      uVar16 = *puVar15;
      while (uVar16 == 0) {
        lVar10 = (longlong)iStack_2b8;
        local_2a0 = local_2a0 + 0x20;
        iStack_2b8 = iStack_2b8 + 1;
        iStack_2a4 = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_2b8) goto LAB_148490ad0;
        uVar16 = puVar15[lVar10 + 1];
      }
      uStack_2b4 = -uVar16 & uVar16;
      uVar4 = (ulonglong)uStack_2b4 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_258 = (int)lVar10;
      iStack_2a4 = local_2a0 + -1 + local_258;
      if (iVar5 < iStack_2a4) {
        iStack_2a4 = iVar5;
      }
    }
LAB_148490ad0:
    uVar16 = *(uint *)&(this->ExternalDataToObjectMap).field_0x28;
    iStack_29c = local_3c;
    iStack_298 = *(int *)&(this->ExternalDataToObjectMap).field_0x8 -
                 *(int *)&(this->ExternalDataToObjectMap).field_0x34;
    uVar18 = uVar16 & 0xffffffe0;
    TStack_210._padding_ = CONCAT44(uStack_2b4,iStack_2b8);
    uStack_2a8 = 0xffffffff;
    TStack_210.CurrentBitIndex = iStack_2a4;
    TStack_210.UnvisitedBitMask = 0xffffffff;
    iVar11 = (int)uVar16 >> 5;
    TStack_210._28_4_ = local_3c;
    TStack_210.BaseBitIndex = local_2a0;
    uStack_1f0 = CONCAT44(uStack_294,iStack_298);
    local_2c0 = pTVar3;
    local_2b0 = puVar2;
    local_218 = pTVar3;
    TStack_210.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    if ((((int)uVar16 < 0) || (iVar5 < (int)uVar16)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar17 = *(uint *)&(this->ExternalDataToObjectMap).field_0x28;
    if (uVar16 != uVar17) {
      puVar14 = *(undefined1 **)&(this->ExternalDataToObjectMap).field_0x20;
      if (puVar14 == (undefined1 *)0x0) {
        puVar14 = puVar2;
      }
      uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar11 * 4);
      while (uVar16 == 0) {
        lVar10 = (longlong)iVar11;
        uVar18 = uVar18 + 0x20;
        iVar11 = iVar11 + 1;
        uVar16 = uVar17;
        if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_148490bf2;
        uVar16 = *(uint *)(puVar14 + lVar10 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_254 = (int)lVar10;
      uVar16 = (uVar18 - 1) + local_254;
      if ((int)uVar17 < (int)uVar16) {
        uVar16 = uVar17;
      }
    }
LAB_148490bf2:
    while( true ) {
      pTVar3 = local_218;
      if (*(int *)(&local_218->field_0x0 + 8) - *(int *)(&local_218->field_0x0 + 0x34) !=
          (int)uStack_1f0) {
        local_2f6 = 0;
        `TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2f6);
      }
      if (((TStack_210.CurrentBitIndex == uVar16) &&
          (TStack_210.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
         (pTVar3 == &this->ExternalDataToObjectMap)) break;
      lVar10 = *(longlong *)&pTVar3->field_0x0;
      (**(code **)(*(longlong *)param_1 + 0x10))
                (param_1,(longlong)
                         *(int *)((longlong)TStack_210.CurrentBitIndex * 0x20 + 0x10 + lVar10) << 3,
                 (longlong)*(int *)((longlong)TStack_210.CurrentBitIndex * 0x20 + 0x14 + lVar10) <<
                 3);
      TStack_210.UnvisitedBitMask = TStack_210.UnvisitedBitMask & ~TStack_210._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_210);
    }
    ::FString::FString(&local_128,"ExternalDataToObjectMap");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_2f0,&local_128);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_2f0);
    this_00 = &this->PlaybackFrames;
    TSet<TTuple<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
    ::CountBytes((TSet<TTuple<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
                  *)this_00,param_1);
    iStack_2b8 = 0;
    puVar2 = &(this->PlaybackFrames).field_0x10;
    iVar5 = *(int *)&(this->PlaybackFrames).field_0x28;
    local_2a0 = 0;
    iStack_2a4 = 0;
    if (iVar5 != 0) {
      puVar15 = *(uint **)&(this->PlaybackFrames).field_0x20;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)puVar2;
      }
      uVar16 = *puVar15;
      while (uVar16 == 0) {
        lVar10 = (longlong)iStack_2b8;
        local_2a0 = local_2a0 + 0x20;
        iStack_2b8 = iStack_2b8 + 1;
        iStack_2a4 = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_2b8) goto LAB_148490d41;
        uVar16 = puVar15[lVar10 + 1];
      }
      local_2c8 = (ulonglong)(-uVar16 & uVar16);
      uVar4 = local_2c8 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_250 = (int)lVar10;
      iStack_2a4 = local_2a0 + -1 + local_250;
      if (iVar5 < iStack_2a4) {
        iStack_2a4 = iVar5;
      }
    }
LAB_148490d41:
    uVar16 = *(uint *)&(this->PlaybackFrames).field_0x28;
    uStack_2b4 = (uint)local_2c8;
    uVar17 = uVar16 & 0xffffffe0;
    iStack_29c = iStack_274;
    iStack_298 = *(int *)&(this->PlaybackFrames).field_0x8 -
                 *(int *)&(this->PlaybackFrames).field_0x34;
    uStack_2a8 = 0xffffffff;
    uVar18 = -1 << ((byte)uVar16 & 0x1f);
    TStack_1e0._padding_ = CONCAT44(uStack_2b4,iStack_2b8);
    TStack_1e0.CurrentBitIndex = iStack_2a4;
    TStack_1e0.UnvisitedBitMask = 0xffffffff;
    iVar11 = (int)uVar16 >> 5;
    local_2c8 = CONCAT44(local_2c8._4_4_,uVar18);
    TStack_1e0._28_4_ = iStack_274;
    TStack_1e0.BaseBitIndex = local_2a0;
    uStack_1c0 = CONCAT44(uStack_294,iStack_298);
    local_2c0 = (TMap<FNetworkGUID,TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32>_>,0>_>
                 *)this_00;
    local_2b0 = puVar2;
    local_1e8 = this_00;
    TStack_1e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    if (((int)uVar16 < 0) || (iVar5 < (int)uVar16)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar18 = (uint)local_2c8;
    }
    uVar6 = *(uint *)&(this->PlaybackFrames).field_0x28;
    if (uVar16 != uVar6) {
      puVar14 = *(undefined1 **)&(this->PlaybackFrames).field_0x20;
      if (puVar14 == (undefined1 *)0x0) {
        puVar14 = puVar2;
      }
      uVar18 = uVar18 & *(uint *)(puVar14 + (longlong)iVar11 * 4);
      while (uVar18 == 0) {
        lVar10 = (longlong)iVar11;
        uVar17 = uVar17 + 0x20;
        iVar11 = iVar11 + 1;
        uVar16 = uVar6;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_148490e60;
        uVar18 = *(uint *)(puVar14 + lVar10 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar16 = (uVar17 - 1) + (int)lVar10;
      if ((int)uVar6 < (int)uVar16) {
        uVar16 = uVar6;
      }
    }
LAB_148490e60:
    while( true ) {
      pTVar8 = local_1e8;
      if (*(int *)(&local_1e8->field_0x0 + 8) - *(int *)(&local_1e8->field_0x0 + 0x34) !=
          (int)uStack_1c0) {
        `TSparseArray<TSparseSetElement<TTuple<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2f5);
      }
      if (((TStack_1e0.CurrentBitIndex == uVar16) &&
          (TStack_1e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
         (pTVar8 == this_00)) break;
      TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::CountBytes((TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    *)((longlong)TStack_1e0.CurrentBitIndex * 0x60 +
                      *(longlong *)&pTVar8->field_0x0 + 8),param_1);
      TStack_1e0.UnvisitedBitMask = TStack_1e0.UnvisitedBitMask & ~TStack_1e0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1e0);
    }
    ::FString::FString(&local_118,"PlaybackFrames");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_2f0,&local_118);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_2f0);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)(this->RecordingDeletedNetStartupActors).ArrayNum << 4,
               (longlong)(this->RecordingDeletedNetStartupActors).ArrayMax << 4);
    iVar5 = (this->RecordingDeletedNetStartupActors).ArrayNum;
    pFVar13 = (this->RecordingDeletedNetStartupActors).AllocatorInstance.Data;
    pFVar12 = pFVar13 + (longlong)iVar5 * 0x10;
    while( true ) {
      if ((this->RecordingDeletedNetStartupActors).ArrayNum != iVar5) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_2f4);
      }
      if (pFVar13 == pFVar12) break;
      ::operator<<(param_1,(FString *)pFVar13);
      pFVar13 = pFVar13 + 0x10;
    }
    ::FString::FString(&local_108,"RecordingDeletedNetStartupActors");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_2f0,&local_108);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_2f0);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)(this->RecordingDeletedNetStartupActors).ArrayNum << 4,
               (longlong)(this->RecordingDeletedNetStartupActors).ArrayMax << 4);
    iVar5 = (this->RecordingDeletedNetStartupActors).ArrayNum;
    pFVar13 = (this->RecordingDeletedNetStartupActors).AllocatorInstance.Data;
    pFVar12 = pFVar13 + (longlong)iVar5 * 0x10;
    while( true ) {
      if ((this->RecordingDeletedNetStartupActors).ArrayNum != iVar5) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_2f3);
      }
      if (pFVar13 == pFVar12) break;
      ::operator<<(param_1,(FString *)pFVar13);
      pFVar13 = pFVar13 + 0x10;
    }
    ::FString::FString(&local_f8,"RecordingDeletedNetStartupActors");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_2f0,&local_f8);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_2f0);
    TSet<TTuple<FName,TWeakObjectPtr<ULevel,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<ULevel,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::CountBytes((TSet<TTuple<FName,TWeakObjectPtr<ULevel,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<ULevel,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                  *)&this->WeakLevelsByName,param_1);
    ::FString::FString(&local_e8,"WeakLevelsByName");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_2f0,&local_e8);
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::~FScopeMarker(&local_2f0);
  return;
}

// SerializeDeletedStartupActors @ 148491b20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FReplayHelper::SerializeDeletedStartupActors
          (FReplayHelper *this,UNetConnection *param_1,FRepActorsCheckpointParams *param_2,
          FArchive *param_3)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  void *_Src;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong *plVar13;
  uint local_res8 [2];
  UNetConnection *local_res10;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_a8;
  FString local_a0;
  FCheckpointStepHelper local_90 [2];
  
  local_res10 = param_1;
  if ((param_1 == (UNetConnection *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Connection",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                         ,0x493,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  piVar1 = &(this->CheckpointSaveContext).NextAmortizedItem;
  lVar12 = 0x3d8;
  if (this->bHasDeltaCheckpoints == false) {
    lVar12 = 0x508;
  }
  plVar13 = (longlong *)(&(this->OnReplayRecordError).field_0x0 + lVar12);
  local_90[0].TotalCount = *(int *)(plVar13 + 1);
  if (*piVar1 == 0) {
    plVar4 = *(longlong **)&param_3->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      local_res8[0] = local_90[0].TotalCount;
      if ((param_3->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_3 + 0x188))(param_3,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_3,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    local_90[0].TotalCount = *(int *)(plVar13 + 1);
  }
  local_90[0].CheckpointStartTime = param_2->StartCheckpointTime;
  local_90[0].CheckpointState = SerializeDeletedStartupActors;
  local_90[0].CurrentIndex = piVar1;
  QueryPerformanceCounter(&local_res18);
  dVar6 = __real_4170000000000000;
  dVar2 = param_2->StartCheckpointTime;
  dVar3 = param_2->CheckpointMaxUploadTimePerFrame;
  local_90[0].StartTime =
       (double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle +
       __real_4170000000000000;
  if (((int)plVar13[1] != 0) &&
     (((*piVar1 < 0 || ((int)plVar13[1] <= *piVar1)) &&
      (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                         ("DeletedActors.Num() == 0 || DeletedActors.IsValidIndex(CheckpointSaveContext.NextAmortizedItem)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                          ,0x4a3,L""), bVar7)))) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  uVar11 = *piVar1;
  iVar10 = (int)plVar13[1];
  if ((int)uVar11 < iVar10) {
    do {
      uVar9 = 0;
      if ((int)uVar11 < iVar10) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a0.Data.ArrayNum = *(int *)(*plVar13 + 8 + (longlong)(int)uVar11 * 0x10);
      lVar12 = (longlong)local_a0.Data.ArrayNum;
      _Src = *(void **)(*plVar13 + (longlong)(int)uVar11 * 0x10);
      if (local_a0.Data.ArrayNum == 0) {
        local_a0.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_a0.Data.ArrayNum,0,(ForAnyElementType *)&local_a0,
                   local_a0.Data.ArrayNum,&local_a0.Data.ArrayMax);
        memcpy(local_a0.Data.AllocatorInstance.Data,_Src,lVar12 * 2);
      }
      (**(code **)(GEngine->_padding_ + 0x498))(GEngine,local_res10,&local_a0);
      ::operator<<(param_3,&local_a0);
      *piVar1 = *piVar1 + 1;
      if ((0.0 < param_2->CheckpointMaxUploadTimePerFrame) &&
         (QueryPerformanceCounter(&local_a8),
         dVar2 + dVar3 <= (double)local_a8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar6)
         ) {
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
        break;
      }
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
      uVar11 = *piVar1;
      iVar10 = (int)plVar13[1];
    } while ((int)uVar11 < iVar10);
  }
  lVar12 = plVar13[1];
  iVar10 = (this->CheckpointSaveContext).NextAmortizedItem;
  FCheckpointStepHelper::~FCheckpointStepHelper(local_90);
  return iVar10 == (int)lVar12;
}

// SerializeDeltaClosedChannels @ 148491e10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FReplayHelper::SerializeDeltaClosedChannels
          (FReplayHelper *this,UNetConnection *param_1,FRepActorsCheckpointParams *param_2,
          FArchive *param_3)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  EChannelCloseReason *pEVar10;
  uint uVar11;
  EChannelCloseReason local_res8 [8];
  uint local_res10 [2];
  FNetworkGUID_u_0 local_res18 [2];
  LARGE_INTEGER local_a8;
  LARGE_INTEGER local_a0;
  FCheckpointStepHelper local_98 [2];
  
  if ((param_1 == (UNetConnection *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Connection",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                         ,0x4df,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  local_res10[0] = (this->CheckpointSaveContext).DeltaChannelCloseKeys.ArrayNum;
  piVar1 = &(this->CheckpointSaveContext).NextAmortizedItem;
  if (*piVar1 == 0) {
    plVar4 = *(longlong **)&param_3->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_3->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_3 + 0x188))(param_3,local_res10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_3,local_res10);
      }
    }
    else {
      local_res10[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
  }
  local_98[0].CheckpointStartTime = param_2->StartCheckpointTime;
  local_98[0].CheckpointState = SerializeDeltaClosedChannels;
  local_98[0].CurrentIndex = piVar1;
  local_98[0].TotalCount = local_res10[0];
  QueryPerformanceCounter(&local_a8);
  dVar6 = __real_4170000000000000;
  dVar2 = param_2->CheckpointMaxUploadTimePerFrame;
  dVar3 = param_2->StartCheckpointTime;
  local_98[0].StartTime =
       (double)local_a8.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  if ((local_res10[0] != 0) &&
     (((*piVar1 < 0 || ((this->CheckpointSaveContext).DeltaChannelCloseKeys.ArrayNum <= *piVar1)) &&
      (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                         ("TotalCount == 0 || CheckpointSaveContext.DeltaChannelCloseKeys.IsValidIndex(CheckpointSaveContext.NextAmortizedItem)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                          ,0x4ec,L""), bVar7)))) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  uVar11 = *piVar1;
  if ((int)uVar11 < (int)local_res10[0]) {
    do {
      uVar9 = 0;
      if ((int)uVar11 < (this->CheckpointSaveContext).DeltaChannelCloseKeys.ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      local_res18[0] =
           *(FNetworkGUID_u_0 *)
            ((this->CheckpointSaveContext).DeltaChannelCloseKeys.AllocatorInstance.Data +
            (longlong)(int)uVar11 * 8);
      pEVar10 = TMapBase<FNetworkGUID,enum_EChannelCloseReason,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,enum_EChannelCloseReason,0>_>
                ::FindChecked(&(this->CheckpointSaveContext).DeltaCheckpointData.ChannelsToClose,
                              (FNetworkGUID *)local_res18);
      local_res8[0] = *pEVar10;
      (**(code **)(*(longlong *)param_3 + 0x1a8))(param_3,local_res18);
      plVar4 = *(longlong **)&param_3->field_0x8;
      if ((EChannelCloseReason *)plVar4[1] < (EChannelCloseReason *)*plVar4 + 1) {
        (**(code **)(*(longlong *)param_3 + 0x188))(param_3,local_res8,1);
      }
      else {
        local_res8[0] = *(EChannelCloseReason *)*plVar4;
        *plVar4 = *plVar4 + 1;
      }
      *piVar1 = *piVar1 + 1;
    } while (((param_2->CheckpointMaxUploadTimePerFrame <= 0.0) ||
             (QueryPerformanceCounter(&local_a0),
             (double)local_a0.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar6 <
             dVar2 + dVar3)) && (uVar11 = *piVar1, (int)uVar11 < (int)local_res10[0]));
  }
  bVar7 = (this->CheckpointSaveContext).NextAmortizedItem == local_res10[0];
  FCheckpointStepHelper::~FCheckpointStepHelper(local_98);
  return bVar7;
}

// SerializeDeltaDynamicDestroyed @ 1484920b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FReplayHelper::SerializeDeltaDynamicDestroyed
          (FReplayHelper *this,UNetConnection *param_1,FRepActorsCheckpointParams *param_2,
          FArchive *param_3)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  longlong *plVar5;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint local_res8 [2];
  LARGE_INTEGER local_res10;
  undefined8 local_res18 [2];
  LARGE_INTEGER local_98;
  FCheckpointStepHelper local_90 [2];
  
  if ((param_1 == (UNetConnection *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Connection",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                         ,0x4bc,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  piVar1 = &(this->CheckpointSaveContext).NextAmortizedItem;
  local_res8[0] =
       *(int *)&(this->CheckpointSaveContext).DeltaCheckpointData.DestroyedDynamicActors.Elements.
                field_0x8 -
       *(int *)&(this->CheckpointSaveContext).DeltaCheckpointData.DestroyedDynamicActors.Elements.
                field_0x34;
  if (*piVar1 == 0) {
    plVar5 = *(longlong **)&param_3->field_0x8;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((param_3->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_3 + 0x188))(param_3,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_3,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
  }
  local_90[0].CheckpointStartTime = param_2->StartCheckpointTime;
  local_90[0].CheckpointState = SerializeDeltaDynamicDestroyed;
  local_90[0].CurrentIndex = piVar1;
  local_90[0].TotalCount = local_res8[0];
  QueryPerformanceCounter(&local_res10);
  dVar7 = __real_4170000000000000;
  dVar2 = param_2->CheckpointMaxUploadTimePerFrame;
  dVar3 = param_2->StartCheckpointTime;
  local_90[0].StartTime =
       (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle +
       __real_4170000000000000;
  if (local_res8[0] != 0) {
    uVar4 = *piVar1;
    if (((uVar4 != 0xffffffff) && (-1 < (int)uVar4)) &&
       ((int)uVar4 <
        *(int *)&(this->CheckpointSaveContext).DeltaCheckpointData.DestroyedDynamicActors.Elements.
                 field_0x8)) {
      if ((*(int *)&(this->CheckpointSaveContext).DeltaCheckpointData.DestroyedDynamicActors.
                    Elements.field_0x28 <= (int)uVar4) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      puVar11 = *(undefined1 **)
                 &(this->CheckpointSaveContext).DeltaCheckpointData.DestroyedDynamicActors.Elements.
                  field_0x20;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = &(this->CheckpointSaveContext).DeltaCheckpointData.DestroyedDynamicActors.Elements
                   .field_0x10;
      }
      if ((*(uint *)(puVar11 + (longlong)((int)(uVar4 + ((int)uVar4 >> 0x1f & 0x1fU)) >> 5) * 4) >>
           (uVar4 & 0x1f) & 1) != 0) goto LAB_14849226e;
    }
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("TotalCount == 0 || CheckpointSaveContext.DeltaCheckpointData.DestroyedDynamicActors.IsValidId(FSetElementId::FromInteger(CheckpointSaveContext.NextAmortizedItem))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                       ,0x4c9,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
  }
LAB_14849226e:
  iVar10 = *piVar1;
  if (iVar10 < (int)local_res8[0]) {
    do {
      local_res18[0] =
           *(undefined8 *)
            (*(longlong *)
              &(this->CheckpointSaveContext).DeltaCheckpointData.DestroyedDynamicActors.Elements +
            (longlong)iVar10 * 0x10);
      (**(code **)(*(longlong *)param_3 + 0x1a8))(param_3,local_res18);
      *piVar1 = *piVar1 + 1;
      if ((0.0 < param_2->CheckpointMaxUploadTimePerFrame) &&
         (QueryPerformanceCounter(&local_98),
         dVar2 + dVar3 <= (double)local_98.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar7)
         ) break;
      iVar10 = *piVar1;
    } while (iVar10 < (int)local_res8[0]);
  }
  bVar8 = (this->CheckpointSaveContext).NextAmortizedItem == local_res8[0];
  FCheckpointStepHelper::~FCheckpointStepHelper(local_90);
  return bVar8;
}

// SerializeGuidCache @ 148492320

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FReplayHelper::SerializeGuidCache
          (FReplayHelper *this,UNetConnection *param_1,FRepActorsCheckpointParams *param_2,
          FArchive *param_3)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  int *piVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  undefined1 *puVar7;
  longlong lVar8;
  int *piVar9;
  code *pcVar10;
  double dVar11;
  bool bVar12;
  undefined1 uVar13;
  char cVar14;
  uint uVar15;
  uint uVar16;
  long64 lVar17;
  UObject *pUVar18;
  undefined8 uVar19;
  longlong *plVar20;
  int iVar21;
  undefined1 *puVar22;
  undefined4 *puVar23;
  longlong lVar24;
  FScriptContainerElement *pFVar25;
  undefined1 local_res8 [8];
  UNetConnection *local_res10;
  FRepActorsCheckpointParams *local_res18;
  undefined1 local_d8;
  byte local_d7 [3];
  undefined4 local_d4;
  int local_d0;
  undefined1 local_cc [12];
  LARGE_INTEGER local_c0;
  FString local_b8;
  FName *local_a8;
  int *local_a0;
  FCheckpointStepHelper local_98 [2];
  
  local_res10 = param_1;
  local_res18 = param_2;
  if ((param_1 == (UNetConnection *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Connection",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                          ,0x441,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    uVar13 = (*pcVar10)();
    return (bool)uVar13;
  }
  piVar9 = &(this->CheckpointSaveContext).NextAmortizedItem;
  if (*piVar9 == 0) {
    lVar17 = (**(code **)(*(longlong *)param_3 + 0x28))(param_3);
    (this->CheckpointSaveContext).NetGuidsCountPos = lVar17;
    piVar4 = (int *)**(undefined8 **)&param_3->field_0x8;
    if ((int *)(*(undefined8 **)&param_3->field_0x8)[1] < piVar4 + 1) {
      if ((param_3->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_3 + 0x188))(param_3,piVar9,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_3,(uint *)piVar9);
      }
    }
    else {
      *piVar9 = *piVar4;
      **(longlong **)&param_3->field_0x8 = **(longlong **)&param_3->field_0x8 + 4;
    }
  }
  local_98[0].CheckpointStartTime = param_2->StartCheckpointTime;
  local_98[0].TotalCount = (this->CheckpointSaveContext).NetGuidCacheSnapshot.ArrayNum;
  local_98[0].CheckpointState = SerializeGuidCache;
  local_98[0].CurrentIndex = piVar9;
  if ((piVar9 == (int *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCurrentIndex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ReplayHelper.h"
                          ,0x11a,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    uVar13 = (*pcVar10)();
    return (bool)uVar13;
  }
  QueryPerformanceCounter((LARGE_INTEGER *)(local_cc + 4));
  dVar11 = __real_4170000000000000;
  iVar21 = (this->CheckpointSaveContext).NetGuidCacheSnapshot.ArrayNum;
  dVar2 = param_2->StartCheckpointTime;
  dVar3 = param_2->CheckpointMaxUploadTimePerFrame;
  local_98[0].StartTime =
       (double)(longlong)local_cc._4_8_ * FGenericPlatformTime::SecondsPerCycle +
       __real_4170000000000000;
  if ((iVar21 != 0) &&
     (((*piVar9 < 0 || (iVar21 <= *piVar9)) &&
      (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                          ("CheckpointSaveContext.NetGuidCacheSnapshot.Num() == 0 || CheckpointSaveContext.NetGuidCacheSnapshot.IsValidIndex(CheckpointSaveContext.NextAmortizedItem)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                           ,0x44d,L""), bVar12)))) {
    pcVar10 = (code *)swi(3);
    uVar13 = (*pcVar10)();
    return (bool)uVar13;
  }
  uVar16 = *piVar9;
  iVar21 = (this->CheckpointSaveContext).NetGuidCacheSnapshot.ArrayNum;
  if ((int)uVar16 < iVar21) {
    do {
      uVar15 = 0;
      if ((int)uVar16 < iVar21) {
        uVar15 = ~uVar16 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        uVar13 = (*pcVar10)();
        return (bool)uVar13;
      }
      uVar15 = *piVar9;
      pFVar25 = (this->CheckpointSaveContext).NetGuidCacheSnapshot.AllocatorInstance.Data +
                (longlong)(int)uVar16 * 0x38;
      uVar16 = 0;
      if ((int)uVar15 < (this->CheckpointSaveContext).NetGuidCacheSnapshot.ArrayNum) {
        uVar16 = ~uVar15 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        uVar13 = (*pcVar10)();
        return (bool)uVar13;
      }
      pFVar5 = (this->CheckpointSaveContext).NetGuidCacheSnapshot.AllocatorInstance.Data;
      lVar24 = (longlong)(int)uVar15 * 0x38;
      pUVar18 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar5 + lVar24 + 8));
      if ((pUVar18 != (UObject *)0x0) &&
         ((((byte)*pFVar25 & 1) != 0 ||
          (cVar14 = (**(code **)(*(longlong *)pUVar18 + 0x200))(pUVar18), cVar14 != '\0')))) {
        (**(code **)(*(longlong *)param_3 + 0x1a8))(param_3,pFVar25);
        (**(code **)(*(longlong *)param_3 + 0x1a8))(param_3,pFVar5 + lVar24 + 0x10);
        lVar6 = *(longlong *)(pFVar5 + lVar24 + 0x18);
        uVar16 = ::GetTypeHash((FNameEntryId)(uint)lVar6);
        if (*(int *)&(this->CheckpointSaveContext).NameTableMap.field_0x8 !=
            *(int *)&(this->CheckpointSaveContext).NameTableMap.field_0x34) {
          puVar7 = *(undefined1 **)&(this->CheckpointSaveContext).NameTableMap.field_0x40;
          puVar22 = &(this->CheckpointSaveContext).NameTableMap.field_0x38;
          if (puVar7 != (undefined1 *)0x0) {
            puVar22 = puVar7;
          }
          iVar21 = *(int *)(puVar22 +
                           (ulonglong)
                           (*(int *)&(this->CheckpointSaveContext).NameTableMap.field_0x48 - 1U &
                           (int)((ulonglong)lVar6 >> 0x20) + uVar16) * 4);
          if (iVar21 != -1) {
            lVar8 = *(longlong *)&(this->CheckpointSaveContext).NameTableMap;
            do {
              lVar1 = lVar8 + (longlong)iVar21 * 0x14;
              if (*(longlong *)(lVar8 + (longlong)iVar21 * 0x14) == lVar6) {
                plVar20 = *(longlong **)&param_3->field_0x8;
                puVar23 = (undefined4 *)(lVar1 + 8);
                if (lVar1 == 0) {
                  puVar23 = (undefined4 *)0x0;
                }
                if (puVar23 == (undefined4 *)0x0) goto LAB_14849264f;
                local_res8[0] = 0;
                if ((undefined1 *)plVar20[1] < (undefined1 *)*plVar20 + 1) {
                  (**(code **)(*(longlong *)param_3 + 0x188))(param_3,local_res8,1);
                }
                else {
                  local_res8[0] = *(undefined1 *)*plVar20;
                  *plVar20 = *plVar20 + 1;
                }
                local_d4 = *puVar23;
                (**(code **)(*(longlong *)param_3 + 0x1a0))(param_3,&local_d4);
                goto LAB_148492764;
              }
              iVar21 = *(int *)(lVar1 + 0xc);
            } while (iVar21 != -1);
          }
        }
        plVar20 = *(longlong **)&param_3->field_0x8;
LAB_14849264f:
        local_d8 = 1;
        if ((undefined1 *)plVar20[1] < (undefined1 *)*plVar20 + 1) {
          (**(code **)(*(longlong *)param_3 + 0x188))(param_3,&local_d8,1);
        }
        else {
          local_d8 = *(undefined1 *)*plVar20;
          *plVar20 = *plVar20 + 1;
        }
        ::FName::ToString((FName *)(pFVar5 + lVar24 + 0x18),&local_b8);
        (**(code **)(GEngine->_padding_ + 0x498))(GEngine,local_res10,&local_b8,0);
        ::operator<<(param_3,&local_b8);
        local_d0 = *(int *)&(this->CheckpointSaveContext).NameTableMap.field_0x8 -
                   *(int *)&(this->CheckpointSaveContext).NameTableMap.field_0x34;
        local_a0 = &local_d0;
        local_a8 = (FName *)(pFVar5 + lVar24 + 0x18);
        TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,unsigned_int_const_&>_>
                  ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
                    *)&(this->CheckpointSaveContext).NameTableMap,
                   (TPairInitializer<FName_const_&,unsigned_int_const_&> *)local_cc,
                   (bool *)&local_a8);
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
LAB_148492764:
        plVar20 = *(longlong **)&param_3->field_0x8;
        local_d7[0] = (byte)pFVar5[lVar24 + 0x30] & 3;
        if ((byte *)plVar20[1] < (byte *)*plVar20 + 1) {
          (**(code **)(*(longlong *)param_3 + 0x188))(param_3,local_d7,1);
        }
        else {
          local_d7[0] = *(byte *)*plVar20;
          *plVar20 = *plVar20 + 1;
        }
        piVar4 = &(this->CheckpointSaveContext).NumNetGuidsForRecording;
        *piVar4 = *piVar4 + 1;
      }
      *piVar9 = *piVar9 + 1;
      if ((0.0 < local_res18->CheckpointMaxUploadTimePerFrame) &&
         (QueryPerformanceCounter(&local_c0),
         dVar2 + dVar3 <= (double)local_c0.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar11
         )) break;
      uVar16 = *piVar9;
      iVar21 = (this->CheckpointSaveContext).NetGuidCacheSnapshot.ArrayNum;
    } while ((int)uVar16 < iVar21);
  }
  bVar12 = (this->CheckpointSaveContext).NextAmortizedItem ==
           (this->CheckpointSaveContext).NetGuidCacheSnapshot.ArrayNum;
  if (bVar12) {
    uVar19 = (**(code **)(*(longlong *)param_3 + 0x28))(param_3);
    (**(code **)(*(longlong *)param_3 + 0x1b8))
              (param_3,(this->CheckpointSaveContext).NetGuidsCountPos);
    piVar9 = (int *)**(undefined8 **)&param_3->field_0x8;
    if ((int *)(*(undefined8 **)&param_3->field_0x8)[1] < piVar9 + 1) {
      piVar9 = &(this->CheckpointSaveContext).NumNetGuidsForRecording;
      if ((param_3->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_3 + 0x188))(param_3,piVar9,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_3,(uint *)piVar9);
      }
    }
    else {
      (this->CheckpointSaveContext).NumNetGuidsForRecording = *piVar9;
      **(longlong **)&param_3->field_0x8 = **(longlong **)&param_3->field_0x8 + 4;
    }
    (**(code **)(*(longlong *)param_3 + 0x1b8))(param_3,uVar19);
  }
  FCheckpointStepHelper::~FCheckpointStepHelper(local_98);
  return bVar12;
}

// SetAnalyticsProvider @ 148493080

void __thiscall
FReplayHelper::SetAnalyticsProvider(FReplayHelper *this,TSharedPtr<IAnalyticsProvider,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  IAnalyticsProvider *pIVar2;
  INetworkReplayStreamer *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined8 in_R8;
  undefined8 in_R9;
  IAnalyticsProvider *pIVar5;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pIVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pIVar5 = (this->AnalyticsProvider).Object;
  pTVar4 = (this->AnalyticsProvider).SharedReferenceCount.ReferenceController;
  (this->AnalyticsProvider).Object = pIVar2;
  (this->AnalyticsProvider).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pIVar3 = (this->ReplayStreamer).Object;
  if (pIVar3 != (INetworkReplayStreamer *)0x0) {
    (**(code **)(pIVar3->_padding_ + 0x1a8))(pIVar3,param_1,in_R8,in_R9,pIVar5);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetExternalDataForObject @ 1484936a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FReplayHelper::SetExternalDataForObject
          (FReplayHelper *this,UNetConnection *param_1,UObject *param_2,uchar *param_3,int param_4)

{
  UNetDriver *pUVar1;
  FNetGUIDCache *pFVar2;
  code *pcVar3;
  UObject *pUVar4;
  bool bVar5;
  undefined1 uVar6;
  TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID> *pTVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined1 local_res8 [16];
  UObject *local_res18 [2];
  FWeakObjectPtr local_c8;
  FWeakObjectPtr local_c0;
  FWeakObjectPtr local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  ForAnyElementType local_a0;
  int local_98 [4];
  FString local_88;
  UObject *local_78;
  UObject *local_70;
  FName local_68;
  UObject *local_60;
  FWeakObjectPtr *local_58;
  undefined8 *local_50;
  UObject **local_48;
  undefined8 *local_40;
  
  local_res18[0] = param_2;
  if (((param_1 == (UNetConnection *)0x0) ||
      ((param_1->Driver).field0_0x0.DebugPtr == (UNetDriver *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Connection && Connection->Driver",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                         ,0x65c,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  pUVar1 = (param_1->Driver).field0_0x0.DebugPtr;
  if (((pUVar1->GuidCache).Object == (FNetGUIDCache *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  pUVar4 = local_res18[0];
  pFVar2 = (pUVar1->GuidCache).Object;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res18[0]);
  }
  uVar8 = 0;
  local_78 = pUVar4;
  local_c0.ObjectIndex = 0;
  local_c0.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_c0,(FObjectPtr)&local_78);
  pTVar7 = TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
                   *)&pFVar2->NetGUIDLookup,(TWeakObjectPtr<UObject_const_,FWeakObjectPtr>)local_c0)
  ;
  local_70 = local_res18[0];
  if (pTVar7 != (TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID> *)0x0) {
    uVar8 = *(undefined8 *)&pTVar7->field_0x8;
  }
  local_b0 = uVar8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res18[0]);
  }
  local_c8.ObjectIndex = 0;
  local_c8.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_70 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_70);
  }
  FWeakObjectPtr::operator=(&local_c8,(FObjectPtr)&local_70);
  pUVar4 = local_res18[0];
  if (*(int *)&(this->ExternalDataMap).field_0x8 != *(int *)&(this->ExternalDataMap).field_0x34) {
    puVar9 = *(undefined1 **)&(this->ExternalDataMap).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->ExternalDataMap).field_0x38;
    }
    iVar10 = *(int *)(puVar9 + ((ulonglong)(*(int *)&(this->ExternalDataMap).field_0x48 - 1) &
                               ((ulonglong)local_c8 & 0xffffffff ^ (ulonglong)local_c8 >> 0x20)) * 4
                     );
    if (iVar10 != -1) {
      do {
        uVar8 = *(undefined8 *)(*(longlong *)&this->ExternalDataMap + (longlong)iVar10 * 0x30);
        if (((int)uVar8 == local_c8.ObjectIndex) &&
           ((int)((ulonglong)uVar8 >> 0x20) == local_c8.ObjectSerialNumber)) {
          if (iVar10 != -1) {
            if (2 < (byte)LogDemo._0_1_) {
              if (local_res18[0] == (UObject *)0x0) {
                ::FString::FString(&local_88,L"None");
              }
              else {
                local_68.ComparisonIndex.Value = *(uint *)&local_res18[0]->field_0x18;
                local_68.Number = *(uint *)&local_res18[0]->field_0x1c;
                ::FName::ToString(&local_68,&local_88);
              }
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
              if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_88.Data.AllocatorInstance.Data);
              }
            }
            return false;
          }
          break;
        }
        iVar10 = *(int *)(*(longlong *)&this->ExternalDataMap + 0x28 + (longlong)iVar10 * 0x30);
      } while (iVar10 != -1);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res18[0]);
  }
  local_b8.ObjectIndex = 0;
  local_b8.ObjectSerialNumber = 0;
  local_60 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_b8,(FObjectPtr)&local_60);
  local_58 = &local_b8;
  local_50 = &local_b0;
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_&&,FNetworkGUID_const_&>_>
            ((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
              *)&this->ObjectsWithExternalDataMap,
             (TPairInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_&&,FNetworkGUID_const_&> *)
             local_res8,(bool *)&local_58);
  local_a8 = local_b0;
  local_98[2] = param_4;
  local_a0.Data = (FScriptContainerElement *)0x0;
  local_98[0] = 0;
  local_98[1] = 0;
  iVar10 = param_4 + 7 >> 3;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,iVar10,&local_a0,local_98,local_98 + 1);
  memcpy(local_a0.Data,param_3,(longlong)iVar10);
  local_48 = local_res18;
  local_40 = &local_a8;
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FReplayHelper::FExternalDataWrapper>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FReplayHelper::FExternalDataWrapper,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UObject_*_&,FReplayHelper::FExternalDataWrapper_&&>_>
            ((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FReplayHelper::FExternalDataWrapper>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FReplayHelper::FExternalDataWrapper,0>,FDefaultSetAllocator>
              *)&this->ExternalDataMap,
             (TPairInitializer<UObject_*_&,FReplayHelper::FExternalDataWrapper_&&> *)
             (local_res8 + 8),(bool *)&local_48);
  if (local_a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data);
  }
  return true;
}

// SetPlaybackNetworkVersions @ 148494120

void __thiscall FReplayHelper::SetPlaybackNetworkVersions(FReplayHelper *this,FArchive *param_1)

{
  code *pcVar1;
  uint uVar2;
  
  pcVar1 = *(code **)(*(longlong *)param_1 + 0x128);
  uVar2 = FNetworkDemoHeader::GetCustomVersion
                    (&this->PlaybackDemoHeader,&FEngineNetworkCustomVersion::Guid);
  (*pcVar1)(param_1,uVar2);
  pcVar1 = *(code **)(*(longlong *)param_1 + 0x130);
  uVar2 = FNetworkDemoHeader::GetCustomVersion
                    (&this->PlaybackDemoHeader,&FGameNetworkCustomVersion::Guid);
  (*pcVar1)(param_1,uVar2);
  (**(code **)(*(longlong *)param_1 + 0x110))(param_1,(this->PlaybackDemoHeader).PackageVersionUE);
  (**(code **)(*(longlong *)param_1 + 0x118))
            (param_1,(this->PlaybackDemoHeader).PackageVersionLicenseeUE);
  (**(code **)(*(longlong *)param_1 + 0x120))(param_1,&(this->PlaybackDemoHeader).EngineVersion);
                    /* WARNING: Could not recover jumptable at 0x0001484941dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x68))(param_1,&(this->PlaybackDemoHeader).CustomVersions);
  return;
}

// SetPlaybackNetworkVersions @ 1484941f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FReplayHelper::SetPlaybackNetworkVersions(FReplayHelper *this,UNetConnection *param_1)

{
  if (param_1 != (UNetConnection *)0x0) {
    UNetConnection::SetNetworkCustomVersions(param_1,&(this->PlaybackDemoHeader).CustomVersions);
    param_1->PackageVersionUE = (this->PlaybackDemoHeader).PackageVersionUE;
    param_1->PackageVersionLicenseeUE = (this->PlaybackDemoHeader).PackageVersionLicenseeUE;
    (param_1->EngineVersion)._padding_ = (this->PlaybackDemoHeader).EngineVersion._padding_;
    *(int *)&(param_1->EngineVersion)._padding_ =
         (int)(this->PlaybackDemoHeader).EngineVersion._padding_;
    ::FString::operator=
              (&(param_1->EngineVersion).Branch,&(this->PlaybackDemoHeader).EngineVersion.Branch);
  }
  return;
}

// ShouldSaveCheckpoint @ 148495070

bool __thiscall FReplayHelper::ShouldSaveCheckpoint(FReplayHelper *this)

{
  TConsoleVariableData<float> *pTVar1;
  bool bVar2;
  longlong lVar3;
  
  pTVar1 = CVarCheckpointUploadDelayInSeconds.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      lVar3 = 4;
      goto LAB_14849509f;
    }
  }
  lVar3 = 0;
LAB_14849509f:
  if ((this->bPendingCheckpointRequest == false) &&
     ((double)this->DemoCurrentTime - this->LastCheckpointTime <=
      (double)*(float *)((longlong)pTVar1->ShadowedValue + lVar3))) {
    return false;
  }
  return true;
}

// StartRecording @ 148495110

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FReplayHelper::StartRecording(FReplayHelper *this,UNetConnection *param_1)

{
  INetworkReplayStreamer *pIVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_> *pTVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  UObject *pUVar10;
  UWorld *pUVar11;
  UWorldPartition *pUVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  FString *pFVar15;
  FNetworkReplayVersion *pFVar16;
  undefined8 *puVar17;
  ulong64 uVar18;
  uint uVar19;
  UObject *pUVar20;
  longlong lVar21;
  int iVar22;
  UObject *local_res8;
  FName local_res10;
  ForAnyElementType local_168;
  undefined8 local_160;
  undefined4 local_158 [2];
  TIndexedContainerIterator<TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_>_const_,ULocalPlayer_*_const,int>
  local_150;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_140;
  FDelegateAllocation local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FScriptContainerElement *local_f8;
  undefined8 local_f0;
  FNetworkReplayVersion local_e8;
  undefined1 local_d0;
  FString local_c8;
  FDestructionSentinel local_b8;
  FDestructionSentinel local_a0;
  FDelegateAllocation *local_88;
  FString local_80;
  FString local_70;
  FString local_60;
  FNetworkReplayVersion local_50;
  
  pUVar20 = (UObject *)0x0;
  local_res8 = (UObject *)((ulonglong)local_res8 & 0xffffffff00000000);
  pUVar10 = pUVar20;
  if (param_1 != (UNetConnection *)0x0) {
    pUVar10 = (UObject *)(**(code **)(param_1->_padding_ + 0x180))(param_1);
  }
  local_res8 = pUVar10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar10);
  }
  FWeakObjectPtr::operator=(&(this->World).WeakPtr,(FObjectPtr)&local_res8);
  pTVar3 = CVarWithLevelStreamingFixes.Ref;
  bVar6 = IsInParallelGameThread();
  if (bVar6) {
LAB_14849519e:
    pUVar10 = pUVar20;
  }
  else {
    bVar6 = IsInGameThread();
    pUVar10 = (UObject *)&DAT_00000004;
    if (bVar6) goto LAB_14849519e;
  }
  if (*(int *)(&pUVar10->field_0x0 + (longlong)pTVar3->ShadowedValue) == 0) {
    pUVar11 = (UWorld *)FWeakObjectPtr::Get(&(this->World).WeakPtr);
    pUVar12 = UWorld::GetWorldPartition(pUVar11);
    bVar6 = false;
    if (pUVar12 != (UWorldPartition *)0x0) goto LAB_1484951bf;
  }
  else {
LAB_1484951bf:
    bVar6 = true;
  }
  this->bHasLevelStreamingFixes = bVar6;
  pTVar3 = CVarWithDeltaCheckpoints.Ref;
  bVar6 = IsInParallelGameThread();
  if (bVar6) {
LAB_1484951e6:
    pUVar10 = pUVar20;
  }
  else {
    bVar6 = IsInGameThread();
    pUVar10 = (UObject *)&DAT_00000004;
    if (bVar6) goto LAB_1484951e6;
  }
  if (*(int *)(&pUVar10->field_0x0 + (longlong)pTVar3->ShadowedValue) == 0) {
LAB_148495234:
    bVar6 = false;
  }
  else {
    if (((this->ReplayStreamer).Object == (INetworkReplayStreamer *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pIVar1 = (this->ReplayStreamer).Object;
    cVar7 = (**(code **)(pIVar1->_padding_ + 0x48))(pIVar1,1);
    if (cVar7 == '\0') goto LAB_148495234;
    bVar6 = true;
  }
  this->bHasDeltaCheckpoints = bVar6;
  pTVar3 = CVarWithGameSpecificFrameData.Ref;
  bVar6 = IsInParallelGameThread();
  if (!bVar6) {
    bVar6 = IsInGameThread();
    pUVar10 = (UObject *)&DAT_00000004;
    if (!bVar6) goto LAB_14849525e;
  }
  pUVar10 = pUVar20;
LAB_14849525e:
  this->bHasGameSpecificFrameData =
       *(int *)(&pUVar10->field_0x0 + (longlong)pTVar3->ShadowedValue) != 0;
  pwVar13 = FURL::GetOption(&this->DemoURL,L"DemoFriendlyName=",(wchar_t *)0x0);
  pwVar14 = FURL::GetOption(&this->DemoURL,L"RecordMapChanges",(wchar_t *)0x0);
  local_168.Data = (FScriptContainerElement *)0x0;
  local_160 = 0;
  this->bRecordMapChanges = pwVar14 != (wchar_t *)0x0;
  pUVar11 = (UWorld *)FWeakObjectPtr::Get(&(this->World).WeakPtr);
  UEngine::GetLocalPlayerIterator(GEngine,&local_150,pUVar11);
  for (; (pTVar4 = local_150.Container, lVar21 = (longlong)local_150.Index, -1 < local_150.Index &&
         (local_150.Index < (local_150.Container)->ArrayNum)); local_150.Index = local_150.Index + 1
      ) {
    uVar19 = 0;
    if (local_150.Index < (local_150.Container)->ArrayNum) {
      uVar19 = (uint)~local_150.Index >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(longlong *)((pTVar4->AllocatorInstance).Data + lVar21 * 8) != 0) break;
  }
  do {
    pTVar4 = local_150.Container;
    lVar21 = (longlong)local_150.Index;
    uVar19 = 0;
    if ((local_150.Index < 0) || ((local_150.Container)->ArrayNum <= local_150.Index)) {
      this->bIsWaitingForStream = true;
      iVar9 = (this->DemoURL).Map.Data.ArrayNum;
      uVar8 = iVar9 - 1;
      if (iVar9 == 0) {
        uVar8 = uVar19;
      }
      ::FString::AssignRange
                (&this->ActiveReplayName,(wchar_t *)(this->DemoURL).Map.Data.AllocatorInstance.Data,
                 uVar8);
      if (this->bHasDeltaCheckpoints != false) {
        ResetDeltaCheckpointTracking(this,param_1);
      }
      iVar22 = (this->DemoURL).Map.Data.ArrayNum;
      local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_128.Data.ArrayNum = 0;
      local_128.Data.ArrayMax = 0;
      iVar9 = iVar22 + -1;
      local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (iVar22 == 0) {
        iVar9 = 0;
      }
      local_118.Data.ArrayNum = 0;
      local_118.Data.ArrayMax = 0;
      local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_108.Data.ArrayNum = 0;
      local_108.Data.ArrayMax = 0;
      local_f8 = (void *)0x0;
      local_f0 = 0;
      local_e8.AppString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e8.AppString.Data.ArrayNum = 0;
      local_e8.AppString.Data.ArrayMax = 0;
      local_e8.NetworkVersion = 0;
      local_e8.Changelist = 0;
      ::FString::AssignRange
                (&local_128,(wchar_t *)(this->DemoURL).Map.Data.AllocatorInstance.Data,iVar9);
      bVar6 = pwVar13 == (wchar_t *)0x0;
      if (bVar6) {
        pUVar11 = (UWorld *)FWeakObjectPtr::Get(&(this->World).WeakPtr);
        pFVar15 = UWorld::GetMapName(pUVar11,&local_80);
      }
      else {
        pFVar15 = ::FString::FString(&local_70,pwVar13);
      }
      iVar9 = (pFVar15->Data).ArrayNum;
      iVar22 = iVar9 + -1;
      if (iVar9 == 0) {
        iVar22 = 0;
      }
      ::FString::AssignRange(&local_118,(wchar_t *)(pFVar15->Data).AllocatorInstance.Data,iVar22);
      if ((bVar6) && (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
      if ((!bVar6) && (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      pFVar15 = FURL::ToString(&this->DemoURL,&local_60,false);
      if (&local_108 != pFVar15) {
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        local_108.Data.AllocatorInstance.Data = (pFVar15->Data).AllocatorInstance.Data;
        (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_108.Data.ArrayNum = (pFVar15->Data).ArrayNum;
        local_108.Data.ArrayMax = (pFVar15->Data).ArrayMax;
        (pFVar15->Data).ArrayNum = 0;
        (pFVar15->Data).ArrayMax = 0;
      }
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
      if (local_f8 != (void *)0x0) {
        FMemory::Free(local_f8);
      }
      local_f8 = local_168.Data;
      local_f0 = local_160;
      local_160 = 0;
      local_168.Data = (FScriptContainerElement *)0x0;
      local_d0 = 1;
      pFVar16 = FNetworkVersion::GetReplayVersion(&local_50);
      if (&local_e8 != pFVar16) {
        if (local_e8.AppString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.AppString.Data.AllocatorInstance.Data);
        }
        local_e8.AppString.Data.AllocatorInstance.Data =
             (pFVar16->AppString).Data.AllocatorInstance.Data;
        (pFVar16->AppString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e8.AppString.Data.ArrayNum = (pFVar16->AppString).Data.ArrayNum;
        local_e8.AppString.Data.ArrayMax = (pFVar16->AppString).Data.ArrayMax;
        (pFVar16->AppString).Data.ArrayNum = 0;
        (pFVar16->AppString).Data.ArrayMax = 0;
      }
      local_e8.NetworkVersion = pFVar16->NetworkVersion;
      local_e8.Changelist = pFVar16->Changelist;
      if (local_50.AppString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.AppString.Data.AllocatorInstance.Data);
      }
      pUVar11 = (UWorld *)FWeakObjectPtr::Get(&(this->World).WeakPtr);
      TMulticastDelegate<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>::Broadcast
                (&FNetworkReplayDelegates::OnReplayRecordingStartAttempt,pUVar11);
      if (((this->ReplayStreamer).Object == (INetworkReplayStreamer *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pIVar1 = (this->ReplayStreamer).Object;
      local_140.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_138.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_138.DelegateSize = 0;
      pcVar2 = *(code **)(pIVar1->_padding_ + 8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_140,(FWriteAccessScope *)&local_a0);
      local_88 = &local_138;
      puVar17 = UE::Core::Private::DelegateAllocate(0x28,&local_138);
      if (puVar17 != (undefined8 *)0x0) {
        *puVar17 = &
                   ___7__TCommonDelegateInstanceState___A6AXAEBUFStartStreamingResult___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar18 = FDelegateHandle::GenerateNewID();
        puVar17[2] = uVar18;
        *puVar17 = &
                   ___7__TBaseRawMethodDelegateInstance__0A_VFReplayHelper____A6AXAEBUFStartStreamingResult___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar17[4] = OnStartRecordingComplete;
        puVar17[3] = this;
      }
      if (local_a0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
      }
      (*pcVar2)(pIVar1,&local_128);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_140,(FWriteAccessScope *)&local_b8);
      if ((local_138.DelegateSize != 0) &&
         (local_138.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_138.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_138,0,0,0x10);
        local_138.DelegateSize = 0;
      }
      if (local_b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
      }
      if (local_138.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_138.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_140.AccessDetector);
      pUVar10 = FWeakObjectPtr::Get(&(this->World).WeakPtr);
      if (*(longlong *)&pUVar10->field_0x20 == 0) {
        ::FString::FString(&local_c8,L"None");
      }
      else {
        local_res10 = *(FName *)(*(longlong *)&pUVar10->field_0x20 + 0x18);
        ::FName::ToString(&local_res10,&local_c8);
      }
      AddNewLevel(this,&local_c8);
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      WriteNetworkDemoHeader(this,param_1);
      if (local_e8.AppString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.AppString.Data.AllocatorInstance.Data);
      }
      if (local_f8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8);
      }
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (local_168.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data);
      }
      return;
    }
    uVar8 = uVar19;
    if (local_150.Index < (local_150.Container)->ArrayNum) {
      uVar8 = (uint)~local_150.Index >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar9 = local_150.Index;
    pTVar5 = local_150.Container;
    if (*(longlong *)((pTVar4->AllocatorInstance).Data + lVar21 * 8) != 0) {
      if (local_150.Index < (local_150.Container)->ArrayNum) {
        uVar19 = (uint)~local_150.Index >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_158[0] = *(undefined4 *)
                      (*(longlong *)((pTVar5->AllocatorInstance).Data + (longlong)iVar9 * 8) + 0xf0)
      ;
      if (((local_168.Data <= (FScriptContainerElement *)local_158) &&
          ((FScriptContainerElement *)local_158 < local_168.Data + (longlong)local_160._4_4_ * 4))
         && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar9 = (int)local_160;
      if ((int)local_160 == local_160._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_168,(int *)((longlong)&local_160 + 4));
      }
      local_160 = CONCAT44(local_160._4_4_,iVar9 + 1);
      *(undefined4 *)(local_168.Data + (longlong)iVar9 * 4) = local_158[0];
    }
    do {
      pTVar4 = local_150.Container;
      uVar19 = local_150.Index + 1;
      local_150.Index = uVar19;
      if (((int)uVar19 < 0) || ((local_150.Container)->ArrayNum <= (int)uVar19)) break;
      if (((int)uVar19 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    } while (*(longlong *)((pTVar4->AllocatorInstance).Data + (longlong)(int)uVar19 * 8) == 0);
  } while( true );
}

// StopReplay @ 1484960c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FReplayHelper::StopReplay(FReplayHelper *this)

{
  INetworkReplayStreamer *pIVar1;
  UWorld *pUVar2;
  
  pUVar2 = (UWorld *)FWeakObjectPtr::Get(&(this->World).WeakPtr);
  TMulticastDelegate<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>::Broadcast
            (&FNetworkReplayDelegates::OnReplayRecordingComplete,pUVar2);
  pIVar1 = (this->ReplayStreamer).Object;
  if (pIVar1 != (INetworkReplayStreamer *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x10))();
  }
  ::FString::Empty(&this->ActiveReplayName);
  return;
}

// TickCheckpoint @ 148497760

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FReplayHelper::TickCheckpoint(FReplayHelper *this,UNetConnection *param_1)

{
  undefined1 *puVar1;
  TMap<TWeakObjectPtr<AActor,FWeakObjectPtr>,int,FDefaultSetAllocator,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,int,0>_>
  *this_00;
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *this_01;
  TMap<FNetworkGUID,EChannelCloseReason,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,EChannelCloseReason,0>_>
  *this_02;
  byte bVar2;
  ECheckpointSaveState EVar3;
  int iVar4;
  long64 *plVar5;
  int *piVar6;
  longlong *plVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  bool bVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  UPackageMapClient *this_03;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  uint uVar21;
  FName *pFVar22;
  FThreadSafeStaticStat<_private:_void___cdecl_FReplayHelper::TickCheckpoint(UNetConnection_*)_::_2_::FStat_STAT_ReplayCheckpointSaveTime>
  FVar23;
  FArchive *this_04;
  UClass *pUVar24;
  long64 lVar25;
  longlong lVar26;
  INetworkReplayStreamer *pIVar27;
  FThreadStats *this_05;
  FThreadStatsPool *this_06;
  FName FVar28;
  bool bVar29;
  float fVar30;
  FRepActorsCheckpointParams local_1a8;
  FColor_u_0 local_198;
  uint local_194;
  uint local_190;
  ulong64 local_188;
  FName local_180;
  UPackageMapClient *local_178;
  FName local_170;
  FName local_168;
  LARGE_INTEGER local_158;
  LARGE_INTEGER local_150;
  LARGE_INTEGER local_148;
  LARGE_INTEGER local_140;
  LARGE_INTEGER local_138;
  FStatMessage local_130;
  FPendingCheckPointActor *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  FCheckpointStepHelper local_108;
  FName local_e0;
  FName local_d8 [2];
  TArrayView<FReplayHelper::FPendingCheckPointActor,int> local_c8 [8];
  
  if (!__CsvProfilerStat829) {
    FCsvProfilerTrace::OutputInlineStat("DemoRecordCheckpointTime",_GCsvCategory_Demo.Index);
    __CsvProfilerStat829 = true;
  }
  uVar21 = _GCsvCategory_Demo.Index;
  local_190 = _GCsvCategory_Demo.Index;
  FCsvProfiler::BeginStat
            ("DemoRecordCheckpointTime",_GCsvCategory_Demo.Index,"CSV_DemoRecordCheckpointTime");
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_ReplayCheckpointSaveTime ==
        (FThreadSafeStaticStat<_private:_void___cdecl_FReplayHelper::TickCheckpoint(UNetConnection_*)_::_2_::FStat_STAT_ReplayCheckpointSaveTime>
         )0x0) {
      pFVar22 = ::FName::FName(&local_e0,"STAT_ReplayCheckpointSaveTime");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ReplayCheckpointSaveTime,*pFVar22,
                 L"SaveCheckpoint time","STATGROUP_Net","STATCAT_Advanced",L"Net",true,true,ST_int64
                 ,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar23 = StatPtr_STAT_ReplayCheckpointSaveTime;
  if (StatPtr_STAT_ReplayCheckpointSaveTime ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FReplayHelper::TickCheckpoint(UNetConnection_*)_::_2_::FStat_STAT_ReplayCheckpointSaveTime>
       )0x0) {
    pFVar22 = ::FName::FName(local_d8,"STAT_ReplayCheckpointSaveTime");
    FVar23 = (FThreadSafeStaticStat<_private:_void___cdecl_FReplayHelper::TickCheckpoint(UNetConnection_*)_::_2_::FStat_STAT_ReplayCheckpointSaveTime>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ReplayCheckpointSaveTime,
                          *pFVar22,L"SaveCheckpoint time","STATGROUP_Net","STATCAT_Advanced",L"Net",
                          true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar28 = *(FName *)FVar23;
  bVar13 = false;
  bVar12 = false;
  local_168.ComparisonIndex.Value = 0;
  local_168.Number = 0;
  bVar18 = false;
  bVar17 = false;
  if ((FVar28.ComparisonIndex.Value.Value == 0) && (FVar28.Number == 0)) {
LAB_14849793d:
    bVar13 = bVar18;
    bVar12 = bVar17;
    bVar17 = false;
    local_170 = local_168;
    FVar28 = local_168;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_198.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_198._s_0,(char *)*(FName *)((longlong)FVar23 + 0x10));
      bVar13 = false;
      bVar12 = true;
      bVar18 = false;
      bVar17 = true;
      if (-1 < CpuChannel->Enabled) {
        local_180.ComparisonIndex.Value = FVar28.ComparisonIndex.Value.Value;
        local_180.Number = FVar28.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_180,(wchar_t *)*(FName *)((longlong)FVar23 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                   ,0x33e);
        bVar13 = true;
        bVar12 = true;
        bVar18 = true;
        bVar17 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14849793d;
    local_170 = FVar28;
    FThreadStats::AddMessage(FVar28,CycleScopeStart);
    bVar17 = true;
  }
  if ((param_1 == (UNetConnection *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Connection",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                          ,0x340,L""), bVar18)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((this->CheckpointSaveContext).CheckpointSaveState == Idle) goto LAB_1484987c7;
  if (((this->ReplayStreamer).Object == (INetworkReplayStreamer *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar18)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  this_04 = (FArchive *)(**(code **)(((this->ReplayStreamer).Object)->_padding_ + 0x28))();
  if (this_04 == (FArchive *)0x0) {
    bVar18 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_1282770494952570039>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                        ,0x349,"CheckpointArchive != nullptr");
    if (bVar18) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    goto LAB_1484987c7;
  }
  if (__CsvProfilerStat846 == false) {
    FCsvProfilerTrace::OutputInlineStat("DemoTickCheckpointTime",_GCsvCategory_Demo.Index);
    __CsvProfilerStat846 = true;
  }
  local_194 = _GCsvCategory_Demo.Index;
  FCsvProfiler::BeginStat
            ("DemoTickCheckpointTime",_GCsvCategory_Demo.Index,"CSV_DemoTickCheckpointTime");
  QueryPerformanceCounter(&local_158);
  dVar14 = __real_4170000000000000;
  dVar10 = (double)local_158.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
  local_1a8.StartCheckpointTime = dVar10;
  fVar30 = GetCheckpointSaveMaxMSPerFrame(this);
  bVar2 = this_04->field_0x28;
  bVar18 = true;
  dVar11 = (double)fVar30 * __real_3f50624dd2f1a9fc;
  local_1a8.CheckpointMaxUploadTimePerFrame = dVar11;
  (**(code **)(*(longlong *)this_04 + 0x100))(this_04,1);
  piVar6 = &(this->CheckpointSaveContext).TotalCheckpointSaveFrames;
  *piVar6 = *piVar6 + 1;
  FlushNetChecked(param_1);
  if ((param_1->PackageMap).field0_0x0.DebugPtr == (UPackageMap *)0x0) {
LAB_148497b1e:
    local_178 = (UPackageMapClient *)0x0;
  }
  else {
    pUVar24 = Z_Construct_UClass_UPackageMapClient_NoRegister();
    bVar19 = FObjectPtr::IsA((FObjectPtr *)&param_1->PackageMap,pUVar24);
    if (!bVar19) goto LAB_148497b1e;
    local_178 = (UPackageMapClient *)(param_1->PackageMap).field0_0x0.DebugPtr;
  }
  dVar16 = __real_3fc9999999999998;
  dVar15 = __real_3fd999999999999a;
  bVar19 = this->bHasDeltaCheckpoints;
  dVar9 = dVar10;
  do {
    this_03 = local_178;
    EVar3 = (this->CheckpointSaveContext).CheckpointSaveState;
    if ((EVar3 == Finalize) || ((0.0 < dVar11 && (dVar11 < dVar9 - dVar10)))) break;
    switch(EVar3) {
    case ProcessCheckpointActors:
      FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"FReplayHelper_ProcessCheckpointActors");
      bVar29 = -1 < CpuChannel->Enabled;
      if (bVar29) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId874,"FReplayHelper_ProcessCheckpointActors",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                   ,0x36a);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId874);
      }
      local_108.TotalCount = (this->CheckpointSaveContext).PendingCheckpointActors.ArrayNum;
      piVar6 = &(this->CheckpointSaveContext).NextAmortizedItem;
      local_108.StartTime = 0.0;
      local_108.CheckpointState = ProcessCheckpointActors;
      local_108.CheckpointStartTime = dVar10;
      local_108.CurrentIndex = piVar6;
      if ((piVar6 == (int *)0x0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCurrentIndex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ReplayHelper.h"
                              ,0x11a,L""), bVar20)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      QueryPerformanceCounter(&local_150);
      local_118 = (FPendingCheckPointActor *)
                  (this->CheckpointSaveContext).PendingCheckpointActors.AllocatorInstance.Data;
      iVar4 = (this->CheckpointSaveContext).PendingCheckpointActors.ArrayNum;
      local_108.StartTime =
           (double)local_150.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar14;
      if ((iVar4 < 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar20)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_c8[0]._12_4_ = uStack_10c;
      local_c8[0].ArrayNum = iVar4;
      local_c8[0].DataPtr = local_118;
      iStack_110 = iVar4;
      ProcessCheckpointActors(this,param_1,local_c8,piVar6,&local_1a8);
      FCheckpointStepHelper::~FCheckpointStepHelper(&local_108);
      QueryPerformanceCounter(&local_148);
      iVar4 = (this->CheckpointSaveContext).PendingCheckpointActors.ArrayNum;
      (this->CheckpointSaveContext).TotalCheckpointReplicationTimeSeconds =
           (((double)local_148.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar14) - dVar10)
           + (this->CheckpointSaveContext).TotalCheckpointReplicationTimeSeconds;
      if (*piVar6 == iVar4) {
        piVar6 = &(this->CheckpointSaveContext).PendingCheckpointActors.ArrayMax;
        (this->CheckpointSaveContext).PendingCheckpointActors.ArrayNum = 0;
        if (*piVar6 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,0,&(this->CheckpointSaveContext).PendingCheckpointActors.
                              AllocatorInstance,0,piVar6);
        }
        this_00 = &(this->CheckpointSaveContext).PendingActorToIndex;
        bVar20 = 1 < *(int *)&(this->CheckpointSaveContext).PendingActorToIndex.field_0x48;
        if (!bVar20) {
          TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,int>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
          ::UnhashElements((TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,int>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
                            *)this_00);
        }
        puVar1 = &(this->CheckpointSaveContext).PendingActorToIndex.field_0xc;
        *(undefined4 *)&(this->CheckpointSaveContext).PendingActorToIndex.field_0x8 = 0;
        if (*(int *)puVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x14,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
        }
        *(undefined4 *)&(this->CheckpointSaveContext).PendingActorToIndex.field_0x30 = 0xffffffff;
        *(undefined4 *)&(this->CheckpointSaveContext).PendingActorToIndex.field_0x34 = 0;
        iVar4 = *(int *)&(this->CheckpointSaveContext).PendingActorToIndex.field_0x2c;
        *(undefined4 *)&(this->CheckpointSaveContext).PendingActorToIndex.field_0x28 = 0;
        if ((iVar4 < 0) || (0x80 < iVar4)) {
          *(undefined4 *)&(this->CheckpointSaveContext).PendingActorToIndex.field_0x2c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)
                     &(this->CheckpointSaveContext).PendingActorToIndex.field_0x10,0);
        }
        if (bVar20) {
          *(undefined4 *)&(this->CheckpointSaveContext).PendingActorToIndex.field_0x48 = 1;
          TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,int>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
          ::Rehash((TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,int>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
                    *)this_00);
        }
        UNetConnection::SetReserveDestroyedChannels(param_1,false);
        UNetConnection::SetIgnoreReservedChannels(param_1,false);
        bVar20 = this->bHasLevelStreamingFixes;
        (this->CheckpointSaveContext).CheckpointSaveState = SerializeDeletedStartupActors;
        (this->CheckpointSaveContext).bWriteCheckpointOffset = bVar20;
        if (bVar20 != false) {
          lVar25 = (**(code **)(*(longlong *)this_04 + 0x28))(this_04);
          (this->CheckpointSaveContext).CheckpointOffset = lVar25;
          plVar5 = (long64 *)**(longlong **)&this_04->field_0x8;
          if ((long64 *)(*(longlong **)&this_04->field_0x8)[1] < plVar5 + 1) {
            plVar5 = &(this->CheckpointSaveContext).CheckpointOffset;
            if ((this_04->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)this_04 + 0x188))(this_04,plVar5,8);
            }
            else {
              FArchive::SerializeByteOrderSwapped(this_04,(ulong64 *)plVar5);
            }
          }
          else {
            (this->CheckpointSaveContext).CheckpointOffset = *plVar5;
            **(longlong **)&this_04->field_0x8 = **(longlong **)&this_04->field_0x8 + 8;
          }
        }
        piVar6 = (int *)**(undefined8 **)&this_04->field_0x8;
        if ((int *)(*(undefined8 **)&this_04->field_0x8)[1] < piVar6 + 1) {
          if ((this_04->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)this_04 + 0x188))();
          }
          else {
            FArchive::SerializeByteOrderSwapped(this_04,(uint *)&this->CurrentLevelIndex);
          }
        }
        else {
          this->CurrentLevelIndex = *piVar6;
          **(longlong **)&this_04->field_0x8 = **(longlong **)&this_04->field_0x8 + 4;
        }
        (this->CheckpointSaveContext).NextAmortizedItem = 0;
        (this->CheckpointSaveContext).CheckpointSaveState = SerializeDeletedStartupActors;
      }
      break;
    case SerializeDeletedStartupActors:
      FGenericPlatformMisc::BeginNamedEvent
                (&FColor::Green,"FReplayHelper_SerializeDeletedStartupActors");
      bVar29 = -1 < CpuChannel->Enabled;
      if (bVar29) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId913,"FReplayHelper_SerializeDeletedStartupActors",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                   ,0x391);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId913);
      }
      bVar18 = SerializeDeletedStartupActors(this,param_1,&local_1a8,this_04);
      if (bVar18) {
        if (bVar19 == false) goto LAB_148498254;
        (this->CheckpointSaveContext).NextAmortizedItem = 0;
        (this->CheckpointSaveContext).CheckpointSaveState = SerializeDeltaDynamicDestroyed;
      }
      break;
    case SerializeDeltaDynamicDestroyed:
      FGenericPlatformMisc::BeginNamedEvent
                (&FColor::Green,"FReplayHelper_SerializeDeltaDynamicDestroyed");
      bVar29 = -1 < CpuChannel->Enabled;
      if (bVar29) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId934,"FReplayHelper_SerializeDeltaDynamicDestroyed",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                   ,0x3a6);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId934);
      }
      bVar18 = SerializeDeltaDynamicDestroyed(this,param_1,&local_1a8,this_04);
      if (bVar18) {
        (this->CheckpointSaveContext).NextAmortizedItem = 0;
        TMapBase<FNetworkGUID,enum_EChannelCloseReason,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,enum_EChannelCloseReason,0>_>
        ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
                  (&(this->CheckpointSaveContext).DeltaCheckpointData.ChannelsToClose,
                   &(this->CheckpointSaveContext).DeltaChannelCloseKeys);
        (this->CheckpointSaveContext).CheckpointSaveState = SerializeDeltaClosedChannels;
      }
      break;
    case SerializeDeltaClosedChannels:
      FGenericPlatformMisc::BeginNamedEvent
                (&FColor::Green,"FReplayHelper_SerializeDeltaClosedChannels");
      bVar29 = -1 < CpuChannel->Enabled;
      if (bVar29) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId950,"FReplayHelper_SerializeDeltaClosedChannels",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                   ,0x3b6);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId950);
      }
      bVar18 = SerializeDeltaClosedChannels(this,param_1,&local_1a8,this_04);
      if (bVar18) {
        DestructItems<FString,int>
                  ((FString *)
                   (this->CheckpointSaveContext).DeltaCheckpointData.
                   RecordingDeletedNetStartupActors.AllocatorInstance.Data,
                   (this->CheckpointSaveContext).DeltaCheckpointData.
                   RecordingDeletedNetStartupActors.ArrayNum);
        piVar6 = &(this->CheckpointSaveContext).DeltaCheckpointData.RecordingDeletedNetStartupActors
                  .ArrayMax;
        (this->CheckpointSaveContext).DeltaCheckpointData.RecordingDeletedNetStartupActors.ArrayNum
             = 0;
        if (*piVar6 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,(ForAnyElementType *)
                              &(this->CheckpointSaveContext).DeltaCheckpointData,0,piVar6);
        }
        this_01 = &(this->CheckpointSaveContext).DeltaCheckpointData.DestroyedDynamicActors;
        bVar20 = 1 < (this->CheckpointSaveContext).DeltaCheckpointData.DestroyedDynamicActors.
                     HashSize;
        if (!bVar20) {
          TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::UnhashElements
                    (this_01);
        }
        puVar1 = &(this->CheckpointSaveContext).DeltaCheckpointData.DestroyedDynamicActors.Elements.
                  field_0xc;
        *(undefined4 *)
         &(this->CheckpointSaveContext).DeltaCheckpointData.DestroyedDynamicActors.Elements.
          field_0x8 = 0;
        if (*(int *)puVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,(ForAnyElementType *)this_01,0,(int *)puVar1);
        }
        *(undefined4 *)
         &(this->CheckpointSaveContext).DeltaCheckpointData.DestroyedDynamicActors.Elements.
          field_0x30 = 0xffffffff;
        *(undefined4 *)
         &(this->CheckpointSaveContext).DeltaCheckpointData.DestroyedDynamicActors.Elements.
          field_0x34 = 0;
        iVar4 = *(int *)&(this->CheckpointSaveContext).DeltaCheckpointData.DestroyedDynamicActors.
                         Elements.field_0x2c;
        *(undefined4 *)
         &(this->CheckpointSaveContext).DeltaCheckpointData.DestroyedDynamicActors.Elements.
          field_0x28 = 0;
        if ((iVar4 < 0) || (0x80 < iVar4)) {
          *(undefined4 *)
           &(this->CheckpointSaveContext).DeltaCheckpointData.DestroyedDynamicActors.Elements.
            field_0x2c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)
                     &(this->CheckpointSaveContext).DeltaCheckpointData.DestroyedDynamicActors.
                      Elements.field_0x10,0);
        }
        if (bVar20) {
          (this->CheckpointSaveContext).DeltaCheckpointData.DestroyedDynamicActors.HashSize = 1;
          TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Rehash(this_01);
        }
        this_02 = &(this->CheckpointSaveContext).DeltaCheckpointData.ChannelsToClose;
        bVar20 = 1 < *(int *)&(this->CheckpointSaveContext).DeltaCheckpointData.ChannelsToClose.
                              field_0x48;
        if (!bVar20) {
          TSet<TTuple<FNetworkGUID,enum_EChannelCloseReason>,TDefaultMapHashableKeyFuncs<FNetworkGUID,enum_EChannelCloseReason,0>,FDefaultSetAllocator>
          ::UnhashElements(this_02);
        }
        puVar1 = &(this->CheckpointSaveContext).DeltaCheckpointData.ChannelsToClose.field_0xc;
        *(undefined4 *)&(this->CheckpointSaveContext).DeltaCheckpointData.ChannelsToClose.field_0x8
             = 0;
        if (*(int *)puVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,0,(ForAnyElementType *)this_02,0,(int *)puVar1);
        }
        *(undefined4 *)&(this->CheckpointSaveContext).DeltaCheckpointData.ChannelsToClose.field_0x30
             = 0xffffffff;
        *(undefined4 *)&(this->CheckpointSaveContext).DeltaCheckpointData.ChannelsToClose.field_0x34
             = 0;
        iVar4 = *(int *)&(this->CheckpointSaveContext).DeltaCheckpointData.ChannelsToClose.
                         field_0x2c;
        *(undefined4 *)&(this->CheckpointSaveContext).DeltaCheckpointData.ChannelsToClose.field_0x28
             = 0;
        if ((iVar4 < 0) || (0x80 < iVar4)) {
          *(undefined4 *)
           &(this->CheckpointSaveContext).DeltaCheckpointData.ChannelsToClose.field_0x2c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)
                     &(this->CheckpointSaveContext).DeltaCheckpointData.ChannelsToClose.field_0x10,0
                    );
        }
        if (bVar20) {
          *(undefined4 *)
           &(this->CheckpointSaveContext).DeltaCheckpointData.ChannelsToClose.field_0x48 = 1;
          TSet<TTuple<FNetworkGUID,enum_EChannelCloseReason>,TDefaultMapHashableKeyFuncs<FNetworkGUID,enum_EChannelCloseReason,0>,FDefaultSetAllocator>
          ::Rehash(this_02);
        }
        piVar6 = &(this->CheckpointSaveContext).DeltaChannelCloseKeys.ArrayMax;
        (this->CheckpointSaveContext).DeltaChannelCloseKeys.ArrayNum = 0;
        if (*piVar6 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&(this->CheckpointSaveContext).DeltaChannelCloseKeys.AllocatorInstance,0,
                     piVar6);
        }
LAB_148498254:
        (this->CheckpointSaveContext).CheckpointSaveState = CacheNetGuids;
      }
      break;
    case CacheNetGuids:
      if (0.0 < dVar11) {
        bVar18 = (dVar9 - dVar10) / dVar11 < dVar15;
        if (!bVar18) goto switchD_148497ba0_default;
      }
      else {
        bVar18 = true;
      }
      FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"FReplayHelper_CacheNetGuids");
      if (-1 < CpuChannel->Enabled) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&::__CpuProfilerEventSpecId972,"FReplayHelper_CacheNetGuids",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                   ,0x3cc);
        FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId972);
        CacheNetGuids(this,param_1);
        (this->CheckpointSaveContext).CheckpointSaveState = SerializeGuidCache;
        goto LAB_1484985c6;
      }
      CacheNetGuids(this,param_1);
      (this->CheckpointSaveContext).CheckpointSaveState = SerializeGuidCache;
      goto LAB_1484985cb;
    case SerializeGuidCache:
      FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"FReplayHelper_SerializeGuidCache");
      bVar29 = -1 < CpuChannel->Enabled;
      if (bVar29) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId982,"FReplayHelper_SerializeGuidCache",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                   ,0x3d6);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId982);
      }
      bVar18 = SerializeGuidCache(this,param_1,&local_1a8,this_04);
      if (bVar18) {
        (this->CheckpointSaveContext).CheckpointSaveState = SerializeNetFieldExportGroupMap;
      }
      break;
    case SerializeNetFieldExportGroupMap:
      if (0.0 < dVar11) {
        bVar18 = (dVar9 - dVar10) / dVar11 < dVar15;
        if (!bVar18) goto switchD_148497ba0_default;
      }
      else {
        bVar18 = true;
      }
      FGenericPlatformMisc::BeginNamedEvent
                (&FColor::Green,"FReplayHelper_SerializeNetFieldExportGroupMap");
      bVar29 = -1 < CpuChannel->Enabled;
      if (bVar29) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId999,"FReplayHelper_SerializeNetFieldExportGroupMap",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                   ,999);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId999);
      }
      if (bVar19 == false) {
        UPackageMapClient::SerializeNetFieldExportGroupMap(this_03,this_04,true);
        (this->CheckpointSaveContext).CheckpointSaveState = SerializeDemoFrameFromQueuedDemoPackets;
      }
      else {
        UPackageMapClient::SerializeNetFieldExportDelta(this_03,this_04);
        (this->CheckpointSaveContext).CheckpointSaveState = SerializeDemoFrameFromQueuedDemoPackets;
      }
      break;
    case SerializeDemoFrameFromQueuedDemoPackets:
      if (0.0 < dVar11) {
        bVar18 = (dVar9 - dVar10) / dVar11 < dVar16;
        if (!bVar18) goto switchD_148497ba0_default;
      }
      else {
        bVar18 = true;
      }
      FGenericPlatformMisc::BeginNamedEvent
                (&FColor::Green,"FReplayHelper_SerializeDemoFrameFromQueuedDemoPackets");
      bVar29 = -1 < CpuChannel->Enabled;
      if (bVar29) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId1022,
                   "FReplayHelper_SerializeDemoFrameFromQueuedDemoPackets",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                   ,0x3fe);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1022);
      }
      if ((this->CheckpointSaveContext).bWriteCheckpointOffset != false) {
        lVar26 = (**(code **)(*(longlong *)this_04 + 0x28))(this_04);
        local_188 = (lVar26 - (this->CheckpointSaveContext).CheckpointOffset) - 8;
        (**(code **)(*(longlong *)this_04 + 0x1b8))(this_04);
        plVar7 = *(longlong **)&this_04->field_0x8;
        if ((ulong64 *)plVar7[1] < (ulong64 *)*plVar7 + 1) {
          if ((this_04->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)this_04 + 0x188))(this_04,&local_188,8);
          }
          else {
            FArchive::SerializeByteOrderSwapped(this_04,&local_188);
          }
        }
        else {
          local_188 = *(ulong64 *)*plVar7;
          *plVar7 = *plVar7 + 8;
        }
        (**(code **)(*(longlong *)this_04 + 0x1b8))(this_04,lVar26);
      }
      uVar21 = (**(code **)(*(longlong *)this_04 + 0x30))(this_04);
      (this->CheckpointSaveContext).GuidCacheSize = uVar21;
      uVar21 = this->NumLevelsAddedThisFrame;
      this->NumLevelsAddedThisFrame = (this->AllLevelStatuses).ArrayNum;
      WriteDemoFrame(this,param_1,this_04,&this->QueuedCheckpointPackets,
                     (float)this->LastCheckpointTime,SkipGameSpecific);
      (this->CheckpointSaveContext).CheckpointSaveState = Finalize;
      this->NumLevelsAddedThisFrame = uVar21;
      break;
    default:
      goto switchD_148497ba0_default;
    }
    if (bVar29) {
LAB_1484985c6:
      FCpuProfilerTrace::OutputEndEvent();
    }
LAB_1484985cb:
    FGenericPlatformMisc::EndNamedEvent();
switchD_148497ba0_default:
    QueryPerformanceCounter(&local_140);
    dVar9 = (double)local_140.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar14;
  } while (bVar18 != false);
  (**(code **)(*(longlong *)this_04 + 0x100))(this_04,bVar2 >> 7);
  FVar28 = local_170;
  (this->CheckpointSaveContext).TotalCheckpointSaveTimeSeconds =
       (dVar9 - dVar10) + (this->CheckpointSaveContext).TotalCheckpointSaveTimeSeconds;
  if ((this->CheckpointSaveContext).CheckpointSaveState == Finalize) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"FReplayHelper_Finalize");
    bVar18 = -1 < CpuChannel->Enabled;
    if (bVar18) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1065,"FReplayHelper_Finalize",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                 ,0x429);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1065);
    }
    (**(code **)(*(longlong *)this_04 + 0x30))(this_04);
    lVar26 = (**(code **)(*(longlong *)this_04 + 0x30))(this_04);
    dVar10 = __real_408f400000000000;
    if (0 < lVar26) {
      pIVar27 = TSharedPtr<INetworkReplayStreamer,1>::operator->(&this->ReplayStreamer);
      (**(code **)(pIVar27->_padding_ + 0x30))
                (pIVar27,(longlong)(this->LastCheckpointTime * dVar10));
    }
    if (4 < (byte)LogDemo._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
    }
    (this->CheckpointSaveContext).CheckpointSaveState = Idle;
    if (bVar18) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
  }
  FCsvProfiler::EndStat("DemoTickCheckpointTime",local_194);
  uVar21 = local_190;
LAB_1484987c7:
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar17) && (FVar28 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_05 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_05 == (FThreadStats *)0x0) {
      this_06 = FThreadStatsPool::Get();
      this_05 = FThreadStatsPool::GetFromPool(this_06);
    }
    if (this_05->bWaitForExplicitFlush < this_05->ScopeCount) {
      local_130.NameAndInfo.Index = FVar28.ComparisonIndex.Value;
      local_130.NameAndInfo.Number = FVar28.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_138);
      local_130.StatData.Pad[4] = '\0';
      local_130.StatData.Pad[5] = '\0';
      local_130.StatData.Pad[6] = '\0';
      local_130.StatData.Pad[7] = '\0';
      local_130.StatData.Pad[0] = local_138.s.LowPart._0_1_;
      local_130.StatData.Pad[1] = local_138.s.LowPart._1_1_;
      local_130.StatData.Pad[2] = local_138.s.LowPart._2_1_;
      local_130.StatData.Pad[3] = local_138.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_05,&local_130);
      piVar6 = &this_05->ScopeCount;
      *piVar6 = *piVar6 + -1;
      if (*piVar6 == 0) {
        FThreadStats::Flush(this_05,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_05,false,false);
      }
    }
  }
  FCsvProfiler::EndStat("DemoRecordCheckpointTime",uVar21);
  return;
}

// TickRecording @ 148498990

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FReplayHelper::TickRecording(FReplayHelper *this,float param_1,UNetConnection *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  TConsoleVariableData<int> *pTVar6;
  TConsoleVariableData<float> *pTVar7;
  bool bVar8;
  char cVar9;
  bool bVar10;
  UEnum *pUVar11;
  wchar_t *pwVar12;
  INetworkReplayStreamer *pIVar13;
  longlong lVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<_private:_void___cdecl_FReplayHelper::TickRecording(float,UNetConnection_*)_::_2_::FStat_STAT_ReplayRecordTime>
  FVar16;
  UWorld *this_00;
  AWorldSettings *pAVar17;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FName FVar18;
  float fVar19;
  FColor_u_0 local_res8 [2];
  FName local_108;
  FName local_100;
  FNetResult local_f0;
  FNetResult local_c0;
  UEnum *local_90;
  UEnum *local_88;
  LARGE_INTEGER local_80;
  FStatMessage local_78;
  FName local_68;
  FName local_60 [5];
  
  if (this->bWasStartRecordingSuccessful == false) {
    return;
  }
  if (this->bIsWaitingForStream != false) {
    return;
  }
  if (((this->ReplayStreamer).Object == (INetworkReplayStreamer *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar13 = (this->ReplayStreamer).Object;
  cVar9 = (**(code **)(pIVar13->_padding_ + 0x170))(pIVar13,&this->ResultManager);
  if (cVar9 == '\x01') {
    pUVar11 = StaticEnum<enum_EReplayResult>();
    local_f0.Result = 8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UEnum *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
    local_f0.ResultEnumObj.WeakPtr.ObjectIndex = 0;
    local_f0.ResultEnumObj.WeakPtr.ObjectSerialNumber = 0;
    local_90 = pUVar11;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UEnum *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
    FWeakObjectPtr::operator=(&local_f0.ResultEnumObj.WeakPtr,(FObjectPtr)&local_90);
    local_f0.ErrorContext.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f0.ErrorContext.Data.ArrayNum = 0;
    local_f0.ErrorContext.Data.ArrayMax = 0;
    local_f0.NextResult = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
    local_f0.RawResultEnumObj = pUVar11;
    pwVar12 = ::LexToString(StreamerError);
    ::FString::operator=(&local_f0.ErrorContext,pwVar12);
    UE::Net::FNetResultManager::HandleNetResult(&this->ResultManager,&local_f0);
    if (local_f0.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
      (**(code **)((longlong)local_f0.NextResult + -0x10))((longlong)local_f0.NextResult + -0x10);
    }
    if (local_f0.ErrorContext.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_f0.ErrorContext.Data.AllocatorInstance.Data);
    return;
  }
  if (this->bPauseRecording != false) {
    return;
  }
  pIVar13 = TSharedPtr<INetworkReplayStreamer,1>::operator->(&this->ReplayStreamer);
  lVar14 = (**(code **)(pIVar13->_padding_ + 0x20))(pIVar13);
  if (lVar14 == 0) {
    if (1 < (byte)LogDemo._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
    }
    pUVar11 = StaticEnum<enum_EReplayResult>();
    local_c0.Result = 10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UEnum *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
    local_c0.ResultEnumObj.WeakPtr.ObjectIndex = 0;
    local_c0.ResultEnumObj.WeakPtr.ObjectSerialNumber = 0;
    local_88 = pUVar11;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UEnum *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
    FWeakObjectPtr::operator=(&local_c0.ResultEnumObj.WeakPtr,(FObjectPtr)&local_88);
    local_c0.ErrorContext.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c0.ErrorContext.Data.ArrayNum = 0;
    local_c0.ErrorContext.Data.ArrayMax = 0;
    local_c0.NextResult = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
    local_c0.RawResultEnumObj = pUVar11;
    pwVar12 = ::LexToString(MissingArchive);
    ::FString::operator=(&local_c0.ErrorContext,pwVar12);
    UE::Net::FNetResultManager::HandleNetResult(&this->ResultManager,&local_c0);
    if (local_c0.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
      (**(code **)((longlong)local_c0.NextResult + -0x10))((longlong)local_c0.NextResult + -0x10);
    }
    if (local_c0.ErrorContext.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_c0.ErrorContext.Data.AllocatorInstance.Data);
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_ReplayRecordTime ==
        (FThreadSafeStaticStat<_private:_void___cdecl_FReplayHelper::TickRecording(float,UNetConnection_*)_::_2_::FStat_STAT_ReplayRecordTime>
         )0x0) {
      pFVar15 = ::FName::FName(&local_68,"STAT_ReplayRecordTime");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ReplayRecordTime,*pFVar15,
                 L"Net replay record time","STATGROUP_Net","STATCAT_Advanced",L"Net",true,true,
                 ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar16 = StatPtr_STAT_ReplayRecordTime;
  if (StatPtr_STAT_ReplayRecordTime ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FReplayHelper::TickRecording(float,UNetConnection_*)_::_2_::FStat_STAT_ReplayRecordTime>
       )0x0) {
    pFVar15 = ::FName::FName(local_60,"STAT_ReplayRecordTime");
    FVar16 = (FThreadSafeStaticStat<_private:_void___cdecl_FReplayHelper::TickRecording(float,UNetConnection_*)_::_2_::FStat_STAT_ReplayRecordTime>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ReplayRecordTime,*pFVar15,
                          L"Net replay record time","STATGROUP_Net","STATCAT_Advanced",L"Net",true,
                          true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar16;
  bVar8 = false;
  bVar4 = false;
  local_100.ComparisonIndex.Value = 0;
  local_100.Number = 0;
  if ((FVar18.ComparisonIndex.Value.Value == 0) && (FVar18.Number == 0)) {
LAB_148498d50:
    bVar3 = false;
    FVar18 = local_100;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar8 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_108.ComparisonIndex.Value = FVar18.ComparisonIndex.Value.Value;
        local_108.Number = FVar18.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_108,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                   ,0x1f6);
        bVar8 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148498d50;
    FThreadStats::AddMessage(FVar18,CycleScopeStart);
    bVar3 = true;
  }
  if (__CsvProfilerStat504 == false) {
    FCsvProfilerTrace::OutputInlineStat("DemoRecordTime",_GCsvCategory_Demo.Index);
    __CsvProfilerStat504 = true;
  }
  uVar5 = _GCsvCategory_Demo.Index;
  FCsvProfiler::BeginStat("DemoRecordTime",_GCsvCategory_Demo.Index,"CSV_DemoRecordTime");
  this_00 = (UWorld *)FWeakObjectPtr::Get(&(this->World).WeakPtr);
  if ((this_00 == (UWorld *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("World != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                          ,0x5cf,L""), bVar10)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pAVar17 = UWorld::GetWorldSettings(this_00,false,true);
  lVar14 = pAVar17->_padding_;
  fVar19 = (float)(**(code **)(lVar14 + 0x790))(pAVar17);
  fVar19 = (float)(**(code **)(lVar14 + 0x798))(pAVar17,fVar19 * param_1,param_1);
  if ((fVar19 < 0.0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ClampedDeltaSeconds >= 0.0f",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                          ,0x5d6,L""), bVar10)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this->DemoCurrentTime = fVar19 + this->DemoCurrentTime;
  pIVar13 = TSharedPtr<INetworkReplayStreamer,1>::operator->(&this->ReplayStreamer);
  (**(code **)(pIVar13->_padding_ + 0x50))
            (pIVar13,(longlong)(this->DemoCurrentTime * __real_447a0000));
  if ((this->CheckpointSaveContext).CheckpointSaveState != Idle) {
    TickCheckpoint(this,param_2);
    goto LAB_148498f59;
  }
  RecordFrame(this,param_1,param_2);
  pTVar6 = CVarEnableCheckpoints.Ref;
  bVar10 = IsInParallelGameThread();
  if (bVar10) {
LAB_148498eca:
    lVar14 = 0;
  }
  else {
    bVar10 = IsInGameThread();
    lVar14 = 4;
    if (bVar10) goto LAB_148498eca;
  }
  if (*(int *)((longlong)pTVar6->ShadowedValue + lVar14) == 1) {
    if (((this->CheckpointSaveContext).CheckpointSaveState != Idle) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("CheckpointSaveContext.CheckpointSaveState == FReplayHelper::ECheckpointSaveState::Idle"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                            ,0x20b,L""), bVar10)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pTVar7 = CVarCheckpointUploadDelayInSeconds.Ref;
    bVar10 = IsInParallelGameThread();
    if ((bVar10) || (bVar10 = IsInGameThread(), lVar14 = 4, bVar10)) {
      lVar14 = 0;
    }
    if ((this->bPendingCheckpointRequest != false) ||
       ((double)*(float *)((longlong)pTVar7->ShadowedValue + lVar14) <
        (double)this->DemoCurrentTime - this->LastCheckpointTime)) {
      SaveCheckpoint(this,param_2);
    }
  }
LAB_148498f59:
  FCsvProfiler::EndStat("DemoRecordTime",uVar5);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_78.NameAndInfo.Index = FVar18.ComparisonIndex.Value;
      local_78.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_80);
      local_78.StatData.Pad[4] = '\0';
      local_78.StatData.Pad[5] = '\0';
      local_78.StatData.Pad[6] = '\0';
      local_78.StatData.Pad[7] = '\0';
      local_78.StatData.Pad[0] = local_80.s.LowPart._0_1_;
      local_78.StatData.Pad[1] = local_80.s.LowPart._1_1_;
      local_78.StatData.Pad[2] = local_80.s.LowPart._2_1_;
      local_78.StatData.Pad[3] = local_80.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_78);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// WriteDemoFrame @ 14849e1c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FReplayHelper::WriteDemoFrame
          (FReplayHelper *this,UNetConnection *param_1,FArchive *param_2,
          TArray<FQueuedDemoPacket,TSizedDefaultAllocator<32>_> *param_3,float param_4,
          EWriteDemoFrameFlags param_5)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  TSet<TWeakObjectPtr<UObject,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *this_00;
  int iVar3;
  FName FVar4;
  int *piVar5;
  longlong *plVar6;
  ULevelStreaming *this_01;
  undefined8 uVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  bool bVar12;
  float fVar13;
  TArray<FQueuedDemoPacket,TSizedDefaultAllocator<32>_> *pTVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  char cVar18;
  uint uVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<_private:_void___cdecl_FReplayHelper::WriteDemoFrame(UNetConnection_*,FArchive_&,TArray<FQueuedDemoPacket,TSizedDefaultAllocator<32>_>_&,float,EWriteDemoFrameFlags)_::_2_::FStat_STAT_ReplayWriteDemoFrame>
  FVar21;
  UClass *pUVar22;
  FScopedStoreArchiveOffset *this_02;
  FScopedStoreArchiveOffset *this_03;
  UNetConnection *pUVar23;
  UObject *pUVar24;
  UPackageMapClient *this_04;
  uint uVar25;
  uint uVar26;
  FScriptContainerElement *pFVar27;
  FReplayHelper *pFVar28;
  UPackageMapClient *pUVar29;
  longlong lVar30;
  undefined1 auStackY_1d8 [32];
  undefined1 local_177 [7];
  uint local_170 [2];
  uint local_168;
  uint local_164;
  longlong local_160;
  FName local_158;
  FColor_u_0 local_150;
  undefined4 local_14c;
  ulong64 local_148;
  FReplayHelper *local_140;
  UNetConnection *local_138;
  FName local_130;
  TArray<FQueuedDemoPacket,TSizedDefaultAllocator<32>_> *local_128;
  FName local_120;
  FName local_118;
  FString local_108;
  FString local_f8;
  FDestructionSentinel local_e0;
  FName local_c8;
  FName local_c0;
  undefined1 local_b8 [32];
  void *local_98;
  undefined4 local_90;
  uint local_8c;
  undefined4 local_88;
  undefined4 local_84;
  ForElementType<FSetElementId> local_78;
  int local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  pUVar29 = (UPackageMapClient *)0x0;
  local_140 = this;
  local_138 = param_1;
  local_128 = param_3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_ReplayWriteDemoFrame ==
        (FThreadSafeStaticStat<_private:_void___cdecl_FReplayHelper::WriteDemoFrame(UNetConnection_*,FArchive_&,TArray<FQueuedDemoPacket,TSizedDefaultAllocator<32>_>_&,float,EWriteDemoFrameFlags)_::_2_::FStat_STAT_ReplayWriteDemoFrame>
         )0x0) {
      pFVar20 = ::FName::FName(&local_c8,"STAT_ReplayWriteDemoFrame");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ReplayWriteDemoFrame,*pFVar20,
                 L"Replay write frame time","STATGROUP_Net","STATCAT_Advanced",L"Net",true,true,
                 ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar21 = StatPtr_STAT_ReplayWriteDemoFrame;
  if (StatPtr_STAT_ReplayWriteDemoFrame ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FReplayHelper::WriteDemoFrame(UNetConnection_*,FArchive_&,TArray<FQueuedDemoPacket,TSizedDefaultAllocator<32>_>_&,float,EWriteDemoFrameFlags)_::_2_::FStat_STAT_ReplayWriteDemoFrame>
       )0x0) {
    pFVar20 = ::FName::FName(&local_c0,"STAT_ReplayWriteDemoFrame");
    FVar21 = (FThreadSafeStaticStat<_private:_void___cdecl_FReplayHelper::WriteDemoFrame(UNetConnection_*,FArchive_&,TArray<FQueuedDemoPacket,TSizedDefaultAllocator<32>_>_&,float,EWriteDemoFrameFlags)_::_2_::FStat_STAT_ReplayWriteDemoFrame>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ReplayWriteDemoFrame,*pFVar20,
                          L"Replay write frame time","STATGROUP_Net","STATCAT_Advanced",L"Net",true,
                          true,ST_int64,true,false,MCR_Invalid);
  }
  FVar4 = *(FName *)FVar21;
  bVar11 = false;
  bVar12 = false;
  local_118.ComparisonIndex.Value = 0;
  local_118.Number = 0;
  bVar15 = false;
  bVar16 = false;
  if ((FVar4.ComparisonIndex.Value.Value != 0) || (FVar4.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_150.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_150._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
      bVar11 = false;
      bVar12 = true;
      bVar15 = false;
      bVar16 = true;
      if (-1 < CpuChannel->Enabled) {
        local_130.ComparisonIndex.Value = FVar4.ComparisonIndex.Value.Value;
        local_130.Number = FVar4.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_130,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                   ,0x535);
        bVar11 = true;
        bVar12 = true;
        bVar15 = true;
        bVar16 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_158 = FVar4;
      local_120 = FVar4;
      FThreadStats::AddMessage(FVar4,CycleScopeStart);
      bVar15 = true;
      goto LAB_14849e36c;
    }
  }
  bVar12 = bVar16;
  bVar11 = bVar15;
  bVar15 = false;
  local_120 = local_118;
LAB_14849e36c:
  if ((param_1 == (UNetConnection *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Connection",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                          ,0x537,L""), bVar16)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  piVar2 = &this->CurrentLevelIndex;
  piVar5 = (int *)**(undefined8 **)&param_2->field_0x8;
  if ((int *)(*(undefined8 **)&param_2->field_0x8)[1] < piVar5 + 1) {
    if ((param_2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar5;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 4;
  }
  plVar6 = *(longlong **)&param_2->field_0x8;
  local_160 = 0x2a;
  if ((float *)plVar6[1] < (float *)*plVar6 + 1) {
    if ((param_2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,(uint *)&param_4);
    }
  }
  else {
    param_4 = *(float *)*plVar6;
    *plVar6 = *plVar6 + 4;
  }
  this_04 = pUVar29;
  if ((param_1->PackageMap).field0_0x0.DebugPtr != (UPackageMap *)0x0) {
    pUVar22 = Z_Construct_UClass_UPackageMapClient_NoRegister();
    bVar16 = FObjectPtr::IsA((FObjectPtr *)&param_1->PackageMap,pUVar22);
    if (bVar16) {
      this_04 = (UPackageMapClient *)(param_1->PackageMap).field0_0x0.DebugPtr;
    }
  }
  UPackageMapClient::AppendExportData(this_04,param_2);
  pFVar28 = this;
  if (this->bHasLevelStreamingFixes == false) {
    local_168 = *(int *)&(this->NewStreamingLevelsThisFrame).Elements.field_0x8 -
                *(int *)&(this->NewStreamingLevelsThisFrame).Elements.field_0x34;
    (**(code **)(*(longlong *)param_2 + 0x1a0))(param_2);
    if (local_168 != 0) {
      do {
        pUVar24 = FWeakObjectPtr::Get(&(this->World).WeakPtr);
        uVar25 = (uint)pUVar29;
        uVar26 = 0;
        if ((int)uVar25 < *(int *)&pUVar24[3].field_0x20) {
          uVar26 = ~uVar25 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        this_01 = *(ULevelStreaming **)
                   (*(longlong *)&pUVar24[3].field_0x18 + (longlong)(int)uVar25 * 8);
        ULevelStreaming::GetWorldAssetPackageName(this_01,&local_f8);
        ::FName::ToString(&this_01->PackageNameToLoad,&local_108);
        ::operator<<(param_2,&local_f8);
        ::operator<<(param_2,&local_108);
        UE::Math::operator<<(param_2,(TQuat<double> *)&this_01->LevelTransform);
        UE::Math::operator<<(param_2,(TVector<double> *)&(this_01->LevelTransform).Translation);
        UE::Math::operator<<(param_2,(TVector<double> *)&(this_01->LevelTransform).Scale3D);
        if ((param_2->field_0x28 & 1) != 0) {
          dVar9 = (this_01->LevelTransform).Translation.ZW.m128d_f64[0];
          dVar10 = (this_01->LevelTransform).Translation.XY.m128d_f64[1];
          (this_01->LevelTransform).Translation.XY.m128d_f64[0] =
               (this_01->LevelTransform).Translation.XY.m128d_f64[0];
          (this_01->LevelTransform).Translation.XY.m128d_f64[1] = dVar10;
          (this_01->LevelTransform).Translation.ZW.m128d_f64[0] = dVar9;
          (this_01->LevelTransform).Translation.ZW.m128d_f64[1] = 0.0;
          dVar9 = (this_01->LevelTransform).Scale3D.ZW.m128d_f64[0];
          dVar10 = (this_01->LevelTransform).Scale3D.XY.m128d_f64[1];
          (this_01->LevelTransform).Scale3D.XY.m128d_f64[0] =
               (this_01->LevelTransform).Scale3D.XY.m128d_f64[0];
          (this_01->LevelTransform).Scale3D.XY.m128d_f64[1] = dVar10;
          (this_01->LevelTransform).Scale3D.ZW.m128d_f64[0] = dVar9;
          (this_01->LevelTransform).Scale3D.ZW.m128d_f64[1] = 0.0;
        }
        if (4 < (byte)LogDemo._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
        }
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
        pUVar29 = (UPackageMapClient *)(ulonglong)(uVar25 + 1);
        pFVar28 = local_140;
        param_1 = local_138;
      } while (uVar25 + 1 < local_168);
    }
    this_00 = &pFVar28->NewStreamingLevelsThisFrame;
    bVar16 = 1 < (pFVar28->NewStreamingLevelsThisFrame).HashSize;
    if (!bVar16) {
      TSet<TWeakObjectPtr<UObject,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
      ::UnhashElements(this_00);
    }
    iVar3 = *(int *)&(pFVar28->NewStreamingLevelsThisFrame).Elements.field_0xc;
    *(undefined4 *)&(pFVar28->NewStreamingLevelsThisFrame).Elements.field_0x8 = 0;
    if (iVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)this_00,0,
                 (int *)&(pFVar28->NewStreamingLevelsThisFrame).Elements.field_0xc);
    }
    *(undefined4 *)&(pFVar28->NewStreamingLevelsThisFrame).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar28->NewStreamingLevelsThisFrame).Elements.field_0x34 = 0;
    iVar3 = *(int *)&(pFVar28->NewStreamingLevelsThisFrame).Elements.field_0x2c;
    *(undefined4 *)&(pFVar28->NewStreamingLevelsThisFrame).Elements.field_0x28 = 0;
    if ((iVar3 < 0) || (0x80 < iVar3)) {
      *(undefined4 *)&(pFVar28->NewStreamingLevelsThisFrame).Elements.field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(pFVar28->NewStreamingLevelsThisFrame).Elements.field_0x10,0);
    }
    if (bVar16) {
      (pFVar28->NewStreamingLevelsThisFrame).HashSize = 1;
      TSet<TWeakObjectPtr<UObject,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
      ::Rehash(this_00);
    }
  }
  else {
    uVar26 = (this->AllLevelStatuses).ArrayNum;
    (**(code **)(*(longlong *)param_2 + 0x1a0))(param_2,&this->NumLevelsAddedThisFrame);
    for (uVar25 = uVar26 - this->NumLevelsAddedThisFrame; uVar25 < uVar26; uVar25 = uVar25 + 1) {
      uVar19 = 0;
      if ((int)uVar25 < (this->AllLevelStatuses).ArrayNum) {
        uVar19 = ~uVar25 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      ::operator<<(param_2,(FString *)
                           ((this->AllLevelStatuses).AllocatorInstance.Data +
                           (longlong)(int)uVar25 * 0x18));
    }
    this->NumLevelsAddedThisFrame = 0;
  }
  this_03 = (FScopedStoreArchiveOffset *)0x0;
  if (pFVar28->bHasLevelStreamingFixes == false) {
    SaveExternalData(pFVar28,param_1,param_2);
  }
  else {
    this_02 = ::operator_new(0x10);
    if (this_02 != (FScopedStoreArchiveOffset *)0x0) {
      this_03 = FScopedStoreArchiveOffset::FScopedStoreArchiveOffset(this_02,param_2);
    }
    SaveExternalData(pFVar28,param_1,param_2);
    if (this_03 != (FScopedStoreArchiveOffset *)0x0) {
      FScopedStoreArchiveOffset::~FScopedStoreArchiveOffset(this_03);
      ::operator_delete(this_03,0x10);
    }
  }
  if (pFVar28->bHasGameSpecificFrameData != false) {
    pUVar23 = (UNetConnection *)(**(code **)(*(longlong *)param_2 + 0x28))(param_2);
    plVar6 = *(longlong **)&param_2->field_0x8;
    local_148 = 0;
    local_138 = pUVar23;
    if ((ulong64 *)plVar6[1] < (ulong64 *)*plVar6 + 1) {
      if (((&param_2->field_0x0)[local_160] & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_148,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_148);
      }
    }
    else {
      local_148 = *(ulong64 *)*plVar6;
      *plVar6 = *plVar6 + 8;
    }
    fVar13 = param_4;
    if ((param_5 & SkipGameSpecific) == None) {
      local_b8._0_8_ = (FScriptContainerElement *)0x0;
      local_b8._8_8_ = 0;
      local_98 = (void *)0x0;
      local_90 = 0;
      local_8c = 0x80;
      local_88 = 0xffffffff;
      local_84 = 0;
      local_78 = (ForElementType<FSetElementId>)0x0;
      local_70 = 0;
      pUVar24 = FWeakObjectPtr::Get(&(pFVar28->World).WeakPtr);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &FNetworkReplayDelegates::OnWriteGameSpecificFrameData,
                 (FWriteAccessScope *)&local_e0);
      bVar16 = false;
      FNetworkReplayDelegates::OnWriteGameSpecificFrameData._28_4_ =
           FNetworkReplayDelegates::OnWriteGameSpecificFrameData._28_4_ + 1;
      uVar26 = FNetworkReplayDelegates::OnWriteGameSpecificFrameData._16_4_ - 1;
      if (-1 < (int)uVar26) {
        lVar30 = (longlong)(int)uVar26 << 4;
        bVar16 = false;
        do {
          uVar25 = 0;
          if ((int)uVar26 < (int)FNetworkReplayDelegates::OnWriteGameSpecificFrameData._16_4_) {
            uVar25 = ~uVar26 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (((*(int *)(lVar30 + 8 + FNetworkReplayDelegates::OnWriteGameSpecificFrameData._8_8_)
                == 0) ||
              (plVar6 = *(longlong **)
                         (lVar30 + FNetworkReplayDelegates::OnWriteGameSpecificFrameData._8_8_),
              plVar6 == (longlong *)0x0)) ||
             (cVar18 = (**(code **)(*plVar6 + 0x68))(plVar6,pUVar24,fVar13,local_b8), cVar18 == '\0'
             )) {
            bVar16 = true;
          }
          lVar30 = lVar30 + -0x10;
          uVar26 = uVar26 - 1;
          pUVar23 = local_138;
        } while (-1 < (int)uVar26);
      }
      FNetworkReplayDelegates::OnWriteGameSpecificFrameData._28_4_ =
           FNetworkReplayDelegates::OnWriteGameSpecificFrameData._28_4_ + -1;
      if (bVar16) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &FNetworkReplayDelegates::OnWriteGameSpecificFrameData,false);
      }
      if (local_e0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e0.Accessor,&local_e0);
      }
      TSetPrivateFriend::
      Serialize<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                (param_2,(TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                          *)local_b8);
      local_70 = 0;
      if (local_78 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_78);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_b8,0,local_b8._8_4_);
      bVar16 = local_b8._12_4_ != 0;
      local_b8._8_8_ = (ulonglong)(uint)local_b8._12_4_ << 0x20;
      if (bVar16) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,(ForAnyElementType *)local_b8,0,(int *)(local_b8 + 0xc));
      }
      local_88 = 0xffffffff;
      local_84 = 0;
      local_90 = 0;
      if (0x80 < local_8c) {
        local_8c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10),0);
      }
      if (local_98 != (void *)0x0) {
        FMemory::Free(local_98);
      }
      pFVar28 = local_140;
      if ((FScriptContainerElement *)local_b8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_b8._0_8_);
        pFVar28 = local_140;
      }
    }
    lVar30 = (**(code **)(*(longlong *)param_2 + 0x28))(param_2);
    local_158 = (FName)((lVar30 - (longlong)pUVar23) + -8);
    (**(code **)(*(longlong *)param_2 + 0x1b8))(param_2,pUVar23);
    plVar6 = *(longlong **)&param_2->field_0x8;
    if ((FName *)plVar6[1] < (FName *)*plVar6 + 1) {
      if (((&param_2->field_0x0)[local_160] & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,(ulong64 *)&local_158);
      }
    }
    else {
      local_158 = *(FName *)*plVar6;
      *plVar6 = *plVar6 + 8;
    }
    (**(code **)(*(longlong *)param_2 + 0x1b8))(param_2,lVar30);
  }
  lVar30 = local_160;
  iVar3 = local_128->ArrayNum;
  pFVar27 = (local_128->AllocatorInstance).Data;
  pFVar1 = pFVar27 + (longlong)iVar3 * 0x28;
  while( true ) {
    pTVar14 = local_128;
    if (local_128->ArrayNum != iVar3) {
      local_177[0] = 0;
      `TCheckedPointerIterator<FQueuedDemoPacket,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_177);
    }
    if (pFVar27 == pFVar1) break;
    if (pFVar28->bHasLevelStreamingFixes != false) {
      if ((*(int *)(pFVar27 + 0x24) == 0) &&
         (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_1282770494952569476>,true,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplayHelper.cpp"
                              ,0x57c,"DemoPacket.SeenLevelIndex"), bVar16)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      (**(code **)(*(longlong *)param_2 + 0x1a0))(param_2,pFVar27 + 0x24);
    }
    plVar6 = *(longlong **)&param_2->field_0x8;
    local_170[0] = *(uint *)(pFVar27 + 8);
    uVar7 = *(undefined8 *)pFVar27;
    if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
      if (((&param_2->field_0x0)[lVar30] & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_170,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,local_170);
      }
    }
    else {
      local_170[0] = *(uint *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    (**(code **)(*(longlong *)param_2 + 0x188))(param_2,uVar7);
    pFVar27 = pFVar27 + 0x28;
  }
  DestructItems<FQueuedDemoPacket,int>
            ((FQueuedDemoPacket *)(pTVar14->AllocatorInstance).Data,pTVar14->ArrayNum);
  FVar4 = local_120;
  pTVar14->ArrayNum = 0;
  if (pTVar14->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&pTVar14->AllocatorInstance,0,&pTVar14->ArrayMax);
  }
  if (pFVar28->bHasLevelStreamingFixes != false) {
    local_14c = 0;
    (**(code **)(*(longlong *)param_2 + 0x1a0))(param_2,&local_14c);
  }
  plVar6 = *(longlong **)&param_2->field_0x8;
  local_164 = 0;
  if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
    if (((&param_2->field_0x0)[local_160] & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_164,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,&local_164);
    }
  }
  else {
    local_164 = *(uint *)*plVar6;
    *plVar6 = *plVar6 + 4;
  }
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar15) {
    FThreadStats::AddMessage(FVar4,CycleScopeEnd);
  }
  return;
}

// WriteNetworkDemoHeader @ 14849ed60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FReplayHelper::WriteNetworkDemoHeader(FReplayHelper *this,UNetConnection *param_1)

{
  FLevelNameAndTime *pFVar1;
  UNetDriver *pUVar2;
  code *pcVar3;
  TConsoleVariableData<float> *pTVar4;
  TConsoleVariableData<float> *pTVar5;
  TConsoleVariableData<int> *pTVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  FArchive *pFVar10;
  UObject *pUVar11;
  UClass *pUVar12;
  FGuid *pFVar13;
  longlong *plVar14;
  int iVar15;
  longlong lVar16;
  longlong *plVar17;
  FNetworkDemoHeader local_1a8;
  FString local_e8;
  FDestructionSentinel local_d8;
  FReadAccessScope local_c0;
  FReadAccessScope local_a8;
  FGuid local_90;
  FOverridableReplayVersionData local_78;
  
  if (((this->ReplayStreamer).Object == (INetworkReplayStreamer *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar10 = (FArchive *)(**(code **)(((this->ReplayStreamer).Object)->_padding_ + 0x18))();
  if (pFVar10 == (FArchive *)0x0) {
    if ((byte)LogDemo._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
    return;
  }
  FNetworkDemoHeader::FNetworkDemoHeader(&local_1a8);
  FNetworkDemoHeader::SetDefaultNetworkVersions(&local_1a8);
  plVar17 = (longlong *)0x0;
  if (&local_1a8.LevelNamesAndTimes != &this->LevelNamesAndTimes) {
    DestructItems<FLevelNameAndTime,int>
              ((FLevelNameAndTime *)local_1a8.LevelNamesAndTimes.AllocatorInstance.Data,
               local_1a8.LevelNamesAndTimes.ArrayNum);
    iVar15 = (this->LevelNamesAndTimes).ArrayNum;
    pFVar1 = (FLevelNameAndTime *)(this->LevelNamesAndTimes).AllocatorInstance.Data;
    local_1a8.LevelNamesAndTimes.ArrayNum = iVar15;
    if ((iVar15 == 0) && (local_1a8.LevelNamesAndTimes.ArrayMax == 0)) {
      local_1a8.LevelNamesAndTimes.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar15,local_1a8.LevelNamesAndTimes.ArrayMax,
                 &local_1a8.LevelNamesAndTimes.AllocatorInstance,iVar15,
                 &local_1a8.LevelNamesAndTimes.ArrayMax);
      ConstructItems<FLevelNameAndTime,FLevelNameAndTime,int>
                (local_1a8.LevelNamesAndTimes.AllocatorInstance.Data,pFVar1,iVar15);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FNetworkReplayDelegates::OnWriteGameSpecificDemoHeader,(FWriteAccessScope *)&local_d8)
  ;
  bVar7 = false;
  FNetworkReplayDelegates::OnWriteGameSpecificDemoHeader._28_4_ =
       FNetworkReplayDelegates::OnWriteGameSpecificDemoHeader._28_4_ + 1;
  iVar15 = FNetworkReplayDelegates::OnWriteGameSpecificDemoHeader._16_4_ + -1;
  if (-1 < iVar15) {
    lVar16 = (longlong)iVar15 << 4;
    bVar7 = false;
    do {
      if (((int)FNetworkReplayDelegates::OnWriteGameSpecificDemoHeader._16_4_ <= iVar15) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (((*(int *)(lVar16 + 8 + FNetworkReplayDelegates::OnWriteGameSpecificDemoHeader._8_8_) == 0
           ) || (*(longlong **)
                  (lVar16 + FNetworkReplayDelegates::OnWriteGameSpecificDemoHeader._8_8_) ==
                 (longlong *)0x0)) ||
         (cVar9 = (**(code **)(**(longlong **)
                                 (lVar16 + FNetworkReplayDelegates::OnWriteGameSpecificDemoHeader.
                                           _8_8_) + 0x68))(), cVar9 == '\0')) {
        bVar7 = true;
      }
      lVar16 = lVar16 + -0x10;
      iVar15 = iVar15 + -1;
    } while (-1 < iVar15);
  }
  FNetworkReplayDelegates::OnWriteGameSpecificDemoHeader._28_4_ =
       FNetworkReplayDelegates::OnWriteGameSpecificDemoHeader._28_4_ + -1;
  if (bVar7) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FNetworkReplayDelegates::OnWriteGameSpecificDemoHeader,false);
  }
  if (local_d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
  }
  pUVar11 = FWeakObjectPtr::Get(&(this->World).WeakPtr);
  if (((pUVar11 != (UObject *)0x0) && (*(longlong **)&pUVar11[1].field_0x10 != (longlong *)0x0)) &&
     (cVar9 = (**(code **)(**(longlong **)&pUVar11[1].field_0x10 + 0x3f8))(),
     pTVar6 = CVarDemoClientRecordAsyncEndOfFrame.Ref, cVar9 == '\0')) {
    local_1a8.HeaderFlags = local_1a8.HeaderFlags | ClientRecorded;
    bVar7 = IsInParallelGameThread();
    if (bVar7) {
LAB_14849efad:
      plVar14 = plVar17;
    }
    else {
      bVar7 = IsInGameThread();
      plVar14 = (longlong *)&DAT_00000004;
      if (bVar7) goto LAB_14849efad;
    }
    if (0 < *(int *)((longlong)pTVar6->ShadowedValue + (longlong)plVar14)) {
      local_1a8.HeaderFlags = local_1a8.HeaderFlags | AsyncRecorded;
    }
  }
  if (this->bHasLevelStreamingFixes != false) {
    local_1a8.HeaderFlags = local_1a8.HeaderFlags | HasStreamingFixes;
  }
  if (this->bHasDeltaCheckpoints != false) {
    local_1a8.HeaderFlags = local_1a8.HeaderFlags | DeltaCheckpoints;
  }
  if (this->bHasGameSpecificFrameData != false) {
    local_1a8.HeaderFlags = local_1a8.HeaderFlags | GameSpecificFrameData;
  }
  if (param_1 != (UNetConnection *)0x0) {
    pUVar12 = UReplayNetConnection::StaticClass();
    iVar15 = (int)pUVar12->_padding_;
    if ((iVar15 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar15 * 8) ==
        &pUVar12->_padding_)) {
      local_1a8.HeaderFlags = local_1a8.HeaderFlags | ReplayConnection;
    }
    pUVar2 = (param_1->Driver).field0_0x0.DebugPtr;
    if (pUVar2 != (UNetDriver *)0x0) {
      pUVar12 = Z_Construct_UClass_UDemoNetDriver_NoRegister();
      iVar15 = (int)pUVar12->_padding_;
      if ((iVar15 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar15 * 8) ==
          &pUVar12->_padding_)) {
        if ((pUVar2[1].OnNetServerMaxTickRateChanged.field_0xb & 8) != 0) {
          local_1a8.HeaderFlags = local_1a8.HeaderFlags | ActorPrioritizationEnabled;
        }
        local_1a8.FrameLimitInMS = (float)pUVar2[1].RecentlyDisconnectedClients.ArrayNum;
      }
    }
  }
  pTVar6 = CVarDemoUseNetRelevancy.Ref;
  bVar7 = IsInParallelGameThread();
  if (bVar7) {
LAB_14849f07f:
    plVar14 = plVar17;
  }
  else {
    bVar7 = IsInGameThread();
    plVar14 = (longlong *)&DAT_00000004;
    if (bVar7) goto LAB_14849f07f;
  }
  if (0 < *(int *)((longlong)plVar14 + (longlong)pTVar6)) {
    local_1a8.HeaderFlags = local_1a8.HeaderFlags | NetRelevancyEnabled;
  }
  pFVar13 = FGuid::NewGuid(&local_90);
  pTVar5 = CVarDemoMinRecordHz.Ref;
  local_1a8.CheckpointLimitInMS = this->CheckpointSaveMaxMSPerFrame;
  local_1a8.Guid.A = pFVar13->A;
  local_1a8.Guid.B = pFVar13->B;
  local_1a8.Guid.C = pFVar13->C;
  local_1a8.Guid.D = pFVar13->D;
  bVar7 = IsInParallelGameThread();
  if (!bVar7) {
    bVar7 = IsInGameThread();
    plVar14 = (longlong *)&DAT_00000004;
    if (!bVar7) goto LAB_14849f0ca;
  }
  plVar14 = plVar17;
LAB_14849f0ca:
  pTVar4 = CVarDemoRecordHz.Ref;
  local_1a8.MinRecordHz = *(float *)((longlong)plVar14 + (longlong)pTVar5);
  bVar7 = IsInParallelGameThread();
  if ((bVar7) || (bVar7 = IsInGameThread(), plVar14 = (longlong *)&DAT_00000004, bVar7)) {
    plVar14 = plVar17;
  }
  local_1a8.MaxRecordHz = *(float *)((longlong)plVar14 + (longlong)pTVar4);
  ::FString::FString(&local_e8,"Windows");
  if (local_1a8.Platform.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Platform.Data.AllocatorInstance.Data);
  }
  local_1a8.Platform.Data.AllocatorInstance.Data = local_e8.Data.AllocatorInstance.Data;
  local_1a8.Platform.Data.ArrayNum = local_e8.Data.ArrayNum;
  local_1a8.Platform.Data.ArrayMax = local_e8.Data.ArrayMax;
  local_1a8.BuildConfig = FApp::GetBuildConfiguration();
  local_1a8.BuildTarget = FApp::GetBuildTargetType();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FNetworkReplayDelegates::GetOverridableVersionDataForHeaderWrite,&local_c0);
  if (((FNetworkReplayDelegates::GetOverridableVersionDataForHeaderWrite._16_4_ == 0) ||
      (FNetworkReplayDelegates::GetOverridableVersionDataForHeaderWrite._8_8_ == 0)) ||
     (cVar9 = (**(code **)(*(longlong *)
                            FNetworkReplayDelegates::GetOverridableVersionDataForHeaderWrite._8_8_ +
                          0x38))(), cVar9 == '\0')) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_c0);
  if (bVar7) {
    FOverridableReplayVersionData::FOverridableReplayVersionData(&local_78,&local_1a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &FNetworkReplayDelegates::GetOverridableVersionDataForHeaderWrite,&local_a8);
    if (FNetworkReplayDelegates::GetOverridableVersionDataForHeaderWrite._16_4_ != 0) {
      plVar17 = (longlong *)FNetworkReplayDelegates::GetOverridableVersionDataForHeaderWrite._8_8_;
    }
    (**(code **)(*plVar17 + 0x60))(plVar17,&local_78);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_a8);
    FOverridableReplayVersionData::ApplyVersionDataToDemoHeader(&local_78,&local_1a8);
    if (local_78.EngineVersion.Branch.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_78.EngineVersion.Branch.Data.AllocatorInstance.Data);
    }
    if (local_78.CustomVersions.Versions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.CustomVersions.Versions.AllocatorInstance.Data);
    }
  }
  ::operator<<(pFVar10,&local_1a8);
  (**(code **)(*(longlong *)pFVar10 + 0x208))(pFVar10);
  DestructItems<FString,int>
            ((FString *)local_1a8.GameSpecificData.AllocatorInstance.Data,
             local_1a8.GameSpecificData.ArrayNum);
  if (local_1a8.GameSpecificData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.GameSpecificData.AllocatorInstance.Data);
  }
  DestructItems<FLevelNameAndTime,int>
            ((FLevelNameAndTime *)local_1a8.LevelNamesAndTimes.AllocatorInstance.Data,
             local_1a8.LevelNamesAndTimes.ArrayNum);
  if ((FLevelNameAndTime *)local_1a8.LevelNamesAndTimes.AllocatorInstance.Data !=
      (FLevelNameAndTime *)0x0) {
    FMemory::Free(local_1a8.LevelNamesAndTimes.AllocatorInstance.Data);
  }
  if (local_1a8.EngineVersion.Branch.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_1a8.EngineVersion.Branch.Data.AllocatorInstance.Data);
  }
  if (local_1a8.Platform.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Platform.Data.AllocatorInstance.Data);
  }
  if (local_1a8.CustomVersions.Versions.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(local_1a8.CustomVersions.Versions.AllocatorInstance.Data);
  return;
}

// WritePacket @ 14849f2d0

void __cdecl FReplayHelper::WritePacket(FArchive *param_1,uchar *param_2,int param_3)

{
  longlong *plVar1;
  uint local_res18 [4];
  
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    local_res18[0] = param_3;
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res18);
    }
  }
  else {
    local_res18[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,(longlong)(int)local_res18[0]);
  return;
}

