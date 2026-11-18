// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ~FDynamicMeshEmitterCollectorResources @ 1481c9070

void __thiscall
FDynamicMeshEmitterCollectorResources::~FDynamicMeshEmitterCollectorResources
          (FDynamicMeshEmitterCollectorResources *this)

{
  this->_padding_ = (longlong)&___7FDynamicMeshEmitterCollectorResources__6B_;
  (**(code **)((this->VertexFactory)._padding_ + 0x20))(&this->VertexFactory);
  if (this->UniformBuffer != (TUniformBufferRef<FMeshParticleUniformParameters>)0x0) {
    FRHIResource::Release((FRHIResource *)this->UniformBuffer);
  }
  FDynamicReadBuffer::~FDynamicReadBuffer(&(this->VertexFactory).PrevTransformBuffer);
  FVertexFactory::~FVertexFactory((FVertexFactory *)&this->VertexFactory);
  this->_padding_ = (longlong)&___7FOneFrameResource__6B_;
  return;
}

