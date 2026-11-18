// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 6

// Execute @ 145f0c030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FLandscapeMergeTexturesPS::FParameters,`FPixelShaderUtils::AddFullscreenPass<FLandscapeMergeTexturesPS>'::__l2::<lambda_1>_>
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
       `private:_virtual_void___cdecl_TRDGLambdaPass<FLandscapeMergeTexturesPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<FLandscapeMergeTexturesPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<FLandscapeMergeTexturesPS,FShaderMapPointerTable>_const&___ptr64,FLandscapeMergeTexturesPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<FLandscapeMergeTexturesPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<FLandscapeMergeTexturesPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<FLandscapeMergeTexturesPS,FShaderMapPointerTable>_const&___ptr64,FLandscapeMergeTexturesPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<FLandscapeMergeTexturesPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<FLandscapeMergeTexturesPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<FLandscapeMergeTexturesPS,FShaderMapPointerTable>_const&___ptr64,FLandscapeMergeTexturesPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar5 = ::FName::FName((FName *)&local_d8.s,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<FLandscapeMergeTexturesPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<FLandscapeMergeTexturesPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<FLandscapeMergeTexturesPS,FShaderMapPointerTable>_const&___ptr64,FLandscapeMergeTexturesPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar5,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<FLandscapeMergeTexturesPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<FLandscapeMergeTexturesPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<FLandscapeMergeTexturesPS,FShaderMapPointerTable>_const&___ptr64,FLandscapeMergeTexturesPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar6 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar5 = ::FName::FName((FName *)&local_c0,"STAT_FRDGPass_Execute");
    pTVar6 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_void___cdecl_TRDGLambdaPass<FLandscapeMergeTexturesPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<FLandscapeMergeTexturesPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<FLandscapeMergeTexturesPS,FShaderMapPointerTable>_const&___ptr64,FLandscapeMergeTexturesPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_145f0c1b6;
    }
  }
  bVar3 = false;
  FVar10 = local_d0;
LAB_145f0c1b6:
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
  FPixelShaderUtils::DrawFullscreenPixelShader<FLandscapeMergeTexturesPS>
            ((FRHICommandList *)param_1,*(FGlobalShaderMap **)((longlong)this + 0x188),
             (TShaderRefBase<FLandscapeMergeTexturesPS,FShaderMapPointerTable> *)
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

// Execute @ 145f0c3f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FLandscapePackRGBAChannelsPS::FParameters,`FPixelShaderUtils::AddFullscreenPass<FLandscapePackRGBAChannelsPS>'::__l2::<lambda_1>_>
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
       `private:_virtual_void___cdecl_TRDGLambdaPass<FLandscapePackRGBAChannelsPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<FLandscapePackRGBAChannelsPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<FLandscapePackRGBAChannelsPS,FShaderMapPointerTable>_const&___ptr64,FLandscapePackRGBAChannelsPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<FLandscapePackRGBAChannelsPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<FLandscapePackRGBAChannelsPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<FLandscapePackRGBAChannelsPS,FShaderMapPointerTable>_const&___ptr64,FLandscapePackRGBAChannelsPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<FLandscapePackRGBAChannelsPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<FLandscapePackRGBAChannelsPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<FLandscapePackRGBAChannelsPS,FShaderMapPointerTable>_const&___ptr64,FLandscapePackRGBAChannelsPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar5 = ::FName::FName((FName *)&local_d8.s,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<FLandscapePackRGBAChannelsPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<FLandscapePackRGBAChannelsPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<FLandscapePackRGBAChannelsPS,FShaderMapPointerTable>_const&___ptr64,FLandscapePackRGBAChannelsPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar5,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<FLandscapePackRGBAChannelsPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<FLandscapePackRGBAChannelsPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<FLandscapePackRGBAChannelsPS,FShaderMapPointerTable>_const&___ptr64,FLandscapePackRGBAChannelsPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar6 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar5 = ::FName::FName((FName *)&local_c0,"STAT_FRDGPass_Execute");
    pTVar6 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_void___cdecl_TRDGLambdaPass<FLandscapePackRGBAChannelsPS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<FLandscapePackRGBAChannelsPS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<FLandscapePackRGBAChannelsPS,FShaderMapPointerTable>_const&___ptr64,FLandscapePackRGBAChannelsPS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_145f0c576;
    }
  }
  bVar3 = false;
  FVar10 = local_d0;
LAB_145f0c576:
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
  FPixelShaderUtils::DrawFullscreenPixelShader<FLandscapePackRGBAChannelsPS>
            ((FRHICommandList *)param_1,*(FGlobalShaderMap **)((longlong)this + 0x188),
             (TShaderRefBase<FLandscapePackRGBAChannelsPS,FShaderMapPointerTable> *)
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

// Execute @ 145f0c7b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FLandscapeResampleMergedTexturePS::FParameters,`FPixelShaderUtils::AddFullscreenPass<FLandscapeResampleMergedTexturePS>'::__l2::<lambda_1>_>
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
       `private:_virtual_void___cdecl_TRDGLambdaPass<FLandscapeResampleMergedTexturePS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<FLandscapeResampleMergedTexturePS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<FLandscapeResampleMergedTexturePS,FShaderMapPointerTable>_const&___ptr64,FLandscapeResampleMergedTexturePS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<FLandscapeResampleMergedTexturePS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<FLandscapeResampleMergedTexturePS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<FLandscapeResampleMergedTexturePS,FShaderMapPointerTable>_const&___ptr64,FLandscapeResampleMergedTexturePS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<FLandscapeResampleMergedTexturePS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<FLandscapeResampleMergedTexturePS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<FLandscapeResampleMergedTexturePS,FShaderMapPointerTable>_const&___ptr64,FLandscapeResampleMergedTexturePS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar5 = ::FName::FName((FName *)&local_d8.s,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<FLandscapeResampleMergedTexturePS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<FLandscapeResampleMergedTexturePS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<FLandscapeResampleMergedTexturePS,FShaderMapPointerTable>_const&___ptr64,FLandscapeResampleMergedTexturePS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar5,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<FLandscapeResampleMergedTexturePS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<FLandscapeResampleMergedTexturePS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<FLandscapeResampleMergedTexturePS,FShaderMapPointerTable>_const&___ptr64,FLandscapeResampleMergedTexturePS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar6 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar5 = ::FName::FName((FName *)&local_c0,"STAT_FRDGPass_Execute");
    pTVar6 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_void___cdecl_TRDGLambdaPass<FLandscapeResampleMergedTexturePS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<FLandscapeResampleMergedTexturePS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<FLandscapeResampleMergedTexturePS,FShaderMapPointerTable>_const&___ptr64,FLandscapeResampleMergedTexturePS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_145f0c936;
    }
  }
  bVar3 = false;
  FVar10 = local_d0;
LAB_145f0c936:
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
  FPixelShaderUtils::DrawFullscreenPixelShader<FLandscapeResampleMergedTexturePS>
            ((FRHICommandList *)param_1,*(FGlobalShaderMap **)((longlong)this + 0x188),
             (TShaderRefBase<FLandscapeResampleMergedTexturePS,FShaderMapPointerTable> *)
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

// Execute @ 145f2d430

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
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<UE::Landscape::Culling::FBuildLandscapeTileDataCS>'::__l2::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

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
       `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<UE::Landscape::Culling::FBuildLandscapeTileDataCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<UE::Landscape::Culling::FBuildLandscapeTileDataCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,UE::Landscape::Culling::FBuildLandscapeTileDataCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<UE::Landscape::Culling::FBuildLandscapeTileDataCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<UE::Landscape::Culling::FBuildLandscapeTileDataCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,UE::Landscape::Culling::FBuildLandscapeTileDataCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<UE::Landscape::Culling::FBuildLandscapeTileDataCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<UE::Landscape::Culling::FBuildLandscapeTileDataCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,UE::Landscape::Culling::FBuildLandscapeTileDataCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar8 = ::FName::FName(&local_f8,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<UE::Landscape::Culling::FBuildLandscapeTileDataCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<UE::Landscape::Culling::FBuildLandscapeTileDataCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,UE::Landscape::Culling::FBuildLandscapeTileDataCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar8,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<UE::Landscape::Culling::FBuildLandscapeTileDataCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<UE::Landscape::Culling::FBuildLandscapeTileDataCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,UE::Landscape::Culling::FBuildLandscapeTileDataCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar9 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar8 = ::FName::FName((FName *)&local_e8._s_0,"STAT_FRDGPass_Execute");
    pTVar9 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_void___cdecl_TRDGLambdaPass<void,`class_FRDGPass*___ptr64___cdecl_FComputeShaderUtils::AddPass<UE::Landscape::Culling::FBuildLandscapeTileDataCS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,ERDGPassFlags,TShaderRefBase<UE::Landscape::Culling::FBuildLandscapeTileDataCS,FShaderMapPointerTable>_const&___ptr64,FShaderParametersMetadata_const*___ptr64,UE::Landscape::Culling::FBuildLandscapeTileDataCS::FParameters*___ptr64,UE::Math::TIntVector3<int>)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
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
      goto LAB_145f2d5c0;
    }
  }
  bVar5 = false;
  FVar16 = local_d8;
LAB_145f2d5c0:
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
  pFVar11 = (FRHIComputeShader *)
            TShaderRefBase<UE::Landscape::Culling::FBuildLandscapeTileDataCS,FShaderMapPointerTable>
            ::GetRHIShaderBase((TShaderRefBase<UE::Landscape::Culling::FBuildLandscapeTileDataCS,FShaderMapPointerTable>
                                *)(LVar7.QuadPart + 400),SF_Compute,true);
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
    *puVar13 = &___7FRHICommandDispatchComputeShader__6B_;
    *(int *)(puVar13 + 2) = local_e8._s_0.X;
    *(uint *)(puVar13 + 3) = local_f8.ComparisonIndex.Value;
    *(int *)((longlong)puVar13 + 0x14) = local_e8._s_0.Y;
  }
  else {
    pIVar12 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_1);
    (**(code **)(pIVar12->_padding_ + 0x18))
              (pIVar12,local_e8._0_8_ & 0xffffffff,local_e8._s_0.Y,local_f8.ComparisonIndex.Value);
  }
  pFVar11 = (FRHIComputeShader *)
            TShaderRefBase<UE::Landscape::Culling::FBuildLandscapeTileDataCS,FShaderMapPointerTable>
            ::GetRHIShaderBase((TShaderRefBase<UE::Landscape::Culling::FBuildLandscapeTileDataCS,FShaderMapPointerTable>
                                *)(LVar7.QuadPart + 400),SF_Compute,true);
  UnsetShaderUAVs<FRHIComputeCommandList,UE::Landscape::Culling::FBuildLandscapeTileDataCS>
            (param_1,(TShaderRefBase<UE::Landscape::Culling::FBuildLandscapeTileDataCS,FShaderMapPointerTable>
                      *)(LVar7.QuadPart + 400),pFVar11);
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

// Execute @ 145f8bb70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
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
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FLandscapeGrassPassParameters,`AddSimpleMeshPass<FLandscapeGrassPassParameters,`FLandscapeGrassWeightExporter_RenderThread::RenderLandscapeComponentToTexture_RenderThread'::__l2::<lambda_1>,`AddSimpleMeshPass<FLandscapeGrassPassParameters,`FLandscapeGrassWeightExporter_RenderThread::RenderLandscapeComponentToTexture_RenderThread'::__l2::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FLandscapeGrassPassParameters,_void___cdecl_AddSimpleMeshPass<FLandscapeGrassPassParameters,_public:_void___cdecl_FLandscapeGrassWeightExporter_RenderThread::RenderLandscapeComponentToTexture_RenderThread(FRDGBuilder_&,FRDGTexture_*)_::_2_::<lambda_1>,_void___cdecl_AddSimpleMeshPass<FLandscapeGrassPassParameters,_public:_void___cdecl_FLandscapeGrassWeightExporter_RenderThread::RenderLandscapeComponentToTexture_RenderThread(FRDGBuilder_&,FRDGTexture_*)_::_2_::<lambda_1>_>(FRDGBuilder_&,FLandscapeGrassPassParameters_*,FScene_const_*,FSceneView_const_&,FInstanceCullingManager_*,FRDGEventName_&&,UE::Math::TIntRect<int>_const_&,_public:_void___cdecl_FLandscapeGrassWeightExporter_RenderThread::RenderLandscapeComponentToTexture_RenderThread(FRDGBuilder_&,FRDGTexture_*)_::_2_::<lambda_1>)_::_2_::<lambda_1>_>(FRDGBuilder_&,FLandscapeGrassPassParameters_*,FScene_const_*,FSceneView_const_&,FInstanceCullingManager_*,FRDGEventName_&&,ERDGPassFlags_const_&,_public:_void___cdecl_FLandscapeGrassWeightExporter_RenderThread::RenderLandscapeComponentToTexture_RenderThread(FRDGBuilder_&,FRDGTexture_*)_::_2_::<lambda_1>,_void___cdecl_AddSimpleMeshPass<FLandscapeGrassPassParameters,_public:_void___cdecl_FLandscapeGrassWeightExporter_RenderThread::RenderLandscapeComponentToTexture_RenderThread(FRDGBuilder_&,FRDGTexture_*)_::_2_::<lambda_1>_>(FRDGBuilder_&,FLandscapeGrassPassParameters_*,FScene_const_*,FSceneView_const_&,FInstanceCullingManager_*,FRDGEventName_&&,UE::Math::TIntRect<int>_const_&,_public:_void___cdecl_FLandscapeGrassWeightExporter_RenderThread::RenderLandscapeComponentToTexture_RenderThread(FRDGBuilder_&,FRDGTexture_*)_::_2_::<lambda_1>)_::_2_::<lambda_1>,bool)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
  FVar13;
  FUniformBufferStaticBindings *pFVar14;
  undefined8 *puVar15;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar16;
  FNameEntryId FVar17;
  FName FVar18;
  undefined1 auStackY_198 [32];
  FColor_u_0 local_138 [2];
  LARGE_INTEGER local_130;
  FName local_128;
  FName local_120;
  FStatMessage local_110;
  FName local_100;
  FName local_f8;
  FUniformBufferStaticBindings local_f0;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::StatPtr_STAT_FRDGPass_Execute ==
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FLandscapeGrassPassParameters,_void___cdecl_AddSimpleMeshPass<FLandscapeGrassPassParameters,_public:_void___cdecl_FLandscapeGrassWeightExporter_RenderThread::RenderLandscapeComponentToTexture_RenderThread(FRDGBuilder_&,FRDGTexture_*)_::_2_::<lambda_1>,_void___cdecl_AddSimpleMeshPass<FLandscapeGrassPassParameters,_public:_void___cdecl_FLandscapeGrassWeightExporter_RenderThread::RenderLandscapeComponentToTexture_RenderThread(FRDGBuilder_&,FRDGTexture_*)_::_2_::<lambda_1>_>(FRDGBuilder_&,FLandscapeGrassPassParameters_*,FScene_const_*,FSceneView_const_&,FInstanceCullingManager_*,FRDGEventName_&&,UE::Math::TIntRect<int>_const_&,_public:_void___cdecl_FLandscapeGrassWeightExporter_RenderThread::RenderLandscapeComponentToTexture_RenderThread(FRDGBuilder_&,FRDGTexture_*)_::_2_::<lambda_1>)_::_2_::<lambda_1>_>(FRDGBuilder_&,FLandscapeGrassPassParameters_*,FScene_const_*,FSceneView_const_&,FInstanceCullingManager_*,FRDGEventName_&&,ERDGPassFlags_const_&,_public:_void___cdecl_FLandscapeGrassWeightExporter_RenderThread::RenderLandscapeComponentToTexture_RenderThread(FRDGBuilder_&,FRDGTexture_*)_::_2_::<lambda_1>,_void___cdecl_AddSimpleMeshPass<FLandscapeGrassPassParameters,_public:_void___cdecl_FLandscapeGrassWeightExporter_RenderThread::RenderLandscapeComponentToTexture_RenderThread(FRDGBuilder_&,FRDGTexture_*)_::_2_::<lambda_1>_>(FRDGBuilder_&,FLandscapeGrassPassParameters_*,FScene_const_*,FSceneView_const_&,FInstanceCullingManager_*,FRDGEventName_&&,UE::Math::TIntRect<int>_const_&,_public:_void___cdecl_FLandscapeGrassWeightExporter_RenderThread::RenderLandscapeComponentToTexture_RenderThread(FRDGBuilder_&,FRDGTexture_*)_::_2_::<lambda_1>)_::_2_::<lambda_1>,bool)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
           )0x0) {
        pFVar12 = ::FName::FName(&local_100,"STAT_FRDGPass_Execute");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar12,
                   L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,
                   true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar13 = ::StatPtr_STAT_FRDGPass_Execute;
  if (::StatPtr_STAT_FRDGPass_Execute ==
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FLandscapeGrassPassParameters,_void___cdecl_AddSimpleMeshPass<FLandscapeGrassPassParameters,_public:_void___cdecl_FLandscapeGrassWeightExporter_RenderThread::RenderLandscapeComponentToTexture_RenderThread(FRDGBuilder_&,FRDGTexture_*)_::_2_::<lambda_1>,_void___cdecl_AddSimpleMeshPass<FLandscapeGrassPassParameters,_public:_void___cdecl_FLandscapeGrassWeightExporter_RenderThread::RenderLandscapeComponentToTexture_RenderThread(FRDGBuilder_&,FRDGTexture_*)_::_2_::<lambda_1>_>(FRDGBuilder_&,FLandscapeGrassPassParameters_*,FScene_const_*,FSceneView_const_&,FInstanceCullingManager_*,FRDGEventName_&&,UE::Math::TIntRect<int>_const_&,_public:_void___cdecl_FLandscapeGrassWeightExporter_RenderThread::RenderLandscapeComponentToTexture_RenderThread(FRDGBuilder_&,FRDGTexture_*)_::_2_::<lambda_1>)_::_2_::<lambda_1>_>(FRDGBuilder_&,FLandscapeGrassPassParameters_*,FScene_const_*,FSceneView_const_&,FInstanceCullingManager_*,FRDGEventName_&&,ERDGPassFlags_const_&,_public:_void___cdecl_FLandscapeGrassWeightExporter_RenderThread::RenderLandscapeComponentToTexture_RenderThread(FRDGBuilder_&,FRDGTexture_*)_::_2_::<lambda_1>,_void___cdecl_AddSimpleMeshPass<FLandscapeGrassPassParameters,_public:_void___cdecl_FLandscapeGrassWeightExporter_RenderThread::RenderLandscapeComponentToTexture_RenderThread(FRDGBuilder_&,FRDGTexture_*)_::_2_::<lambda_1>_>(FRDGBuilder_&,FLandscapeGrassPassParameters_*,FScene_const_*,FSceneView_const_&,FInstanceCullingManager_*,FRDGEventName_&&,UE::Math::TIntRect<int>_const_&,_public:_void___cdecl_FLandscapeGrassWeightExporter_RenderThread::RenderLandscapeComponentToTexture_RenderThread(FRDGBuilder_&,FRDGTexture_*)_::_2_::<lambda_1>)_::_2_::<lambda_1>,bool)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar12 = ::FName::FName(&local_f8,"STAT_FRDGPass_Execute");
    FVar13 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FLandscapeGrassPassParameters,_void___cdecl_AddSimpleMeshPass<FLandscapeGrassPassParameters,_public:_void___cdecl_FLandscapeGrassWeightExporter_RenderThread::RenderLandscapeComponentToTexture_RenderThread(FRDGBuilder_&,FRDGTexture_*)_::_2_::<lambda_1>,_void___cdecl_AddSimpleMeshPass<FLandscapeGrassPassParameters,_public:_void___cdecl_FLandscapeGrassWeightExporter_RenderThread::RenderLandscapeComponentToTexture_RenderThread(FRDGBuilder_&,FRDGTexture_*)_::_2_::<lambda_1>_>(FRDGBuilder_&,FLandscapeGrassPassParameters_*,FScene_const_*,FSceneView_const_&,FInstanceCullingManager_*,FRDGEventName_&&,UE::Math::TIntRect<int>_const_&,_public:_void___cdecl_FLandscapeGrassWeightExporter_RenderThread::RenderLandscapeComponentToTexture_RenderThread(FRDGBuilder_&,FRDGTexture_*)_::_2_::<lambda_1>)_::_2_::<lambda_1>_>(FRDGBuilder_&,FLandscapeGrassPassParameters_*,FScene_const_*,FSceneView_const_&,FInstanceCullingManager_*,FRDGEventName_&&,ERDGPassFlags_const_&,_public:_void___cdecl_FLandscapeGrassWeightExporter_RenderThread::RenderLandscapeComponentToTexture_RenderThread(FRDGBuilder_&,FRDGTexture_*)_::_2_::<lambda_1>,_void___cdecl_AddSimpleMeshPass<FLandscapeGrassPassParameters,_public:_void___cdecl_FLandscapeGrassWeightExporter_RenderThread::RenderLandscapeComponentToTexture_RenderThread(FRDGBuilder_&,FRDGTexture_*)_::_2_::<lambda_1>_>(FRDGBuilder_&,FLandscapeGrassPassParameters_*,FScene_const_*,FSceneView_const_&,FInstanceCullingManager_*,FRDGEventName_&&,UE::Math::TIntRect<int>_const_&,_public:_void___cdecl_FLandscapeGrassWeightExporter_RenderThread::RenderLandscapeComponentToTexture_RenderThread(FRDGBuilder_&,FRDGTexture_*)_::_2_::<lambda_1>)_::_2_::<lambda_1>,bool)_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar12,
                          L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,
                          ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar13;
  bVar8 = false;
  bVar10 = false;
  local_120.ComparisonIndex.Value = 0;
  local_120.Number = 0;
  FVar17 = FVar18.ComparisonIndex.Value;
  uVar16 = FVar18.Number;
  if ((FVar17.Value != 0) || (uVar16 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_138[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_138[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_128.ComparisonIndex.Value = FVar17.Value;
        local_128.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_128,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_130.s.LowPart = FVar17.Value;
      local_130.s.HighPart = uVar16;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar9 = true;
      goto LAB_145f8bd08;
    }
  }
  bVar9 = false;
  FVar18 = local_120;
LAB_145f8bd08:
  pFVar14 = FRDGParameterStruct::GetStaticUniformBuffers
                      ((FRDGParameterStruct *)((longlong)this + 0x30),&local_f0);
  FRHIComputeCommandList::SetStaticUniformBuffers(param_1,pFVar14);
  if (local_f0.UniformBuffers.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHIUniformBuffer_*>)0x0) {
    FMemory::Free((void *)local_f0.UniformBuffers.AllocatorInstance.SecondaryData);
  }
  if (local_f0.Slots.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_f0.Slots.AllocatorInstance.SecondaryData);
  }
  iVar3 = *(int *)((longlong)this + 0x19c);
  iVar4 = *(int *)((longlong)this + 0x198);
  iVar5 = *(int *)((longlong)this + 0x194);
  iVar6 = *(int *)((longlong)this + 400);
  if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
    puVar15 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x28,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar15;
    *(undefined8 **)&param_1->field_0x30 = puVar15 + 1;
    puVar15[1] = 0;
    *puVar15 = &___7FRHICommandSetViewport__6B_;
    *(float *)(puVar15 + 2) = (float)iVar6;
    *(float *)((longlong)puVar15 + 0x14) = (float)iVar5;
    *(float *)((longlong)puVar15 + 0x1c) = (float)iVar4;
    *(float *)(puVar15 + 4) = (float)iVar3;
    *(undefined4 *)(puVar15 + 3) = 0;
    *(undefined4 *)((longlong)puVar15 + 0x24) = 0x3f800000;
  }
  else {
    bVar2 = param_1->field_0x6a;
    if ((bVar2 == 0) || ((bVar2 & bVar2 - 1) != 0)) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSingleRHIPipeline(ActivePipelines)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                          ,0x2b0,
                          L"Exactly one pipeline must be active to call GetContext(). Current pipeline mask is \'0x%02x\'."
                         );
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    if (*(longlong *)&param_1->field_0x38 == 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("GraphicsContext",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                          ,0x2b1,
                          L"There is no active graphics context on this command list. There may be a missing call to SwitchPipeline()."
                         );
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    (**(code **)(**(longlong **)&param_1->field_0x38 + 0x1a0))
              (*(longlong **)&param_1->field_0x38,(float)iVar6,(float)iVar5,0);
  }
  FSimpleMeshDrawCommandPass::SubmitDraw
            (*(FSimpleMeshDrawCommandPass **)((longlong)this + 0x180),(FRHICommandList *)param_1,
             (FInstanceCullingDrawParams *)(*(longlong *)((longlong)this + 0x188) + 0x20));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_110.NameAndInfo.Index = FVar18.ComparisonIndex.Value;
      local_110.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
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

// Execute @ 145fbec40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FEmptyShaderParameters,``UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,_public:___cdecl__public:_void___cdecl_UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand(TFunction<void___cdecl(FRHICommandListImmediate_&)>)_::_5_::<lambda_1>::operator()(FRDGBuilder_&)const_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
  FVar7;
  FUniformBufferStaticBindings *pFVar8;
  undefined8 uVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  longlong *plVar11;
  FNameEntryId FVar12;
  FName FVar13;
  FNameEntryId FVar14;
  undefined1 auStackY_138 [32];
  LARGE_INTEGER local_d8;
  FName local_d0;
  FStatMessage local_c0;
  FUniformBufferStaticBindings local_b0;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  FVar14.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::StatPtr_STAT_FRDGPass_Execute ==
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,_public:___cdecl__public:_void___cdecl_UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand(TFunction<void___cdecl(FRHICommandListImmediate_&)>)_::_5_::<lambda_1>::operator()(FRDGBuilder_&)const_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
           )0x0) {
        pFVar6 = ::FName::FName((FName *)&local_d8.s,"STAT_FRDGPass_Execute");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar6,
                   L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,
                   true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar7 = ::StatPtr_STAT_FRDGPass_Execute;
  if (::StatPtr_STAT_FRDGPass_Execute ==
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,_public:___cdecl__public:_void___cdecl_UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand(TFunction<void___cdecl(FRHICommandListImmediate_&)>)_::_5_::<lambda_1>::operator()(FRDGBuilder_&)const_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
       )0x0) {
    pFVar6 = ::FName::FName((FName *)&local_c0,"STAT_FRDGPass_Execute");
    FVar7 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_TRDGLambdaPass<FEmptyShaderParameters,_public:___cdecl__public:_void___cdecl_UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand(TFunction<void___cdecl(FRHICommandListImmediate_&)>)_::_5_::<lambda_1>::operator()(FRDGBuilder_&)const_::_2_::<lambda_1>_>::Execute(FRHIComputeCommandList_&)_::_2_::FStat_STAT_FRDGPass_Execute>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_FRDGPass_Execute,*pFVar6,
                         L"FRDGPass Execute","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,
                         ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar7;
  bVar3 = false;
  bVar5 = false;
  local_d0.ComparisonIndex.Value = 0;
  local_d0.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar10 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar10 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_d8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_d8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d8.s.LowPart = FVar12.Value;
        local_d8.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_d8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_d8.s.LowPart = FVar12.Value;
      local_d8.s.HighPart = uVar10;
      local_d0 = FVar13;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar4 = true;
      FVar14.Value = local_d0.ComparisonIndex.Value;
      goto LAB_145fbedc6;
    }
  }
  bVar4 = false;
  FVar13 = local_d0;
LAB_145fbedc6:
  pFVar8 = FRDGParameterStruct::GetStaticUniformBuffers
                     ((FRDGParameterStruct *)((longlong)this + 0x30),&local_b0);
  FRHIComputeCommandList::SetStaticUniformBuffers(param_1,pFVar8);
  if (local_b0.UniformBuffers.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHIUniformBuffer_*>)0x0) {
    FMemory::Free((void *)local_b0.UniformBuffers.AllocatorInstance.SecondaryData);
  }
  if (local_b0.Slots.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_b0.Slots.AllocatorInstance.SecondaryData);
  }
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x180));
  pcVar2 = *(code **)((longlong)this + 0x180);
  plVar11 = (longlong *)((longlong)this + 400);
  if (*(longlong **)((longlong)this + 0x1a8) != (longlong *)0x0) {
    plVar11 = *(longlong **)((longlong)this + 0x1a8);
  }
  uVar9 = (**(code **)(*plVar11 + 8))();
  (*pcVar2)(uVar9,param_1);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_c0.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      local_c0.NameAndInfo.Index.Value = FVar14.Value;
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

