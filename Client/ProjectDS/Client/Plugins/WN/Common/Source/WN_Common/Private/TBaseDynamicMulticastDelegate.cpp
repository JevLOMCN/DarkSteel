// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 2

// __Internal_AddDynamic<UWN_CommonSubsystem> @ 14948ba00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UWN_VolumeComponent_*,enum_EWN_VolumeObserverMode>
::__Internal_AddDynamic<UWN_CommonSubsystem>
          (void *this,UWN_CommonSubsystem *param_1,pmf_ed8db45d *param_2,FName param_3)

{
  code *pcVar1;
  bool bVar2;
  UObject *this_00;
  UFunction *pUVar3;
  <lambda_1> local_res8 [8];
  FName local_res10;
  UWN_CommonSubsystem *local_res18;
  FName *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_98;
  FWeakObjectPtr local_90;
  FName local_88;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_80;
  FDestructionSentinel local_70;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  if (((param_1 == (UWN_CommonSubsystem *)0x0) || (*(longlong *)param_2 == 0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar2)) {
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
  if (((param_1 == (UWN_CommonSubsystem *)0x0) || (*(longlong *)param_2 == 0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res18 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UWN_CommonSubsystem *)0x0)) {
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
    if (pUVar3 != (UFunction *)0x0) goto LAB_14948bb24;
  }
  local_res20 = &local_res10;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UWN_VolumeComponent_*,enum_EWN_VolumeObserverMode>
  ::__Internal_BindDynamic<UWN_CommonSubsystem>'::__l2::<lambda_1>::operator()(&local_res20);
LAB_14948bb24:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_98,&local_40);
  local_80.Object = local_90;
  local_80.FunctionName = local_88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (this,(FWriteAccessScope *)&local_70);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)((longlong)this + 8),local_res8,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal(this,&local_80);
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_98.AccessDetector);
  return;
}

// __Internal_AddDynamic<UWN_CommonSubsystem> @ 14948bbb0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UWN_VolumeComponent_*,enum_EWN_VolumeObserverMode,UE::Math::TVector<double>_const_&>
::__Internal_AddDynamic<UWN_CommonSubsystem>
          (void *this,UWN_CommonSubsystem *param_1,pmf_0829b9b7 *param_2,FName param_3)

{
  code *pcVar1;
  bool bVar2;
  UObject *this_00;
  UFunction *pUVar3;
  <lambda_1> local_res8 [8];
  FName local_res10;
  UWN_CommonSubsystem *local_res18;
  FName *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_98;
  FWeakObjectPtr local_90;
  FName local_88;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_80;
  FDestructionSentinel local_70;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  if (((param_1 == (UWN_CommonSubsystem *)0x0) || (*(longlong *)param_2 == 0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar2)) {
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
  if (((param_1 == (UWN_CommonSubsystem *)0x0) || (*(longlong *)param_2 == 0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res18 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UWN_CommonSubsystem *)0x0)) {
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
    if (pUVar3 != (UFunction *)0x0) goto LAB_14948bcd4;
  }
  local_res20 = &local_res10;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UWN_VolumeComponent_*,enum_EWN_VolumeObserverMode,UE::Math::TVector<double>_const_&>
  ::__Internal_BindDynamic<UWN_CommonSubsystem>'::__l2::<lambda_1>::operator()(&local_res20);
LAB_14948bcd4:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_98,&local_40);
  local_80.Object = local_90;
  local_80.FunctionName = local_88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (this,(FWriteAccessScope *)&local_70);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)((longlong)this + 8),local_res8,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal(this,&local_80);
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_98.AccessDetector);
  return;
}

