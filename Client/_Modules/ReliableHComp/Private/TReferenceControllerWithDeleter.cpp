// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ReliableHComp
// Functions: 1

// DestroyObject @ 14463c8b0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<ReliabilityHandlerComponent,SharedPointerInternals::DefaultDeleter<ReliabilityHandlerComponent>,1>
::DestroyObject(TReferenceControllerWithDeleter<ReliabilityHandlerComponent,SharedPointerInternals::DefaultDeleter<ReliabilityHandlerComponent>,1>
                *this)

{
  ReliabilityHandlerComponent *pRVar1;
  
  pRVar1 = this->Object;
  if (pRVar1 != (ReliabilityHandlerComponent *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014463c8c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pRVar1->_padding_)(pRVar1,1);
    return;
  }
  return;
}

