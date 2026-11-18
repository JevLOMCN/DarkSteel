// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CookOnTheFly
// Functions: 1

// DestroyObject @ 14311a520

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<UE::Cook::ICookOnTheFlyServerConnection,SharedPointerInternals::DefaultDeleter<UE::Cook::ICookOnTheFlyServerConnection>,1>
::DestroyObject(TReferenceControllerWithDeleter<UE::Cook::ICookOnTheFlyServerConnection,SharedPointerInternals::DefaultDeleter<UE::Cook::ICookOnTheFlyServerConnection>,1>
                *this)

{
  ICookOnTheFlyServerConnection *pIVar1;
  
  pIVar1 = this->Object;
  if (pIVar1 != (ICookOnTheFlyServerConnection *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014311a531. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pIVar1)(pIVar1,1);
    return;
  }
  return;
}

