// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 25

// SetFocusLostEvent_WrapperImpl @ 14b61c450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Chat_SubTabs::SetFocusLostEvent_WrapperImpl(void *param_1,void *param_2)

{
  UDS_WindowManager *this;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  float fStack_148;
  uint auStack_144 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  if (*(char *)((longlong)param_2 + 1) != '\0') {
    return;
  }
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this = UDS_WindowManager::GetInst();
  if (this == (UDS_WindowManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_Chat_SubTabs::OnClose",0x1c,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,TStack_138.Ptr,0x1dd,L"windowManager == nullptr");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
        return;
      }
    }
  }
  else {
    fStack_148 = 0.0;
    auStack_144[0] = 0;
    UDS_WindowManager::CloseWindow(this,ChattingSubTabList,auStack_144,&fStack_148);
  }
  return;
}

// StaticClass @ 14b61c460

UClass * __cdecl UDS_VM_Chat_SubTabs::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_SubTabs.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_SubTabs",
               &Z_Registration_Info_UClass_UDS_VM_Chat_SubTabs.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_SubTabs,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Chat_SubTabs>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_SubTabs>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_SubTabs.InnerSingleton;
}

// UDS_VM_Chat_SubTabs @ 14b61fc30

UDS_VM_Chat_SubTabs * __thiscall
UDS_VM_Chat_SubTabs::UDS_VM_Chat_SubTabs(UDS_VM_Chat_SubTabs *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->SelectedItemIndex = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_SubTabs__6B_;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->FocusLostEvent)._padding_ = '\0';
  (this->FocusLostEvent).bLostFocusByChild = false;
  this->SetFocusEvent = false;
  this->ChattingTabType = None;
  return this;
}

// UDS_VM_Chat_SubTabs @ 14b61fc90

UDS_VM_Chat_SubTabs * __thiscall
UDS_VM_Chat_SubTabs::UDS_VM_Chat_SubTabs(UDS_VM_Chat_SubTabs *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->SelectedItemIndex = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_SubTabs__6B_;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->FocusLostEvent)._padding_ = '\0';
  (this->FocusLostEvent).bLostFocusByChild = false;
  this->SetFocusEvent = false;
  this->ChattingTabType = None;
  return this;
}

// ~UDS_VM_Chat_SubTabs @ 14b621440

void __thiscall UDS_VM_Chat_SubTabs::~UDS_VM_Chat_SubTabs(UDS_VM_Chat_SubTabs *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_SubTabs__6B_;
  pFVar1 = (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6237a0

IClassDescriptor * __thiscall
UDS_VM_Chat_SubTabs::GetFieldNotificationDescriptor(UDS_VM_Chat_SubTabs *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Chat_SubTabs::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b623ef0

UClass * __cdecl UDS_VM_Chat_SubTabs::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_SubTabs.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_SubTabs",
               &Z_Registration_Info_UClass_UDS_VM_Chat_SubTabs.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_SubTabs,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Chat_SubTabs>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_SubTabs>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_SubTabs.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Chat_SubTabs @ 14b624ad0

void __cdecl UDS_VM_Chat_SubTabs::StaticRegisterNativesUDS_VM_Chat_SubTabs(void)

{
  return;
}

// BindModel @ 14bdb09c0

void __thiscall UDS_VM_Chat_SubTabs::BindModel(UDS_VM_Chat_SubTabs *this)

{
  TMap<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>_>
  *this_00;
  EDS_KeyActionType EVar1;
  UDS_ChatEvent *pUVar2;
  UDS_InputEvent *pUVar3;
  int *piVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 local_res10 [2];
  int local_res18 [2];
  undefined4 *local_res20;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar2 = UDS_ChatEvent::GetEvent();
  if (pUVar2 != (UDS_ChatEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnChangeChattingTabType,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_ChattingTabType,int),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_Chat_SubTabs>
              (&pUVar2->OnChangeChattingTabType,(UDS_VM_Chat_SubTabs *)local_res10,
               (pmf_37f15e78 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnChatPopup,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_ViewModelTemplateKey,bool),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_Chat_SubTabs>
              (&pUVar2->OnChatPopup,(UDS_VM_Chat_SubTabs *)local_res10,(pmf_a956469e *)this);
    EVar1 = UDS_ChattingManager::GetKeyActionType(this->ChattingTabType);
    FDS_EventDelegate<bool_const_,enum_EDS_KeyActionType_const_>::Broadcast
              (&pUVar2->OnAddedKeyActionType,true,EVar1);
  }
  pUVar3 = UDS_InputEvent::GetEvent();
  if (pUVar3 != (UDS_InputEvent *)0x0) {
    this_00 = &(pUVar3->OnInputEvent).Subscriptions;
    local_res10[0] = 0x4e2e;
    if (*(int *)&(pUVar3->OnInputEvent).Subscriptions.field_0x8 !=
        *(int *)&(pUVar3->OnInputEvent).Subscriptions.field_0x34) {
      puVar5 = *(undefined1 **)&(pUVar3->OnInputEvent).Subscriptions.field_0x40;
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &(pUVar3->OnInputEvent).Subscriptions.field_0x38;
      }
      iVar6 = *(int *)(puVar5 + (ulonglong)
                                (*(int *)&(pUVar3->OnInputEvent).Subscriptions.field_0x48 - 1U &
                                0x4e2e) * 4);
      if (iVar6 != -1) {
        do {
          piVar4 = (int *)((longlong)iVar6 * 0x50 + *(longlong *)this_00);
          if (*piVar4 == 0x4e2e) {
            if (piVar4 != (int *)0x0) goto LAB_14bdb0b4c;
            break;
          }
          iVar6 = piVar4[0x12];
        } while (iVar6 != -1);
      }
    }
    local_res20 = local_res10;
    TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
              (this_00,(uint)local_res18,(TKeyInitializer<EDS_KeyActionType_const_&> *)0x4e2e,
               (bool *)&local_res20);
    piVar4 = (int *)((longlong)local_res18[0] * 0x50 + *(longlong *)this_00);
LAB_14bdb0b4c:
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar4 + 2),this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
    ::AddUObject<UDS_VM_Chat_SubTabs>
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar4 + 2),
               (UDS_VM_Chat_SubTabs *)local_res18,(pmf_0bff0d95 *)this);
  }
  return;
}

// GetSelectedItem @ 14bdc40f0

TWeakObjectPtr<UDS_UserObjectListItem,FWeakObjectPtr> __thiscall
UDS_VM_Chat_SubTabs::GetSelectedItem(UDS_VM_Chat_SubTabs *this)

{
  int iVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  TArray<TObjectPtr<UDS_UserObjectListItem>,TSizedDefaultAllocator<32>_> *pTVar5;
  TWeakObjectPtr<UDS_UserObjectListItem,FWeakObjectPtr> TVar6;
  FWeakObjectPtr in_RDX;
  FObjectPtr_u_0 FVar7;
  UObject *local_res8;
  undefined8 local_res18;
  
  pTVar5 = FDS_EntryBindingEventField::GetUserObjectList(&this->EntryBindingEventField);
  iVar1 = this->SelectedItemIndex;
  if ((iVar1 < 0) || (pTVar5->ArrayNum <= iVar1)) {
    FVar7.Handle = (UObject *)&local_res18;
    *(undefined8 *)in_RDX = 0;
    local_res18 = 0;
  }
  else {
    if (iVar1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar6.WeakPtr = (FWeakObjectPtr)(*pcVar3)();
        return (TWeakObjectPtr<UDS_UserObjectListItem,FWeakObjectPtr>)TVar6.WeakPtr;
      }
    }
    pUVar2 = *(UObject **)((pTVar5->AllocatorInstance).Data + (longlong)iVar1 * 8);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar2 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
    }
    *(undefined8 *)in_RDX = 0;
    local_res8 = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    FVar7.Handle = (UObject *)&local_res8;
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)FVar7);
  return (TWeakObjectPtr<UDS_UserObjectListItem,FWeakObjectPtr>)in_RDX;
}

// OnChangeChattingTabType @ 14bdca430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_SubTabs::OnChangeChattingTabType
          (UDS_VM_Chat_SubTabs *this,EDS_ChattingTabType param_1,int param_2)

{
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  float fStack_148;
  uint auStack_144 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_Chat_SubTabs::OnClose",0x1c,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,TStack_138.Ptr,0x1dd,L"windowManager == nullptr");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
        return;
      }
    }
  }
  else {
    fStack_148 = 0.0;
    auStack_144[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,ChattingSubTabList,auStack_144,&fStack_148);
  }
  return;
}

// OnChatPopup @ 14bdcb0c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_SubTabs::OnChatPopup
          (UDS_VM_Chat_SubTabs *this,EDS_ViewModelTemplateKey param_1,bool param_2)

{
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  float fStack_148;
  uint auStack_144 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  if (((param_1 - Chat_RecentWhispers & 0xfffffffd) == 0) && (param_2)) {
    uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
    this_00 = UDS_WindowManager::GetInst();
    if (this_00 == (UDS_WindowManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      if (pUVar1 != (UDS_LogManager *)0x0) {
        pUVar1 = UDS_LogManager::GetInst();
        TStack_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_138,"UDS_VM_Chat_SubTabs::OnClose",0x1c,Yes);
        UDS_LogManager::PrintLog(pUVar1,1,Warning,TStack_138.Ptr,0x1dd,L"windowManager == nullptr");
        if ((void *)TStack_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)TStack_138._padding_);
          return;
        }
      }
    }
    else {
      fStack_148 = 0.0;
      auStack_144[0] = 0;
      UDS_WindowManager::CloseWindow(this_00,ChattingSubTabList,auStack_144,&fStack_148);
    }
    return;
  }
  return;
}

// OnClose @ 14bdcd8e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Chat_SubTabs::OnClose(UDS_VM_Chat_SubTabs *this)

{
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  float local_148;
  uint local_144 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Chat_SubTabs::OnClose",0x1c,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x1dd,L"windowManager == nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
        return;
      }
    }
  }
  else {
    local_148 = 0.0;
    local_144[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,ChattingSubTabList,local_144,&local_148);
  }
  return;
}

// OnCloseInit @ 14bdcdb00

void __thiscall UDS_VM_Chat_SubTabs::OnCloseInit(UDS_VM_Chat_SubTabs *this)

{
  FName local_18;
  int local_10;
  
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField);
  local_10 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  UDS_ViewModelBase::OnCloseInit((UDS_ViewModelBase *)this);
  return;
}

// OnFocusLostEvent @ 14bdcedf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_SubTabs::OnFocusLostEvent(UDS_VM_Chat_SubTabs *this,FDS_FocusEventField *param_1)

{
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  float fStack_148;
  uint auStack_144 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  if (param_1->bLostFocusByChild != false) {
    return;
  }
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_Chat_SubTabs::OnClose",0x1c,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,TStack_138.Ptr,0x1dd,L"windowManager == nullptr");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
        return;
      }
    }
  }
  else {
    fStack_148 = 0.0;
    auStack_144[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,ChattingSubTabList,auStack_144,&fStack_148);
  }
  return;
}

// OnInput_SelectChattingGroup @ 14bdcf2e0

void __thiscall
UDS_VM_Chat_SubTabs::OnInput_SelectChattingGroup
          (UDS_VM_Chat_SubTabs *this,EDS_KeyActionType param_1,ETriggerEvent param_2,
          FInputActionValue *param_3)

{
  int iVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TArray<TObjectPtr<UDS_UserObjectListItem>,TSizedDefaultAllocator<32>_> *pTVar6;
  UDS_UserObjectListItem *this_00;
  UDS_ChatEvent *pUVar7;
  uint uVar8;
  int iVar10;
  FWeakObjectPtr local_28;
  UObject *local_20;
  TSharedPtr<FDS_ViewModelContext_ChatTab,1> local_18;
  int iVar9;
  
  if ((param_2 == Started) && (UpdateSelectedItemIndex(this), this->SelectedItemIndex != -1)) {
    pTVar6 = FDS_EntryBindingEventField::GetUserObjectList(&this->EntryBindingEventField);
    iVar10 = 1;
    uVar5 = this->SelectedItemIndex;
    iVar1 = pTVar6->ArrayNum;
    if (1 < iVar1) {
      do {
        iVar9 = -iVar10;
        if (0.0 < (float)(param_3->Value).field0_0x0._s_0.X) {
          iVar9 = iVar10;
        }
        uVar8 = iVar9 + uVar5;
        iVar9 = iVar1;
        if (-1 < (int)uVar8) {
          if ((int)uVar8 < iVar1) goto LAB_14bdcf38b;
          iVar9 = -iVar1;
        }
        uVar8 = uVar8 + iVar9;
        if ((-1 < (int)uVar8) && ((int)uVar8 < iVar1)) goto LAB_14bdcf38b;
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar1);
    }
    uVar8 = uVar5;
    if (uVar5 != 0xffffffff) {
LAB_14bdcf38b:
      if ((-1 < (int)uVar8) && ((int)uVar8 < iVar1)) {
        this->SelectedItemIndex = uVar8;
        uVar5 = 0;
        if ((int)uVar8 < pTVar6->ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pUVar2 = *(UObject **)((pTVar6->AllocatorInstance).Data + (longlong)(int)uVar8 * 8);
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (pUVar2 != (UObject *)0x0) {
            UE::GC::MarkAsReachable(pUVar2);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar2);
          }
        }
        local_28.ObjectIndex = 0;
        local_28.ObjectSerialNumber = 0;
        local_20 = pUVar2;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar2);
        }
        FWeakObjectPtr::operator=(&local_28,(FObjectPtr)&local_20);
        bVar4 = FWeakObjectPtr::IsValid(&local_28);
        if (bVar4) {
          this_00 = (UDS_UserObjectListItem *)FWeakObjectPtr::Get(&local_28);
          UDS_UserObjectListItem::GetContext<FDS_ViewModelContext_ChatTab>(this_00,&local_18);
          if ((local_18.Object != (FDS_ViewModelContext_ChatTab *)0x0) &&
             (pUVar7 = UDS_ChatEvent::GetEvent(), pUVar7 != (UDS_ChatEvent *)0x0)) {
            if ((local_18.Object == (FDS_ViewModelContext_ChatTab *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FDS_EventDelegate<int_const_>::Broadcast
                      (&pUVar7->OnSelectedSubTabIndex,(local_18.Object)->SubTabIndex);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_18.SharedReferenceCount.ReferenceController);
        }
      }
    }
  }
  return;
}

// OnInput_SelectSubTab @ 14bdcfbd0

void __thiscall
UDS_VM_Chat_SubTabs::OnInput_SelectSubTab
          (UDS_VM_Chat_SubTabs *this,EDS_KeyActionType param_1,ETriggerEvent param_2,
          FInputActionValue *param_3)

{
  code *pcVar1;
  bool bVar2;
  UDS_UserObjectListItem *this_00;
  UDS_ChatEvent *pUVar3;
  FWeakObjectPtr local_28;
  TSharedPtr<FDS_ViewModelContext_ChatTab,1> local_20;
  
  if ((param_2 == Started) && (this->SelectedItemIndex != -1)) {
    GetSelectedItem(this);
    bVar2 = FWeakObjectPtr::IsValid(&local_28);
    if (bVar2) {
      this_00 = (UDS_UserObjectListItem *)FWeakObjectPtr::Get(&local_28);
      UDS_UserObjectListItem::GetContext<FDS_ViewModelContext_ChatTab>(this_00,&local_20);
      if ((local_20.Object != (FDS_ViewModelContext_ChatTab *)0x0) &&
         (pUVar3 = UDS_ChatEvent::GetEvent(), pUVar3 != (UDS_ChatEvent *)0x0)) {
        if ((local_20.Object == (FDS_ViewModelContext_ChatTab *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FDS_EventDelegate<int_const_>::Broadcast
                  (&pUVar3->OnClickedSubTabIndex,(local_20.Object)->SubTabIndex);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_20.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// OnSetViewModel @ 14bdd6280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_SubTabs::OnSetViewModel
          (UDS_VM_Chat_SubTabs *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  EDS_ChattingTabType EVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UDS_LogManager *pUVar6;
  UDS_ChatEvent *pUVar7;
  UDS_ChattingManager *this_00;
  UDS_UserObjectListItem *this_01;
  undefined1 auStackY_1e8 [32];
  FWeakObjectPtr local_1b8;
  TSharedPtr<FDS_ViewModelContext_ChatTab,1> local_1b0;
  FName local_198;
  int local_190;
  FName local_188;
  int local_180;
  TSharedPtr<FDS_ViewModelContext_ChatTab,1> local_178;
  TSharedPtr<FDS_ViewModelContext,1> local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_168.Object = param_1->Object;
  local_168.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_ChatTab>(&local_1b0,&local_168);
  if (local_1b0.Object == (FDS_ViewModelContext_ChatTab *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_158._padding_ = (longlong)local_1b0.Object;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_Chat_SubTabs::OnSetViewModel",0x23,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_158.Ptr,0x17,L"chatTabContext.IsValid() == false");
      if ((FDS_ViewModelContext_ChatTab *)local_158._padding_ != (FDS_ViewModelContext_ChatTab *)0x0
         ) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    (this->SetFocusEvent).bIsActivate = true;
    local_190 = FFieldNotificationClassDescriptor::SetFocusEvent.BitNumber;
    local_198 = FFieldNotificationClassDescriptor::SetFocusEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_198);
    if (local_1b0.Object == (FDS_ViewModelContext_ChatTab *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    this->ChattingTabType = (local_1b0.Object)->ChattingTabType;
    FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField);
    EVar1 = this->ChattingTabType;
    if (EVar1 == Custom) {
      UpdateSubTabs_Custom(this);
    }
    else if (EVar1 == Whisper) {
      UpdateSubTabs_Whisper(this);
    }
    else if (EVar1 == Group) {
      UpdateSubTabs_Group(this);
    }
    else if (EVar1 == Favorite) {
      UpdateSubTabs_Favorite(this);
    }
    UpdateSelectedItemIndex(this);
    local_180 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
    local_188 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_188);
    iVar5 = FDS_EntryBindingEventField::Num(&this->EntryBindingEventField);
    if (iVar5 < 1) {
      OnClose(this);
    }
    pUVar7 = UDS_ChatEvent::GetEvent();
    if (pUVar7 != (UDS_ChatEvent *)0x0) {
      FDS_EventDelegate<enum_EDS_ViewModelTemplateKey_const_,bool_const_>::Broadcast
                (&pUVar7->OnChatPopup,Chat_SubTabs,0 < iVar5);
    }
    this_00 = UDS_ChattingManager::GetInst();
    if (this_00 != (UDS_ChattingManager *)0x0) {
      GetSelectedItem(this);
      bVar4 = FWeakObjectPtr::IsValid(&local_1b8);
      if (bVar4) {
        this_01 = (UDS_UserObjectListItem *)FWeakObjectPtr::Get(&local_1b8);
        UDS_UserObjectListItem::GetContext<FDS_ViewModelContext_ChatTab>(this_01,&local_178);
        if ((local_178.Object != (FDS_ViewModelContext_ChatTab *)0x0) &&
           (this->ChattingTabType != Favorite)) {
          if (local_178.Object == (FDS_ViewModelContext_ChatTab *)0x0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          UDS_ChattingManager::SetChattingTabType
                    (this_00,(local_178.Object)->ChattingTabType,(local_178.Object)->SubTabIndex);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_178.SharedReferenceCount.ReferenceController);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UnbindModel @ 14bdec2d0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_Chat_SubTabs::UnbindModel(UDS_VM_Chat_SubTabs *this)

{
  EDS_KeyActionType EVar1;
  UDS_LanguageManager *pUVar2;
  UDS_ChatEvent *pUVar3;
  UDS_InputEvent *pUVar4;
  
  pUVar2 = UDS_LanguageManager::GetInst();
  if (pUVar2 != (UDS_LanguageManager *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnLanguageChanged,this
              );
  }
  pUVar3 = UDS_ChatEvent::GetEvent();
  if (pUVar3 != (UDS_ChatEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar3->OnChangeChattingTabType,this);
    EVar1 = UDS_ChattingManager::GetKeyActionType(this->ChattingTabType);
    FDS_EventDelegate<bool_const_,enum_EDS_KeyActionType_const_>::Broadcast
              (&pUVar3->OnAddedKeyActionType,false,EVar1);
  }
  pUVar4 = UDS_InputEvent::GetEvent();
  if (pUVar4 != (UDS_InputEvent *)0x0) {
    FDS_FilteredEventDelegate<enum_EDS_KeyActionType_const_,enum_EDS_KeyActionType_const_,enum_ETriggerEvent_const_,FInputActionValue_const_&>
    ::Remove<UDS_VM_Chat_SubTabs>(&pUVar4->OnInputEvent,this);
  }
  return;
}

// UpdateSelectedItemIndex @ 14bdf4d20

void __thiscall UDS_VM_Chat_SubTabs::UpdateSelectedItemIndex(UDS_VM_Chat_SubTabs *this)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  FDS_ViewModelContext_ChatTab *pFVar4;
  bool bVar5;
  uint uVar6;
  TArray<TObjectPtr<UDS_UserObjectListItem>,TSizedDefaultAllocator<32>_> *pTVar7;
  UObject *pUVar8;
  undefined8 *puVar9;
  FSharedReferencer<1> FVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 local_res10 [8];
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  TSharedPtr<FDS_ViewModelContext_ChatTab,1> local_70;
  TSharedPtr<FDS_ViewModelContext,1> local_60 [2];
  
  if (this->SelectedItemIndex == -1) {
    pTVar7 = FDS_EntryBindingEventField::GetUserObjectList(&this->EntryBindingEventField);
    uVar12 = 0;
    iVar1 = pTVar7->ArrayNum;
    uVar14 = uVar12;
    if (0 < iVar1) {
      do {
        uVar13 = (uint)uVar14;
        uVar6 = 0;
        if ((int)uVar13 < pTVar7->ArrayNum) {
          uVar6 = ~uVar13 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pUVar8 = *(UObject **)((pTVar7->AllocatorInstance).Data + uVar12 * 8);
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (pUVar8 != (UObject *)0x0) {
            UE::GC::MarkAsReachable(pUVar8);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar8);
          }
        }
        local_res18.ObjectIndex = 0;
        local_res18.ObjectSerialNumber = 0;
        local_res20 = pUVar8;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar8);
        }
        FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
        bVar5 = FWeakObjectPtr::IsValid(&local_res18);
        if (bVar5) {
          pUVar8 = FWeakObjectPtr::Get(&local_res18);
          iVar2 = *(int *)(pUVar8 + 4);
          puVar9 = *(undefined8 **)&pUVar8[3].field_0x20;
          puVar11 = puVar9 + (longlong)iVar2 * 2;
          while( true ) {
            if (*(int *)(pUVar8 + 4) != iVar2) {
              local_res10[0] = 0;
              `TCheckedPointerIterator<TSharedPtr<FDS_ViewModelContext,1>,int,0>::operator!='::__l2
              ::<lambda_1>::operator()(local_res10);
            }
            if (puVar9 == puVar11) {
              FVar10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
              goto LAB_14bdf4f86;
            }
            local_60[0].Object = (FDS_ViewModelContext *)*puVar9;
            local_60[0].SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)puVar9[1];
            if (local_60[0].SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_60[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_60[0].SharedReferenceCount.ReferenceController)->
                         SharedReferenceCount + 1);
              UNLOCK();
            }
            SafeCast<FDS_ViewModelContext_ChatTab>(&local_70,local_60);
            FVar10.ReferenceController = local_70.SharedReferenceCount.ReferenceController;
            pFVar4 = local_70.Object;
            if (local_70.Object != (FDS_ViewModelContext_ChatTab *)0x0) break;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_70.SharedReferenceCount.ReferenceController);
            puVar9 = puVar9 + 2;
          }
          local_70.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          local_70.Object = (FDS_ViewModelContext_ChatTab *)0x0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          if (pFVar4 != (FDS_ViewModelContext_ChatTab *)0x0) {
            pFVar4->IsSelected = true;
            this->SelectedItemIndex = uVar13;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar10.ReferenceController);
            return;
          }
LAB_14bdf4f86:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar10.ReferenceController);
        }
        uVar12 = uVar12 + 1;
        uVar14 = (ulonglong)(uVar13 + 1);
      } while ((longlong)uVar12 < (longlong)iVar1);
    }
  }
  return;
}

// UpdateSubTabs @ 14bdf6f50

void __thiscall UDS_VM_Chat_SubTabs::UpdateSubTabs(UDS_VM_Chat_SubTabs *this)

{
  EDS_ChattingTabType EVar1;
  int iVar2;
  UDS_ChatEvent *pUVar3;
  FName local_18;
  int local_10;
  
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField);
  EVar1 = this->ChattingTabType;
  if (EVar1 == Custom) {
    UpdateSubTabs_Custom(this);
  }
  else if (EVar1 == Whisper) {
    UpdateSubTabs_Whisper(this);
  }
  else if (EVar1 == Group) {
    UpdateSubTabs_Group(this);
  }
  else if (EVar1 == Favorite) {
    UpdateSubTabs_Favorite(this);
  }
  UpdateSelectedItemIndex(this);
  local_10 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  iVar2 = FDS_EntryBindingEventField::Num(&this->EntryBindingEventField);
  if (iVar2 < 1) {
    OnClose(this);
  }
  pUVar3 = UDS_ChatEvent::GetEvent();
  if (pUVar3 != (UDS_ChatEvent *)0x0) {
    FDS_EventDelegate<enum_EDS_ViewModelTemplateKey_const_,bool_const_>::Broadcast
              (&pUVar3->OnChatPopup,Chat_SubTabs,0 < iVar2);
  }
  return;
}

// UpdateSubTabs_Custom @ 14bdf7030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Chat_SubTabs::UpdateSubTabs_Custom(UDS_VM_Chat_SubTabs *this)

{
  TMap<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>_>
  *this_00;
  EDS_ChattingTabType EVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  FDS_ViewModelContext_ChatTab *pFVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  UDS_ChattingManager *this_01;
  UDS_LogManager *pUVar9;
  UObject *pUVar10;
  UDS_UserObjectListItem *pUVar11;
  UDS_InputEvent *pUVar12;
  undefined1 *puVar13;
  int iVar14;
  int *piVar15;
  atomic<int> *paVar16;
  int iVar17;
  undefined1 auStackY_208 [32];
  undefined4 local_1cc;
  int local_1c8 [4];
  TSharedPtr<FDS_ViewModelContext_ChatTab,1> local_1b8;
  TSharedPtr<FDS_ChatCustomData,1> local_1a8;
  UDS_UserObjectListItem *local_198;
  UDS_ChattingManager *local_190;
  undefined4 *local_188 [2];
  FDS_ViewModelContext_ChatTab *local_178;
  undefined8 uStack_170;
  undefined1 local_168 [272];
  void *local_58;
  wchar_t *local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_208;
  this_01 = UDS_ChattingManager::GetInst();
  local_190 = this_01;
  if (this_01 == (UDS_ChattingManager *)0x0) {
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 != (UDS_LogManager *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      local_58 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_168 + 0x10),
                 "UDS_VM_Chat_SubTabs::UpdateSubTabs_Custom",0x29,Yes);
      UDS_LogManager::PrintLog(pUVar9,1,Warning,local_50,0x9d,L"chattingManager == nullptr");
      if (local_58 != (void *)0x0) {
        FMemory::Free(local_58);
      }
    }
  }
  else {
    EVar1 = (this_01->ChatStateData).ChattingTabType;
    iVar14 = (this_01->ChatStateData).SubTabIndex;
    this->SelectedItemIndex = -1;
    iVar7 = DS_CommonDataHelper::ChattingCustomTabCount();
    iVar17 = 0;
    if (0 < iVar7) {
      do {
        UDS_ChattingManager::GetCustomData(this_01,&local_1a8,iVar17);
        if (local_1a8.Object != (FDS_ChatCustomData *)0x0) {
          if ((local_1a8.Object == (FDS_ChatCustomData *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((local_1a8.Object)->ChatFilterFlags != 0) {
            pUVar10 = GetTransientPackageAsObject();
            pUVar11 = NewObject<UDS_UserObjectListItem>(pUVar10);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar11 != (UDS_UserObjectListItem *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar11);
            }
            MakeContext<FDS_ViewModelContext_ChatTab>(&local_1b8);
            pFVar5 = local_1b8.Object;
            if ((local_1b8.Object == (FDS_ViewModelContext_ChatTab *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            *(undefined4 *)&pFVar5->_padding_ = 0x124;
            pFVar5->ChattingTabType = this->ChattingTabType;
            pFVar5->SubTabIndex = iVar17;
            if ((EVar1 == Custom) && (iVar17 == iVar14)) {
              bVar6 = true;
            }
            else {
              bVar6 = false;
            }
            pFVar5->IsSelected = bVar6;
            if ((this->SelectedItemIndex == -1) && (bVar6 == true)) {
              this->SelectedItemIndex = iVar17;
            }
            pTVar4 = (TReferenceControllerBase<1> *)
                     CONCAT44(local_1b8.SharedReferenceCount.ReferenceController._4_4_,
                              local_1b8.SharedReferenceCount.ReferenceController._0_4_);
            if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
              paVar16 = (atomic<int> *)&DAT_00000008;
            }
            else {
              paVar16 = &pTVar4->SharedReferenceCount;
              LOCK();
              *paVar16 = (atomic<int>)((int)*paVar16 + 1);
              UNLOCK();
            }
            iVar8 = (pUVar11->ViewModelContextArray).ArrayNum;
            piVar15 = &(pUVar11->ViewModelContextArray).ArrayMax;
            if (iVar8 == *piVar15) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&(pUVar11->ViewModelContextArray).AllocatorInstance,piVar15);
            }
            (pUVar11->ViewModelContextArray).ArrayNum = iVar8 + 1;
            pFVar2 = (pUVar11->ViewModelContextArray).AllocatorInstance.Data;
            *(FDS_ViewModelContext_ChatTab **)(pFVar2 + (longlong)iVar8 * 0x10) = pFVar5;
            *(TReferenceControllerBase<1> **)(pFVar2 + (longlong)iVar8 * 0x10 + 8) = pTVar4;
            if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              *paVar16 = (atomic<int>)((int)*paVar16 + 1);
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar4);
            local_198 = pUVar11;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar11 != (UDS_UserObjectListItem *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar11);
            }
            FDS_EntryBindingEventField::Add
                      (&this->EntryBindingEventField,(TObjectPtr<UDS_UserObjectListItem>)&local_198)
            ;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar4);
            this_01 = local_190;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1a8.SharedReferenceCount.ReferenceController);
        iVar17 = iVar17 + 1;
      } while (iVar17 < iVar7);
    }
    pUVar12 = UDS_InputEvent::GetEvent();
    if (pUVar12 != (UDS_InputEvent *)0x0) {
      this_00 = &(pUVar12->OnInputEvent).Subscriptions;
      local_1cc = 0x15f95;
      local_1b8.Object = (FDS_ViewModelContext_ChatTab *)OnInput_SelectChattingGroup;
      local_1b8.SharedReferenceCount.ReferenceController._4_4_ = uStack_170._4_4_;
      local_1b8.SharedReferenceCount.ReferenceController._0_4_ = 0;
      if (*(int *)&(pUVar12->OnInputEvent).Subscriptions.field_0x8 !=
          *(int *)&(pUVar12->OnInputEvent).Subscriptions.field_0x34) {
        puVar13 = *(undefined1 **)&(pUVar12->OnInputEvent).Subscriptions.field_0x40;
        if (puVar13 == (undefined1 *)0x0) {
          puVar13 = &(pUVar12->OnInputEvent).Subscriptions.field_0x38;
        }
        iVar14 = *(int *)(puVar13 +
                         (ulonglong)
                         (*(int *)&(pUVar12->OnInputEvent).Subscriptions.field_0x48 - 1U & 0x15f95)
                         * 4);
        if (iVar14 != -1) {
          do {
            piVar15 = (int *)((longlong)iVar14 * 0x50 + *(longlong *)this_00);
            if (*piVar15 == 0x15f95) {
              if (piVar15 != (int *)0x0) goto LAB_14bdf73fe;
              break;
            }
            iVar14 = piVar15[0x12];
          } while (iVar14 != -1);
        }
      }
      local_188[0] = &local_1cc;
      TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
                (this_00,(uint)local_1c8,(TKeyInitializer<EDS_KeyActionType_const_&> *)0x15f95,
                 (bool *)local_188);
      piVar15 = (int *)((longlong)local_1c8[0] * 0x50 + *(longlong *)this_00);
LAB_14bdf73fe:
      TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar15 + 2),this);
      uStack_170 = CONCAT44(local_1b8.SharedReferenceCount.ReferenceController._4_4_,
                            local_1b8.SharedReferenceCount.ReferenceController._0_4_);
      local_178 = local_1b8.Object;
      TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
      ::AddUObject<UDS_VM_Chat_SubTabs>
                (piVar15 + 2,(UDS_VM_Chat_SubTabs *)local_168,(pmf_0bff0d95 *)this);
    }
  }
  return;
}

// UpdateSubTabs_Favorite @ 14bdf7460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Chat_SubTabs::UpdateSubTabs_Favorite(UDS_VM_Chat_SubTabs *this)

{
  TMap<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>_>
  *this_00;
  EDS_ChattingTabType EVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  FDS_ViewModelContext_ChatTab *pFVar6;
  bool bVar7;
  int iVar8;
  UDS_ChattingManager *this_01;
  UDS_LogManager *pUVar9;
  UObject *pUVar10;
  UDS_UserObjectListItem *pUVar11;
  UDS_InputEvent *pUVar12;
  undefined1 *puVar13;
  int *piVar14;
  atomic<int> *paVar15;
  int iVar16;
  undefined1 auStackY_1f8 [32];
  TSharedPtr<FDS_ViewModelContext_ChatTab,1> local_1c8;
  TSharedPtr<FDS_ChatBookmarkData,1> local_1b8;
  int local_1a8;
  int local_1a4;
  undefined4 local_1a0;
  int local_19c;
  UDS_UserObjectListItem *local_198;
  UDS_ChattingManager *local_190;
  undefined4 *local_188 [2];
  FDS_ViewModelContext_ChatTab *local_178;
  undefined8 uStack_170;
  undefined1 local_168 [272];
  UDS_ChattingManager *local_58;
  wchar_t *local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  this_01 = UDS_ChattingManager::GetInst();
  local_190 = this_01;
  if (this_01 == (UDS_ChattingManager *)0x0) {
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 != (UDS_LogManager *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      local_58 = this_01;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_168 + 0x10),
                 "UDS_VM_Chat_SubTabs::UpdateSubTabs_Favorite",0x2b,Yes);
      UDS_LogManager::PrintLog(pUVar9,1,Warning,local_50,0x123,L"chattingManager == nullptr");
      if (local_58 != (UDS_ChattingManager *)0x0) {
        FMemory::Free(local_58);
      }
    }
  }
  else {
    local_1a4 = DS_CommonDataHelper::ChattingMaxFavoriteCount();
    iVar8 = (this_01->ChatStateData).SubTabIndex;
    iVar16 = 0;
    this->SelectedItemIndex = -1;
    local_1a8 = iVar8;
    if (0 < local_1a4) {
      do {
        UDS_ChattingManager::GetBookmarkData(this_01,&local_1b8,iVar16);
        if (local_1b8.Object != (FDS_ChatBookmarkData *)0x0) {
          if ((local_1b8.Object == (FDS_ChatBookmarkData *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          bVar7 = FDS_ChatBookmarkData::IsValidData(local_1b8.Object);
          if (bVar7) {
            pUVar10 = GetTransientPackageAsObject();
            pUVar11 = NewObject<UDS_UserObjectListItem>(pUVar10);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar11 != (UDS_UserObjectListItem *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar11);
            }
            MakeContext<FDS_ViewModelContext_ChatTab>(&local_1c8);
            pFVar6 = local_1c8.Object;
            if ((local_1c8.Object == (FDS_ViewModelContext_ChatTab *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            *(undefined4 *)&pFVar6->_padding_ = 0x124;
            if ((local_1b8.Object == (FDS_ChatBookmarkData *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            EVar1 = (local_1b8.Object)->ChattingTabType;
            if ((pFVar6 == (FDS_ViewModelContext_ChatTab *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar6->ChattingTabType = EVar1;
            if ((local_1b8.Object == (FDS_ChatBookmarkData *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar2 = (local_1b8.Object)->SubTabIndex;
            if ((pFVar6 == (FDS_ViewModelContext_ChatTab *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar6->SubTabIndex = iVar2;
            if ((pFVar6->ChattingTabType == (this_01->ChatStateData).ChattingTabType) &&
               (iVar2 == iVar8)) {
              bVar7 = true;
            }
            else {
              bVar7 = false;
            }
            pFVar6->IsSelected = bVar7;
            if ((this->SelectedItemIndex == -1) && (bVar7 == true)) {
              this->SelectedItemIndex = iVar16;
            }
            pTVar5 = (TReferenceControllerBase<1> *)
                     CONCAT44(local_1c8.SharedReferenceCount.ReferenceController._4_4_,
                              local_1c8.SharedReferenceCount.ReferenceController._0_4_);
            if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
              paVar15 = (atomic<int> *)&DAT_00000008;
            }
            else {
              paVar15 = &pTVar5->SharedReferenceCount;
              LOCK();
              *paVar15 = (atomic<int>)((int)*paVar15 + 1);
              UNLOCK();
            }
            iVar8 = (pUVar11->ViewModelContextArray).ArrayNum;
            piVar14 = &(pUVar11->ViewModelContextArray).ArrayMax;
            if (iVar8 == *piVar14) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&(pUVar11->ViewModelContextArray).AllocatorInstance,piVar14);
            }
            (pUVar11->ViewModelContextArray).ArrayNum = iVar8 + 1;
            pFVar3 = (pUVar11->ViewModelContextArray).AllocatorInstance.Data;
            *(FDS_ViewModelContext_ChatTab **)(pFVar3 + (longlong)iVar8 * 0x10) = pFVar6;
            *(TReferenceControllerBase<1> **)(pFVar3 + (longlong)iVar8 * 0x10 + 8) = pTVar5;
            if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              *paVar15 = (atomic<int>)((int)*paVar15 + 1);
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar5);
            local_198 = pUVar11;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar11 != (UDS_UserObjectListItem *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar11);
            }
            FDS_EntryBindingEventField::Add
                      (&this->EntryBindingEventField,(TObjectPtr<UDS_UserObjectListItem>)&local_198)
            ;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar5);
            this_01 = local_190;
            iVar8 = local_1a8;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1b8.SharedReferenceCount.ReferenceController);
        iVar16 = iVar16 + 1;
      } while (iVar16 < local_1a4);
    }
    pUVar12 = UDS_InputEvent::GetEvent();
    if (pUVar12 != (UDS_InputEvent *)0x0) {
      this_00 = &(pUVar12->OnInputEvent).Subscriptions;
      local_1a0 = 0x15f95;
      local_1c8.Object = (FDS_ViewModelContext_ChatTab *)OnInput_SelectChattingGroup;
      local_1c8.SharedReferenceCount.ReferenceController._4_4_ = uStack_170._4_4_;
      local_1c8.SharedReferenceCount.ReferenceController._0_4_ = 0;
      if (*(int *)&(pUVar12->OnInputEvent).Subscriptions.field_0x8 !=
          *(int *)&(pUVar12->OnInputEvent).Subscriptions.field_0x34) {
        puVar13 = *(undefined1 **)&(pUVar12->OnInputEvent).Subscriptions.field_0x40;
        if (puVar13 == (undefined1 *)0x0) {
          puVar13 = &(pUVar12->OnInputEvent).Subscriptions.field_0x38;
        }
        iVar8 = *(int *)(puVar13 +
                        (ulonglong)
                        (*(int *)&(pUVar12->OnInputEvent).Subscriptions.field_0x48 - 1U & 0x15f95) *
                        4);
        if (iVar8 != -1) {
          do {
            piVar14 = (int *)((longlong)iVar8 * 0x50 + *(longlong *)this_00);
            if (*piVar14 == 0x15f95) {
              if (piVar14 != (int *)0x0) goto LAB_14bdf78f0;
              break;
            }
            iVar8 = piVar14[0x12];
          } while (iVar8 != -1);
        }
      }
      local_188[0] = &local_1a0;
      TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
                (this_00,(uint)&local_19c,(TKeyInitializer<EDS_KeyActionType_const_&> *)0x15f95,
                 (bool *)local_188);
      piVar14 = (int *)((longlong)local_19c * 0x50 + *(longlong *)this_00);
LAB_14bdf78f0:
      TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar14 + 2),this);
      uStack_170 = CONCAT44(local_1c8.SharedReferenceCount.ReferenceController._4_4_,
                            local_1c8.SharedReferenceCount.ReferenceController._0_4_);
      local_178 = local_1c8.Object;
      TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
      ::AddUObject<UDS_VM_Chat_SubTabs>
                (piVar14 + 2,(UDS_VM_Chat_SubTabs *)local_168,(pmf_0bff0d95 *)this);
    }
  }
  return;
}

// UpdateSubTabs_Group @ 14bdf7950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Chat_SubTabs::UpdateSubTabs_Group(UDS_VM_Chat_SubTabs *this)

{
  TMap<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>_>
  *this_00;
  EDS_ChattingTabType EVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  FDS_ViewModelContext_ChatTab *pFVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  UDS_ChattingManager *this_01;
  UDS_LogManager *pUVar9;
  UObject *pUVar10;
  UDS_UserObjectListItem *pUVar11;
  UDS_InputEvent *pUVar12;
  undefined1 *puVar13;
  int iVar14;
  int *piVar15;
  atomic<int> *paVar16;
  int iVar17;
  undefined1 auStackY_208 [32];
  undefined4 local_1cc;
  int local_1c8 [4];
  TSharedPtr<FDS_ViewModelContext_ChatTab,1> local_1b8;
  TSharedPtr<FDS_ChatRoomData,1> local_1a8;
  UDS_UserObjectListItem *local_198;
  UDS_ChattingManager *local_190;
  undefined4 *local_188 [2];
  FDS_ViewModelContext_ChatTab *local_178;
  undefined8 uStack_170;
  undefined1 local_168 [272];
  void *local_58;
  wchar_t *local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_208;
  this_01 = UDS_ChattingManager::GetInst();
  local_190 = this_01;
  if (this_01 == (UDS_ChattingManager *)0x0) {
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 != (UDS_LogManager *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      local_58 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_168 + 0x10),
                 "UDS_VM_Chat_SubTabs::UpdateSubTabs_Group",0x28,Yes);
      UDS_LogManager::PrintLog(pUVar9,1,Warning,local_50,0xf7,L"chattingManager == nullptr");
      if (local_58 != (void *)0x0) {
        FMemory::Free(local_58);
      }
    }
  }
  else {
    EVar1 = (this_01->ChatStateData).ChattingTabType;
    iVar14 = (this_01->ChatStateData).SubTabIndex;
    this->SelectedItemIndex = -1;
    iVar7 = DS_CommonDataHelper::ChattingMaxGroupJoinCount();
    iVar17 = 0;
    if (0 < iVar7) {
      do {
        UDS_ChattingManager::GetChatRoomData(this_01,&local_1a8,Group,iVar17);
        if (local_1a8.Object != (FDS_ChatRoomData *)0x0) {
          if ((local_1a8.Object == (FDS_ChatRoomData *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          bVar6 = FDS_ChatRoomData::IsValidData(local_1a8.Object);
          if (bVar6) {
            pUVar10 = GetTransientPackageAsObject();
            pUVar11 = NewObject<UDS_UserObjectListItem>(pUVar10);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar11 != (UDS_UserObjectListItem *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar11);
            }
            MakeContext<FDS_ViewModelContext_ChatTab>(&local_1b8);
            pFVar5 = local_1b8.Object;
            if ((local_1b8.Object == (FDS_ViewModelContext_ChatTab *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            *(undefined4 *)&pFVar5->_padding_ = 0x124;
            pFVar5->ChattingTabType = this->ChattingTabType;
            pFVar5->SubTabIndex = iVar17;
            if ((EVar1 == Group) && (iVar17 == iVar14)) {
              bVar6 = true;
            }
            else {
              bVar6 = false;
            }
            pFVar5->IsSelected = bVar6;
            if ((this->SelectedItemIndex == -1) && (bVar6 == true)) {
              this->SelectedItemIndex = iVar17;
            }
            pTVar4 = (TReferenceControllerBase<1> *)
                     CONCAT44(local_1b8.SharedReferenceCount.ReferenceController._4_4_,
                              local_1b8.SharedReferenceCount.ReferenceController._0_4_);
            if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
              paVar16 = (atomic<int> *)&DAT_00000008;
            }
            else {
              paVar16 = &pTVar4->SharedReferenceCount;
              LOCK();
              *paVar16 = (atomic<int>)((int)*paVar16 + 1);
              UNLOCK();
            }
            iVar8 = (pUVar11->ViewModelContextArray).ArrayNum;
            piVar15 = &(pUVar11->ViewModelContextArray).ArrayMax;
            if (iVar8 == *piVar15) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&(pUVar11->ViewModelContextArray).AllocatorInstance,piVar15);
            }
            (pUVar11->ViewModelContextArray).ArrayNum = iVar8 + 1;
            pFVar2 = (pUVar11->ViewModelContextArray).AllocatorInstance.Data;
            *(FDS_ViewModelContext_ChatTab **)(pFVar2 + (longlong)iVar8 * 0x10) = pFVar5;
            *(TReferenceControllerBase<1> **)(pFVar2 + (longlong)iVar8 * 0x10 + 8) = pTVar4;
            if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              *paVar16 = (atomic<int>)((int)*paVar16 + 1);
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar4);
            local_198 = pUVar11;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar11 != (UDS_UserObjectListItem *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar11);
            }
            FDS_EntryBindingEventField::Add
                      (&this->EntryBindingEventField,(TObjectPtr<UDS_UserObjectListItem>)&local_198)
            ;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar4);
            this_01 = local_190;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1a8.SharedReferenceCount.ReferenceController);
        iVar17 = iVar17 + 1;
      } while (iVar17 < iVar7);
    }
    pUVar12 = UDS_InputEvent::GetEvent();
    if (pUVar12 != (UDS_InputEvent *)0x0) {
      this_00 = &(pUVar12->OnInputEvent).Subscriptions;
      local_1cc = 0x15f95;
      local_1b8.Object = (FDS_ViewModelContext_ChatTab *)OnInput_SelectChattingGroup;
      local_1b8.SharedReferenceCount.ReferenceController._4_4_ = uStack_170._4_4_;
      local_1b8.SharedReferenceCount.ReferenceController._0_4_ = 0;
      if (*(int *)&(pUVar12->OnInputEvent).Subscriptions.field_0x8 !=
          *(int *)&(pUVar12->OnInputEvent).Subscriptions.field_0x34) {
        puVar13 = *(undefined1 **)&(pUVar12->OnInputEvent).Subscriptions.field_0x40;
        if (puVar13 == (undefined1 *)0x0) {
          puVar13 = &(pUVar12->OnInputEvent).Subscriptions.field_0x38;
        }
        iVar14 = *(int *)(puVar13 +
                         (ulonglong)
                         (*(int *)&(pUVar12->OnInputEvent).Subscriptions.field_0x48 - 1U & 0x15f95)
                         * 4);
        if (iVar14 != -1) {
          do {
            piVar15 = (int *)((longlong)iVar14 * 0x50 + *(longlong *)this_00);
            if (*piVar15 == 0x15f95) {
              if (piVar15 != (int *)0x0) goto LAB_14bdf7d1e;
              break;
            }
            iVar14 = piVar15[0x12];
          } while (iVar14 != -1);
        }
      }
      local_188[0] = &local_1cc;
      TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
                (this_00,(uint)local_1c8,(TKeyInitializer<EDS_KeyActionType_const_&> *)0x15f95,
                 (bool *)local_188);
      piVar15 = (int *)((longlong)local_1c8[0] * 0x50 + *(longlong *)this_00);
LAB_14bdf7d1e:
      TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar15 + 2),this);
      uStack_170 = CONCAT44(local_1b8.SharedReferenceCount.ReferenceController._4_4_,
                            local_1b8.SharedReferenceCount.ReferenceController._0_4_);
      local_178 = local_1b8.Object;
      TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
      ::AddUObject<UDS_VM_Chat_SubTabs>
                (piVar15 + 2,(UDS_VM_Chat_SubTabs *)local_168,(pmf_0bff0d95 *)this);
    }
  }
  return;
}

// UpdateSubTabs_Whisper @ 14bdf7d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Chat_SubTabs::UpdateSubTabs_Whisper(UDS_VM_Chat_SubTabs *this)

{
  TMap<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>_>
  *this_00;
  EDS_ChattingTabType EVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  FDS_ViewModelContext_ChatTab *pFVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  UDS_ChattingManager *this_01;
  UDS_LogManager *pUVar9;
  UObject *pUVar10;
  UDS_UserObjectListItem *pUVar11;
  UDS_InputEvent *pUVar12;
  undefined1 *puVar13;
  int iVar14;
  int *piVar15;
  atomic<int> *paVar16;
  int iVar17;
  undefined1 auStackY_208 [32];
  undefined4 local_1cc;
  int local_1c8 [4];
  TSharedPtr<FDS_ViewModelContext_ChatTab,1> local_1b8;
  TSharedPtr<FDS_ChatRoomData,1> local_1a8;
  UDS_UserObjectListItem *local_198;
  UDS_ChattingManager *local_190;
  undefined4 *local_188 [2];
  FDS_ViewModelContext_ChatTab *local_178;
  undefined8 uStack_170;
  undefined1 local_168 [272];
  void *local_58;
  wchar_t *local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_208;
  this_01 = UDS_ChattingManager::GetInst();
  local_190 = this_01;
  if (this_01 == (UDS_ChattingManager *)0x0) {
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 != (UDS_LogManager *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      local_58 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_168 + 0x10),
                 "UDS_VM_Chat_SubTabs::UpdateSubTabs_Whisper",0x2a,Yes);
      UDS_LogManager::PrintLog(pUVar9,1,Warning,local_50,0xca,L"chattingManager == nullptr");
      if (local_58 != (void *)0x0) {
        FMemory::Free(local_58);
      }
    }
  }
  else {
    EVar1 = (this_01->ChatStateData).ChattingTabType;
    iVar14 = (this_01->ChatStateData).SubTabIndex;
    this->SelectedItemIndex = -1;
    iVar7 = DS_CommonDataHelper::ChattingMaxWhisperListSaveCount();
    iVar17 = 0;
    if (0 < iVar7) {
      do {
        UDS_ChattingManager::GetChatRoomData(this_01,&local_1a8,Whisper,iVar17);
        if (local_1a8.Object != (FDS_ChatRoomData *)0x0) {
          if ((local_1a8.Object == (FDS_ChatRoomData *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          bVar6 = FDS_ChatRoomData::IsValidData(local_1a8.Object);
          if (bVar6) {
            pUVar10 = GetTransientPackageAsObject();
            pUVar11 = NewObject<UDS_UserObjectListItem>(pUVar10);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar11 != (UDS_UserObjectListItem *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar11);
            }
            MakeContext<FDS_ViewModelContext_ChatTab>(&local_1b8);
            pFVar5 = local_1b8.Object;
            if ((local_1b8.Object == (FDS_ViewModelContext_ChatTab *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            *(undefined4 *)&pFVar5->_padding_ = 0x124;
            pFVar5->ChattingTabType = this->ChattingTabType;
            pFVar5->SubTabIndex = iVar17;
            if ((EVar1 == Whisper) && (iVar17 == iVar14)) {
              bVar6 = true;
            }
            else {
              bVar6 = false;
            }
            pFVar5->IsSelected = bVar6;
            if ((this->SelectedItemIndex == -1) && (bVar6 == true)) {
              this->SelectedItemIndex = iVar17;
            }
            pTVar4 = (TReferenceControllerBase<1> *)
                     CONCAT44(local_1b8.SharedReferenceCount.ReferenceController._4_4_,
                              local_1b8.SharedReferenceCount.ReferenceController._0_4_);
            if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
              paVar16 = (atomic<int> *)&DAT_00000008;
            }
            else {
              paVar16 = &pTVar4->SharedReferenceCount;
              LOCK();
              *paVar16 = (atomic<int>)((int)*paVar16 + 1);
              UNLOCK();
            }
            iVar8 = (pUVar11->ViewModelContextArray).ArrayNum;
            piVar15 = &(pUVar11->ViewModelContextArray).ArrayMax;
            if (iVar8 == *piVar15) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&(pUVar11->ViewModelContextArray).AllocatorInstance,piVar15);
            }
            (pUVar11->ViewModelContextArray).ArrayNum = iVar8 + 1;
            pFVar2 = (pUVar11->ViewModelContextArray).AllocatorInstance.Data;
            *(FDS_ViewModelContext_ChatTab **)(pFVar2 + (longlong)iVar8 * 0x10) = pFVar5;
            *(TReferenceControllerBase<1> **)(pFVar2 + (longlong)iVar8 * 0x10 + 8) = pTVar4;
            if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              *paVar16 = (atomic<int>)((int)*paVar16 + 1);
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar4);
            local_198 = pUVar11;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar11 != (UDS_UserObjectListItem *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar11);
            }
            FDS_EntryBindingEventField::Add
                      (&this->EntryBindingEventField,(TObjectPtr<UDS_UserObjectListItem>)&local_198)
            ;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar4);
            this_01 = local_190;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1a8.SharedReferenceCount.ReferenceController);
        iVar17 = iVar17 + 1;
      } while (iVar17 < iVar7);
    }
    pUVar12 = UDS_InputEvent::GetEvent();
    if (pUVar12 != (UDS_InputEvent *)0x0) {
      this_00 = &(pUVar12->OnInputEvent).Subscriptions;
      local_1cc = 0x15f95;
      local_1b8.Object = (FDS_ViewModelContext_ChatTab *)OnInput_SelectChattingGroup;
      local_1b8.SharedReferenceCount.ReferenceController._4_4_ = uStack_170._4_4_;
      local_1b8.SharedReferenceCount.ReferenceController._0_4_ = 0;
      if (*(int *)&(pUVar12->OnInputEvent).Subscriptions.field_0x8 !=
          *(int *)&(pUVar12->OnInputEvent).Subscriptions.field_0x34) {
        puVar13 = *(undefined1 **)&(pUVar12->OnInputEvent).Subscriptions.field_0x40;
        if (puVar13 == (undefined1 *)0x0) {
          puVar13 = &(pUVar12->OnInputEvent).Subscriptions.field_0x38;
        }
        iVar14 = *(int *)(puVar13 +
                         (ulonglong)
                         (*(int *)&(pUVar12->OnInputEvent).Subscriptions.field_0x48 - 1U & 0x15f95)
                         * 4);
        if (iVar14 != -1) {
          do {
            piVar15 = (int *)((longlong)iVar14 * 0x50 + *(longlong *)this_00);
            if (*piVar15 == 0x15f95) {
              if (piVar15 != (int *)0x0) goto LAB_14bdf814e;
              break;
            }
            iVar14 = piVar15[0x12];
          } while (iVar14 != -1);
        }
      }
      local_188[0] = &local_1cc;
      TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
                (this_00,(uint)local_1c8,(TKeyInitializer<EDS_KeyActionType_const_&> *)0x15f95,
                 (bool *)local_188);
      piVar15 = (int *)((longlong)local_1c8[0] * 0x50 + *(longlong *)this_00);
LAB_14bdf814e:
      TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar15 + 2),this);
      uStack_170 = CONCAT44(local_1b8.SharedReferenceCount.ReferenceController._4_4_,
                            local_1b8.SharedReferenceCount.ReferenceController._0_4_);
      local_178 = local_1b8.Object;
      TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
      ::AddUObject<UDS_VM_Chat_SubTabs>
                (piVar15 + 2,(UDS_VM_Chat_SubTabs *)local_168,(pmf_0bff0d95 *)this);
    }
  }
  return;
}

