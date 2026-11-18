// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LandscapePatch
// Functions: 9

// Execute @ 14db160d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<UE::Landscape::FApplyLandscapeTextureHeightPatchPS::FParameters,`FPixelShaderUtils::AddFullscreenPass<UE::Landscape::FApplyLandscapeTextureHeightPatchPS>'::__l2::<lambda_1>_>
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
       `private:_virtual_void___cdecl_TRDGLambdaPass<UE::Landscape::FApplyLandscapeTextureHeightPatchPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<UE::Landscape::FApplyLandscapeTextureHeightPatchPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<UE::Landscape::FApplyLandscapeTextureHeightPatchPS,FShaderMapPointerTable>_const&___ptr64,UE::Landscape::FApplyLandscapeTextureHeightPatchPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<UE::Landscape::FApplyLandscapeTextureHeightPatchPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<UE::Landscape::FApplyLandscapeTextureHeightPatchPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<UE::Landscape::FApplyLandscapeTextureHeightPatchPS,FShaderMapPointerTable>_const&___ptr64,UE::Landscape::FApplyLandscapeTextureHeightPatchPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<UE::Landscape::FApplyLandscapeTextureHeightPatchPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<UE::Landscape::FApplyLandscapeTextureHeightPatchPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<UE::Landscape::FApplyLandscapeTextureHeightPatchPS,FShaderMapPointerTable>_const&___ptr64,UE::Landscape::FApplyLandscapeTextureHeightPatchPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar5 = ::FName::FName((FName *)&local_d8.s,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<UE::Landscape::FApplyLandscapeTextureHeightPatchPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<UE::Landscape::FApplyLandscapeTextureHeightPatchPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<UE::Landscape::FApplyLandscapeTextureHeightPatchPS,FShaderMapPointerTable>_const&___ptr64,UE::Landscape::FApplyLandscapeTextureHeightPatchPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar5,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<UE::Landscape::FApplyLandscapeTextureHeightPatchPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<UE::Landscape::FApplyLandscapeTextureHeightPatchPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<UE::Landscape::FApplyLandscapeTextureHeightPatchPS,FShaderMapPointerTable>_const&___ptr64,UE::Landscape::FApplyLandscapeTextureHeightPatchPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar6 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar5 = ::FName::FName((FName *)&local_c0,"STAT_FRDGPass_Execute");
    pTVar6 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_void___cdecl_TRDGLambdaPass<UE::Landscape::FApplyLandscapeTextureHeightPatchPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<UE::Landscape::FApplyLandscapeTextureHeightPatchPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<UE::Landscape::FApplyLandscapeTextureHeightPatchPS,FShaderMapPointerTable>_const&___ptr64,UE::Landscape::FApplyLandscapeTextureHeightPatchPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_14db16256;
    }
  }
  bVar3 = false;
  FVar10 = local_d0;
LAB_14db16256:
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
  FPixelShaderUtils::DrawFullscreenPixelShader<UE::Landscape::FApplyLandscapeTextureHeightPatchPS>
            ((FRHICommandList *)param_1,*(FGlobalShaderMap **)((longlong)this + 0x188),
             (TShaderRefBase<UE::Landscape::FApplyLandscapeTextureHeightPatchPS,FShaderMapPointerTable>
              *)((longlong)this + 400),*(FParameters **)((longlong)this + 0x180),
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

// Execute @ 14db16490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<UE::Landscape::FApplyLandscapeTextureWeightPatchPS::FParameters,`FPixelShaderUtils::AddFullscreenPass<UE::Landscape::FApplyLandscapeTextureWeightPatchPS>'::__l2::<lambda_1>_>
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
       `private:_virtual_void___cdecl_TRDGLambdaPass<UE::Landscape::FApplyLandscapeTextureWeightPatchPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<UE::Landscape::FApplyLandscapeTextureWeightPatchPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<UE::Landscape::FApplyLandscapeTextureWeightPatchPS,FShaderMapPointerTable>_const&___ptr64,UE::Landscape::FApplyLandscapeTextureWeightPatchPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<UE::Landscape::FApplyLandscapeTextureWeightPatchPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<UE::Landscape::FApplyLandscapeTextureWeightPatchPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<UE::Landscape::FApplyLandscapeTextureWeightPatchPS,FShaderMapPointerTable>_const&___ptr64,UE::Landscape::FApplyLandscapeTextureWeightPatchPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<UE::Landscape::FApplyLandscapeTextureWeightPatchPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<UE::Landscape::FApplyLandscapeTextureWeightPatchPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<UE::Landscape::FApplyLandscapeTextureWeightPatchPS,FShaderMapPointerTable>_const&___ptr64,UE::Landscape::FApplyLandscapeTextureWeightPatchPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar5 = ::FName::FName((FName *)&local_d8.s,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<UE::Landscape::FApplyLandscapeTextureWeightPatchPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<UE::Landscape::FApplyLandscapeTextureWeightPatchPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<UE::Landscape::FApplyLandscapeTextureWeightPatchPS,FShaderMapPointerTable>_const&___ptr64,UE::Landscape::FApplyLandscapeTextureWeightPatchPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar5,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<UE::Landscape::FApplyLandscapeTextureWeightPatchPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<UE::Landscape::FApplyLandscapeTextureWeightPatchPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<UE::Landscape::FApplyLandscapeTextureWeightPatchPS,FShaderMapPointerTable>_const&___ptr64,UE::Landscape::FApplyLandscapeTextureWeightPatchPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar6 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar5 = ::FName::FName((FName *)&local_c0,"STAT_FRDGPass_Execute");
    pTVar6 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_void___cdecl_TRDGLambdaPass<UE::Landscape::FApplyLandscapeTextureWeightPatchPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<UE::Landscape::FApplyLandscapeTextureWeightPatchPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<UE::Landscape::FApplyLandscapeTextureWeightPatchPS,FShaderMapPointerTable>_const&___ptr64,UE::Landscape::FApplyLandscapeTextureWeightPatchPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_14db16616;
    }
  }
  bVar3 = false;
  FVar10 = local_d0;
LAB_14db16616:
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
  FPixelShaderUtils::DrawFullscreenPixelShader<UE::Landscape::FApplyLandscapeTextureWeightPatchPS>
            ((FRHICommandList *)param_1,*(FGlobalShaderMap **)((longlong)this + 0x188),
             (TShaderRefBase<UE::Landscape::FApplyLandscapeTextureWeightPatchPS,FShaderMapPointerTable>
              *)((longlong)this + 400),*(FParameters **)((longlong)this + 0x180),
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

// Execute @ 14db16850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<UE::Landscape::FConvertBackFromNativeLandscapePatchPS::FParameters,`FPixelShaderUtils::AddFullscreenPass<UE::Landscape::FConvertBackFromNativeLandscapePatchPS>'::__l2::<lambda_1>_>
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
       `private:_virtual_void___cdecl_TRDGLambdaPass<UE::Landscape::FConvertBackFromNativeLandscapePatchPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<UE::Landscape::FConvertBackFromNativeLandscapePatchPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<UE::Landscape::FConvertBackFromNativeLandscapePatchPS,FShaderMapPointerTable>_const&___ptr64,UE::Landscape::FConvertBackFromNativeLandscapePatchPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<UE::Landscape::FConvertBackFromNativeLandscapePatchPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<UE::Landscape::FConvertBackFromNativeLandscapePatchPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<UE::Landscape::FConvertBackFromNativeLandscapePatchPS,FShaderMapPointerTable>_const&___ptr64,UE::Landscape::FConvertBackFromNativeLandscapePatchPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<UE::Landscape::FConvertBackFromNativeLandscapePatchPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<UE::Landscape::FConvertBackFromNativeLandscapePatchPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<UE::Landscape::FConvertBackFromNativeLandscapePatchPS,FShaderMapPointerTable>_const&___ptr64,UE::Landscape::FConvertBackFromNativeLandscapePatchPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar5 = ::FName::FName((FName *)&local_d8.s,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<UE::Landscape::FConvertBackFromNativeLandscapePatchPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<UE::Landscape::FConvertBackFromNativeLandscapePatchPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<UE::Landscape::FConvertBackFromNativeLandscapePatchPS,FShaderMapPointerTable>_const&___ptr64,UE::Landscape::FConvertBackFromNativeLandscapePatchPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar5,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<UE::Landscape::FConvertBackFromNativeLandscapePatchPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<UE::Landscape::FConvertBackFromNativeLandscapePatchPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<UE::Landscape::FConvertBackFromNativeLandscapePatchPS,FShaderMapPointerTable>_const&___ptr64,UE::Landscape::FConvertBackFromNativeLandscapePatchPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar6 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar5 = ::FName::FName((FName *)&local_c0,"STAT_FRDGPass_Execute");
    pTVar6 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_void___cdecl_TRDGLambdaPass<UE::Landscape::FConvertBackFromNativeLandscapePatchPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<UE::Landscape::FConvertBackFromNativeLandscapePatchPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<UE::Landscape::FConvertBackFromNativeLandscapePatchPS,FShaderMapPointerTable>_const&___ptr64,UE::Landscape::FConvertBackFromNativeLandscapePatchPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_14db169d6;
    }
  }
  bVar3 = false;
  FVar10 = local_d0;
LAB_14db169d6:
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
  FPixelShaderUtils::
  DrawFullscreenPixelShader<UE::Landscape::FConvertBackFromNativeLandscapePatchPS>
            ((FRHICommandList *)param_1,*(FGlobalShaderMap **)((longlong)this + 0x188),
             (TShaderRefBase<UE::Landscape::FConvertBackFromNativeLandscapePatchPS,FShaderMapPointerTable>
              *)((longlong)this + 400),*(FParameters **)((longlong)this + 0x180),
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

// Execute @ 14db16c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<UE::Landscape::FConvertToNativeLandscapePatchPS::FParameters,`FPixelShaderUtils::AddFullscreenPass<UE::Landscape::FConvertToNativeLandscapePatchPS>'::__l2::<lambda_1>_>
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
       `private:_virtual_void___cdecl_TRDGLambdaPass<UE::Landscape::FConvertToNativeLandscapePatchPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<UE::Landscape::FConvertToNativeLandscapePatchPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<UE::Landscape::FConvertToNativeLandscapePatchPS,FShaderMapPointerTable>_const&___ptr64,UE::Landscape::FConvertToNativeLandscapePatchPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<UE::Landscape::FConvertToNativeLandscapePatchPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<UE::Landscape::FConvertToNativeLandscapePatchPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<UE::Landscape::FConvertToNativeLandscapePatchPS,FShaderMapPointerTable>_const&___ptr64,UE::Landscape::FConvertToNativeLandscapePatchPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<UE::Landscape::FConvertToNativeLandscapePatchPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<UE::Landscape::FConvertToNativeLandscapePatchPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<UE::Landscape::FConvertToNativeLandscapePatchPS,FShaderMapPointerTable>_const&___ptr64,UE::Landscape::FConvertToNativeLandscapePatchPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar5 = ::FName::FName((FName *)&local_d8.s,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<UE::Landscape::FConvertToNativeLandscapePatchPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<UE::Landscape::FConvertToNativeLandscapePatchPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<UE::Landscape::FConvertToNativeLandscapePatchPS,FShaderMapPointerTable>_const&___ptr64,UE::Landscape::FConvertToNativeLandscapePatchPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar5,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<UE::Landscape::FConvertToNativeLandscapePatchPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<UE::Landscape::FConvertToNativeLandscapePatchPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<UE::Landscape::FConvertToNativeLandscapePatchPS,FShaderMapPointerTable>_const&___ptr64,UE::Landscape::FConvertToNativeLandscapePatchPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar6 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar5 = ::FName::FName((FName *)&local_c0,"STAT_FRDGPass_Execute");
    pTVar6 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_void___cdecl_TRDGLambdaPass<UE::Landscape::FConvertToNativeLandscapePatchPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<UE::Landscape::FConvertToNativeLandscapePatchPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<UE::Landscape::FConvertToNativeLandscapePatchPS,FShaderMapPointerTable>_const&___ptr64,UE::Landscape::FConvertToNativeLandscapePatchPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_14db16d96;
    }
  }
  bVar3 = false;
  FVar10 = local_d0;
LAB_14db16d96:
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
  FPixelShaderUtils::DrawFullscreenPixelShader<UE::Landscape::FConvertToNativeLandscapePatchPS>
            ((FRHICommandList *)param_1,*(FGlobalShaderMap **)((longlong)this + 0x188),
             (TShaderRefBase<UE::Landscape::FConvertToNativeLandscapePatchPS,FShaderMapPointerTable>
              *)((longlong)this + 400),*(FParameters **)((longlong)this + 0x180),
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

// Execute @ 14db16fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FLandscapeCircleHeightPatchPS::FParameters,`FPixelShaderUtils::AddFullscreenPass<FLandscapeCircleHeightPatchPS>'::__l2::<lambda_1>_>
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
       `private:_virtual_void___cdecl_TRDGLambdaPass<FLandscapeCircleHeightPatchPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<FLandscapeCircleHeightPatchPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<FLandscapeCircleHeightPatchPS,FShaderMapPointerTable>_const&___ptr64,FLandscapeCircleHeightPatchPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<FLandscapeCircleHeightPatchPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<FLandscapeCircleHeightPatchPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<FLandscapeCircleHeightPatchPS,FShaderMapPointerTable>_const&___ptr64,FLandscapeCircleHeightPatchPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<FLandscapeCircleHeightPatchPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<FLandscapeCircleHeightPatchPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<FLandscapeCircleHeightPatchPS,FShaderMapPointerTable>_const&___ptr64,FLandscapeCircleHeightPatchPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar5 = ::FName::FName((FName *)&local_d8.s,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<FLandscapeCircleHeightPatchPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<FLandscapeCircleHeightPatchPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<FLandscapeCircleHeightPatchPS,FShaderMapPointerTable>_const&___ptr64,FLandscapeCircleHeightPatchPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar5,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<FLandscapeCircleHeightPatchPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<FLandscapeCircleHeightPatchPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<FLandscapeCircleHeightPatchPS,FShaderMapPointerTable>_const&___ptr64,FLandscapeCircleHeightPatchPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar6 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar5 = ::FName::FName((FName *)&local_c0,"STAT_FRDGPass_Execute");
    pTVar6 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_void___cdecl_TRDGLambdaPass<FLandscapeCircleHeightPatchPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<FLandscapeCircleHeightPatchPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<FLandscapeCircleHeightPatchPS,FShaderMapPointerTable>_const&___ptr64,FLandscapeCircleHeightPatchPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_14db17156;
    }
  }
  bVar3 = false;
  FVar10 = local_d0;
LAB_14db17156:
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
  FPixelShaderUtils::DrawFullscreenPixelShader<FLandscapeCircleHeightPatchPS>
            ((FRHICommandList *)param_1,*(FGlobalShaderMap **)((longlong)this + 0x188),
             (TShaderRefBase<FLandscapeCircleHeightPatchPS,FShaderMapPointerTable> *)
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

// Execute @ 14db17390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FLandscapeCircleHeightPatchPS::FParameters,`FPixelShaderUtils::AddFullscreenPass<FLandscapeCircleVisibilityPatchPS>'::__l2::<lambda_1>_>
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
       `private:_virtual_void___cdecl_TRDGLambdaPass<FLandscapeCircleHeightPatchPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<FLandscapeCircleVisibilityPatchPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<FLandscapeCircleVisibilityPatchPS,FShaderMapPointerTable>_const&___ptr64,FLandscapeCircleHeightPatchPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<FLandscapeCircleHeightPatchPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<FLandscapeCircleVisibilityPatchPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<FLandscapeCircleVisibilityPatchPS,FShaderMapPointerTable>_const&___ptr64,FLandscapeCircleHeightPatchPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<FLandscapeCircleHeightPatchPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<FLandscapeCircleVisibilityPatchPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<FLandscapeCircleVisibilityPatchPS,FShaderMapPointerTable>_const&___ptr64,FLandscapeCircleHeightPatchPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar5 = ::FName::FName((FName *)&local_d8.s,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<FLandscapeCircleHeightPatchPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<FLandscapeCircleVisibilityPatchPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<FLandscapeCircleVisibilityPatchPS,FShaderMapPointerTable>_const&___ptr64,FLandscapeCircleHeightPatchPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar5,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<FLandscapeCircleHeightPatchPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<FLandscapeCircleVisibilityPatchPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<FLandscapeCircleVisibilityPatchPS,FShaderMapPointerTable>_const&___ptr64,FLandscapeCircleHeightPatchPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar6 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar5 = ::FName::FName((FName *)&local_c0,"STAT_FRDGPass_Execute");
    pTVar6 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_void___cdecl_TRDGLambdaPass<FLandscapeCircleHeightPatchPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<FLandscapeCircleVisibilityPatchPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<FLandscapeCircleVisibilityPatchPS,FShaderMapPointerTable>_const&___ptr64,FLandscapeCircleHeightPatchPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_14db17516;
    }
  }
  bVar3 = false;
  FVar10 = local_d0;
LAB_14db17516:
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
  FPixelShaderUtils::DrawFullscreenPixelShader<FLandscapeCircleVisibilityPatchPS>
            ((FRHICommandList *)param_1,*(FGlobalShaderMap **)((longlong)this + 0x188),
             (TShaderRefBase<FLandscapeCircleVisibilityPatchPS,FShaderMapPointerTable> *)
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

// Execute @ 14db17750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<UE::Landscape::FOffsetHeightmapPS::FParameters,`FPixelShaderUtils::AddFullscreenPass<UE::Landscape::FOffsetHeightmapPS>'::__l2::<lambda_1>_>
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
       `private:_virtual_void___cdecl_TRDGLambdaPass<UE::Landscape::FOffsetHeightmapPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<UE::Landscape::FOffsetHeightmapPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<UE::Landscape::FOffsetHeightmapPS,FShaderMapPointerTable>_const&___ptr64,UE::Landscape::FOffsetHeightmapPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<UE::Landscape::FOffsetHeightmapPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<UE::Landscape::FOffsetHeightmapPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<UE::Landscape::FOffsetHeightmapPS,FShaderMapPointerTable>_const&___ptr64,UE::Landscape::FOffsetHeightmapPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<UE::Landscape::FOffsetHeightmapPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<UE::Landscape::FOffsetHeightmapPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<UE::Landscape::FOffsetHeightmapPS,FShaderMapPointerTable>_const&___ptr64,UE::Landscape::FOffsetHeightmapPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar5 = ::FName::FName((FName *)&local_d8.s,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<UE::Landscape::FOffsetHeightmapPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<UE::Landscape::FOffsetHeightmapPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<UE::Landscape::FOffsetHeightmapPS,FShaderMapPointerTable>_const&___ptr64,UE::Landscape::FOffsetHeightmapPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar5,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<UE::Landscape::FOffsetHeightmapPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<UE::Landscape::FOffsetHeightmapPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<UE::Landscape::FOffsetHeightmapPS,FShaderMapPointerTable>_const&___ptr64,UE::Landscape::FOffsetHeightmapPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar6 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar5 = ::FName::FName((FName *)&local_c0,"STAT_FRDGPass_Execute");
    pTVar6 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_void___cdecl_TRDGLambdaPass<UE::Landscape::FOffsetHeightmapPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<UE::Landscape::FOffsetHeightmapPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<UE::Landscape::FOffsetHeightmapPS,FShaderMapPointerTable>_const&___ptr64,UE::Landscape::FOffsetHeightmapPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_14db178d6;
    }
  }
  bVar3 = false;
  FVar10 = local_d0;
LAB_14db178d6:
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
  FPixelShaderUtils::DrawFullscreenPixelShader<UE::Landscape::FOffsetHeightmapPS>
            ((FRHICommandList *)param_1,*(FGlobalShaderMap **)((longlong)this + 0x188),
             (TShaderRefBase<UE::Landscape::FOffsetHeightmapPS,FShaderMapPointerTable> *)
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

// Execute @ 14db17b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<UE::Landscape::FReinitializeLandscapePatchPS::FParameters,`FPixelShaderUtils::AddFullscreenPass<UE::Landscape::FReinitializeLandscapePatchPS>'::__l2::<lambda_1>_>
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
       `private:_virtual_void___cdecl_TRDGLambdaPass<UE::Landscape::FReinitializeLandscapePatchPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<UE::Landscape::FReinitializeLandscapePatchPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<UE::Landscape::FReinitializeLandscapePatchPS,FShaderMapPointerTable>_const&___ptr64,UE::Landscape::FReinitializeLandscapePatchPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<UE::Landscape::FReinitializeLandscapePatchPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<UE::Landscape::FReinitializeLandscapePatchPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<UE::Landscape::FReinitializeLandscapePatchPS,FShaderMapPointerTable>_const&___ptr64,UE::Landscape::FReinitializeLandscapePatchPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<UE::Landscape::FReinitializeLandscapePatchPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<UE::Landscape::FReinitializeLandscapePatchPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<UE::Landscape::FReinitializeLandscapePatchPS,FShaderMapPointerTable>_const&___ptr64,UE::Landscape::FReinitializeLandscapePatchPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar5 = ::FName::FName((FName *)&local_d8.s,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<UE::Landscape::FReinitializeLandscapePatchPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<UE::Landscape::FReinitializeLandscapePatchPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<UE::Landscape::FReinitializeLandscapePatchPS,FShaderMapPointerTable>_const&___ptr64,UE::Landscape::FReinitializeLandscapePatchPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar5,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<UE::Landscape::FReinitializeLandscapePatchPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<UE::Landscape::FReinitializeLandscapePatchPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<UE::Landscape::FReinitializeLandscapePatchPS,FShaderMapPointerTable>_const&___ptr64,UE::Landscape::FReinitializeLandscapePatchPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar6 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar5 = ::FName::FName((FName *)&local_c0,"STAT_FRDGPass_Execute");
    pTVar6 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_void___cdecl_TRDGLambdaPass<UE::Landscape::FReinitializeLandscapePatchPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<UE::Landscape::FReinitializeLandscapePatchPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<UE::Landscape::FReinitializeLandscapePatchPS,FShaderMapPointerTable>_const&___ptr64,UE::Landscape::FReinitializeLandscapePatchPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_14db17c96;
    }
  }
  bVar3 = false;
  FVar10 = local_d0;
LAB_14db17c96:
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
  FPixelShaderUtils::DrawFullscreenPixelShader<UE::Landscape::FReinitializeLandscapePatchPS>
            ((FRHICommandList *)param_1,*(FGlobalShaderMap **)((longlong)this + 0x188),
             (TShaderRefBase<UE::Landscape::FReinitializeLandscapePatchPS,FShaderMapPointerTable> *)
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

// Execute @ 14db17ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<UE::Landscape::FSimpleTextureCopyPS::FParameters,`FPixelShaderUtils::AddFullscreenPass<UE::Landscape::FSimpleTextureCopyPS>'::__l2::<lambda_1>_>
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
       `private:_virtual_void___cdecl_TRDGLambdaPass<UE::Landscape::FSimpleTextureCopyPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<UE::Landscape::FSimpleTextureCopyPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<UE::Landscape::FSimpleTextureCopyPS,FShaderMapPointerTable>_const&___ptr64,UE::Landscape::FSimpleTextureCopyPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<UE::Landscape::FSimpleTextureCopyPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<UE::Landscape::FSimpleTextureCopyPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<UE::Landscape::FSimpleTextureCopyPS,FShaderMapPointerTable>_const&___ptr64,UE::Landscape::FSimpleTextureCopyPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<UE::Landscape::FSimpleTextureCopyPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<UE::Landscape::FSimpleTextureCopyPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<UE::Landscape::FSimpleTextureCopyPS,FShaderMapPointerTable>_const&___ptr64,UE::Landscape::FSimpleTextureCopyPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar5 = ::FName::FName((FName *)&local_d8.s,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<UE::Landscape::FSimpleTextureCopyPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<UE::Landscape::FSimpleTextureCopyPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<UE::Landscape::FSimpleTextureCopyPS,FShaderMapPointerTable>_const&___ptr64,UE::Landscape::FSimpleTextureCopyPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar5,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<UE::Landscape::FSimpleTextureCopyPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<UE::Landscape::FSimpleTextureCopyPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<UE::Landscape::FSimpleTextureCopyPS,FShaderMapPointerTable>_const&___ptr64,UE::Landscape::FSimpleTextureCopyPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar6 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar5 = ::FName::FName((FName *)&local_c0,"STAT_FRDGPass_Execute");
    pTVar6 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_void___cdecl_TRDGLambdaPass<UE::Landscape::FSimpleTextureCopyPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<UE::Landscape::FSimpleTextureCopyPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<UE::Landscape::FSimpleTextureCopyPS,FShaderMapPointerTable>_const&___ptr64,UE::Landscape::FSimpleTextureCopyPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_14db18056;
    }
  }
  bVar3 = false;
  FVar10 = local_d0;
LAB_14db18056:
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
  FPixelShaderUtils::DrawFullscreenPixelShader<UE::Landscape::FSimpleTextureCopyPS>
            ((FRHICommandList *)param_1,*(FGlobalShaderMap **)((longlong)this + 0x188),
             (TShaderRefBase<UE::Landscape::FSimpleTextureCopyPS,FShaderMapPointerTable> *)
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

