// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// FPhysScene_AsyncPhysicsStateJobQueue @ 14824f520

FPhysScene_AsyncPhysicsStateJobQueue * __thiscall
FPhysScene_AsyncPhysicsStateJobQueue::FPhysScene_AsyncPhysicsStateJobQueue
          (FPhysScene_AsyncPhysicsStateJobQueue *this,FPhysScene_Chaos *param_1)

{
  int iVar1;
  FPhysScene_Chaos *pFVar2;
  UClass *pUVar3;
  longlong lVar4;
  
  this->PhysScene = param_1;
  (this->AsyncJobTask).Pimpl.Reference = (FTaskBase *)0x0;
  this->TaskEpoch = 0;
  this->UsedAsyncTaskTimeBudgetSec = 0.0;
  (this->JobsLock).Mutex.Mutex.Ptr = (void *)0x0;
  (this->ExecutingJob).bIsSet = false;
  this->bIsBlocking = (atomic<bool>)0x0;
  pFVar2 = this->PhysScene;
  (this->JobsToExecute).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->JobsToExecute).ArrayNum = 0;
  (this->JobsToExecute).ArrayMax = 0;
  (this->CompletedJobs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompletedJobs).ArrayNum = 0;
  (this->CompletedJobs).ArrayMax = 0;
  this->GameThreadEpoch = (atomic<int>)0x0;
  lVar4 = pFVar2->_padding_;
  if (lVar4 != 0) {
    pUVar3 = Z_Construct_UClass_UWorld_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_14824f593;
  }
  lVar4 = 0;
LAB_14824f593:
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FPhysScene_AsyncPhysicsStateJobQueue>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             (lVar4 + 0x6f8),(FPhysScene_AsyncPhysicsStateJobQueue *)&stack0x00000008,
             (pmf_2fa6c4d4)this);
  return this;
}

// ~FPhysScene_AsyncPhysicsStateJobQueue @ 148252b80

void __thiscall
FPhysScene_AsyncPhysicsStateJobQueue::~FPhysScene_AsyncPhysicsStateJobQueue
          (FPhysScene_AsyncPhysicsStateJobQueue *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FTaskBase *pFVar5;
  code *pcVar6;
  bool bVar7;
  BOOLEAN BVar8;
  UClass *pUVar9;
  longlong lVar10;
  
  lVar10 = this->PhysScene->_padding_;
  if (lVar10 != 0) {
    pUVar9 = Z_Construct_UClass_UWorld_NoRegister();
    iVar3 = (int)pUVar9->_padding_;
    if ((iVar3 <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) + (longlong)iVar3 * 8)
        == &pUVar9->_padding_)) goto LAB_148252bbe;
  }
  lVar10 = 0;
LAB_148252bbe:
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(lVar10 + 0x6f8),this);
  bVar7 = IsCompleted(this);
  if (!bVar7) {
    Tick(this,true);
  }
  bVar7 = IsCompleted(this);
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsCompleted()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_AsyncPhysicsStateJobQueue.cpp"
                       ,0x20,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar4 = (this->CompletedJobs).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->JobsToExecute).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  BVar8 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->JobsLock);
  if (BVar8 == '\0') {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->JobsLock);
  }
  pFVar5 = (this->AsyncJobTask).Pimpl.Reference;
  if (pFVar5 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &pFVar5->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar5->_padding_)(pFVar5,1);
    }
  }
  return;
}

// AddJob @ 1482643e0

void __thiscall
FPhysScene_AsyncPhysicsStateJobQueue::AddJob
          (FPhysScene_AsyncPhysicsStateJobQueue *this,FJob *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FJob *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  EJobType EVar6;
  undefined4 uVar7;
  bool bVar8;
  int iVar9;
  bool bVar10;
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId37,"FPhysScene_AsyncPhysicsStateJobQueue::AddJob",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_AsyncPhysicsStateJobQueue.cpp"
               ,0x25);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId37);
  }
  bVar8 = IsInGameThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_AsyncPhysicsStateJobQueue.cpp"
                         ,0x26,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId242,
               "FPhysScene_AsyncPhysicsStateJobQueue::OnPreExecute_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_AsyncPhysicsStateJobQueue.cpp"
               ,0xf2);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId242);
  }
  if (param_1->Type == CreatePhysicsState) {
    (**(code **)((longlong)*param_1->Processor + 0x28))();
  }
  else if (param_1->Type == DestroyPhysicsState) {
    (**(code **)((longlong)*param_1->Processor + 0x40))();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->JobsLock);
  pFVar3 = (FJob *)(this->JobsToExecute).AllocatorInstance.Data;
  if (((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->JobsToExecute).ArrayMax)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar9 = (this->JobsToExecute).ArrayNum;
  piVar1 = &(this->JobsToExecute).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->JobsToExecute).AllocatorInstance,piVar1);
  }
  (this->JobsToExecute).ArrayNum = iVar9 + 1;
  uVar5 = *(undefined4 *)((longlong)&param_1->Processor + 4);
  EVar6 = param_1->Type;
  uVar7 = *(undefined4 *)&param_1->field_0xc;
  pFVar2 = (this->JobsToExecute).AllocatorInstance.Data + (longlong)iVar9 * 0x10;
  *(undefined4 *)pFVar2 = *(undefined4 *)&param_1->Processor;
  *(undefined4 *)(pFVar2 + 4) = uVar5;
  *(EJobType *)(pFVar2 + 8) = EVar6;
  *(undefined4 *)(pFVar2 + 0xc) = uVar7;
  ReleaseSRWLockExclusive((PSRWLOCK)&this->JobsLock);
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ExecuteJobsAsync @ 14827c990

void __thiscall
FPhysScene_AsyncPhysicsStateJobQueue::ExecuteJobsAsync
          (FPhysScene_AsyncPhysicsStateJobQueue *this,double param_1)

{
  TOptional<FPhysScene_AsyncPhysicsStateJobQueue::FJob> *this_00;
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  longlong lVar10;
  bool bVar11;
  double dVar12;
  uint local_res8;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_c8;
  LARGE_INTEGER local_c0;
  LARGE_INTEGER local_b8;
  LARGE_INTEGER local_b0;
  longlong local_a8;
  IAsyncPhysicsStateProcessor *local_a0;
  longlong lStack_98;
  
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId133,"FPhysScene_AsyncPhysicsStateJobQueue::ExecuteJobsAsync"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_AsyncPhysicsStateJobQueue.cpp"
               ,0x85);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId133);
  }
  dVar12 = param_1 - this->UsedAsyncTaskTimeBudgetSec;
  QueryPerformanceCounter(&local_res18);
  dVar4 = __real_43e0000000000000;
  local_b0 = local_res18;
  if (0.0 < dVar12) {
    dVar12 = dVar12 / FGenericPlatformTime::SecondsPerCycle64;
    local_a8 = 0;
    if ((__real_43e0000000000000 <= dVar12) &&
       (dVar12 = dVar12 - __real_43e0000000000000, dVar12 < __real_43e0000000000000)) {
      local_a8 = -0x8000000000000000;
    }
    local_a8 = (longlong)dVar12 + local_a8;
  }
  else {
    local_a8 = 0;
  }
  uVar9 = 0;
  local_res8 = 0;
  lVar10 = 0;
  while( true ) {
    if (this->bIsBlocking == (atomic<bool>)0x0) {
      if ((atomic<int>)this->TaskEpoch != this->GameThreadEpoch) {
        this->TaskEpoch = (int)this->GameThreadEpoch;
        QueryPerformanceCounter(&local_c8);
        if (0.0 < param_1) {
          local_a8 = 0;
          dVar12 = param_1 / FGenericPlatformTime::SecondsPerCycle64;
          if ((dVar4 <= dVar12) && (dVar12 = dVar12 - dVar4, dVar12 < dVar4)) {
            local_a8 = -0x8000000000000000;
          }
          local_a8 = (longlong)dVar12 + local_a8;
        }
        else {
          local_a8 = 0;
        }
        this->UsedAsyncTaskTimeBudgetSec = 0.0;
        local_b0 = local_c8;
      }
    }
    else {
      QueryPerformanceCounter(&local_res20);
      local_a8 = -1;
      local_b0 = local_res20;
    }
    AcquireSRWLockExclusive((PSRWLOCK)&this->JobsLock);
    if (((int)uVar9 < 0) || ((this->JobsToExecute).ArrayNum <= (int)uVar9)) break;
    if ((this->ExecutingJob).bIsSet != false) {
      if (((int)uVar9 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar8 = (this->JobsToExecute).AllocatorInstance.Data + lVar10;
      local_a0 = *(IAsyncPhysicsStateProcessor **)pFVar8;
      lStack_98 = *(longlong *)(pFVar8 + 8);
      if (((((this->ExecutingJob).bIsSet != true) ||
           ((this->ExecutingJob).TypedValue.Processor != local_a0)) ||
          ((this->ExecutingJob).TypedValue.Type != (EJobType)lStack_98)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!ExecutingJob.IsSet() || (ExecutingJob == JobsToExecute[Index])",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_AsyncPhysicsStateJobQueue.cpp"
                             ,0x9f,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar6 = 0;
    if ((int)uVar9 < (this->JobsToExecute).ArrayNum) {
      uVar6 = ~uVar9 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this_00 = &this->ExecutingJob;
    pFVar8 = (this->JobsToExecute).AllocatorInstance.Data + lVar10;
    uVar9 = uVar9 + 1;
    lVar10 = lVar10 + 0x10;
    if ((TOptional<FPhysScene_AsyncPhysicsStateJobQueue::FJob> *)pFVar8 != this_00) {
      uVar3 = *(undefined8 *)(pFVar8 + 8);
      (this_00->TypedValue).Processor = *(IAsyncPhysicsStateProcessor **)&pFVar8->field_0x0;
      *(undefined8 *)&(this->ExecutingJob).TypedValue.Type = uVar3;
      (this->ExecutingJob).bIsSet = true;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&this->JobsLock);
    if (((this->ExecutingJob).bIsSet == false) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar5 = FJob::Execute(&this_00->TypedValue,(FTimeout *)&local_b0.s);
    if (!bVar5) goto LAB_14827ce16;
    AcquireSRWLockExclusive((PSRWLOCK)&this->JobsLock);
    if (((this->ExecutingJob).bIsSet == false) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar8 = (this->CompletedJobs).AllocatorInstance.Data;
    if (((pFVar8 <= this_00) && (this_00 < pFVar8 + (longlong)(this->CompletedJobs).ArrayMax * 0x10)
        ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar7 = (this->CompletedJobs).ArrayNum;
    piVar1 = &(this->CompletedJobs).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->CompletedJobs).AllocatorInstance,piVar1);
    }
    (this->CompletedJobs).ArrayNum = iVar7 + 1;
    uVar3 = *(undefined8 *)&(this->ExecutingJob).TypedValue.Type;
    pFVar8 = (this->CompletedJobs).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
    *(IAsyncPhysicsStateProcessor **)pFVar8 = (this_00->TypedValue).Processor;
    *(undefined8 *)(pFVar8 + 8) = uVar3;
    if ((this->ExecutingJob).bIsSet != false) {
      (this->ExecutingJob).bIsSet = false;
    }
    local_res8 = local_res8 + 1;
    ReleaseSRWLockExclusive((PSRWLOCK)&this->JobsLock);
    if ((local_a8 != -1) &&
       ((local_a8 == 0 ||
        (QueryPerformanceCounter(&local_c0),
        (ulonglong)(local_b0.QuadPart + local_a8) < (ulonglong)local_c0)))) goto LAB_14827ce16;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->JobsLock);
LAB_14827ce16:
  AcquireSRWLockExclusive((PSRWLOCK)&this->JobsLock);
  uVar9 = 0;
  if ((int)local_res8 <= (this->JobsToExecute).ArrayNum) {
    uVar9 = ~local_res8 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (local_res8 != 0) {
    pFVar8 = (this->JobsToExecute).AllocatorInstance.Data;
    iVar7 = (this->JobsToExecute).ArrayNum - local_res8;
    if (iVar7 != 0) {
      memmove(pFVar8,pFVar8 + (longlong)(int)local_res8 * 0x10,(longlong)iVar7 << 4);
    }
    piVar1 = &(this->JobsToExecute).ArrayNum;
    *piVar1 = *piVar1 - local_res8;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&(this->JobsToExecute).AllocatorInstance,(this->JobsToExecute).ArrayNum,
               &(this->JobsToExecute).ArrayMax);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->JobsLock);
  QueryPerformanceCounter(&local_b8);
  this->UsedAsyncTaskTimeBudgetSec =
       (double)(ulonglong)(local_b8.QuadPart - (longlong)local_b0) *
       FGenericPlatformTime::SecondsPerCycle64 + this->UsedAsyncTaskTimeBudgetSec;
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// IsCompleted @ 148294a90

bool __thiscall
FPhysScene_AsyncPhysicsStateJobQueue::IsCompleted(FPhysScene_AsyncPhysicsStateJobQueue *this)

{
  FTaskBase *pFVar1;
  bool bVar2;
  
  AcquireSRWLockShared((PSRWLOCK)&this->JobsLock);
  pFVar1 = (this->AsyncJobTask).Pimpl.Reference;
  if ((((pFVar1 == (FTaskBase *)0x0) || ((pFVar1->Subsequents).bIsClosed != (atomic<bool>)0x0)) &&
      ((this->JobsToExecute).ArrayNum == 0)) &&
     (((this->ExecutingJob).bIsSet == false && ((this->CompletedJobs).ArrayNum == 0)))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->JobsLock);
  return bVar2;
}

// LaunchAsyncJobTask @ 148295170

void __thiscall
FPhysScene_AsyncPhysicsStateJobQueue::LaunchAsyncJobTask(FPhysScene_AsyncPhysicsStateJobQueue *this)

{
  FTaskHandle *pFVar1;
  atomic<unsigned_int> *paVar2;
  atomic<unsigned_int> aVar3;
  FTaskBase *pFVar4;
  code *pcVar5;
  bool bVar6;
  FTaskBase *pFVar7;
  FTask *pFVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong local_28;
  FPhysScene_AsyncPhysicsStateJobQueue *local_20;
  double dStack_18;
  
  pFVar7 = (this->AsyncJobTask).Pimpl.Reference;
  pFVar1 = &this->AsyncJobTask;
  if ((pFVar7 != (FTaskBase *)0x0) && ((pFVar7->Subsequents).bIsClosed == (atomic<bool>)0x0)) {
    return;
  }
  AcquireSRWLockShared((PSRWLOCK)&this->JobsLock);
  if ((this->JobsToExecute).ArrayNum == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001482951c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockShared((PSRWLOCK)&this->JobsLock);
    return;
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->JobsLock);
  dStack_18 = __real_7fefffffffffffff;
  if (0.0 < Chaos::GAsyncPhysicsStateTaskTimeBudgetMS) {
    dStack_18 = (double)(Chaos::GAsyncPhysicsStateTaskTimeBudgetMS * __real_3a83126f);
  }
  local_20 = this;
  pFVar7 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&UE::Tasks::Private::SmallTaskAllocator);
  if (pFVar7 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::FTaskBase(pFVar7,2,true);
    pFVar7->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTaskBase<`FPhysScene_AsyncPhysicsStateJobQueue::LaunchAsyncJobTask'::`2'::<lambda_1>,void,void>
          ::_vftable_;
    if (((*(ulonglong *)&(pFVar7->LowLevelTask).field_0x38 & 0x20) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                           ,0x1dd,L"State: %d"), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (**(code **)(*(longlong *)&(pFVar7->LowLevelTask).field_0x28 + 0x18))
              (&(pFVar7->LowLevelTask).field_0x28,&pFVar7->LowLevelTask);
    *(FTaskBase **)&pFVar7->LowLevelTask = pFVar7;
    *(undefined ***)&(pFVar7->LowLevelTask).field_0x28 =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(FTaskBase **)&(pFVar7->LowLevelTask).field_0x8 = pFVar7;
    pFVar8 = LowLevelTasks::FTask::GetActiveTask();
    uVar9 = 0;
    if (pFVar8 != (FTask *)0x0) {
      uVar9 = *(undefined8 *)&pFVar8->field_0x30;
    }
    *(undefined8 *)&(pFVar7->LowLevelTask).field_0x30 = uVar9;
    *(undefined8 *)&(pFVar7->LowLevelTask).field_0x38 = 0xd0000054696a8000;
    pFVar7->ExtendedPriority = None;
    UE::FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&pFVar7->_padding_);
    pFVar7[1]._padding_ = (longlong)local_20;
    pFVar7[1]._padding_ = (longlong)dStack_18;
    pFVar7->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTask<`FPhysScene_AsyncPhysicsStateJobQueue::LaunchAsyncJobTask'::`2'::<lambda_1>_>
          ::_vftable_;
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(pFVar7,0x100);
  if (pFVar1 == (FTaskHandle *)&local_28) {
    if (pFVar7 == (FTaskBase *)0x0) {
      return;
    }
    LOCK();
    paVar2 = &pFVar7->RefCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 != (atomic<unsigned_int>)0x1) {
      return;
    }
    puVar10 = (undefined8 *)pFVar7->_padding_;
  }
  else {
    pFVar4 = (pFVar1->Pimpl).Reference;
    (pFVar1->Pimpl).Reference = pFVar7;
    if (pFVar4 == (FTaskBase *)0x0) {
      return;
    }
    LOCK();
    paVar2 = &pFVar4->RefCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 != (atomic<unsigned_int>)0x1) {
      return;
    }
    puVar10 = (undefined8 *)pFVar4->_padding_;
    pFVar7 = pFVar4;
  }
  (*(code *)*puVar10)(pFVar7,1);
  return;
}

// OnUpdateLevelStreamingDone @ 148299210

void __thiscall
FPhysScene_AsyncPhysicsStateJobQueue::OnUpdateLevelStreamingDone
          (FPhysScene_AsyncPhysicsStateJobQueue *this)

{
  LOCK();
  this->GameThreadEpoch = (atomic<int>)((int)this->GameThreadEpoch + 1);
  UNLOCK();
  LaunchAsyncJobTask(this);
  return;
}

// RemoveJob @ 1482a4c00

void __thiscall
FPhysScene_AsyncPhysicsStateJobQueue::RemoveJob
          (FPhysScene_AsyncPhysicsStateJobQueue *this,FJob *param_1)

{
  FTaskBase *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  FJob *this_01;
  bool bVar5;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_58;
  undefined8 local_50;
  IAsyncPhysicsStateProcessor *local_48;
  undefined8 uStack_40;
  IAsyncPhysicsStateProcessor *local_30;
  undefined8 uStack_28;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId47,"FPhysScene_AsyncPhysicsStateJobQueue::RemoveJob",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_AsyncPhysicsStateJobQueue.cpp"
               ,0x2f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId47);
  }
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_AsyncPhysicsStateJobQueue.cpp"
                         ,0x30,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((((param_1->Processor == (IAsyncPhysicsStateProcessor *)0x0) ||
       (lVar4 = (**(code **)((longlong)*param_1->Processor + 0x18))(), lVar4 == 0)) ||
      ((*(uint *)(lVar4 + 8) >> 0x1e & 1) != 0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Job.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_AsyncPhysicsStateJobQueue.cpp"
                         ,0x31,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->JobsLock);
  iVar3 = TArray<FPhysScene_AsyncPhysicsStateJobQueue::FJob,TSizedDefaultAllocator<32>_>::Remove
                    (&this->CompletedJobs,param_1);
  if (iVar3 == 0) {
    local_48 = param_1->Processor;
    uStack_40 = *(undefined8 *)&param_1->Type;
    if ((((this->ExecutingJob).bIsSet == true) &&
        ((this->ExecutingJob).TypedValue.Processor == local_48)) &&
       ((this->ExecutingJob).TypedValue.Type == (EJobType)uStack_40)) {
      ReleaseSRWLockExclusive((PSRWLOCK)&this->JobsLock);
      this_00 = (this->AsyncJobTask).Pimpl.Reference;
      if (this_00 != (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::Wait(this_00);
      }
      AcquireSRWLockExclusive((PSRWLOCK)&this->JobsLock);
      iVar3 = TArray<FPhysScene_AsyncPhysicsStateJobQueue::FJob,TSizedDefaultAllocator<32>_>::Remove
                        (&this->CompletedJobs,param_1);
      if (iVar3 == 0) {
        local_30 = param_1->Processor;
        uStack_28 = *(undefined8 *)&param_1->Type;
        if ((((this->ExecutingJob).bIsSet == true) &&
            ((this->ExecutingJob).TypedValue.Processor == local_30)) &&
           ((this->ExecutingJob).TypedValue.Type == (EJobType)uStack_28)) {
          QueryPerformanceCounter(&local_res8);
          local_58 = local_res8;
          local_50 = 0xffffffffffffffff;
          this_01 = TOptional<FPhysScene_AsyncPhysicsStateJobQueue::FJob>::operator->
                              (&this->ExecutingJob);
          FJob::Execute(this_01,(FTimeout *)&local_58.s);
          if ((this->ExecutingJob).bIsSet != false) {
            (this->ExecutingJob).bIsSet = false;
          }
          TArray<FPhysScene_AsyncPhysicsStateJobQueue::FJob,TSizedDefaultAllocator<32>_>::Remove
                    (&this->JobsToExecute,param_1);
        }
      }
      if (((this->ExecutingJob).bIsSet != false) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("!ExecutingJob.IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_AsyncPhysicsStateJobQueue.cpp"
                             ,0x5d,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      iVar3 = TArray<FPhysScene_AsyncPhysicsStateJobQueue::FJob,TSizedDefaultAllocator<32>_>::Remove
                        (&this->JobsToExecute,param_1);
      if (iVar3 == 0) {
        ReleaseSRWLockExclusive((PSRWLOCK)&this->JobsLock);
        goto LAB_1482a4e68;
      }
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->JobsLock);
  if (((param_1->Processor != (IAsyncPhysicsStateProcessor *)0x0) &&
      (lVar4 = (**(code **)((longlong)*param_1->Processor + 0x18))(), lVar4 != 0)) &&
     ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0)) {
    if (param_1->Type == CreatePhysicsState) {
      (**(code **)((longlong)*param_1->Processor + 0x38))();
    }
    else if (param_1->Type == DestroyPhysicsState) {
      (**(code **)((longlong)*param_1->Processor + 0x50))();
    }
  }
LAB_1482a4e68:
  if (!bVar5) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// Tick @ 1482b4130

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPhysScene_AsyncPhysicsStateJobQueue::Tick(FPhysScene_AsyncPhysicsStateJobQueue *this,bool param_1)

{
  FTaskBase *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UWorld *pUVar4;
  longlong lVar5;
  int iVar6;
  TArray<FPhysScene_AsyncPhysicsStateJobQueue::FJob,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  undefined8 local_18 [2];
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId192,"FPhysScene_AsyncPhysicsStateJobQueue::Tick",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_AsyncPhysicsStateJobQueue.cpp"
               ,0xc0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId192);
  }
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_AsyncPhysicsStateJobQueue.cpp"
                         ,0xc1,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = IsCompleted(this);
  if (bVar2) goto LAB_1482b437c;
  if (param_1) {
LAB_1482b4235:
    LOCK();
    this->bIsBlocking = (atomic<bool>)0x1;
    UNLOCK();
    while( true ) {
      LaunchAsyncJobTask(this);
      this_00 = (this->AsyncJobTask).Pimpl.Reference;
      if (this_00 != (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::Wait(this_00);
      }
      AcquireSRWLockShared((PSRWLOCK)&this->JobsLock);
      if ((this->JobsToExecute).ArrayNum == 0) break;
      ReleaseSRWLockShared((PSRWLOCK)&this->JobsLock);
    }
    ReleaseSRWLockShared((PSRWLOCK)&this->JobsLock);
    LOCK();
    this->bIsBlocking = (atomic<bool>)0x0;
    UNLOCK();
  }
  else {
    lVar5 = this->PhysScene->_padding_;
    if (lVar5 == 0) {
LAB_1482b4208:
      lVar5 = 0;
    }
    else {
      pUVar3 = Z_Construct_UClass_UWorld_NoRegister();
      iVar6 = (int)pUVar3->_padding_;
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < iVar6) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar6 * 8)
          != &pUVar3->_padding_)) goto LAB_1482b4208;
    }
    if (((*(int *)(lVar5 + 0x194) != 0) ||
        (pUVar4 = FPhysScene_Chaos::GetOwningWorld(this->PhysScene),
        (bool)pUVar4->bShouldForceUnloadStreamingLevels)) ||
       (pUVar4 = FPhysScene_Chaos::GetOwningWorld(this->PhysScene),
       pUVar4->bIsBeingCleanedUp != false)) goto LAB_1482b4235;
  }
  pFVar9 = (FScriptContainerElement *)0x0;
  iVar6 = 0;
  AcquireSRWLockExclusive((PSRWLOCK)&this->JobsLock);
  pTVar7 = &this->CompletedJobs;
  if ((TArray<FPhysScene_AsyncPhysicsStateJobQueue::FJob,TSizedDefaultAllocator<32>_> *)local_18 !=
      pTVar7) {
    pFVar9 = (pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar6 = (this->CompletedJobs).ArrayNum;
    (this->CompletedJobs).ArrayNum = 0;
    (this->CompletedJobs).ArrayMax = 0;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->JobsLock);
  if (iVar6 != 0) {
    bVar2 = -1 < CpuChannel->Enabled;
    if (bVar2) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId232,
                 "FPhysScene_AsyncPhysicsStateJobQueue::Tick_OnPostExecute_GameThread",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_AsyncPhysicsStateJobQueue.cpp"
                 ,0xe8);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId232);
    }
    pFVar8 = pFVar9;
    while (pFVar8 != pFVar9 + (longlong)iVar6 * 0x10) {
      if (((*(longlong **)pFVar8 == (longlong *)0x0) ||
          (lVar5 = (**(code **)(**(longlong **)pFVar8 + 0x18))(), lVar5 == 0)) ||
         ((*(uint *)(lVar5 + 8) >> 0x1e & 1) != 0)) {
LAB_1482b4356:
        pFVar8 = pFVar8 + 0x10;
      }
      else {
        if (*(int *)(pFVar8 + 8) == 0) {
          (**(code **)(**(longlong **)pFVar8 + 0x38))();
          goto LAB_1482b4356;
        }
        if (*(int *)(pFVar8 + 8) != 1) goto LAB_1482b4356;
        (**(code **)(**(longlong **)pFVar8 + 0x50))();
        pFVar8 = pFVar8 + 0x10;
      }
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
LAB_1482b437c:
  if (!bVar10) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

