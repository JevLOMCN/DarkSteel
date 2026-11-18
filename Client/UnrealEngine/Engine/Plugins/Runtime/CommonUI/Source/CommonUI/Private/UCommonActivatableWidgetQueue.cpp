// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 7

// StaticClass @ 14a787e70

UClass * __cdecl UCommonActivatableWidgetQueue::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonActivatableWidgetQueue.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonActivatableWidgetQueue",
               &Z_Registration_Info_UClass_UCommonActivatableWidgetQueue.InnerSingleton,
               StaticRegisterNativesUCommonActivatableWidgetQueue,0x2e8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCommonActivatableWidgetQueue>,
               InternalVTableHelperCtorCaller<UCommonActivatableWidgetQueue>,local_res8,
               UCommonActivatableWidgetContainerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonActivatableWidgetQueue.InnerSingleton;
}

// UCommonActivatableWidgetQueue @ 14a7abd30

UCommonActivatableWidgetQueue * __thiscall
UCommonActivatableWidgetQueue::UCommonActivatableWidgetQueue
          (UCommonActivatableWidgetQueue *this,FVTableHelper *param_1)

{
  UCommonActivatableWidgetContainerBase::UCommonActivatableWidgetContainerBase
            ((UCommonActivatableWidgetContainerBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  return this;
}

// UCommonActivatableWidgetQueue @ 14a7abd70

UCommonActivatableWidgetQueue * __thiscall
UCommonActivatableWidgetQueue::UCommonActivatableWidgetQueue
          (UCommonActivatableWidgetQueue *this,FObjectInitializer *param_1)

{
  UCommonActivatableWidgetContainerBase::UCommonActivatableWidgetContainerBase
            ((UCommonActivatableWidgetContainerBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  return this;
}

// ~UCommonActivatableWidgetQueue @ 14a7b1ef0

void __thiscall
UCommonActivatableWidgetQueue::~UCommonActivatableWidgetQueue(UCommonActivatableWidgetQueue *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  UCommonActivatableWidgetContainerBase::~UCommonActivatableWidgetContainerBase
            ((UCommonActivatableWidgetContainerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14a7e4a00

UClass * __cdecl UCommonActivatableWidgetQueue::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonActivatableWidgetQueue.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonActivatableWidgetQueue",
               &Z_Registration_Info_UClass_UCommonActivatableWidgetQueue.InnerSingleton,
               StaticRegisterNativesUCommonActivatableWidgetQueue,0x2e8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCommonActivatableWidgetQueue>,
               InternalVTableHelperCtorCaller<UCommonActivatableWidgetQueue>,local_res8,
               UCommonActivatableWidgetContainerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonActivatableWidgetQueue.InnerSingleton;
}

// OnWidgetAddedToList @ 14a800670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UCommonActivatableWidgetQueue::OnWidgetAddedToList
          (UCommonActivatableWidgetQueue *this,UCommonActivatableWidget *param_1)

{
  undefined1 *this_00;
  code *pcVar1;
  bool bVar2;
  FScopedWidgetSlotArguments *pFVar3;
  TSharedRef<SWidget,1> *pTVar4;
  SCommonAnimatedSwitcher *pSVar5;
  undefined1 auStack_108 [32];
  SWidget *local_e8;
  FSharedReferencer<1> local_e0;
  TSharedRef<SWidget,1> local_d8;
  FScopedWidgetSlotArguments local_c8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  this_00 = &this->field_0x2a0;
  if (*(longlong *)this_00 == 0) {
    return;
  }
  if (6 < (byte)LogCommonUI._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogCommonUI);
  }
  if ((*(longlong *)this_00 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar3 = SWidgetSwitcher::AddSlot(*(SWidgetSwitcher **)this_00,&local_c8,1);
  pTVar4 = UWidget::TakeWidget((UWidget *)param_1,&local_d8);
  local_e0.ReferenceController = (pTVar4->SharedReferenceCount).ReferenceController;
  local_e8 = pTVar4->Object;
  if (local_e0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_e0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_e0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SWidget **)&pFVar3->_padding_ != &local_e8) {
    pFVar3->_padding_ = (longlong)local_e8;
    local_e8 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar3->_padding_,&local_e0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.SharedReferenceCount.ReferenceController);
  TPanelChildren<FBasicLayoutWidgetSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_c8);
  if ((*(longlong *)this_00 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(int *)(*(longlong *)this_00 + 0x260) == 2) {
    bVar2 = false;
  }
  else {
    if (*(longlong *)&this->field_0x1f0 == 0) {
      return;
    }
    if (*(char *)(*(longlong *)&this->field_0x1f0 + 0x458) != '\0') {
      return;
    }
    pSVar5 = TSharedPtr<SCommonAnimatedSwitcher,1>::operator->
                       ((TSharedPtr<SCommonAnimatedSwitcher,1> *)this_00);
    if ((int)pSVar5->_padding_ != 3) {
      return;
    }
    bVar2 = true;
  }
  UCommonActivatableWidgetContainerBase::SetSwitcherIndex
            ((UCommonActivatableWidgetContainerBase *)this,1,bVar2);
  return;
}

// StaticRegisterNativesUCommonActivatableWidgetQueue @ 14a81e310

void __cdecl UCommonActivatableWidgetQueue::StaticRegisterNativesUCommonActivatableWidgetQueue(void)

{
  return;
}

