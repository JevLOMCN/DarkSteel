// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 24

// FStackSamplesProvider @ 14d425ec0

FStackSamplesProvider * __thiscall
TraceServices::FStackSamplesProvider::FStackSamplesProvider
          (FStackSamplesProvider *this,IAnalysisSession *param_1)

{
  ILinearAllocator *pIVar1;
  
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IStackSamplesProvider__;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IEditableProvider__;
  (this->Lock).RWLock.Mutex.Mutex.Ptr = (void *)0x0;
  this->Session = param_1;
  this->EditableTimingProfilerProvider = (IEditableTimingProfilerProvider *)0x0;
  this->ModuleProvider = (IModuleProvider *)0x0;
  pIVar1 = (ILinearAllocator *)(**(code **)((longlong)*param_1 + 0xb8))(param_1);
  (this->Threads).Allocator = pIVar1;
  (this->Threads).PagesArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Threads).PagesArray.ArrayNum = 0;
  (this->Threads).PagesArray.ArrayMax = 0;
  (this->Threads).FirstPage = (TPagedArrayPage<TraceServices::FStackSamplesProviderThread> *)0x0;
  (this->Threads).LastPage = (TPagedArrayPage<TraceServices::FStackSamplesProviderThread> *)0x0;
  (this->Threads).PageSize = 0x100;
  (this->Threads).TotalItemCount = 0;
  (this->Timelines).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Timelines).ArrayNum = 0;
  (this->Timelines).ArrayMax = 0;
  *(undefined8 *)&this->ThreadsBySystemId = 0;
  *(undefined8 *)&(this->ThreadsBySystemId).field_0x8 = 0;
  *(undefined8 *)&(this->ThreadsBySystemId).field_0x20 = 0;
  *(undefined4 *)&(this->ThreadsBySystemId).field_0x28 = 0;
  *(undefined4 *)&(this->ThreadsBySystemId).field_0x2c = 0x80;
  *(undefined4 *)&(this->ThreadsBySystemId).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ThreadsBySystemId).field_0x34 = 0;
  *(undefined8 *)&(this->ThreadsBySystemId).field_0x40 = 0;
  *(undefined4 *)&(this->ThreadsBySystemId).field_0x48 = 0;
  pIVar1 = (ILinearAllocator *)(**(code **)((longlong)*this->Session + 0xb8))();
  (this->StackFrames).Allocator = pIVar1;
  (this->StackFrames).PagesArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StackFrames).PagesArray.ArrayNum = 0;
  (this->StackFrames).PagesArray.ArrayMax = 0;
  (this->StackFrames).FirstPage = (TPagedArrayPage<TraceServices::FStackSampleFrame> *)0x0;
  (this->StackFrames).LastPage = (TPagedArrayPage<TraceServices::FStackSampleFrame> *)0x0;
  (this->StackFrames).PageSize = 0x1000;
  (this->StackFrames).TotalItemCount = 0;
  *(undefined8 *)&this->StackFramesByAddress = 0;
  *(undefined8 *)&(this->StackFramesByAddress).field_0x8 = 0;
  *(undefined8 *)&(this->StackFramesByAddress).field_0x20 = 0;
  *(undefined4 *)&(this->StackFramesByAddress).field_0x28 = 0;
  *(undefined4 *)&(this->StackFramesByAddress).field_0x2c = 0x80;
  *(undefined4 *)&(this->StackFramesByAddress).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StackFramesByAddress).field_0x34 = 0;
  *(undefined8 *)&(this->StackFramesByAddress).field_0x40 = 0;
  *(undefined4 *)&(this->StackFramesByAddress).field_0x48 = 0;
  *(undefined8 *)&this->StackFramesByTimerId = 0;
  *(undefined8 *)&(this->StackFramesByTimerId).field_0x8 = 0;
  *(undefined8 *)&(this->StackFramesByTimerId).field_0x20 = 0;
  *(undefined4 *)&(this->StackFramesByTimerId).field_0x28 = 0;
  *(undefined4 *)&(this->StackFramesByTimerId).field_0x2c = 0x80;
  *(undefined4 *)&(this->StackFramesByTimerId).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StackFramesByTimerId).field_0x34 = 0;
  *(undefined8 *)&(this->StackFramesByTimerId).field_0x40 = 0;
  *(undefined4 *)&(this->StackFramesByTimerId).field_0x48 = 0;
  this->MaxSampleDuration = 0.001;
  (this->PendingTimers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingTimers).ArrayNum = 0;
  (this->PendingTimers).ArrayMax = 0;
  this->SamplingIntervalUsec = 1000;
  this->MaxStackSize = 0;
  this->TotalNumFrames = 0;
  this->TotalNumSamples = 0;
  return this;
}

// ~FStackSamplesProvider @ 14d42c880

void __thiscall
TraceServices::FStackSamplesProvider::~FStackSamplesProvider(FStackSamplesProvider *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  bool bVar5;
  
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IStackSamplesProvider__;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IEditableProvider__;
  pFVar1 = (this->PendingTimers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->StackFramesByTimerId).field_0x48 = 0;
  pvVar2 = *(void **)&(this->StackFramesByTimerId).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FStackSampleFrame_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FStackSampleFrame_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FStackSampleFrame_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StackFramesByTimerId);
  *(undefined4 *)&(this->StackFramesByAddress).field_0x48 = 0;
  pvVar2 = *(void **)&(this->StackFramesByAddress).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FStackSampleFrame_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FStackSampleFrame_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FStackSampleFrame_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StackFramesByAddress);
  TPagedArray<TraceServices::FStackSampleFrame,TraceServices::TPagedArrayPage<TraceServices::FStackSampleFrame>_>
  ::
  ~TPagedArray<TraceServices::FStackSampleFrame,TraceServices::TPagedArrayPage<TraceServices::FStackSampleFrame>_>
            (&this->StackFrames);
  *(undefined4 *)&(this->ThreadsBySystemId).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ThreadsBySystemId).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FStackSamplesProviderThread_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FStackSamplesProviderThread_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FStackSamplesProviderThread_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ThreadsBySystemId);
  pFVar1 = (this->Timelines).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TPagedArray<TraceServices::FStackSamplesProviderThread,TraceServices::TPagedArrayPage<TraceServices::FStackSamplesProviderThread>_>
  ::
  ~TPagedArray<TraceServices::FStackSamplesProviderThread,TraceServices::TPagedArrayPage<TraceServices::FStackSamplesProviderThread>_>
            (&this->Threads);
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->Lock);
  if (BVar4 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014d42c964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&this->Lock);
    return;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}

// AddStackSample @ 14d43ced0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FStackSamplesProvider::AddStackSample
          (FStackSamplesProvider *this,uint param_1,double param_2,uint param_3,ulong64 *param_4)

{
  int *piVar1;
  IAnalysisSession *pIVar2;
  ulong64 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  bool bVar10;
  int iVar11;
  IEditableTimingProfilerProvider *pIVar12;
  IModuleProvider *pIVar13;
  FStackSamplesProviderThread *pFVar14;
  ILinearAllocator *pIVar15;
  TSharedRef<TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>
  *pTVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  ulonglong uVar21;
  longlong lVar22;
  uint uVar23;
  double dVar24;
  FStackSamplesProviderThread *local_d0;
  ulonglong local_c8;
  FName local_c0;
  ForAnyElementType local_b8;
  int local_b0;
  int iStack_ac;
  TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  *local_a8;
  FSharedReferencer<1> local_a0;
  TSharedRef<TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>
  local_98 [6];
  
  (**(code **)(this->_padding_ + 0x18))(&this->_padding_);
  if (this->EditableTimingProfilerProvider == (IEditableTimingProfilerProvider *)0x0) {
    pIVar12 = EditTimingProfilerProvider(this->Session);
    this->EditableTimingProfilerProvider = pIVar12;
  }
  if (this->ModuleProvider == (IModuleProvider *)0x0) {
    pIVar2 = this->Session;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&::Name,"ModuleProvider");
      _Init_thread_footer(&::_TSS0);
    }
    local_c0 = ::Name;
    pIVar13 = (IModuleProvider *)(**(code **)((longlong)*pIVar2 + 0xf8))(pIVar2,&local_c0);
    this->ModuleProvider = pIVar13;
  }
  pFVar14 = GetOrAddThread(this,param_1);
  if ((pFVar14->Timeline).Object ==
      (TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
       *)0x0) {
    pIVar15 = (ILinearAllocator *)(**(code **)((longlong)*this->Session + 0xb8))();
    pTVar16 = MakeShared<TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1,TraceServices::ILinearAllocator_&>
                        (local_98,pIVar15);
    local_a0.ReferenceController = (pTVar16->SharedReferenceCount).ReferenceController;
    local_a8 = pTVar16->Object;
    if (local_a0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_a0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&pFVar14->Timeline !=
        (TSharedPtr<TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,1>
         *)&local_a8) {
      (pFVar14->Timeline).Object = local_a8;
      local_a8 = (TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                  *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pFVar14->Timeline).SharedReferenceCount,&local_a0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98[0].SharedReferenceCount.ReferenceController);
    pFVar20 = (this->Timelines).AllocatorInstance.Data;
    local_d0 = pFVar14;
    if (((pFVar20 <= (FScriptContainerElement *)&local_d0) &&
        ((FScriptContainerElement *)&local_d0 < pFVar20 + (longlong)(this->Timelines).ArrayMax * 8))
       && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar11 = (this->Timelines).ArrayNum;
    piVar1 = &(this->Timelines).ArrayMax;
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&(this->Timelines).AllocatorInstance,piVar1);
    }
    (this->Timelines).ArrayNum = iVar11 + 1;
    *(FStackSamplesProviderThread **)
     ((this->Timelines).AllocatorInstance.Data + (longlong)iVar11 * 8) = local_d0;
  }
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 0;
  iStack_ac = 0;
  if ((int)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)param_3);
  }
  if (0 < (int)param_3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,param_3,&local_b8,0,&iStack_ac);
  }
  lVar22 = (longlong)(int)param_3 + -1;
  if (-1 < lVar22) {
    pFVar20 = (FScriptContainerElement *)(param_4 + lVar22);
    do {
      if (((local_b8.Data <= pFVar20) && (pFVar20 < local_b8.Data + (longlong)iStack_ac * 8)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (local_b0 == iStack_ac) {
        local_b0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_b8,&iStack_ac);
      }
      lVar17 = (longlong)local_b0;
      local_b0 = local_b0 + 1;
      uVar3 = *(ulong64 *)pFVar20;
      pFVar20 = pFVar20 + -8;
      lVar22 = lVar22 + -1;
      *(ulong64 *)(local_b8.Data + lVar17 * 8) = uVar3;
    } while (-1 < lVar22);
  }
  iVar11 = (pFVar14->LastSampleStack).ArrayNum;
  uVar21 = (ulonglong)local_b0;
  dVar6 = pFVar14->LastSampleTime;
  if (param_2 < pFVar14->LastSampleTime) {
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_6642045349919719236>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\StackSamples.cpp"
                        ,0xbc,"Time >= Thread.LastSampleTime");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (2 < (byte)LogTraceServices._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
    param_2 = pFVar14->LastSampleTime;
    dVar6 = param_2;
  }
  dVar24 = this->MaxSampleDuration * __real_3fe0000000000000;
  uVar23 = 0;
  dVar7 = param_2 - dVar24;
  if (param_2 - dVar24 <= 0.0) {
    dVar7 = 0.0;
  }
  local_c8 = uVar21;
  if ((dVar7 - dVar24 <= dVar6 + dVar24) && (0 < (longlong)iVar11)) {
    lVar22 = 0;
    do {
      if ((longlong)local_c8 <= lVar22) break;
      uVar18 = 0;
      if ((int)uVar23 < local_b0) {
        uVar18 = ~uVar23 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar9.Data = local_b8.Data;
      uVar18 = 0;
      if ((int)uVar23 < (pFVar14->LastSampleStack).ArrayNum) {
        uVar18 = ~uVar23 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(longlong *)(FVar9.Data + lVar22 * 8) !=
          *(longlong *)((pFVar14->LastSampleStack).AllocatorInstance.Data + lVar22 * 8)) break;
      uVar23 = uVar23 + 1;
      lVar22 = lVar22 + 1;
    } while (lVar22 < iVar11);
  }
  if ((int)uVar23 < iVar11) {
    lVar22 = (longlong)(int)(iVar11 - uVar23);
    do {
      if (((pFVar14->Timeline).Object ==
           (TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
            *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (**(code **)(((pFVar14->Timeline).Object)->_padding_ + 0x10))();
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
  }
  uVar21 = local_c8;
  lVar17 = (longlong)(int)uVar23;
  uVar18 = uVar23;
  for (lVar22 = lVar17; lVar22 < (longlong)uVar21; lVar22 = lVar22 + 1) {
    uVar19 = 0;
    if ((int)uVar18 < local_b0) {
      uVar19 = ~uVar18 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    GetOrAddStackFrame(this,*(ulong64 *)(local_b8.Data + lVar22 * 8));
    if (((pFVar14->Timeline).Object ==
         (TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
          *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (**(code **)(((pFVar14->Timeline).Object)->_padding_ + 8))();
    uVar18 = uVar18 + 1;
  }
  uVar21 = local_c8;
  if ((int)uVar23 < iVar11) {
    uVar19 = iVar11 - uVar23;
    uVar18 = 0;
    if (iVar11 <= (pFVar14->LastSampleStack).ArrayNum) {
      uVar18 = ~(uVar19 | uVar23) >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           ), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar21 = local_c8;
    if (uVar19 != 0) {
      pFVar20 = (pFVar14->LastSampleStack).AllocatorInstance.Data + lVar17 * 8;
      iVar11 = ((pFVar14->LastSampleStack).ArrayNum - uVar19) - uVar23;
      if (iVar11 != 0) {
        memmove(pFVar20,pFVar20 + (longlong)(int)uVar19 * 8,(longlong)iVar11 << 3);
      }
      piVar1 = &(pFVar14->LastSampleStack).ArrayNum;
      *piVar1 = *piVar1 - uVar19;
      uVar21 = local_c8;
    }
  }
  while( true ) {
    uVar8 = local_c8;
    if ((longlong)local_c8 <= lVar17) {
      pFVar14->LastSampleTime = param_2;
      iVar11 = (int)local_c8;
      if ((int)local_c8 < this->MaxStackSize) {
        iVar11 = this->MaxStackSize;
      }
      this->MaxStackSize = iVar11;
      this->TotalNumFrames = (local_c8 & 0xffffffff) + this->TotalNumFrames;
      this->TotalNumSamples = this->TotalNumSamples + 1;
      if (local_b8.Data != (FScriptContainerElement *)0x0) {
        local_c8 = uVar21;
        FMemory::Free(local_b8.Data);
      }
      return;
    }
    uVar18 = 0;
    if ((int)uVar23 < local_b0) {
      uVar18 = ~uVar23 >> 0x1f;
    }
    local_c8 = uVar21;
    if ((uVar18 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) break;
    pFVar4 = (pFVar14->LastSampleStack).AllocatorInstance.Data;
    pFVar20 = local_b8.Data + lVar17 * 8;
    if (((pFVar4 <= pFVar20) &&
        (pFVar20 < pFVar4 + (longlong)(pFVar14->LastSampleStack).ArrayMax * 8)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar11 = (pFVar14->LastSampleStack).ArrayNum;
    if (iVar11 == (pFVar14->LastSampleStack).ArrayMax) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&(pFVar14->LastSampleStack).AllocatorInstance,
                          &(pFVar14->LastSampleStack).ArrayMax);
    }
    (pFVar14->LastSampleStack).ArrayNum = iVar11 + 1;
    uVar23 = uVar23 + 1;
    lVar17 = lVar17 + 1;
    *(undefined8 *)((pFVar14->LastSampleStack).AllocatorInstance.Data + (longlong)iVar11 * 8) =
         *(undefined8 *)pFVar20;
    uVar21 = local_c8;
    local_c8 = uVar8;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// AddThreadName @ 14d43e130

void __thiscall
TraceServices::FStackSamplesProvider::AddThreadName
          (FStackSamplesProvider *this,uint param_1,uint param_2,TStringView<wchar_t> *param_3)

{
  FStackSamplesProviderThread *pFVar1;
  wchar_t *pwVar2;
  undefined4 in_register_00000014;
  undefined4 in_register_00000084;
  
  (**(code **)(this->_padding_ + 0x18))
            (&this->_padding_,CONCAT44(in_register_00000014,param_1),
             CONCAT44(in_register_00000084,param_2));
  pFVar1 = GetOrAddThread(this,param_1);
  pwVar2 = (wchar_t *)(**(code **)((longlong)*this->Session + 200))(this->Session,param_3);
  pFVar1->Name = pwVar2;
  return;
}

// BeginEdit @ 14d441b10

void __thiscall TraceServices::FStackSamplesProvider::BeginEdit(FStackSamplesProvider *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FProviderLock::BeginWrite((FProviderLock *)&this->_padding_,(FThreadLocalState *)(lVar1 + 0x9bb0))
  ;
  return;
}

// BeginRead @ 14d442120

void __thiscall TraceServices::FStackSamplesProvider::BeginRead(FStackSamplesProvider *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FProviderLock::BeginRead(&this->Lock,(FThreadLocalState *)(lVar1 + 0x9bb0));
  return;
}

// CreateTimer @ 14d44e380

void __thiscall
TraceServices::FStackSamplesProvider::CreateTimer
          (FStackSamplesProvider *this,FStackSampleFrame *param_1)

{
  int *piVar1;
  TArray<TraceServices::FStackSampleFrame_*,TSizedDefaultAllocator<32>_> *pTVar2;
  IAnalysisSession *pIVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FStackSampleFrame *local_18 [2];
  
  (**(code **)(this->_padding_ + 0x10))(&this->_padding_);
  pIVar3 = this->Session;
  (**(code **)((longlong)*pIVar3 + 0xa0))(pIVar3);
  uVar7 = (**(code **)((longlong)*this->EditableTimingProfilerProvider + 0x30))
                    (this->EditableTimingProfilerProvider,1);
  param_1->TimerId = uVar7;
  (**(code **)((longlong)*pIVar3 + 0xa8))(pIVar3);
  bVar6 = UpdateTimerName(this,param_1,true);
  if (!bVar6) {
    pTVar2 = &this->PendingTimers;
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    local_18[0] = param_1;
    if ((pFVar4 <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 < pFVar4 + (longlong)(this->PendingTimers).ArrayMax * 8)
       ) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar8 = (this->PendingTimers).ArrayNum;
    piVar1 = &(this->PendingTimers).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->PendingTimers).ArrayNum = iVar8 + 1;
    *(FStackSampleFrame **)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_18[0];
  }
                    /* WARNING: Could not recover jumptable at 0x00014d44e4aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 8))(&this->_padding_);
  return;
}

// EditAccessCheck @ 14d4500b0

void __thiscall TraceServices::FStackSamplesProvider::EditAccessCheck(FStackSamplesProvider *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FProviderLock::WriteAccessCheck
            ((FProviderLock *)&this->_padding_,(FThreadLocalState *)(lVar1 + 0x9bb0));
  return;
}

// EndEdit @ 14d4515f0

void __thiscall TraceServices::FStackSamplesProvider::EndEdit(FStackSamplesProvider *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FProviderLock::EndWrite((FProviderLock *)&this->_padding_,(FThreadLocalState *)(lVar1 + 0x9bb0));
  return;
}

// EndRead @ 14d451a70

void __thiscall TraceServices::FStackSamplesProvider::EndRead(FStackSamplesProvider *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FProviderLock::EndRead(&this->Lock,(FThreadLocalState *)(lVar1 + 0x9bb0));
  return;
}

// EnumerateStackFrames @ 14d45c6c0

void __thiscall
TraceServices::FStackSamplesProvider::EnumerateStackFrames
          (FStackSamplesProvider *this,
          TFunctionRef<void___cdecl(TraceServices::FStackSampleFrame_const_&)> *param_1)

{
  TPagedArrayPage<TraceServices::FStackSampleFrame> *pTVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FStackSampleFrame *pFVar5;
  longlong lVar6;
  FStackSampleFrame *pFVar7;
  longlong lVar8;
  longlong lVar9;
  
  (**(code **)(this->_padding_ + 0x18))();
  lVar6 = 0;
  if ((this->StackFrames).TotalItemCount != 0) {
    if (((this->StackFrames).PagesArray.ArrayNum == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentPageIndex < Outer->PagesArray.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                           ,0x12f,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pTVar1 = (this->StackFrames).FirstPage;
    if (pTVar1->Items == (FStackSampleFrame *)0x0) {
      pFVar7 = (FStackSampleFrame *)0x0;
    }
    else {
      pFVar7 = pTVar1->Items + (pTVar1->Count - 1);
    }
    if ((pTVar1->Count == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ItemIndexInPage < CurrentPage->Count",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                           ,0x134,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar5 = pTVar1->Items;
    if (pFVar5 != (FStackSampleFrame *)0x0) {
      lVar8 = 0;
      do {
        (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,pFVar5);
        if (pFVar5 == pFVar7) {
          if (lVar6 == (this->StackFrames).PagesArray.ArrayNum + -1) {
            return;
          }
          lVar9 = lVar8 + 0x10;
          plVar4 = (longlong *)((longlong)&(this->StackFrames).FirstPage[1].Items + lVar8);
          lVar6 = lVar6 + 1;
          pFVar5 = (FStackSampleFrame *)*plVar4;
          if (pFVar5 == (FStackSampleFrame *)0x0) {
            pFVar7 = (FStackSampleFrame *)0x0;
          }
          else {
            pFVar7 = pFVar5 + plVar4[1] + -1;
          }
          if (plVar4 == (longlong *)0x0) {
            return;
          }
        }
        else {
          pFVar5 = pFVar5 + 1;
          lVar9 = lVar8;
        }
        lVar8 = lVar9;
      } while (pFVar5 != (FStackSampleFrame *)0x0);
    }
  }
  return;
}

// EnumerateThreads @ 14d45d5b0

void __thiscall
TraceServices::FStackSamplesProvider::EnumerateThreads
          (FStackSamplesProvider *this,
          TFunctionRef<void___cdecl(TraceServices::FStackSampleThread_const_&)> *param_1)

{
  int *piVar1;
  TPagedArrayPage<TraceServices::FStackSamplesProviderThread> *pTVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  FStackSamplesProviderThread *pFVar6;
  FStackSamplesProviderThread *pFVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  FStackSamplesProviderThread *pFVar11;
  uint local_38 [2];
  wchar_t *local_30;
  TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  *local_28;
  
  (**(code **)(this->_padding_ + 0x18))();
  piVar1 = &(this->Threads).PagesArray.ArrayNum;
  lVar8 = 0;
  if ((this->Threads).TotalItemCount == 0) {
    pFVar11 = (FStackSamplesProviderThread *)0x0;
    pFVar6 = (FStackSamplesProviderThread *)0x0;
  }
  else {
    if ((*piVar1 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentPageIndex < Outer->PagesArray.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                           ,0x12f,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar2 = (this->Threads).FirstPage;
    if (pTVar2->Items == (FStackSamplesProviderThread *)0x0) {
      pFVar11 = (FStackSamplesProviderThread *)0x0;
    }
    else {
      pFVar11 = pTVar2->Items + (pTVar2->Count - 1);
    }
    if ((pTVar2->Count == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ItemIndexInPage < CurrentPage->Count",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Common\\PagedArray.h"
                           ,0x134,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar6 = pTVar2->Items;
  }
  if (pFVar6 != (FStackSamplesProviderThread *)0x0) {
    lVar9 = 0;
    pFVar7 = pFVar6;
    do {
      local_38[0] = pFVar6->SystemThreadId;
      local_30 = pFVar6->Name;
      local_28 = (pFVar6->Timeline).Object;
      (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,local_38);
      if (pFVar7 == pFVar11) {
        if (lVar8 == *piVar1 + -1) {
          pFVar11 = (FStackSamplesProviderThread *)0x0;
          pFVar6 = (FStackSamplesProviderThread *)0x0;
          pFVar7 = (FStackSamplesProviderThread *)0x0;
        }
        else {
          lVar10 = lVar9 + 0x10;
          plVar5 = (longlong *)((longlong)&(this->Threads).FirstPage[1].Items + lVar9);
          lVar8 = lVar8 + 1;
          pFVar7 = (FStackSamplesProviderThread *)*plVar5;
          if (pFVar7 == (FStackSamplesProviderThread *)0x0) {
            pFVar11 = (FStackSamplesProviderThread *)0x0;
          }
          else {
            pFVar11 = pFVar7 + plVar5[1] + -1;
          }
          pFVar6 = pFVar7;
          lVar9 = lVar10;
          if (plVar5 == (longlong *)0x0) {
            pFVar6 = (FStackSamplesProviderThread *)0x0;
          }
        }
      }
      else {
        pFVar6 = pFVar7 + 1;
        pFVar7 = pFVar6;
      }
    } while (pFVar6 != (FStackSamplesProviderThread *)0x0);
  }
  return;
}

// EnumerateTimelines @ 14d45d7b0

void __thiscall
TraceServices::FStackSamplesProvider::EnumerateTimelines
          (FStackSamplesProvider *this,
          TFunctionRef<void___cdecl(TraceServices::ITimeline<TraceServices::FTimingProfilerEvent>_const_&,TraceServices::FStackSampleThread_const_&)>
          *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined4 *puVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 local_28;
  
  (**(code **)(this->_padding_ + 0x18))();
  pFVar6 = (this->Timelines).AllocatorInstance.Data;
  iVar2 = (this->Timelines).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Timelines).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TraceServices::FStackSamplesProviderThread_*_const,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    puVar3 = *(undefined4 **)pFVar6;
    if (*(longlong *)(puVar3 + 4) == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Thread->GetTimeline() != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\StackSamples.cpp"
                         ,0x5a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_38[0] = *puVar3;
    local_28 = *(undefined8 *)(puVar3 + 4);
    local_30 = *(undefined8 *)(puVar3 + 2);
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,local_28,local_38);
    pFVar6 = pFVar6 + 8;
  }
  return;
}

// GetOrAddStackFrame @ 14d46ad40

FStackSampleFrame * __thiscall
TraceServices::FStackSamplesProvider::GetOrAddStackFrame
          (FStackSamplesProvider *this,ulong64 param_1)

{
  ulong64 *puVar1;
  int *piVar2;
  TArray<TraceServices::TPagedArrayPage<TraceServices::FStackSampleFrame>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  TArray<TraceServices::FStackSampleFrame_*,TSizedDefaultAllocator<32>_> *pTVar4;
  longlong lVar5;
  ILinearAllocator *pIVar6;
  ulong64 uVar7;
  IModuleProvider *pIVar8;
  IAnalysisSession *pIVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  FStackSampleFrame *pFVar15;
  FResolvedSymbol *pFVar16;
  undefined8 *puVar17;
  TPagedArrayPage<TraceServices::FStackSampleFrame> *pTVar18;
  undefined1 *puVar19;
  TPairInitializer<unsigned___int64_const_&,TraceServices::FStackSampleFrame_*_&&> local_res8;
  FStackSampleFrame *local_res18 [2];
  FStackSampleFrame *local_48;
  FStackSampleFrame ***local_40;
  FStackSampleFrame **ppFStack_38;
  FResolvedSymbol *local_30;
  
  if (*(int *)&(this->StackFramesByAddress).field_0x8 !=
      *(int *)&(this->StackFramesByAddress).field_0x34) {
    puVar19 = *(undefined1 **)&(this->StackFramesByAddress).field_0x40;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = &(this->StackFramesByAddress).field_0x38;
    }
    iVar13 = *(int *)(puVar19 +
                     ((param_1 >> 0x20) * 0x17 + param_1 &
                     (ulonglong)(*(int *)&(this->StackFramesByAddress).field_0x48 - 1)) * 4);
    if (iVar13 != -1) {
      do {
        lVar5 = *(longlong *)&this->StackFramesByAddress + (longlong)iVar13 * 0x18;
        if (*(ulong64 *)(*(longlong *)&this->StackFramesByAddress + (longlong)iVar13 * 0x18) ==
            param_1) {
          puVar17 = (undefined8 *)(lVar5 + 8);
          if (lVar5 == 0) {
            puVar17 = (undefined8 *)0x0;
          }
          if (puVar17 != (undefined8 *)0x0) {
            return (FStackSampleFrame *)*puVar17;
          }
          break;
        }
        iVar13 = *(int *)(lVar5 + 0x10);
      } while (iVar13 != -1);
    }
  }
  pTVar18 = (this->StackFrames).LastPage;
  ppFStack_38 = (FStackSampleFrame **)((ulonglong)ppFStack_38 & 0xffffffff00000000);
  local_30 = (FResolvedSymbol *)0x0;
  local_res8.Value = (FStackSampleFrame **)param_1;
  local_40 = (FStackSampleFrame ***)param_1;
  if ((pTVar18 == (TPagedArrayPage<TraceServices::FStackSampleFrame> *)0x0) ||
     (pTVar18->Count == (this->StackFrames).PageSize)) {
    pTVar3 = &(this->StackFrames).PagesArray;
    iVar13 = (this->StackFrames).PagesArray.ArrayNum;
    piVar2 = &(this->StackFrames).PagesArray.ArrayMax;
    if (iVar13 == *piVar2) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar3->AllocatorInstance,piVar2);
    }
    (this->StackFrames).PagesArray.ArrayNum = iVar13 + 1;
    pTVar18 = (TPagedArrayPage<TraceServices::FStackSampleFrame> *)
              ((pTVar3->AllocatorInstance).Data + (longlong)iVar13 * 0x10);
    DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FStackSampleFrame>,int>
              (pTVar18,1);
    pIVar6 = (this->StackFrames).Allocator;
    (this->StackFrames).FirstPage =
         (TPagedArrayPage<TraceServices::FStackSampleFrame> *)(pTVar3->AllocatorInstance).Data;
    (this->StackFrames).LastPage = pTVar18;
    pFVar15 = (FStackSampleFrame *)
              (**(code **)((longlong)*pIVar6 + 8))(pIVar6,(this->StackFrames).PageSize * 0x18);
    ((this->StackFrames).LastPage)->Items = pFVar15;
  }
  pTVar18 = (this->StackFrames).LastPage;
  puVar1 = &(this->StackFrames).TotalItemCount;
  *puVar1 = *puVar1 + 1;
  uVar7 = pTVar18->Count;
  pFVar15 = pTVar18->Items;
  pFVar15[uVar7].Address = (ulong64)local_40;
  *(FStackSampleFrame ***)&pFVar15[uVar7].TimerId = ppFStack_38;
  pFVar15[uVar7].Symbol = local_30;
  pFVar15 = pFVar15 + uVar7;
  puVar1 = &((this->StackFrames).LastPage)->Count;
  *puVar1 = *puVar1 + 1;
  local_40 = &local_res8.Value;
  ppFStack_38 = local_res18;
  local_res18[0] = pFVar15;
  TSet<TTuple<unsigned___int64,TraceServices::FStackSampleFrame_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FStackSampleFrame_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned___int64_const_&,TraceServices::FStackSampleFrame_*_&&>_>
            ((TSet<TTuple<unsigned___int64,TraceServices::FStackSampleFrame_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FStackSampleFrame_*,0>,FDefaultSetAllocator>
              *)&this->StackFramesByAddress,&local_res8,(bool *)&local_40);
  pIVar8 = this->ModuleProvider;
  if (pIVar8 == (IModuleProvider *)0x0) {
    pFVar16 = &NeverResolveSymbol;
  }
  else {
    pFVar16 = (FResolvedSymbol *)(**(code **)(*(longlong *)pIVar8 + 0x20))(pIVar8,local_res8.Value);
  }
  pFVar15->Symbol = pFVar16;
  (**(code **)(this->_padding_ + 0x10))(&this->_padding_);
  pIVar9 = this->Session;
  (**(code **)((longlong)*pIVar9 + 0xa0))(pIVar9);
  uVar14 = (**(code **)((longlong)*this->EditableTimingProfilerProvider + 0x30))
                     (this->EditableTimingProfilerProvider,1);
  pFVar15->TimerId = uVar14;
  (**(code **)((longlong)*pIVar9 + 0xa8))(pIVar9);
  bVar12 = UpdateTimerName(this,pFVar15,true);
  if (!bVar12) {
    pTVar4 = &this->PendingTimers;
    pFVar10 = (pTVar4->AllocatorInstance).Data;
    local_48 = pFVar15;
    if ((pFVar10 <= (FScriptContainerElement *)&local_48) &&
       ((FScriptContainerElement *)&local_48 <
        pFVar10 + (longlong)(this->PendingTimers).ArrayMax * 8)) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar12) {
        pcVar11 = (code *)swi(3);
        pFVar15 = (FStackSampleFrame *)(*pcVar11)();
        return pFVar15;
      }
    }
    iVar13 = (this->PendingTimers).ArrayNum;
    piVar2 = &(this->PendingTimers).ArrayMax;
    if (iVar13 == *piVar2) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar4->AllocatorInstance,piVar2);
    }
    pFVar10 = (pTVar4->AllocatorInstance).Data;
    (this->PendingTimers).ArrayNum = iVar13 + 1;
    *(FStackSampleFrame **)(pFVar10 + (longlong)iVar13 * 8) = local_48;
  }
  (**(code **)(this->_padding_ + 8))(&this->_padding_);
  return pFVar15;
}

// GetOrAddThread @ 14d46b2c0

FStackSamplesProviderThread * __thiscall
TraceServices::FStackSamplesProvider::GetOrAddThread(FStackSamplesProvider *this,uint param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  FStackSamplesProviderThread *pFVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  TPairInitializer<unsigned_int_const_&,TraceServices::FStackSamplesProviderThread_*_&&> local_res8;
  FStackSamplesProviderThread *local_res18;
  FStackSamplesProviderThread ***local_58;
  FStackSamplesProviderThread **local_50;
  FStackSamplesProviderThread local_48;
  
  if (*(int *)&(this->ThreadsBySystemId).field_0x8 != *(int *)&(this->ThreadsBySystemId).field_0x34)
  {
    puVar6 = *(undefined1 **)&(this->ThreadsBySystemId).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->ThreadsBySystemId).field_0x38;
    }
    iVar3 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->ThreadsBySystemId).field_0x48 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->ThreadsBySystemId).field_0x0;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(uint *)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          puVar5 = (undefined8 *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar5 = (undefined8 *)0x0;
          }
          if (puVar5 != (undefined8 *)0x0) {
            return (FStackSamplesProviderThread *)*puVar5;
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  local_48.LastSampleTime = 0.0;
  local_48.LastSampleStack.ArrayNum = 0;
  local_48.LastSampleStack.ArrayMax = 0;
  local_48.Name = (wchar_t *)0x0;
  local_48.Timeline.Object =
       (TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
        *)0x0;
  local_48.Timeline.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_48.LastSampleStack.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_res8.Value._0_4_ = param_1;
  local_48.SystemThreadId = param_1;
  pFVar4 = TPagedArray<TraceServices::FStackSamplesProviderThread,TraceServices::TPagedArrayPage<TraceServices::FStackSamplesProviderThread>_>
           ::EmplaceBack<TraceServices::FStackSamplesProviderThread>(&this->Threads,&local_48);
  if (local_48.LastSampleStack.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.LastSampleStack.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.Timeline.SharedReferenceCount.ReferenceController);
  local_58 = &local_res8.Value;
  local_50 = &local_res18;
  local_res18 = pFVar4;
  TSet<TTuple<unsigned_int,TraceServices::FStackSamplesProviderThread_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FStackSamplesProviderThread_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,TraceServices::FStackSamplesProviderThread_*_&&>_>
            ((TSet<TTuple<unsigned_int,TraceServices::FStackSamplesProviderThread_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FStackSamplesProviderThread_*,0>,FDefaultSetAllocator>
              *)&this->ThreadsBySystemId,&local_res8,(bool *)&local_58);
  return pFVar4;
}

// GetStackFrameCount @ 14d46cbb0

uint __thiscall
TraceServices::FStackSamplesProvider::GetStackFrameCount(FStackSamplesProvider *this)

{
  (**(code **)(this->_padding_ + 0x18))();
  return (uint)(this->StackFrames).TotalItemCount;
}

// GetThreadCount @ 14d46e170

uint __thiscall TraceServices::FStackSamplesProvider::GetThreadCount(FStackSamplesProvider *this)

{
  (**(code **)(this->_padding_ + 0x18))();
  return (uint)(this->Threads).TotalItemCount;
}

// GetTimeline @ 14d46e440

ITimeline<TraceServices::FTimingProfilerEvent> * __thiscall
TraceServices::FStackSamplesProvider::GetTimeline(FStackSamplesProvider *this,uint param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  
  (**(code **)(this->_padding_ + 0x18))();
  if (*(int *)&(this->ThreadsBySystemId).field_0x8 != *(int *)&(this->ThreadsBySystemId).field_0x34)
  {
    puVar4 = *(undefined1 **)&(this->ThreadsBySystemId).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->ThreadsBySystemId).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->ThreadsBySystemId).field_0x48 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)&this->ThreadsBySystemId + (longlong)iVar2 * 0x18;
        if (*(uint *)(*(longlong *)&this->ThreadsBySystemId + (longlong)iVar2 * 0x18) == param_1) {
          plVar3 = (longlong *)(lVar1 + 8);
          if (lVar1 == 0) {
            plVar3 = (longlong *)0x0;
          }
          if (plVar3 == (longlong *)0x0) {
            return (ITimeline<TraceServices::FTimingProfilerEvent> *)0x0;
          }
          return *(ITimeline<TraceServices::FTimingProfilerEvent> **)(*plVar3 + 0x10);
        }
        iVar2 = *(int *)(lVar1 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return (ITimeline<TraceServices::FTimingProfilerEvent> *)0x0;
}

// GetTimelineCount @ 14d46e4f0

uint __thiscall TraceServices::FStackSamplesProvider::GetTimelineCount(FStackSamplesProvider *this)

{
  (**(code **)(this->_padding_ + 0x18))();
  return (this->Timelines).ArrayNum;
}

// OnAnalysisEnd @ 14d47aa40

/* WARNING: Enum "Type": Some values do not have unique names */

double __thiscall TraceServices::FStackSamplesProvider::OnAnalysisEnd(FStackSamplesProvider *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  longlong *plVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 local_res8 [8];
  
  (**(code **)(this->_padding_ + 0x18))(&this->_padding_);
  dVar9 = __real_3fe0000000000000;
  pFVar7 = (this->Timelines).AllocatorInstance.Data;
  uVar12 = 0;
  uVar13 = 0;
  iVar2 = (this->Timelines).ArrayNum;
  pFVar1 = pFVar7 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Timelines).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TraceServices::FStackSamplesProviderThread_*,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar1) break;
    lVar3 = *(longlong *)pFVar7;
    if ((*(longlong *)(lVar3 + 0x10) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Thread->Timeline",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\StackSamples.cpp"
                           ,0x162,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      dVar9 = (double)(*pcVar4)();
      return dVar9;
    }
    iVar8 = *(int *)(lVar3 + 0x28);
    dVar10 = this->MaxSampleDuration * dVar9 + *(double *)(lVar3 + 0x30);
    uVar11 = SUB84(dVar10,0);
    if (dVar10 <= (double)CONCAT44(uVar13,uVar12)) {
      dVar10 = (double)CONCAT44(uVar13,uVar12);
    }
    uVar12 = SUB84(dVar10,0);
    uVar13 = (undefined4)((ulonglong)dVar10 >> 0x20);
    for (; 0 < iVar8; iVar8 = iVar8 + -1) {
      if ((*(longlong *)(lVar3 + 0x10) == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        dVar9 = (double)(*pcVar4)();
        return dVar9;
      }
      plVar6 = (longlong *)(*(longlong *)(lVar3 + 0x10) + 8);
      (**(code **)(*plVar6 + 0x10))(plVar6,uVar11);
    }
    *(undefined4 *)(lVar3 + 0x28) = 0;
    if (*(int *)(lVar3 + 0x2c) < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)(lVar3 + 0x20),0,(int *)(lVar3 + 0x2c));
    }
    pFVar7 = pFVar7 + 8;
  }
  if ((4 < (byte)LogTraceServices._0_1_) &&
     (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices),
     4 < (byte)LogTraceServices._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
  return (double)CONCAT44(uVar13,uVar12);
}

// ReadAccessCheck @ 14d4811f0

void __thiscall TraceServices::FStackSamplesProvider::ReadAccessCheck(FStackSamplesProvider *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FProviderLock::ReadAccessCheck(&this->Lock,(FThreadLocalState *)(lVar1 + 0x9bb0));
  return;
}

// SetSamplingInterval @ 14d48b300

void __thiscall
TraceServices::FStackSamplesProvider::SetSamplingInterval(FStackSamplesProvider *this,uint param_1)

{
  this->SamplingIntervalUsec = param_1;
  this->MaxSampleDuration = (double)param_1 * __real_3eb0c6f7a0b5ed8d;
  return;
}

// UpdatePendingTimers @ 14d48f000

bool __thiscall
TraceServices::FStackSamplesProvider::UpdatePendingTimers(FStackSamplesProvider *this)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  
  iVar7 = (this->PendingTimers).ArrayNum;
  uVar9 = 0;
  if (0 < iVar7) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < (this->PendingTimers).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      bVar4 = UpdateTimerName(this,*(FStackSampleFrame **)
                                    ((this->PendingTimers).AllocatorInstance.Data + lVar8),false);
      if (bVar4) {
        iVar7 = (this->PendingTimers).ArrayNum;
        uVar10 = iVar7 - 1;
        uVar6 = 0;
        if ((int)uVar10 < iVar7) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        uVar2 = *(undefined8 *)
                 ((this->PendingTimers).AllocatorInstance.Data + (longlong)(int)uVar10 * 8);
        uVar6 = 0;
        if ((int)uVar9 < (this->PendingTimers).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        *(undefined8 *)((this->PendingTimers).AllocatorInstance.Data + lVar8) = uVar2;
        iVar7 = (this->PendingTimers).ArrayNum;
        uVar10 = iVar7 - 1;
        uVar6 = 0;
        if ((int)uVar10 < iVar7) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        _Dst = (this->PendingTimers).AllocatorInstance.Data + (longlong)(int)uVar10 * 8;
        iVar7 = (this->PendingTimers).ArrayNum + ~uVar10;
        if (iVar7 != 0) {
          memmove(_Dst,_Dst + 8,(longlong)iVar7 << 3);
        }
        piVar1 = &(this->PendingTimers).ArrayNum;
        *piVar1 = *piVar1 + -1;
        uVar9 = uVar9 - 1;
        lVar8 = lVar8 + -8;
      }
      iVar7 = (this->PendingTimers).ArrayNum;
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar9 < iVar7);
  }
  return 0 < iVar7;
}

// UpdateTimerName @ 14d48f570

bool __thiscall
TraceServices::FStackSamplesProvider::UpdateTimerName
          (FStackSamplesProvider *this,FStackSampleFrame *param_1,bool param_2)

{
  atomic<TraceServices::ESymbolQueryResult> aVar1;
  IAnalysisSession *pIVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  int iVar5;
  ulong64 uVar6;
  FString local_28;
  
  if (param_1->Symbol == (FResolvedSymbol *)0x0) {
    ::FString::PrintfImpl(&local_28,L"0x%X");
    bVar4 = true;
    FVar3.Data = local_28.Data.AllocatorInstance.Data;
    iVar5 = local_28.Data.ArrayNum;
  }
  else {
    aVar1 = param_1->Symbol->Result;
    if (aVar1 == (atomic<TraceServices::ESymbolQueryResult>)0x0) {
      if (!param_2) {
        return false;
      }
      ::FString::PrintfImpl(&local_28,L"0x%X pending...");
      bVar4 = false;
      FVar3.Data = local_28.Data.AllocatorInstance.Data;
      iVar5 = local_28.Data.ArrayNum;
    }
    else if (aVar1 == (atomic<TraceServices::ESymbolQueryResult>)0x1) {
      uVar6 = param_1->Address;
      ::FString::PrintfImpl(&local_28,L"%s (%s / 0x%X)");
      pIVar2 = this->Session;
      (**(code **)((longlong)*pIVar2 + 0xa0))(pIVar2);
      (**(code **)((longlong)*this->EditableTimingProfilerProvider + 0x48))
                (this->EditableTimingProfilerProvider,param_1->TimerId,param_1->Symbol->File,
                 param_1->Symbol->Line,uVar6);
      (**(code **)((longlong)*pIVar2 + 0xa8))(pIVar2);
      bVar4 = true;
      FVar3.Data = local_28.Data.AllocatorInstance.Data;
      iVar5 = local_28.Data.ArrayNum;
    }
    else if (aVar1 == (atomic<TraceServices::ESymbolQueryResult>)0x2) {
      ::FString::PrintfImpl(&local_28,L"%s / 0x%X NotLoaded");
      bVar4 = true;
      FVar3.Data = local_28.Data.AllocatorInstance.Data;
      iVar5 = local_28.Data.ArrayNum;
    }
    else if (aVar1 == (atomic<TraceServices::ESymbolQueryResult>)0x3) {
      ::FString::PrintfImpl(&local_28,L"%s / 0x%X Mismatch");
      bVar4 = true;
      FVar3.Data = local_28.Data.AllocatorInstance.Data;
      iVar5 = local_28.Data.ArrayNum;
    }
    else if (aVar1 == (atomic<TraceServices::ESymbolQueryResult>)0x4) {
      ::FString::PrintfImpl(&local_28,L"%s / 0x%X NotFound");
      bVar4 = true;
      FVar3.Data = local_28.Data.AllocatorInstance.Data;
      iVar5 = local_28.Data.ArrayNum;
    }
    else {
      ::FString::PrintfImpl(&local_28,L"0x%X Invalid !!!");
      bVar4 = true;
      FVar3.Data = local_28.Data.AllocatorInstance.Data;
      iVar5 = local_28.Data.ArrayNum;
    }
  }
  pIVar2 = this->Session;
  (**(code **)((longlong)*pIVar2 + 0xa0))(pIVar2);
  local_28.Data.ArrayNum = iVar5 + -1;
  if (iVar5 == 0) {
    local_28.Data.ArrayNum = 0;
  }
  (**(code **)((longlong)*this->EditableTimingProfilerProvider + 0x38))
            (this->EditableTimingProfilerProvider,param_1->TimerId,&local_28);
  (**(code **)((longlong)*pIVar2 + 0xa8))(pIVar2);
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  return bVar4;
}

