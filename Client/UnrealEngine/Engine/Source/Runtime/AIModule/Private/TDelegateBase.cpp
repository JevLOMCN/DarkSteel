// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 1

// GetUObject @ 146f5a9a0

UObject * __thiscall
TDelegateBase<FNotThreadSafeDelegateMode>::GetUObject
          (TDelegateBase<FNotThreadSafeDelegateMode> *this)

{
  UObject *pUVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_28);
  if ((*(int *)&this->field_0x10 != 0) && (*(longlong **)&this->field_0x8 != (longlong *)0x0)) {
    pUVar1 = (UObject *)(**(code **)(**(longlong **)&this->field_0x8 + 0x10))();
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    return pUVar1;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (UObject *)0x0;
}

