// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 1

// DestroyObject @ 145edffd0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TArray<FClusterNode,TSizedDefaultAllocator<32>_>,SharedPointerInternals::DefaultDeleter<TArray<FClusterNode,TSizedDefaultAllocator<32>_>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TArray<FClusterNode,TSizedDefaultAllocator<32>_>,SharedPointerInternals::DefaultDeleter<TArray<FClusterNode,TSizedDefaultAllocator<32>_>_>,1>
                *this)

{
  TArray<FClusterNode,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TArray<FClusterNode,TSizedDefaultAllocator<32>_> *)0x0) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pTVar1,0x10);
    return;
  }
  return;
}

