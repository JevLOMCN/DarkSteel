// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 19

// ~FWaitingQueue @ 141481dc0

void __thiscall LowLevelTasks::Private::FWaitingQueue::~FWaitingQueue(FWaitingQueue *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->CreateThread != 0) {
    plVar1 = *(longlong **)&(this->CreateThread).field_0x28;
    plVar2 = (longlong *)&(this->CreateThread).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x000141481dd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))();
    return;
  }
  return;
}

// CancelWait @ 14148bae0

bool __thiscall
LowLevelTasks::Private::FWaitingQueue::CancelWait(FWaitingQueue *this,FWaitEvent *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  atomic<unsigned___int64> aVar4;
  uint uVar5;
  uint uVar6;
  atomic<unsigned___int64> aVar7;
  uint uVar8;
  longlong lVar9;
  atomic<unsigned___int64> aVar10;
  
  aVar7 = this->State;
  do {
    CheckState(this,(ulong64)aVar7,true);
    lVar9 = -0x10004000;
    uVar6 = (uint)((ulonglong)aVar7 >> 0x1c) & 0x3fff;
    uVar8 = (uint)((ulonglong)aVar7 >> 0xe) & 0x3fff;
    if (uVar8 != uVar6) {
      lVar9 = -0x4000;
    }
    aVar10 = (atomic<unsigned___int64>)(lVar9 + (longlong)aVar7);
    uVar5 = (uint)((ulonglong)aVar10 >> 0xe) & 0x3fff;
    if ((uVar5 < ((uint)((ulonglong)aVar10 >> 0x1c) & 0x3fff)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Waiters >= Signals",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\WaitingQueue.cpp"
                           ,0xb1,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if ((0x3ffe < uVar5) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Waiters < (1 << WaiterBits) - 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\WaitingQueue.cpp"
                           ,0xb2,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    LOCK();
    aVar4 = this->State;
    bVar2 = aVar7 == aVar4;
    if (bVar2) {
      this->State = aVar10;
      aVar4 = aVar7;
    }
    UNLOCK();
    aVar7 = aVar4;
  } while (!bVar2);
  return uVar8 == uVar6;
}

// CheckStandbyState @ 14148be30

void __thiscall
LowLevelTasks::Private::FWaitingQueue::CheckStandbyState(FWaitingQueue *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)((uint)param_1 & 0x3fff);
  if ((param_1 & 0x3fff0000000) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Signals == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\WaitingQueue.cpp"
                       ,0xc1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((ulonglong)(longlong)this->NodesArray->ArrayNum < (ulonglong)((uint)(param_1 >> 0xe) & 0x3fff)
     ) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActiveThreadCount <= NodesArray.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\WaitingQueue.cpp"
                       ,0xc2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((uVar3 != 0x3fff) && ((ulonglong)(longlong)this->NodesArray->ArrayNum <= uVar3)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == StackMask || Index < NodesArray.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\WaitingQueue.cpp"
                       ,0xc3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// CheckState @ 14148bf20

void __thiscall
LowLevelTasks::Private::FWaitingQueue::CheckState(FWaitingQueue *this,ulong64 param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (((uint)param_1 & 0xfffc000) < ((uint)(param_1 >> 0xe) & 0xfffc000)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Waiters >= Signals",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\WaitingQueue.cpp"
                       ,0xb1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (0xfffbfff < ((uint)param_1 & 0xfffc000)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Waiters < (1 << WaiterBits) - 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\WaitingQueue.cpp"
                       ,0xb2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_2) && ((param_1 & 0xfffc000) == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bInIsWaiter || Waiters > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\WaitingQueue.cpp"
                       ,0xb3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// CommitStandby @ 14148c5e0

bool __thiscall
LowLevelTasks::Private::FWaitingQueue::CommitStandby
          (FWaitingQueue *this,FWaitEvent *param_1,FOutOfWork *param_2)

{
  atomic<unsigned___int64> aVar1;
  TArray<LowLevelTasks::Private::FWaitEvent,TAlignedHeapAllocator<64>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  atomic<unsigned___int64> aVar7;
  atomic<unsigned___int64> aVar8;
  
  aVar1 = (atomic<unsigned___int64>)param_1->Epoch;
  CheckStandbyState(this,(ulong64)aVar1);
  pTVar2 = this->NodesArray;
  if ((pTVar2->ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  aVar7._0_4_ = aVar1._0_4_ & 0x3fff;
  aVar7._4_4_ = 0;
  LOCK();
  param_1->Next = aVar7;
  UNLOCK();
  aVar8 = (atomic<unsigned___int64>)
          ((longlong)param_1 - (longlong)pFVar3 >> 6 |
           ((ulonglong)aVar1 & 0xfffffc0000000000) + 0x40000000000 |
          (ulonglong)(aVar1._0_4_ & 0xfffc000) - 0x4000);
  (**(code **)(((param_1->Event).Event)->_padding_ + 0x18))();
  CheckStandbyState(this,(ulong64)aVar8);
  LOCK();
  aVar7 = this->StandbyState;
  bVar5 = aVar1 == aVar7;
  if (bVar5) {
    this->StandbyState = aVar8;
    aVar7 = aVar1;
  }
  UNLOCK();
  if (bVar5) {
    if (param_2->ActivelyLookingForWork != false) {
      if (param_2->bCpuBeginEventEmitted != false) {
        FCpuProfilerTrace::OutputEndEvent();
        param_2->bCpuBeginEventEmitted = false;
      }
      param_2->ActivelyLookingForWork = false;
    }
    WaitingQueueImpl::EnterWait(param_1);
    bVar5 = true;
  }
  else {
    param_1->Epoch = (ulong64)aVar7;
    bVar5 = false;
  }
  return bVar5;
}

// CommitWait @ 14148c710

bool __thiscall
LowLevelTasks::Private::FWaitingQueue::CommitWait
          (FWaitingQueue *this,FWaitEvent *param_1,FOutOfWork *param_2,int param_3,int param_4)

{
  bool bVar1;
  atomic<unsigned___int64> aVar2;
  TArray<LowLevelTasks::Private::FWaitEvent,TAlignedHeapAllocator<64>_> *pTVar3;
  FEvent *pFVar4;
  code *pcVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined1 uVar8;
  atomic<unsigned___int64> aVar9;
  undefined7 extraout_var;
  ulonglong uVar10;
  bool *pbVar11;
  longlong lVar12;
  atomic<unsigned___int64> aVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  
  if (((param_1->Epoch & 0x3ffffffffff) != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Node->Epoch & ~EpochMask) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\WaitingQueue.cpp"
                         ,0xce,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  param_1->State = (atomic<LowLevelTasks::Private::EWaitState>)0x0;
  aVar2 = this->State;
  CheckState(this,(ulong64)aVar2,true);
  if (((ulonglong)aVar2 & 0x3fff0000000) == 0) {
    pTVar3 = this->NodesArray;
    if ((pTVar3->ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    aVar13 = (atomic<unsigned___int64>)
             ((longlong)param_1 - (longlong)(pTVar3->AllocatorInstance).Data >> 6 |
             ((ulonglong)aVar2 & 0xfffffc000fffc000) + 0x3ffffffc000);
    aVar9._0_4_ = aVar2._0_4_ & 0x3fff;
    aVar9._4_4_ = 0;
    param_1->Next = aVar9;
  }
  else {
    aVar13 = (atomic<unsigned___int64>)((longlong)aVar2 + 0x3ffefffc000);
  }
  uVar16 = (uint)((ulonglong)aVar13 >> 0xe) & 0x3fff;
  if ((uVar16 < ((uint)((ulonglong)aVar13 >> 0x1c) & 0x3fff)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Waiters >= Signals",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\WaitingQueue.cpp"
                         ,0xb1,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  if ((0x3ffe < uVar16) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Waiters < (1 << WaiterBits) - 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\WaitingQueue.cpp"
                         ,0xb2,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  LOCK();
  bVar7 = aVar2 == this->State;
  if (bVar7) {
    this->State = aVar13;
  }
  UNLOCK();
  if (bVar7) {
    if (((ulonglong)aVar2 & 0x3fff0000000) == 0) {
      uVar15 = (ulonglong)aVar2 & 0xf0000000;
      if (0 < param_3) {
        do {
          if (param_1->State != (atomic<LowLevelTasks::Private::EWaitState>)0x0) goto LAB_14148c985;
          lVar12 = rdtsc();
          uVar14 = 0;
          if (lVar12 != 0) {
            uVar14 = (longlong)param_4;
          }
          bVar7 = FWindowsPlatformMisc::HasTimedPauseCPUFeature();
          uVar10 = CONCAT71(extraout_var,bVar7);
          if (bVar7) {
            uVar10 = rdtsc();
            lVar12 = (uVar10 & 0xffffffff00000000 |
                     CONCAT44((int)((uint7)extraout_var >> 0x18),(int)uVar10)) + uVar14;
            tpause(0,(int)((ulonglong)lVar12 >> 0x20),(int)lVar12);
          }
          else {
            do {
              uVar6 = rdtsc();
              uVar10 = (CONCAT44((int)(uVar10 >> 0x20),(int)uVar6) | uVar6 & 0xffffffff00000000) -
                       lVar12;
            } while (uVar10 < uVar14);
          }
          uVar16 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar16;
        } while ((int)uVar16 < param_3);
      }
      (**(code **)(((param_1->Event).Event)->_padding_ + 0x18))();
      LOCK();
      bVar7 = param_1->State == (atomic<LowLevelTasks::Private::EWaitState>)0x0;
      if (bVar7) {
        param_1->State = (atomic<LowLevelTasks::Private::EWaitState>)0x1;
      }
      UNLOCK();
      if (bVar7) {
        if (param_2->ActivelyLookingForWork != false) {
          if (param_2->bCpuBeginEventEmitted != false) {
            FCpuProfilerTrace::OutputEndEvent();
            param_2->bCpuBeginEventEmitted = false;
          }
          param_2->ActivelyLookingForWork = false;
        }
        FCpuProfilerTrace::FlushThreadBuffer();
        pbVar11 = FOversubscriptionTls::GetIsOversubscriptionAllowedRef();
        bVar1 = *pbVar11;
        *pbVar11 = false;
        FMemory::MarkTLSCachesAsUnusedOnCurrentThread();
        pFVar4 = (param_1->Event).Event;
        (**(code **)(pFVar4->_padding_ + 0x20))(pFVar4,0xffffffff,0);
        FMemory::MarkTLSCachesAsUsedOnCurrentThread();
        bVar7 = true;
        *pbVar11 = bVar1;
      }
      else {
LAB_14148c985:
        if (param_2->ActivelyLookingForWork != false) {
          if (param_2->bCpuBeginEventEmitted != false) {
            FCpuProfilerTrace::OutputEndEvent();
            param_2->bCpuBeginEventEmitted = false;
          }
          param_2->ActivelyLookingForWork = false;
        }
        bVar7 = true;
      }
    }
    else {
      if (param_2->ActivelyLookingForWork != false) {
        if (param_2->bCpuBeginEventEmitted != false) {
          FCpuProfilerTrace::OutputEndEvent();
          param_2->bCpuBeginEventEmitted = false;
        }
        param_2->ActivelyLookingForWork = false;
      }
      bVar7 = true;
    }
  }
  else {
    bVar7 = false;
  }
  return bVar7;
}

// ConditionalStandby @ 14148e700

void __thiscall
LowLevelTasks::Private::FWaitingQueue::ConditionalStandby(FWaitingQueue *this,FWaitEvent *param_1)

{
  TArray<LowLevelTasks::Private::FWaitEvent,TAlignedHeapAllocator<64>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  FEvent *pFVar3;
  code *pcVar4;
  bool bVar5;
  atomic<unsigned___int64> aVar6;
  bool *pbVar7;
  atomic<unsigned___int64> aVar8;
  atomic<unsigned___int64> aVar9;
  
  if ((this->bIsShuttingDown == (atomic<bool>)0x0) &&
     (aVar8 = this->StandbyState,
     this->ThreadCount + (int)this->Oversubscription < ((uint)((ulonglong)aVar8 >> 0xe) & 0x3fff)))
  {
    do {
      CheckStandbyState(this,(ulong64)aVar8);
      pTVar1 = this->NodesArray;
      if ((pTVar1->ArrayNum < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (pTVar1->AllocatorInstance).Data;
      aVar6._0_4_ = aVar8._0_4_ & 0x3fff;
      aVar6._4_4_ = 0;
      LOCK();
      param_1->Next = aVar6;
      UNLOCK();
      aVar9 = (atomic<unsigned___int64>)
              ((longlong)param_1 - (longlong)pFVar2 >> 6 |
               ((ulonglong)aVar8 & 0xfffffc0000000000) + 0x40000000000 |
              (ulonglong)(aVar8._0_4_ & 0xfffc000) - 0x4000);
      (**(code **)(((param_1->Event).Event)->_padding_ + 0x18))();
      CheckStandbyState(this,(ulong64)aVar9);
      LOCK();
      aVar6 = this->StandbyState;
      bVar5 = aVar8 == aVar6;
      if (bVar5) {
        this->StandbyState = aVar9;
        aVar6 = aVar8;
      }
      UNLOCK();
      if (bVar5) {
        FCpuProfilerTrace::FlushThreadBuffer();
        pbVar7 = FOversubscriptionTls::GetIsOversubscriptionAllowedRef();
        bVar5 = *pbVar7;
        *pbVar7 = false;
        FMemory::MarkTLSCachesAsUnusedOnCurrentThread();
        pFVar3 = (param_1->Event).Event;
        (**(code **)(pFVar3->_padding_ + 0x20))(pFVar3,0xffffffff,0);
        FMemory::MarkTLSCachesAsUsedOnCurrentThread();
        *pbVar7 = bVar5;
        aVar6 = aVar8;
      }
      aVar8 = aVar6;
    } while (this->ThreadCount + (int)this->Oversubscription <
             ((uint)((ulonglong)aVar6 >> 0xe) & 0x3fff));
  }
  return;
}

// DecrementOversubscription @ 141490ad0

void __thiscall
LowLevelTasks::Private::FWaitingQueue::DecrementOversubscription(FWaitingQueue *this)

{
  LOCK();
  this->Oversubscription = (atomic<unsigned_int>)((int)this->Oversubscription + -1);
  UNLOCK();
  return;
}

// FinishShutdown @ 141496260

void __thiscall LowLevelTasks::Private::FWaitingQueue::FinishShutdown(FWaitingQueue *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((SUB84(this->State,0) & 0xfffffff) != 0x3fff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(State & (StackMask | WaiterMask)) == StackMask",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\WaitingQueue.cpp"
                       ,0x97,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((SUB84(this->StandbyState,0) & 0x3fff) != 0x3fff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(StandbyState & StackMask) == StackMask",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\WaitingQueue.cpp"
                       ,0x98,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// IncrementOversubscription @ 14149b2b0

void __thiscall
LowLevelTasks::Private::FWaitingQueue::IncrementOversubscription(FWaitingQueue *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  bool bVar12;
  
  LOCK();
  paVar1 = &this->Oversubscription;
  aVar2 = *paVar1;
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + 1);
  UNLOCK();
  if (this->MaxThreadCount <= (int)aVar2 + 1U) {
    bVar12 = -1 < CpuChannel->Enabled;
    if (bVar12) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId414,"FWaitingQueue::OversubscriptionLimitReached",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\WaitingQueue.cpp"
                 ,0x19e);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId414);
    }
    if (__CsvProfilerStat415 == false) {
      FCsvProfilerTrace::OutputInlineStat
                ("OversubscriptionLimitReached",_GCsvCategory_Scheduler.Index);
      __CsvProfilerStat415 = true;
    }
    FCsvProfiler::RecordCustomStat
              ("OversubscriptionLimitReached",_GCsvCategory_Scheduler.Index,1,Accumulate);
    this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
              this->OversubscriptionLimitReachedEvent;
    if ((this_00 == (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)this_00);
    this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
    bVar6 = false;
    uVar10 = (this_00->InvocationList).ArrayNum - 1;
    if (-1 < (int)uVar10) {
      lVar11 = (longlong)(int)uVar10 << 4;
      bVar6 = false;
      do {
        uVar9 = 0;
        if ((int)uVar10 < (this_00->InvocationList).ArrayNum) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = (this_00->InvocationList).AllocatorInstance.Data;
        if (((*(int *)(pFVar3 + lVar11 + 8) == 0) ||
            (plVar4 = *(longlong **)(pFVar3 + lVar11), plVar4 == (longlong *)0x0)) ||
           (cVar8 = (**(code **)(*plVar4 + 0x68))(), cVar8 == '\0')) {
          bVar6 = true;
        }
        lVar11 = lVar11 + -0x10;
        uVar10 = uVar10 - 1;
      } while (-1 < (int)uVar10);
    }
    this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
    if (bVar6) {
      TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList(this_00,false);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
    if (bVar12) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  NotifyInternal(this,1);
  return;
}

// Init @ 14149b940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
LowLevelTasks::Private::FWaitingQueue::Init
          (FWaitingQueue *this,uint param_1,uint param_2,TFunction<void___cdecl(void)> *param_3,
          uint param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  this->ThreadCount = param_1;
  this->MaxThreadCount = param_2;
  local_48 = *(longlong *)param_3;
  uStack_20 = (longlong *)0x0;
  if (local_48 != 0) {
    puVar10 = (undefined8 *)&param_3->field_0x10;
    if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
      puVar10 = *(undefined8 **)&param_3->field_0x28;
    }
    (**(code **)*puVar10)(puVar10,&local_38);
  }
  lVar7 = *(longlong *)&this->CreateThread;
  uVar8 = *(undefined8 *)&(this->CreateThread).field_0x8;
  uVar2 = *(undefined4 *)&(this->CreateThread).field_0x10;
  uVar3 = *(undefined4 *)&(this->CreateThread).field_0x14;
  uVar4 = *(undefined4 *)&(this->CreateThread).field_0x18;
  uVar5 = *(undefined4 *)&(this->CreateThread).field_0x1c;
  uVar6 = *(undefined8 *)&(this->CreateThread).field_0x20;
  plVar12 = *(longlong **)&(this->CreateThread).field_0x28;
  *(longlong *)&this->CreateThread = local_48;
  *(undefined8 *)&(this->CreateThread).field_0x8 = uStack_40;
  *(undefined4 *)&(this->CreateThread).field_0x10 = (undefined4)local_38;
  *(undefined4 *)&(this->CreateThread).field_0x14 = local_38._4_4_;
  *(undefined4 *)&(this->CreateThread).field_0x18 = uStack_30;
  *(undefined4 *)&(this->CreateThread).field_0x1c = uStack_2c;
  *(undefined4 *)&(this->CreateThread).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->CreateThread).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->CreateThread).field_0x28 = (undefined4)uStack_20;
  *(undefined4 *)&(this->CreateThread).field_0x2c = uStack_20._4_4_;
  local_38._0_4_ = uVar2;
  local_38._4_4_ = uVar3;
  uStack_30 = uVar4;
  uStack_2c = uVar5;
  local_28 = uVar6;
  uStack_20 = plVar12;
  local_48 = lVar7;
  uStack_40 = uVar8;
  if (lVar7 != 0) {
    plVar11 = &local_38;
    if (plVar12 != (longlong *)0x0) {
      plVar11 = plVar12;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  LOCK();
  this->Oversubscription = (atomic<unsigned_int>)0x0;
  UNLOCK();
  LOCK();
  this->bIsShuttingDown = (atomic<bool>)0x0;
  UNLOCK();
  LOCK();
  this->State = (atomic<unsigned___int64>)0x3fff;
  UNLOCK();
  LOCK();
  this->StandbyState = (atomic<unsigned___int64>)((ulonglong)(param_4 & 0x3fff) << 0xe | 0x3fff);
  UNLOCK();
  if (0x3ffe < (uint)this->NodesArray->ArrayNum) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("NodesArray.Num() < (1ull << WaiterBits) - 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\WaitingQueue.cpp"
                       ,0x90,L"");
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)param_3 != 0) {
    plVar12 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar12 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  return;
}

// IsOversubscriptionLimitReached @ 14149e1a0

bool __thiscall
LowLevelTasks::Private::FWaitingQueue::IsOversubscriptionLimitReached(FWaitingQueue *this)

{
  return this->MaxThreadCount <= (uint)this->Oversubscription;
}

// NotifyInternal @ 1414a5d90

int __thiscall
LowLevelTasks::Private::FWaitingQueue::NotifyInternal(FWaitingQueue *this,int param_1)

{
  TArray<LowLevelTasks::Private::FWaitEvent,TAlignedHeapAllocator<64>_> *pTVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  atomic<unsigned___int64> aVar5;
  atomic<unsigned___int64> aVar6;
  uint uVar7;
  uint uVar9;
  uint uVar10;
  atomic<unsigned___int64> aVar11;
  ulonglong uVar12;
  FWaitEvent *pFVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  ulonglong uVar8;
  
  iVar3 = 0;
  bVar18 = false;
  bVar17 = param_1 < 0;
  bVar16 = param_1 == 0;
  do {
    if (bVar16 || bVar18 != bVar17) {
      return iVar3;
    }
    aVar11 = this->State;
    do {
      uVar7 = (uint)((ulonglong)aVar11 >> 0xe) & 0x3fff;
      uVar8 = (ulonglong)uVar7;
      uVar14 = (ulonglong)((uint)((ulonglong)aVar11 >> 0x1c) & 0x3fff);
      if ((uVar8 < uVar14) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Waiters >= Signals",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\WaitingQueue.cpp"
                              ,0xb1,L""), bVar16)) {
        pcVar2 = (code *)swi(3);
        iVar3 = (*pcVar2)();
        return iVar3;
      }
      uVar9 = aVar11._0_4_;
      if ((0xfffbfff < (ulonglong)(uVar9 & 0xfffc000)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Waiters < (1 << WaiterBits) - 1",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\WaitingQueue.cpp"
                              ,0xb2,L""), bVar16)) {
        pcVar2 = (code *)swi(3);
        iVar3 = (*pcVar2)();
        return iVar3;
      }
      uVar15 = ((ulonglong)aVar11 & 0xfffffc0000000000) + 0x40000000000;
      uVar12 = (ulonglong)(uVar9 & 0x3fff);
      pTVar1 = this->NodesArray;
      iVar4 = pTVar1->ArrayNum;
      if ((uVar12 == 0x3fff) && (uVar8 == uVar14)) {
        aVar6 = (atomic<unsigned___int64>)((longlong)aVar11 + 0x40000000000);
      }
      else if (param_1 < iVar4) {
        if (uVar14 < uVar8) {
          aVar6 = (atomic<unsigned___int64>)((longlong)aVar11 + 0x40010000000);
        }
        else {
          if ((iVar4 <= (int)(uVar9 & 0x3fff)) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar2 = (code *)swi(3);
            iVar3 = (*pcVar2)();
            return iVar3;
          }
          aVar6 = (atomic<unsigned___int64>)
                  ((ulonglong)
                   ((uint)*(undefined8 *)((pTVar1->AllocatorInstance).Data + uVar12 * 0x40) & 0x3fff
                   ) | (ulonglong)aVar11 & 0x3ffffffc000 | uVar15);
        }
      }
      else {
        aVar6 = (atomic<unsigned___int64>)
                (uVar8 << 0x1c | (ulonglong)(uVar9 & 0xfffc000) | uVar15 | 0x3fff);
      }
      uVar10 = (uint)((ulonglong)aVar6 >> 0xe) & 0x3fff;
      if ((uVar10 < ((uint)((ulonglong)aVar6 >> 0x1c) & 0x3fff)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Waiters >= Signals",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\WaitingQueue.cpp"
                              ,0xb1,L""), bVar16)) {
        pcVar2 = (code *)swi(3);
        iVar3 = (*pcVar2)();
        return iVar3;
      }
      if ((0x3ffe < uVar10) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Waiters < (1 << WaiterBits) - 1",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\WaitingQueue.cpp"
                              ,0xb2,L""), bVar16)) {
        pcVar2 = (code *)swi(3);
        iVar3 = (*pcVar2)();
        return iVar3;
      }
      LOCK();
      aVar5 = this->State;
      bVar16 = aVar11 == aVar5;
      if (bVar16) {
        this->State = aVar6;
        aVar5 = aVar11;
      }
      UNLOCK();
      aVar11 = aVar5;
    } while (!bVar16);
    if ((param_1 < iVar4) && (uVar14 < uVar8)) {
      iVar3 = iVar3 + 1;
      bVar18 = SBORROW4(param_1,iVar3);
      bVar17 = param_1 - iVar3 < 0;
      bVar16 = param_1 == iVar3;
    }
    else if (uVar12 == 0x3fff) {
      bVar16 = TryStartNewThread(this);
      if (!bVar16) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      bVar18 = SBORROW4(param_1,iVar3);
      bVar17 = param_1 - iVar3 < 0;
      bVar16 = param_1 == iVar3;
    }
    else {
      pTVar1 = this->NodesArray;
      if ((pTVar1->ArrayNum <= (int)(uVar9 & 0x3fff)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar2 = (code *)swi(3);
        iVar3 = (*pcVar2)();
        return iVar3;
      }
      pFVar13 = (FWaitEvent *)((pTVar1->AllocatorInstance).Data + uVar12 * 0x40);
      if (iVar4 <= param_1) {
        iVar4 = Unpark(this,pFVar13);
        return iVar4 + uVar7 + iVar3;
      }
      pFVar13->Next = (atomic<unsigned___int64>)0x3fff;
      iVar4 = Unpark(this,pFVar13);
      iVar3 = iVar3 + iVar4;
      bVar18 = SBORROW4(param_1,iVar3);
      bVar17 = param_1 - iVar3 < 0;
      bVar16 = param_1 == iVar3;
    }
  } while( true );
}

// Park @ 1414a7f30

void __thiscall
LowLevelTasks::Private::FWaitingQueue::Park
          (FWaitingQueue *this,FWaitEvent *param_1,FOutOfWork *param_2,int param_3,int param_4)

{
  FEvent *pFVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  undefined7 extraout_var;
  ulonglong uVar5;
  bool *pbVar6;
  ulonglong uVar7;
  FWaitEvent *pFVar8;
  uint uVar9;
  ulonglong uVar10;
  
  pFVar8 = param_1;
  if (0 < param_3) {
    uVar10 = 0;
    do {
      if (param_1->State != (atomic<LowLevelTasks::Private::EWaitState>)0x0) goto LAB_1414a8030;
      lVar2 = rdtsc();
      uVar7 = 0;
      if (lVar2 != 0) {
        uVar7 = (longlong)param_4;
      }
      bVar4 = FWindowsPlatformMisc::HasTimedPauseCPUFeature();
      uVar5 = CONCAT71(extraout_var,bVar4);
      if (bVar4) {
        uVar5 = rdtsc();
        uVar7 = (uVar5 & 0xffffffff00000000 |
                CONCAT44((int)((uint7)extraout_var >> 0x18),(int)uVar5)) + uVar7;
        pFVar8 = (FWaitEvent *)(uVar7 >> 0x20);
        tpause(0,(int)(uVar7 >> 0x20),(int)uVar7);
      }
      else {
        do {
          uVar3 = rdtsc();
          pFVar8 = (FWaitEvent *)(uVar3 & 0xffffffff00000000);
          uVar5 = (CONCAT44((int)(uVar5 >> 0x20),(int)uVar3) | (ulonglong)pFVar8) - lVar2;
        } while (uVar5 < uVar7);
      }
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
    } while ((int)uVar9 < param_3);
  }
  pFVar1 = (param_1->Event).Event;
  (**(code **)(pFVar1->_padding_ + 0x18))(pFVar1,pFVar8);
  LOCK();
  bVar4 = param_1->State == (atomic<LowLevelTasks::Private::EWaitState>)0x0;
  if (bVar4) {
    param_1->State = (atomic<LowLevelTasks::Private::EWaitState>)0x1;
  }
  UNLOCK();
  if (bVar4) {
    if (param_2->ActivelyLookingForWork != false) {
      if (param_2->bCpuBeginEventEmitted != false) {
        FCpuProfilerTrace::OutputEndEvent();
        param_2->bCpuBeginEventEmitted = false;
      }
      param_2->ActivelyLookingForWork = false;
    }
    FCpuProfilerTrace::FlushThreadBuffer();
    pbVar6 = FOversubscriptionTls::GetIsOversubscriptionAllowedRef();
    bVar4 = *pbVar6;
    *pbVar6 = false;
    FMemory::MarkTLSCachesAsUnusedOnCurrentThread();
    pFVar1 = (param_1->Event).Event;
    (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1,0xffffffff,0);
    FMemory::MarkTLSCachesAsUsedOnCurrentThread();
    *pbVar6 = bVar4;
  }
  else {
LAB_1414a8030:
    if (param_2->ActivelyLookingForWork != false) {
      if (param_2->bCpuBeginEventEmitted != false) {
        FCpuProfilerTrace::OutputEndEvent();
        param_2->bCpuBeginEventEmitted = false;
      }
      param_2->ActivelyLookingForWork = false;
    }
  }
  return;
}

// PrepareStandby @ 1414a8a40

void __thiscall
LowLevelTasks::Private::FWaitingQueue::PrepareStandby(FWaitingQueue *this,FWaitEvent *param_1)

{
  param_1->Epoch = (ulong64)this->StandbyState;
  return;
}

// PrepareWait @ 1414a8a50

void __thiscall
LowLevelTasks::Private::FWaitingQueue::PrepareWait(FWaitingQueue *this,FWaitEvent *param_1)

{
  LOCK();
  this->State = (atomic<unsigned___int64>)((longlong)this->State + 0x4000);
  UNLOCK();
  return;
}

// StartShutdown @ 1414b0eb0

void __thiscall LowLevelTasks::Private::FWaitingQueue::StartShutdown(FWaitingQueue *this)

{
  atomic<unsigned___int64> aVar1;
  TArray<LowLevelTasks::Private::FWaitEvent,TAlignedHeapAllocator<64>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  atomic<unsigned___int64> *paVar5;
  
  LOCK();
  this->bIsShuttingDown = (atomic<bool>)0x1;
  UNLOCK();
  NotifyInternal(this,this->NodesArray->ArrayNum);
  aVar1 = this->StandbyState;
  while( true ) {
    if (((ulonglong)aVar1 & 0x3fff) == 0x3fff) {
      LOCK();
      this->StandbyState = (atomic<unsigned___int64>)0x3fff;
      UNLOCK();
      return;
    }
    pTVar2 = this->NodesArray;
    if ((pTVar2->ArrayNum <= (int)(aVar1._0_4_ & 0x3fff)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    paVar5 = (atomic<unsigned___int64> *)
             ((pTVar2->AllocatorInstance).Data + ((ulonglong)aVar1 & 0x3fff) * 0x40);
    (**(code **)(*(longlong *)paVar5[3] + 0x10))();
    aVar1 = *paVar5;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// TryStartNewThread @ 1414b7a70

bool __thiscall LowLevelTasks::Private::FWaitingQueue::TryStartNewThread(FWaitingQueue *this)

{
  atomic<unsigned___int64> *paVar1;
  TArray<LowLevelTasks::Private::FWaitEvent,TAlignedHeapAllocator<64>_> *pTVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  atomic<unsigned___int64> aVar8;
  ulonglong uVar9;
  uint uVar10;
  atomic<unsigned___int64> aVar11;
  ulonglong uVar12;
  atomic<unsigned___int64> aVar13;
  
  LOCK();
  paVar1 = &this->StandbyState;
  aVar13 = *paVar1;
  *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 0x40000000000);
  UNLOCK();
  aVar13 = (atomic<unsigned___int64>)((longlong)aVar13 + 0x40000000000);
  if (((uint)((ulonglong)aVar13 >> 0xe) & 0x3fff) < this->MaxThreadCount) {
    do {
      if (this->ThreadCount + (int)this->Oversubscription <=
          ((uint)((ulonglong)aVar13 >> 0xe) & 0x3fff)) {
        return false;
      }
      CheckStandbyState(this,(ulong64)aVar13);
      uVar10 = aVar13._0_4_;
      uVar12 = (ulonglong)(uVar10 & 0x3fff);
      if (uVar12 == 0x3fff) {
        uVar9 = 0x3fff;
      }
      else {
        pTVar2 = this->NodesArray;
        if ((pTVar2->ArrayNum <= (int)(uVar10 & 0x3fff)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        uVar9 = (ulonglong)
                ((uint)*(undefined8 *)((pTVar2->AllocatorInstance).Data + uVar12 * 0x40) & 0x3fff);
      }
      aVar11 = (atomic<unsigned___int64>)
               ((ulonglong)(uVar10 & 0xfffc000) + 0x4000 |
                ((ulonglong)aVar13 & 0xfffffc0000000000) + 0x40000000000 | uVar9);
      CheckStandbyState(this,(ulong64)aVar11);
      LOCK();
      aVar8 = this->StandbyState;
      bVar5 = aVar13 == aVar8;
      if (bVar5) {
        this->StandbyState = aVar11;
        aVar8 = aVar13;
      }
      UNLOCK();
      if (bVar5) {
        if (uVar12 == 0x3fff) {
          if (this->bIsShuttingDown != (atomic<bool>)0x0) {
            LOCK();
            this->StandbyState = (atomic<unsigned___int64>)((longlong)this->StandbyState + -0x4000);
            UNLOCK();
            return false;
          }
          if (__CsvProfilerStat479 == false) {
            FCsvProfilerTrace::OutputInlineStat("CreateThread",_GCsvCategory_Scheduler.Index);
            __CsvProfilerStat479 = true;
          }
          uVar10 = _GCsvCategory_Scheduler.Index;
          FCsvProfiler::BeginStat("CreateThread",_GCsvCategory_Scheduler.Index,"CSV_CreateThread");
          FGenericPlatformMisc::BeginNamedEvent(&FColor::Turquoise,"FWaitingQueue_CreateThread");
          if (CpuChannel->Enabled < 0) {
            UE::Core::Private::Function::
            TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(void)>::
            operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(void)>
                        *)&this->CreateThread);
          }
          else {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId480,"FWaitingQueue_CreateThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\WaitingQueue.cpp"
                       ,0x1e0);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId480);
            UE::Core::Private::Function::
            TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(void)>::
            operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(void)>
                        *)&this->CreateThread);
            FCpuProfilerTrace::OutputEndEvent();
          }
          FGenericPlatformMisc::EndNamedEvent();
          FCsvProfiler::EndStat("CreateThread",uVar10);
          return true;
        }
        FGenericPlatformMisc::BeginNamedEvent
                  (&FColor::Turquoise,"FWaitingQueue_SignalStandbyThread");
        bVar5 = -1 < CpuChannel->Enabled;
        if (bVar5) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId471,"FWaitingQueue_SignalStandbyThread",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\WaitingQueue.cpp"
                     ,0x1d7);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId471);
        }
        if (__CsvProfilerStat472 == false) {
          FCsvProfilerTrace::OutputInlineStat("SignalStandbyThread",_GCsvCategory_Scheduler.Index);
          __CsvProfilerStat472 = true;
        }
        uVar4 = _GCsvCategory_Scheduler.Index;
        FCsvProfiler::BeginStat
                  ("SignalStandbyThread",_GCsvCategory_Scheduler.Index,"CSV_SignalStandbyThread");
        pTVar2 = this->NodesArray;
        if ((pTVar2->ArrayNum <= (int)(uVar10 & 0x3fff)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        (**(code **)(**(longlong **)
                       ((pTVar2->AllocatorInstance).Data +
                       (ulonglong)(uVar10 & 0x3fff) * 0x40 + 0x18) + 0x10))();
        FCsvProfiler::EndStat("SignalStandbyThread",uVar4);
        if (bVar5) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        FGenericPlatformMisc::EndNamedEvent();
        return true;
      }
      aVar13 = aVar8;
    } while (((uint)((ulonglong)aVar8 >> 0xe) & 0x3fff) < this->MaxThreadCount);
  }
  return false;
}

// Unpark @ 1414b8780

int __thiscall
LowLevelTasks::Private::FWaitingQueue::Unpark(FWaitingQueue *this,FWaitEvent *param_1)

{
  atomic<LowLevelTasks::Private::EWaitState> aVar1;
  TArray<LowLevelTasks::Private::FWaitEvent,TAlignedHeapAllocator<64>_> *pTVar2;
  code *pcVar3;
  FWaitEvent *pFVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = 0;
  do {
    pFVar4 = param_1;
    if (pFVar4 == (FWaitEvent *)0x0) {
      return iVar7;
    }
    uVar6 = SUB84(pFVar4->Next,0) & 0x3fff;
    if ((ulonglong)uVar6 == 0x3fff) {
      param_1 = (FWaitEvent *)0x0;
    }
    else {
      pTVar2 = this->NodesArray;
      if ((pTVar2->ArrayNum <= (int)uVar6) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
      param_1 = (FWaitEvent *)((pTVar2->AllocatorInstance).Data + (ulonglong)uVar6 * 0x40);
    }
    iVar7 = iVar7 + 1;
    LOCK();
    aVar1 = pFVar4->State;
    pFVar4->State = (atomic<LowLevelTasks::Private::EWaitState>)0x2;
    UNLOCK();
    if (aVar1 == (atomic<LowLevelTasks::Private::EWaitState>)0x1) {
      FGenericPlatformMisc::BeginNamedEvent
                (&FColor::Turquoise,"FWaitingQueue_Unpark_SignalWaitingThread");
      if (CpuChannel->Enabled < 0) {
        (**(code **)(((pFVar4->Event).Event)->_padding_ + 0x10))();
      }
      else {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId647,"FWaitingQueue_Unpark_SignalWaitingThread",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\WaitingQueue.cpp"
                   ,0x287);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId647);
        (**(code **)(((pFVar4->Event).Event)->_padding_ + 0x10))();
        FCpuProfilerTrace::OutputEndEvent();
      }
      FGenericPlatformMisc::EndNamedEvent();
    }
  } while( true );
}

