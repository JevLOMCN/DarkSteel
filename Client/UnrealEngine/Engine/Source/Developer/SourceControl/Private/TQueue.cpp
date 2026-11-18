// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SourceControl
// Functions: 1

// ~TQueue<FAssetDataToLoad,0> @ 146b00950

void __thiscall
TQueue<FAssetDataToLoad,0>::~TQueue<FAssetDataToLoad,0>(TQueue<FAssetDataToLoad,0> *this)

{
  TNode *pTVar1;
  FScriptContainerElement *pFVar2;
  
  pTVar1 = this->Tail;
  while (pTVar1 != (TNode *)0x0) {
    this->Tail = pTVar1->NextNode;
    pFVar2 = (pTVar1->Item).Filename.Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pTVar1->Item).TempFilename.Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pTVar1,0x28);
    pTVar1 = this->Tail;
  }
  return;
}

