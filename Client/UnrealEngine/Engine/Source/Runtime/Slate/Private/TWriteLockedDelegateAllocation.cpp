// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// ~TWriteLockedDelegateAllocation<FNotThreadSafeDelegateMode> @ 1426ffad0

void __thiscall
TWriteLockedDelegateAllocation<FNotThreadSafeDelegateMode>::
~TWriteLockedDelegateAllocation<FNotThreadSafeDelegateMode>
          (TWriteLockedDelegateAllocation<FNotThreadSafeDelegateMode> *this)

{
  if ((this->WriteScope).DestructionSentinel.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((this->WriteScope).DestructionSentinel.Accessor,(FDestructionSentinel *)this);
    return;
  }
  return;
}

