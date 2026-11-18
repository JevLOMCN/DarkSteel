// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 9

// StaticClass @ 14a787b20

UClass * __cdecl UCommonActivatableWidgetStack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonActivatableWidgetStack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonActivatableWidgetStack",
               &Z_Registration_Info_UClass_UCommonActivatableWidgetStack.InnerSingleton,
               StaticRegisterNativesUCommonActivatableWidgetStack,0x2f8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCommonActivatableWidgetStack>,
               InternalVTableHelperCtorCaller<UCommonActivatableWidgetStack>,local_res8,
               UCommonActivatableWidgetContainerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonActivatableWidgetStack.InnerSingleton;
}

// UCommonActivatableWidgetStack @ 14a7abdb0

UCommonActivatableWidgetStack * __thiscall
UCommonActivatableWidgetStack::UCommonActivatableWidgetStack
          (UCommonActivatableWidgetStack *this,FVTableHelper *param_1)

{
  UCommonActivatableWidgetContainerBase::UCommonActivatableWidgetContainerBase
            ((UCommonActivatableWidgetContainerBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->RootContentWidgetClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->RootContentWidget).field0_0x0.DebugPtr = (UCommonActivatableWidget *)0x0;
  return this;
}

// UCommonActivatableWidgetStack @ 14a7abe00

UCommonActivatableWidgetStack * __thiscall
UCommonActivatableWidgetStack::UCommonActivatableWidgetStack
          (UCommonActivatableWidgetStack *this,FObjectInitializer *param_1)

{
  UCommonActivatableWidgetContainerBase::UCommonActivatableWidgetContainerBase
            ((UCommonActivatableWidgetContainerBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->RootContentWidgetClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->RootContentWidget).field0_0x0.DebugPtr = (UCommonActivatableWidget *)0x0;
  return this;
}

// ~UCommonActivatableWidgetStack @ 14a7b1f10

void __thiscall
UCommonActivatableWidgetStack::~UCommonActivatableWidgetStack(UCommonActivatableWidgetStack *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  UCommonActivatableWidgetContainerBase::~UCommonActivatableWidgetContainerBase
            ((UCommonActivatableWidgetContainerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14a7e4ac0

UClass * __cdecl UCommonActivatableWidgetStack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonActivatableWidgetStack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonActivatableWidgetStack",
               &Z_Registration_Info_UClass_UCommonActivatableWidgetStack.InnerSingleton,
               StaticRegisterNativesUCommonActivatableWidgetStack,0x2f8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCommonActivatableWidgetStack>,
               InternalVTableHelperCtorCaller<UCommonActivatableWidgetStack>,local_res8,
               UCommonActivatableWidgetContainerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonActivatableWidgetStack.InnerSingleton;
}

// GetRootContent @ 14a7e7560

UCommonActivatableWidget * __thiscall
UCommonActivatableWidgetStack::GetRootContent(UCommonActivatableWidgetStack *this)

{
  return (this->RootContentWidget).field0_0x0.DebugPtr;
}

// OnWidgetAddedToList @ 14a800820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonActivatableWidgetStack::OnWidgetAddedToList
          (UCommonActivatableWidgetStack *this,UCommonActivatableWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  FScopedWidgetSlotArguments *pFVar3;
  TSharedRef<SWidget,1> *pTVar4;
  undefined1 auStack_f8 [32];
  SWidget *local_d8;
  FSharedReferencer<1> local_d0;
  TSharedRef<SWidget,1> local_c8;
  FScopedWidgetSlotArguments local_b8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if ((SWidgetSwitcher *)this->_padding_ != (SWidgetSwitcher *)0x0) {
    pFVar3 = SWidgetSwitcher::AddSlot((SWidgetSwitcher *)this->_padding_,&local_b8,-1);
    pTVar4 = UWidget::TakeWidget((UWidget *)param_1,&local_c8);
    local_d0.ReferenceController = (pTVar4->SharedReferenceCount).ReferenceController;
    local_d8 = pTVar4->Object;
    if (local_d0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_d0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_d0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((SWidget **)&pFVar3->_padding_ != &local_d8) {
      pFVar3->_padding_ = (longlong)local_d8;
      local_d8 = (SWidget *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar3->_padding_,&local_d0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.SharedReferenceCount.ReferenceController);
    TPanelChildren<FBasicLayoutWidgetSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
              (&local_b8);
    if (this->_padding_ == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    UCommonActivatableWidgetContainerBase::SetSwitcherIndex
              ((UCommonActivatableWidgetContainerBase *)this,*(int *)(this->_padding_ + 0x260) + -1,
               false);
  }
  return;
}

// StaticRegisterNativesUCommonActivatableWidgetStack @ 14a81e320

void __cdecl UCommonActivatableWidgetStack::StaticRegisterNativesUCommonActivatableWidgetStack(void)

{
  return;
}

// SynchronizeProperties @ 14a81fcc0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonActivatableWidgetStack::SynchronizeProperties(UCommonActivatableWidgetStack *this)

{
  int iVar1;
  UClass *pUVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  SWidget *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  UClass *pUVar8;
  UCommonActivatableWidget *pUVar9;
  TSharedRef<SWidget,1> *pTVar10;
  FSlotBase *this_00;
  UClass *local_res10;
  TSharedRef<SWidget,1> local_18;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  if ((((this->RootContentWidget).field0_0x0.DebugPtr == (UCommonActivatableWidget *)0x0) &&
      (pUVar2 = (this->RootContentWidgetClass).Class.field0_0x0.DebugPtr, pUVar2 != (UClass *)0x0))
     && (pUVar8 = UCommonActivatableWidget::StaticClass(), pUVar8 != (UClass *)0x0)) {
    iVar1 = (int)pUVar8->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) != &pUVar8->_padding_)
       ) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if ((bVar7) &&
       (local_res10 = (this->RootContentWidgetClass).Class.field0_0x0.DebugPtr,
       local_res10 != (UClass *)0x0)) {
      this_00 = (FSlotBase *)0x0;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)local_res10);
      }
      pUVar9 = CreateWidget<UCommonActivatableWidget,UCommonActivatableWidgetStack_*>
                         (this,(TSubclassOf<UUserWidget>)&local_res10,(FName)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar9 != (UCommonActivatableWidget *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar9);
      }
      (this->RootContentWidget).field0_0x0.DebugPtr = pUVar9;
      if ((this->_padding_ == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (0 < *(int *)(this->_padding_ + 0x260)) {
        this_00 = (FSlotBase *)**(undefined8 **)(this->_padding_ + 600);
      }
      pTVar10 = UWidget::TakeWidget((UWidget *)(this->RootContentWidget).field0_0x0.DebugPtr,
                                    &local_18);
      FSlotBase::DetatchParentFromContent(this_00);
      pTVar4 = (pTVar10->SharedReferenceCount).ReferenceController;
      pSVar5 = (this_00->Widget).Object;
      pTVar6 = (this_00->Widget).SharedReferenceCount.ReferenceController;
      (this_00->Widget).Object = pTVar10->Object;
      (this_00->Widget).SharedReferenceCount.ReferenceController = pTVar4;
      pTVar10->Object = pSVar5;
      (pTVar10->SharedReferenceCount).ReferenceController = pTVar6;
      FSlotBase::AfterContentOrOwnerAssigned(this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      (**(code **)(this->_padding_ + 0x2c0))(this,4);
    }
  }
  return;
}

