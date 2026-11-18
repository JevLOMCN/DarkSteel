// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 2

// __Internal_AddUniqueDynamic<IEnhancedInputSubsystemInterface> @ 14a6c9760

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UEnhancedInputUserSettings_*>::
__Internal_AddUniqueDynamic<IEnhancedInputSubsystemInterface>
          (TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UEnhancedInputUserSettings_*>
           *this,IEnhancedInputSubsystemInterface *param_1,pmf_73179564 param_2,FName param_3)

{
  code *pcVar1;
  bool bVar2;
  UObject *this_00;
  UFunction *pUVar3;
  <lambda_1> local_res8 [8];
  FName local_res10;
  UObject *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a8;
  FWeakObjectPtr local_a0;
  FName local_98;
  FName *local_90;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_88;
  FDestructionSentinel local_78;
  FReadAccessScope local_60;
  FReadAccessScope local_48;
  
  if (((param_1 == (IEnhancedInputSubsystemInterface *)0x0) || (param_2 == (pmf_73179564)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4e4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_a0.ObjectIndex = 0;
  local_a0.ObjectSerialNumber = 0;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  local_res10 = param_3;
  if ((param_1 == (IEnhancedInputSubsystemInterface *)0x0) || (param_2 == (pmf_73179564)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InUserObject != nullptr && InMethodPtr != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                       ,0x46d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (param_1 != (IEnhancedInputSubsystemInterface *)0x0) goto LAB_14a6c97fc;
LAB_14a6c980a:
    local_res20 = (UObject *)0x0;
  }
  else {
LAB_14a6c97fc:
    local_res20 = (UObject *)(**(code **)(param_1->_padding_ + 8))(param_1);
    if (local_res20 == (UObject *)0x0) goto LAB_14a6c980a;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res20);
  }
  FWeakObjectPtr::operator=(&local_a0,(FObjectPtr)&local_res20);
  local_98 = local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_a8,&local_60);
  if ((local_98 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_a0), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_60);
  }
  else {
    pUVar3 = UObject::FindFunction(this_00,local_98);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_60);
    if (pUVar3 != (UFunction *)0x0) goto LAB_14a6c9896;
  }
  local_90 = &local_res10;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UEnhancedInputUserSettings_*>::
  __Internal_BindDynamic<IEnhancedInputSubsystemInterface>'::__l2::<lambda_1>::operator()(&local_90)
  ;
LAB_14a6c9896:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_a8,&local_48);
  local_88.Object = local_a0;
  local_88.FunctionName = local_98;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_78);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&this->field_0x8,&local_88);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&this->field_0x8,local_res8,Default);
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a8.AccessDetector);
  return;
}

// __Internal_AddUniqueDynamic<IEnhancedInputSubsystemInterface> @ 14a6c9920

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UEnhancedPlayerMappableKeyProfile_const_*>
::__Internal_AddUniqueDynamic<IEnhancedInputSubsystemInterface>
          (TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UEnhancedPlayerMappableKeyProfile_const_*>
           *this,IEnhancedInputSubsystemInterface *param_1,pmf_12bcab4c param_2,FName param_3)

{
  code *pcVar1;
  bool bVar2;
  UObject *this_00;
  UFunction *pUVar3;
  <lambda_1> local_res8 [8];
  FName local_res10;
  UObject *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a8;
  FWeakObjectPtr local_a0;
  FName local_98;
  FName *local_90;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_88;
  FDestructionSentinel local_78;
  FReadAccessScope local_60;
  FReadAccessScope local_48;
  
  if (((param_1 == (IEnhancedInputSubsystemInterface *)0x0) || (param_2 == (pmf_12bcab4c)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4e4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_a0.ObjectIndex = 0;
  local_a0.ObjectSerialNumber = 0;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  local_res10 = param_3;
  if ((param_1 == (IEnhancedInputSubsystemInterface *)0x0) || (param_2 == (pmf_12bcab4c)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InUserObject != nullptr && InMethodPtr != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                       ,0x46d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (param_1 != (IEnhancedInputSubsystemInterface *)0x0) goto LAB_14a6c99bc;
LAB_14a6c99ca:
    local_res20 = (UObject *)0x0;
  }
  else {
LAB_14a6c99bc:
    local_res20 = (UObject *)(**(code **)(param_1->_padding_ + 8))(param_1);
    if (local_res20 == (UObject *)0x0) goto LAB_14a6c99ca;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res20);
  }
  FWeakObjectPtr::operator=(&local_a0,(FObjectPtr)&local_res20);
  local_98 = local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_a8,&local_60);
  if ((local_98 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_a0), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_60);
  }
  else {
    pUVar3 = UObject::FindFunction(this_00,local_98);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_60);
    if (pUVar3 != (UFunction *)0x0) goto LAB_14a6c9a56;
  }
  local_90 = &local_res10;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UEnhancedPlayerMappableKeyProfile_const_*>::
  __Internal_BindDynamic<IEnhancedInputSubsystemInterface>'::__l2::<lambda_1>::operator()(&local_90)
  ;
LAB_14a6c9a56:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_a8,&local_48);
  local_88.Object = local_a0;
  local_88.FunctionName = local_98;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_78);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&this->field_0x8,&local_88);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&this->field_0x8,local_res8,Default);
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a8.AccessDetector);
  return;
}

