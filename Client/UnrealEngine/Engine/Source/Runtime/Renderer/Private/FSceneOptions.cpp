// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FSceneOptions @ 1452fec20

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

FSceneOptions * __thiscall
RayTracing::FSceneOptions::FSceneOptions
          (FSceneOptions *this,FScene *param_1,FViewFamilyInfo *param_2,FViewInfo *param_3,
          EDiffuseIndirectMethod param_4,EReflectionsMethod param_5)

{
  bool bVar1;
  FStaticShaderPlatform FVar2;
  
  this->bIncludeSky = true;
  this->bLightingChannelsUsingAHS = true;
  this->bTranslucentGeometry = false;
  LumenHardwareRayTracing::SetRayTracingSceneOptions(param_3,param_4,param_5,this);
  RayTracingShadows::SetRayTracingSceneOptions(param_3->bHasRayTracingShadows,this);
  bVar1 = ShouldRenderRayTracingTranslucency(param_3);
  if (bVar1) {
    this->bTranslucentGeometry = true;
  }
  if ((param_2->_padding_ & 2) != 0) {
    this->bTranslucentGeometry = true;
  }
  if ((param_2->_padding_ & 1) != 0) {
    FVar2.Platform = FSceneInterface::GetShaderPlatform((FSceneInterface *)param_1);
    bVar1 = FGenericDataDrivenShaderPlatformInfo::GetSupportsPathTracing(FVar2);
    if (bVar1) {
      this->bTranslucentGeometry = true;
    }
  }
  if (GRayTracingExcludeTranslucent != 0) {
    this->bTranslucentGeometry = false;
  }
  if ((GRayTracingExcludeSky == 0) || ((param_2->_padding_ & 1) != 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  this->bIncludeSky = bVar1;
  bVar1 = MegaLights::IsEnabled((FSceneViewFamily *)param_2);
  if ((bVar1) && (bVar1 = MegaLights::IsUsingLightingChannels(), bVar1)) {
    this->bLightingChannelsUsingAHS = true;
    return this;
  }
  this->bLightingChannelsUsingAHS = false;
  return this;
}

