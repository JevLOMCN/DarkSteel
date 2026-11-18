// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// ~FPCGBlurIterState @ 149ad2af0

void __thiscall FPCGBlurIterState::~FPCGBlurIterState(FPCGBlurIterState *this)

{
  FScriptContainerElement *pFVar1;
  IPCGAttributeAccessorKeys *pIVar2;
  IPCGAttributeAccessor *pIVar3;
  
  pFVar1 = (this->WorkingBuffer2).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WorkingBuffer1).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->OutputKeys).Ptr;
  if (pIVar2 != (IPCGAttributeAccessorKeys *)0x0) {
    (**(code **)pIVar2->_padding_)(pIVar2,1);
  }
  pIVar2 = (this->InputKeys).Ptr;
  if (pIVar2 != (IPCGAttributeAccessorKeys *)0x0) {
    (**(code **)pIVar2->_padding_)(pIVar2,1);
  }
  pIVar3 = (this->OutputAccessor).Ptr;
  if (pIVar3 != (IPCGAttributeAccessor *)0x0) {
    (**(code **)pIVar3->_padding_)(pIVar3,1);
  }
  pIVar3 = (this->InputAccessor).Ptr;
  if (pIVar3 != (IPCGAttributeAccessor *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149ad2b63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pIVar3->_padding_)(pIVar3,1);
    return;
  }
  return;
}

