// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamlineCore
// Functions: 6

// Execute @ 14de78480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FRenderTargetParameters,`FStreamlineViewExtension::PostProcessPassAtEnd_RenderThread'::__l111::<lambda_5>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FRenderTargetParameters,_private:_struct_FScreenPassTexture___cdecl_FStreamlineViewExtension::PostProcessPassAtEnd_RenderThread(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&)_::_111_::<lambda_5>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
  FVar11;
  FUniformBufferStaticBindings *pFVar12;
  IRHICommandContext *pIVar13;
  undefined8 *puVar14;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar15;
  FNameEntryId FVar16;
  FName FVar17;
  FNameEntryId FVar18;
  undefined1 auStackY_178 [32];
  LARGE_INTEGER local_118;
  FName local_110;
  FStatMessage local_100;
  FUniformBufferStaticBindings local_f0;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_178;
  FVar18.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::StatPtr_STAT_FRDGPass_Execute ==
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FRenderTargetParameters,_private:_struct_FScreenPassTexture___cdecl_FStreamlineViewExtension::PostProcessPassAtEnd_RenderThread(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&)_::_111_::<lambda_5>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
           )0x0) {
        pFVar10 = ::FName::FName((FName *)&local_118.s,"STAT_FRDGPass_Execute");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar10,
                   L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,
                   true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar11 = ::StatPtr_STAT_FRDGPass_Execute;
  if (::StatPtr_STAT_FRDGPass_Execute ==
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FRenderTargetParameters,_private:_struct_FScreenPassTexture___cdecl_FStreamlineViewExtension::PostProcessPassAtEnd_RenderThread(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&)_::_111_::<lambda_5>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar10 = ::FName::FName((FName *)&local_100,"STAT_FRDGPass_Execute");
    FVar11 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FRenderTargetParameters,_private:_struct_FScreenPassTexture___cdecl_FStreamlineViewExtension::PostProcessPassAtEnd_RenderThread(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&)_::_111_::<lambda_5>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar10,
                          L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,
                          ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar11;
  bVar7 = false;
  bVar9 = false;
  local_110.ComparisonIndex.Value = 0;
  local_110.Number = 0;
  FVar16 = FVar17.ComparisonIndex.Value;
  uVar15 = FVar17.Number;
  if ((FVar16.Value != 0) || (uVar15 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_118.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_118.s,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_118.s.LowPart = FVar16.Value;
        local_118.s.HighPart = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_118.s,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar7 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_118.s.LowPart = FVar16.Value;
      local_118.s.HighPart = uVar15;
      local_110 = FVar17;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar8 = true;
      FVar18.Value = local_110.ComparisonIndex.Value;
      goto LAB_14de78627;
    }
  }
  bVar8 = false;
  FVar17 = local_110;
LAB_14de78627:
  pFVar12 = FRDGParameterStruct::GetStaticUniformBuffers
                      ((FRDGParameterStruct *)((longlong)this + 0x30),&local_f0);
  FRHIComputeCommandList::SetStaticUniformBuffers(param_1,pFVar12);
  if (local_f0.UniformBuffers.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHIUniformBuffer_*>)0x0) {
    FMemory::Free((void *)local_f0.UniformBuffers.AllocatorInstance.SecondaryData);
  }
  if (local_f0.Slots.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_f0.Slots.AllocatorInstance.SecondaryData);
  }
  iVar2 = *(int *)((longlong)this + 0x18c);
  iVar3 = *(int *)((longlong)this + 0x188);
  iVar4 = *(int *)((longlong)this + 0x184);
  iVar5 = *(int *)((longlong)this + 0x180);
  if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
    puVar14 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x28,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar14;
    *(undefined8 **)&param_1->field_0x30 = puVar14 + 1;
    *puVar14 = &___7FRHICommandSetViewport__6B_;
    *(float *)(puVar14 + 2) = (float)iVar5;
    *(float *)((longlong)puVar14 + 0x14) = (float)iVar4;
    *(float *)((longlong)puVar14 + 0x1c) = (float)iVar3;
    *(float *)(puVar14 + 4) = (float)iVar2;
    puVar14[1] = 0;
    *(undefined4 *)(puVar14 + 3) = 0;
    *(undefined4 *)((longlong)puVar14 + 0x24) = 0x3f800000;
  }
  else {
    pIVar13 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
    pcVar6 = *(code **)(pIVar13->_padding_ + 0x1a0);
    (*pcVar6)(pIVar13,pcVar6,(float)iVar4,0);
  }
  DrawClearQuadAlpha((FRHICommandList *)param_1,0.0);
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar17 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_100.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
      local_100.NameAndInfo.Index.Value = FVar18.Value;
      QueryPerformanceCounter(&local_118);
      local_100.StatData.Pad[4] = '\0';
      local_100.StatData.Pad[5] = '\0';
      local_100.StatData.Pad[6] = '\0';
      local_100.StatData.Pad[7] = '\0';
      local_100.StatData.Pad[0] = local_118.s.LowPart._0_1_;
      local_100.StatData.Pad[1] = local_118.s.LowPart._1_1_;
      local_100.StatData.Pad[2] = local_118.s.LowPart._2_1_;
      local_100.StatData.Pad[3] = local_118.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_100);
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

// Execute @ 14de78900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<`anonymous_namespace'::FSLDeepDVCShaderParameters,`AddStreamlineDeepDVCEvaluateRenderPass'::__l2::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<_anonymous_namespace_::FSLDeepDVCShaderParameters,_void___cdecl_AddStreamlineDeepDVCEvaluateRenderPass(FStreamlineRHI_*,FRDGBuilder_&,unsigned_int,UE::Math::TIntRect<int>_const_&,FRDGTexture_*)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
              0x9d4c) <
      `TRDGLambdaPass<FSLDeepDVCShaderParameters,`AddStreamlineDeepDVCEvaluateRenderPass'::`2'::<lambda_1>_>
      ::Execute'::`2'::_TSS0) {
    _Init_thread_header(&`TRDGLambdaPass<FSLDeepDVCShaderParameters,`AddStreamlineDeepDVCEvaluateRenderPass'::`2'::<lambda_1>_>
                         ::Execute'::`2'::_TSS0);
    if (`TRDGLambdaPass<FSLDeepDVCShaderParameters,`AddStreamlineDeepDVCEvaluateRenderPass'::`2'::<lambda_1>_>
        ::Execute'::`2'::_TSS0 == -1) {
      if (`TRDGLambdaPass<FSLDeepDVCShaderParameters,`AddStreamlineDeepDVCEvaluateRenderPass'::`2'::<lambda_1>_>
          ::Execute'::`2'::StatPtr_STAT_FRDGPass_Execute ==
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<_anonymous_namespace_::FSLDeepDVCShaderParameters,_void___cdecl_AddStreamlineDeepDVCEvaluateRenderPass(FStreamlineRHI_*,FRDGBuilder_&,unsigned_int,UE::Math::TIntRect<int>_const_&,FRDGTexture_*)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
           )0x0) {
        pFVar5 = ::FName::FName((FName *)&local_d8.s,"STAT_FRDGPass_Execute");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &`TRDGLambdaPass<FSLDeepDVCShaderParameters,`AddStreamlineDeepDVCEvaluateRenderPass'::`2'::<lambda_1>_>
                    ::Execute'::`2'::StatPtr_STAT_FRDGPass_Execute,*pFVar5,L"FRDGPass Execute",
                   "STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,
                   MCR_Invalid);
      }
      _Init_thread_footer(&`TRDGLambdaPass<FSLDeepDVCShaderParameters,`AddStreamlineDeepDVCEvaluateRenderPass'::`2'::<lambda_1>_>
                           ::Execute'::`2'::_TSS0);
    }
  }
  FVar6 = `TRDGLambdaPass<FSLDeepDVCShaderParameters,`AddStreamlineDeepDVCEvaluateRenderPass'::`2'::<lambda_1>_>
          ::Execute'::`2'::StatPtr_STAT_FRDGPass_Execute;
  if (`TRDGLambdaPass<FSLDeepDVCShaderParameters,`AddStreamlineDeepDVCEvaluateRenderPass'::`2'::<lambda_1>_>
      ::Execute'::`2'::StatPtr_STAT_FRDGPass_Execute ==
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<_anonymous_namespace_::FSLDeepDVCShaderParameters,_void___cdecl_AddStreamlineDeepDVCEvaluateRenderPass(FStreamlineRHI_*,FRDGBuilder_&,unsigned_int,UE::Math::TIntRect<int>_const_&,FRDGTexture_*)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar5 = ::FName::FName((FName *)&local_c0,"STAT_FRDGPass_Execute");
    FVar6 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<_anonymous_namespace_::FSLDeepDVCShaderParameters,_void___cdecl_AddStreamlineDeepDVCEvaluateRenderPass(FStreamlineRHI_*,FRDGBuilder_&,unsigned_int,UE::Math::TIntRect<int>_const_&,FRDGTexture_*)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`TRDGLambdaPass<FSLDeepDVCShaderParameters,`AddStreamlineDeepDVCEvaluateRenderPass'::`2'::<lambda_1>_>
                          ::Execute'::`2'::StatPtr_STAT_FRDGPass_Execute,*pFVar5,L"FRDGPass Execute"
                         ,"STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,
                         MCR_Invalid);
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
      goto LAB_14de78a86;
    }
  }
  bVar3 = false;
  FVar10 = local_d0;
LAB_14de78a86:
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
  `AddStreamlineDeepDVCEvaluateRenderPass'::__l2::<lambda_1>::operator()
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

// Execute @ 14de78c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FSLSetStateShaderParameters,`AddStreamlineStateRenderPass<`AddStreamlineDLSSGStateRenderPass'::__l2::<lambda_1>,`AddStreamlineDLSSGStateRenderPass'::__l2::<lambda_2>_>'::__l2::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FSLSetStateShaderParameters,_void___cdecl_AddStreamlineStateRenderPass<_void___cdecl_AddStreamlineDLSSGStateRenderPass(FRDGBuilder_&,unsigned_int,UE::Math::TIntRect<int>_const_&)_::_2_::<lambda_1>,_void___cdecl_AddStreamlineDLSSGStateRenderPass(FRDGBuilder_&,unsigned_int,UE::Math::TIntRect<int>_const_&)_::_2_::<lambda_2>_>(wchar_t_const_*,FRDGBuilder_&,unsigned_int,UE::Math::TIntRect<int>_const_&,_void___cdecl_AddStreamlineDLSSGStateRenderPass(FRDGBuilder_&,unsigned_int,UE::Math::TIntRect<int>_const_&)_::_2_::<lambda_1>_&&,_void___cdecl_AddStreamlineDLSSGStateRenderPass(FRDGBuilder_&,unsigned_int,UE::Math::TIntRect<int>_const_&)_::_2_::<lambda_2>_&&)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
  FVar6;
  FUniformBufferStaticBindings *pFVar7;
  undefined8 *puVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FNameEntryId FVar12;
  undefined1 auStackY_1e8 [32];
  LARGE_INTEGER local_188;
  FName local_180;
  FStatMessage local_170;
  undefined4 local_158;
  undefined8 local_154;
  undefined8 local_14c;
  uchar local_140 [8];
  ForElementType<unsigned_char> FStack_138;
  longlong local_130;
  longlong lStack_128;
  uchar local_120 [8];
  uchar auStack_118 [8];
  uchar local_110 [8];
  uchar auStack_108 [8];
  uchar local_100 [8];
  uchar auStack_f8 [8];
  uchar local_f0 [8];
  ForElementType<FRHIUniformBuffer_*> FStack_e8;
  _func___cdecl_void_APIError_ptr *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  FVar12.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::StatPtr_STAT_FRDGPass_Execute ==
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FSLSetStateShaderParameters,_void___cdecl_AddStreamlineStateRenderPass<_void___cdecl_AddStreamlineDLSSGStateRenderPass(FRDGBuilder_&,unsigned_int,UE::Math::TIntRect<int>_const_&)_::_2_::<lambda_1>,_void___cdecl_AddStreamlineDLSSGStateRenderPass(FRDGBuilder_&,unsigned_int,UE::Math::TIntRect<int>_const_&)_::_2_::<lambda_2>_>(wchar_t_const_*,FRDGBuilder_&,unsigned_int,UE::Math::TIntRect<int>_const_&,_void___cdecl_AddStreamlineDLSSGStateRenderPass(FRDGBuilder_&,unsigned_int,UE::Math::TIntRect<int>_const_&)_::_2_::<lambda_1>_&&,_void___cdecl_AddStreamlineDLSSGStateRenderPass(FRDGBuilder_&,unsigned_int,UE::Math::TIntRect<int>_const_&)_::_2_::<lambda_2>_&&)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
           )0x0) {
        pFVar5 = ::FName::FName((FName *)&local_188.s,"STAT_FRDGPass_Execute");
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
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FSLSetStateShaderParameters,_void___cdecl_AddStreamlineStateRenderPass<_void___cdecl_AddStreamlineDLSSGStateRenderPass(FRDGBuilder_&,unsigned_int,UE::Math::TIntRect<int>_const_&)_::_2_::<lambda_1>,_void___cdecl_AddStreamlineDLSSGStateRenderPass(FRDGBuilder_&,unsigned_int,UE::Math::TIntRect<int>_const_&)_::_2_::<lambda_2>_>(wchar_t_const_*,FRDGBuilder_&,unsigned_int,UE::Math::TIntRect<int>_const_&,_void___cdecl_AddStreamlineDLSSGStateRenderPass(FRDGBuilder_&,unsigned_int,UE::Math::TIntRect<int>_const_&)_::_2_::<lambda_1>_&&,_void___cdecl_AddStreamlineDLSSGStateRenderPass(FRDGBuilder_&,unsigned_int,UE::Math::TIntRect<int>_const_&)_::_2_::<lambda_2>_&&)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar5 = ::FName::FName((FName *)&local_170,"STAT_FRDGPass_Execute");
    FVar6 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FSLSetStateShaderParameters,_void___cdecl_AddStreamlineStateRenderPass<_void___cdecl_AddStreamlineDLSSGStateRenderPass(FRDGBuilder_&,unsigned_int,UE::Math::TIntRect<int>_const_&)_::_2_::<lambda_1>,_void___cdecl_AddStreamlineDLSSGStateRenderPass(FRDGBuilder_&,unsigned_int,UE::Math::TIntRect<int>_const_&)_::_2_::<lambda_2>_>(wchar_t_const_*,FRDGBuilder_&,unsigned_int,UE::Math::TIntRect<int>_const_&,_void___cdecl_AddStreamlineDLSSGStateRenderPass(FRDGBuilder_&,unsigned_int,UE::Math::TIntRect<int>_const_&)_::_2_::<lambda_1>_&&,_void___cdecl_AddStreamlineDLSSGStateRenderPass(FRDGBuilder_&,unsigned_int,UE::Math::TIntRect<int>_const_&)_::_2_::<lambda_2>_&&)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar5,
                         L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,
                         ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  local_180.ComparisonIndex.Value = 0;
  local_180.Number = 0;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_188.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_188.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_188.s.LowPart = FVar10.Value;
        local_188.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_188.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_188.s.LowPart = FVar10.Value;
      local_188.s.HighPart = uVar9;
      local_180 = FVar11;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar3 = true;
      FVar12.Value = local_180.ComparisonIndex.Value;
      goto LAB_14de78e09;
    }
  }
  bVar3 = false;
  FVar11 = local_180;
LAB_14de78e09:
  pFVar7 = FRDGParameterStruct::GetStaticUniformBuffers
                     ((FRDGParameterStruct *)((longlong)this + 0x30),
                      (FUniformBufferStaticBindings *)local_c8);
  FRHIComputeCommandList::SetStaticUniformBuffers(param_1,pFVar7);
  if ((ForElementType<FRHIUniformBuffer_*>)local_c8._88_8_ !=
      (ForElementType<FRHIUniformBuffer_*>)0x0) {
    FMemory::Free((void *)local_c8._88_8_);
  }
  if ((ForElementType<unsigned_char>)local_c8._8_8_ != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_c8._8_8_);
  }
  `AddStreamlineDLSSGStateRenderPass'::__l2::<lambda_1>::operator()
            (*(void **)((longlong)this + 0x1a8),(DLSSGOptions *)local_c8,
             *(uint *)((longlong)this + 0x188),(TIntRect<int> *)((longlong)this + 0x18c));
  local_158 = *(undefined4 *)((longlong)this + 0x188);
  local_140[0] = local_c8[0];
  local_140[1] = local_c8[1];
  local_140[2] = local_c8[2];
  local_140[3] = local_c8[3];
  local_140[4] = local_c8[4];
  local_140[5] = local_c8[5];
  local_140[6] = local_c8[6];
  local_140[7] = local_c8[7];
  FStack_138 = (ForElementType<unsigned_char>)local_c8._8_8_;
  local_154 = *(undefined8 *)((longlong)this + 0x18c);
  local_120[0] = local_c8[0x20];
  local_120[1] = local_c8[0x21];
  local_120[2] = local_c8[0x22];
  local_120[3] = local_c8[0x23];
  local_120[4] = local_c8[0x24];
  local_120[5] = local_c8[0x25];
  local_120[6] = local_c8[0x26];
  local_120[7] = local_c8[0x27];
  auStack_118[0] = local_c8[0x28];
  auStack_118[1] = local_c8[0x29];
  auStack_118[2] = local_c8[0x2a];
  auStack_118[3] = local_c8[0x2b];
  auStack_118[4] = local_c8[0x2c];
  auStack_118[5] = local_c8[0x2d];
  auStack_118[6] = local_c8[0x2e];
  auStack_118[7] = local_c8[0x2f];
  local_14c = *(undefined8 *)((longlong)this + 0x194);
  local_130 = local_c8._16_8_;
  lStack_128 = local_c8._24_8_;
  local_d0 = *(undefined8 *)((longlong)this + 0x1a0);
  local_100[0] = local_c8[0x40];
  local_100[1] = local_c8[0x41];
  local_100[2] = local_c8[0x42];
  local_100[3] = local_c8[0x43];
  local_100[4] = local_c8[0x44];
  local_100[5] = local_c8[0x45];
  local_100[6] = local_c8[0x46];
  local_100[7] = local_c8[0x47];
  auStack_f8[0] = local_c8[0x48];
  auStack_f8[1] = local_c8[0x49];
  auStack_f8[2] = local_c8[0x4a];
  auStack_f8[3] = local_c8[0x4b];
  auStack_f8[4] = local_c8[0x4c];
  auStack_f8[5] = local_c8[0x4d];
  auStack_f8[6] = local_c8[0x4e];
  auStack_f8[7] = local_c8[0x4f];
  local_110[0] = local_c8[0x30];
  local_110[1] = local_c8[0x31];
  local_110[2] = local_c8[0x32];
  local_110[3] = local_c8[0x33];
  local_110[4] = local_c8[0x34];
  local_110[5] = local_c8[0x35];
  local_110[6] = local_c8[0x36];
  local_110[7] = local_c8[0x37];
  auStack_108[0] = local_c8[0x38];
  auStack_108[1] = local_c8[0x39];
  auStack_108[2] = local_c8[0x3a];
  auStack_108[3] = local_c8[0x3b];
  auStack_108[4] = local_c8[0x3c];
  auStack_108[5] = local_c8[0x3d];
  auStack_108[6] = local_c8[0x3e];
  auStack_108[7] = local_c8[0x3f];
  local_e0 = (_func___cdecl_void_APIError_ptr *)local_c8._96_8_;
  uStack_d8 = local_c8._104_8_;
  local_f0[0] = local_c8[0x50];
  local_f0[1] = local_c8[0x51];
  local_f0[2] = local_c8[0x52];
  local_f0[3] = local_c8[0x53];
  local_f0[4] = local_c8[0x54];
  local_f0[5] = local_c8[0x55];
  local_f0[6] = local_c8[0x56];
  local_f0[7] = local_c8[0x57];
  FStack_e8 = (ForElementType<FRHIUniformBuffer_*>)local_c8._88_8_;
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
     (param_1->field_0x64 == '\0')) {
    puVar8 = FMemStackBase::Alloc((FMemStackBase *)param_1,0xa8,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar8;
    *(undefined8 **)&param_1->field_0x30 = puVar8 + 1;
    *puVar8 = &TRHILambdaCommand<FRHICommandListImmediate,``AddStreamlineStateRenderPass<`AddStreamlineDLSSGStateRenderPass'::`2'::<lambda_1>,`AddStreamlineDLSSGStateRenderPass'::`2'::<lambda_2>_>'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar8[1] = 0;
    *(undefined4 *)(puVar8 + 2) = local_158;
    *(undefined8 *)((longlong)puVar8 + 0x14) = local_154;
    *(undefined8 *)((longlong)puVar8 + 0x1c) = local_14c;
    *(uchar (*) [8])(puVar8 + 5) = local_140;
    *(ForElementType<unsigned_char> *)(puVar8 + 6) = FStack_138;
    puVar8[7] = local_130;
    puVar8[8] = lStack_128;
    puVar8[9] = local_120;
    puVar8[10] = auStack_118;
    puVar8[0xb] = local_110;
    puVar8[0xc] = auStack_108;
    puVar8[0xd] = local_100;
    puVar8[0xe] = auStack_f8;
    puVar8[0xf] = local_f0;
    *(ForElementType<FRHIUniformBuffer_*> *)(puVar8 + 0x10) = FStack_e8;
    puVar8[0x11] = local_e0;
    puVar8[0x12] = uStack_d8;
    puVar8[0x13] = local_d0;
    puVar8[0x14] = L"TRHILambdaCommand";
  }
  else {
    ``AddStreamlineStateRenderPass<`AddStreamlineDLSSGStateRenderPass'::__l2::<lambda_1>,`AddStreamlineDLSSGStateRenderPass'::__l2::<lambda_2>_>'
    ::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
              (&local_158,(FRHICommandListImmediate *)param_1);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar3) && (FVar11 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_170.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      local_170.NameAndInfo.Index.Value = FVar12.Value;
      QueryPerformanceCounter(&local_188);
      local_170.StatData.Pad[4] = '\0';
      local_170.StatData.Pad[5] = '\0';
      local_170.StatData.Pad[6] = '\0';
      local_170.StatData.Pad[7] = '\0';
      local_170.StatData.Pad[0] = local_188.s.LowPart._0_1_;
      local_170.StatData.Pad[1] = local_188.s.LowPart._1_1_;
      local_170.StatData.Pad[2] = local_188.s.LowPart._2_1_;
      local_170.StatData.Pad[3] = local_188.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_170);
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

// Execute @ 14de79120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FSLSetStateShaderParameters,`AddStreamlineStateRenderPass<`AddStreamlineDeepDVCStateRenderPass'::__l2::<lambda_1>,`AddStreamlineDeepDVCStateRenderPass'::__l2::<lambda_2>_>'::__l2::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FSLSetStateShaderParameters,_void___cdecl_AddStreamlineStateRenderPass<_void___cdecl_AddStreamlineDeepDVCStateRenderPass(FRDGBuilder_&,unsigned_int,UE::Math::TIntRect<int>_const_&)_::_2_::<lambda_1>,_void___cdecl_AddStreamlineDeepDVCStateRenderPass(FRDGBuilder_&,unsigned_int,UE::Math::TIntRect<int>_const_&)_::_2_::<lambda_2>_>(wchar_t_const_*,FRDGBuilder_&,unsigned_int,UE::Math::TIntRect<int>_const_&,_void___cdecl_AddStreamlineDeepDVCStateRenderPass(FRDGBuilder_&,unsigned_int,UE::Math::TIntRect<int>_const_&)_::_2_::<lambda_1>_&&,_void___cdecl_AddStreamlineDeepDVCStateRenderPass(FRDGBuilder_&,unsigned_int,UE::Math::TIntRect<int>_const_&)_::_2_::<lambda_2>_&&)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FSLSetStateShaderParameters,_void___cdecl_AddStreamlineStateRenderPass<_void___cdecl_AddStreamlineDeepDVCStateRenderPass(FRDGBuilder_&,unsigned_int,UE::Math::TIntRect<int>_const_&)_::_2_::<lambda_1>,_void___cdecl_AddStreamlineDeepDVCStateRenderPass(FRDGBuilder_&,unsigned_int,UE::Math::TIntRect<int>_const_&)_::_2_::<lambda_2>_>(wchar_t_const_*,FRDGBuilder_&,unsigned_int,UE::Math::TIntRect<int>_const_&,_void___cdecl_AddStreamlineDeepDVCStateRenderPass(FRDGBuilder_&,unsigned_int,UE::Math::TIntRect<int>_const_&)_::_2_::<lambda_1>_&&,_void___cdecl_AddStreamlineDeepDVCStateRenderPass(FRDGBuilder_&,unsigned_int,UE::Math::TIntRect<int>_const_&)_::_2_::<lambda_2>_&&)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FSLSetStateShaderParameters,_void___cdecl_AddStreamlineStateRenderPass<_void___cdecl_AddStreamlineDeepDVCStateRenderPass(FRDGBuilder_&,unsigned_int,UE::Math::TIntRect<int>_const_&)_::_2_::<lambda_1>,_void___cdecl_AddStreamlineDeepDVCStateRenderPass(FRDGBuilder_&,unsigned_int,UE::Math::TIntRect<int>_const_&)_::_2_::<lambda_2>_>(wchar_t_const_*,FRDGBuilder_&,unsigned_int,UE::Math::TIntRect<int>_const_&,_void___cdecl_AddStreamlineDeepDVCStateRenderPass(FRDGBuilder_&,unsigned_int,UE::Math::TIntRect<int>_const_&)_::_2_::<lambda_1>_&&,_void___cdecl_AddStreamlineDeepDVCStateRenderPass(FRDGBuilder_&,unsigned_int,UE::Math::TIntRect<int>_const_&)_::_2_::<lambda_2>_&&)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar5 = ::FName::FName((FName *)&local_c0,"STAT_FRDGPass_Execute");
    FVar6 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FSLSetStateShaderParameters,_void___cdecl_AddStreamlineStateRenderPass<_void___cdecl_AddStreamlineDeepDVCStateRenderPass(FRDGBuilder_&,unsigned_int,UE::Math::TIntRect<int>_const_&)_::_2_::<lambda_1>,_void___cdecl_AddStreamlineDeepDVCStateRenderPass(FRDGBuilder_&,unsigned_int,UE::Math::TIntRect<int>_const_&)_::_2_::<lambda_2>_>(wchar_t_const_*,FRDGBuilder_&,unsigned_int,UE::Math::TIntRect<int>_const_&,_void___cdecl_AddStreamlineDeepDVCStateRenderPass(FRDGBuilder_&,unsigned_int,UE::Math::TIntRect<int>_const_&)_::_2_::<lambda_1>_&&,_void___cdecl_AddStreamlineDeepDVCStateRenderPass(FRDGBuilder_&,unsigned_int,UE::Math::TIntRect<int>_const_&)_::_2_::<lambda_2>_&&)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
      goto LAB_14de792a6;
    }
  }
  bVar3 = false;
  FVar10 = local_d0;
LAB_14de792a6:
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
  `AddStreamlineStateRenderPass<`AddStreamlineDeepDVCStateRenderPass'::__l2::<lambda_1>,`AddStreamlineDeepDVCStateRenderPass'::__l2::<lambda_2>_>'
  ::__l2::<lambda_1>::operator()
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

// Execute @ 14de79490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FSLShaderParameters,`FStreamlineViewExtension::PostProcessPassAtEnd_RenderThread'::__l40::<lambda_3>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FSLShaderParameters,_private:_struct_FScreenPassTexture___cdecl_FStreamlineViewExtension::PostProcessPassAtEnd_RenderThread(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&)_::_40_::<lambda_3>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FSLShaderParameters,_private:_struct_FScreenPassTexture___cdecl_FStreamlineViewExtension::PostProcessPassAtEnd_RenderThread(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&)_::_40_::<lambda_3>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FSLShaderParameters,_private:_struct_FScreenPassTexture___cdecl_FStreamlineViewExtension::PostProcessPassAtEnd_RenderThread(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&)_::_40_::<lambda_3>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar5 = ::FName::FName((FName *)&local_c0,"STAT_FRDGPass_Execute");
    FVar6 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FSLShaderParameters,_private:_struct_FScreenPassTexture___cdecl_FStreamlineViewExtension::PostProcessPassAtEnd_RenderThread(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&)_::_40_::<lambda_3>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
      goto LAB_14de79616;
    }
  }
  bVar3 = false;
  FVar10 = local_d0;
LAB_14de79616:
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
  `FStreamlineViewExtension::PostProcessPassAtEnd_RenderThread'::__l40::<lambda_3>::operator()
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

// Execute @ 14de79800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FSLUIHintTagShaderParameters,`AddStreamlineUIHintTagPass'::__l2::<lambda_1>_>::
Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FSLUIHintTagShaderParameters,_void___cdecl_AddStreamlineUIHintTagPass(FRDGBuilder_&,bool,bool,UE::Math::TIntPoint<int>_const_&,FSLUIHintTagShaderParameters_*,unsigned_int,FStreamlineRHI_*,TArray<FTrackedView,TSizedDefaultAllocator<32>_>_&,UE::Math::TIntRect<int>_const_&,bool)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FSLUIHintTagShaderParameters,_void___cdecl_AddStreamlineUIHintTagPass(FRDGBuilder_&,bool,bool,UE::Math::TIntPoint<int>_const_&,FSLUIHintTagShaderParameters_*,unsigned_int,FStreamlineRHI_*,TArray<FTrackedView,TSizedDefaultAllocator<32>_>_&,UE::Math::TIntRect<int>_const_&,bool)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FSLUIHintTagShaderParameters,_void___cdecl_AddStreamlineUIHintTagPass(FRDGBuilder_&,bool,bool,UE::Math::TIntPoint<int>_const_&,FSLUIHintTagShaderParameters_*,unsigned_int,FStreamlineRHI_*,TArray<FTrackedView,TSizedDefaultAllocator<32>_>_&,UE::Math::TIntRect<int>_const_&,bool)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar5 = ::FName::FName((FName *)&local_c0,"STAT_FRDGPass_Execute");
    FVar6 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FSLUIHintTagShaderParameters,_void___cdecl_AddStreamlineUIHintTagPass(FRDGBuilder_&,bool,bool,UE::Math::TIntPoint<int>_const_&,FSLUIHintTagShaderParameters_*,unsigned_int,FStreamlineRHI_*,TArray<FTrackedView,TSizedDefaultAllocator<32>_>_&,UE::Math::TIntRect<int>_const_&,bool)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
      goto LAB_14de79986;
    }
  }
  bVar3 = false;
  FVar10 = local_d0;
LAB_14de79986:
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
  `AddStreamlineUIHintTagPass'::__l2::<lambda_1>::operator()
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

