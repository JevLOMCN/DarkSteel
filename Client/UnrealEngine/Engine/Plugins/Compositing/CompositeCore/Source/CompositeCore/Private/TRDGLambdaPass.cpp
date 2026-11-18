// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CompositeCore
// Functions: 3

// Execute @ 14ea7d290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FCompositeCoreDisplayTransformShader::FParameters,`AddDrawScreenPass<FCompositeCoreDisplayTransformShader>'::__l2::<lambda_1>_>
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
       `private:_virtual_void___cdecl_TRDGLambdaPass<FCompositeCoreDisplayTransformShader::FParameters,`void___cdecl_AddDrawScreenPass<FCompositeCoreDisplayTransformShader>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FCompositeCoreDisplayTransformShader,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FCompositeCoreDisplayTransformShader::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<FCompositeCoreDisplayTransformShader::FParameters,`void___cdecl_AddDrawScreenPass<FCompositeCoreDisplayTransformShader>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FCompositeCoreDisplayTransformShader,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FCompositeCoreDisplayTransformShader::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<FCompositeCoreDisplayTransformShader::FParameters,`void___cdecl_AddDrawScreenPass<FCompositeCoreDisplayTransformShader>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FCompositeCoreDisplayTransformShader,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FCompositeCoreDisplayTransformShader::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar5 = ::FName::FName((FName *)&local_f8[0].s,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<FCompositeCoreDisplayTransformShader::FParameters,`void___cdecl_AddDrawScreenPass<FCompositeCoreDisplayTransformShader>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FCompositeCoreDisplayTransformShader,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FCompositeCoreDisplayTransformShader::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar5,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<FCompositeCoreDisplayTransformShader::FParameters,`void___cdecl_AddDrawScreenPass<FCompositeCoreDisplayTransformShader>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FCompositeCoreDisplayTransformShader,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FCompositeCoreDisplayTransformShader::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar6 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar5 = ::FName::FName((FName *)local_e8,"STAT_FRDGPass_Execute");
    pTVar6 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_void___cdecl_TRDGLambdaPass<FCompositeCoreDisplayTransformShader::FParameters,`void___cdecl_AddDrawScreenPass<FCompositeCoreDisplayTransformShader>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FCompositeCoreDisplayTransformShader,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FCompositeCoreDisplayTransformShader::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_14ea7d422;
    }
  }
  bVar3 = false;
  FVar10 = local_d8;
LAB_14ea7d422:
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
       (TShaderRefBase<FCompositeCoreDisplayTransformShader,FShaderMapPointerTable> *)
       ((longlong)this + 0x200);
  local_c8.PixelShaderParameters = (FParameters **)((longlong)this + 0x210);
  local_c8.RHICmdList = (FRHICommandList *)param_1;
  DrawScreenPass<__AddDrawScreenPass<FCompositeCoreDisplayTransformShader>_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
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

// Execute @ 14ea7d670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FCompositeCoreMergeShader::FParameters,`FPixelShaderUtils::AddFullscreenPass<FCompositeCoreMergeShader>'::__l2::<lambda_1>_>
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
  undefined1 auStackY_138 [32];
  LARGE_INTEGER local_d8;
  FName local_d0;
  FStatMessage local_c0;
  FUniformBufferStaticBindings local_b0;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  FVar11.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_virtual_void___cdecl_TRDGLambdaPass<FCompositeCoreMergeShader::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<FCompositeCoreMergeShader>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<FCompositeCoreMergeShader,FShaderMapPointerTable>_const&___ptr64,FCompositeCoreMergeShader::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<FCompositeCoreMergeShader::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<FCompositeCoreMergeShader>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<FCompositeCoreMergeShader,FShaderMapPointerTable>_const&___ptr64,FCompositeCoreMergeShader::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<FCompositeCoreMergeShader::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<FCompositeCoreMergeShader>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<FCompositeCoreMergeShader,FShaderMapPointerTable>_const&___ptr64,FCompositeCoreMergeShader::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar5 = ::FName::FName((FName *)&local_d8.s,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<FCompositeCoreMergeShader::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<FCompositeCoreMergeShader>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<FCompositeCoreMergeShader,FShaderMapPointerTable>_const&___ptr64,FCompositeCoreMergeShader::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar5,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<FCompositeCoreMergeShader::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<FCompositeCoreMergeShader>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<FCompositeCoreMergeShader,FShaderMapPointerTable>_const&___ptr64,FCompositeCoreMergeShader::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar6 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar5 = ::FName::FName((FName *)&local_c0,"STAT_FRDGPass_Execute");
    pTVar6 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_void___cdecl_TRDGLambdaPass<FCompositeCoreMergeShader::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<FCompositeCoreMergeShader>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<FCompositeCoreMergeShader,FShaderMapPointerTable>_const&___ptr64,FCompositeCoreMergeShader::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar5,L"FRDGPass Execute",
                        "STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar10 = *(FName *)&pTVar6->Name;
  bVar2 = false;
  bVar4 = false;
  local_d0.ComparisonIndex.Value = 0;
  local_d0.Number = 0;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_d8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_d8.s,(pTVar6->StatDescriptionAnsi).Ptr)
      ;
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d8.s.LowPart = FVar9.Value;
        local_d8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_d8.s,(pTVar6->StatDescriptionWide).Ptr,
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
      goto LAB_14ea7d7f6;
    }
  }
  bVar3 = false;
  FVar10 = local_d0;
LAB_14ea7d7f6:
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
  FPixelShaderUtils::DrawFullscreenPixelShader<FCompositeCoreMergeShader>
            ((FRHICommandList *)param_1,*(FGlobalShaderMap **)((longlong)this + 0x188),
             (TShaderRefBase<FCompositeCoreMergeShader,FShaderMapPointerTable> *)
             ((longlong)this + 400),*(FParameters **)((longlong)this + 0x180),
             (TIntRect<int> *)((longlong)this + 0x1a0),*(FRHIBlendState **)((longlong)this + 0x1b0),
             *(FRHIRasterizerState **)((longlong)this + 0x1b8),
             *(FRHIDepthStencilState **)((longlong)this + 0x1c0),*(uint *)((longlong)this + 0x1c8));
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

// Execute @ 14ea7da30

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FCompositeCoreDilateShader>'::__l2::<lambda_1>_>::
Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  void *pvVar2;
  FShaderParametersMetadata *pFVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  LARGE_INTEGER LVar7;
  FName *pFVar8;
  TStatIdData *pTVar9;
  FUniformBufferStaticBindings *pFVar10;
  FRHIComputeShader *pFVar11;
  IRHIComputeContext *pIVar12;
  undefined8 *puVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar14;
  FNameEntryId FVar15;
  FName FVar16;
  FNameEntryId FVar17;
  undefined1 auStackY_158 [32];
  FName local_f8;
  LARGE_INTEGER local_f0;
  TIntVector3<int>_u_0 local_e8;
  uint local_dc;
  FName local_d8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_c8;
  FUniformBufferStaticBindings local_b8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_158;
  FVar17.Value = 0;
  local_f0 = (LARGE_INTEGER)this;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FCompositeCoreDilateShader>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FCompositeCoreDilateShader,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FCompositeCoreDilateShader::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FCompositeCoreDilateShader>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FCompositeCoreDilateShader,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FCompositeCoreDilateShader::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FCompositeCoreDilateShader>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FCompositeCoreDilateShader,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FCompositeCoreDilateShader::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar8 = ::FName::FName(&local_f8,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FCompositeCoreDilateShader>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FCompositeCoreDilateShader,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FCompositeCoreDilateShader::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar8,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FCompositeCoreDilateShader>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FCompositeCoreDilateShader,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FCompositeCoreDilateShader::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar9 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar8 = ::FName::FName((FName *)&local_e8._s_0,"STAT_FRDGPass_Execute");
    pTVar9 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FCompositeCoreDilateShader>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FCompositeCoreDilateShader,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FCompositeCoreDilateShader::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar8,L"FRDGPass Execute",
                        "STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar16 = *(FName *)&pTVar9->Name;
  bVar4 = false;
  bVar6 = false;
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar14 = FVar16.Number;
  if ((FVar15.Value != 0) || (uVar14 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_f8.ComparisonIndex.Value = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_f8,(pTVar9->StatDescriptionAnsi).Ptr);
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f8.ComparisonIndex.Value = FVar15.Value;
        local_f8.Number = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_f8,(pTVar9->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_f8.ComparisonIndex.Value = FVar15.Value;
      local_f8.Number = uVar14;
      local_d8 = FVar16;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar5 = true;
      FVar17.Value = local_d8.ComparisonIndex.Value;
      goto LAB_14ea7dbc0;
    }
  }
  bVar5 = false;
  FVar16 = local_d8;
LAB_14ea7dbc0:
  pFVar10 = FRDGParameterStruct::GetStaticUniformBuffers
                      ((FRDGParameterStruct *)((longlong)this + 0x30),&local_b8);
  FRHIComputeCommandList::SetStaticUniformBuffers(param_1,pFVar10);
  if (local_b8.UniformBuffers.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHIUniformBuffer_*>)0x0) {
    FMemory::Free((void *)local_b8.UniformBuffers.AllocatorInstance.SecondaryData);
  }
  if (local_b8.Slots.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_b8.Slots.AllocatorInstance.SecondaryData);
  }
  LVar7 = local_f0;
  local_f8.ComparisonIndex.Value = *(uint *)((longlong)this + 0x1a8);
  local_e8._0_8_ = *(ulonglong *)((longlong)this + 0x1a0);
  pvVar2 = *(void **)((longlong)this + 0x188);
  pFVar3 = *(FShaderParametersMetadata **)((longlong)this + 0x180);
  local_e8._s_0.Z = local_f8.ComparisonIndex.Value;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_e8._s_0);
  pFVar11 = TShaderRefBase<FCompositeCoreDilateShader,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FCompositeCoreDilateShader,FShaderMapPointerTable> *)
                       (LVar7.QuadPart + 400));
  SetComputePipelineState(param_1,pFVar11);
  local_c8.ShaderContent = *(FShader **)(local_f0.QuadPart + 400);
  local_c8.ShaderMap = *(FShaderMapBase **)(local_f0.QuadPart + 0x198);
  ValidateShaderParameters(&local_c8,pFVar3,pvVar2);
  LVar7 = local_f0;
  ::SetShaderParameters
            (param_1,pFVar11,*(FShaderParameterBindings **)(local_f0.QuadPart + 400),pFVar3,pvVar2);
  if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
    puVar13 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar13;
    *(undefined8 **)&param_1->field_0x30 = puVar13 + 1;
    puVar13[1] = 0;
    *(int *)(puVar13 + 2) = local_e8._s_0.X;
    *puVar13 = &___7FRHICommandDispatchComputeShader__6B_;
    *(int *)((longlong)puVar13 + 0x14) = local_e8._s_0.Y;
    *(uint *)(puVar13 + 3) = local_f8.ComparisonIndex.Value;
  }
  else {
    pIVar12 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_1);
    (**(code **)(pIVar12->_padding_ + 0x18))
              (pIVar12,local_e8._0_8_ & 0xffffffff,local_e8._s_0.Y,local_f8.ComparisonIndex.Value);
  }
  pFVar11 = TShaderRefBase<FCompositeCoreDilateShader,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FCompositeCoreDilateShader,FShaderMapPointerTable> *)
                       (LVar7.QuadPart + 400));
  UnsetShaderUAVs<FRHIComputeCommandList,FCompositeCoreDilateShader>
            (param_1,(TShaderRefBase<FCompositeCoreDilateShader,FShaderMapPointerTable> *)
                     (LVar7.QuadPart + 400),pFVar11);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_dc = FVar16.Number & 0xffff6fff | 0x6000;
      local_e8._s_0.Z = FVar17.Value;
      QueryPerformanceCounter(&local_f0);
      local_e8._0_8_ = local_f0.QuadPart & 0xffffffff;
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)&local_e8._s_0);
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

