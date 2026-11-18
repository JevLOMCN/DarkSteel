// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 1

// DestroyObject @ 148cc1a50

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TJsonReader<char8_t>,SharedPointerInternals::DefaultDeleter<TJsonReader<char8_t>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TJsonReader<char8_t>,SharedPointerInternals::DefaultDeleter<TJsonReader<char8_t>_>,1>
                *this)

{
  TJsonReader<char8_t> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TJsonReader<char8_t> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cc1a61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

