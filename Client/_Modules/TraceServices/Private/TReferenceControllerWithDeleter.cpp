// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 1

// DestroyObject @ 14d44f700

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TraceServices::IUntypedTableReader,SharedPointerInternals::DefaultDeleter<TraceServices::IUntypedTableReader>,1>
::DestroyObject(TReferenceControllerWithDeleter<TraceServices::IUntypedTableReader,SharedPointerInternals::DefaultDeleter<TraceServices::IUntypedTableReader>,1>
                *this)

{
  IUntypedTableReader *pIVar1;
  
  pIVar1 = this->Object;
  if (pIVar1 != (IUntypedTableReader *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d44f711. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pIVar1)(pIVar1,1);
    return;
  }
  return;
}

