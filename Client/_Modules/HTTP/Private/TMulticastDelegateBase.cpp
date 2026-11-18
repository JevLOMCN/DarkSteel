// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 1

// Clear @ 143158140

void __thiscall
TMulticastDelegateBase<FDefaultDelegateUserPolicy>::Clear
          (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this)

{
  int iVar1;
  FScriptContainerElement *this_00;
  FScriptContainerElement *pFVar2;
  undefined1 local_res8 [8];
  FDestructionSentinel local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  iVar1 = (this->InvocationList).ArrayNum;
  this_00 = (this->InvocationList).AllocatorInstance.Data;
  pFVar2 = this_00 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->InvocationList).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar2) break;
    if ((*(int *)&this_00[8].field_0x0 != 0) &&
       (*(undefined8 **)&this_00->field_0x0 != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)&this_00->field_0x0)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)this_00,0,0,0x10);
      *(undefined4 *)&this_00[8].field_0x0 = 0;
    }
    this_00 = this_00 + 0x10;
  }
  CompactInvocationList(this,false);
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

