// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 2

// __Internal_AddUniqueDynamic<UPathFollowingComponent> @ 146f90090

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TSparseDynamicDelegate<FActorHitSignature_MCSignature,AActor,FActorHitSignatureInfoGetter>::
__Internal_AddUniqueDynamic<UPathFollowingComponent>
          (TSparseDynamicDelegate<FActorHitSignature_MCSignature,AActor,FActorHitSignatureInfoGetter>
           *this,UPathFollowingComponent *param_1,pmf_6f6bde34 *param_2,FName param_3)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  UObject *this_00;
  UFunction *pUVar4;
  FName local_res8;
  UPathFollowingComponent *local_res10;
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
  
  if (((param_1 == (UPathFollowingComponent *)0x0) || (*(longlong *)param_2 == 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                         ,0x18a,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_b0.ObjectIndex = 0;
  local_b0.ObjectSerialNumber = 0;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  local_res8 = param_3;
  if (((param_1 == (UPathFollowingComponent *)0x0) || (*(longlong *)param_2 == 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UPathFollowingComponent *)0x0)) {
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
    pUVar4 = UObject::FindFunction(this_00,local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_70);
    if (pUVar4 != (UFunction *)0x0) goto LAB_146f901b9;
  }
  local_res18 = &local_res8;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,AActor_*,AActor_*,UE::Math::TVector<double>,FHitResult_const_&>
  ::__Internal_BindDynamic<UPathFollowingComponent>'::__l2::<lambda_1>::operator()(&local_res18);
LAB_146f901b9:
  local_a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_b8,&local_58);
  local_98 = local_b0;
  local_90 = local_a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  local_88._padding_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_a0,&local_40);
  local_88.Object = local_98;
  local_88.FunctionName = local_90;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_40);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorHitSignature_MCSignature,AActor,FActorHitSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorHitSignature_MCSignature,AActor,FActorHitSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorHitSignature_MCSignature,AActor,FActorHitSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorHitSignature_MCSignature,AActor,FActorHitSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                    ::__l2::DelegateFName,"OnActorHit");
    _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorHitSignature_MCSignature,AActor,FActorHitSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FVar2 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorHitSignature_MCSignature,AActor,FActorHitSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
          ::__l2::DelegateFName;
  bVar3 = UObjectBase::IsValidLowLevelFast((UObjectBase *)(this + -0x215),false);
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DelegateOwner->IsValidLowLevelFast(false)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                         ,0xd7,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FSparseDelegate::__Internal_AddUnique
            ((FSparseDelegate *)this,(UObject *)(this + -0x215),FVar2,&local_88);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a0.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  return;
}

// AddUnique @ 146f9b100

void __thiscall
TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::
AddUnique(TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>
          *this,TScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  TScriptDelegate<FNotThreadSafeDelegateMode> local_38;
  FReadAccessScope local_20;
  
  local_38._padding_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_20);
  local_38.Object = param_1->Object;
  local_38.FunctionName = param_1->FunctionName;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_20);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                      ::__l2::DelegateFName,"OnEndPlay");
      _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar2 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
          ::__l2::DelegateFName;
  bVar3 = UObjectBase::IsValidLowLevelFast((UObjectBase *)(this + -0x217),false);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelegateOwner->IsValidLowLevelFast(false)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                       ,0xd7,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FSparseDelegate::__Internal_AddUnique
            ((FSparseDelegate *)this,(UObject *)(this + -0x217),FVar2,&local_38);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

