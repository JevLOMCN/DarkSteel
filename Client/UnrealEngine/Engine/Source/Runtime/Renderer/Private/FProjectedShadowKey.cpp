// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FProjectedShadowKey @ 14560a1e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FProjectedShadowKey * __thiscall
FSceneViewState::FProjectedShadowKey::FProjectedShadowKey
          (FProjectedShadowKey *this,FProjectedShadowInfo *param_1)

{
  uint uVar1;
  
  if (param_1->ParentSceneInfo == (FPrimitiveSceneInfo *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (param_1->ParentSceneInfo->PrimitiveComponentId).PrimIDValue;
  }
  (this->PrimitiveId).PrimIDValue = uVar1;
  this->Light = param_1->LightSceneInfo->Proxy->LightComponent;
  this->ShadowSplitIndex = (param_1->CascadeSettings).ShadowSplitIndex;
  this->bTranslucentShadow = param_1->bTranslucentShadow;
  return this;
}

