// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_WorldUtils
// Functions: 1

// DestroyObject @ 14a032ef0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FWN_ViewExtension,SharedPointerInternals::DefaultDeleter<FWN_ViewExtension>,1>
::DestroyObject(TReferenceControllerWithDeleter<FWN_ViewExtension,SharedPointerInternals::DefaultDeleter<FWN_ViewExtension>,1>
                *this)

{
  FWN_ViewExtension *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FWN_ViewExtension *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014a032f01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0xb8))(pFVar1,1);
    return;
  }
  return;
}

