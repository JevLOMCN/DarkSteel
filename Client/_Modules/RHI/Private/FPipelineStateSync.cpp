// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 2

// ~FPipelineStateSync @ 145c8aa20

void __thiscall FPipelineStateSync::~FPipelineStateSync(FPipelineStateSync *this)

{
  undefined1 *puVar1;
  int iVar2;
  FBaseGraphTask *pFVar3;
  FPSOPrecacheAsyncTask *pFVar4;
  code *pcVar5;
  bool bVar6;
  
  this->_padding_ = (longlong)&___7FPipelineStateSync__6B_;
  pFVar3 = (this->CompletionEvent).Reference;
  if ((pFVar3 == (FBaseGraphTask *)0x0) || (pFVar3->field_0xd0 != '\0')) {
    pFVar4 = (this->PrecompileTask).Ptr;
    if (pFVar4 == (FPSOPrecacheAsyncTask *)0x0) goto LAB_145c8aa9a;
    if (((FThreadSafeCounter *)&pFVar4->_padding_)->Counter == 0) {
      FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)pFVar4,false);
      goto LAB_145c8aa9a;
    }
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsComplete()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                     ,0x439,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_145c8aa9a:
  bVar6 = WaitCompletion(this);
  if ((bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!WaitCompletion()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                         ,0x43a,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((this->PrecompileTask).Ptr != (FPSOPrecacheAsyncTask *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!PrecompileTask.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                         ,0x43b,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar4 = (this->PrecompileTask).Ptr;
  if (pFVar4 != (FPSOPrecacheAsyncTask *)0x0) {
    (**(code **)(pFVar4->_padding_ + 0x28))(pFVar4,1);
  }
  pFVar3 = (this->CompletionEvent).Reference;
  if (pFVar3 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &pFVar3->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
    }
  }
  return;
}

// WaitCompletion @ 145ccb4f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FPipelineStateSync::WaitCompletion(FPipelineStateSync *this)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  FBaseGraphTask *pFVar4;
  FPSOPrecacheAsyncTask *pFVar5;
  bool bVar6;
  FName *pFVar7;
  TStatIdData *pTVar8;
  FTaskGraphInterface *pFVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  bool bVar11;
  FNameEntryId FVar12;
  FName FVar13;
  FNameEntryId FVar14;
  bool bVar15;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  pFVar4 = (this->CompletionEvent).Reference;
  bVar11 = false;
  if ((pFVar4 != (FBaseGraphTask *)0x0) && (pFVar4->field_0xd0 == '\0')) {
    FVar14.Value = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_bool___cdecl_FPipelineStateSync::WaitCompletion(void)___ptr64'::__l5::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_bool___cdecl_FPipelineStateSync::WaitCompletion(void)___ptr64'
                             ::__l5::_thread_safe_static_guard_0__),
       `public:_bool___cdecl_FPipelineStateSync::WaitCompletion(void)___ptr64'::__l5::
       _thread_safe_static_guard_0__ == -1)) {
      _StatPtr_STAT_FPipelineState_WaitCompletion = (TStatIdData *)0x0;
      pFVar7 = ::FName::FName((FName *)&local_res8.s,"STAT_FPipelineState_WaitCompletion");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &`public:_bool___cdecl_FPipelineStateSync::WaitCompletion(void)___ptr64'::__l5::
                  StatPtr_STAT_FPipelineState_WaitCompletion,*pFVar7,
                 L"STAT_FPipelineState_WaitCompletion","STATGROUP_Quick","STATCAT_Advanced",L"Quick"
                 ,true,true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&`public:_bool___cdecl_FPipelineStateSync::WaitCompletion(void)___ptr64'::
                           __l5::_thread_safe_static_guard_0__);
    }
    pTVar8 = _StatPtr_STAT_FPipelineState_WaitCompletion;
    if (_StatPtr_STAT_FPipelineState_WaitCompletion == (TStatIdData *)0x0) {
      pFVar7 = ::FName::FName(&local_res10,"STAT_FPipelineState_WaitCompletion");
      pTVar8 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_bool___cdecl_FPipelineStateSync::WaitCompletion(void)___ptr64'::
                           __l5::StatPtr_STAT_FPipelineState_WaitCompletion,*pFVar7,
                          L"STAT_FPipelineState_WaitCompletion","STATGROUP_Quick","STATCAT_Advanced"
                          ,L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar13 = *(FName *)&pTVar8->Name;
    bVar6 = false;
    bVar11 = false;
    FVar12 = FVar13.ComparisonIndex.Value;
    uVar10 = FVar13.Number;
    if ((FVar12.Value == 0) && (uVar10 == 0)) {
      pFVar9 = FTaskGraphInterface::Get();
      FTaskGraphInterface::WaitUntilTaskCompletes
                (pFVar9,&this->CompletionEvent,AnyNormalThreadNormalTask);
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_res8.s.LowPart = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_res8.s,(pTVar8->StatDescriptionAnsi).Ptr);
        bVar6 = false;
        bVar11 = true;
        if (-1 < CpuChannel->Enabled) {
          local_res8.s.LowPart = FVar12.Value;
          local_res8.s.HighPart = uVar10;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    ((FName *)&local_res8.s,(pTVar8->StatDescriptionWide).Ptr,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                     ,0x44e);
          bVar6 = true;
          bVar11 = true;
        }
      }
      bVar15 = FThreadStats::bPrimaryEnable == false;
      if (bVar15) {
        FVar13.ComparisonIndex.Value = 0;
        FVar13.Number = 0;
      }
      else {
        local_res8.s.LowPart = FVar12.Value;
        local_res8.s.HighPart = uVar10;
        FThreadStats::AddMessage(FVar13,CycleScopeStart);
        FVar14.Value = FVar12.Value;
      }
      pFVar9 = FTaskGraphInterface::Get();
      FTaskGraphInterface::WaitUntilTaskCompletes
                (pFVar9,&this->CompletionEvent,AnyNormalThreadNormalTask);
      if (bVar11) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar6) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((!bVar15) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
          local_38.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
          local_38.NameAndInfo.Index.Value = FVar14.Value;
          QueryPerformanceCounter(&local_res8);
          local_38.StatData.Pad[4] = '\0';
          local_38.StatData.Pad[5] = '\0';
          local_38.StatData.Pad[6] = '\0';
          local_38.StatData.Pad[7] = '\0';
          local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
          local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
          local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
          local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(this_00,&local_38);
          piVar1 = &this_00->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(this_00,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_00,false,false);
          }
        }
      }
    }
    bVar11 = true;
  }
  pFVar4 = (this->CompletionEvent).Reference;
  if (pFVar4 != (FBaseGraphTask *)0x0) {
    (this->CompletionEvent).Reference = (FBaseGraphTask *)0x0;
    LOCK();
    puVar2 = &pFVar4->field_0x30;
    iVar3 = *(int *)puVar2;
    *(int *)puVar2 = *(int *)puVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (*(code *)**(undefined8 **)pFVar4)();
    }
  }
  pFVar5 = (this->PrecompileTask).Ptr;
  if (pFVar5 == (FPSOPrecacheAsyncTask *)0x0) {
    return bVar11;
  }
  if ((bVar11 == false) && (((FThreadSafeCounter *)&pFVar5->_padding_)->Counter == 0)) {
    FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)pFVar5,false);
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  FAsyncTaskBase::EnsureCompletion((FAsyncTaskBase *)(this->PrecompileTask).Ptr,true,false);
  pFVar5 = (this->PrecompileTask).Ptr;
  (this->PrecompileTask).Ptr = (FPSOPrecacheAsyncTask *)0x0;
  if (pFVar5 != (FPSOPrecacheAsyncTask *)0x0) {
    (**(code **)(pFVar5->_padding_ + 0x28))(pFVar5,1);
  }
  return bVar11;
}

