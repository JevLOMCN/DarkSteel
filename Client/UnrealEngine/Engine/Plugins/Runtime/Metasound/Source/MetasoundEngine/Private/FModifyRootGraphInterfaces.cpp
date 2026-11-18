// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 1

// ~FModifyRootGraphInterfaces @ 14b351e60

void __thiscall
Metasound::Frontend::FModifyRootGraphInterfaces::~FModifyRootGraphInterfaces
          (FModifyRootGraphInterfaces *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->OutputsToRemove).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OutputsToAdd).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            ((FMetasoundFrontendClassInput *)(this->InputsToRemove).AllocatorInstance.Data,
             (this->InputsToRemove).ArrayNum);
  pFVar1 = (this->InputsToRemove).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Metasound::Frontend::FModifyRootGraphInterfaces::FInputData,int>
            ((FInputData *)(this->InputsToAdd).AllocatorInstance.Data,(this->InputsToAdd).ArrayNum);
  pFVar1 = (this->InputsToAdd).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PairedOutputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PairedInputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMetasoundFrontendInterface,int>
            ((FMetasoundFrontendInterface *)(this->InterfacesToAdd).AllocatorInstance.Data,
             (this->InterfacesToAdd).ArrayNum);
  pFVar1 = (this->InterfacesToAdd).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMetasoundFrontendInterface,int>
            ((FMetasoundFrontendInterface *)(this->InterfacesToRemove).AllocatorInstance.Data,
             (this->InterfacesToRemove).ArrayNum);
  pFVar1 = (this->InterfacesToRemove).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

