// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 1

// ~TTupleBaseElement<TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>,1,2> @ 14ad9d670

void __thiscall
UE::Core::Private::Tuple::
TTupleBaseElement<TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>,1,2>
::
~TTupleBaseElement<TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>,1,2>
          (TTupleBaseElement<TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>,1,2>
           *this)

{
  FArrayRandomGet *pFVar1;
  FScriptContainerElement *pFVar2;
  TCircularQueue<int> *pTVar3;
  
  pFVar1 = (this->Value).Ptr;
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
    return;
  }
  return;
}

