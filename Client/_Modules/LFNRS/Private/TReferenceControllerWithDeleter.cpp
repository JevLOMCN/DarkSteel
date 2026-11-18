// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LFNRS
// Functions: 2

// DestroyObject @ 146ca9040

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FCachedFileRequest,SharedPointerInternals::DefaultDeleter<FCachedFileRequest>,1>
::DestroyObject(TReferenceControllerWithDeleter<FCachedFileRequest,SharedPointerInternals::DefaultDeleter<FCachedFileRequest>,1>
                *this)

{
  FCachedFileRequest *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FCachedFileRequest *)0x0) {
    pFVar2 = (pFVar1->RequestData).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x18);
    return;
  }
  return;
}

// DestroyObject @ 146ca9080

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FLargeMemoryReader,SharedPointerInternals::DefaultDeleter<FLargeMemoryReader>,1>
::DestroyObject(TReferenceControllerWithDeleter<FLargeMemoryReader,SharedPointerInternals::DefaultDeleter<FLargeMemoryReader>,1>
                *this)

{
  FLargeMemoryReader *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FLargeMemoryReader *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146ca9091. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

