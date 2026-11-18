// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWriteQueue
// Functions: 1

// ExecuteTask @ 1446ecf20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
::ExecuteTask(TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  FName *pFVar3;
  uchar *puVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  longlong lVar9;
  bool bVar10;
  uint uVar11;
  FRHICommandListImmediate *pFVar12;
  undefined8 uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uchar *puVar14;
  FName FVar15;
  FNameEntryId FVar16;
  uchar *puVar17;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_58;
  FStatMessage local_48;
  
  if (this != (TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar6 = false;
  bVar8 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  pFVar3 = *(FName **)(*(longlong *)(this->TaskStorage).Pad + 8);
  FVar15 = *pFVar3;
  FVar16 = FVar15.ComparisonIndex.Value;
  uVar11 = FVar15.Number;
  if ((FVar16.Value != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar3[2]);
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar16.Value;
        local_res10.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar3[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar16.Value;
      local_res18[0]._4_4_ = uVar11;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar7 = true;
      goto LAB_1446ed010;
    }
  }
  bVar7 = false;
  FVar15 = local_58;
LAB_1446ed010:
  if ((GIsThreadedRendering != false) &&
     (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1)) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                        ,0x21d,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId562,
               (wchar_t *)**(undefined8 **)(this->TaskStorage).Pad,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x232);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId562);
  }
  pFVar12 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)((this->TaskStorage).Pad + 0x10));
  pcVar5 = *(code **)((this->TaskStorage).Pad + 0x10);
  puVar17 = (this->TaskStorage).Pad + 0x20;
  puVar4 = *(uchar **)((this->TaskStorage).Pad + 0x38);
  puVar14 = puVar17;
  if (puVar4 != (uchar *)0x0) {
    puVar14 = puVar4;
  }
  uVar13 = (**(code **)(*(longlong *)puVar14 + 8))();
  (*pcVar5)(uVar13,pFVar12);
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
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
      local_48.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
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
  if (*(longlong *)((this->TaskStorage).Pad + 0x10) != 0) {
    puVar4 = *(uchar **)((this->TaskStorage).Pad + 0x38);
    if (puVar4 != (uchar *)0x0) {
      puVar17 = puVar4;
    }
    (**(code **)(*(longlong *)puVar17 + 0x10))(puVar17);
  }
  if (this != (TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
               *)0x0) {
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

