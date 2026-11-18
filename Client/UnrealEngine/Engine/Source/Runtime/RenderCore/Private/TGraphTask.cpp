// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 6

// ExecuteTask @ 145e07cf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall TGraphTask<FPreloadShaderTask>::ExecuteTask(TGraphTask<FPreloadShaderTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
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
  
  if (this != (TGraphTask<FPreloadShaderTask> *)0x0) {
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
    FPreloadShaderTask::DoTask
              ((FPreloadShaderTask *)&this->TaskStorage,AnyNormalThreadNormalTask,
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
    FPreloadShaderTask::DoTask
              ((FPreloadShaderTask *)&this->TaskStorage,AnyNormalThreadNormalTask,
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
  plVar3 = *(longlong **)((this->TaskStorage).Pad + 8);
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
  if (this != (TGraphTask<FPreloadShaderTask> *)0x0) {
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

// ExecuteTask @ 145e07f40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<TFunctionGraphTaskImpl<void___cdecl(void),1>_>::ExecuteTask
          (TGraphTask<TFunctionGraphTaskImpl<void___cdecl(void),1>_> *this)

{
  int *piVar1;
  longlong *plVar2;
  FName *pFVar3;
  code *pcVar4;
  uchar *puVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  longlong lVar9;
  uint uVar10;
  undefined8 uVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uchar *puVar12;
  FName FVar13;
  FNameEntryId FVar14;
  uchar *puVar15;
  LARGE_INTEGER local_res8;
  FName local_38;
  FStatMessage local_28;
  
  if (this != (TGraphTask<TFunctionGraphTaskImpl<void___cdecl(void),1>_> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  pFVar3 = *(FName **)(this->TaskStorage).Pad;
  bVar6 = false;
  bVar8 = false;
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  FVar13 = *pFVar3;
  FVar14 = FVar13.ComparisonIndex.Value;
  uVar10 = FVar13.Number;
  if ((FVar14.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8.s,(char *)pFVar3[2]);
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar14.Value;
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
      local_res8.s.LowPart = FVar14.Value;
      local_res8.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar7 = true;
      goto LAB_145e0802a;
    }
  }
  bVar7 = false;
  FVar13 = local_38;
  FVar14.Value = 0;
LAB_145e0802a:
  UE::Core::Private::Function::CheckCallable(*(void **)((this->TaskStorage).Pad + 0x10));
  pcVar4 = *(code **)((this->TaskStorage).Pad + 0x10);
  puVar15 = (this->TaskStorage).Pad + 0x20;
  puVar5 = *(uchar **)((this->TaskStorage).Pad + 0x38);
  puVar12 = puVar15;
  if (puVar5 != (uchar *)0x0) {
    puVar12 = puVar5;
  }
  uVar11 = (**(code **)(*(longlong *)puVar12 + 8))();
  (*pcVar4)(uVar11);
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_28.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      local_28.NameAndInfo.Index.Value = FVar14.Value;
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
  if (*(longlong *)((this->TaskStorage).Pad + 0x10) != 0) {
    puVar5 = *(uchar **)((this->TaskStorage).Pad + 0x38);
    if (puVar5 != (uchar *)0x0) {
      puVar15 = puVar5;
    }
    (**(code **)(*(longlong *)puVar15 + 0x10))(puVar15);
  }
  if (this != (TGraphTask<TFunctionGraphTaskImpl<void___cdecl(void),1>_> *)0x0) {
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

// ExecuteTask @ 145e08190

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`BeginInitResource'::__l2::TSTR_InitCommand295>_>'::__l2::<lambda_1>_>_>
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
      goto LAB_145e08272;
    }
  }
  bVar6 = false;
  FVar12 = local_48;
LAB_145e08272:
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
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0xf0));
  pcVar4 = *(code **)((longlong)this + 0xf0);
  plVar11 = (longlong *)((longlong)this + 0x100);
  if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
    plVar11 = *(longlong **)((longlong)this + 0x118);
  }
  uVar10 = (**(code **)(*plVar11 + 8))();
  (*pcVar4)(uVar10,0x154be5ed0);
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

// ExecuteTask @ 145e08480

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`BeginReleaseResource'::__l2::TSTR_ReleaseCommand376>_>'::__l2::<lambda_1>_>_>
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
      goto LAB_145e08562;
    }
  }
  bVar6 = false;
  FVar12 = local_48;
LAB_145e08562:
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

// ExecuteTask @ 145e08770

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`BeginUpdateResourceRHI'::__l2::TSTR_UpdateCommand304>_>'::__l2::<lambda_1>_>_>
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
      goto LAB_145e08852;
    }
  }
  bVar6 = false;
  FVar12 = local_48;
LAB_145e08852:
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
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0xf0));
  pcVar4 = *(code **)((longlong)this + 0xf0);
  plVar11 = (longlong *)((longlong)this + 0x100);
  if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
    plVar11 = *(longlong **)((longlong)this + 0x118);
  }
  uVar10 = (**(code **)(*plVar11 + 8))();
  (*pcVar4)(uVar10,0x154be5ed0);
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

// ExecuteTask @ 145e08a60

void __thiscall
TGraphTask<FRenderThreadCommandPipe::FRenderCommandListTask>::ExecuteTask
          (TGraphTask<FRenderThreadCommandPipe::FRenderCommandListTask> *this)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  
  if (this != (TGraphTask<FRenderThreadCommandPipe::FRenderCommandListTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  if ((GIsThreadedRendering != false) &&
     (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                       ,0x21d,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FRenderThreadCommandPipe::ExecuteCommands(*(FRenderCommandList **)(this->TaskStorage).Pad);
  if (this != (TGraphTask<FRenderThreadCommandPipe::FRenderCommandListTask> *)0x0) {
    LOCK();
    plVar1 = &this->_padding_;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

