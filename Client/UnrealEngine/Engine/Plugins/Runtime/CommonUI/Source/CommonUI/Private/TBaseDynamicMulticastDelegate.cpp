// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 2

// __Internal_AddUniqueDynamic<UCommonButtonBase> @ 14a7a62f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void>::
__Internal_AddUniqueDynamic<UCommonButtonBase>
          (TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void> *this,
          UCommonButtonBase *param_1,pmf_6dc84f8f *param_2,FName param_3)

{
  code *pcVar1;
  bool bVar2;
  UObject *this_00;
  UFunction *pUVar3;
  <lambda_1> local_res8 [8];
  FName local_res10;
  UCommonButtonBase *local_res18;
  FName *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_98;
  FWeakObjectPtr local_90;
  FName local_88;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_80;
  FDestructionSentinel local_70;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  if (((param_1 == (UCommonButtonBase *)0x0) || (*(longlong *)param_2 == 0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4e4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_98.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_90.ObjectIndex = 0;
  local_90.ObjectSerialNumber = 0;
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  local_res10 = param_3;
  if (((param_1 == (UCommonButtonBase *)0x0) || (*(longlong *)param_2 == 0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res18 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UCommonButtonBase *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_90,(FObjectPtr)&local_res18);
  local_88 = local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_98,&local_58);
  if ((local_88 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_90), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
  }
  else {
    pUVar3 = UObject::FindFunction(this_00,local_88);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
    if (pUVar3 != (UFunction *)0x0) goto LAB_14a7a6414;
  }
  local_res20 = &local_res10;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void>::__Internal_BindDynamic<UCommonButtonBase>'
  ::__l2::<lambda_1>::operator()(&local_res20);
LAB_14a7a6414:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_98,&local_40);
  local_80.Object = local_90;
  local_80.FunctionName = local_88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_70);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&this->field_0x8,&local_80);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&this->field_0x8,local_res8,Default);
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_98.AccessDetector);
  return;
}

// __Internal_AddUniqueDynamic<UCommonButtonGroupBase> @ 14a7a64a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UCommonButtonBase_*>::
__Internal_AddUniqueDynamic<UCommonButtonGroupBase>
          (TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UCommonButtonBase_*> *this,
          UCommonButtonGroupBase *param_1,pmf_f076cadd param_2,FName param_3)

{
  code *pcVar1;
  bool bVar2;
  UObject *this_00;
  UFunction *pUVar3;
  <lambda_1> local_res8 [8];
  FName local_res10 [2];
  UCommonButtonGroupBase *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a8;
  FWeakObjectPtr local_a0;
  FName local_98;
  FName *local_90;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_88;
  FDestructionSentinel local_78;
  FReadAccessScope local_60;
  FReadAccessScope local_48;
  
  if (((param_1 == (UCommonButtonGroupBase *)0x0) || (param_2 == (pmf_f076cadd)0x0)) &&
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
  local_res10[0] = param_3;
  if (((param_1 == (UCommonButtonGroupBase *)0x0) || (param_2 == (pmf_f076cadd)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res20 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UCommonButtonGroupBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_a0,(FObjectPtr)&local_res20);
  local_98 = local_res10[0];
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
    if (pUVar3 != (UFunction *)0x0) goto LAB_14a7a65bc;
  }
  local_90 = local_res10;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UCommonButtonBase_*>::
  __Internal_BindDynamic<UCommonButtonGroupBase>'::__l2::<lambda_1>::operator()(&local_90);
LAB_14a7a65bc:
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

