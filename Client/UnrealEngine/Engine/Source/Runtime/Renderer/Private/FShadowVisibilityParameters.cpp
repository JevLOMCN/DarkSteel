// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FShadowVisibilityParameters @ 144b982e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

FShadowVisibilityParameters * __thiscall
IScreenSpaceDenoiser::FShadowVisibilityParameters::FShadowVisibilityParameters
          (FShadowVisibilityParameters *this)

{
  (this->RayTracingConfig).RayCountPerPixel = 1;
  this->LightSceneInfo = (FLightSceneInfo *)0x0;
  (this->InputTextures).Mask = (FRDGTexture *)0x0;
  (this->InputTextures).ClosestOccluder = (FRDGTexture *)0x0;
  return this;
}

