// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LocalizationService
// Functions: 1

// DestroyObject @ 146b312c0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FConnectToProvider,SharedPointerInternals::DefaultDeleter<FConnectToProvider>,1>
::DestroyObject(TReferenceControllerWithDeleter<FConnectToProvider,SharedPointerInternals::DefaultDeleter<FConnectToProvider>,1>
                *this)

{
  FConnectToProvider *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FConnectToProvider *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146b312d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

