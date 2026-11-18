// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 20

// SetTitleText_WrapperImpl @ 14b607250

void __cdecl UDS_VM_Chat_EmotePopup::SetTitleText_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::TitleText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::TitleText.FieldName;
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0xa0),param_2);
  FStack_18 = FVar1;
  iStack_10 = iVar2;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetFocusLostEvent_WrapperImpl @ 14b607260

void __cdecl UDS_VM_Chat_EmotePopup::SetFocusLostEvent_WrapperImpl(void *param_1,void *param_2)

{
  if (*(char *)((longlong)param_2 + 1) == '\0') {
    UDS_ViewModelBase::SetVisibility(param_1,Collapsed);
    return;
  }
  return;
}

// SetClickClose_WrapperImpl @ 14b607270

void __cdecl UDS_VM_Chat_EmotePopup::SetClickClose_WrapperImpl(void *param_1,void *param_2)

{
  UDS_ViewModelBase::SetVisibility(param_1,Collapsed);
  return;
}

// StaticClass @ 14b607280

UClass * __cdecl UDS_VM_Chat_EmotePopup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_EmotePopup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_EmotePopup",
               &Z_Registration_Info_UClass_UDS_VM_Chat_EmotePopup.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_EmotePopup,0x138,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Chat_EmotePopup>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_EmotePopup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_EmotePopup.InnerSingleton;
}

// UDS_VM_Chat_EmotePopup @ 14b60b7c0

UDS_VM_Chat_EmotePopup * __thiscall
UDS_VM_Chat_EmotePopup::UDS_VM_Chat_EmotePopup(UDS_VM_Chat_EmotePopup *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->SubTabIndex = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_EmotePopup__6B_;
  (this->TitleText).StringTableID = 0;
  (this->TitleText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TitleText).StringEnumTableNameID.Number = 0;
  (this->TitleText).DateTime.Ticks = 0;
  (this->TitleText).TimeSpan.Ticks = 0;
  (this->TitleText).TimeExpressionType = None;
  (this->TitleText).IsExpression = false;
  (this->TitleText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).UniqueString.Data.ArrayNum = 0;
  (this->TitleText).UniqueString.Data.ArrayMax = 0;
  (this->TitleText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).FormatArgs.ArrayNum = 0;
  (this->TitleText).FormatArgs.ArrayMax = 0;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->FocusLostEvent)._padding_ = '\0';
  (this->FocusLostEvent).bLostFocusByChild = false;
  (this->SetFocusEvent).bIsActivate = false;
  (this->ClickClose)._padding_ = '\0';
  (this->ClickClose).bIsCustomSelected = false;
  (this->ClickClose).bIsLacked = false;
  (this->ClickClose).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickClose).Delegate = 0;
  *(undefined8 *)&(this->ClickClose).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickClose).Delegate.field_0x10 = 0;
  this->CloseMySelf = false;
  this->ChattingTabType = None;
  this->EmoteID = 0;
  (this->TitleText).StringTableType = None;
  return this;
}

// UDS_VM_Chat_EmotePopup @ 14b60b8a0

UDS_VM_Chat_EmotePopup * __thiscall
UDS_VM_Chat_EmotePopup::UDS_VM_Chat_EmotePopup
          (UDS_VM_Chat_EmotePopup *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->SubTabIndex = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_EmotePopup__6B_;
  (this->TitleText).StringTableID = 0;
  (this->TitleText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TitleText).StringEnumTableNameID.Number = 0;
  (this->TitleText).DateTime.Ticks = 0;
  (this->TitleText).TimeSpan.Ticks = 0;
  (this->TitleText).TimeExpressionType = None;
  (this->TitleText).IsExpression = false;
  (this->TitleText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).UniqueString.Data.ArrayNum = 0;
  (this->TitleText).UniqueString.Data.ArrayMax = 0;
  (this->TitleText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).FormatArgs.ArrayNum = 0;
  (this->TitleText).FormatArgs.ArrayMax = 0;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->FocusLostEvent)._padding_ = '\0';
  (this->FocusLostEvent).bLostFocusByChild = false;
  (this->SetFocusEvent).bIsActivate = false;
  (this->ClickClose)._padding_ = '\0';
  (this->ClickClose).bIsCustomSelected = false;
  (this->ClickClose).bIsLacked = false;
  (this->ClickClose).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickClose).Delegate = 0;
  *(undefined8 *)&(this->ClickClose).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickClose).Delegate.field_0x10 = 0;
  this->CloseMySelf = false;
  this->ChattingTabType = None;
  this->EmoteID = 0;
  (this->TitleText).StringTableType = None;
  return this;
}

// ~UDS_VM_Chat_EmotePopup @ 14b60c5f0

void __thiscall UDS_VM_Chat_EmotePopup::~UDS_VM_Chat_EmotePopup(UDS_VM_Chat_EmotePopup *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_EmotePopup__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickClose).Delegate);
  pvVar1 = *(void **)&(this->ClickClose).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickClose).Delegate);
  pFVar2 = (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TitleText).FormatArgs.AllocatorInstance.Data,
             (this->TitleText).FormatArgs.ArrayNum);
  pFVar2 = (this->TitleText).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TitleText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b60ddd0

IClassDescriptor * __thiscall
UDS_VM_Chat_EmotePopup::GetFieldNotificationDescriptor(UDS_VM_Chat_EmotePopup *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Chat_EmotePopup::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b60e740

UClass * __cdecl UDS_VM_Chat_EmotePopup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_EmotePopup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_EmotePopup",
               &Z_Registration_Info_UClass_UDS_VM_Chat_EmotePopup.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_EmotePopup,0x138,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Chat_EmotePopup>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_EmotePopup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_EmotePopup.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Chat_EmotePopup @ 14b60e950

void __cdecl UDS_VM_Chat_EmotePopup::StaticRegisterNativesUDS_VM_Chat_EmotePopup(void)

{
  return;
}

// BindModel @ 14bd477a0

void __thiscall UDS_VM_Chat_EmotePopup::BindModel(UDS_VM_Chat_EmotePopup *this)

{
  TMap<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>_>
  *this_00;
  TMap<EDS_ViewModelTemplateKey_const_,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_ViewModelTemplateKey_const_,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>_>
  *this_01;
  UDS_ChatEvent *pUVar1;
  UDS_UIEvent *pUVar2;
  UDS_InputEvent *pUVar3;
  undefined1 *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 local_res10 [2];
  int local_res18 [2];
  undefined4 *local_res20;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_ChatEvent::GetEvent();
  if (pUVar1 != (UDS_ChatEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChatPopup,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_ViewModelTemplateKey,bool),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_Chat_EmotePopup>
              (&pUVar1->OnChatPopup,(UDS_VM_Chat_EmotePopup *)local_res10,(pmf_7d04a0a4 *)this);
  }
  pUVar2 = UDS_UIEvent::GetEvent();
  if (pUVar2 != (UDS_UIEvent *)0x0) {
    local_res10[0] = 0x129;
    this_01 = &(pUVar2->OnSelectedIconSlot).Subscriptions;
    if (*(int *)&(pUVar2->OnSelectedIconSlot).Subscriptions.field_0x8 !=
        *(int *)&(pUVar2->OnSelectedIconSlot).Subscriptions.field_0x34) {
      puVar4 = *(undefined1 **)&(pUVar2->OnSelectedIconSlot).Subscriptions.field_0x40;
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &(pUVar2->OnSelectedIconSlot).Subscriptions.field_0x38;
      }
      iVar5 = *(int *)(puVar4 + (ulonglong)
                                (*(int *)&(pUVar2->OnSelectedIconSlot).Subscriptions.field_0x48 - 1U
                                & 0x129) * 4);
      if (iVar5 != -1) {
        do {
          piVar6 = (int *)((longlong)iVar5 * 0x50 + *(longlong *)this_01);
          if (*piVar6 == 0x129) {
            if (piVar6 != (int *)0x0) goto LAB_14bd478cc;
            break;
          }
          iVar5 = piVar6[0x12];
        } while (iVar5 != -1);
      }
    }
    local_res20 = local_res10;
    TSet<TTuple<enum_EDS_ViewModelTemplateKey_const_,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ViewModelTemplateKey_const_,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<enum_EDS_ViewModelTemplateKey_const_&>_>
              (this_01,(uint)local_res18,(TKeyInitializer<EDS_ViewModelTemplateKey_const_&> *)0x129,
               (bool *)&local_res20);
    piVar6 = (int *)((longlong)local_res18[0] * 0x50 + *(longlong *)this_01);
LAB_14bd478cc:
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar6 + 2),this);
    TMulticastDelegateRegistration<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_EmotePopup>
              ((TMulticastDelegateRegistration<void___cdecl(int,int),FDefaultTSDelegateUserPolicy> *
               )(piVar6 + 2),(UDS_VM_Chat_EmotePopup *)local_res18,(pmf_94987464 *)this);
  }
  pUVar3 = UDS_InputEvent::GetEvent();
  if (pUVar3 != (UDS_InputEvent *)0x0) {
    this_00 = &(pUVar3->OnInputEvent).Subscriptions;
    local_res10[0] = 0x15fa0;
    if (*(int *)&(pUVar3->OnInputEvent).Subscriptions.field_0x8 !=
        *(int *)&(pUVar3->OnInputEvent).Subscriptions.field_0x34) {
      puVar4 = *(undefined1 **)&(pUVar3->OnInputEvent).Subscriptions.field_0x40;
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &(pUVar3->OnInputEvent).Subscriptions.field_0x38;
      }
      iVar5 = *(int *)(puVar4 + (ulonglong)
                                (*(int *)&(pUVar3->OnInputEvent).Subscriptions.field_0x48 - 1U &
                                0x15fa0) * 4);
      if (iVar5 != -1) {
        do {
          piVar6 = (int *)((longlong)iVar5 * 0x50 + *(longlong *)this_00);
          if (*piVar6 == 0x15fa0) {
            if (piVar6 != (int *)0x0) goto LAB_14bd479bc;
            break;
          }
          iVar5 = piVar6[0x12];
        } while (iVar5 != -1);
      }
    }
    local_res20 = local_res10;
    TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
              (this_00,(uint)local_res18,(TKeyInitializer<EDS_KeyActionType_const_&> *)0x15fa0,
               (bool *)&local_res20);
    piVar6 = (int *)((longlong)local_res18[0] * 0x50 + *(longlong *)this_00);
LAB_14bd479bc:
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar6 + 2),this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
    ::AddUObject<UDS_VM_Chat_EmotePopup>
              (piVar6 + 2,(UDS_VM_Chat_EmotePopup *)local_res18,(pmf_57888c6f *)this);
  }
  return;
}

// OnChatPopup @ 14bd70bb0

void __thiscall
UDS_VM_Chat_EmotePopup::OnChatPopup
          (UDS_VM_Chat_EmotePopup *this,EDS_ViewModelTemplateKey param_1,bool param_2)

{
  FName local_18;
  int local_10;
  
  if (param_1 == Chat_EmotePopup) {
    if (param_2) {
      UpdateChatEmoteList(this);
      UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,SelfHitTestInvisible);
      (this->SetFocusEvent).bIsActivate = true;
      local_10 = FFieldNotificationClassDescriptor::SetFocusEvent.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::SetFocusEvent.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      return;
    }
    UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
  }
  return;
}

// OnClickClose @ 14bd726f0

void __thiscall
UDS_VM_Chat_EmotePopup::OnClickClose(UDS_VM_Chat_EmotePopup *this,FDS_ButtonEventField *param_1)

{
  UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
  return;
}

// OnFocusLostEvent @ 14bd78a00

void __thiscall
UDS_VM_Chat_EmotePopup::OnFocusLostEvent(UDS_VM_Chat_EmotePopup *this,FDS_FocusEventField *param_1)

{
  if (param_1->bLostFocusByChild == false) {
    UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
    return;
  }
  return;
}

// OnInput_ChatEmote @ 14bd79d60

void __thiscall
UDS_VM_Chat_EmotePopup::OnInput_ChatEmote
          (UDS_VM_Chat_EmotePopup *this,EDS_KeyActionType param_1,ETriggerEvent param_2,
          FInputActionValue *param_3)

{
  ESlateVisibility EVar1;
  UDS_ChatEvent *pUVar2;
  
  if ((param_2 == Started) && (pUVar2 = UDS_ChatEvent::GetEvent(), pUVar2 != (UDS_ChatEvent *)0x0))
  {
    EVar1 = UDS_ViewModelBase::GetVisibility((UDS_ViewModelBase *)this);
    FDS_EventDelegate<enum_EDS_ViewModelTemplateKey_const_,bool_const_>::Broadcast
              (&pUVar2->OnChatPopup,Chat_EmotePopup,EVar1 == Collapsed);
  }
  return;
}

// OnSelectedIconSlot @ 14bd7d5d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_EmotePopup::OnSelectedIconSlot(UDS_VM_Chat_EmotePopup *this,int param_1,int param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  UDS_ChattingManager *pUVar9;
  UDS_LogManager *pUVar10;
  UDS_ChatEvent *pUVar11;
  uint uVar12;
  longlong lVar13;
  FDS_EventDelegate<FDS_ChatLinkData_const_&> *this_00;
  undefined1 auStackY_1b8 [32];
  FDestructionSentinel local_188;
  FDS_ChatLinkData local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  pUVar9 = UDS_ChattingManager::GetInst();
  if (pUVar9 == (UDS_ChattingManager *)0x0) {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar10 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_VM_Chat_EmotePopup::OnSelectedIconSlot",0x2a,Yes);
    UDS_LogManager::PrintLog(pUVar10,1,Warning,local_148.Ptr,0x9c,L"chattingManager == nullptr");
    local_170.LinkText.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_148._padding_;
  }
  else {
    DS_ChatHelper::MakeEmoteText(&local_170,param_1);
    pUVar11 = UDS_ChatEvent::GetEvent();
    if (pUVar11 != (UDS_ChatEvent *)0x0) {
      FDS_EventDelegate<enum_EDS_ViewModelTemplateKey_const_,bool_const_>::Broadcast
                (&pUVar11->OnChatPopup,Chat_EmotePopup,false);
      this_00 = &pUVar11->OnInsertLinkText;
      bVar5 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
      if (bVar5) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                   (FWriteAccessScope *)&local_188);
        puVar1 = &(pUVar11->OnInsertLinkText).Delegate.field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + 1;
        bVar5 = false;
        uVar12 = *(int *)&(pUVar11->OnInsertLinkText).Delegate.field_0x10 - 1;
        if (-1 < (int)uVar12) {
          lVar13 = (longlong)(int)uVar12 << 4;
          bVar5 = false;
          do {
            uVar8 = 0;
            if ((int)uVar12 < *(int *)&(pUVar11->OnInsertLinkText).Delegate.field_0x10) {
              uVar8 = ~uVar12 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            lVar2 = *(longlong *)&(pUVar11->OnInsertLinkText).Delegate.field_0x8;
            if (((*(int *)(lVar13 + 8 + lVar2) == 0) ||
                (plVar3 = *(longlong **)(lVar13 + lVar2), plVar3 == (longlong *)0x0)) ||
               (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
              bVar5 = true;
            }
            lVar13 = lVar13 + -0x10;
            uVar12 = uVar12 - 1;
          } while (-1 < (int)uVar12);
        }
        puVar1 = &(pUVar11->OnInsertLinkText).Delegate.field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        if (bVar5) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
        }
        if (local_188.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_188.Accessor,&local_188);
        }
      }
    }
    if (local_170.FullLinkText.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.FullLinkText.Data.AllocatorInstance.Data);
    }
  }
  if (local_170.LinkText.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.LinkText.Data.AllocatorInstance.Data);
  }
  return;
}

// OnSetViewModel @ 14bd80160

void __thiscall
UDS_VM_Chat_EmotePopup::OnSetViewModel
          (UDS_VM_Chat_EmotePopup *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  int iVar3;
  FName local_78;
  int local_70;
  FDS_Text local_68;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_68.StringTableType = None;
  local_68.StringTableID = 0;
  local_68.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_68.StringEnumTableNameID.Number = 0;
  local_68.TimeExpressionType = None;
  local_68.IsExpression = false;
  local_68.DateTime.Ticks = 0;
  local_68.TimeSpan.Ticks = 0;
  local_68.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.UniqueString.Data.ArrayNum = 0;
  local_68.UniqueString.Data.ArrayMax = 0;
  local_68.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.FormatArgs.ArrayNum = 0;
  local_68.FormatArgs.ArrayMax = 0;
  FDS_Text::SetTextFromStringTable(&local_68,StringUi,0xc386);
  iVar3 = FFieldNotificationClassDescriptor::TitleText.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::TitleText.FieldName;
  FDS_Text::operator=(&this->TitleText,&local_68);
  local_78 = FVar2;
  local_70 = iVar3;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_68.FormatArgs.AllocatorInstance.Data,
             local_68.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_68.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_68.FormatArgs.AllocatorInstance.Data);
  }
  if (local_68.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.UniqueString.Data.AllocatorInstance.Data);
  }
  UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetTitleText @ 14bd8ad20

void __thiscall UDS_VM_Chat_EmotePopup::SetTitleText(UDS_VM_Chat_EmotePopup *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::TitleText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::TitleText.FieldName;
  FDS_Text::operator=(&this->TitleText,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14bd8be70

void __thiscall UDS_VM_Chat_EmotePopup::UnbindModel(UDS_VM_Chat_EmotePopup *this)

{
  UDS_ChatEvent *pUVar1;
  UDS_UIEvent *pUVar2;
  UDS_InputEvent *pUVar3;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_ChatEvent::GetEvent();
  if (pUVar1 != (UDS_ChatEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChatPopup,this);
  }
  pUVar2 = UDS_UIEvent::GetEvent();
  if (pUVar2 != (UDS_UIEvent *)0x0) {
    FDS_FilteredEventDelegate<enum_EDS_ViewModelTemplateKey_const_,int_const_,int_const_>::
    Remove<UDS_VM_Chat_EmotePopup>(&pUVar2->OnSelectedIconSlot,this);
  }
  pUVar3 = UDS_InputEvent::GetEvent();
  if (pUVar3 != (UDS_InputEvent *)0x0) {
    FDS_FilteredEventDelegate<enum_EDS_KeyActionType_const_,enum_EDS_KeyActionType_const_,enum_ETriggerEvent_const_,FInputActionValue_const_&>
    ::Remove<UDS_VM_Chat_EmotePopup>(&pUVar3->OnInputEvent,this);
    return;
  }
  return;
}

// UpdateChatEmoteList @ 14bd8d460

void __thiscall UDS_VM_Chat_EmotePopup::UpdateChatEmoteList(UDS_VM_Chat_EmotePopup *this)

{
  FScriptContainerElement *pFVar1;
  FDS_ChattingEmoteTableRow *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  UDS_UserObjectListItem *this_00;
  FDS_ViewModelContext *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  UScriptStruct *pUVar8;
  UDS_ViewModelContextManager *this_01;
  FDS_ViewModelContext *pFVar9;
  ForAnyElementType FVar10;
  FIdentityFunctor local_res8 [8];
  UDS_UserObjectListItem *local_res10;
  FName local_78;
  int local_70;
  TArray<FDS_ChattingEmoteTableRow_const_*,TSizedDefaultAllocator<32>_> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField);
  FDS_ChattingEmoteTableRow::GetAll(&local_68);
  AlgoImpl::
  IntroSortInternal<FDS_ChattingEmoteTableRow_const_*,int,FIdentityFunctor,_UDS_VM_Chat_EmotePopup::UpdateChatEmoteList_::__l2::<lambda_1>_>
            ((FDS_ChattingEmoteTableRow **)local_68.AllocatorInstance.Data,local_68.ArrayNum,
             local_res8[0],(<lambda_1>)local_res8[0]);
  iVar4 = local_68.ArrayNum;
  pFVar1 = local_68.AllocatorInstance.Data + (longlong)local_68.ArrayNum * 8;
  FVar10.Data = local_68.AllocatorInstance.Data;
  do {
    pFVar9 = (FDS_ViewModelContext *)0x0;
    if (local_68.ArrayNum != iVar4) {
      local_res8[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<FDS_ChattingEmoteTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar10.Data == pFVar1) {
      local_70 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
      local_78 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
      if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.AllocatorInstance.Data);
      }
      return;
    }
    pFVar2 = *(FDS_ChattingEmoteTableRow **)FVar10.Data;
    if (pFVar2 != (FDS_ChattingEmoteTableRow *)0x0) {
      this_00 = NewObject<UDS_UserObjectListItem>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_00 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      pFVar6 = ::operator_new(0x30);
      if (pFVar6 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar6->ViewModelTemplateKey = 0;
        *(undefined2 *)((longlong)&pFVar6[1].DerivedStaticStruct + 5) = 0;
        *(undefined1 *)((longlong)&pFVar6[1].DerivedStaticStruct + 7) = 0;
        pFVar6->DerivedStaticStruct = (UStruct *)0x0;
        (pFVar6->ViewModelName).ComparisonIndex = 0;
        (pFVar6->ViewModelName).Number = 0;
        pFVar6->_padding_ = (longlong)&___7FDS_ViewModelContext_IconSlot__6B_;
        pFVar6[1]._padding_ = 0;
        *(undefined4 *)&pFVar6[1].DerivedStaticStruct = 0;
        *(undefined1 *)((longlong)&pFVar6[1].DerivedStaticStruct + 4) = 0;
        pFVar9 = pFVar6;
      }
      pTVar7 = ::operator_new(0x20);
      if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar7->SharedReferenceCount = (atomic<int>)0x1;
        pTVar7[1]._padding_ = (longlong)ViewModelContextDeleter;
        pTVar7->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_IconSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        pTVar7->WeakReferenceCount = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pTVar7[1].SharedReferenceCount = pFVar9;
      }
      if ((pFVar9 == (FDS_ViewModelContext *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar8 = FDS_ViewModelContext_IconSlot::StaticStruct();
      pFVar9->DerivedStaticStruct = (UStruct *)pUVar8;
      this_01 = UDS_ViewModelContextManager::GetInst();
      if (this_01 != (UDS_ViewModelContextManager *)0x0) {
        if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_58.Object = pFVar9;
        local_58.SharedReferenceCount.ReferenceController = pTVar7;
        UDS_ViewModelContextManager::RegisterContext(this_01,&local_58);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_58.SharedReferenceCount.ReferenceController);
      }
      pFVar9->ViewModelTemplateKey = Common_IconSlot;
      *(undefined4 *)&pFVar9[1]._padding_ = 0x129;
      *(int *)((longlong)&pFVar9[1]._padding_ + 4) = pFVar2->ID;
      *(int *)&pFVar9[1].DerivedStaticStruct = pFVar2->ID_Icon;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48.Object = pFVar9;
      local_48.SharedReferenceCount.ReferenceController = pTVar7;
      UDS_UserObjectListItem::AddContext(this_00,&local_48);
      local_res10 = this_00;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_00 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      FDS_EntryBindingEventField::Add
                (&this->EntryBindingEventField,(TObjectPtr<UDS_UserObjectListItem>)&local_res10);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    }
    FVar10.Data = FVar10.Data + 8;
  } while( true );
}

