// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// TObjectPtr<UMassProcessor> @ 1470f1fb0

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

TObjectPtr<UMassProcessor> * __thiscall
TObjectPtr<UMassProcessor>::TObjectPtr<UMassProcessor>
          (TObjectPtr<UMassProcessor> *this,TObjectPtr<UMassProcessor> *param_1)

{
  UMassProcessor *pUVar1;
  
  pUVar1 = (param_1->field0_0x0).DebugPtr;
  (this->field0_0x0).DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UMassProcessor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return this;
}

