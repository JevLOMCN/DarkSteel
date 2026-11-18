// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FTlsValuesHolder @ 14147f3d0

/* WARNING: Removing unreachable block (ram,0x00014147f42f) */

FTlsValuesHolder * __thiscall
LowLevelTasks::FSchedulerTls::FTlsValuesHolder::FTlsValuesHolder(FTlsValuesHolder *this)

{
  byte bVar1;
  atomic<unsigned_char> aVar2;
  TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>
  TVar3;
  bool bVar4;
  FTlsValues *pFVar5;
  FTlsValues *pFVar6;
  atomic<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>
  aVar7;
  TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>
  TVar8;
  
  pFVar6 = (FTlsValues *)0x0;
  this->TlsValues = (FTlsValues *)0x0;
  bVar4 = FGenericPlatformMallocCrash::IsActive();
  if (!bVar4) {
    pFVar5 = AnsiMalloc(0x28,0x40);
    if (pFVar5 != (FTlsValues *)0x0) {
      pFVar5->WorkerType = None;
      pFVar5->bPendingWakeUp = (atomic<bool>)0x0;
      pFVar5->bIsStandbyWorker = false;
      *(undefined2 *)&pFVar5->field_0x26 = 0;
      pFVar5->_padding_ = 0;
      pFVar5->_padding_ = 0;
      pFVar5->ActiveScheduler = (FSchedulerTls *)0x0;
      pFVar5->LocalQueue = (TLocalQueue *)0x0;
      pFVar6 = pFVar5;
    }
    this->TlsValues = pFVar6;
    if (((byte)FSchedulerTls::FImpl::ThreadTlsValuesMutex.State & 1) == 0) {
      FSchedulerTls::FImpl::ThreadTlsValuesMutex.State =
           FSchedulerTls::FImpl::ThreadTlsValuesMutex.State | 1;
      LOCK();
      UNLOCK();
      FSchedulerTls::FImpl::ProcessPendingTlsValuesNoLock();
      pFVar6 = this->TlsValues;
      if (FSchedulerTls::FImpl::ThreadTlsValues != (FTlsValues *)0x0) {
        FSchedulerTls::FImpl::ThreadTlsValues->_padding_ = (longlong)pFVar6;
      }
      pFVar6->_padding_ = (longlong)FSchedulerTls::FImpl::ThreadTlsValues;
      pFVar6->_padding_ = (longlong)&FSchedulerTls::FImpl::ThreadTlsValues;
      LOCK();
      aVar2 = FSchedulerTls::FImpl::ThreadTlsValuesMutex.State + -1;
      UNLOCK();
      bVar1 = (byte)FSchedulerTls::FImpl::ThreadTlsValuesMutex.State & 2;
      FSchedulerTls::FImpl::ThreadTlsValuesMutex.State = aVar2;
      FSchedulerTls::FImpl::ThreadTlsValues = pFVar6;
      if (bVar1 != 0) {
        UE::FMutex::WakeWaitingThread(&FSchedulerTls::FImpl::ThreadTlsValuesMutex);
        return this;
      }
    }
    else {
      aVar7 = (atomic<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>
               )AnsiMalloc(0x10,8);
      *(atomic<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>
        *)aVar7 = (atomic<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>
                   )0x0;
      *(FTlsValues **)((longlong)aVar7 + 8) = this->TlsValues;
      TVar8 = FSchedulerTls::FImpl::PendingInsertTlsValues;
      do {
        *(atomic<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>
          *)aVar7 = TVar8.Head;
        LOCK();
        bVar4 = TVar8.Head != FSchedulerTls::FImpl::PendingInsertTlsValues.Head;
        TVar3.Head = aVar7;
        if (bVar4) {
          TVar8 = FSchedulerTls::FImpl::PendingInsertTlsValues;
          TVar3 = FSchedulerTls::FImpl::PendingInsertTlsValues;
        }
        FSchedulerTls::FImpl::PendingInsertTlsValues.Head = TVar3.Head;
        UNLOCK();
      } while (bVar4);
    }
  }
  return this;
}

// ~FTlsValuesHolder @ 141481cc0

/* WARNING: Removing unreachable block (ram,0x000141481cf1) */

void __thiscall
LowLevelTasks::FSchedulerTls::FTlsValuesHolder::~FTlsValuesHolder(FTlsValuesHolder *this)

{
  FTlsValues *pFVar1;
  byte bVar2;
  atomic<unsigned_char> aVar3;
  TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>
  TVar4;
  bool bVar5;
  atomic<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>
  aVar6;
  TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>
  TVar7;
  
  if ((this->TlsValues != (FTlsValues *)0x0) &&
     (bVar5 = FGenericPlatformMallocCrash::IsActive(), !bVar5)) {
    if (((byte)FSchedulerTls::FImpl::ThreadTlsValuesMutex.State & 1) == 0) {
      FSchedulerTls::FImpl::ThreadTlsValuesMutex.State =
           FSchedulerTls::FImpl::ThreadTlsValuesMutex.State | 1;
      LOCK();
      UNLOCK();
      FSchedulerTls::FImpl::ProcessPendingTlsValuesNoLock();
      pFVar1 = this->TlsValues;
      if (pFVar1->_padding_ != 0) {
        *(longlong *)(pFVar1->_padding_ + 8) = pFVar1->_padding_;
      }
      if ((longlong *)pFVar1->_padding_ != (longlong *)0x0) {
        *(longlong *)pFVar1->_padding_ = pFVar1->_padding_;
      }
      pFVar1->_padding_ = 0;
      pFVar1->_padding_ = 0;
      LOCK();
      aVar3 = FSchedulerTls::FImpl::ThreadTlsValuesMutex.State + -1;
      UNLOCK();
      bVar2 = (byte)FSchedulerTls::FImpl::ThreadTlsValuesMutex.State & 2;
      FSchedulerTls::FImpl::ThreadTlsValuesMutex.State = aVar3;
      if (bVar2 != 0) {
        UE::FMutex::WakeWaitingThread(&FSchedulerTls::FImpl::ThreadTlsValuesMutex);
      }
      AnsiFree(this->TlsValues);
      this->TlsValues = (FTlsValues *)0x0;
      return;
    }
    aVar6 = (atomic<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>
             )AnsiMalloc(0x10,8);
    *(atomic<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>
      *)aVar6 = (atomic<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>
                 )0x0;
    *(FTlsValues **)((longlong)aVar6 + 8) = this->TlsValues;
    TVar7 = FSchedulerTls::FImpl::PendingDeleteTlsValues;
    do {
      *(atomic<UE::TConsumeAllMpmcQueue<LowLevelTasks::FSchedulerTls::FTlsValues_*,LowLevelTasks::FTlsValuesAllocator>::FNode_*>
        *)aVar6 = TVar7.Head;
      LOCK();
      bVar5 = TVar7.Head != FSchedulerTls::FImpl::PendingDeleteTlsValues.Head;
      TVar4.Head = aVar6;
      if (bVar5) {
        TVar7 = FSchedulerTls::FImpl::PendingDeleteTlsValues;
        TVar4 = FSchedulerTls::FImpl::PendingDeleteTlsValues;
      }
      FSchedulerTls::FImpl::PendingDeleteTlsValues.Head = TVar4.Head;
      UNLOCK();
    } while (bVar5);
    this->TlsValues = (FTlsValues *)0x0;
  }
  return;
}

