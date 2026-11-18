// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderDocPlugin
// Functions: 1

// DestroyObject @ 14e2c9590

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<IInputDevice,SharedPointerInternals::DefaultDeleter<IInputDevice>,1>
::DestroyObject(TReferenceControllerWithDeleter<IInputDevice,SharedPointerInternals::DefaultDeleter<IInputDevice>,1>
                *this)

{
  IInputDevice *pIVar1;
  
  pIVar1 = this->Object;
  if (pIVar1 != (IInputDevice *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014e2c95a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pIVar1)(pIVar1,1);
    return;
  }
  return;
}

