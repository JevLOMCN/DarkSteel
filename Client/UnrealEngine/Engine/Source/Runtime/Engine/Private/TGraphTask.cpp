// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 66

// ExecuteTask @ 1475c59e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkinWeightProfilesData::ReleaseBuffer'::__l8::TSTR_ReleaseSkinSkinWeightProfilesDataBufferCommand508>_>'::__l2::<lambda_1>_>_>
::ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRHICommandListImmediate *pFVar10;
  undefined8 uVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar12;
  FName FVar13;
  FNameEntryId FVar14;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_58;
  FStatMessage local_48;
  
  if (this != (void *)0x0) {
    LOCK();
    *(int *)((longlong)this + 0x30) = *(int *)((longlong)this + 0x30) + 1;
    UNLOCK();
  }
  bVar5 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  pFVar3 = *(FName **)(*(longlong *)((longlong)this + 0xe0) + 8);
  FVar13 = *pFVar3;
  FVar14 = FVar13.ComparisonIndex.Value;
  uVar9 = FVar13.Number;
  if ((FVar14.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar3[2]);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar14.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar3[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar14.Value;
      local_res18[0]._4_4_ = uVar9;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_1475c5ad0;
    }
  }
  bVar6 = false;
  FVar13 = local_58;
LAB_1475c5ad0:
  if ((GIsThreadedRendering != false) &&
     (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                       ,0x21d,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId562,(wchar_t *)**(undefined8 **)((longlong)this + 0xe0),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x232);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId562);
  }
  pFVar10 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0xf0));
  pcVar4 = *(code **)((longlong)this + 0xf0);
  plVar12 = (longlong *)((longlong)this + 0x100);
  if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
    plVar12 = *(longlong **)((longlong)this + 0x118);
  }
  uVar11 = (**(code **)(*plVar12 + 8))();
  (*pcVar4)(uVar11,pFVar10);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res18[0]._0_1_;
      local_48.StatData.Pad[1] = local_res18[0]._1_1_;
      local_48.StatData.Pad[2] = local_res18[0]._2_1_;
      local_48.StatData.Pad[3] = local_res18[0]._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
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
  if (*(longlong *)((longlong)this + 0xf0) != 0) {
    plVar12 = (longlong *)((longlong)this + 0x100);
    if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
      plVar12 = *(longlong **)((longlong)this + 0x118);
    }
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  if (this != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)this + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)this)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 1475c5ce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkinWeightProfilesData::ReleaseResources'::__l8::TSTR_ReleaseSkinSkinWeightProfilesDataBufferCommand539>_>'::__l2::<lambda_1>_>_>
::ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRHICommandListImmediate *pFVar10;
  undefined8 uVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar12;
  FName FVar13;
  FNameEntryId FVar14;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_58;
  FStatMessage local_48;
  
  if (this != (void *)0x0) {
    LOCK();
    *(int *)((longlong)this + 0x30) = *(int *)((longlong)this + 0x30) + 1;
    UNLOCK();
  }
  bVar5 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  pFVar3 = *(FName **)(*(longlong *)((longlong)this + 0xe0) + 8);
  FVar13 = *pFVar3;
  FVar14 = FVar13.ComparisonIndex.Value;
  uVar9 = FVar13.Number;
  if ((FVar14.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar3[2]);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar14.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar3[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar14.Value;
      local_res18[0]._4_4_ = uVar9;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_1475c5dd0;
    }
  }
  bVar6 = false;
  FVar13 = local_58;
LAB_1475c5dd0:
  if ((GIsThreadedRendering != false) &&
     (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                       ,0x21d,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId562,(wchar_t *)**(undefined8 **)((longlong)this + 0xe0),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x232);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId562);
  }
  pFVar10 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0xf0));
  pcVar4 = *(code **)((longlong)this + 0xf0);
  plVar12 = (longlong *)((longlong)this + 0x100);
  if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
    plVar12 = *(longlong **)((longlong)this + 0x118);
  }
  uVar11 = (**(code **)(*plVar12 + 8))();
  (*pcVar4)(uVar11,pFVar10);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res18[0]._0_1_;
      local_48.StatData.Pad[1] = local_res18[0]._1_1_;
      local_48.StatData.Pad[2] = local_res18[0]._2_1_;
      local_48.StatData.Pad[3] = local_res18[0]._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
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
  if (*(longlong *)((longlong)this + 0xf0) != 0) {
    plVar12 = (longlong *)((longlong)this + 0x100);
    if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
      plVar12 = *(longlong **)((longlong)this + 0x118);
    }
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  if (this != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)this + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)this)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 1475c5fe0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FSkinWeightProfileManagerAsyncTask>::ExecuteTask
          (TGraphTask<FSkinWeightProfileManagerAsyncTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  TConsoleVariableData<int> *pTVar6;
  bool bVar7;
  FName *pFVar8;
  TStatIdData *pTVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  Type TVar11;
  FNameEntryId FVar12;
  FName FVar13;
  longlong lVar14;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FName local_38;
  FStatMessage local_28;
  
  if (this != (TGraphTask<FSkinWeightProfileManagerAsyncTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  lVar14 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_struct_TStatId___cdecl_FSkinWeightProfileManagerAsyncTask::GetStatId(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_struct_TStatId___cdecl_FSkinWeightProfileManagerAsyncTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_struct_TStatId___cdecl_FSkinWeightProfileManagerAsyncTask::GetStatId(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_FSkinWeightProfileManagerAsyncTask = (TStatIdData *)0x0;
    pFVar8 = ::FName::FName((FName *)&local_res8.s,"FSkinWeightProfileManagerAsyncTask");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_struct_TStatId___cdecl_FSkinWeightProfileManagerAsyncTask::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_FSkinWeightProfileManagerAsyncTask,*pFVar8,
               L"FSkinWeightProfileManagerAsyncTask","STATGROUP_TaskGraphTasks","STATCAT_Advanced",
               L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_struct_TStatId___cdecl_FSkinWeightProfileManagerAsyncTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar9 = _StatPtr_FSkinWeightProfileManagerAsyncTask;
  if (_StatPtr_FSkinWeightProfileManagerAsyncTask == (TStatIdData *)0x0) {
    pFVar8 = ::FName::FName(&local_res10,"FSkinWeightProfileManagerAsyncTask");
    pTVar9 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_FSkinWeightProfileManagerAsyncTask::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_FSkinWeightProfileManagerAsyncTask,*pFVar8,
                        L"FSkinWeightProfileManagerAsyncTask","STATGROUP_TaskGraphTasks",
                        "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar13 = *(FName *)&pTVar9->Name;
  bVar3 = false;
  bVar5 = false;
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar10 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(pTVar9->StatDescriptionAnsi).Ptr);
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar12.Value;
        local_res8.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(pTVar9->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = FVar12.Value;
      local_res8.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar4 = true;
      goto LAB_1475c616a;
    }
  }
  bVar4 = false;
  FVar13 = local_38;
LAB_1475c616a:
  pTVar6 = CVarForceSkinWeightProfileManagerAsyncTaskOnGT.Ref;
  bVar7 = IsInParallelGameThread();
  if ((!bVar7) && (bVar7 = IsInGameThread(), !bVar7)) {
    lVar14 = 4;
  }
  TVar11 = GameThread;
  if (*(int *)((longlong)pTVar6->ShadowedValue + lVar14) == 0) {
    TVar11 = AnyBackgroundHiPriTask;
  }
  FSkinWeightProfileManagerAsyncTask::DoTask
            ((FSkinWeightProfileManagerAsyncTask *)&this->TaskStorage,TVar11,
             (TRefCountPtr<FBaseGraphTask> *)&local_res8.s);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_28.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_28.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_28.StatData.Pad[4] = '\0';
      local_28.StatData.Pad[5] = '\0';
      local_28.StatData.Pad[6] = '\0';
      local_28.StatData.Pad[7] = '\0';
      local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_28);
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
  if (this != (TGraphTask<FSkinWeightProfileManagerAsyncTask> *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar14 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14781f770

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<`anonymous_namespace'::FAsyncTraceTask>::ExecuteTask
          (TGraphTask<_anonymous_namespace_::FAsyncTraceTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  FName FVar3;
  FTraceDatum *pFVar4;
  FOverlapDatum *pFVar5;
  int iVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl__anonymous_namespace_::FAsyncTraceTask::GetStatId(void)_::_2_::FStat_FAsyncTraceTask>
  FVar14;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_58;
  FName local_50;
  FStatMessage local_40;
  
  if (this != (TGraphTask<_anonymous_namespace_::FAsyncTraceTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < `FAsyncTraceTask::GetStatId'::`2'::_TSS0) &&
     (_Init_thread_header(&`FAsyncTraceTask::GetStatId'::`2'::_TSS0),
     `FAsyncTraceTask::GetStatId'::`2'::_TSS0 == -1)) {
    `FAsyncTraceTask::GetStatId'::`2'::StatPtr_FAsyncTraceTask =
         (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl__anonymous_namespace_::FAsyncTraceTask::GetStatId(void)_::_2_::FStat_FAsyncTraceTask>
          )0x0;
    pFVar13 = ::FName::FName(&local_res20,"FAsyncTraceTask");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`FAsyncTraceTask::GetStatId'::`2'::StatPtr_FAsyncTraceTask,*pFVar13,
               L"FAsyncTraceTask","STATGROUP_TaskGraphTasks","STATCAT_Advanced",L"Task Graph Tasks",
               true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`FAsyncTraceTask::GetStatId'::`2'::_TSS0);
  }
  FVar14 = `FAsyncTraceTask::GetStatId'::`2'::StatPtr_FAsyncTraceTask;
  if (`FAsyncTraceTask::GetStatId'::`2'::StatPtr_FAsyncTraceTask ==
      (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl__anonymous_namespace_::FAsyncTraceTask::GetStatId(void)_::_2_::FStat_FAsyncTraceTask>
       )0x0) {
    pFVar13 = ::FName::FName(&local_58,"FAsyncTraceTask");
    FVar14 = (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl__anonymous_namespace_::FAsyncTraceTask::GetStatId(void)_::_2_::FStat_FAsyncTraceTask>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`FAsyncTraceTask::GetStatId'::`2'::StatPtr_FAsyncTraceTask,*pFVar13,
                          L"FAsyncTraceTask","STATGROUP_TaskGraphTasks","STATCAT_Advanced",
                          L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar3 = *(FName *)FVar14;
  bVar9 = false;
  bVar8 = false;
  bVar10 = false;
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  FVar16 = FVar3.ComparisonIndex.Value;
  uVar15 = FVar3.Number;
  if ((FVar16.Value != 0) || (uVar15 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar16.Value;
        local_res10.Number = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    bVar9 = false;
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18.s.LowPart = FVar16.Value;
      local_res18.s.HighPart = uVar15;
      local_50 = FVar3;
      FThreadStats::AddMessage(FVar3,CycleScopeStart);
      bVar9 = true;
    }
  }
  iVar6 = ENamedThreads::bHasHighPriorityThreads;
  if (((CPrio_FAsyncTraceTask.ThreadPriority == HighThreadPriority) ||
      (iVar6 = ENamedThreads::bHasBackgroundThreads,
      CPrio_FAsyncTraceTask.ThreadPriority == BackgroundThreadPriority)) && (iVar6 == 0)) {
    if (((CPrio_FAsyncTraceTask.TaskPriorityIfForcedToNormalThreadPriority & ~HighTaskPriority) !=
         MainQueue) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("!(ThreadAndIndex & ~ThreadIndexMask) && !(TaskPriority & ~TaskPriorityMask)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                            ,0xcd,L""), bVar12)) goto code_r0x00014781f999;
  }
  else if ((((CPrio_FAsyncTraceTask.ThreadPriority & ~ThreadPriorityMask) != MainQueue ||
             (CPrio_FAsyncTraceTask.ThreadPriority & ThreadPriorityMask) == ThreadPriorityMask) ||
           ((CPrio_FAsyncTraceTask.TaskPriority & ~HighTaskPriority) != MainQueue)) &&
          (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("!(ThreadAndIndex & ~ThreadIndexMask) && !(ThreadPriority & ~ThreadPriorityMask) && (ThreadPriority & ThreadPriorityMask) != ThreadPriorityMask && !(TaskPriority & ~TaskPriorityMask)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                               ,0xb1,L""), bVar12)) {
code_r0x00014781f999:
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar4 = *(FTraceDatum **)(this->TaskStorage).Pad;
  if (pFVar4 == (FTraceDatum *)0x0) {
    pFVar5 = *(FOverlapDatum **)((this->TaskStorage).Pad + 8);
    if (pFVar5 != (FOverlapDatum *)0x0) {
      ::`anonymous_namespace'::RunTraceTask(pFVar5,*(int *)((this->TaskStorage).Pad + 0x10));
    }
  }
  else {
    ::`anonymous_namespace'::RunTraceTask(pFVar4,*(int *)((this->TaskStorage).Pad + 0x10));
  }
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FVar3 = local_50;
  if (((bVar9) && (local_50 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_40.NameAndInfo.Index = FVar3.ComparisonIndex.Value;
      local_40.NameAndInfo.Number = FVar3.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_40.StatData.Pad[4] = '\0';
      local_40.StatData.Pad[5] = '\0';
      local_40.StatData.Pad[6] = '\0';
      local_40.StatData.Pad[7] = '\0';
      local_40.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_40.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_40.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_40.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_40);
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
  if (this != (TGraphTask<_anonymous_namespace_::FAsyncTraceTask> *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 1478cc540

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TGraphTask<`UDecalComponent::PrecachePSOs'::__l11::FPSODecalPrecacheFinishedTask>::ExecuteTask
          (void *this)

{
  int *piVar1;
  UActorComponent **ppUVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  UActorComponent *this_00;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar8;
  TAtomic<FMinimalName> TVar9;
  bool bVar10;
  LARGE_INTEGER local_res8;
  TAtomic<FMinimalName> local_38;
  FStatMessage local_28;
  
  if (this != (void *)0x0) {
    LOCK();
    *(int *)((longlong)this + 0x30) = *(int *)((longlong)this + 0x30) + 1;
    UNLOCK();
  }
  TVar9 = TStatId::TStatId_NAME_None.Name;
  bVar4 = false;
  bVar6 = false;
  local_38 = (TAtomic<FMinimalName>)0x0;
  uVar8 = TStatId::TStatId_NAME_None.Name._0_4_;
  iVar7 = TStatId::TStatId_NAME_None.Name._4_4_;
  if ((uVar8 != 0) || (iVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,TStatId::TStatId_NAME_None.StatDescriptionAnsi.Ptr);
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = uVar8;
        local_res8.s.HighPart = iVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,TStatId::TStatId_NAME_None.StatDescriptionWide.Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = uVar8;
      local_res8.s.HighPart = iVar7;
      FThreadStats::AddMessage((FName)TVar9,CycleScopeStart);
      bVar5 = true;
      goto LAB_1478cc627;
    }
  }
  bVar5 = false;
  TVar9 = local_38;
  uVar8 = 0;
LAB_1478cc627:
  this_00 = (UActorComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0xd8));
  if (this_00 != (UActorComponent *)0x0) {
    iVar7 = *(int *)&this_00[3].PrimaryComponentTick.Target;
    do {
      if (*(int *)((longlong)this + 0xe0) <= iVar7) break;
      ppUVar2 = &this_00[3].PrimaryComponentTick.Target;
      LOCK();
      iVar3 = *(int *)ppUVar2;
      bVar10 = iVar7 == iVar3;
      if (bVar10) {
        *(int *)ppUVar2 = *(int *)((longlong)this + 0xe0);
        iVar3 = iVar7;
      }
      iVar7 = iVar3;
      UNLOCK();
    } while (!bVar10);
    UActorComponent::MarkRenderStateDirty(this_00);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (TVar9 != (TAtomic<FMinimalName>)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_28.NameAndInfo.Number = TVar9._4_4_ & 0xffff6fff | 0x6000;
      local_28.NameAndInfo.Index.Value = uVar8;
      QueryPerformanceCounter(&local_res8);
      local_28.StatData.Pad[4] = '\0';
      local_28.StatData.Pad[5] = '\0';
      local_28.StatData.Pad[6] = '\0';
      local_28.StatData.Pad[7] = '\0';
      local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_28);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  if (this != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)this + 0x30);
    iVar7 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar7 == 1) {
      (*(code *)**(undefined8 **)this)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 1478cc770

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FPSOPrecacheFinishedTask>::ExecuteTask(TGraphTask<FPSOPrecacheFinishedTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  int iVar8;
  TAtomic<FMinimalName> TVar9;
  LARGE_INTEGER local_res8;
  FStatMessage local_18;
  
  if (this != (TGraphTask<FPSOPrecacheFinishedTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  TVar9 = TStatId::TStatId_NAME_None.Name;
  bVar3 = false;
  bVar5 = false;
  uVar7 = TStatId::TStatId_NAME_None.Name._0_4_;
  iVar8 = TStatId::TStatId_NAME_None.Name._4_4_;
  if ((uVar7 == 0) && (iVar8 == 0)) {
    FPSOPrecacheFinishedTask::DoTask
              ((FPSOPrecacheFinishedTask *)&this->TaskStorage,GameThread,
               (TRefCountPtr<FBaseGraphTask> *)&local_res8.s);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,TStatId::TStatId_NAME_None.StatDescriptionAnsi.Ptr);
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = uVar7;
        local_res8.s.HighPart = iVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,TStatId::TStatId_NAME_None.StatDescriptionWide.Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar3 = true;
        bVar5 = true;
      }
    }
    bVar4 = false;
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = uVar7;
      local_res8.s.HighPart = iVar8;
      FThreadStats::AddMessage((FName)TVar9,CycleScopeStart);
      bVar4 = true;
    }
    else {
      TVar9 = (TAtomic<FMinimalName>)0x0;
      uVar7 = 0;
    }
    FPSOPrecacheFinishedTask::DoTask
              ((FPSOPrecacheFinishedTask *)&this->TaskStorage,GameThread,
               (TRefCountPtr<FBaseGraphTask> *)&local_res8.s);
    if (bVar5) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar4) && (TVar9 != (TAtomic<FMinimalName>)0x0)) &&
        (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_18.NameAndInfo.Number = TVar9._4_4_ & 0xffff6fff | 0x6000;
        local_18.NameAndInfo.Index.Value = uVar7;
        QueryPerformanceCounter(&local_res8);
        local_18.StatData.Pad[4] = '\0';
        local_18.StatData.Pad[5] = '\0';
        local_18.StatData.Pad[6] = '\0';
        local_18.StatData.Pad[7] = '\0';
        local_18.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
        local_18.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
        local_18.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
        local_18.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_18);
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
  if (this != (TGraphTask<FPSOPrecacheFinishedTask> *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 147941f90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FParallelAnimationCompletionTask>::ExecuteTask
          (TGraphTask<FParallelAnimationCompletionTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  FName *pFVar7;
  TStatIdData *pTVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  Type TVar10;
  FNameEntryId FVar11;
  FName FVar12;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FName local_38;
  FStatMessage local_28;
  
  if (this != (TGraphTask<FParallelAnimationCompletionTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_TStatId___cdecl_FParallelAnimationCompletionTask::GetStatId(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_TStatId___cdecl_FParallelAnimationCompletionTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_TStatId___cdecl_FParallelAnimationCompletionTask::GetStatId(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`FParallelAnimationCompletionTask::GetStatId'::__l2::FStat_FParallelAnimationCompletionTask>
      ::
      FThreadSafeStaticStat<_FParallelAnimationCompletionTask::GetStatId_::__l2::FStat_FParallelAnimationCompletionTask>
                (&`public:_struct_TStatId___cdecl_FParallelAnimationCompletionTask::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_FParallelAnimationCompletionTask);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_FParallelAnimationCompletionTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar8 = _StatPtr_FParallelAnimationCompletionTask;
  if (_StatPtr_FParallelAnimationCompletionTask == (TStatIdData *)0x0) {
    pFVar7 = ::FName::FName(&local_res10,"FParallelAnimationCompletionTask");
    pTVar8 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_FParallelAnimationCompletionTask::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_FParallelAnimationCompletionTask,*pFVar7,
                        L"FParallelAnimationCompletionTask","STATGROUP_TaskGraphTasks",
                        "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar12 = *(FName *)&pTVar8->Name;
  bVar3 = false;
  bVar5 = false;
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar9 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(pTVar8->StatDescriptionAnsi).Ptr);
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar11.Value;
        local_res8.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(pTVar8->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = FVar11.Value;
      local_res8.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar4 = true;
      goto LAB_147942123;
    }
  }
  bVar4 = false;
  FVar12 = local_38;
  FVar11.Value = 0;
LAB_147942123:
  TVar10 = GameThread;
  if (GParallelAnimCompletionTaskHighPriority != false) {
    TVar10 = HighTaskPriority|GameThread;
  }
  FParallelAnimationCompletionTask::DoTask
            ((FParallelAnimationCompletionTask *)&this->TaskStorage,TVar10,
             (TRefCountPtr<FBaseGraphTask> *)&local_res8.s);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_28.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      local_28.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res8);
      local_28.StatData.Pad[4] = '\0';
      local_28.StatData.Pad[5] = '\0';
      local_28.StatData.Pad[6] = '\0';
      local_28.StatData.Pad[7] = '\0';
      local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_28);
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
  if (this != (TGraphTask<FParallelAnimationCompletionTask> *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 1479422a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FParallelAnimationEvaluationTask>::ExecuteTask
          (TGraphTask<FParallelAnimationEvaluationTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  Type TVar9;
  Type TVar10;
  bool bVar11;
  FName *pFVar12;
  TStatIdData *pTVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar14;
  Type TVar15;
  FNameEntryId FVar16;
  FName FVar17;
  FColor_u_0 local_res8 [2];
  TRefCountPtr<FBaseGraphTask> local_res10;
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_68;
  FName local_60;
  FStatMessage local_50 [2];
  
  if (this != (TGraphTask<FParallelAnimationEvaluationTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  local_res10.Reference = (FBaseGraphTask *)this;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_struct_TStatId___cdecl_FParallelAnimationEvaluationTask::GetStatId(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_struct_TStatId___cdecl_FParallelAnimationEvaluationTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_struct_TStatId___cdecl_FParallelAnimationEvaluationTask::GetStatId(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FThreadSafeStaticStat<`FParallelAnimationEvaluationTask::GetStatId'::__l2::FStat_FParallelAnimationEvaluationTask>
    ::
    FThreadSafeStaticStat<_FParallelAnimationEvaluationTask::GetStatId_::__l2::FStat_FParallelAnimationEvaluationTask>
              (&`public:_struct_TStatId___cdecl_FParallelAnimationEvaluationTask::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_FParallelAnimationEvaluationTask);
    _Init_thread_footer(&`public:_struct_TStatId___cdecl_FParallelAnimationEvaluationTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar13 = _StatPtr_FParallelAnimationEvaluationTask;
  if (_StatPtr_FParallelAnimationEvaluationTask == (TStatIdData *)0x0) {
    pFVar12 = ::FName::FName(&local_68,"FParallelAnimationEvaluationTask");
    pTVar13 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_struct_TStatId___cdecl_FParallelAnimationEvaluationTask::GetStatId(void)const___ptr64'
                          ::__l2::StatPtr_FParallelAnimationEvaluationTask,*pFVar12,
                         L"FParallelAnimationEvaluationTask","STATGROUP_TaskGraphTasks",
                         "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  FVar17 = *(FName *)&pTVar13->Name;
  bVar5 = false;
  bVar7 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FVar16 = FVar17.ComparisonIndex.Value;
  uVar14 = FVar17.Number;
  if ((FVar16.Value != 0) || (uVar14 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(pTVar13->StatDescriptionAnsi).Ptr);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar16.Value;
        local_res18.Number = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(pTVar13->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res20.s.LowPart = FVar16.Value;
      local_res20.s.HighPart = uVar14;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar6 = true;
      goto LAB_147942431;
    }
  }
  bVar6 = false;
  FVar17 = local_60;
LAB_147942431:
  TVar15 = CPrio_ParallelAnimationEvaluationTask.TaskPriorityIfForcedToNormalThreadPriority;
  TVar10 = CPrio_ParallelAnimationEvaluationTask.TaskPriority;
  TVar9 = CPrio_ParallelAnimationEvaluationTask.ThreadPriority;
  iVar3 = ENamedThreads::bHasHighPriorityThreads;
  if (((CPrio_ParallelAnimationEvaluationTask.ThreadPriority == HighThreadPriority) ||
      (iVar3 = ENamedThreads::bHasBackgroundThreads,
      CPrio_ParallelAnimationEvaluationTask.ThreadPriority == BackgroundThreadPriority)) &&
     (iVar3 == 0)) {
    if (((CPrio_ParallelAnimationEvaluationTask.TaskPriorityIfForcedToNormalThreadPriority &
         ~HighTaskPriority) != MainQueue) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("!(ThreadAndIndex & ~ThreadIndexMask) && !(TaskPriority & ~TaskPriorityMask)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                            ,0xcd,L""), bVar11)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    if ((((CPrio_ParallelAnimationEvaluationTask.ThreadPriority & ~ThreadPriorityMask) != MainQueue
          || (CPrio_ParallelAnimationEvaluationTask.ThreadPriority & ThreadPriorityMask) ==
             ThreadPriorityMask) ||
        ((CPrio_ParallelAnimationEvaluationTask.TaskPriority & ~HighTaskPriority) != MainQueue)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("!(ThreadAndIndex & ~ThreadIndexMask) && !(ThreadPriority & ~ThreadPriorityMask) && (ThreadPriority & ThreadPriorityMask) != ThreadPriorityMask && !(TaskPriority & ~TaskPriorityMask)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                            ,0xb1,L""), bVar11)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TVar15 = TVar9 | TVar10;
  }
  FParallelAnimationEvaluationTask::DoTask
            ((FParallelAnimationEvaluationTask *)&this->TaskStorage,
             TVar15 | AnyNormalThreadNormalTask,&local_res10);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar17 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_50[0].NameAndInfo.Index = FVar17.ComparisonIndex.Value;
      local_50[0].NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_50[0].StatData.Pad[4] = '\0';
      local_50[0].StatData.Pad[5] = '\0';
      local_50[0].StatData.Pad[6] = '\0';
      local_50[0].StatData.Pad[7] = '\0';
      local_50[0].StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_50[0].StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_50[0].StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_50[0].StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_50);
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
  if (this != (TGraphTask<FParallelAnimationEvaluationTask> *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 147c4fb30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FGPUSkinCache::CVarSinkFunction'::__l37::TSTR_DoEnableSkinCaching2564>_>'::__l2::<lambda_1>_>_>
::ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRHICommandListImmediate *pFVar10;
  undefined8 uVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar12;
  FName FVar13;
  FNameEntryId FVar14;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_58;
  FStatMessage local_48;
  
  if (this != (void *)0x0) {
    LOCK();
    *(int *)((longlong)this + 0x30) = *(int *)((longlong)this + 0x30) + 1;
    UNLOCK();
  }
  bVar5 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  pFVar3 = *(FName **)(*(longlong *)((longlong)this + 0xe0) + 8);
  FVar13 = *pFVar3;
  FVar14 = FVar13.ComparisonIndex.Value;
  uVar9 = FVar13.Number;
  if ((FVar14.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar3[2]);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar14.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar3[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar14.Value;
      local_res18[0]._4_4_ = uVar9;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_147c4fc20;
    }
  }
  bVar6 = false;
  FVar13 = local_58;
LAB_147c4fc20:
  if ((GIsThreadedRendering != false) &&
     (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                       ,0x21d,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId562,(wchar_t *)**(undefined8 **)((longlong)this + 0xe0),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x232);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId562);
  }
  pFVar10 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0xf0));
  pcVar4 = *(code **)((longlong)this + 0xf0);
  plVar12 = (longlong *)((longlong)this + 0x100);
  if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
    plVar12 = *(longlong **)((longlong)this + 0x118);
  }
  uVar11 = (**(code **)(*plVar12 + 8))();
  (*pcVar4)(uVar11,pFVar10);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res18[0]._0_1_;
      local_48.StatData.Pad[1] = local_res18[0]._1_1_;
      local_48.StatData.Pad[2] = local_res18[0]._2_1_;
      local_48.StatData.Pad[3] = local_res18[0]._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
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
  if (*(longlong *)((longlong)this + 0xf0) != 0) {
    plVar12 = (longlong *)((longlong)this + 0x100);
    if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
      plVar12 = *(longlong **)((longlong)this + 0x118);
    }
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  if (this != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)this + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)this)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 147cf35f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall TGraphTask<FDelegateGraphTask>::ExecuteTask(TGraphTask<FDelegateGraphTask> *this)

{
  int *piVar1;
  TDelegateBase<FNotThreadSafeDelegateMode> *this_00;
  undefined4 uVar2;
  FName *pFVar3;
  longlong *plVar4;
  void *pvVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  longlong lVar9;
  uint uVar10;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FName FVar11;
  FNameEntryId FVar12;
  LARGE_INTEGER local_res8;
  TGraphTask<FDelegateGraphTask> *local_res10;
  FName local_58;
  undefined1 local_48 [12];
  uint local_3c;
  
  if (this != (TGraphTask<FDelegateGraphTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  pFVar3 = *(FName **)(this->TaskStorage).Pad;
  bVar6 = false;
  bVar8 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar11 = *pFVar3;
  FVar12 = FVar11.ComparisonIndex.Value;
  uVar10 = FVar11.Number;
  local_res10 = this;
  if ((FVar12.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8.s,(char *)pFVar3[2]);
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar12.Value;
        local_res8.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)pFVar3[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = FVar12.Value;
      local_res8.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar7 = true;
      goto LAB_147cf36f2;
    }
  }
  bVar7 = false;
  FVar11 = local_58;
  FVar12.Value = 0;
LAB_147cf36f2:
  uVar2 = *(undefined4 *)((this->TaskStorage).Pad + 0x20);
  this_00 = (TDelegateBase<FNotThreadSafeDelegateMode> *)((this->TaskStorage).Pad + 8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FReadAccessScope *)local_48);
  if ((*(int *)((this->TaskStorage).Pad + 0x18) != 0) &&
     (plVar4 = *(longlong **)((this->TaskStorage).Pad + 0x10), plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x68))(plVar4,uVar2);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)local_48);
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_3c = FVar11.Number & 0xffff6fff | 0x6000;
      local_48._8_4_ = FVar12.Value;
      QueryPerformanceCounter(&local_res8);
      local_48[4] = '\0';
      local_48[5] = '\0';
      local_48[6] = '\0';
      local_48[7] = '\0';
      local_48[0] = local_res8.s.LowPart._0_1_;
      local_48[1] = local_res8.s.LowPart._1_1_;
      local_48[2] = local_res8.s.LowPart._2_1_;
      local_48[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,(FStatMessage *)local_48);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this_00);
  pvVar5 = *(void **)((this->TaskStorage).Pad + 0x10);
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  if (local_res10 != (TGraphTask<FDelegateGraphTask> *)0x0) {
    LOCK();
    plVar4 = &local_res10->_padding_;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if (((int)lVar9 == 1) && (local_res10 != (TGraphTask<FDelegateGraphTask> *)0x0)) {
      (**(code **)local_res10->_padding_)(local_res10,1);
    }
  }
  return;
}

// ExecuteTask @ 148172700

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<`UFXSystemAsset::LaunchPSOPrecaching'::__l8::FReleasePrecachePSOsEventTask>::ExecuteTask
          (void *this)

{
  int *piVar1;
  undefined8 *puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  UObject *pUVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  int iVar8;
  TAtomic<FMinimalName> TVar9;
  LARGE_INTEGER local_res8;
  TAtomic<FMinimalName> local_38;
  FStatMessage local_28;
  
  if (this != (void *)0x0) {
    LOCK();
    *(int *)((longlong)this + 0x30) = *(int *)((longlong)this + 0x30) + 1;
    UNLOCK();
  }
  TVar9 = TStatId::TStatId_NAME_None.Name;
  bVar3 = false;
  bVar5 = false;
  local_38 = (TAtomic<FMinimalName>)0x0;
  uVar7 = TStatId::TStatId_NAME_None.Name._0_4_;
  iVar8 = TStatId::TStatId_NAME_None.Name._4_4_;
  if ((uVar7 != 0) || (iVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,TStatId::TStatId_NAME_None.StatDescriptionAnsi.Ptr);
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = uVar7;
        local_res8.s.HighPart = iVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,TStatId::TStatId_NAME_None.StatDescriptionWide.Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = uVar7;
      local_res8.s.HighPart = iVar8;
      FThreadStats::AddMessage((FName)TVar9,CycleScopeStart);
      bVar4 = true;
      goto LAB_1481727e7;
    }
  }
  bVar4 = false;
  TVar9 = local_38;
  uVar7 = 0;
LAB_1481727e7:
  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0xd8));
  if ((pUVar6 != (UObject *)0x0) &&
     (puVar2 = *(undefined8 **)&pUVar6[1].field_0x18, puVar2 != (undefined8 *)0x0)) {
    *(undefined8 *)&pUVar6[1].field_0x18 = 0;
    LOCK();
    piVar1 = (int *)(puVar2 + 6);
    iVar8 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (TVar9 != (TAtomic<FMinimalName>)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_28.NameAndInfo.Number = TVar9._4_4_ & 0xffff6fff | 0x6000;
      local_28.NameAndInfo.Index.Value = uVar7;
      QueryPerformanceCounter(&local_res8);
      local_28.StatData.Pad[4] = '\0';
      local_28.StatData.Pad[5] = '\0';
      local_28.StatData.Pad[6] = '\0';
      local_28.StatData.Pad[7] = '\0';
      local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_28);
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
  if (this != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)this + 0x30);
    iVar8 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (*(code *)**(undefined8 **)this)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 148172930

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FDispatchBatchedAsyncTasks>::ExecuteTask(TGraphTask<FDispatchBatchedAsyncTasks> *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  FTaskBase *this_00;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  FName *pFVar11;
  TStatIdData *pTVar12;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_58;
  FStatMessage local_48;
  
  if (this != (TGraphTask<FDispatchBatchedAsyncTasks> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_TStatId___cdecl_FDispatchBatchedAsyncTasks::GetStatId(void)const___ptr64'::
      __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_TStatId___cdecl_FDispatchBatchedAsyncTasks::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_TStatId___cdecl_FDispatchBatchedAsyncTasks::GetStatId(void)const___ptr64'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`FDispatchBatchedAsyncTasks::GetStatId'::__l2::FStat_FDispatchBatchedAsyncTasks>
      ::
      FThreadSafeStaticStat<_FDispatchBatchedAsyncTasks::GetStatId_::__l2::FStat_FDispatchBatchedAsyncTasks>
                (&`public:_struct_TStatId___cdecl_FDispatchBatchedAsyncTasks::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_FDispatchBatchedAsyncTasks);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_FDispatchBatchedAsyncTasks::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar12 = _StatPtr_FDispatchBatchedAsyncTasks;
  if (_StatPtr_FDispatchBatchedAsyncTasks == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_res20,"FDispatchBatchedAsyncTasks");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_struct_TStatId___cdecl_FDispatchBatchedAsyncTasks::GetStatId(void)const___ptr64'
                          ::__l2::StatPtr_FDispatchBatchedAsyncTasks,*pFVar11,
                         L"FDispatchBatchedAsyncTasks","STATGROUP_TaskGraphTasks","STATCAT_Advanced"
                         ,L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)&pTVar12->Name;
  bVar7 = false;
  bVar9 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar13 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(pTVar12->StatDescriptionAnsi).Ptr);
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar14.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(pTVar12->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar7 = true;
        bVar9 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18.s.LowPart = FVar14.Value;
      local_res18.s.HighPart = uVar13;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar8 = true;
      goto LAB_148172ab5;
    }
  }
  bVar8 = false;
  FVar15 = local_58;
LAB_148172ab5:
  FDispatchBatchedAsyncTasks::GetDesiredThread((FDispatchBatchedAsyncTasks *)&this->TaskStorage);
  lVar4 = *(longlong *)(this->TaskStorage).Pad;
  if ((lVar4 == 0) || (*(char *)(lVar4 + 0xd0) != '\0')) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Target.GetReference() && !Target->IsComplete()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                        ,0x7e1,L"");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  this_00 = *(FTaskBase **)(this->TaskStorage).Pad;
  if (this_00->ExtendedPriority == TaskEvent) {
    LOCK();
    this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
    UNLOCK();
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0);
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_48.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_48);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  puVar5 = *(undefined8 **)(this->TaskStorage).Pad;
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar5 + 6);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  if (this != (TGraphTask<FDispatchBatchedAsyncTasks> *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 148172c80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FGameThreadDispatchBatchedAsyncTasks>::ExecuteTask
          (TGraphTask<FGameThreadDispatchBatchedAsyncTasks> *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  longlong lVar9;
  bool bVar10;
  FName *pFVar11;
  TStatIdData *pTVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<FGameThreadDispatchBatchedAsyncTasks> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_TStatId___cdecl_FGameThreadDispatchBatchedAsyncTasks::GetStatId(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_TStatId___cdecl_FGameThreadDispatchBatchedAsyncTasks::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_TStatId___cdecl_FGameThreadDispatchBatchedAsyncTasks::GetStatId(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`FGameThreadDispatchBatchedAsyncTasks::GetStatId'::__l2::FStat_FGameThreadDispatchBatchedAsyncTasks>
      ::
      FThreadSafeStaticStat<_FGameThreadDispatchBatchedAsyncTasks::GetStatId_::__l2::FStat_FGameThreadDispatchBatchedAsyncTasks>
                (&`public:_struct_TStatId___cdecl_FGameThreadDispatchBatchedAsyncTasks::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_FGameThreadDispatchBatchedAsyncTasks);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_FGameThreadDispatchBatchedAsyncTasks::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar12 = _StatPtr_FGameThreadDispatchBatchedAsyncTasks;
  if (_StatPtr_FGameThreadDispatchBatchedAsyncTasks == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_res20,"FGameThreadDispatchBatchedAsyncTasks");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_struct_TStatId___cdecl_FGameThreadDispatchBatchedAsyncTasks::GetStatId(void)const___ptr64'
                          ::__l2::StatPtr_FGameThreadDispatchBatchedAsyncTasks,*pFVar11,
                         L"FGameThreadDispatchBatchedAsyncTasks","STATGROUP_TaskGraphTasks",
                         "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  FVar15 = *(FName *)&pTVar12->Name;
  bVar6 = false;
  bVar8 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar13 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(pTVar12->StatDescriptionAnsi).Ptr);
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar14.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(pTVar12->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18.s.LowPart = FVar14.Value;
      local_res18.s.HighPart = uVar13;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar7 = true;
      goto LAB_148172e03;
    }
  }
  bVar7 = false;
  FVar15 = local_48;
LAB_148172e03:
  bVar10 = IsInGameThread();
  if (!bVar10) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsInGameThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                        ,0x83f,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FFXAsyncBatcher::Flush(&FXAsyncBatcher);
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
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
  puVar4 = *(undefined8 **)(this->TaskStorage).Pad;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 6);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  if (this != (TGraphTask<FGameThreadDispatchBatchedAsyncTasks> *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 148172fb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall TGraphTask<FParticleAsyncTask>::ExecuteTask(TGraphTask<FParticleAsyncTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  TTypeCompatibleBytes<FParticleAsyncTask> *this_00;
  int iVar3;
  undefined8 *puVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  Type TVar9;
  FName *pFVar10;
  TStatIdData *pTVar11;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar12;
  FNameEntryId FVar13;
  FName FVar14;
  LARGE_INTEGER local_res8;
  TRefCountPtr<FBaseGraphTask> local_res10;
  FName local_res18 [2];
  FStatMessage local_38;
  
  if (this != (TGraphTask<FParticleAsyncTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  this_00 = &this->TaskStorage;
  local_res10.Reference = (FBaseGraphTask *)this;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_TStatId___cdecl_FParticleAsyncTask::GetStatId(void)const___ptr64'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_TStatId___cdecl_FParticleAsyncTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_TStatId___cdecl_FParticleAsyncTask::GetStatId(void)const___ptr64'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`FParticleAsyncTask::GetStatId'::__l2::FStat_FParticleAsyncTask>::
      FThreadSafeStaticStat<_FParticleAsyncTask::GetStatId_::__l2::FStat_FParticleAsyncTask>
                (&`public:_struct_TStatId___cdecl_FParticleAsyncTask::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_FParticleAsyncTask);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_FParticleAsyncTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar11 = _StatPtr_FParticleAsyncTask;
  if (_StatPtr_FParticleAsyncTask == (TStatIdData *)0x0) {
    pFVar10 = ::FName::FName(local_res18,"FParticleAsyncTask");
    pTVar11 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_struct_TStatId___cdecl_FParticleAsyncTask::GetStatId(void)const___ptr64'
                          ::__l2::StatPtr_FParticleAsyncTask,*pFVar10,L"FParticleAsyncTask",
                         "STATGROUP_TaskGraphTasks","STATCAT_Advanced",L"Task Graph Tasks",true,true
                         ,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)&pTVar11->Name;
  bVar5 = false;
  bVar7 = false;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Value == 0) && (uVar12 == 0)) {
    TVar9 = FParticleAsyncTask::GetDesiredThread((FParticleAsyncTask *)this_00);
    FParticleAsyncTask::DoTask((FParticleAsyncTask *)this_00,TVar9,&local_res10);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(pTVar11->StatDescriptionAnsi).Ptr);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar13.Value;
        local_res8.s.HighPart = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(pTVar11->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    bVar6 = false;
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = FVar13.Value;
      local_res8.s.HighPart = uVar12;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar6 = true;
    }
    else {
      FVar14.ComparisonIndex.Value = 0;
      FVar14.Number = 0;
      FVar13.Value = 0;
    }
    TVar9 = FParticleAsyncTask::GetDesiredThread((FParticleAsyncTask *)this_00);
    FParticleAsyncTask::DoTask((FParticleAsyncTask *)this_00,TVar9,&local_res10);
    if (bVar7) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar6) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_01 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_01 == (FThreadStats *)0x0) {
        this_02 = FThreadStatsPool::Get();
        this_01 = FThreadStatsPool::GetFromPool(this_02);
      }
      if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
        local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
        local_38.NameAndInfo.Index.Value = FVar13.Value;
        QueryPerformanceCounter(&local_res8);
        local_38.StatData.Pad[4] = '\0';
        local_38.StatData.Pad[5] = '\0';
        local_38.StatData.Pad[6] = '\0';
        local_38.StatData.Pad[7] = '\0';
        local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
        local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
        local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
        local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_01,&local_38);
        piVar1 = &this_01->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(this_01,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_01,false,false);
        }
      }
    }
  }
  puVar4 = *(undefined8 **)((this->TaskStorage).Pad + 8);
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 6);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  if ((TGraphTask<FParticleAsyncTask> *)local_res10.Reference !=
      (TGraphTask<FParticleAsyncTask> *)0x0) {
    LOCK();
    plVar2 = (longlong *)&(local_res10.Reference)->field_0x30;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (*(code *)**(undefined8 **)local_res10.Reference)(local_res10.Reference,1);
    }
  }
  return;
}

// ExecuteTask @ 1481732f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FParticleFinalizeTask>::ExecuteTask(TGraphTask<FParticleFinalizeTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  FName *pFVar7;
  TStatIdData *pTVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FName local_38;
  FStatMessage local_28;
  
  if (this != (TGraphTask<FParticleFinalizeTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_TStatId___cdecl_FParticleFinalizeTask::GetStatId(void)const___ptr64'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_TStatId___cdecl_FParticleFinalizeTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_TStatId___cdecl_FParticleFinalizeTask::GetStatId(void)const___ptr64'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`FParticleFinalizeTask::GetStatId'::__l2::FStat_FParticleFinalizeTask>::
      FThreadSafeStaticStat<_FParticleFinalizeTask::GetStatId_::__l2::FStat_FParticleFinalizeTask>
                (&`public:_struct_TStatId___cdecl_FParticleFinalizeTask::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_FParticleFinalizeTask);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_FParticleFinalizeTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar8 = _StatPtr_FParticleFinalizeTask;
  if (_StatPtr_FParticleFinalizeTask == (TStatIdData *)0x0) {
    pFVar7 = ::FName::FName(&local_res10,"FParticleFinalizeTask");
    pTVar8 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_FParticleFinalizeTask::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_FParticleFinalizeTask,*pFVar7,L"FParticleFinalizeTask",
                        "STATGROUP_TaskGraphTasks","STATCAT_Advanced",L"Task Graph Tasks",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)&pTVar8->Name;
  bVar3 = false;
  bVar5 = false;
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(pTVar8->StatDescriptionAnsi).Ptr);
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(pTVar8->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = FVar10.Value;
      local_res8.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      goto LAB_148173483;
    }
  }
  bVar4 = false;
  FVar11 = local_38;
  FVar10.Value = 0;
LAB_148173483:
  if (`public:_void___cdecl_FParticleFinalizeTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
      ::__l2::__CsvProfilerStat1901 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("Effects");
    `public:_void___cdecl_FParticleFinalizeTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
    ::__l2::__CsvProfilerStat1901 = true;
  }
  FCsvProfiler::BeginExclusiveStat("Effects","CSV_Effects");
  UParticleSystemComponent::FinalizeTickComponent
            (*(UParticleSystemComponent **)(this->TaskStorage).Pad);
  FCsvProfiler::EndExclusiveStat("Effects");
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_28.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      local_28.NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&local_res8);
      local_28.StatData.Pad[4] = '\0';
      local_28.StatData.Pad[5] = '\0';
      local_28.StatData.Pad[6] = '\0';
      local_28.StatData.Pad[7] = '\0';
      local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_28);
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
  if (this != (TGraphTask<FParticleFinalizeTask> *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 1481e3980

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
TGraphTask<FParticleManagerAsyncTask>::ExecuteTask(TGraphTask<FParticleManagerAsyncTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  void *pvVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  Type TVar8;
  FName *pFVar9;
  TStatIdData *pTVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  LARGE_INTEGER local_res8;
  TRefCountPtr<FBaseGraphTask> local_res10;
  FName local_res18;
  FStatMessage local_38;
  
  if (this != (TGraphTask<FParticleManagerAsyncTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  local_res10.Reference = (FBaseGraphTask *)this;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_TStatId___cdecl_FParticleManagerAsyncTask::GetStatId(void)const___ptr64'::__l2
      ::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_TStatId___cdecl_FParticleManagerAsyncTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_TStatId___cdecl_FParticleManagerAsyncTask::GetStatId(void)const___ptr64'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`FParticleManagerAsyncTask::GetStatId'::__l2::FStat_FParticleManagerAsyncTask>
      ::
      FThreadSafeStaticStat<_FParticleManagerAsyncTask::GetStatId_::__l2::FStat_FParticleManagerAsyncTask>
                (&`public:_struct_TStatId___cdecl_FParticleManagerAsyncTask::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_FParticleManagerAsyncTask);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_FParticleManagerAsyncTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar10 = _StatPtr_FParticleManagerAsyncTask;
  if (_StatPtr_FParticleManagerAsyncTask == (TStatIdData *)0x0) {
    pFVar9 = ::FName::FName(&local_res18,"FParticleManagerAsyncTask");
    pTVar10 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_struct_TStatId___cdecl_FParticleManagerAsyncTask::GetStatId(void)const___ptr64'
                          ::__l2::StatPtr_FParticleManagerAsyncTask,*pFVar9,
                         L"FParticleManagerAsyncTask","STATGROUP_TaskGraphTasks","STATCAT_Advanced",
                         L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)&pTVar10->Name;
  bVar4 = false;
  bVar6 = false;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value == 0) && (uVar11 == 0)) {
    TVar8 = FParticleManagerAsyncTask::GetDesiredThread
                      ((FParticleManagerAsyncTask *)&this->TaskStorage);
    FParticleManagerAsyncTask::DoTask
              ((FParticleManagerAsyncTask *)&this->TaskStorage,TVar8,&local_res10);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(pTVar10->StatDescriptionAnsi).Ptr);
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar12.Value;
        local_res8.s.HighPart = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(pTVar10->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar4 = true;
        bVar6 = true;
      }
    }
    bVar5 = false;
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = FVar12.Value;
      local_res8.s.HighPart = uVar11;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar5 = true;
    }
    else {
      FVar13.ComparisonIndex.Value = 0;
      FVar13.Number = 0;
      FVar12.Value = 0;
    }
    TVar8 = FParticleManagerAsyncTask::GetDesiredThread
                      ((FParticleManagerAsyncTask *)&this->TaskStorage);
    FParticleManagerAsyncTask::DoTask
              ((FParticleManagerAsyncTask *)&this->TaskStorage,TVar8,&local_res10);
    if (bVar6) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar5) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_38.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
        local_38.NameAndInfo.Index.Value = FVar12.Value;
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
  pvVar3 = *(void **)((this->TaskStorage).Pad + 0x28);
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  if (this != (TGraphTask<FParticleManagerAsyncTask> *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 1481e3cc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
TGraphTask<FParticleManagerFinalizeTask>::ExecuteTask
          (TGraphTask<FParticleManagerFinalizeTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  void *pvVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  FName *pFVar8;
  TStatIdData *pTVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  if (this != (TGraphTask<FParticleManagerFinalizeTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_TStatId___cdecl_FParticleManagerFinalizeTask::GetStatId(void)const___ptr64'::
      __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_TStatId___cdecl_FParticleManagerFinalizeTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_TStatId___cdecl_FParticleManagerFinalizeTask::GetStatId(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`FParticleManagerFinalizeTask::GetStatId'::__l2::FStat_FParticleManagerFinalizeTask>
      ::
      FThreadSafeStaticStat<_FParticleManagerFinalizeTask::GetStatId_::__l2::FStat_FParticleManagerFinalizeTask>
                (&`public:_struct_TStatId___cdecl_FParticleManagerFinalizeTask::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_FParticleManagerFinalizeTask);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_FParticleManagerFinalizeTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar9 = _StatPtr_FParticleManagerFinalizeTask;
  if (_StatPtr_FParticleManagerFinalizeTask == (TStatIdData *)0x0) {
    pFVar8 = ::FName::FName(&local_res10,"FParticleManagerFinalizeTask");
    pTVar9 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_FParticleManagerFinalizeTask::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_FParticleManagerFinalizeTask,*pFVar8,
                        L"FParticleManagerFinalizeTask","STATGROUP_TaskGraphTasks",
                        "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar12 = *(FName *)&pTVar9->Name;
  bVar4 = false;
  bVar6 = false;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value == 0) && (uVar10 == 0)) {
    FParticleManagerFinalizeTask::DoTask
              ((FParticleManagerFinalizeTask *)&this->TaskStorage,GameThread,
               (TRefCountPtr<FBaseGraphTask> *)&local_res8.s);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(pTVar9->StatDescriptionAnsi).Ptr);
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar11.Value;
        local_res8.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(pTVar9->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar4 = true;
        bVar6 = true;
      }
    }
    bVar5 = false;
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = FVar11.Value;
      local_res8.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar5 = true;
    }
    else {
      FVar12.ComparisonIndex.Value = 0;
      FVar12.Number = 0;
      FVar11.Value = 0;
    }
    FParticleManagerFinalizeTask::DoTask
              ((FParticleManagerFinalizeTask *)&this->TaskStorage,GameThread,
               (TRefCountPtr<FBaseGraphTask> *)&local_res8.s);
    if (bVar6) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar5) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_38.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
        local_38.NameAndInfo.Index.Value = FVar11.Value;
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
  pvVar3 = *(void **)((this->TaskStorage).Pad + 0x28);
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  if (this != (TGraphTask<FParticleManagerFinalizeTask> *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 148300e30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FParallelBlendPhysicsCompletionTask>::ExecuteTask
          (TGraphTask<FParallelBlendPhysicsCompletionTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  FName *pFVar7;
  TStatIdData *pTVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  if (this != (TGraphTask<FParallelBlendPhysicsCompletionTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_TStatId___cdecl_FParallelBlendPhysicsCompletionTask::GetStatId(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_TStatId___cdecl_FParallelBlendPhysicsCompletionTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_TStatId___cdecl_FParallelBlendPhysicsCompletionTask::GetStatId(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`FParallelBlendPhysicsCompletionTask::GetStatId'::__l2::FStat_FParallelBlendPhysicsCompletionTask>
      ::
      FThreadSafeStaticStat<_FParallelBlendPhysicsCompletionTask::GetStatId_::__l2::FStat_FParallelBlendPhysicsCompletionTask>
                (&`public:_struct_TStatId___cdecl_FParallelBlendPhysicsCompletionTask::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_FParallelBlendPhysicsCompletionTask);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_FParallelBlendPhysicsCompletionTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar8 = _StatPtr_FParallelBlendPhysicsCompletionTask;
  if (_StatPtr_FParallelBlendPhysicsCompletionTask == (TStatIdData *)0x0) {
    pFVar7 = ::FName::FName(&local_res10,"FParallelBlendPhysicsCompletionTask");
    pTVar8 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_FParallelBlendPhysicsCompletionTask::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_FParallelBlendPhysicsCompletionTask,*pFVar7,
                        L"FParallelBlendPhysicsCompletionTask","STATGROUP_TaskGraphTasks",
                        "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar11 = *(FName *)&pTVar8->Name;
  bVar3 = false;
  bVar5 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value == 0) && (uVar9 == 0)) {
    FParallelBlendPhysicsCompletionTask::DoTask
              ((FParallelBlendPhysicsCompletionTask *)&this->TaskStorage,GameThread,
               (TRefCountPtr<FBaseGraphTask> *)&local_res8.s);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(pTVar8->StatDescriptionAnsi).Ptr);
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(pTVar8->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar3 = true;
        bVar5 = true;
      }
    }
    bVar4 = false;
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = FVar10.Value;
      local_res8.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
    }
    else {
      FVar11.ComparisonIndex.Value = 0;
      FVar11.Number = 0;
      FVar10.Value = 0;
    }
    FParallelBlendPhysicsCompletionTask::DoTask
              ((FParallelBlendPhysicsCompletionTask *)&this->TaskStorage,GameThread,
               (TRefCountPtr<FBaseGraphTask> *)&local_res8.s);
    if (bVar5) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar4) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_28.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
        local_28.NameAndInfo.Index.Value = FVar10.Value;
        QueryPerformanceCounter(&local_res8);
        local_28.StatData.Pad[4] = '\0';
        local_28.StatData.Pad[5] = '\0';
        local_28.StatData.Pad[6] = '\0';
        local_28.StatData.Pad[7] = '\0';
        local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
        local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
        local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
        local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_28);
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
  if (this != (TGraphTask<FParallelBlendPhysicsCompletionTask> *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 148301150

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FParallelBlendPhysicsTask>::ExecuteTask(TGraphTask<FParallelBlendPhysicsTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FParallelBlendPhysicsTask::GetStatId(void)_::_2_::FStat_FParallelBlendPhysicsTask>
  FVar11;
  USkeletalMeshComponent *this_00;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar12;
  FNameEntryId FVar13;
  FName FVar14;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<FParallelBlendPhysicsTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_struct_TStatId___cdecl_FParallelBlendPhysicsTask::GetStatId(void)'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_struct_TStatId___cdecl_FParallelBlendPhysicsTask::GetStatId(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_struct_TStatId___cdecl_FParallelBlendPhysicsTask::GetStatId(void)'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    FThreadSafeStaticStat<`FParallelBlendPhysicsTask::GetStatId'::__l2::FStat_FParallelBlendPhysicsTask>
    ::
    FThreadSafeStaticStat<_FParallelBlendPhysicsTask::GetStatId_::__l2::FStat_FParallelBlendPhysicsTask>
              (&`public:_static_struct_TStatId___cdecl_FParallelBlendPhysicsTask::GetStatId(void)'::
                __l2::StatPtr_FParallelBlendPhysicsTask);
    _Init_thread_footer(&`public:_static_struct_TStatId___cdecl_FParallelBlendPhysicsTask::GetStatId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FVar11 = `public:_static_struct_TStatId___cdecl_FParallelBlendPhysicsTask::GetStatId(void)'::__l2
           ::StatPtr_FParallelBlendPhysicsTask;
  if (`public:_static_struct_TStatId___cdecl_FParallelBlendPhysicsTask::GetStatId(void)'::__l2::
      StatPtr_FParallelBlendPhysicsTask ==
      (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FParallelBlendPhysicsTask::GetStatId(void)_::_2_::FStat_FParallelBlendPhysicsTask>
       )0x0) {
    pFVar10 = ::FName::FName(&local_res20,"FParallelBlendPhysicsTask");
    FVar11 = (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FParallelBlendPhysicsTask::GetStatId(void)_::_2_::FStat_FParallelBlendPhysicsTask>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_struct_TStatId___cdecl_FParallelBlendPhysicsTask::GetStatId(void)'
                           ::__l2::StatPtr_FParallelBlendPhysicsTask,*pFVar10,
                          L"FParallelBlendPhysicsTask","STATGROUP_TaskGraphTasks","STATCAT_Advanced"
                          ,L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar11;
  bVar5 = false;
  bVar7 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Value == 0) && (uVar12 == 0)) {
LAB_1483012a5:
    bVar6 = false;
    FVar14 = local_48;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar13.Value;
        local_res10.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever != false) && (FThreadStats::bPrimaryEnable == false))
    goto LAB_1483012a5;
    local_res18.s.LowPart = FVar13.Value;
    local_res18.s.HighPart = uVar12;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar6 = true;
  }
  iVar3 = ENamedThreads::bHasHighPriorityThreads;
  if (((CPrio_FParallelBlendPhysicsTask.ThreadPriority == HighThreadPriority) ||
      (iVar3 = ENamedThreads::bHasBackgroundThreads,
      CPrio_FParallelBlendPhysicsTask.ThreadPriority == BackgroundThreadPriority)) && (iVar3 == 0))
  {
    if (((CPrio_FParallelBlendPhysicsTask.TaskPriorityIfForcedToNormalThreadPriority &
         ~HighTaskPriority) != MainQueue) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("!(ThreadAndIndex & ~ThreadIndexMask) && !(TaskPriority & ~TaskPriorityMask)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                           ,0xcd,L""), bVar9)) goto code_r0x000148301383;
  }
  else if ((((CPrio_FParallelBlendPhysicsTask.ThreadPriority & ~ThreadPriorityMask) != MainQueue ||
             (CPrio_FParallelBlendPhysicsTask.ThreadPriority & ThreadPriorityMask) ==
             ThreadPriorityMask) ||
           ((CPrio_FParallelBlendPhysicsTask.TaskPriority & ~HighTaskPriority) != MainQueue)) &&
          (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("!(ThreadAndIndex & ~ThreadIndexMask) && !(ThreadPriority & ~ThreadPriorityMask) && (ThreadPriority & ThreadPriorityMask) != ThreadPriorityMask && !(TaskPriority & ~TaskPriorityMask)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                              ,0xb1,L""), bVar9)) {
code_r0x000148301383:
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_00 = (USkeletalMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->TaskStorage);
  if (this_00 != (USkeletalMeshComponent *)0x0) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Yellow,"FParallelBlendPhysicsTask_DoTask");
    if (CpuChannel->Enabled < 0) {
      USkeletalMeshComponent::PerformBlendPhysicsBones
                (this_00,&this_00->RequiredBones,
                 &(this_00->AnimEvaluationContext).ComponentSpaceTransforms,
                 &(this_00->AnimEvaluationContext).BoneSpaceTransforms);
    }
    else {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`public:_void___cdecl_FParallelBlendPhysicsTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
                  ::__l5::__CpuProfilerEventSpecId68,"FParallelBlendPhysicsTask_DoTask",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysAnim.cpp"
                 ,0x44);
      FCpuProfilerTrace::OutputBeginEvent
                (`public:_void___cdecl_FParallelBlendPhysicsTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
                 ::__l5::__CpuProfilerEventSpecId68);
      USkeletalMeshComponent::PerformBlendPhysicsBones
                (this_00,&this_00->RequiredBones,
                 &(this_00->AnimEvaluationContext).ComponentSpaceTransforms,
                 &(this_00->AnimEvaluationContext).BoneSpaceTransforms);
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar6) && (FVar14 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_38);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  if (this != (TGraphTask<FParallelBlendPhysicsTask> *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 148400810

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FMaterialInterfaceReleaseTask>::ExecuteTask
          (TGraphTask<FMaterialInterfaceReleaseTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  bool bVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  uint uVar11;
  TAtomic<FMinimalName> TVar12;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  TAtomic<FMinimalName> local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<FMaterialInterfaceReleaseTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  TVar12 = TStatId::TStatId_NAME_None.Name;
  bVar5 = false;
  bVar7 = false;
  local_48 = (TAtomic<FMinimalName>)0x0;
  uVar10 = TStatId::TStatId_NAME_None.Name._0_4_;
  uVar11 = TStatId::TStatId_NAME_None.Name._4_4_;
  if ((uVar10 != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,TStatId::TStatId_NAME_None.StatDescriptionAnsi.Ptr);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = uVar10;
        local_res10.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,TStatId::TStatId_NAME_None.StatDescriptionWide.Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = uVar10;
      local_res18[0]._4_4_ = uVar11;
      FThreadStats::AddMessage((FName)TVar12,CycleScopeStart);
      bVar6 = true;
      goto LAB_1484008ec;
    }
  }
  bVar6 = false;
  TVar12 = local_48;
LAB_1484008ec:
  bVar9 = IsInGameThread();
  if (!bVar9) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PSOPrecacheMaterial.cpp"
                       ,0x4a,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  puVar3 = *(undefined8 **)(this->TaskStorage).Pad;
  if (puVar3 != (undefined8 *)0x0) {
    if ((UObject *)*puVar3 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)*puVar3);
      *puVar3 = 0;
    }
    ::operator_delete(puVar3,8);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (TVar12 != (TAtomic<FMinimalName>)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index.Value = TVar12._0_4_;
      local_38.NameAndInfo.Number = TVar12._4_4_ & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  if (this != (TGraphTask<FMaterialInterfaceReleaseTask> *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 148400a50

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TGraphTask<FMaterialPSOPrecacheCollectionTask>::ExecuteTask
          (TGraphTask<FMaterialPSOPrecacheCollectionTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  int iVar9;
  TAtomic<FMinimalName> TVar10;
  LARGE_INTEGER local_res8;
  FStatMessage local_28;
  
  if (this != (TGraphTask<FMaterialPSOPrecacheCollectionTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  TVar10 = TStatId::TStatId_NAME_None.Name;
  bVar4 = false;
  bVar6 = false;
  uVar8 = TStatId::TStatId_NAME_None.Name._0_4_;
  iVar9 = TStatId::TStatId_NAME_None.Name._4_4_;
  if ((uVar8 == 0) && (iVar9 == 0)) {
    FMaterialPSOPrecacheCollectionTask::DoTask
              ((FMaterialPSOPrecacheCollectionTask *)&this->TaskStorage,
               AnyBackgroundThreadNormalTask,(TRefCountPtr<FBaseGraphTask> *)&local_res8.s);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,TStatId::TStatId_NAME_None.StatDescriptionAnsi.Ptr);
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = uVar8;
        local_res8.s.HighPart = iVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,TStatId::TStatId_NAME_None.StatDescriptionWide.Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar4 = true;
        bVar6 = true;
      }
    }
    bVar5 = false;
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = uVar8;
      local_res8.s.HighPart = iVar9;
      FThreadStats::AddMessage((FName)TVar10,CycleScopeStart);
      bVar5 = true;
    }
    else {
      TVar10 = (TAtomic<FMinimalName>)0x0;
      uVar8 = 0;
    }
    FMaterialPSOPrecacheCollectionTask::DoTask
              ((FMaterialPSOPrecacheCollectionTask *)&this->TaskStorage,
               AnyBackgroundThreadNormalTask,(TRefCountPtr<FBaseGraphTask> *)&local_res8.s);
    if (bVar6) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar5) && (TVar10 != (TAtomic<FMinimalName>)0x0)) &&
        (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_28.NameAndInfo.Number = TVar10._4_4_ & 0xffff6fff | 0x6000;
        local_28.NameAndInfo.Index.Value = uVar8;
        QueryPerformanceCounter(&local_res8);
        local_28.StatData.Pad[4] = '\0';
        local_28.StatData.Pad[5] = '\0';
        local_28.StatData.Pad[6] = '\0';
        local_28.StatData.Pad[7] = '\0';
        local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
        local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
        local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
        local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_28);
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
  puVar3 = *(undefined8 **)((this->TaskStorage).Pad + 0x30);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (this != (TGraphTask<FMaterialPSOPrecacheCollectionTask> *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 148400ca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FShaderMapPreloadTask>::ExecuteTask(TGraphTask<FShaderMapPreloadTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  int iVar9;
  TAtomic<FMinimalName> TVar10;
  LARGE_INTEGER local_res8;
  FStatMessage local_28;
  
  if (this != (TGraphTask<FShaderMapPreloadTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  TVar10 = TStatId::TStatId_NAME_None.Name;
  bVar4 = false;
  bVar6 = false;
  uVar8 = TStatId::TStatId_NAME_None.Name._0_4_;
  iVar9 = TStatId::TStatId_NAME_None.Name._4_4_;
  if ((uVar8 == 0) && (iVar9 == 0)) {
    FShaderMapPreloadTask::DoTask
              ((FShaderMapPreloadTask *)&this->TaskStorage,AnyBackgroundThreadNormalTask,
               (TRefCountPtr<FBaseGraphTask> *)&local_res8.s);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,TStatId::TStatId_NAME_None.StatDescriptionAnsi.Ptr);
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = uVar8;
        local_res8.s.HighPart = iVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,TStatId::TStatId_NAME_None.StatDescriptionWide.Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar4 = true;
        bVar6 = true;
      }
    }
    bVar5 = false;
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = uVar8;
      local_res8.s.HighPart = iVar9;
      FThreadStats::AddMessage((FName)TVar10,CycleScopeStart);
      bVar5 = true;
    }
    else {
      TVar10 = (TAtomic<FMinimalName>)0x0;
      uVar8 = 0;
    }
    FShaderMapPreloadTask::DoTask
              ((FShaderMapPreloadTask *)&this->TaskStorage,AnyBackgroundThreadNormalTask,
               (TRefCountPtr<FBaseGraphTask> *)&local_res8.s);
    if (bVar6) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar5) && (TVar10 != (TAtomic<FMinimalName>)0x0)) &&
        (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_28.NameAndInfo.Number = TVar10._4_4_ & 0xffff6fff | 0x6000;
        local_28.NameAndInfo.Index.Value = uVar8;
        QueryPerformanceCounter(&local_res8);
        local_28.StatData.Pad[4] = '\0';
        local_28.StatData.Pad[5] = '\0';
        local_28.StatData.Pad[6] = '\0';
        local_28.StatData.Pad[7] = '\0';
        local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
        local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
        local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
        local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_28);
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
  puVar3 = *(undefined8 **)((this->TaskStorage).Pad + 0x10);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (this != (TGraphTask<FShaderMapPreloadTask> *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 148400ef0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TGraphTask<FShaderPreloadCollectionTask>::ExecuteTask
          (TGraphTask<FShaderPreloadCollectionTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  int iVar9;
  TAtomic<FMinimalName> TVar10;
  LARGE_INTEGER local_res8;
  FStatMessage local_28;
  
  if (this != (TGraphTask<FShaderPreloadCollectionTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  TVar10 = TStatId::TStatId_NAME_None.Name;
  bVar4 = false;
  bVar6 = false;
  uVar8 = TStatId::TStatId_NAME_None.Name._0_4_;
  iVar9 = TStatId::TStatId_NAME_None.Name._4_4_;
  if ((uVar8 == 0) && (iVar9 == 0)) {
    FShaderPreloadCollectionTask::DoTask
              ((FShaderPreloadCollectionTask *)&this->TaskStorage,AnyBackgroundThreadNormalTask,
               (TRefCountPtr<FBaseGraphTask> *)&local_res8.s);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,TStatId::TStatId_NAME_None.StatDescriptionAnsi.Ptr);
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = uVar8;
        local_res8.s.HighPart = iVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,TStatId::TStatId_NAME_None.StatDescriptionWide.Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar4 = true;
        bVar6 = true;
      }
    }
    bVar5 = false;
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = uVar8;
      local_res8.s.HighPart = iVar9;
      FThreadStats::AddMessage((FName)TVar10,CycleScopeStart);
      bVar5 = true;
    }
    else {
      TVar10 = (TAtomic<FMinimalName>)0x0;
      uVar8 = 0;
    }
    FShaderPreloadCollectionTask::DoTask
              ((FShaderPreloadCollectionTask *)&this->TaskStorage,AnyBackgroundThreadNormalTask,
               (TRefCountPtr<FBaseGraphTask> *)&local_res8.s);
    if (bVar6) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar5) && (TVar10 != (TAtomic<FMinimalName>)0x0)) &&
        (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_28.NameAndInfo.Number = TVar10._4_4_ & 0xffff6fff | 0x6000;
        local_28.NameAndInfo.Index.Value = uVar8;
        QueryPerformanceCounter(&local_res8);
        local_28.StatData.Pad[4] = '\0';
        local_28.StatData.Pad[5] = '\0';
        local_28.StatData.Pad[6] = '\0';
        local_28.StatData.Pad[7] = '\0';
        local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
        local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
        local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
        local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_28);
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
  puVar3 = *(undefined8 **)((this->TaskStorage).Pad + 0x30);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (this != (TGraphTask<FShaderPreloadCollectionTask> *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 1484669f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<Nanite::FStreamingUpdateTask>::ExecuteTask
          (TGraphTask<Nanite::FStreamingUpdateTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  int iVar8;
  TAtomic<FMinimalName> TVar9;
  LARGE_INTEGER local_res8;
  FStatMessage local_18;
  
  if (this != (TGraphTask<Nanite::FStreamingUpdateTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  TVar9 = TStatId::TStatId_NAME_None.Name;
  bVar3 = false;
  bVar5 = false;
  uVar7 = TStatId::TStatId_NAME_None.Name._0_4_;
  iVar8 = TStatId::TStatId_NAME_None.Name._4_4_;
  if ((uVar7 == 0) && (iVar8 == 0)) {
    Nanite::FStreamingManager::AsyncUpdate(*(FStreamingManager **)(this->TaskStorage).Pad);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,TStatId::TStatId_NAME_None.StatDescriptionAnsi.Ptr);
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = uVar7;
        local_res8.s.HighPart = iVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,TStatId::TStatId_NAME_None.StatDescriptionWide.Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar3 = true;
        bVar5 = true;
      }
    }
    bVar4 = false;
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = uVar7;
      local_res8.s.HighPart = iVar8;
      FThreadStats::AddMessage((FName)TVar9,CycleScopeStart);
      bVar4 = true;
    }
    else {
      TVar9 = (TAtomic<FMinimalName>)0x0;
      uVar7 = 0;
    }
    Nanite::FStreamingManager::AsyncUpdate(*(FStreamingManager **)(this->TaskStorage).Pad);
    if (bVar5) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar4) && (TVar9 != (TAtomic<FMinimalName>)0x0)) &&
        (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_18.NameAndInfo.Number = TVar9._4_4_ & 0xffff6fff | 0x6000;
        local_18.NameAndInfo.Index.Value = uVar7;
        QueryPerformanceCounter(&local_res8);
        local_18.StatData.Pad[4] = '\0';
        local_18.StatData.Pad[5] = '\0';
        local_18.StatData.Pad[6] = '\0';
        local_18.StatData.Pad[7] = '\0';
        local_18.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
        local_18.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
        local_18.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
        local_18.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_18);
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
  if (this != (TGraphTask<Nanite::FStreamingUpdateTask> *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14863a430

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshRenderData::InitResources'::__l5::TSTR_CmdSetSkeletalMeshReadyForStreaming658>_>'::__l2::<lambda_1>_>_>
::ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  undefined8 uVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar11;
  FName FVar12;
  FNameEntryId FVar13;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_48;
  FStatMessage local_38;
  
  if (this != (void *)0x0) {
    LOCK();
    *(int *)((longlong)this + 0x30) = *(int *)((longlong)this + 0x30) + 1;
    UNLOCK();
  }
  bVar5 = false;
  bVar7 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  pFVar3 = *(FName **)(*(longlong *)((longlong)this + 0xe0) + 8);
  FVar12 = *pFVar3;
  FVar13 = FVar12.ComparisonIndex.Value;
  uVar9 = FVar12.Number;
  if ((FVar13.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar3[2]);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar13.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar3[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18.s.LowPart = FVar13.Value;
      local_res18.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar6 = true;
      goto LAB_14863a512;
    }
  }
  bVar6 = false;
  FVar12 = local_48;
LAB_14863a512:
  if ((GIsThreadedRendering != false) &&
     (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                       ,0x21d,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId562,(wchar_t *)**(undefined8 **)((longlong)this + 0xe0),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x232);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId562);
  }
  GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0xf0));
  pcVar4 = *(code **)((longlong)this + 0xf0);
  plVar11 = (longlong *)((longlong)this + 0x100);
  if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
    plVar11 = *(longlong **)((longlong)this + 0x118);
  }
  uVar10 = (**(code **)(*plVar11 + 8))();
  (*pcVar4)(uVar10);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
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
  if (*(longlong *)((longlong)this + 0xf0) != 0) {
    plVar11 = (longlong *)((longlong)this + 0x100);
    if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
      plVar11 = *(longlong **)((longlong)this + 0x118);
    }
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  if (this != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)this + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)this)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14863a720

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD::InitResources'::__l2::TSTR_FSkeletalMeshObjectLOD_InitResources2477>_>'::__l2::<lambda_1>_>_>
::ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRHICommandListImmediate *pFVar10;
  undefined8 uVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar12;
  FName FVar13;
  FNameEntryId FVar14;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_58;
  FStatMessage local_48;
  
  if (this != (void *)0x0) {
    LOCK();
    *(int *)((longlong)this + 0x30) = *(int *)((longlong)this + 0x30) + 1;
    UNLOCK();
  }
  bVar5 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  pFVar3 = *(FName **)(*(longlong *)((longlong)this + 0xe0) + 8);
  FVar13 = *pFVar3;
  FVar14 = FVar13.ComparisonIndex.Value;
  uVar9 = FVar13.Number;
  if ((FVar14.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar3[2]);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar14.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar3[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar14.Value;
      local_res18[0]._4_4_ = uVar9;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_14863a810;
    }
  }
  bVar6 = false;
  FVar13 = local_58;
LAB_14863a810:
  if ((GIsThreadedRendering != false) &&
     (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                       ,0x21d,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId562,(wchar_t *)**(undefined8 **)((longlong)this + 0xe0),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x232);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId562);
  }
  pFVar10 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0xf0));
  pcVar4 = *(code **)((longlong)this + 0xf0);
  plVar12 = (longlong *)((longlong)this + 0x100);
  if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
    plVar12 = *(longlong **)((longlong)this + 0x118);
  }
  uVar11 = (**(code **)(*plVar12 + 8))();
  (*pcVar4)(uVar11,pFVar10);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res18[0]._0_1_;
      local_48.StatData.Pad[1] = local_res18[0]._1_1_;
      local_48.StatData.Pad[2] = local_res18[0]._2_1_;
      local_48.StatData.Pad[3] = local_res18[0]._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
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
  if (*(longlong *)((longlong)this + 0xf0) != 0) {
    plVar12 = (longlong *)((longlong)this + 0x100);
    if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
      plVar12 = *(longlong **)((longlong)this + 0x118);
    }
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  if (this != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)this + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)this)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14863aa20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FInstancedSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD::InitResources'::__l2::TSTR_FSkeletalMeshObjectLOD_InitResources2771>_>'::__l2::<lambda_1>_>_>
::ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRHICommandListImmediate *pFVar10;
  undefined8 uVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar12;
  FName FVar13;
  FNameEntryId FVar14;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_58;
  FStatMessage local_48;
  
  if (this != (void *)0x0) {
    LOCK();
    *(int *)((longlong)this + 0x30) = *(int *)((longlong)this + 0x30) + 1;
    UNLOCK();
  }
  bVar5 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  pFVar3 = *(FName **)(*(longlong *)((longlong)this + 0xe0) + 8);
  FVar13 = *pFVar3;
  FVar14 = FVar13.ComparisonIndex.Value;
  uVar9 = FVar13.Number;
  if ((FVar14.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar3[2]);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar14.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar3[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar14.Value;
      local_res18[0]._4_4_ = uVar9;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_14863ab10;
    }
  }
  bVar6 = false;
  FVar13 = local_58;
LAB_14863ab10:
  if ((GIsThreadedRendering != false) &&
     (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                       ,0x21d,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId562,(wchar_t *)**(undefined8 **)((longlong)this + 0xe0),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x232);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId562);
  }
  pFVar10 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0xf0));
  pcVar4 = *(code **)((longlong)this + 0xf0);
  plVar12 = (longlong *)((longlong)this + 0x100);
  if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
    plVar12 = *(longlong **)((longlong)this + 0x118);
  }
  uVar11 = (**(code **)(*plVar12 + 8))();
  (*pcVar4)(uVar11,pFVar10);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res18[0]._0_1_;
      local_48.StatData.Pad[1] = local_res18[0]._1_1_;
      local_48.StatData.Pad[2] = local_res18[0]._2_1_;
      local_48.StatData.Pad[3] = local_res18[0]._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
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
  if (*(longlong *)((longlong)this + 0xf0) != 0) {
    plVar12 = (longlong *)((longlong)this + 0x100);
    if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
      plVar12 = *(longlong **)((longlong)this + 0x118);
    }
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  if (this != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)this + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)this)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14863ad20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD::ReleaseResources'::__l2::TSTR_FSkeletalMeshObjectLOD_ReleaseResources2493>_>'::__l2::<lambda_1>_>_>
::ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRHICommandListImmediate *pFVar10;
  undefined8 uVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar12;
  FName FVar13;
  FNameEntryId FVar14;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_58;
  FStatMessage local_48;
  
  if (this != (void *)0x0) {
    LOCK();
    *(int *)((longlong)this + 0x30) = *(int *)((longlong)this + 0x30) + 1;
    UNLOCK();
  }
  bVar5 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  pFVar3 = *(FName **)(*(longlong *)((longlong)this + 0xe0) + 8);
  FVar13 = *pFVar3;
  FVar14 = FVar13.ComparisonIndex.Value;
  uVar9 = FVar13.Number;
  if ((FVar14.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar3[2]);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar14.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar3[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar14.Value;
      local_res18[0]._4_4_ = uVar9;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_14863ae10;
    }
  }
  bVar6 = false;
  FVar13 = local_58;
LAB_14863ae10:
  if ((GIsThreadedRendering != false) &&
     (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                       ,0x21d,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId562,(wchar_t *)**(undefined8 **)((longlong)this + 0xe0),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x232);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId562);
  }
  pFVar10 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0xf0));
  pcVar4 = *(code **)((longlong)this + 0xf0);
  plVar12 = (longlong *)((longlong)this + 0x100);
  if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
    plVar12 = *(longlong **)((longlong)this + 0x118);
  }
  uVar11 = (**(code **)(*plVar12 + 8))();
  (*pcVar4)(uVar11,pFVar10);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res18[0]._0_1_;
      local_48.StatData.Pad[1] = local_res18[0]._1_1_;
      local_48.StatData.Pad[2] = local_res18[0]._2_1_;
      local_48.StatData.Pad[3] = local_res18[0]._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
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
  if (*(longlong *)((longlong)this + 0xf0) != 0) {
    plVar12 = (longlong *)((longlong)this + 0x100);
    if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
      plVar12 = *(longlong **)((longlong)this + 0x118);
    }
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  if (this != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)this + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)this)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14863b020

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FInstancedSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD::ReleaseResources'::__l2::TSTR_FSkeletalMeshObjectLOD_ReleaseResources2843>_>'::__l2::<lambda_1>_>_>
::ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRHICommandListImmediate *pFVar10;
  undefined8 uVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar12;
  FName FVar13;
  FNameEntryId FVar14;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_58;
  FStatMessage local_48;
  
  if (this != (void *)0x0) {
    LOCK();
    *(int *)((longlong)this + 0x30) = *(int *)((longlong)this + 0x30) + 1;
    UNLOCK();
  }
  bVar5 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  pFVar3 = *(FName **)(*(longlong *)((longlong)this + 0xe0) + 8);
  FVar13 = *pFVar3;
  FVar14 = FVar13.ComparisonIndex.Value;
  uVar9 = FVar13.Number;
  if ((FVar14.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar3[2]);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar14.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar3[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar14.Value;
      local_res18[0]._4_4_ = uVar9;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_14863b110;
    }
  }
  bVar6 = false;
  FVar13 = local_58;
LAB_14863b110:
  if ((GIsThreadedRendering != false) &&
     (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                       ,0x21d,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId562,(wchar_t *)**(undefined8 **)((longlong)this + 0xe0),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x232);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId562);
  }
  pFVar10 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0xf0));
  pcVar4 = *(code **)((longlong)this + 0xf0);
  plVar12 = (longlong *)((longlong)this + 0x100);
  if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
    plVar12 = *(longlong **)((longlong)this + 0x118);
  }
  uVar11 = (**(code **)(*plVar12 + 8))();
  (*pcVar4)(uVar11,pFVar10);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res18[0]._0_1_;
      local_48.StatData.Pad[1] = local_res18[0]._1_1_;
      local_48.StatData.Pad[2] = local_res18[0]._2_1_;
      local_48.StatData.Pad[3] = local_res18[0]._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
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
  if (*(longlong *)((longlong)this + 0xf0) != 0) {
    plVar12 = (longlong *)((longlong)this + 0x100);
    if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
      plVar12 = *(longlong **)((longlong)this + 0x118);
    }
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  if (this != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)this + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)this)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14863b320

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectCPUSkin::FSkeletalMeshObjectLOD::InitResources'::__l2::TSTR_InitSkeletalMeshCPUSkinVertexFactory350>_>'::__l2::<lambda_1>_>_>
::ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRHICommandListImmediate *pFVar10;
  undefined8 uVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar12;
  FName FVar13;
  FNameEntryId FVar14;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_58;
  FStatMessage local_48;
  
  if (this != (void *)0x0) {
    LOCK();
    *(int *)((longlong)this + 0x30) = *(int *)((longlong)this + 0x30) + 1;
    UNLOCK();
  }
  bVar5 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  pFVar3 = *(FName **)(*(longlong *)((longlong)this + 0xe0) + 8);
  FVar13 = *pFVar3;
  FVar14 = FVar13.ComparisonIndex.Value;
  uVar9 = FVar13.Number;
  if ((FVar14.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar3[2]);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar14.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar3[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar14.Value;
      local_res18[0]._4_4_ = uVar9;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_14863b410;
    }
  }
  bVar6 = false;
  FVar13 = local_58;
LAB_14863b410:
  if ((GIsThreadedRendering != false) &&
     (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                       ,0x21d,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId562,(wchar_t *)**(undefined8 **)((longlong)this + 0xe0),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x232);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId562);
  }
  pFVar10 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0xf0));
  pcVar4 = *(code **)((longlong)this + 0xf0);
  plVar12 = (longlong *)((longlong)this + 0x100);
  if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
    plVar12 = *(longlong **)((longlong)this + 0x118);
  }
  uVar11 = (**(code **)(*plVar12 + 8))();
  (*pcVar4)(uVar11,pFVar10);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res18[0]._0_1_;
      local_48.StatData.Pad[1] = local_res18[0]._1_1_;
      local_48.StatData.Pad[2] = local_res18[0]._2_1_;
      local_48.StatData.Pad[3] = local_res18[0]._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
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
  if (*(longlong *)((longlong)this + 0xf0) != 0) {
    plVar12 = (longlong *)((longlong)this + 0x100);
    if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
      plVar12 = *(longlong **)((longlong)this + 0x118);
    }
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  if (this != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)this + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)this)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14863b620

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectCPUSkin::FSkeletalMeshObjectLOD::InitResources'::__l21::TSTR_InitSkeletalRenderCPUSkinRayTracingGeometry384>_>'::__l2::<lambda_1>_>_>
::ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRHICommandListImmediate *pFVar10;
  undefined8 uVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar12;
  FName FVar13;
  FNameEntryId FVar14;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_58;
  FStatMessage local_48;
  
  if (this != (void *)0x0) {
    LOCK();
    *(int *)((longlong)this + 0x30) = *(int *)((longlong)this + 0x30) + 1;
    UNLOCK();
  }
  bVar5 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  pFVar3 = *(FName **)(*(longlong *)((longlong)this + 0xe0) + 8);
  FVar13 = *pFVar3;
  FVar14 = FVar13.ComparisonIndex.Value;
  uVar9 = FVar13.Number;
  if ((FVar14.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar3[2]);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar14.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar3[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar14.Value;
      local_res18[0]._4_4_ = uVar9;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_14863b710;
    }
  }
  bVar6 = false;
  FVar13 = local_58;
LAB_14863b710:
  if ((GIsThreadedRendering != false) &&
     (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                       ,0x21d,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId562,(wchar_t *)**(undefined8 **)((longlong)this + 0xe0),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x232);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId562);
  }
  pFVar10 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0xf0));
  pcVar4 = *(code **)((longlong)this + 0xf0);
  plVar12 = (longlong *)((longlong)this + 0x100);
  if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
    plVar12 = *(longlong **)((longlong)this + 0x118);
  }
  uVar11 = (**(code **)(*plVar12 + 8))();
  (*pcVar4)(uVar11,pFVar10);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res18[0]._0_1_;
      local_48.StatData.Pad[1] = local_res18[0]._1_1_;
      local_48.StatData.Pad[2] = local_res18[0]._2_1_;
      local_48.StatData.Pad[3] = local_res18[0]._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
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
  if (*(longlong *)((longlong)this + 0xf0) != 0) {
    plVar12 = (longlong *)((longlong)this + 0x100);
    if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
      plVar12 = *(longlong **)((longlong)this + 0x118);
    }
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  if (this != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)this + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)this)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14863b920

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshRenderData::InitStaticRayTracingGeometry'::__l5::TSTR_InitSkeletalRenderStaticRayTracingGeometry715>_>'::__l2::<lambda_1>_>_>
::ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRHICommandListImmediate *pFVar10;
  undefined8 uVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar12;
  FName FVar13;
  FNameEntryId FVar14;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_58;
  FStatMessage local_48;
  
  if (this != (void *)0x0) {
    LOCK();
    *(int *)((longlong)this + 0x30) = *(int *)((longlong)this + 0x30) + 1;
    UNLOCK();
  }
  bVar5 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  pFVar3 = *(FName **)(*(longlong *)((longlong)this + 0xe0) + 8);
  FVar13 = *pFVar3;
  FVar14 = FVar13.ComparisonIndex.Value;
  uVar9 = FVar13.Number;
  if ((FVar14.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar3[2]);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar14.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar3[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar14.Value;
      local_res18[0]._4_4_ = uVar9;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_14863ba10;
    }
  }
  bVar6 = false;
  FVar13 = local_58;
LAB_14863ba10:
  if ((GIsThreadedRendering != false) &&
     (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                       ,0x21d,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId562,(wchar_t *)**(undefined8 **)((longlong)this + 0xe0),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x232);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId562);
  }
  pFVar10 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0xf0));
  pcVar4 = *(code **)((longlong)this + 0xf0);
  plVar12 = (longlong *)((longlong)this + 0x100);
  if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
    plVar12 = *(longlong **)((longlong)this + 0x118);
  }
  uVar11 = (**(code **)(*plVar12 + 8))();
  (*pcVar4)(uVar11,pFVar10);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res18[0]._0_1_;
      local_48.StatData.Pad[1] = local_res18[0]._1_1_;
      local_48.StatData.Pad[2] = local_res18[0]._2_1_;
      local_48.StatData.Pad[3] = local_res18[0]._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
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
  if (*(longlong *)((longlong)this + 0xf0) != 0) {
    plVar12 = (longlong *)((longlong)this + 0x100);
    if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
      plVar12 = *(longlong **)((longlong)this + 0x118);
    }
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  if (this != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)this + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)this)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14863bc20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectGPUSkin'::__l11::TSTR_ReleaseSkeletalMeshSkinCacheResources563>_>'::__l2::<lambda_1>_>_>
::ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRHICommandListImmediate *pFVar10;
  undefined8 uVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar12;
  FName FVar13;
  FNameEntryId FVar14;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_58;
  FStatMessage local_48;
  
  if (this != (void *)0x0) {
    LOCK();
    *(int *)((longlong)this + 0x30) = *(int *)((longlong)this + 0x30) + 1;
    UNLOCK();
  }
  bVar5 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  pFVar3 = *(FName **)(*(longlong *)((longlong)this + 0xe0) + 8);
  FVar13 = *pFVar3;
  FVar14 = FVar13.ComparisonIndex.Value;
  uVar9 = FVar13.Number;
  if ((FVar14.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar3[2]);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar14.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar3[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar14.Value;
      local_res18[0]._4_4_ = uVar9;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_14863bd10;
    }
  }
  bVar6 = false;
  FVar13 = local_58;
LAB_14863bd10:
  if ((GIsThreadedRendering != false) &&
     (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                       ,0x21d,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId562,(wchar_t *)**(undefined8 **)((longlong)this + 0xe0),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x232);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId562);
  }
  pFVar10 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0xf0));
  pcVar4 = *(code **)((longlong)this + 0xf0);
  plVar12 = (longlong *)((longlong)this + 0x100);
  if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
    plVar12 = *(longlong **)((longlong)this + 0x118);
  }
  uVar11 = (**(code **)(*plVar12 + 8))();
  (*pcVar4)(uVar11,pFVar10);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res18[0]._0_1_;
      local_48.StatData.Pad[1] = local_res18[0]._1_1_;
      local_48.StatData.Pad[2] = local_res18[0]._2_1_;
      local_48.StatData.Pad[3] = local_res18[0]._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
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
  if (*(longlong *)((longlong)this + 0xf0) != 0) {
    plVar12 = (longlong *)((longlong)this + 0x100);
    if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
      plVar12 = *(longlong **)((longlong)this + 0x118);
    }
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  if (this != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)this + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)this)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14863bf20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectGPUSkin::ReleaseResources'::__l2::TSTR_ReleaseSkeletalMeshSkinCacheResources679>_>'::__l2::<lambda_1>_>_>
::ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRHICommandListImmediate *pFVar10;
  undefined8 uVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar12;
  FName FVar13;
  FNameEntryId FVar14;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_58;
  FStatMessage local_48;
  
  if (this != (void *)0x0) {
    LOCK();
    *(int *)((longlong)this + 0x30) = *(int *)((longlong)this + 0x30) + 1;
    UNLOCK();
  }
  bVar5 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  pFVar3 = *(FName **)(*(longlong *)((longlong)this + 0xe0) + 8);
  FVar13 = *pFVar3;
  FVar14 = FVar13.ComparisonIndex.Value;
  uVar9 = FVar13.Number;
  if ((FVar14.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar3[2]);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar14.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar3[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar14.Value;
      local_res18[0]._4_4_ = uVar9;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_14863c010;
    }
  }
  bVar6 = false;
  FVar13 = local_58;
LAB_14863c010:
  if ((GIsThreadedRendering != false) &&
     (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                       ,0x21d,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId562,(wchar_t *)**(undefined8 **)((longlong)this + 0xe0),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x232);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId562);
  }
  pFVar10 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0xf0));
  pcVar4 = *(code **)((longlong)this + 0xf0);
  plVar12 = (longlong *)((longlong)this + 0x100);
  if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
    plVar12 = *(longlong **)((longlong)this + 0x118);
  }
  uVar11 = (**(code **)(*plVar12 + 8))();
  (*pcVar4)(uVar11,pFVar10);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res18[0]._0_1_;
      local_48.StatData.Pad[1] = local_res18[0]._1_1_;
      local_48.StatData.Pad[2] = local_res18[0]._2_1_;
      local_48.StatData.Pad[3] = local_res18[0]._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
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
  if (*(longlong *)((longlong)this + 0xf0) != 0) {
    plVar12 = (longlong *)((longlong)this + 0x100);
    if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
      plVar12 = *(longlong **)((longlong)this + 0x118);
    }
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  if (this != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)this + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)this)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14863c220

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshRenderData::ReleaseStaticRayTracingGeometry'::__l8::TSTR_ResetStaticRayTracingGeometryFlag783>_>'::__l2::<lambda_1>_>_>
::ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  undefined8 uVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar11;
  FName FVar12;
  FNameEntryId FVar13;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_48;
  FStatMessage local_38;
  
  if (this != (void *)0x0) {
    LOCK();
    *(int *)((longlong)this + 0x30) = *(int *)((longlong)this + 0x30) + 1;
    UNLOCK();
  }
  bVar5 = false;
  bVar7 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  pFVar3 = *(FName **)(*(longlong *)((longlong)this + 0xe0) + 8);
  FVar12 = *pFVar3;
  FVar13 = FVar12.ComparisonIndex.Value;
  uVar9 = FVar12.Number;
  if ((FVar13.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar3[2]);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar13.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar3[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18.s.LowPart = FVar13.Value;
      local_res18.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar6 = true;
      goto LAB_14863c302;
    }
  }
  bVar6 = false;
  FVar12 = local_48;
LAB_14863c302:
  if ((GIsThreadedRendering != false) &&
     (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                       ,0x21d,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId562,(wchar_t *)**(undefined8 **)((longlong)this + 0xe0),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x232);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId562);
  }
  GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0xf0));
  pcVar4 = *(code **)((longlong)this + 0xf0);
  plVar11 = (longlong *)((longlong)this + 0x100);
  if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
    plVar11 = *(longlong **)((longlong)this + 0x118);
  }
  uVar10 = (**(code **)(*plVar11 + 8))();
  (*pcVar4)(uVar10);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
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
  if (*(longlong *)((longlong)this + 0xf0) != 0) {
    plVar11 = (longlong *)((longlong)this + 0x100);
    if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
      plVar11 = *(longlong **)((longlong)this + 0x118);
    }
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  if (this != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)this + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)this)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14863c510

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectCPUSkin::Update'::__l6::TSTR_SkelMeshObjectUpdateDataCommand158>_>'::__l2::<lambda_1>_>_>
::ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRHICommandListImmediate *pFVar10;
  undefined8 uVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar12;
  FName FVar13;
  FNameEntryId FVar14;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_58;
  FStatMessage local_48;
  
  if (this != (void *)0x0) {
    LOCK();
    *(int *)((longlong)this + 0x30) = *(int *)((longlong)this + 0x30) + 1;
    UNLOCK();
  }
  bVar5 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  pFVar3 = *(FName **)(*(longlong *)((longlong)this + 0xe0) + 8);
  FVar13 = *pFVar3;
  FVar14 = FVar13.ComparisonIndex.Value;
  uVar9 = FVar13.Number;
  if ((FVar14.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar3[2]);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar14.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar3[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar14.Value;
      local_res18[0]._4_4_ = uVar9;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_14863c600;
    }
  }
  bVar6 = false;
  FVar13 = local_58;
LAB_14863c600:
  if ((GIsThreadedRendering != false) &&
     (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                       ,0x21d,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId562,(wchar_t *)**(undefined8 **)((longlong)this + 0xe0),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x232);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId562);
  }
  pFVar10 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0xf0));
  pcVar4 = *(code **)((longlong)this + 0xf0);
  plVar12 = (longlong *)((longlong)this + 0x100);
  if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
    plVar12 = *(longlong **)((longlong)this + 0x118);
  }
  uVar11 = (**(code **)(*plVar12 + 8))();
  (*pcVar4)(uVar11,pFVar10);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res18[0]._0_1_;
      local_48.StatData.Pad[1] = local_res18[0]._1_1_;
      local_48.StatData.Pad[2] = local_res18[0]._2_1_;
      local_48.StatData.Pad[3] = local_res18[0]._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
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
  if (*(longlong *)((longlong)this + 0xf0) != 0) {
    plVar12 = (longlong *)((longlong)this + 0x100);
    if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
      plVar12 = *(longlong **)((longlong)this + 0x118);
    }
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  if (this != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)this + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)this)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14863c810

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectGPUSkin::Update'::__l8::TSTR_SkelMeshObjectUpdateDataCommand759>_>'::__l2::<lambda_1>_>_>
::ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRHICommandListImmediate *pFVar10;
  undefined8 uVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar12;
  FName FVar13;
  FNameEntryId FVar14;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_58;
  FStatMessage local_48;
  
  if (this != (void *)0x0) {
    LOCK();
    *(int *)((longlong)this + 0x30) = *(int *)((longlong)this + 0x30) + 1;
    UNLOCK();
  }
  bVar5 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  pFVar3 = *(FName **)(*(longlong *)((longlong)this + 0xe0) + 8);
  FVar13 = *pFVar3;
  FVar14 = FVar13.ComparisonIndex.Value;
  uVar9 = FVar13.Number;
  if ((FVar14.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar3[2]);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar14.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar3[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar14.Value;
      local_res18[0]._4_4_ = uVar9;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_14863c900;
    }
  }
  bVar6 = false;
  FVar13 = local_58;
LAB_14863c900:
  if ((GIsThreadedRendering != false) &&
     (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                       ,0x21d,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId562,(wchar_t *)**(undefined8 **)((longlong)this + 0xe0),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x232);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId562);
  }
  pFVar10 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0xf0));
  pcVar4 = *(code **)((longlong)this + 0xf0);
  plVar12 = (longlong *)((longlong)this + 0x100);
  if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
    plVar12 = *(longlong **)((longlong)this + 0x118);
  }
  uVar11 = (**(code **)(*plVar12 + 8))();
  (*pcVar4)(uVar11,pFVar10);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res18[0]._0_1_;
      local_48.StatData.Pad[1] = local_res18[0]._1_1_;
      local_48.StatData.Pad[2] = local_res18[0]._2_1_;
      local_48.StatData.Pad[3] = local_res18[0]._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
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
  if (*(longlong *)((longlong)this + 0xf0) != 0) {
    plVar12 = (longlong *)((longlong)this + 0x100);
    if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
      plVar12 = *(longlong **)((longlong)this + 0x118);
    }
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  if (this != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)this + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)this)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14863cb10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshRenderData::InitResources'::__l8::TSTR_SkeletalMeshInitRayTracingGeometryGroup636>_>'::__l2::<lambda_1>_>_>
::ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  undefined8 uVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar11;
  FName FVar12;
  FNameEntryId FVar13;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_48;
  FStatMessage local_38;
  
  if (this != (void *)0x0) {
    LOCK();
    *(int *)((longlong)this + 0x30) = *(int *)((longlong)this + 0x30) + 1;
    UNLOCK();
  }
  bVar5 = false;
  bVar7 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  pFVar3 = *(FName **)(*(longlong *)((longlong)this + 0xe0) + 8);
  FVar12 = *pFVar3;
  FVar13 = FVar12.ComparisonIndex.Value;
  uVar9 = FVar12.Number;
  if ((FVar13.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar3[2]);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar13.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar3[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18.s.LowPart = FVar13.Value;
      local_res18.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar6 = true;
      goto LAB_14863cbf2;
    }
  }
  bVar6 = false;
  FVar12 = local_48;
LAB_14863cbf2:
  if ((GIsThreadedRendering != false) &&
     (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                       ,0x21d,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId562,(wchar_t *)**(undefined8 **)((longlong)this + 0xe0),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x232);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId562);
  }
  GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0xf0));
  pcVar4 = *(code **)((longlong)this + 0xf0);
  plVar11 = (longlong *)((longlong)this + 0x100);
  if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
    plVar11 = *(longlong **)((longlong)this + 0x118);
  }
  uVar10 = (**(code **)(*plVar11 + 8))();
  (*pcVar4)(uVar10);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
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
  if (*(longlong *)((longlong)this + 0xf0) != 0) {
    plVar11 = (longlong *)((longlong)this + 0x100);
    if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
      plVar11 = *(longlong **)((longlong)this + 0x118);
    }
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  if (this != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)this + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)this)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14863ce00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshRenderData::ReleaseResources'::__l10::TSTR_SkeletalMeshReleaseRayTracingGeometryGroup681>_>'::__l2::<lambda_1>_>_>
::ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  undefined8 uVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar11;
  FName FVar12;
  FNameEntryId FVar13;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_48;
  FStatMessage local_38;
  
  if (this != (void *)0x0) {
    LOCK();
    *(int *)((longlong)this + 0x30) = *(int *)((longlong)this + 0x30) + 1;
    UNLOCK();
  }
  bVar5 = false;
  bVar7 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  pFVar3 = *(FName **)(*(longlong *)((longlong)this + 0xe0) + 8);
  FVar12 = *pFVar3;
  FVar13 = FVar12.ComparisonIndex.Value;
  uVar9 = FVar12.Number;
  if ((FVar13.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar3[2]);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar13.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar3[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18.s.LowPart = FVar13.Value;
      local_res18.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar6 = true;
      goto LAB_14863cee2;
    }
  }
  bVar6 = false;
  FVar12 = local_48;
LAB_14863cee2:
  if ((GIsThreadedRendering != false) &&
     (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                       ,0x21d,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId562,(wchar_t *)**(undefined8 **)((longlong)this + 0xe0),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x232);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId562);
  }
  GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0xf0));
  pcVar4 = *(code **)((longlong)this + 0xf0);
  plVar11 = (longlong *)((longlong)this + 0x100);
  if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
    plVar11 = *(longlong **)((longlong)this + 0x118);
  }
  uVar10 = (**(code **)(*plVar11 + 8))();
  (*pcVar4)(uVar10);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
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
  if (*(longlong *)((longlong)this + 0xf0) != 0) {
    plVar11 = (longlong *)((longlong)this + 0x100);
    if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
      plVar11 = *(longlong **)((longlong)this + 0x118);
    }
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  if (this != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)this + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)this)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14863d0f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`USkeletalMeshComponent::SendRenderDebugPhysics'::__l5::TSTR_SkeletalMesh_SendRenderDebugPhysics1852>_>'::__l2::<lambda_1>_>_>
::ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  undefined8 uVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar11;
  FName FVar12;
  FNameEntryId FVar13;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_48;
  FStatMessage local_38;
  
  if (this != (void *)0x0) {
    LOCK();
    *(int *)((longlong)this + 0x30) = *(int *)((longlong)this + 0x30) + 1;
    UNLOCK();
  }
  bVar5 = false;
  bVar7 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  pFVar3 = *(FName **)(*(longlong *)((longlong)this + 0xe0) + 8);
  FVar12 = *pFVar3;
  FVar13 = FVar12.ComparisonIndex.Value;
  uVar9 = FVar12.Number;
  if ((FVar13.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar3[2]);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar13.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar3[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18.s.LowPart = FVar13.Value;
      local_res18.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar6 = true;
      goto LAB_14863d1d2;
    }
  }
  bVar6 = false;
  FVar12 = local_48;
LAB_14863d1d2:
  if ((GIsThreadedRendering != false) &&
     (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                       ,0x21d,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId562,(wchar_t *)**(undefined8 **)((longlong)this + 0xe0),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x232);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId562);
  }
  GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0xf0));
  pcVar4 = *(code **)((longlong)this + 0xf0);
  plVar11 = (longlong *)((longlong)this + 0x100);
  if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
    plVar11 = *(longlong **)((longlong)this + 0x118);
  }
  uVar10 = (**(code **)(*plVar11 + 8))();
  (*pcVar4)(uVar10);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
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
  if (*(longlong *)((longlong)this + 0xf0) != 0) {
    plVar11 = (longlong *)((longlong)this + 0x100);
    if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
      plVar11 = *(longlong **)((longlong)this + 0x118);
    }
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  if (this != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)this + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)this)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14863d3e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`UpdateVertexFactory'::__l9::TSTR_UpdateGPUSkinVertexFactory2210>_>'::__l2::<lambda_1>_>_>
::ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRHICommandListImmediate *pFVar10;
  undefined8 uVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar12;
  FName FVar13;
  FNameEntryId FVar14;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_58;
  FStatMessage local_48;
  
  if (this != (void *)0x0) {
    LOCK();
    *(int *)((longlong)this + 0x30) = *(int *)((longlong)this + 0x30) + 1;
    UNLOCK();
  }
  bVar5 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  pFVar3 = *(FName **)(*(longlong *)((longlong)this + 0xe0) + 8);
  FVar13 = *pFVar3;
  FVar14 = FVar13.ComparisonIndex.Value;
  uVar9 = FVar13.Number;
  if ((FVar14.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar3[2]);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar14.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar3[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar14.Value;
      local_res18[0]._4_4_ = uVar9;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_14863d4d0;
    }
  }
  bVar6 = false;
  FVar13 = local_58;
LAB_14863d4d0:
  if ((GIsThreadedRendering != false) &&
     (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                       ,0x21d,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId562,(wchar_t *)**(undefined8 **)((longlong)this + 0xe0),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x232);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId562);
  }
  pFVar10 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0xf0));
  pcVar4 = *(code **)((longlong)this + 0xf0);
  plVar12 = (longlong *)((longlong)this + 0x100);
  if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
    plVar12 = *(longlong **)((longlong)this + 0x118);
  }
  uVar11 = (**(code **)(*plVar12 + 8))();
  (*pcVar4)(uVar11,pFVar10);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res18[0]._0_1_;
      local_48.StatData.Pad[1] = local_res18[0]._1_1_;
      local_48.StatData.Pad[2] = local_res18[0]._2_1_;
      local_48.StatData.Pad[3] = local_res18[0]._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
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
  if (*(longlong *)((longlong)this + 0xf0) != 0) {
    plVar12 = (longlong *)((longlong)this + 0x100);
    if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
      plVar12 = *(longlong **)((longlong)this + 0x118);
    }
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  if (this != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)this + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)this)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14863d6e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshSceneProxy::UpdateMorphMaterialUsage_GameThread'::__l23::TSTR_UpdateSkelProxyLODSectionElementsCmd1565>_>'::__l2::<lambda_1>_>_>
::ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  undefined8 uVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar11;
  FName FVar12;
  FNameEntryId FVar13;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_48;
  FStatMessage local_38;
  
  if (this != (void *)0x0) {
    LOCK();
    *(int *)((longlong)this + 0x30) = *(int *)((longlong)this + 0x30) + 1;
    UNLOCK();
  }
  bVar5 = false;
  bVar7 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  pFVar3 = *(FName **)(*(longlong *)((longlong)this + 0xe0) + 8);
  FVar12 = *pFVar3;
  FVar13 = FVar12.ComparisonIndex.Value;
  uVar9 = FVar12.Number;
  if ((FVar13.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar3[2]);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar13.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar3[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18.s.LowPart = FVar13.Value;
      local_res18.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar6 = true;
      goto LAB_14863d7c2;
    }
  }
  bVar6 = false;
  FVar12 = local_48;
LAB_14863d7c2:
  if ((GIsThreadedRendering != false) &&
     (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                       ,0x21d,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId562,(wchar_t *)**(undefined8 **)((longlong)this + 0xe0),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x232);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId562);
  }
  GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0xf0));
  pcVar4 = *(code **)((longlong)this + 0xf0);
  plVar11 = (longlong *)((longlong)this + 0x100);
  if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
    plVar11 = *(longlong **)((longlong)this + 0x118);
  }
  uVar10 = (**(code **)(*plVar11 + 8))();
  (*pcVar4)(uVar10);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
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
  if (*(longlong *)((longlong)this + 0xf0) != 0) {
    plVar11 = (longlong *)((longlong)this + 0x100);
    if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
      plVar11 = *(longlong **)((longlong)this + 0x118);
    }
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  if (this != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)this + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)this)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14863d9d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectGPUSkin::UpdateSkinWeightBuffer'::__l7::TSTR_UpdateSkinCacheSkinWeightBuffer781>_>'::__l2::<lambda_1>_>_>
::ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRHICommandListImmediate *pFVar10;
  undefined8 uVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar12;
  FName FVar13;
  FNameEntryId FVar14;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_58;
  FStatMessage local_48;
  
  if (this != (void *)0x0) {
    LOCK();
    *(int *)((longlong)this + 0x30) = *(int *)((longlong)this + 0x30) + 1;
    UNLOCK();
  }
  bVar5 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  pFVar3 = *(FName **)(*(longlong *)((longlong)this + 0xe0) + 8);
  FVar13 = *pFVar3;
  FVar14 = FVar13.ComparisonIndex.Value;
  uVar9 = FVar13.Number;
  if ((FVar14.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar3[2]);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar14.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar3[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar14.Value;
      local_res18[0]._4_4_ = uVar9;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_14863dac0;
    }
  }
  bVar6 = false;
  FVar13 = local_58;
LAB_14863dac0:
  if ((GIsThreadedRendering != false) &&
     (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                       ,0x21d,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId562,(wchar_t *)**(undefined8 **)((longlong)this + 0xe0),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x232);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId562);
  }
  pFVar10 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0xf0));
  pcVar4 = *(code **)((longlong)this + 0xf0);
  plVar12 = (longlong *)((longlong)this + 0x100);
  if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
    plVar12 = *(longlong **)((longlong)this + 0x118);
  }
  uVar11 = (**(code **)(*plVar12 + 8))();
  (*pcVar4)(uVar11,pFVar10);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res18[0]._0_1_;
      local_48.StatData.Pad[1] = local_res18[0]._1_1_;
      local_48.StatData.Pad[2] = local_res18[0]._2_1_;
      local_48.StatData.Pad[3] = local_res18[0]._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
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
  if (*(longlong *)((longlong)this + 0xf0) != 0) {
    plVar12 = (longlong *)((longlong)this + 0x100);
    if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
      plVar12 = *(longlong **)((longlong)this + 0x118);
    }
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  if (this != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)this + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)this)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14863dcd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD::UpdateSkinWeights'::__l22::TSTR_UpdateSkinWeightsGPUSkin1743>_>'::__l2::<lambda_1>_>_>
::ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRHICommandListImmediate *pFVar10;
  undefined8 uVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar12;
  FName FVar13;
  FNameEntryId FVar14;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_58;
  FStatMessage local_48;
  
  if (this != (void *)0x0) {
    LOCK();
    *(int *)((longlong)this + 0x30) = *(int *)((longlong)this + 0x30) + 1;
    UNLOCK();
  }
  bVar5 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  pFVar3 = *(FName **)(*(longlong *)((longlong)this + 0xe0) + 8);
  FVar13 = *pFVar3;
  FVar14 = FVar13.ComparisonIndex.Value;
  uVar9 = FVar13.Number;
  if ((FVar14.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar3[2]);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar14.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar3[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar14.Value;
      local_res18[0]._4_4_ = uVar9;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_14863ddc0;
    }
  }
  bVar6 = false;
  FVar13 = local_58;
LAB_14863ddc0:
  if ((GIsThreadedRendering != false) &&
     (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                       ,0x21d,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId562,(wchar_t *)**(undefined8 **)((longlong)this + 0xe0),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x232);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId562);
  }
  pFVar10 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0xf0));
  pcVar4 = *(code **)((longlong)this + 0xf0);
  plVar12 = (longlong *)((longlong)this + 0x100);
  if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
    plVar12 = *(longlong **)((longlong)this + 0x118);
  }
  uVar11 = (**(code **)(*plVar12 + 8))();
  (*pcVar4)(uVar11,pFVar10);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res18[0]._0_1_;
      local_48.StatData.Pad[1] = local_res18[0]._1_1_;
      local_48.StatData.Pad[2] = local_res18[0]._2_1_;
      local_48.StatData.Pad[3] = local_res18[0]._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
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
  if (*(longlong *)((longlong)this + 0xf0) != 0) {
    plVar12 = (longlong *)((longlong)this + 0x100);
    if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
      plVar12 = *(longlong **)((longlong)this + 0x118);
    }
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  if (this != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)this + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)this)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14863dfd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FParallelClothCompletionTask>::ExecuteTask
          (TGraphTask<FParallelClothCompletionTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  FName *pFVar7;
  TStatIdData *pTVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  if (this != (TGraphTask<FParallelClothCompletionTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_TStatId___cdecl_FParallelClothCompletionTask::GetStatId(void)const___ptr64'::
      __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_TStatId___cdecl_FParallelClothCompletionTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_TStatId___cdecl_FParallelClothCompletionTask::GetStatId(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`FParallelClothCompletionTask::GetStatId'::__l2::FStat_FParallelClothCompletionTask>
      ::
      FThreadSafeStaticStat<_FParallelClothCompletionTask::GetStatId_::__l2::FStat_FParallelClothCompletionTask>
                (&`public:_struct_TStatId___cdecl_FParallelClothCompletionTask::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_FParallelClothCompletionTask);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_FParallelClothCompletionTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar8 = _StatPtr_FParallelClothCompletionTask;
  if (_StatPtr_FParallelClothCompletionTask == (TStatIdData *)0x0) {
    pFVar7 = ::FName::FName(&local_res10,"FParallelClothCompletionTask");
    pTVar8 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_FParallelClothCompletionTask::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_FParallelClothCompletionTask,*pFVar7,
                        L"FParallelClothCompletionTask","STATGROUP_TaskGraphTasks",
                        "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar11 = *(FName *)&pTVar8->Name;
  bVar3 = false;
  bVar5 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value == 0) && (uVar9 == 0)) {
    FParallelClothCompletionTask::DoTask
              ((FParallelClothCompletionTask *)&this->TaskStorage,GameThread,
               (TRefCountPtr<FBaseGraphTask> *)&local_res8.s);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(pTVar8->StatDescriptionAnsi).Ptr);
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(pTVar8->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar3 = true;
        bVar5 = true;
      }
    }
    bVar4 = false;
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = FVar10.Value;
      local_res8.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
    }
    else {
      FVar11.ComparisonIndex.Value = 0;
      FVar11.Number = 0;
      FVar10.Value = 0;
    }
    FParallelClothCompletionTask::DoTask
              ((FParallelClothCompletionTask *)&this->TaskStorage,GameThread,
               (TRefCountPtr<FBaseGraphTask> *)&local_res8.s);
    if (bVar5) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar4) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_28.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
        local_28.NameAndInfo.Index.Value = FVar10.Value;
        QueryPerformanceCounter(&local_res8);
        local_28.StatData.Pad[4] = '\0';
        local_28.StatData.Pad[5] = '\0';
        local_28.StatData.Pad[6] = '\0';
        local_28.StatData.Pad[7] = '\0';
        local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
        local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
        local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
        local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_28);
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
  if (this != (TGraphTask<FParallelClothCompletionTask> *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14863e2f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall TGraphTask<FParallelClothTask>::ExecuteTask(TGraphTask<FParallelClothTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  Type TVar7;
  FName *pFVar8;
  TStatIdData *pTVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  if (this != (TGraphTask<FParallelClothTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_TStatId___cdecl_FParallelClothTask::GetStatId(void)const___ptr64'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_TStatId___cdecl_FParallelClothTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_TStatId___cdecl_FParallelClothTask::GetStatId(void)const___ptr64'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`FParallelClothTask::GetStatId'::__l2::FStat_FParallelClothTask>::
      FThreadSafeStaticStat<_FParallelClothTask::GetStatId_::__l2::FStat_FParallelClothTask>
                (&`public:_struct_TStatId___cdecl_FParallelClothTask::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_FParallelClothTask);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_FParallelClothTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar9 = _StatPtr_FParallelClothTask;
  if (_StatPtr_FParallelClothTask == (TStatIdData *)0x0) {
    pFVar8 = ::FName::FName(&local_res10,"FParallelClothTask");
    pTVar9 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_FParallelClothTask::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_FParallelClothTask,*pFVar8,L"FParallelClothTask",
                        "STATGROUP_TaskGraphTasks","STATCAT_Advanced",L"Task Graph Tasks",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)&pTVar9->Name;
  bVar3 = false;
  bVar5 = false;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value == 0) && (uVar10 == 0)) {
    TVar7 = FParallelClothTask::GetDesiredThread();
    FParallelClothTask::DoTask
              ((FParallelClothTask *)&this->TaskStorage,TVar7,
               (TRefCountPtr<FBaseGraphTask> *)&local_res8.s);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(pTVar9->StatDescriptionAnsi).Ptr);
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar11.Value;
        local_res8.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(pTVar9->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar3 = true;
        bVar5 = true;
      }
    }
    bVar4 = false;
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = FVar11.Value;
      local_res8.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar4 = true;
    }
    else {
      FVar12.ComparisonIndex.Value = 0;
      FVar12.Number = 0;
      FVar11.Value = 0;
    }
    TVar7 = FParallelClothTask::GetDesiredThread();
    FParallelClothTask::DoTask
              ((FParallelClothTask *)&this->TaskStorage,TVar7,
               (TRefCountPtr<FBaseGraphTask> *)&local_res8.s);
    if (bVar5) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar4) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_28.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
        local_28.NameAndInfo.Index.Value = FVar11.Value;
        QueryPerformanceCounter(&local_res8);
        local_28.StatData.Pad[4] = '\0';
        local_28.StatData.Pad[5] = '\0';
        local_28.StatData.Pad[6] = '\0';
        local_28.StatData.Pad[7] = '\0';
        local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
        local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
        local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
        local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_28);
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
  if (this != (TGraphTask<FParallelClothTask> *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 1486b4130

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources'::__l19::TSTR_FSkeletalMeshObjectLOD_InitResources772>_>'::__l2::<lambda_1>_>_>
::ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRHICommandListImmediate *pFVar10;
  undefined8 uVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar12;
  FName FVar13;
  FNameEntryId FVar14;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_58;
  FStatMessage local_48;
  
  if (this != (void *)0x0) {
    LOCK();
    *(int *)((longlong)this + 0x30) = *(int *)((longlong)this + 0x30) + 1;
    UNLOCK();
  }
  bVar5 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  pFVar3 = *(FName **)(*(longlong *)((longlong)this + 0xe0) + 8);
  FVar13 = *pFVar3;
  FVar14 = FVar13.ComparisonIndex.Value;
  uVar9 = FVar13.Number;
  if ((FVar14.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar3[2]);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar14.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar3[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar14.Value;
      local_res18[0]._4_4_ = uVar9;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_1486b4220;
    }
  }
  bVar6 = false;
  FVar13 = local_58;
LAB_1486b4220:
  if ((GIsThreadedRendering != false) &&
     (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                       ,0x21d,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId562,(wchar_t *)**(undefined8 **)((longlong)this + 0xe0),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x232);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId562);
  }
  pFVar10 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0xf0));
  pcVar4 = *(code **)((longlong)this + 0xf0);
  plVar12 = (longlong *)((longlong)this + 0x100);
  if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
    plVar12 = *(longlong **)((longlong)this + 0x118);
  }
  uVar11 = (**(code **)(*plVar12 + 8))();
  (*pcVar4)(uVar11,pFVar10);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res18[0]._0_1_;
      local_48.StatData.Pad[1] = local_res18[0]._1_1_;
      local_48.StatData.Pad[2] = local_res18[0]._2_1_;
      local_48.StatData.Pad[3] = local_res18[0]._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
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
  if (*(longlong *)((longlong)this + 0xf0) != 0) {
    plVar12 = (longlong *)((longlong)this + 0x100);
    if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
      plVar12 = *(longlong **)((longlong)this + 0x118);
    }
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  if (this != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)this + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)this)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 1486b4430

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::ReleaseResources'::__l2::TSTR_FSkeletalMeshObjectNanite_ReleaseResources488>_>'::__l2::<lambda_1>_>_>
::ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRHICommandListImmediate *pFVar10;
  undefined8 uVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar12;
  FName FVar13;
  FNameEntryId FVar14;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_58;
  FStatMessage local_48;
  
  if (this != (void *)0x0) {
    LOCK();
    *(int *)((longlong)this + 0x30) = *(int *)((longlong)this + 0x30) + 1;
    UNLOCK();
  }
  bVar5 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  pFVar3 = *(FName **)(*(longlong *)((longlong)this + 0xe0) + 8);
  FVar13 = *pFVar3;
  FVar14 = FVar13.ComparisonIndex.Value;
  uVar9 = FVar13.Number;
  if ((FVar14.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar3[2]);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar14.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar3[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar14.Value;
      local_res18[0]._4_4_ = uVar9;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_1486b4520;
    }
  }
  bVar6 = false;
  FVar13 = local_58;
LAB_1486b4520:
  if ((GIsThreadedRendering != false) &&
     (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                       ,0x21d,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId562,(wchar_t *)**(undefined8 **)((longlong)this + 0xe0),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x232);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId562);
  }
  pFVar10 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0xf0));
  pcVar4 = *(code **)((longlong)this + 0xf0);
  plVar12 = (longlong *)((longlong)this + 0x100);
  if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
    plVar12 = *(longlong **)((longlong)this + 0x118);
  }
  uVar11 = (**(code **)(*plVar12 + 8))();
  (*pcVar4)(uVar11,pFVar10);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res18[0]._0_1_;
      local_48.StatData.Pad[1] = local_res18[0]._1_1_;
      local_48.StatData.Pad[2] = local_res18[0]._2_1_;
      local_48.StatData.Pad[3] = local_res18[0]._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
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
  if (*(longlong *)((longlong)this + 0xf0) != 0) {
    plVar12 = (longlong *)((longlong)this + 0x100);
    if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
      plVar12 = *(longlong **)((longlong)this + 0x118);
    }
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  if (this != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)this + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)this)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 1486b4730

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectStatic::FSkeletalMeshObjectLOD::InitResources'::__l2::TSTR_InitSkeletalMeshStaticSkinVertexFactory123>_>'::__l2::<lambda_1>_>_>
::ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRHICommandListImmediate *pFVar10;
  undefined8 uVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar12;
  FName FVar13;
  FNameEntryId FVar14;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_58;
  FStatMessage local_48;
  
  if (this != (void *)0x0) {
    LOCK();
    *(int *)((longlong)this + 0x30) = *(int *)((longlong)this + 0x30) + 1;
    UNLOCK();
  }
  bVar5 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  pFVar3 = *(FName **)(*(longlong *)((longlong)this + 0xe0) + 8);
  FVar13 = *pFVar3;
  FVar14 = FVar13.ComparisonIndex.Value;
  uVar9 = FVar13.Number;
  if ((FVar14.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar3[2]);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar14.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar3[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar14.Value;
      local_res18[0]._4_4_ = uVar9;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_1486b4820;
    }
  }
  bVar6 = false;
  FVar13 = local_58;
LAB_1486b4820:
  if ((GIsThreadedRendering != false) &&
     (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                       ,0x21d,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId562,(wchar_t *)**(undefined8 **)((longlong)this + 0xe0),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x232);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId562);
  }
  pFVar10 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0xf0));
  pcVar4 = *(code **)((longlong)this + 0xf0);
  plVar12 = (longlong *)((longlong)this + 0x100);
  if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
    plVar12 = *(longlong **)((longlong)this + 0x118);
  }
  uVar11 = (**(code **)(*plVar12 + 8))();
  (*pcVar4)(uVar11,pFVar10);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res18[0]._0_1_;
      local_48.StatData.Pad[1] = local_res18[0]._1_1_;
      local_48.StatData.Pad[2] = local_res18[0]._2_1_;
      local_48.StatData.Pad[3] = local_res18[0]._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
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
  if (*(longlong *)((longlong)this + 0xf0) != 0) {
    plVar12 = (longlong *)((longlong)this + 0x100);
    if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
      plVar12 = *(longlong **)((longlong)this + 0x118);
    }
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  if (this != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)this + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)this)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 1486b4a30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FInstancedSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD::InitResources'::__l19::TSTR_InitSkeletalMeshStaticSkinVertexFactory945>_>'::__l2::<lambda_1>_>_>
::ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRHICommandListImmediate *pFVar10;
  undefined8 uVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar12;
  FName FVar13;
  FNameEntryId FVar14;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_58;
  FStatMessage local_48;
  
  if (this != (void *)0x0) {
    LOCK();
    *(int *)((longlong)this + 0x30) = *(int *)((longlong)this + 0x30) + 1;
    UNLOCK();
  }
  bVar5 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  pFVar3 = *(FName **)(*(longlong *)((longlong)this + 0xe0) + 8);
  FVar13 = *pFVar3;
  FVar14 = FVar13.ComparisonIndex.Value;
  uVar9 = FVar13.Number;
  if ((FVar14.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar3[2]);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar14.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar3[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar14.Value;
      local_res18[0]._4_4_ = uVar9;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_1486b4b20;
    }
  }
  bVar6 = false;
  FVar13 = local_58;
LAB_1486b4b20:
  if ((GIsThreadedRendering != false) &&
     (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                       ,0x21d,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId562,(wchar_t *)**(undefined8 **)((longlong)this + 0xe0),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x232);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId562);
  }
  pFVar10 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0xf0));
  pcVar4 = *(code **)((longlong)this + 0xf0);
  plVar12 = (longlong *)((longlong)this + 0x100);
  if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
    plVar12 = *(longlong **)((longlong)this + 0x118);
  }
  uVar11 = (**(code **)(*plVar12 + 8))();
  (*pcVar4)(uVar11,pFVar10);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res18[0]._0_1_;
      local_48.StatData.Pad[1] = local_res18[0]._1_1_;
      local_48.StatData.Pad[2] = local_res18[0]._2_1_;
      local_48.StatData.Pad[3] = local_res18[0]._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
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
  if (*(longlong *)((longlong)this + 0xf0) != 0) {
    plVar12 = (longlong *)((longlong)this + 0x100);
    if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
      plVar12 = *(longlong **)((longlong)this + 0x118);
    }
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  if (this != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)this + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)this)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 1486b4d30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::FSkeletalMeshObjectNanite'::__l11::TSTR_ReleaseSkeletalMeshSkinCacheResources424>_>'::__l2::<lambda_1>_>_>
::ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRHICommandListImmediate *pFVar10;
  undefined8 uVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar12;
  FName FVar13;
  FNameEntryId FVar14;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_58;
  FStatMessage local_48;
  
  if (this != (void *)0x0) {
    LOCK();
    *(int *)((longlong)this + 0x30) = *(int *)((longlong)this + 0x30) + 1;
    UNLOCK();
  }
  bVar5 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  pFVar3 = *(FName **)(*(longlong *)((longlong)this + 0xe0) + 8);
  FVar13 = *pFVar3;
  FVar14 = FVar13.ComparisonIndex.Value;
  uVar9 = FVar13.Number;
  if ((FVar14.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar3[2]);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar14.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar3[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar14.Value;
      local_res18[0]._4_4_ = uVar9;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_1486b4e20;
    }
  }
  bVar6 = false;
  FVar13 = local_58;
LAB_1486b4e20:
  if ((GIsThreadedRendering != false) &&
     (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                       ,0x21d,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId562,(wchar_t *)**(undefined8 **)((longlong)this + 0xe0),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x232);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId562);
  }
  pFVar10 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0xf0));
  pcVar4 = *(code **)((longlong)this + 0xf0);
  plVar12 = (longlong *)((longlong)this + 0x100);
  if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
    plVar12 = *(longlong **)((longlong)this + 0x118);
  }
  uVar11 = (**(code **)(*plVar12 + 8))();
  (*pcVar4)(uVar11,pFVar10);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res18[0]._0_1_;
      local_48.StatData.Pad[1] = local_res18[0]._1_1_;
      local_48.StatData.Pad[2] = local_res18[0]._2_1_;
      local_48.StatData.Pad[3] = local_res18[0]._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
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
  if (*(longlong *)((longlong)this + 0xf0) != 0) {
    plVar12 = (longlong *)((longlong)this + 0x100);
    if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
      plVar12 = *(longlong **)((longlong)this + 0x118);
    }
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  if (this != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)this + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)this)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 1486b5030

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::Update'::__l5::TSTR_SkelMeshObjectUpdateDataCommand532>_>'::__l2::<lambda_1>_>_>
::ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRHICommandListImmediate *pFVar10;
  undefined8 uVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar12;
  FName FVar13;
  FNameEntryId FVar14;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_58;
  FStatMessage local_48;
  
  if (this != (void *)0x0) {
    LOCK();
    *(int *)((longlong)this + 0x30) = *(int *)((longlong)this + 0x30) + 1;
    UNLOCK();
  }
  bVar5 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  pFVar3 = *(FName **)(*(longlong *)((longlong)this + 0xe0) + 8);
  FVar13 = *pFVar3;
  FVar14 = FVar13.ComparisonIndex.Value;
  uVar9 = FVar13.Number;
  if ((FVar14.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar3[2]);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar14.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar3[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar14.Value;
      local_res18[0]._4_4_ = uVar9;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_1486b5120;
    }
  }
  bVar6 = false;
  FVar13 = local_58;
LAB_1486b5120:
  if ((GIsThreadedRendering != false) &&
     (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                       ,0x21d,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId562,(wchar_t *)**(undefined8 **)((longlong)this + 0xe0),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x232);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId562);
  }
  pFVar10 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0xf0));
  pcVar4 = *(code **)((longlong)this + 0xf0);
  plVar12 = (longlong *)((longlong)this + 0x100);
  if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
    plVar12 = *(longlong **)((longlong)this + 0x118);
  }
  uVar11 = (**(code **)(*plVar12 + 8))();
  (*pcVar4)(uVar11,pFVar10);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res18[0]._0_1_;
      local_48.StatData.Pad[1] = local_res18[0]._1_1_;
      local_48.StatData.Pad[2] = local_res18[0]._2_1_;
      local_48.StatData.Pad[3] = local_res18[0]._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
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
  if (*(longlong *)((longlong)this + 0xf0) != 0) {
    plVar12 = (longlong *)((longlong)this + 0x100);
    if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
      plVar12 = *(longlong **)((longlong)this + 0x118);
    }
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  if (this != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)this + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)this)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 1486b5330

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkeletalMeshObjectNanite::UpdateSkinWeightBuffer'::__l7::TSTR_UpdateSkinCacheSkinWeightBuffer740>_>'::__l2::<lambda_1>_>_>
::ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRHICommandListImmediate *pFVar10;
  undefined8 uVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar12;
  FName FVar13;
  FNameEntryId FVar14;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_58;
  FStatMessage local_48;
  
  if (this != (void *)0x0) {
    LOCK();
    *(int *)((longlong)this + 0x30) = *(int *)((longlong)this + 0x30) + 1;
    UNLOCK();
  }
  bVar5 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  pFVar3 = *(FName **)(*(longlong *)((longlong)this + 0xe0) + 8);
  FVar13 = *pFVar3;
  FVar14 = FVar13.ComparisonIndex.Value;
  uVar9 = FVar13.Number;
  if ((FVar14.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar3[2]);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar14.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar3[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar14.Value;
      local_res18[0]._4_4_ = uVar9;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_1486b5420;
    }
  }
  bVar6 = false;
  FVar13 = local_58;
LAB_1486b5420:
  if ((GIsThreadedRendering != false) &&
     (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                       ,0x21d,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId562,(wchar_t *)**(undefined8 **)((longlong)this + 0xe0),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x232);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId562);
  }
  pFVar10 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0xf0));
  pcVar4 = *(code **)((longlong)this + 0xf0);
  plVar12 = (longlong *)((longlong)this + 0x100);
  if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
    plVar12 = *(longlong **)((longlong)this + 0x118);
  }
  uVar11 = (**(code **)(*plVar12 + 8))();
  (*pcVar4)(uVar11,pFVar10);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res18[0]._0_1_;
      local_48.StatData.Pad[1] = local_res18[0]._1_1_;
      local_48.StatData.Pad[2] = local_res18[0]._2_1_;
      local_48.StatData.Pad[3] = local_res18[0]._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
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
  if (*(longlong *)((longlong)this + 0xf0) != 0) {
    plVar12 = (longlong *)((longlong)this + 0x100);
    if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
      plVar12 = *(longlong **)((longlong)this + 0x118);
    }
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  if (this != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)this + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)this)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 148731710

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FStaticMeshVertexBuffers::InitFromDynamicVertex'::__l30::TSTR_StaticMeshVertexBuffersInitFromDynamicVertex1437>_>'::__l2::<lambda_1>_>_>
::ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRHICommandListImmediate *pFVar10;
  undefined8 uVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar12;
  FName FVar13;
  FNameEntryId FVar14;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_58;
  FStatMessage local_48;
  
  if (this != (void *)0x0) {
    LOCK();
    *(int *)((longlong)this + 0x30) = *(int *)((longlong)this + 0x30) + 1;
    UNLOCK();
  }
  bVar5 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  pFVar3 = *(FName **)(*(longlong *)((longlong)this + 0xe0) + 8);
  FVar13 = *pFVar3;
  FVar14 = FVar13.ComparisonIndex.Value;
  uVar9 = FVar13.Number;
  if ((FVar14.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar3[2]);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar14.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar3[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar14.Value;
      local_res18[0]._4_4_ = uVar9;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_148731800;
    }
  }
  bVar6 = false;
  FVar13 = local_58;
LAB_148731800:
  if ((GIsThreadedRendering != false) &&
     (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                       ,0x21d,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId562,(wchar_t *)**(undefined8 **)((longlong)this + 0xe0),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x232);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId562);
  }
  pFVar10 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0xf0));
  pcVar4 = *(code **)((longlong)this + 0xf0);
  plVar12 = (longlong *)((longlong)this + 0x100);
  if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
    plVar12 = *(longlong **)((longlong)this + 0x118);
  }
  uVar11 = (**(code **)(*plVar12 + 8))();
  (*pcVar4)(uVar11,pFVar10);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res18[0]._0_1_;
      local_48.StatData.Pad[1] = local_res18[0]._1_1_;
      local_48.StatData.Pad[2] = local_res18[0]._2_1_;
      local_48.StatData.Pad[3] = local_res18[0]._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
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
  if (*(longlong *)((longlong)this + 0xf0) != 0) {
    plVar12 = (longlong *)((longlong)this + 0x100);
    if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
      plVar12 = *(longlong **)((longlong)this + 0x118);
    }
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  if (this != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)this + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)this)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 148731a10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FStaticMeshVertexBuffers::InitModelVF'::__l7::TSTR_StaticMeshVertexBuffersInitModelVF1335>_>'::__l2::<lambda_1>_>_>
::ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRHICommandListImmediate *pFVar10;
  undefined8 uVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar12;
  FName FVar13;
  FNameEntryId FVar14;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_58;
  FStatMessage local_48;
  
  if (this != (void *)0x0) {
    LOCK();
    *(int *)((longlong)this + 0x30) = *(int *)((longlong)this + 0x30) + 1;
    UNLOCK();
  }
  bVar5 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  pFVar3 = *(FName **)(*(longlong *)((longlong)this + 0xe0) + 8);
  FVar13 = *pFVar3;
  FVar14 = FVar13.ComparisonIndex.Value;
  uVar9 = FVar13.Number;
  if ((FVar14.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar3[2]);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar14.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar3[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar14.Value;
      local_res18[0]._4_4_ = uVar9;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_148731b00;
    }
  }
  bVar6 = false;
  FVar13 = local_58;
LAB_148731b00:
  if ((GIsThreadedRendering != false) &&
     (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                       ,0x21d,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId562,(wchar_t *)**(undefined8 **)((longlong)this + 0xe0),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x232);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId562);
  }
  pFVar10 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0xf0));
  pcVar4 = *(code **)((longlong)this + 0xf0);
  plVar12 = (longlong *)((longlong)this + 0x100);
  if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
    plVar12 = *(longlong **)((longlong)this + 0x118);
  }
  uVar11 = (**(code **)(*plVar12 + 8))();
  (*pcVar4)(uVar11,pFVar10);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res18[0]._0_1_;
      local_48.StatData.Pad[1] = local_res18[0]._1_1_;
      local_48.StatData.Pad[2] = local_res18[0]._2_1_;
      local_48.StatData.Pad[3] = local_res18[0]._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
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
  if (*(longlong *)((longlong)this + 0xf0) != 0) {
    plVar12 = (longlong *)((longlong)this + 0x100);
    if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
      plVar12 = *(longlong **)((longlong)this + 0x118);
    }
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  if (this != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)this + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)this)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 148731d10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FStaticMeshVertexBuffers::InitWithDummyData'::__l28::TSTR_StaticMeshVertexBuffersInitWithDummyData1372>_>'::__l2::<lambda_1>_>_>
::ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRHICommandListImmediate *pFVar10;
  undefined8 uVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar12;
  FName FVar13;
  FNameEntryId FVar14;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_58;
  FStatMessage local_48;
  
  if (this != (void *)0x0) {
    LOCK();
    *(int *)((longlong)this + 0x30) = *(int *)((longlong)this + 0x30) + 1;
    UNLOCK();
  }
  bVar5 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  pFVar3 = *(FName **)(*(longlong *)((longlong)this + 0xe0) + 8);
  FVar13 = *pFVar3;
  FVar14 = FVar13.ComparisonIndex.Value;
  uVar9 = FVar13.Number;
  if ((FVar14.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar3[2]);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar14.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar3[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar14.Value;
      local_res18[0]._4_4_ = uVar9;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_148731e00;
    }
  }
  bVar6 = false;
  FVar13 = local_58;
LAB_148731e00:
  if ((GIsThreadedRendering != false) &&
     (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                       ,0x21d,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId562,(wchar_t *)**(undefined8 **)((longlong)this + 0xe0),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x232);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId562);
  }
  pFVar10 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0xf0));
  pcVar4 = *(code **)((longlong)this + 0xf0);
  plVar12 = (longlong *)((longlong)this + 0x100);
  if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
    plVar12 = *(longlong **)((longlong)this + 0x118);
  }
  uVar11 = (**(code **)(*plVar12 + 8))();
  (*pcVar4)(uVar11,pFVar10);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res18[0]._0_1_;
      local_48.StatData.Pad[1] = local_res18[0]._1_1_;
      local_48.StatData.Pad[2] = local_res18[0]._2_1_;
      local_48.StatData.Pad[3] = local_res18[0]._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
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
  if (*(longlong *)((longlong)this + 0xf0) != 0) {
    plVar12 = (longlong *)((longlong)this + 0x100);
    if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
      plVar12 = *(longlong **)((longlong)this + 0x118);
    }
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  if (this != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)this + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)this)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 148732010

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::SVT::FStreamingUpdateTask>::ExecuteTask
          (TGraphTask<UE::SVT::FStreamingUpdateTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  int iVar8;
  TAtomic<FMinimalName> TVar9;
  LARGE_INTEGER local_res8;
  FStatMessage local_18;
  
  if (this != (TGraphTask<UE::SVT::FStreamingUpdateTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  TVar9 = TStatId::TStatId_NAME_None.Name;
  bVar3 = false;
  bVar5 = false;
  uVar7 = TStatId::TStatId_NAME_None.Name._0_4_;
  iVar8 = TStatId::TStatId_NAME_None.Name._4_4_;
  if ((uVar7 == 0) && (iVar8 == 0)) {
    UE::SVT::FStreamingManager::InstallReadyRequests(*(FStreamingManager **)(this->TaskStorage).Pad)
    ;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,TStatId::TStatId_NAME_None.StatDescriptionAnsi.Ptr);
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = uVar7;
        local_res8.s.HighPart = iVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,TStatId::TStatId_NAME_None.StatDescriptionWide.Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar3 = true;
        bVar5 = true;
      }
    }
    bVar4 = false;
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = uVar7;
      local_res8.s.HighPart = iVar8;
      FThreadStats::AddMessage((FName)TVar9,CycleScopeStart);
      bVar4 = true;
    }
    else {
      TVar9 = (TAtomic<FMinimalName>)0x0;
      uVar7 = 0;
    }
    UE::SVT::FStreamingManager::InstallReadyRequests(*(FStreamingManager **)(this->TaskStorage).Pad)
    ;
    if (bVar5) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar4) && (TVar9 != (TAtomic<FMinimalName>)0x0)) &&
        (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_18.NameAndInfo.Number = TVar9._4_4_ & 0xffff6fff | 0x6000;
        local_18.NameAndInfo.Index.Value = uVar7;
        QueryPerformanceCounter(&local_res8);
        local_18.StatData.Pad[4] = '\0';
        local_18.StatData.Pad[5] = '\0';
        local_18.StatData.Pad[6] = '\0';
        local_18.StatData.Pad[7] = '\0';
        local_18.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
        local_18.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
        local_18.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
        local_18.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_18);
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
  if (this != (TGraphTask<UE::SVT::FStreamingUpdateTask> *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 148798400

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderAssetUpdateTickGTTask>::ExecuteTask
          (TGraphTask<FRenderAssetUpdateTickGTTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  FRenderAssetUpdate *this_00;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  bool bVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FRenderAssetUpdateTickGTTask::GetStatId(void)_::_2_::FStat_FRenderAssetUpdateTickGTTask>
  FVar10;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<FRenderAssetUpdateTickGTTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_TStatId___cdecl_FRenderAssetUpdateTickGTTask::GetStatId(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_TStatId___cdecl_FRenderAssetUpdateTickGTTask::GetStatId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_TStatId___cdecl_FRenderAssetUpdateTickGTTask::GetStatId(void)'::__l2
        ::_thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`FRenderAssetUpdateTickGTTask::GetStatId'::__l2::FStat_FRenderAssetUpdateTickGTTask>
      ::
      FThreadSafeStaticStat<_FRenderAssetUpdateTickGTTask::GetStatId_::__l2::FStat_FRenderAssetUpdateTickGTTask>
                (&`public:_static_struct_TStatId___cdecl_FRenderAssetUpdateTickGTTask::GetStatId(void)'
                  ::__l2::StatPtr_FRenderAssetUpdateTickGTTask);
      _Init_thread_footer(&`public:_static_struct_TStatId___cdecl_FRenderAssetUpdateTickGTTask::GetStatId(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar10 = `public:_static_struct_TStatId___cdecl_FRenderAssetUpdateTickGTTask::GetStatId(void)'::
           __l2::StatPtr_FRenderAssetUpdateTickGTTask;
  if (`public:_static_struct_TStatId___cdecl_FRenderAssetUpdateTickGTTask::GetStatId(void)'::__l2::
      StatPtr_FRenderAssetUpdateTickGTTask ==
      (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FRenderAssetUpdateTickGTTask::GetStatId(void)_::_2_::FStat_FRenderAssetUpdateTickGTTask>
       )0x0) {
    pFVar9 = ::FName::FName(&local_res20,"FRenderAssetUpdateTickGTTask");
    FVar10 = (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FRenderAssetUpdateTickGTTask::GetStatId(void)_::_2_::FStat_FRenderAssetUpdateTickGTTask>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_struct_TStatId___cdecl_FRenderAssetUpdateTickGTTask::GetStatId(void)'
                           ::__l2::StatPtr_FRenderAssetUpdateTickGTTask,*pFVar9,
                          L"FRenderAssetUpdateTickGTTask","STATGROUP_TaskGraphTasks",
                          "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                          MCR_Invalid);
  }
  FVar13 = *(FName *)FVar10;
  bVar4 = false;
  bVar6 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar12.Value;
        local_res10.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18.s.LowPart = FVar12.Value;
      local_res18.s.HighPart = uVar11;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar5 = true;
      goto LAB_148798583;
    }
  }
  bVar5 = false;
  FVar13 = local_48;
LAB_148798583:
  if (*(longlong *)(this->TaskStorage).Pad == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("PendingUpdate",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\RenderAssetUpdate.cpp"
                       ,0x113,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FRenderAssetUpdate::Tick(*(FRenderAssetUpdate **)(this->TaskStorage).Pad,TT_GameThread);
  piVar1 = (int *)(*(longlong *)(this->TaskStorage).Pad + 0x40);
  *piVar1 = *piVar1 + -1;
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_38.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_38);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  this_00 = *(FRenderAssetUpdate **)(this->TaskStorage).Pad;
  if (this_00 != (FRenderAssetUpdate *)0x0) {
    FRenderAssetUpdate::Release(this_00);
  }
  if (this != (TGraphTask<FRenderAssetUpdateTickGTTask> *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 148798720

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FUpdateStreamingRenderAssetsTask>::ExecuteTask
          (TGraphTask<FUpdateStreamingRenderAssetsTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FUpdateStreamingRenderAssetsTask::GetStatId(void)_::_2_::FStat_FUpdateStreamingRenderAssetsTask>
  FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FName local_38;
  FStatMessage local_28;
  
  if (this != (TGraphTask<FUpdateStreamingRenderAssetsTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_TStatId___cdecl_FUpdateStreamingRenderAssetsTask::GetStatId(void)'::
      __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_TStatId___cdecl_FUpdateStreamingRenderAssetsTask::GetStatId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_TStatId___cdecl_FUpdateStreamingRenderAssetsTask::GetStatId(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`FUpdateStreamingRenderAssetsTask::GetStatId'::__l2::FStat_FUpdateStreamingRenderAssetsTask>
      ::
      FThreadSafeStaticStat<_FUpdateStreamingRenderAssetsTask::GetStatId_::__l2::FStat_FUpdateStreamingRenderAssetsTask>
                (&`public:_static_struct_TStatId___cdecl_FUpdateStreamingRenderAssetsTask::GetStatId(void)'
                  ::__l2::StatPtr_FUpdateStreamingRenderAssetsTask);
      _Init_thread_footer(&`public:_static_struct_TStatId___cdecl_FUpdateStreamingRenderAssetsTask::GetStatId(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar8 = `public:_static_struct_TStatId___cdecl_FUpdateStreamingRenderAssetsTask::GetStatId(void)'
          ::__l2::StatPtr_FUpdateStreamingRenderAssetsTask;
  if (`public:_static_struct_TStatId___cdecl_FUpdateStreamingRenderAssetsTask::GetStatId(void)'::
      __l2::StatPtr_FUpdateStreamingRenderAssetsTask ==
      (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FUpdateStreamingRenderAssetsTask::GetStatId(void)_::_2_::FStat_FUpdateStreamingRenderAssetsTask>
       )0x0) {
    pFVar7 = ::FName::FName(&local_res10,"FUpdateStreamingRenderAssetsTask");
    FVar8 = (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FUpdateStreamingRenderAssetsTask::GetStatId(void)_::_2_::FStat_FUpdateStreamingRenderAssetsTask>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_static_struct_TStatId___cdecl_FUpdateStreamingRenderAssetsTask::GetStatId(void)'
                          ::__l2::StatPtr_FUpdateStreamingRenderAssetsTask,*pFVar7,
                         L"FUpdateStreamingRenderAssetsTask","STATGROUP_TaskGraphTasks",
                         "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = FVar10.Value;
      local_res8.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      goto LAB_1487988b3;
    }
  }
  bVar4 = false;
  FVar11 = local_38;
  FVar10.Value = 0;
LAB_1487988b3:
  FTaskTagScope::FTaskTagScope((FTaskTagScope *)&local_28,EParallelGameThread);
  FRenderAssetStreamingManager::UpdateStreamingRenderAssets
            (*(FRenderAssetStreamingManager **)(this->TaskStorage).Pad,
             *(int *)((this->TaskStorage).Pad + 8),*(int *)((this->TaskStorage).Pad + 0xc),
             (bool)(this->TaskStorage).Pad[0x10],true);
  FTaskTagScope::~FTaskTagScope((FTaskTagScope *)&local_28);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_28.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      local_28.NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&local_res8);
      local_28.StatData.Pad[4] = '\0';
      local_28.StatData.Pad[5] = '\0';
      local_28.StatData.Pad[6] = '\0';
      local_28.StatData.Pad[7] = '\0';
      local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_28);
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
  if (this != (TGraphTask<FUpdateStreamingRenderAssetsTask> *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 148836050

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FManualTickFunctionTask>::ExecuteTask(TGraphTask<FManualTickFunctionTask> *this)

{
  int *piVar1;
  FName FVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FManualTickFunctionTask::GetStatId(void)_::_2_::FStat_FManualTickFunctionTask>
  FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  FNameEntryId FVar13;
  LARGE_INTEGER local_res8;
  TGraphTask<FManualTickFunctionTask> *local_res10;
  FName local_res18 [2];
  FStatMessage local_38;
  
  if (this != (TGraphTask<FManualTickFunctionTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  FVar12.ComparisonIndex.Value = 0;
  FVar12.Number = 0;
  FVar13.Value = 0;
  local_res10 = this;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_struct_TStatId___cdecl_FManualTickFunctionTask::GetStatId(void)'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_struct_TStatId___cdecl_FManualTickFunctionTask::GetStatId(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_struct_TStatId___cdecl_FManualTickFunctionTask::GetStatId(void)'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    `public:_static_struct_TStatId___cdecl_FManualTickFunctionTask::GetStatId(void)'::__l2::
    StatPtr_FManualTickFunctionTask =
         (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FManualTickFunctionTask::GetStatId(void)_::_2_::FStat_FManualTickFunctionTask>
          )0x0;
    pFVar8 = ::FName::FName((FName *)&local_res8.s,"FManualTickFunctionTask");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_struct_TStatId___cdecl_FManualTickFunctionTask::GetStatId(void)'::
                __l2::StatPtr_FManualTickFunctionTask,*pFVar8,L"FManualTickFunctionTask",
               "STATGROUP_TaskGraphTasks","STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,
               true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_static_struct_TStatId___cdecl_FManualTickFunctionTask::GetStatId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FVar9 = `public:_static_struct_TStatId___cdecl_FManualTickFunctionTask::GetStatId(void)'::__l2::
          StatPtr_FManualTickFunctionTask;
  if (`public:_static_struct_TStatId___cdecl_FManualTickFunctionTask::GetStatId(void)'::__l2::
      StatPtr_FManualTickFunctionTask ==
      (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FManualTickFunctionTask::GetStatId(void)_::_2_::FStat_FManualTickFunctionTask>
       )0x0) {
    pFVar8 = ::FName::FName(local_res18,"FManualTickFunctionTask");
    FVar9 = (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FManualTickFunctionTask::GetStatId(void)_::_2_::FStat_FManualTickFunctionTask>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_static_struct_TStatId___cdecl_FManualTickFunctionTask::GetStatId(void)'
                          ::__l2::StatPtr_FManualTickFunctionTask,*pFVar8,L"FManualTickFunctionTask"
                         ,"STATGROUP_TaskGraphTasks","STATCAT_Advanced",L"Task Graph Tasks",true,
                         true,ST_int64,true,false,MCR_Invalid);
  }
  FVar2 = *(FName *)FVar9;
  bVar5 = false;
  bVar4 = false;
  bVar6 = false;
  FVar11 = FVar2.ComparisonIndex.Value;
  uVar10 = FVar2.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar11.Value;
        local_res8.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar4 = true;
        bVar6 = true;
      }
    }
    bVar5 = false;
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = FVar11.Value;
      local_res8.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar2,CycleScopeStart);
      bVar5 = true;
      FVar12 = FVar2;
      FVar13.Value = FVar11.Value;
    }
    else {
      FVar12.ComparisonIndex.Value = 0;
      FVar12.Number = 0;
    }
  }
  plVar3 = *(longlong **)(this->TaskStorage).Pad;
  if ((plVar3 != (longlong *)0x0) && ((*(byte *)((longlong)plVar3 + 0xb) & 0xc) != 0)) {
    (**(code **)(*plVar3 + 0x18))
              (plVar3,*(undefined4 *)((this->TaskStorage).Pad + 0xc),(this->TaskStorage).Pad[0x10],
               *(undefined4 *)((this->TaskStorage).Pad + 8),&local_res10);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar13.Value;
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
  if (local_res10 != (TGraphTask<FManualTickFunctionTask> *)0x0) {
    LOCK();
    plVar3 = &local_res10->_padding_;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if (((int)lVar7 == 1) && (local_res10 != (TGraphTask<FManualTickFunctionTask> *)0x0)) {
      (**(code **)local_res10->_padding_)(local_res10,1);
    }
  }
  return;
}

// ExecuteTask @ 1488bed20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TGraphTask<FBatchTickFunctionTask>::ExecuteTask(TGraphTask<FBatchTickFunctionTask> *this)

{
  longlong *plVar1;
  longlong lVar2;
  TRefCountPtr<FBaseGraphTask> local_res8 [4];
  
  if (this != (TGraphTask<FBatchTickFunctionTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  local_res8[0].Reference = (FBaseGraphTask *)this;
  FBatchTickFunctionTask::DoTask
            ((FBatchTickFunctionTask *)&this->TaskStorage,*(Type *)((this->TaskStorage).Pad + 0x14),
             local_res8);
  if ((TGraphTask<FBatchTickFunctionTask> *)local_res8[0].Reference !=
      (TGraphTask<FBatchTickFunctionTask> *)0x0) {
    LOCK();
    plVar1 = (longlong *)&(local_res8[0].Reference)->field_0x30;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar2 == 1) &&
       ((TGraphTask<FBatchTickFunctionTask> *)local_res8[0].Reference !=
        (TGraphTask<FBatchTickFunctionTask> *)0x0)) {
      (*(code *)**(undefined8 **)local_res8[0].Reference)(local_res8[0].Reference,1);
    }
  }
  return;
}

// ExecuteTask @ 1488bed80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FTickTaskSequencer::FDipatchTickGroupTask>::ExecuteTask
          (TGraphTask<FTickTaskSequencer::FDipatchTickGroupTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  Type TVar9;
  Type TVar10;
  bool bVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FTickTaskSequencer::FDipatchTickGroupTask::GetStatId(void)_::_2_::FStat_FDipatchTickGroupTask>
  FVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar14;
  FNameEntryId FVar15;
  FName FVar16;
  Type TVar17;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<FTickTaskSequencer::FDipatchTickGroupTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_struct_TStatId___cdecl_FTickTaskSequencer::FDipatchTickGroupTask::GetStatId(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_struct_TStatId___cdecl_FTickTaskSequencer::FDipatchTickGroupTask::GetStatId(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_struct_TStatId___cdecl_FTickTaskSequencer::FDipatchTickGroupTask::GetStatId(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FThreadSafeStaticStat<`FTickTaskSequencer::FDipatchTickGroupTask::GetStatId'::__l2::FStat_FDipatchTickGroupTask>
    ::
    FThreadSafeStaticStat<_FTickTaskSequencer::FDipatchTickGroupTask::GetStatId_::__l2::FStat_FDipatchTickGroupTask>
              (&`public:_static_struct_TStatId___cdecl_FTickTaskSequencer::FDipatchTickGroupTask::GetStatId(void)'
                ::__l2::StatPtr_FDipatchTickGroupTask);
    _Init_thread_footer(&`public:_static_struct_TStatId___cdecl_FTickTaskSequencer::FDipatchTickGroupTask::GetStatId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FVar13 = `public:_static_struct_TStatId___cdecl_FTickTaskSequencer::FDipatchTickGroupTask::GetStatId(void)'
           ::__l2::StatPtr_FDipatchTickGroupTask;
  if (`public:_static_struct_TStatId___cdecl_FTickTaskSequencer::FDipatchTickGroupTask::GetStatId(void)'
      ::__l2::StatPtr_FDipatchTickGroupTask ==
      (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FTickTaskSequencer::FDipatchTickGroupTask::GetStatId(void)_::_2_::FStat_FDipatchTickGroupTask>
       )0x0) {
    pFVar12 = ::FName::FName(&local_res20,"FDipatchTickGroupTask");
    FVar13 = (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FTickTaskSequencer::FDipatchTickGroupTask::GetStatId(void)_::_2_::FStat_FDipatchTickGroupTask>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_struct_TStatId___cdecl_FTickTaskSequencer::FDipatchTickGroupTask::GetStatId(void)'
                           ::__l2::StatPtr_FDipatchTickGroupTask,*pFVar12,L"FDipatchTickGroupTask",
                          "STATGROUP_TaskGraphTasks","STATCAT_Advanced",L"Task Graph Tasks",true,
                          true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar13;
  bVar5 = false;
  bVar7 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar14 = FVar16.Number;
  if ((FVar15.Value != 0) || (uVar14 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18.s.LowPart = FVar15.Value;
      local_res18.s.HighPart = uVar14;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar6 = true;
      goto LAB_1488bef07;
    }
  }
  bVar6 = false;
  FVar16 = local_48;
LAB_1488bef07:
  TVar17 = CPrio_DispatchTaskPriority.TaskPriorityIfForcedToNormalThreadPriority;
  TVar10 = CPrio_DispatchTaskPriority.TaskPriority;
  TVar9 = CPrio_DispatchTaskPriority.ThreadPriority;
  iVar3 = ENamedThreads::bHasHighPriorityThreads;
  if (((CPrio_DispatchTaskPriority.ThreadPriority == HighThreadPriority) ||
      (iVar3 = ENamedThreads::bHasBackgroundThreads,
      CPrio_DispatchTaskPriority.ThreadPriority == BackgroundThreadPriority)) && (iVar3 == 0)) {
    if (((CPrio_DispatchTaskPriority.TaskPriorityIfForcedToNormalThreadPriority & ~HighTaskPriority)
         != MainQueue) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("!(ThreadAndIndex & ~ThreadIndexMask) && !(TaskPriority & ~TaskPriorityMask)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                            ,0xcd,L""), bVar11)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    if ((((CPrio_DispatchTaskPriority.ThreadPriority & ~ThreadPriorityMask) != MainQueue ||
          (CPrio_DispatchTaskPriority.ThreadPriority & ThreadPriorityMask) == ThreadPriorityMask) ||
        ((CPrio_DispatchTaskPriority.TaskPriority & ~HighTaskPriority) != MainQueue)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("!(ThreadAndIndex & ~ThreadIndexMask) && !(ThreadPriority & ~ThreadPriorityMask) && (ThreadPriority & ThreadPriorityMask) != ThreadPriorityMask && !(TaskPriority & ~TaskPriorityMask)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                            ,0xb1,L""), bVar11)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TVar17 = TVar9 | TVar10;
  }
  FTickTaskSequencer::DispatchTickGroup
            (*(FTickTaskSequencer **)(this->TaskStorage).Pad,TVar17 | AnyNormalThreadNormalTask,
             *(ETickingGroup *)((this->TaskStorage).Pad + 8));
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
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
  if (this != (TGraphTask<FTickTaskSequencer::FDipatchTickGroupTask> *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 1488bf120

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FTickTaskSequencer::FResetTickGroupTask>::ExecuteTask
          (TGraphTask<FTickTaskSequencer::FResetTickGroupTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FTickTaskSequencer::FResetTickGroupTask::GetStatId(void)_::_2_::FStat_FResetTickGroupTask>
  FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar12;
  FNameEntryId FVar13;
  FName FVar14;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<FTickTaskSequencer::FResetTickGroupTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_struct_TStatId___cdecl_FTickTaskSequencer::FResetTickGroupTask::GetStatId(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_struct_TStatId___cdecl_FTickTaskSequencer::FResetTickGroupTask::GetStatId(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_struct_TStatId___cdecl_FTickTaskSequencer::FResetTickGroupTask::GetStatId(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FThreadSafeStaticStat<`FTickTaskSequencer::FResetTickGroupTask::GetStatId'::__l2::FStat_FResetTickGroupTask>
    ::
    FThreadSafeStaticStat<_FTickTaskSequencer::FResetTickGroupTask::GetStatId_::__l2::FStat_FResetTickGroupTask>
              (&`public:_static_struct_TStatId___cdecl_FTickTaskSequencer::FResetTickGroupTask::GetStatId(void)'
                ::__l2::StatPtr_FResetTickGroupTask);
    _Init_thread_footer(&`public:_static_struct_TStatId___cdecl_FTickTaskSequencer::FResetTickGroupTask::GetStatId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FVar11 = `public:_static_struct_TStatId___cdecl_FTickTaskSequencer::FResetTickGroupTask::GetStatId(void)'
           ::__l2::StatPtr_FResetTickGroupTask;
  if (`public:_static_struct_TStatId___cdecl_FTickTaskSequencer::FResetTickGroupTask::GetStatId(void)'
      ::__l2::StatPtr_FResetTickGroupTask ==
      (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FTickTaskSequencer::FResetTickGroupTask::GetStatId(void)_::_2_::FStat_FResetTickGroupTask>
       )0x0) {
    pFVar10 = ::FName::FName(&local_res20,"FResetTickGroupTask");
    FVar11 = (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FTickTaskSequencer::FResetTickGroupTask::GetStatId(void)_::_2_::FStat_FResetTickGroupTask>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_static_struct_TStatId___cdecl_FTickTaskSequencer::FResetTickGroupTask::GetStatId(void)'
                           ::__l2::StatPtr_FResetTickGroupTask,*pFVar10,L"FResetTickGroupTask",
                          "STATGROUP_TaskGraphTasks","STATCAT_Advanced",L"Task Graph Tasks",true,
                          true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar11;
  bVar5 = false;
  bVar7 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Value == 0) && (uVar12 == 0)) {
LAB_1488bf271:
    bVar6 = false;
    FVar14 = local_48;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar13.Value;
        local_res10.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever != false) && (FThreadStats::bPrimaryEnable == false))
    goto LAB_1488bf271;
    local_res18.s.LowPart = FVar13.Value;
    local_res18.s.HighPart = uVar12;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar6 = true;
  }
  iVar3 = ENamedThreads::bHasHighPriorityThreads;
  if (((CPrio_CleanupTaskPriority.ThreadPriority == HighThreadPriority) ||
      (iVar3 = ENamedThreads::bHasBackgroundThreads,
      CPrio_CleanupTaskPriority.ThreadPriority == BackgroundThreadPriority)) && (iVar3 == 0)) {
    if (((CPrio_CleanupTaskPriority.TaskPriorityIfForcedToNormalThreadPriority & ~HighTaskPriority)
         != MainQueue) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("!(ThreadAndIndex & ~ThreadIndexMask) && !(TaskPriority & ~TaskPriorityMask)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                           ,0xcd,L""), bVar9)) goto code_r0x0001488bf34d;
  }
  else if ((((CPrio_CleanupTaskPriority.ThreadPriority & ~ThreadPriorityMask) != MainQueue ||
             (CPrio_CleanupTaskPriority.ThreadPriority & ThreadPriorityMask) == ThreadPriorityMask)
           || ((CPrio_CleanupTaskPriority.TaskPriority & ~HighTaskPriority) != MainQueue)) &&
          (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("!(ThreadAndIndex & ~ThreadIndexMask) && !(ThreadPriority & ~ThreadPriorityMask) && (ThreadPriority & ThreadPriorityMask) != ThreadPriorityMask && !(TaskPriority & ~TaskPriorityMask)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                              ,0xb1,L""), bVar9)) {
code_r0x0001488bf34d:
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FTickTaskSequencer::ResetTickGroup
            (*(FTickTaskSequencer **)(this->TaskStorage).Pad,
             *(ETickingGroup *)((this->TaskStorage).Pad + 8));
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar6) && (FVar14 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
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
  if (this != (TGraphTask<FTickTaskSequencer::FResetTickGroupTask> *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 1488bf4a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall TGraphTask<FTickFunctionTask>::ExecuteTask(TGraphTask<FTickFunctionTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FTickFunctionTask::GetStatId(void)_::_2_::FStat_FTickFunctionTask>
  FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  LARGE_INTEGER local_res8;
  TRefCountPtr<FBaseGraphTask> local_res10;
  FName local_res18 [2];
  FStatMessage local_38;
  
  if (this != (TGraphTask<FTickFunctionTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  local_res10.Reference = (FBaseGraphTask *)this;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_TStatId___cdecl_FTickFunctionTask::GetStatId(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_TStatId___cdecl_FTickFunctionTask::GetStatId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_TStatId___cdecl_FTickFunctionTask::GetStatId(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`FTickFunctionTask::GetStatId'::__l2::FStat_FTickFunctionTask>::
      FThreadSafeStaticStat<_FTickFunctionTask::GetStatId_::__l2::FStat_FTickFunctionTask>
                (&`public:_static_struct_TStatId___cdecl_FTickFunctionTask::GetStatId(void)'::__l2::
                  StatPtr_FTickFunctionTask);
      _Init_thread_footer(&`public:_static_struct_TStatId___cdecl_FTickFunctionTask::GetStatId(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar8 = `public:_static_struct_TStatId___cdecl_FTickFunctionTask::GetStatId(void)'::__l2::
          StatPtr_FTickFunctionTask;
  if (`public:_static_struct_TStatId___cdecl_FTickFunctionTask::GetStatId(void)'::__l2::
      StatPtr_FTickFunctionTask ==
      (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FTickFunctionTask::GetStatId(void)_::_2_::FStat_FTickFunctionTask>
       )0x0) {
    pFVar7 = ::FName::FName(local_res18,"FTickFunctionTask");
    FVar8 = (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FTickFunctionTask::GetStatId(void)_::_2_::FStat_FTickFunctionTask>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_static_struct_TStatId___cdecl_FTickFunctionTask::GetStatId(void)'
                          ::__l2::StatPtr_FTickFunctionTask,*pFVar7,L"FTickFunctionTask",
                         "STATGROUP_TaskGraphTasks","STATCAT_Advanced",L"Task Graph Tasks",true,true
                         ,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value == 0) && (uVar9 == 0)) {
    FTickFunctionTask::DoTask
              ((FTickFunctionTask *)&this->TaskStorage,*(Type *)((this->TaskStorage).Pad + 0x14),
               &local_res10);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar3 = true;
        bVar5 = true;
      }
    }
    bVar4 = false;
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = FVar10.Value;
      local_res8.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
    }
    else {
      FVar11.ComparisonIndex.Value = 0;
      FVar11.Number = 0;
      FVar10.Value = 0;
    }
    FTickFunctionTask::DoTask
              ((FTickFunctionTask *)&this->TaskStorage,*(Type *)((this->TaskStorage).Pad + 0x14),
               &local_res10);
    if (bVar5) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar4) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_38.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
        local_38.NameAndInfo.Index.Value = FVar10.Value;
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
  if ((TGraphTask<FTickFunctionTask> *)local_res10.Reference != (TGraphTask<FTickFunctionTask> *)0x0
     ) {
    LOCK();
    plVar2 = (longlong *)&(local_res10.Reference)->field_0x30;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (((int)lVar6 == 1) &&
       ((TGraphTask<FTickFunctionTask> *)local_res10.Reference !=
        (TGraphTask<FTickFunctionTask> *)0x0)) {
      (*(code *)**(undefined8 **)local_res10.Reference)(local_res10.Reference,1);
    }
  }
  return;
}

// ExecuteTask @ 1489dd040

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall TGraphTask<FCreateCodecTask>::ExecuteTask(TGraphTask<FCreateCodecTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  FName *pFVar8;
  TStatIdData *pTVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  if (this != (TGraphTask<FCreateCodecTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_TStatId___cdecl_FCreateCodecTask::GetStatId(void)const___ptr64'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_TStatId___cdecl_FCreateCodecTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_TStatId___cdecl_FCreateCodecTask::GetStatId(void)const___ptr64'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`FCreateCodecTask::GetStatId'::__l2::FStat_FCreateCodecTask>::
      FThreadSafeStaticStat<_FCreateCodecTask::GetStatId_::__l2::FStat_FCreateCodecTask>
                (&`public:_struct_TStatId___cdecl_FCreateCodecTask::GetStatId(void)const___ptr64'::
                  __l2::StatPtr_FCreateCodecTask);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_FCreateCodecTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar9 = _StatPtr_FCreateCodecTask;
  if (_StatPtr_FCreateCodecTask == (TStatIdData *)0x0) {
    pFVar8 = ::FName::FName(&local_res10,"FCreateCodecTask");
    pTVar9 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_FCreateCodecTask::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_FCreateCodecTask,*pFVar8,L"FCreateCodecTask",
                        "STATGROUP_VTP","STATCAT_Advanced",L"Virtual Texturing Paging",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)&pTVar9->Name;
  bVar4 = false;
  bVar6 = false;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value == 0) && (uVar10 == 0)) {
    FVirtualTextureCodec::Init
              (*(FVirtualTextureCodec **)((this->TaskStorage).Pad + 8),
               (TRefCountPtr<IMemoryReadStream> *)&this->TaskStorage);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(pTVar9->StatDescriptionAnsi).Ptr);
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar11.Value;
        local_res8.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(pTVar9->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar4 = true;
        bVar6 = true;
      }
    }
    bVar5 = false;
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = FVar11.Value;
      local_res8.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar5 = true;
    }
    else {
      FVar12.ComparisonIndex.Value = 0;
      FVar12.Number = 0;
      FVar11.Value = 0;
    }
    FVirtualTextureCodec::Init
              (*(FVirtualTextureCodec **)((this->TaskStorage).Pad + 8),
               (TRefCountPtr<IMemoryReadStream> *)&this->TaskStorage);
    if (bVar6) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar5) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_38.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
        local_38.NameAndInfo.Index.Value = FVar11.Value;
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
  plVar3 = *(longlong **)(this->TaskStorage).Pad;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)(*plVar3 + 0x20))(plVar3,1);
    }
  }
  if (this != (TGraphTask<FCreateCodecTask> *)0x0) {
    LOCK();
    plVar3 = &this->_padding_;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 1489dd370

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall TGraphTask<FTranscodeTask>::ExecuteTask(TGraphTask<FTranscodeTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  TStatIdData *pTVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  if (this != (TGraphTask<FTranscodeTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_TStatId___cdecl_FTranscodeTask::GetStatId(void)const___ptr64'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_TStatId___cdecl_FTranscodeTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_TStatId___cdecl_FTranscodeTask::GetStatId(void)const___ptr64'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`FTranscodeTask::GetStatId'::__l2::FStat_TranscodeJob>::
      FThreadSafeStaticStat<_FTranscodeTask::GetStatId_::__l2::FStat_TranscodeJob>
                (&`public:_struct_TStatId___cdecl_FTranscodeTask::GetStatId(void)const___ptr64'::
                  __l2::StatPtr_TranscodeJob);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_FTranscodeTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar9 = _StatPtr_TranscodeJob;
  if (_StatPtr_TranscodeJob == (TStatIdData *)0x0) {
    pFVar8 = ::FName::FName(&local_res10,"TranscodeJob");
    pTVar9 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_FTranscodeTask::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_TranscodeJob,*pFVar8,L"TranscodeJob","STATGROUP_VTP",
                        "STATCAT_Advanced",L"Virtual Texturing Paging",true,true,ST_int64,true,false
                        ,MCR_Invalid);
  }
  FVar12 = *(FName *)&pTVar9->Name;
  bVar5 = false;
  bVar7 = false;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value == 0) && (uVar10 == 0)) {
    FTranscodeTask::DoTask((FTranscodeTask *)&this->TaskStorage,true);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(pTVar9->StatDescriptionAnsi).Ptr);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar11.Value;
        local_res8.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(pTVar9->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    bVar6 = false;
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = FVar11.Value;
      local_res8.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar6 = true;
    }
    else {
      FVar12.ComparisonIndex.Value = 0;
      FVar12.Number = 0;
      FVar11.Value = 0;
    }
    FTranscodeTask::DoTask((FTranscodeTask *)&this->TaskStorage,true);
    if (bVar7) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar6) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_38.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
        local_38.NameAndInfo.Index.Value = FVar11.Value;
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
  lVar3 = *(longlong *)((this->TaskStorage).Pad + 0x88);
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 0x68);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  plVar4 = *(longlong **)((this->TaskStorage).Pad + 0x80);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar4 + 0x20))(plVar4,1);
    }
  }
  if (this != (TGraphTask<FTranscodeTask> *)0x0) {
    LOCK();
    plVar4 = &this->_padding_;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

