// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 34

// Broadcast<AActor_*,AActor_*,UE::Math::TVector<double>,FHitResult> @ 1473676d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TSparseDynamicDelegate<FActorHitSignature_MCSignature,AActor,FActorHitSignatureInfoGetter>::
Broadcast<AActor_*,AActor_*,UE::Math::TVector<double>,FHitResult>
          (TSparseDynamicDelegate<FActorHitSignature_MCSignature,AActor,FActorHitSignatureInfoGetter>
           *this,AActor *param_1,AActor *param_2,TVector<double> *param_3,FHitResult *param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  FName FVar6;
  bool bVar7;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar8;
  longlong lVar9;
  undefined8 *puVar10;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *local_168;
  FSharedReferencer<1> FStack_160;
  undefined8 local_158;
  FSharedReferencer<1> local_150;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> local_148;
  AActor *local_138;
  AActor *local_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110 [33];
  
  local_168 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0;
  FStack_160.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (*this != (TSparseDynamicDelegate<FActorHitSignature_MCSignature,AActor,FActorHitSignatureInfoGetter>
                )0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorHitSignature_MCSignature,AActor,FActorHitSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorHitSignature_MCSignature,AActor,FActorHitSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorHitSignature_MCSignature,AActor,FActorHitSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorHitSignature_MCSignature,AActor,FActorHitSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                        ::__l2::DelegateFName,"OnActorHit");
        _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorHitSignature_MCSignature,AActor,FActorHitSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    FVar6 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorHitSignature_MCSignature,AActor,FActorHitSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
            ::__l2::DelegateFName;
    bVar7 = UObjectBase::IsValidLowLevelFast((UObjectBase *)(this + -0x215),false);
    if (!bVar7) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("DelegateOwner->IsValidLowLevelFast(false)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                         ,0xd7,L"");
      if (bVar7) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pTVar8 = FSparseDelegateStorage::GetSharedMulticastDelegate
                       (&local_148,(UObject *)(this + -0x215),FVar6);
    local_150.ReferenceController = (pTVar8->SharedReferenceCount).ReferenceController;
    local_168 = pTVar8->Object;
    if (local_150.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_150.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_150.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_158 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_160,&local_150);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_150.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
  }
  if (local_168 != (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
    if (local_168 == (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    memset(local_110,0,0x100);
    local_128 = (param_3->field0_0x0)._s_0.X;
    dStack_120 = (param_3->field0_0x0)._s_0.Y;
    local_118 = (param_3->field0_0x0)._s_0.Z;
    lVar9 = 2;
    puVar10 = local_110;
    do {
      uVar2 = *(undefined8 *)&param_4->Distance;
      uVar3 = *(undefined8 *)&param_4->Location;
      uVar4 = *(undefined8 *)&(param_4->Location).field_0x8;
      *puVar10 = *(undefined8 *)param_4;
      puVar10[1] = uVar2;
      uVar2 = *(undefined8 *)&(param_4->Location).field_0x10;
      uVar5 = *(undefined8 *)&param_4->ImpactPoint;
      puVar10[2] = uVar3;
      puVar10[3] = uVar4;
      uVar3 = *(undefined8 *)&(param_4->ImpactPoint).field_0x8;
      uVar4 = *(undefined8 *)&(param_4->ImpactPoint).field_0x10;
      puVar10[4] = uVar2;
      puVar10[5] = uVar5;
      uVar2 = *(undefined8 *)&param_4->Normal;
      uVar5 = *(undefined8 *)&(param_4->Normal).field_0x8;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      uVar3 = *(undefined8 *)&(param_4->Normal).field_0x10;
      uVar4 = *(undefined8 *)&param_4->ImpactNormal;
      puVar10[8] = uVar2;
      puVar10[9] = uVar5;
      uVar2 = *(undefined8 *)&(param_4->ImpactNormal).field_0x8;
      uVar5 = *(undefined8 *)&(param_4->ImpactNormal).field_0x10;
      puVar10[10] = uVar3;
      puVar10[0xb] = uVar4;
      uVar3 = *(undefined8 *)&param_4->TraceStart;
      uVar4 = *(undefined8 *)&(param_4->TraceStart).field_0x8;
      puVar10[0xc] = uVar2;
      puVar10[0xd] = uVar5;
      puVar10[0xe] = uVar3;
      puVar10[0xf] = uVar4;
      lVar9 = lVar9 + -1;
      param_4 = (FHitResult *)&(param_4->TraceStart).field_0x10;
      puVar10 = puVar10 + 0x10;
    } while (lVar9 != 0);
    local_138 = param_1;
    local_130 = param_2;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              (local_168,&local_138);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_160.ReferenceController);
  return;
}

// Broadcast<UPrimitiveComponent_*,AActor_*,UPrimitiveComponent_*,UE::Math::TVector<double>,FHitResult> @ 147367920

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
TSparseDynamicDelegate<FComponentHitSignature_MCSignature,UPrimitiveComponent,FComponentHitSignatureInfoGetter>
::
Broadcast<UPrimitiveComponent_*,AActor_*,UPrimitiveComponent_*,UE::Math::TVector<double>,FHitResult>
          (TSparseDynamicDelegate<FComponentHitSignature_MCSignature,UPrimitiveComponent,FComponentHitSignatureInfoGetter>
           *this,UPrimitiveComponent *param_1,AActor *param_2,UPrimitiveComponent *param_3,
          TVector<double> *param_4,FHitResult *param_5)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar4;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *local_58;
  FSharedReferencer<1> FStack_50;
  undefined8 local_48;
  FSharedReferencer<1> local_40;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> local_38;
  TVector<double>_u_0 local_28;
  
  local_58 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0;
  FStack_50.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (*this != (TSparseDynamicDelegate<FComponentHitSignature_MCSignature,UPrimitiveComponent,FComponentHitSignatureInfoGetter>
                )0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentHitSignature_MCSignature,UPrimitiveComponent,FComponentHitSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentHitSignature_MCSignature,UPrimitiveComponent,FComponentHitSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentHitSignature_MCSignature,UPrimitiveComponent,FComponentHitSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentHitSignature_MCSignature,UPrimitiveComponent,FComponentHitSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                        ::__l2::DelegateFName,"OnComponentHit");
        _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentHitSignature_MCSignature,UPrimitiveComponent,FComponentHitSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    FVar2 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentHitSignature_MCSignature,UPrimitiveComponent,FComponentHitSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
            ::__l2::DelegateFName;
    bVar3 = UObjectBase::IsValidLowLevelFast((UObjectBase *)(this + -0x520),false);
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
    pTVar4 = FSparseDelegateStorage::GetSharedMulticastDelegate
                       (&local_38,(UObject *)(this + -0x520),FVar2);
    local_40.ReferenceController = (pTVar4->SharedReferenceCount).ReferenceController;
    local_58 = pTVar4->Object;
    if (local_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_40.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_40.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_48 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_50,&local_40);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_58 != (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
    if (local_58 == (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_28._s_0.X = (param_4->field0_0x0)._s_0.X;
    local_28._s_0.Y = (param_4->field0_0x0)._s_0.Y;
    local_28._s_0.Z = (param_4->field0_0x0)._s_0.Z;
    FComponentHitSignature_DelegateWrapper
              (local_58,param_1,param_2,param_3,(TVector<double> *)&local_28._s_0,param_5);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_50.ReferenceController);
  return;
}

// __Internal_AddDynamic<UCameraModifier> @ 1476853b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>
::__Internal_AddDynamic<UCameraModifier>
          (TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>
           *this,UCameraModifier *param_1,pmf_1e07ff77 param_2,FName param_3)

{
  TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>
  TVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  UObject *this_00;
  UFunction *pUVar5;
  FName local_res8;
  UCameraModifier *local_res10;
  FName *local_res20;
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
  
  if (((param_1 == (UCameraModifier *)0x0) || (param_2 == (pmf_1e07ff77)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
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
  if (((param_1 == (UCameraModifier *)0x0) || (param_2 == (pmf_1e07ff77)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UCameraModifier *)0x0)) {
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
    if (pUVar5 != (UFunction *)0x0) goto LAB_1476854d0;
  }
  local_res20 = &local_res8;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,AActor_*>::
  __Internal_BindDynamic<UCameraModifier>'::__l2::<lambda_1>::operator()(&local_res20);
LAB_1476854d0:
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
       `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                    ::__l2::DelegateFName,"OnDestroyed");
    _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FVar3 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
          ::__l2::DelegateFName;
  bVar4 = UObjectBase::IsValidLowLevelFast((UObjectBase *)(this + -0x216),false);
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DelegateOwner->IsValidLowLevelFast(false)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                         ,0xd7,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar4 = FSparseDelegateStorage::Add((UObject *)(this + -0x216),FVar3,&local_88);
  *this = (TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>
           )(bVar4 | (byte)TVar1);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a0.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  return;
}

// __Internal_AddDynamic<UCheatManager> @ 1476e6490

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::
__Internal_AddDynamic<UCheatManager>
          (TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>
           *this,UCheatManager *param_1,pmf_5529b7f1 param_2,FName param_3)

{
  TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>
  TVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  UObject *this_00;
  UFunction *pUVar5;
  FName local_res8;
  UCheatManager *local_res10;
  FName *local_res20;
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
  
  if (((param_1 == (UCheatManager *)0x0) || (param_2 == (pmf_5529b7f1)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
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
  if (((param_1 == (UCheatManager *)0x0) || (param_2 == (pmf_5529b7f1)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UCheatManager *)0x0)) {
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
    if (pUVar5 != (UFunction *)0x0) goto LAB_1476e65b0;
  }
  local_res20 = &local_res8;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,AActor_*,enum_EEndPlayReason::Type>::
  __Internal_BindDynamic<UCheatManager>'::__l2::<lambda_1>::operator()(&local_res20);
LAB_1476e65b0:
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
       `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                    ::__l2::DelegateFName,"OnEndPlay");
    _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FVar3 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
          ::__l2::DelegateFName;
  bVar4 = UObjectBase::IsValidLowLevelFast((UObjectBase *)(this + -0x217),false);
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DelegateOwner->IsValidLowLevelFast(false)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                         ,0xd7,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar4 = FSparseDelegateStorage::Add((UObject *)(this + -0x217),FVar3,&local_88);
  *this = (TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>
           )(bVar4 | (byte)TVar1);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a0.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  return;
}

// __Internal_AddUniqueDynamic<UCharacterMovementComponent> @ 1477e8fc0

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
TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>
::__Internal_AddUniqueDynamic<UCharacterMovementComponent>
          (TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>
           *this,UCharacterMovementComponent *param_1,pmf_bfe637c2 *param_2,FName param_3)

{
  TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>
  TVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  UObject *this_00;
  UFunction *pUVar5;
  FName local_res8;
  UCharacterMovementComponent *local_res10;
  FName *local_res18;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_e8;
  FWeakObjectPtr local_e0;
  FName local_d8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d0;
  FWeakObjectPtr local_c8;
  FName local_c0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  FWeakObjectPtr local_b0;
  FName local_a8;
  TScriptDelegate<FNotThreadSafeDelegateMode> local_a0;
  FReadAccessScope local_88;
  FReadAccessScope local_70;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  if (((param_1 == (UCharacterMovementComponent *)0x0) || (*(longlong *)param_2 == 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                         ,0x18a,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_e8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_e0.ObjectIndex = 0;
  local_e0.ObjectSerialNumber = 0;
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  local_res8 = param_3;
  if (((param_1 == (UCharacterMovementComponent *)0x0) || (*(longlong *)param_2 == 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UCharacterMovementComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_e0,(FObjectPtr)&local_res10);
  local_d8 = local_res8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_e8,&local_88);
  if ((local_d8 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_e0), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
  }
  else {
    pUVar5 = UObject::FindFunction(this_00,local_d8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
    if (pUVar5 != (UFunction *)0x0) goto LAB_1477e90ee;
  }
  local_res18 = &local_res8;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UPrimitiveComponent_*,AActor_*,UPrimitiveComponent_*,int,bool,FHitResult_const_&>
  ::__Internal_BindDynamic<UCharacterMovementComponent>'::__l2::<lambda_1>::operator()(&local_res18)
  ;
LAB_1477e90ee:
  local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_e8,&local_70);
  local_b0 = local_e0;
  local_a8 = local_d8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_70);
  local_d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_b8,&local_58);
  local_c8 = local_b0;
  local_c0 = local_a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                    ::__l2::DelegateFName,"OnComponentBeginOverlap");
    _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FVar3 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
          ::__l2::DelegateFName;
  bVar4 = UObjectBase::IsValidLowLevelFast((UObjectBase *)(this + -0x521),false);
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DelegateOwner->IsValidLowLevelFast(false)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                         ,0xd7,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  TVar1 = *this;
  local_a0._padding_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_d0,&local_40);
  local_a0.Object = local_c8;
  local_a0.FunctionName = local_c0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_40);
  bVar4 = FSparseDelegateStorage::AddUnique((UObject *)(this + -0x521),FVar3,&local_a0);
  *this = (TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>
           )(bVar4 | (byte)TVar1);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d0.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_e8.AccessDetector);
  return;
}

// GetShared @ 14783d640

TSharedPtr<FActorComponentActivatedSignature_MCSignature,1> * __thiscall
TSparseDynamicDelegate<FActorComponentActivatedSignature_MCSignature,UActorComponent,FActorComponentActivatedSignatureInfoGetter>
::GetShared(TSparseDynamicDelegate<FActorComponentActivatedSignature_MCSignature,UActorComponent,FActorComponentActivatedSignatureInfoGetter>
            *this,TSharedPtr<FActorComponentActivatedSignature_MCSignature,1>
                  *__return_storage_ptr__)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  TSharedPtr<FActorComponentActivatedSignature_MCSignature,1> *pTVar4;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar5;
  TSharedPtr<FActorComponentActivatedSignature_MCSignature,1> local_28;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> local_18;
  
  __return_storage_ptr__->Object = (FActorComponentActivatedSignature_MCSignature *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (*this != (TSparseDynamicDelegate<FActorComponentActivatedSignature_MCSignature,UActorComponent,FActorComponentActivatedSignatureInfoGetter>
                )0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorComponentActivatedSignature_MCSignature,UActorComponent,FActorComponentActivatedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorComponentActivatedSignature_MCSignature,UActorComponent,FActorComponentActivatedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorComponentActivatedSignature_MCSignature,UActorComponent,FActorComponentActivatedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorComponentActivatedSignature_MCSignature,UActorComponent,FActorComponentActivatedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                        ::__l2::DelegateFName,"OnComponentActivated");
        _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorComponentActivatedSignature_MCSignature,UActorComponent,FActorComponentActivatedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    FVar2 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorComponentActivatedSignature_MCSignature,UActorComponent,FActorComponentActivatedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
            ::__l2::DelegateFName;
    bVar3 = UObjectBase::IsValidLowLevelFast((UObjectBase *)(this + -0xba),false);
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DelegateOwner->IsValidLowLevelFast(false)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                         ,0xd7,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<FActorComponentActivatedSignature_MCSignature,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    pTVar5 = FSparseDelegateStorage::GetSharedMulticastDelegate
                       (&local_18,(UObject *)(this + -0xba),FVar2);
    local_28.SharedReferenceCount.ReferenceController =
         (pTVar5->SharedReferenceCount).ReferenceController;
    local_28.Object = (FActorComponentActivatedSignature_MCSignature *)pTVar5->Object;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (__return_storage_ptr__ != &local_28) {
      __return_storage_ptr__->Object = local_28.Object;
      local_28.Object = (FActorComponentActivatedSignature_MCSignature *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&local_28.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// GetShared @ 14783d7a0

TSharedPtr<FActorComponentDeactivateSignature_MCSignature,1> * __thiscall
TSparseDynamicDelegate<FActorComponentDeactivateSignature_MCSignature,UActorComponent,FActorComponentDeactivateSignatureInfoGetter>
::GetShared(TSparseDynamicDelegate<FActorComponentDeactivateSignature_MCSignature,UActorComponent,FActorComponentDeactivateSignatureInfoGetter>
            *this,TSharedPtr<FActorComponentDeactivateSignature_MCSignature,1>
                  *__return_storage_ptr__)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  TSharedPtr<FActorComponentDeactivateSignature_MCSignature,1> *pTVar4;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar5;
  TSharedPtr<FActorComponentDeactivateSignature_MCSignature,1> local_28;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> local_18;
  
  __return_storage_ptr__->Object = (FActorComponentDeactivateSignature_MCSignature *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (*this != (TSparseDynamicDelegate<FActorComponentDeactivateSignature_MCSignature,UActorComponent,FActorComponentDeactivateSignatureInfoGetter>
                )0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorComponentDeactivateSignature_MCSignature,UActorComponent,FActorComponentDeactivateSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorComponentDeactivateSignature_MCSignature,UActorComponent,FActorComponentDeactivateSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorComponentDeactivateSignature_MCSignature,UActorComponent,FActorComponentDeactivateSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorComponentDeactivateSignature_MCSignature,UActorComponent,FActorComponentDeactivateSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                        ::__l2::DelegateFName,"OnComponentDeactivated");
        _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorComponentDeactivateSignature_MCSignature,UActorComponent,FActorComponentDeactivateSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    FVar2 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorComponentDeactivateSignature_MCSignature,UActorComponent,FActorComponentDeactivateSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
            ::__l2::DelegateFName;
    bVar3 = UObjectBase::IsValidLowLevelFast((UObjectBase *)(this + -0xbb),false);
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DelegateOwner->IsValidLowLevelFast(false)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                         ,0xd7,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<FActorComponentDeactivateSignature_MCSignature,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    pTVar5 = FSparseDelegateStorage::GetSharedMulticastDelegate
                       (&local_18,(UObject *)(this + -0xbb),FVar2);
    local_28.SharedReferenceCount.ReferenceController =
         (pTVar5->SharedReferenceCount).ReferenceController;
    local_28.Object = (FActorComponentDeactivateSignature_MCSignature *)pTVar5->Object;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (__return_storage_ptr__ != &local_28) {
      __return_storage_ptr__->Object = local_28.Object;
      local_28.Object = (FActorComponentDeactivateSignature_MCSignature *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&local_28.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// Broadcast<AActor_*> @ 147895d90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TSparseDynamicDelegate<FActorEndCursorOverSignature_MCSignature,AActor,FActorEndCursorOverSignatureInfoGetter>
::Broadcast<AActor_*>
          (TSparseDynamicDelegate<FActorEndCursorOverSignature_MCSignature,AActor,FActorEndCursorOverSignatureInfoGetter>
           *this,AActor *param_1)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar4;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *local_38;
  FSharedReferencer<1> FStack_30;
  undefined8 local_28;
  FSharedReferencer<1> local_20;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> local_18;
  
  local_38 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0;
  FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (*this != (TSparseDynamicDelegate<FActorEndCursorOverSignature_MCSignature,AActor,FActorEndCursorOverSignatureInfoGetter>
                )0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndCursorOverSignature_MCSignature,AActor,FActorEndCursorOverSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndCursorOverSignature_MCSignature,AActor,FActorEndCursorOverSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndCursorOverSignature_MCSignature,AActor,FActorEndCursorOverSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndCursorOverSignature_MCSignature,AActor,FActorEndCursorOverSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                        ::__l2::DelegateFName,"OnEndCursorOver");
        _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndCursorOverSignature_MCSignature,AActor,FActorEndCursorOverSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    FVar2 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndCursorOverSignature_MCSignature,AActor,FActorEndCursorOverSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
            ::__l2::DelegateFName;
    bVar3 = UObjectBase::IsValidLowLevelFast((UObjectBase *)(this + -0x20e),false);
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
    pTVar4 = FSparseDelegateStorage::GetSharedMulticastDelegate
                       (&local_18,(UObject *)(this + -0x20e),FVar2);
    local_20.ReferenceController = (pTVar4->SharedReferenceCount).ReferenceController;
    local_38 = pTVar4->Object;
    if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_20.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_30,&local_20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  if (local_38 != (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
    if (local_38 == (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FActorEndCursorOverSignature_DelegateWrapper(local_38,param_1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  return;
}

// Broadcast<AActor_*,AActor_*> @ 147895f20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TSparseDynamicDelegate<FActorBeginOverlapSignature_MCSignature,AActor,FActorBeginOverlapSignatureInfoGetter>
::Broadcast<AActor_*,AActor_*>
          (TSparseDynamicDelegate<FActorBeginOverlapSignature_MCSignature,AActor,FActorBeginOverlapSignatureInfoGetter>
           *this,AActor *param_1,AActor *param_2)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar4;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *local_38;
  FSharedReferencer<1> FStack_30;
  undefined8 local_28;
  FSharedReferencer<1> local_20;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> local_18;
  
  local_38 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0;
  FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (*this != (TSparseDynamicDelegate<FActorBeginOverlapSignature_MCSignature,AActor,FActorBeginOverlapSignatureInfoGetter>
                )0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorBeginOverlapSignature_MCSignature,AActor,FActorBeginOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorBeginOverlapSignature_MCSignature,AActor,FActorBeginOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorBeginOverlapSignature_MCSignature,AActor,FActorBeginOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorBeginOverlapSignature_MCSignature,AActor,FActorBeginOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                        ::__l2::DelegateFName,"OnActorBeginOverlap");
        _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorBeginOverlapSignature_MCSignature,AActor,FActorBeginOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    FVar2 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorBeginOverlapSignature_MCSignature,AActor,FActorBeginOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
            ::__l2::DelegateFName;
    bVar3 = UObjectBase::IsValidLowLevelFast((UObjectBase *)(this + -0x20b),false);
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
    pTVar4 = FSparseDelegateStorage::GetSharedMulticastDelegate
                       (&local_18,(UObject *)(this + -0x20b),FVar2);
    local_20.ReferenceController = (pTVar4->SharedReferenceCount).ReferenceController;
    local_38 = pTVar4->Object;
    if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_20.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_30,&local_20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  if (local_38 != (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
    if (local_38 == (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FActorBeginOverlapSignature_DelegateWrapper(local_38,param_1,param_2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  return;
}

// Broadcast<AActor_*,AActor_*> @ 1478960c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TSparseDynamicDelegate<FActorEndOverlapSignature_MCSignature,AActor,FActorEndOverlapSignatureInfoGetter>
::Broadcast<AActor_*,AActor_*>
          (TSparseDynamicDelegate<FActorEndOverlapSignature_MCSignature,AActor,FActorEndOverlapSignatureInfoGetter>
           *this,AActor *param_1,AActor *param_2)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar4;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *local_38;
  FSharedReferencer<1> FStack_30;
  undefined8 local_28;
  FSharedReferencer<1> local_20;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> local_18;
  
  local_38 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0;
  FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (*this != (TSparseDynamicDelegate<FActorEndOverlapSignature_MCSignature,AActor,FActorEndOverlapSignatureInfoGetter>
                )0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndOverlapSignature_MCSignature,AActor,FActorEndOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndOverlapSignature_MCSignature,AActor,FActorEndOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndOverlapSignature_MCSignature,AActor,FActorEndOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndOverlapSignature_MCSignature,AActor,FActorEndOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                        ::__l2::DelegateFName,"OnActorEndOverlap");
        _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndOverlapSignature_MCSignature,AActor,FActorEndOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    FVar2 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndOverlapSignature_MCSignature,AActor,FActorEndOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
            ::__l2::DelegateFName;
    bVar3 = UObjectBase::IsValidLowLevelFast((UObjectBase *)(this + -0x20c),false);
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
    pTVar4 = FSparseDelegateStorage::GetSharedMulticastDelegate
                       (&local_18,(UObject *)(this + -0x20c),FVar2);
    local_20.ReferenceController = (pTVar4->SharedReferenceCount).ReferenceController;
    local_38 = pTVar4->Object;
    if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_20.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_30,&local_20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  if (local_38 != (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
    if (local_38 == (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FActorEndOverlapSignature_DelegateWrapper(local_38,param_1,param_2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  return;
}

// Broadcast<AActor_*,FKey> @ 147896260

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TSparseDynamicDelegate<FActorOnClickedSignature_MCSignature,AActor,FActorOnClickedSignatureInfoGetter>
::Broadcast<AActor_*,FKey>
          (TSparseDynamicDelegate<FActorOnClickedSignature_MCSignature,AActor,FActorOnClickedSignatureInfoGetter>
           *this,AActor *param_1,FKey *param_2)

{
  atomic<int> *paVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar6;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *local_58;
  FSharedReferencer<1> FStack_50;
  undefined8 local_48;
  FSharedReferencer<1> local_40;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> local_38;
  FKey local_28;
  
  local_58 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0;
  FStack_50.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (*this != (TSparseDynamicDelegate<FActorOnClickedSignature_MCSignature,AActor,FActorOnClickedSignatureInfoGetter>
                )0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorOnClickedSignature_MCSignature,AActor,FActorOnClickedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorOnClickedSignature_MCSignature,AActor,FActorOnClickedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorOnClickedSignature_MCSignature,AActor,FActorOnClickedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorOnClickedSignature_MCSignature,AActor,FActorOnClickedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                      ::__l2::DelegateFName,"OnClicked");
      _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorOnClickedSignature_MCSignature,AActor,FActorOnClickedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    FVar4 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorOnClickedSignature_MCSignature,AActor,FActorOnClickedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
            ::__l2::DelegateFName;
    bVar5 = UObjectBase::IsValidLowLevelFast((UObjectBase *)(this + -0x20f),false);
    if ((!bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("DelegateOwner->IsValidLowLevelFast(false)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                           ,0xd7,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar6 = FSparseDelegateStorage::GetSharedMulticastDelegate
                       (&local_38,(UObject *)(this + -0x20f),FVar4);
    local_40.ReferenceController = (pTVar6->SharedReferenceCount).ReferenceController;
    local_58 = pTVar6->Object;
    if (local_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_40.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_40.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_48 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_50,&local_40);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_58 != (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
    if ((local_58 == (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar2 = (param_2->KeyDetails).SharedReferenceCount.ReferenceController;
    local_28.KeyName = param_2->KeyName;
    local_28.KeyDetails.Object = (param_2->KeyDetails).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      paVar1 = &pTVar2->SharedReferenceCount;
      LOCK();
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
      LOCK();
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
    }
    local_28.KeyDetails.SharedReferenceCount.ReferenceController = pTVar2;
    FActorOnClickedSignature_DelegateWrapper(local_58,param_1,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_50.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
  return;
}

// Broadcast<AActor_*,FKey> @ 147896450

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TSparseDynamicDelegate<FActorOnReleasedSignature_MCSignature,AActor,FActorOnReleasedSignatureInfoGetter>
::Broadcast<AActor_*,FKey>
          (TSparseDynamicDelegate<FActorOnReleasedSignature_MCSignature,AActor,FActorOnReleasedSignatureInfoGetter>
           *this,AActor *param_1,FKey *param_2)

{
  atomic<int> *paVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar6;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *local_58;
  FSharedReferencer<1> FStack_50;
  undefined8 local_48;
  FSharedReferencer<1> local_40;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> local_38;
  FKey local_28;
  
  local_58 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0;
  FStack_50.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (*this != (TSparseDynamicDelegate<FActorOnReleasedSignature_MCSignature,AActor,FActorOnReleasedSignatureInfoGetter>
                )0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorOnReleasedSignature_MCSignature,AActor,FActorOnReleasedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorOnReleasedSignature_MCSignature,AActor,FActorOnReleasedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorOnReleasedSignature_MCSignature,AActor,FActorOnReleasedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorOnReleasedSignature_MCSignature,AActor,FActorOnReleasedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                      ::__l2::DelegateFName,"OnReleased");
      _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorOnReleasedSignature_MCSignature,AActor,FActorOnReleasedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    FVar4 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorOnReleasedSignature_MCSignature,AActor,FActorOnReleasedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
            ::__l2::DelegateFName;
    bVar5 = UObjectBase::IsValidLowLevelFast((UObjectBase *)(this + -0x210),false);
    if ((!bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("DelegateOwner->IsValidLowLevelFast(false)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                           ,0xd7,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar6 = FSparseDelegateStorage::GetSharedMulticastDelegate
                       (&local_38,(UObject *)(this + -0x210),FVar4);
    local_40.ReferenceController = (pTVar6->SharedReferenceCount).ReferenceController;
    local_58 = pTVar6->Object;
    if (local_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_40.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_40.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_48 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_50,&local_40);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_58 != (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
    if ((local_58 == (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar2 = (param_2->KeyDetails).SharedReferenceCount.ReferenceController;
    local_28.KeyName = param_2->KeyName;
    local_28.KeyDetails.Object = (param_2->KeyDetails).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      paVar1 = &pTVar2->SharedReferenceCount;
      LOCK();
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
      LOCK();
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
    }
    local_28.KeyDetails.SharedReferenceCount.ReferenceController = pTVar2;
    FActorOnReleasedSignature_DelegateWrapper(local_58,param_1,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_50.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
  return;
}

// Broadcast<UPrimitiveComponent_*> @ 147896640

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
TSparseDynamicDelegate<FComponentEndCursorOverSignature_MCSignature,UPrimitiveComponent,FComponentEndCursorOverSignatureInfoGetter>
::Broadcast<UPrimitiveComponent_*>
          (TSparseDynamicDelegate<FComponentEndCursorOverSignature_MCSignature,UPrimitiveComponent,FComponentEndCursorOverSignatureInfoGetter>
           *this,UPrimitiveComponent *param_1)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar4;
  UPrimitiveComponent *local_res8;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *local_38;
  FSharedReferencer<1> FStack_30;
  undefined8 local_28;
  FSharedReferencer<1> local_20;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> local_18;
  
  local_38 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0;
  FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (*this != (TSparseDynamicDelegate<FComponentEndCursorOverSignature_MCSignature,UPrimitiveComponent,FComponentEndCursorOverSignatureInfoGetter>
                )0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentEndCursorOverSignature_MCSignature,UPrimitiveComponent,FComponentEndCursorOverSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentEndCursorOverSignature_MCSignature,UPrimitiveComponent,FComponentEndCursorOverSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentEndCursorOverSignature_MCSignature,UPrimitiveComponent,FComponentEndCursorOverSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentEndCursorOverSignature_MCSignature,UPrimitiveComponent,FComponentEndCursorOverSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                        ::__l2::DelegateFName,"OnEndCursorOver");
        _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentEndCursorOverSignature_MCSignature,UPrimitiveComponent,FComponentEndCursorOverSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    FVar2 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentEndCursorOverSignature_MCSignature,UPrimitiveComponent,FComponentEndCursorOverSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
            ::__l2::DelegateFName;
    bVar3 = UObjectBase::IsValidLowLevelFast((UObjectBase *)(this + -0x528),false);
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
    pTVar4 = FSparseDelegateStorage::GetSharedMulticastDelegate
                       (&local_18,(UObject *)(this + -0x528),FVar2);
    local_20.ReferenceController = (pTVar4->SharedReferenceCount).ReferenceController;
    local_38 = pTVar4->Object;
    if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_20.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_30,&local_20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  if (local_38 != (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
    if (local_38 == (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_res8 = param_1;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              (local_38,&local_res8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  return;
}

// Broadcast<UPrimitiveComponent_*,FKey> @ 1478967e0

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
TSparseDynamicDelegate<FComponentOnClickedSignature_MCSignature,UPrimitiveComponent,FComponentOnClickedSignatureInfoGetter>
::Broadcast<UPrimitiveComponent_*,FKey>
          (TSparseDynamicDelegate<FComponentOnClickedSignature_MCSignature,UPrimitiveComponent,FComponentOnClickedSignatureInfoGetter>
           *this,UPrimitiveComponent *param_1,FKey *param_2)

{
  atomic<int> *paVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar6;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *local_58;
  FSharedReferencer<1> FStack_50;
  undefined8 local_48;
  FSharedReferencer<1> local_40;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> local_38;
  UPrimitiveComponent *local_28;
  FName local_20;
  FKeyDetails *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  local_58 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0;
  FStack_50.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (*this != (TSparseDynamicDelegate<FComponentOnClickedSignature_MCSignature,UPrimitiveComponent,FComponentOnClickedSignatureInfoGetter>
                )0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentOnClickedSignature_MCSignature,UPrimitiveComponent,FComponentOnClickedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentOnClickedSignature_MCSignature,UPrimitiveComponent,FComponentOnClickedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentOnClickedSignature_MCSignature,UPrimitiveComponent,FComponentOnClickedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentOnClickedSignature_MCSignature,UPrimitiveComponent,FComponentOnClickedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                      ::__l2::DelegateFName,"OnClicked");
      _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentOnClickedSignature_MCSignature,UPrimitiveComponent,FComponentOnClickedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    FVar4 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentOnClickedSignature_MCSignature,UPrimitiveComponent,FComponentOnClickedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
            ::__l2::DelegateFName;
    bVar5 = UObjectBase::IsValidLowLevelFast((UObjectBase *)(this + -0x529),false);
    if ((!bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("DelegateOwner->IsValidLowLevelFast(false)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                           ,0xd7,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar6 = FSparseDelegateStorage::GetSharedMulticastDelegate
                       (&local_38,(UObject *)(this + -0x529),FVar4);
    local_40.ReferenceController = (pTVar6->SharedReferenceCount).ReferenceController;
    local_58 = pTVar6->Object;
    if (local_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_40.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_40.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_48 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_50,&local_40);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_58 != (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
    if ((local_58 == (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar2 = (param_2->KeyDetails).SharedReferenceCount.ReferenceController;
    local_20 = param_2->KeyName;
    local_18 = (param_2->KeyDetails).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      paVar1 = &pTVar2->SharedReferenceCount;
      LOCK();
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
      LOCK();
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
      LOCK();
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
    }
    local_28 = param_1;
    pTStack_10 = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              (local_58,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_50.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
  return;
}

// Broadcast<UPrimitiveComponent_*,FKey> @ 147896a20

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
TSparseDynamicDelegate<FComponentOnReleasedSignature_MCSignature,UPrimitiveComponent,FComponentOnReleasedSignatureInfoGetter>
::Broadcast<UPrimitiveComponent_*,FKey>
          (TSparseDynamicDelegate<FComponentOnReleasedSignature_MCSignature,UPrimitiveComponent,FComponentOnReleasedSignatureInfoGetter>
           *this,UPrimitiveComponent *param_1,FKey *param_2)

{
  atomic<int> *paVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar6;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *local_58;
  FSharedReferencer<1> FStack_50;
  undefined8 local_48;
  FSharedReferencer<1> local_40;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> local_38;
  UPrimitiveComponent *local_28;
  FName local_20;
  FKeyDetails *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  local_58 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0;
  FStack_50.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (*this != (TSparseDynamicDelegate<FComponentOnReleasedSignature_MCSignature,UPrimitiveComponent,FComponentOnReleasedSignatureInfoGetter>
                )0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentOnReleasedSignature_MCSignature,UPrimitiveComponent,FComponentOnReleasedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentOnReleasedSignature_MCSignature,UPrimitiveComponent,FComponentOnReleasedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentOnReleasedSignature_MCSignature,UPrimitiveComponent,FComponentOnReleasedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentOnReleasedSignature_MCSignature,UPrimitiveComponent,FComponentOnReleasedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                      ::__l2::DelegateFName,"OnReleased");
      _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentOnReleasedSignature_MCSignature,UPrimitiveComponent,FComponentOnReleasedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    FVar4 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentOnReleasedSignature_MCSignature,UPrimitiveComponent,FComponentOnReleasedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
            ::__l2::DelegateFName;
    bVar5 = UObjectBase::IsValidLowLevelFast((UObjectBase *)(this + -0x52a),false);
    if ((!bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("DelegateOwner->IsValidLowLevelFast(false)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                           ,0xd7,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar6 = FSparseDelegateStorage::GetSharedMulticastDelegate
                       (&local_38,(UObject *)(this + -0x52a),FVar4);
    local_40.ReferenceController = (pTVar6->SharedReferenceCount).ReferenceController;
    local_58 = pTVar6->Object;
    if (local_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_40.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_40.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_48 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_50,&local_40);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_58 != (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
    if ((local_58 == (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar2 = (param_2->KeyDetails).SharedReferenceCount.ReferenceController;
    local_20 = param_2->KeyName;
    local_18 = (param_2->KeyDetails).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      paVar1 = &pTVar2->SharedReferenceCount;
      LOCK();
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
      LOCK();
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
      LOCK();
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
    }
    local_28 = param_1;
    pTStack_10 = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              (local_58,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_50.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
  return;
}

// Broadcast<UPrimitiveComponent_*,enum_EComponentPhysicsStateChange> @ 147896c60

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
TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>
::Broadcast<UPrimitiveComponent_*,enum_EComponentPhysicsStateChange>
          (TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>
           *this,UPrimitiveComponent *param_1,EComponentPhysicsStateChange param_2)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar4;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *local_48;
  FSharedReferencer<1> FStack_40;
  undefined8 local_38;
  FSharedReferencer<1> local_30;
  UPrimitiveComponent *local_28;
  EComponentPhysicsStateChange local_20;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> local_18;
  
  local_48 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0;
  FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (*this != (TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>
                )0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>::GetDelegateName(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>::GetDelegateName(void)const___ptr64'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>::GetDelegateName(void)const___ptr64'
                        ::__l2::DelegateFName,"OnComponentPhysicsStateChanged");
        _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    FVar2 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>::GetDelegateName(void)const___ptr64'
            ::__l2::DelegateFName;
    bVar3 = UObjectBase::IsValidLowLevelFast((UObjectBase *)(this + -0x526),false);
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
    pTVar4 = FSparseDelegateStorage::GetSharedMulticastDelegate
                       (&local_18,(UObject *)(this + -0x526),FVar2);
    local_30.ReferenceController = (pTVar4->SharedReferenceCount).ReferenceController;
    local_48 = pTVar4->Object;
    if (local_30.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_30.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_30.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_40,&local_30);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_30.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  if (local_48 != (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
    if (local_48 == (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_28 = param_1;
    local_20 = param_2;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              (local_48,&local_28);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_40.ReferenceController);
  return;
}

// Broadcast<enum_ETouchIndex::Type,AActor_*> @ 147896e10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TSparseDynamicDelegate<FActorEndTouchOverSignature_MCSignature,AActor,FActorEndTouchOverSignatureInfoGetter>
::Broadcast<enum_ETouchIndex::Type,AActor_*>
          (TSparseDynamicDelegate<FActorEndTouchOverSignature_MCSignature,AActor,FActorEndTouchOverSignatureInfoGetter>
           *this,Type param_1,AActor *param_2)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar4;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *local_38;
  FSharedReferencer<1> FStack_30;
  undefined8 local_28;
  FSharedReferencer<1> local_20;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> local_18;
  
  local_38 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0;
  FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (*this != (TSparseDynamicDelegate<FActorEndTouchOverSignature_MCSignature,AActor,FActorEndTouchOverSignatureInfoGetter>
                )0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndTouchOverSignature_MCSignature,AActor,FActorEndTouchOverSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndTouchOverSignature_MCSignature,AActor,FActorEndTouchOverSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndTouchOverSignature_MCSignature,AActor,FActorEndTouchOverSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndTouchOverSignature_MCSignature,AActor,FActorEndTouchOverSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                        ::__l2::DelegateFName,"OnInputTouchLeave");
        _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndTouchOverSignature_MCSignature,AActor,FActorEndTouchOverSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    FVar2 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndTouchOverSignature_MCSignature,AActor,FActorEndTouchOverSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
            ::__l2::DelegateFName;
    bVar3 = UObjectBase::IsValidLowLevelFast((UObjectBase *)(this + -0x214),false);
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
    pTVar4 = FSparseDelegateStorage::GetSharedMulticastDelegate
                       (&local_18,(UObject *)(this + -0x214),FVar2);
    local_20.ReferenceController = (pTVar4->SharedReferenceCount).ReferenceController;
    local_38 = pTVar4->Object;
    if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_20.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_30,&local_20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  if (local_38 != (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
    if (local_38 == (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FActorEndTouchOverSignature_DelegateWrapper(local_38,param_1,param_2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  return;
}

// Broadcast<enum_ETouchIndex::Type,UPrimitiveComponent_*> @ 147896fb0

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
TSparseDynamicDelegate<FComponentEndTouchOverSignature_MCSignature,UPrimitiveComponent,FComponentEndTouchOverSignatureInfoGetter>
::Broadcast<enum_ETouchIndex::Type,UPrimitiveComponent_*>
          (TSparseDynamicDelegate<FComponentEndTouchOverSignature_MCSignature,UPrimitiveComponent,FComponentEndTouchOverSignatureInfoGetter>
           *this,Type param_1,UPrimitiveComponent *param_2)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar4;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *local_48;
  FSharedReferencer<1> FStack_40;
  undefined8 local_38;
  FSharedReferencer<1> local_30;
  undefined1 local_28 [8];
  UPrimitiveComponent *local_20;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> local_18;
  
  local_48 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0;
  FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (*this != (TSparseDynamicDelegate<FComponentEndTouchOverSignature_MCSignature,UPrimitiveComponent,FComponentEndTouchOverSignatureInfoGetter>
                )0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentEndTouchOverSignature_MCSignature,UPrimitiveComponent,FComponentEndTouchOverSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentEndTouchOverSignature_MCSignature,UPrimitiveComponent,FComponentEndTouchOverSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentEndTouchOverSignature_MCSignature,UPrimitiveComponent,FComponentEndTouchOverSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentEndTouchOverSignature_MCSignature,UPrimitiveComponent,FComponentEndTouchOverSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                        ::__l2::DelegateFName,"OnInputTouchLeave");
        _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentEndTouchOverSignature_MCSignature,UPrimitiveComponent,FComponentEndTouchOverSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    FVar2 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentEndTouchOverSignature_MCSignature,UPrimitiveComponent,FComponentEndTouchOverSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
            ::__l2::DelegateFName;
    bVar3 = UObjectBase::IsValidLowLevelFast((UObjectBase *)(this + -0x52e),false);
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
    pTVar4 = FSparseDelegateStorage::GetSharedMulticastDelegate
                       (&local_18,(UObject *)(this + -0x52e),FVar2);
    local_30.ReferenceController = (pTVar4->SharedReferenceCount).ReferenceController;
    local_48 = pTVar4->Object;
    if (local_30.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_30.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_30.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_40,&local_30);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_30.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  if (local_48 != (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
    if (local_48 == (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_28[0] = (undefined1)param_1;
    local_20 = param_2;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              (local_48,local_28);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_40.ReferenceController);
  return;
}

// __Internal_AddUniqueDynamic<UChildActorComponent> @ 1478a5030

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>
::__Internal_AddUniqueDynamic<UChildActorComponent>
          (TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>
           *this,UChildActorComponent *param_1,pmf_f34bcc77 *param_2,FName param_3)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  UObject *this_00;
  UFunction *pUVar4;
  FName local_res8;
  UChildActorComponent *local_res10;
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
  
  if (((param_1 == (UChildActorComponent *)0x0) || (*(longlong *)param_2 == 0)) &&
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
  if (((param_1 == (UChildActorComponent *)0x0) || (*(longlong *)param_2 == 0)) &&
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
     (param_1 != (UChildActorComponent *)0x0)) {
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
    if (pUVar4 != (UFunction *)0x0) goto LAB_1478a5159;
  }
  local_res18 = &local_res8;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,AActor_*>::
  __Internal_BindDynamic<UChildActorComponent>'::__l2::<lambda_1>::operator()(&local_res18);
LAB_1478a5159:
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
       `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                    ::__l2::DelegateFName,"OnDestroyed");
    _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FVar2 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
          ::__l2::DelegateFName;
  bVar3 = UObjectBase::IsValidLowLevelFast((UObjectBase *)(this + -0x216),false);
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
            ((FSparseDelegate *)this,(UObject *)(this + -0x216),FVar2,&local_88);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a0.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  return;
}

// __Internal_AddUniqueDynamic<UInputComponent> @ 1478a52a0

void __thiscall
TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::
__Internal_AddUniqueDynamic<UInputComponent>
          (TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>
           *this,UInputComponent *param_1,pmf_ac14fc04 *param_2,FName param_3)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  UObject *this_00;
  UFunction *pUVar4;
  FName local_res8;
  UInputComponent *local_res10;
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
  
  if (((param_1 == (UInputComponent *)0x0) || (*(longlong *)param_2 == 0)) &&
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
  if (((param_1 == (UInputComponent *)0x0) || (*(longlong *)param_2 == 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UInputComponent *)0x0)) {
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
    if (pUVar4 != (UFunction *)0x0) goto LAB_1478a53c9;
  }
  local_res18 = &local_res8;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,AActor_*,enum_EEndPlayReason::Type>::
  __Internal_BindDynamic<UInputComponent>'::__l2::<lambda_1>::operator()(&local_res18);
LAB_1478a53c9:
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
       `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                    ::__l2::DelegateFName,"OnEndPlay");
    _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FVar2 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
          ::__l2::DelegateFName;
  bVar3 = UObjectBase::IsValidLowLevelFast((UObjectBase *)(this + -0x217),false);
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
            ((FSparseDelegate *)this,(UObject *)(this + -0x217),FVar2,&local_88);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a0.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  return;
}

// __Internal_AddUniqueDynamic<UMovementComponent> @ 1478a5510

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TSparseDynamicDelegate<FPhysicsVolumeChanged_MCSignature,USceneComponent,FPhysicsVolumeChangedInfoGetter>
::__Internal_AddUniqueDynamic<UMovementComponent>
          (TSparseDynamicDelegate<FPhysicsVolumeChanged_MCSignature,USceneComponent,FPhysicsVolumeChangedInfoGetter>
           *this,UMovementComponent *param_1,pmf_eec73839 *param_2,FName param_3)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  UObject *this_00;
  UFunction *pUVar4;
  FName local_res8;
  UMovementComponent *local_res10;
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
  
  if (((param_1 == (UMovementComponent *)0x0) || (*(longlong *)param_2 == 0)) &&
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
  if (((param_1 == (UMovementComponent *)0x0) || (*(longlong *)param_2 == 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMovementComponent *)0x0)
     ) {
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
    if (pUVar4 != (UFunction *)0x0) goto LAB_1478a5639;
  }
  local_res18 = &local_res8;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,APhysicsVolume_*>::
  __Internal_BindDynamic<UMovementComponent>'::__l2::<lambda_1>::operator()(&local_res18);
LAB_1478a5639:
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
       `protected:_class_FName___cdecl_TSparseDynamicDelegate<FPhysicsVolumeChanged_MCSignature,USceneComponent,FPhysicsVolumeChangedInfoGetter>::GetDelegateName(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FPhysicsVolumeChanged_MCSignature,USceneComponent,FPhysicsVolumeChangedInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `protected:_class_FName___cdecl_TSparseDynamicDelegate<FPhysicsVolumeChanged_MCSignature,USceneComponent,FPhysicsVolumeChangedInfoGetter>::GetDelegateName(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FPhysicsVolumeChanged_MCSignature,USceneComponent,FPhysicsVolumeChangedInfoGetter>::GetDelegateName(void)const___ptr64'
                    ::__l2::DelegateFName,"PhysicsVolumeChangedDelegate");
    _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FPhysicsVolumeChanged_MCSignature,USceneComponent,FPhysicsVolumeChangedInfoGetter>::GetDelegateName(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FVar2 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FPhysicsVolumeChanged_MCSignature,USceneComponent,FPhysicsVolumeChangedInfoGetter>::GetDelegateName(void)const___ptr64'
          ::__l2::DelegateFName;
  bVar3 = UObjectBase::IsValidLowLevelFast((UObjectBase *)(this + -0x1ad),false);
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
            ((FSparseDelegate *)this,(UObject *)(this + -0x1ad),FVar2,&local_88);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a0.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  return;
}

// GetShared @ 1478db4a0

TSharedPtr<FComponentBeginOverlapSignature_MCSignature,1> * __thiscall
TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>
::GetShared(TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>
            *this,TSharedPtr<FComponentBeginOverlapSignature_MCSignature,1> *__return_storage_ptr__)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  TSharedPtr<FComponentBeginOverlapSignature_MCSignature,1> *pTVar4;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar5;
  TSharedPtr<FComponentBeginOverlapSignature_MCSignature,1> local_28;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> local_18;
  
  __return_storage_ptr__->Object = (FComponentBeginOverlapSignature_MCSignature *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (*this != (TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>
                )0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                        ::__l2::DelegateFName,"OnComponentBeginOverlap");
        _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    FVar2 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
            ::__l2::DelegateFName;
    bVar3 = UObjectBase::IsValidLowLevelFast((UObjectBase *)(this + -0x521),false);
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DelegateOwner->IsValidLowLevelFast(false)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                         ,0xd7,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<FComponentBeginOverlapSignature_MCSignature,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    pTVar5 = FSparseDelegateStorage::GetSharedMulticastDelegate
                       (&local_18,(UObject *)(this + -0x521),FVar2);
    local_28.SharedReferenceCount.ReferenceController =
         (pTVar5->SharedReferenceCount).ReferenceController;
    local_28.Object = (FComponentBeginOverlapSignature_MCSignature *)pTVar5->Object;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (__return_storage_ptr__ != &local_28) {
      __return_storage_ptr__->Object = local_28.Object;
      local_28.Object = (FComponentBeginOverlapSignature_MCSignature *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&local_28.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// GetShared @ 1478db600

TSharedPtr<FComponentEndOverlapSignature_MCSignature,1> * __thiscall
TSparseDynamicDelegate<FComponentEndOverlapSignature_MCSignature,UPrimitiveComponent,FComponentEndOverlapSignatureInfoGetter>
::GetShared(TSparseDynamicDelegate<FComponentEndOverlapSignature_MCSignature,UPrimitiveComponent,FComponentEndOverlapSignatureInfoGetter>
            *this,TSharedPtr<FComponentEndOverlapSignature_MCSignature,1> *__return_storage_ptr__)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  TSharedPtr<FComponentEndOverlapSignature_MCSignature,1> *pTVar4;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar5;
  TSharedPtr<FComponentEndOverlapSignature_MCSignature,1> local_28;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> local_18;
  
  __return_storage_ptr__->Object = (FComponentEndOverlapSignature_MCSignature *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (*this != (TSparseDynamicDelegate<FComponentEndOverlapSignature_MCSignature,UPrimitiveComponent,FComponentEndOverlapSignatureInfoGetter>
                )0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentEndOverlapSignature_MCSignature,UPrimitiveComponent,FComponentEndOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentEndOverlapSignature_MCSignature,UPrimitiveComponent,FComponentEndOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentEndOverlapSignature_MCSignature,UPrimitiveComponent,FComponentEndOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentEndOverlapSignature_MCSignature,UPrimitiveComponent,FComponentEndOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                        ::__l2::DelegateFName,"OnComponentEndOverlap");
        _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentEndOverlapSignature_MCSignature,UPrimitiveComponent,FComponentEndOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    FVar2 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentEndOverlapSignature_MCSignature,UPrimitiveComponent,FComponentEndOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
            ::__l2::DelegateFName;
    bVar3 = UObjectBase::IsValidLowLevelFast((UObjectBase *)(this + -0x522),false);
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DelegateOwner->IsValidLowLevelFast(false)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                         ,0xd7,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<FComponentEndOverlapSignature_MCSignature,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    pTVar5 = FSparseDelegateStorage::GetSharedMulticastDelegate
                       (&local_18,(UObject *)(this + -0x522),FVar2);
    local_28.SharedReferenceCount.ReferenceController =
         (pTVar5->SharedReferenceCount).ReferenceController;
    local_28.Object = (FComponentEndOverlapSignature_MCSignature *)pTVar5->Object;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (__return_storage_ptr__ != &local_28) {
      __return_storage_ptr__->Object = local_28.Object;
      local_28.Object = (FComponentEndOverlapSignature_MCSignature *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&local_28.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// __Internal_AddDynamic<UAutoDestroySubsystem> @ 147bb73a0

void __thiscall
TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::
__Internal_AddDynamic<UAutoDestroySubsystem>
          (TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>
           *this,UAutoDestroySubsystem *param_1,pmf_6d303435 *param_2,FName param_3)

{
  TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>
  TVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  UObject *this_00;
  UFunction *pUVar5;
  FName local_res8;
  UAutoDestroySubsystem *local_res10;
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
  
  if (((param_1 == (UAutoDestroySubsystem *)0x0) || (*(longlong *)param_2 == 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
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
  if (((param_1 == (UAutoDestroySubsystem *)0x0) || (*(longlong *)param_2 == 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UAutoDestroySubsystem *)0x0)) {
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
    if (pUVar5 != (UFunction *)0x0) goto LAB_147bb74c9;
  }
  local_res18 = &local_res8;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,AActor_*,enum_EEndPlayReason::Type>::
  __Internal_BindDynamic<UAutoDestroySubsystem>'::__l2::<lambda_1>::operator()(&local_res18);
LAB_147bb74c9:
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
       `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                    ::__l2::DelegateFName,"OnEndPlay");
    _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FVar3 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
          ::__l2::DelegateFName;
  bVar4 = UObjectBase::IsValidLowLevelFast((UObjectBase *)(this + -0x217),false);
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DelegateOwner->IsValidLowLevelFast(false)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                         ,0xd7,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar4 = FSparseDelegateStorage::Add((UObject *)(this + -0x217),FVar3,&local_88);
  *this = (TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>
           )(bVar4 | (byte)TVar1);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a0.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  return;
}

// RemoveAll @ 147bfc950

void __thiscall
TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::
RemoveAll(TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>
          *this,UObject *param_1)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>
  TVar4;
  
  if (*this != (TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>
                )0x0) {
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
    TVar4 = (TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>
             )FSparseDelegateStorage::RemoveAll((UObject *)(this + -0x217),FVar2,param_1);
    *this = TVar4;
  }
  return;
}

// __Internal_AddUniqueDynamic<ALODActor> @ 147ea3130

void __thiscall
TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::
__Internal_AddUniqueDynamic<ALODActor>
          (TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>
           *this,ALODActor *param_1,pmf_b8875af7 param_2,FName param_3)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  UObject *this_00;
  UFunction *pUVar4;
  FName local_res8;
  ALODActor *local_res10;
  FName *local_res20;
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
  
  if (((param_1 == (ALODActor *)0x0) || (param_2 == (pmf_b8875af7)0x0)) &&
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
  if (((param_1 == (ALODActor *)0x0) || (param_2 == (pmf_b8875af7)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (ALODActor *)0x0)) {
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
    if (pUVar4 != (UFunction *)0x0) goto LAB_147ea3250;
  }
  local_res20 = &local_res8;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,AActor_*,enum_EEndPlayReason::Type>::
  __Internal_BindDynamic<ALODActor>'::__l2::<lambda_1>::operator()(&local_res20);
LAB_147ea3250:
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
       `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                    ::__l2::DelegateFName,"OnEndPlay");
    _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FVar2 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
          ::__l2::DelegateFName;
  bVar3 = UObjectBase::IsValidLowLevelFast((UObjectBase *)(this + -0x217),false);
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
            ((FSparseDelegate *)this,(UObject *)(this + -0x217),FVar2,&local_88);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a0.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  return;
}

// __Internal_AddUniqueDynamic<ALightWeightInstanceManager> @ 147ea3390

void __thiscall
TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>
::__Internal_AddUniqueDynamic<ALightWeightInstanceManager>
          (TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>
           *this,ALightWeightInstanceManager *param_1,pmf_656f76af *param_2,FName param_3)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  UObject *this_00;
  UFunction *pUVar4;
  FName local_res8;
  ALightWeightInstanceManager *local_res10;
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
  
  if (((param_1 == (ALightWeightInstanceManager *)0x0) || (*(longlong *)param_2 == 0)) &&
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
  if (((param_1 == (ALightWeightInstanceManager *)0x0) || (*(longlong *)param_2 == 0)) &&
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
     (param_1 != (ALightWeightInstanceManager *)0x0)) {
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
    if (pUVar4 != (UFunction *)0x0) goto LAB_147ea34b9;
  }
  local_res18 = &local_res8;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,AActor_*>::
  __Internal_BindDynamic<ALightWeightInstanceManager>'::__l2::<lambda_1>::operator()(&local_res18);
LAB_147ea34b9:
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
       `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                    ::__l2::DelegateFName,"OnDestroyed");
    _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FVar2 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
          ::__l2::DelegateFName;
  bVar3 = UObjectBase::IsValidLowLevelFast((UObjectBase *)(this + -0x216),false);
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
            ((FSparseDelegate *)this,(UObject *)(this + -0x216),FVar2,&local_88);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a0.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  return;
}

// Broadcast<UParticleSystemComponent_*> @ 14814ffc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TSparseDynamicDelegate<FActorComponentDeactivateSignature_MCSignature,UActorComponent,FActorComponentDeactivateSignatureInfoGetter>
::Broadcast<UParticleSystemComponent_*>
          (TSparseDynamicDelegate<FActorComponentDeactivateSignature_MCSignature,UActorComponent,FActorComponentDeactivateSignatureInfoGetter>
           *this,UParticleSystemComponent *param_1)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar4;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *local_38;
  FSharedReferencer<1> FStack_30;
  undefined8 local_28;
  FSharedReferencer<1> local_20;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> local_18;
  
  local_38 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0;
  FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (*this != (TSparseDynamicDelegate<FActorComponentDeactivateSignature_MCSignature,UActorComponent,FActorComponentDeactivateSignatureInfoGetter>
                )0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorComponentDeactivateSignature_MCSignature,UActorComponent,FActorComponentDeactivateSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorComponentDeactivateSignature_MCSignature,UActorComponent,FActorComponentDeactivateSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorComponentDeactivateSignature_MCSignature,UActorComponent,FActorComponentDeactivateSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorComponentDeactivateSignature_MCSignature,UActorComponent,FActorComponentDeactivateSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                        ::__l2::DelegateFName,"OnComponentDeactivated");
        _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorComponentDeactivateSignature_MCSignature,UActorComponent,FActorComponentDeactivateSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    FVar2 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorComponentDeactivateSignature_MCSignature,UActorComponent,FActorComponentDeactivateSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
            ::__l2::DelegateFName;
    bVar3 = UObjectBase::IsValidLowLevelFast((UObjectBase *)(this + -0xbb),false);
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
    pTVar4 = FSparseDelegateStorage::GetSharedMulticastDelegate
                       (&local_18,(UObject *)(this + -0xbb),FVar2);
    local_20.ReferenceController = (pTVar4->SharedReferenceCount).ReferenceController;
    local_38 = pTVar4->Object;
    if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_20.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_30,&local_20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  if (local_38 != (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
    if (local_38 == (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FActorComponentDeactivateSignature_DelegateWrapper(local_38,(UActorComponent *)param_1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  return;
}

// __Internal_AddDynamic<UClusterUnionComponent> @ 14824c1c0

void __thiscall
TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>
::__Internal_AddDynamic<UClusterUnionComponent>
          (TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>
           *this,UClusterUnionComponent *param_1,pmf_37216b21 *param_2,FName param_3)

{
  TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>
  TVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  UObject *this_00;
  UFunction *pUVar5;
  FName local_res8;
  UClusterUnionComponent *local_res10;
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
  
  if (((param_1 == (UClusterUnionComponent *)0x0) || (*(longlong *)param_2 == 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
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
  if (((param_1 == (UClusterUnionComponent *)0x0) || (*(longlong *)param_2 == 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UClusterUnionComponent *)0x0)) {
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
    if (pUVar5 != (UFunction *)0x0) goto LAB_14824c2e9;
  }
  local_res18 = &local_res8;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UPrimitiveComponent_*,enum_EComponentPhysicsStateChange>
  ::__Internal_BindDynamic<UClusterUnionComponent>'::__l2::<lambda_1>::operator()(&local_res18);
LAB_14824c2e9:
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
       `protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>::GetDelegateName(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>::GetDelegateName(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>::GetDelegateName(void)const___ptr64'
                    ::__l2::DelegateFName,"OnComponentPhysicsStateChanged");
    _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>::GetDelegateName(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FVar3 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>::GetDelegateName(void)const___ptr64'
          ::__l2::DelegateFName;
  bVar4 = UObjectBase::IsValidLowLevelFast((UObjectBase *)(this + -0x526),false);
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DelegateOwner->IsValidLowLevelFast(false)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                         ,0xd7,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar4 = FSparseDelegateStorage::Add((UObject *)(this + -0x526),FVar3,&local_88);
  *this = (TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>
           )(bVar4 | (byte)TVar1);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a0.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  return;
}

// __Internal_AddUniqueDynamic<UClusterUnionComponent> @ 14824c430

void __thiscall
TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>
::__Internal_AddUniqueDynamic<UClusterUnionComponent>
          (TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>
           *this,UClusterUnionComponent *param_1,pmf_37216b21 *param_2,FName param_3)

{
  TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>
  TVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  UObject *this_00;
  UFunction *pUVar5;
  FName local_res8;
  UClusterUnionComponent *local_res10;
  FName *local_res18;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_e8;
  FWeakObjectPtr local_e0;
  FName local_d8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d0;
  FWeakObjectPtr local_c8;
  FName local_c0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  FWeakObjectPtr local_b0;
  FName local_a8;
  TScriptDelegate<FNotThreadSafeDelegateMode> local_a0;
  FReadAccessScope local_88;
  FReadAccessScope local_70;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  if (((param_1 == (UClusterUnionComponent *)0x0) || (*(longlong *)param_2 == 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                         ,0x18a,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_e8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_e0.ObjectIndex = 0;
  local_e0.ObjectSerialNumber = 0;
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  local_res8 = param_3;
  if (((param_1 == (UClusterUnionComponent *)0x0) || (*(longlong *)param_2 == 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UClusterUnionComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_e0,(FObjectPtr)&local_res10);
  local_d8 = local_res8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_e8,&local_88);
  if ((local_d8 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_e0), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
  }
  else {
    pUVar5 = UObject::FindFunction(this_00,local_d8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
    if (pUVar5 != (UFunction *)0x0) goto LAB_14824c55e;
  }
  local_res18 = &local_res8;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UPrimitiveComponent_*,enum_EComponentPhysicsStateChange>
  ::__Internal_BindDynamic<UClusterUnionComponent>'::__l2::<lambda_1>::operator()(&local_res18);
LAB_14824c55e:
  local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_e8,&local_70);
  local_b0 = local_e0;
  local_a8 = local_d8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_70);
  local_d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_b8,&local_58);
  local_c8 = local_b0;
  local_c0 = local_a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>::GetDelegateName(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>::GetDelegateName(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>::GetDelegateName(void)const___ptr64'
                    ::__l2::DelegateFName,"OnComponentPhysicsStateChanged");
    _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>::GetDelegateName(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FVar3 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>::GetDelegateName(void)const___ptr64'
          ::__l2::DelegateFName;
  bVar4 = UObjectBase::IsValidLowLevelFast((UObjectBase *)(this + -0x526),false);
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DelegateOwner->IsValidLowLevelFast(false)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                         ,0xd7,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  TVar1 = *this;
  local_a0._padding_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_d0,&local_40);
  local_a0.Object = local_c8;
  local_a0.FunctionName = local_c0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_40);
  bVar4 = FSparseDelegateStorage::AddUnique((UObject *)(this + -0x526),FVar3,&local_a0);
  *this = (TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>
           )(bVar4 | (byte)TVar1);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d0.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_e8.AccessDetector);
  return;
}

// __Internal_RemoveDynamic<UClusterUnionComponent> @ 14824c6e0

void __thiscall
TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>
::__Internal_RemoveDynamic<UClusterUnionComponent>
          (TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>
           *this,UClusterUnionComponent *param_1,pmf_37216b21 *param_2,FName param_3)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>
  TVar4;
  
  if ((param_1 == (UClusterUnionComponent *)0x0) || (*(longlong *)param_2 == 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InUserObject != nullptr && InMethodPtr != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                       ,0x1a1,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*this != (TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>
                )0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>::GetDelegateName(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>::GetDelegateName(void)const___ptr64'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>::GetDelegateName(void)const___ptr64'
                        ::__l2::DelegateFName,"OnComponentPhysicsStateChanged");
        _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    FVar2 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>::GetDelegateName(void)const___ptr64'
            ::__l2::DelegateFName;
    bVar3 = UObjectBase::IsValidLowLevelFast((UObjectBase *)(this + -0x526),false);
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
    TVar4 = (TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>
             )FSparseDelegateStorage::Remove
                        ((UObject *)(this + -0x526),FVar2,(UObject *)param_1,param_3);
    *this = TVar4;
  }
  return;
}

// __Internal_AddUniqueDynamic<UNetworkPhysicsSettingsComponent> @ 1482d7d60

void __thiscall
TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>
::__Internal_AddUniqueDynamic<UNetworkPhysicsSettingsComponent>
          (TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>
           *this,UNetworkPhysicsSettingsComponent *param_1,pmf_22815a88 *param_2,FName param_3)

{
  TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>
  TVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  UObject *this_00;
  UFunction *pUVar5;
  FName local_res8;
  UNetworkPhysicsSettingsComponent *local_res10;
  FName *local_res18;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_e8;
  FWeakObjectPtr local_e0;
  FName local_d8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d0;
  FWeakObjectPtr local_c8;
  FName local_c0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  FWeakObjectPtr local_b0;
  FName local_a8;
  TScriptDelegate<FNotThreadSafeDelegateMode> local_a0;
  FReadAccessScope local_88;
  FReadAccessScope local_70;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  if (((param_1 == (UNetworkPhysicsSettingsComponent *)0x0) || (*(longlong *)param_2 == 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                         ,0x18a,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_e8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_e0.ObjectIndex = 0;
  local_e0.ObjectSerialNumber = 0;
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  local_res8 = param_3;
  if (((param_1 == (UNetworkPhysicsSettingsComponent *)0x0) || (*(longlong *)param_2 == 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UNetworkPhysicsSettingsComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_e0,(FObjectPtr)&local_res10);
  local_d8 = local_res8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_e8,&local_88);
  if ((local_d8 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_e0), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
  }
  else {
    pUVar5 = UObject::FindFunction(this_00,local_d8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
    if (pUVar5 != (UFunction *)0x0) goto LAB_1482d7e8e;
  }
  local_res18 = &local_res8;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UPrimitiveComponent_*,enum_EComponentPhysicsStateChange>
  ::__Internal_BindDynamic<UNetworkPhysicsSettingsComponent>'::__l2::<lambda_1>::operator()
            (&local_res18);
LAB_1482d7e8e:
  local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_e8,&local_70);
  local_b0 = local_e0;
  local_a8 = local_d8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_70);
  local_d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_b8,&local_58);
  local_c8 = local_b0;
  local_c0 = local_a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>::GetDelegateName(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>::GetDelegateName(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>::GetDelegateName(void)const___ptr64'
                    ::__l2::DelegateFName,"OnComponentPhysicsStateChanged");
    _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>::GetDelegateName(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FVar3 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>::GetDelegateName(void)const___ptr64'
          ::__l2::DelegateFName;
  bVar4 = UObjectBase::IsValidLowLevelFast((UObjectBase *)(this + -0x526),false);
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DelegateOwner->IsValidLowLevelFast(false)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                         ,0xd7,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  TVar1 = *this;
  local_a0._padding_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_d0,&local_40);
  local_a0.Object = local_c8;
  local_a0.FunctionName = local_c0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_40);
  bVar4 = FSparseDelegateStorage::AddUnique((UObject *)(this + -0x526),FVar3,&local_a0);
  *this = (TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>
           )(bVar4 | (byte)TVar1);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d0.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_e8.AccessDetector);
  return;
}

// __Internal_AddDynamic<APlayerState> @ 148348140

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
TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>
::__Internal_AddDynamic<APlayerState>
          (TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>
           *this,APlayerState *param_1,pmf_8457e1b1 param_2,FName param_3)

{
  TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>
  TVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  UObject *this_00;
  UFunction *pUVar5;
  FName local_res8;
  APlayerState *local_res10;
  FName *local_res20;
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
  
  if (((param_1 == (APlayerState *)0x0) || (param_2 == (pmf_8457e1b1)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
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
  if (((param_1 == (APlayerState *)0x0) || (param_2 == (pmf_8457e1b1)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (APlayerState *)0x0)) {
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
    if (pUVar5 != (UFunction *)0x0) goto LAB_148348260;
  }
  local_res20 = &local_res8;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,AActor_*>::
  __Internal_BindDynamic<APlayerState>'::__l2::<lambda_1>::operator()(&local_res20);
LAB_148348260:
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
       `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                    ::__l2::DelegateFName,"OnDestroyed");
    _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FVar3 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
          ::__l2::DelegateFName;
  bVar4 = UObjectBase::IsValidLowLevelFast((UObjectBase *)(this + -0x216),false);
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DelegateOwner->IsValidLowLevelFast(false)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                         ,0xd7,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar4 = FSparseDelegateStorage::Add((UObject *)(this + -0x216),FVar3,&local_88);
  *this = (TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>
           )(bVar4 | (byte)TVar1);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a0.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  return;
}

// __Internal_AddDynamic<UAutoRTFMTestObject> @ 148804050

void __thiscall
TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>
::__Internal_AddDynamic<UAutoRTFMTestObject>
          (TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>
           *this,UAutoRTFMTestObject *param_1,pmf_d30b1ac4 param_2,FName param_3)

{
  TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>
  TVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  UObject *this_00;
  UFunction *pUVar5;
  FName local_res8;
  UAutoRTFMTestObject *local_res10;
  FName *local_res20;
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
  
  if (((param_1 == (UAutoRTFMTestObject *)0x0) || (param_2 == (pmf_d30b1ac4)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
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
  if (((param_1 == (UAutoRTFMTestObject *)0x0) || (param_2 == (pmf_d30b1ac4)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UAutoRTFMTestObject *)0x0)) {
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
    if (pUVar5 != (UFunction *)0x0) goto LAB_148804170;
  }
  local_res20 = &local_res8;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UPrimitiveComponent_*,enum_EComponentPhysicsStateChange>
  ::__Internal_BindDynamic<UAutoRTFMTestObject>'::__l2::<lambda_1>::operator()(&local_res20);
LAB_148804170:
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
       `protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>::GetDelegateName(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>::GetDelegateName(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>::GetDelegateName(void)const___ptr64'
                    ::__l2::DelegateFName,"OnComponentPhysicsStateChanged");
    _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>::GetDelegateName(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FVar3 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>::GetDelegateName(void)const___ptr64'
          ::__l2::DelegateFName;
  bVar4 = UObjectBase::IsValidLowLevelFast((UObjectBase *)(this + -0x526),false);
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DelegateOwner->IsValidLowLevelFast(false)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                         ,0xd7,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar4 = FSparseDelegateStorage::Add((UObject *)(this + -0x526),FVar3,&local_88);
  *this = (TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>
           )(bVar4 | (byte)TVar1);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a0.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  return;
}

