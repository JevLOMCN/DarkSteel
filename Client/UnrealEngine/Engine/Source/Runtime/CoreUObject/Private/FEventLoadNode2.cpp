// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 10

// FEventLoadNode2 @ 1423088d0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FEventLoadNode2 * __thiscall
FEventLoadNode2::FEventLoadNode2
          (FEventLoadNode2 *this,FAsyncLoadEventSpec *param_1,FAsyncPackage2 *param_2,int param_3,
          int param_4)

{
  code *pcVar1;
  bool bVar2;
  FEventLoadNode2 *pFVar3;
  
  this->Package = param_2;
  this->Prev = (FEventLoadNode2 *)0x0;
  this->Next = (FEventLoadNode2 *)0x0;
  this->DependenciesCount = 0;
  this->DependenciesCapacity = 0;
  this->Priority = 0;
  this->BarrierCount = (atomic<int>)param_4;
  this->Spec = param_1;
  this->ImportOrExportIndex = param_3;
  this->QueueStatus = '\0';
  this->bIsUpdatingDependencies = (atomic<bool>)0x0;
  this->bIsDone = (atomic<bool>)0x0;
  if (param_1 == (FAsyncLoadEventSpec *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Spec",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0x16b1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FEventLoadNode2 *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (this->Package == (FAsyncPackage2 *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Package",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0x16b2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FEventLoadNode2 *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

// AddBarrier @ 142310360

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FEventLoadNode2::AddBarrier(FEventLoadNode2 *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bIsDone == (atomic<bool>)0x0) {
    LOCK();
    this->BarrierCount = (atomic<int>)((int)this->BarrierCount + param_1);
    UNLOCK();
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!bIsDone.load(std::memory_order_relaxed)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                     ,0x16ef,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  LOCK();
  this->BarrierCount = (atomic<int>)((int)this->BarrierCount + param_1);
  UNLOCK();
  return;
}

// AddBarrier @ 1423103d0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FEventLoadNode2::AddBarrier(FEventLoadNode2 *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bIsDone == (atomic<bool>)0x0) {
    LOCK();
    this->BarrierCount = (atomic<int>)((int)this->BarrierCount + 1);
    UNLOCK();
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!bIsDone.load(std::memory_order_relaxed)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                     ,0x16e9,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  LOCK();
  this->BarrierCount = (atomic<int>)((int)this->BarrierCount + 1);
  UNLOCK();
  return;
}

// DependsOn @ 142317e80

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FEventLoadNode2::DependsOn(FEventLoadNode2 *this,FEventLoadNode2 *param_1)

{
  uint uVar1;
  FEventLoadNode2_u_16 FVar2;
  FAsyncLoadEventGraphAllocator *pFVar3;
  FEventLoadNode2 **_Src;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  FEventLoadNode2_u_16 *pFVar7;
  FEventLoadNode2 *_Dst;
  bool bVar8;
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId5815,"DependsOn",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x16b7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5815);
  }
  if ((this->bIsDone != (atomic<bool>)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bIsDone.load(std::memory_order_relaxed)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x16b8,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  do {
    LOCK();
    bVar6 = param_1->bIsUpdatingDependencies == (atomic<bool>)0x0;
    if (bVar6) {
      param_1->bIsUpdatingDependencies = (atomic<bool>)0x1;
    }
    UNLOCK();
  } while (!bVar6);
  if (param_1->bIsDone != (atomic<bool>)0x0) goto LAB_1423180aa;
  LOCK();
  this->BarrierCount = (atomic<int>)((int)this->BarrierCount + 1);
  UNLOCK();
  uVar1 = param_1->DependenciesCount;
  if (uVar1 == 0) {
    (param_1->field2_0x10).SingleDependent = this;
    param_1->DependenciesCount = 1;
    goto LAB_1423180aa;
  }
  if (uVar1 == 1) {
    bVar6 = -1 < CpuChannel->Enabled;
    if (bVar6) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId5838,"DependsOnAlloc",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                 ,0x16ce);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5838);
    }
    FVar2 = param_1->field2_0x10;
    param_1->DependenciesCapacity = 4;
    pFVar3 = this->Package->GraphAllocator;
    LOCK();
    pFVar3->TotalArcCount = (atomic<__int64>)((longlong)pFVar3->TotalArcCount + 4);
    UNLOCK();
    LOCK();
    pFVar3->TotalAllocated = (atomic<__int64>)((longlong)pFVar3->TotalAllocated + 0x20);
    UNLOCK();
    pFVar7 = FMemory::Malloc(0x20,0);
    (param_1->field2_0x10).SingleDependent = (FEventLoadNode2 *)pFVar7;
    *pFVar7 = FVar2;
joined_r0x00014231808b:
    if (bVar6) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  else if (uVar1 == param_1->DependenciesCapacity) {
    bVar6 = -1 < CpuChannel->Enabled;
    if (bVar6) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId5847,"DependsOnRealloc",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                 ,0x16d7);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5847);
    }
    uVar1 = param_1->DependenciesCapacity;
    _Src = (param_1->field2_0x10).MultipleDependents;
    uVar5 = uVar1 * 2;
    param_1->DependenciesCapacity = uVar5;
    pFVar3 = this->Package->GraphAllocator;
    LOCK();
    pFVar3->TotalArcCount = (atomic<__int64>)((longlong)pFVar3->TotalArcCount + (ulonglong)uVar5);
    UNLOCK();
    LOCK();
    pFVar3->TotalAllocated =
         (atomic<__int64>)((longlong)pFVar3->TotalAllocated + (ulonglong)uVar5 * 8);
    UNLOCK();
    _Dst = FMemory::Malloc((ulonglong)uVar5 * 8,0);
    (param_1->field2_0x10).SingleDependent = _Dst;
    memcpy(_Dst,_Src,(ulonglong)uVar1 << 3);
    FAsyncLoadEventGraphAllocator::FreeArcs(this->Package->GraphAllocator,_Src,uVar1);
    goto joined_r0x00014231808b;
  }
  (&((param_1->field2_0x10).SingleDependent)->Spec)[param_1->DependenciesCount] =
       (FAsyncLoadEventSpec *)this;
  param_1->DependenciesCount = param_1->DependenciesCount + 1;
LAB_1423180aa:
  LOCK();
  param_1->bIsUpdatingDependencies = (atomic<bool>)0x0;
  UNLOCK();
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  return;
}

// Execute @ 142321290

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

EEventLoadNodeExecutionResult __thiscall
FEventLoadNode2::Execute(FEventLoadNode2 *this,FAsyncLoadingThreadState2 *param_1)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  EEventLoadNodeExecutionResult EVar7;
  int iVar8;
  FEventLoadNode2 *local_18 [2];
  
  param_1->bIsActive = (atomic<bool>)0x1;
  if (this->BarrierCount != (atomic<int>)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("BarrierCount.load(std::memory_order_relaxed) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0x1757,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      EVar7 = (*pcVar5)();
      return EVar7;
    }
  }
  pFVar4 = (param_1->CurrentlyExecutingEventNodeStack).AllocatorInstance.Data;
  local_18[0] = this;
  if ((pFVar4 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      pFVar4 + (longlong)(param_1->CurrentlyExecutingEventNodeStack).ArrayMax * 8)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      EVar7 = (*pcVar5)();
      return EVar7;
    }
  }
  iVar8 = (param_1->CurrentlyExecutingEventNodeStack).ArrayNum;
  piVar2 = &(param_1->CurrentlyExecutingEventNodeStack).ArrayMax;
  if (iVar8 == *piVar2) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(param_1->CurrentlyExecutingEventNodeStack).AllocatorInstance,piVar2);
  }
  (param_1->CurrentlyExecutingEventNodeStack).ArrayNum = iVar8 + 1;
  *(FEventLoadNode2 **)
   ((param_1->CurrentlyExecutingEventNodeStack).AllocatorInstance.Data + (longlong)iVar8 * 8) =
       local_18[0];
  EVar7 = (*this->Spec->Func)(param_1,this->Package,this->ImportOrExportIndex);
  if ((param_1->CurrentlyExecutingEventNodeStack).ArrayNum < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      EVar7 = (*pcVar5)();
      return EVar7;
    }
  }
  iVar8 = (param_1->CurrentlyExecutingEventNodeStack).ArrayNum;
  uVar1 = iVar8 - 1;
  pFVar4 = (param_1->CurrentlyExecutingEventNodeStack).AllocatorInstance.Data +
           (longlong)(int)uVar1 * 8;
  iVar8 = ~uVar1 + iVar8;
  if (iVar8 != 0) {
    memmove(pFVar4,pFVar4 + 8,(longlong)iVar8 << 3);
  }
  piVar3 = &(param_1->CurrentlyExecutingEventNodeStack).ArrayNum;
  *piVar3 = *piVar3 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,&(param_1->CurrentlyExecutingEventNodeStack).AllocatorInstance,
             (param_1->CurrentlyExecutingEventNodeStack).ArrayNum,piVar2);
  if (EVar7 == Complete) {
    ProcessDependencies(this,param_1);
  }
  return EVar7;
}

// Fire @ 142323d40

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FEventLoadNode2::Fire(FEventLoadNode2 *this,FAsyncLoadingThreadState2 *param_1)

{
  FSharedMutex *pFVar1;
  undefined1 *puVar2;
  FWindowsRecursiveMutex *lpCriticalSection;
  FManualResetEvent FVar3;
  EExecutionType EVar4;
  undefined4 uVar5;
  atomic<unsigned_int> aVar6;
  FAsyncLoadEventQueue2 *pFVar7;
  atomic<unsigned_char> *paVar8;
  code *pcVar9;
  EEventLoadNodeExecutionResult EVar10;
  bool bVar11;
  int iVar12;
  uint *puVar13;
  FTlsAutoCleanup *pFVar14;
  FGCCSyncObject *pFVar15;
  TExecutableTask<_private:_void___cdecl_FEventLoadNode2::Fire(FAsyncLoadingThreadState2_*)_::_19_::<lambda_1>_>
  *this_00;
  atomic<__int64> aVar16;
  undefined1 local_res8 [8];
  <lambda_1> local_res18;
  code *local_28;
  undefined1 *local_20;
  
  EVar4 = this->Spec->ExecutionType;
  if ((EVar4 == Immediate) && (param_1 != (FAsyncLoadingThreadState2 *)0x0)) {
    puVar13 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
    local_20 = local_res8;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar14 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_28,puVar13);
    uVar5 = *(undefined4 *)(pFVar14 + 10);
    *(undefined4 *)(pFVar14 + 10) = 0;
    EVar10 = Execute(this,param_1);
    if ((EVar10 != Complete) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Result == EEventLoadNodeExecutionResult::Complete",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                            ,0x1732,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    *(undefined4 *)(pFVar14 + 10) = uVar5;
    return;
  }
  if ((((!GAllowMultithreadedLoading) || (EVar4 != Parallel)) ||
      (bVar11 = FAsyncPackage2::CanRunNodeAsync(this->Package,this->Spec), !bVar11)) ||
     (pFVar15 = FGCCSyncObject::Get(), (pFVar15->GCCounter).Counter != 0)) goto LAB_142323ecc;
  aVar6 = (pFVar15->SharedMutex).State;
  if (((uint)aVar6 & 3) == 0) {
    LOCK();
    bVar11 = aVar6 == (pFVar15->SharedMutex).State;
    if (bVar11) {
      (pFVar15->SharedMutex).State = (atomic<unsigned_int>)((int)aVar6 + 8);
    }
    UNLOCK();
    if (!bVar11) goto LAB_142323e36;
  }
  else {
LAB_142323e36:
    UE::FSharedMutex::LockSharedSlow(&pFVar15->SharedMutex);
  }
  bVar11 = (pFVar15->GCCounter).Counter == 0;
  if (bVar11) {
    LOCK();
    (pFVar15->AsyncCounter).Counter = (pFVar15->AsyncCounter).Counter + 1;
    UNLOCK();
  }
  LOCK();
  pFVar1 = &pFVar15->SharedMutex;
  aVar6 = pFVar1->State;
  pFVar1->State = (atomic<unsigned_int>)((int)pFVar1->State + -8);
  UNLOCK();
  if (((uint)aVar6 & 0xfffffffb) == 10) {
    UE::FSharedMutex::WakeWaitingThread(&pFVar15->SharedMutex);
  }
  if (bVar11) {
    local_res18.__this = this;
    this_00 = UE::Tasks::Private::TExecutableTask<`FEventLoadNode2::Fire'::__l19::<lambda_1>_>::
              Create(L"ParallelLoadingWork",&local_res18,Default,None,None);
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_00,0x100);
    if (this_00 ==
        (TExecutableTask<_private:_void___cdecl_FEventLoadNode2::Fire(FAsyncLoadingThreadState2_*)_::_19_::<lambda_1>_>
         *)0x0) {
      return;
    }
    LOCK();
    puVar2 = &this_00->field_0x30;
    iVar12 = *(int *)puVar2;
    *(int *)puVar2 = *(int *)puVar2 + -1;
    UNLOCK();
    if (iVar12 != 1) {
      return;
    }
    (*(code *)**(undefined8 **)this_00)(this_00,1);
    return;
  }
LAB_142323ecc:
  pFVar7 = this->Spec->EventQueue;
  if (pFVar7->OwnerThread == param_1) {
    if ((this->QueueStatus != '\0') &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("!Node->QueueStatus",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                            ,0x17ac,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar12 = (this->Package->Desc).Priority;
    this->QueueStatus = '\x01';
    TIoPriorityQueue<FEventLoadNode2>::Push(&pFVar7->LocalQueue,this,iVar12);
  }
  else {
    lpCriticalSection = &pFVar7->ExternalCritical;
    iVar12 = (this->Package->Desc).Priority;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((this->QueueStatus != '\0') &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("!Node->QueueStatus",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                            ,0x17b7,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    this->QueueStatus = '\x02';
    TIoPriorityQueue<FEventLoadNode2>::Push(&pFVar7->ExternalQueue,this,iVar12);
    if ((pFVar7->ExternalQueue).InternalQueues.ArrayNum == 0) {
      aVar16 = (atomic<__int64>)0x8000000000000000;
    }
    else {
      iVar12 = TIoPriorityQueue<FEventLoadNode2>::GetMaxPriority(&pFVar7->ExternalQueue);
      aVar16 = (atomic<__int64>)(longlong)iVar12;
    }
    LOCK();
    pFVar7->ExternalQueueState = aVar16;
    UNLOCK();
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (pFVar7->Zenaphore != (FZenaphore *)0x0) {
      FZenaphore::NotifyOne(pFVar7->Zenaphore);
    }
    paVar8 = &pFVar7->WakeEvent->State;
    if (paVar8 != (atomic<unsigned_char> *)0x0) {
      LOCK();
      FVar3.State = *paVar8;
      *paVar8 = (atomic<unsigned_char>)0x1;
      UNLOCK();
      if (((byte)FVar3.State & 3) == 2) {
        UE::ParkingLot::WakeAll(paVar8);
      }
    }
  }
  return;
}

// GetSyncLoadContextId @ 142327600

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

ulong64 __thiscall FEventLoadNode2::GetSyncLoadContextId(FEventLoadNode2 *this)

{
  return (ulong64)this->Package->SyncLoadContextId;
}

// ParallelLoadingWork @ 14232de80

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FEventLoadNode2::ParallelLoadingWork(FEventLoadNode2 *this)

{
  undefined4 uVar1;
  FTlsAutoCleanup FVar2;
  atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*> aVar3;
  atomic<TMpscQueue<FAsyncLoadingSyncLoadContext_*,FMemory>::FNode_*> aVar4;
  code *pcVar5;
  atomic<TMpscQueue<FAsyncLoadingSyncLoadContext_*,FMemory>::FNode_*> aVar6;
  atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*> aVar7;
  bool bVar8;
  EEventLoadNodeExecutionResult EVar9;
  LPVOID pvVar10;
  uint *puVar11;
  FTlsAutoCleanup *pFVar12;
  undefined1 local_res8 [8];
  FAsyncLoadingThreadState2 local_b8;
  code *local_38;
  undefined1 *local_30;
  FTaskTagScope local_28;
  
  FTaskTagScope::FTaskTagScope(&local_28,EParallelLoadingThread);
  local_b8.NodesToFire.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.NodesToFire.ArrayNum = 0;
  local_b8.NodesToFire.ArrayMax = 0;
  local_b8.PackagesOnStack.ArrayNum = 0;
  local_b8.PackagesOnStack.ArrayMax = 0;
  local_b8.SyncLoadContextsCreatedOnOtherThreads.Head =
       (atomic<TMpscQueue<FAsyncLoadingSyncLoadContext_*,FMemory>::FNode_*>)0x0;
  local_b8.CurrentlyExecutingEventNodeStack.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.CurrentlyExecutingEventNodeStack.ArrayNum = 0;
  local_b8.CurrentlyExecutingEventNodeStack.ArrayMax = 0;
  local_b8.SyncLoadContextStack.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.SyncLoadContextStack.ArrayNum = 0;
  local_b8.SyncLoadContextStack.ArrayMax = 0;
  local_b8.PackagesOnStack.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.SyncLoadContextsCreatedOnOtherThreads.Head =
       (atomic<TMpscQueue<FAsyncLoadingSyncLoadContext_*,FMemory>::FNode_*>)FMemory::Malloc(0x10,8);
  *(undefined8 *)local_b8.SyncLoadContextsCreatedOnOtherThreads.Head = 0;
  local_b8.PackagesToReprioritize.Head = (atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*>)0x0;
  local_b8.SyncLoadContextsCreatedOnOtherThreads.Tail =
       (FNode *)local_b8.SyncLoadContextsCreatedOnOtherThreads.Head;
  local_b8.PackagesToReprioritize.Head =
       (atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*>)FMemory::Malloc(0x10,8);
  *(undefined8 *)local_b8.PackagesToReprioritize.Head = 0;
  local_b8.TimeLimit = 0.0;
  local_b8.StartTime = 0.0;
  local_b8.LastTestTime = __real_bff0000000000000;
  local_b8.bIsAsyncLoadingThread = false;
  local_b8.bCanAccessAsyncLoadingThreadData = false;
  local_b8.bIsActive = (atomic<bool>)0x0;
  local_b8.bShouldFireNodes = true;
  local_b8.bUseTimeLimit = false;
  local_b8.PackagesToReprioritize.Tail = (FNode *)local_b8.PackagesToReprioritize.Head;
  if ((FAsyncLoadingThreadState2::TlsSlot == 0xffffffff) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("FPlatformTLS::IsValidTlsSlot(TlsSlot)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0xc89,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pvVar10 = TlsGetValue(FAsyncLoadingThreadState2::TlsSlot);
  if ((pvVar10 != (LPVOID)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("FAsyncLoadingThreadState2::Get() == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x1701,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((FAsyncLoadingThreadState2::TlsSlot == 0xffffffff) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("FPlatformTLS::IsValidTlsSlot(TlsSlot)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0xc7c,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pvVar10 = TlsGetValue(FAsyncLoadingThreadState2::TlsSlot);
  if ((pvVar10 != (LPVOID)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!FPlatformTLS::GetTlsValue(TlsSlot)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0xc7d,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  TlsSetValue(FAsyncLoadingThreadState2::TlsSlot,&local_b8);
  puVar11 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_30 = local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar12 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_38,puVar11);
  uVar1 = *(undefined4 *)(pFVar12 + 10);
  *(undefined4 *)(pFVar12 + 10) = 0;
  pFVar12[8] = (FTlsAutoCleanup)this->Package;
  EVar9 = Execute(this,&local_b8);
  if ((EVar9 != Complete) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result == EEventLoadNodeExecutionResult::Complete",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x1721,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar2 = pFVar12[0x2f];
  pFVar12[8] = (FTlsAutoCleanup)0x0;
  *(undefined4 *)((longlong)FVar2 + 0x18) = 0;
  if (*(int *)((longlong)FVar2 + 0x1c) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)((longlong)FVar2 + 0x10),0,(int *)((longlong)FVar2 + 0x1c)
              );
  }
  *(undefined4 *)(pFVar12 + 10) = uVar1;
  if ((FAsyncLoadingThreadState2::TlsSlot == 0xffffffff) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("FPlatformTLS::IsValidTlsSlot(TlsSlot)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0xc89,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pvVar10 = TlsGetValue(FAsyncLoadingThreadState2::TlsSlot);
  if ((*(int *)((longlong)pvVar10 + 0x18) != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("FAsyncLoadingThreadState2::Get()->CurrentlyExecutingEventNodeStack.Num() == 0"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x1707,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((FAsyncLoadingThreadState2::TlsSlot == 0xffffffff) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("FPlatformTLS::IsValidTlsSlot(TlsSlot)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0xc83,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  TlsSetValue(FAsyncLoadingThreadState2::TlsSlot,(LPVOID)0x0);
  aVar3 = (local_b8.PackagesToReprioritize.Tail)->Next;
  FMemory::Free(local_b8.PackagesToReprioritize.Tail);
  aVar7 = (atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*>)
          local_b8.PackagesToReprioritize.Tail;
  while (local_b8.PackagesToReprioritize.Tail = (FNode *)aVar3,
        (atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*>)local_b8.PackagesToReprioritize.Tail
        != (atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*>)0x0) {
    aVar3 = (local_b8.PackagesToReprioritize.Tail)->Next;
    FMemory::Free(local_b8.PackagesToReprioritize.Tail);
    aVar7 = (atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*>)
            local_b8.PackagesToReprioritize.Tail;
  }
  aVar4 = (local_b8.SyncLoadContextsCreatedOnOtherThreads.Tail)->Next;
  local_b8.PackagesToReprioritize.Tail = (FNode *)aVar7;
  FMemory::Free(local_b8.SyncLoadContextsCreatedOnOtherThreads.Tail);
  aVar6 = (atomic<TMpscQueue<FAsyncLoadingSyncLoadContext_*,FMemory>::FNode_*>)
          local_b8.SyncLoadContextsCreatedOnOtherThreads.Tail;
  while (local_b8.SyncLoadContextsCreatedOnOtherThreads.Tail = (FNode *)aVar4,
        (atomic<TMpscQueue<FAsyncLoadingSyncLoadContext_*,FMemory>::FNode_*>)
        local_b8.SyncLoadContextsCreatedOnOtherThreads.Tail !=
        (atomic<TMpscQueue<FAsyncLoadingSyncLoadContext_*,FMemory>::FNode_*>)0x0) {
    aVar4 = (local_b8.SyncLoadContextsCreatedOnOtherThreads.Tail)->Next;
    FMemory::Free(local_b8.SyncLoadContextsCreatedOnOtherThreads.Tail);
    aVar6 = (atomic<TMpscQueue<FAsyncLoadingSyncLoadContext_*,FMemory>::FNode_*>)
            local_b8.SyncLoadContextsCreatedOnOtherThreads.Tail;
  }
  local_b8.SyncLoadContextsCreatedOnOtherThreads.Tail = (FNode *)aVar6;
  if (local_b8.PackagesOnStack.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.PackagesOnStack.AllocatorInstance.Data);
  }
  if (local_b8.SyncLoadContextStack.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.SyncLoadContextStack.AllocatorInstance.Data);
  }
  if (local_b8.CurrentlyExecutingEventNodeStack.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.CurrentlyExecutingEventNodeStack.AllocatorInstance.Data);
  }
  if (local_b8.NodesToFire.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.NodesToFire.AllocatorInstance.Data);
  }
  FTaskTagScope::~FTaskTagScope(&local_28);
  return;
}

// ProcessDependencies @ 142330b60

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FEventLoadNode2::ProcessDependencies(FEventLoadNode2 *this,FAsyncLoadingThreadState2 *param_1)

{
  atomic<int> *paVar1;
  int *piVar2;
  FEventLoadNode2 **ppFVar3;
  atomic<int> aVar4;
  atomic<bool> aVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FAsyncLoadEventGraphAllocator *pFVar8;
  FEventLoadNode2 *this_00;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  FEventLoadNode2 **ppFVar12;
  FEventLoadNode2_u_16 *pFVar13;
  FEventLoadNode2 *local_28 [2];
  
  LOCK();
  this->bIsDone = (atomic<bool>)0x1;
  UNLOCK();
  aVar5 = this->bIsUpdatingDependencies;
  while (aVar5 != (atomic<bool>)0x0) {
    FWindowsPlatformProcess::Sleep(0.0);
    aVar5 = this->bIsUpdatingDependencies;
  }
  uVar6 = this->DependenciesCount;
  if (uVar6 == 1) {
    pFVar13 = &this->field2_0x10;
    if (((int)((this->field2_0x10).SingleDependent)->BarrierCount < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("SingleDependent->BarrierCount > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                            ,0x1771,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    LOCK();
    paVar1 = &pFVar13->SingleDependent->BarrierCount;
    aVar4 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      pFVar7 = (param_1->NodesToFire).AllocatorInstance.Data;
      if (((pFVar7 <= pFVar13) && (pFVar13 < pFVar7 + (longlong)(param_1->NodesToFire).ArrayMax * 8)
          ) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar11 = (param_1->NodesToFire).ArrayNum;
      piVar2 = &(param_1->NodesToFire).ArrayMax;
      if (iVar11 == *piVar2) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)param_1,piVar2);
      }
      (param_1->NodesToFire).ArrayNum = iVar11 + 1;
      ((FEventLoadNode2_u_16 *)
      ((param_1->NodesToFire).AllocatorInstance.Data + (longlong)iVar11 * 8))->SingleDependent =
           (FEventLoadNode2 *)*(FEventLoadNode2 **)pFVar13;
    }
  }
  else if (uVar6 != 0) {
    ppFVar12 = (this->field2_0x10).MultipleDependents;
    ppFVar3 = ppFVar12 + uVar6;
    for (; ppFVar12 < ppFVar3; ppFVar12 = ppFVar12 + 1) {
      local_28[0] = *ppFVar12;
      if (((int)local_28[0]->BarrierCount < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Dependent->BarrierCount > 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                              ,0x177e,L""), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      LOCK();
      paVar1 = &local_28[0]->BarrierCount;
      aVar4 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        pFVar7 = (param_1->NodesToFire).AllocatorInstance.Data;
        if (((pFVar7 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 <
             pFVar7 + (longlong)(param_1->NodesToFire).ArrayMax * 8)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar11 = (param_1->NodesToFire).ArrayNum;
        piVar2 = &(param_1->NodesToFire).ArrayMax;
        if (iVar11 == *piVar2) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)param_1,piVar2);
        }
        (param_1->NodesToFire).ArrayNum = iVar11 + 1;
        *(FEventLoadNode2 **)((param_1->NodesToFire).AllocatorInstance.Data + (longlong)iVar11 * 8)
             = local_28[0];
      }
    }
    uVar6 = this->DependenciesCapacity;
    pFVar8 = this->Package->GraphAllocator;
    FMemory::Free((this->field2_0x10).SingleDependent);
    LOCK();
    pFVar8->TotalAllocated =
         (atomic<__int64>)((longlong)pFVar8->TotalAllocated + (ulonglong)uVar6 * -8);
    UNLOCK();
    LOCK();
    pFVar8->TotalArcCount = (atomic<__int64>)((longlong)pFVar8->TotalArcCount - (ulonglong)uVar6);
    UNLOCK();
  }
  if (param_1->bShouldFireNodes != false) {
    iVar11 = (param_1->NodesToFire).ArrayNum;
    param_1->bShouldFireNodes = false;
    if (iVar11 != 0) {
      bVar10 = iVar11 == 0;
      do {
        if ((bVar10 || iVar11 < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar11 = (param_1->NodesToFire).ArrayNum;
        this_00 = *(FEventLoadNode2 **)
                   ((param_1->NodesToFire).AllocatorInstance.Data + (longlong)iVar11 * 8 + -8);
        (param_1->NodesToFire).ArrayNum = iVar11 + -1;
        Fire(this_00,param_1);
        iVar11 = (param_1->NodesToFire).ArrayNum;
        bVar10 = iVar11 == 0;
      } while (!bVar10);
    }
    param_1->bShouldFireNodes = true;
  }
  return;
}

// ReleaseBarrier @ 142338a70

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FEventLoadNode2::ReleaseBarrier(FEventLoadNode2 *this,FAsyncLoadingThreadState2 *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  bool bVar4;
  
  if ((int)this->BarrierCount < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("BarrierCount > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0x16f5,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  LOCK();
  paVar1 = &this->BarrierCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    Fire(this,param_1);
  }
  return;
}

