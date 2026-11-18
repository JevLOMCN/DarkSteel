// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 71

// RenderPrePass @ 14482d9e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FMobileSceneRenderer::RenderPrePass
          (FMobileSceneRenderer *this,FRHICommandList *param_1,FViewInfo *param_2,
          FInstanceCullingDrawParams *param_3)

{
  int *piVar1;
  FParallelMeshDrawCommandPass *this_00;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_DepthDrawTime> FVar10;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FNameEntryId FVar11;
  FName FVar12;
  FNameEntryId FVar13;
  bool bVar14;
  LARGE_INTEGER local_res18;
  FInstanceCullingDrawParams *local_res20;
  FStatMessage local_78;
  FName local_68;
  FRHIBreadcrumbScope local_58;
  TGPUStatWithDrawcallCategory<TRHIGPUStatNameProvider_Prepass> *local_48;
  wchar_t *pwStack_40;
  
  this_00 = (param_2->ParallelMeshDrawCommandPasses).Elements[0];
  if (this_00 == (FParallelMeshDrawCommandPass *)0x0) {
    return;
  }
  local_res20 = param_3;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,"FMobileSceneRenderer_RenderPrePass");
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId692,"FMobileSceneRenderer_RenderPrePass",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DepthRendering.cpp"
               ,0x2b4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId692);
  }
  FVar13.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    local_58.RHICmdList = (FRHIComputeCommandList *)0x150dd85b0;
    local_48 = &GPUStat_Prepass;
    local_58.Node._0_4_ = 0x2b5;
    pwStack_40 = L"MobileRenderPrePass";
    ::Desc._padding_._0_4_ = 0x50dd85b0;
    ::Desc._padding_._4_4_ = 1;
    ::Desc._padding_._0_4_ = 0x2b5;
    ::Desc._padding_._4_4_ = local_58.Node._4_4_;
    ::Desc._padding_._0_4_ = 0x54bc3fa0;
    ::Desc._padding_._4_4_ = 1;
    ::Desc._padding_._0_4_ = 0x50dd8cb8;
    ::Desc._padding_._4_4_ = 1;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
    ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    ::Desc.TraceGpuSpecId = 0;
    ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(``FMobileSceneRenderer::RenderPrePass'::__l11::<lambda_1>::operator()<>'::__l2::
           _dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar7 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
  pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
  pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
  pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
  (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  pFVar8->Data = (FRHIBreadcrumbData *)&::Desc;
  pFVar8->Allocator = pFVar7;
  pFVar8->TraceCpuSpecId = 0;
  pFVar8->TraceCpuMetadataId = 0;
  LOCK();
  UNLOCK();
  uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar8->ID = uVar5;
  pFVar8->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar8[1]._padding_ = (longlong)&::Desc;
  if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
     (bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar4)) {
    EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      aVar6 = (atomic<unsigned_int>)
              FCpuProfilerTrace::OutputEventType
                        ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                         (char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                         (uint)::Desc._padding_);
      LOCK();
      ::Desc.TraceCpuSpecId = aVar6;
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  }
  pFVar8->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_58,(FRHIComputeCommandList *)param_1,pFVar8);
  local_48 = (TGPUStatWithDrawcallCategory<TRHIGPUStatNameProvider_Prepass> *)
             CONCAT71(local_48._1_7_,1);
  FVar10 = StatPtr_STAT_DepthDrawTime;
  if (StatPtr_STAT_DepthDrawTime == (FThreadSafeStaticStat<FStat_STAT_DepthDrawTime>)0x0) {
    pFVar9 = ::FName::FName((FName *)&local_78,"STAT_DepthDrawTime");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_DepthDrawTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DepthDrawTime,*pFVar9,
                        L"Depth drawing","STATGROUP_SceneRendering","STATCAT_Advanced",
                        L"Scene Rendering",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar10;
  bVar4 = false;
  bVar3 = false;
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar5 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar5 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18.s,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar4 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.s.LowPart = FVar11.Value;
        local_res18.s.HighPart = uVar5;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18.s,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DepthRendering.cpp"
                   ,0x2b8);
        bVar4 = true;
        bVar3 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar11.Value;
      local_res18.s.HighPart = uVar5;
      local_68 = FVar12;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar2 = true;
      FVar13.Value = local_68.ComparisonIndex.Value;
      goto LAB_14482dcdc;
    }
  }
  bVar2 = false;
  FVar12 = local_68;
LAB_14482dcdc:
  if (__CsvProfilerStat697 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("RenderPrePass");
    __CsvProfilerStat697 = true;
  }
  FCsvProfiler::BeginExclusiveStat("RenderPrePass","CSV_RenderPrePass");
  FSceneRenderer::SetStereoViewport(param_1,param_2,__real_3f800000);
  FParallelMeshDrawCommandPass::Draw(this_00,param_1,local_res20);
  FCsvProfiler::EndExclusiveStat("RenderPrePass");
  if (bVar3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar2) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_78.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      local_78.NameAndInfo.Index.Value = FVar13.Value;
      QueryPerformanceCounter(&local_res18);
      local_78.StatData.Pad[4] = '\0';
      local_78.StatData.Pad[5] = '\0';
      local_78.StatData.Pad[6] = '\0';
      local_78.StatData.Pad[7] = '\0';
      local_78.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_78.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_78.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_78.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_78);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_58);
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// ShouldRenderPrePass @ 144833fc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

bool __thiscall FMobileSceneRenderer::ShouldRenderPrePass(FMobileSceneRenderer *this)

{
  int iVar1;
  
  iVar1 = *(int *)(*(longlong *)&this->field_0x8 + 0x2b18);
  if ((iVar1 != 4) && ((iVar1 - 3U & 0xfffffffd) != 0)) {
    return false;
  }
  return true;
}

// FMobileSceneRenderer @ 144f6b500

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FMobileSceneRenderer * __thiscall
FMobileSceneRenderer::FMobileSceneRenderer
          (FMobileSceneRenderer *this,FSceneViewFamily *param_1,FHitProxyConsumer *param_2)

{
  int iVar1;
  bool bVar2;
  Type TVar3;
  ERendererOutput EVar4;
  uint uVar5;
  Type TVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  
  FSceneRenderer::FSceneRenderer((FSceneRenderer *)this,param_1,param_2);
  *(undefined ***)this = &___7FMobileSceneRenderer__6B_;
  this->bGammaSpace = FReadOnlyCVARCache::bMobileHDR == false;
  if ((FReadOnlyCVARCache::bMobileDeferredShadingValue == false) ||
     (FReadOnlyCVARCache::bMobileHDR == false)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  this->bDeferredShading = bVar2;
  bVar2 = IsUsingDBuffers((FStaticShaderPlatform)*(EShaderPlatform *)&this->field_0xadc);
  this->bRequiresDBufferDecals = bVar2;
  bVar2 = UseVirtualTexturing((FStaticShaderPlatform)*(EShaderPlatform *)&this->field_0xadc);
  if (bVar2) {
    EVar4 = FSceneRenderer::GetRendererOutput((FSceneRenderer *)this);
    if (EVar4 == DepthPrepassOnly) goto LAB_144f6b586;
    bVar2 = true;
  }
  else {
LAB_144f6b586:
    bVar2 = false;
  }
  this->bUseVirtualTexturing = bVar2;
  if ((this->bDeferredShading == false) &&
     ((FReadOnlyCVARCache::MobileForwardLocalLightsValue < 1 ||
      (FReadOnlyCVARCache::bMobileForwardParticleLights == false)))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  this->bSupportsSimpleLights = bVar2;
  this->CachedView = (FViewInfo *)0x0;
  this->bRenderToSceneColor = false;
  this->bRequiresMultiPass = false;
  this->bKeepDepthContent = false;
  this->bModulatedShadowsInUse = false;
  this->bShouldRenderCustomDepth = false;
  this->bRequiresShadowProjections = false;
  this->bEnableDistanceFieldAO = false;
  iVar1 = *(int *)(*(longlong *)&this->field_0x8 + 0x2b18);
  if ((iVar1 == 3) || (iVar1 == 5)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  this->bIsFullDepthPrepassEnabled = bVar2;
  this->bIsMaskedOnlyDepthPrepassEnabled = *(int *)(*(longlong *)&this->field_0x8 + 0x2b18) == 4;
  this->bEnableClusteredLocalLights = 0 < FReadOnlyCVARCache::MobileForwardLocalLightsValue;
  bVar2 = MobileForwardEnableClusteredReflections
                    ((FStaticShaderPlatform)*(EShaderPlatform *)&this->field_0xadc);
  this->bEnableClusteredReflections = bVar2;
  TVar6 = TPT_AllTranslucency;
  if (this->field_0x268 != '\0') {
    TVar6 = TPT_TranslucencyStandard;
  }
  this->StandardTranslucencyPass = TVar6;
  TVar3 = TranslucencyPassToMeshPass(TVar6);
  this->StandardTranslucencyMeshPass = TVar3;
  iVar1 = *(int *)&this->field_0x18;
  lVar8 = *(longlong *)&this->field_0x10;
  lVar7 = (longlong)iVar1 * 0x2970 + lVar8;
  while( true ) {
    if (*(int *)&this->field_0x18 != iVar1) {
      `TCheckedPointerIterator<FViewInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (lVar8 == lVar7) break;
    if (*(char *)(lVar8 + 0x11e8) != '\0') {
      *(uint *)(lVar8 + 0x24b8) = *(uint *)(lVar8 + 0x24b8) | 0x30;
    }
    lVar8 = lVar8 + 0x2970;
  }
  uVar5 = GetDefaultMSAACount((FGenericStaticFeatureLevel)0x1,8);
  this->NumMSAASamples = uVar5;
  bVar2 = IsMobileTonemapSubpassEnabled
                    (*(EShaderPlatform *)&this->field_0xadc,(bool)this->field_0x18f);
  if ((bVar2) && (this->field_0x17b != '\0')) {
    EVar4 = FSceneRenderer::GetRendererOutput((FSceneRenderer *)this);
    if (EVar4 != DepthPrepassOnly) {
      bVar2 = true;
      goto LAB_144f6b6d4;
    }
  }
  bVar2 = false;
LAB_144f6b6d4:
  this->bTonemapSubpass = bVar2;
  bVar2 = IsMobileTonemapSubpassEnabledInline
                    (*(EShaderPlatform *)&this->field_0xadc,(bool)this->field_0x18f,
                     this->NumMSAASamples);
  if ((bVar2) && (this->bTonemapSubpass != false)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  this->bTonemapSubpassInline = bVar2;
  bVar2 = MobileRequiresSceneDepthAux((FStaticShaderPlatform)*(EShaderPlatform *)&this->field_0xadc)
  ;
  if ((bVar2) && (this->bTonemapSubpass == false)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  this->bRequiresSceneDepthAux = bVar2;
  FSceneExtensionsRenderers::Begin
            ((FSceneExtensionsRenderers *)&this->field_0x60,(FSceneRendererBase *)this,
             (FEngineShowFlags *)&this->field_0x100,true);
  return this;
}

// operator() @ 144f6df20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
`FMobileSceneRenderer::RenderDeferredMultiPass'::__l103::<lambda_10>::operator()
          (void *this,FRHICommandList *param_1)

{
  Type TVar1;
  int iVar2;
  Type TVar3;
  longlong lVar4;
  longlong lVar5;
  FViewInfo *pFVar6;
  code *pcVar7;
  bool bVar8;
  undefined4 uStack_2c;
  TArrayView<FViewInfo,int> local_28;
  
  lVar4 = *(longlong *)this;
  lVar5 = *(longlong *)((longlong)this + 0x10);
  pFVar6 = *(FViewInfo **)(lVar4 + 0x10);
  iVar2 = *(int *)(lVar4 + 0x18);
  TVar1 = *(Type *)(lVar4 + 0xf98);
  TVar3 = *(Type *)(lVar4 + 0xf94);
  if (iVar2 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  local_28._12_4_ = uStack_2c;
  local_28.ArrayNum = iVar2;
  local_28.DataPtr = pFVar6;
  FMobileSceneRenderer::RenderTranslucency
            (param_1,*(FViewInfo **)((longlong)this + 8),&local_28,TVar3,TVar1,
             (FInstanceCullingDrawParams *)(lVar5 + 0x20));
  return;
}

// operator() @ 144f72b90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
`FMobileSceneRenderer::RenderForwardMultiPass'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandList *param_1)

{
  FViewInfo *pFVar1;
  
  pFVar1 = *(FViewInfo **)((longlong)this + 0x18);
  if ((*(FMobileSceneRenderer **)this)->bIsMaskedOnlyDepthPrepassEnabled != false) {
    FMobileSceneRenderer::RenderPrePass
              (*(FMobileSceneRenderer **)this,param_1,pFVar1,
               *(FInstanceCullingDrawParams **)((longlong)this + 0x10));
  }
  FMobileSceneRenderer::RenderMobileBasePass
            (*(FMobileSceneRenderer **)this,param_1,pFVar1,
             (FInstanceCullingDrawParams *)(*(longlong *)((longlong)this + 8) + 0x20),
             (FInstanceCullingDrawParams *)(*(longlong *)((longlong)this + 0x10) + 0x60));
  FMobileSceneRenderer::RenderMobileDebugView
            (*(FMobileSceneRenderer **)this,param_1,pFVar1,
             (FInstanceCullingDrawParams *)(*(longlong *)((longlong)this + 0x10) + 0xc0));
  FMobileSceneRenderer::PostRenderBasePass(*(FMobileSceneRenderer **)this,param_1,pFVar1);
  return;
}

// operator() @ 144f72c30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
`FMobileSceneRenderer::RenderForwardSinglePass'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandList *param_1)

{
  Type TVar1;
  int iVar2;
  Type TVar3;
  FViewInfo *pFVar4;
  longlong lVar5;
  longlong lVar6;
  FViewInfo *pFVar7;
  code *pcVar8;
  bool bVar9;
  undefined4 uStack_2c;
  TArrayView<FViewInfo,int> local_28;
  
  pFVar4 = *(FViewInfo **)((longlong)this + 0x18);
  if ((*(FMobileSceneRenderer **)this)->bIsMaskedOnlyDepthPrepassEnabled != false) {
    FMobileSceneRenderer::RenderPrePass
              (*(FMobileSceneRenderer **)this,param_1,pFVar4,
               *(FInstanceCullingDrawParams **)((longlong)this + 0x10));
  }
  FMobileSceneRenderer::RenderMobileBasePass
            (*(FMobileSceneRenderer **)this,param_1,pFVar4,
             (FInstanceCullingDrawParams *)(*(longlong *)((longlong)this + 8) + 0x20),
             (FInstanceCullingDrawParams *)(*(longlong *)((longlong)this + 0x10) + 0x60));
  FMobileSceneRenderer::RenderMobileDebugView
            (*(FMobileSceneRenderer **)this,param_1,pFVar4,
             (FInstanceCullingDrawParams *)(*(longlong *)((longlong)this + 0x10) + 0xc0));
  FMobileSceneRenderer::PostRenderBasePass(*(FMobileSceneRenderer **)this,param_1,pFVar4);
  FRHICommandList::NextSubpass(param_1);
  FMobileSceneRenderer::RenderDecals
            (*(FMobileSceneRenderer **)this,param_1,pFVar4,
             (FInstanceCullingDrawParams *)(*(longlong *)((longlong)this + 0x10) + 0x120));
  FMobileSceneRenderer::RenderModulatedShadowProjections
            (*(FMobileSceneRenderer **)this,param_1,*(int *)((longlong)this + 0x20),pFVar4);
  if (GMaxRHIShaderPlatform != SP_METAL_SIM) {
    FMobileSceneRenderer::RenderFog(*(FMobileSceneRenderer **)this,param_1,pFVar4);
  }
  lVar5 = *(longlong *)this;
  lVar6 = *(longlong *)((longlong)this + 0x10);
  pFVar7 = *(FViewInfo **)(lVar5 + 0x10);
  iVar2 = *(int *)(lVar5 + 0x18);
  TVar1 = *(Type *)(lVar5 + 0xf98);
  TVar3 = *(Type *)(lVar5 + 0xf94);
  if (iVar2 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  local_28._12_4_ = uStack_2c;
  local_28.ArrayNum = iVar2;
  local_28.DataPtr = pFVar7;
  FMobileSceneRenderer::RenderTranslucency
            (param_1,pFVar4,&local_28,TVar3,TVar1,(FInstanceCullingDrawParams *)(lVar6 + 0x180));
  if ((FReadOnlyCVARCache::bMobileHDR == false) || (*(char *)(*(longlong *)this + 0xf7d) != '\0')) {
    bVar9 = IsDebugPrimitivePassEnabled(pFVar4);
    if (bVar9) {
      FMobileSceneRenderer::RenderMobileDebugPrimitives
                (*(FMobileSceneRenderer **)this,param_1,pFVar4);
    }
  }
  if (*(char *)((longlong)this + 0x28) != '\0') {
    if (*(char *)(*(longlong *)this + 0xf91) != '\0') {
      bVar9 = IsOpenGLPlatform((FStaticShaderPlatform)
                               *(EShaderPlatform *)(*(longlong *)this + 0xadc));
      if ((bVar9) && ((param_1->field_0x29b & 0x20) != 0)) {
        FRHICommandListImmediate::ImmediateFlush
                  ((FRHICommandListImmediate *)param_1,DispatchToRHIThread,None);
      }
    }
    FMobileSceneRenderer::RenderOcclusion
              (*(FMobileSceneRenderer **)this,param_1,pFVar4,
               (FViewOcclusionQueries *)((longlong)this + 0x38));
  }
  FMobileSceneRenderer::PreTonemapMSAA
            (*(FMobileSceneRenderer **)this,param_1,
             *(FMinimalSceneTextures **)((longlong)this + 0x30));
  if (*(char *)(*(longlong *)this + 0xf7e) != '\0') {
    FRHICommandList::NextSubpass(param_1);
    RenderMobileCustomResolve
              (param_1,pFVar4,*(int *)(*(longlong *)this + 0xf80),
               *(FSceneTextures **)((longlong)this + 0x30));
  }
  return;
}

// operator() @ 144f72e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FMobileSceneRenderer::UpdateDirectionalLightUniformBuffers'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStackY_1c8 [32];
  FMobileDirectionalLightShaderParameters local_198;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  lVar3 = 0x70;
  uVar1 = *(uint *)(*(longlong *)this + 0x108);
  uVar2 = 0;
  do {
    FMobileDirectionalLightShaderParameters::FMobileDirectionalLightShaderParameters(&local_198);
    SetupMobileDirectionalLightUniformParameters
              (*(FScene **)(*(longlong *)this + 8),*(FViewInfo **)((longlong)this + 8),
               (TArray<FVisibleLightInfo,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                *)(*(longlong *)this + 0x630),uVar2,(bool)((byte)(uVar1 >> 0x17) & 1),&local_198);
    FRHICommandListBase::UpdateUniformBuffer
              ((FRHICommandListBase *)param_1,
               *(FRHIUniformBuffer **)(*(longlong *)(*(longlong *)this + 8) + lVar3),&local_198);
    uVar2 = uVar2 + 1;
    lVar3 = lVar3 + 8;
  } while (uVar2 < 3);
  return;
}

// operator() @ 144f73960

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
`FMobileSceneRenderer::RenderFullDepthPrepass'::__l9::<lambda_1>::operator()
          (void *this,FRHICommandList *param_1)

{
  FMobileSceneRenderer::RenderPrePass
            (*(FMobileSceneRenderer **)this,param_1,*(FViewInfo **)((longlong)this + 0x10),
             (FInstanceCullingDrawParams *)(*(longlong *)((longlong)this + 8) + 0x20));
  if (*(FInstanceCullingDrawParams **)((longlong)this + 0x18) != (FInstanceCullingDrawParams *)0x0)
  {
    FMobileSceneRenderer::RenderVelocityPass
              (*(FMobileSceneRenderer **)this,param_1,*(FViewInfo **)((longlong)this + 0x10),
               *(FInstanceCullingDrawParams **)((longlong)this + 0x18));
  }
  return;
}

// operator() @ 144f73d00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FMobileSceneRenderer::RenderCustomRenderPassBasePass'::__l14::<lambda_1>::operator()
          (void *this,FRHICommandList *param_1)

{
  code *pcVar1;
  bool bVar2;
  IRHICommandContext *pIVar3;
  undefined8 *puVar4;
  int iVar5;
  
  FMobileSceneRenderer::RenderMobileBasePass
            (*(FMobileSceneRenderer **)this,param_1,*(FViewInfo **)((longlong)this + 0x10),
             (FInstanceCullingDrawParams *)(*(longlong *)((longlong)this + 8) + 0x20),
             (FInstanceCullingDrawParams *)(*(longlong *)((longlong)this + 8) + 0x200));
  iVar5 = 0;
  if (0 < *(int *)((longlong)this + 0x20)) {
    do {
      if (((param_1->field_0x29b & 2) == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInsideRenderPass()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                             ,0x10e2,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
        puVar4 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x10,8);
        *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
        **(undefined8 **)&param_1->field_0x30 = puVar4;
        *(undefined8 **)&param_1->field_0x30 = puVar4 + 1;
        puVar4[1] = 0;
        *puVar4 = &___7FRHICommandNextSubpass__6B_;
      }
      else {
        pIVar3 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
        (**(code **)(pIVar3->_padding_ + 600))(pIVar3);
      }
      param_1->field_0x299 = param_1->field_0x299 + '\x01';
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)((longlong)this + 0x20));
  }
  return;
}

// operator() @ 144f73e10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall
`FMobileSceneRenderer::RenderStereoMotionVectors'::__l14::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  int *piVar1;
  char cVar2;
  FRHIGPUMask FVar3;
  FRDGResource *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  atomic<unsigned_int> aVar10;
  int iVar11;
  FRHIBreadcrumbAllocator *pFVar12;
  FRHIBreadcrumbNode *pFVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_BasePassDrawTime> FVar15;
  longlong lVar16;
  IRHICommandContext *pIVar17;
  undefined8 *puVar18;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  LARGE_INTEGER LVar19;
  FNameEntryId FVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  LARGE_INTEGER local_res10;
  FName local_res18 [2];
  char *in_stack_ffffffffffffff28;
  wchar_t *in_stack_ffffffffffffff30;
  FStatMessage local_88;
  FRHIBreadcrumbScope local_78;
  undefined8 local_68;
  wchar_t *pwStack_60;
  
  if (!__CsvProfilerStat1697) {
    FCsvProfilerTrace::OutputInlineStatExclusive("RenderStereoMotionVectors");
    __CsvProfilerStat1697 = true;
  }
  FCsvProfiler::BeginExclusiveStat("RenderStereoMotionVectors","CSV_RenderStereoMotionVectors");
  uVar21 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_78.RHICmdList = (FRHIComputeCommandList *)0x150eecec0;
      pwStack_60 = L"RenderStereoMotionVectors";
      local_78.Node._0_4_ = 0x6a2;
      local_68 = 0;
      ::Desc._padding_._0_4_ = 0x50eecec0;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_._0_4_ = 0x6a2;
      ::Desc._padding_._4_4_ = local_78.Node._4_4_;
      ::Desc._padding_._0_4_ = 0;
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_._0_4_ = 0x50eed2f0;
      ::Desc._padding_._4_4_ = 1;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FMobileSceneRenderer::RenderStereoMotionVectors'::__l14::Desc::operator()'::__l10::
             <lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pFVar12 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
  pFVar13 = FMemStackBase::Alloc(&pFVar12->Inner,0x50,8);
  pFVar13->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar13->Parent = FRHIBreadcrumbNode::Sentinel;
  pFVar13->ListLink = (FRHIBreadcrumbNode *)0x0;
  (pFVar13->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (pFVar13->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  pFVar13->Data = (FRHIBreadcrumbData *)&::Desc;
  pFVar13->Allocator = pFVar12;
  pFVar13->TraceCpuSpecId = 0;
  pFVar13->TraceCpuMetadataId = 0;
  LOCK();
  UNLOCK();
  uVar9 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar13->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar13->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar13->ID = uVar9;
  pFVar13->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar13[1]._padding_ = (longlong)&::Desc;
  if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
    bVar8 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
    if (bVar8) {
      EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
      if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
        aVar10 = (atomic<unsigned_int>)
                 FCpuProfilerTrace::OutputEventType
                           ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_)
                            ,(char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                            (uint)::Desc._padding_);
        LOCK();
        ::Desc.TraceCpuSpecId = aVar10;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    }
  }
  pFVar13->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_78,(FRHIComputeCommandList *)param_1,pFVar13);
  local_68 = CONCAT71(local_68._1_7_,1);
  FVar15 = StatPtr_STAT_BasePassDrawTime;
  if (StatPtr_STAT_BasePassDrawTime == (FThreadSafeStaticStat<FStat_STAT_BasePassDrawTime>)0x0) {
    pFVar14 = ::FName::FName(local_res18,"STAT_BasePassDrawTime");
    in_stack_ffffffffffffff30 = L"Scene Rendering";
    in_stack_ffffffffffffff28 = "STATCAT_Advanced";
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_BasePassDrawTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BasePassDrawTime,*pFVar14,
                        L"Base pass drawing","STATGROUP_SceneRendering","STATCAT_Advanced",
                        L"Scene Rendering",true,true,ST_int64,true,false,MCR_Invalid);
  }
  LVar19 = *(LARGE_INTEGER *)FVar15;
  bVar8 = false;
  bVar7 = false;
  if ((LVar19.s.LowPart != 0) || (LVar19.s.HighPart != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.QuadPart = local_res10.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10 = LVar19;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MobileShadingRenderer.cpp"
                   ,0x6a3);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10 = LVar19;
      FThreadStats::AddMessage((FName)LVar19.s,CycleScopeStart);
      bVar6 = true;
      FVar20.Value = LVar19.s.LowPart;
      goto LAB_144f740da;
    }
  }
  bVar6 = false;
  LVar19._0_4_ = 0;
  LVar19._4_4_ = 0;
  FVar20.Value = uVar21;
LAB_144f740da:
  FVar3.GPUMask = *(uint *)&param_1->field_0x29c;
  FRHIComputeCommandList::SetGPUMask
            ((FRHIComputeCommandList *)param_1,
             (FRHIGPUMask)*(uint *)(*(longlong *)((longlong)this + 0x18) + 0xde0));
  local_res10 = (LARGE_INTEGER)
                ((LARGE_INTEGER *)
                (*(longlong *)((longlong)this + 0x18) + 0x2088 +
                (ulonglong)*(byte *)((longlong)this + 0x10) * 8))->QuadPart;
  if ((FParallelMeshDrawCommandPass *)local_res10.QuadPart != (FParallelMeshDrawCommandPass *)0x0) {
    pFVar4 = *(FRDGResource **)(*(longlong *)((longlong)this + 0x20) + 0x2b0);
    FRDGResource::ValidateRHIAccess(pFVar4);
    lVar16 = (**(code **)(pFVar4->ResourceRHI->_padding_ + 0x20))();
    cVar2 = *(char *)(lVar16 + 0x32);
    if ((((cVar2 == '\0') || (cVar2 == '\x01')) || (cVar2 == '\x02')) ||
       ((cVar2 == '\x03' || (cVar2 == '\x04')))) {
      uVar21 = *(uint *)(lVar16 + 0x28);
    }
    pFVar4 = *(FRDGResource **)(*(longlong *)((longlong)this + 0x20) + 0x2b0);
    FRDGResource::ValidateRHIAccess(pFVar4);
    lVar16 = (**(code **)(pFVar4->ResourceRHI->_padding_ + 0x20))();
    cVar2 = *(char *)(lVar16 + 0x32);
    if (((cVar2 == '\0') || (cVar2 == '\x01')) ||
       ((cVar2 == '\x02' || ((cVar2 == '\x03' || (cVar2 == '\x04')))))) {
      iVar11 = *(int *)(lVar16 + 0x24);
    }
    else {
      iVar11 = 0;
    }
    fVar22 = (float)(int)uVar21;
    fVar23 = (float)iVar11;
    if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
      puVar18 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x38,8);
      *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
      **(undefined8 **)&param_1->field_0x30 = puVar18;
      *(undefined8 **)&param_1->field_0x30 = puVar18 + 1;
      puVar18[1] = 0;
      *puVar18 = &___7FRHICommandSetStereoViewport__6B_;
      *(float *)((longlong)puVar18 + 0x24) = fVar23;
      *(float *)(puVar18 + 5) = fVar23;
      *(float *)((longlong)puVar18 + 0x2c) = fVar22;
      *(float *)(puVar18 + 6) = fVar22;
      puVar18[2] = 0;
      puVar18[3] = 0;
      *(undefined4 *)(puVar18 + 4) = 0;
      *(undefined4 *)((longlong)puVar18 + 0x34) = 0x3f800000;
    }
    else {
      pIVar17 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
      pcVar5 = *(code **)(pIVar17->_padding_ + 0x1a8);
      (*pcVar5)(pIVar17,pcVar5,0,0,(ulonglong)in_stack_ffffffffffffff28 & 0xffffffff00000000,
                (ulonglong)in_stack_ffffffffffffff30 & 0xffffffff00000000,fVar23,fVar23,fVar22,
                fVar22,__real_3f800000);
    }
    FParallelMeshDrawCommandPass::Draw
              ((FParallelMeshDrawCommandPass *)local_res10,(FRHICommandList *)param_1,
               (FInstanceCullingDrawParams *)(*(longlong *)((longlong)this + 8) + 0x30));
  }
  FRHIComputeCommandList::SetGPUMask((FRHIComputeCommandList *)param_1,FVar3);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && ((FName)LVar19.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_88.NameAndInfo.Number = LVar19.s.HighPart & 0xffff6fffU | 0x6000;
      local_88.NameAndInfo.Index.Value = FVar20.Value;
      QueryPerformanceCounter(&local_res10);
      local_88.StatData.Pad = (uchar  [8])(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,&local_88);
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
  FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_78);
  FCsvProfiler::EndExclusiveStat("RenderStereoMotionVectors");
  return;
}

// operator() @ 144f75380

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
`FMobileSceneRenderer::RenderForwardMultiPass'::__l2::<lambda_2>::operator()
          (void *this,FRHICommandList *param_1)

{
  Type TVar1;
  int iVar2;
  Type TVar3;
  longlong lVar4;
  FViewInfo *pFVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  undefined4 uStack_2c;
  TArrayView<FViewInfo,int> local_28;
  
  lVar4 = *(longlong *)((longlong)this + 8);
  pFVar5 = *(FViewInfo **)((longlong)this + 0x10);
  FMobileSceneRenderer::RenderDecals
            (*(FMobileSceneRenderer **)this,param_1,pFVar5,
             (FInstanceCullingDrawParams *)(lVar4 + 0x200));
  FMobileSceneRenderer::RenderModulatedShadowProjections
            (*(FMobileSceneRenderer **)this,param_1,*(int *)((longlong)this + 0x18),pFVar5);
  FMobileSceneRenderer::RenderFog(*(FMobileSceneRenderer **)this,param_1,pFVar5);
  lVar6 = *(longlong *)this;
  local_28.DataPtr = *(FViewInfo **)(lVar6 + 0x10);
  iVar2 = *(int *)(lVar6 + 0x18);
  TVar1 = *(Type *)(lVar6 + 0xf98);
  TVar3 = *(Type *)(lVar6 + 0xf94);
  if (iVar2 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  local_28._12_4_ = uStack_2c;
  local_28.ArrayNum = iVar2;
  FMobileSceneRenderer::RenderTranslucency
            (param_1,pFVar5,&local_28,TVar3,TVar1,(FInstanceCullingDrawParams *)(lVar4 + 0x20));
  if (*(char *)((longlong)this + 0x20) != '\0') {
    FMobileSceneRenderer::RenderOcclusion
              (*(FMobileSceneRenderer **)this,param_1,pFVar5,
               (FViewOcclusionQueries *)((longlong)this + 0x30));
  }
  FMobileSceneRenderer::PreTonemapMSAA
            (*(FMobileSceneRenderer **)this,param_1,
             *(FMinimalSceneTextures **)((longlong)this + 0x28));
  return;
}

// operator() @ 144f75d60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
`FMobileSceneRenderer::RenderDeferredMultiPass'::__l9::<lambda_2>::operator()
          (void *this,FRHICommandList *param_1)

{
  longlong lVar1;
  FViewInfo *pFVar2;
  
  lVar1 = *(longlong *)((longlong)this + 8);
  pFVar2 = *(FViewInfo **)((longlong)this + 0x10);
  if ((*(FMobileSceneRenderer **)this)->bIsMaskedOnlyDepthPrepassEnabled != false) {
    FMobileSceneRenderer::RenderPrePass
              (*(FMobileSceneRenderer **)this,param_1,pFVar2,
               (FInstanceCullingDrawParams *)(lVar1 + 0x200));
  }
  FMobileSceneRenderer::RenderMobileBasePass
            (*(FMobileSceneRenderer **)this,param_1,pFVar2,
             (FInstanceCullingDrawParams *)(lVar1 + 0x20),
             (FInstanceCullingDrawParams *)(*(longlong *)((longlong)this + 8) + 0x260));
  FMobileSceneRenderer::RenderMobileDebugView
            (*(FMobileSceneRenderer **)this,param_1,pFVar2,
             (FInstanceCullingDrawParams *)(*(longlong *)((longlong)this + 8) + 0x2c0));
  FMobileSceneRenderer::PostRenderBasePass(*(FMobileSceneRenderer **)this,param_1,pFVar2);
  if (*(char *)((longlong)this + 0x28) != '\0') {
    FMobileSceneRenderer::RenderOcclusion
              (*(FMobileSceneRenderer **)this,param_1,pFVar2,
               (FViewOcclusionQueries *)((longlong)this + 0x30));
  }
  if ((*(FMobileSceneRenderer **)this)->bIsFullDepthPrepassEnabled != false) {
    FMobileSceneRenderer::RenderDecals
              (*(FMobileSceneRenderer **)this,param_1,pFVar2,
               (FInstanceCullingDrawParams *)(*(longlong *)((longlong)this + 8) + 800));
  }
  return;
}

// operator() @ 144f75e40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
`FMobileSceneRenderer::RenderDeferredSinglePass'::__l9::<lambda_2>::operator()
          (void *this,FRHICommandList *param_1)

{
  Type TVar1;
  int iVar2;
  Type TVar3;
  FViewInfo *pFVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  undefined4 uStack_2c;
  TArrayView<FViewInfo,int> local_28;
  
  pFVar4 = *(FViewInfo **)((longlong)this + 0x10);
  lVar5 = *(longlong *)((longlong)this + 8);
  if ((*(FMobileSceneRenderer **)this)->bIsMaskedOnlyDepthPrepassEnabled != false) {
    FMobileSceneRenderer::RenderPrePass
              (*(FMobileSceneRenderer **)this,param_1,pFVar4,
               (FInstanceCullingDrawParams *)(lVar5 + 0x200));
  }
  FMobileSceneRenderer::RenderMobileBasePass
            (*(FMobileSceneRenderer **)this,param_1,pFVar4,
             (FInstanceCullingDrawParams *)(lVar5 + 0x20),
             (FInstanceCullingDrawParams *)(*(longlong *)((longlong)this + 8) + 0x260));
  FMobileSceneRenderer::RenderMobileDebugView
            (*(FMobileSceneRenderer **)this,param_1,pFVar4,
             (FInstanceCullingDrawParams *)(*(longlong *)((longlong)this + 8) + 0x2c0));
  FMobileSceneRenderer::PostRenderBasePass(*(FMobileSceneRenderer **)this,param_1,pFVar4);
  FRHICommandList::NextSubpass(param_1);
  FMobileSceneRenderer::RenderDecals
            (*(FMobileSceneRenderer **)this,param_1,pFVar4,
             (FInstanceCullingDrawParams *)(*(longlong *)((longlong)this + 8) + 800));
  FRHICommandList::NextSubpass(param_1);
  lVar5 = *(longlong *)this;
  MobileDeferredShadingPass
            (param_1,*(int *)((longlong)this + 0x18),*(int *)(lVar5 + 0x18),pFVar4,
             *(FScene **)(lVar5 + 8),*(FSortedLightSetSceneInfo **)((longlong)this + 0x28),
             (TArray<FVisibleLightInfo,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
              *)(lVar5 + 0x630),*(EMobileSSRQuality *)((longlong)this + 0x20),(FRDGTexture *)0x0);
  if (*(char *)((longlong)this + 0x30) != '\0') {
    MobileDeferredCopyBuffer<FMobileDeferredCopyPLSPS>(param_1,pFVar4);
  }
  FMobileSceneRenderer::RenderFog(*(FMobileSceneRenderer **)this,param_1,pFVar4);
  lVar5 = *(longlong *)this;
  lVar6 = *(longlong *)((longlong)this + 8);
  local_28.DataPtr = *(FViewInfo **)(lVar5 + 0x10);
  iVar2 = *(int *)(lVar5 + 0x18);
  TVar1 = *(Type *)(lVar5 + 0xf98);
  TVar3 = *(Type *)(lVar5 + 0xf94);
  if (iVar2 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  local_28._12_4_ = uStack_2c;
  local_28.ArrayNum = iVar2;
  FMobileSceneRenderer::RenderTranslucency
            (param_1,pFVar4,&local_28,TVar3,TVar1,(FInstanceCullingDrawParams *)(lVar6 + 0x380));
  if (*(char *)((longlong)this + 0x31) != '\0') {
    FMobileSceneRenderer::RenderOcclusion
              (*(FMobileSceneRenderer **)this,param_1,pFVar4,
               (FViewOcclusionQueries *)((longlong)this + 0x38));
  }
  return;
}

// operator() @ 144f76020

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
`FMobileSceneRenderer::RenderForwardSinglePass'::__l20::<lambda_2>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FMobileSceneRenderer::RenderOcclusion
            (*(FMobileSceneRenderer **)this,(FRHICommandList *)param_1,
             *(FViewInfo **)((longlong)this + 8),(FViewOcclusionQueries *)((longlong)this + 0x18));
  return;
}

// operator() @ 144f761b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
`FMobileSceneRenderer::RenderCustomRenderPassBasePass'::__l26::<lambda_2>::operator()
          (void *this,FRHICommandList *param_1)

{
  TArrayView<FViewInfo,int> local_18;
  
  local_18.DataPtr = *(FViewInfo **)((longlong)this + 0x20);
  local_18._8_8_ = *(undefined8 *)((longlong)this + 0x28);
  FMobileSceneRenderer::RenderTranslucency
            (param_1,*(FViewInfo **)((longlong)this + 0x10),&local_18,TPT_AllTranslucency,
             TranslucencyAll,
             (FInstanceCullingDrawParams *)(*(longlong *)((longlong)this + 8) + 0x20));
  return;
}

// operator() @ 144f76200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */
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
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
`FMobileSceneRenderer::RenderMobileLocalLightsBuffer'::__l35::<lambda_2>::operator()
          (void *this,FRHICommandList *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  void *pvVar5;
  FLightSceneInfo *pFVar6;
  FGlobalShaderMap *this_00;
  FShaderMapResource *pFVar7;
  code *pcVar8;
  float fVar9;
  double dVar10;
  FRHICommandListBase *pFVar11;
  FSceneView *pFVar12;
  uint *puVar13;
  FDeferredLightVS *pFVar14;
  char cVar15;
  bool bVar16;
  FRHIVertexShader *pFVar17;
  FShaderParametersMetadata *pFVar18;
  FRHIPixelShader *pFVar19;
  TRefCountPtr<FRHIBuffer> *pTVar20;
  FMaterial *this_01;
  FShaderType *pFVar21;
  FMaterialRenderProxy *pFVar22;
  FName this_02;
  TRefCountPtr<FRHIVertexDeclaration> *pTVar23;
  atomic<FRHIShader_*> aVar24;
  FRHIBatchedShaderParameters *pFVar25;
  uint *puVar26;
  uint uVar27;
  ulonglong uVar28;
  atomic<FRHIShader_*> aVar29;
  FMaterialShader *this_03;
  float fVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auStackY_4e8 [32];
  undefined1 local_4a8 [4];
  uint local_4a4;
  void *local_4a0;
  uint local_498;
  uint *local_490;
  FRHICommandListBase *local_488;
  FSceneView *local_480;
  longlong local_478;
  uint *local_470;
  TShaderRefBase<FDeferredLightVS,FShaderMapPointerTable> local_468;
  double local_458;
  double dStack_450;
  double local_448;
  double dStack_440;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_438;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_428;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_418;
  TUniformBufferBinding<FViewUniformShaderParameters> local_408;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_3f8;
  undefined1 local_3e8 [8];
  FString local_3e0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_3c8;
  double local_3b8;
  TVector<double>_u_0 local_3a8;
  undefined1 local_388 [16];
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  FGraphicsPipelineStateInitializer local_318;
  FMaterialShaderTypes local_238;
  FParameters local_198;
  FParameters local_118;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_4e8;
  local_318.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_318.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_318.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_318.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_318.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_318.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_318.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_318.BlendState = (FRHIBlendState *)0x0;
  local_318.RasterizerState = (FRHIRasterizerState *)0x0;
  local_318.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_318.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_318.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
  local_318.RenderTargetsEnabled = 0;
  local_318.RenderTargetFormats.Elements[0] = '\0';
  local_318.RenderTargetFormats.Elements[1] = '\0';
  local_318.RenderTargetFormats.Elements[2] = '\0';
  local_318.RenderTargetFormats.Elements[3] = '\0';
  uVar27 = 0;
  local_318.RenderTargetFormats.Elements[4] = '\0';
  local_318.RenderTargetFormats.Elements[5] = '\0';
  local_318.RenderTargetFormats.Elements[6] = '\0';
  local_318.RenderTargetFormats.Elements[7] = '\0';
  local_318.RenderTargetFlags.Elements[0] = None;
  local_318.RenderTargetFlags.Elements[1] = None;
  local_318.RenderTargetFlags.Elements[2] = None;
  local_318.RenderTargetFlags.Elements[3] = None;
  local_318.RenderTargetFlags.Elements[4] = None;
  local_318.RenderTargetFlags.Elements[5] = None;
  local_318.RenderTargetFlags.Elements[6] = None;
  local_318.RenderTargetFlags.Elements[7] = None;
  local_318.DepthStencilTargetFormat = PF_Unknown;
  local_318.DepthStencilTargetFlag = None;
  local_318.DepthTargetLoadAction = ENoAction;
  local_318.DepthTargetStoreAction = ENoAction;
  local_318.StencilTargetLoadAction = ENoAction;
  local_318.StencilTargetStoreAction = ENoAction;
  local_318.DepthStencilAccess.Value = DepthNop;
  local_318.NumSamples = 0;
  local_318.SubpassHint = None;
  local_318.SubpassIndex = '\0';
  local_318.ConservativeRasterization = Disabled;
  local_318.bDepthBounds = false;
  local_318.MultiViewCount = '\0';
  local_318.bHasFragmentDensityAttachment = false;
  local_318.bAllowVariableRateShading = true;
  local_318.ShadingRate = VRSSR_1x1;
  local_318.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_318.StatePrecachePSOHash = 0;
  local_4a0 = this;
  local_488 = (FRHICommandListBase *)param_1;
  FRHICommandList::ApplyCachedRenderTargets(param_1,&local_318);
  lVar4 = *(longlong *)((longlong)this + 0x28);
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)(lVar4 + 0x1c30),(float)*(int *)(lVar4 + 0x1c34),0.0,
             (float)*(int *)(lVar4 + 0x1c38),(float)*(int *)(lVar4 + 0x1c3c),__real_3f800000);
  local_318.RasterizerState =
       TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
       ::StaticResource.StateRHI.Reference;
  local_318.BlendState =
       TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  local_4a4 = 0;
  local_318.DepthStencilState =
       TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  if (*(char *)((longlong)this + 0x40) != '\0') {
    uVar27 = 0x20;
    local_318.DepthStencilState =
         TStaticStateRHI<TStaticDepthStencilState<0,7,1,7,0,0,2,1,7,0,0,2,0,32>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
         ::StaticResource.StateRHI.Reference;
    if (*(char *)((longlong)this + 0x41) != '\0') {
      local_318.DepthStencilState =
           TStaticStateRHI<TStaticDepthStencilState<1,7,1,7,0,0,2,1,7,0,0,2,0,32>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
           ::StaticResource.StateRHI.Reference;
    }
    local_4a4 = 0x20;
  }
  local_318.BoundShaderState.VertexDeclarationRHI =
       (FRHIVertexDeclaration *)GTileVertexDeclaration._32_8_;
  local_318.PrimitiveType = PT_TriangleList;
  local_318.BoundShaderState.VertexShaderRHI =
       TShaderRefBase<FLocalLightBufferVS,FShaderMapPointerTable>::GetVertexShader
                 ((TShaderRefBase<FLocalLightBufferVS,FShaderMapPointerTable> *)((longlong)this + 8)
                  ,true);
  local_318.BoundShaderState.PixelShaderRHI =
       TShaderRefBase<FLocalLightBufferPS,FShaderMapPointerTable>::GetPixelShader
                 ((TShaderRefBase<FLocalLightBufferPS,FShaderMapPointerTable> *)
                  ((longlong)this + 0x18),true);
  SetGraphicsPipelineState(param_1,&local_318,uVar27,CheckApply,true);
  pvVar5 = *(void **)this;
  pFVar17 = TShaderRefBase<FLocalLightBufferVS,FShaderMapPointerTable>::GetVertexShader
                      ((TShaderRefBase<FLocalLightBufferVS,FShaderMapPointerTable> *)
                       ((longlong)this + 8),true);
  pFVar18 = FLocalLightBufferVS::FParameters::FTypeInfo::GetStructMetadata();
  local_438.ShaderContent = *(FShader **)((longlong)this + 8);
  local_438.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x10);
  ValidateShaderParameters(&local_438,pFVar18,pvVar5);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)pFVar17,
             *(FShaderParameterBindings **)((longlong)this + 8),pFVar18,pvVar5);
  lVar4 = *(longlong *)this;
  pFVar19 = TShaderRefBase<FLocalLightBufferPS,FShaderMapPointerTable>::GetPixelShader
                      ((TShaderRefBase<FLocalLightBufferPS,FShaderMapPointerTable> *)
                       ((longlong)this + 0x18),true);
  pFVar18 = FLocalLightBufferPS::FParameters::FTypeInfo::GetStructMetadata();
  local_428.ShaderContent = *(FShader **)((longlong)this + 0x18);
  local_428.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x20);
  ValidateShaderParameters(&local_428,pFVar18,(void *)(lVar4 + 0x20));
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)pFVar19,
             *(FShaderParameterBindings **)((longlong)this + 0x18),pFVar18,(void *)(lVar4 + 0x20));
  pTVar20 = GetOneTileQuadVertexBuffer();
  FRHICommandList::SetStreamSource(param_1,0,pTVar20->Reference,0);
  iVar2 = *(int *)((longlong)this + 0x34);
  iVar3 = *(int *)((longlong)this + 0x30);
  pTVar20 = GetOneTileQuadIndexBuffer();
  FRHICommandList::DrawIndexedPrimitive(param_1,pTVar20->Reference,0,0,4,0,2,iVar2 * iVar3);
  dVar10 = __real_3ff0ccccc0000000;
  fVar9 = __real_3b800000;
  if (*(char *)((longlong)this + 0x40) != '\0') {
    local_478 = *(longlong *)((longlong)this + 0x38);
    local_498 = *(uint *)(local_478 + 0x50);
    uVar28 = (ulonglong)(int)local_498;
    puVar26 = *(uint **)(local_478 + 0x48);
    local_470 = puVar26 + uVar28 * 6;
    while( true ) {
      puVar13 = local_470;
      local_490 = puVar26;
      if (*(int *)(local_478 + 0x50) != (int)uVar28) {
        local_4a8[0] = 0;
        `TCheckedPointerIterator<FSortedLightSceneInfo_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_4a8);
      }
      if (puVar26 == puVar13) break;
      if ((*puVar26 & 8) != 0 && (*puVar26 & 3) != 0) {
        pFVar6 = *(FLightSceneInfo **)(puVar26 + 2);
        (**(code **)(pFVar6->Proxy->_padding_ + 0x10))(pFVar6->Proxy,&local_458);
        local_3a8._s_0.X = local_458;
        local_3a8._s_0.Y = dStack_450;
        fVar30 = GetLightFunctionFadeFraction
                           (*(FViewInfo **)((longlong)this + 0x28),
                            (TSphere<double> *)&local_3a8._s_0);
        if (fVar9 <= fVar30) {
          local_378 = ZEXT816(0);
          local_388 = ZEXT816(0);
          pFVar22 = pFVar6->Proxy->LightFunctionMaterial;
          local_368 = local_378;
          local_358 = local_378;
          local_348 = local_378;
          local_338 = local_378;
          local_328 = local_378;
          while (pFVar22 != (FMaterialRenderProxy *)0x0) {
            this_01 = (FMaterial *)(**(code **)(pFVar22->_padding_ + 0x30))(pFVar22,1);
            if ((this_01 != (FMaterial *)0x0) &&
               (cVar15 = (**(code **)(this_01->_padding_ + 0xd0))(this_01), cVar15 != '\0')) {
              local_238.PipelineType = (FShaderPipelineType *)0x0;
              local_238.ShaderType[0] = (FShaderType *)0x0;
              local_238.ShaderType[1] = (FShaderType *)0x0;
              local_238.ShaderType[2] = (FShaderType *)0x0;
              local_238.ShaderType[3] = (FShaderType *)0x0;
              local_238.ShaderType[4] = (FShaderType *)0x0;
              local_238.ShaderType[5] = (FShaderType *)0x0;
              local_238.ShaderType[6] = (FShaderType *)0x0;
              local_238.ShaderType[7] = (FShaderType *)0x0;
              local_238.ShaderType[8] = (FShaderType *)0x0;
              local_238.ShaderType[9] = (FShaderType *)0x0;
              local_238.ShaderType[10] = (FShaderType *)0x0;
              local_238.ShaderType[0xb] = (FShaderType *)0x0;
              local_238.PermutationId[0] = 0;
              local_238.PermutationId[1] = 0;
              local_238.PermutationId[2] = 0;
              local_238.PermutationId[3] = 0;
              local_238.PermutationId[4] = 0;
              local_238.PermutationId[5] = 0;
              local_238.PermutationId[6] = 0;
              local_238.PermutationId[7] = 0;
              local_238.PermutationId[8] = 0;
              local_238.PermutationId[9] = 0;
              local_238.PermutationId[10] = 0;
              local_238.PermutationId[0xb] = 0;
              pFVar21 = (FShaderType *)FMobileLocalLightFunctionPS::GetStaticType();
              bVar1 = (byte)pFVar21->Frequency;
              if ((local_238.ShaderType[bVar1] != (FShaderType *)0x0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ShaderType[Frequency] == nullptr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                                      ,0xd0,L""), bVar16)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              local_238.ShaderType[bVar1] = pFVar21;
              local_238.PermutationId[bVar1] = 0;
              bVar16 = FMaterial::TryGetShaders
                                 (this_01,&local_238,(FVertexFactoryType *)0x0,
                                  (FMaterialShaders *)local_388);
              if (bVar16) {
                this_00 = *(FGlobalShaderMap **)(*(longlong *)((longlong)this + 0x28) + 0x26c0);
                pFVar21 = (FShaderType *)FDeferredLightVS::GetStaticType();
                FGlobalShaderMap::GetShader(this_00,&local_418,pFVar21,1);
                if (local_418.ShaderContent == (FShader *)0x0) {
                  this_02 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_3e8);
                  ::FName::ToString((FName *)this_02,&local_3e0);
                  FDeferredLightVS::GetStaticType();
                  bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Shader.IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                                      ,0xc0,L"Failed to find shader type %s in Platform %s");
                  if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
                  }
                  if (bVar16) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                }
                FDeferredLightVS::GetStaticType();
                local_468.ShaderContent = (FDeferredLightVS *)local_418.ShaderContent;
                local_468.ShaderMap = local_418.ShaderMap;
                FDeferredLightVS::GetParameters
                          (&local_118,*(FViewInfo **)((longlong)this + 0x28),pFVar6,false);
                local_408._8_1_ = 1;
                local_408._0_8_ = *(undefined8 *)(*(longlong *)((longlong)this + 0x28) + 0x18);
                pFVar18 = FViewUniformShaderParameters::GetStructMetadata();
                if (((pFVar18->BindingFlags & Shader) == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("EnumHasAllFlags(StructMetadata->GetBindingFlags(), GetBindingFlags())"
                                        ,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                                        ,0xf5,
                                        L"Uniform buffer binding flags don\'t match those supported by the uniform buffer layout \'%s."
                                       ), bVar16)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pvVar5 = local_4a0;
                aVar24 = (atomic<FRHIShader_*>)0x0;
                local_118.View._9_7_ = local_408._9_7_;
                local_118.View._8_1_ = local_408._8_1_;
                local_118.View._0_8_ = local_408._0_8_;
                aVar29 = aVar24;
                this_03 = (FMaterialShader *)0x0;
                if ((FMaterialShader *)local_368._8_8_ != (FMaterialShader *)0x0) {
                  aVar29 = (atomic<FRHIShader_*>)local_388._0_8_;
                  this_03 = (FMaterialShader *)local_368._8_8_;
                }
                FMobileLocalLightFunctionPS::GetParameters
                          ((FMobileLocalLightFunctionPS *)this_03,&local_198,
                           *(FViewInfo **)((longlong)local_4a0 + 0x28),pFVar6,fVar30);
                local_318.BlendState =
                     TStaticStateRHI<TStaticBlendState<7,0,1,1,0,1,0,0,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                     ::StaticResource.StateRHI.Reference;
                local_318.PrimitiveType = PT_TriangleList;
                pTVar23 = GetVertexDeclarationFVector4();
                local_318.BoundShaderState.VertexDeclarationRHI = pTVar23->Reference;
                local_318.BoundShaderState.VertexShaderRHI =
                     TShaderRefBase<FDeferredLightVS,FShaderMapPointerTable>::GetVertexShader
                               (&local_468,true);
                if (this_03 != (FMaterialShader *)0x0) {
                  pFVar7 = *(FShaderMapResource **)((longlong)aVar29 + 8);
                  if ((pFVar7 == (FShaderMapResource *)0x0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Resource",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                          ,0x426,L""), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  iVar2 = *(int *)((longlong)&this_03->_padding_ + 4);
                  aVar24 = (pFVar7->RHIShaders).Ptr[iVar2];
                  if ((aVar24 == (atomic<FRHIShader_*>)0x0) &&
                     (aVar24 = (atomic<FRHIShader_*>)
                               FShaderMapResource::CreateShaderOrCrash(pFVar7,iVar2,true),
                     aVar24 == (atomic<FRHIShader_*>)0x0)) {
                    if (4 < (byte)LogShaders._0_1_) {
                      if ((*(longlong *)((longlong)aVar29 + 0x18) == 0) &&
                         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                             ("PointerTable",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                              ,0x9b4,L""), bVar16)) {
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      FShader::GetType((FShader *)this_03,
                                       *(FShaderMapPointerTable **)((longlong)aVar29 + 0x18));
                      UE::Logging::Private::BasicLog<5>
                                ((FStaticBasicLogRecord *)
                                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FMobileLocalLightFunctionPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
                    }
                    aVar24 = (atomic<FRHIShader_*>)0x0;
                  }
                }
                pFVar11 = local_488;
                lVar4 = *(longlong *)((longlong)pvVar5 + 0x28);
                local_3b8 = *(double *)(lVar4 + 0xbd8);
                dVar32 = *(double *)(lVar4 + 0xbc8) - local_458;
                dVar33 = *(double *)(lVar4 + 0xbd0) - dStack_450;
                dVar31 = (double)(*(float *)(lVar4 + 0x1170) + *(float *)(lVar4 + 0x1170)) +
                         dStack_440 * dVar10;
                if (dVar31 * dVar31 <=
                    dVar33 * dVar33 + dVar32 * dVar32 +
                    (local_3b8 - local_448) * (local_3b8 - local_448)) {
                  local_318.DepthStencilState =
                       TStaticStateRHI<TStaticDepthStencilState<0,3,1,4,0,0,0,1,4,0,0,0,32,0>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
                       ::StaticResource.StateRHI.Reference;
                  local_318.RasterizerState =
                       TStaticStateRHI<TStaticRasterizerState<2,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
                       ::StaticResource.StateRHI.Reference;
                  if (*(char *)(lVar4 + 0x1190) != '\0') {
                    local_318.RasterizerState =
                         TStaticStateRHI<TStaticRasterizerState<2,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
                         ::StaticResource.StateRHI.Reference;
                  }
                }
                else {
                  local_318.DepthStencilState =
                       TStaticStateRHI<TStaticDepthStencilState<0,7,1,4,0,0,0,1,4,0,0,0,32,0>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
                       ::StaticResource.StateRHI.Reference;
                  local_318.RasterizerState =
                       TStaticStateRHI<TStaticRasterizerState<2,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
                       ::StaticResource.StateRHI.Reference;
                  if (*(char *)(lVar4 + 0x1190) != '\0') {
                    local_318.RasterizerState =
                         TStaticStateRHI<TStaticRasterizerState<2,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
                         ::StaticResource.StateRHI.Reference;
                  }
                }
                local_318.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)aVar24;
                (**(code **)(pFVar6->Proxy->_padding_ + 0xe8))
                          (pFVar6->Proxy,local_488,lVar4,lVar4 + 0x1c30);
                SetGraphicsPipelineState
                          ((FRHICommandList *)pFVar11,&local_318,local_4a4,CheckApply,true);
                pFVar17 = TShaderRefBase<FDeferredLightVS,FShaderMapPointerTable>::GetVertexShader
                                    (&local_468,true);
                pFVar18 = FDeferredLightVS::FParameters::FTypeInfo::GetStructMetadata();
                pFVar14 = local_468.ShaderContent;
                local_3c8.ShaderContent = (FShader *)local_468.ShaderContent;
                local_3c8.ShaderMap = local_468.ShaderMap;
                ValidateShaderParameters(&local_3c8,pFVar18,&local_118);
                ::SetShaderParameters
                          ((FRHICommandList *)pFVar11,(FRHIGraphicsShader *)pFVar17,
                           (FShaderParameterBindings *)pFVar14,pFVar18,&local_118);
                aVar24 = (atomic<FRHIShader_*>)0x0;
                local_480 = *(FSceneView **)((longlong)local_4a0 + 0x28);
                if (this_03 != (FMaterialShader *)0x0) {
                  pFVar7 = *(FShaderMapResource **)((longlong)aVar29 + 8);
                  if ((pFVar7 == (FShaderMapResource *)0x0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Resource",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                          ,0x426,L""), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  iVar2 = *(int *)((longlong)&this_03->_padding_ + 4);
                  aVar24 = (pFVar7->RHIShaders).Ptr[iVar2];
                  if ((aVar24 == (atomic<FRHIShader_*>)0x0) &&
                     (aVar24 = (atomic<FRHIShader_*>)
                               FShaderMapResource::CreateShaderOrCrash(pFVar7,iVar2,true),
                     aVar24 == (atomic<FRHIShader_*>)0x0)) {
                    if (4 < (byte)LogShaders._0_1_) {
                      if ((*(longlong *)((longlong)aVar29 + 0x18) == 0) &&
                         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                             ("PointerTable",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                              ,0x9b4,L""), bVar16)) {
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      FShader::GetType((FShader *)this_03,
                                       *(FShaderMapPointerTable **)((longlong)aVar29 + 0x18));
                      UE::Logging::Private::BasicLog<5>
                                ((FStaticBasicLogRecord *)
                                 &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FMobileLocalLightFunctionPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
                    }
                    aVar24 = (atomic<FRHIShader_*>)0x0;
                  }
                }
                pFVar25 = FRHICommandListBase::GetScratchShaderParameters(pFVar11);
                pFVar18 = FMobileLocalLightFunctionPS::FParameters::FTypeInfo::GetStructMetadata();
                local_3f8.ShaderContent = (FShader *)this_03;
                local_3f8.ShaderMap = (FShaderMapBase *)aVar29;
                ValidateShaderParameters(&local_3f8,pFVar18,&local_198);
                switch((byte)this_03->_padding_ & 0xf) {
                default:
                  ::SetShaderParameters
                            (pFVar25,(FShaderParameterBindings *)this_03,pFVar18,&local_198);
                  break;
                case 6:
                case 7:
                case 8:
                case 9:
                  SetRayTracingShaderParameters
                            (pFVar25,(FShaderParameterBindings *)this_03,pFVar18,&local_198);
                }
                pFVar12 = local_480;
                FMaterialShader::SetViewParameters
                          (this_03,pFVar25,local_480,&local_480->ViewUniformBuffer);
                FMaterialShader::SetParameters(this_03,pFVar25,pFVar22,this_01,pFVar12);
                pFVar11 = local_488;
                FRHICommandList::SetBatchedShaderParameters
                          ((FRHICommandList *)local_488,(FRHIGraphicsShader *)aVar24,pFVar25);
                puVar26 = local_490;
                if (((byte)*local_490 & 3) == 2) {
                  StencilingGeometry::DrawCone((FRHICommandList *)pFVar11);
                  this = local_4a0;
                }
                else {
                  StencilingGeometry::DrawSphere((FRHICommandList *)pFVar11);
                  this = local_4a0;
                }
                goto LAB_144f76711;
              }
            }
            pFVar22 = (FMaterialRenderProxy *)(**(code **)(pFVar22->_padding_ + 0x38))(pFVar22,1);
            puVar26 = local_490;
          }
          if (1 < (byte)LogTemp._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
          }
        }
      }
LAB_144f76711:
      puVar26 = puVar26 + 6;
      uVar28 = (ulonglong)local_498;
    }
  }
  return;
}

// operator() @ 144f76d20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
`FMobileSceneRenderer::RenderFullDepthPrepass'::__l37::<lambda_2>::operator()
          (void *this,FRHICommandList *param_1)

{
  FMobileSceneRenderer::RenderOcclusion
            (*(FMobileSceneRenderer **)this,param_1,*(FViewInfo **)((longlong)this + 8),
             (FViewOcclusionQueries *)((longlong)this + 0x18));
  return;
}

// operator() @ 144f78650

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
`FMobileSceneRenderer::RenderDeferredMultiPass'::__l38::<lambda_5>::operator()
          (void *this,FRHICommandList *param_1)

{
  FMobileSceneRenderer::RenderDecals
            (*(FMobileSceneRenderer **)this,param_1,*(FViewInfo **)((longlong)this + 0x10),
             (FInstanceCullingDrawParams *)(*(longlong *)((longlong)this + 8) + 0x20));
  return;
}

// operator() @ 144f788d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
`FMobileSceneRenderer::RenderDeferredMultiPass'::__l77::<lambda_8>::operator()
          (void *this,FRHICommandList *param_1)

{
  Type TVar1;
  Type TVar2;
  longlong lVar3;
  FViewInfo *pFVar4;
  longlong lVar5;
  TArrayView<FViewInfo,int> *pTVar6;
  TArrayView<FViewInfo,int> local_28;
  TArrayView<FViewInfo,int> local_18;
  
  lVar3 = *(longlong *)this;
  pFVar4 = *(FViewInfo **)((longlong)this + 0x10);
  MobileDeferredShadingPass
            (param_1,*(int *)((longlong)this + 0x18),*(int *)(lVar3 + 0x18),pFVar4,
             *(FScene **)(lVar3 + 8),*(FSortedLightSetSceneInfo **)((longlong)this + 0x28),
             (TArray<FVisibleLightInfo,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
              *)(lVar3 + 0x630),*(EMobileSSRQuality *)((longlong)this + 0x20),
             *(FRDGTexture **)(*(longlong *)((longlong)this + 8) + 0xd8));
  FMobileSceneRenderer::RenderFog(*(FMobileSceneRenderer **)this,param_1,pFVar4);
  if (*(char *)((longlong)this + 0x24) == '\0') {
    lVar3 = *(longlong *)this;
    lVar5 = *(longlong *)((longlong)this + 8);
    TVar1 = *(Type *)(lVar3 + 0xf98);
    TVar2 = *(Type *)(lVar3 + 0xf94);
    pTVar6 = TArrayView<FViewInfo,int>::
             TArrayView<FViewInfo,int><TArray<FViewInfo,TSizedDefaultAllocator<32>_>_&,TArray<FViewInfo,TSizedDefaultAllocator<32>_>_>
                       (&local_18,(TArray<FViewInfo,TSizedDefaultAllocator<32>_> *)(lVar3 + 0x10));
    local_28.DataPtr = pTVar6->DataPtr;
    local_28.ArrayNum = pTVar6->ArrayNum;
    local_28._12_4_ = *(undefined4 *)&pTVar6->field_0xc;
    FMobileSceneRenderer::RenderTranslucency
              (param_1,pFVar4,&local_28,TVar2,TVar1,(FInstanceCullingDrawParams *)(lVar5 + 0x20));
  }
  return;
}

// operator() @ 144f789d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall
`FMobileSceneRenderer::RenderDeferredMultiPass'::__l91::<lambda_9>::operator()
          (void *this,FRHICommandList *param_1)

{
  longlong lVar1;
  FParallelMeshDrawCommandPass *this_00;
  
  lVar1 = *(longlong *)((longlong)this + 8);
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)(lVar1 + 0x1c30),(float)*(int *)(lVar1 + 0x1c34),0.0,
             (float)*(int *)(lVar1 + 0x1c38),(float)*(int *)(lVar1 + 0x1c3c),__real_3f800000);
  this_00 = *(FParallelMeshDrawCommandPass **)(*(longlong *)((longlong)this + 8) + 0x20b0);
  if (this_00 != (FParallelMeshDrawCommandPass *)0x0) {
    FParallelMeshDrawCommandPass::Draw
              (this_00,param_1,
               (FInstanceCullingDrawParams *)(*(longlong *)((longlong)this + 0x10) + 0x20));
  }
  return;
}

// AllowSimpleLights @ 144f84870

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

bool __thiscall FMobileSceneRenderer::AllowSimpleLights(FMobileSceneRenderer *this)

{
  bool bVar1;
  
  bVar1 = FSceneRenderer::AllowSimpleLights((FSceneRenderer *)this);
  if ((bVar1) && (this->bSupportsSimpleLights != false)) {
    return true;
  }
  return false;
}

// ComputeNumOcclusionQueriesToBatch @ 144f87920

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

int __thiscall FMobileSceneRenderer::ComputeNumOcclusionQueriesToBatch(FMobileSceneRenderer *this)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  
  iVar6 = 0;
  uVar7 = 0;
  if (0 < *(int *)&this->field_0x18) {
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < *(int *)&this->field_0x18) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      lVar1 = *(longlong *)&this->field_0x10;
      lVar2 = *(longlong *)(lVar8 + 0x10 + lVar1);
      if ((lVar2 == 0) || ((*(byte *)(lVar2 + 0x5a0) & 2) == 0)) {
        iVar6 = iVar6 + *(int *)(lVar8 + 0x2518 + lVar1) + *(int *)(lVar8 + 0x24e8 + lVar1);
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x2970;
    } while ((int)uVar7 < *(int *)&this->field_0x18);
  }
  return iVar6;
}

// GetColorTargets_Deferred @ 144facca0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

TArray<FRDGTexture_*,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_> * __thiscall
FMobileSceneRenderer::GetColorTargets_Deferred
          (FMobileSceneRenderer *this,
          TArray<FRDGTexture_*,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__,FSceneTextures *param_1)

{
  FRDGTexture **ppFVar1;
  FRDGTexture **ppFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<FRDGTexture_*,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_> *pTVar6;
  ForElementType<FRDGTexture_*> FVar7;
  ForElementType<FRDGTexture_*> FVar8;
  ForElementType<FRDGTexture_*> FVar9;
  
  FVar9 = (ForElementType<FRDGTexture_*>)&param_1->_padding_;
  (__return_storage_ptr__->AllocatorInstance).SecondaryData = (ForElementType<FRDGTexture_*>)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 6;
  bVar4 = UsingPixelLocalStorage((FStaticShaderPlatform)*(EShaderPlatform *)&this->field_0xadc);
  FVar7 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
  if (!bVar4) {
    FVar8 = (ForElementType<FRDGTexture_*>)__return_storage_ptr__;
    if (FVar7 != (ForElementType<FRDGTexture_*>)0x0) {
      FVar8 = FVar7;
    }
    if ((ulonglong)FVar8 <= (ulonglong)FVar9) {
      FVar8 = (ForElementType<FRDGTexture_*>)__return_storage_ptr__;
      if (FVar7 != (ForElementType<FRDGTexture_*>)0x0) {
        FVar8 = FVar7;
      }
      if (((ulonglong)FVar9 <
           (undefined8 *)((longlong)FVar8 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArray<FRDGTexture_*,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_> *)
                 (*pcVar3)();
        return pTVar6;
      }
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<FRDGTexture_*>_>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    FVar7 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
    FVar8 = (ForElementType<FRDGTexture_*>)__return_storage_ptr__;
    if (FVar7 != (ForElementType<FRDGTexture_*>)0x0) {
      FVar8 = FVar7;
    }
    ppFVar1 = &param_1->GBufferA;
    *(longlong *)((longlong)FVar8 + (longlong)iVar5 * 8) = *(longlong *)FVar9;
    FVar9 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
    FVar7 = (ForElementType<FRDGTexture_*>)__return_storage_ptr__;
    if (FVar9 != (ForElementType<FRDGTexture_*>)0x0) {
      FVar7 = FVar9;
    }
    if ((ulonglong)FVar7 <= ppFVar1) {
      FVar7 = (ForElementType<FRDGTexture_*>)__return_storage_ptr__;
      if (FVar9 != (ForElementType<FRDGTexture_*>)0x0) {
        FVar7 = FVar9;
      }
      if ((ppFVar1 < (undefined1 *)
                     ((longlong)FVar7 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArray<FRDGTexture_*,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_> *)
                 (*pcVar3)();
        return pTVar6;
      }
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<FRDGTexture_*>_>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    FVar9 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
    FVar7 = (ForElementType<FRDGTexture_*>)__return_storage_ptr__;
    if (FVar9 != (ForElementType<FRDGTexture_*>)0x0) {
      FVar7 = FVar9;
    }
    ppFVar2 = &param_1->GBufferB;
    *(FRDGTexture **)((longlong)FVar7 + (longlong)iVar5 * 8) = *ppFVar1;
    FVar9 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
    FVar7 = (ForElementType<FRDGTexture_*>)__return_storage_ptr__;
    if (FVar9 != (ForElementType<FRDGTexture_*>)0x0) {
      FVar7 = FVar9;
    }
    if ((ulonglong)FVar7 <= ppFVar2) {
      FVar7 = (ForElementType<FRDGTexture_*>)__return_storage_ptr__;
      if (FVar9 != (ForElementType<FRDGTexture_*>)0x0) {
        FVar7 = FVar9;
      }
      if ((ppFVar2 < (undefined1 *)
                     ((longlong)FVar7 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArray<FRDGTexture_*,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_> *)
                 (*pcVar3)();
        return pTVar6;
      }
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<FRDGTexture_*>_>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    FVar9 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
    FVar7 = (ForElementType<FRDGTexture_*>)__return_storage_ptr__;
    if (FVar9 != (ForElementType<FRDGTexture_*>)0x0) {
      FVar7 = FVar9;
    }
    ppFVar1 = &param_1->GBufferC;
    *(FRDGTexture **)((longlong)FVar7 + (longlong)iVar5 * 8) = *ppFVar2;
    FVar9 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
    FVar7 = (ForElementType<FRDGTexture_*>)__return_storage_ptr__;
    if (FVar9 != (ForElementType<FRDGTexture_*>)0x0) {
      FVar7 = FVar9;
    }
    if ((ulonglong)FVar7 <= ppFVar1) {
      FVar7 = (ForElementType<FRDGTexture_*>)__return_storage_ptr__;
      if (FVar9 != (ForElementType<FRDGTexture_*>)0x0) {
        FVar7 = FVar9;
      }
      if ((ppFVar1 < (undefined1 *)
                     ((longlong)FVar7 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArray<FRDGTexture_*,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_> *)
                 (*pcVar3)();
        return pTVar6;
      }
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<FRDGTexture_*>_>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    FVar9 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
    FVar7 = (ForElementType<FRDGTexture_*>)__return_storage_ptr__;
    if (FVar9 != (ForElementType<FRDGTexture_*>)0x0) {
      FVar7 = FVar9;
    }
    *(FRDGTexture **)((longlong)FVar7 + (longlong)iVar5 * 8) = *ppFVar1;
    bVar4 = MobileUsesExtenedGBuffer((FStaticShaderPlatform)*(EShaderPlatform *)&this->field_0xadc);
    if (bVar4) {
      FVar9 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
      ppFVar1 = &param_1->GBufferD;
      FVar7 = (ForElementType<FRDGTexture_*>)__return_storage_ptr__;
      if (FVar9 != (ForElementType<FRDGTexture_*>)0x0) {
        FVar7 = FVar9;
      }
      if ((ulonglong)FVar7 <= ppFVar1) {
        FVar7 = (ForElementType<FRDGTexture_*>)__return_storage_ptr__;
        if (FVar9 != (ForElementType<FRDGTexture_*>)0x0) {
          FVar7 = FVar9;
        }
        if ((ppFVar1 < (undefined1 *)
                       ((longlong)FVar7 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TArray<FRDGTexture_*,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_> *
                   )(*pcVar3)();
          return pTVar6;
        }
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == __return_storage_ptr__->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<FRDGTexture_*>_>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      FVar9 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
      FVar7 = (ForElementType<FRDGTexture_*>)__return_storage_ptr__;
      if (FVar9 != (ForElementType<FRDGTexture_*>)0x0) {
        FVar7 = FVar9;
      }
      *(FRDGTexture **)((longlong)FVar7 + (longlong)iVar5 * 8) = *ppFVar1;
    }
    if (this->bRequiresSceneDepthAux == false) {
      return __return_storage_ptr__;
    }
    FVar7 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
    FVar9 = (ForElementType<FRDGTexture_*>)&param_1->DepthAux;
  }
  FVar8 = (ForElementType<FRDGTexture_*>)__return_storage_ptr__;
  if (FVar7 != (ForElementType<FRDGTexture_*>)0x0) {
    FVar8 = FVar7;
  }
  if ((ulonglong)FVar8 <= (ulonglong)FVar9) {
    FVar8 = (ForElementType<FRDGTexture_*>)__return_storage_ptr__;
    if (FVar7 != (ForElementType<FRDGTexture_*>)0x0) {
      FVar8 = FVar7;
    }
    if (((ulonglong)FVar9 <
         (ulonglong)((longlong)FVar8 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<FRDGTexture_*,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<FRDGTexture_*>_>
                      (0x808,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  FVar7 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
  FVar8 = (ForElementType<FRDGTexture_*>)__return_storage_ptr__;
  if (FVar7 != (ForElementType<FRDGTexture_*>)0x0) {
    FVar8 = FVar7;
  }
  *(undefined8 *)((longlong)FVar8 + (longlong)iVar5 * 8) = *(undefined8 *)FVar9;
  return __return_storage_ptr__;
}

// HasStereoMotionVectorRenderTargets @ 144fc58b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

bool __thiscall
FMobileSceneRenderer::HasStereoMotionVectorRenderTargets
          (FMobileSceneRenderer *this,FSceneTextures *param_1)

{
  if (param_1->StereoMotionVectors != (FRDGTexture *)0x0) {
    return param_1->StereoMotionVectorDepth != (FRDGTexture *)0x0;
  }
  return false;
}

// InitRenderTargetBindings_Deferred @ 144fc70c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

FRenderTargetBindingSlots * __thiscall
FMobileSceneRenderer::InitRenderTargetBindings_Deferred
          (FMobileSceneRenderer *this,FRenderTargetBindingSlots *__return_storage_ptr__,
          FSceneTextures *param_1,
          TArray<FRDGTexture_*,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_> *param_2)

{
  int iVar1;
  ForElementType<FRDGTexture_*> FVar2;
  code *pcVar3;
  FRDGTexture *pFVar4;
  FRDGTexture *pFVar5;
  FRDGTexture *pFVar6;
  ERenderTargetLoadAction EVar7;
  uchar uVar8;
  short sVar9;
  undefined4 uVar10;
  ERenderTargetLoadAction EVar11;
  uchar uVar12;
  short sVar13;
  undefined4 uVar14;
  undefined2 uVar15;
  FExclusiveDepthStencil FVar16;
  bool bVar17;
  FRenderTargetBindingSlots *pFVar18;
  FDepthStencilBinding *pFVar19;
  FRenderTargetBindingSlots *pFVar20;
  longlong lVar21;
  FDepthStencilBinding local_158;
  FDepthStencilBinding local_140;
  ForElementType<FRDGTexture_*> local_128;
  int iStack_120;
  undefined4 uStack_11c;
  TArrayView<FRDGTexture_*,int> local_118;
  FRenderTargetBindingSlots local_108;
  
  FVar2 = (param_2->AllocatorInstance).SecondaryData;
  iVar1 = param_2->ArrayNum;
  local_128 = (ForElementType<FRDGTexture_*>)param_2;
  if (FVar2 != (ForElementType<FRDGTexture_*>)0x0) {
    local_128 = FVar2;
  }
  if (iVar1 < 0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar17) {
      pcVar3 = (code *)swi(3);
      pFVar18 = (FRenderTargetBindingSlots *)(*pcVar3)();
      return pFVar18;
    }
  }
  local_118._12_4_ = uStack_11c;
  local_118.ArrayNum = iVar1;
  local_118.DataPtr = (FRDGTexture **)local_128;
  iStack_120 = iVar1;
  pFVar18 = GetRenderTargetBindings(&local_108,EClear,&local_118);
  lVar21 = 2;
  pFVar20 = __return_storage_ptr__;
  do {
    pFVar4 = (pFVar18->Output).Elements[0].ResolveTexture;
    EVar7 = (pFVar18->Output).Elements[0].LoadAction;
    uVar8 = (pFVar18->Output).Elements[0].MipIndex;
    sVar9 = (pFVar18->Output).Elements[0].ArraySlice;
    uVar10 = *(undefined4 *)&(pFVar18->Output).Elements[0].field_0x14;
    pFVar5 = (pFVar18->Output).Elements[1].Texture;
    (pFVar20->Output).Elements[0].Texture = (pFVar18->Output).Elements[0].Texture;
    (pFVar20->Output).Elements[0].ResolveTexture = pFVar4;
    pFVar4 = (pFVar18->Output).Elements[1].ResolveTexture;
    EVar11 = (pFVar18->Output).Elements[1].LoadAction;
    uVar12 = (pFVar18->Output).Elements[1].MipIndex;
    sVar13 = (pFVar18->Output).Elements[1].ArraySlice;
    uVar14 = *(undefined4 *)&(pFVar18->Output).Elements[1].field_0x14;
    (pFVar20->Output).Elements[0].LoadAction = EVar7;
    (pFVar20->Output).Elements[0].MipIndex = uVar8;
    (pFVar20->Output).Elements[0].ArraySlice = sVar9;
    *(undefined4 *)&(pFVar20->Output).Elements[0].field_0x14 = uVar10;
    (pFVar20->Output).Elements[1].Texture = pFVar5;
    pFVar5 = (pFVar18->Output).Elements[2].Texture;
    pFVar6 = (pFVar18->Output).Elements[2].ResolveTexture;
    (pFVar20->Output).Elements[1].ResolveTexture = pFVar4;
    (pFVar20->Output).Elements[1].LoadAction = EVar11;
    (pFVar20->Output).Elements[1].MipIndex = uVar12;
    (pFVar20->Output).Elements[1].ArraySlice = sVar13;
    *(undefined4 *)&(pFVar20->Output).Elements[1].field_0x14 = uVar14;
    EVar7 = (pFVar18->Output).Elements[2].LoadAction;
    uVar8 = (pFVar18->Output).Elements[2].MipIndex;
    sVar9 = (pFVar18->Output).Elements[2].ArraySlice;
    uVar10 = *(undefined4 *)&(pFVar18->Output).Elements[2].field_0x14;
    pFVar4 = (pFVar18->Output).Elements[3].Texture;
    (pFVar20->Output).Elements[2].Texture = pFVar5;
    (pFVar20->Output).Elements[2].ResolveTexture = pFVar6;
    pFVar5 = (pFVar18->Output).Elements[3].ResolveTexture;
    EVar11 = (pFVar18->Output).Elements[3].LoadAction;
    uVar12 = (pFVar18->Output).Elements[3].MipIndex;
    sVar13 = (pFVar18->Output).Elements[3].ArraySlice;
    uVar14 = *(undefined4 *)&(pFVar18->Output).Elements[3].field_0x14;
    (pFVar20->Output).Elements[2].LoadAction = EVar7;
    (pFVar20->Output).Elements[2].MipIndex = uVar8;
    (pFVar20->Output).Elements[2].ArraySlice = sVar9;
    *(undefined4 *)&(pFVar20->Output).Elements[2].field_0x14 = uVar10;
    (pFVar20->Output).Elements[3].Texture = pFVar4;
    pFVar4 = (pFVar18->Output).Elements[4].Texture;
    pFVar6 = (pFVar18->Output).Elements[4].ResolveTexture;
    (pFVar20->Output).Elements[3].ResolveTexture = pFVar5;
    (pFVar20->Output).Elements[3].LoadAction = EVar11;
    (pFVar20->Output).Elements[3].MipIndex = uVar12;
    (pFVar20->Output).Elements[3].ArraySlice = sVar13;
    *(undefined4 *)&(pFVar20->Output).Elements[3].field_0x14 = uVar14;
    EVar7 = (pFVar18->Output).Elements[4].LoadAction;
    uVar8 = (pFVar18->Output).Elements[4].MipIndex;
    sVar9 = (pFVar18->Output).Elements[4].ArraySlice;
    uVar10 = *(undefined4 *)&(pFVar18->Output).Elements[4].field_0x14;
    pFVar5 = (pFVar18->Output).Elements[5].Texture;
    (pFVar20->Output).Elements[4].Texture = pFVar4;
    (pFVar20->Output).Elements[4].ResolveTexture = pFVar6;
    (pFVar20->Output).Elements[4].LoadAction = EVar7;
    (pFVar20->Output).Elements[4].MipIndex = uVar8;
    (pFVar20->Output).Elements[4].ArraySlice = sVar9;
    *(undefined4 *)&(pFVar20->Output).Elements[4].field_0x14 = uVar10;
    (pFVar20->Output).Elements[5].Texture = pFVar5;
    lVar21 = lVar21 + -1;
    pFVar18 = (FRenderTargetBindingSlots *)&(pFVar18->Output).Elements[5].ResolveTexture;
    pFVar20 = (FRenderTargetBindingSlots *)&(pFVar20->Output).Elements[5].ResolveTexture;
  } while (lVar21 != 0);
  if (this->bIsFullDepthPrepassEnabled == false) {
    local_140.ResolveTexture = (FRDGTexture *)0x0;
    local_140.DepthLoadAction = EClear;
    local_140.StencilLoadAction = EClear;
    local_140.DepthStencilAccess.Value = DepthWrite_StencilWrite;
    local_140.Texture = (FRDGTexture *)param_1->_padding_;
    bVar17 = FDepthStencilBinding::Validate(&local_140);
    if (!bVar17) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Validate()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                          ,0x289,L"");
      if (bVar17) {
        pcVar3 = (code *)swi(3);
        pFVar18 = (FRenderTargetBindingSlots *)(*pcVar3)();
        return pFVar18;
      }
    }
    pFVar19 = &local_140;
  }
  else {
    local_158.ResolveTexture = (FRDGTexture *)0x0;
    local_158.DepthLoadAction = ELoad;
    local_158.StencilLoadAction = ELoad;
    local_158.DepthStencilAccess.Value = DepthRead_StencilWrite;
    local_158.Texture = (FRDGTexture *)param_1->_padding_;
    bVar17 = FDepthStencilBinding::Validate(&local_158);
    if (!bVar17) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Validate()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                          ,0x289,L"");
      if (bVar17) {
        pcVar3 = (code *)swi(3);
        pFVar18 = (FRenderTargetBindingSlots *)(*pcVar3)();
        return pFVar18;
      }
    }
    pFVar19 = &local_158;
  }
  pFVar4 = pFVar19->Texture;
  pFVar5 = pFVar19->ResolveTexture;
  __return_storage_ptr__->SubpassHint = None;
  EVar7 = pFVar19->DepthLoadAction;
  EVar11 = pFVar19->StencilLoadAction;
  uVar15 = *(undefined2 *)&pFVar19->field_0x12;
  FVar16.Value = (pFVar19->DepthStencilAccess).Value;
  iVar1 = *(int *)&this->field_0x18;
  (__return_storage_ptr__->DepthStencil).Texture = pFVar4;
  (__return_storage_ptr__->DepthStencil).ResolveTexture = pFVar5;
  (__return_storage_ptr__->DepthStencil).DepthLoadAction = EVar7;
  (__return_storage_ptr__->DepthStencil).StencilLoadAction = EVar11;
  *(undefined2 *)&(__return_storage_ptr__->DepthStencil).field_0x12 = uVar15;
  (__return_storage_ptr__->DepthStencil).DepthStencilAccess = (FExclusiveDepthStencil)FVar16.Value;
  __return_storage_ptr__->NumOcclusionQueries = 0;
  __return_storage_ptr__->ShadingRateTexture = (FRDGTexture *)0x0;
  if (iVar1 < 1) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar3 = (code *)swi(3);
      pFVar18 = (FRenderTargetBindingSlots *)(*pcVar3)();
      return pFVar18;
    }
  }
  if (*(char *)(*(longlong *)&this->field_0x10 + 0x11f5) == '\0') {
    if (*(int *)&this->field_0x18 < 1) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar17) {
        pcVar3 = (code *)swi(3);
        pFVar18 = (FRenderTargetBindingSlots *)(*pcVar3)();
        return pFVar18;
      }
    }
    __return_storage_ptr__->MultiViewCount =
         *(byte *)(*(longlong *)&this->field_0x10 + 0x1c02) >> 1 & 1;
  }
  else {
    __return_storage_ptr__->MultiViewCount = '\x02';
  }
  return __return_storage_ptr__;
}

// InitRenderTargetBindings_Forward @ 144fc7350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

FRenderTargetBindingSlots * __thiscall
FMobileSceneRenderer::InitRenderTargetBindings_Forward
          (FMobileSceneRenderer *this,FRenderTargetBindingSlots *__return_storage_ptr__,
          FRDGTexture *param_1,FSceneTextures *param_2)

{
  int iVar1;
  FRDGTexture *pFVar2;
  code *pcVar3;
  ERenderTargetLoadAction EVar4;
  ERenderTargetLoadAction EVar5;
  undefined2 uVar6;
  FExclusiveDepthStencil FVar7;
  bool bVar8;
  FRenderTargetBindingSlots *pFVar9;
  FDepthStencilBinding *pFVar10;
  FRDGTexture *pFVar11;
  FRDGTexture *pFVar12;
  FRDGTexture *pFVar13;
  FRDGTexture *pFVar14;
  undefined1 auStack_d8 [32];
  FRenderTargetBinding local_b8;
  FRenderTargetBinding local_a0;
  FRenderTargetBinding local_88;
  FDepthStencilBinding local_70;
  FDepthStencilBinding local_58;
  FRDGTexture *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  iVar1 = this->NumMSAASamples;
  pFVar11 = (FRDGTexture *)0x0;
  if (this->bRenderToSceneColor == false) {
    pFVar12 = param_1;
    if (iVar1 < 2) {
      pFVar13 = param_1;
      if (iVar1 < 2) {
        pFVar12 = pFVar11;
      }
    }
    else {
      pFVar13 = (FRDGTexture *)param_2->_padding_;
      if (iVar1 < 2) {
        pFVar12 = pFVar11;
      }
    }
  }
  else {
    pFVar12 = pFVar11;
    pFVar13 = (FRDGTexture *)param_2->_padding_;
    if (1 < iVar1) {
      pFVar12 = (FRDGTexture *)param_2->_padding_;
    }
  }
  pFVar2 = (FRDGTexture *)param_2->_padding_;
  if (((!GRHIGlobals.SupportsDepthStencilResolve) || (iVar1 < 2)) ||
     (pFVar14 = (FRDGTexture *)param_2->_padding_, pFVar2 == (FRDGTexture *)param_2->_padding_)) {
    pFVar14 = pFVar11;
  }
  local_40 = param_1;
  FRenderTargetBindingSlots::FRenderTargetBindingSlots(__return_storage_ptr__);
  local_b8.LoadAction = EClear;
  local_b8.MipIndex = '\0';
  local_b8.ArraySlice = -1;
  local_b8.Texture = pFVar13;
  local_b8.ResolveTexture = pFVar12;
  bVar8 = FRenderTargetBinding::Validate(&local_b8);
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Validate()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                         ,0x220,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    pFVar9 = (FRenderTargetBindingSlots *)(*pcVar3)();
    return pFVar9;
  }
  (__return_storage_ptr__->Output).Elements[0].Texture = local_b8.Texture;
  (__return_storage_ptr__->Output).Elements[0].ResolveTexture = local_b8.ResolveTexture;
  (__return_storage_ptr__->Output).Elements[0].LoadAction = local_b8.LoadAction;
  (__return_storage_ptr__->Output).Elements[0].MipIndex = local_b8.MipIndex;
  (__return_storage_ptr__->Output).Elements[0].ArraySlice = local_b8.ArraySlice;
  *(undefined4 *)&(__return_storage_ptr__->Output).Elements[0].field_0x14 = local_b8._20_4_;
  if (this->bRequiresSceneDepthAux != false) {
    local_a0.Texture = (param_2->DepthAux).Target;
    local_a0.ResolveTexture = (param_2->DepthAux).Resolve;
    local_a0.LoadAction = EClear;
    local_a0.MipIndex = '\0';
    local_a0.ArraySlice = -1;
    bVar8 = FRenderTargetBinding::Validate(&local_a0);
    if ((!bVar8) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Validate()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                           ,0x220,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FRenderTargetBindingSlots *)(*pcVar3)();
      return pFVar9;
    }
    (__return_storage_ptr__->Output).Elements[1].Texture = local_a0.Texture;
    (__return_storage_ptr__->Output).Elements[1].ResolveTexture = local_a0.ResolveTexture;
    (__return_storage_ptr__->Output).Elements[1].LoadAction = local_a0.LoadAction;
    (__return_storage_ptr__->Output).Elements[1].MipIndex = local_a0.MipIndex;
    (__return_storage_ptr__->Output).Elements[1].ArraySlice = local_a0.ArraySlice;
    *(undefined4 *)&(__return_storage_ptr__->Output).Elements[1].field_0x14 = local_a0._20_4_;
  }
  if (this->bTonemapSubpassInline != false) {
    (__return_storage_ptr__->Output).Elements[0].ResolveTexture = (FRDGTexture *)0x0;
    bVar8 = FRenderTargetBinding::Validate((FRenderTargetBinding *)__return_storage_ptr__);
    if ((!bVar8) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Validate()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                           ,0x250,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FRenderTargetBindingSlots *)(*pcVar3)();
      return pFVar9;
    }
    local_88.Texture = local_40;
    local_88.ResolveTexture = (FRDGTexture *)0x0;
    local_88.LoadAction = EClear;
    local_88.MipIndex = '\0';
    local_88.ArraySlice = -1;
    bVar8 = FRenderTargetBinding::Validate(&local_88);
    if ((!bVar8) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Validate()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                           ,0x220,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FRenderTargetBindingSlots *)(*pcVar3)();
      return pFVar9;
    }
    (__return_storage_ptr__->Output).Elements[1].Texture = local_88.Texture;
    (__return_storage_ptr__->Output).Elements[1].ResolveTexture = local_88.ResolveTexture;
    (__return_storage_ptr__->Output).Elements[1].LoadAction = local_88.LoadAction;
    (__return_storage_ptr__->Output).Elements[1].MipIndex = local_88.MipIndex;
    (__return_storage_ptr__->Output).Elements[1].ArraySlice = local_88.ArraySlice;
    *(undefined4 *)&(__return_storage_ptr__->Output).Elements[1].field_0x14 = local_88._20_4_;
  }
  if (this->bIsFullDepthPrepassEnabled == false) {
    local_58.DepthLoadAction = EClear;
    local_58.StencilLoadAction = EClear;
    local_58.DepthStencilAccess.Value = DepthWrite_StencilWrite;
    local_58.Texture = pFVar2;
    local_58.ResolveTexture = pFVar14;
    bVar8 = FDepthStencilBinding::Validate(&local_58);
    if ((!bVar8) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Validate()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                           ,0x298,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FRenderTargetBindingSlots *)(*pcVar3)();
      return pFVar9;
    }
    pFVar10 = &local_58;
  }
  else {
    local_70.DepthLoadAction = ELoad;
    local_70.StencilLoadAction = ELoad;
    local_70.DepthStencilAccess.Value = DepthRead_StencilWrite;
    local_70.Texture = pFVar2;
    local_70.ResolveTexture = pFVar14;
    bVar8 = FDepthStencilBinding::Validate(&local_70);
    if ((!bVar8) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Validate()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                           ,0x298,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FRenderTargetBindingSlots *)(*pcVar3)();
      return pFVar9;
    }
    pFVar10 = &local_70;
  }
  pFVar11 = pFVar10->ResolveTexture;
  EVar4 = pFVar10->DepthLoadAction;
  EVar5 = pFVar10->StencilLoadAction;
  uVar6 = *(undefined2 *)&pFVar10->field_0x12;
  FVar7.Value = (pFVar10->DepthStencilAccess).Value;
  (__return_storage_ptr__->DepthStencil).Texture = pFVar10->Texture;
  (__return_storage_ptr__->DepthStencil).ResolveTexture = pFVar11;
  (__return_storage_ptr__->DepthStencil).DepthLoadAction = EVar4;
  (__return_storage_ptr__->DepthStencil).StencilLoadAction = EVar5;
  *(undefined2 *)&(__return_storage_ptr__->DepthStencil).field_0x12 = uVar6;
  (__return_storage_ptr__->DepthStencil).DepthStencilAccess = (FExclusiveDepthStencil)FVar7.Value;
  __return_storage_ptr__->SubpassHint = None;
  __return_storage_ptr__->NumOcclusionQueries = 0;
  return __return_storage_ptr__;
}

// InitViews @ 144fc7670

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FMobileSceneRenderer::InitViews
          (FMobileSceneRenderer *this,FRDGBuilder *param_1,FSceneTexturesConfig *param_2,
          FInstanceCullingManager *param_3,FVirtualTextureUpdater *param_4,
          FInitViewTaskDatas *param_5)

{
  FStaticShaderPlatform FVar1;
  undefined4 uVar2;
  FRHICommandListBase *pFVar3;
  FName FVar4;
  TRefCountPtr<FRDGPooledBuffer> *pTVar5;
  FSkyLightSceneProxy *pFVar6;
  code *pcVar7;
  ETextureCreateFlags EVar8;
  undefined8 uVar9;
  bool bVar10;
  bool bVar11;
  EShadingPath EVar12;
  Type TVar13;
  EShaderPlatform EVar14;
  undefined2 uVar15;
  undefined3 uVar16;
  TConsoleVariableData<int> *pTVar17;
  TSet<IPersistentViewUniformBufferExtension_*,DefaultKeyFuncs<IPersistentViewUniformBufferExtension_*,0>,FDefaultSetAllocator>
  *pTVar18;
  FSceneTexturesConfig *pFVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  char cVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  uint uVar27;
  atomic<unsigned_int> aVar28;
  ERendererOutput EVar29;
  ESceneCaptureSource EVar30;
  int iVar31;
  EDebugViewShaderMode EVar32;
  uint uVar33;
  FRHIBreadcrumbAllocator *pFVar34;
  FRHIBreadcrumbNode *pFVar35;
  FName *pFVar36;
  FThreadSafeStaticStat<FStat_STAT_InitViewsTime> FVar37;
  FRDGScope *pFVar38;
  FRDGBuffer *pFVar39;
  FViewInfo *pFVar40;
  TStridedView<FSceneView_const_,int> *pTVar41;
  longlong *plVar42;
  undefined8 *puVar43;
  longlong lVar44;
  TArrayView<FViewInfo_const_,int> *pTVar45;
  FSceneTexturesConfig *pFVar46;
  FDynamicShadowsTaskData *pFVar47;
  byte bVar48;
  ulonglong uVar49;
  longlong lVar50;
  longlong *plVar51;
  uint *puVar52;
  FSceneTexturesConfig *pFVar53;
  EPixelFormat EVar54;
  uint uVar55;
  FViewInfo *pFVar56;
  undefined1 local_220 [4];
  FMobileCustomDepthStencilUsage local_21c;
  undefined1 local_218;
  undefined1 local_217 [7];
  FName local_210;
  int local_208;
  int iStack_204;
  longlong local_200;
  FColor_u_0 local_1f8 [2];
  FRHICommandListBase *local_1f0;
  ulonglong local_1e8;
  FRDGScope *local_1e0;
  FName local_1d8;
  FILCUpdatePrimTaskData *local_1d0;
  FName local_1c8;
  FRDGExternalAccessQueue local_1b8;
  int local_1a8;
  int local_1a4;
  TSet<IPersistentViewUniformBufferExtension_*,DefaultKeyFuncs<IPersistentViewUniformBufferExtension_*,0>,FDefaultSetAllocator>
  *local_1a0;
  int iStack_198;
  undefined4 uStack_194;
  undefined8 local_190;
  undefined4 uStack_188;
  uint uStack_184;
  int local_180;
  undefined4 uStack_17c;
  int iStack_178;
  undefined4 uStack_174;
  TSet<IPersistentViewUniformBufferExtension_*,DefaultKeyFuncs<IPersistentViewUniformBufferExtension_*,0>,FDefaultSetAllocator>
  *local_170;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_168;
  undefined8 uStack_148;
  FViewInfo *local_138;
  int iStack_130;
  undefined4 uStack_12c;
  char *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  wchar_t *pwStack_110;
  FRHIBreadcrumbScope local_108;
  char local_f8;
  FName local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  int iStack_dc;
  TArrayView<FViewInfo,int> local_d8;
  TArrayView<FViewInfo_const_,int> local_c8;
  TArrayView<FViewInfo_const_,int> local_b8;
  TArrayView<FViewCommands,int> local_a8;
  TStridedView<FSceneView_const_,int> local_98;
  TArrayView<FViewInfo_const_,int> local_88;
  TArrayView<FViewInfo_const_,int> local_78;
  undefined1 local_68 [44];
  undefined4 local_3c;
  
  pFVar3 = (FRHICommandListBase *)param_1->_padding_;
  local_1f0 = pFVar3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    local_128 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MobileShadingRenderer.cpp"
    ;
    pwStack_110 = L"InitViews";
    uStack_120 = 0x1d6;
    local_118 = 0;
    ::Desc._padding_._0_4_ = 0x50eecec0;
    ::Desc._padding_._4_4_ = 1;
    ::Desc._padding_._0_4_ = 0x1d6;
    ::Desc._padding_._4_4_ = uStack_11c;
    ::Desc._padding_._0_4_ = 0;
    ::Desc._padding_._4_4_ = 0;
    ::Desc._padding_._0_4_ = 0x50ee8b28;
    ::Desc._padding_._4_4_ = 1;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
    ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    ::Desc.TraceGpuSpecId = 0;
    ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(``FMobileSceneRenderer::InitViews'::__l7::<lambda_1>::operator()<>'::__l2::
           _dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar34 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)pFVar3);
  pFVar35 = FMemStackBase::Alloc(&pFVar34->Inner,0x50,8);
  pFVar35->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar35->Parent = FRHIBreadcrumbNode::Sentinel;
  pFVar35->ListLink = (FRHIBreadcrumbNode *)0x0;
  (pFVar35->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (pFVar35->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  pFVar35->TraceCpuSpecId = 0;
  pFVar35->TraceCpuMetadataId = 0;
  local_1e8 = 1;
  pFVar35->Allocator = pFVar34;
  pFVar35->Data = (FRHIBreadcrumbData *)&::Desc;
  LOCK();
  UNLOCK();
  uVar27 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar35->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar35->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar35->ID = uVar27;
  pFVar35->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar35[1]._padding_ = (longlong)&::Desc;
  if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
     (bVar21 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar21)) {
    EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      aVar28 = (atomic<unsigned_int>)
               FCpuProfilerTrace::OutputEventType
                         ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                          (char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                          (uint)::Desc._padding_);
      LOCK();
      ::Desc.TraceCpuSpecId = aVar28;
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  }
  pFVar35->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_108,(FRHIComputeCommandList *)pFVar3,pFVar35);
  local_f8 = '\x01';
  FVar37 = StatPtr_STAT_InitViewsTime;
  if (StatPtr_STAT_InitViewsTime == (FThreadSafeStaticStat<FStat_STAT_InitViewsTime>)0x0) {
    pFVar36 = ::FName::FName(&local_f0,"STAT_InitViewsTime");
    FVar37 = (FThreadSafeStaticStat<FStat_STAT_InitViewsTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InitViewsTime,*pFVar36,
                        L"InitViews","STATGROUP_SceneRendering","STATCAT_Advanced",
                        L"Scene Rendering",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar4 = *(FName *)FVar37;
  bVar21 = false;
  bVar11 = false;
  local_1c8.ComparisonIndex.Value = 0;
  local_1c8.Number = 0;
  bVar20 = false;
  bVar22 = false;
  if ((FVar4.ComparisonIndex.Value.Value == 0) && (FVar4.Number == 0)) {
LAB_144fc7912:
    bVar11 = bVar22;
    bVar21 = bVar20;
    bVar20 = false;
    local_210 = local_1c8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1f8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1f8[0]._s_0,(char *)*(FName *)((longlong)FVar37 + 0x10));
      bVar21 = false;
      bVar11 = true;
      bVar20 = false;
      bVar22 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1d8.ComparisonIndex.Value = FVar4.ComparisonIndex.Value.Value;
        local_1d8.Number = FVar4.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1d8,(wchar_t *)*(FName *)((longlong)FVar37 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MobileShadingRenderer.cpp"
                   ,0x1d8);
        bVar21 = true;
        bVar11 = true;
        bVar20 = true;
        bVar22 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_144fc7912;
    local_210 = FVar4;
    FThreadStats::AddMessage(FVar4,CycleScopeStart);
    bVar20 = true;
  }
  pFVar38 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                      ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
  param_1->_padding_ = (longlong)pFVar38;
  uVar49 = (ulonglong)(pFVar38->Impl).Impl.TypeIndex;
  local_1e0 = pFVar38;
  if ((3 < uVar49) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0xd4,L""), bVar22)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[uVar49])(&pFVar38->Impl);
  (pFVar38->Impl).Impl._padding_ = (longlong)"InitViews_Scene";
  FCsvProfiler::BeginExclusiveStat("InitViews_Scene",(char *)0x0);
  (pFVar38->Impl).Impl.TypeIndex = '\x03';
  if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
    FRDGScope::BeginCPU(local_1e0,(FRHIComputeCommandList *)param_1->_padding_,false);
    FRDGScope::BeginGPU(local_1e0,(FRHIComputeCommandList *)param_1->_padding_);
  }
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("Scene",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MobileShadingRenderer.cpp"
                          ,0x1db,L""), bVar22)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  EVar29 = FSceneRenderer::GetRendererOutput((FSceneRenderer *)this);
  FSceneRenderer::PreVisibilityFrameSetup((FSceneRenderer *)this,param_1);
  if (((param_3->bIsEnabled != false) &&
      (pTVar5 = *(TRefCountPtr<FRDGPooledBuffer> **)(*(longlong *)&this->field_0x8 + 0x4d48),
      pTVar5 != (TRefCountPtr<FRDGPooledBuffer> *)0x0)) &&
     (pTVar5->Reference != (FRDGPooledBuffer *)0x0)) {
    pFVar39 = FRDGBuilder::RegisterExternalBuffer(param_1,pTVar5,None);
    param_3->InstanceOcclusionQueryBuffer = pFVar39;
    param_3->InstanceOcclusionQueryBufferFormat =
         *(EPixelFormat *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x4d48) + 8);
  }
  local_1d0 = (FILCUpdatePrimTaskData *)0x0;
  if (((*(longlong **)&this->field_0xb40 != (longlong *)0x0) &&
      (cVar23 = (**(code **)(**(longlong **)&this->field_0xb40 + 0x80))(), cVar23 != '\0')) &&
     ((0 < *(int *)&this->field_0x18 && (EVar29 != DepthPrepassOnly)))) {
    pFVar40 = (FViewInfo *)FSceneView::GetInstancedSceneView(*(FSceneView **)&this->field_0x10);
    if (pFVar40 != (FViewInfo *)0x0) {
      FViewInfo::InitRHIResources(pFVar40,0);
    }
    if ((*(int *)&this->field_0x18 < 1) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar22)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FViewInfo::InitRHIResources(*(FViewInfo **)&this->field_0x10,0);
    plVar42 = *(longlong **)&this->field_0xb40;
    uVar2 = *(undefined4 *)&this->field_0x10c;
    pcVar7 = *(code **)(*plVar42 + 0x68);
    pTVar41 = FSceneRenderer::GetSceneViews((FSceneRenderer *)this,&local_98);
    local_e8 = *(undefined4 *)&pTVar41->FirstElementPtr;
    uStack_e4 = *(undefined4 *)((longlong)&pTVar41->FirstElementPtr + 4);
    iStack_e0 = pTVar41->BytesBetweenElements;
    iStack_dc = pTVar41->NumElements;
    (*pcVar7)(plVar42,param_1,&local_e8,~(byte)((uint)uVar2 >> 0x1d) & 1);
  }
  (**(code **)((longlong)*param_5->VisibilityTaskData + 0x10))();
  (**(code **)((longlong)*param_5->VisibilityTaskData + 0x18))
            (param_5->VisibilityTaskData,0x22,param_3);
  bVar22 = FSceneRenderer::ShouldRenderVolumetricFog((FSceneRenderer *)this);
  if ((bVar22) && (EVar29 != DepthPrepassOnly)) {
    FSceneRenderer::SetupVolumetricFog((FSceneRenderer *)this);
  }
  FSceneRenderer::PostVisibilityFrameSetup((FSceneRenderer *)this,&local_1d0);
  (**(code **)(**(longlong **)&this->field_0xe8 + 0x28))(*(longlong **)&this->field_0xe8,&local_208)
  ;
  EVar54 = PF_Unknown;
  plVar42 = (longlong *)(**(code **)(**(longlong **)&this->field_0xe8 + 0x10))();
  if (*plVar42 != 0) {
    puVar43 = (undefined8 *)(**(code **)(**(longlong **)&this->field_0xe8 + 0x10))();
    plVar42 = (longlong *)*puVar43;
    lVar44 = (**(code **)(*plVar42 + 0x20))(plVar42);
    uVar2 = *(undefined4 *)(lVar44 + 0x28);
    lVar44 = (**(code **)(*plVar42 + 0x20))(plVar42);
    _local_208 = CONCAT44(uVar2,*(undefined4 *)(lVar44 + 0x24));
    puVar43 = (undefined8 *)(**(code **)(**(longlong **)&this->field_0xe8 + 0x10))();
    lVar44 = (**(code **)(*(longlong *)*puVar43 + 0x20))();
    EVar54 = *(EPixelFormat *)(lVar44 + 0x33);
  }
  if ((*(int *)&this->field_0x18 < 1) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((*(int *)(*(longlong *)&this->field_0x10 + 0x1b94) == 2) ||
     ((local_208 <= *(int *)&this->field_0xb08 && (iStack_204 <= *(int *)&this->field_0xb0c)))) {
    bVar22 = false;
  }
  else {
    bVar22 = true;
  }
  if ((*(int *)&this->field_0x18 < 1) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar24)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_21c.bUsesCustomDepthStencil =
       FSceneRenderer::ShouldCompositeEditorPrimitives(*(FViewInfo **)&this->field_0x10);
  if ((((this->bGammaSpace != false) && ((*(uint *)&this->field_0x110 & 0x1800000) != 0x1800000)) &&
      (!bVar22)) && (!local_21c.bUsesCustomDepthStencil)) {
    if ((*(int *)&this->field_0x18 < 1) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar22)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (*(char *)(*(longlong *)&this->field_0x10 + 0x11e8) == '\0') {
      if ((*(int *)&this->field_0x18 < 1) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((*(char *)(*(longlong *)&this->field_0x10 + 0x11ec) == '\0') &&
         (((this->NumMSAASamples < 2 ||
           ((bVar22 = IsMetalMobilePlatform
                                ((FStaticShaderPlatform)*(EShaderPlatform *)&this->field_0xadc),
            !bVar22 &&
            (((this->NumMSAASamples < 2 || (EVar54 == PF_Unknown)) ||
             (EVar54 == param_2->ColorFormat)))))) && (this->bIsFullDepthPrepassEnabled == false))))
      {
        bVar22 = false;
        goto LAB_144fc7d9f;
      }
    }
  }
  bVar22 = true;
LAB_144fc7d9f:
  this->bRenderToSceneColor = bVar22;
  if ((*(int *)&this->field_0x184 == 3) || (bVar22 = false, *(int *)&this->field_0x184 - 4U < 2)) {
    bVar22 = true;
  }
  plVar51 = *(longlong **)&this->field_0x3f0;
  iVar31 = *(int *)&this->field_0x3f8;
  plVar42 = plVar51 + iVar31;
  do {
    if (*(int *)&this->field_0x3f8 != iVar31) {
      local_220[0] = 0;
      `TCheckedPointerIterator<FViewInfo_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_220);
    }
    if (plVar51 == plVar42) goto LAB_144fc7e18;
    if (*(FCustomRenderPassBase **)(*plVar51 + 0x11e0) != (FCustomRenderPassBase *)0x0) {
      EVar30 = FCustomRenderPassBase::GetSceneCaptureSource
                         (*(FCustomRenderPassBase **)(*plVar51 + 0x11e0));
      if (EVar30 - SCS_SceneColorSceneDepth < 3) break;
    }
    plVar51 = plVar51 + 1;
  } while( true );
  bVar22 = true;
LAB_144fc7e18:
  if (*(FScene **)&this->field_0x8 != (FScene *)0x0) {
    FScene::GetForwardPassGlobalPlanarReflection(*(FScene **)&this->field_0x8);
  }
  bVar24 = (bool)(**(code **)(*(longlong *)this + 0x50))(this);
  uVar49 = (ulonglong)_tls_index;
  this->bShouldRenderVelocities = bVar24;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar49 * 8) + 0x9d4c) < ::_TSS1)
     && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
       ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0 &&
        (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                            ("Singleton != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x4fb,L""), bVar24)))) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    CVarMobileSupportInsetShadows =
         (IConsoleVariable *)
         (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                   (IConsoleManager::Singleton,L"r.Mobile.SupportInsetShadows",1);
    _Init_thread_footer(&::_TSS1);
  }
  if ((CVarMobileSupportInsetShadows == (IConsoleVariable *)0x0) ||
     (iVar31 = (**(code **)(*(longlong *)CVarMobileSupportInsetShadows + 200))(), iVar31 == 0)) {
    bVar24 = false;
  }
  else {
    bVar24 = true;
  }
  bVar25 = MobileUsesShadowMaskTexture
                     ((FStaticShaderPlatform)*(EShaderPlatform *)&this->field_0xadc);
  if (((bVar25) || (bVar24)) && ((*(uint *)&this->field_0x10c & 0x1000) != 0)) {
    if ((*(int *)&this->field_0x18 < 1) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar24)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (*(char *)(*(longlong *)&this->field_0x10 + 0x11ec) != '\0') goto LAB_144fc7f77;
    if ((*(int *)&this->field_0x18 < 1) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar24)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((((*(char *)(*(longlong *)&this->field_0x10 + 0x11ed) != '\0') ||
         ((*(uint *)&this->field_0x10c & 0x20000000) != 0)) ||
        ((*(uint *)&this->field_0x110 & 0x4000000) != 0)) ||
       ((EVar32 = FSceneViewFamily::GetDebugViewShaderMode((FSceneViewFamily *)&this->field_0xb8),
        EVar32 != DVSM_None || (EVar29 == DepthPrepassOnly)))) goto LAB_144fc7f77;
    bVar24 = true;
  }
  else {
LAB_144fc7f77:
    bVar24 = false;
  }
  this->bRequiresShadowProjections = bVar24;
  local_138 = *(FViewInfo **)&this->field_0x10;
  iVar31 = *(int *)&this->field_0x18;
  if ((iVar31 < 0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar24)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_d8._12_4_ = uStack_12c;
  local_d8.ArrayNum = iVar31;
  local_d8.DataPtr = local_138;
  iStack_130 = iVar31;
  bVar24 = ShouldRenderHZB(this,&local_d8);
  if ((bVar24) && (EVar29 != DepthPrepassOnly)) {
    bVar24 = true;
  }
  else {
    bVar24 = false;
  }
  this->bShouldRenderHZB = bVar24;
  (**(code **)((longlong)*param_5->VisibilityTaskData + 0x20))();
  lVar44 = 0;
  if ((*(int *)&this->field_0x18 < 1) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar24)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(longlong *)(*(longlong *)&this->field_0x10 + 0x1c40) == 0) {
LAB_144fc808b:
    bVar24 = false;
  }
  else {
    if ((*(int *)&this->field_0x18 < 1) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar24)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (*(int *)(*(longlong *)(*(longlong *)&this->field_0x10 + 0x1c40) + 0x2d0) == -1)
    goto LAB_144fc808b;
    bVar24 = true;
  }
  bVar25 = FSceneRenderer::DoOcclusionQueries((FSceneRenderer *)this);
  if ((!bVar25) || (bVar24)) {
LAB_144fc810f:
    bVar24 = false;
  }
  else {
    if ((*(int *)&this->field_0x18 < 1) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar24)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pTVar17 = CVarMobileAdrenoOcclusionMode.Ref;
    if ((*(byte *)(*(longlong *)&this->field_0x10 + 0x24b8) & 0x20) != 0) goto LAB_144fc810f;
    bVar24 = IsInParallelGameThread();
    if (bVar24) {
LAB_144fc8102:
      lVar50 = lVar44;
    }
    else {
      bVar24 = IsInGameThread();
      lVar50 = 4;
      if (bVar24) goto LAB_144fc8102;
    }
    if (*(int *)((longlong)pTVar17->ShadowedValue + lVar50) == 0) goto LAB_144fc810f;
    bVar24 = true;
  }
  this->bAdrenoOcclusionMode = bVar24;
  pTVar17 = CVarMobileForceDepthResolve.Ref;
  bVar24 = IsInParallelRenderingThread();
  if ((!bVar24) &&
     (bVar24 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar24)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_200 = CONCAT44(local_200._4_4_,pTVar17->ShadowedValue[1]);
  if (0 < (longlong)*(int *)&this->field_0x18) {
    plVar42 = (longlong *)(*(longlong *)&this->field_0x10 + 0x2108);
    do {
      if ((*plVar42 != 0) && (0 < *(int *)(*plVar42 + 0x37c))) {
        bVar24 = true;
        goto LAB_144fc8199;
      }
      lVar44 = lVar44 + 1;
      plVar42 = plVar42 + 0x52e;
    } while (lVar44 < *(int *)&this->field_0x18);
  }
  bVar24 = false;
LAB_144fc8199:
  if ((*(int *)&this->field_0x18 < 1) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar25)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  bVar25 = PostProcessUsesSceneDepth(*(FViewInfo **)&this->field_0x10);
  if ((*(int *)&this->field_0x18 < 2) ||
     (*(char *)(*(longlong *)&this->field_0x10 + 0x11f5) != '\0')) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  FVar1.Platform = *(EShaderPlatform *)&this->field_0xadc;
  iVar31 = this->NumMSAASamples;
  bVar26 = MobileAllowFramebufferFetch(FVar1);
  if (bVar26) {
    bVar26 = IsVulkanPlatform(FVar1);
    if (((!bVar26) &&
        ((bVar26 = IsMetalMobilePlatform(FVar1), !bVar26 ||
         (GRHIGlobals.SupportsShaderFramebufferFetch == false)))) &&
       ((bVar26 = IsAndroidOpenGLESPlatform(FVar1), !bVar26 ||
        ((GRHIGlobals.SupportsShaderFramebufferFetch == false &&
         (GRHIGlobals.SupportsShaderDepthStencilFetch == false)))))) {
      if (FReadOnlyCVARCache::bMobileDeferredShadingValue == false) {
        if (FReadOnlyCVARCache::bMobileHDR == false) goto LAB_144fc8434;
      }
      else {
        if (FReadOnlyCVARCache::bMobileHDR != false) goto LAB_144fc828b;
LAB_144fc8434:
        if (FGenericDataDrivenShaderPlatformInfo::Infos[FVar1.Platform].bIsPreviewPlatform == 0)
        goto LAB_144fc847c;
      }
      if ((iVar31 < 2) ||
         (FGenericDataDrivenShaderPlatformInfo::Infos[FVar1.Platform].bIsPreviewPlatform != 0))
      goto LAB_144fc828b;
    }
LAB_144fc847c:
    this->bRequiresMultiPass = false;
    if (((int)local_200 == 1) || (bVar24)) goto LAB_144fc829e;
    if ((*(int *)&this->field_0x18 < 1) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar24)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((*(char *)(*(longlong *)&this->field_0x10 + 0x11ec) != '\0') ||
       ((this->bDeferredShading != false && ((bVar25 || (bVar22)))))) goto LAB_144fc829e;
    if ((*(int *)&this->field_0x18 < 1) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar24)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (((((*(int *)(*(longlong *)&this->field_0x10 + 0x1b90) == 2) || (bVar10)) ||
         (this->bIsFullDepthPrepassEnabled != false)) ||
        ((this->bShouldRenderHZB != false ||
         ((this->bAdrenoOcclusionMode != false &&
          (bVar24 = IsVulkanPlatform((FStaticShaderPlatform)*(EShaderPlatform *)&this->field_0xadc),
          bVar24)))))) || (bVar24 = FRDGBuilder::IsDumpingFrame(), bVar24)) goto LAB_144fc829e;
    bVar24 = false;
  }
  else {
LAB_144fc828b:
    this->bRequiresMultiPass = true;
LAB_144fc829e:
    bVar24 = true;
  }
  if ((1 < this->NumMSAASamples) && (this->bRequiresSceneDepthAux != false)) {
    bVar24 = false;
  }
  this->bKeepDepthContent = bVar24;
  pFVar6 = (*(FScene **)&this->field_0x8)->SkyLight;
  if ((((pFVar6 != (FSkyLightSceneProxy *)0x0) && (pFVar6->bCastShadows != 0)) &&
      (bVar24 = ShouldRenderDeferredDynamicSkyLight
                          (*(FScene **)&this->field_0x8,(FSceneViewFamily *)&this->field_0xb8),
      bVar24)) && (cVar23 = (**(code **)(*(longlong *)this + 0x80))(this), cVar23 != '\0')) {
    if ((*(int *)&this->field_0x18 < 1) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar24)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((0 < *(int *)(*(longlong *)(*(longlong *)&this->field_0x10 + 0x1ec0) + 0x20)) &&
       (GDistanceFieldAOApplyToStaticIndirect == 0)) {
      pTVar45 = TArrayView<FViewInfo_const_,int>::
                TArrayView<FViewInfo_const_,int><TArray<FViewInfo,TSizedDefaultAllocator<32>_>_&,TArray<FViewInfo,TSizedDefaultAllocator<32>_>_>
                          (&local_88,
                           (TArray<FViewInfo,TSizedDefaultAllocator<32>_> *)&this->field_0x10);
      local_c8.DataPtr = pTVar45->DataPtr;
      local_c8.ArrayNum = pTVar45->ArrayNum;
      local_c8._12_4_ = *(undefined4 *)&pTVar45->field_0xc;
      bVar24 = ShouldRenderDistanceFieldAO(&local_c8,(FEngineShowFlags *)&this->field_0x100);
      if (bVar24) {
        pTVar45 = TArrayView<FViewInfo_const_,int>::
                  TArrayView<FViewInfo_const_,int><TArray<FViewInfo,TSizedDefaultAllocator<32>_>_&,TArray<FViewInfo,TSizedDefaultAllocator<32>_>_>
                            (&local_78,
                             (TArray<FViewInfo,TSizedDefaultAllocator<32>_> *)&this->field_0x10);
        local_b8.DataPtr = pTVar45->DataPtr;
        local_b8.ArrayNum = pTVar45->ArrayNum;
        local_b8._12_4_ = *(undefined4 *)&pTVar45->field_0xc;
        bVar24 = ShouldRenderDistanceFieldLighting
                           ((FDistanceFieldSceneData *)(*(longlong *)&this->field_0x8 + 0x3f28),
                            &local_b8);
        if ((bVar24) && ((*(uint *)&this->field_0x100 & 0x20000) != 0)) {
          if ((*(int *)&this->field_0x18 < 1) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (*(char *)(*(longlong *)&this->field_0x10 + 0x11ec) == '\0') {
            bVar24 = true;
            goto LAB_144fc85ab;
          }
        }
      }
    }
  }
  bVar24 = false;
LAB_144fc85ab:
  this->bEnableDistanceFieldAO = bVar24;
  if (local_21c.bUsesCustomDepthStencil == false) {
    bVar48 = this->bKeepDepthContent;
  }
  else {
    this->bKeepDepthContent = true;
    bVar48 = 1;
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[*(ushort *)&this->field_0xadc].bIsPreviewPlatform
      != 0) {
    this->bKeepDepthContent = true;
    bVar48 = 1;
  }
  uVar27 = ((uint)bVar48 << 2 ^ *(uint *)&param_2->field_0x150) & 4 ^ *(uint *)&param_2->field_0x150
  ;
  *(uint *)&param_2->field_0x150 = uVar27;
  if (((this->bRequiresMultiPass != false) || (local_21c.bUsesCustomDepthStencil != false)) ||
     (bVar10)) {
    uVar55 = 0;
  }
  else {
    uVar55 = 0x80;
  }
  *(uint *)&param_2->field_0x150 = uVar27 & 0xffffff7f | uVar55;
  param_2->NumSamples = this->NumMSAASamples;
  param_2->ExtraSceneColorCreateFlags =
       param_2->ExtraSceneColorCreateFlags |
       (ulonglong)(-(uint)(this->bTonemapSubpassInline != false) & 0x200);
  FSceneTexturesConfig::BuildSceneColorAndDepthFlags(param_2);
  if (this->bDeferredShading != false) {
    if (((this->bRequiresMultiPass != false) || (bVar24 = FRDGBuilder::IsDumpingFrame(), bVar24)) ||
       (bVar10)) {
      bVar24 = true;
    }
    else {
      bVar24 = false;
    }
    FSceneTexturesConfig::SetupMobileGBufferFlags(param_2,bVar24);
  }
  uVar27 = ((uint)this->bRequiresSceneDepthAux << 3 ^ *(uint *)&param_2->field_0x150) & 8 ^
           *(uint *)&param_2->field_0x150;
  *(uint *)&param_2->field_0x150 = uVar27;
  if (bVar22) {
    *(uint *)&param_2->field_0x150 = uVar27 | 0x10;
  }
  lVar44 = *(longlong *)(*(longlong *)&this->field_0x8 + 0x10);
  if ((lVar44 == 0) || (*(char *)(lVar44 + 0x18a) != '\a')) {
    bVar22 = true;
  }
  else {
    bVar22 = false;
  }
  uVar27 = 0;
  if (0 < *(int *)&this->field_0x18) {
    lVar44 = 0;
    local_200 = 0;
    do {
      uVar55 = 0;
      if ((int)uVar27 < *(int *)&this->field_0x18) {
        uVar55 = ~uVar27 >> 0x1f;
      }
      if ((uVar55 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_21c = GetCustomDepthStencilUsage((FViewInfo *)(*(longlong *)&this->field_0x10 + lVar44))
      ;
      if ((bVar22) && (local_21c.bUsesCustomDepthStencil != false)) {
        uVar55 = 0x200;
      }
      else {
        uVar55 = 0;
      }
      uVar33 = 0;
      if ((int)uVar27 < *(int *)&this->field_0x18) {
        uVar33 = ~uVar27 >> 0x1f;
      }
      if ((uVar33 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar50 = *(longlong *)&this->field_0x10;
      puVar52 = (uint *)(lVar44 + 0x24b8 + lVar50);
      *puVar52 = *puVar52 & 0xfffffdff;
      puVar52 = (uint *)(lVar44 + 0x24b8 + lVar50);
      *puVar52 = *puVar52 | uVar55;
      bVar24 = this->bShouldRenderCustomDepth;
      uVar55 = 0;
      if ((int)uVar27 < *(int *)&this->field_0x18) {
        uVar55 = ~uVar27 >> 0x1f;
      }
      if ((uVar55 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      bVar24 = (bool)((byte)(*(uint *)(lVar44 + 0x24b8 + *(longlong *)&this->field_0x10) >> 9) & 1 |
                     bVar24);
      this->bShouldRenderCustomDepth = bVar24;
      if ((bVar24 == false) || (local_21c.bSamplesCustomStencil == false)) {
        uVar55 = 0;
      }
      else {
        uVar55 = 0x40;
      }
      uVar27 = uVar27 + 1;
      local_200 = local_200 + 1;
      lVar44 = lVar44 + 0x2970;
      *(uint *)&param_2->field_0x150 =
           (*(uint *)&param_2->field_0x150 & 0x40 | uVar55) ^
           *(uint *)&param_2->field_0x150 & 0xffffffbf;
    } while ((int)uVar27 < *(int *)&this->field_0x18);
  }
  lVar44 = 2;
  pFVar19 = &FSceneTexturesConfig::GlobalInstance;
  do {
    pFVar53 = param_2;
    pFVar46 = pFVar19;
    pFVar19 = (FSceneTexturesConfig *)(pFVar46->GBufferParams + 1);
    EVar12 = pFVar53->ShadingPath;
    TVar13 = pFVar53->FeatureLevel;
    EVar14 = pFVar53->ShaderPlatform;
    uVar15 = *(undefined2 *)&pFVar53->field_0xe;
    param_2 = (FSceneTexturesConfig *)(pFVar53->GBufferParams + 1);
    pFVar46->Extracts = pFVar53->Extracts;
    pFVar46->ShadingPath = EVar12;
    pFVar46->FeatureLevel = TVar13;
    pFVar46->ShaderPlatform = EVar14;
    *(undefined2 *)&pFVar46->field_0xe = uVar15;
    uVar27 = pFVar53->SmallDepthDownsampleFactor;
    uVar55 = pFVar53->NumSamples;
    (pFVar46->Extent).field0_0x0 = (pFVar53->Extent).field0_0x0;
    pFVar46->SmallDepthDownsampleFactor = uVar27;
    pFVar46->NumSamples = uVar55;
    EVar54 = pFVar53->ColorFormat;
    uVar16 = *(undefined3 *)&pFVar53->field_0x25;
    EVar8 = pFVar53->ColorCreateFlags;
    pFVar46->EditorPrimitiveNumSamples = pFVar53->EditorPrimitiveNumSamples;
    pFVar46->ColorFormat = EVar54;
    *(undefined3 *)&pFVar46->field_0x25 = uVar16;
    pFVar46->ColorCreateFlags = EVar8;
    EVar8 = pFVar53->ExtraSceneColorCreateFlags;
    pFVar46->DepthCreateFlags = pFVar53->DepthCreateFlags;
    pFVar46->ExtraSceneColorCreateFlags = EVar8;
    uVar9 = *(undefined8 *)&pFVar53->ColorClearValue;
    pFVar46->ExtraSceneDepthCreateFlags = pFVar53->ExtraSceneDepthCreateFlags;
    *(undefined8 *)&pFVar46->ColorClearValue = uVar9;
    uVar9 = *(undefined8 *)((longlong)&(pFVar53->ColorClearValue).Value + 0xc);
    *(undefined8 *)((longlong)&(pFVar46->ColorClearValue).Value + 4) =
         *(undefined8 *)((longlong)&(pFVar53->ColorClearValue).Value + 4);
    *(undefined8 *)((longlong)&(pFVar46->ColorClearValue).Value + 0xc) = uVar9;
    uVar9 = *(undefined8 *)((longlong)&(pFVar53->DepthClearValue).Value + 8);
    (pFVar46->DepthClearValue).Value.DSValue = (pFVar53->DepthClearValue).Value.DSValue;
    *(undefined8 *)((longlong)&(pFVar46->DepthClearValue).Value + 8) = uVar9;
    uVar15 = *(undefined2 *)&pFVar53->GBufferParams[0].field_0x2;
    iVar31 = pFVar53->GBufferParams[0].LegacyFormatIndex;
    bVar22 = pFVar53->GBufferParams[0].bHasVelocity;
    bVar24 = pFVar53->GBufferParams[0].bHasTangent;
    bVar25 = pFVar53->GBufferParams[0].bHasPrecShadowFactor;
    bVar10 = pFVar53->GBufferParams[0].bUsesVelocityDepth;
    bVar26 = pFVar53->GBufferParams[0].bHasSingleLayerWaterSeparatedMainLight;
    uVar16 = *(undefined3 *)&pFVar53->GBufferParams[0].field_0xd;
    pFVar46->GBufferParams[0].ShaderPlatform = pFVar53->GBufferParams[0].ShaderPlatform;
    *(undefined2 *)&pFVar46->GBufferParams[0].field_0x2 = uVar15;
    pFVar46->GBufferParams[0].LegacyFormatIndex = iVar31;
    pFVar46->GBufferParams[0].bHasVelocity = bVar22;
    pFVar46->GBufferParams[0].bHasTangent = bVar24;
    pFVar46->GBufferParams[0].bHasPrecShadowFactor = bVar25;
    pFVar46->GBufferParams[0].bUsesVelocityDepth = bVar10;
    pFVar46->GBufferParams[0].bHasSingleLayerWaterSeparatedMainLight = bVar26;
    *(undefined3 *)&pFVar46->GBufferParams[0].field_0xd = uVar16;
    lVar44 = lVar44 + -1;
  } while (lVar44 != 0);
  EVar12 = param_2->ShadingPath;
  bVar22 = pFVar53->GBufferParams[1].bHasVelocity;
  bVar24 = pFVar53->GBufferParams[1].bHasTangent;
  bVar25 = pFVar53->GBufferParams[1].bHasPrecShadowFactor;
  bVar10 = pFVar53->GBufferParams[1].bUsesVelocityDepth;
  bVar26 = pFVar53->GBufferParams[1].bHasSingleLayerWaterSeparatedMainLight;
  uVar16 = *(undefined3 *)&pFVar53->GBufferParams[1].field_0xd;
  pFVar19->Extracts = param_2->Extracts;
  pFVar19->ShadingPath = EVar12;
  pFVar46->GBufferParams[1].bHasVelocity = bVar22;
  pFVar46->GBufferParams[1].bHasTangent = bVar24;
  pFVar46->GBufferParams[1].bHasPrecShadowFactor = bVar25;
  pFVar46->GBufferParams[1].bUsesVelocityDepth = bVar10;
  pFVar46->GBufferParams[1].bHasSingleLayerWaterSeparatedMainLight = bVar26;
  *(undefined3 *)&pFVar46->GBufferParams[1].field_0xd = uVar16;
  EVar54 = pFVar53->GBufferBindings[0].GBufferA.Format;
  uVar16 = *(undefined3 *)&pFVar53->GBufferBindings[0].GBufferA.field_0x5;
  EVar8 = pFVar53->GBufferBindings[0].GBufferA.Flags;
  pFVar46->GBufferBindings[0].GBufferA.Index = pFVar53->GBufferBindings[0].GBufferA.Index;
  pFVar46->GBufferBindings[0].GBufferA.Format = EVar54;
  *(undefined3 *)&pFVar46->GBufferBindings[0].GBufferA.field_0x5 = uVar16;
  pFVar46->GBufferBindings[0].GBufferA.Flags = EVar8;
  EVar54 = pFVar53->GBufferBindings[0].GBufferB.Format;
  uVar16 = *(undefined3 *)&pFVar53->GBufferBindings[0].GBufferB.field_0x5;
  EVar8 = pFVar53->GBufferBindings[0].GBufferB.Flags;
  pFVar46->GBufferBindings[0].GBufferB.Index = pFVar53->GBufferBindings[0].GBufferB.Index;
  pFVar46->GBufferBindings[0].GBufferB.Format = EVar54;
  *(undefined3 *)&pFVar46->GBufferBindings[0].GBufferB.field_0x5 = uVar16;
  pFVar46->GBufferBindings[0].GBufferB.Flags = EVar8;
  EVar54 = pFVar53->GBufferBindings[0].GBufferC.Format;
  uVar16 = *(undefined3 *)&pFVar53->GBufferBindings[0].GBufferC.field_0x5;
  EVar8 = pFVar53->GBufferBindings[0].GBufferC.Flags;
  pFVar46->GBufferBindings[0].GBufferC.Index = pFVar53->GBufferBindings[0].GBufferC.Index;
  pFVar46->GBufferBindings[0].GBufferC.Format = EVar54;
  *(undefined3 *)&pFVar46->GBufferBindings[0].GBufferC.field_0x5 = uVar16;
  pFVar46->GBufferBindings[0].GBufferC.Flags = EVar8;
  EVar54 = pFVar53->GBufferBindings[0].GBufferD.Format;
  uVar16 = *(undefined3 *)&pFVar53->GBufferBindings[0].GBufferD.field_0x5;
  EVar8 = pFVar53->GBufferBindings[0].GBufferD.Flags;
  pFVar46->GBufferBindings[0].GBufferD.Index = pFVar53->GBufferBindings[0].GBufferD.Index;
  pFVar46->GBufferBindings[0].GBufferD.Format = EVar54;
  *(undefined3 *)&pFVar46->GBufferBindings[0].GBufferD.field_0x5 = uVar16;
  pFVar46->GBufferBindings[0].GBufferD.Flags = EVar8;
  EVar54 = pFVar53->GBufferBindings[0].GBufferE.Format;
  uVar16 = *(undefined3 *)&pFVar53->GBufferBindings[0].GBufferE.field_0x5;
  EVar8 = pFVar53->GBufferBindings[0].GBufferE.Flags;
  pFVar46->GBufferBindings[0].GBufferE.Index = pFVar53->GBufferBindings[0].GBufferE.Index;
  pFVar46->GBufferBindings[0].GBufferE.Format = EVar54;
  *(undefined3 *)&pFVar46->GBufferBindings[0].GBufferE.field_0x5 = uVar16;
  pFVar46->GBufferBindings[0].GBufferE.Flags = EVar8;
  if (EVar29 != DepthPrepassOnly) {
    UpdateSkyIrradianceGpuBuffer
              (param_1,(FEngineShowFlags *)&this->field_0x100,
               *(FSkyLightSceneProxy **)(*(longlong *)&this->field_0x8 + 0x2b38),
               (TRefCountPtr<FRDGPooledBuffer> *)(*(longlong *)&this->field_0x8 + 0x2b40));
    bVar22 = ShouldRenderSkyAtmosphere
                       (*(FScene **)&this->field_0x8,(FEngineShowFlags *)&this->field_0x100);
    if (bVar22) {
      FSceneRenderer::InitSkyAtmosphereForViews
                ((FSceneRenderer *)this,(FRHICommandListImmediate *)local_1f0,param_1);
    }
  }
  uVar27 = *(int *)&this->field_0x18 - 1;
  local_1b8.Resources.AllocatorInstance.Data = (FResource *)0x0;
  local_1b8.Resources.ArrayNum = 0;
  local_1b8.Resources.ArrayMax = 0;
  if (-1 < (int)uVar27) {
    lVar44 = (longlong)(int)uVar27 * 0x2970;
    do {
      uVar55 = 0;
      if ((int)uVar27 < *(int *)&this->field_0x18) {
        uVar55 = ~uVar27 >> 0x1f;
      }
      if ((uVar55 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar40 = (FViewInfo *)(*(longlong *)&this->field_0x10 + lVar44);
      FViewInfo::UpdatePreExposure(pFVar40);
      FViewInfo::InitRHIResources(pFVar40,0);
      lVar44 = lVar44 + -0x2970;
      uVar27 = uVar27 - 1;
    } while (-1 < (int)uVar27);
  }
  uVar27 = 0;
  if (0 < *(int *)&this->field_0x3e8) {
    lVar44 = 0;
    do {
      uVar55 = 0;
      if ((int)uVar27 < *(int *)&this->field_0x3e8) {
        uVar55 = ~uVar27 >> 0x1f;
      }
      if ((uVar55 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar50 = *(longlong *)&this->field_0x3e0;
      iVar31 = *(int *)(lVar50 + 0x338 + lVar44);
      pFVar40 = *(FViewInfo **)(lVar50 + 0x330 + lVar44);
      pFVar56 = pFVar40 + iVar31;
      while( true ) {
        if (*(int *)(lVar50 + 0x338 + lVar44) != iVar31) {
          local_218 = 0;
          `TCheckedPointerIterator<FViewInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_218);
        }
        if (pFVar40 == pFVar56) break;
        FViewInfo::InitRHIResources(pFVar40,0);
        pFVar40 = pFVar40 + 1;
      }
      uVar27 = uVar27 + 1;
      lVar44 = lVar44 + 0x398;
    } while ((int)uVar27 < *(int *)&this->field_0x3e8);
  }
  if (EVar29 != DepthPrepassOnly) {
    if ((*(uint *)&this->field_0x108 >> 0x17 & 1) == 0) {
      PrepareViewVisibilityLists(this);
    }
    else {
      pFVar47 = InitDynamicShadows(this,param_1,param_3);
      param_5->DynamicShadows = pFVar47;
    }
    puVar43 = (undefined8 *)
              (**(code **)((longlong)*param_5->VisibilityTaskData + 0x28))
                        (param_5->VisibilityTaskData,local_68);
    local_a8.DataPtr = (FViewCommands *)*puVar43;
    local_a8._8_8_ = puVar43[1];
    SetupMobileBasePassAfterShadowInit(this,DepthWrite_StencilWrite,&local_a8,param_3);
    if (local_1d0 != (FILCUpdatePrimTaskData *)0x0) {
      FIndirectLightingCache::FinalizeCacheUpdates
                (&(*(FScene **)&this->field_0x8)->IndirectLightingCache,*(FScene **)&this->field_0x8
                 ,(FSceneRenderer *)this,local_1d0);
    }
  }
  FRDGExternalAccessQueue::Submit(&local_1b8,param_1);
  iStack_198 = 0;
  local_180 = 0;
  uVar27 = PersistentViewUniformBufferExtensions.Elements._40_4_;
  uStack_184 = 0;
  if (uVar27 != 0) {
    puVar52 = (uint *)&PersistentViewUniformBufferExtensions.Elements.field_0x10;
    if (PersistentViewUniformBufferExtensions.Elements._32_8_ != 0) {
      puVar52 = (uint *)PersistentViewUniformBufferExtensions.Elements._32_8_;
    }
    uVar55 = *puVar52;
    while (uVar55 == 0) {
      lVar44 = (longlong)iStack_198;
      local_180 = local_180 + 0x20;
      iStack_198 = iStack_198 + 1;
      uStack_184 = uVar27;
      if ((int)((uVar27 - 1) + ((int)(uVar27 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_198)
      goto LAB_144fc8c20;
      uVar55 = puVar52[lVar44 + 1];
    }
    local_1e8 = (ulonglong)(-uVar55 & uVar55);
    uVar49 = local_1e8 * 2 + 1;
    lVar44 = 0x3f;
    if (uVar49 != 0) {
      for (; uVar49 >> lVar44 == 0; lVar44 = lVar44 + -1) {
      }
    }
    local_1a8 = (int)lVar44;
    uStack_184 = local_1a8 + -1 + local_180;
    if ((int)uVar27 < (int)uStack_184) {
      uStack_184 = uVar27;
    }
  }
LAB_144fc8c20:
  local_190 = 0x154bd4fe0;
  local_1a0 = &PersistentViewUniformBufferExtensions;
  bVar48 = PersistentViewUniformBufferExtensions.Elements._40_1_;
  uStack_194 = (undefined4)local_1e8;
  uVar55 = uVar27 & 0xffffffe0;
  uStack_17c = local_3c;
  iStack_178 = PersistentViewUniformBufferExtensions.Elements._8_4_ -
               PersistentViewUniformBufferExtensions.Elements._52_4_;
  uStack_188 = 0xffffffff;
  TStack_168.CurrentBitIndex = uStack_184;
  TStack_168.UnvisitedBitMask = 0xffffffff;
  TStack_168._padding_ = CONCAT44(uStack_194,iStack_198);
  local_170 = &PersistentViewUniformBufferExtensions;
  iVar31 = (int)uVar27 >> 5;
  TStack_168._28_4_ = local_3c;
  TStack_168.BaseBitIndex = local_180;
  uStack_148 = CONCAT44(uStack_174,iStack_178);
  TStack_168.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)
       &PersistentViewUniformBufferExtensions.Elements.field_0x10;
  uVar33 = uVar27;
  if ((int)uVar27 < 0) {
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x7af,L"");
    if (bVar22) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar33 = PersistentViewUniformBufferExtensions.Elements._40_4_;
  }
  if (uVar27 != uVar33) {
    lVar44 = 0x154bd4fe0;
    if (PersistentViewUniformBufferExtensions.Elements._32_8_ != 0) {
      lVar44 = PersistentViewUniformBufferExtensions.Elements._32_8_;
    }
    uVar27 = -1 << (bVar48 & 0x1f) & *(uint *)(lVar44 + (longlong)iVar31 * 4);
    while (uVar27 == 0) {
      lVar50 = (longlong)iVar31;
      uVar55 = uVar55 + 0x20;
      iVar31 = iVar31 + 1;
      uVar27 = uVar33;
      if ((int)((uVar33 - 1) + ((int)(uVar33 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar31)
      goto LAB_144fc8d50;
      uVar27 = *(uint *)(lVar44 + 4 + lVar50 * 4);
    }
    uVar49 = (ulonglong)(-uVar27 & uVar27) * 2 + 1;
    lVar44 = 0x3f;
    if (uVar49 != 0) {
      for (; uVar49 >> lVar44 == 0; lVar44 = lVar44 + -1) {
      }
    }
    local_1a4 = (int)lVar44;
    uVar27 = local_1a4 + -1 + uVar55;
    if ((int)uVar33 < (int)uVar27) {
      uVar27 = uVar33;
    }
  }
LAB_144fc8d50:
  while( true ) {
    pTVar18 = local_170;
    if (*(int *)&(local_170->Elements).field_0x8 - *(int *)&(local_170->Elements).field_0x34 !=
        (int)uStack_148) {
      local_217[0] = 0;
      `TSparseArray<TSparseSetElement<IPersistentViewUniformBufferExtension_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_217);
    }
    pFVar3 = local_1f0;
    FVar4 = local_210;
    if (((TStack_168.CurrentBitIndex == uVar27) &&
        (TStack_168.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)
         &PersistentViewUniformBufferExtensions.Elements.field_0x10)) &&
       (pTVar18 == &PersistentViewUniformBufferExtensions)) break;
    plVar42 = *(longlong **)
               (*(longlong *)&pTVar18->Elements + (longlong)TStack_168.CurrentBitIndex * 0x10);
    (**(code **)*plVar42)(plVar42);
    uVar55 = 0;
    if (0 < *(int *)&this->field_0x18) {
      do {
        pcVar7 = *(code **)(*plVar42 + 8);
        uVar33 = 0;
        if ((int)uVar55 < *(int *)&this->field_0x18) {
          uVar33 = ~uVar55 >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        (*pcVar7)(plVar42,(longlong)(int)uVar55 * 0x2970 + *(longlong *)&this->field_0x10);
        uVar55 = uVar55 + 1;
      } while ((int)uVar55 < *(int *)&this->field_0x18);
    }
    TStack_168.UnvisitedBitMask = TStack_168.UnvisitedBitMask & ~TStack_168._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_168);
  }
  if (EVar29 != DepthPrepassOnly) {
    if (((this->bDeferredShading != false) || (this->bEnableClusteredLocalLights != false)) ||
       (this->bEnableClusteredReflections != false)) {
      FSceneRenderer::SetupSceneReflectionCaptureBuffer
                ((FSceneRenderer *)this,(FRHICommandListImmediate *)local_1f0);
    }
    UpdateSkyReflectionUniformBuffer(this,pFVar3);
    FSceneRenderer::UpdatePrimitiveIndirectLightingCacheBuffers((FSceneRenderer *)this,pFVar3);
    if ((*(int *)&this->field_0x18 < 1) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar22)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    UpdateDirectionalLightUniformBuffers(this,param_1,*(FViewInfo **)&this->field_0x10);
  }
  if ((local_1b8.Resources.ArrayNum != 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                          ,0x4fe,L"Submit must be called before destruction."), bVar22)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar38 = local_1e0;
  if (local_1e0 != (FRDGScope *)0x0) {
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::EndGPU(local_1e0,(FRHIComputeCommandList *)param_1->_padding_);
      FRDGScope::EndCPU(pFVar38,(FRHIComputeCommandList *)param_1->_padding_,false);
    }
    FRDGScope::ImmediateEnd(pFVar38,(FRDGScopeState *)param_1);
    *(uint *)&param_1->_padding_ = (uint)param_1->_padding_ & 0xfffffff7;
    param_1->_padding_ = *(longlong *)param_1->_padding_;
  }
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar20) {
    FThreadStats::AddMessage(FVar4,CycleScopeEnd);
  }
  if (local_f8 != '\0') {
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_108);
  }
  return;
}

// PostRenderBasePass @ 144fcd360

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FMobileSceneRenderer::PostRenderBasePass
          (FMobileSceneRenderer *this,FRHICommandList *param_1,FViewInfo *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<_protected:_void___cdecl_FMobileSceneRenderer::PostRenderBasePass(FRHICommandList_&,FViewInfo_&)_::_5_::FStat_STAT_FMobileSceneRenderer_ViewExtensionPostRenderBasePass>
  FVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar11;
  FName FVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  FColor_u_0 local_res8 [2];
  FName local_res20;
  LARGE_INTEGER local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FStatMessage local_50;
  
  if (*(int *)&this->field_0x1a8 < 2) {
    return;
  }
  if (!__CsvProfilerStat2738) {
    FCsvProfilerTrace::OutputInlineStatExclusive("ViewExtensionPostRenderBasePass");
    __CsvProfilerStat2738 = true;
  }
  FCsvProfiler::BeginExclusiveStat
            ("ViewExtensionPostRenderBasePass","CSV_ViewExtensionPostRenderBasePass");
  uVar14 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FMobileSceneRenderer_ViewExtensionPostRenderBasePass ==
        (FThreadSafeStaticStat<_protected:_void___cdecl_FMobileSceneRenderer::PostRenderBasePass(FRHICommandList_&,FViewInfo_&)_::_5_::FStat_STAT_FMobileSceneRenderer_ViewExtensionPostRenderBasePass>
         )0x0) {
      pFVar9 = ::FName::FName(&local_70,"STAT_FMobileSceneRenderer_ViewExtensionPostRenderBasePass")
      ;
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_FMobileSceneRenderer_ViewExtensionPostRenderBasePass,*pFVar9,
                 L"STAT_FMobileSceneRenderer_ViewExtensionPostRenderBasePass","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar10 = StatPtr_STAT_FMobileSceneRenderer_ViewExtensionPostRenderBasePass;
  if (StatPtr_STAT_FMobileSceneRenderer_ViewExtensionPostRenderBasePass ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_FMobileSceneRenderer::PostRenderBasePass(FRHICommandList_&,FViewInfo_&)_::_5_::FStat_STAT_FMobileSceneRenderer_ViewExtensionPostRenderBasePass>
       )0x0) {
    pFVar9 = ::FName::FName(&local_68,"STAT_FMobileSceneRenderer_ViewExtensionPostRenderBasePass");
    FVar10 = (FThreadSafeStaticStat<_protected:_void___cdecl_FMobileSceneRenderer::PostRenderBasePass(FRHICommandList_&,FViewInfo_&)_::_5_::FStat_STAT_FMobileSceneRenderer_ViewExtensionPostRenderBasePass>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FMobileSceneRenderer_ViewExtensionPostRenderBasePass,*pFVar9
                          ,L"STAT_FMobileSceneRenderer_ViewExtensionPostRenderBasePass",
                          "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                          false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar10;
  bVar4 = false;
  bVar6 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar8 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar11.Value;
        local_res20.Number = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MobileShadingRenderer.cpp"
                   ,0xab3);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_78.s.LowPart = FVar11.Value;
      local_78.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar5 = true;
      goto LAB_144fcd520;
    }
  }
  bVar5 = false;
  FVar12 = local_60;
LAB_144fcd520:
  uVar15 = uVar14;
  if (0 < *(int *)&this->field_0x1a8) {
    do {
      uVar13 = (uint)uVar14;
      uVar8 = 0;
      if ((int)uVar13 < *(int *)&this->field_0x1a8) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      plVar2 = *(longlong **)(uVar15 + *(longlong *)&this->field_0x1a0);
      (**(code **)(*plVar2 + 0x58))(plVar2,param_1);
      uVar14 = (ulonglong)(uVar13 + 1);
      uVar15 = uVar15 + 0x10;
    } while ((int)(uVar13 + 1) < *(int *)&this->field_0x1a8);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_50.NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      local_50.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_78);
      local_50.StatData.Pad[4] = '\0';
      local_50.StatData.Pad[5] = '\0';
      local_50.StatData.Pad[6] = '\0';
      local_50.StatData.Pad[7] = '\0';
      local_50.StatData.Pad[0] = local_78.s.LowPart._0_1_;
      local_50.StatData.Pad[1] = local_78.s.LowPart._1_1_;
      local_50.StatData.Pad[2] = local_78.s.LowPart._2_1_;
      local_50.StatData.Pad[3] = local_78.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_50);
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
  FCsvProfiler::EndExclusiveStat("ViewExtensionPostRenderBasePass");
  return;
}

// PreTonemapMSAA @ 144fcd770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */

void __thiscall
FMobileSceneRenderer::PreTonemapMSAA
          (FMobileSceneRenderer *this,FRHICommandList *param_1,FMinimalSceneTextures *param_2)

{
  TIntPoint<int>_u_0_s_0 TVar1;
  FShaderMapResource *pFVar2;
  code *pcVar3;
  bool bVar4;
  Type TVar5;
  FGlobalShaderMap *this_00;
  FShaderType *pFVar6;
  FName FVar7;
  atomic<FRHIShader_*> aVar8;
  atomic<FRHIShader_*> aVar9;
  FStaticShaderPlatform FVar10;
  float fVar11;
  float fVar12;
  undefined1 auStackY_238 [32];
  int iStack_1c4;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_1b8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_1a8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_198;
  undefined1 local_188 [8];
  undefined1 local_180 [8];
  FString local_178;
  FString local_168;
  FGraphicsPipelineStateInitializer local_158;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_238;
  if (((GRHIGlobals.SupportsRenderTargetFormat_PF_FloatRGBA.Value != false) &&
      (GRHIGlobals.SupportsShaderFramebufferFetch)) && ((this->field_0x100 & 1) != 0)) {
    TVar5 = FSceneViewFamily::GetFeatureLevel((FSceneViewFamily *)&this->field_0xb8);
    if (TVar5 == Num) {
      FVar10.Platform = SP_NumPlatforms;
    }
    else {
      FVar10.Platform = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)TVar5];
    }
    bVar4 = IsMetalMobilePlatform(FVar10);
    if (((bVar4) && (1 < this->NumMSAASamples)) && (this->bGammaSpace == false)) {
      TVar1 = (param_2->Config).Extent.field0_0x0._s_0;
      this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                                   [*(int *)&this->field_0xad8]);
      pFVar6 = (FShaderType *)FScreenVS::GetStaticType();
      FGlobalShaderMap::GetShader(this_00,&local_1b8,pFVar6,0);
      if (local_1b8.ShaderContent == (FShader *)0x0) {
        FVar7 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_188);
        ::FName::ToString((FName *)FVar7,&local_178);
        FScreenVS::GetStaticType();
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Shader.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.Data.AllocatorInstance.Data);
        }
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      FScreenVS::GetStaticType();
      pFVar6 = (FShaderType *)FPreTonemapMSAA_Mobile::GetStaticType();
      FGlobalShaderMap::GetShader(this_00,&local_1a8,pFVar6,0);
      if (local_1a8.ShaderContent == (FShader *)0x0) {
        FVar7 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_180);
        ::FName::ToString((FName *)FVar7,&local_168);
        FPreTonemapMSAA_Mobile::GetStaticType();
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Shader.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      FPreTonemapMSAA_Mobile::GetStaticType();
      aVar8 = (atomic<FRHIShader_*>)0x0;
      local_158.RenderTargetsEnabled = 0;
      local_158.RenderTargetFormats.Elements[0] = '\0';
      local_158.RenderTargetFormats.Elements[1] = '\0';
      local_158.RenderTargetFormats.Elements[2] = '\0';
      local_158.RenderTargetFormats.Elements[3] = '\0';
      local_158.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
      local_158.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
      local_158.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
      local_158.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
      local_158.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
      local_158.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
      local_158.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
      local_158.BlendState = (FRHIBlendState *)0x0;
      local_158.RasterizerState = (FRHIRasterizerState *)0x0;
      local_158.DepthStencilState = (FRHIDepthStencilState *)0x0;
      local_158.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
      local_158.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
      local_158.RenderTargetFlags.Elements[0] = None;
      local_158.RenderTargetFlags.Elements[1] = None;
      local_158.RenderTargetFlags.Elements[2] = None;
      local_158.RenderTargetFlags.Elements[3] = None;
      local_158.RenderTargetFlags.Elements[4] = None;
      local_158.RenderTargetFlags.Elements[5] = None;
      local_158.RenderTargetFlags.Elements[6] = None;
      local_158.RenderTargetFlags.Elements[7] = None;
      local_158.RenderTargetFormats.Elements[4] = '\0';
      local_158.RenderTargetFormats.Elements[5] = '\0';
      local_158.RenderTargetFormats.Elements[6] = '\0';
      local_158.RenderTargetFormats.Elements[7] = '\0';
      local_158.DepthStencilTargetFormat = PF_Unknown;
      local_158.DepthStencilTargetFlag = None;
      local_158.DepthTargetLoadAction = ENoAction;
      local_158.DepthTargetStoreAction = ENoAction;
      local_158.StencilTargetLoadAction = ENoAction;
      local_158.StencilTargetStoreAction = ENoAction;
      local_158.DepthStencilAccess.Value = DepthNop;
      local_158.NumSamples = 0;
      local_158.SubpassHint = None;
      local_158.SubpassIndex = '\0';
      local_158.ConservativeRasterization = Disabled;
      local_158.bDepthBounds = false;
      local_158.MultiViewCount = '\0';
      local_158.bHasFragmentDensityAttachment = false;
      local_158.bAllowVariableRateShading = true;
      local_158.ShadingRate = VRSSR_1x1;
      local_158.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
      local_158.StatePrecachePSOHash = 0;
      FRHICommandList::ApplyCachedRenderTargets(param_1,&local_158);
      local_158.BlendState =
           TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,0,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI.Reference;
      local_158.RasterizerState =
           TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
           ::StaticResource.StateRHI.Reference;
      local_158.DepthStencilState =
           TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
           ::StaticResource.StateRHI.Reference;
      local_158.BoundShaderState.VertexDeclarationRHI =
           (FRHIVertexDeclaration *)GFilterVertexDeclaration._32_8_;
      if (local_1b8.ShaderContent != (FShader *)0x0) {
        pFVar2 = ((local_1b8.ShaderMap)->Resource).Reference;
        if ((pFVar2 == (FShaderMapResource *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Resource",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x426,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        aVar8 = (pFVar2->RHIShaders).Ptr[(local_1b8.ShaderContent)->ResourceIndex];
        if ((aVar8 == (atomic<FRHIShader_*>)0x0) &&
           (aVar8 = (atomic<FRHIShader_*>)
                    FShaderMapResource::CreateShaderOrCrash
                              (pFVar2,(local_1b8.ShaderContent)->ResourceIndex,true),
           aVar8 == (atomic<FRHIShader_*>)0x0)) {
          if (4 < (byte)LogShaders._0_1_) {
            if (((local_1b8.ShaderMap)->PointerTable == (FShaderMapPointerTable *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("PointerTable",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                   ,0x9b4,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FShader::GetType(local_1b8.ShaderContent,(local_1b8.ShaderMap)->PointerTable);
            UE::Logging::Private::BasicLog<5>
                      ((FStaticBasicLogRecord *)
                       &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FScreenVS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                        ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
          }
          aVar8 = (atomic<FRHIShader_*>)0x0;
        }
      }
      aVar9 = (atomic<FRHIShader_*>)0x0;
      local_158.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)aVar8;
      if (local_1a8.ShaderContent != (FShader *)0x0) {
        pFVar2 = ((local_1a8.ShaderMap)->Resource).Reference;
        if ((pFVar2 == (FShaderMapResource *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Resource",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x426,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        aVar9 = (pFVar2->RHIShaders).Ptr[(local_1a8.ShaderContent)->ResourceIndex];
        if ((aVar9 == (atomic<FRHIShader_*>)0x0) &&
           (aVar9 = (atomic<FRHIShader_*>)
                    FShaderMapResource::CreateShaderOrCrash
                              (pFVar2,(local_1a8.ShaderContent)->ResourceIndex,true),
           aVar9 == (atomic<FRHIShader_*>)0x0)) {
          if (4 < (byte)LogShaders._0_1_) {
            if (((local_1a8.ShaderMap)->PointerTable == (FShaderMapPointerTable *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("PointerTable",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                   ,0x9b4,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FShader::GetType(local_1a8.ShaderContent,(local_1a8.ShaderMap)->PointerTable);
            UE::Logging::Private::BasicLog<5>
                      ((FStaticBasicLogRecord *)
                       &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FPreTonemapMSAA_Mobile,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                        ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
          }
          aVar9 = (atomic<FRHIShader_*>)0x0;
        }
      }
      local_158.PrimitiveType = PT_TriangleList;
      local_158.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)aVar9;
      SetGraphicsPipelineState(param_1,&local_158,0,CheckApply,true);
      iStack_1c4 = TVar1.Y;
      fVar11 = (float)iStack_1c4;
      fVar12 = (float)TVar1.X;
      FRHICommandList::SetViewport(param_1,0.0,0.0,0.0,fVar12,fVar11,__real_3f800000);
      local_198.ShaderContent = local_1b8.ShaderContent;
      local_198.ShaderMap = local_1b8.ShaderMap;
      DrawRectangle(param_1,0.0,0.0,fVar12,fVar11,0.0,0.0,fVar12,fVar11,(TIntPoint<int>)TVar1,
                    (TIntPoint<int>)TVar1,&local_198,EDRF_UseTriangleOptimization,1);
    }
  }
  return;
}

// PrepareViewVisibilityLists @ 144fce410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall FMobileSceneRenderer::PrepareViewVisibilityLists(FMobileSceneRenderer *this)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  
  lVar6 = *(longlong *)&this->field_0x10;
  iVar1 = *(int *)&this->field_0x18;
  piVar5 = (int *)(lVar6 + 0x230c);
  lVar8 = (longlong)iVar1 * 0x2970 + lVar6;
  while( true ) {
    if (*(int *)&this->field_0x18 != iVar1) {
      `TCheckedPointerIterator<FViewInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (lVar6 == lVar8) break;
    piVar5[-9] = piVar5[-0x1a9];
    uVar2 = piVar5[-0x1a9] + 0x1f;
    uVar7 = uVar2 >> 5;
    if (uVar2 >> 5 != 0) {
      if (piVar5[-8] + 0x1fU >> 5 < uVar7) {
        TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
        ::ForElementType<unsigned_int>::ResizeAllocation
                  ((ForElementType<unsigned_int> *)(piVar5 + -0xf),0,uVar7,4);
        piVar5[-8] = uVar7 << 5;
      }
      piVar4 = *(int **)(piVar5 + -0xb);
      if (*(int **)(piVar5 + -0xb) == (int *)0x0) {
        piVar4 = piVar5 + -0xf;
      }
      memset(piVar4,0,(ulonglong)uVar7 << 2);
      uVar7 = piVar5[-9] >> 0x1f & 0x1f;
      uVar2 = piVar5[-9] + uVar7;
      iVar3 = (uVar2 & 0x1f) - uVar7;
      if (iVar3 != 0) {
        piVar4 = piVar5 + -0xf;
        if (*(int **)(piVar5 + -0xb) != (int *)0x0) {
          piVar4 = *(int **)(piVar5 + -0xb);
        }
        piVar4[(int)uVar2 >> 5] =
             piVar4[(int)uVar2 >> 5] & 0xffffffffU >> (0x20U - (char)iVar3 & 0x1f);
      }
    }
    piVar5[-1] = piVar5[-0x175];
    uVar2 = piVar5[-0x175] + 0x1f;
    uVar7 = uVar2 >> 5;
    if (uVar2 >> 5 != 0) {
      if (*piVar5 + 0x1fU >> 5 < uVar7) {
        TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
        ::ForElementType<unsigned_int>::ResizeAllocation
                  ((ForElementType<unsigned_int> *)(piVar5 + -7),0,uVar7,4);
        *piVar5 = uVar7 << 5;
      }
      piVar4 = *(int **)(piVar5 + -3);
      if (piVar4 == (int *)0x0) {
        piVar4 = piVar5 + -7;
      }
      memset(piVar4,0,(ulonglong)uVar7 << 2);
      uVar7 = piVar5[-1] >> 0x1f & 0x1f;
      uVar2 = piVar5[-1] + uVar7;
      iVar3 = (uVar2 & 0x1f) - uVar7;
      if (iVar3 != 0) {
        piVar4 = *(int **)(piVar5 + -3);
        if (piVar4 == (int *)0x0) {
          piVar4 = piVar5 + -7;
        }
        piVar4[(int)uVar2 >> 5] =
             piVar4[(int)uVar2 >> 5] & 0xffffffffU >> (0x20U - (char)iVar3 & 0x1f);
      }
    }
    if ((TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)(piVar5 + 1) !=
        (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)(piVar5 + -0x17b)) {
      TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
      ::
      Assign<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                ((TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                  *)(piVar5 + 1),
                 (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                  *)(piVar5 + -0x17b));
    }
    lVar6 = lVar6 + 0x2970;
    piVar5 = piVar5 + 0xa5c;
  }
  return;
}

// Render @ 144fcf0a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

void __thiscall
FMobileSceneRenderer::Render
          (FMobileSceneRenderer *this,FRDGBuilder *param_1,FSceneRenderUpdateInputs *param_2)

{
  int *piVar1;
  uint *puVar2;
  atomic<unsigned_int> *paVar3;
  FViewFamilyInfo **ppFVar4;
  char cVar5;
  FRHIGPUMask FVar6;
  FRHIComputeCommandList *this_00;
  FViewFamilyInfo *this_01;
  FScene *pFVar7;
  FLightSceneInfo *pFVar8;
  TIntPoint<int> TVar9;
  longlong *plVar10;
  atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> this_02;
  FRDGTexture *pFVar11;
  FInstanceCullingOcclusionQueryRenderer *this_03;
  code *pcVar12;
  FRDGTexture *pFVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  TConsoleVariableData<int> *pTVar18;
  void *pvVar19;
  TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag> this_04;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  char cVar26;
  EShaderPlatform EVar27;
  ERendererOutput EVar28;
  uint uVar29;
  atomic<unsigned_int> aVar30;
  int iVar31;
  EDebugViewShaderMode EVar32;
  uint uVar33;
  FRDGScope *pFVar34;
  FRHIBreadcrumbAllocator *pFVar35;
  FRHIBreadcrumbNode *pFVar36;
  TArrayView<FViewInfo,int> *pTVar37;
  IConsoleManager *pIVar38;
  FSkyAtmosphereRenderSceneInfo *pFVar39;
  TStatId TVar40;
  FVirtualTextureSystem *pFVar41;
  TUniquePtr<FVirtualTextureUpdater,TDefaultDelete<FVirtualTextureUpdater>_> TVar42;
  TArrayView<FViewInfo_const_,int> *pTVar43;
  FVirtualShadowMapArrayCacheManager *pFVar44;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> TVar45;
  TIntPoint<unsigned_int> *pTVar46;
  TStridedView<FSceneView_const_,int> *pTVar47;
  FGPUSortManager *pFVar48;
  FName FVar49;
  undefined8 *puVar50;
  TRDGUniformBuffer<FMobileSceneTextureUniformParameters> *pTVar51;
  FHairStrandsBookmarkParameters *pFVar52;
  FSceneTextureShaderParameters *pFVar53;
  FName *pFVar54;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FMobileSceneRenderer::Render(FRDGBuilder_&,FSceneRenderUpdateInputs_const_*)_::_151_::FStat_STAT_CustomRenderPass>
  FVar55;
  FThreadStats *this_05;
  FThreadStatsPool *this_06;
  FDistanceFieldAOParameters *pFVar56;
  FDBufferTextures *pFVar57;
  FRendererModule *this_07;
  FThreadSafeStaticStat<FStat_STAT_FinishRenderViewTargetTime> FVar58;
  FNameEntryId FVar59;
  FViewInfo *pFVar60;
  longlong lVar61;
  FSceneTextures *pFVar62;
  FViewInfo *pFVar63;
  FViewFamilyInfo **ppFVar64;
  longlong lVar65;
  FViewInfo *pFVar66;
  TArray<FViewInfo,TSizedDefaultAllocator<32>_> *pTVar67;
  undefined8 *puVar68;
  wchar_t *pwVar69;
  uint7 uVar71;
  FSortedLightSetSceneInfo *pFVar70;
  ulonglong uVar72;
  FGPUScene *this_08;
  float fVar73;
  undefined1 auStackY_918 [32];
  undefined1 local_8a8;
  undefined1 local_8a7;
  undefined1 local_8a6;
  undefined1 local_8a5;
  undefined1 local_8a4 [4];
  FSceneTextures *local_8a0;
  uint local_898;
  uint local_894;
  uint local_890;
  FName local_888;
  FName local_880;
  FRDGTexture *local_878;
  undefined1 local_870 [24];
  FRDGExternalAccessQueue local_858;
  TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag> local_848;
  FUniqueRequestList *local_840;
  TIntPoint<unsigned_int> *local_838;
  undefined8 *local_830;
  FTaskHandle local_828;
  FGPUScene *local_820;
  FColor_u_0 local_818 [2];
  FName local_810;
  byte local_808;
  FRHIComputeCommandList *local_800;
  FColor_u_0 local_7f8 [2];
  FName local_7f0;
  byte local_7e8;
  FVirtualTextureUpdater *local_7e0;
  FName local_7d8;
  uint local_7d0;
  uint uStack_7cc;
  ulonglong local_7c8;
  FName local_7c0;
  FName local_7b8;
  FName local_7a8;
  TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_> local_798;
  undefined4 local_788;
  undefined4 uStack_784;
  int iStack_780;
  int iStack_77c;
  FUpdateExposureCompensationCurveLUTTaskData local_778;
  TRDGEventScopeGuard<FRDGScope_RHI> local_768;
  char local_758;
  TRDGEventScopeGuard<FRDGScope_RHI> local_750;
  char local_740;
  FScriptContainerElement *local_738;
  TRDGEventScopeGuard<FRDGScope_RHI> local_730;
  char local_720;
  TRDGEventScopeGuard<FRDGScope_RHI> local_718;
  char local_708;
  LARGE_INTEGER local_700;
  FStatMessage local_6f8;
  FInitViewTaskDatas local_6e8;
  TRDGEventScopeGuard<FRDGScope_RHI> local_6d8;
  char local_6c8;
  FScope local_6c0;
  TRDGEventScopeGuard<FRDGScope_RHI> local_6b8;
  undefined1 local_6a8;
  FMobileBasePassTextures local_698;
  FSourceLocation local_648;
  FSourceLocation local_628;
  FMobilePostProcessingInputs local_608;
  ForElementType<FRDGBuilder::FExtractedTexture> local_5e8;
  int iStack_5e0;
  int iStack_5dc;
  ForElementType<FRDGBuilder::FExtractedBuffer> local_5d8;
  int iStack_5d0;
  int iStack_5cc;
  FViewInfo *local_5c8;
  int iStack_5c0;
  undefined4 uStack_5bc;
  FViewInfo *local_5b8;
  int iStack_5b0;
  undefined4 uStack_5ac;
  FViewInfo *local_5a8;
  int iStack_5a0;
  undefined4 uStack_59c;
  TRDGEventScopeGuard<FRDGScope_CSVExclusive> local_598;
  FViewInfo **local_588;
  int iStack_580;
  undefined4 uStack_57c;
  FPackedView *local_578;
  int iStack_570;
  undefined4 uStack_56c;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<7,int>_const_*,std::tuple<int_&>_>
  local_568;
  longlong local_558;
  int iStack_550;
  undefined4 uStack_54c;
  TRDGEventScopeGuard<FRDGScope_CSVExclusive> local_548;
  FViewInfo *local_538;
  int iStack_530;
  undefined4 uStack_52c;
  FViewInfo *local_528;
  int iStack_520;
  undefined4 uStack_51c;
  FViewInfo *local_518;
  int iStack_510;
  undefined4 uStack_50c;
  char *local_508;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  TGPUStat<TRHIGPUStatNameProvider_MobileSceneRender> *local_4f8;
  wchar_t *pwStack_4f0;
  FViewInfo *local_4e8;
  int iStack_4e0;
  undefined4 uStack_4dc;
  FRHIBreadcrumbScope local_4d8;
  char local_4c8;
  FVirtualTextureUpdateSettings local_4c0;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[24],int_&,wchar_t_const_*_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[24],int_&,wchar_t_const_*_&&>_>_>
  local_498;
  TArrayView<FViewInfo_*_const,int> local_468;
  TArrayView<Nanite::FPackedView_const_,int> local_458;
  TArrayView<Nanite::FRasterResults_const_,int> local_448;
  TArrayView<FViewInfo,int> local_438;
  FRDGTextureMSAA local_428;
  TArrayView<FViewInfo_const_,int> local_418;
  TArrayView<FViewInfo,int> local_408;
  TArrayView<FViewInfo_const_,int> local_3f8;
  FGenerateMipsParams local_3e8;
  TArrayView<FViewInfo,int> local_3d8;
  FRDGTextureMSAA local_3c8;
  TArrayView<FViewInfo_const_,int> local_3b8;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<17>_const_*,std::tuple<>_> local_3a8;
  TArrayView<FViewInfo,int> local_398;
  TArrayView<FViewInfo,int> local_388;
  TArrayView<FViewInfo_const_,int> local_378;
  ForElementType<FRHITrackedAccessInfo> local_368 [2];
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<15>_const_*,std::tuple<>_> local_358;
  ForElementType<TRefCountPtr<FRDGPooledBuffer>_> local_348;
  undefined8 uStack_340;
  FName local_338;
  FName local_330;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<19>_const_*,std::tuple<>_> local_328 [2];
  undefined1 local_308 [40];
  FTaskHandle FStack_2e0;
  FName local_2d8;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<18>_const_*,std::tuple<>_> local_2d0;
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  TArrayView<FViewInfo_const_,int> local_298;
  FSceneView *local_288;
  ForElementType<FParallelPassSet> FStack_280;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  uint uStack_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  int iStack_20c;
  TSparseArray<TSparseSetElement<FRDGViewableResource_*>,TSparseArrayAllocator<TRDGArrayAllocator<0>,TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_>_>
  local_208;
  uint uStack_1cc;
  uchar local_1c8 [16];
  FDistanceFieldAOParameters local_1b8;
  TStridedView<FSceneView_const_,int> local_1a8;
  TStridedView<FSceneView_const_,int> local_198;
  TArrayView<FViewInfo,int> local_188;
  TArrayView<FViewInfo,int> local_178;
  TArrayView<FViewInfo_const_,int> local_168;
  TStridedView<FSceneView_const_,int> local_158;
  TArrayView<FViewInfo_const_,int> local_148;
  FSceneTextureShaderParameters local_138;
  FDBufferTextures local_118;
  FSkyAtmospherePendingRDGResources local_e0;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_918;
  local_800 = (FRHIComputeCommandList *)param_1;
  EVar28 = FSceneRenderer::GetRendererOutput((FSceneRenderer *)this);
  cVar5 = *(char *)((longlong)&param_1->_padding_ + 6);
  local_708 = '\0';
  if ((cVar5 != '\0') && ((cVar5 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      local_268._0_1_ = true;
      local_268._1_3_ = 0x54bcfc;
      uStack_264 = 1;
      ::Desc._padding_._0_4_ = 0x54bcfc80;
      ::Desc._padding_._4_4_ = uStack_26c;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_._0_4_ = 0x408;
      ::Desc._padding_ = (longlong)u_MobileSceneRend;
      ::Desc._padding_ = (longlong)u_MobileSceneRend;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FMobileSceneRenderer::Render'::__l7::Desc::operator()<>'::__l3::<lambda_1>::
             operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_2d0._Myfirst._Val = &::Desc;
    local_718.State = (FRDGScopeState *)param_1;
    pFVar34 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)pFVar34;
    local_718.Scope = pFVar34;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<18>_const_*,std::tuple<>_>_>
              (&(pFVar34->Impl).Impl,(FRDGScopeState *)param_1,&local_2d0);
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(pFVar34,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(pFVar34,(FRHIComputeCommandList *)param_1->_padding_);
    }
    local_708 = '\x01';
  }
  lVar61 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar61 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    uStack_500 = 0x408;
    local_508 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MobileShadingRenderer.cpp"
    ;
    ::Desc._padding_ = CONCAT44(uStack_4fc,0x408);
    local_4f8 = &GPUStat_MobileSceneRender;
    pwStack_4f0 = L"MobileSceneRender";
    ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
    ::Desc._padding_._0_4_ = 0x54bcfc80;
    ::Desc._padding_._4_4_ = 1;
    ::Desc._padding_._0_4_ = 0x50ee7ff0;
    ::Desc._padding_._4_4_ = 1;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
    ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    ::Desc.TraceGpuSpecId = 0;
    ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(``FMobileSceneRenderer::Render'::__l12::<lambda_2>::operator()<>'::__l2::
           _dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&::_TSS0);
  }
  this_00 = (FRHIComputeCommandList *)param_1->_padding_;
  pFVar35 = FRHIComputeCommandList::GetBreadcrumbAllocator(this_00);
  pFVar36 = FMemStackBase::Alloc(&pFVar35->Inner,0x50,8);
  pFVar36->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar36->Parent = FRHIBreadcrumbNode::Sentinel;
  pFVar36->ListLink = (FRHIBreadcrumbNode *)0x0;
  (pFVar36->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (pFVar36->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  pFVar36->TraceCpuSpecId = 0;
  pFVar36->TraceCpuMetadataId = 0;
  pFVar36->Data = (FRHIBreadcrumbData *)&::Desc;
  pFVar36->Allocator = pFVar35;
  LOCK();
  UNLOCK();
  uVar29 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar36->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar36->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar36->ID = uVar29;
  pFVar36->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar36[1]._padding_ = (longlong)&::Desc;
  if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
     (bVar20 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar20)) {
    EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      aVar30 = (atomic<unsigned_int>)
               FCpuProfilerTrace::OutputEventType
                         ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                          (char *)::Desc._padding_,(uint)::Desc._padding_);
      LOCK();
      ::Desc.TraceCpuSpecId = aVar30;
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  }
  pFVar36->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_4d8,this_00,pFVar36);
  local_4c8 = '\x01';
  local_880 = (FName)FSceneRenderer::OnRenderBegin((FSceneRenderer *)this,param_1,param_2);
  local_778.Task.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
  local_778.CmdList = (FRHICommandList *)0x0;
  pTVar37 = TArrayView<FViewInfo,int>::
            TArrayView<FViewInfo,int><TArray<FViewInfo,TSizedDefaultAllocator<32>_>_&,TArray<FViewInfo,TSizedDefaultAllocator<32>_>_>
                      (&local_188,(TArray<FViewInfo,TSizedDefaultAllocator<32>_> *)&this->field_0x10
                      );
  local_2b8._0_8_ = pTVar37->DataPtr;
  local_2b8._8_8_ = *(undefined8 *)&pTVar37->ArrayNum;
  BeginUpdateExposureCompensationCurveLUT((TArrayView<FViewInfo,int> *)local_2b8,&local_778);
  local_858.Resources.AllocatorInstance.Data = (FResource *)0x0;
  local_858.Resources.ArrayNum = 0;
  local_858.Resources.ArrayMax = 0;
  if ((GDFShadowAsyncCompute == 0) || (bVar20 = true, this->bIsFullDepthPrepassEnabled == false)) {
    bVar20 = false;
  }
  if (param_2 != (FSceneRenderUpdateInputs *)0x0) {
    if ((*(int *)(lVar61 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      pIVar38 = IConsoleManager::Get();
      CVarDistanceFieldShadowQuality =
           (IConsoleVariable *)
           (**(code **)((longlong)*pIVar38 + 0xc0))(pIVar38,L"r.DFShadowQuality",1);
      _Init_thread_footer(&::_TSS0);
    }
    bVar21 = IsMobileDistanceFieldEnabled
                       ((FStaticShaderPlatform)*(EShaderPlatform *)&this->field_0xadc);
    if ((((bVar21) && (CVarDistanceFieldShadowQuality != (IConsoleVariable *)0x0)) &&
        (iVar31 = (**(code **)(*(longlong *)CVarDistanceFieldShadowQuality + 200))(), 0 < iVar31))
       && (EVar28 != DepthPrepassOnly)) {
      ppFVar64 = (param_2->ViewFamilies).DataPtr;
      ppFVar4 = ppFVar64 + (param_2->ViewFamilies).ArrayNum;
      for (; ppFVar64 != ppFVar4; ppFVar64 = ppFVar64 + 1) {
        this_01 = *ppFVar64;
        if (((int)this_01->_padding_ < 1) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        lVar61 = *(longlong *)
                  (((TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *)&this_01->_padding_)->
                  AllocatorInstance).Data;
        if ((((this_01->_padding_ & 0x100000000000) != 0) && ((this_01->_padding_ & 0x4000000) == 0)
            ) && ((EVar32 = FSceneViewFamily::GetDebugViewShaderMode((FSceneViewFamily *)this_01),
                  EVar32 == DVSM_None &&
                  ((*(char *)(lVar61 + 0x11ec) == '\0' && (*(char *)(lVar61 + 0x11ed) == '\0'))))))
        {
          PrepareDistanceFieldScene(param_1,&local_858,param_2);
          break;
        }
      }
    }
  }
  FRDGExternalAccessQueue::Submit(&local_858,param_1);
  GPUMessage::FScope::FScope(&local_6c0,param_1);
  this_08 = (FGPUScene *)(*(longlong *)&this->field_0x8 + 0x3500);
  local_820 = this_08;
  FGPUScene::BeginRender(this_08,param_1,(FGPUSceneDynamicContext *)&this->field_0xb50);
  if (EVar28 != DepthPrepassOnly) {
    bVar21 = ShouldRenderSkyAtmosphere
                       (*(FScene **)&this->field_0x8,(FEngineShowFlags *)&this->field_0x100);
    pFVar7 = *(FScene **)&this->field_0x8;
    if (bVar21) {
      pFVar8 = pFVar7->AtmosphereLights[0];
      if (pFVar8 != (FLightSceneInfo *)0x0) {
        pFVar39 = (FSkyAtmosphereRenderSceneInfo *)(**(code **)(*(longlong *)pFVar7 + 0x2e8))();
        PrepareSunLightProxy(pFVar39,0,pFVar8);
      }
      pFVar8 = (FLightSceneInfo *)(*(longlong **)&this->field_0x8)[0x591];
      if (pFVar8 != (FLightSceneInfo *)0x0) {
        pFVar39 = (FSkyAtmosphereRenderSceneInfo *)
                  (**(code **)(**(longlong **)&this->field_0x8 + 0x2e8))();
        PrepareSunLightProxy(pFVar39,1,pFVar8);
      }
    }
    else {
      FScene::ResetAtmosphereLightsProperties(pFVar7);
    }
  }
  if (__CsvProfilerStat1095 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("RenderOther");
    __CsvProfilerStat1095 = true;
  }
  FCsvProfiler::BeginExclusiveStat("RenderOther","CSV_RenderOther");
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    StatPtr_STAT_FMobileSceneRenderer_Render =
         (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FMobileSceneRenderer::Render(FRDGBuilder_&,FSceneRenderUpdateInputs_const_*)_::_2_::FStat_STAT_FMobileSceneRenderer_Render>
          )0x0;
    FThreadSafeStaticStatInner<`FMobileSceneRenderer::Render'::__l2::FStat_STAT_FMobileSceneRenderer_Render,1>
    ::GetStatId(&StatPtr_STAT_FMobileSceneRenderer_Render);
    _Init_thread_footer(&::_TSS2);
  }
  TVar40 = FThreadSafeStaticStatInner<`FMobileSceneRenderer::Render'::__l2::FStat_STAT_FMobileSceneRenderer_Render,1>
           ::GetStatId(&StatPtr_STAT_FMobileSceneRenderer_Render);
  local_648.Impl._Line = 0x448;
  local_648.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MobileShadingRenderer.cpp"
  ;
  local_648.Impl._Column = 2;
  local_648.Impl._Function =
       "void __cdecl FMobileSceneRenderer::Render(class FRDGBuilder &,const struct FSceneRenderUpdateInputs *)"
  ;
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_7f0,*(TStatIdData **)&(TVar40.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,&local_648);
  FSystemTextures::InitializeTextures
            ((FSystemTextures *)&GSystemTextures,(FRHICommandListImmediate *)param_1->_padding_,
             *(Type *)&this->field_0xad8);
  FRDGSystemTextures::Create(param_1);
  pTVar37 = TArrayView<FViewInfo,int>::
            TArrayView<FViewInfo,int><TArray<FViewInfo,TSizedDefaultAllocator<32>_>_&,TArray<FViewInfo,TSizedDefaultAllocator<32>_>_>
                      (&local_178,(TArray<FViewInfo,TSizedDefaultAllocator<32>_> *)&this->field_0x10
                      );
  local_2a8._0_8_ = pTVar37->DataPtr;
  local_2a8._8_8_ = *(undefined8 *)&pTVar37->ArrayNum;
  ShaderPrint::BeginViews(param_1,(TArrayView<FViewInfo,int> *)local_2a8);
  local_870._0_8_ = (FVirtualTextureUpdater *)0x0;
  if (this->bUseVirtualTexturing != false) {
    FVirtualTextureUpdateSettings::FVirtualTextureUpdateSettings(&local_4c0);
    if (this->field_0x1c2 != '\0') {
      local_4c0.MaxRVTPageUploads = 99999;
      local_4c0.MaxSVTPageUploads = 99999;
      local_4c0.MaxPagesProduced = 99999;
      local_4c0.bForceSyncPageUpdate = true;
    }
    pFVar41 = FVirtualTextureSystem::Get();
    TVar42 = FVirtualTextureSystem::BeginUpdate
                       (pFVar41,(FRDGBuilder *)&local_7e0,(Type)param_1,
                        (ISceneRenderer *)(ulonglong)*(uint *)&this->field_0xad8,
                        (FVirtualTextureUpdateSettings *)this);
    uVar14 = local_870._0_8_;
    if ((FVirtualTextureUpdater *)local_870 != TVar42.Ptr) {
      local_870._0_8_ = *(undefined8 *)&(TVar42.Ptr)->Settings;
      ((TVar42.Ptr)->Settings).bEnableAsyncTasks = false;
      ((TVar42.Ptr)->Settings).bEnablePageRequests = false;
      ((TVar42.Ptr)->Settings).bEnableFeedback = false;
      ((TVar42.Ptr)->Settings).bEnableFeedbackProduce = false;
      ((TVar42.Ptr)->Settings).bEnablePlayback = false;
      ((TVar42.Ptr)->Settings).bParallelFeedbackTasks = false;
      ((TVar42.Ptr)->Settings).bForceContinuousUpdate = false;
      ((TVar42.Ptr)->Settings).bForceSyncPageUpdate = false;
      TDefaultDelete<FVirtualTextureUpdater>::operator()
                ((TDefaultDelete<FVirtualTextureUpdater> *)local_870,
                 (FVirtualTextureUpdater *)uVar14);
    }
    TDefaultDelete<FVirtualTextureUpdater>::operator()
              ((TDefaultDelete<FVirtualTextureUpdater> *)&local_7e0,local_7e0);
    TVar9.field0_0x0 = (TIntPoint<int>_u_0)*(TIntPoint<int>_u_0 *)&this->field_0x280;
    pTVar43 = TArrayView<FViewInfo_const_,int>::
              TArrayView<FViewInfo_const_,int><TArray<FViewInfo,TSizedDefaultAllocator<32>_>_&,TArray<FViewInfo,TSizedDefaultAllocator<32>_>_>
                        (&local_168,
                         (TArray<FViewInfo,TSizedDefaultAllocator<32>_> *)&this->field_0x10);
    local_298.DataPtr = pTVar43->DataPtr;
    local_298._8_8_ = *(undefined8 *)&pTVar43->ArrayNum;
    VirtualTextureFeedbackBegin(param_1,&local_298,TVar9);
  }
  bVar21 = Substrate::IsSubstrateEnabled();
  if (bVar21) {
    iVar31 = *(int *)&this->field_0x18;
    pFVar60 = *(FViewInfo **)&this->field_0x10;
    pFVar63 = pFVar60 + iVar31;
    while( true ) {
      if (*(int *)&this->field_0x18 != iVar31) {
        local_8a8 = 0;
        `TCheckedPointerIterator<FViewInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_8a8);
      }
      if (pFVar60 == pFVar63) break;
      ShadingEnergyConservation::Init(param_1,pFVar60);
      FGlintShadingLUTsStateData::Init(param_1,pFVar60);
      pFVar60 = pFVar60 + 1;
    }
  }
  Substrate::InitialiseSubstrateFrameSceneData(param_1,(FSceneRenderer *)this);
  if (EVar28 != DepthPrepassOnly) {
    SubsurfaceProfile::UpdateSubsurfaceProfileTexture
              (param_1,*(EShaderPlatform *)&this->field_0xadc);
    SpecularProfile::UpdateSpecularProfileTextureAtlas
              (param_1,*(EShaderPlatform *)&this->field_0xadc);
    if (this->bDeferredShading != false) {
      RectLightAtlas::UpdateAtlasTexture(param_1,*(Type *)&this->field_0xad8);
    }
    IESAtlas::UpdateAtlasTexture
              (param_1,(FStaticShaderPlatform)*(EShaderPlatform *)&this->field_0xadc);
    bVar21 = UseVirtualShadowMaps
                       (*(EShaderPlatform *)&this->field_0xadc,
                        (FGenericStaticFeatureLevel)*(Type *)&this->field_0xad8);
    pFVar44 = FScene::GetVirtualShadowMapCache(*(FScene **)&this->field_0x8);
    FVirtualShadowMapArray::Initialize
              ((FVirtualShadowMapArray *)&this->field_0x6f0,param_1,pFVar44,bVar21,
               (FEngineShowFlags *)&this->field_0x100);
  }
  FSceneExtensionsRenderers::PreInitViews((FSceneExtensionsRenderers *)&this->field_0x60,param_1);
  pFVar7 = *(FScene **)&this->field_0x8;
  local_6e8.VisibilityTaskData = (IVisibilityTaskData *)local_880;
  local_6e8.DynamicShadows = (FDynamicShadowsTaskData *)0x0;
  TVar45.Reference = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0xf0,0x10);
  if (TVar45.Reference == (FTaskBase *)0x0) {
    TVar45.Reference = (FTaskBase *)0x0;
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("Object",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                        ,0x61,L"");
    if (bVar21) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  else {
    (TVar45.Reference)->_padding_ =
         (longlong)&___7__TObject_VFRendererViewDataManager___FRDGAllocator__6B_;
    FRendererViewDataManager::FRendererViewDataManager
              ((FRendererViewDataManager *)&(TVar45.Reference)->_padding_,param_1,pFVar7,
               (FSceneUniformBuffer *)&this->field_0x20,
               (TArray<FViewInfo_*,TSizedDefaultAllocator<32>_> *)&this->field_0x3f0);
  }
  local_828.Pimpl.Reference =
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)TVar45.Reference;
  if ((((FTaskHandle *)param_1->_padding_ <= &local_828) &&
      (&local_828 < (FTaskHandle *)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))
      ) && (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar21)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  iVar31 = (int)param_1->_padding_;
  if (iVar31 == *(int *)((longlong)&param_1->_padding_ + 4)) {
    iVar31 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&param_1->_padding_,
                        (int *)((longlong)&param_1->_padding_ + 4));
  }
  *(int *)&param_1->_padding_ = iVar31 + 1;
  ((TRefCountPtr<UE::Tasks::Private::FTaskBase> *)(param_1->_padding_ + (longlong)iVar31 * 8))->
  Reference = (FTaskBase *)local_828.Pimpl.Reference;
  local_878 = (FRDGTexture *)&(TVar45.Reference)->_padding_;
  pFVar7 = *(FScene **)&this->field_0x8;
  pTVar46 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x60,0x10);
  if (pTVar46 == (TIntPoint<unsigned_int> *)0x0) {
    pTVar46 = (TIntPoint<unsigned_int> *)0x0;
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("Object",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                        ,0x61,L"");
    if (bVar21) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  else {
    pTVar46->field0_0x0 =
         (TIntPoint<unsigned_int>_u_0)&___7__TObject_VFInstanceCullingManager___FRDGAllocator__6B_;
    FInstanceCullingManager::FInstanceCullingManager
              ((FInstanceCullingManager *)(pTVar46 + 1),param_1,pFVar7,
               (FSceneUniformBuffer *)&this->field_0x20,(FRendererViewDataManager *)local_878);
  }
  local_838 = pTVar46;
  if ((((TIntPoint<unsigned_int> **)param_1->_padding_ <= &local_838) &&
      (&local_838 <
       (TIntPoint<unsigned_int> **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))
      ) && (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar21)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  iVar31 = (int)param_1->_padding_;
  if (iVar31 == *(int *)((longlong)&param_1->_padding_ + 4)) {
    iVar31 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&param_1->_padding_,
                        (int *)((longlong)&param_1->_padding_ + 4));
  }
  *(int *)&param_1->_padding_ = iVar31 + 1;
  *(TIntPoint<unsigned_int> **)(param_1->_padding_ + (longlong)iVar31 * 8) = local_838;
  pFVar60 = (FViewInfo *)(pTVar46 + 1);
  pwVar69 = (wchar_t *)pFVar60;
  InitViews(this,param_1,(FSceneTexturesConfig *)&this->field_0x270,
            (FInstanceCullingManager *)pFVar60,(FVirtualTextureUpdater *)local_870._0_8_,&local_6e8)
  ;
  if ((EVar28 != DepthPrepassOnly) &&
     (bVar21 = FSceneRenderer::DoOcclusionQueries((FSceneRenderer *)this), bVar21)) {
    iVar31 = *(int *)&this->field_0x18;
    uVar29 = 0;
    if (0 < iVar31) {
      lVar61 = 0;
      do {
        uVar33 = 0;
        if ((int)uVar29 < iVar31) {
          uVar33 = ~uVar29 >> 0x1f;
        }
        if (uVar33 == 0) {
          pwVar69 = L"Array index out of bounds: %lld into an array of size %lld";
          bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar21) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
        }
        lVar65 = *(longlong *)&this->field_0x10;
        if ((((*(byte *)(lVar65 + 0x24b8 + lVar61) & 2) == 0) &&
            (((*(char *)(lVar65 + 0x11f7 + lVar61) == '\0' ||
              (*(int *)(lVar65 + 0xdd0 + lVar61) != 2)) &&
             (lVar65 = *(longlong *)(lVar65 + 0x1c40 + lVar61), lVar65 != 0)))) &&
           (*(int *)(lVar65 + 0x2d0) != -1)) {
          FOcclusionFeedback::BeginOcclusionScope((FOcclusionFeedback *)(lVar65 + 0x2b8),param_1);
        }
        iVar31 = *(int *)&this->field_0x18;
        uVar29 = uVar29 + 1;
        lVar61 = lVar61 + 0x2970;
      } while ((int)uVar29 < iVar31);
    }
  }
  plVar10 = *(longlong **)&this->field_0xb40;
  if (plVar10 != (longlong *)0x0) {
    pcVar12 = *(code **)(*plVar10 + 0x90);
    pTVar47 = FSceneRenderer::GetSceneViews((FSceneRenderer *)this,&local_158);
    pwVar69 = (wchar_t *)&this->field_0x20;
    local_288 = pTVar47->FirstElementPtr;
    FStack_280.Data = *(FParallelPassSet **)&pTVar47->BytesBetweenElements;
    (*pcVar12)(plVar10,param_1);
    pFVar48 = (FGPUSortManager *)(**(code **)(**(longlong **)&this->field_0xb40 + 0xa0))();
    if (pFVar48 != (FGPUSortManager *)0x0) {
      FGPUSortManager::OnPreRender(pFVar48,param_1);
    }
  }
  FVar49 = (FName)FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                            ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
  param_1->_padding_ = (longlong)FVar49;
  local_880 = FVar49;
  UE::Core::Private::
  TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
  Destruct((ulonglong)*(byte *)((longlong)FVar49 + 0x48),(void *)((longlong)FVar49 + 0x38));
  *(char **)((longlong)FVar49 + 0x38) = "UpdateGPUScene";
  FCsvProfiler::BeginExclusiveStat("UpdateGPUScene",(char *)0x0);
  *(undefined1 *)((longlong)FVar49 + 0x48) = 3;
  if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
    FRDGScope::BeginCPU((FRDGScope *)FVar49,(FRHIComputeCommandList *)param_1->_padding_,false);
    FRDGScope::BeginGPU((FRDGScope *)FVar49,(FRHIComputeCommandList *)param_1->_padding_);
  }
  uVar29 = 0;
  if (0 < *(int *)&this->field_0x3f8) {
    lVar61 = 0;
    do {
      uVar33 = 0;
      if ((int)uVar29 < *(int *)&this->field_0x3f8) {
        uVar33 = ~uVar29 >> 0x1f;
      }
      if ((uVar33 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pwVar69 = *(wchar_t **)(lVar61 + *(longlong *)&this->field_0x3f0);
      FGPUScene::UploadDynamicPrimitiveShaderDataForView
                ((FGPUScene *)(*(longlong *)&this->field_0x8 + 0x3500),param_1,(FViewInfo *)pwVar69,
                 false,(IShadowInvalidatingInstances *)0x0);
      FGPUScene::DebugRender
                ((FGPUScene *)(*(longlong *)&this->field_0x8 + 0x3500),param_1,
                 (FSceneUniformBuffer *)&this->field_0x20,(FViewInfo *)pwVar69);
      uVar29 = uVar29 + 1;
      lVar61 = lVar61 + 8;
      FVar49 = local_880;
    } while ((int)uVar29 < *(int *)&this->field_0x3f8);
  }
  if (FVar49 != (FName)0x0) {
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::EndGPU((FRDGScope *)FVar49,(FRHIComputeCommandList *)param_1->_padding_);
      FRDGScope::EndCPU((FRDGScope *)FVar49,(FRHIComputeCommandList *)param_1->_padding_,false);
    }
    FRDGScope::ImmediateEnd((FRDGScope *)FVar49,(FRDGScopeState *)param_1);
    *(uint *)&param_1->_padding_ = (uint)param_1->_padding_ & 0xfffffff7;
    param_1->_padding_ = *(longlong *)param_1->_padding_;
  }
  FSceneExtensionsRenderers::UpdateViewData
            ((FSceneExtensionsRenderers *)&this->field_0x60,param_1,
             (FRendererViewDataManager *)local_878);
  FSceneExtensionsRenderers::UpdateSceneUniformBuffer
            ((FSceneExtensionsRenderers *)&this->field_0x60,param_1,
             (FSceneUniformBuffer *)&this->field_0x20);
  FInstanceCullingManager::BeginDeferredCulling((FInstanceCullingManager *)pFVar60,param_1);
  FSceneExtensionsRenderers::PreRender((FSceneExtensionsRenderers *)&this->field_0x60,param_1);
  TMulticastDelegate<void___cdecl(FRDGBuilder_&),FDefaultDelegateUserPolicy>::Broadcast
            (&GEngine->PreRenderDelegateEx,param_1);
  Substrate::PreInitViews(*(FScene **)&this->field_0x8);
  FSceneTextures::InitializeViewFamily
            (param_1,(FViewFamilyInfo *)&this->field_0xb8,
             (TIntPoint<int>)*(TIntPoint<int>_u_0 *)&this->field_0xb08);
  local_8a0 = FViewFamilyInfo::GetSceneTextures((FViewFamilyInfo *)&this->field_0xb8);
  puVar50 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x60,0x10);
  if (puVar50 == (undefined8 *)0x0) {
    pwVar69 = L"";
    puVar50 = (undefined8 *)0x0;
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("Object",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                        ,0x61,L"");
    if (bVar21) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  else {
    *puVar50 = &___7__TObject_UFSortedLightSetSceneInfo___FRDGAllocator__6B_;
    puVar50[1] = 0;
    puVar50[2] = 0;
    puVar50[3] = 0;
    puVar50[4] = 0;
    puVar50[5] = 0;
    puVar50[6] = 0;
    puVar50[7] = 0;
    puVar50[8] = 0;
    puVar50[9] = 0;
    puVar50[10] = 0;
    puVar50[0xb] = 0;
  }
  local_830 = puVar50;
  if (((undefined8 **)param_1->_padding_ <= &local_830) &&
     (pwVar69 = (wchar_t *)(longlong)*(int *)((longlong)&param_1->_padding_ + 4),
     &local_830 < (undefined8 **)param_1->_padding_ + (longlong)pwVar69)) {
    pwVar69 = 
    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
    ;
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar21) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  iVar31 = (int)param_1->_padding_;
  if (iVar31 == *(int *)((longlong)&param_1->_padding_ + 4)) {
    iVar31 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&param_1->_padding_,
                        (int *)((longlong)&param_1->_padding_ + 4));
  }
  pFVar62 = local_8a0;
  *(int *)&param_1->_padding_ = iVar31 + 1;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar31 * 8) = local_830;
  local_888 = (FName)(puVar50 + 1);
  *(undefined4 *)((longlong)&local_8a0->_padding_ + 4) = 0;
  pTVar51 = CreateMobileSceneTextureUniformBuffer(param_1,local_8a0,None);
  pFVar62->_padding_ = (longlong)pTVar51;
  if ((this->bIsFullDepthPrepassEnabled == false) ||
     (bVar21 = IsLocalFogVolumeHalfResolution(), !bVar21)) {
    bVar21 = false;
  }
  else {
    bVar21 = true;
  }
  if (EVar28 == DepthPrepassOnly) {
    SetDummyLocalFogVolumeForViews
              (param_1,(TArray<FViewInfo,TSizedDefaultAllocator<32>_> *)&this->field_0x10);
  }
  else {
    ClearDebugAux(param_1,(FViewFamilyInfo *)&this->field_0xb8,pFVar62->DebugAux);
    if (this->bUseVirtualTexturing != false) {
      pFVar41 = FVirtualTextureSystem::Get();
      pwVar69 = (wchar_t *)(ulonglong)*(Type *)&this->field_0xad8;
      FVirtualTextureSystem::EndUpdate
                (pFVar41,param_1,
                 (TUniquePtr<FVirtualTextureUpdater,TDefaultDelete<FVirtualTextureUpdater>_> *)
                 local_870,*(Type *)&this->field_0xad8);
      pFVar41 = FVirtualTextureSystem::Get();
      FVirtualTextureSystem::FinalizeRequests(pFVar41,param_1,(ISceneRenderer *)this);
    }
    if (((this->bDeferredShading == false) && (this->bEnableClusteredLocalLights == false)) &&
       (this->bEnableClusteredReflections == false)) {
      SetDummyForwardLightUniformBufferOnViews
                (param_1,*(EShaderPlatform *)&this->field_0xadc,
                 (TArray<FViewInfo,TSizedDefaultAllocator<32>_> *)&this->field_0x10);
      FVar49 = local_888;
    }
    else {
      local_598.State = (FRDGScopeState *)param_1;
      pFVar34 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                          ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
      param_1->_padding_ = (longlong)pFVar34;
      local_598.Scope = pFVar34;
      UE::Core::Private::
      TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
      Destruct((ulonglong)(pFVar34->Impl).Impl.TypeIndex,&pFVar34->Impl);
      (pFVar34->Impl).Impl._padding_ = (longlong)"SortLights";
      FCsvProfiler::BeginExclusiveStat("SortLights",(char *)0x0);
      (pFVar34->Impl).Impl.TypeIndex = '\x03';
      if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
        FRDGScope::BeginCPU(pFVar34,(FRHIComputeCommandList *)param_1->_padding_,false);
        FRDGScope::BeginGPU(pFVar34,(FRHIComputeCommandList *)param_1->_padding_);
      }
      if ((this->bRequiresShadowProjections == false) || (this->bDeferredShading != false)) {
        bVar22 = false;
      }
      else {
        bVar22 = true;
      }
      FSceneRenderer::UpdateLightFunctionAtlasTaskFunction((FSceneRenderer *)this);
      FVar49 = local_888;
      FSceneRenderer::GatherAndSortLights
                ((FSceneRenderer *)this,(FSortedLightSetSceneInfo *)local_888,bVar22);
      if (*(int *)&this->field_0x18 < 1) {
        pwVar69 = L"Array index out of bounds: %lld into an array of size %lld";
        bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar22) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      lVar61 = *(longlong *)&this->field_0x10;
      if (*(int *)&this->field_0x18 < 1) {
        pwVar69 = L"Array index out of bounds: %lld into an array of size %lld";
        bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar22) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      uVar71 = (uint7)((ulonglong)pwVar69 >> 8);
      if ((((this->bEnableClusteredReflections == false) && (this->bDeferredShading == false)) ||
          (*(int *)(*(longlong *)&this->field_0x10 + 0x2594) + *(int *)(lVar61 + 0x2590) < 1)) &&
         (this->bEnableClusteredLocalLights == false)) {
        pFVar70 = (FSortedLightSetSceneInfo *)((ulonglong)uVar71 << 8);
      }
      else {
        pFVar70 = (FSortedLightSetSceneInfo *)CONCAT71(uVar71,1);
      }
      FSceneRenderer::PrepareForwardLightData
                ((FSceneRenderer *)this,(FRDGBuilder *)local_308,SUB81(param_1,0),pFVar70);
      LightFunctionAtlas::FLightFunctionAtlas::RenderLightFunctionAtlas
                ((FLightFunctionAtlas *)&this->field_0x990,param_1,
                 (TArray<FViewInfo,TSizedDefaultAllocator<32>_> *)&this->field_0x10);
      TRDGEventScopeGuard<FRDGScope_CSVExclusive>::~TRDGEventScopeGuard<FRDGScope_CSVExclusive>
                (&local_598);
    }
    if (__CsvProfilerStat1248 == false) {
      FCsvProfilerTrace::OutputInlineStat("All",_GCsvCategory_LightCount.Index);
      __CsvProfilerStat1248 = true;
    }
    FCsvProfiler::RecordCustomStat
              ("All",_GCsvCategory_LightCount.Index,(float)*(int *)((longlong)FVar49 + 0x50),Set);
    if (__CsvProfilerStat1249 == false) {
      FCsvProfilerTrace::OutputInlineStat("Batched",_GCsvCategory_LightCount.Index);
      __CsvProfilerStat1249 = true;
    }
    FCsvProfiler::RecordCustomStat
              ("Batched",_GCsvCategory_LightCount.Index,(float)*(int *)((longlong)FVar49 + 8),Set);
    if (__CsvProfilerStat1250 == false) {
      FCsvProfilerTrace::OutputInlineStat("Unbatched",_GCsvCategory_LightCount.Index);
      __CsvProfilerStat1250 = true;
    }
    FCsvProfiler::RecordCustomStat
              ("Unbatched",_GCsvCategory_LightCount.Index,
               (float)*(int *)((longlong)FVar49 + 0x50) - (float)*(int *)((longlong)FVar49 + 8),Set)
    ;
    bVar22 = ShouldRenderSkyAtmosphere
                       (*(FScene **)&this->field_0x8,(FEngineShowFlags *)&this->field_0x100);
    if (bVar22) {
      local_e0.ViewResources.ArrayMax = 4;
      local_e0.SceneRenderer = (FSceneRenderer *)0x0;
      local_e0.ViewResources.AllocatorInstance.SecondaryData =
           (ForElementType<FSkyAtmospherePendingRDGResources::FViewRDGResources>)0x0;
      local_e0.ViewResources.ArrayNum = 0;
      local_e0.TransmittanceLut = (FRDGTexture *)0x0;
      local_e0.DistantSkyLightLutBuffer = (FRDGBuffer *)0x0;
      local_e0.MobileDistantSkyLightLutBuffer = (FRDGBuffer *)0x0;
      local_e0.RealTimeReflectionCaptureSkyAtmosphereViewLutTexture = (FRDGTexture *)0x0;
      local_e0.RealTimeReflectionCaptureCamera360APLutTexture = (FRDGTexture *)0x0;
      FSceneRenderer::RenderSkyAtmosphereLookUpTables((FSceneRenderer *)this,param_1,&local_e0);
      FSkyAtmospherePendingRDGResources::CommitToSceneAndViewUniformBuffers
                (&local_e0,param_1,&local_858);
      if (local_e0.ViewResources.AllocatorInstance.SecondaryData !=
          (ForElementType<FSkyAtmospherePendingRDGResources::FViewRDGResources>)0x0) {
        FMemory::Free((void *)local_e0.ViewResources.AllocatorInstance.SecondaryData);
      }
    }
    bVar23 = FSceneRenderer::ShouldRenderVolumetricFog((FSceneRenderer *)this);
    InitLocalFogVolumesForViews
              (*(FScene **)&this->field_0x8,
               (TArray<FViewInfo,TSizedDefaultAllocator<32>_> *)&this->field_0x10,
               (FSceneViewFamily *)&this->field_0xb8,param_1,bVar23,bVar21);
    if ((0 < *(int *)&this->field_0x18) &&
       ((((bVar22 || (0 < *(int *)(*(longlong *)&this->field_0x10 + 0x1f88))) &&
         (lVar61 = *(longlong *)(*(longlong *)&this->field_0x8 + 0x2b38), lVar61 != 0)) &&
        ((*(char *)(lVar61 + 0xf8) != '\0' && ((*(uint *)&this->field_0x110 & 0x10000000) != 0))))))
    {
      FRDGExternalAccessQueue::Submit(&local_858,param_1);
      (**(code **)(**(longlong **)&this->field_0x8 + 0x198))(*(longlong **)&this->field_0x8,param_1)
      ;
      UpdateSkyReflectionUniformBuffer(this,(FRHICommandListBase *)param_1->_padding_);
    }
    EVar27 = FSceneInterface::GetShaderPlatform(*(FSceneInterface **)&this->field_0x8);
    bVar21 = IsHairStrandsEnabled(All,EVar27);
    if (bVar21) {
      pFVar52 = FRDGAllocator::Alloc<FHairStrandsBookmarkParameters>
                          ((FRDGAllocator *)&param_1->_padding_);
      local_588 = *(FViewInfo ***)&this->field_0x3f0;
      iStack_580 = *(int *)&this->field_0x3f8;
      if ((iStack_580 < 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar21)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      local_468._12_4_ = uStack_57c;
      local_468.ArrayNum = iStack_580;
      local_468.DataPtr = local_588;
      CreateHairStrandsBookmarkParameters
                (*(FScene **)&this->field_0x8,
                 (TArray<FViewInfo,TSizedDefaultAllocator<32>_> *)&this->field_0x10,&local_468,
                 pFVar52,true);
      if ((*(longlong *)(*(longlong *)&this->field_0x8 + 0x2e98) == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Scene->HairStrandsSceneData.TransientResources",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MobileShadingRenderer.cpp"
                              ,0x505,L""), bVar21)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar52->TransientResources =
           *(FHairTransientResources **)(*(longlong *)&this->field_0x8 + 0x2e98);
      iVar31 = *(int *)&this->field_0x18;
      lVar61 = *(longlong *)&this->field_0x10;
      lVar65 = (longlong)iVar31 * 0x2970 + lVar61;
      while( true ) {
        if (*(int *)&this->field_0x18 != iVar31) {
          local_8a7 = 0;
          `TCheckedPointerIterator<FViewInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_8a7);
        }
        if (lVar61 == lVar65) break;
        puVar50 = (undefined8 *)(lVar61 + 0x2340);
        lVar61 = lVar61 + 0x2970;
        *(undefined8 *)*puVar50 = 0;
      }
      if (((pFVar52->Instances != (TArray<FHairStrandsInstance_*,TSizedDefaultAllocator<32>_> *)0x0)
          && (0 < pFVar52->Instances->ArrayNum)) && (0 < *(int *)&this->field_0x18)) {
        RunHairStrandsBookmark(param_1,ProcessCardsAndMeshesInterpolation_PrimaryView,pFVar52);
      }
    }
    if (!bVar20) {
      FSceneRenderer::RenderShadowDepthMaps
                ((FSceneRenderer *)this,param_1,(FDynamicShadowsTaskData *)0x0,
                 (FInstanceCullingManager *)pFVar60,&local_858);
      FRDGBuilder::AddDispatchHint(param_1);
    }
    FRDGExternalAccessQueue::Submit(&local_858,param_1);
    pFVar62 = local_8a0;
    if (this->bShouldRenderCustomDepth != false) {
      local_578 = (FPackedView *)0x0;
      iStack_570 = 0;
      local_5e8.Data = (FExtractedTexture *)0x0;
      iStack_5e0 = 0;
      pFVar53 = FMinimalSceneTextures::GetSceneTextureShaderParameters
                          ((FMinimalSceneTextures *)local_8a0,&local_138,*(Type *)&this->field_0xad8
                          );
      local_458._12_4_ = uStack_56c;
      local_458.ArrayNum = iStack_570;
      local_458.DataPtr = local_578;
      local_448.DataPtr._0_4_ = local_5e8.Data._0_4_;
      local_448.DataPtr._4_4_ = local_5e8.Data._4_4_;
      local_448.ArrayNum = iStack_5e0;
      local_448._12_4_ = iStack_5dc;
      FSceneRenderer::RenderCustomDepthPass
                ((FSceneRenderer *)this,param_1,(FCustomDepthTextures *)&pFVar62->_padding_,pFVar53,
                 &local_448,&local_458);
    }
  }
  iVar31 = *(int *)&this->field_0x18;
  pFVar63 = *(FViewInfo **)&this->field_0x10;
  pFVar66 = pFVar63 + iVar31;
  while( true ) {
    if (*(int *)&this->field_0x18 != iVar31) {
      local_8a6 = 0;
      `TCheckedPointerIterator<FViewInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_8a6);
    }
    if (pFVar63 == pFVar66) break;
    if ((pFVar63->bHasNoVisiblePrimitive == 0) &&
       ((*(char *)((longlong)&pFVar63->_padding_ + 7) == '\0' || ((int)pFVar63->_padding_ != 2)))) {
      EVar27 = FSceneView::GetShaderPlatform((FSceneView *)pFVar63);
      bVar21 = OIT::IsSortedTrianglesEnabled(EVar27);
      if (bVar21) {
        OIT::AddSortTrianglesPass
                  (param_1,pFVar63,(FOITSceneData *)(*(longlong *)&this->field_0x8 + 0x2ea0),
                   BackToFront);
      }
    }
    pFVar63 = pFVar63 + 1;
  }
  local_878 = TryCreateViewFamilyTexture(param_1,(FSceneViewFamily *)&this->field_0xb8);
  FRDGSystemTextures::Get(param_1);
  RenderWaterInfoTexture(param_1,(FSceneRenderer *)this,*(FScene **)&this->field_0x8);
  if (0 < *(int *)&this->field_0x3e8) {
    lVar61 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar61 + 0x9d4c) < DAT_1550f01d8) &&
       (_Init_thread_header(&DAT_1550f01d8), DAT_1550f01d8 == -1)) {
      DAT_1550f01d0 = 0;
      pFVar54 = ::FName::FName((FName *)(local_308 + 8),"STAT_CustomRenderPasses");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&DAT_1550f01d0,*pFVar54,L"STAT_CustomRenderPasses",
                 "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
                 MCR_Invalid);
      _Init_thread_footer(&DAT_1550f01d8);
    }
    TVar40 = FThreadSafeStaticStatInner<`FMobileSceneRenderer::Render'[::I]::FStat_STAT_CustomRenderPasses,1>
             ::GetStatId(&DAT_1550f01d0);
    local_628.Impl._Line = 0x541;
    local_628.Impl._File =
         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MobileShadingRenderer.cpp"
    ;
    local_628.Impl._Column = 3;
    local_628.Impl._Function =
         "void __cdecl FMobileSceneRenderer::Render(class FRDGBuilder &,const struct FSceneRenderUpdateInputs *)"
    ;
    FScopeCycleCounter::FScopeCycleCounter
              ((FScopeCycleCounter *)&local_810,*(TStatIdData **)&(TVar40.StatIdPtr)->Name,
               CycleStat|ClearEveryFrame,false,&local_628);
    cVar5 = *(char *)((longlong)&param_1->_padding_ + 6);
    cVar26 = '\0';
    local_720 = '\0';
    if ((cVar5 != '\0') && ((cVar5 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
      if ((*(int *)(lVar61 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::Desc._padding_._0_4_ = 0x542;
        local_248._0_1_ = false;
        local_248._1_3_ = 0x54bc2c;
        uStack_244 = 1;
        ::Desc._padding_._0_4_ = 0x54bc2c00;
        ::Desc._padding_._4_4_ = uStack_24c;
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        ::Desc._padding_._4_4_ = 1;
        ::Desc._padding_ = (longlong)u_CustomRenderPas;
        ::Desc._padding_ = (longlong)u_CustomRenderPas;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```FMobileSceneRenderer::Render'[::N]::<lambda_4>::operator()<>'::__l3::<lambda_1>::
               operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
      local_328[0]._Myfirst._Val = &::Desc;
      local_730.State = (FRDGScopeState *)param_1;
      pFVar34 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                          ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
      param_1->_padding_ = (longlong)pFVar34;
      local_730.Scope = pFVar34;
      TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
      Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<19>_const_*,std::tuple<>_>_>
                (&(pFVar34->Impl).Impl,(FRDGScopeState *)param_1,local_328);
      if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
        FRDGScope::BeginCPU(pFVar34,(FRHIComputeCommandList *)param_1->_padding_,false);
        FRDGScope::BeginGPU(pFVar34,(FRHIComputeCommandList *)param_1->_padding_);
      }
      cVar26 = '\x01';
      local_720 = '\x01';
    }
    pvVar19 = ThreadLocalStoragePointer;
    uVar16 = _UNK_150631da8;
    uVar14 = ___xmm_00000001000000010000000100000001;
    local_890 = *(uint *)((longlong)&pFVar62->_padding_ + 4);
    local_840 = (FUniqueRequestList *)pFVar62->_padding_;
    local_894 = 0;
    if (0 < *(int *)&this->field_0x3e8) {
      local_880.ComparisonIndex.Value = 0x9d4c;
      local_880.Number = 0;
      do {
        FVar49 = local_880;
        uVar29 = local_894;
        uVar33 = 0;
        if ((int)local_894 < *(int *)&this->field_0x3e8) {
          uVar33 = ~local_894 >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        uVar33 = local_894;
        this_02 = *(atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*>
                    *)((longlong)(int)uVar29 * 0x398 + *(longlong *)&this->field_0x3e0);
        uVar29 = 0;
        if ((int)local_894 < *(int *)&this->field_0x3e8) {
          uVar29 = ~local_894 >> 0x1f;
        }
        local_848.Next = this_02;
        if ((uVar29 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        local_870._16_8_ = *(longlong *)&this->field_0x3e0 + 0x330 + (longlong)(int)uVar33 * 0x398;
        if ((this_02 ==
             (atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*>
              )0x0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("CustomRenderPass",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MobileShadingRenderer.cpp"
                                ,0x54e,L""), bVar21)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        FCustomRenderPassBase::BeginPass((FCustomRenderPassBase *)this_02,param_1);
        if ((*(int *)((longlong)FVar49 +
                     *(longlong *)((longlong)pvVar19 + (ulonglong)_tls_index * 8)) < ::_TSS7) &&
           (_Init_thread_header(&::_TSS7), ::_TSS7 == -1)) {
          StatPtr_STAT_CustomRenderPass =
               (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FMobileSceneRenderer::Render(FRDGBuilder_&,FSceneRenderUpdateInputs_const_*)_::_151_::FStat_STAT_CustomRenderPass>
                )0x0;
          pFVar54 = ::FName::FName(&local_2d8,"STAT_CustomRenderPass");
          FThreadSafeStaticStatBase::DoSetup
                    ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CustomRenderPass,*pFVar54,
                     L"STAT_CustomRenderPass","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                     true,ST_int64,true,false,MCR_Invalid);
          _Init_thread_footer(&::_TSS7);
        }
        FVar55 = StatPtr_STAT_CustomRenderPass;
        if (StatPtr_STAT_CustomRenderPass ==
            (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FMobileSceneRenderer::Render(FRDGBuilder_&,FSceneRenderUpdateInputs_const_*)_::_151_::FStat_STAT_CustomRenderPass>
             )0x0) {
          pFVar54 = ::FName::FName(&local_338,"STAT_CustomRenderPass");
          FVar55 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FMobileSceneRenderer::Render(FRDGBuilder_&,FSceneRenderUpdateInputs_const_*)_::_151_::FStat_STAT_CustomRenderPass>
                    )FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CustomRenderPass,*pFVar54
                                ,L"STAT_CustomRenderPass","STATGROUP_Quick","STATCAT_Advanced",
                                L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
        }
        FVar49 = *(FName *)FVar55;
        local_7a8.ComparisonIndex.Value = 0;
        local_7a8.Number = 0;
        bVar22 = false;
        bVar21 = false;
        FVar59 = FVar49.ComparisonIndex.Value;
        uVar29 = FVar49.Number;
        if ((FVar59.Value == 0) && (uVar29 == 0)) {
LAB_144fd0d73:
          bVar23 = false;
          FVar49 = local_7a8;
        }
        else {
          if (GCycleStatsShouldEmitNamedEvents != 0) {
            local_7f8[0].Bits = 0;
            FGenericPlatformMisc::BeginNamedEvent
                      ((FColor *)&local_7f8[0]._s_0,(char *)*(FName *)((longlong)FVar55 + 0x10));
            bVar22 = false;
            bVar21 = true;
            if (-1 < CpuChannel->Enabled) {
              local_7d8.ComparisonIndex.Value = FVar59.Value;
              local_7d8.Number = uVar29;
              FCpuProfilerTrace::OutputBeginDynamicEventWithId
                        (&local_7d8,(wchar_t *)*(FName *)((longlong)FVar55 + 8),
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MobileShadingRenderer.cpp"
                         ,0x553);
              bVar22 = true;
              bVar21 = true;
            }
          }
          if (FThreadStats::bPrimaryEnable == false) goto LAB_144fd0d73;
          local_7d0 = FVar59.Value;
          uStack_7cc = uVar29;
          local_7a8 = FVar49;
          FThreadStats::AddMessage(FVar49,CycleScopeStart);
          bVar23 = true;
        }
        local_740 = '\0';
        if ((((FRHIComputeCommandList *)param_1)->field_0x16 != '\0') &&
           ((((FRHIComputeCommandList *)param_1)->field_0x16 != '\x01' ||
            ((*(longlong *)&((FRHIComputeCommandList *)param_1)->field_0x10 & 4) == 0)))) {
          if (*(int *)((longlong)local_848.Next + 0x10) == 0) {
            local_738 = (FScriptContainerElement *)0x15060d16c;
          }
          else {
            local_738 = (((FString *)((longlong)local_848.Next + 8))->Data).AllocatorInstance.Data;
          }
          if ((*(int *)((longlong)local_880 +
                       *(longlong *)((longlong)pvVar19 + (ulonglong)_tls_index * 8)) < ::_TSS0) &&
             (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            local_228 = 0;
            uStack_224 = 0;
            ::Desc._12_8_ = ZEXT48(uStack_22c);
            ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
            ::Desc._padding_._4_4_ = 0;
            ::Desc._padding_._0_4_ = 0x554;
            ::Desc._padding_ = (longlong)u_CustomRenderPas;
            InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
            ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
            ::Desc.TraceGpuSpecId = 0;
            ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
            atexit(```FMobileSceneRenderer::Render'::__l156::<lambda_5>::
                   operator()<int_&,wchar_t_const_*>'::__l3::<lambda_2>::
                   operator()<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[24],int_&,wchar_t_const_*_&&>_>'
                   ::__l2::_dynamic_atexit_destructor_for__Desc__);
            _Init_thread_footer(&::_TSS0);
          }
          param_1 = (FRDGBuilder *)local_800;
          local_498._padding_ = 0x150dd7ab0;
          local_498._Myfirst._Val = &::Desc;
          local_750.State = (FRDGScopeState *)local_800;
          local_498._padding_ = (longlong)&local_738;
          local_498._padding_ = (longlong)&local_894;
          local_498._padding_ = (longlong)(local_870 + 8);
          pFVar34 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                              ((FRDGAllocator *)&local_800->field_0x18,(FRDGScope **)local_800);
          *(FRDGScope **)param_1 = pFVar34;
          local_7c8 = (ulonglong)(pFVar34->Impl).Impl.TypeIndex;
          local_750.Scope = pFVar34;
          if ((3 < local_7c8) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                  ,0xd4,L""), bVar24)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
            ::__l2::Destructors[local_7c8])(&pFVar34->Impl);
          FRDGScope_RHI::
          FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[24],int_&,wchar_t_const_*_&&>_>,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[24],int_&,wchar_t_const_*_&&>_>
                    ((FRDGScope_RHI *)&pFVar34->Impl,(FRDGScopeState *)param_1,&local_498);
          (pFVar34->Impl).Impl.TypeIndex = '\x02';
          if (((FRHIComputeCommandList *)param_1)->field_0x14 != '\0') {
            FRDGScope::BeginCPU(pFVar34,*(FRHIComputeCommandList **)
                                         &((FRHIComputeCommandList *)param_1)->field_0xc0,false);
            FRDGScope::BeginGPU(pFVar34,*(FRHIComputeCommandList **)
                                         &((FRHIComputeCommandList *)param_1)->field_0xc0);
          }
          local_740 = '\x01';
        }
        FCustomRenderPassBase::PreRender((FCustomRenderPassBase *)local_848.Next,param_1);
        pTVar67 = (TArray<FViewInfo,TSizedDefaultAllocator<32>_> *)local_870._16_8_;
        SetDummyLocalFogVolumeForViews
                  (param_1,(TArray<FViewInfo,TSizedDefaultAllocator<32>_> *)local_870._16_8_);
        pFVar62 = local_8a0;
        if (this->bIsFullDepthPrepassEnabled != false) {
          local_5d8.Data = (FExtractedBuffer *)(pTVar67->AllocatorInstance).Data;
          iVar31 = *(int *)((longlong)pTVar67 + 8);
          if ((iVar31 < 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar24)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar62 = local_8a0;
          local_438._12_4_ = iStack_5cc;
          local_438.ArrayNum = iVar31;
          local_438.DataPtr = (FViewInfo *)local_5d8.Data;
          iStack_5d0 = iVar31;
          RenderFullDepthPrepass
                    (this,param_1,&local_438,local_8a0,(FInstanceCullingManager *)pFVar60,true);
          if (this->bRequiresSceneDepthAux == false) {
            pFVar11 = (FRDGTexture *)pFVar62->_padding_;
            pFVar13 = (FRDGTexture *)pFVar62->_padding_;
            iVar31 = *(int *)((longlong)pTVar67 + 8);
            local_5c8 = (FViewInfo *)(pTVar67->AllocatorInstance).Data;
            if ((iVar31 < 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar24)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            local_418._12_4_ = uStack_5bc;
            local_418.ArrayNum = iVar31;
            local_418.DataPtr = local_5c8;
            iStack_5c0 = iVar31;
            local_428.Target = pFVar11;
            local_428.Resolve = pFVar13;
            AddResolveSceneDepthPass(param_1,&local_418,&local_428);
            pFVar62 = local_8a0;
          }
        }
        if ((*(ERenderMode *)((longlong)local_848.Next + 0x18) == DepthAndBasePass) ||
           ((*(ERenderMode *)((longlong)local_848.Next + 0x18) == DepthPass &&
            (this->bIsFullDepthPrepassEnabled == false)))) {
          if ((*(bool *)((longlong)local_848.Next + 0x1a) == false) ||
             (((*(ERenderOutput *)((longlong)local_848.Next + 0x19) != SceneColorAndAlpha &&
               ((*(ERenderOutput *)((longlong)local_848.Next + 0x19) - SceneColorAndDepth & 0xfd) !=
                0)) && (*(bool *)((longlong)local_848.Next + 0x1b) == false)))) {
            bVar24 = false;
          }
          else {
            bVar24 = true;
          }
          local_5b8 = (FViewInfo *)((ForAnyElementType *)local_870._16_8_)->Data;
          iVar31 = *(int *)(local_870._16_8_ + 8);
          if ((iVar31 < 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar25)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar62 = local_8a0;
          local_408._12_4_ = uStack_5ac;
          local_408.ArrayNum = iVar31;
          local_408.DataPtr = local_5b8;
          iStack_5b0 = iVar31;
          RenderCustomRenderPassBasePass
                    (this,param_1,&local_408,local_878,local_8a0,(FInstanceCullingManager *)pFVar60,
                     bVar24);
          pTVar67 = (TArray<FViewInfo,TSizedDefaultAllocator<32>_> *)local_870._16_8_;
        }
        *(undefined4 *)((longlong)&pFVar62->_padding_ + 4) = 0x83;
        pTVar51 = CreateMobileSceneTextureUniformBuffer
                            (param_1,pFVar62,SceneDepthAux|SceneDepth|SceneColor);
        pFVar62->_padding_ = (longlong)pTVar51;
        local_5a8 = (FViewInfo *)(pTVar67->AllocatorInstance).Data;
        iVar31 = pTVar67->ArrayNum;
        if ((iVar31 < 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar24)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        this_04.Next = local_848.Next;
        local_3f8._12_4_ = uStack_59c;
        local_3f8.ArrayNum = iVar31;
        local_3f8.DataPtr = local_5a8;
        iStack_5a0 = iVar31;
        CopySceneCaptureComponentToTarget
                  (param_1,(FMinimalSceneTextures *)local_8a0,
                   *(FRDGTexture **)((longlong)local_848.Next + 0x20),
                   (FSceneViewFamily *)&this->field_0xb8,&local_3f8);
        FCustomRenderPassBase::PostRender((FCustomRenderPassBase *)this_04.Next,param_1);
        if ((pTVar67->ArrayNum < 1) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        uVar17 = _UNK_150631da8;
        uVar15 = ___xmm_00000001000000010000000100000001;
        if ((pTVar67->AllocatorInstance).Data[0x11e8] != (FScriptContainerElement)0x0) {
          ___xmm_00000001000000010000000100000001 = (ESamplerFilter)uVar14;
          _UNK_150631da4 = SUB84(uVar14,4);
          local_3e8.Filter = ___xmm_00000001000000010000000100000001;
          local_3e8.AddressU = _UNK_150631da4;
          _UNK_150631da8 = (ESamplerAddressMode)uVar16;
          _UNK_150631dac = SUB84(uVar16,4);
          local_3e8.AddressV = _UNK_150631da8;
          local_3e8.AddressW = _UNK_150631dac;
          ___xmm_00000001000000010000000100000001 = uVar15;
          _UNK_150631da8 = uVar17;
          FGenerateMips::Execute
                    (param_1,*(Type *)&this->field_0xad8,
                     *(FRDGTexture **)((longlong)this_04.Next + 0x20),&local_3e8,AutoDetect);
        }
        if (local_740 != '\0') {
          TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_750);
        }
        if (bVar21) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar22) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if ((((bVar23) && (FVar49 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)
            ) && (FThreadStats::TlsSlot != 0xffffffff)) {
          this_05 = TlsGetValue(FThreadStats::TlsSlot);
          if (this_05 == (FThreadStats *)0x0) {
            this_06 = FThreadStatsPool::Get();
            this_05 = FThreadStatsPool::GetFromPool(this_06);
          }
          if (this_05->bWaitForExplicitFlush < this_05->ScopeCount) {
            local_6f8.NameAndInfo.Index = FVar49.ComparisonIndex.Value;
            local_6f8.NameAndInfo.Number = FVar49.Number & 0xffff6fff | 0x6000;
            QueryPerformanceCounter(&local_700);
            local_6f8.StatData.Pad[4] = '\0';
            local_6f8.StatData.Pad[5] = '\0';
            local_6f8.StatData.Pad[6] = '\0';
            local_6f8.StatData.Pad[7] = '\0';
            local_6f8.StatData.Pad[0] = local_700.s.LowPart._0_1_;
            local_6f8.StatData.Pad[1] = local_700.s.LowPart._1_1_;
            local_6f8.StatData.Pad[2] = local_700.s.LowPart._2_1_;
            local_6f8.StatData.Pad[3] = local_700.s.LowPart._3_1_;
            FThreadStats::AddStatMessage(this_05,&local_6f8);
            piVar1 = &this_05->ScopeCount;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FThreadStats::Flush(this_05,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(this_05,false,false);
            }
          }
        }
        FCustomRenderPassBase::EndPass((FCustomRenderPassBase *)local_848.Next,param_1);
        local_894 = local_894 + 1;
        *(uint *)((longlong)&local_8a0->_padding_ + 4) = local_890;
        local_8a0->_padding_ = (longlong)local_840;
        pFVar62 = local_8a0;
        this_08 = local_820;
        cVar26 = local_720;
      } while ((int)local_894 < *(int *)&this->field_0x3e8);
    }
    if (cVar26 != '\0') {
      TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_730);
    }
    if ((local_808 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_808 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_808 & 4) != 0) {
      FThreadStats::AddMessage(local_810,CycleScopeEnd);
    }
    local_808 = 0;
  }
  if (this->bIsFullDepthPrepassEnabled != false) {
    local_538 = *(FViewInfo **)&this->field_0x10;
    iVar31 = *(int *)&this->field_0x18;
    if ((iVar31 < 0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar21)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    local_3d8._12_4_ = uStack_52c;
    local_3d8.ArrayNum = iVar31;
    local_3d8.DataPtr = local_538;
    iStack_530 = iVar31;
    RenderFullDepthPrepass(this,param_1,&local_3d8,pFVar62,(FInstanceCullingManager *)pFVar60,false)
    ;
    if (this->bRequiresSceneDepthAux == false) {
      local_3c8.Target = (FRDGTexture *)pFVar62->_padding_;
      local_3c8.Resolve = (FRDGTexture *)pFVar62->_padding_;
      pTVar43 = TArrayView<FViewInfo_const_,int>::
                TArrayView<FViewInfo_const_,int><TArray<FViewInfo,TSizedDefaultAllocator<32>_>_&,TArray<FViewInfo,TSizedDefaultAllocator<32>_>_>
                          (&local_148,
                           (TArray<FViewInfo,TSizedDefaultAllocator<32>_> *)&this->field_0x10);
      local_3b8.DataPtr = pTVar43->DataPtr;
      local_3b8.ArrayNum = pTVar43->ArrayNum;
      local_3b8._12_4_ = *(undefined4 *)&pTVar43->field_0xc;
      AddResolveSceneDepthPass(param_1,&local_3b8,&local_3c8);
    }
    *(undefined4 *)((longlong)&pFVar62->_padding_ + 4) = 2;
    pTVar51 = CreateMobileSceneTextureUniformBuffer(param_1,pFVar62,SceneDepth);
    pFVar62->_padding_ = (longlong)pTVar51;
  }
  if (EVar28 != DepthPrepassOnly) {
    if (bVar20) {
      FSceneRenderer::BeginAsyncDistanceFieldShadowProjections
                ((FSceneRenderer *)this,param_1,(FMinimalSceneTextures *)pFVar62,
                 local_6e8.DynamicShadows);
      FSceneRenderer::RenderShadowDepthMaps
                ((FSceneRenderer *)this,param_1,(FDynamicShadowsTaskData *)0x0,
                 (FInstanceCullingManager *)pFVar60,&local_858);
      FRDGBuilder::AddDispatchHint(param_1);
      FRDGExternalAccessQueue::Submit(&local_858,param_1);
    }
    bVar20 = FSceneRenderer::ShouldRenderVolumetricFog((FSceneRenderer *)this);
    if (bVar20) {
      FSceneRenderer::ComputeVolumetricFog((FSceneRenderer *)this,param_1,pFVar62);
    }
  }
  lVar61 = 0;
  local_698.DBufferTextures.DBufferA = (FRDGTexture *)0x0;
  local_698.DBufferTextures.DBufferB = (FRDGTexture *)0x0;
  local_698.DBufferTextures.DBufferC = (FRDGTexture *)0x0;
  local_698.DBufferTextures.DBufferATexArray = (FRDGTexture *)0x0;
  local_698.DBufferTextures.DBufferBTexArray = (FRDGTexture *)0x0;
  local_698.DBufferTextures.DBufferCTexArray = (FRDGTexture *)0x0;
  local_698.DBufferTextures.DBufferMask = (FRDGTexture *)0x0;
  local_698.ScreenSpaceShadowMaskTexture = (FRDGTexture *)0x0;
  local_698.AmbientOcclusionTexture = (FRDGTexture *)0x0;
  if (this->bIsFullDepthPrepassEnabled != false) {
    if (this->bShouldRenderHZB != false) {
      RenderHZB(this,param_1,(FRDGTexture *)pFVar62->_padding_);
    }
    if (EVar28 != DepthPrepassOnly) {
      local_698.AmbientOcclusionTexture = RenderAmbientOcclusion(this,param_1,pFVar62);
    }
    if ((this->bEnableDistanceFieldAO != false) &&
       ((this->bDeferredShading == false || (this->bRequiresMultiPass == false)))) {
      local_798.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_798.ArrayNum = 0;
      local_798.ArrayMax = 0;
      lVar65 = *(longlong *)(*(longlong *)&this->field_0x8 + 0x2b38);
      if ((lVar65 == 0) || ((*(byte *)(lVar65 + 0x20) & 2) != 0)) {
        fVar73 = *(float *)(*(longlong *)&this->field_0x8 + 0x4c10);
      }
      else {
        fVar73 = *(float *)(lVar65 + 0xc0);
      }
      pFVar56 = FDistanceFieldAOParameters::FDistanceFieldAOParameters(&local_1b8,fVar73,0.0);
      FSceneRenderer::RenderDistanceFieldLighting
                ((FSceneRenderer *)this,param_1,pFVar62,pFVar56,&local_798,false,false,true);
      if (local_798.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_798.AllocatorInstance.Data);
      }
    }
    if (0 < *(int *)&this->field_0x18) {
      lVar61 = *(longlong *)&this->field_0x10;
    }
    if (((pFVar62->_padding_ & 1) == 0) &&
       ((lVar61 == 0 || ((*(byte *)(lVar61 + 0x1c02) & 2) == 0)))) {
      bVar20 = false;
    }
    else {
      bVar20 = true;
    }
    if (this->bRequiresShadowProjections != false) {
      TRDGEventScopeGuard<FRDGScope_CSVExclusive>::
      TRDGEventScopeGuard<FRDGScope_CSVExclusive><char_const_(&)[30]>
                (&local_548,(FRDGScopeState *)param_1,AlwaysEnable,
                 (char (*) [30])"RenderMobileShadowProjections");
      bVar21 = false;
      local_6a8 = 0;
      if ((((FRHIComputeCommandList *)param_1)->field_0x16 != '\0') &&
         ((((FRHIComputeCommandList *)param_1)->field_0x16 != '\x01' ||
          ((*(longlong *)&((FRHIComputeCommandList *)param_1)->field_0x10 & 4) == 0)))) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          ::Desc._padding_._0_4_ = 0x5bf;
          local_208._0_4_ = 0x54bd6300;
          local_208._4_4_ = 1;
          ::Desc._padding_._0_4_ = 0x54bd6300;
          ::Desc._padding_._4_4_ = iStack_20c;
          ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
          ::Desc._padding_._4_4_ = 1;
          ::Desc._padding_ = (longlong)u_ShadowProjectio;
          ::Desc._padding_ = (longlong)u_ShadowProjectio;
          InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
          ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
          ::Desc.TraceGpuSpecId = 0;
          ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
          atexit(```FMobileSceneRenderer::Render'::__l203::<lambda_6>::operator()<>'::__l3::
                 <lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
          _Init_thread_footer(&::_TSS0);
        }
        local_3a8._Myfirst._Val = &::Desc;
        local_6b8.State = (FRDGScopeState *)param_1;
        TVar45.Reference =
             (FTaskBase *)
             FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                       ((FRDGAllocator *)&((FRHIComputeCommandList *)param_1)->field_0x18,
                        (FRDGScope **)param_1);
        *(FTaskBase **)param_1 = TVar45.Reference;
        local_6b8.Scope = (FRDGScope *)TVar45.Reference;
        TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
        Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<17>_const_*,std::tuple<>_>_>
                  ((TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>
                    *)&(TVar45.Reference)->Pipe,(FRDGScopeState *)param_1,&local_3a8);
        if (((FRHIComputeCommandList *)param_1)->field_0x14 != '\0') {
          FRDGScope::BeginCPU((FRDGScope *)TVar45.Reference,
                              *(FRHIComputeCommandList **)
                               &((FRHIComputeCommandList *)param_1)->field_0xc0,false);
          FRDGScope::BeginGPU((FRDGScope *)TVar45.Reference,
                              *(FRHIComputeCommandList **)
                               &((FRHIComputeCommandList *)param_1)->field_0xc0);
        }
        bVar21 = true;
        local_6a8 = 1;
      }
      local_698.ScreenSpaceShadowMaskTexture =
           RenderMobileShadowProjections(this,param_1,(TIntPoint<int>)pFVar62->_padding_,bVar20);
      if (this->bDeferredShading == false) {
        RenderMobileScreenSpaceShadows
                  (this,param_1,(TIntPoint<int>)pFVar62->_padding_,
                   local_698.ScreenSpaceShadowMaskTexture);
      }
      if (bVar21) {
        TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_6b8);
      }
      if (local_548.Scope != (FRDGScope *)0x0) {
        if (((local_548.State)->ScopeState).bImmediate != false) {
          FRDGScope::EndGPU(local_548.Scope,(FRHIComputeCommandList *)(local_548.State)->RHICmdList)
          ;
          FRDGScope::EndCPU(local_548.Scope,(FRHIComputeCommandList *)(local_548.State)->RHICmdList,
                            false);
        }
        FRDGScope::ImmediateEnd(local_548.Scope,local_548.State);
        puVar2 = &((local_548.State)->ScopeState).Mask;
        *puVar2 = *puVar2 & 0xfffffff7;
        ((local_548.State)->ScopeState).Current = (((local_548.State)->ScopeState).Current)->Parent;
      }
    }
    if ((EVar28 != DepthPrepassOnly) &&
       (RenderMobileLocalLightsBuffer(this,param_1,pFVar62,(FSortedLightSetSceneInfo *)local_888),
       this->bRequiresDBufferDecals != false)) {
      pFVar57 = CreateDBufferTextures
                          (&local_118,param_1,(TIntPoint<int>)pFVar62->_padding_,
                           *(EShaderPlatform *)&this->field_0xadc,bVar20);
      local_698.DBufferTextures.DBufferA = pFVar57->DBufferA;
      local_698.DBufferTextures.DBufferB = pFVar57->DBufferB;
      local_698.DBufferTextures.DBufferC = pFVar57->DBufferC;
      local_698.DBufferTextures.DBufferATexArray = pFVar57->DBufferATexArray;
      local_698.DBufferTextures.DBufferBTexArray = pFVar57->DBufferBTexArray;
      local_698.DBufferTextures.DBufferCTexArray = pFVar57->DBufferCTexArray;
      local_698.DBufferTextures.DBufferMask = pFVar57->DBufferMask;
      RenderDBuffer(this,param_1,pFVar62,&local_698.DBufferTextures,
                    (FInstanceCullingManager *)pFVar60);
    }
    iVar31 = *(int *)&this->field_0x18;
    pFVar63 = *(FViewInfo **)&this->field_0x10;
    pFVar66 = pFVar63 + iVar31;
    while( true ) {
      if (*(int *)&this->field_0x18 != iVar31) {
        local_8a5 = 0;
        `TCheckedPointerIterator<FViewInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_8a5);
      }
      if (pFVar63 == pFVar66) break;
      if (pFVar63->LocalFogVolumeViewData->bUseHalfResLocalFogVolume != false) {
        RenderLocalFogVolumeHalfResMobile(param_1,pFVar63);
      }
      pFVar63 = pFVar63 + 1;
    }
  }
  iVar31 = *(int *)&this->field_0x1a8;
  puVar50 = *(undefined8 **)&this->field_0x1a0;
  puVar68 = puVar50 + (longlong)iVar31 * 2;
  while( true ) {
    if (*(int *)&this->field_0x1a8 != iVar31) {
      local_8a4[0] = 0;
      `TCheckedPointerIterator<TSharedRef<ISceneViewExtension,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_8a4);
    }
    if (puVar50 == puVar68) break;
    (**(code **)(*(longlong *)*puVar50 + 0x48))
              ((longlong *)*puVar50,param_1,this->bIsFullDepthPrepassEnabled);
    puVar50 = puVar50 + 2;
  }
  if (EVar28 == DepthPrepassOnly) goto LAB_144fd25fd;
  if (this->bDeferredShading == false) {
    RenderForward(this,param_1,local_878,pFVar62,&local_698,(FInstanceCullingManager *)pFVar60);
  }
  else if (this->bRequiresMultiPass == false) {
    RenderDeferredSinglePass
              (this,param_1,pFVar62,(FSortedLightSetSceneInfo *)local_888,&local_698,
               (FInstanceCullingManager *)pFVar60);
  }
  else {
    RenderDeferredMultiPass
              (this,param_1,pFVar62,(FSortedLightSetSceneInfo *)local_888,&local_698,
               (FInstanceCullingManager *)pFVar60);
  }
  bVar20 = FSceneRenderer::DoOcclusionQueries((FSceneRenderer *)this);
  if ((bVar20) && (this->bIsFullDepthPrepassEnabled == false)) {
    EndOcclusionScope(param_1,(TArray<FViewInfo,TSizedDefaultAllocator<32>_> *)&this->field_0x10);
    FSceneRenderer::FenceOcclusionTests((FSceneRenderer *)this,param_1);
  }
  *(undefined4 *)((longlong)&pFVar62->_padding_ + 4) = 0xff;
  pTVar51 = CreateMobileSceneTextureUniformBuffer
                      (param_1,pFVar62,GBuffers|CustomDepth|SceneDepth|SceneColor);
  pFVar62->_padding_ = (longlong)pTVar51;
  if (this->bShouldRenderVelocities != false) {
    if ((*(longlong *)&this->field_0x8 == 0) ||
       (*(int *)(*(longlong *)&this->field_0x8 + 0x2b18) != 5)) {
      local_4e8 = *(FViewInfo **)&this->field_0x10;
      iVar31 = *(int *)&this->field_0x18;
      if ((iVar31 < 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar20)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      local_398._12_4_ = uStack_4dc;
      local_398.ArrayNum = iVar31;
      local_398.DataPtr = local_4e8;
      iStack_4e0 = iVar31;
      FSceneRenderer::RenderVelocities
                ((FSceneRenderer *)this,param_1,&local_398,pFVar62,Opaque,false,true);
    }
    local_528 = *(FViewInfo **)&this->field_0x10;
    iVar31 = *(int *)&this->field_0x18;
    if ((iVar31 < 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar20)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    local_388._12_4_ = uStack_51c;
    local_388.ArrayNum = iVar31;
    local_388.DataPtr = local_528;
    iStack_520 = iVar31;
    FSceneRenderer::RenderVelocities
              ((FSceneRenderer *)this,param_1,&local_388,pFVar62,Translucent,false,true);
    *(undefined4 *)((longlong)&pFVar62->_padding_ + 4) = 0x1ff;
    pTVar51 = CreateMobileSceneTextureUniformBuffer(param_1,pFVar62,All);
    pFVar62->_padding_ = (longlong)pTVar51;
  }
  this_07 = (FRendererModule *)GetRendererModule();
  local_518 = *(FViewInfo **)&this->field_0x10;
  iStack_510 = *(int *)&this->field_0x18;
  if ((iStack_510 < 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar20)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  local_378._12_4_ = uStack_50c;
  local_378.ArrayNum = iStack_510;
  local_378.DataPtr = local_518;
  FRendererModule::RenderPostOpaqueExtensions(this_07,param_1,&local_378,pFVar62);
  plVar10 = *(longlong **)&this->field_0xb40;
  pTVar47 = FSceneRenderer::GetSceneViews((FSceneRenderer *)this,&local_1a8);
  local_198 = *pTVar47;
  if ((plVar10 != (longlong *)0x0) && (local_198.NumElements != 0 && -1 < local_198._8_8_)) {
    local_368[0].Data = (FRHITrackedAccessInfo *)pTVar47->FirstElementPtr;
    local_368[1].Data._0_4_ = pTVar47->BytesBetweenElements;
    local_368[1].Data._4_4_ = pTVar47->NumElements;
    (**(code **)(*plVar10 + 0x98))(plVar10,param_1,local_368,&this->field_0x20);
    pFVar48 = (FGPUSortManager *)(**(code **)(*plVar10 + 0xa0))();
    if (pFVar48 != (FGPUSortManager *)0x0) {
      FGPUSortManager::OnPostRenderOpaque(pFVar48,param_1);
    }
  }
  if ((this->field_0x114 & 0x28) != 0) {
    FSceneRenderer::RenderMeshDistanceFieldVisualization
              ((FSceneRenderer *)this,param_1,(FMinimalSceneTextures *)pFVar62);
  }
  if (((this->field_0x17b == '\0') || (this->bRenderToSceneColor == false)) ||
     (this->bTonemapSubpassInline != false)) goto LAB_144fd25fd;
  local_6c8 = '\0';
  if ((((FRHIComputeCommandList *)param_1)->field_0x16 != '\0') &&
     ((((FRHIComputeCommandList *)param_1)->field_0x16 != '\x01' ||
      ((*(longlong *)&((FRHIComputeCommandList *)param_1)->field_0x10 & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Desc._padding_._0_4_ = 0x622;
      local_208._32_4_ = 0x54bc2b90;
      local_208._36_4_ = 1;
      ::Desc._padding_._0_4_ = 0x54bc2b90;
      ::Desc._padding_._4_4_ = local_208._28_4_;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_ = (longlong)u_PostProcessing;
      ::Desc._padding_ = (longlong)u_PostProcessing;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FMobileSceneRenderer::Render'::__l263::<lambda_7>::operator()<>'::__l3::<lambda_1>::
             operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_358._Myfirst._Val = &::Desc;
    local_6d8.State = (FRDGScopeState *)param_1;
    pFVar34 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&((FRHIComputeCommandList *)param_1)->field_0x18,
                         (FRDGScope **)param_1);
    *(FRDGScope **)param_1 = pFVar34;
    local_6d8.Scope = pFVar34;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<15>_const_*,std::tuple<>_>_>
              (&(pFVar34->Impl).Impl,(FRDGScopeState *)param_1,&local_358);
    if (((FRHIComputeCommandList *)param_1)->field_0x14 != '\0') {
      FRDGScope::BeginCPU(pFVar34,*(FRHIComputeCommandList **)
                                   &((FRHIComputeCommandList *)param_1)->field_0xc0,false);
      FRDGScope::BeginGPU(pFVar34,*(FRHIComputeCommandList **)
                                   &((FRHIComputeCommandList *)param_1)->field_0xc0);
    }
    local_6c8 = '\x01';
  }
  FVar58 = StatPtr_STAT_FinishRenderViewTargetTime;
  if (StatPtr_STAT_FinishRenderViewTargetTime ==
      (FThreadSafeStaticStat<FStat_STAT_FinishRenderViewTargetTime>)0x0) {
    pFVar54 = ::FName::FName(&local_330,"STAT_FinishRenderViewTargetTime");
    FVar58 = (FThreadSafeStaticStat<FStat_STAT_FinishRenderViewTargetTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FinishRenderViewTargetTime,
                        *pFVar54,L"FinishRenderViewTarget","STATGROUP_SceneRendering",
                        "STATCAT_Advanced",L"Scene Rendering",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar49 = *(FName *)FVar58;
  bVar20 = false;
  bVar22 = false;
  local_7b8.ComparisonIndex.Value = 0;
  local_7b8.Number = 0;
  bVar21 = false;
  bVar23 = false;
  if ((FVar49.ComparisonIndex.Value.Value == 0) && (FVar49.Number == 0)) {
LAB_144fd1f7b:
    bVar22 = bVar23;
    bVar20 = bVar21;
    bVar21 = false;
    local_888 = local_7b8;
    FVar49 = local_7b8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_818[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_818[0]._s_0,(char *)*(FName *)((longlong)FVar58 + 0x10));
      bVar20 = false;
      bVar22 = true;
      bVar21 = false;
      bVar23 = true;
      if (-1 < CpuChannel->Enabled) {
        local_7c0.ComparisonIndex.Value = FVar49.ComparisonIndex.Value.Value;
        local_7c0.Number = FVar49.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_7c0,(wchar_t *)*(FName *)((longlong)FVar58 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MobileShadingRenderer.cpp"
                   ,0x624);
        bVar20 = true;
        bVar22 = true;
        bVar21 = true;
        bVar23 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_144fd1f7b;
    local_888 = FVar49;
    local_880 = FVar49;
    FThreadStats::AddMessage(FVar49,CycleScopeStart);
    bVar21 = true;
  }
  FinishUpdateExposureCompensationCurveLUT
            (*(FRHICommandListImmediate **)&((FRHIComputeCommandList *)param_1)->field_0xc0,
             &local_778);
  local_608.ViewFamilyTexture = local_878;
  local_608.ViewFamilyDepthTexture = (FRDGTexture *)0x0;
  local_608.SceneTextures = CreateMobileSceneTextureUniformBuffer(param_1,pFVar62,All);
  local_890 = 0;
  if (0 < *(int *)&this->field_0x1a8) {
    do {
      uVar29 = 0;
      if (0 < *(int *)&this->field_0xc8) {
        lVar65 = (longlong)(int)local_890;
        local_870._16_4_ = ~local_890 >> 0x1f;
        lVar61 = 0;
        do {
          uVar33 = 0;
          if ((int)uVar29 < *(int *)&this->field_0x18) {
            uVar33 = ~uVar29 >> 0x1f;
          }
          if ((uVar33 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          local_800 = *(FRHIComputeCommandList **)&((FRHIComputeCommandList *)param_1)->field_0xc0;
          local_840 = (FUniqueRequestList *)(*(longlong *)&this->field_0x10 + lVar61);
          FVar6.GPUMask = *(uint *)&local_800->field_0x29c;
          FRHIComputeCommandList::SetGPUMask
                    (local_800,
                     (FRHIGPUMask)*(uint *)((local_840->LoadRequestHash).NextIndex + 0x2f0));
          iVar31 = 0;
          if ((int)local_890 < *(int *)&this->field_0x1a8) {
            iVar31 = local_870._16_4_;
          }
          if ((iVar31 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          plVar10 = *(longlong **)(*(longlong *)&this->field_0x1a0 + lVar65 * 0x10);
          (**(code **)(*plVar10 + 0x70))(plVar10,param_1,local_840,&local_608);
          FRHIComputeCommandList::SetGPUMask(local_800,FVar6);
          uVar29 = uVar29 + 1;
          lVar61 = lVar61 + 0x2970;
        } while ((int)uVar29 < *(int *)&this->field_0xc8);
      }
      local_890 = local_890 + 1;
      FVar49 = local_888;
      this_08 = local_820;
    } while ((int)local_890 < *(int *)&this->field_0x1a8);
  }
  pvVar19 = ThreadLocalStoragePointer;
  local_898 = 0;
  if (0 < *(int *)&this->field_0x18) {
    do {
      uVar29 = local_898;
      uVar33 = 0;
      if ((int)local_898 < *(int *)&this->field_0x18) {
        uVar33 = ~local_898 >> 0x1f;
      }
      if ((uVar33 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      lVar65 = (longlong)(int)uVar29 * 0x2970;
      lVar61 = *(longlong *)&this->field_0x10;
      if (((*(byte *)(lVar65 + 0x24b8 + lVar61) & 2) == 0) &&
         ((*(char *)(lVar65 + 0x11f7 + lVar61) == '\0' || (*(int *)(lVar65 + 0xdd0 + lVar61) != 2)))
         ) {
        local_758 = '\0';
        if ((1 < *(int *)&this->field_0x18) &&
           ((((FRHIComputeCommandList *)param_1)->field_0x16 != '\0' &&
            ((((FRHIComputeCommandList *)param_1)->field_0x16 != '\x01' ||
             ((*(longlong *)&((FRHIComputeCommandList *)param_1)->field_0x10 & 4) == 0)))))) {
          if ((*(int *)(*(longlong *)((longlong)pvVar19 + (ulonglong)_tls_index * 8) + 0x9d4c) <
               ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            ::Desc._padding_._0_4_ = 0x63a;
            ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
            local_1c8[0] = '\0';
            local_1c8[1] = '\0';
            local_1c8[2] = '\0';
            local_1c8[3] = '\0';
            local_1c8[4] = '\0';
            local_1c8[5] = '\0';
            local_1c8[6] = '\0';
            local_1c8[7] = '\0';
            ::Desc._12_8_ = ZEXT48(uStack_1cc);
            ::Desc._padding_._4_4_ = 0;
            ::Desc._padding_ = (longlong)u_View_d;
            ::Desc._padding_ = (longlong)u_View_d;
            InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
            ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
            ::Desc.TraceGpuSpecId = 0;
            ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
            atexit(```FMobileSceneRenderer::Render'::__l277::<lambda_8>::operator()<int_&>'::__l3::
                   <lambda_1>::operator()<int_&>'::__l2::_dynamic_atexit_destructor_for__Desc__);
            _Init_thread_footer(&::_TSS0);
          }
          local_568._padding_ = (longlong)&local_898;
          local_568._Myfirst._Val = &::Desc;
          local_768.State = (FRDGScopeState *)param_1;
          pFVar34 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                              ((FRDGAllocator *)&((FRHIComputeCommandList *)param_1)->field_0x18,
                               (FRDGScope **)param_1);
          *(FRDGScope **)param_1 = pFVar34;
          uVar72 = (ulonglong)(pFVar34->Impl).Impl.TypeIndex;
          local_768.Scope = pFVar34;
          if ((3 < uVar72) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                  ,0xd4,L""), bVar23)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
            ::__l2::Destructors[uVar72])(&pFVar34->Impl);
          pFVar35 = FRDGScopeState::GetBreadcrumbAllocator((FRDGScopeState *)param_1);
          pFVar36 = FRHIBreadcrumbAllocator::
                    AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<7,int>,int_&>
                              (pFVar35,&local_568);
          FRDGScope_RHI::FRDGScope_RHI
                    ((FRDGScope_RHI *)&pFVar34->Impl,(FRDGScopeState *)param_1,pFVar36);
          (pFVar34->Impl).Impl.TypeIndex = '\x02';
          if (((FRHIComputeCommandList *)param_1)->field_0x14 != '\0') {
            FRDGScope::BeginCPU(pFVar34,*(FRHIComputeCommandList **)
                                         &((FRHIComputeCommandList *)param_1)->field_0xc0,false);
            FRDGScope::BeginGPU(pFVar34,*(FRHIComputeCommandList **)
                                         &((FRHIComputeCommandList *)param_1)->field_0xc0);
          }
          local_758 = '\x01';
        }
        uVar29 = local_898;
        lVar61 = (longlong)(int)local_898;
        if (this->bTonemapSubpass == false) {
          uVar33 = 0;
          if ((int)local_898 < *(int *)&this->field_0x18) {
            uVar33 = ~local_898 >> 0x1f;
          }
          if ((uVar33 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          AddMobilePostProcessingPasses
                    (param_1,*(FScene **)&this->field_0x8,
                     (FViewInfo *)(lVar61 * 0x2970 + *(longlong *)&this->field_0x10),uVar29,
                     (FSceneUniformBuffer *)&this->field_0x20,&local_608,
                     (FInstanceCullingManager *)pFVar60);
          pFVar62 = local_8a0;
        }
        else {
          uVar29 = 0;
          if ((int)local_898 < *(int *)&this->field_0x18) {
            uVar29 = ~local_898 >> 0x1f;
          }
          if ((uVar29 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar62 = local_8a0;
          AddMobileCustomResolvePass
                    (param_1,(FViewInfo *)(lVar61 * 0x2970 + *(longlong *)&this->field_0x10),
                     local_8a0,local_878);
        }
        pTVar18 = CVarMobileXRMSAAMode.Ref;
        bVar23 = IsInParallelGameThread();
        if ((bVar23) || (bVar23 = IsInGameThread(), bVar23)) {
          lVar61 = 0;
        }
        else {
          lVar61 = 4;
        }
        TVar9.field0_0x0 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
        if (*(int *)((longlong)pTVar18->ShadowedValue + lVar61) == 1) {
          local_840 = (FUniqueRequestList *)pFVar62->_padding_;
          pFVar11 = (FRDGTexture *)pFVar62->_padding_;
          lVar61 = (longlong)(int)local_898;
          uVar29 = 0;
          if ((int)local_898 < *(int *)&this->field_0x18) {
            uVar29 = ~local_898 >> 0x1f;
          }
          if ((uVar29 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          lVar65 = *(longlong *)&this->field_0x10;
          lVar61 = lVar61 * 0x2970;
          local_788 = *(undefined4 *)(lVar61 + 0x1bf8 + lVar65);
          uStack_784 = *(undefined4 *)(lVar61 + 0xdd4 + lVar65);
          iStack_780 = *(int *)(lVar61 + 0x1bfc + lVar65);
          iStack_77c = CONCAT31(iStack_77c._1_3_,*(undefined1 *)(lVar61 + 0xde6 + lVar65));
          local_348.Data = (TRefCountPtr<FRDGPooledBuffer> *)CONCAT44(uStack_784,local_788);
          uStack_340._4_4_ = iStack_77c;
          uStack_340._0_4_ = iStack_780;
          AddDrawTexturePass(param_1,(FScreenPassViewInfo *)&local_348,(FRDGTexture *)local_840,
                             pFVar11,TVar9,TVar9,TVar9);
        }
        if (local_758 != '\0') {
          TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_768);
        }
      }
      local_898 = local_898 + 1;
      FVar49 = local_888;
      this_08 = local_820;
    } while ((int)local_898 < *(int *)&this->field_0x18);
  }
  if (bVar22) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar21) {
    FThreadStats::AddMessage(FVar49,CycleScopeEnd);
  }
  if (local_6c8 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_6d8);
  }
LAB_144fd25fd:
  TMulticastDelegate<void___cdecl(FRDGBuilder_&),FDefaultDelegateUserPolicy>::Broadcast
            (&GEngine->PostRenderDelegateEx,param_1);
  FSceneExtensionsRenderers::PostRender((FSceneExtensionsRenderers *)&this->field_0x60,param_1);
  FinishUpdateExposureCompensationCurveLUT
            (*(FRHICommandListImmediate **)&((FRHIComputeCommandList *)param_1)->field_0xc0,
             &local_778);
  if (this->bUseVirtualTexturing != false) {
    VirtualTexture::EndFeedback(param_1);
  }
  if (((EVar28 != DepthPrepassOnly) && (this->bShouldRenderHZB != false)) &&
     (this->bRequiresMultiPass == false)) {
    RenderHZB(this,param_1,(FRDGTexture *)local_8a0->_padding_);
  }
  FSceneRenderer::OnRenderFinish((FSceneRenderer *)this,param_1,local_878);
  QueueSceneTextureExtractions(param_1,local_8a0);
  Substrate::PostRender(*(FScene **)&this->field_0x8);
  this_03 = *(FInstanceCullingOcclusionQueryRenderer **)(*(longlong *)&this->field_0x8 + 0x4d48);
  if (this_03 != (FInstanceCullingOcclusionQueryRenderer *)0x0) {
    FInstanceCullingOcclusionQueryRenderer::EndFrame(this_03,param_1);
  }
  TDefaultDelete<FVirtualTextureUpdater>::operator()
            ((TDefaultDelete<FVirtualTextureUpdater> *)local_870,
             (FVirtualTextureUpdater *)local_870._0_8_);
  local_558 = *(longlong *)&this->field_0x10;
  iStack_550 = *(int *)&this->field_0x18;
  if ((iStack_550 < 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar20)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  FStack_2e0.Pimpl.Reference._4_4_ = uStack_54c;
  FStack_2e0.Pimpl.Reference._0_4_ = iStack_550;
  local_308._32_8_ = local_558;
  ShaderPrint::EndViews((TArrayView<FViewInfo,int> *)(local_308 + 0x20));
  if ((local_7e8 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_7e8 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_7e8 & 4) != 0) {
    FThreadStats::AddMessage(local_7f0,CycleScopeEnd);
  }
  local_7e8 = 0;
  FCsvProfiler::EndExclusiveStat("RenderOther");
  FGPUScene::EndRender(this_08);
  GPUMessage::FScope::~FScope(&local_6c0);
  if ((local_858.Resources.ArrayNum != 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                          ,0x4fe,L"Submit must be called before destruction."), bVar20)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if (local_778.Task.Pimpl.Reference != (FTaskBase *)0x0) {
    LOCK();
    paVar3 = (atomic<unsigned_int> *)((longlong)local_778.Task.Pimpl.Reference + 0x30);
    aVar30 = *paVar3;
    *paVar3 = (atomic<unsigned_int>)((int)*paVar3 + -1);
    UNLOCK();
    if (aVar30 == (atomic<unsigned_int>)0x1) {
      (*(code *)**(undefined8 **)local_778.Task.Pimpl.Reference)(local_778.Task.Pimpl.Reference,1);
    }
  }
  if (local_4c8 != '\0') {
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_4d8);
  }
  if (local_708 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_718);
  }
  return;
}

// RenderCustomRenderPassBasePass @ 144fd2840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000144fd320f) */
/* WARNING: Removing unreachable block (ram,0x000144fd321c) */
/* WARNING: Removing unreachable block (ram,0x000144fd33df) */
/* WARNING: Removing unreachable block (ram,0x000144fd33ec) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMobileSceneRenderer::RenderCustomRenderPassBasePass
          (FMobileSceneRenderer *this,FRDGBuilder *param_1,TArrayView<FViewInfo,int> *param_2,
          FRDGTexture *param_3,FSceneTextures *param_4,FInstanceCullingManager *param_5,bool param_6
          )

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FDepthStencilBinding *this_00;
  TRDGHandleRegistry<TRDGHandle<FRDGPass,unsigned_int>,0> *pTVar3;
  FViewInfo *pFVar4;
  code *pcVar5;
  FRDGTexture *pFVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  wchar_t *pwVar10;
  FSceneTextures *pFVar11;
  TArray<FRenderViewContext,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar12;
  bool bVar13;
  undefined1 uVar14;
  ERDGPassFlags EVar15;
  int iVar16;
  FRenderTargetBindingSlots *pFVar17;
  ForElementType<FRenderViewContext> FVar18;
  undefined8 *puVar19;
  FViewShaderParameters *pFVar20;
  FMobileBasePassUniformParameters *pFVar21;
  TRDGUniformBuffer<FMobileBasePassUniformParameters> *pTVar22;
  FShaderParametersMetadata *pFVar23;
  FRDGTexture **ppFVar24;
  FMobileRenderPassParameters *pFVar25;
  FRDGEventName *pFVar26;
  wchar_t *pwVar27;
  FRDGPass *pFVar28;
  longlong lVar29;
  ulonglong uVar30;
  undefined8 *puVar31;
  ulonglong uVar32;
  EMobileSceneTextureSetupMode EVar33;
  undefined1 auStackY_678 [32];
  undefined1 local_628 [4];
  EMobileSceneTextureSetupMode local_624;
  int local_620;
  uint local_61c;
  undefined8 *local_618;
  TArray<FRenderViewContext,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *local_610;
  FInstanceCullingManager *local_608;
  FViewInfo *local_600;
  FSceneTextures *local_5f8;
  TArray<FRenderViewContext,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *local_5f0;
  FMobileSceneRenderer *local_5e8;
  TArrayView<FViewInfo,int> *local_5e0;
  FRDGEventName *local_5d8;
  TRDGUniformBuffer<FMobileBasePassUniformParameters> *local_5c8;
  EUniformBufferBindingFlags EStack_5c0;
  undefined7 uStack_5bf;
  TRDGUniformBuffer<FMobileBasePassUniformParameters> *local_5b8;
  EUniformBufferBindingFlags EStack_5b0;
  undefined7 uStack_5af;
  FMobileSceneRenderer *local_5a8;
  FScriptContainerElement *pFStack_5a0;
  undefined8 local_598;
  wchar_t *pwStack_590;
  int local_588;
  undefined4 uStack_584;
  FRDGParameterStruct local_580;
  FRDGParameterStruct local_568;
  FMobileSceneRenderer *local_550;
  FMobileRenderPassParameters *pFStack_548;
  undefined8 local_540;
  wchar_t *pwStack_538;
  FViewInfo *local_530;
  undefined8 uStack_528;
  FSceneTextures *local_520;
  FRDGTextureMSAA local_518;
  FRDGTextureMSAA local_508;
  TArrayView<FViewInfo,int> local_4f8;
  FRDGEventName local_4e8;
  FRDGEventName local_4d0;
  FMobileBasePassTextures local_4b8;
  FMobileBasePassTextures local_470;
  FViewShaderParameters local_428;
  FViewShaderParameters local_408;
  FRenderTargetBindingSlots local_3e8;
  FRDGTexture *local_2e8;
  FRDGTexture *pFStack_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined4 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined4 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined4 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined4 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined4 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined4 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined4 local_230;
  FRDGTexture *local_228;
  FRDGTexture *pFStack_220;
  undefined2 local_218;
  undefined2 uStack_216;
  undefined4 uStack_214;
  undefined8 local_210;
  undefined8 local_208;
  undefined4 local_200;
  undefined2 local_1fc;
  undefined8 local_1f8;
  TArray<FRenderViewContext,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  local_1e8;
  TArray<FRDGTexture_*,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_> local_1b8;
  FRenderTargetBindingSlots local_178;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_678;
  local_608 = param_5;
  local_5f8 = param_4;
  local_61c = 0;
  local_2e8 = (FRDGTexture *)0x0;
  pFStack_2e0 = (FRDGTexture *)0x0;
  local_2d8 = 0xffff0000;
  uStack_2d0 = 0;
  local_2c8 = 0;
  uStack_2c0 = 0xffff0000;
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_2a8 = 0xffff0000;
  uStack_2a0 = 0;
  local_298 = 0;
  uStack_290 = 0xffff0000;
  local_288 = 0;
  uStack_280 = 0;
  local_278 = 0xffff0000;
  uStack_270 = 0;
  local_268 = 0;
  local_260 = 0xffff0000;
  local_258 = 0;
  uStack_250 = 0;
  local_248 = 0xffff0000;
  local_240 = 0;
  local_238 = 0;
  local_230 = 0xffff0000;
  local_228 = (FRDGTexture *)0x0;
  pFStack_220 = (FRDGTexture *)0x0;
  local_218 = 0;
  uStack_214 = 0;
  local_210 = 0xffffffffffffffff;
  local_208 = 0xffffffffffffffff;
  local_200 = 0;
  local_1fc = 0;
  local_1f8 = 0;
  local_5e8 = this;
  local_5e0 = param_2;
  if (this->bDeferredShading == false) {
    pFVar17 = InitRenderTargetBindings_Forward(this,&local_178,param_3,param_4);
    lVar29 = 2;
    ppFVar24 = &local_2e8;
    do {
      pFVar6 = (pFVar17->Output).Elements[0].ResolveTexture;
      *ppFVar24 = (pFVar17->Output).Elements[0].Texture;
      ppFVar24[1] = pFVar6;
      pFVar6 = (pFVar17->Output).Elements[1].Texture;
      ppFVar24[2] = *(FRDGTexture **)&(pFVar17->Output).Elements[0].LoadAction;
      ppFVar24[3] = pFVar6;
      pFVar6 = *(FRDGTexture **)&(pFVar17->Output).Elements[1].LoadAction;
      ppFVar24[4] = (pFVar17->Output).Elements[1].ResolveTexture;
      ppFVar24[5] = pFVar6;
      pFVar6 = (pFVar17->Output).Elements[2].ResolveTexture;
      ppFVar24[6] = (pFVar17->Output).Elements[2].Texture;
      ppFVar24[7] = pFVar6;
      pFVar6 = (pFVar17->Output).Elements[3].Texture;
      ppFVar24[8] = *(FRDGTexture **)&(pFVar17->Output).Elements[2].LoadAction;
      ppFVar24[9] = pFVar6;
      pFVar6 = *(FRDGTexture **)&(pFVar17->Output).Elements[3].LoadAction;
      ppFVar24[10] = (pFVar17->Output).Elements[3].ResolveTexture;
      ppFVar24[0xb] = pFVar6;
      pFVar6 = (pFVar17->Output).Elements[4].ResolveTexture;
      ppFVar24[0xc] = (pFVar17->Output).Elements[4].Texture;
      ppFVar24[0xd] = pFVar6;
      pFVar6 = (pFVar17->Output).Elements[5].Texture;
      ppFVar24[0xe] = *(FRDGTexture **)&(pFVar17->Output).Elements[4].LoadAction;
      ppFVar24[0xf] = pFVar6;
      lVar29 = lVar29 + -1;
      pFVar17 = (FRenderTargetBindingSlots *)&(pFVar17->Output).Elements[5].ResolveTexture;
      ppFVar24 = ppFVar24 + 0x10;
    } while (lVar29 != 0);
    local_1fc = CONCAT11(local_1fc._1_1_,1);
    local_620 = 1;
  }
  else {
    GetColorTargets_Deferred(this,&local_1b8,param_4);
    pFVar17 = InitRenderTargetBindings_Deferred(this,&local_3e8,param_4,&local_1b8);
    lVar29 = 2;
    ppFVar24 = &local_2e8;
    do {
      pFVar6 = (pFVar17->Output).Elements[0].ResolveTexture;
      *ppFVar24 = (pFVar17->Output).Elements[0].Texture;
      ppFVar24[1] = pFVar6;
      pFVar6 = (pFVar17->Output).Elements[1].Texture;
      ppFVar24[2] = *(FRDGTexture **)&(pFVar17->Output).Elements[0].LoadAction;
      ppFVar24[3] = pFVar6;
      pFVar6 = *(FRDGTexture **)&(pFVar17->Output).Elements[1].LoadAction;
      ppFVar24[4] = (pFVar17->Output).Elements[1].ResolveTexture;
      ppFVar24[5] = pFVar6;
      pFVar6 = (pFVar17->Output).Elements[2].ResolveTexture;
      ppFVar24[6] = (pFVar17->Output).Elements[2].Texture;
      ppFVar24[7] = pFVar6;
      pFVar6 = (pFVar17->Output).Elements[3].Texture;
      ppFVar24[8] = *(FRDGTexture **)&(pFVar17->Output).Elements[2].LoadAction;
      ppFVar24[9] = pFVar6;
      pFVar6 = *(FRDGTexture **)&(pFVar17->Output).Elements[3].LoadAction;
      ppFVar24[10] = (pFVar17->Output).Elements[3].ResolveTexture;
      ppFVar24[0xb] = pFVar6;
      pFVar6 = (pFVar17->Output).Elements[4].ResolveTexture;
      ppFVar24[0xc] = (pFVar17->Output).Elements[4].Texture;
      ppFVar24[0xd] = pFVar6;
      pFVar6 = (pFVar17->Output).Elements[5].Texture;
      ppFVar24[0xe] = *(FRDGTexture **)&(pFVar17->Output).Elements[4].LoadAction;
      ppFVar24[0xf] = pFVar6;
      lVar29 = lVar29 + -1;
      pFVar17 = (FRenderTargetBindingSlots *)&(pFVar17->Output).Elements[5].ResolveTexture;
      ppFVar24 = ppFVar24 + 0x10;
    } while (lVar29 != 0);
    bVar13 = MobileAllowFramebufferFetch
                       ((FStaticShaderPlatform)*(EShaderPlatform *)&this->field_0xadc);
    uVar14 = (undefined1)local_1fc;
    if (bVar13) {
      uVar14 = 2;
    }
    local_620 = (uint)bVar13 * 2;
    local_1fc = CONCAT11(local_1fc._1_1_,uVar14);
    if (local_1b8.AllocatorInstance.SecondaryData != (ForElementType<FRDGTexture_*>)0x0) {
      FMemory::Free((void *)local_1b8.AllocatorInstance.SecondaryData);
    }
  }
  local_4f8.DataPtr = param_2->DataPtr;
  local_4f8.ArrayNum = param_2->ArrayNum;
  local_4f8._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_1e8.AllocatorInstance.SecondaryData.Data = (FRenderViewContext *)0x0;
  local_1e8.ArrayNum = 0;
  local_1e8.ArrayMax = 2;
  GetRenderViews(&local_4f8,&local_1e8);
  uVar30 = (ulonglong)local_1e8.ArrayNum;
  local_61c = local_1e8.ArrayNum;
  FVar18.Data = (FRenderViewContext *)&local_1e8;
  if ((TArray<FRenderViewContext,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
       *)local_1e8.AllocatorInstance.SecondaryData.Data !=
      (TArray<FRenderViewContext,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
       *)0x0) {
    FVar18.Data = local_1e8.AllocatorInstance.SecondaryData.Data;
  }
  local_5f0 = (TArray<FRenderViewContext,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
               *)((((TArray<FRenderViewContext,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                     *)FVar18.Data)->AllocatorInstance).InlineData + uVar30 * 0x10);
  uVar32 = uVar30;
  while( true ) {
    pTVar12 = local_5f0;
    puVar31 = (undefined8 *)0x0;
    local_610 = (TArray<FRenderViewContext,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                 *)FVar18.Data;
    if ((int)uVar30 != (int)uVar32) {
      local_628[0] = 0;
      `TCheckedPointerIterator<FRenderViewContext,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_628);
    }
    if ((TArray<FRenderViewContext,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)FVar18.Data == pTVar12) {
      if ((TArray<FRenderViewContext,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
           *)local_1e8.AllocatorInstance.SecondaryData.Data !=
          (TArray<FRenderViewContext,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
           *)0x0) {
        TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                  (local_1e8.AllocatorInstance.SecondaryData.Data);
      }
      return;
    }
    pFVar4 = *(FViewInfo **)
              (((TArray<FRenderViewContext,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                 *)FVar18.Data)->AllocatorInstance).InlineData;
    local_600 = pFVar4;
    puVar19 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x270,0x10);
    if (puVar19 == (undefined8 *)0x0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Object",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                          ,0x61,L"");
      if (bVar13) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      *puVar19 = &FRDGAllocator::
                  TObject<`FMobileSceneRenderer::RenderCustomRenderPassBasePass'::`14'::FCustomPassParameterCollection>
                  ::_vftable_;
      memset(puVar19 + 2,0,0x260);
      FMobileRenderPassParameters::FMobileRenderPassParameters
                ((FMobileRenderPassParameters *)(puVar19 + 2));
      puVar19[0x42] = 0;
      *(undefined4 *)(puVar19 + 0x43) = 4;
      puVar19[0x44] = 0;
      *(undefined4 *)(puVar19 + 0x45) = 8;
      puVar19[0x48] = 0;
      *(undefined1 *)(puVar19 + 0x49) = 1;
      puVar19[0x4a] = 0;
      *(undefined1 *)(puVar19 + 0x4b) = 1;
      puVar19[0x4c] = 0;
      *(undefined1 *)(puVar19 + 0x4d) = 1;
      puVar31 = puVar19;
    }
    local_618 = puVar31;
    if ((((undefined8 **)param_1->_padding_ <= &local_618) &&
        (&local_618 <
         (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar16 = (int)param_1->_padding_;
    piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
    if (iVar16 == *piVar1) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
    }
    pFVar2 = (FScriptContainerElement *)(puVar31 + 2);
    *(int *)&param_1->_padding_ = iVar16 + 1;
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar16 * 8) = local_618;
    EVar33 = -(uint)(this->bIsFullDepthPrepassEnabled != false) & SceneDepth;
    local_624 = EVar33;
    pFVar20 = FViewInfo::GetShaderParameters(pFVar4,&local_428);
    local_4b8.AmbientOcclusionTexture = (FRDGTexture *)0x0;
    uVar7 = *(undefined8 *)&(pFVar20->View).field_0x8;
    *(undefined8 *)pFVar2 = *(undefined8 *)&pFVar20->View;
    puVar31[3] = uVar7;
    uVar7 = *(undefined8 *)&(pFVar20->InstancedView).field_0x8;
    puVar31[4] = *(undefined8 *)&pFVar20->InstancedView;
    puVar31[5] = uVar7;
    local_4b8.DBufferTextures.DBufferC = (FRDGTexture *)0x0;
    local_4b8.DBufferTextures.DBufferATexArray = (FRDGTexture *)0x0;
    local_4b8.DBufferTextures.DBufferMask = (FRDGTexture *)0x0;
    local_4b8.ScreenSpaceShadowMaskTexture = (FRDGTexture *)0x0;
    local_4b8.DBufferTextures.DBufferA = (FRDGTexture *)0x0;
    local_4b8.DBufferTextures.DBufferB = (FRDGTexture *)0x0;
    local_4b8.DBufferTextures.DBufferBTexArray = (FRDGTexture *)0x0;
    local_4b8.DBufferTextures.DBufferCTexArray = (FRDGTexture *)0x0;
    pFVar21 = FRDGBuilder::AllocParameters<FMobileBasePassUniformParameters>(param_1);
    SetupMobileBasePassUniformParameters
              (param_1,pFVar4,Opaque,EVar33,pFVar21,&local_4b8,false,false);
    pTVar22 = FRDGBuilder::CreateUniformBuffer<FMobileBasePassUniformParameters>(param_1,pFVar21);
    pFVar23 = FMobileBasePassUniformParameters::GetStructMetadata();
    EStack_5c0 = Static;
    if (pFVar23->BindingFlags != StaticAndShader) {
      EStack_5c0 = pFVar23->BindingFlags;
    }
    lVar29 = 2;
    puVar31[0x12] = pTVar22;
    puVar31[0x13] = CONCAT71(uStack_5bf,EStack_5c0);
    ppFVar24 = &local_2e8;
    puVar19 = puVar31 + 0x22;
    do {
      pFVar6 = ppFVar24[1];
      *puVar19 = *ppFVar24;
      puVar19[1] = pFVar6;
      pFVar6 = ppFVar24[3];
      puVar19[2] = ppFVar24[2];
      puVar19[3] = pFVar6;
      pFVar6 = ppFVar24[5];
      puVar19[4] = ppFVar24[4];
      puVar19[5] = pFVar6;
      pFVar6 = ppFVar24[7];
      puVar19[6] = ppFVar24[6];
      puVar19[7] = pFVar6;
      pFVar6 = ppFVar24[9];
      puVar19[8] = ppFVar24[8];
      puVar19[9] = pFVar6;
      pFVar6 = ppFVar24[0xb];
      puVar19[10] = ppFVar24[10];
      puVar19[0xb] = pFVar6;
      pFVar6 = ppFVar24[0xd];
      puVar19[0xc] = ppFVar24[0xc];
      puVar19[0xd] = pFVar6;
      pFVar6 = ppFVar24[0xf];
      puVar19[0xe] = ppFVar24[0xe];
      puVar19[0xf] = pFVar6;
      lVar29 = lVar29 + -1;
      ppFVar24 = ppFVar24 + 0x10;
      puVar19 = puVar19 + 0x10;
    } while (lVar29 != 0);
    pFVar25 = (FMobileRenderPassParameters *)0x0;
    local_5c8 = pTVar22;
    if (param_6) {
      pFVar25 = FRDGBuilder::AllocParameters<FMobileRenderPassParameters>(param_1);
      pFVar20 = FViewInfo::GetShaderParameters(pFVar4,&local_408);
      local_470.AmbientOcclusionTexture = (FRDGTexture *)0x0;
      uVar7 = *(undefined8 *)&(pFVar20->View).field_0x8;
      uVar8 = *(undefined8 *)&pFVar20->InstancedView;
      uVar9 = *(undefined8 *)&(pFVar20->InstancedView).field_0x8;
      *(undefined8 *)&(pFVar25->View).View = *(undefined8 *)&pFVar20->View;
      *(undefined8 *)&(pFVar25->View).View.field_0x8 = uVar7;
      *(undefined8 *)&(pFVar25->View).InstancedView = uVar8;
      *(undefined8 *)&(pFVar25->View).InstancedView.field_0x8 = uVar9;
      local_470.DBufferTextures.DBufferC = (FRDGTexture *)0x0;
      local_470.DBufferTextures.DBufferATexArray = (FRDGTexture *)0x0;
      local_470.DBufferTextures.DBufferMask = (FRDGTexture *)0x0;
      local_470.ScreenSpaceShadowMaskTexture = (FRDGTexture *)0x0;
      local_470.DBufferTextures.DBufferA = (FRDGTexture *)0x0;
      local_470.DBufferTextures.DBufferB = (FRDGTexture *)0x0;
      local_470.DBufferTextures.DBufferBTexArray = (FRDGTexture *)0x0;
      local_470.DBufferTextures.DBufferCTexArray = (FRDGTexture *)0x0;
      pFVar21 = FRDGBuilder::AllocParameters<FMobileBasePassUniformParameters>(param_1);
      SetupMobileBasePassUniformParameters
                (param_1,pFVar4,Translucent,local_624,pFVar21,&local_470,false,false);
      pTVar22 = FRDGBuilder::CreateUniformBuffer<FMobileBasePassUniformParameters>(param_1,pFVar21);
      pFVar23 = FMobileBasePassUniformParameters::GetStructMetadata();
      EStack_5b0 = Static;
      if (pFVar23->BindingFlags != StaticAndShader) {
        EStack_5b0 = pFVar23->BindingFlags;
      }
      *(TRDGUniformBuffer<FMobileBasePassUniformParameters> **)&pFVar25->MobileBasePass = pTVar22;
      *(ulonglong *)&(pFVar25->MobileBasePass).field_0x8 = CONCAT71(uStack_5af,EStack_5b0);
      (pFVar25->RenderTargets).Output.Elements[0].Texture = local_2e8;
      (pFVar25->RenderTargets).Output.Elements[0].ResolveTexture = pFStack_2e0;
      (pFVar25->RenderTargets).Output.Elements[0].LoadAction = (char)local_2d8;
      (pFVar25->RenderTargets).Output.Elements[0].MipIndex = (char)((uint)local_2d8 >> 8);
      (pFVar25->RenderTargets).Output.Elements[0].ArraySlice = (short)((uint)local_2d8 >> 0x10);
      *(undefined4 *)&(pFVar25->RenderTargets).Output.Elements[0].field_0x14 = uStack_2d4;
      (pFVar25->RenderTargets).Output.Elements[0].LoadAction = ELoad;
      local_5b8 = pTVar22;
      bVar13 = FRenderTargetBinding::Validate((FRenderTargetBinding *)&pFVar25->RenderTargets);
      if ((!bVar13) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Validate()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                              ,0x256,L""), bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_00 = &(pFVar25->RenderTargets).DepthStencil;
      this_00->Texture = local_228;
      (pFVar25->RenderTargets).DepthStencil.ResolveTexture = pFStack_220;
      (pFVar25->RenderTargets).DepthStencil.DepthLoadAction = (char)local_218;
      (pFVar25->RenderTargets).DepthStencil.StencilLoadAction = (char)((ushort)local_218 >> 8);
      *(undefined2 *)&(pFVar25->RenderTargets).DepthStencil.field_0x12 = uStack_216;
      (pFVar25->RenderTargets).DepthStencil.DepthStencilAccess = (FExclusiveDepthStencil)uStack_214;
      (pFVar25->RenderTargets).DepthStencil.DepthLoadAction = ELoad;
      bVar13 = FDepthStencilBinding::Validate(this_00);
      if ((!bVar13) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Validate()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                              ,0x2e9,L""), bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (*(char *)(*(longlong *)&this->field_0x8 + 0x38e0) != '\0') {
      BuildMeshRenderingCommands
                (param_1,BasePass,pFVar4,(FGPUScene *)(*(longlong *)&this->field_0x8 + 0x3500),
                 local_608,(FInstanceCullingDrawParams *)(puVar31 + 6));
      BuildMeshRenderingCommands
                (param_1,SkyPass,pFVar4,(FGPUScene *)(*(longlong *)&this->field_0x8 + 0x3500),
                 local_608,(FInstanceCullingDrawParams *)(puVar31 + 0x42));
      if (param_6) {
        BuildMeshRenderingCommands
                  (param_1,TranslucencyAll,pFVar4,
                   (FGPUScene *)(*(longlong *)&this->field_0x8 + 0x3500),local_608,
                   &pFVar25->InstanceCullingDrawParams);
      }
    }
    uVar7 = *(undefined8 *)(local_610->AllocatorInstance).InlineData;
    pwVar10 = *(wchar_t **)((local_610->AllocatorInstance).InlineData + 8);
    local_588 = local_620;
    local_5a8 = this;
    pFStack_5a0 = pFVar2;
    local_598 = uVar7;
    pwStack_590 = pwVar10;
    pFVar26 = FRDGEventName::FRDGEventName(&local_4e8,1,L"RenderMobileBasePass");
    pFVar23 = FMobileRenderPassParameters::FTypeInfo::GetStructMetadata();
    FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,pFVar2,pFVar23,pFVar26,Raster);
    FRDGBuilder::FlushAccessModeQueue(param_1);
    pwVar27 = FRDGEventName::GetTCHAR(pFVar26);
    EVar15 = FRDGBuilder::OverridePassFlags(param_1,pwVar27,Raster);
    local_624 = CONCAT22(local_624._2_2_,EVar15);
    pFVar28 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1b0,8);
    local_580.Contents = (uchar *)pFVar2;
    if (((pFVar23->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsLayoutInitialized()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                            ,0x17c,L""), bVar13)) break;
    local_580.Layout.Reference = (pFVar23->Layout).Reference;
    if (local_580.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
      FRHIResource::AddRef((FRHIResource *)local_580.Layout.Reference);
    }
    local_580.Metadata = pFVar23;
    FRDGPass::FRDGPass(pFVar28,pFVar26,&local_580,(undefined2)local_624,Await);
    *(FScriptContainerElement **)&pFVar28[1].Name.FormattedEventName.Data.ArrayNum = pFVar2;
    pFVar28->_padding_ =
         (longlong)
         &TRDGLambdaPass<FMobileRenderPassParameters,`FMobileSceneRenderer::RenderCustomRenderPassBasePass'::`14'::<lambda_1>_>
          ::_vftable_;
    pFVar28[1]._padding_ = (longlong)local_5a8;
    pFVar28[1].FullPathIfDebug.Data.AllocatorInstance.Data = pFStack_5a0;
    pFVar28[1].FullPathIfDebug.Data.ArrayNum = (int)uVar7;
    pFVar28[1].FullPathIfDebug.Data.ArrayMax = (int)((ulonglong)uVar7 >> 0x20);
    pFVar28[1].Name.EventFormat = pwVar10;
    pFVar28[1].Name.FormattedEventName.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)CONCAT44(uStack_584,local_588);
    FRDGBuilder::ClobberPassOutputs(param_1,pFVar28);
    pTVar3 = &param_1->Passes;
    iVar16 = (param_1->Passes).Array.ArrayNum;
    if (iVar16 == (param_1->Passes).Array.ArrayMax) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                         (0x808,(ForElementType<FRDGPass_*> *)pTVar3,
                          &(param_1->Passes).Array.ArrayMax);
    }
    (param_1->Passes).Array.ArrayNum = iVar16 + 1;
    (pTVar3->Array).AllocatorInstance.Data[iVar16] = pFVar28;
    (pFVar28->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
    FRDGBuilder::SetupParameterPass(param_1,pFVar28);
    if (local_4e8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_4e8.FormattedEventName.Data.AllocatorInstance.Data);
    }
    if (param_6) {
      local_550 = local_5e8;
      uVar7 = *(undefined8 *)(local_610->AllocatorInstance).InlineData;
      pwVar10 = *(wchar_t **)((local_610->AllocatorInstance).InlineData + 8);
      pFVar4 = local_5e0->DataPtr;
      uVar8 = *(undefined8 *)&local_5e0->ArrayNum;
      local_520 = local_5f8;
      pFStack_548 = pFVar25;
      local_540 = uVar7;
      pwStack_538 = pwVar10;
      local_530 = pFVar4;
      uStack_528 = uVar8;
      pFVar26 = FRDGEventName::FRDGEventName(&local_4d0,1,L"RenderMobileTranslucentPass");
      local_5d8 = pFVar26;
      pFVar23 = FMobileRenderPassParameters::FTypeInfo::GetStructMetadata();
      FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,pFVar25,pFVar23,pFVar26,Raster);
      FRDGBuilder::FlushAccessModeQueue(param_1);
      pwVar27 = FRDGEventName::GetTCHAR(pFVar26);
      EVar15 = FRDGBuilder::OverridePassFlags(param_1,pwVar27,Raster);
      local_624 = CONCAT22(local_624._2_2_,EVar15);
      pFVar28 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1c0,8);
      local_568.Contents = (uchar *)pFVar25;
      if (((pFVar23->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsLayoutInitialized()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                              ,0x17c,L""), bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_568.Layout.Reference = (pFVar23->Layout).Reference;
      if (local_568.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
        FRHIResource::AddRef((FRHIResource *)local_568.Layout.Reference);
      }
      local_568.Metadata = pFVar23;
      FRDGPass::FRDGPass(pFVar28,local_5d8,&local_568,(undefined2)local_624,Await);
      pFVar28[1].ParameterStruct.Layout.Reference = (FRHIUniformBufferLayout *)pFVar25;
      pFVar28->_padding_ =
           (longlong)
           &TRDGLambdaPass<FMobileRenderPassParameters,`FMobileSceneRenderer::RenderCustomRenderPassBasePass'::`26'::<lambda_2>_>
            ::_vftable_;
      pFVar28[1]._padding_ = (longlong)local_550;
      pFVar28[1].FullPathIfDebug.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)pFStack_548;
      pFVar28[1].FullPathIfDebug.Data.ArrayNum = (int)uVar7;
      pFVar28[1].FullPathIfDebug.Data.ArrayMax = (int)((ulonglong)uVar7 >> 0x20);
      pFVar28[1].Name.EventFormat = pwVar10;
      pFVar28[1].Name.FormattedEventName.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)pFVar4;
      pFVar28[1].Name.FormattedEventName.Data.ArrayNum = (int)uVar8;
      pFVar28[1].Name.FormattedEventName.Data.ArrayMax = (int)((ulonglong)uVar8 >> 0x20);
      pFVar28[1].ParameterStruct.Contents = (uchar *)local_520;
      FRDGBuilder::ClobberPassOutputs(param_1,pFVar28);
      iVar16 = (param_1->Passes).Array.ArrayNum;
      if (iVar16 == (param_1->Passes).Array.ArrayMax) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                           (0x808,(ForElementType<FRDGPass_*> *)pTVar3,
                            &(param_1->Passes).Array.ArrayMax);
      }
      (param_1->Passes).Array.ArrayNum = iVar16 + 1;
      (pTVar3->Array).AllocatorInstance.Data[iVar16] = pFVar28;
      (pFVar28->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
      FRDGBuilder::SetupParameterPass(param_1,pFVar28);
      if (local_4d0.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_4d0.FormattedEventName.Data.AllocatorInstance.Data);
      }
    }
    this = local_5e8;
    pFVar11 = local_5f8;
    pFVar4 = local_600;
    if (local_5e8->bIsFullDepthPrepassEnabled == false) {
      local_518.Target = (FRDGTexture *)local_5f8->_padding_;
      local_518.Resolve = (FRDGTexture *)local_5f8->_padding_;
      AddResolveSceneDepthPass(param_1,local_600,&local_518);
    }
    if (this->bRequiresSceneDepthAux != false) {
      local_508.Target = (pFVar11->DepthAux).Target;
      local_508.Resolve = (pFVar11->DepthAux).Resolve;
      AddResolveSceneColorPass(param_1,pFVar4,&local_508);
    }
    uVar30 = (ulonglong)(uint)local_1e8.ArrayNum;
    FVar18.Data = (FRenderViewContext *)((local_610->AllocatorInstance).InlineData + 0x10);
    uVar32 = (ulonglong)local_61c;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// RenderDBuffer @ 144fd34f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMobileSceneRenderer::RenderDBuffer
          (FMobileSceneRenderer *this,FRDGBuilder *param_1,FSceneTextures *param_2,
          FDBufferTextures *param_3,FInstanceCullingManager *param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRDGScope *this_00;
  FName *pFVar10;
  FThreadSafeStaticStat<_protected:_void___cdecl_FMobileSceneRenderer::RenderDBuffer(FRDGBuilder_&,FSceneTextures_&,FDBufferTextures_&,FInstanceCullingManager_&)_::_2_::FStat_STAT_RenderDBuffer>
  FVar11;
  FDeferredDecalPassTextures *pFVar12;
  uint uVar13;
  FName FVar14;
  ulonglong uVar15;
  FViewInfo *pFVar16;
  ulonglong uVar17;
  FColor_u_0 local_res10 [2];
  FSceneTextures *local_res18;
  FDBufferTextures *local_res20;
  FName local_1e8;
  FName local_1e0;
  FName local_1d8;
  TArray<FVisibleDecal_const_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  local_1c8;
  TArray<FVisibleDecal,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> local_1b8;
  TRDGEventScopeGuard<FRDGScope_RHI> local_1a8;
  char local_198;
  FDeferredDecalProxy **local_188;
  int iStack_180;
  undefined4 uStack_17c;
  FVisibleDecal *local_178;
  int iStack_170;
  FVisibleDecal **local_168;
  int iStack_160;
  FName local_158;
  FName local_150;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<14>_const_*,std::tuple<>_> local_148;
  TArrayView<FDeferredDecalProxy_*_const,int> local_138;
  TArrayView<FVisibleDecal_const_,int> local_128;
  TArrayView<FVisibleDecal_const_*_const,int> local_118;
  uint uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  FDeferredDecalPassTextures local_e8;
  FDeferredDecalPassTextures local_98;
  
  cVar1 = *(char *)((longlong)&param_1->_padding_ + 6);
  uVar15 = (ulonglong)_tls_index;
  uVar17 = 0;
  local_198 = '\0';
  local_res18 = param_2;
  local_res20 = param_3;
  if ((cVar1 != '\0') && ((cVar1 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0x9d4c) <
         ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      local_f8 = 0;
      uStack_f4 = 0;
      ::Desc._12_8_ = ZEXT48(uStack_fc);
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_ = (longlong)u_RenderDBuffer;
      ::Desc._padding_ = (longlong)u_RenderDBuffer;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._0_4_ = 0x93;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FMobileSceneRenderer::RenderDBuffer'::__l7::Desc::operator()<>'::__l3::<lambda_1>::
             operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_148._Myfirst._Val = &::Desc;
    local_1a8.State = (FRDGScopeState *)param_1;
    this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)this_00;
    local_1a8.Scope = this_00;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<14>_const_*,std::tuple<>_>_>
              (&(this_00->Impl).Impl,(FRDGScopeState *)param_1,&local_148);
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)param_1->_padding_);
    }
    local_198 = '\x01';
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0x9d4c) < ::_TSS0)
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_RenderDBuffer ==
        (FThreadSafeStaticStat<_protected:_void___cdecl_FMobileSceneRenderer::RenderDBuffer(FRDGBuilder_&,FSceneTextures_&,FDBufferTextures_&,FInstanceCullingManager_&)_::_2_::FStat_STAT_RenderDBuffer>
         )0x0) {
      pFVar10 = ::FName::FName(&local_158,"STAT_RenderDBuffer");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RenderDBuffer,*pFVar10,
                 L"STAT_RenderDBuffer","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,
                 ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar11 = StatPtr_STAT_RenderDBuffer;
  if (StatPtr_STAT_RenderDBuffer ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_FMobileSceneRenderer::RenderDBuffer(FRDGBuilder_&,FSceneTextures_&,FDBufferTextures_&,FInstanceCullingManager_&)_::_2_::FStat_STAT_RenderDBuffer>
       )0x0) {
    pFVar10 = ::FName::FName(&local_150,"STAT_RenderDBuffer");
    FVar11 = (FThreadSafeStaticStat<_protected:_void___cdecl_FMobileSceneRenderer::RenderDBuffer(FRDGBuilder_&,FSceneTextures_&,FDBufferTextures_&,FInstanceCullingManager_&)_::_2_::FStat_STAT_RenderDBuffer>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RenderDBuffer,*pFVar10,
                          L"STAT_RenderDBuffer","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                          true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar11;
  bVar6 = false;
  bVar5 = false;
  local_1d8.ComparisonIndex.Value = 0;
  local_1d8.Number = 0;
  bVar8 = false;
  bVar7 = false;
  if ((FVar14.ComparisonIndex.Value.Value != 0) || (FVar14.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar6 = false;
      bVar5 = true;
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1e8.ComparisonIndex.Value = FVar14.ComparisonIndex.Value.Value;
        local_1e8.Number = FVar14.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1e8,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MobileDecalRendering.cpp"
                   ,0x94);
        bVar6 = true;
        bVar5 = true;
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1e0 = FVar14;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar7 = true;
      goto LAB_144fd373e;
    }
  }
  bVar6 = bVar8;
  bVar5 = bVar7;
  bVar7 = false;
  local_1e0 = local_1d8;
  FVar14 = local_1d8;
LAB_144fd373e:
  if (*(int *)&this->field_0x18 != 1) {
    if ((*(int *)&this->field_0x18 < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar3 = *(longlong *)&this->field_0x10;
    uVar13 = *(int *)&this->field_0x18 - 1;
    uVar9 = 0;
    if ((int)uVar13 < *(int *)&this->field_0x18) {
      uVar9 = ~uVar13 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((*(longlong *)(lVar3 + 8) !=
         *(longlong *)
          ((longlong)*(int *)&this->field_0x18 * 0x2970 + -0x2968 + *(longlong *)&this->field_0x10))
       && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("Views.Num() == 1 || Views[0].Family == Views.Last().Family",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.h"
                              ,0xc22,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((*(int *)&this->field_0x18 < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FSceneViewFamily::GetFeatureLevel(*(FSceneViewFamily **)(*(longlong *)&this->field_0x10 + 8));
  uVar15 = uVar17;
  if (0 < *(int *)&this->field_0x18) {
    do {
      uVar13 = (uint)uVar15;
      uVar9 = 0;
      if ((int)uVar13 < *(int *)&this->field_0x18) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar16 = (FViewInfo *)(*(longlong *)&this->field_0x10 + uVar17);
      if ((pFVar16->bHasNoVisiblePrimitive == 0) &&
         ((*(char *)((longlong)&pFVar16->_padding_ + 7) == '\0' || ((int)pFVar16->_padding_ != 2))))
      {
        local_188 = *(FDeferredDecalProxy ***)(*(longlong *)&this->field_0x8 + 0x2cc0);
        iVar2 = *(int *)(*(longlong *)&this->field_0x8 + 0x2cc8);
        if ((iVar2 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_138._12_4_ = uStack_17c;
        local_138.ArrayNum = iVar2;
        local_138.DataPtr = local_188;
        iStack_180 = iVar2;
        DecalRendering::BuildVisibleDecalList(&local_1b8,&local_138,pFVar16);
        iVar2 = local_1b8.ArrayNum;
        local_178 = local_1b8.AllocatorInstance.Data;
        if ((local_1b8.ArrayNum < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iStack_170 = iVar2;
        local_128.DataPtr = local_178;
        DecalRendering::BuildRelevantDecalList(&local_1c8,&local_128,BeforeBasePass);
        pFVar12 = GetDeferredDecalPassTextures
                            (&local_98,param_1,pFVar16,
                             (FSubstrateSceneData *)(*(longlong *)&this->field_0x8 + 0x4b60),
                             local_res18,local_res20,BeforeBasePass);
        iVar2 = local_1c8.ArrayNum;
        local_e8.DecalPassUniformBuffer = pFVar12->DecalPassUniformBuffer;
        local_e8.Depth.Target = (pFVar12->Depth).Target;
        local_e8.Depth.Resolve = (pFVar12->Depth).Resolve;
        local_e8.Color = pFVar12->Color;
        local_e8.ScreenSpaceAO = pFVar12->ScreenSpaceAO;
        local_e8.GBufferA = pFVar12->GBufferA;
        local_e8.GBufferB = pFVar12->GBufferB;
        local_e8.GBufferC = pFVar12->GBufferC;
        local_e8.GBufferE = pFVar12->GBufferE;
        local_e8.DBufferTextures = pFVar12->DBufferTextures;
        local_168 = local_1c8.AllocatorInstance.Data;
        if ((local_1c8.ArrayNum < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iStack_160 = iVar2;
        local_118.DataPtr = local_168;
        AddDeferredDecalPass(param_1,pFVar16,&local_118,&local_e8,param_4,BeforeBasePass);
        if (local_1c8.AllocatorInstance.Data != (FVisibleDecal **)0x0) {
          TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                    (local_1c8.AllocatorInstance.Data);
        }
        if (local_1b8.AllocatorInstance.Data != (FVisibleDecal *)0x0) {
          TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                    (local_1b8.AllocatorInstance.Data);
        }
      }
      uVar17 = uVar17 + 0x2970;
      FVar14 = local_1e0;
      uVar15 = (ulonglong)(uVar13 + 1);
    } while ((int)(uVar13 + 1) < *(int *)&this->field_0x18);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FThreadStats::AddMessage(FVar14,CycleScopeEnd);
  }
  if (local_198 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_1a8);
  }
  return;
}

// RenderDecals @ 144fd3c30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FMobileSceneRenderer::RenderDecals
          (FMobileSceneRenderer *this,FRHICommandList *param_1,FViewInfo *param_2,
          FInstanceCullingDrawParams *param_3)

{
  int *piVar1;
  FParallelMeshDrawCommandPass *pFVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  Type TVar6;
  FStaticShaderPlatform FVar7;
  uint uVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_DecalsDrawTime> FVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar11;
  FName FVar12;
  EDecalRenderStage EVar13;
  EDecalRenderTargetMode EVar14;
  LARGE_INTEGER local_88;
  FStatMessage local_80;
  undefined4 local_70;
  undefined4 uStack_6c;
  FName local_60;
  TOptional<FRHIBreadcrumbScope> local_50;
  
  FVar7.Platform = FSceneView::GetShaderPlatform((FSceneView *)param_2);
  if (((FReadOnlyCVARCache::bMobileHDR == false) && (bVar5 = IsVulkanPlatform(FVar7), !bVar5)) &&
     (FGenericDataDrivenShaderPlatformInfo::Infos[FVar7.Platform].bIsPreviewPlatform == 0)) {
    bVar5 = IsAndroidOpenGLESPlatform(FVar7);
    if (!bVar5) {
      return;
    }
    if (GRHIGlobals.SupportsShaderDepthStencilFetch == false) {
      return;
    }
  }
  if ((*(uint *)&this->field_0x100 & 0x40000) == 0) {
    return;
  }
  if (*(char *)((longlong)&param_2->_padding_ + 5) != '\0') {
    return;
  }
  if (__CsvProfilerStat54 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("RenderDecals");
    __CsvProfilerStat54 = true;
  }
  FCsvProfiler::BeginExclusiveStat("RenderDecals","CSV_RenderDecals");
  FVar10 = StatPtr_STAT_DecalsDrawTime;
  if (StatPtr_STAT_DecalsDrawTime == (FThreadSafeStaticStat<FStat_STAT_DecalsDrawTime>)0x0) {
    pFVar9 = ::FName::FName((FName *)&local_80,"STAT_DecalsDrawTime");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_DecalsDrawTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DecalsDrawTime,*pFVar9,
                        L"Decal drawing","STATGROUP_SceneRendering","STATCAT_Advanced",
                        L"Scene Rendering",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar10;
  bVar5 = false;
  bVar4 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar8 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_88.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_88.s,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar5 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_88.s.LowPart = FVar11.Value;
        local_88.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_88.s,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MobileDecalRendering.cpp"
                   ,0x37);
        bVar5 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_88.s.LowPart = FVar11.Value;
      local_88.s.HighPart = uVar8;
      local_60 = FVar12;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = local_60.ComparisonIndex.Value;
      goto LAB_144fd3e57;
    }
  }
  bVar3 = false;
  FVar12 = local_60;
  FVar11.Value = 0;
LAB_144fd3e57:
  FSceneView::GetShaderPlatform((FSceneView *)param_2);
  if ((FReadOnlyCVARCache::bMobileDeferredShadingValue == false) ||
     (uVar8 = 1, FReadOnlyCVARCache::bMobileHDR == false)) {
    uVar8 = 0;
  }
  if (this->bRequiresDBufferDecals == false) {
    EVar13 = (uVar8 != 0) + Mobile;
  }
  else {
    EVar13 = Emissive;
  }
  EVar14 = SceneColor;
  if (uVar8 != 0) {
    EVar14 = SceneColorAndGBuffer;
  }
  TVar6 = DecalRendering::GetMeshPassType(EVar14);
  pFVar2 = (param_2->ParallelMeshDrawCommandPasses).Elements[TVar6];
  if ((pFVar2 != (FParallelMeshDrawCommandPass *)0x0) && (0 < pFVar2->MaxNumDraws)) {
    FRHICommandList::SetViewport
              (param_1,(float)*(int *)&(param_2->ViewRect).field0_0x0,
               (float)*(int *)((longlong)&(param_2->ViewRect).field0_0x0 + 4),0.0,
               (float)*(int *)((longlong)&(param_2->ViewRect).field0_0x0 + 8),
               (float)*(int *)((longlong)&(param_2->ViewRect).field0_0x0 + 0xc),__real_3f800000);
    FParallelMeshDrawCommandPass::Draw
              ((param_2->ParallelMeshDrawCommandPasses).Elements[TVar6],param_1,param_3);
  }
  if (0 < *(int *)(*(longlong *)&this->field_0x8 + 0x2cc8)) {
    local_50.bIsSet = false;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Desc._padding_._0_4_ = 0x48;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      local_70 = 0;
      uStack_6c = 0;
      ::Desc._12_8_ = ZEXT48((uint)local_80.NameAndInfo.Number);
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_ = (longlong)u_Decals;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(``FMobileSceneRenderer::RenderDecals'::__l19::<lambda_1>::operator()<>'::__l2::
             _dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_80.NameAndInfo.Index.Value = 0x54bcf720;
    local_80.NameAndInfo.Number = 1;
    TOptional<FRHIBreadcrumbScope>::
    Emplace<FRHIComputeCommandList_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_const_*,std::tuple<>_>_>
              (&local_50,(FRHIComputeCommandList *)param_1,
               (tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_const_*,std::tuple<>_> *)
               &local_80);
    RenderDeferredDecalsMobile(param_1,*(FScene **)&this->field_0x8,param_2,EVar13,EVar14);
    if (local_50.bIsSet != false) {
      FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_50.TypedValue);
    }
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_80.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      local_80.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_88);
      local_80.StatData.Pad[4] = '\0';
      local_80.StatData.Pad[5] = '\0';
      local_80.StatData.Pad[6] = '\0';
      local_80.StatData.Pad[7] = '\0';
      local_80.StatData.Pad[0] = local_88.s.LowPart._0_1_;
      local_80.StatData.Pad[1] = local_88.s.LowPart._1_1_;
      local_80.StatData.Pad[2] = local_88.s.LowPart._2_1_;
      local_80.StatData.Pad[3] = local_88.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_80);
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
  FCsvProfiler::EndExclusiveStat("RenderDecals");
  return;
}

// RenderDeferredSinglePass @ 144fd7270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000144fd7ebc) */
/* WARNING: Removing unreachable block (ram,0x000144fd7eca) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMobileSceneRenderer::RenderDeferredSinglePass
          (FMobileSceneRenderer *this,FRDGBuilder *param_1,FSceneTextures *param_2,
          FSortedLightSetSceneInfo *param_3,FMobileBasePassTextures *param_4,
          FInstanceCullingManager *param_5)

{
  int *piVar1;
  FRHIGPUMask FVar2;
  FViewInfo *this_00;
  FRHIComputeCommandList *pFVar3;
  code *pcVar4;
  FVisibleLightInfo *pFVar5;
  undefined8 uVar6;
  FRDGTexture *pFVar7;
  bool bVar8;
  bool bVar9;
  uchar uVar10;
  short sVar11;
  ERenderTargetLoadAction EVar12;
  FRDGBuilder *pFVar13;
  TArray<FRenderViewContext,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar14;
  bool bVar15;
  bool bVar16;
  ERDGPassFlags EVar17;
  uint uVar18;
  int iVar19;
  TArrayView<FVisibleLightInfo_const_,int> *pTVar20;
  TArrayView<FViewInfo,int> *pTVar21;
  ForElementType<FRenderViewContext> FVar22;
  FSceneView *pFVar23;
  FRHIBreadcrumbAllocator *this_01;
  FRHIBreadcrumbNode *pFVar24;
  FDeferredSinglePassParameterCollection *pFVar25;
  FViewShaderParameters *pFVar26;
  FMobileBasePassUniformParameters *pFVar27;
  TRDGUniformBuffer<FMobileBasePassUniformParameters> *pTVar28;
  FShaderParametersMetadata *pFVar29;
  FRenderTargetBindingSlots *pFVar30;
  FRDGEventName *this_02;
  wchar_t *pwVar31;
  FRDGPass *this_03;
  FRenderTargetBindingSlots *pFVar32;
  ForElementType<FViewOcclusionQueries> FVar33;
  FRHIGPUMask FVar34;
  ulonglong uVar35;
  longlong lVar36;
  FViewOcclusionQueries *pFVar37;
  uint uVar38;
  undefined4 uVar39;
  ulonglong uVar40;
  EMobileSceneTextureSetupMode EVar41;
  undefined1 auStackY_618 [32];
  bool local_5d8;
  undefined1 local_5d7;
  undefined1 local_5d6;
  FInstanceCullingManager *local_5d0;
  uint local_5c8;
  FRDGBuilder *local_5c0;
  TArray<FRenderViewContext,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *local_5b8;
  ESSRQuality local_5b0 [2];
  FReflectionsRayTracingConfig local_5a8;
  TArray<FRenderViewContext,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *local_5a0;
  FViewOcclusionQueries local_598;
  FMobileBasePassTextures *local_510;
  FSortedLightSetSceneInfo *local_508;
  FRHIComputeCommandList *local_500;
  FMobileSceneRenderer *local_4f8;
  FViewOcclusionQueries local_4f0;
  FRHIBreadcrumbScope local_468;
  char local_458;
  TUniformBufferRef<FMobileReflectionCaptureShaderData> local_448;
  EUniformBufferBindingFlags EStack_440;
  undefined7 uStack_43f;
  FRDGBuffer *local_438;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  FViewInfo *local_428;
  int iStack_420;
  undefined4 uStack_41c;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<7,int>_const_*,std::tuple<int_&>_>
  local_418;
  TRDGUniformBuffer<FMobileBasePassUniformParameters> *local_408;
  EUniformBufferBindingFlags EStack_400;
  undefined7 uStack_3ff;
  FRDGParameterStruct local_3f8;
  TArrayView<FViewInfo,int> local_3d8;
  TArrayView<FVisibleLightInfo_const_,int> local_3c8;
  TArrayView<FViewInfo,int> local_3b8;
  uint uStack_39c;
  undefined4 local_398;
  undefined4 uStack_394;
  FMobileSceneRenderer *local_388;
  FDeferredSinglePassParameterCollection *local_380;
  undefined8 local_378;
  wchar_t *pwStack_370;
  undefined4 local_368;
  FSortedLightSetSceneInfo *local_360;
  undefined1 local_358;
  bool local_357;
  FViewOcclusionQueries local_350;
  FRDGEventName local_2c8;
  TArrayView<FVisibleLightInfo_const_,int> local_2b0;
  TArrayView<FViewInfo,int> local_2a0;
  FViewShaderParameters local_288;
  TArray<FRenderViewContext,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  local_268;
  TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  local_238;
  TArray<FRDGTexture_*,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_> local_1a0;
  FRenderTargetBindingSlots local_158;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_618;
  bVar9 = false;
  bVar8 = false;
  local_510 = param_4;
  local_5d0 = param_5;
  local_5c8 = 0;
  local_5c0 = param_1;
  local_508 = param_3;
  local_4f8 = this;
  local_5d6 = UsingPixelLocalStorage((FStaticShaderPlatform)*(EShaderPlatform *)&this->field_0xadc);
  GetColorTargets_Deferred(this,&local_1a0,param_2);
  InitRenderTargetBindings_Deferred(this,&local_158,param_2,&local_1a0);
  FRDGSystemTextures::Get(param_1);
  local_428 = *(FViewInfo **)&this->field_0x10;
  iStack_420 = *(int *)&this->field_0x18;
  local_268.AllocatorInstance.SecondaryData.Data = (FRenderViewContext *)0x0;
  local_268.ArrayNum = 0;
  local_268.ArrayMax = 2;
  if ((iStack_420 < 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar15)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_3d8._12_4_ = uStack_41c;
  local_3d8.ArrayNum = iStack_420;
  local_3d8.DataPtr = local_428;
  GetRenderViews(&local_3d8,&local_268);
  if ((this->bIsFullDepthPrepassEnabled == false) &&
     (bVar15 = FSceneRenderer::DoOcclusionQueries((FSceneRenderer *)this), bVar15)) {
    local_238.AllocatorInstance.SecondaryData.Data = (FViewOcclusionQueries *)0x0;
    local_238.ArrayNum = 0;
    local_238.ArrayMax = 1;
    pTVar20 = TArrayView<FVisibleLightInfo_const_,int>::
              TArrayView<FVisibleLightInfo_const_,int><TArray<FVisibleLightInfo,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&,TArray<FVisibleLightInfo,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                        (&local_2b0,
                         (TArray<FVisibleLightInfo,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                          *)&this->field_0x630);
    pFVar5 = pTVar20->DataPtr;
    uVar6._0_4_ = pTVar20->ArrayNum;
    uVar6._4_4_ = *(undefined4 *)&pTVar20->field_0xc;
    pTVar21 = TArrayView<FViewInfo,int>::
              TArrayView<FViewInfo,int><TArray<FViewInfo,TSizedDefaultAllocator<32>_>_&,TArray<FViewInfo,TSizedDefaultAllocator<32>_>_>
                        (&local_2a0,
                         (TArray<FViewInfo,TSizedDefaultAllocator<32>_> *)&this->field_0x10);
    local_3b8.DataPtr = pTVar21->DataPtr;
    local_3b8.ArrayNum = pTVar21->ArrayNum;
    local_3b8._12_4_ = *(undefined4 *)&pTVar21->field_0xc;
    local_3c8.DataPtr = pFVar5;
    local_3c8._8_8_ = uVar6;
    AllocateOcclusionTests(*(FScene **)&this->field_0x8,&local_238,&local_3b8,&local_3c8);
    local_5d8 = 0 < local_238.ArrayNum;
  }
  else {
    local_5d8 = false;
    local_238.AllocatorInstance.SecondaryData.Data = (FViewOcclusionQueries *)0x0;
    local_238.ArrayNum = 0;
    local_238.ArrayMax = 1;
  }
  uVar35 = (ulonglong)local_268.ArrayNum;
  local_5c8 = local_268.ArrayNum;
  FVar22.Data = (FRenderViewContext *)&local_268;
  if ((TArray<FRenderViewContext,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
       *)local_268.AllocatorInstance.SecondaryData.Data !=
      (TArray<FRenderViewContext,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
       *)0x0) {
    FVar22.Data = local_268.AllocatorInstance.SecondaryData.Data;
  }
  local_5a0 = (TArray<FRenderViewContext,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
               *)((((TArray<FRenderViewContext,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                     *)FVar22.Data)->AllocatorInstance).InlineData + uVar35 * 0x10);
  uVar40 = uVar35;
  do {
    pTVar14 = local_5a0;
    local_5b8 = (TArray<FRenderViewContext,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                 *)FVar22.Data;
    if ((int)uVar35 != (int)uVar40) {
      local_5d7 = 0;
      `TCheckedPointerIterator<FRenderViewContext,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_5d7);
    }
    if ((TArray<FRenderViewContext,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)FVar22.Data == pTVar14) {
      FVar33.Data = (FViewOcclusionQueries *)&local_238;
      if ((TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
           *)local_238.AllocatorInstance.SecondaryData.Data !=
          (TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
           *)0x0) {
        FVar33.Data = local_238.AllocatorInstance.SecondaryData.Data;
      }
      DestructItems<FViewOcclusionQueries,int>(FVar33.Data,local_238.ArrayNum);
      if ((TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
           *)local_238.AllocatorInstance.SecondaryData.Data !=
          (TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
           *)0x0) {
        TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                  (local_238.AllocatorInstance.SecondaryData.Data);
      }
      if ((TArray<FRenderViewContext,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
           *)local_268.AllocatorInstance.SecondaryData.Data !=
          (TArray<FRenderViewContext,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
           *)0x0) {
        TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                  (local_268.AllocatorInstance.SecondaryData.Data);
      }
      if (local_1a0.AllocatorInstance.SecondaryData != (ForElementType<FRDGTexture_*>)0x0) {
        FMemory::Free((void *)local_1a0.AllocatorInstance.SecondaryData);
      }
      return;
    }
    this_00 = *(FViewInfo **)
               (((TArray<FRenderViewContext,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                  *)FVar22.Data)->AllocatorInstance).InlineData;
    pFVar3 = (FRHIComputeCommandList *)param_1->_padding_;
    local_500 = pFVar3;
    bVar15 = FSceneView::IsInstancedStereoPass((FSceneView *)this_00);
    if (bVar15) {
      pFVar23 = FSceneView::GetInstancedSceneView((FSceneView *)this_00);
      FVar34.GPUMask = (pFVar23->GPUMask).GPUMask | (uint)this_00->_padding_;
    }
    else {
      FVar34.GPUMask = (uint)this_00->_padding_;
    }
    FVar2.GPUMask = *(uint *)&pFVar3->field_0x29c;
    FRHIComputeCommandList::SetGPUMask(pFVar3,FVar34);
    local_458 = '\0';
    if (1 < local_268.ArrayNum) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        local_398 = 0;
        uStack_394 = 0;
        ::Desc._12_8_ = ZEXT48(uStack_39c);
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        ::Desc._padding_._4_4_ = 0;
        ::Desc._padding_ = (longlong)u_EventView;
        ::Desc._padding_ = (longlong)u_View_d;
        ::Desc._padding_._0_4_ = 0x8f0;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(``FMobileSceneRenderer::RenderDeferredSinglePass'::__l14::<lambda_1>::
               operator()<int_&>'::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
      pFVar3 = (FRHIComputeCommandList *)param_1->_padding_;
      local_418._Myfirst._Val = &::Desc;
      local_418._padding_ =
           (longlong)
           ((((TArray<FRenderViewContext,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
               *)FVar22.Data)->AllocatorInstance).InlineData + 8);
      this_01 = FRHIComputeCommandList::GetBreadcrumbAllocator(pFVar3);
      pFVar24 = FRHIBreadcrumbAllocator::
                AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<7,int>,int_&>
                          (this_01,&local_418);
      FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_468,pFVar3,pFVar24);
      local_458 = '\x01';
    }
    if ((((TArray<FRenderViewContext,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
           *)FVar22.Data)->AllocatorInstance).InlineData[0xc] == '\0') {
      uVar35 = 0;
      if (0 < local_1a0.ArrayNum) {
        do {
          local_158.Output.Elements[uVar35].LoadAction = ELoad;
          bVar15 = FRenderTargetBinding::Validate(local_158.Output.Elements + uVar35);
          if ((!bVar15) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Validate()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                                  ,0x256,L""), bVar15)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar38 = (int)uVar35 + 1;
          uVar35 = (ulonglong)uVar38;
        } while ((int)uVar38 < local_1a0.ArrayNum);
      }
      local_158.DepthStencil.DepthLoadAction = ELoad;
      bVar15 = FDepthStencilBinding::Validate(&local_158.DepthStencil);
      if ((!bVar15) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Validate()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                              ,0x2e9,L""), bVar15)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_158.DepthStencil.StencilLoadAction = ELoad;
      bVar15 = FDepthStencilBinding::Validate(&local_158.DepthStencil);
      if ((!bVar15) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Validate()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                              ,0x2ef,L""), bVar15)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_158.DepthStencil.DepthStencilAccess.Value =
           DepthWrite_StencilWrite - (this->bIsFullDepthPrepassEnabled != false);
      bVar15 = FDepthStencilBinding::Validate(&local_158.DepthStencil);
      if ((!bVar15) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Validate()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                              ,0x2e3,L""), bVar15)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FViewInfo::BeginRenderView(this_00);
    UpdateDirectionalLightUniformBuffers(this,param_1,this_00);
    bVar15 = this->bIsFullDepthPrepassEnabled;
    pFVar25 = FRDGAllocator::
              Alloc<_FMobileSceneRenderer::RenderDeferredSinglePass_::__l9::FDeferredSinglePassParameterCollection>
                        ((FRDGAllocator *)&param_1->_padding_);
    pFVar26 = FViewInfo::GetShaderParameters(this_00,&local_288);
    uVar6 = *(undefined8 *)&(pFVar26->View).field_0x8;
    *(undefined8 *)&(pFVar25->PassParameters).View.View = *(undefined8 *)&pFVar26->View;
    *(undefined8 *)&(pFVar25->PassParameters).View.View.field_0x8 = uVar6;
    uVar6 = *(undefined8 *)&(pFVar26->InstancedView).field_0x8;
    *(undefined8 *)&(pFVar25->PassParameters).View.InstancedView.field_0x0 =
         *(undefined8 *)&pFVar26->InstancedView;
    *(undefined8 *)&(pFVar25->PassParameters).View.InstancedView.field_0x8 = uVar6;
    pFVar27 = FRDGBuilder::AllocParameters<FMobileBasePassUniformParameters>(local_5c0);
    pFVar13 = local_5c0;
    EVar41 = CustomDepth;
    if (bVar15 != false) {
      EVar41 = CustomDepth|SceneDepth;
    }
    SetupMobileBasePassUniformParameters
              (local_5c0,this_00,Opaque,EVar41,pFVar27,local_510,false,false);
    pTVar28 = FRDGBuilder::CreateUniformBuffer<FMobileBasePassUniformParameters>(pFVar13,pFVar27);
    pFVar29 = FMobileBasePassUniformParameters::GetStructMetadata();
    EStack_400 = Static;
    if (pFVar29->BindingFlags != StaticAndShader) {
      EStack_400 = pFVar29->BindingFlags;
    }
    *(TRDGUniformBuffer<FMobileBasePassUniformParameters> **)
     &(pFVar25->PassParameters).MobileBasePass.field_0x0 = pTVar28;
    *(ulonglong *)&(pFVar25->PassParameters).MobileBasePass.field_0x8 =
         CONCAT71(uStack_3ff,EStack_400);
    local_408 = pTVar28;
    pFVar29 = FMobileReflectionCaptureShaderData::GetStructMetadata();
    uStack_430 = 4;
    local_448 = this_00->MobileReflectionCaptureUniformBuffer;
    EStack_440 = Static;
    if (pFVar29->BindingFlags != StaticAndShader) {
      EStack_440 = pFVar29->BindingFlags;
    }
    lVar36 = 2;
    *(TUniformBufferRef<FMobileReflectionCaptureShaderData> *)
     &(pFVar25->PassParameters).ReflectionCapture.field_0x0 = local_448;
    *(ulonglong *)&(pFVar25->PassParameters).ReflectionCapture.field_0x8 =
         CONCAT71(uStack_43f,EStack_440);
    (pFVar25->PassParameters).LocalFogVolumeInstances =
         this_00->LocalFogVolumeViewData->GPUInstanceDataBufferSRV;
    local_438 = this_00->LocalFogVolumeViewData->GPUTileDrawIndirectBuffer;
    *(FRDGBuffer **)&(pFVar25->PassParameters).LocalFogVolumeTileDrawIndirectBuffer.field_0x0 =
         local_438;
    *(ulonglong *)&(pFVar25->PassParameters).LocalFogVolumeTileDrawIndirectBuffer.field_0x8 =
         CONCAT44(uStack_42c,4);
    (pFVar25->PassParameters).LocalFogVolumeTileDataTexture =
         this_00->LocalFogVolumeViewData->TileDataTextureArraySRV;
    (pFVar25->PassParameters).LocalFogVolumeTileDataBuffer =
         this_00->LocalFogVolumeViewData->GPUTileDataBufferSRV;
    (pFVar25->PassParameters).HalfResLocalFogVolumeViewSRV =
         this_00->LocalFogVolumeViewData->HalfResLocalFogVolumeViewSRV;
    (pFVar25->PassParameters).HalfResLocalFogVolumeDepthSRV =
         this_00->LocalFogVolumeViewData->HalfResLocalFogVolumeDepthSRV;
    pFVar30 = &(pFVar25->PassParameters).RenderTargets;
    pFVar32 = &local_158;
    do {
      pFVar7 = (pFVar32->Output).Elements[0].ResolveTexture;
      (pFVar30->Output).Elements[0].Texture = (pFVar32->Output).Elements[0].Texture;
      (pFVar30->Output).Elements[0].ResolveTexture = pFVar7;
      uVar10 = (pFVar32->Output).Elements[0].MipIndex;
      sVar11 = (pFVar32->Output).Elements[0].ArraySlice;
      uVar39 = *(undefined4 *)&(pFVar32->Output).Elements[0].field_0x14;
      pFVar7 = (pFVar32->Output).Elements[1].Texture;
      (pFVar30->Output).Elements[0].LoadAction = (pFVar32->Output).Elements[0].LoadAction;
      (pFVar30->Output).Elements[0].MipIndex = uVar10;
      (pFVar30->Output).Elements[0].ArraySlice = sVar11;
      *(undefined4 *)&(pFVar30->Output).Elements[0].field_0x14 = uVar39;
      (pFVar30->Output).Elements[1].Texture = pFVar7;
      EVar12 = (pFVar32->Output).Elements[1].LoadAction;
      uVar10 = (pFVar32->Output).Elements[1].MipIndex;
      sVar11 = (pFVar32->Output).Elements[1].ArraySlice;
      uVar39 = *(undefined4 *)&(pFVar32->Output).Elements[1].field_0x14;
      (pFVar30->Output).Elements[1].ResolveTexture = (pFVar32->Output).Elements[1].ResolveTexture;
      (pFVar30->Output).Elements[1].LoadAction = EVar12;
      (pFVar30->Output).Elements[1].MipIndex = uVar10;
      (pFVar30->Output).Elements[1].ArraySlice = sVar11;
      *(undefined4 *)&(pFVar30->Output).Elements[1].field_0x14 = uVar39;
      pFVar7 = (pFVar32->Output).Elements[2].ResolveTexture;
      (pFVar30->Output).Elements[2].Texture = (pFVar32->Output).Elements[2].Texture;
      (pFVar30->Output).Elements[2].ResolveTexture = pFVar7;
      uVar10 = (pFVar32->Output).Elements[2].MipIndex;
      sVar11 = (pFVar32->Output).Elements[2].ArraySlice;
      uVar39 = *(undefined4 *)&(pFVar32->Output).Elements[2].field_0x14;
      pFVar7 = (pFVar32->Output).Elements[3].Texture;
      (pFVar30->Output).Elements[2].LoadAction = (pFVar32->Output).Elements[2].LoadAction;
      (pFVar30->Output).Elements[2].MipIndex = uVar10;
      (pFVar30->Output).Elements[2].ArraySlice = sVar11;
      *(undefined4 *)&(pFVar30->Output).Elements[2].field_0x14 = uVar39;
      (pFVar30->Output).Elements[3].Texture = pFVar7;
      EVar12 = (pFVar32->Output).Elements[3].LoadAction;
      uVar10 = (pFVar32->Output).Elements[3].MipIndex;
      sVar11 = (pFVar32->Output).Elements[3].ArraySlice;
      uVar39 = *(undefined4 *)&(pFVar32->Output).Elements[3].field_0x14;
      (pFVar30->Output).Elements[3].ResolveTexture = (pFVar32->Output).Elements[3].ResolveTexture;
      (pFVar30->Output).Elements[3].LoadAction = EVar12;
      (pFVar30->Output).Elements[3].MipIndex = uVar10;
      (pFVar30->Output).Elements[3].ArraySlice = sVar11;
      *(undefined4 *)&(pFVar30->Output).Elements[3].field_0x14 = uVar39;
      pFVar7 = (pFVar32->Output).Elements[4].ResolveTexture;
      (pFVar30->Output).Elements[4].Texture = (pFVar32->Output).Elements[4].Texture;
      (pFVar30->Output).Elements[4].ResolveTexture = pFVar7;
      uVar10 = (pFVar32->Output).Elements[4].MipIndex;
      sVar11 = (pFVar32->Output).Elements[4].ArraySlice;
      uVar39 = *(undefined4 *)&(pFVar32->Output).Elements[4].field_0x14;
      pFVar7 = (pFVar32->Output).Elements[5].Texture;
      (pFVar30->Output).Elements[4].LoadAction = (pFVar32->Output).Elements[4].LoadAction;
      (pFVar30->Output).Elements[4].MipIndex = uVar10;
      (pFVar30->Output).Elements[4].ArraySlice = sVar11;
      *(undefined4 *)&(pFVar30->Output).Elements[4].field_0x14 = uVar39;
      (pFVar30->Output).Elements[5].Texture = pFVar7;
      lVar36 = lVar36 + -1;
      pFVar30 = (FRenderTargetBindingSlots *)&(pFVar30->Output).Elements[5].ResolveTexture;
      pFVar32 = (FRenderTargetBindingSlots *)&(pFVar32->Output).Elements[5].ResolveTexture;
    } while (lVar36 != 0);
    (pFVar25->PassParameters).RenderTargets.SubpassHint = DeferredShadingSubpass;
    bVar15 = this->bShouldRenderVelocities;
    bVar16 = IsMobileSSREnabled(this_00);
    if (bVar16) {
      local_5a8.ResolutionFraction = 1.0;
      local_5a8.RayCountPerPixel = 1;
      ScreenSpaceRayTracing::GetSSRQualityForView(this_00,local_5b0,&local_5a8);
      if ((int)local_5b0[0] < 1) {
        uVar39 = 0;
      }
      else if ((this_00->PrevViewInfo->TemporalAAHistory).RT.Elements[0].Reference ==
               (IPooledRenderTarget *)0x0) {
        uVar39 = 0;
      }
      else if (((int)local_5b0[0] < 2) || (uVar39 = 2, bVar15 == false)) {
        uVar39 = 1;
      }
    }
    else {
      uVar39 = 0;
    }
    if (local_5d8 == false) {
      uVar38 = 0;
    }
    else {
      uVar38 = ComputeNumOcclusionQueriesToBatch(this);
    }
    (pFVar25->PassParameters).RenderTargets.NumOcclusionQueries = uVar38;
    if (*(char *)(*(longlong *)&this->field_0x8 + 0x38e0) != '\0') {
      if (this->bIsFullDepthPrepassEnabled == false) {
        BuildMeshRenderingCommands
                  (pFVar13,DepthPass,this_00,(FGPUScene *)(*(longlong *)&this->field_0x8 + 0x3500),
                   local_5d0,&pFVar25->DepthPassInstanceCullingDrawParams);
      }
      BuildMeshRenderingCommands
                (pFVar13,BasePass,this_00,(FGPUScene *)(*(longlong *)&this->field_0x8 + 0x3500),
                 local_5d0,&(pFVar25->PassParameters).InstanceCullingDrawParams);
      BuildMeshRenderingCommands
                (pFVar13,SkyPass,this_00,(FGPUScene *)(*(longlong *)&this->field_0x8 + 0x3500),
                 local_5d0,&pFVar25->SkyPassInstanceCullingDrawParams);
      BuildMeshRenderingCommands
                (pFVar13,DebugViewMode,this_00,(FGPUScene *)(*(longlong *)&this->field_0x8 + 0x3500)
                 ,local_5d0,&pFVar25->DebugViewModeInstanceCullingDrawParams);
      BuildMeshRenderingCommands
                (pFVar13,MeshDecal_SceneColorAndGBuffer,this_00,
                 (FGPUScene *)(*(longlong *)&this->field_0x8 + 0x3500),local_5d0,
                 &pFVar25->MeshDecalSceneColorAndGBufferInstanceCullingDrawParams);
      BuildMeshRenderingCommands
                (pFVar13,this->StandardTranslucencyMeshPass,this_00,
                 (FGPUScene *)(*(longlong *)&this->field_0x8 + 0x3500),local_5d0,
                 &pFVar25->TranslucencyInstanceCullingDrawParams);
    }
    pTVar14 = local_5b8;
    if (local_5d8 == false) {
      local_598.bFlushQueries = true;
      local_598._129_4_ = 0;
      pFVar37 = &local_598;
      local_598._133_2_ = 0;
      bVar9 = true;
      local_598._135_1_ = 0;
      local_598.LocalLightQueryInfos.AllocatorInstance.Data = (FProjectedShadowInfo **)0x0;
      local_598.LocalLightQueryInfos.ArrayNum = 0;
      local_598.LocalLightQueryInfos.ArrayMax = 0;
      local_598.CSMQueryInfos.AllocatorInstance.Data = (FProjectedShadowInfo **)0x0;
      local_598.CSMQueryInfos.ArrayNum = 0;
      local_598.CSMQueryInfos.ArrayMax = 0;
      local_598.ShadowQueryInfos.AllocatorInstance.Data = (FProjectedShadowInfo **)0x0;
      local_598.ShadowQueryInfos.ArrayNum = 0;
      local_598.ShadowQueryInfos.ArrayMax = 0;
      local_598.ReflectionQueryInfos.AllocatorInstance.Data = (FPlanarReflectionSceneProxy **)0x0;
      local_598.ReflectionQueryInfos.ArrayNum = 0;
      local_598.ReflectionQueryInfos.ArrayMax = 0;
      local_598.LocalLightQueries.AllocatorInstance.Data = (FRHIRenderQuery **)0x0;
      local_598.LocalLightQueries.ArrayNum = 0;
      local_598.LocalLightQueries.ArrayMax = 0;
      local_598.CSMQueries.AllocatorInstance.Data = (FRHIRenderQuery **)0x0;
      local_598.CSMQueries.ArrayNum = 0;
      local_598.CSMQueries.ArrayMax = 0;
      local_598.ShadowQueries.AllocatorInstance.Data = (FRHIRenderQuery **)0x0;
      local_598.ShadowQueries.ArrayNum = 0;
      local_598.ShadowQueries.ArrayMax = 0;
      local_598.ReflectionQueries.AllocatorInstance.Data = (FRHIRenderQuery **)0x0;
      local_598.ReflectionQueries.ArrayNum = 0;
      local_598.ReflectionQueries.ArrayMax = 0;
    }
    else {
      uVar38 = *(uint *)((local_5b8->AllocatorInstance).InlineData + 8);
      lVar36 = (longlong)(int)uVar38;
      bVar8 = true;
      uVar18 = 0;
      if ((int)uVar38 < local_238.ArrayNum) {
        uVar18 = ~uVar38 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar33.Data = (FViewOcclusionQueries *)&local_238;
      if ((TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
           *)local_238.AllocatorInstance.SecondaryData.Data !=
          (TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
           *)0x0) {
        FVar33.Data = local_238.AllocatorInstance.SecondaryData.Data;
      }
      local_4f0.LocalLightQueryInfos.AllocatorInstance.Data =
           ((ForElementType<FProjectedShadowInfo_const_*> *)
           (((TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
              *)FVar33.Data)->AllocatorInstance).InlineData)[lVar36 * 0x11].Data;
      ((ForElementType<FProjectedShadowInfo_const_*> *)
      (((TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)FVar33.Data)->AllocatorInstance).InlineData)[lVar36 * 0x11].Data =
           (FProjectedShadowInfo **)0x0;
      local_4f0.LocalLightQueryInfos.ArrayNum =
           *(int *)&((ForElementType<FProjectedShadowInfo_const_*> *)
                    (((TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                       *)FVar33.Data)->AllocatorInstance).InlineData)[lVar36 * 0x11 + 1].Data;
      local_4f0.LocalLightQueryInfos.ArrayMax =
           *(int *)((longlong)
                    &((ForElementType<FProjectedShadowInfo_const_*> *)
                     (((TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                        *)FVar33.Data)->AllocatorInstance).InlineData)[lVar36 * 0x11 + 1].Data + 4);
      ((ForElementType<FProjectedShadowInfo_const_*> *)
      (((TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)FVar33.Data)->AllocatorInstance).InlineData)[lVar36 * 0x11 + 1].Data =
           (FProjectedShadowInfo **)0x0;
      local_4f0.CSMQueryInfos.AllocatorInstance.Data =
           ((ForElementType<FProjectedShadowInfo_const_*> *)
           (((TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
              *)FVar33.Data)->AllocatorInstance).InlineData)[lVar36 * 0x11 + 2].Data;
      ((ForElementType<FProjectedShadowInfo_const_*> *)
      (((TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)FVar33.Data)->AllocatorInstance).InlineData)[lVar36 * 0x11 + 2].Data =
           (FProjectedShadowInfo **)0x0;
      local_4f0.CSMQueryInfos.ArrayNum =
           *(int *)&((ForElementType<FProjectedShadowInfo_const_*> *)
                    (((TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                       *)FVar33.Data)->AllocatorInstance).InlineData)[lVar36 * 0x11 + 3].Data;
      local_4f0.CSMQueryInfos.ArrayMax =
           *(int *)((longlong)
                    &((ForElementType<FProjectedShadowInfo_const_*> *)
                     (((TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                        *)FVar33.Data)->AllocatorInstance).InlineData)[lVar36 * 0x11 + 3].Data + 4);
      ((ForElementType<FProjectedShadowInfo_const_*> *)
      (((TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)FVar33.Data)->AllocatorInstance).InlineData)[lVar36 * 0x11 + 3].Data =
           (FProjectedShadowInfo **)0x0;
      local_4f0.ShadowQueryInfos.AllocatorInstance.Data =
           ((ForElementType<FProjectedShadowInfo_const_*> *)
           (((TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
              *)FVar33.Data)->AllocatorInstance).InlineData)[lVar36 * 0x11 + 4].Data;
      ((ForElementType<FProjectedShadowInfo_const_*> *)
      (((TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)FVar33.Data)->AllocatorInstance).InlineData)[lVar36 * 0x11 + 4].Data =
           (FProjectedShadowInfo **)0x0;
      local_4f0.ShadowQueryInfos.ArrayNum =
           *(int *)&((ForElementType<FProjectedShadowInfo_const_*> *)
                    (((TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                       *)FVar33.Data)->AllocatorInstance).InlineData)[lVar36 * 0x11 + 5].Data;
      local_4f0.ShadowQueryInfos.ArrayMax =
           *(int *)((longlong)
                    &((ForElementType<FProjectedShadowInfo_const_*> *)
                     (((TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                        *)FVar33.Data)->AllocatorInstance).InlineData)[lVar36 * 0x11 + 5].Data + 4);
      ((ForElementType<FProjectedShadowInfo_const_*> *)
      (((TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)FVar33.Data)->AllocatorInstance).InlineData)[lVar36 * 0x11 + 5].Data =
           (FProjectedShadowInfo **)0x0;
      local_4f0.ReflectionQueryInfos.AllocatorInstance.Data =
           (FPlanarReflectionSceneProxy **)
           ((ForElementType<FProjectedShadowInfo_const_*> *)
           (((TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
              *)FVar33.Data)->AllocatorInstance).InlineData)[lVar36 * 0x11 + 6].Data;
      ((ForElementType<FProjectedShadowInfo_const_*> *)
      (((TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)FVar33.Data)->AllocatorInstance).InlineData)[lVar36 * 0x11 + 6].Data =
           (FProjectedShadowInfo **)0x0;
      local_4f0.ReflectionQueryInfos.ArrayNum =
           *(int *)&((ForElementType<FProjectedShadowInfo_const_*> *)
                    (((TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                       *)FVar33.Data)->AllocatorInstance).InlineData)[lVar36 * 0x11 + 7].Data;
      local_4f0.ReflectionQueryInfos.ArrayMax =
           *(int *)((longlong)
                    &((ForElementType<FProjectedShadowInfo_const_*> *)
                     (((TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                        *)FVar33.Data)->AllocatorInstance).InlineData)[lVar36 * 0x11 + 7].Data + 4);
      ((ForElementType<FProjectedShadowInfo_const_*> *)
      (((TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)FVar33.Data)->AllocatorInstance).InlineData)[lVar36 * 0x11 + 7].Data =
           (FProjectedShadowInfo **)0x0;
      local_4f0.LocalLightQueries.AllocatorInstance.Data =
           (FRHIRenderQuery **)
           ((ForElementType<FProjectedShadowInfo_const_*> *)
           (((TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
              *)FVar33.Data)->AllocatorInstance).InlineData)[lVar36 * 0x11 + 8].Data;
      ((ForElementType<FProjectedShadowInfo_const_*> *)
      (((TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)FVar33.Data)->AllocatorInstance).InlineData)[lVar36 * 0x11 + 8].Data =
           (FProjectedShadowInfo **)0x0;
      local_4f0.LocalLightQueries.ArrayNum =
           *(int *)&((ForElementType<FProjectedShadowInfo_const_*> *)
                    (((TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                       *)FVar33.Data)->AllocatorInstance).InlineData)[lVar36 * 0x11 + 9].Data;
      local_4f0.LocalLightQueries.ArrayMax =
           *(int *)((longlong)
                    &((ForElementType<FProjectedShadowInfo_const_*> *)
                     (((TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                        *)FVar33.Data)->AllocatorInstance).InlineData)[lVar36 * 0x11 + 9].Data + 4);
      ((ForElementType<FProjectedShadowInfo_const_*> *)
      (((TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)FVar33.Data)->AllocatorInstance).InlineData)[lVar36 * 0x11 + 9].Data =
           (FProjectedShadowInfo **)0x0;
      local_4f0.CSMQueries.AllocatorInstance.Data =
           (FRHIRenderQuery **)
           ((ForElementType<FProjectedShadowInfo_const_*> *)
           (((TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
              *)FVar33.Data)->AllocatorInstance).InlineData)[lVar36 * 0x11 + 10].Data;
      ((ForElementType<FProjectedShadowInfo_const_*> *)
      (((TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)FVar33.Data)->AllocatorInstance).InlineData)[lVar36 * 0x11 + 10].Data =
           (FProjectedShadowInfo **)0x0;
      local_4f0.CSMQueries.ArrayNum =
           *(int *)&((ForElementType<FProjectedShadowInfo_const_*> *)
                    (((TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                       *)FVar33.Data)->AllocatorInstance).InlineData)[lVar36 * 0x11 + 0xb].Data;
      local_4f0.CSMQueries.ArrayMax =
           *(int *)((longlong)
                    &((ForElementType<FProjectedShadowInfo_const_*> *)
                     (((TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                        *)FVar33.Data)->AllocatorInstance).InlineData)[lVar36 * 0x11 + 0xb].Data + 4
                   );
      ((ForElementType<FProjectedShadowInfo_const_*> *)
      (((TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)FVar33.Data)->AllocatorInstance).InlineData)[lVar36 * 0x11 + 0xb].Data =
           (FProjectedShadowInfo **)0x0;
      local_4f0.ShadowQueries.AllocatorInstance.Data =
           (FRHIRenderQuery **)
           ((ForElementType<FProjectedShadowInfo_const_*> *)
           (((TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
              *)FVar33.Data)->AllocatorInstance).InlineData)[lVar36 * 0x11 + 0xc].Data;
      ((ForElementType<FProjectedShadowInfo_const_*> *)
      (((TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)FVar33.Data)->AllocatorInstance).InlineData)[lVar36 * 0x11 + 0xc].Data =
           (FProjectedShadowInfo **)0x0;
      local_4f0.ShadowQueries.ArrayNum =
           *(int *)&((ForElementType<FProjectedShadowInfo_const_*> *)
                    (((TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                       *)FVar33.Data)->AllocatorInstance).InlineData)[lVar36 * 0x11 + 0xd].Data;
      local_4f0.ShadowQueries.ArrayMax =
           *(int *)((longlong)
                    &((ForElementType<FProjectedShadowInfo_const_*> *)
                     (((TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                        *)FVar33.Data)->AllocatorInstance).InlineData)[lVar36 * 0x11 + 0xd].Data + 4
                   );
      ((ForElementType<FProjectedShadowInfo_const_*> *)
      (((TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)FVar33.Data)->AllocatorInstance).InlineData)[lVar36 * 0x11 + 0xd].Data =
           (FProjectedShadowInfo **)0x0;
      local_4f0.ReflectionQueries.AllocatorInstance.Data =
           (FRHIRenderQuery **)
           ((ForElementType<FProjectedShadowInfo_const_*> *)
           (((TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
              *)FVar33.Data)->AllocatorInstance).InlineData)[lVar36 * 0x11 + 0xe].Data;
      ((ForElementType<FProjectedShadowInfo_const_*> *)
      (((TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)FVar33.Data)->AllocatorInstance).InlineData)[lVar36 * 0x11 + 0xe].Data =
           (FProjectedShadowInfo **)0x0;
      local_4f0.ReflectionQueries.ArrayNum =
           *(int *)&((ForElementType<FProjectedShadowInfo_const_*> *)
                    (((TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                       *)FVar33.Data)->AllocatorInstance).InlineData)[lVar36 * 0x11 + 0xf].Data;
      local_4f0.ReflectionQueries.ArrayMax =
           *(int *)((longlong)
                    &((ForElementType<FProjectedShadowInfo_const_*> *)
                     (((TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                        *)FVar33.Data)->AllocatorInstance).InlineData)[lVar36 * 0x11 + 0xf].Data + 4
                   );
      ((ForElementType<FProjectedShadowInfo_const_*> *)
      (((TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)FVar33.Data)->AllocatorInstance).InlineData)[lVar36 * 0x11 + 0xf].Data =
           (FProjectedShadowInfo **)0x0;
      local_4f0.bFlushQueries =
           *(bool *)&((ForElementType<FProjectedShadowInfo_const_*> *)
                     (((TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                        *)FVar33.Data)->AllocatorInstance).InlineData)[lVar36 * 0x11 + 0x10].Data;
      pFVar37 = &local_4f0;
    }
    local_378 = *(undefined8 *)(pTVar14->AllocatorInstance).InlineData;
    pwStack_370 = *(wchar_t **)((pTVar14->AllocatorInstance).InlineData + 8);
    local_360 = local_508;
    local_358 = local_5d6;
    local_357 = local_5d8;
    local_388 = this;
    local_380 = pFVar25;
    local_368 = uVar39;
    FViewOcclusionQueries::FViewOcclusionQueries(&local_350,pFVar37);
    this_02 = FRDGEventName::FRDGEventName(&local_2c8,1,L"SceneColorRendering");
    pFVar29 = FMobileRenderPassParameters::FTypeInfo::GetStructMetadata();
    pFVar13 = local_5c0;
    FRDGUserValidation::ValidateAddPass
              (&local_5c0->UserValidation,pFVar25,pFVar29,this_02,NeverMerge|Raster);
    FRDGBuilder::FlushAccessModeQueue(pFVar13);
    pwVar31 = FRDGEventName::GetTCHAR(this_02);
    EVar17 = FRDGBuilder::OverridePassFlags(pFVar13,pwVar31,NeverMerge|Raster);
    this_03 = FMemStackBase::Alloc((FMemStackBase *)&pFVar13->_padding_,0x248,8);
    local_3f8.Contents = (uchar *)pFVar25;
    if (((pFVar29->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsLayoutInitialized()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                            ,0x17c,L""), bVar15)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_3f8.Layout.Reference = (pFVar29->Layout).Reference;
    if (local_3f8.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
      FRHIResource::AddRef((FRHIResource *)local_3f8.Layout.Reference);
    }
    local_3f8.Metadata = pFVar29;
    FRDGPass::FRDGPass(this_03,this_02,&local_3f8,EVar17,Await);
    this_03->_padding_ =
         (longlong)
         &TRDGLambdaPass<FMobileRenderPassParameters,`FMobileSceneRenderer::RenderDeferredSinglePass'::`9'::<lambda_2>_>
          ::_vftable_;
    this_03[1]._padding_ = (longlong)local_388;
    this_03[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_380;
    *(undefined4 *)&this_03[1].Name.FormattedEventName.Data.AllocatorInstance.Data = local_368;
    *(FSortedLightSetSceneInfo **)&this_03[1].Name.FormattedEventName.Data.ArrayNum = local_360;
    *(undefined1 *)&this_03[1].ParameterStruct.Contents = local_358;
    *(bool *)((longlong)&this_03[1].ParameterStruct.Contents + 1) = local_357;
    this_03[1].FullPathIfDebug.Data.ArrayNum = (undefined4)local_378;
    this_03[1].FullPathIfDebug.Data.ArrayMax = local_378._4_4_;
    this_03[1].Name.EventFormat = pwStack_370;
    FViewOcclusionQueries::FViewOcclusionQueries
              ((FViewOcclusionQueries *)&this_03[1].ParameterStruct.Layout,&local_350);
    param_1 = local_5c0;
    this_03[1].UniformBuffers.AllocatorInstance.Data =
         (TRDGHandle<FRDGUniformBuffer,unsigned_int> *)pFVar25;
    FRDGBuilder::ClobberPassOutputs(local_5c0,this_03);
    iVar19 = (param_1->Passes).Array.ArrayNum;
    piVar1 = &(param_1->Passes).Array.ArrayMax;
    if (iVar19 == *piVar1) {
      iVar19 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                         (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
    }
    (param_1->Passes).Array.ArrayNum = iVar19 + 1;
    (param_1->Passes).Array.AllocatorInstance.Data[iVar19] = this_03;
    (this_03->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
    FRDGBuilder::SetupParameterPass(param_1,this_03);
    if (local_2c8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_2c8.FormattedEventName.Data.AllocatorInstance.Data);
    }
    FViewOcclusionQueries::~FViewOcclusionQueries(&local_350);
    if (bVar9) {
      bVar9 = false;
      if (local_598.ReflectionQueries.AllocatorInstance.Data != (FRHIRenderQuery **)0x0) {
        TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                  (local_598.ReflectionQueries.AllocatorInstance.Data);
      }
      if (local_598.ShadowQueries.AllocatorInstance.Data != (FRHIRenderQuery **)0x0) {
        TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                  (local_598.ShadowQueries.AllocatorInstance.Data);
      }
      if (local_598.CSMQueries.AllocatorInstance.Data != (FRHIRenderQuery **)0x0) {
        TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                  (local_598.CSMQueries.AllocatorInstance.Data);
      }
      if (local_598.LocalLightQueries.AllocatorInstance.Data != (FRHIRenderQuery **)0x0) {
        TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                  (local_598.LocalLightQueries.AllocatorInstance.Data);
      }
      if (local_598.ReflectionQueryInfos.AllocatorInstance.Data !=
          (FPlanarReflectionSceneProxy **)0x0) {
        TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                  (local_598.ReflectionQueryInfos.AllocatorInstance.Data);
      }
      if (local_598.ShadowQueryInfos.AllocatorInstance.Data != (FProjectedShadowInfo **)0x0) {
        TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                  (local_598.ShadowQueryInfos.AllocatorInstance.Data);
      }
      if (local_598.CSMQueryInfos.AllocatorInstance.Data != (FProjectedShadowInfo **)0x0) {
        TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                  (local_598.CSMQueryInfos.AllocatorInstance.Data);
      }
      if (local_598.LocalLightQueryInfos.AllocatorInstance.Data != (FProjectedShadowInfo **)0x0) {
        TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                  (local_598.LocalLightQueryInfos.AllocatorInstance.Data);
      }
    }
    if (bVar8) {
      bVar8 = false;
      if ((FProjectedShadowInfo **)local_4f0.ReflectionQueries.AllocatorInstance.Data !=
          (FProjectedShadowInfo **)0x0) {
        TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                  (local_4f0.ReflectionQueries.AllocatorInstance.Data);
      }
      if ((FProjectedShadowInfo **)local_4f0.ShadowQueries.AllocatorInstance.Data !=
          (FProjectedShadowInfo **)0x0) {
        TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                  (local_4f0.ShadowQueries.AllocatorInstance.Data);
      }
      if ((FProjectedShadowInfo **)local_4f0.CSMQueries.AllocatorInstance.Data !=
          (FProjectedShadowInfo **)0x0) {
        TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                  (local_4f0.CSMQueries.AllocatorInstance.Data);
      }
      if ((FProjectedShadowInfo **)local_4f0.LocalLightQueries.AllocatorInstance.Data !=
          (FProjectedShadowInfo **)0x0) {
        TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                  (local_4f0.LocalLightQueries.AllocatorInstance.Data);
      }
      if ((FProjectedShadowInfo **)local_4f0.ReflectionQueryInfos.AllocatorInstance.Data !=
          (FProjectedShadowInfo **)0x0) {
        TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                  (local_4f0.ReflectionQueryInfos.AllocatorInstance.Data);
      }
      if (local_4f0.ShadowQueryInfos.AllocatorInstance.Data != (FProjectedShadowInfo **)0x0) {
        TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                  (local_4f0.ShadowQueryInfos.AllocatorInstance.Data);
      }
      if (local_4f0.CSMQueryInfos.AllocatorInstance.Data != (FProjectedShadowInfo **)0x0) {
        TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                  (local_4f0.CSMQueryInfos.AllocatorInstance.Data);
      }
      if (local_4f0.LocalLightQueryInfos.AllocatorInstance.Data != (FProjectedShadowInfo **)0x0) {
        TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                  (local_4f0.LocalLightQueryInfos.AllocatorInstance.Data);
      }
    }
    if (local_458 != '\0') {
      FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_468);
    }
    FRHIComputeCommandList::SetGPUMask(local_500,FVar2);
    uVar35 = (ulonglong)(uint)local_268.ArrayNum;
    FVar22.Data = (FRenderViewContext *)((local_5b8->AllocatorInstance).InlineData + 0x10);
    uVar40 = (ulonglong)local_5c8;
    this = local_4f8;
  } while( true );
}

// RenderFog @ 144fd9070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */

void __thiscall
FMobileSceneRenderer::RenderFog
          (FMobileSceneRenderer *this,FRHICommandList *param_1,FViewInfo *param_2)

{
  longlong lVar1;
  FGlobalShaderMap *this_00;
  UTexture *pUVar2;
  FLocalFogVolumeViewData *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [12];
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  EShaderPlatform EVar10;
  uint uVar11;
  atomic<unsigned_int> aVar12;
  int iVar13;
  FRHIBreadcrumbAllocator *pFVar14;
  FRHIBreadcrumbNode *pFVar15;
  FShaderType *pFVar16;
  FName this_01;
  undefined8 *puVar17;
  FViewShaderParameters *pFVar18;
  FRHIVertexShader *pFVar19;
  FShaderParametersMetadata *pFVar20;
  FRHIPixelShader *pFVar21;
  IConsoleManager *pIVar22;
  longlong *plVar23;
  TConsoleVariableData<int> *pTVar24;
  byte bVar25;
  bool bVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  double dVar33;
  undefined1 auStackY_478 [32];
  bool local_438;
  bool local_437;
  TShaderRefBase<FMobileFogPS,FShaderMapPointerTable> local_428;
  TShaderPermutationDomain<FMobileFogPS::FSupportHeightFog,FMobileFogPS::FSupportFogStartDistance,FMobileFogPS::FSupportFogInScatteringTexture,FMobileFogPS::FSupportFogSecondTerm,FMobileFogPS::FSupportFogDirectionalLightInScattering,FMobileFogPS::FSupportAerialPerspective,FMobileFogPS::FSupportVolumetricFog,FMobileFogPS::FSupportLocalFogVolume>
  local_418;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_3e8;
  TShaderRefBase<FMobileFogVS,FShaderMapPointerTable> local_3d8;
  char *local_3c8;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  TGPUStat<TRHIGPUStatNameProvider_MobileFog> *local_3b8;
  wchar_t *pwStack_3b0;
  char *local_3a8;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined8 local_398;
  wchar_t *pwStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  float local_368;
  FRHIBreadcrumbScope local_358;
  char local_348;
  FRHIBreadcrumbScope local_340;
  char local_330;
  undefined1 local_328 [8];
  FString local_320;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_308;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_2f8;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  FRDGBufferSRV *local_2c8;
  TIntVector2<unsigned_int>_u_0 TStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  longlong lStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  FRDGTextureSRV *local_268;
  undefined8 uStack_260;
  FRDGTextureSRV *local_258;
  FRHISamplerState *local_250;
  FRDGTextureSRV *local_248;
  FRHISamplerState *local_240;
  FViewShaderParameters local_238;
  FViewShaderParameters local_218 [5];
  FGraphicsPipelineStateInitializer local_178;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_478;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    local_3c8 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MobileFogRendering.cpp"
    ;
    local_3b8 = &GPUStat_MobileFog;
    uStack_3c0 = 0x7e;
    ::Desc._padding_ = CONCAT44(uStack_3bc,0x7e);
    pwStack_3b0 = L"MobileFog";
    ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
    ::Desc._padding_ = (longlong)&GPUStat_MobileFog;
    ::Desc._padding_ = (longlong)u_MobileFog;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
    ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    ::Desc.TraceGpuSpecId = 0;
    ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(``FMobileSceneRenderer::RenderFog'::__l7::<lambda_1>::operator()<>'::__l2::
           _dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar14 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
  pFVar15 = FMemStackBase::Alloc(&pFVar14->Inner,0x50,8);
  pFVar15->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar15->Parent = FRHIBreadcrumbNode::Sentinel;
  pFVar15->ListLink = (FRHIBreadcrumbNode *)0x0;
  (pFVar15->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (pFVar15->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  pFVar15->TraceCpuSpecId = 0;
  pFVar15->TraceCpuMetadataId = 0;
  pFVar15->Data = (FRHIBreadcrumbData *)&::Desc;
  pFVar15->Allocator = pFVar14;
  LOCK();
  UNLOCK();
  uVar11 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar15->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar15->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar15->ID = uVar11;
  pFVar15->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar15[1]._padding_ = (longlong)&::Desc;
  if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
     (bVar6 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar6)) {
    EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      aVar12 = (atomic<unsigned_int>)
               FCpuProfilerTrace::OutputEventType
                         ((wchar_t *)::Desc._padding_,(char *)::Desc._padding_,
                          (uint)::Desc._padding_);
      LOCK();
      ::Desc.TraceCpuSpecId = aVar12;
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  }
  pFVar15->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_340,(FRHIComputeCommandList *)param_1,pFVar15);
  local_330 = '\x01';
  if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar22 = IConsoleManager::Get();
    plVar23 = (longlong *)
              (**(code **)((longlong)*pIVar22 + 0xc0))(pIVar22,L"r.Mobile.DisableVertexFog",1);
    pTVar24 = (TConsoleVariableData<int> *)0x0;
    if (plVar23 != (longlong *)0x0) {
      pTVar24 = (TConsoleVariableData<int> *)(**(code **)(*plVar23 + 0x68))(plVar23);
    }
    CVarDisableVertexFog = pTVar24;
    _Init_thread_footer(&::_TSS0);
  }
  if ((CVarDisableVertexFog != (TConsoleVariableData<int> *)0x0) &&
     (iVar13 = TConsoleVariableData<int>::GetValueOnRenderThread(CVarDisableVertexFog), iVar13 == 0)
     ) goto LAB_144fd9ac9;
  EVar10 = FSceneView::GetShaderPlatform((FSceneView *)param_2);
  bVar6 = PlatformUsesBasicFogFeatures(EVar10);
  if ((*(int *)(*(longlong *)&this->field_0x8 + 0x4700) < 1) ||
     (bVar7 = ShouldRenderFog((FSceneViewFamily *)param_2->_padding_), !bVar7)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if ((bVar6) ||
     (bVar8 = ShouldRenderSkyAtmosphere
                        (*(FScene **)&this->field_0x8,
                         (FEngineShowFlags *)(param_2->_padding_ + 0x48)), !bVar8)) {
    local_438 = false;
    if (bVar7 == false) {
      RenderLocalFogVolumeMobile(param_1,param_2);
      goto LAB_144fd9ac9;
    }
  }
  else {
    local_438 = true;
  }
  pTVar24 = CVarPixelFogDepthTest.Ref;
  bVar8 = IsInParallelRenderingThread();
  if ((!bVar8) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar13 = pTVar24->ShadowedValue[1];
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    uStack_3a0 = 0x9e;
    local_3a8 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MobileFogRendering.cpp"
    ;
    ::Desc._padding_ = CONCAT44(uStack_39c,0x9e);
    pwStack_390 = L"Fog";
    local_398 = 0;
    ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
    ::Desc._padding_ = 0;
    ::Desc._padding_ = (longlong)u_Fog;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
    ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    ::Desc.TraceGpuSpecId = 0;
    ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(``FMobileSceneRenderer::RenderFog'::__l18::<lambda_3>::operator()<>'::__l2::
           _dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar14 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
  pFVar15 = FMemStackBase::Alloc(&pFVar14->Inner,0x50,8);
  pFVar15->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar15->Parent = FRHIBreadcrumbNode::Sentinel;
  pFVar15->ListLink = (FRHIBreadcrumbNode *)0x0;
  (pFVar15->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (pFVar15->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  pFVar15->Allocator = pFVar14;
  pFVar15->TraceCpuSpecId = 0;
  pFVar15->TraceCpuMetadataId = 0;
  pFVar15->Data = (FRHIBreadcrumbData *)&::Desc;
  LOCK();
  UNLOCK();
  uVar11 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar15->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar15->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar15->ID = uVar11;
  pFVar15->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar15[1]._padding_ = (longlong)&::Desc;
  if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
     (bVar8 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar8)) {
    EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      aVar12 = (atomic<unsigned_int>)
               FCpuProfilerTrace::OutputEventType
                         ((wchar_t *)::Desc._padding_,(char *)::Desc._padding_,
                          (uint)::Desc._padding_);
      LOCK();
      ::Desc.TraceCpuSpecId = aVar12;
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  }
  pFVar15->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_358,(FRHIComputeCommandList *)param_1,pFVar15);
  local_348 = '\x01';
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&(param_2->ViewRect).field0_0x0,
             (float)*(int *)((longlong)&(param_2->ViewRect).field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&(param_2->ViewRect).field0_0x0 + 8),
             (float)*(int *)((longlong)&(param_2->ViewRect).field0_0x0 + 0xc),__real_3f800000);
  local_178.RenderTargetsEnabled = 0;
  local_178.RenderTargetFormats.Elements[0] = '\0';
  local_178.RenderTargetFormats.Elements[1] = '\0';
  local_178.RenderTargetFormats.Elements[2] = '\0';
  local_178.RenderTargetFormats.Elements[3] = '\0';
  local_178.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_178.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_178.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_178.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_178.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_178.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_178.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_178.BlendState = (FRHIBlendState *)0x0;
  local_178.RasterizerState = (FRHIRasterizerState *)0x0;
  local_178.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_178.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_178.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
  local_178.RenderTargetFlags.Elements[0] = None;
  local_178.RenderTargetFlags.Elements[1] = None;
  local_178.RenderTargetFlags.Elements[2] = None;
  local_178.RenderTargetFlags.Elements[3] = None;
  local_178.RenderTargetFlags.Elements[4] = None;
  local_178.RenderTargetFlags.Elements[5] = None;
  local_178.RenderTargetFlags.Elements[6] = None;
  local_178.RenderTargetFlags.Elements[7] = None;
  local_178.RenderTargetFormats.Elements[4] = '\0';
  local_178.RenderTargetFormats.Elements[5] = '\0';
  local_178.RenderTargetFormats.Elements[6] = '\0';
  local_178.RenderTargetFormats.Elements[7] = '\0';
  local_178.DepthStencilTargetFormat = PF_Unknown;
  local_178.DepthStencilTargetFlag = None;
  local_178.DepthTargetLoadAction = ENoAction;
  local_178.DepthTargetStoreAction = ENoAction;
  local_178.StencilTargetLoadAction = ENoAction;
  local_178.StencilTargetStoreAction = ENoAction;
  local_178.DepthStencilAccess.Value = DepthNop;
  local_178.NumSamples = 0;
  local_178.SubpassHint = None;
  local_178.SubpassIndex = '\0';
  local_178.ConservativeRasterization = Disabled;
  local_178.bDepthBounds = false;
  local_178.MultiViewCount = '\0';
  local_178.bHasFragmentDensityAttachment = false;
  local_178.bAllowVariableRateShading = true;
  local_178.ShadingRate = VRSSR_1x1;
  local_178.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_178.StatePrecachePSOHash = 0;
  FRHICommandList::ApplyCachedRenderTargets(param_1,&local_178);
  local_178.RasterizerState =
       TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
       ::StaticResource.StateRHI.Reference;
  local_178.DepthStencilState =
       TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  if (iVar13 != 0) {
    local_178.DepthStencilState =
         TStaticStateRHI<TStaticDepthStencilState<0,3,1,5,0,0,0,0,7,0,0,0,8,0>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
         ::StaticResource.StateRHI.Reference;
  }
  local_178.PrimitiveType = PT_TriangleList;
  this_00 = param_2->ShaderMap;
  local_178.BlendState =
       TStaticStateRHI<TStaticBlendState<7,0,1,4,0,0,1,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  pFVar16 = (FShaderType *)FMobileFogVS::GetStaticType();
  FGlobalShaderMap::GetShader(this_00,&local_3e8,pFVar16,0);
  if (local_3e8.ShaderContent == (FShader *)0x0) {
    this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_328);
    ::FName::ToString((FName *)this_01,&local_320);
    FMobileFogVS::GetStaticType();
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_320.Data.AllocatorInstance.Data);
    }
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FMobileFogVS::GetStaticType();
  fVar28 = (param_2->ExponentialFogParameters).field0_0x0._s_0.W;
  pUVar2 = param_2->FogInscatteringColorCubemap;
  local_3d8.ShaderContent = (FMobileFogVS *)local_3e8.ShaderContent;
  local_3d8.ShaderMap = local_3e8.ShaderMap;
  if ((bVar6) || ((param_2->ExponentialFogParameters2).field0_0x0._s_0.Z <= 0.0)) {
    local_437 = false;
    if (!bVar6) goto LAB_144fd9610;
LAB_144fd9634:
    bVar6 = false;
  }
  else {
    local_437 = true;
LAB_144fd9610:
    if ((pUVar2 != (UTexture *)0x0) ||
       ((fVar27 = FLinearColor::GetLuminance(&param_2->DirectionalInscatteringColor), fVar27 <= 0.0
        && (param_2->bUseDirectionalInscattering == false)))) goto LAB_144fd9634;
    bVar6 = true;
  }
  bVar8 = FSceneRenderer::ShouldRenderVolumetricFog((FSceneRenderer *)this);
  if (((bVar8) &&
      (bVar9 = ShouldRenderLocalFogVolume
                         (*(FScene **)&this->field_0x8,(FSceneViewFamily *)param_2->_padding_),
      bVar9)) &&
     (bVar9 = ShouldRenderLocalFogVolumeInVolumetricFog
                        (*(FScene **)&this->field_0x8,(FSceneViewFamily *)param_2->_padding_,bVar8),
     bVar9)) {
    bVar25 = 1;
  }
  else {
    bVar25 = 0;
  }
  bVar9 = param_2->LocalFogVolumeViewData->bUseHalfResLocalFogVolume;
  bVar26 = (bool)(bVar25 | bVar9);
  local_418.Tail.Tail.Tail.DimensionValue = local_437;
  local_418.Tail.Tail.Tail.Tail.Tail.DimensionValue = local_438;
  if (bVar26 == false) {
    local_418.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = 0;
  }
  else {
    local_418.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = (bVar9 != false) + 1;
  }
  local_418.DimensionValue = bVar7;
  local_418.Tail.DimensionValue = 0.0 < fVar28;
  local_418.Tail.Tail.DimensionValue = pUVar2 != (UTexture *)0x0;
  local_418.Tail.Tail.Tail.Tail.DimensionValue = bVar6;
  local_418.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = bVar8;
  TShaderMapRef<FMobileFogPS>::TShaderMapRef<FMobileFogPS>
            ((TShaderMapRef<FMobileFogPS> *)&local_428,param_2->ShaderMap,&local_418);
  local_178.BoundShaderState.VertexDeclarationRHI =
       (FRHIVertexDeclaration *)GTileVertexDeclaration._32_8_;
  local_178.BoundShaderState.VertexShaderRHI =
       TShaderRefBase<FMobileFogVS,FShaderMapPointerTable>::GetVertexShader(&local_3d8,true);
  local_178.BoundShaderState.PixelShaderRHI =
       TShaderRefBase<FMobileFogPS,FShaderMapPointerTable>::GetPixelShader(&local_428,true);
  SetGraphicsPipelineState(param_1,&local_178,-(uint)(iVar13 != 0) & 8,CheckApply,true);
  fVar28 = GetFogDefaultStartDistance();
  if (bVar7 != false) {
    fVar28 = GetViewFogCommonStartDistance(param_2,bVar8,bVar26);
  }
  fVar27 = fVar28;
  if (local_438 != false) {
    puVar17 = (undefined8 *)(**(code **)(**(longlong **)&this->field_0x8 + 0x2e8))();
    fVar27 = GetValidAerialPerspectiveStartDepthInCm(param_2,(FSkyAtmosphereSceneProxy *)*puVar17);
    if ((bVar7 != false) && (fVar28 <= fVar27)) {
      fVar27 = fVar28;
    }
  }
  dVar33 = __real_3ff0000000000000;
  fVar28 = __real_3dcccccd;
  if ((iVar13 != 0) && (0.0 < fVar27)) {
    dVar30 = atan(__real_3ff0000000000000 / (double)param_2->_padding_);
    dVar31 = atan(dVar33 / (double)param_2->_padding_);
    fVar28 = (float)dVar30;
    if ((float)dVar30 <= (float)dVar31) {
      fVar28 = (float)dVar31;
    }
    fVar29 = cosf(fVar28);
    fVar28 = fVar29 * fVar27;
    if (fVar29 * fVar27 <= *(float *)&param_2->_padding_) {
      fVar28 = *(float *)&param_2->_padding_;
    }
    dVar30 = (double)fVar28 * (double)param_2->_padding_;
    dVar31 = (double)param_2->_padding_ * 0.0 + (double)param_2->_padding_ * 0.0 +
             (double)fVar28 * (double)param_2->_padding_ + dVar33 * (double)param_2->_padding_;
    dVar33 = (double)param_2->_padding_ * 0.0 + (double)param_2->_padding_ * 0.0 + dVar30 +
             dVar33 * (double)param_2->_padding_;
    auVar5._4_8_ = dVar30;
    auVar5._0_4_ = (int)((ulonglong)dVar31 >> 0x20);
    auVar32._0_8_ = auVar5._0_8_ << 0x20;
    auVar32._8_4_ = SUB84(dVar33,0);
    auVar32._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
    fVar28 = (float)(dVar31 / auVar32._8_8_);
  }
  uStack_380 = CONCAT71(uStack_380._1_7_,1);
  local_388 = 0;
  local_378 = 0;
  uStack_370 = CONCAT71(uStack_370._1_7_,1);
  pFVar18 = FViewInfo::GetShaderParameters(param_2,&local_238);
  local_388 = *(undefined8 *)&pFVar18->View;
  uStack_380 = *(undefined8 *)&(pFVar18->View).field_0x8;
  local_378 = *(undefined8 *)&pFVar18->InstancedView;
  uStack_370 = *(undefined8 *)&(pFVar18->InstancedView).field_0x8;
  local_368 = fVar28;
  pFVar19 = TShaderRefBase<FMobileFogVS,FShaderMapPointerTable>::GetVertexShader(&local_3d8,true);
  pFVar20 = FMobileFogVS::FParameters::FTypeInfo::GetStructMetadata();
  local_308.ShaderContent = local_3e8.ShaderContent;
  local_308.ShaderMap = local_3e8.ShaderMap;
  ValidateShaderParameters(&local_308,pFVar20,&local_388);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)pFVar19,&(local_3e8.ShaderContent)->Bindings,pFVar20,
             &local_388);
  local_298 = ___xmm_3f800000000000000000000000000000;
  uStack_290 = _UNK_150689648;
  local_2e8 = 0;
  uStack_2e0 = CONCAT71(uStack_2e0._1_7_,1);
  local_2d8 = 0;
  uStack_2d0 = CONCAT71(uStack_2d0._1_7_,1);
  local_2c8 = (FRDGBufferSRV *)0x0;
  local_268 = (FRDGTextureSRV *)0x0;
  pFVar18 = FViewInfo::GetShaderParameters(param_2,local_218);
  pFVar3 = param_2->LocalFogVolumeViewData;
  local_2e8 = *(undefined8 *)&pFVar18->View;
  uStack_2e0 = *(undefined8 *)&(pFVar18->View).field_0x8;
  local_2d8 = *(undefined8 *)&pFVar18->InstancedView;
  uStack_2d0 = *(undefined8 *)&(pFVar18->InstancedView).field_0x8;
  local_2c8 = (pFVar3->UniformParametersStruct).LocalFogVolumeCommon.LocalFogVolumeInstances;
  TStack_2c0 = (pFVar3->UniformParametersStruct).LocalFogVolumeCommon.
               LocalFogVolumeTileDataTextureResolution.field0_0x0;
  local_2b8._0_4_ =
       (pFVar3->UniformParametersStruct).LocalFogVolumeCommon.LocalFogVolumeInstanceCount;
  local_2b8._4_4_ =
       (pFVar3->UniformParametersStruct).LocalFogVolumeCommon.LocalFogVolumeTilePixelSize;
  uStack_2b0._0_4_ =
       (pFVar3->UniformParametersStruct).LocalFogVolumeCommon.
       LocalFogVolumeMaxDensityIntoVolumetricFog;
  uStack_2b0._4_4_ =
       (pFVar3->UniformParametersStruct).LocalFogVolumeCommon.
       ShouldRenderLocalFogVolumeInVolumetricFog;
  local_2a8 = *(undefined8 *)
               &(pFVar3->UniformParametersStruct).LocalFogVolumeCommon.GlobalStartDistance;
  lStack_2a0 = (pFVar3->UniformParametersStruct).LocalFogVolumeCommon._padding_;
  local_298 = *(undefined8 *)
               &(pFVar3->UniformParametersStruct).LocalFogVolumeCommon.HalfResTextureSizeAndInvSize.
                field0_0x0;
  uStack_290 = *(undefined8 *)
                ((longlong)
                 &(pFVar3->UniformParametersStruct).LocalFogVolumeCommon.
                  HalfResTextureSizeAndInvSize.field0_0x0 + 8);
  local_288 = *(undefined8 *)
               &(pFVar3->UniformParametersStruct).LocalFogVolumeCommon.DirectionalLightColor.
                field0_0x0;
  uStack_280 = *(undefined8 *)
                ((longlong)
                 &(pFVar3->UniformParametersStruct).LocalFogVolumeCommon.DirectionalLightColor.
                  field0_0x0 + 8);
  local_278 = *(undefined8 *)
               &(pFVar3->UniformParametersStruct).LocalFogVolumeCommon.DirectionalLightDirection.
                field0_0x0;
  uStack_270 = *(undefined8 *)
                ((longlong)
                 &(pFVar3->UniformParametersStruct).LocalFogVolumeCommon.DirectionalLightDirection.
                  field0_0x0 + 8);
  local_268 = (pFVar3->UniformParametersStruct).LocalFogVolumeTileDataTexture;
  uStack_260 = *(undefined8 *)&(pFVar3->UniformParametersStruct).field_0x68;
  local_258 = pFVar3->HalfResLocalFogVolumeViewSRV;
  local_248 = pFVar3->HalfResLocalFogVolumeDepthSRV;
  local_250 = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource.StateRHI.Reference;
  local_240 = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource.StateRHI.Reference;
  pFVar21 = TShaderRefBase<FMobileFogPS,FShaderMapPointerTable>::GetPixelShader(&local_428,true);
  pFVar20 = FMobileFogPS::FParameters::FTypeInfo::GetStructMetadata();
  local_2f8.ShaderContent = (FShader *)local_428.ShaderContent;
  local_2f8.ShaderMap = local_428.ShaderMap;
  ValidateShaderParameters(&local_2f8,pFVar20,&local_2e8);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)pFVar21,
             (FShaderParameterBindings *)local_428.ShaderContent,pFVar20,&local_2e8);
  FRHICommandList::SetStreamSource(param_1,0,(FRHIBuffer *)GScreenSpaceVertexBuffer._32_8_,0);
  FRHICommandList::DrawIndexedPrimitive
            (param_1,(FRHIBuffer *)GTwoTrianglesIndexBuffer._32_8_,0,0,4,0,2,
             *(uint *)((longlong)&param_2->_padding_ + 4));
  if (bVar26 == false) {
    RenderLocalFogVolumeMobile(param_1,param_2);
  }
  if (local_348 != '\0') {
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_358);
  }
  if (local_330 == '\0') {
    return;
  }
LAB_144fd9ac9:
  FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_340);
  return;
}

// RenderForward @ 144fd9c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMobileSceneRenderer::RenderForward
          (FMobileSceneRenderer *this,FRDGBuilder *param_1,FRDGTexture *param_2,
          FSceneTextures *param_3,FMobileBasePassTextures *param_4,FInstanceCullingManager *param_5)

{
  FRHIGPUMask FVar1;
  uint uVar2;
  FViewInfo *pFVar3;
  FRHIComputeCommandList *pFVar4;
  code *pcVar5;
  FVisibleLightInfo *pFVar6;
  undefined8 uVar7;
  uchar uVar8;
  short sVar9;
  undefined4 uVar10;
  ERenderTargetLoadAction EVar11;
  TArray<FRenderViewContext,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  FRDGTexture *pFVar16;
  TArrayView<FVisibleLightInfo_const_,int> *pTVar17;
  TArrayView<FViewInfo,int> *pTVar18;
  ForElementType<FRenderViewContext> FVar19;
  FSceneView *pFVar20;
  FRHIBreadcrumbAllocator *this_00;
  FRHIBreadcrumbNode *pFVar21;
  FMobileRenderPassParameters *pFVar22;
  FViewShaderParameters *pFVar23;
  FMobileBasePassUniformParameters *pFVar24;
  TRDGUniformBuffer<FMobileBasePassUniformParameters> *pTVar25;
  FShaderParametersMetadata *pFVar26;
  FRenderTargetBindingSlots *pFVar27;
  FRenderTargetBindingSlots *pFVar28;
  ForElementType<FViewOcclusionQueries> FVar29;
  FRHIGPUMask FVar30;
  ulonglong uVar31;
  longlong lVar32;
  FViewOcclusionQueries *pFVar33;
  ulonglong uVar34;
  EMobileSceneTextureSetupMode EVar35;
  undefined1 auStackY_3a8 [32];
  undefined1 local_367 [3];
  uint local_364;
  FInstanceCullingManager *local_360;
  FSceneTextures *local_358;
  FRDGBuilder *local_350;
  FMobileBasePassTextures *local_348;
  FRHIComputeCommandList *local_340;
  TArray<FRenderViewContext,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *local_338;
  FViewInfo *local_330;
  FRHIBreadcrumbScope local_328;
  char local_318;
  FViewInfo *local_308;
  int iStack_300;
  undefined4 uStack_2fc;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<7,int>_const_*,std::tuple<int_&>_>
  local_2f8;
  TRDGUniformBuffer<FMobileBasePassUniformParameters> *local_2e8;
  EUniformBufferBindingFlags EStack_2e0;
  undefined7 uStack_2df;
  TUniformBufferRef<FMobileReflectionCaptureShaderData> local_2d8;
  EUniformBufferBindingFlags EStack_2d0;
  undefined7 uStack_2cf;
  FRDGBuffer *local_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  TArrayView<FViewInfo,int> local_2b8;
  TArrayView<FVisibleLightInfo_const_,int> local_2a8;
  TArrayView<FViewInfo,int> local_298;
  uint uStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  TArrayView<FVisibleLightInfo_const_,int> local_268;
  TArrayView<FViewInfo,int> local_258;
  FViewShaderParameters local_248;
  FRenderTargetBindingSlots local_228;
  TArray<FRenderViewContext,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  local_128;
  TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  local_f8;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  local_348 = param_4;
  local_360 = param_5;
  local_358 = param_3;
  local_350 = param_1;
  if ((*(int *)&this->field_0x18 < 1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = *(FViewInfo **)&this->field_0x10;
  local_330 = pFVar3;
  FVariableRateShadingImageManager::PrepareImageBasedVRS
            ((FVariableRateShadingImageManager *)&GVRSImageManager,param_1,
             (FSceneViewFamily *)&this->field_0xb8,(FMinimalSceneTextures *)param_3);
  pFVar16 = FVariableRateShadingImageManager::GetVariableRateShadingImage
                      ((FVariableRateShadingImageManager *)&GVRSImageManager,param_1,pFVar3,BasePass
                       ,false);
  InitRenderTargetBindings_Forward(this,&local_228,param_2,param_3);
  if ((((char)pFVar3->_padding_ != '\0') || (*(char *)((longlong)&pFVar3->_padding_ + 4) != '\0'))
     || (local_228.ShadingRateTexture = pFVar16, pFVar16 == (FRDGTexture *)0x0)) {
    local_228.ShadingRateTexture = (FRDGTexture *)0x0;
  }
  if (*(char *)((longlong)&pFVar3->_padding_ + 5) == '\0') {
    local_228.MultiViewCount = *(byte *)((longlong)&pFVar3->_padding_ + 2) >> 1 & 1;
  }
  else {
    local_228.MultiViewCount = 2;
  }
  FRDGSystemTextures::Get(param_1);
  local_308 = *(FViewInfo **)&this->field_0x10;
  iStack_300 = *(int *)&this->field_0x18;
  local_128.AllocatorInstance.SecondaryData.Data = (FRenderViewContext *)0x0;
  local_128.ArrayNum = 0;
  local_128.ArrayMax = 2;
  if ((iStack_300 < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_2b8._12_4_ = uStack_2fc;
  local_2b8.ArrayNum = iStack_300;
  local_2b8.DataPtr = local_308;
  GetRenderViews(&local_2b8,&local_128);
  if ((this->bIsFullDepthPrepassEnabled == false) &&
     (bVar13 = FSceneRenderer::DoOcclusionQueries((FSceneRenderer *)this), bVar13)) {
    local_f8.AllocatorInstance.SecondaryData.Data = (FViewOcclusionQueries *)0x0;
    local_f8.ArrayNum = 0;
    local_f8.ArrayMax = 1;
    pTVar17 = TArrayView<FVisibleLightInfo_const_,int>::
              TArrayView<FVisibleLightInfo_const_,int><TArray<FVisibleLightInfo,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&,TArray<FVisibleLightInfo,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                        (&local_268,
                         (TArray<FVisibleLightInfo,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                          *)&this->field_0x630);
    pFVar6 = pTVar17->DataPtr;
    uVar7._0_4_ = pTVar17->ArrayNum;
    uVar7._4_4_ = *(undefined4 *)&pTVar17->field_0xc;
    pTVar18 = TArrayView<FViewInfo,int>::
              TArrayView<FViewInfo,int><TArray<FViewInfo,TSizedDefaultAllocator<32>_>_&,TArray<FViewInfo,TSizedDefaultAllocator<32>_>_>
                        (&local_258,
                         (TArray<FViewInfo,TSizedDefaultAllocator<32>_> *)&this->field_0x10);
    local_298.DataPtr = pTVar18->DataPtr;
    local_298.ArrayNum = pTVar18->ArrayNum;
    local_298._12_4_ = *(undefined4 *)&pTVar18->field_0xc;
    local_2a8.DataPtr = pFVar6;
    local_2a8._8_8_ = uVar7;
    AllocateOcclusionTests(*(FScene **)&this->field_0x8,&local_f8,&local_298,&local_2a8);
    bVar13 = 0 < local_f8.ArrayNum;
  }
  else {
    bVar13 = false;
    local_f8.AllocatorInstance.SecondaryData.Data = (FViewOcclusionQueries *)0x0;
    local_f8.ArrayNum = 0;
    local_f8.ArrayMax = 1;
  }
  uVar31 = (ulonglong)local_128.ArrayNum;
  local_364 = local_128.ArrayNum;
  FVar19.Data = (FRenderViewContext *)&local_128;
  if ((TArray<FRenderViewContext,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
       *)local_128.AllocatorInstance.SecondaryData.Data !=
      (TArray<FRenderViewContext,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
       *)0x0) {
    FVar19.Data = local_128.AllocatorInstance.SecondaryData.Data;
  }
  local_338 = (TArray<FRenderViewContext,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
               *)((((TArray<FRenderViewContext,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                     *)FVar19.Data)->AllocatorInstance).InlineData + uVar31 * 0x10);
  uVar34 = uVar31;
  do {
    pTVar12 = local_338;
    if ((int)uVar31 != (int)uVar34) {
      local_367[0] = 0;
      `TCheckedPointerIterator<FRenderViewContext,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_367);
    }
    if ((TArray<FRenderViewContext,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)FVar19.Data == pTVar12) {
      if (*(int *)&this->field_0x118 < 0) {
        AlphaInvert::AddAlphaInvertPass(param_1,local_330,param_3);
      }
      FVar29.Data = (FViewOcclusionQueries *)&local_f8;
      if ((TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
           *)local_f8.AllocatorInstance.SecondaryData.Data !=
          (TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
           *)0x0) {
        FVar29.Data = local_f8.AllocatorInstance.SecondaryData.Data;
      }
      DestructItems<FViewOcclusionQueries,int>(FVar29.Data,local_f8.ArrayNum);
      if ((TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
           *)local_f8.AllocatorInstance.SecondaryData.Data !=
          (TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
           *)0x0) {
        TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                  (local_f8.AllocatorInstance.SecondaryData.Data);
      }
      if ((TArray<FRenderViewContext,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
           *)local_128.AllocatorInstance.SecondaryData.Data !=
          (TArray<FRenderViewContext,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
           *)0x0) {
        TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                  (local_128.AllocatorInstance.SecondaryData.Data);
      }
      return;
    }
    pFVar3 = *(FViewInfo **)
              (((TArray<FRenderViewContext,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                 *)FVar19.Data)->AllocatorInstance).InlineData;
    pFVar4 = (FRHIComputeCommandList *)param_1->_padding_;
    local_340 = pFVar4;
    bVar14 = FSceneView::IsInstancedStereoPass((FSceneView *)pFVar3);
    if (bVar14) {
      pFVar20 = FSceneView::GetInstancedSceneView((FSceneView *)pFVar3);
      FVar30.GPUMask = (pFVar20->GPUMask).GPUMask | (uint)pFVar3->_padding_;
    }
    else {
      FVar30.GPUMask = (uint)pFVar3->_padding_;
    }
    FVar1.GPUMask = *(uint *)&pFVar4->field_0x29c;
    FRHIComputeCommandList::SetGPUMask(pFVar4,FVar30);
    local_318 = '\0';
    if (1 < local_128.ArrayNum) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::Desc._padding_._0_4_ = 0x713;
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        local_278 = 0;
        uStack_274 = 0;
        ::Desc._12_8_ = ZEXT48(uStack_27c);
        ::Desc._padding_._4_4_ = 0;
        ::Desc._padding_ = (longlong)u_EventView;
        ::Desc._padding_ = (longlong)u_View_d;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(``FMobileSceneRenderer::RenderForward'::__l14::<lambda_1>::operator()<int_&>'::__l2::
               _dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
      pFVar4 = (FRHIComputeCommandList *)param_1->_padding_;
      local_2f8._padding_ =
           (longlong)
           ((((TArray<FRenderViewContext,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
               *)FVar19.Data)->AllocatorInstance).InlineData + 8);
      local_2f8._Myfirst._Val = &::Desc;
      this_00 = FRHIComputeCommandList::GetBreadcrumbAllocator(pFVar4);
      pFVar21 = FRHIBreadcrumbAllocator::
                AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<7,int>,int_&>
                          (this_00,&local_2f8);
      FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_328,pFVar4,pFVar21);
      local_318 = '\x01';
    }
    if (((((*(byte *)(pFVar3->_padding_ + 100) & 1) != 0) &&
         (param_3->StereoMotionVectors != (FRDGTexture *)0x0)) &&
        (param_3->StereoMotionVectorDepth != (FRDGTexture *)0x0)) &&
       (((char)pFVar3->_padding_ == '\0' && (*(char *)((longlong)&pFVar3->_padding_ + 4) == '\0'))))
    {
      RenderStereoMotionVectors(this,param_1,pFVar3,param_3,local_360);
    }
    if ((((TArray<FRenderViewContext,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
           *)FVar19.Data)->AllocatorInstance).InlineData[0xc] == '\0') {
      local_228.Output.Elements[0].LoadAction = ELoad;
      bVar14 = FRenderTargetBinding::Validate((FRenderTargetBinding *)&local_228);
      if ((!bVar14) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Validate()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                              ,0x256,L""), bVar14)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (this->bRequiresSceneDepthAux != false) {
        local_228.Output.Elements[1].LoadAction = ELoad;
        bVar14 = FRenderTargetBinding::Validate(local_228.Output.Elements + 1);
        if ((!bVar14) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Validate()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                                ,0x256,L""), bVar14)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      local_228.DepthStencil.DepthLoadAction = ELoad;
      bVar14 = FDepthStencilBinding::Validate(&local_228.DepthStencil);
      if ((!bVar14) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Validate()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                              ,0x2e9,L""), bVar14)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_228.DepthStencil.StencilLoadAction = ELoad;
      bVar14 = FDepthStencilBinding::Validate(&local_228.DepthStencil);
      if ((!bVar14) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Validate()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                              ,0x2ef,L""), bVar14)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_228.DepthStencil.DepthStencilAccess.Value =
           DepthWrite_StencilWrite - (this->bIsFullDepthPrepassEnabled != false);
      bVar14 = FDepthStencilBinding::Validate(&local_228.DepthStencil);
      if ((!bVar14) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Validate()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                              ,0x2e3,L""), bVar14)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FViewInfo::BeginRenderView(pFVar3);
    UpdateDirectionalLightUniformBuffers(this,param_1,pFVar3);
    bVar14 = this->bIsFullDepthPrepassEnabled;
    pFVar22 = FRDGBuilder::AllocParameters<FMobileRenderPassParameters>(local_350);
    pFVar23 = FViewInfo::GetShaderParameters(pFVar3,&local_248);
    uVar7 = *(undefined8 *)&(pFVar23->View).field_0x8;
    *(undefined8 *)&(pFVar22->View).View = *(undefined8 *)&pFVar23->View;
    *(undefined8 *)&(pFVar22->View).View.field_0x8 = uVar7;
    uVar7 = *(undefined8 *)&(pFVar23->InstancedView).field_0x8;
    *(undefined8 *)&(pFVar22->View).InstancedView = *(undefined8 *)&pFVar23->InstancedView;
    *(undefined8 *)&(pFVar22->View).InstancedView.field_0x8 = uVar7;
    pFVar24 = FRDGBuilder::AllocParameters<FMobileBasePassUniformParameters>(local_350);
    param_1 = local_350;
    EVar35 = CustomDepth;
    if (bVar14 != false) {
      EVar35 = CustomDepth|SceneDepth;
    }
    SetupMobileBasePassUniformParameters
              (local_350,pFVar3,Opaque,EVar35,pFVar24,local_348,false,false);
    pTVar25 = FRDGBuilder::CreateUniformBuffer<FMobileBasePassUniformParameters>(param_1,pFVar24);
    pFVar26 = FMobileBasePassUniformParameters::GetStructMetadata();
    EStack_2e0 = Static;
    if (pFVar26->BindingFlags != StaticAndShader) {
      EStack_2e0 = pFVar26->BindingFlags;
    }
    *(TRDGUniformBuffer<FMobileBasePassUniformParameters> **)&pFVar22->MobileBasePass = pTVar25;
    *(ulonglong *)&(pFVar22->MobileBasePass).field_0x8 = CONCAT71(uStack_2df,EStack_2e0);
    local_2e8 = pTVar25;
    pFVar26 = FMobileReflectionCaptureShaderData::GetStructMetadata();
    local_2d8 = pFVar3->MobileReflectionCaptureUniformBuffer;
    EStack_2d0 = Static;
    if (pFVar26->BindingFlags != StaticAndShader) {
      EStack_2d0 = pFVar26->BindingFlags;
    }
    lVar32 = 2;
    *(TUniformBufferRef<FMobileReflectionCaptureShaderData> *)&pFVar22->ReflectionCapture =
         local_2d8;
    *(ulonglong *)&(pFVar22->ReflectionCapture).field_0x8 = CONCAT71(uStack_2cf,EStack_2d0);
    pFVar27 = &local_228;
    pFVar28 = &pFVar22->RenderTargets;
    do {
      pFVar16 = (pFVar27->Output).Elements[0].ResolveTexture;
      (pFVar28->Output).Elements[0].Texture = (pFVar27->Output).Elements[0].Texture;
      (pFVar28->Output).Elements[0].ResolveTexture = pFVar16;
      uVar8 = (pFVar27->Output).Elements[0].MipIndex;
      sVar9 = (pFVar27->Output).Elements[0].ArraySlice;
      uVar10 = *(undefined4 *)&(pFVar27->Output).Elements[0].field_0x14;
      pFVar16 = (pFVar27->Output).Elements[1].Texture;
      (pFVar28->Output).Elements[0].LoadAction = (pFVar27->Output).Elements[0].LoadAction;
      (pFVar28->Output).Elements[0].MipIndex = uVar8;
      (pFVar28->Output).Elements[0].ArraySlice = sVar9;
      *(undefined4 *)&(pFVar28->Output).Elements[0].field_0x14 = uVar10;
      (pFVar28->Output).Elements[1].Texture = pFVar16;
      EVar11 = (pFVar27->Output).Elements[1].LoadAction;
      uVar8 = (pFVar27->Output).Elements[1].MipIndex;
      sVar9 = (pFVar27->Output).Elements[1].ArraySlice;
      uVar10 = *(undefined4 *)&(pFVar27->Output).Elements[1].field_0x14;
      (pFVar28->Output).Elements[1].ResolveTexture = (pFVar27->Output).Elements[1].ResolveTexture;
      (pFVar28->Output).Elements[1].LoadAction = EVar11;
      (pFVar28->Output).Elements[1].MipIndex = uVar8;
      (pFVar28->Output).Elements[1].ArraySlice = sVar9;
      *(undefined4 *)&(pFVar28->Output).Elements[1].field_0x14 = uVar10;
      pFVar16 = (pFVar27->Output).Elements[2].ResolveTexture;
      (pFVar28->Output).Elements[2].Texture = (pFVar27->Output).Elements[2].Texture;
      (pFVar28->Output).Elements[2].ResolveTexture = pFVar16;
      uVar8 = (pFVar27->Output).Elements[2].MipIndex;
      sVar9 = (pFVar27->Output).Elements[2].ArraySlice;
      uVar10 = *(undefined4 *)&(pFVar27->Output).Elements[2].field_0x14;
      pFVar16 = (pFVar27->Output).Elements[3].Texture;
      (pFVar28->Output).Elements[2].LoadAction = (pFVar27->Output).Elements[2].LoadAction;
      (pFVar28->Output).Elements[2].MipIndex = uVar8;
      (pFVar28->Output).Elements[2].ArraySlice = sVar9;
      *(undefined4 *)&(pFVar28->Output).Elements[2].field_0x14 = uVar10;
      (pFVar28->Output).Elements[3].Texture = pFVar16;
      EVar11 = (pFVar27->Output).Elements[3].LoadAction;
      uVar8 = (pFVar27->Output).Elements[3].MipIndex;
      sVar9 = (pFVar27->Output).Elements[3].ArraySlice;
      uVar10 = *(undefined4 *)&(pFVar27->Output).Elements[3].field_0x14;
      (pFVar28->Output).Elements[3].ResolveTexture = (pFVar27->Output).Elements[3].ResolveTexture;
      (pFVar28->Output).Elements[3].LoadAction = EVar11;
      (pFVar28->Output).Elements[3].MipIndex = uVar8;
      (pFVar28->Output).Elements[3].ArraySlice = sVar9;
      *(undefined4 *)&(pFVar28->Output).Elements[3].field_0x14 = uVar10;
      pFVar16 = (pFVar27->Output).Elements[4].ResolveTexture;
      (pFVar28->Output).Elements[4].Texture = (pFVar27->Output).Elements[4].Texture;
      (pFVar28->Output).Elements[4].ResolveTexture = pFVar16;
      uVar8 = (pFVar27->Output).Elements[4].MipIndex;
      sVar9 = (pFVar27->Output).Elements[4].ArraySlice;
      uVar10 = *(undefined4 *)&(pFVar27->Output).Elements[4].field_0x14;
      pFVar16 = (pFVar27->Output).Elements[5].Texture;
      (pFVar28->Output).Elements[4].LoadAction = (pFVar27->Output).Elements[4].LoadAction;
      (pFVar28->Output).Elements[4].MipIndex = uVar8;
      (pFVar28->Output).Elements[4].ArraySlice = sVar9;
      *(undefined4 *)&(pFVar28->Output).Elements[4].field_0x14 = uVar10;
      (pFVar28->Output).Elements[5].Texture = pFVar16;
      lVar32 = lVar32 + -1;
      pFVar27 = (FRenderTargetBindingSlots *)&(pFVar27->Output).Elements[5].ResolveTexture;
      pFVar28 = (FRenderTargetBindingSlots *)&(pFVar28->Output).Elements[5].ResolveTexture;
    } while (lVar32 != 0);
    uStack_2c0 = 4;
    pFVar22->LocalFogVolumeInstances = pFVar3->LocalFogVolumeViewData->GPUInstanceDataBufferSRV;
    local_2c8 = pFVar3->LocalFogVolumeViewData->GPUTileDrawIndirectBuffer;
    *(FRDGBuffer **)&pFVar22->LocalFogVolumeTileDrawIndirectBuffer = local_2c8;
    *(ulonglong *)&(pFVar22->LocalFogVolumeTileDrawIndirectBuffer).field_0x8 =
         CONCAT44(uStack_2bc,4);
    pFVar22->LocalFogVolumeTileDataTexture = pFVar3->LocalFogVolumeViewData->TileDataTextureArraySRV
    ;
    pFVar22->LocalFogVolumeTileDataBuffer = pFVar3->LocalFogVolumeViewData->GPUTileDataBufferSRV;
    pFVar22->HalfResLocalFogVolumeViewSRV =
         pFVar3->LocalFogVolumeViewData->HalfResLocalFogVolumeViewSRV;
    pFVar22->HalfResLocalFogVolumeDepthSRV =
         pFVar3->LocalFogVolumeViewData->HalfResLocalFogVolumeDepthSRV;
    if (bVar13) {
      uVar2 = *(uint *)((((TArray<FRenderViewContext,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                           *)FVar19.Data)->AllocatorInstance).InlineData + 8);
      uVar15 = 0;
      if ((int)uVar2 < local_f8.ArrayNum) {
        uVar15 = ~uVar2 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar29.Data = (FViewOcclusionQueries *)&local_f8;
      if ((TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
           *)local_f8.AllocatorInstance.SecondaryData.Data !=
          (TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
           *)0x0) {
        FVar29.Data = local_f8.AllocatorInstance.SecondaryData.Data;
      }
      pFVar33 = (FViewOcclusionQueries *)
                ((ForElementType<FProjectedShadowInfo_const_*> *)
                 (((TArray<FViewOcclusionQueries,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                    *)FVar29.Data)->AllocatorInstance).InlineData + (longlong)(int)uVar2 * 0x11);
    }
    else {
      pFVar33 = (FViewOcclusionQueries *)0x0;
    }
    if (this->bRequiresMultiPass == false) {
      RenderForwardSinglePass(this,param_1,pFVar22,FVar19.Data,local_358,local_360,pFVar33);
    }
    else {
      RenderForwardMultiPass(this,param_1,pFVar22,FVar19.Data,local_358,local_360,pFVar33);
    }
    if (local_318 != '\0') {
      FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_328);
    }
    FRHIComputeCommandList::SetGPUMask(local_340,FVar1);
    uVar31 = (ulonglong)(uint)local_128.ArrayNum;
    FVar19.Data = (FRenderViewContext *)
                  ((((TArray<FRenderViewContext,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                      *)FVar19.Data)->AllocatorInstance).InlineData + 0x10);
    uVar34 = (ulonglong)local_364;
    param_3 = local_358;
  } while( true );
}

// RenderForwardMultiPass @ 144fda5e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMobileSceneRenderer::RenderForwardMultiPass
          (FMobileSceneRenderer *this,FRDGBuilder *param_1,FMobileRenderPassParameters *param_2,
          FRenderViewContext *param_3,FSceneTextures *param_4,FInstanceCullingManager *param_5,
          FViewOcclusionQueries *param_6)

{
  int *piVar1;
  FDepthStencilBinding *this_00;
  int *piVar2;
  FViewInfo *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong lVar6;
  TUniformBufferRef<FMobileReflectionCaptureShaderData> TVar7;
  bool bVar8;
  bool bVar9;
  ERDGPassFlags EVar10;
  int iVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  FRDGEventName *pFVar14;
  FShaderParametersMetadata *pFVar15;
  wchar_t *pwVar16;
  FRDGPass *pFVar17;
  FScriptContainerElement *pFVar18;
  TRDGUniformBuffer<FMobileBasePassUniformParameters> *pTVar19;
  FViewOcclusionQueries *pFVar20;
  FScriptContainerElement *pFVar21;
  undefined8 *local_358;
  undefined8 *local_350;
  TUniformBufferRef<FMobileReflectionCaptureShaderData> local_348;
  EUniformBufferBindingFlags EStack_340;
  undefined7 uStack_33f;
  FViewOcclusionQueries local_338;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined4 local_2a0;
  undefined4 uStack_29c;
  FRDGParameterStruct local_298;
  FRDGParameterStruct local_280;
  FMobileSceneRenderer *local_268;
  FMobileRenderPassParameters *pFStack_260;
  FInstanceCullingDrawParams *local_258;
  FViewInfo *pFStack_250;
  FScriptContainerElement *pFStack_248;
  FSceneTextures *pFStack_240;
  FRDGTextureMSAA local_238;
  FRDGTextureMSAA local_228;
  FRDGTextureMSAA local_218;
  FRDGEventName local_208;
  FRDGEventName local_1f0;
  FMobileBasePassTextures local_1d8;
  FMobileSceneRenderer *local_190;
  FScriptContainerElement *local_188;
  FViewInfo *local_180;
  wchar_t *pwStack_178;
  undefined1 local_170;
  FSceneTextures *local_168;
  FViewOcclusionQueries local_160;
  FViewOcclusionQueries local_d8;
  
  puVar13 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x130,0x10);
  if (puVar13 == (undefined8 *)0x0) {
    puVar13 = (undefined8 *)0x0;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    *puVar13 = &FRDGAllocator::
                TObject<`FMobileSceneRenderer::RenderForwardMultiPass'::`2'::FForwardFirstPassParameterCollection>
                ::_vftable_;
    memset(puVar13 + 2,0,0x120);
    *(undefined4 *)(puVar13 + 3) = 4;
    *(undefined4 *)(puVar13 + 5) = 8;
    *(undefined1 *)(puVar13 + 9) = 1;
    *(undefined1 *)(puVar13 + 0xb) = 1;
    *(undefined1 *)(puVar13 + 0xd) = 1;
    *(undefined4 *)(puVar13 + 0xf) = 4;
    *(undefined4 *)(puVar13 + 0x11) = 8;
    *(undefined1 *)(puVar13 + 0x15) = 1;
    *(undefined1 *)(puVar13 + 0x17) = 1;
    *(undefined1 *)(puVar13 + 0x19) = 1;
    *(undefined4 *)(puVar13 + 0x1b) = 4;
    *(undefined4 *)(puVar13 + 0x1d) = 8;
    *(undefined1 *)(puVar13 + 0x21) = 1;
    *(undefined1 *)(puVar13 + 0x23) = 1;
    *(undefined1 *)(puVar13 + 0x25) = 1;
  }
  local_358 = puVar13;
  if (((undefined8 **)param_1->_padding_ <= &local_358) &&
     (&local_358 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4)))
  {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar11 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar11 == *piVar1) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  *(int *)&param_1->_padding_ = iVar11 + 1;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar11 * 8) = local_358;
  pFVar3 = param_3->ViewInfo;
  local_348 = (TUniformBufferRef<FMobileReflectionCaptureShaderData>)pFVar3;
  if (*(char *)(*(longlong *)&this->field_0x8 + 0x38e0) != '\0') {
    if (this->bIsFullDepthPrepassEnabled == false) {
      BuildMeshRenderingCommands
                (param_1,DepthPass,pFVar3,(FGPUScene *)(*(longlong *)&this->field_0x8 + 0x3500),
                 param_5,(FInstanceCullingDrawParams *)(puVar13 + 2));
    }
    BuildMeshRenderingCommands
              (param_1,BasePass,pFVar3,(FGPUScene *)(*(longlong *)&this->field_0x8 + 0x3500),param_5
               ,&param_2->InstanceCullingDrawParams);
    BuildMeshRenderingCommands
              (param_1,SkyPass,pFVar3,(FGPUScene *)(*(longlong *)&this->field_0x8 + 0x3500),param_5,
               (FInstanceCullingDrawParams *)(puVar13 + 0xe));
    BuildMeshRenderingCommands
              (param_1,DebugViewMode,pFVar3,(FGPUScene *)(*(longlong *)&this->field_0x8 + 0x3500),
               param_5,(FInstanceCullingDrawParams *)(puVar13 + 0x1a));
  }
  pFStack_240 = param_4;
  pFStack_250 = param_3->ViewInfo;
  pFStack_248 = *(FScriptContainerElement **)&param_3->ViewIndex;
  local_268 = this;
  pFStack_260 = param_2;
  local_258 = (FInstanceCullingDrawParams *)(puVar13 + 2);
  pFVar14 = FRDGEventName::FRDGEventName(&local_208,1,L"SceneColorRendering");
  pFVar15 = FMobileRenderPassParameters::FTypeInfo::GetStructMetadata();
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,param_2,pFVar15,pFVar14,Raster);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  pwVar16 = FRDGEventName::GetTCHAR(pFVar14);
  EVar10 = FRDGBuilder::OverridePassFlags(param_1,pwVar16,Raster);
  pFVar17 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1b8,8);
  local_298.Contents = (uchar *)param_2;
  if ((pFVar15->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_298.Layout.Reference = (pFVar15->Layout).Reference;
  if (local_298.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_298.Layout.Reference);
  }
  local_298.Metadata = pFVar15;
  FRDGPass::FRDGPass(pFVar17,pFVar14,&local_298,EVar10,Await);
  pFVar17->_padding_ =
       (longlong)
       &TRDGLambdaPass<FMobileRenderPassParameters,`FMobileSceneRenderer::RenderForwardMultiPass'::`2'::<lambda_1>_>
        ::_vftable_;
  pFVar17[1]._padding_ = (longlong)local_268;
  pFVar17[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_260;
  pFVar17[1].ParameterStruct.Contents = (uchar *)param_2;
  *(FInstanceCullingDrawParams **)&pFVar17[1].FullPathIfDebug.Data.ArrayNum = local_258;
  pFVar17[1].Name.EventFormat = (wchar_t *)pFStack_250;
  pFVar17[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFStack_248;
  *(FSceneTextures **)&pFVar17[1].Name.FormattedEventName.Data.ArrayNum = pFStack_240;
  FRDGBuilder::ClobberPassOutputs(param_1,pFVar17);
  iVar11 = (param_1->Passes).Array.ArrayNum;
  piVar2 = &(param_1->Passes).Array.ArrayMax;
  if (iVar11 == *piVar2) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                       (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar2);
  }
  (param_1->Passes).Array.ArrayNum = iVar11 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar11] = pFVar17;
  (pFVar17->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_1,pFVar17);
  if (local_208.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.FormattedEventName.Data.AllocatorInstance.Data);
  }
  if (this->bIsFullDepthPrepassEnabled == false) {
    local_238.Target = (FRDGTexture *)param_4->_padding_;
    local_238.Resolve = (FRDGTexture *)param_4->_padding_;
    AddResolveSceneDepthPass(param_1,pFVar3,&local_238);
  }
  if (this->bRequiresSceneDepthAux != false) {
    local_228.Target = (param_4->DepthAux).Target;
    local_228.Resolve = (param_4->DepthAux).Resolve;
    AddResolveSceneColorPass(param_1,pFVar3,&local_228);
  }
  if ((this->bShouldRenderHZB != false) && (this->bIsFullDepthPrepassEnabled == false)) {
    RenderHZB(this,param_1,(FRDGTexture *)param_4->_padding_);
  }
  uVar12 = 0x21;
  if (this->bModulatedShadowsInUse == false) {
    uVar12 = 0x11;
  }
  puVar13 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x270,0x10);
  if (puVar13 == (undefined8 *)0x0) {
    puVar13 = (undefined8 *)0x0;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    *puVar13 = &FRDGAllocator::
                TObject<`FMobileSceneRenderer::RenderForwardMultiPass'::`2'::FForwardSecondPassParameterCollection>
                ::_vftable_;
    memset(puVar13 + 2,0,0x260);
    FMobileRenderPassParameters::FMobileRenderPassParameters
              ((FMobileRenderPassParameters *)(puVar13 + 2));
    *(undefined4 *)(puVar13 + 0x43) = 4;
    puVar13[0x42] = 0;
    puVar13[0x44] = 0;
    *(undefined4 *)(puVar13 + 0x45) = 8;
    puVar13[0x48] = 0;
    *(undefined1 *)(puVar13 + 0x49) = 1;
    puVar13[0x4a] = 0;
    *(undefined1 *)(puVar13 + 0x4b) = 1;
    puVar13[0x4c] = 0;
    *(undefined1 *)(puVar13 + 0x4d) = 1;
  }
  local_350 = puVar13;
  if (((undefined8 **)param_1->_padding_ <= &local_350) &&
     (&local_350 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4)))
  {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar11 = (int)param_1->_padding_;
  if (iVar11 == *(int *)((longlong)&param_1->_padding_ + 4)) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  TVar7 = local_348;
  pFVar21 = (FScriptContainerElement *)(puVar13 + 2);
  *(int *)&param_1->_padding_ = iVar11 + 1;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar11 * 8) = local_350;
  local_1d8.AmbientOcclusionTexture = (FRDGTexture *)&DAT_00000004;
  pFVar18 = pFVar21;
  do {
    uVar5 = *(undefined8 *)&(param_2->View).View.field_0x8;
    *(undefined8 *)pFVar18 = *(undefined8 *)&(param_2->View).View;
    *(undefined8 *)(pFVar18 + 8) = uVar5;
    uVar5 = *(undefined8 *)&(param_2->View).InstancedView.field_0x8;
    *(undefined8 *)(pFVar18 + 0x10) = *(undefined8 *)&(param_2->View).InstancedView;
    *(undefined8 *)(pFVar18 + 0x18) = uVar5;
    uVar5 = *(undefined8 *)&(param_2->InstanceCullingDrawParams).DrawIndirectArgsBuffer.field_0x8;
    *(undefined8 *)(pFVar18 + 0x20) =
         *(undefined8 *)&(param_2->InstanceCullingDrawParams).DrawIndirectArgsBuffer;
    *(undefined8 *)(pFVar18 + 0x28) = uVar5;
    uVar5 = *(undefined8 *)&(param_2->InstanceCullingDrawParams).InstanceIdOffsetBuffer.field_0x8;
    *(undefined8 *)(pFVar18 + 0x30) =
         *(undefined8 *)&(param_2->InstanceCullingDrawParams).InstanceIdOffsetBuffer;
    *(undefined8 *)(pFVar18 + 0x38) = uVar5;
    lVar6 = (param_2->InstanceCullingDrawParams)._padding_;
    *(undefined8 *)(pFVar18 + 0x40) =
         *(undefined8 *)&(param_2->InstanceCullingDrawParams).InstanceDataByteOffset;
    *(longlong *)(pFVar18 + 0x48) = lVar6;
    uVar5 = *(undefined8 *)&(param_2->InstanceCullingDrawParams).InstanceCulling.field_0x8;
    *(undefined8 *)(pFVar18 + 0x50) =
         *(undefined8 *)&(param_2->InstanceCullingDrawParams).InstanceCulling;
    *(undefined8 *)(pFVar18 + 0x58) = uVar5;
    uVar5 = *(undefined8 *)&(param_2->InstanceCullingDrawParams).Scene.field_0x8;
    *(undefined8 *)(pFVar18 + 0x60) = *(undefined8 *)&(param_2->InstanceCullingDrawParams).Scene;
    *(undefined8 *)(pFVar18 + 0x68) = uVar5;
    uVar5 = *(undefined8 *)&(param_2->InstanceCullingDrawParams).BatchedPrimitive.field_0x8;
    *(undefined8 *)(pFVar18 + 0x70) =
         *(undefined8 *)&(param_2->InstanceCullingDrawParams).BatchedPrimitive;
    *(undefined8 *)(pFVar18 + 0x78) = uVar5;
    local_1d8.AmbientOcclusionTexture =
         (FRDGTexture *)
         ((longlong)&local_1d8.AmbientOcclusionTexture[-1].VisualizeTextureExtent.field0_0x0 + 7);
    pFVar18 = pFVar18 + 0x80;
    param_2 = (FMobileRenderPassParameters *)&param_2->MobileBasePass;
  } while (local_1d8.AmbientOcclusionTexture != (FRDGTexture *)0x0);
  local_1d8.DBufferTextures.DBufferA = (FRDGTexture *)0x0;
  local_1d8.DBufferTextures.DBufferB = (FRDGTexture *)0x0;
  local_1d8.DBufferTextures.DBufferC = (FRDGTexture *)0x0;
  local_1d8.DBufferTextures.DBufferATexArray = (FRDGTexture *)0x0;
  local_1d8.DBufferTextures.DBufferBTexArray = (FRDGTexture *)0x0;
  local_1d8.DBufferTextures.DBufferCTexArray = (FRDGTexture *)0x0;
  local_1d8.DBufferTextures.DBufferMask = (FRDGTexture *)0x0;
  local_1d8.ScreenSpaceShadowMaskTexture = (FRDGTexture *)0x0;
  pTVar19 = CreateMobileBasePassUniformBuffer
                      (param_1,(FViewInfo *)local_348,Translucent,
                       SceneDepthAux|CustomDepth|SceneDepth,&local_1d8,false,false);
  pFVar15 = FMobileBasePassUniformParameters::GetStructMetadata();
  EStack_340 = Static;
  if (pFVar15->BindingFlags != StaticAndShader) {
    EStack_340 = pFVar15->BindingFlags;
  }
  puVar13[0x12] = pTVar19;
  puVar13[0x13] = CONCAT71(uStack_33f,EStack_340);
  local_348 = (TUniformBufferRef<FMobileReflectionCaptureShaderData>)pTVar19;
  pFVar15 = FMobileReflectionCaptureShaderData::GetStructMetadata();
  local_348 = *(TUniformBufferRef<FMobileReflectionCaptureShaderData> *)((longlong)TVar7 + 0x25a8);
  EStack_340 = Static;
  if (pFVar15->BindingFlags != StaticAndShader) {
    EStack_340 = pFVar15->BindingFlags;
  }
  *(TUniformBufferRef<FMobileReflectionCaptureShaderData> *)(puVar13 + 0x14) = local_348;
  puVar13[0x15] = CONCAT71(uStack_33f,EStack_340);
  *(undefined1 *)(puVar13 + 0x24) = 1;
  bVar8 = FRenderTargetBinding::Validate((FRenderTargetBinding *)(puVar13 + 0x22));
  if (!bVar8) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Validate()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                       ,0x256,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uStack_29c = 0;
  puVar13[0x25] = 0;
  puVar13[0x26] = 0;
  this_00 = (FDepthStencilBinding *)(puVar13 + 0x3a);
  local_2a0 = 0xffff0000;
  local_2b0 = 0;
  uStack_2a8 = 0;
  puVar13[0x27] = 0xffff0000;
  *(undefined1 *)(puVar13 + 0x3c) = 1;
  bVar8 = FDepthStencilBinding::Validate(this_00);
  if (!bVar8) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Validate()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                       ,0x2e9,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(undefined1 *)((longlong)puVar13 + 0x1e1) = 1;
  bVar8 = FDepthStencilBinding::Validate(this_00);
  if (!bVar8) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Validate()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                       ,0x2ef,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(undefined4 *)((longlong)puVar13 + 0x1e4) = uVar12;
  bVar8 = FDepthStencilBinding::Validate(this_00);
  if (!bVar8) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Validate()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                       ,0x2e3,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (param_6 == (FViewOcclusionQueries *)0x0) {
    iVar11 = 0;
  }
  else {
    iVar11 = ComputeNumOcclusionQueriesToBatch(this);
  }
  *(int *)(puVar13 + 0x3f) = iVar11;
  if (*(char *)(*(longlong *)&this->field_0x8 + 0x38e0) != '\0') {
    BuildMeshRenderingCommands
              (param_1,MeshDecal_SceneColor,(FViewInfo *)TVar7,
               (FGPUScene *)(*(longlong *)&this->field_0x8 + 0x3500),param_5,
               (FInstanceCullingDrawParams *)(puVar13 + 0x42));
    BuildMeshRenderingCommands
              (param_1,this->StandardTranslucencyMeshPass,(FViewInfo *)TVar7,
               (FGPUScene *)(*(longlong *)&this->field_0x8 + 0x3500),param_5,
               (FInstanceCullingDrawParams *)(puVar13 + 6));
  }
  bVar8 = param_6 == (FViewOcclusionQueries *)0x0;
  if (bVar8) {
    local_338.bFlushQueries = true;
    local_338._129_4_ = 0;
    local_338._133_2_ = 0;
    local_338._135_1_ = 0;
    local_338.LocalLightQueryInfos.AllocatorInstance.Data = (FProjectedShadowInfo **)0x0;
    local_338.LocalLightQueryInfos.ArrayNum = 0;
    local_338.LocalLightQueryInfos.ArrayMax = 0;
    local_338.CSMQueryInfos.AllocatorInstance.Data = (FProjectedShadowInfo **)0x0;
    local_338.CSMQueryInfos.ArrayNum = 0;
    local_338.CSMQueryInfos.ArrayMax = 0;
    local_338.ShadowQueryInfos.AllocatorInstance.Data = (FProjectedShadowInfo **)0x0;
    local_338.ShadowQueryInfos.ArrayNum = 0;
    local_338.ShadowQueryInfos.ArrayMax = 0;
    local_338.ReflectionQueryInfos.AllocatorInstance.Data = (FPlanarReflectionSceneProxy **)0x0;
    local_338.ReflectionQueryInfos.ArrayNum = 0;
    local_338.ReflectionQueryInfos.ArrayMax = 0;
    local_338.LocalLightQueries.AllocatorInstance.Data = (FRHIRenderQuery **)0x0;
    local_338.LocalLightQueries.ArrayNum = 0;
    local_338.LocalLightQueries.ArrayMax = 0;
    local_338.CSMQueries.AllocatorInstance.Data = (FRHIRenderQuery **)0x0;
    local_338.CSMQueries.ArrayNum = 0;
    local_338.CSMQueries.ArrayMax = 0;
    local_338.ShadowQueries.AllocatorInstance.Data = (FRHIRenderQuery **)0x0;
    local_338.ShadowQueries.ArrayNum = 0;
    local_338.ShadowQueries.ArrayMax = 0;
    local_338.ReflectionQueries.AllocatorInstance.Data = (FRHIRenderQuery **)0x0;
    local_338.ReflectionQueries.ArrayNum = 0;
    local_338.ReflectionQueries.ArrayMax = 0;
    pFVar20 = &local_338;
  }
  else {
    pFVar20 = FViewOcclusionQueries::FViewOcclusionQueries(&local_d8,param_6);
  }
  local_180 = param_3->ViewInfo;
  pwStack_178 = *(wchar_t **)&param_3->ViewIndex;
  local_168 = param_4;
  local_190 = this;
  local_188 = pFVar21;
  local_170 = param_6 != (FViewOcclusionQueries *)0x0;
  FViewOcclusionQueries::FViewOcclusionQueries(&local_160,pFVar20);
  pFVar14 = FRDGEventName::FRDGEventName(&local_1f0,1,L"DecalsAndTranslucency");
  pFVar15 = FMobileRenderPassParameters::FTypeInfo::GetStructMetadata();
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,pFVar21,pFVar15,pFVar14,Raster);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  pwVar16 = FRDGEventName::GetTCHAR(pFVar14);
  EVar10 = FRDGBuilder::OverridePassFlags(param_1,pwVar16,Raster);
  pFVar17 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x240,8);
  local_280.Contents = (uchar *)pFVar21;
  if ((pFVar15->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_280.Layout.Reference = (pFVar15->Layout).Reference;
  if (local_280.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_280.Layout.Reference);
  }
  local_280.Metadata = pFVar15;
  FRDGPass::FRDGPass(pFVar17,pFVar14,&local_280,EVar10,Await);
  pFVar17->_padding_ =
       (longlong)
       &TRDGLambdaPass<FMobileRenderPassParameters,`FMobileSceneRenderer::RenderForwardMultiPass'::`2'::<lambda_2>_>
        ::_vftable_;
  pFVar17[1]._padding_ = (longlong)local_190;
  pFVar17[1].FullPathIfDebug.Data.AllocatorInstance.Data = local_188;
  *(undefined1 *)&pFVar17[1].Name.FormattedEventName.Data.AllocatorInstance.Data = local_170;
  *(FSceneTextures **)&pFVar17[1].Name.FormattedEventName.Data.ArrayNum = local_168;
  *(FViewInfo **)&pFVar17[1].FullPathIfDebug.Data.ArrayNum = local_180;
  pFVar17[1].Name.EventFormat = pwStack_178;
  FViewOcclusionQueries::FViewOcclusionQueries
            ((FViewOcclusionQueries *)&pFVar17[1].ParameterStruct,&local_160);
  *(FScriptContainerElement **)&pFVar17[1].Views.ArrayNum = pFVar21;
  FRDGBuilder::ClobberPassOutputs(param_1,pFVar17);
  iVar11 = (param_1->Passes).Array.ArrayNum;
  if (iVar11 == (param_1->Passes).Array.ArrayMax) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                       (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar2);
  }
  (param_1->Passes).Array.ArrayNum = iVar11 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar11] = pFVar17;
  (pFVar17->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_1,pFVar17);
  if (local_1f0.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f0.FormattedEventName.Data.AllocatorInstance.Data);
  }
  FViewOcclusionQueries::~FViewOcclusionQueries(&local_160);
  if (bVar8) {
    if (local_338.ReflectionQueries.AllocatorInstance.Data != (FRHIRenderQuery **)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                (local_338.ReflectionQueries.AllocatorInstance.Data);
    }
    if (local_338.ShadowQueries.AllocatorInstance.Data != (FRHIRenderQuery **)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                (local_338.ShadowQueries.AllocatorInstance.Data);
    }
    if (local_338.CSMQueries.AllocatorInstance.Data != (FRHIRenderQuery **)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                (local_338.CSMQueries.AllocatorInstance.Data);
    }
    if (local_338.LocalLightQueries.AllocatorInstance.Data != (FRHIRenderQuery **)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                (local_338.LocalLightQueries.AllocatorInstance.Data);
    }
    if (local_338.ReflectionQueryInfos.AllocatorInstance.Data != (FPlanarReflectionSceneProxy **)0x0
       ) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                (local_338.ReflectionQueryInfos.AllocatorInstance.Data);
    }
    if (local_338.ShadowQueryInfos.AllocatorInstance.Data != (FProjectedShadowInfo **)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                (local_338.ShadowQueryInfos.AllocatorInstance.Data);
    }
    if (local_338.CSMQueryInfos.AllocatorInstance.Data != (FProjectedShadowInfo **)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                (local_338.CSMQueryInfos.AllocatorInstance.Data);
    }
    if (local_338.LocalLightQueryInfos.AllocatorInstance.Data != (FProjectedShadowInfo **)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                (local_338.LocalLightQueryInfos.AllocatorInstance.Data);
    }
  }
  if (!bVar8) {
    FViewOcclusionQueries::~FViewOcclusionQueries(&local_d8);
  }
  local_218.Target = (FRDGTexture *)param_4->_padding_;
  local_218.Resolve = (FRDGTexture *)param_4->_padding_;
  AddResolveSceneColorPass(param_1,(FViewInfo *)TVar7,&local_218);
  return;
}

// RenderForwardSinglePass @ 144fdb220

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FMobileSceneRenderer::RenderForwardSinglePass
          (FMobileSceneRenderer *this,FRDGBuilder *param_1,FMobileRenderPassParameters *param_2,
          FRenderViewContext *param_3,FSceneTextures *param_4,FInstanceCullingManager *param_5,
          FViewOcclusionQueries *param_6)

{
  FViewInfo *pFVar1;
  longlong lVar2;
  FInstanceCullingOcclusionQueryRenderer *this_00;
  code *pcVar3;
  undefined8 uVar4;
  TConsoleVariableData<int> *pTVar5;
  ESubpassHint EVar6;
  bool bVar7;
  bool bVar8;
  ERDGPassFlags EVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  FForwardSinglePassParameterCollection *pFVar13;
  FRDGTexture *pFVar14;
  FViewOcclusionQueries *pFVar15;
  FRDGEventName *pFVar16;
  FShaderParametersMetadata *pFVar17;
  wchar_t *pwVar18;
  FRDGPass *pFVar19;
  FLowLevelMemTracker *pFVar20;
  FPageAllocator *pFVar21;
  FMobileRenderPassParameters *pFVar22;
  char cVar23;
  FRHIRenderQuery **ppFVar24;
  int *piVar25;
  FPlanarReflectionSceneProxy **ppFVar26;
  FProjectedShadowInfo **ppFVar27;
  bool bVar28;
  FDepthStencilBinding local_368;
  FViewOcclusionQueries local_350;
  FViewInfo *local_2c8;
  FRDGParameterStruct local_2c0;
  FRDGParameterStruct local_2a8;
  FRDGTextureMSAA local_288;
  FRDGTextureAccess local_278;
  FRDGEventName local_260;
  FRDGEventName local_248;
  FMobileSceneRenderer *local_230;
  FMobileRenderPassParameters *local_228;
  FForwardSinglePassParameterCollection *local_220;
  FViewInfo *local_218;
  FScriptContainerElement *pFStack_210;
  char local_208;
  FSceneTextures *local_200;
  FViewOcclusionQueries local_1f8;
  FViewOcclusionQueries local_170;
  FMobileSceneRenderer *local_e8;
  FViewInfo *local_e0;
  undefined8 uStack_d8;
  FViewOcclusionQueries local_d0;
  
  uVar10 = 0;
  pFVar13 = FRDGAllocator::
            Alloc<_FMobileSceneRenderer::RenderForwardSinglePass_::__l2::FForwardSinglePassParameterCollection>
                      ((FRDGAllocator *)&param_1->_padding_);
  pFVar1 = param_3->ViewInfo;
  local_2c8 = pFVar1;
  if (*(char *)(*(longlong *)&this->field_0x8 + 0x38e0) != '\0') {
    if (this->bIsFullDepthPrepassEnabled == false) {
      BuildMeshRenderingCommands
                (param_1,DepthPass,pFVar1,(FGPUScene *)(*(longlong *)&this->field_0x8 + 0x3500),
                 param_5,&pFVar13->DepthPassInstanceCullingDrawParams);
    }
    BuildMeshRenderingCommands
              (param_1,BasePass,pFVar1,(FGPUScene *)(*(longlong *)&this->field_0x8 + 0x3500),param_5
               ,&param_2->InstanceCullingDrawParams);
    BuildMeshRenderingCommands
              (param_1,SkyPass,pFVar1,(FGPUScene *)(*(longlong *)&this->field_0x8 + 0x3500),param_5,
               &pFVar13->SkyPassInstanceCullingDrawParams);
    BuildMeshRenderingCommands
              (param_1,DebugViewMode,pFVar1,(FGPUScene *)(*(longlong *)&this->field_0x8 + 0x3500),
               param_5,&pFVar13->DebugViewModeInstanceCullingDrawParams);
    BuildMeshRenderingCommands
              (param_1,MeshDecal_SceneColor,pFVar1,
               (FGPUScene *)(*(longlong *)&this->field_0x8 + 0x3500),param_5,
               &pFVar13->MeshDecalSceneColorInstanceCullingDrawParams);
    BuildMeshRenderingCommands
              (param_1,this->StandardTranslucencyMeshPass,pFVar1,
               (FGPUScene *)(*(longlong *)&this->field_0x8 + 0x3500),param_5,
               &pFVar13->TranslucencyInstanceCullingDrawParams);
  }
  if (this->bTonemapSubpassInline != false) {
    pFVar14 = AddCombineLUTPass(param_1,param_3->ViewInfo);
    FRDGTextureAccess::FRDGTextureAccess(&local_278,pFVar14,SRVGraphics);
    *(FRDGTexture **)&param_2->ColorGradingLUT = local_278.Texture;
    (param_2->ColorGradingLUT).field_0x8 = local_278.SubresourceRange.MipIndex;
    (param_2->ColorGradingLUT).field_0x9 = local_278.SubresourceRange.PlaneSlice;
    *(ushort *)&(param_2->ColorGradingLUT).field_0xa = local_278.SubresourceRange.ArraySlice;
    (param_2->ColorGradingLUT).field_0xc = local_278.SubresourceRange.NumMips;
    (param_2->ColorGradingLUT).field_0xd = local_278.SubresourceRange.NumPlaneSlices;
    *(ushort *)&(param_2->ColorGradingLUT).field_0xe = local_278.SubresourceRange.NumArraySlices;
    *(ERHIAccess *)&(param_2->ColorGradingLUT).field_0x10 = local_278.Access;
    *(undefined4 *)&(param_2->ColorGradingLUT).field_0x14 = local_278._20_4_;
  }
  EVar6 = DepthReadSubpass;
  if (this->bTonemapSubpassInline != false) {
    EVar6 = CustomResolveSubpass;
  }
  (param_2->RenderTargets).SubpassHint = EVar6;
  if (param_6 != (FViewOcclusionQueries *)0x0) {
    uVar10 = ComputeNumOcclusionQueriesToBatch(this);
  }
  if (this->bAdrenoOcclusionMode != false) {
    bVar7 = IsVulkanPlatform((FStaticShaderPlatform)*(EShaderPlatform *)&this->field_0xadc);
    if (bVar7) {
      bVar7 = true;
      goto LAB_144fdb413;
    }
  }
  bVar7 = false;
LAB_144fdb413:
  if ((param_6 == (FViewOcclusionQueries *)0x0) || (bVar7)) {
    cVar23 = '\0';
  }
  else {
    cVar23 = '\x01';
  }
  uVar11 = uVar10;
  if (bVar7) {
    uVar11 = 0;
  }
  (param_2->RenderTargets).NumOcclusionQueries = uVar11;
  bVar28 = cVar23 == '\0';
  if (bVar28) {
    local_350.LocalLightQueryInfos.AllocatorInstance.Data = (FProjectedShadowInfo **)0x0;
    local_350._129_4_ = 0;
    local_350._133_2_ = 0;
    local_350._135_1_ = 0;
    local_350.LocalLightQueryInfos.ArrayNum = 0;
    local_350.LocalLightQueryInfos.ArrayMax = 0;
    local_350.CSMQueryInfos.ArrayNum = 0;
    local_350.CSMQueryInfos.ArrayMax = 0;
    local_350.ShadowQueryInfos.ArrayNum = 0;
    local_350.ShadowQueryInfos.ArrayMax = 0;
    local_350.ReflectionQueryInfos.ArrayNum = 0;
    local_350.ReflectionQueryInfos.ArrayMax = 0;
    local_350.LocalLightQueries.ArrayNum = 0;
    local_350.LocalLightQueries.ArrayMax = 0;
    local_350.CSMQueries.ArrayNum = 0;
    local_350.CSMQueries.ArrayMax = 0;
    local_350.ShadowQueries.ArrayNum = 0;
    local_350.ShadowQueries.ArrayMax = 0;
    local_350.ReflectionQueries.ArrayNum = 0;
    local_350.ReflectionQueries.ArrayMax = 0;
    pFVar15 = &local_350;
    local_350.CSMQueryInfos.AllocatorInstance.Data = (FProjectedShadowInfo **)0x0;
    local_350.ShadowQueryInfos.AllocatorInstance.Data = (FProjectedShadowInfo **)0x0;
    local_350.ReflectionQueryInfos.AllocatorInstance.Data = (FPlanarReflectionSceneProxy **)0x0;
    local_350.LocalLightQueries.AllocatorInstance.Data = (FRHIRenderQuery **)0x0;
    local_350.CSMQueries.AllocatorInstance.Data = (FRHIRenderQuery **)0x0;
    local_350.ShadowQueries.AllocatorInstance.Data = (FRHIRenderQuery **)0x0;
    local_350.ReflectionQueries.AllocatorInstance.Data = (FRHIRenderQuery **)0x0;
    local_350.bFlushQueries = true;
  }
  else {
    pFVar15 = FViewOcclusionQueries::FViewOcclusionQueries(&local_170,param_6);
  }
  local_218 = param_3->ViewInfo;
  pFStack_210 = *(FScriptContainerElement **)&param_3->ViewIndex;
  local_200 = param_4;
  local_230 = this;
  local_228 = param_2;
  local_220 = pFVar13;
  local_208 = cVar23;
  FViewOcclusionQueries::FViewOcclusionQueries(&local_1f8,pFVar15);
  pFVar16 = FRDGEventName::FRDGEventName(&local_260,1,L"SceneColorRendering");
  pFVar17 = FMobileRenderPassParameters::FTypeInfo::GetStructMetadata();
  FRDGUserValidation::ValidateAddPass
            (&param_1->UserValidation,param_2,pFVar17,pFVar16,NeverMerge|Raster);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  pwVar18 = FRDGEventName::GetTCHAR(pFVar16);
  EVar9 = FRDGBuilder::OverridePassFlags(param_1,pwVar18,NeverMerge|Raster);
  pFVar19 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x248,8);
  local_2c0.Contents = (uchar *)param_2;
  if ((pFVar17->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_2c0.Layout.Reference = (pFVar17->Layout).Reference;
  if (local_2c0.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_2c0.Layout.Reference);
  }
  local_2c0.Metadata = pFVar17;
  FRDGPass::FRDGPass(pFVar19,pFVar16,&local_2c0,EVar9,Await);
  pFVar19->_padding_ =
       (longlong)
       &TRDGLambdaPass<FMobileRenderPassParameters,`FMobileSceneRenderer::RenderForwardSinglePass'::`2'::<lambda_1>_>
        ::_vftable_;
  pFVar19[1]._padding_ = (longlong)local_230;
  pFVar19[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_228;
  *(FForwardSinglePassParameterCollection **)&pFVar19[1].FullPathIfDebug.Data.ArrayNum = local_220;
  *(char *)&pFVar19[1].Name.FormattedEventName.Data.ArrayNum = local_208;
  pFVar19[1].ParameterStruct.Contents = (uchar *)local_200;
  pFVar19[1].Name.EventFormat = (wchar_t *)local_218;
  pFVar19[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFStack_210;
  FViewOcclusionQueries::FViewOcclusionQueries
            ((FViewOcclusionQueries *)&pFVar19[1].ParameterStruct.Layout,&local_1f8);
  pFVar19[1].UniformBuffers.AllocatorInstance.Data =
       (TRDGHandle<FRDGUniformBuffer,unsigned_int> *)param_2;
  FRDGBuilder::ClobberPassOutputs(param_1,pFVar19);
  iVar12 = (param_1->Passes).Array.ArrayNum;
  if (iVar12 == (param_1->Passes).Array.ArrayMax) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                       (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,
                        &(param_1->Passes).Array.ArrayMax);
  }
  (param_1->Passes).Array.ArrayNum = iVar12 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar12] = pFVar19;
  (pFVar19->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_1,pFVar19);
  if (local_260.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_260.FormattedEventName.Data.AllocatorInstance.Data);
  }
  FViewOcclusionQueries::~FViewOcclusionQueries(&local_1f8);
  if (bVar28) {
    if (local_350.ReflectionQueries.AllocatorInstance.Data != (FRHIRenderQuery **)0x0) {
      ppFVar24 = local_350.ReflectionQueries.AllocatorInstance.Data + -1;
      MemoryTrace_Free((ulong64)ppFVar24,0,0);
      if (FLowLevelMemTracker::EnabledState != Disabled) {
        pFVar20 = FLowLevelMemTracker::TrackerInstance;
        if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
          pFVar20 = FLowLevelMemTracker::Construct();
        }
        FLowLevelMemTracker::OnLowLevelFree(pFVar20,Default,ppFVar24,FMalloc,true);
      }
      piVar25 = (int *)((longlong)ppFVar24 - (ulonglong)*(uint *)ppFVar24);
      LOCK();
      iVar12 = *piVar25;
      *piVar25 = *piVar25 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        lVar2 = *(longlong *)(piVar25 + 0x10);
        MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar25,0,0);
        if (lVar2 - (longlong)piVar25 == 0x10000) {
          pFVar21 = FPageAllocator::Get();
          FPageAllocator::Free(pFVar21,piVar25);
        }
        else {
          (**(code **)((longlong)*UE::Private::GMalloc + 0x48))();
        }
      }
    }
    if (local_350.ShadowQueries.AllocatorInstance.Data != (FRHIRenderQuery **)0x0) {
      ppFVar24 = local_350.ShadowQueries.AllocatorInstance.Data + -1;
      MemoryTrace_Free((ulong64)ppFVar24,0,0);
      if (FLowLevelMemTracker::EnabledState != Disabled) {
        pFVar20 = FLowLevelMemTracker::TrackerInstance;
        if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
          pFVar20 = FLowLevelMemTracker::Construct();
        }
        FLowLevelMemTracker::OnLowLevelFree(pFVar20,Default,ppFVar24,FMalloc,true);
      }
      piVar25 = (int *)((longlong)ppFVar24 - (ulonglong)*(uint *)ppFVar24);
      LOCK();
      iVar12 = *piVar25;
      *piVar25 = *piVar25 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        lVar2 = *(longlong *)(piVar25 + 0x10);
        MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar25,0,0);
        if (lVar2 - (longlong)piVar25 == 0x10000) {
          pFVar21 = FPageAllocator::Get();
          FPageAllocator::Free(pFVar21,piVar25);
        }
        else {
          (**(code **)((longlong)*UE::Private::GMalloc + 0x48))();
        }
      }
    }
    if (local_350.CSMQueries.AllocatorInstance.Data != (FRHIRenderQuery **)0x0) {
      ppFVar24 = local_350.CSMQueries.AllocatorInstance.Data + -1;
      MemoryTrace_Free((ulong64)ppFVar24,0,0);
      if (FLowLevelMemTracker::EnabledState != Disabled) {
        pFVar20 = FLowLevelMemTracker::TrackerInstance;
        if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
          pFVar20 = FLowLevelMemTracker::Construct();
        }
        FLowLevelMemTracker::OnLowLevelFree(pFVar20,Default,ppFVar24,FMalloc,true);
      }
      piVar25 = (int *)((longlong)ppFVar24 - (ulonglong)*(uint *)ppFVar24);
      LOCK();
      iVar12 = *piVar25;
      *piVar25 = *piVar25 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        lVar2 = *(longlong *)(piVar25 + 0x10);
        MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar25,0,0);
        if (lVar2 - (longlong)piVar25 == 0x10000) {
          pFVar21 = FPageAllocator::Get();
          FPageAllocator::Free(pFVar21,piVar25);
        }
        else {
          (**(code **)((longlong)*UE::Private::GMalloc + 0x48))();
        }
      }
    }
    if (local_350.LocalLightQueries.AllocatorInstance.Data != (FRHIRenderQuery **)0x0) {
      ppFVar24 = local_350.LocalLightQueries.AllocatorInstance.Data + -1;
      MemoryTrace_Free((ulong64)ppFVar24,0,0);
      if (FLowLevelMemTracker::EnabledState != Disabled) {
        pFVar20 = FLowLevelMemTracker::TrackerInstance;
        if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
          pFVar20 = FLowLevelMemTracker::Construct();
        }
        FLowLevelMemTracker::OnLowLevelFree(pFVar20,Default,ppFVar24,FMalloc,true);
      }
      piVar25 = (int *)((longlong)ppFVar24 - (ulonglong)*(uint *)ppFVar24);
      LOCK();
      iVar12 = *piVar25;
      *piVar25 = *piVar25 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        lVar2 = *(longlong *)(piVar25 + 0x10);
        MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar25,0,0);
        if (lVar2 - (longlong)piVar25 == 0x10000) {
          pFVar21 = FPageAllocator::Get();
          FPageAllocator::Free(pFVar21,piVar25);
        }
        else {
          (**(code **)((longlong)*UE::Private::GMalloc + 0x48))();
        }
      }
    }
    if (local_350.ReflectionQueryInfos.AllocatorInstance.Data != (FPlanarReflectionSceneProxy **)0x0
       ) {
      ppFVar26 = local_350.ReflectionQueryInfos.AllocatorInstance.Data + -1;
      MemoryTrace_Free((ulong64)ppFVar26,0,0);
      if (FLowLevelMemTracker::EnabledState != Disabled) {
        pFVar20 = FLowLevelMemTracker::TrackerInstance;
        if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
          pFVar20 = FLowLevelMemTracker::Construct();
        }
        FLowLevelMemTracker::OnLowLevelFree(pFVar20,Default,ppFVar26,FMalloc,true);
      }
      piVar25 = (int *)((longlong)ppFVar26 - (ulonglong)*(uint *)ppFVar26);
      LOCK();
      iVar12 = *piVar25;
      *piVar25 = *piVar25 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        lVar2 = *(longlong *)(piVar25 + 0x10);
        MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar25,0,0);
        if (lVar2 - (longlong)piVar25 == 0x10000) {
          pFVar21 = FPageAllocator::Get();
          FPageAllocator::Free(pFVar21,piVar25);
        }
        else {
          (**(code **)((longlong)*UE::Private::GMalloc + 0x48))();
        }
      }
    }
    if (local_350.ShadowQueryInfos.AllocatorInstance.Data != (FProjectedShadowInfo **)0x0) {
      ppFVar27 = local_350.ShadowQueryInfos.AllocatorInstance.Data + -1;
      MemoryTrace_Free((ulong64)ppFVar27,0,0);
      if (FLowLevelMemTracker::EnabledState != Disabled) {
        pFVar20 = FLowLevelMemTracker::TrackerInstance;
        if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
          pFVar20 = FLowLevelMemTracker::Construct();
        }
        FLowLevelMemTracker::OnLowLevelFree(pFVar20,Default,ppFVar27,FMalloc,true);
      }
      piVar25 = (int *)((longlong)ppFVar27 - (ulonglong)*(uint *)ppFVar27);
      LOCK();
      iVar12 = *piVar25;
      *piVar25 = *piVar25 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        lVar2 = *(longlong *)(piVar25 + 0x10);
        MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar25,0,0);
        if (lVar2 - (longlong)piVar25 == 0x10000) {
          pFVar21 = FPageAllocator::Get();
          FPageAllocator::Free(pFVar21,piVar25);
        }
        else {
          (**(code **)((longlong)*UE::Private::GMalloc + 0x48))();
        }
      }
    }
    if (local_350.CSMQueryInfos.AllocatorInstance.Data != (FProjectedShadowInfo **)0x0) {
      ppFVar27 = local_350.CSMQueryInfos.AllocatorInstance.Data + -1;
      MemoryTrace_Free((ulong64)ppFVar27,0,0);
      if (FLowLevelMemTracker::EnabledState != Disabled) {
        pFVar20 = FLowLevelMemTracker::TrackerInstance;
        if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
          pFVar20 = FLowLevelMemTracker::Construct();
        }
        FLowLevelMemTracker::OnLowLevelFree(pFVar20,Default,ppFVar27,FMalloc,true);
      }
      piVar25 = (int *)((longlong)ppFVar27 - (ulonglong)*(uint *)ppFVar27);
      LOCK();
      iVar12 = *piVar25;
      *piVar25 = *piVar25 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        lVar2 = *(longlong *)(piVar25 + 0x10);
        MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar25,0,0);
        if (lVar2 - (longlong)piVar25 == 0x10000) {
          pFVar21 = FPageAllocator::Get();
          FPageAllocator::Free(pFVar21,piVar25);
        }
        else {
          (**(code **)((longlong)*UE::Private::GMalloc + 0x48))();
        }
      }
    }
    if (local_350.LocalLightQueryInfos.AllocatorInstance.Data != (FProjectedShadowInfo **)0x0) {
      ppFVar27 = local_350.LocalLightQueryInfos.AllocatorInstance.Data + -1;
      MemoryTrace_Free((ulong64)ppFVar27,0,0);
      if (FLowLevelMemTracker::EnabledState != Disabled) {
        pFVar20 = FLowLevelMemTracker::TrackerInstance;
        if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
          pFVar20 = FLowLevelMemTracker::Construct();
        }
        FLowLevelMemTracker::OnLowLevelFree(pFVar20,Default,ppFVar27,FMalloc,true);
      }
      piVar25 = (int *)((longlong)ppFVar27 - (ulonglong)*(uint *)ppFVar27);
      LOCK();
      iVar12 = *piVar25;
      *piVar25 = *piVar25 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        lVar2 = *(longlong *)(piVar25 + 0x10);
        MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar25,0,0);
        if (lVar2 - (longlong)piVar25 == 0x10000) {
          pFVar21 = FPageAllocator::Get();
          FPageAllocator::Free(pFVar21,piVar25);
        }
        else {
          (**(code **)((longlong)*UE::Private::GMalloc + 0x48))();
        }
      }
    }
  }
  if (!bVar28) {
    if (local_170.ReflectionQueries.AllocatorInstance.Data != (FRHIRenderQuery **)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                (local_170.ReflectionQueries.AllocatorInstance.Data);
    }
    if (local_170.ShadowQueries.AllocatorInstance.Data != (FRHIRenderQuery **)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                (local_170.ShadowQueries.AllocatorInstance.Data);
    }
    if (local_170.CSMQueries.AllocatorInstance.Data != (FRHIRenderQuery **)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                (local_170.CSMQueries.AllocatorInstance.Data);
    }
    if (local_170.LocalLightQueries.AllocatorInstance.Data != (FRHIRenderQuery **)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                (local_170.LocalLightQueries.AllocatorInstance.Data);
    }
    if (local_170.ReflectionQueryInfos.AllocatorInstance.Data != (FPlanarReflectionSceneProxy **)0x0
       ) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                (local_170.ReflectionQueryInfos.AllocatorInstance.Data);
    }
    if (local_170.ShadowQueryInfos.AllocatorInstance.Data != (FProjectedShadowInfo **)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                (local_170.ShadowQueryInfos.AllocatorInstance.Data);
    }
    if (local_170.CSMQueryInfos.AllocatorInstance.Data != (FProjectedShadowInfo **)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                (local_170.CSMQueryInfos.AllocatorInstance.Data);
    }
    if (local_170.LocalLightQueryInfos.AllocatorInstance.Data != (FProjectedShadowInfo **)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                (local_170.LocalLightQueryInfos.AllocatorInstance.Data);
    }
  }
  if ((*(uint *)&this->field_0x114 & 0x40000000) != 0) {
    this_00 = *(FInstanceCullingOcclusionQueryRenderer **)(*(longlong *)&this->field_0x8 + 0x4d48);
    if (this_00 != (FInstanceCullingOcclusionQueryRenderer *)0x0) {
      FInstanceCullingOcclusionQueryRenderer::RenderDebug
                (this_00,param_1,(FGPUScene *)(*(longlong *)&this->field_0x8 + 0x3500),local_2c8,
                 &local_2c8->ViewRect,(FRDGTexture *)param_4->_padding_,(FRDGTexture *)0x0);
    }
  }
  if ((GRHIGlobals.SupportsDepthStencilResolve == false) &&
     (this->bIsFullDepthPrepassEnabled == false)) {
    local_288.Target = (FRDGTexture *)param_4->_padding_;
    local_288.Resolve = (FRDGTexture *)param_4->_padding_;
    AddResolveSceneDepthPass(param_1,param_3->ViewInfo,&local_288);
  }
  if ((param_6 != (FViewOcclusionQueries *)0x0) && (bVar7)) {
    pFVar22 = FRDGBuilder::AllocParameters<FMobileRenderPassParameters>(param_1);
    uVar4 = *(undefined8 *)&(param_2->View).View.field_0x8;
    local_368.ResolveTexture = (FRDGTexture *)0x0;
    local_368.DepthLoadAction = ELoad;
    local_368.StencilLoadAction = ENoAction;
    *(undefined8 *)&(pFVar22->View).View = *(undefined8 *)&(param_2->View).View;
    *(undefined8 *)&(pFVar22->View).View.field_0x8 = uVar4;
    local_368.DepthStencilAccess.Value = DepthRead;
    uVar4 = *(undefined8 *)&(param_2->View).InstancedView.field_0x8;
    *(undefined8 *)&(pFVar22->View).InstancedView = *(undefined8 *)&(param_2->View).InstancedView;
    *(undefined8 *)&(pFVar22->View).InstancedView.field_0x8 = uVar4;
    local_368.Texture = (FRDGTexture *)param_4->_padding_;
    bVar7 = FDepthStencilBinding::Validate(&local_368);
    if (!bVar7) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Validate()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                         ,0x2a4,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (pFVar22->RenderTargets).DepthStencil.Texture = local_368.Texture;
    (pFVar22->RenderTargets).DepthStencil.ResolveTexture = local_368.ResolveTexture;
    (pFVar22->RenderTargets).DepthStencil.DepthLoadAction = local_368.DepthLoadAction;
    (pFVar22->RenderTargets).DepthStencil.StencilLoadAction = local_368.StencilLoadAction;
    *(undefined2 *)&(pFVar22->RenderTargets).DepthStencil.field_0x12 = local_368._18_2_;
    (pFVar22->RenderTargets).DepthStencil.DepthStencilAccess =
         (FExclusiveDepthStencil)local_368.DepthStencilAccess.Value;
    (pFVar22->RenderTargets).MultiViewCount = (param_2->RenderTargets).MultiViewCount;
    (pFVar22->RenderTargets).NumOcclusionQueries = uVar10;
    pTVar5 = GAdrenoOcclusionUseFDM.Ref;
    bVar7 = IsInParallelRenderingThread();
    if (!bVar7) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (pTVar5->ShadowedValue[1] != 0) {
      (pFVar22->RenderTargets).ShadingRateTexture = (param_2->RenderTargets).ShadingRateTexture;
    }
    local_e0 = param_3->ViewInfo;
    uStack_d8._0_4_ = param_3->ViewIndex;
    uStack_d8._4_1_ = param_3->bIsFirstView;
    uStack_d8._5_1_ = param_3->bIsLastView;
    uStack_d8._6_2_ = *(undefined2 *)&param_3->field_0xe;
    local_e8 = this;
    FViewOcclusionQueries::FViewOcclusionQueries(&local_d0,param_6);
    pFVar16 = FRDGEventName::FRDGEventName(&local_248,1,L"VulkanAdrenoOcclusion");
    pFVar17 = FMobileRenderPassParameters::FTypeInfo::GetStructMetadata();
    FRDGUserValidation::ValidateAddPass
              (&param_1->UserValidation,pFVar22,pFVar17,pFVar16,NeverMerge|NeverCull|Raster);
    FRDGBuilder::FlushAccessModeQueue(param_1);
    pwVar18 = FRDGEventName::GetTCHAR(pFVar16);
    EVar9 = FRDGBuilder::OverridePassFlags(param_1,pwVar18,NeverMerge|NeverCull|Raster);
    pFVar19 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x228,8);
    local_2a8.Contents = (uchar *)pFVar22;
    if ((pFVar17->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLayoutInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                         ,0x17c,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_2a8.Layout.Reference = (pFVar17->Layout).Reference;
    if (local_2a8.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
      FRHIResource::AddRef((FRHIResource *)local_2a8.Layout.Reference);
    }
    local_2a8.Metadata = pFVar17;
    FRDGPass::FRDGPass(pFVar19,pFVar16,&local_2a8,EVar9,Inline);
    pFVar19->_padding_ =
         (longlong)
         &TRDGLambdaPass<FMobileRenderPassParameters,`FMobileSceneRenderer::RenderForwardSinglePass'::`20'::<lambda_2>_>
          ::_vftable_;
    pFVar19[1]._padding_ = (longlong)local_e8;
    pFVar19[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_e0;
    pFVar19[1].FullPathIfDebug.Data.ArrayNum = (undefined4)uStack_d8;
    pFVar19[1].FullPathIfDebug.Data.ArrayMax = uStack_d8._4_4_;
    FViewOcclusionQueries::FViewOcclusionQueries
              ((FViewOcclusionQueries *)&pFVar19[1].Name,&local_d0);
    pFVar19[1].BufferStates.AllocatorInstance.Data = (FBufferState *)pFVar22;
    FRDGBuilder::ClobberPassOutputs(param_1,pFVar19);
    iVar12 = (param_1->Passes).Array.ArrayNum;
    piVar25 = &(param_1->Passes).Array.ArrayMax;
    if (iVar12 == *piVar25) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                         (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar25);
    }
    (param_1->Passes).Array.ArrayNum = iVar12 + 1;
    (param_1->Passes).Array.AllocatorInstance.Data[iVar12] = pFVar19;
    (pFVar19->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
    FRDGBuilder::SetupParameterPass(param_1,pFVar19);
    if (local_248.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_248.FormattedEventName.Data.AllocatorInstance.Data);
    }
    FViewOcclusionQueries::~FViewOcclusionQueries(&local_d0);
  }
  return;
}

// RenderHZB @ 144fdd690

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMobileSceneRenderer::RenderHZB
          (FMobileSceneRenderer *this,FRDGBuilder *param_1,FRDGTexture *param_2)

{
  char cVar1;
  FRHIGPUMask FVar2;
  FSceneViewState *pFVar3;
  IPooledRenderTarget *pIVar4;
  FInstanceCullingOcclusionQueryRenderer *this_00;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  bool bVar9;
  bool bVar10;
  EShaderPlatform EVar11;
  uint uVar12;
  uint uVar13;
  FRDGScope *pFVar14;
  FRHIBreadcrumbAllocator *this_01;
  FRHIBreadcrumbNode *pFVar15;
  FViewInfo *this_02;
  ulonglong uVar16;
  FRHIComputeCommandList *this_03;
  uint local_res8 [2];
  FRDGTexture *local_res10;
  FRDGTexture *local_res18;
  FRHIComputeCommandList *local_res20;
  TRDGEventScopeGuard<FRDGScope_RHI> local_138;
  undefined1 local_128;
  TRDGEventScopeGuard<FRDGScope_RHI> local_120;
  char local_110;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<20,int>_const_*,std::tuple<int_&>_>
  local_108;
  TIntRect<int>_u_0 local_f8;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<4>_const_*,std::tuple<>_> local_e8;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  uint uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_88;
  uint uStack_84;
  undefined8 uStack_80;
  TVector4<float>_u_0 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  
  cVar1 = *(char *)((longlong)&param_1->_padding_ + 6);
  cVar8 = '\0';
  local_110 = '\0';
  local_res18 = param_2;
  if ((cVar1 != '\0') && ((cVar1 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      local_c8 = 0x54bd5260;
      uStack_c4 = 1;
      ::Desc._padding_._0_4_ = 0x54bd5260;
      ::Desc._padding_._4_4_ = uStack_cc;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_ = (longlong)u_HZB;
      ::Desc._padding_ = (longlong)u_HZB;
      ::Desc._padding_._0_4_ = 2999;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FMobileSceneRenderer::RenderHZB'::__l7::Desc::operator()<>'::__l3::<lambda_1>::
             operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_e8._Myfirst._Val = &::Desc;
    local_120.State = (FRDGScopeState *)param_1;
    pFVar14 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)pFVar14;
    local_120.Scope = pFVar14;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<4>_const_*,std::tuple<>_>_>
              (&(pFVar14->Impl).Impl,(FRDGScopeState *)param_1,&local_e8);
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(pFVar14,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(pFVar14,(FRHIComputeCommandList *)param_1->_padding_);
    }
    cVar8 = '\x01';
    local_110 = '\x01';
  }
  uVar7 = _UNK_150689538;
  uVar6 = ___xmm_000000003f8000000000000000000000;
  local_res8[0] = 0;
  if (0 < *(int *)&this->field_0x18) {
    do {
      uVar13 = local_res8[0];
      uVar12 = 0;
      if ((int)local_res8[0] < *(int *)&this->field_0x18) {
        uVar12 = ~local_res8[0] >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_02 = (FViewInfo *)((longlong)(int)uVar13 * 0x2970 + *(longlong *)&this->field_0x10);
      if ((this_02->bHasNoVisiblePrimitive == 0) &&
         ((*(char *)((longlong)&this_02->_padding_ + 7) == '\0' || ((int)this_02->_padding_ != 2))))
      {
        this_03 = (FRHIComputeCommandList *)param_1->_padding_;
        FVar2.GPUMask = *(uint *)&this_03->field_0x29c;
        local_res20 = this_03;
        FRHIComputeCommandList::SetGPUMask(this_03,(FRHIGPUMask)(uint)this_02->_padding_);
        cVar1 = *(char *)((longlong)&param_1->_padding_ + 6);
        bVar9 = false;
        local_128 = 0;
        if ((cVar1 != '\0') && ((cVar1 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            local_a8 = 0;
            uStack_a4 = 0;
            ::Desc._12_8_ = ZEXT48(uStack_ac);
            ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
            ::Desc._padding_._4_4_ = 0;
            ::Desc._padding_ = (longlong)u_BuildHZB_ViewId;
            ::Desc._padding_ = (longlong)u_BuildHZB_ViewId;
            ::Desc._padding_._0_4_ = 0xbc1;
            InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
            ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
            ::Desc.TraceGpuSpecId = 0;
            ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
            atexit(```FMobileSceneRenderer::RenderHZB'::__l18::<lambda_2>::operator()<int_&>'::__l3
                   ::<lambda_1>::operator()<int_&>'::__l2::_dynamic_atexit_destructor_for__Desc__);
            _Init_thread_footer(&::_TSS0);
          }
          local_108._padding_ = (longlong)local_res8;
          local_108._Myfirst._Val = &::Desc;
          local_138.State = (FRDGScopeState *)param_1;
          pFVar14 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                              ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
          param_1->_padding_ = (longlong)pFVar14;
          uVar16 = (ulonglong)(pFVar14->Impl).Impl.TypeIndex;
          local_138.Scope = pFVar14;
          if ((3 < uVar16) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
            ::__l2::Destructors[uVar16])(&pFVar14->Impl);
          this_01 = FRDGScopeState::GetBreadcrumbAllocator((FRDGScopeState *)param_1);
          pFVar15 = FRHIBreadcrumbAllocator::
                    AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<20,int>,int_&>
                              (this_01,&local_108);
          FRDGScope_RHI::FRDGScope_RHI
                    ((FRDGScope_RHI *)&pFVar14->Impl,(FRDGScopeState *)param_1,pFVar15);
          (pFVar14->Impl).Impl.TypeIndex = '\x02';
          if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
            FRDGScope::BeginCPU(pFVar14,(FRHIComputeCommandList *)param_1->_padding_,false);
            FRDGScope::BeginGPU(pFVar14,(FRHIComputeCommandList *)param_1->_padding_);
          }
          bVar9 = true;
          local_128 = 1;
          this_03 = local_res20;
        }
        local_res10 = (FRDGTexture *)0x0;
        local_88 = 0;
        uStack_84 = uStack_84 & 0xffffff00;
        EVar11 = FSceneView::GetShaderPlatform((FSceneView *)this_02);
        local_f8._s_0.Min.field0_0x0 =
             (TIntPoint<int>)(this_02->ViewRect).field0_0x0._s_0.Min.field0_0x0;
        local_68 = CONCAT44(uStack_84,local_88);
        local_f8._s_0.Max.field0_0x0 =
             (TIntPoint<int>)(this_02->ViewRect).field0_0x0._s_0.Max.field0_0x0;
        local_78._0_8_ = uVar6;
        local_78._8_8_ = uVar7;
        uStack_60 = uStack_80;
        BuildHZBFurthest(param_1,local_res18,(FRDGTexture *)0x0,(TIntRect<int> *)&local_f8._s_0,
                         (Type)this_02->_padding_,EVar11,L"MobileHZBFurthest",&local_res10,PF_R16F,
                         (FBuildHZBAsyncComputeParams *)0x0,(FExtraParameters *)&local_78._s_0);
        pFVar3 = this_02->ViewState;
        (this_02->HZBMipmap0Size).field0_0x0 =
             *(TIntPoint<int>_u_0 *)&(local_res10->Desc).field_0x24;
        this_02->HZB = local_res10;
        if (pFVar3 != (FSceneViewState *)0x0) {
          bVar10 = FInstanceCullingContext::IsOcclusionCullingEnabled();
          if ((bVar10) ||
             ((bVar10 = AreMobileScreenSpaceReflectionsEnabled
                                  ((FStaticShaderPlatform)*(EShaderPlatform *)&this->field_0xadc),
              bVar10 && (this->bIsFullDepthPrepassEnabled == false)))) {
            FRDGBuilder::QueueTextureExtraction
                      (param_1,local_res10,&(this_02->ViewState->PrevFrameViewInfo).HZB,None);
          }
          else {
            pIVar4 = (this_02->ViewState->PrevFrameViewInfo).HZB.Reference;
            if (pIVar4 != (IPooledRenderTarget *)0x0) {
              (this_02->ViewState->PrevFrameViewInfo).HZB.Reference = (IPooledRenderTarget *)0x0;
              (**(code **)(pIVar4->_padding_ + 0x38))();
            }
          }
        }
        if (bVar9) {
          TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_138);
        }
        this_00 = *(FInstanceCullingOcclusionQueryRenderer **)
                   (*(longlong *)&this->field_0x8 + 0x4d48);
        if ((this_00 != (FInstanceCullingOcclusionQueryRenderer *)0x0) &&
           (this_02->ViewState != (FSceneViewState *)0x0)) {
          uVar13 = FInstanceCullingOcclusionQueryRenderer::Render
                             (this_00,param_1,(FGPUScene *)(*(longlong *)&this->field_0x8 + 0x3500),
                              this_02);
          (this_02->ViewState->PrevFrameViewInfo).InstanceOcclusionQueryMask = uVar13;
        }
        FRHIComputeCommandList::SetGPUMask(this_03,FVar2);
      }
      local_res8[0] = local_res8[0] + 1;
      cVar8 = local_110;
    } while ((int)local_res8[0] < *(int *)&this->field_0x18);
  }
  if (cVar8 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_120);
  }
  return;
}

// RenderHZB @ 144fddca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */

void __thiscall
FMobileSceneRenderer::RenderHZB
          (FMobileSceneRenderer *this,FRHICommandListImmediate *param_1,
          TRefCountPtr<IPooledRenderTarget> *param_2)

{
  FRDGTexture *pFVar1;
  undefined1 auStackY_838 [32];
  FRDGEventName local_808;
  FRDGBuilder local_7e8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_838;
  local_808.EventFormat = L"";
  local_808.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_808.FormattedEventName.Data.ArrayNum = 0;
  local_808.FormattedEventName.Data.ArrayMax = 0;
  FRDGBuilder::FRDGBuilder(&local_7e8,param_1,&local_808,None,GMaxRHIShaderPlatform);
  pFVar1 = FRDGBuilder::RegisterExternalTexture(&local_7e8,param_2,L"SceneDepthTexture",None);
  RenderHZB(this,&local_7e8,pFVar1);
  FRDGBuilder::Execute(&local_7e8);
  FRDGBuilder::~FRDGBuilder(&local_7e8);
  return;
}

// RenderMaskedPrePass @ 144fdeef0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FMobileSceneRenderer::RenderMaskedPrePass
          (FMobileSceneRenderer *this,FRHICommandList *param_1,FViewInfo *param_2,
          FInstanceCullingDrawParams *param_3)

{
  int *piVar1;
  FParallelMeshDrawCommandPass *this_00;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_DepthDrawTime> FVar10;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FNameEntryId FVar11;
  FName FVar12;
  FNameEntryId FVar13;
  bool bVar14;
  LARGE_INTEGER LStackX_18;
  FInstanceCullingDrawParams *pFStackX_20;
  FStatMessage FStack_78;
  FName FStack_68;
  FRHIBreadcrumbScope FStack_58;
  TGPUStatWithDrawcallCategory<TRHIGPUStatNameProvider_Prepass> *pTStack_48;
  wchar_t *pwStack_40;
  
  if (this->bIsMaskedOnlyDepthPrepassEnabled == false) {
    return;
  }
  this_00 = (param_2->ParallelMeshDrawCommandPasses).Elements[0];
  if (this_00 == (FParallelMeshDrawCommandPass *)0x0) {
    return;
  }
  pFStackX_20 = param_3;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,"FMobileSceneRenderer_RenderPrePass");
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId692,"FMobileSceneRenderer_RenderPrePass",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DepthRendering.cpp"
               ,0x2b4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId692);
  }
  FVar13.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    FStack_58.RHICmdList = (FRHIComputeCommandList *)0x150dd85b0;
    pTStack_48 = &GPUStat_Prepass;
    FStack_58.Node._0_4_ = 0x2b5;
    pwStack_40 = L"MobileRenderPrePass";
    ::Desc._padding_._0_4_ = 0x50dd85b0;
    ::Desc._padding_._4_4_ = 1;
    ::Desc._padding_._0_4_ = 0x2b5;
    ::Desc._padding_._4_4_ = FStack_58.Node._4_4_;
    ::Desc._padding_._0_4_ = 0x54bc3fa0;
    ::Desc._padding_._4_4_ = 1;
    ::Desc._padding_._0_4_ = 0x50dd8cb8;
    ::Desc._padding_._4_4_ = 1;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
    ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    ::Desc.TraceGpuSpecId = 0;
    ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(``FMobileSceneRenderer::RenderPrePass'::__l11::<lambda_1>::operator()<>'::__l2::
           _dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar7 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
  pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
  pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
  pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
  (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  pFVar8->Data = (FRHIBreadcrumbData *)&::Desc;
  pFVar8->Allocator = pFVar7;
  pFVar8->TraceCpuSpecId = 0;
  pFVar8->TraceCpuMetadataId = 0;
  LOCK();
  UNLOCK();
  uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar8->ID = uVar5;
  pFVar8->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar8[1]._padding_ = (longlong)&::Desc;
  if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
     (bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar4)) {
    EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      aVar6 = (atomic<unsigned_int>)
              FCpuProfilerTrace::OutputEventType
                        ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                         (char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                         (uint)::Desc._padding_);
      LOCK();
      ::Desc.TraceCpuSpecId = aVar6;
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  }
  pFVar8->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&FStack_58,(FRHIComputeCommandList *)param_1,pFVar8);
  pTStack_48 = (TGPUStatWithDrawcallCategory<TRHIGPUStatNameProvider_Prepass> *)
               CONCAT71(pTStack_48._1_7_,1);
  FVar10 = StatPtr_STAT_DepthDrawTime;
  if (StatPtr_STAT_DepthDrawTime == (FThreadSafeStaticStat<FStat_STAT_DepthDrawTime>)0x0) {
    pFVar9 = ::FName::FName((FName *)&FStack_78,"STAT_DepthDrawTime");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_DepthDrawTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DepthDrawTime,*pFVar9,
                        L"Depth drawing","STATGROUP_SceneRendering","STATCAT_Advanced",
                        L"Scene Rendering",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar10;
  bVar4 = false;
  bVar3 = false;
  FStack_68.ComparisonIndex.Value = 0;
  FStack_68.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar5 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar5 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      LStackX_18.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&LStackX_18.s,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar4 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        LStackX_18.s.LowPart = FVar11.Value;
        LStackX_18.s.HighPart = uVar5;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&LStackX_18.s,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DepthRendering.cpp"
                   ,0x2b8);
        bVar4 = true;
        bVar3 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      LStackX_18.s.LowPart = FVar11.Value;
      LStackX_18.s.HighPart = uVar5;
      FStack_68 = FVar12;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar2 = true;
      FVar13.Value = FStack_68.ComparisonIndex.Value;
      goto LAB_14482dcdc;
    }
  }
  bVar2 = false;
  FVar12 = FStack_68;
LAB_14482dcdc:
  if (__CsvProfilerStat697 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("RenderPrePass");
    __CsvProfilerStat697 = true;
  }
  FCsvProfiler::BeginExclusiveStat("RenderPrePass","CSV_RenderPrePass");
  FSceneRenderer::SetStereoViewport(param_1,param_2,__real_3f800000);
  FParallelMeshDrawCommandPass::Draw(this_00,param_1,pFStackX_20);
  FCsvProfiler::EndExclusiveStat("RenderPrePass");
  if (bVar3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar2) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      FStack_78.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      FStack_78.NameAndInfo.Index.Value = FVar13.Value;
      QueryPerformanceCounter(&LStackX_18);
      FStack_78.StatData.Pad[4] = '\0';
      FStack_78.StatData.Pad[5] = '\0';
      FStack_78.StatData.Pad[6] = '\0';
      FStack_78.StatData.Pad[7] = '\0';
      FStack_78.StatData.Pad[0] = LStackX_18.s.LowPart._0_1_;
      FStack_78.StatData.Pad[1] = LStackX_18.s.LowPart._1_1_;
      FStack_78.StatData.Pad[2] = LStackX_18.s.LowPart._2_1_;
      FStack_78.StatData.Pad[3] = LStackX_18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&FStack_78);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&FStack_58);
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// RenderMobileBasePass @ 144fdef10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FMobileSceneRenderer::RenderMobileBasePass
          (FMobileSceneRenderer *this,FRHICommandList *param_1,FViewInfo *param_2,
          FInstanceCullingDrawParams *param_3,FInstanceCullingDrawParams *param_4)

{
  int *piVar1;
  FParallelMeshDrawCommandPass *pFVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  atomic<unsigned_int> aVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_BasePassDrawTime> FVar10;
  FRHIBreadcrumbAllocator *pFVar11;
  FRHIBreadcrumbNode *pFVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar13;
  FName FVar14;
  LARGE_INTEGER local_res10;
  undefined1 local_a8 [8];
  FNameEntryId FStack_a0;
  uint uStack_9c;
  TGPUStatWithDrawcallCategory<TRHIGPUStatNameProvider_Basepass> *local_98;
  wchar_t *pwStack_90;
  FName local_88;
  FMeshPassProcessorRenderState local_78;
  
  if (!__CsvProfilerStat538) {
    FCsvProfilerTrace::OutputInlineStatExclusive("RenderBasePass");
    __CsvProfilerStat538 = true;
  }
  FCsvProfiler::BeginExclusiveStat("RenderBasePass","CSV_RenderBasePass");
  FVar10 = StatPtr_STAT_BasePassDrawTime;
  if (StatPtr_STAT_BasePassDrawTime == (FThreadSafeStaticStat<FStat_STAT_BasePassDrawTime>)0x0) {
    pFVar9 = ::FName::FName((FName *)local_a8,"STAT_BasePassDrawTime");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_BasePassDrawTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BasePassDrawTime,*pFVar9,
                        L"Base pass drawing","STATGROUP_SceneRendering","STATCAT_Advanced",
                        L"Scene Rendering",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar10;
  bVar3 = false;
  bVar5 = false;
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar7 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.s.LowPart = FVar13.Value;
        local_res10.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MobileBasePassRendering.cpp"
                   ,0x21b);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10.s.LowPart = FVar13.Value;
      local_res10.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar4 = true;
      goto LAB_144fdf084;
    }
  }
  bVar4 = false;
  FVar14 = local_88;
LAB_144fdf084:
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FStack_a0.Value = 0x21d;
      local_a8 = (undefined1  [8])0x150ee9460;
      local_98 = &GPUStat_Basepass;
      pwStack_90 = L"MobileBasePass";
      ::Desc._padding_._0_4_ = 0x50ee9460;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_._0_4_ = 0x21d;
      ::Desc._padding_._4_4_ = uStack_9c;
      ::Desc._padding_ = (longlong)&GPUStat_Basepass;
      ::Desc._padding_ = (longlong)u_MobileBasePass;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(``FMobileSceneRenderer::RenderMobileBasePass'::__l10::<lambda_1>::operator()<>'::__l2::
             _dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pFVar11 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
  pFVar12 = FMemStackBase::Alloc(&pFVar11->Inner,0x50,8);
  pFVar12->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar12->Parent = FRHIBreadcrumbNode::Sentinel;
  pFVar12->ListLink = (FRHIBreadcrumbNode *)0x0;
  (pFVar12->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (pFVar12->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  pFVar12->TraceCpuSpecId = 0;
  pFVar12->TraceCpuMetadataId = 0;
  pFVar12->Data = (FRHIBreadcrumbData *)&::Desc;
  pFVar12->Allocator = pFVar11;
  LOCK();
  UNLOCK();
  uVar7 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar12->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar12->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar12->ID = uVar7;
  pFVar12->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar12[1]._padding_ = (longlong)&::Desc;
  if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
    bVar6 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
    if (bVar6) {
      EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
      if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
        aVar8 = (atomic<unsigned_int>)
                FCpuProfilerTrace::OutputEventType
                          ((wchar_t *)::Desc._padding_,
                           (char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                           (uint)::Desc._padding_);
        LOCK();
        ::Desc.TraceCpuSpecId = aVar8;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    }
  }
  pFVar12->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
  FRHIBreadcrumbScope::FRHIBreadcrumbScope
            ((FRHIBreadcrumbScope *)local_a8,(FRHIComputeCommandList *)param_1,pFVar12);
  local_98 = (TGPUStatWithDrawcallCategory<TRHIGPUStatNameProvider_Basepass> *)
             CONCAT71(local_98._1_7_,1);
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&(param_2->ViewRect).field0_0x0,
             (float)*(int *)((longlong)&(param_2->ViewRect).field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&(param_2->ViewRect).field0_0x0 + 8),
             (float)*(int *)((longlong)&(param_2->ViewRect).field0_0x0 + 0xc),__real_3f800000);
  pFVar2 = (param_2->ParallelMeshDrawCommandPasses).Elements[2];
  if (pFVar2 != (FParallelMeshDrawCommandPass *)0x0) {
    FParallelMeshDrawCommandPass::Draw(pFVar2,param_1,param_3);
  }
  pFVar2 = (param_2->ParallelMeshDrawCommandPasses).Elements[4];
  if ((pFVar2 != (FParallelMeshDrawCommandPass *)0x0) &&
     ((*(uint *)(param_2->_padding_ + 0x58) & 0x10000) != 0)) {
    FParallelMeshDrawCommandPass::Draw(pFVar2,param_1,param_4);
  }
  local_78.BlendState =
       TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  local_78.ViewUniformBuffer = (FRHIUniformBuffer *)0x0;
  local_78.NaniteUniformBuffer = (FRHIUniformBuffer *)0x0;
  local_78.InstancedViewUniformBuffer = (FRHIUniformBuffer *)0x0;
  local_78.PassUniformBuffer = (FRHIUniformBuffer *)0x0;
  local_78.DepthStencilAccess = *(Type *)(*(longlong *)&this->field_0x8 + 0x2b20);
  local_78.StencilRef = 0;
  local_78.DepthStencilState =
       TStaticStateRHI<TStaticDepthStencilState<1,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  RenderMobileEditorPrimitives(this,param_1,param_2,&local_78,param_3);
  FRHIBreadcrumbScope::~FRHIBreadcrumbScope((FRHIBreadcrumbScope *)local_a8);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      FStack_a0 = FVar14.ComparisonIndex.Value;
      uStack_9c = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res10);
      local_a8._4_4_ = 0;
      local_a8._0_4_ = local_res10.s.LowPart;
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)local_a8);
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
  FCsvProfiler::EndExclusiveStat("RenderBasePass");
  return;
}

// RenderMobileDebugPrimitives @ 144fdf430

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FMobileSceneRenderer::RenderMobileDebugPrimitives
          (FMobileSceneRenderer *this,FRHICommandList *param_1,FViewInfo *param_2)

{
  FSimpleElementCollector *this_00;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_protected:_void___cdecl_FMobileSceneRenderer::RenderMobileDebugPrimitives(FRHICommandList_&,FViewInfo_const_&)_::_2_::FStat_STAT_DebugDynamicPrimitiveDrawTime>
  FVar8;
  FRHIBreadcrumbAllocator *pFVar9;
  FRHIBreadcrumbNode *pFVar10;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FNameEntryId FVar11;
  FName FVar12;
  int *piVar13;
  LARGE_INTEGER local_res10 [2];
  FName local_res20;
  undefined1 local_98 [8];
  FNameEntryId FStack_90;
  uint uStack_8c;
  undefined8 local_88;
  wchar_t *pwStack_80;
  FMeshPassProcessorRenderState local_78;
  
  piVar13 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if (*piVar13 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_DebugDynamicPrimitiveDrawTime ==
          (FThreadSafeStaticStat<_protected:_void___cdecl_FMobileSceneRenderer::RenderMobileDebugPrimitives(FRHICommandList_&,FViewInfo_const_&)_::_2_::FStat_STAT_DebugDynamicPrimitiveDrawTime>
           )0x0) {
        pFVar7 = ::FName::FName((FName *)&local_res10[0].s,"STAT_DebugDynamicPrimitiveDrawTime");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DebugDynamicPrimitiveDrawTime,*pFVar7,
                   L"STAT_DebugDynamicPrimitiveDrawTime","STATGROUP_Quick","STATCAT_Advanced",
                   L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar8 = StatPtr_STAT_DebugDynamicPrimitiveDrawTime;
  if (StatPtr_STAT_DebugDynamicPrimitiveDrawTime ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_FMobileSceneRenderer::RenderMobileDebugPrimitives(FRHICommandList_&,FViewInfo_const_&)_::_2_::FStat_STAT_DebugDynamicPrimitiveDrawTime>
       )0x0) {
    pFVar7 = ::FName::FName(&local_res20,"STAT_DebugDynamicPrimitiveDrawTime");
    FVar8 = (FThreadSafeStaticStat<_protected:_void___cdecl_FMobileSceneRenderer::RenderMobileDebugPrimitives(FRHICommandList_&,FViewInfo_const_&)_::_2_::FStat_STAT_DebugDynamicPrimitiveDrawTime>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DebugDynamicPrimitiveDrawTime,
                         *pFVar7,L"STAT_DebugDynamicPrimitiveDrawTime","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar8;
  bVar1 = false;
  bVar3 = false;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar5 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar5 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0].s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar1 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10[0]._0_4_ = FVar11.Value;
        local_res10[0]._4_4_ = uVar5;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10[0].s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MobileBasePassRendering.cpp"
                   ,0x283);
        bVar1 = true;
        bVar3 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10[0]._0_4_ = FVar11.Value;
      local_res10[0]._4_4_ = uVar5;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar2 = true;
      goto LAB_144fdf597;
    }
  }
  bVar2 = false;
  FVar12.ComparisonIndex.Value = 0;
  FVar12.Number = 0;
LAB_144fdf597:
  if (*piVar13 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FStack_90.Value = 0x284;
      local_98 = (undefined1  [8])0x150ee9460;
      local_88 = 0;
      pwStack_80 = L"DynamicDebug";
      ::Desc._padding_._0_4_ = 0x50ee9460;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_._0_4_ = 0x284;
      ::Desc._padding_._4_4_ = uStack_8c;
      ::Desc._padding_._0_4_ = 0;
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_._0_4_ = 0x50eebc68;
      ::Desc._padding_._4_4_ = 1;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(``FMobileSceneRenderer::RenderMobileDebugPrimitives'::__l7::<lambda_1>::operator()<>'::
             __l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pFVar9 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
  pFVar10 = FMemStackBase::Alloc(&pFVar9->Inner,0x50,8);
  pFVar10->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar10->Parent = FRHIBreadcrumbNode::Sentinel;
  pFVar10->ListLink = (FRHIBreadcrumbNode *)0x0;
  (pFVar10->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (pFVar10->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  pFVar10->Data = (FRHIBreadcrumbData *)&::Desc;
  pFVar10->Allocator = pFVar9;
  pFVar10->TraceCpuSpecId = 0;
  pFVar10->TraceCpuMetadataId = 0;
  LOCK();
  UNLOCK();
  uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar10->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar10->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar10->ID = uVar5;
  pFVar10->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar10[1]._padding_ = (longlong)&::Desc;
  if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
    bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
    if (bVar4) {
      EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
      if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
        aVar6 = (atomic<unsigned_int>)
                FCpuProfilerTrace::OutputEventType
                          ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                           (char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                           (uint)::Desc._padding_);
        LOCK();
        ::Desc.TraceCpuSpecId = aVar6;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    }
  }
  pFVar10->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
  FRHIBreadcrumbScope::FRHIBreadcrumbScope
            ((FRHIBreadcrumbScope *)local_98,(FRHIComputeCommandList *)param_1,pFVar10);
  this_00 = param_2->DebugSimpleElementCollector;
  local_88 = CONCAT71(local_88._1_7_,1);
  if (((((((this_00->BatchedElements).LineVertices.ArrayNum != 0) ||
         ((this_00->BatchedElements).Points.ArrayNum != 0)) ||
        ((this_00->BatchedElements).Sprites.ArrayNum != 0)) ||
       ((((this_00->BatchedElements).MeshElements.ArrayNum != 0 ||
         ((this_00->BatchedElements).ThickLines.ArrayNum != 0)) ||
        ((0 < (this_00->BatchedElements).WireTris.ArrayNum ||
         (((this_00->TopBatchedElements).LineVertices.ArrayNum != 0 ||
          ((this_00->TopBatchedElements).Points.ArrayNum != 0)))))))) ||
      ((this_00->TopBatchedElements).Sprites.ArrayNum != 0)) ||
     ((((this_00->TopBatchedElements).MeshElements.ArrayNum != 0 ||
       ((this_00->TopBatchedElements).ThickLines.ArrayNum != 0)) ||
      (0 < (this_00->TopBatchedElements).WireTris.ArrayNum)))) {
    local_78.BlendState =
         TStaticStateRHI<TStaticBlendState<15,0,1,1,0,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI.Reference;
    local_78.DepthStencilState =
         TStaticStateRHI<TStaticDepthStencilState<1,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
         ::StaticResource.StateRHI.Reference;
    local_78.ViewUniformBuffer = (FRHIUniformBuffer *)0x0;
    local_78.InstancedViewUniformBuffer = (FRHIUniformBuffer *)0x0;
    local_78.PassUniformBuffer = (FRHIUniformBuffer *)0x0;
    local_78.NaniteUniformBuffer = (FRHIUniformBuffer *)0x0;
    local_78.DepthStencilAccess = DepthWrite_StencilWrite;
    local_78.StencilRef = 0;
    FSimpleElementCollector::DrawBatchedElements
              (this_00,param_1,&local_78,(FSceneView *)param_2,OpaqueAndMasked,SDPG_World,1);
    local_78.DepthStencilState =
         TStaticStateRHI<TStaticDepthStencilState<1,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
         ::StaticResource.StateRHI.Reference;
    local_78.StencilRef = 0;
    FSimpleElementCollector::DrawBatchedElements
              (param_2->DebugSimpleElementCollector,param_1,&local_78,(FSceneView *)param_2,
               OpaqueAndMasked,SDPG_Foreground,1);
  }
  FRHIBreadcrumbScope::~FRHIBreadcrumbScope((FRHIBreadcrumbScope *)local_98);
  if (bVar3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar2) && (FVar12 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      FStack_90 = FVar12.ComparisonIndex.Value;
      uStack_8c = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res10);
      local_98[4] = '\0';
      local_98[5] = '\0';
      local_98[6] = '\0';
      local_98[7] = '\0';
      local_98[0] = local_res10[0]._0_1_;
      local_98[1] = local_res10[0]._1_1_;
      local_98[2] = local_res10[0]._2_1_;
      local_98[3] = local_res10[0]._3_1_;
      FThreadStats::AddStatMessage(this_01,(FStatMessage *)local_98);
      piVar13 = &this_01->ScopeCount;
      *piVar13 = *piVar13 + -1;
      if (*piVar13 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// RenderMobileDebugView @ 144fdf9b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FMobileSceneRenderer::RenderMobileDebugView
          (FMobileSceneRenderer *this,FRHICommandList *param_1,FViewInfo *param_2,
          FInstanceCullingDrawParams *param_3)

{
  int *piVar1;
  FParallelMeshDrawCommandPass *this_00;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  EDebugViewShaderMode EVar5;
  uint uVar6;
  atomic<unsigned_int> aVar7;
  FRHIBreadcrumbAllocator *pFVar8;
  FRHIBreadcrumbNode *pFVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_BasePassDrawTime> FVar11;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FNameEntryId FVar12;
  FName FVar13;
  FNameEntryId FVar14;
  LARGE_INTEGER local_res8;
  FStatMessage local_78;
  FName local_68;
  FRHIBreadcrumbScope local_58;
  undefined8 local_48;
  wchar_t *pwStack_40;
  
  EVar5 = FSceneViewFamily::GetDebugViewShaderMode((FSceneViewFamily *)&this->field_0xb8);
  if (EVar5 == DVSM_None) {
    return;
  }
  if (__CsvProfilerStat2752 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("RenderDebugView");
    __CsvProfilerStat2752 = true;
  }
  FCsvProfiler::BeginExclusiveStat("RenderDebugView","CSV_RenderDebugView");
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    local_58.RHICmdList = (FRHIComputeCommandList *)0x150eecec0;
    pwStack_40 = L"MobileDebugView";
    local_58.Node._0_4_ = 0xac1;
    local_48 = 0;
    ::Desc._padding_._0_4_ = 0x50eecec0;
    ::Desc._padding_._4_4_ = 1;
    ::Desc._padding_._0_4_ = 0xac1;
    ::Desc._padding_._4_4_ = local_58.Node._4_4_;
    ::Desc._padding_ = 0;
    ::Desc._padding_ = (longlong)u_MobileDebugView;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
    ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    ::Desc.TraceGpuSpecId = 0;
    ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(``FMobileSceneRenderer::RenderMobileDebugView'::__l13::<lambda_1>::operator()<>'::__l2::
           _dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar8 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
  pFVar9 = FMemStackBase::Alloc(&pFVar8->Inner,0x50,8);
  pFVar9->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar9->Parent = FRHIBreadcrumbNode::Sentinel;
  pFVar9->ListLink = (FRHIBreadcrumbNode *)0x0;
  (pFVar9->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (pFVar9->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  pFVar9->Data = (FRHIBreadcrumbData *)&::Desc;
  pFVar9->Allocator = pFVar8;
  pFVar9->TraceCpuSpecId = 0;
  pFVar9->TraceCpuMetadataId = 0;
  LOCK();
  UNLOCK();
  uVar6 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar9->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar9->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar9->ID = uVar6;
  pFVar9->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar9[1]._padding_ = (longlong)&::Desc;
  if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
     (bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar4)) {
    EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      aVar7 = (atomic<unsigned_int>)
              FCpuProfilerTrace::OutputEventType
                        ((wchar_t *)::Desc._padding_,
                         (char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                         (uint)::Desc._padding_);
      LOCK();
      ::Desc.TraceCpuSpecId = aVar7;
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  }
  pFVar9->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_58,(FRHIComputeCommandList *)param_1,pFVar9);
  local_48 = CONCAT71(local_48._1_7_,1);
  FVar14.Value = 0;
  FVar11 = StatPtr_STAT_BasePassDrawTime;
  if (StatPtr_STAT_BasePassDrawTime == (FThreadSafeStaticStat<FStat_STAT_BasePassDrawTime>)0x0) {
    pFVar10 = ::FName::FName((FName *)&local_78,"STAT_BasePassDrawTime");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_BasePassDrawTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BasePassDrawTime,*pFVar10,
                        L"Base pass drawing","STATGROUP_SceneRendering","STATCAT_Advanced",
                        L"Scene Rendering",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar11;
  bVar4 = false;
  bVar3 = false;
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar6 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar6 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar12.Value;
        local_res8.s.HighPart = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MobileShadingRenderer.cpp"
                   ,0xac2);
        bVar4 = true;
        bVar3 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar12.Value;
      local_res8.s.HighPart = uVar6;
      local_68 = FVar13;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar2 = true;
      FVar14.Value = local_68.ComparisonIndex.Value;
      goto LAB_144fdfcab;
    }
  }
  bVar2 = false;
  FVar13 = local_68;
LAB_144fdfcab:
  DrawClearQuadMRT(param_1,true,1,&FLinearColor::Black,false,0.0,false,0);
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&(param_2->ViewRect).field0_0x0,
             (float)*(int *)((longlong)&(param_2->ViewRect).field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&(param_2->ViewRect).field0_0x0 + 8),
             (float)*(int *)((longlong)&(param_2->ViewRect).field0_0x0 + 0xc),__real_3f800000);
  this_00 = (param_2->ParallelMeshDrawCommandPasses).Elements[0x16];
  if (this_00 != (FParallelMeshDrawCommandPass *)0x0) {
    FParallelMeshDrawCommandPass::Draw(this_00,param_1,param_3);
  }
  if (bVar3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar2) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_78.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      local_78.NameAndInfo.Index.Value = FVar14.Value;
      QueryPerformanceCounter(&local_res8);
      local_78.StatData.Pad[4] = '\0';
      local_78.StatData.Pad[5] = '\0';
      local_78.StatData.Pad[6] = '\0';
      local_78.StatData.Pad[7] = '\0';
      local_78.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_78.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_78.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_78.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_78);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_58);
  FCsvProfiler::EndExclusiveStat("RenderDebugView");
  return;
}

// RenderMobileEditorPrimitives @ 144fdff20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMobileSceneRenderer::RenderMobileEditorPrimitives
          (FMobileSceneRenderer *this,FRHICommandList *param_1,FViewInfo *param_2,
          FMeshPassProcessorRenderState *param_3,FInstanceCullingDrawParams *param_4)

{
  int *piVar1;
  FGenericStaticFeatureLevel FVar2;
  longlong lVar3;
  FRHIResource *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  float fVar9;
  bool bVar10;
  uchar uVar11;
  FStaticShaderPlatform FVar12;
  EShaderPlatform EVar13;
  uint uVar14;
  atomic<unsigned_int> aVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<_protected:_void___cdecl_FMobileSceneRenderer::RenderMobileEditorPrimitives(FRHICommandList_&,FViewInfo_const_&,FMeshPassProcessorRenderState_const_&,FInstanceCullingDrawParams_const_*)_::_2_::FStat_STAT_EditorDynamicPrimitiveDrawTime>
  FVar17;
  FRHIBreadcrumbAllocator *pFVar18;
  FRHIBreadcrumbNode *pFVar19;
  IRHIComputeContext *pIVar20;
  undefined8 *puVar21;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar22;
  FRDGResource *this_02;
  FName FVar23;
  FColor_u_0 local_res10 [2];
  LARGE_INTEGER local_e8;
  FName local_e0;
  FName local_d8;
  FStatMessage local_c8;
  <lambda_2> local_b8;
  <lambda_3> local_a8;
  char *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  wchar_t *pwStack_80;
  FRHIBreadcrumbScope local_78;
  undefined1 local_68;
  FName local_60;
  FName local_58 [4];
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_EditorDynamicPrimitiveDrawTime ==
        (FThreadSafeStaticStat<_protected:_void___cdecl_FMobileSceneRenderer::RenderMobileEditorPrimitives(FRHICommandList_&,FViewInfo_const_&,FMeshPassProcessorRenderState_const_&,FInstanceCullingDrawParams_const_*)_::_2_::FStat_STAT_EditorDynamicPrimitiveDrawTime>
         )0x0) {
      pFVar16 = ::FName::FName(&local_60,"STAT_EditorDynamicPrimitiveDrawTime");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_EditorDynamicPrimitiveDrawTime,*pFVar16,
                 L"STAT_EditorDynamicPrimitiveDrawTime","STATGROUP_Quick","STATCAT_Advanced",
                 L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar17 = StatPtr_STAT_EditorDynamicPrimitiveDrawTime;
  if (StatPtr_STAT_EditorDynamicPrimitiveDrawTime ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_FMobileSceneRenderer::RenderMobileEditorPrimitives(FRHICommandList_&,FViewInfo_const_&,FMeshPassProcessorRenderState_const_&,FInstanceCullingDrawParams_const_*)_::_2_::FStat_STAT_EditorDynamicPrimitiveDrawTime>
       )0x0) {
    pFVar16 = ::FName::FName(local_58,"STAT_EditorDynamicPrimitiveDrawTime");
    FVar17 = (FThreadSafeStaticStat<_protected:_void___cdecl_FMobileSceneRenderer::RenderMobileEditorPrimitives(FRHICommandList_&,FViewInfo_const_&,FMeshPassProcessorRenderState_const_&,FInstanceCullingDrawParams_const_*)_::_2_::FStat_STAT_EditorDynamicPrimitiveDrawTime>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_EditorDynamicPrimitiveDrawTime,
                          *pFVar16,L"STAT_EditorDynamicPrimitiveDrawTime","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar23 = *(FName *)FVar17;
  bVar6 = false;
  bVar8 = false;
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  FVar22 = FVar23.ComparisonIndex.Value;
  uVar14 = FVar23.Number;
  if ((FVar22.Value != 0) || (uVar14 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_e0.ComparisonIndex.Value = FVar22.Value;
        local_e0.Number = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_e0,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MobileBasePassRendering.cpp"
                   ,0x236);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_e8.s.LowPart = FVar22.Value;
      local_e8.s.HighPart = uVar14;
      FThreadStats::AddMessage(FVar23,CycleScopeStart);
      bVar7 = true;
      goto LAB_144fe009f;
    }
  }
  bVar7 = false;
  FVar23 = local_d8;
LAB_144fe009f:
  if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    uStack_90 = 0x237;
    local_98 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MobileBasePassRendering.cpp"
    ;
    local_88 = 0;
    pwStack_80 = L"DynamicEd";
    ::Desc._padding_._0_4_ = 0x50ee9460;
    ::Desc._padding_._4_4_ = 1;
    ::Desc._padding_._0_4_ = 0x237;
    ::Desc._padding_._4_4_ = uStack_8c;
    ::Desc._padding_._0_4_ = 0;
    ::Desc._padding_._4_4_ = 0;
    ::Desc._padding_._0_4_ = 0x50eebbb8;
    ::Desc._padding_._4_4_ = 1;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
    ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    ::Desc.TraceGpuSpecId = 0;
    ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(``FMobileSceneRenderer::RenderMobileEditorPrimitives'::__l7::<lambda_1>::operator()<>'::
           __l2::_dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar18 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
  pFVar19 = FMemStackBase::Alloc(&pFVar18->Inner,0x50,8);
  pFVar19->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar19->Parent = FRHIBreadcrumbNode::Sentinel;
  pFVar19->ListLink = (FRHIBreadcrumbNode *)0x0;
  (pFVar19->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (pFVar19->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  pFVar19->Data = (FRHIBreadcrumbData *)&::Desc;
  pFVar19->Allocator = pFVar18;
  pFVar19->TraceCpuSpecId = 0;
  pFVar19->TraceCpuMetadataId = 0;
  LOCK();
  UNLOCK();
  uVar14 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar19->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar19->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar19->ID = uVar14;
  pFVar19->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar19[1]._padding_ = (longlong)&::Desc;
  if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
     (bVar10 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar10)) {
    EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      aVar15 = (atomic<unsigned_int>)
               FCpuProfilerTrace::OutputEventType
                         ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                          (char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                          (uint)::Desc._padding_);
      LOCK();
      ::Desc.TraceCpuSpecId = aVar15;
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  }
  pFVar19->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_78,(FRHIComputeCommandList *)param_1,pFVar19);
  local_68 = 1;
  FSimpleElementCollector::DrawBatchedElements
            (param_2->SimpleElementCollector,param_1,param_3,(FSceneView *)param_2,OpaqueAndMasked,
             SDPG_World,1);
  FSimpleElementCollector::DrawBatchedElements
            (param_2->SimpleElementCollector,param_1,param_3,(FSceneView *)param_2,OpaqueAndMasked,
             SDPG_Foreground,1);
  if ((*(uint *)(param_2->_padding_ + 0x4c) & 0x800) == 0) {
    local_b8.View = param_2;
    local_b8.DrawRenderState = param_3;
    DrawDynamicMeshPass<_FMobileSceneRenderer::RenderMobileEditorPrimitives_::__l10::<lambda_2>_>
              ((FSceneView *)param_2,param_1,&local_b8,false);
    fVar9 = __real_3f800000;
    FBatchedElements::Draw
              (param_2->BatchedViewElements,param_1,param_3,*(Type *)&this->field_0xad8,
               (FSceneView *)param_2,false,__real_3f800000,All,1);
    local_a8.View = param_2;
    local_a8.DrawRenderState = param_3;
    DrawDynamicMeshPass<_FMobileSceneRenderer::RenderMobileEditorPrimitives_::__l10::<lambda_3>_>
              ((FSceneView *)param_2,param_1,&local_a8,false);
    FVar2.FeatureLevel = *(Type *)&this->field_0xad8;
    FVar12.Platform = FSceneView::GetShaderPlatform((FSceneView *)param_2);
    bVar10 = UseGPUScene(FVar12,FVar2);
    if (bVar10) {
      FVar12.Platform = FSceneView::GetShaderPlatform((FSceneView *)param_2);
      bVar10 = PlatformGPUSceneUsesUniformBufferView(FVar12);
      if ((!bVar10) ||
         (this_02 = *(FRDGResource **)&param_4->BatchedPrimitive, this_02 == (FRDGResource *)0x0)) {
        this_02 = *(FRDGResource **)&param_4->InstanceCulling;
      }
      FRDGResource::ValidateRHIAccess(this_02);
      pFVar4 = this_02->ResourceRHI;
      if ((pFVar4 == (FRHIResource *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InstanceCullingBufferRHI",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MobileBasePassRendering.cpp"
                              ,0x275,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      EVar13 = FSceneView::GetShaderPlatform((FSceneView *)param_2);
      uVar11 = FInstanceCullingContext::GetStaticUniformBufferSlot(EVar13);
      if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
        puVar21 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
        *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
        **(undefined8 **)&param_1->field_0x30 = puVar21;
        *(undefined8 **)&param_1->field_0x30 = puVar21 + 1;
        puVar21[1] = 0;
        *puVar21 = &___7FRHICommandSetStaticUniformBuffer__6B_;
        puVar21[2] = pFVar4;
        *(uchar *)(puVar21 + 3) = uVar11;
      }
      else {
        pIVar20 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_1);
        (**(code **)(pIVar20->_padding_ + 0xb8))(pIVar20,uVar11,pFVar4);
      }
    }
    FBatchedElements::Draw
              (param_2->TopBatchedViewElements,param_1,param_3,*(Type *)&this->field_0xad8,
               (FSceneView *)param_2,false,fVar9,All,1);
  }
  FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_78);
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar23 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_c8.NameAndInfo.Index = FVar23.ComparisonIndex.Value;
      local_c8.NameAndInfo.Number = FVar23.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_e8);
      local_c8.StatData.Pad[4] = '\0';
      local_c8.StatData.Pad[5] = '\0';
      local_c8.StatData.Pad[6] = '\0';
      local_c8.StatData.Pad[7] = '\0';
      local_c8.StatData.Pad[0] = local_e8.s.LowPart._0_1_;
      local_c8.StatData.Pad[1] = local_e8.s.LowPart._1_1_;
      local_c8.StatData.Pad[2] = local_e8.s.LowPart._2_1_;
      local_c8.StatData.Pad[3] = local_e8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_c8);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// RenderMobileLocalLightsBuffer @ 144fe0630

/* WARNING: Removing unreachable block (ram,0x000144fe0d99) */
/* WARNING: Removing unreachable block (ram,0x000144fe0da8) */
/* WARNING: Removing unreachable block (ram,0x000144fe1479) */
/* WARNING: Removing unreachable block (ram,0x000144fe1488) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMobileSceneRenderer::RenderMobileLocalLightsBuffer
          (FMobileSceneRenderer *this,FRDGBuilder *param_1,FSceneTextures *param_2,
          FSortedLightSetSceneInfo *param_3)

{
  FLocalLightBufferPrepassParameters *pFVar1;
  FSortedLightSceneInfo *pFVar2;
  char cVar3;
  EUniformBufferBindingFlags EVar4;
  FStaticShaderPlatform FVar5;
  FForwardLightUniformParameters *pFVar6;
  TRDGUniformBuffer<FForwardLightUniformParameters> *pTVar7;
  FGlobalShaderMap *pFVar8;
  FRDGTexture *pFVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  TIntPoint<int>_u_0 TVar14;
  bool bVar15;
  FViewInfo *pFVar16;
  FShader *pFVar17;
  FShaderMapBase *pFVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  FRDGScope *this_00;
  FName *pFVar27;
  FThreadSafeStaticStat<_protected:_void___cdecl_FMobileSceneRenderer::RenderMobileLocalLightsBuffer(FRDGBuilder_&,FSceneTextures_&,FSortedLightSetSceneInfo_const_&)_::_2_::FStat_STAT_RenderMobileLocalLightsBuffer>
  FVar28;
  FRDGBuffer *pFVar29;
  FRDGBufferUAV *pFVar30;
  undefined8 *puVar31;
  FShaderParametersMetadata *pFVar32;
  FGlobalShaderType *pFVar33;
  FShaderType *pFVar34;
  FName FVar35;
  FRDGEventName *pFVar36;
  FSceneTextureShaderParameters *pFVar37;
  IConsoleManager *pIVar38;
  int *piVar39;
  FSortedLightSceneInfo *pFVar40;
  ulonglong uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  FExclusiveDepthStencil FVar47;
  bool local_347;
  bool local_346;
  undefined1 local_345;
  undefined1 local_344;
  undefined1 local_343 [3];
  int local_340;
  FName local_338;
  uint local_330;
  FViewInfo *local_328;
  undefined8 *local_320;
  undefined8 *local_318;
  FColor_u_0 local_310 [2];
  FName local_308;
  int local_300;
  int iStack_2fc;
  FName local_2f8;
  FRDGBufferSRVDesc local_2e8;
  FRenderTargetBinding local_2c8;
  FName local_2b0;
  TIntVector3<int>_u_0 local_298;
  FRenderTargetBinding local_288;
  FDepthStencilBinding local_270;
  FDepthStencilBinding local_258;
  FRDGBufferUAVDesc local_240;
  FRDGBufferSRV *local_230;
  TRDGEventScopeGuard<FRDGScope_RHI> local_228;
  char local_218;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_210;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_200;
  longlong local_1e8;
  undefined1 uStack_1e0;
  undefined7 uStack_1df;
  TRDGUniformBuffer<FForwardLightUniformParameters> *local_1d8;
  EUniformBufferBindingFlags EStack_1d0;
  undefined7 uStack_1cf;
  TRDGUniformBuffer<FForwardLightUniformParameters> *local_1c8;
  EUniformBufferBindingFlags EStack_1c0;
  undefined7 uStack_1bf;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_1b8;
  longlong local_1a8;
  undefined1 uStack_1a0;
  undefined7 uStack_19f;
  <lambda_2> local_198;
  FString local_150;
  TShaderRefBase<FLocalLightBufferCS,FShaderMapPointerTable> local_138;
  FString local_128;
  FName local_118;
  FName local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [8];
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<30>_const_*,std::tuple<>_> local_f0;
  FRDGBufferDesc local_e0;
  FString local_c8;
  uint uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  FRDGEventName local_98;
  FRDGEventName local_80;
  FSceneTextureShaderParameters local_68;
  
  FVar5.Platform = *(EShaderPlatform *)&this->field_0xadc;
  local_328 = (FViewInfo *)((ulonglong)local_328 & 0xffffffff00000000);
  if ((FReadOnlyCVARCache::bMobileDeferredShadingValue) && (FReadOnlyCVARCache::bMobileHDR)) {
    return;
  }
  bVar20 = IsMobilePlatform(FVar5);
  if (!bVar20) {
    return;
  }
  bVar20 = MobileLocalLightsBufferEnabled(FVar5);
  if (!bVar20) {
    return;
  }
  bVar20 = MobileUsesFullDepthPrepass(FVar5);
  if (!bVar20) {
    return;
  }
  if ((FReadOnlyCVARCache::bMobileDeferredShadingValue != false) &&
     (FReadOnlyCVARCache::bMobileHDR != false)) {
    return;
  }
  cVar3 = *(char *)((longlong)&param_1->_padding_ + 6);
  uVar41 = (ulonglong)_tls_index;
  local_218 = '\0';
  if ((cVar3 != '\0') && ((cVar3 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar41 * 8) + 0x9d4c) <
         ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      local_a8 = 0;
      uStack_a4 = 0;
      ::Desc._12_8_ = ZEXT48(uStack_ac);
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_ = (longlong)u_RenderMobileLoc;
      ::Desc._padding_ = (longlong)u_RenderMobileLoc;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._0_4_ = 0xd4;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FMobileSceneRenderer::RenderMobileLocalLightsBuffer'::__l10::Desc::operator()<>'::
             __l3::<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_f0._Myfirst._Val = &::Desc;
    local_228.State = (FRDGScopeState *)param_1;
    this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)this_00;
    local_228.Scope = this_00;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<30>_const_*,std::tuple<>_>_>
              (&(this_00->Impl).Impl,(FRDGScopeState *)param_1,&local_f0);
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)param_1->_padding_);
    }
    local_218 = '\x01';
  }
  piVar39 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar41 * 8) + 0x9d4c);
  if ((*piVar39 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_RenderMobileLocalLightsBuffer ==
        (FThreadSafeStaticStat<_protected:_void___cdecl_FMobileSceneRenderer::RenderMobileLocalLightsBuffer(FRDGBuilder_&,FSceneTextures_&,FSortedLightSetSceneInfo_const_&)_::_2_::FStat_STAT_RenderMobileLocalLightsBuffer>
         )0x0) {
      pFVar27 = ::FName::FName(&local_110,"STAT_RenderMobileLocalLightsBuffer");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RenderMobileLocalLightsBuffer,*pFVar27,
                 L"STAT_RenderMobileLocalLightsBuffer","STATGROUP_Quick","STATCAT_Advanced",L"Quick"
                 ,true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar28 = StatPtr_STAT_RenderMobileLocalLightsBuffer;
  if (StatPtr_STAT_RenderMobileLocalLightsBuffer ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_FMobileSceneRenderer::RenderMobileLocalLightsBuffer(FRDGBuilder_&,FSceneTextures_&,FSortedLightSetSceneInfo_const_&)_::_2_::FStat_STAT_RenderMobileLocalLightsBuffer>
       )0x0) {
    pFVar27 = ::FName::FName(&local_118,"STAT_RenderMobileLocalLightsBuffer");
    FVar28 = (FThreadSafeStaticStat<_protected:_void___cdecl_FMobileSceneRenderer::RenderMobileLocalLightsBuffer(FRDGBuilder_&,FSceneTextures_&,FSortedLightSetSceneInfo_const_&)_::_2_::FStat_STAT_RenderMobileLocalLightsBuffer>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RenderMobileLocalLightsBuffer,
                          *pFVar27,L"STAT_RenderMobileLocalLightsBuffer","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar35 = *(FName *)FVar28;
  bVar20 = false;
  bVar15 = false;
  local_2b0.ComparisonIndex.Value = 0;
  local_2b0.Number = 0;
  bVar19 = false;
  bVar21 = false;
  if ((FVar35.ComparisonIndex.Value.Value != 0) || (FVar35.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_310[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_310[0]._s_0,(char *)*(FName *)((longlong)FVar28 + 0x10));
      bVar20 = false;
      bVar15 = true;
      bVar19 = false;
      bVar21 = true;
      if (-1 < CpuChannel->Enabled) {
        local_308.ComparisonIndex.Value = FVar35.ComparisonIndex.Value.Value;
        local_308.Number = FVar35.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_308,(wchar_t *)*(FName *)((longlong)FVar28 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MobileLocalLightsBuffer.cpp"
                   ,0xd5);
        bVar20 = true;
        bVar15 = true;
        bVar19 = true;
        bVar21 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_338 = FVar35;
      local_2f8 = FVar35;
      FThreadStats::AddMessage(FVar35,CycleScopeStart);
      bVar19 = true;
      goto LAB_144fe08fc;
    }
  }
  bVar15 = bVar21;
  bVar20 = bVar19;
  bVar19 = false;
  local_2f8 = local_2b0;
  FVar35 = local_2b0;
LAB_144fe08fc:
  if ((*piVar39 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    pIVar38 = IConsoleManager::Get();
    LightGridPixelSizeCVar =
         (IConsoleVariable *)
         (**(code **)((longlong)*pIVar38 + 0xc0))(pIVar38,L"r.Forward.LightGridPixelSize");
    _Init_thread_footer(&::_TSS1);
  }
  if ((LightGridPixelSizeCVar == (IConsoleVariable *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("LightGridPixelSizeCVar != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MobileLocalLightsBuffer.cpp"
                          ,0xd8,L""), bVar21)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  local_340 = (**(code **)(*(longlong *)LightGridPixelSizeCVar + 200))();
  local_330 = 0;
  if (0 < *(int *)&this->field_0x18) {
    local_338.ComparisonIndex.Value = 0;
    local_338.Number = 0;
    do {
      FVar35 = local_338;
      uVar23 = 0;
      if ((int)local_330 < *(int *)&this->field_0x18) {
        uVar23 = ~local_330 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      local_328 = (FViewInfo *)(*(longlong *)&this->field_0x10 + (longlong)FVar35);
      pFVar6 = (local_328->ForwardLightingResources).ForwardLightUniformParameters;
      if ((pFVar6 == (FForwardLightUniformParameters *)0x0) || (pFVar6->NumLocalLights == 0)) {
        bVar21 = true;
      }
      else {
        bVar21 = false;
      }
      if ((local_328->bHasNoVisiblePrimitive == 0) &&
         (((*(char *)((longlong)&local_328->_padding_ + 7) == '\0' ||
           ((int)local_328->_padding_ != 2)) && (!bVar21)))) {
        local_2e8._padding_._0_4_ = 0x4109;
        local_2e8._padding_._0_4_ = 4;
        local_2e8._padding_ = 0;
        iVar24 = ((*(int *)((longlong)&(local_328->ViewRect).field0_0x0 + 8) -
                  *(int *)&(local_328->ViewRect).field0_0x0) + -1 + local_340) / local_340;
        local_e0.Metadata = (FShaderParametersMetadata *)0x0;
        iVar25 = ((*(int *)((longlong)&(local_328->ViewRect).field0_0x0 + 0xc) -
                  *(int *)((longlong)&(local_328->ViewRect).field0_0x0 + 4)) + -1 + local_340) /
                 local_340;
        local_2e8._padding_._4_4_ = iVar25 * iVar24 * 2;
        local_e0.NumElements = local_2e8._padding_._4_4_;
        local_e0.BytesPerElement = 4;
        local_e0._12_4_ = local_2e8._padding_._4_4_;
        local_e0.Usage = VertexBuffer|ShaderResource|UnorderedAccess|Static;
        local_300 = iVar24;
        iStack_2fc = iVar25;
        pFVar29 = FRDGBuilder::CreateBuffer(param_1,&local_e0,L"TileInfoBuffer",None);
        local_240._padding_._0_2_ = 0x1c;
        local_240._padding_._2_1_ = 0;
        local_240.Buffer = pFVar29;
        pFVar30 = FRDGBuilder::CreateUAV(param_1,&local_240,None);
        local_2e8._padding_._0_4_ = CONCAT31(local_2e8._padding_._1_3_,0x1c);
        local_2e8._padding_._4_4_ = 0;
        local_2e8._padding_._0_4_ = 0xffffffff;
        local_2e8._padding_ = 0;
        local_2e8.Buffer = pFVar29;
        local_230 = FRDGBuilder::CreateSRV(param_1,&local_2e8);
        puVar31 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x40,0x10);
        if (puVar31 == (undefined8 *)0x0) {
          puVar31 = (undefined8 *)0x0;
          bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Object",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                              ,0x61,L"");
          if (bVar21) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        else {
          *(undefined1 *)(puVar31 + 5) = 1;
          *puVar31 = &___7__TObject_VFParameters_FLocalLightBufferCS___FRDGAllocator__6B_;
          puVar31[2] = 0;
          puVar31[4] = 0;
        }
        local_320 = puVar31;
        if ((((undefined8 **)param_1->_padding_ <= &local_320) &&
            (&local_320 <
             (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar21)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar26 = (int)param_1->_padding_;
        piVar39 = (int *)((longlong)&param_1->_padding_ + 4);
        if (iVar26 == *piVar39) {
          iVar26 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)&param_1->_padding_,piVar39);
        }
        pFVar16 = local_328;
        *(int *)&param_1->_padding_ = iVar26 + 1;
        *(undefined8 **)(param_1->_padding_ + (longlong)iVar26 * 8) = local_320;
        ((FParameters *)(puVar31 + 2))->RWTileInfo = pFVar30;
        pTVar7 = (local_328->ForwardLightingResources).ForwardLightUniformBuffer;
        pFVar32 = FForwardLightUniformParameters::GetStructMetadata();
        TVar14._s_0.Y = iStack_2fc;
        TVar14._s_0.X = local_300;
        EVar4 = pFVar32->BindingFlags;
        *(TIntPoint<int>_u_0 *)(puVar31 + 6) = TVar14;
        EStack_1c0 = Static;
        if (EVar4 != StaticAndShader) {
          EStack_1c0 = EVar4;
        }
        puVar31[4] = pTVar7;
        puVar31[5] = CONCAT71(uStack_1bf,EStack_1c0);
        pFVar8 = pFVar16->ShaderMap;
        local_1c8 = pTVar7;
        pFVar33 = FLocalLightBufferCS::GetStaticType();
        if (*(int *)&pFVar33->field_0x50 != 1) {
          local_345 = 0;
          `FGlobalShaderMap::GetShader<FLocalLightBufferCS>'::__l2::<lambda_1>::operator()
                    (&local_345);
        }
        pFVar34 = (FShaderType *)FLocalLightBufferCS::GetStaticType();
        FGlobalShaderMap::GetShader(pFVar8,&local_1b8,pFVar34,0);
        if (local_1b8.ShaderContent == (FShader *)0x0) {
          FVar35 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_100);
          ::FName::ToString((FName *)FVar35,&local_150);
          FLocalLightBufferCS::GetStaticType();
          bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Shader.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                              ,0xc0,L"Failed to find shader type %s in Platform %s");
          if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_150.Data.AllocatorInstance.Data);
          }
          if (bVar21) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        FLocalLightBufferCS::GetStaticType();
        local_138.ShaderContent = (FLocalLightBufferCS *)local_1b8.ShaderContent;
        local_138.ShaderMap = local_1b8.ShaderMap;
        pFVar36 = FRDGEventName::FRDGEventName(&local_98,1,L"RenderMobileLocalLights_TiledInfoCS");
        pFVar32 = FLocalLightBufferCS::FParameters::FTypeInfo::GetStructMetadata();
        local_298._s_0.Y = 1;
        local_298._s_0.Z = 1;
        local_298._s_0.X = iVar25 * iVar24 + 7U >> 3;
        FComputeShaderUtils::AddPass<FLocalLightBufferCS>
                  (param_1,pFVar36,Compute,&local_138,pFVar32,(FParameters *)(puVar31 + 2),
                   (TIntVector3<int> *)&local_298._s_0);
        if (local_98.FormattedEventName.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.FormattedEventName.Data.AllocatorInstance.Data);
        }
        bVar21 = false;
        local_347 = false;
        iVar24 = (param_3->SortedLights).ArrayNum;
        pFVar40 = (param_3->SortedLights).AllocatorInstance.Data;
        pFVar2 = pFVar40 + iVar24;
        while( true ) {
          if ((param_3->SortedLights).ArrayNum != iVar24) {
            local_344 = 0;
            `TCheckedPointerIterator<FSortedLightSceneInfo_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_344);
          }
          if (pFVar40 == pFVar2) goto LAB_144fe0e0f;
          if (((pFVar40->SortKey).Packed & 8) != 0 && ((pFVar40->SortKey).Packed & 3) != 0) break;
          pFVar40 = pFVar40 + 1;
        }
        bVar21 = true;
        local_347 = true;
LAB_144fe0e0f:
        puVar31 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x170,0x10);
        if (puVar31 == (undefined8 *)0x0) {
          puVar31 = (undefined8 *)0x0;
          bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Object",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                              ,0x61,L"");
          if (bVar22) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        else {
          *(undefined1 *)(puVar31 + 3) = 1;
          *puVar31 = &___7__TObject_VFLocalLightBufferPrepassParameters___FRDGAllocator__6B_;
          *(undefined1 *)(puVar31 + 7) = 1;
          puVar31[2] = 0;
          puVar31[4] = 0;
          puVar31[6] = 0;
          puVar31[8] = 0;
          puVar31[10] = 0;
          puVar31[0xc] = 0;
          *(undefined1 *)(puVar31 + 9) = 1;
          *(undefined1 *)(puVar31 + 0xb) = 1;
          *(undefined1 *)(puVar31 + 0xd) = 1;
          FRenderTargetBindingSlots::FRenderTargetBindingSlots
                    ((FRenderTargetBindingSlots *)(puVar31 + 0xe));
        }
        local_318 = puVar31;
        if ((((undefined8 **)param_1->_padding_ <= &local_318) &&
            (&local_318 <
             (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar22)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar24 = (int)param_1->_padding_;
        if (iVar24 == *(int *)((longlong)&param_1->_padding_ + 4)) {
          iVar24 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)&param_1->_padding_,
                              (int *)((longlong)&param_1->_padding_ + 4));
        }
        *(int *)&param_1->_padding_ = iVar24 + 1;
        pFVar1 = (FLocalLightBufferPrepassParameters *)(puVar31 + 2);
        local_2c8.ResolveTexture = (FRDGTexture *)0x0;
        local_2c8.LoadAction = EClear;
        local_2c8.MipIndex = '\0';
        local_2c8.ArraySlice = -1;
        *(undefined8 **)(param_1->_padding_ + (longlong)iVar24 * 8) = local_318;
        local_2c8.Texture = param_2->MobileLocalLightTextureA;
        bVar22 = FRenderTargetBinding::Validate(&local_2c8);
        if ((!bVar22) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("Validate()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                                ,0x216,L""), bVar22)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        local_288.ResolveTexture = (FRDGTexture *)0x0;
        puVar31[0xe] = local_2c8.Texture;
        puVar31[0xf] = local_2c8.ResolveTexture;
        local_288.LoadAction = EClear;
        local_288.MipIndex = '\0';
        local_288.ArraySlice = -1;
        puVar31[0x10] = CONCAT44(local_2c8._20_4_,local_2c8._16_4_);
        local_288.Texture = param_2->MobileLocalLightTextureB;
        bVar22 = FRenderTargetBinding::Validate(&local_288);
        if ((!bVar22) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("Validate()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                                ,0x216,L""), bVar22)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        local_346 = false;
        puVar31[0x11] = local_288.Texture;
        puVar31[0x12] = local_288.ResolveTexture;
        puVar31[0x13] = CONCAT44(local_288._20_4_,local_288._16_4_);
        if (bVar21) {
          bVar21 = MobileRequiresSceneDepthAux
                             ((FStaticShaderPlatform)*(EShaderPlatform *)&this->field_0xadc);
          pFVar9 = (FRDGTexture *)param_2->_padding_;
          if (bVar21) {
            local_270.ResolveTexture = (FRDGTexture *)0x0;
            local_270.DepthLoadAction = EClear;
            local_270.StencilLoadAction = EClear;
            local_270.DepthStencilAccess.Value = DepthWrite_StencilWrite;
            local_270.Texture = pFVar9;
            bVar21 = FDepthStencilBinding::Validate(&local_270);
            if ((!bVar21) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Validate()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                                    ,0x289,L""), bVar21)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            local_346 = true;
            uVar46 = CONCAT22(local_270._18_2_,local_270._16_2_);
            uVar42 = local_270.Texture._0_4_;
            uVar43 = local_270.Texture._4_4_;
            uVar44 = local_270.ResolveTexture._0_4_;
            uVar45 = local_270.ResolveTexture._4_4_;
            FVar47.Value = local_270.DepthStencilAccess.Value;
          }
          else {
            local_258.ResolveTexture = (FRDGTexture *)0x0;
            local_258.DepthLoadAction = ((*(uint *)&pFVar9->Desc >> 0xc & 1) != 0) + ELoad;
            local_258.DepthStencilAccess.Value = DepthRead_StencilWrite;
            local_258.Texture = pFVar9;
            local_258.StencilLoadAction = local_258.DepthLoadAction;
            bVar21 = FDepthStencilBinding::Validate(&local_258);
            if ((!bVar21) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Validate()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                                    ,0x289,L""), bVar21)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar46 = CONCAT22(local_258._18_2_,
                              CONCAT11(local_258.StencilLoadAction,local_258.DepthLoadAction));
            uVar42 = local_258.Texture._0_4_;
            uVar43 = local_258.Texture._4_4_;
            uVar44 = local_258.ResolveTexture._0_4_;
            uVar45 = local_258.ResolveTexture._4_4_;
            FVar47.Value = local_258.DepthStencilAccess.Value;
          }
          *(undefined4 *)(puVar31 + 0x26) = uVar42;
          *(undefined4 *)((longlong)puVar31 + 0x134) = uVar43;
          *(undefined4 *)(puVar31 + 0x27) = uVar44;
          *(undefined4 *)((longlong)puVar31 + 0x13c) = uVar45;
          puVar31[0x28] = CONCAT44(FVar47.Value,uVar46);
        }
        pFVar37 = FMinimalSceneTextures::GetSceneTextureShaderParameters
                            ((FMinimalSceneTextures *)param_2,&local_68,(Type)pFVar16->_padding_);
        uStack_1a0 = 1;
        uVar11 = *(undefined8 *)&(pFVar37->SceneTextures).field_0x8;
        uVar12 = *(undefined8 *)&pFVar37->MobileSceneTextures;
        uVar13 = *(undefined8 *)&(pFVar37->MobileSceneTextures).field_0x8;
        puVar31[10] = *(undefined8 *)&pFVar37->SceneTextures;
        puVar31[0xb] = uVar11;
        puVar31[0xc] = uVar12;
        puVar31[0xd] = uVar13;
        local_1a8 = pFVar16->_padding_;
        pFVar32 = FViewUniformShaderParameters::GetStructMetadata();
        if (((pFVar32->BindingFlags & Shader) == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("EnumHasAllFlags(StructMetadata->GetBindingFlags(), GetBindingFlags())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                                ,0xf5,
                                L"Uniform buffer binding flags don\'t match those supported by the uniform buffer layout \'%s."
                               ), bVar21)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        puVar31[4] = local_230;
        *(int *)(puVar31 + 5) = local_340;
        *(longlong *)&(pFVar1->VS).View = local_1a8;
        puVar31[3] = CONCAT71(uStack_19f,uStack_1a0);
        pTVar7 = (pFVar16->ForwardLightingResources).ForwardLightUniformBuffer;
        pFVar32 = FForwardLightUniformParameters::GetStructMetadata();
        uStack_1e0 = 1;
        EStack_1d0 = Static;
        if (pFVar32->BindingFlags != StaticAndShader) {
          EStack_1d0 = pFVar32->BindingFlags;
        }
        puVar31[8] = pTVar7;
        puVar31[9] = CONCAT71(uStack_1cf,EStack_1d0);
        local_1e8 = pFVar16->_padding_;
        local_1d8 = pTVar7;
        pFVar32 = FViewUniformShaderParameters::GetStructMetadata();
        if (((pFVar32->BindingFlags & Shader) == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("EnumHasAllFlags(StructMetadata->GetBindingFlags(), GetBindingFlags())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                                ,0xf5,
                                L"Uniform buffer binding flags don\'t match those supported by the uniform buffer layout \'%s."
                               ), bVar21)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        puVar31[6] = local_1e8;
        puVar31[7] = CONCAT71(uStack_1df,uStack_1e0);
        pFVar8 = pFVar16->ShaderMap;
        pFVar33 = FLocalLightBufferVS::GetStaticType();
        if (*(int *)&pFVar33->field_0x50 != 1) {
          local_343[0] = 0;
          `FGlobalShaderMap::GetShader<FLocalLightBufferVS>'::__l2::<lambda_1>::operator()
                    (local_343);
        }
        pFVar34 = (FShaderType *)FLocalLightBufferVS::GetStaticType();
        FGlobalShaderMap::GetShader(pFVar8,&local_200,pFVar34,0);
        if (local_200.ShaderContent == (FShader *)0x0) {
          FVar35 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_f8);
          ::FName::ToString((FName *)FVar35,&local_128);
          FLocalLightBufferVS::GetStaticType();
          bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Shader.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                              ,0xc0,L"Failed to find shader type %s in Platform %s");
          if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Data.AllocatorInstance.Data);
          }
          if (bVar21) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        FLocalLightBufferVS::GetStaticType();
        pFVar18 = local_200.ShaderMap;
        pFVar17 = local_200.ShaderContent;
        pFVar8 = local_328->ShaderMap;
        pFVar34 = (FShaderType *)FLocalLightBufferPS::GetStaticType();
        FGlobalShaderMap::GetShader(pFVar8,&local_210,pFVar34,(uint)local_347);
        if (local_210.ShaderContent == (FShader *)0x0) {
          FVar35 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_108);
          ::FName::ToString((FName *)FVar35,&local_c8);
          FLocalLightBufferPS::GetStaticType();
          bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Shader.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                              ,0xc0,L"Failed to find shader type %s in Platform %s");
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
          if (bVar21) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        FLocalLightBufferPS::GetStaticType();
        local_198.PixelShader.ShaderContent = (FLocalLightBufferPS *)local_210.ShaderContent;
        local_198.PixelShader.ShaderMap = local_210.ShaderMap;
        local_198.View = local_328;
        local_198.bRenderLightFunctions = local_347;
        local_198.bRestoreDepthBuffer = local_346;
        local_198.VertexShader.ShaderContent = (FLocalLightBufferVS *)pFVar17;
        local_198.VertexShader.ShaderMap = pFVar18;
        local_198.PassParameters = pFVar1;
        local_198.GroupSize.field0_0x0 = TVar14;
        local_198.SortedLights = param_3;
        pFVar36 = FRDGEventName::FRDGEventName(&local_80,1,L"RenderMobileLocalLightsBuffer Prepass")
        ;
        FRDGBuilder::
        AddPass<FLocalLightBufferPrepassParameters,_FMobileSceneRenderer::RenderMobileLocalLightsBuffer_::__l35::<lambda_2>_>
                  (param_1,pFVar36,pFVar1,Raster,&local_198);
        if (local_80.FormattedEventName.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.FormattedEventName.Data.AllocatorInstance.Data);
        }
      }
      local_338 = (FName)((longlong)local_338 + 0x2970);
      local_330 = local_330 + 1;
      FVar35 = local_2f8;
    } while ((int)local_330 < *(int *)&this->field_0x18);
  }
  if (bVar15) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar19) {
    FThreadStats::AddMessage(FVar35,CycleScopeEnd);
  }
  if (local_218 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_228);
  }
  return;
}

// RenderStereoMotionVectors @ 144fe2950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000144fe2f29) */
/* WARNING: Removing unreachable block (ram,0x000144fe2f36) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMobileSceneRenderer::RenderStereoMotionVectors
          (FMobileSceneRenderer *this,FRDGBuilder *param_1,FViewInfo *param_2,
          FSceneTextures *param_3,FInstanceCullingManager *param_4)

{
  int *piVar1;
  FMotionVectorPassParameters *pFVar2;
  FParallelMeshDrawCommandPass *pFVar3;
  FRDGBuilder *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  FRDGTexture *pFVar9;
  FRDGBuilder *this_00;
  FMobileSceneRenderer *pFVar10;
  bool bVar11;
  Type TVar12;
  bool bVar13;
  FStaticShaderPlatform FVar14;
  int iVar15;
  undefined8 *puVar16;
  FViewShaderParameters *pFVar17;
  FShaderParametersMetadata *pFVar18;
  FRDGTexture **ppFVar19;
  FRDGEventName *pFVar20;
  undefined8 *puVar21;
  longlong lVar22;
  int iVar23;
  bool bVar24;
  undefined1 auStackY_268 [32];
  undefined8 *local_208;
  FRenderTargetBinding local_200;
  FInstanceCullingManager *local_1e8;
  FDepthStencilBinding local_1e0;
  FRDGBuilder *local_1c8;
  EUniformBufferBindingFlags EStack_1c0;
  undefined7 uStack_1bf;
  undefined4 local_1b8;
  FMobileSceneRenderer *local_1b0;
  <lambda_1> local_1a8;
  FRDGEventName local_180;
  FViewShaderParameters local_168;
  FRDGTexture *local_148;
  FRDGTexture *pFStack_140;
  ERenderTargetLoadAction local_138;
  uchar uStack_137;
  short sStack_136;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  FRDGTexture *local_88;
  FRDGTexture *pFStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  byte local_5b;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_1b8 = 0;
  local_1e8 = param_4;
  local_1c8 = param_1;
  local_1b0 = this;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"RenderStereoMotionVectors");
  bVar24 = -1 < CpuChannel->Enabled;
  if (bVar24) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1651,"RenderStereoMotionVectors",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MobileShadingRenderer.cpp"
               ,0x673);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1651);
  }
  FVar14.Platform = FSceneView::GetShaderPlatform((FSceneView *)param_2);
  bVar11 = PlatformSupportsOpenXRMotionVectors(FVar14);
  if ((!bVar11) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("PlatformSupportsOpenXRMotionVectors(View.GetShaderPlatform())",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MobileShadingRenderer.cpp"
                          ,0x675,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this_00 = local_1c8;
  bVar11 = false;
  if ((param_2->bHasNoVisiblePrimitive == 0) &&
     ((*(char *)((longlong)&param_2->_padding_ + 7) == '\0' || ((int)param_2->_padding_ != 2)))) {
    iVar23 = 0;
    do {
      TVar12 = GetMeshPassFromVelocityPass((uint)(iVar23 != 0));
      pFVar3 = (param_2->ParallelMeshDrawCommandPasses).Elements[TVar12];
      if ((pFVar3 != (FParallelMeshDrawCommandPass *)0x0) && (0 < pFVar3->MaxNumDraws)) {
        FViewInfo::BeginRenderView(param_2);
        local_200.Texture = param_3->StereoMotionVectors;
        uStack_130 = 0;
        local_128 = 0;
        uStack_100 = 0;
        local_f8 = 0;
        local_200.LoadAction = !bVar11 + ELoad;
        uStack_d0 = 0;
        local_c8 = 0;
        local_a0 = 0;
        local_98 = 0;
        local_60 = 0;
        local_58 = 0;
        local_200.ResolveTexture = (FRDGTexture *)0x0;
        local_200.MipIndex = '\0';
        uStack_120 = 0xffff0000;
        local_118 = 0;
        uStack_110 = 0;
        local_108 = 0xffff0000;
        uStack_f0 = 0xffff0000;
        local_e8 = 0;
        uStack_e0 = 0;
        local_d8 = 0xffff0000;
        local_c0 = 0xffff0000;
        local_b8 = 0;
        uStack_b0 = 0;
        local_a8 = 0xffff0000;
        local_90 = 0xffff0000;
        local_70 = 0xffffffffffffffff;
        local_68 = 0xffffffffffffffff;
        local_200.ArraySlice = -1;
        bVar11 = FRenderTargetBinding::Validate(&local_200);
        if ((!bVar11) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Validate()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                                ,0x216,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_148 = local_200.Texture;
        pFStack_140 = local_200.ResolveTexture;
        local_138 = local_200.LoadAction;
        uStack_137 = local_200.MipIndex;
        sStack_136 = local_200.ArraySlice;
        local_1e0.Texture = param_3->StereoMotionVectorDepth;
        local_1e0.ResolveTexture = (FRDGTexture *)0x0;
        local_1e0.DepthLoadAction = EClear;
        local_1e0.StencilLoadAction = ENoAction;
        local_1e0.DepthStencilAccess.Value = DepthWrite_StencilWrite;
        bVar11 = FDepthStencilBinding::Validate(&local_1e0);
        if ((!bVar11) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Validate()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                                ,0x2a4,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_78 = CONCAT44(local_1e0.DepthStencilAccess.Value,
                            CONCAT22(local_1e0._18_2_,local_1e0._16_2_));
        local_88 = local_1e0.Texture;
        pFStack_80 = local_1e0.ResolveTexture;
        if (*(char *)((longlong)&param_2->_padding_ + 5) == '\0') {
          local_5b = *(byte *)((longlong)&param_2->_padding_ + 2) >> 1 & 1;
        }
        else {
          local_5b = 2;
        }
        local_5c = 0;
        bVar11 = true;
        puVar16 = FMemStackBase::Alloc((FMemStackBase *)&this_00->_padding_,0x1a0,0x10);
        if (puVar16 == (undefined8 *)0x0) {
          puVar16 = (undefined8 *)0x0;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Object",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                              ,0x61,L"");
          if (bVar13) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        else {
          *(undefined1 *)(puVar16 + 3) = 1;
          *puVar16 = &___7__TObject_VFMotionVectorPassParameters___FRDGAllocator__6B_;
          *(undefined1 *)(puVar16 + 5) = 1;
          puVar16[2] = 0;
          puVar16[4] = 0;
          puVar16[6] = 0;
          puVar16[8] = 0;
          *(undefined1 *)(puVar16 + 7) = 1;
          *(undefined4 *)(puVar16 + 9) = 4;
          puVar16[10] = 0;
          *(undefined4 *)(puVar16 + 0xb) = 8;
          puVar16[0xe] = 0;
          *(undefined1 *)(puVar16 + 0xf) = 1;
          puVar16[0x10] = 0;
          *(undefined1 *)(puVar16 + 0x11) = 1;
          puVar16[0x12] = 0;
          *(undefined1 *)(puVar16 + 0x13) = 1;
          FRenderTargetBindingSlots::FRenderTargetBindingSlots
                    ((FRenderTargetBindingSlots *)(puVar16 + 0x14));
        }
        local_208 = puVar16;
        if ((((undefined8 **)this_00->_padding_ <= &local_208) &&
            (&local_208 <
             (undefined8 **)this_00->_padding_ + *(int *)((longlong)&this_00->_padding_ + 4))) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar15 = (int)this_00->_padding_;
        piVar1 = (int *)((longlong)&this_00->_padding_ + 4);
        if (iVar15 == *piVar1) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)&this_00->_padding_,piVar1);
        }
        pFVar2 = (FMotionVectorPassParameters *)(puVar16 + 2);
        *(int *)&this_00->_padding_ = iVar15 + 1;
        *(undefined8 **)(this_00->_padding_ + (longlong)iVar15 * 8) = local_208;
        pFVar17 = FViewInfo::GetShaderParameters(param_2,&local_168);
        uVar6 = *(undefined8 *)&(pFVar17->View).field_0x8;
        uVar7 = *(undefined8 *)&pFVar17->InstancedView;
        uVar8 = *(undefined8 *)&(pFVar17->InstancedView).field_0x8;
        *(undefined8 *)&(pFVar2->View).View = *(undefined8 *)&pFVar17->View;
        puVar16[3] = uVar6;
        puVar16[4] = uVar7;
        puVar16[5] = uVar8;
        pFVar4 = (FRDGBuilder *)param_3->_padding_;
        pFVar18 = FSceneTextureUniformParameters::GetStructMetadata();
        pFVar10 = local_1b0;
        lVar22 = 2;
        EStack_1c0 = Static;
        if (pFVar18->BindingFlags != StaticAndShader) {
          EStack_1c0 = pFVar18->BindingFlags;
        }
        puVar16[6] = pFVar4;
        puVar16[7] = CONCAT71(uStack_1bf,EStack_1c0);
        ppFVar19 = &local_148;
        puVar21 = puVar16 + 0x14;
        do {
          pFVar9 = ppFVar19[1];
          *puVar21 = *ppFVar19;
          puVar21[1] = pFVar9;
          pFVar9 = ppFVar19[3];
          puVar21[2] = ppFVar19[2];
          puVar21[3] = pFVar9;
          pFVar9 = ppFVar19[5];
          puVar21[4] = ppFVar19[4];
          puVar21[5] = pFVar9;
          pFVar9 = ppFVar19[7];
          puVar21[6] = ppFVar19[6];
          puVar21[7] = pFVar9;
          pFVar9 = ppFVar19[9];
          puVar21[8] = ppFVar19[8];
          puVar21[9] = pFVar9;
          pFVar9 = ppFVar19[0xb];
          puVar21[10] = ppFVar19[10];
          puVar21[0xb] = pFVar9;
          pFVar9 = ppFVar19[0xd];
          puVar21[0xc] = ppFVar19[0xc];
          puVar21[0xd] = pFVar9;
          pFVar9 = ppFVar19[0xf];
          puVar21[0xe] = ppFVar19[0xe];
          puVar21[0xf] = pFVar9;
          lVar22 = lVar22 + -1;
          ppFVar19 = ppFVar19 + 0x10;
          puVar21 = puVar21 + 0x10;
        } while (lVar22 != 0);
        local_1c8 = pFVar4;
        BuildMeshRenderingCommands
                  (this_00,TVar12,param_2,(FGPUScene *)(*(longlong *)&local_1b0->field_0x8 + 0x3500)
                   ,local_1e8,(FInstanceCullingDrawParams *)(puVar16 + 8));
        local_1a8.__this = pFVar10;
        local_1a8.PassParameters = pFVar2;
        local_1a8.MeshPass = TVar12;
        local_1a8.View = param_2;
        local_1a8.SceneTextures = param_3;
        pFVar20 = FRDGEventName::FRDGEventName(&local_180,1,L"StereoMotionVectors");
        FRDGBuilder::
        AddPass<FMotionVectorPassParameters,_FMobileSceneRenderer::RenderStereoMotionVectors_::__l14::<lambda_1>_>
                  (this_00,pFVar20,pFVar2,NeverMerge|Raster,&local_1a8);
        if (local_180.FormattedEventName.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_180.FormattedEventName.Data.AllocatorInstance.Data);
        }
      }
      iVar23 = iVar23 + 1;
    } while (iVar23 < 2);
  }
  if (bVar24) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// RenderTranslucency @ 144fe2fc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __cdecl
FMobileSceneRenderer::RenderTranslucency
          (FRHICommandList *param_1,FViewInfo *param_2,TArrayView<FViewInfo,int> *param_3,
          Type param_4,Type param_5,FInstanceCullingDrawParams *param_6)

{
  int *piVar1;
  longlong lVar2;
  FParallelMeshDrawCommandPass *this;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  atomic<unsigned_int> aVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_TranslucencyDrawTime> FVar10;
  FRHIBreadcrumbAllocator *pFVar11;
  FRHIBreadcrumbNode *pFVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar13;
  FName FVar14;
  LARGE_INTEGER local_res10;
  FName local_res18 [2];
  undefined1 local_58 [12];
  int iStack_4c;
  TGPUStatWithDrawcallCategory<TRHIGPUStatNameProvider_Translucency> *local_48;
  wchar_t *pwStack_40;
  
  local_58._0_8_ = param_3->DataPtr;
  local_58._8_4_ = param_3->ArrayNum;
  iStack_4c = *(int *)&param_3->field_0xc;
  lVar2 = param_2->_padding_;
  bVar5 = FSceneRenderer::ShouldRenderTranslucency(param_4,(TArrayView<FViewInfo,int> *)local_58);
  if (!bVar5) {
    return;
  }
  if ((*(uint *)(lVar2 + 0x50) & 0x20000000) == 0) {
    return;
  }
  if (__CsvProfilerStat14 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("RenderTranslucency");
    __CsvProfilerStat14 = true;
  }
  FCsvProfiler::BeginExclusiveStat("RenderTranslucency","CSV_RenderTranslucency");
  FVar10 = StatPtr_STAT_TranslucencyDrawTime;
  if (StatPtr_STAT_TranslucencyDrawTime ==
      (FThreadSafeStaticStat<FStat_STAT_TranslucencyDrawTime>)0x0) {
    pFVar9 = ::FName::FName(local_res18,"STAT_TranslucencyDrawTime");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_TranslucencyDrawTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TranslucencyDrawTime,*pFVar9,
                        L"Translucency drawing","STATGROUP_SceneRendering","STATCAT_Advanced",
                        L"Scene Rendering",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar10;
  bVar5 = false;
  bVar4 = false;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar7 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar5 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.s.LowPart = FVar13.Value;
        local_res10.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MobileTranslucentRendering.cpp"
                   ,0xf);
        bVar5 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10.s.LowPart = FVar13.Value;
      local_res10.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar3 = true;
      goto LAB_144fe316f;
    }
  }
  bVar3 = false;
  FVar14.ComparisonIndex.Value = 0;
  FVar14.Number = 0;
LAB_144fe316f:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    local_58._0_8_ =
         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MobileTranslucentRendering.cpp"
    ;
    local_48 = &GPUStat_Translucency;
    local_58._8_4_ = 0x11;
    pwStack_40 = L"Translucency";
    ::Desc._padding_._0_4_ = 0x50eeda60;
    ::Desc._padding_._4_4_ = 1;
    ::Desc._padding_._0_4_ = 0x11;
    ::Desc._padding_._4_4_ = iStack_4c;
    ::Desc._padding_ = (longlong)&GPUStat_Translucency;
    ::Desc._padding_ = (longlong)u_Translucency;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
    ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    ::Desc.TraceGpuSpecId = 0;
    ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(``FMobileSceneRenderer::RenderTranslucency'::__l13::<lambda_1>::operator()<>'::__l2::
           _dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar11 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
  pFVar12 = FMemStackBase::Alloc(&pFVar11->Inner,0x50,8);
  pFVar12->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar12->Parent = FRHIBreadcrumbNode::Sentinel;
  pFVar12->ListLink = (FRHIBreadcrumbNode *)0x0;
  (pFVar12->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (pFVar12->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  pFVar12->Data = (FRHIBreadcrumbData *)&::Desc;
  pFVar12->Allocator = pFVar11;
  pFVar12->TraceCpuSpecId = 0;
  pFVar12->TraceCpuMetadataId = 0;
  LOCK();
  UNLOCK();
  uVar7 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar12->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar12->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar12->ID = uVar7;
  pFVar12->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar12[1]._padding_ = (longlong)&::Desc;
  if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
     (bVar6 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar6)) {
    EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      aVar8 = (atomic<unsigned_int>)
              FCpuProfilerTrace::OutputEventType
                        ((wchar_t *)::Desc._padding_,
                         (char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                         (uint)::Desc._padding_);
      LOCK();
      ::Desc.TraceCpuSpecId = aVar8;
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  }
  pFVar12->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
  FRHIBreadcrumbScope::FRHIBreadcrumbScope
            ((FRHIBreadcrumbScope *)local_58,(FRHIComputeCommandList *)param_1,pFVar12);
  local_48 = (TGPUStatWithDrawcallCategory<TRHIGPUStatNameProvider_Translucency> *)
             CONCAT71(local_48._1_7_,1);
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&(param_2->ViewRect).field0_0x0,
             (float)*(int *)((longlong)&(param_2->ViewRect).field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&(param_2->ViewRect).field0_0x0 + 8),
             (float)*(int *)((longlong)&(param_2->ViewRect).field0_0x0 + 0xc),__real_3f800000);
  this = (param_2->ParallelMeshDrawCommandPasses).Elements[param_5];
  if (this != (FParallelMeshDrawCommandPass *)0x0) {
    FParallelMeshDrawCommandPass::Draw(this,param_1,param_6);
  }
  FRHIBreadcrumbScope::~FRHIBreadcrumbScope((FRHIBreadcrumbScope *)local_58);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      stack0xffffffffffffffb0 =
           (FStatNameAndInfo)((ulonglong)FVar14 & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res10);
      local_58[4] = '\0';
      local_58[5] = '\0';
      local_58[6] = '\0';
      local_58[7] = '\0';
      local_58[0] = local_res10.s.LowPart._0_1_;
      local_58[1] = local_res10.s.LowPart._1_1_;
      local_58[2] = local_res10.s.LowPart._2_1_;
      local_58[3] = local_res10.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)local_58);
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
  FCsvProfiler::EndExclusiveStat("RenderTranslucency");
  return;
}

// RequiresMultiPass @ 144fe34a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

bool __cdecl FMobileSceneRenderer::RequiresMultiPass(int param_1,EShaderPlatform param_2)

{
  bool bVar1;
  
  bVar1 = MobileAllowFramebufferFetch((FStaticShaderPlatform)param_2);
  if (!bVar1) {
    return true;
  }
  bVar1 = IsVulkanPlatform((FStaticShaderPlatform)param_2);
  if (((!bVar1) &&
      ((bVar1 = IsMetalMobilePlatform((FStaticShaderPlatform)param_2), !bVar1 ||
       (GRHIGlobals.SupportsShaderFramebufferFetch == false)))) &&
     ((bVar1 = IsAndroidOpenGLESPlatform((FStaticShaderPlatform)param_2), !bVar1 ||
      ((GRHIGlobals.SupportsShaderFramebufferFetch == false &&
       (GRHIGlobals.SupportsShaderDepthStencilFetch == false)))))) {
    if ((FReadOnlyCVARCache::bMobileDeferredShadingValue == false) ||
       (FReadOnlyCVARCache::bMobileHDR == false)) {
      if ((FReadOnlyCVARCache::bMobileHDR == false) &&
         (FGenericDataDrivenShaderPlatformInfo::Infos[param_2].bIsPreviewPlatform == 0)) {
        return false;
      }
      if (1 < param_1) {
        return FGenericDataDrivenShaderPlatformInfo::Infos[param_2].bIsPreviewPlatform;
      }
    }
    return true;
  }
  return false;
}

// SetupMobileBasePassAfterShadowInit @ 144fe3d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FMobileSceneRenderer::SetupMobileBasePassAfterShadowInit
          (FMobileSceneRenderer *this,Type param_1,TArrayView<FViewCommands,int> *param_2,
          FInstanceCullingManager *param_3)

{
  int *piVar1;
  ForElementType<int> FVar2;
  EShaderPlatform EVar3;
  Type TVar4;
  int iVar5;
  int iVar6;
  FViewInfo *this_00;
  FViewCommands *pFVar7;
  FScene *pFVar8;
  void *_Src;
  FPreviousViewInfo *pFVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  FSceneView *pFVar15;
  FParallelMeshDrawCommandPass *this_01;
  wchar_t *pwVar16;
  FInstanceCullingContext *pFVar17;
  ForElementType<int> FVar18;
  longlong lVar19;
  size_t _Size;
  undefined1 auStackY_2b8 [32];
  uint local_234;
  longlong local_228;
  TArray<EMeshDrawCommandCullingPayloadFlags,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  local_220;
  FMeshPassProcessor *local_210;
  FMeshPassProcessor *local_208;
  FMobileSceneRenderer *local_200;
  TArrayView<FViewCommands,int> *local_1f8;
  longlong local_1f0;
  FInstanceCullingManager *local_1e8;
  FString local_1e0;
  ForElementType<int> local_1c8;
  uint uStack_1c0;
  undefined4 uStack_1bc;
  TArrayView<int_const_,int> local_1b8;
  ForElementType<int> local_1a8;
  uint local_198;
  uint local_194 [3];
  FInstanceCullingContext local_188;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  local_234 = 0;
  if (0 < *(int *)&this->field_0x3f8) {
    local_228 = 0;
    local_1f0 = 0;
    local_200 = this;
    local_1f8 = param_2;
    local_1e8 = param_3;
    do {
      lVar19 = local_1f0;
      uVar14 = 0;
      uVar13 = uVar14;
      if ((int)local_234 < *(int *)&this->field_0x3f8) {
        uVar13 = ~local_234 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      this_00 = *(FViewInfo **)(lVar19 + *(longlong *)&this->field_0x3f0);
      uVar13 = uVar14;
      if ((int)local_234 < param_2->ArrayNum) {
        uVar13 = ~local_234 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar7 = param_2->DataPtr;
      if ((((*(int *)((longlong)&(pFVar7->MeshCommands).Elements[2].ArrayNum + local_228) != 0) ||
           (*(int *)((longlong)&(pFVar7->MeshCommands).Elements[0x18].ArrayNum + local_228) != 0))
          || (this_00->NumVisibleDynamicMeshElements[2] != 0)) ||
         (*(int *)((longlong)
                   ((TStaticArray<int,39,4294967295> *)(&pFVar7->MeshCommands + 1))->Elements +
                  local_228 + 8) != 0)) {
        pFVar8 = *(FScene **)&this->field_0x8;
        TVar4 = *(Type *)&pFVar8->field_0x8;
        if (FPassProcessorManager::JumpTable[0][2] ==
            (_func___cdecl_FMeshPassProcessor_ptr_Type_FScene_ptr_FSceneView_ptr_FMeshPassDrawListContext_ptr
             *)0x0) {
          if (FPassProcessorManager::DeprecatedJumpTable[0][2] ==
              (_func___cdecl_FMeshPassProcessor_ptr_FScene_ptr_FSceneView_ptr_FMeshPassDrawListContext_ptr
               *)0x0) {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("JumpTable[ShadingPathIdx][PassType] || DeprecatedJumpTable[ShadingPathIdx][PassType]"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.h"
                                ,0x935,
                                L"Pass type %u create function was never registered for shading path %u.  Use a FRegisterPassProcessorCreateFunction to register a create function for this enum value."
                               );
            if (bVar11) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            if (FPassProcessorManager::JumpTable[0][2] !=
                (_func___cdecl_FMeshPassProcessor_ptr_Type_FScene_ptr_FSceneView_ptr_FMeshPassDrawListContext_ptr
                 *)0x0) goto LAB_144fe3ed5;
          }
          local_208 = (*FPassProcessorManager::DeprecatedJumpTable[0][2])
                                (pFVar8,(FSceneView *)this_00,(FMeshPassDrawListContext *)0x0);
        }
        else {
LAB_144fe3ed5:
          local_208 = (*FPassProcessorManager::JumpTable[0][2])
                                (TVar4,pFVar8,(FSceneView *)this_00,(FMeshPassDrawListContext *)0x0)
          ;
        }
        pFVar8 = *(FScene **)&this->field_0x8;
        TVar4 = *(Type *)&pFVar8->field_0x8;
        if (FPassProcessorManager::JumpTable[0][0x18] ==
            (_func___cdecl_FMeshPassProcessor_ptr_Type_FScene_ptr_FSceneView_ptr_FMeshPassDrawListContext_ptr
             *)0x0) {
          if (FPassProcessorManager::DeprecatedJumpTable[0][0x18] ==
              (_func___cdecl_FMeshPassProcessor_ptr_FScene_ptr_FSceneView_ptr_FMeshPassDrawListContext_ptr
               *)0x0) {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("JumpTable[ShadingPathIdx][PassType] || DeprecatedJumpTable[ShadingPathIdx][PassType]"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.h"
                                ,0x935,
                                L"Pass type %u create function was never registered for shading path %u.  Use a FRegisterPassProcessorCreateFunction to register a create function for this enum value."
                               );
            if (bVar11) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            if (FPassProcessorManager::JumpTable[0][0x18] !=
                (_func___cdecl_FMeshPassProcessor_ptr_Type_FScene_ptr_FSceneView_ptr_FMeshPassDrawListContext_ptr
                 *)0x0) goto LAB_144fe3f58;
          }
          local_210 = (*FPassProcessorManager::DeprecatedJumpTable[0][0x18])
                                (pFVar8,(FSceneView *)this_00,(FMeshPassDrawListContext *)0x0);
        }
        else {
LAB_144fe3f58:
          local_210 = (*FPassProcessorManager::JumpTable[0][0x18])
                                (TVar4,pFVar8,(FSceneView *)this_00,(FMeshPassDrawListContext *)0x0)
          ;
        }
        piVar1 = &this_00->SceneRendererPrimaryViewId;
        local_1a8.SecondaryData = (ForElementType<int>)0x0;
        local_194[0] = 2;
        local_198 = 0;
        if ((&local_1a8 <= piVar1) && (piVar1 < &local_1a8.SecondaryData)) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar11) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uVar14 = local_198;
          if (local_198 == local_194[0]) {
            uVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                               (0x404,&local_1a8,(int *)local_194);
          }
        }
        local_198 = uVar14 + 1;
        FVar18 = (ForElementType<int>)&local_1a8;
        if (local_1a8.SecondaryData != (ForElementType<int>)0x0) {
          FVar18 = local_1a8.SecondaryData;
        }
        *(int *)((longlong)FVar18 + (longlong)(int)uVar14 * 4) = *piVar1;
        bVar11 = FSceneView::IsInstancedStereoPass((FSceneView *)this_00);
        if (bVar11) {
          pFVar15 = FSceneView::GetInstancedSceneView((FSceneView *)this_00);
          if ((pFVar15 == (FSceneView *)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("View.GetInstancedView() != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MobileShadingRenderer.cpp"
                                  ,0x1ab,L""), bVar12)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar15 = FSceneView::GetInstancedSceneView((FSceneView *)this_00);
          FVar18 = (ForElementType<int>)&local_1a8;
          if (local_1a8.SecondaryData != (ForElementType<int>)0x0) {
            FVar18 = local_1a8.SecondaryData;
          }
          FVar2 = (ForElementType<int>)
                  ((longlong)pFVar15[1].PreviousViewTransform.TypedValue.Rotation.ZW.m128d_f64 + 4);
          if ((ulonglong)FVar18 <= (ulonglong)FVar2) {
            FVar18 = (ForElementType<int>)&local_1a8;
            if (local_1a8.SecondaryData != (ForElementType<int>)0x0) {
              FVar18 = local_1a8.SecondaryData;
            }
            if (((ulonglong)FVar2 < (ulonglong)((longlong)FVar18 + (longlong)(int)local_194[0] * 4))
               && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar12)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
          }
          if (local_198 == local_194[0]) {
            local_198 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                  (0x404,&local_1a8,(int *)local_194);
          }
          lVar19 = (longlong)(int)local_198;
          FVar18 = (ForElementType<int>)&local_1a8;
          if (local_1a8.SecondaryData != (ForElementType<int>)0x0) {
            FVar18 = local_1a8.SecondaryData;
          }
          local_198 = local_198 + 1;
          *(undefined4 *)((longlong)FVar18 + lVar19 * 4) = *(undefined4 *)FVar2;
        }
        this_01 = FViewInfo::CreateMeshPass(this_00,BasePass);
        if (this->field_0xb48 != '\0') {
          pwVar16 = GetMeshPassName(BasePass);
          ::FString::FString(&local_1e0,pwVar16);
          FParallelMeshDrawCommandPass::SetDumpInstancingStats(this_01,&local_1e0);
          if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
          }
        }
        local_220.ArrayNum =
             *(int *)((longlong)
                      &((TStaticArray<TArray<EMeshDrawCommandCullingPayloadFlags,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>,39,4294967295>
                         *)(&pFVar7->DynamicMeshCommandBuildRequests + 1))->Elements[2].ArrayNum +
                     local_228);
        _Size = (size_t)local_220.ArrayNum;
        iVar5 = *(int *)((longlong)
                         ((TStaticArray<int,39,4294967295> *)(&pFVar7->MeshCommands + 1))->Elements
                        + local_228 + 8);
        _Src = *(void **)((longlong)
                          &((TStaticArray<TArray<EMeshDrawCommandCullingPayloadFlags,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>,39,4294967295>
                             *)(&pFVar7->DynamicMeshCommandBuildRequests + 1))->Elements[2].
                           AllocatorInstance.Data + local_228);
        local_220.AllocatorInstance.Data = (EMeshDrawCommandCullingPayloadFlags *)0x0;
        if (local_220.ArrayNum == 0) {
          local_220.ArrayMax = 0;
        }
        else {
          UE::Core::Private::
          ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<enum_EMeshDrawCommandCullingPayloadFlags>_>
                    (1,1,local_220.ArrayNum,0,&local_220.AllocatorInstance,local_220.ArrayNum,
                     &local_220.ArrayMax);
          memcpy(local_220.AllocatorInstance.Data,_Src,_Size);
        }
        uVar13 = local_198;
        pFVar9 = this_00->PrevViewInfo;
        iVar6 = this_00->NumVisibleDynamicMeshElements[2];
        local_1c8 = (ForElementType<int>)&local_1a8;
        if (local_1a8.SecondaryData != (ForElementType<int>)0x0) {
          local_1c8 = local_1a8.SecondaryData;
        }
        if (((int)local_198 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uStack_1c0 = uVar13;
        EVar3 = *(EShaderPlatform *)&local_200->field_0xadc;
        pwVar16 = GetMeshPassName(BasePass);
        local_1b8._12_4_ = uStack_1bc;
        local_1b8.ArrayNum = uStack_1c0;
        local_1b8.DataPtr = (int *)local_1c8;
        pFVar17 = FInstanceCullingContext::FInstanceCullingContext
                            (&local_188,pwVar16,EVar3,local_1e8,&local_1b8,&pFVar9->HZB,(uint)bVar11
                             ,None,UnCulled);
        this = local_200;
        FParallelMeshDrawCommandPass::DispatchPassSetup
                  (this_01,*(FScene **)&local_200->field_0x8,this_00,pFVar17,BasePass,param_1,
                   local_208,&this_00->DynamicMeshElements,
                   &this_00->DynamicMeshElementsPassRelevance,iVar6,
                   (TArray<FStaticMeshBatch_const_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                    *)((longlong)(&pFVar7->NumDynamicMeshCommandBuildRequestElements + 1) +
                      local_228 + 0x24),&local_220,iVar5,
                   (TArray<FVisibleMeshDrawCommand,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                    *)((longlong)&(pFVar7->MeshCommands).Elements[2].AllocatorInstance.Data +
                      local_228),local_210,
                   (TArray<FVisibleMeshDrawCommand,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                    *)((longlong)&(pFVar7->MeshCommands).Elements[0x18].AllocatorInstance.Data +
                      local_228));
        FInstanceCullingContext::~FInstanceCullingContext(&local_188);
        param_2 = local_1f8;
        if (local_1a8.SecondaryData != (ForElementType<int>)0x0) {
          FMemory::Free((void *)local_1a8.SecondaryData);
          param_2 = local_1f8;
        }
      }
      local_234 = local_234 + 1;
      local_228 = local_228 + 0x7f0;
      local_1f0 = local_1f0 + 8;
    } while ((int)local_234 < *(int *)&this->field_0x3f8);
  }
  return;
}

// ShouldRenderCustomDepth @ 144feafc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

bool __cdecl FMobileSceneRenderer::ShouldRenderCustomDepth(FViewInfo *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  void *pvVar5;
  ECustomDepthMode EVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  longlong lVar11;
  longlong lVar12;
  FMaterialRenderProxy *this;
  FMaterial *this_00;
  FMaterialShaderMap *pFVar13;
  longlong *plVar14;
  uint uVar15;
  bool bStackX_8;
  
  bVar8 = false;
  bStackX_8 = false;
  if ((param_1->bHasCustomDepthPrimitives != false) ||
     (EVar6 = GetCustomDepthMode(), EVar6 == EnabledWithStencil)) {
    pTVar4 = CVarMobileCustomDepthForTranslucency.Ref;
    bVar7 = IsInParallelGameThread();
    if ((bVar7) || (bVar7 = IsInGameThread(), bVar7)) {
      lVar11 = 0;
    }
    else {
      lVar11 = 4;
    }
    pvVar5 = ThreadLocalStoragePointer;
    if (*(int *)((longlong)pTVar4->ShadowedValue + lVar11) != 0) {
      if ((param_1->bUsesCustomDepth != 0) || (param_1->bUsesCustomStencil != 0)) {
        bVar8 = true;
      }
      bStackX_8 = bVar8;
      if (param_1->bUsesCustomStencil != 0) {
        return bVar8;
      }
    }
    lVar11 = 0;
    do {
      do {
        if ((*(int *)(*(longlong *)((longlong)pvVar5 + (ulonglong)_tls_index * 8) + 0x9d4c) <
             `public:_static_class_FName_const&___ptr64___cdecl_FPostProcessMaterialNode::GetFName(void)'
             ::__l2::_thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_FPostProcessMaterialNode::GetFName(void)'
                                 ::__l2::_thread_safe_static_guard_0__),
           `public:_static_class_FName_const&___ptr64___cdecl_FPostProcessMaterialNode::GetFName(void)'
           ::__l2::_thread_safe_static_guard_0__ == -1)) {
          ::FName::FName(&`public:_static_class_FName_const&___ptr64___cdecl_FPostProcessMaterialNode::GetFName(void)'
                          ::__l2::Name,L"FPostProcessMaterialNode");
          _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_FPostProcessMaterialNode::GetFName(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
        do {
          lVar12 = param_1->_padding_;
          if (lVar11 != 0) {
            lVar12 = (ulonglong)*(uint *)(lVar11 + 0x10) + 0x14 + lVar11 +
                     (ulonglong)*(uint *)(lVar11 + 0xc);
          }
          lVar11 = 0;
          if (lVar12 != (longlong)(int)param_1->_padding_ + param_1->_padding_) {
            lVar11 = lVar12;
          }
          if (lVar11 == 0) {
            return bStackX_8;
          }
        } while (*(FName *)(lVar11 + 4) !=
                 `public:_static_class_FName_const&___ptr64___cdecl_FPostProcessMaterialNode::GetFName(void)'
                 ::__l2::Name);
        plVar14 = (longlong *)((ulonglong)*(uint *)(lVar11 + 0x10) + 0x14 + lVar11);
        if (plVar14 == (longlong *)0x0) {
          return bStackX_8;
        }
        plVar14 = (longlong *)*plVar14;
      } while (plVar14 == (longlong *)0x0);
      this = (FMaterialRenderProxy *)(**(code **)(*plVar14 + 0x310))();
      if ((this == (FMaterialRenderProxy *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Proxy",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MobileShadingRenderer.cpp"
                             ,0xa3,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      this_00 = FMaterialRenderProxy::GetIncompleteMaterialWithFallback
                          (this,(Type)param_1->_padding_);
      pFVar13 = FMaterial::GetRenderingThreadShaderMap(this_00);
      uVar2 = *(uint *)(pFVar13->_padding_ + 600);
      uVar15 = uVar2 & 0x2000000;
      cVar10 = (**(code **)(this_00->_padding_ + 0x450))(this_00);
    } while ((((cVar10 == '\0') && ((uVar2 & 0x2000) == 0)) && (uVar15 == 0)) ||
            (bStackX_8 = true, uVar15 == 0));
    bStackX_8 = true;
  }
  return bStackX_8;
}

// ShouldRenderHZB @ 144feafd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

bool __thiscall
FMobileSceneRenderer::ShouldRenderHZB(FMobileSceneRenderer *this,TArrayView<FViewInfo,int> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  IConsoleManager *pIVar5;
  longlong *plVar6;
  TConsoleVariableData<int> *pTVar7;
  FViewInfo *pFVar8;
  FViewInfo *pFVar9;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar5 = IConsoleManager::Get();
    plVar6 = (longlong *)
             (**(code **)((longlong)*pIVar5 + 0xc0))(pIVar5,L"r.Mobile.AmbientOcclusionTechnique",1)
    ;
    pTVar7 = (TConsoleVariableData<int> *)0x0;
    if (plVar6 != (longlong *)0x0) {
      pTVar7 = (TConsoleVariableData<int> *)(**(code **)(*plVar6 + 0x68))(plVar6);
    }
    MobileAmbientOcclusionTechniqueCVar = pTVar7;
    _Init_thread_footer(&::_TSS0);
  }
  if ((param_1->ArrayNum < 1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  bVar2 = RequiresMobileAmbientOcclusionPass(*(FScene **)&this->field_0x8,param_1->DataPtr);
  pTVar7 = MobileAmbientOcclusionTechniqueCVar;
  if (bVar2) {
    bVar2 = IsInParallelRenderingThread();
    if ((!bVar2) &&
       (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007955>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6d3,"IsInParallelRenderingThread()"), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if (pTVar7->ShadowedValue[1] == 1) {
      bVar2 = true;
      goto LAB_144feb0a4;
    }
  }
  bVar2 = false;
LAB_144feb0a4:
  bVar4 = FInstanceCullingContext::IsOcclusionCullingEnabled();
  if (bVar4) {
    return true;
  }
  if (bVar2 == false) {
    pFVar8 = param_1->DataPtr;
    pFVar9 = pFVar8 + param_1->ArrayNum;
    for (; pFVar8 != pFVar9; pFVar8 = pFVar8 + 1) {
      bVar4 = IsMobileSSREnabled(pFVar8);
      if (bVar4) {
        return true;
      }
    }
  }
  return bVar2;
}

// UpdateDirectionalLightUniformBuffers @ 144ff6410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMobileSceneRenderer::UpdateDirectionalLightUniformBuffers
          (FMobileSceneRenderer *this,FRDGBuilder *param_1,FViewInfo *param_2)

{
  int *piVar1;
  int iVar2;
  FRDGEventName *pFVar3;
  void *this_00;
  TRDGEmptyLambdaPass<_protected:_void___cdecl_FMobileSceneRenderer::UpdateDirectionalLightUniformBuffers(FRDGBuilder_&,FViewInfo_const_&)_::_2_::<lambda_1>_>
  *pTVar4;
  <lambda_1> local_38;
  FRDGEventName local_28;
  
  if (this->CachedView != param_2) {
    this->CachedView = param_2;
    local_38.__this = this;
    local_38.View = param_2;
    pFVar3 = FRDGEventName::FRDGEventName(&local_28,1,L"UpdateDirectionalLightUniformBuffers");
    FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,pFVar3,None);
    FRDGBuilder::FlushAccessModeQueue(param_1);
    this_00 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x198,8);
    pTVar4 = TRDGEmptyLambdaPass<`FMobileSceneRenderer::UpdateDirectionalLightUniformBuffers'::__l2::<lambda_1>_>
             ::
             TRDGEmptyLambdaPass<_FMobileSceneRenderer::UpdateDirectionalLightUniformBuffers_::__l2::<lambda_1>_>
                       (this_00,pFVar3,NeverCull,&local_38);
    piVar1 = &(param_1->Passes).Array.ArrayMax;
    iVar2 = (param_1->Passes).Array.ArrayNum;
    if (iVar2 == *piVar1) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                        (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
    }
    (param_1->Passes).Array.ArrayNum = iVar2 + 1;
    (param_1->Passes).Array.AllocatorInstance.Data[iVar2] = (FRDGPass *)pTVar4;
    *(int *)&pTVar4->field_0x4c = (param_1->Passes).Array.ArrayNum + -1;
    FRDGBuilder::SetupEmptyPass(param_1,(FRDGPass *)pTVar4);
    if (local_28.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.FormattedEventName.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// UpdateSkyReflectionUniformBuffer @ 144ff6510

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMobileSceneRenderer::UpdateSkyReflectionUniformBuffer
          (FMobileSceneRenderer *this,FRHICommandListBase *param_1)

{
  FSkyLightSceneProxy *pFVar1;
  bool bVar2;
  FSkyLightSceneProxy *pFVar3;
  TVector4<float>_u_0 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  pFVar1 = (*(FScene **)&this->field_0x8)->SkyLight;
  pFVar3 = (FSkyLightSceneProxy *)0x0;
  if ((pFVar1 != (FSkyLightSceneProxy *)0x0) &&
     ((((pFVar1->ProcessedTexture != (FTexture *)0x0 &&
        ((pFVar1->ProcessedTexture->TextureRHI).Reference != (FRHITexture *)0x0)) &&
       (pFVar1->bHasStaticLighting == '\0')) ||
      (bVar2 = FScene::CanSampleSkyLightRealTimeCaptureData(*(FScene **)&this->field_0x8),
      pFVar3 = (FSkyLightSceneProxy *)0x0, bVar2)))) {
    pFVar3 = *(FSkyLightSceneProxy **)(*(longlong *)&this->field_0x8 + 0x2b38);
  }
  if ((((*(uint *)&this->field_0x110 & 0x10000000) == 0) && (0 < *(int *)&this->field_0x18)) &&
     (*(char *)(*(longlong *)&this->field_0x10 + 0x11ec) != '\0')) {
    pFVar3 = (FSkyLightSceneProxy *)0x0;
  }
  local_48._0_8_ = ___xmm_3f800000000000000000000000000000;
  local_48._8_8_ = _UNK_150689648;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  SetupMobileSkyReflectionUniformParameters
            (*(FScene **)&this->field_0x8,pFVar3,
             (FMobileReflectionCaptureShaderParameters *)&local_48._s_0);
  FRHICommandListBase::UpdateUniformBuffer
            (param_1,*(FRHIUniformBuffer **)(*(longlong *)&this->field_0x8 + 0x88),&local_48);
  return;
}

// RenderAmbientOcclusion @ 14515d280

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FMobileSceneRenderer::RenderAmbientOcclusion
          (FMobileSceneRenderer *this,FRDGBuilder *param_1,FSceneTextures *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong lVar3;
  FSceneViewFamily *this_00;
  code *pcVar4;
  TConsoleVariableData<int> *pTVar5;
  bool bVar6;
  EDebugViewShaderMode EVar7;
  FRDGTexture *pFVar8;
  
  if ((*(int *)&this->field_0x18 < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FRDGTexture *)(*pcVar4)();
    return pFVar8;
  }
  pTVar5 = CVarMobileAmbientOcclusionQuality.Ref;
  lVar2 = *(longlong *)&this->field_0x10;
  lVar3 = *(longlong *)&this->field_0x8;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FRDGTexture *)(*pcVar4)();
    return pFVar8;
  }
  if (((0 < pTVar5->ShadowedValue[1]) && (0.0 < *(float *)(lVar2 + 0x1920))) &&
     ((__real_3c23d70a < *(float *)(lVar2 + 0x1924) || __real_3c23d70a == *(float *)(lVar2 + 0x1924)
      || (((lVar3 != 0 && (*(longlong *)(lVar3 + 0x2b38) != 0)) &&
          ((*(uint *)(*(longlong *)(lVar2 + 8) + 0x58) & 0x10000000) != 0)))))) {
    this_00 = *(FSceneViewFamily **)(lVar2 + 8);
    if ((((this_00->EngineShowFlags).Lighting != 0) && (*(char *)(lVar2 + 0x11ec) == '\0')) &&
       ((*(char *)(lVar2 + 0x11ed) == '\0' &&
        ((((this_00->EngineShowFlags).HitProxies == 0 &&
          ((this_00->EngineShowFlags).VisualizeLightCulling == 0)) &&
         (EVar7 = FSceneViewFamily::GetDebugViewShaderMode(this_00), EVar7 == DVSM_None)))))) {
      pFVar8 = CreateMobileScreenSpaceAOTexture(param_1,(FSceneTexturesConfig *)&param_2->_padding_)
      ;
      pTVar5 = CVarMobileAmbientOcclusionTechnique.Ref;
      bVar6 = IsInParallelRenderingThread();
      if ((!bVar6) &&
         (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007955>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FRDGTexture *)(*pcVar4)();
        return pFVar8;
      }
      if (pTVar5->ShadowedValue[1] == 0) {
        RenderGTAO(param_1,param_2,pFVar8,
                   (TArray<FViewInfo,TSizedDefaultAllocator<32>_> *)&this->field_0x10);
        return pFVar8;
      }
      if (pTVar5->ShadowedValue[1] != 1) {
        return pFVar8;
      }
      RenderSSAO(param_1,param_2,pFVar8,
                 (TArray<FViewInfo,TSizedDefaultAllocator<32>_> *)&this->field_0x10);
      return pFVar8;
    }
  }
  return (FRDGTexture *)0x0;
}

// RenderHitProxies @ 1454b5ed0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMobileSceneRenderer::RenderHitProxies
          (FMobileSceneRenderer *this,FRDGBuilder *param_1,FSceneRenderUpdateInputs *param_2)

{
  longlong lVar1;
  FScope local_res8;
  
  FSceneRenderer::OnRenderBegin((FSceneRenderer *)this,param_1,param_2);
  GPUMessage::FScope::FScope(&local_res8,param_1);
  lVar1 = *(longlong *)&this->field_0x8;
  FGPUScene::BeginRender
            ((FGPUScene *)(lVar1 + 0x3500),param_1,(FGPUSceneDynamicContext *)&this->field_0xb50);
  FSceneRenderer::OnRenderFinish((FSceneRenderer *)this,param_1,(FRDGTexture *)0x0);
  FGPUScene::EndRender((FGPUScene *)(lVar1 + 0x3500));
  GPUMessage::FScope::~FScope(&local_res8);
  return;
}

// RenderOcclusion @ 1454b6a30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __thiscall
FMobileSceneRenderer::RenderOcclusion
          (FMobileSceneRenderer *this,FRHICommandList *param_1,FViewInfo *param_2,
          FViewOcclusionQueries *param_3)

{
  bool bVar1;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,"FMobileSceneRenderer_BeginOcclusionTests")
  ;
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1554,"FMobileSceneRenderer_BeginOcclusionTests",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneOcclusion.cpp"
               ,0x612);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1554);
  }
  BeginOcclusionTests(param_1,param_2,param_3,(Type)param_2->_padding_,1,
                      (FGraphicsPipelineStateInitializer *)0x0);
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// RenderMobileScreenSpaceShadows @ 1455bf0f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMobileSceneRenderer::RenderMobileScreenSpaceShadows
          (FMobileSceneRenderer *this,FRDGBuilder *param_1,TIntPoint<int> param_2,
          FRDGTexture *param_3)

{
  char cVar1;
  FMinimalSceneTextures *pFVar2;
  FLightSceneInfo *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FRDGScope *this_01;
  IConsoleManager *pIVar7;
  longlong *plVar8;
  TConsoleVariableData<int> *pTVar9;
  int *piVar10;
  TRDGEventScopeGuard<FRDGScope_RHI> local_e8;
  char local_d8;
  longlong *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_c8;
  TOptional<FRHIBreadcrumbScope> local_a8;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31>_const_*,std::tuple<>_> local_90;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_const_*,std::tuple<>_> local_80;
  uint uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  uint uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  
  pTVar9 = (TConsoleVariableData<int> *)0x0;
  piVar10 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar10 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar7 = IConsoleManager::Get();
    plVar8 = (longlong *)(**(code **)((longlong)*pIVar7 + 0xc0))(pIVar7,L"r.ContactShadows",1);
    if (plVar8 != (longlong *)0x0) {
      pTVar9 = (TConsoleVariableData<int> *)(**(code **)(*plVar8 + 0x68))(plVar8);
    }
    ContactShadowsCVar = pTVar9;
    _Init_thread_footer(&::_TSS0);
  }
  if (((param_3 != (FRDGTexture *)0x0) &&
      (bVar4 = IsOpenGLPlatform((FStaticShaderPlatform)*(EShaderPlatform *)&this->field_0xadc),
      !bVar4)) &&
     ((ContactShadowsCVar == (TConsoleVariableData<int> *)0x0 ||
      (iVar5 = TConsoleVariableData<int>::GetValueOnRenderThread(ContactShadowsCVar), iVar5 != 0))))
  {
    cVar1 = *(char *)((longlong)&param_1->_padding_ + 6);
    local_d8 = '\0';
    if ((cVar1 != '\0') && ((cVar1 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
      if ((*piVar10 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        local_60 = 0;
        uStack_5c = 0;
        ::Desc._12_8_ = ZEXT48(uStack_64);
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        ::Desc._padding_._0_4_ = 0x9a8;
        ::Desc._padding_._4_4_ = 0;
        ::Desc._padding_ = (longlong)u_RenderMobileScr;
        ::Desc._padding_ = (longlong)u_RenderMobileScr;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```FMobileSceneRenderer::RenderMobileScreenSpaceShadows'::__l10::Desc::operator()<>'
               ::__l3::<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
      local_90._Myfirst._Val = &::Desc;
      local_e8.State = (FRDGScopeState *)param_1;
      this_01 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                          ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
      param_1->_padding_ = (longlong)this_01;
      local_e8.Scope = this_01;
      TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
      Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31>_const_*,std::tuple<>_>_>
                (&(this_01->Impl).Impl,(FRDGScopeState *)param_1,&local_90);
      if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
        FRDGScope::BeginCPU(this_01,(FRHIComputeCommandList *)param_1->_padding_,false);
        FRDGScope::BeginGPU(this_01,(FRHIComputeCommandList *)param_1->_padding_);
      }
      local_d8 = '\x01';
    }
    local_a8.bIsSet = false;
    if ((*piVar10 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      local_40 = 0;
      uStack_3c = 0;
      ::Desc._12_8_ = ZEXT48(uStack_44);
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._0_4_ = 0x9a8;
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_ = (longlong)u_RenderMobileScr;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(``FMobileSceneRenderer::RenderMobileScreenSpaceShadows'::__l15::<lambda_2>::
             operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_80._Myfirst._Val = &::Desc;
    TOptional<FRHIBreadcrumbScope>::
    Emplace<FRHIComputeCommandList_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_const_*,std::tuple<>_>_>
              (&local_a8,(FRHIComputeCommandList *)param_1->_padding_,&local_80);
    if (((this->field_0x180 == '\0') || (*(char *)(*(longlong *)&this->field_0x3d8 + 8) == '\0')) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsViewFamilyInfo && SceneTextures->bIsSceneTexturesInitialized",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.h"
                           ,0x7c0,
                           L"FSceneTextures was not initialized. Call FSceneTextures::InitializeViewFamily() first."
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar2 = *(FMinimalSceneTextures **)&this->field_0x3d8;
    TSparseArray<FLightSceneInfoCompact,TAlignedSparseArrayAllocator<16,TAlignedHeapAllocator<16>,FDefaultBitArrayAllocator>_>
    ::CreateConstIterator
              ((TSparseArray<FLightSceneInfoCompact,TAlignedSparseArrayAllocator<16,TAlignedHeapAllocator<16>,FDefaultBitArrayAllocator>_>
                *)(*(longlong *)&this->field_0x8 + 0x2a98),(TConstIterator *)&local_d0);
    if (local_c8.CurrentBitIndex < (local_c8.Array)->NumBits) {
      do {
        this_00 = *(FLightSceneInfo **)
                   ((longlong)local_c8.CurrentBitIndex * 0x40 + 0x30 + *local_d0);
        uVar6 = 0;
        if (this_00->Id < *(int *)&this->field_0x638) {
          uVar6 = (uint)~this_00->Id >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((this_00->Proxy->LightType == '\0') &&
           (iVar5 = FLightSceneInfo::GetDynamicShadowMapChannel(this_00), iVar5 != -1)) {
          RenderScreenSpaceShadows
                    (param_1,pFVar2,
                     (TArray<FViewInfo,TSizedDefaultAllocator<32>_> *)&this->field_0x10,this_00,true
                     ,param_3);
        }
        local_c8.UnvisitedBitMask = local_c8.UnvisitedBitMask & ~local_c8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_c8);
      } while (local_c8.CurrentBitIndex < (local_c8.Array)->NumBits);
    }
    if (local_a8.bIsSet != false) {
      FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_a8.TypedValue);
    }
    if (local_d8 != '\0') {
      TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_e8);
    }
  }
  return;
}

// RenderMobileShadowProjections @ 1455bf550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FMobileSceneRenderer::RenderMobileShadowProjections
          (FMobileSceneRenderer *this,FRDGBuilder *param_1,TIntPoint<int> param_2,bool param_3)

{
  char cVar1;
  int iVar2;
  FRHIComputeCommandList *this_00;
  FMinimalSceneTextures *pFVar3;
  FLightSceneInfo *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  atomic<unsigned_int> aVar8;
  uint uVar9;
  FRDGScope *this_01;
  FRHIBreadcrumbAllocator *pFVar10;
  FRHIBreadcrumbNode *pFVar11;
  FRDGTexture *pFVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 auStackY_1a8 [32];
  TRDGEventScopeGuard<FRDGScope_RHI> local_168;
  char local_158;
  longlong *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_148;
  FProjectedShadowInfo **local_128;
  int iStack_120;
  undefined4 uStack_11c;
  char *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  wchar_t *pwStack_100;
  FRHIBreadcrumbScope local_f8;
  char local_e8;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<30>_const_*,std::tuple<>_> local_e0;
  TArrayView<FProjectedShadowInfo_const_*_const,int> local_c8;
  uint uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined1 local_98 [24];
  float local_80;
  int local_7c;
  undefined4 local_78;
  TIntPoint<int>_u_0 local_74;
  undefined4 local_6c;
  undefined4 local_68;
  undefined2 local_64;
  void *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  cVar1 = *(char *)((longlong)&param_1->_padding_ + 6);
  uVar14 = (ulonglong)_tls_index;
  local_158 = '\0';
  if ((cVar1 != '\0') && ((cVar1 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar14 * 8) + 0x9d4c) < ::_TSS0
       ) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        local_a8 = 0;
        uStack_a4 = 0;
        ::Desc._12_8_ = ZEXT48(uStack_ac);
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        ::Desc._padding_._4_4_ = 0;
        ::Desc._padding_._0_4_ = 0x9c1;
        ::Desc._padding_ = (longlong)u_RenderMobileSha;
        ::Desc._padding_ = (longlong)u_RenderMobileSha;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```FMobileSceneRenderer::RenderMobileShadowProjections'::__l7::Desc::operator()<>'::
               __l3::<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    local_e0._Myfirst._Val = &::Desc;
    local_168.State = (FRDGScopeState *)param_1;
    this_01 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)this_01;
    local_168.Scope = this_01;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<30>_const_*,std::tuple<>_>_>
              (&(this_01->Impl).Impl,(FRDGScopeState *)param_1,&local_e0);
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(this_01,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(this_01,(FRHIComputeCommandList *)param_1->_padding_);
    }
    local_158 = '\x01';
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar14 * 8) + 0x9d4c) < ::_TSS0)
  {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      uStack_110 = 0x9c1;
      local_118 = 
      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowRendering.cpp"
      ;
      local_108 = 0;
      pwStack_100 = L"RenderMobileShadowProjections";
      ::Desc._padding_._0_4_ = 0x50fd3280;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_._0_4_ = 0x9c1;
      ::Desc._padding_._4_4_ = uStack_10c;
      ::Desc._padding_._0_4_ = 0;
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_._0_4_ = 0x50fd3bd8;
      ::Desc._padding_._4_4_ = 1;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(``FMobileSceneRenderer::RenderMobileShadowProjections'::__l12::<lambda_2>::
             operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  this_00 = (FRHIComputeCommandList *)param_1->_padding_;
  pFVar10 = FRHIComputeCommandList::GetBreadcrumbAllocator(this_00);
  pFVar11 = FMemStackBase::Alloc(&pFVar10->Inner,0x50,8);
  pFVar11->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar11->Parent = FRHIBreadcrumbNode::Sentinel;
  pFVar11->ListLink = (FRHIBreadcrumbNode *)0x0;
  (pFVar11->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (pFVar11->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  pFVar11->Allocator = pFVar10;
  pFVar11->TraceCpuSpecId = 0;
  pFVar11->TraceCpuMetadataId = 0;
  pFVar11->Data = (FRHIBreadcrumbData *)&::Desc;
  LOCK();
  UNLOCK();
  uVar7 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar11->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar11->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar11->ID = uVar7;
  pFVar11->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar11[1]._padding_ = (longlong)&::Desc;
  if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
    bVar6 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
    if (bVar6) {
      EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
      if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
        aVar8 = (atomic<unsigned_int>)
                FCpuProfilerTrace::OutputEventType
                          ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                           (char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                           (uint)::Desc._padding_);
        LOCK();
        ::Desc.TraceCpuSpecId = aVar8;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    }
  }
  pFVar11->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_f8,this_00,pFVar11);
  local_80 = FClearValueBinding::White.Value.Color[3];
  local_7c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_e8 = '\x01';
  local_98._0_8_ = 9;
  local_64 = 0xff00;
  local_4c = 1;
  local_98._8_8_ = FClearValueBinding::White._0_8_;
  local_98._16_8_ = FClearValueBinding::White.Value._4_8_;
  if (param_3) {
    local_6c = 0x20001;
    local_68 = 0x2010101;
  }
  else {
    local_6c = 0x10001;
    local_68 = 0x2000101;
  }
  local_50 = 0;
  local_58 = (void *)0x0;
  local_78 = 0;
  local_74 = param_2.field0_0x0;
  pFVar12 = FRDGBuilder::CreateTexture
                      (param_1,(FRDGTextureDesc *)local_98,L"ScreenSpaceShadowMaskTextureMobile",
                       None);
  if ((this->field_0x180 == '\0') || (*(char *)(*(longlong *)&this->field_0x3d8 + 8) == '\0')) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsViewFamilyInfo && SceneTextures->bIsSceneTexturesInitialized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.h"
                       ,0x7c0,
                       L"FSceneTextures was not initialized. Call FSceneTextures::InitializeViewFamily() first."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar12 = (FRDGTexture *)(*pcVar5)();
      return pFVar12;
    }
  }
  pFVar3 = *(FMinimalSceneTextures **)&this->field_0x3d8;
  TSparseArray<FLightSceneInfoCompact,TAlignedSparseArrayAllocator<16,TAlignedHeapAllocator<16>,FDefaultBitArrayAllocator>_>
  ::CreateConstIterator
            ((TSparseArray<FLightSceneInfoCompact,TAlignedSparseArrayAllocator<16,TAlignedHeapAllocator<16>,FDefaultBitArrayAllocator>_>
              *)(*(longlong *)&this->field_0x8 + 0x2a98),(TConstIterator *)&local_150);
  if (local_148.CurrentBitIndex < (local_148.Array)->NumBits) {
    do {
      pFVar4 = *(FLightSceneInfo **)((longlong)local_148.CurrentBitIndex * 0x40 + 0x30 + *local_150)
      ;
      uVar7 = pFVar4->Id;
      uVar9 = 0;
      if ((int)uVar7 < *(int *)&this->field_0x638) {
        uVar9 = ~uVar7 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pFVar12 = (FRDGTexture *)(*pcVar5)();
          return pFVar12;
        }
      }
      lVar13 = (longlong)(int)uVar7 * 0x60 + *(longlong *)&this->field_0x630;
      if (((pFVar4->Proxy->LightType == '\0') ||
          (FReadOnlyCVARCache::bMobileDeferredShadingValue == false)) ||
         (FReadOnlyCVARCache::bMobileHDR == false)) {
        FSceneRenderer::RenderShadowProjections
                  ((FSceneRenderer *)this,param_1,pFVar3,pFVar12,(FRDGTexture *)0x0,pFVar4,true);
      }
      local_128 = *(FProjectedShadowInfo ***)(lVar13 + 0x20);
      iVar2 = *(int *)(lVar13 + 0x28);
      if (iVar2 < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pFVar12 = (FRDGTexture *)(*pcVar5)();
          return pFVar12;
        }
      }
      local_c8._12_4_ = uStack_11c;
      local_c8.ArrayNum = iVar2;
      local_c8.DataPtr = local_128;
      iStack_120 = iVar2;
      FSceneRenderer::RenderCapsuleDirectShadows
                ((FSceneRenderer *)this,param_1,pFVar4,pFVar12,&local_c8,true);
      local_148.UnvisitedBitMask = local_148.UnvisitedBitMask & ~local_148._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_148);
    } while (local_148.CurrentBitIndex < (local_148.Array)->NumBits);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_e8 != '\0') {
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_f8);
  }
  if (local_158 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_168);
  }
  return pFVar12;
}

// RenderModulatedShadowProjections @ 1455bfb10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FMobileSceneRenderer::RenderModulatedShadowProjections
          (FMobileSceneRenderer *this,FRHICommandList *param_1,int param_2,FViewInfo *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  FLightSceneInfo *this_00;
  FLightSceneProxy *pFVar3;
  longlong lVar4;
  FProjectedShadowInfo *this_01;
  ForElementType<float> FVar5;
  FVisibleLightViewInfo *pFVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  float fVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_ProjectedShadowDrawTime> FVar17;
  FName FVar18;
  longlong lVar19;
  ForElementType<float> FVar20;
  undefined8 *puVar21;
  bool bVar22;
  FColor_u_0 local_168 [2];
  FName local_160;
  FName local_158;
  FName local_150;
  FLightSceneProxy *local_140;
  longlong *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_130;
  TOptional<FRHIBreadcrumbScope> local_110;
  FName local_f8;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_const_*,std::tuple<>_> local_f0;
  FInstanceCullingDrawParams local_d8;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  
  if ((*(uint *)&this->field_0x108 & 0x800000) == 0) {
    return;
  }
  if (*(char *)((longlong)&param_3->_padding_ + 5) != '\0') {
    return;
  }
  if (this->bRequiresShadowProjections != false) {
    return;
  }
  if (!__CsvProfilerStat2417) {
    FCsvProfilerTrace::OutputInlineStatExclusive("RenderShadowProjections");
    __CsvProfilerStat2417 = true;
  }
  FCsvProfiler::BeginExclusiveStat("RenderShadowProjections","CSV_RenderShadowProjections");
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Emerald,"FMobileSceneRenderer_RenderModulatedShadowProjections");
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2418,"FMobileSceneRenderer_RenderModulatedShadowProjections"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowRendering.cpp"
               ,0x972);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2418);
  }
  FVar17 = StatPtr_STAT_ProjectedShadowDrawTime;
  if (StatPtr_STAT_ProjectedShadowDrawTime ==
      (FThreadSafeStaticStat<FStat_STAT_ProjectedShadowDrawTime>)0x0) {
    pFVar16 = ::FName::FName(&local_f8,"STAT_ProjectedShadowDrawTime");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_ProjectedShadowDrawTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProjectedShadowDrawTime,*pFVar16,
                        L"Proj Shadow drawing","STATGROUP_SceneRendering","STATCAT_Advanced",
                        L"Scene Rendering",true,true,ST_int64,true,false,MCR_Invalid);
  }
  bVar8 = false;
  bVar9 = false;
  local_150.ComparisonIndex.Value = 0;
  local_150.Number = 0;
  FVar18 = *(FName *)FVar17;
  bVar11 = false;
  bVar12 = false;
  if ((FVar18.ComparisonIndex.Value.Value != 0) || (FVar18.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_168[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_168[0]._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar8 = false;
      bVar9 = true;
      bVar11 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_160.ComparisonIndex.Value = FVar18.ComparisonIndex.Value.Value;
        local_160.Number = FVar18.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_160,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowRendering.cpp"
                   ,0x973);
        bVar8 = true;
        bVar9 = true;
        bVar11 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_158 = FVar18;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar11 = true;
      goto LAB_1455bfd4e;
    }
  }
  bVar9 = bVar12;
  bVar8 = bVar11;
  bVar11 = false;
  local_158 = local_150;
  FVar18 = local_150;
LAB_1455bfd4e:
  local_110.bIsSet = false;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::Desc._padding_._0_4_ = 0x975;
    local_68 = 0x54bd6300;
    uStack_64 = 1;
    ::Desc._padding_._0_4_ = 0x54bd6300;
    ::Desc._padding_._4_4_ = uStack_6c;
    ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
    ::Desc._padding_._4_4_ = 1;
    ::Desc._padding_ = (longlong)u_ShadowProjectio;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
    ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    ::Desc.TraceGpuSpecId = 0;
    ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(``FMobileSceneRenderer::RenderModulatedShadowProjections'::__l13::<lambda_1>::
           operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&::_TSS0);
  }
  local_f0._Myfirst._Val = &::Desc;
  TOptional<FRHIBreadcrumbScope>::
  Emplace<FRHIComputeCommandList_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_const_*,std::tuple<>_>_>
            (&local_110,(FRHIComputeCommandList *)param_1,&local_f0);
  TSparseArray<FLightSceneInfoCompact,TAlignedSparseArrayAllocator<16,TAlignedHeapAllocator<16>,FDefaultBitArrayAllocator>_>
  ::CreateConstIterator
            ((TSparseArray<FLightSceneInfoCompact,TAlignedSparseArrayAllocator<16,TAlignedHeapAllocator<16>,FDefaultBitArrayAllocator>_>
              *)(*(longlong *)&this->field_0x8 + 0x2a98),(TConstIterator *)&local_138);
  fVar10 = __real_3b800000;
  if (local_130.CurrentBitIndex < (local_130.Array)->NumBits) {
    do {
      this_00 = *(FLightSceneInfo **)
                 ((longlong)local_130.CurrentBitIndex * 0x40 + 0x30 + *local_138);
      pFVar3 = this_00->Proxy;
      local_140 = pFVar3;
      bVar12 = FLightSceneInfo::ShouldRenderLightViewIndependent(this_00);
      if (((bVar12) && (pFVar3 != (FLightSceneProxy *)0x0)) &&
         (pFVar3->bCastModulatedShadows != '\0')) {
        uVar14 = this_00->Id;
        uVar13 = 0;
        if ((int)uVar14 < *(int *)&this->field_0x638) {
          uVar13 = ~uVar14 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar4 = *(longlong *)&this->field_0x630;
        lVar19 = (longlong)(int)uVar14 * 0x60;
        if (0 < *(int *)(lVar19 + 0x18 + lVar4)) {
          (**(code **)(pFVar3->_padding_ + 0xe8))(pFVar3,param_1,param_3,&param_3->ViewRect,0);
          puVar21 = *(undefined8 **)(lVar19 + 0x10 + lVar4);
          iVar2 = *(int *)(lVar19 + 0x18 + lVar4);
          if ((iVar2 < 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar3 = local_140;
          puVar1 = puVar21 + iVar2;
          for (; puVar21 != puVar1; puVar21 = puVar21 + 1) {
            this_01 = (FProjectedShadowInfo *)*puVar21;
            if (this_01->bAllocated != 0) {
              uVar14 = 0;
              if (param_2 < (this_01->FadeAlphas).ArrayNum) {
                uVar14 = (uint)~param_2 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              FVar5 = (this_01->FadeAlphas).AllocatorInstance.SecondaryData;
              FVar20 = (ForElementType<float>)&this_01->FadeAlphas;
              if (FVar5 != (ForElementType<float>)0x0) {
                FVar20 = FVar5;
              }
              if ((fVar10 < *(float *)((longlong)FVar20 + (longlong)param_2 * 4)) &&
                 (((-1 < (char)(this_01->bWholeSceneShadow << 7) ||
                   ((this_01->CascadeSettings).ShadowSplitIndex < 0)) ||
                  (this_01->bDirectionalLight == 0)))) {
                uVar14 = this_01->LightSceneInfo->Id;
                uVar13 = 0;
                if ((int)uVar14 < (param_3->VisibleLightInfos).ArrayNum) {
                  uVar13 = ~uVar14 >> 0x1f;
                }
                if ((uVar13 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pFVar6 = (param_3->VisibleLightInfos).AllocatorInstance.Data;
                uVar13 = this_01->ShadowId;
                uVar15 = 0;
                if ((int)uVar13 < pFVar6[(int)uVar14].ProjectedShadowViewRelevanceMap.ArrayNum) {
                  uVar15 = ~uVar13 >> 0x1f;
                }
                if ((uVar15 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                if (pFVar6[(int)uVar14].ProjectedShadowViewRelevanceMap.AllocatorInstance.Data
                    [(int)uVar13].bShadowRelevance != 0) {
                  local_d8.DrawIndirectArgsBuffer._0_8_ = 0;
                  local_d8.DrawIndirectArgsBuffer._8_4_ = 4;
                  local_d8.InstanceIdOffsetBuffer._0_8_ = 0;
                  local_d8.InstanceIdOffsetBuffer._8_4_ = 8;
                  local_d8.InstanceCulling._0_8_ = 0;
                  local_d8.InstanceCulling._8_1_ = 1;
                  local_d8.Scene._0_8_ = 0;
                  local_d8.Scene._8_1_ = 1;
                  local_d8.BatchedPrimitive._0_8_ = 0;
                  local_d8.BatchedPrimitive._8_1_ = 1;
                  FProjectedShadowInfo::RenderProjectionInternal
                            (this_01,param_1,param_2,param_3,pFVar3,(FSceneRenderer *)this,false,
                             true,&local_d8,(FRHIUniformBuffer *)0x0);
                }
              }
            }
          }
          FRHICommandList::SetScissorRect(param_1,false,0,0,0,0);
        }
      }
      local_130.UnvisitedBitMask = local_130.UnvisitedBitMask & ~local_130._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_130);
      FVar18 = local_158;
    } while (local_130.CurrentBitIndex < (local_130.Array)->NumBits);
  }
  if (local_110.bIsSet != false) {
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_110.TypedValue);
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar11) {
    FThreadStats::AddMessage(FVar18,CycleScopeEnd);
  }
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  FCsvProfiler::EndExclusiveStat("RenderShadowProjections");
  return;
}

// operator() @ 14560bce0

bool __thiscall
`FMobileSceneRenderer::BuildCSMVisibilityState'::__l38::<lambda_10>::operator()
          (void *this,TVector<double> *param_1,TVector<double> *param_2,float param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  double *pdVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  longlong *plVar10;
  double dVar11;
  undefined1 local_res8 [8];
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_110;
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_e0;
  double local_c8;
  double local_c0;
  double local_b8;
  undefined1 local_b0;
  
  bVar9 = BuildCSMVisibilityState'::__l16::<lambda_1>::operator()(*(void **)this,param_1,param_2);
  dVar8 = __real_47eff933c0000000;
  dVar7 = __real_3ff0000000000000;
  if (bVar9) {
    plVar2 = *(longlong **)((longlong)this + 8);
    plVar3 = (longlong *)*plVar2;
    plVar10 = (longlong *)*plVar3;
    lVar6 = plVar3[1];
    plVar1 = plVar10 + (int)lVar6;
    while( true ) {
      if ((int)plVar3[1] != (int)lVar6) {
        `TCheckedPointerIterator<FPrimitiveSceneInfo_const_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (plVar10 == plVar1) goto LAB_14560bf0b;
      pdVar4 = (double *)plVar2[2];
      local_c8 = (param_1->field0_0x0)._s_0.X;
      local_b0 = 1;
      lVar5 = *(longlong *)(*plVar10 + 8);
      dVar11 = (double)*(float *)plVar2[3];
      local_110._s_0.X = dVar11 * *pdVar4;
      local_110._s_0.Z = dVar11 * pdVar4[2];
      local_110._s_0.Y = dVar11 * pdVar4[1];
      local_f8._s_0.X = local_110._s_0.X + (((TVector<double> *)(lVar5 + 400))->field0_0x0)._s_0.X;
      local_f8._s_0.Y = local_110._s_0.Y + *(double *)(lVar5 + 0x198);
      local_f8._s_0.Z = local_110._s_0.Z + *(double *)(lVar5 + 0x1a0);
      local_b8 = (double)(float)*(double *)(lVar5 + 0x1c0);
      dVar11 = local_b8 + (param_2->field0_0x0)._s_0.X;
      local_c0 = local_b8 + (param_2->field0_0x0)._s_0.Y;
      local_b8 = local_b8 + (param_2->field0_0x0)._s_0.Z;
      local_e0._s_0.X = local_c8 - dVar11;
      local_e0._s_0.Y = (param_1->field0_0x0)._s_0.Y - local_c0;
      local_c0 = local_c0 + (param_1->field0_0x0)._s_0.Y;
      local_c8 = local_c8 + dVar11;
      local_e0._s_0.Z = (param_1->field0_0x0)._s_0.Z - local_b8;
      local_b8 = local_b8 + (param_1->field0_0x0)._s_0.Z;
      if (local_110._s_0.X == 0.0) {
        local_128._s_0.X = dVar8;
      }
      else {
        local_128._s_0.X = dVar7 / local_110._s_0.X;
      }
      if (local_110._s_0.Y == 0.0) {
        local_128._s_0.Y = dVar8;
      }
      else {
        local_128._s_0.Y = dVar7 / local_110._s_0.Y;
      }
      if (local_110._s_0.Z == 0.0) {
        local_128._s_0.Z = dVar8;
      }
      else {
        local_128._s_0.Z = dVar7 / local_110._s_0.Z;
      }
      bVar9 = FMath::LineBoxIntersection<double>
                        ((TBox<double> *)&local_e0._s_0,(TVector<double> *)(lVar5 + 400),
                         (TVector<double> *)&local_f8._s_0,(TVector<double> *)&local_110._s_0,
                         (TVector<double> *)&local_128._s_0);
      if (bVar9) break;
      plVar10 = plVar10 + 1;
    }
    bVar9 = true;
  }
  else {
LAB_14560bf0b:
    bVar9 = false;
  }
  return bVar9;
}

// operator() @ 14560e4d0

bool __thiscall
`FMobileSceneRenderer::BuildCSMVisibilityState'::__l16::<lambda_1>::operator()
          (void *this,TVector<double> *param_1,TVector<double> *param_2)

{
  double *pdVar1;
  bool bVar2;
  TVector<double>_u_0 local_28;
  
  bVar2 = FConvexVolume::IntersectBox(*(FConvexVolume **)this,param_1,param_2);
  if (bVar2) {
    pdVar1 = *(double **)((longlong)this + 0x10);
    local_28._s_0.X = (param_1->field0_0x0)._s_0.X + *pdVar1;
    local_28._s_0.Z = pdVar1[2] + (param_1->field0_0x0)._s_0.Z;
    local_28._s_0.Y = pdVar1[1] + (param_1->field0_0x0)._s_0.Y;
    bVar2 = FConvexVolume::IntersectBox
                      (*(FConvexVolume **)((longlong)this + 8),(TVector<double> *)&local_28._s_0,
                       param_2);
    if (bVar2) {
      return true;
    }
  }
  return false;
}

// operator() @ 14560f210

bool __thiscall
`FMobileSceneRenderer::BuildCSMVisibilityState'::__l16::<lambda_3>::operator()
          (void *this,TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,float param_5)

{
  bool bVar1;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_80;
  TVector<double>_u_0 local_68;
  double local_50;
  double local_48;
  double local_40;
  undefined1 local_38;
  
  local_40 = (double)param_5;
  local_48 = local_40 + (param_2->field0_0x0)._s_0.Y;
  local_50 = local_40 + (param_2->field0_0x0)._s_0.X;
  local_40 = local_40 + (param_2->field0_0x0)._s_0.Z;
  local_68._s_0.Y = (param_1->field0_0x0)._s_0.Y - local_48;
  local_48 = local_48 + (param_1->field0_0x0)._s_0.Y;
  local_68._s_0.X = (param_1->field0_0x0)._s_0.X - local_50;
  local_50 = local_50 + (param_1->field0_0x0)._s_0.X;
  local_80._s_0.Y = (param_4->field0_0x0)._s_0.Y - (param_3->field0_0x0)._s_0.Y;
  local_80._s_0.Z = (param_4->field0_0x0)._s_0.Z - (param_3->field0_0x0)._s_0.Z;
  local_68._s_0.Z = (param_1->field0_0x0)._s_0.Z - local_40;
  local_40 = local_40 + (param_1->field0_0x0)._s_0.Z;
  local_80._s_0.X = (param_4->field0_0x0)._s_0.X - (param_3->field0_0x0)._s_0.X;
  local_38 = 1;
  if (local_80._s_0.X == 0.0) {
    local_98._s_0.X = __real_47eff933c0000000;
  }
  else {
    local_98._s_0.X = __real_3ff0000000000000 / local_80._s_0.X;
  }
  if (local_80._s_0.Y == 0.0) {
    local_98._s_0.Y = __real_47eff933c0000000;
  }
  else {
    local_98._s_0.Y = __real_3ff0000000000000 / local_80._s_0.Y;
  }
  if (local_80._s_0.Z == 0.0) {
    local_98._s_0.Z = __real_47eff933c0000000;
  }
  else {
    local_98._s_0.Z = __real_3ff0000000000000 / local_80._s_0.Z;
  }
  bVar1 = FMath::LineBoxIntersection<double>
                    ((TBox<double> *)&local_68._s_0,param_3,param_4,
                     (TVector<double> *)&local_80._s_0,(TVector<double> *)&local_98._s_0);
  return bVar1;
}

// operator() @ 14560ffd0

bool __thiscall
`FMobileSceneRenderer::BuildCSMVisibilityState'::__l30::<lambda_5>::operator()
          (void *this,TVector<double> *param_1,TVector<double> *param_2,float param_3)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  
  bVar1 = BuildCSMVisibilityState'::__l16::<lambda_1>::operator()(*(void **)this,param_1,param_2);
  if (bVar1) {
    fVar3 = (float)*(double *)(*(longlong *)((longlong)this + 0x10) + 0x30) + param_3;
    fVar2 = FMath::PointDistToSegmentSquared
                      (param_1,*(TVector<double> **)((longlong)this + 0x18),
                       *(TVector<double> **)((longlong)this + 0x20));
    if (fVar2 < fVar3 * fVar3) {
      return true;
    }
  }
  return false;
}

// operator() @ 145610060

bool __thiscall
`FMobileSceneRenderer::BuildCSMVisibilityState'::__l32::<lambda_6>::operator()
          (void *this,TVector<double> *param_1,TVector<double> *param_2,float param_3)

{
  bool bVar1;
  
  bVar1 = BuildCSMVisibilityState'::__l16::<lambda_1>::operator()(*(void **)this,param_1,param_2);
  if (bVar1) {
    bVar1 = BuildCSMVisibilityState'::__l16::<lambda_3>::operator()
                      (*(void **)((longlong)this + 8),param_1,param_2,
                       *(TVector<double> **)((longlong)this + 0x18),
                       *(TVector<double> **)((longlong)this + 0x20),
                       (float)*(double *)(*(longlong *)((longlong)this + 0x10) + 0x30));
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// operator() @ 1456100f0

bool __thiscall
`FMobileSceneRenderer::BuildCSMVisibilityState'::__l36::<lambda_8>::operator()
          (void *this,TVector<double> *param_1,TVector<double> *param_2,float param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  double *pdVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  longlong *plVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  undefined1 local_res8 [8];
  TVector<double>_u_0 local_58 [2];
  
  bVar7 = BuildCSMVisibilityState'::__l16::<lambda_1>::operator()(*(void **)this,param_1,param_2);
  if (bVar7) {
    plVar2 = *(longlong **)((longlong)this + 8);
    plVar3 = (longlong *)*plVar2;
    plVar8 = (longlong *)*plVar3;
    lVar6 = plVar3[1];
    plVar1 = plVar8 + (int)lVar6;
    while( true ) {
      if ((int)plVar3[1] != (int)lVar6) {
        `TCheckedPointerIterator<FPrimitiveSceneInfo_const_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (plVar8 == plVar1) goto LAB_1456101dc;
      pdVar4 = (double *)plVar2[2];
      lVar5 = *(longlong *)(*plVar8 + 8);
      dVar10 = (double)*(float *)plVar2[3];
      fVar11 = (float)*(double *)(lVar5 + 0x1c0) + param_3;
      local_58[0]._16_8_ = dVar10 * pdVar4[2] + *(double *)(lVar5 + 0x1a0);
      local_58[0]._8_8_ = dVar10 * pdVar4[1] + *(double *)(lVar5 + 0x198);
      local_58[0]._0_8_ = dVar10 * *pdVar4 + (((TVector<double> *)(lVar5 + 400))->field0_0x0)._s_0.X
      ;
      fVar9 = FMath::PointDistToSegmentSquared
                        (param_1,(TVector<double> *)(lVar5 + 400),
                         (TVector<double> *)&local_58[0]._s_0);
      if (fVar9 < fVar11 * fVar11) break;
      plVar8 = plVar8 + 1;
    }
    bVar7 = true;
  }
  else {
LAB_1456101dc:
    bVar7 = false;
  }
  return bVar7;
}

// BuildCSMVisibilityState @ 14561ed50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FMobileSceneRenderer::BuildCSMVisibilityState(FMobileSceneRenderer *this,FLightSceneInfo *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  FPrimitiveSceneInfo **ppFVar3;
  ulonglong uVar4;
  FVisibleLightViewInfo *pFVar5;
  FLightSceneProxy *pFVar6;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  bool bVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  FColor FVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  TConsoleVariableData<int> *pTVar26;
  TConsoleVariableData<int> *pTVar27;
  bool bVar28;
  bool bVar29;
  char cVar30;
  bool bVar31;
  uint uVar32;
  uint uVar33;
  FName *pFVar34;
  FThreadSafeStaticStat<FStat_STAT_BuildCSMVisibilityState> FVar35;
  TPerspectiveMatrix<double> *pTVar36;
  TMatrix<double> *pTVar37;
  TMatrix<float> *pTVar38;
  TVector<double>_u_0 *pTVar39;
  FThreadSafeStaticStat<FStat_STAT_CSMSubjects> FVar40;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong lVar41;
  int iVar42;
  FPrimitiveSceneInfo **ppFVar43;
  int iVar44;
  FViewInfo *pFVar45;
  FName FVar46;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar47;
  FMobileCSMVisibilityInfo *pFVar48;
  TArray<FPrimitiveSceneInfo_const_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar49;
  FNameEntryId FVar50;
  FViewInfo *pFVar51;
  TArray<FVisibleLightInfo,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *pTVar52
  ;
  uint uVar53;
  uchar auVar54 [8];
  undefined1 auStackY_1b68 [32];
  undefined1 local_1b06;
  <lambda_2> local_1b05;
  <lambda_3> local_1b04 [4];
  FName local_1b00;
  uint local_1af8;
  float local_1af4;
  uint local_1af0;
  uint local_1aec;
  FColor_u_0 local_1ae8 [2];
  FMobileSceneRenderer *local_1ae0;
  TArray<FPrimitiveSceneInfo_const_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *local_1ad8;
  FName local_1ad0;
  FViewInfo *local_1ac8;
  uint local_1ac0;
  uint uStack_1abc;
  FLightSceneInfo *local_1ab8;
  longlong local_1ab0;
  FName local_1aa8;
  <lambda_1> local_1aa0;
  double local_1a88;
  double local_1a80;
  double local_1a78;
  FName local_1a70;
  int local_1a60;
  int local_1a5c;
  FName local_1a58;
  FStatMessage local_1a50;
  TVector<double>_u_0 local_1a40;
  <lambda_8> local_1a28;
  <lambda_10> local_1a18;
  FPrimitiveDrawInterface local_1a08;
  FViewInfo *local_19f8;
  undefined8 *local_19f0;
  undefined8 uStack_19e8;
  undefined8 local_19e0;
  TVector<double>_u_0 local_19d8;
  <lambda_7> local_19c0;
  <lambda_9> local_19a0;
  <lambda_5> local_1978;
  <lambda_6> local_1948;
  FName local_1918;
  FName local_1910;
  TVector<double>_u_0 local_1908;
  double dStack_18f0;
  double local_18e8;
  double dStack_18e0;
  double local_18d8;
  TVector<double>_u_0 local_18d0;
  undefined8 uStack_18b8;
  undefined8 local_18b0;
  undefined8 uStack_18a8;
  undefined8 local_18a0;
  TVector<double>_u_0 local_1898 [2];
  char local_1860;
  double local_1858;
  longlong lStack_1850;
  longlong local_1848;
  longlong lStack_1840;
  longlong local_1838;
  double dStack_1830;
  longlong local_1828;
  longlong lStack_1820;
  longlong local_1818;
  longlong lStack_1810;
  longlong local_1808;
  longlong lStack_1800;
  longlong local_17f8;
  longlong lStack_17f0;
  longlong local_17e8;
  longlong lStack_17e0;
  TMatrix<float> local_17d8;
  TMatrix<double> local_1798;
  TMatrix<double> local_1718;
  undefined1 local_1698 [16];
  undefined1 local_1688 [16];
  undefined1 local_1678 [16];
  undefined1 local_1668 [16];
  undefined1 local_1658 [16];
  undefined1 local_1648 [16];
  undefined1 local_1638 [16];
  undefined1 local_1628 [16];
  FConvexVolume local_1618;
  TMatrix<double> local_1418;
  TMatrix<double> local_1398;
  TPerspectiveMatrix<double> local_1318;
  TMatrix<double> local_1298;
  FProjectedShadowInfo local_1218;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_1b68;
  FVar35 = StatPtr_STAT_BuildCSMVisibilityState;
  local_1ae0 = this;
  local_1ab8 = param_1;
  if (StatPtr_STAT_BuildCSMVisibilityState ==
      (FThreadSafeStaticStat<FStat_STAT_BuildCSMVisibilityState>)0x0) {
    pFVar34 = ::FName::FName(&local_1910,"STAT_BuildCSMVisibilityState");
    FVar35 = (FThreadSafeStaticStat<FStat_STAT_BuildCSMVisibilityState>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BuildCSMVisibilityState,*pFVar34,
                        L"BuildCSMVisibilityState","STATGROUP_InitViews","STATCAT_Advanced",
                        L"Init Views",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar46 = *(FName *)FVar35;
  bVar13 = false;
  bVar14 = false;
  local_1a70.ComparisonIndex.Value = 0;
  local_1a70.Number = 0;
  bVar28 = false;
  bVar29 = false;
  if ((FVar46.ComparisonIndex.Value.Value != 0) || (FVar46.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1ae8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1ae8[0]._s_0,(char *)*(FName *)((longlong)FVar35 + 0x10));
      bVar13 = false;
      bVar14 = true;
      bVar28 = false;
      bVar29 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1ad0.ComparisonIndex.Value = FVar46.ComparisonIndex.Value.Value;
        local_1ad0.Number = FVar46.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1ad0,(wchar_t *)*(FName *)((longlong)FVar35 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowSetupMobile.cpp"
                   ,0x197);
        bVar13 = true;
        bVar14 = true;
        bVar28 = true;
        bVar29 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1b00 = FVar46;
      local_1aa8 = FVar46;
      FThreadStats::AddMessage(FVar46,CycleScopeStart);
      bVar28 = true;
      goto LAB_14561eeec;
    }
  }
  bVar14 = bVar29;
  bVar13 = bVar28;
  bVar28 = false;
  local_1aa8 = local_1a70;
  FVar46 = local_1a70;
LAB_14561eeec:
  pTVar26 = CVarsCsmShaderCullingMethod.Ref;
  bVar29 = IsInParallelRenderingThread();
  if ((!bVar29) &&
     (bVar29 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar29)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar27 = CVarsCsmShaderCullingMethod.Ref;
  local_1af8 = pTVar26->ShadowedValue[1] & 0xf;
  bVar29 = IsInParallelRenderingThread();
  if ((!bVar29) &&
     (bVar29 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar29)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_1af0 = pTVar27->ShadowedValue[1] & 0x10;
  if ((param_1->Proxy->bMovable == '\0') ||
     (bVar29 = FLightSceneInfo::ShouldRenderViewIndependentWholeSceneShadows(param_1), !bVar29)) {
    bVar29 = false;
  }
  else {
    bVar29 = true;
  }
  if ((param_1->Proxy->bCastDynamicShadow != '\0') &&
     (((bVar29 != false ||
       ((param_1->Proxy->bStaticShadowing != '\0' &&
        (cVar30 = (**(code **)(param_1->Proxy->_padding_ + 0xb0))(), cVar30 != '\0')))) &&
      (dVar25 = __real_42a0000000000000, dVar24 = _UNK_150689518,
      dVar23 = ___xmm_00000000000000003ff0000000000000, uVar21 = _UNK_15066df7c,
      uVar20 = _UNK_15066df78, uVar19 = __xmm_80000000000000008000000000000000._4_4_,
      uVar18 = (uint)__xmm_80000000000000008000000000000000, dVar17 = _UNK_15061cbc8,
      dVar16 = ___xmm_3ff00000000000000000000000000000, dVar15 = __real_3ff0000000000000,
      local_1aec = 0, 0 < *(int *)&this->field_0x18)))) {
    pTVar52 = (TArray<FVisibleLightInfo,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
               *)&this->field_0x630;
    local_1ab0 = 0;
    do {
      lVar41 = local_1ab0;
      uVar32 = 0;
      uVar33 = 0;
      if ((int)local_1aec < *(int *)&this->field_0x18) {
        uVar33 = ~local_1aec >> 0x1f;
      }
      if ((uVar33 == 0) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar31)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar45 = (FViewInfo *)(*(longlong *)&this->field_0x10 + lVar41);
      local_1ac8 = pFVar45;
      FProjectedShadowInfo::FProjectedShadowInfo(&local_1218);
      bVar31 = BuildSingleCascadeShadowInfo(pFVar45,pTVar52,param_1,&local_1218);
      FVar22 = FColor::Emerald;
      if (bVar31) {
        if ((this->field_0x110 & 1) != 0) {
          local_1858 = (double)pFVar45->_padding_;
          lStack_1850 = pFVar45->_padding_;
          local_1718.M[0][2] = (double)pFVar45->_padding_;
          local_1718.M[0][3] = (double)pFVar45->_padding_;
          local_1838 = pFVar45->_padding_;
          dStack_1830 = (double)pFVar45->_padding_;
          local_19f0 = (undefined8 *)0x0;
          uStack_19e8 = 0;
          local_1718.M[0][0] = (double)pFVar45->_padding_;
          local_1718.M[0][1] = (double)pFVar45->_padding_;
          local_1718.M[1][0] = (double)pFVar45->_padding_;
          local_1718.M[1][1] = (double)pFVar45->_padding_;
          local_1718.M[2][0] = (double)pFVar45->_padding_;
          local_1718.M[2][1] = (double)pFVar45->_padding_;
          local_1718.M[3][0] = (double)pFVar45->_padding_;
          local_1718.M[3][1] = (double)pFVar45->_padding_;
          local_1718.M[1][2] = (double)pFVar45->_padding_;
          local_1718.M[1][3] = (double)pFVar45->_padding_;
          local_1848 = pFVar45->_padding_;
          lStack_1840 = pFVar45->_padding_;
          local_1718.M[2][2] = (double)pFVar45->_padding_;
          local_1718.M[2][3] = (double)pFVar45->_padding_;
          local_1828 = pFVar45->_padding_;
          lStack_1820 = pFVar45->_padding_;
          local_1718.M[3][2] = (double)pFVar45->_padding_;
          local_1718.M[3][3] = (double)pFVar45->_padding_;
          local_1808 = pFVar45->_padding_;
          lStack_1800 = pFVar45->_padding_;
          local_1818 = pFVar45->_padding_;
          lStack_1810 = pFVar45->_padding_;
          local_17e8 = pFVar45->_padding_;
          lStack_17e0 = pFVar45->_padding_;
          local_17f8 = pFVar45->_padding_;
          lStack_17f0 = pFVar45->_padding_;
          local_1a08._padding_ = (longlong)&___7FViewElementPDI__6B_;
          local_19e0 = 0;
          dVar10 = (dVar15 / local_1858) * dStack_1830;
          dVar11 = (double)local_1218.CascadeSettings.SplitFar;
          dVar12 = (double)local_1218.CascadeSettings.SplitNear;
          local_1a08.View = (FSceneView *)pFVar45;
          local_19f8 = pFVar45;
          dVar9 = atan(dVar15 / local_1858);
          pTVar36 = UE::Math::TPerspectiveMatrix<double>::TPerspectiveMatrix<double>
                              (&local_1318,(double)(float)dVar9,(double)(float)dVar10,dVar15,dVar12,
                               dVar11);
          VectorMatrixMultiply(&local_1418,&local_1718,(TMatrix<double> *)pTVar36);
          pTVar37 = UE::Math::TMatrix<double>::Inverse(&local_1418,&local_1298);
          DrawFrustumWireframe(&local_1a08,pTVar37,FVar22,'\0');
          FVar22 = FColor::Cyan;
          pTVar38 = UE::Math::TMatrix<float>::Inverse
                              (&local_1218.TranslatedWorldToClipInnerMatrix,&local_17d8);
          local_1798.M[3][3] = dVar15;
          dVar10 = (double)pTVar38->M[0][1];
          dVar9 = (double)pTVar38->M[0][3];
          local_1698._8_4_ = SUB84(dVar10,0);
          local_1698._0_8_ = (double)pTVar38->M[0][0];
          local_1698._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
          local_1688._8_4_ = SUB84(dVar9,0);
          local_1688._0_8_ = (double)pTVar38->M[0][2];
          local_1688._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
          dVar9 = (double)pTVar38->M[1][1];
          local_1678._8_4_ = SUB84(dVar9,0);
          local_1678._0_8_ = (double)pTVar38->M[1][0];
          local_1678._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
          dVar10 = (double)pTVar38->M[2][1];
          dVar9 = (double)pTVar38->M[1][3];
          local_1658._8_4_ = SUB84(dVar10,0);
          local_1658._0_8_ = (double)pTVar38->M[2][0];
          local_1658._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
          local_1668._8_4_ = SUB84(dVar9,0);
          local_1668._0_8_ = (double)pTVar38->M[1][2];
          local_1668._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
          dVar10 = (double)pTVar38->M[3][1];
          dVar9 = (double)pTVar38->M[2][3];
          local_1648._8_4_ = SUB84(dVar9,0);
          local_1648._0_8_ = (double)pTVar38->M[2][2];
          local_1648._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
          dVar9 = (double)pTVar38->M[3][3];
          local_1638._8_4_ = SUB84(dVar10,0);
          local_1638._0_8_ = (double)pTVar38->M[3][0];
          local_1638._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
          local_1628._8_4_ = SUB84(dVar9,0);
          local_1628._0_8_ = (double)pTVar38->M[3][2];
          local_1628._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
          local_1798.M[0][2] = 0.0;
          local_1798.M[0][3] = 0.0;
          local_1798.M[1][2] = 0.0;
          local_1798.M[1][3] = 0.0;
          local_1798.M[0][0] = dVar23;
          local_1798.M[0][1] = dVar24;
          local_1798.M[3][0]._0_4_ = local_1218.PreShadowTranslation.field0_0x0._0_4_ ^ uVar18;
          local_1798.M[3][0]._4_4_ = local_1218.PreShadowTranslation.field0_0x0._4_4_ ^ uVar19;
          local_1798.M[3][1]._0_4_ = local_1218.PreShadowTranslation.field0_0x0._8_4_ ^ uVar20;
          local_1798.M[3][1]._4_4_ = local_1218.PreShadowTranslation.field0_0x0._12_4_ ^ uVar21;
          local_1798.M[1][0] = dVar16;
          local_1798.M[1][1] = dVar17;
          local_1798.M[2][0] = 0.0;
          local_1798.M[2][1] = 0.0;
          local_1798.M[3][2] =
               (double)CONCAT44((uint)((ulonglong)local_1218.PreShadowTranslation.field0_0x0._16_8_
                                      >> 0x20) ^ uVar19,
                                SUB84(local_1218.PreShadowTranslation.field0_0x0._s_0.Z,0) ^ uVar18)
          ;
          local_1798.M[2][2] = dVar23;
          local_1798.M[2][3] = dVar24;
          VectorMatrixMultiply(&local_1398,(TMatrix<double> *)local_1698,&local_1798);
          DrawFrustumWireframe(&local_1a08,&local_1398,FVar22,'\0');
          if (local_19f0 != (undefined8 *)0x0) {
            piVar1 = (int *)(local_19f0 + 1);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              (**(code **)*local_19f0)(local_19f0,1);
            }
          }
          local_1a08._padding_ = (longlong)&___7FPrimitiveDrawInterface__6B_;
        }
        uVar33 = param_1->Id;
        pFVar51 = pFVar45;
        if (local_1218.DependentView != (FViewInfo *)0x0) {
          pFVar51 = local_1218.DependentView;
        }
        uVar53 = 0;
        if ((int)uVar33 < (pFVar51->VisibleLightInfos).ArrayNum) {
          uVar53 = ~uVar33 >> 0x1f;
        }
        if ((uVar53 == 0) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar31)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar5 = (pFVar51->VisibleLightInfos).AllocatorInstance.Data;
        pFVar48 = &pFVar45->MobileCSMVisibilityInfo;
        pFVar6 = param_1->Proxy;
        local_1a78 = (pFVar6->WorldToLight).M[2][0];
        local_1a80 = (pFVar6->WorldToLight).M[1][0];
        local_1a88 = (pFVar6->WorldToLight).M[0][0];
        pTVar49 = &pFVar5[(int)uVar33].MobileCSMSubjectPrimitives.ShadowSubjectPrimitives;
        local_1af4 = 8.796093e+12;
        local_1ad8 = pTVar49;
        if ((pFVar5[(int)uVar33].MobileCSMSubjectPrimitives.ShadowSubjectPrimitives.ArrayNum != 0)
           || (local_1af8 < 2)) {
          local_1618.Planes.ArrayMax = 6;
          local_1618.Planes.AllocatorInstance.SecondaryData =
               (ForElementType<UE::Math::TPlane<double>_>)0x0;
          local_1618.Planes.ArrayNum = 0;
          local_1618.PermutedPlanes.AllocatorInstance.SecondaryData =
               (ForElementType<UE::Math::TPlane<double>_>)0x0;
          local_1618.PermutedPlanes.ArrayNum = 0;
          local_1618.PermutedPlanes.ArrayMax = 8;
          GetViewFrustumBounds(&local_1618,(TMatrix<double> *)&pFVar45->_padding_,true);
          pFVar51 = local_1ac8;
          local_1aa0.ViewFrustum = &local_1618;
          local_1aa0.ShadowReceiverFrustum = &local_1218.ReceiverInnerFrustum;
          local_1aa0.PreShadowTranslation = &local_1218.PreShadowTranslation;
          if (local_1af8 == 0) {
            local_1b00.ComparisonIndex.Value = 1;
            uVar33 = (pFVar45->PrimitiveVisibilityMap).NumBits;
            iVar44 = 0;
            iVar42 = 0;
            uVar53 = 0xffffffff;
            uVar32 = 0;
            if (uVar33 != 0) {
              pTVar7 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                        *)(pFVar45->PrimitiveVisibilityMap).AllocatorInstance.SecondaryData.Data;
              pTVar47 = &pFVar45->PrimitiveVisibilityMap;
              if (pTVar7 != (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                             *)0x0) {
                pTVar47 = pTVar7;
              }
              uVar32 = *(uint *)(pTVar47->AllocatorInstance).InlineData;
              while (uVar32 == 0) {
                lVar41 = (longlong)iVar42;
                iVar44 = iVar44 + 0x20;
                iVar42 = iVar42 + 1;
                uVar32 = uVar33;
                if ((int)((uVar33 - 1) + ((int)(uVar33 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar42)
                goto LAB_14561f851;
                uVar32 = *(uint *)((pTVar47->AllocatorInstance).InlineData + lVar41 * 4 + 4);
              }
              local_1b00.Number = 0;
              local_1b00.ComparisonIndex.Value = -uVar32 & uVar32;
              uVar4 = (ulonglong)(-uVar32 & uVar32) * 2 + 1;
              lVar41 = 0x3f;
              if (uVar4 != 0) {
                for (; uVar4 >> lVar41 == 0; lVar41 = lVar41 + -1) {
                }
              }
              local_1a60 = (int)lVar41;
              uVar32 = local_1a60 + -1 + iVar44;
              if ((int)uVar33 < (int)uVar32) {
                uVar32 = uVar33;
              }
            }
LAB_14561f851:
            if ((int)uVar32 < (int)uVar33) {
              do {
                lVar41 = *(longlong *)&local_1ae0->field_0x8;
                uVar33 = 0;
                if ((int)uVar32 < *(int *)(lVar41 + 0x2890)) {
                  uVar33 = ~uVar32 >> 0x1f;
                }
                if ((uVar33 == 0) &&
                   (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar31)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pFVar48 = &pFVar51->MobileCSMVisibilityInfo;
                EnableStaticMeshCSMVisibilityState
                          (bVar29,*(FPrimitiveSceneInfo **)
                                   (*(longlong *)(lVar41 + 0x2888) + (longlong)(int)uVar32 * 8),
                           pFVar48,pFVar51);
                uVar33 = (pFVar45->PrimitiveVisibilityMap).NumBits;
                uVar53 = uVar53 & ~local_1b00.ComparisonIndex.Value;
                pTVar7 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                          *)(pFVar45->PrimitiveVisibilityMap).AllocatorInstance.SecondaryData.Data;
                pTVar47 = &pFVar45->PrimitiveVisibilityMap;
                if (pTVar7 != (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                               *)0x0) {
                  pTVar47 = pTVar7;
                }
                uVar32 = uVar53 & *(uint *)((pTVar47->AllocatorInstance).InlineData +
                                           (longlong)iVar42 * 4);
                while (uVar32 == 0) {
                  lVar41 = (longlong)iVar42;
                  iVar44 = iVar44 + 0x20;
                  iVar42 = iVar42 + 1;
                  uVar32 = uVar33;
                  if ((int)((uVar33 - 1) + ((int)(uVar33 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar42)
                  goto LAB_14561f954;
                  uVar53 = 0xffffffff;
                  uVar32 = *(uint *)((pTVar47->AllocatorInstance).InlineData + lVar41 * 4 + 4);
                }
                local_1b00.ComparisonIndex.Value = -uVar32 & uVar32;
                uVar4 = (ulonglong)(-uVar32 & uVar32) * 2 + 1;
                lVar41 = 0x3f;
                if (uVar4 != 0) {
                  for (; uVar4 >> lVar41 == 0; lVar41 = lVar41 + -1) {
                  }
                }
                local_1a5c = (int)lVar41;
                uVar32 = iVar44 + -1 + local_1a5c;
                if ((int)uVar33 < (int)uVar32) {
                  uVar32 = uVar33;
                }
LAB_14561f954:
              } while ((int)uVar32 < (pFVar45->PrimitiveVisibilityMap).NumBits);
            }
            pFVar48->bMobileDynamicCSMInUse = 1;
            uVar32 = 1;
            pFVar45 = local_1ac8;
            pTVar49 = local_1ad8;
          }
          else if (local_1af8 == 1) {
            bVar31 = MobileDetermineStaticMeshesCSMVisibilityState<_FMobileSceneRenderer::BuildCSMVisibilityState_::__l22::<lambda_4>_>
                               (*(FScene **)&this->field_0x8,pFVar45,&local_1218,&local_1aa0);
            uVar32 = (uint)bVar31;
          }
          else if (local_1af8 == 2) {
            ppFVar43 = (pTVar49->AllocatorInstance).Data;
            local_1860 = '\0';
            iVar42 = pTVar49->ArrayNum;
            ppFVar3 = ppFVar43 + iVar42;
            while( true ) {
              if (pTVar49->ArrayNum != iVar42) {
                local_1b06 = 0;
                `TCheckedPointerIterator<FPrimitiveSceneInfo_const_*_const,int,0>::operator!='::__l2
                ::<lambda_1>::operator()(&local_1b06);
              }
              if (ppFVar43 == ppFVar3) break;
              UE::Math::TBoxSphereBounds<double,double>::Builder::Append
                        ((Builder *)&local_1898[0]._s_0,&(*ppFVar43)->Proxy->Bounds);
              ppFVar43 = ppFVar43 + 1;
            }
            local_18a0 = 0;
            local_18d0._s_0.X = 0.0;
            local_18d0._s_0.Y = 0.0;
            local_18b0 = 0;
            uStack_18a8 = 0;
            pTVar39 = local_1898;
            if (local_1860 == '\0') {
              pTVar39 = &local_18d0;
            }
            local_18d0._s_0.Z = 0.0;
            uStack_18b8 = 0;
            local_19d8._s_0.X = (pTVar39->_s_0).X;
            local_19d8._s_0.Y = (pTVar39->_s_0).Y;
            local_19d8._s_0.Z = (pTVar39->_s_0).Z;
            dStack_18f0 = (&pTVar39->_s_0)[1].X;
            local_18d8 = (&pTVar39->_s_0)[2].X;
            local_18e8 = (&pTVar39->_s_0)[1].Y;
            dStack_18e0 = (&pTVar39->_s_0)[1].Z;
            local_1a40._s_0.X = local_1a88 * dVar25 + local_19d8._s_0.X;
            local_1a40._s_0.Y = local_1a80 * dVar25 + local_19d8._s_0.Y;
            local_1a40._s_0.Z = local_1a78 * dVar25 + local_19d8._s_0.Z;
            local_1908._s_0.X = local_19d8._s_0.X;
            local_1908._s_0.Y = local_19d8._s_0.Y;
            local_1908._s_0.Z = local_19d8._s_0.Z;
            if (local_1af0 == 0) {
              local_1948.IsShadowReceiverCasterVsBox = local_1b04;
              local_1948.CombinedBounds = (TBoxSphereBounds<double,double> *)&local_1908;
              local_1948.CombinedCasterStart = (TVector<double> *)&local_19d8;
              local_1948.CombinedCasterEnd = (TVector<double> *)&local_1a40;
              local_1948.IsShadowReceiver = &local_1aa0;
              bVar31 = MobileDetermineStaticMeshesCSMVisibilityState<_FMobileSceneRenderer::BuildCSMVisibilityState_::__l32::<lambda_6>_>
                                 (*(FScene **)&this->field_0x8,pFVar45,&local_1218,&local_1948);
              uVar32 = (uint)bVar31;
            }
            else {
              local_1978.IsShadowReceiverCasterVsSphere = &local_1b05;
              local_1978.CombinedBounds = (TBoxSphereBounds<double,double> *)&local_1908;
              local_1978.CombinedCasterStart = (TVector<double> *)&local_19d8;
              local_1978.CombinedCasterEnd = (TVector<double> *)&local_1a40;
              local_1978.IsShadowReceiver = &local_1aa0;
              bVar31 = MobileDetermineStaticMeshesCSMVisibilityState<_FMobileSceneRenderer::BuildCSMVisibilityState_::__l30::<lambda_5>_>
                                 (*(FScene **)&this->field_0x8,pFVar45,&local_1218,&local_1978);
              uVar32 = (uint)bVar31;
            }
          }
          else if (local_1af8 == 3) {
            if (local_1af0 == 0) {
              local_19a0.IsShadowReceiverCasterVsBox = local_1b04;
              local_19a0.LightDir = (TVector<double> *)&local_1a88;
              local_19a0.ShadowCastLength = &local_1af4;
              local_1a18.IsShadowReceiver = &local_1aa0;
              local_1a18.IsShadowReceiverAllCastersVsBox = &local_19a0;
              local_19a0.ShadowSubjectPrimitives = pTVar49;
              bVar31 = MobileDetermineStaticMeshesCSMVisibilityState<_FMobileSceneRenderer::BuildCSMVisibilityState_::__l38::<lambda_10>_>
                                 (*(FScene **)&this->field_0x8,pFVar45,&local_1218,&local_1a18);
              uVar32 = (uint)bVar31;
            }
            else {
              local_19c0.IsShadowReceiverCasterVsSphere = &local_1b05;
              local_19c0.LightDir = (TVector<double> *)&local_1a88;
              local_19c0.ShadowCastLength = &local_1af4;
              local_1a28.IsShadowReceiver = &local_1aa0;
              local_1a28.IsShadowReceiverAllCastersVsSphere = &local_19c0;
              local_19c0.ShadowSubjectPrimitives = pTVar49;
              bVar31 = MobileDetermineStaticMeshesCSMVisibilityState<_FMobileSceneRenderer::BuildCSMVisibilityState_::__l36::<lambda_8>_>
                                 (*(FScene **)&this->field_0x8,pFVar45,&local_1218,&local_1a28);
              uVar32 = (uint)bVar31;
            }
          }
          else if (local_1af8 == 4) {
            pFVar48->bMobileDynamicCSMInUse = 0;
          }
          pTVar26 = CVarCsmShaderCullingDebugGfx.Ref;
          bVar31 = IsInParallelRenderingThread();
          if ((!bVar31) &&
             (bVar31 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<6409875433831007955>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                  ,0x6d3,"IsInParallelRenderingThread()"), bVar31)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (pTVar26->ShadowedValue[1] != 0) {
            VisualizeMobileDynamicCSMSubjectCapsules(pFVar45,local_1ab8,&local_1218);
          }
          auVar54 = (uchar  [8])(longlong)pTVar49->ArrayNum;
          if ((auVar54 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
            FVar40 = StatPtr_STAT_CSMSubjects;
            if (StatPtr_STAT_CSMSubjects == (FThreadSafeStaticStat<FStat_STAT_CSMSubjects>)0x0) {
              pFVar34 = ::FName::FName(&local_1918,"STAT_CSMSubjects");
              FVar40 = (FThreadSafeStaticStat<FStat_STAT_CSMSubjects>)
                       FThreadSafeStaticStatBase::DoSetup
                                 ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CSMSubjects,*pFVar34,
                                  L"CSM Subject Primitives","STATGROUP_InitViews","STATCAT_Advanced"
                                  ,L"Init Views",true,true,ST_int64,false,false,MCR_Invalid);
            }
            FVar46 = *(FName *)FVar40;
            FVar50 = FVar46.ComparisonIndex.Value;
            uVar33 = FVar46.Number;
            local_1ac0 = FVar50.Value;
            uStack_1abc = uVar33;
            if (((FVar46 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
               (FThreadStats::TlsSlot != 0xffffffff)) {
              this_00 = TlsGetValue(FThreadStats::TlsSlot);
              if (this_00 == (FThreadStats *)0x0) {
                this_01 = FThreadStatsPool::Get();
                this_00 = FThreadStatsPool::GetFromPool(this_01);
              }
              local_1a50.NameAndInfo.Number = uVar33 & 0xffffafff | 0xa000;
              local_1a58 = FVar46;
              local_1a50.StatData.Pad = auVar54;
              local_1a50.NameAndInfo.Index.Value = FVar50.Value;
              FThreadStats::AddStatMessage(this_00,&local_1a50);
              FStatsTrace::Add(&local_1a58,(long64)auVar54);
              if (this_00->ScopeCount == 0) {
                FThreadStats::Flush(this_00,false,false);
              }
              else if (FThreadStats::bIsRawStatsActive != false) {
                FThreadStats::FlushRawStats(this_00,false,false);
              }
            }
          }
          if (local_1618.PermutedPlanes.AllocatorInstance.SecondaryData !=
              (ForElementType<UE::Math::TPlane<double>_>)0x0) {
            FMemory::Free((void *)local_1618.PermutedPlanes.AllocatorInstance.SecondaryData);
          }
          this = local_1ae0;
          if (local_1618.Planes.AllocatorInstance.SecondaryData !=
              (ForElementType<UE::Math::TPlane<double>_>)0x0) {
            FMemory::Free((void *)local_1618.Planes.AllocatorInstance.SecondaryData);
            this = local_1ae0;
          }
        }
        pFVar48->bMobileDynamicCSMInUse = 0;
        pTVar52 = (TArray<FVisibleLightInfo,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                   *)&this->field_0x630;
        *(uint *)pFVar48 = *(uint *)pFVar48 | uVar32;
        lVar41 = local_1ab0;
        param_1 = local_1ab8;
      }
      FProjectedShadowInfo::~FProjectedShadowInfo(&local_1218);
      local_1ab0 = lVar41 + 0x2970;
      local_1aec = local_1aec + 1;
      FVar46 = local_1aa8;
    } while ((int)local_1aec < *(int *)&this->field_0x18);
  }
  if (bVar14) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar28) {
    FThreadStats::AddMessage(FVar46,CycleScopeEnd);
  }
  return;
}

// InitDynamicShadows @ 145638da0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FDynamicShadowsTaskData * __thiscall
FMobileSceneRenderer::InitDynamicShadows
          (FMobileSceneRenderer *this,FRDGBuilder *param_1,FInstanceCullingManager *param_2)

{
  int iVar1;
  FLightSceneInfo *pFVar2;
  ForElementType<unsigned_int> *pFVar3;
  FLightSceneProxy *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  FStaticShaderPlatform FVar13;
  int iVar14;
  FDynamicShadowsTaskData *pFVar15;
  ForElementType<unsigned_int> *_Dst;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  ForElementType<unsigned_int> *this_00;
  undefined8 *puVar20;
  byte bVar21;
  undefined1 local_res20 [8];
  undefined1 local_86 [2];
  int local_84;
  FDynamicShadowsTaskData *local_80;
  longlong *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_70;
  
  bVar7 = FReadOnlyCVARCache::bMobileEnableMovableLightCSMShaderCulling;
  bVar12 = FReadOnlyCVARCache::bMobileEnableStaticAndCSMShadowReceivers;
  puVar20 = (undefined8 *)(*(longlong *)&this->field_0x8 + 0x2c68);
  pFVar15 = (FDynamicShadowsTaskData *)(*(longlong *)&this->field_0x8 + 0x2c80);
  local_80 = pFVar15;
  if ((FDynamicShadowsTaskData *)puVar20 != pFVar15) {
    do {
      pFVar2 = (FLightSceneInfo *)*puVar20;
      if ((pFVar2 != (FLightSceneInfo *)0x0) &&
         (bVar8 = FLightSceneInfo::ShouldRecordShadowSubjectsForMobile(pFVar2), bVar8)) {
        iVar1 = *(int *)&this->field_0x18;
        lVar19 = *(longlong *)&this->field_0x10;
        local_84 = *(int *)(*(longlong *)&this->field_0x8 + 0x2890);
        lVar18 = (longlong)iVar1 * 0x2970 + lVar19;
        while( true ) {
          if (*(int *)&this->field_0x18 != iVar1) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<FViewInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res20);
          }
          pFVar15 = local_80;
          if (lVar19 == lVar18) break;
          uVar17 = pFVar2->Id;
          uVar16 = 0;
          if ((int)uVar17 < *(int *)(lVar19 + 0x1fa8)) {
            uVar16 = ~uVar17 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            pFVar15 = (FDynamicShadowsTaskData *)(*pcVar5)();
            return pFVar15;
          }
          this_00 = (ForElementType<unsigned_int> *)
                    (*(longlong *)(lVar19 + 0x1fa0) + 0x38 + (longlong)(int)uVar17 * 0x68);
          *(int *)this_00[1].InlineData = local_84;
          uVar17 = local_84 + 0x1fU >> 5;
          if (local_84 + 0x1fU >> 5 != 0) {
            if (*(int *)(this_00[1].InlineData + 4) + 0x1fU >> 5 < uVar17) {
              TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
              ::ForElementType<unsigned_int>::ResizeAllocation(this_00,0,uVar17,4);
              *(uint *)(this_00[1].InlineData + 4) = uVar17 << 5;
            }
            pFVar3 = (ForElementType<unsigned_int> *)(this_00->SecondaryData).Data;
            _Dst = this_00;
            if (pFVar3 != (ForElementType<unsigned_int> *)0x0) {
              _Dst = pFVar3;
            }
            memset(_Dst,0,(ulonglong)uVar17 << 2);
            uVar16 = *(int *)this_00[1].InlineData >> 0x1f & 0x1f;
            uVar17 = *(int *)this_00[1].InlineData + uVar16;
            iVar14 = (uVar17 & 0x1f) - uVar16;
            if (iVar14 != 0) {
              pFVar3 = (ForElementType<unsigned_int> *)(this_00->SecondaryData).Data;
              if (pFVar3 != (ForElementType<unsigned_int> *)0x0) {
                this_00 = pFVar3;
              }
              *(uint *)(this_00->InlineData + (longlong)((int)uVar17 >> 5) * 4) =
                   *(uint *)(this_00->InlineData + (longlong)((int)uVar17 >> 5) * 4) &
                   0xffffffffU >> (0x20U - (char)iVar14 & 0x1f);
            }
          }
          lVar19 = lVar19 + 0x2970;
        }
      }
      puVar20 = puVar20 + 1;
    } while ((FDynamicShadowsTaskData *)puVar20 != pFVar15);
  }
  pFVar15 = FSceneRenderer::BeginInitDynamicShadows
                      ((FSceneRenderer *)this,param_1,false,(IVisibilityTaskData *)0x0,param_2);
  local_80 = pFVar15;
  FSceneRenderer::FinishInitDynamicShadows((FSceneRenderer *)this,param_1,pFVar15);
  FSceneRenderer::FinishDynamicShadowMeshPassSetup((FSceneRenderer *)this,param_1,pFVar15);
  bVar21 = 0;
  FVar13.Platform = FSceneInterface::GetShaderPlatform(*(FSceneInterface **)&this->field_0x8);
  bVar8 = MobileBasePassAlwaysUsesCSM(FVar13);
  if (bVar8) {
    bVar21 = 1;
  }
  else {
    PrepareViewVisibilityLists(this);
    lVar19 = *(longlong *)&this->field_0x8;
    for (puVar20 = (undefined8 *)(lVar19 + 0x2c68); puVar20 != (undefined8 *)(lVar19 + 0x2c80);
        puVar20 = puVar20 + 1) {
      pFVar2 = (FLightSceneInfo *)*puVar20;
      if ((pFVar2 != (FLightSceneInfo *)0x0) &&
         (pFVar4 = pFVar2->Proxy, pFVar4 != (FLightSceneProxy *)0x0)) {
        if ((bVar12) && (cVar9 = (**(code **)(pFVar4->_padding_ + 0xb0))(pFVar4), cVar9 != '\0')) {
          bVar6 = true;
        }
        else {
          bVar6 = false;
        }
        if (((bVar7) && (pFVar4->bMovable != '\0')) &&
           (bVar10 = FLightSceneInfo::ShouldRenderViewIndependentWholeSceneShadows(pFVar2), bVar10))
        {
          bVar10 = true;
        }
        else {
          bVar10 = false;
        }
        if ((bVar21 != 0) ||
           (((!bVar7 && (pFVar4->bMovable != '\0')) &&
            (bVar11 = FLightSceneInfo::ShouldRenderViewIndependentWholeSceneShadows(pFVar2), bVar11)
            ))) {
          bVar21 = 1;
        }
        else {
          bVar21 = 0;
        }
        if ((bVar6) || (bVar10)) {
          BuildCSMVisibilityState(this,pFVar2);
        }
      }
      pFVar15 = local_80;
    }
  }
  iVar1 = *(int *)&this->field_0x18;
  lVar19 = *(longlong *)&this->field_0x10;
  lVar18 = (longlong)iVar1 * 0x2970 + lVar19;
  while( true ) {
    if (*(int *)&this->field_0x18 != iVar1) {
      local_86[0] = 0;
      `TCheckedPointerIterator<FViewInfo,int,0>::operator!='::__l2::<lambda_1>::operator()(local_86)
      ;
    }
    if (lVar19 == lVar18) break;
    uVar17 = ((uint)bVar21 * 2 ^ *(uint *)(lVar19 + 0x22c8)) & 2 ^ *(uint *)(lVar19 + 0x22c8);
    *(uint *)(lVar19 + 0x22c8) = uVar17;
    if (bVar8) {
      *(uint *)(lVar19 + 0x22c8) = uVar17 | 1;
    }
    lVar19 = lVar19 + 0x2970;
  }
  this->bModulatedShadowsInUse = false;
  TSparseArray<FLightSceneInfoCompact,TAlignedSparseArrayAllocator<16,TAlignedHeapAllocator<16>,FDefaultBitArrayAllocator>_>
  ::CreateConstIterator
            ((TSparseArray<FLightSceneInfoCompact,TAlignedSparseArrayAllocator<16,TAlignedHeapAllocator<16>,FDefaultBitArrayAllocator>_>
              *)(*(longlong *)&this->field_0x8 + 0x2a98),(TConstIterator *)&local_78);
  if (local_70.CurrentBitIndex < (local_70.Array)->NumBits) {
    do {
      if (this->bModulatedShadowsInUse != false) {
        return pFVar15;
      }
      uVar17 = *(uint *)(*(longlong *)((longlong)local_70.CurrentBitIndex * 0x40 + 0x30 + *local_78)
                        + 0x34);
      uVar16 = 0;
      if ((int)uVar17 < *(int *)&this->field_0x638) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar5 = (code *)swi(3);
        pFVar15 = (FDynamicShadowsTaskData *)(*pcVar5)();
        return pFVar15;
      }
      this->bModulatedShadowsInUse =
           0 < *(int *)((longlong)(int)uVar17 * 0x60 + 0x18 + *(longlong *)&this->field_0x630);
      local_70.UnvisitedBitMask = local_70.UnvisitedBitMask & ~local_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_70);
    } while (local_70.CurrentBitIndex < (local_70.Array)->NumBits);
  }
  return pFVar15;
}

// RenderVelocityPass @ 14578af30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FMobileSceneRenderer::RenderVelocityPass
          (FMobileSceneRenderer *this,FRHICommandList *param_1,FViewInfo *param_2,
          FInstanceCullingDrawParams *param_3)

{
  int *piVar1;
  FParallelMeshDrawCommandPass *this_00;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FStaticShaderPlatform FVar7;
  uint uVar8;
  atomic<unsigned_int> aVar9;
  FRHIBreadcrumbAllocator *pFVar10;
  FRHIBreadcrumbNode *pFVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_RenderVelocities> FVar13;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FColor_u_0 FVar14;
  FName FVar15;
  FColor_u_0 FVar16;
  FColor_u_0 local_res18;
  uint uStackX_1c;
  FInstanceCullingDrawParams *local_res20;
  FColor_u_0 local_98;
  uint local_94;
  LARGE_INTEGER local_90;
  FStatMessage local_88;
  char *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  TGPUStatWithDrawcallCategory<TRHIGPUStatNameProvider_RenderVelocities> *local_68;
  wchar_t *pwStack_60;
  FName local_58;
  FRHIBreadcrumbScope local_50;
  undefined1 local_40;
  
  local_res20 = param_3;
  if ((*(byte *)(param_2->_padding_ + 100) & 1) != 0) {
    FVar7.Platform = FSceneView::GetShaderPlatform((FSceneView *)param_2);
    bVar5 = PlatformSupportsOpenXRMotionVectors(FVar7);
    if ((bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!(View.Family->EngineShowFlags.StereoMotionVectors && PlatformSupportsOpenXRMotionVectors(View.GetShaderPlatform()))"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VelocityRendering.cpp"
                           ,0x2e6,
                           L"Normal velocity rendering is not supported alongside motion vector rendering. If this is causing problems in your project, disable r.Velocity.DirectlyRenderOpenXRMotionVectors."
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this_00 = (param_2->ParallelMeshDrawCommandPasses).Elements[0xb];
  if (this_00 == (FParallelMeshDrawCommandPass *)0x0) {
    return;
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,"FMobileSceneRenderer_RenderVelocityPass");
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId746,"FMobileSceneRenderer_RenderVelocityPass",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VelocityRendering.cpp"
               ,0x2ea);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId746);
  }
  FVar16.Bits = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    local_78 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VelocityRendering.cpp"
    ;
    local_68 = &GPUStat_RenderVelocities;
    uStack_70 = 0x2eb;
    pwStack_60 = L"MobileRenderVelocityPass";
    ::Desc._padding_._0_4_ = 0x5100e5e0;
    ::Desc._padding_._4_4_ = 1;
    ::Desc._padding_._0_4_ = 0x2eb;
    ::Desc._padding_._4_4_ = uStack_6c;
    ::Desc._padding_._0_4_ = 0x54bd9570;
    ::Desc._padding_._4_4_ = 1;
    ::Desc._padding_._0_4_ = 0x5100eff0;
    ::Desc._padding_._4_4_ = 1;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
    ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    ::Desc.TraceGpuSpecId = 0;
    ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(``FMobileSceneRenderer::RenderVelocityPass'::__l20::<lambda_1>::operator()<>'::__l2::
           _dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar10 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
  pFVar11 = FMemStackBase::Alloc(&pFVar10->Inner,0x50,8);
  pFVar11->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar11->Parent = FRHIBreadcrumbNode::Sentinel;
  pFVar11->ListLink = (FRHIBreadcrumbNode *)0x0;
  (pFVar11->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (pFVar11->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  pFVar11->Data = (FRHIBreadcrumbData *)&::Desc;
  pFVar11->Allocator = pFVar10;
  pFVar11->TraceCpuSpecId = 0;
  pFVar11->TraceCpuMetadataId = 0;
  LOCK();
  UNLOCK();
  uVar8 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar11->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar11->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar11->ID = uVar8;
  pFVar11->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar11[1]._padding_ = (longlong)&::Desc;
  if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
     (bVar6 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar6)) {
    EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      aVar9 = (atomic<unsigned_int>)
              FCpuProfilerTrace::OutputEventType
                        ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                         (char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                         (uint)::Desc._padding_);
      LOCK();
      ::Desc.TraceCpuSpecId = aVar9;
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  }
  pFVar11->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_50,(FRHIComputeCommandList *)param_1,pFVar11);
  local_40 = 1;
  FVar13 = StatPtr_STAT_RenderVelocities;
  if (StatPtr_STAT_RenderVelocities == (FThreadSafeStaticStat<FStat_STAT_RenderVelocities>)0x0) {
    pFVar12 = ::FName::FName(&local_58,"STAT_RenderVelocities");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_RenderVelocities>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RenderVelocities,*pFVar12,
                        L"RenderVelocities","STATGROUP_SceneRendering","STATCAT_Advanced",
                        L"Scene Rendering",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar13;
  bVar6 = false;
  bVar4 = false;
  FVar14.Bits = (uint)FVar15.ComparisonIndex.Value;
  uVar8 = FVar15.Number;
  if ((FVar14.Bits != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar6 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_98.Bits = FVar14.Bits;
        local_94 = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_98._s_0,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VelocityRendering.cpp"
                   ,0x2ee);
        bVar6 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.Bits = FVar14.Bits;
      uStackX_1c = uVar8;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar3 = true;
      FVar16.Bits = FVar14.Bits;
      goto LAB_14578b271;
    }
  }
  bVar3 = false;
  FVar15.ComparisonIndex.Value = 0;
  FVar15.Number = 0;
LAB_14578b271:
  if (__CsvProfilerStat751 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("RenderVelocityPass");
    __CsvProfilerStat751 = true;
  }
  FCsvProfiler::BeginExclusiveStat("RenderVelocityPass","CSV_RenderVelocityPass");
  FSceneRenderer::SetStereoViewport(param_1,param_2,__real_3f800000);
  FParallelMeshDrawCommandPass::Draw(this_00,param_1,local_res20);
  FCsvProfiler::EndExclusiveStat("RenderVelocityPass");
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_88.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      local_88.NameAndInfo.Index.Value = FVar16.Bits;
      QueryPerformanceCounter(&local_90);
      local_88.StatData.Pad[4] = '\0';
      local_88.StatData.Pad[5] = '\0';
      local_88.StatData.Pad[6] = '\0';
      local_88.StatData.Pad[7] = '\0';
      local_88.StatData.Pad[0] = local_90.s.LowPart._0_1_;
      local_88.StatData.Pad[1] = local_90.s.LowPart._1_1_;
      local_88.StatData.Pad[2] = local_90.s.LowPart._2_1_;
      local_88.StatData.Pad[3] = local_90.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_88);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_50);
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// ShouldRenderVelocities @ 14578f420

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

bool __thiscall FMobileSceneRenderer::ShouldRenderVelocities(FMobileSceneRenderer *this)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  EDebugViewShaderMode EVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  bVar4 = FVelocityRendering::IsVelocityPassSupported(*(EShaderPlatform *)&this->field_0xadc);
  if (((!bVar4) ||
      (EVar6 = FSceneViewFamily::GetDebugViewShaderMode((FSceneViewFamily *)&this->field_0xb8),
      EVar6 != DVSM_None)) ||
     (bVar4 = PlatformSupportsVelocityRendering
                        ((FStaticShaderPlatform)*(EShaderPlatform *)&this->field_0xadc), !bVar4)) {
    return false;
  }
  bVar4 = false;
  uVar8 = 0;
  if (0 < *(int *)&this->field_0x18) {
    lVar9 = 0;
    do {
      if (bVar4) {
        return true;
      }
      uVar7 = 0;
      if ((int)uVar8 < *(int *)&this->field_0x18) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      lVar2 = *(longlong *)&this->field_0x10;
      iVar1 = *(int *)(lVar2 + 0x1b90 + lVar9);
      if ((iVar1 == 2) || (iVar1 == 4)) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (((*(longlong *)(*(longlong *)(lVar2 + 8 + lVar9) + 0x188) == 0) && (!bVar4)) ||
         (*(char *)(lVar2 + 0x11cc + lVar9) != '\0')) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x2970;
    } while ((int)uVar8 < *(int *)&this->field_0x18);
  }
  return bVar4;
}

