// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FInitViewTaskDatas @ 1447f4790

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FInitViewTaskDatas * __thiscall
FDeferredShadingSceneRenderer::FInitViewTaskDatas::FInitViewTaskDatas
          (FInitViewTaskDatas *this,IVisibilityTaskData *param_1)

{
  this->VisibilityTaskData = param_1;
  this->ILCUpdatePrim = (FILCUpdatePrimTaskData *)0x0;
  this->RayTracingGatherInstances = (FGatherInstancesTaskData *)0x0;
  this->DynamicShadows = (FDynamicShadowsTaskData *)0x0;
  this->Decals = (FDecalVisibilityTaskData *)0x0;
  this->LumenDirectLighting = (FLumenDirectLightingTaskData *)0x0;
  this->LumenFrameTemporaries = (FLumenSceneFrameTemporaries *)0x0;
  return this;
}

