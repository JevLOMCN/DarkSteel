// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WebMMoviePlayer
// Functions: 1

// ~TQueue<TArray<TSharedPtr<FWebMFrame,1>,TSizedDefaultAllocator<32>_>,1> @ 14f125010

void __thiscall
TQueue<TArray<TSharedPtr<FWebMFrame,1>,TSizedDefaultAllocator<32>_>,1>::
~TQueue<TArray<TSharedPtr<FWebMFrame,1>,TSizedDefaultAllocator<32>_>,1>
          (TQueue<TArray<TSharedPtr<FWebMFrame,1>,TSizedDefaultAllocator<32>_>,1> *this)

{
  TNode *pTVar1;
  FScriptContainerElement *pFVar2;
  
  pTVar1 = this->Tail;
  while (pTVar1 != (TNode *)0x0) {
    this->Tail = pTVar1->NextNode;
    DestructItems<TSharedPtr<FWebMFrame,1>,int>
              ((TSharedPtr<FWebMFrame,1> *)(pTVar1->Item).AllocatorInstance.Data,
               (pTVar1->Item).ArrayNum);
    pFVar2 = (pTVar1->Item).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pTVar1,0x18);
    pTVar1 = this->Tail;
  }
  return;
}

