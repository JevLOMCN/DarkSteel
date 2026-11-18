// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 8

// FAsyncLoadEventQueue2 @ 142307370

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FAsyncLoadEventQueue2 * __thiscall
FAsyncLoadEventQueue2::FAsyncLoadEventQueue2(FAsyncLoadEventQueue2 *this)

{
  this->OwnerThread = (FAsyncLoadingThreadState2 *)0x0;
  this->Zenaphore = (FZenaphore *)0x0;
  this->WakeEvent = (FManualResetEvent *)0x0;
  (this->LocalQueue).InternalQueues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocalQueue).InternalQueues.ArrayNum = 0;
  (this->LocalQueue).InternalQueues.ArrayMax = 0;
  (this->LocalQueue).FirstFreeQueue = (TInternalQueue *)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ExternalCritical,4000);
  (this->ExternalQueue).InternalQueues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ExternalQueueState = (atomic<__int64>)0x8000000000000000;
  (this->ExternalQueue).InternalQueues.ArrayNum = 0;
  (this->ExternalQueue).InternalQueues.ArrayMax = 0;
  (this->ExternalQueue).FirstFreeQueue = (TInternalQueue *)0x0;
  this->TimedOutEventNode = (FEventLoadNode2 *)0x0;
  this->ExecuteSyncLoadEventsCallCounter = 0;
  return this;
}

// ~FAsyncLoadEventQueue2 @ 142309cd0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FAsyncLoadEventQueue2::~FAsyncLoadEventQueue2(FAsyncLoadEventQueue2 *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ExternalQueue).InternalQueues.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ExternalCritical);
  pFVar1 = (this->LocalQueue).InternalQueues.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ExecuteSyncLoadEvents @ 1423222e0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
FAsyncLoadEventQueue2::ExecuteSyncLoadEvents
          (FAsyncLoadEventQueue2 *this,FAsyncLoadingThreadState2 *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TIoPriorityQueue<FEventLoadNode2> *pTVar1;
  int iVar2;
  atomic<unsigned___int64> *paVar3;
  FEventLoadNode2 *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  EEventLoadNodeExecutionResult EVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  TInternalQueue *pTVar13;
  TInternalQueue *pTVar14;
  uint uVar15;
  atomic<__int64> aVar16;
  bool local_res18;
  undefined1 local_res20 [8];
  int local_94;
  int local_90;
  undefined4 local_8c;
  FTlsAutoCleanup *local_88;
  code *local_80;
  undefined1 *local_78;
  TIterator local_70;
  
  puVar12 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_78 = local_res20;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  local_88 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_80,puVar12);
  local_8c = *(undefined4 *)(local_88 + 10);
  *(undefined4 *)(local_88 + 10) = 0;
  if (((param_1->SyncLoadContextStack).ArrayNum == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ThreadState.SyncLoadContextStack.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x1801,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  iVar2 = (param_1->SyncLoadContextStack).ArrayNum;
  uVar15 = iVar2 - 1;
  uVar10 = 0;
  if ((int)uVar15 < iVar2) {
    uVar10 = ~uVar15 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  paVar3 = *(atomic<unsigned___int64> **)
            ((param_1->SyncLoadContextStack).AllocatorInstance.Data +
            (longlong)(param_1->SyncLoadContextStack).ArrayNum * 8 + -8);
  this->ExecuteSyncLoadEventsCallCounter = this->ExecuteSyncLoadEventsCallCounter + 1;
  iVar2 = this->ExecuteSyncLoadEventsCallCounter;
  local_res18 = false;
  if ((this->TimedOutEventNode != (FEventLoadNode2 *)0x0) &&
     ((ulonglong)*paVar3 <= (ulonglong)this->TimedOutEventNode->Package->SyncLoadContextId)) {
    pFVar4 = this->TimedOutEventNode;
    this->TimedOutEventNode = (FEventLoadNode2 *)0x0;
    EVar8 = FEventLoadNode2::Execute(pFVar4,param_1);
    if ((EVar8 != Complete) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result == EEventLoadNodeExecutionResult::Complete",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                           ,0x1813,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    local_res18 = true;
  }
  aVar16 = (atomic<__int64>)0x8000000000000000;
  if ((this->ExternalQueueState != (atomic<__int64>)0x8000000000000000) &&
     (SUB84(this->ExternalQueueState,0) == 0x7fffffff)) {
    bVar6 = -1 < CpuChannel->Enabled;
    if (bVar6) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId6171,"MergeIntoLocalQueue",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                 ,0x181b);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6171);
    }
    lpCriticalSection = &this->ExternalCritical;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar1 = &this->ExternalQueue;
    pTVar13 = TIoPriorityQueue<FEventLoadNode2>::FindQueueByPriority(pTVar1,0x7fffffff,&local_94);
    if (pTVar13 != (TInternalQueue *)0x0) {
      pTVar14 = TIoPriorityQueue<FEventLoadNode2>::FindOrAddQueueByPriority
                          (&this->LocalQueue,0x7fffffff);
      if (pTVar14->Head == (FEventLoadNode2 *)0x0) {
        pTVar14->Head = pTVar13->Head;
      }
      else {
        if ((pTVar14->Tail == (FEventLoadNode2 *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("OtherQueue.Tail",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoPriorityQueue.h"
                               ,0xf7,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pTVar13->Head->Prev = pTVar14->Tail;
        pTVar14->Tail->Next = pTVar13->Head;
      }
      pTVar14->Tail = pTVar13->Tail;
      pTVar13->Tail = (FEventLoadNode2 *)0x0;
      pTVar13->Head = (FEventLoadNode2 *)0x0;
      TIoPriorityQueue<FEventLoadNode2>::RemoveQueueAtIndex(pTVar1,local_94);
    }
    if ((this->ExternalQueue).InternalQueues.ArrayNum != 0) {
      iVar11 = TIoPriorityQueue<FEventLoadNode2>::GetMaxPriority(pTVar1);
      aVar16 = (atomic<__int64>)(longlong)iVar11;
    }
    LOCK();
    this->ExternalQueueState = aVar16;
    UNLOCK();
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (bVar6) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  TIoPriorityQueue<FEventLoadNode2>::TIterator::TIterator(&local_70,&this->LocalQueue,0x7fffffff);
  if (local_70.Current != (FEventLoadNode2 *)0x0) {
    while( true ) {
      pFVar4 = local_70.Current;
      if ((local_70.Current == (FEventLoadNode2 *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Current",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoPriorityQueue.h"
                             ,0x56,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      if ((local_70.InternalQueue == (TInternalQueue *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InternalQueue",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoPriorityQueue.h"
                             ,0x57,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      if ((pFVar4->Priority != (local_70.InternalQueue)->Priority) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Current->Priority == InternalQueue->Priority",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoPriorityQueue.h"
                             ,0x58,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      if ((ulonglong)*paVar3 <= (ulonglong)pFVar4->Package->SyncLoadContextId) {
        if ((local_70.InternalQueue == (TInternalQueue *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InternalQueue",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoPriorityQueue.h"
                               ,0x6c,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        if ((pFVar4->Priority != (local_70.InternalQueue)->Priority) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Current->Priority == InternalQueue->Priority",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoPriorityQueue.h"
                               ,0x6d,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pTVar13 = local_70.InternalQueue;
        bVar6 = TIoPriorityQueue<FEventLoadNode2>::TInternalQueue::Remove
                          (local_70.InternalQueue,pFVar4);
        pTVar1 = local_70.Outer;
        if ((bVar6) &&
           (pTVar13 = TIoPriorityQueue<FEventLoadNode2>::FindQueueByPriority
                                (local_70.Outer,pTVar13->Priority,&local_90),
           pTVar13 != (TInternalQueue *)0x0)) {
          TIoPriorityQueue<FEventLoadNode2>::RemoveQueueAtIndex(pTVar1,local_90);
        }
        local_70.Current = (FEventLoadNode2 *)0xffffffffffffffff;
        pFVar4->QueueStatus = '\0';
        EVar8 = FEventLoadNode2::Execute(pFVar4,param_1);
        if ((EVar8 != Complete) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Result == EEventLoadNodeExecutionResult::Complete",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                               ,0x182a,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        if (this->ExecuteSyncLoadEventsCallCounter != iVar2) {
          local_res18 = true;
          goto LAB_142322780;
        }
        local_res18 = true;
      }
      local_70.Current = local_70.Next;
      if (local_70.Next == (FEventLoadNode2 *)0x0) break;
      local_70.Next = (local_70.Next)->Next;
    }
    local_70.Next = (FEventLoadNode2 *)0x0;
  }
  if ((local_res18 == false) && (param_1->bIsAsyncLoadingThread != false)) {
    local_res18 = PopAndExecute(this,param_1);
  }
LAB_142322780:
  *(undefined4 *)(local_88 + 10) = local_8c;
  return local_res18;
}

// PopAndExecute @ 14232ed70

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
FAsyncLoadEventQueue2::PopAndExecute(FAsyncLoadEventQueue2 *this,FAsyncLoadingThreadState2 *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined4 uVar1;
  atomic<__int64> aVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  EEventLoadNodeExecutionResult EVar6;
  int iVar7;
  uint *puVar8;
  FTlsAutoCleanup *pFVar9;
  FEventLoadNode2 *this_00;
  atomic<__int64> aVar10;
  undefined1 local_res8 [8];
  code *local_38;
  undefined1 *local_30;
  
  puVar8 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_30 = local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar9 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_38,puVar8);
  uVar1 = *(undefined4 *)(pFVar9 + 10);
  *(undefined4 *)(pFVar9 + 10) = 0;
  this_00 = this->TimedOutEventNode;
  if (this_00 == (FEventLoadNode2 *)0x0) {
    aVar2 = this->ExternalQueueState;
    aVar10 = (atomic<__int64>)0x8000000000000000;
    if (aVar2 == (atomic<__int64>)0x8000000000000000) {
LAB_14232edfc:
      this_00 = TIoPriorityQueue<FEventLoadNode2>::Pop(&this->LocalQueue);
    }
    else {
      if ((this->LocalQueue).InternalQueues.ArrayNum != 0) {
        iVar7 = TIoPriorityQueue<FEventLoadNode2>::GetMaxPriority(&this->LocalQueue);
        if (aVar2._0_4_ <= iVar7) goto LAB_14232edfc;
      }
      lpCriticalSection = &this->ExternalCritical;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      this_00 = TIoPriorityQueue<FEventLoadNode2>::Pop(&this->ExternalQueue);
      if (this_00 == (FEventLoadNode2 *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Node",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                           ,0x17e7,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      if ((this->ExternalQueue).InternalQueues.ArrayNum != 0) {
        iVar7 = TIoPriorityQueue<FEventLoadNode2>::GetMaxPriority(&this->ExternalQueue);
        aVar10 = (atomic<__int64>)(longlong)iVar7;
      }
      LOCK();
      this->ExternalQueueState = aVar10;
      UNLOCK();
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    if (this_00 == (FEventLoadNode2 *)0x0) {
      bVar4 = false;
      goto LAB_14232eea1;
    }
    this_00->QueueStatus = '\0';
  }
  else {
    this->TimedOutEventNode = (FEventLoadNode2 *)0x0;
  }
  EVar6 = FEventLoadNode2::Execute(this_00,param_1);
  if (EVar6 == Timeout) {
    this->TimedOutEventNode = this_00;
  }
  bVar4 = true;
LAB_14232eea1:
  *(undefined4 *)(pFVar9 + 10) = uVar1;
  return bVar4;
}

// Push @ 142336be0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAsyncLoadEventQueue2::Push
          (FAsyncLoadEventQueue2 *this,FAsyncLoadingThreadState2 *param_1,FEventLoadNode2 *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FManualResetEvent FVar1;
  atomic<unsigned_char> *paVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  atomic<__int64> aVar6;
  
  if (this->OwnerThread != param_1) {
    lpCriticalSection = &this->ExternalCritical;
    iVar5 = (param_2->Package->Desc).Priority;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (param_2->QueueStatus != '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Node->QueueStatus",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x17b7,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    param_2->QueueStatus = '\x02';
    TIoPriorityQueue<FEventLoadNode2>::Push(&this->ExternalQueue,param_2,iVar5);
    if ((this->ExternalQueue).InternalQueues.ArrayNum == 0) {
      aVar6 = (atomic<__int64>)0x8000000000000000;
    }
    else {
      iVar5 = TIoPriorityQueue<FEventLoadNode2>::GetMaxPriority(&this->ExternalQueue);
      aVar6 = (atomic<__int64>)(longlong)iVar5;
    }
    LOCK();
    this->ExternalQueueState = aVar6;
    UNLOCK();
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (this->Zenaphore != (FZenaphore *)0x0) {
      FZenaphore::NotifyOne(this->Zenaphore);
    }
    paVar2 = &this->WakeEvent->State;
    if (paVar2 != (atomic<unsigned_char> *)0x0) {
      LOCK();
      FVar1.State = *paVar2;
      *paVar2 = (atomic<unsigned_char>)0x1;
      UNLOCK();
      if (((byte)FVar1.State & 3) == 2) {
        UE::ParkingLot::WakeAll(paVar2);
      }
    }
    return;
  }
  if (param_2->QueueStatus != '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Node->QueueStatus",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0x17ac,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (param_2->Package->Desc).Priority;
  param_2->QueueStatus = '\x01';
  TIoPriorityQueue<FEventLoadNode2>::Push(&this->LocalQueue,param_2,iVar5);
  return;
}

// PushExternal @ 142336d30

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAsyncLoadEventQueue2::PushExternal(FAsyncLoadEventQueue2 *this,FEventLoadNode2 *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FManualResetEvent FVar1;
  atomic<unsigned_char> *paVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  atomic<__int64> aVar6;
  
  lpCriticalSection = &this->ExternalCritical;
  iVar5 = (param_1->Package->Desc).Priority;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (param_1->QueueStatus != '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Node->QueueStatus",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0x17b7,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  param_1->QueueStatus = '\x02';
  TIoPriorityQueue<FEventLoadNode2>::Push(&this->ExternalQueue,param_1,iVar5);
  if ((this->ExternalQueue).InternalQueues.ArrayNum == 0) {
    aVar6 = (atomic<__int64>)0x8000000000000000;
  }
  else {
    iVar5 = TIoPriorityQueue<FEventLoadNode2>::GetMaxPriority(&this->ExternalQueue);
    aVar6 = (atomic<__int64>)(longlong)iVar5;
  }
  LOCK();
  this->ExternalQueueState = aVar6;
  UNLOCK();
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (this->Zenaphore != (FZenaphore *)0x0) {
    FZenaphore::NotifyOne(this->Zenaphore);
  }
  paVar2 = &this->WakeEvent->State;
  if (paVar2 != (atomic<unsigned_char> *)0x0) {
    LOCK();
    FVar1.State = *paVar2;
    *paVar2 = (atomic<unsigned_char>)0x1;
    UNLOCK();
    if (((byte)FVar1.State & 3) == 2) {
      UE::ParkingLot::WakeAll(paVar2);
    }
  }
  return;
}

// PushLocal @ 142336e30

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAsyncLoadEventQueue2::PushLocal(FAsyncLoadEventQueue2 *this,FEventLoadNode2 *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_1->QueueStatus != '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Node->QueueStatus",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0x17ac,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = (param_1->Package->Desc).Priority;
  param_1->QueueStatus = '\x01';
  TIoPriorityQueue<FEventLoadNode2>::Push(&this->LocalQueue,param_1,iVar1);
  return;
}

// UpdatePackagePriority @ 142341820

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAsyncLoadEventQueue2::UpdatePackagePriority(FAsyncLoadEventQueue2 *this,FAsyncPackage2 *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  atomic<__int64> aVar2;
  TIoPriorityQueue<FEventLoadNode2> *pTVar3;
  FEventLoadNode2 *pFVar4;
  FEventLoadNode2 *pFVar5;
  
  lpCriticalSection = &this->ExternalCritical;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar5 = (param_1->PackageNodes).DataPtr;
  pFVar4 = pFVar5 + (param_1->PackageNodes).ArrayNum;
  for (; pFVar5 != pFVar4; pFVar5 = pFVar5 + 1) {
    if ((pFVar5->Spec->EventQueue == this) &&
       (iVar1 = (pFVar5->Package->Desc).Priority, pFVar5->Priority < iVar1)) {
      if (pFVar5->QueueStatus == '\x01') {
        pTVar3 = &this->LocalQueue;
      }
      else {
        if (pFVar5->QueueStatus != '\x02') goto LAB_1423418a8;
        pTVar3 = &this->ExternalQueue;
      }
      TIoPriorityQueue<FEventLoadNode2>::Reprioritize(pTVar3,pFVar5,iVar1);
    }
LAB_1423418a8:
  }
  pFVar5 = (param_1->Data).ExportBundleNodes.DataPtr;
  pFVar4 = pFVar5 + (param_1->Data).ExportBundleNodes.ArrayNum;
  do {
    if (pFVar5 == pFVar4) {
      if ((this->ExternalQueue).InternalQueues.ArrayNum == 0) {
        aVar2 = (atomic<__int64>)0x8000000000000000;
      }
      else {
        iVar1 = TIoPriorityQueue<FEventLoadNode2>::GetMaxPriority(&this->ExternalQueue);
        aVar2 = (atomic<__int64>)(longlong)iVar1;
      }
      LOCK();
      this->ExternalQueueState = aVar2;
      UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x00014234194f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return;
    }
    if ((pFVar5->Spec->EventQueue == this) &&
       (iVar1 = (pFVar5->Package->Desc).Priority, pFVar5->Priority < iVar1)) {
      if (pFVar5->QueueStatus == '\x01') {
        pTVar3 = &this->LocalQueue;
      }
      else {
        if (pFVar5->QueueStatus != '\x02') goto LAB_142341908;
        pTVar3 = &this->ExternalQueue;
      }
      TIoPriorityQueue<FEventLoadNode2>::Reprioritize(pTVar3,pFVar5,iVar1);
    }
LAB_142341908:
    pFVar5 = pFVar5 + 1;
  } while( true );
}

