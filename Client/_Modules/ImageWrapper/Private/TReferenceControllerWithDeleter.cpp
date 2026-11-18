// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWrapper
// Functions: 2

// DestroyObject @ 142689f80

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FBmpImageWrapper,SharedPointerInternals::DefaultDeleter<FBmpImageWrapper>,1>
::DestroyObject(TReferenceControllerWithDeleter<FBmpImageWrapper,SharedPointerInternals::DefaultDeleter<FBmpImageWrapper>,1>
                *this)

{
  FBmpImageWrapper *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FBmpImageWrapper *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142689f91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x78))(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 142689fa0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FPngImageWrapper,SharedPointerInternals::DefaultDeleter<FPngImageWrapper>,1>
::DestroyObject(TReferenceControllerWithDeleter<FPngImageWrapper,SharedPointerInternals::DefaultDeleter<FPngImageWrapper>,1>
                *this)

{
  FPngImageWrapper *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FPngImageWrapper *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142689fb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x78))(pFVar1,1);
    return;
  }
  return;
}

