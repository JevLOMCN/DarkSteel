// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// Add @ 14ba937a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::Add
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this,
          TScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  <lambda_1> local_res8 [8];
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_38;
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FReadAccessScope *)&local_28);
  local_38.Object = param_1->Object;
  local_38.FunctionName = param_1->FunctionName;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_28);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            (&this->InvocationList,local_res8,Default);
  AddInternal(this,&local_38);
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

