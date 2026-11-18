// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// InitRHI @ 14555cd20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FEmptyTranslucentSelfShadowUniformBuffer::InitRHI
          (FEmptyTranslucentSelfShadowUniformBuffer *this,FRHICommandListBase *param_1)

{
  float *pfVar1;
  FTranslucentSelfShadowUniformParameters local_98;
  
  local_98.ShadowUVMinMax.field0_0x0._0_8_ = ___xmm_3f800000000000000000000000000000;
  local_98.ShadowUVMinMax.field0_0x0._8_8_ = _UNK_150689648;
  local_98.DirectionalLightDirection.field0_0x0._0_8_ = ___xmm_3f800000000000000000000000000000;
  local_98.DirectionalLightDirection.field0_0x0._8_8_ = _UNK_150689648;
  local_98.DirectionalLightColor.field0_0x0._0_8_ = ___xmm_3f800000000000000000000000000000;
  local_98.DirectionalLightColor.field0_0x0._8_8_ = _UNK_150689648;
  local_98.Transmission0Sampler = (FRHISamplerState *)0x0;
  local_98.Transmission1Sampler = (FRHISamplerState *)0x0;
  local_98.Transmission0 = (FRHITexture *)0x0;
  local_98.Transmission1 = (FRHITexture *)0x0;
  SetupTranslucentSelfShadowUniformParameters((FProjectedShadowInfo *)0x0,&local_98);
  pfVar1 = *(float **)&this->field_0x30;
  if (pfVar1 == (float *)0x0) {
    pfVar1 = FMemory::Malloc(0x90,0x10);
    *(float **)&this->field_0x30 = pfVar1;
  }
  *(undefined8 *)pfVar1 = local_98.WorldToShadowMatrix.M[0]._0_8_;
  *(undefined8 *)(pfVar1 + 2) = local_98.WorldToShadowMatrix.M[0]._8_8_;
  *(undefined8 *)(pfVar1 + 4) = local_98.WorldToShadowMatrix.M[1]._0_8_;
  *(undefined8 *)(pfVar1 + 6) = local_98.WorldToShadowMatrix.M[1]._8_8_;
  *(undefined8 *)(pfVar1 + 8) = local_98.WorldToShadowMatrix.M[2]._0_8_;
  *(undefined8 *)(pfVar1 + 10) = local_98.WorldToShadowMatrix.M[2]._8_8_;
  *(undefined8 *)(pfVar1 + 0xc) = local_98.WorldToShadowMatrix.M[3]._0_8_;
  *(undefined8 *)(pfVar1 + 0xe) = local_98.WorldToShadowMatrix.M[3]._8_8_;
  *(undefined8 *)(pfVar1 + 0x10) = local_98.ShadowUVMinMax.field0_0x0._0_8_;
  *(undefined8 *)(pfVar1 + 0x12) = local_98.ShadowUVMinMax.field0_0x0._8_8_;
  *(undefined8 *)(pfVar1 + 0x14) = local_98.DirectionalLightDirection.field0_0x0._0_8_;
  *(undefined8 *)(pfVar1 + 0x16) = local_98.DirectionalLightDirection.field0_0x0._8_8_;
  *(undefined8 *)(pfVar1 + 0x18) = local_98.DirectionalLightColor.field0_0x0._0_8_;
  *(undefined8 *)(pfVar1 + 0x1a) = local_98.DirectionalLightColor.field0_0x0._8_8_;
  *(FRHITexture **)(pfVar1 + 0x1c) = local_98.Transmission0;
  *(FRHITexture **)(pfVar1 + 0x1e) = local_98.Transmission1;
  *(FRHISamplerState **)(pfVar1 + 0x20) = local_98.Transmission0Sampler;
  *(FRHISamplerState **)(pfVar1 + 0x22) = local_98.Transmission1Sampler;
  TUniformBuffer<FTranslucentSelfShadowUniformParameters>::InitRHI
            ((TUniformBuffer<FTranslucentSelfShadowUniformParameters> *)this,param_1);
  return;
}

