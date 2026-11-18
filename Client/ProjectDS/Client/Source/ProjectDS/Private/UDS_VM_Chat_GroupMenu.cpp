// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// SetFocusLostEvent_WrapperImpl @ 14b610380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Chat_GroupMenu::SetFocusLostEvent_WrapperImpl(void *param_1,void *param_2)

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
                (&TStack_138,"UDS_VM_Chat_GroupMenu::OnClose",0x1e,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,TStack_138.Ptr,0x2e,L"windowManager == nullptr");
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

// StaticClass @ 14b610390

UClass * __cdecl UDS_VM_Chat_GroupMenu::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_GroupMenu.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_GroupMenu",
               &Z_Registration_Info_UClass_UDS_VM_Chat_GroupMenu.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_GroupMenu,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Chat_GroupMenu>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_GroupMenu>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_GroupMenu.InnerSingleton;
}

// UDS_VM_Chat_GroupMenu @ 14b6155c0

UDS_VM_Chat_GroupMenu * __thiscall
UDS_VM_Chat_GroupMenu::UDS_VM_Chat_GroupMenu(UDS_VM_Chat_GroupMenu *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->SubTabIndex = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_GroupMenu__6B_;
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

// UDS_VM_Chat_GroupMenu @ 14b615620

UDS_VM_Chat_GroupMenu * __thiscall
UDS_VM_Chat_GroupMenu::UDS_VM_Chat_GroupMenu
          (UDS_VM_Chat_GroupMenu *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->SubTabIndex = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_GroupMenu__6B_;
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

// ~UDS_VM_Chat_GroupMenu @ 14b617270

void __thiscall UDS_VM_Chat_GroupMenu::~UDS_VM_Chat_GroupMenu(UDS_VM_Chat_GroupMenu *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_GroupMenu__6B_;
  pFVar1 = (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6190f0

IClassDescriptor * __thiscall
UDS_VM_Chat_GroupMenu::GetFieldNotificationDescriptor(UDS_VM_Chat_GroupMenu *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Chat_GroupMenu::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b619980

UClass * __cdecl UDS_VM_Chat_GroupMenu::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_GroupMenu.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_GroupMenu",
               &Z_Registration_Info_UClass_UDS_VM_Chat_GroupMenu.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_GroupMenu,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Chat_GroupMenu>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_GroupMenu>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_GroupMenu.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Chat_GroupMenu @ 14b61a210

void __cdecl UDS_VM_Chat_GroupMenu::StaticRegisterNativesUDS_VM_Chat_GroupMenu(void)

{
  return;
}

// OnClose @ 14bd76190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Chat_GroupMenu::OnClose(UDS_VM_Chat_GroupMenu *this)

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
                (&local_138,"UDS_VM_Chat_GroupMenu::OnClose",0x1e,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x2e,L"windowManager == nullptr");
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

// OnFocusLostEvent @ 14bd78a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_GroupMenu::OnFocusLostEvent(UDS_VM_Chat_GroupMenu *this,FDS_FocusEventField *param_1)

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
                (&TStack_138,"UDS_VM_Chat_GroupMenu::OnClose",0x1e,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,TStack_138.Ptr,0x2e,L"windowManager == nullptr");
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

// OnSetViewModel @ 14bd81290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_GroupMenu::OnSetViewModel
          (UDS_VM_Chat_GroupMenu *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_1a8 [32];
  TSharedPtr<FDS_ViewModelContext_ChatTab,1> local_178;
  FName local_168;
  int local_160;
  TSharedPtr<FDS_ViewModelContext,1> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
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
  SafeCast<FDS_ViewModelContext_ChatTab>(&local_178,&local_158);
  if (local_178.Object == (FDS_ViewModelContext_ChatTab *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_Chat_GroupMenu::OnSetViewModel",0x25,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_148.Ptr,0x14,L"chatTabContext.IsValid() == false");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    (this->SetFocusEvent).bIsActivate = true;
    local_160 = FFieldNotificationClassDescriptor::SetFocusEvent.BitNumber;
    local_168 = FFieldNotificationClassDescriptor::SetFocusEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
    if (local_178.Object == (FDS_ViewModelContext_ChatTab *)0x0) {
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
    this->ChattingTabType = (local_178.Object)->ChattingTabType;
    this->SubTabIndex = (local_178.Object)->SubTabIndex;
    UpdateGroupMenus(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UpdateGroupMenus @ 14bd91550

void __thiscall UDS_VM_Chat_GroupMenu::UpdateGroupMenus(UDS_VM_Chat_GroupMenu *this)

{
  FDS_EntryBindingEventField *this_00;
  FDS_ChatConversation *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FDS_ChatUserInfo *pFVar3;
  code *pcVar4;
  FDS_ViewModelContext_ChatGroup *pFVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  UDS_ChattingManager *this_01;
  UObject *pUVar9;
  UDS_UserObjectListItem *pUVar10;
  FString *pFVar11;
  FWeakObjectPtr local_res8;
  UDS_UserObjectListItem *local_res10;
  UDS_UserObjectListItem *local_res18;
  UDS_UserObjectListItem *local_res20;
  TSharedPtr<FDS_ChatRoomData,1> local_f8;
  UDS_UserObjectListItem *local_e8;
  TReferenceControllerBase<1> *local_e0;
  FName local_d8;
  int local_d0;
  TSharedPtr<FDS_ViewModelContext_ChatGroup,1> local_c8;
  TSharedPtr<FDS_ViewModelContext_ChatGroup,1> local_b8;
  TSharedPtr<FDS_ViewModelContext_ChatGroup,1> local_a8;
  TSharedPtr<FDS_ViewModelContext_ChatGroup,1> local_98;
  TSharedPtr<FDS_ViewModelContext,1> local_88;
  TSharedPtr<FDS_ViewModelContext,1> local_78;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  
  this_00 = &this->EntryBindingEventField;
  FDS_EntryBindingEventField::Reset(this_00);
  this_01 = UDS_ChattingManager::GetInst();
  if (this_01 == (UDS_ChattingManager *)0x0) goto LAB_14bd91a99;
  UDS_ChattingManager::GetChatRoomData(this_01,&local_f8,Group,this->SubTabIndex);
  if (local_f8.Object != (FDS_ChatRoomData *)0x0) {
    if ((local_f8.Object == (FDS_ChatRoomData *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar1 = ((local_f8.Object)->ChatConversation).Object;
    local_e0 = ((local_f8.Object)->ChatConversation).SharedReferenceCount.ReferenceController;
    if (local_e0 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_e0->SharedReferenceCount = (atomic<int>)((int)local_e0->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar1 != (FDS_ChatConversation *)0x0) {
      UDS_PlayerData::GetMainPlayerData();
      if ((local_f8.Object == (FDS_ChatRoomData *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar2 = ((local_f8.Object)->GroupOwner).SharedReferenceCount.ReferenceController;
      pFVar3 = ((local_f8.Object)->GroupOwner).Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar6 = FWeakObjectPtr::IsValid(&local_res8);
      if (((bVar6) && (pFVar3 != (FDS_ChatUserInfo *)0x0)) &&
         (pUVar9 = FWeakObjectPtr::Get(&local_res8),
         *(longlong *)&pUVar9[6].field_0x8 == pFVar3->PlayerUID)) {
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      pUVar9 = GetTransientPackageAsObject();
      pUVar10 = NewObject<UDS_UserObjectListItem>(pUVar9);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar10 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar10);
      }
      MakeContext<FDS_ViewModelContext_ChatGroup>(&local_c8);
      pFVar5 = local_c8.Object;
      if ((local_c8.Object == (FDS_ViewModelContext_ChatGroup *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar11 = &pFVar1->GroupID;
      *(undefined4 *)&pFVar5->_padding_ = 0x127;
      ::FString::operator=(&pFVar5->GroupID,pFVar11);
      local_88.Object = (FDS_ViewModelContext *)local_c8.Object;
      local_88.SharedReferenceCount.ReferenceController =
           local_c8.SharedReferenceCount.ReferenceController;
      pFVar5->ChatGroupMenu = Exit;
      if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_UserObjectListItem::AddContext(pUVar10,&local_88);
      local_res10 = pUVar10;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar10 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar10);
      }
      FDS_EntryBindingEventField::Add(this_00,(TObjectPtr<UDS_UserObjectListItem>)&local_res10);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c8.SharedReferenceCount.ReferenceController);
      pUVar9 = GetTransientPackageAsObject();
      pUVar10 = NewObject<UDS_UserObjectListItem>(pUVar9);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar10 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar10);
      }
      MakeContext<FDS_ViewModelContext_ChatGroup>(&local_b8);
      pFVar5 = local_b8.Object;
      if ((local_b8.Object == (FDS_ViewModelContext_ChatGroup *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined4 *)&pFVar5->_padding_ = 0x127;
      ::FString::operator=(&pFVar5->GroupID,pFVar11);
      local_78.Object = (FDS_ViewModelContext *)local_b8.Object;
      local_78.SharedReferenceCount.ReferenceController =
           local_b8.SharedReferenceCount.ReferenceController;
      pFVar5->ChatGroupMenu = Members;
      if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_UserObjectListItem::AddContext(pUVar10,&local_78);
      local_res18 = pUVar10;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar10 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar10);
      }
      FDS_EntryBindingEventField::Add(this_00,(TObjectPtr<UDS_UserObjectListItem>)&local_res18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b8.SharedReferenceCount.ReferenceController);
      if (bVar6) {
LAB_14bd9189e:
        pUVar9 = GetTransientPackageAsObject();
        pUVar10 = NewObject<UDS_UserObjectListItem>(pUVar9);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar10 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar10);
        }
        MakeContext<FDS_ViewModelContext_ChatGroup>(&local_a8);
        pFVar5 = local_a8.Object;
        if ((local_a8.Object == (FDS_ViewModelContext_ChatGroup *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined4 *)&pFVar5->_padding_ = 0x127;
        ::FString::operator=(&pFVar5->GroupID,pFVar11);
        local_68.Object = (FDS_ViewModelContext *)local_a8.Object;
        local_68.SharedReferenceCount.ReferenceController =
             local_a8.SharedReferenceCount.ReferenceController;
        pFVar5->ChatGroupMenu = Invite;
        if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        UDS_UserObjectListItem::AddContext(pUVar10,&local_68);
        local_res20 = pUVar10;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar10 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar10);
        }
        FDS_EntryBindingEventField::Add(this_00,(TObjectPtr<UDS_UserObjectListItem>)&local_res20);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a8.SharedReferenceCount.ReferenceController);
        if (bVar6) {
          pUVar9 = GetTransientPackageAsObject();
          pUVar10 = NewObject<UDS_UserObjectListItem>(pUVar9);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar10 != (UDS_UserObjectListItem *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar10);
          }
          MakeContext<FDS_ViewModelContext_ChatGroup>(&local_98);
          pFVar5 = local_98.Object;
          if ((local_98.Object == (FDS_ViewModelContext_ChatGroup *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *(undefined4 *)&pFVar5->_padding_ = 0x127;
          ::FString::operator=(&pFVar5->GroupID,pFVar11);
          local_58.Object = (FDS_ViewModelContext *)local_98.Object;
          local_58.SharedReferenceCount.ReferenceController =
               local_98.SharedReferenceCount.ReferenceController;
          pFVar5->ChatGroupMenu = Setting;
          if (local_98.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          UDS_UserObjectListItem::AddContext(pUVar10,&local_58);
          local_e8 = pUVar10;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar10 != (UDS_UserObjectListItem *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar10);
          }
          FDS_EntryBindingEventField::Add(this_00,(TObjectPtr<UDS_UserObjectListItem>)&local_e8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_98.SharedReferenceCount.ReferenceController);
        }
      }
      else {
        if ((local_f8.Object == (FDS_ChatRoomData *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((local_f8.Object)->bIsInviteGranted == true) goto LAB_14bd9189e;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.SharedReferenceCount.ReferenceController);
LAB_14bd91a99:
  local_d0 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
  local_d8 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_d8);
  iVar8 = FDS_EntryBindingEventField::Num(this_00);
  if (iVar8 == 0) {
    OnClose(this);
  }
  return;
}

