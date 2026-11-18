// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 4

// FD3D12CommandContextBase @ 1459a8680

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12CommandContextBase * __thiscall
FD3D12CommandContextBase::FD3D12CommandContextBase
          (FD3D12CommandContextBase *this,FD3D12Adapter *param_1,FRHIGPUMask param_2)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = -1;
  this->_padding_ = -1;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 6) = 0;
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7FD3D12CommandContextBase__6B_;
  (this->GPUMask).GPUMask = param_2.GPUMask;
  (this->PhysicalGPUMask).GPUMask = param_2.GPUMask;
  return this;
}

// AsRedirector @ 1459b2400

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12CommandContextRedirector * __thiscall
FD3D12CommandContextBase::AsRedirector(FD3D12CommandContextBase *this)

{
  return (FD3D12CommandContextRedirector *)0x0;
}

// RHISetAsyncComputeBudget @ 1459cfb00

void __thiscall
FD3D12CommandContextBase::RHISetAsyncComputeBudget
          (FD3D12CommandContextBase *this,EAsyncComputeBudget param_1)

{
  return;
}

// RHIEndDrawingViewport @ 145ab2ab0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12CommandContextBase::RHIEndDrawingViewport
          (FD3D12CommandContextBase *this,FRHIViewport *param_1,bool param_2,bool param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  DWORD DVar7;
  uint uVar8;
  longlong *plVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_D3D12PresentTime> FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  IConsoleManager *pIVar12;
  TConsoleVariableData<int> *pTVar13;
  FNameEntryId FVar14;
  FName FVar15;
  FName local_res10;
  FColor_u_0 local_res18 [4];
  LARGE_INTEGER local_78;
  LARGE_INTEGER local_70;
  FName local_68;
  FName local_60;
  FStatMessage local_50;
  
  if (D3D12RHI::RHIConsoleVariables::LogViewportEvents != 0) {
    DVar7 = GetCurrentThreadId();
    FThreadManager::GetThreadName(DVar7);
    if (4 < (byte)LogD3D12RHI._0_1_) {
      plVar9 = (longlong *)(**(code **)(this->_padding_ + 0x290))(this,0);
      if (plVar9[0x31] == 0) {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
  }
  pTVar13 = (TConsoleVariableData<int> *)0x0;
  FVar11 = StatPtr_STAT_D3D12PresentTime;
  if (StatPtr_STAT_D3D12PresentTime == (FThreadSafeStaticStat<FStat_STAT_D3D12PresentTime>)0x0) {
    pFVar10 = ::FName::FName(&local_68,"STAT_D3D12PresentTime");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_D3D12PresentTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12PresentTime,*pFVar10,
                        L"Present time","STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar11;
  bVar3 = false;
  bVar5 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar8 = FVar15.Number;
  if ((FVar14.Value == 0) && (uVar8 == 0)) {
LAB_145ab2c83:
    bVar4 = false;
    FVar15 = local_60;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar14.Value;
        local_res10.Number = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Viewport.cpp"
                   ,0x302);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145ab2c83;
    local_78.s.LowPart = FVar14.Value;
    local_78.s.HighPart = uVar8;
    FThreadStats::AddMessage(FVar15,CycleScopeStart);
    bVar4 = true;
  }
  if (param_2) {
    bVar6 = FD3D12Viewport::Present((FD3D12Viewport *)param_1,this,param_3);
    if (!bVar6) goto LAB_145ab2d2e;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pIVar12 = IConsoleManager::Get();
      plVar9 = (longlong *)(**(code **)((longlong)*pIVar12 + 0xc0))(pIVar12);
      if (plVar9 != (longlong *)0x0) {
        pTVar13 = (TConsoleVariableData<int> *)(**(code **)(*plVar9 + 0x68))(plVar9);
      }
      CFinishFrameVar = pTVar13;
      _Init_thread_footer(&::_TSS0);
    }
  }
  pTVar13 = CFinishFrameVar;
  bVar6 = IsInParallelRenderingThread();
  if (!bVar6) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (pTVar13->ShadowedValue[1] == 0) {
    (**(code **)(*(longlong *)param_1 + 0x50))();
    (**(code **)(*(longlong *)param_1 + 0x58))(param_1);
  }
  else {
    (**(code **)(*(longlong *)param_1 + 0x58))(param_1);
    (**(code **)(*(longlong *)param_1 + 0x50))(param_1);
  }
LAB_145ab2d2e:
  if (GInputLatencyTimer.RenderThreadTrigger != false) {
    (**(code **)(*(longlong *)param_1 + 0x50))(param_1);
    QueryPerformanceCounter(&local_78);
    GInputLatencyTimer.DeltaTime = local_78.s.LowPart - GInputLatencyTimer.StartTime;
    GInputLatencyTimer.RenderThreadTrigger = false;
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_50.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_50.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_70);
      local_50.StatData.Pad[4] = '\0';
      local_50.StatData.Pad[5] = '\0';
      local_50.StatData.Pad[6] = '\0';
      local_50.StatData.Pad[7] = '\0';
      local_50.StatData.Pad[0] = local_70.s.LowPart._0_1_;
      local_50.StatData.Pad[1] = local_70.s.LowPart._1_1_;
      local_50.StatData.Pad[2] = local_70.s.LowPart._2_1_;
      local_50.StatData.Pad[3] = local_70.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_50);
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
  return;
}

