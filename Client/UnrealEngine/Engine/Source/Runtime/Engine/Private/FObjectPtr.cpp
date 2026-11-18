// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// operator= @ 1479aa150

FObjectPtr * __thiscall FObjectPtr::operator=(FObjectPtr *this,UObject *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
    (this->field0_0x0).Handle = param_1;
    return this;
  }
  (this->field0_0x0).Handle = param_1;
  return this;
}

