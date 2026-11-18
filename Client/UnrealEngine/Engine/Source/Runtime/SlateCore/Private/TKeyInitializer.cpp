// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 2

// operator<SWidget_const_*,TAttribute<FText>_>_TTuple<SWidget_const_*,TAttribute<FText>_> @ 1425b09b0

TTuple<SWidget_const_*,TAttribute<FText>_> * __thiscall
TKeyInitializer<SWidget_const_*_const_&>::
operator<SWidget_const_*,TAttribute<FText>_>_TTuple<SWidget_const_*,TAttribute<FText>_>
          (TKeyInitializer<SWidget_const_*_const_&> *this,
          TTuple<SWidget_const_*,TAttribute<FText>_> *__return_storage_ptr__)

{
  FDestructionSentinel local_58;
  FText local_40;
  undefined1 local_30;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  FText::FText(&local_40);
  local_30 = 0;
  local_18 = 0;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  *(SWidget **)__return_storage_ptr__ = *this->Key;
  FText::FText((FText *)&__return_storage_ptr__->field_0x8,&local_40);
  __return_storage_ptr__->field_0x18 = local_30;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&__return_storage_ptr__->field_0x20,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_58);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  if (local_40.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator<FName,FTrackedWidgetsChangedEvent>_TTuple<FName,FTrackedWidgetsChangedEvent> @ 1425b0ab0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<FName,FTrackedWidgetsChangedEvent> * __thiscall
TKeyInitializer<FName_const_&>::
operator<FName,FTrackedWidgetsChangedEvent>_TTuple<FName,FTrackedWidgetsChangedEvent>
          (TKeyInitializer<FName_const_&> *this,
          TTuple<FName,FTrackedWidgetsChangedEvent> *__return_storage_ptr__)

{
  uint uVar1;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> local_28;
  
  local_28._padding_ = 0;
  local_28.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.InvocationList._8_8_ = ___xmm_00000000000000020000000000000000;
  local_28._24_8_ = _UNK_150631d48;
  uVar1 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar1;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 2;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::operator=
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &__return_storage_ptr__->field_0x8,&local_28);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             local_28.InvocationList.AllocatorInstance.Data,local_28.InvocationList.ArrayNum);
  if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
      local_28.InvocationList.AllocatorInstance.Data !=
      (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_28.InvocationList.AllocatorInstance.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&local_28);
  return __return_storage_ptr__;
}

