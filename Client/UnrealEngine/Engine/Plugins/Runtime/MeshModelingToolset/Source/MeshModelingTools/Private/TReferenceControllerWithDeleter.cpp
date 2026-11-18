// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 2

// DestroyObject @ 14cc53050

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FRichCurve,SharedPointerInternals::DefaultDeleter<FRichCurve>,1>::
DestroyObject(TReferenceControllerWithDeleter<FRichCurve,SharedPointerInternals::DefaultDeleter<FRichCurve>,1>
              *this)

{
  FRichCurve *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FRichCurve *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cc53061. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14cc53070

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TArray<int,TSizedDefaultAllocator<32>_>,SharedPointerInternals::DefaultDeleter<TArray<int,TSizedDefaultAllocator<32>_>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TArray<int,TSizedDefaultAllocator<32>_>,SharedPointerInternals::DefaultDeleter<TArray<int,TSizedDefaultAllocator<32>_>_>,1>
                *this)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pTVar1,0x10);
    return;
  }
  return;
}

