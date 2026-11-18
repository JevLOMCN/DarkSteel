// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 5

// FScheduledTask @ 146181c00

/* WARNING: Enum "Type": Some values do not have unique names */

FScheduledTask * __thiscall
UE::MovieScene::FScheduledTask::FScheduledTask(FScheduledTask *this,FScheduledTask *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  byte bVar2;
  
  (this->ComputedSubsequents).Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComputedSubsequents).Entries.AllocatorInstance.Data =
       (param_1->ComputedSubsequents).Entries.AllocatorInstance.Data;
  (param_1->ComputedSubsequents).Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComputedSubsequents).Entries.ArrayNum = (param_1->ComputedSubsequents).Entries.ArrayNum;
  (this->ComputedSubsequents).Entries.ArrayMax = (param_1->ComputedSubsequents).Entries.ArrayMax;
  (param_1->ComputedSubsequents).Entries.ArrayNum = 0;
  (param_1->ComputedSubsequents).Entries.ArrayMax = 0;
  (this->ChildTasks).Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildTasks).Entries.ArrayNum = 0;
  (this->ChildTasks).Entries.ArrayMax = 0;
  (this->TaskFunction).field0_0x0 = (param_1->TaskFunction).field0_0x0;
  (this->TaskContext).Object = (param_1->TaskContext).Object;
  pTVar1 = (param_1->TaskContext).SharedReferenceCount.ReferenceController;
  (this->TaskContext).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::FString::FString(&this->DebugName,&param_1->DebugName);
  (this->StatId).StatIdPtr = (param_1->StatId).StatIdPtr;
  (this->WriteContextOffset).SystemSerial = (param_1->WriteContextOffset).SystemSerial;
  (this->LockedComponentData).PreLockedComponentData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->LockedComponentData).PreLockedComponentData.AllocatorInstance.Data =
       (param_1->LockedComponentData).PreLockedComponentData.AllocatorInstance.Data;
  (param_1->LockedComponentData).PreLockedComponentData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->LockedComponentData).PreLockedComponentData.ArrayNum =
       (param_1->LockedComponentData).PreLockedComponentData.ArrayNum;
  (this->LockedComponentData).PreLockedComponentData.ArrayMax =
       (param_1->LockedComponentData).PreLockedComponentData.ArrayMax;
  (param_1->LockedComponentData).PreLockedComponentData.ArrayNum = 0;
  (param_1->LockedComponentData).PreLockedComponentData.ArrayMax = 0;
  (this->LockedComponentData).AllocationIndex = (param_1->LockedComponentData).AllocationIndex;
  this->NumPrerequisites = param_1->NumPrerequisites;
  (this->WaitCount).Payload = (param_1->WaitCount).Payload;
  (this->ChildCompleteCount).Payload = (param_1->ChildCompleteCount).Payload;
  (this->Parent).Index = (param_1->Parent).Index;
  this->NumChildren = param_1->NumChildren;
  this->TaskFunctionType = param_1->TaskFunctionType;
  bVar2 = (this->bForceGameThread ^ param_1->bForceGameThread) & 1 ^ this->field_0x83;
  this->field_0x83 = bVar2;
  this->field_0x83 = (bVar2 ^ param_1->field_0x83) & 2 ^ bVar2;
  return this;
}

// FScheduledTask @ 146181d20

/* WARNING: Enum "Type": Some values do not have unique names */

FScheduledTask * __thiscall
UE::MovieScene::FScheduledTask::FScheduledTask
          (FScheduledTask *this,FEntityAllocationWriteContext param_1)

{
  undefined1 *puVar1;
  FName *pFVar2;
  FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_AnonymousTask> FVar3;
  FName local_res8;
  
  (this->ComputedSubsequents).Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComputedSubsequents).Entries.ArrayNum = 0;
  (this->ComputedSubsequents).Entries.ArrayMax = 0;
  (this->ChildTasks).Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildTasks).Entries.ArrayNum = 0;
  (this->ChildTasks).Entries.ArrayMax = 0;
  (this->TaskContext).Object = (ITaskContext *)0x0;
  (this->TaskContext).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugName).Data.ArrayNum = 0;
  (this->DebugName).Data.ArrayMax = 0;
  FVar3 = StatPtr_MovieSceneEval_AnonymousTask;
  if (StatPtr_MovieSceneEval_AnonymousTask ==
      (FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_AnonymousTask>)0x0) {
    pFVar2 = ::FName::FName(&local_res8,"MovieSceneEval_AnonymousTask");
    FVar3 = (FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_AnonymousTask>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_AnonymousTask,*pFVar2,
                       L"Anonymous MovieScene Task","STATGROUP_MovieSceneECS","STATCAT_Advanced",
                       L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,MCR_Invalid);
  }
  (this->StatId).StatIdPtr = (TStatIdData *)FVar3;
  this->bForceGameThread = '\0';
  this->bForceInline = '\0';
  (this->WriteContextOffset).SystemSerial = param_1.SystemSerial;
  (this->LockedComponentData).PreLockedComponentData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->LockedComponentData).PreLockedComponentData.ArrayNum = 0;
  (this->LockedComponentData).PreLockedComponentData.ArrayMax = 0;
  (this->ChildCompleteCount).Payload = 0;
  this->NumPrerequisites = 0;
  this->WaitCount = 0;
  this->NumChildren = 0;
  this->TaskFunctionType = None;
  (this->LockedComponentData).AllocationIndex = 0xffff;
  (this->Parent).Index = -1;
  return this;
}

// ~FScheduledTask @ 146185970

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::MovieScene::FScheduledTask::~FScheduledTask(FScheduledTask *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->LockedComponentData).PreLockedComponentData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DebugName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TaskContext).SharedReferenceCount.ReferenceController);
  DestructItems<UE::MovieScene::TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>::FEntry,int>
            ((FEntry *)(this->ChildTasks).Entries.AllocatorInstance.Data,
             (this->ChildTasks).Entries.ArrayNum);
  pFVar1 = (this->ChildTasks).Entries.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::MovieScene::TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>::FEntry,int>
            ((FEntry *)(this->ComputedSubsequents).Entries.AllocatorInstance.Data,
             (this->ComputedSubsequents).Entries.ArrayNum);
  pFVar1 = (this->ComputedSubsequents).Entries.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Run @ 1461cfc50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FScheduledTask::Run
          (FScheduledTask *this,FEntitySystemScheduler *param_1,FTaskExecutionFlags param_2)

{
  int *piVar1;
  FEntitySystemMaybeAtomicInt32 *pFVar2;
  EType EVar3;
  TStatIdData *pTVar4;
  FEntityManager *pFVar5;
  _func___cdecl_void_ITaskContext_ptr_FEntityAllocationWriteContext *p_Var6;
  FEntityAllocationWriteContext FVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  EEntityThreadingModel EVar13;
  FEntityAllocation *pFVar14;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  int iVar15;
  wchar_t *pwVar16;
  FName FVar17;
  ushort uVar18;
  bool bVar20;
  FColor_u_0 local_res20 [2];
  FName local_d8 [2];
  ITaskContext local_c8;
  uint uStack_c0;
  undefined4 uStack_bc;
  FName local_b8;
  undefined8 local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  LARGE_INTEGER local_98;
  FStatMessage local_90;
  FEntityAllocationProxy local_80;
  undefined4 local_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  ITaskContext local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  ITaskContext local_48;
  uint uStack_40;
  undefined4 uStack_3c;
  ulonglong uVar19;
  
  uVar19 = 0;
  if (this->TaskFunctionType == None) goto LAB_1461d00b1;
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
  }
  if ((this->DebugName).Data.ArrayNum == 0) {
    pwVar16 = L"";
  }
  else {
    pwVar16 = (wchar_t *)(this->DebugName).Data.AllocatorInstance.Data;
  }
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (pwVar16,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneTaskScheduler.cpp"
               ,0x5a);
  }
  pTVar4 = (this->StatId).StatIdPtr;
  bVar10 = false;
  bVar9 = false;
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  bVar12 = false;
  bVar11 = false;
  FVar17 = *(FName *)&pTVar4->Name;
  if ((FVar17.ComparisonIndex.Value.Value == 0) && (FVar17.Number == 0)) {
LAB_1461cfdd0:
    bVar10 = bVar12;
    bVar9 = bVar11;
    bVar11 = false;
    FVar17 = local_b8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(pTVar4->StatDescriptionAnsi).Ptr);
      bVar10 = false;
      bVar9 = true;
      bVar12 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d8[0].ComparisonIndex.Value = FVar17.ComparisonIndex.Value.Value;
        local_d8[0].Number = FVar17.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (local_d8,(pTVar4->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneTaskScheduler.cpp"
                   ,0x5e);
        bVar10 = true;
        bVar9 = true;
        bVar12 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1461cfdd0;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    bVar11 = true;
  }
  local_a8 = (param_1->WriteContextBase).SystemSerial + (this->WriteContextOffset).SystemSerial;
  EVar3 = this->TaskFunctionType;
  if (EVar3 == Unbound) {
    (*(this->TaskFunction).field0_0x0.UnboundTask)((this->TaskContext).Object,local_a8);
  }
  else if (EVar3 == AllocationPtr) {
    if (((this->LockedComponentData).AllocationIndex == 0xffff) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("LockedComponentData.AllocationIndex != ((uint16) 0xffff)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneTaskScheduler.cpp"
                            ,0x69,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_80.Manager = param_1->EntityManager;
    p_Var6 = (this->TaskFunction).field0_0x0.UnboundTask;
    FVar7.SystemSerial = (ulong64)(this->TaskContext).Object;
    local_80.AllocationIndex = (int)(this->LockedComponentData).AllocationIndex;
    pFVar14 = FEntityAllocationProxy::GetAllocation(&local_80);
    (*p_Var6)((ITaskContext *)pFVar14,FVar7);
  }
  else if (EVar3 == AllocationItem) {
    if (((this->LockedComponentData).AllocationIndex == 0xffff) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("LockedComponentData.AllocationIndex != ((uint16) 0xffff)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneTaskScheduler.cpp"
                            ,0x71,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar5 = param_1->EntityManager;
    uStack_c0 = (uint)(this->LockedComponentData).AllocationIndex;
    local_c8._0_4_ = SUB84(pFVar5,0);
    local_c8._4_4_ = SUB84((ulonglong)pFVar5 >> 0x20,0);
    local_48._0_4_ = local_c8._0_4_;
    local_48._4_4_ = local_c8._4_4_;
    uStack_3c = uStack_bc;
    local_c8 = (ITaskContext)pFVar5;
    uStack_40 = uStack_c0;
    (*(this->TaskFunction).field0_0x0.UnboundTask)
              (&local_48,(FEntityAllocationWriteContext)(this->TaskContext).Object);
  }
  else if (EVar3 == PreLockedAllocationItem) {
    if (((this->LockedComponentData).AllocationIndex == 0xffff) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("LockedComponentData.AllocationIndex != ((uint16) 0xffff)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneTaskScheduler.cpp"
                            ,0x78,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_c8 = (ITaskContext)param_1->EntityManager;
    iVar15 = (this->LockedComponentData).PreLockedComponentData.ArrayNum;
    uStack_c0 = (uint)(this->LockedComponentData).AllocationIndex;
    local_a8 = (ulong64)(this->LockedComponentData).PreLockedComponentData.AllocatorInstance.Data;
    if ((iVar15 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_68 = (undefined4)local_a8;
    uStack_64 = local_a8._4_4_;
    uStack_5c = uStack_9c;
    local_58._0_4_ = local_c8._0_4_;
    local_58._4_4_ = local_c8._4_4_;
    uStack_50 = uStack_c0;
    uStack_4c = uStack_bc;
    iStack_a0 = iVar15;
    iStack_60 = iVar15;
    (*(this->TaskFunction).field0_0x0.UnboundTask)
              (&local_58,(FEntityAllocationWriteContext)&local_68);
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar11) && (FVar17 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_90.NameAndInfo.Index = FVar17.ComparisonIndex.Value;
      local_90.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_98);
      local_90.StatData.Pad[4] = '\0';
      local_90.StatData.Pad[5] = '\0';
      local_90.StatData.Pad[6] = '\0';
      local_90.StatData.Pad[7] = '\0';
      local_90.StatData.Pad[0] = local_98.s.LowPart._0_1_;
      local_90.StatData.Pad[1] = local_98.s.LowPart._1_1_;
      local_90.StatData.Pad[2] = local_98.s.LowPart._2_1_;
      local_90.StatData.Pad[3] = local_98.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_90);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
LAB_1461d00b1:
  if (this->NumChildren != 0) {
    EVar13 = FEntityManager::GetThreadingModel(param_1->EntityManager);
    if (EVar13 == NoThreading) {
      (this->ChildCompleteCount).Payload = (this->ChildCompleteCount).Payload + 1;
    }
    else {
      LOCK();
      (this->ChildCompleteCount).Payload = (this->ChildCompleteCount).Payload + 1;
      UNLOCK();
    }
    if (this->NumChildren != 0) {
      do {
        FEntitySystemScheduler::PrerequisiteCompleted(param_1,this + uVar19 + 1,(int *)0x0);
        uVar18 = (short)uVar19 + 1;
        uVar19 = (ulonglong)uVar18;
      } while (uVar18 < this->NumChildren);
    }
    EVar13 = FEntityManager::GetThreadingModel(param_1->EntityManager);
    if (EVar13 == NoThreading) {
      iVar15 = (this->ChildCompleteCount).Payload;
      (this->ChildCompleteCount).Payload = iVar15 + -1;
    }
    else {
      LOCK();
      pFVar2 = &this->ChildCompleteCount;
      iVar15 = pFVar2->Payload;
      pFVar2->Payload = pFVar2->Payload + -1;
      UNLOCK();
    }
    if (iVar15 != 1) {
      return;
    }
  }
  FEntitySystemScheduler::CompleteTask(param_1,this,param_2);
  return;
}

// SetFunction @ 1461d22e0

/* WARNING: Removing unreachable block (ram,0x0001461d2362) */
/* WARNING: Removing unreachable block (ram,0x0001461d2387) */
/* WARNING: Removing unreachable block (ram,0x0001461d23a6) */
/* WARNING: Removing unreachable block (ram,0x0001461d23cb) */
/* WARNING: Removing unreachable block (ram,0x0001461d231e) */
/* WARNING: Removing unreachable block (ram,0x0001461d2343) */
/* WARNING: Removing unreachable block (ram,0x0001461d23e9) */
/* WARNING: Removing unreachable block (ram,0x0001461d240e) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FScheduledTask::SetFunction
          (FScheduledTask *this,
          TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
          *param_1)

{
  uchar uVar1;
  
  uVar1 = param_1->TypeIndex;
  if (uVar1 == '\0') {
    (this->TaskFunction).field0_0x0 = (FScheduledTaskFuncionPtr_u_0)param_1->_padding_;
    this->TaskFunctionType = Unbound;
  }
  else {
    if (uVar1 == '\x01') {
      (this->TaskFunction).field0_0x0 = (FScheduledTaskFuncionPtr_u_0)param_1->_padding_;
      this->TaskFunctionType = AllocationPtr;
      return;
    }
    if (uVar1 == '\x02') {
      (this->TaskFunction).field0_0x0 = (FScheduledTaskFuncionPtr_u_0)param_1->_padding_;
      this->TaskFunctionType = AllocationItem;
      return;
    }
    if (uVar1 == '\x03') {
      (this->TaskFunction).field0_0x0 = (FScheduledTaskFuncionPtr_u_0)param_1->_padding_;
      this->TaskFunctionType = PreLockedAllocationItem;
      return;
    }
  }
  return;
}

