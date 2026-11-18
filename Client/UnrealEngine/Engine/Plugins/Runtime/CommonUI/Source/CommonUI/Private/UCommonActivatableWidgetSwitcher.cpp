// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 16

// StaticClass @ 14a7849d0

UClass * __cdecl UCommonActivatableWidgetSwitcher::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonActivatableWidgetSwitcher.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonActivatableWidgetSwitcher",
               &Z_Registration_Info_UClass_UCommonActivatableWidgetSwitcher.InnerSingleton,
               StaticRegisterNativesUCommonActivatableWidgetSwitcher,0x290,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCommonActivatableWidgetSwitcher>,
               InternalVTableHelperCtorCaller<UCommonActivatableWidgetSwitcher>,local_res8,
               UCommonAnimatedSwitcher::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonActivatableWidgetSwitcher.InnerSingleton;
}

// UCommonActivatableWidgetSwitcher @ 14a7abe50

UCommonActivatableWidgetSwitcher * __thiscall
UCommonActivatableWidgetSwitcher::UCommonActivatableWidgetSwitcher
          (UCommonActivatableWidgetSwitcher *this,FVTableHelper *param_1)

{
  UCommonAnimatedSwitcher::UCommonAnimatedSwitcher((UCommonAnimatedSwitcher *)this,param_1);
  this->bClearFocusRestorationTargetOfDeactivatedWidgets = false;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->WeakOwningActivatableWidget).bIsSet = false;
  return this;
}

// UCommonActivatableWidgetSwitcher @ 14a7abe90

UCommonActivatableWidgetSwitcher * __thiscall
UCommonActivatableWidgetSwitcher::UCommonActivatableWidgetSwitcher
          (UCommonActivatableWidgetSwitcher *this,FObjectInitializer *param_1)

{
  UCommonAnimatedSwitcher::UCommonAnimatedSwitcher((UCommonAnimatedSwitcher *)this,param_1);
  this->bClearFocusRestorationTargetOfDeactivatedWidgets = false;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->WeakOwningActivatableWidget).bIsSet = false;
  return this;
}

// ~UCommonActivatableWidgetSwitcher @ 14a7b1f30

void __thiscall
UCommonActivatableWidgetSwitcher::~UCommonActivatableWidgetSwitcher
          (UCommonActivatableWidgetSwitcher *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  UCommonAnimatedSwitcher::~UCommonAnimatedSwitcher((UCommonAnimatedSwitcher *)this);
  return;
}

// AttemptToActivateActiveWidget @ 14a7c0630

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonActivatableWidgetSwitcher::AttemptToActivateActiveWidget
          (UCommonActivatableWidgetSwitcher *this)

{
  int iVar1;
  UWidget *pUVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  
  pUVar2 = UWidgetSwitcher::GetActiveWidget((UWidgetSwitcher *)this);
  if (pUVar2 != (UWidget *)0x0) {
    pUVar3 = UCommonActivatableWidget::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      if (((this->WeakOwningActivatableWidget).bIsSet != false) &&
         ((pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->WeakOwningActivatableWidget),
          pUVar4 != (UObject *)0x0 && (pUVar4[0x1b].field_0x20 == '\0')))) {
        return;
      }
      if (pUVar2[2].FlowDirectionPreference == Inherit) {
        (**(code **)(pUVar2->_padding_ + 0x520))(pUVar2);
      }
    }
  }
  return;
}

// BindOwningActivatableWidget @ 14a7c1880

void __thiscall
UCommonActivatableWidgetSwitcher::BindOwningActivatableWidget
          (UCommonActivatableWidgetSwitcher *this)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  UCommonActivatableWidgetSwitcher *pUVar4;
  UCommonActivatableWidgetSwitcher *pUVar5;
  UCommonActivatableWidgetSwitcher *local_res18;
  FWeakObjectPtr local_48;
  code *local_38;
  ulonglong uStack_30;
  code *local_28;
  ulonglong uStack_20;
  
  pUVar5 = this;
  if (this != (UCommonActivatableWidgetSwitcher *)0x0) {
    do {
      lVar2 = pUVar5->_padding_;
      if (lVar2 == 0) goto LAB_14a7c1942;
      pUVar3 = Z_Construct_UClass_UWidgetTree_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if (((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < iVar1) ||
          ((longlong *)
           *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8)
           != &pUVar3->_padding_)) ||
         (pUVar5 = *(UCommonActivatableWidgetSwitcher **)(lVar2 + 0x20),
         pUVar5 == (UCommonActivatableWidgetSwitcher *)0x0)) goto LAB_14a7c1942;
      pUVar3 = Z_Construct_UClass_UUserWidget_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(pUVar5->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) goto LAB_14a7c1942;
      pUVar3 = UCommonActivatableWidget::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
    } while ((*(int *)(pUVar5->_padding_ + 0x38) < iVar1) ||
            ((longlong *)
             *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
             &pUVar3->_padding_));
    pUVar3 = UCommonActivatableWidget::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_14a7c1944;
  }
LAB_14a7c1942:
  pUVar5 = (UCommonActivatableWidgetSwitcher *)0x0;
LAB_14a7c1944:
  if ((this->WeakOwningActivatableWidget).bIsSet == false) {
    pUVar4 = (UCommonActivatableWidgetSwitcher *)0x0;
  }
  else {
    pUVar4 = (UCommonActivatableWidgetSwitcher *)
             FWeakObjectPtr::Get((FWeakObjectPtr *)&this->WeakOwningActivatableWidget);
  }
  if ((pUVar4 != pUVar5) &&
     (UnbindOwningActivatableWidget(this), pUVar5 != (UCommonActivatableWidgetSwitcher *)0x0)) {
    uStack_30 = uStack_30 & 0xffffffff00000000;
    local_38 = HandleOwningWidgetActivationChanged;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UCommonActivatableWidgetSwitcher,bool>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar5[1]._padding_,(UCommonActivatableWidgetSwitcher *)&stack0x00000020,
               (pmf_09e9dd0f *)this,(bool *)&stack0xffffffffffffffc8);
    local_38 = HandleOwningWidgetActivationChanged;
    uStack_30 = uStack_30 & 0xffffffff00000000;
    local_28 = HandleOwningWidgetActivationChanged;
    uStack_20 = uStack_30;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UCommonActivatableWidgetSwitcher,bool>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar5[1]._padding_,(UCommonActivatableWidgetSwitcher *)&stack0xffffffffffffffc0,
               (pmf_09e9dd0f *)this,(bool *)&stack0xffffffffffffffd8);
    if ((char)pUVar5[1]._padding_ == '\0') {
      DeactivateActiveWidget(this);
    }
    else {
      AttemptToActivateActiveWidget(this);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UCommonActivatableWidgetSwitcher *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  local_48.ObjectIndex = 0;
  local_48.ObjectSerialNumber = 0;
  local_res18 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UCommonActivatableWidgetSwitcher *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  FWeakObjectPtr::operator=(&local_48,(FObjectPtr)&stack0x00000018);
  if ((TOptional<TWeakObjectPtr<UCommonActivatableWidget,FWeakObjectPtr>_> *)&local_48 !=
      &this->WeakOwningActivatableWidget) {
    (this->WeakOwningActivatableWidget).TypedValue.WeakPtr = local_48;
    (this->WeakOwningActivatableWidget).bIsSet = true;
  }
  return;
}

// DeactivateActiveWidget @ 14a7d2090

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonActivatableWidgetSwitcher::DeactivateActiveWidget(UCommonActivatableWidgetSwitcher *this)

{
  int iVar1;
  UCommonActivatableWidget *this_00;
  UClass *pUVar2;
  
  this_00 = (UCommonActivatableWidget *)UWidgetSwitcher::GetActiveWidget((UWidgetSwitcher *)this);
  if (this_00 != (UCommonActivatableWidget *)0x0) {
    pUVar2 = UCommonActivatableWidget::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      if (this_00->bIsActive != false) {
        (**(code **)(this_00->_padding_ + 0x528))(this_00);
      }
      if (this->bClearFocusRestorationTargetOfDeactivatedWidgets != false) {
        UCommonActivatableWidget::ClearFocusRestorationTarget(this_00);
      }
    }
  }
  return;
}

// GetOwningActivatableWidget @ 14a7e4560

UCommonActivatableWidget * __thiscall
UCommonActivatableWidgetSwitcher::GetOwningActivatableWidget(UCommonActivatableWidgetSwitcher *this)

{
  UCommonActivatableWidget *pUVar1;
  
  if ((this->WeakOwningActivatableWidget).bIsSet != false) {
    pUVar1 = (UCommonActivatableWidget *)
             FWeakObjectPtr::Get((FWeakObjectPtr *)&this->WeakOwningActivatableWidget);
    return pUVar1;
  }
  return (UCommonActivatableWidget *)0x0;
}

// GetPrivateStaticClass @ 14a7e4b80

UClass * __cdecl UCommonActivatableWidgetSwitcher::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonActivatableWidgetSwitcher.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonActivatableWidgetSwitcher",
               &Z_Registration_Info_UClass_UCommonActivatableWidgetSwitcher.InnerSingleton,
               StaticRegisterNativesUCommonActivatableWidgetSwitcher,0x290,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCommonActivatableWidgetSwitcher>,
               InternalVTableHelperCtorCaller<UCommonActivatableWidgetSwitcher>,local_res8,
               UCommonAnimatedSwitcher::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonActivatableWidgetSwitcher.InnerSingleton;
}

// HandleOutgoingWidget @ 14a7ee280

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonActivatableWidgetSwitcher::HandleOutgoingWidget(UCommonActivatableWidgetSwitcher *this)

{
  int iVar1;
  UCommonActivatableWidget *this_00;
  UClass *pUVar2;
  
  this_00 = (UCommonActivatableWidget *)UWidgetSwitcher::GetActiveWidget((UWidgetSwitcher *)this);
  if (this_00 != (UCommonActivatableWidget *)0x0) {
    pUVar2 = UCommonActivatableWidget::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      if (this_00->bIsActive != false) {
        (**(code **)(this_00->_padding_ + 0x528))(this_00);
      }
      if (this->bClearFocusRestorationTargetOfDeactivatedWidgets != false) {
        UCommonActivatableWidget::ClearFocusRestorationTarget(this_00);
      }
    }
  }
  return;
}

// HandleOwningWidgetActivationChanged @ 14a7ee2a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonActivatableWidgetSwitcher::HandleOwningWidgetActivationChanged
          (UCommonActivatableWidgetSwitcher *this,bool param_1)

{
  int iVar1;
  UWidget *pUVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  
  if (!param_1) {
    DeactivateActiveWidget(this);
    return;
  }
  pUVar2 = UWidgetSwitcher::GetActiveWidget((UWidgetSwitcher *)this);
  if (pUVar2 != (UWidget *)0x0) {
    pUVar3 = UCommonActivatableWidget::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      if (((this->WeakOwningActivatableWidget).bIsSet != false) &&
         ((pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->WeakOwningActivatableWidget),
          pUVar4 != (UObject *)0x0 && (pUVar4[0x1b].field_0x20 == '\0')))) {
        return;
      }
      if (pUVar2[2].FlowDirectionPreference == Inherit) {
        (**(code **)(pUVar2->_padding_ + 0x520))(pUVar2);
      }
    }
  }
  return;
}

// HandleSlateActiveIndexChanged @ 14a7efb10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonActivatableWidgetSwitcher::HandleSlateActiveIndexChanged
          (UCommonActivatableWidgetSwitcher *this,int param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  UWidget *pUVar9;
  uint uVar10;
  longlong lVar11;
  UWidget *local_58;
  int local_50;
  FDestructionSentinel local_48;
  
  iVar2 = (int)this->_padding_;
  if ((-1 < iVar2) && (iVar2 < (int)this->_padding_)) {
    pUVar9 = UWidgetSwitcher::GetWidgetAtIndex((UWidgetSwitcher *)this,iVar2);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
               (FWriteAccessScope *)&local_48);
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *piVar1 = *piVar1 + 1;
    bVar5 = false;
    uVar10 = (int)this->_padding_ - 1;
    if (-1 < (int)uVar10) {
      lVar11 = (longlong)(int)uVar10 << 4;
      bVar5 = false;
      do {
        uVar8 = 0;
        if ((int)uVar10 < (int)this->_padding_) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (((*(int *)(this->_padding_ + 8 + lVar11) == 0) ||
            (plVar3 = *(longlong **)(this->_padding_ + lVar11), plVar3 == (longlong *)0x0)) ||
           (cVar7 = (**(code **)(*plVar3 + 0x68))(plVar3,pUVar9,iVar2), cVar7 == '\0')) {
          bVar5 = true;
        }
        lVar11 = lVar11 + -0x10;
        uVar10 = uVar10 - 1;
      } while (-1 < (int)uVar10);
    }
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *piVar1 = *piVar1 + -1;
    if (bVar5) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->_padding_,false);
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    iVar2 = (int)this->_padding_;
    local_58 = UWidgetSwitcher::GetWidgetAtIndex((UWidgetSwitcher *)this,iVar2);
    local_50 = iVar2;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_,&local_58);
  }
  if ((this->WeakOwningActivatableWidget).bIsSet == false) {
    BindOwningActivatableWidget(this);
  }
  AttemptToActivateActiveWidget(this);
  return;
}

// OnWidgetRebuilt @ 14a800b60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonActivatableWidgetSwitcher::OnWidgetRebuilt(UCommonActivatableWidgetSwitcher *this)

{
  UWidget::OnWidgetRebuilt((UWidget *)this);
  BindOwningActivatableWidget(this);
  return;
}

// ReleaseSlateResources @ 14a811ae0

void __thiscall
UCommonActivatableWidgetSwitcher::ReleaseSlateResources
          (UCommonActivatableWidgetSwitcher *this,bool param_1)

{
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UWidgetSwitcher::ReleaseSlateResources((UWidgetSwitcher *)this,param_1);
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0;
  local_38 = 0;
  FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->_padding_ != &local_38) {
    this->_padding_ = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&FStack_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->_padding_ != &local_28) {
    this->_padding_ = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->_padding_ != &local_18) {
    this->_padding_ = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  UnbindOwningActivatableWidget(this);
  return;
}

// StaticRegisterNativesUCommonActivatableWidgetSwitcher @ 14a81e330

void __cdecl
UCommonActivatableWidgetSwitcher::StaticRegisterNativesUCommonActivatableWidgetSwitcher(void)

{
  return;
}

// UnbindOwningActivatableWidget @ 14a8252e0

void __thiscall
UCommonActivatableWidgetSwitcher::UnbindOwningActivatableWidget
          (UCommonActivatableWidgetSwitcher *this)

{
  UObject *pUVar1;
  
  if (((this->WeakOwningActivatableWidget).bIsSet != false) &&
     (pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->WeakOwningActivatableWidget),
     pUVar1 != (UObject *)0x0)) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1[0x1d].field_0x18,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1[0x1e].field_0x10,this);
  }
  if ((this->WeakOwningActivatableWidget).bIsSet != false) {
    (this->WeakOwningActivatableWidget).bIsSet = false;
  }
  return;
}

