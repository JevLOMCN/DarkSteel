// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// TUniformBufferBinding<FViewUniformShaderParameters> @ 144c1dd90

TUniformBufferBinding<FViewUniformShaderParameters> * __thiscall
TUniformBufferBinding<FViewUniformShaderParameters>::
TUniformBufferBinding<FViewUniformShaderParameters>
          (TUniformBufferBinding<FViewUniformShaderParameters> *this,
          TUniformBufferRef<FViewUniformShaderParameters> *param_1)

{
  FShaderParametersMetadata *pFVar1;
  EUniformBufferBindingFlags EVar2;
  
  pFVar1 = FViewUniformShaderParameters::GetStructMetadata();
  EVar2 = Static;
  if (pFVar1->BindingFlags != StaticAndShader) {
    EVar2 = pFVar1->BindingFlags;
  }
  *(TUniformBufferRef<FViewUniformShaderParameters> *)this = *param_1;
  this->field_0x8 = EVar2;
  return this;
}

// TUniformBufferBinding<FAtmosphereUniformShaderParameters> @ 1450af710

TUniformBufferBinding<FAtmosphereUniformShaderParameters> * __thiscall
TUniformBufferBinding<FAtmosphereUniformShaderParameters>::
TUniformBufferBinding<FAtmosphereUniformShaderParameters>
          (TUniformBufferBinding<FAtmosphereUniformShaderParameters> *this,
          TUniformBufferRef<FAtmosphereUniformShaderParameters> *param_1)

{
  FShaderParametersMetadata *pFVar1;
  EUniformBufferBindingFlags EVar2;
  
  pFVar1 = FAtmosphereUniformShaderParameters::GetStructMetadata();
  EVar2 = Static;
  if (pFVar1->BindingFlags != StaticAndShader) {
    EVar2 = pFVar1->BindingFlags;
  }
  *(TUniformBufferRef<FAtmosphereUniformShaderParameters> *)this = *param_1;
  this->field_0x8 = EVar2;
  return this;
}

// TUniformBufferBinding<FSkyAtmosphereInternalCommonParameters> @ 145665500

TUniformBufferBinding<FSkyAtmosphereInternalCommonParameters> * __thiscall
TUniformBufferBinding<FSkyAtmosphereInternalCommonParameters>::
TUniformBufferBinding<FSkyAtmosphereInternalCommonParameters>
          (TUniformBufferBinding<FSkyAtmosphereInternalCommonParameters> *this,
          TUniformBufferRef<FSkyAtmosphereInternalCommonParameters> *param_1)

{
  FShaderParametersMetadata *pFVar1;
  EUniformBufferBindingFlags EVar2;
  
  pFVar1 = FSkyAtmosphereInternalCommonParameters::GetStructMetadata();
  EVar2 = Static;
  if (pFVar1->BindingFlags != StaticAndShader) {
    EVar2 = pFVar1->BindingFlags;
  }
  *(TUniformBufferRef<FSkyAtmosphereInternalCommonParameters> *)this = *param_1;
  this->field_0x8 = EVar2;
  return this;
}

