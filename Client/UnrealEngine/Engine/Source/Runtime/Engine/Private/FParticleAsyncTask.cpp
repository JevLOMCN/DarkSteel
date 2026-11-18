// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// DoTask @ 148170a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FParticleAsyncTask::DoTask
          (FParticleAsyncTask *this,Type param_1,TRefCountPtr<FBaseGraphTask> *param_2)

{
  TRefCountPtr<FBaseGraphTask> *pTVar1;
  atomic<unsigned_int> *paVar2;
  int *piVar3;
  atomic<unsigned_int> aVar4;
  FBaseGraphTask *pFVar5;
  FThreadSafeCounter *pFVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_UParticleSystemComponent_QueueFinalize> FVar13;
  FTaskBase *pFVar14;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar15;
  char *pcVar16;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar17;
  FNameEntryId FVar18;
  FName FVar19;
  FTaskBase *this_02;
  int iVar20;
  wchar_t *pwVar21;
  undefined1 auStackY_138 [32];
  EExtendedTaskPriority local_d8;
  ETaskPriority local_d7 [7];
  uint local_d0;
  uint uStack_cc;
  FColor_u_0 local_c8 [2];
  FName local_c0;
  FName local_b8;
  LARGE_INTEGER local_a8;
  FStatMessage local_a0;
  FTaskTagScope local_90;
  FName local_80;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_78;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  FTaskTagScope::FTaskTagScope(&local_90,EParallelRenderingThread);
  UParticleSystemComponent::ComputeTickComponent_Concurrent(this->Target);
  this_02 = (FTaskBase *)0x0;
  FVar13 = StatPtr_STAT_UParticleSystemComponent_QueueFinalize;
  if (StatPtr_STAT_UParticleSystemComponent_QueueFinalize ==
      (FThreadSafeStaticStat<FStat_STAT_UParticleSystemComponent_QueueFinalize>)0x0) {
    pFVar12 = ::FName::FName(&local_80,"STAT_UParticleSystemComponent_QueueFinalize");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_UParticleSystemComponent_QueueFinalize>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_UParticleSystemComponent_QueueFinalize,*pFVar12,
                        L"ParticleComponent QueueFinalize GT","STATGROUP_Particles",
                        "STATCAT_Advanced",L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar13;
  bVar8 = false;
  bVar10 = false;
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  FVar18 = FVar19.ComparisonIndex.Value;
  uVar15 = FVar19.Number;
  if ((FVar18.Value == 0) && (uVar15 == 0)) {
LAB_148170b7e:
    bVar9 = false;
    FVar19 = local_b8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_c8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_c8[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_c0.ComparisonIndex.Value = FVar18.Value;
        local_c0.Number = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_c0,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                   ,0x7af);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148170b7e;
    local_d0 = FVar18.Value;
    uStack_cc = uVar15;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar9 = true;
  }
  local_78.AllocatorInstance.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  pTVar1 = &this->FinalizePrereq;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 4;
  if (pTVar1->Reference != (FBaseGraphTask *)0x0) {
    pFVar14 = this_02;
    if ((&local_78 <= pTVar1) &&
       (pFVar14 = (FTaskBase *)0x0, pTVar1 < &local_78.AllocatorInstance.SecondaryData)) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (local_78.ArrayNum == local_78.ArrayMax) {
        local_78.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                       (0x808,&local_78.AllocatorInstance,&local_78.ArrayMax);
      }
      pFVar14 = (FTaskBase *)(ulonglong)(uint)local_78.ArrayNum;
    }
    iVar20 = (int)pFVar14;
    local_78.ArrayNum = iVar20 + 1;
    FVar17 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_78;
    if (local_78.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar17 = local_78.AllocatorInstance.SecondaryData;
    }
    ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar17 + (longlong)iVar20 * 8))->Reference =
         (FBaseGraphTask *)0x0;
    pFVar5 = pTVar1->Reference;
    ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar17 + (longlong)iVar20 * 8))->Reference = pFVar5;
    if (pFVar5 != (FBaseGraphTask *)0x0) {
      LOCK();
      *(int *)&pFVar5->field_0x30 = *(int *)&pFVar5->field_0x30 + 1;
      UNLOCK();
    }
  }
  pFVar14 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xe0,8);
  if (pFVar14 != (FTaskBase *)0x0) {
    FBaseGraphTask::FBaseGraphTask((FBaseGraphTask *)pFVar14,&local_78);
    pFVar14->_padding_ = (longlong)&___7__TGraphTask_VFParticleFinalizeTask____6B_;
    this_02 = pFVar14;
  }
  this_02[1]._padding_ = (longlong)this->Target;
  UE::Tasks::Private::TranslatePriority(GameThread,local_d7,&local_d8);
  UE::Tasks::Private::FTaskBase::Init(this_02,L"GraphTask",local_d7[0],local_d8,None);
  LOCK();
  this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
  UNLOCK();
  UE::Tasks::Private::FTaskBase::TryLaunch(this_02,0xe0);
  pFVar14 = (FTaskBase *)param_2->Reference;
  LOCK();
  this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
  UNLOCK();
  if (pFVar14->ExtendedPriority == TaskEvent) {
    if (((pFVar14->NumLocks == (atomic<unsigned_int>)0x0) || (0x7fffffff < (uint)pFVar14->NumLocks))
       && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumLocks.load(std::memory_order_relaxed) >= NumInitialLocks && NumLocks.load(std::memory_order_relaxed) < ExecutionFlag"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                               ,0xe3,L"Prerequisites can be added only before the task is launched")
          , bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    LOCK();
    paVar2 = &pFVar14->NumLocks;
    aVar4 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + 1);
    UNLOCK();
    if ((int)aVar4 + 1U < 0x80000000) goto LAB_148170dba;
    pwVar21 = L"Max number of task prerequisites reached: %d";
    iVar20 = 0xea;
    pcVar16 = "PrevNumLocks + 1 < ExecutionFlag";
  }
  else {
    LOCK();
    paVar2 = &pFVar14->NumLocks;
    aVar4 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + 1);
    UNLOCK();
    if ((aVar4 == (atomic<unsigned_int>)0xfffffffe) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("PrevNumLocks + 1 < TNumericLimits<uint32>::Max()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                            ,0x1c2,L"Max number of nested tasks reached: %d"), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (0x80000000 < (uint)aVar4) goto LAB_148170dba;
    pwVar21 = L"Internal error: nested tasks can be added only during parent\'s execution (%u)";
    iVar20 = 0x1c3;
    pcVar16 = "PrevNumLocks > ExecutionFlag";
  }
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     (pcVar16,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                      ,iVar20,pwVar21);
  if (bVar11) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_148170dba:
  bVar11 = UE::Tasks::Private::FTaskBase::AddSubsequent(this_02,pFVar14);
  if (bVar11) {
    LOCK();
    this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
    UNLOCK();
    UE::Tasks::Private::FTaskBase::
    FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Push
              (&pFVar14->Prerequisites,this_02);
  }
  else {
    LOCK();
    pFVar14->NumLocks = (atomic<unsigned_int>)((int)pFVar14->NumLocks + -1);
    UNLOCK();
  }
  LOCK();
  paVar2 = &this_02->RefCount;
  aVar4 = *paVar2;
  *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
  UNLOCK();
  if (aVar4 == (atomic<unsigned_int>)0x1) {
    (**(code **)this_02->_padding_)(this_02);
  }
  pFVar6 = this->FinalizeDispatchCounter;
  if (pFVar6 != (FThreadSafeCounter *)0x0) {
    LOCK();
    iVar20 = pFVar6->Counter;
    pFVar6->Counter = pFVar6->Counter + -1;
    UNLOCK();
    if (iVar20 == 1) {
      if (((pTVar1->Reference == (FBaseGraphTask *)0x0) || (pTVar1->Reference->field_0xd0 != '\0'))
         && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                ("FinalizePrereq.GetReference() && !FinalizePrereq->IsComplete()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                                 ,0x7bb,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar14 = (FTaskBase *)pTVar1->Reference;
      if (pFVar14->ExtendedPriority == TaskEvent) {
        LOCK();
        pFVar14->RefCount = (atomic<unsigned_int>)((int)pFVar14->RefCount + 1);
        UNLOCK();
      }
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar14,0);
      ::operator_delete(this->FinalizeDispatchCounter,4);
    }
  }
  LOCK();
  paVar2 = &this_02->RefCount;
  aVar4 = *paVar2;
  *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
  UNLOCK();
  if (aVar4 == (atomic<unsigned_int>)0x1) {
    (**(code **)this_02->_padding_)(this_02,1);
  }
  FVar17 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_78;
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0
     ) {
    FVar17 = local_78.AllocatorInstance.SecondaryData;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)FVar17,local_78.ArrayNum);
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0
     ) {
    FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
  }
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar9) && (FVar19 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_a0.NameAndInfo.Index = FVar19.ComparisonIndex.Value;
      local_a0.NameAndInfo.Number = FVar19.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_a8);
      local_a0.StatData.Pad[4] = '\0';
      local_a0.StatData.Pad[5] = '\0';
      local_a0.StatData.Pad[6] = '\0';
      local_a0.StatData.Pad[7] = '\0';
      local_a0.StatData.Pad[0] = local_a8.s.LowPart._0_1_;
      local_a0.StatData.Pad[1] = local_a8.s.LowPart._1_1_;
      local_a0.StatData.Pad[2] = local_a8.s.LowPart._2_1_;
      local_a0.StatData.Pad[3] = local_a8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_a0);
      piVar3 = &this_00->ScopeCount;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  FTaskTagScope::~FTaskTagScope(&local_90);
  return;
}

// GetDesiredThread @ 1481797a0

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall FParticleAsyncTask::GetDesiredThread(FParticleAsyncTask *this)

{
  code *pcVar1;
  int iVar2;
  Type TVar3;
  bool bVar4;
  Type TVar5;
  Type TVar6;
  
  TVar6 = CPrio_ParticleAsyncTask.TaskPriorityIfForcedToNormalThreadPriority;
  TVar3 = CPrio_ParticleAsyncTask.TaskPriority;
  TVar5 = CPrio_ParticleAsyncTask.ThreadPriority;
  iVar2 = ENamedThreads::bHasHighPriorityThreads;
  if (((CPrio_ParticleAsyncTask.ThreadPriority == HighThreadPriority) ||
      (iVar2 = ENamedThreads::bHasBackgroundThreads,
      CPrio_ParticleAsyncTask.ThreadPriority == BackgroundThreadPriority)) && (iVar2 == 0)) {
    if (((CPrio_ParticleAsyncTask.TaskPriorityIfForcedToNormalThreadPriority & ~HighTaskPriority) !=
         MainQueue) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!(ThreadAndIndex & ~ThreadIndexMask) && !(TaskPriority & ~TaskPriorityMask)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                           ,0xcd,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      TVar5 = (*pcVar1)();
      return TVar5;
    }
  }
  else {
    if ((((CPrio_ParticleAsyncTask.ThreadPriority & ~ThreadPriorityMask) != MainQueue ||
          (CPrio_ParticleAsyncTask.ThreadPriority & ThreadPriorityMask) == ThreadPriorityMask) ||
        ((CPrio_ParticleAsyncTask.TaskPriority & ~HighTaskPriority) != MainQueue)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!(ThreadAndIndex & ~ThreadIndexMask) && !(ThreadPriority & ~ThreadPriorityMask) && (ThreadPriority & ThreadPriorityMask) != ThreadPriorityMask && !(TaskPriority & ~TaskPriorityMask)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                           ,0xb1,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      TVar5 = (*pcVar1)();
      return TVar5;
    }
    TVar6 = TVar5 | TVar3;
  }
  return TVar6 | AnyNormalThreadNormalTask;
}

