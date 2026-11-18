// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 2

// DoTask @ 147214020

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMassProcessorTask::DoTask
          (FMassProcessorTask *this,Type param_1,TRefCountPtr<FBaseGraphTask> *param_2)

{
  int *piVar1;
  FMassEntityManager *pFVar2;
  FMassCommandBuffer *this_00;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  DWORD DVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_Mass_DoTask> FVar14;
  FThreadSafeStaticStat<FStat_STAT_Mass_Total> FVar15;
  FThreadStats *pFVar16;
  FThreadStatsPool *pFVar17;
  FName FVar18;
  FName FVar19;
  FColor_u_0 local_res20 [2];
  FColor_u_0 local_e0 [2];
  FName local_d8;
  FName local_d0;
  FName local_c8;
  FName local_b8;
  TRawPtrProxy<FMassCommandBuffer> local_a8;
  TReferenceControllerBase<1> *local_a0;
  LARGE_INTEGER local_98;
  LARGE_INTEGER local_90;
  TSharedPtr<FMassCommandBuffer,1> local_88;
  FStatMessage local_78;
  FStatMessage local_68;
  FName local_58;
  FName local_50;
  FMassCommandBuffer *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  
  if ((this->Processor == (UMassProcessor *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Processor",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessor.cpp"
                         ,0x49,L"Expecting a valid processor to execute"), bVar9)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (`public:_void___cdecl_FMassProcessorTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
      ::__l2::__CsvProfilerStat76 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("MassProcessorTask");
    `public:_void___cdecl_FMassProcessorTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
    ::__l2::__CsvProfilerStat76 = true;
  }
  FCsvProfiler::BeginExclusiveStat("MassProcessorTask","CSV_MassProcessorTask");
  FVar14 = StatPtr_STAT_Mass_DoTask;
  if (StatPtr_STAT_Mass_DoTask == (FThreadSafeStaticStat<FStat_STAT_Mass_DoTask>)0x0) {
    pFVar13 = ::FName::FName(&local_58,"STAT_Mass_DoTask");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_Mass_DoTask>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Mass_DoTask,*pFVar13,
                        L"Mass Processor Task","STATGROUP_Mass","STATCAT_Advanced",L"Mass",true,true
                        ,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar14;
  bVar7 = false;
  bVar9 = false;
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  bVar4 = false;
  bVar8 = false;
  if ((FVar19.ComparisonIndex.Value.Value == 0) && (FVar19.Number == 0)) {
LAB_1472141c8:
    bVar7 = bVar4;
    bVar9 = bVar8;
    bVar8 = false;
    FVar19 = local_c8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar7 = false;
      bVar9 = true;
      bVar4 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d8.ComparisonIndex.Value = FVar19.ComparisonIndex.Value.Value;
        local_d8.Number = FVar19.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_d8,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessor.cpp"
                   ,0x4d);
        bVar7 = true;
        bVar9 = true;
        bVar4 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1472141c8;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar8 = true;
  }
  FVar15 = StatPtr_STAT_Mass_Total;
  if (StatPtr_STAT_Mass_Total == (FThreadSafeStaticStat<FStat_STAT_Mass_Total>)0x0) {
    pFVar13 = ::FName::FName(&local_50,"STAT_Mass_Total");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_Mass_Total>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Mass_Total,*pFVar13,
                        L"Mass Total Frame Time","STATGROUP_Mass","STATCAT_Advanced",L"Mass",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar15;
  bVar4 = false;
  bVar6 = false;
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  if ((FVar18.ComparisonIndex.Value.Value != 0) || (FVar18.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_e0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_e0[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d0.ComparisonIndex.Value = FVar18.ComparisonIndex.Value.Value;
        local_d0.Number = FVar18.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_d0,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessor.cpp"
                   ,0x4e);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar5 = true;
      goto LAB_1472142de;
    }
  }
  bVar5 = false;
  FVar18 = local_b8;
LAB_1472142de:
  if (((this->EntityManager).Object == (FMassEntityManager *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("EntityManager",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessor.cpp"
                          ,0x50,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->EntityManager).Object;
  LOCK();
  pFVar2->ProcessingScopeCount = (atomic<int>)((int)pFVar2->ProcessingScopeCount + 1);
  UNLOCK();
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_FMassProcessorTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId84,"Mass Processor Task",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessor.cpp"
               ,0x54);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_FMassProcessorTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId84);
  }
  if (this->bManageCommandBuffer == false) {
    UMassProcessor::CallExecute(this->Processor,pFVar2,&this->ExecutionContext);
  }
  else {
    this_00 = (this->ExecutionContext).DeferredCommandBuffer.Object;
    local_a0 = (this->ExecutionContext).DeferredCommandBuffer.SharedReferenceCount.
               ReferenceController;
    if (local_a0 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_a0->SharedReferenceCount = (atomic<int>)((int)local_a0->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_a8.Object = ::operator_new(0x60);
    if (local_a8.Object != (FMassCommandBuffer *)0x0) {
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)local_a8.Object,4000);
      *(undefined4 *)&((local_a8.Object)->PendingBatchCommandsDetector).field_0x0 = 0;
      ((local_a8.Object)->CommandInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      ((local_a8.Object)->CommandInstances).ArrayNum = 0;
      ((local_a8.Object)->CommandInstances).ArrayMax = 0;
      ((local_a8.Object)->AppendedCommandInstances).AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      ((local_a8.Object)->AppendedCommandInstances).ArrayNum = 0;
      ((local_a8.Object)->AppendedCommandInstances).ArrayMax = 0;
      (local_a8.Object)->ActiveCommandsCounter = 0;
      (local_a8.Object)->bIsFlushing = false;
      DVar12 = GetCurrentThreadId();
      (local_a8.Object)->OwnerThreadId = DVar12;
    }
    TSharedPtr<FMassCommandBuffer,1>::TSharedPtr<FMassCommandBuffer,1><FMassCommandBuffer>
              (&local_88,&local_a8);
    if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_48 = (this->ExecutionContext).DeferredCommandBuffer.Object;
    pTStack_40 = (this->ExecutionContext).DeferredCommandBuffer.SharedReferenceCount.
                 ReferenceController;
    (this->ExecutionContext).DeferredCommandBuffer.Object = local_88.Object;
    (this->ExecutionContext).DeferredCommandBuffer.SharedReferenceCount.ReferenceController =
         local_88.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
    UMassProcessor::CallExecute(this->Processor,pFVar2,&this->ExecutionContext);
    if ((this_00 == (FMassCommandBuffer *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FMassCommandBuffer::MoveAppend(this_00,(this->ExecutionContext).DeferredCommandBuffer.Object);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a0);
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  LOCK();
  pFVar2->ProcessingScopeCount = (atomic<int>)((int)pFVar2->ProcessingScopeCount + -1);
  UNLOCK();
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar16 == (FThreadStats *)0x0) {
      pFVar17 = FThreadStatsPool::Get();
      pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
    }
    if (pFVar16->bWaitForExplicitFlush < pFVar16->ScopeCount) {
      local_78.NameAndInfo.Index = FVar18.ComparisonIndex.Value;
      local_78.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_98);
      local_78.StatData.Pad[4] = '\0';
      local_78.StatData.Pad[5] = '\0';
      local_78.StatData.Pad[6] = '\0';
      local_78.StatData.Pad[7] = '\0';
      local_78.StatData.Pad[0] = local_98.s.LowPart._0_1_;
      local_78.StatData.Pad[1] = local_98.s.LowPart._1_1_;
      local_78.StatData.Pad[2] = local_98.s.LowPart._2_1_;
      local_78.StatData.Pad[3] = local_98.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar16,&local_78);
      piVar1 = &pFVar16->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar16,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar16,false,false);
      }
    }
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar8) && (FVar19 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar16 == (FThreadStats *)0x0) {
      pFVar17 = FThreadStatsPool::Get();
      pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
    }
    if (pFVar16->bWaitForExplicitFlush < pFVar16->ScopeCount) {
      local_68.NameAndInfo.Index = FVar19.ComparisonIndex.Value;
      local_68.NameAndInfo.Number = FVar19.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_90);
      local_68.StatData.Pad[4] = '\0';
      local_68.StatData.Pad[5] = '\0';
      local_68.StatData.Pad[6] = '\0';
      local_68.StatData.Pad[7] = '\0';
      local_68.StatData.Pad[0] = local_90.s.LowPart._0_1_;
      local_68.StatData.Pad[1] = local_90.s.LowPart._1_1_;
      local_68.StatData.Pad[2] = local_90.s.LowPart._2_1_;
      local_68.StatData.Pad[3] = local_90.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar16,&local_68);
      piVar1 = &pFVar16->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar16,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar16,false,false);
      }
    }
  }
  FCsvProfiler::EndExclusiveStat("MassProcessorTask");
  return;
}

// GetStatId @ 147227990

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __cdecl FMassProcessorTask::GetStatId(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FMassProcessorTask::GetStatId(void)_::_2_::FStat_FMassProcessorTask>
  FVar2;
  TStatIdData *in_RCX;
  FName local_res8;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_struct_TStatId___cdecl_FMassProcessorTask::GetStatId(void)'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_struct_TStatId___cdecl_FMassProcessorTask::GetStatId(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_struct_TStatId___cdecl_FMassProcessorTask::GetStatId(void)'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    `public:_static_struct_TStatId___cdecl_FMassProcessorTask::GetStatId(void)'::__l2::
    StatPtr_FMassProcessorTask =
         (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FMassProcessorTask::GetStatId(void)_::_2_::FStat_FMassProcessorTask>
          )0x0;
    pFVar1 = ::FName::FName(&local_res8,"FMassProcessorTask");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_struct_TStatId___cdecl_FMassProcessorTask::GetStatId(void)'::__l2::
                StatPtr_FMassProcessorTask,*pFVar1,L"FMassProcessorTask","STATGROUP_TaskGraphTasks",
               "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_static_struct_TStatId___cdecl_FMassProcessorTask::GetStatId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FVar2 = `public:_static_struct_TStatId___cdecl_FMassProcessorTask::GetStatId(void)'::__l2::
          StatPtr_FMassProcessorTask;
  if (`public:_static_struct_TStatId___cdecl_FMassProcessorTask::GetStatId(void)'::__l2::
      StatPtr_FMassProcessorTask ==
      (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FMassProcessorTask::GetStatId(void)_::_2_::FStat_FMassProcessorTask>
       )0x0) {
    pFVar1 = ::FName::FName(&local_res8,"FMassProcessorTask");
    FVar2 = (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FMassProcessorTask::GetStatId(void)_::_2_::FStat_FMassProcessorTask>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_static_struct_TStatId___cdecl_FMassProcessorTask::GetStatId(void)'
                          ::__l2::StatPtr_FMassProcessorTask,*pFVar1,L"FMassProcessorTask",
                         "STATGROUP_TaskGraphTasks","STATCAT_Advanced",L"Task Graph Tasks",true,true
                         ,ST_int64,true,false,MCR_Invalid);
  }
  in_RCX->Name = (TAtomic<FMinimalName>)FVar2;
  return (TStatId)in_RCX;
}

