// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// DestroyObject @ 1497ffec0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FPCGDataCollectionDesc,SharedPointerInternals::DefaultDeleter<FPCGDataCollectionDesc>,1>
::DestroyObject(TReferenceControllerWithDeleter<FPCGDataCollectionDesc,SharedPointerInternals::DefaultDeleter<FPCGDataCollectionDesc>,1>
                *this)

{
  FPCGDataCollectionDesc *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FPCGDataCollectionDesc *)0x0) {
    DestructItems<FPCGDataDesc,int>
              ((FPCGDataDesc *)(pFVar1->DataDescs).AllocatorInstance.Data,
               (pFVar1->DataDescs).ArrayNum);
    pFVar2 = (pFVar1->DataDescs).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x10);
    return;
  }
  return;
}

// DestroyObject @ 149c07b20

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<IPCGAttributeAccessor_const_,SharedPointerInternals::DefaultDeleter<IPCGAttributeAccessor_const_>,1>
::DestroyObject(TReferenceControllerWithDeleter<IPCGAttributeAccessor_const_,SharedPointerInternals::DefaultDeleter<IPCGAttributeAccessor_const_>,1>
                *this)

{
  IPCGAttributeAccessor *pIVar1;
  
  pIVar1 = this->Object;
  if (pIVar1 != (IPCGAttributeAccessor *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149c07b31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pIVar1->_padding_)(pIVar1,1);
    return;
  }
  return;
}

