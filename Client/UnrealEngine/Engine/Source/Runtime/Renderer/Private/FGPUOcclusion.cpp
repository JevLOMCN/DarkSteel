// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// FGPUOcclusion @ 14551e330

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FGPUOcclusion * __thiscall
FGPUOcclusion::FGPUOcclusion(FGPUOcclusion *this,FVisibilityViewPacket *param_1)

{
  FSceneViewState *pFVar1;
  FViewInfo *pFVar2;
  FScene *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  EShaderPlatform EVar8;
  int iVar9;
  FGPUOcclusion *pFVar10;
  
  this->ViewPacket = param_1;
  (this->DynamicVertexBuffer).RHICmdList = (FRHICommandListBase *)0x0;
  (this->DynamicVertexBuffer).VertexBuffers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicVertexBuffer).VertexBuffers.ArrayNum = 0;
  (this->DynamicVertexBuffer).VertexBuffers.ArrayMax = 0;
  this->_padding_ = (longlong)&___7FGPUOcclusion__6B_;
  this->Scene = param_1->Scene;
  this->View = param_1->View;
  pFVar1 = param_1->ViewState;
  this->ViewState = pFVar1;
  (this->State).ReadBackLagTolerance = 0;
  (this->State).NumBufferedFrames = 0;
  (this->State).NumPrimitiveRangeTasks = 0;
  (this->State).bSubmitQueries = false;
  (this->State).bHZBOcclusion = false;
  (this->State).bUseRoundRobinOcclusion = false;
  (this->State).bAllowSubQueries = false;
  pFVar2 = this->View;
  if ((pFVar2->bDisableQuerySubmissions == 0) &&
     ((*(bool *)((longlong)&pFVar2->_padding_ + 7) == false ||
      (*(EStereoscopicPass *)&pFVar2->_padding_ != eSSP_SECONDARY)))) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  (this->State).bSubmitQueries = bVar5;
  (this->State).bSubmitQueries = (bool)(~(byte)(*(uint *)&pFVar1->field_0x5a0 >> 1) & bVar5);
  if (((pFVar1->bRoundRobinOcclusionEnabled != false) &&
      (*(bool *)((longlong)&pFVar2->_padding_ + 7) == false)) &&
     (*(bool *)&pFVar2->_padding_ == false)) {
    bVar5 = IStereoRendering::IsStereoEyeView((FSceneView *)pFVar2);
    if (bVar5) {
      pFVar2 = this->View;
      bVar5 = true;
      if (pFVar2->bIgnoreExistingQueries != 0) goto LAB_14551e43c;
      bVar7 = (this->State).bSubmitQueries;
      if ((this->ViewState->PrevFrameNumber & 1) == 0) {
        bVar6 = IStereoRendering::IsASecondaryView((FSceneView *)pFVar2);
        if (bVar6) goto LAB_14551e42c;
      }
      else {
        bVar6 = IStereoRendering::IsAPrimaryView((FSceneView *)pFVar2);
        if (bVar6) {
LAB_14551e42c:
          (this->State).bSubmitQueries = (bool)(bVar7 & 1);
          goto LAB_14551e43c;
        }
      }
      (this->State).bSubmitQueries = false;
      goto LAB_14551e43c;
    }
  }
  bVar5 = false;
LAB_14551e43c:
  EVar8 = FSceneView::GetShaderPlatform((FSceneView *)this->View);
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar8].bContainsValidPlatformInfo == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xc1,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FGPUOcclusion *)(*pcVar4)();
      return pFVar10;
    }
  }
  bVar7 = FGenericDataDrivenShaderPlatformInfo::Infos[EVar8].Language != LANGUAGE_OpenGL;
  pFVar2 = this->View;
  (this->State).bHZBOcclusion = bVar7;
  EVar8 = FSceneView::GetShaderPlatform((FSceneView *)pFVar2);
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar8].bContainsValidPlatformInfo == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0x2aa,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FGPUOcclusion *)(*pcVar4)();
      return pFVar10;
    }
  }
  bVar7 = (bool)((byte)(*(uint *)&FGenericDataDrivenShaderPlatformInfo::Infos[EVar8].field_0x34 >>
                       0xe) & bVar7);
  (this->State).bHZBOcclusion = bVar7;
  bVar6 = false;
  if (GHZBOcclusion != 0) {
    bVar6 = bVar7;
  }
  pFVar3 = this->Scene;
  (this->State).bHZBOcclusion = bVar6;
  bVar7 = GHZBOcclusion == 2;
  (this->State).bUseRoundRobinOcclusion = bVar5;
  (this->State).bHZBOcclusion = (bool)(bVar7 | bVar6);
  iVar9 = FOcclusionQueryHelpers::GetNumBufferedFrames(*(Type *)&pFVar3->field_0x8);
  (this->State).NumBufferedFrames = iVar9;
  (this->State).ReadBackLagTolerance = iVar9;
  if ((GAllowSubPrimitiveQueries == 0) || (this->View->bDisableQuerySubmissions != 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  (this->State).bAllowSubQueries = bVar5;
  if ((this->State).bUseRoundRobinOcclusion != false) {
    (this->State).ReadBackLagTolerance = iVar9 * 2;
  }
  return this;
}

// ~FGPUOcclusion @ 145520950

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FGPUOcclusion::~FGPUOcclusion(FGPUOcclusion *this)

{
  FScriptContainerElement *pFVar1;
  
  FGlobalDynamicVertexBuffer::Commit(&this->DynamicVertexBuffer);
  pFVar1 = (this->DynamicVertexBuffer).VertexBuffers.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Map @ 145548fa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FGPUOcclusion::Map(FGPUOcclusion *this,FRHICommandListImmediate *param_1)

{
  int *piVar1;
  bool bVar2;
  FSceneViewState *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FColor_u_0 FVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FGPUOcclusion::Map(FRHICommandListImmediate_&)_::_5_::FStat_STAT_OcclusionFeedback_ReadbackResults>
  FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *pFVar12;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FGPUOcclusion::Map(FRHICommandListImmediate_&)_::_9_::FStat_STAT_MapHZBResults>
  FVar13;
  FStatMessage *pFVar14;
  FColor_u_0 FVar15;
  FName FVar16;
  bool bVar17;
  FColor_u_0 local_res8;
  uint uStackX_c;
  FColor_u_0 local_res18 [2];
  FColor_u_0 local_res20;
  uint local_res24;
  FColor_u_0 local_a8;
  uint local_a4;
  FName local_a0;
  LARGE_INTEGER local_90;
  LARGE_INTEGER local_88;
  FStatMessage local_80;
  FStatMessage local_70;
  FName local_60;
  FName local_58;
  FName local_50;
  FName local_48 [2];
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"MapOcclusionResults");
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3212,"MapOcclusionResults",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
               ,0xc8c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3212);
  }
  if (((int)this->View->_padding_ == 1) &&
     ((int)(this->ViewState->OcclusionFeedback)._padding_ != -1)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      if (StatPtr_STAT_OcclusionFeedback_ReadbackResults ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FGPUOcclusion::Map(FRHICommandListImmediate_&)_::_5_::FStat_STAT_OcclusionFeedback_ReadbackResults>
           )0x0) {
        pFVar10 = ::FName::FName(&local_60,"STAT_OcclusionFeedback_ReadbackResults");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OcclusionFeedback_ReadbackResults,
                   *pFVar10,L"STAT_OcclusionFeedback_ReadbackResults","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
    FVar11 = StatPtr_STAT_OcclusionFeedback_ReadbackResults;
    if (StatPtr_STAT_OcclusionFeedback_ReadbackResults ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FGPUOcclusion::Map(FRHICommandListImmediate_&)_::_5_::FStat_STAT_OcclusionFeedback_ReadbackResults>
         )0x0) {
      pFVar10 = ::FName::FName(&local_58,"STAT_OcclusionFeedback_ReadbackResults");
      FVar11 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FGPUOcclusion::Map(FRHICommandListImmediate_&)_::_5_::FStat_STAT_OcclusionFeedback_ReadbackResults>
                )FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_OcclusionFeedback_ReadbackResults,*pFVar10,
                            L"STAT_OcclusionFeedback_ReadbackResults","STATGROUP_Quick",
                            "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar16 = *(FName *)FVar11;
    bVar2 = false;
    bVar6 = false;
    FVar8.Bits = 0;
    FVar15.Bits = (uint)FVar16.ComparisonIndex.Value;
    uVar9 = FVar16.Number;
    if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14554919e:
      bVar5 = false;
      FVar16.ComparisonIndex.Value = 0;
      FVar16.Number = 0;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_res8.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_res8._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
        bVar2 = false;
        bVar6 = true;
        if (-1 < CpuChannel->Enabled) {
          local_res20.Bits = FVar15.Bits;
          local_res24 = uVar9;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    ((FName *)&local_res20._s_0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
                     ,0xc91);
          bVar2 = true;
          bVar6 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_14554919e;
      local_res8.Bits = FVar15.Bits;
      uStackX_c = uVar9;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar5 = true;
      FVar8.Bits = FVar15.Bits;
    }
    FOcclusionFeedback::ReadbackResults(&this->ViewState->OcclusionFeedback,param_1);
    FOcclusionFeedback::AdvanceFrame
              (&this->ViewState->OcclusionFeedback,this->ViewState->OcclusionFrameCounter);
    if (bVar6) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar5) || (FVar16 == (FName)0x0)) || (FThreadStats::bPrimaryDisableForever != false)) ||
       (FThreadStats::TlsSlot == 0xffffffff)) goto LAB_1455494d7;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      pFVar12 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(pFVar12);
    }
    if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) goto LAB_1455494d7;
    local_80.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
    local_80.NameAndInfo.Index.Value = FVar8.Bits;
    QueryPerformanceCounter(&local_90);
    local_80.StatData.Pad[4] = '\0';
    local_80.StatData.Pad[5] = '\0';
    local_80.StatData.Pad[6] = '\0';
    local_80.StatData.Pad[7] = '\0';
    local_80.StatData.Pad[0] = local_90.s.LowPart._0_1_;
    local_80.StatData.Pad[1] = local_90.s.LowPart._1_1_;
    local_80.StatData.Pad[2] = local_90.s.LowPart._2_1_;
    local_80.StatData.Pad[3] = local_90.s.LowPart._3_1_;
    pFVar14 = &local_80;
  }
  else {
    if ((this->State).bHZBOcclusion == false) goto LAB_1455494d7;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      if (StatPtr_STAT_MapHZBResults ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FGPUOcclusion::Map(FRHICommandListImmediate_&)_::_9_::FStat_STAT_MapHZBResults>
           )0x0) {
        pFVar10 = ::FName::FName(&local_50,"STAT_MapHZBResults");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MapHZBResults,*pFVar10,
                   L"STAT_MapHZBResults","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,
                   ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS1);
    }
    FVar13 = StatPtr_STAT_MapHZBResults;
    if (StatPtr_STAT_MapHZBResults ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FGPUOcclusion::Map(FRHICommandListImmediate_&)_::_9_::FStat_STAT_MapHZBResults>
         )0x0) {
      pFVar10 = ::FName::FName(local_48,"STAT_MapHZBResults");
      FVar13 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FGPUOcclusion::Map(FRHICommandListImmediate_&)_::_9_::FStat_STAT_MapHZBResults>
                )FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MapHZBResults,*pFVar10,
                            L"STAT_MapHZBResults","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true
                            ,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar16 = *(FName *)FVar13;
    bVar2 = false;
    bVar6 = false;
    local_a0.ComparisonIndex.Value = 0;
    local_a0.Number = 0;
    FVar8.Bits = (uint)FVar16.ComparisonIndex.Value;
    uVar9 = FVar16.Number;
    if ((FVar8.Bits == 0) && (uVar9 == 0)) {
LAB_1455493b6:
      bVar5 = false;
      FVar16 = local_a0;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_res18[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
        bVar2 = false;
        bVar6 = true;
        if (-1 < CpuChannel->Enabled) {
          local_a8.Bits = FVar8.Bits;
          local_a4 = uVar9;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    ((FName *)&local_a8._s_0,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
                     ,0xc97);
          bVar2 = true;
          bVar6 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_1455493b6;
      local_res8.Bits = FVar8.Bits;
      uStackX_c = uVar9;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar5 = true;
    }
    bVar7 = FHZBOcclusionTester::IsValidFrame
                      (&this->ViewState->HZBOcclusionTests,this->ViewState->OcclusionFrameCounter);
    if ((bVar7) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ViewState.HZBOcclusionTests.IsValidFrame(ViewState.OcclusionFrameCounter)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
                           ,0xc98,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FHZBOcclusionTester::MapResults(&this->ViewState->HZBOcclusionTests,param_1);
    if (bVar6) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar5) || (FVar16 == (FName)0x0)) || (FThreadStats::bPrimaryDisableForever != false)) ||
       (FThreadStats::TlsSlot == 0xffffffff)) goto LAB_1455494d7;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      pFVar12 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(pFVar12);
    }
    if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) goto LAB_1455494d7;
    local_70.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
    local_70.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
    QueryPerformanceCounter(&local_88);
    local_70.StatData.Pad[4] = '\0';
    local_70.StatData.Pad[5] = '\0';
    local_70.StatData.Pad[6] = '\0';
    local_70.StatData.Pad[7] = '\0';
    local_70.StatData.Pad[0] = local_88.s.LowPart._0_1_;
    local_70.StatData.Pad[1] = local_88.s.LowPart._1_1_;
    local_70.StatData.Pad[2] = local_88.s.LowPart._2_1_;
    local_70.StatData.Pad[3] = local_88.s.LowPart._3_1_;
    pFVar14 = &local_70;
  }
  FThreadStats::AddStatMessage(this_00,pFVar14);
  piVar1 = &this_00->ScopeCount;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FThreadStats::Flush(this_00,false,false);
  }
  else if (FThreadStats::bIsRawStatsActive != false) {
    FThreadStats::FlushRawStats(this_00,false,false);
  }
LAB_1455494d7:
  pFVar3 = this->ViewState;
  bVar2 = (this->State).bUseRoundRobinOcclusion;
  uVar9 = FOcclusionQueryHelpers::GetNumBufferedFrames(*(Type *)&this->Scene->field_0x8);
  FFrameBasedOcclusionQueryPool::AdvanceFrame
            (&pFVar3->PrimitiveOcclusionQueryPool,this->ViewState->OcclusionFrameCounter,uVar9,bVar2
            );
  (this->ViewState->Occlusion).NumRequestedQueries = 0;
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// Unmap @ 1455543a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FGPUOcclusion::Unmap(FGPUOcclusion *this,FRHICommandListImmediate *param_1)

{
  FSceneViewState *pFVar1;
  FOcclusionFeedback *pFVar2;
  
  if ((this->State).bHZBOcclusion != false) {
    FHZBOcclusionTester::UnmapResults(&this->ViewState->HZBOcclusionTests,param_1);
  }
  if ((int)this->View->_padding_ == 1) {
    pFVar1 = this->ViewState;
    pFVar2 = &pFVar1->OcclusionFeedback;
    if (GOcclusionFeedback_Enable == 0) {
      if ((int)(pFVar1->OcclusionFeedback)._padding_ != -1) {
        (**(code **)(pFVar2->_padding_ + 0x20))(pFVar2);
      }
    }
    else if ((int)(pFVar1->OcclusionFeedback)._padding_ == -1) {
      (**(code **)(pFVar2->_padding_ + 0x18))(pFVar2,param_1);
    }
  }
  if (((this->State).bHZBOcclusion != false) && ((this->State).bSubmitQueries != false)) {
    FHZBOcclusionTester::SetValidFrameNumber
              (&this->ViewState->HZBOcclusionTests,this->ViewState->OcclusionFrameCounter);
  }
  return;
}

// WaitForLastOcclusionQuery @ 1455568c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FGPUOcclusion::WaitForLastOcclusionQuery(FGPUOcclusion *this)

{
  FSceneViewState *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  ForElementType<FRHIRenderQuery_*> FVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  
  pFVar1 = this->ViewState;
  uVar7 = (int)pFVar1->OcclusionFrameCounter % (this->State).NumBufferedFrames;
  lVar8 = (longlong)(int)uVar7;
  uVar9 = ~uVar7 >> 0x1f;
  uVar5 = 0;
  if ((int)uVar7 < (pFVar1->Occlusion).LastOcclusionQueryArray.ArrayNum) {
    uVar5 = uVar9;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FVar6 = (pFVar1->Occlusion).LastOcclusionQueryArray.AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<FRHIRenderQuery_*>)0x0) {
    FVar6 = (ForElementType<FRHIRenderQuery_*>)&(pFVar1->Occlusion).LastOcclusionQueryArray;
  }
  if (*(longlong *)((longlong)FVar6 + lVar8 * 8) != 0) {
    bVar3 = -1 < CpuChannel->Enabled;
    if (bVar3) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId3267,
                 "GPUBound_WaitingForGPUForOcclusionQueries_SeeGPUTrack",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
                 ,0xcc3);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3267);
    }
    pFVar1 = this->ViewState;
    uVar5 = 0;
    if ((int)uVar7 < (pFVar1->Occlusion).LastOcclusionQueryArray.ArrayNum) {
      uVar5 = uVar9;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FVar6 = (pFVar1->Occlusion).LastOcclusionQueryArray.AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<FRHIRenderQuery_*>)0x0) {
      FVar6 = (ForElementType<FRHIRenderQuery_*>)&(pFVar1->Occlusion).LastOcclusionQueryArray;
    }
    (**(code **)(GDynamicRHI->_padding_ + 0x288))
              (GDynamicRHI,*(undefined8 *)((longlong)FVar6 + lVar8 * 8),local_res8,1,0xffffffff);
    pFVar1 = this->ViewState;
    uVar5 = 0;
    if ((int)uVar7 < (pFVar1->Occlusion).LastOcclusionQueryArray.ArrayNum) {
      uVar5 = uVar9;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FVar6 = (pFVar1->Occlusion).LastOcclusionQueryArray.AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<FRHIRenderQuery_*>)0x0) {
      FVar6 = (ForElementType<FRHIRenderQuery_*>)&(pFVar1->Occlusion).LastOcclusionQueryArray;
    }
    *(undefined8 *)((longlong)FVar6 + lVar8 * 8) = 0;
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

