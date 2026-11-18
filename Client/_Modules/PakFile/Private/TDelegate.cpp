// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 1

// Execute @ 142a6c580

void __thiscall
TDelegate<void___cdecl(unsigned_char_*),FDefaultDelegateUserPolicy>::Execute
          (TDelegate<void___cdecl(unsigned_char_*),FDefaultDelegateUserPolicy> *this,uchar *param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_28);
  if (*(int *)&this->field_0x10 == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = *(longlong **)&this->field_0x8;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

