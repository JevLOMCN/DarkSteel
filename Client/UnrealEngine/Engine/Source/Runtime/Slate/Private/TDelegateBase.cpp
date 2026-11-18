// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// TDelegateBase<FNotThreadSafeNotCheckedDelegateMode><FNotThreadSafeDelegateMode> @ 1426e6710

TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> * __thiscall
TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>::
TDelegateBase<FNotThreadSafeNotCheckedDelegateMode><FNotThreadSafeDelegateMode>
          (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *this,
          TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  FDestructionSentinel local_28;
  
  *(undefined8 *)this = 0;
  *(undefined4 *)&this->field_0x8 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  *(undefined8 *)this = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)&param_1->field_0x8 = 0;
  *(undefined4 *)&this->field_0x8 = *(undefined4 *)&param_1->field_0x10;
  *(undefined4 *)&param_1->field_0x10 = 0;
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

