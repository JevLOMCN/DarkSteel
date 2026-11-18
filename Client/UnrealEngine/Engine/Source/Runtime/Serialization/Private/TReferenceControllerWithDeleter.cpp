// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Serialization
// Functions: 1

// DestroyObject @ 148ba6b60

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>,SharedPointerInternals::DefaultDeleter<TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>,SharedPointerInternals::DefaultDeleter<TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>_>,1>
                *this)

{
  TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ba6b71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

