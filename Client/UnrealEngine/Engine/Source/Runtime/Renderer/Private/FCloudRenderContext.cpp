// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FCloudRenderContext @ 145857d60

/* WARNING: Type propagation algorithm not settling */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

FCloudRenderContext * __thiscall FCloudRenderContext::FCloudRenderContext(FCloudRenderContext *this)

{
  this->SceneDepthZ = (FRDGTexture *)0x0;
  this->SceneDepthMinAndMax = (FRDGTexture *)0x0;
  this->ViewUniformBuffer = (TUniformBufferRef<FViewUniformShaderParameters>)0x0;
  FRenderTargetBindingSlots::FRenderTargetBindingSlots(&this->RenderTargets);
  *(undefined8 *)
   &(this->LightShadowShaderParams0).VolumeShadowingShaderParameters.ShadowmapMinMax.field0_0x0 = 0;
  (this->LightShadowShaderParams0).VolumeShadowingShaderParameters.ShadowmapMinMax.field0_0x0._s_0.Z
       = 0.0;
  *(undefined8 *)
   ((longlong)
    &(this->LightShadowShaderParams0).VolumeShadowingShaderParameters.ShadowmapMinMax.field0_0x0 +
   0xc) = 0x3f800000;
  *(undefined8 *)
   ((longlong)
    &(this->LightShadowShaderParams0).VolumeShadowingShaderParameters.DepthBiasParameters.field0_0x0
   + 4) = 0;
  *(undefined8 *)
   ((longlong)
    &(this->LightShadowShaderParams0).VolumeShadowingShaderParameters.DepthBiasParameters.field0_0x0
   + 0xc) = 0x3f800000;
  *(undefined8 *)
   ((longlong)
    &(this->LightShadowShaderParams0).VolumeShadowingShaderParameters.ShadowInjectParams.field0_0x0
   + 4) = 0;
  *(undefined8 *)
   ((longlong)
    &(this->LightShadowShaderParams0).VolumeShadowingShaderParameters.ShadowInjectParams.field0_0x0
   + 0xc) = 0x3f800000;
  this->SecondaryCloudTracingDataTexture = (FRDGTexture *)0x0;
  this->CloudAlphaHoldoutTexture = (FRDGTexture *)0x0;
  *(undefined8 *)
   ((longlong)
    &(this->LightShadowShaderParams0).VolumeShadowingShaderParameters.ClippingPlanes.Elements[0].
     field0_0x0 + 4) = 0;
  *(undefined8 *)
   ((longlong)
    &(this->LightShadowShaderParams0).VolumeShadowingShaderParameters.ClippingPlanes.Elements[0].
     field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)
   ((longlong)
    &(this->LightShadowShaderParams0).VolumeShadowingShaderParameters.ClippingPlanes.Elements[1].
     field0_0x0 + 4) = 0;
  (this->LightShadowShaderParams0).VolumeShadowingShaderParameters.ClippingPlanes.Elements[1].
  field0_0x0._s_0.W = 1.0;
  *(undefined8 *)
   &(this->LightShadowShaderParams0).VolumeShadowingShaderParameters.StaticShadowBufferSize.
    field0_0x0 = 0;
  (this->LightShadowShaderParams0).VolumeShadowingShaderParameters.StaticShadowBufferSize.field0_0x0
  ._s_0.Z = 0.0;
  (this->LightShadowShaderParams0).VolumeShadowingShaderParameters.StaticShadowBufferSize.field0_0x0
  ._s_0.W = 1.0;
  (this->LightShadowShaderParams0).VolumeShadowingShaderParameters.ShadowDepthTexture =
       (FRDGTexture *)0x0;
  (this->LightShadowShaderParams0).VolumeShadowingShaderParameters.ShadowDepthTextureSampler =
       (FRHISamplerState *)0x0;
  (this->LightShadowShaderParams0).VolumeShadowingShaderParameters.OnePassPointShadowProjection.
  ShadowDepthCubeTexture = (FRDGTexture *)0x0;
  (this->LightShadowShaderParams0).VolumeShadowingShaderParameters.OnePassPointShadowProjection.
  ShadowDepthCubeTexture2 = (FRDGTexture *)0x0;
  (this->LightShadowShaderParams0).VolumeShadowingShaderParameters.OnePassPointShadowProjection.
  ShadowDepthCubeTextureSampler = (FRHISamplerState *)0x0;
  (this->LightShadowShaderParams0).VolumeShadowingShaderParameters.StaticShadowDepthTexture =
       (FRHITexture *)0x0;
  (this->LightShadowShaderParams0).VolumeShadowingShaderParameters.StaticShadowDepthTextureSampler =
       (FRHISamplerState *)0x0;
  this->VirtualShadowMapId0 = -1;
  this->DefaultCloudColorCubeTexture = (FRDGTexture *)0x0;
  this->DefaultCloudColor02DTexture = (FRDGTexture *)0x0;
  this->DefaultCloudColor12DTexture = (FRDGTexture *)0x0;
  this->DefaultCloudDepthTexture = (FRDGTexture *)0x0;
  this->DefaultCloudAlphaHoldout = (FRDGTexture *)0x0;
  this->DefaultCloudColorCubeTextureUAV = (FRDGTextureUAV *)0x0;
  this->DefaultCloudColor02DTextureUAV = (FRDGTextureUAV *)0x0;
  this->DefaultCloudColor12DTextureUAV = (FRDGTextureUAV *)0x0;
  this->DefaultCloudDepthTextureUAV = (FRDGTextureUAV *)0x0;
  this->DefaultCloudAlphaHoldoutUAV = (FRDGTextureUAV *)0x0;
  this->ComputeOverlapCloudColorCubeTextureUAVWithoutBarrier = (FRDGTextureUAV *)0x0;
  (this->TracingCoordToZbufferCoordScaleBias).field0_0x0._s_0.X = 1;
  *(undefined8 *)((longlong)&(this->TracingCoordToZbufferCoordScaleBias).field0_0x0 + 4) = 1;
  (this->TracingCoordToZbufferCoordScaleBias).field0_0x0._s_0.W = 0;
  (this->TracingCoordToFullResPixelCoordScaleBias).field0_0x0._s_0.X = 1;
  *(undefined8 *)((longlong)&(this->TracingCoordToFullResPixelCoordScaleBias).field0_0x0 + 4) = 1;
  *(undefined8 *)((longlong)&(this->TracingCoordToFullResPixelCoordScaleBias).field0_0x0 + 0xc) = 0;
  this->bDisableCloudBlending = false;
  this->bSkipAerialPerspective = false;
  this->bSkipHeightFog = false;
  this->bIsReflectionRendering = false;
  this->bIsSkyRealTimeReflectionRendering = false;
  this->bSkipAtmosphericLightShadowmap = false;
  this->bAsyncCompute = false;
  this->bCloudDebugViewModeEnabled = false;
  this->bAccumulateAlphaHoldOut = false;
  return this;
}

// CreateDefaultTexturesIfNeeded @ 14586a760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FCloudRenderContext::CreateDefaultTexturesIfNeeded(FCloudRenderContext *this,FRDGBuilder *param_1)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  longlong lVar3;
  FRDGTexture *pFVar4;
  FRDGTextureUAV *pFVar5;
  undefined8 uVar6;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  FRDGTextureUAVDesc local_a0;
  undefined1 local_88 [24];
  float local_70;
  int local_6c;
  undefined4 local_68;
  undefined1 *local_64;
  undefined4 local_5c;
  undefined4 local_58;
  undefined2 local_54;
  void *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  pTVar1 = CVarCloudDefaultTexturesNoFastClear.Ref;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (this->DefaultCloudColorCubeTexture != (FRDGTexture *)0x0) {
    return;
  }
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    lVar3 = 4;
    if (!bVar2) goto LAB_14586a7c7;
  }
  lVar3 = 0;
LAB_14586a7c7:
  local_70 = FClearValueBinding::Black.Value.Color[3];
  local_a8 = 1;
  uStack_a4 = 1;
  local_68 = 0;
  uVar6 = 0x20009;
  if (*(int *)((longlong)pTVar1->ShadowedValue + lVar3) != 0) {
    uVar6 = 0x4020009;
  }
  local_5c = 0x10001;
  local_6c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_64 = &DAT_100000001;
  local_88._8_8_ = FClearValueBinding::Black._0_8_;
  local_88._16_8_ = FClearValueBinding::Black.Value._4_8_;
  local_58 = 0xa030101;
  local_54 = 0xff00;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 1;
  local_88._0_8_ = uVar6;
  pFVar4 = FRDGBuilder::CreateTexture
                     (param_1,(FRDGTextureDesc *)local_88,L"Cloud.ColorCubeDummy",None);
  this->DefaultCloudColorCubeTexture = pFVar4;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  local_70 = FClearValueBinding::None.Value.Color[3];
  local_a8 = 1;
  local_6c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  uStack_a4 = 1;
  local_64 = &DAT_100000001;
  local_88._8_8_ = FClearValueBinding::None._0_8_;
  local_88._16_8_ = FClearValueBinding::None.Value._4_8_;
  local_68 = 0;
  local_5c = 0x10001;
  local_58 = 0xa000101;
  local_54 = 0xff00;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 1;
  local_88._0_8_ = uVar6;
  pFVar4 = FRDGBuilder::CreateTexture(param_1,(FRDGTextureDesc *)local_88,L"Cloud.ColorDummy",None);
  this->DefaultCloudColor02DTexture = pFVar4;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  local_70 = FClearValueBinding::None.Value.Color[3];
  local_a8 = 1;
  local_6c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  uStack_a4 = 1;
  local_64 = &DAT_100000001;
  local_88._8_8_ = FClearValueBinding::None._0_8_;
  local_88._16_8_ = FClearValueBinding::None.Value._4_8_;
  local_68 = 0;
  local_5c = 0x10001;
  local_58 = 0xa000101;
  local_54 = 0xff00;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 1;
  local_88._0_8_ = uVar6;
  pFVar4 = FRDGBuilder::CreateTexture(param_1,(FRDGTextureDesc *)local_88,L"Cloud.ColorDummy",None);
  this->DefaultCloudColor12DTexture = pFVar4;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  local_70 = FClearValueBinding::None.Value.Color[3];
  local_a8 = 1;
  local_6c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  uStack_a4 = 1;
  local_64 = &DAT_100000001;
  local_88._8_8_ = FClearValueBinding::None._0_8_;
  local_88._16_8_ = FClearValueBinding::None.Value._4_8_;
  local_68 = 0;
  local_5c = 0x10001;
  local_58 = 0xf000101;
  local_54 = 0xff00;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 1;
  local_88._0_8_ = uVar6;
  pFVar4 = FRDGBuilder::CreateTexture(param_1,(FRDGTextureDesc *)local_88,L"Cloud.DepthDummy",None);
  this->DefaultCloudDepthTexture = pFVar4;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  local_70 = FClearValueBinding::None.Value.Color[3];
  local_a8 = 1;
  local_6c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  uStack_a4 = 1;
  local_64 = &DAT_100000001;
  local_88._8_8_ = FClearValueBinding::None._0_8_;
  local_88._16_8_ = FClearValueBinding::None.Value._4_8_;
  local_68 = 0;
  local_5c = 0x10001;
  local_58 = 0x15000101;
  local_54 = 0xff00;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 1;
  local_88._0_8_ = uVar6;
  pFVar4 = FRDGBuilder::CreateTexture
                     (param_1,(FRDGTextureDesc *)local_88,L"Cloud.AlphaHoldoutDummy",None);
  this->DefaultCloudAlphaHoldout = pFVar4;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  local_a0.Texture = this->DefaultCloudColorCubeTexture;
  local_a0._padding_._1_1_ = 0;
  local_a0._padding_._2_4_ = 0;
  local_a0._padding_._0_1_ = ((local_a0.Texture)->Desc).field_0x34;
  local_a0._padding_._6_1_ = 0;
  local_a0._padding_._0_1_ = 0;
  pFVar5 = FRDGBuilder::CreateUAV(param_1,&local_a0,SkipBarrier);
  local_a0.Texture = this->DefaultCloudColor12DTexture;
  this->DefaultCloudColorCubeTextureUAV = pFVar5;
  local_a0._padding_._1_1_ = 0;
  local_a0._padding_._0_1_ = ((local_a0.Texture)->Desc).field_0x34;
  local_a0._padding_._2_4_ = 0;
  local_a0._padding_._6_1_ = 0;
  local_a0._padding_._0_1_ = 0;
  pFVar5 = FRDGBuilder::CreateUAV(param_1,&local_a0,SkipBarrier);
  local_a0.Texture = this->DefaultCloudColor02DTexture;
  this->DefaultCloudColor02DTextureUAV = pFVar5;
  local_a0._padding_._1_1_ = 0;
  local_a0._padding_._0_1_ = ((local_a0.Texture)->Desc).field_0x34;
  local_a0._padding_._2_4_ = 0;
  local_a0._padding_._6_1_ = 0;
  local_a0._padding_._0_1_ = 0;
  pFVar5 = FRDGBuilder::CreateUAV(param_1,&local_a0,SkipBarrier);
  local_a0.Texture = this->DefaultCloudDepthTexture;
  this->DefaultCloudColor12DTextureUAV = pFVar5;
  local_a0._padding_._1_1_ = 0;
  local_a0._padding_._0_1_ = ((local_a0.Texture)->Desc).field_0x34;
  local_a0._padding_._2_4_ = 0;
  local_a0._padding_._6_1_ = 0;
  local_a0._padding_._0_1_ = 0;
  pFVar5 = FRDGBuilder::CreateUAV(param_1,&local_a0,SkipBarrier);
  local_a0.Texture = this->DefaultCloudAlphaHoldout;
  this->DefaultCloudDepthTextureUAV = pFVar5;
  local_a0._padding_._1_1_ = 0;
  local_a0._padding_._0_1_ = ((local_a0.Texture)->Desc).field_0x34;
  local_a0._padding_._2_4_ = 0;
  local_a0._padding_._6_1_ = 0;
  local_a0._padding_._0_1_ = 0;
  pFVar5 = FRDGBuilder::CreateUAV(param_1,&local_a0,SkipBarrier);
  this->DefaultCloudAlphaHoldoutUAV = pFVar5;
  return;
}

