// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenColorIO
// Functions: 1

// DestroyObject @ 14d76f1c0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FOpenColorIODisplayExtension,SharedPointerInternals::DefaultDeleter<FOpenColorIODisplayExtension>,1>
::DestroyObject(TReferenceControllerWithDeleter<FOpenColorIODisplayExtension,SharedPointerInternals::DefaultDeleter<FOpenColorIODisplayExtension>,1>
                *this)

{
  FOpenColorIODisplayExtension *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FOpenColorIODisplayExtension *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d76f1d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0xb8))(pFVar1,1);
    return;
  }
  return;
}

