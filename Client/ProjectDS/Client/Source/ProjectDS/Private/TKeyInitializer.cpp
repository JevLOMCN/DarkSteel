// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 31

// operator<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>_TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_> @ 14b793160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>
* __thiscall
TKeyInitializer<enum_EDS_KeyActionType_const_&>::
operator<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>_TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>
          (void *this,
          TTuple<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  undefined1 auStack_78 [32];
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = 0;
  local_58.InvocationList.ArrayMax = 0;
  local_58.CompactionThreshold = 0;
  local_58.InvocationListLockCount = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&local_58,4000);
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = ___xmm_00000000000000020000000000000000;
  local_58.InvocationList.ArrayMax = _UNK_150631d44;
  local_58.CompactionThreshold = _UNK_150631d48;
  local_58.InvocationListLockCount = _UNK_150631d4c;
  *(undefined4 *)__return_storage_ptr__ = **(undefined4 **)this;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&__return_storage_ptr__->field_0x8,4000)
  ;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::operator=
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             &__return_storage_ptr__->field_0x8,&local_58);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             local_58.InvocationList.AllocatorInstance.Data,local_58.InvocationList.ArrayNum);
  if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
      local_58.InvocationList.AllocatorInstance.Data !=
      (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_58.InvocationList.AllocatorInstance.Data);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&local_58);
  return __return_storage_ptr__;
}

// operator<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>_>_TTuple<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>_> @ 14b793250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>_>
* __thiscall
TKeyInitializer<unsigned___int64_&>::
operator<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>_>_TTuple<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>_>
          (TKeyInitializer<unsigned___int64_&> *this,
          TTuple<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>_>
          *__return_storage_ptr__)

{
  int iVar1;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  void *local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_30 = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = (void *)0x0;
  *(ulong64 *)__return_storage_ptr__ = *this->Key;
  TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>::
  TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>
            ((TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>
              *)&__return_storage_ptr__->field_0x8,
             (TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<unsigned___int64_const_,TMulticastDelegate<void___cdecl(enum_EDS_TamingState),FDefaultTSDelegateUserPolicy>_>_TTuple<unsigned___int64_const_,TMulticastDelegate<void___cdecl(enum_EDS_TamingState),FDefaultTSDelegateUserPolicy>_> @ 14b7cac00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<unsigned___int64_const_,TMulticastDelegate<void___cdecl(EDS_TamingState),FDefaultTSDelegateUserPolicy>_>
* __thiscall
TKeyInitializer<unsigned___int64_const_&>::
operator<unsigned___int64_const_,TMulticastDelegate<void___cdecl(enum_EDS_TamingState),FDefaultTSDelegateUserPolicy>_>_TTuple<unsigned___int64_const_,TMulticastDelegate<void___cdecl(enum_EDS_TamingState),FDefaultTSDelegateUserPolicy>_>
          (TKeyInitializer<unsigned___int64_const_&> *this,
          TTuple<unsigned___int64_const_,TMulticastDelegate<void___cdecl(EDS_TamingState),FDefaultTSDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  undefined1 auStack_78 [32];
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = 0;
  local_58.InvocationList.ArrayMax = 0;
  local_58.CompactionThreshold = 0;
  local_58.InvocationListLockCount = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&local_58,4000);
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = ___xmm_00000000000000020000000000000000;
  local_58.InvocationList.ArrayMax = _UNK_150631d44;
  local_58.CompactionThreshold = _UNK_150631d48;
  local_58.InvocationListLockCount = _UNK_150631d4c;
  *(ulong64 *)__return_storage_ptr__ = *this->Key;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&__return_storage_ptr__->field_0x8,4000)
  ;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::operator=
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             &__return_storage_ptr__->field_0x8,&local_58);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             local_58.InvocationList.AllocatorInstance.Data,local_58.InvocationList.ArrayNum);
  if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
      local_58.InvocationList.AllocatorInstance.Data !=
      (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_58.InvocationList.AllocatorInstance.Data);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&local_58);
  return __return_storage_ptr__;
}

// operator<enum_EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>_>_TTuple<enum_EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>_> @ 14b8198f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>_>
* __thiscall
TKeyInitializer<enum_EDS_MountStep_const_&>::
operator<enum_EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>_>_TTuple<enum_EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>_>
          (void *this,
          TTuple<EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  undefined1 auStack_78 [32];
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = 0;
  local_58.InvocationList.ArrayMax = 0;
  local_58.CompactionThreshold = 0;
  local_58.InvocationListLockCount = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&local_58,4000);
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = ___xmm_00000000000000020000000000000000;
  local_58.InvocationList.ArrayMax = _UNK_150631d44;
  local_58.CompactionThreshold = _UNK_150631d48;
  local_58.InvocationListLockCount = _UNK_150631d4c;
  *(undefined1 *)__return_storage_ptr__ = **(undefined1 **)this;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&__return_storage_ptr__->field_0x8,4000)
  ;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::operator=
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             &__return_storage_ptr__->field_0x8,&local_58);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             local_58.InvocationList.AllocatorInstance.Data,local_58.InvocationList.ArrayNum);
  if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
      local_58.InvocationList.AllocatorInstance.Data !=
      (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_58.InvocationList.AllocatorInstance.Data);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&local_58);
  return __return_storage_ptr__;
}

// operator<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>_>_TTuple<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>_> @ 14b85ba90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>_>
* __thiscall
TKeyInitializer<unsigned___int64_const_&>::
operator<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>_>_TTuple<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>_>
          (TKeyInitializer<unsigned___int64_const_&> *this,
          TTuple<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  undefined1 auStack_78 [32];
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = 0;
  local_58.InvocationList.ArrayMax = 0;
  local_58.CompactionThreshold = 0;
  local_58.InvocationListLockCount = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&local_58,4000);
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = ___xmm_00000000000000020000000000000000;
  local_58.InvocationList.ArrayMax = _UNK_150631d44;
  local_58.CompactionThreshold = _UNK_150631d48;
  local_58.InvocationListLockCount = _UNK_150631d4c;
  *(ulong64 *)__return_storage_ptr__ = *this->Key;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&__return_storage_ptr__->field_0x8,4000)
  ;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::operator=
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             &__return_storage_ptr__->field_0x8,&local_58);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             local_58.InvocationList.AllocatorInstance.Data,local_58.InvocationList.ArrayNum);
  if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
      local_58.InvocationList.AllocatorInstance.Data !=
      (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_58.InvocationList.AllocatorInstance.Data);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&local_58);
  return __return_storage_ptr__;
}

// operator<enum_EDS_StatusType_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>_TTuple<enum_EDS_StatusType_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_> @ 14ba24920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<EDS_StatusType_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_> *
__thiscall
TKeyInitializer<enum_EDS_StatusType_const_&>::
operator<enum_EDS_StatusType_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>_TTuple<enum_EDS_StatusType_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>
          (void *this,
          TTuple<EDS_StatusType_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  undefined1 auStack_78 [32];
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = 0;
  local_58.InvocationList.ArrayMax = 0;
  local_58.CompactionThreshold = 0;
  local_58.InvocationListLockCount = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&local_58,4000);
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = ___xmm_00000000000000020000000000000000;
  local_58.InvocationList.ArrayMax = _UNK_150631d44;
  local_58.CompactionThreshold = _UNK_150631d48;
  local_58.InvocationListLockCount = _UNK_150631d4c;
  *(undefined4 *)__return_storage_ptr__ = **(undefined4 **)this;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&__return_storage_ptr__->field_0x8,4000)
  ;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::operator=
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             &__return_storage_ptr__->field_0x8,&local_58);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             local_58.InvocationList.AllocatorInstance.Data,local_58.InvocationList.ArrayNum);
  if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
      local_58.InvocationList.AllocatorInstance.Data !=
      (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_58.InvocationList.AllocatorInstance.Data);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&local_58);
  return __return_storage_ptr__;
}

// operator<enum_EDS_CommonPopupContext,TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>_>_TTuple<enum_EDS_CommonPopupContext,TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>_> @ 14bcd0820

TTuple<EDS_CommonPopupContext,TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>_>
* __thiscall
TKeyInitializer<enum_EDS_CommonPopupContext_const_&>::
operator<enum_EDS_CommonPopupContext,TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>_>_TTuple<enum_EDS_CommonPopupContext,TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>_>
          (void *this,
          TTuple<EDS_CommonPopupContext,TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  ulonglong local_28;
  FDestructionSentinel local_20;
  
  local_28 = 0;
  local_38 = (undefined1  [8])0x0;
  local_30.Data = (FScriptContainerElement *)0x0;
  *(undefined1 *)__return_storage_ptr__ = **(undefined1 **)this;
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

// operator<enum_EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>_TTuple<enum_EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_> @ 14bd2adc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>
* __thiscall
TKeyInitializer<enum_EDS_ItemBasketType_const_&>::
operator<enum_EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>_TTuple<enum_EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>
          (void *this,
          TTuple<EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  undefined1 auStack_78 [32];
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = 0;
  local_58.InvocationList.ArrayMax = 0;
  local_58.CompactionThreshold = 0;
  local_58.InvocationListLockCount = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&local_58,4000);
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = ___xmm_00000000000000020000000000000000;
  local_58.InvocationList.ArrayMax = _UNK_150631d44;
  local_58.CompactionThreshold = _UNK_150631d48;
  local_58.InvocationListLockCount = _UNK_150631d4c;
  *(undefined4 *)__return_storage_ptr__ = **(undefined4 **)this;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&__return_storage_ptr__->field_0x8,4000)
  ;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::operator=
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             &__return_storage_ptr__->field_0x8,&local_58);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             local_58.InvocationList.AllocatorInstance.Data,local_58.InvocationList.ArrayNum);
  if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
      local_58.InvocationList.AllocatorInstance.Data !=
      (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_58.InvocationList.AllocatorInstance.Data);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&local_58);
  return __return_storage_ptr__;
}

// operator<enum_EDS_ViewModelTemplateKey_const_,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>_TTuple<enum_EDS_ViewModelTemplateKey_const_,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_> @ 14bd2aeb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<EDS_ViewModelTemplateKey_const_,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>
* __thiscall
TKeyInitializer<enum_EDS_ViewModelTemplateKey_const_&>::
operator<enum_EDS_ViewModelTemplateKey_const_,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>_TTuple<enum_EDS_ViewModelTemplateKey_const_,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>
          (void *this,
          TTuple<EDS_ViewModelTemplateKey_const_,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  undefined1 auStack_78 [32];
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = 0;
  local_58.InvocationList.ArrayMax = 0;
  local_58.CompactionThreshold = 0;
  local_58.InvocationListLockCount = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&local_58,4000);
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = ___xmm_00000000000000020000000000000000;
  local_58.InvocationList.ArrayMax = _UNK_150631d44;
  local_58.CompactionThreshold = _UNK_150631d48;
  local_58.InvocationListLockCount = _UNK_150631d4c;
  *(undefined4 *)__return_storage_ptr__ = **(undefined4 **)this;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&__return_storage_ptr__->field_0x8,4000)
  ;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::operator=
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             &__return_storage_ptr__->field_0x8,&local_58);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             local_58.InvocationList.AllocatorInstance.Data,local_58.InvocationList.ArrayNum);
  if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
      local_58.InvocationList.AllocatorInstance.Data !=
      (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_58.InvocationList.AllocatorInstance.Data);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&local_58);
  return __return_storage_ptr__;
}

// operator<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>_TTuple<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_> @ 14bd2afa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_> *
__thiscall
TKeyInitializer<__int64_const_&>::
operator<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>_TTuple<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>
          (TKeyInitializer<__int64_const_&> *this,
          TTuple<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  undefined1 auStack_78 [32];
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = 0;
  local_58.InvocationList.ArrayMax = 0;
  local_58.CompactionThreshold = 0;
  local_58.InvocationListLockCount = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&local_58,4000);
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = ___xmm_00000000000000020000000000000000;
  local_58.InvocationList.ArrayMax = _UNK_150631d44;
  local_58.CompactionThreshold = _UNK_150631d48;
  local_58.InvocationListLockCount = _UNK_150631d4c;
  *(long64 *)__return_storage_ptr__ = *this->Key;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&__return_storage_ptr__->field_0x8,4000)
  ;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::operator=
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             &__return_storage_ptr__->field_0x8,&local_58);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             local_58.InvocationList.AllocatorInstance.Data,local_58.InvocationList.ArrayNum);
  if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
      local_58.InvocationList.AllocatorInstance.Data !=
      (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_58.InvocationList.AllocatorInstance.Data);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&local_58);
  return __return_storage_ptr__;
}

// operator<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>_TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_> @ 14bd2b090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>
* __thiscall
TKeyInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&>::
operator<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>_TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>
          (TKeyInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&> *this,
          TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  FWeakObjectPtr FVar1;
  undefined1 auStack_78 [32];
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = 0;
  local_58.InvocationList.ArrayMax = 0;
  local_58.CompactionThreshold = 0;
  local_58.InvocationListLockCount = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&local_58,4000);
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = ___xmm_00000000000000020000000000000000;
  local_58.InvocationList.ArrayMax = _UNK_150631d44;
  local_58.CompactionThreshold = _UNK_150631d48;
  local_58.InvocationListLockCount = _UNK_150631d4c;
  FVar1 = this->Key->WeakPtr;
  *(int *)&__return_storage_ptr__->field_0x0 = FVar1.ObjectIndex;
  *(int *)&__return_storage_ptr__->field_0x4 = FVar1.ObjectSerialNumber;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&__return_storage_ptr__->field_0x8,4000)
  ;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::operator=
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             &__return_storage_ptr__->field_0x8,&local_58);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             local_58.InvocationList.AllocatorInstance.Data,local_58.InvocationList.ArrayNum);
  if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
      local_58.InvocationList.AllocatorInstance.Data !=
      (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_58.InvocationList.AllocatorInstance.Data);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&local_58);
  return __return_storage_ptr__;
}

// operator<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>_TTuple<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_> @ 14bd945c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>
* __thiscall
TKeyInitializer<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_&>::
operator<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>_TTuple<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>
          (TKeyInitializer<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_&> *this,
          TTuple<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  FWeakObjectPtr FVar1;
  undefined1 auStack_78 [32];
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = 0;
  local_58.InvocationList.ArrayMax = 0;
  local_58.CompactionThreshold = 0;
  local_58.InvocationListLockCount = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&local_58,4000);
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = ___xmm_00000000000000020000000000000000;
  local_58.InvocationList.ArrayMax = _UNK_150631d44;
  local_58.CompactionThreshold = _UNK_150631d48;
  local_58.InvocationListLockCount = _UNK_150631d4c;
  FVar1 = this->Key->WeakPtr;
  *(int *)&__return_storage_ptr__->field_0x0 = FVar1.ObjectIndex;
  *(int *)&__return_storage_ptr__->field_0x4 = FVar1.ObjectSerialNumber;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&__return_storage_ptr__->field_0x8,4000)
  ;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::operator=
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             &__return_storage_ptr__->field_0x8,&local_58);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             local_58.InvocationList.AllocatorInstance.Data,local_58.InvocationList.ArrayNum);
  if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
      local_58.InvocationList.AllocatorInstance.Data !=
      (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_58.InvocationList.AllocatorInstance.Data);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&local_58);
  return __return_storage_ptr__;
}

// operator<enum_EDS_EquipSlotType_const_,TMulticastDelegate<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>_>_TTuple<enum_EDS_EquipSlotType_const_,TMulticastDelegate<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>_> @ 14bd946b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<EDS_EquipSlotType_const_,TMulticastDelegate<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>_>
* __thiscall
TKeyInitializer<enum_EDS_EquipSlotType_const_&>::
operator<enum_EDS_EquipSlotType_const_,TMulticastDelegate<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>_>_TTuple<enum_EDS_EquipSlotType_const_,TMulticastDelegate<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>_>
          (void *this,
          TTuple<EDS_EquipSlotType_const_,TMulticastDelegate<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  undefined1 auStack_78 [32];
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = 0;
  local_58.InvocationList.ArrayMax = 0;
  local_58.CompactionThreshold = 0;
  local_58.InvocationListLockCount = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&local_58,4000);
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = ___xmm_00000000000000020000000000000000;
  local_58.InvocationList.ArrayMax = _UNK_150631d44;
  local_58.CompactionThreshold = _UNK_150631d48;
  local_58.InvocationListLockCount = _UNK_150631d4c;
  *(undefined4 *)__return_storage_ptr__ = **(undefined4 **)this;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&__return_storage_ptr__->field_0x8,4000)
  ;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::operator=
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             &__return_storage_ptr__->field_0x8,&local_58);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             local_58.InvocationList.AllocatorInstance.Data,local_58.InvocationList.ArrayNum);
  if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
      local_58.InvocationList.AllocatorInstance.Data !=
      (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_58.InvocationList.AllocatorInstance.Data);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&local_58);
  return __return_storage_ptr__;
}

// operator<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>_TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_> @ 14bd947a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>
* __thiscall
TKeyInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&>::
operator<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>_TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>
          (TKeyInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&> *this,
          TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  FWeakObjectPtr FVar1;
  undefined1 auStack_78 [32];
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = 0;
  local_58.InvocationList.ArrayMax = 0;
  local_58.CompactionThreshold = 0;
  local_58.InvocationListLockCount = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&local_58,4000);
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = ___xmm_00000000000000020000000000000000;
  local_58.InvocationList.ArrayMax = _UNK_150631d44;
  local_58.CompactionThreshold = _UNK_150631d48;
  local_58.InvocationListLockCount = _UNK_150631d4c;
  FVar1 = this->Key->WeakPtr;
  *(int *)&__return_storage_ptr__->field_0x0 = FVar1.ObjectIndex;
  *(int *)&__return_storage_ptr__->field_0x4 = FVar1.ObjectSerialNumber;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&__return_storage_ptr__->field_0x8,4000)
  ;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::operator=
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             &__return_storage_ptr__->field_0x8,&local_58);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             local_58.InvocationList.AllocatorInstance.Data,local_58.InvocationList.ArrayNum);
  if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
      local_58.InvocationList.AllocatorInstance.Data !=
      (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_58.InvocationList.AllocatorInstance.Data);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&local_58);
  return __return_storage_ptr__;
}

// operator<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>_>_TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>_> @ 14bd94890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>_>
* __thiscall
TKeyInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&>::
operator<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>_>_TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>_>
          (TKeyInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&> *this,
          TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  FWeakObjectPtr FVar1;
  undefined1 auStack_78 [32];
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = 0;
  local_58.InvocationList.ArrayMax = 0;
  local_58.CompactionThreshold = 0;
  local_58.InvocationListLockCount = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&local_58,4000);
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = ___xmm_00000000000000020000000000000000;
  local_58.InvocationList.ArrayMax = _UNK_150631d44;
  local_58.CompactionThreshold = _UNK_150631d48;
  local_58.InvocationListLockCount = _UNK_150631d4c;
  FVar1 = this->Key->WeakPtr;
  *(int *)&__return_storage_ptr__->field_0x0 = FVar1.ObjectIndex;
  *(int *)&__return_storage_ptr__->field_0x4 = FVar1.ObjectSerialNumber;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&__return_storage_ptr__->field_0x8,4000)
  ;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::operator=
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             &__return_storage_ptr__->field_0x8,&local_58);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             local_58.InvocationList.AllocatorInstance.Data,local_58.InvocationList.ArrayNum);
  if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
      local_58.InvocationList.AllocatorInstance.Data !=
      (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_58.InvocationList.AllocatorInstance.Data);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&local_58);
  return __return_storage_ptr__;
}

// operator<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>_>_TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>_> @ 14bd94980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>_>
* __thiscall
TKeyInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&>::
operator<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>_>_TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>_>
          (TKeyInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&> *this,
          TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  FWeakObjectPtr FVar1;
  undefined1 auStack_78 [32];
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = 0;
  local_58.InvocationList.ArrayMax = 0;
  local_58.CompactionThreshold = 0;
  local_58.InvocationListLockCount = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&local_58,4000);
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = ___xmm_00000000000000020000000000000000;
  local_58.InvocationList.ArrayMax = _UNK_150631d44;
  local_58.CompactionThreshold = _UNK_150631d48;
  local_58.InvocationListLockCount = _UNK_150631d4c;
  FVar1 = this->Key->WeakPtr;
  *(int *)&__return_storage_ptr__->field_0x0 = FVar1.ObjectIndex;
  *(int *)&__return_storage_ptr__->field_0x4 = FVar1.ObjectSerialNumber;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&__return_storage_ptr__->field_0x8,4000)
  ;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::operator=
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             &__return_storage_ptr__->field_0x8,&local_58);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             local_58.InvocationList.AllocatorInstance.Data,local_58.InvocationList.ArrayNum);
  if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
      local_58.InvocationList.AllocatorInstance.Data !=
      (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_58.InvocationList.AllocatorInstance.Data);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&local_58);
  return __return_storage_ptr__;
}

// operator<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(enum_EDS_TabErrorType,int,int),FDefaultTSDelegateUserPolicy>_>_TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(enum_EDS_TabErrorType,int,int),FDefaultTSDelegateUserPolicy>_> @ 14bdfc3f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(EDS_TabErrorType,int,int),FDefaultTSDelegateUserPolicy>_>
* __thiscall
TKeyInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&>::
operator<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(enum_EDS_TabErrorType,int,int),FDefaultTSDelegateUserPolicy>_>_TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(enum_EDS_TabErrorType,int,int),FDefaultTSDelegateUserPolicy>_>
          (TKeyInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&> *this,
          TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(EDS_TabErrorType,int,int),FDefaultTSDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  FWeakObjectPtr FVar1;
  undefined1 auStack_78 [32];
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = 0;
  local_58.InvocationList.ArrayMax = 0;
  local_58.CompactionThreshold = 0;
  local_58.InvocationListLockCount = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&local_58,4000);
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = ___xmm_00000000000000020000000000000000;
  local_58.InvocationList.ArrayMax = _UNK_150631d44;
  local_58.CompactionThreshold = _UNK_150631d48;
  local_58.InvocationListLockCount = _UNK_150631d4c;
  FVar1 = this->Key->WeakPtr;
  *(int *)&__return_storage_ptr__->field_0x0 = FVar1.ObjectIndex;
  *(int *)&__return_storage_ptr__->field_0x4 = FVar1.ObjectSerialNumber;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&__return_storage_ptr__->field_0x8,4000)
  ;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::operator=
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             &__return_storage_ptr__->field_0x8,&local_58);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             local_58.InvocationList.AllocatorInstance.Data,local_58.InvocationList.ArrayNum);
  if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
      local_58.InvocationList.AllocatorInstance.Data !=
      (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_58.InvocationList.AllocatorInstance.Data);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&local_58);
  return __return_storage_ptr__;
}

// operator<enum_EDS_TotalMenuId,FDS_OpenContentTotalMenuEvent>_TTuple<enum_EDS_TotalMenuId,FDS_OpenContentTotalMenuEvent> @ 14be5c070

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<EDS_TotalMenuId,FDS_OpenContentTotalMenuEvent> * __thiscall
TKeyInitializer<enum_EDS_TotalMenuId_&&>::
operator<enum_EDS_TotalMenuId,FDS_OpenContentTotalMenuEvent>_TTuple<enum_EDS_TotalMenuId,FDS_OpenContentTotalMenuEvent>
          (void *this,TTuple<EDS_TotalMenuId,FDS_OpenContentTotalMenuEvent> *__return_storage_ptr__)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> local_28;
  
  local_28._padding_ = 0;
  local_28.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.InvocationList._8_8_ = ___xmm_00000000000000020000000000000000;
  local_28._24_8_ = _UNK_150631d48;
  *(undefined4 *)__return_storage_ptr__ = **(undefined4 **)this;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>
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

// operator<enum_EDS_SwimStep_const_,TMulticastDelegate<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy>_>_TTuple<enum_EDS_SwimStep_const_,TMulticastDelegate<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy>_> @ 14bf26450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<EDS_SwimStep_const_,TMulticastDelegate<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy>_>
* __thiscall
TKeyInitializer<enum_EDS_SwimStep_const_&>::
operator<enum_EDS_SwimStep_const_,TMulticastDelegate<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy>_>_TTuple<enum_EDS_SwimStep_const_,TMulticastDelegate<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy>_>
          (void *this,
          TTuple<EDS_SwimStep_const_,TMulticastDelegate<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  undefined1 auStack_78 [32];
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = 0;
  local_58.InvocationList.ArrayMax = 0;
  local_58.CompactionThreshold = 0;
  local_58.InvocationListLockCount = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&local_58,4000);
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = ___xmm_00000000000000020000000000000000;
  local_58.InvocationList.ArrayMax = _UNK_150631d44;
  local_58.CompactionThreshold = _UNK_150631d48;
  local_58.InvocationListLockCount = _UNK_150631d4c;
  *(undefined1 *)__return_storage_ptr__ = **(undefined1 **)this;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&__return_storage_ptr__->field_0x8,4000)
  ;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::operator=
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             &__return_storage_ptr__->field_0x8,&local_58);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             local_58.InvocationList.AllocatorInstance.Data,local_58.InvocationList.ArrayNum);
  if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
      local_58.InvocationList.AllocatorInstance.Data !=
      (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_58.InvocationList.AllocatorInstance.Data);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&local_58);
  return __return_storage_ptr__;
}

// operator<int,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>_TTuple<int,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_> @ 14bf26540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<int,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_> * __thiscall
TKeyInitializer<int_const_&>::
operator<int,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>_TTuple<int,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>
          (TKeyInitializer<int_const_&> *this,
          TTuple<int,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  undefined1 auStack_78 [32];
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = 0;
  local_58.InvocationList.ArrayMax = 0;
  local_58.CompactionThreshold = 0;
  local_58.InvocationListLockCount = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&local_58,4000);
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = ___xmm_00000000000000020000000000000000;
  local_58.InvocationList.ArrayMax = _UNK_150631d44;
  local_58.CompactionThreshold = _UNK_150631d48;
  local_58.InvocationListLockCount = _UNK_150631d4c;
  *(int *)__return_storage_ptr__ = *this->Key;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&__return_storage_ptr__->field_0x8,4000)
  ;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::operator=
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             &__return_storage_ptr__->field_0x8,&local_58);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             local_58.InvocationList.AllocatorInstance.Data,local_58.InvocationList.ArrayNum);
  if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
      local_58.InvocationList.AllocatorInstance.Data !=
      (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_58.InvocationList.AllocatorInstance.Data);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&local_58);
  return __return_storage_ptr__;
}

// operator<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>_TTuple<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_> @ 14bf8b5b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_> * __thiscall
TKeyInitializer<int_const_&>::
operator<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>_TTuple<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>
          (TKeyInitializer<int_const_&> *this,
          TTuple<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  undefined1 auStack_78 [32];
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = 0;
  local_58.InvocationList.ArrayMax = 0;
  local_58.CompactionThreshold = 0;
  local_58.InvocationListLockCount = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&local_58,4000);
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = ___xmm_00000000000000020000000000000000;
  local_58.InvocationList.ArrayMax = _UNK_150631d44;
  local_58.CompactionThreshold = _UNK_150631d48;
  local_58.InvocationListLockCount = _UNK_150631d4c;
  *(int *)__return_storage_ptr__ = *this->Key;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&__return_storage_ptr__->field_0x8,4000)
  ;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::operator=
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             &__return_storage_ptr__->field_0x8,&local_58);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             local_58.InvocationList.AllocatorInstance.Data,local_58.InvocationList.ArrayNum);
  if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
      local_58.InvocationList.AllocatorInstance.Data !=
      (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_58.InvocationList.AllocatorInstance.Data);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&local_58);
  return __return_storage_ptr__;
}

// operator<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>_TTuple<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_> @ 14bfe8290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_> * __thiscall
TKeyInitializer<int_const_&>::
operator<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>_TTuple<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>
          (TKeyInitializer<int_const_&> *this,
          TTuple<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  undefined1 auStack_78 [32];
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = 0;
  local_58.InvocationList.ArrayMax = 0;
  local_58.CompactionThreshold = 0;
  local_58.InvocationListLockCount = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&local_58,4000);
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = ___xmm_00000000000000020000000000000000;
  local_58.InvocationList.ArrayMax = _UNK_150631d44;
  local_58.CompactionThreshold = _UNK_150631d48;
  local_58.InvocationListLockCount = _UNK_150631d4c;
  *(int *)__return_storage_ptr__ = *this->Key;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&__return_storage_ptr__->field_0x8,4000)
  ;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::operator=
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             &__return_storage_ptr__->field_0x8,&local_58);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             local_58.InvocationList.AllocatorInstance.Data,local_58.InvocationList.ArrayNum);
  if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
      local_58.InvocationList.AllocatorInstance.Data !=
      (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_58.InvocationList.AllocatorInstance.Data);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&local_58);
  return __return_storage_ptr__;
}

// operator<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>_TTuple<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_> @ 14bfe8380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>
* __thiscall
TKeyInitializer<int_const_&>::
operator<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>_TTuple<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>
          (TKeyInitializer<int_const_&> *this,
          TTuple<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  undefined1 auStack_78 [32];
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = 0;
  local_58.InvocationList.ArrayMax = 0;
  local_58.CompactionThreshold = 0;
  local_58.InvocationListLockCount = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&local_58,4000);
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = ___xmm_00000000000000020000000000000000;
  local_58.InvocationList.ArrayMax = _UNK_150631d44;
  local_58.CompactionThreshold = _UNK_150631d48;
  local_58.InvocationListLockCount = _UNK_150631d4c;
  *(int *)__return_storage_ptr__ = *this->Key;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&__return_storage_ptr__->field_0x8,4000)
  ;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::operator=
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             &__return_storage_ptr__->field_0x8,&local_58);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             local_58.InvocationList.AllocatorInstance.Data,local_58.InvocationList.ArrayNum);
  if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
      local_58.InvocationList.AllocatorInstance.Data !=
      (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_58.InvocationList.AllocatorInstance.Data);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&local_58);
  return __return_storage_ptr__;
}

// operator<int_const_,TMulticastDelegate<void___cdecl(enum_EDS_WorldMapZoomStep),FDefaultTSDelegateUserPolicy>_>_TTuple<int_const_,TMulticastDelegate<void___cdecl(enum_EDS_WorldMapZoomStep),FDefaultTSDelegateUserPolicy>_> @ 14bfe8470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<int_const_,TMulticastDelegate<void___cdecl(EDS_WorldMapZoomStep),FDefaultTSDelegateUserPolicy>_>
* __thiscall
TKeyInitializer<int_const_&>::
operator<int_const_,TMulticastDelegate<void___cdecl(enum_EDS_WorldMapZoomStep),FDefaultTSDelegateUserPolicy>_>_TTuple<int_const_,TMulticastDelegate<void___cdecl(enum_EDS_WorldMapZoomStep),FDefaultTSDelegateUserPolicy>_>
          (TKeyInitializer<int_const_&> *this,
          TTuple<int_const_,TMulticastDelegate<void___cdecl(EDS_WorldMapZoomStep),FDefaultTSDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  undefined1 auStack_78 [32];
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = 0;
  local_58.InvocationList.ArrayMax = 0;
  local_58.CompactionThreshold = 0;
  local_58.InvocationListLockCount = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&local_58,4000);
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = ___xmm_00000000000000020000000000000000;
  local_58.InvocationList.ArrayMax = _UNK_150631d44;
  local_58.CompactionThreshold = _UNK_150631d48;
  local_58.InvocationListLockCount = _UNK_150631d4c;
  *(int *)__return_storage_ptr__ = *this->Key;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&__return_storage_ptr__->field_0x8,4000)
  ;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::operator=
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             &__return_storage_ptr__->field_0x8,&local_58);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             local_58.InvocationList.AllocatorInstance.Data,local_58.InvocationList.ArrayNum);
  if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
      local_58.InvocationList.AllocatorInstance.Data !=
      (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_58.InvocationList.AllocatorInstance.Data);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&local_58);
  return __return_storage_ptr__;
}

// operator<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>_>_TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>_> @ 14bfe8560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>_> *
__thiscall
TKeyInitializer<__int64_const_&>::
operator<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>_>_TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>_>
          (TKeyInitializer<__int64_const_&> *this,
          TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  undefined1 auStack_78 [32];
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = 0;
  local_58.InvocationList.ArrayMax = 0;
  local_58.CompactionThreshold = 0;
  local_58.InvocationListLockCount = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&local_58,4000);
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = ___xmm_00000000000000020000000000000000;
  local_58.InvocationList.ArrayMax = _UNK_150631d44;
  local_58.CompactionThreshold = _UNK_150631d48;
  local_58.InvocationListLockCount = _UNK_150631d4c;
  *(long64 *)__return_storage_ptr__ = *this->Key;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&__return_storage_ptr__->field_0x8,4000)
  ;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::operator=
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             &__return_storage_ptr__->field_0x8,&local_58);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             local_58.InvocationList.AllocatorInstance.Data,local_58.InvocationList.ArrayNum);
  if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
      local_58.InvocationList.AllocatorInstance.Data !=
      (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_58.InvocationList.AllocatorInstance.Data);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&local_58);
  return __return_storage_ptr__;
}

// operator<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>_TTuple<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_> @ 14bfe8650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>
* __thiscall
TKeyInitializer<__int64_const_&>::
operator<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>_TTuple<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>
          (TKeyInitializer<__int64_const_&> *this,
          TTuple<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  undefined1 auStack_78 [32];
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = 0;
  local_58.InvocationList.ArrayMax = 0;
  local_58.CompactionThreshold = 0;
  local_58.InvocationListLockCount = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&local_58,4000);
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = ___xmm_00000000000000020000000000000000;
  local_58.InvocationList.ArrayMax = _UNK_150631d44;
  local_58.CompactionThreshold = _UNK_150631d48;
  local_58.InvocationListLockCount = _UNK_150631d4c;
  *(long64 *)__return_storage_ptr__ = *this->Key;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&__return_storage_ptr__->field_0x8,4000)
  ;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::operator=
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             &__return_storage_ptr__->field_0x8,&local_58);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             local_58.InvocationList.AllocatorInstance.Data,local_58.InvocationList.ArrayNum);
  if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
      local_58.InvocationList.AllocatorInstance.Data !=
      (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_58.InvocationList.AllocatorInstance.Data);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&local_58);
  return __return_storage_ptr__;
}

// operator<int_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>_TTuple<int_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_> @ 14c0501f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<int_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>
* __thiscall
TKeyInitializer<int_const_&>::
operator<int_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>_TTuple<int_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>
          (TKeyInitializer<int_const_&> *this,
          TTuple<int_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  undefined1 auStack_78 [32];
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = 0;
  local_58.InvocationList.ArrayMax = 0;
  local_58.CompactionThreshold = 0;
  local_58.InvocationListLockCount = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&local_58,4000);
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = ___xmm_00000000000000020000000000000000;
  local_58.InvocationList.ArrayMax = _UNK_150631d44;
  local_58.CompactionThreshold = _UNK_150631d48;
  local_58.InvocationListLockCount = _UNK_150631d4c;
  *(int *)__return_storage_ptr__ = *this->Key;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&__return_storage_ptr__->field_0x8,4000)
  ;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::operator=
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             &__return_storage_ptr__->field_0x8,&local_58);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             local_58.InvocationList.AllocatorInstance.Data,local_58.InvocationList.ArrayNum);
  if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
      local_58.InvocationList.AllocatorInstance.Data !=
      (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_58.InvocationList.AllocatorInstance.Data);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&local_58);
  return __return_storage_ptr__;
}

// operator<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>_>_TTuple<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>_> @ 14c0502e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>_> *
__thiscall
TKeyInitializer<int_const_&>::
operator<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>_>_TTuple<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>_>
          (TKeyInitializer<int_const_&> *this,
          TTuple<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  undefined1 auStack_78 [32];
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = 0;
  local_58.InvocationList.ArrayMax = 0;
  local_58.CompactionThreshold = 0;
  local_58.InvocationListLockCount = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&local_58,4000);
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = ___xmm_00000000000000020000000000000000;
  local_58.InvocationList.ArrayMax = _UNK_150631d44;
  local_58.CompactionThreshold = _UNK_150631d48;
  local_58.InvocationListLockCount = _UNK_150631d4c;
  *(int *)__return_storage_ptr__ = *this->Key;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&__return_storage_ptr__->field_0x8,4000)
  ;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::operator=
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             &__return_storage_ptr__->field_0x8,&local_58);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             local_58.InvocationList.AllocatorInstance.Data,local_58.InvocationList.ArrayNum);
  if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
      local_58.InvocationList.AllocatorInstance.Data !=
      (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_58.InvocationList.AllocatorInstance.Data);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&local_58);
  return __return_storage_ptr__;
}

// operator<__int64_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>_TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_> @ 14c0503d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>
* __thiscall
TKeyInitializer<__int64_const_&>::
operator<__int64_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>_TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>
          (TKeyInitializer<__int64_const_&> *this,
          TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  undefined1 auStack_78 [32];
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = 0;
  local_58.InvocationList.ArrayMax = 0;
  local_58.CompactionThreshold = 0;
  local_58.InvocationListLockCount = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&local_58,4000);
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = ___xmm_00000000000000020000000000000000;
  local_58.InvocationList.ArrayMax = _UNK_150631d44;
  local_58.CompactionThreshold = _UNK_150631d48;
  local_58.InvocationListLockCount = _UNK_150631d4c;
  *(long64 *)__return_storage_ptr__ = *this->Key;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&__return_storage_ptr__->field_0x8,4000)
  ;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::operator=
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             &__return_storage_ptr__->field_0x8,&local_58);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             local_58.InvocationList.AllocatorInstance.Data,local_58.InvocationList.ArrayNum);
  if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
      local_58.InvocationList.AllocatorInstance.Data !=
      (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_58.InvocationList.AllocatorInstance.Data);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&local_58);
  return __return_storage_ptr__;
}

// operator<__int64_const_,TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy>_>_TTuple<__int64_const_,TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy>_> @ 14c0504c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<__int64_const_,TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy>_> *
__thiscall
TKeyInitializer<__int64_const_&>::
operator<__int64_const_,TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy>_>_TTuple<__int64_const_,TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy>_>
          (TKeyInitializer<__int64_const_&> *this,
          TTuple<__int64_const_,TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  undefined1 auStack_78 [32];
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = 0;
  local_58.InvocationList.ArrayMax = 0;
  local_58.CompactionThreshold = 0;
  local_58.InvocationListLockCount = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&local_58,4000);
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = ___xmm_00000000000000020000000000000000;
  local_58.InvocationList.ArrayMax = _UNK_150631d44;
  local_58.CompactionThreshold = _UNK_150631d48;
  local_58.InvocationListLockCount = _UNK_150631d4c;
  *(long64 *)__return_storage_ptr__ = *this->Key;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&__return_storage_ptr__->field_0x8,4000)
  ;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::operator=
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             &__return_storage_ptr__->field_0x8,&local_58);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             local_58.InvocationList.AllocatorInstance.Data,local_58.InvocationList.ArrayNum);
  if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
      local_58.InvocationList.AllocatorInstance.Data !=
      (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_58.InvocationList.AllocatorInstance.Data);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&local_58);
  return __return_storage_ptr__;
}

// operator<UObject_*,TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>_>_TTuple<UObject_*,TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>_> @ 14c0505b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<UObject_*,TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>_> *
__thiscall
TKeyInitializer<UObject_*_const_&>::
operator<UObject_*,TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>_>_TTuple<UObject_*,TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>_>
          (TKeyInitializer<UObject_*_const_&> *this,
          TTuple<UObject_*,TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  undefined1 auStack_78 [32];
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = 0;
  local_58.InvocationList.ArrayMax = 0;
  local_58.CompactionThreshold = 0;
  local_58.InvocationListLockCount = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&local_58,4000);
  local_58.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.InvocationList.ArrayNum = ___xmm_00000000000000020000000000000000;
  local_58.InvocationList.ArrayMax = _UNK_150631d44;
  local_58.CompactionThreshold = _UNK_150631d48;
  local_58.InvocationListLockCount = _UNK_150631d4c;
  *(UObject **)__return_storage_ptr__ = *this->Key;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&__return_storage_ptr__->field_0x8,4000)
  ;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::operator=
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             &__return_storage_ptr__->field_0x8,&local_58);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             local_58.InvocationList.AllocatorInstance.Data,local_58.InvocationList.ArrayNum);
  if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
      local_58.InvocationList.AllocatorInstance.Data !=
      (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_58.InvocationList.AllocatorInstance.Data);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&local_58);
  return __return_storage_ptr__;
}

