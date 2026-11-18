// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// StaticClass @ 14b611e10

UClass * __cdecl UDS_VM_Chat_InputFocus::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_InputFocus.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_InputFocus",
               &Z_Registration_Info_UClass_UDS_VM_Chat_InputFocus.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_InputFocus,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Chat_InputFocus>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_InputFocus>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_InputFocus.InnerSingleton;
}

// UDS_VM_Chat_InputFocus @ 14b6160c0

UDS_VM_Chat_InputFocus * __thiscall
UDS_VM_Chat_InputFocus::UDS_VM_Chat_InputFocus(UDS_VM_Chat_InputFocus *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->ChatMode = Simple;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_InputFocus__6B_;
  return this;
}

// UDS_VM_Chat_InputFocus @ 14b616110

UDS_VM_Chat_InputFocus * __thiscall
UDS_VM_Chat_InputFocus::UDS_VM_Chat_InputFocus
          (UDS_VM_Chat_InputFocus *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->ChatMode = Simple;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_InputFocus__6B_;
  return this;
}

// ~UDS_VM_Chat_InputFocus @ 14b617710

void __thiscall UDS_VM_Chat_InputFocus::~UDS_VM_Chat_InputFocus(UDS_VM_Chat_InputFocus *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_InputFocus__6B_;
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6192b0

IClassDescriptor * __thiscall
UDS_VM_Chat_InputFocus::GetFieldNotificationDescriptor(UDS_VM_Chat_InputFocus *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Chat_InputFocus::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b619c80

UClass * __cdecl UDS_VM_Chat_InputFocus::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_InputFocus.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_InputFocus",
               &Z_Registration_Info_UClass_UDS_VM_Chat_InputFocus.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_InputFocus,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Chat_InputFocus>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_InputFocus>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_InputFocus.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Chat_InputFocus @ 14b61a250

void __cdecl UDS_VM_Chat_InputFocus::StaticRegisterNativesUDS_VM_Chat_InputFocus(void)

{
  return;
}

// BindModel @ 14bd484f0

void __thiscall UDS_VM_Chat_InputFocus::BindModel(UDS_VM_Chat_InputFocus *this)

{
  UDS_ChatEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_ChatEvent::GetEvent();
  if (pUVar1 != (UDS_ChatEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangeInputChattingType,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_ChattingType),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_InputFocus>
              (&pUVar1->OnChangeInputChattingType,(UDS_VM_Chat_InputFocus *)&stack0x00000010,
               (pmf_6f020aed *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangedChatMode,this
              );
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_ChatMode),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_InputFocus>
              (&pUVar1->OnChangedChatMode,(UDS_VM_Chat_InputFocus *)&stack0x00000010,
               (pmf_9bfc7fb1 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnCommitInputText,this
              );
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_InputFocus>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnCommitInputText,(UDS_VM_Chat_InputFocus *)&stack0x00000010,
               (pmf_42302434 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnInsertLinkText,this)
    ;
    TMulticastDelegateRegistration<void___cdecl(FDS_ChatLinkData_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_Chat_InputFocus>
              ((TMulticastDelegateRegistration<void___cdecl(FDS_ChatLinkData_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar1->OnInsertLinkText,(UDS_VM_Chat_InputFocus *)&stack0x00000010,
               (pmf_f2b6f9ee *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectedWhisper,this
              );
    TMulticastDelegateRegistration<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_InputFocus>
              ((TMulticastDelegateRegistration<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar1->OnSelectedWhisper,(UDS_VM_Chat_InputFocus *)&stack0x00000010,
               (pmf_16466f10 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectedMacro,this);
    TMulticastDelegateRegistration<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_InputFocus>
              ((TMulticastDelegateRegistration<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar1->OnSelectedMacro,(UDS_VM_Chat_InputFocus *)&stack0x00000010,
               (pmf_16466f10 *)this);
  }
  return;
}

// OnChangeInputChattingType @ 14bd6ee50

void __thiscall
UDS_VM_Chat_InputFocus::OnChangeInputChattingType
          (UDS_VM_Chat_InputFocus *this,EDS_ChattingType param_1)

{
  EDS_ChatMode EVar1;
  UDS_ChatEvent *pUVar2;
  FName local_18;
  int local_10;
  
  pUVar2 = UDS_ChatEvent::GetEvent();
  if (pUVar2 != (UDS_ChatEvent *)0x0) {
    EVar1 = FDS_QueryDelegate<enum_EDS_ChatMode_const_>::Query(&pUVar2->OnQueryChatMode);
    if (EVar1 == this->ChatMode) {
      local_10 = FFieldNotificationClassDescriptor::InputFocusEvent.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::InputFocusEvent.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// OnChangedChatMode @ 14bd6fec0

void __thiscall
UDS_VM_Chat_InputFocus::OnChangedChatMode(UDS_VM_Chat_InputFocus *this,EDS_ChatMode param_1)

{
  FName local_18;
  int local_10;
  
  if (param_1 == this->ChatMode) {
    local_10 = FFieldNotificationClassDescriptor::InputFocusEvent.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::InputFocusEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnCommitInputText @ 14bd767c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Chat_InputFocus::OnCommitInputText(UDS_VM_Chat_InputFocus *this)

{
  int iVar1;
  EDS_ChatMode EVar2;
  UDS_GameOptionManager *this_00;
  UDS_GameOptionData *this_01;
  FSlateApplication *this_02;
  UDS_ChatEvent *pUVar3;
  FName local_18;
  int local_10;
  
  this_00 = UDS_GameOptionManager::GetInst();
  if (this_00 != (UDS_GameOptionManager *)0x0) {
    this_01 = UDS_GameOptionManager::GetGameOptionData(this_00,GameOptionChatPostSendAction);
    if (this_01 != (UDS_GameOptionData *)0x0) {
      iVar1 = UDS_GameOptionData::GetGameOptionValue(this_01,0);
      if ((char)iVar1 == '\x02') {
        this_02 = FSlateApplication::Get();
        FSlateApplication::SetAllUserFocusToGameViewport(this_02,SetDirectly);
        return;
      }
    }
  }
  pUVar3 = UDS_ChatEvent::GetEvent();
  if (pUVar3 != (UDS_ChatEvent *)0x0) {
    EVar2 = FDS_QueryDelegate<enum_EDS_ChatMode_const_>::Query(&pUVar3->OnQueryChatMode);
    if (EVar2 == this->ChatMode) {
      local_10 = FFieldNotificationClassDescriptor::InputFocusEvent.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::InputFocusEvent.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// OnInsertLinkText @ 14bd7a560

void __thiscall
UDS_VM_Chat_InputFocus::OnInsertLinkText(UDS_VM_Chat_InputFocus *this,FDS_ChatLinkData *param_1)

{
  EDS_ChatMode EVar1;
  UDS_ChatEvent *pUVar2;
  FName local_18;
  int local_10;
  
  pUVar2 = UDS_ChatEvent::GetEvent();
  if (pUVar2 != (UDS_ChatEvent *)0x0) {
    EVar1 = FDS_QueryDelegate<enum_EDS_ChatMode_const_>::Query(&pUVar2->OnQueryChatMode);
    if (EVar1 == this->ChatMode) {
      local_10 = FFieldNotificationClassDescriptor::InputFocusEvent.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::InputFocusEvent.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// OnSelectedMacro @ 14bd7da30

void __thiscall
UDS_VM_Chat_InputFocus::OnSelectedMacro(UDS_VM_Chat_InputFocus *this,FString *param_1)

{
  EDS_ChatMode EVar1;
  UDS_ChatEvent *pUVar2;
  FName local_18;
  int local_10;
  
  pUVar2 = UDS_ChatEvent::GetEvent();
  if (pUVar2 != (UDS_ChatEvent *)0x0) {
    EVar1 = FDS_QueryDelegate<enum_EDS_ChatMode_const_>::Query(&pUVar2->OnQueryChatMode);
    if (EVar1 == this->ChatMode) {
      local_10 = FFieldNotificationClassDescriptor::InputFocusEvent.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::InputFocusEvent.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// OnSelectedWhisper @ 14bd7ddb0

void __thiscall
UDS_VM_Chat_InputFocus::OnSelectedWhisper(UDS_VM_Chat_InputFocus *this,FString *param_1)

{
  EDS_ChatMode EVar1;
  UDS_ChatEvent *pUVar2;
  FName local_18;
  int local_10;
  
  pUVar2 = UDS_ChatEvent::GetEvent();
  if (pUVar2 != (UDS_ChatEvent *)0x0) {
    EVar1 = FDS_QueryDelegate<enum_EDS_ChatMode_const_>::Query(&pUVar2->OnQueryChatMode);
    if (EVar1 == this->ChatMode) {
      local_10 = FFieldNotificationClassDescriptor::InputFocusEvent.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::InputFocusEvent.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// OnSetViewModel @ 14bd81bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_InputFocus::OnSetViewModel
          (UDS_VM_Chat_InputFocus *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_188 [32];
  TSharedPtr<FDS_ViewModelContext_ChatInputFocus,1> local_158;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
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
  SafeCast<FDS_ViewModelContext_ChatInputFocus>(&local_158,&local_148);
  if (local_158.Object == (FDS_ViewModelContext_ChatInputFocus *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Chat_InputFocus::OnSetViewModel",0x26,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_138.Ptr,0x17,L"chatInputFocusContext.IsValid() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if (local_158.Object == (FDS_ViewModelContext_ChatInputFocus *)0x0) {
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
    this->ChatMode = (local_158.Object)->ChatMode;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetInputFocusEvent @ 14bd89540

void __thiscall
UDS_VM_Chat_InputFocus::SetInputFocusEvent(UDS_VM_Chat_InputFocus *this,EDS_ChatMode param_1)

{
  FName local_18;
  int local_10;
  
  if (param_1 == this->ChatMode) {
    local_10 = FFieldNotificationClassDescriptor::InputFocusEvent.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::InputFocusEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetInputFocusEvent @ 14bd89580

void __thiscall UDS_VM_Chat_InputFocus::SetInputFocusEvent(UDS_VM_Chat_InputFocus *this)

{
  EDS_ChatMode EVar1;
  UDS_ChatEvent *pUVar2;
  FName local_18;
  int local_10;
  
  pUVar2 = UDS_ChatEvent::GetEvent();
  if (pUVar2 != (UDS_ChatEvent *)0x0) {
    EVar1 = FDS_QueryDelegate<enum_EDS_ChatMode_const_>::Query(&pUVar2->OnQueryChatMode);
    if (EVar1 == this->ChatMode) {
      local_10 = FFieldNotificationClassDescriptor::InputFocusEvent.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::InputFocusEvent.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// UnbindModel @ 14bd8c2a0

void __thiscall UDS_VM_Chat_InputFocus::UnbindModel(UDS_VM_Chat_InputFocus *this)

{
  UDS_ChatEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_ChatEvent::GetEvent();
  if (pUVar1 != (UDS_ChatEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangeInputChattingType,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangedChatMode,this
              );
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnCommitInputText,this
              );
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnInsertLinkText,this)
    ;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectedWhisper,this
              );
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectedMacro,this);
  }
  return;
}

