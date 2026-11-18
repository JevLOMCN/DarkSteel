// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamingPauseRendering
// Functions: 1

// DestroyObject @ 146c84000

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FBackgroundView,SharedPointerInternals::DefaultDeleter<FBackgroundView>,1>
::DestroyObject(TReferenceControllerWithDeleter<FBackgroundView,SharedPointerInternals::DefaultDeleter<FBackgroundView>,1>
                *this)

{
  FBackgroundView *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FBackgroundView *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146c84011. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

