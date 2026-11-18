// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 2

// __Internal_AddDynamic<UGameplayCameraParameterSetterComponent> @ 14d5fa7c0

void __thiscall
TSparseDynamicDelegate<FActorBeginOverlapSignature_MCSignature,AActor,FActorBeginOverlapSignatureInfoGetter>
::__Internal_AddDynamic<UGameplayCameraParameterSetterComponent>
          (TSparseDynamicDelegate<FActorBeginOverlapSignature_MCSignature,AActor,FActorBeginOverlapSignatureInfoGetter>
           *this,UGameplayCameraParameterSetterComponent *param_1,pmf_1d02012f *param_2,
          FName param_3)

{
  TSparseDynamicDelegate<FActorBeginOverlapSignature_MCSignature,AActor,FActorBeginOverlapSignatureInfoGetter>
  TVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  UObject *this_00;
  UFunction *pUVar5;
  FName local_res8;
  UGameplayCameraParameterSetterComponent *local_res10;
  FName *local_res18;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  FWeakObjectPtr local_b0;
  FName local_a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a0;
  FWeakObjectPtr local_98;
  FName local_90;
  TScriptDelegate<FNotThreadSafeDelegateMode> local_88;
  FReadAccessScope local_70;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  if (((param_1 == (UGameplayCameraParameterSetterComponent *)0x0) || (*(longlong *)param_2 == 0))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("InUserObject != nullptr && InMethodPtr != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                            ,0x173,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_b0.ObjectIndex = 0;
  local_b0.ObjectSerialNumber = 0;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  local_res8 = param_3;
  if (((param_1 == (UGameplayCameraParameterSetterComponent *)0x0) || (*(longlong *)param_2 == 0))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("InUserObject != nullptr && InMethodPtr != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                            ,0x46d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UGameplayCameraParameterSetterComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_b0,(FObjectPtr)&local_res10);
  local_a8 = local_res8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_b8,&local_70);
  if ((local_a8 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_b0), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_70);
  }
  else {
    pUVar5 = UObject::FindFunction(this_00,local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_70);
    if (pUVar5 != (UFunction *)0x0) goto LAB_14d5fa8e9;
  }
  local_res18 = &local_res8;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,AActor_*,AActor_*>::
  __Internal_BindDynamic<UGameplayCameraParameterSetterComponent>'::__l2::<lambda_1>::operator()
            (&local_res18);
LAB_14d5fa8e9:
  local_a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_b8,&local_58);
  local_98 = local_b0;
  local_90 = local_a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  TVar1 = *this;
  local_88._padding_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_a0,&local_40);
  local_88.Object = local_98;
  local_88.FunctionName = local_90;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_40);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorBeginOverlapSignature_MCSignature,AActor,FActorBeginOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorBeginOverlapSignature_MCSignature,AActor,FActorBeginOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorBeginOverlapSignature_MCSignature,AActor,FActorBeginOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorBeginOverlapSignature_MCSignature,AActor,FActorBeginOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                    ::__l2::DelegateFName,"OnActorBeginOverlap");
    _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorBeginOverlapSignature_MCSignature,AActor,FActorBeginOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FVar3 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorBeginOverlapSignature_MCSignature,AActor,FActorBeginOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
          ::__l2::DelegateFName;
  bVar4 = UObjectBase::IsValidLowLevelFast((UObjectBase *)(this + -0x20b),false);
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DelegateOwner->IsValidLowLevelFast(false)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                         ,0xd7,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar4 = FSparseDelegateStorage::Add((UObject *)(this + -0x20b),FVar3,&local_88);
  *this = (TSparseDynamicDelegate<FActorBeginOverlapSignature_MCSignature,AActor,FActorBeginOverlapSignatureInfoGetter>
           )(bVar4 | (byte)TVar1);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a0.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  return;
}

// __Internal_AddDynamic<UGameplayCameraParameterSetterComponent> @ 14d5faa30

void __thiscall
TSparseDynamicDelegate<FActorEndOverlapSignature_MCSignature,AActor,FActorEndOverlapSignatureInfoGetter>
::__Internal_AddDynamic<UGameplayCameraParameterSetterComponent>
          (TSparseDynamicDelegate<FActorEndOverlapSignature_MCSignature,AActor,FActorEndOverlapSignatureInfoGetter>
           *this,UGameplayCameraParameterSetterComponent *param_1,pmf_1d02012f *param_2,
          FName param_3)

{
  TSparseDynamicDelegate<FActorEndOverlapSignature_MCSignature,AActor,FActorEndOverlapSignatureInfoGetter>
  TVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  UObject *this_00;
  UFunction *pUVar5;
  FName local_res8;
  UGameplayCameraParameterSetterComponent *local_res10;
  FName *local_res18;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  FWeakObjectPtr local_b0;
  FName local_a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a0;
  FWeakObjectPtr local_98;
  FName local_90;
  TScriptDelegate<FNotThreadSafeDelegateMode> local_88;
  FReadAccessScope local_70;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  if (((param_1 == (UGameplayCameraParameterSetterComponent *)0x0) || (*(longlong *)param_2 == 0))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("InUserObject != nullptr && InMethodPtr != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                            ,0x173,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_b0.ObjectIndex = 0;
  local_b0.ObjectSerialNumber = 0;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  local_res8 = param_3;
  if (((param_1 == (UGameplayCameraParameterSetterComponent *)0x0) || (*(longlong *)param_2 == 0))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("InUserObject != nullptr && InMethodPtr != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                            ,0x46d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UGameplayCameraParameterSetterComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_b0,(FObjectPtr)&local_res10);
  local_a8 = local_res8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_b8,&local_70);
  if ((local_a8 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_b0), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_70);
  }
  else {
    pUVar5 = UObject::FindFunction(this_00,local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_70);
    if (pUVar5 != (UFunction *)0x0) goto LAB_14d5fab59;
  }
  local_res18 = &local_res8;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,AActor_*,AActor_*>::
  __Internal_BindDynamic<UGameplayCameraParameterSetterComponent>'::__l2::<lambda_1>::operator()
            (&local_res18);
LAB_14d5fab59:
  local_a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_b8,&local_58);
  local_98 = local_b0;
  local_90 = local_a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  TVar1 = *this;
  local_88._padding_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_a0,&local_40);
  local_88.Object = local_98;
  local_88.FunctionName = local_90;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_40);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndOverlapSignature_MCSignature,AActor,FActorEndOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndOverlapSignature_MCSignature,AActor,FActorEndOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndOverlapSignature_MCSignature,AActor,FActorEndOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndOverlapSignature_MCSignature,AActor,FActorEndOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                    ::__l2::DelegateFName,"OnActorEndOverlap");
    _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndOverlapSignature_MCSignature,AActor,FActorEndOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FVar3 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndOverlapSignature_MCSignature,AActor,FActorEndOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
          ::__l2::DelegateFName;
  bVar4 = UObjectBase::IsValidLowLevelFast((UObjectBase *)(this + -0x20c),false);
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DelegateOwner->IsValidLowLevelFast(false)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                         ,0xd7,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar4 = FSparseDelegateStorage::Add((UObject *)(this + -0x20c),FVar3,&local_88);
  *this = (TSparseDynamicDelegate<FActorEndOverlapSignature_MCSignature,AActor,FActorEndOverlapSignatureInfoGetter>
           )(bVar4 | (byte)TVar1);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a0.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  return;
}

