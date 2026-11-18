// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKit
// Functions: 1

// DestroyObject @ 14cfd4ad0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FAppleARKitXRCamera,SharedPointerInternals::DefaultDeleter<FAppleARKitXRCamera>,1>
::DestroyObject(TReferenceControllerWithDeleter<FAppleARKitXRCamera,SharedPointerInternals::DefaultDeleter<FAppleARKitXRCamera>,1>
                *this)

{
  FAppleARKitXRCamera *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FAppleARKitXRCamera *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cfd4ae6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0xb8))(&pFVar1->_padding_,1);
    return;
  }
  return;
}

