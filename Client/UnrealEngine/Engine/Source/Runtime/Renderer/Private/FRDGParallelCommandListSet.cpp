// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// SetStateOnCommandList @ 145504e80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
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

void __thiscall
FRDGParallelCommandListSet::SetStateOnCommandList
          (FRDGParallelCommandListSet *this,FRHICommandList *param_1)

{
  if ((this->Bindings).bHasRenderPassInfo != false) {
    FRHICommandList::BeginRenderPass(param_1,&(this->Bindings).RenderPassInfo,L"Parallel");
  }
  FRHIComputeCommandList::SetStaticUniformBuffers
            ((FRHIComputeCommandList *)param_1,&(this->Bindings).StaticUniformBuffers);
  if ((char)this->_padding_ != '\0') {
    FSceneRenderer::SetStereoViewport(param_1,(FViewInfo *)this->_padding_,this->ViewportScale);
  }
  return;
}

