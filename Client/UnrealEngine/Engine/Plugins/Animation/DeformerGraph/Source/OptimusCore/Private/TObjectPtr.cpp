// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 1

// TObjectPtr<UComputeDataInterface> @ 14e14ca30

TObjectPtr<UComputeDataInterface> * __thiscall
TObjectPtr<UComputeDataInterface>::TObjectPtr<UComputeDataInterface>
          (TObjectPtr<UComputeDataInterface> *this,TObjectPtr<UComputeDataInterface> *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = (UObject *)(param_1->field0_0x0).DebugPtr;
  (this->field0_0x0).DebugPtr = (UComputeDataInterface *)pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  return this;
}

