// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 1

// Broadcast<UControlRig_*,FRigControlElement,bool> @ 14a20c260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
TSparseDynamicDelegate<UControlRig::FOnControlSelectedBP_MCSignature,UControlRig,UControlRig::FOnControlSelectedBPInfoGetter>
::Broadcast<UControlRig_*,FRigControlElement,bool>
          (TSparseDynamicDelegate<UControlRig::FOnControlSelectedBP_MCSignature,UControlRig,UControlRig::FOnControlSelectedBPInfoGetter>
           *this,UControlRig *param_1,FRigControlElement *param_2,bool param_3)

{
  code *pcVar1;
  FName FVar2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this_00;
  bool bVar3;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar4;
  undefined1 auStack_648 [32];
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *local_628;
  FSharedReferencer<1> FStack_620;
  undefined8 local_618;
  FSharedReferencer<1> local_610;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> local_608;
  UControlRig *local_5f8 [2];
  FRigControlElement local_5e8;
  undefined1 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_648;
  local_628 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0;
  FStack_620.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (*this != (TSparseDynamicDelegate<UControlRig::FOnControlSelectedBP_MCSignature,UControlRig,UControlRig::FOnControlSelectedBPInfoGetter>
                )0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `protected:_class_FName___cdecl_TSparseDynamicDelegate<UControlRig::FOnControlSelectedBP_MCSignature,UControlRig,UControlRig::FOnControlSelectedBPInfoGetter>::GetDelegateName(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<UControlRig::FOnControlSelectedBP_MCSignature,UControlRig,UControlRig::FOnControlSelectedBPInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`protected:_class_FName___cdecl_TSparseDynamicDelegate<UControlRig::FOnControlSelectedBP_MCSignature,UControlRig,UControlRig::FOnControlSelectedBPInfoGetter>::GetDelegateName(void)const___ptr64'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<UControlRig::FOnControlSelectedBP_MCSignature,UControlRig,UControlRig::FOnControlSelectedBPInfoGetter>::GetDelegateName(void)const___ptr64'
                        ::__l2::DelegateFName,"OnControlSelected_BP");
        _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<UControlRig::FOnControlSelectedBP_MCSignature,UControlRig,UControlRig::FOnControlSelectedBPInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    FVar2 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<UControlRig::FOnControlSelectedBP_MCSignature,UControlRig,UControlRig::FOnControlSelectedBPInfoGetter>::GetDelegateName(void)const___ptr64'
            ::__l2::DelegateFName;
    bVar3 = UObjectBase::IsValidLowLevelFast((UObjectBase *)(this + -0x990),false);
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
                       (&local_608,(UObject *)(this + -0x990),FVar2);
    local_610.ReferenceController = (pTVar4->SharedReferenceCount).ReferenceController;
    local_628 = pTVar4->Object;
    if (local_610.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_610.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_610.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_618 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_620,&local_610);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_610.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_608.SharedReferenceCount.ReferenceController);
  }
  this_00 = local_628;
  if (local_628 != (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
    if (local_628 == (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
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
    FRigMultiParentElement::FRigMultiParentElement
              ((FRigMultiParentElement *)&local_5e8,(URigHierarchy *)0x0,Control);
    local_5e8._0_8_ = &___7FRigControlElement__6B_;
    FRigControlSettings::FRigControlSettings((FRigControlSettings *)((longlong)&local_5e8 + 0x230));
    local_5e8.PreferredEulerAngles.Current.field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_5e8.PreferredEulerAngles.Current.field0_0x0._s_0.Y =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_5e8.PreferredEulerAngles.RotationOrder = YZX;
    local_5e8.PreferredEulerAngles.Initial.field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_5e8.PreferredEulerAngles.Initial.field0_0x0._s_0.Y =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_5e8.PreferredEulerAngles.Current.field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_5e8.PreferredEulerAngles.Initial.field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_5e8.OffsetStorage.Current.Local.StorageIndex = -1;
    local_5e8.OffsetStorage.Current.Local.Storage = (TTransform<double> *)0x0;
    local_5e8.OffsetStorage.Current.Global.StorageIndex = -1;
    local_5e8.OffsetStorage.Current.Global.Storage = (TTransform<double> *)0x0;
    local_5e8.OffsetStorage.Initial.Local.StorageIndex = -1;
    local_5e8.OffsetStorage.Initial.Local.Storage = (TTransform<double> *)0x0;
    local_5e8.OffsetStorage.Initial.Global.StorageIndex = -1;
    local_5e8.OffsetStorage.Initial.Global.Storage = (TTransform<double> *)0x0;
    local_5e8.OffsetDirtyState.Current.Global.StorageIndex = -1;
    local_5e8.OffsetDirtyState.Current.Global.Storage = (bool *)0x0;
    local_5e8.OffsetDirtyState.Current.Local.StorageIndex = -1;
    local_5e8.OffsetDirtyState.Current.Local.Storage = (bool *)0x0;
    local_5e8.OffsetDirtyState.Initial.Global.StorageIndex = -1;
    local_5e8.OffsetDirtyState.Initial.Global.Storage = (bool *)0x0;
    local_5e8.OffsetDirtyState.Initial.Local.StorageIndex = -1;
    local_5e8.OffsetDirtyState.Initial.Local.Storage = (bool *)0x0;
    local_5e8.ShapeStorage.Current.Local.StorageIndex = -1;
    local_5e8.ShapeStorage.Current.Local.Storage = (TTransform<double> *)0x0;
    local_5e8.ShapeStorage.Current.Global.StorageIndex = -1;
    local_5e8.ShapeStorage.Current.Global.Storage = (TTransform<double> *)0x0;
    local_5e8.ShapeStorage.Initial.Local.StorageIndex = -1;
    local_5e8.ShapeStorage.Initial.Local.Storage = (TTransform<double> *)0x0;
    local_5e8.ShapeStorage.Initial.Global.StorageIndex = -1;
    local_5e8.ShapeStorage.Initial.Global.Storage = (TTransform<double> *)0x0;
    local_5e8.ShapeDirtyState.Current.Global.StorageIndex = -1;
    local_5e8.ShapeDirtyState.Current.Global.Storage = (bool *)0x0;
    local_5e8.ShapeDirtyState.Current.Local.StorageIndex = -1;
    local_5e8.ShapeDirtyState.Current.Local.Storage = (bool *)0x0;
    local_5e8.ShapeDirtyState.Initial.Global.StorageIndex = -1;
    local_5e8.ShapeDirtyState.Initial.Global.Storage = (bool *)0x0;
    local_5e8.ShapeDirtyState.Initial.Local.StorageIndex = -1;
    local_5e8.ShapeDirtyState.Initial.Local.Storage = (bool *)0x0;
    local_5e8._0_8_ = &___7FRigControlElement__6B_;
    local_5f8[0] = param_1;
    FRigControlElement::operator=(&local_5e8,param_2);
    local_58 = param_3;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              (this_00,local_5f8);
    local_5e8._0_8_ = &___7FRigControlElement__6B_;
    FRigControlSettings::~FRigControlSettings((FRigControlSettings *)((longlong)&local_5e8 + 0x230))
    ;
    FRigMultiParentElement::~FRigMultiParentElement((FRigMultiParentElement *)&local_5e8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_620.ReferenceController);
  *(undefined ***)param_2 = &___7FRigControlElement__6B_;
  FRigControlSettings::~FRigControlSettings(&param_2->Settings);
  FRigMultiParentElement::~FRigMultiParentElement((FRigMultiParentElement *)param_2);
  return;
}

