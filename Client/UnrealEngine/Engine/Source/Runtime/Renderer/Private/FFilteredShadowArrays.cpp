// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// ~FFilteredShadowArrays @ 14560b1d0

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

void __thiscall FFilteredShadowArrays::~FFilteredShadowArrays(FFilteredShadowArrays *this)

{
  uint *puVar1;
  FProjectedShadowInfo **ppFVar2;
  
  puVar1 = (this->OnePassShadowUnsupportedLights).AllocatorInstance.Data;
  if (puVar1 != (uint *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(puVar1);
  }
  ppFVar2 = (this->ShadowsToSetupViews).AllocatorInstance.Data;
  if (ppFVar2 != (FProjectedShadowInfo **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar2);
  }
  ppFVar2 = (this->ProjectedDistanceFieldShadows).AllocatorInstance.SecondaryData.Data;
  if (ppFVar2 != (FProjectedShadowInfo **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar2);
  }
  ppFVar2 = (this->CachedWholeSceneDirectionalShadows).AllocatorInstance.Data;
  if (ppFVar2 != (FProjectedShadowInfo **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar2);
  }
  ppFVar2 = (this->WholeSceneDirectionalShadows).AllocatorInstance.Data;
  if (ppFVar2 != (FProjectedShadowInfo **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar2);
  }
  ppFVar2 = (this->WholeScenePointShadows).AllocatorInstance.Data;
  if (ppFVar2 != (FProjectedShadowInfo **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar2);
  }
  ppFVar2 = (this->CachedPreShadows).AllocatorInstance.Data;
  if (ppFVar2 != (FProjectedShadowInfo **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar2);
  }
  ppFVar2 = (this->TranslucentShadows).AllocatorInstance.Data;
  if (ppFVar2 != (FProjectedShadowInfo **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar2);
  }
  ppFVar2 = (this->CachedSpotlightShadows).AllocatorInstance.Data;
  if (ppFVar2 != (FProjectedShadowInfo **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar2);
  }
  ppFVar2 = (this->Shadows).AllocatorInstance.Data;
  if (ppFVar2 != (FProjectedShadowInfo **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar2);
    return;
  }
  return;
}

