// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 22

// TryExecuteTaskFrom<LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue,&LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue::Dequeue,1> @ 14147b7c0

bool __thiscall
LowLevelTasks::FScheduler::
TryExecuteTaskFrom<LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue,&LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue::Dequeue,1>
          (FScheduler *this,FWaitEvent *param_1,TLocalQueue *param_2,FOutOfWork *param_3,
          bool param_4)

{
  FTask *pFVar1;
  
  pFVar1 = LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue::Dequeue
                     (param_2,param_4);
  if (pFVar1 == (FTask *)0x0) {
    return false;
  }
  while( true ) {
    if (param_3->ActivelyLookingForWork != false) {
      if (param_3->bCpuBeginEventEmitted != false) {
        FCpuProfilerTrace::OutputEndEvent();
        param_3->bCpuBeginEventEmitted = false;
      }
      param_3->ActivelyLookingForWork = false;
    }
    pFVar1 = ExecuteTask(this,pFVar1);
    if (pFVar1 == (FTask *)0x0) break;
    LOCK();
    *(ulonglong *)&pFVar1->field_0x38 = *(ulonglong *)&pFVar1->field_0x38 | 2;
    UNLOCK();
  }
  return true;
}

// TryExecuteTaskFrom<LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue,&LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue::Dequeue,0> @ 14147b850

bool __thiscall
LowLevelTasks::FScheduler::
TryExecuteTaskFrom<LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue,&LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue::Dequeue,0>
          (FScheduler *this,FWaitEvent *param_1,TLocalQueue *param_2,FOutOfWork *param_3,
          bool param_4)

{
  bool bVar1;
  int iVar2;
  FTask *pFVar3;
  FTlsValues *pFVar4;
  
  pFVar3 = LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue::Dequeue
                     (param_2,param_4);
  bVar1 = false;
  if (pFVar3 != (FTask *)0x0) {
    while( true ) {
      if (param_3->ActivelyLookingForWork != false) {
        if (param_3->bCpuBeginEventEmitted != false) {
          FCpuProfilerTrace::OutputEndEvent();
          param_3->bCpuBeginEventEmitted = false;
        }
        param_3->ActivelyLookingForWork = false;
        bVar1 = LowLevelTasks::Private::FWaitingQueue::CancelWait
                          (this->WaitingQueue + param_4,param_1);
        if (((bVar1) &&
            (iVar2 = LowLevelTasks::Private::FWaitingQueue::NotifyInternal
                               (this->WaitingQueue + param_4,1), iVar2 == 0)) &&
           (pFVar4 = FSchedulerTls::GetTlsValuesRef(), pFVar4->WorkerType != Background)) {
          LowLevelTasks::Private::FWaitingQueue::NotifyInternal
                    (this->WaitingQueue + ((ulonglong)param_4 ^ 1),1);
        }
      }
      pFVar3 = ExecuteTask(this,pFVar3);
      if (pFVar3 == (FTask *)0x0) break;
      LOCK();
      *(ulonglong *)&pFVar3->field_0x38 = *(ulonglong *)&pFVar3->field_0x38 | 2;
      UNLOCK();
    }
    bVar1 = true;
  }
  return bVar1;
}

// TryExecuteTaskFrom<LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue,&LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue::DequeueSteal,1> @ 14147b940

bool __thiscall
LowLevelTasks::FScheduler::
TryExecuteTaskFrom<LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue,&LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue::DequeueSteal,1>
          (FScheduler *this,FWaitEvent *param_1,TLocalQueue *param_2,FOutOfWork *param_3,
          bool param_4)

{
  FTask *pFVar1;
  
  pFVar1 = LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue::DequeueSteal
                     (param_2,param_4);
  if (pFVar1 == (FTask *)0x0) {
    return false;
  }
  while( true ) {
    if (param_3->ActivelyLookingForWork != false) {
      if (param_3->bCpuBeginEventEmitted != false) {
        FCpuProfilerTrace::OutputEndEvent();
        param_3->bCpuBeginEventEmitted = false;
      }
      param_3->ActivelyLookingForWork = false;
    }
    pFVar1 = ExecuteTask(this,pFVar1);
    if (pFVar1 == (FTask *)0x0) break;
    LOCK();
    *(ulonglong *)&pFVar1->field_0x38 = *(ulonglong *)&pFVar1->field_0x38 | 2;
    UNLOCK();
  }
  return true;
}

// TryExecuteTaskFrom<LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue,&LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue::DequeueSteal,0> @ 14147b9d0

bool __thiscall
LowLevelTasks::FScheduler::
TryExecuteTaskFrom<LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue,&LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue::DequeueSteal,0>
          (FScheduler *this,FWaitEvent *param_1,TLocalQueue *param_2,FOutOfWork *param_3,
          bool param_4)

{
  bool bVar1;
  int iVar2;
  FTask *pFVar3;
  FTlsValues *pFVar4;
  
  pFVar3 = LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue::DequeueSteal
                     (param_2,param_4);
  bVar1 = false;
  if (pFVar3 != (FTask *)0x0) {
    while( true ) {
      if (param_3->ActivelyLookingForWork != false) {
        if (param_3->bCpuBeginEventEmitted != false) {
          FCpuProfilerTrace::OutputEndEvent();
          param_3->bCpuBeginEventEmitted = false;
        }
        param_3->ActivelyLookingForWork = false;
        bVar1 = LowLevelTasks::Private::FWaitingQueue::CancelWait
                          (this->WaitingQueue + param_4,param_1);
        if (((bVar1) &&
            (iVar2 = LowLevelTasks::Private::FWaitingQueue::NotifyInternal
                               (this->WaitingQueue + param_4,1), iVar2 == 0)) &&
           (pFVar4 = FSchedulerTls::GetTlsValuesRef(), pFVar4->WorkerType != Background)) {
          LowLevelTasks::Private::FWaitingQueue::NotifyInternal
                    (this->WaitingQueue + ((ulonglong)param_4 ^ 1),1);
        }
      }
      pFVar3 = ExecuteTask(this,pFVar3);
      if (pFVar3 == (FTask *)0x0) break;
      LOCK();
      *(ulonglong *)&pFVar3->field_0x38 = *(ulonglong *)&pFVar3->field_0x38 | 2;
      UNLOCK();
    }
    bVar1 = true;
  }
  return bVar1;
}

// TryExecuteTaskFrom<LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue,&LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue::StealLocal,1> @ 14147bac0

bool __thiscall
LowLevelTasks::FScheduler::
TryExecuteTaskFrom<LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue,&LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue::StealLocal,1>
          (FScheduler *this,FWaitEvent *param_1,TLocalQueue *param_2,FOutOfWork *param_3,
          bool param_4)

{
  FTask *pFVar1;
  
  pFVar1 = LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue::StealLocal
                     (param_2,param_4);
  if (pFVar1 == (FTask *)0x0) {
    return false;
  }
  while( true ) {
    if (param_3->ActivelyLookingForWork != false) {
      if (param_3->bCpuBeginEventEmitted != false) {
        FCpuProfilerTrace::OutputEndEvent();
        param_3->bCpuBeginEventEmitted = false;
      }
      param_3->ActivelyLookingForWork = false;
    }
    pFVar1 = ExecuteTask(this,pFVar1);
    if (pFVar1 == (FTask *)0x0) break;
    LOCK();
    *(ulonglong *)&pFVar1->field_0x38 = *(ulonglong *)&pFVar1->field_0x38 | 2;
    UNLOCK();
  }
  return true;
}

// TryExecuteTaskFrom<LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue,&LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue::StealLocal,0> @ 14147bb50

bool __thiscall
LowLevelTasks::FScheduler::
TryExecuteTaskFrom<LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue,&LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue::StealLocal,0>
          (FScheduler *this,FWaitEvent *param_1,TLocalQueue *param_2,FOutOfWork *param_3,
          bool param_4)

{
  bool bVar1;
  int iVar2;
  FTask *pFVar3;
  FTlsValues *pFVar4;
  
  pFVar3 = LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue::StealLocal
                     (param_2,param_4);
  bVar1 = false;
  if (pFVar3 != (FTask *)0x0) {
    while( true ) {
      if (param_3->ActivelyLookingForWork != false) {
        if (param_3->bCpuBeginEventEmitted != false) {
          FCpuProfilerTrace::OutputEndEvent();
          param_3->bCpuBeginEventEmitted = false;
        }
        param_3->ActivelyLookingForWork = false;
        bVar1 = LowLevelTasks::Private::FWaitingQueue::CancelWait
                          (this->WaitingQueue + param_4,param_1);
        if (((bVar1) &&
            (iVar2 = LowLevelTasks::Private::FWaitingQueue::NotifyInternal
                               (this->WaitingQueue + param_4,1), iVar2 == 0)) &&
           (pFVar4 = FSchedulerTls::GetTlsValuesRef(), pFVar4->WorkerType != Background)) {
          LowLevelTasks::Private::FWaitingQueue::NotifyInternal
                    (this->WaitingQueue + ((ulonglong)param_4 ^ 1),1);
        }
      }
      pFVar3 = ExecuteTask(this,pFVar3);
      if (pFVar3 == (FTask *)0x0) break;
      LOCK();
      *(ulonglong *)&pFVar3->field_0x38 = *(ulonglong *)&pFVar3->field_0x38 | 2;
      UNLOCK();
    }
    bVar1 = true;
  }
  return bVar1;
}

// FScheduler @ 14147e710

FScheduler * __thiscall LowLevelTasks::FScheduler::FScheduler(FScheduler *this)

{
  TArray<LowLevelTasks::Private::FWaitEvent,TAlignedHeapAllocator<64>_> *pTVar1;
  TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *lpCriticalSection;
  DWORD DVar2;
  Node *this_00;
  Node *pNVar3;
  LPCRITICAL_SECTION lpCriticalSection_00;
  longlong lVar4;
  
  pTVar1 = &this->WorkerEvents;
  *(undefined8 *)&this->WaitingQueue[0].CreateThread = 0;
  lpCriticalSection = &this->OversubscriptionLimitReachedEvent;
  *(undefined8 *)&this->WaitingQueue[0].CreateThread.field_0x28 = 0;
  lpCriticalSection_00 =
       (LPCRITICAL_SECTION)&(this->QueueRegistry).OverflowQueues[0].Hazards.HazardRecordBlocksCS;
  this->WaitingQueue[0].Oversubscription = (atomic<unsigned_int>)0x0;
  this->WaitingQueue[0].ThreadCount = 0;
  this->WaitingQueue[0].MaxThreadCount = 0;
  this->WaitingQueue[0].State = (atomic<unsigned___int64>)0x0;
  lVar4 = 5;
  this->WaitingQueue[0].StandbyState = (atomic<unsigned___int64>)0x0;
  this->WaitingQueue[0].NodesArray = pTVar1;
  this->WaitingQueue[0].bIsShuttingDown = (atomic<bool>)0x0;
  this->WaitingQueue[0].OversubscriptionLimitReachedEvent = lpCriticalSection;
  *(undefined8 *)&this->WaitingQueue[1].CreateThread = 0;
  *(undefined8 *)&this->WaitingQueue[1].CreateThread.field_0x28 = 0;
  this->WaitingQueue[1].Oversubscription = (atomic<unsigned_int>)0x0;
  this->WaitingQueue[1].ThreadCount = 0;
  this->WaitingQueue[1].MaxThreadCount = 0;
  this->WaitingQueue[1].State = (atomic<unsigned___int64>)0x0;
  this->WaitingQueue[1].StandbyState = (atomic<unsigned___int64>)0x0;
  this->WaitingQueue[1].NodesArray = pTVar1;
  this->WaitingQueue[1].bIsShuttingDown = (atomic<bool>)0x0;
  this->WaitingQueue[1].OversubscriptionLimitReachedEvent = lpCriticalSection;
  do {
    lpCriticalSection_00[-0x71].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    lVar4 = lVar4 + -1;
    lpCriticalSection_00[-0x6e].LockCount = 0;
    lpCriticalSection_00[-0x6e].RecursionCount = 0;
    FHazardPointerCollection::FHazardRecordChunk::FHazardRecordChunk
              ((FHazardRecordChunk *)&lpCriticalSection_00[-0x6b].OwningThread);
    InitializeCriticalSectionAndSpinCount(lpCriticalSection_00 + -1,4000);
    InitializeCriticalSectionAndSpinCount(lpCriticalSection_00,4000);
    lpCriticalSection_00[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    lpCriticalSection_00[1].LockCount = 0;
    lpCriticalSection_00[1].RecursionCount = 0;
    lpCriticalSection_00[1].OwningThread = (HANDLE)0x0;
    lpCriticalSection_00[1].LockSemaphore = (HANDLE)0x0;
    *(undefined4 *)&lpCriticalSection_00[1].SpinCount = 0xffffffff;
    *(undefined4 *)((longlong)&lpCriticalSection_00[1].SpinCount + 4) = 0x20;
    DVar2 = TlsAlloc();
    *(DWORD *)&lpCriticalSection_00[1].SpinCount = DVar2;
    this_00 = ::operator_new(0x2018);
    pNVar3 = (Node *)0x0;
    if (this_00 != (Node *)0x0) {
      pNVar3 = FAAArrayQueue<LowLevelTasks::FTask>::Node::Node(this_00,(FTask *)0x0);
    }
    pNVar3->enqidx = (atomic<int>)0x0;
    lpCriticalSection_00[-0x71].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)pNVar3;
    *(Node **)&lpCriticalSection_00[-0x6e].LockCount = pNVar3;
    lpCriticalSection_00 = (LPCRITICAL_SECTION)&lpCriticalSection_00[0x73].LockCount;
  } while (lVar4 != 0);
  (this->QueueRegistry).LocalQueues[0] =
       (atomic<LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue_*>)0x0;
  memset((this->QueueRegistry).LocalQueues + 1,0,0x1ff8);
  (this->QueueRegistry).NumLocalQueues = (atomic<unsigned_int>)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->WorkerThreadsCS,4000);
  (this->WorkerThreads).Ptr = (atomic<FThread_*> *)0x0;
  (this->WorkerLocalQueues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkerLocalQueues).ArrayNum = 0;
  (this->WorkerLocalQueues).ArrayMax = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->WorkerEvents).ArrayNum = 0;
  (this->WorkerEvents).ArrayMax = 0;
  (this->GameThreadLocalQueue).Ptr = (TLocalQueue *)0x0;
  this->ActiveWorkers = (atomic<unsigned_int>)0x0;
  this->NextWorkerId = (atomic<unsigned_int>)0x0;
  this->ForegroundCreationIndex = (atomic<int>)0x0;
  this->BackgroundCreationIndex = (atomic<int>)0x0;
  this->WorkerAffinity = 0;
  this->BackgroundAffinity = 0;
  this->WorkerPriority = TPri_Normal;
  this->BackgroundPriority = TPri_BelowNormal;
  this->TemporaryShutdown = (atomic<bool>)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)lpCriticalSection,4000);
  *(undefined8 *)&(this->OversubscriptionLimitReachedEvent).field_0x28 = 0;
  *(undefined8 *)&(this->OversubscriptionLimitReachedEvent).field_0x30 = 0;
  *(undefined8 *)&(this->OversubscriptionLimitReachedEvent).field_0x38 = 2;
  return this;
}

// operator() @ 1414825a0

void __thiscall `LowLevelTasks::FScheduler::CreateWorker'::__l2::<lambda_1>::operator()(void *this)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  FScheduler *this_00;
  TLocalQueue *pTVar4;
  FWaitEvent *pFVar5;
  FTlsValues *pFVar6;
  bool *pbVar7;
  FTaskTagScope local_38;
  
  this_00 = *(FScheduler **)this;
  bVar1 = *(bool *)((longlong)this + 0x1c);
  uVar3 = *(uint *)((longlong)this + 0x18);
  pTVar4 = *(TLocalQueue **)((longlong)this + 0x10);
  pFVar5 = *(FWaitEvent **)((longlong)this + 8);
  pFVar6 = LowLevelTasks::FSchedulerTls::GetTlsValuesRef();
  FTaskTagScope::FTaskTagScope(&local_38,EWorkerThread);
  pFVar6->ActiveScheduler = (FSchedulerTls *)this_00;
  FMemory::SetupTLSCachesOnCurrentThread();
  pFVar6->WorkerType = Foreground - (bVar1 != false);
  pFVar6->bIsStandbyWorker = pFVar5->bIsStandby;
  pFVar6->LocalQueue = pTVar4;
  pbVar7 = LowLevelTasks::Private::FOversubscriptionTls::GetIsOversubscriptionAllowedRef();
  bVar2 = *pbVar7;
  *pbVar7 = true;
  if (pFVar5->bIsStandby == false) {
    LowLevelTasks::FScheduler::WorkerLoop(this_00,pFVar5,pTVar4,uVar3,bVar1);
  }
  else {
    LowLevelTasks::FScheduler::StandbyLoop(this_00,pFVar5,pTVar4,uVar3,bVar1);
  }
  *pbVar7 = bVar2;
  pFVar6->LocalQueue = (TLocalQueue *)0x0;
  pFVar6->ActiveScheduler = (FSchedulerTls *)0x0;
  pFVar6->bIsStandbyWorker = false;
  pFVar6->WorkerType = None;
  FMemory::ClearAndDisableTLSCachesOnCurrentThread();
  FTaskTagScope::~FTaskTagScope(&local_38);
  return;
}

// operator() @ 141482c90

void __thiscall
`LowLevelTasks::FScheduler::StartWorkers'::__l27::<lambda_1>::operator()
          (void *this,ELocalQueueType param_1,wchar_t *param_2,wchar_t *param_3,atomic<int> *param_4
          ,int param_5,int param_6,EThreadPriority param_7,ulong64 param_8)

{
  uint *puVar1;
  atomic<int> aVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  FScheduler *this_00;
  FThreadImpl *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  bool *pbVar13;
  TUniquePtr<FThread,TDefaultDelete<FThread>_> TVar14;
  ForAnyElementType FVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  uint uVar18;
  bool bVar19;
  undefined8 in_stack_ffffffffffffff38;
  longlong lVar20;
  undefined8 in_stack_ffffffffffffff40;
  int iVar21;
  undefined4 in_stack_ffffffffffffff5c;
  FLLMScope local_90 [2];
  FString local_88;
  FString local_78;
  longlong local_68;
  longlong local_60;
  FScriptContainerElement *local_58;
  longlong local_50;
  FThread *local_48;
  FMemScope local_40;
  
  iVar21 = (int)((ulonglong)in_stack_ffffffffffffff40 >> 0x20);
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId290,"CreateWorkerThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\Scheduler.cpp"
               ,0x122);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId290);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name291,L"EngineMisc/WorkerThreads");
    _Init_thread_footer(&::_TSS0);
  }
  lVar20 = CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff38 >> 8),1);
  FLLMScope::FLLMScope(local_90,LLMScope_Name291,false,None,Default,true);
  FMemScope::FMemScope(&local_40,&LLMScope_Name291,true);
  pbVar13 = LowLevelTasks::Private::FOversubscriptionTls::GetIsOversubscriptionAllowedRef();
  bVar4 = *pbVar13;
  *pbVar13 = false;
  LOCK();
  aVar2 = *param_4;
  *param_4 = (atomic<int>)((int)*param_4 + 1);
  UNLOCK();
  if ((param_6 <= (int)aVar2) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("LocalCreationIndex < NumMaxWorkers",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\Scheduler.cpp"
                         ,0x129,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((int)aVar2 < param_5) {
    ::FString::PrintfImpl(&local_78,L"%s Worker #%d");
    FVar15.Data = local_78.Data.AllocatorInstance.Data;
    iVar10 = local_78.Data.ArrayNum;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
  }
  else {
    ::FString::PrintfImpl(&local_88,L"%s Worker (Standby #%d)");
    FVar15.Data = local_88.Data.AllocatorInstance.Data;
    iVar10 = local_88.Data.ArrayNum;
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
  }
  LOCK();
  puVar1 = (uint *)(*(longlong *)this + 0x7bdc);
  uVar3 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  lVar17 = (longlong)(int)uVar3;
  UE::Trace::ThreadGroupBegin(param_2);
  lVar6 = *(longlong *)this;
  uVar18 = ~uVar3 >> 0x1f;
  iVar5 = *(int *)(lVar6 + 0x7bb8);
  uVar11 = 0;
  uVar12 = uVar11;
  if ((int)uVar3 < iVar5) {
    uVar12 = uVar18;
  }
  if ((uVar12 == 0) &&
     (lVar20 = lVar17, iVar21 = iVar5 >> 0x1f,
     bVar9 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar9
     )) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_50 = lVar17 * 0xa0580;
  LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue::Init
            ((TLocalQueue *)(local_50 + *(longlong *)(lVar6 + 0x7bb0)),
             (TLocalQueueRegistry<1024,1024> *)(*(longlong *)this + 0x100),param_1);
  lVar6 = *(longlong *)this;
  iVar5 = *(int *)(lVar6 + 0x7bc8);
  uVar12 = uVar11;
  if ((int)uVar3 < iVar5) {
    uVar12 = uVar18;
  }
  if ((uVar12 == 0) &&
     (lVar20 = lVar17, iVar21 = iVar5 >> 0x1f,
     bVar9 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar9
     )) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_60 = lVar17 * 0x40;
  *(bool *)(local_60 + 0x20 + *(longlong *)(lVar6 + 0x7bc0)) = param_5 <= (int)aVar2;
  this_00 = *(FScheduler **)this;
  iVar5 = (this_00->WorkerLocalQueues).ArrayNum;
  uVar12 = uVar11;
  if ((int)uVar3 < iVar5) {
    uVar12 = uVar18;
  }
  if ((uVar12 == 0) &&
     (lVar20 = lVar17, iVar21 = iVar5 >> 0x1f,
     bVar9 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar9
     )) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_58 = (this_00->WorkerLocalQueues).AllocatorInstance.Data;
  local_68 = *(longlong *)this;
  if ((int)uVar3 < *(int *)(local_68 + 0x7bc8)) {
    uVar11 = uVar18;
  }
  if ((uVar11 == 0) &&
     (lVar20 = lVar17, iVar21 = *(int *)(local_68 + 0x7bc8) >> 0x1f,
     bVar9 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar9
     )) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar16 = (FScriptContainerElement *)L"";
  if (iVar10 != 0) {
    pFVar16 = FVar15.Data;
  }
  TVar14 = LowLevelTasks::FScheduler::CreateWorker
                     (this_00,(uint)&local_48,(wchar_t *)(ulonglong)uVar3,SUB81(pFVar16,0),
                      (EForkable)CONCAT71((int7)((ulonglong)lVar20 >> 8),param_1 == EBackground),
                      (FWaitEvent *)CONCAT44(iVar21,*(undefined4 *)((longlong)this + 8)),
                      (TLocalQueue *)(local_60 + *(longlong *)(local_68 + 0x7bc0)),
                      (int)local_58 + (int)local_50,CONCAT44(in_stack_ffffffffffffff5c,param_7));
  pFVar7 = ((TVar14.Ptr)->Impl).Object;
  ((TVar14.Ptr)->Impl).Object = (FThreadImpl *)0x0;
  LOCK();
  *(FThreadImpl **)(*(longlong *)(*(longlong *)this + 0x7ba8) + lVar17 * 8) = pFVar7;
  UNLOCK();
  if (local_48 != (FThread *)0x0) {
    ::FThread::~FThread(local_48);
    ::operator_delete(local_48,0x10);
  }
  UE::Trace::ThreadGroupEnd();
  if (FVar15.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar15.Data);
  }
  *pbVar13 = bVar4;
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_90);
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CreateWorker @ 14148f3f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TUniquePtr<FThread,TDefaultDelete<FThread>_> __thiscall
LowLevelTasks::FScheduler::CreateWorker
          (FScheduler *this,uint param_1,wchar_t *param_2,bool param_3,EForkable param_4,
          FWaitEvent *param_5,TLocalQueue *param_6,EThreadPriority param_7,ulong64 param_8)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ushort uVar3;
  FProcessorGroupDesc *pFVar4;
  FThread *this_00;
  FThreadImpl *pFVar5;
  ulonglong uVar6;
  code **ppcVar7;
  undefined4 in_register_00000014;
  ulonglong uVar8;
  undefined7 in_register_00000089;
  ushort uVar9;
  FThreadImpl *pFVar10;
  undefined4 in_stack_00000044;
  ulonglong in_stack_00000050;
  undefined1 auStackY_108 [32];
  FThreadAffinity local_c8;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  wchar_t *local_a0;
  FScheduler *local_98;
  TLocalQueue *pTStack_90;
  code *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_a0 = (wchar_t *)CONCAT71(in_register_00000089,param_3);
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  pFVar5 = (FThreadImpl *)0x0;
  local_c8.ThreadAffinityMask = 0x3df000002cf;
  local_c8.ProcessorGroup = 0x551;
  local_c8._10_6_ = 0x4d50000;
  local_b8 = 0x63d;
  local_b4 = 0x3b9;
  local_b0 = 0x24b;
  local_ac = 0x59f;
  uVar1 = *(undefined4 *)
           ((longlong)&local_c8.ThreadAffinityMask + (ulonglong)((uint)param_2 & 7) * 4);
  if (in_stack_00000050 == 0) {
    in_stack_00000050 = 0xffffffffffffffff;
  }
  local_a8 = 0;
  pFVar4 = FWindowsPlatformMisc::GetProcessorGroupDesc();
  uVar8 = (ulonglong)((uint)param_2 + 2);
  uVar9 = 0;
  uVar3 = uVar9;
  if (pFVar4->NumProcessorGroups != 0) {
    do {
      uVar9 = uVar3;
      uVar6 = pFVar4->ThreadAffinities[uVar9] -
              (pFVar4->ThreadAffinities[uVar9] >> 1 & 0x5555555555555555);
      uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333);
      uVar6 = ((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar8 < uVar6) {
        if (uVar9 != 0) {
          in_stack_00000050 = 0xffffffffffffffff;
        }
        break;
      }
      uVar8 = uVar8 - uVar6;
      uVar3 = uVar9 + 1;
    } while ((ushort)(uVar9 + 1) < pFVar4->NumProcessorGroups);
  }
  uVar8 = pFVar4->ThreadAffinities[uVar9];
  pTStack_90 = param_6;
  local_88 = (code *)CONCAT44(in_stack_00000044,param_7);
  uStack_7c = CONCAT31(uStack_7c._1_3_,(undefined1)param_4);
  local_98 = this;
  uStack_80 = uVar1;
  this_00 = ::operator_new(0x10);
  uVar2 = local_c8._8_8_;
  pFVar10 = pFVar5;
  if (this_00 != (FThread *)0x0) {
    local_c8._8_6_ = local_c8._10_6_ << 0x10;
    local_c8._14_2_ = SUB82(uVar2,6);
    local_c8.ProcessorGroup = uVar9;
    local_78[0] = (code *)0x0;
    local_c8.ThreadAffinityMask = uVar8 & in_stack_00000050;
    local_50 = FMemory::Malloc(0x28,8);
    *local_50 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`LowLevelTasks::FScheduler::CreateWorker'::`2'::<lambda_1>,1,1>
                         ::_vftable_;
    local_50[1] = (code *)local_98;
    local_50[2] = (code *)pTStack_90;
    local_50[3] = local_88;
    local_50[4] = (code *)CONCAT44(uStack_7c,uStack_80);
    if (local_50 + 1 != (code **)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`LowLevelTasks::FScheduler::CreateWorker'::__l2::<lambda_1>,void>
                    ::Call;
    }
    pFVar5 = (FThreadImpl *)
             ::FThread::FThread(this_00,local_a0,(TUniqueFunction<void___cdecl(void)> *)local_78,0,
                                (EThreadPriority)param_8,&local_c8,(EForkable)param_5);
    pFVar10 = (FThreadImpl *)&DAT_00000001;
  }
  (((FThread *)CONCAT44(in_register_00000014,param_1))->Impl).Object = pFVar5;
  if ((pFVar10 != (FThreadImpl *)0x0) && (local_78[0] != (code *)0x0)) {
    ppcVar7 = local_78 + 2;
    if (local_50 != (code **)0x0) {
      ppcVar7 = local_50;
    }
    (**(code **)(*ppcVar7 + 0x10))();
  }
  return (TUniquePtr<FThread,TDefaultDelete<FThread>_>)
         (FThread *)CONCAT44(in_register_00000014,param_1);
}

// DecrementOversubscription @ 141490a90

void __thiscall LowLevelTasks::FScheduler::DecrementOversubscription(FScheduler *this)

{
  int *piVar1;
  FTlsValues *pFVar2;
  longlong lVar3;
  
  pFVar2 = FSchedulerTls::GetTlsValuesRef();
  if (pFVar2->WorkerType != None) {
    lVar3 = 0x40;
    if (pFVar2->WorkerType == Background) {
      lVar3 = 0xb0;
    }
    LOCK();
    piVar1 = (int *)((longlong)&this->WaitingQueue[0].ThreadCount + lVar3);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

// ExecuteTask @ 141494aa0

FTask * __thiscall LowLevelTasks::FScheduler::ExecuteTask(FScheduler *this,FTask *param_1)

{
  longlong lVar1;
  bool bVar2;
  FTask *pFVar3;
  FTlsValues *pFVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x40);
  lVar1 = *plVar6;
  *plVar6 = (longlong)param_1;
  if (((byte)((ulonglong)*(undefined8 *)&param_1->field_0x38 >> 0x3b) & 7) < 2) {
    if (CpuChannel->Enabled < 0) {
      pFVar3 = FTask::ExecuteTask(param_1);
    }
    else {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`private:_class_LowLevelTasks::FTask*___ptr64___cdecl_LowLevelTasks::FScheduler::ExecuteTask(LowLevelTasks::FTask*___ptr64)___ptr64'
                  ::__l5::__CpuProfilerEventSpecId396,"ExecuteForegroundTask",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\Scheduler.cpp"
                 ,0x18c);
      FCpuProfilerTrace::OutputBeginEvent
                (`private:_class_LowLevelTasks::FTask*___ptr64___cdecl_LowLevelTasks::FScheduler::ExecuteTask(LowLevelTasks::FTask*___ptr64)___ptr64'
                 ::__l5::__CpuProfilerEventSpecId396);
      pFVar3 = FTask::ExecuteTask(param_1);
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  else {
    if ((((lVar1 == 0) && (GTaskGraphUseDynamicPrioritization != false)) &&
        (pFVar4 = FSchedulerTls::GetTlsValuesRef(), pFVar4->WorkerType != None)) &&
       (((FScheduler *)pFVar4->ActiveScheduler == this &&
        ((*(ulonglong *)&param_1->field_0x38 & 5) == 0)))) {
      bVar2 = false;
      puVar5 = TlsGetValue(FRunnableThread::RunnableTlsSlot);
      if (CpuChannel->Enabled < 0) {
        (**(code **)*puVar5)(puVar5,this->BackgroundPriority);
      }
      else {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&`private:_class_LowLevelTasks::FTask*___ptr64___cdecl_LowLevelTasks::FScheduler::ExecuteTask(LowLevelTasks::FTask*___ptr64)___ptr64'
                    ::__l10::__CpuProfilerEventSpecId413,"LowerThreadPriority",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\Scheduler.cpp"
                   ,0x19d);
        FCpuProfilerTrace::OutputBeginEvent
                  (`private:_class_LowLevelTasks::FTask*___ptr64___cdecl_LowLevelTasks::FScheduler::ExecuteTask(LowLevelTasks::FTask*___ptr64)___ptr64'
                   ::__l10::__CpuProfilerEventSpecId413);
        (**(code **)*puVar5)(puVar5,this->BackgroundPriority);
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    else {
      bVar2 = true;
      puVar5 = (undefined8 *)0x0;
    }
    if (CpuChannel->Enabled < 0) {
      pFVar3 = FTask::ExecuteTask(param_1);
    }
    else {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`private:_class_LowLevelTasks::FTask*___ptr64___cdecl_LowLevelTasks::FScheduler::ExecuteTask(LowLevelTasks::FTask*___ptr64)___ptr64'
                  ::__l12::__CpuProfilerEventSpecId418,"ExecuteBackgroundTask",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\Scheduler.cpp"
                 ,0x1a2);
      FCpuProfilerTrace::OutputBeginEvent
                (`private:_class_LowLevelTasks::FTask*___ptr64___cdecl_LowLevelTasks::FScheduler::ExecuteTask(LowLevelTasks::FTask*___ptr64)___ptr64'
                 ::__l12::__CpuProfilerEventSpecId418);
      pFVar3 = FTask::ExecuteTask(param_1);
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (!bVar2) {
      if (CpuChannel->Enabled < 0) {
        (**(code **)*puVar5)(puVar5,this->WorkerPriority);
      }
      else {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&`private:_class_LowLevelTasks::FTask*___ptr64___cdecl_LowLevelTasks::FScheduler::ExecuteTask(LowLevelTasks::FTask*___ptr64)___ptr64'
                    ::__l15::__CpuProfilerEventSpecId424,"RaiseThreadPriority",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\Scheduler.cpp"
                   ,0x1a8);
        FCpuProfilerTrace::OutputBeginEvent
                  (`private:_class_LowLevelTasks::FTask*___ptr64___cdecl_LowLevelTasks::FScheduler::ExecuteTask(LowLevelTasks::FTask*___ptr64)___ptr64'
                   ::__l15::__CpuProfilerEventSpecId424);
        (**(code **)*puVar5)(puVar5,this->WorkerPriority);
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
  }
  *plVar6 = lVar1;
  return pFVar3;
}

// GetOversubscriptionLimitReachedEvent @ 141499ba0

TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> * __thiscall
LowLevelTasks::FScheduler::GetOversubscriptionLimitReachedEvent(FScheduler *this)

{
  return &this->OversubscriptionLimitReachedEvent;
}

// IncrementOversubscription @ 14149b230

void __thiscall LowLevelTasks::FScheduler::IncrementOversubscription(FScheduler *this)

{
  EWorkerType EVar1;
  FTlsValues *pFVar2;
  longlong lVar3;
  
  pFVar2 = FSchedulerTls::GetTlsValuesRef();
  EVar1 = pFVar2->WorkerType;
  if (EVar1 != None) {
    if (__CsvProfilerStat637 == false) {
      FCsvProfilerTrace::OutputInlineStat("Oversubscription",_GCsvCategory_Scheduler.Index);
      __CsvProfilerStat637 = true;
    }
    FCsvProfiler::RecordCustomStat("Oversubscription",_GCsvCategory_Scheduler.Index,1,Accumulate);
    lVar3 = 0;
    if (EVar1 == Background) {
      lVar3 = 0x70;
    }
    LowLevelTasks::Private::FWaitingQueue::IncrementOversubscription
              ((FWaitingQueue *)((longlong)&this->WaitingQueue[0].ThreadCount + lVar3));
  }
  return;
}

// IsOversubscriptionLimitReached @ 14149e160

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
LowLevelTasks::FScheduler::IsOversubscriptionLimitReached(FScheduler *this,ETaskPriority param_1)

{
  if ('\x01' < (char)param_1) {
    return this->WaitingQueue[1].MaxThreadCount <= (uint)this->WaitingQueue[1].Oversubscription;
  }
  if ((this->WaitingQueue[0].MaxThreadCount <= (uint)this->WaitingQueue[0].Oversubscription) &&
     (this->WaitingQueue[1].MaxThreadCount <= (uint)this->WaitingQueue[1].Oversubscription)) {
    return true;
  }
  return false;
}

// LaunchInternal @ 1414a1e30

/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

void __thiscall
LowLevelTasks::FScheduler::LaunchInternal
          (FScheduler *this,FTask *param_1,EQueuePreference param_2,bool param_3)

{
  TLocalQueue *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FTlsValues *pFVar6;
  byte bVar7;
  FAAArrayQueue<LowLevelTasks::FTask> *this_00;
  byte bVar8;
  TWorkStealingQueue2<LowLevelTasks::FTask,1024> *pTVar9;
  ulonglong uVar10;
  longlong lVar11;
  THazardPointer<FAAArrayQueue<LowLevelTasks::FTask>::Node,0> local_48;
  THazardPointer<FAAArrayQueue<LowLevelTasks::FTask>::Node,0> local_38;
  
  if ((this->ActiveWorkers == (atomic<unsigned_int>)0x0) &&
     (this->TemporaryShutdown == (atomic<bool>)0x0)) {
    if (param_1 == (FTask *)0x0) {
      return;
    }
    while (param_1 = ExecuteTask(this,param_1), param_1 != (FTask *)0x0) {
      LOCK();
      *(ulonglong *)&param_1->field_0x38 = *(ulonglong *)&param_1->field_0x38 | 2;
      UNLOCK();
    }
    return;
  }
  pFVar6 = FSchedulerTls::GetTlsValuesRef();
  lVar11 = 0;
  bVar8 = (byte)((ulonglong)*(undefined8 *)&param_1->field_0x38 >> 0x3b) & 7;
  pTVar1 = pFVar6->LocalQueue;
  if (((bVar8 < 2) || (pFVar6->WorkerType == Background)) && (pFVar6->bIsStandbyWorker == false)) {
    if (pTVar1 == (TLocalQueue *)0x0) {
      param_3 = true;
    }
  }
  else {
    param_3 = true;
    param_2 = GlobalQueuePreference;
  }
  if (pTVar1 == (TLocalQueue *)0x0) {
LAB_1414a1f84:
    bVar7 = (byte)((ulonglong)*(undefined8 *)&param_1->field_0x38 >> 0x3b) & 7;
    if ((4 < bVar7) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("PriorityIndex < int32(ETaskPriority::Count)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\LocalQueue.h"
                           ,0x161,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    THazardPointer<FAAArrayQueue<LowLevelTasks::FTask>::Node,0>::
    THazardPointer<FAAArrayQueue<LowLevelTasks::FTask>::Node,0>
              (&local_38,&(this->QueueRegistry).OverflowQueues[bVar7].tail,
               &(this->QueueRegistry).OverflowQueues[bVar7].Hazards);
    FAAArrayQueue<LowLevelTasks::FTask>::
    enqueueInternal<THazardPointer<FAAArrayQueue<LowLevelTasks::FTask>::Node,0>_>
              ((this->QueueRegistry).OverflowQueues + bVar7,param_1,&local_38);
    local_48.Record = local_38.Record;
  }
  else {
    if (pTVar1 == (this->GameThreadLocalQueue).Ptr) {
      param_3 = true;
    }
    else if (param_2 == GlobalQueuePreference) goto LAB_1414a1f84;
    uVar4 = (uint)((ulonglong)*(undefined8 *)&param_1->field_0x38 >> 0x3b) & 7;
    pTVar9 = pTVar1->LocalQueues + uVar4;
    uVar10 = (ulonglong)(*(int *)pTVar9 + 1U & 0x3ff);
    if (*(longlong *)(&pTVar9->field_0x100 + uVar10 * 0x80) == 0) {
      *(FTask **)(&pTVar9->field_0x100 + uVar10 * 0x80) = param_1;
      *(int *)pTVar9 = *(int *)pTVar9 + 1;
      goto LAB_1414a200c;
    }
    this_00 = pTVar1->Registry->OverflowQueues + uVar4;
    THazardPointer<FAAArrayQueue<LowLevelTasks::FTask>::Node,0>::
    THazardPointer<FAAArrayQueue<LowLevelTasks::FTask>::Node,0>
              (&local_48,&this_00->tail,&this_00->Hazards);
    FAAArrayQueue<LowLevelTasks::FTask>::
    enqueueInternal<THazardPointer<FAAArrayQueue<LowLevelTasks::FTask>::Node,0>_>
              (this_00,param_1,&local_48);
  }
  if (local_48.Record != (FHazardRecord *)0x0) {
    (local_48.Record)->Hazard = (atomic<unsigned___int64>)0xffffffffffffffff;
  }
LAB_1414a200c:
  if (param_3 != false) {
    if (((FScheduler *)pFVar6->ActiveScheduler == this) && (pFVar6->WorkerType != None)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
      pFVar6->bPendingWakeUp = (atomic<bool>)0x1;
      if (this->TemporaryShutdown != (atomic<bool>)0x0) {
        pFVar6->bPendingWakeUp = (atomic<bool>)0x0;
        return;
      }
    }
    if (1 < bVar8) {
      lVar11 = 0x70;
    }
    iVar5 = LowLevelTasks::Private::FWaitingQueue::NotifyInternal
                      ((FWaitingQueue *)((longlong)&this->WaitingQueue[0].ThreadCount + lVar11),1);
    if ((iVar5 == 0) && (bVar8 < 2)) {
      LowLevelTasks::Private::FWaitingQueue::NotifyInternal(this->WaitingQueue + 1,1);
    }
    if (bVar3) {
      pFVar6->bPendingWakeUp = (atomic<bool>)0x0;
    }
  }
  return;
}

// RestartWorkers @ 1414af240

void __thiscall
LowLevelTasks::FScheduler::RestartWorkers
          (FScheduler *this,uint param_1,uint param_2,EForkable param_3,EThreadPriority param_4,
          EThreadPriority param_5,ulong64 param_6,ulong64 param_7)

{
  FTlsValues *pFVar1;
  byte bVar2;
  atomic<unsigned_char> aVar3;
  bool bVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&this->WorkerThreadsCS);
  this->TemporaryShutdown = (atomic<bool>)0x1;
  do {
    LOCK();
    bVar4 = FSchedulerTls::FImpl::ThreadTlsValuesMutex.State == (atomic<unsigned_char>)0x0;
    if (bVar4) {
      FSchedulerTls::FImpl::ThreadTlsValuesMutex.State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar4) {
      UE::FMutex::LockSlow(&FSchedulerTls::FImpl::ThreadTlsValuesMutex);
    }
    FSchedulerTls::FImpl::ProcessPendingTlsValuesNoLock();
    FWindowsPlatformMisc::AsymmetricThreadFenceHeavy();
    pFVar1 = FSchedulerTls::FImpl::ThreadTlsValues;
    while( true ) {
      if (pFVar1 == (FTlsValues *)0x0) {
        LOCK();
        aVar3 = FSchedulerTls::FImpl::ThreadTlsValuesMutex.State + -1;
        UNLOCK();
        bVar2 = (byte)FSchedulerTls::FImpl::ThreadTlsValuesMutex.State & 2;
        FSchedulerTls::FImpl::ThreadTlsValuesMutex.State = aVar3;
        if (bVar2 != 0) {
          UE::FMutex::WakeWaitingThread(&FSchedulerTls::FImpl::ThreadTlsValuesMutex);
        }
        StopWorkers(this,false);
        StartWorkers(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
        this->TemporaryShutdown = (atomic<bool>)0x0;
                    /* WARNING: Could not recover jumptable at 0x0001414af359. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        LeaveCriticalSection((LPCRITICAL_SECTION)&this->WorkerThreadsCS);
        return;
      }
      if (((FScheduler *)pFVar1->ActiveScheduler != this) &&
         (pFVar1->bPendingWakeUp != (atomic<bool>)0x0)) break;
      pFVar1 = (FTlsValues *)pFVar1->_padding_;
    }
    LOCK();
    aVar3 = FSchedulerTls::FImpl::ThreadTlsValuesMutex.State + -1;
    UNLOCK();
    bVar2 = (byte)FSchedulerTls::FImpl::ThreadTlsValuesMutex.State & 2;
    FSchedulerTls::FImpl::ThreadTlsValuesMutex.State = aVar3;
    if (bVar2 != 0) {
      UE::FMutex::WakeWaitingThread(&FSchedulerTls::FImpl::ThreadTlsValuesMutex);
    }
  } while( true );
}

// StandbyLoop @ 1414b0b50

void __thiscall
LowLevelTasks::FScheduler::StandbyLoop
          (FScheduler *this,FWaitEvent *param_1,TLocalQueue *param_2,uint param_3,bool param_4)

{
  atomic<unsigned___int64> aVar1;
  TArray<LowLevelTasks::Private::FWaitEvent,TAlignedHeapAllocator<64>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  FTask *pFVar9;
  atomic<unsigned___int64> aVar10;
  FWaitingQueue *this_00;
  atomic<unsigned___int64> aVar11;
  
  bVar7 = false;
  bVar5 = false;
  bVar6 = false;
LAB_1414b0b90:
  bVar8 = false;
  do {
    pFVar9 = LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue::StealLocal
                       ((this->GameThreadLocalQueue).Ptr,param_4);
    if (pFVar9 == (FTask *)0x0) {
      pFVar9 = LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue::Dequeue
                         (param_2,param_4);
      if (pFVar9 == (FTask *)0x0) {
        pFVar9 = LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue::DequeueSteal
                           (param_2,param_4);
        if (pFVar9 == (FTask *)0x0) break;
        while( true ) {
          if (bVar5) {
            if (bVar6) {
              FCpuProfilerTrace::OutputEndEvent();
              bVar6 = false;
            }
            bVar5 = false;
          }
          pFVar9 = ExecuteTask(this,pFVar9);
          if (pFVar9 == (FTask *)0x0) break;
          LOCK();
          *(ulonglong *)&pFVar9->field_0x38 = *(ulonglong *)&pFVar9->field_0x38 | 2;
          UNLOCK();
        }
      }
      else {
        while( true ) {
          if (bVar5) {
            if (bVar6) {
              FCpuProfilerTrace::OutputEndEvent();
              bVar6 = false;
            }
            bVar5 = false;
          }
          pFVar9 = ExecuteTask(this,pFVar9);
          if (pFVar9 == (FTask *)0x0) break;
          LOCK();
          *(ulonglong *)&pFVar9->field_0x38 = *(ulonglong *)&pFVar9->field_0x38 | 2;
          UNLOCK();
        }
      }
    }
    else {
      while( true ) {
        if (bVar5) {
          if (bVar6) {
            FCpuProfilerTrace::OutputEndEvent();
            bVar6 = false;
          }
          bVar5 = false;
        }
        pFVar9 = ExecuteTask(this,pFVar9);
        if (pFVar9 == (FTask *)0x0) break;
        LOCK();
        *(ulonglong *)&pFVar9->field_0x38 = *(ulonglong *)&pFVar9->field_0x38 | 2;
        UNLOCK();
      }
    }
    bVar7 = false;
    bVar8 = true;
    LowLevelTasks::Private::FWaitingQueue::ConditionalStandby(this->WaitingQueue + param_4,param_1);
  } while( true );
  if (this->ActiveWorkers == (atomic<unsigned_int>)0x0) {
    if ((bVar5) && (bVar6)) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return;
  }
  if (!bVar8) {
    if (bVar7) {
      aVar1 = (atomic<unsigned___int64>)param_1->Epoch;
      this_00 = this->WaitingQueue + param_4;
      LowLevelTasks::Private::FWaitingQueue::CheckStandbyState(this_00,(ulong64)aVar1);
      pTVar2 = this_00->NodesArray;
      if ((pTVar2->ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      aVar10._0_4_ = aVar1._0_4_ & 0x3fff;
      aVar10._4_4_ = 0;
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      LOCK();
      param_1->Next = aVar10;
      UNLOCK();
      aVar11 = (atomic<unsigned___int64>)
               ((longlong)param_1 - (longlong)pFVar3 >> 6 |
                ((ulonglong)aVar1 & 0xfffffc0000000000) + 0x40000000000 |
               (ulonglong)(aVar1._0_4_ & 0xfffc000) - 0x4000);
      (**(code **)(((param_1->Event).Event)->_padding_ + 0x18))();
      LowLevelTasks::Private::FWaitingQueue::CheckStandbyState(this_00,(ulong64)aVar11);
      LOCK();
      aVar10 = this_00->StandbyState;
      bVar8 = aVar1 == aVar10;
      if (bVar8) {
        this_00->StandbyState = aVar11;
        aVar10 = aVar1;
      }
      UNLOCK();
      if (bVar8) {
        if (bVar5) {
          if (bVar6) {
            FCpuProfilerTrace::OutputEndEvent();
            bVar6 = false;
          }
          bVar5 = false;
        }
        LowLevelTasks::Private::WaitingQueueImpl::EnterWait(param_1);
        bVar7 = false;
      }
      else {
        param_1->Epoch = (ulong64)aVar10;
      }
    }
    else {
      if (!bVar5) {
        if (-1 < CpuChannel->Enabled) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < `public:_bool___cdecl_LowLevelTasks::Private::FOutOfWork::Start(void)___ptr64'::
                 __l8::_thread_safe_static_guard_0__) &&
             (_Init_thread_header(&`public:_bool___cdecl_LowLevelTasks::Private::FOutOfWork::Start(void)___ptr64'
                                   ::__l8::_thread_safe_static_guard_0__),
             `public:_bool___cdecl_LowLevelTasks::Private::FOutOfWork::Start(void)___ptr64'::__l8::
             _thread_safe_static_guard_0__ == -1)) {
            `public:_bool___cdecl_LowLevelTasks::Private::FOutOfWork::Start(void)___ptr64'::__l8::
            WorkerLookingForWorkTraceId =
                 FCpuProfilerTrace::OutputEventType("TaskWorkerIsLookingForWork",(char *)0x0,0);
            _Init_thread_footer(&`public:_bool___cdecl_LowLevelTasks::Private::FOutOfWork::Start(void)___ptr64'
                                 ::__l8::_thread_safe_static_guard_0__);
          }
          FCpuProfilerTrace::OutputBeginEvent
                    (`public:_bool___cdecl_LowLevelTasks::Private::FOutOfWork::Start(void)___ptr64'
                     ::__l8::WorkerLookingForWorkTraceId);
          bVar6 = true;
        }
        bVar5 = true;
      }
      bVar7 = true;
      param_1->Epoch = (ulong64)this->WaitingQueue[param_4].StandbyState;
    }
  }
  goto LAB_1414b0b90;
}

// StartWorkers @ 1414b0f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
LowLevelTasks::FScheduler::StartWorkers
          (FScheduler *this,uint param_1,uint param_2,EForkable param_3,EThreadPriority param_4,
          EThreadPriority param_5,ulong64 param_6,ulong64 param_7)

{
  TUniquePtr<LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue,TDefaultDelete<LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue>_>
  *pTVar1;
  TArray<LowLevelTasks::Private::FWaitEvent,TAlignedHeapAllocator<64>_> *this_00;
  TArray<LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue,TAlignedHeapAllocator<128>_>
  *this_01;
  uint uVar2;
  atomic<FThread_*> *paVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  float fVar7;
  EForkable EVar8;
  undefined4 uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  TLocalQueue *pTVar15;
  TLocalQueue *pTVar16;
  FTlsValues *pFVar17;
  ulong64 uVar18;
  atomic<FThread_*> *_Dst;
  undefined8 uVar19;
  longlong *plVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  float fVar24;
  undefined1 auStackY_1b8 [32];
  int local_178;
  uint local_174;
  undefined4 local_170;
  EForkable local_16c;
  uint local_168;
  FScheduler *local_160;
  undefined8 uStack_158;
  EForkable local_150;
  undefined4 uStack_14c;
  uint uStack_148;
  uint uStack_144;
  FScheduler *local_140;
  FScheduler *pFStack_138;
  EForkable local_130;
  undefined4 uStack_12c;
  uint uStack_128;
  uint uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  longlong local_118 [2];
  code *local_108 [2];
  undefined1 local_f8 [24];
  undefined8 local_e0;
  code *local_d8 [2];
  undefined1 local_c8 [24];
  undefined8 local_b0;
  code *local_a8;
  longlong local_98 [3];
  longlong *local_80;
  code *local_78;
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_16c = param_3;
  bVar10 = IsInGameThread();
  if ((!bVar10) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\Scheduler.cpp"
                          ,0xe4,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar16 = (TLocalQueue *)0x0;
  local_178 = 0;
  pwVar13 = FCommandLine::Get();
  bVar10 = FParse::Value(pwVar13,L"TaskGraphUseDynamicPrioritization=",&local_178);
  if (bVar10) {
    GTaskGraphUseDynamicPrioritization = local_178 != 0;
  }
  pwVar13 = FCommandLine::Get();
  bVar10 = FParse::Value(pwVar13,L"TaskGraphUseDynamicThreadCreation=",&local_178);
  if (bVar10) {
    GTaskGraphUseDynamicThreadCreation = local_178 != 0;
  }
  if ((param_1 == 0) && (param_2 == 0)) {
    iVar11 = FWindowsPlatformMisc::NumberOfWorkerThreadsToSpawn();
    param_1 = iVar11 - 1;
    if (2 < (int)param_1) {
      param_1 = 2;
    }
    if ((int)param_1 < 1) {
      param_1 = 1;
    }
    iVar11 = FWindowsPlatformMisc::NumberOfWorkerThreadsToSpawn();
    param_2 = iVar11 - param_1;
    if ((int)param_2 < 1) {
      param_2 = 1;
    }
  }
  this->WorkerPriority = param_4;
  this->BackgroundPriority = param_5;
  if (param_6 != 0) {
    this->WorkerAffinity = param_6;
  }
  if (param_7 != 0) {
    this->BackgroundAffinity = param_7;
  }
  bVar10 = FGenericPlatformProcess::SupportsMultithreading();
  if ((bVar10) || (bVar10 = FForkProcessHelper::IsForkedMultithreadInstance(), bVar10)) {
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  if ((this->ActiveWorkers == (atomic<unsigned_int>)0x0) && (bVar10)) {
    LOCK();
    bVar10 = this->ActiveWorkers == (atomic<unsigned_int>)0x0;
    if (bVar10) {
      this->ActiveWorkers = (atomic<unsigned_int>)(param_2 + param_1);
    }
    UNLOCK();
    if (!bVar10) {
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&this->WorkerThreadsCS);
    if (((this->WorkerThreads).Ptr != (atomic<FThread_*> *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("!WorkerThreads",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\Scheduler.cpp"
                            ,0x108,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (((this->WorkerLocalQueues).ArrayNum != 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("!WorkerLocalQueues.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\Scheduler.cpp"
                            ,0x109,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (((this->WorkerEvents).ArrayNum != 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("!WorkerEvents.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\Scheduler.cpp"
                            ,0x10a,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((this->NextWorkerId != (atomic<unsigned_int>)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("NextWorkerId == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\Scheduler.cpp"
                            ,0x10b,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    fVar7 = __real_bf000000;
    pTVar1 = &this->GameThreadLocalQueue;
    LOCK();
    this->ForegroundCreationIndex = (atomic<int>)0x0;
    UNLOCK();
    LOCK();
    this->BackgroundCreationIndex = (atomic<int>)0x0;
    UNLOCK();
    fVar24 = GTaskGraphOversubscriptionRatio;
    if (GTaskGraphOversubscriptionRatio <= __real_3f800000) {
      fVar24 = __real_3f800000;
    }
    local_174 = -((int)ROUND(fVar7 - (float)param_1 * (fVar24 + fVar24)) >> 1);
    local_168 = -((int)ROUND(fVar7 - (float)param_2 * (fVar24 + fVar24)) >> 1);
    uVar2 = local_168 + local_174;
    lVar14 = 0x7bfc;
    if (GTaskGraphUseDynamicPrioritization != false) {
      lVar14 = 0x7bf8;
    }
    local_170 = *(undefined4 *)((longlong)&this->WaitingQueue[0].ThreadCount + lVar14);
    if (pTVar1->Ptr == (TLocalQueue *)0x0) {
      pTVar15 = ::operator_new(0xa0580,0x80);
      if (pTVar15 != (TLocalQueue *)0x0) {
        pTVar16 = LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue::TLocalQueue
                            (pTVar15,&this->QueueRegistry,EForeground);
      }
      if (pTVar1 == (TUniquePtr<LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue,TDefaultDelete<LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue>_>
                     *)local_118) {
        if (pTVar16 != (TLocalQueue *)0x0) {
          LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue::~TLocalQueue(pTVar16)
          ;
          ::operator_delete(pTVar16,0xa0580,0x80);
        }
      }
      else {
        pTVar15 = pTVar1->Ptr;
        (this->GameThreadLocalQueue).Ptr = pTVar16;
        if (pTVar15 != (TLocalQueue *)0x0) {
          LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue::~TLocalQueue(pTVar15)
          ;
          ::operator_delete(pTVar15,0xa0580,0x80);
        }
      }
    }
    pTVar16 = (this->GameThreadLocalQueue).Ptr;
    pFVar17 = FSchedulerTls::GetTlsValuesRef();
    this_00 = &this->WorkerEvents;
    pFVar17->LocalQueue = pTVar16;
    iVar11 = (this->WorkerEvents).ArrayNum;
    if (iVar11 < (int)uVar2) {
      iVar12 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<64>::ForAnyElementType>
                         (0x40,0x40,uVar2 - iVar11,&this_00->AllocatorInstance,
                          &(this->WorkerEvents).ArrayNum,&(this->WorkerEvents).ArrayMax);
      DefaultConstructItems<LowLevelTasks::Private::FWaitEvent,int>
                ((this_00->AllocatorInstance).Data + (longlong)iVar12 * 0x40,uVar2 - iVar11);
    }
    else {
      if ((int)uVar2 < 0) goto LAB_1414b17c8;
      if ((int)uVar2 < iVar11) {
        uVar21 = iVar11 - uVar2;
        if (((int)(uVar2 | uVar21) < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (uVar21 != 0) {
          TArray<LowLevelTasks::Private::FWaitEvent,TAlignedHeapAllocator<64>_>::RemoveAtImpl
                    (this_00,uVar2,uVar21);
          UE::Core::Private::ReallocShrink<2,TAlignedHeapAllocator<64>::ForAnyElementType>
                    (0x40,0x40,&this_00->AllocatorInstance,(this->WorkerEvents).ArrayNum,
                     &(this->WorkerEvents).ArrayMax);
        }
      }
    }
    this_01 = &this->WorkerLocalQueues;
    iVar11 = (this->WorkerLocalQueues).ArrayNum;
    if (iVar11 < (int)uVar2) {
      iVar12 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<128>::ForAnyElementType>
                         (0xa0580,0x80,uVar2 - iVar11,&this_01->AllocatorInstance,
                          &(this->WorkerLocalQueues).ArrayNum,&(this->WorkerLocalQueues).ArrayMax);
      DefaultConstructItems<LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue,int>
                ((this_01->AllocatorInstance).Data + (longlong)iVar12 * 0xa0580,uVar2 - iVar11);
    }
    else {
      if ((int)uVar2 < 0) {
LAB_1414b17c8:
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
      }
      if ((int)uVar2 < iVar11) {
        uVar21 = iVar11 - uVar2;
        if (((int)(uVar2 | uVar21) < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (uVar21 != 0) {
          TArray<LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue,TAlignedHeapAllocator<128>_>
          ::RemoveAtImpl(this_01,uVar2,uVar21);
          UE::Core::Private::ReallocShrink<2,TAlignedHeapAllocator<128>::ForAnyElementType>
                    (0xa0580,0x80,&this_01->AllocatorInstance,(this->WorkerLocalQueues).ArrayNum,
                     &(this->WorkerLocalQueues).ArrayMax);
        }
      }
    }
    uVar23 = (ulonglong)(int)uVar2;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar23;
    uVar18 = SUB168(ZEXT816(8) * auVar5,0);
    if (SUB168(ZEXT816(8) * auVar5,8) != 0) {
      uVar18 = 0xffffffffffffffff;
    }
    _Dst = operator_new__(uVar18);
    if (_Dst == (atomic<FThread_*> *)0x0) {
      _Dst = (atomic<FThread_*> *)0x0;
    }
    else if (uVar23 != 0) {
      memset(_Dst,0,uVar23 * 8);
    }
    paVar3 = (this->WorkerThreads).Ptr;
    (this->WorkerThreads).Ptr = _Dst;
    operator_delete__(paVar3);
    EVar8 = local_16c;
    uVar2 = local_174;
    uStack_158._4_4_ = (undefined4)((ulonglong)this >> 0x20);
    uVar9 = uStack_158._4_4_;
    uStack_14c = uStack_158._4_4_;
    local_150 = local_16c;
    uStack_144 = local_174;
    local_78 = (code *)0x0;
    local_160 = this;
    uStack_158 = this;
    uStack_148 = param_1;
    local_50 = FMemory::Malloc(0x28,8);
    uVar21 = local_168;
    local_130 = EVar8;
    uVar23 = (ulonglong)local_168;
    *local_50 = (longlong)
                &UE::Core::Private::Function::
                 TFunction_OwnedObject<`LowLevelTasks::FScheduler::StartWorkers'::`27'::<lambda_2>,0,1>
                 ::_vftable_;
    local_50[1] = (longlong)local_160;
    local_50[2] = (longlong)uStack_158;
    local_50[3] = CONCAT44(uStack_14c,local_150);
    local_50[4] = CONCAT44(uStack_144,uStack_148);
    if (local_50 + 1 != (longlong *)0x0) {
      local_78 = UE::Core::Private::Function::
                 TFunctionRefCaller<`LowLevelTasks::FScheduler::StartWorkers'::__l27::<lambda_2>,void>
                 ::Call;
    }
    local_120 = local_170;
    uStack_12c = uVar9;
    uStack_124 = local_168;
    local_a8 = (code *)0x0;
    local_140 = this;
    pFStack_138 = this;
    uStack_128 = param_2;
    local_80 = FMemory::Malloc(0x30,8);
    *local_80 = (longlong)
                &UE::Core::Private::Function::
                 TFunction_OwnedObject<`LowLevelTasks::FScheduler::StartWorkers'::`27'::<lambda_3>,0,1>
                 ::_vftable_;
    local_80[1] = (longlong)local_140;
    local_80[2] = (longlong)pFStack_138;
    *(EForkable *)(local_80 + 3) = local_130;
    *(undefined4 *)((longlong)local_80 + 0x1c) = uStack_12c;
    *(uint *)(local_80 + 4) = uStack_128;
    *(uint *)((longlong)local_80 + 0x24) = uStack_124;
    local_80[5] = CONCAT44(uStack_11c,local_120);
    if (local_80 + 1 != (longlong *)0x0) {
      local_a8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`LowLevelTasks::FScheduler::StartWorkers'::__l27::<lambda_3>,void>
                 ::Call;
    }
    local_e0 = 0;
    uVar6 = uVar2;
    if (GTaskGraphUseDynamicThreadCreation != false) {
      uVar6 = 0;
    }
    local_108[0] = local_78;
    if (local_78 != (code *)0x0) {
      plVar20 = local_68;
      if (local_50 != (longlong *)0x0) {
        plVar20 = local_50;
      }
      (**(code **)*plVar20)(local_120,local_f8);
    }
    LowLevelTasks::Private::FWaitingQueue::Init
              (this->WaitingQueue,param_1,uVar2,(TFunction<void___cdecl(void)> *)local_108,uVar6);
    uVar6 = uVar21;
    if (GTaskGraphUseDynamicThreadCreation != false) {
      uVar6 = 0;
    }
    local_d8[0] = local_a8;
    local_b0 = 0;
    if (local_a8 != (code *)0x0) {
      plVar20 = local_98;
      if (local_80 != (longlong *)0x0) {
        plVar20 = local_80;
      }
      (**(code **)*plVar20)(plVar20,local_c8);
    }
    LowLevelTasks::Private::FWaitingQueue::Init
              (this->WaitingQueue + 1,param_2,uVar21,(TFunction<void___cdecl(void)> *)local_d8,uVar6
              );
    if (GTaskGraphUseDynamicThreadCreation == false) {
      if (0 < (int)uVar2) {
        uVar22 = (ulonglong)uVar2;
        do {
          UE::Core::Private::Function::CheckCallable(local_78);
          pcVar4 = local_78;
          plVar20 = local_68;
          if (local_50 != (longlong *)0x0) {
            plVar20 = local_50;
          }
          uVar19 = (**(code **)(*plVar20 + 8))();
          (*pcVar4)(uVar19);
          uVar22 = uVar22 - 1;
        } while (uVar22 != 0);
      }
      if (0 < (int)uVar21) {
        do {
          UE::Core::Private::Function::CheckCallable(local_a8);
          pcVar4 = local_a8;
          plVar20 = local_98;
          if (local_80 != (longlong *)0x0) {
            plVar20 = local_80;
          }
          uVar19 = (**(code **)(*plVar20 + 8))();
          (*pcVar4)(uVar19);
          uVar23 = uVar23 - 1;
        } while (uVar23 != 0);
      }
    }
    else if (this->TemporaryShutdown != (atomic<bool>)0x0) {
      LowLevelTasks::Private::FWaitingQueue::NotifyInternal(this->WaitingQueue,1);
      LowLevelTasks::Private::FWaitingQueue::NotifyInternal(this->WaitingQueue + 1,1);
    }
    if (local_a8 != (code *)0x0) {
      plVar20 = local_98;
      if (local_80 != (longlong *)0x0) {
        plVar20 = local_80;
      }
      (**(code **)(*plVar20 + 0x10))();
    }
    if (local_78 != (code *)0x0) {
      plVar20 = local_68;
      if (local_50 != (longlong *)0x0) {
        plVar20 = local_50;
      }
      (**(code **)(*plVar20 + 0x10))();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->WorkerThreadsCS);
  }
  return;
}

// StopWorkers @ 1414b1ac0

void __thiscall LowLevelTasks::FScheduler::StopWorkers(FScheduler *this,bool param_1)

{
  atomic<FThread_*> *paVar1;
  longlong *plVar2;
  int *piVar3;
  atomic<FThread_*> this_00;
  atomic<FAAArrayQueue<LowLevelTasks::FTask>::Node_*> aVar4;
  atomic<unsigned_int> aVar5;
  int iVar6;
  TLocalQueue *pTVar7;
  FWaitEvent *pFVar8;
  atomic<unsigned___int64> aVar9;
  atomic<FAAArrayQueue<LowLevelTasks::FTask>::Node_*> aVar10;
  longlong lVar11;
  code *pcVar12;
  atomic<FAAArrayQueue<LowLevelTasks::FTask>::Node_*> *paVar13;
  FHazardRecord *pFVar14;
  bool bVar15;
  FTlsValues *pFVar16;
  atomic<unsigned___int64> this_01;
  undefined8 *puVar17;
  atomic<LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue_*> *paVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  atomic<FAAArrayQueue<LowLevelTasks::FTask>::Node_*> *paVar21;
  atomic<FThread_*> *paVar22;
  uint uVar23;
  atomic<unsigned___int64> *paVar24;
  THazardPointer<FAAArrayQueue<LowLevelTasks::FTask>::Node,0> local_58;
  FHazardDeleter local_48;
  
  bVar15 = IsInGameThread();
  if ((!bVar15) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\Scheduler.cpp"
                          ,0x1b4,L""), bVar15)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  aVar5 = this->ActiveWorkers;
  if (aVar5 != (atomic<unsigned_int>)0x0) {
    LOCK();
    bVar15 = aVar5 == this->ActiveWorkers;
    if (bVar15) {
      this->ActiveWorkers = (atomic<unsigned_int>)0x0;
    }
    UNLOCK();
    if (bVar15) {
      EnterCriticalSection((LPCRITICAL_SECTION)&this->WorkerThreadsCS);
      LowLevelTasks::Private::FWaitingQueue::StartShutdown(this->WaitingQueue);
      LowLevelTasks::Private::FWaitingQueue::StartShutdown(this->WaitingQueue + 1);
      iVar6 = (this->WorkerLocalQueues).ArrayNum;
      paVar22 = (this->WorkerThreads).Ptr;
      if ((iVar6 < 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar15)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      paVar1 = paVar22 + iVar6;
      for (; paVar22 != paVar1; paVar22 = paVar22 + 1) {
        LOCK();
        this_00 = *paVar22;
        *paVar22 = (atomic<FThread_*>)0x0;
        UNLOCK();
        if (this_00 != (atomic<FThread_*>)0x0) {
          ::FThread::Join((FThread *)this_00);
          ::FThread::~FThread((FThread *)this_00);
          ::operator_delete((void *)this_00,0x10);
        }
      }
      LowLevelTasks::Private::FWaitingQueue::FinishShutdown(this->WaitingQueue);
      LowLevelTasks::Private::FWaitingQueue::FinishShutdown(this->WaitingQueue + 1);
      pTVar7 = (this->GameThreadLocalQueue).Ptr;
      if (pTVar7 != (TLocalQueue *)0x0) {
        (this->GameThreadLocalQueue).Ptr = (TLocalQueue *)0x0;
        LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue::~TLocalQueue(pTVar7);
        ::operator_delete(pTVar7,0xa0580,0x80);
      }
      pFVar16 = FSchedulerTls::GetTlsValuesRef();
      pFVar16->LocalQueue = (TLocalQueue *)0x0;
      LOCK();
      this->NextWorkerId = (atomic<unsigned_int>)0x0;
      UNLOCK();
      paVar22 = (this->WorkerThreads).Ptr;
      (this->WorkerThreads).Ptr = (atomic<FThread_*> *)0x0;
      operator_delete__(paVar22);
      piVar3 = &(this->WorkerLocalQueues).ArrayMax;
      pTVar7 = (TLocalQueue *)(this->WorkerLocalQueues).AllocatorInstance.Data;
      iVar6 = (this->WorkerLocalQueues).ArrayNum;
      if (*piVar3 < 0) {
        DestructItems<LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue,int>
                  (pTVar7,iVar6);
        (this->WorkerLocalQueues).ArrayNum = 0;
        if (*piVar3 != 0) {
          UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<128>::ForAnyElementType>
                    (0xa0580,0x80,0,&(this->WorkerLocalQueues).AllocatorInstance,0,piVar3);
        }
      }
      else {
        DestructItems<LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue,int>
                  (pTVar7,iVar6);
        (this->WorkerLocalQueues).ArrayNum = 0;
      }
      piVar3 = &(this->WorkerEvents).ArrayMax;
      pFVar8 = (FWaitEvent *)(this->WorkerEvents).AllocatorInstance.Data;
      iVar6 = (this->WorkerEvents).ArrayNum;
      if (*piVar3 < 0) {
        DestructItems<LowLevelTasks::Private::FWaitEvent,int>(pFVar8,iVar6);
        (this->WorkerEvents).ArrayNum = 0;
        if (*piVar3 != 0) {
          UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<64>::ForAnyElementType>
                    (0x40,0x40,0,&(this->WorkerEvents).AllocatorInstance,0,piVar3);
        }
      }
      else {
        DestructItems<LowLevelTasks::Private::FWaitEvent,int>(pFVar8,iVar6);
        (this->WorkerEvents).ArrayNum = 0;
      }
      if ((param_1) &&
         (this_01 = (atomic<unsigned___int64>)
                    LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::DequeueGlobal
                              (&this->QueueRegistry,true), this_01 != (atomic<unsigned___int64>)0x0)
         ) {
        plVar2 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
LAB_1414b1d07:
        paVar24 = (atomic<unsigned___int64> *)(*plVar2 + 0x40);
        while( true ) {
          aVar9 = *paVar24;
          *paVar24 = this_01;
          if (((byte)((ulonglong)*(undefined8 *)((longlong)this_01 + 0x38) >> 0x3b) & 7) < 2) {
            if (CpuChannel->Enabled < 0) {
              this_01 = (atomic<unsigned___int64>)FTask::ExecuteTask((FTask *)this_01);
            }
            else {
              FCpuProfilerTrace::GetOrCreateSpecId
                        (&`private:_class_LowLevelTasks::FTask*___ptr64___cdecl_LowLevelTasks::FScheduler::ExecuteTask(LowLevelTasks::FTask*___ptr64)___ptr64'
                          ::__l5::__CpuProfilerEventSpecId396,"ExecuteForegroundTask",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\Scheduler.cpp"
                         ,0x18c);
              FCpuProfilerTrace::OutputBeginEvent
                        (`private:_class_LowLevelTasks::FTask*___ptr64___cdecl_LowLevelTasks::FScheduler::ExecuteTask(LowLevelTasks::FTask*___ptr64)___ptr64'
                         ::__l5::__CpuProfilerEventSpecId396);
              this_01 = (atomic<unsigned___int64>)FTask::ExecuteTask((FTask *)this_01);
              FCpuProfilerTrace::OutputEndEvent();
            }
          }
          else {
            if ((((aVar9 == (atomic<unsigned___int64>)0x0) &&
                 (GTaskGraphUseDynamicPrioritization != false)) &&
                (pFVar16 = FSchedulerTls::GetTlsValuesRef(), pFVar16->WorkerType != None)) &&
               (((FScheduler *)pFVar16->ActiveScheduler == this &&
                ((*(ulonglong *)((longlong)this_01 + 0x38) & 5) == 0)))) {
              bVar15 = false;
              puVar17 = TlsGetValue(FRunnableThread::RunnableTlsSlot);
              if (CpuChannel->Enabled < 0) {
                (**(code **)*puVar17)(puVar17,this->BackgroundPriority);
              }
              else {
                FCpuProfilerTrace::GetOrCreateSpecId
                          (&`private:_class_LowLevelTasks::FTask*___ptr64___cdecl_LowLevelTasks::FScheduler::ExecuteTask(LowLevelTasks::FTask*___ptr64)___ptr64'
                            ::__l10::__CpuProfilerEventSpecId413,"LowerThreadPriority",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\Scheduler.cpp"
                           ,0x19d);
                FCpuProfilerTrace::OutputBeginEvent
                          (`private:_class_LowLevelTasks::FTask*___ptr64___cdecl_LowLevelTasks::FScheduler::ExecuteTask(LowLevelTasks::FTask*___ptr64)___ptr64'
                           ::__l10::__CpuProfilerEventSpecId413);
                (**(code **)*puVar17)(puVar17,this->BackgroundPriority);
                FCpuProfilerTrace::OutputEndEvent();
              }
            }
            else {
              bVar15 = true;
              puVar17 = (undefined8 *)0x0;
            }
            if (CpuChannel->Enabled < 0) {
              this_01 = (atomic<unsigned___int64>)FTask::ExecuteTask((FTask *)this_01);
            }
            else {
              FCpuProfilerTrace::GetOrCreateSpecId
                        (&`private:_class_LowLevelTasks::FTask*___ptr64___cdecl_LowLevelTasks::FScheduler::ExecuteTask(LowLevelTasks::FTask*___ptr64)___ptr64'
                          ::__l12::__CpuProfilerEventSpecId418,"ExecuteBackgroundTask",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\Scheduler.cpp"
                         ,0x1a2);
              FCpuProfilerTrace::OutputBeginEvent
                        (`private:_class_LowLevelTasks::FTask*___ptr64___cdecl_LowLevelTasks::FScheduler::ExecuteTask(LowLevelTasks::FTask*___ptr64)___ptr64'
                         ::__l12::__CpuProfilerEventSpecId418);
              this_01 = (atomic<unsigned___int64>)FTask::ExecuteTask((FTask *)this_01);
              FCpuProfilerTrace::OutputEndEvent();
            }
            if (!bVar15) {
              if (CpuChannel->Enabled < 0) {
                (**(code **)*puVar17)(puVar17,this->WorkerPriority);
              }
              else {
                FCpuProfilerTrace::GetOrCreateSpecId
                          (&`private:_class_LowLevelTasks::FTask*___ptr64___cdecl_LowLevelTasks::FScheduler::ExecuteTask(LowLevelTasks::FTask*___ptr64)___ptr64'
                            ::__l15::__CpuProfilerEventSpecId424,"RaiseThreadPriority",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\Scheduler.cpp"
                           ,0x1a8);
                FCpuProfilerTrace::OutputBeginEvent
                          (`private:_class_LowLevelTasks::FTask*___ptr64___cdecl_LowLevelTasks::FScheduler::ExecuteTask(LowLevelTasks::FTask*___ptr64)___ptr64'
                           ::__l15::__CpuProfilerEventSpecId424);
                (**(code **)*puVar17)(puVar17,this->WorkerPriority);
                FCpuProfilerTrace::OutputEndEvent();
              }
            }
          }
          *paVar24 = aVar9;
          if (this_01 == (atomic<unsigned___int64>)0x0) break;
          LOCK();
          *(ulonglong *)((longlong)this_01 + 0x38) = *(ulonglong *)((longlong)this_01 + 0x38) | 2;
          UNLOCK();
        }
        uVar20 = 0;
        do {
          paVar21 = &(this->QueueRegistry).OverflowQueues[uVar20].head;
          THazardPointer<FAAArrayQueue<LowLevelTasks::FTask>::Node,0>::
          THazardPointer<FAAArrayQueue<LowLevelTasks::FTask>::Node,0>
                    (&local_58,paVar21,(FHazardPointerCollection *)(paVar21 + 0x20));
          pFVar14 = local_58.Record;
          paVar13 = local_58.Hazard;
LAB_1414b1f53:
          do {
            do {
              pFVar14->Hazard = (atomic<unsigned___int64>)*paVar13;
              LOCK();
              UNLOCK();
              aVar10 = *(atomic<FAAArrayQueue<LowLevelTasks::FTask>::Node_*> *)&pFVar14->Hazard;
            } while (aVar10 != *paVar13);
            if ((*(int *)((longlong)aVar10 + 0x2008) <= *(int *)aVar10) &&
               (*(longlong *)((longlong)aVar10 + 0x2010) == 0)) {
code_r0x0001414b20d5:
              pFVar14->Hazard = this_01;
              goto code_r0x0001414b2050;
            }
            LOCK();
            iVar6 = *(int *)aVar10;
            *(int *)aVar10 = *(int *)aVar10 + 1;
            UNLOCK();
            if (0x3ff < iVar6) {
              if (*(atomic<FAAArrayQueue<LowLevelTasks::FTask>::Node_*> *)
                   ((longlong)aVar10 + 0x2010) ==
                  (atomic<FAAArrayQueue<LowLevelTasks::FTask>::Node_*>)0x0)
              goto code_r0x0001414b20d5;
              LOCK();
              aVar4 = *paVar21;
              if (aVar10 == aVar4) {
                *paVar21 = *(atomic<FAAArrayQueue<LowLevelTasks::FTask>::Node_*> *)
                            ((longlong)aVar10 + 0x2010);
              }
              UNLOCK();
              if (aVar10 == aVar4) {
                local_48._padding_ = 0x1506141e8;
                pFVar14->Hazard = this_01;
                local_48.Pointer = (void *)aVar10;
                FHazardPointerCollection::Delete
                          ((FHazardPointerCollection *)(paVar21 + 0x20),&local_48,-1);
              }
              goto LAB_1414b1f53;
            }
            piVar3 = (int *)((longlong)aVar10 + (longlong)iVar6 * 8);
            if ((*(longlong *)((int *)((longlong)aVar10 + 8) + (longlong)iVar6 * 2) == 0) &&
               (iVar6 <= *(int *)((longlong)aVar10 + 0x2008))) {
              lVar11 = *(longlong *)(piVar3 + 2);
              for (uVar19 = (ulonglong)this_01 & 0xffffffff; (lVar11 == 0 && ((int)uVar19 < 10));
                  uVar19 = (ulonglong)((int)uVar19 + 1)) {
                lVar11 = *(longlong *)(piVar3 + 2);
              }
            }
            LOCK();
            this_01 = *(atomic<unsigned___int64> *)(piVar3 + 2);
            *(atomic<unsigned___int64> *)(piVar3 + 2) = (atomic<unsigned___int64>)0xffffffffffffffff
            ;
            UNLOCK();
          } while (this_01 == (atomic<unsigned___int64>)0x0);
          pFVar14->Hazard = (atomic<unsigned___int64>)0x0;
code_r0x0001414b2050:
          pFVar14->Hazard = (atomic<unsigned___int64>)0xffffffffffffffff;
          if (this_01 != (atomic<unsigned___int64>)0x0) goto LAB_1414b1d07;
          uVar23 = (int)uVar20 + 1;
          uVar20 = (ulonglong)uVar23;
          if (4 < (int)uVar23) break;
        } while( true );
      }
      aVar5 = (this->QueueRegistry).NumLocalQueues;
      if (aVar5 != (atomic<unsigned_int>)0x0) {
        uVar20 = (ulonglong)(uint)aVar5;
        paVar18 = (this->QueueRegistry).LocalQueues;
        do {
          *paVar18 = (atomic<LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue_*>)
                     0x0;
          paVar18 = paVar18 + 1;
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
      }
      (this->QueueRegistry).NumLocalQueues = (atomic<unsigned_int>)0x0;
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->WorkerThreadsCS);
    }
  }
  return;
}

// WorkerLoop @ 1414b9ff0

void __thiscall
LowLevelTasks::FScheduler::WorkerLoop
          (FScheduler *this,FWaitEvent *param_1,TLocalQueue *param_2,uint param_3,bool param_4)

{
  longlong *plVar1;
  atomic<unsigned___int64> *paVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  FTask *pFVar6;
  FTlsValues *pFVar7;
  ulonglong uVar8;
  FOutOfWork local_res8 [4];
  
  uVar8 = (ulonglong)param_4;
  local_res8[0].ActivelyLookingForWork = false;
  local_res8[0].bCpuBeginEventEmitted = false;
  plVar1 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
LAB_1414ba038:
  bVar3 = false;
LAB_1414ba040:
  bVar4 = false;
  do {
    pFVar6 = LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue::StealLocal
                       ((this->GameThreadLocalQueue).Ptr,param_4);
    if (pFVar6 == (FTask *)0x0) {
      pFVar6 = LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue::Dequeue
                         (param_2,param_4);
      if (pFVar6 == (FTask *)0x0) {
        pFVar6 = LowLevelTasks::Private::TLocalQueueRegistry<1024,1024>::TLocalQueue::DequeueSteal
                           (param_2,param_4);
        if (pFVar6 == (FTask *)0x0) break;
        while( true ) {
          if (local_res8[0].ActivelyLookingForWork != false) {
            if (local_res8[0].bCpuBeginEventEmitted != false) {
              FCpuProfilerTrace::OutputEndEvent();
              local_res8[0].ActivelyLookingForWork = false;
              local_res8[0].bCpuBeginEventEmitted = false;
            }
            local_res8[0] = (FOutOfWork)((ushort)local_res8[0] & 0xff00);
            bVar3 = LowLevelTasks::Private::FWaitingQueue::CancelWait
                              (this->WaitingQueue + uVar8,param_1);
            if (((bVar3) &&
                (iVar5 = LowLevelTasks::Private::FWaitingQueue::NotifyInternal
                                   (this->WaitingQueue + uVar8,1), iVar5 == 0)) &&
               (pFVar7 = FSchedulerTls::GetTlsValuesRef(), pFVar7->WorkerType != Background)) {
              LowLevelTasks::Private::FWaitingQueue::NotifyInternal
                        (this->WaitingQueue + (uVar8 ^ 1),1);
            }
          }
          pFVar6 = ExecuteTask(this,pFVar6);
          if (pFVar6 == (FTask *)0x0) break;
          LOCK();
          *(ulonglong *)&pFVar6->field_0x38 = *(ulonglong *)&pFVar6->field_0x38 | 2;
          UNLOCK();
        }
      }
      else {
        while( true ) {
          if (local_res8[0].ActivelyLookingForWork != false) {
            if (local_res8[0].bCpuBeginEventEmitted != false) {
              FCpuProfilerTrace::OutputEndEvent();
              local_res8[0].ActivelyLookingForWork = false;
              local_res8[0].bCpuBeginEventEmitted = false;
            }
            local_res8[0] = (FOutOfWork)((ushort)local_res8[0] & 0xff00);
            bVar3 = LowLevelTasks::Private::FWaitingQueue::CancelWait
                              (this->WaitingQueue + uVar8,param_1);
            if (((bVar3) &&
                (iVar5 = LowLevelTasks::Private::FWaitingQueue::NotifyInternal
                                   (this->WaitingQueue + uVar8,1), iVar5 == 0)) &&
               (pFVar7 = FSchedulerTls::GetTlsValuesRef(), pFVar7->WorkerType != Background)) {
              LowLevelTasks::Private::FWaitingQueue::NotifyInternal
                        (this->WaitingQueue + (uVar8 ^ 1),1);
            }
          }
          pFVar6 = ExecuteTask(this,pFVar6);
          if (pFVar6 == (FTask *)0x0) break;
          LOCK();
          *(ulonglong *)&pFVar6->field_0x38 = *(ulonglong *)&pFVar6->field_0x38 | 2;
          UNLOCK();
        }
      }
    }
    else {
      while( true ) {
        if (local_res8[0].ActivelyLookingForWork != false) {
          if (local_res8[0].bCpuBeginEventEmitted != false) {
            FCpuProfilerTrace::OutputEndEvent();
            local_res8[0].ActivelyLookingForWork = false;
            local_res8[0].bCpuBeginEventEmitted = false;
          }
          local_res8[0] = (FOutOfWork)((ushort)local_res8[0] & 0xff00);
          bVar3 = LowLevelTasks::Private::FWaitingQueue::CancelWait
                            (this->WaitingQueue + uVar8,param_1);
          if (((bVar3) &&
              (iVar5 = LowLevelTasks::Private::FWaitingQueue::NotifyInternal
                                 (this->WaitingQueue + uVar8,1), iVar5 == 0)) &&
             (pFVar7 = FSchedulerTls::GetTlsValuesRef(), pFVar7->WorkerType != Background)) {
            LowLevelTasks::Private::FWaitingQueue::NotifyInternal
                      (this->WaitingQueue + (uVar8 ^ 1),1);
          }
        }
        pFVar6 = ExecuteTask(this,pFVar6);
        if (pFVar6 == (FTask *)0x0) break;
        LOCK();
        *(ulonglong *)&pFVar6->field_0x38 = *(ulonglong *)&pFVar6->field_0x38 | 2;
        UNLOCK();
      }
    }
    bVar3 = false;
    bVar4 = true;
  } while( true );
  if (this->ActiveWorkers == (atomic<unsigned_int>)0x0) {
    if (local_res8[0].ActivelyLookingForWork != false) {
      if (local_res8[0].bCpuBeginEventEmitted != false) {
        FCpuProfilerTrace::OutputEndEvent();
        local_res8[0].ActivelyLookingForWork = false;
        local_res8[0].bCpuBeginEventEmitted = false;
      }
      local_res8[0] = (FOutOfWork)((ushort)local_res8[0] & 0xff00);
      LowLevelTasks::Private::FWaitingQueue::CancelWait(this->WaitingQueue + uVar8,param_1);
      if ((local_res8[0].ActivelyLookingForWork != false) &&
         (local_res8[0].bCpuBeginEventEmitted != false)) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    return;
  }
  if (bVar4) goto LAB_1414ba040;
  if (!bVar3) {
    if (local_res8[0].ActivelyLookingForWork == false) {
      if (-1 < CpuChannel->Enabled) {
        if ((*(int *)(*plVar1 + 0x9d4c) <
             `public:_bool___cdecl_LowLevelTasks::Private::FOutOfWork::Start(void)___ptr64'::__l8::
             _thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`public:_bool___cdecl_LowLevelTasks::Private::FOutOfWork::Start(void)___ptr64'
                                 ::__l8::_thread_safe_static_guard_0__),
           `public:_bool___cdecl_LowLevelTasks::Private::FOutOfWork::Start(void)___ptr64'::__l8::
           _thread_safe_static_guard_0__ == -1)) {
          `public:_bool___cdecl_LowLevelTasks::Private::FOutOfWork::Start(void)___ptr64'::__l8::
          WorkerLookingForWorkTraceId =
               FCpuProfilerTrace::OutputEventType("TaskWorkerIsLookingForWork",(char *)0x0,0);
          _Init_thread_footer(&`public:_bool___cdecl_LowLevelTasks::Private::FOutOfWork::Start(void)___ptr64'
                               ::__l8::_thread_safe_static_guard_0__);
        }
        FCpuProfilerTrace::OutputBeginEvent
                  (`public:_bool___cdecl_LowLevelTasks::Private::FOutOfWork::Start(void)___ptr64'::
                   __l8::WorkerLookingForWorkTraceId);
        local_res8[0].ActivelyLookingForWork = false;
        local_res8[0].bCpuBeginEventEmitted = true;
      }
      local_res8[0].ActivelyLookingForWork = true;
    }
    LOCK();
    paVar2 = &this->WaitingQueue[uVar8].State;
    *paVar2 = (atomic<unsigned___int64>)((longlong)*paVar2 + 0x4000);
    UNLOCK();
    bVar3 = true;
    goto LAB_1414ba040;
  }
  bVar4 = LowLevelTasks::Private::FWaitingQueue::CommitWait
                    (this->WaitingQueue + uVar8,param_1,local_res8,0x35,param_3);
  if (bVar4) goto LAB_1414ba038;
  goto LAB_1414ba040;
}

// WorkerMain @ 1414ba380

void __thiscall
LowLevelTasks::FScheduler::WorkerMain
          (FScheduler *this,FWaitEvent *param_1,TLocalQueue *param_2,uint param_3,bool param_4)

{
  bool bVar1;
  FTlsValues *pFVar2;
  bool *pbVar3;
  FTaskTagScope local_38;
  
  pFVar2 = FSchedulerTls::GetTlsValuesRef();
  FTaskTagScope::FTaskTagScope(&local_38,EWorkerThread);
  pFVar2->ActiveScheduler = (FSchedulerTls *)this;
  FMemory::SetupTLSCachesOnCurrentThread();
  pFVar2->WorkerType = (param_4 ^ 1) + Background;
  pFVar2->bIsStandbyWorker = param_1->bIsStandby;
  pFVar2->LocalQueue = param_2;
  pbVar3 = LowLevelTasks::Private::FOversubscriptionTls::GetIsOversubscriptionAllowedRef();
  bVar1 = *pbVar3;
  *pbVar3 = true;
  if (param_1->bIsStandby == false) {
    WorkerLoop(this,param_1,param_2,param_3,param_4);
  }
  else {
    StandbyLoop(this,param_1,param_2,param_3,param_4);
  }
  *pbVar3 = bVar1;
  pFVar2->LocalQueue = (TLocalQueue *)0x0;
  pFVar2->ActiveScheduler = (FSchedulerTls *)0x0;
  pFVar2->bIsStandbyWorker = false;
  pFVar2->WorkerType = None;
  FMemory::ClearAndDisableTLSCachesOnCurrentThread();
  FTaskTagScope::~FTaskTagScope(&local_38);
  return;
}

