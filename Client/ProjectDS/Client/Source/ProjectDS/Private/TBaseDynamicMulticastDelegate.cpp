// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// __Internal_AddUniqueDynamic<UDS_ItemDataSet> @ 14ba90520

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,bool_const_>::
__Internal_AddUniqueDynamic<UDS_ItemDataSet>
          (TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,bool_const_> *this,
          UDS_ItemDataSet *param_1,pmf_7dbc5f51 *param_2,FName param_3)

{
  code *pcVar1;
  bool bVar2;
  UObject *this_00;
  UFunction *pUVar3;
  <lambda_1> local_res8 [8];
  FName local_res10;
  UDS_ItemDataSet *local_res18;
  FName *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_98;
  FWeakObjectPtr local_90;
  FName local_88;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_80;
  FDestructionSentinel local_70;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  if (((param_1 == (UDS_ItemDataSet *)0x0) || (*(longlong *)param_2 == 0)) &&
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
  if (((param_1 == (UDS_ItemDataSet *)0x0) || (*(longlong *)param_2 == 0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res18 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_ItemDataSet *)0x0)) {
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
    if (pUVar3 != (UFunction *)0x0) goto LAB_14ba90644;
  }
  local_res20 = &local_res10;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,bool_const_>::
  __Internal_BindDynamic<UDS_ItemDataSet>'::__l2::<lambda_1>::operator()(&local_res20);
LAB_14ba90644:
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

// __Internal_AddDynamic<UDS_NotificationManager> @ 14baebba0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,bool_const_>::
__Internal_AddDynamic<UDS_NotificationManager>
          (TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,bool_const_> *this,
          UDS_NotificationManager *param_1,pmf_46cab3f4 param_2,FName param_3)

{
  code *pcVar1;
  bool bVar2;
  UObject *this_00;
  UFunction *pUVar3;
  <lambda_1> local_res8 [8];
  FName local_res10 [2];
  UDS_NotificationManager *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a8;
  FWeakObjectPtr local_a0;
  FName local_98;
  FName *local_90;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_88;
  FDestructionSentinel local_78;
  FReadAccessScope local_60;
  FReadAccessScope local_48;
  
  if (((param_1 == (UDS_NotificationManager *)0x0) || (param_2 == (pmf_46cab3f4)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar2)) {
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
  if (((param_1 == (UDS_NotificationManager *)0x0) || (param_2 == (pmf_46cab3f4)0x0)) &&
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
     (param_1 != (UDS_NotificationManager *)0x0)) {
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
    if (pUVar3 != (UFunction *)0x0) goto LAB_14baebcbc;
  }
  local_90 = local_res10;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,bool_const_>::
  __Internal_BindDynamic<UDS_NotificationManager>'::__l2::<lambda_1>::operator()(&local_90);
LAB_14baebcbc:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_a8,&local_48);
  local_88.Object = local_a0;
  local_88.FunctionName = local_98;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_78);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&this->field_0x8,local_res8,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)this,&local_88);
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a8.AccessDetector);
  return;
}

// __Internal_AddDynamic<UDS_NotificationManager> @ 14baebd40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,int_const_&>::
__Internal_AddDynamic<UDS_NotificationManager>
          (TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,int_const_&> *this,
          UDS_NotificationManager *param_1,pmf_8532ea59 param_2,FName param_3)

{
  code *pcVar1;
  bool bVar2;
  UObject *this_00;
  UFunction *pUVar3;
  <lambda_1> local_res8 [8];
  FName local_res10 [2];
  UDS_NotificationManager *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a8;
  FWeakObjectPtr local_a0;
  FName local_98;
  FName *local_90;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_88;
  FDestructionSentinel local_78;
  FReadAccessScope local_60;
  FReadAccessScope local_48;
  
  if (((param_1 == (UDS_NotificationManager *)0x0) || (param_2 == (pmf_8532ea59)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar2)) {
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
  if (((param_1 == (UDS_NotificationManager *)0x0) || (param_2 == (pmf_8532ea59)0x0)) &&
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
     (param_1 != (UDS_NotificationManager *)0x0)) {
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
    if (pUVar3 != (UFunction *)0x0) goto LAB_14baebe5c;
  }
  local_90 = local_res10;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,int_const_&>::
  __Internal_BindDynamic<UDS_NotificationManager>'::__l2::<lambda_1>::operator()(&local_90);
LAB_14baebe5c:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_a8,&local_48);
  local_88.Object = local_a0;
  local_88.FunctionName = local_98;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_78);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&this->field_0x8,local_res8,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)this,&local_88);
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a8.AccessDetector);
  return;
}

// __Internal_AddDynamic<UDS_NotificationManager> @ 14baebee0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*>::
__Internal_AddDynamic<UDS_NotificationManager>
          (TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*> *this,
          UDS_NotificationManager *param_1,pmf_95033f17 param_2,FName param_3)

{
  code *pcVar1;
  bool bVar2;
  UObject *this_00;
  UFunction *pUVar3;
  <lambda_1> local_res8 [8];
  FName local_res10 [2];
  UDS_NotificationManager *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a8;
  FWeakObjectPtr local_a0;
  FName local_98;
  FName *local_90;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_88;
  FDestructionSentinel local_78;
  FReadAccessScope local_60;
  FReadAccessScope local_48;
  
  if (((param_1 == (UDS_NotificationManager *)0x0) || (param_2 == (pmf_95033f17)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar2)) {
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
  if (((param_1 == (UDS_NotificationManager *)0x0) || (param_2 == (pmf_95033f17)0x0)) &&
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
     (param_1 != (UDS_NotificationManager *)0x0)) {
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
    if (pUVar3 != (UFunction *)0x0) goto LAB_14baebffc;
  }
  local_90 = local_res10;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*>::
  __Internal_BindDynamic<UDS_NotificationManager>'::__l2::<lambda_1>::operator()(&local_90);
LAB_14baebffc:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_a8,&local_48);
  local_88.Object = local_a0;
  local_88.FunctionName = local_98;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_78);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&this->field_0x8,local_res8,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)this,&local_88);
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a8.AccessDetector);
  return;
}

// __Internal_AddDynamic<UDS_AnimOpt_ControlWidget> @ 14bba7760

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void>::
__Internal_AddDynamic<UDS_AnimOpt_ControlWidget>
          (TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void> *this,
          UDS_AnimOpt_ControlWidget *param_1,pmf_ae51bfb5 *param_2,FName param_3)

{
  code *pcVar1;
  bool bVar2;
  UObject *this_00;
  UFunction *pUVar3;
  <lambda_1> local_res8 [8];
  FName local_res10;
  UDS_AnimOpt_ControlWidget *local_res18;
  FName *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_98;
  FWeakObjectPtr local_90;
  FName local_88;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_80;
  FDestructionSentinel local_70;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  if (((param_1 == (UDS_AnimOpt_ControlWidget *)0x0) || (*(longlong *)param_2 == 0)) &&
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
  if (((param_1 == (UDS_AnimOpt_ControlWidget *)0x0) || (*(longlong *)param_2 == 0)) &&
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
     (param_1 != (UDS_AnimOpt_ControlWidget *)0x0)) {
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
    if (pUVar3 != (UFunction *)0x0) goto LAB_14bba7884;
  }
  local_res20 = &local_res10;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void>::
  __Internal_BindDynamic<UDS_AnimOpt_ControlWidget>'::__l2::<lambda_1>::operator()(&local_res20);
LAB_14bba7884:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_98,&local_40);
  local_80.Object = local_90;
  local_80.FunctionName = local_88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_70);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&this->field_0x8,local_res8,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)this,&local_80);
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_98.AccessDetector);
  return;
}

// __Internal_AddDynamic<UDS_CheatWidget> @ 14bc7fe70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void>::
__Internal_AddDynamic<UDS_CheatWidget>
          (TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void> *this,
          UDS_CheatWidget *param_1,pmf_441d9c48 *param_2,FName param_3)

{
  code *pcVar1;
  bool bVar2;
  UObject *this_00;
  UFunction *pUVar3;
  <lambda_1> local_res8 [8];
  FName local_res10;
  UDS_CheatWidget *local_res18;
  FName *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_98;
  FWeakObjectPtr local_90;
  FName local_88;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_80;
  FDestructionSentinel local_70;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  if (((param_1 == (UDS_CheatWidget *)0x0) || (*(longlong *)param_2 == 0)) &&
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
  if (((param_1 == (UDS_CheatWidget *)0x0) || (*(longlong *)param_2 == 0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res18 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_CheatWidget *)0x0)) {
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
    if (pUVar3 != (UFunction *)0x0) goto LAB_14bc7ff94;
  }
  local_res20 = &local_res10;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void>::__Internal_BindDynamic<UDS_CheatWidget>'::
  __l2::<lambda_1>::operator()(&local_res20);
LAB_14bc7ff94:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_98,&local_40);
  local_80.Object = local_90;
  local_80.FunctionName = local_88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_70);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&this->field_0x8,local_res8,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)this,&local_80);
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_98.AccessDetector);
  return;
}

// __Internal_AddDynamic<UDS_VM_W_CharacterSlot> @ 14bce3390

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,int_const_&>::
__Internal_AddDynamic<UDS_VM_W_CharacterSlot>
          (TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,int_const_&> *this,
          UDS_VM_W_CharacterSlot *param_1,pmf_243ff8ac *param_2,FName param_3)

{
  code *pcVar1;
  bool bVar2;
  UObject *this_00;
  UFunction *pUVar3;
  <lambda_1> local_res8 [8];
  FName local_res10;
  UDS_VM_W_CharacterSlot *local_res18;
  FName *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_98;
  FWeakObjectPtr local_90;
  FName local_88;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_80;
  FDestructionSentinel local_70;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  if (((param_1 == (UDS_VM_W_CharacterSlot *)0x0) || (*(longlong *)param_2 == 0)) &&
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
  if (((param_1 == (UDS_VM_W_CharacterSlot *)0x0) || (*(longlong *)param_2 == 0)) &&
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
     (param_1 != (UDS_VM_W_CharacterSlot *)0x0)) {
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
    if (pUVar3 != (UFunction *)0x0) goto LAB_14bce34b4;
  }
  local_res20 = &local_res10;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,int_const_&>::
  __Internal_BindDynamic<UDS_VM_W_CharacterSlot>'::__l2::<lambda_1>::operator()(&local_res20);
LAB_14bce34b4:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_98,&local_40);
  local_80.Object = local_90;
  local_80.FunctionName = local_88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_70);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&this->field_0x8,local_res8,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)this,&local_80);
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_98.AccessDetector);
  return;
}

// __Internal_AddDynamic<UDS_M_ItemImplBase> @ 14bd43400

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*>::
__Internal_AddDynamic<UDS_M_ItemImplBase>
          (TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*> *this,
          UDS_M_ItemImplBase *param_1,pmf_f9ca048f *param_2,FName param_3)

{
  code *pcVar1;
  bool bVar2;
  UObject *this_00;
  UFunction *pUVar3;
  <lambda_1> local_res8 [8];
  FName local_res10;
  UDS_M_ItemImplBase *local_res18;
  FName *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_98;
  FWeakObjectPtr local_90;
  FName local_88;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_80;
  FDestructionSentinel local_70;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  if (((param_1 == (UDS_M_ItemImplBase *)0x0) || (*(longlong *)param_2 == 0)) &&
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
  if (((param_1 == (UDS_M_ItemImplBase *)0x0) || (*(longlong *)param_2 == 0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res18 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_M_ItemImplBase *)0x0)
     ) {
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
    if (pUVar3 != (UFunction *)0x0) goto LAB_14bd43524;
  }
  local_res20 = &local_res10;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*>::
  __Internal_BindDynamic<UDS_M_ItemImplBase>'::__l2::<lambda_1>::operator()(&local_res20);
LAB_14bd43524:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_98,&local_40);
  local_80.Object = local_90;
  local_80.FunctionName = local_88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_70);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&this->field_0x8,local_res8,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)this,&local_80);
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_98.AccessDetector);
  return;
}

// __Internal_AddDynamic<UDS_VM_CharInfoData> @ 14bdac8c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,int_const_&>::
__Internal_AddDynamic<UDS_VM_CharInfoData>
          (TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,int_const_&> *this,
          UDS_VM_CharInfoData *param_1,pmf_679796c7 *param_2,FName param_3)

{
  code *pcVar1;
  bool bVar2;
  UObject *this_00;
  UFunction *pUVar3;
  <lambda_1> local_res8 [8];
  FName local_res10;
  UDS_VM_CharInfoData *local_res18;
  FName *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_98;
  FWeakObjectPtr local_90;
  FName local_88;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_80;
  FDestructionSentinel local_70;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  if (((param_1 == (UDS_VM_CharInfoData *)0x0) || (*(longlong *)param_2 == 0)) &&
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
  if (((param_1 == (UDS_VM_CharInfoData *)0x0) || (*(longlong *)param_2 == 0)) &&
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
     (param_1 != (UDS_VM_CharInfoData *)0x0)) {
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
    if (pUVar3 != (UFunction *)0x0) goto LAB_14bdac9e4;
  }
  local_res20 = &local_res10;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,int_const_&>::
  __Internal_BindDynamic<UDS_VM_CharInfoData>'::__l2::<lambda_1>::operator()(&local_res20);
LAB_14bdac9e4:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_98,&local_40);
  local_80.Object = local_90;
  local_80.FunctionName = local_88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_70);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&this->field_0x8,local_res8,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)this,&local_80);
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_98.AccessDetector);
  return;
}

// __Internal_AddDynamic<UDS_VM_NpcRelationData> @ 14be0ee40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,int_const_&>::
__Internal_AddDynamic<UDS_VM_NpcRelationData>
          (TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,int_const_&> *this,
          UDS_VM_NpcRelationData *param_1,pmf_dd2ecc44 *param_2,FName param_3)

{
  code *pcVar1;
  bool bVar2;
  UObject *this_00;
  UFunction *pUVar3;
  <lambda_1> local_res8 [8];
  FName local_res10;
  UDS_VM_NpcRelationData *local_res18;
  FName *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_98;
  FWeakObjectPtr local_90;
  FName local_88;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_80;
  FDestructionSentinel local_70;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  if (((param_1 == (UDS_VM_NpcRelationData *)0x0) || (*(longlong *)param_2 == 0)) &&
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
  if (((param_1 == (UDS_VM_NpcRelationData *)0x0) || (*(longlong *)param_2 == 0)) &&
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
     (param_1 != (UDS_VM_NpcRelationData *)0x0)) {
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
    if (pUVar3 != (UFunction *)0x0) goto LAB_14be0ef64;
  }
  local_res20 = &local_res10;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,int_const_&>::
  __Internal_BindDynamic<UDS_VM_NpcRelationData>'::__l2::<lambda_1>::operator()(&local_res20);
LAB_14be0ef64:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_98,&local_40);
  local_80.Object = local_90;
  local_80.FunctionName = local_88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_70);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&this->field_0x8,local_res8,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)this,&local_80);
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_98.AccessDetector);
  return;
}

// __Internal_AddDynamic<UDS_VM_ItemCraft> @ 14be72920

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*>::
__Internal_AddDynamic<UDS_VM_ItemCraft>
          (TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*> *this,
          UDS_VM_ItemCraft *param_1,pmf_455e91c0 *param_2,FName param_3)

{
  code *pcVar1;
  bool bVar2;
  UObject *this_00;
  UFunction *pUVar3;
  <lambda_1> local_res8 [8];
  FName local_res10;
  UDS_VM_ItemCraft *local_res18;
  FName *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_98;
  FWeakObjectPtr local_90;
  FName local_88;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_80;
  FDestructionSentinel local_70;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  if (((param_1 == (UDS_VM_ItemCraft *)0x0) || (*(longlong *)param_2 == 0)) &&
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
  if (((param_1 == (UDS_VM_ItemCraft *)0x0) || (*(longlong *)param_2 == 0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res18 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_VM_ItemCraft *)0x0))
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
    if (pUVar3 != (UFunction *)0x0) goto LAB_14be72a44;
  }
  local_res20 = &local_res10;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*>::
  __Internal_BindDynamic<UDS_VM_ItemCraft>'::__l2::<lambda_1>::operator()(&local_res20);
LAB_14be72a44:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_98,&local_40);
  local_80.Object = local_90;
  local_80.FunctionName = local_88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_70);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&this->field_0x8,local_res8,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)this,&local_80);
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_98.AccessDetector);
  return;
}

// __Internal_AddDynamic<UDS_VM_ItemCraft_Crafting_Info_Material> @ 14be72ad0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*>::
__Internal_AddDynamic<UDS_VM_ItemCraft_Crafting_Info_Material>
          (TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*> *this,
          UDS_VM_ItemCraft_Crafting_Info_Material *param_1,pmf_0b362824 *param_2,FName param_3)

{
  code *pcVar1;
  bool bVar2;
  UObject *this_00;
  UFunction *pUVar3;
  <lambda_1> local_res8 [8];
  FName local_res10;
  UDS_VM_ItemCraft_Crafting_Info_Material *local_res18;
  FName *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_98;
  FWeakObjectPtr local_90;
  FName local_88;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_80;
  FDestructionSentinel local_70;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  if (((param_1 == (UDS_VM_ItemCraft_Crafting_Info_Material *)0x0) || (*(longlong *)param_2 == 0))
     && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
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
  if (((param_1 == (UDS_VM_ItemCraft_Crafting_Info_Material *)0x0) || (*(longlong *)param_2 == 0))
     && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                           ("InUserObject != nullptr && InMethodPtr != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                            ,0x46d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res18 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UDS_VM_ItemCraft_Crafting_Info_Material *)0x0)) {
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
    if (pUVar3 != (UFunction *)0x0) goto LAB_14be72bf4;
  }
  local_res20 = &local_res10;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*>::
  __Internal_BindDynamic<UDS_VM_ItemCraft_Crafting_Info_Material>'::__l2::<lambda_1>::operator()
            (&local_res20);
LAB_14be72bf4:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_98,&local_40);
  local_80.Object = local_90;
  local_80.FunctionName = local_88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_70);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&this->field_0x8,local_res8,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)this,&local_80);
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_98.AccessDetector);
  return;
}

// __Internal_AddDynamic<UDS_VM_HUD_SkillSlot> @ 14bf3dc30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UDS_DataBase_*>::
__Internal_AddDynamic<UDS_VM_HUD_SkillSlot>
          (TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UDS_DataBase_*> *this,
          UDS_VM_HUD_SkillSlot *param_1,pmf_e95ce90e *param_2,FName param_3)

{
  code *pcVar1;
  bool bVar2;
  UObject *this_00;
  UFunction *pUVar3;
  <lambda_1> local_res8 [8];
  FName local_res10;
  UDS_VM_HUD_SkillSlot *local_res18;
  FName *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_98;
  FWeakObjectPtr local_90;
  FName local_88;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_80;
  FDestructionSentinel local_70;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  if (((param_1 == (UDS_VM_HUD_SkillSlot *)0x0) || (*(longlong *)param_2 == 0)) &&
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
  if (((param_1 == (UDS_VM_HUD_SkillSlot *)0x0) || (*(longlong *)param_2 == 0)) &&
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
     (param_1 != (UDS_VM_HUD_SkillSlot *)0x0)) {
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
    if (pUVar3 != (UFunction *)0x0) goto LAB_14bf3dd54;
  }
  local_res20 = &local_res10;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataBase_*>::
  __Internal_BindDynamic<UDS_VM_HUD_SkillSlot>'::__l2::<lambda_1>::operator()(&local_res20);
LAB_14bf3dd54:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_98,&local_40);
  local_80.Object = local_90;
  local_80.FunctionName = local_88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_70);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&this->field_0x8,local_res8,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)this,&local_80);
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_98.AccessDetector);
  return;
}

// __Internal_AddDynamic<UDS_VM_W_AirWalkSlot> @ 14bf98dd0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UDS_DataBase_*>::
__Internal_AddDynamic<UDS_VM_W_AirWalkSlot>
          (TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UDS_DataBase_*> *this,
          UDS_VM_W_AirWalkSlot *param_1,pmf_b544d72c *param_2,FName param_3)

{
  code *pcVar1;
  bool bVar2;
  UObject *this_00;
  UFunction *pUVar3;
  <lambda_1> local_res8 [8];
  FName local_res10;
  UDS_VM_W_AirWalkSlot *local_res18;
  FName *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_98;
  FWeakObjectPtr local_90;
  FName local_88;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_80;
  FDestructionSentinel local_70;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  if (((param_1 == (UDS_VM_W_AirWalkSlot *)0x0) || (*(longlong *)param_2 == 0)) &&
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
  if (((param_1 == (UDS_VM_W_AirWalkSlot *)0x0) || (*(longlong *)param_2 == 0)) &&
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
     (param_1 != (UDS_VM_W_AirWalkSlot *)0x0)) {
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
    if (pUVar3 != (UFunction *)0x0) goto LAB_14bf98ef4;
  }
  local_res20 = &local_res10;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataBase_*>::
  __Internal_BindDynamic<UDS_VM_W_AirWalkSlot>'::__l2::<lambda_1>::operator()(&local_res20);
LAB_14bf98ef4:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_98,&local_40);
  local_80.Object = local_90;
  local_80.FunctionName = local_88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_70);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&this->field_0x8,local_res8,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)this,&local_80);
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_98.AccessDetector);
  return;
}

