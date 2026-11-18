// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FThreadTaskQueue @ 14147f300

FThreadTaskQueue * __thiscall
FNamedTaskThread::FThreadTaskQueue::FThreadTaskQueue(FThreadTaskQueue *this)

{
  uint uVar1;
  FEvent *pFVar2;
  FThreadTaskQueue *pFVar3;
  longlong lVar4;
  atomic<unsigned___int64> *paVar5;
  
  paVar5 = &(this->StallQueue).PriorityQueues[0].Tail.Ptrs;
  lVar4 = 2;
  pFVar3 = this;
  do {
    (pFVar3->StallQueue).PriorityQueues[0].Head.Ptrs = (atomic<unsigned___int64>)0x0;
    *paVar5 = (atomic<unsigned___int64>)0x0;
    (pFVar3->StallQueue).PriorityQueues[0].Head.Ptrs = (atomic<unsigned___int64>)0x0;
    (pFVar3->StallQueue).PriorityQueues[0].Tail.Ptrs = (atomic<unsigned___int64>)0x0;
    uVar1 = FLockFreeLinkPolicy::AllocLockFreeLink();
    paVar5 = paVar5 + 0x10;
    (pFVar3->StallQueue).PriorityQueues[0].Head.Ptrs =
         (atomic<unsigned___int64>)
         ((ulonglong)(pFVar3->StallQueue).PriorityQueues[0].Head.Ptrs & 0xfffffffffc000000 |
         (ulonglong)uVar1);
    (pFVar3->StallQueue).PriorityQueues[0].Tail.Ptrs =
         (atomic<unsigned___int64>)
         ((ulonglong)(pFVar3->StallQueue).PriorityQueues[0].Tail.Ptrs & 0xfffffffffc000000 |
         (ulonglong)uVar1);
    lVar4 = lVar4 + -1;
    pFVar3 = (FThreadTaskQueue *)((pFVar3->StallQueue).PriorityQueues + 1);
  } while (lVar4 != 0);
  (this->StallQueue).MasterState.Ptrs = (atomic<unsigned___int64>)0x0;
  (this->StallQueue).MasterState.Ptrs = (atomic<unsigned___int64>)0x0;
  this->RecursionGuard = 0;
  this->QuitForReturn = false;
  this->QuitForShutdown = false;
  pFVar2 = FGenericPlatformProcess::GetSynchEventFromPool(false);
  this->StallRestartEvent = pFVar2;
  return this;
}

// ~FThreadTaskQueue @ 141481c60

void __thiscall FNamedTaskThread::FThreadTaskQueue::~FThreadTaskQueue(FThreadTaskQueue *this)

{
  FGenericPlatformProcess::ReturnSynchEventToPool(this->StallRestartEvent);
  this->StallRestartEvent = (FEvent *)0x0;
  FLockFreePointerFIFOBase<FBaseGraphTask,64,1>::~FLockFreePointerFIFOBase<FBaseGraphTask,64,1>
            ((this->StallQueue).PriorityQueues + 1);
  FLockFreePointerFIFOBase<FBaseGraphTask,64,1>::~FLockFreePointerFIFOBase<FBaseGraphTask,64,1>
            ((FLockFreePointerFIFOBase<FBaseGraphTask,64,1> *)this);
  return;
}

