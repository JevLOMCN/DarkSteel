// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 1

// operator= @ 14cad2fe0

TObjectPtr<UTransformProxy> * __thiscall
TObjectPtr<UTransformProxy>::operator=
          (TObjectPtr<UTransformProxy> *this,TObjectPtr<UTransformProxy> *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     ((param_1->field0_0x0).DebugPtr != (UTransformProxy *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)(param_1->field0_0x0).DebugPtr);
  }
  this->field0_0x0 = param_1->field0_0x0;
  return this;
}

