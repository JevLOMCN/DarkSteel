// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// SetTabButtonEvent_WrapperImpl @ 14b6eecd0

void __cdecl
UDS_VM_TotalMenu_PlayerInfo_Tab::SetTabButtonEvent_WrapperImpl(void *param_1,void *param_2)

{
  UDS_TotalMenuEvent *pUVar1;
  
  pUVar1 = UDS_TotalMenuEvent::GetEvent();
  if (pUVar1 != (UDS_TotalMenuEvent *)0x0) {
    FDS_EventDelegate<FDS_ButtonEventField_const_&,int_const_&>::Broadcast
              (&pUVar1->OnClickPlayerInfoTab,param_2,(int *)((longlong)param_1 + 0x118));
  }
  return;
}

// SetbIsButtonSelected_WrapperImpl @ 14b6eece0

void __cdecl
UDS_VM_TotalMenu_PlayerInfo_Tab::SetbIsButtonSelected_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0xc0) = *(undefined1 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::bIsButtonSelected.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::bIsButtonSelected.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetTabName_WrapperImpl @ 14b6eecf0

void __cdecl UDS_VM_TotalMenu_PlayerInfo_Tab::SetTabName_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 200),param_2);
  iStack_10 = FFieldNotificationClassDescriptor::TabName.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::TabName.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// StaticClass @ 14b6eed00

UClass * __cdecl UDS_VM_TotalMenu_PlayerInfo_Tab::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_TotalMenu_PlayerInfo_Tab.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_TotalMenu_PlayerInfo_Tab",
               &Z_Registration_Info_UClass_UDS_VM_TotalMenu_PlayerInfo_Tab.InnerSingleton,
               StaticRegisterNativesUDS_VM_TotalMenu_PlayerInfo_Tab,0x120,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_TotalMenu_PlayerInfo_Tab>,
               InternalVTableHelperCtorCaller<UDS_VM_TotalMenu_PlayerInfo_Tab>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_TotalMenu_PlayerInfo_Tab.InnerSingleton;
}

// UDS_VM_TotalMenu_PlayerInfo_Tab @ 14b6f2dd0

UDS_VM_TotalMenu_PlayerInfo_Tab * __thiscall
UDS_VM_TotalMenu_PlayerInfo_Tab::UDS_VM_TotalMenu_PlayerInfo_Tab
          (UDS_VM_TotalMenu_PlayerInfo_Tab *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_TotalMenu_PlayerInfo_Tab__6B_;
  *(undefined8 *)&(this->TabButtonEvent).Delegate = 0;
  *(undefined8 *)&(this->TabButtonEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->TabButtonEvent).Delegate.field_0x10 = 0;
  (this->TabName).StringTableType = None;
  (this->TabName).StringTableID = 0;
  (this->TabName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TabName).StringEnumTableNameID.Number = 0;
  (this->TabName).DateTime.Ticks = 0;
  (this->TabName).TimeSpan.Ticks = 0;
  (this->TabName).TimeExpressionType = None;
  (this->TabName).IsExpression = false;
  (this->TabName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TabName).UniqueString.Data.ArrayNum = 0;
  (this->TabName).UniqueString.Data.ArrayMax = 0;
  (this->TabName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TabName).FormatArgs.ArrayNum = 0;
  (this->TabName).FormatArgs.ArrayMax = 0;
  (this->TabButtonEvent)._padding_ = '\0';
  (this->TabButtonEvent).bIsCustomSelected = false;
  (this->TabButtonEvent).bIsLacked = false;
  (this->TabButtonEvent).bIsCustomDisabled = false;
  return this;
}

// UDS_VM_TotalMenu_PlayerInfo_Tab @ 14b6f2e80

UDS_VM_TotalMenu_PlayerInfo_Tab * __thiscall
UDS_VM_TotalMenu_PlayerInfo_Tab::UDS_VM_TotalMenu_PlayerInfo_Tab
          (UDS_VM_TotalMenu_PlayerInfo_Tab *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_TotalMenu_PlayerInfo_Tab__6B_;
  *(undefined8 *)&(this->TabButtonEvent).Delegate = 0;
  *(undefined8 *)&(this->TabButtonEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->TabButtonEvent).Delegate.field_0x10 = 0;
  (this->TabName).StringTableType = None;
  (this->TabName).StringTableID = 0;
  (this->TabName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TabName).StringEnumTableNameID.Number = 0;
  (this->TabName).DateTime.Ticks = 0;
  (this->TabName).TimeSpan.Ticks = 0;
  (this->TabName).TimeExpressionType = None;
  (this->TabName).IsExpression = false;
  (this->TabName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TabName).UniqueString.Data.ArrayNum = 0;
  (this->TabName).UniqueString.Data.ArrayMax = 0;
  (this->TabName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TabName).FormatArgs.ArrayNum = 0;
  (this->TabName).FormatArgs.ArrayMax = 0;
  (this->TabButtonEvent)._padding_ = '\0';
  (this->TabButtonEvent).bIsCustomSelected = false;
  (this->TabButtonEvent).bIsLacked = false;
  (this->TabButtonEvent).bIsCustomDisabled = false;
  return this;
}

// ~UDS_VM_TotalMenu_PlayerInfo_Tab @ 14b6f46d0

void __thiscall
UDS_VM_TotalMenu_PlayerInfo_Tab::~UDS_VM_TotalMenu_PlayerInfo_Tab
          (UDS_VM_TotalMenu_PlayerInfo_Tab *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_TotalMenu_PlayerInfo_Tab__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TabName).FormatArgs.AllocatorInstance.Data,
             (this->TabName).FormatArgs.ArrayNum);
  pFVar1 = (this->TabName).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TabName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->TabButtonEvent).Delegate);
  pvVar2 = *(void **)&(this->TabButtonEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->TabButtonEvent).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6f6fc0

IClassDescriptor * __thiscall
UDS_VM_TotalMenu_PlayerInfo_Tab::GetFieldNotificationDescriptor
          (UDS_VM_TotalMenu_PlayerInfo_Tab *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_TotalMenu_PlayerInfo_Tab::FFieldNotificationClassDescriptor::GetDescriptor'::
             __l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6f7ba0

UClass * __cdecl UDS_VM_TotalMenu_PlayerInfo_Tab::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_TotalMenu_PlayerInfo_Tab.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_TotalMenu_PlayerInfo_Tab",
               &Z_Registration_Info_UClass_UDS_VM_TotalMenu_PlayerInfo_Tab.InnerSingleton,
               StaticRegisterNativesUDS_VM_TotalMenu_PlayerInfo_Tab,0x120,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_TotalMenu_PlayerInfo_Tab>,
               InternalVTableHelperCtorCaller<UDS_VM_TotalMenu_PlayerInfo_Tab>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_TotalMenu_PlayerInfo_Tab.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_TotalMenu_PlayerInfo_Tab @ 14b6f84d0

void __cdecl
UDS_VM_TotalMenu_PlayerInfo_Tab::StaticRegisterNativesUDS_VM_TotalMenu_PlayerInfo_Tab(void)

{
  return;
}

// BindModel @ 14bf42340

void __thiscall UDS_VM_TotalMenu_PlayerInfo_Tab::BindModel(UDS_VM_TotalMenu_PlayerInfo_Tab *this)

{
  UDS_TotalMenuEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_TotalMenuEvent::GetEvent();
  if (pUVar1 != (UDS_TotalMenuEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnClickPlayerInfoTab,
               this);
    TMulticastDelegateRegistration<void___cdecl(FDS_ButtonEventField_const_&,int_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_TotalMenu_PlayerInfo_Tab>
              ((TMulticastDelegateRegistration<void___cdecl(FDS_ButtonEventField_const_&,int_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar1->OnClickPlayerInfoTab,(UDS_VM_TotalMenu_PlayerInfo_Tab *)&stack0x00000010,
               (pmf_d96ce6a0 *)this);
  }
  return;
}

// OnClickPlayerInfoTabEvent @ 14bf624e0

void __thiscall
UDS_VM_TotalMenu_PlayerInfo_Tab::OnClickPlayerInfoTabEvent
          (UDS_VM_TotalMenu_PlayerInfo_Tab *this,FDS_ButtonEventField *param_1,int *param_2)

{
  bool bVar1;
  UDS_TotalMenuLocalSave *this_00;
  FWeakObjectPtr local_res8;
  FName local_18;
  int local_10;
  
  if (this->TabIndex == *param_2) {
    UDS_TotalMenuLocalSave::GetInst();
    bVar1 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar1) {
      this_00 = (UDS_TotalMenuLocalSave *)FWeakObjectPtr::Get(&local_res8);
      UDS_TotalMenuLocalSave::SetTabIndex(this_00,&this->TabIndex);
    }
  }
  this->bIsButtonSelected = this->TabIndex == *param_2;
  local_10 = FFieldNotificationClassDescriptor::bIsButtonSelected.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsButtonSelected.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnClickTab @ 14bf62dc0

void __thiscall
UDS_VM_TotalMenu_PlayerInfo_Tab::OnClickTab
          (UDS_VM_TotalMenu_PlayerInfo_Tab *this,FDS_ButtonEventField *param_1)

{
  UDS_TotalMenuEvent *pUVar1;
  
  pUVar1 = UDS_TotalMenuEvent::GetEvent();
  if (pUVar1 != (UDS_TotalMenuEvent *)0x0) {
    FDS_EventDelegate<FDS_ButtonEventField_const_&,int_const_&>::Broadcast
              (&pUVar1->OnClickPlayerInfoTab,param_1,&this->TabIndex);
  }
  return;
}

// OnSetViewModel @ 14bf6f1c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_TotalMenu_PlayerInfo_Tab::OnSetViewModel
          (UDS_VM_TotalMenu_PlayerInfo_Tab *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_208 [32];
  FName local_1d8;
  int local_1d0;
  FName local_1c8;
  int local_1c0;
  TSharedPtr<FDS_ViewModelContext_TotalMenuPlayerInfoTab,1> local_1b8;
  FDS_Text local_1a8;
  TSharedPtr<FDS_ViewModelContext,1> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_208;
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
  SafeCast<FDS_ViewModelContext_TotalMenuPlayerInfoTab>(&local_1b8,&local_158);
  if (local_1b8.Object == (FDS_ViewModelContext_TotalMenuPlayerInfoTab *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_TotalMenu_PlayerInfo_Tab::OnSetViewModel",0x2f,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_148.Ptr,0x15,
                 L"FDS_ViewModelContext_TotalMenuPlayerInfoTab is nullptr");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1b8.SharedReferenceCount.ReferenceController);
  }
  else {
    this->TabIndex = (local_1b8.Object)->TabIndex;
    local_1a8.StringTableID = 0;
    local_1a8.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_1a8.StringEnumTableNameID.Number = 0;
    local_1a8.TimeExpressionType = None;
    local_1a8.IsExpression = false;
    local_1a8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a8.UniqueString.Data.ArrayNum = 0;
    local_1a8.UniqueString.Data.ArrayMax = 0;
    local_1a8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a8.FormatArgs.ArrayNum = 0;
    local_1a8.FormatArgs.ArrayMax = 0;
    local_1a8.StringTableType = None;
    local_1a8.DateTime.Ticks = 0;
    local_1a8.TimeSpan.Ticks = 0;
    FDS_Text::SetTextFromStringTable(&local_1a8,StringUi,(local_1b8.Object)->TabNameStringUiID);
    FDS_Text::operator=(&this->TabName,&local_1a8);
    local_1d0 = FFieldNotificationClassDescriptor::TabName.BitNumber;
    local_1d8 = FFieldNotificationClassDescriptor::TabName.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1d8);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_1a8.FormatArgs.AllocatorInstance.Data,
               local_1a8.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_1a8.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(local_1a8.FormatArgs.AllocatorInstance.Data);
    }
    if (local_1a8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.UniqueString.Data.AllocatorInstance.Data);
    }
    this->bIsButtonSelected = (local_1b8.Object)->IsSelected;
    local_1c0 = FFieldNotificationClassDescriptor::bIsButtonSelected.BitNumber;
    local_1c8 = FFieldNotificationClassDescriptor::bIsButtonSelected.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1b8.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetTabName @ 14bf7e6a0

void __thiscall
UDS_VM_TotalMenu_PlayerInfo_Tab::SetTabName(UDS_VM_TotalMenu_PlayerInfo_Tab *this,FDS_Text *param_1)

{
  FName local_18;
  int local_10;
  
  FDS_Text::operator=(&this->TabName,param_1);
  local_10 = FFieldNotificationClassDescriptor::TabName.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TabName.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetbIsButtonSelected @ 14bf823e0

void __thiscall
UDS_VM_TotalMenu_PlayerInfo_Tab::SetbIsButtonSelected
          (UDS_VM_TotalMenu_PlayerInfo_Tab *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  this->bIsButtonSelected = *param_1;
  local_10 = FFieldNotificationClassDescriptor::bIsButtonSelected.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsButtonSelected.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14bf857b0

void __thiscall UDS_VM_TotalMenu_PlayerInfo_Tab::UnbindModel(UDS_VM_TotalMenu_PlayerInfo_Tab *this)

{
  UDS_TotalMenuEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_TotalMenuEvent::GetEvent();
  if (pUVar1 != (UDS_TotalMenuEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnClickPlayerInfoTab,
               this);
    return;
  }
  return;
}

