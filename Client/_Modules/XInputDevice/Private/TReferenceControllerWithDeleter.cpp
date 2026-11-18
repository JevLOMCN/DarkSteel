// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XInputDevice
// Functions: 1

// DestroyObject @ 14f12d0b0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<XInputInterface,SharedPointerInternals::DefaultDeleter<XInputInterface>,1>
::DestroyObject(TReferenceControllerWithDeleter<XInputInterface,SharedPointerInternals::DefaultDeleter<XInputInterface>,1>
                *this)

{
  XInputInterface *pXVar1;
  
  pXVar1 = this->Object;
  if (pXVar1 != (XInputInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f12d0c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pXVar1->_padding_)(pXVar1,1);
    return;
  }
  return;
}

