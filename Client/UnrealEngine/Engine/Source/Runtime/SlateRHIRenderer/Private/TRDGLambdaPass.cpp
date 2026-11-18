// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 11

// Execute @ 1460054e0

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
TRDGLambdaPass<FCompositeHDRForBlurPS::FParameters,`AddDrawScreenPass<FCompositeHDRForBlurPS>'::__l2::<lambda_1>_>
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
       `private:_virtual_void___cdecl_TRDGLambdaPass<FCompositeHDRForBlurPS::FParameters,`void___cdecl_AddDrawScreenPass<FCompositeHDRForBlurPS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FCompositeHDRForBlurPS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FCompositeHDRForBlurPS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<FCompositeHDRForBlurPS::FParameters,`void___cdecl_AddDrawScreenPass<FCompositeHDRForBlurPS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FCompositeHDRForBlurPS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FCompositeHDRForBlurPS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<FCompositeHDRForBlurPS::FParameters,`void___cdecl_AddDrawScreenPass<FCompositeHDRForBlurPS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FCompositeHDRForBlurPS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FCompositeHDRForBlurPS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar5 = ::FName::FName((FName *)&local_f8[0].s,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<FCompositeHDRForBlurPS::FParameters,`void___cdecl_AddDrawScreenPass<FCompositeHDRForBlurPS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FCompositeHDRForBlurPS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FCompositeHDRForBlurPS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar5,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<FCompositeHDRForBlurPS::FParameters,`void___cdecl_AddDrawScreenPass<FCompositeHDRForBlurPS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FCompositeHDRForBlurPS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FCompositeHDRForBlurPS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar6 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar5 = ::FName::FName((FName *)local_e8,"STAT_FRDGPass_Execute");
    pTVar6 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_void___cdecl_TRDGLambdaPass<FCompositeHDRForBlurPS::FParameters,`void___cdecl_AddDrawScreenPass<FCompositeHDRForBlurPS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FCompositeHDRForBlurPS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FCompositeHDRForBlurPS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_146005672;
    }
  }
  bVar3 = false;
  FVar10 = local_d8;
LAB_146005672:
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
       (TShaderRefBase<FCompositeHDRForBlurPS,FShaderMapPointerTable> *)((longlong)this + 0x200);
  local_c8.PixelShaderParameters = (FParameters **)((longlong)this + 0x210);
  local_c8.RHICmdList = (FRHICommandList *)param_1;
  DrawScreenPass<__AddDrawScreenPass<FCompositeHDRForBlurPS>_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
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

// Execute @ 1460058c0

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
TRDGLambdaPass<FCompositePS::FParameters,`AddDrawScreenPass<FCompositePS>'::__l2::<lambda_1>_>::
Execute(void *this,FRHIComputeCommandList *param_1)

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
       `private:_virtual_void___cdecl_TRDGLambdaPass<FCompositePS::FParameters,`void___cdecl_AddDrawScreenPass<FCompositePS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FCompositePS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FCompositePS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<FCompositePS::FParameters,`void___cdecl_AddDrawScreenPass<FCompositePS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FCompositePS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FCompositePS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<FCompositePS::FParameters,`void___cdecl_AddDrawScreenPass<FCompositePS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FCompositePS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FCompositePS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar5 = ::FName::FName((FName *)&local_f8[0].s,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<FCompositePS::FParameters,`void___cdecl_AddDrawScreenPass<FCompositePS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FCompositePS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FCompositePS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar5,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<FCompositePS::FParameters,`void___cdecl_AddDrawScreenPass<FCompositePS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FCompositePS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FCompositePS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar6 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar5 = ::FName::FName((FName *)local_e8,"STAT_FRDGPass_Execute");
    pTVar6 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_void___cdecl_TRDGLambdaPass<FCompositePS::FParameters,`void___cdecl_AddDrawScreenPass<FCompositePS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FCompositePS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FCompositePS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_146005a52;
    }
  }
  bVar3 = false;
  FVar10 = local_d8;
LAB_146005a52:
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
       (TShaderRefBase<FCompositePS,FShaderMapPointerTable> *)((longlong)this + 0x200);
  local_c8.PixelShaderParameters = (FParameters **)((longlong)this + 0x210);
  local_c8.RHICmdList = (FRHICommandList *)param_1;
  DrawScreenPass<__AddDrawScreenPass<FCompositePS>_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
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

// Execute @ 146005ca0

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
TRDGLambdaPass<FSlatePostProcessBlurPS::FParameters,`AddDrawScreenPass<FSlatePostProcessBlurPS>'::__l2::<lambda_1>_>
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
       `private:_virtual_void___cdecl_TRDGLambdaPass<FSlatePostProcessBlurPS::FParameters,`void___cdecl_AddDrawScreenPass<FSlatePostProcessBlurPS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FSlatePostProcessBlurPS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FSlatePostProcessBlurPS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<FSlatePostProcessBlurPS::FParameters,`void___cdecl_AddDrawScreenPass<FSlatePostProcessBlurPS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FSlatePostProcessBlurPS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FSlatePostProcessBlurPS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<FSlatePostProcessBlurPS::FParameters,`void___cdecl_AddDrawScreenPass<FSlatePostProcessBlurPS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FSlatePostProcessBlurPS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FSlatePostProcessBlurPS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar5 = ::FName::FName((FName *)&local_f8[0].s,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<FSlatePostProcessBlurPS::FParameters,`void___cdecl_AddDrawScreenPass<FSlatePostProcessBlurPS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FSlatePostProcessBlurPS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FSlatePostProcessBlurPS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar5,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<FSlatePostProcessBlurPS::FParameters,`void___cdecl_AddDrawScreenPass<FSlatePostProcessBlurPS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FSlatePostProcessBlurPS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FSlatePostProcessBlurPS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar6 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar5 = ::FName::FName((FName *)local_e8,"STAT_FRDGPass_Execute");
    pTVar6 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_void___cdecl_TRDGLambdaPass<FSlatePostProcessBlurPS::FParameters,`void___cdecl_AddDrawScreenPass<FSlatePostProcessBlurPS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FSlatePostProcessBlurPS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FSlatePostProcessBlurPS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_146005e32;
    }
  }
  bVar3 = false;
  FVar10 = local_d8;
LAB_146005e32:
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
       (TShaderRefBase<FSlatePostProcessBlurPS,FShaderMapPointerTable> *)((longlong)this + 0x200);
  local_c8.PixelShaderParameters = (FParameters **)((longlong)this + 0x210);
  local_c8.RHICmdList = (FRHICommandList *)param_1;
  DrawScreenPass<__AddDrawScreenPass<FSlatePostProcessBlurPS>_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
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

// Execute @ 146006080

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
TRDGLambdaPass<FSlatePostProcessColorDeficiencyPS::FParameters,`AddDrawScreenPass<FSlatePostProcessColorDeficiencyPS>'::__l2::<lambda_1>_>
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
       `private:_virtual_void___cdecl_TRDGLambdaPass<FSlatePostProcessColorDeficiencyPS::FParameters,`void___cdecl_AddDrawScreenPass<FSlatePostProcessColorDeficiencyPS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FSlatePostProcessColorDeficiencyPS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FSlatePostProcessColorDeficiencyPS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<FSlatePostProcessColorDeficiencyPS::FParameters,`void___cdecl_AddDrawScreenPass<FSlatePostProcessColorDeficiencyPS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FSlatePostProcessColorDeficiencyPS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FSlatePostProcessColorDeficiencyPS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<FSlatePostProcessColorDeficiencyPS::FParameters,`void___cdecl_AddDrawScreenPass<FSlatePostProcessColorDeficiencyPS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FSlatePostProcessColorDeficiencyPS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FSlatePostProcessColorDeficiencyPS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar5 = ::FName::FName((FName *)&local_f8[0].s,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<FSlatePostProcessColorDeficiencyPS::FParameters,`void___cdecl_AddDrawScreenPass<FSlatePostProcessColorDeficiencyPS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FSlatePostProcessColorDeficiencyPS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FSlatePostProcessColorDeficiencyPS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar5,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<FSlatePostProcessColorDeficiencyPS::FParameters,`void___cdecl_AddDrawScreenPass<FSlatePostProcessColorDeficiencyPS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FSlatePostProcessColorDeficiencyPS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FSlatePostProcessColorDeficiencyPS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar6 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar5 = ::FName::FName((FName *)local_e8,"STAT_FRDGPass_Execute");
    pTVar6 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_void___cdecl_TRDGLambdaPass<FSlatePostProcessColorDeficiencyPS::FParameters,`void___cdecl_AddDrawScreenPass<FSlatePostProcessColorDeficiencyPS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FSlatePostProcessColorDeficiencyPS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FSlatePostProcessColorDeficiencyPS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_146006212;
    }
  }
  bVar3 = false;
  FVar10 = local_d8;
LAB_146006212:
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
       (TShaderRefBase<FSlatePostProcessColorDeficiencyPS,FShaderMapPointerTable> *)
       ((longlong)this + 0x200);
  local_c8.PixelShaderParameters = (FParameters **)((longlong)this + 0x210);
  local_c8.RHICmdList = (FRHICommandList *)param_1;
  DrawScreenPass<__AddDrawScreenPass<FSlatePostProcessColorDeficiencyPS>_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
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

// Execute @ 146006460

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
TRDGLambdaPass<FSlatePostProcessDirectResamplePS::FParameters,`AddDrawScreenPass<FSlatePostProcessDirectResamplePS>'::__l2::<lambda_1>_>
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
       `private:_virtual_void___cdecl_TRDGLambdaPass<FSlatePostProcessDirectResamplePS::FParameters,`void___cdecl_AddDrawScreenPass<FSlatePostProcessDirectResamplePS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FSlatePostProcessDirectResamplePS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FSlatePostProcessDirectResamplePS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<FSlatePostProcessDirectResamplePS::FParameters,`void___cdecl_AddDrawScreenPass<FSlatePostProcessDirectResamplePS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FSlatePostProcessDirectResamplePS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FSlatePostProcessDirectResamplePS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<FSlatePostProcessDirectResamplePS::FParameters,`void___cdecl_AddDrawScreenPass<FSlatePostProcessDirectResamplePS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FSlatePostProcessDirectResamplePS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FSlatePostProcessDirectResamplePS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar5 = ::FName::FName((FName *)&local_f8[0].s,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<FSlatePostProcessDirectResamplePS::FParameters,`void___cdecl_AddDrawScreenPass<FSlatePostProcessDirectResamplePS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FSlatePostProcessDirectResamplePS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FSlatePostProcessDirectResamplePS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar5,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<FSlatePostProcessDirectResamplePS::FParameters,`void___cdecl_AddDrawScreenPass<FSlatePostProcessDirectResamplePS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FSlatePostProcessDirectResamplePS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FSlatePostProcessDirectResamplePS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar6 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar5 = ::FName::FName((FName *)local_e8,"STAT_FRDGPass_Execute");
    pTVar6 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_void___cdecl_TRDGLambdaPass<FSlatePostProcessDirectResamplePS::FParameters,`void___cdecl_AddDrawScreenPass<FSlatePostProcessDirectResamplePS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FSlatePostProcessDirectResamplePS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FSlatePostProcessDirectResamplePS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_1460065f2;
    }
  }
  bVar3 = false;
  FVar10 = local_d8;
LAB_1460065f2:
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
       (TShaderRefBase<FSlatePostProcessDirectResamplePS,FShaderMapPointerTable> *)
       ((longlong)this + 0x200);
  local_c8.PixelShaderParameters = (FParameters **)((longlong)this + 0x210);
  local_c8.RHICmdList = (FRHICommandList *)param_1;
  DrawScreenPass<__AddDrawScreenPass<FSlatePostProcessDirectResamplePS>_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
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

// Execute @ 146006840

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
TRDGLambdaPass<FSlatePostProcessOptimizedKawaseUpsamplePS::FParameters,`AddDrawScreenPass<FSlatePostProcessOptimizedKawaseUpsamplePS>'::__l2::<lambda_1>_>
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
       `private:_virtual_void___cdecl_TRDGLambdaPass<FSlatePostProcessOptimizedKawaseUpsamplePS::FParameters,`void___cdecl_AddDrawScreenPass<FSlatePostProcessOptimizedKawaseUpsamplePS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FSlatePostProcessOptimizedKawaseUpsamplePS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FSlatePostProcessOptimizedKawaseUpsamplePS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<FSlatePostProcessOptimizedKawaseUpsamplePS::FParameters,`void___cdecl_AddDrawScreenPass<FSlatePostProcessOptimizedKawaseUpsamplePS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FSlatePostProcessOptimizedKawaseUpsamplePS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FSlatePostProcessOptimizedKawaseUpsamplePS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<FSlatePostProcessOptimizedKawaseUpsamplePS::FParameters,`void___cdecl_AddDrawScreenPass<FSlatePostProcessOptimizedKawaseUpsamplePS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FSlatePostProcessOptimizedKawaseUpsamplePS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FSlatePostProcessOptimizedKawaseUpsamplePS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar5 = ::FName::FName((FName *)&local_f8[0].s,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<FSlatePostProcessOptimizedKawaseUpsamplePS::FParameters,`void___cdecl_AddDrawScreenPass<FSlatePostProcessOptimizedKawaseUpsamplePS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FSlatePostProcessOptimizedKawaseUpsamplePS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FSlatePostProcessOptimizedKawaseUpsamplePS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar5,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<FSlatePostProcessOptimizedKawaseUpsamplePS::FParameters,`void___cdecl_AddDrawScreenPass<FSlatePostProcessOptimizedKawaseUpsamplePS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FSlatePostProcessOptimizedKawaseUpsamplePS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FSlatePostProcessOptimizedKawaseUpsamplePS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar6 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar5 = ::FName::FName((FName *)local_e8,"STAT_FRDGPass_Execute");
    pTVar6 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_void___cdecl_TRDGLambdaPass<FSlatePostProcessOptimizedKawaseUpsamplePS::FParameters,`void___cdecl_AddDrawScreenPass<FSlatePostProcessOptimizedKawaseUpsamplePS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FSlatePostProcessOptimizedKawaseUpsamplePS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FSlatePostProcessOptimizedKawaseUpsamplePS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_1460069d2;
    }
  }
  bVar3 = false;
  FVar10 = local_d8;
LAB_1460069d2:
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
       (TShaderRefBase<FSlatePostProcessOptimizedKawaseUpsamplePS,FShaderMapPointerTable> *)
       ((longlong)this + 0x200);
  local_c8.PixelShaderParameters = (FParameters **)((longlong)this + 0x210);
  local_c8.RHICmdList = (FRHICommandList *)param_1;
  DrawScreenPass<__AddDrawScreenPass<FSlatePostProcessOptimizedKawaseUpsamplePS>_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
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

// Execute @ 146006c20

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
TRDGLambdaPass<FSlatePostProcessResample2x2PS::FParameters,`AddDrawScreenPass<FSlatePostProcessResample2x2PS>'::__l2::<lambda_1>_>
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
       `private:_virtual_void___cdecl_TRDGLambdaPass<FSlatePostProcessResample2x2PS::FParameters,`void___cdecl_AddDrawScreenPass<FSlatePostProcessResample2x2PS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FSlatePostProcessResample2x2PS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FSlatePostProcessResample2x2PS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<FSlatePostProcessResample2x2PS::FParameters,`void___cdecl_AddDrawScreenPass<FSlatePostProcessResample2x2PS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FSlatePostProcessResample2x2PS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FSlatePostProcessResample2x2PS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<FSlatePostProcessResample2x2PS::FParameters,`void___cdecl_AddDrawScreenPass<FSlatePostProcessResample2x2PS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FSlatePostProcessResample2x2PS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FSlatePostProcessResample2x2PS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar5 = ::FName::FName((FName *)&local_f8[0].s,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<FSlatePostProcessResample2x2PS::FParameters,`void___cdecl_AddDrawScreenPass<FSlatePostProcessResample2x2PS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FSlatePostProcessResample2x2PS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FSlatePostProcessResample2x2PS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar5,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<FSlatePostProcessResample2x2PS::FParameters,`void___cdecl_AddDrawScreenPass<FSlatePostProcessResample2x2PS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FSlatePostProcessResample2x2PS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FSlatePostProcessResample2x2PS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar6 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar5 = ::FName::FName((FName *)local_e8,"STAT_FRDGPass_Execute");
    pTVar6 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_void___cdecl_TRDGLambdaPass<FSlatePostProcessResample2x2PS::FParameters,`void___cdecl_AddDrawScreenPass<FSlatePostProcessResample2x2PS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FSlatePostProcessResample2x2PS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FSlatePostProcessResample2x2PS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_146006db2;
    }
  }
  bVar3 = false;
  FVar10 = local_d8;
LAB_146006db2:
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
       (TShaderRefBase<FSlatePostProcessResample2x2PS,FShaderMapPointerTable> *)
       ((longlong)this + 0x200);
  local_c8.PixelShaderParameters = (FParameters **)((longlong)this + 0x210);
  local_c8.RHICmdList = (FRHICommandList *)param_1;
  DrawScreenPass<__AddDrawScreenPass<FSlatePostProcessResample2x2PS>_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
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

// Execute @ 146007000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FSlatePostProcessUpsamplePS::FParameters,`AddSlatePostProcessUpsamplePass'::__l2::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FSlatePostProcessUpsamplePS::FParameters,_void___cdecl_AddSlatePostProcessUpsamplePass(FRDGBuilder_&,FSlatePostProcessUpsampleInputs_const_&)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
  FRDGAsyncTask local_d0;
  FName local_c8;
  FStatMessage local_b8;
  FUniformBufferStaticBindings local_a8;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_138;
  FVar11.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::StatPtr_STAT_FRDGPass_Execute ==
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FSlatePostProcessUpsamplePS::FParameters,_void___cdecl_AddSlatePostProcessUpsamplePass(FRDGBuilder_&,FSlatePostProcessUpsampleInputs_const_&)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FSlatePostProcessUpsamplePS::FParameters,_void___cdecl_AddSlatePostProcessUpsamplePass(FRDGBuilder_&,FSlatePostProcessUpsampleInputs_const_&)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar5 = ::FName::FName((FName *)&local_b8,"STAT_FRDGPass_Execute");
    FVar6 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FSlatePostProcessUpsamplePS::FParameters,_void___cdecl_AddSlatePostProcessUpsamplePass(FRDGBuilder_&,FSlatePostProcessUpsampleInputs_const_&)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar5,
                         L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,
                         ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
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
      local_c8 = FVar10;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = local_c8.ComparisonIndex.Value;
      goto LAB_146007189;
    }
  }
  bVar3 = false;
  FVar10 = local_c8;
LAB_146007189:
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
  `AddSlatePostProcessUpsamplePass'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x180),local_d0,(FRHICommandList *)param_1);
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
      local_b8.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_b8.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_d8);
      local_b8.StatData.Pad[4] = '\0';
      local_b8.StatData.Pad[5] = '\0';
      local_b8.StatData.Pad[6] = '\0';
      local_b8.StatData.Pad[7] = '\0';
      local_b8.StatData.Pad[0] = local_d8.s.LowPart._0_1_;
      local_b8.StatData.Pad[1] = local_d8.s.LowPart._1_1_;
      local_b8.StatData.Pad[2] = local_d8.s.LowPart._2_1_;
      local_b8.StatData.Pad[3] = local_d8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_b8);
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

// Execute @ 146007380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FReadbackTextureParameters,`FSlateRHIRenderer::DrawWindow_RenderThread'::__l79::<lambda_4>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar2;
  FRDGResource *pFVar3;
  TArray<FColor,TSizedDefaultAllocator<32>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FReadbackTextureParameters,_private:_struct_FSlateDrawWindowPassOutputs___cdecl_FSlateRHIRenderer::DrawWindow_RenderThread(FRDGBuilder_&,FSlateDrawWindowPassInputs_const_&)_::_79_::<lambda_4>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
  FVar11;
  FUniformBufferStaticBindings *pFVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  undefined1 auStackY_228 [32];
  FColor_u_0 local_1c8 [2];
  LARGE_INTEGER local_1c0;
  TIntRect<int>_u_0 local_1b8;
  undefined2 local_1a8;
  undefined2 uStack_1a6;
  undefined4 uStack_1a4;
  TIntRect<int>_u_0 local_198;
  undefined2 local_188;
  undefined2 uStack_186;
  undefined4 uStack_184;
  FName local_178;
  FName local_170;
  FStatMessage local_160;
  TIntPoint<int>_u_0 local_148;
  TIntPoint<int>_u_0 TStack_140;
  undefined8 local_138;
  undefined4 local_130;
  TIntPoint<int>_u_0 local_128;
  TIntPoint<int>_u_0 TStack_120;
  undefined8 local_118;
  undefined4 local_110;
  FName local_108;
  FName local_100 [2];
  undefined2 local_ef;
  undefined1 local_ed;
  undefined2 local_e6;
  undefined2 local_d3;
  undefined1 local_d1;
  undefined2 local_ca;
  FUniformBufferStaticBindings local_c0;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::StatPtr_STAT_FRDGPass_Execute ==
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FReadbackTextureParameters,_private:_struct_FSlateDrawWindowPassOutputs___cdecl_FSlateRHIRenderer::DrawWindow_RenderThread(FRDGBuilder_&,FSlateDrawWindowPassInputs_const_&)_::_79_::<lambda_4>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
           )0x0) {
        pFVar10 = ::FName::FName(&local_108,"STAT_FRDGPass_Execute");
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
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FReadbackTextureParameters,_private:_struct_FSlateDrawWindowPassOutputs___cdecl_FSlateRHIRenderer::DrawWindow_RenderThread(FRDGBuilder_&,FSlateDrawWindowPassInputs_const_&)_::_79_::<lambda_4>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar10 = ::FName::FName(local_100,"STAT_FRDGPass_Execute");
    FVar11 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FReadbackTextureParameters,_private:_struct_FSlateDrawWindowPassOutputs___cdecl_FSlateRHIRenderer::DrawWindow_RenderThread(FRDGBuilder_&,FSlateDrawWindowPassInputs_const_&)_::_79_::<lambda_4>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar10,
                          L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,
                          ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar11;
  bVar6 = false;
  bVar8 = false;
  local_170.ComparisonIndex.Value = 0;
  local_170.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar13 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar13 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_1c8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1c8[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_178.ComparisonIndex.Value = FVar14.Value;
        local_178.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_178,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1c0.s.LowPart = FVar14.Value;
      local_1c0.s.HighPart = uVar13;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar7 = true;
      goto LAB_146007506;
    }
  }
  bVar7 = false;
  FVar15 = local_170;
LAB_146007506:
  pFVar12 = FRDGParameterStruct::GetStaticUniformBuffers
                      ((FRDGParameterStruct *)((longlong)this + 0x30),&local_c0);
  FRHIComputeCommandList::SetStaticUniformBuffers(param_1,pFVar12);
  if (local_c0.UniformBuffers.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHIUniformBuffer_*>)0x0) {
    FMemory::Free((void *)local_c0.UniformBuffers.AllocatorInstance.SecondaryData);
  }
  if (local_c0.Slots.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_c0.Slots.AllocatorInstance.SecondaryData);
  }
  pTVar2 = *(TArray<FLinearColor,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x1a0);
  if (pTVar2 == (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) {
    if (*(longlong *)((longlong)this + 0x1a8) == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ColorData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateRHIRenderer.cpp"
                         ,0x389,L"");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar3 = *(FRDGResource **)((longlong)this + 0x188);
    pTVar4 = *(TArray<FColor,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x1a8);
    local_1b8._11_1_ = local_d1;
    local_1b8._9_2_ = local_d3;
    uStack_1a6 = local_ca;
    local_198._s_0.Min.field0_0x0 = (TIntPoint<int>)*(TIntPoint<int>_u_0 *)((longlong)this + 400);
    local_198._s_0.Max.field0_0x0 = (TIntPoint<int>)*(TIntPoint<int>_u_0 *)((longlong)this + 0x198);
    local_1b8._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x6;
    local_1b8._12_4_ = 0;
    local_1b8._8_1_ = 1;
    local_1b8._12_4_ = 0x467a0000;
    local_1a8 = 0;
    uStack_1a4 = 0;
    FRDGResource::ValidateRHIAccess(pFVar3);
    local_118 = CONCAT44(uStack_1a4,CONCAT22(uStack_1a6,local_1a8));
    local_128 = (TIntPoint<int>_u_0)local_1b8._s_0.Min.field0_0x0;
    TStack_120 = (TIntPoint<int>_u_0)local_1b8._s_0.Max.field0_0x0;
    local_110 = 0;
    FRHICommandListImmediate::ReadSurfaceData
              ((FRHICommandListImmediate *)param_1,(FRHITexture *)pFVar3->ResourceRHI,
               (TIntRect<int> *)&local_198._s_0,pTVar4,(FReadSurfaceDataFlags *)&local_128._s_0);
  }
  else {
    pFVar3 = *(FRDGResource **)((longlong)this + 0x188);
    local_198._11_1_ = local_ed;
    local_198._9_2_ = local_ef;
    uStack_186 = local_e6;
    local_1b8._s_0.Min.field0_0x0 = (TIntPoint<int>)*(TIntPoint<int>_u_0 *)((longlong)this + 400);
    local_1b8._s_0.Max.field0_0x0 = (TIntPoint<int>)*(TIntPoint<int>_u_0 *)((longlong)this + 0x198);
    local_198._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x300000006;
    local_198._12_4_ = 0;
    local_198._8_1_ = 1;
    local_198._12_4_ = 0x467a0000;
    local_188 = 0;
    uStack_184 = 0;
    FRDGResource::ValidateRHIAccess(pFVar3);
    local_138 = CONCAT44(uStack_184,CONCAT22(uStack_186,local_188));
    local_148 = (TIntPoint<int>_u_0)local_198._s_0.Min.field0_0x0;
    TStack_140 = (TIntPoint<int>_u_0)local_198._s_0.Max.field0_0x0;
    local_130 = 0;
    FRHICommandListImmediate::ReadSurfaceData
              ((FRHICommandListImmediate *)param_1,(FRHITexture *)pFVar3->ResourceRHI,
               (TIntRect<int> *)&local_1b8._s_0,pTVar2,(FReadSurfaceDataFlags *)&local_148._s_0);
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
      local_160.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_160.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_1c0);
      local_160.StatData.Pad[4] = '\0';
      local_160.StatData.Pad[5] = '\0';
      local_160.StatData.Pad[6] = '\0';
      local_160.StatData.Pad[7] = '\0';
      local_160.StatData.Pad[0] = local_1c0.s.LowPart._0_1_;
      local_160.StatData.Pad[1] = local_1c0.s.LowPart._1_1_;
      local_160.StatData.Pad[2] = local_1c0.s.LowPart._2_1_;
      local_160.StatData.Pad[3] = local_1c0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_160);
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

// Execute @ 146007840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FSlateRenderBatchParameters,``AddSlateDrawElementsPass'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FSlateRenderBatchParameters,_public:___cdecl__void___cdecl_AddSlateDrawElementsPass(FRDGBuilder_&,FSlateRHIRenderingPolicy_const_&,FSlateDrawElementsPassInputs_const_&,TArrayView<FSlateRenderBatch_const_,int>,int)_::_2_::<lambda_2>::operator()(void)const_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
  FRDGAsyncTask local_d0;
  FName local_c8;
  FStatMessage local_b8;
  FUniformBufferStaticBindings local_a8;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_138;
  FVar11.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::StatPtr_STAT_FRDGPass_Execute ==
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FSlateRenderBatchParameters,_public:___cdecl__void___cdecl_AddSlateDrawElementsPass(FRDGBuilder_&,FSlateRHIRenderingPolicy_const_&,FSlateDrawElementsPassInputs_const_&,TArrayView<FSlateRenderBatch_const_,int>,int)_::_2_::<lambda_2>::operator()(void)const_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
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
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FSlateRenderBatchParameters,_public:___cdecl__void___cdecl_AddSlateDrawElementsPass(FRDGBuilder_&,FSlateRHIRenderingPolicy_const_&,FSlateDrawElementsPassInputs_const_&,TArrayView<FSlateRenderBatch_const_,int>,int)_::_2_::<lambda_2>::operator()(void)const_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar5 = ::FName::FName((FName *)&local_b8,"STAT_FRDGPass_Execute");
    FVar6 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FSlateRenderBatchParameters,_public:___cdecl__void___cdecl_AddSlateDrawElementsPass(FRDGBuilder_&,FSlateRHIRenderingPolicy_const_&,FSlateDrawElementsPassInputs_const_&,TArrayView<FSlateRenderBatch_const_,int>,int)_::_2_::<lambda_2>::operator()(void)const_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar5,
                         L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,
                         ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
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
      local_c8 = FVar10;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = local_c8.ComparisonIndex.Value;
      goto LAB_1460079c9;
    }
  }
  bVar3 = false;
  FVar10 = local_c8;
LAB_1460079c9:
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
  ``AddSlateDrawElementsPass'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x180),local_d0,(FRHICommandList *)param_1);
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
      local_b8.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_b8.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_d8);
      local_b8.StatData.Pad[4] = '\0';
      local_b8.StatData.Pad[5] = '\0';
      local_b8.StatData.Pad[6] = '\0';
      local_b8.StatData.Pad[7] = '\0';
      local_b8.StatData.Pad[0] = local_d8.s.LowPart._0_1_;
      local_b8.StatData.Pad[1] = local_d8.s.LowPart._1_1_;
      local_b8.StatData.Pad[2] = local_d8.s.LowPart._2_1_;
      local_b8.StatData.Pad[3] = local_d8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_b8);
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

// Execute @ 146007bc0

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
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<FCompositeCS>'::__l2::<lambda_1>_>::Execute
          (void *this,FRHIComputeCommandList *param_1)

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
       `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FCompositeCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FCompositeCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FCompositeCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FCompositeCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FCompositeCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FCompositeCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FCompositeCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FCompositeCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FCompositeCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar8 = ::FName::FName(&local_f8,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FCompositeCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FCompositeCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FCompositeCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar8,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FCompositeCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FCompositeCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FCompositeCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar9 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar8 = ::FName::FName((FName *)&local_e8._s_0,"STAT_FRDGPass_Execute");
    pTVar9 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<FCompositeCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<FCompositeCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,FCompositeCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_146007d50;
    }
  }
  bVar5 = false;
  FVar16 = local_d8;
LAB_146007d50:
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
  pFVar11 = TShaderRefBase<FCompositeCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FCompositeCS,FShaderMapPointerTable> *)(LVar7.QuadPart + 400)
                      );
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
  pFVar11 = TShaderRefBase<FCompositeCS,FShaderMapPointerTable>::GetComputeShader
                      ((TShaderRefBase<FCompositeCS,FShaderMapPointerTable> *)(LVar7.QuadPart + 400)
                      );
  UnsetShaderUAVs<FRHIComputeCommandList,FCompositeCS>
            (param_1,(TShaderRefBase<FCompositeCS,FShaderMapPointerTable> *)(LVar7.QuadPart + 400),
             pFVar11);
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

