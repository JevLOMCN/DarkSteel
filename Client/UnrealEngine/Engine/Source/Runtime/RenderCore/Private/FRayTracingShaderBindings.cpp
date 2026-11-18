// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// FRayTracingShaderBindings @ 145e81310

FRayTracingShaderBindings * __thiscall
FRayTracingShaderBindings::FRayTracingShaderBindings(FRayTracingShaderBindings *this)

{
  memset(this,0,0x200);
  memset(this->SRVs,0,0x200);
  this->UniformBuffers[0] = (FRHIUniformBuffer *)0x0;
  this->UniformBuffers[1] = (FRHIUniformBuffer *)0x0;
  this->UniformBuffers[2] = (FRHIUniformBuffer *)0x0;
  this->UniformBuffers[3] = (FRHIUniformBuffer *)0x0;
  this->UniformBuffers[4] = (FRHIUniformBuffer *)0x0;
  this->UniformBuffers[5] = (FRHIUniformBuffer *)0x0;
  this->UniformBuffers[6] = (FRHIUniformBuffer *)0x0;
  this->UniformBuffers[7] = (FRHIUniformBuffer *)0x0;
  this->UniformBuffers[8] = (FRHIUniformBuffer *)0x0;
  this->UniformBuffers[9] = (FRHIUniformBuffer *)0x0;
  this->UniformBuffers[10] = (FRHIUniformBuffer *)0x0;
  this->UniformBuffers[0xb] = (FRHIUniformBuffer *)0x0;
  this->UniformBuffers[0xc] = (FRHIUniformBuffer *)0x0;
  this->UniformBuffers[0xd] = (FRHIUniformBuffer *)0x0;
  this->UniformBuffers[0xe] = (FRHIUniformBuffer *)0x0;
  this->UniformBuffers[0xf] = (FRHIUniformBuffer *)0x0;
  memset(this->Samplers,0,0x100);
  this->UAVs[0] = (FRHIUnorderedAccessView *)0x0;
  this->UAVs[1] = (FRHIUnorderedAccessView *)0x0;
  this->UAVs[2] = (FRHIUnorderedAccessView *)0x0;
  this->UAVs[3] = (FRHIUnorderedAccessView *)0x0;
  this->UAVs[4] = (FRHIUnorderedAccessView *)0x0;
  this->UAVs[5] = (FRHIUnorderedAccessView *)0x0;
  this->UAVs[6] = (FRHIUnorderedAccessView *)0x0;
  this->UAVs[7] = (FRHIUnorderedAccessView *)0x0;
  this->UAVs[8] = (FRHIUnorderedAccessView *)0x0;
  this->UAVs[9] = (FRHIUnorderedAccessView *)0x0;
  this->UAVs[10] = (FRHIUnorderedAccessView *)0x0;
  this->UAVs[0xb] = (FRHIUnorderedAccessView *)0x0;
  this->UAVs[0xc] = (FRHIUnorderedAccessView *)0x0;
  this->UAVs[0xd] = (FRHIUnorderedAccessView *)0x0;
  this->UAVs[0xe] = (FRHIUnorderedAccessView *)0x0;
  this->UAVs[0xf] = (FRHIUnorderedAccessView *)0x0;
  (this->BindlessParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BindlessParameters).ArrayNum = 0;
  (this->BindlessParameters).ArrayMax = 0;
  return this;
}

