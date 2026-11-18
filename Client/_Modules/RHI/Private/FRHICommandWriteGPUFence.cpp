// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// Execute @ 145ca04f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandWriteGPUFence::Execute(FRHICommandWriteGPUFence *this,FRHICommandListBase *param_1)

{
  FThreadSafeCounter *pFVar1;
  IRHIComputeContext *pIVar2;
  
  pIVar2 = FRHICommandListBase::GetComputeContext(param_1);
  (**(code **)(pIVar2->_padding_ + 0xe0))(pIVar2,this->Fence);
  if (this->Fence != (FRHIGPUFence *)0x0) {
    LOCK();
    pFVar1 = &this->Fence->NumPendingWriteCommands;
    pFVar1->Counter = pFVar1->Counter + -1;
    UNLOCK();
  }
  return;
}

