// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraShader
// Functions: 8

// Execute @ 148dfb540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FNiagaraDebugDrawLineIndirectParameters,`NiagaraDebugShaders::DrawDebugLines'::__l2::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FNiagaraDebugDrawLineIndirectParameters,_void___cdecl_NiagaraDebugShaders::DrawDebugLines(FRDGBuilder_&,FSceneView_const_&,FRDGTexture_*,FRDGTexture_*,FRDGBuffer_*,FRDGBuffer_*)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
  FVar6;
  FUniformBufferStaticBindings *pFVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  undefined1 auStackY_138 [32];
  LARGE_INTEGER local_d8;
  FName local_d0;
  FStatMessage local_c0;
  FUniformBufferStaticBindings local_b0;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  FVar11.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::StatPtr_STAT_FRDGPass_Execute ==
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FNiagaraDebugDrawLineIndirectParameters,_void___cdecl_NiagaraDebugShaders::DrawDebugLines(FRDGBuilder_&,FSceneView_const_&,FRDGTexture_*,FRDGTexture_*,FRDGBuffer_*,FRDGBuffer_*)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
           )0x0) {
        pFVar5 = ::FName::FName((FName *)&local_d8.s,"STAT_FRDGPass_Execute");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar5,
                   L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,
                   true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar6 = ::StatPtr_STAT_FRDGPass_Execute;
  if (::StatPtr_STAT_FRDGPass_Execute ==
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FNiagaraDebugDrawLineIndirectParameters,_void___cdecl_NiagaraDebugShaders::DrawDebugLines(FRDGBuilder_&,FSceneView_const_&,FRDGTexture_*,FRDGTexture_*,FRDGBuffer_*,FRDGBuffer_*)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar5 = ::FName::FName((FName *)&local_c0,"STAT_FRDGPass_Execute");
    FVar6 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FNiagaraDebugDrawLineIndirectParameters,_void___cdecl_NiagaraDebugShaders::DrawDebugLines(FRDGBuilder_&,FSceneView_const_&,FRDGTexture_*,FRDGTexture_*,FRDGBuffer_*,FRDGBuffer_*)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar5,
                         L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,
                         ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  local_d0.ComparisonIndex.Value = 0;
  local_d0.Number = 0;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_d8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_d8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d8.s.LowPart = FVar9.Value;
        local_d8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_d8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_d8.s.LowPart = FVar9.Value;
      local_d8.s.HighPart = uVar8;
      local_d0 = FVar10;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = local_d0.ComparisonIndex.Value;
      goto LAB_148dfb6c6;
    }
  }
  bVar3 = false;
  FVar10 = local_d0;
LAB_148dfb6c6:
  pFVar7 = FRDGParameterStruct::GetStaticUniformBuffers
                     ((FRDGParameterStruct *)((longlong)this + 0x30),&local_b0);
  FRHIComputeCommandList::SetStaticUniformBuffers(param_1,pFVar7);
  if (local_b0.UniformBuffers.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHIUniformBuffer_*>)0x0) {
    FMemory::Free((void *)local_b0.UniformBuffers.AllocatorInstance.SecondaryData);
  }
  if (local_b0.Slots.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_b0.Slots.AllocatorInstance.SecondaryData);
  }
  `NiagaraDebugShaders::DrawDebugLines'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x180),(FRHICommandListImmediate *)param_1);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_c0.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_c0.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_d8);
      local_c0.StatData.Pad[4] = '\0';
      local_c0.StatData.Pad[5] = '\0';
      local_c0.StatData.Pad[6] = '\0';
      local_c0.StatData.Pad[7] = '\0';
      local_c0.StatData.Pad[0] = local_d8.s.LowPart._0_1_;
      local_c0.StatData.Pad[1] = local_d8.s.LowPart._1_1_;
      local_c0.StatData.Pad[2] = local_d8.s.LowPart._2_1_;
      local_c0.StatData.Pad[3] = local_d8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_c0);
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

// Execute @ 148dfb8b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FNiagaraDebugDrawLineParameters,`NiagaraDebugShaders::DrawDebugLines'::__l2::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FNiagaraDebugDrawLineParameters,_void___cdecl_NiagaraDebugShaders::DrawDebugLines(FRDGBuilder_&,FSceneView_const_&,FRDGTexture_*,FRDGTexture_*,unsigned_int,FRDGBuffer_*)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
  FVar6;
  FUniformBufferStaticBindings *pFVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  undefined1 auStackY_138 [32];
  LARGE_INTEGER local_d8;
  FName local_d0;
  FStatMessage local_c0;
  FUniformBufferStaticBindings local_b0;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  FVar11.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::StatPtr_STAT_FRDGPass_Execute ==
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FNiagaraDebugDrawLineParameters,_void___cdecl_NiagaraDebugShaders::DrawDebugLines(FRDGBuilder_&,FSceneView_const_&,FRDGTexture_*,FRDGTexture_*,unsigned_int,FRDGBuffer_*)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
           )0x0) {
        pFVar5 = ::FName::FName((FName *)&local_d8.s,"STAT_FRDGPass_Execute");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar5,
                   L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,
                   true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar6 = ::StatPtr_STAT_FRDGPass_Execute;
  if (::StatPtr_STAT_FRDGPass_Execute ==
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FNiagaraDebugDrawLineParameters,_void___cdecl_NiagaraDebugShaders::DrawDebugLines(FRDGBuilder_&,FSceneView_const_&,FRDGTexture_*,FRDGTexture_*,unsigned_int,FRDGBuffer_*)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar5 = ::FName::FName((FName *)&local_c0,"STAT_FRDGPass_Execute");
    FVar6 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FNiagaraDebugDrawLineParameters,_void___cdecl_NiagaraDebugShaders::DrawDebugLines(FRDGBuilder_&,FSceneView_const_&,FRDGTexture_*,FRDGTexture_*,unsigned_int,FRDGBuffer_*)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar5,
                         L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,
                         ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  local_d0.ComparisonIndex.Value = 0;
  local_d0.Number = 0;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_d8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_d8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d8.s.LowPart = FVar9.Value;
        local_d8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_d8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_d8.s.LowPart = FVar9.Value;
      local_d8.s.HighPart = uVar8;
      local_d0 = FVar10;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = local_d0.ComparisonIndex.Value;
      goto LAB_148dfba36;
    }
  }
  bVar3 = false;
  FVar10 = local_d0;
LAB_148dfba36:
  pFVar7 = FRDGParameterStruct::GetStaticUniformBuffers
                     ((FRDGParameterStruct *)((longlong)this + 0x30),&local_b0);
  FRHIComputeCommandList::SetStaticUniformBuffers(param_1,pFVar7);
  if (local_b0.UniformBuffers.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHIUniformBuffer_*>)0x0) {
    FMemory::Free((void *)local_b0.UniformBuffers.AllocatorInstance.SecondaryData);
  }
  if (local_b0.Slots.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_b0.Slots.AllocatorInstance.SecondaryData);
  }
  `NiagaraDebugShaders::DrawDebugLines'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x180),(FRHICommandListImmediate *)param_1);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_c0.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_c0.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_d8);
      local_c0.StatData.Pad[4] = '\0';
      local_c0.StatData.Pad[5] = '\0';
      local_c0.StatData.Pad[6] = '\0';
      local_c0.StatData.Pad[7] = '\0';
      local_c0.StatData.Pad[0] = local_d8.s.LowPart._0_1_;
      local_c0.StatData.Pad[1] = local_d8.s.LowPart._1_1_;
      local_c0.StatData.Pad[2] = local_d8.s.LowPart._2_1_;
      local_c0.StatData.Pad[3] = local_d8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_c0);
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

// Execute @ 148dfbc20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FNiagaraVisualizeTexturePS::FParameters,`NiagaraDebugShaders::VisualizeTexture'::__l46::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FNiagaraVisualizeTexturePS::FParameters,_void___cdecl_NiagaraDebugShaders::VisualizeTexture(FRDGBuilder_&,FSceneView_const_&,FScreenPassRenderTarget_const_&,UE::Math::TIntPoint<int>_const_&,int_const_&,UE::Math::TIntVector4<int>_const_&,FRDGTexture_*,UE::Math::TIntVector4<int>_const_&,unsigned_int,UE::Math::TVector2<double>_const_&)_::_46_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
  FVar6;
  FUniformBufferStaticBindings *pFVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  undefined1 auStackY_138 [32];
  LARGE_INTEGER local_d8;
  FName local_d0;
  FStatMessage local_c0;
  FUniformBufferStaticBindings local_b0;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  FVar11.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::StatPtr_STAT_FRDGPass_Execute ==
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FNiagaraVisualizeTexturePS::FParameters,_void___cdecl_NiagaraDebugShaders::VisualizeTexture(FRDGBuilder_&,FSceneView_const_&,FScreenPassRenderTarget_const_&,UE::Math::TIntPoint<int>_const_&,int_const_&,UE::Math::TIntVector4<int>_const_&,FRDGTexture_*,UE::Math::TIntVector4<int>_const_&,unsigned_int,UE::Math::TVector2<double>_const_&)_::_46_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
           )0x0) {
        pFVar5 = ::FName::FName((FName *)&local_d8.s,"STAT_FRDGPass_Execute");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar5,
                   L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,
                   true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar6 = ::StatPtr_STAT_FRDGPass_Execute;
  if (::StatPtr_STAT_FRDGPass_Execute ==
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FNiagaraVisualizeTexturePS::FParameters,_void___cdecl_NiagaraDebugShaders::VisualizeTexture(FRDGBuilder_&,FSceneView_const_&,FScreenPassRenderTarget_const_&,UE::Math::TIntPoint<int>_const_&,int_const_&,UE::Math::TIntVector4<int>_const_&,FRDGTexture_*,UE::Math::TIntVector4<int>_const_&,unsigned_int,UE::Math::TVector2<double>_const_&)_::_46_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar5 = ::FName::FName((FName *)&local_c0,"STAT_FRDGPass_Execute");
    FVar6 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FNiagaraVisualizeTexturePS::FParameters,_void___cdecl_NiagaraDebugShaders::VisualizeTexture(FRDGBuilder_&,FSceneView_const_&,FScreenPassRenderTarget_const_&,UE::Math::TIntPoint<int>_const_&,int_const_&,UE::Math::TIntVector4<int>_const_&,FRDGTexture_*,UE::Math::TIntVector4<int>_const_&,unsigned_int,UE::Math::TVector2<double>_const_&)_::_46_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar5,
                         L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,
                         ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  local_d0.ComparisonIndex.Value = 0;
  local_d0.Number = 0;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_d8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_d8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d8.s.LowPart = FVar9.Value;
        local_d8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_d8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_d8.s.LowPart = FVar9.Value;
      local_d8.s.HighPart = uVar8;
      local_d0 = FVar10;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = local_d0.ComparisonIndex.Value;
      goto LAB_148dfbda6;
    }
  }
  bVar3 = false;
  FVar10 = local_d0;
LAB_148dfbda6:
  pFVar7 = FRDGParameterStruct::GetStaticUniformBuffers
                     ((FRDGParameterStruct *)((longlong)this + 0x30),&local_b0);
  FRHIComputeCommandList::SetStaticUniformBuffers(param_1,pFVar7);
  if (local_b0.UniformBuffers.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHIUniformBuffer_*>)0x0) {
    FMemory::Free((void *)local_b0.UniformBuffers.AllocatorInstance.SecondaryData);
  }
  if (local_b0.Slots.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_b0.Slots.AllocatorInstance.SecondaryData);
  }
  `NiagaraDebugShaders::VisualizeTexture'::__l46::<lambda_1>::operator()
            ((void *)((longlong)this + 0x180),(FRHICommandListImmediate *)param_1);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_c0.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_c0.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_d8);
      local_c0.StatData.Pad[4] = '\0';
      local_c0.StatData.Pad[5] = '\0';
      local_c0.StatData.Pad[6] = '\0';
      local_c0.StatData.Pad[7] = '\0';
      local_c0.StatData.Pad[0] = local_d8.s.LowPart._0_1_;
      local_c0.StatData.Pad[1] = local_d8.s.LowPart._1_1_;
      local_c0.StatData.Pad[2] = local_d8.s.LowPart._2_1_;
      local_c0.StatData.Pad[3] = local_d8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_c0);
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

// Execute @ 148dfbf90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FNiagaraClearCountsIntCS>'::__l2::<lambda_1>_>::
Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FShaderParameterBindings *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  TAlignedBytes<8,8> TVar9;
  bool bVar10;
  FName *pFVar11;
  TStatIdData *pTVar12;
  FUniformBufferStaticBindings *pFVar13;
  FRHIComputeShader *pFVar14;
  FRHIBatchedShaderUnbinds *pFVar15;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar16;
  FNameEntryId FVar17;
  FName FVar18;
  undefined1 auStackY_188 [32];
  FColor_u_0 local_128 [2];
  LARGE_INTEGER local_120;
  FStatMessage local_118;
  TIntVector3<int>_u_0 local_108;
  FName local_f8;
  FName local_f0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_e0;
  FName local_d0;
  FName local_c8;
  FUniformBufferStaticBindings local_c0;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_118.StatData.Pad = (uchar  [8])this;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FNiagaraClearCountsIntCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FNiagaraClearCountsIntCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FNiagaraClearCountsIntCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FNiagaraClearCountsIntCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FNiagaraClearCountsIntCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FNiagaraClearCountsIntCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FNiagaraClearCountsIntCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FNiagaraClearCountsIntCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FNiagaraClearCountsIntCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar11 = ::FName::FName(&local_d0,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FNiagaraClearCountsIntCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FNiagaraClearCountsIntCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FNiagaraClearCountsIntCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FNiagaraClearCountsIntCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FNiagaraClearCountsIntCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FNiagaraClearCountsIntCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar12 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_c8,"STAT_FRDGPass_Execute");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FNiagaraClearCountsIntCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FNiagaraClearCountsIntCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FNiagaraClearCountsIntCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                          ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute",
                         "STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  FVar18 = *(FName *)&pTVar12->Name;
  bVar6 = false;
  bVar8 = false;
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  FVar17 = FVar18.ComparisonIndex.Value;
  uVar16 = FVar18.Number;
  if ((FVar17.Value != 0) || (uVar16 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_128[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_128[0]._s_0,(pTVar12->StatDescriptionAnsi).Ptr);
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f8.ComparisonIndex.Value = FVar17.Value;
        local_f8.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_f8,(pTVar12->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_120.s.LowPart = FVar17.Value;
      local_120.s.HighPart = uVar16;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar7 = true;
      goto LAB_148dfc111;
    }
  }
  bVar7 = false;
  FVar18 = local_f0;
LAB_148dfc111:
  pFVar13 = FRDGParameterStruct::GetStaticUniformBuffers
                      ((FRDGParameterStruct *)((longlong)this + 0x30),&local_c0);
  FRHIComputeCommandList::SetStaticUniformBuffers(param_1,pFVar13);
  if (local_c0.UniformBuffers.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHIUniformBuffer_*>)0x0) {
    FMemory::Free((void *)local_c0.UniformBuffers.AllocatorInstance.SecondaryData);
  }
  if (local_c0.Slots.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_c0.Slots.AllocatorInstance.SecondaryData);
  }
  TVar9.Pad = local_118.StatData.Pad;
  local_108._0_8_ = *(undefined8 *)((longlong)this + 0x1a0);
  uVar16 = *(uint *)((longlong)this + 0x1a8);
  pvVar2 = *(void **)((longlong)this + 0x188);
  pFVar3 = *(FShaderParametersMetadata **)((longlong)this + 0x180);
  local_108._s_0.Z = uVar16;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_108._s_0);
  pFVar14 = TShaderRefBase<FNiagaraClearCountsIntCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FNiagaraClearCountsIntCS,FShaderMapPointerTable> *)
                       ((longlong)TVar9.Pad + 400));
  SetComputePipelineState(param_1,pFVar14);
  local_e0.ShaderContent = *(FShader **)((longlong)local_118.StatData.Pad + 400);
  local_e0.ShaderMap = *(FShaderMapBase **)((longlong)local_118.StatData.Pad + 0x198);
  ValidateShaderParameters(&local_e0,pFVar3,pvVar2);
  TVar9.Pad = local_118.StatData.Pad;
  ::SetShaderParameters
            (param_1,pFVar14,*(FShaderParameterBindings **)((longlong)local_118.StatData.Pad + 400),
             pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_1,local_108._s_0.X,local_108._s_0.Y,uVar16);
  pFVar14 = TShaderRefBase<FNiagaraClearCountsIntCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FNiagaraClearCountsIntCS,FShaderMapPointerTable> *)
                       ((longlong)TVar9.Pad + 400));
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar15 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
    pFVar4 = *(FShaderParameterBindings **)((longlong)TVar9.Pad + 400);
    if ((pFVar4->RootParameterBufferIndex != 0xffff) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                            ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index."),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    UnsetShaderUAVs(pFVar15,pFVar4);
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_1,pFVar14,pFVar15);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_118.NameAndInfo.Index = FVar18.ComparisonIndex.Value;
      local_118.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_120);
      local_118.StatData.Pad[4] = '\0';
      local_118.StatData.Pad[5] = '\0';
      local_118.StatData.Pad[6] = '\0';
      local_118.StatData.Pad[7] = '\0';
      local_118.StatData.Pad[0] = local_120.s.LowPart._0_1_;
      local_118.StatData.Pad[1] = local_120.s.LowPart._1_1_;
      local_118.StatData.Pad[2] = local_120.s.LowPart._2_1_;
      local_118.StatData.Pad[3] = local_120.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_118);
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

// Execute @ 148dfc400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FNiagaraClearCountsUIntCS>'::__l2::<lambda_1>_>::
Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FShaderParameterBindings *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  TAlignedBytes<8,8> TVar9;
  bool bVar10;
  FName *pFVar11;
  TStatIdData *pTVar12;
  FUniformBufferStaticBindings *pFVar13;
  FRHIComputeShader *pFVar14;
  FRHIBatchedShaderUnbinds *pFVar15;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar16;
  FNameEntryId FVar17;
  FName FVar18;
  undefined1 auStackY_188 [32];
  FColor_u_0 local_128 [2];
  LARGE_INTEGER local_120;
  FStatMessage local_118;
  TIntVector3<int>_u_0 local_108;
  FName local_f8;
  FName local_f0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_e0;
  FName local_d0;
  FName local_c8;
  FUniformBufferStaticBindings local_c0;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_118.StatData.Pad = (uchar  [8])this;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FNiagaraClearCountsUIntCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FNiagaraClearCountsUIntCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FNiagaraClearCountsUIntCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FNiagaraClearCountsUIntCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FNiagaraClearCountsUIntCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FNiagaraClearCountsUIntCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FNiagaraClearCountsUIntCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FNiagaraClearCountsUIntCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FNiagaraClearCountsUIntCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar11 = ::FName::FName(&local_d0,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FNiagaraClearCountsUIntCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FNiagaraClearCountsUIntCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FNiagaraClearCountsUIntCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FNiagaraClearCountsUIntCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FNiagaraClearCountsUIntCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FNiagaraClearCountsUIntCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar12 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_c8,"STAT_FRDGPass_Execute");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FNiagaraClearCountsUIntCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FNiagaraClearCountsUIntCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FNiagaraClearCountsUIntCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                          ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute",
                         "STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  FVar18 = *(FName *)&pTVar12->Name;
  bVar6 = false;
  bVar8 = false;
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  FVar17 = FVar18.ComparisonIndex.Value;
  uVar16 = FVar18.Number;
  if ((FVar17.Value != 0) || (uVar16 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_128[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_128[0]._s_0,(pTVar12->StatDescriptionAnsi).Ptr);
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f8.ComparisonIndex.Value = FVar17.Value;
        local_f8.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_f8,(pTVar12->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_120.s.LowPart = FVar17.Value;
      local_120.s.HighPart = uVar16;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar7 = true;
      goto LAB_148dfc581;
    }
  }
  bVar7 = false;
  FVar18 = local_f0;
LAB_148dfc581:
  pFVar13 = FRDGParameterStruct::GetStaticUniformBuffers
                      ((FRDGParameterStruct *)((longlong)this + 0x30),&local_c0);
  FRHIComputeCommandList::SetStaticUniformBuffers(param_1,pFVar13);
  if (local_c0.UniformBuffers.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHIUniformBuffer_*>)0x0) {
    FMemory::Free((void *)local_c0.UniformBuffers.AllocatorInstance.SecondaryData);
  }
  if (local_c0.Slots.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_c0.Slots.AllocatorInstance.SecondaryData);
  }
  TVar9.Pad = local_118.StatData.Pad;
  local_108._0_8_ = *(undefined8 *)((longlong)this + 0x1a0);
  uVar16 = *(uint *)((longlong)this + 0x1a8);
  pvVar2 = *(void **)((longlong)this + 0x188);
  pFVar3 = *(FShaderParametersMetadata **)((longlong)this + 0x180);
  local_108._s_0.Z = uVar16;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_108._s_0);
  pFVar14 = TShaderRefBase<FNiagaraClearCountsUIntCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FNiagaraClearCountsUIntCS,FShaderMapPointerTable> *)
                       ((longlong)TVar9.Pad + 400));
  SetComputePipelineState(param_1,pFVar14);
  local_e0.ShaderContent = *(FShader **)((longlong)local_118.StatData.Pad + 400);
  local_e0.ShaderMap = *(FShaderMapBase **)((longlong)local_118.StatData.Pad + 0x198);
  ValidateShaderParameters(&local_e0,pFVar3,pvVar2);
  TVar9.Pad = local_118.StatData.Pad;
  ::SetShaderParameters
            (param_1,pFVar14,*(FShaderParameterBindings **)((longlong)local_118.StatData.Pad + 400),
             pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_1,local_108._s_0.X,local_108._s_0.Y,uVar16);
  pFVar14 = TShaderRefBase<FNiagaraClearCountsUIntCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FNiagaraClearCountsUIntCS,FShaderMapPointerTable> *)
                       ((longlong)TVar9.Pad + 400));
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar15 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
    pFVar4 = *(FShaderParameterBindings **)((longlong)TVar9.Pad + 400);
    if ((pFVar4->RootParameterBufferIndex != 0xffff) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                            ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index."),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    UnsetShaderUAVs(pFVar15,pFVar4);
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_1,pFVar14,pFVar15);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_118.NameAndInfo.Index = FVar18.ComparisonIndex.Value;
      local_118.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_120);
      local_118.StatData.Pad[4] = '\0';
      local_118.StatData.Pad[5] = '\0';
      local_118.StatData.Pad[6] = '\0';
      local_118.StatData.Pad[7] = '\0';
      local_118.StatData.Pad[0] = local_120.s.LowPart._0_1_;
      local_118.StatData.Pad[1] = local_120.s.LowPart._1_1_;
      local_118.StatData.Pad[2] = local_120.s.LowPart._2_1_;
      local_118.StatData.Pad[3] = local_120.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_118);
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

// Execute @ 148dfc870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FNiagaraClearUAVCS>'::__l2::<lambda_1>_>::Execute
          (void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FShaderParameterBindings *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  TAlignedBytes<8,8> TVar9;
  bool bVar10;
  FName *pFVar11;
  TStatIdData *pTVar12;
  FUniformBufferStaticBindings *pFVar13;
  FRHIComputeShader *pFVar14;
  FRHIBatchedShaderUnbinds *pFVar15;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar16;
  FNameEntryId FVar17;
  FName FVar18;
  undefined1 auStackY_188 [32];
  FColor_u_0 local_128 [2];
  LARGE_INTEGER local_120;
  FStatMessage local_118;
  TIntVector3<int>_u_0 local_108;
  FName local_f8;
  FName local_f0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_e0;
  FName local_d0;
  FName local_c8;
  FUniformBufferStaticBindings local_c0;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_118.StatData.Pad = (uchar  [8])this;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FNiagaraClearUAVCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FNiagaraClearUAVCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FNiagaraClearUAVCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FNiagaraClearUAVCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FNiagaraClearUAVCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FNiagaraClearUAVCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FNiagaraClearUAVCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FNiagaraClearUAVCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FNiagaraClearUAVCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar11 = ::FName::FName(&local_d0,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FNiagaraClearUAVCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FNiagaraClearUAVCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FNiagaraClearUAVCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FNiagaraClearUAVCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FNiagaraClearUAVCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FNiagaraClearUAVCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar12 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_c8,"STAT_FRDGPass_Execute");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FNiagaraClearUAVCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FNiagaraClearUAVCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FNiagaraClearUAVCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                          ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute",
                         "STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  FVar18 = *(FName *)&pTVar12->Name;
  bVar6 = false;
  bVar8 = false;
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  FVar17 = FVar18.ComparisonIndex.Value;
  uVar16 = FVar18.Number;
  if ((FVar17.Value != 0) || (uVar16 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_128[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_128[0]._s_0,(pTVar12->StatDescriptionAnsi).Ptr);
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f8.ComparisonIndex.Value = FVar17.Value;
        local_f8.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_f8,(pTVar12->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_120.s.LowPart = FVar17.Value;
      local_120.s.HighPart = uVar16;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar7 = true;
      goto LAB_148dfc9f1;
    }
  }
  bVar7 = false;
  FVar18 = local_f0;
LAB_148dfc9f1:
  pFVar13 = FRDGParameterStruct::GetStaticUniformBuffers
                      ((FRDGParameterStruct *)((longlong)this + 0x30),&local_c0);
  FRHIComputeCommandList::SetStaticUniformBuffers(param_1,pFVar13);
  if (local_c0.UniformBuffers.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHIUniformBuffer_*>)0x0) {
    FMemory::Free((void *)local_c0.UniformBuffers.AllocatorInstance.SecondaryData);
  }
  if (local_c0.Slots.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_c0.Slots.AllocatorInstance.SecondaryData);
  }
  TVar9.Pad = local_118.StatData.Pad;
  local_108._0_8_ = *(undefined8 *)((longlong)this + 0x1a0);
  uVar16 = *(uint *)((longlong)this + 0x1a8);
  pvVar2 = *(void **)((longlong)this + 0x188);
  pFVar3 = *(FShaderParametersMetadata **)((longlong)this + 0x180);
  local_108._s_0.Z = uVar16;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_108._s_0);
  pFVar14 = TShaderRefBase<FNiagaraClearUAVCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FNiagaraClearUAVCS,FShaderMapPointerTable> *)
                       ((longlong)TVar9.Pad + 400));
  SetComputePipelineState(param_1,pFVar14);
  local_e0.ShaderContent = *(FShader **)((longlong)local_118.StatData.Pad + 400);
  local_e0.ShaderMap = *(FShaderMapBase **)((longlong)local_118.StatData.Pad + 0x198);
  ValidateShaderParameters(&local_e0,pFVar3,pvVar2);
  TVar9.Pad = local_118.StatData.Pad;
  ::SetShaderParameters
            (param_1,pFVar14,*(FShaderParameterBindings **)((longlong)local_118.StatData.Pad + 400),
             pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_1,local_108._s_0.X,local_108._s_0.Y,uVar16);
  pFVar14 = TShaderRefBase<FNiagaraClearUAVCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FNiagaraClearUAVCS,FShaderMapPointerTable> *)
                       ((longlong)TVar9.Pad + 400));
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar15 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
    pFVar4 = *(FShaderParameterBindings **)((longlong)TVar9.Pad + 400);
    if ((pFVar4->RootParameterBufferIndex != 0xffff) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                            ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index."),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    UnsetShaderUAVs(pFVar15,pFVar4);
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_1,pFVar14,pFVar15);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_118.NameAndInfo.Index = FVar18.ComparisonIndex.Value;
      local_118.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_120);
      local_118.StatData.Pad[4] = '\0';
      local_118.StatData.Pad[5] = '\0';
      local_118.StatData.Pad[6] = '\0';
      local_118.StatData.Pad[7] = '\0';
      local_118.StatData.Pad[0] = local_120.s.LowPart._0_1_;
      local_118.StatData.Pad[1] = local_120.s.LowPart._1_1_;
      local_118.StatData.Pad[2] = local_120.s.LowPart._2_1_;
      local_118.StatData.Pad[3] = local_120.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_118);
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

// Execute @ 148dfcce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FNiagaraGenerateMipsCS>'::__l2::<lambda_1>_>::
Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FShaderParameterBindings *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  TAlignedBytes<8,8> TVar9;
  bool bVar10;
  FName *pFVar11;
  TStatIdData *pTVar12;
  FUniformBufferStaticBindings *pFVar13;
  FRHIComputeShader *pFVar14;
  FRHIBatchedShaderUnbinds *pFVar15;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar16;
  FNameEntryId FVar17;
  FName FVar18;
  undefined1 auStackY_188 [32];
  FColor_u_0 local_128 [2];
  LARGE_INTEGER local_120;
  FStatMessage local_118;
  TIntVector3<int>_u_0 local_108;
  FName local_f8;
  FName local_f0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_e0;
  FName local_d0;
  FName local_c8;
  FUniformBufferStaticBindings local_c0;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_118.StatData.Pad = (uchar  [8])this;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FNiagaraGenerateMipsCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FNiagaraGenerateMipsCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FNiagaraGenerateMipsCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FNiagaraGenerateMipsCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FNiagaraGenerateMipsCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FNiagaraGenerateMipsCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FNiagaraGenerateMipsCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FNiagaraGenerateMipsCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FNiagaraGenerateMipsCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar11 = ::FName::FName(&local_d0,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FNiagaraGenerateMipsCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FNiagaraGenerateMipsCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FNiagaraGenerateMipsCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FNiagaraGenerateMipsCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FNiagaraGenerateMipsCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FNiagaraGenerateMipsCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar12 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_c8,"STAT_FRDGPass_Execute");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FNiagaraGenerateMipsCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FNiagaraGenerateMipsCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FNiagaraGenerateMipsCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                          ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute",
                         "STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  FVar18 = *(FName *)&pTVar12->Name;
  bVar6 = false;
  bVar8 = false;
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  FVar17 = FVar18.ComparisonIndex.Value;
  uVar16 = FVar18.Number;
  if ((FVar17.Value != 0) || (uVar16 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_128[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_128[0]._s_0,(pTVar12->StatDescriptionAnsi).Ptr);
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f8.ComparisonIndex.Value = FVar17.Value;
        local_f8.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_f8,(pTVar12->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_120.s.LowPart = FVar17.Value;
      local_120.s.HighPart = uVar16;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar7 = true;
      goto LAB_148dfce61;
    }
  }
  bVar7 = false;
  FVar18 = local_f0;
LAB_148dfce61:
  pFVar13 = FRDGParameterStruct::GetStaticUniformBuffers
                      ((FRDGParameterStruct *)((longlong)this + 0x30),&local_c0);
  FRHIComputeCommandList::SetStaticUniformBuffers(param_1,pFVar13);
  if (local_c0.UniformBuffers.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHIUniformBuffer_*>)0x0) {
    FMemory::Free((void *)local_c0.UniformBuffers.AllocatorInstance.SecondaryData);
  }
  if (local_c0.Slots.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_c0.Slots.AllocatorInstance.SecondaryData);
  }
  TVar9.Pad = local_118.StatData.Pad;
  local_108._0_8_ = *(undefined8 *)((longlong)this + 0x1a0);
  uVar16 = *(uint *)((longlong)this + 0x1a8);
  pvVar2 = *(void **)((longlong)this + 0x188);
  pFVar3 = *(FShaderParametersMetadata **)((longlong)this + 0x180);
  local_108._s_0.Z = uVar16;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_108._s_0);
  pFVar14 = TShaderRefBase<FNiagaraGenerateMipsCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FNiagaraGenerateMipsCS,FShaderMapPointerTable> *)
                       ((longlong)TVar9.Pad + 400));
  SetComputePipelineState(param_1,pFVar14);
  local_e0.ShaderContent = *(FShader **)((longlong)local_118.StatData.Pad + 400);
  local_e0.ShaderMap = *(FShaderMapBase **)((longlong)local_118.StatData.Pad + 0x198);
  ValidateShaderParameters(&local_e0,pFVar3,pvVar2);
  TVar9.Pad = local_118.StatData.Pad;
  ::SetShaderParameters
            (param_1,pFVar14,*(FShaderParameterBindings **)((longlong)local_118.StatData.Pad + 400),
             pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_1,local_108._s_0.X,local_108._s_0.Y,uVar16);
  pFVar14 = TShaderRefBase<FNiagaraGenerateMipsCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FNiagaraGenerateMipsCS,FShaderMapPointerTable> *)
                       ((longlong)TVar9.Pad + 400));
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar15 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
    pFVar4 = *(FShaderParameterBindings **)((longlong)TVar9.Pad + 400);
    if ((pFVar4->RootParameterBufferIndex != 0xffff) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                            ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index."),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    UnsetShaderUAVs(pFVar15,pFVar4);
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_1,pFVar14,pFVar15);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_118.NameAndInfo.Index = FVar18.ComparisonIndex.Value;
      local_118.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_120);
      local_118.StatData.Pad[4] = '\0';
      local_118.StatData.Pad[5] = '\0';
      local_118.StatData.Pad[6] = '\0';
      local_118.StatData.Pad[7] = '\0';
      local_118.StatData.Pad[0] = local_120.s.LowPart._0_1_;
      local_118.StatData.Pad[1] = local_120.s.LowPart._1_1_;
      local_118.StatData.Pad[2] = local_120.s.LowPart._2_1_;
      local_118.StatData.Pad[3] = local_120.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_118);
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

// Execute @ 148dfd150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FNiagaraUpdateMeshGPUSceneInstancesCS>'::__l2::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  FShaderParameterBindings *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  TAlignedBytes<8,8> TVar9;
  bool bVar10;
  FName *pFVar11;
  TStatIdData *pTVar12;
  FUniformBufferStaticBindings *pFVar13;
  FRHIComputeShader *pFVar14;
  FRHIBatchedShaderUnbinds *pFVar15;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar16;
  FNameEntryId FVar17;
  FName FVar18;
  undefined1 auStackY_188 [32];
  FColor_u_0 local_128 [2];
  LARGE_INTEGER local_120;
  FStatMessage local_118;
  TIntVector3<int>_u_0 local_108;
  FName local_f8;
  FName local_f0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_e0;
  FName local_d0;
  FName local_c8;
  FUniformBufferStaticBindings local_c0;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_118.StatData.Pad = (uchar  [8])this;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FNiagaraUpdateMeshGPUSceneInstancesCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FNiagaraUpdateMeshGPUSceneInstancesCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FNiagaraGPUSceneUtils::FUpdateMeshParticleInstancesParams*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FNiagaraUpdateMeshGPUSceneInstancesCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FNiagaraUpdateMeshGPUSceneInstancesCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FNiagaraGPUSceneUtils::FUpdateMeshParticleInstancesParams*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FNiagaraUpdateMeshGPUSceneInstancesCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FNiagaraUpdateMeshGPUSceneInstancesCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FNiagaraGPUSceneUtils::FUpdateMeshParticleInstancesParams*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar11 = ::FName::FName(&local_d0,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FNiagaraUpdateMeshGPUSceneInstancesCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FNiagaraUpdateMeshGPUSceneInstancesCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FNiagaraGPUSceneUtils::FUpdateMeshParticleInstancesParams*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FNiagaraUpdateMeshGPUSceneInstancesCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FNiagaraUpdateMeshGPUSceneInstancesCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FNiagaraGPUSceneUtils::FUpdateMeshParticleInstancesParams*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar12 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_c8,"STAT_FRDGPass_Execute");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FNiagaraUpdateMeshGPUSceneInstancesCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FNiagaraUpdateMeshGPUSceneInstancesCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FNiagaraGPUSceneUtils::FUpdateMeshParticleInstancesParams*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                          ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar11,L"FRDGPass Execute",
                         "STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  FVar18 = *(FName *)&pTVar12->Name;
  bVar6 = false;
  bVar8 = false;
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  FVar17 = FVar18.ComparisonIndex.Value;
  uVar16 = FVar18.Number;
  if ((FVar17.Value != 0) || (uVar16 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_128[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_128[0]._s_0,(pTVar12->StatDescriptionAnsi).Ptr);
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f8.ComparisonIndex.Value = FVar17.Value;
        local_f8.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_f8,(pTVar12->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_120.s.LowPart = FVar17.Value;
      local_120.s.HighPart = uVar16;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar7 = true;
      goto LAB_148dfd2d1;
    }
  }
  bVar7 = false;
  FVar18 = local_f0;
LAB_148dfd2d1:
  pFVar13 = FRDGParameterStruct::GetStaticUniformBuffers
                      ((FRDGParameterStruct *)((longlong)this + 0x30),&local_c0);
  FRHIComputeCommandList::SetStaticUniformBuffers(param_1,pFVar13);
  if (local_c0.UniformBuffers.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHIUniformBuffer_*>)0x0) {
    FMemory::Free((void *)local_c0.UniformBuffers.AllocatorInstance.SecondaryData);
  }
  if (local_c0.Slots.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_c0.Slots.AllocatorInstance.SecondaryData);
  }
  TVar9.Pad = local_118.StatData.Pad;
  local_108._0_8_ = *(undefined8 *)((longlong)this + 0x1a0);
  uVar16 = *(uint *)((longlong)this + 0x1a8);
  pvVar2 = *(void **)((longlong)this + 0x188);
  pFVar3 = *(FShaderParametersMetadata **)((longlong)this + 0x180);
  local_108._s_0.Z = uVar16;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_108._s_0);
  pFVar14 = TShaderRefBase<FNiagaraUpdateMeshGPUSceneInstancesCS,FShaderMapPointerTable>::
            GetComputeShader((TShaderRefBase<FNiagaraUpdateMeshGPUSceneInstancesCS,FShaderMapPointerTable>
                              *)((longlong)TVar9.Pad + 400));
  SetComputePipelineState(param_1,pFVar14);
  local_e0.ShaderContent = *(FShader **)((longlong)local_118.StatData.Pad + 400);
  local_e0.ShaderMap = *(FShaderMapBase **)((longlong)local_118.StatData.Pad + 0x198);
  ValidateShaderParameters(&local_e0,pFVar3,pvVar2);
  TVar9.Pad = local_118.StatData.Pad;
  ::SetShaderParameters
            (param_1,pFVar14,*(FShaderParameterBindings **)((longlong)local_118.StatData.Pad + 400),
             pFVar3,pvVar2);
  FRHIComputeCommandList::DispatchComputeShader(param_1,local_108._s_0.X,local_108._s_0.Y,uVar16);
  pFVar14 = TShaderRefBase<FNiagaraUpdateMeshGPUSceneInstancesCS,FShaderMapPointerTable>::
            GetComputeShader((TShaderRefBase<FNiagaraUpdateMeshGPUSceneInstancesCS,FShaderMapPointerTable>
                              *)((longlong)TVar9.Pad + 400));
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar15 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
    pFVar4 = *(FShaderParameterBindings **)((longlong)TVar9.Pad + 400);
    if ((pFVar4->RootParameterBufferIndex != 0xffff) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                            ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index."),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    UnsetShaderUAVs(pFVar15,pFVar4);
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_1,pFVar14,pFVar15);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_118.NameAndInfo.Index = FVar18.ComparisonIndex.Value;
      local_118.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_120);
      local_118.StatData.Pad[4] = '\0';
      local_118.StatData.Pad[5] = '\0';
      local_118.StatData.Pad[6] = '\0';
      local_118.StatData.Pad[7] = '\0';
      local_118.StatData.Pad[0] = local_120.s.LowPart._0_1_;
      local_118.StatData.Pad[1] = local_120.s.LowPart._1_1_;
      local_118.StatData.Pad[2] = local_120.s.LowPart._2_1_;
      local_118.StatData.Pad[3] = local_120.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_118);
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

