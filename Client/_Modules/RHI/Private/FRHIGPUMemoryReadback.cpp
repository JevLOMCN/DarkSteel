// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// FRHIGPUMemoryReadback @ 145c87770

FRHIGPUMemoryReadback * __thiscall
FRHIGPUMemoryReadback::FRHIGPUMemoryReadback(FRHIGPUMemoryReadback *this,FName param_1)

{
  TRefCountPtr<FRHIGPUFence> *pTVar1;
  FRHIGPUFence *this_00;
  FName local_res10;
  TRefCountPtr<FRHIGPUFence> local_18 [2];
  
  pTVar1 = &this->Fence;
  (this->LastCopyGPUMask).GPUMask = 1;
  this->_padding_ = (longlong)&___7FRHIGPUMemoryReadback__6B_;
  pTVar1->Reference = (FRHIGPUFence *)0x0;
  local_res10 = param_1;
  (**(code **)(GDynamicRHI->_padding_ + 0xb8))(GDynamicRHI,local_18,&local_res10);
  if (pTVar1 != local_18) {
    this_00 = pTVar1->Reference;
    pTVar1->Reference = local_18[0].Reference;
    local_18[0].Reference = (FRHIGPUFence *)0x0;
    if (this_00 == (FRHIGPUFence *)0x0) goto LAB_145c877ee;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  if (local_18[0].Reference != (FRHIGPUFence *)0x0) {
    FRHIResource::Release((FRHIResource *)local_18[0].Reference);
  }
LAB_145c877ee:
  this->LastLockGPUIndex = 0;
  return this;
}

