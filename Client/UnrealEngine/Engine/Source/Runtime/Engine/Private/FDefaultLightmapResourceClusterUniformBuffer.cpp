// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// InitRHI @ 1484a5d00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDefaultLightmapResourceClusterUniformBuffer::InitRHI
          (FDefaultLightmapResourceClusterUniformBuffer *this,FRHICommandListBase *param_1)

{
  undefined8 *puVar1;
  FLightmapResourceClusterShaderParameters local_c8;
  FLightmapClusterResourceInput local_48;
  
  local_48.ShadowMapTexture = (UTexture2D *)0x0;
  local_c8.LightMapTexture = (FRHITexture *)0x0;
  local_c8.SkyOcclusionTexture = (FRHITexture *)0x0;
  local_c8.AOMaterialMaskTexture = (FRHITexture *)0x0;
  local_c8.StaticShadowTexture = (FRHITexture *)0x0;
  local_c8.VTLightMapTexture = (FRHIShaderResourceView *)0x0;
  local_c8.VTLightMapTexture_1 = (FRHIShaderResourceView *)0x0;
  local_c8.VTSkyOcclusionTexture = (FRHIShaderResourceView *)0x0;
  local_c8.VTAOMaterialMaskTexture = (FRHIShaderResourceView *)0x0;
  local_c8.VTStaticShadowTexture = (FRHIShaderResourceView *)0x0;
  local_c8.LightMapSampler = (FRHISamplerState *)0x0;
  local_c8.LightMapSampler_1 = (FRHISamplerState *)0x0;
  local_c8.SkyOcclusionSampler = (FRHISamplerState *)0x0;
  local_c8.AOMaterialMaskSampler = (FRHISamplerState *)0x0;
  local_c8.StaticShadowTextureSampler = (FRHISamplerState *)0x0;
  local_c8.LightmapVirtualTexturePageTable0 = (FRHITexture *)0x0;
  local_c8.LightmapVirtualTexturePageTable1 = (FRHITexture *)0x0;
  local_48.LightMapTextures[0] = (UTexture2D *)0x0;
  local_48.LightMapTextures[1] = (UTexture2D *)0x0;
  local_48.SkyOcclusionTexture = (UTexture2D *)0x0;
  local_48.AOMaterialMaskTexture = (UTexture2D *)0x0;
  local_48.LightMapVirtualTextures[0] = (ULightMapVirtualTexture2D *)0x0;
  local_48.LightMapVirtualTextures[1] = (ULightMapVirtualTexture2D *)0x0;
  GetLightmapClusterResourceParameters
            (GMaxRHIFeatureLevel,&local_48,(IAllocatedVirtualTexture *)0x0,&local_c8);
  puVar1 = *(undefined8 **)&this->field_0x30;
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = FMemory::Malloc(0x80,0x10);
    *(undefined8 **)&this->field_0x30 = puVar1;
  }
  *puVar1 = local_c8.LightMapTexture;
  puVar1[1] = local_c8.SkyOcclusionTexture;
  puVar1[2] = local_c8.AOMaterialMaskTexture;
  puVar1[3] = local_c8.StaticShadowTexture;
  puVar1[4] = local_c8.VTLightMapTexture;
  puVar1[5] = local_c8.VTLightMapTexture_1;
  puVar1[6] = local_c8.VTSkyOcclusionTexture;
  puVar1[7] = local_c8.VTAOMaterialMaskTexture;
  puVar1[8] = local_c8.VTStaticShadowTexture;
  puVar1[9] = local_c8.LightMapSampler;
  puVar1[10] = local_c8.LightMapSampler_1;
  puVar1[0xb] = local_c8.SkyOcclusionSampler;
  puVar1[0xc] = local_c8.AOMaterialMaskSampler;
  puVar1[0xd] = local_c8.StaticShadowTextureSampler;
  puVar1[0xe] = local_c8.LightmapVirtualTexturePageTable0;
  puVar1[0xf] = local_c8.LightmapVirtualTexturePageTable1;
  TUniformBuffer<FLightmapResourceClusterShaderParameters>::InitRHI
            ((TUniformBuffer<FLightmapResourceClusterShaderParameters> *)this,param_1);
  return;
}

