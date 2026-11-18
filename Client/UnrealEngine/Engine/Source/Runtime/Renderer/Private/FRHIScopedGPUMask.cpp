// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FRHIScopedGPUMask @ 1447f5140

FRHIScopedGPUMask * __thiscall
FRHIScopedGPUMask::FRHIScopedGPUMask
          (FRHIScopedGPUMask *this,FRHIComputeCommandList *param_1,FRHIGPUMask param_2)

{
  this->RHICmdList = param_1;
  (this->PrevGPUMask).GPUMask = *(uint *)&param_1->field_0x29c;
  FRHIComputeCommandList::SetGPUMask(param_1,param_2);
  return this;
}

