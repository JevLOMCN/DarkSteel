// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FCustomRenderPassInfo @ 1454d0ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FCustomRenderPassInfo * __thiscall
FSceneRenderer::FCustomRenderPassInfo::FCustomRenderPassInfo
          (FCustomRenderPassInfo *this,ConstructionValues *param_1)

{
  undefined1 auStack_1e8 [32];
  FSceneViewFamily local_1c8;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  FSceneViewFamily::FSceneViewFamily(&local_1c8,param_1);
  FViewFamilyInfo::FViewFamilyInfo(&this->ViewFamily,&local_1c8);
  FSceneViewFamily::~FSceneViewFamily(&local_1c8);
  (this->Views).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Views).ArrayNum = 0;
  (this->Views).ArrayMax = 0;
  (this->NaniteBasePassShadingCommands).MaxShadingBin = 0;
  (this->NaniteBasePassShadingCommands).NumCommands = 0;
  (this->NaniteBasePassShadingCommands).BoundTargetMask = 0;
  (this->NaniteBasePassShadingCommands).ShaderBundle.Reference = (FRHIShaderBundle *)0x0;
  (this->NaniteBasePassShadingCommands).Commands.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->NaniteBasePassShadingCommands).Commands.ArrayNum = 0;
  (this->NaniteBasePassShadingCommands).Commands.ArrayMax = 0;
  (this->NaniteBasePassShadingCommands).CommandLookup.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->NaniteBasePassShadingCommands).CommandLookup.ArrayNum = 0;
  (this->NaniteBasePassShadingCommands).CommandLookup.ArrayMax = 0;
  (this->NaniteBasePassShadingCommands).MetaBufferData.AllocatorInstance.Data =
       (TIntVector4<unsigned_int> *)0x0;
  (this->NaniteBasePassShadingCommands).MetaBufferData.ArrayNum = 0;
  (this->NaniteBasePassShadingCommands).MetaBufferData.ArrayMax = 0;
  (this->NaniteBasePassShadingCommands).SetupTask.Pimpl.Reference = (FTaskBase *)0x0;
  (this->NaniteBasePassShadingCommands).BuildCommandsTask.Pimpl.Reference = (FTaskBase *)0x0;
  return this;
}

// FCustomRenderPassInfo @ 1454d10b0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FCustomRenderPassInfo * __thiscall
FSceneRenderer::FCustomRenderPassInfo::FCustomRenderPassInfo
          (FCustomRenderPassInfo *this,ConstructionValues *param_1,FViewFamilyInfo *param_2)

{
  FSceneViewFamily::FSceneViewFamily((FSceneViewFamily *)&this->ViewFamily,param_1);
  (this->ViewFamily)._padding_ = (longlong)&___7FViewFamilyInfo__6B_;
  FSceneTexturesConfig::FSceneTexturesConfig(&(this->ViewFamily).SceneTexturesConfig);
  (this->ViewFamily).bIsSceneTextureSizedCapture = false;
  *(undefined1 *)&(this->ViewFamily)._padding_ = 1;
  (this->ViewFamily).SceneTextures = param_2->SceneTextures;
  (this->Views).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Views).ArrayNum = 0;
  (this->Views).ArrayMax = 0;
  (this->NaniteBasePassShadingCommands).MaxShadingBin = 0;
  (this->NaniteBasePassShadingCommands).NumCommands = 0;
  (this->NaniteBasePassShadingCommands).BoundTargetMask = 0;
  (this->NaniteBasePassShadingCommands).ShaderBundle.Reference = (FRHIShaderBundle *)0x0;
  (this->NaniteBasePassShadingCommands).Commands.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->NaniteBasePassShadingCommands).Commands.ArrayNum = 0;
  (this->NaniteBasePassShadingCommands).Commands.ArrayMax = 0;
  (this->NaniteBasePassShadingCommands).CommandLookup.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->NaniteBasePassShadingCommands).CommandLookup.ArrayNum = 0;
  (this->NaniteBasePassShadingCommands).CommandLookup.ArrayMax = 0;
  (this->NaniteBasePassShadingCommands).MetaBufferData.AllocatorInstance.Data =
       (TIntVector4<unsigned_int> *)0x0;
  (this->NaniteBasePassShadingCommands).MetaBufferData.ArrayNum = 0;
  (this->NaniteBasePassShadingCommands).MetaBufferData.ArrayMax = 0;
  (this->NaniteBasePassShadingCommands).SetupTask.Pimpl.Reference = (FTaskBase *)0x0;
  (this->NaniteBasePassShadingCommands).BuildCommandsTask.Pimpl.Reference = (FTaskBase *)0x0;
  return this;
}

