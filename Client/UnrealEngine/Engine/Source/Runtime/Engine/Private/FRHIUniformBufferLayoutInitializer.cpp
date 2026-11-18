// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// operator= @ 147faa120

FRHIUniformBufferLayoutInitializer * __thiscall
FRHIUniformBufferLayoutInitializer::operator=
          (FRHIUniformBufferLayoutInitializer *this,FRHIUniformBufferLayoutInitializer *param_1)

{
  if (this != param_1) {
    FMemoryImageAllocatorBase::MoveToEmpty
              ((FMemoryImageAllocatorBase *)this,(FMemoryImageAllocatorBase *)param_1);
    (this->Name).Data.ArrayNum = (param_1->Name).Data.ArrayNum;
    (this->Name).Data.ArrayMax = (param_1->Name).Data.ArrayMax;
    (param_1->Name).Data.ArrayNum = 0;
    (param_1->Name).Data.ArrayMax = 0;
  }
  if (&this->Resources != &param_1->Resources) {
    FMemoryImageAllocatorBase::MoveToEmpty
              ((FMemoryImageAllocatorBase *)&this->Resources,
               (FMemoryImageAllocatorBase *)&param_1->Resources);
    (this->Resources).ArrayNum = (param_1->Resources).ArrayNum;
    (this->Resources).ArrayMax = (param_1->Resources).ArrayMax;
    (param_1->Resources).ArrayNum = 0;
    (param_1->Resources).ArrayMax = 0;
  }
  if (&this->GraphResources != &param_1->GraphResources) {
    FMemoryImageAllocatorBase::MoveToEmpty
              ((FMemoryImageAllocatorBase *)&this->GraphResources,
               (FMemoryImageAllocatorBase *)&param_1->GraphResources);
    (this->GraphResources).ArrayNum = (param_1->GraphResources).ArrayNum;
    (this->GraphResources).ArrayMax = (param_1->GraphResources).ArrayMax;
    (param_1->GraphResources).ArrayNum = 0;
    (param_1->GraphResources).ArrayMax = 0;
  }
  if (&this->GraphTextures != &param_1->GraphTextures) {
    FMemoryImageAllocatorBase::MoveToEmpty
              ((FMemoryImageAllocatorBase *)&this->GraphTextures,
               (FMemoryImageAllocatorBase *)&param_1->GraphTextures);
    (this->GraphTextures).ArrayNum = (param_1->GraphTextures).ArrayNum;
    (this->GraphTextures).ArrayMax = (param_1->GraphTextures).ArrayMax;
    (param_1->GraphTextures).ArrayNum = 0;
    (param_1->GraphTextures).ArrayMax = 0;
  }
  if (&this->GraphBuffers != &param_1->GraphBuffers) {
    FMemoryImageAllocatorBase::MoveToEmpty
              ((FMemoryImageAllocatorBase *)&this->GraphBuffers,
               (FMemoryImageAllocatorBase *)&param_1->GraphBuffers);
    (this->GraphBuffers).ArrayNum = (param_1->GraphBuffers).ArrayNum;
    (this->GraphBuffers).ArrayMax = (param_1->GraphBuffers).ArrayMax;
    (param_1->GraphBuffers).ArrayNum = 0;
    (param_1->GraphBuffers).ArrayMax = 0;
  }
  if (&this->GraphUniformBuffers != &param_1->GraphUniformBuffers) {
    FMemoryImageAllocatorBase::MoveToEmpty
              ((FMemoryImageAllocatorBase *)&this->GraphUniformBuffers,
               (FMemoryImageAllocatorBase *)&param_1->GraphUniformBuffers);
    (this->GraphUniformBuffers).ArrayNum = (param_1->GraphUniformBuffers).ArrayNum;
    (this->GraphUniformBuffers).ArrayMax = (param_1->GraphUniformBuffers).ArrayMax;
    (param_1->GraphUniformBuffers).ArrayNum = 0;
    (param_1->GraphUniformBuffers).ArrayMax = 0;
  }
  if (&this->UniformBuffers != &param_1->UniformBuffers) {
    FMemoryImageAllocatorBase::MoveToEmpty
              ((FMemoryImageAllocatorBase *)&this->UniformBuffers,
               (FMemoryImageAllocatorBase *)&param_1->UniformBuffers);
    (this->UniformBuffers).ArrayNum = (param_1->UniformBuffers).ArrayNum;
    (this->UniformBuffers).ArrayMax = (param_1->UniformBuffers).ArrayMax;
    (param_1->UniformBuffers).ArrayNum = 0;
    (param_1->UniformBuffers).ArrayMax = 0;
  }
  this->Hash = param_1->Hash;
  this->ConstantBufferSize = param_1->ConstantBufferSize;
  this->RenderTargetsOffset = param_1->RenderTargetsOffset;
  this->StaticSlot = param_1->StaticSlot;
  this->BindingFlags = param_1->BindingFlags;
  this->Flags = param_1->Flags;
  return this;
}

