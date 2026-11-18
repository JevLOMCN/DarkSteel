// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 1

// DestroyObject @ 1494cc7a0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FComputeViewExtension,SharedPointerInternals::DefaultDeleter<FComputeViewExtension>,1>
::DestroyObject(TReferenceControllerWithDeleter<FComputeViewExtension,SharedPointerInternals::DefaultDeleter<FComputeViewExtension>,1>
                *this)

{
  FComputeViewExtension *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FComputeViewExtension *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001494cc7b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0xb8))(pFVar1,1);
    return;
  }
  return;
}

