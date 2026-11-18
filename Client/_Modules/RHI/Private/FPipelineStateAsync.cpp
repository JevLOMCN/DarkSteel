// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 7

// ~FPipelineStateAsync @ 145c8a980

void __thiscall FPipelineStateAsync::~FPipelineStateAsync(FPipelineStateAsync *this)

{
  code *pcVar1;
  bool bVar2;
  
  this->_padding_ = (longlong)&___7FPipelineStateAsync__6B_;
  bVar2 = IsComplete(this);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                       ,0x3ef,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = WaitCompletion(this);
  if (bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!WaitCompletion()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                       ,0x3f0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FPSOCSVStatTracker::~FPSOCSVStatTracker(&this->CSVStat);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (this->CompletionStates[1].SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (this->CompletionStates[0].SharedReferenceCount.ReferenceController);
  return;
}

// GetCompletionEvent @ 145ca8e40

FBaseGraphTask * __thiscall FPipelineStateAsync::GetCompletionEvent(FPipelineStateAsync *this)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  FBaseGraphTask *pFVar4;
  longlong lVar5;
  
  bVar2 = IsInParallelRHIThread();
  lVar5 = 0x10;
  if ((bVar2) || (lVar3 = 0x10, GEnablePSOAsyncCacheConsolidation == false)) {
    lVar3 = 0x20;
  }
  if (*(longlong *)
       ((longlong)&((FPipelineStateAsync *)(this->CompletionStates + -1))->_padding_ + lVar3) != 0)
  {
    bVar2 = IsInParallelRHIThread();
    if ((bVar2) || (GEnablePSOAsyncCacheConsolidation == false)) {
      lVar5 = 0x20;
    }
    if (*(longlong *)
         ((longlong)&((FPipelineStateAsync *)(this->CompletionStates + -1))->_padding_ + lVar5) == 0
       ) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FBaseGraphTask *)(*pcVar1)();
        return pFVar4;
      }
    }
    return (FBaseGraphTask *)
           **(undefined8 **)
             ((longlong)&((FPipelineStateAsync *)(this->CompletionStates + -1))->_padding_ + lVar5);
  }
  return (FBaseGraphTask *)0x0;
}

// IsComplete @ 145cb1810

bool __thiscall FPipelineStateAsync::IsComplete(FPipelineStateAsync *this)

{
  FPSOPrecacheAsyncTask *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong lVar4;
  FCompletionState *pFVar5;
  TSharedPtr<FPipelineStateAsync::FCompletionState,1> *this_01;
  
  bVar2 = IsInParallelRHIThread();
  if ((bVar2) || (lVar4 = 0x10, GEnablePSOAsyncCacheConsolidation == false)) {
    lVar4 = 0x20;
  }
  this_01 = (TSharedPtr<FPipelineStateAsync::FCompletionState,1> *)
            ((longlong)&((FPipelineStateAsync *)(this->CompletionStates + -1))->_padding_ + lVar4);
  pFVar5 = this_01->Object;
  if (pFVar5 != (FCompletionState *)0x0) {
    if (((pFVar5->CompletionEvent).Reference != (FBaseGraphTask *)0x0) &&
       (((pFVar5->CompletionEvent).Reference)->field_0xd0 == '\0')) {
      return false;
    }
    if ((this_01->Object == (FCompletionState *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if ((this_01->Object->PrecompileTask).Ptr != (FPSOPrecacheAsyncTask *)0x0) {
      pFVar5 = TSharedPtr<FPipelineStateAsync::FCompletionState,1>::operator->(this_01);
      this_00 = (pFVar5->PrecompileTask).Ptr;
      if (((FThreadSafeCounter *)&this_00->_padding_)->Counter != 0) {
        return false;
      }
      FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)this_00,false);
    }
  }
  return true;
}

// MakeCompletionState @ 145cb3310

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedPtr<FPipelineStateAsync::FCompletionState,1> * __thiscall
FPipelineStateAsync::MakeCompletionState(FPipelineStateAsync *this)

{
  FCompletionState *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  TSharedPtr<FPipelineStateAsync::FCompletionState,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *local_38;
  FSharedReferencer<1> FStack_30;
  FCompletionState *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  
  bVar3 = IsInParallelRHIThread();
  pTVar7 = (TReferenceControllerBase<1> *)&DAT_00000010;
  if ((bVar3) || (lVar4 = 0x10, GEnablePSOAsyncCacheConsolidation == false)) {
    lVar4 = 0x20;
  }
  if (*(longlong *)
       ((longlong)&((FPipelineStateAsync *)(this->CompletionStates + -1))->_padding_ + lVar4) == 0)
  {
    pTVar5 = ::operator_new(0x20);
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      pTVar5 = (TReferenceControllerBase<1> *)0x0;
      local_38 = ___xmm_00000000000000000000000000000010;
      FStack_30.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar5->SharedReferenceCount = (atomic<int>)0x1;
      pTVar7 = pTVar5 + 1;
      pTVar5->WeakReferenceCount = (atomic<int>)0x1;
      pTVar5->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFCompletionState_FPipelineStateAsync___00_SharedPointerInternals__6B_
      ;
      pTVar5[1]._padding_ = 0;
      pTVar5[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar5[1].WeakReferenceCount = (atomic<int>)0x0;
      if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar6 = (TSharedPtr<FPipelineStateAsync::FCompletionState,1> *)(*pcVar2)();
          return pTVar6;
        }
      }
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
      local_38 = pTVar7;
      FStack_30.ReferenceController = pTVar5;
    }
    pTVar6 = this->CompletionStates;
    if (pTVar6 != (TSharedPtr<FPipelineStateAsync::FCompletionState,1> *)&local_38) {
      pTVar6->Object = (FCompletionState *)pTVar7;
      local_38 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&this->CompletionStates[0].SharedReferenceCount,&FStack_30);
    }
    pTVar7 = this->CompletionStates[0].SharedReferenceCount.ReferenceController;
    pFVar1 = pTVar6->Object;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28 = this->CompletionStates[1].Object;
    pTStack_20 = this->CompletionStates[1].SharedReferenceCount.ReferenceController;
    this->CompletionStates[1].Object = pFVar1;
    this->CompletionStates[1].SharedReferenceCount.ReferenceController = pTVar7;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_30.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  return (TSharedPtr<FPipelineStateAsync::FCompletionState,1> *)
         ((longlong)&((FPipelineStateAsync *)(this->CompletionStates + -1))->_padding_ + lVar4);
}

// SetCompletionEvent @ 145cbe940

void __thiscall
FPipelineStateAsync::SetCompletionEvent
          (FPipelineStateAsync *this,TRefCountPtr<FBaseGraphTask> param_1)

{
  int *piVar1;
  int iVar2;
  FBaseGraphTask *pFVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  TSharedPtr<FPipelineStateAsync::FCompletionState,1> *pTVar7;
  
  pTVar7 = MakeCompletionState(this);
  if (pTVar7->Object == (FCompletionState *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar3 = (FBaseGraphTask *)pTVar7->Object;
  if (pFVar3 != param_1.Reference) {
    puVar4 = *(undefined8 **)pFVar3;
    *(longlong *)pFVar3 = *(longlong *)param_1.Reference;
    *(undefined8 *)param_1.Reference = 0;
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar4 + 6);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
  }
  puVar4 = *(undefined8 **)param_1.Reference;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  return;
}

// SetPrecompileTask @ 145cbfd80

void __thiscall
FPipelineStateAsync::SetPrecompileTask
          (FPipelineStateAsync *this,
          TUniquePtr<FPSOPrecacheAsyncTask,TDefaultDelete<FPSOPrecacheAsyncTask>_> param_1)

{
  FPSOPrecacheAsyncTask *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  TSharedPtr<FPipelineStateAsync::FCompletionState,1> *pTVar5;
  TUniquePtr<FPSOPrecacheAsyncTask,TDefaultDelete<FPSOPrecacheAsyncTask>_> *pTVar6;
  
  pTVar5 = MakeCompletionState(this);
  if (pTVar5->Object == (FCompletionState *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar6 = &pTVar5->Object->PrecompileTask;
  if ((FPSOPrecacheAsyncTask *)pTVar6 != param_1.Ptr) {
    pFVar1 = pTVar6->Ptr;
    pTVar6->Ptr = (FPSOPrecacheAsyncTask *)(param_1.Ptr)->_padding_;
    (param_1.Ptr)->_padding_ = 0;
    if (pFVar1 != (FPSOPrecacheAsyncTask *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,1);
    }
  }
  plVar2 = (longlong *)(param_1.Ptr)->_padding_;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,1);
  }
  return;
}

// WaitCompletion @ 145ccb0b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FPipelineStateAsync::WaitCompletion(FPipelineStateAsync *this)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  FAsyncTaskBase *this_00;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  LARGE_INTEGER LVar8;
  FName *pFVar9;
  LARGE_INTEGER *pLVar10;
  FTaskGraphInterface *this_01;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  longlong lVar11;
  LARGE_INTEGER LVar12;
  longlong lVar13;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_58;
  undefined8 local_48;
  FSharedReferencer<1> FStack_40;
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  
  bVar4 = false;
  LVar8 = (LARGE_INTEGER)GetCompletionEvent(this);
  if (((FName)LVar8.QuadPart == (FName)0x0) || (*(char *)(LVar8.QuadPart + 0xd0) != '\0'))
  goto LAB_145ccb344;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_bool___cdecl_FPipelineStateAsync::WaitCompletion(void)___ptr64'::__l5::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_bool___cdecl_FPipelineStateAsync::WaitCompletion(void)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__),
     `public:_bool___cdecl_FPipelineStateAsync::WaitCompletion(void)___ptr64'::__l5::
     _thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FPipelineState_WaitCompletion = (LARGE_INTEGER *)0x0;
    pFVar9 = ::FName::FName((FName *)&local_res8.s,"STAT_FPipelineState_WaitCompletion");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_bool___cdecl_FPipelineStateAsync::WaitCompletion(void)___ptr64'::__l5::
                StatPtr_STAT_FPipelineState_WaitCompletion,*pFVar9,
               L"STAT_FPipelineState_WaitCompletion","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
               true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_bool___cdecl_FPipelineStateAsync::WaitCompletion(void)___ptr64'::
                         __l5::_thread_safe_static_guard_0__);
  }
  pLVar10 = _StatPtr_STAT_FPipelineState_WaitCompletion;
  if (_StatPtr_STAT_FPipelineState_WaitCompletion == (LARGE_INTEGER *)0x0) {
    pFVar9 = ::FName::FName(&local_res10,"STAT_FPipelineState_WaitCompletion");
    pLVar10 = (LARGE_INTEGER *)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_bool___cdecl_FPipelineStateAsync::WaitCompletion(void)___ptr64'::
                          __l5::StatPtr_STAT_FPipelineState_WaitCompletion,*pFVar9,
                         L"STAT_FPipelineState_WaitCompletion","STATGROUP_Quick","STATCAT_Advanced",
                         L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  LVar12 = (LARGE_INTEGER)*(LARGE_INTEGER *)&pLVar10->s;
  bVar5 = false;
  bVar7 = false;
  if ((LVar12.s.LowPart == 0) && (LVar12.s.HighPart == 0)) {
LAB_145ccb233:
    bVar6 = false;
    LVar12._0_4_ = 0;
    LVar12._4_4_ = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.QuadPart = local_res8.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8.s,(char *)pLVar10[2]);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8 = LVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)pLVar10[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                   ,0x41c);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145ccb233;
    local_res8 = LVar12;
    FThreadStats::AddMessage((FName)LVar12.s,CycleScopeStart);
    bVar6 = true;
  }
  bVar4 = true;
  this_01 = FTaskGraphInterface::Get();
  LOCK();
  *(int *)(LVar8.QuadPart + 0x30) = *(int *)(LVar8.QuadPart + 0x30) + 1;
  UNLOCK();
  local_res8 = LVar8;
  FTaskGraphInterface::WaitUntilTaskCompletes
            (this_01,(TRefCountPtr<FBaseGraphTask> *)&local_res8.s,AnyNormalThreadNormalTask);
  if ((FName)local_res8.QuadPart != (FName)0x0) {
    LOCK();
    piVar1 = (int *)(local_res8.QuadPart + 0x30);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (*(code *)**(undefined8 **)local_res8)();
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && ((FName)LVar12.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_02 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_02 == (FThreadStats *)0x0) {
      this_03 = FThreadStatsPool::Get();
      this_02 = FThreadStatsPool::GetFromPool(this_03);
    }
    if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
      local_58.NameAndInfo.Index.Value = LVar12.s.LowPart;
      local_58.NameAndInfo.Number = LVar12.s.HighPart & 0xffff6fffU | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_58.StatData.Pad = (uchar  [8])(local_res8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_02,&local_58);
      piVar1 = &this_02->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_02,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
    }
  }
LAB_145ccb344:
  bVar7 = IsInParallelRHIThread();
  lVar13 = 0x20;
  if ((bVar7) || (lVar11 = 0x10, GEnablePSOAsyncCacheConsolidation == false)) {
    lVar11 = 0x20;
  }
  lVar11 = *(longlong *)
            ((longlong)&((FPipelineStateAsync *)(this->CompletionStates + -1))->_padding_ + lVar11);
  if ((lVar11 != 0) &&
     (this_00 = *(FAsyncTaskBase **)(lVar11 + 8), this_00 != (FAsyncTaskBase *)0x0)) {
    if ((bVar4 == false) && ((this_00->WorkNotFinishedCounter).Counter == 0)) {
      FAsyncTaskBase::SyncCompletion(this_00,false);
    }
    else {
      bVar4 = true;
    }
    FAsyncTaskBase::EnsureCompletion(this_00,true,false);
  }
  bVar7 = IsInParallelRHIThread();
  if ((bVar7) || (GEnablePSOAsyncCacheConsolidation == false)) {
    lVar11 = 0x20;
    lVar13 = 0x10;
  }
  else {
    lVar11 = 0x10;
  }
  puVar2 = (undefined8 *)
           ((longlong)&((FPipelineStateAsync *)(this->CompletionStates + -1))->_padding_ + lVar11);
  local_48 = 0;
  FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (puVar2 != &local_48) {
    *puVar2 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(puVar2 + 1),&FStack_40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_40.ReferenceController);
  bVar7 = IsInParallelRHIThread();
  if ((!bVar7) && (GEnablePSOAsyncCacheConsolidation == false)) {
    puVar2 = (undefined8 *)
             ((longlong)&((FPipelineStateAsync *)(this->CompletionStates + -1))->_padding_ + lVar13)
    ;
    local_38 = 0;
    FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (puVar2 != &local_38) {
      *puVar2 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)(puVar2 + 1),&FStack_30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_30.ReferenceController);
  }
  return bVar4;
}

