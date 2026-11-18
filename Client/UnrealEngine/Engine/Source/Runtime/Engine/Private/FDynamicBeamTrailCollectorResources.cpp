// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ~FDynamicBeamTrailCollectorResources @ 1481c9010

void __thiscall
FDynamicBeamTrailCollectorResources::~FDynamicBeamTrailCollectorResources
          (FDynamicBeamTrailCollectorResources *this)

{
  TUniformBufferRef<FParticleBeamTrailUniformParameters> this_00;
  
  this->_padding_ = (longlong)&___7FDynamicBeamTrailCollectorResources__6B_;
  (**(code **)((this->VertexFactory)._padding_ + 0x20))(&this->VertexFactory);
  this_00 = (this->VertexFactory).BeamTrailUniformBuffer;
  if (this_00 != (TUniformBufferRef<FParticleBeamTrailUniformParameters>)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FVertexFactory::~FVertexFactory((FVertexFactory *)&this->VertexFactory);
  this->_padding_ = (longlong)&___7FOneFrameResource__6B_;
  return;
}

