// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// FContext @ 1456dc4d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FContext * __thiscall
StochasticLighting::FContext::FContext
          (FContext *this,FRDGBuilder *param_1,FMinimalSceneTextures *param_2,
          FLumenFrontLayerTranslucencyGBufferParameters *param_3,EMaterialSource param_4)

{
  this->MaterialSource = param_4;
  this->DepthHistoryUAV = (FRDGTextureUAV *)0x0;
  this->NormalHistoryUAV = (FRDGTextureUAV *)0x0;
  this->DownsampledSceneDepth2x1UAV = (FRDGTextureUAV *)0x0;
  this->DownsampledWorldNormal2x1UAV = (FRDGTextureUAV *)0x0;
  this->DownsampledSceneDepth2x2UAV = (FRDGTextureUAV *)0x0;
  this->DownsampledWorldNormal2x2UAV = (FRDGTextureUAV *)0x0;
  this->LumenTileBitmaskUAV = (FRDGTextureUAV *)0x0;
  this->MegaLightsTileBitmaskUAV = (FRDGTextureUAV *)0x0;
  this->EncodedReprojectionVectorUAV = (FRDGTextureUAV *)0x0;
  this->LumenPackedPixelDataUAV = (FRDGTextureUAV *)0x0;
  this->MegaLightsPackedPixelDataUAV = (FRDGTextureUAV *)0x0;
  this->GraphBuilder = param_1;
  this->SceneTextures = param_2;
  this->FrontLayerTranslucencyGBuffer = param_3;
  return this;
}

// Run @ 145720160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
StochasticLighting::FContext::Run
          (FContext *this,FViewInfo *param_1,EReflectionsMethod param_2,FRunConfig *param_3)

{
  ERDGPassFlags EVar1;
  EMaterialSource EVar2;
  FSceneViewState *pFVar3;
  undefined8 uVar4;
  TRDGUniformBuffer<FSceneTextureUniformParameters> *pTVar5;
  TRDGUniformBuffer<FSubstrateGlobalUniformParameters> *pTVar6;
  TRDGUniformBuffer<FForwardLightUniformParameters> *pTVar7;
  FSubstrateViewData *pFVar8;
  FRDGBuffer *pFVar9;
  FRDGBuilder *pFVar10;
  code *pcVar11;
  uint uVar12;
  FRDGTextureSRV *pFVar13;
  FRDGTexture *pFVar14;
  TIntPoint<int>_u_0 TVar15;
  TIntPoint<int>_u_0 TVar16;
  TIntPoint<int>_u_0 TVar17;
  TIntPoint<int>_u_0 TVar18;
  TConsoleVariableData<int> *pTVar19;
  undefined3 uVar20;
  undefined3 uVar21;
  undefined3 uVar22;
  undefined7 uVar23;
  FRHITexture *pFVar24;
  bool bVar25;
  bool bVar26;
  undefined1 uVar27;
  EShaderPlatform EVar28;
  int iVar29;
  FParameters *pFVar30;
  FShaderParametersMetadata *pFVar31;
  FSceneTextureParameters *pFVar32;
  TRDGUniformBuffer<FHairStrandsViewUniformParameters> *pTVar33;
  FRDGEventName *pFVar34;
  longlong *plVar35;
  EUniformBufferBindingFlags EVar36;
  uchar *puVar37;
  uint uVar38;
  char cVar39;
  char cVar40;
  longlong lVar41;
  int iVar42;
  uint uVar43;
  undefined1 uVar44;
  uint uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined1 auStackY_2e8 [32];
  undefined4 uStack_290;
  undefined4 uStack_28c;
  FRDGTexture *local_288;
  FRDGTexture *local_278;
  undefined1 local_268;
  char cStack_25c;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  FRDGTexture *local_230;
  undefined1 local_218 [12];
  uint uStack_20c;
  undefined1 auStack_208 [12];
  bool bStack_1fc;
  undefined3 uStack_1fb;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  int iStack_1dc;
  int local_1d8;
  int iStack_1d4;
  int local_1d0;
  int iStack_1cc;
  int local_1c8;
  int iStack_1c4;
  FRunConfig *local_1c0;
  TIntVector3<int>_u_0 local_1b8;
  FViewInfo *local_1a8;
  TShaderRefBase<FStochasticLightingTileClassificationMarkCS,FShaderMapPointerTable> local_1a0;
  FRDGEventName local_190;
  FRDGEventName local_178;
  FBlueNoise local_158;
  FSceneTextureParameters local_128;
  undefined1 local_d8 [40];
  longlong *local_b0;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  local_1c0 = param_3;
  local_1a8 = param_1;
  Validate(this,param_3);
  GetBlueNoiseGlobalParameters(&local_158);
  CreateUniformBufferImmediate<FBlueNoise>
            ((FBlueNoise *)local_218,(EUniformBufferUsage)&local_158,None);
  pFVar3 = param_1->ViewState;
  uVar43 = 0;
  fVar48 = 0.0;
  fVar49 = 0.0;
  fVar50 = 0.0;
  fVar51 = 0.0;
  local_278 = (FRDGTexture *)0x0;
  fVar52 = 0.0;
  fVar53 = 0.0;
  fVar54 = 0.0;
  fVar55 = 0.0;
  local_288 = (FRDGTexture *)0x0;
  fVar56 = 0.0;
  fVar57 = 0.0;
  fVar58 = 0.0;
  fVar59 = 0.0;
  local_230 = (FRDGTexture *)0x0;
  uVar46 = ___xmm_00000000000000003f8000003f800000;
  uVar47 = _UNK_150dcddc8;
  if (pFVar3 != (FSceneViewState *)0x0) {
    lVar41 = 0x2390;
    if (this->MaterialSource != HairStrands) {
      lVar41 = 0x22c0;
    }
    if ((*(char *)((longlong)&param_1->_padding_ + 4) == '\0') &&
       (param_1->bPrevTransformsReset == 0)) {
      uVar46 = *(undefined8 *)
                &(pFVar3->StochasticLighting).HistoryScreenPositionScaleBias.field0_0x0;
      uVar47 = *(undefined8 *)
                ((longlong)&(pFVar3->StochasticLighting).HistoryScreenPositionScaleBias.field0_0x0 +
                8);
      fVar48 = (pFVar3->StochasticLighting).HistoryUVMinMax.field0_0x0._s_0.X;
      fVar49 = (pFVar3->StochasticLighting).HistoryUVMinMax.field0_0x0._s_0.Y;
      fVar50 = (pFVar3->StochasticLighting).HistoryUVMinMax.field0_0x0._s_0.Z;
      fVar51 = (pFVar3->StochasticLighting).HistoryUVMinMax.field0_0x0._s_0.W;
      fVar52 = (pFVar3->StochasticLighting).HistoryGatherUVMinMax.field0_0x0._s_0.X;
      fVar53 = (pFVar3->StochasticLighting).HistoryGatherUVMinMax.field0_0x0._s_0.Y;
      fVar54 = (pFVar3->StochasticLighting).HistoryGatherUVMinMax.field0_0x0._s_0.Z;
      fVar55 = (pFVar3->StochasticLighting).HistoryGatherUVMinMax.field0_0x0._s_0.W;
      fVar56 = (pFVar3->StochasticLighting).HistoryBufferSizeAndInvSize.field0_0x0._s_0.X;
      fVar57 = (pFVar3->StochasticLighting).HistoryBufferSizeAndInvSize.field0_0x0._s_0.Y;
      fVar58 = (pFVar3->StochasticLighting).HistoryBufferSizeAndInvSize.field0_0x0._s_0.Z;
      fVar59 = (pFVar3->StochasticLighting).HistoryBufferSizeAndInvSize.field0_0x0._s_0.W;
      if (this->MaterialSource == HairStrands) {
        puVar37 = (pFVar3->ShadowOcclusionQueryMaps).AllocatorInstance.InlineData + lVar41 + 8;
        if (*(longlong *)puVar37 != 0) {
          local_278 = FRDGBuilder::RegisterExternalTexture
                                (this->GraphBuilder,(TRefCountPtr<IPooledRenderTarget> *)puVar37,
                                 None);
        }
        puVar37 = (pFVar3->ShadowOcclusionQueryMaps).AllocatorInstance.InlineData + lVar41 + 0x10;
        if (*(longlong *)puVar37 != 0) {
          local_288 = FRDGBuilder::RegisterExternalTexture
                                (this->GraphBuilder,(TRefCountPtr<IPooledRenderTarget> *)puVar37,
                                 None);
        }
      }
      else {
        if ((pFVar3->StochasticLighting).SceneDepthHistory.Reference != (IPooledRenderTarget *)0x0)
        {
          local_278 = FRDGBuilder::RegisterExternalTexture
                                (this->GraphBuilder,&(pFVar3->StochasticLighting).SceneDepthHistory,
                                 None);
        }
        if ((pFVar3->StochasticLighting).SceneNormalHistory.Reference != (IPooledRenderTarget *)0x0)
        {
          local_288 = FRDGBuilder::RegisterExternalTexture
                                (this->GraphBuilder,&(pFVar3->StochasticLighting).SceneNormalHistory
                                 ,None);
        }
      }
      puVar37 = (pFVar3->ShadowOcclusionQueryMaps).AllocatorInstance.InlineData + lVar41 + -0x28;
      if (*(longlong *)puVar37 != 0) {
        local_230 = FRDGBuilder::RegisterExternalTexture
                              (this->GraphBuilder,(TRefCountPtr<IPooledRenderTarget> *)puVar37,None)
        ;
      }
    }
  }
  if ((param_3->bTileClassifySubstrate == false) || (this->MaterialSource != GBuffer)) {
    cVar39 = '\0';
  }
  else {
    cVar39 = '\x01';
  }
  if (((param_3->bReprojectLumen == false) ||
      (bVar25 = LumenScreenProbeGather::UseRejectBasedOnNormal(), !bVar25)) ||
     (local_288 == (FRDGTexture *)0x0)) {
    uVar44 = 0;
  }
  else {
    uVar44 = 1;
  }
  uVar4 = *(undefined8 *)&(param_1->ViewRect).field0_0x0;
  iVar29 = (int)uVar4;
  iVar42 = *(int *)((longlong)&(param_1->ViewRect).field0_0x0 + 8) - iVar29;
  iStack_1dc = (int)((ulonglong)uVar4 >> 0x20);
  iStack_1d4 = *(int *)((longlong)&(param_1->ViewRect).field0_0x0 + 0xc) - iStack_1dc;
  local_1e0 = (iVar29 + 1) / 2;
  local_1d8 = (iVar42 + 1) / 2;
  iStack_1cc = (iStack_1dc + 1) / 2;
  local_1c8 = (iVar42 + 1) / 2;
  iStack_1c4 = (iStack_1d4 + 1) / 2;
  local_1d0 = local_1e0;
  bVar25 = LumenScreenProbeGather::IsUsingDownsampledDepthAndNormal(param_1);
  if (param_3->bTileClassifyMegaLights != false) {
    FSceneView::GetShaderPlatform((FSceneView *)param_1);
    MegaLights::GetDownsampleFactorXY
              ((EMaterialSource)&local_1e8,(EShaderPlatform)this->MaterialSource);
    if (local_1e8 == 2) {
      uVar43 = (local_1e4 == 2) + 1;
    }
  }
  pTVar19 = CVarStochasticLightingFixedStateFrameIndex.Ref;
  pFVar3 = param_1->ViewState;
  bVar26 = IsInParallelRenderingThread();
  if ((!bVar26) &&
     (bVar26 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar26)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  uVar45 = pTVar19->ShadowedValue[1];
  if ((pTVar19->ShadowedValue[1] < 0) && (uVar45 = 0, pFVar3 != (FSceneViewState *)0x0)) {
    uVar45 = pFVar3->FrameIndex;
  }
  uVar12 = param_3->StateFrameIndexOverride;
  if (param_3->StateFrameIndexOverride < 0) {
    uVar12 = uVar45;
  }
  bVar26 = param_3->bDownsampleDepthAndNormal2x1 != false;
  uVar45 = 2;
  if (bVar26) {
    uVar45 = 3;
  }
  uVar38 = (uint)bVar26;
  if (param_3->bDownsampleDepthAndNormal2x2 != false) {
    uVar38 = uVar45;
  }
  if ((param_3->bReprojectLumen != false) || (param_3->bReprojectMegaLights != false)) {
    if (local_278 == (FRDGTexture *)0x0) {
      local_278 = FRDGBuilder::RegisterExternalTexture
                            (this->GraphBuilder,
                             (TRefCountPtr<IPooledRenderTarget> *)&GSystemTextures.field_0xa8,
                             L"DepthDummy",SkipTracking);
      local_288 = FRDGBuilder::RegisterExternalTexture
                            (this->GraphBuilder,
                             (TRefCountPtr<IPooledRenderTarget> *)&GSystemTextures.field_0x28,
                             L"BlackDummy",SkipTracking);
    }
    if ((param_3->bReprojectMegaLights != false) && (local_230 == (FRDGTexture *)0x0)) {
      local_230 = FRDGBuilder::RegisterExternalTexture
                            (this->GraphBuilder,
                             (TRefCountPtr<IPooledRenderTarget> *)&GSystemTextures.field_0x28,
                             L"BlackDummy",SkipTracking);
    }
  }
  bStack_1fc = param_3->bReprojectLumen;
  stack0xfffffffffffffe00 = CONCAT71(stack0xfffffffffffffe01,cVar39);
  cVar40 = param_3->bSubstrateOverflow;
  uStack_1f8._0_5_ = CONCAT14(uVar44,(undefined4)uStack_1f8);
  EVar2 = this->MaterialSource;
  local_1f0._0_5_ = CONCAT14(cVar40,EVar2);
  uStack_20c = uVar38;
  auStack_208[0] = param_3->bTileClassifyLumen;
  uStack_1f8._0_1_ = param_3->bReprojectMegaLights;
  local_218[8] = param_3->bCopyDepthAndNormal;
  auStack_208[4] = param_3->bTileClassifyMegaLights;
  EVar28 = FSceneView::GetShaderPlatform((FSceneView *)param_1);
  pFVar24 = local_1f0;
  uVar23 = uStack_1f8._1_7_;
  uVar27 = (undefined1)uStack_1f8;
  local_258 = stack0xfffffffffffffe00;
  uVar22 = auStack_208._5_3_;
  cStack_25c = auStack_208[4];
  uVar21 = auStack_208._1_3_;
  uVar44 = auStack_208[0];
  uVar45 = uStack_20c;
  uVar20 = local_218._9_3_;
  local_268 = local_218[8];
  local_248 = local_1f0;
  bVar26 = Substrate::IsSubstrateEnabled();
  if (bVar26) {
    bVar26 = Substrate::IsSubstrateBlendableGBufferEnabled(EVar28);
    if (!bVar26) goto LAB_145720588;
  }
  else {
    local_248._5_3_ = (undefined3)((ulonglong)pFVar24 >> 0x28);
    local_248._0_4_ = (uint)pFVar24;
    local_248._0_5_ = (uint5)(uint)local_248;
    cVar40 = '\0';
LAB_145720588:
    local_258 = local_258 & 0xffffffffffffff00;
  }
  if (uVar38 == 3) {
    local_248 = (FRHITexture *)((ulonglong)local_248 & 0xffffffff00000000);
LAB_145720596:
    if (cVar40 != '\0') {
      local_268 = 0;
      cStack_25c = '\0';
      uVar45 = 0;
    }
LAB_1457205ec:
    if (uVar44 != '\0') goto LAB_145720601;
  }
  else {
    if (EVar2 == GBuffer) goto LAB_145720596;
    local_248._0_5_ = (uint5)(uint)local_248;
    if (EVar2 != HairStrands) {
      local_268 = 0;
      uVar45 = 0;
      cStack_25c = '\0';
      local_258._0_5_ = (uint5)(uint)local_258;
      goto LAB_1457205ec;
    }
    uVar44 = '\0';
  }
  local_258._0_5_ = (uint5)(uint)local_258;
LAB_145720601:
  if (cStack_25c == '\0') {
    uVar27 = 0;
  }
  local_1f0 = local_248;
  uStack_250 = (FRHITexture *)CONCAT71(uVar23,uVar27);
  uVar4 = uStack_250;
  uStack_250._4_1_ = (undefined1)((uint7)uVar23 >> 0x18);
  if (local_258._4_1_ == '\0') {
    uStack_250._4_1_ = 0;
  }
  uStack_250._5_3_ = (undefined3)((uint7)uVar23 >> 0x20);
  uStack_250._0_4_ = (undefined4)uVar4;
  stack0xfffffffffffffe00 = local_258;
  uStack_1f8 = uStack_250;
  uStack_20c = uVar45;
  auStack_208[0] = uVar44;
  auStack_208._1_3_ = uVar21;
  local_218[8] = local_268;
  local_218._9_3_ = uVar20;
  auStack_208[4] = cStack_25c;
  auStack_208._5_3_ = uVar22;
  FGlobalShaderMap::GetShader<FStochasticLightingTileClassificationMarkCS>
            (param_1->ShaderMap,&local_1a0,
             (TShaderPermutationDomain<FStochasticLightingTileClassificationMarkCS::FCopyDepthAndNormal,FStochasticLightingTileClassificationMarkCS::FStochasticSampleOffset,FStochasticLightingTileClassificationMarkCS::FTileClassifyLumen,FStochasticLightingTileClassificationMarkCS::FTileClassifyMegaLights,FStochasticLightingTileClassificationMarkCS::FTileClassifySubstrate,FStochasticLightingTileClassificationMarkCS::FReprojectLumen,FStochasticLightingTileClassificationMarkCS::FReprojectMegaLights,FStochasticLightingTileClassificationMarkCS::FHistoryRejectBasedOnNormal,FStochasticLightingTileClassificationMarkCS::FMaterialSource,FStochasticLightingTileClassificationMarkCS::FOverflowTile>
              *)(local_218 + 8));
  pFVar30 = FRDGAllocator::Alloc<FStochasticLightingTileClassificationMarkCS::FParameters>
                      ((FRDGAllocator *)&this->GraphBuilder->_padding_);
  pFVar31 = FViewUniformShaderParameters::GetStructMetadata();
  EVar36 = Static;
  if (pFVar31->BindingFlags != StaticAndShader) {
    EVar36 = pFVar31->BindingFlags;
  }
  uStack_290 = CONCAT31(uStack_290._1_3_,EVar36);
  *(longlong *)&pFVar30->View = param_1->_padding_;
  *(ulonglong *)&(pFVar30->View).field_0x8 = CONCAT44(uStack_28c,uStack_290);
  pFVar32 = GetSceneTextureParameters
                      (&local_128,this->GraphBuilder,this->SceneTextures->UniformBuffer);
  pFVar13 = pFVar32->SceneStencilTexture;
  (pFVar30->SceneTextures).SceneDepthTexture = pFVar32->SceneDepthTexture;
  (pFVar30->SceneTextures).SceneStencilTexture = pFVar13;
  pFVar14 = pFVar32->GBufferBTexture;
  (pFVar30->SceneTextures).GBufferATexture = pFVar32->GBufferATexture;
  (pFVar30->SceneTextures).GBufferBTexture = pFVar14;
  pFVar14 = pFVar32->GBufferDTexture;
  (pFVar30->SceneTextures).GBufferCTexture = pFVar32->GBufferCTexture;
  (pFVar30->SceneTextures).GBufferDTexture = pFVar14;
  pFVar14 = pFVar32->GBufferFTexture;
  (pFVar30->SceneTextures).GBufferETexture = pFVar32->GBufferETexture;
  (pFVar30->SceneTextures).GBufferFTexture = pFVar14;
  pFVar14 = pFVar32->GBufferSGGXTexture;
  (pFVar30->SceneTextures).GBufferVelocityTexture = pFVar32->GBufferVelocityTexture;
  (pFVar30->SceneTextures).GBufferSGGXTexture = pFVar14;
  pTVar5 = this->SceneTextures->UniformBuffer;
  pFVar31 = FSceneTextureUniformParameters::GetStructMetadata();
  EVar36 = Static;
  if (pFVar31->BindingFlags != StaticAndShader) {
    EVar36 = pFVar31->BindingFlags;
  }
  uStack_290 = CONCAT31(uStack_290._1_3_,EVar36);
  *(TRDGUniformBuffer<FSceneTextureUniformParameters> **)&pFVar30->SceneTexturesStruct = pTVar5;
  *(ulonglong *)&(pFVar30->SceneTexturesStruct).field_0x8 = CONCAT44(uStack_28c,uStack_290);
  pFVar14 = this->FrontLayerTranslucencyGBuffer->FrontLayerTranslucencySceneDepth;
  (pFVar30->FrontLayerTranslucencyGBufferParameters).FrontLayerTranslucencyNormal =
       this->FrontLayerTranslucencyGBuffer->FrontLayerTranslucencyNormal;
  (pFVar30->FrontLayerTranslucencyGBufferParameters).FrontLayerTranslucencySceneDepth = pFVar14;
  if (((param_1->SubstrateViewData->SubstrateGlobalUniformParameters ==
        (TRDGUniformBuffer<FSubstrateGlobalUniformParameters> *)0x0) &&
      (bVar26 = Substrate::IsSubstrateEnabled(), bVar26)) &&
     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("View.SubstrateViewData.SubstrateGlobalUniformParameters != nullptr || !IsSubstrateEnabled()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Substrate\\Substrate.cpp"
                          ,0x34e,L""), bVar26)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pTVar6 = param_1->SubstrateViewData->SubstrateGlobalUniformParameters;
  pFVar31 = FSubstrateGlobalUniformParameters::GetStructMetadata();
  EVar36 = Static;
  if (pFVar31->BindingFlags != StaticAndShader) {
    EVar36 = pFVar31->BindingFlags;
  }
  uStack_290 = CONCAT31(uStack_290._1_3_,EVar36);
  pFVar30->DepthHistoryTexture = local_278;
  pFVar30->NormalAndShadingInfoHistory = local_288;
  pFVar30->MegaLightsNumFramesAccumulatedHistory = local_230;
  *(TRDGUniformBuffer<FSubstrateGlobalUniformParameters> **)&pFVar30->Substrate = pTVar6;
  *(ulonglong *)&(pFVar30->Substrate).field_0x8 = CONCAT44(uStack_28c,uStack_290);
  pFVar30->RWDepthTexture = this->DepthHistoryUAV;
  pFVar30->RWNormalTexture = this->NormalHistoryUAV;
  pFVar30->RWDownsampledSceneDepth2x1 = this->DownsampledSceneDepth2x1UAV;
  pFVar30->RWDownsampledSceneDepth2x2 = this->DownsampledSceneDepth2x2UAV;
  pFVar30->RWDownsampledWorldNormal2x1 = this->DownsampledWorldNormal2x1UAV;
  pFVar30->RWDownsampledWorldNormal2x2 = this->DownsampledWorldNormal2x2UAV;
  pFVar30->RWLumenTileBitmask = this->LumenTileBitmaskUAV;
  pFVar30->RWMegaLightsTileBitmask = this->MegaLightsTileBitmaskUAV;
  pFVar30->RWEncodedReprojectionVector = this->EncodedReprojectionVectorUAV;
  pFVar30->RWLumenPackedPixelData = this->LumenPackedPixelDataUAV;
  pFVar30->RWMegaLightsPackedPixelData = this->MegaLightsPackedPixelDataUAV;
  LumenScreenProbeGather::SetupTileClassifyParameters
            (param_1,&pFVar30->ScreenProbeGatherTileClassifyParameters);
  LumenReflections::SetupCompositeParameters
            (param_1,param_2,&pFVar30->ReflectionsCompositeParameters);
  MegaLights::SetupTileClassifyParameters(param_1,&pFVar30->MegaLightsTileClassifyParameters);
  EVar2 = this->MaterialSource;
  *(undefined8 *)&(pFVar30->HistoryScreenPositionScaleBias).field0_0x0 = uVar46;
  *(undefined8 *)((longlong)&(pFVar30->HistoryScreenPositionScaleBias).field0_0x0 + 8) = uVar47;
  uVar45 = 0;
  if (EVar2 == FrontLayerGBuffer) {
    uVar45 = 2;
  }
  pFVar30->MegaLightsStochasticSampleMode = uVar43;
  pFVar30->ReflectionPass = uVar45;
  TVar15._s_0.Y = iStack_1dc;
  TVar15._s_0.X = local_1e0;
  (pFVar30->DownsampledViewMin2x1).field0_0x0 = TVar15;
  TVar16._s_0.Y = iStack_1d4;
  TVar16._s_0.X = local_1d8;
  (pFVar30->DownsampledViewSize2x1).field0_0x0 = TVar16;
  TVar17._s_0.Y = iStack_1cc;
  TVar17._s_0.X = local_1d0;
  (pFVar30->DownsampledViewMin2x2).field0_0x0 = TVar17;
  TVar18._s_0.Y = iStack_1c4;
  TVar18._s_0.X = local_1c8;
  (pFVar30->DownsampledViewSize2x2).field0_0x0 = TVar18;
  pFVar30->LumenStochasticSampleMode = (uint)bVar25 * 2;
  pFVar30->StochasticLightingStateFrameIndex = uVar12;
  (pFVar30->HistoryUVMinMax).field0_0x0._s_0.X = fVar48;
  (pFVar30->HistoryUVMinMax).field0_0x0._s_0.Y = fVar49;
  (pFVar30->HistoryUVMinMax).field0_0x0._s_0.Z = fVar50;
  (pFVar30->HistoryUVMinMax).field0_0x0._s_0.W = fVar51;
  (pFVar30->HistoryGatherUVMinMax).field0_0x0._s_0.X = fVar52;
  (pFVar30->HistoryGatherUVMinMax).field0_0x0._s_0.Y = fVar53;
  (pFVar30->HistoryGatherUVMinMax).field0_0x0._s_0.Z = fVar54;
  (pFVar30->HistoryGatherUVMinMax).field0_0x0._s_0.W = fVar55;
  (pFVar30->HistoryBufferSizeAndInvSize).field0_0x0._s_0.X = fVar56;
  (pFVar30->HistoryBufferSizeAndInvSize).field0_0x0._s_0.Y = fVar57;
  (pFVar30->HistoryBufferSizeAndInvSize).field0_0x0._s_0.Z = fVar58;
  (pFVar30->HistoryBufferSizeAndInvSize).field0_0x0._s_0.W = fVar59;
  pTVar7 = (param_1->ForwardLightingResources).ForwardLightUniformBuffer;
  pFVar31 = FForwardLightUniformParameters::GetStructMetadata();
  EVar36 = Static;
  if (pFVar31->BindingFlags != StaticAndShader) {
    EVar36 = pFVar31->BindingFlags;
  }
  uStack_290 = CONCAT31(uStack_290._1_3_,EVar36);
  *(TRDGUniformBuffer<FForwardLightUniformParameters> **)&pFVar30->ForwardLightStruct = pTVar7;
  *(ulonglong *)&(pFVar30->ForwardLightStruct).field_0x8 = CONCAT44(uStack_28c,uStack_290);
  pTVar33 = HairStrands::BindHairStrandsViewUniformParameters(param_1);
  pFVar31 = FHairStrandsViewUniformParameters::GetStructMetadata();
  EVar36 = Static;
  if (pFVar31->BindingFlags != StaticAndShader) {
    EVar36 = pFVar31->BindingFlags;
  }
  uStack_290 = CONCAT31(uStack_290._1_3_,EVar36);
  *(TRDGUniformBuffer<FHairStrandsViewUniformParameters> **)&pFVar30->HairStrands = pTVar33;
  *(ulonglong *)&(pFVar30->HairStrands).field_0x8 = CONCAT44(uStack_28c,uStack_290);
  pFVar31 = FBlueNoise::GetStructMetadata();
  EVar36 = Static;
  if (pFVar31->BindingFlags != StaticAndShader) {
    EVar36 = pFVar31->BindingFlags;
  }
  uStack_290 = CONCAT31(uStack_290._1_3_,EVar36);
  *(undefined8 *)&pFVar30->BlueNoise = local_218._0_8_;
  *(ulonglong *)&(pFVar30->BlueNoise).field_0x8 = CONCAT44(uStack_28c,uStack_290);
  if (cVar39 != '\0') {
    pFVar8 = param_1->SubstrateViewData;
    pFVar30->TileDrawIndirectDataBufferUAV = pFVar8->ClassificationTileDrawIndirectBufferUAV;
    pFVar30->TileListBufferUAV = pFVar8->ClassificationTileListBufferUAV;
    pFVar30->TileEncoding = pFVar8->TileEncoding;
    pFVar30->bRectPrimitive = (uint)(GRHIGlobals.SupportsRectTopology != false);
    *(uint *)(pFVar30->TileListBufferOffsets).Elements =
         pFVar8->ClassificationTileListBufferOffset[0];
    *(undefined8 *)&(pFVar30->TileListBufferOffsets).Elements[0].field_0x4 = 0;
    *(undefined4 *)&(pFVar30->TileListBufferOffsets).Elements[0].field_0xc = 0;
    *(uint *)((pFVar30->TileListBufferOffsets).Elements + 1) =
         pFVar8->ClassificationTileListBufferOffset[1];
    *(undefined8 *)&(pFVar30->TileListBufferOffsets).Elements[1].field_0x4 = 0;
    *(undefined4 *)&(pFVar30->TileListBufferOffsets).Elements[1].field_0xc = 0;
    *(uint *)((pFVar30->TileListBufferOffsets).Elements + 2) =
         pFVar8->ClassificationTileListBufferOffset[2];
    *(undefined8 *)&(pFVar30->TileListBufferOffsets).Elements[2].field_0x4 = 0;
    *(undefined4 *)&(pFVar30->TileListBufferOffsets).Elements[2].field_0xc = 0;
    *(uint *)((pFVar30->TileListBufferOffsets).Elements + 3) =
         pFVar8->ClassificationTileListBufferOffset[3];
    *(undefined8 *)&(pFVar30->TileListBufferOffsets).Elements[3].field_0x4 = 0;
    *(undefined4 *)&(pFVar30->TileListBufferOffsets).Elements[3].field_0xc = 0;
    *(uint *)((pFVar30->TileListBufferOffsets).Elements + 4) =
         pFVar8->ClassificationTileListBufferOffset[4];
    *(undefined8 *)&(pFVar30->TileListBufferOffsets).Elements[4].field_0x4 = 0;
    *(undefined4 *)&(pFVar30->TileListBufferOffsets).Elements[4].field_0xc = 0;
    *(uint *)((pFVar30->TileListBufferOffsets).Elements + 5) =
         pFVar8->ClassificationTileListBufferOffset[5];
    *(undefined8 *)&(pFVar30->TileListBufferOffsets).Elements[5].field_0x4 = 0;
    *(undefined4 *)&(pFVar30->TileListBufferOffsets).Elements[5].field_0xc = 0;
    *(uint *)((pFVar30->TileListBufferOffsets).Elements + 6) =
         pFVar8->ClassificationTileListBufferOffset[6];
    *(undefined8 *)&(pFVar30->TileListBufferOffsets).Elements[6].field_0x4 = 0;
    *(undefined4 *)&(pFVar30->TileListBufferOffsets).Elements[6].field_0xc = 0;
    *(uint *)((pFVar30->TileListBufferOffsets).Elements + 7) =
         pFVar8->ClassificationTileListBufferOffset[7];
    *(undefined8 *)&(pFVar30->TileListBufferOffsets).Elements[7].field_0x4 = 0;
    *(undefined4 *)&(pFVar30->TileListBufferOffsets).Elements[7].field_0xc = 0;
    *(uint *)((pFVar30->TileListBufferOffsets).Elements + 8) =
         pFVar8->ClassificationTileListBufferOffset[8];
    *(undefined8 *)&(pFVar30->TileListBufferOffsets).Elements[8].field_0x4 = 0;
    *(undefined4 *)&(pFVar30->TileListBufferOffsets).Elements[8].field_0xc = 0;
  }
  if (param_3->bSubstrateOverflow == false) {
    EVar1 = param_3->ComputePassFlags;
    iVar29 = (*(int *)((longlong)&(param_1->ViewRect).field0_0x0 + 8) -
             *(int *)&(param_1->ViewRect).field0_0x0) + 7;
    iVar42 = (*(int *)((longlong)&(param_1->ViewRect).field0_0x0 + 0xc) -
             *(int *)((longlong)&(param_1->ViewRect).field0_0x0 + 4)) + 7;
    pFVar34 = FRDGEventName::FRDGEventName(&local_178,1,L"TileClassificationMark");
    pFVar10 = this->GraphBuilder;
    pFVar31 = FStochasticLightingTileClassificationMarkCS::FParameters::FTypeInfo::GetStructMetadata
                        ();
    local_1b8._s_0.Z = 1;
    local_1b8._s_0.X = (int)((iVar29 >> 0x1f & 7U) + iVar29) >> 3;
    local_1b8._s_0.Y = (int)((iVar42 >> 0x1f & 7U) + iVar42) >> 3;
    FComputeShaderUtils::AddPass<FStochasticLightingTileClassificationMarkCS>
              (pFVar10,pFVar34,EVar1,&local_1a0,pFVar31,pFVar30,(TIntVector3<int> *)&local_1b8._s_0)
    ;
    param_3 = local_1c0;
    if (local_178.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_178.FormattedEventName.Data.AllocatorInstance.Data);
      param_3 = local_1c0;
    }
  }
  else {
    local_d8._0_8_ = 0;
    local_b0 = (longlong *)0x0;
    *(FRDGBuffer **)&pFVar30->TileIndirectBuffer =
         param_1->SubstrateViewData->ClosureTileDispatchIndirectBuffer;
    *(ulonglong *)&(pFVar30->TileIndirectBuffer).field_0x8 = CONCAT44(uStack_28c,4);
    EVar1 = param_3->ComputePassFlags;
    pFVar9 = param_1->SubstrateViewData->ClosureTileDispatchIndirectBuffer;
    pFVar34 = FRDGEventName::FRDGEventName(&local_190,1,L"TileClassificationMark(Overflow)");
    FComputeShaderUtils::AddPass<FStochasticLightingTileClassificationMarkCS>
              (this->GraphBuilder,pFVar34,EVar1,&local_1a0,pFVar30,pFVar9,0,
               (TFunction<void___cdecl(void)> *)local_d8);
    if (local_190.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_190.FormattedEventName.Data.AllocatorInstance.Data);
    }
    if (local_d8._0_8_ != 0) {
      plVar35 = (longlong *)(local_d8 + 0x10);
      if (local_b0 != (longlong *)0x0) {
        plVar35 = local_b0;
      }
      (**(code **)(*plVar35 + 0x10))();
    }
  }
  if (cVar39 != '\0') {
    if ((param_3->bSubstrateOverflow != false) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("!RunConfig.bSubstrateOverflow",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\StochasticLighting\\StochasticLighting.cpp"
                            ,0x1db,L""), bVar25)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    Substrate::AddSubstrateMaterialClassificationIndirectArgsPass
              (this->GraphBuilder,local_1a8,param_3->ComputePassFlags);
  }
  if ((FRHIResource *)local_218._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_218._0_8_);
  }
  return;
}

// Validate @ 145726d60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall StochasticLighting::FContext::Validate(FContext *this,FRunConfig *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_1->bSubstrateOverflow != false) && (this->MaterialSource != GBuffer)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MaterialSource == EMaterialSource::GBuffer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\StochasticLighting\\StochasticLighting.cpp"
                       ,0xdc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_1->bCopyDepthAndNormal != false) &&
     ((this->DepthHistoryUAV == (FRDGTextureUAV *)0x0 ||
      (this->NormalHistoryUAV == (FRDGTextureUAV *)0x0)))) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DepthHistoryUAV && NormalHistoryUAV",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\StochasticLighting\\StochasticLighting.cpp"
                       ,0xe1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_1->bDownsampleDepthAndNormal2x1 != false) &&
     ((this->DownsampledSceneDepth2x1UAV == (FRDGTextureUAV *)0x0 ||
      (this->DownsampledWorldNormal2x1UAV == (FRDGTextureUAV *)0x0)))) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DownsampledSceneDepth2x1UAV && DownsampledWorldNormal2x1UAV",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\StochasticLighting\\StochasticLighting.cpp"
                       ,0xe6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_1->bDownsampleDepthAndNormal2x2 != false) &&
     ((this->DownsampledSceneDepth2x2UAV == (FRDGTextureUAV *)0x0 ||
      (this->DownsampledWorldNormal2x2UAV == (FRDGTextureUAV *)0x0)))) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DownsampledSceneDepth2x2UAV && DownsampledWorldNormal2x2UAV",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\StochasticLighting\\StochasticLighting.cpp"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_1->bTileClassifyLumen != false) && (this->LumenTileBitmaskUAV == (FRDGTextureUAV *)0x0)
     ) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("LumenTileBitmaskUAV",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\StochasticLighting\\StochasticLighting.cpp"
                       ,0xf0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_1->bTileClassifyMegaLights != false) &&
     (this->MegaLightsTileBitmaskUAV == (FRDGTextureUAV *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MegaLightsTileBitmaskUAV",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\StochasticLighting\\StochasticLighting.cpp"
                       ,0xf5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_1->bReprojectLumen != false) &&
     (((param_1->bTileClassifyLumen == false ||
       (this->EncodedReprojectionVectorUAV == (FRDGTextureUAV *)0x0)) ||
      (this->LumenPackedPixelDataUAV == (FRDGTextureUAV *)0x0)))) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RunConfig.bTileClassifyLumen && EncodedReprojectionVectorUAV && LumenPackedPixelDataUAV"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\StochasticLighting\\StochasticLighting.cpp"
                       ,0xfa,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_1->bReprojectMegaLights != false) &&
     (((param_1->bTileClassifyMegaLights == false ||
       (this->EncodedReprojectionVectorUAV == (FRDGTextureUAV *)0x0)) ||
      (this->MegaLightsPackedPixelDataUAV == (FRDGTextureUAV *)0x0)))) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RunConfig.bTileClassifyMegaLights && EncodedReprojectionVectorUAV && MegaLightsPackedPixelDataUAV"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\StochasticLighting\\StochasticLighting.cpp"
                       ,0xff,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

