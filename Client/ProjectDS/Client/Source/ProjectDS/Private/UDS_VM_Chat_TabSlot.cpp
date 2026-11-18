// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 38

// SetClickChatTab_WrapperImpl @ 14b61d2d0

void __cdecl UDS_VM_Chat_TabSlot::SetClickChatTab_WrapperImpl(void *param_1,void *param_2)

{
  OnClickedChattingTabType
            (param_1,*(EDS_ChattingTabType *)((longlong)param_1 + 0x33a),
             (TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)
             *(FWeakObjectPtr *)((longlong)param_1 + 0x350));
  return;
}

// SetMouseEnterChatTab_WrapperImpl @ 14b61d2e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Chat_TabSlot::SetMouseEnterChatTab_WrapperImpl(void *param_1,void *param_2)

{
  UDS_WindowManager *this;
  UDS_LogManager *pUVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  undefined1 auStackY_1e8 [32];
  uint uVar4;
  wchar_t *pwVar5;
  UObject *apUStack_1b8 [2];
  code *pcStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined1 auStack_198 [8];
  FDelegateAllocation FStack_190;
  FDestructionSentinel FStack_180;
  FDelegateAllocation *pFStack_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_158;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  this = UDS_WindowManager::GetInst();
  if (this == (UDS_WindowManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    TStack_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_158,"UDS_VM_Chat_TabSlot::OnMouseEnterChatTab",0x28,Yes);
    pwVar5 = L"windowManager == nullptr";
    uVar4 = 0x45;
  }
  else {
    apUStack_1b8[0] = *(UObject **)param_2;
    if (apUStack_1b8[0] != (UObject *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(apUStack_1b8[0]);
      }
      FWeakObjectPtr::operator=
                ((FWeakObjectPtr *)((longlong)param_1 + 0x350),(FObjectPtr)apUStack_1b8);
      pcStack_1a8 = OnChatTabTooltip;
      uStack_1a0 = 0;
      auStack_198 = (undefined1  [8])0x0;
      FStack_190.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      FStack_190.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_198,
                 (FWriteAccessScope *)&FStack_180);
      pFStack_168 = &FStack_190;
      puVar2 = UE::Core::Private::DelegateAllocate(0x30,&FStack_190);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_UserWidget__UFWeakObjectPtr______6B_
        ;
        puVar2[1] = *(undefined8 *)((longlong)param_1 + 0x350);
        uVar3 = FDelegateHandle::GenerateNewID();
        puVar2[2] = uVar3;
        *puVar2 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Chat_TabSlot____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_UserWidget__UFWeakObjectPtr______6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(param_1);
        }
        puVar2[3] = 0;
        apUStack_1b8[0] = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(param_1);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)apUStack_1b8);
        puVar2[4] = pcStack_1a8;
        puVar2[5] = CONCAT44(uStack_19c,uStack_1a0);
      }
      if (FStack_180.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_180.Accessor,&FStack_180);
      }
      UDS_WindowManager::OpenWindow
                (this,CommonTextTooltip,
                 (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)auStack_198
                );
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    TStack_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_158,"UDS_VM_Chat_TabSlot::OnMouseEnterChatTab",0x28,Yes);
    pwVar5 = L"InEvent.TargetWidget == nullptr";
    uVar4 = 0x4b;
  }
  UDS_LogManager::PrintLog(pUVar1,1,Warning,TStack_158.Ptr,uVar4,pwVar5);
  if ((void *)TStack_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)TStack_158._padding_);
  }
  return;
}

// SetMouseLeaveChatTab_WrapperImpl @ 14b61d2f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Chat_TabSlot::SetMouseLeaveChatTab_WrapperImpl(void *param_1,void *param_2)

{
  UDS_WindowManager *this;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  float fStack_148;
  uint auStack_144 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  *(undefined8 *)((longlong)param_1 + 0x350) = 0;
  this = UDS_WindowManager::GetInst();
  if (this == (UDS_WindowManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_Chat_TabSlot::OnMouseLeaveChatTab",0x28,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,TStack_138.Ptr,99,L"windowManager == nullptr");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  else {
    fStack_148 = 0.0;
    auStack_144[0] = 0;
    UDS_WindowManager::CloseWindow(this,CommonTextTooltip,auStack_144,&fStack_148);
  }
  return;
}

// SetChatTabText_WrapperImpl @ 14b61d300

void __cdecl UDS_VM_Chat_TabSlot::SetChatTabText_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::ChatTabText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::ChatTabText.FieldName;
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0x2d0),param_2);
  FStack_18 = FVar1;
  iStack_10 = iVar2;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetChatTabIconID_WrapperImpl @ 14b61d310

void __cdecl UDS_VM_Chat_TabSlot::SetChatTabIconID_WrapperImpl(void *param_1,void *param_2)

{
  SetChatTabIconID(param_1,*(int *)param_2);
  return;
}

// SetChatTabColor_WrapperImpl @ 14b61d320

void __cdecl UDS_VM_Chat_TabSlot::SetChatTabColor_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FName FStack_18;
  int iStack_10;
  
  if ((((*(float *)param_2 != *(float *)((longlong)param_1 + 0x324)) ||
       (*(float *)((longlong)param_2 + 4) != *(float *)((longlong)param_1 + 0x328))) ||
      (*(float *)((longlong)param_2 + 8) != *(float *)((longlong)param_1 + 0x32c))) ||
     (*(float *)((longlong)param_2 + 0xc) != *(float *)((longlong)param_1 + 0x330))) {
    uVar1 = *(undefined4 *)((longlong)param_2 + 4);
    uVar2 = *(undefined4 *)((longlong)param_2 + 8);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
    iStack_10 = FFieldNotificationClassDescriptor::ChatTabColor.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::ChatTabColor.FieldName;
    *(undefined4 *)((longlong)param_1 + 0x324) = *(undefined4 *)param_2;
    *(undefined4 *)((longlong)param_1 + 0x328) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x32c) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x330) = uVar3;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetUnreadCount_WrapperImpl @ 14b61d330

void __cdecl UDS_VM_Chat_TabSlot::SetUnreadCount_WrapperImpl(void *param_1,void *param_2)

{
  SetUnreadCount(param_1,*(int *)param_2);
  return;
}

// SetUnreadCountVisibility_WrapperImpl @ 14b61d340

void __cdecl UDS_VM_Chat_TabSlot::SetUnreadCountVisibility_WrapperImpl(void *param_1,void *param_2)

{
  SetUnreadCountVisibility(param_1,*(ESlateVisibility *)param_2);
  return;
}

// SetbIsSelectedTab_WrapperImpl @ 14b61d350

void __cdecl UDS_VM_Chat_TabSlot::SetbIsSelectedTab_WrapperImpl(void *param_1,void *param_2)

{
  SetSelectedTab(param_1,*(bool *)param_2);
  return;
}

// StaticClass @ 14b61d360

UClass * __cdecl UDS_VM_Chat_TabSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_TabSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_TabSlot",
               &Z_Registration_Info_UClass_UDS_VM_Chat_TabSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_TabSlot,0x358,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Chat_TabSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_TabSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_TabSlot.InnerSingleton;
}

// UDS_VM_Chat_TabSlot @ 14b61fcf0

UDS_VM_Chat_TabSlot * __thiscall
UDS_VM_Chat_TabSlot::UDS_VM_Chat_TabSlot(UDS_VM_Chat_TabSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->ClickChatTab)._padding_ = '\0';
  (this->ClickChatTab).bIsCustomSelected = false;
  (this->ClickChatTab).bIsLacked = false;
  (this->ClickChatTab).bIsCustomDisabled = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_TabSlot__6B_;
  *(undefined8 *)&(this->ClickChatTab).Delegate = 0;
  *(undefined8 *)&(this->ClickChatTab).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickChatTab).Delegate.field_0x10 = 0;
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->MouseEnterChatTab);
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->MouseLeaveChatTab);
  (this->ChatTabText).StringTableType = None;
  (this->ChatTabNameID)._padding_ = (longlong)&___7FDS_StringBaseID__6B_;
  (this->ChatTabText).StringTableID = 0;
  (this->ChatTabText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ChatTabText).StringEnumTableNameID.Number = 0;
  (this->ChatTabText).DateTime.Ticks = 0;
  (this->ChatTabText).TimeSpan.Ticks = 0;
  (this->ChatTabText).TimeExpressionType = None;
  (this->ChatTabText).IsExpression = false;
  (this->ChatTabText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChatTabText).UniqueString.Data.ArrayNum = 0;
  (this->ChatTabText).UniqueString.Data.ArrayMax = 0;
  (this->ChatTabText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChatTabText).FormatArgs.ArrayNum = 0;
  (this->ChatTabText).FormatArgs.ArrayMax = 0;
  this->ChattingTabType = None;
  (this->ChatTabNameID).ID = 0;
  (this->HoverWidget).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UDS_VM_Chat_TabSlot @ 14b61fde0

UDS_VM_Chat_TabSlot * __thiscall
UDS_VM_Chat_TabSlot::UDS_VM_Chat_TabSlot(UDS_VM_Chat_TabSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->ClickChatTab)._padding_ = '\0';
  (this->ClickChatTab).bIsCustomSelected = false;
  (this->ClickChatTab).bIsLacked = false;
  (this->ClickChatTab).bIsCustomDisabled = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_TabSlot__6B_;
  *(undefined8 *)&(this->ClickChatTab).Delegate = 0;
  *(undefined8 *)&(this->ClickChatTab).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickChatTab).Delegate.field_0x10 = 0;
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->MouseEnterChatTab);
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->MouseLeaveChatTab);
  (this->ChatTabText).StringTableType = None;
  (this->ChatTabNameID)._padding_ = (longlong)&___7FDS_StringBaseID__6B_;
  (this->ChatTabText).StringTableID = 0;
  (this->ChatTabText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ChatTabText).StringEnumTableNameID.Number = 0;
  (this->ChatTabText).DateTime.Ticks = 0;
  (this->ChatTabText).TimeSpan.Ticks = 0;
  (this->ChatTabText).TimeExpressionType = None;
  (this->ChatTabText).IsExpression = false;
  (this->ChatTabText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChatTabText).UniqueString.Data.ArrayNum = 0;
  (this->ChatTabText).UniqueString.Data.ArrayMax = 0;
  (this->ChatTabText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChatTabText).FormatArgs.ArrayNum = 0;
  (this->ChatTabText).FormatArgs.ArrayMax = 0;
  this->ChattingTabType = None;
  (this->ChatTabNameID).ID = 0;
  (this->HoverWidget).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_VM_Chat_TabSlot @ 14b621490

void __thiscall UDS_VM_Chat_TabSlot::~UDS_VM_Chat_TabSlot(UDS_VM_Chat_TabSlot *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_TabSlot__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ChatTabText).FormatArgs.AllocatorInstance.Data,
             (this->ChatTabText).FormatArgs.ArrayNum);
  pFVar1 = (this->ChatTabText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ChatTabText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FKeyEvent::~FKeyEvent(&(this->MouseLeaveChatTab).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->MouseLeaveChatTab).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->MouseEnterChatTab).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->MouseEnterChatTab).PointerEvent);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickChatTab).Delegate);
  pvVar2 = *(void **)&(this->ClickChatTab).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickChatTab).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b623810

IClassDescriptor * __thiscall
UDS_VM_Chat_TabSlot::GetFieldNotificationDescriptor(UDS_VM_Chat_TabSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Chat_TabSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b623fb0

UClass * __cdecl UDS_VM_Chat_TabSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_TabSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_TabSlot",
               &Z_Registration_Info_UClass_UDS_VM_Chat_TabSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_TabSlot,0x358,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Chat_TabSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_TabSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_TabSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Chat_TabSlot @ 14b624ae0

void __cdecl UDS_VM_Chat_TabSlot::StaticRegisterNativesUDS_VM_Chat_TabSlot(void)

{
  return;
}

// BindModel @ 14bdb0b90

void __thiscall UDS_VM_Chat_TabSlot::BindModel(UDS_VM_Chat_TabSlot *this)

{
  UDS_ChatEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_ChatEvent::GetEvent();
  if (pUVar1 != (UDS_ChatEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnClickedChattingTabType,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_ChattingTabType,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_Chat_TabSlot>
              (&pUVar1->OnClickedChattingTabType,(UDS_VM_Chat_TabSlot *)&stack0x00000010,
               (pmf_c268355f *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangeChattingTabType,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_ChattingTabType,int),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_Chat_TabSlot>
              (&pUVar1->OnChangeChattingTabType,(UDS_VM_Chat_TabSlot *)&stack0x00000010,
               (pmf_4d14f8d9 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnUpdateMarkMessageAsRead,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_TabSlot>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnUpdateMarkMessageAsRead,(UDS_VM_Chat_TabSlot *)&stack0x00000010,
               (pmf_85f14be5 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangedChatOption,
               this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_TabSlot>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangedChatOption,(UDS_VM_Chat_TabSlot *)&stack0x00000010,
               (pmf_85f14be5 *)this);
  }
  return;
}

// OnChangeChattingTabType @ 14bdca440

void __thiscall
UDS_VM_Chat_TabSlot::OnChangeChattingTabType
          (UDS_VM_Chat_TabSlot *this,EDS_ChattingTabType param_1,int param_2)

{
  bool bVar1;
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bIsSelectedTab.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsSelectedTab.FieldName;
  bVar1 = this->ChattingTabType == param_1;
  if (this->bIsSelectedTab != bVar1) {
    this->bIsSelectedTab = bVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnChangedChatOption @ 14bdca680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Chat_TabSlot::OnChangedChatOption(UDS_VM_Chat_TabSlot *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar5;
  FName *pFVar6;
  undefined1 auStackY_368 [32];
  TSharedPtr<FDS_ChattingTabData,1> TStack_338;
  FLinearColor_u_0 FStack_328;
  FName FStack_318;
  int iStack_310;
  FName FStack_308;
  int iStack_300;
  FName FStack_2f8;
  int iStack_2f0;
  FName FStack_2e8;
  int iStack_2e0;
  FName FStack_2d8;
  int iStack_2d0;
  FName FStack_2c8;
  int iStack_2c0;
  FDS_Text FStack_2b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_148;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_368;
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    TStack_268._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_268,"UDS_VM_Chat_TabSlot::UpdateChatTab",0x22,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Warning,TStack_268.Ptr,0x8d,L"chattingManager == nullptr");
    if ((void *)TStack_268._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)TStack_268._padding_);
    return;
  }
  UDS_ChattingManager::GetChattingTabData(this_00,&TStack_338,this->ChattingTabType);
  if (TStack_338.Object == (FDS_ChattingTabData *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      TStack_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_148,"UDS_VM_Chat_TabSlot::UpdateChatTab",0x22,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,TStack_148.Ptr,0x94,L"chattingTabData.IsValid() == false");
      if ((void *)TStack_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_148._padding_);
      }
    }
    goto LAB_14bdef37f;
  }
  if ((TStack_338.Object == (FDS_ChattingTabData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (this->ChatTabNameID).ID = ((TStack_338.Object)->TabStringID).ID;
  UDS_ChattingManager::GetChattingTabColor
            (this_00,(FLinearColor *)&FStack_328._s_0,this->ChattingTabType,-1);
  if ((TStack_338.Object == (FDS_ChattingTabData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FStack_2b8.StringTableType = None;
  FStack_2b8.StringTableID = 0;
  FStack_2b8.StringEnumTableNameID.ComparisonIndex.Value = 0;
  FStack_2b8.StringEnumTableNameID.Number = 0;
  FStack_2b8.DateTime.Ticks = 0;
  FStack_2b8.TimeSpan.Ticks = 0;
  FStack_2b8.TimeExpressionType = None;
  FStack_2b8.IsExpression = false;
  FStack_2b8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_2b8.UniqueString.Data.ArrayNum = 0;
  FStack_2b8.UniqueString.Data.ArrayMax = 0;
  FStack_2b8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_2b8.FormatArgs.ArrayNum = 0;
  FStack_2b8.FormatArgs.ArrayMax = 0;
  FDS_Text::SetTextFromStringID(&FStack_2b8,&(TStack_338.Object)->TabStringID);
  iVar3 = FFieldNotificationClassDescriptor::ChatTabText.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::ChatTabText.FieldName;
  FDS_Text::operator=(&this->ChatTabText,&FStack_2b8);
  FStack_318 = FVar2;
  iStack_310 = iVar3;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_318);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)FStack_2b8.FormatArgs.AllocatorInstance.Data,
             FStack_2b8.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)FStack_2b8.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
  {
    FMemory::Free(FStack_2b8.FormatArgs.AllocatorInstance.Data);
  }
  if (FStack_2b8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2b8.UniqueString.Data.AllocatorInstance.Data);
  }
  if ((TStack_338.Object == (FDS_ChattingTabData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = FFieldNotificationClassDescriptor::ChatTabIconID.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::ChatTabIconID.FieldName;
  if (this->ChatTabIconID != (TStack_338.Object)->TabIconID) {
    this->ChatTabIconID = (TStack_338.Object)->TabIconID;
    iStack_300 = iVar3;
    FStack_308 = FVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_308);
  }
  if ((((FStack_328._s_0.R != (this->ChatTabColor).field0_0x0._s_0.R) ||
       (FStack_328._s_0.G != (this->ChatTabColor).field0_0x0._s_0.G)) ||
      (FStack_328._s_0.B != (this->ChatTabColor).field0_0x0._s_0.B)) ||
     (FStack_328._s_0.A != (this->ChatTabColor).field0_0x0._s_0.A)) {
    iStack_2f0 = FFieldNotificationClassDescriptor::ChatTabColor.BitNumber;
    FStack_2f8 = FFieldNotificationClassDescriptor::ChatTabColor.FieldName;
    (this->ChatTabColor).field0_0x0._s_0.R = FStack_328._s_0.R;
    (this->ChatTabColor).field0_0x0._s_0.G = FStack_328._s_0.G;
    (this->ChatTabColor).field0_0x0._s_0.B = FStack_328._s_0.B;
    (this->ChatTabColor).field0_0x0._s_0.A = FStack_328._s_0.A;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_2f8);
  }
  iVar3 = FFieldNotificationClassDescriptor::bIsSelectedTab.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::bIsSelectedTab.FieldName;
  bVar4 = this->ChattingTabType == (this_00->ChatStateData).ChattingTabType;
  if (this->bIsSelectedTab != bVar4) {
    this->bIsSelectedTab = bVar4;
    FStack_2e8 = FVar2;
    iStack_2e0 = iVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_2e8);
  }
  if ((TStack_338.Object == (FDS_ChattingTabData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar4 = FDS_ChattingTabData::IsShowChattingTab(TStack_338.Object);
  iVar3 = UDS_ViewModelBase::FFieldNotificationClassDescriptor::Visibility.BitNumber;
  FVar2 = UDS_ViewModelBase::FFieldNotificationClassDescriptor::Visibility.FieldName;
  if (bVar4) {
    if ((char)this->_padding_ != '\x04') {
      *(undefined1 *)&this->_padding_ = 4;
      pFVar6 = &FStack_2d8;
      FStack_2d8 = FVar2;
      iStack_2d0 = iVar3;
LAB_14bdef36c:
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar6);
    }
  }
  else if ((char)this->_padding_ != '\x01') {
    *(undefined1 *)&this->_padding_ = 1;
    pFVar6 = &FStack_2c8;
    FStack_2c8 = FVar2;
    iStack_2c0 = iVar3;
    goto LAB_14bdef36c;
  }
  UpdateUnreadCount(this);
LAB_14bdef37f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_338.SharedReferenceCount.ReferenceController);
  return;
}

// OnChatTabTooltip @ 14bdcb0e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_TabSlot::OnChatTabTooltip
          (UDS_VM_Chat_TabSlot *this,UDS_UserWidget *param_1,
          TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  UDS_LogManager *pUVar7;
  UObject *pUVar8;
  UDS_ModelBase *pUVar9;
  FString *pFVar10;
  FName FVar11;
  FString *pFVar12;
  FName *pFVar13;
  undefined8 *puVar14;
  ulong64 uVar15;
  FWeakObjectPtr local_res18;
  undefined1 auStackY_228 [32];
  wchar_t *pwVar16;
  FWeakObjectPtr local_1e8;
  UDS_UserWidget *local_1e0;
  FString local_1d8;
  undefined1 local_1c8 [8];
  FDelegateAllocation local_1c0;
  FName local_1a8;
  undefined4 uStack_1a0;
  int iStack_19c;
  FDestructionSentinel local_198;
  FDelegateAllocation *local_180;
  FName local_178 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_res18 = param_2.WeakPtr;
  if (param_1 == (UDS_UserWidget *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar7 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_VM_Chat_TabSlot::OnChatTabTooltip",0x25,Yes);
    pwVar16 = L"InTooltipWidget == nullptr";
    uVar6 = 0xfb;
  }
  else {
    bVar5 = FWeakObjectPtr::IsValid(&local_res18);
    if (bVar5) {
      pUVar8 = GetTransientPackageAsObject();
      pUVar9 = NewObject<UDS_ModelBase>(pUVar8);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UDS_ModelBase *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar9);
      }
      pFVar10 = (FString *)(**(code **)((this->ChatTabNameID)._padding_ + 8))(&this->ChatTabNameID);
      pFVar10 = ::FString::FString((FString *)local_1c8,pFVar10);
      local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar1 = (pFVar10->Data).ArrayNum;
      pFVar2 = (pFVar10->Data).AllocatorInstance.Data;
      local_1d8.Data.ArrayNum = iVar1;
      if (iVar1 == 0) {
        local_1d8.Data.ArrayNum = 0;
        local_1d8.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar1,0,(ForAnyElementType *)&local_1d8,iVar1,&local_1d8.Data.ArrayMax);
        memcpy(local_1d8.Data.AllocatorInstance.Data,pFVar2,(longlong)iVar1 * 2);
      }
      FVar11 = FDS_DataContainer::TransformIndexToName<enum_EDS_TextData>
                         (&pUVar9->DataContainer,(EDS_TextData)&local_1e0);
      uVar3 = *(undefined8 *)FVar11;
      uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
      pFVar12 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                ::FindOrAddImpl<FName>
                          ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                            *)&pUVar9->DataContainer,uVar6 + (int)((ulonglong)uVar3 >> 0x20),
                           (FName *)FVar11);
      if (pFVar12 != &local_1d8) {
        pFVar2 = (pFVar12->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (pFVar12->Data).AllocatorInstance.Data = local_1d8.Data.AllocatorInstance.Data;
        local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar12->Data).ArrayNum = local_1d8.Data.ArrayNum;
        (pFVar12->Data).ArrayMax = local_1d8.Data.ArrayMax;
        local_1d8.Data.ArrayNum = 0;
        local_1d8.Data.ArrayMax = 0;
      }
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
      pFVar2 = (pFVar10->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pcVar4 = *(code **)(pUVar9->_padding_ + 0x308);
      ::FName::FName(local_178,L"");
      pFVar13 = ::FName::FName(&local_1a8,L"");
      puVar14 = (undefined8 *)(*pcVar4)(pUVar9,local_1c8,0x1c2,*pFVar13);
      local_198._0_8_ = *puVar14;
      local_198.Accessor = (FMRSWRecursiveAccessDetector *)puVar14[1];
      if (local_198.Accessor != (FMRSWRecursiveAccessDetector *)0x0) {
        LOCK();
        *(int *)&local_198.Accessor[1].State = *(int *)&local_198.Accessor[1].State + 1;
        UNLOCK();
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_1e8.ObjectIndex = 0;
      local_1e8.ObjectSerialNumber = 0;
      local_1e0 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_1e8,(FObjectPtr)&local_1e0);
      DS_ViewModelTemplateUtil::BindViewModel
                ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_1e8,
                 (TSharedPtr<FDS_ViewModelContext,1> *)&local_198,false);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_1c0.DelegateAllocator);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_1e8.ObjectIndex = 0;
      local_1e8.ObjectSerialNumber = 0;
      local_1e0 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_1e8,(FObjectPtr)&local_1e0);
      uStack_1a0 = 0;
      local_1a8 = (FName)OnWidgetResize;
      iStack_19c = local_1c0.DelegateAllocator._4_4_;
      local_1c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_1c8 = (undefined1  [8])0x0;
      local_1c0.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1c8,
                 (FWriteAccessScope *)&local_198);
      local_180 = &local_1c0;
      puVar14 = UE::Core::Private::DelegateAllocate(0x38,&local_1c0);
      if (puVar14 != (undefined8 *)0x0) {
        *puVar14 = &
                   ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_UserWidget__UFWeakObjectPtr____U2___6B_
        ;
        *(FWeakObjectPtr *)(puVar14 + 1) = local_1e8;
        *(FWeakObjectPtr *)(puVar14 + 2) = local_res18;
        uVar15 = FDelegateHandle::GenerateNewID();
        puVar14[3] = uVar15;
        *puVar14 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Chat_TabSlot____A6AXXZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_UserWidget__UFWeakObjectPtr____U3___6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar14[4] = 0;
        local_1e0 = (UDS_UserWidget *)this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar14 + 4),(FObjectPtr)&local_1e0);
        *(FName *)(puVar14 + 5) = local_1a8;
        puVar14[6] = CONCAT44(iStack_19c,uStack_1a0);
      }
      if (local_198.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_198.Accessor,&local_198);
      }
      UDS_UserWidget::SetDelegateResize
                (param_1,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_1c8);
      return;
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar7 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_VM_Chat_TabSlot::OnChatTabTooltip",0x25,Yes);
    pwVar16 = L"InTargetWidget.IsValid() == false";
    uVar6 = 0x101;
  }
  UDS_LogManager::PrintLog(pUVar7,1,Warning,local_168.Ptr,uVar6,pwVar16);
  if ((void *)local_168._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_168._padding_);
  }
  return;
}

// OnClickChatTab @ 14bdcbc90

void __thiscall
UDS_VM_Chat_TabSlot::OnClickChatTab(UDS_VM_Chat_TabSlot *this,FDS_ButtonEventField *param_1)

{
  OnClickedChattingTabType
            (this,this->ChattingTabType,
             (TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)(this->HoverWidget).WeakPtr);
  return;
}

// OnClickedChattingTabType @ 14bdcd620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_TabSlot::OnClickedChattingTabType
          (UDS_VM_Chat_TabSlot *this,EDS_ChattingTabType param_1,
          TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> param_2)

{
  EDS_ChattingTabType EVar1;
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar2;
  int iVar3;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (this->ChattingTabType == param_1) {
    this_00 = UDS_ChattingManager::GetInst();
    if (this_00 == (UDS_ChattingManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_VM_Chat_TabSlot::OnClickedChattingTabType",0x2d,Yes);
        UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0xcd,L"chattingManager == nullptr");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      EVar1 = this->ChattingTabType;
      iVar3 = -1;
      (this->HoverWidget).WeakPtr = param_2.WeakPtr;
      if ((this_00->ChatStateData).ChattingTabType == EVar1) {
        iVar3 = (this_00->ChatStateData).SubTabIndex;
      }
      UDS_ChattingManager::SetChattingTabType(this_00,EVar1,iVar3);
      EVar1 = this->ChattingTabType;
      if ((EVar1 == Custom) || ((EVar1 < RaidParty && ((0x1240U >> (EVar1 & 0x1f) & 1) != 0)))) {
        OpenSubTabsPopup(this,&this->ChattingTabType);
      }
    }
  }
  return;
}

// OnMouseEnterChatTab @ 14bdd0250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_TabSlot::OnMouseEnterChatTab
          (UDS_VM_Chat_TabSlot *this,FDS_WidgetPointerEventField *param_1)

{
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  undefined1 auStackY_1e8 [32];
  uint uVar4;
  wchar_t *pwVar5;
  UDS_UserWidget *local_1b8 [2];
  code *local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined1 local_198 [8];
  FDelegateAllocation local_190;
  FDestructionSentinel local_180;
  FDelegateAllocation *local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_VM_Chat_TabSlot::OnMouseEnterChatTab",0x28,Yes);
    pwVar5 = L"windowManager == nullptr";
    uVar4 = 0x45;
  }
  else {
    local_1b8[0] = param_1->TargetWidget;
    if (local_1b8[0] != (UDS_UserWidget *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)local_1b8[0]);
      }
      FWeakObjectPtr::operator=(&(this->HoverWidget).WeakPtr,(FObjectPtr)local_1b8);
      local_1a8 = OnChatTabTooltip;
      uStack_1a0 = 0;
      local_198 = (undefined1  [8])0x0;
      local_190.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_190.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_198,
                 (FWriteAccessScope *)&local_180);
      local_168 = &local_190;
      puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_190);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_UserWidget__UFWeakObjectPtr______6B_
        ;
        *(FWeakObjectPtr *)(puVar2 + 1) = (this->HoverWidget).WeakPtr;
        uVar3 = FDelegateHandle::GenerateNewID();
        puVar2[2] = uVar3;
        *puVar2 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Chat_TabSlot____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_UserWidget__UFWeakObjectPtr______6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar2[3] = 0;
        local_1b8[0] = (UDS_UserWidget *)this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)local_1b8);
        puVar2[4] = local_1a8;
        puVar2[5] = CONCAT44(uStack_19c,uStack_1a0);
      }
      if (local_180.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_180.Accessor,&local_180);
      }
      UDS_WindowManager::OpenWindow
                (this_00,CommonTextTooltip,
                 (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)local_198);
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_VM_Chat_TabSlot::OnMouseEnterChatTab",0x28,Yes);
    pwVar5 = L"InEvent.TargetWidget == nullptr";
    uVar4 = 0x4b;
  }
  UDS_LogManager::PrintLog(pUVar1,1,Warning,local_158.Ptr,uVar4,pwVar5);
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  return;
}

// OnMouseLeaveChatTab @ 14bdd04b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_TabSlot::OnMouseLeaveChatTab
          (UDS_VM_Chat_TabSlot *this,FDS_WidgetPointerEventField *param_1)

{
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  float local_148;
  uint local_144 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  (this->HoverWidget).WeakPtr = (FWeakObjectPtr)0x0;
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Chat_TabSlot::OnMouseLeaveChatTab",0x28,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,99,L"windowManager == nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    local_148 = 0.0;
    local_144[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,CommonTextTooltip,local_144,&local_148);
  }
  return;
}

// OnOpenSubTabsPopup @ 14bdd09f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_TabSlot::OnOpenSubTabsPopup
          (UDS_VM_Chat_TabSlot *this,UDS_UserWidget *param_1,
          TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> param_2,EDS_ChattingTabType param_3)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  FDS_ViewModelContext_ChatTab *pFVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  undefined1 auStackY_208 [32];
  FWeakObjectPtr local_1d8;
  FWeakObjectPtr local_1d0;
  TSharedPtr<FDS_ViewModelContext_ChatTab,1> local_1c8;
  undefined1 local_1b8 [8];
  FDelegateAllocation local_1b0;
  UDS_UserWidget *local_1a0;
  UDS_UserWidget *local_198;
  UDS_VM_Chat_TabSlot *local_190;
  TSharedPtr<FDS_ViewModelContext,1> local_188;
  FDestructionSentinel local_178;
  FDelegateAllocation *local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_208;
  if (param_1 == (UDS_UserWidget *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_Chat_TabSlot::OnOpenSubTabsPopup",0x27,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_158.Ptr,0x124,L"InContentsWidget == nullptr");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    MakeContext<FDS_ViewModelContext_ChatTab>(&local_1c8);
    pFVar3 = local_1c8.Object;
    if (local_1c8.Object == (FDS_ViewModelContext_ChatTab *)0x0) {
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
    pTVar2 = (TReferenceControllerBase<1> *)
             CONCAT44(local_1c8.SharedReferenceCount.ReferenceController._4_4_,
                      local_1c8.SharedReferenceCount.ReferenceController._0_4_);
    local_188.Object = (FDS_ViewModelContext *)local_1c8.Object;
    *(undefined4 *)&pFVar3->_padding_ = 0x123;
    pFVar3->ChattingTabType = param_3;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_188.SharedReferenceCount.ReferenceController = pTVar2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_1d8.ObjectIndex = 0;
    local_1d8.ObjectSerialNumber = 0;
    local_1a0 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_1d8,(FObjectPtr)&local_1a0);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_1d8,&local_188,false);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_1d0.ObjectIndex = 0;
    local_1d0.ObjectSerialNumber = 0;
    local_198 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_1d0,(FObjectPtr)&local_198);
    local_1c8.SharedReferenceCount.ReferenceController._0_4_ = 0;
    local_1c8.Object = (FDS_ViewModelContext_ChatTab *)OnWidgetResize;
    local_1c8.SharedReferenceCount.ReferenceController._4_4_ =
         local_188.SharedReferenceCount.ReferenceController._4_4_;
    local_1b8 = (undefined1  [8])0x0;
    local_1b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_1b0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b8,
               (FWriteAccessScope *)&local_178);
    local_160 = &local_1b0;
    puVar6 = UE::Core::Private::DelegateAllocate(0x38,&local_1b0);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_UserWidget__UFWeakObjectPtr____U2___6B_
      ;
      *(FWeakObjectPtr *)(puVar6 + 1) = local_1d0;
      *(FWeakObjectPtr *)(puVar6 + 2) = param_2.WeakPtr;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[3] = uVar7;
      *puVar6 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Chat_TabSlot____A6AXXZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_UserWidget__UFWeakObjectPtr____U3___6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_Chat_TabSlot *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar6[4] = 0;
      local_190 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_Chat_TabSlot *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 4),(FObjectPtr)&local_190);
      puVar6[5] = local_1c8.Object;
      puVar6[6] = CONCAT44(local_1c8.SharedReferenceCount.ReferenceController._4_4_,
                           local_1c8.SharedReferenceCount.ReferenceController._0_4_);
    }
    if (local_178.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_178.Accessor,&local_178);
    }
    UDS_UserWidget::SetDelegateResize
              (param_1,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_1b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  return;
}

// OnSetViewModel @ 14bdd6590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_TabSlot::OnSetViewModel
          (UDS_VM_Chat_TabSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_188 [32];
  TSharedPtr<FDS_ViewModelContext_ChatTab,1> local_158;
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
  SafeCast<FDS_ViewModelContext_ChatTab>(&local_158,&local_148);
  if (local_158.Object == (FDS_ViewModelContext_ChatTab *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Chat_TabSlot::OnSetViewModel",0x23,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_138.Ptr,0x17,L"chatTabContext.IsValid() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if (local_158.Object == (FDS_ViewModelContext_ChatTab *)0x0) {
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
    this->ChattingTabType = (local_158.Object)->ChattingTabType;
    (this->HoverWidget).WeakPtr = (FWeakObjectPtr)0x0;
    UpdateChatTab(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdateMarkMessageAsRead @ 14bddfed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Chat_TabSlot::OnUpdateMarkMessageAsRead(UDS_VM_Chat_TabSlot *this)

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
                (&TStack_138,"UDS_VM_Chat_TabSlot::UpdateUnreadCount",0x26,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,TStack_138.Ptr,0xb3,L"chattingManager == nullptr");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  else {
    iVar2 = UDS_ChattingManager::GetUnreadCount(this_00,this->ChattingTabType,-1);
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

// OnWidgetResize @ 14bde1350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_TabSlot::OnWidgetResize
          (UDS_VM_Chat_TabSlot *this,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> param_1,
          TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> param_2)

{
  bool bVar1;
  EDS_ChatMode EVar2;
  UDS_LogManager *pUVar3;
  UDS_ChatEvent *pUVar4;
  UWidget *pUVar5;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  undefined1 auStackY_198 [32];
  uint uVar6;
  wchar_t *pwVar7;
  TVector2<double>_u_0 local_168;
  TVector2<double> local_158;
  TVector2<double> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_res10 = param_1.WeakPtr;
  local_res18[0] = param_2.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar1) {
    bVar1 = FWeakObjectPtr::IsValid(local_res18);
    if (bVar1) {
      pUVar4 = UDS_ChatEvent::GetEvent();
      if (pUVar4 == (UDS_ChatEvent *)0x0) {
        return;
      }
      EVar2 = FDS_QueryDelegate<enum_EDS_ChatMode_const_>::Query(&pUVar4->OnQueryChatMode);
      pUVar5 = (UWidget *)FWeakObjectPtr::Get(local_res18);
      UWidget::GetDesiredSize(pUVar5,&local_158);
      pUVar5 = (UWidget *)FWeakObjectPtr::Get(&local_res10);
      UWidget::GetDesiredSize(pUVar5,&local_148);
      local_168._s_0.Y = 0.0;
      local_168._s_0.X = __real_c050800000000000;
      if ((EVar2 != Simple) && ((EVar2 == Normal || (local_168._s_0.X = 0.0, EVar2 == Extended)))) {
        local_168._s_0.Y =
             (double)CONCAT44((uint)((ulonglong)
                                     (local_158.field0_0x0._s_0.Y - __real_4024000000000000) >> 0x20
                                    ) ^ __xmm_80000000000000008000000000000000._4_4_,
                              SUB84(local_158.field0_0x0._s_0.Y - __real_4024000000000000,0) ^
                              (uint)__xmm_80000000000000008000000000000000);
        local_168._s_0.X = __real_4018000000000000;
      }
      DS_Util::TransformTooltipPosition
                ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res18[0],
                 (TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res10,
                 (TVector2<double> *)&local_168._s_0,None);
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_Chat_TabSlot::OnWidgetResize",0x23,Yes);
    pwVar7 = L"InTargetWidget.IsValid() == false";
    uVar6 = 0x13a;
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_Chat_TabSlot::OnWidgetResize",0x23,Yes);
    pwVar7 = L"InContentsWidget.IsValid() == false";
    uVar6 = 0x134;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,uVar6,pwVar7);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// OpenSubTabsPopup @ 14bde1a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_TabSlot::OpenSubTabsPopup(UDS_VM_Chat_TabSlot *this,EDS_ChattingTabType *param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_WindowManager *this_00;
  undefined8 *puVar3;
  ulong64 uVar4;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar5;
  undefined1 auStackY_1f8 [32];
  undefined1 local_1c8 [8];
  FDelegateAllocation local_1c0;
  code *local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  bool local_198;
  UDS_VM_Chat_TabSlot *local_188;
  FDestructionSentinel local_180;
  FDelegateAllocation *local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  bVar1 = FWeakObjectPtr::IsValid(&(this->HoverWidget).WeakPtr);
  if (bVar1) {
    this_00 = UDS_WindowManager::GetInst();
    if (this_00 == (UDS_WindowManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_VM_Chat_TabSlot::OpenSubTabsPopup",0x25,Yes);
        UDS_LogManager::PrintLog(pUVar2,1,Warning,local_158.Ptr,0x118,L"windowManager == nullptr");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
    }
    else {
      local_1a8 = OnOpenSubTabsPopup;
      uStack_1a0 = 0;
      local_1c8 = (undefined1  [8])0x0;
      local_1c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_1c0.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1c8,
                 (FWriteAccessScope *)&local_180);
      local_168 = &local_1c0;
      puVar3 = UE::Core::Private::DelegateAllocate(0x38,&local_1c0);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_UserWidget__UFWeakObjectPtr____W4EDS_ChattingTabType____6B_
        ;
        *(FWeakObjectPtr *)(puVar3 + 1) = (this->HoverWidget).WeakPtr;
        *(EDS_ChattingTabType *)(puVar3 + 2) = *param_1;
        uVar4 = FDelegateHandle::GenerateNewID();
        puVar3[3] = uVar4;
        *puVar3 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Chat_TabSlot____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_UserWidget__UFWeakObjectPtr____W4EDS_ChattingTabType____6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar3[4] = 0;
        local_188 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 4),(FObjectPtr)&local_188);
        puVar3[5] = local_1a8;
        puVar3[6] = CONCAT44(uStack_19c,uStack_1a0);
      }
      if (local_180.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_180.Accessor,&local_180);
      }
      pTVar5 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
               TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                         ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                          &local_1a8,
                          (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                          local_1c8);
      UDS_WindowManager::OpenWindow(this_00,ChattingSubTabList,pTVar5);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1c8,
                 (FWriteAccessScope *)&local_1a8);
      if ((local_1c0.DelegateSize != 0) &&
         (local_1c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_1c0.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_1c0,0,0,0x10);
        local_1c0.DelegateSize = 0;
      }
      if (local_198 == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_19c,uStack_1a0),
                   (FDestructionSentinel *)&local_1a8);
      }
      if (local_1c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_1c0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_1c8);
    }
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_Chat_TabSlot::OpenSubTabsPopup",0x25,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_158.Ptr,0x111,L"HoverWidget.IsValid() == false");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  return;
}

// SetChatTabColor @ 14bde3c90

void __thiscall
UDS_VM_Chat_TabSlot::SetChatTabColor(UDS_VM_Chat_TabSlot *this,FLinearColor *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FName local_18;
  int local_10;
  
  if (((((param_1->field0_0x0)._s_0.R != (this->ChatTabColor).field0_0x0._s_0.R) ||
       ((param_1->field0_0x0)._s_0.G != (this->ChatTabColor).field0_0x0._s_0.G)) ||
      ((param_1->field0_0x0)._s_0.B != (this->ChatTabColor).field0_0x0._s_0.B)) ||
     ((param_1->field0_0x0)._s_0.A != (this->ChatTabColor).field0_0x0._s_0.A)) {
    fVar1 = (param_1->field0_0x0)._s_0.G;
    fVar2 = (param_1->field0_0x0)._s_0.B;
    fVar3 = (param_1->field0_0x0)._s_0.A;
    local_10 = FFieldNotificationClassDescriptor::ChatTabColor.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::ChatTabColor.FieldName;
    (this->ChatTabColor).field0_0x0._s_0.R = (param_1->field0_0x0)._s_0.R;
    (this->ChatTabColor).field0_0x0._s_0.G = fVar1;
    (this->ChatTabColor).field0_0x0._s_0.B = fVar2;
    (this->ChatTabColor).field0_0x0._s_0.A = fVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetChatTabIconID @ 14bde3d10

void __thiscall UDS_VM_Chat_TabSlot::SetChatTabIconID(UDS_VM_Chat_TabSlot *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::ChatTabIconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ChatTabIconID.FieldName;
  if (this->ChatTabIconID != param_1) {
    this->ChatTabIconID = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetChatTabText @ 14bde3d60

void __thiscall UDS_VM_Chat_TabSlot::SetChatTabText(UDS_VM_Chat_TabSlot *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::ChatTabText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::ChatTabText.FieldName;
  FDS_Text::operator=(&this->ChatTabText,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetSelectedTab @ 14bde8f60

void __thiscall UDS_VM_Chat_TabSlot::SetSelectedTab(UDS_VM_Chat_TabSlot *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bIsSelectedTab.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsSelectedTab.FieldName;
  if (this->bIsSelectedTab != param_1) {
    this->bIsSelectedTab = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetUnreadCount @ 14bde9bb0

void __thiscall UDS_VM_Chat_TabSlot::SetUnreadCount(UDS_VM_Chat_TabSlot *this,int param_1)

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

// SetUnreadCountVisibility @ 14bde9ca0

void __thiscall
UDS_VM_Chat_TabSlot::SetUnreadCountVisibility(UDS_VM_Chat_TabSlot *this,ESlateVisibility param_1)

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

// UnbindModel @ 14bdec370

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_Chat_TabSlot::UnbindModel(UDS_VM_Chat_TabSlot *this)

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
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnClickedChattingTabType,this);
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

// UpdateChatTab @ 14bdeef20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Chat_TabSlot::UpdateChatTab(UDS_VM_Chat_TabSlot *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar5;
  FName *pFVar6;
  undefined1 auStackY_368 [32];
  TSharedPtr<FDS_ChattingTabData,1> local_338;
  FLinearColor_u_0 local_328;
  FName local_318;
  int local_310;
  FName local_308;
  int local_300;
  FName local_2f8;
  int local_2f0;
  FName local_2e8;
  int local_2e0;
  FName local_2d8;
  int local_2d0;
  FName local_2c8;
  int local_2c0;
  FDS_Text local_2b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_368;
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_268._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_268,"UDS_VM_Chat_TabSlot::UpdateChatTab",0x22,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Warning,local_268.Ptr,0x8d,L"chattingManager == nullptr");
    if ((void *)local_268._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_268._padding_);
    return;
  }
  UDS_ChattingManager::GetChattingTabData(this_00,&local_338,this->ChattingTabType);
  if (local_338.Object == (FDS_ChattingTabData *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_Chat_TabSlot::UpdateChatTab",0x22,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_148.Ptr,0x94,L"chattingTabData.IsValid() == false");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    goto LAB_14bdef37f;
  }
  if ((local_338.Object == (FDS_ChattingTabData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (this->ChatTabNameID).ID = ((local_338.Object)->TabStringID).ID;
  UDS_ChattingManager::GetChattingTabColor
            (this_00,(FLinearColor *)&local_328._s_0,this->ChattingTabType,-1);
  if ((local_338.Object == (FDS_ChattingTabData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_2b8.StringTableType = None;
  local_2b8.StringTableID = 0;
  local_2b8.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_2b8.StringEnumTableNameID.Number = 0;
  local_2b8.DateTime.Ticks = 0;
  local_2b8.TimeSpan.Ticks = 0;
  local_2b8.TimeExpressionType = None;
  local_2b8.IsExpression = false;
  local_2b8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b8.UniqueString.Data.ArrayNum = 0;
  local_2b8.UniqueString.Data.ArrayMax = 0;
  local_2b8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b8.FormatArgs.ArrayNum = 0;
  local_2b8.FormatArgs.ArrayMax = 0;
  FDS_Text::SetTextFromStringID(&local_2b8,&(local_338.Object)->TabStringID);
  iVar3 = FFieldNotificationClassDescriptor::ChatTabText.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::ChatTabText.FieldName;
  FDS_Text::operator=(&this->ChatTabText,&local_2b8);
  local_318 = FVar2;
  local_310 = iVar3;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_318);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_2b8.FormatArgs.AllocatorInstance.Data,
             local_2b8.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_2b8.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
  {
    FMemory::Free(local_2b8.FormatArgs.AllocatorInstance.Data);
  }
  if (local_2b8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.UniqueString.Data.AllocatorInstance.Data);
  }
  if ((local_338.Object == (FDS_ChattingTabData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = FFieldNotificationClassDescriptor::ChatTabIconID.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::ChatTabIconID.FieldName;
  if (this->ChatTabIconID != (local_338.Object)->TabIconID) {
    this->ChatTabIconID = (local_338.Object)->TabIconID;
    local_300 = iVar3;
    local_308 = FVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_308);
  }
  if ((((local_328._s_0.R != (this->ChatTabColor).field0_0x0._s_0.R) ||
       (local_328._s_0.G != (this->ChatTabColor).field0_0x0._s_0.G)) ||
      (local_328._s_0.B != (this->ChatTabColor).field0_0x0._s_0.B)) ||
     (local_328._s_0.A != (this->ChatTabColor).field0_0x0._s_0.A)) {
    local_2f0 = FFieldNotificationClassDescriptor::ChatTabColor.BitNumber;
    local_2f8 = FFieldNotificationClassDescriptor::ChatTabColor.FieldName;
    (this->ChatTabColor).field0_0x0._s_0.R = local_328._s_0.R;
    (this->ChatTabColor).field0_0x0._s_0.G = local_328._s_0.G;
    (this->ChatTabColor).field0_0x0._s_0.B = local_328._s_0.B;
    (this->ChatTabColor).field0_0x0._s_0.A = local_328._s_0.A;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2f8);
  }
  iVar3 = FFieldNotificationClassDescriptor::bIsSelectedTab.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::bIsSelectedTab.FieldName;
  bVar4 = this->ChattingTabType == (this_00->ChatStateData).ChattingTabType;
  if (this->bIsSelectedTab != bVar4) {
    this->bIsSelectedTab = bVar4;
    local_2e8 = FVar2;
    local_2e0 = iVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2e8);
  }
  if ((local_338.Object == (FDS_ChattingTabData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar4 = FDS_ChattingTabData::IsShowChattingTab(local_338.Object);
  iVar3 = UDS_ViewModelBase::FFieldNotificationClassDescriptor::Visibility.BitNumber;
  FVar2 = UDS_ViewModelBase::FFieldNotificationClassDescriptor::Visibility.FieldName;
  if (bVar4) {
    if ((char)this->_padding_ != '\x04') {
      *(undefined1 *)&this->_padding_ = 4;
      pFVar6 = &local_2d8;
      local_2d8 = FVar2;
      local_2d0 = iVar3;
LAB_14bdef36c:
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar6);
    }
  }
  else if ((char)this->_padding_ != '\x01') {
    *(undefined1 *)&this->_padding_ = 1;
    pFVar6 = &local_2c8;
    local_2c8 = FVar2;
    local_2c0 = iVar3;
    goto LAB_14bdef36c;
  }
  UpdateUnreadCount(this);
LAB_14bdef37f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_338.SharedReferenceCount.ReferenceController);
  return;
}

// UpdateUnreadCount @ 14bdf9b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Chat_TabSlot::UpdateUnreadCount(UDS_VM_Chat_TabSlot *this)

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
                (&local_138,"UDS_VM_Chat_TabSlot::UpdateUnreadCount",0x26,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0xb3,L"chattingManager == nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    iVar2 = UDS_ChattingManager::GetUnreadCount(this_00,this->ChattingTabType,-1);
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

