// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// ~FPimpl @ 141a72d20

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::~FPimpl(FPimpl *this)

{
  int *piVar1;
  int iVar2;
  atomic<FEvent_*> aVar3;
  longlong *plVar4;
  
  LOCK();
  aVar3 = this->CompletionEvent;
  this->CompletionEvent = (atomic<FEvent_*>)0x0;
  UNLOCK();
  if (aVar3 != (atomic<FEvent_*>)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool((FEvent *)aVar3);
  }
  FLockFreePointerFIFOBase<LowLevelTasks::FTask,64,1>::
  ~FLockFreePointerFIFOBase<LowLevelTasks::FTask,64,1>
            ((FLockFreePointerFIFOBase<LowLevelTasks::FTask,64,1> *)&this->WorkQueue);
  atomic_queue::AtomicQueueB<unsigned_int,std::allocator<unsigned_int>,0,1,0,0>::
  ~AtomicQueueB<unsigned_int,std::allocator<unsigned_int>,0,1,0,0>
            (&(this->ConcurrencySlots).FreeSlots);
  plVar4 = *(longlong **)&this->field_0x8;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000141a72d76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// AddWorkItem @ 141a75230

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::AddWorkItem(FPimpl *this,FTask *param_1)

{
  undefined1 *puVar1;
  atomic<unsigned_int> aVar2;
  atomic<unsigned_int> *paVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  LOCK();
  this->NumWorkItems = (atomic<unsigned_int>)((int)this->NumWorkItems + 1);
  UNLOCK();
  FLockFreePointerFIFOBase<LowLevelTasks::FTask,64,1>::Push
            ((FLockFreePointerFIFOBase<LowLevelTasks::FTask,64,1> *)&this->WorkQueue,param_1);
  uVar5 = *(uint *)&(this->ConcurrencySlots).FreeSlots.field_0x40;
  do {
    uVar4 = uVar5;
    if ((int)(*(int *)&(this->ConcurrencySlots).FreeSlots - uVar4) < 1) {
      return;
    }
    puVar1 = &(this->ConcurrencySlots).FreeSlots.field_0x40;
    LOCK();
    uVar5 = *(uint *)puVar1;
    bVar6 = uVar4 == uVar5;
    if (bVar6) {
      *(uint *)puVar1 = uVar4 + 1;
      uVar5 = uVar4;
    }
    UNLOCK();
  } while (!bVar6);
  uVar4 = (this->ConcurrencySlots).FreeSlots.size_ - 1 & uVar4;
  uVar5 = (uVar4 >> 4 ^ uVar4) & 0xf;
  paVar3 = (this->ConcurrencySlots).FreeSlots.elements_;
  uVar5 = uVar5 << 4 ^ uVar4 ^ uVar5;
  LOCK();
  aVar2 = paVar3[uVar5];
  paVar3[uVar5] = (atomic<unsigned_int>)0x0;
  UNLOCK();
  while (aVar2 == (atomic<unsigned_int>)0x0) {
    do {
    } while (paVar3[uVar5] == (atomic<unsigned_int>)0x0);
    LOCK();
    aVar2 = paVar3[uVar5];
    paVar3[uVar5] = (atomic<unsigned_int>)0x0;
    UNLOCK();
  }
  ProcessQueue(this,(int)aVar2 - 1,false);
  return;
}

// CompleteWorkItem @ 141a7c900

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::CompleteWorkItem(FPimpl *this,uint param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  
  LOCK();
  paVar1 = &this->NumWorkItems;
  aVar2 = *paVar1;
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
  UNLOCK();
  if ((aVar2 == (atomic<unsigned_int>)0x1) && (this->CompletionEvent != (atomic<FEvent_*>)0x0)) {
    (**(code **)(*(longlong *)this->CompletionEvent + 0x10))();
  }
  ProcessQueue(this,param_1,true);
  return;
}

// ProcessQueue @ 141a8de50

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

void __thiscall
UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::ProcessQueue
          (FPimpl *this,uint param_1,bool param_2)

{
  FConcurrencySlots *pFVar1;
  undefined1 *puVar2;
  atomic<unsigned_int> aVar3;
  atomic<unsigned_int> *paVar4;
  uint uVar5;
  uint uVar6;
  FTask *pFVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  bool bVar10;
  bool bVar11;
  
  bVar10 = !param_2;
  pFVar7 = FLockFreePointerFIFOBase<LowLevelTasks::FTask,64,1>::Pop
                     ((FLockFreePointerFIFOBase<LowLevelTasks::FTask,64,1> *)&this->WorkQueue);
  do {
    if (pFVar7 == (FTask *)0x0) {
      LOCK();
      pFVar1 = &this->ConcurrencySlots;
      uVar6 = *(uint *)&pFVar1->FreeSlots;
      *(int *)&pFVar1->FreeSlots = *(int *)&pFVar1->FreeSlots + 1;
      UNLOCK();
      uVar6 = (this->ConcurrencySlots).FreeSlots.size_ - 1 & uVar6;
      uVar5 = (uVar6 >> 4 ^ uVar6) & 0xf;
      paVar4 = (this->ConcurrencySlots).FreeSlots.elements_ + (uVar5 << 4 ^ uVar6 ^ uVar5);
      while( true ) {
        LOCK();
        aVar3 = *paVar4;
        if (aVar3 == (atomic<unsigned_int>)0x0) {
          *paVar4 = (atomic<unsigned_int>)(param_1 + 1);
        }
        UNLOCK();
        if (aVar3 == (atomic<unsigned_int>)0x0) break;
        do {
        } while (*paVar4 != (atomic<unsigned_int>)0x0);
      }
      return;
    }
    *(ulonglong *)&pFVar7->field_0x30 = (ulonglong)param_1;
    uVar8 = *(ulonglong *)&pFVar7->field_0x38;
    do {
      LOCK();
      uVar9 = *(ulonglong *)&pFVar7->field_0x38;
      bVar11 = uVar8 == uVar9;
      if (bVar11) {
        *(ulonglong *)&pFVar7->field_0x38 = uVar8 | 2;
        uVar9 = uVar8;
      }
      UNLOCK();
      uVar8 = uVar9;
    } while (!bVar11);
    if ((uVar9 & 2) == 0) {
      LowLevelTasks::FScheduler::LaunchInternal
                (&LowLevelTasks::FScheduler::Singleton,pFVar7,bVar10 ^ DefaultPreference,bVar10);
    }
    bVar10 = true;
    uVar6 = *(uint *)&(this->ConcurrencySlots).FreeSlots.field_0x40;
    do {
      uVar5 = uVar6;
      if ((int)(*(int *)&(this->ConcurrencySlots).FreeSlots - uVar5) < 1) {
        return;
      }
      puVar2 = &(this->ConcurrencySlots).FreeSlots.field_0x40;
      LOCK();
      uVar6 = *(uint *)puVar2;
      bVar11 = uVar5 == uVar6;
      if (bVar11) {
        *(uint *)puVar2 = uVar5 + 1;
        uVar6 = uVar5;
      }
      UNLOCK();
    } while (!bVar11);
    uVar5 = (this->ConcurrencySlots).FreeSlots.size_ - 1 & uVar5;
    uVar6 = (uVar5 >> 4 ^ uVar5) & 0xf;
    paVar4 = (this->ConcurrencySlots).FreeSlots.elements_;
    uVar6 = uVar6 << 4 ^ uVar5 ^ uVar6;
    LOCK();
    aVar3 = paVar4[uVar6];
    paVar4[uVar6] = (atomic<unsigned_int>)0x0;
    UNLOCK();
    while (aVar3 == (atomic<unsigned_int>)0x0) {
      do {
      } while (paVar4[uVar6] == (atomic<unsigned_int>)0x0);
      LOCK();
      aVar3 = paVar4[uVar6];
      paVar4[uVar6] = (atomic<unsigned_int>)0x0;
      UNLOCK();
    }
    param_1 = (int)aVar3 - 1;
    pFVar7 = FLockFreePointerFIFOBase<LowLevelTasks::FTask,64,1>::Pop
                       ((FLockFreePointerFIFOBase<LowLevelTasks::FTask,64,1> *)&this->WorkQueue);
  } while( true );
}

// ProcessQueueFromPush @ 141a8dfd0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::ProcessQueueFromPush(FPimpl *this,uint param_1)

{
  ProcessQueue(this,param_1,false);
  return;
}

// ProcessQueueFromWorker @ 141a8dfe0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::ProcessQueueFromWorker(FPimpl *this,uint param_1)

{
  ProcessQueue(this,param_1,true);
  return;
}

// Wait @ 141a99820

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Wait(FPimpl *this,FTimespan param_1)

{
  atomic<FEvent_*> this_00;
  atomic<FEvent_*> aVar1;
  bool bVar2;
  FTimespan local_res10 [3];
  
  if (this->NumWorkItems != (atomic<unsigned_int>)0x0) {
    this_00 = this->CompletionEvent;
    local_res10[0].Ticks = param_1.Ticks;
    if (this->CompletionEvent == (atomic<FEvent_*>)0x0) {
      this_00 = (atomic<FEvent_*>)FGenericPlatformProcess::GetSynchEventFromPool(true);
      LOCK();
      aVar1 = this->CompletionEvent;
      bVar2 = aVar1 == (atomic<FEvent_*>)0x0;
      if (bVar2) {
        this->CompletionEvent = this_00;
        aVar1 = (atomic<FEvent_*>)0x0;
      }
      UNLOCK();
      if (!bVar2) {
        FGenericPlatformProcess::ReturnSynchEventToPool((FEvent *)this_00);
        this_00 = aVar1;
      }
    }
    if (this->NumWorkItems != (atomic<unsigned_int>)0x0) {
      bVar2 = FEvent::Wait((FEvent *)this_00,local_res10,false);
      return bVar2;
    }
  }
  return true;
}

// FPimpl @ 141d695c0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FPimpl * __thiscall
UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::FPimpl
          (FPimpl *this,uint param_1,ETaskPriority param_2)

{
  FConcurrencySlots *pFVar1;
  atomic<unsigned_int> *paVar2;
  uint uVar3;
  atomic<unsigned_int> *paVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  bool bVar7;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined4 *)&(this->ConcurrencySlots).FreeSlots = 0;
  *(undefined4 *)&(this->ConcurrencySlots).FreeSlots.field_0x40 = 0;
  uVar5 = param_1 - 1 >> 1 | param_1 - 1;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = (uVar5 >> 0x10 | uVar5) + 1;
  if (uVar5 < 0x100) {
    uVar5 = 0x100;
  }
  (this->ConcurrencySlots).FreeSlots.size_ = uVar5;
  paVar4 = std::_Allocate<16,std::_Default_allocate_traits>((ulonglong)uVar5 << 2);
  uVar5 = (this->ConcurrencySlots).FreeSlots.size_;
  (this->ConcurrencySlots).FreeSlots.elements_ = paVar4;
  paVar2 = paVar4 + uVar5;
  for (; paVar4 < paVar2; paVar4 = paVar4 + 1) {
    *paVar4 = (atomic<unsigned_int>)0x0;
  }
  aVar6 = (atomic<unsigned_int>)0x1;
  if (1 < param_1 + 1) {
    do {
      LOCK();
      pFVar1 = &this->ConcurrencySlots;
      uVar5 = *(uint *)&pFVar1->FreeSlots;
      *(int *)&pFVar1->FreeSlots = *(int *)&pFVar1->FreeSlots + 1;
      UNLOCK();
      uVar5 = (this->ConcurrencySlots).FreeSlots.size_ - 1 & uVar5;
      uVar3 = (uVar5 >> 4 ^ uVar5) & 0xf;
      uVar3 = uVar3 << 4 ^ uVar5 ^ uVar3;
      paVar2 = (this->ConcurrencySlots).FreeSlots.elements_;
      while( true ) {
        paVar4 = paVar2 + uVar3;
        LOCK();
        bVar7 = *paVar4 == (atomic<unsigned_int>)0x0;
        if (bVar7) {
          *paVar4 = aVar6;
        }
        UNLOCK();
        if (bVar7) break;
        do {
        } while (paVar2[uVar3] != (atomic<unsigned_int>)0x0);
      }
      aVar6 = (atomic<unsigned_int>)((int)aVar6 + 1);
    } while ((uint)aVar6 < param_1 + 1);
  }
  this->TaskPriority = param_2;
  *(undefined8 *)&this->WorkQueue = 0;
  *(undefined8 *)&(this->WorkQueue).field_0x40 = 0;
  *(undefined8 *)&this->WorkQueue = 0;
  *(undefined8 *)&(this->WorkQueue).field_0x40 = 0;
  uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
  *(ulonglong *)&this->WorkQueue =
       *(ulonglong *)&this->WorkQueue & 0xfffffffffc000000 | (ulonglong)uVar5;
  *(ulonglong *)&(this->WorkQueue).field_0x40 =
       *(ulonglong *)&(this->WorkQueue).field_0x40 & 0xfffffffffc000000 | (ulonglong)uVar5;
  this->NumWorkItems = (atomic<unsigned_int>)0x0;
  this->CompletionEvent = (atomic<FEvent_*>)0x0;
  return this;
}

