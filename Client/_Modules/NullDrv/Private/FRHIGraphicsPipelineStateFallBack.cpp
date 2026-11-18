// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NullDrv
// Functions: 1

// GetShader @ 1446c5f40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FRHIGraphicsShader * __thiscall
FRHIGraphicsPipelineStateFallBack::GetShader
          (FRHIGraphicsPipelineStateFallBack *this,EShaderFrequency param_1)

{
  if (param_1 == SF_Vertex) {
    return (FRHIGraphicsShader *)(this->Initializer).BoundShaderState.VertexShaderRHI;
  }
  if (param_1 == SF_Mesh) {
    return (FRHIGraphicsShader *)(this->Initializer).BoundShaderState.MeshShaderRHI;
  }
  if (param_1 == SF_Amplification) {
    return (FRHIGraphicsShader *)(this->Initializer).BoundShaderState.AmplificationShaderRHI;
  }
  if (param_1 != SF_Pixel) {
    if (param_1 != SF_Geometry) {
      return (FRHIGraphicsShader *)0x0;
    }
    return (FRHIGraphicsShader *)(this->Initializer).BoundShaderState.GeometryShaderRHI;
  }
  return (FRHIGraphicsShader *)(this->Initializer).BoundShaderState.PixelShaderRHI;
}

