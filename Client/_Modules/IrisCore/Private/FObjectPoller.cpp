// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// FObjectPoller @ 1442ad9c0

FObjectPoller * __thiscall
UE::Net::Private::FObjectPoller::FObjectPoller(FObjectPoller *this,FInitParams *param_1)

{
  uint *puVar1;
  FReplicationSystemInternal *pFVar2;
  UObjectReplicationBridge *pUVar3;
  code *pcVar4;
  bool bVar5;
  FObjectPoller *pFVar6;
  FNetBitArrayView local_18;
  
  this->ObjectReplicationBridge = param_1->ObjectReplicationBridge;
  pFVar2 = param_1->ReplicationSystemInternal;
  this->ReplicationSystemInternal = pFVar2;
  this->NetStatsContext = (FNetStatsContext *)0x0;
  this->LocalNetRefHandleManager = &pFVar2->NetRefHandleManager;
  this->ReplicatedInstances = &(pFVar2->NetRefHandleManager).ReplicatedInstances;
  if ((pFVar2->DirtyNetObjectTracker).NetRefHandleManager == (FNetRefHandleManager *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("DirtyNetObjectTracker.IsInit()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystemInternal.h"
                       ,0x41,
                       L"Not allowed to access the DirtyNetObjectTracker unless object replication is enabled."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FObjectPoller *)(*pcVar4)();
      return pFVar6;
    }
  }
  FNetBitArrayView::FNetBitArrayView
            (&this->AccumulatedDirtyObjects,
             (uint *)(pFVar2->DirtyNetObjectTracker).AccumulatedDirtyNetObjects.Storage.
                     AllocatorInstance.Data,
             (pFVar2->DirtyNetObjectTracker).AccumulatedDirtyNetObjects.BitCount);
  FNetBitArrayView::FNetBitArrayView
            (&this->DirtyObjectsToQuantize,
             (uint *)(this->LocalNetRefHandleManager->DirtyObjectsToQuantize).Storage.
                     AllocatorInstance.Data,
             (this->LocalNetRefHandleManager->DirtyObjectsToQuantize).BitCount);
  pUVar3 = this->ObjectReplicationBridge;
  puVar1 = &(this->DirtyObjectsThisFrame).BitCount;
  (this->DirtyObjectsThisFrame).Storage = puVar1;
  *puVar1 = 0;
  puVar1 = &(this->GarbageCollectionAffectedObjects).BitCount;
  (this->GarbageCollectionAffectedObjects).Storage = puVar1;
  *puVar1 = 0;
  (this->DirtyObjectsThisFrame).WordCount = 0;
  (this->GarbageCollectionAffectedObjects).WordCount = 0;
  (this->PollStats).PreUpdatedObjectCount = 0;
  (this->PollStats).PolledObjectCount = 0;
  (this->PollStats).SkippedObjectCount = 0;
  (this->PollStats).PolledReferencesObjectCount = 0;
  this->bUsePerPropertyDirtyTracking = false;
  FNetBitArrayView::FNetBitArrayView
            (&local_18,
             (uint *)(pUVar3->GarbageCollectionAffectedObjects).Storage.AllocatorInstance.Data,
             (pUVar3->GarbageCollectionAffectedObjects).BitCount);
  (this->GarbageCollectionAffectedObjects).Storage = local_18.Storage;
  (this->GarbageCollectionAffectedObjects).WordCount = local_18.WordCount;
  (this->GarbageCollectionAffectedObjects).BitCount = local_18.BitCount;
  bVar5 = FGlobalDirtyNetObjectTracker::IsUsingPerPropertyDirtyTracking();
  this->bUsePerPropertyDirtyTracking = bVar5;
  return this;
}

// PollAndCopyObjects @ 1442c97a0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::Net::Private::FObjectPoller::PollAndCopyObjects(FObjectPoller *this,FNetBitArrayView *param_1)

{
  int *piVar1;
  FReplicationSystemInternal *pFVar2;
  undefined8 uVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  TTask<void> TVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  FNetStatsContext *pFVar13;
  TTask<void> this_00;
  FNetStatsContext *pFVar14;
  longlong lVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  FDirtyNetObjectTracker *this_01;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  uint *puVar22;
  uint local_res8 [2];
  ForAnyElementType local_e8;
  uint local_e0;
  uint local_dc;
  TTask<void> local_d8;
  TArray<UE::Tasks::TTask<void>,TSizedDefaultAllocator<32>_> local_d0;
  uint local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  uint uStack_7c;
  FDirtyNetObjectTracker *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  uint uStack_68;
  uint uStack_64;
  FNetBitArrayView local_60;
  undefined4 local_50;
  undefined4 uStack_4c;
  uint uStack_48;
  uint uStack_44;
  
  this_01 = &this->ReplicationSystemInternal->DirtyNetObjectTracker;
  local_78 = this_01;
  if (((this->ReplicationSystemInternal->DirtyNetObjectTracker).NetRefHandleManager ==
       (FNetRefHandleManager *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("DirtyNetObjectTracker.IsInit()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystemInternal.h"
                         ,0x41,
                         L"Not allowed to access the DirtyNetObjectTracker unless object replication is enabled."
                        ), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FDirtyNetObjectTracker::LockExternalAccess(this_01);
  FDirtyNetObjectTracker::GetDirtyNetObjectsThisFrame(this_01,&local_60);
  pFVar2 = this->ReplicationSystemInternal;
  (this->DirtyObjectsThisFrame).Storage = local_60.Storage;
  (this->DirtyObjectsThisFrame).WordCount = local_60.WordCount;
  (this->DirtyObjectsThisFrame).BitCount = local_60.BitCount;
  if (((pFVar2->TypeStats).bIsInParallelPhase != false) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bIsInParallelPhase",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Stats\\NetStats.h"
                         ,0xc6,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar14 = (FNetStatsContext *)0x0;
  pFVar13 = pFVar14;
  if ((pFVar2->TypeStats).bIsEnabled != false) {
    pFVar13 = (pFVar2->TypeStats).ParentStatsContext;
  }
  pFVar2 = this->ReplicationSystemInternal;
  this->NetStatsContext = pFVar13;
  iVar6 = CVars::GNumPollingTasks;
  local_70 = *(undefined4 *)&param_1->Storage;
  uStack_6c = *(undefined4 *)((longlong)&param_1->Storage + 4);
  uStack_68 = param_1->WordCount;
  uStack_64 = param_1->BitCount;
  uVar17 = (ulonglong)(uint)CVars::GNumPollingTasks;
  uVar3._0_4_ = param_1->WordCount;
  uVar3._4_4_ = param_1->BitCount;
  iVar11 = CVars::GNumWordsPerChunk * 0x20;
  local_c0 = iVar11 * CVars::GNumPollingTasks;
  local_b8 = uVar3;
  local_50 = local_70;
  uStack_4c = uStack_6c;
  uStack_48 = uStack_68;
  uStack_44 = uStack_64;
  if (((pFVar2->bAllowParallelTasks == false) || ((uint)uVar3._4_4_ <= local_c0)) ||
     (CVars::GNumPollingTasks == 0)) {
    bVar8 = -1 < CpuChannel->Enabled;
    if (bVar8) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId273,"ForcePollAndCopy",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Polling\\ObjectPoller.cpp"
                 ,0x111);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId273);
    }
    local_res8[0] = 0;
    cVar5 = (char)uStack_64;
    if ((undefined4)uVar3 != 0) {
      puVar22 = (uint *)CONCAT44(uStack_6c,local_70);
      uVar16 = local_b8;
      pFVar13 = pFVar14;
      do {
        uVar18 = 0xffffffff;
        if ((int)pFVar13 == (undefined4)uVar3 + -1) {
          uVar18 = 0xffffffff >> (-cVar5 & 0x1fU);
        }
        uVar20 = (uint)pFVar14;
        for (uVar18 = uVar18 & *puVar22; uVar18 != 0; uVar18 = uVar18 >> 1) {
          if ((uVar18 & 1) != 0) {
            ForcePollObject(this,(uint)pFVar14,this->NetStatsContext,&this->PollStats);
          }
          pFVar14 = (FNetStatsContext *)(ulonglong)((uint)pFVar14 + 1);
          uVar20 = local_res8[0];
          uVar16 = local_b8;
        }
        local_res8[0] = uVar20 + 0x20;
        pFVar14 = (FNetStatsContext *)(ulonglong)local_res8[0];
        uVar18 = (int)pFVar13 + 1;
        pFVar13 = (FNetStatsContext *)(ulonglong)uVar18;
        puVar22 = puVar22 + 1;
      } while (uVar18 < (uint)uVar16);
    }
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  else {
    if ((pFVar2->bIsInParallelPhase != false) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bIsInParallelPhase",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystemInternal.h"
                           ,0x93,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar2->bIsInParallelPhase = true;
    (pFVar2->TypeStats).bIsInParallelPhase = true;
    local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d0.ArrayNum = 0;
    local_d0.ArrayMax = 0;
    local_e8.Data = (FScriptContainerElement *)0x0;
    local_dc = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_7c = uStack_7c & 0xffffff00;
    local_b0 = local_70;
    uStack_ac = uStack_6c;
    uStack_a8 = uStack_68;
    uStack_a4 = uStack_64;
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum(uVar17);
    }
    local_e0 = 0;
    if ((iVar6 != 0) &&
       (Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,iVar6,&local_e8,0,(int *)&local_dc), 0 < iVar6)) {
      do {
        if ((local_e8.Data <= (FScriptContainerElement *)&local_b0) &&
           (((FScriptContainerElement *)&local_b0 < local_e8.Data + (longlong)(int)local_dc * 0x38
            && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)))) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (local_e0 == local_dc) {
          local_e0 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x838,&local_e8,(int *)&local_dc);
        }
        uVar18 = local_e0 + 1;
        lVar15 = (longlong)(int)local_e0 * 0x38;
        *(ulonglong *)(local_e8.Data + lVar15) = CONCAT44(uStack_ac,local_b0);
        *(ulonglong *)(local_e8.Data + lVar15 + 8) = CONCAT44(uStack_a4,uStack_a8);
        *(undefined8 *)(local_e8.Data + lVar15 + 0x10) = local_a0;
        *(undefined8 *)(local_e8.Data + lVar15 + 0x10 + 8) = uStack_98;
        *(undefined8 *)(local_e8.Data + lVar15 + 0x20) = local_90;
        *(undefined8 *)(local_e8.Data + lVar15 + 0x20 + 8) = uStack_88;
        *(ulonglong *)(local_e8.Data + lVar15 + 0x30) = CONCAT44(uStack_7c,local_80);
        uVar17 = uVar17 - 1;
        local_e0 = uVar18;
      } while (uVar17 != 0);
    }
    do {
      bVar8 = -1 < CpuChannel->Enabled;
      if (bVar8) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId227,"PrepareAndDispatchTask",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Polling\\ObjectPoller.cpp"
                   ,0xe3);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId227);
      }
      uVar20 = (uint)pFVar14;
      uVar18 = 0;
      if ((int)uVar20 < (int)local_e0) {
        uVar18 = ~uVar20 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar21 = local_e8.Data + (longlong)(int)uVar20 * 0x38;
      pFVar21[0x34] = (FScriptContainerElement)0x0;
      pFVar2 = this->ReplicationSystemInternal;
      *(uint *)(pFVar21 + 0x28) = uVar20;
      *(FNetTypeStats **)(pFVar21 + 0x10) = &pFVar2->TypeStats;
      *(int *)(pFVar21 + 0x2c) = iVar11;
      *(uint *)(pFVar21 + 0x30) = local_c0;
      bVar9 = -1 < CpuChannel->Enabled;
      if (bVar9) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId237,"UObjectPoller_DispatchTask",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Polling\\ObjectPoller.cpp"
                   ,0xed);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId237);
      }
      local_d8 = (TTask<void>)0x0;
      this_00 = (TTask<void>)
                TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                            *)&Tasks::Private::SmallTaskAllocator);
      if (this_00 == (TTask<void>)0x0) {
        this_00 = (TTask<void>)0x0;
      }
      else {
        Tasks::Private::FTaskBase::FTaskBase((FTaskBase *)this_00,2,true);
        *(undefined ***)this_00 =
             &Tasks::Private::
              TExecutableTaskBase<`UE::Net::Private::FObjectPoller::PollAndCopyObjects'::`13'::<lambda_1>,void,void>
              ::_vftable_;
        Tasks::Private::FTaskBase::Init
                  ((FTaskBase *)this_00,
                   L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Polling\\ObjectPoller.cpp(239)"
                   ,Default,None,None);
        ((FTaskBase *)((longlong)this_00 + 0xd8))->_padding_ = (longlong)this;
        *(FScriptContainerElement **)((longlong)this_00 + 0xe0) = pFVar21;
        *(undefined ***)this_00 =
             &Tasks::Private::
              TExecutableTask<`UE::Net::Private::FObjectPoller::PollAndCopyObjects'::`13'::<lambda_1>_>
              ::_vftable_;
      }
      TVar7 = local_d8;
      if (local_d8 != (TTask<void>)0x0) {
        local_d8 = (TTask<void>)0x0;
        LOCK();
        piVar1 = (int *)((longlong)TVar7 + 0x30);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (*(code *)**(undefined8 **)TVar7)(TVar7,1);
        }
      }
      local_d8 = this_00;
      Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_00,0x100);
      if (((local_d0.AllocatorInstance.Data <= &local_d8) &&
          (&local_d8 <
           (TTask<void> *)(local_d0.AllocatorInstance.Data + (longlong)local_d0.ArrayMax * 8))) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar12 = local_d0.ArrayNum;
      if (local_d0.ArrayNum == local_d0.ArrayMax) {
        iVar12 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_d0.AllocatorInstance,&local_d0.ArrayMax);
      }
      local_d0.ArrayNum = iVar12 + 1;
      *(TTask<void> *)(local_d0.AllocatorInstance.Data + (longlong)iVar12 * 8) = (TTask<void>)0x0;
      *(TTask<void> *)(local_d0.AllocatorInstance.Data + (longlong)iVar12 * 8) = local_d8;
      local_d8 = (TTask<void>)0x0;
      if (bVar9) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar8) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      pFVar14 = (FNetStatsContext *)(ulonglong)(uVar20 + 1);
    } while (uVar20 + 1 < (uint)iVar6);
    Tasks::Wait<TArray<UE::Tasks::TTask<void>,TSizedDefaultAllocator<32>_>_>
              (&local_d0,(FTimespan)0x7fffffffffffffff);
    this_01 = local_78;
    pFVar2 = this->ReplicationSystemInternal;
    if ((pFVar2->bAllowParallelTasks == false) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("bAllowParallelTasks",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystemInternal.h"
                           ,0x9a,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((pFVar2->bIsInParallelPhase == false) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsInParallelPhase",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystemInternal.h"
                           ,0x9b,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar18 = local_e0;
    pFVar2->bIsInParallelPhase = false;
    (pFVar2->TypeStats).bIsInParallelPhase = false;
    uVar17 = (ulonglong)(int)local_e0;
    pFVar21 = local_e8.Data + 0x24;
    pFVar19 = local_e8.Data + uVar17 * 0x38;
    while( true ) {
      if ((uint)uVar17 != uVar18) {
        `TCheckedPointerIterator<UE::Net::Private::FReplicationPollTaskData,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
        uVar17 = (ulonglong)local_e0;
      }
      if (pFVar21 + -0x24 == pFVar19) break;
      (this->PollStats).PreUpdatedObjectCount =
           (this->PollStats).PreUpdatedObjectCount + *(int *)(pFVar21 + -0xc);
      puVar22 = &(this->PollStats).PolledObjectCount;
      *puVar22 = *puVar22 + *(int *)(pFVar21 + -8);
      puVar22 = &(this->PollStats).PolledReferencesObjectCount;
      *puVar22 = *puVar22 + *(int *)pFVar21;
      pFVar21 = pFVar21 + 0x38;
    }
    if (local_e8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data);
    }
    DestructItems<UE::Tasks::TTask<void>,int>
              ((TTask<void> *)local_d0.AllocatorInstance.Data,local_d0.ArrayNum);
    if ((TTask<void> *)local_d0.AllocatorInstance.Data != (TTask<void> *)0x0) {
      FMemory::Free(local_d0.AllocatorInstance.Data);
    }
  }
  this->NetStatsContext = (FNetStatsContext *)0x0;
  FDirtyNetObjectTracker::AllowExternalAccess(this_01);
  return;
}

// PollAndCopySingleObject @ 1442c9fc0

void __thiscall
UE::Net::Private::FObjectPoller::PollAndCopySingleObject(FObjectPoller *this,uint param_1)

{
  FReplicationSystemInternal *pFVar1;
  code *pcVar2;
  bool bVar3;
  FDirtyNetObjectTracker *this_00;
  undefined8 uStack_20;
  FNetBitArrayView local_18;
  
  this_00 = &this->ReplicationSystemInternal->DirtyNetObjectTracker;
  if (((this->ReplicationSystemInternal->DirtyNetObjectTracker).NetRefHandleManager ==
       (FNetRefHandleManager *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DirtyNetObjectTracker.IsInit()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystemInternal.h"
                         ,0x41,
                         L"Not allowed to access the DirtyNetObjectTracker unless object replication is enabled."
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FDirtyNetObjectTracker::LockExternalAccess(this_00);
  FDirtyNetObjectTracker::GetDirtyNetObjectsThisFrame(this_00,&local_18);
  pFVar1 = this->ReplicationSystemInternal;
  (this->DirtyObjectsThisFrame).Storage = local_18.Storage;
  (this->DirtyObjectsThisFrame).WordCount = local_18.WordCount;
  (this->DirtyObjectsThisFrame).BitCount = local_18.BitCount;
  if ((pFVar1->bIsInParallelPhase != false) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ReplicationSystemInternal->GetIsInParallelPhase()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Polling\\ObjectPoller.cpp"
                         ,0x123,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId293,"ForcePollAndCopy",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Polling\\ObjectPoller.cpp"
               ,0x125);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId293);
  }
  ForcePollObject(this,param_1,this->NetStatsContext,&this->PollStats);
  uStack_20 = 0;
  this->NetStatsContext = (FNetStatsContext *)0x0;
  (this->DirtyObjectsThisFrame).Storage = (uint *)((longlong)&uStack_20 + 4);
  (this->DirtyObjectsThisFrame).WordCount = 0;
  (this->DirtyObjectsThisFrame).BitCount = 0;
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FDirtyNetObjectTracker::AllowExternalAccess(this_00);
  return;
}

