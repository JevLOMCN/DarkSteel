// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenColorIO
// Functions: 2

// Execute @ 14d76f380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FOpenColorIOInvalidShaderParameters,`AddDrawScreenPass<FOpenColorIOInvalidPixelShader>'::__l2::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  TStatIdData *pTVar6;
  FUniformBufferStaticBindings *pFVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  undefined1 auStackY_158 [32];
  LARGE_INTEGER local_f8 [2];
  undefined1 local_e8 [16];
  FName local_d8;
  <lambda_1> local_c8;
  FUniformBufferStaticBindings local_a8;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_158;
  FVar11.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_virtual_void___cdecl_TRDGLambdaPass<FOpenColorIOInvalidShaderParameters,`void___cdecl_AddDrawScreenPass<FOpenColorIOInvalidPixelShader>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FOpenColorIOInvalidPixelShader,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FOpenColorIOInvalidShaderParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<FOpenColorIOInvalidShaderParameters,`void___cdecl_AddDrawScreenPass<FOpenColorIOInvalidPixelShader>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FOpenColorIOInvalidPixelShader,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FOpenColorIOInvalidShaderParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<FOpenColorIOInvalidShaderParameters,`void___cdecl_AddDrawScreenPass<FOpenColorIOInvalidPixelShader>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FOpenColorIOInvalidPixelShader,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FOpenColorIOInvalidShaderParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar5 = ::FName::FName((FName *)&local_f8[0].s,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<FOpenColorIOInvalidShaderParameters,`void___cdecl_AddDrawScreenPass<FOpenColorIOInvalidPixelShader>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FOpenColorIOInvalidPixelShader,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FOpenColorIOInvalidShaderParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar5,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<FOpenColorIOInvalidShaderParameters,`void___cdecl_AddDrawScreenPass<FOpenColorIOInvalidPixelShader>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FOpenColorIOInvalidPixelShader,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FOpenColorIOInvalidShaderParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar6 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar5 = ::FName::FName((FName *)local_e8,"STAT_FRDGPass_Execute");
    pTVar6 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_void___cdecl_TRDGLambdaPass<FOpenColorIOInvalidShaderParameters,`void___cdecl_AddDrawScreenPass<FOpenColorIOInvalidPixelShader>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FOpenColorIOInvalidPixelShader,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FOpenColorIOInvalidShaderParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar5,L"FRDGPass Execute",
                        "STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar10 = *(FName *)&pTVar6->Name;
  bVar2 = false;
  bVar4 = false;
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_f8[0].s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_f8[0].s,(pTVar6->StatDescriptionAnsi).Ptr);
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f8[0]._0_4_ = FVar9.Value;
        local_f8[0]._4_4_ = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_f8[0].s,(pTVar6->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_f8[0]._0_4_ = FVar9.Value;
      local_f8[0]._4_4_ = uVar8;
      local_d8 = FVar10;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = local_d8.ComparisonIndex.Value;
      goto LAB_14d76f512;
    }
  }
  bVar3 = false;
  FVar10 = local_d8;
LAB_14d76f512:
  pFVar7 = FRDGParameterStruct::GetStaticUniformBuffers
                     ((FRDGParameterStruct *)((longlong)this + 0x30),&local_a8);
  FRHIComputeCommandList::SetStaticUniformBuffers(param_1,pFVar7);
  if (local_a8.UniformBuffers.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHIUniformBuffer_*>)0x0) {
    FMemory::Free((void *)local_a8.UniformBuffers.AllocatorInstance.SecondaryData);
  }
  if (local_a8.Slots.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_a8.Slots.AllocatorInstance.SecondaryData);
  }
  local_e8._0_8_ = *(FName *)((longlong)this + 0x180);
  local_e8._8_8_ = *(FStatNameAndInfo *)((longlong)this + 0x188);
  local_c8.PixelShader =
       (TShaderRefBase<FOpenColorIOInvalidPixelShader,FShaderMapPointerTable> *)
       ((longlong)this + 0x200);
  local_c8.PixelShaderParameters = (FOpenColorIOInvalidShaderParameters **)((longlong)this + 0x210);
  local_c8.RHICmdList = (FRHICommandList *)param_1;
  DrawScreenPass<__AddDrawScreenPass<FOpenColorIOInvalidPixelShader>_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
            ((FRHICommandList *)param_1,(FScreenPassViewInfo *)local_e8,
             (FScreenPassTextureViewport *)((longlong)this + 400),
             (FScreenPassTextureViewport *)((longlong)this + 0x1a8),
             (FScreenPassPipelineState *)((longlong)this + 0x1c0),
             *(EScreenPassDrawFlags *)((longlong)this + 0x218),&local_c8);
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
      local_e8._8_8_ = CONCAT44(FVar10.Number,FVar11.Value) & 0xffff6fffffffffff | 0x600000000000;
      QueryPerformanceCounter(local_f8);
      local_e8._4_4_ = 0;
      local_e8._0_4_ = local_f8[0].s.LowPart;
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)local_e8);
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

// Execute @ 14d76f760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<void,`FOpenColorIORendering::AddPass_RenderThread'::__l25::<lambda_1>_>::Execute
          (void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<void,_public:_static_void___cdecl_FOpenColorIORendering::AddPass_RenderThread(FRDGBuilder_&,FScreenPassViewInfo,ERHIFeatureLevel::Type,FScreenPassTexture_const_&,FScreenPassRenderTarget_const_&,FOpenColorIORenderPassResources_const_&,float,EOpenColorIOTransformAlpha)_::_25_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
  FVar6;
  FUniformBufferStaticBindings *pFVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  undefined1 auStackY_158 [32];
  LARGE_INTEGER local_f8 [2];
  undefined1 local_e8 [16];
  FName local_d8;
  <lambda_1> local_c8;
  FUniformBufferStaticBindings local_a8;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_158;
  FVar11.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::StatPtr_STAT_FRDGPass_Execute ==
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<void,_public:_static_void___cdecl_FOpenColorIORendering::AddPass_RenderThread(FRDGBuilder_&,FScreenPassViewInfo,ERHIFeatureLevel::Type,FScreenPassTexture_const_&,FScreenPassRenderTarget_const_&,FOpenColorIORenderPassResources_const_&,float,EOpenColorIOTransformAlpha)_::_25_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
           )0x0) {
        pFVar5 = ::FName::FName((FName *)&local_f8[0].s,"STAT_FRDGPass_Execute");
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
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<void,_public:_static_void___cdecl_FOpenColorIORendering::AddPass_RenderThread(FRDGBuilder_&,FScreenPassViewInfo,ERHIFeatureLevel::Type,FScreenPassTexture_const_&,FScreenPassRenderTarget_const_&,FOpenColorIORenderPassResources_const_&,float,EOpenColorIOTransformAlpha)_::_25_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar5 = ::FName::FName((FName *)local_e8,"STAT_FRDGPass_Execute");
    FVar6 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<void,_public:_static_void___cdecl_FOpenColorIORendering::AddPass_RenderThread(FRDGBuilder_&,FScreenPassViewInfo,ERHIFeatureLevel::Type,FScreenPassTexture_const_&,FScreenPassRenderTarget_const_&,FOpenColorIORenderPassResources_const_&,float,EOpenColorIOTransformAlpha)_::_25_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar5,
                         L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,
                         ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_f8[0].s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_f8[0].s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f8[0]._0_4_ = FVar9.Value;
        local_f8[0]._4_4_ = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_f8[0].s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_f8[0]._0_4_ = FVar9.Value;
      local_f8[0]._4_4_ = uVar8;
      local_d8 = FVar10;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = local_d8.ComparisonIndex.Value;
      goto LAB_14d76f8ee;
    }
  }
  bVar3 = false;
  FVar10 = local_d8;
LAB_14d76f8ee:
  pFVar7 = FRDGParameterStruct::GetStaticUniformBuffers
                     ((FRDGParameterStruct *)((longlong)this + 0x30),&local_a8);
  FRHIComputeCommandList::SetStaticUniformBuffers(param_1,pFVar7);
  if (local_a8.UniformBuffers.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHIUniformBuffer_*>)0x0) {
    FMemory::Free((void *)local_a8.UniformBuffers.AllocatorInstance.SecondaryData);
  }
  if (local_a8.Slots.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_a8.Slots.AllocatorInstance.SecondaryData);
  }
  local_e8._0_8_ = *(FName *)((longlong)this + 0x180);
  local_e8._8_8_ = *(FStatNameAndInfo *)((longlong)this + 0x188);
  local_c8.PipelineState = (FScreenPassPipelineState *)((longlong)this + 0x1c0);
  local_c8.ParametersMetadata =
       (TSharedPtr<FShaderParametersMetadata_const_,1> *)((longlong)this + 0x200);
  local_c8.PixelShaderParameters = (FParameters **)((longlong)this + 0x210);
  local_c8.RHICmdList = (FRHICommandList *)param_1;
  DrawScreenPass<__FOpenColorIORendering::AddPass_RenderThread_::__l25::<lambda_1>::operator()_::__l2::<lambda_1>_>
            ((FRHICommandList *)param_1,(FScreenPassViewInfo *)local_e8,
             (FScreenPassTextureViewport *)((longlong)this + 400),
             (FScreenPassTextureViewport *)((longlong)this + 0x1a8),local_c8.PipelineState,None,
             &local_c8);
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
      local_e8._8_8_ = CONCAT44(FVar10.Number,FVar11.Value) & 0xffff6fffffffffff | 0x600000000000;
      QueryPerformanceCounter(local_f8);
      local_e8._4_4_ = 0;
      local_e8._0_4_ = local_f8[0].s.LowPart;
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)local_e8);
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

