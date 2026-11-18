// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 1

// Unbind @ 14a6fdba0

void __thiscall
TScriptDelegate<FNotThreadSafeDelegateMode>::Unbind
          (TScriptDelegate<FNotThreadSafeDelegateMode> *this)

{
  undefined8 local_res8 [4];
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_28);
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&this->Object,(FObjectPtr)local_res8);
  local_res8[0] = 0;
  (this->FunctionName).ComparisonIndex = 0;
  (this->FunctionName).Number = 0;
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

