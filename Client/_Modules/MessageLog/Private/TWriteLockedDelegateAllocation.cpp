// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MessageLog
// Functions: 1

// TWriteLockedDelegateAllocation<FNotThreadSafeDelegateMode> @ 142bc6b00

TWriteLockedDelegateAllocation<FNotThreadSafeDelegateMode> * __thiscall
TWriteLockedDelegateAllocation<FNotThreadSafeDelegateMode>::
TWriteLockedDelegateAllocation<FNotThreadSafeDelegateMode>
          (TWriteLockedDelegateAllocation<FNotThreadSafeDelegateMode> *this,
          TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&this->WriteScope);
  this->Allocation = (FDelegateAllocation *)&param_1->field_0x8;
  return this;
}

