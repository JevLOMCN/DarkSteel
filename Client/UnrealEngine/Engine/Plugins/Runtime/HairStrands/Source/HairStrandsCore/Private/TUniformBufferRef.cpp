// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 1

// operator= @ 14e07d180

TUniformBufferRef<FHairCardsVertexFactoryUniformShaderParameters> * __thiscall
TUniformBufferRef<FHairCardsVertexFactoryUniformShaderParameters>::operator=
          (TUniformBufferRef<FHairCardsVertexFactoryUniformShaderParameters> *this,
          TUniformBufferRef<FHairCardsVertexFactoryUniformShaderParameters> *param_1)

{
  TUniformBufferRef<FHairCardsVertexFactoryUniformShaderParameters> this_00;
  
  if (this != param_1) {
    this_00 = *this;
    *this = *param_1;
    *param_1 = (TUniformBufferRef<FHairCardsVertexFactoryUniformShaderParameters>)0x0;
    if (this_00 != (TUniformBufferRef<FHairCardsVertexFactoryUniformShaderParameters>)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  return this;
}

