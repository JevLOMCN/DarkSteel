// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// FMotionVectorEstimationContext @ 1450af8a0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FMotionVectorEstimationContext * __thiscall
FMotionVectorEstimationContext::FMotionVectorEstimationContext
          (FMotionVectorEstimationContext *this,FRDGTexture *param_1,FRDGTexture *param_2)

{
  uint uVar1;
  
  this->PixelOffsetTextureNames[0] = L"PathTracing.EstimateMotion.PixelOffset.Ping";
  this->PixelOffsetTextureNames[1] = L"PathTracing.EstimateMotion.PixelOffset.Pong";
  (this->TargetViewport).Extent.field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  (this->TargetViewport).Rect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->TargetViewport).Rect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  *(undefined8 *)&this->TextureWithNMipsDescriptor = 0;
  *(undefined8 *)&(this->TextureWithNMipsDescriptor).field_0x8 = 1;
  *(undefined8 *)&(this->TextureWithNMipsDescriptor).field_0x10 = 0;
  *(undefined4 *)&(this->TextureWithNMipsDescriptor).field_0x18 = 0;
  uVar1 = GNumExplicitGPUsForRendering;
  *(undefined4 *)&(this->TextureWithNMipsDescriptor).field_0x20 = 0;
  *(undefined4 *)&(this->TextureWithNMipsDescriptor).field_0x24 = 1;
  *(undefined4 *)&(this->TextureWithNMipsDescriptor).field_0x28 = 1;
  *(undefined4 *)&(this->TextureWithNMipsDescriptor).field_0x2c = 0x10001;
  *(undefined4 *)&(this->TextureWithNMipsDescriptor).field_0x30 = 0x101;
  *(undefined2 *)&(this->TextureWithNMipsDescriptor).field_0x34 = 0xff00;
  *(undefined8 *)&(this->TextureWithNMipsDescriptor).field_0x40 = 0;
  *(int *)&(this->TextureWithNMipsDescriptor).field_0x1c = (1 << ((byte)uVar1 & 0x1f)) + -1;
  *(undefined4 *)&(this->TextureWithNMipsDescriptor).field_0x48 = 0;
  *(undefined4 *)&(this->TextureWithNMipsDescriptor).field_0x4c = 1;
  *(undefined8 *)&this->TextureDescriptor = 0;
  *(undefined8 *)&(this->TextureDescriptor).field_0x8 = 1;
  *(undefined8 *)&(this->TextureDescriptor).field_0x10 = 0;
  *(undefined4 *)&(this->TextureDescriptor).field_0x18 = 0;
  uVar1 = GNumExplicitGPUsForRendering;
  *(undefined4 *)&(this->TextureDescriptor).field_0x20 = 0;
  *(undefined4 *)&(this->TextureDescriptor).field_0x24 = 1;
  *(undefined4 *)&(this->TextureDescriptor).field_0x28 = 1;
  *(undefined4 *)&(this->TextureDescriptor).field_0x2c = 0x10001;
  *(undefined4 *)&(this->TextureDescriptor).field_0x30 = 0x101;
  *(undefined2 *)&(this->TextureDescriptor).field_0x34 = 0xff00;
  *(undefined8 *)&(this->TextureDescriptor).field_0x40 = 0;
  *(int *)&(this->TextureDescriptor).field_0x1c = (1 << ((byte)uVar1 & 0x1f)) + -1;
  *(undefined4 *)&(this->TextureDescriptor).field_0x48 = 0;
  *(undefined4 *)&(this->TextureDescriptor).field_0x4c = 1;
  *(undefined8 *)&this->TextureDescriptorFinalOutput = 0;
  *(undefined8 *)&(this->TextureDescriptorFinalOutput).field_0x8 = 1;
  *(undefined8 *)&(this->TextureDescriptorFinalOutput).field_0x10 = 0;
  *(undefined4 *)&(this->TextureDescriptorFinalOutput).field_0x18 = 0;
  uVar1 = GNumExplicitGPUsForRendering;
  *(undefined4 *)&(this->TextureDescriptorFinalOutput).field_0x20 = 0;
  *(undefined4 *)&(this->TextureDescriptorFinalOutput).field_0x24 = 1;
  *(undefined4 *)&(this->TextureDescriptorFinalOutput).field_0x28 = 1;
  *(undefined4 *)&(this->TextureDescriptorFinalOutput).field_0x2c = 0x10001;
  *(undefined4 *)&(this->TextureDescriptorFinalOutput).field_0x30 = 0x101;
  *(undefined2 *)&(this->TextureDescriptorFinalOutput).field_0x34 = 0xff00;
  *(undefined8 *)&(this->TextureDescriptorFinalOutput).field_0x40 = 0;
  *(int *)&(this->TextureDescriptorFinalOutput).field_0x1c = (1 << ((byte)uVar1 & 0x1f)) + -1;
  *(undefined4 *)&(this->TextureDescriptorFinalOutput).field_0x48 = 0;
  *(undefined4 *)&(this->TextureDescriptorFinalOutput).field_0x4c = 1;
  this->SourceTexture = param_1;
  this->TargetTexture = param_2;
  *(undefined8 *)&(this->DenoisingCommonParameters).ViewUniformBuffer = 0;
  (this->DenoisingCommonParameters).ViewUniformBuffer.field_0x8 = 1;
  (this->DenoisingCommonParameters).SharedTextureSampler = (FRHISamplerState *)0x0;
  return this;
}

// InitContext @ 1450dd870

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

bool __thiscall
FMotionVectorEstimationContext::InitContext
          (FMotionVectorEstimationContext *this,FRDGBuilder *param_1,FViewInfo *param_2)

{
  TIntPoint<int>_u_0 TVar1;
  TIntPoint<int>_u_0 TVar2;
  wchar_t *pwVar3;
  code *pcVar4;
  TVector2<float>_u_0 TVar5;
  TConsoleVariableData<int> *pTVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  FShaderParametersMetadata *pFVar11;
  FScreenPassTextureViewportParameters *pFVar12;
  FRDGTexture *pFVar13;
  uint uVar14;
  byte bVar15;
  undefined1 auStackY_328 [32];
  uint local_2f8 [4];
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  int local_2c8;
  int iStack_2c4;
  int local_2c0;
  int iStack_2bc;
  TIntPoint<int>_u_0 local_2b8;
  EUniformBufferBindingFlags EStack_2b0;
  undefined7 uStack_2af;
  int local_2a8;
  uint *local_2a0;
  TIntVector3<int>_u_0 local_298;
  undefined8 local_28c;
  int local_284;
  undefined8 local_280;
  int local_278;
  undefined8 local_274;
  undefined8 local_26c;
  undefined4 local_264;
  uint local_260;
  FScreenPassTextureViewportParameters local_258;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined8 local_1c4;
  undefined2 local_1bc;
  undefined2 local_1ba;
  byte local_1b8;
  undefined1 local_1b7;
  undefined1 local_1b6;
  undefined1 local_1b5;
  undefined1 local_1b4;
  undefined1 local_1b3;
  undefined1 local_1b0 [8];
  void *local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined8 local_174;
  undefined2 local_16c;
  undefined2 local_16a;
  byte local_168;
  undefined1 local_167;
  undefined1 local_166;
  undefined1 local_165;
  undefined1 local_164;
  undefined1 local_163;
  undefined1 local_160 [8];
  void *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  int local_12c;
  undefined4 local_128;
  TIntPoint<int>_u_0_s_0 local_124;
  undefined4 local_11c;
  undefined1 local_118;
  undefined4 local_117;
  undefined1 local_113;
  TArray<EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_110;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  int local_dc;
  undefined4 local_d8;
  TIntPoint<int>_u_0_s_0 local_d4;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined2 local_c4;
  TArray<EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_c0;
  ETextureCreateFlags local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  int local_8c;
  undefined4 local_88;
  TIntPoint<int>_u_0 local_84;
  undefined4 local_7c;
  undefined4 local_78;
  undefined2 local_74;
  TArray<EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_70;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_328;
  TVar1 = (param_2->ViewRect).field0_0x0._s_0.Min.field0_0x0;
  TVar2 = (param_2->ViewRect).field0_0x0._s_0.Max.field0_0x0;
  (this->TargetViewport).Extent.field0_0x0 = TVar2;
  (this->TargetViewport).Rect.field0_0x0._s_0.Min.field0_0x0 = TVar1;
  (this->TargetViewport).Rect.field0_0x0._s_0.Max.field0_0x0 = TVar2;
  uVar14 = (this->TargetViewport).Extent.field0_0x0._s_0.Y;
  if ((this->TargetViewport).Extent.field0_0x0._s_0.X < (int)uVar14) {
    uVar14 = (this->TargetViewport).Extent.field0_0x0._s_0.X;
  }
  local_2a8 = 0x1f;
  if (uVar14 != 0) {
    for (; uVar14 >> local_2a8 == 0; local_2a8 = local_2a8 + -1) {
    }
  }
  iVar9 = 0;
  if (uVar14 != 0) {
    iVar9 = local_2a8;
  }
  local_2f8[0] = iVar9 + 1;
  if (7 < local_2f8[0]) {
    local_2f8[0] = 7;
  }
  if (local_2f8[0] != 7) {
    local_2a0 = local_2f8;
    bVar7 = `FMotionVectorEstimationContext::InitContext'::__l3::<lambda_1>::operator()(&local_2a0);
    if (!bVar7) {
      return bVar7;
    }
  }
  pFVar11 = FViewUniformShaderParameters::GetStructMetadata();
  local_2b8 = (TIntPoint<int>_u_0)param_2->_padding_;
  EStack_2b0 = Static;
  if (pFVar11->BindingFlags != StaticAndShader) {
    EStack_2b0 = pFVar11->BindingFlags;
  }
  *(TIntPoint<int>_u_0 *)&(this->DenoisingCommonParameters).ViewUniformBuffer = local_2b8;
  *(ulonglong *)&(this->DenoisingCommonParameters).ViewUniformBuffer.field_0x8 =
       CONCAT71(uStack_2af,EStack_2b0);
  pFVar12 = GetScreenPassTextureViewportParameters(&local_258,&this->TargetViewport);
  TVar5 = (pFVar12->ExtentInverse).field0_0x0;
  (this->DenoisingCommonParameters).TargetViewport.Extent.field0_0x0 = (pFVar12->Extent).field0_0x0;
  (this->DenoisingCommonParameters).TargetViewport.ExtentInverse.field0_0x0 = TVar5;
  TVar5 = (pFVar12->ScreenPosToViewportBias).field0_0x0;
  (this->DenoisingCommonParameters).TargetViewport.ScreenPosToViewportScale.field0_0x0 =
       (pFVar12->ScreenPosToViewportScale).field0_0x0;
  (this->DenoisingCommonParameters).TargetViewport.ScreenPosToViewportBias.field0_0x0 = TVar5;
  TVar1 = (pFVar12->ViewportMax).field0_0x0;
  (this->DenoisingCommonParameters).TargetViewport.ViewportMin.field0_0x0 =
       (pFVar12->ViewportMin).field0_0x0;
  (this->DenoisingCommonParameters).TargetViewport.ViewportMax.field0_0x0 = TVar1;
  TVar5 = (pFVar12->ViewportSizeInverse).field0_0x0;
  (this->DenoisingCommonParameters).TargetViewport.ViewportSize.field0_0x0 =
       (pFVar12->ViewportSize).field0_0x0;
  (this->DenoisingCommonParameters).TargetViewport.ViewportSizeInverse.field0_0x0 = TVar5;
  TVar5 = (pFVar12->UVViewportMax).field0_0x0;
  (this->DenoisingCommonParameters).TargetViewport.UVViewportMin.field0_0x0 =
       (pFVar12->UVViewportMin).field0_0x0;
  (this->DenoisingCommonParameters).TargetViewport.UVViewportMax.field0_0x0 = TVar5;
  TVar5 = (pFVar12->UVViewportSizeInverse).field0_0x0;
  (this->DenoisingCommonParameters).TargetViewport.UVViewportSize.field0_0x0 =
       (pFVar12->UVViewportSize).field0_0x0;
  (this->DenoisingCommonParameters).TargetViewport.UVViewportSizeInverse.field0_0x0 = TVar5;
  TVar5 = (pFVar12->UVViewportBilinearMax).field0_0x0;
  (this->DenoisingCommonParameters).TargetViewport.UVViewportBilinearMin.field0_0x0 =
       (pFVar12->UVViewportBilinearMin).field0_0x0;
  (this->DenoisingCommonParameters).TargetViewport.UVViewportBilinearMax.field0_0x0 = TVar5;
  (this->DenoisingCommonParameters).SharedTextureSampler =
       TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  pTVar6 = CVarPathTracingTemporalDenoiserPatchCount.Ref;
  bVar7 = IsInParallelRenderingThread();
  if ((!bVar7) &&
     (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  local_2e8 = 1;
  uStack_2e0 = 0;
  uVar14 = 0x10;
  if (pTVar6->ShadowedValue[1] < 0x10) {
    uVar14 = pTVar6->ShadowedValue[1];
  }
  (this->DenoisingCommonParameters).NumOfMips = local_2f8[0];
  uVar10 = 1;
  if (1 < (int)uVar14) {
    uVar10 = uVar14;
  }
  local_130 = 0;
  (this->DenoisingCommonParameters).PatchCount = uVar10;
  local_124 = (this->TargetViewport).Extent.field0_0x0._s_0;
  local_12c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_2c8 = local_124.X;
  iStack_2c4 = local_124.Y;
  *(int *)&(this->TextureWithNMipsDescriptor).field_0x1c = local_12c;
  *(undefined8 *)&(this->TextureWithNMipsDescriptor).field_0x8 = 1;
  *(undefined8 *)&(this->TextureWithNMipsDescriptor).field_0x10 = 0;
  *(int *)&(this->TextureWithNMipsDescriptor).field_0x24 = local_124.X;
  *(int *)&(this->TextureWithNMipsDescriptor).field_0x28 = local_124.Y;
  *(undefined4 *)&(this->TextureWithNMipsDescriptor).field_0x18 = 0;
  local_148 = 0x20009;
  local_140 = 1;
  uStack_138 = 0;
  local_128 = 0;
  local_11c = 0x10001;
  local_118 = (undefined1)local_2f8[0];
  local_117 = 0x10001;
  local_113 = 0xff;
  local_110.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
  local_110.ArrayNum = 0;
  local_110.ArrayMax = 1;
  *(undefined4 *)&(this->TextureWithNMipsDescriptor).field_0x32 = 0xff000100;
  *(undefined8 *)&this->TextureWithNMipsDescriptor = 0x20009;
  *(undefined4 *)&(this->TextureWithNMipsDescriptor).field_0x2c = 0x10001;
  (this->TextureWithNMipsDescriptor).field_0x30 = local_118;
  (this->TextureWithNMipsDescriptor).field_0x31 = 1;
  *(undefined4 *)&(this->TextureWithNMipsDescriptor).field_0x20 = 0;
  TArray<enum_EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::operator=
            (&(this->TextureWithNMipsDescriptor).field_0x38,&local_110);
  if (local_110.AllocatorInstance.SecondaryData != (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_110.AllocatorInstance.SecondaryData);
  }
  local_d4 = (this->TargetViewport).Extent.field0_0x0._s_0;
  local_dc = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_2c0 = local_d4.X;
  iStack_2bc = local_d4.Y;
  *(int *)&(this->TextureDescriptor).field_0x1c = local_dc;
  local_2e8 = 1;
  uStack_2e0 = 0;
  *(undefined8 *)&(this->TextureDescriptor).field_0x8 = 1;
  *(undefined8 *)&(this->TextureDescriptor).field_0x10 = 0;
  *(int *)&(this->TextureDescriptor).field_0x24 = local_d4.X;
  *(int *)&(this->TextureDescriptor).field_0x28 = local_d4.Y;
  local_e0 = 0;
  *(undefined4 *)&(this->TextureDescriptor).field_0x18 = 0;
  local_f8 = 0x20009;
  local_f0 = 1;
  uStack_e8 = 0;
  local_d8 = 0;
  local_cc = 0x10001;
  local_c8 = 0x1000101;
  local_c4 = 0xff00;
  local_c0.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
  local_c0.ArrayNum = 0;
  local_c0.ArrayMax = 1;
  *(undefined4 *)&(this->TextureDescriptor).field_0x32 = 0xff000100;
  *(undefined8 *)&this->TextureDescriptor = 0x20009;
  *(undefined4 *)&(this->TextureDescriptor).field_0x2c = 0x10001;
  *(undefined2 *)&(this->TextureDescriptor).field_0x30 = 0x101;
  *(undefined4 *)&(this->TextureDescriptor).field_0x20 = 0;
  TArray<enum_EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::operator=
            (&(this->TextureDescriptor).field_0x38,&local_c0);
  if (local_c0.AllocatorInstance.SecondaryData != (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_c0.AllocatorInstance.SecondaryData);
  }
  local_a8 = GetExtraTextureCreateFlagsForDenoiser();
  local_2b8 = (this->TargetViewport).Extent.field0_0x0;
  local_a8 = local_a8 | (UAV|ShaderResource|RenderTargetable);
  local_8c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_2e8 = 1;
  *(int *)&(this->TextureDescriptorFinalOutput).field_0x1c = local_8c;
  uStack_2e0 = 0;
  *(undefined8 *)&(this->TextureDescriptorFinalOutput).field_0x8 = 1;
  *(undefined8 *)&(this->TextureDescriptorFinalOutput).field_0x10 = 0;
  local_90 = 0;
  *(undefined4 *)&(this->TextureDescriptorFinalOutput).field_0x18 = 0;
  local_a0 = 1;
  uStack_98 = 0;
  local_88 = 0;
  local_7c = 0x10001;
  local_78 = 0x1000101;
  local_74 = 0xff00;
  local_70.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
  local_70.ArrayNum = 0;
  local_70.ArrayMax = 1;
  *(undefined4 *)&(this->TextureDescriptorFinalOutput).field_0x32 = 0xff000100;
  *(ETextureCreateFlags *)&this->TextureDescriptorFinalOutput = local_a8;
  *(TIntPoint<int>_u_0 *)&(this->TextureDescriptorFinalOutput).field_0x24 = local_2b8;
  *(undefined4 *)&(this->TextureDescriptorFinalOutput).field_0x2c = 0x10001;
  *(undefined2 *)&(this->TextureDescriptorFinalOutput).field_0x30 = 0x101;
  *(undefined4 *)&(this->TextureDescriptorFinalOutput).field_0x20 = 0;
  local_84 = local_2b8;
  TArray<enum_EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::operator=
            (&(this->TextureDescriptorFinalOutput).field_0x38,&local_70);
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_70.AllocatorInstance.SecondaryData);
  }
  pFVar13 = FRDGBuilder::CreateTexture
                      (param_1,&this->TextureWithNMipsDescriptor,this->PixelOffsetTextureNames[0],
                       None);
  pwVar3 = this->PixelOffsetTextureNames[1];
  this->PixelOffsetTextures[0] = pFVar13;
  pFVar13 = FRDGBuilder::CreateTexture(param_1,&this->TextureWithNMipsDescriptor,pwVar3,None);
  this->PixelOffsetTextures[1] = pFVar13;
  pFVar13 = this->SourceTexture;
  local_158 = (void *)0x0;
  local_150 = 0;
  local_14c = 1;
  local_166 = (pFVar13->Desc).field_0x32;
  local_198 = *(undefined8 *)&pFVar13->Desc;
  local_165 = (pFVar13->Desc).field_0x33;
  local_164 = (pFVar13->Desc).field_0x34;
  local_174 = *(undefined8 *)&(pFVar13->Desc).field_0x24;
  local_16c = *(undefined2 *)&(pFVar13->Desc).field_0x2c;
  local_16a = *(undefined2 *)&(pFVar13->Desc).field_0x2e;
  local_168 = (pFVar13->Desc).field_0x30;
  local_167 = (pFVar13->Desc).field_0x31;
  local_190 = *(undefined8 *)&(pFVar13->Desc).field_0x8;
  uStack_188 = *(undefined8 *)&(pFVar13->Desc).field_0x10;
  local_180 = *(undefined4 *)&(pFVar13->Desc).field_0x18;
  local_178 = *(undefined4 *)&(pFVar13->Desc).field_0x20;
  local_163 = (pFVar13->Desc).field_0x35;
  local_17c = *(undefined4 *)&(pFVar13->Desc).field_0x1c;
  TArray<enum_EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::operator=
            (local_160,
             (TArray<EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
             &(pFVar13->Desc).field_0x38);
  pFVar13 = this->TargetTexture;
  local_1a8 = (void *)0x0;
  local_1a0 = 0;
  local_19c = 1;
  local_1b6 = (pFVar13->Desc).field_0x32;
  local_1e8 = *(undefined8 *)&pFVar13->Desc;
  local_1b5 = (pFVar13->Desc).field_0x33;
  local_1b4 = (pFVar13->Desc).field_0x34;
  local_1c4 = *(undefined8 *)&(pFVar13->Desc).field_0x24;
  local_1bc = *(undefined2 *)&(pFVar13->Desc).field_0x2c;
  local_1ba = *(undefined2 *)&(pFVar13->Desc).field_0x2e;
  local_1b8 = (pFVar13->Desc).field_0x30;
  local_1b7 = (pFVar13->Desc).field_0x31;
  local_1e0 = *(undefined8 *)&(pFVar13->Desc).field_0x8;
  uStack_1d8 = *(undefined8 *)&(pFVar13->Desc).field_0x10;
  local_1d0 = *(undefined4 *)&(pFVar13->Desc).field_0x18;
  local_1c8 = *(undefined4 *)&(pFVar13->Desc).field_0x20;
  local_1b3 = (pFVar13->Desc).field_0x35;
  local_1cc = *(undefined4 *)&(pFVar13->Desc).field_0x1c;
  TArray<enum_EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::operator=
            (local_1b0,
             (TArray<EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
             &(pFVar13->Desc).field_0x38);
  pFVar13 = FRDGBuilder::CreateTexture
                      (param_1,&this->TextureWithNMipsDescriptor,
                       L"PathTracing.EstimateMotion.Source",None);
  this->SourceMipTexture = pFVar13;
  pFVar13 = FRDGBuilder::CreateTexture
                      (param_1,&this->TextureWithNMipsDescriptor,
                       L"PathTracing.EstimateMotion.Target",None);
  local_298._s_0.X = (int)local_1c4;
  if ((int)local_174 < (int)local_1c4) {
    local_298._s_0.X = (int)local_174;
  }
  this->TargetMipTexture = pFVar13;
  this->BilinearClampSampler =
       TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  local_284 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  local_298._s_0.Y = local_1c4._4_4_;
  if (local_174._4_4_ < local_1c4._4_4_) {
    local_298._s_0.Y = local_174._4_4_;
  }
  local_278 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  bVar15 = local_1b8;
  if (local_168 < local_1b8) {
    bVar15 = local_168;
  }
  local_28c = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  local_260 = (uint)bVar15;
  local_280 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  local_274 = 0;
  local_26c = 1;
  local_264 = 0;
  local_298._s_0.Z = 1;
  AddCopyTexturePass(param_1,this->SourceTexture,this->SourceMipTexture,
                     (FRHICopyTextureInfo *)&local_298._s_0);
  FGenerateMips::Execute
            (param_1,(Type)param_2->_padding_,this->SourceMipTexture,this->BilinearClampSampler,
             AutoDetect);
  AddCopyTexturePass(param_1,this->TargetTexture,this->TargetMipTexture,
                     (FRHICopyTextureInfo *)&local_298._s_0);
  FGenerateMips::Execute
            (param_1,(Type)param_2->_padding_,this->TargetMipTexture,this->BilinearClampSampler,
             AutoDetect);
  pFVar13 = FRDGBuilder::CreateTexture
                      (param_1,&this->TextureWithNMipsDescriptor,DistanceTextureNames[0],None);
  pwVar3 = DistanceTextureNames[1];
  this->DistanceTextures[0] = pFVar13;
  pFVar13 = FRDGBuilder::CreateTexture(param_1,&this->TextureWithNMipsDescriptor,pwVar3,None);
  this->DistanceTextures[1] = pFVar13;
  pFVar13 = FRDGBuilder::CreateTexture
                      (param_1,&this->TextureWithNMipsDescriptor,DistanceTextureNames[2],None);
  pwVar3 = DistanceTextureNames[3];
  this->DistanceTextures[2] = pFVar13;
  pFVar13 = FRDGBuilder::CreateTexture(param_1,&this->TextureWithNMipsDescriptor,pwVar3,None);
  pwVar3 = DistanceTextureNames[4];
  this->DistanceTextures[3] = pFVar13;
  pFVar13 = FRDGBuilder::CreateTexture(param_1,&this->TextureWithNMipsDescriptor,pwVar3,None);
  pwVar3 = DistanceTextureNames[5];
  this->DistanceTextures[4] = pFVar13;
  pFVar13 = FRDGBuilder::CreateTexture(param_1,&this->TextureWithNMipsDescriptor,pwVar3,None);
  pwVar3 = DistanceTextureNames[6];
  this->DistanceTextures[5] = pFVar13;
  pFVar13 = FRDGBuilder::CreateTexture(param_1,&this->TextureWithNMipsDescriptor,pwVar3,None);
  this->DistanceTextures[6] = pFVar13;
  if (local_1a8 != (void *)0x0) {
    FMemory::Free(local_1a8);
  }
  if (local_158 != (void *)0x0) {
    FMemory::Free(local_158);
  }
  return true;
}

// operator() @ 1504cb8c0

bool __thiscall
`FMotionVectorEstimationContext::InitContext'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8613952062004135144>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8613952062004135144>,
                       &`public:___cdecl_`public:_bool___cdecl_FMotionVectorEstimationContext::InitContext(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

