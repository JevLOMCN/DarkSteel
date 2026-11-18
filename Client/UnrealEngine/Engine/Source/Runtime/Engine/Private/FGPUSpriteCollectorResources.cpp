// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ~FGPUSpriteCollectorResources @ 1480f6880

void __thiscall
FGPUSpriteCollectorResources::~FGPUSpriteCollectorResources(FGPUSpriteCollectorResources *this)

{
  FRHIUniformBuffer *this_00;
  
  this->_padding_ = (longlong)&___7FGPUSpriteCollectorResources__6B_;
  (**(code **)((this->VertexFactory)._padding_ + 0x20))(&this->VertexFactory);
  if (this->UniformBuffer != (TUniformBufferRef<FGPUSpriteEmitterDynamicUniformParameters>)0x0) {
    FRHIResource::Release((FRHIResource *)this->UniformBuffer);
  }
  this_00 = (this->VertexFactory).EmitterDynamicUniformBuffer.Reference;
  if (this_00 != (FRHIUniformBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FVertexFactory::~FVertexFactory((FVertexFactory *)&this->VertexFactory);
  this->_padding_ = (longlong)&___7FOneFrameResource__6B_;
  return;
}

