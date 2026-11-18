// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// IsBound @ 1467a59d0

bool __thiscall
TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this)

{
  int iVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_28);
  iVar1 = (this->InvocationList).ArrayNum;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return 0 < iVar1;
}

