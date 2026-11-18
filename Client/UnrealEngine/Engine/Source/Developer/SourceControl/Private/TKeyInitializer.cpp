// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SourceControl
// Functions: 1

// operator<unsigned___int64,TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>_>_TTuple<unsigned___int64,TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>_> @ 146af65f0

TTuple<unsigned___int64,TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>_>
* __thiscall
TKeyInitializer<unsigned___int64_const_&>::
operator<unsigned___int64,TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>_>_TTuple<unsigned___int64,TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>_>
          (TKeyInitializer<unsigned___int64_const_&> *this,
          TTuple<unsigned___int64,TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  ulonglong local_28;
  FDestructionSentinel local_20;
  
  local_28 = 0;
  local_38 = (undefined1  [8])0x0;
  local_30.Data = (FScriptContainerElement *)0x0;
  *(ulong64 *)__return_storage_ptr__ = *this->Key;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&__return_storage_ptr__->field_0x8,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
             (FWriteAccessScope *)&local_20);
  if (((int)local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    local_28 = local_28 & 0xffffffff00000000;
  }
  if (local_20.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_38);
  return __return_storage_ptr__;
}

