// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// ClearTask @ 141a7c1f0

void __thiscall UE::Tasks::FPipe::ClearTask(FPipe *this,FTaskBase *param_1)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned_int> aVar2;
  atomic<unsigned_int> aVar3;
  atomic<unsigned___int64> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  atomic<unsigned_int> *paVar6;
  bool bVar7;
  
  LOCK();
  bVar7 = (atomic<UE::Tasks::Private::FTaskBase_*>)param_1 == this->LastTask;
  if (bVar7) {
    this->LastTask = (atomic<UE::Tasks::Private::FTaskBase_*>)0x0;
  }
  UNLOCK();
  if (bVar7) {
    LOCK();
    paVar6 = &param_1->RefCount;
    aVar2 = *paVar6;
    *paVar6 = (atomic<unsigned_int>)((int)*paVar6 + -1);
    UNLOCK();
    if ((aVar2 == (atomic<unsigned_int>)0x1) && (param_1 != (FTaskBase *)0x0)) {
      (**(code **)param_1->_padding_)(param_1,1);
    }
  }
  pTVar5 = (this->EmptyEventRef).SharedReferenceCount.ReferenceController;
  paVar6 = &((this->EmptyEventRef).Object)->Count;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  LOCK();
  paVar1 = &this->TaskCount;
  aVar4 = *paVar1;
  *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
  UNLOCK();
  if (aVar4 == (atomic<unsigned___int64>)0x1) {
    LOCK();
    aVar2 = *paVar6;
    *paVar6 = *paVar6;
    UNLOCK();
    if (((uint)aVar2 & 1) != 0) {
      LOCK();
      aVar3 = *paVar6;
      if (aVar2 == aVar3) {
        *paVar6 = (atomic<unsigned_int>)((int)aVar2 + 1);
      }
      UNLOCK();
      if (aVar2 == aVar3) {
        ParkingLot::WakeAll(paVar6);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return;
}

// ExecutionFinished @ 141a7ea40

void __thiscall UE::Tasks::FPipe::ExecutionFinished(FPipe *this)

{
  int iVar1;
  void *_Dst;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar6 = *(int *)(lVar2 + 0xbe0) - 1;
  uVar5 = 0;
  if ((int)uVar6 < *(int *)(lVar2 + 0xbe0)) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(FPipe **)(*(longlong *)(lVar2 + 0xbd8) + -8 + (longlong)*(int *)(lVar2 + 0xbe0) * 8) != this
     ) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CallStack.Last() == &Pipe",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Tasks\\Pipe.cpp"
                       ,0x6b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (*(int *)(lVar2 + 0xbe0) < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = *(int *)(lVar2 + 0xbe0) - 1;
  _Dst = (void *)(*(longlong *)(lVar2 + 0xbd8) + (longlong)(int)uVar5 * 8);
  iVar1 = ~uVar5 + *(int *)(lVar2 + 0xbe0);
  if (iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar1 << 3);
  }
  *(int *)(lVar2 + 0xbe0) = *(int *)(lVar2 + 0xbe0) + -1;
  return;
}

// ExecutionStarted @ 141a7ea50

void __thiscall UE::Tasks::FPipe::ExecutionStarted(FPipe *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForAnyElementType *pFVar5;
  FPipe *local_18 [2];
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  pFVar5 = (ForAnyElementType *)(lVar1 + 0xbd8);
  local_18[0] = this;
  if ((pFVar5->Data <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar5->Data + (longlong)*(int *)(lVar1 + 0xbe4) * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = *(int *)(lVar1 + 0xbe0);
  if (iVar4 == *(int *)(lVar1 + 0xbe4)) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar5,(int *)(lVar1 + 0xbe4));
  }
  *(int *)(lVar1 + 0xbe0) = iVar4 + 1;
  *(FPipe **)(pFVar5->Data + (longlong)iVar4 * 8) = local_18[0];
  return;
}

// IsInContext @ 141a848e0

bool __thiscall UE::Tasks::FPipe::IsInContext(FPipe *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (*(int *)(lVar1 + 0xbe0) != 0) {
    if (*(char *)(lVar1 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    uVar6 = *(int *)(lVar1 + 0xbe0) - 1;
    uVar5 = 0;
    if ((int)uVar6 < *(int *)(lVar1 + 0xbe0)) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (*(FPipe **)(*(longlong *)(lVar1 + 0xbd8) + -8 + (longlong)*(int *)(lVar1 + 0xbe0) * 8) ==
        this) {
      return true;
    }
  }
  return false;
}

// PushIntoPipe @ 141a8e330

FTaskBase * __thiscall UE::Tasks::FPipe::PushIntoPipe(FPipe *this,FTaskBase *param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  atomic<UE::Tasks::Private::FTaskBase_*> this_00;
  code *pcVar3;
  bool bVar4;
  FTaskBase *pFVar5;
  
  LOCK();
  param_1->RefCount = (atomic<unsigned_int>)((int)param_1->RefCount + 1);
  UNLOCK();
  LOCK();
  this_00 = this->LastTask;
  this->LastTask = (atomic<UE::Tasks::Private::FTaskBase_*>)param_1;
  UNLOCK();
  if (this_00 == (atomic<UE::Tasks::Private::FTaskBase_*>)param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("LastTask_Local != &Task",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Tasks\\Pipe.cpp"
                       ,0xf,
                       L"Dependency cycle: adding itself as a prerequisite (or use after destruction)"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FTaskBase *)(*pcVar3)();
      return pFVar5;
    }
  }
  if (this_00 != (atomic<UE::Tasks::Private::FTaskBase_*>)0x0) {
    bVar4 = Tasks::Private::FTaskBase::AddSubsequent((FTaskBase *)this_00,param_1);
    if (bVar4) {
      return (FTaskBase *)this_00;
    }
    LOCK();
    paVar1 = (atomic<unsigned_int> *)((longlong)this_00 + 0x30);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (*(code *)**(undefined8 **)this_00)(this_00,1);
    }
  }
  return (FTaskBase *)0x0;
}

// WaitUntilEmpty @ 141a99df0

bool __thiscall UE::Tasks::FPipe::WaitUntilEmpty(FPipe *this,FTimespan param_1)

{
  TEventCount<unsigned_int> TVar1;
  atomic<unsigned___int64> aVar2;
  atomic<unsigned_int> *paVar3;
  FMonotonicTimeSpan FVar4;
  double dVar5;
  longlong lVar6;
  bool bVar7;
  ulonglong uVar8;
  bool bVar9;
  double dVar10;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  atomic<unsigned_int> *local_68;
  uint local_60;
  FWaitState local_58 [3];
  
  if (this->TaskCount == (atomic<unsigned___int64>)0x0) {
    return true;
  }
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId65,"FPipe::WaitUntilEmpty",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Tasks\\Pipe.cpp"
               ,0x41);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId65);
  }
  QueryPerformanceCounter(&local_res8);
  dVar5 = __real_7ff0000000000000;
  uVar8 = 0;
  if (param_1.Ticks == 0x7fffffffffffffff) {
    uVar8 = 0xffffffffffffffff;
  }
  else if (0.0 < (double)param_1.Ticks * __real_3e7ad7f29abcaf48) {
    dVar10 = ((double)param_1.Ticks * __real_3e7ad7f29abcaf48) /
             FGenericPlatformTime::SecondsPerCycle64;
    lVar6 = 0;
    if ((__real_43e0000000000000 <= dVar10) &&
       (dVar10 = dVar10 - __real_43e0000000000000, dVar10 < __real_43e0000000000000)) {
      lVar6 = -0x8000000000000000;
    }
    uVar8 = (longlong)dVar10 + lVar6;
  }
  aVar2 = this->TaskCount;
  while (aVar2 != (atomic<unsigned___int64>)0x0) {
    if ((uVar8 != 0xffffffffffffffff) &&
       ((uVar8 == 0 ||
        (QueryPerformanceCounter(&local_res18), local_res8.QuadPart + uVar8 < (ulonglong)local_res18
        )))) {
LAB_141a9a094:
      bVar7 = false;
      goto LAB_141a9a053;
    }
    paVar3 = &((this->EmptyEventRef).Object)->Count;
    TVar1.Count = *paVar3;
    LOCK();
    *paVar3 = (atomic<unsigned_int>)((uint)*paVar3 | 1);
    UNLOCK();
    if (this->TaskCount == (atomic<unsigned___int64>)0x0) break;
    paVar3 = &((this->EmptyEventRef).Object)->Count;
    FVar4.Time = dVar5;
    if (uVar8 != 0xffffffffffffffff) {
      dVar10 = (double)uVar8 * FGenericPlatformTime::SecondsPerCycle64;
      QueryPerformanceCounter(&local_res20);
      FVar4.Time = dVar10 - (double)(ulonglong)(local_res20.QuadPart - (longlong)local_res8) *
                            FGenericPlatformTime::SecondsPerCycle64;
    }
    if (((((uint)*paVar3 & 0xfffffffe) == ((uint)TVar1.Count & 0xfffffffe)) &&
        (local_68 = paVar3, local_60 = (uint)TVar1.Count & 0xfffffffe,
        ParkingLot::Private::WaitFor
                  (local_58,paVar3,
                   TFunctionWithContext<bool___cdecl(void)>::
                   Call<_UE::TEventCount<unsigned_int>::WaitFor_::__l5::<lambda_1>_>,&local_68,
                   (_func___cdecl_void_void_ptr *)0x0,(void *)0x0,FVar4),
        SUB81(local_58[0]._0_8_,1) == false)) && (SUB81(local_58[0]._0_8_,0) != false))
    goto LAB_141a9a094;
    aVar2 = this->TaskCount;
  }
  bVar7 = true;
LAB_141a9a053:
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar7;
}

// FPipe @ 141d69750

FPipe * __thiscall UE::Tasks::FPipe::FPipe(FPipe *this,wchar_t *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FPipe *pFVar4;
  
  this->LastTask = (atomic<UE::Tasks::Private::FTaskBase_*>)0x0;
  this->TaskCount = (atomic<unsigned___int64>)0x0;
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    (this->EmptyEventRef).Object = (TEventCount<unsigned_int> *)0x10;
    (this->EmptyEventRef).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_V__TEventCount_I_UE___00_SharedPointerInternals__6B_;
    *(undefined8 *)&pTVar3->WeakReferenceCount = 1;
    (this->EmptyEventRef).Object = (TEventCount<unsigned_int> *)(pTVar3 + 1);
    (this->EmptyEventRef).SharedReferenceCount.ReferenceController = pTVar3;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FPipe *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  this->DebugName = param_1;
  return this;
}

// ~FPipe @ 141d6d2d0

void __thiscall UE::Tasks::FPipe::~FPipe(FPipe *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->TaskCount != (atomic<unsigned___int64>)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasWork()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Pipe.h"
                       ,0x2a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->EmptyEventRef).SharedReferenceCount.ReferenceController);
  return;
}

