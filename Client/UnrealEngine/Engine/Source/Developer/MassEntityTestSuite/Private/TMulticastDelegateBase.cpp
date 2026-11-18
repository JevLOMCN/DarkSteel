// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// ~TMulticastDelegateBase<FDefaultDelegateUserPolicy> @ 1470f7ad0

void __thiscall
TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
~TMulticastDelegateBase<FDefaultDelegateUserPolicy>
          (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             (this->InvocationList).AllocatorInstance.Data,(this->InvocationList).ArrayNum);
  pFVar1 = (this->InvocationList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

