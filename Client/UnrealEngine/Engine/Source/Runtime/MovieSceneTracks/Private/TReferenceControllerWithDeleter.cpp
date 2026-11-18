// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// DestroyObject @ 146659ee0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FStructOnScope,SharedPointerInternals::DefaultDeleter<FStructOnScope>,1>
::DestroyObject(TReferenceControllerWithDeleter<FStructOnScope,SharedPointerInternals::DefaultDeleter<FStructOnScope>,1>
                *this)

{
  FStructOnScope *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FStructOnScope *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146659ef1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x50))(pFVar1,1);
    return;
  }
  return;
}

