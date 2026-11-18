// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// operator= @ 14b8b3250

TObjectPtr<UInputMappingContext> * __thiscall
TObjectPtr<UInputMappingContext>::operator=
          (TObjectPtr<UInputMappingContext> *this,TObjectPtr<UInputMappingContext> *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     ((param_1->field0_0x0).DebugPtr != (UInputMappingContext *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)(param_1->field0_0x0).DebugPtr);
  }
  this->field0_0x0 = param_1->field0_0x0;
  return this;
}

