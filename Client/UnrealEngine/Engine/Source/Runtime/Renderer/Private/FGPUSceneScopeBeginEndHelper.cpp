// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FGPUSceneScopeBeginEndHelper @ 1447f4730

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FGPUSceneScopeBeginEndHelper * __thiscall
FGPUSceneScopeBeginEndHelper::FGPUSceneScopeBeginEndHelper
          (FGPUSceneScopeBeginEndHelper *this,FRDGBuilder *param_1,FGPUScene *param_2,
          FGPUSceneDynamicContext *param_3)

{
  this->GPUScene = param_2;
  FGPUScene::BeginRender(param_2,param_1,param_3);
  return this;
}

