// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 19

// FQueuedThreadPoolWrapper @ 141917790

FQueuedThreadPoolWrapper * __thiscall
FQueuedThreadPoolWrapper::FQueuedThreadPoolWrapper
          (FQueuedThreadPoolWrapper *this,FQueuedThreadPool *param_1,int param_2,
          TFunction<EQueuedWorkPriority___cdecl(EQueuedWorkPriority)> *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  FQueuedThreadPool::FQueuedThreadPool((FQueuedThreadPool *)this);
  *(undefined ***)this = &___7FQueuedThreadPoolWrapper__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->Lock,4000);
  FThreadPoolPriorityQueue::FThreadPoolPriorityQueue(&this->QueuedWork);
  lVar1 = *(longlong *)param_3;
  *(longlong *)&this->PriorityMapper = lVar1;
  *(undefined8 *)&(this->PriorityMapper).field_0x28 = 0;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)&param_3->field_0x10;
    if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&param_3->field_0x28;
    }
    (**(code **)*puVar2)();
  }
  this->WrappedQueuedThreadPool = param_1;
  (this->WorkPool).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkPool).ArrayNum = 0;
  (this->WorkPool).ArrayMax = 0;
  *(undefined8 *)&this->ScheduledWork = 0;
  *(undefined8 *)&(this->ScheduledWork).field_0x8 = 0;
  *(undefined8 *)&(this->ScheduledWork).field_0x20 = 0;
  *(undefined4 *)&(this->ScheduledWork).field_0x28 = 0;
  *(undefined4 *)&(this->ScheduledWork).field_0x2c = 0x80;
  *(undefined4 *)&(this->ScheduledWork).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ScheduledWork).field_0x34 = 0;
  *(undefined8 *)&(this->ScheduledWork).field_0x40 = 0;
  *(undefined4 *)&(this->ScheduledWork).field_0x48 = 0;
  if (param_2 == -1) {
    param_2 = (**(code **)((longlong)*param_1 + 0x28))(param_1);
  }
  this->MaxConcurrency = (atomic<int>)param_2;
  this->MaxTaskToSchedule = -1;
  this->CurrentConcurrency = (atomic<int>)0x0;
  this->bIsScheduling = false;
  if (*(longlong *)param_3 != 0) {
    plVar3 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar3 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  return this;
}

// ~FQueuedThreadPoolWrapper @ 14191c0e0

void __thiscall FQueuedThreadPoolWrapper::~FQueuedThreadPoolWrapper(FQueuedThreadPoolWrapper *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  longlong *plVar4;
  ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_> FVar5;
  
  *(undefined ***)this = &___7FQueuedThreadPoolWrapper__6B_;
  Destroy(this);
  *(undefined4 *)&(this->ScheduledWork).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ScheduledWork).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<IQueuedWork_*,FQueuedThreadPoolWrapper::FScheduledWork_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<IQueuedWork_*,FQueuedThreadPoolWrapper::FScheduledWork_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<IQueuedWork_*,FQueuedThreadPoolWrapper::FScheduledWork_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ScheduledWork);
  pFVar2 = (this->WorkPool).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (*(longlong *)&this->PriorityMapper != 0) {
    plVar3 = *(longlong **)&(this->PriorityMapper).field_0x28;
    plVar4 = (longlong *)&(this->PriorityMapper).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  FVar5 = (this->QueuedWork).PriorityQueuedWork.AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_>)0x0) {
    FVar5 = (ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_>)
            &(this->QueuedWork).PriorityQueuedWork;
  }
  DestructItems<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>,int>
            ((TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_> *)FVar5,
             (this->QueuedWork).PriorityQueuedWork.ArrayNum);
  FVar5 = (this->QueuedWork).PriorityQueuedWork.AllocatorInstance.SecondaryData;
  if (FVar5 != (ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->Lock);
  FQueuedThreadPool::~FQueuedThreadPool((FQueuedThreadPool *)this);
  return;
}

// AddQueuedWork @ 141925820

void __thiscall
FQueuedThreadPoolWrapper::AddQueuedWork
          (FQueuedThreadPoolWrapper *this,IQueuedWork *param_1,EQueuedWorkPriority param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->Lock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FThreadPoolPriorityQueue::Enqueue(&this->QueuedWork,param_1,param_2);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    Schedule(this,(FScheduledWork *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// AllocateScheduledWork @ 141926160

FScheduledWork * __thiscall
FQueuedThreadPoolWrapper::AllocateScheduledWork(FQueuedThreadPoolWrapper *this)

{
  FScheduledWork *pFVar1;
  longlong lVar2;
  
  pFVar1 = ::operator_new(0x38);
  if (pFVar1 != (FScheduledWork *)0x0) {
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&FScheduledWork::_vftable__for__IQueuedWork__;
    pFVar1->_padding_ = (longlong)&FScheduledWork::_vftable__for__IExecutionResource__;
    (pFVar1->NumRefs).Counter = 0;
    LOCK();
    UNLOCK();
    lVar2 = (longlong)QueuedThreadPoolWrapperImpl::ScheduledWorkAllocs + 1;
    QueuedThreadPoolWrapperImpl::ScheduledWorkAllocs =
         (atomic<__int64>)((longlong)QueuedThreadPoolWrapperImpl::ScheduledWorkAllocs + 1);
    FCountersTrace::TCounter<__int64,0,__int64,0>::Set
              (&__GTraceCounterQueuedThreadPoolWrapperScheduledWorkAllocs,lVar2);
    return pFVar1;
  }
  return (FScheduledWork *)0x0;
}

// AllocateWork @ 1419261d0

FScheduledWork * __thiscall
FQueuedThreadPoolWrapper::AllocateWork
          (FQueuedThreadPoolWrapper *this,IQueuedWork *param_1,EQueuedWorkPriority param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScheduledWork *pFVar4;
  undefined1 local_res18 [16];
  
  if ((this->WorkPool).ArrayNum < 1) {
    pFVar4 = (FScheduledWork *)(**(code **)(*(longlong *)this + 0x50))();
  }
  else {
    iVar3 = (this->WorkPool).ArrayNum;
    pFVar4 = *(FScheduledWork **)
              ((this->WorkPool).AllocatorInstance.Data + (longlong)iVar3 * 8 + -8);
    (this->WorkPool).ArrayNum = iVar3 + -1;
  }
  iVar3 = (**(code **)(pFVar4->_padding_ + 0x18))(&pFVar4->_padding_);
  if (iVar3 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetRefCount() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\QueuedThreadPoolWrapper.h"
                       ,0x8e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FScheduledWork *)(*pcVar1)();
      return pFVar4;
    }
  }
  pFVar4->ParentPool = this;
  pFVar4->Work = param_1;
  pFVar4->Priority = param_2;
  (**(code **)(pFVar4->_padding_ + 8))(&pFVar4->_padding_,local_res18);
  return pFVar4;
}

// CanSchedule @ 14192c880

bool __thiscall
FQueuedThreadPoolWrapper::CanSchedule(FQueuedThreadPoolWrapper *this,EQueuedWorkPriority param_1)

{
  atomic<int> aVar1;
  int iVar2;
  
  if (((this->MaxTaskToSchedule == -1) || (0 < this->MaxTaskToSchedule)) || (param_1 == Blocking)) {
    aVar1 = this->CurrentConcurrency;
    iVar2 = (**(code **)(*(longlong *)this + 0x38))();
    if ((int)aVar1 < iVar2) {
      return true;
    }
  }
  return false;
}

// Create @ 141930990

bool __thiscall
FQueuedThreadPoolWrapper::Create
          (FQueuedThreadPoolWrapper *this,uint param_1,uint param_2,EThreadPriority param_3,
          wchar_t *param_4)

{
  return true;
}

// Destroy @ 141932f70

void __thiscall FQueuedThreadPoolWrapper::Destroy(FQueuedThreadPoolWrapper *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  atomic<int> aVar3;
  int iVar4;
  FScheduledWork *pFVar5;
  longlong *plVar6;
  code *pcVar7;
  float fVar8;
  char cVar9;
  bool bVar10;
  IQueuedWork *pIVar11;
  ulonglong uVar12;
  ForAnyElementType FVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TArray<FQueuedThreadPoolWrapper::FScheduledWork_*,TSizedDefaultAllocator<32>_> local_48 [2];
  
  lpCriticalSection = &this->Lock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pIVar11 = FThreadPoolPriorityQueue::Dequeue(&this->QueuedWork,(EQueuedWorkPriority *)0x0);
  while (pIVar11 != (IQueuedWork *)0x0) {
    (**(code **)(pIVar11->_padding_ + 8))(pIVar11);
    pIVar11 = FThreadPoolPriorityQueue::Dequeue(&this->QueuedWork,(EQueuedWorkPriority *)0x0);
  }
  FThreadPoolPriorityQueue::Reset(&this->QueuedWork);
  local_48[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48[0].ArrayNum = 0;
  local_48[0].ArrayMax = 0;
  TMapBase<IQueuedWork_*,FQueuedThreadPoolWrapper::FScheduledWork_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IQueuedWork_*,FQueuedThreadPoolWrapper::FScheduledWork_*,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<IQueuedWork_*,FQueuedThreadPoolWrapper::FScheduledWork_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IQueuedWork_*,FQueuedThreadPoolWrapper::FScheduledWork_*,0>_>
              *)&this->ScheduledWork,local_48);
  iVar4 = local_48[0].ArrayNum;
  uVar12 = (ulonglong)local_48[0].ArrayNum;
  pFVar2 = local_48[0].AllocatorInstance.Data + uVar12 * 8;
  FVar13.Data = local_48[0].AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar12 != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FQueuedThreadPoolWrapper::FScheduledWork_*,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (FVar13.Data == pFVar2) break;
    pFVar5 = *(FScheduledWork **)FVar13.Data;
    cVar9 = (**(code **)((longlong)*this->WrappedQueuedThreadPool + 0x20))
                      (this->WrappedQueuedThreadPool,pFVar5);
    if (cVar9 != '\0') {
      (**(code **)(pFVar5->Work->_padding_ + 8))();
      ReleaseWorkNoLock(this,pFVar5);
    }
    uVar12 = local_48[0]._8_8_ & 0xffffffff;
    FVar13.Data = FVar13.Data + 8;
  }
  if (local_48[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].AllocatorInstance.Data);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (this->CurrentConcurrency != (atomic<int>)0x0) {
    if (CpuChannel->Enabled < 0) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
      if (__CpuProfilerEventSpecId82 == 0) {
        __CpuProfilerEventSpecId82 =
             FCpuProfilerTrace::OutputEventType
                       ("FQueuedThreadPoolWrapper::DestroyWait",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\QueuedThreadPoolWrapper.cpp"
                        ,0x52);
      }
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId82);
    }
    fVar8 = __real_3dcccccd;
    aVar3 = this->CurrentConcurrency;
    while (aVar3 != (atomic<int>)0x0) {
      FWindowsPlatformProcess::Sleep(fVar8);
      aVar3 = this->CurrentConcurrency;
    }
    if (bVar10) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar14 = (this->WorkPool).AllocatorInstance.Data;
  iVar4 = (this->WorkPool).ArrayNum;
  pFVar2 = pFVar14 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->WorkPool).ArrayNum != iVar4) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FQueuedThreadPoolWrapper::FScheduledWork_*,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res10);
    }
    if (pFVar14 == pFVar2) break;
    plVar6 = *(longlong **)pFVar14;
    if ((plVar6[5] != 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Work->GetInnerWork() == nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\QueuedThreadPoolWrapper.cpp"
                            ,0x5d,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    (**(code **)(*plVar6 + 0x28))(plVar6,1);
    pFVar14 = pFVar14 + 8;
  }
  piVar1 = &(this->WorkPool).ArrayMax;
  (this->WorkPool).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->WorkPool).AllocatorInstance,0,piVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001419331d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// GetMaxConcurrency @ 141948440

int __thiscall FQueuedThreadPoolWrapper::GetMaxConcurrency(FQueuedThreadPoolWrapper *this)

{
  return (int)this->MaxConcurrency;
}

// GetNumThreads @ 141948a10

int __thiscall FQueuedThreadPoolWrapper::GetNumThreads(FQueuedThreadPoolWrapper *this)

{
  return (int)this->MaxConcurrency;
}

// OnScheduled @ 141957b70

void __thiscall
FQueuedThreadPoolWrapper::OnScheduled(FQueuedThreadPoolWrapper *this,IQueuedWork *param_1)

{
  return;
}

// OnUnscheduled @ 141957b80

void __thiscall
FQueuedThreadPoolWrapper::OnUnscheduled(FQueuedThreadPoolWrapper *this,IQueuedWork *param_1)

{
  return;
}

// Pause @ 14195aa40

void __thiscall FQueuedThreadPoolWrapper::Pause(FQueuedThreadPoolWrapper *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->Lock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this->MaxTaskToSchedule = 0;
                    /* WARNING: Could not recover jumptable at 0x00014195aa76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ReleaseWorkNoLock @ 141964a60

void __thiscall
FQueuedThreadPoolWrapper::ReleaseWorkNoLock(FQueuedThreadPoolWrapper *this,FScheduledWork *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  TArray<FQueuedThreadPoolWrapper::FScheduledWork_*,TSizedDefaultAllocator<32>_> *pTVar7;
  IQueuedWork *local_res8;
  FScheduledWork *local_res10 [3];
  
  local_res10[0] = param_1;
  iVar5 = (**(code **)(param_1->_padding_ + 0x18))(&param_1->_padding_);
  if (iVar5 != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Work->GetRefCount() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\QueuedThreadPoolWrapper.cpp"
                       ,0xa7,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  LOCK();
  this->CurrentConcurrency = (atomic<int>)((int)this->CurrentConcurrency + -1);
  UNLOCK();
  (**(code **)(*(longlong *)this + 0x48))(this,local_res10[0]);
  local_res8 = local_res10[0]->Work;
  if (*(int *)&(this->ScheduledWork).field_0x8 != *(int *)&(this->ScheduledWork).field_0x34) {
    uVar6 = ((uint)((ulonglong)local_res8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res8 >> 4)) *
            -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    TSet<TTuple<IQueuedWork_*,FQueuedThreadPoolWrapper::FScheduledWork_*>,TDefaultMapHashableKeyFuncs<IQueuedWork_*,FQueuedThreadPoolWrapper::FScheduledWork_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<IQueuedWork_const_*>
              ((TSet<TTuple<IQueuedWork_*,FQueuedThreadPoolWrapper::FScheduledWork_*>,TDefaultMapHashableKeyFuncs<IQueuedWork_*,FQueuedThreadPoolWrapper::FScheduledWork_*,0>,FDefaultSetAllocator>
                *)&this->ScheduledWork,uVar6 >> 0x10 ^ uVar6,&local_res8);
  }
  local_res10[0]->Work = (IQueuedWork *)0x0;
  iVar5 = (**(code **)(local_res10[0]->_padding_ + 0x18))();
  if (iVar5 != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Work->GetRefCount() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\QueuedThreadPoolWrapper.cpp"
                       ,0xad,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar7 = &this->WorkPool;
  pFVar2 = (pTVar7->AllocatorInstance).Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 < pFVar2 + (longlong)(this->WorkPool).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->WorkPool).ArrayNum;
  piVar1 = &(this->WorkPool).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar7->AllocatorInstance,piVar1);
  }
  (this->WorkPool).ArrayNum = iVar5 + 1;
  *(FScheduledWork **)((pTVar7->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_res10[0];
  return;
}

// Resume @ 141967910

void __thiscall FQueuedThreadPoolWrapper::Resume(FQueuedThreadPoolWrapper *this,int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->Lock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this->MaxTaskToSchedule = param_1;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    Schedule(this,(FScheduledWork *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// RetractQueuedWork @ 141967c30

bool __thiscall
FQueuedThreadPoolWrapper::RetractQueuedWork(FQueuedThreadPoolWrapper *this,IQueuedWork *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  TTuple<IQueuedWork_*,FQueuedThreadPoolWrapper::FScheduledWork_*> *pTVar6;
  longlong lVar7;
  
  lpCriticalSection = &this->Lock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  bVar2 = FThreadPoolPriorityQueue::Retract(&this->QueuedWork,param_1);
  if (bVar2) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return true;
  }
  pTVar6 = TSet<TTuple<IQueuedWork_*,FQueuedThreadPoolWrapper::FScheduledWork_*>,TDefaultMapHashableKeyFuncs<IQueuedWork_*,FQueuedThreadPoolWrapper::FScheduledWork_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<IQueuedWork_*,FQueuedThreadPoolWrapper::FScheduledWork_*>,TDefaultMapHashableKeyFuncs<IQueuedWork_*,FQueuedThreadPoolWrapper::FScheduledWork_*,0>,FDefaultSetAllocator>
                   *)&this->ScheduledWork,param_1);
  if (pTVar6 == (TTuple<IQueuedWork_*,FQueuedThreadPoolWrapper::FScheduledWork_*> *)0x0) {
LAB_141967d08:
    lVar7 = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  else {
    lVar7 = *(longlong *)&pTVar6->field_0x8;
    if (lVar7 != 0) {
      cVar3 = (**(code **)((longlong)*this->WrappedQueuedThreadPool + 0x20))
                        (this->WrappedQueuedThreadPool,lVar7);
      if (cVar3 == '\0') goto LAB_141967d08;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    bVar2 = true;
    if (lVar7 == 0) goto LAB_141967d16;
    iVar5 = (**(code **)(*(longlong *)(lVar7 + 0x10) + 0x18))(lVar7 + 0x10);
    if (iVar5 != 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Retracted->GetRefCount() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\QueuedThreadPoolWrapper.cpp"
                         ,0x9a,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    (**(code **)(*(longlong *)(lVar7 + 0x10) + 0x10))(lVar7 + 0x10);
  }
  bVar2 = lVar7 == 0;
LAB_141967d16:
  return !bVar2;
}

// Schedule @ 141968e60

void __thiscall
FQueuedThreadPoolWrapper::Schedule(FQueuedThreadPoolWrapper *this,FScheduledWork *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> aVar1;
  FQueuedThreadPool *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  code *pcVar5;
  EQueuedWorkPriority EVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  IQueuedWork *pIVar10;
  FScheduledWork *pFVar11;
  undefined8 uVar12;
  longlong *plVar13;
  EQueuedWorkPriority local_res8 [8];
  FScheduledWork *local_res10;
  EQueuedWorkPriority local_res18 [8];
  EQueuedWorkPriority local_res20 [8];
  undefined1 local_68 [4];
  undefined1 local_64 [12];
  undefined8 *local_58;
  FScheduledWork **local_50;
  
  lpCriticalSection = &this->Lock;
  local_res10 = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (local_res10 != (FScheduledWork *)0x0) {
    ReleaseWorkNoLock(this,local_res10);
  }
  if (this->bIsScheduling == false) {
    this->bIsScheduling = true;
    local_res8[0] = Count;
    pIVar10 = FThreadPoolPriorityQueue::Peek(&this->QueuedWork,local_res8);
    if (pIVar10 != (IQueuedWork *)0x0) {
      do {
        if ((((this->MaxTaskToSchedule == -1) || (0 < this->MaxTaskToSchedule)) ||
            (local_res8[0] == Blocking)) &&
           (aVar1 = this->CurrentConcurrency, iVar9 = (**(code **)(*(longlong *)this + 0x38))(this),
           (int)aVar1 < iVar9)) break;
        bVar7 = TryRetractWorkNoLock(this,local_res8[0]);
      } while (bVar7);
      while ((0 < (int)(this->QueuedWork).NumQueuedWork &&
             ((((this->MaxTaskToSchedule == -1 || (0 < this->MaxTaskToSchedule)) ||
               (local_res8[0] == Blocking)) &&
              ((aVar1 = this->CurrentConcurrency,
               iVar9 = (**(code **)(*(longlong *)this + 0x38))(this), (int)aVar1 < iVar9 &&
               (pIVar10 = FThreadPoolPriorityQueue::Dequeue(&this->QueuedWork,local_res18),
               EVar6 = local_res18[0], local_64._4_8_ = pIVar10, pIVar10 != (IQueuedWork *)0x0))))))
            ) {
        LOCK();
        this->CurrentConcurrency = (atomic<int>)((int)this->CurrentConcurrency + 1);
        UNLOCK();
        if ((this->WorkPool).ArrayNum < 1) {
          pFVar11 = (FScheduledWork *)(**(code **)(*(longlong *)this + 0x50))(this);
        }
        else {
          iVar9 = (this->WorkPool).ArrayNum;
          pFVar11 = *(FScheduledWork **)
                     ((this->WorkPool).AllocatorInstance.Data + (longlong)iVar9 * 8 + -8);
          (this->WorkPool).ArrayNum = iVar9 + -1;
        }
        iVar9 = (**(code **)(pFVar11->_padding_ + 0x18))(&pFVar11->_padding_);
        if ((iVar9 != 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("GetRefCount() == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\QueuedThreadPoolWrapper.h"
                               ,0x8e,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar11->ParentPool = this;
        pFVar11->Work = pIVar10;
        pFVar11->Priority = EVar6;
        (**(code **)(pFVar11->_padding_ + 8))(&pFVar11->_padding_,local_68);
        local_58 = (undefined8 *)(local_64 + 4);
        local_50 = &local_res10;
        local_res10 = pFVar11;
        TSet<TTuple<IQueuedWork_*,FQueuedThreadPoolWrapper::FScheduledWork_*>,TDefaultMapHashableKeyFuncs<IQueuedWork_*,FQueuedThreadPoolWrapper::FScheduledWork_*,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<IQueuedWork_*_const_&,FQueuedThreadPoolWrapper::FScheduledWork_*_const_&>_>
                  ((TSet<TTuple<IQueuedWork_*,FQueuedThreadPoolWrapper::FScheduledWork_*>,TDefaultMapHashableKeyFuncs<IQueuedWork_*,FQueuedThreadPoolWrapper::FScheduledWork_*,0>,FDefaultSetAllocator>
                    *)&this->ScheduledWork,
                   (TPairInitializer<IQueuedWork_*_const_&,FQueuedThreadPoolWrapper::FScheduledWork_*_const_&>
                    *)local_64,(bool *)&local_58);
        (**(code **)(*(longlong *)this + 0x40))(this,local_res10);
        pFVar2 = this->WrappedQueuedThreadPool;
        pcVar5 = *(code **)((longlong)*pFVar2 + 0x18);
        if (local_res18[0] == Blocking) {
          uVar8 = 0;
        }
        else {
          local_res20[0] = local_res18[0];
          UE::Core::Private::Function::CheckCallable(*(void **)&this->PriorityMapper);
          plVar3 = *(longlong **)&(this->PriorityMapper).field_0x28;
          pcVar4 = *(code **)&this->PriorityMapper;
          plVar13 = (longlong *)&(this->PriorityMapper).field_0x10;
          if (plVar3 != (longlong *)0x0) {
            plVar13 = plVar3;
          }
          uVar12 = (**(code **)(*plVar13 + 8))();
          uVar8 = (*pcVar4)(uVar12,local_res20);
        }
        (*pcVar5)(pFVar2,local_res10,uVar8);
        if (0 < this->MaxTaskToSchedule) {
          this->MaxTaskToSchedule = this->MaxTaskToSchedule + -1;
        }
      }
    }
    this->bIsScheduling = false;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// SetMaxConcurrency @ 14196c830

void __thiscall
FQueuedThreadPoolWrapper::SetMaxConcurrency(FQueuedThreadPoolWrapper *this,int param_1)

{
  if (param_1 == -1) {
    param_1 = (**(code **)((longlong)*this->WrappedQueuedThreadPool + 0x28))();
  }
  LOCK();
  this->MaxConcurrency = (atomic<int>)param_1;
  UNLOCK();
  Schedule(this,(FScheduledWork *)0x0);
  return;
}

// TryRetractWorkNoLock @ 141979400

bool __thiscall
FQueuedThreadPoolWrapper::TryRetractWorkNoLock
          (FQueuedThreadPoolWrapper *this,EQueuedWorkPriority param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  code *pcVar4;
  EQueuedWorkPriority EVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  uint *puVar18;
  undefined1 local_res8 [8];
  EQueuedWorkPriority local_res10;
  int local_res18;
  int local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  iVar15 = 0;
  puVar1 = &(this->ScheduledWork).field_0x10;
  iVar11 = *(int *)&(this->ScheduledWork).field_0x28;
  uVar9 = 1;
  iVar17 = 0;
  iVar10 = 0;
  if (iVar11 != 0) {
    puVar18 = *(uint **)&(this->ScheduledWork).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar14 = *puVar18;
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar15;
      iVar17 = iVar17 + 0x20;
      iVar15 = iVar15 + 1;
      iVar10 = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_1419794ad;
      uVar14 = puVar18[lVar12 + 1];
    }
    uVar9 = -uVar14 & uVar14;
    uVar3 = (ulonglong)uVar9 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res18 = (int)lVar12;
    iVar10 = local_res18 + -1 + iVar17;
    if (iVar11 < iVar10) {
      iVar10 = iVar11;
    }
  }
LAB_1419794ad:
  uVar14 = *(uint *)&(this->ScheduledWork).field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar9,iVar15);
  TStack_70.CurrentBitIndex = iVar10;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar14 >> 5;
  TStack_70._28_4_ = iVar10;
  TStack_70.BaseBitIndex = iVar17;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(this->ScheduledWork).field_0x8 -
                       *(int *)&(this->ScheduledWork).field_0x34);
  local_res10 = param_1;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar11 < (int)uVar14)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  EVar5 = local_res10;
  uVar9 = *(uint *)&(this->ScheduledWork).field_0x28;
  if (uVar14 != uVar9) {
    puVar16 = *(undefined1 **)&(this->ScheduledWork).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar15;
      uVar13 = uVar13 + 0x20;
      iVar15 = iVar15 + 1;
      uVar14 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_1419795b1;
      uVar14 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res20 = (int)lVar12;
    uVar14 = local_res20 + -1 + uVar13;
    if ((int)uVar9 < (int)uVar14) {
      uVar14 = uVar9;
    }
  }
LAB_1419795b1:
  while( true ) {
    if (*(int *)&(this->ScheduledWork).field_0x8 - *(int *)&(this->ScheduledWork).field_0x34 !=
        (int)uStack_50) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<IQueuedWork_*,FQueuedThreadPoolWrapper::FScheduledWork_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_70.CurrentBitIndex == uVar14) &&
       (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    puVar2 = (undefined8 *)
             (*(longlong *)&this->ScheduledWork + (longlong)TStack_70.CurrentBitIndex * 0x18);
    if ((EVar5 < *(EQueuedWorkPriority *)
                  (*(longlong *)
                    (*(longlong *)&this->ScheduledWork + 8 +
                    (longlong)TStack_70.CurrentBitIndex * 0x18) + 0x30)) &&
       (cVar8 = (**(code **)((longlong)*this->WrappedQueuedThreadPool + 0x20))(), cVar8 != '\0')) {
      iVar11 = (**(code **)(*(longlong *)(puVar2[1] + 0x10) + 0x18))();
      if ((iVar11 != 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair.Value->GetRefCount() == 1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\QueuedThreadPoolWrapper.cpp"
                             ,0xd2,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      FThreadPoolPriorityQueue::Enqueue
                (&this->QueuedWork,(IQueuedWork *)*puVar2,*(EQueuedWorkPriority *)(puVar2[1] + 0x30)
                );
      (**(code **)(*(longlong *)(puVar2[1] + 0x10) + 0x10))();
      if (this->MaxTaskToSchedule != -1) {
        this->MaxTaskToSchedule = this->MaxTaskToSchedule + 1;
      }
      return true;
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return false;
}

