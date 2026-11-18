// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XRBase
// Functions: 3

// Execute @ 14cf89f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FRenderLayersPass,`FDefaultStereoLayers::PostRenderView_RenderThread'::__l2::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int iVar1;
  int *piVar2;
  FDefaultStereoLayers_LayerRenderParams *pFVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FRenderLayersPass,_public:_virtual_void___cdecl_FDefaultStereoLayers::PostRenderView_RenderThread(FRDGBuilder_&,FSceneView_&)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
  FVar11;
  FUniformBufferStaticBindings *pFVar12;
  TArrayView<FDefaultStereoLayers::FStereoLayerToRender_const_,int> *pTVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar14;
  FNameEntryId FVar15;
  FName FVar16;
  undefined1 auStackY_1a8 [32];
  FColor_u_0 local_148 [2];
  LARGE_INTEGER local_140;
  FName local_138;
  FName local_130;
  FStatMessage local_120;
  FStereoLayerToRender *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  FName local_f8;
  FName local_f0;
  TArrayView<FDefaultStereoLayers::FStereoLayerToRender_const_,int> local_e8;
  TArrayView<FDefaultStereoLayers::FStereoLayerToRender_const_,int> local_d8;
  TArrayView<FDefaultStereoLayers::FStereoLayerToRender_const_,int> local_c8;
  FUniformBufferStaticBindings local_b8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::StatPtr_STAT_FRDGPass_Execute ==
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FRenderLayersPass,_public:_virtual_void___cdecl_FDefaultStereoLayers::PostRenderView_RenderThread(FRDGBuilder_&,FSceneView_&)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
           )0x0) {
        pFVar10 = ::FName::FName(&local_f8,"STAT_FRDGPass_Execute");
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
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FRenderLayersPass,_public:_virtual_void___cdecl_FDefaultStereoLayers::PostRenderView_RenderThread(FRDGBuilder_&,FSceneView_&)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar10 = ::FName::FName(&local_f0,"STAT_FRDGPass_Execute");
    FVar11 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FRenderLayersPass,_public:_virtual_void___cdecl_FDefaultStereoLayers::PostRenderView_RenderThread(FRDGBuilder_&,FSceneView_&)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar10,
                          L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,
                          ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar11;
  bVar6 = false;
  bVar8 = false;
  local_130.ComparisonIndex.Value = 0;
  local_130.Number = 0;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar14 = FVar16.Number;
  if ((FVar15.Value != 0) || (uVar14 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_148[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_148[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_138.ComparisonIndex.Value = FVar15.Value;
        local_138.Number = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_138,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_140.s.LowPart = FVar15.Value;
      local_140.s.HighPart = uVar14;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar7 = true;
      goto LAB_14cf8a0ec;
    }
  }
  bVar7 = false;
  FVar16 = local_130;
LAB_14cf8a0ec:
  pFVar12 = FRDGParameterStruct::GetStaticUniformBuffers
                      ((FRDGParameterStruct *)((longlong)this + 0x30),&local_b8);
  FRHIComputeCommandList::SetStaticUniformBuffers(param_1,pFVar12);
  if (local_b8.UniformBuffers.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHIUniformBuffer_*>)0x0) {
    FMemory::Free((void *)local_b8.UniformBuffers.AllocatorInstance.SecondaryData);
  }
  if (local_b8.Slots.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_b8.Slots.AllocatorInstance.SecondaryData);
  }
  piVar2 = *(int **)((longlong)this + 0x188);
  FRHICommandList::SetViewport
            ((FRHICommandList *)param_1,(float)*piVar2,(float)piVar2[1],0.0,(float)piVar2[2],
             (float)piVar2[3],__real_3f800000);
  if (*(char *)(*(longlong *)((longlong)this + 0x180) + 0x130) != '\0') {
    DrawClearQuadMRT((FRHICommandList *)param_1,true,1,&FLinearColor::Black,false,0.0,false,0);
  }
  pFVar3 = *(FDefaultStereoLayers_LayerRenderParams **)((longlong)this + 0x188);
  local_108 = *(FStereoLayerToRender **)(*(longlong *)((longlong)this + 0x180) + 0x110);
  iVar1 = *(int *)(*(longlong *)((longlong)this + 0x180) + 0x118);
  if (iVar1 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_e8._12_4_ = uStack_fc;
  local_e8.ArrayNum = iVar1;
  local_e8.DataPtr = local_108;
  iStack_100 = iVar1;
  FDefaultStereoLayers::StereoLayerRender((FRHICommandListImmediate *)param_1,&local_e8,pFVar3);
  if (*(char *)((longlong)this + 0x1a0) == '\0') {
    puVar4 = *(undefined8 **)((longlong)this + 0x188);
    *puVar4 = *(undefined8 *)((longlong)this + 400);
    puVar4[1] = *(undefined8 *)((longlong)this + 0x198);
    pFVar3 = *(FDefaultStereoLayers_LayerRenderParams **)((longlong)this + 0x188);
    pTVar13 = TArrayView<FDefaultStereoLayers::FStereoLayerToRender_const_,int>::
              TArrayView<FDefaultStereoLayers::FStereoLayerToRender_const_,int><TArray<FDefaultStereoLayers::FStereoLayerToRender,TSizedDefaultAllocator<32>_>_&,TArray<FDefaultStereoLayers::FStereoLayerToRender,TSizedDefaultAllocator<32>_>_>
                        (&local_c8,
                         (TArray<FDefaultStereoLayers::FStereoLayerToRender,TSizedDefaultAllocator<32>_>
                          *)(*(longlong *)((longlong)this + 0x180) + 0x120));
    local_d8.DataPtr = pTVar13->DataPtr;
    local_d8.ArrayNum = pTVar13->ArrayNum;
    local_d8._12_4_ = *(undefined4 *)&pTVar13->field_0xc;
    FDefaultStereoLayers::StereoLayerRender((FRHICommandListImmediate *)param_1,&local_d8,pFVar3);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_120.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
      local_120.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_140);
      local_120.StatData.Pad[4] = '\0';
      local_120.StatData.Pad[5] = '\0';
      local_120.StatData.Pad[6] = '\0';
      local_120.StatData.Pad[7] = '\0';
      local_120.StatData.Pad[0] = local_140.s.LowPart._0_1_;
      local_120.StatData.Pad[1] = local_140.s.LowPart._1_1_;
      local_120.StatData.Pad[2] = local_140.s.LowPart._2_1_;
      local_120.StatData.Pad[3] = local_140.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_120);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// Execute @ 14cf8a440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FRenderLayersPass,`FDefaultStereoLayers::PostRenderView_RenderThread'::__l19::<lambda_2>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  FDefaultStereoLayers_LayerRenderParams *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FRenderLayersPass,_public:_virtual_void___cdecl_FDefaultStereoLayers::PostRenderView_RenderThread(FRDGBuilder_&,FSceneView_&)_::_19_::<lambda_2>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
  FVar10;
  FUniformBufferStaticBindings *pFVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar12;
  FNameEntryId FVar13;
  FName FVar14;
  undefined1 auStackY_198 [32];
  FColor_u_0 local_138 [2];
  LARGE_INTEGER local_130;
  FName local_128;
  FName local_120;
  FStatMessage local_110;
  FStereoLayerToRender *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  FName local_e8;
  FName local_e0;
  FLinearColor_u_0 local_d8;
  TArrayView<FDefaultStereoLayers::FStereoLayerToRender_const_,int> local_c8;
  FUniformBufferStaticBindings local_b8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::StatPtr_STAT_FRDGPass_Execute ==
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FRenderLayersPass,_public:_virtual_void___cdecl_FDefaultStereoLayers::PostRenderView_RenderThread(FRDGBuilder_&,FSceneView_&)_::_19_::<lambda_2>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
           )0x0) {
        pFVar9 = ::FName::FName(&local_e8,"STAT_FRDGPass_Execute");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar9,
                   L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,
                   true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar10 = ::StatPtr_STAT_FRDGPass_Execute;
  if (::StatPtr_STAT_FRDGPass_Execute ==
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FRenderLayersPass,_public:_virtual_void___cdecl_FDefaultStereoLayers::PostRenderView_RenderThread(FRDGBuilder_&,FSceneView_&)_::_19_::<lambda_2>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar9 = ::FName::FName(&local_e0,"STAT_FRDGPass_Execute");
    FVar10 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FRenderLayersPass,_public:_virtual_void___cdecl_FDefaultStereoLayers::PostRenderView_RenderThread(FRDGBuilder_&,FSceneView_&)_::_19_::<lambda_2>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar9,
                          L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,
                          ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar10;
  bVar5 = false;
  bVar7 = false;
  local_120.ComparisonIndex.Value = 0;
  local_120.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar12 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_138[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_138[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_128.ComparisonIndex.Value = FVar13.Value;
        local_128.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_128,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_130.s.LowPart = FVar13.Value;
      local_130.s.HighPart = uVar12;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar6 = true;
      goto LAB_14cf8a5cc;
    }
  }
  bVar6 = false;
  FVar14 = local_120;
LAB_14cf8a5cc:
  pFVar11 = FRDGParameterStruct::GetStaticUniformBuffers
                      ((FRDGParameterStruct *)((longlong)this + 0x30),&local_b8);
  FRHIComputeCommandList::SetStaticUniformBuffers(param_1,pFVar11);
  if (local_b8.UniformBuffers.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHIUniformBuffer_*>)0x0) {
    FMemory::Free((void *)local_b8.UniformBuffers.AllocatorInstance.SecondaryData);
  }
  if (local_b8.Slots.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_b8.Slots.AllocatorInstance.SecondaryData);
  }
  puVar1 = *(undefined8 **)((longlong)this + 0x188);
  *puVar1 = *(undefined8 *)((longlong)this + 400);
  puVar1[1] = *(undefined8 *)((longlong)this + 0x198);
  local_d8._0_8_ = 0;
  local_d8._8_8_ = 0;
  DrawClearQuadMRT((FRHICommandList *)param_1,true,1,(FLinearColor *)&local_d8._s_0,false,0.0,false,
                   0);
  piVar2 = *(int **)((longlong)this + 0x188);
  FRHICommandList::SetViewport
            ((FRHICommandList *)param_1,(float)*piVar2,(float)piVar2[1],0.0,(float)piVar2[2],
             (float)piVar2[3],__real_3f800000);
  pFVar3 = *(FDefaultStereoLayers_LayerRenderParams **)((longlong)this + 0x188);
  local_f8 = *(FStereoLayerToRender **)(*(longlong *)((longlong)this + 0x180) + 0x120);
  iStack_f0 = *(int *)(*(longlong *)((longlong)this + 0x180) + 0x128);
  if (iStack_f0 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_c8._12_4_ = uStack_ec;
  local_c8.ArrayNum = iStack_f0;
  local_c8.DataPtr = local_f8;
  FDefaultStereoLayers::StereoLayerRender((FRHICommandListImmediate *)param_1,&local_c8,pFVar3);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_110.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_110.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_130);
      local_110.StatData.Pad[4] = '\0';
      local_110.StatData.Pad[5] = '\0';
      local_110.StatData.Pad[6] = '\0';
      local_110.StatData.Pad[7] = '\0';
      local_110.StatData.Pad[0] = local_130.s.LowPart._0_1_;
      local_110.StatData.Pad[1] = local_130.s.LowPart._1_1_;
      local_110.StatData.Pad[2] = local_130.s.LowPart._2_1_;
      local_110.StatData.Pad[3] = local_130.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_110);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// Execute @ 14cf8a8d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FXRCopyTexturePass,`AddXRCopyTexturePass'::__l6::<lambda_1>_>::Execute
          (void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  FRDGResource *pFVar4;
  FRHITexture *pFVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FXRCopyTexturePass,_void___cdecl_AddXRCopyTexturePass(FRDGBuilder_&,FRDGEventName_&&,FRDGTexture_*,UE::Math::TIntRect<int>,FRDGTexture_*,UE::Math::TIntRect<int>,FXRCopyTextureOptions_const_&)_::_6_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
  FVar10;
  FUniformBufferStaticBindings *pFVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar12;
  FNameEntryId FVar13;
  undefined1 auStackY_158 [32];
  TIntRect<int>_u_0 local_f8;
  LARGE_INTEGER local_e8;
  TIntRect<int>_u_0 local_e0;
  FName local_d0;
  FUniformBufferStaticBindings local_c0;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  FVar13.Value = 0;
  local_e8 = (LARGE_INTEGER)param_1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::StatPtr_STAT_FRDGPass_Execute ==
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FXRCopyTexturePass,_void___cdecl_AddXRCopyTexturePass(FRDGBuilder_&,FRDGEventName_&&,FRDGTexture_*,UE::Math::TIntRect<int>,FRDGTexture_*,UE::Math::TIntRect<int>,FXRCopyTextureOptions_const_&)_::_6_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
           )0x0) {
        pFVar9 = ::FName::FName((FName *)&local_f8._s_0,"STAT_FRDGPass_Execute");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar9,
                   L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,
                   true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar10 = ::StatPtr_STAT_FRDGPass_Execute;
  if (::StatPtr_STAT_FRDGPass_Execute ==
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FXRCopyTexturePass,_void___cdecl_AddXRCopyTexturePass(FRDGBuilder_&,FRDGEventName_&&,FRDGTexture_*,UE::Math::TIntRect<int>,FRDGTexture_*,UE::Math::TIntRect<int>,FXRCopyTextureOptions_const_&)_::_6_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar9 = ::FName::FName((FName *)&local_e0._s_0,"STAT_FRDGPass_Execute");
    FVar10 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FXRCopyTexturePass,_void___cdecl_AddXRCopyTexturePass(FRDGBuilder_&,FRDGEventName_&&,FRDGTexture_*,UE::Math::TIntRect<int>,FRDGTexture_*,UE::Math::TIntRect<int>,FXRCopyTextureOptions_const_&)_::_6_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar9,
                          L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,
                          ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar10;
  bVar6 = false;
  bVar8 = false;
  local_d0.ComparisonIndex.Value = 0;
  local_d0.Number = 0;
  if ((FVar12.ComparisonIndex.Value.Value != 0) || (FVar12.Number != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_f8._s_0.Min.field0_0x0 =
           (TIntPoint<int>)((ulonglong)local_f8._s_0.Min.field0_0x0 & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_f8._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f8._0_8_ = FVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_f8._s_0,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_f8._0_8_ = FVar12;
      local_d0 = FVar12;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar7 = true;
      FVar13.Value = local_d0.ComparisonIndex.Value;
      goto LAB_14cf8aa70;
    }
  }
  bVar7 = false;
  FVar12 = local_d0;
LAB_14cf8aa70:
  pFVar11 = FRDGParameterStruct::GetStaticUniformBuffers
                      ((FRDGParameterStruct *)((longlong)this + 0x30),&local_c0);
  FRHIComputeCommandList::SetStaticUniformBuffers(param_1,pFVar11);
  if (local_c0.UniformBuffers.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHIUniformBuffer_*>)0x0) {
    FMemory::Free((void *)local_c0.UniformBuffers.AllocatorInstance.SecondaryData);
  }
  if (local_c0.Slots.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_c0.Slots.AllocatorInstance.SecondaryData);
  }
  local_e0._s_0.Min.field0_0x0 = (TIntPoint<int>)*(TIntPoint<int>_u_0 *)((longlong)this + 0x1a0);
  pFVar4 = *(FRDGResource **)((longlong)this + 0x198);
  uVar2 = *(uint *)((longlong)this + 0x1d4);
  uVar3 = *(uint *)((longlong)this + 0x1d0);
  local_e0._s_0.Max.field0_0x0 = (TIntPoint<int>)*(TIntPoint<int>_u_0 *)((longlong)this + 0x1a8);
  FRDGResource::ValidateRHIAccess(pFVar4);
  local_f8._s_0.Min.field0_0x0 = (TIntPoint<int>)*(TIntPoint<int>_u_0 *)((longlong)this + 0x188);
  pFVar5 = (FRHITexture *)pFVar4->ResourceRHI;
  pFVar4 = *(FRDGResource **)((longlong)this + 0x180);
  local_f8._s_0.Max.field0_0x0 = (TIntPoint<int>)*(TIntPoint<int>_u_0 *)((longlong)this + 400);
  FRDGResource::ValidateRHIAccess(pFVar4);
  XRCopyTexture_InRenderPass
            ((FRHICommandListImmediate *)local_e8,(FRHITexture *)pFVar4->ResourceRHI,
             (TIntRect<int> *)&local_f8._s_0,pFVar5,(TIntRect<int> *)&local_e0._s_0,
             (FXRCopyTextureOptions *)((longlong)this + 0x1b0),uVar3,uVar2);
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_e0._s_0.Max.field0_0x0 =
           (TIntPoint<int>)
           (CONCAT44(FVar12.Number,FVar13.Value) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_e8);
      local_e0._s_0.Min.field0_0x0 = (TIntPoint<int>)(local_e8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)&local_e0._s_0);
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

