// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 1

// DestroyObject @ 142a67df0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<IMappedFileHandle,SharedPointerInternals::DefaultDeleter<IMappedFileHandle>,1>
::DestroyObject(TReferenceControllerWithDeleter<IMappedFileHandle,SharedPointerInternals::DefaultDeleter<IMappedFileHandle>,1>
                *this)

{
  IMappedFileHandle *pIVar1;
  
  pIVar1 = this->Object;
  if (pIVar1 != (IMappedFileHandle *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142a67e01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pIVar1->_padding_)(pIVar1,1);
    return;
  }
  return;
}

