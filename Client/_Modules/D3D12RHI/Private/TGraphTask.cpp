// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 2

// ExecuteTask @ 145a15450

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
TGraphTask<FD3D12RayTracingPipelineCache::FShaderCompileTask>::ExecuteTask
          (TGraphTask<FD3D12RayTracingPipelineCache::FShaderCompileTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_RTPSO_CompileShader> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  if (this != (TGraphTask<FD3D12RayTracingPipelineCache::FShaderCompileTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  FVar8 = StatPtr_STAT_RTPSO_CompileShader;
  if (StatPtr_STAT_RTPSO_CompileShader == (FThreadSafeStaticStat<FStat_STAT_RTPSO_CompileShader>)0x0
     ) {
    pFVar7 = ::FName::FName(&local_res10,"STAT_RTPSO_CompileShader");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_RTPSO_CompileShader>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RTPSO_CompileShader,*pFVar7,
                       L"RTPSO Compile Shader","STATGROUP_D3D12RayTracing","STATCAT_Advanced",
                       L"D3D12RHI: Ray Tracing",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value == 0) && (uVar9 == 0)) {
    FD3D12RayTracingPipelineCache::FShaderCompileTask::DoTask
              ((FShaderCompileTask *)&this->TaskStorage,AnyHiPriThreadHiPriTask,
               (TRefCountPtr<FBaseGraphTask> *)&local_res8.s);
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
    FD3D12RayTracingPipelineCache::FShaderCompileTask::DoTask
              ((FShaderCompileTask *)&this->TaskStorage,AnyHiPriThreadHiPriTask,
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
  if (this != (TGraphTask<FD3D12RayTracingPipelineCache::FShaderCompileTask> *)0x0) {
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

// ExecuteTask @ 145a65d60

/* WARNING: Removing unreachable block (ram,0x000145a65ef1) */
/* WARNING: Removing unreachable block (ram,0x000145a65f4f) */
/* WARNING: Removing unreachable block (ram,0x000145a65f02) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
TGraphTask<FWaitInitialMipDataUploadTask>::ExecuteTask
          (TGraphTask<FWaitInitialMipDataUploadTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  FName FVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FName *pFVar10;
  TStatIdData *pTVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar12;
  uint *puVar13;
  FNameEntryId FVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  FColor_u_0 local_res8 [2];
  uint local_res10;
  uint uStackX_14;
  uint local_res18;
  undefined4 local_res20;
  FName local_90;
  uint local_88;
  uint uStack_84;
  LARGE_INTEGER local_80;
  FName local_78;
  FName local_70;
  FStatMessage local_60;
  undefined8 local_50;
  ulonglong uVar18;
  
  if (this != (TGraphTask<FWaitInitialMipDataUploadTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_struct_TStatId___cdecl_FWaitInitialMipDataUploadTask::GetStatId(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_struct_TStatId___cdecl_FWaitInitialMipDataUploadTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_struct_TStatId___cdecl_FWaitInitialMipDataUploadTask::GetStatId(void)const___ptr64'::
     __l2::_thread_safe_static_guard_0__ == -1)) {
    FThreadSafeStaticStat<`FWaitInitialMipDataUploadTask::GetStatId'::__l2::FStat_FGatherRequestsTask>
    ::
    FThreadSafeStaticStat<_FWaitInitialMipDataUploadTask::GetStatId_::__l2::FStat_FGatherRequestsTask>
              (&`public:_struct_TStatId___cdecl_FWaitInitialMipDataUploadTask::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_FGatherRequestsTask);
    _Init_thread_footer(&`public:_struct_TStatId___cdecl_FWaitInitialMipDataUploadTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  uVar15 = 0;
  pTVar11 = _StatPtr_FGatherRequestsTask;
  if (_StatPtr_FGatherRequestsTask == (TStatIdData *)0x0) {
    pFVar10 = ::FName::FName(&local_78,"FGatherRequestsTask");
    pTVar11 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_struct_TStatId___cdecl_FWaitInitialMipDataUploadTask::GetStatId(void)const___ptr64'
                          ::__l2::StatPtr_FGatherRequestsTask,*pFVar10,L"FGatherRequestsTask",
                         "STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI",true,true,ST_int64,true
                         ,false,MCR_Invalid);
  }
  FVar3 = *(FName *)&pTVar11->Name;
  bVar7 = false;
  bVar6 = false;
  bVar8 = false;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  FVar14 = FVar3.ComparisonIndex.Value;
  uVar12 = FVar3.Number;
  if ((FVar14.Value != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(pTVar11->StatDescriptionAnsi).Ptr);
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_90.ComparisonIndex.Value = FVar14.Value;
        local_90.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_90,(pTVar11->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar6 = true;
        bVar8 = true;
      }
    }
    bVar7 = false;
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res10 = FVar14.Value;
      uStackX_14 = uVar12;
      local_70 = FVar3;
      FThreadStats::AddMessage(FVar3,CycleScopeStart);
      bVar7 = true;
    }
  }
  lVar4 = *(longlong *)(this->TaskStorage).Pad;
  local_res10 = 0;
  uVar16 = 0;
  puVar13 = (uint *)(lVar4 + 0x1f8);
  uVar18 = uVar15;
  if (puVar13 != (uint *)0x0) {
    local_88 = *puVar13;
    local_res18 = 0;
    if (local_88 != 0) {
      for (; (local_88 >> local_res18 & 1) == 0; local_res18 = local_res18 + 1) {
      }
    }
    uStack_84 = 0x20;
    if (local_88 != 0) {
      uStack_84 = local_res18;
    }
    local_50 = CONCAT44(uStack_84,local_88);
    uVar16 = (ulonglong)uStack_84;
    uVar18 = (ulonglong)local_88;
    uVar15 = *(ulonglong *)(lVar4 + 0x200 + (ulonglong)uStack_84 * 8);
  }
  local_res20 = 0;
  for (; uVar15 != 0; uVar15 = *(ulonglong *)(uVar15 + 0x200 + uVar16 * 8)) {
    if (*(char *)(uVar15 + 0x1f1) == '\x02') {
      if (((*(uint *)(uVar15 + 0x1ac) & 0x100000) == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Locked == 1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Public\\RHIPoolAllocator.h"
                             ,0x50,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(uint *)(uVar15 + 0x1ac) = *(uint *)(uVar15 + 0x1ac) & 0xffefffff;
    }
    uVar17 = (uint)uVar18 & ~(1 << ((byte)uVar16 & 0x1f));
    uVar18 = (ulonglong)uVar17;
    uVar12 = 0;
    if (uVar17 != 0) {
      for (; (uVar17 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
      }
    }
    if (uVar17 == 0) break;
    uVar16 = (ulonglong)uVar12;
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FVar3 = local_70;
  if ((((bVar7) && (local_70 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_60.NameAndInfo.Index = FVar3.ComparisonIndex.Value;
      local_60.NameAndInfo.Number = FVar3.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_80);
      local_60.StatData.Pad[4] = '\0';
      local_60.StatData.Pad[5] = '\0';
      local_60.StatData.Pad[6] = '\0';
      local_60.StatData.Pad[7] = '\0';
      local_60.StatData.Pad[0] = local_80.s.LowPart._0_1_;
      local_60.StatData.Pad[1] = local_80.s.LowPart._1_1_;
      local_60.StatData.Pad[2] = local_80.s.LowPart._2_1_;
      local_60.StatData.Pad[3] = local_80.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_60);
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
  FD3D12ResourceLocation::ReleaseResource
            ((FD3D12ResourceLocation *)((this->TaskStorage).Pad + 0x80));
  FD3D12ResourceLocation::ReleaseResource((FD3D12ResourceLocation *)((this->TaskStorage).Pad + 8));
  lVar4 = *(longlong *)(this->TaskStorage).Pad;
  if (lVar4 != 0) {
    (**(code **)(*(longlong *)(lVar4 + 0x138) + 0x10))();
  }
  if (this != (TGraphTask<FWaitInitialMipDataUploadTask> *)0x0) {
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

