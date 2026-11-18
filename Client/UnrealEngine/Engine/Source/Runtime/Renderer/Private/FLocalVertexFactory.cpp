// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// GetTriangleSortingPositionSRV @ 145879e90

TRefCountPtr<FRHIShaderResourceView> __thiscall
FLocalVertexFactory::GetTriangleSortingPositionSRV(FLocalVertexFactory *this)

{
  FRHIResource *this_00;
  FRHIShaderResourceView *in_RDX;
  
  this_00 = (FRHIResource *)(this->Data)._padding_;
  *(FRHIResource **)in_RDX = this_00;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(this_00);
  }
  return (TRefCountPtr<FRHIShaderResourceView>)in_RDX;
}

// ReleaseRHI @ 145880ea0

void __thiscall FLocalVertexFactory::ReleaseRHI(FLocalVertexFactory *this)

{
  TUniformBufferRef<FLocalVertexFactoryUniformShaderParameters> this_00;
  
  this_00 = this->UniformBuffer;
  if (this_00 != (TUniformBufferRef<FLocalVertexFactoryUniformShaderParameters>)0x0) {
    this->UniformBuffer = (TUniformBufferRef<FLocalVertexFactoryUniformShaderParameters>)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FVertexFactory::ReleaseRHI((FVertexFactory *)this);
  return;
}

