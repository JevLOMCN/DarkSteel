// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Sockets
// Functions: 1

// DestroyObject @ 14310e780

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FInternetAddrBSD,SharedPointerInternals::DefaultDeleter<FInternetAddrBSD>,1>
::DestroyObject(TReferenceControllerWithDeleter<FInternetAddrBSD,SharedPointerInternals::DefaultDeleter<FInternetAddrBSD>,1>
                *this)

{
  FInternetAddrBSD *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FInternetAddrBSD *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014310e791. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

