// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// ~FAttractState @ 149ad2800

void __thiscall PCGAttractElement::FAttractState::~FAttractState(FAttractState *this)

{
  FScriptContainerElement *pFVar1;
  IPCGAttributeAccessor *pIVar2;
  IPCGAttributeAccessorKeys *pIVar3;
  
  DestructItems<PCGAttractElement::FAttractState::FAttributeInterpolationData,int>
            ((FAttributeInterpolationData *)(this->Interpolators).AllocatorInstance.Data,
             (this->Interpolators).ArrayNum);
  pFVar1 = (this->Interpolators).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TargetWeights).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SourceWeights).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->OutputAttractIndexAccessor).Ptr;
  if (pIVar2 != (IPCGAttributeAccessor *)0x0) {
    (**(code **)pIVar2->_padding_)(pIVar2,1);
  }
  pIVar3 = (this->OutputKeys).Ptr;
  if (pIVar3 != (IPCGAttributeAccessorKeys *)0x0) {
    (**(code **)pIVar3->_padding_)(pIVar3,1);
  }
  pFVar1 = (this->SortedTargetIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Mapping).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

