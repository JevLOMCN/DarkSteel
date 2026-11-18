// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 39

// SetClickChatSubTab_WrapperImpl @ 14b61c9a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Chat_SubTabSlot::SetClickChatSubTab_WrapperImpl(void *param_1,void *param_2)

{
  UDS_ChattingManager *this;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this = UDS_ChattingManager::GetInst();
  if (this == (UDS_ChattingManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_Chat_SubTabSlot::OnClickChatSubTab",0x29,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,TStack_138.Ptr,0x42,L"chattingManager == nullptr");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  else {
    UDS_ChattingManager::SetChattingTabType
              (this,*(EDS_ChattingTabType *)((longlong)param_1 + 0x12f),
               *(int *)((longlong)param_1 + 0x130));
  }
  return;
}

// SetChatSubTabName_WrapperImpl @ 14b61c9b0

void __cdecl UDS_VM_Chat_SubTabSlot::SetChatSubTabName_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::ChatSubTabName.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::ChatSubTabName.FieldName;
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0xc0),param_2);
  FStack_18 = FVar1;
  iStack_10 = iVar2;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetChatSubTabIconID_WrapperImpl @ 14b61c9c0

void __cdecl UDS_VM_Chat_SubTabSlot::SetChatSubTabIconID_WrapperImpl(void *param_1,void *param_2)

{
  SetChatSubTabIconID(param_1,*(int *)param_2);
  return;
}

// SetChatSubTabColor_WrapperImpl @ 14b61ca10

void __cdecl UDS_VM_Chat_SubTabSlot::SetChatSubTabColor_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FName FStack_18;
  int iStack_10;
  
  if ((((*(float *)param_2 != *(float *)((longlong)param_1 + 0x114)) ||
       (*(float *)((longlong)param_2 + 4) != *(float *)((longlong)param_1 + 0x118))) ||
      (*(float *)((longlong)param_2 + 8) != *(float *)((longlong)param_1 + 0x11c))) ||
     (*(float *)((longlong)param_2 + 0xc) != *(float *)((longlong)param_1 + 0x120))) {
    uVar1 = *(undefined4 *)((longlong)param_2 + 4);
    uVar2 = *(undefined4 *)((longlong)param_2 + 8);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
    iStack_10 = FFieldNotificationClassDescriptor::ChatSubTabColor.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::ChatSubTabColor.FieldName;
    *(undefined4 *)((longlong)param_1 + 0x114) = *(undefined4 *)param_2;
    *(undefined4 *)((longlong)param_1 + 0x118) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x11c) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x120) = uVar3;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetChatBookmarkVisibility_WrapperImpl @ 14b61ca20

void __cdecl
UDS_VM_Chat_SubTabSlot::SetChatBookmarkVisibility_WrapperImpl(void *param_1,void *param_2)

{
  SetChatBookmarkVisibility(param_1,*(ESlateVisibility *)param_2);
  return;
}

// SetUnreadCount_WrapperImpl @ 14b61ca30

void __cdecl UDS_VM_Chat_SubTabSlot::SetUnreadCount_WrapperImpl(void *param_1,void *param_2)

{
  SetUnreadCount(param_1,*(int *)param_2);
  return;
}

// SetUnreadCountVisibility_WrapperImpl @ 14b61ca40

void __cdecl
UDS_VM_Chat_SubTabSlot::SetUnreadCountVisibility_WrapperImpl(void *param_1,void *param_2)

{
  SetUnreadCountVisibility(param_1,*(ESlateVisibility *)param_2);
  return;
}

// SetbIsSelectedSubTab_WrapperImpl @ 14b61ca50

void __cdecl UDS_VM_Chat_SubTabSlot::SetbIsSelectedSubTab_WrapperImpl(void *param_1,void *param_2)

{
  SetSelectedSubTab(param_1,*(bool *)param_2);
  return;
}

// SetbIsBookmark_WrapperImpl @ 14b61ca60

void __cdecl UDS_VM_Chat_SubTabSlot::SetbIsBookmark_WrapperImpl(void *param_1,void *param_2)

{
  SetBookmark(param_1,*(bool *)param_2);
  return;
}

// StaticClass @ 14b61ca70

UClass * __cdecl UDS_VM_Chat_SubTabSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_SubTabSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_SubTabSlot",
               &Z_Registration_Info_UClass_UDS_VM_Chat_SubTabSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_SubTabSlot,0x138,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Chat_SubTabSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_SubTabSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_SubTabSlot.InnerSingleton;
}

// UDS_VM_Chat_SubTabSlot @ 14b61fab0

UDS_VM_Chat_SubTabSlot * __thiscall
UDS_VM_Chat_SubTabSlot::UDS_VM_Chat_SubTabSlot(UDS_VM_Chat_SubTabSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->ChatBookmarkVisibility = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_SubTabSlot__6B_;
  *(undefined8 *)&(this->ClickChatSubTab).Delegate = 0;
  *(undefined8 *)&(this->ClickChatSubTab).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickChatSubTab).Delegate.field_0x10 = 0;
  (this->ChatSubTabName).StringTableType = None;
  (this->ChatSubTabName).StringTableID = 0;
  (this->ChatSubTabName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ChatSubTabName).StringEnumTableNameID.Number = 0;
  (this->ChatSubTabName).DateTime.Ticks = 0;
  (this->ChatSubTabName).TimeSpan.Ticks = 0;
  (this->ChatSubTabName).TimeExpressionType = None;
  (this->ChatSubTabName).IsExpression = false;
  (this->ChatSubTabName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChatSubTabName).UniqueString.Data.ArrayNum = 0;
  (this->ChatSubTabName).UniqueString.Data.ArrayMax = 0;
  (this->ChatSubTabName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChatSubTabName).FormatArgs.ArrayNum = 0;
  (this->ChatSubTabName).FormatArgs.ArrayMax = 0;
  this->ChattingTabType = None;
  (this->ClickChatSubTab)._padding_ = '\0';
  (this->ClickChatSubTab).bIsCustomSelected = false;
  (this->ClickChatSubTab).bIsLacked = false;
  (this->ClickChatSubTab).bIsCustomDisabled = false;
  this->SubTabIndex = -1;
  return this;
}

// UDS_VM_Chat_SubTabSlot @ 14b61fb70

UDS_VM_Chat_SubTabSlot * __thiscall
UDS_VM_Chat_SubTabSlot::UDS_VM_Chat_SubTabSlot
          (UDS_VM_Chat_SubTabSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->ChatBookmarkVisibility = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_SubTabSlot__6B_;
  *(undefined8 *)&(this->ClickChatSubTab).Delegate = 0;
  *(undefined8 *)&(this->ClickChatSubTab).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickChatSubTab).Delegate.field_0x10 = 0;
  (this->ChatSubTabName).StringTableType = None;
  (this->ChatSubTabName).StringTableID = 0;
  (this->ChatSubTabName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ChatSubTabName).StringEnumTableNameID.Number = 0;
  (this->ChatSubTabName).DateTime.Ticks = 0;
  (this->ChatSubTabName).TimeSpan.Ticks = 0;
  (this->ChatSubTabName).TimeExpressionType = None;
  (this->ChatSubTabName).IsExpression = false;
  (this->ChatSubTabName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChatSubTabName).UniqueString.Data.ArrayNum = 0;
  (this->ChatSubTabName).UniqueString.Data.ArrayMax = 0;
  (this->ChatSubTabName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChatSubTabName).FormatArgs.ArrayNum = 0;
  (this->ChatSubTabName).FormatArgs.ArrayMax = 0;
  this->ChattingTabType = None;
  (this->ClickChatSubTab)._padding_ = '\0';
  (this->ClickChatSubTab).bIsCustomSelected = false;
  (this->ClickChatSubTab).bIsLacked = false;
  (this->ClickChatSubTab).bIsCustomDisabled = false;
  this->SubTabIndex = -1;
  return this;
}

// ~UDS_VM_Chat_SubTabSlot @ 14b621390

void __thiscall UDS_VM_Chat_SubTabSlot::~UDS_VM_Chat_SubTabSlot(UDS_VM_Chat_SubTabSlot *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_SubTabSlot__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ChatSubTabName).FormatArgs.AllocatorInstance.Data,
             (this->ChatSubTabName).FormatArgs.ArrayNum);
  pFVar1 = (this->ChatSubTabName).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ChatSubTabName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickChatSubTab).Delegate);
  pvVar2 = *(void **)&(this->ClickChatSubTab).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickChatSubTab).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b623730

IClassDescriptor * __thiscall
UDS_VM_Chat_SubTabSlot::GetFieldNotificationDescriptor(UDS_VM_Chat_SubTabSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Chat_SubTabSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b623e30

UClass * __cdecl UDS_VM_Chat_SubTabSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_SubTabSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_SubTabSlot",
               &Z_Registration_Info_UClass_UDS_VM_Chat_SubTabSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_SubTabSlot,0x138,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Chat_SubTabSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_SubTabSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_SubTabSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Chat_SubTabSlot @ 14b624ac0

void __cdecl UDS_VM_Chat_SubTabSlot::StaticRegisterNativesUDS_VM_Chat_SubTabSlot(void)

{
  return;
}

// BindModel @ 14bdb0820

void __thiscall UDS_VM_Chat_SubTabSlot::BindModel(UDS_VM_Chat_SubTabSlot *this)

{
  UDS_ChatEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_ChatEvent::GetEvent();
  if (pUVar1 != (UDS_ChatEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectedSubTabIndex,
               this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_SubTabSlot>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnSelectedSubTabIndex,(UDS_VM_Chat_SubTabSlot *)&stack0x00000010,
               (pmf_cbc1a551 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnClickedSubTabIndex,
               this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_SubTabSlot>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnClickedSubTabIndex,(UDS_VM_Chat_SubTabSlot *)&stack0x00000010,
               (pmf_cbc1a551 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangeChattingTabType,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_ChattingTabType,int),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_Chat_SubTabSlot>
              (&pUVar1->OnChangeChattingTabType,(UDS_VM_Chat_SubTabSlot *)&stack0x00000010,
               (pmf_239ff567 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnUpdateMarkMessageAsRead,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_SubTabSlot>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnUpdateMarkMessageAsRead,(UDS_VM_Chat_SubTabSlot *)&stack0x00000010,
               (pmf_3a214d4f *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangedChatOption,
               this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_SubTabSlot>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangedChatOption,(UDS_VM_Chat_SubTabSlot *)&stack0x00000010,
               (pmf_3a214d4f *)this);
  }
  return;
}

// OnChangeChattingTabType @ 14bdca3d0

void __thiscall
UDS_VM_Chat_SubTabSlot::OnChangeChattingTabType
          (UDS_VM_Chat_SubTabSlot *this,EDS_ChattingTabType param_1,int param_2)

{
  bool bVar1;
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bIsSelectedSubTab.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsSelectedSubTab.FieldName;
  if ((this->ChattingTabType == param_1) && (this->SubTabIndex == param_2)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (this->bIsSelectedSubTab != bVar1) {
    this->bIsSelectedSubTab = bVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnChangedChatOption @ 14bdca670

void __thiscall UDS_VM_Chat_SubTabSlot::OnChangedChatOption(UDS_VM_Chat_SubTabSlot *this)

{
  EDS_ChattingTabType EVar1;
  FName FVar2;
  int iVar3;
  FName FStack_18;
  int iStack_10;
  
  iVar3 = FFieldNotificationClassDescriptor::ChatBookmarkVisibility.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::ChatBookmarkVisibility.FieldName;
  if (this->ChatBookmarkVisibility != SelfHitTestInvisible) {
    this->ChatBookmarkVisibility = SelfHitTestInvisible;
    iStack_10 = iVar3;
    FStack_18 = FVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_18);
  }
  EVar1 = this->ChattingTabType;
  if (EVar1 == Custom) {
    UpdateSubTab_Custom(this);
  }
  else {
    if (EVar1 == Whisper) {
      UpdateSubTab_Whisper(this);
      UpdateUnreadCount(this);
      return;
    }
    if (EVar1 == Group) {
      UpdateSubTab_Group(this);
      UpdateUnreadCount(this);
      return;
    }
  }
  UpdateUnreadCount(this);
  return;
}

// OnClickChatSubTab @ 14bdcbba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_SubTabSlot::OnClickChatSubTab
          (UDS_VM_Chat_SubTabSlot *this,FDS_ButtonEventField *param_1)

{
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Chat_SubTabSlot::OnClickChatSubTab",0x29,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x42,L"chattingManager == nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    UDS_ChattingManager::SetChattingTabType(this_00,this->ChattingTabType,this->SubTabIndex);
  }
  return;
}

// OnClickedSubTabIndex @ 14bdcd7f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_SubTabSlot::OnClickedSubTabIndex(UDS_VM_Chat_SubTabSlot *this,int param_1)

{
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (this->SubTabIndex == param_1) {
    this_00 = UDS_ChattingManager::GetInst();
    if (this_00 == (UDS_ChattingManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      if (pUVar1 != (UDS_LogManager *)0x0) {
        pUVar1 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_VM_Chat_SubTabSlot::OnClickedSubTabIndex",0x2c,Yes);
        UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x138,L"chattingManager == nullptr")
        ;
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      UDS_ChattingManager::SetChattingTabType(this_00,this->ChattingTabType,this->SubTabIndex);
    }
  }
  return;
}

// OnSelectedSubTabIndex @ 14bdd1e60

void __thiscall
UDS_VM_Chat_SubTabSlot::OnSelectedSubTabIndex(UDS_VM_Chat_SubTabSlot *this,int param_1)

{
  bool bVar1;
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bIsSelectedSubTab.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsSelectedSubTab.FieldName;
  bVar1 = this->SubTabIndex == param_1;
  if (this->bIsSelectedSubTab != bVar1) {
    this->bIsSelectedSubTab = bVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnSetViewModel @ 14bdd60b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_SubTabSlot::OnSetViewModel
          (UDS_VM_Chat_SubTabSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  undefined1 auStackY_198 [32];
  TSharedPtr<FDS_ViewModelContext_ChatTab,1> local_168;
  FName local_158;
  int local_150;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
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
  SafeCast<FDS_ViewModelContext_ChatTab>(&local_168,&local_148);
  if (local_168.Object == (FDS_ViewModelContext_ChatTab *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Chat_SubTabSlot::OnSetViewModel",0x26,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_138.Ptr,0x15,L"chatTabContext.IsValid() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if (local_168.Object == (FDS_ViewModelContext_ChatTab *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this->ChattingTabType = (local_168.Object)->ChattingTabType;
    this->SubTabIndex = (local_168.Object)->SubTabIndex;
    FVar3 = FFieldNotificationClassDescriptor::bIsSelectedSubTab.FieldName;
    if (this->bIsSelectedSubTab != (local_168.Object)->IsSelected) {
      local_150 = FFieldNotificationClassDescriptor::bIsSelectedSubTab.BitNumber;
      this->bIsSelectedSubTab = (local_168.Object)->IsSelected;
      local_158 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
    }
    UpdateSubTab(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_168.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdateMarkMessageAsRead @ 14bddfec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Chat_SubTabSlot::OnUpdateMarkMessageAsRead(UDS_VM_Chat_SubTabSlot *this)

{
  FName FVar1;
  int iVar2;
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_178 [32];
  FName FStack_148;
  int iStack_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_Chat_SubTabSlot::UpdateUnreadCount",0x29,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,TStack_138.Ptr,0x118,L"chattingManager == nullptr");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  else {
    iVar2 = UDS_ChattingManager::GetUnreadCount(this_00,this->ChattingTabType,this->SubTabIndex);
    iStack_140 = FFieldNotificationClassDescriptor::UnreadCountVisibility.BitNumber;
    FStack_148 = FFieldNotificationClassDescriptor::UnreadCountVisibility.FieldName;
    FVar1 = FFieldNotificationClassDescriptor::UnreadCount.FieldName;
    if (iVar2 < 1) {
      if (this->UnreadCountVisibility == Collapsed) {
        return;
      }
      this->UnreadCountVisibility = Collapsed;
    }
    else {
      if (this->UnreadCount != iVar2) {
        iStack_140 = FFieldNotificationClassDescriptor::UnreadCount.BitNumber;
        this->UnreadCount = iVar2;
        FStack_148 = FVar1;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_148);
      }
      iStack_140 = FFieldNotificationClassDescriptor::UnreadCountVisibility.BitNumber;
      FStack_148 = FFieldNotificationClassDescriptor::UnreadCountVisibility.FieldName;
      if (this->UnreadCountVisibility == SelfHitTestInvisible) {
        return;
      }
      this->UnreadCountVisibility = SelfHitTestInvisible;
    }
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_148);
  }
  return;
}

// SetBookmark @ 14bde36d0

void __thiscall UDS_VM_Chat_SubTabSlot::SetBookmark(UDS_VM_Chat_SubTabSlot *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bIsBookmark.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsBookmark.FieldName;
  if (this->bIsBookmark != param_1) {
    this->bIsBookmark = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetChatBookmarkVisibility @ 14bde3970

void __thiscall
UDS_VM_Chat_SubTabSlot::SetChatBookmarkVisibility
          (UDS_VM_Chat_SubTabSlot *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::ChatBookmarkVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ChatBookmarkVisibility.FieldName;
  if (this->ChatBookmarkVisibility != param_1) {
    this->ChatBookmarkVisibility = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetChatSubTabColor @ 14bde3b60

void __thiscall
UDS_VM_Chat_SubTabSlot::SetChatSubTabColor(UDS_VM_Chat_SubTabSlot *this,FLinearColor *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FName local_18;
  int local_10;
  
  if (((((param_1->field0_0x0)._s_0.R != (this->ChatSubTabColor).field0_0x0._s_0.R) ||
       ((param_1->field0_0x0)._s_0.G != (this->ChatSubTabColor).field0_0x0._s_0.G)) ||
      ((param_1->field0_0x0)._s_0.B != (this->ChatSubTabColor).field0_0x0._s_0.B)) ||
     ((param_1->field0_0x0)._s_0.A != (this->ChatSubTabColor).field0_0x0._s_0.A)) {
    fVar1 = (param_1->field0_0x0)._s_0.G;
    fVar2 = (param_1->field0_0x0)._s_0.B;
    fVar3 = (param_1->field0_0x0)._s_0.A;
    local_10 = FFieldNotificationClassDescriptor::ChatSubTabColor.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::ChatSubTabColor.FieldName;
    (this->ChatSubTabColor).field0_0x0._s_0.R = (param_1->field0_0x0)._s_0.R;
    (this->ChatSubTabColor).field0_0x0._s_0.G = fVar1;
    (this->ChatSubTabColor).field0_0x0._s_0.B = fVar2;
    (this->ChatSubTabColor).field0_0x0._s_0.A = fVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetChatSubTabIconID @ 14bde3be0

void __thiscall
UDS_VM_Chat_SubTabSlot::SetChatSubTabIconID(UDS_VM_Chat_SubTabSlot *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::ChatSubTabIconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ChatSubTabIconID.FieldName;
  if (this->ChatSubTabIconID != param_1) {
    this->ChatSubTabIconID = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetChatSubTabName @ 14bde3c30

void __thiscall
UDS_VM_Chat_SubTabSlot::SetChatSubTabName(UDS_VM_Chat_SubTabSlot *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::ChatSubTabName.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::ChatSubTabName.FieldName;
  FDS_Text::operator=(&this->ChatSubTabName,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetSelectedSubTab @ 14bde8f10

void __thiscall UDS_VM_Chat_SubTabSlot::SetSelectedSubTab(UDS_VM_Chat_SubTabSlot *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bIsSelectedSubTab.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsSelectedSubTab.FieldName;
  if (this->bIsSelectedSubTab != param_1) {
    this->bIsSelectedSubTab = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetUnreadCount @ 14bde9b60

void __thiscall UDS_VM_Chat_SubTabSlot::SetUnreadCount(UDS_VM_Chat_SubTabSlot *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::UnreadCount.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::UnreadCount.FieldName;
  if (this->UnreadCount != param_1) {
    this->UnreadCount = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetUnreadCountVisibility @ 14bde9c50

void __thiscall
UDS_VM_Chat_SubTabSlot::SetUnreadCountVisibility
          (UDS_VM_Chat_SubTabSlot *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::UnreadCountVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::UnreadCountVisibility.FieldName;
  if (this->UnreadCountVisibility != param_1) {
    this->UnreadCountVisibility = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14bdec230

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_Chat_SubTabSlot::UnbindModel(UDS_VM_Chat_SubTabSlot *this)

{
  UDS_LanguageManager *pUVar1;
  UDS_ChatEvent *pUVar2;
  
  pUVar1 = UDS_LanguageManager::GetInst();
  if (pUVar1 != (UDS_LanguageManager *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnLanguageChanged,this
              );
  }
  pUVar2 = UDS_ChatEvent::GetEvent();
  if (pUVar2 != (UDS_ChatEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnSelectedSubTabIndex,
               this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnClickedSubTabIndex,
               this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnChangeChattingTabType,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnUpdateMarkMessageAsRead,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnChangedChatOption,
               this);
  }
  return;
}

// UpdateSubTab @ 14bdf6080

void __thiscall UDS_VM_Chat_SubTabSlot::UpdateSubTab(UDS_VM_Chat_SubTabSlot *this)

{
  EDS_ChattingTabType EVar1;
  FName FVar2;
  int iVar3;
  FName local_18;
  int local_10;
  
  iVar3 = FFieldNotificationClassDescriptor::ChatBookmarkVisibility.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::ChatBookmarkVisibility.FieldName;
  if (this->ChatBookmarkVisibility != SelfHitTestInvisible) {
    this->ChatBookmarkVisibility = SelfHitTestInvisible;
    local_10 = iVar3;
    local_18 = FVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  EVar1 = this->ChattingTabType;
  if (EVar1 == Custom) {
    UpdateSubTab_Custom(this);
  }
  else {
    if (EVar1 == Whisper) {
      UpdateSubTab_Whisper(this);
      UpdateUnreadCount(this);
      return;
    }
    if (EVar1 == Group) {
      UpdateSubTab_Group(this);
      UpdateUnreadCount(this);
      return;
    }
  }
  UpdateUnreadCount(this);
  return;
}

// UpdateSubTab_Custom @ 14bdf6120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Chat_SubTabSlot::UpdateSubTab_Custom(UDS_VM_Chat_SubTabSlot *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar5;
  FDS_Text *pFVar6;
  undefined1 auStackY_458 [32];
  TSharedPtr<FDS_ChatCustomData,1> local_428;
  FLinearColor_u_0 local_418;
  TSharedPtr<FDS_ChattingTabData,1> local_408;
  FName local_3f8;
  int local_3f0;
  FName local_3e8;
  int local_3e0;
  FName local_3d8;
  int local_3d0;
  FDS_Text local_3c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_378;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_458;
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_378._padding_ = (longlong)this_00;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_378,"UDS_VM_Chat_SubTabSlot::UpdateSubTab_Custom",0x2b,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_378.Ptr,0x98,L"chattingManager == nullptr");
      if ((UDS_ChattingManager *)local_378._padding_ != (UDS_ChattingManager *)0x0) {
        FMemory::Free((void *)local_378._padding_);
      }
    }
  }
  else {
    UDS_ChattingManager::GetChattingTabData(this_00,&local_408,this->ChattingTabType);
    if (local_408.Object == (FDS_ChattingTabData *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_258._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_258,"UDS_VM_Chat_SubTabSlot::UpdateSubTab_Custom",0x2b,Yes);
        UDS_LogManager::PrintLog
                  (pUVar5,1,Warning,local_258.Ptr,0x9f,L"chattingTabData.IsValid() == false");
        if ((void *)local_258._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_258._padding_);
        }
      }
    }
    else {
      UDS_ChattingManager::GetCustomData(this_00,&local_428,this->SubTabIndex);
      if (local_428.Object == (FDS_ChatCustomData *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 != (UDS_LogManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          local_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_138,"UDS_VM_Chat_SubTabSlot::UpdateSubTab_Custom",0x2b,Yes);
          UDS_LogManager::PrintLog
                    (pUVar5,1,Warning,local_138.Ptr,0xa6,L"chatCustomData.IsValid() == false");
          if ((void *)local_138._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_138._padding_);
          }
        }
      }
      else {
        UDS_ChattingManager::GetChattingTabColor
                  (this_00,(FLinearColor *)&local_418._s_0,this->ChattingTabType,this->SubTabIndex);
        if (local_428.Object == (FDS_ChatCustomData *)0x0) {
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
        pFVar6 = FDS_ChatCustomData::GetCustomTabName(local_428.Object,&local_3c8);
        SetChatSubTabName(this,pFVar6);
        DestructItems<FDS_TextFormatArg,int>
                  ((FDS_TextFormatArg *)local_3c8.FormatArgs.AllocatorInstance.Data,
                   local_3c8.FormatArgs.ArrayNum);
        if ((FDS_TextFormatArg *)local_3c8.FormatArgs.AllocatorInstance.Data !=
            (FDS_TextFormatArg *)0x0) {
          FMemory::Free(local_3c8.FormatArgs.AllocatorInstance.Data);
        }
        if (local_3c8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3c8.UniqueString.Data.AllocatorInstance.Data);
        }
        if (local_408.Object == (FDS_ChattingTabData *)0x0) {
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
        iVar3 = FFieldNotificationClassDescriptor::ChatSubTabIconID.BitNumber;
        FVar2 = FFieldNotificationClassDescriptor::ChatSubTabIconID.FieldName;
        if (this->ChatSubTabIconID != (local_408.Object)->TabIconID) {
          this->ChatSubTabIconID = (local_408.Object)->TabIconID;
          local_3f0 = iVar3;
          local_3f8 = FVar2;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_3f8);
        }
        if ((((local_418._s_0.R != (this->ChatSubTabColor).field0_0x0._s_0.R) ||
             (local_418._s_0.G != (this->ChatSubTabColor).field0_0x0._s_0.G)) ||
            (local_418._s_0.B != (this->ChatSubTabColor).field0_0x0._s_0.B)) ||
           (local_418._s_0.A != (this->ChatSubTabColor).field0_0x0._s_0.A)) {
          local_3e0 = FFieldNotificationClassDescriptor::ChatSubTabColor.BitNumber;
          local_3e8 = FFieldNotificationClassDescriptor::ChatSubTabColor.FieldName;
          (this->ChatSubTabColor).field0_0x0._s_0.R = local_418._s_0.R;
          (this->ChatSubTabColor).field0_0x0._s_0.G = local_418._s_0.G;
          (this->ChatSubTabColor).field0_0x0._s_0.B = local_418._s_0.B;
          (this->ChatSubTabColor).field0_0x0._s_0.A = local_418._s_0.A;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_3e8);
        }
        if (local_428.Object == (FDS_ChatCustomData *)0x0) {
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
        iVar3 = FFieldNotificationClassDescriptor::bIsBookmark.BitNumber;
        FVar2 = FFieldNotificationClassDescriptor::bIsBookmark.FieldName;
        if (this->bIsBookmark != (local_428.Object)->bIsBookmark) {
          this->bIsBookmark = (local_428.Object)->bIsBookmark;
          local_3d0 = iVar3;
          local_3d8 = FVar2;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_3d8);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_428.SharedReferenceCount.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_408.SharedReferenceCount.ReferenceController);
  }
  return;
}

// UpdateSubTab_Favorite @ 14bdf6540

void __thiscall UDS_VM_Chat_SubTabSlot::UpdateSubTab_Favorite(UDS_VM_Chat_SubTabSlot *this)

{
  return;
}

// UpdateSubTab_Group @ 14bdf6550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Chat_SubTabSlot::UpdateSubTab_Group(UDS_VM_Chat_SubTabSlot *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FDS_ChatConversation *pFVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar6;
  FDS_ChattingGroupIconListTableRow *pFVar7;
  int iVar8;
  undefined1 auStackY_578 [32];
  TSharedPtr<FDS_ChatRoomData,1> local_548;
  FName local_538;
  int local_530;
  FDS_Text local_528;
  TSharedPtr<FDS_ChattingTabData,1> local_4d8;
  FLinearColor local_4c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_578;
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_4b8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_4b8,"UDS_VM_Chat_SubTabSlot::UpdateSubTab_Group",0x2a,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_4b8.Ptr,0xe4,L"chattingManager == nullptr");
      if ((void *)local_4b8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_4b8._padding_);
      }
    }
  }
  else {
    UDS_ChattingManager::GetChattingTabData(this_00,&local_4d8,this->ChattingTabType);
    if (local_4d8.Object == (FDS_ChattingTabData *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        local_398._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_398,"UDS_VM_Chat_SubTabSlot::UpdateSubTab_Group",0x2a,Yes);
        UDS_LogManager::PrintLog
                  (pUVar6,1,Warning,local_398.Ptr,0xeb,L"chattingTabData.IsValid() == false");
        if ((void *)local_398._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_398._padding_);
        }
      }
    }
    else {
      UDS_ChattingManager::GetChatRoomData(this_00,&local_548,Group,this->SubTabIndex);
      if (local_548.Object == (FDS_ChatRoomData *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        if (pUVar6 != (UDS_LogManager *)0x0) {
          pUVar6 = UDS_LogManager::GetInst();
          local_278._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_278,"UDS_VM_Chat_SubTabSlot::UpdateSubTab_Group",0x2a,Yes);
          UDS_LogManager::PrintLog
                    (pUVar6,1,Warning,local_278.Ptr,0xf2,L"groupChatRoomData.IsValid() == false");
          if ((void *)local_278._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_278._padding_);
          }
        }
      }
      else {
        if ((local_548.Object == (FDS_ChatRoomData *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar1 = ((local_548.Object)->ChatConversation).SharedReferenceCount.ReferenceController;
        pFVar2 = ((local_548.Object)->ChatConversation).Object;
        if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pFVar2 == (FDS_ChatConversation *)0x0) {
          pUVar6 = UDS_LogManager::GetInst();
          if (pUVar6 != (UDS_LogManager *)0x0) {
            pUVar6 = UDS_LogManager::GetInst();
            local_158._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_158,"UDS_VM_Chat_SubTabSlot::UpdateSubTab_Group",0x2a,Yes);
            UDS_LogManager::PrintLog
                      (pUVar6,1,Warning,local_158.Ptr,0xf9,L"conversation.IsValid() == false");
            if ((void *)local_158._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_158._padding_);
            }
          }
        }
        else {
          local_528.StringTableID = 0;
          local_528.StringEnumTableNameID.ComparisonIndex.Value = 0;
          local_528.StringEnumTableNameID.Number = 0;
          local_528.TimeExpressionType = None;
          local_528.IsExpression = false;
          local_528.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_528.UniqueString.Data.ArrayNum = 0;
          local_528.UniqueString.Data.ArrayMax = 0;
          local_528.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_528.FormatArgs.ArrayNum = 0;
          local_528.FormatArgs.ArrayMax = 0;
          local_528.StringTableType = None;
          local_528.DateTime.Ticks = 0;
          local_528.TimeSpan.Ticks = 0;
          FDS_Text::SetTextFromStringTable
                    (&local_528,StringBase,(longlong)(this->SubTabIndex + 0x449b4));
          iVar8 = FFieldNotificationClassDescriptor::ChatSubTabName.BitNumber;
          FVar4 = FFieldNotificationClassDescriptor::ChatSubTabName.FieldName;
          FDS_Text::operator=(&this->ChatSubTabName,&local_528);
          local_538 = FVar4;
          local_530 = iVar8;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_538);
          DestructItems<FDS_TextFormatArg,int>
                    ((FDS_TextFormatArg *)local_528.FormatArgs.AllocatorInstance.Data,
                     local_528.FormatArgs.ArrayNum);
          if ((FDS_TextFormatArg *)local_528.FormatArgs.AllocatorInstance.Data !=
              (FDS_TextFormatArg *)0x0) {
            FMemory::Free(local_528.FormatArgs.AllocatorInstance.Data);
          }
          if (local_528.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_528.UniqueString.Data.AllocatorInstance.Data);
          }
          if ((local_548.Object == (FDS_ChatRoomData *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((local_548.Object)->GroupIconID == 0) {
            iVar8 = this->SubTabIndex + 0x266;
          }
          else {
            pFVar7 = FDS_ChattingGroupIconListTableRow::GetRef
                               ((longlong)(local_548.Object)->GroupIconID,true);
            iVar8 = pFVar7->ID_Icon;
          }
          SetChatSubTabIconID(this,iVar8);
          UDS_ChattingManager::GetChattingTabColor(this_00,&local_4c8,Group,this->SubTabIndex);
          SetChatSubTabColor(this,&local_4c8);
          SetBookmark(this,pFVar2->bIsBookmark);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_548.SharedReferenceCount.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4d8.SharedReferenceCount.ReferenceController);
  }
  return;
}

// UpdateSubTab_Whisper @ 14bdf69f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Chat_SubTabSlot::UpdateSubTab_Whisper(UDS_VM_Chat_SubTabSlot *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FDS_ChatConversation *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FDS_ChatUserInfo *pFVar4;
  code *pcVar5;
  FName FVar6;
  int iVar7;
  bool bVar8;
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar9;
  undefined1 auStackY_6a8 [32];
  TSharedPtr<FDS_ChatRoomData,1> local_678;
  TSharedPtr<FDS_ChattingTabData,1> local_668;
  FName local_658;
  int local_650;
  FDS_Text local_648;
  FLinearColor local_5f8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_5e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_6a8;
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 != (UDS_LogManager *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      local_5e8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_5e8,"UDS_VM_Chat_SubTabSlot::UpdateSubTab_Whisper",0x2c,Yes);
      UDS_LogManager::PrintLog(pUVar9,1,Warning,local_5e8.Ptr,0xb7,L"chattingManager == nullptr");
      if ((void *)local_5e8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_5e8._padding_);
      }
    }
  }
  else {
    UDS_ChattingManager::GetChattingTabData(this_00,&local_668,this->ChattingTabType);
    if (local_668.Object == (FDS_ChattingTabData *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 != (UDS_LogManager *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        local_4c8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_4c8,"UDS_VM_Chat_SubTabSlot::UpdateSubTab_Whisper",0x2c,Yes);
        UDS_LogManager::PrintLog
                  (pUVar9,1,Warning,local_4c8.Ptr,0xbe,L"chattingTabData.IsValid() == false");
        if ((void *)local_4c8._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_4c8._padding_);
        }
      }
    }
    else {
      UDS_ChattingManager::GetChatRoomData(this_00,&local_678,Whisper,this->SubTabIndex);
      if (local_678.Object == (FDS_ChatRoomData *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        if (pUVar9 != (UDS_LogManager *)0x0) {
          pUVar9 = UDS_LogManager::GetInst();
          local_3a8._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_3a8,"UDS_VM_Chat_SubTabSlot::UpdateSubTab_Whisper",0x2c,Yes);
          UDS_LogManager::PrintLog
                    (pUVar9,1,Warning,local_3a8.Ptr,0xc5,L"chatRoomData.IsValid() == false");
          if ((void *)local_3a8._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_3a8._padding_);
          }
        }
      }
      else {
        if (local_678.Object == (FDS_ChatRoomData *)0x0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar8) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        pTVar1 = ((local_678.Object)->ChatConversation).SharedReferenceCount.ReferenceController;
        pFVar2 = ((local_678.Object)->ChatConversation).Object;
        if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pFVar2 == (FDS_ChatConversation *)0x0) {
          pUVar9 = UDS_LogManager::GetInst();
          if (pUVar9 != (UDS_LogManager *)0x0) {
            pUVar9 = UDS_LogManager::GetInst();
            local_288._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_288,"UDS_VM_Chat_SubTabSlot::UpdateSubTab_Whisper",0x2c,Yes);
            UDS_LogManager::PrintLog
                      (pUVar9,1,Warning,local_288.Ptr,0xcc,L"conversation.IsValid() == false");
            if ((void *)local_288._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_288._padding_);
            }
          }
        }
        else {
          if (local_678.Object == (FDS_ChatRoomData *)0x0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L"");
            if (bVar8) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          pTVar3 = ((local_678.Object)->Whisper).SharedReferenceCount.ReferenceController;
          pFVar4 = ((local_678.Object)->Whisper).Object;
          if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
            UNLOCK();
          }
          if (pFVar4 == (FDS_ChatUserInfo *)0x0) {
            pUVar9 = UDS_LogManager::GetInst();
            if (pUVar9 != (UDS_LogManager *)0x0) {
              pUVar9 = UDS_LogManager::GetInst();
              local_168._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_168,"UDS_VM_Chat_SubTabSlot::UpdateSubTab_Whisper",0x2c,Yes);
              UDS_LogManager::PrintLog
                        (pUVar9,1,Warning,local_168.Ptr,0xd3,L"whisper.IsValid() == false");
              if ((void *)local_168._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_168._padding_);
              }
            }
          }
          else {
            UDS_ChattingManager::GetChattingTabColor(this_00,&local_5f8,Whisper,-1);
            local_648.StringTableType = None;
            local_648.StringTableID = 0;
            local_648.StringEnumTableNameID.ComparisonIndex.Value = 0;
            local_648.StringEnumTableNameID.Number = 0;
            local_648.TimeExpressionType = None;
            local_648.DateTime.Ticks = 0;
            local_648.TimeSpan.Ticks = 0;
            local_648.IsExpression = false;
            local_648.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_648.UniqueString.Data.ArrayNum = 0;
            local_648.UniqueString.Data.ArrayMax = 0;
            local_648.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_648.FormatArgs.ArrayNum = 0;
            local_648.FormatArgs.ArrayMax = 0;
            FDS_Text::SetTextFromUniqueString(&local_648,&pFVar4->Nickname);
            iVar7 = FFieldNotificationClassDescriptor::ChatSubTabName.BitNumber;
            FVar6 = FFieldNotificationClassDescriptor::ChatSubTabName.FieldName;
            FDS_Text::operator=(&this->ChatSubTabName,&local_648);
            local_658 = FVar6;
            local_650 = iVar7;
            (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_658);
            DestructItems<FDS_TextFormatArg,int>
                      ((FDS_TextFormatArg *)local_648.FormatArgs.AllocatorInstance.Data,
                       local_648.FormatArgs.ArrayNum);
            if ((FDS_TextFormatArg *)local_648.FormatArgs.AllocatorInstance.Data !=
                (FDS_TextFormatArg *)0x0) {
              FMemory::Free(local_648.FormatArgs.AllocatorInstance.Data);
            }
            if (local_648.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
               ) {
              FMemory::Free(local_648.UniqueString.Data.AllocatorInstance.Data);
            }
            if (local_668.Object == (FDS_ChattingTabData *)0x0) {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L"");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            SetChatSubTabIconID(this,(local_668.Object)->TabIconID);
            SetChatSubTabColor(this,&local_5f8);
            SetBookmark(this,pFVar2->bIsBookmark);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar3);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_678.SharedReferenceCount.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_668.SharedReferenceCount.ReferenceController);
  }
  return;
}

// UpdateUnreadCount @ 14bdf99b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Chat_SubTabSlot::UpdateUnreadCount(UDS_VM_Chat_SubTabSlot *this)

{
  FName FVar1;
  int iVar2;
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_178 [32];
  FName local_148;
  int local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Chat_SubTabSlot::UpdateUnreadCount",0x29,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x118,L"chattingManager == nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    iVar2 = UDS_ChattingManager::GetUnreadCount(this_00,this->ChattingTabType,this->SubTabIndex);
    local_140 = FFieldNotificationClassDescriptor::UnreadCountVisibility.BitNumber;
    local_148 = FFieldNotificationClassDescriptor::UnreadCountVisibility.FieldName;
    FVar1 = FFieldNotificationClassDescriptor::UnreadCount.FieldName;
    if (iVar2 < 1) {
      if (this->UnreadCountVisibility == Collapsed) {
        return;
      }
      this->UnreadCountVisibility = Collapsed;
    }
    else {
      if (this->UnreadCount != iVar2) {
        local_140 = FFieldNotificationClassDescriptor::UnreadCount.BitNumber;
        this->UnreadCount = iVar2;
        local_148 = FVar1;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_148);
      }
      local_140 = FFieldNotificationClassDescriptor::UnreadCountVisibility.BitNumber;
      local_148 = FFieldNotificationClassDescriptor::UnreadCountVisibility.FieldName;
      if (this->UnreadCountVisibility == SelfHitTestInvisible) {
        return;
      }
      this->UnreadCountVisibility = SelfHitTestInvisible;
    }
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_148);
  }
  return;
}

