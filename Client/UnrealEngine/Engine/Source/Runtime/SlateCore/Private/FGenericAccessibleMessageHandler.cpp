// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// RaiseEvent @ 1425f6030

void __thiscall
FGenericAccessibleMessageHandler::RaiseEvent
          (FGenericAccessibleMessageHandler *this,FAccessibleEventArgs *param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->AccessibleEventDelegate,&local_28);
  if ((*(int *)&(this->AccessibleEventDelegate).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->AccessibleEventDelegate).field_0x8, plVar1 != (longlong *)0x0))
  {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

