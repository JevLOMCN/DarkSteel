// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// ~ISceneRenderer @ 1454d7d50

void __thiscall ISceneRenderer::~ISceneRenderer(ISceneRenderer *this)

{
  return;
}

// GetShadowInvalidatingInstancesInterface @ 1454f93a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

IShadowInvalidatingInstances * __thiscall
ISceneRenderer::GetShadowInvalidatingInstancesInterface(ISceneRenderer *this,FSceneView *param_1)

{
  return (IShadowInvalidatingInstances *)0x0;
}

