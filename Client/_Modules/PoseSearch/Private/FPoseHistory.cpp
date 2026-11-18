// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 25

// FPoseHistory @ 14a8abbe0

FPoseHistory * __thiscall UE::PoseSearch::FPoseHistory::FPoseHistory(FPoseHistory *this)

{
  this->TrajectorySpeedMultiplier = 1.0;
  (this->LastUpdateSkeleton).WeakPtr.ObjectIndex = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FPoseHistory_PoseSearch_UE__6B_;
  (this->Trajectory).Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Trajectory).Samples.ArrayNum = 0;
  (this->Trajectory).Samples.ArrayMax = 0;
  (this->LastUpdateSkeleton).WeakPtr.ObjectSerialNumber = 0;
  *(undefined8 *)&this->BoneToTransformMap = 0;
  *(undefined8 *)&(this->BoneToTransformMap).field_0x8 = 0;
  *(undefined8 *)&(this->BoneToTransformMap).field_0x20 = 0;
  this->MaxNumPoses = 0;
  this->SamplingInterval = 0.0;
  (this->TrajectoryDataState).DesiredControllerYawLastUpdate = 0.0;
  *(undefined4 *)&(this->BoneToTransformMap).field_0x28 = 0;
  *(undefined4 *)&(this->BoneToTransformMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->BoneToTransformMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BoneToTransformMap).field_0x34 = 0;
  *(undefined8 *)&(this->BoneToTransformMap).field_0x40 = 0;
  *(undefined4 *)&(this->BoneToTransformMap).field_0x48 = 0;
  (this->CollectedCurves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollectedCurves).ArrayNum = 0;
  (this->CollectedCurves).ArrayMax = 0;
  this->BoneToTransformMapTypeHash = 0;
  (this->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Entries).IndexMask = 0xffffffff;
  (this->Entries).Front = 0;
  (this->Entries).AfterBack = 0;
  *(undefined8 *)&(this->PoseIndicesHistory).IndexToTime = 0;
  *(undefined8 *)&(this->PoseIndicesHistory).IndexToTime.field_0x8 = 0;
  *(undefined8 *)&(this->PoseIndicesHistory).IndexToTime.field_0x20 = 0;
  *(undefined4 *)&(this->PoseIndicesHistory).IndexToTime.field_0x28 = 0;
  *(undefined4 *)&(this->PoseIndicesHistory).IndexToTime.field_0x2c = 0x80;
  *(undefined4 *)&(this->PoseIndicesHistory).IndexToTime.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PoseIndicesHistory).IndexToTime.field_0x34 = 0;
  *(undefined8 *)&(this->PoseIndicesHistory).IndexToTime.field_0x40 = 0;
  *(undefined4 *)&(this->PoseIndicesHistory).IndexToTime.field_0x48 = 0;
  this->PoseDataThreadSafeCounter = (FRWFallbackSafeAccessDetectorDefinition)0x0;
  return this;
}

// ~FPoseHistory @ 14a8ad9d0

void __thiscall UE::PoseSearch::FPoseHistory::~FPoseHistory(FPoseHistory *this)

{
  int *piVar1;
  TRingBuffer<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_> *this_00;
  int iVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  
  if (this->PoseDataThreadSafeCounter != (FRWFallbackSafeAccessDetectorDefinition)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicValue.load(std::memory_order_relaxed) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x3a,L"Detector cannot be destroyed while other threads access it");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  *(undefined4 *)&(this->PoseIndicesHistory).IndexToTime.field_0x48 = 0;
  pvVar3 = *(void **)&(this->PoseIndicesHistory).IndexToTime.field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PoseIndicesHistory);
  this_00 = &this->Entries;
  TRingBuffer<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_>::DestructRange
            (this_00,(this->Entries).Front,(this->Entries).AfterBack);
  (this->Entries).Front = 0;
  (this->Entries).AfterBack = 0;
  TRingBuffer<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_>::Reallocate(this_00,0);
  pFVar4 = (this_00->AllocatorInstance).Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->CollectedCurves).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  *(undefined4 *)&(this->BoneToTransformMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->BoneToTransformMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_short,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_short,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_short,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BoneToTransformMap);
  pFVar4 = (this->Trajectory).Samples.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  this->_padding_ = (longlong)&___7IPoseHistory_PoseSearch_UE__6B_;
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return;
}

// DebugDraw @ 14a8b2370

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
UE::PoseSearch::FPoseHistory::DebugDraw(FPoseHistory *this,UWorld *param_1,FColor param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchHistory.h"
                     ,0xea,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// FPoseHistory @ 14a8e0870

FPoseHistory * __thiscall
UE::PoseSearch::FPoseHistory::FPoseHistory(FPoseHistory *this,FPoseHistory *param_1)

{
  memset(&this->_padding_,0,0x110);
  FPoseHistory(this);
  this->_padding_ = (longlong)&___7FPoseHistory_PoseSearch_UE__6B_;
  operator=(this,param_1);
  return this;
}

// FPoseHistory @ 14a8e08d0

FPoseHistory * __thiscall
UE::PoseSearch::FPoseHistory::FPoseHistory(FPoseHistory *this,FPoseHistory *param_1)

{
  memset(&this->_padding_,0,0x110);
  FPoseHistory(this);
  this->_padding_ = (longlong)&___7FPoseHistory_PoseSearch_UE__6B_;
  operator=(this,param_1);
  return this;
}

// operator= @ 14a8e3320

FPoseHistory * __thiscall
UE::PoseSearch::FPoseHistory::operator=(FPoseHistory *this,FPoseHistory *param_1)

{
  FTransformTrajectory *pFVar1;
  FTransformTrajectory *pFVar2;
  TMap<unsigned_short,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>_>
  *pTVar3;
  TMap<unsigned_short,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>_>
  *pTVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  FRWFallbackSafeAccessDetectorDefinition *pFVar7;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar9;
  TRingBuffer<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_> *pTVar10;
  TRingBuffer<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_> *this_00;
  FPoseIndicesHistory *pFVar11;
  FPoseIndicesHistory *pFVar12;
  FRWFallbackSafeAccessDetectorDefinition FVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  void *pvVar16;
  longlong lVar17;
  code *pcVar18;
  bool bVar19;
  FPoseHistory *pFVar20;
  
  if (this != param_1) {
    LOCK();
    pFVar7 = &param_1->PoseDataThreadSafeCounter;
    FVar13 = *pFVar7;
    *pFVar7 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar7 + 0x100000);
    UNLOCK();
    if (((FVar13 != (FRWFallbackSafeAccessDetectorDefinition)0x0) &&
        (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                            ,0x72,
                            L"Acquiring a write access while there are ongoing read or write access"
                           ), bVar19)) {
      pcVar18 = (code *)swi(3);
      pFVar20 = (FPoseHistory *)(*pcVar18)();
      return pFVar20;
    }
    LOCK();
    pFVar7 = &this->PoseDataThreadSafeCounter;
    FVar13 = *pFVar7;
    *pFVar7 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar7 + 0x100000);
    UNLOCK();
    if (((FVar13 != (FRWFallbackSafeAccessDetectorDefinition)0x0) &&
        (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                            ,0x72,
                            L"Acquiring a write access while there are ongoing read or write access"
                           ), bVar19)) {
      pcVar18 = (code *)swi(3);
      pFVar20 = (FPoseHistory *)(*pcVar18)();
      return pFVar20;
    }
    pFVar1 = &param_1->Trajectory;
    pFVar2 = &this->Trajectory;
    this->MaxNumPoses = param_1->MaxNumPoses;
    this->SamplingInterval = param_1->SamplingInterval;
    if (pFVar2 != pFVar1) {
      pFVar15 = (pFVar2->Samples).AllocatorInstance.Data;
      if (pFVar15 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar15);
      }
      (pFVar2->Samples).AllocatorInstance.Data = (pFVar1->Samples).AllocatorInstance.Data;
      (pFVar1->Samples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->Trajectory).Samples.ArrayNum = (param_1->Trajectory).Samples.ArrayNum;
      (this->Trajectory).Samples.ArrayMax = (param_1->Trajectory).Samples.ArrayMax;
      (param_1->Trajectory).Samples.ArrayNum = 0;
      (param_1->Trajectory).Samples.ArrayMax = 0;
    }
    pTVar3 = &param_1->BoneToTransformMap;
    (this->TrajectoryDataState).DesiredControllerYawLastUpdate =
         (param_1->TrajectoryDataState).DesiredControllerYawLastUpdate;
    pTVar4 = &this->BoneToTransformMap;
    this->TrajectorySpeedMultiplier = param_1->TrajectorySpeedMultiplier;
    (this->LastUpdateSkeleton).WeakPtr = (param_1->LastUpdateSkeleton).WeakPtr;
    if (pTVar4 != pTVar3) {
      if (*(void **)pTVar4 != (void *)0x0) {
        FMemory::Free(*(void **)pTVar4);
      }
      puVar5 = &(param_1->BoneToTransformMap).field_0x10;
      *(undefined8 *)pTVar4 = *(undefined8 *)pTVar3;
      puVar6 = &(this->BoneToTransformMap).field_0x10;
      *(undefined8 *)pTVar3 = 0;
      *(undefined4 *)&(this->BoneToTransformMap).field_0x8 =
           *(undefined4 *)&(param_1->BoneToTransformMap).field_0x8;
      *(undefined4 *)&(this->BoneToTransformMap).field_0xc =
           *(undefined4 *)&(param_1->BoneToTransformMap).field_0xc;
      *(undefined8 *)&(param_1->BoneToTransformMap).field_0x8 = 0;
      if (puVar6 != puVar5) {
        if (*(longlong *)&(param_1->BoneToTransformMap).field_0x20 == 0) {
          memmove(puVar6,puVar5,0x10);
        }
        pvVar16 = *(void **)&(this->BoneToTransformMap).field_0x20;
        if (pvVar16 != (void *)0x0) {
          FMemory::Free(pvVar16);
        }
        *(undefined8 *)&(this->BoneToTransformMap).field_0x20 =
             *(undefined8 *)&(param_1->BoneToTransformMap).field_0x20;
        *(undefined8 *)&(param_1->BoneToTransformMap).field_0x20 = 0;
        *(undefined4 *)&(this->BoneToTransformMap).field_0x28 =
             *(undefined4 *)&(param_1->BoneToTransformMap).field_0x28;
        *(undefined4 *)&(this->BoneToTransformMap).field_0x2c =
             *(undefined4 *)&(param_1->BoneToTransformMap).field_0x2c;
        *(undefined8 *)&(param_1->BoneToTransformMap).field_0x28 = 0;
      }
      *(undefined4 *)&(this->BoneToTransformMap).field_0x30 =
           *(undefined4 *)&(param_1->BoneToTransformMap).field_0x30;
      *(undefined4 *)&(this->BoneToTransformMap).field_0x34 =
           *(undefined4 *)&(param_1->BoneToTransformMap).field_0x34;
      *(undefined4 *)&(param_1->BoneToTransformMap).field_0x30 = 0xffffffff;
      *(undefined4 *)&(param_1->BoneToTransformMap).field_0x34 = 0;
      if (*(longlong *)&(param_1->BoneToTransformMap).field_0x40 == 0) {
        *(undefined4 *)&(this->BoneToTransformMap).field_0x38 =
             *(undefined4 *)&(param_1->BoneToTransformMap).field_0x38;
      }
      pvVar16 = *(void **)&(this->BoneToTransformMap).field_0x40;
      if (pvVar16 != (void *)0x0) {
        FMemory::Free(pvVar16);
      }
      *(undefined8 *)&(this->BoneToTransformMap).field_0x40 =
           *(undefined8 *)&(param_1->BoneToTransformMap).field_0x40;
      *(undefined8 *)&(param_1->BoneToTransformMap).field_0x40 = 0;
      *(undefined4 *)&(this->BoneToTransformMap).field_0x48 =
           *(undefined4 *)&(param_1->BoneToTransformMap).field_0x48;
      *(undefined4 *)&(param_1->BoneToTransformMap).field_0x48 = 0;
    }
    pTVar8 = &param_1->CollectedCurves;
    pTVar9 = &this->CollectedCurves;
    if (pTVar9 != pTVar8) {
      pFVar15 = (pTVar9->AllocatorInstance).Data;
      if (pFVar15 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar15);
      }
      (pTVar9->AllocatorInstance).Data = (pTVar8->AllocatorInstance).Data;
      (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->CollectedCurves).ArrayNum = (param_1->CollectedCurves).ArrayNum;
      (this->CollectedCurves).ArrayMax = (param_1->CollectedCurves).ArrayMax;
      (param_1->CollectedCurves).ArrayNum = 0;
      (param_1->CollectedCurves).ArrayMax = 0;
    }
    pTVar10 = &param_1->Entries;
    this_00 = &this->Entries;
    this->BoneToTransformMapTypeHash = param_1->BoneToTransformMapTypeHash;
    if (this_00 != pTVar10) {
      TRingBuffer<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_>::DestructRange
                (this_00,(this->Entries).Front,(this->Entries).AfterBack);
      (this->Entries).Front = 0;
      (this->Entries).AfterBack = 0;
      for (lVar17 = 0x3f; 1UL >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
      TRingBuffer<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_>::Reallocate
                (this_00,0);
      pFVar15 = (this_00->AllocatorInstance).Data;
      if (pFVar15 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar15);
      }
      (this_00->AllocatorInstance).Data = (pTVar10->AllocatorInstance).Data;
      (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      uVar14 = (this->Entries).IndexMask;
      (this->Entries).IndexMask = (param_1->Entries).IndexMask;
      (param_1->Entries).IndexMask = uVar14;
      uVar14 = (this->Entries).Front;
      (this->Entries).Front = (param_1->Entries).Front;
      (param_1->Entries).Front = uVar14;
      uVar14 = (this->Entries).AfterBack;
      (this->Entries).AfterBack = (param_1->Entries).AfterBack;
      (param_1->Entries).AfterBack = uVar14;
    }
    pFVar11 = &param_1->PoseIndicesHistory;
    pFVar12 = &this->PoseIndicesHistory;
    if (pFVar12 != pFVar11) {
      if (*(void **)&pFVar12->IndexToTime != (void *)0x0) {
        FMemory::Free(*(void **)&pFVar12->IndexToTime);
      }
      puVar5 = &(param_1->PoseIndicesHistory).IndexToTime.field_0x10;
      *(undefined8 *)&pFVar12->IndexToTime = *(undefined8 *)&pFVar11->IndexToTime;
      puVar6 = &(this->PoseIndicesHistory).IndexToTime.field_0x10;
      *(undefined8 *)&pFVar11->IndexToTime = 0;
      *(undefined4 *)&(this->PoseIndicesHistory).IndexToTime.field_0x8 =
           *(undefined4 *)&(param_1->PoseIndicesHistory).IndexToTime.field_0x8;
      *(undefined4 *)&(this->PoseIndicesHistory).IndexToTime.field_0xc =
           *(undefined4 *)&(param_1->PoseIndicesHistory).IndexToTime.field_0xc;
      *(undefined8 *)&(param_1->PoseIndicesHistory).IndexToTime.field_0x8 = 0;
      if (puVar6 != puVar5) {
        if (*(longlong *)&(param_1->PoseIndicesHistory).IndexToTime.field_0x20 == 0) {
          memmove(puVar6,puVar5,0x10);
        }
        pvVar16 = *(void **)&(this->PoseIndicesHistory).IndexToTime.field_0x20;
        if (pvVar16 != (void *)0x0) {
          FMemory::Free(pvVar16);
        }
        *(undefined8 *)&(this->PoseIndicesHistory).IndexToTime.field_0x20 =
             *(undefined8 *)&(param_1->PoseIndicesHistory).IndexToTime.field_0x20;
        *(undefined8 *)&(param_1->PoseIndicesHistory).IndexToTime.field_0x20 = 0;
        *(undefined4 *)&(this->PoseIndicesHistory).IndexToTime.field_0x28 =
             *(undefined4 *)&(param_1->PoseIndicesHistory).IndexToTime.field_0x28;
        *(undefined4 *)&(this->PoseIndicesHistory).IndexToTime.field_0x2c =
             *(undefined4 *)&(param_1->PoseIndicesHistory).IndexToTime.field_0x2c;
        *(undefined8 *)&(param_1->PoseIndicesHistory).IndexToTime.field_0x28 = 0;
      }
      *(undefined4 *)&(this->PoseIndicesHistory).IndexToTime.field_0x30 =
           *(undefined4 *)&(param_1->PoseIndicesHistory).IndexToTime.field_0x30;
      *(undefined4 *)&(this->PoseIndicesHistory).IndexToTime.field_0x34 =
           *(undefined4 *)&(param_1->PoseIndicesHistory).IndexToTime.field_0x34;
      *(undefined4 *)&(param_1->PoseIndicesHistory).IndexToTime.field_0x30 = 0xffffffff;
      *(undefined4 *)&(param_1->PoseIndicesHistory).IndexToTime.field_0x34 = 0;
      if (*(longlong *)&(param_1->PoseIndicesHistory).IndexToTime.field_0x40 == 0) {
        *(undefined4 *)&(this->PoseIndicesHistory).IndexToTime.field_0x38 =
             *(undefined4 *)&(param_1->PoseIndicesHistory).IndexToTime.field_0x38;
      }
      pvVar16 = *(void **)&(this->PoseIndicesHistory).IndexToTime.field_0x40;
      if (pvVar16 != (void *)0x0) {
        FMemory::Free(pvVar16);
      }
      *(undefined8 *)&(this->PoseIndicesHistory).IndexToTime.field_0x40 =
           *(undefined8 *)&(param_1->PoseIndicesHistory).IndexToTime.field_0x40;
      *(undefined8 *)&(param_1->PoseIndicesHistory).IndexToTime.field_0x40 = 0;
      *(undefined4 *)&(this->PoseIndicesHistory).IndexToTime.field_0x48 =
           *(undefined4 *)&(param_1->PoseIndicesHistory).IndexToTime.field_0x48;
      *(undefined4 *)&(param_1->PoseIndicesHistory).IndexToTime.field_0x48 = 0;
    }
    LOCK();
    pFVar7 = &this->PoseDataThreadSafeCounter;
    FVar13 = *pFVar7;
    *pFVar7 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar7 + -0x100000);
    UNLOCK();
    if (((FVar13 != (FRWFallbackSafeAccessDetectorDefinition)0x100000) &&
        (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                            ,0x7d,
                            L"Another thread asked to have a read or write access during this write access"
                           ), bVar19)) {
      pcVar18 = (code *)swi(3);
      pFVar20 = (FPoseHistory *)(*pcVar18)();
      return pFVar20;
    }
    LOCK();
    pFVar7 = &param_1->PoseDataThreadSafeCounter;
    FVar13 = *pFVar7;
    *pFVar7 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar7 + -0x100000);
    UNLOCK();
    if (((FVar13 != (FRWFallbackSafeAccessDetectorDefinition)0x100000) &&
        (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                            ,0x7d,
                            L"Another thread asked to have a read or write access during this write access"
                           ), bVar19)) {
      pcVar18 = (code *)swi(3);
      pFVar20 = (FPoseHistory *)(*pcVar18)();
      return pFVar20;
    }
  }
  return this;
}

// operator= @ 14a8e3750

FPoseHistory * __thiscall
UE::PoseSearch::FPoseHistory::operator=(FPoseHistory *this,FPoseHistory *param_1)

{
  undefined1 *puVar1;
  undefined1 *this_00;
  FRWFallbackSafeAccessDetectorDefinition *pFVar2;
  TRingBuffer<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_> *this_01;
  FPoseIndicesHistory *this_02;
  ulonglong uVar3;
  FRWFallbackSafeAccessDetectorDefinition FVar4;
  uint uVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  FPoseHistory *pFVar10;
  FPoseHistoryEntry *pFVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  
  if (this != param_1) {
    LOCK();
    pFVar2 = &param_1->PoseDataThreadSafeCounter;
    FVar4 = *pFVar2;
    *pFVar2 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar2 + 0x100000);
    UNLOCK();
    if ((FVar4 != (FRWFallbackSafeAccessDetectorDefinition)0x0) &&
       (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x72,
                         L"Acquiring a write access while there are ongoing read or write access");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pFVar10 = (FPoseHistory *)(*pcVar7)();
        return pFVar10;
      }
    }
    LOCK();
    pFVar2 = &this->PoseDataThreadSafeCounter;
    FVar4 = *pFVar2;
    *pFVar2 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar2 + 0x100000);
    UNLOCK();
    if ((FVar4 != (FRWFallbackSafeAccessDetectorDefinition)0x0) &&
       (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x72,
                         L"Acquiring a write access while there are ongoing read or write access");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pFVar10 = (FPoseHistory *)(*pcVar7)();
        return pFVar10;
      }
    }
    this->MaxNumPoses = param_1->MaxNumPoses;
    this->SamplingInterval = param_1->SamplingInterval;
    FTransformTrajectory::operator=(&this->Trajectory,&param_1->Trajectory);
    (this->TrajectoryDataState).DesiredControllerYawLastUpdate =
         (param_1->TrajectoryDataState).DesiredControllerYawLastUpdate;
    this->TrajectorySpeedMultiplier = param_1->TrajectorySpeedMultiplier;
    (this->LastUpdateSkeleton).WeakPtr = (param_1->LastUpdateSkeleton).WeakPtr;
    TMap<unsigned_short,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>_>
    ::operator=(&this->BoneToTransformMap,&param_1->BoneToTransformMap);
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              (&this->CollectedCurves,&param_1->CollectedCurves);
    this_01 = &this->Entries;
    this->BoneToTransformMapTypeHash = param_1->BoneToTransformMapTypeHash;
    uVar9 = (param_1->Entries).IndexMask;
    TRingBuffer<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_>::DestructRange
              (this_01,(this->Entries).Front,(this->Entries).AfterBack);
    (this->Entries).Front = 0;
    (this->Entries).AfterBack = 0;
    uVar9 = TRingBuffer<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_>::
            NormalizeCapacity(this_01,uVar9 + 1);
    TRingBuffer<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_>::Reallocate
              (this_01,uVar9);
    uVar9 = (param_1->Entries).AfterBack;
    uVar5 = (param_1->Entries).Front;
    for (iVar14 = 0; iVar14 != uVar9 - uVar5; iVar14 = iVar14 + 1) {
      pFVar11 = TRingBuffer<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_>::
                operator[](&param_1->Entries,iVar14);
      uVar12 = ((this->Entries).AfterBack - (this->Entries).Front) + 1;
      uVar13 = 1;
      if (uVar12 != 0) {
        uVar13 = uVar12;
      }
      uVar3 = (ulonglong)(uVar13 - 1) * 2 + 1;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      uVar13 = (uint)(uVar12 != 0) << ((byte)lVar6 & 0x1f);
      if (0x7fffffff < uVar13 || uVar13 < uVar12) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("((static_cast<StorageModuloType>(ResultCapacity) <= (TNumericLimits<StorageModuloType>::Max() >> 1)) & (InCapacity <= ResultCapacity))"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                           ,0x39f,L"Integer overflow in TRingBuffer capacity");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          pFVar10 = (FPoseHistory *)(*pcVar7)();
          return pFVar10;
        }
      }
      if ((this->Entries).IndexMask + 1 < uVar13) {
        TRingBuffer<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_>::Reallocate
                  (this_01,uVar13);
      }
      uVar13 = (this->Entries).AfterBack;
      (this->Entries).AfterBack = uVar13 + 1;
      FPoseHistoryEntry::FPoseHistoryEntry
                ((FPoseHistoryEntry *)
                 ((this_01->AllocatorInstance).Data +
                 (ulonglong)(uVar13 & (this->Entries).IndexMask) * 0x48),pFVar11);
    }
    this_02 = &this->PoseIndicesHistory;
    if (this_02 != &param_1->PoseIndicesHistory) {
      Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                ((ForElementType<FSetElementId> *)&(this->PoseIndicesHistory).IndexToTime.field_0x38
                 ,(int *)&(this->PoseIndicesHistory).IndexToTime.field_0x48,
                 (ForElementType<FSetElementId> *)
                 &(param_1->PoseIndicesHistory).IndexToTime.field_0x38,
                 *(int *)&(param_1->PoseIndicesHistory).IndexToTime.field_0x48);
      iVar14 = *(int *)&(param_1->PoseIndicesHistory).IndexToTime.field_0x8;
      TSparseArray<TSparseSetElement<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty((TSparseArray<TSparseSetElement<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this_02,iVar14);
      Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,iVar14,(ForAnyElementType *)this_02,
                 (int *)&(this->PoseIndicesHistory).IndexToTime.field_0x8,
                 (int *)&(this->PoseIndicesHistory).IndexToTime.field_0xc);
      puVar1 = &(param_1->PoseIndicesHistory).IndexToTime.field_0x10;
      this_00 = &(this->PoseIndicesHistory).IndexToTime.field_0x10;
      *(undefined4 *)&(this->PoseIndicesHistory).IndexToTime.field_0x30 =
           *(undefined4 *)&(param_1->PoseIndicesHistory).IndexToTime.field_0x30;
      *(undefined4 *)&(this->PoseIndicesHistory).IndexToTime.field_0x34 =
           *(undefined4 *)&(param_1->PoseIndicesHistory).IndexToTime.field_0x34;
      if (this_00 != puVar1) {
        TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                  ((TBitArray<FDefaultBitArrayAllocator> *)this_00,
                   (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
      }
      if (iVar14 != 0) {
        memcpy(*(void **)&this_02->IndexToTime,*(void **)&(param_1->PoseIndicesHistory).IndexToTime,
               (longlong)iVar14 * 0x18);
      }
    }
    LOCK();
    pFVar2 = &this->PoseDataThreadSafeCounter;
    FVar4 = *pFVar2;
    *pFVar2 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar2 + -0x100000);
    UNLOCK();
    if ((FVar4 != (FRWFallbackSafeAccessDetectorDefinition)0x100000) &&
       (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x7d,
                         L"Another thread asked to have a read or write access during this write access"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pFVar10 = (FPoseHistory *)(*pcVar7)();
        return pFVar10;
      }
    }
    LOCK();
    pFVar2 = &param_1->PoseDataThreadSafeCounter;
    FVar4 = *pFVar2;
    *pFVar2 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar2 + -0x100000);
    UNLOCK();
    if ((FVar4 != (FRWFallbackSafeAccessDetectorDefinition)0x100000) &&
       (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x7d,
                         L"Another thread asked to have a read or write access during this write access"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pFVar10 = (FPoseHistory *)(*pcVar7)();
        return pFVar10;
      }
    }
  }
  return this;
}

// DebugDraw @ 14a8efb30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::PoseSearch::FPoseHistory::DebugDraw
          (FPoseHistory *this,FAnimInstanceProxy *param_1,FColor param_2)

{
  FRWFallbackSafeAccessDetectorDefinition *pFVar1;
  FPoseHistoryEntry *this_00;
  double *pdVar2;
  FRWFallbackSafeAccessDetectorDefinition FVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  bool bVar30;
  int iVar31;
  FTransformTrajectorySample *pFVar32;
  TTransform<double> *pTVar33;
  uint uVar34;
  ulonglong uVar35;
  ForElementType<UE::Math::TTransform<double>_> FVar36;
  int iVar37;
  uint uVar38;
  uint uVar39;
  longlong lVar40;
  void *_Dst;
  undefined4 uVar41;
  undefined4 uVar42;
  FColor_u_0 local_res18 [2];
  undefined1 auStackY_32e8 [32];
  uint local_32a8;
  TVector<double>_u_0 local_32a0;
  TVector<double>_u_0 local_3288;
  FTransformTrajectorySample local_3268;
  TTransform<double> local_3228;
  TTransform<double> local_31c8;
  TTransform<double> local_3168;
  ForElementType<UE::Math::TTransform<double>_> local_3108;
  uint local_f8 [4];
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_32e8;
  LOCK();
  pFVar1 = &this->PoseDataThreadSafeCounter;
  FVar3 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + 1);
  UNLOCK();
  local_res18[0] = param_2.field0_0x0;
  if (((((uint)FVar3 & 0xfff00000) != 0) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                          ,0x5c,L"Acquiring a read access while there is already a write access"),
     bVar30)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (GVarAnimPoseHistoryDebugDrawTrajectory != false) {
    UTransformTrajectoryBlueprintLibrary::DebugDrawTrajectory
              (&this->Trajectory,param_1,GVarAnimPoseHistoryDebugDrawTrajectoryThickness,0.0,
               GVarAnimPoseHistoryDebugDrawTrajectoryMaxNumOfHistorySamples,
               GVarAnimPoseHistoryDebugDrawTrajectoryMaxNumOfPredictionSamples);
  }
  uVar17 = _UNK_15068968c;
  uVar16 = _UNK_150689688;
  uVar15 = _UNK_150689684;
  uVar14 = ___xmm_3ff00000000000003ff0000000000000;
  uVar13 = _UNK_15068951c;
  uVar12 = _UNK_150689518;
  uVar11 = _UNK_150689514;
  uVar10 = ___xmm_00000000000000003ff0000000000000;
  fVar9 = __real_3f800000;
  if ((local_res18[0]._s_0.A != '\0') && (GVarAnimPoseHistoryDebugDrawPose != false)) {
    iVar6 = (this->Trajectory).Samples.ArrayNum;
    uVar38 = (this->Entries).AfterBack;
    uVar34 = (this->Entries).Front;
    local_3108.SecondaryData = (ForElementType<UE::Math::TTransform<double>_>)0x0;
    local_f8[0] = 0;
    local_f8[1] = 0x80;
    local_32a8 = 0;
    if (0 < (int)(uVar38 - uVar34)) {
      do {
        uVar39 = 0;
        if ((int)local_32a8 < (int)(uVar38 - uVar34)) {
          uVar39 = ~local_32a8 >> 0x1f;
        }
        if ((uVar39 == 0) &&
           (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < Num())",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                                ,0x3e3,
                                L"RingBuffer index out of bounds: %i from a RingBuffer of size %i"),
           bVar30)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar34 = local_f8[0];
        uVar35 = (ulonglong)((this->Entries).Front + local_32a8 & (this->Entries).IndexMask);
        pFVar7 = (this->Entries).AllocatorInstance.Data;
        uVar38 = *(uint *)(pFVar7 + uVar35 * 0x48 + 8);
        this_00 = (FPoseHistoryEntry *)(pFVar7 + uVar35 * 0x48);
        if ((int)uVar38 < (int)local_f8[0]) {
          uVar38 = local_f8[0];
        }
        if ((int)local_f8[0] < (int)uVar38) {
          iVar37 = uVar38 - local_f8[0];
          iVar31 = Core::Private::
                   ReallocGrow<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TTransform<double>_>_>
                             (0x60,0x10,iVar37,&local_3108,(int *)local_f8,(int *)(local_f8 + 1));
          FVar36 = (ForElementType<UE::Math::TTransform<double>_>)&local_3108;
          if (local_3108.SecondaryData != (ForElementType<UE::Math::TTransform<double>_>)0x0) {
            FVar36 = local_3108.SecondaryData;
          }
          DefaultConstructItems<UE::Math::TTransform<double>,int>
                    ((void *)((longlong)iVar31 * 0x60 + (longlong)FVar36),iVar37);
        }
        else {
          if ((int)uVar38 < 0) {
                    /* WARNING: Subroutine does not return */
            Core::Private::OnInvalidArrayNum((ulonglong)uVar38);
          }
          if ((int)uVar38 < (int)local_f8[0]) {
            uVar39 = local_f8[0] - uVar38;
            if (((int)(uVar38 | uVar39) < 0) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), bVar30)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if (uVar39 != 0) {
              FVar36 = (ForElementType<UE::Math::TTransform<double>_>)&local_3108;
              if (local_3108.SecondaryData != (ForElementType<UE::Math::TTransform<double>_>)0x0) {
                FVar36 = local_3108.SecondaryData;
              }
              _Dst = (void *)((longlong)(int)uVar38 * 0x60 + (longlong)FVar36);
              iVar31 = (local_f8[0] - uVar38) - uVar39;
              if (iVar31 != 0) {
                memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar39 * 0x60),
                        (longlong)iVar31 * 0x60);
              }
              local_f8[0] = local_f8[0] - uVar39;
            }
          }
        }
        uVar38 = 0;
        if (0 < (this_00->ComponentSpaceRotations).ArrayNum) {
          lVar40 = 0;
          do {
            uVar42 = 0;
            uVar41 = 0;
            if (iVar6 == 0) {
              local_31c8.Rotation.XY.m128d_f64[0]._0_4_ =
                   *(undefined4 *)(param_1->ComponentTransform).Rotation.XY.m128d_f64;
              local_31c8.Rotation.XY.m128d_f64[0]._4_4_ =
                   *(undefined4 *)
                    ((longlong)(param_1->ComponentTransform).Rotation.XY.m128d_f64 + 4);
              local_31c8.Rotation.XY.m128d_f64[1]._0_4_ =
                   *(undefined4 *)((param_1->ComponentTransform).Rotation.XY.m128d_f64 + 1);
              local_31c8.Rotation.XY.m128d_f64[1]._4_4_ =
                   *(undefined4 *)
                    ((longlong)(param_1->ComponentTransform).Rotation.XY.m128d_f64 + 0xc);
              local_31c8.Rotation.ZW.m128d_f64[0]._0_4_ =
                   *(undefined4 *)(param_1->ComponentTransform).Rotation.ZW.m128d_f64;
              local_31c8.Rotation.ZW.m128d_f64[0]._4_4_ =
                   *(undefined4 *)
                    ((longlong)(param_1->ComponentTransform).Rotation.ZW.m128d_f64 + 4);
              local_31c8.Rotation.ZW.m128d_f64[1]._0_4_ =
                   *(undefined4 *)((param_1->ComponentTransform).Rotation.ZW.m128d_f64 + 1);
              local_31c8.Rotation.ZW.m128d_f64[1]._4_4_ =
                   *(undefined4 *)
                    ((longlong)(param_1->ComponentTransform).Rotation.ZW.m128d_f64 + 0xc);
              local_31c8.Translation.XY.m128d_f64[0]._0_4_ =
                   *(undefined4 *)(param_1->ComponentTransform).Translation.XY.m128d_f64;
              local_31c8.Translation.XY.m128d_f64[0]._4_4_ =
                   *(undefined4 *)
                    ((longlong)(param_1->ComponentTransform).Translation.XY.m128d_f64 + 4);
              local_31c8.Translation.XY.m128d_f64[1]._0_4_ =
                   *(undefined4 *)((param_1->ComponentTransform).Translation.XY.m128d_f64 + 1);
              local_31c8.Translation.XY.m128d_f64[1]._4_4_ =
                   *(undefined4 *)
                    ((longlong)(param_1->ComponentTransform).Translation.XY.m128d_f64 + 0xc);
              local_31c8.Translation.ZW.m128d_f64[0]._0_4_ =
                   *(undefined4 *)(param_1->ComponentTransform).Translation.ZW.m128d_f64;
              local_31c8.Translation.ZW.m128d_f64[0]._4_4_ =
                   *(undefined4 *)
                    ((longlong)(param_1->ComponentTransform).Translation.ZW.m128d_f64 + 4);
              uVar41 = *(undefined4 *)((param_1->ComponentTransform).Translation.ZW.m128d_f64 + 1);
              uVar42 = *(undefined4 *)
                        ((longlong)(param_1->ComponentTransform).Translation.ZW.m128d_f64 + 0xc);
              local_31c8.Scale3D.XY.m128d_f64[0]._0_4_ =
                   *(undefined4 *)(param_1->ComponentTransform).Scale3D.XY.m128d_f64;
              local_31c8.Scale3D.XY.m128d_f64[0]._4_4_ =
                   *(undefined4 *)((longlong)(param_1->ComponentTransform).Scale3D.XY.m128d_f64 + 4)
              ;
              local_31c8.Scale3D.XY.m128d_f64[1]._0_4_ =
                   *(undefined4 *)((param_1->ComponentTransform).Scale3D.XY.m128d_f64 + 1);
              local_31c8.Scale3D.XY.m128d_f64[1]._4_4_ =
                   *(undefined4 *)
                    ((longlong)(param_1->ComponentTransform).Scale3D.XY.m128d_f64 + 0xc);
              local_31c8.Scale3D.ZW.m128d_f64[0]._0_4_ =
                   *(undefined4 *)(param_1->ComponentTransform).Scale3D.ZW.m128d_f64;
              local_31c8.Scale3D.ZW.m128d_f64[0]._4_4_ =
                   *(undefined4 *)((longlong)(param_1->ComponentTransform).Scale3D.ZW.m128d_f64 + 4)
              ;
              local_31c8.Scale3D.ZW.m128d_f64[1]._0_4_ =
                   *(undefined4 *)((param_1->ComponentTransform).Scale3D.ZW.m128d_f64 + 1);
              local_31c8.Scale3D.ZW.m128d_f64[1]._4_4_ =
                   *(undefined4 *)
                    ((longlong)(param_1->ComponentTransform).Scale3D.ZW.m128d_f64 + 0xc);
            }
            else {
              pFVar32 = FTransformTrajectory::GetSampleAtTime
                                  (&this->Trajectory,&local_3268,this_00->AccumulatedSeconds,false);
              uVar4 = *(undefined8 *)((longlong)&(pFVar32->Position).field0_0x0 + 8);
              uVar5 = *(undefined8 *)&(pFVar32->Position).field0_0x0;
              local_31c8.Translation.XY.m128d_f64[0]._0_4_ = (undefined4)uVar5;
              local_31c8.Translation.XY.m128d_f64[0]._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
              uVar5 = *(undefined8 *)((longlong)&(pFVar32->Position).field0_0x0 + 0x10);
              local_31c8.Translation.ZW.m128d_f64[0]._0_4_ = (undefined4)uVar5;
              local_31c8.Translation.ZW.m128d_f64[0]._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
              local_31c8.Rotation.XY.m128d_f64[0]._0_4_ = *(undefined4 *)&(pFVar32->Facing).X;
              local_31c8.Rotation.XY.m128d_f64[0]._4_4_ =
                   *(undefined4 *)((longlong)&(pFVar32->Facing).X + 4);
              local_31c8.Rotation.XY.m128d_f64[1]._0_4_ = *(undefined4 *)&(pFVar32->Facing).Y;
              local_31c8.Rotation.XY.m128d_f64[1]._4_4_ =
                   *(undefined4 *)((longlong)&(pFVar32->Facing).Y + 4);
              local_31c8.Rotation.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)&(pFVar32->Facing).Z;
              local_31c8.Rotation.ZW.m128d_f64[0]._4_4_ =
                   *(undefined4 *)((longlong)&(pFVar32->Facing).Z + 4);
              local_31c8.Rotation.ZW.m128d_f64[1]._0_4_ = *(undefined4 *)&(pFVar32->Facing).W;
              local_31c8.Rotation.ZW.m128d_f64[1]._4_4_ =
                   *(undefined4 *)((longlong)&(pFVar32->Facing).W + 4);
              local_31c8.Translation.XY.m128d_f64[1]._0_4_ = (undefined4)uVar4;
              local_31c8.Translation.XY.m128d_f64[1]._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
              local_31c8.Scale3D.XY.m128d_f64[0]._0_4_ = uVar14;
              local_31c8.Scale3D.XY.m128d_f64[0]._4_4_ = uVar15;
              local_31c8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar16;
              local_31c8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar17;
              local_31c8.Scale3D.ZW.m128d_f64[0]._0_4_ = uVar10;
              local_31c8.Scale3D.ZW.m128d_f64[0]._4_4_ = uVar11;
              local_31c8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar12;
              local_31c8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar13;
            }
            local_31c8.Translation.ZW.m128d_f64[1]._0_4_ = uVar41;
            local_31c8.Translation.ZW.m128d_f64[1]._4_4_ = uVar42;
            pTVar33 = FPoseHistoryEntry::GetComponentSpaceTransform(this_00,&local_3168,uVar38);
            local_3228.Rotation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            local_3228.Rotation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_3228.Rotation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
            local_3228.Rotation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            local_3228.Rotation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_3228.Rotation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
            local_3228.Translation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
            local_3228.Translation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_3228.Translation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
            local_3228.Translation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
            local_3228.Translation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_3228.Translation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
            local_3228.Scale3D.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
            local_3228.Scale3D.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float1110.m128_f32[0];
            local_3228.Scale3D.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
            local_3228.Scale3D.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
            local_3228.Scale3D.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float1110.m128_f32[2];
            local_3228.Scale3D.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
            UE::Math::TTransform<double>::Multiply(&local_3228,pTVar33,&local_31c8);
            if ((int)uVar38 < (int)uVar34) {
              local_32a0._s_0.Z = local_3228.Translation.ZW.m128d_f64[0];
              local_32a0._s_0.X = local_3228.Translation.XY.m128d_f64[0];
              local_32a0._s_0.Y = local_3228.Translation.XY.m128d_f64[1];
              uVar39 = 0;
              if ((int)uVar38 < (int)local_f8[0]) {
                uVar39 = ~uVar38 >> 0x1f;
              }
              if ((uVar39 == 0) &&
                 (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar30)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FVar36 = (ForElementType<UE::Math::TTransform<double>_>)&local_3108;
              if (local_3108.SecondaryData != (ForElementType<UE::Math::TTransform<double>_>)0x0) {
                FVar36 = local_3108.SecondaryData;
              }
              pdVar2 = (double *)(lVar40 + 0x20 + (longlong)FVar36);
              local_3288._s_0.X = *pdVar2;
              local_3288._s_0.Y = pdVar2[1];
              local_3288._s_0.Z = *(double *)(lVar40 + 0x30 + (longlong)FVar36);
              FAnimInstanceProxy::AnimDrawDebugLine
                        (param_1,(TVector<double> *)&local_3288._s_0,
                         (TVector<double> *)&local_32a0._s_0,(FColor *)&local_res18[0]._s_0,false,
                         0.0,fVar9,SDPG_World);
            }
            dVar18 = local_3228.Rotation.XY.m128d_f64[0];
            dVar19 = local_3228.Rotation.XY.m128d_f64[1];
            dVar20 = local_3228.Rotation.ZW.m128d_f64[0];
            dVar21 = local_3228.Rotation.ZW.m128d_f64[1];
            dVar22 = local_3228.Translation.XY.m128d_f64[0];
            dVar23 = local_3228.Translation.XY.m128d_f64[1];
            dVar24 = local_3228.Translation.ZW.m128d_f64[0];
            dVar25 = local_3228.Translation.ZW.m128d_f64[1];
            dVar26 = local_3228.Scale3D.XY.m128d_f64[0];
            dVar27 = local_3228.Scale3D.XY.m128d_f64[1];
            dVar28 = local_3228.Scale3D.ZW.m128d_f64[0];
            dVar29 = local_3228.Scale3D.ZW.m128d_f64[1];
            uVar39 = 0;
            if ((int)uVar38 < (int)local_f8[0]) {
              uVar39 = ~uVar38 >> 0x1f;
            }
            if ((uVar39 == 0) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar30)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            FVar36 = (ForElementType<UE::Math::TTransform<double>_>)&local_3108;
            if (local_3108.SecondaryData != (ForElementType<UE::Math::TTransform<double>_>)0x0) {
              FVar36 = local_3108.SecondaryData;
            }
            uVar38 = uVar38 + 1;
            *(double *)(lVar40 + (longlong)FVar36) = dVar18;
            ((double *)(lVar40 + (longlong)FVar36))[1] = dVar19;
            pdVar2 = (double *)(lVar40 + 0x10 + (longlong)FVar36);
            *pdVar2 = dVar20;
            pdVar2[1] = dVar21;
            pdVar2 = (double *)(lVar40 + 0x20 + (longlong)FVar36);
            *pdVar2 = dVar22;
            pdVar2[1] = dVar23;
            pdVar2 = (double *)(lVar40 + 0x30 + (longlong)FVar36);
            *pdVar2 = dVar24;
            pdVar2[1] = dVar25;
            pdVar2 = (double *)(lVar40 + 0x40 + (longlong)FVar36);
            *pdVar2 = dVar26;
            pdVar2[1] = dVar27;
            pdVar2 = (double *)(lVar40 + 0x50 + (longlong)FVar36);
            *pdVar2 = dVar28;
            pdVar2[1] = dVar29;
            lVar40 = lVar40 + 0x60;
          } while ((int)uVar38 < (this_00->ComponentSpaceRotations).ArrayNum);
        }
        uVar38 = (this->Entries).AfterBack;
        local_32a8 = local_32a8 + 1;
        uVar34 = (this->Entries).Front;
      } while ((int)local_32a8 < (int)(uVar38 - uVar34));
    }
    if (local_3108.SecondaryData != (ForElementType<UE::Math::TTransform<double>_>)0x0) {
      FMemory::Free((void *)local_3108.SecondaryData);
    }
  }
  LOCK();
  pFVar1 = &this->PoseDataThreadSafeCounter;
  FVar3 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + -1);
  UNLOCK();
  if (((((uint)FVar3 & 0xfff00000) != 0) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                          ,0x67,
                          L"Another thread asked to have a write access during this read access"),
     bVar30)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  return;
}

// EvaluateComponentSpace_AnyThread @ 14a8f4760

void __thiscall
UE::PoseSearch::FPoseHistory::EvaluateComponentSpace_AnyThread
          (FPoseHistory *this,float param_1,FCSPose<FCompactPose> *param_2,bool param_3,
          float param_4,float param_5,float param_6,bool param_7,bool param_8,
          TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_9,FBlendedCurve *param_10,
          TArrayView<FName_const_,int> *param_11)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  IComponentSpacePoseProvider local_28;
  FCSPose<FCompactPose> *local_20;
  
  local_28 = (IComponentSpacePoseProvider)&___7FComponentSpacePoseProvider_PoseSearch_UE__6B_;
  local_20 = param_2;
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)&(param_2->Pose).field_0x10 + 0x40));
  if (pUVar3 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSkeletonAsset()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchHistory.cpp"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EvaluateComponentSpace_AnyThread
            (this,param_1,&local_28,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10
             ,param_11);
  return;
}

// EvaluateComponentSpace_AnyThread @ 14a8f4870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::PoseSearch::FPoseHistory::EvaluateComponentSpace_AnyThread
          (FPoseHistory *this,float param_1,IComponentSpacePoseProvider *param_2,bool param_3,
          float param_4,float param_5,float param_6,bool param_7,bool param_8,
          TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_9,FBlendedCurve *param_10,
          TArrayView<FName_const_,int> *param_11)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  uint *puVar4;
  FRWFallbackSafeAccessDetectorDefinition *pFVar5;
  TRingBuffer<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_> *pTVar6;
  FRWFallbackSafeAccessDetectorDefinition FVar7;
  float fVar8;
  ushort uVar9;
  undefined1 *puVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  code *pcVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined1 auVar23 [12];
  double adVar24 [2];
  double adVar25 [2];
  bool bVar26;
  int iVar27;
  uint uVar28;
  USkeleton *pUVar29;
  FPoseHistoryEntry *pFVar30;
  TQuat<double> *pTVar31;
  FTransformTrajectorySample *pFVar32;
  TTransform<double> *pTVar33;
  undefined1 *puVar34;
  ulonglong uVar35;
  uint uVar36;
  int iVar37;
  ulonglong uVar38;
  longlong lVar39;
  longlong lVar40;
  ulonglong uVar41;
  longlong lVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar51;
  double dVar55;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  double dVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  double dVar60;
  undefined1 auVar61 [16];
  undefined4 uVar62;
  double dVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined4 uVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auStackY_558 [32];
  FPoseHistoryEntry local_508;
  undefined1 local_4b8 [8];
  uint local_4b0;
  float local_4ac;
  ushort *local_4a8;
  FScriptContainerElement *local_4a0;
  USkeleton *local_498;
  IComponentSpacePoseProvider *local_490;
  USkeleton *local_488 [2];
  double local_478 [2];
  FPoseHistoryEntry local_468;
  TArrayView<FName_const_,int> local_418;
  double local_408;
  double local_3f0;
  TQuat<double> local_3e8;
  TQuat<double> local_3c8;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double local_390;
  double dStack_388;
  double local_380;
  undefined1 local_378 [16];
  double local_368;
  undefined1 local_360 [16];
  double local_350;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  double local_338;
  TTransform<double> local_328;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  TQuat<double> local_2a8;
  FTransformTrajectorySample local_288;
  FTransformTrajectorySample local_248;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_558;
  local_478[0] = (double)param_10;
  local_4ac = param_4;
  LOCK();
  pFVar5 = &this->PoseDataThreadSafeCounter;
  FVar7 = *pFVar5;
  *pFVar5 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar5 + 0x100000);
  UNLOCK();
  local_490 = param_2;
  if (((FVar7 != (FRWFallbackSafeAccessDetectorDefinition)0x0) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                          ,0x72,
                          L"Acquiring a write access while there are ongoing read or write access"),
     bVar26)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  if ((this->MaxNumPoses < 2) &&
     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("MaxNumPoses >= 2",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchHistory.cpp"
                          ,0x3b9,L""), bVar26)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pUVar29 = (USkeleton *)(**(code **)((longlong)*param_2 + 0x10))(param_2);
  local_498 = pUVar29;
  if (param_8) {
    local_4b0 = this->BoneToTransformMapTypeHash;
    TSet<TTuple<unsigned_short,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<unsigned_short,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>,FDefaultSetAllocator>
             *)&this->BoneToTransformMap);
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=<FName_const_,int>
              (&this->CollectedCurves,param_11);
    if (param_9->ArrayNum != 0) {
      local_4a8 = &RootBoneIndexType;
      TSet<TTuple<unsigned_short,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<unsigned_short_const_&>_>
                ((TSet<TTuple<unsigned_short,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>,FDefaultSetAllocator>
                  *)&this->BoneToTransformMap,(TKeyInitializer<unsigned_short_const_&> *)local_4b8,
                 (bool *)&local_4a8);
      uVar38 = 0;
      *(undefined2 *)
       (*(longlong *)&this->BoneToTransformMap + 2 + (longlong)(int)local_4b8._0_4_ * 0xc) = 0;
      iVar37 = param_9->ArrayNum;
      uVar35 = uVar38;
      if (0 < iVar37) {
        do {
          uVar36 = (uint)uVar38;
          uVar28 = 0;
          if ((int)uVar36 < iVar37) {
            uVar28 = ~uVar36 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar9 = *(ushort *)((param_9->AllocatorInstance).Data + uVar35);
          iVar37 = *(int *)&(this->BoneToTransformMap).field_0x8 -
                   *(int *)&(this->BoneToTransformMap).field_0x34;
          if (iVar37 != 0) {
            puVar10 = *(undefined1 **)&(this->BoneToTransformMap).field_0x40;
            puVar34 = &(this->BoneToTransformMap).field_0x38;
            if (puVar10 != (undefined1 *)0x0) {
              puVar34 = puVar10;
            }
            iVar27 = *(int *)(puVar34 +
                             ((ulonglong)(*(int *)&(this->BoneToTransformMap).field_0x48 - 1) &
                             (ulonglong)uVar9) * 4);
            if (iVar27 != -1) {
              do {
                lVar39 = *(longlong *)&this->BoneToTransformMap + (longlong)iVar27 * 0xc;
                if (*(ushort *)(*(longlong *)&this->BoneToTransformMap + (longlong)iVar27 * 0xc) ==
                    uVar9) {
                  lVar40 = lVar39 + 2;
                  if (lVar39 == 0) {
                    lVar40 = 0;
                  }
                  if (lVar40 != 0) goto LAB_14a8f4b39;
                  break;
                }
                iVar27 = *(int *)(lVar39 + 4);
              } while (iVar27 != -1);
            }
          }
          uVar28 = 0;
          if ((int)uVar36 < param_9->ArrayNum) {
            uVar28 = ~uVar36 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          local_4a0 = (param_9->AllocatorInstance).Data + (longlong)(int)uVar36 * 2;
          TSet<TTuple<unsigned_short,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>,FDefaultSetAllocator>
          ::Emplace<TKeyInitializer<unsigned_short_const_&>_>
                    ((TSet<TTuple<unsigned_short,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>,FDefaultSetAllocator>
                      *)&this->BoneToTransformMap,
                     (TKeyInitializer<unsigned_short_const_&> *)(local_4b8 + 4),(bool *)&local_4a0);
          *(short *)(*(longlong *)&this->BoneToTransformMap + 2 +
                    (longlong)(int)local_4b8._4_4_ * 0xc) = (short)iVar37;
LAB_14a8f4b39:
          iVar37 = param_9->ArrayNum;
          uVar38 = (ulonglong)(uVar36 + 1);
          param_2 = local_490;
          pUVar29 = local_498;
          uVar35 = uVar35 + 2;
        } while ((int)(uVar36 + 1) < iVar37);
      }
    }
    uVar28 = PoseSearch::GetTypeHash(&this->BoneToTransformMap);
    if (local_4b0 != uVar28) {
      param_7 = true;
    }
    this->BoneToTransformMapTypeHash = uVar28;
  }
  bVar26 = TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>::UEOpEquals<USkeleton,bool>
                     (&this->LastUpdateSkeleton,pUVar29);
  if (bVar26) {
    if (param_7 == false) goto LAB_14a8f4bfb;
  }
  else {
    local_488[0] = pUVar29;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar29 != (USkeleton *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar29);
    }
    FWeakObjectPtr::operator=(&(this->LastUpdateSkeleton).WeakPtr,(FObjectPtr)local_488);
  }
  pTVar6 = &this->Entries;
  TRingBuffer<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_>::DestructRange
            (pTVar6,(this->Entries).Front,(this->Entries).AfterBack);
  (this->Entries).Front = 0;
  (this->Entries).AfterBack = 0;
  uVar28 = TRingBuffer<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_>::
           NormalizeCapacity(pTVar6,this->MaxNumPoses);
  if ((this->Entries).IndexMask + 1 < uVar28) {
    TRingBuffer<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_>::Reallocate
              (pTVar6,uVar28);
  }
LAB_14a8f4bfb:
  iVar37 = 0;
  uVar28 = (this->Entries).Front;
  uVar36 = (this->Entries).AfterBack;
  local_508.ComponentSpaceRotations.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_508.ComponentSpaceRotations.ArrayNum = 0;
  local_508.ComponentSpaceRotations.ArrayMax = 0;
  local_508.ComponentSpacePositions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_508.ComponentSpacePositions.ArrayNum = 0;
  local_508.ComponentSpacePositions.ArrayMax = 0;
  local_508.ComponentSpaceScales.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_508.ComponentSpaceScales.ArrayNum = 0;
  local_508.ComponentSpaceScales.ArrayMax = 0;
  local_508.CurveValues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_508.CurveValues.ArrayNum = 0;
  local_508.CurveValues.ArrayMax = 0;
  local_508.AccumulatedSeconds = 0.0;
  if ((uVar36 != uVar28) &&
     (pFVar30 = TRingBuffer<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_>::
                operator[](&this->Entries,(uVar36 - uVar28) + -1), 0.0 < pFVar30->AccumulatedSeconds
     )) {
    pFVar30 = TRingBuffer<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_>::operator[]
                        (&this->Entries,((this->Entries).AfterBack - (this->Entries).Front) + -1);
    if (&local_508 != pFVar30) {
      if (local_508.ComponentSpaceRotations.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_508.ComponentSpaceRotations.AllocatorInstance.Data);
      }
      local_508.ComponentSpaceRotations.AllocatorInstance.Data =
           (pFVar30->ComponentSpaceRotations).AllocatorInstance.Data;
      (pFVar30->ComponentSpaceRotations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_508.ComponentSpaceRotations.ArrayNum = (pFVar30->ComponentSpaceRotations).ArrayNum;
      local_508.ComponentSpaceRotations.ArrayMax = (pFVar30->ComponentSpaceRotations).ArrayMax;
      (pFVar30->ComponentSpaceRotations).ArrayNum = 0;
      (pFVar30->ComponentSpaceRotations).ArrayMax = 0;
    }
    pTVar1 = &pFVar30->ComponentSpacePositions;
    if (&local_508.ComponentSpacePositions != pTVar1) {
      if (local_508.ComponentSpacePositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_508.ComponentSpacePositions.AllocatorInstance.Data);
      }
      local_508.ComponentSpacePositions.AllocatorInstance.Data = (pTVar1->AllocatorInstance).Data;
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_508.ComponentSpacePositions.ArrayNum = (pFVar30->ComponentSpacePositions).ArrayNum;
      local_508.ComponentSpacePositions.ArrayMax = (pFVar30->ComponentSpacePositions).ArrayMax;
      (pFVar30->ComponentSpacePositions).ArrayNum = 0;
      (pFVar30->ComponentSpacePositions).ArrayMax = 0;
    }
    pTVar2 = &pFVar30->ComponentSpaceScales;
    if (&local_508.ComponentSpaceScales != pTVar2) {
      if (local_508.ComponentSpaceScales.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_508.ComponentSpaceScales.AllocatorInstance.Data);
      }
      local_508.ComponentSpaceScales.AllocatorInstance.Data = (pTVar2->AllocatorInstance).Data;
      (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_508.ComponentSpaceScales.ArrayNum = (pFVar30->ComponentSpaceScales).ArrayNum;
      local_508.ComponentSpaceScales.ArrayMax = (pFVar30->ComponentSpaceScales).ArrayMax;
      (pFVar30->ComponentSpaceScales).ArrayNum = 0;
      (pFVar30->ComponentSpaceScales).ArrayMax = 0;
    }
    pTVar3 = &pFVar30->CurveValues;
    if (&local_508.CurveValues != pTVar3) {
      if (local_508.CurveValues.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_508.CurveValues.AllocatorInstance.Data);
      }
      local_508.CurveValues.AllocatorInstance.Data = (pTVar3->AllocatorInstance).Data;
      (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_508.CurveValues.ArrayNum = (pFVar30->CurveValues).ArrayNum;
      local_508.CurveValues.ArrayMax = (pFVar30->CurveValues).ArrayMax;
      (pFVar30->CurveValues).ArrayNum = 0;
      (pFVar30->CurveValues).ArrayMax = 0;
    }
    local_508.AccumulatedSeconds = pFVar30->AccumulatedSeconds;
    if (((this->Entries).AfterBack == (this->Entries).Front) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("PopCount <= static_cast<SizeType>(Num())",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                            ,0x3ec,
                            L"RingBuffer PopCount out of bounds: %i from a RingBuffer of size %i"),
       bVar26)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    uVar28 = (this->Entries).AfterBack;
    TRingBuffer<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_>::DestructRange
              (&this->Entries,uVar28 - 1,uVar28);
    puVar4 = &(this->Entries).AfterBack;
    *puVar4 = *puVar4 - 1;
  }
  uVar28 = (this->Entries).AfterBack;
  uVar36 = (this->Entries).Front;
  for (; iVar37 != uVar28 - uVar36; iVar37 = iVar37 + 1) {
    pFVar30 = TRingBuffer<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_>::operator[]
                        (&this->Entries,iVar37);
    pFVar30->AccumulatedSeconds = pFVar30->AccumulatedSeconds - param_1;
  }
  iVar37 = (this->Entries).AfterBack - (this->Entries).Front;
  if (iVar37 == this->MaxNumPoses) {
    fVar8 = this->SamplingInterval;
    if ((fVar8 <= 0.0) ||
       (pFVar30 = TRingBuffer<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_>::
                  operator[](&this->Entries,iVar37 + -2),
       pFVar30->AccumulatedSeconds <= (float)((uint)fVar8 ^ __xmm_80000000800000008000000080000000))
       ) {
      pFVar30 = TRingBuffer<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_>::
                operator[](&this->Entries,0);
      local_468.ComponentSpaceRotations.AllocatorInstance.Data =
           (pFVar30->ComponentSpaceRotations).AllocatorInstance.Data;
      (pFVar30->ComponentSpaceRotations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_468.ComponentSpaceRotations.ArrayNum = (pFVar30->ComponentSpaceRotations).ArrayNum;
      local_468.ComponentSpaceRotations.ArrayMax = (pFVar30->ComponentSpaceRotations).ArrayMax;
      (pFVar30->ComponentSpaceRotations).ArrayNum = 0;
      (pFVar30->ComponentSpaceRotations).ArrayMax = 0;
      local_468.ComponentSpacePositions.AllocatorInstance.Data =
           (pFVar30->ComponentSpacePositions).AllocatorInstance.Data;
      (pFVar30->ComponentSpacePositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_468.ComponentSpacePositions.ArrayNum = (pFVar30->ComponentSpacePositions).ArrayNum;
      local_468.ComponentSpacePositions.ArrayMax = (pFVar30->ComponentSpacePositions).ArrayMax;
      (pFVar30->ComponentSpacePositions).ArrayNum = 0;
      (pFVar30->ComponentSpacePositions).ArrayMax = 0;
      local_468.ComponentSpaceScales.AllocatorInstance.Data =
           (pFVar30->ComponentSpaceScales).AllocatorInstance.Data;
      (pFVar30->ComponentSpaceScales).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_468.ComponentSpaceScales.ArrayNum = (pFVar30->ComponentSpaceScales).ArrayNum;
      local_468.ComponentSpaceScales.ArrayMax = (pFVar30->ComponentSpaceScales).ArrayMax;
      (pFVar30->ComponentSpaceScales).ArrayNum = 0;
      (pFVar30->ComponentSpaceScales).ArrayMax = 0;
      local_468.CurveValues.AllocatorInstance.Data = (pFVar30->CurveValues).AllocatorInstance.Data;
      (pFVar30->CurveValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_468.CurveValues.ArrayNum = (pFVar30->CurveValues).ArrayNum;
      local_468.CurveValues.ArrayMax = (pFVar30->CurveValues).ArrayMax;
      (pFVar30->CurveValues).ArrayNum = 0;
      (pFVar30->CurveValues).ArrayMax = 0;
      local_468.AccumulatedSeconds = pFVar30->AccumulatedSeconds;
      if (((this->Entries).AfterBack == (this->Entries).Front) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("PopCount <= static_cast<SizeType>(Num())",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                              ,0x3ec,
                              L"RingBuffer PopCount out of bounds: %i from a RingBuffer of size %i")
         , bVar26)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      uVar28 = (this->Entries).Front;
      TRingBuffer<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_>::DestructRange
                (&this->Entries,uVar28,uVar28 + 1);
      puVar4 = &(this->Entries).Front;
      *puVar4 = *puVar4 + 1;
      TRingBuffer<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_>::
      Emplace<UE::PoseSearch::FPoseHistoryEntry>(&this->Entries,&local_468);
      if (local_468.CurveValues.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_468.CurveValues.AllocatorInstance.Data);
      }
      if (local_468.ComponentSpaceScales.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_468.ComponentSpaceScales.AllocatorInstance.Data);
      }
      if (local_468.ComponentSpacePositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_468.ComponentSpacePositions.AllocatorInstance.Data);
      }
      if (local_468.ComponentSpaceRotations.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_468.ComponentSpaceRotations.AllocatorInstance.Data);
      }
    }
  }
  else {
    pTVar6 = &this->Entries;
    uVar28 = TRingBuffer<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_>::
             NormalizeCapacity(pTVar6,iVar37 + 1);
    if ((this->Entries).IndexMask + 1 < uVar28) {
      TRingBuffer<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_>::Reallocate
                (pTVar6,uVar28);
    }
    uVar28 = (this->Entries).AfterBack;
    (this->Entries).AfterBack = uVar28 + 1;
    uVar35 = (ulonglong)(uVar28 & (this->Entries).IndexMask);
    pFVar11 = (pTVar6->AllocatorInstance).Data;
    *(undefined8 *)(pFVar11 + uVar35 * 0x48 + 0x40) = 0;
    *(undefined8 *)(pFVar11 + uVar35 * 0x48) = 0;
    *(undefined8 *)(pFVar11 + uVar35 * 0x48 + 8) = 0;
    *(undefined8 *)(pFVar11 + uVar35 * 0x48 + 0x10) = 0;
    *(undefined8 *)(pFVar11 + uVar35 * 0x48 + 0x18) = 0;
    *(undefined8 *)(pFVar11 + uVar35 * 0x48 + 0x20) = 0;
    *(undefined8 *)(pFVar11 + uVar35 * 0x48 + 0x28) = 0;
    *(undefined8 *)(pFVar11 + uVar35 * 0x48 + 0x30) = 0;
    *(undefined8 *)(pFVar11 + uVar35 * 0x48 + 0x38) = 0;
  }
  pFVar30 = TRingBuffer<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_>::operator[]
                      (&this->Entries,((this->Entries).AfterBack - (this->Entries).Front) + -1);
  local_418.DataPtr = (FName *)(this->CollectedCurves).AllocatorInstance.Data;
  local_418.ArrayNum = (this->CollectedCurves).ArrayNum;
  if ((local_418.ArrayNum < 0) &&
     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar26)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  FPoseHistoryEntry::Update
            (pFVar30,0.0,param_2,&this->BoneToTransformMap,param_3,(FBlendedCurve *)local_478[0],
             &local_418);
  if ((0.0 < param_4) && ((this->Trajectory).Samples.ArrayNum != 0)) {
    if (((pUVar29->ReferenceSkeleton).FinalRefBonePose.ArrayNum < 1) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar26)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pFVar11 = (pUVar29->ReferenceSkeleton).FinalRefBonePose.AllocatorInstance.Data;
    local_3c8.X = *(double *)pFVar11;
    local_3c8.Y = *(double *)(pFVar11 + 8);
    local_3c8.Z = *(double *)(pFVar11 + 0x10);
    local_3c8.W = *(double *)(pFVar11 + 0x18);
    if (((pFVar30->ComponentSpaceRotations).ArrayNum < 1) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar26)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pFVar12 = (pFVar30->ComponentSpaceRotations).AllocatorInstance.Data;
    uVar35 = *(ulonglong *)(pFVar12 + 8);
    auVar57._8_8_ = 0;
    auVar57._0_8_ = uVar35;
    local_3e8.Y = (double)*(float *)(pFVar12 + 4);
    local_3e8.X = (double)*(float *)pFVar12;
    local_3e8.Z = (double)(float)uVar35;
    local_3e8.W = (double)(float)(uVar35 >> 0x20);
    pTVar31 = UE::Math::TQuat<double>::Slerp_NotNormalized
                        (&local_2a8,&local_3e8,&local_3c8,(double)param_6);
    local_2c8 = pTVar31->X;
    dStack_2c0 = pTVar31->Y;
    local_2b8 = pTVar31->Z;
    dStack_2b0 = pTVar31->W;
    local_408 = __real_3e45798ee0000000;
    dVar51 = local_2c8 * local_2c8 + local_2b8 * local_2b8;
    dVar55 = dStack_2c0 * dStack_2c0 + dStack_2b0 * dStack_2b0;
    auVar76._8_4_ = SUB84(dVar55,0);
    auVar76._0_8_ = dVar51;
    auVar76._12_4_ = (int)((ulonglong)dVar55 >> 0x20);
    auVar43._0_8_ = auVar76._8_8_ + dVar51;
    auVar43._8_8_ = dVar51 + dVar55;
    auVar58 = sqrtpd(auVar57,auVar43);
    uVar38 = -(ulonglong)(__real_3e45798ee0000000 <= auVar43._0_8_);
    uVar41 = -(ulonglong)(__real_3e45798ee0000000 <= auVar43._8_8_);
    auVar76 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar58);
    auVar58 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar58);
    uVar28 = (uint)(uVar38 >> 0x20);
    uVar36 = (uint)(uVar41 >> 0x20);
    auVar77._0_8_ = uVar38 & (ulonglong)(auVar76._0_8_ * local_2c8);
    uVar35 = uVar41 & (ulonglong)(auVar76._8_8_ * dStack_2c0);
    auVar77._8_4_ = (undefined4)uVar35;
    auVar77._12_4_ = (undefined4)(uVar35 >> 0x20);
    auVar68._0_4_ = ~(uint)uVar38 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
    auVar68._4_4_ =
         ~uVar28 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
    auVar68._8_4_ = ~(uint)uVar41 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    auVar68._12_4_ =
         ~uVar36 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    auVar52._0_8_ = (ulonglong)(auVar58._0_8_ * local_2b8) & uVar38;
    uVar35 = (ulonglong)(auVar58._8_8_ * dStack_2b0) & uVar41;
    auVar52._8_4_ = (undefined4)uVar35;
    auVar52._12_4_ = (undefined4)(uVar35 >> 0x20);
    auVar64._0_4_ = ~(uint)uVar38 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
    auVar64._4_4_ =
         ~uVar28 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
    auVar64._8_4_ = ~(uint)uVar41 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar64._12_4_ =
         ~uVar36 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_478 = (double  [2])(auVar68 | auVar52);
    auVar48._8_8_ = 0;
    auVar48._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_328.Rotation.XY.m128d_f64 = (double  [2])(auVar77 | auVar64);
    local_3f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    auVar58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_16_;
    if (0.0 < param_5) {
      pFVar32 = FTransformTrajectory::GetSampleAtTime(&this->Trajectory,&local_288,0.0,false);
      adVar25 = ___xmm_3ff00000000000003ff0000000000000;
      adVar24 = ___xmm_00000000000000003ff0000000000000;
      local_1a8.Rotation.ZW.m128d_f64[0] = (pFVar32->Facing).Z;
      local_1a8.Rotation.ZW.m128d_f64[1] = (pFVar32->Facing).W;
      local_1a8.Rotation.XY.m128d_f64[0] = (pFVar32->Facing).X;
      local_1a8.Rotation.XY.m128d_f64[1] = (pFVar32->Facing).Y;
      local_1a8.Translation.XY.m128d_f64[0] = (pFVar32->Position).field0_0x0._s_0.X;
      local_1a8.Translation.XY.m128d_f64[1] = (pFVar32->Position).field0_0x0._s_0.Y;
      local_1a8.Translation.ZW.m128d_f64[0] = (pFVar32->Position).field0_0x0._s_0.Z;
      local_1a8.Translation.ZW.m128d_f64[1] = 0.0;
      local_1a8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
      local_1a8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
      local_1a8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
      local_1a8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
      pTVar33 = FPoseHistoryEntry::GetComponentSpaceTransform(pFVar30,&local_148,0);
      local_208.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_208.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_208.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_208.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_208.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_208.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_208.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_208.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_208.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_208.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_208.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_208.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      UE::Math::TTransform<double>::Multiply(&local_208,pTVar33,&local_1a8);
      dVar56 = (double)param_5;
      local_398 = local_208.Translation.ZW.m128d_f64[0];
      local_3a8 = local_208.Translation.XY.m128d_f64[0];
      dStack_3a0 = local_208.Translation.XY.m128d_f64[1];
      local_390 = local_1a8.Translation.XY.m128d_f64[0];
      dStack_388 = local_1a8.Translation.XY.m128d_f64[1];
      local_380 = local_1a8.Translation.ZW.m128d_f64[0];
      dVar20 = (local_208.Translation.XY.m128d_f64[0] - local_1a8.Translation.XY.m128d_f64[0]) *
               dVar56;
      dVar63 = (local_208.Translation.ZW.m128d_f64[0] - local_1a8.Translation.ZW.m128d_f64[0]) *
               dVar56;
      dVar56 = (local_208.Translation.XY.m128d_f64[1] - local_1a8.Translation.XY.m128d_f64[1]) *
               dVar56;
      pFVar32 = FTransformTrajectory::GetSampleAtTime(&this->Trajectory,&local_248,param_4,false);
      dVar51 = (pFVar32->Facing).X * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar55 = (pFVar32->Facing).Y * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      uVar62 = (undefined4)((ulonglong)dVar55 >> 0x20);
      dVar16 = (pFVar32->Facing).Z * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar17 = (pFVar32->Facing).W * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      auVar59._8_4_ = SUB84(dVar55,0);
      auVar59._0_8_ = dVar51;
      auVar59._12_4_ = uVar62;
      auVar61._8_4_ = SUB84(dVar55,0);
      auVar61._0_8_ = dVar51;
      auVar61._12_4_ = uVar62;
      dVar60 = auVar59._8_8_;
      uVar62 = SUB84(dVar56,0);
      uVar67 = (undefined4)((ulonglong)dVar56 >> 0x20);
      auVar44._8_4_ = SUB84(dVar16,0);
      auVar44._0_8_ = dVar60;
      auVar44._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
      auVar14._8_4_ = SUB84(dVar17,0);
      auVar14._0_8_ = dVar16;
      auVar14._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
      auVar76 = blendpd(auVar61,auVar14,2);
      auVar71._8_4_ = uVar62;
      auVar71._0_8_ = dVar20;
      auVar71._12_4_ = uVar67;
      auVar53._8_4_ = uVar62;
      auVar53._0_8_ = dVar20;
      auVar53._12_4_ = uVar67;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = dVar63;
      auVar58 = blendpd(auVar53,auVar21,2);
      local_378._8_4_ = uVar62;
      local_378._0_8_ = dVar20;
      local_378._12_4_ = uVar67;
      auVar72._0_8_ = auVar71._8_8_ * dVar51 - dVar60 * dVar20;
      auVar72._8_8_ = dVar63 * dVar55 - auVar44._8_8_ * dVar56;
      auVar54._0_8_ = auVar58._0_8_ * dVar16 - auVar76._0_8_ * dVar63;
      auVar54._8_8_ = auVar58._8_8_ * dVar17 - auVar76._8_8_ * 0.0;
      auVar58 = blendpd(auVar72,auVar54,2);
      auVar73._0_8_ = auVar58._0_8_ + auVar58._0_8_;
      auVar73._8_8_ = auVar58._8_8_ + auVar58._8_8_;
      dVar18 = auVar72._8_8_ + auVar72._8_8_;
      dVar19 = auVar54._0_8_ + auVar54._0_8_;
      uVar62 = SUB84(dVar19,0);
      uVar67 = (undefined4)((ulonglong)dVar19 >> 0x20);
      auVar69._8_4_ = uVar62;
      auVar69._0_8_ = dVar18;
      auVar69._12_4_ = uVar67;
      auVar45._8_4_ = uVar62;
      auVar45._0_8_ = dVar18;
      auVar45._12_4_ = uVar67;
      auVar65._8_4_ = uVar62;
      auVar65._0_8_ = dVar18;
      auVar65._12_4_ = uVar67;
      auVar58 = blendpd(auVar65,auVar73,2);
      auVar70._0_8_ = auVar69._8_8_ * dVar51 - dVar18 * dVar60;
      auVar70._8_8_ = auVar73._0_8_ * dVar55 - auVar45._8_8_ * dVar16;
      auVar46._8_4_ = SUB84(auVar73._8_8_,0);
      auVar46._0_8_ = auVar73._0_8_;
      auVar46._12_4_ = (int)((ulonglong)auVar73._8_8_ >> 0x20);
      auVar66._0_8_ = auVar58._0_8_ * dVar16 - auVar73._0_8_ * auVar76._0_8_;
      auVar66._8_8_ = auVar58._8_8_ * dVar17 - auVar46._8_8_ * auVar76._8_8_;
      auVar74._0_8_ =
           (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & adVar25[0]._4_4_,
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff & adVar25[0]._0_4_);
      auVar74._8_4_ = _UNK_15061cc88 & adVar25[1]._0_4_;
      auVar74._12_4_ = _UNK_15061cc8c & adVar25[1]._4_4_;
      lVar39 = -(ulonglong)
                ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & adVar24[0]._4_4_,
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff & adVar24[0]._0_4_)
                <= (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
      auVar58 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                      (undefined1  [16])adVar25);
      lVar40 = -(ulonglong)(auVar74._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0])
      ;
      lVar42 = -(ulonglong)(auVar74._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1])
      ;
      auVar47._8_4_ = SUB84(auVar70._8_8_,0);
      auVar47._0_8_ = auVar70._0_8_;
      auVar47._12_4_ = (int)((ulonglong)auVar70._8_8_ >> 0x20);
      auVar75._0_8_ =
           (double)CONCAT44(~(uint)((ulonglong)lVar40 >> 0x20) & auVar58._4_4_,
                            ~(uint)lVar40 & auVar58._0_4_);
      auVar75._8_4_ = ~(uint)lVar42 & auVar58._8_4_;
      auVar75._12_4_ = ~(uint)((ulonglong)lVar42 >> 0x20) & auVar58._12_4_;
      auVar15._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar15._0_8_ = adVar24[0];
      auVar15._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar48 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar15);
      auVar76 = blendpd(auVar70,auVar66,2);
      auVar58._0_8_ = auVar75._0_8_ * (dVar18 * dVar17 + dVar20 + auVar47._8_8_);
      auVar58._8_8_ = auVar75._8_8_ * (dVar19 * dVar17 + dVar56 + auVar66._0_8_);
      local_3f0 = (double)CONCAT44(~(uint)((ulonglong)lVar39 >> 0x20) & auVar48._4_4_,
                                   ~(uint)lVar39 & auVar48._0_4_) *
                  (auVar73._0_8_ * dVar17 + dVar63 + auVar76._0_8_);
      param_4 = local_4ac;
      local_368 = dVar63;
      local_360 = auVar58;
      local_350 = local_3f0;
    }
    local_348 = *(undefined4 *)(pFVar11 + 0x40);
    uStack_344 = *(undefined4 *)(pFVar11 + 0x44);
    uStack_340 = *(undefined4 *)(pFVar11 + 0x48);
    uStack_33c = *(undefined4 *)(pFVar11 + 0x4c);
    local_338 = *(double *)(pFVar11 + 0x50);
    auVar22._4_8_ = auVar48._8_8_;
    auVar22._0_4_ = auVar58._4_4_;
    auVar49._0_8_ = auVar22._0_8_ << 0x20;
    auVar49._8_4_ = auVar58._8_4_;
    auVar49._12_4_ = auVar58._12_4_;
    local_328.Translation.XY.m128d_f64[1] = auVar49._8_8_;
    local_328.Translation.XY.m128d_f64[0] = auVar58._0_8_;
    auVar23._4_8_ = local_328.Translation.XY.m128d_f64[1];
    auVar23._0_4_ = uStack_344;
    auVar50._0_8_ = auVar23._0_8_ << 0x20;
    auVar50._8_4_ = uStack_340;
    auVar50._12_4_ = uStack_33c;
    local_328.Scale3D.XY.m128d_f64[1] = auVar50._8_8_;
    local_328.Translation.ZW.m128d_f64[0] = local_3f0;
    local_328.Translation.ZW.m128d_f64[1] = 0.0;
    local_328.Scale3D.ZW.m128d_f64[1] = 0.0;
    local_328.Rotation.ZW.m128d_f64 = local_478;
    local_328.Scale3D.XY.m128d_f64[0]._0_4_ = local_348;
    local_328.Scale3D.XY.m128d_f64[0]._4_4_ = uStack_344;
    local_328.Scale3D.ZW.m128d_f64[0] = local_338;
    FPoseHistoryEntry::SetNum(&local_508,1,param_3);
    FPoseHistoryEntry::SetComponentSpaceTransform(&local_508,0,&local_328);
    local_508.AccumulatedSeconds = param_4;
    TRingBuffer<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_>::
    Emplace<UE::PoseSearch::FPoseHistoryEntry>(&this->Entries,&local_508);
  }
  if (local_508.CurveValues.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_508.CurveValues.AllocatorInstance.Data);
  }
  if (local_508.ComponentSpaceScales.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_508.ComponentSpaceScales.AllocatorInstance.Data);
  }
  if (local_508.ComponentSpacePositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_508.ComponentSpacePositions.AllocatorInstance.Data);
  }
  if (local_508.ComponentSpaceRotations.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_508.ComponentSpaceRotations.AllocatorInstance.Data);
  }
  LOCK();
  pFVar5 = &this->PoseDataThreadSafeCounter;
  FVar7 = *pFVar5;
  *pFVar5 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar5 + -0x100000);
  UNLOCK();
  if (((FVar7 != (FRWFallbackSafeAccessDetectorDefinition)0x100000) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                          ,0x7d,
                          L"Another thread asked to have a read or write access during this write access"
                         ), bVar26)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  return;
}

// GenerateTrajectory @ 14a8f8ff0

void __thiscall
UE::PoseSearch::FPoseHistory::GenerateTrajectory
          (FPoseHistory *this,UObject *param_1,float param_2,FPoseSearchTrajectoryData *param_3,
          FSampling *param_4)

{
  bool bVar1;
  FTransformTrajectory *pFVar2;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_e8;
  double dStack_d0;
  FDerived local_c8;
  
  local_c8.ControllerYawRate = 0.0;
  local_c8.MaxSpeed = 0.0;
  local_c8.BrakingDeceleration = 0.0;
  local_c8.BrakingSubStepTime = 0.0;
  local_c8.Velocity.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_c8.Velocity.field0_0x0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_c8.Acceleration.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_c8.Acceleration.field0_0x0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_c8.Position.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_c8.Position.field0_0x0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_c8.Friction = 0.0;
  local_c8.Velocity.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_c8.Acceleration.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_c8.Position.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_c8.Facing.X = UE::Math::TQuat<double>::Identity.X;
  local_c8.Facing.Y = UE::Math::TQuat<double>::Identity.Y;
  local_c8.MeshCompRelativeRotation.X = UE::Math::TQuat<double>::Identity.X;
  local_c8.MeshCompRelativeRotation.Y = UE::Math::TQuat<double>::Identity.Y;
  local_c8.Facing.Z = UE::Math::TQuat<double>::Identity.Z;
  local_c8.Facing.W = UE::Math::TQuat<double>::Identity.W;
  local_c8.MeshCompRelativeRotation.Z = UE::Math::TQuat<double>::Identity.Z;
  local_c8.MeshCompRelativeRotation.W = UE::Math::TQuat<double>::Identity.W;
  local_c8.bOrientRotationToMovement = false;
  local_c8.bStepGroundPrediction = true;
  bVar1 = FPoseSearchTrajectoryData::UpdateData
                    (param_3,param_2,param_1,&local_c8,&this->TrajectoryDataState);
  if (bVar1) {
    pFVar2 = &this->Trajectory;
    local_e8._s_0.X = local_c8.Facing.X;
    local_e8._s_0.Y = local_c8.Facing.Y;
    local_e8._s_0.Z = local_c8.Facing.Z;
    dStack_d0 = local_c8.Facing.W;
    local_108._s_0.X = local_c8.Position.field0_0x0._s_0.X;
    local_108._s_0.Y = local_c8.Position.field0_0x0._s_0.Y;
    local_108._s_0.Z = local_c8.Position.field0_0x0._s_0.Z;
    UPoseSearchTrajectoryLibrary::InitTrajectorySamples
              (pFVar2,(TVector<double> *)&local_108._s_0,(TQuat<double> *)&local_e8._s_0,param_4,
               param_2);
    local_108._s_0.X = local_c8.Velocity.field0_0x0._s_0.X;
    local_108._s_0.Y = local_c8.Velocity.field0_0x0._s_0.Y;
    local_108._s_0.Z = local_c8.Velocity.field0_0x0._s_0.Z;
    local_e8._s_0.X = local_c8.Position.field0_0x0._s_0.X;
    local_e8._s_0.Y = local_c8.Position.field0_0x0._s_0.Y;
    local_e8._s_0.Z = local_c8.Position.field0_0x0._s_0.Z;
    UPoseSearchTrajectoryLibrary::UpdateHistory_TransformHistory
              (pFVar2,(TVector<double> *)&local_e8._s_0,(TVector<double> *)&local_108._s_0,param_4,
               param_2);
    UPoseSearchTrajectoryLibrary::UpdatePrediction_SimulateCharacterMovement
              (pFVar2,param_3,&local_c8,param_4,param_2);
  }
  return;
}

// GenerateTrajectory @ 14a8f9160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::PoseSearch::FPoseHistory::GenerateTrajectory(FPoseHistory *this,UObject *param_1,float param_2)

{
  undefined1 auStackY_1a8 [32];
  FSampling local_178;
  undefined1 local_168 [88];
  void *local_110;
  undefined4 local_108;
  void *local_100;
  ForAnyElementType local_e8;
  bool local_d0;
  undefined1 local_c8 [72];
  void *local_80;
  undefined4 local_78;
  void *local_70;
  ForAnyElementType local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_178.NumHistorySamples = 0;
  local_178.SecondsPerHistorySample = 0.0;
  local_178.NumPredictionSamples = 0;
  local_178.SecondsPerPredictionSample = 0.0;
  memset(local_168 + 0xd,0,0x11b);
  local_168._0_4_ = 10.0;
  local_168._4_4_ = 70.0;
  local_168._8_4_ = 0.0;
  local_168[0xc] = false;
  FRuntimeFloatCurve::FRuntimeFloatCurve((FRuntimeFloatCurve *)(local_168 + 0x10));
  local_d0 = false;
  FRuntimeFloatCurve::FRuntimeFloatCurve((FRuntimeFloatCurve *)local_c8);
  GenerateTrajectory(this,param_1,param_2,(FPoseSearchTrajectoryData *)local_168,&local_178);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  local_c8._0_8_ = &___7FIndexedCurve__6B_;
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  local_78 = 0;
  if (local_80 != (void *)0x0) {
    FMemory::Free(local_80);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_c8 + 8));
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  local_168._16_8_ = &___7FIndexedCurve__6B_;
  if (local_100 != (void *)0x0) {
    FMemory::Free(local_100);
  }
  local_108 = 0;
  if (local_110 != (void *)0x0) {
    FMemory::Free(local_110);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_168 + 0x18));
  return;
}

// GetBoneToTransformMap @ 14a8f9710

TMap<unsigned_short,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>_>
* __thiscall UE::PoseSearch::FPoseHistory::GetBoneToTransformMap(FPoseHistory *this)

{
  FRWFallbackSafeAccessDetectorDefinition *pFVar1;
  FRWFallbackSafeAccessDetectorDefinition FVar2;
  code *pcVar3;
  bool bVar4;
  TMap<unsigned_short,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>_>
  *pTVar5;
  
  LOCK();
  pFVar1 = &this->PoseDataThreadSafeCounter;
  FVar2 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + 1);
  UNLOCK();
  if ((((uint)FVar2 & 0xfff00000) != 0) &&
     (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x5c,L"Acquiring a read access while there is already a write access");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TMap<unsigned_short,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>_>
                *)(*pcVar3)();
      return pTVar5;
    }
  }
  LOCK();
  pFVar1 = &this->PoseDataThreadSafeCounter;
  FVar2 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + -1);
  UNLOCK();
  if ((((uint)FVar2 & 0xfff00000) != 0) &&
     (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x67,L"Another thread asked to have a write access during this read access")
    ;
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TMap<unsigned_short,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>_>
                *)(*pcVar3)();
      return pTVar5;
    }
  }
  return &this->BoneToTransformMap;
}

// GetCollectedCurves @ 14a8f97b0

TArrayView<FName_const_,int> * __thiscall
UE::PoseSearch::FPoseHistory::GetCollectedCurves
          (FPoseHistory *this,TArrayView<FName_const_,int> *__return_storage_ptr__)

{
  FRWFallbackSafeAccessDetectorDefinition *pFVar1;
  FRWFallbackSafeAccessDetectorDefinition FVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  TArrayView<FName_const_,int> *pTVar6;
  
  LOCK();
  pFVar1 = &this->PoseDataThreadSafeCounter;
  FVar2 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + 1);
  UNLOCK();
  if ((((uint)FVar2 & 0xfff00000) != 0) &&
     (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x5c,L"Acquiring a read access while there is already a write access");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TArrayView<FName_const_,int> *)(*pcVar4)();
      return pTVar6;
    }
  }
  iVar3 = (this->CollectedCurves).ArrayNum;
  __return_storage_ptr__->DataPtr = (FName *)(this->CollectedCurves).AllocatorInstance.Data;
  if (iVar3 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TArrayView<FName_const_,int> *)(*pcVar4)();
      return pTVar6;
    }
  }
  __return_storage_ptr__->ArrayNum = iVar3;
  LOCK();
  pFVar1 = &this->PoseDataThreadSafeCounter;
  FVar2 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + -1);
  UNLOCK();
  if ((((uint)FVar2 & 0xfff00000) != 0) &&
     (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x67,L"Another thread asked to have a write access during this read access")
    ;
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TArrayView<FName_const_,int> *)(*pcVar4)();
      return pTVar6;
    }
  }
  return __return_storage_ptr__;
}

// GetCurveValueAtTime @ 14a8fa080

bool __thiscall
UE::PoseSearch::FPoseHistory::GetCurveValueAtTime
          (FPoseHistory *this,float param_1,FName *param_2,float *param_3,bool param_4)

{
  FRWFallbackSafeAccessDetectorDefinition *pFVar1;
  TRingBuffer<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_> *this_00;
  FRWFallbackSafeAccessDetectorDefinition FVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  FPoseHistoryEntry *pFVar8;
  FPoseHistoryEntry *pFVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  TArrayView<FName_const_,int> local_58 [3];
  
  LOCK();
  pFVar1 = &this->PoseDataThreadSafeCounter;
  FVar2 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + 1);
  UNLOCK();
  if (((((uint)FVar2 & 0xfff00000) != 0) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x5c,L"Acquiring a read access while there is already a write access"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  this_00 = &this->Entries;
  uVar13 = (this->Entries).AfterBack - (this->Entries).Front;
  iVar11 = 0;
  if ((int)uVar13 < 1) {
    *param_3 = 0.0;
    bVar5 = false;
  }
  else {
    iVar10 = 0;
    uVar12 = uVar13;
    if (1 < (int)uVar13) {
      do {
        iVar10 = (uVar12 >> 1) + iVar11;
        pFVar8 = TRingBuffer<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_>::
                 operator[](this_00,iVar10);
        if (pFVar8->AccumulatedSeconds <= param_1 && param_1 != pFVar8->AccumulatedSeconds) {
          iVar11 = iVar10 + (uVar12 & 1);
        }
        uVar4 = uVar12 >> 1;
        uVar12 = uVar12 >> 1;
      } while (uVar4 != 0);
      iVar10 = uVar13 - 1;
      if (iVar11 < (int)(uVar13 - 1)) {
        iVar10 = iVar11;
      }
      iVar11 = 1;
      if (1 < iVar10) {
        iVar11 = iVar10;
      }
      iVar10 = iVar11 + -1;
    }
    pFVar8 = TRingBuffer<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_>::operator[]
                       (this_00,iVar10);
    pFVar9 = TRingBuffer<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_>::operator[]
                       (this_00,iVar11);
    local_58[0].DataPtr = (FName *)(this->CollectedCurves).AllocatorInstance.Data;
    local_58[0].ArrayNum = (this->CollectedCurves).ArrayNum;
    if ((local_58[0].ArrayNum < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    bVar5 = LerpEntries(param_1,param_4,pFVar8,pFVar9,param_2,local_58,param_3);
  }
  LOCK();
  pFVar1 = &this->PoseDataThreadSafeCounter;
  FVar2 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + -1);
  UNLOCK();
  if (((((uint)FVar2 & 0xfff00000) != 0) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x67,
                         L"Another thread asked to have a write access during this read access"),
     bVar7)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  return bVar5;
}

// GetEntry @ 14a8fa4c0

FPoseHistoryEntry * __thiscall
UE::PoseSearch::FPoseHistory::GetEntry(FPoseHistory *this,int param_1)

{
  FRWFallbackSafeAccessDetectorDefinition *pFVar1;
  FRWFallbackSafeAccessDetectorDefinition FVar2;
  code *pcVar3;
  bool bVar4;
  FPoseHistoryEntry *pFVar5;
  
  LOCK();
  pFVar1 = &this->PoseDataThreadSafeCounter;
  FVar2 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + 1);
  UNLOCK();
  if (((((uint)FVar2 & 0xfff00000) != 0) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x5c,L"Acquiring a read access while there is already a write access"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FPoseHistoryEntry *)(*pcVar3)();
    return pFVar5;
  }
  pFVar5 = TRingBuffer<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_>::operator[]
                     (&this->Entries,param_1);
  LOCK();
  pFVar1 = &this->PoseDataThreadSafeCounter;
  FVar2 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + -1);
  UNLOCK();
  if (((((uint)FVar2 & 0xfff00000) != 0) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x67,
                         L"Another thread asked to have a write access during this read access"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FPoseHistoryEntry *)(*pcVar3)();
    return pFVar5;
  }
  return pFVar5;
}

// GetNumEntries @ 14a8faab0

int __thiscall UE::PoseSearch::FPoseHistory::GetNumEntries(FPoseHistory *this)

{
  FRWFallbackSafeAccessDetectorDefinition *pFVar1;
  FRWFallbackSafeAccessDetectorDefinition FVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  
  LOCK();
  pFVar1 = &this->PoseDataThreadSafeCounter;
  FVar2 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + 1);
  UNLOCK();
  if ((((uint)FVar2 & 0xfff00000) != 0) &&
     (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x5c,L"Acquiring a read access while there is already a write access");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      iVar7 = (*pcVar5)();
      return iVar7;
    }
  }
  uVar3 = (this->Entries).AfterBack;
  uVar4 = (this->Entries).Front;
  LOCK();
  pFVar1 = &this->PoseDataThreadSafeCounter;
  FVar2 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + -1);
  UNLOCK();
  if ((((uint)FVar2 & 0xfff00000) != 0) &&
     (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x67,L"Another thread asked to have a write access during this read access")
    ;
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      iVar7 = (*pcVar5)();
      return iVar7;
    }
  }
  return uVar3 - uVar4;
}

// GetPoseIndicesHistory @ 14a8fb8f0

FPoseIndicesHistory * __thiscall
UE::PoseSearch::FPoseHistory::GetPoseIndicesHistory(FPoseHistory *this)

{
  FRWFallbackSafeAccessDetectorDefinition *pFVar1;
  FRWFallbackSafeAccessDetectorDefinition FVar2;
  code *pcVar3;
  bool bVar4;
  FPoseIndicesHistory *pFVar5;
  
  LOCK();
  pFVar1 = &this->PoseDataThreadSafeCounter;
  FVar2 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + 1);
  UNLOCK();
  if ((((uint)FVar2 & 0xfff00000) != 0) &&
     (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x5c,L"Acquiring a read access while there is already a write access");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FPoseIndicesHistory *)(*pcVar3)();
      return pFVar5;
    }
  }
  LOCK();
  pFVar1 = &this->PoseDataThreadSafeCounter;
  FVar2 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + -1);
  UNLOCK();
  if ((((uint)FVar2 & 0xfff00000) != 0) &&
     (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x67,L"Another thread asked to have a write access during this read access")
    ;
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FPoseIndicesHistory *)(*pcVar3)();
      return pFVar5;
    }
  }
  return &this->PoseIndicesHistory;
}

// GetTrajectory @ 14a8fe840

FTransformTrajectory * __thiscall UE::PoseSearch::FPoseHistory::GetTrajectory(FPoseHistory *this)

{
  FRWFallbackSafeAccessDetectorDefinition *pFVar1;
  FRWFallbackSafeAccessDetectorDefinition FVar2;
  code *pcVar3;
  bool bVar4;
  FTransformTrajectory *pFVar5;
  
  LOCK();
  pFVar1 = &this->PoseDataThreadSafeCounter;
  FVar2 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + 1);
  UNLOCK();
  if ((((uint)FVar2 & 0xfff00000) != 0) &&
     (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x5c,L"Acquiring a read access while there is already a write access");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FTransformTrajectory *)(*pcVar3)();
      return pFVar5;
    }
  }
  LOCK();
  pFVar1 = &this->PoseDataThreadSafeCounter;
  FVar2 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + -1);
  UNLOCK();
  if ((((uint)FVar2 & 0xfff00000) != 0) &&
     (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x67,L"Another thread asked to have a write access during this read access")
    ;
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FTransformTrajectory *)(*pcVar3)();
      return pFVar5;
    }
  }
  return &this->Trajectory;
}

// GetTrajectorySpeedMultiplier @ 14a8fe8e0

float __thiscall UE::PoseSearch::FPoseHistory::GetTrajectorySpeedMultiplier(FPoseHistory *this)

{
  FRWFallbackSafeAccessDetectorDefinition *pFVar1;
  FRWFallbackSafeAccessDetectorDefinition FVar2;
  code *pcVar3;
  bool bVar4;
  float fVar5;
  
  LOCK();
  pFVar1 = &this->PoseDataThreadSafeCounter;
  FVar2 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + 1);
  UNLOCK();
  if ((((uint)FVar2 & 0xfff00000) != 0) &&
     (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x5c,L"Acquiring a read access while there is already a write access");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      fVar5 = (float)(*pcVar3)();
      return fVar5;
    }
  }
  fVar5 = this->TrajectorySpeedMultiplier;
  LOCK();
  pFVar1 = &this->PoseDataThreadSafeCounter;
  FVar2 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + -1);
  UNLOCK();
  if ((((uint)FVar2 & 0xfff00000) != 0) &&
     (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x67,L"Another thread asked to have a write access during this read access")
    ;
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      fVar5 = (float)(*pcVar3)();
      return fVar5;
    }
  }
  return fVar5;
}

// GetTransformAtTime @ 14a8ff370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::PoseSearch::FPoseHistory::GetTransformAtTime
          (FPoseHistory *this,float param_1,TTransform<double> *param_2,USkeleton *param_3,
          ushort param_4,ushort param_5,bool param_6)

{
  FRWFallbackSafeAccessDetectorDefinition *pFVar1;
  FRWFallbackSafeAccessDetectorDefinition FVar2;
  double dVar3;
  code *pcVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  undefined1 uVar12;
  undefined4 uVar13;
  int iVar14;
  FTransformTrajectorySample *pFVar15;
  FPoseHistoryEntry *pFVar16;
  FPoseHistoryEntry *pFVar17;
  USkeleton *pUVar18;
  FPoseHistory *pFVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined1 auVar33 [16];
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined1 auStackY_228 [32];
  TTransform<double> local_1b8;
  FTransformTrajectorySample local_158;
  FTransformTrajectorySample local_118;
  TTransform<double> local_d8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_228;
  LOCK();
  pFVar1 = &this->PoseDataThreadSafeCounter;
  FVar2 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + 1);
  UNLOCK();
  if (((((uint)FVar2 & 0xfff00000) != 0) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                          ,0x5c,L"Acquiring a read access while there is already a write access"),
     bVar11)) {
    pcVar4 = (code *)swi(3);
    uVar12 = (*pcVar4)();
    return (bool)uVar12;
  }
  if (param_4 == param_5) {
    uVar12 = 1;
    *&(param_2->Rotation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(param_2->Rotation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(param_2->Translation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *&(param_2->Translation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *&(param_2->Scale3D).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    *&(param_2->Scale3D).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else if (param_5 == 0xfffe) {
    if (param_4 == 0xffff) {
      pFVar15 = FTransformTrajectory::GetSampleAtTime(&this->Trajectory,&local_158,param_1,param_6);
      uVar12 = 1;
      dVar6 = (pFVar15->Facing).Y;
      dVar3 = (pFVar15->Position).field0_0x0._s_0.Z;
      dVar7 = (pFVar15->Position).field0_0x0._s_0.X;
      dVar8 = (pFVar15->Position).field0_0x0._s_0.Y;
      dVar9 = (pFVar15->Facing).Z;
      dVar10 = (pFVar15->Facing).W;
      (param_2->Rotation).XY.m128d_f64[0] = (pFVar15->Facing).X;
      (param_2->Rotation).XY.m128d_f64[1] = dVar6;
      (param_2->Rotation).ZW.m128d_f64[0] = dVar9;
      (param_2->Rotation).ZW.m128d_f64[1] = dVar10;
      (param_2->Translation).XY.m128d_f64[0] = dVar7;
      (param_2->Translation).XY.m128d_f64[1] = dVar8;
      (param_2->Translation).ZW.m128d_f64[0] = dVar3;
      (param_2->Translation).ZW.m128d_f64[1] = 0.0;
      dVar3 = _UNK_150689688;
      (param_2->Scale3D).XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
      (param_2->Scale3D).XY.m128d_f64[1] = dVar3;
      dVar3 = _UNK_150689518;
      (param_2->Scale3D).ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
      (param_2->Scale3D).ZW.m128d_f64[1] = dVar3;
    }
    else {
      uVar12 = (**(code **)(this->_padding_ + 8))(this,param_3,param_2,param_3);
      pFVar15 = FTransformTrajectory::GetSampleAtTime(&this->Trajectory,&local_118,param_1,param_6);
      local_d8.Rotation.ZW.m128d_f64[0] = (pFVar15->Facing).Z;
      local_d8.Rotation.ZW.m128d_f64[1] = (pFVar15->Facing).W;
      local_d8.Rotation.XY.m128d_f64[0] = (pFVar15->Facing).X;
      local_d8.Rotation.XY.m128d_f64[1] = (pFVar15->Facing).Y;
      local_d8.Translation.XY.m128d_f64[0] = (pFVar15->Position).field0_0x0._s_0.X;
      local_d8.Translation.XY.m128d_f64[1] = (pFVar15->Position).field0_0x0._s_0.Y;
      local_d8.Translation.ZW.m128d_f64[0] = (pFVar15->Position).field0_0x0._s_0.Z;
      local_d8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
      local_d8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
      local_d8.Translation.ZW.m128d_f64[1] = 0.0;
      local_d8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
      local_d8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
      UE::Math::TTransform<double>::Multiply(param_2,param_2,&local_d8);
    }
  }
  else if (param_4 < 0xfffe) {
    uVar21 = (this->Entries).AfterBack - (this->Entries).Front;
    if ((int)uVar21 < 1) {
      uVar12 = 0;
      *&(param_2->Rotation).XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
      *&(param_2->Rotation).ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
      *&(param_2->Translation).XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      *&(param_2->Translation).ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      *&(param_2->Scale3D).XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      *&(param_2->Scale3D).ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    }
    else {
      iVar20 = 0;
      iVar14 = 0;
      uVar22 = uVar21;
      if (1 < (int)uVar21) {
        do {
          iVar14 = (uVar22 >> 1) + iVar20;
          pFVar16 = TRingBuffer<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_>::
                    operator[](&this->Entries,iVar14);
          if (pFVar16->AccumulatedSeconds <= param_1 && param_1 != pFVar16->AccumulatedSeconds) {
            iVar20 = iVar14 + (uVar22 & 1);
          }
          uVar5 = uVar22 >> 1;
          uVar22 = uVar22 >> 1;
        } while (uVar5 != 0);
        iVar14 = uVar21 - 1;
        if (iVar20 < (int)(uVar21 - 1)) {
          iVar14 = iVar20;
        }
        iVar20 = 1;
        if (1 < iVar14) {
          iVar20 = iVar14;
        }
        iVar14 = iVar20 + -1;
      }
      pFVar16 = TRingBuffer<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_>::
                operator[](&this->Entries,iVar14);
      pFVar17 = TRingBuffer<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_>::
                operator[](&this->Entries,iVar20);
      pUVar18 = (USkeleton *)FWeakObjectPtr::Get(&(this->LastUpdateSkeleton).WeakPtr);
      uVar12 = LerpEntries(param_1,param_6,pFVar16,pFVar17,param_3,pUVar18,&this->BoneToTransformMap
                           ,param_4,param_5,param_2);
    }
  }
  else {
    pFVar19 = this;
    uVar13 = (**(code **)(this->_padding_ + 8))(this,param_3,param_2,param_3);
    uVar12 = (undefined1)uVar13;
    auVar33._0_8_ =
         (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                          *(uint *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 4),
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                          *(uint *)(param_2->Scale3D).XY.m128d_f64);
    auVar33._8_4_ = _UNK_15061cc88 & *(uint *)((param_2->Scale3D).XY.m128d_f64 + 1);
    auVar33._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 0xc);
    auVar24._8_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
          (double)CONCAT44(_UNK_15061cc8c &
                           *(uint *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 0xc),
                           _UNK_15061cc88 & *(uint *)((param_2->Scale3D).ZW.m128d_f64 + 1)));
    auVar24._0_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
          (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                           *(uint *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 4),
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                           *(uint *)(param_2->Scale3D).ZW.m128d_f64));
    uVar21 = movmskpd((int)pFVar19,auVar24);
    auVar23._8_8_ =
         -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar33._8_8_);
    auVar23._0_8_ =
         -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar33._0_8_);
    iVar14 = movmskpd(uVar13,auVar23);
    if ((uVar21 & 0x3fffffff) == 0 && iVar14 == 0) {
      uVar13 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
      uVar34 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
      uVar35 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
      uVar36 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
      uVar29 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
      uVar30 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
      uVar31 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
      uVar32 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
      uVar25 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
      uVar26 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
      uVar27 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
      uVar28 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
      local_1b8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
      ;
      local_1b8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
      ;
      local_1b8.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_1b8.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_1b8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_1b8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    }
    else {
      UE::Math::TTransform<double>::InverseFast(param_2,&local_1b8);
      uVar25 = local_1b8.Translation.ZW.m128d_f64[0]._0_4_;
      uVar26 = local_1b8.Translation.ZW.m128d_f64[0]._4_4_;
      uVar27 = local_1b8.Translation.ZW.m128d_f64[1]._0_4_;
      uVar28 = local_1b8.Translation.ZW.m128d_f64[1]._4_4_;
      uVar29 = local_1b8.Translation.XY.m128d_f64[0]._0_4_;
      uVar30 = local_1b8.Translation.XY.m128d_f64[0]._4_4_;
      uVar31 = local_1b8.Translation.XY.m128d_f64[1]._0_4_;
      uVar32 = local_1b8.Translation.XY.m128d_f64[1]._4_4_;
      uVar13 = local_1b8.Rotation.XY.m128d_f64[0]._0_4_;
      uVar34 = local_1b8.Rotation.XY.m128d_f64[0]._4_4_;
      uVar35 = local_1b8.Rotation.XY.m128d_f64[1]._0_4_;
      uVar36 = local_1b8.Rotation.XY.m128d_f64[1]._4_4_;
    }
    *(undefined4 *)(param_2->Rotation).XY.m128d_f64 = uVar13;
    *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 4) = uVar34;
    *(undefined4 *)((param_2->Rotation).XY.m128d_f64 + 1) = uVar35;
    *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 0xc) = uVar36;
    *&(param_2->Rotation).ZW.m128d_f64 = local_1b8.Rotation.ZW.m128d_f64;
    *(undefined4 *)(param_2->Translation).XY.m128d_f64 = uVar29;
    *(undefined4 *)((longlong)(param_2->Translation).XY.m128d_f64 + 4) = uVar30;
    *(undefined4 *)((param_2->Translation).XY.m128d_f64 + 1) = uVar31;
    *(undefined4 *)((longlong)(param_2->Translation).XY.m128d_f64 + 0xc) = uVar32;
    *(undefined4 *)(param_2->Translation).ZW.m128d_f64 = uVar25;
    *(undefined4 *)((longlong)(param_2->Translation).ZW.m128d_f64 + 4) = uVar26;
    *(undefined4 *)((param_2->Translation).ZW.m128d_f64 + 1) = uVar27;
    *(undefined4 *)((longlong)(param_2->Translation).ZW.m128d_f64 + 0xc) = uVar28;
    *&(param_2->Scale3D).XY.m128d_f64 = local_1b8.Scale3D.XY.m128d_f64;
    *&(param_2->Scale3D).ZW.m128d_f64 = local_1b8.Scale3D.ZW.m128d_f64;
  }
  LOCK();
  pFVar1 = &this->PoseDataThreadSafeCounter;
  FVar2 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + -1);
  UNLOCK();
  if (((((uint)FVar2 & 0xfff00000) != 0) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                          ,0x67,
                          L"Another thread asked to have a write access during this read access"),
     bVar11)) {
    pcVar4 = (code *)swi(3);
    uVar12 = (*pcVar4)();
    return (bool)uVar12;
  }
  return (bool)uVar12;
}

// Initialize_AnyThread @ 14a9010e0

void __thiscall
UE::PoseSearch::FPoseHistory::Initialize_AnyThread(FPoseHistory *this,int param_1,float param_2)

{
  FTransformTrajectory *pFVar1;
  FRWFallbackSafeAccessDetectorDefinition *pFVar2;
  FRWFallbackSafeAccessDetectorDefinition FVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  FWeakObjectPtr local_res8;
  undefined8 local_res20;
  undefined8 local_28;
  undefined8 local_20;
  
  LOCK();
  pFVar2 = &this->PoseDataThreadSafeCounter;
  FVar3 = *pFVar2;
  *pFVar2 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar2 + 0x100000);
  UNLOCK();
  if ((FVar3 != (FRWFallbackSafeAccessDetectorDefinition)0x0) &&
     (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x72,
                       L"Acquiring a write access while there are ongoing read or write access");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (param_1 < 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNumPoses >= 2",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchHistory.cpp"
                       ,0x2dc,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  this->MaxNumPoses = param_1;
  pFVar1 = &this->Trajectory;
  this->SamplingInterval = param_2;
  local_28 = 0;
  local_20 = 0;
  if (pFVar1 != (FTransformTrajectory *)&local_28) {
    pFVar4 = (pFVar1->Samples).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar1->Samples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Trajectory).Samples.ArrayNum = 0;
    (this->Trajectory).Samples.ArrayMax = 0;
  }
  this->TrajectorySpeedMultiplier = 1.0;
  (this->TrajectoryDataState).DesiredControllerYawLastUpdate = 0.0;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res20 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
  (this->LastUpdateSkeleton).WeakPtr = local_res8;
  TSet<TTuple<unsigned_short,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned_short,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>,FDefaultSetAllocator>
           *)&this->BoneToTransformMap);
  (this->CollectedCurves).ArrayNum = 0;
  if ((this->CollectedCurves).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->CollectedCurves).AllocatorInstance,0,&(this->CollectedCurves).ArrayMax)
    ;
  }
  this->BoneToTransformMapTypeHash = 0;
  TRingBuffer<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_>::DestructRange
            (&this->Entries,(this->Entries).Front,(this->Entries).AfterBack);
  (this->Entries).Front = 0;
  (this->Entries).AfterBack = 0;
  TSet<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>,TDefaultMapHashableKeyFuncs<UE::PoseSearch::FHistoricalPoseIndex,float,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>,TDefaultMapHashableKeyFuncs<UE::PoseSearch::FHistoricalPoseIndex,float,0>,FDefaultSetAllocator>
           *)&this->PoseIndicesHistory);
  LOCK();
  pFVar2 = &this->PoseDataThreadSafeCounter;
  FVar3 = *pFVar2;
  *pFVar2 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar2 + -0x100000);
  UNLOCK();
  if ((FVar3 != (FRWFallbackSafeAccessDetectorDefinition)0x100000) &&
     (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x7d,
                       L"Another thread asked to have a read or write access during this write access"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

// IsEmpty @ 14a9019f0

bool __thiscall UE::PoseSearch::FPoseHistory::IsEmpty(FPoseHistory *this)

{
  FRWFallbackSafeAccessDetectorDefinition *pFVar1;
  FRWFallbackSafeAccessDetectorDefinition FVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  
  LOCK();
  pFVar1 = &this->PoseDataThreadSafeCounter;
  FVar2 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + 1);
  UNLOCK();
  if ((((uint)FVar2 & 0xfff00000) != 0) &&
     (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x5c,L"Acquiring a read access while there is already a write access");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  uVar3 = (this->Entries).Front;
  uVar4 = (this->Entries).AfterBack;
  LOCK();
  pFVar1 = &this->PoseDataThreadSafeCounter;
  FVar2 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + -1);
  UNLOCK();
  if ((((uint)FVar2 & 0xfff00000) != 0) &&
     (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x67,L"Another thread asked to have a write access during this read access")
    ;
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  return uVar4 == uVar3;
}

// SetTrajectory @ 14a9088a0

void __thiscall
UE::PoseSearch::FPoseHistory::SetTrajectory
          (FPoseHistory *this,FPoseSearchQueryTrajectory *param_1,float param_2)

{
  code *pcVar1;
  FTransformTrajectory *pFVar2;
  FTransformTrajectory local_28 [2];
  
  pcVar1 = *(code **)(this->_padding_ + 0x20);
  pFVar2 = FPoseSearchQueryTrajectory::operator_FTransformTrajectory(param_1,local_28);
  (*pcVar1)(this,pFVar2,param_2);
  if (local_28[0].Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Samples.AllocatorInstance.Data);
  }
  return;
}

// SetTrajectory @ 14a908900

void __thiscall
UE::PoseSearch::FPoseHistory::SetTrajectory
          (FPoseHistory *this,FTransformTrajectory *param_1,float param_2)

{
  FRWFallbackSafeAccessDetectorDefinition *pFVar1;
  FRWFallbackSafeAccessDetectorDefinition FVar2;
  int iVar3;
  code *pcVar4;
  float fVar5;
  uint uVar6;
  bool bVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  float fVar10;
  float fVar11;
  undefined1 local_res10 [8];
  
  if ((param_1->Samples).ArrayNum != 0) {
    LOCK();
    pFVar1 = &this->PoseDataThreadSafeCounter;
    FVar2 = *pFVar1;
    *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + 0x100000);
    UNLOCK();
    if (((FVar2 != (FRWFallbackSafeAccessDetectorDefinition)0x0) &&
        (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                           ,0x72,
                           L"Acquiring a write access while there are ongoing read or write access")
       , bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FTransformTrajectory::operator=(&this->Trajectory,param_1);
    uVar6 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    fVar11 = __real_3f800000;
    fVar5 = __real_322bcc77;
    fVar10 = param_2 - __real_3f800000;
    this->TrajectorySpeedMultiplier = param_2;
    if (fVar5 < (float)((uint)fVar10 & uVar6)) {
      if (fVar5 < (float)((uint)param_2 & uVar6)) {
        fVar11 = fVar11 / param_2;
      }
      iVar3 = (this->Trajectory).Samples.ArrayNum;
      pFVar8 = (this->Trajectory).Samples.AllocatorInstance.Data;
      pFVar9 = pFVar8 + (longlong)iVar3 * 0x40;
      while( true ) {
        if ((this->Trajectory).Samples.ArrayNum != iVar3) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<FTransformTrajectorySample,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res10);
        }
        if (pFVar8 == pFVar9) break;
        *(float *)(pFVar8 + 0x38) = fVar11 * *(float *)(pFVar8 + 0x38);
        pFVar8 = pFVar8 + 0x40;
      }
    }
    LOCK();
    pFVar1 = &this->PoseDataThreadSafeCounter;
    FVar2 = *pFVar1;
    *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + -0x100000);
    UNLOCK();
    if (((FVar2 != (FRWFallbackSafeAccessDetectorDefinition)0x100000) &&
        (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                           ,0x7d,
                           L"Another thread asked to have a read or write access during this write access"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

