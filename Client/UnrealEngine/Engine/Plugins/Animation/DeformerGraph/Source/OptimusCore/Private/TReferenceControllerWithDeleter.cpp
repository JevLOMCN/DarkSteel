// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 1

// DestroyObject @ 14e1a3ec0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FOptimusAction,SharedPointerInternals::DefaultDeleter<FOptimusAction>,1>
::DestroyObject(TReferenceControllerWithDeleter<FOptimusAction,SharedPointerInternals::DefaultDeleter<FOptimusAction>,1>
                *this)

{
  FOptimusAction *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FOptimusAction *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014e1a3ed1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

