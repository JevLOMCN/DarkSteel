// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// TRDGUniformBufferBinding<FDistortionPassUniformParameters> @ 14485a750

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TRDGUniformBufferBinding<FDistortionPassUniformParameters> * __thiscall
TRDGUniformBufferBinding<FDistortionPassUniformParameters>::
TRDGUniformBufferBinding<FDistortionPassUniformParameters>
          (TRDGUniformBufferBinding<FDistortionPassUniformParameters> *this,
          TRDGUniformBuffer<FDistortionPassUniformParameters> *param_1)

{
  EUniformBufferBindingFlags EVar1;
  EUniformBufferBindingFlags EVar2;
  FShaderParametersMetadata *pFVar3;
  
  pFVar3 = FDistortionPassUniformParameters::GetStructMetadata();
  EVar1 = pFVar3->BindingFlags;
  *(TRDGUniformBuffer<FDistortionPassUniformParameters> **)this = param_1;
  EVar2 = Static;
  if (EVar1 != StaticAndShader) {
    EVar2 = EVar1;
  }
  this->field_0x8 = EVar2;
  return this;
}

// TRDGUniformBufferBinding<FNaniteRayTracingUniformParameters> @ 1450aee40

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGUniformBufferBinding<FNaniteRayTracingUniformParameters> * __thiscall
TRDGUniformBufferBinding<FNaniteRayTracingUniformParameters>::
TRDGUniformBufferBinding<FNaniteRayTracingUniformParameters>
          (TRDGUniformBufferBinding<FNaniteRayTracingUniformParameters> *this,
          TRDGUniformBuffer<FNaniteRayTracingUniformParameters> *param_1)

{
  EUniformBufferBindingFlags EVar1;
  EUniformBufferBindingFlags EVar2;
  FShaderParametersMetadata *pFVar3;
  
  pFVar3 = FNaniteRayTracingUniformParameters::GetStructMetadata();
  EVar1 = pFVar3->BindingFlags;
  *(TRDGUniformBuffer<FNaniteRayTracingUniformParameters> **)this = param_1;
  EVar2 = Static;
  if (EVar1 != StaticAndShader) {
    EVar2 = EVar1;
  }
  this->field_0x8 = EVar2;
  return this;
}

// TRDGUniformBufferBinding<FSceneUniformParameters> @ 1450aee90

TRDGUniformBufferBinding<FSceneUniformParameters> * __thiscall
TRDGUniformBufferBinding<FSceneUniformParameters>::TRDGUniformBufferBinding<FSceneUniformParameters>
          (TRDGUniformBufferBinding<FSceneUniformParameters> *this,
          TRDGUniformBuffer<FSceneUniformParameters> *param_1)

{
  EUniformBufferBindingFlags EVar1;
  EUniformBufferBindingFlags EVar2;
  FShaderParametersMetadata *pFVar3;
  
  pFVar3 = FSceneUniformParameters::FTypeInfo::GetStructMetadata();
  EVar1 = pFVar3->BindingFlags;
  *(TRDGUniformBuffer<FSceneUniformParameters> **)this = param_1;
  EVar2 = Static;
  if (EVar1 != StaticAndShader) {
    EVar2 = EVar1;
  }
  this->field_0x8 = EVar2;
  return this;
}

