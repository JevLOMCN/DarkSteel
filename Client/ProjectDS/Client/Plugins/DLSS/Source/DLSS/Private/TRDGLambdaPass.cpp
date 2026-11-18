// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DLSS
// Functions: 1

// Execute @ 14de25d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FDLSSShaderParameters,`FDLSSSceneViewFamilyUpscaler::AddDLSSPass'::__l60::<lambda_2>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FDLSSShaderParameters,_private:_struct_FDLSSOutputs___cdecl_FDLSSSceneViewFamilyUpscaler::AddDLSSPass(FRDGBuilder_&,FSceneView_const_&,FDLSSPassParameters_const_&,TRefCountPtr<UE::Renderer::Private::ITemporalUpscaler::IHistory>,TRefCountPtr<UE::Renderer::Private::ITemporalUpscaler::IHistory>_*)const_::_60_::<lambda_2>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
  FVar9;
  FUniformBufferStaticBindings *pFVar10;
  undefined8 *puVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar12;
  FNameEntryId FVar13;
  FName FVar14;
  undefined1 auStackY_158 [32];
  FColor_u_0 local_f8 [2];
  LARGE_INTEGER local_f0;
  FName local_e8;
  FName local_e0;
  FStatMessage local_d0;
  FName local_c0;
  FName local_b8;
  FUniformBufferStaticBindings local_b0;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::StatPtr_STAT_FRDGPass_Execute ==
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FDLSSShaderParameters,_private:_struct_FDLSSOutputs___cdecl_FDLSSSceneViewFamilyUpscaler::AddDLSSPass(FRDGBuilder_&,FSceneView_const_&,FDLSSPassParameters_const_&,TRefCountPtr<UE::Renderer::Private::ITemporalUpscaler::IHistory>,TRefCountPtr<UE::Renderer::Private::ITemporalUpscaler::IHistory>_*)const_::_60_::<lambda_2>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
           )0x0) {
        pFVar8 = ::FName::FName(&local_c0,"STAT_FRDGPass_Execute");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar8,
                   L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,
                   true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar9 = ::StatPtr_STAT_FRDGPass_Execute;
  if (::StatPtr_STAT_FRDGPass_Execute ==
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FDLSSShaderParameters,_private:_struct_FDLSSOutputs___cdecl_FDLSSSceneViewFamilyUpscaler::AddDLSSPass(FRDGBuilder_&,FSceneView_const_&,FDLSSPassParameters_const_&,TRefCountPtr<UE::Renderer::Private::ITemporalUpscaler::IHistory>,TRefCountPtr<UE::Renderer::Private::ITemporalUpscaler::IHistory>_*)const_::_60_::<lambda_2>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar8 = ::FName::FName(&local_b8,"STAT_FRDGPass_Execute");
    FVar9 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FDLSSShaderParameters,_private:_struct_FDLSSOutputs___cdecl_FDLSSSceneViewFamilyUpscaler::AddDLSSPass(FRDGBuilder_&,FSceneView_const_&,FDLSSPassParameters_const_&,TRefCountPtr<UE::Renderer::Private::ITemporalUpscaler::IHistory>,TRefCountPtr<UE::Renderer::Private::ITemporalUpscaler::IHistory>_*)const_::_60_::<lambda_2>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar8,
                         L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,
                         ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar9;
  bVar4 = false;
  bVar6 = false;
  local_e0.ComparisonIndex.Value = 0;
  local_e0.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar12 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_f8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_f8[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_e8.ComparisonIndex.Value = FVar13.Value;
        local_e8.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_e8,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_f0.s.LowPart = FVar13.Value;
      local_f0.s.HighPart = uVar12;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar5 = true;
      goto LAB_14de25f1a;
    }
  }
  bVar5 = false;
  FVar14 = local_e0;
LAB_14de25f1a:
  pFVar10 = FRDGParameterStruct::GetStaticUniformBuffers
                      ((FRDGParameterStruct *)((longlong)this + 0x30),&local_b0);
  if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
    puVar11 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x88,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar11;
    *(undefined8 **)&param_1->field_0x30 = puVar11 + 1;
    puVar11[1] = 0;
    *puVar11 = &___7FRHICommandSetStaticUniformBuffers__6B_;
    FUniformBufferStaticBindings::FUniformBufferStaticBindings
              ((FUniformBufferStaticBindings *)(puVar11 + 2),pFVar10);
  }
  else {
    bVar2 = param_1->field_0x6a;
    if ((bVar2 == 0) || ((bVar2 & bVar2 - 1) != 0)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSingleRHIPipeline(ActivePipelines)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x2b7,
                         L"Exactly one pipeline must be active to call GetComputeContext(). Current pipeline mask is \'0x%02x\'."
                        );
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(longlong *)&param_1->field_0x40 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ComputeContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x2b8,
                         L"There is no active compute context on this command list. There may be a missing call to SwitchPipeline()."
                        );
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (**(code **)(**(longlong **)&param_1->field_0x40 + 0xb0))
              (*(longlong **)&param_1->field_0x40,pFVar10);
  }
  if (local_b0.UniformBuffers.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHIUniformBuffer_*>)0x0) {
    FMemory::Free((void *)local_b0.UniformBuffers.AllocatorInstance.SecondaryData);
  }
  if (local_b0.Slots.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_b0.Slots.AllocatorInstance.SecondaryData);
  }
  `FDLSSSceneViewFamilyUpscaler::AddDLSSPass'::__l60::<lambda_2>::operator()
            ((void *)((longlong)this + 0x180),(FRHICommandListImmediate *)param_1);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_d0.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_d0.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_f0);
      local_d0.StatData.Pad[4] = '\0';
      local_d0.StatData.Pad[5] = '\0';
      local_d0.StatData.Pad[6] = '\0';
      local_d0.StatData.Pad[7] = '\0';
      local_d0.StatData.Pad[0] = local_f0.s.LowPart._0_1_;
      local_d0.StatData.Pad[1] = local_f0.s.LowPart._1_1_;
      local_d0.StatData.Pad[2] = local_f0.s.LowPart._2_1_;
      local_d0.StatData.Pad[3] = local_f0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_d0);
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

