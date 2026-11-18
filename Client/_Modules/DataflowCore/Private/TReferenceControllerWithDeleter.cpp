// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 1

// DestroyObject @ 144444f90

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDataflowNode,SharedPointerInternals::DefaultDeleter<FDataflowNode>,1>
::DestroyObject(TReferenceControllerWithDeleter<FDataflowNode,SharedPointerInternals::DefaultDeleter<FDataflowNode>,1>
                *this)

{
  FDataflowNode *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FDataflowNode *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144444fa1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

