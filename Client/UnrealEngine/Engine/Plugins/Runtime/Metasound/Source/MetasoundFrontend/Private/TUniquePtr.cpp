// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 1

// operator= @ 14af43380

TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_> * __thiscall
TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>::operator=
          (TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_> *this,
          TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>
          *param_1)

{
  FArrayRandomGet *pFVar1;
  FScriptContainerElement *pFVar2;
  TCircularQueue<int> *pTVar3;
  
  if (this != param_1) {
    pFVar1 = this->Ptr;
    this->Ptr = param_1->Ptr;
    param_1->Ptr = (FArrayRandomGet *)0x0;
    if (pFVar1 != (FArrayRandomGet *)0x0) {
      pFVar2 = (pFVar1->RandomWeights).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pTVar3 = (pFVar1->PreviousIndicesQueue).Ptr;
      if (pTVar3 != (TCircularQueue<int> *)0x0) {
        pFVar2 = (pTVar3->Buffer).Elements.AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        ::operator_delete(pTVar3,0x20);
      }
      pFVar2 = (pFVar1->PreviousIndices).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      ::operator_delete(pFVar1,0x40);
    }
    return this;
  }
  return this;
}

