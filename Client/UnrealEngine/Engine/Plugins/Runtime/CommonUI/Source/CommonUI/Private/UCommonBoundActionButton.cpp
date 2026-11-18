// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 15

// StaticClass @ 14a78a210

UClass * __cdecl UCommonBoundActionButton::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonBoundActionButton.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonBoundActionButton",
               &Z_Registration_Info_UClass_UCommonBoundActionButton.InnerSingleton,
               StaticRegisterNativesUCommonBoundActionButton,0x1780,0x10,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UCommonBoundActionButton>,
               InternalVTableHelperCtorCaller<UCommonBoundActionButton>,local_res8,
               UCommonButtonBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonBoundActionButton.InnerSingleton;
}

// UCommonBoundActionButton @ 14a7ac250

UCommonBoundActionButton * __thiscall
UCommonBoundActionButton::UCommonBoundActionButton
          (UCommonBoundActionButton *this,FVTableHelper *param_1)

{
  UCommonButtonBase::UCommonButtonBase((UCommonButtonBase *)this,param_1);
  (this->BindingHandle).RegistrationId = -1;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonButtonBase__;
  this->_padding_ = (longlong)&_vftable__for__ICommonBoundActionButtonInterface__;
  (this->Text_ActionName).field0_0x0.DebugPtr = (UCommonTextBlock *)0x0;
  this->bLinkRequiresHoldToBindingHold = false;
  (this->BindingHandle).CachedDebugActionName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->BindingHandle).CachedDebugActionName.Data.ArrayNum = 0;
  (this->BindingHandle).CachedDebugActionName.Data.ArrayMax = 0;
  return this;
}

// UCommonBoundActionButton @ 14a7ac2d0

UCommonBoundActionButton * __thiscall
UCommonBoundActionButton::UCommonBoundActionButton
          (UCommonBoundActionButton *this,FObjectInitializer *param_1)

{
  UCommonButtonBase::UCommonButtonBase((UCommonButtonBase *)this,param_1);
  (this->BindingHandle).RegistrationId = -1;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonButtonBase__;
  this->_padding_ = (longlong)&_vftable__for__ICommonBoundActionButtonInterface__;
  (this->Text_ActionName).field0_0x0.DebugPtr = (UCommonTextBlock *)0x0;
  this->bLinkRequiresHoldToBindingHold = false;
  (this->BindingHandle).CachedDebugActionName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->BindingHandle).CachedDebugActionName.Data.ArrayNum = 0;
  (this->BindingHandle).CachedDebugActionName.Data.ArrayMax = 0;
  return this;
}

// ~UCommonBoundActionButton @ 14a7b20f0

void __thiscall UCommonBoundActionButton::~UCommonBoundActionButton(UCommonBoundActionButton *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonButtonBase__;
  this->_padding_ = (longlong)&_vftable__for__ICommonBoundActionButtonInterface__;
  pFVar1 = (this->BindingHandle).CachedDebugActionName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7ICommonBoundActionButtonInterface__6B_;
  UCommonButtonBase::~UCommonButtonBase((UCommonButtonBase *)this);
  return;
}

// GetPrivateStaticClass @ 14a7e4f30

UClass * __cdecl UCommonBoundActionButton::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonBoundActionButton.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonBoundActionButton",
               &Z_Registration_Info_UClass_UCommonBoundActionButton.InnerSingleton,
               StaticRegisterNativesUCommonBoundActionButton,0x1780,0x10,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UCommonBoundActionButton>,
               InternalVTableHelperCtorCaller<UCommonBoundActionButton>,local_res8,
               UCommonButtonBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonBoundActionButton.InnerSingleton;
}

// NativeOnClicked @ 14a7f9d10

void __thiscall UCommonBoundActionButton::NativeOnClicked(UCommonBoundActionButton *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<FUIActionBinding,1> local_48;
  FUIActionBindingHandle local_38;
  FReadAccessScope local_20;
  
  UCommonButtonBase::NativeOnClicked((UCommonButtonBase *)this);
  ::FString::FString(&local_38.CachedDebugActionName,&(this->BindingHandle).CachedDebugActionName);
  local_38.RegistrationId = (this->BindingHandle).RegistrationId;
  FUIActionBinding::FindBinding(&local_48,&local_38);
  if (local_48.Object != (FUIActionBinding *)0x0) {
    if (local_48.Object == (FUIActionBinding *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_48.Object)->OnExecuteAction,&local_20);
    if ((*(int *)&((local_48.Object)->OnExecuteAction).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&((local_48.Object)->OnExecuteAction).field_0x8,
       plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  return;
}

// NativeOnCurrentTextStyleChanged @ 14a7f9fb0

void __thiscall
UCommonBoundActionButton::NativeOnCurrentTextStyleChanged(UCommonBoundActionButton *this)

{
  UCommonTextBlock *pUVar1;
  UFunction *pUVar2;
  UCommonTextStyle *pUVar3;
  UClass *pUVar4;
  
  pUVar2 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UCommonButtonBase_OnCurrentTextStyleChanged);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar2,0);
  pUVar1 = (this->Text_ActionName).field0_0x0.DebugPtr;
  if (pUVar1 == (UCommonTextBlock *)0x0) {
    return;
  }
  pUVar3 = UCommonButtonBase::GetCurrentTextStyle((UCommonButtonBase *)this);
  if (pUVar3 == (UCommonTextStyle *)0x0) {
    pUVar4 = (UClass *)0x0;
  }
  else {
    pUVar4 = *(UClass **)&pUVar3->field_0x10;
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14a7fa02c;
    if (pUVar4 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
LAB_14a7fa02c:
  (pUVar1->Style).Class.field0_0x0.DebugPtr = pUVar4;
  (**(code **)(pUVar1->_padding_ + 0x2e8))(pUVar1);
  return;
}

// OnUpdateInputAction @ 14a7ffcd0

void __thiscall UCommonBoundActionButton::OnUpdateInputAction(UCommonBoundActionButton *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UCommonBoundActionButton_OnUpdateInputAction);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014a7ffcfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// SetRepresentedAction @ 14a81abe0

void __thiscall
UCommonBoundActionButton::SetRepresentedAction
          (UCommonBoundActionButton *this,FUIActionBindingHandle *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FCommonInputActionDataBase *pFVar5;
  longlong *this_00;
  TSharedPtr<FUIActionBinding,1> local_78;
  TSharedPtr<FUIActionBinding,1> local_68;
  code *local_58;
  ulonglong uStack_50;
  FUIActionBindingHandle local_48;
  FUIActionBindingHandle local_30;
  
  ::FString::FString(&local_48.CachedDebugActionName,(FString *)&this->_padding_);
  local_48.RegistrationId = (int)this->_padding_;
  FUIActionBinding::FindBinding(&local_68,&local_48);
  if (local_68.Object != (FUIActionBinding *)0x0) {
    if ((local_68.Object == (FUIActionBinding *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &(local_68.Object)->OnHoldActionProgressed,&this[-1]._padding_);
  }
  this_00 = &this[-1]._padding_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  ::FString::operator=((FString *)&this->_padding_,&param_1->CachedDebugActionName);
  *(int *)&this->_padding_ = param_1->RegistrationId;
  (**(code **)(*this_00 + 0x530))(this_00);
  ::FString::FString(&local_30.CachedDebugActionName,&param_1->CachedDebugActionName);
  local_30.RegistrationId = param_1->RegistrationId;
  FUIActionBinding::FindBinding(&local_78,&local_30);
  if (local_78.Object != (FUIActionBinding *)0x0) {
    if ((local_78.Object == (FUIActionBinding *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uStack_50 = uStack_50 & 0xffffffff00000000;
    local_58 = UCommonButtonBase::_vcall__1520__flat______;
    TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>::
    AddUObject<UCommonBoundActionButton>
              ((TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy> *)
               &(local_78.Object)->OnHoldActionProgressed,
               (UCommonBoundActionButton *)&stack0x00000008,(pmf_3a51852f *)this_00);
    if ((char)this->_padding_ != '\0') {
      if ((local_78.Object == (FUIActionBinding *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar5 = FDataTableRowHandle::GetRow<FCommonInputActionDataBase>
                         (&(local_78.Object)->LegacyActionTableRow,L"");
      uVar4 = false;
      if (pFVar5 != (FCommonInputActionDataBase *)0x0) {
        uVar4 = (**(code **)(pFVar5->_padding_ + 0x30))(pFVar5);
      }
      UCommonButtonBase::SetRequiresHold((UCommonButtonBase *)this_00,(bool)uVar4);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  pFVar1 = (param_1->CachedDebugActionName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// StaticRegisterNativesUCommonBoundActionButton @ 14a81e440

void __cdecl UCommonBoundActionButton::StaticRegisterNativesUCommonBoundActionButton(void)

{
  return;
}

// UpdateHoldData @ 14a8269d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UCommonBoundActionButton::UpdateHoldData(UCommonBoundActionButton *this,ECommonInputType param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  float fVar5;
  FCommonInputActionDataBase *pFVar6;
  ULocalPlayer *pUVar7;
  UCommonInputSubsystem *pUVar8;
  undefined8 *puVar9;
  UClass *pUVar10;
  UCommonUIHoldData *pUVar11;
  TSharedPtr<FUIActionBinding,1> local_118;
  FUIActionBindingHandle local_108;
  undefined8 local_e8;
  undefined8 local_e0;
  TReferenceControllerBase<1> *local_d8;
  undefined1 local_d0;
  undefined1 local_cf;
  undefined4 local_cc;
  undefined4 local_c8;
  FSlateBrush local_b8;
  
  if (this->bLinkRequiresHoldToBindingHold == false) {
    lVar2 = this->_padding_;
    if ((lVar2 != 0) &&
       (pUVar10 = Z_Construct_UClass_UCommonUIHoldData_NoRegister(), pUVar10 != (UClass *)0x0)) {
      iVar1 = (int)pUVar10->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar10->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((((bVar4) && (this->_padding_ != 0)) && ((this->_padding_ & 0x400) != 0)) &&
         (pUVar11 = TSubclassOf<UCommonUIHoldData>::GetDefaultObject
                              ((TSubclassOf<UCommonUIHoldData> *)&this->_padding_),
         pUVar11 != (UCommonUIHoldData *)0x0)) {
        if (param_1 == MouseAndKeyboard) {
          *(float *)&this->_padding_ = (pUVar11->KeyboardAndMouse).HoldTime;
          fVar5 = (pUVar11->KeyboardAndMouse).HoldRollbackTime;
        }
        else if (param_1 == Gamepad) {
          *(float *)&this->_padding_ = (pUVar11->Gamepad).HoldTime;
          fVar5 = (pUVar11->Gamepad).HoldRollbackTime;
        }
        else {
          if (param_1 != Touch) {
            return;
          }
          *(float *)&this->_padding_ = (pUVar11->Touch).HoldTime;
          fVar5 = (pUVar11->Touch).HoldRollbackTime;
        }
        *(float *)((longlong)&this->_padding_ + 4) = fVar5;
      }
    }
  }
  else {
    ::FString::FString(&local_108.CachedDebugActionName,&(this->BindingHandle).CachedDebugActionName
                      );
    local_108.RegistrationId = (this->BindingHandle).RegistrationId;
    FUIActionBinding::FindBinding(&local_118,&local_108);
    if (local_118.Object != (FUIActionBinding *)0x0) {
      if ((local_118.Object == (FUIActionBinding *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar6 = FDataTableRowHandle::GetRow<FCommonInputActionDataBase>
                         (&(local_118.Object)->LegacyActionTableRow,L"");
      if (pFVar6 != (FCommonInputActionDataBase *)0x0) {
        pcVar3 = *(code **)(pFVar6->_padding_ + 0x18);
        pUVar7 = (ULocalPlayer *)(**(code **)(this->_padding_ + 0x2e0))(this);
        pUVar8 = UCommonInputSubsystem::Get(pUVar7);
        puVar9 = (undefined8 *)(*pcVar3)(pFVar6,pUVar8);
        local_e8 = *puVar9;
        local_e0 = puVar9[1];
        local_d8 = (TReferenceControllerBase<1> *)puVar9[2];
        if (local_d8 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_d8->SharedReferenceCount = (atomic<int>)((int)local_d8->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_d0 = *(undefined1 *)(puVar9 + 3);
        local_cc = *(undefined4 *)((longlong)puVar9 + 0x1c);
        local_c8 = *(undefined4 *)(puVar9 + 4);
        local_cf = *(undefined1 *)((longlong)puVar9 + 0x19);
        FSlateBrush::FSlateBrush(&local_b8,(FSlateBrush *)(puVar9 + 6));
        *(undefined4 *)&this->_padding_ = local_cc;
        *(undefined4 *)((longlong)&this->_padding_ + 4) = local_c8;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d8);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_118.SharedReferenceCount.ReferenceController);
  }
  return;
}

// UpdateInputActionWidget @ 14a826d00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall UCommonBoundActionButton::UpdateInputActionWidget(UCommonBoundActionButton *this)

{
  longlong *plVar1;
  code *pcVar2;
  UCommonTextBlock *pUVar3;
  bool bVar4;
  int iVar5;
  ULocalPlayer *pUVar6;
  ULocalPlayer *pUVar7;
  FSlateApplication *this_00;
  FText *pFVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  TTuple<FString,FFormatArgumentValue> *pTVar11;
  UFunction *pUVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_c8;
  FText local_b8;
  FText local_a8;
  TSharedPtr<FCulture,1> local_98;
  ITextData *local_88;
  uint local_80;
  FText local_78;
  FText local_68;
  FString local_58;
  int local_48;
  FTextFormat local_40;
  
  plVar1 = (longlong *)this->_padding_;
  if (plVar1 != (longlong *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x328);
    ::FString::FString(&local_58,&(this->BindingHandle).CachedDebugActionName);
    local_48 = (this->BindingHandle).RegistrationId;
    (*pcVar2)(plVar1,&local_58);
    FUIActionBindingHandle::GetDisplayName(&this->BindingHandle,&local_b8);
    bVar4 = FUIActionBindingHandle::IsValid(&this->BindingHandle);
    if (bVar4) {
      pUVar6 = FUIActionBindingHandle::GetBoundLocalPlayer(&this->BindingHandle);
      if (pUVar6 == (ULocalPlayer *)0x0) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_254302797393035197>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\CommonBoundActionButton.cpp"
                           ,0x43,"BindingOwner");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      else {
        pUVar7 = (ULocalPlayer *)(**(code **)(this->_padding_ + 0x2e0))(this);
        if (pUVar6 != pUVar7) {
          this_00 = FSlateApplication::Get();
          local_98.Object = (FCulture *)0x0;
          local_98.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          iVar5 = FSlateApplication::GetUserIndexForController(this_00,pUVar6->ControllerId);
          pFVar8 = FText::AsNumber(&local_68,iVar5 + 1,(FNumberFormattingOptions *)0x0,&local_98);
          pFVar9 = FText::AsLocalizable_Advanced_LocText
                             (&local_78,L"CommonBoundActionButton",L"OtherPlayerActionFormat",
                              L"[P{PlayerNum}] {ActionName}");
          pFVar10 = FTextFormat::FTextFormat(&local_40,pFVar9,Default);
          local_c8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_c8.Pairs.ArrayNum = 0;
          local_c8.Pairs.ArrayMax = 0;
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,2,(ForAnyElementType *)&local_c8,0,&local_c8.Pairs.ArrayMax);
          pTVar11 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                    ::AllocateMemoryForEmplace<wchar_t_const_(&)[10]>
                              (&local_c8,(wchar_t (*) [10])L"PlayerNum");
          ::FString::FString((FString *)pTVar11,L"PlayerNum");
          *(undefined4 *)&pTVar11->field_0x10 = 4;
          FText::FText((FText *)&pTVar11->field_0x20,pFVar8);
          if (*(longlong *)&pTVar11->field_0x20 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              );
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          pTVar11 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                    ::AllocateMemoryForEmplace<wchar_t_const_(&)[11]>
                              (&local_c8,(wchar_t (*) [11])L"ActionName");
          ::FString::FString((FString *)pTVar11,L"ActionName");
          *(undefined4 *)&pTVar11->field_0x10 = 4;
          *(undefined8 *)&pTVar11->field_0x20 = 0;
          *(ITextData **)&pTVar11->field_0x20 = local_b8.TextData.Reference;
          if (local_b8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_b8.TextData.Reference + 8))
                      (local_b8.TextData.Reference,local_res8);
          }
          *(uint *)&pTVar11->field_0x28 = local_b8.Flags;
          if (*(longlong *)&pTVar11->field_0x20 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              );
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          FText::FormatNamedImpl(&local_a8,pFVar10,&local_c8);
          DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                    ((TTuple<FString,FFormatArgumentValue> *)local_c8.Pairs.AllocatorInstance.Data,
                     local_c8.Pairs.ArrayNum);
          if ((TTuple<FString,FFormatArgumentValue> *)local_c8.Pairs.AllocatorInstance.Data !=
              (TTuple<FString,FFormatArgumentValue> *)0x0) {
            FMemory::Free(local_c8.Pairs.AllocatorInstance.Data);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pFVar10->TextFormatData).SharedReferenceCount.ReferenceController);
          FText::operator=(&local_b8,&local_a8);
          if (local_a8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
          }
          if (local_78.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
          }
          if (local_68.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_98.SharedReferenceCount.ReferenceController);
        }
      }
    }
    pUVar3 = (this->Text_ActionName).field0_0x0.DebugPtr;
    if (pUVar3 != (UCommonTextBlock *)0x0) {
      local_88 = local_b8.TextData.Reference;
      pcVar2 = *(code **)(pUVar3->_padding_ + 0x358);
      if (local_b8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b8.TextData.Reference + 8))
                  (local_b8.TextData.Reference,local_res10);
      }
      local_80 = local_b8.Flags;
      (*pcVar2)(pUVar3,&local_88);
    }
    pUVar12 = UObject::FindFunctionChecked
                        ((UObject *)this,NAME_UCommonBoundActionButton_OnUpdateInputAction);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar12,0);
    if (local_b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
    }
  }
  return;
}

// _getUObject @ 14a82b9b0

UObject * __thiscall UCommonBoundActionButton::_getUObject(UCommonBoundActionButton *this)

{
  return (UObject *)&this[-1].Text_ActionName;
}

// _getUObject`adjustor{5928}' @ 14a82b9bc

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UCommonBoundActionButton::_getUObject`adjustor{5928}' (void)const __ptr64 */

UObject * __thiscall
UCommonBoundActionButton::_getUObject_adjustor_5928__(UCommonBoundActionButton *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UCommonBoundActionButton *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{392}' @ 14a82b9d0

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UCommonBoundActionButton::_getUObject`adjustor{392}' (void)const __ptr64 */

UObject * __thiscall
UCommonBoundActionButton::_getUObject_adjustor_392__(UCommonBoundActionButton *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UCommonBoundActionButton *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

