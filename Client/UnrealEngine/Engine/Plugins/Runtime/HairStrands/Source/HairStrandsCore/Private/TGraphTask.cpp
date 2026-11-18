// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 12

// ExecuteTask @ 14dfc0aa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`InternalReleaseResource<FHairCardsInterpolationResource>'::__l5::TSTR_ReleaseHairResourceCommand1048>_>'::__l2::<lambda_1>_>_>
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
      goto LAB_14dfc0b90;
    }
  }
  bVar6 = false;
  FVar13 = local_58;
LAB_14dfc0b90:
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
              (&`public:_void___cdecl_FRenderThreadCommandPipe::TRenderCommandTask<`public:_static_void___cdecl_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairCardsInterpolationResource>(FHairCardsInterpolationResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_>(FRenderCommandPipe*___ptr64,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>&&___ptr64)'::`2'::<lambda_1>_>::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId562,
               (wchar_t *)**(undefined8 **)((longlong)this + 0xe0),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x232);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_FRenderThreadCommandPipe::TRenderCommandTask<`public:_static_void___cdecl_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairCardsInterpolationResource>(FHairCardsInterpolationResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_>(FRenderCommandPipe*___ptr64,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>&&___ptr64)'::`2'::<lambda_1>_>::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId562);
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

// ExecuteTask @ 14dfc0da0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`InternalReleaseResource<FHairCardsRestResource>'::__l5::TSTR_ReleaseHairResourceCommand1048>_>'::__l2::<lambda_1>_>_>
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
      goto LAB_14dfc0e90;
    }
  }
  bVar6 = false;
  FVar13 = local_58;
LAB_14dfc0e90:
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
              (&`public:_void___cdecl_FRenderThreadCommandPipe::TRenderCommandTask<`public:_static_void___cdecl_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairCardsRestResource>(FHairCardsRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_>(FRenderCommandPipe*___ptr64,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>&&___ptr64)'::`2'::<lambda_1>_>::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId562,
               (wchar_t *)**(undefined8 **)((longlong)this + 0xe0),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x232);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_FRenderThreadCommandPipe::TRenderCommandTask<`public:_static_void___cdecl_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairCardsRestResource>(FHairCardsRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_>(FRenderCommandPipe*___ptr64,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>&&___ptr64)'::`2'::<lambda_1>_>::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId562);
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

// ExecuteTask @ 14dfc10a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`InternalReleaseResource<FHairMeshesRestResource>'::__l5::TSTR_ReleaseHairResourceCommand1048>_>'::__l2::<lambda_1>_>_>
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
      goto LAB_14dfc1190;
    }
  }
  bVar6 = false;
  FVar13 = local_58;
LAB_14dfc1190:
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
              (&`public:_void___cdecl_FRenderThreadCommandPipe::TRenderCommandTask<`public:_static_void___cdecl_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairMeshesRestResource>(FHairMeshesRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_>(FRenderCommandPipe*___ptr64,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>&&___ptr64)'::`2'::<lambda_1>_>::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId562,
               (wchar_t *)**(undefined8 **)((longlong)this + 0xe0),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x232);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_FRenderThreadCommandPipe::TRenderCommandTask<`public:_static_void___cdecl_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairMeshesRestResource>(FHairMeshesRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_>(FRenderCommandPipe*___ptr64,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>&&___ptr64)'::`2'::<lambda_1>_>::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId562);
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

// ExecuteTask @ 14dfc13a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`InternalReleaseResource<FHairStrandsClusterResource>'::__l5::TSTR_ReleaseHairResourceCommand1048>_>'::__l2::<lambda_1>_>_>
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
      goto LAB_14dfc1490;
    }
  }
  bVar6 = false;
  FVar13 = local_58;
LAB_14dfc1490:
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
              (&`public:_void___cdecl_FRenderThreadCommandPipe::TRenderCommandTask<`public:_static_void___cdecl_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsClusterResource>(FHairStrandsClusterResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_>(FRenderCommandPipe*___ptr64,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>&&___ptr64)'::`2'::<lambda_1>_>::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId562,
               (wchar_t *)**(undefined8 **)((longlong)this + 0xe0),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x232);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_FRenderThreadCommandPipe::TRenderCommandTask<`public:_static_void___cdecl_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsClusterResource>(FHairStrandsClusterResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_>(FRenderCommandPipe*___ptr64,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>&&___ptr64)'::`2'::<lambda_1>_>::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId562);
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

// ExecuteTask @ 14dfc16a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`InternalReleaseResource<FHairStrandsInterpolationResource>'::__l5::TSTR_ReleaseHairResourceCommand1048>_>'::__l2::<lambda_1>_>_>
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
      goto LAB_14dfc1790;
    }
  }
  bVar6 = false;
  FVar13 = local_58;
LAB_14dfc1790:
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
              (&`public:_void___cdecl_FRenderThreadCommandPipe::TRenderCommandTask<`public:_static_void___cdecl_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsInterpolationResource>(FHairStrandsInterpolationResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_>(FRenderCommandPipe*___ptr64,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>&&___ptr64)'::`2'::<lambda_1>_>::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId562,
               (wchar_t *)**(undefined8 **)((longlong)this + 0xe0),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x232);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_FRenderThreadCommandPipe::TRenderCommandTask<`public:_static_void___cdecl_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsInterpolationResource>(FHairStrandsInterpolationResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_>(FRenderCommandPipe*___ptr64,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>&&___ptr64)'::`2'::<lambda_1>_>::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId562);
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

// ExecuteTask @ 14dfc19a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`InternalReleaseResource<FHairStrandsRaytracingResource>'::__l5::TSTR_ReleaseHairResourceCommand1048>_>'::__l2::<lambda_1>_>_>
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
      goto LAB_14dfc1a90;
    }
  }
  bVar6 = false;
  FVar13 = local_58;
LAB_14dfc1a90:
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
              (&`public:_void___cdecl_FRenderThreadCommandPipe::TRenderCommandTask<`public:_static_void___cdecl_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsRaytracingResource>(FHairStrandsRaytracingResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_>(FRenderCommandPipe*___ptr64,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>&&___ptr64)'::`2'::<lambda_1>_>::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId562,
               (wchar_t *)**(undefined8 **)((longlong)this + 0xe0),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x232);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_FRenderThreadCommandPipe::TRenderCommandTask<`public:_static_void___cdecl_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsRaytracingResource>(FHairStrandsRaytracingResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_>(FRenderCommandPipe*___ptr64,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>&&___ptr64)'::`2'::<lambda_1>_>::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId562);
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

// ExecuteTask @ 14dfc1ca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`InternalReleaseResource<FHairStrandsRestResource>'::__l5::TSTR_ReleaseHairResourceCommand1048>_>'::__l2::<lambda_1>_>_>
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
      goto LAB_14dfc1d90;
    }
  }
  bVar6 = false;
  FVar13 = local_58;
LAB_14dfc1d90:
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
              (&`public:_void___cdecl_FRenderThreadCommandPipe::TRenderCommandTask<`public:_static_void___cdecl_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsRestResource>(FHairStrandsRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_>(FRenderCommandPipe*___ptr64,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>&&___ptr64)'::`2'::<lambda_1>_>::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId562,
               (wchar_t *)**(undefined8 **)((longlong)this + 0xe0),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x232);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_FRenderThreadCommandPipe::TRenderCommandTask<`public:_static_void___cdecl_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`void___cdecl_InternalReleaseResource<FHairStrandsRestResource>(FHairStrandsRestResource*___ptr64&___ptr64,bool)'::`5'::TSTR_ReleaseHairResourceCommand1048>_>(FRenderCommandPipe*___ptr64,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>&&___ptr64)'::`2'::<lambda_1>_>::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId562);
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

// ExecuteTask @ 14dfc1fa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`UGroomBindingAsset::ReleaseResource'::__l17::TSTR_ReleaseHairStrandsPlatformDataCommand455>_>'::__l2::<lambda_1>_>_>
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
      goto LAB_14dfc2090;
    }
  }
  bVar6 = false;
  FVar13 = local_58;
LAB_14dfc2090:
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

// ExecuteTask @ 14dfc22a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`UGroomBindingAsset::ReleaseResource'::__l9::TSTR_ReleaseHairStrandsResourceCommand390>_>'::__l2::<lambda_1>_>_>
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
      goto LAB_14dfc2390;
    }
  }
  bVar6 = false;
  FVar13 = local_58;
LAB_14dfc2390:
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

// ExecuteTask @ 14dfc25a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`UGroomBindingAsset::ReleaseResource'::__l13::TSTR_ReleaseHairStrandsResourceCommand413>_>'::__l2::<lambda_1>_>_>
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
      goto LAB_14dfc2690;
    }
  }
  bVar6 = false;
  FVar13 = local_58;
LAB_14dfc2690:
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

// ExecuteTask @ 14dfc28a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`UGroomBindingAsset::ReleaseResource'::__l15::TSTR_ReleaseHairStrandsResourceCommand434>_>'::__l2::<lambda_1>_>_>
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
      goto LAB_14dfc2990;
    }
  }
  bVar6 = false;
  FVar13 = local_58;
LAB_14dfc2990:
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

// ExecuteTask @ 14e00bd90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`UGroomComponent::TickAtThisTime'::__l5::TSTR_FGroomCacheUpdate3669>_>'::__l2::<lambda_1>_>_>
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
      goto LAB_14e00be80;
    }
  }
  bVar6 = false;
  FVar13 = local_58;
LAB_14e00be80:
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

