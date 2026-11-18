// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// SetClickConfirmEvent_WrapperImpl @ 14b730950

void __cdecl
UDS_VM_W_Common_TextPopup::SetClickConfirmEvent_WrapperImpl(void *param_1,void *param_2)

{
  char cVar1;
  UDS_UIMessageManager *this;
  UDS_NetworkManager *this_00;
  
  cVar1 = *(char *)((longlong)param_1 + 0x181);
  this = UDS_UIMessageManager::GetInst();
  if (this != (UDS_UIMessageManager *)0x0) {
    UDS_UIMessageManager::EndMsgQueueing
              (this,*(EDS_MessageType *)((longlong)param_1 + 0x181),
               *(uint *)((longlong)param_1 + 0x18c),true);
  }
  if (cVar1 == ' ') {
    this_00 = UDS_NetworkManager::GetInst();
    if (this_00 != (UDS_NetworkManager *)0x0) {
      UDS_NetworkManager::Disconnect(this_00,*(EDS_DisconnectReason *)((longlong)param_1 + 0x188));
    }
  }
  return;
}

// SetClickCancelEvent_WrapperImpl @ 14b730960

void __cdecl UDS_VM_W_Common_TextPopup::SetClickCancelEvent_WrapperImpl(void *param_1,void *param_2)

{
  UDS_UIMessageManager *this;
  
  this = UDS_UIMessageManager::GetInst();
  if (this != (UDS_UIMessageManager *)0x0) {
    UDS_UIMessageManager::EndMsgQueueing
              (this,*(EDS_MessageType *)((longlong)param_1 + 0x181),
               *(uint *)((longlong)param_1 + 0x18c),true);
    return;
  }
  return;
}

// StaticClass @ 14b730970

UClass * __cdecl UDS_VM_W_Common_TextPopup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Common_TextPopup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Common_TextPopup",
               &Z_Registration_Info_UClass_UDS_VM_W_Common_TextPopup.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Common_TextPopup,0x1d8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_W_Common_TextPopup>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Common_TextPopup>,local_res8,
               UDS_VM_CommonMessage::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Common_TextPopup.InnerSingleton;
}

// UDS_VM_W_Common_TextPopup @ 14b734430

UDS_VM_W_Common_TextPopup * __thiscall
UDS_VM_W_Common_TextPopup::UDS_VM_W_Common_TextPopup
          (UDS_VM_W_Common_TextPopup *this,FVTableHelper *param_1)

{
  UDS_VM_CommonMessage::UDS_VM_CommonMessage((UDS_VM_CommonMessage *)this,param_1);
  this->CancelButtonVisibility = Collapsed;
  this->TitleMsgVisibility = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Common_TextPopup__6B_;
  this->DisconnectReason = None;
  (this->ClickConfirmEvent)._padding_ = '\0';
  (this->ClickConfirmEvent).bIsCustomSelected = false;
  (this->ClickConfirmEvent).bIsLacked = false;
  (this->ClickConfirmEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickConfirmEvent).Delegate = 0;
  *(undefined8 *)&(this->ClickConfirmEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickConfirmEvent).Delegate.field_0x10 = 0;
  (this->ClickCancelEvent)._padding_ = '\0';
  (this->ClickCancelEvent).bIsCustomSelected = false;
  (this->ClickCancelEvent).bIsLacked = false;
  (this->ClickCancelEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickCancelEvent).Delegate = 0;
  *(undefined8 *)&(this->ClickCancelEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickCancelEvent).Delegate.field_0x10 = 0;
  return this;
}

// UDS_VM_W_Common_TextPopup @ 14b7344c0

UDS_VM_W_Common_TextPopup * __thiscall
UDS_VM_W_Common_TextPopup::UDS_VM_W_Common_TextPopup
          (UDS_VM_W_Common_TextPopup *this,FObjectInitializer *param_1)

{
  UDS_VM_CommonMessage::UDS_VM_CommonMessage((UDS_VM_CommonMessage *)this,param_1);
  this->CancelButtonVisibility = Collapsed;
  this->TitleMsgVisibility = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Common_TextPopup__6B_;
  this->DisconnectReason = None;
  (this->ClickConfirmEvent)._padding_ = '\0';
  (this->ClickConfirmEvent).bIsCustomSelected = false;
  (this->ClickConfirmEvent).bIsLacked = false;
  (this->ClickConfirmEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickConfirmEvent).Delegate = 0;
  *(undefined8 *)&(this->ClickConfirmEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickConfirmEvent).Delegate.field_0x10 = 0;
  (this->ClickCancelEvent)._padding_ = '\0';
  (this->ClickCancelEvent).bIsCustomSelected = false;
  (this->ClickCancelEvent).bIsLacked = false;
  (this->ClickCancelEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickCancelEvent).Delegate = 0;
  *(undefined8 *)&(this->ClickCancelEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickCancelEvent).Delegate.field_0x10 = 0;
  return this;
}

// ~UDS_VM_W_Common_TextPopup @ 14b736050

void __thiscall
UDS_VM_W_Common_TextPopup::~UDS_VM_W_Common_TextPopup(UDS_VM_W_Common_TextPopup *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Common_TextPopup__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickCancelEvent).Delegate);
  pvVar1 = *(void **)&(this->ClickCancelEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickCancelEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickConfirmEvent).Delegate);
  pvVar1 = *(void **)&(this->ClickConfirmEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickConfirmEvent).Delegate);
  UDS_VM_CommonMessage::~UDS_VM_CommonMessage((UDS_VM_CommonMessage *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b739210

IClassDescriptor * __thiscall
UDS_VM_W_Common_TextPopup::GetFieldNotificationDescriptor(UDS_VM_W_Common_TextPopup *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_Common_TextPopup::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b739e40

UClass * __cdecl UDS_VM_W_Common_TextPopup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Common_TextPopup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Common_TextPopup",
               &Z_Registration_Info_UClass_UDS_VM_W_Common_TextPopup.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Common_TextPopup,0x1d8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_W_Common_TextPopup>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Common_TextPopup>,local_res8,
               UDS_VM_CommonMessage::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Common_TextPopup.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_Common_TextPopup @ 14b73aee0

void __cdecl UDS_VM_W_Common_TextPopup::StaticRegisterNativesUDS_VM_W_Common_TextPopup(void)

{
  return;
}

// CheckNextMessage @ 14bf9e0f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_Common_TextPopup::CheckNextMessage(UDS_VM_W_Common_TextPopup *this)

{
  char cVar1;
  bool bVar2;
  UDS_UIMessageManager *this_00;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_248 [32];
  ESlateVisibility local_218 [8];
  FDS_UIMessageInfo local_210;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_248;
  cVar1 = (**(code **)(this->_padding_ + 0x338))();
  if ((cVar1 != '\0') &&
     (bVar2 = UDS_VM_CommonMessage::IsEmptyMsgString((UDS_VM_CommonMessage *)this), bVar2)) {
    this_00 = UDS_UIMessageManager::GetInst();
    if (this_00 == (UDS_UIMessageManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = (longlong)this_00;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_VM_W_Common_TextPopup::CheckNextMessage",0x2b,Yes);
        UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x46,L"msgMng is nullptr.");
        if ((UDS_UIMessageManager *)local_138._padding_ != (UDS_UIMessageManager *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      FDS_UIMessageInfo::FDS_UIMessageInfo
                (&local_210,*(EDS_MessageType *)((longlong)&this->_padding_ + 1));
      bVar2 = UDS_UIMessageManager::DequeueMsg(this_00,&local_210);
      if (bVar2) {
        UDS_VM_CommonMessage::SetMsgText((UDS_VM_CommonMessage *)this,&local_210.MsgText);
        local_218[0] = HitTestInvisible;
        UDS_VM_CommonMessage::SetMessageVisibility((UDS_VM_CommonMessage *)this,local_218);
        (**(code **)(this->_padding_ + 0x350))(this,&local_210.MsgArgs);
        UDS_VM_CommonMessage::PlayAni((UDS_VM_CommonMessage *)this);
      }
      else {
        UDS_UIMessageManager::EndMsgQueueing
                  (this_00,*(EDS_MessageType *)((longlong)&this->_padding_ + 1),this->MultipleID,
                   true);
      }
      FDS_UIMessageInfo::~FDS_UIMessageInfo(&local_210);
    }
  }
  return;
}

// OnClickCancel @ 14bfb8af0

void __thiscall
UDS_VM_W_Common_TextPopup::OnClickCancel
          (UDS_VM_W_Common_TextPopup *this,FDS_ButtonEventField *param_1)

{
  UDS_UIMessageManager *this_00;
  
  this_00 = UDS_UIMessageManager::GetInst();
  if (this_00 != (UDS_UIMessageManager *)0x0) {
    UDS_UIMessageManager::EndMsgQueueing
              (this_00,*(EDS_MessageType *)((longlong)&this->_padding_ + 1),this->MultipleID,true);
    return;
  }
  return;
}

// OnClickConfirm @ 14bfb9090

void __thiscall
UDS_VM_W_Common_TextPopup::OnClickConfirm
          (UDS_VM_W_Common_TextPopup *this,FDS_ButtonEventField *param_1)

{
  char cVar1;
  UDS_UIMessageManager *this_00;
  UDS_NetworkManager *this_01;
  
  cVar1 = *(char *)((longlong)&this->_padding_ + 1);
  this_00 = UDS_UIMessageManager::GetInst();
  if (this_00 != (UDS_UIMessageManager *)0x0) {
    UDS_UIMessageManager::EndMsgQueueing
              (this_00,*(EDS_MessageType *)((longlong)&this->_padding_ + 1),this->MultipleID,true);
  }
  if (cVar1 == ' ') {
    this_01 = UDS_NetworkManager::GetInst();
    if (this_01 != (UDS_NetworkManager *)0x0) {
      UDS_NetworkManager::Disconnect(this_01,this->DisconnectReason);
    }
  }
  return;
}

// OnCloseInit @ 14bfbbf80

void __thiscall UDS_VM_W_Common_TextPopup::OnCloseInit(UDS_VM_W_Common_TextPopup *this)

{
  longlong lVar1;
  undefined8 uStack_18;
  FSharedReferencer<1> FStack_10;
  
  if (*(char *)((longlong)&this->_padding_ + 4) != '\x01') {
    uStack_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->_padding_ != &uStack_18) {
      this->_padding_ = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    lVar1 = this->_padding_;
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
                    /* WARNING: Could not recover jumptable at 0x00014bdcdcaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x2f8))(this);
    return;
  }
  return;
}

// OnEndAni @ 14bfbc5c0

void __thiscall
UDS_VM_W_Common_TextPopup::OnEndAni
          (UDS_VM_W_Common_TextPopup *this,FDS_WidgetAnimationEventField *param_1)

{
  return;
}

// OnSetViewModel @ 14bfcb670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_Common_TextPopup::OnSetViewModel
          (UDS_VM_W_Common_TextPopup *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  FName *pFVar6;
  undefined1 auStackY_1b8 [32];
  TSharedPtr<FDS_ViewModelContext_CommonMessage,1> local_188;
  FName local_178;
  int local_170;
  FName local_168;
  int local_160;
  TSharedPtr<FDS_ViewModelContext,1> local_158;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_158.Object = param_1->Object;
  local_158.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_158.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_VM_CommonMessage::OnSetViewModel((UDS_VM_CommonMessage *)this,&local_158);
  local_148.Object = param_1->Object;
  local_148.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_CommonMessage>(&local_188,&local_148);
  if (local_188.Object == (FDS_ViewModelContext_CommonMessage *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_138._padding_ = (longlong)local_188.Object;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_W_Common_TextPopup::OnSetViewModel",0x29,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,0x17,L"context.IsValid() == false");
      if ((FDS_ViewModelContext_CommonMessage *)local_138._padding_ !=
          (FDS_ViewModelContext_CommonMessage *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if (local_188.Object == (FDS_ViewModelContext_CommonMessage *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(EDS_MessageType *)((longlong)&this->_padding_ + 1) = (local_188.Object)->MsgType;
    this->MultipleID = (local_188.Object)->MultipleID;
    (**(code **)(this->_padding_ + 0x330))(this);
    iVar3 = FFieldNotificationClassDescriptor::CancelButtonVisibility.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::CancelButtonVisibility.FieldName;
    if (*(char *)((longlong)&this->_padding_ + 1) == ' ') {
      if (this->CancelButtonVisibility == SelfHitTestInvisible) goto LAB_14bfcb833;
      this->CancelButtonVisibility = SelfHitTestInvisible;
      pFVar6 = &local_178;
      local_178 = FVar2;
      local_170 = iVar3;
    }
    else {
      if (this->CancelButtonVisibility == Collapsed) goto LAB_14bfcb833;
      this->CancelButtonVisibility = Collapsed;
      pFVar6 = &local_168;
      local_168 = FVar2;
      local_160 = iVar3;
    }
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar6);
  }
LAB_14bfcb833:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_188.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetMsgArgs @ 14bfdc1d0

void __thiscall
UDS_VM_W_Common_TextPopup::SetMsgArgs
          (UDS_VM_W_Common_TextPopup *this,
          TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
          *param_1)

{
  EDS_DisconnectReason *pEVar1;
  
  if (0 < *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34) {
    pEVar1 = (EDS_DisconnectReason *)
             TMapBase<enum_EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_MessageArgsType,__int64,0>_>
             ::FindChecked(param_1,DisconnectReason);
    this->DisconnectReason = *pEVar1;
  }
  return;
}

// UnbindModel @ 14bfdff10

void __thiscall UDS_VM_W_Common_TextPopup::UnbindModel(UDS_VM_W_Common_TextPopup *this)

{
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0;
  this->MultipleID = 0;
  UDS_VM_CommonMessage::ClearMsgString((UDS_VM_CommonMessage *)this);
  return;
}

