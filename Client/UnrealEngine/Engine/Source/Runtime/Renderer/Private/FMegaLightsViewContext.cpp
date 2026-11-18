// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 7

// FMegaLightsViewContext @ 144e72d60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FMegaLightsViewContext * __thiscall
FMegaLightsViewContext::FMegaLightsViewContext
          (FMegaLightsViewContext *this,FMegaLightsViewContext *param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  undefined8 uVar4;
  FRDGBufferUAV *pFVar5;
  FRDGTextureSRV *pFVar6;
  FRDGTexture *pFVar7;
  longlong lVar8;
  TIntPoint<int>_u_0 TVar9;
  FRDGBuffer *pFVar10;
  undefined4 uVar11;
  float fVar12;
  int iVar13;
  uint uVar14;
  float fVar15;
  ForElementType<FRDGTexture_*> FVar16;
  ForElementType<FRDGTexture_*> FVar17;
  
  this->GraphBuilder = param_1->GraphBuilder;
  this->ViewIndex = param_1->ViewIndex;
  this->View = param_1->View;
  this->ViewFamily = param_1->ViewFamily;
  this->Scene = param_1->Scene;
  this->SceneTextures = param_1->SceneTextures;
  this->bUseVSM = param_1->bUseVSM;
  this->bSamplesGenerated = param_1->bSamplesGenerated;
  this->InputType = param_1->InputType;
  this->bUnifiedVolume = param_1->bUnifiedVolume;
  this->bVolumeEnabled = param_1->bVolumeEnabled;
  this->bGuideByHistory = param_1->bGuideByHistory;
  this->bGuideAreaLightsByHistory = param_1->bGuideAreaLightsByHistory;
  this->bVolumeGuideByHistory = param_1->bVolumeGuideByHistory;
  this->bTranslucencyVolumeGuideByHistory = param_1->bTranslucencyVolumeGuideByHistory;
  this->bDebug = param_1->bDebug;
  this->bVolumeDebug = param_1->bVolumeDebug;
  this->bTranslucencyVolumeDebug = param_1->bTranslucencyVolumeDebug;
  this->bUseLightFunctionAtlas = param_1->bUseLightFunctionAtlas;
  this->bSpatial = param_1->bSpatial;
  this->bTemporal = param_1->bTemporal;
  this->bSubPixelShading = param_1->bSubPixelShading;
  this->bShouldRenderVolumetricFog = param_1->bShouldRenderVolumetricFog;
  this->bShouldRenderTranslucencyVolume = param_1->bShouldRenderTranslucencyVolume;
  this->DebugTileClassificationMode = param_1->DebugTileClassificationMode;
  this->VisualizeLightLoopIterationsMode = param_1->VisualizeLightLoopIterationsMode;
  uVar4 = *(undefined8 *)&(param_1->MegaLightsParameters).ViewUniformBuffer.field_0x8;
  *(undefined8 *)&(this->MegaLightsParameters).ViewUniformBuffer =
       *(undefined8 *)&(param_1->MegaLightsParameters).ViewUniformBuffer;
  *(undefined8 *)&(this->MegaLightsParameters).ViewUniformBuffer.field_0x8 = uVar4;
  uVar4 = *(undefined8 *)&(param_1->MegaLightsParameters).HairStrands.field_0x8;
  *(undefined8 *)&(this->MegaLightsParameters).HairStrands =
       *(undefined8 *)&(param_1->MegaLightsParameters).HairStrands;
  *(undefined8 *)&(this->MegaLightsParameters).HairStrands.field_0x8 = uVar4;
  uVar4 = *(undefined8 *)&(param_1->MegaLightsParameters).ShaderPrintUniformBuffer.Common.field_0x8;
  *(undefined8 *)&(this->MegaLightsParameters).ShaderPrintUniformBuffer.Common =
       *(undefined8 *)&(param_1->MegaLightsParameters).ShaderPrintUniformBuffer.Common;
  *(undefined8 *)&(this->MegaLightsParameters).ShaderPrintUniformBuffer.Common.field_0x8 = uVar4;
  pFVar5 = (param_1->MegaLightsParameters).ShaderPrintUniformBuffer.ShaderPrint_RWEntryBuffer;
  (this->MegaLightsParameters).ShaderPrintUniformBuffer.ShaderPrint_StateBuffer =
       (param_1->MegaLightsParameters).ShaderPrintUniformBuffer.ShaderPrint_StateBuffer;
  (this->MegaLightsParameters).ShaderPrintUniformBuffer.ShaderPrint_RWEntryBuffer = pFVar5;
  pFVar6 = (param_1->MegaLightsParameters).SceneTextures.SceneStencilTexture;
  (this->MegaLightsParameters).SceneTextures.SceneDepthTexture =
       (param_1->MegaLightsParameters).SceneTextures.SceneDepthTexture;
  (this->MegaLightsParameters).SceneTextures.SceneStencilTexture = pFVar6;
  pFVar7 = (param_1->MegaLightsParameters).SceneTextures.GBufferBTexture;
  (this->MegaLightsParameters).SceneTextures.GBufferATexture =
       (param_1->MegaLightsParameters).SceneTextures.GBufferATexture;
  (this->MegaLightsParameters).SceneTextures.GBufferBTexture = pFVar7;
  pFVar7 = (param_1->MegaLightsParameters).SceneTextures.GBufferDTexture;
  (this->MegaLightsParameters).SceneTextures.GBufferCTexture =
       (param_1->MegaLightsParameters).SceneTextures.GBufferCTexture;
  (this->MegaLightsParameters).SceneTextures.GBufferDTexture = pFVar7;
  pFVar7 = (param_1->MegaLightsParameters).SceneTextures.GBufferFTexture;
  (this->MegaLightsParameters).SceneTextures.GBufferETexture =
       (param_1->MegaLightsParameters).SceneTextures.GBufferETexture;
  (this->MegaLightsParameters).SceneTextures.GBufferFTexture = pFVar7;
  pFVar7 = (param_1->MegaLightsParameters).SceneTextures.GBufferSGGXTexture;
  (this->MegaLightsParameters).SceneTextures.GBufferVelocityTexture =
       (param_1->MegaLightsParameters).SceneTextures.GBufferVelocityTexture;
  (this->MegaLightsParameters).SceneTextures.GBufferSGGXTexture = pFVar7;
  uVar4 = *(undefined8 *)&(param_1->MegaLightsParameters).Scene.field_0x8;
  *(undefined8 *)&(this->MegaLightsParameters).Scene =
       *(undefined8 *)&(param_1->MegaLightsParameters).Scene;
  *(undefined8 *)&(this->MegaLightsParameters).Scene.field_0x8 = uVar4;
  uVar4 = *(undefined8 *)&(param_1->MegaLightsParameters).SceneTexturesStruct.field_0x8;
  *(undefined8 *)&(this->MegaLightsParameters).SceneTexturesStruct =
       *(undefined8 *)&(param_1->MegaLightsParameters).SceneTexturesStruct;
  *(undefined8 *)&(this->MegaLightsParameters).SceneTexturesStruct.field_0x8 = uVar4;
  uVar4 = *(undefined8 *)&(param_1->MegaLightsParameters).Substrate.field_0x8;
  *(undefined8 *)&(this->MegaLightsParameters).Substrate =
       *(undefined8 *)&(param_1->MegaLightsParameters).Substrate;
  *(undefined8 *)&(this->MegaLightsParameters).Substrate.field_0x8 = uVar4;
  uVar4 = *(undefined8 *)&(param_1->MegaLightsParameters).ForwardLightStruct.field_0x8;
  *(undefined8 *)&(this->MegaLightsParameters).ForwardLightStruct =
       *(undefined8 *)&(param_1->MegaLightsParameters).ForwardLightStruct;
  *(undefined8 *)&(this->MegaLightsParameters).ForwardLightStruct.field_0x8 = uVar4;
  uVar4 = *(undefined8 *)&(param_1->MegaLightsParameters).LightFunctionAtlas.field_0x8;
  *(undefined8 *)&(this->MegaLightsParameters).LightFunctionAtlas =
       *(undefined8 *)&(param_1->MegaLightsParameters).LightFunctionAtlas;
  *(undefined8 *)&(this->MegaLightsParameters).LightFunctionAtlas.field_0x8 = uVar4;
  uVar11 = *(undefined4 *)&(param_1->MegaLightsParameters).LightingChannelParameters.field_0x4;
  pFVar7 = (param_1->MegaLightsParameters).LightingChannelParameters.SceneLightingChannels;
  (this->MegaLightsParameters).LightingChannelParameters.bSceneLightingChannelsValid =
       (param_1->MegaLightsParameters).LightingChannelParameters.bSceneLightingChannelsValid;
  *(undefined4 *)&(this->MegaLightsParameters).LightingChannelParameters.field_0x4 = uVar11;
  (this->MegaLightsParameters).LightingChannelParameters.SceneLightingChannels = pFVar7;
  uVar4 = *(undefined8 *)&(param_1->MegaLightsParameters).BlueNoise.field_0x8;
  *(undefined8 *)&(this->MegaLightsParameters).BlueNoise =
       *(undefined8 *)&(param_1->MegaLightsParameters).BlueNoise;
  *(undefined8 *)&(this->MegaLightsParameters).BlueNoise.field_0x8 = uVar4;
  (this->MegaLightsParameters).PreIntegratedGF = (param_1->MegaLightsParameters).PreIntegratedGF;
  (this->MegaLightsParameters).PreIntegratedGFSampler =
       (param_1->MegaLightsParameters).PreIntegratedGFSampler;
  (this->MegaLightsParameters).SampleViewMin.field0_0x0 =
       (param_1->MegaLightsParameters).SampleViewMin.field0_0x0;
  (this->MegaLightsParameters).SampleViewSize.field0_0x0 =
       (param_1->MegaLightsParameters).SampleViewSize.field0_0x0;
  (this->MegaLightsParameters).DownsampledViewMin.field0_0x0 =
       (param_1->MegaLightsParameters).DownsampledViewMin.field0_0x0;
  (this->MegaLightsParameters).DownsampledViewSize.field0_0x0 =
       (param_1->MegaLightsParameters).DownsampledViewSize.field0_0x0;
  (this->MegaLightsParameters).NumSamplesPerPixel.field0_0x0 =
       (param_1->MegaLightsParameters).NumSamplesPerPixel.field0_0x0;
  (this->MegaLightsParameters).NumSamplesPerPixelDivideShift.field0_0x0 =
       (param_1->MegaLightsParameters).NumSamplesPerPixelDivideShift.field0_0x0;
  (this->MegaLightsParameters).DownsampledBufferInvSize.field0_0x0 =
       (param_1->MegaLightsParameters).DownsampledBufferInvSize.field0_0x0;
  (this->MegaLightsParameters).DownsampleFactor.field0_0x0 =
       (param_1->MegaLightsParameters).DownsampleFactor.field0_0x0;
  (this->MegaLightsParameters).MegaLightsStateFrameIndex =
       (param_1->MegaLightsParameters).MegaLightsStateFrameIndex;
  (this->MegaLightsParameters).StochasticLightingStateFrameIndex =
       (param_1->MegaLightsParameters).StochasticLightingStateFrameIndex;
  (this->MegaLightsParameters).MinSampleWeight = (param_1->MegaLightsParameters).MinSampleWeight;
  (this->MegaLightsParameters).MaxShadingWeight = (param_1->MegaLightsParameters).MaxShadingWeight;
  (this->MegaLightsParameters).TileDataStride = (param_1->MegaLightsParameters).TileDataStride;
  (this->MegaLightsParameters).DownsampledTileDataStride =
       (param_1->MegaLightsParameters).DownsampledTileDataStride;
  (this->MegaLightsParameters).DebugMode = (param_1->MegaLightsParameters).DebugMode;
  (this->MegaLightsParameters).DebugCursorPosition.field0_0x0 =
       (param_1->MegaLightsParameters).DebugCursorPosition.field0_0x0;
  (this->MegaLightsParameters).DebugLightId = (param_1->MegaLightsParameters).DebugLightId;
  (this->MegaLightsParameters).DebugVisualizeLight =
       (param_1->MegaLightsParameters).DebugVisualizeLight;
  (this->MegaLightsParameters).UseIESProfiles = (param_1->MegaLightsParameters).UseIESProfiles;
  (this->MegaLightsParameters).UseLightFunctionAtlas =
       (param_1->MegaLightsParameters).UseLightFunctionAtlas;
  uVar4 = *(undefined8 *)((param_1->MegaLightsParameters).UnjitteredClipToTranslatedWorld.M[0] + 2);
  *(undefined8 *)(this->MegaLightsParameters).UnjitteredClipToTranslatedWorld.M[0] =
       *(undefined8 *)(param_1->MegaLightsParameters).UnjitteredClipToTranslatedWorld.M[0];
  *(undefined8 *)((this->MegaLightsParameters).UnjitteredClipToTranslatedWorld.M[0] + 2) = uVar4;
  uVar4 = *(undefined8 *)((param_1->MegaLightsParameters).UnjitteredClipToTranslatedWorld.M[1] + 2);
  *(undefined8 *)(this->MegaLightsParameters).UnjitteredClipToTranslatedWorld.M[1] =
       *(undefined8 *)(param_1->MegaLightsParameters).UnjitteredClipToTranslatedWorld.M[1];
  *(undefined8 *)((this->MegaLightsParameters).UnjitteredClipToTranslatedWorld.M[1] + 2) = uVar4;
  uVar4 = *(undefined8 *)((param_1->MegaLightsParameters).UnjitteredClipToTranslatedWorld.M[2] + 2);
  *(undefined8 *)(this->MegaLightsParameters).UnjitteredClipToTranslatedWorld.M[2] =
       *(undefined8 *)(param_1->MegaLightsParameters).UnjitteredClipToTranslatedWorld.M[2];
  *(undefined8 *)((this->MegaLightsParameters).UnjitteredClipToTranslatedWorld.M[2] + 2) = uVar4;
  uVar4 = *(undefined8 *)((param_1->MegaLightsParameters).UnjitteredClipToTranslatedWorld.M[3] + 2);
  *(undefined8 *)(this->MegaLightsParameters).UnjitteredClipToTranslatedWorld.M[3] =
       *(undefined8 *)(param_1->MegaLightsParameters).UnjitteredClipToTranslatedWorld.M[3];
  *(undefined8 *)((this->MegaLightsParameters).UnjitteredClipToTranslatedWorld.M[3] + 2) = uVar4;
  uVar4 = *(undefined8 *)((param_1->MegaLightsParameters).UnjitteredTranslatedWorldToClip.M[0] + 2);
  *(undefined8 *)(this->MegaLightsParameters).UnjitteredTranslatedWorldToClip.M[0] =
       *(undefined8 *)(param_1->MegaLightsParameters).UnjitteredTranslatedWorldToClip.M[0];
  *(undefined8 *)((this->MegaLightsParameters).UnjitteredTranslatedWorldToClip.M[0] + 2) = uVar4;
  uVar4 = *(undefined8 *)((param_1->MegaLightsParameters).UnjitteredTranslatedWorldToClip.M[1] + 2);
  *(undefined8 *)(this->MegaLightsParameters).UnjitteredTranslatedWorldToClip.M[1] =
       *(undefined8 *)(param_1->MegaLightsParameters).UnjitteredTranslatedWorldToClip.M[1];
  *(undefined8 *)((this->MegaLightsParameters).UnjitteredTranslatedWorldToClip.M[1] + 2) = uVar4;
  uVar4 = *(undefined8 *)((param_1->MegaLightsParameters).UnjitteredTranslatedWorldToClip.M[2] + 2);
  *(undefined8 *)(this->MegaLightsParameters).UnjitteredTranslatedWorldToClip.M[2] =
       *(undefined8 *)(param_1->MegaLightsParameters).UnjitteredTranslatedWorldToClip.M[2];
  *(undefined8 *)((this->MegaLightsParameters).UnjitteredTranslatedWorldToClip.M[2] + 2) = uVar4;
  uVar4 = *(undefined8 *)((param_1->MegaLightsParameters).UnjitteredTranslatedWorldToClip.M[3] + 2);
  *(undefined8 *)(this->MegaLightsParameters).UnjitteredTranslatedWorldToClip.M[3] =
       *(undefined8 *)(param_1->MegaLightsParameters).UnjitteredTranslatedWorldToClip.M[3];
  *(undefined8 *)((this->MegaLightsParameters).UnjitteredTranslatedWorldToClip.M[3] + 2) = uVar4;
  uVar4 = *(undefined8 *)
           ((param_1->MegaLightsParameters).UnjitteredPrevTranslatedWorldToClip.M[0] + 2);
  *(undefined8 *)(this->MegaLightsParameters).UnjitteredPrevTranslatedWorldToClip.M[0] =
       *(undefined8 *)(param_1->MegaLightsParameters).UnjitteredPrevTranslatedWorldToClip.M[0];
  *(undefined8 *)((this->MegaLightsParameters).UnjitteredPrevTranslatedWorldToClip.M[0] + 2) = uVar4
  ;
  uVar4 = *(undefined8 *)
           ((param_1->MegaLightsParameters).UnjitteredPrevTranslatedWorldToClip.M[1] + 2);
  *(undefined8 *)(this->MegaLightsParameters).UnjitteredPrevTranslatedWorldToClip.M[1] =
       *(undefined8 *)(param_1->MegaLightsParameters).UnjitteredPrevTranslatedWorldToClip.M[1];
  *(undefined8 *)((this->MegaLightsParameters).UnjitteredPrevTranslatedWorldToClip.M[1] + 2) = uVar4
  ;
  uVar4 = *(undefined8 *)
           ((param_1->MegaLightsParameters).UnjitteredPrevTranslatedWorldToClip.M[2] + 2);
  *(undefined8 *)(this->MegaLightsParameters).UnjitteredPrevTranslatedWorldToClip.M[2] =
       *(undefined8 *)(param_1->MegaLightsParameters).UnjitteredPrevTranslatedWorldToClip.M[2];
  *(undefined8 *)((this->MegaLightsParameters).UnjitteredPrevTranslatedWorldToClip.M[2] + 2) = uVar4
  ;
  uVar4 = *(undefined8 *)
           ((param_1->MegaLightsParameters).UnjitteredPrevTranslatedWorldToClip.M[3] + 2);
  *(undefined8 *)(this->MegaLightsParameters).UnjitteredPrevTranslatedWorldToClip.M[3] =
       *(undefined8 *)(param_1->MegaLightsParameters).UnjitteredPrevTranslatedWorldToClip.M[3];
  *(undefined8 *)((this->MegaLightsParameters).UnjitteredPrevTranslatedWorldToClip.M[3] + 2) = uVar4
  ;
  FHZBParameters::FHZBParameters
            (&(this->MegaLightsParameters).HZBParameters,
             &(param_1->MegaLightsParameters).HZBParameters);
  (this->MegaLightsParameters).VisibleLightHashViewMinInTiles.field0_0x0 =
       (param_1->MegaLightsParameters).VisibleLightHashViewMinInTiles.field0_0x0;
  (this->MegaLightsParameters).VisibleLightHashViewSizeInTiles.field0_0x0 =
       (param_1->MegaLightsParameters).VisibleLightHashViewSizeInTiles.field0_0x0;
  (this->MegaLightsParameters).DownsampledSceneDepth =
       (param_1->MegaLightsParameters).DownsampledSceneDepth;
  (this->MegaLightsParameters).DownsampledSceneWorldNormal =
       (param_1->MegaLightsParameters).DownsampledSceneWorldNormal;
  fVar12 = (param_1->MegaLightsVolumeParameters).VolumeMaxShadingWeight;
  iVar3 = (param_1->MegaLightsVolumeParameters).VolumeDownsampleFactorMultShift;
  iVar13 = (param_1->MegaLightsVolumeParameters).VolumeDebugMode;
  (this->MegaLightsVolumeParameters).VolumeMinSampleWeight =
       (param_1->MegaLightsVolumeParameters).VolumeMinSampleWeight;
  (this->MegaLightsVolumeParameters).VolumeMaxShadingWeight = fVar12;
  (this->MegaLightsVolumeParameters).VolumeDownsampleFactorMultShift = iVar3;
  (this->MegaLightsVolumeParameters).VolumeDebugMode = iVar13;
  uVar11 = *(undefined4 *)&(param_1->MegaLightsVolumeParameters).field_0x14;
  lVar8 = (param_1->MegaLightsVolumeParameters)._padding_;
  (this->MegaLightsVolumeParameters).VolumeDebugSliceIndex =
       (param_1->MegaLightsVolumeParameters).VolumeDebugSliceIndex;
  *(undefined4 *)&(this->MegaLightsVolumeParameters).field_0x14 = uVar11;
  (this->MegaLightsVolumeParameters)._padding_ = lVar8;
  uVar4 = *(undefined8 *)
           ((longlong)&(param_1->MegaLightsVolumeParameters).NumSamplesPerVoxel.field0_0x0 + 8);
  *(undefined8 *)&(this->MegaLightsVolumeParameters).NumSamplesPerVoxel.field0_0x0 =
       *(undefined8 *)&(param_1->MegaLightsVolumeParameters).NumSamplesPerVoxel.field0_0x0;
  *(undefined8 *)((longlong)&(this->MegaLightsVolumeParameters).NumSamplesPerVoxel.field0_0x0 + 8) =
       uVar4;
  uVar4 = *(undefined8 *)
           ((longlong)
            &(param_1->MegaLightsVolumeParameters).NumSamplesPerVoxelDivideShift.field0_0x0 + 8);
  *(undefined8 *)&(this->MegaLightsVolumeParameters).NumSamplesPerVoxelDivideShift.field0_0x0 =
       *(undefined8 *)
        &(param_1->MegaLightsVolumeParameters).NumSamplesPerVoxelDivideShift.field0_0x0;
  *(undefined8 *)
   ((longlong)&(this->MegaLightsVolumeParameters).NumSamplesPerVoxelDivideShift.field0_0x0 + 8) =
       uVar4;
  uVar4 = *(undefined8 *)
           ((longlong)&(param_1->MegaLightsVolumeParameters).DownsampledVolumeViewSize.field0_0x0 +
           8);
  *(undefined8 *)&(this->MegaLightsVolumeParameters).DownsampledVolumeViewSize.field0_0x0 =
       *(undefined8 *)&(param_1->MegaLightsVolumeParameters).DownsampledVolumeViewSize.field0_0x0;
  *(undefined8 *)
   ((longlong)&(this->MegaLightsVolumeParameters).DownsampledVolumeViewSize.field0_0x0 + 8) = uVar4;
  uVar4 = *(undefined8 *)
           ((longlong)&(param_1->MegaLightsVolumeParameters).VolumeViewSize.field0_0x0 + 8);
  *(undefined8 *)&(this->MegaLightsVolumeParameters).VolumeViewSize.field0_0x0 =
       *(undefined8 *)&(param_1->MegaLightsVolumeParameters).VolumeViewSize.field0_0x0;
  *(undefined8 *)((longlong)&(this->MegaLightsVolumeParameters).VolumeViewSize.field0_0x0 + 8) =
       uVar4;
  uVar4 = *(undefined8 *)
           ((longlong)&(param_1->MegaLightsVolumeParameters).VolumeSampleViewSize.field0_0x0 + 8);
  *(undefined8 *)&(this->MegaLightsVolumeParameters).VolumeSampleViewSize.field0_0x0 =
       *(undefined8 *)&(param_1->MegaLightsVolumeParameters).VolumeSampleViewSize.field0_0x0;
  *(undefined8 *)((longlong)&(this->MegaLightsVolumeParameters).VolumeSampleViewSize.field0_0x0 + 8)
       = uVar4;
  uVar4 = *(undefined8 *)
           ((longlong)&(param_1->MegaLightsVolumeParameters).VolumeInvBufferSize.field0_0x0 + 8);
  *(undefined8 *)&(this->MegaLightsVolumeParameters).VolumeInvBufferSize.field0_0x0 =
       *(undefined8 *)&(param_1->MegaLightsVolumeParameters).VolumeInvBufferSize.field0_0x0;
  *(undefined8 *)((longlong)&(this->MegaLightsVolumeParameters).VolumeInvBufferSize.field0_0x0 + 8)
       = uVar4;
  uVar4 = *(undefined8 *)
           ((longlong)&(param_1->MegaLightsVolumeParameters).MegaLightsVolumeZParams.field0_0x0 + 8)
  ;
  *(undefined8 *)&(this->MegaLightsVolumeParameters).MegaLightsVolumeZParams.field0_0x0 =
       *(undefined8 *)&(param_1->MegaLightsVolumeParameters).MegaLightsVolumeZParams.field0_0x0;
  *(undefined8 *)
   ((longlong)&(this->MegaLightsVolumeParameters).MegaLightsVolumeZParams.field0_0x0 + 8) = uVar4;
  uVar4 = *(undefined8 *)
           ((longlong)&(param_1->MegaLightsVolumeParameters).VolumeFrameJitterOffset.field0_0x0 + 8)
  ;
  *(undefined8 *)&(this->MegaLightsVolumeParameters).VolumeFrameJitterOffset.field0_0x0 =
       *(undefined8 *)&(param_1->MegaLightsVolumeParameters).VolumeFrameJitterOffset.field0_0x0;
  *(undefined8 *)
   ((longlong)&(this->MegaLightsVolumeParameters).VolumeFrameJitterOffset.field0_0x0 + 8) = uVar4;
  fVar12 = (param_1->MegaLightsVolumeParameters).LightSoftFading;
  uVar14 = (param_1->MegaLightsVolumeParameters).TranslucencyVolumeCascadeIndex;
  fVar15 = (param_1->MegaLightsVolumeParameters).TranslucencyVolumeInvResolution;
  (this->MegaLightsVolumeParameters).VolumeInverseSquaredLightDistanceBiasScale =
       (param_1->MegaLightsVolumeParameters).VolumeInverseSquaredLightDistanceBiasScale;
  (this->MegaLightsVolumeParameters).LightSoftFading = fVar12;
  (this->MegaLightsVolumeParameters).TranslucencyVolumeCascadeIndex = uVar14;
  (this->MegaLightsVolumeParameters).TranslucencyVolumeInvResolution = fVar15;
  uVar14 = (param_1->MegaLightsVolumeParameters).IsUnifiedVolume;
  lVar8 = (param_1->MegaLightsVolumeParameters)._padding_;
  (this->MegaLightsVolumeParameters).UseHZBOcclusionTest =
       (param_1->MegaLightsVolumeParameters).UseHZBOcclusionTest;
  (this->MegaLightsVolumeParameters).IsUnifiedVolume = uVar14;
  (this->MegaLightsVolumeParameters)._padding_ = lVar8;
  uVar4 = *(undefined8 *)
           ((longlong)&(param_1->MegaLightsVolumeParameters).ResampleVolumeViewSize.field0_0x0 + 8);
  *(undefined8 *)&(this->MegaLightsVolumeParameters).ResampleVolumeViewSize.field0_0x0 =
       *(undefined8 *)&(param_1->MegaLightsVolumeParameters).ResampleVolumeViewSize.field0_0x0;
  *(undefined8 *)
   ((longlong)&(this->MegaLightsVolumeParameters).ResampleVolumeViewSize.field0_0x0 + 8) = uVar4;
  uVar4 = *(undefined8 *)
           ((longlong)&(param_1->MegaLightsVolumeParameters).ResampleVolumeInvBufferSize.field0_0x0
           + 8);
  *(undefined8 *)&(this->MegaLightsVolumeParameters).ResampleVolumeInvBufferSize.field0_0x0 =
       *(undefined8 *)&(param_1->MegaLightsVolumeParameters).ResampleVolumeInvBufferSize.field0_0x0;
  *(undefined8 *)
   ((longlong)&(this->MegaLightsVolumeParameters).ResampleVolumeInvBufferSize.field0_0x0 + 8) =
       uVar4;
  uVar4 = *(undefined8 *)
           ((longlong)&(param_1->MegaLightsVolumeParameters).ResampleVolumeZParams.field0_0x0 + 8);
  *(undefined8 *)&(this->MegaLightsVolumeParameters).ResampleVolumeZParams.field0_0x0 =
       *(undefined8 *)&(param_1->MegaLightsVolumeParameters).ResampleVolumeZParams.field0_0x0;
  *(undefined8 *)
   ((longlong)&(this->MegaLightsVolumeParameters).ResampleVolumeZParams.field0_0x0 + 8) = uVar4;
  fVar12 = (param_1->MegaLightsTranslucencyVolumeParameters).VolumeMaxShadingWeight;
  iVar3 = (param_1->MegaLightsTranslucencyVolumeParameters).VolumeDownsampleFactorMultShift;
  iVar13 = (param_1->MegaLightsTranslucencyVolumeParameters).VolumeDebugMode;
  (this->MegaLightsTranslucencyVolumeParameters).VolumeMinSampleWeight =
       (param_1->MegaLightsTranslucencyVolumeParameters).VolumeMinSampleWeight;
  (this->MegaLightsTranslucencyVolumeParameters).VolumeMaxShadingWeight = fVar12;
  (this->MegaLightsTranslucencyVolumeParameters).VolumeDownsampleFactorMultShift = iVar3;
  (this->MegaLightsTranslucencyVolumeParameters).VolumeDebugMode = iVar13;
  uVar11 = *(undefined4 *)&(param_1->MegaLightsTranslucencyVolumeParameters).field_0x14;
  lVar8 = (param_1->MegaLightsTranslucencyVolumeParameters)._padding_;
  (this->MegaLightsTranslucencyVolumeParameters).VolumeDebugSliceIndex =
       (param_1->MegaLightsTranslucencyVolumeParameters).VolumeDebugSliceIndex;
  *(undefined4 *)&(this->MegaLightsTranslucencyVolumeParameters).field_0x14 = uVar11;
  (this->MegaLightsTranslucencyVolumeParameters)._padding_ = lVar8;
  uVar4 = *(undefined8 *)
           ((longlong)
            &(param_1->MegaLightsTranslucencyVolumeParameters).NumSamplesPerVoxel.field0_0x0 + 8);
  *(undefined8 *)&(this->MegaLightsTranslucencyVolumeParameters).NumSamplesPerVoxel.field0_0x0 =
       *(undefined8 *)
        &(param_1->MegaLightsTranslucencyVolumeParameters).NumSamplesPerVoxel.field0_0x0;
  *(undefined8 *)
   ((longlong)&(this->MegaLightsTranslucencyVolumeParameters).NumSamplesPerVoxel.field0_0x0 + 8) =
       uVar4;
  uVar4 = *(undefined8 *)
           ((longlong)
            &(param_1->MegaLightsTranslucencyVolumeParameters).NumSamplesPerVoxelDivideShift.
             field0_0x0 + 8);
  *(undefined8 *)
   &(this->MegaLightsTranslucencyVolumeParameters).NumSamplesPerVoxelDivideShift.field0_0x0 =
       *(undefined8 *)
        &(param_1->MegaLightsTranslucencyVolumeParameters).NumSamplesPerVoxelDivideShift.field0_0x0;
  *(undefined8 *)
   ((longlong)
    &(this->MegaLightsTranslucencyVolumeParameters).NumSamplesPerVoxelDivideShift.field0_0x0 + 8) =
       uVar4;
  uVar4 = *(undefined8 *)
           ((longlong)
            &(param_1->MegaLightsTranslucencyVolumeParameters).DownsampledVolumeViewSize.field0_0x0
           + 8);
  *(undefined8 *)
   &(this->MegaLightsTranslucencyVolumeParameters).DownsampledVolumeViewSize.field0_0x0 =
       *(undefined8 *)
        &(param_1->MegaLightsTranslucencyVolumeParameters).DownsampledVolumeViewSize.field0_0x0;
  *(undefined8 *)
   ((longlong)&(this->MegaLightsTranslucencyVolumeParameters).DownsampledVolumeViewSize.field0_0x0 +
   8) = uVar4;
  uVar4 = *(undefined8 *)
           ((longlong)&(param_1->MegaLightsTranslucencyVolumeParameters).VolumeViewSize.field0_0x0 +
           8);
  *(undefined8 *)&(this->MegaLightsTranslucencyVolumeParameters).VolumeViewSize.field0_0x0 =
       *(undefined8 *)&(param_1->MegaLightsTranslucencyVolumeParameters).VolumeViewSize.field0_0x0;
  *(undefined8 *)
   ((longlong)&(this->MegaLightsTranslucencyVolumeParameters).VolumeViewSize.field0_0x0 + 8) = uVar4
  ;
  uVar4 = *(undefined8 *)
           ((longlong)
            &(param_1->MegaLightsTranslucencyVolumeParameters).VolumeSampleViewSize.field0_0x0 + 8);
  *(undefined8 *)&(this->MegaLightsTranslucencyVolumeParameters).VolumeSampleViewSize.field0_0x0 =
       *(undefined8 *)
        &(param_1->MegaLightsTranslucencyVolumeParameters).VolumeSampleViewSize.field0_0x0;
  *(undefined8 *)
   ((longlong)&(this->MegaLightsTranslucencyVolumeParameters).VolumeSampleViewSize.field0_0x0 + 8) =
       uVar4;
  uVar4 = *(undefined8 *)
           ((longlong)
            &(param_1->MegaLightsTranslucencyVolumeParameters).VolumeInvBufferSize.field0_0x0 + 8);
  *(undefined8 *)&(this->MegaLightsTranslucencyVolumeParameters).VolumeInvBufferSize.field0_0x0 =
       *(undefined8 *)
        &(param_1->MegaLightsTranslucencyVolumeParameters).VolumeInvBufferSize.field0_0x0;
  *(undefined8 *)
   ((longlong)&(this->MegaLightsTranslucencyVolumeParameters).VolumeInvBufferSize.field0_0x0 + 8) =
       uVar4;
  uVar4 = *(undefined8 *)
           ((longlong)
            &(param_1->MegaLightsTranslucencyVolumeParameters).MegaLightsVolumeZParams.field0_0x0 +
           8);
  *(undefined8 *)&(this->MegaLightsTranslucencyVolumeParameters).MegaLightsVolumeZParams.field0_0x0
       = *(undefined8 *)
          &(param_1->MegaLightsTranslucencyVolumeParameters).MegaLightsVolumeZParams.field0_0x0;
  *(undefined8 *)
   ((longlong)&(this->MegaLightsTranslucencyVolumeParameters).MegaLightsVolumeZParams.field0_0x0 + 8
   ) = uVar4;
  uVar4 = *(undefined8 *)
           ((longlong)
            &(param_1->MegaLightsTranslucencyVolumeParameters).VolumeFrameJitterOffset.field0_0x0 +
           8);
  *(undefined8 *)&(this->MegaLightsTranslucencyVolumeParameters).VolumeFrameJitterOffset.field0_0x0
       = *(undefined8 *)
          &(param_1->MegaLightsTranslucencyVolumeParameters).VolumeFrameJitterOffset.field0_0x0;
  *(undefined8 *)
   ((longlong)&(this->MegaLightsTranslucencyVolumeParameters).VolumeFrameJitterOffset.field0_0x0 + 8
   ) = uVar4;
  fVar12 = (param_1->MegaLightsTranslucencyVolumeParameters).LightSoftFading;
  uVar14 = (param_1->MegaLightsTranslucencyVolumeParameters).TranslucencyVolumeCascadeIndex;
  fVar15 = (param_1->MegaLightsTranslucencyVolumeParameters).TranslucencyVolumeInvResolution;
  (this->MegaLightsTranslucencyVolumeParameters).VolumeInverseSquaredLightDistanceBiasScale =
       (param_1->MegaLightsTranslucencyVolumeParameters).VolumeInverseSquaredLightDistanceBiasScale;
  (this->MegaLightsTranslucencyVolumeParameters).LightSoftFading = fVar12;
  (this->MegaLightsTranslucencyVolumeParameters).TranslucencyVolumeCascadeIndex = uVar14;
  (this->MegaLightsTranslucencyVolumeParameters).TranslucencyVolumeInvResolution = fVar15;
  uVar14 = (param_1->MegaLightsTranslucencyVolumeParameters).IsUnifiedVolume;
  lVar8 = (param_1->MegaLightsTranslucencyVolumeParameters)._padding_;
  (this->MegaLightsTranslucencyVolumeParameters).UseHZBOcclusionTest =
       (param_1->MegaLightsTranslucencyVolumeParameters).UseHZBOcclusionTest;
  (this->MegaLightsTranslucencyVolumeParameters).IsUnifiedVolume = uVar14;
  (this->MegaLightsTranslucencyVolumeParameters)._padding_ = lVar8;
  uVar4 = *(undefined8 *)
           ((longlong)
            &(param_1->MegaLightsTranslucencyVolumeParameters).ResampleVolumeViewSize.field0_0x0 + 8
           );
  *(undefined8 *)&(this->MegaLightsTranslucencyVolumeParameters).ResampleVolumeViewSize.field0_0x0 =
       *(undefined8 *)
        &(param_1->MegaLightsTranslucencyVolumeParameters).ResampleVolumeViewSize.field0_0x0;
  *(undefined8 *)
   ((longlong)&(this->MegaLightsTranslucencyVolumeParameters).ResampleVolumeViewSize.field0_0x0 + 8)
       = uVar4;
  uVar4 = *(undefined8 *)
           ((longlong)
            &(param_1->MegaLightsTranslucencyVolumeParameters).ResampleVolumeInvBufferSize.
             field0_0x0 + 8);
  *(undefined8 *)
   &(this->MegaLightsTranslucencyVolumeParameters).ResampleVolumeInvBufferSize.field0_0x0 =
       *(undefined8 *)
        &(param_1->MegaLightsTranslucencyVolumeParameters).ResampleVolumeInvBufferSize.field0_0x0;
  *(undefined8 *)
   ((longlong)&(this->MegaLightsTranslucencyVolumeParameters).ResampleVolumeInvBufferSize.field0_0x0
   + 8) = uVar4;
  uVar4 = *(undefined8 *)
           ((longlong)
            &(param_1->MegaLightsTranslucencyVolumeParameters).ResampleVolumeZParams.field0_0x0 + 8)
  ;
  *(undefined8 *)&(this->MegaLightsTranslucencyVolumeParameters).ResampleVolumeZParams.field0_0x0 =
       *(undefined8 *)
        &(param_1->MegaLightsTranslucencyVolumeParameters).ResampleVolumeZParams.field0_0x0;
  *(undefined8 *)
   ((longlong)&(this->MegaLightsTranslucencyVolumeParameters).ResampleVolumeZParams.field0_0x0 + 8)
       = uVar4;
  uVar4 = *(undefined8 *)((longlong)&(param_1->VolumeParameters).ViewGridSizeInt.field0_0x0 + 8);
  *(undefined8 *)&(this->VolumeParameters).ViewGridSizeInt.field0_0x0 =
       *(undefined8 *)&(param_1->VolumeParameters).ViewGridSizeInt.field0_0x0;
  *(undefined8 *)((longlong)&(this->VolumeParameters).ViewGridSizeInt.field0_0x0 + 8) = uVar4;
  uVar4 = *(undefined8 *)((longlong)&(param_1->VolumeParameters).ViewGridSize.field0_0x0 + 8);
  *(undefined8 *)&(this->VolumeParameters).ViewGridSize.field0_0x0 =
       *(undefined8 *)&(param_1->VolumeParameters).ViewGridSize.field0_0x0;
  *(undefined8 *)((longlong)&(this->VolumeParameters).ViewGridSize.field0_0x0 + 8) = uVar4;
  uVar4 = *(undefined8 *)((longlong)&(param_1->VolumeParameters).ResourceGridSizeInt.field0_0x0 + 8)
  ;
  *(undefined8 *)&(this->VolumeParameters).ResourceGridSizeInt.field0_0x0 =
       *(undefined8 *)&(param_1->VolumeParameters).ResourceGridSizeInt.field0_0x0;
  *(undefined8 *)((longlong)&(this->VolumeParameters).ResourceGridSizeInt.field0_0x0 + 8) = uVar4;
  uVar4 = *(undefined8 *)((longlong)&(param_1->VolumeParameters).ResourceGridSize.field0_0x0 + 8);
  *(undefined8 *)&(this->VolumeParameters).ResourceGridSize.field0_0x0 =
       *(undefined8 *)&(param_1->VolumeParameters).ResourceGridSize.field0_0x0;
  *(undefined8 *)((longlong)&(this->VolumeParameters).ResourceGridSize.field0_0x0 + 8) = uVar4;
  uVar4 = *(undefined8 *)((longlong)&(param_1->VolumeParameters).GridZParams.field0_0x0 + 8);
  *(undefined8 *)&(this->VolumeParameters).GridZParams.field0_0x0 =
       *(undefined8 *)&(param_1->VolumeParameters).GridZParams.field0_0x0;
  *(undefined8 *)((longlong)&(this->VolumeParameters).GridZParams.field0_0x0 + 8) = uVar4;
  TVar9 = (param_1->VolumeParameters).FogGridToPixelXY.field0_0x0;
  (this->VolumeParameters).SVPosToVolumeUV.field0_0x0 =
       (param_1->VolumeParameters).SVPosToVolumeUV.field0_0x0;
  (this->VolumeParameters).FogGridToPixelXY.field0_0x0 = TVar9;
  uVar11 = *(undefined4 *)&(param_1->VolumeParameters).field_0x64;
  uVar4 = *(undefined8 *)&(param_1->VolumeParameters).field_0x68;
  (this->VolumeParameters).MaxDistance = (param_1->VolumeParameters).MaxDistance;
  *(undefined4 *)&(this->VolumeParameters).field_0x64 = uVar11;
  *(undefined8 *)&(this->VolumeParameters).field_0x68 = uVar4;
  uVar4 = *(undefined8 *)
           ((longlong)&(param_1->VolumetricFogParamaters).ViewGridSizeInt.field0_0x0 + 8);
  *(undefined8 *)&(this->VolumetricFogParamaters).ViewGridSizeInt.field0_0x0 =
       *(undefined8 *)&(param_1->VolumetricFogParamaters).ViewGridSizeInt.field0_0x0;
  *(undefined8 *)((longlong)&(this->VolumetricFogParamaters).ViewGridSizeInt.field0_0x0 + 8) = uVar4
  ;
  uVar4 = *(undefined8 *)((longlong)&(param_1->VolumetricFogParamaters).ViewGridSize.field0_0x0 + 8)
  ;
  *(undefined8 *)&(this->VolumetricFogParamaters).ViewGridSize.field0_0x0 =
       *(undefined8 *)&(param_1->VolumetricFogParamaters).ViewGridSize.field0_0x0;
  *(undefined8 *)((longlong)&(this->VolumetricFogParamaters).ViewGridSize.field0_0x0 + 8) = uVar4;
  uVar4 = *(undefined8 *)
           ((longlong)&(param_1->VolumetricFogParamaters).ResourceGridSizeInt.field0_0x0 + 8);
  *(undefined8 *)&(this->VolumetricFogParamaters).ResourceGridSizeInt.field0_0x0 =
       *(undefined8 *)&(param_1->VolumetricFogParamaters).ResourceGridSizeInt.field0_0x0;
  *(undefined8 *)((longlong)&(this->VolumetricFogParamaters).ResourceGridSizeInt.field0_0x0 + 8) =
       uVar4;
  uVar4 = *(undefined8 *)
           ((longlong)&(param_1->VolumetricFogParamaters).ResourceGridSize.field0_0x0 + 8);
  *(undefined8 *)&(this->VolumetricFogParamaters).ResourceGridSize.field0_0x0 =
       *(undefined8 *)&(param_1->VolumetricFogParamaters).ResourceGridSize.field0_0x0;
  *(undefined8 *)((longlong)&(this->VolumetricFogParamaters).ResourceGridSize.field0_0x0 + 8) =
       uVar4;
  uVar4 = *(undefined8 *)((longlong)&(param_1->VolumetricFogParamaters).GridZParams.field0_0x0 + 8);
  *(undefined8 *)&(this->VolumetricFogParamaters).GridZParams.field0_0x0 =
       *(undefined8 *)&(param_1->VolumetricFogParamaters).GridZParams.field0_0x0;
  *(undefined8 *)((longlong)&(this->VolumetricFogParamaters).GridZParams.field0_0x0 + 8) = uVar4;
  fVar12 = (param_1->VolumetricFogParamaters).MaxDistance;
  fVar15 = (param_1->VolumetricFogParamaters).LightSoftFading;
  (this->VolumetricFogParamaters).SVPosToVolumeUV.field0_0x0 =
       (param_1->VolumetricFogParamaters).SVPosToVolumeUV.field0_0x0;
  (this->VolumetricFogParamaters).MaxDistance = fVar12;
  (this->VolumetricFogParamaters).LightSoftFading = fVar15;
  uVar4 = *(undefined8 *)
           ((longlong)&(param_1->VolumetricFogParamaters).HeightFogInscatteringColor.field0_0x0 + 8)
  ;
  *(undefined8 *)&(this->VolumetricFogParamaters).HeightFogInscatteringColor.field0_0x0 =
       *(undefined8 *)&(param_1->VolumetricFogParamaters).HeightFogInscatteringColor.field0_0x0;
  *(undefined8 *)
   ((longlong)&(this->VolumetricFogParamaters).HeightFogInscatteringColor.field0_0x0 + 8) = uVar4;
  uVar4 = *(undefined8 *)
           ((longlong)
            &(param_1->VolumetricFogParamaters).HeightFogDirectionalLightInscatteringColor.
             field0_0x0 + 8);
  *(undefined8 *)
   &(this->VolumetricFogParamaters).HeightFogDirectionalLightInscatteringColor.field0_0x0 =
       *(undefined8 *)
        &(param_1->VolumetricFogParamaters).HeightFogDirectionalLightInscatteringColor.field0_0x0;
  *(undefined8 *)
   ((longlong)&(this->VolumetricFogParamaters).HeightFogDirectionalLightInscatteringColor.field0_0x0
   + 8) = uVar4;
  uVar4 = *(undefined8 *)&(param_1->VolumetricFogParamaters).field_0x88;
  (this->VolumetricFogParamaters).FogGridToPixelXY.field0_0x0 =
       (param_1->VolumetricFogParamaters).FogGridToPixelXY.field0_0x0;
  *(undefined8 *)&(this->VolumetricFogParamaters).field_0x88 = uVar4;
  (this->DownsampleFactor).field0_0x0 = (param_1->DownsampleFactor).field0_0x0;
  (this->SampleBufferSize).field0_0x0 = (param_1->SampleBufferSize).field0_0x0;
  (this->DonwnsampledSampleBufferSize).field0_0x0 =
       (param_1->DonwnsampledSampleBufferSize).field0_0x0;
  (this->NumSamplesPerPixel2d).field0_0x0 = (param_1->NumSamplesPerPixel2d).field0_0x0;
  *(undefined8 *)&(this->NumSamplesPerVoxel3d).field0_0x0 =
       *(undefined8 *)&(param_1->NumSamplesPerVoxel3d).field0_0x0;
  (this->NumSamplesPerVoxel3d).field0_0x0._s_0.Z = (param_1->NumSamplesPerVoxel3d).field0_0x0._s_0.Z
  ;
  *(undefined8 *)&(this->NumSamplesPerTranslucencyVoxel3d).field0_0x0 =
       *(undefined8 *)&(param_1->NumSamplesPerTranslucencyVoxel3d).field0_0x0;
  (this->NumSamplesPerTranslucencyVoxel3d).field0_0x0._s_0.Z =
       (param_1->NumSamplesPerTranslucencyVoxel3d).field0_0x0._s_0.Z;
  (this->ViewSizeInTiles).field0_0x0 = (param_1->ViewSizeInTiles).field0_0x0;
  this->VisibleLightHashBufferSize = param_1->VisibleLightHashBufferSize;
  (this->VisibleLightHashSizeInTiles).field0_0x0 = (param_1->VisibleLightHashSizeInTiles).field0_0x0
  ;
  (this->VisibleLightHashViewMinInTiles).field0_0x0 =
       (param_1->VisibleLightHashViewMinInTiles).field0_0x0;
  (this->VisibleLightHashViewSizeInTiles).field0_0x0 =
       (param_1->VisibleLightHashViewSizeInTiles).field0_0x0;
  this->VolumeDownsampleFactor = param_1->VolumeDownsampleFactor;
  *(undefined8 *)&(this->VolumeBufferSize).field0_0x0 =
       *(undefined8 *)&(param_1->VolumeBufferSize).field0_0x0;
  (this->VolumeBufferSize).field0_0x0._s_0.Z = (param_1->VolumeBufferSize).field0_0x0._s_0.Z;
  *(undefined8 *)&(this->VolumeSampleBufferSize).field0_0x0 =
       *(undefined8 *)&(param_1->VolumeSampleBufferSize).field0_0x0;
  (this->VolumeSampleBufferSize).field0_0x0._s_0.Z =
       (param_1->VolumeSampleBufferSize).field0_0x0._s_0.Z;
  *(undefined8 *)&(this->VolumeViewSize).field0_0x0 =
       *(undefined8 *)&(param_1->VolumeViewSize).field0_0x0;
  (this->VolumeViewSize).field0_0x0._s_0.Z = (param_1->VolumeViewSize).field0_0x0._s_0.Z;
  this->VolumeLightSamples = param_1->VolumeLightSamples;
  this->VolumeLightSampleRays = param_1->VolumeLightSampleRays;
  this->VolumeVisibleLightHashBufferSize = param_1->VolumeVisibleLightHashBufferSize;
  *(undefined8 *)&(this->VolumeVisibleLightHashTileSize).field0_0x0 =
       *(undefined8 *)&(param_1->VolumeVisibleLightHashTileSize).field0_0x0;
  (this->VolumeVisibleLightHashTileSize).field0_0x0._s_0.Z =
       (param_1->VolumeVisibleLightHashTileSize).field0_0x0._s_0.Z;
  *(undefined8 *)&(this->VolumeVisibleLightHashSizeInTiles).field0_0x0 =
       *(undefined8 *)&(param_1->VolumeVisibleLightHashSizeInTiles).field0_0x0;
  (this->VolumeVisibleLightHashSizeInTiles).field0_0x0._s_0.Z =
       (param_1->VolumeVisibleLightHashSizeInTiles).field0_0x0._s_0.Z;
  *(undefined8 *)&(this->VolumeVisibleLightHashViewSizeInTiles).field0_0x0 =
       *(undefined8 *)&(param_1->VolumeVisibleLightHashViewSizeInTiles).field0_0x0;
  (this->VolumeVisibleLightHashViewSizeInTiles).field0_0x0._s_0.Z =
       (param_1->VolumeVisibleLightHashViewSizeInTiles).field0_0x0._s_0.Z;
  *(undefined8 *)&(this->VolumeDownsampledViewSize).field0_0x0 =
       *(undefined8 *)&(param_1->VolumeDownsampledViewSize).field0_0x0;
  (this->VolumeDownsampledViewSize).field0_0x0._s_0.Z =
       (param_1->VolumeDownsampledViewSize).field0_0x0._s_0.Z;
  this->TranslucencyVolumeDownsampleFactor = param_1->TranslucencyVolumeDownsampleFactor;
  *(undefined8 *)&(this->TranslucencyVolumeBufferSize).field0_0x0 =
       *(undefined8 *)&(param_1->TranslucencyVolumeBufferSize).field0_0x0;
  (this->TranslucencyVolumeBufferSize).field0_0x0._s_0.Z =
       (param_1->TranslucencyVolumeBufferSize).field0_0x0._s_0.Z;
  *(undefined8 *)&(this->TranslucencyVolumeSampleBufferSize).field0_0x0 =
       *(undefined8 *)&(param_1->TranslucencyVolumeSampleBufferSize).field0_0x0;
  (this->TranslucencyVolumeSampleBufferSize).field0_0x0._s_0.Z =
       (param_1->TranslucencyVolumeSampleBufferSize).field0_0x0._s_0.Z;
  *(undefined8 *)&(this->TranslucencyVolumeDownsampledBufferSize).field0_0x0 =
       *(undefined8 *)&(param_1->TranslucencyVolumeDownsampledBufferSize).field0_0x0;
  (this->TranslucencyVolumeDownsampledBufferSize).field0_0x0._s_0.Z =
       (param_1->TranslucencyVolumeDownsampledBufferSize).field0_0x0._s_0.Z;
  (this->TranslucencyVolumeLightSamples).AllocatorInstance.SecondaryData =
       (ForElementType<FRDGTexture_*>)0x0;
  FVar17 = (param_1->TranslucencyVolumeLightSamples).AllocatorInstance.SecondaryData;
  iVar3 = (param_1->TranslucencyVolumeLightSamples).ArrayNum;
  (this->TranslucencyVolumeLightSamples).ArrayNum = iVar3;
  if (FVar17 == (ForElementType<FRDGTexture_*>)0x0) {
    FVar17 = (ForElementType<FRDGTexture_*>)&param_1->TranslucencyVolumeLightSamples;
  }
  piVar1 = &(this->TranslucencyVolumeLightSamples).ArrayMax;
  if (iVar3 == 0) {
    *piVar1 = 2;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FRDGTexture_*>_>
              (8,8,iVar3,0,&(this->TranslucencyVolumeLightSamples).AllocatorInstance,iVar3,piVar1);
    FVar16 = (this->TranslucencyVolumeLightSamples).AllocatorInstance.SecondaryData;
    if (FVar16 == (ForElementType<FRDGTexture_*>)0x0) {
      FVar16 = (ForElementType<FRDGTexture_*>)&this->TranslucencyVolumeLightSamples;
    }
    memcpy((void *)FVar16,(void *)FVar17,(longlong)iVar3 << 3);
  }
  (this->TranslucencyVolumeLightSampleRays).AllocatorInstance.SecondaryData =
       (ForElementType<FRDGTexture_*>)0x0;
  FVar17 = (param_1->TranslucencyVolumeLightSampleRays).AllocatorInstance.SecondaryData;
  iVar3 = (param_1->TranslucencyVolumeLightSampleRays).ArrayNum;
  (this->TranslucencyVolumeLightSampleRays).ArrayNum = iVar3;
  if (FVar17 == (ForElementType<FRDGTexture_*>)0x0) {
    FVar17 = (ForElementType<FRDGTexture_*>)&param_1->TranslucencyVolumeLightSampleRays;
  }
  piVar1 = &(this->TranslucencyVolumeLightSampleRays).ArrayMax;
  if (iVar3 == 0) {
    *piVar1 = 2;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FRDGTexture_*>_>
              (8,8,iVar3,0,&(this->TranslucencyVolumeLightSampleRays).AllocatorInstance,iVar3,piVar1
              );
    FVar16 = (this->TranslucencyVolumeLightSampleRays).AllocatorInstance.SecondaryData;
    if (FVar16 == (ForElementType<FRDGTexture_*>)0x0) {
      FVar16 = (ForElementType<FRDGTexture_*>)&this->TranslucencyVolumeLightSampleRays;
    }
    memcpy((void *)FVar16,(void *)FVar17,(longlong)iVar3 << 3);
  }
  pTVar2 = &this->ShadingTileTypes;
  this->TranslucencyVolumeVisibleLightHashBufferSize =
       param_1->TranslucencyVolumeVisibleLightHashBufferSize;
  *(undefined8 *)&(this->TranslucencyVolumeVisibleLightHashTileSize).field0_0x0 =
       *(undefined8 *)&(param_1->TranslucencyVolumeVisibleLightHashTileSize).field0_0x0;
  (this->TranslucencyVolumeVisibleLightHashTileSize).field0_0x0._s_0.Z =
       (param_1->TranslucencyVolumeVisibleLightHashTileSize).field0_0x0._s_0.Z;
  *(undefined8 *)&(this->TranslucencyVolumeVisibleLightHashSizeInTiles).field0_0x0 =
       *(undefined8 *)&(param_1->TranslucencyVolumeVisibleLightHashSizeInTiles).field0_0x0;
  (this->TranslucencyVolumeVisibleLightHashSizeInTiles).field0_0x0._s_0.Z =
       (param_1->TranslucencyVolumeVisibleLightHashSizeInTiles).field0_0x0._s_0.Z;
  this->SceneDepth = param_1->SceneDepth;
  this->SceneWorldNormal = param_1->SceneWorldNormal;
  this->DownsampledSceneDepth = param_1->DownsampledSceneDepth;
  this->DownsampledSceneWorldNormal = param_1->DownsampledSceneWorldNormal;
  this->TileIndirectArgs = param_1->TileIndirectArgs;
  this->TileAllocator = param_1->TileAllocator;
  this->TileData = param_1->TileData;
  this->DownsampledTileIndirectArgs = param_1->DownsampledTileIndirectArgs;
  this->DownsampledTileAllocator = param_1->DownsampledTileAllocator;
  this->DownsampledTileData = param_1->DownsampledTileData;
  this->LightSamples = param_1->LightSamples;
  this->LightSampleRays = param_1->LightSampleRays;
  piVar1 = &(this->ShadingTileTypes).ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->ShadingTileTypes).ArrayNum;
  _Src = (param_1->ShadingTileTypes).AllocatorInstance.Data;
  (this->ShadingTileTypes).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3 << 2);
  }
  uVar4 = *(undefined8 *)((longlong)&(param_1->HistoryScreenPositionScaleBias).field0_0x0 + 8);
  *(undefined8 *)&(this->HistoryScreenPositionScaleBias).field0_0x0 =
       *(undefined8 *)&(param_1->HistoryScreenPositionScaleBias).field0_0x0;
  *(undefined8 *)((longlong)&(this->HistoryScreenPositionScaleBias).field0_0x0 + 8) = uVar4;
  uVar4 = *(undefined8 *)((longlong)&(param_1->HistoryUVMinMax).field0_0x0 + 8);
  *(undefined8 *)&(this->HistoryUVMinMax).field0_0x0 =
       *(undefined8 *)&(param_1->HistoryUVMinMax).field0_0x0;
  *(undefined8 *)((longlong)&(this->HistoryUVMinMax).field0_0x0 + 8) = uVar4;
  uVar4 = *(undefined8 *)((longlong)&(param_1->HistoryGatherUVMinMax).field0_0x0 + 8);
  *(undefined8 *)&(this->HistoryGatherUVMinMax).field0_0x0 =
       *(undefined8 *)&(param_1->HistoryGatherUVMinMax).field0_0x0;
  *(undefined8 *)((longlong)&(this->HistoryGatherUVMinMax).field0_0x0 + 8) = uVar4;
  uVar4 = *(undefined8 *)((longlong)&(param_1->HistoryBufferSizeAndInvSize).field0_0x0 + 8);
  *(undefined8 *)&(this->HistoryBufferSizeAndInvSize).field0_0x0 =
       *(undefined8 *)&(param_1->HistoryBufferSizeAndInvSize).field0_0x0;
  *(undefined8 *)((longlong)&(this->HistoryBufferSizeAndInvSize).field0_0x0 + 8) = uVar4;
  (this->HistoryVisibleLightHashViewMinInTiles).field0_0x0 =
       (param_1->HistoryVisibleLightHashViewMinInTiles).field0_0x0;
  (this->HistoryVisibleLightHashViewSizeInTiles).field0_0x0 =
       (param_1->HistoryVisibleLightHashViewSizeInTiles).field0_0x0;
  this->DiffuseLightingHistory = param_1->DiffuseLightingHistory;
  this->SpecularLightingHistory = param_1->SpecularLightingHistory;
  this->LightingMomentsHistory = param_1->LightingMomentsHistory;
  this->SceneDepthHistory = param_1->SceneDepthHistory;
  this->SceneNormalAndShadingHistory = param_1->SceneNormalAndShadingHistory;
  this->NumFramesAccumulatedHistory = param_1->NumFramesAccumulatedHistory;
  this->VisibleLightHashHistory = param_1->VisibleLightHashHistory;
  this->VisibleLightMaskHashHistory = param_1->VisibleLightMaskHashHistory;
  this->EncodedReprojectionVector = param_1->EncodedReprojectionVector;
  this->PackedPixelData = param_1->PackedPixelData;
  *(undefined8 *)&(this->HistoryVolumeVisibleLightHashViewSizeInTiles).field0_0x0 =
       *(undefined8 *)&(param_1->HistoryVolumeVisibleLightHashViewSizeInTiles).field0_0x0;
  (this->HistoryVolumeVisibleLightHashViewSizeInTiles).field0_0x0._s_0.Z =
       (param_1->HistoryVolumeVisibleLightHashViewSizeInTiles).field0_0x0._s_0.Z;
  this->VolumeVisibleLightHashHistory = param_1->VolumeVisibleLightHashHistory;
  *(undefined8 *)&(this->HistoryTranslucencyVolumeVisibleLightHashSizeInTiles).field0_0x0 =
       *(undefined8 *)&(param_1->HistoryTranslucencyVolumeVisibleLightHashSizeInTiles).field0_0x0;
  (this->HistoryTranslucencyVolumeVisibleLightHashSizeInTiles).field0_0x0._s_0.Z =
       (param_1->HistoryTranslucencyVolumeVisibleLightHashSizeInTiles).field0_0x0._s_0.Z;
  pFVar10 = param_1->TranslucencyVolumeVisibleLightHashHistory[1];
  this->TranslucencyVolumeVisibleLightHashHistory[0] =
       param_1->TranslucencyVolumeVisibleLightHashHistory[0];
  this->TranslucencyVolumeVisibleLightHashHistory[1] = pFVar10;
  this->ReferenceShadingPassCount = param_1->ReferenceShadingPassCount;
  this->bReferenceMode = param_1->bReferenceMode;
  this->FirstPassStateFrameIndex = param_1->FirstPassStateFrameIndex;
  this->AccumulatedRGBLightingDataFormat = param_1->AccumulatedRGBLightingDataFormat;
  this->AccumulatedRGBALightingDataFormat = param_1->AccumulatedRGBALightingDataFormat;
  this->AccumulatedConfidenceDataFormat = param_1->AccumulatedConfidenceDataFormat;
  this->ResolvedDiffuseLighting = param_1->ResolvedDiffuseLighting;
  this->ResolvedSpecularLighting = param_1->ResolvedSpecularLighting;
  this->ShadingConfidence = param_1->ShadingConfidence;
  this->VolumeResolvedLighting = param_1->VolumeResolvedLighting;
  this->VisibleLightHash = param_1->VisibleLightHash;
  this->VisibleLightMaskHash = param_1->VisibleLightMaskHash;
  this->VolumeVisibleLightHash = param_1->VolumeVisibleLightHash;
  pFVar7 = param_1->TranslucencyVolumeResolvedLightingAmbient[1];
  this->TranslucencyVolumeResolvedLightingAmbient[0] =
       param_1->TranslucencyVolumeResolvedLightingAmbient[0];
  this->TranslucencyVolumeResolvedLightingAmbient[1] = pFVar7;
  pFVar7 = param_1->TranslucencyVolumeResolvedLightingDirectional[1];
  this->TranslucencyVolumeResolvedLightingDirectional[0] =
       param_1->TranslucencyVolumeResolvedLightingDirectional[0];
  this->TranslucencyVolumeResolvedLightingDirectional[1] = pFVar7;
  pFVar10 = param_1->TranslucencyVolumeVisibleLightHash[1];
  this->TranslucencyVolumeVisibleLightHash[0] = param_1->TranslucencyVolumeVisibleLightHash[0];
  this->TranslucencyVolumeVisibleLightHash[1] = pFVar10;
  return this;
}

// DenoiseLighting @ 144e83000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FMegaLightsViewContext::DenoiseLighting(FMegaLightsViewContext *this,FRDGTexture *param_1)

{
  int *piVar1;
  EMegaLightsInput EVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  FGlobalShaderMap *pFVar6;
  FViewInfo *pFVar7;
  FRDGBuilder *pFVar8;
  FSceneViewState *pFVar9;
  FRDGPooledBuffer *pFVar10;
  IPooledRenderTarget *pIVar11;
  code *pcVar12;
  undefined8 uVar13;
  float fVar14;
  TConsoleVariableData<int> *pTVar15;
  TConsoleVariableData<int> *pTVar16;
  TConsoleVariableData<float> *pTVar17;
  bool bVar18;
  bool bVar19;
  int iVar20;
  FRDGTexture *pFVar21;
  FRDGTexture *pFVar22;
  TIntPoint<int>_u_0 *pTVar23;
  FRDGTexture *pFVar24;
  FParameters *this_00;
  TVector<float> *pTVar25;
  FRDGTextureUAV *pFVar26;
  FShaderType *pFVar27;
  FName FVar28;
  FRDGEventName *pFVar29;
  FShaderParametersMetadata *pFVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  FRDGBufferSRV *pFVar33;
  FGlobalShaderType *pFVar34;
  TVector4<float> *pTVar35;
  TIntPoint<int> *pTVar36;
  EPixelFormat EVar37;
  FMegaLightsViewState *pFVar38;
  int iVar39;
  undefined1 uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auStackY_4e8 [32];
  undefined1 local_498 [8];
  FRDGTexture *local_490;
  undefined8 *local_488;
  undefined8 *local_480;
  int local_478;
  int iStack_474;
  undefined4 local_470;
  TIntPoint<int>_u_0_s_0 local_468;
  undefined4 local_460;
  undefined4 local_458;
  undefined4 uStack_454;
  undefined4 local_450;
  undefined4 uStack_44c;
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 local_440;
  undefined4 uStack_43c;
  FRDGTexture *local_438;
  FRDGTexture *local_430;
  FRDGTexture *local_428;
  FRDGTextureUAVDesc local_420;
  FRDGTextureUAVDesc local_408;
  FRDGTextureUAVDesc local_3f0;
  TIntVector3<int>_u_0 local_3d8;
  TIntVector3<int>_u_0 local_3c8;
  TIntVector3<int>_u_0 local_3b8;
  FRDGTextureUAVDesc local_3a8;
  FRDGTextureUAVDesc local_390;
  FRDGBuffer *local_378;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  FRDGTexture *local_368;
  FRDGBufferSRVDesc local_360;
  FRDGBufferSRVDesc local_340;
  FRDGBufferSRVDesc local_320;
  FRDGBufferSRVDesc local_300;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_2d8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_2c8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_2b8;
  undefined1 local_2a8 [8];
  undefined1 local_2a0 [8];
  FString local_298;
  TShaderRefBase<FDenoiserSpatialCS,FShaderMapPointerTable> local_288;
  FString local_278;
  TShaderRefBase<FMegaLightsDebugCS,FShaderMapPointerTable> local_268;
  undefined1 local_258 [8];
  FString local_250;
  TShaderRefBase<FDenoiserTemporalCS,FShaderMapPointerTable> local_238;
  TShaderPermutationDomain<FDenoiserSpatialCS::FSpatialFilter,FDenoiserSpatialCS::FInputType,FDenoiserSpatialCS::FDebugMode>
  local_228;
  TShaderPermutationDomain<FDenoiserTemporalCS::FDownsampleFactorX,FDenoiserTemporalCS::FDownsampleFactorY,FDenoiserTemporalCS::FValidHistory,FDenoiserTemporalCS::FDebugMode>
  local_218;
  TVector<float> local_208;
  FRDGEventName local_1f8;
  FRDGEventName local_1e0;
  FRDGEventName local_1c8;
  TVector4<float> local_1a8;
  undefined1 local_198 [24];
  float local_180;
  int local_17c;
  undefined4 local_178;
  TIntPoint<int>_u_0 local_174;
  undefined4 local_16c;
  undefined2 local_168;
  undefined1 local_166;
  EPixelFormat local_165;
  undefined2 local_164;
  void *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined1 local_148 [24];
  float local_130;
  int local_12c;
  undefined4 local_128;
  TIntPoint<int>_u_0 local_124;
  undefined4 local_11c;
  undefined2 local_118;
  undefined1 local_116;
  EPixelFormat local_115;
  undefined2 local_114;
  void *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined1 local_f8 [24];
  float local_e0;
  int local_dc;
  undefined4 local_d8;
  TIntPoint<int>_u_0 local_d4;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined2 local_c4;
  void *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a8 [24];
  float local_90;
  int local_8c;
  undefined4 local_88;
  TIntPoint<int>_u_0 local_84;
  undefined4 local_7c;
  undefined4 local_78;
  undefined2 local_74;
  void *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  ulonglong local_58;
  
  pTVar15 = CVarMegaLightsLightingDataFormat.Ref;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_4e8;
  local_368 = param_1;
  bVar18 = IsInParallelRenderingThread();
  if ((!bVar18) &&
     (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar18)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pTVar16 = CVarMegaLightsLightingDataFormat.Ref;
  if (pTVar15->ShadowedValue[1] == 2) {
    EVar37 = PF_A32B32G32R32F;
  }
  else {
    bVar18 = IsInParallelRenderingThread();
    if ((!bVar18) &&
       (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar18)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    EVar37 = PF_FloatR11G11B10;
    if (pTVar16->ShadowedValue[1] == 1) {
      EVar37 = PF_FloatRGBA;
    }
  }
  lVar5 = this->View->_padding_;
  pTVar23 = (TIntPoint<int>_u_0 *)(lVar5 + 0x1c8);
  if (*(char *)(lVar5 + 200) == '\0') {
    pTVar23 = &FSceneTexturesConfig::GlobalInstance.Extent.field0_0x0;
  }
  local_174 = (TIntPoint<int>_u_0)*(TIntPoint<int>_u_0 *)&pTVar23->_s_0;
  local_458 = local_174._0_4_;
  uStack_454 = local_174._4_4_;
  local_180 = FClearValueBinding::Black.Value.Color[3];
  local_17c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_198._0_8_ = 0x20008;
  local_198._8_8_ = FClearValueBinding::Black._0_8_;
  local_198._16_8_ = FClearValueBinding::Black.Value._4_8_;
  local_178 = 0;
  local_16c = 0x10001;
  local_168 = 0x101;
  local_166 = 0;
  local_164 = 0xff00;
  local_158 = (void *)0x0;
  local_150 = 0;
  local_14c = 1;
  local_165 = EVar37;
  local_490 = FRDGBuilder::CreateTexture
                        (this->GraphBuilder,(FRDGTextureDesc *)local_198,
                         L"MegaLights.DiffuseLighting",None);
  if (local_158 != (void *)0x0) {
    FMemory::Free(local_158);
  }
  lVar5 = this->View->_padding_;
  pTVar23 = (TIntPoint<int>_u_0 *)(lVar5 + 0x1c8);
  if (*(char *)(lVar5 + 200) == '\0') {
    pTVar23 = &FSceneTexturesConfig::GlobalInstance.Extent.field0_0x0;
  }
  local_124 = (TIntPoint<int>_u_0)*(TIntPoint<int>_u_0 *)&pTVar23->_s_0;
  local_450 = local_124._0_4_;
  uStack_44c = local_124._4_4_;
  local_130 = FClearValueBinding::Black.Value.Color[3];
  local_12c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_148._0_8_ = 0x20008;
  local_148._8_8_ = FClearValueBinding::Black._0_8_;
  local_148._16_8_ = FClearValueBinding::Black.Value._4_8_;
  local_128 = 0;
  local_11c = 0x10001;
  local_118 = 0x101;
  local_116 = 0;
  local_114 = 0xff00;
  local_108 = (void *)0x0;
  local_100 = 0;
  local_fc = 1;
  local_115 = EVar37;
  pFVar21 = FRDGBuilder::CreateTexture
                      (this->GraphBuilder,(FRDGTextureDesc *)local_148,
                       L"MegaLights.SpecularLighting",None);
  local_438 = pFVar21;
  if (local_108 != (void *)0x0) {
    FMemory::Free(local_108);
  }
  lVar5 = this->View->_padding_;
  pTVar23 = (TIntPoint<int>_u_0 *)(lVar5 + 0x1c8);
  if (*(char *)(lVar5 + 200) == '\0') {
    pTVar23 = &FSceneTexturesConfig::GlobalInstance.Extent.field0_0x0;
  }
  local_d4 = (TIntPoint<int>_u_0)*(TIntPoint<int>_u_0 *)&pTVar23->_s_0;
  local_448 = local_d4._0_4_;
  uStack_444 = local_d4._4_4_;
  local_e0 = FClearValueBinding::Black.Value.Color[3];
  local_dc = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_f8._0_8_ = 0x20008;
  local_f8._8_8_ = FClearValueBinding::Black._0_8_;
  local_f8._16_8_ = FClearValueBinding::Black.Value._4_8_;
  local_d8 = 0;
  local_cc = 0x10001;
  local_c8 = 0xa000101;
  local_c4 = 0xff00;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_ac = 1;
  pFVar22 = FRDGBuilder::CreateTexture
                      (this->GraphBuilder,(FRDGTextureDesc *)local_f8,L"MegaLights.LightingMoments",
                       None);
  local_430 = pFVar22;
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  lVar5 = this->View->_padding_;
  pTVar23 = (TIntPoint<int>_u_0 *)(lVar5 + 0x1c8);
  if (*(char *)(lVar5 + 200) == '\0') {
    pTVar23 = &FSceneTexturesConfig::GlobalInstance.Extent.field0_0x0;
  }
  local_84 = (TIntPoint<int>_u_0)*(TIntPoint<int>_u_0 *)&pTVar23->_s_0;
  local_440 = local_84._0_4_;
  uStack_43c = local_84._4_4_;
  local_90 = FClearValueBinding::Black.Value.Color[3];
  local_8c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_a8._0_8_ = 0x20008;
  local_a8._8_8_ = FClearValueBinding::Black._0_8_;
  local_a8._16_8_ = FClearValueBinding::Black.Value._4_8_;
  local_88 = 0;
  local_7c = 0x10001;
  local_78 = 0x3000101;
  local_74 = 0xff00;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_5c = 1;
  pFVar24 = FRDGBuilder::CreateTexture
                      (this->GraphBuilder,(FRDGTextureDesc *)local_a8,
                       L"MegaLights.NumFramesAccumulated",None);
  local_428 = pFVar24;
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if ((((this->DiffuseLightingHistory == (FRDGTexture *)0x0) ||
       (this->SceneDepthHistory == (FRDGTexture *)0x0)) ||
      (this->SceneNormalAndShadingHistory == (FRDGTexture *)0x0)) || (this->bTemporal == false)) {
    uVar40 = 0;
  }
  else {
    uVar40 = 1;
  }
  this_00 = FRDGBuilder::AllocParameters<FDenoiserTemporalCS::FParameters>(this->GraphBuilder);
  FMegaLightsParameters::operator=(&this_00->MegaLightsParameters,&this->MegaLightsParameters);
  this_00->EncodedReprojectionVectorTexture = this->EncodedReprojectionVector;
  this_00->PackedPixelDataTexture = this->PackedPixelData;
  this_00->ResolvedDiffuseLighting = this->ResolvedDiffuseLighting;
  this_00->ResolvedSpecularLighting = this->ResolvedSpecularLighting;
  this_00->ShadingConfidenceTexture = this->ShadingConfidence;
  this_00->DiffuseLightingHistoryTexture = this->DiffuseLightingHistory;
  this_00->SpecularLightingHistoryTexture = this->SpecularLightingHistory;
  this_00->LightingMomentsHistoryTexture = this->LightingMomentsHistory;
  this_00->NumFramesAccumulatedHistoryTexture = this->NumFramesAccumulatedHistory;
  pTVar25 = ComputePixelFormatQuantizationError(&local_208,EVar37);
  *(undefined8 *)&(this_00->TargetFormatQuantizationError).field0_0x0 =
       *(undefined8 *)&pTVar25->field0_0x0;
  (this_00->TargetFormatQuantizationError).field0_0x0._s_0.Z = (pTVar25->field0_0x0)._s_0.Z;
  uVar13 = *(undefined8 *)((longlong)&(this->HistoryScreenPositionScaleBias).field0_0x0 + 8);
  *(undefined8 *)&(this_00->HistoryScreenPositionScaleBias).field0_0x0 =
       *(undefined8 *)&(this->HistoryScreenPositionScaleBias).field0_0x0;
  *(undefined8 *)((longlong)&(this_00->HistoryScreenPositionScaleBias).field0_0x0 + 8) = uVar13;
  uVar13 = *(undefined8 *)((longlong)&(this->HistoryGatherUVMinMax).field0_0x0 + 8);
  *(undefined8 *)&(this_00->HistoryGatherUVMinMax).field0_0x0 =
       *(undefined8 *)&(this->HistoryGatherUVMinMax).field0_0x0;
  *(undefined8 *)((longlong)&(this_00->HistoryGatherUVMinMax).field0_0x0 + 8) = uVar13;
  uVar13 = *(undefined8 *)((longlong)&(this->HistoryBufferSizeAndInvSize).field0_0x0 + 8);
  *(undefined8 *)&(this_00->HistoryBufferSizeAndInvSize).field0_0x0 =
       *(undefined8 *)&(this->HistoryBufferSizeAndInvSize).field0_0x0;
  *(undefined8 *)((longlong)&(this_00->HistoryBufferSizeAndInvSize).field0_0x0 + 8) = uVar13;
  this_00->PrevSceneColorPreExposureCorrection =
       this->View->PreExposure / this->View->PrevViewInfo->SceneColorPreExposure;
  pTVar15 = CVarMegaLightsTemporalMaxFramesAccumulated.Ref;
  bVar18 = IsInParallelRenderingThread();
  if ((!bVar18) &&
     (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar18)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  fVar14 = __real_3f800000;
  fVar42 = (float)pTVar15->ShadowedValue[1];
  if ((float)pTVar15->ShadowedValue[1] <= __real_3f800000) {
    fVar42 = __real_3f800000;
  }
  this_00->TemporalMaxFramesAccumulated = fVar42;
  pTVar17 = CVarMegaLightsTemporalNeighborhoodClampScale.Ref;
  bVar18 = IsInParallelRenderingThread();
  if ((!bVar18) &&
     (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar18)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  this_00->TemporalNeighborhoodClampScale = pTVar17->ShadowedValue[1];
  pTVar15 = CVarMegaLightsTemporalMaxFramesAccumulated.Ref;
  bVar18 = IsInParallelRenderingThread();
  if ((!bVar18) &&
     (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar18)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pTVar16 = CVarMegaLightsTemporalMinFramesAccumulatedForHistoryMiss.Ref;
  fVar42 = (float)pTVar15->ShadowedValue[1];
  if ((float)pTVar15->ShadowedValue[1] <= fVar14) {
    fVar42 = fVar14;
  }
  bVar18 = IsInParallelRenderingThread();
  if ((!bVar18) &&
     (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar18)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  fVar41 = (float)pTVar16->ShadowedValue[1];
  if (fVar42 <= (float)pTVar16->ShadowedValue[1]) {
    fVar41 = fVar42;
  }
  if (fVar41 <= fVar14) {
    fVar41 = fVar14;
  }
  this_00->MinFramesAccumulatedForHistoryMiss = fVar41;
  pTVar15 = CVarMegaLightsTemporalMaxFramesAccumulated.Ref;
  bVar18 = IsInParallelRenderingThread();
  if ((!bVar18) &&
     (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar18)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pTVar16 = CVarMegaLightsTemporalMinFramesAccumulatedForHighConfidence.Ref;
  fVar42 = (float)pTVar15->ShadowedValue[1];
  if ((float)pTVar15->ShadowedValue[1] <= fVar14) {
    fVar42 = fVar14;
  }
  bVar18 = IsInParallelRenderingThread();
  if ((!bVar18) &&
     (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar18)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  local_408.Texture = local_490;
  local_408._padding_._1_1_ = 0;
  local_408._padding_._2_4_ = 0;
  local_408._padding_._6_1_ = 0;
  local_408._padding_._0_1_ = 0;
  fVar41 = (float)pTVar16->ShadowedValue[1];
  if (fVar42 <= (float)pTVar16->ShadowedValue[1]) {
    fVar41 = fVar42;
  }
  if (fVar41 <= fVar14) {
    fVar41 = fVar14;
  }
  this_00->MinFramesAccumulatedForHighConfidence = fVar41;
  local_408._padding_._0_1_ = (local_490->Desc).field_0x34;
  pFVar26 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_408,None);
  this_00->RWDiffuseLighting = pFVar26;
  local_420._padding_._0_1_ = (pFVar21->Desc).field_0x34;
  local_420._padding_._1_1_ = 0;
  local_420._padding_._2_4_ = 0;
  local_420._padding_._6_1_ = 0;
  local_420._padding_._0_1_ = 0;
  local_420.Texture = pFVar21;
  pFVar26 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_420,None);
  this_00->RWSpecularLighting = pFVar26;
  local_390._padding_._0_1_ = (pFVar22->Desc).field_0x34;
  local_390._padding_._1_1_ = 0;
  local_390._padding_._2_4_ = 0;
  local_390._padding_._6_1_ = 0;
  local_390._padding_._0_1_ = 0;
  local_390.Texture = pFVar22;
  pFVar26 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_390,None);
  this_00->RWLightingMoments = pFVar26;
  local_3a8._padding_._0_1_ = (pFVar24->Desc).field_0x34;
  local_3a8._padding_._1_1_ = 0;
  local_3a8._padding_._2_4_ = 0;
  local_3a8._padding_._6_1_ = 0;
  local_3a8._padding_._0_1_ = 0;
  local_3a8.Texture = pFVar24;
  pFVar26 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_3a8,None);
  this_00->RWNumFramesAccumulated = pFVar26;
  iStack_474 = (this->DownsampleFactor).field0_0x0._s_0.Y;
  local_478 = (this->DownsampleFactor).field0_0x0._s_0.X;
  local_468 = (this->DownsampleFactor).field0_0x0._s_0;
  local_470 = CONCAT31(CONCAT21(local_470._2_2_,this->bDebug),uVar40);
  local_460 = local_470;
  pFVar6 = this->View->ShaderMap;
  if (iStack_474 == 2) {
    iVar20 = 1;
  }
  else {
    iVar20 = local_478 + -1;
    if (((1 < iVar20) || (iVar20 < 0)) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("PermutationId < PermutationCount && PermutationId >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                            ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar18)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  iVar39 = local_468.Y + -1;
  if (((1 < iVar39) || (iVar39 < 0)) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("PermutationId < PermutationCount && PermutationId >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                          ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar18)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  iVar20 = iVar20 + ((-(uint)((char)local_460 != '\0') & 2) +
                    iVar39 + (-(uint)(local_460._1_1_ != '\0') & 4)) * 2;
  pFVar27 = (FShaderType *)FDenoiserTemporalCS::GetStaticType();
  FGlobalShaderMap::GetShader(pFVar6,&local_2d8,pFVar27,iVar20);
  if (local_2d8.ShaderContent == (FShader *)0x0) {
    FVar28 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_2a8);
    ::FName::ToString((FName *)FVar28,&local_250);
    FDenoiserTemporalCS::GetStaticType();
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_250.Data.AllocatorInstance.Data);
    }
    if (bVar18) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  FDenoiserTemporalCS::GetStaticType();
  TShaderPermutationDomain<FDenoiserTemporalCS::FDownsampleFactorX,FDenoiserTemporalCS::FDownsampleFactorY,FDenoiserTemporalCS::FValidHistory,FDenoiserTemporalCS::FDebugMode>
  ::
  TShaderPermutationDomain<FDenoiserTemporalCS::FDownsampleFactorX,FDenoiserTemporalCS::FDownsampleFactorY,FDenoiserTemporalCS::FValidHistory,FDenoiserTemporalCS::FDebugMode>
            (&local_218,iVar20);
  pFVar7 = this->View;
  local_238.ShaderContent = (FDenoiserTemporalCS *)local_2d8.ShaderContent;
  local_238.ShaderMap = local_2d8.ShaderMap;
  iVar20 = (*(int *)((longlong)&(pFVar7->ViewRect).field0_0x0 + 8) -
           *(int *)&(pFVar7->ViewRect).field0_0x0) + 7;
  iVar39 = (*(int *)((longlong)&(pFVar7->ViewRect).field0_0x0 + 0xc) -
           *(int *)((longlong)&(pFVar7->ViewRect).field0_0x0 + 4)) + 7;
  pFVar29 = FRDGEventName::FRDGEventName(&local_1f8,1,L"TemporalAccumulation");
  pFVar8 = this->GraphBuilder;
  pFVar30 = FDenoiserTemporalCS::FParameters::FTypeInfo::GetStructMetadata();
  local_3d8._s_0.Z = 1;
  local_3d8._s_0.X = (int)((iVar20 >> 0x1f & 7U) + iVar20) >> 3;
  local_3d8._s_0.Y = (int)((iVar39 >> 0x1f & 7U) + iVar39) >> 3;
  FComputeShaderUtils::AddPass<FDenoiserTemporalCS>
            (pFVar8,pFVar29,Compute,&local_238,pFVar30,this_00,(TIntVector3<int> *)&local_3d8._s_0);
  if (local_1f8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.FormattedEventName.Data.AllocatorInstance.Data);
  }
  pFVar8 = this->GraphBuilder;
  puVar31 = FMemStackBase::Alloc((FMemStackBase *)&pFVar8->_padding_,0x3a0,0x10);
  if (puVar31 == (undefined8 *)0x0) {
    puVar31 = (undefined8 *)0x0;
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("Object",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                        ,0x61,L"");
    if (bVar18) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  else {
    *puVar31 = &___7__TObject_VFParameters_FDenoiserSpatialCS___FRDGAllocator__6B_;
    FMegaLightsParameters::FMegaLightsParameters((FMegaLightsParameters *)(puVar31 + 2));
    puVar31[0x6a] = 0;
    puVar31[0x6b] = 0;
    puVar31[0x6c] = 0;
    puVar31[0x6d] = 0;
    puVar31[0x6e] = 0;
    puVar31[0x6f] = 0;
  }
  local_488 = puVar31;
  if ((((undefined8 **)pFVar8->_padding_ <= &local_488) &&
      (&local_488 < (undefined8 **)pFVar8->_padding_ + *(int *)((longlong)&pFVar8->_padding_ + 4)))
     && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar18)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  iVar20 = (int)pFVar8->_padding_;
  piVar1 = (int *)((longlong)&pFVar8->_padding_ + 4);
  if (iVar20 == *piVar1) {
    iVar20 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&pFVar8->_padding_,piVar1);
  }
  *(int *)&pFVar8->_padding_ = iVar20 + 1;
  *(undefined8 **)(pFVar8->_padding_ + (longlong)iVar20 * 8) = local_488;
  FMegaLightsParameters::operator=
            ((FMegaLightsParameters *)(puVar31 + 2),&this->MegaLightsParameters);
  local_3f0.Texture = local_368;
  local_3f0._padding_._1_1_ = 0;
  local_3f0._padding_._2_4_ = 0;
  local_3f0._padding_._0_1_ = (local_368->Desc).field_0x34;
  local_3f0._padding_._6_1_ = 0;
  local_3f0._padding_._0_1_ = 0;
  pFVar26 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_3f0,None);
  puVar31[0x6a] = pFVar26;
  puVar31[0x6b] = local_490;
  puVar31[0x6c] = local_438;
  puVar31[0x6d] = local_430;
  puVar31[0x6e] = this->ShadingConfidence;
  puVar31[0x6f] = local_428;
  pTVar15 = CVarMegaLightsTemporalMaxFramesAccumulated.Ref;
  bVar18 = IsInParallelRenderingThread();
  if ((!bVar18) &&
     (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar18)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  fVar42 = (float)pTVar15->ShadowedValue[1];
  if ((float)pTVar15->ShadowedValue[1] <= fVar14) {
    fVar42 = fVar14;
  }
  *(float *)(puVar31 + 0x70) = fVar42;
  pTVar17 = CVarMegaLightsSpatialDepthWeightScale.Ref;
  bVar18 = IsInParallelRenderingThread();
  if ((!bVar18) &&
     (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar18)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  *(float *)((longlong)puVar31 + 900) = pTVar17->ShadowedValue[1];
  pTVar17 = CVarMegaLightsSpatialKernelRadius.Ref;
  bVar18 = IsInParallelRenderingThread();
  if ((!bVar18) &&
     (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar18)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  *(float *)(puVar31 + 0x71) = pTVar17->ShadowedValue[1];
  pTVar15 = CVarMegaLightsSpatialNumSamples.Ref;
  bVar18 = IsInParallelRenderingThread();
  if ((!bVar18) &&
     (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar18)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  iVar20 = 0x400;
  if (pTVar15->ShadowedValue[1] < 0x400) {
    iVar20 = pTVar15->ShadowedValue[1];
  }
  iVar39 = 0;
  if (0 < iVar20) {
    iVar39 = iVar20;
  }
  *(int *)((longlong)puVar31 + 0x38c) = iVar39;
  pTVar15 = CVarMegaLightsTemporalMaxFramesAccumulated.Ref;
  bVar18 = IsInParallelRenderingThread();
  if ((!bVar18) &&
     (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar18)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pTVar16 = CVarMegaLightsSpatialMaxDisocclusionFrames.Ref;
  fVar42 = (float)pTVar15->ShadowedValue[1];
  if ((float)pTVar15->ShadowedValue[1] <= fVar14) {
    fVar42 = fVar14;
  }
  bVar18 = IsInParallelRenderingThread();
  if ((!bVar18) &&
     (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar18)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  fVar41 = (float)pTVar16->ShadowedValue[1];
  if (fVar42 - fVar14 <= (float)pTVar16->ShadowedValue[1]) {
    fVar41 = fVar42 - fVar14;
  }
  if (fVar41 <= 0.0) {
    fVar41 = 0.0;
  }
  *(float *)(puVar31 + 0x72) = fVar41;
  *(uint *)((longlong)puVar31 + 0x394) = (uint)(this->bSubPixelShading != false);
  bVar18 = this->bSpatial;
  EVar2 = this->InputType;
  bVar3 = this->bDebug;
  pFVar6 = this->View->ShaderMap;
  if ((HairStrands < EVar2) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("PermutationId < PermutationCount && PermutationId >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                          ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  iVar20 = (uint)(bVar18 != false) + ((-(uint)(bVar3 != false) & 2) + (uint)EVar2) * 2;
  pFVar27 = (FShaderType *)FDenoiserSpatialCS::GetStaticType();
  FGlobalShaderMap::GetShader(pFVar6,&local_2b8,pFVar27,iVar20);
  if (local_2b8.ShaderContent == (FShader *)0x0) {
    FVar28 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_2a0);
    ::FName::ToString((FName *)FVar28,&local_298);
    FDenoiserSpatialCS::GetStaticType();
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.Data.AllocatorInstance.Data);
    }
    if (bVar18) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  FDenoiserSpatialCS::GetStaticType();
  TShaderPermutationDomain<FDenoiserSpatialCS::FSpatialFilter,FDenoiserSpatialCS::FInputType,FDenoiserSpatialCS::FDebugMode>
  ::
  TShaderPermutationDomain<FDenoiserSpatialCS::FSpatialFilter,FDenoiserSpatialCS::FInputType,FDenoiserSpatialCS::FDebugMode>
            (&local_228,iVar20);
  pFVar7 = this->View;
  local_288.ShaderContent = (FDenoiserSpatialCS *)local_2b8.ShaderContent;
  local_288.ShaderMap = local_2b8.ShaderMap;
  iVar20 = (*(int *)((longlong)&(pFVar7->ViewRect).field0_0x0 + 8) -
           *(int *)&(pFVar7->ViewRect).field0_0x0) + 7;
  iVar39 = (*(int *)((longlong)&(pFVar7->ViewRect).field0_0x0 + 0xc) -
           *(int *)((longlong)&(pFVar7->ViewRect).field0_0x0 + 4)) + 7;
  pFVar29 = FRDGEventName::FRDGEventName(&local_1e0,1,L"Spatial");
  pFVar8 = this->GraphBuilder;
  pFVar30 = FDenoiserSpatialCS::FParameters::FTypeInfo::GetStructMetadata();
  local_3c8._s_0.Z = 1;
  local_3c8._s_0.X = (int)((iVar20 >> 0x1f & 7U) + iVar20) >> 3;
  local_3c8._s_0.Y = (int)((iVar39 >> 0x1f & 7U) + iVar39) >> 3;
  FComputeShaderUtils::AddPass<FDenoiserSpatialCS>
            (pFVar8,pFVar29,Compute,&local_288,pFVar30,(FParameters *)(puVar31 + 2),
             (TIntVector3<int> *)&local_3c8._s_0);
  if (local_1e0.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e0.FormattedEventName.Data.AllocatorInstance.Data);
  }
  if ((this->DebugTileClassificationMode != 0) &&
     ((this->DebugTileClassificationMode + -1) / 2 == (uint)this->InputType)) {
    pFVar8 = this->GraphBuilder;
    puVar32 = FMemStackBase::Alloc((FMemStackBase *)&pFVar8->_padding_,0x390,0x10);
    puVar31 = (undefined8 *)0x0;
    if (puVar32 == (undefined8 *)0x0) {
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Object",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                          ,0x61,L"");
      if (bVar18) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
    else {
      puVar32[2] = 0;
      *puVar32 = &___7__TObject_VFParameters_FMegaLightsDebugCS___FRDGAllocator__6B_;
      *(undefined4 *)(puVar32 + 3) = 4;
      FMegaLightsParameters::FMegaLightsParameters((FMegaLightsParameters *)(puVar32 + 4));
      puVar32[0x6c] = 0;
      puVar32[0x6d] = 0;
      puVar32[0x6e] = 0;
      puVar32[0x6f] = 0;
      puVar31 = puVar32;
    }
    local_480 = puVar31;
    if ((((undefined8 **)pFVar8->_padding_ <= &local_480) &&
        (&local_480 < (undefined8 **)pFVar8->_padding_ + *(int *)((longlong)&pFVar8->_padding_ + 4))
        ) && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar18)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    iVar20 = (int)pFVar8->_padding_;
    piVar1 = (int *)((longlong)&pFVar8->_padding_ + 4);
    if (iVar20 == *piVar1) {
      iVar20 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)&pFVar8->_padding_,piVar1);
    }
    *(int *)&pFVar8->_padding_ = iVar20 + 1;
    uStack_370 = 4;
    *(undefined8 **)(pFVar8->_padding_ + (longlong)iVar20 * 8) = local_480;
    local_378 = this->DownsampledTileIndirectArgs;
    *(FRDGBuffer **)&((FParameters *)(puVar31 + 2))->IndirectArgs = local_378;
    puVar31[3] = CONCAT44(uStack_36c,4);
    FMegaLightsParameters::operator=
              ((FMegaLightsParameters *)(puVar31 + 4),&this->MegaLightsParameters);
    local_300.Buffer = this->TileAllocator;
    local_300._padding_._4_4_ = 0;
    local_300._padding_._0_4_ = 0xffffffff;
    local_300._padding_ = 0;
    local_300._padding_._0_1_ = 0;
    if ((((local_300.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_300._padding_._0_1_ = 0x1c;
    }
    pFVar33 = FRDGBuilder::CreateSRV(this->GraphBuilder,&local_300);
    puVar31[0x6c] = pFVar33;
    local_320.Buffer = this->TileData;
    local_320._padding_._0_1_ = 0;
    local_320._padding_._4_4_ = 0;
    local_320._padding_._0_4_ = 0xffffffff;
    local_320._padding_ = 0;
    if ((((local_320.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_320._padding_._0_1_ = 0x1c;
    }
    pFVar33 = FRDGBuilder::CreateSRV(this->GraphBuilder,&local_320);
    puVar31[0x6d] = pFVar33;
    local_360.Buffer = this->DownsampledTileAllocator;
    local_360._padding_._0_1_ = 0;
    local_360._padding_._4_4_ = 0;
    local_360._padding_._0_4_ = 0xffffffff;
    local_360._padding_ = 0;
    if ((((local_360.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_360._padding_._0_1_ = 0x1c;
    }
    pFVar33 = FRDGBuilder::CreateSRV(this->GraphBuilder,&local_360);
    puVar31[0x6e] = pFVar33;
    local_340.Buffer = this->DownsampledTileData;
    local_340._padding_._0_1_ = 0;
    local_340._padding_._4_4_ = 0;
    local_340._padding_._0_4_ = 0xffffffff;
    local_340._padding_ = 0;
    if ((((local_340.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_340._padding_._0_1_ = 0x1c;
    }
    pFVar33 = FRDGBuilder::CreateSRV(this->GraphBuilder,&local_340);
    puVar31[0x6f] = pFVar33;
    *(int *)(puVar31 + 0x70) = this->DebugTileClassificationMode;
    pFVar6 = this->View->ShaderMap;
    pFVar34 = FMegaLightsDebugCS::GetStaticType();
    if (*(int *)&pFVar34->field_0x50 != 1) {
      local_498[0] = 0;
      `FGlobalShaderMap::GetShader<FMegaLightsDebugCS>'::__l2::<lambda_1>::operator()(local_498);
    }
    pFVar27 = (FShaderType *)FMegaLightsDebugCS::GetStaticType();
    FGlobalShaderMap::GetShader(pFVar6,&local_2c8,pFVar27,0);
    if (local_2c8.ShaderContent == (FShader *)0x0) {
      FVar28 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_258);
      ::FName::ToString((FName *)FVar28,&local_278);
      FMegaLightsDebugCS::GetStaticType();
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Shader.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                          ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_278.Data.AllocatorInstance.Data);
      }
      if (bVar18) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
    FMegaLightsDebugCS::GetStaticType();
    local_268.ShaderContent = (FMegaLightsDebugCS *)local_2c8.ShaderContent;
    local_268.ShaderMap = local_2c8.ShaderMap;
    iVar20 = (this->ViewSizeInTiles).field0_0x0._s_0.X * (this->ViewSizeInTiles).field0_0x0._s_0.Y +
             0x3f;
    pFVar29 = FRDGEventName::FRDGEventName(&local_1c8,1,L"Debug");
    pFVar8 = this->GraphBuilder;
    pFVar30 = FMegaLightsDebugCS::FParameters::FTypeInfo::GetStructMetadata();
    local_3b8._s_0.Y = 1;
    local_3b8._s_0.Z = 1;
    local_3b8._s_0.X = (int)((iVar20 >> 0x1f & 0x3fU) + iVar20) >> 6;
    FComputeShaderUtils::AddPass<FMegaLightsDebugCS>
              (pFVar8,pFVar29,Compute,&local_268,pFVar30,(FParameters *)(puVar31 + 2),
               (TIntVector3<int> *)&local_3b8._s_0);
    if (local_1c8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_1c8.FormattedEventName.Data.AllocatorInstance.Data);
    }
  }
  pFVar7 = this->View;
  pFVar9 = pFVar7->ViewState;
  if ((pFVar9 != (FSceneViewState *)0x0) && (pFVar7->bStatePrevViewInfoIsReadOnly == 0)) {
    if (this->InputType == HairStrands) {
      pFVar38 = (FMegaLightsViewState *)&(pFVar9->MegaLights).HairStrands;
    }
    else {
      pFVar38 = &pFVar9->MegaLights;
    }
    pTVar36 = (TIntPoint<int> *)(pFVar7->_padding_ + 0x1c8);
    if (*(char *)(pFVar7->_padding_ + 200) == '\0') {
      pTVar36 = &FSceneTexturesConfig::GlobalInstance.Extent;
    }
    pTVar35 = FSceneView::GetScreenPositionScaleBias(&local_1a8,pTVar36,&pFVar7->ViewRect);
    uVar13 = *(undefined8 *)((longlong)&pTVar35->field0_0x0 + 8);
    *(undefined8 *)&(pFVar38->GBuffer).HistoryScreenPositionScaleBias.field0_0x0 =
         *(undefined8 *)&pTVar35->field0_0x0;
    *(undefined8 *)((longlong)&(pFVar38->GBuffer).HistoryScreenPositionScaleBias.field0_0x0 + 8) =
         uVar13;
    pFVar7 = this->View;
    iVar20 = *(int *)((longlong)&(pFVar7->ViewRect).field0_0x0 + 4);
    iVar39 = *(int *)((longlong)&(pFVar7->ViewRect).field0_0x0 + 8);
    fVar45 = fVar14 / (float)(int)this->SceneTextures->_padding_;
    fVar44 = fVar14 / (float)*(int *)((longlong)&this->SceneTextures->_padding_ + 4);
    iVar4 = *(int *)((longlong)&(pFVar7->ViewRect).field0_0x0 + 0xc);
    (pFVar38->GBuffer).HistoryUVMinMax.field0_0x0._s_0.X =
         (float)*(int *)&(pFVar7->ViewRect).field0_0x0 * fVar45;
    (pFVar38->GBuffer).HistoryUVMinMax.field0_0x0._s_0.Y = (float)iVar20 * fVar44;
    (pFVar38->GBuffer).HistoryUVMinMax.field0_0x0._s_0.Z = (float)iVar39 * fVar45;
    (pFVar38->GBuffer).HistoryUVMinMax.field0_0x0._s_0.W = (float)iVar4 * fVar44;
    fVar42 = __real_3f028f5c;
    pFVar7 = this->View;
    iVar20 = *(int *)((longlong)&(pFVar7->ViewRect).field0_0x0 + 8);
    fVar41 = (float)*(int *)((longlong)&(pFVar7->ViewRect).field0_0x0 + 0xc) - __real_3f028f5c;
    fVar43 = (float)*(int *)((longlong)&(pFVar7->ViewRect).field0_0x0 + 4) + __real_3f028f5c;
    (pFVar38->GBuffer).HistoryGatherUVMinMax.field0_0x0._s_0.X =
         ((float)*(int *)&(pFVar7->ViewRect).field0_0x0 + __real_3f028f5c) * fVar45;
    (pFVar38->GBuffer).HistoryGatherUVMinMax.field0_0x0._s_0.Y = fVar43 * fVar44;
    (pFVar38->GBuffer).HistoryGatherUVMinMax.field0_0x0._s_0.Z = ((float)iVar20 - fVar42) * fVar45;
    (pFVar38->GBuffer).HistoryGatherUVMinMax.field0_0x0._s_0.W = fVar41 * fVar44;
    fVar42 = (float)(int)this->SceneTextures->_padding_;
    fVar41 = (float)*(int *)((longlong)&this->SceneTextures->_padding_ + 4);
    (pFVar38->GBuffer).HistoryBufferSizeAndInvSize.field0_0x0._s_0.X = fVar42;
    (pFVar38->GBuffer).HistoryBufferSizeAndInvSize.field0_0x0._s_0.Y = fVar41;
    (pFVar38->GBuffer).HistoryBufferSizeAndInvSize.field0_0x0._s_0.Z = fVar14 / fVar42;
    (pFVar38->GBuffer).HistoryBufferSizeAndInvSize.field0_0x0._s_0.W = fVar14 / fVar41;
    (pFVar38->GBuffer).HistoryVisibleLightHashViewMinInTiles.field0_0x0 =
         (this->VisibleLightHashViewMinInTiles).field0_0x0;
    (pFVar38->GBuffer).HistoryVisibleLightHashViewSizeInTiles.field0_0x0 =
         (this->VisibleLightHashViewSizeInTiles).field0_0x0;
    *(undefined8 *)&(pFVar38->GBuffer).HistoryVolumeVisibleLightHashViewSizeInTiles.field0_0x0 =
         *(undefined8 *)&(this->VolumeVisibleLightHashViewSizeInTiles).field0_0x0;
    (pFVar38->GBuffer).HistoryVolumeVisibleLightHashViewSizeInTiles.field0_0x0._s_0.Z =
         (this->VolumeVisibleLightHashViewSizeInTiles).field0_0x0._s_0.Z;
    *(undefined8 *)
     &(pFVar38->GBuffer).HistoryTranslucencyVolumeVisibleLightHashSizeInTiles.field0_0x0 =
         *(undefined8 *)&(this->TranslucencyVolumeVisibleLightHashSizeInTiles).field0_0x0;
    (pFVar38->GBuffer).HistoryTranslucencyVolumeVisibleLightHashSizeInTiles.field0_0x0._s_0.Z =
         (this->TranslucencyVolumeVisibleLightHashSizeInTiles).field0_0x0._s_0.Z;
    if (this->bTemporal == false) {
      pIVar11 = (pFVar38->GBuffer).DiffuseLightingHistory.Reference;
      if (pIVar11 != (IPooledRenderTarget *)0x0) {
        (pFVar38->GBuffer).DiffuseLightingHistory.Reference = (IPooledRenderTarget *)0x0;
        (**(code **)(pIVar11->_padding_ + 0x38))();
      }
      pIVar11 = (pFVar38->GBuffer).SpecularLightingHistory.Reference;
      if (pIVar11 != (IPooledRenderTarget *)0x0) {
        (pFVar38->GBuffer).SpecularLightingHistory.Reference = (IPooledRenderTarget *)0x0;
        (**(code **)(pIVar11->_padding_ + 0x38))();
      }
      pIVar11 = (pFVar38->GBuffer).LightingMomentsHistory.Reference;
      if (pIVar11 != (IPooledRenderTarget *)0x0) {
        (pFVar38->GBuffer).LightingMomentsHistory.Reference = (IPooledRenderTarget *)0x0;
        (**(code **)(pIVar11->_padding_ + 0x38))();
      }
      pIVar11 = (pFVar38->GBuffer).NumFramesAccumulatedHistory.Reference;
      if (pIVar11 != (IPooledRenderTarget *)0x0) {
        (pFVar38->GBuffer).NumFramesAccumulatedHistory.Reference = (IPooledRenderTarget *)0x0;
        (**(code **)(pIVar11->_padding_ + 0x38))();
      }
    }
    else {
      FRDGBuilder::QueueTextureExtraction
                (this->GraphBuilder,local_490,(TRefCountPtr<IPooledRenderTarget> *)pFVar38,None);
      FRDGBuilder::QueueTextureExtraction
                (this->GraphBuilder,local_438,&(pFVar38->GBuffer).SpecularLightingHistory,None);
      FRDGBuilder::QueueTextureExtraction
                (this->GraphBuilder,local_430,&(pFVar38->GBuffer).LightingMomentsHistory,None);
      FRDGBuilder::QueueTextureExtraction
                (this->GraphBuilder,local_428,&(pFVar38->GBuffer).NumFramesAccumulatedHistory,None);
    }
    if (this->bGuideByHistory == false) {
      pFVar10 = (pFVar38->GBuffer).VisibleLightHashHistory.Reference;
      if (pFVar10 != (FRDGPooledBuffer *)0x0) {
        (pFVar38->GBuffer).VisibleLightHashHistory.Reference = (FRDGPooledBuffer *)0x0;
        FRefCountBase::Release((FRefCountBase *)pFVar10);
      }
      TRefCountPtr<FRDGPooledBuffer>::operator=
                (&(pFVar38->GBuffer).VisibleLightMaskHashHistory,(FRDGPooledBuffer *)0x0);
    }
    else {
      FRDGBuilder::QueueBufferExtraction
                (this->GraphBuilder,this->VisibleLightHash,
                 &(pFVar38->GBuffer).VisibleLightHashHistory);
      FRDGBuilder::QueueBufferExtraction
                (this->GraphBuilder,this->VisibleLightMaskHash,
                 &(pFVar38->GBuffer).VisibleLightMaskHashHistory);
    }
    if ((this->bVolumeGuideByHistory == false) ||
       (this->VolumeVisibleLightHash == (FRDGBuffer *)0x0)) {
      pFVar10 = (pFVar38->GBuffer).VolumeVisibleLightHashHistory.Reference;
      if (pFVar10 != (FRDGPooledBuffer *)0x0) {
        (pFVar38->GBuffer).VolumeVisibleLightHashHistory.Reference = (FRDGPooledBuffer *)0x0;
        FRefCountBase::Release((FRefCountBase *)pFVar10);
      }
    }
    else {
      FRDGBuilder::QueueBufferExtraction
                (this->GraphBuilder,this->VolumeVisibleLightHash,
                 &(pFVar38->GBuffer).VolumeVisibleLightHashHistory);
    }
    if (((this->bTranslucencyVolumeGuideByHistory == false) ||
        (this->TranslucencyVolumeVisibleLightHash[0] == (FRDGBuffer *)0x0)) ||
       (this->TranslucencyVolumeVisibleLightHash[1] == (FRDGBuffer *)0x0)) {
      pFVar10 = (pFVar38->GBuffer).TranslucencyVolume0VisibleLightHashHistory.Reference;
      if (pFVar10 != (FRDGPooledBuffer *)0x0) {
        (pFVar38->GBuffer).TranslucencyVolume0VisibleLightHashHistory.Reference =
             (FRDGPooledBuffer *)0x0;
        FRefCountBase::Release((FRefCountBase *)pFVar10);
      }
      pFVar10 = (pFVar38->GBuffer).TranslucencyVolume1VisibleLightHashHistory.Reference;
      if (pFVar10 != (FRDGPooledBuffer *)0x0) {
        (pFVar38->GBuffer).TranslucencyVolume1VisibleLightHashHistory.Reference =
             (FRDGPooledBuffer *)0x0;
        FRefCountBase::Release((FRefCountBase *)pFVar10);
      }
    }
    else {
      FRDGBuilder::QueueBufferExtraction
                (this->GraphBuilder,this->TranslucencyVolumeVisibleLightHash[0],
                 &(pFVar38->GBuffer).TranslucencyVolume0VisibleLightHashHistory);
      FRDGBuilder::QueueBufferExtraction
                (this->GraphBuilder,this->TranslucencyVolumeVisibleLightHash[1],
                 &(pFVar38->GBuffer).TranslucencyVolume1VisibleLightHashHistory);
    }
    if (this->InputType == HairStrands) {
      if (this->SceneDepth == (FRDGTexture *)0x0) {
        pIVar11 = (pFVar38->GBuffer).SceneDepthHistory.Reference;
        if (pIVar11 != (IPooledRenderTarget *)0x0) {
          (pFVar38->GBuffer).SceneDepthHistory.Reference = (IPooledRenderTarget *)0x0;
          (**(code **)(pIVar11->_padding_ + 0x38))();
        }
      }
      else {
        FRDGBuilder::QueueTextureExtraction
                  (this->GraphBuilder,this->SceneDepth,&(pFVar38->GBuffer).SceneDepthHistory,None);
      }
      if (this->SceneWorldNormal == (FRDGTexture *)0x0) {
        pIVar11 = (pFVar38->GBuffer).SceneNormalHistory.Reference;
        if (pIVar11 != (IPooledRenderTarget *)0x0) {
          (pFVar38->GBuffer).SceneNormalHistory.Reference = (IPooledRenderTarget *)0x0;
          (**(code **)(pIVar11->_padding_ + 0x38))();
        }
      }
      else {
        FRDGBuilder::QueueTextureExtraction
                  (this->GraphBuilder,this->SceneWorldNormal,&(pFVar38->GBuffer).SceneNormalHistory,
                   None);
      }
    }
  }
  return;
}

// MarkVSMPages @ 144e9dd90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FMegaLightsViewContext::MarkVSMPages(FMegaLightsViewContext *this,FVirtualShadowMapArray *param_1)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  
  pTVar2 = CVarMegaLightsVSMMarkPages.Ref;
  if (this->bUseVSM != false) {
    bVar3 = IsInParallelRenderingThread();
    if (!bVar3) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (pTVar2->ShadowedValue[1] != 0) {
      if (this->InputType == HairStrands) {
        if (2 < (byte)LogRenderer._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
          return;
        }
      }
      else {
        MegaLights::MarkVSMPages
                  (this->View,this->ViewIndex,this->GraphBuilder,param_1,
                   (TIntPoint<int>)(this->SampleBufferSize).field0_0x0._s_0,this->LightSamples,
                   this->LightSampleRays,&this->MegaLightsParameters,this->InputType);
      }
    }
  }
  return;
}

// RayTrace @ 144ea61b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FMegaLightsViewContext::RayTrace
          (FMegaLightsViewContext *this,FVirtualShadowMapArray *param_1,
          TArrayView<FRDGTexture_*,int> *param_2,uint param_3)

{
  EMegaLightsInput EVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  EShaderPlatform EVar5;
  uint uVar6;
  uint uVar7;
  TArrayView<FRDGTexture_*,int> *pTVar8;
  FVirtualShadowMapArray *pFVar9;
  TIntVector3<int>_u_0 local_88;
  TIntVector3<int>_u_0 local_78;
  TArrayView<FRDGTexture_*,int> local_68;
  TArrayView<FRDGTexture_*,int> local_58;
  TArrayView<FRDGTexture_*,int> local_48;
  TArrayView<FRDGTexture_*,int> local_38;
  TArrayView<FRDGTexture_*,int> local_28;
  
  if (this->bDebug != false) {
    EVar5 = FSceneView::GetShaderPlatform((FSceneView *)this->View);
    uVar6 = MegaLights::GetReferenceShadingPassCount(EVar5);
    pTVar3 = CVarMegaLightsReferenceDebuggedPassIndex.Ref;
    bVar4 = IsInParallelRenderingThread();
    if (!bVar4) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar7 = pTVar3->ShadowedValue[1];
    if ((int)uVar7 < 0) {
      uVar7 = uVar7 + uVar6;
    }
    if (param_3 == uVar7) {
      bVar4 = true;
      goto LAB_144ea6255;
    }
  }
  bVar4 = false;
LAB_144ea6255:
  EVar1 = this->InputType;
  pTVar8 = TArrayView<FRDGTexture_*,int>::
           TArrayView<FRDGTexture_*,int><TArray<FRDGTexture_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_&,TArray<FRDGTexture_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>
                     (&local_38,&this->TranslucencyVolumeLightSampleRays);
  local_68.DataPtr = pTVar8->DataPtr;
  local_68.ArrayNum = pTVar8->ArrayNum;
  local_68._12_4_ = *(undefined4 *)&pTVar8->field_0xc;
  pTVar8 = TArrayView<FRDGTexture_*,int>::
           TArrayView<FRDGTexture_*,int><TArray<FRDGTexture_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_&,TArray<FRDGTexture_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>
                     (&local_28,&this->TranslucencyVolumeLightSamples);
  local_88._0_8_ = *(undefined8 *)&(this->TranslucencyVolumeSampleBufferSize).field0_0x0;
  pFVar9 = (FVirtualShadowMapArray *)0x0;
  if (this->bUseVSM != false) {
    pFVar9 = param_1;
  }
  local_58.DataPtr = pTVar8->DataPtr;
  local_58.ArrayNum = pTVar8->ArrayNum;
  local_58._12_4_ = *(undefined4 *)&pTVar8->field_0xc;
  local_88._s_0.Z = (this->TranslucencyVolumeSampleBufferSize).field0_0x0._s_0.Z;
  local_78._s_0.Z = (this->VolumeSampleBufferSize).field0_0x0._s_0.Z;
  local_78._0_8_ = *(undefined8 *)&(this->VolumeSampleBufferSize).field0_0x0;
  local_48.DataPtr = param_2->DataPtr;
  local_48.ArrayNum = param_2->ArrayNum;
  local_48._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MegaLights::RayTraceLightSamples
            (this->ViewFamily,this->View,this->ViewIndex,this->GraphBuilder,this->SceneTextures,
             pFVar9,&local_48,(TIntPoint<int>)(this->SampleBufferSize).field0_0x0._s_0,
             this->LightSamples,this->LightSampleRays,(TIntVector3<int> *)&local_78._s_0,
             this->VolumeLightSamples,this->VolumeLightSampleRays,(TIntVector3<int> *)&local_88._s_0
             ,&local_58,&local_68,&this->MegaLightsParameters,&this->MegaLightsVolumeParameters,
             &this->MegaLightsTranslucencyVolumeParameters,EVar1,bVar4);
  return;
}

// Setup @ 144eab290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FMegaLightsViewContext::Setup
          (FMegaLightsViewContext *this,FRDGTexture *param_1,FLumenSceneFrameTemporaries *param_2,
          bool param_3,bool param_4,TUniformBufferRef<FBlueNoise> param_5,EMegaLightsInput param_6)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  bool bVar2;
  EMegaLightsInput EVar3;
  float fVar4;
  int iVar5;
  FViewInfo *pFVar6;
  TIntPoint<int>_u_0_s_0 TVar7;
  undefined8 uVar8;
  FSceneViewState *pFVar9;
  longlong lVar10;
  TRDGUniformBuffer<FForwardLightUniformParameters> *pTVar11;
  FScene *pFVar12;
  FRDGTexture *pFVar13;
  FRDGTexture *pFVar14;
  FRDGBuilder *pFVar15;
  FGlobalShaderMap *this_00;
  FScriptContainerElement *pFVar16;
  code *pcVar17;
  FRDGTextureSRV *pFVar18;
  undefined4 uVar19;
  TConsoleVariableData<float> *pTVar20;
  TConsoleVariableData<bool> *pTVar21;
  bool bVar22;
  bool bVar23;
  EShaderPlatform EVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  uint uVar32;
  TIntPoint<int>_u_0 TVar33;
  TIntPoint<int> TVar34;
  FRDGTexture *pFVar35;
  longlong lVar36;
  int *piVar37;
  FRDGBuffer *pFVar38;
  FShaderParametersMetadata *pFVar39;
  FSceneUniformBuffer *this_01;
  TRDGUniformBuffer<FSceneUniformParameters> *pTVar40;
  FSceneTextureParameters *pFVar41;
  TRDGUniformBuffer<FSubstrateGlobalUniformParameters> *pTVar42;
  TRDGUniformBuffer<FHairStrandsViewUniformParameters> *pTVar43;
  TRDGUniformBuffer<LightFunctionAtlas::FLightFunctionAtlasGlobalParameters> *pTVar44;
  FSceneLightingChannelParameters *pFVar45;
  TMatrix<double> *pTVar46;
  FHZBParameters *pFVar47;
  TVector<float> *pTVar48;
  FRDGBufferUAV *pFVar49;
  TIntPoint<int>_u_0 *pTVar50;
  FParameters *pFVar51;
  FRDGEventName *pFVar52;
  undefined8 *puVar53;
  FRDGBufferSRV *pFVar54;
  FGlobalShaderType *pFVar55;
  FShaderType *pFVar56;
  FName this_02;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar57;
  byte bVar58;
  EPixelFormat EVar59;
  int iVar60;
  TRefCountPtr<IPooledRenderTarget> *pTVar61;
  TConsoleVariableData<int> *pTVar62;
  TIntPoint<int>_u_0 *pTVar63;
  uchar *puVar64;
  undefined8 *puVar65;
  uint uVar66;
  int iVar67;
  TIntPoint<int>_u_0 TVar68;
  float fVar69;
  undefined1 auStackY_f38 [32];
  undefined1 local_ee8 [2];
  EShaderPlatform local_ee6;
  TRDGUniformBuffer<FForwardLightUniformParameters> *local_ed8;
  EUniformBufferBindingFlags EStack_ed0;
  undefined7 uStack_ecf;
  int local_ec8;
  uint uStack_ec4;
  undefined4 uStack_ec0;
  undefined4 uStack_ebc;
  undefined8 local_eb8;
  int local_eb0;
  uint local_eac;
  int local_ea8;
  int iStack_ea4;
  TIntPoint<int>_u_0 local_ea0;
  undefined8 local_e98;
  TIntPoint<int>_u_0 local_e90;
  TIntPoint<int>_u_0 local_e88;
  TIntPoint<int>_u_0 local_e78;
  TIntPoint<int>_u_0 local_e70;
  TIntPoint<int>_u_0 local_e68;
  undefined8 *local_e60;
  TIntPoint<int>_u_0 local_e58;
  TIntPoint<int>_u_0 local_e50;
  TIntPoint<int>_u_0 local_e48;
  TIntPoint<int>_u_0 local_e40;
  TIntPoint<int>_u_0 local_e38;
  TShaderPermutationDomain<FMegaLightsTileClassificationBuildListsCS::FDownsampleFactorX,FMegaLightsTileClassificationBuildListsCS::FDownsampleFactorY>
  local_e30 [2];
  TShaderPermutationDomain<FMegaLightsTileClassificationBuildListsCS::FDownsampleFactorX,FMegaLightsTileClassificationBuildListsCS::FDownsampleFactorY>
  local_e18;
  FRDGBufferUAVDesc local_e08;
  FRDGBufferUAVDesc local_df8;
  FRDGBufferUAVDesc local_de8;
  FRDGBufferUAVDesc local_dd8;
  FRDGBufferUAVDesc local_dc8;
  FRDGBufferUAVDesc local_db8;
  int local_da8;
  int iStack_da4;
  int local_da0;
  int iStack_d9c;
  int local_d98;
  int iStack_d94;
  int local_d90;
  int iStack_d8c;
  undefined4 local_d88;
  undefined4 uStack_d84;
  undefined4 local_d80;
  undefined4 uStack_d7c;
  undefined4 local_d78;
  undefined4 uStack_d74;
  int local_d70;
  int iStack_d6c;
  undefined4 local_d68;
  undefined4 uStack_d64;
  undefined4 local_d60;
  undefined4 uStack_d5c;
  undefined4 local_d58;
  undefined4 uStack_d54;
  undefined4 local_d50;
  undefined4 uStack_d4c;
  undefined4 local_d48;
  undefined4 uStack_d44;
  undefined4 local_d40;
  undefined4 uStack_d3c;
  undefined4 local_d38;
  undefined4 uStack_d34;
  undefined4 local_d30;
  undefined4 uStack_d2c;
  TUniformBufferRef<FBlueNoise> local_d28;
  FRDGBufferUAVDesc local_d20;
  FRDGBufferUAVDesc local_d10;
  TIntVector3<int>_u_0 local_cf8;
  TIntVector3<int>_u_0 local_ce8;
  undefined8 local_cd8;
  int local_cd0;
  int local_ccc;
  undefined4 uStack_cc8;
  int local_cc4;
  int local_cc0;
  int local_cbc;
  int local_cb8;
  undefined8 local_cb4;
  int local_cac;
  int local_ca8;
  int local_ca4;
  int local_ca0;
  TIntVector3<int>_u_0 local_c98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_c88;
  int local_c68;
  int local_c64;
  int local_c60;
  int local_c5c;
  int local_c58;
  int local_c54;
  int local_c50;
  int local_c4c;
  int local_c48;
  int local_c44;
  TIntPoint<int>_u_0 local_c40;
  undefined8 local_c38;
  undefined8 local_c30;
  undefined8 local_c28;
  undefined8 local_c20;
  TIntPoint<int>_u_0 local_c18;
  FLumenSceneFrameTemporaries *local_c10;
  undefined8 local_c08;
  undefined8 local_c00;
  undefined8 local_bf8;
  int local_bf0;
  TSparseArray<FLightSceneInfoCompact,TAlignedSparseArrayAllocator<16,TAlignedHeapAllocator<16>,FDefaultBitArrayAllocator>_>
  *local_be8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_be0;
  TShaderPermutationDomain<FMegaLightsTileClassificationBuildListsCS::FDownsampleFactorX,FMegaLightsTileClassificationBuildListsCS::FDownsampleFactorY>
  local_bc0;
  TIntPoint<int>_u_0_s_0 local_bb0;
  undefined8 local_ba8;
  TIntPoint<int>_u_0_s_0 local_ba0;
  undefined8 local_b98;
  undefined8 local_b90;
  undefined8 local_b88;
  undefined8 local_b80;
  FRDGBufferSRVDesc local_b78;
  FRDGBufferSRVDesc local_b58;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_b38;
  TPlane<double> local_b28;
  undefined1 local_b08 [16];
  FRDGBufferDesc local_af8;
  TShaderRefBase<FMegaLightsTileClassificationBuildListsCS,FShaderMapPointerTable> local_ae0;
  TShaderRefBase<FMegaLightsTileClassificationBuildListsCS,FShaderMapPointerTable> local_ad0;
  FString local_ac0;
  TShaderRefBase<FInitTileIndirectArgsCS,FShaderMapPointerTable> local_aa8;
  TArray<int,TSizedDefaultAllocator<32>_> local_a98;
  FRDGBufferDesc local_a88;
  FRDGBufferDesc local_a70;
  FRDGBufferDesc local_a58;
  FRDGBufferDesc local_a40;
  FRDGBufferDesc local_a28;
  TPlane<double> local_a08;
  TPlane<double> local_9e8;
  TPlane<double> local_9c8;
  TVector<float> local_9a8;
  FRDGEventName local_998;
  FRDGEventName local_980;
  FRDGEventName local_968;
  FSceneLightingChannelParameters local_948;
  FSceneTextureParameters local_938;
  FHZBParameters local_8e8;
  undefined1 local_818 [56];
  undefined1 local_7e0 [8];
  void *local_7d8;
  undefined4 local_7d0;
  undefined4 local_7cc;
  undefined1 local_7c8 [56];
  undefined1 local_790 [8];
  void *local_788;
  undefined4 local_780;
  undefined4 local_77c;
  undefined1 local_778 [64];
  void *local_738;
  undefined4 local_730;
  undefined4 local_72c;
  undefined1 local_728 [64];
  void *local_6e8;
  undefined4 local_6e0;
  undefined4 local_6dc;
  undefined1 local_6d8 [24];
  float local_6c0;
  int local_6bc;
  undefined4 local_6b8;
  undefined8 local_6b4;
  undefined4 local_6ac;
  undefined4 local_6a8;
  undefined2 local_6a4;
  void *local_698;
  undefined4 local_690;
  undefined4 local_68c;
  undefined1 local_688 [24];
  float local_670;
  int local_66c;
  undefined4 local_668;
  TIntPoint<int>_u_0_s_0 local_664;
  undefined4 local_65c;
  undefined4 local_658;
  undefined2 local_654;
  void *local_648;
  undefined4 local_640;
  undefined4 local_63c;
  undefined1 local_638 [24];
  float local_620;
  int local_61c;
  undefined4 local_618;
  TIntPoint<int>_u_0_s_0 local_614;
  undefined4 local_60c;
  undefined4 local_608;
  undefined2 local_604;
  void *local_5f8;
  undefined4 local_5f0;
  undefined4 local_5ec;
  undefined1 local_5e8 [24];
  float local_5d0;
  int local_5cc;
  undefined4 local_5c8;
  TIntPoint<int>_u_0 local_5c4;
  undefined4 local_5bc;
  undefined4 local_5b8;
  undefined2 local_5b4;
  void *local_5a8;
  undefined4 local_5a0;
  undefined4 local_59c;
  undefined1 local_598 [24];
  float local_580;
  int local_57c;
  undefined4 local_578;
  TIntPoint<int>_u_0 local_574;
  undefined4 local_56c;
  undefined4 local_568;
  undefined2 local_564;
  void *local_558;
  undefined4 local_550;
  undefined4 local_54c;
  undefined1 local_548 [24];
  float local_530;
  int local_52c;
  undefined4 local_528;
  undefined8 local_524;
  undefined4 local_51c;
  undefined4 local_518;
  undefined2 local_514;
  void *local_508;
  undefined4 local_500;
  undefined4 local_4fc;
  TMatrix<double> local_4f8;
  TMatrix<double> local_478;
  TMatrix<double> local_3f8;
  TMatrix<double> local_378;
  TMatrix<double> local_2f8;
  TMatrix<double> local_278;
  TMatrix<double> local_1f8;
  TMatrix<double> local_178;
  TMatrix<double> local_f8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_f38;
  TVar68 = (TIntPoint<int>_u_0)0x0;
  bVar23 = false;
  local_d28 = param_5;
  if ((0 < GMegaLightsResetEveryNthFrame) &&
     (this->ViewFamily->FrameNumber % (uint)GMegaLightsResetEveryNthFrame == 0)) {
    bVar23 = true;
  }
  if (GMegaLightsReset != 0) {
    GMegaLightsReset = 0;
    bVar23 = true;
  }
  this->InputType = param_6;
  this->bShouldRenderTranslucencyVolume = param_4;
  this->bShouldRenderVolumetricFog = param_3;
  local_e98 = (TVector2<float>_u_0)param_1;
  local_c10 = param_2;
  bVar22 = MegaLights::UseVolume();
  if ((bVar22) &&
     (iVar25 = TConsoleVariableData<int>::GetValueOnRenderThread(CVarMegaLightsVolumeUnified.Ref),
     iVar25 != 0)) {
    bVar22 = true;
  }
  else {
    bVar22 = false;
  }
  this->bUnifiedVolume = bVar22;
  bVar22 = MegaLights::UseVolume();
  if ((bVar22) &&
     ((this->bShouldRenderVolumetricFog != false ||
      ((this->bUnifiedVolume != false && (this->bShouldRenderTranslucencyVolume != false)))))) {
    bVar22 = true;
  }
  else {
    bVar22 = false;
  }
  this->bVolumeEnabled = bVar22;
  iVar25 = MegaLights::GetDebugMode(this->InputType);
  this->bDebug = iVar25 != 0;
  iVar25 = MegaLightsVolume::GetDebugMode();
  this->bVolumeDebug = iVar25 != 0;
  iVar25 = MegaLightsTranslucencyVolume::GetDebugMode();
  this->bTranslucencyVolumeDebug = iVar25 != 0;
  iVar25 = TConsoleVariableData<int>::GetValueOnRenderThread
                     (CVarMegaLightsDebugTileClassification.Ref);
  this->DebugTileClassificationMode = iVar25;
  iVar25 = MegaLights::GetVisualizeLightLoopIterationsMode();
  this->VisualizeLightLoopIterationsMode = iVar25;
  pTVar62 = CVarMegaLightsNumSamplesPerPixel.Ref;
  if ((this->InputType == GBuffer) ||
     (pTVar62 = CVarMegaLightsNumSamplesPerPixelHairStrands.Ref, this->InputType == HairStrands)) {
    bVar22 = IsInParallelGameThread();
    if (bVar22) {
LAB_144eab448:
      TVar33 = TVar68;
    }
    else {
      bVar22 = IsInGameThread();
      TVar33 = (TIntPoint<int>_u_0)0x4;
      if (bVar22) goto LAB_144eab448;
    }
    iVar25 = *(int *)((longlong)pTVar62->ShadowedValue + (longlong)TVar33);
    if (iVar25 < 0x10) {
      TVar33 = (TIntPoint<int>_u_0)0x100000002;
      if (3 < iVar25) {
        TVar33 = (TIntPoint<int>_u_0)&DAT_200000002;
      }
    }
    else {
      TVar33 = (TIntPoint<int>_u_0)0x400000004;
    }
  }
  else {
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MegaLights\\MegaLights.cpp"
                        ,699,L"MegaLight::GetNumSamplesPerPixel2d not implemented");
    TVar33 = TVar68;
    if (bVar22) {
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
  }
  (this->NumSamplesPerPixel2d).field0_0x0 = TVar33;
  pTVar62 = CVarMegaLightsVolumeNumSamplesPerVoxel.Ref;
  bVar22 = IsInParallelGameThread();
  if (bVar22) {
LAB_144eab4a0:
    TVar33 = TVar68;
  }
  else {
    bVar22 = IsInGameThread();
    TVar33 = (TIntPoint<int>_u_0)0x4;
    if (bVar22) goto LAB_144eab4a0;
  }
  iVar25 = *(int *)((longlong)pTVar62->ShadowedValue + (longlong)TVar33);
  (this->NumSamplesPerVoxel3d).field0_0x0._s_0.X = 2;
  (this->NumSamplesPerVoxel3d).field0_0x0._s_0.Y = (3 < iVar25) + 1;
  (this->NumSamplesPerVoxel3d).field0_0x0._s_0.Z = 1;
  pTVar62 = CVarMegaLightsTranslucencyVolumeNumSamplesPerVoxel.Ref;
  bVar22 = IsInParallelGameThread();
  if (bVar22) {
LAB_144eab4ec:
    TVar33 = TVar68;
  }
  else {
    bVar22 = IsInGameThread();
    TVar33 = (TIntPoint<int>_u_0)0x4;
    if (bVar22) goto LAB_144eab4ec;
  }
  iVar25 = *(int *)((longlong)pTVar62->ShadowedValue + (longlong)TVar33);
  (this->NumSamplesPerTranslucencyVoxel3d).field0_0x0._s_0.X = 2;
  (this->NumSamplesPerTranslucencyVoxel3d).field0_0x0._s_0.Y = (3 < iVar25) + 1;
  (this->NumSamplesPerTranslucencyVoxel3d).field0_0x0._s_0.Z = 1;
  FSceneView::GetShaderPlatform((FSceneView *)this->View);
  TVar34 = MegaLights::GetDownsampleFactorXY(GBuffer,(ushort)this->InputType);
  pFVar6 = this->View;
  local_548._0_8_ = 0x20008;
  TVar7 = *(TIntPoint<int>_u_0_s_0 *)TVar34.field0_0x0;
  (this->DownsampleFactor).field0_0x0._s_0 = TVar7;
  iVar25 = (this->NumSamplesPerPixel2d).field0_0x0._s_0.Y;
  iVar27 = TVar7.X;
  local_ea8 = ((*(int *)((longlong)&(pFVar6->ViewRect).field0_0x0 + 8) -
               *(int *)&(pFVar6->ViewRect).field0_0x0) + -1 + iVar27) / iVar27;
  iVar60 = (this->NumSamplesPerPixel2d).field0_0x0._s_0.X;
  iVar28 = TVar7.Y;
  iVar26 = ((*(int *)((longlong)&(pFVar6->ViewRect).field0_0x0 + 0xc) -
            *(int *)((longlong)&(pFVar6->ViewRect).field0_0x0 + 4)) + -1 + iVar28) / iVar28;
  TVar68._s_0.Y = iVar26;
  TVar68._s_0.X = local_ea8;
  local_c18._s_0.Y = iVar25 * iVar26;
  local_c18._s_0.X = iVar60 * local_ea8;
  lVar36 = this->SceneTextures->_padding_;
  iVar27 = ((int)lVar36 + -1 + iVar27) / iVar27;
  local_e50._s_0.X = iVar27 * iVar60;
  iVar28 = ((int)((ulonglong)lVar36 >> 0x20) + -1 + iVar28) / iVar28;
  local_e50._s_0.Y = iVar28 * iVar25;
  (this->SampleBufferSize).field0_0x0 = local_e50;
  local_e90._s_0.Y = iVar28 * (this->NumSamplesPerPixel2d).field0_0x0._s_0.Y;
  local_e90._s_0.X = local_e50._s_0.X;
  (this->DonwnsampledSampleBufferSize).field0_0x0 = local_e90;
  local_530 = FClearValueBinding::Black.Value.Color[3];
  local_4fc = 1;
  local_52c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_524._4_4_ = iVar28;
  local_524._0_4_ = iVar27;
  local_548._8_8_ = FClearValueBinding::Black._0_8_;
  local_548._16_8_ = FClearValueBinding::Black.Value._4_8_;
  local_528 = 0;
  local_51c = 0x10001;
  local_518 = 0xd000101;
  local_514 = 0xff00;
  local_508 = (void *)0x0;
  local_500 = 0;
  iStack_ea4 = iVar26;
  local_da8 = iVar27;
  iStack_da4 = iVar28;
  local_c40 = TVar68;
  pFVar35 = FRDGBuilder::CreateTexture
                      (this->GraphBuilder,(FRDGTextureDesc *)local_548,
                       L"MegaLights.DownsampledSceneDepth",None);
  this->DownsampledSceneDepth = pFVar35;
  if (local_508 != (void *)0x0) {
    FMemory::Free(local_508);
  }
  local_6c0 = FClearValueBinding::Black.Value.Color[3];
  local_6bc = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_6b4._4_4_ = iVar28;
  local_6b4._0_4_ = iVar27;
  local_6d8._0_8_ = 0x20008;
  local_6d8._8_8_ = FClearValueBinding::Black._0_8_;
  local_6d8._16_8_ = FClearValueBinding::Black.Value._4_8_;
  local_6b8 = 0;
  local_6ac = 0x10001;
  local_6a8 = 0x12000101;
  local_6a4 = 0xff00;
  local_698 = (void *)0x0;
  local_690 = 0;
  local_68c = 1;
  local_da0 = iVar27;
  iStack_d9c = iVar28;
  pFVar35 = FRDGBuilder::CreateTexture
                      (this->GraphBuilder,(FRDGTextureDesc *)local_6d8,
                       L"MegaLights.DownsampledSceneWorldNormal",None);
  this->DownsampledSceneWorldNormal = pFVar35;
  if (local_698 != (void *)0x0) {
    FMemory::Free(local_698);
  }
  local_664 = (this->DonwnsampledSampleBufferSize).field0_0x0._s_0;
  local_d98 = local_664.X;
  iStack_d94 = local_664.Y;
  local_670 = FClearValueBinding::Black.Value.Color[3];
  local_66c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_688._0_8_ = 0x20008;
  local_688._8_8_ = FClearValueBinding::Black._0_8_;
  local_688._16_8_ = FClearValueBinding::Black.Value._4_8_;
  local_668 = 0;
  local_65c = 0x10001;
  local_658 = 0x1c000101;
  local_654 = 0xff00;
  local_648 = (void *)0x0;
  local_640 = 0;
  local_63c = 1;
  pFVar35 = FRDGBuilder::CreateTexture
                      (this->GraphBuilder,(FRDGTextureDesc *)local_688,L"MegaLights.LightSamples",
                       None);
  this->LightSamples = pFVar35;
  if (local_648 != (void *)0x0) {
    FMemory::Free(local_648);
  }
  local_614 = (this->DonwnsampledSampleBufferSize).field0_0x0._s_0;
  local_d90 = local_614.X;
  iStack_d8c = local_614.Y;
  local_620 = FClearValueBinding::Black.Value.Color[3];
  local_61c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_638._0_8_ = 0x20008;
  local_638._8_8_ = FClearValueBinding::Black._0_8_;
  local_638._16_8_ = FClearValueBinding::Black.Value._4_8_;
  local_618 = 0;
  local_60c = 0x10001;
  local_608 = 0x1c000101;
  local_604 = 0xff00;
  local_5f8 = (void *)0x0;
  local_5f0 = 0;
  local_5ec = 1;
  pFVar35 = FRDGBuilder::CreateTexture
                      (this->GraphBuilder,(FRDGTextureDesc *)local_638,L"MegaLights.LightSampleRays"
                       ,None);
  this->LightSampleRays = pFVar35;
  if (local_5f8 != (void *)0x0) {
    FMemory::Free(local_5f8);
  }
  bVar22 = MegaLights::SupportsSpatialFilter(this->InputType);
  pTVar21 = CVarMegaLightsSpatial.Ref;
  if (bVar22) {
    bVar22 = IsInParallelRenderingThread();
    if ((!bVar22) &&
       (bVar22 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar22)) {
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
    if (pTVar21->ShadowedValue[1] != false) {
      bVar22 = true;
      goto LAB_144eab9a0;
    }
  }
  bVar22 = false;
LAB_144eab9a0:
  this->bSpatial = bVar22;
  pTVar21 = CVarMegaLightsTemporal.Ref;
  bVar22 = IsInParallelRenderingThread();
  if ((!bVar22) &&
     (bVar22 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar22)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  pFVar6 = this->View;
  this->bTemporal = pTVar21->ShadowedValue[1];
  local_d88 = 8;
  uStack_d84 = 8;
  lVar36 = this->SceneTextures->_padding_;
  local_c38._4_4_ = (int)((ulonglong)lVar36 >> 0x20);
  local_d80 = 8;
  local_c30 = CONCAT44(local_c38._4_4_ + 8,(int)lVar36 + 8);
  uStack_d7c = 8;
  local_d78 = 8;
  local_e48._s_0.X = ((int)lVar36 + 7) / 8;
  uStack_d74 = 8;
  local_e48._s_0.Y = (local_c38._4_4_ + 7) / 8;
  (this->VisibleLightHashSizeInTiles).field0_0x0 = local_e48;
  uVar8 = *(undefined8 *)&(pFVar6->ViewRect).field0_0x0;
  local_c28._4_4_ = (int)((ulonglong)uVar8 >> 0x20);
  local_b90 = CONCAT44(local_c28._4_4_ + 8,(int)uVar8 + 8);
  local_e40._s_0.Y = (local_c28._4_4_ + 7) / 8;
  local_e40._s_0.X = ((int)uVar8 + 7) / 8;
  (this->VisibleLightHashViewMinInTiles).field0_0x0 = local_e40;
  iVar25 = *(int *)((longlong)&(pFVar6->ViewRect).field0_0x0 + 0xc) -
           *(int *)((longlong)&(pFVar6->ViewRect).field0_0x0 + 4);
  iVar60 = *(int *)((longlong)&(pFVar6->ViewRect).field0_0x0 + 8) -
           *(int *)&(pFVar6->ViewRect).field0_0x0;
  local_c20 = CONCAT44(iVar25 + 8,iVar60 + 8);
  this->VisibleLightHashBufferSize = local_e48._s_0.Y * local_e48._s_0.X * 4;
  bVar22 = this->bShouldRenderTranslucencyVolume;
  bVar2 = this->bShouldRenderVolumetricFog;
  local_e38._s_0.Y = (iVar25 + 7) / 8;
  local_e38._s_0.X = (iVar60 + 7) / 8;
  (this->VisibleLightHashViewSizeInTiles).field0_0x0 = local_e38;
  local_c38 = lVar36;
  local_c28 = uVar8;
  SetupMegaLightsVolumeData(pFVar6,bVar2,bVar22,&this->VolumeParameters);
  if (this->bShouldRenderVolumetricFog != false) {
    SetupVolumetricFogGlobalData(this->View,&this->VolumetricFogParamaters);
  }
  if (this->bUnifiedVolume == false) {
    iVar25 = (this->VolumetricFogParamaters).ViewGridSizeInt.field0_0x0._s_0.Z;
    *(undefined8 *)&(this->VolumeParameters).ViewGridSizeInt.field0_0x0 =
         *(undefined8 *)&(this->VolumetricFogParamaters).ViewGridSizeInt.field0_0x0;
    uVar8 = *(undefined8 *)&(this->VolumetricFogParamaters).ViewGridSize.field0_0x0;
    (this->VolumeParameters).ViewGridSizeInt.field0_0x0._s_0.Z = iVar25;
    fVar4 = (this->VolumetricFogParamaters).ViewGridSize.field0_0x0._s_0.Z;
    *(undefined8 *)&(this->VolumeParameters).ViewGridSize.field0_0x0 = uVar8;
    uVar8 = *(undefined8 *)&(this->VolumetricFogParamaters).ResourceGridSizeInt.field0_0x0;
    (this->VolumeParameters).ViewGridSize.field0_0x0._s_0.Z = fVar4;
    iVar25 = (this->VolumetricFogParamaters).ResourceGridSizeInt.field0_0x0._s_0.Z;
    *(undefined8 *)&(this->VolumeParameters).ResourceGridSizeInt.field0_0x0 = uVar8;
    uVar8 = *(undefined8 *)&(this->VolumetricFogParamaters).ResourceGridSize.field0_0x0;
    (this->VolumeParameters).ResourceGridSizeInt.field0_0x0._s_0.Z = iVar25;
    fVar4 = (this->VolumetricFogParamaters).ResourceGridSize.field0_0x0._s_0.Z;
    *(undefined8 *)&(this->VolumeParameters).ResourceGridSize.field0_0x0 = uVar8;
    uVar8 = *(undefined8 *)&(this->VolumetricFogParamaters).GridZParams.field0_0x0;
    (this->VolumeParameters).ResourceGridSize.field0_0x0._s_0.Z = fVar4;
    fVar4 = (this->VolumetricFogParamaters).GridZParams.field0_0x0._s_0.Z;
    *(undefined8 *)&(this->VolumeParameters).GridZParams.field0_0x0 = uVar8;
    (this->VolumeParameters).GridZParams.field0_0x0._s_0.Z = fVar4;
    (this->VolumeParameters).SVPosToVolumeUV.field0_0x0 =
         (this->VolumetricFogParamaters).SVPosToVolumeUV.field0_0x0;
    (this->VolumeParameters).FogGridToPixelXY.field0_0x0 =
         (this->VolumetricFogParamaters).FogGridToPixelXY.field0_0x0;
    (this->VolumeParameters).MaxDistance = (this->VolumetricFogParamaters).MaxDistance;
  }
  EVar24 = FSceneView::GetShaderPlatform((FSceneView *)this->View);
  pTVar62 = CVarMegaLightsVolumeDownsampleMode.Ref;
  bVar22 = IsInParallelGameThread();
  if ((bVar22) || (bVar22 = IsInGameThread(), bVar22)) {
    lVar36 = 0;
  }
  else {
    lVar36 = 4;
  }
  iVar25 = 2;
  if (*(int *)((longlong)pTVar62->ShadowedValue + lVar36) < 2) {
    iVar25 = *(int *)((longlong)pTVar62->ShadowedValue + lVar36);
  }
  iVar60 = 0;
  if (0 < iVar25) {
    iVar60 = iVar25;
  }
  uVar29 = MegaLights::GetReferenceShadingPassCount(EVar24);
  *(undefined8 *)&(this->VolumeViewSize).field0_0x0 =
       *(undefined8 *)&(this->VolumeParameters).ViewGridSizeInt.field0_0x0;
  uVar66 = (iVar60 == 2) + 1;
  if (1 < uVar29) {
    uVar66 = 1;
  }
  uVar8 = *(undefined8 *)&(this->VolumeParameters).ResourceGridSizeInt.field0_0x0;
  (this->VolumeViewSize).field0_0x0._s_0.Z =
       (this->VolumeParameters).ViewGridSizeInt.field0_0x0._s_0.Z;
  iVar25 = (this->VolumeParameters).ResourceGridSizeInt.field0_0x0._s_0.Z;
  *(undefined8 *)&(this->VolumeBufferSize).field0_0x0 = uVar8;
  (this->VolumeBufferSize).field0_0x0._s_0.Z = iVar25;
  local_e88._0_4_ = (undefined4)uVar8;
  local_ed8 = *(TRDGUniformBuffer<FForwardLightUniformParameters> **)
               &(this->VolumeParameters).ViewGridSizeInt.field0_0x0;
  this->VolumeDownsampleFactor = uVar66;
  iVar67 = (int)(local_e88._0_4_ + -1 + uVar66) / (int)uVar66;
  local_e88._s_0.Y = (int)((ulonglong)uVar8 >> 0x20);
  local_e88._s_0.X = (int)(local_e88._s_0.Y + -1 + uVar66) / (int)uVar66;
  iVar60 = (this->VolumeParameters).ViewGridSizeInt.field0_0x0._s_0.Z;
  local_eb0 = (int)(iVar25 + -1 + uVar66) / (int)uVar66;
  (this->VolumeDownsampledViewSize).field0_0x0._s_0.X =
       (int)((int)local_ed8 + -1 + uVar66) / (int)uVar66;
  (this->VolumeDownsampledViewSize).field0_0x0._s_0.Y =
       (int)((int)((ulonglong)local_ed8 >> 0x20) + -1 + uVar66) / (int)uVar66;
  (this->VolumeDownsampledViewSize).field0_0x0._s_0.Z = (int)(iVar60 + -1 + uVar66) / (int)uVar66;
  local_cd0 = (this->VolumeDownsampledViewSize).field0_0x0._s_0.Z;
  uVar8 = *(undefined8 *)&(this->VolumeDownsampledViewSize).field0_0x0;
  iVar25 = (this->NumSamplesPerVoxel3d).field0_0x0._s_0.X;
  iVar60 = (this->NumSamplesPerVoxel3d).field0_0x0._s_0.Y;
  iVar30 = (this->NumSamplesPerVoxel3d).field0_0x0._s_0.Z;
  local_cd8._0_4_ = (int)uVar8;
  local_ec8 = (int)local_cd8 * iVar25;
  local_cd8._4_4_ = (int)((ulonglong)uVar8 >> 0x20);
  uStack_ec4 = local_cd8._4_4_ * iVar60;
  local_eac = local_cd0 * iVar30;
  (this->VolumeSampleBufferSize).field0_0x0._s_0.X = iVar67 * iVar25;
  (this->VolumeSampleBufferSize).field0_0x0._s_0.Y = local_e88._s_0.X * iVar60;
  (this->VolumeSampleBufferSize).field0_0x0._s_0.Z = local_eb0 * iVar30;
  (this->VolumeVisibleLightHashTileSize).field0_0x0._s_0.X = 4;
  (this->VolumeVisibleLightHashTileSize).field0_0x0._s_0.Y = 4;
  (this->VolumeVisibleLightHashTileSize).field0_0x0._s_0.Z = 2;
  iVar25 = (this->VolumeVisibleLightHashTileSize).field0_0x0._s_0.Y;
  iVar60 = (this->VolumeVisibleLightHashTileSize).field0_0x0._s_0.Z;
  iVar30 = (this->VolumeBufferSize).field0_0x0._s_0.Y;
  iVar31 = (this->VolumeVisibleLightHashTileSize).field0_0x0._s_0.X;
  iVar5 = (this->VolumeBufferSize).field0_0x0._s_0.Z;
  (this->VolumeVisibleLightHashSizeInTiles).field0_0x0._s_0.X =
       ((this->VolumeBufferSize).field0_0x0._s_0.X + -1 + iVar31) / iVar31;
  (this->VolumeVisibleLightHashSizeInTiles).field0_0x0._s_0.Y = (iVar30 + -1 + iVar25) / iVar25;
  (this->VolumeVisibleLightHashSizeInTiles).field0_0x0._s_0.Z = (iVar60 + -1 + iVar5) / iVar60;
  iVar30 = (this->VolumeViewSize).field0_0x0._s_0.Y;
  iVar5 = (this->VolumeViewSize).field0_0x0._s_0.Z;
  (this->VolumeVisibleLightHashViewSizeInTiles).field0_0x0._s_0.X =
       (iVar31 + -1 + (this->VolumeViewSize).field0_0x0._s_0.X) / iVar31;
  (this->VolumeVisibleLightHashViewSizeInTiles).field0_0x0._s_0.Y = (iVar30 + -1 + iVar25) / iVar25;
  (this->VolumeVisibleLightHashViewSizeInTiles).field0_0x0._s_0.Z = (iVar60 + -1 + iVar5) / iVar60;
  this->VolumeVisibleLightHashBufferSize =
       (this->VolumeVisibleLightHashSizeInTiles).field0_0x0._s_0.Z *
       (this->VolumeVisibleLightHashSizeInTiles).field0_0x0._s_0.Y *
       (this->VolumeVisibleLightHashSizeInTiles).field0_0x0._s_0.X * 4;
  local_cd8 = uVar8;
  if (this->bUnifiedVolume == false) {
    local_ee6 = FSceneView::GetShaderPlatform((FSceneView *)this->View);
    pTVar62 = CVarMegaLightsTranslucencyVolumeDownsampleFactor.Ref;
    bVar22 = IsInParallelGameThread();
    if ((bVar22) || (bVar22 = IsInGameThread(), bVar22)) {
      lVar36 = 0;
    }
    else {
      lVar36 = 4;
    }
    uVar29 = 2;
    if (*(int *)((longlong)pTVar62->ShadowedValue + lVar36) < 2) {
      uVar29 = *(uint *)((longlong)pTVar62->ShadowedValue + lVar36);
    }
    uVar66 = 1;
    if (1 < (int)uVar29) {
      uVar66 = uVar29;
    }
    uVar29 = MegaLights::GetReferenceShadingPassCount(local_ee6);
    if (1 < uVar29) {
      uVar66 = 1;
    }
  }
  else {
    uVar66 = this->VolumeDownsampleFactor;
  }
  this->TranslucencyVolumeDownsampleFactor = uVar66;
  iVar25 = GetTranslucencyLightingVolumeDim();
  (this->TranslucencyVolumeBufferSize).field0_0x0._s_0.X = iVar25;
  (this->TranslucencyVolumeBufferSize).field0_0x0._s_0.Y = iVar25;
  (this->TranslucencyVolumeBufferSize).field0_0x0._s_0.Z = iVar25;
  bVar22 = this->bUnifiedVolume;
  if (bVar22 == false) {
    uVar66 = this->TranslucencyVolumeDownsampleFactor;
    local_ed8 = *(TRDGUniformBuffer<FForwardLightUniformParameters> **)
                 &(this->TranslucencyVolumeBufferSize).field0_0x0;
    local_cc0 = (int)((int)local_ed8 + -1 + uVar66) / (int)uVar66;
    local_cbc = (int)((int)((ulonglong)local_ed8 >> 0x20) + -1 + uVar66) / (int)uVar66;
    local_cb8 = (int)((uVar66 - 1) + (this->TranslucencyVolumeBufferSize).field0_0x0._s_0.Z) /
                (int)uVar66;
    piVar37 = &local_cc0;
  }
  else {
    uStack_cc8 = local_e88._0_4_;
    local_cc4 = local_eb0;
    piVar37 = &local_ccc;
    local_ccc = iVar67;
  }
  iVar25 = piVar37[2];
  *(undefined8 *)&(this->TranslucencyVolumeDownsampledBufferSize).field0_0x0 =
       *(undefined8 *)piVar37;
  (this->TranslucencyVolumeDownsampledBufferSize).field0_0x0._s_0.Z = iVar25;
  if (bVar22 == false) {
    local_eb0 = (this->TranslucencyVolumeDownsampledBufferSize).field0_0x0._s_0.Z;
    local_cb4 = *(undefined8 *)&(this->TranslucencyVolumeDownsampledBufferSize).field0_0x0;
    iVar25 = (int)local_cb4;
    iVar60 = (int)((ulonglong)local_cb4 >> 0x20);
    local_ca8 = iVar25 * (this->NumSamplesPerTranslucencyVoxel3d).field0_0x0._s_0.X;
    local_ca4 = iVar60 * (this->NumSamplesPerTranslucencyVoxel3d).field0_0x0._s_0.Y;
    piVar37 = &local_ca8;
    local_ca0 = local_eb0 * (this->NumSamplesPerTranslucencyVoxel3d).field0_0x0._s_0.Z;
    local_cac = local_eb0;
  }
  else {
    local_eb0 = (this->VolumeDownsampledViewSize).field0_0x0._s_0.Z;
    uVar8 = *(undefined8 *)&(this->VolumeDownsampledViewSize).field0_0x0;
    iVar25 = (int)uVar8;
    iVar60 = (int)((ulonglong)uVar8 >> 0x20);
    local_bf0 = (this->VolumeSampleBufferSize).field0_0x0._s_0.Z;
    piVar37 = (int *)&local_bf8;
    local_bf8 = *(undefined8 *)&(this->VolumeSampleBufferSize).field0_0x0;
  }
  iVar30 = piVar37[2];
  *(undefined8 *)&(this->TranslucencyVolumeSampleBufferSize).field0_0x0 = *(undefined8 *)piVar37;
  (this->TranslucencyVolumeSampleBufferSize).field0_0x0._s_0.Z = iVar30;
  (this->TranslucencyVolumeVisibleLightHashTileSize).field0_0x0._s_0.X = 2;
  (this->TranslucencyVolumeVisibleLightHashTileSize).field0_0x0._s_0.Y = 2;
  (this->TranslucencyVolumeVisibleLightHashTileSize).field0_0x0._s_0.Z = 2;
  iVar30 = (this->TranslucencyVolumeVisibleLightHashTileSize).field0_0x0._s_0.Y;
  iVar31 = (this->TranslucencyVolumeBufferSize).field0_0x0._s_0.Y;
  iVar5 = (this->TranslucencyVolumeVisibleLightHashTileSize).field0_0x0._s_0.X;
  iVar67 = ((this->TranslucencyVolumeBufferSize).field0_0x0._s_0.Z + 1) / 2;
  (this->TranslucencyVolumeVisibleLightHashSizeInTiles).field0_0x0._s_0.X =
       ((this->TranslucencyVolumeBufferSize).field0_0x0._s_0.X + -1 + iVar5) / iVar5;
  (this->TranslucencyVolumeVisibleLightHashSizeInTiles).field0_0x0._s_0.Y =
       (iVar31 + -1 + iVar30) / iVar30;
  (this->TranslucencyVolumeVisibleLightHashSizeInTiles).field0_0x0._s_0.Z = iVar67;
  this->TranslucencyVolumeVisibleLightHashBufferSize =
       iVar67 * (this->TranslucencyVolumeVisibleLightHashSizeInTiles).field0_0x0._s_0.Y *
       (this->TranslucencyVolumeVisibleLightHashSizeInTiles).field0_0x0._s_0.X * 4;
  iVar30 = TConsoleVariableData<int>::GetValueOnRenderThread(CVarMegaLightsGuideByHistory.Ref);
  this->bGuideByHistory = iVar30 != 0;
  iVar30 = TConsoleVariableData<int>::GetValueOnRenderThread(CVarMegaLightsGuideByHistory.Ref);
  this->bGuideAreaLightsByHistory = iVar30 == 2;
  iVar30 = TConsoleVariableData<int>::GetValueOnRenderThread(CVarMegaLightsVolumeGuideByHistory.Ref)
  ;
  this->bVolumeGuideByHistory = iVar30 != 0;
  iVar30 = TConsoleVariableData<int>::GetValueOnRenderThread
                     (CVarMegaLightsTranslucencyVolumeGuideByHistory.Ref);
  this->bTranslucencyVolumeGuideByHistory = iVar30 != 0;
  iVar30 = TConsoleVariableData<int>::GetValueOnRenderThread
                     (CVarMegaLightsHairStrandsSubPixelShading.Ref);
  this->bSubPixelShading = 0 < iVar30;
  pFVar6 = this->View;
  pFVar9 = pFVar6->ViewState;
  if (pFVar9 != (FSceneViewState *)0x0) {
    EVar3 = this->InputType;
    lVar36 = 0x2390;
    if (EVar3 != HairStrands) {
      lVar36 = 0x22c0;
    }
    puVar64 = (pFVar9->ShadowOcclusionQueryMaps).AllocatorInstance.InlineData + lVar36 + -0x40;
    if (((*(char *)((longlong)&pFVar6->_padding_ + 4) == '\0') &&
        (pFVar6->bPrevTransformsReset == 0)) && (!bVar23)) {
      uVar8 = *(undefined8 *)(puVar64 + 0x68);
      *(undefined8 *)&(this->HistoryScreenPositionScaleBias).field0_0x0 =
           *(undefined8 *)(puVar64 + 0x60);
      *(undefined8 *)((longlong)&(this->HistoryScreenPositionScaleBias).field0_0x0 + 8) = uVar8;
      uVar8 = *(undefined8 *)(puVar64 + 0x78);
      *(undefined8 *)&(this->HistoryUVMinMax).field0_0x0 = *(undefined8 *)(puVar64 + 0x70);
      *(undefined8 *)((longlong)&(this->HistoryUVMinMax).field0_0x0 + 8) = uVar8;
      uVar8 = *(undefined8 *)(puVar64 + 0x88);
      *(undefined8 *)&(this->HistoryGatherUVMinMax).field0_0x0 = *(undefined8 *)(puVar64 + 0x80);
      *(undefined8 *)((longlong)&(this->HistoryGatherUVMinMax).field0_0x0 + 8) = uVar8;
      uVar8 = *(undefined8 *)(puVar64 + 0x98);
      *(undefined8 *)&(this->HistoryBufferSizeAndInvSize).field0_0x0 =
           *(undefined8 *)(puVar64 + 0x90);
      *(undefined8 *)((longlong)&(this->HistoryBufferSizeAndInvSize).field0_0x0 + 8) = uVar8;
      (this->HistoryVisibleLightHashViewMinInTiles).field0_0x0 =
           *(TIntPoint<int>_u_0 *)(puVar64 + 0xa0);
      (this->HistoryVisibleLightHashViewSizeInTiles).field0_0x0 =
           *(TIntPoint<int>_u_0 *)(puVar64 + 0xa8);
      *(undefined8 *)&(this->HistoryVolumeVisibleLightHashViewSizeInTiles).field0_0x0 =
           *(undefined8 *)(puVar64 + 0xb0);
      (this->HistoryVolumeVisibleLightHashViewSizeInTiles).field0_0x0._s_0.Z =
           *(int *)(puVar64 + 0xb8);
      *(undefined8 *)&(this->HistoryTranslucencyVolumeVisibleLightHashSizeInTiles).field0_0x0 =
           *(undefined8 *)(puVar64 + 0xbc);
      (this->HistoryTranslucencyVolumeVisibleLightHashSizeInTiles).field0_0x0._s_0.Z =
           *(int *)(puVar64 + 0xc4);
      if (EVar3 == HairStrands) {
        if (*(longlong *)(puVar64 + 0x48) != 0) {
          pFVar35 = FRDGBuilder::RegisterExternalTexture
                              (this->GraphBuilder,
                               (TRefCountPtr<IPooledRenderTarget> *)(puVar64 + 0x48),None);
          this->SceneDepthHistory = pFVar35;
        }
        pTVar61 = (TRefCountPtr<IPooledRenderTarget> *)(puVar64 + 0x50);
      }
      else {
        if ((pFVar9->StochasticLighting).SceneDepthHistory.Reference != (IPooledRenderTarget *)0x0)
        {
          pFVar35 = FRDGBuilder::RegisterExternalTexture
                              (this->GraphBuilder,&(pFVar9->StochasticLighting).SceneDepthHistory,
                               None);
          this->SceneDepthHistory = pFVar35;
        }
        pTVar61 = &(pFVar9->StochasticLighting).SceneNormalHistory;
      }
      if (pTVar61->Reference != (IPooledRenderTarget *)0x0) {
        pFVar35 = FRDGBuilder::RegisterExternalTexture(this->GraphBuilder,pTVar61,None);
        this->SceneNormalAndShadingHistory = pFVar35;
      }
      if (((this->bTemporal != false) && (*(longlong *)puVar64 != 0)) &&
         ((*(longlong *)(puVar64 + 8) != 0 &&
          ((*(longlong *)(puVar64 + 0x10) != 0 && (*(longlong *)(puVar64 + 0x18) != 0)))))) {
        pFVar35 = FRDGBuilder::RegisterExternalTexture
                            (this->GraphBuilder,(TRefCountPtr<IPooledRenderTarget> *)puVar64,None);
        this->DiffuseLightingHistory = pFVar35;
        pFVar35 = FRDGBuilder::RegisterExternalTexture
                            (this->GraphBuilder,(TRefCountPtr<IPooledRenderTarget> *)(puVar64 + 8),
                             None);
        this->SpecularLightingHistory = pFVar35;
        pFVar35 = FRDGBuilder::RegisterExternalTexture
                            (this->GraphBuilder,
                             (TRefCountPtr<IPooledRenderTarget> *)(puVar64 + 0x10),None);
        this->LightingMomentsHistory = pFVar35;
        pFVar35 = FRDGBuilder::RegisterExternalTexture
                            (this->GraphBuilder,
                             (TRefCountPtr<IPooledRenderTarget> *)(puVar64 + 0x18),None);
        this->NumFramesAccumulatedHistory = pFVar35;
      }
      if (((this->bGuideByHistory != false) && (*(longlong *)(puVar64 + 0x20) != 0)) &&
         (*(longlong *)(puVar64 + 0x28) != 0)) {
        pFVar38 = FRDGBuilder::RegisterExternalBuffer
                            (this->GraphBuilder,(TRefCountPtr<FRDGPooledBuffer> *)(puVar64 + 0x20),
                             None);
        this->VisibleLightHashHistory = pFVar38;
        pFVar38 = FRDGBuilder::RegisterExternalBuffer
                            (this->GraphBuilder,(TRefCountPtr<FRDGPooledBuffer> *)(puVar64 + 0x28),
                             None);
        this->VisibleLightMaskHashHistory = pFVar38;
      }
      if ((this->bVolumeGuideByHistory != false) && (*(longlong *)(puVar64 + 0x30) != 0)) {
        pFVar38 = FRDGBuilder::RegisterExternalBuffer
                            (this->GraphBuilder,(TRefCountPtr<FRDGPooledBuffer> *)(puVar64 + 0x30),
                             None);
        this->VolumeVisibleLightHashHistory = pFVar38;
      }
      if (this->bTranslucencyVolumeGuideByHistory != false) {
        lVar36 = *(longlong *)(puVar64 + 0x38);
        if (((lVar36 != 0) && (lVar10 = *(longlong *)(puVar64 + 0x40), lVar10 != 0)) &&
           ((this->TranslucencyVolumeVisibleLightHashBufferSize ==
             (uint)(*(int *)(lVar36 + 0x14) * *(int *)(lVar36 + 0x10)) >> 2 &&
            (this->TranslucencyVolumeVisibleLightHashBufferSize ==
             (uint)(*(int *)(lVar10 + 0x14) * *(int *)(lVar10 + 0x10)) >> 2)))) {
          pFVar38 = FRDGBuilder::RegisterExternalBuffer
                              (this->GraphBuilder,(TRefCountPtr<FRDGPooledBuffer> *)(puVar64 + 0x38)
                               ,None);
          this->TranslucencyVolumeVisibleLightHashHistory[0] = pFVar38;
          pFVar38 = FRDGBuilder::RegisterExternalBuffer
                              (this->GraphBuilder,(TRefCountPtr<FRDGPooledBuffer> *)(puVar64 + 0x40)
                               ,None);
          this->TranslucencyVolumeVisibleLightHashHistory[1] = pFVar38;
        }
      }
    }
  }
  bVar23 = LightFunctionAtlas::IsEnabled(this->View,MegaLights);
  this->bUseLightFunctionAtlas = bVar23;
  pFVar6 = this->View;
  iVar30 = (*(int *)((longlong)&(pFVar6->ViewRect).field0_0x0 + 8) -
           *(int *)&(pFVar6->ViewRect).field0_0x0) + 7;
  iVar31 = (*(int *)((longlong)&(pFVar6->ViewRect).field0_0x0 + 0xc) -
           *(int *)((longlong)&(pFVar6->ViewRect).field0_0x0 + 4)) + 7;
  local_e88._s_0.X = (int)((iVar30 >> 0x1f & 7U) + iVar30) >> 3;
  local_e88._s_0.Y = (int)((iVar31 >> 0x1f & 7U) + iVar31) >> 3;
  (this->ViewSizeInTiles).field0_0x0 = local_e88;
  uVar66 = local_e88._s_0.Y * local_e88._s_0.X;
  local_ea8 = (int)((local_ea8 + 7 >> 0x1f & 7U) + local_ea8 + 7) >> 3;
  iStack_ea4 = (int)(iVar26 + 7 + (iVar26 + 7 >> 0x1f & 7U)) >> 3;
  local_e88._s_0.X = iStack_ea4 * local_ea8;
  pFVar39 = FViewUniformShaderParameters::GetStructMetadata();
  local_ed8 = (TRDGUniformBuffer<FForwardLightUniformParameters> *)pFVar6->_padding_;
  EStack_ed0 = Static;
  if (pFVar39->BindingFlags != StaticAndShader) {
    EStack_ed0 = pFVar39->BindingFlags;
  }
  *(TRDGUniformBuffer<FForwardLightUniformParameters> **)
   &(this->MegaLightsParameters).ViewUniformBuffer = local_ed8;
  *(ulonglong *)&(this->MegaLightsParameters).ViewUniformBuffer.field_0x8 =
       CONCAT71(uStack_ecf,EStack_ed0);
  this_01 = FViewInfo::GetSceneUniforms(this->View);
  pTVar40 = FSceneUniformBuffer::GetBuffer(this_01,this->GraphBuilder);
  pFVar39 = FSceneUniformParameters::FTypeInfo::GetStructMetadata();
  EStack_ed0 = Static;
  if (pFVar39->BindingFlags != StaticAndShader) {
    EStack_ed0 = pFVar39->BindingFlags;
  }
  *(TRDGUniformBuffer<FSceneUniformParameters> **)&(this->MegaLightsParameters).Scene = pTVar40;
  *(ulonglong *)&(this->MegaLightsParameters).Scene.field_0x8 = CONCAT71(uStack_ecf,EStack_ed0);
  local_ed8 = (TRDGUniformBuffer<FForwardLightUniformParameters> *)pTVar40;
  pFVar41 = GetSceneTextureParameters
                      (&local_938,this->GraphBuilder,
                       (TRDGUniformBuffer<FSceneTextureUniformParameters> *)
                       this->SceneTextures->_padding_);
  pFVar18 = pFVar41->SceneStencilTexture;
  (this->MegaLightsParameters).SceneTextures.SceneDepthTexture = pFVar41->SceneDepthTexture;
  (this->MegaLightsParameters).SceneTextures.SceneStencilTexture = pFVar18;
  pFVar35 = pFVar41->GBufferBTexture;
  (this->MegaLightsParameters).SceneTextures.GBufferATexture = pFVar41->GBufferATexture;
  (this->MegaLightsParameters).SceneTextures.GBufferBTexture = pFVar35;
  pFVar35 = pFVar41->GBufferDTexture;
  (this->MegaLightsParameters).SceneTextures.GBufferCTexture = pFVar41->GBufferCTexture;
  (this->MegaLightsParameters).SceneTextures.GBufferDTexture = pFVar35;
  pFVar35 = pFVar41->GBufferFTexture;
  (this->MegaLightsParameters).SceneTextures.GBufferETexture = pFVar41->GBufferETexture;
  (this->MegaLightsParameters).SceneTextures.GBufferFTexture = pFVar35;
  pFVar35 = pFVar41->GBufferSGGXTexture;
  (this->MegaLightsParameters).SceneTextures.GBufferVelocityTexture =
       pFVar41->GBufferVelocityTexture;
  (this->MegaLightsParameters).SceneTextures.GBufferSGGXTexture = pFVar35;
  lVar36 = this->SceneTextures->_padding_;
  pFVar39 = FSceneTextureUniformParameters::GetStructMetadata();
  EStack_ed0 = Static;
  if (pFVar39->BindingFlags != StaticAndShader) {
    EStack_ed0 = pFVar39->BindingFlags;
  }
  *(longlong *)&(this->MegaLightsParameters).SceneTexturesStruct = lVar36;
  *(ulonglong *)&(this->MegaLightsParameters).SceneTexturesStruct.field_0x8 =
       CONCAT71(uStack_ecf,EStack_ed0);
  local_ed8 = (TRDGUniformBuffer<FForwardLightUniformParameters> *)lVar36;
  pTVar42 = Substrate::BindSubstrateGlobalUniformParameters(this->View);
  pFVar39 = FSubstrateGlobalUniformParameters::GetStructMetadata();
  EStack_ed0 = Static;
  if (pFVar39->BindingFlags != StaticAndShader) {
    EStack_ed0 = pFVar39->BindingFlags;
  }
  *(TRDGUniformBuffer<FSubstrateGlobalUniformParameters> **)&(this->MegaLightsParameters).Substrate
       = pTVar42;
  *(ulonglong *)&(this->MegaLightsParameters).Substrate.field_0x8 = CONCAT71(uStack_ecf,EStack_ed0);
  local_ed8 = (TRDGUniformBuffer<FForwardLightUniformParameters> *)pTVar42;
  pTVar43 = HairStrands::BindHairStrandsViewUniformParameters(this->View);
  pFVar39 = FHairStrandsViewUniformParameters::GetStructMetadata();
  EStack_ed0 = Static;
  if (pFVar39->BindingFlags != StaticAndShader) {
    EStack_ed0 = pFVar39->BindingFlags;
  }
  *(TRDGUniformBuffer<FHairStrandsViewUniformParameters> **)
   &(this->MegaLightsParameters).HairStrands = pTVar43;
  *(ulonglong *)&(this->MegaLightsParameters).HairStrands.field_0x8 =
       CONCAT71(uStack_ecf,EStack_ed0);
  pTVar11 = (this->View->ForwardLightingResources).ForwardLightUniformBuffer;
  local_ed8 = (TRDGUniformBuffer<FForwardLightUniformParameters> *)pTVar43;
  pFVar39 = FForwardLightUniformParameters::GetStructMetadata();
  EStack_ed0 = Static;
  if (pFVar39->BindingFlags != StaticAndShader) {
    EStack_ed0 = pFVar39->BindingFlags;
  }
  *(TRDGUniformBuffer<FForwardLightUniformParameters> **)
   &(this->MegaLightsParameters).ForwardLightStruct = pTVar11;
  *(ulonglong *)&(this->MegaLightsParameters).ForwardLightStruct.field_0x8 =
       CONCAT71(uStack_ecf,EStack_ed0);
  local_ed8 = pTVar11;
  pTVar44 = LightFunctionAtlas::BindGlobalParameters(this->GraphBuilder,this->View);
  pFVar39 = LightFunctionAtlas::FLightFunctionAtlasGlobalParameters::GetStructMetadata();
  EStack_ed0 = Static;
  if (pFVar39->BindingFlags != StaticAndShader) {
    EStack_ed0 = pFVar39->BindingFlags;
  }
  *(TRDGUniformBuffer<LightFunctionAtlas::FLightFunctionAtlasGlobalParameters> **)
   &(this->MegaLightsParameters).LightFunctionAtlas = pTVar44;
  *(ulonglong *)&(this->MegaLightsParameters).LightFunctionAtlas.field_0x8 =
       CONCAT71(uStack_ecf,EStack_ed0);
  local_ed8 = (TRDGUniformBuffer<FForwardLightUniformParameters> *)pTVar44;
  pFVar45 = GetSceneLightingChannelParameters
                      (&local_948,this->GraphBuilder,this->View,(FRDGTexture *)local_e98);
  uVar19 = *(undefined4 *)&pFVar45->field_0x4;
  pFVar35 = pFVar45->SceneLightingChannels;
  (this->MegaLightsParameters).LightingChannelParameters.bSceneLightingChannelsValid =
       pFVar45->bSceneLightingChannelsValid;
  *(undefined4 *)&(this->MegaLightsParameters).LightingChannelParameters.field_0x4 = uVar19;
  (this->MegaLightsParameters).LightingChannelParameters.SceneLightingChannels = pFVar35;
  pFVar39 = FBlueNoise::GetStructMetadata();
  EStack_ed0 = Static;
  if (pFVar39->BindingFlags != StaticAndShader) {
    EStack_ed0 = pFVar39->BindingFlags;
  }
  local_ed8 = *(TRDGUniformBuffer<FForwardLightUniformParameters> **)local_d28;
  *(TRDGUniformBuffer<FForwardLightUniformParameters> **)&(this->MegaLightsParameters).BlueNoise =
       local_ed8;
  *(ulonglong *)&(this->MegaLightsParameters).BlueNoise.field_0x8 = CONCAT71(uStack_ecf,EStack_ed0);
  (this->MegaLightsParameters).PreIntegratedGF = *(FRHITexture **)(GSystemTextures._104_8_ + 8);
  (this->MegaLightsParameters).PreIntegratedGFSampler =
       TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  pTVar46 = FViewMatrices::ComputeInvProjectionNoAAMatrix
                      ((FViewMatrices *)&this->View->_padding_,&local_1f8);
  pFVar6 = this->View;
  local_4f8.M[0][0] = (double)pFVar6->_padding_;
  local_4f8.M[0][1] = (double)pFVar6->_padding_;
  local_4f8.M[0][2] = (double)pFVar6->_padding_;
  local_4f8.M[0][3] = (double)pFVar6->_padding_;
  local_4f8.M[1][0] = (double)pFVar6->_padding_;
  local_4f8.M[1][1] = (double)pFVar6->_padding_;
  local_4f8.M[1][2] = (double)pFVar6->_padding_;
  local_4f8.M[1][3] = (double)pFVar6->_padding_;
  local_4f8.M[2][0] = (double)pFVar6->_padding_;
  local_4f8.M[2][1] = (double)pFVar6->_padding_;
  local_4f8.M[2][2] = (double)pFVar6->_padding_;
  local_4f8.M[2][3] = (double)pFVar6->_padding_;
  local_4f8.M[3][0] = (double)pFVar6->_padding_;
  local_4f8.M[3][1] = (double)pFVar6->_padding_;
  local_4f8.M[3][2] = (double)pFVar6->_padding_;
  local_4f8.M[3][3] = (double)pFVar6->_padding_;
  VectorMatrixMultiply(&local_478,pTVar46,&local_4f8);
  *(ulonglong *)(this->MegaLightsParameters).UnjitteredClipToTranslatedWorld.M[0] =
       CONCAT44((float)local_478.M[0][1],(float)local_478.M[0][0]);
  *(ulonglong *)((this->MegaLightsParameters).UnjitteredClipToTranslatedWorld.M[0] + 2) =
       CONCAT44((float)local_478.M[0][3],(float)local_478.M[0][2]);
  (this->MegaLightsParameters).UnjitteredClipToTranslatedWorld.M[1][0] = (float)local_478.M[1][0];
  (this->MegaLightsParameters).UnjitteredClipToTranslatedWorld.M[1][1] = (float)local_478.M[1][1];
  (this->MegaLightsParameters).UnjitteredClipToTranslatedWorld.M[1][2] = (float)local_478.M[1][2];
  (this->MegaLightsParameters).UnjitteredClipToTranslatedWorld.M[1][3] = (float)local_478.M[1][3];
  (this->MegaLightsParameters).UnjitteredClipToTranslatedWorld.M[2][0] = (float)local_478.M[2][0];
  (this->MegaLightsParameters).UnjitteredClipToTranslatedWorld.M[2][1] = (float)local_478.M[2][1];
  (this->MegaLightsParameters).UnjitteredClipToTranslatedWorld.M[2][2] = (float)local_478.M[2][2];
  (this->MegaLightsParameters).UnjitteredClipToTranslatedWorld.M[2][3] = (float)local_478.M[2][3];
  *(ulonglong *)(this->MegaLightsParameters).UnjitteredClipToTranslatedWorld.M[3] =
       CONCAT44((float)local_478.M[3][1],(float)local_478.M[3][0]);
  *(ulonglong *)((this->MegaLightsParameters).UnjitteredClipToTranslatedWorld.M[3] + 2) =
       CONCAT44((float)local_478.M[3][3],(float)local_478.M[3][2]);
  pFVar6 = this->View;
  pTVar46 = FViewMatrices::ComputeProjectionNoAAMatrix
                      ((FViewMatrices *)&pFVar6->_padding_,&local_178);
  VectorMatrixMultiply(&local_3f8,(TMatrix<double> *)&pFVar6->_padding_,pTVar46);
  *(ulonglong *)(this->MegaLightsParameters).UnjitteredTranslatedWorldToClip.M[0] =
       CONCAT44((float)local_3f8.M[0][1],(float)local_3f8.M[0][0]);
  *(ulonglong *)((this->MegaLightsParameters).UnjitteredTranslatedWorldToClip.M[0] + 2) =
       CONCAT44((float)local_3f8.M[0][3],(float)local_3f8.M[0][2]);
  (this->MegaLightsParameters).UnjitteredTranslatedWorldToClip.M[1][0] = (float)local_3f8.M[1][0];
  (this->MegaLightsParameters).UnjitteredTranslatedWorldToClip.M[1][1] = (float)local_3f8.M[1][1];
  (this->MegaLightsParameters).UnjitteredTranslatedWorldToClip.M[1][2] = (float)local_3f8.M[1][2];
  (this->MegaLightsParameters).UnjitteredTranslatedWorldToClip.M[1][3] = (float)local_3f8.M[1][3];
  (this->MegaLightsParameters).UnjitteredTranslatedWorldToClip.M[2][0] = (float)local_3f8.M[2][0];
  (this->MegaLightsParameters).UnjitteredTranslatedWorldToClip.M[2][1] = (float)local_3f8.M[2][1];
  (this->MegaLightsParameters).UnjitteredTranslatedWorldToClip.M[2][2] = (float)local_3f8.M[2][2];
  (this->MegaLightsParameters).UnjitteredTranslatedWorldToClip.M[2][3] = (float)local_3f8.M[2][3];
  *(ulonglong *)(this->MegaLightsParameters).UnjitteredTranslatedWorldToClip.M[3] =
       CONCAT44((float)local_3f8.M[3][1],(float)local_3f8.M[3][0]);
  *(ulonglong *)((this->MegaLightsParameters).UnjitteredTranslatedWorldToClip.M[3] + 2) =
       CONCAT44((float)local_3f8.M[3][3],(float)local_3f8.M[3][2]);
  pFVar6 = this->View;
  local_b28._padding_ =
       CONCAT44((uint)((ulonglong)pFVar6->_padding_ >> 0x20) ^
                __xmm_80000000000000008000000000000000._4_4_,
                (uint)pFVar6->_padding_ ^ (uint)__xmm_80000000000000008000000000000000);
  local_b28._padding_._0_4_ = (uint)pFVar6->_padding_ ^ (uint)__xmm_80000000000000008000000000000000
  ;
  local_b28._padding_._4_4_ =
       *(uint *)((longlong)&pFVar6->_padding_ + 4) ^ __xmm_80000000000000008000000000000000._4_4_;
  local_b28._padding_._0_4_ = (uint)pFVar6->_padding_ ^ _UNK_15066df78;
  local_b28._padding_._4_4_ = *(uint *)((longlong)&pFVar6->_padding_ + 4) ^ _UNK_15066df7c;
  local_b28.W = __real_3ff0000000000000;
  local_9c8._padding_ = ___xmm_3ff00000000000000000000000000000;
  local_9c8._padding_ = _UNK_15061cbc8;
  local_9c8._padding_ = 0;
  local_9c8.W = 0.0;
  local_a08._padding_ = 0;
  local_a08.W = 0.0;
  local_9e8._padding_ = 0;
  local_9e8._padding_ = 0;
  local_9e8._padding_ = ___xmm_00000000000000003ff0000000000000;
  local_9e8.W = _UNK_150689518;
  local_a08._padding_ = ___xmm_00000000000000003ff0000000000000;
  local_a08._padding_ = (longlong)_UNK_150689518;
  UE::Math::TMatrix<double>::TMatrix<double>(&local_278,&local_a08,&local_9c8,&local_9e8,&local_b28)
  ;
  VectorMatrixMultiply(&local_2f8,&local_278,&(pFVar6->PrevViewInfo->ViewMatrices).ViewMatrix);
  pTVar46 = FViewMatrices::ComputeProjectionNoAAMatrix
                      (&this->View->PrevViewInfo->ViewMatrices,&local_f8);
  VectorMatrixMultiply(&local_378,&local_2f8,pTVar46);
  *(ulonglong *)(this->MegaLightsParameters).UnjitteredPrevTranslatedWorldToClip.M[0] =
       CONCAT44((float)local_378.M[0][1],(float)local_378.M[0][0]);
  *(ulonglong *)((this->MegaLightsParameters).UnjitteredPrevTranslatedWorldToClip.M[0] + 2) =
       CONCAT44((float)local_378.M[0][3],(float)local_378.M[0][2]);
  (this->MegaLightsParameters).UnjitteredPrevTranslatedWorldToClip.M[1][0] =
       (float)local_378.M[1][0];
  (this->MegaLightsParameters).UnjitteredPrevTranslatedWorldToClip.M[1][1] =
       (float)local_378.M[1][1];
  (this->MegaLightsParameters).UnjitteredPrevTranslatedWorldToClip.M[1][2] =
       (float)local_378.M[1][2];
  (this->MegaLightsParameters).UnjitteredPrevTranslatedWorldToClip.M[1][3] =
       (float)local_378.M[1][3];
  (this->MegaLightsParameters).UnjitteredPrevTranslatedWorldToClip.M[2][0] =
       (float)local_378.M[2][0];
  (this->MegaLightsParameters).UnjitteredPrevTranslatedWorldToClip.M[2][1] =
       (float)local_378.M[2][1];
  (this->MegaLightsParameters).UnjitteredPrevTranslatedWorldToClip.M[2][2] =
       (float)local_378.M[2][2];
  (this->MegaLightsParameters).UnjitteredPrevTranslatedWorldToClip.M[2][3] =
       (float)local_378.M[2][3];
  *(ulonglong *)(this->MegaLightsParameters).UnjitteredPrevTranslatedWorldToClip.M[3] =
       CONCAT44((float)local_378.M[3][1],(float)local_378.M[3][0]);
  *(ulonglong *)((this->MegaLightsParameters).UnjitteredPrevTranslatedWorldToClip.M[3] + 2) =
       CONCAT44((float)local_378.M[3][3],(float)local_378.M[3][2]);
  TVar7 = (this->DownsampleFactor).field0_0x0._s_0;
  pFVar6 = this->View;
  local_d70 = TVar7.X;
  uVar8 = *(undefined8 *)&(pFVar6->ViewRect).field0_0x0;
  iStack_d6c = TVar7.Y;
  local_ea0._s_0.Y = ((int)((ulonglong)uVar8 >> 0x20) + -1 + iStack_d6c) / iStack_d6c;
  local_ea0._s_0.X = (local_d70 + -1 + (int)uVar8) / local_d70;
  (this->MegaLightsParameters).DownsampledViewMin.field0_0x0 = local_ea0;
  (this->MegaLightsParameters).DownsampledViewSize.field0_0x0 = TVar68;
  uVar8 = *(undefined8 *)&(pFVar6->ViewRect).field0_0x0;
  local_d70 = (local_d70 + -1 + (int)uVar8) / local_d70;
  iStack_d6c = ((int)((ulonglong)uVar8 >> 0x20) + -1 + iStack_d6c) / iStack_d6c;
  uVar29 = (this->NumSamplesPerPixel2d).field0_0x0._s_0.X;
  local_c68 = 0x1f;
  if (uVar29 != 0) {
    for (; uVar29 >> local_c68 == 0; local_c68 = local_c68 + -1) {
    }
  }
  local_ea0._s_0.Y = iStack_d6c * (this->NumSamplesPerPixel2d).field0_0x0._s_0.Y;
  local_ea0._s_0.X = uVar29 * local_d70;
  (this->MegaLightsParameters).SampleViewMin.field0_0x0 = local_ea0;
  (this->MegaLightsParameters).SampleViewSize.field0_0x0 = local_c18;
  iVar26 = 0;
  if (uVar29 != 0) {
    iVar26 = local_c68;
  }
  (this->MegaLightsParameters).DownsampleFactor.field0_0x0._s_0 = TVar7;
  TVar7 = (this->NumSamplesPerPixel2d).field0_0x0._s_0;
  (this->MegaLightsParameters).NumSamplesPerPixel.field0_0x0._s_0 = TVar7;
  (this->MegaLightsParameters).NumSamplesPerPixelDivideShift.field0_0x0._s_0.X = iVar26;
  local_c64 = 0x1f;
  uVar29 = TVar7.Y;
  if (uVar29 != 0) {
    for (; uVar29 >> local_c64 == 0; local_c64 = local_c64 + -1) {
    }
  }
  iVar26 = 0;
  if (uVar29 != 0) {
    iVar26 = local_c64;
  }
  (this->MegaLightsParameters).NumSamplesPerPixelDivideShift.field0_0x0._s_0.Y = iVar26;
  local_ee6 = FSceneView::GetShaderPlatform((FSceneView *)pFVar6);
  pFVar9 = this->View->ViewState;
  if (pFVar9 == (FSceneViewState *)0x0) {
    uVar29 = 0;
  }
  else {
    uVar29 = pFVar9->FrameIndex;
  }
  iVar26 = TConsoleVariableData<int>::GetValueOnRenderThread(CVarMegaLightsFixedStateFrameIndex.Ref)
  ;
  if (-1 < iVar26) {
    uVar29 = TConsoleVariableData<int>::GetValueOnRenderThread
                       (CVarMegaLightsFixedStateFrameIndex.Ref);
  }
  bVar23 = StochasticLighting::IsStateFrameIndexOverridden();
  if (bVar23) {
    uVar29 = StochasticLighting::GetStateFrameIndex(pFVar9);
  }
  iVar26 = TConsoleVariableData<int>::GetValueOnRenderThread
                     (CVarMegaLightsReferenceOffsetToStateFrameIndex.Ref);
  if (0 < iVar26) {
    iVar26 = TConsoleVariableData<int>::GetValueOnRenderThread
                       (CVarMegaLightsReferenceOffsetToStateFrameIndex.Ref);
    uVar29 = uVar29 + iVar26;
  }
  uVar32 = MegaLights::GetReferenceShadingPassCount(local_ee6);
  (this->MegaLightsParameters).MegaLightsStateFrameIndex = uVar32 * uVar29;
  uVar29 = StochasticLighting::GetStateFrameIndex(this->View->ViewState);
  fVar4 = __real_3f800000;
  (this->MegaLightsParameters).StochasticLightingStateFrameIndex = uVar29;
  (this->MegaLightsParameters).DownsampledSceneDepth = this->DownsampledSceneDepth;
  (this->MegaLightsParameters).DownsampledSceneWorldNormal = this->DownsampledSceneWorldNormal;
  local_e98._4_4_ = fVar4 / (float)iVar28;
  local_e98._0_4_ = fVar4 / (float)iVar27;
  (this->MegaLightsParameters).DownsampledBufferInvSize.field0_0x0 = local_e98;
  pTVar20 = CVarMegaLightsMinSampleWeight.Ref;
  bVar23 = IsInParallelRenderingThread();
  if ((!bVar23) &&
     (bVar23 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar23)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  fVar69 = pTVar20->ShadowedValue[1];
  if (fVar69 <= 0.0) {
    fVar69 = 0.0;
  }
  (this->MegaLightsParameters).MinSampleWeight = fVar69;
  pTVar20 = CVarMegaLightsMaxShadingWeight.Ref;
  bVar23 = IsInParallelRenderingThread();
  if ((!bVar23) &&
     (bVar23 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar23)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  fVar69 = pTVar20->ShadowedValue[1];
  uVar19 = local_e88._0_4_;
  if (fVar69 <= 0.0) {
    fVar69 = 0.0;
  }
  (this->MegaLightsParameters).MaxShadingWeight = fVar69;
  (this->MegaLightsParameters).TileDataStride = uVar66;
  (this->MegaLightsParameters).DownsampledTileDataStride = local_e88._0_4_;
  iVar26 = TConsoleVariableData<int>::GetValueOnRenderThread(CVarMegaLightsDebugCursorX.Ref);
  (this->MegaLightsParameters).DebugCursorPosition.field0_0x0._s_0.X = iVar26;
  iVar26 = TConsoleVariableData<int>::GetValueOnRenderThread(CVarMegaLightsDebugCursorY.Ref);
  (this->MegaLightsParameters).DebugCursorPosition.field0_0x0._s_0.Y = iVar26;
  iVar26 = MegaLights::GetDebugMode(this->InputType);
  (this->MegaLightsParameters).DebugMode = iVar26;
  (this->MegaLightsParameters).DebugLightId = -2;
  iVar26 = TConsoleVariableData<int>::GetValueOnRenderThread(CVarMegaLightsDebugVisualizeLight.Ref);
  (this->MegaLightsParameters).DebugVisualizeLight = iVar26;
  iVar27 = TConsoleVariableData<int>::GetValueOnRenderThread(CVarMegaLightsIESProfiles.Ref);
  iVar26 = 0;
  (this->MegaLightsParameters).UseIESProfiles = (uint)(iVar27 != 0);
  (this->MegaLightsParameters).UseLightFunctionAtlas = (uint)this->bUseLightFunctionAtlas;
  if (((this->MegaLightsParameters).DebugCursorPosition.field0_0x0._s_0.X < 0) ||
     ((this->MegaLightsParameters).DebugCursorPosition.field0_0x0._s_0.Y < 0)) {
    pFVar6 = this->View;
    iVar27 = *(int *)&(pFVar6->ViewRect).field0_0x0;
    (this->MegaLightsParameters).DebugCursorPosition.field0_0x0._s_0.X =
         (*(int *)((longlong)&(pFVar6->ViewRect).field0_0x0 + 8) - iVar27) / 2 + iVar27;
    iVar27 = *(int *)((longlong)&(pFVar6->ViewRect).field0_0x0 + 4);
    (this->MegaLightsParameters).DebugCursorPosition.field0_0x0._s_0.Y =
         (*(int *)((longlong)&(pFVar6->ViewRect).field0_0x0 + 0xc) - iVar27) / 2 + iVar27;
  }
  pFVar47 = GetHZBParameters(&local_8e8,this->GraphBuilder,this->View,All);
  FHZBParameters::operator=(&(this->MegaLightsParameters).HZBParameters,pFVar47);
  (this->MegaLightsParameters).VisibleLightHashViewMinInTiles.field0_0x0 =
       (this->VisibleLightHashViewMinInTiles).field0_0x0;
  (this->MegaLightsParameters).VisibleLightHashViewSizeInTiles.field0_0x0 =
       (this->VisibleLightHashViewSizeInTiles).field0_0x0;
  if ((((this->bDebug != false) || (this->bVolumeDebug != false)) ||
      (this->bTranslucencyVolumeDebug != false)) ||
     ((this->DebugTileClassificationMode != 0 || (this->VisualizeLightLoopIterationsMode != 0)))) {
    pFVar6 = this->View;
    iVar27 = (*(int *)((longlong)&(pFVar6->ViewRect).field0_0x0 + 0xc) -
             *(int *)((longlong)&(pFVar6->ViewRect).field0_0x0 + 4)) + 7;
    iVar28 = (*(int *)((longlong)&(pFVar6->ViewRect).field0_0x0 + 8) -
             *(int *)&(pFVar6->ViewRect).field0_0x0) + 7;
    iVar27 = ((int)((iVar27 >> 0x1f & 7U) + iVar27) >> 3) *
             ((int)(iVar28 + (iVar28 >> 0x1f & 7U)) >> 3);
    ShaderPrint::SetEnabled(true);
    ShaderPrint::RequestSpaceForLines(iVar27 * 4 + 0x1000);
    ShaderPrint::RequestSpaceForTriangles(iVar27 * 2);
    ShaderPrint::SetParameters
              (this->GraphBuilder,&this->View->ShaderPrintData,
               &(this->MegaLightsParameters).ShaderPrintUniformBuffer);
    iVar27 = TConsoleVariableData<int>::GetValueOnRenderThread(CVarMegaLightsDebugLightId.Ref);
    (this->MegaLightsParameters).DebugLightId = iVar27;
    if (iVar27 < 0) {
      pFVar12 = this->Scene;
      local_c88._padding_._0_4_ = 0;
      local_c88._padding_._4_4_ = 1;
      local_c88.UnvisitedBitMask = 0xffffffff;
      local_c88.CurrentBitIndex = 0;
      local_c88.BaseBitIndex = 0;
      local_c88.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(pFVar12->Lights).field_0x10;
      if (*(int *)&(pFVar12->Lights).field_0x28 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_c88);
      }
      local_be0._padding_ = CONCAT44(local_c88._padding_._4_4_,(undefined4)local_c88._padding_);
      local_be0.Array = local_c88.Array;
      local_be0.UnvisitedBitMask = local_c88.UnvisitedBitMask;
      local_be0.CurrentBitIndex = local_c88.CurrentBitIndex;
      local_be0.BaseBitIndex = local_c88.BaseBitIndex;
      local_be0._28_4_ = local_c88._28_4_;
      local_be8 = &pFVar12->Lights;
      if (local_c88.CurrentBitIndex < (local_c88.Array)->NumBits) {
        do {
          lVar36 = *(longlong *)
                    ((longlong)local_be0.CurrentBitIndex * 0x40 + 0x30 + *(longlong *)local_be8);
          if ((*(byte *)(*(longlong *)(lVar36 + 0x28) + 0x1dc) & 1) != 0) {
            (this->MegaLightsParameters).DebugLightId = *(int *)(lVar36 + 0x34);
            break;
          }
          local_be0.UnvisitedBitMask = local_be0.UnvisitedBitMask & ~local_be0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_be0);
        } while (local_be0.CurrentBitIndex < (local_be0.Array)->NumBits);
      }
      if ((this->MegaLightsParameters).DebugLightId < 0) {
        (this->MegaLightsParameters).DebugLightId = -2;
      }
    }
  }
  pTVar20 = CVarMegaLightsVolumeMinSampleWeight.Ref;
  bVar23 = IsInParallelRenderingThread();
  if ((!bVar23) &&
     (bVar23 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar23)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  fVar69 = pTVar20->ShadowedValue[1];
  if (fVar69 <= 0.0) {
    fVar69 = 0.0;
  }
  (this->MegaLightsVolumeParameters).VolumeMinSampleWeight = fVar69;
  pTVar20 = CVarMegaLightsVolumeMaxShadingWeight.Ref;
  bVar23 = IsInParallelRenderingThread();
  if ((!bVar23) &&
     (bVar23 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar23)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  fVar69 = pTVar20->ShadowedValue[1];
  if (fVar69 <= 0.0) {
    fVar69 = 0.0;
  }
  (this->MegaLightsVolumeParameters).VolumeMaxShadingWeight = fVar69;
  local_c60 = 0x1f;
  bVar23 = this->VolumeDownsampleFactor != 0;
  if (bVar23) {
    for (; this->VolumeDownsampleFactor >> local_c60 == 0; local_c60 = local_c60 + -1) {
    }
  }
  iVar27 = iVar26;
  if (bVar23) {
    iVar27 = local_c60;
  }
  (this->MegaLightsVolumeParameters).VolumeDownsampleFactorMultShift = iVar27;
  *(undefined8 *)&(this->MegaLightsVolumeParameters).NumSamplesPerVoxel.field0_0x0 =
       *(undefined8 *)&(this->NumSamplesPerVoxel3d).field0_0x0;
  (this->MegaLightsVolumeParameters).NumSamplesPerVoxel.field0_0x0._s_0.Z =
       (this->NumSamplesPerVoxel3d).field0_0x0._s_0.Z;
  local_c5c = 0x1f;
  bVar23 = (this->NumSamplesPerVoxel3d).field0_0x0._s_0.X != 0;
  if (bVar23) {
    for (; (uint)(this->NumSamplesPerVoxel3d).field0_0x0._s_0.X >> local_c5c == 0;
        local_c5c = local_c5c + -1) {
    }
  }
  iVar27 = iVar26;
  if (bVar23) {
    iVar27 = local_c5c;
  }
  (this->MegaLightsVolumeParameters).NumSamplesPerVoxelDivideShift.field0_0x0._s_0.X = iVar27;
  piVar37 = &(this->NumSamplesPerVoxel3d).field0_0x0._s_0.Y;
  local_c58 = 0x1f;
  bVar23 = *piVar37 != 0;
  if (bVar23) {
    for (; (uint)*piVar37 >> local_c58 == 0; local_c58 = local_c58 + -1) {
    }
  }
  if (bVar23) {
    iVar26 = local_c58;
  }
  (this->MegaLightsVolumeParameters).NumSamplesPerVoxelDivideShift.field0_0x0._s_0.Y = iVar26;
  piVar37 = &(this->NumSamplesPerVoxel3d).field0_0x0._s_0.Z;
  local_c54 = 0x1f;
  bVar23 = *piVar37 != 0;
  if (bVar23) {
    for (; (uint)*piVar37 >> local_c54 == 0; local_c54 = local_c54 + -1) {
    }
  }
  iVar27 = 0;
  iVar26 = iVar27;
  if (bVar23) {
    iVar26 = local_c54;
  }
  (this->MegaLightsVolumeParameters).NumSamplesPerVoxelDivideShift.field0_0x0._s_0.Z = iVar26;
  *(undefined8 *)&(this->MegaLightsVolumeParameters).DownsampledVolumeViewSize.field0_0x0 =
       *(undefined8 *)&(this->VolumeDownsampledViewSize).field0_0x0;
  (this->MegaLightsVolumeParameters).DownsampledVolumeViewSize.field0_0x0._s_0.Z =
       (this->VolumeDownsampledViewSize).field0_0x0._s_0.Z;
  *(undefined8 *)&(this->MegaLightsVolumeParameters).VolumeViewSize.field0_0x0 =
       *(undefined8 *)&(this->VolumeViewSize).field0_0x0;
  (this->MegaLightsVolumeParameters).VolumeViewSize.field0_0x0._s_0.Z =
       (this->VolumeViewSize).field0_0x0._s_0.Z;
  *(ulonglong *)&(this->MegaLightsVolumeParameters).VolumeSampleViewSize.field0_0x0 =
       CONCAT44(uStack_ec4,local_ec8);
  (this->MegaLightsVolumeParameters).VolumeSampleViewSize.field0_0x0._s_0.Z = local_eac;
  iVar26 = (this->VolumeBufferSize).field0_0x0._s_0.Y;
  iVar28 = (this->VolumeBufferSize).field0_0x0._s_0.Z;
  (this->MegaLightsVolumeParameters).VolumeInvBufferSize.field0_0x0._s_0.X =
       fVar4 / (float)(this->VolumeBufferSize).field0_0x0._s_0.X;
  (this->MegaLightsVolumeParameters).VolumeInvBufferSize.field0_0x0._s_0.Y = fVar4 / (float)iVar26;
  (this->MegaLightsVolumeParameters).VolumeInvBufferSize.field0_0x0._s_0.Z = fVar4 / (float)iVar28;
  *(undefined8 *)&(this->MegaLightsVolumeParameters).MegaLightsVolumeZParams.field0_0x0 =
       *(undefined8 *)&(this->VolumeParameters).GridZParams.field0_0x0;
  (this->MegaLightsVolumeParameters).MegaLightsVolumeZParams.field0_0x0._s_0.Z =
       (this->VolumeParameters).GridZParams.field0_0x0._s_0.Z;
  (this->MegaLightsVolumeParameters).MegaLightsVolumePixelSize =
       (this->VolumeParameters).FogGridToPixelXY.field0_0x0._s_0.X;
  if ((this->Scene->ExponentialFogs).ArrayNum < 1) {
    fVar69 = 0.0;
  }
  else {
    fVar69 = *(float *)((this->Scene->ExponentialFogs).AllocatorInstance.Data + 0x70);
  }
  (this->MegaLightsVolumeParameters).VolumePhaseG = fVar69;
  (this->MegaLightsVolumeParameters).VolumeInverseSquaredLightDistanceBiasScale =
       GInverseSquaredLightDistanceBiasScale;
  pTVar48 = VolumetricFogTemporalRandom(&local_9a8,*(uint *)(this->View->_padding_ + 0xa0));
  *(undefined8 *)&(this->MegaLightsVolumeParameters).VolumeFrameJitterOffset.field0_0x0 =
       *(undefined8 *)&pTVar48->field0_0x0;
  (this->MegaLightsVolumeParameters).VolumeFrameJitterOffset.field0_0x0._s_0.Z =
       (pTVar48->field0_0x0)._s_0.Z;
  pTVar62 = CVarMegaLightsVolumeHZBOcclusionTest.Ref;
  bVar23 = IsInParallelRenderingThread();
  if ((!bVar23) &&
     (bVar23 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar23)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  (this->MegaLightsVolumeParameters).UseHZBOcclusionTest = pTVar62->ShadowedValue[1];
  pTVar62 = CVarMegaLightsVolumeDebug.Ref;
  bVar23 = IsInParallelRenderingThread();
  if ((!bVar23) &&
     (bVar23 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar23)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  (this->MegaLightsVolumeParameters).VolumeDebugMode = pTVar62->ShadowedValue[1];
  pTVar62 = CVarMegaLightsVolumeDebugSliceIndex.Ref;
  bVar23 = IsInParallelRenderingThread();
  if ((!bVar23) &&
     (bVar23 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar23)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  (this->MegaLightsVolumeParameters).VolumeDebugSliceIndex = pTVar62->ShadowedValue[1];
  fVar69 = GetVolumetricFogLightSoftFading();
  (this->MegaLightsVolumeParameters).LightSoftFading = fVar69;
  (this->MegaLightsVolumeParameters).TranslucencyVolumeCascadeIndex = 0;
  (this->MegaLightsVolumeParameters).TranslucencyVolumeInvResolution = 0.0;
  (this->MegaLightsVolumeParameters).IsUnifiedVolume = (uint)(this->bUnifiedVolume != false);
  *(undefined8 *)&(this->MegaLightsVolumeParameters).ResampleVolumeViewSize.field0_0x0 =
       *(undefined8 *)&(this->VolumeViewSize).field0_0x0;
  (this->MegaLightsVolumeParameters).ResampleVolumeViewSize.field0_0x0._s_0.Z =
       (this->VolumeViewSize).field0_0x0._s_0.Z;
  iVar26 = (this->VolumeBufferSize).field0_0x0._s_0.Y;
  iVar28 = (this->VolumeBufferSize).field0_0x0._s_0.Z;
  (this->MegaLightsVolumeParameters).ResampleVolumeInvBufferSize.field0_0x0._s_0.X =
       fVar4 / (float)(this->VolumeBufferSize).field0_0x0._s_0.X;
  (this->MegaLightsVolumeParameters).ResampleVolumeInvBufferSize.field0_0x0._s_0.Y =
       fVar4 / (float)iVar26;
  (this->MegaLightsVolumeParameters).ResampleVolumeInvBufferSize.field0_0x0._s_0.Z =
       fVar4 / (float)iVar28;
  *(undefined8 *)&(this->MegaLightsVolumeParameters).ResampleVolumeZParams.field0_0x0 =
       *(undefined8 *)&(this->VolumeParameters).GridZParams.field0_0x0;
  (this->MegaLightsVolumeParameters).ResampleVolumeZParams.field0_0x0._s_0.Z =
       (this->VolumeParameters).GridZParams.field0_0x0._s_0.Z;
  pTVar20 = CVarMegaLightsTranslucencyVolumeMinSampleWeight.Ref;
  bVar23 = IsInParallelRenderingThread();
  if ((!bVar23) &&
     (bVar23 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar23)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  fVar69 = pTVar20->ShadowedValue[1];
  if (fVar69 <= 0.0) {
    fVar69 = 0.0;
  }
  (this->MegaLightsTranslucencyVolumeParameters).VolumeMinSampleWeight = fVar69;
  pTVar20 = CVarMegaLightsTranslucencyVolumeMaxShadingWeight.Ref;
  bVar23 = IsInParallelRenderingThread();
  if ((!bVar23) &&
     (bVar23 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar23)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  fVar69 = pTVar20->ShadowedValue[1];
  if (fVar69 <= 0.0) {
    fVar69 = 0.0;
  }
  (this->MegaLightsTranslucencyVolumeParameters).VolumeMaxShadingWeight = fVar69;
  local_c50 = 0x1f;
  bVar23 = this->TranslucencyVolumeDownsampleFactor != 0;
  if (bVar23) {
    for (; this->TranslucencyVolumeDownsampleFactor >> local_c50 == 0; local_c50 = local_c50 + -1) {
    }
  }
  iVar26 = iVar27;
  if (bVar23) {
    iVar26 = local_c50;
  }
  (this->MegaLightsTranslucencyVolumeParameters).VolumeDownsampleFactorMultShift = iVar26;
  *(undefined8 *)&(this->MegaLightsTranslucencyVolumeParameters).NumSamplesPerVoxel.field0_0x0 =
       *(undefined8 *)&(this->NumSamplesPerTranslucencyVoxel3d).field0_0x0;
  (this->MegaLightsTranslucencyVolumeParameters).NumSamplesPerVoxel.field0_0x0._s_0.Z =
       (this->NumSamplesPerTranslucencyVoxel3d).field0_0x0._s_0.Z;
  local_c4c = 0x1f;
  bVar23 = (this->NumSamplesPerTranslucencyVoxel3d).field0_0x0._s_0.X != 0;
  if (bVar23) {
    for (; (uint)(this->NumSamplesPerTranslucencyVoxel3d).field0_0x0._s_0.X >> local_c4c == 0;
        local_c4c = local_c4c + -1) {
    }
  }
  iVar26 = iVar27;
  if (bVar23) {
    iVar26 = local_c4c;
  }
  (this->MegaLightsTranslucencyVolumeParameters).NumSamplesPerVoxelDivideShift.field0_0x0._s_0.X =
       iVar26;
  piVar37 = &(this->NumSamplesPerTranslucencyVoxel3d).field0_0x0._s_0.Y;
  local_c48 = 0x1f;
  bVar23 = *piVar37 != 0;
  if (bVar23) {
    for (; (uint)*piVar37 >> local_c48 == 0; local_c48 = local_c48 + -1) {
    }
  }
  iVar26 = iVar27;
  if (bVar23) {
    iVar26 = local_c48;
  }
  (this->MegaLightsTranslucencyVolumeParameters).NumSamplesPerVoxelDivideShift.field0_0x0._s_0.Y =
       iVar26;
  piVar37 = &(this->NumSamplesPerTranslucencyVoxel3d).field0_0x0._s_0.Z;
  local_c44 = 0x1f;
  bVar23 = *piVar37 != 0;
  if (bVar23) {
    for (; (uint)*piVar37 >> local_c44 == 0; local_c44 = local_c44 + -1) {
    }
  }
  if (bVar23) {
    iVar27 = local_c44;
  }
  (this->MegaLightsTranslucencyVolumeParameters).NumSamplesPerVoxelDivideShift.field0_0x0._s_0.Z =
       iVar27;
  *(ulonglong *)&(this->MegaLightsTranslucencyVolumeParameters).DownsampledVolumeViewSize.field0_0x0
       = CONCAT44(iVar60,iVar25);
  (this->MegaLightsTranslucencyVolumeParameters).DownsampledVolumeViewSize.field0_0x0._s_0.Z =
       local_eb0;
  *(undefined8 *)&(this->MegaLightsTranslucencyVolumeParameters).VolumeViewSize.field0_0x0 =
       *(undefined8 *)&(this->TranslucencyVolumeBufferSize).field0_0x0;
  (this->MegaLightsTranslucencyVolumeParameters).VolumeViewSize.field0_0x0._s_0.Z =
       (this->TranslucencyVolumeBufferSize).field0_0x0._s_0.Z;
  *(undefined8 *)&(this->MegaLightsTranslucencyVolumeParameters).VolumeSampleViewSize.field0_0x0 =
       *(undefined8 *)&(this->TranslucencyVolumeSampleBufferSize).field0_0x0;
  (this->MegaLightsTranslucencyVolumeParameters).VolumeSampleViewSize.field0_0x0._s_0.Z =
       (this->TranslucencyVolumeSampleBufferSize).field0_0x0._s_0.Z;
  iVar25 = (this->VolumeBufferSize).field0_0x0._s_0.Y;
  iVar60 = (this->VolumeBufferSize).field0_0x0._s_0.Z;
  (this->MegaLightsTranslucencyVolumeParameters).VolumeInvBufferSize.field0_0x0._s_0.X =
       fVar4 / (float)(this->VolumeBufferSize).field0_0x0._s_0.X;
  (this->MegaLightsTranslucencyVolumeParameters).VolumeInvBufferSize.field0_0x0._s_0.Y =
       fVar4 / (float)iVar25;
  (this->MegaLightsTranslucencyVolumeParameters).VolumeInvBufferSize.field0_0x0._s_0.Z =
       fVar4 / (float)iVar60;
  *(undefined8 *)&(this->MegaLightsTranslucencyVolumeParameters).MegaLightsVolumeZParams.field0_0x0
       = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->MegaLightsTranslucencyVolumeParameters).MegaLightsVolumeZParams.field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  (this->MegaLightsTranslucencyVolumeParameters).MegaLightsVolumePixelSize = 0;
  (this->MegaLightsTranslucencyVolumeParameters).VolumePhaseG = 0.0;
  (this->MegaLightsTranslucencyVolumeParameters).VolumeInverseSquaredLightDistanceBiasScale = 1.0;
  *(undefined8 *)&(this->MegaLightsTranslucencyVolumeParameters).VolumeFrameJitterOffset.field0_0x0
       = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->MegaLightsTranslucencyVolumeParameters).VolumeFrameJitterOffset.field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  (this->MegaLightsTranslucencyVolumeParameters).UseHZBOcclusionTest = 0;
  pTVar62 = CVarMegaLightsTranslucencyVolumeDebug.Ref;
  bVar23 = IsInParallelRenderingThread();
  if ((!bVar23) &&
     (bVar23 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar23)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  (this->MegaLightsTranslucencyVolumeParameters).VolumeDebugMode = pTVar62->ShadowedValue[1];
  (this->MegaLightsTranslucencyVolumeParameters).VolumeDebugSliceIndex = 0;
  (this->MegaLightsTranslucencyVolumeParameters).LightSoftFading = 0.0;
  (this->MegaLightsTranslucencyVolumeParameters).TranslucencyVolumeCascadeIndex = 0;
  iVar25 = GetTranslucencyLightingVolumeDim();
  (this->MegaLightsTranslucencyVolumeParameters).TranslucencyVolumeInvResolution =
       fVar4 / (float)iVar25;
  (this->MegaLightsTranslucencyVolumeParameters).IsUnifiedVolume =
       (uint)(this->bUnifiedVolume != false);
  *(undefined8 *)&(this->MegaLightsTranslucencyVolumeParameters).ResampleVolumeViewSize.field0_0x0 =
       *(undefined8 *)&(this->VolumeViewSize).field0_0x0;
  (this->MegaLightsTranslucencyVolumeParameters).ResampleVolumeViewSize.field0_0x0._s_0.Z =
       (this->VolumeViewSize).field0_0x0._s_0.Z;
  iVar25 = (this->VolumeBufferSize).field0_0x0._s_0.Y;
  iVar60 = (this->VolumeBufferSize).field0_0x0._s_0.Z;
  (this->MegaLightsTranslucencyVolumeParameters).ResampleVolumeInvBufferSize.field0_0x0._s_0.X =
       fVar4 / (float)(this->VolumeBufferSize).field0_0x0._s_0.X;
  (this->MegaLightsTranslucencyVolumeParameters).ResampleVolumeInvBufferSize.field0_0x0._s_0.Y =
       fVar4 / (float)iVar25;
  (this->MegaLightsTranslucencyVolumeParameters).ResampleVolumeInvBufferSize.field0_0x0._s_0.Z =
       fVar4 / (float)iVar60;
  *(undefined8 *)&(this->MegaLightsTranslucencyVolumeParameters).ResampleVolumeZParams.field0_0x0 =
       *(undefined8 *)&(this->VolumeParameters).GridZParams.field0_0x0;
  (this->MegaLightsTranslucencyVolumeParameters).ResampleVolumeZParams.field0_0x0._s_0.Z =
       (this->VolumeParameters).GridZParams.field0_0x0._s_0.Z;
  bVar23 = Substrate::IsSubstrateEnabled();
  uStack_ec0 = 0x10109;
  local_ec8 = 4;
  local_eb8 = 0;
  uVar29 = 7;
  if (bVar23) {
    uVar29 = 0xd;
  }
  local_af8.Metadata = (FShaderParametersMetadata *)0x0;
  local_af8.NumElements = uVar29;
  local_af8.BytesPerElement = 4;
  local_af8._12_4_ = uStack_ebc;
  local_af8.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  uStack_ec4 = uVar29;
  local_eac = uVar29;
  pFVar38 = FRDGBuilder::CreateBuffer
                      (this->GraphBuilder,&local_af8,L"MegaLights.TileAllocator",None);
  this->TileAllocator = pFVar38;
  uStack_ec0 = 0x10109;
  uStack_ec4 = uVar29 * uVar66;
  local_ec8 = 4;
  local_eb8 = 0;
  local_a28.Metadata = (FShaderParametersMetadata *)0x0;
  local_a28.NumElements = uStack_ec4;
  local_a28.BytesPerElement = 4;
  local_a28._12_4_ = uStack_ebc;
  local_a28.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  pFVar38 = FRDGBuilder::CreateBuffer(this->GraphBuilder,&local_a28,L"MegaLights.TileData",None);
  this->TileData = pFVar38;
  local_e08.Buffer = this->TileAllocator;
  local_e08._padding_._2_1_ = 0;
  bVar58 = 0;
  if ((((local_e08.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar58 = 0x1c;
  }
  local_e08._padding_._0_2_ = (ushort)bVar58;
  pFVar49 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_e08,None);
  AddClearUAVPass(this->GraphBuilder,pFVar49,0,Compute);
  this->DownsampledTileAllocator = this->TileAllocator;
  this->DownsampledTileData = this->TileData;
  if ((this->DownsampleFactor).field0_0x0._s_0.X != 1) {
    uStack_ec0 = 0x10109;
    local_ec8 = 4;
    local_a88.NumElements = uVar29;
    local_a88.BytesPerElement = 4;
    local_a88._12_4_ = uStack_ebc;
    local_a88.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
    local_eb8 = 0;
    local_a88.Metadata = (FShaderParametersMetadata *)0x0;
    uStack_ec4 = uVar29;
    pFVar38 = FRDGBuilder::CreateBuffer
                        (this->GraphBuilder,&local_a88,L"MegaLights.DownsampledTileAllocator",None);
    this->DownsampledTileAllocator = pFVar38;
    uStack_ec0 = 0x10109;
    uStack_ec4 = uVar29 * uVar19;
    local_ec8 = 4;
    local_eb8 = 0;
    local_a70.Metadata = (FShaderParametersMetadata *)0x0;
    local_a70.NumElements = uStack_ec4;
    local_a70.BytesPerElement = 4;
    local_a70._12_4_ = uStack_ebc;
    local_a70.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
    pFVar38 = FRDGBuilder::CreateBuffer
                        (this->GraphBuilder,&local_a70,L"MegaLights.DownsampledTileData",None);
    this->DownsampledTileData = pFVar38;
    local_de8.Buffer = this->DownsampledTileAllocator;
    local_de8._padding_._2_1_ = 0;
    bVar58 = 0;
    if ((((local_de8.Buffer)->Desc).Usage & DrawIndirect) != None) {
      bVar58 = 0x1c;
    }
    local_de8._padding_._0_2_ = (ushort)bVar58;
    pFVar49 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_de8,None);
    AddClearUAVPass(this->GraphBuilder,pFVar49,0,Compute);
  }
  if (this->InputType == HairStrands) {
    pFVar35 = this->DownsampledSceneDepth;
    local_6e8 = (void *)0x0;
    local_6e0 = 0;
    local_6dc = 1;
    local_728[0x32] = (pFVar35->Desc).field_0x32;
    local_728._0_8_ = *(undefined8 *)&pFVar35->Desc;
    local_728[0x33] = (pFVar35->Desc).field_0x33;
    local_728[0x34] = (pFVar35->Desc).field_0x34;
    local_728._36_8_ = *(undefined8 *)&(pFVar35->Desc).field_0x24;
    local_728._44_2_ = *(undefined2 *)&(pFVar35->Desc).field_0x2c;
    local_728._46_2_ = *(undefined2 *)&(pFVar35->Desc).field_0x2e;
    local_728[0x30] = (pFVar35->Desc).field_0x30;
    local_728[0x31] = (pFVar35->Desc).field_0x31;
    local_728._8_8_ = *(undefined8 *)&(pFVar35->Desc).field_0x8;
    local_728._16_8_ = *(undefined8 *)&(pFVar35->Desc).field_0x10;
    local_728._24_4_ = *(undefined4 *)&(pFVar35->Desc).field_0x18;
    local_728._32_4_ = *(undefined4 *)&(pFVar35->Desc).field_0x20;
    local_728[0x35] = (pFVar35->Desc).field_0x35;
    local_728._28_4_ = *(undefined4 *)&(pFVar35->Desc).field_0x1c;
    TArray<enum_EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::operator=
              (local_728 + 0x38,
               (TArray<EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
               &(pFVar35->Desc).field_0x38);
    pFVar35 = this->DownsampledSceneWorldNormal;
    local_738 = (void *)0x0;
    local_730 = 0;
    local_72c = 1;
    local_778[0x32] = (pFVar35->Desc).field_0x32;
    local_778._0_8_ = *(undefined8 *)&pFVar35->Desc;
    local_778[0x33] = (pFVar35->Desc).field_0x33;
    local_778[0x34] = (pFVar35->Desc).field_0x34;
    local_778._36_8_ = *(undefined8 *)&(pFVar35->Desc).field_0x24;
    local_778._44_2_ = *(undefined2 *)&(pFVar35->Desc).field_0x2c;
    local_778._46_2_ = *(undefined2 *)&(pFVar35->Desc).field_0x2e;
    local_778[0x30] = (pFVar35->Desc).field_0x30;
    local_778[0x31] = (pFVar35->Desc).field_0x31;
    local_778._8_8_ = *(undefined8 *)&(pFVar35->Desc).field_0x8;
    local_778._16_8_ = *(undefined8 *)&(pFVar35->Desc).field_0x10;
    local_778._24_4_ = *(undefined4 *)&(pFVar35->Desc).field_0x18;
    local_778._32_4_ = *(undefined4 *)&(pFVar35->Desc).field_0x20;
    local_778[0x35] = (pFVar35->Desc).field_0x35;
    local_778._28_4_ = *(undefined4 *)&(pFVar35->Desc).field_0x1c;
    TArray<enum_EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::operator=
              (local_778 + 0x38,
               (TArray<EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
               &(pFVar35->Desc).field_0x38);
    local_728._36_8_ = this->SceneTextures->_padding_;
    local_778._36_8_ = this->SceneTextures->_padding_;
    pFVar35 = FRDGBuilder::CreateTexture
                        (this->GraphBuilder,(FRDGTextureDesc *)local_728,
                         L"MegaLights.SceneDepth(HairStrands)",None);
    this->SceneDepth = pFVar35;
    pFVar35 = FRDGBuilder::CreateTexture
                        (this->GraphBuilder,(FRDGTextureDesc *)local_778,
                         L"MegaLights.SceneNormal(HairStrands)",None);
    this->SceneWorldNormal = pFVar35;
    pTVar63 = &FSceneTexturesConfig::GlobalInstance.Extent.field0_0x0;
    lVar36 = this->View->_padding_;
    if (*(char *)(lVar36 + 200) == '\0') {
      pTVar50 = &FSceneTexturesConfig::GlobalInstance.Extent.field0_0x0;
    }
    else {
      pTVar50 = (TIntPoint<int>_u_0 *)(lVar36 + 0x1c8);
    }
    local_5c4 = (TIntPoint<int>_u_0)*(TIntPoint<int>_u_0 *)&pTVar50->_s_0;
    local_d68 = local_5c4._0_4_;
    uStack_d64 = local_5c4._4_4_;
    local_5d0 = FClearValueBinding::Black.Value.Color[3];
    local_5cc = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    local_5e8._0_8_ = 0x20008;
    local_5e8._8_8_ = FClearValueBinding::Black._0_8_;
    local_5e8._16_8_ = FClearValueBinding::Black.Value._4_8_;
    local_5c8 = 0;
    local_5bc = 0x10001;
    local_5b8 = 0x1c000101;
    local_5b4 = 0xff00;
    local_5a8 = (void *)0x0;
    local_5a0 = 0;
    local_59c = 1;
    pFVar35 = FRDGBuilder::CreateTexture
                        (this->GraphBuilder,(FRDGTextureDesc *)local_5e8,
                         L"MegaLights.EncodedReprojectionVector(HairStrands)",None);
    this->EncodedReprojectionVector = pFVar35;
    if (local_5a8 != (void *)0x0) {
      FMemory::Free(local_5a8);
    }
    lVar36 = this->View->_padding_;
    if (*(char *)(lVar36 + 200) != '\0') {
      pTVar63 = (TIntPoint<int>_u_0 *)(lVar36 + 0x1c8);
    }
    local_574 = (TIntPoint<int>_u_0)*(TIntPoint<int>_u_0 *)&pTVar63->_s_0;
    local_d60 = local_574._0_4_;
    uStack_d5c = local_574._4_4_;
    local_580 = FClearValueBinding::Black.Value.Color[3];
    local_57c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    local_598._0_8_ = 0x20008;
    local_598._8_8_ = FClearValueBinding::Black._0_8_;
    local_598._16_8_ = FClearValueBinding::Black.Value._4_8_;
    local_578 = 0;
    local_56c = 0x10001;
    local_568 = 0x39000101;
    local_564 = 0xff00;
    local_558 = (void *)0x0;
    local_550 = 0;
    local_54c = 1;
    pFVar35 = FRDGBuilder::CreateTexture
                        (this->GraphBuilder,(FRDGTextureDesc *)local_598,
                         L"MegaLights.PackedPixelData(HairStrands)",None);
    this->PackedPixelData = pFVar35;
    if (local_558 != (void *)0x0) {
      FMemory::Free(local_558);
    }
    pFVar13 = this->DownsampledSceneDepth;
    pFVar14 = this->DownsampledSceneWorldNormal;
    local_788 = (void *)0x0;
    local_780 = 0;
    local_77c = 1;
    local_7c8[0x32] = (pFVar13->Desc).field_0x32;
    local_7c8._0_8_ = *(undefined8 *)&pFVar13->Desc;
    local_7c8[0x33] = (pFVar13->Desc).field_0x33;
    local_7c8[0x34] = (pFVar13->Desc).field_0x34;
    local_7c8._36_8_ = *(undefined8 *)&(pFVar13->Desc).field_0x24;
    local_7c8._44_2_ = *(undefined2 *)&(pFVar13->Desc).field_0x2c;
    local_7c8._46_2_ = *(undefined2 *)&(pFVar13->Desc).field_0x2e;
    local_7c8[0x30] = (pFVar13->Desc).field_0x30;
    local_7c8[0x31] = (pFVar13->Desc).field_0x31;
    local_7c8._8_8_ = *(undefined8 *)&(pFVar13->Desc).field_0x8;
    local_7c8._16_8_ = *(undefined8 *)&(pFVar13->Desc).field_0x10;
    local_7c8._24_4_ = *(undefined4 *)&(pFVar13->Desc).field_0x18;
    local_7c8._32_4_ = *(undefined4 *)&(pFVar13->Desc).field_0x20;
    local_7c8[0x35] = (pFVar13->Desc).field_0x35;
    local_7c8._28_4_ = *(undefined4 *)&(pFVar13->Desc).field_0x1c;
    TArray<enum_EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::operator=
              (local_7c8 + 0x38,
               (TArray<EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
               &(pFVar13->Desc).field_0x38);
    pFVar35 = this->DownsampledSceneWorldNormal;
    local_7d8 = (void *)0x0;
    local_7d0 = 0;
    local_7cc = 1;
    local_818[0x32] = (pFVar35->Desc).field_0x32;
    local_818._0_8_ = *(undefined8 *)&pFVar35->Desc;
    local_818[0x33] = (pFVar35->Desc).field_0x33;
    local_818[0x34] = (pFVar35->Desc).field_0x34;
    local_818._36_8_ = *(undefined8 *)&(pFVar35->Desc).field_0x24;
    local_818._44_2_ = *(undefined2 *)&(pFVar35->Desc).field_0x2c;
    local_818._46_2_ = *(undefined2 *)&(pFVar35->Desc).field_0x2e;
    local_818[0x30] = (pFVar35->Desc).field_0x30;
    local_818[0x31] = (pFVar35->Desc).field_0x31;
    local_818._8_8_ = *(undefined8 *)&(pFVar35->Desc).field_0x8;
    local_818._16_8_ = *(undefined8 *)&(pFVar35->Desc).field_0x10;
    local_818._24_4_ = *(undefined4 *)&(pFVar35->Desc).field_0x18;
    local_818._32_4_ = *(undefined4 *)&(pFVar35->Desc).field_0x20;
    local_818[0x35] = (pFVar35->Desc).field_0x35;
    local_818._28_4_ = *(undefined4 *)&(pFVar35->Desc).field_0x1c;
    TArray<enum_EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::operator=
              (local_818 + 0x38,
               (TArray<EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
               &(pFVar35->Desc).field_0x38);
    local_d58 = 1;
    uStack_d54 = 1;
    local_7c8._36_8_ = &DAT_100000001;
    local_d50 = 1;
    uStack_d4c = 1;
    local_818._36_8_ = &DAT_100000001;
    pFVar35 = FRDGBuilder::CreateTexture
                        (this->GraphBuilder,(FRDGTextureDesc *)local_7c8,
                         L"MegaLights.DummyDownsampledSceneDepth",None);
    this->DownsampledSceneDepth = pFVar35;
    pFVar35 = FRDGBuilder::CreateTexture
                        (this->GraphBuilder,(FRDGTextureDesc *)local_818,
                         L"MegaLights.DummyDownsampledWorldNormal",None);
    this->DownsampledSceneWorldNormal = pFVar35;
    pFVar35 = TileClassificationMark(this,0);
    this->DownsampledSceneDepth = pFVar13;
    this->DownsampledSceneWorldNormal = pFVar14;
    local_e98 = (TVector2<float>_u_0)pFVar35;
    if (local_7d8 != (void *)0x0) {
      FMemory::Free(local_7d8);
    }
    if (local_788 != (void *)0x0) {
      FMemory::Free(local_788);
    }
    if (local_738 != (void *)0x0) {
      FMemory::Free(local_738);
    }
    if (local_6e8 != (void *)0x0) {
      FMemory::Free(local_6e8);
    }
  }
  else {
    pFVar35 = (local_c10->MegaLightsTileBitmask).RenderTarget;
    this->EncodedReprojectionVector = (local_c10->EncodedReprojectionVector).RenderTarget;
    this->PackedPixelData = (local_c10->MegaLightsPackedPixelData).RenderTarget;
    local_e98 = (TVector2<float>_u_0)pFVar35;
  }
  pFVar51 = FRDGBuilder::AllocParameters<FMegaLightsTileClassificationBuildListsCS::FParameters>
                      (this->GraphBuilder);
  FMegaLightsParameters::operator=(&pFVar51->MegaLightsParameters,&this->MegaLightsParameters);
  (pFVar51->MegaLightsParameters).TileDataStride = uVar66;
  local_d10.Buffer = this->TileAllocator;
  local_d10._padding_._2_1_ = 0;
  bVar58 = 0;
  if ((((local_d10.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar58 = 0x1c;
  }
  local_d10._padding_._0_2_ = (ushort)bVar58;
  pFVar49 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_d10,None);
  pFVar51->RWTileAllocator = pFVar49;
  local_df8.Buffer = this->TileData;
  bVar58 = 0;
  local_df8._padding_._2_1_ = 0;
  if ((((local_df8.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar58 = 0x1c;
  }
  local_df8._padding_._0_2_ = (ushort)bVar58;
  pFVar49 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_df8,None);
  TVar33._s_0.Y = iStack_ea4;
  TVar33._s_0.X = local_ea8;
  pFVar51->RWTileData = pFVar49;
  pFVar51->MegaLightsTileBitmask = pFVar35;
  (pFVar51->ViewSizeInTiles).field0_0x0 = (this->ViewSizeInTiles).field0_0x0;
  local_d48 = 8;
  uStack_d44 = 8;
  uVar8 = *(undefined8 *)&(this->View->ViewRect).field0_0x0;
  local_c08._4_4_ = (int)((ulonglong)uVar8 >> 0x20);
  (pFVar51->DownsampledViewSizeInTiles).field0_0x0 = TVar33;
  local_c00 = CONCAT44(local_c08._4_4_ + 8,(int)uVar8 + 8);
  local_d40 = 8;
  uStack_d3c = 8;
  local_e70._s_0.Y = (local_c08._4_4_ + 7) / 8;
  local_e70._s_0.X = ((int)uVar8 + 7) / 8;
  (pFVar51->ViewMinInTiles).field0_0x0 = local_e70;
  local_bb0 = (this->MegaLightsParameters).DownsampledViewMin.field0_0x0._s_0;
  local_b80 = CONCAT44(local_bb0.Y + 8,local_bb0.X + 8);
  pFVar51->OutputTileDataStride = uVar66;
  local_bc0.DimensionValue = 1;
  local_bc0.Tail.DimensionValue = 1;
  local_e68._s_0.Y = (local_bb0.Y + 7) / 8;
  local_e68._s_0.X = (local_bb0.X + 7) / 8;
  (pFVar51->DownsampledViewMinInTiles).field0_0x0 = local_e68;
  local_c08 = uVar8;
  FGlobalShaderMap::GetShader<FMegaLightsTileClassificationBuildListsCS>
            (this->View->ShaderMap,&local_ae0,&local_bc0);
  iVar25 = (this->ViewSizeInTiles).field0_0x0._s_0.X + 7;
  iVar60 = (this->ViewSizeInTiles).field0_0x0._s_0.Y + 7;
  pFVar52 = FRDGEventName::FRDGEventName(&local_998,1,L"TileClassificationBuildLists");
  pFVar15 = this->GraphBuilder;
  pFVar39 = FMegaLightsTileClassificationBuildListsCS::FParameters::FTypeInfo::GetStructMetadata();
  local_c98._s_0.Z = 1;
  local_c98._s_0.X = (int)((iVar25 >> 0x1f & 7U) + iVar25) >> 3;
  local_c98._s_0.Y = (int)((iVar60 >> 0x1f & 7U) + iVar60) >> 3;
  FComputeShaderUtils::AddPass<FMegaLightsTileClassificationBuildListsCS>
            (pFVar15,pFVar52,Compute,&local_ae0,pFVar39,pFVar51,(TIntVector3<int> *)&local_c98._s_0)
  ;
  if (local_998.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_998.FormattedEventName.Data.AllocatorInstance.Data);
  }
  if ((this->DownsampleFactor).field0_0x0._s_0.X != 1) {
    pFVar51 = FRDGBuilder::AllocParameters<FMegaLightsTileClassificationBuildListsCS::FParameters>
                        (this->GraphBuilder);
    FMegaLightsParameters::operator=(&pFVar51->MegaLightsParameters,&this->MegaLightsParameters);
    local_d20.Buffer = this->DownsampledTileAllocator;
    local_d20._padding_._2_1_ = 0;
    bVar58 = 0;
    if ((((local_d20.Buffer)->Desc).Usage & DrawIndirect) != None) {
      bVar58 = 0x1c;
    }
    local_d20._padding_._0_2_ = (ushort)bVar58;
    pFVar49 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_d20,None);
    pFVar51->RWTileAllocator = pFVar49;
    local_dd8.Buffer = this->DownsampledTileData;
    bVar58 = 0;
    local_dd8._padding_._2_1_ = 0;
    if ((((local_dd8.Buffer)->Desc).Usage & DrawIndirect) != None) {
      bVar58 = 0x1c;
    }
    local_dd8._padding_._0_2_ = (ushort)bVar58;
    pFVar49 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_dd8,None);
    pFVar51->RWTileData = pFVar49;
    pFVar51->MegaLightsTileBitmask = (FRDGTexture *)local_e98;
    (pFVar51->ViewSizeInTiles).field0_0x0 = (this->ViewSizeInTiles).field0_0x0;
    local_d38 = 8;
    uStack_d34 = 8;
    uVar8 = *(undefined8 *)&(this->View->ViewRect).field0_0x0;
    local_b88._4_4_ = (int)((ulonglong)uVar8 >> 0x20);
    (pFVar51->DownsampledViewSizeInTiles).field0_0x0 = TVar33;
    local_b98 = CONCAT44(local_b88._4_4_ + 8,(int)uVar8 + 8);
    local_d30 = 8;
    uStack_d2c = 8;
    local_e78._s_0.Y = (local_b88._4_4_ + 7) / 8;
    local_e78._s_0.X = ((int)uVar8 + 7) / 8;
    (pFVar51->ViewMinInTiles).field0_0x0 = local_e78;
    local_ba0 = (this->MegaLightsParameters).DownsampledViewMin.field0_0x0._s_0;
    local_ba8 = CONCAT44(local_ba0.Y + 8,local_ba0.X + 8);
    local_e58._s_0.Y = (local_ba0.Y + 7) / 8;
    local_e58._s_0.X = (local_ba0.X + 7) / 8;
    (pFVar51->DownsampledViewMinInTiles).field0_0x0 = local_e58;
    pFVar51->OutputTileDataStride = local_e88._0_4_;
    local_e18.Tail.DimensionValue = (this->DownsampleFactor).field0_0x0._s_0.Y;
    local_e18.DimensionValue = (this->DownsampleFactor).field0_0x0._s_0.X;
    if (local_e18.Tail.DimensionValue == 2) {
      local_e18.DimensionValue = 2;
    }
    local_e18.Tail.Tail = local_e30[0].Tail.Tail;
    local_e18.Tail._5_3_ = local_e30[0].Tail._5_3_;
    local_e30[0].DimensionValue = local_e18.DimensionValue;
    local_e30[0].Tail.DimensionValue = local_e18.Tail.DimensionValue;
    local_b88 = uVar8;
    FGlobalShaderMap::GetShader<FMegaLightsTileClassificationBuildListsCS>
              (this->View->ShaderMap,&local_ad0,local_e30);
    pFVar52 = FRDGEventName::FRDGEventName(&local_980,1,L"DownsampledTileClassificationBuildLists");
    pFVar15 = this->GraphBuilder;
    pFVar39 = FMegaLightsTileClassificationBuildListsCS::FParameters::FTypeInfo::GetStructMetadata()
    ;
    local_cf8._s_0.X = (int)(local_ea8 + 7 + (local_ea8 + 7 >> 0x1f & 7U)) >> 3;
    local_cf8._s_0.Y = (int)(iStack_ea4 + 7 + (iStack_ea4 + 7 >> 0x1f & 7U)) >> 3;
    local_cf8._s_0.Z = 1;
    FComputeShaderUtils::AddPass<FMegaLightsTileClassificationBuildListsCS>
              (pFVar15,pFVar52,Compute,&local_ad0,pFVar39,pFVar51,
               (TIntVector3<int> *)&local_cf8._s_0);
    if (local_980.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_980.FormattedEventName.Data.AllocatorInstance.Data);
    }
  }
  uVar66 = local_eac;
  uStack_ec4 = local_eac;
  puVar65 = (undefined8 *)0x0;
  uStack_ec0 = 0x4189;
  local_ec8 = 0xc;
  local_a58.NumElements = local_eac;
  local_a58.BytesPerElement = 0xc;
  local_a58._12_4_ = uStack_ebc;
  local_a58.Usage = VertexBuffer|ShaderResource|DrawIndirect|UnorderedAccess|Static;
  local_eb8 = 0;
  local_a58.Metadata = (FShaderParametersMetadata *)0x0;
  pFVar38 = FRDGBuilder::CreateBuffer
                      (this->GraphBuilder,&local_a58,L"MegaLights.TileIndirectArgs",None);
  this->TileIndirectArgs = pFVar38;
  uStack_ec0 = 0x4189;
  local_ec8 = 0xc;
  uStack_ec4 = uVar66;
  local_a40.NumElements = uVar66;
  local_a40.BytesPerElement = 0xc;
  local_a40._12_4_ = uStack_ebc;
  local_a40.Usage = VertexBuffer|ShaderResource|DrawIndirect|UnorderedAccess|Static;
  local_eb8 = 0;
  local_a40.Metadata = (FShaderParametersMetadata *)0x0;
  pFVar38 = FRDGBuilder::CreateBuffer
                      (this->GraphBuilder,&local_a40,L"MegaLights.DownsampledTileIndirectArgs",None)
  ;
  this->DownsampledTileIndirectArgs = pFVar38;
  pFVar15 = this->GraphBuilder;
  puVar53 = FMemStackBase::Alloc((FMemStackBase *)&pFVar15->_padding_,0x370,0x10);
  if (puVar53 == (undefined8 *)0x0) {
    bVar23 = ::FDebug::CheckVerifyFailedImpl2
                       ("Object",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                        ,0x61,L"");
    if (bVar23) {
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
  }
  else {
    *puVar53 = &___7__TObject_VFParameters_FInitTileIndirectArgsCS___FRDGAllocator__6B_;
    FMegaLightsParameters::FMegaLightsParameters((FMegaLightsParameters *)(puVar53 + 2));
    puVar53[0x6a] = 0;
    puVar53[0x6b] = 0;
    puVar53[0x6c] = 0;
    puVar53[0x6d] = 0;
    puVar65 = puVar53;
  }
  local_e60 = puVar65;
  if ((((undefined8 **)pFVar15->_padding_ <= &local_e60) &&
      (&local_e60 < (undefined8 **)pFVar15->_padding_ + *(int *)((longlong)&pFVar15->_padding_ + 4))
      ) && (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar23)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  iVar25 = (int)pFVar15->_padding_;
  piVar37 = (int *)((longlong)&pFVar15->_padding_ + 4);
  if (iVar25 == *piVar37) {
    iVar25 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&pFVar15->_padding_,piVar37);
  }
  *(int *)&pFVar15->_padding_ = iVar25 + 1;
  *(undefined8 **)(pFVar15->_padding_ + (longlong)iVar25 * 8) = local_e60;
  FMegaLightsParameters::operator=
            ((FMegaLightsParameters *)(puVar65 + 2),&this->MegaLightsParameters);
  local_dc8.Buffer = this->TileIndirectArgs;
  local_dc8._padding_._2_1_ = 0;
  bVar58 = 0;
  if ((((local_dc8.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar58 = 0x1c;
  }
  local_dc8._padding_._0_2_ = (ushort)bVar58;
  pFVar49 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_dc8,None);
  puVar65[0x6a] = pFVar49;
  local_db8.Buffer = this->DownsampledTileIndirectArgs;
  bVar58 = 0;
  local_db8._padding_._2_1_ = 0;
  if ((((local_db8.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar58 = 0x1c;
  }
  local_db8._padding_._0_2_ = (ushort)bVar58;
  pFVar49 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_db8,None);
  puVar65[0x6b] = pFVar49;
  local_b78.Buffer = this->TileAllocator;
  local_b78._padding_._0_1_ = 0;
  local_b78._padding_._4_4_ = 0;
  local_b78._padding_._0_4_ = 0xffffffff;
  local_b78._padding_ = 0;
  if ((((local_b78.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_b78._padding_._0_1_ = 0x1c;
  }
  pFVar54 = FRDGBuilder::CreateSRV(this->GraphBuilder,&local_b78);
  puVar65[0x6c] = pFVar54;
  local_b58.Buffer = this->DownsampledTileAllocator;
  local_b58._padding_._0_1_ = 0;
  local_b58._padding_._4_4_ = 0;
  local_b58._padding_._0_4_ = 0xffffffff;
  local_b58._padding_ = 0;
  if ((((local_b58.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_b58._padding_._0_1_ = 0x1c;
  }
  pFVar54 = FRDGBuilder::CreateSRV(this->GraphBuilder,&local_b58);
  puVar65[0x6d] = pFVar54;
  this_00 = this->View->ShaderMap;
  pFVar55 = FInitTileIndirectArgsCS::GetStaticType();
  if (*(int *)&pFVar55->field_0x50 != 1) {
    local_ee8[0] = 0;
    `FGlobalShaderMap::GetShader<FInitTileIndirectArgsCS>'::__l2::<lambda_1>::operator()(local_ee8);
  }
  pFVar56 = (FShaderType *)FInitTileIndirectArgsCS::GetStaticType();
  FGlobalShaderMap::GetShader(this_00,&local_b38,pFVar56,0);
  if (local_b38.ShaderContent == (FShader *)0x0) {
    this_02 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_b08);
    ::FName::ToString((FName *)this_02,&local_ac0);
    FInitTileIndirectArgsCS::GetStaticType();
    bVar23 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_ac0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ac0.Data.AllocatorInstance.Data);
    }
    if (bVar23) {
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
  }
  FInitTileIndirectArgsCS::GetStaticType();
  local_aa8.ShaderContent = (FInitTileIndirectArgsCS *)local_b38.ShaderContent;
  local_aa8.ShaderMap = local_b38.ShaderMap;
  pFVar52 = FRDGEventName::FRDGEventName(&local_968,1,L"InitTileIndirectArgs");
  pFVar15 = this->GraphBuilder;
  pFVar39 = FInitTileIndirectArgsCS::FParameters::FTypeInfo::GetStructMetadata();
  local_ce8._s_0.X = 1;
  local_ce8._s_0.Y = 1;
  local_ce8._s_0.Z = 1;
  FComputeShaderUtils::AddPass<FInitTileIndirectArgsCS>
            (pFVar15,pFVar52,Compute,&local_aa8,pFVar39,(FParameters *)(puVar65 + 2),
             (TIntVector3<int> *)&local_ce8._s_0);
  if (local_968.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_968.FormattedEventName.Data.AllocatorInstance.Data);
  }
  pTVar57 = MegaLights::GetShadingTileTypes(&local_a98,this->InputType);
  pTVar1 = &this->ShadingTileTypes;
  if (pTVar1 != pTVar57) {
    pFVar16 = (pTVar1->AllocatorInstance).Data;
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar16);
    }
    (pTVar1->AllocatorInstance).Data = (pTVar57->AllocatorInstance).Data;
    (pTVar57->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ShadingTileTypes).ArrayNum = pTVar57->ArrayNum;
    (this->ShadingTileTypes).ArrayMax = pTVar57->ArrayMax;
    pTVar57->ArrayNum = 0;
    pTVar57->ArrayMax = 0;
  }
  if (local_a98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a98.AllocatorInstance.Data);
  }
  EVar24 = FSceneView::GetShaderPlatform((FSceneView *)this->View);
  uVar66 = MegaLights::GetReferenceShadingPassCount(EVar24);
  this->ReferenceShadingPassCount = uVar66;
  this->bReferenceMode = 1 < uVar66;
  this->FirstPassStateFrameIndex = (this->MegaLightsParameters).MegaLightsStateFrameIndex;
  EVar59 = PF_FloatRGB;
  if (1 < uVar66) {
    EVar59 = PF_A32B32G32R32F;
  }
  this->AccumulatedRGBLightingDataFormat = EVar59;
  EVar59 = PF_FloatRGBA;
  if (1 < uVar66) {
    EVar59 = PF_A32B32G32R32F;
  }
  this->AccumulatedRGBALightingDataFormat = EVar59;
  EVar59 = PF_R8;
  if (1 < uVar66) {
    EVar59 = PF_R32_FLOAT;
  }
  this->AccumulatedConfidenceDataFormat = EVar59;
  this->TranslucencyVolumeResolvedLightingAmbient[0] = (FRDGTexture *)0x0;
  this->TranslucencyVolumeResolvedLightingDirectional[0] = (FRDGTexture *)0x0;
  this->TranslucencyVolumeVisibleLightHash[0] = (FRDGBuffer *)0x0;
  this->TranslucencyVolumeResolvedLightingAmbient[1] = (FRDGTexture *)0x0;
  this->TranslucencyVolumeResolvedLightingDirectional[1] = (FRDGTexture *)0x0;
  this->TranslucencyVolumeVisibleLightHash[1] = (FRDGBuffer *)0x0;
  if (((this->bUseVSM != false) && (1 < uVar66)) && (2 < (byte)LogRenderer._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
  }
  if (*(FRHIResource **)local_d28 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)local_d28);
  }
  return;
}

// TileClassificationMark @ 144eb3e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FRDGTexture * __thiscall
FMegaLightsViewContext::TileClassificationMark(FMegaLightsViewContext *this,uint param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FRDGTexture *pFVar4;
  FRDGTextureUAV *pFVar5;
  FRDGTextureUAV *pFVar6;
  FRDGTextureUAV *pFVar7;
  FRDGTextureUAV *pFVar8;
  int iVar9;
  int iVar10;
  EMaterialSource EVar11;
  undefined1 auStackY_278 [32];
  FRDGTextureUAV *local_248;
  undefined8 local_240;
  FRunConfig local_238;
  FRDGTexture *local_220;
  FRDGTextureUAVDesc local_218;
  FRDGTextureUAVDesc local_200;
  FRDGTextureUAVDesc local_1e8;
  FRDGTextureUAVDesc local_1d0;
  FRDGTextureUAVDesc local_1b8;
  FRDGTextureUAVDesc local_1a0;
  FRDGTextureUAVDesc local_188;
  FRDGTextureUAVDesc local_170;
  FRDGTextureUAVDesc local_158;
  undefined8 local_140;
  undefined8 local_138;
  FLumenFrontLayerTranslucencyGBufferParameters local_128;
  FContext local_118;
  undefined1 local_98 [24];
  float local_80;
  int local_7c;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined4 local_68;
  undefined2 local_64;
  void *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_278;
  pFVar8 = (FRDGTextureUAV *)0x0;
  lVar1 = this->SceneTextures->_padding_;
  local_140._4_4_ = (int)((ulonglong)lVar1 >> 0x20);
  local_138 = CONCAT44(local_140._4_4_ + 8,(int)lVar1 + 8);
  local_128.FrontLayerTranslucencyNormal = (FRDGTexture *)0x0;
  local_128.FrontLayerTranslucencySceneDepth = (FRDGTexture *)0x0;
  iVar10 = (int)lVar1 + 7;
  iVar9 = local_140._4_4_ + 7;
  local_220 = (FRDGTexture *)CONCAT44(iVar9,iVar10);
  EVar11 = GBuffer;
  local_140 = lVar1;
  if (this->InputType != GBuffer) {
    if (this->InputType == HairStrands) {
      EVar11 = HairStrands;
    }
    else {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MegaLights\\MegaLights.cpp"
                         ,0x487,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FRDGTexture *)(*pcVar2)();
        return pFVar4;
      }
    }
  }
  local_80 = FClearValueBinding::Black.Value.Color[3];
  local_7c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_4c = 1;
  local_240._4_4_ = iVar9 / 8;
  local_240._0_4_ = iVar10 / 8;
  local_74 = local_240;
  local_98._0_8_ = 0x20008;
  local_98._8_8_ = FClearValueBinding::Black._0_8_;
  local_98._16_8_ = FClearValueBinding::Black.Value._4_8_;
  local_78 = 0;
  local_6c = 0x10001;
  local_68 = 0x39000101;
  local_64 = 0xff00;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_220 = FRDGBuilder::CreateTexture
                        (this->GraphBuilder,(FRDGTextureDesc *)local_98,L"MegaLights.TileBitmask",
                         None);
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if (param_1 == 0) {
    local_218.Texture = this->SceneDepth;
    local_218._padding_._1_1_ = 0;
    local_218._padding_._2_4_ = 0;
    local_218._padding_._0_1_ = ((local_218.Texture)->Desc).field_0x34;
    local_218._padding_._6_1_ = 0;
    local_218._padding_._0_1_ = 0;
    pFVar5 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_218,None);
    local_200.Texture = this->SceneWorldNormal;
    local_200._padding_._1_1_ = 0;
    local_200._padding_._2_4_ = 0;
    local_200._padding_._0_1_ = ((local_200.Texture)->Desc).field_0x34;
    local_200._padding_._6_1_ = 0;
    local_200._padding_._0_1_ = 0;
    pFVar6 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_200,None);
    iVar9 = -1;
  }
  else {
    iVar9 = this->FirstPassStateFrameIndex + param_1;
    pFVar5 = pFVar8;
    pFVar6 = pFVar8;
  }
  local_240 = (FRDGTextureUAV *)0x0;
  local_248 = (FRDGTextureUAV *)0x0;
  pFVar7 = pFVar8;
  if ((this->DownsampleFactor).field0_0x0._s_0.X == 2) {
    if ((this->DownsampleFactor).field0_0x0._s_0.Y == 1) {
      local_1e8.Texture = this->DownsampledSceneDepth;
      local_1e8._padding_._1_1_ = 0;
      local_1e8._padding_._2_4_ = 0;
      local_1e8._padding_._6_1_ = 0;
      local_1e8._padding_._0_1_ = ((local_1e8.Texture)->Desc).field_0x34;
      local_1e8._padding_._0_1_ = 0;
      pFVar7 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_1e8,None);
      local_1d0.Texture = this->DownsampledSceneWorldNormal;
      local_1d0._padding_._1_1_ = 0;
      local_1d0._padding_._2_4_ = 0;
      local_1d0._padding_._0_1_ = ((local_1d0.Texture)->Desc).field_0x34;
      local_1d0._padding_._6_1_ = 0;
      local_1d0._padding_._0_1_ = 0;
      local_240 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_1d0,None);
    }
    else {
      pFVar7 = (FRDGTextureUAV *)0x0;
      if ((this->DownsampleFactor).field0_0x0._s_0.Y == 2) {
        local_1b8.Texture = this->DownsampledSceneDepth;
        local_1b8._padding_._1_1_ = 0;
        local_1b8._padding_._2_4_ = 0;
        local_1b8._padding_._6_1_ = 0;
        local_1b8._padding_._0_1_ = ((local_1b8.Texture)->Desc).field_0x34;
        local_1b8._padding_._0_1_ = 0;
        pFVar8 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_1b8,None);
        local_1a0.Texture = this->DownsampledSceneWorldNormal;
        local_1a0._padding_._1_1_ = 0;
        local_1a0._padding_._2_4_ = 0;
        local_1a0._padding_._0_1_ = ((local_1a0.Texture)->Desc).field_0x34;
        local_1a0._padding_._6_1_ = 0;
        local_1a0._padding_._0_1_ = 0;
        local_248 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_1a0,None);
      }
    }
  }
  local_238.bCopyDepthAndNormal = pFVar5 != (FRDGTextureUAV *)0x0;
  local_238.bSubstrateOverflow = false;
  local_238.bTileClassifyLumen = false;
  local_238.bTileClassifyMegaLights = true;
  local_238.bTileClassifySubstrate = false;
  local_238.bReprojectLumen = false;
  local_238.ComputePassFlags = Compute;
  local_238.bDownsampleDepthAndNormal2x1 = pFVar7 != (FRDGTextureUAV *)0x0;
  local_238.bReprojectMegaLights = true;
  local_238.bDownsampleDepthAndNormal2x2 = pFVar8 != (FRDGTextureUAV *)0x0;
  local_238.StateFrameIndexOverride = iVar9;
  StochasticLighting::FContext::FContext
            (&local_118,this->GraphBuilder,(FMinimalSceneTextures *)this->SceneTextures,&local_128,
             EVar11);
  pFVar4 = local_220;
  local_118.DownsampledWorldNormal2x1UAV = local_240;
  local_118.DownsampledWorldNormal2x2UAV = local_248;
  local_188._padding_._0_1_ = (local_220->Desc).field_0x34;
  local_188._padding_._1_1_ = 0;
  local_188._padding_._2_4_ = 0;
  local_188._padding_._6_1_ = 0;
  local_188._padding_._0_1_ = 0;
  local_188.Texture = local_220;
  local_118.DepthHistoryUAV = pFVar5;
  local_118.NormalHistoryUAV = pFVar6;
  local_118.DownsampledSceneDepth2x1UAV = pFVar7;
  local_118.DownsampledSceneDepth2x2UAV = pFVar8;
  local_118.MegaLightsTileBitmaskUAV = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_188,None);
  local_170.Texture = this->EncodedReprojectionVector;
  local_170._padding_._1_1_ = 0;
  local_170._padding_._0_1_ = ((local_170.Texture)->Desc).field_0x34;
  local_170._padding_._2_4_ = 0;
  local_170._padding_._6_1_ = 0;
  local_170._padding_._0_1_ = 0;
  local_118.EncodedReprojectionVectorUAV =
       FRDGBuilder::CreateUAV(this->GraphBuilder,&local_170,None);
  local_158.Texture = this->PackedPixelData;
  local_158._padding_._1_1_ = 0;
  local_158._padding_._0_1_ = ((local_158.Texture)->Desc).field_0x34;
  local_158._padding_._2_4_ = 0;
  local_158._padding_._6_1_ = 0;
  local_158._padding_._0_1_ = 0;
  local_118.MegaLightsPackedPixelDataUAV =
       FRDGBuilder::CreateUAV(this->GraphBuilder,&local_158,None);
  StochasticLighting::FContext::Run(&local_118,this->View,Disabled,&local_238);
  return pFVar4;
}

// GenerateSamples @ 144f0e380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000144f0f673) */
/* WARNING: Removing unreachable block (ram,0x000144f0f680) */
/* WARNING: Removing unreachable block (ram,0x000144f0f12e) */
/* WARNING: Removing unreachable block (ram,0x000144f0f13b) */
/* WARNING: Removing unreachable block (ram,0x000144f10303) */
/* WARNING: Removing unreachable block (ram,0x000144f10319) */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ETileType": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FMegaLightsViewContext::GenerateSamples
          (FMegaLightsViewContext *this,FRDGTexture *param_1,uint param_2)

{
  int *piVar1;
  char cVar2;
  FRDGBuilder *pFVar3;
  FGlobalShaderMap *pFVar4;
  FRDGBuffer *pFVar5;
  longlong lVar6;
  ForElementType<FRDGTexture_*> FVar7;
  code *pcVar8;
  TRHIGlobal<int> TVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined8 uVar12;
  TConsoleVariableData<float> *pTVar13;
  bool bVar14;
  EShaderPermutationPrecacheRequest EVar15;
  bool bVar16;
  undefined1 uVar17;
  bool bVar18;
  EShaderPlatform EVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  FRDGScope *this_00;
  FRDGTextureUAV *pFVar23;
  TIntPoint<int>_u_0_s_0 TVar24;
  FRDGTextureUAV *pFVar25;
  FParameters *pFVar26;
  undefined8 *puVar27;
  FRDGBufferSRV *pFVar28;
  FShaderType *pFVar29;
  FName FVar30;
  FGlobalShaderType *pFVar31;
  FRDGEventName *pFVar32;
  FParameters *pFVar33;
  FRDGBufferSRV *pFVar34;
  FRDGTextureDesc *pFVar35;
  FRDGTexture *pFVar36;
  FShaderParametersMetadata *pFVar37;
  ETileType EVar38;
  undefined4 uVar39;
  ulonglong uVar40;
  longlong *plVar41;
  ForElementType<FRDGTexture_*> FVar42;
  uint uVar43;
  FScriptContainerElement *pFVar44;
  FScriptContainerElement *pFVar45;
  float fVar46;
  float fVar47;
  undefined1 auStackY_6b8 [32];
  undefined1 local_660;
  undefined1 local_65f;
  char local_65e;
  undefined1 local_65d;
  uint local_65c;
  uint local_658 [2];
  FRDGBuffer **local_650;
  wchar_t *local_648;
  FRDGTextureUAVDesc local_640;
  FRDGTextureUAVDesc local_628;
  undefined8 *local_610;
  FScriptContainerElement *local_608;
  FParameters *local_600;
  TShaderPermutationDomain<FVolumeGenerateLightSamplesCS::FTranslucencyLightingVolume,FVolumeGenerateLightSamplesCS::FNumSamplesPerVoxel1d,FVolumeGenerateLightSamplesCS::FLightSoftFading,FVolumeGenerateLightSamplesCS::FUseLightFunctionAtlas,FVolumeGenerateLightSamplesCS::FGuideByHistory,FVolumeGenerateLightSamplesCS::FDebugMode,FVolumeGenerateLightSamplesCS::FReferenceMode>
  local_5f8;
  TIntPoint<int>_u_0_s_0 local_5e8;
  undefined8 local_5d8;
  TShaderPermutationDomain<FGenerateLightSamplesCS::FTileType,FGenerateLightSamplesCS::FNumSamplesPerPixel1d,FGenerateLightSamplesCS::FGuideByHistory,FGenerateLightSamplesCS::FInputType,FGenerateLightSamplesCS::FDebugMode,FGenerateLightSamplesCS::FReferenceMode,FGenerateLightSamplesCS::FHairComplexTransmittance>
  local_5c8;
  FRDGBuffer *local_5b0;
  undefined4 uStack_5a8;
  undefined4 uStack_5a4;
  undefined4 local_5a0;
  undefined4 uStack_59c;
  int local_598;
  int iStack_594;
  undefined1 local_590 [8];
  TIntVector3<int>_u_0 local_588;
  TIntVector3<int>_u_0 local_578;
  FRDGBufferSRVDesc local_568;
  FRDGBufferSRVDesc local_548;
  FRDGBufferSRVDesc local_528;
  FRDGBufferSRVDesc local_508;
  FRDGBufferSRVDesc local_4e8;
  undefined1 local_4c8 [16];
  TIntVector3<int>_u_0 local_4b8;
  TIntVector3<int>_u_0 local_4a8;
  FGlobalShaderPermutationParameters local_498;
  FGlobalShaderPermutationParameters local_484;
  TRDGEventScopeGuard<FRDGScope_RHI> local_470;
  char local_460;
  FRDGTextureUAV *local_458;
  FRDGBufferSRVDesc local_450;
  FRDGBufferSRVDesc local_430;
  FRDGBufferSRVDesc local_410;
  wchar_t **local_3f0;
  FRHITextureDesc *local_3e8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_3d8;
  wchar_t **local_3c8;
  FRHITextureDesc *local_3c0;
  wchar_t **local_3b8;
  FRHITextureDesc *local_3b0;
  wchar_t **local_3a8;
  FRHITextureDesc *local_3a0;
  FRDGBuffer *local_398;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_388;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<7,unsigned_int>_const_*,std::tuple<unsigned_int_&>_>
  local_378;
  FClearValueBinding local_368;
  FClearValueBinding local_348;
  TShaderRefBase<FVolumeGenerateLightSamplesCS,FShaderMapPointerTable> local_328;
  FString local_318;
  TShaderRefBase<FVolumeGenerateLightSamplesCS,FShaderMapPointerTable> local_308;
  FString local_2f8;
  TShaderRefBase<FClearLightSamplesCS,FShaderMapPointerTable> local_2e8;
  TShaderRefBase<FGenerateLightSamplesCS,FShaderMapPointerTable> local_2d8;
  uint uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  FRDGEventName local_2a8;
  FRDGEventName local_290;
  FRDGEventName local_278;
  FRDGEventName local_260;
  undefined1 local_248 [24];
  float local_230;
  int local_22c;
  undefined4 local_228;
  FRDGTextureUAV *local_224;
  undefined2 local_21c;
  undefined4 local_21a;
  undefined4 local_216;
  void *local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  FRHITextureDesc local_1f8;
  FRHITextureDesc local_1a8;
  undefined1 local_158 [40];
  longlong *local_130;
  undefined1 local_128 [40];
  longlong *local_100;
  undefined1 local_f8 [80];
  undefined1 local_a8 [80];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_6b8;
  local_650 = (FRDGBuffer **)((ulonglong)local_650 & 0xffffffff00000000);
  local_460 = '\0';
  local_658[0] = param_2;
  if (this->bReferenceMode != false) {
    cVar2 = *(char *)((longlong)&this->GraphBuilder->_padding_ + 6);
    if ((cVar2 != '\0') && ((cVar2 != '\x01' || ((this->GraphBuilder->_padding_ & 4) == 0)))) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        local_2b8 = 0;
        uStack_2b4 = 0;
        ::Desc._12_8_ = ZEXT48(uStack_2bc);
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        ::Desc._padding_._4_4_ = 0;
        ::Desc._padding_ = (longlong)u_Pass_d;
        ::Desc._padding_ = (longlong)u_Pass_d;
        ::Desc._padding_._0_4_ = 0x13f;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```FMegaLightsViewContext::GenerateSamples'::__l7::Desc::operator()<unsigned_int_&>'
               ::__l3::<lambda_1>::operator()<unsigned_int_&>'::__l2::
               _dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
      pFVar3 = this->GraphBuilder;
      local_378._padding_ = (longlong)local_658;
      local_378._Myfirst._Val = &::Desc;
      local_470.State = (FRDGScopeState *)pFVar3;
      this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                          ((FRDGAllocator *)&pFVar3->_padding_,(FRDGScope **)pFVar3);
      ((FState *)&pFVar3->_padding_)->Current = this_00;
      local_470.Scope = this_00;
      UE::Core::Private::
      TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
      Destruct((ulonglong)(this_00->Impl).Impl.TypeIndex,&this_00->Impl);
      FRDGScope_RHI::
      FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<7,unsigned_int>,unsigned_int_&>
                ((FRDGScope_RHI *)&this_00->Impl,(FRDGScopeState *)pFVar3,&local_378);
      (this_00->Impl).Impl.TypeIndex = '\x02';
      if (*(bool *)((longlong)&pFVar3->_padding_ + 4) != false) {
        FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)pFVar3->_padding_,false);
        FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)pFVar3->_padding_);
      }
      local_460 = '\x01';
    }
  }
  if (this->bDebug == false) {
LAB_144f0e4d1:
    bVar18 = false;
  }
  else {
    EVar19 = FSceneView::GetShaderPlatform((FSceneView *)this->View);
    bVar14 = MegaLights::IsDebugEnabledForShadingPass(local_658[0],EVar19);
    bVar18 = true;
    if (!bVar14) goto LAB_144f0e4d1;
  }
  uVar43 = this->FirstPassStateFrameIndex + local_658[0];
  (this->MegaLightsParameters).MegaLightsStateFrameIndex = uVar43;
  if (local_658[0] != 0) {
    (this->MegaLightsParameters).StochasticLightingStateFrameIndex = uVar43;
  }
  pFVar23 = FRDGBuilder::CreateUAV
                      (this->GraphBuilder,this->DownsampledSceneDepth,SkipBarrier,PF_Unknown);
  local_458 = pFVar23;
  TVar24 = (TIntPoint<int>_u_0_s_0)
           FRDGBuilder::CreateUAV
                     (this->GraphBuilder,this->DownsampledSceneWorldNormal,SkipBarrier,PF_Unknown);
  local_5e8 = TVar24;
  pFVar25 = FRDGBuilder::CreateUAV(this->GraphBuilder,this->LightSamples,SkipBarrier,PF_Unknown);
  local_5d8 = pFVar25;
  pFVar26 = (FParameters *)
            FRDGBuilder::CreateUAV(this->GraphBuilder,this->LightSampleRays,SkipBarrier,PF_Unknown);
  pFVar3 = this->GraphBuilder;
  local_600 = pFVar26;
  puVar27 = FMemStackBase::Alloc((FMemStackBase *)&pFVar3->_padding_,0x390,0x10);
  if (puVar27 == (undefined8 *)0x0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Object",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                        ,0x61,L"");
    if (bVar14) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else {
    *(undefined4 *)(puVar27 + 3) = 4;
    *puVar27 = &___7__TObject_VFParameters_FClearLightSamplesCS___FRDGAllocator__6B_;
    puVar27[2] = 0;
    FMegaLightsParameters::FMegaLightsParameters((FMegaLightsParameters *)(puVar27 + 4));
    puVar27[0x6c] = 0;
    puVar27[0x6d] = 0;
    puVar27[0x6e] = 0;
    puVar27[0x6f] = 0;
    puVar27[0x70] = 0;
    puVar27[0x71] = 0;
  }
  local_610 = puVar27;
  if ((((undefined8 **)pFVar3->_padding_ <= &local_610) &&
      (&local_610 < (undefined8 **)pFVar3->_padding_ + *(int *)((longlong)&pFVar3->_padding_ + 4)))
     && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar14)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar20 = (int)pFVar3->_padding_;
  piVar1 = (int *)((longlong)&pFVar3->_padding_ + 4);
  if (iVar20 == *piVar1) {
    iVar20 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&pFVar3->_padding_,piVar1);
  }
  *(int *)&pFVar3->_padding_ = iVar20 + 1;
  uStack_5a8 = 4;
  *(undefined8 **)(pFVar3->_padding_ + (longlong)iVar20 * 8) = local_610;
  local_5b0 = this->DownsampledTileIndirectArgs;
  *(FRDGBuffer **)&((FParameters *)(puVar27 + 2))->IndirectArgs = local_5b0;
  puVar27[3] = CONCAT44(uStack_5a4,4);
  FMegaLightsParameters::operator=
            ((FMegaLightsParameters *)(puVar27 + 4),&this->MegaLightsParameters);
  puVar27[0x6e] = pFVar25;
  puVar27[0x6c] = pFVar23;
  *(TIntPoint<int>_u_0_s_0 *)(puVar27 + 0x6d) = TVar24;
  puVar27[0x6f] = pFVar26;
  local_430.Buffer = this->DownsampledTileAllocator;
  local_430._padding_._4_4_ = 0;
  local_430._padding_._0_4_ = 0xffffffff;
  local_430._padding_ = 0;
  local_430._padding_._0_1_ = 0;
  if ((((local_430.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_430._padding_._0_1_ = 0x1c;
  }
  pFVar28 = FRDGBuilder::CreateSRV(this->GraphBuilder,&local_430);
  puVar27[0x70] = pFVar28;
  local_410.Buffer = this->DownsampledTileData;
  local_410._padding_._0_1_ = 0;
  local_410._padding_._4_4_ = 0;
  local_410._padding_._0_4_ = 0xffffffff;
  local_410._padding_ = 0;
  if ((((local_410.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_410._padding_._0_1_ = 0x1c;
  }
  pFVar28 = FRDGBuilder::CreateSRV(this->GraphBuilder,&local_410);
  puVar27[0x71] = pFVar28;
  bVar14 = this->bDebug;
  pFVar4 = this->View->ShaderMap;
  pFVar29 = (FShaderType *)FClearLightSamplesCS::GetStaticType();
  uVar43 = (uint)(bVar14 != false);
  FGlobalShaderMap::GetShader(pFVar4,&local_388,pFVar29,uVar43);
  if (local_388.ShaderContent == (FShader *)0x0) {
    FVar30 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_590);
    ::FName::ToString((FName *)FVar30,&local_2f8);
    FClearLightSamplesCS::GetStaticType();
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
    if (bVar14) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  local_498._0_2_ = pFVar4->Platform;
  local_498._8_4_ = 1;
  local_498._4_4_ = uVar43;
  pFVar31 = FClearLightSamplesCS::GetStaticType();
  local_498.GlobalShaderName.ComparisonIndex.Value = *(uint *)&pFVar31->field_0x20;
  local_498.GlobalShaderName.Number = *(uint *)&pFVar31->field_0x24;
  EVar15 = FClearLightSamplesCS::ShouldPrecachePermutation(&local_498);
  if (EVar15 == NotUsed) {
    local_660 = 0;
    `FGlobalShaderMap::GetShader<FClearLightSamplesCS>'::__l2::<lambda_1>::operator()(&local_660);
  }
  pFVar5 = this->DownsampledTileIndirectArgs;
  local_2e8.ShaderContent = (FClearLightSamplesCS *)local_388.ShaderContent;
  local_2e8.ShaderMap = local_388.ShaderMap;
  local_158._0_8_ = 0;
  local_130 = (longlong *)0x0;
  pFVar32 = FRDGEventName::FRDGEventName(&local_2a8,1,L"ClearLightSamples");
  FComputeShaderUtils::AddPass<FClearLightSamplesCS>
            (this->GraphBuilder,pFVar32,Compute,&local_2e8,(FParameters *)(puVar27 + 2),pFVar5,0x48,
             (TFunction<void___cdecl(void)> *)local_158);
  if (local_2a8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.FormattedEventName.Data.AllocatorInstance.Data);
  }
  if (local_158._0_8_ != 0) {
    plVar41 = (longlong *)(local_158 + 0x10);
    if (local_130 != (longlong *)0x0) {
      plVar41 = local_130;
    }
    (**(code **)(*plVar41 + 0x10))();
  }
  local_65c = this->VisualizeLightLoopIterationsMode;
  if (this->InputType == HairStrands) {
LAB_144f0e995:
    bVar14 = true;
  }
  else {
    if ((this->View->HairCardsMeshElements).ArrayNum != 0) {
      EVar19 = FSceneView::GetShaderPlatform((FSceneView *)this->View);
      bVar14 = IsHairStrandsSupported(All,EVar19);
      if (bVar14) goto LAB_144f0e995;
    }
    bVar14 = false;
  }
  fVar47 = __real_3f800000;
  iVar20 = (this->ShadingTileTypes).ArrayNum;
  uVar40 = (ulonglong)iVar20;
  pFVar45 = (this->ShadingTileTypes).AllocatorInstance.Data;
  local_650 = (FRDGBuffer **)CONCAT44(local_650._4_4_,iVar20);
  pFVar44 = pFVar45 + uVar40 * 4;
  local_608 = pFVar44;
  while( true ) {
    pFVar28 = (FRDGBufferSRV *)0x0;
    local_5b0 = (FRDGBuffer *)pFVar45;
    if ((this->ShadingTileTypes).ArrayNum != (int)uVar40) {
      local_65f = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_65f);
    }
    if (pFVar45 == pFVar44) break;
    iVar20 = *(int *)pFVar45;
    EVar38 = (ETileType)iVar20;
    if (((this->View->bLightGridHasRectLights != false) ||
        (bVar16 = MegaLights::IsRectLightTileType(EVar38), !bVar16)) &&
       ((this->View->bLightGridHasTexturedLights != false ||
        (bVar16 = MegaLights::IsTexturedLightTileType(EVar38), pFVar44 = local_608, !bVar16)))) {
      local_65e = MegaLights::IsComplexTileType(EVar38);
      pFVar33 = FRDGAllocator::Alloc<FGenerateLightSamplesCS::FParameters>
                          ((FRDGAllocator *)&this->GraphBuilder->_padding_);
      local_398 = this->DownsampledTileIndirectArgs;
      uStack_390 = 4;
      *(FRDGBuffer **)&pFVar33->IndirectArgs = local_398;
      *(ulonglong *)&(pFVar33->IndirectArgs).field_0x8 = CONCAT44(uStack_38c,4);
      FMegaLightsParameters::operator=(&pFVar33->MegaLightsParameters,&this->MegaLightsParameters);
      pFVar33->RWDownsampledSceneDepth = local_458;
      pFVar33->RWDownsampledSceneWorldNormal = (FRDGTextureUAV *)local_5e8;
      pFVar33->RWLightSamples = local_5d8;
      pFVar33->RWLightSampleRays = (FRDGTextureUAV *)local_600;
      local_568.Buffer = this->DownsampledTileAllocator;
      pFVar3 = this->GraphBuilder;
      local_568._padding_._4_4_ = 0;
      local_568._padding_._0_4_ = 0xffffffff;
      local_568._padding_ = 0;
      uVar17 = 0;
      if ((((local_568.Buffer)->Desc).Usage & DrawIndirect) != None) {
        uVar17 = 0x1c;
      }
      local_568._padding_._0_4_ =
           CONCAT31((int3)((uint)(undefined4)local_568._padding_ >> 8),uVar17);
      FRDGUserValidation::ValidateCreateSRV(&pFVar3->UserValidation,&local_568);
      pFVar5 = local_568.Buffer;
      pFVar28 = FMemStackBase::Alloc((FMemStackBase *)&pFVar3->_padding_,0x50,8);
      lVar6 = pFVar5->_padding_;
      *(byte *)&pFVar28->_padding_ = (byte)pFVar28->_padding_ & 0xfe;
      *(undefined8 *)((longlong)&pFVar28->_padding_ + 4) = 0xffffffffffffffff;
      pFVar28->_padding_ = lVar6;
      pFVar28->_padding_ = 0;
      *(undefined1 *)&pFVar28->_padding_ = 3;
      pFVar28->_padding_ = (longlong)&___7FRDGBufferSRV__6B_;
      (pFVar28->Desc)._padding_ =
           CONCAT44(local_568._padding_._4_4_,(undefined4)local_568._padding_);
      (pFVar28->Desc)._padding_ =
           CONCAT44(local_568._padding_._4_4_,(undefined4)local_568._padding_);
      (pFVar28->Desc)._padding_ = local_568._padding_;
      (pFVar28->Desc).Buffer = local_568.Buffer;
      TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2>::Insert
                (&pFVar3->Views,(FRDGView *)pFVar28);
      FRDGUserValidation::ValidateCreateSRV(&pFVar3->UserValidation,pFVar28);
      pFVar33->DownsampledTileAllocator = pFVar28;
      local_508.Buffer = this->DownsampledTileData;
      pFVar3 = this->GraphBuilder;
      local_508._padding_._4_4_ = 0;
      local_508._padding_._0_4_ = 0xffffffff;
      local_508._padding_ = 0;
      uVar17 = 0;
      if ((((local_508.Buffer)->Desc).Usage & DrawIndirect) != None) {
        uVar17 = 0x1c;
      }
      local_508._padding_._0_4_ =
           CONCAT31((int3)((uint)(undefined4)local_508._padding_ >> 8),uVar17);
      FRDGUserValidation::ValidateCreateSRV(&pFVar3->UserValidation,&local_508);
      pFVar5 = local_508.Buffer;
      pFVar28 = FMemStackBase::Alloc((FMemStackBase *)&pFVar3->_padding_,0x50,8);
      lVar6 = pFVar5->_padding_;
      *(byte *)&pFVar28->_padding_ = (byte)pFVar28->_padding_ & 0xfe;
      *(undefined8 *)((longlong)&pFVar28->_padding_ + 4) = 0xffffffffffffffff;
      pFVar28->_padding_ = lVar6;
      pFVar28->_padding_ = 0;
      *(undefined1 *)&pFVar28->_padding_ = 3;
      pFVar28->_padding_ = (longlong)&___7FRDGBufferSRV__6B_;
      (pFVar28->Desc)._padding_ =
           CONCAT44(local_508._padding_._4_4_,(undefined4)local_508._padding_);
      (pFVar28->Desc)._padding_ =
           CONCAT44(local_508._padding_._4_4_,(undefined4)local_508._padding_);
      (pFVar28->Desc)._padding_ = local_508._padding_;
      (pFVar28->Desc).Buffer = local_508.Buffer;
      TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2>::Insert
                (&pFVar3->Views,(FRDGView *)pFVar28);
      FRDGUserValidation::ValidateCreateSRV(&pFVar3->UserValidation,pFVar28);
      pFVar33->DownsampledTileData = pFVar28;
      pFVar5 = this->VisibleLightHashHistory;
      if (pFVar5 == (FRDGBuffer *)0x0) {
        pFVar28 = (FRDGBufferSRV *)0x0;
      }
      else {
        pFVar3 = this->GraphBuilder;
        local_528._padding_._4_4_ = 0;
        local_528._padding_._0_4_ = 0xffffffff;
        local_528._padding_ = 0;
        uVar17 = 0;
        if (((pFVar5->Desc).Usage & DrawIndirect) != None) {
          uVar17 = 0x1c;
        }
        local_528._padding_._0_4_ =
             CONCAT31((int3)((uint)(undefined4)local_528._padding_ >> 8),uVar17);
        local_528.Buffer = pFVar5;
        FRDGUserValidation::ValidateCreateSRV(&pFVar3->UserValidation,&local_528);
        pFVar5 = local_528.Buffer;
        pFVar28 = FMemStackBase::Alloc((FMemStackBase *)&pFVar3->_padding_,0x50,8);
        pFVar28->_padding_ = pFVar5->_padding_;
        *(byte *)&pFVar28->_padding_ = (byte)pFVar28->_padding_ & 0xfe;
        *(undefined8 *)((longlong)&pFVar28->_padding_ + 4) = 0xffffffffffffffff;
        pFVar28->_padding_ = 0;
        pFVar28->_padding_ = (longlong)&___7FRDGBufferSRV__6B_;
        *(undefined1 *)&pFVar28->_padding_ = 3;
        (pFVar28->Desc)._padding_ =
             CONCAT44(local_528._padding_._4_4_,(undefined4)local_528._padding_);
        (pFVar28->Desc)._padding_ =
             CONCAT44(local_528._padding_._4_4_,(undefined4)local_528._padding_);
        (pFVar28->Desc)._padding_ = local_528._padding_;
        (pFVar28->Desc).Buffer = local_528.Buffer;
        TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2>::Insert
                  (&pFVar3->Views,(FRDGView *)pFVar28);
        FRDGUserValidation::ValidateCreateSRV(&pFVar3->UserValidation,pFVar28);
      }
      pFVar34 = (FRDGBufferSRV *)0x0;
      pFVar33->VisibleLightHashHistory = pFVar28;
      pFVar5 = this->VisibleLightMaskHashHistory;
      if (pFVar5 != (FRDGBuffer *)0x0) {
        pFVar3 = this->GraphBuilder;
        local_548._padding_._4_4_ = 0;
        local_548._padding_ = 0;
        local_548._padding_._0_4_ = 0xffffffff;
        uVar17 = 0;
        if (((pFVar5->Desc).Usage & DrawIndirect) != None) {
          uVar17 = 0x1c;
        }
        local_548._padding_._0_4_ =
             CONCAT31((int3)((uint)(undefined4)local_548._padding_ >> 8),uVar17);
        local_548.Buffer = pFVar5;
        FRDGUserValidation::ValidateCreateSRV(&pFVar3->UserValidation,&local_548);
        pFVar5 = local_548.Buffer;
        pFVar34 = FMemStackBase::Alloc((FMemStackBase *)&pFVar3->_padding_,0x50,8);
        pFVar34->_padding_ = pFVar5->_padding_;
        *(byte *)&pFVar34->_padding_ = (byte)pFVar34->_padding_ & 0xfe;
        *(undefined8 *)((longlong)&pFVar34->_padding_ + 4) = 0xffffffffffffffff;
        pFVar34->_padding_ = 0;
        pFVar34->_padding_ = (longlong)&___7FRDGBufferSRV__6B_;
        *(undefined1 *)&pFVar34->_padding_ = 3;
        (pFVar34->Desc)._padding_ =
             CONCAT44(local_548._padding_._4_4_,(undefined4)local_548._padding_);
        (pFVar34->Desc)._padding_ =
             CONCAT44(local_548._padding_._4_4_,(undefined4)local_548._padding_);
        (pFVar34->Desc)._padding_ = local_548._padding_;
        (pFVar34->Desc).Buffer = local_548.Buffer;
        TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2>::Insert
                  (&pFVar3->Views,(FRDGView *)pFVar34);
        FRDGUserValidation::ValidateCreateSRV(&pFVar3->UserValidation,pFVar34);
      }
      uVar43 = local_65c;
      pFVar33->VisibleLightMaskHashHistory = pFVar34;
      pFVar33->bVisualizeLightLoopIterations = (uint)(local_65c == 2);
      pTVar13 = CVarMegaLightsGuideByHistoryLightHiddenWeight.Ref;
      bVar16 = IsInParallelRenderingThread();
      if ((!bVar16) &&
         (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6409875433831007955>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x6d3,"IsInParallelRenderingThread()"), bVar16)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar33->LightHiddenPDFWeight = pTVar13->ShadowedValue[1];
      pTVar13 = CVarMegaLightsGuideByHistoryLightHiddenWeightForHistoryMiss.Ref;
      bVar16 = IsInParallelRenderingThread();
      if ((!bVar16) &&
         (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6409875433831007955>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x6d3,"IsInParallelRenderingThread()"), bVar16)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar33->LightHiddenPDFWeightForHistoryMiss = pTVar13->ShadowedValue[1];
      pTVar13 = CVarMegaLightsGuideByHistoryAreaLightHiddenWeight.Ref;
      fVar46 = fVar47;
      if (this->bGuideAreaLightsByHistory != false) {
        bVar16 = IsInParallelRenderingThread();
        if ((!bVar16) &&
           (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<6409875433831007955>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                ,0x6d3,"IsInParallelRenderingThread()"), bVar16)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        fVar46 = pTVar13->ShadowedValue[1];
      }
      pFVar33->AreaLightHiddenPDFWeight = fVar46;
      fVar46 = MegaLights::GetDirectionalLightSampleRatio();
      pFVar33->DirectionalLightSampleRatio = fVar46;
      pTVar13 = CVarMegaLightsMinSampleClampingWeight.Ref;
      bVar16 = IsInParallelRenderingThread();
      if ((!bVar16) &&
         (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6409875433831007955>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x6d3,"IsInParallelRenderingThread()"), bVar16)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar33->MinSampleClampingWeight = pTVar13->ShadowedValue[1];
      pFVar33->MegaLightsDepthHistory = this->SceneDepthHistory;
      pFVar33->PackedPixelDataTexture = this->PackedPixelData;
      pFVar33->EncodedReprojectionVectorTexture = this->EncodedReprojectionVector;
      uVar10 = *(undefined8 *)((longlong)&(this->HistoryScreenPositionScaleBias).field0_0x0 + 8);
      *(undefined8 *)&(pFVar33->HistoryScreenPositionScaleBias).field0_0x0 =
           *(undefined8 *)&(this->HistoryScreenPositionScaleBias).field0_0x0;
      *(undefined8 *)((longlong)&(pFVar33->HistoryScreenPositionScaleBias).field0_0x0 + 8) = uVar10;
      uVar10 = *(undefined8 *)((longlong)&(this->HistoryUVMinMax).field0_0x0 + 8);
      *(undefined8 *)&(pFVar33->HistoryUVMinMax).field0_0x0 =
           *(undefined8 *)&(this->HistoryUVMinMax).field0_0x0;
      *(undefined8 *)((longlong)&(pFVar33->HistoryUVMinMax).field0_0x0 + 8) = uVar10;
      uVar10 = *(undefined8 *)((longlong)&(this->HistoryGatherUVMinMax).field0_0x0 + 8);
      *(undefined8 *)&(pFVar33->HistoryGatherUVMinMax).field0_0x0 =
           *(undefined8 *)&(this->HistoryGatherUVMinMax).field0_0x0;
      *(undefined8 *)((longlong)&(pFVar33->HistoryGatherUVMinMax).field0_0x0 + 8) = uVar10;
      uVar10 = *(undefined8 *)((longlong)&(this->HistoryBufferSizeAndInvSize).field0_0x0 + 8);
      *(undefined8 *)&(pFVar33->HistoryBufferSizeAndInvSize).field0_0x0 =
           *(undefined8 *)&(this->HistoryBufferSizeAndInvSize).field0_0x0;
      *(undefined8 *)((longlong)&(pFVar33->HistoryBufferSizeAndInvSize).field0_0x0 + 8) = uVar10;
      (pFVar33->HistoryVisibleLightHashViewMinInTiles).field0_0x0 =
           (this->HistoryVisibleLightHashViewMinInTiles).field0_0x0;
      (pFVar33->HistoryVisibleLightHashViewSizeInTiles).field0_0x0 =
           (this->HistoryVisibleLightHashViewSizeInTiles).field0_0x0;
      local_5c8.Tail.DimensionValue =
           (this->NumSamplesPerPixel2d).field0_0x0._s_0.Y *
           (this->NumSamplesPerPixel2d).field0_0x0._s_0.X;
      if ((this->VisibleLightHashHistory == (FRDGBuffer *)0x0) ||
         (this->SceneDepthHistory == (FRDGTexture *)0x0)) {
        local_5c8.Tail.Tail.DimensionValue = false;
      }
      else {
        local_5c8.Tail.Tail.DimensionValue = true;
      }
      local_5c8.Tail.Tail.Tail.DimensionValue = (int)this->InputType;
      if ((bVar18) || (uVar43 == 2)) {
        local_5c8.Tail.Tail.Tail.Tail.DimensionValue = true;
      }
      else {
        local_5c8.Tail.Tail.Tail.Tail.DimensionValue = false;
      }
      local_5c8.Tail.Tail.Tail.Tail.Tail.DimensionValue = this->bReferenceMode;
      if ((bVar14) && (local_65e != '\0')) {
        local_5c8.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = true;
      }
      else {
        local_5c8.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = false;
      }
      local_5c8.DimensionValue = iVar20;
      FGlobalShaderMap::GetShader<FGenerateLightSamplesCS>
                (this->View->ShaderMap,&local_2d8,&local_5c8);
      pFVar5 = this->DownsampledTileIndirectArgs;
      local_128._0_8_ = 0;
      local_100 = (longlong *)0x0;
      MegaLights::GetTileTypeString(EVar38);
      pFVar32 = FRDGEventName::FRDGEventName
                          (&local_290,
                           L"GenerateSamples DownsampleFactor:%dx%d SamplesPerPixel:%dx%d TileType:%s"
                          );
      FComputeShaderUtils::AddPass<FGenerateLightSamplesCS>
                (this->GraphBuilder,pFVar32,Compute,&local_2d8,pFVar33,pFVar5,iVar20 * 0xc,
                 (TFunction<void___cdecl(void)> *)local_128);
      if (local_290.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_290.FormattedEventName.Data.AllocatorInstance.Data);
      }
      pFVar44 = local_608;
      if (local_128._0_8_ != 0) {
        plVar41 = (longlong *)(local_128 + 0x10);
        if (local_100 != (longlong *)0x0) {
          plVar41 = local_100;
        }
        (**(code **)(*plVar41 + 0x10))();
        pFVar44 = local_608;
      }
    }
    uVar40 = (ulonglong)local_650 & 0xffffffff;
    pFVar45 = (FScriptContainerElement *)((longlong)local_5b0 + 4);
  }
  if (this->bVolumeEnabled != false) {
    pFVar3 = this->GraphBuilder;
    local_368._0_8_ = FClearValueBinding::Black._0_8_;
    local_368.Value._4_8_ = FClearValueBinding::Black.Value._4_8_;
    local_4b8._0_8_ = *(undefined8 *)&(this->VolumeSampleBufferSize).field0_0x0;
    local_368.Value.Color[3] = FClearValueBinding::Black.Value.Color[3];
    local_4b8._s_0.Z = (this->VolumeSampleBufferSize).field0_0x0._s_0.Z;
    pFVar35 = FRDGTextureDesc::Create3D
                        ((FRDGTextureDesc *)local_f8,(TIntVector3<int> *)&local_4b8._s_0,PF_R32_UINT
                         ,&local_368,UAV|Tiling3D|ShaderResource,'\x01',0);
    pFVar36 = FRDGBuilder::CreateTexture(pFVar3,pFVar35,L"MegaLights.Volume.LightSamples",None);
    this->VolumeLightSamples = pFVar36;
    if ((void *)local_f8._64_8_ != (void *)0x0) {
      FMemory::Free((void *)local_f8._64_8_);
    }
    pFVar3 = this->GraphBuilder;
    local_348._0_8_ = FClearValueBinding::Black._0_8_;
    local_348.Value._4_8_ = FClearValueBinding::Black.Value._4_8_;
    local_4a8._0_8_ = *(undefined8 *)&(this->VolumeSampleBufferSize).field0_0x0;
    local_348.Value.Color[3] = FClearValueBinding::Black.Value.Color[3];
    local_4a8._s_0.Z = (this->VolumeSampleBufferSize).field0_0x0._s_0.Z;
    pFVar35 = FRDGTextureDesc::Create3D
                        ((FRDGTextureDesc *)local_a8,(TIntVector3<int> *)&local_4a8._s_0,PF_R8_UINT,
                         &local_348,UAV|Tiling3D|ShaderResource,'\x01',0);
    pFVar36 = FRDGBuilder::CreateTexture(pFVar3,pFVar35,L"MegaLights.Volume.LightSampleRays",None);
    this->VolumeLightSampleRays = pFVar36;
    if ((void *)local_a8._64_8_ != (void *)0x0) {
      FMemory::Free((void *)local_a8._64_8_);
    }
    pFVar26 = FRDGBuilder::AllocParameters<FVolumeGenerateLightSamplesCS::FParameters>
                        (this->GraphBuilder);
    FMegaLightsParameters::operator=(&pFVar26->MegaLightsParameters,&this->MegaLightsParameters);
    fVar47 = (this->MegaLightsVolumeParameters).VolumeMaxShadingWeight;
    iVar20 = (this->MegaLightsVolumeParameters).VolumeDownsampleFactorMultShift;
    iVar21 = (this->MegaLightsVolumeParameters).VolumeDebugMode;
    (pFVar26->MegaLightsVolumeParameters).VolumeMinSampleWeight =
         (this->MegaLightsVolumeParameters).VolumeMinSampleWeight;
    (pFVar26->MegaLightsVolumeParameters).VolumeMaxShadingWeight = fVar47;
    (pFVar26->MegaLightsVolumeParameters).VolumeDownsampleFactorMultShift = iVar20;
    (pFVar26->MegaLightsVolumeParameters).VolumeDebugMode = iVar21;
    uVar39 = *(undefined4 *)&(this->MegaLightsVolumeParameters).field_0x14;
    lVar6 = (this->MegaLightsVolumeParameters)._padding_;
    (pFVar26->MegaLightsVolumeParameters).VolumeDebugSliceIndex =
         (this->MegaLightsVolumeParameters).VolumeDebugSliceIndex;
    *(undefined4 *)&(pFVar26->MegaLightsVolumeParameters).field_0x14 = uVar39;
    (pFVar26->MegaLightsVolumeParameters)._padding_ = lVar6;
    uVar10 = *(undefined8 *)
              ((longlong)&(this->MegaLightsVolumeParameters).NumSamplesPerVoxel.field0_0x0 + 8);
    *(undefined8 *)&(pFVar26->MegaLightsVolumeParameters).NumSamplesPerVoxel.field0_0x0 =
         *(undefined8 *)&(this->MegaLightsVolumeParameters).NumSamplesPerVoxel.field0_0x0;
    *(undefined8 *)
     ((longlong)&(pFVar26->MegaLightsVolumeParameters).NumSamplesPerVoxel.field0_0x0 + 8) = uVar10;
    uVar10 = *(undefined8 *)
              ((longlong)
               &(this->MegaLightsVolumeParameters).NumSamplesPerVoxelDivideShift.field0_0x0 + 8);
    *(undefined8 *)&(pFVar26->MegaLightsVolumeParameters).NumSamplesPerVoxelDivideShift.field0_0x0 =
         *(undefined8 *)&(this->MegaLightsVolumeParameters).NumSamplesPerVoxelDivideShift.field0_0x0
    ;
    *(undefined8 *)
     ((longlong)&(pFVar26->MegaLightsVolumeParameters).NumSamplesPerVoxelDivideShift.field0_0x0 + 8)
         = uVar10;
    uVar10 = *(undefined8 *)
              ((longlong)&(this->MegaLightsVolumeParameters).DownsampledVolumeViewSize.field0_0x0 +
              8);
    *(undefined8 *)&(pFVar26->MegaLightsVolumeParameters).DownsampledVolumeViewSize.field0_0x0 =
         *(undefined8 *)&(this->MegaLightsVolumeParameters).DownsampledVolumeViewSize.field0_0x0;
    *(undefined8 *)
     ((longlong)&(pFVar26->MegaLightsVolumeParameters).DownsampledVolumeViewSize.field0_0x0 + 8) =
         uVar10;
    uVar10 = *(undefined8 *)
              ((longlong)&(this->MegaLightsVolumeParameters).VolumeViewSize.field0_0x0 + 8);
    *(undefined8 *)&(pFVar26->MegaLightsVolumeParameters).VolumeViewSize.field0_0x0 =
         *(undefined8 *)&(this->MegaLightsVolumeParameters).VolumeViewSize.field0_0x0;
    *(undefined8 *)((longlong)&(pFVar26->MegaLightsVolumeParameters).VolumeViewSize.field0_0x0 + 8)
         = uVar10;
    uVar10 = *(undefined8 *)
              ((longlong)&(this->MegaLightsVolumeParameters).VolumeSampleViewSize.field0_0x0 + 8);
    *(undefined8 *)&(pFVar26->MegaLightsVolumeParameters).VolumeSampleViewSize.field0_0x0 =
         *(undefined8 *)&(this->MegaLightsVolumeParameters).VolumeSampleViewSize.field0_0x0;
    *(undefined8 *)
     ((longlong)&(pFVar26->MegaLightsVolumeParameters).VolumeSampleViewSize.field0_0x0 + 8) = uVar10
    ;
    uVar10 = *(undefined8 *)
              ((longlong)&(this->MegaLightsVolumeParameters).VolumeInvBufferSize.field0_0x0 + 8);
    *(undefined8 *)&(pFVar26->MegaLightsVolumeParameters).VolumeInvBufferSize.field0_0x0 =
         *(undefined8 *)&(this->MegaLightsVolumeParameters).VolumeInvBufferSize.field0_0x0;
    *(undefined8 *)
     ((longlong)&(pFVar26->MegaLightsVolumeParameters).VolumeInvBufferSize.field0_0x0 + 8) = uVar10;
    uVar10 = *(undefined8 *)
              ((longlong)&(this->MegaLightsVolumeParameters).MegaLightsVolumeZParams.field0_0x0 + 8)
    ;
    *(undefined8 *)&(pFVar26->MegaLightsVolumeParameters).MegaLightsVolumeZParams.field0_0x0 =
         *(undefined8 *)&(this->MegaLightsVolumeParameters).MegaLightsVolumeZParams.field0_0x0;
    *(undefined8 *)
     ((longlong)&(pFVar26->MegaLightsVolumeParameters).MegaLightsVolumeZParams.field0_0x0 + 8) =
         uVar10;
    uVar10 = *(undefined8 *)
              ((longlong)&(this->MegaLightsVolumeParameters).VolumeFrameJitterOffset.field0_0x0 + 8)
    ;
    *(undefined8 *)&(pFVar26->MegaLightsVolumeParameters).VolumeFrameJitterOffset.field0_0x0 =
         *(undefined8 *)&(this->MegaLightsVolumeParameters).VolumeFrameJitterOffset.field0_0x0;
    *(undefined8 *)
     ((longlong)&(pFVar26->MegaLightsVolumeParameters).VolumeFrameJitterOffset.field0_0x0 + 8) =
         uVar10;
    fVar47 = (this->MegaLightsVolumeParameters).LightSoftFading;
    uVar43 = (this->MegaLightsVolumeParameters).TranslucencyVolumeCascadeIndex;
    fVar46 = (this->MegaLightsVolumeParameters).TranslucencyVolumeInvResolution;
    (pFVar26->MegaLightsVolumeParameters).VolumeInverseSquaredLightDistanceBiasScale =
         (this->MegaLightsVolumeParameters).VolumeInverseSquaredLightDistanceBiasScale;
    (pFVar26->MegaLightsVolumeParameters).LightSoftFading = fVar47;
    (pFVar26->MegaLightsVolumeParameters).TranslucencyVolumeCascadeIndex = uVar43;
    (pFVar26->MegaLightsVolumeParameters).TranslucencyVolumeInvResolution = fVar46;
    uVar43 = (this->MegaLightsVolumeParameters).IsUnifiedVolume;
    lVar6 = (this->MegaLightsVolumeParameters)._padding_;
    (pFVar26->MegaLightsVolumeParameters).UseHZBOcclusionTest =
         (this->MegaLightsVolumeParameters).UseHZBOcclusionTest;
    (pFVar26->MegaLightsVolumeParameters).IsUnifiedVolume = uVar43;
    (pFVar26->MegaLightsVolumeParameters)._padding_ = lVar6;
    uVar10 = *(undefined8 *)
              ((longlong)&(this->MegaLightsVolumeParameters).ResampleVolumeViewSize.field0_0x0 + 8);
    *(undefined8 *)&(pFVar26->MegaLightsVolumeParameters).ResampleVolumeViewSize.field0_0x0 =
         *(undefined8 *)&(this->MegaLightsVolumeParameters).ResampleVolumeViewSize.field0_0x0;
    *(undefined8 *)
     ((longlong)&(pFVar26->MegaLightsVolumeParameters).ResampleVolumeViewSize.field0_0x0 + 8) =
         uVar10;
    uVar10 = *(undefined8 *)
              ((longlong)&(this->MegaLightsVolumeParameters).ResampleVolumeInvBufferSize.field0_0x0
              + 8);
    *(undefined8 *)&(pFVar26->MegaLightsVolumeParameters).ResampleVolumeInvBufferSize.field0_0x0 =
         *(undefined8 *)&(this->MegaLightsVolumeParameters).ResampleVolumeInvBufferSize.field0_0x0;
    *(undefined8 *)
     ((longlong)&(pFVar26->MegaLightsVolumeParameters).ResampleVolumeInvBufferSize.field0_0x0 + 8) =
         uVar10;
    uVar10 = *(undefined8 *)
              ((longlong)&(this->MegaLightsVolumeParameters).ResampleVolumeZParams.field0_0x0 + 8);
    *(undefined8 *)&(pFVar26->MegaLightsVolumeParameters).ResampleVolumeZParams.field0_0x0 =
         *(undefined8 *)&(this->MegaLightsVolumeParameters).ResampleVolumeZParams.field0_0x0;
    *(undefined8 *)
     ((longlong)&(pFVar26->MegaLightsVolumeParameters).ResampleVolumeZParams.field0_0x0 + 8) =
         uVar10;
    pFVar5 = this->VolumeVisibleLightHashHistory;
    if (pFVar5 != (FRDGBuffer *)0x0) {
      local_450._padding_._4_4_ = 0;
      local_450._padding_._0_4_ = 0xffffffff;
      local_450._padding_ = 0;
      local_450._padding_._0_1_ = 0;
      if (((pFVar5->Desc).Usage & DrawIndirect) != None) {
        local_450._padding_._0_1_ = 0x1c;
      }
      local_450.Buffer = pFVar5;
      pFVar28 = FRDGBuilder::CreateSRV(this->GraphBuilder,&local_450);
    }
    pFVar26->VolumeVisibleLightHashHistory = pFVar28;
    pFVar23 = FRDGBuilder::CreateUAV(this->GraphBuilder,this->VolumeLightSamples,None,PF_Unknown);
    pFVar26->RWVolumeLightSamples = pFVar23;
    pFVar23 = FRDGBuilder::CreateUAV(this->GraphBuilder,this->VolumeLightSampleRays,None,PF_Unknown)
    ;
    pFVar26->RWVolumeLightSampleRays = pFVar23;
    *(undefined8 *)&(pFVar26->HistoryVolumeVisibleLightHashViewSizeInTiles).field0_0x0 =
         *(undefined8 *)&(this->HistoryVolumeVisibleLightHashViewSizeInTiles).field0_0x0;
    (pFVar26->HistoryVolumeVisibleLightHashViewSizeInTiles).field0_0x0._s_0.Z =
         (this->HistoryVolumeVisibleLightHashViewSizeInTiles).field0_0x0._s_0.Z;
    *(undefined8 *)&(pFVar26->VolumeVisibleLightHashTileSize).field0_0x0 =
         *(undefined8 *)&(this->VolumeVisibleLightHashTileSize).field0_0x0;
    (pFVar26->VolumeVisibleLightHashTileSize).field0_0x0._s_0.Z =
         (this->VolumeVisibleLightHashTileSize).field0_0x0._s_0.Z;
    pTVar13 = CVarMegaLightsGuideByHistoryLightHiddenWeight.Ref;
    bVar18 = IsInParallelRenderingThread();
    if ((!bVar18) &&
       (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar18)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar26->LightHiddenPDFWeight = pTVar13->ShadowedValue[1];
    pTVar13 = CVarMegaLightsGuideByHistoryLightHiddenWeightForHistoryMiss.Ref;
    bVar18 = IsInParallelRenderingThread();
    if ((!bVar18) &&
       (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar18)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar26->LightHiddenPDFWeightForHistoryMiss = pTVar13->ShadowedValue[1];
    fVar47 = MegaLights::GetDirectionalLightSampleRatio();
    pFVar26->DirectionalLightSampleRatio = fVar47;
    pTVar13 = CVarMegaLightsMinSampleClampingWeight.Ref;
    bVar18 = IsInParallelRenderingThread();
    if ((!bVar18) &&
       (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar18)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar26->MinSampleClampingWeight = pTVar13->ShadowedValue[1];
    local_5f8.DimensionValue = false;
    local_5f8.Tail.DimensionValue =
         (this->NumSamplesPerVoxel3d).field0_0x0._s_0.X *
         (this->NumSamplesPerVoxel3d).field0_0x0._s_0.Y *
         (this->NumSamplesPerVoxel3d).field0_0x0._s_0.Z;
    local_5f8.Tail.Tail.DimensionValue = 0.0 < (this->MegaLightsVolumeParameters).LightSoftFading;
    if ((this->bUseLightFunctionAtlas == false) ||
       (bVar18 = MegaLightsVolume::UsesLightFunction(), !bVar18)) {
      local_5f8.Tail.Tail.Tail.DimensionValue = false;
    }
    else {
      local_5f8.Tail.Tail.Tail.DimensionValue = true;
    }
    local_5f8.Tail.Tail.Tail.Tail.DimensionValue =
         this->VolumeVisibleLightHashHistory != (FRDGBuffer *)0x0;
    local_5f8.Tail.Tail.Tail.Tail.Tail.DimensionValue = this->bVolumeDebug;
    local_5f8.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = this->bReferenceMode;
    FGlobalShaderMap::GetShader<FVolumeGenerateLightSamplesCS>
              (this->View->ShaderMap,&local_328,&local_5f8);
    iVar20 = (this->VolumeDownsampledViewSize).field0_0x0._s_0.X + 3;
    iVar21 = (this->VolumeDownsampledViewSize).field0_0x0._s_0.Y + 3;
    iVar22 = (this->VolumeDownsampledViewSize).field0_0x0._s_0.Z + 3;
    pFVar32 = FRDGEventName::FRDGEventName
                        (&local_278,L"VolumeGenerateSamples SamplesPerVoxel:%dx%dx%d");
    local_588._s_0.X = (int)((iVar20 >> 0x1f & 3U) + iVar20) >> 2;
    local_588._s_0.Y = (int)((iVar21 >> 0x1f & 3U) + iVar21) >> 2;
    local_588._s_0.Z = (int)((iVar22 >> 0x1f & 3U) + iVar22) >> 2;
    FComputeShaderUtils::AddPass<FVolumeGenerateLightSamplesCS>
              (this->GraphBuilder,pFVar32,&local_328,pFVar26,(TIntVector3<int> *)&local_588._s_0);
    if (local_278.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_278.FormattedEventName.Data.AllocatorInstance.Data);
    }
  }
  bVar18 = MegaLights::UseTranslucencyVolume();
  if (((bVar18) && (this->bShouldRenderTranslucencyVolume != false)) &&
     (this->bUnifiedVolume == false)) {
    TArray<FRDGTexture_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::AddDefaulted
              (&this->TranslucencyVolumeLightSamples,2);
    TArray<FRDGTexture_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::AddDefaulted
              (&this->TranslucencyVolumeLightSampleRays,2);
    local_650 = this->TranslucencyVolumeVisibleLightHashHistory;
    local_65c = 0;
    do {
      uVar43 = local_65c;
      uVar39 = FClearValueBinding::Black.Value.Color[3];
      uVar12 = FClearValueBinding::Black.Value._4_8_;
      uVar10 = FClearValueBinding::Black._0_8_;
      local_5d8 = *(FRDGTextureUAV **)&(this->TranslucencyVolumeSampleBufferSize).field0_0x0;
      iVar20 = (this->TranslucencyVolumeSampleBufferSize).field0_0x0._s_0.Z;
      pFVar3 = this->GraphBuilder;
      if ((0xffff < iVar20) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Size.Z <= TNumericLimits<decltype(FRDGTextureDesc::Depth)>::Max()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphDefinitions.h"
                              ,0x29e,L"Depth parameter (Size.Z) exceeds valid range"), bVar18)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_5a0 = (undefined4)local_5d8;
      uStack_59c = local_5d8._4_4_;
      local_22c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
      local_230 = (float)uVar39;
      pFVar28 = (FRDGBufferSRV *)0x0;
      local_224 = local_5d8;
      local_1fc = 1;
      local_248._0_8_ = 0x20808;
      local_248._8_8_ = uVar10;
      local_248._16_8_ = uVar12;
      local_228 = 0;
      local_21c = (undefined2)iVar20;
      local_21a = 0x1010001;
      local_216 = 0xff001c02;
      local_208 = (void *)0x0;
      local_200 = 0;
      pFVar36 = FRDGBuilder::CreateTexture
                          (pFVar3,(FRDGTextureDesc *)local_248,
                           L"MegaLights.TranslucencyVolume.LightSamples",None);
      if (((this->TranslucencyVolumeLightSamples).ArrayNum <= (int)uVar43) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FVar7 = (this->TranslucencyVolumeLightSamples).AllocatorInstance.SecondaryData;
      FVar42 = (ForElementType<FRDGTexture_*>)&this->TranslucencyVolumeLightSamples;
      if (FVar7 != (ForElementType<FRDGTexture_*>)0x0) {
        FVar42 = FVar7;
      }
      *(FRDGTexture **)((longlong)FVar42 + (longlong)(int)uVar43 * 8) = pFVar36;
      if (local_208 != (void *)0x0) {
        FMemory::Free(local_208);
      }
      uVar39 = FClearValueBinding::Black.Value.Color[3];
      uVar12 = FClearValueBinding::Black.Value._4_8_;
      uVar10 = FClearValueBinding::Black._0_8_;
      local_5e8 = *(TIntPoint<int>_u_0_s_0 *)&(this->TranslucencyVolumeSampleBufferSize).field0_0x0;
      iVar20 = (this->TranslucencyVolumeSampleBufferSize).field0_0x0._s_0.Z;
      pFVar3 = this->GraphBuilder;
      if ((0xffff < iVar20) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Size.Z <= TNumericLimits<decltype(FRDGTextureDesc::Depth)>::Max()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphDefinitions.h"
                              ,0x29e,L"Depth parameter (Size.Z) exceeds valid range"), bVar18)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_598 = local_5e8.X;
      iStack_594 = local_5e8.Y;
      local_1f8.ClearValue.Value.Color[3] = (float)uVar39;
      local_1f8.Flags = UAV|Tiling3D|ShaderResource;
      local_1f8.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
      local_1f8.ExtData = 0;
      local_1f8.Extent.field0_0x0._s_0 = (TIntPoint<int>_u_0)local_5e8;
      local_648 = L"MegaLights.TranslucencyVolume.LightSampleRays";
      local_1f8.ClearValue._0_8_ = uVar10;
      local_1f8.ClearValue.Value._4_8_ = uVar12;
      local_1f8.Depth = (ushort)iVar20;
      local_1f8.ArraySize = 1;
      local_1f8.NumMips = '\x01';
      local_1f8.NumSamples = '\x01';
      local_1f8.Dimension = Texture3D;
      local_1f8.Format = PF_R8_UINT;
      local_1f8.UAVFormat = PF_Unknown;
      local_1f8.FastVRAMPercentage = 0xff;
      local_1f8.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0
      ;
      local_1f8.AliasableFormats.ArrayNum = 0;
      local_1f8.AliasableFormats.ArrayMax = 1;
      FRHITextureDesc::FRHITextureDesc(&local_1a8,&local_1f8);
      if (local_1a8.Extent.field0_0x0._s_0.X < 1) {
        local_3a8 = &local_648;
        local_3a0 = &local_1a8;
        `FRDGBuilder::CreateTexture'::__l2::<lambda_1>::operator()(&local_3a8);
      }
      if (local_1a8.Extent.field0_0x0._s_0.Y < 1) {
        local_3b8 = &local_648;
        local_3b0 = &local_1a8;
        `FRDGBuilder::CreateTexture'::__l2::<lambda_2>::operator()(&local_3b8);
      }
      if ((uint)GRHIGlobals.MaxTextureDimensions.Value < (uint)local_1a8.Extent.field0_0x0._s_0.X) {
        local_3c8 = &local_648;
        local_3c0 = &local_1a8;
        `FRDGBuilder::CreateTexture'::__l2::<lambda_3>::operator()(&local_3c8);
      }
      if ((uint)GRHIGlobals.MaxTextureDimensions.Value < (uint)local_1a8.Extent.field0_0x0._s_0.Y) {
        local_3f0 = &local_648;
        local_3e8 = &local_1a8;
        `FRDGBuilder::CreateTexture'::__l2::<lambda_4>::operator()(&local_3f0);
      }
      uVar39 = GRHIGlobals.MaxTextureDimensions.Value;
      if (local_1a8.Extent.field0_0x0._s_0.X < GRHIGlobals.MaxTextureDimensions.Value) {
        uVar39 = local_1a8.Extent.field0_0x0._s_0.X;
      }
      local_1a8.Extent.field0_0x0._s_0.X = 1;
      if (1 < (int)uVar39) {
        local_1a8.Extent.field0_0x0._s_0.X = uVar39;
      }
      TVar9.Value = GRHIGlobals.MaxTextureDimensions.Value;
      if (local_1a8.Extent.field0_0x0._s_0.Y < GRHIGlobals.MaxTextureDimensions.Value) {
        TVar9.Value = local_1a8.Extent.field0_0x0._s_0.Y;
      }
      local_1a8.Extent.field0_0x0._s_0.Y = 1;
      if (1 < TVar9.Value) {
        local_1a8.Extent.field0_0x0._s_0.Y = TVar9.Value;
      }
      FRDGUserValidation::ValidateCreateTexture
                (&pFVar3->UserValidation,(FRDGTextureDesc *)&local_1a8,local_648,None);
      pFVar36 = FMemStackBase::Alloc((FMemStackBase *)&pFVar3->_padding_,0x158,8);
      pFVar36 = FRDGTexture::FRDGTexture(pFVar36,local_648,(FRDGTextureDesc *)&local_1a8,None);
      piVar1 = &(pFVar3->Textures).Array.ArrayMax;
      iVar20 = (pFVar3->Textures).Array.ArrayNum;
      if (iVar20 == *piVar1) {
        iVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGTexture_*>_>
                           (0x808,(ForElementType<FRDGTexture_*> *)&pFVar3->Textures,piVar1);
      }
      (pFVar3->Textures).Array.ArrayNum = iVar20 + 1;
      (pFVar3->Textures).Array.AllocatorInstance.Data[iVar20] = pFVar36;
      (pFVar36->Handle).Index = (pFVar3->Textures).Array.ArrayNum - 1;
      FRDGUserValidation::ValidateCreateTexture(&pFVar3->UserValidation,pFVar36);
      FRDGTrace::AddResource(&pFVar3->Trace,(FRDGViewableResource *)pFVar36);
      if (local_1a8.AliasableFormats.AllocatorInstance.SecondaryData !=
          (ForElementType<EPixelFormat>)0x0) {
        FMemory::Free((void *)local_1a8.AliasableFormats.AllocatorInstance.SecondaryData);
      }
      if (((this->TranslucencyVolumeLightSampleRays).ArrayNum <= (int)uVar43) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FVar7 = (this->TranslucencyVolumeLightSampleRays).AllocatorInstance.SecondaryData;
      FVar42 = (ForElementType<FRDGTexture_*>)&this->TranslucencyVolumeLightSampleRays;
      if (FVar7 != (ForElementType<FRDGTexture_*>)0x0) {
        FVar42 = FVar7;
      }
      *(FRDGTexture **)((longlong)FVar42 + (longlong)(int)uVar43 * 8) = pFVar36;
      if (local_1f8.AliasableFormats.AllocatorInstance.SecondaryData !=
          (ForElementType<EPixelFormat>)0x0) {
        FMemory::Free((void *)local_1f8.AliasableFormats.AllocatorInstance.SecondaryData);
      }
      pFVar26 = FRDGBuilder::AllocParameters<FVolumeGenerateLightSamplesCS::FParameters>
                          (this->GraphBuilder);
      local_600 = pFVar26;
      FMegaLightsParameters::operator=(&pFVar26->MegaLightsParameters,&this->MegaLightsParameters);
      fVar47 = (this->MegaLightsTranslucencyVolumeParameters).VolumeMaxShadingWeight;
      iVar20 = (this->MegaLightsTranslucencyVolumeParameters).VolumeDownsampleFactorMultShift;
      iVar21 = (this->MegaLightsTranslucencyVolumeParameters).VolumeDebugMode;
      (pFVar26->MegaLightsVolumeParameters).VolumeMinSampleWeight =
           (this->MegaLightsTranslucencyVolumeParameters).VolumeMinSampleWeight;
      (pFVar26->MegaLightsVolumeParameters).VolumeMaxShadingWeight = fVar47;
      (pFVar26->MegaLightsVolumeParameters).VolumeDownsampleFactorMultShift = iVar20;
      (pFVar26->MegaLightsVolumeParameters).VolumeDebugMode = iVar21;
      uVar39 = *(undefined4 *)&(this->MegaLightsTranslucencyVolumeParameters).field_0x14;
      lVar6 = (this->MegaLightsTranslucencyVolumeParameters)._padding_;
      (pFVar26->MegaLightsVolumeParameters).VolumeDebugSliceIndex =
           (this->MegaLightsTranslucencyVolumeParameters).VolumeDebugSliceIndex;
      *(undefined4 *)&(pFVar26->MegaLightsVolumeParameters).field_0x14 = uVar39;
      (pFVar26->MegaLightsVolumeParameters)._padding_ = lVar6;
      uVar10 = *(undefined8 *)
                ((longlong)
                 &(this->MegaLightsTranslucencyVolumeParameters).NumSamplesPerVoxel.field0_0x0 + 8);
      *(undefined8 *)&(pFVar26->MegaLightsVolumeParameters).NumSamplesPerVoxel.field0_0x0 =
           *(undefined8 *)
            &(this->MegaLightsTranslucencyVolumeParameters).NumSamplesPerVoxel.field0_0x0;
      *(undefined8 *)
       ((longlong)&(pFVar26->MegaLightsVolumeParameters).NumSamplesPerVoxel.field0_0x0 + 8) = uVar10
      ;
      uVar10 = *(undefined8 *)
                ((longlong)
                 &(this->MegaLightsTranslucencyVolumeParameters).NumSamplesPerVoxelDivideShift.
                  field0_0x0 + 8);
      *(undefined8 *)&(pFVar26->MegaLightsVolumeParameters).NumSamplesPerVoxelDivideShift.field0_0x0
           = *(undefined8 *)
              &(this->MegaLightsTranslucencyVolumeParameters).NumSamplesPerVoxelDivideShift.
               field0_0x0;
      *(undefined8 *)
       ((longlong)&(pFVar26->MegaLightsVolumeParameters).NumSamplesPerVoxelDivideShift.field0_0x0 +
       8) = uVar10;
      uVar10 = *(undefined8 *)
                ((longlong)
                 &(this->MegaLightsTranslucencyVolumeParameters).DownsampledVolumeViewSize.
                  field0_0x0 + 8);
      *(undefined8 *)&(pFVar26->MegaLightsVolumeParameters).DownsampledVolumeViewSize.field0_0x0 =
           *(undefined8 *)
            &(this->MegaLightsTranslucencyVolumeParameters).DownsampledVolumeViewSize.field0_0x0;
      *(undefined8 *)
       ((longlong)&(pFVar26->MegaLightsVolumeParameters).DownsampledVolumeViewSize.field0_0x0 + 8) =
           uVar10;
      uVar10 = *(undefined8 *)
                ((longlong)&(this->MegaLightsTranslucencyVolumeParameters).VolumeViewSize.field0_0x0
                + 8);
      *(undefined8 *)&(pFVar26->MegaLightsVolumeParameters).VolumeViewSize.field0_0x0 =
           *(undefined8 *)&(this->MegaLightsTranslucencyVolumeParameters).VolumeViewSize.field0_0x0;
      *(undefined8 *)
       ((longlong)&(pFVar26->MegaLightsVolumeParameters).VolumeViewSize.field0_0x0 + 8) = uVar10;
      uVar10 = *(undefined8 *)
                ((longlong)
                 &(this->MegaLightsTranslucencyVolumeParameters).VolumeSampleViewSize.field0_0x0 + 8
                );
      *(undefined8 *)&(pFVar26->MegaLightsVolumeParameters).VolumeSampleViewSize.field0_0x0 =
           *(undefined8 *)
            &(this->MegaLightsTranslucencyVolumeParameters).VolumeSampleViewSize.field0_0x0;
      *(undefined8 *)
       ((longlong)&(pFVar26->MegaLightsVolumeParameters).VolumeSampleViewSize.field0_0x0 + 8) =
           uVar10;
      uVar10 = *(undefined8 *)
                ((longlong)
                 &(this->MegaLightsTranslucencyVolumeParameters).VolumeInvBufferSize.field0_0x0 + 8)
      ;
      *(undefined8 *)&(pFVar26->MegaLightsVolumeParameters).VolumeInvBufferSize.field0_0x0 =
           *(undefined8 *)
            &(this->MegaLightsTranslucencyVolumeParameters).VolumeInvBufferSize.field0_0x0;
      *(undefined8 *)
       ((longlong)&(pFVar26->MegaLightsVolumeParameters).VolumeInvBufferSize.field0_0x0 + 8) =
           uVar10;
      uVar10 = *(undefined8 *)
                ((longlong)
                 &(this->MegaLightsTranslucencyVolumeParameters).MegaLightsVolumeZParams.field0_0x0
                + 8);
      *(undefined8 *)&(pFVar26->MegaLightsVolumeParameters).MegaLightsVolumeZParams.field0_0x0 =
           *(undefined8 *)
            &(this->MegaLightsTranslucencyVolumeParameters).MegaLightsVolumeZParams.field0_0x0;
      *(undefined8 *)
       ((longlong)&(pFVar26->MegaLightsVolumeParameters).MegaLightsVolumeZParams.field0_0x0 + 8) =
           uVar10;
      uVar10 = *(undefined8 *)
                ((longlong)
                 &(this->MegaLightsTranslucencyVolumeParameters).VolumeFrameJitterOffset.field0_0x0
                + 8);
      *(undefined8 *)&(pFVar26->MegaLightsVolumeParameters).VolumeFrameJitterOffset.field0_0x0 =
           *(undefined8 *)
            &(this->MegaLightsTranslucencyVolumeParameters).VolumeFrameJitterOffset.field0_0x0;
      *(undefined8 *)
       ((longlong)&(pFVar26->MegaLightsVolumeParameters).VolumeFrameJitterOffset.field0_0x0 + 8) =
           uVar10;
      fVar47 = (this->MegaLightsTranslucencyVolumeParameters).LightSoftFading;
      uVar11 = (this->MegaLightsTranslucencyVolumeParameters).TranslucencyVolumeCascadeIndex;
      fVar46 = (this->MegaLightsTranslucencyVolumeParameters).TranslucencyVolumeInvResolution;
      (pFVar26->MegaLightsVolumeParameters).VolumeInverseSquaredLightDistanceBiasScale =
           (this->MegaLightsTranslucencyVolumeParameters).VolumeInverseSquaredLightDistanceBiasScale
      ;
      (pFVar26->MegaLightsVolumeParameters).LightSoftFading = fVar47;
      (pFVar26->MegaLightsVolumeParameters).TranslucencyVolumeCascadeIndex = uVar11;
      (pFVar26->MegaLightsVolumeParameters).TranslucencyVolumeInvResolution = fVar46;
      uVar11 = (this->MegaLightsTranslucencyVolumeParameters).IsUnifiedVolume;
      lVar6 = (this->MegaLightsTranslucencyVolumeParameters)._padding_;
      (pFVar26->MegaLightsVolumeParameters).UseHZBOcclusionTest =
           (this->MegaLightsTranslucencyVolumeParameters).UseHZBOcclusionTest;
      (pFVar26->MegaLightsVolumeParameters).IsUnifiedVolume = uVar11;
      (pFVar26->MegaLightsVolumeParameters)._padding_ = lVar6;
      uVar10 = *(undefined8 *)
                ((longlong)
                 &(this->MegaLightsTranslucencyVolumeParameters).ResampleVolumeViewSize.field0_0x0 +
                8);
      *(undefined8 *)&(pFVar26->MegaLightsVolumeParameters).ResampleVolumeViewSize.field0_0x0 =
           *(undefined8 *)
            &(this->MegaLightsTranslucencyVolumeParameters).ResampleVolumeViewSize.field0_0x0;
      *(undefined8 *)
       ((longlong)&(pFVar26->MegaLightsVolumeParameters).ResampleVolumeViewSize.field0_0x0 + 8) =
           uVar10;
      uVar10 = *(undefined8 *)
                ((longlong)
                 &(this->MegaLightsTranslucencyVolumeParameters).ResampleVolumeInvBufferSize.
                  field0_0x0 + 8);
      *(undefined8 *)&(pFVar26->MegaLightsVolumeParameters).ResampleVolumeInvBufferSize.field0_0x0 =
           *(undefined8 *)
            &(this->MegaLightsTranslucencyVolumeParameters).ResampleVolumeInvBufferSize.field0_0x0;
      *(undefined8 *)
       ((longlong)&(pFVar26->MegaLightsVolumeParameters).ResampleVolumeInvBufferSize.field0_0x0 + 8)
           = uVar10;
      uVar10 = *(undefined8 *)
                ((longlong)
                 &(this->MegaLightsTranslucencyVolumeParameters).ResampleVolumeZParams.field0_0x0 +
                8);
      *(undefined8 *)&(pFVar26->MegaLightsVolumeParameters).ResampleVolumeZParams.field0_0x0 =
           *(undefined8 *)
            &(this->MegaLightsTranslucencyVolumeParameters).ResampleVolumeZParams.field0_0x0;
      *(undefined8 *)
       ((longlong)&(pFVar26->MegaLightsVolumeParameters).ResampleVolumeZParams.field0_0x0 + 8) =
           uVar10;
      (pFVar26->MegaLightsVolumeParameters).TranslucencyVolumeCascadeIndex = uVar43;
      pFVar5 = *local_650;
      if (pFVar5 != (FRDGBuffer *)0x0) {
        pFVar3 = this->GraphBuilder;
        local_4e8._padding_._4_4_ = 0;
        local_4e8._padding_ = 0;
        local_4e8._padding_._0_4_ = 0xffffffff;
        uVar17 = 0;
        if (((pFVar5->Desc).Usage & DrawIndirect) != None) {
          uVar17 = 0x1c;
        }
        local_4e8._padding_._0_4_ =
             CONCAT31((int3)((uint)(undefined4)local_4e8._padding_ >> 8),uVar17);
        local_4e8.Buffer = pFVar5;
        FRDGUserValidation::ValidateCreateSRV(&pFVar3->UserValidation,&local_4e8);
        pFVar5 = local_4e8.Buffer;
        pFVar28 = FMemStackBase::Alloc((FMemStackBase *)&pFVar3->_padding_,0x50,8);
        pFVar28->_padding_ = pFVar5->_padding_;
        *(byte *)&pFVar28->_padding_ = (byte)pFVar28->_padding_ & 0xfe;
        *(undefined8 *)((longlong)&pFVar28->_padding_ + 4) = 0xffffffffffffffff;
        pFVar28->_padding_ = 0;
        pFVar28->_padding_ = (longlong)&___7FRDGBufferSRV__6B_;
        *(undefined1 *)&pFVar28->_padding_ = 3;
        (pFVar28->Desc)._padding_ =
             CONCAT44(local_4e8._padding_._4_4_,(undefined4)local_4e8._padding_);
        (pFVar28->Desc)._padding_ =
             CONCAT44(local_4e8._padding_._4_4_,(undefined4)local_4e8._padding_);
        (pFVar28->Desc)._padding_ = local_4e8._padding_;
        (pFVar28->Desc).Buffer = local_4e8.Buffer;
        TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2>::Insert
                  (&pFVar3->Views,(FRDGView *)pFVar28);
        FRDGUserValidation::ValidateCreateSRV(&pFVar3->UserValidation,pFVar28);
      }
      pFVar26->VolumeVisibleLightHashHistory = pFVar28;
      pFVar3 = this->GraphBuilder;
      if (((this->TranslucencyVolumeLightSamples).ArrayNum <= (int)uVar43) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FVar7 = (this->TranslucencyVolumeLightSamples).AllocatorInstance.SecondaryData;
      local_628._padding_._1_1_ = 0;
      local_628._padding_._2_4_ = 0;
      FVar42 = (ForElementType<FRDGTexture_*>)&this->TranslucencyVolumeLightSamples;
      if (FVar7 != (ForElementType<FRDGTexture_*>)0x0) {
        FVar42 = FVar7;
      }
      local_628._padding_._6_1_ = 0;
      local_628._padding_._0_1_ = '\0';
      local_628.Texture = *(FRDGTexture **)((longlong)FVar42 + (longlong)(int)uVar43 * 8);
      local_628._padding_._0_1_ = ((local_628.Texture)->Desc).field_0x34;
      FRDGUserValidation::ValidateCreateUAV(&pFVar3->UserValidation,&local_628);
      pFVar36 = local_628.Texture;
      pFVar23 = FMemStackBase::Alloc((FMemStackBase *)&pFVar3->_padding_,0x50,8);
      pFVar23->_padding_ = pFVar36->_padding_;
      *(byte *)&pFVar23->_padding_ = (byte)pFVar23->_padding_ & 0xfe;
      pFVar23->_padding_ = 0;
      *(undefined1 *)&pFVar23->_padding_ = 0;
      *(undefined1 *)&pFVar23->_padding_ = 0;
      pFVar23->_padding_ = (longlong)&___7FRDGTextureUAV__6B_;
      *(undefined8 *)((longlong)&pFVar23->_padding_ + 4) = 0xffffffffffffffff;
      *(undefined1 *)&(pFVar23->Desc)._padding_ = (undefined1)local_628._padding_;
      *(undefined1 *)((longlong)&(pFVar23->Desc)._padding_ + 1) = local_628._padding_._1_1_;
      *(undefined2 *)((longlong)&(pFVar23->Desc)._padding_ + 2) = local_628._padding_._2_2_;
      *(undefined2 *)((longlong)&(pFVar23->Desc)._padding_ + 4) = local_628._padding_._4_2_;
      *(undefined1 *)&(pFVar23->Desc)._padding_ = 0;
      *(undefined1 *)((longlong)&(pFVar23->Desc)._padding_ + 6) = local_628._padding_._6_1_;
      *(char *)&(pFVar23->Desc)._padding_ = (char)local_628._padding_;
      if ((char)local_628._padding_ != '\0') {
        *(undefined1 *)((longlong)&(pFVar23->Desc)._padding_ + 7) = local_628._padding_._7_1_;
      }
      piVar1 = &(pFVar3->Views).Array.ArrayMax;
      (pFVar23->Desc).Texture = local_628.Texture;
      iVar20 = (pFVar3->Views).Array.ArrayNum;
      if (iVar20 == *piVar1) {
        iVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                           (0x808,(ForElementType<FRDGView_*> *)&pFVar3->Views,piVar1);
      }
      (pFVar3->Views).Array.ArrayNum = iVar20 + 1;
      (pFVar3->Views).Array.AllocatorInstance.Data[iVar20] = (FRDGView *)pFVar23;
      *(int *)((longlong)&pFVar23->_padding_ + 4) = (pFVar3->Views).Array.ArrayNum + -1;
      FRDGUserValidation::ValidateCreateUAV(&pFVar3->UserValidation,pFVar23);
      pFVar26->RWVolumeLightSamples = pFVar23;
      pFVar3 = this->GraphBuilder;
      if (((this->TranslucencyVolumeLightSampleRays).ArrayNum <= (int)uVar43) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FVar7 = (this->TranslucencyVolumeLightSampleRays).AllocatorInstance.SecondaryData;
      local_640._padding_._1_1_ = 0;
      FVar42 = (ForElementType<FRDGTexture_*>)&this->TranslucencyVolumeLightSampleRays;
      if (FVar7 != (ForElementType<FRDGTexture_*>)0x0) {
        FVar42 = FVar7;
      }
      local_640._padding_._2_4_ = 0;
      local_640._padding_._6_1_ = 0;
      local_640.Texture = *(FRDGTexture **)((longlong)FVar42 + (longlong)(int)uVar43 * 8);
      local_640._padding_._0_1_ = '\0';
      local_640._padding_._0_1_ = ((local_640.Texture)->Desc).field_0x34;
      FRDGUserValidation::ValidateCreateUAV(&pFVar3->UserValidation,&local_640);
      pFVar36 = local_640.Texture;
      pFVar23 = FMemStackBase::Alloc((FMemStackBase *)&pFVar3->_padding_,0x50,8);
      lVar6 = pFVar36->_padding_;
      *(byte *)&pFVar23->_padding_ = (byte)pFVar23->_padding_ & 0xfe;
      pFVar23->_padding_ = lVar6;
      pFVar23->_padding_ = 0;
      *(undefined1 *)&pFVar23->_padding_ = 0;
      *(undefined8 *)((longlong)&pFVar23->_padding_ + 4) = 0xffffffffffffffff;
      *(undefined1 *)&pFVar23->_padding_ = 0;
      pFVar23->_padding_ = (longlong)&___7FRDGTextureUAV__6B_;
      *(undefined1 *)&(pFVar23->Desc)._padding_ = (undefined1)local_640._padding_;
      *(undefined1 *)((longlong)&(pFVar23->Desc)._padding_ + 1) = local_640._padding_._1_1_;
      *(undefined2 *)((longlong)&(pFVar23->Desc)._padding_ + 2) = local_640._padding_._2_2_;
      *(undefined2 *)((longlong)&(pFVar23->Desc)._padding_ + 4) = local_640._padding_._4_2_;
      *(undefined1 *)&(pFVar23->Desc)._padding_ = 0;
      *(undefined1 *)((longlong)&(pFVar23->Desc)._padding_ + 6) = local_640._padding_._6_1_;
      *(char *)&(pFVar23->Desc)._padding_ = (char)local_640._padding_;
      if ((char)local_640._padding_ != '\0') {
        *(undefined1 *)((longlong)&(pFVar23->Desc)._padding_ + 7) = local_640._padding_._7_1_;
      }
      piVar1 = &(pFVar3->Views).Array.ArrayMax;
      (pFVar23->Desc).Texture = local_640.Texture;
      iVar20 = (pFVar3->Views).Array.ArrayNum;
      if (iVar20 == *piVar1) {
        iVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                           (0x808,(ForElementType<FRDGView_*> *)&pFVar3->Views,piVar1);
      }
      (pFVar3->Views).Array.ArrayNum = iVar20 + 1;
      (pFVar3->Views).Array.AllocatorInstance.Data[iVar20] = (FRDGView *)pFVar23;
      *(int *)((longlong)&pFVar23->_padding_ + 4) = (pFVar3->Views).Array.ArrayNum + -1;
      FRDGUserValidation::ValidateCreateUAV(&pFVar3->UserValidation,pFVar23);
      pFVar26->RWVolumeLightSampleRays = pFVar23;
      *(undefined8 *)&(pFVar26->HistoryVolumeVisibleLightHashViewSizeInTiles).field0_0x0 =
           *(undefined8 *)&(this->HistoryTranslucencyVolumeVisibleLightHashSizeInTiles).field0_0x0;
      (pFVar26->HistoryVolumeVisibleLightHashViewSizeInTiles).field0_0x0._s_0.Z =
           (this->HistoryTranslucencyVolumeVisibleLightHashSizeInTiles).field0_0x0._s_0.Z;
      *(undefined8 *)&(pFVar26->VolumeVisibleLightHashTileSize).field0_0x0 =
           *(undefined8 *)&(this->TranslucencyVolumeVisibleLightHashTileSize).field0_0x0;
      (pFVar26->VolumeVisibleLightHashTileSize).field0_0x0._s_0.Z =
           (this->TranslucencyVolumeVisibleLightHashTileSize).field0_0x0._s_0.Z;
      fVar47 = MegaLights::GetDirectionalLightSampleRatio();
      pFVar26->DirectionalLightSampleRatio = fVar47;
      pTVar13 = CVarMegaLightsMinSampleClampingWeight.Ref;
      bVar18 = IsInParallelRenderingThread();
      if ((!bVar18) &&
         (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6409875433831007955>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x6d3,"IsInParallelRenderingThread()"), bVar18)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar26->MinSampleClampingWeight = pTVar13->ShadowedValue[1];
      iVar20 = (this->NumSamplesPerTranslucencyVoxel3d).field0_0x0._s_0.Y *
               (this->NumSamplesPerTranslucencyVoxel3d).field0_0x0._s_0.Z *
               (this->NumSamplesPerTranslucencyVoxel3d).field0_0x0._s_0.X;
      if (this->bUseLightFunctionAtlas == false) {
LAB_144f100b2:
        iVar21 = 0;
      }
      else {
        bVar18 = MegaLightsTranslucencyVolume::UsesLightFunction();
        iVar21 = 8;
        if (!bVar18) goto LAB_144f100b2;
      }
      bVar18 = this->bTranslucencyVolumeDebug;
      bVar14 = this->bReferenceMode;
      pFVar5 = *local_650;
      pFVar4 = this->View->ShaderMap;
      if (iVar20 == 2) {
        iVar20 = 3;
      }
      else {
        if ((iVar20 != 4) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                                ,0x90,L"Unknown shader permutation dimension value %i."), bVar16)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar20 = 1;
      }
      iVar20 = iVar21 + (-(uint)(bVar18 != false) & 0x20) +
               (-(uint)(pFVar5 != (FRDGBuffer *)0x0) & 0x10) + (-(uint)(bVar14 != false) & 0x40) +
               iVar20;
      pFVar29 = (FShaderType *)FVolumeGenerateLightSamplesCS::GetStaticType();
      FGlobalShaderMap::GetShader(pFVar4,&local_3d8,pFVar29,iVar20);
      if (local_3d8.ShaderContent == (FShader *)0x0) {
        FVar30 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_4c8);
        ::FName::ToString((FName *)FVar30,&local_318);
        FVolumeGenerateLightSamplesCS::GetStaticType();
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Shader.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                            ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_318.Data.AllocatorInstance.Data);
        }
        if (bVar18) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      local_484._0_2_ = pFVar4->Platform;
      local_484._8_4_ = 1;
      local_484._4_4_ = iVar20;
      pFVar31 = FVolumeGenerateLightSamplesCS::GetStaticType();
      local_484.GlobalShaderName.ComparisonIndex.Value = *(uint *)&pFVar31->field_0x20;
      local_484.GlobalShaderName.Number = *(uint *)&pFVar31->field_0x24;
      EVar15 = FVolumeGenerateLightSamplesCS::ShouldPrecachePermutation(&local_484);
      if (EVar15 == NotUsed) {
        local_65d = 0;
        `FGlobalShaderMap::GetShader<FVolumeGenerateLightSamplesCS>'::__l2::<lambda_1>::operator()
                  (&local_65d);
      }
      iVar20 = (this->TranslucencyVolumeDownsampledBufferSize).field0_0x0._s_0.X + 3;
      local_308.ShaderContent = (FVolumeGenerateLightSamplesCS *)local_3d8.ShaderContent;
      local_308.ShaderMap = local_3d8.ShaderMap;
      iVar21 = (this->TranslucencyVolumeDownsampledBufferSize).field0_0x0._s_0.Y + 3;
      iVar22 = (this->TranslucencyVolumeDownsampledBufferSize).field0_0x0._s_0.Z + 3;
      pFVar32 = FRDGEventName::FRDGEventName
                          (&local_260,L"TranslucencyVolumeGenerateSamples SamplesPerVoxel:%dx%dx%d")
      ;
      pFVar3 = this->GraphBuilder;
      pFVar37 = FVolumeGenerateLightSamplesCS::FParameters::FTypeInfo::GetStructMetadata();
      local_578._s_0.X = (int)((iVar20 >> 0x1f & 3U) + iVar20) >> 2;
      local_578._s_0.Y = (int)((iVar21 >> 0x1f & 3U) + iVar21) >> 2;
      local_578._s_0.Z = (int)((iVar22 >> 0x1f & 3U) + iVar22) >> 2;
      FComputeShaderUtils::AddPass<FVolumeGenerateLightSamplesCS>
                (pFVar3,pFVar32,Compute,&local_308,pFVar37,local_600,
                 (TIntVector3<int> *)&local_578._s_0);
      if (local_260.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_260.FormattedEventName.Data.AllocatorInstance.Data);
      }
      local_650 = local_650 + 1;
      local_65c = local_65c + 1;
    } while (local_65c < 2);
  }
  this->bSamplesGenerated = true;
  if (local_460 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_470);
  }
  return;
}

