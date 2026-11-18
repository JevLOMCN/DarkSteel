// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 2

// ~FGeometryCollectionMeshCollectorResources @ 1463a54d0

void __thiscall
FGeometryCollectionMeshCollectorResources::~FGeometryCollectionMeshCollectorResources
          (FGeometryCollectionMeshCollectorResources *this)

{
  TUniformBufferRef<FGeometryCollectionVertexFactoryUniformShaderParameters> this_00;
  FRHIUniformBuffer *this_01;
  
  this->_padding_ = (longlong)&___7FGeometryCollectionMeshCollectorResources__6B_;
  (**(code **)((this->VertexFactory)._padding_ + 0x20))(&this->VertexFactory);
  this_00 = (this->VertexFactory).UniformBuffer;
  if (this_00 != (TUniformBufferRef<FGeometryCollectionVertexFactoryUniformShaderParameters>)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->VertexFactory).LooseParameterUniformBuffer.Reference;
  if (this_01 != (FRHIUniformBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  FVertexFactory::~FVertexFactory((FVertexFactory *)&this->VertexFactory);
  this->_padding_ = (longlong)&___7FOneFrameResource__6B_;
  return;
}

// GetVertexFactory @ 1463b8d80

FGeometryCollectionVertexFactory * __thiscall
FGeometryCollectionMeshCollectorResources::GetVertexFactory
          (FGeometryCollectionMeshCollectorResources *this)

{
  return &this->VertexFactory;
}

