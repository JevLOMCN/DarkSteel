// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 27

// SetSelectedListItem_WrapperImpl @ 14b6359c0

void __cdecl UDS_VM_Dropdown::SetSelectedListItem_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0xa8),param_2);
  iStack_10 = FFieldNotificationClassDescriptor::SelectedListItem.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::SelectedListItem.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  if (*(UDS_VM_CommonIconTextButton **)((longlong)param_1 + 0xa0) !=
      (UDS_VM_CommonIconTextButton *)0x0) {
    UDS_VM_CommonIconTextButton::SetDSText
              (*(UDS_VM_CommonIconTextButton **)((longlong)param_1 + 0xa0),
               (FDS_Text *)((longlong)param_1 + 0xa8));
  }
  return;
}

// SetVisibleDropdownList_WrapperImpl @ 14b6359d0

void __cdecl UDS_VM_Dropdown::SetVisibleDropdownList_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::VisibleDropdownList.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::VisibleDropdownList.FieldName;
  if (*(char *)((longlong)param_1 + 0x250) == '\x01') {
    if (*(char *)((longlong)param_1 + 0xf8) != '\x01') {
      *(undefined1 *)((longlong)param_1 + 0xf8) = 1;
      (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
                ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
      return;
    }
  }
  else {
    if (*(char *)((longlong)param_1 + 0xf8) != *(char *)param_2) {
      *(char *)((longlong)param_1 + 0xf8) = *(char *)param_2;
      (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
                ((longlong)param_1 + 0x28,&FStack_18);
    }
    *(uint *)((longlong)param_1 + 0xfc) = (uint)(*(char *)((longlong)param_1 + 0xf8) != '\x01');
    iStack_10 = FFieldNotificationClassDescriptor::DropdownListSwitcherActiveIndex.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::DropdownListSwitcherActiveIndex.FieldName;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetVisibleDropdownListUpward_WrapperImpl @ 14b6359e0

void __cdecl UDS_VM_Dropdown::SetVisibleDropdownListUpward_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::VisibleDropdownListUpward.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::VisibleDropdownListUpward.FieldName;
  if (*(char *)((longlong)param_1 + 0x250) == '\x01') {
    if (*(char *)((longlong)param_1 + 0xf9) == *(char *)param_2) {
      return;
    }
    *(char *)((longlong)param_1 + 0xf9) = *(char *)param_2;
  }
  else {
    if (*(char *)((longlong)param_1 + 0xf9) == '\x01') {
      return;
    }
    *(undefined1 *)((longlong)param_1 + 0xf9) = 1;
  }
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
  return;
}

// SetVisibleDropdownButton_WrapperImpl @ 14b635a20

void __cdecl UDS_VM_Dropdown::SetVisibleDropdownButton_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0x100) = *(undefined1 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::VisibleDropdownButton.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::VisibleDropdownButton.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetOnHideDropdownListEvent_WrapperImpl @ 14b635a30

void __cdecl UDS_VM_Dropdown::SetOnHideDropdownListEvent_WrapperImpl(void *param_1,void *param_2)

{
  ESlateVisibility aEStackX_8 [32];
  FName FStack_18;
  int iStack_10;
  
  aEStackX_8[0] = Collapsed;
  SetVisibleDropdownList(param_1,aEStackX_8);
  FStack_18 = FFieldNotificationClassDescriptor::VisibleDropdownListUpward.FieldName;
  if (*(char *)((longlong)param_1 + 0xf9) != '\x01') {
    iStack_10 = FFieldNotificationClassDescriptor::VisibleDropdownListUpward.BitNumber;
    *(undefined1 *)((longlong)param_1 + 0xf9) = 1;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  return;
}

// SetEventMouseLeave_WrapperImpl @ 14b635a40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Dropdown::SetEventMouseLeave_WrapperImpl(void *param_1,void *param_2)

{
  UDS_WindowManager *this;
  float afStackX_18 [2];
  uint auStackX_20 [2];
  
  this = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this == (UDS_WindowManager *)0x0) {
      return;
    }
  }
  else {
    if (this == (UDS_WindowManager *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)this);
  }
  afStackX_18[0] = 0.0;
  auStackX_20[0] = 0;
  UDS_WindowManager::CloseWindow(this,ContextMenu,auStackX_20,afStackX_18);
  return;
}

// SetbOpenUpward_WrapperImpl @ 14b635a50

void __cdecl UDS_VM_Dropdown::SetbOpenUpward_WrapperImpl(void *param_1,void *param_2)

{
  SetOpenUpward(param_1,*(bool *)param_2);
  return;
}

// StaticClass @ 14b635a60

UClass * __cdecl UDS_VM_Dropdown::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Dropdown.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Dropdown",
               &Z_Registration_Info_UClass_UDS_VM_Dropdown.InnerSingleton,
               StaticRegisterNativesUDS_VM_Dropdown,0x280,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_VM_Dropdown>,InternalVTableHelperCtorCaller<UDS_VM_Dropdown>
               ,local_res8,UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Dropdown.InnerSingleton;
}

// UDS_VM_Dropdown @ 14b63a630

UDS_VM_Dropdown * __thiscall
UDS_VM_Dropdown::UDS_VM_Dropdown(UDS_VM_Dropdown *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->VisibleDropdownList = Collapsed;
  this->VisibleDropdownListUpward = Collapsed;
  this->DropdownListSwitcherActiveIndex = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->VMDropdownIconButton).field0_0x0.DebugPtr = (UDS_VM_CommonIconTextButton *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dropdown__6B_;
  (this->SelectedListItem).StringTableType = None;
  (this->SelectedListItem).StringTableID = 0;
  (this->SelectedListItem).StringEnumTableNameID.ComparisonIndex = 0;
  (this->SelectedListItem).StringEnumTableNameID.Number = 0;
  (this->SelectedListItem).DateTime.Ticks = 0;
  (this->SelectedListItem).TimeSpan.Ticks = 0;
  (this->SelectedListItem).TimeExpressionType = None;
  (this->SelectedListItem).IsExpression = false;
  (this->SelectedListItem).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->SelectedListItem).UniqueString.Data.ArrayNum = 0;
  (this->SelectedListItem).UniqueString.Data.ArrayMax = 0;
  (this->SelectedListItem).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SelectedListItem).FormatArgs.ArrayNum = 0;
  (this->SelectedListItem).FormatArgs.ArrayMax = 0;
  this->VisibleDropdownButton = Collapsed;
  (this->OnHideDropdownListEvent)._padding_ = '\0';
  (this->OnHideDropdownListEvent).bIsCustomSelected = false;
  (this->OnHideDropdownListEvent).bIsLacked = false;
  (this->OnHideDropdownListEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->OnHideDropdownListEvent).Delegate = 0;
  *(undefined8 *)&(this->OnHideDropdownListEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->OnHideDropdownListEvent).Delegate.field_0x10 = 0;
  (this->EntryBindingEvent).UserObjectList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EntryBindingEvent).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEvent).UserObjectList.ArrayMax = 0;
  (this->UpwardEntryBindingEvent).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->UpwardEntryBindingEvent).UserObjectList.ArrayNum = 0;
  (this->UpwardEntryBindingEvent).UserObjectList.ArrayMax = 0;
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->EventMouseLeave);
  this->bOpenUpward = false;
  (this->DropdownList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DropdownList).ArrayNum = 0;
  (this->DropdownList).ArrayMax = 0;
  *(undefined8 *)&this->OnClickListDelegate = 0;
  *(undefined8 *)&(this->OnClickListDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnClickListDelegate).field_0x10 = 0;
  return this;
}

// UDS_VM_Dropdown @ 14b63a750

UDS_VM_Dropdown * __thiscall
UDS_VM_Dropdown::UDS_VM_Dropdown(UDS_VM_Dropdown *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->VisibleDropdownList = Collapsed;
  this->VisibleDropdownListUpward = Collapsed;
  this->DropdownListSwitcherActiveIndex = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->VMDropdownIconButton).field0_0x0.DebugPtr = (UDS_VM_CommonIconTextButton *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dropdown__6B_;
  (this->SelectedListItem).StringTableType = None;
  (this->SelectedListItem).StringTableID = 0;
  (this->SelectedListItem).StringEnumTableNameID.ComparisonIndex = 0;
  (this->SelectedListItem).StringEnumTableNameID.Number = 0;
  (this->SelectedListItem).DateTime.Ticks = 0;
  (this->SelectedListItem).TimeSpan.Ticks = 0;
  (this->SelectedListItem).TimeExpressionType = None;
  (this->SelectedListItem).IsExpression = false;
  (this->SelectedListItem).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->SelectedListItem).UniqueString.Data.ArrayNum = 0;
  (this->SelectedListItem).UniqueString.Data.ArrayMax = 0;
  (this->SelectedListItem).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SelectedListItem).FormatArgs.ArrayNum = 0;
  (this->SelectedListItem).FormatArgs.ArrayMax = 0;
  this->VisibleDropdownButton = Collapsed;
  (this->OnHideDropdownListEvent)._padding_ = '\0';
  (this->OnHideDropdownListEvent).bIsCustomSelected = false;
  (this->OnHideDropdownListEvent).bIsLacked = false;
  (this->OnHideDropdownListEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->OnHideDropdownListEvent).Delegate = 0;
  *(undefined8 *)&(this->OnHideDropdownListEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->OnHideDropdownListEvent).Delegate.field_0x10 = 0;
  (this->EntryBindingEvent).UserObjectList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EntryBindingEvent).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEvent).UserObjectList.ArrayMax = 0;
  (this->UpwardEntryBindingEvent).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->UpwardEntryBindingEvent).UserObjectList.ArrayNum = 0;
  (this->UpwardEntryBindingEvent).UserObjectList.ArrayMax = 0;
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->EventMouseLeave);
  this->bOpenUpward = false;
  (this->DropdownList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DropdownList).ArrayNum = 0;
  (this->DropdownList).ArrayMax = 0;
  *(undefined8 *)&this->OnClickListDelegate = 0;
  *(undefined8 *)&(this->OnClickListDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnClickListDelegate).field_0x10 = 0;
  return this;
}

// ~UDS_VM_Dropdown @ 14b63c990

void __thiscall UDS_VM_Dropdown::~UDS_VM_Dropdown(UDS_VM_Dropdown *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dropdown__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnClickListDelegate);
  pvVar1 = *(void **)&(this->OnClickListDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClickListDelegate);
  DestructItems<FDS_Text,int>
            ((FDS_Text *)(this->DropdownList).AllocatorInstance.Data,(this->DropdownList).ArrayNum);
  pFVar2 = (this->DropdownList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FKeyEvent::~FKeyEvent(&(this->EventMouseLeave).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseLeave).PointerEvent);
  pFVar2 = (this->UpwardEntryBindingEvent).UserObjectList.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->EntryBindingEvent).UserObjectList.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->OnHideDropdownListEvent).Delegate)
  ;
  pvVar1 = *(void **)&(this->OnHideDropdownListEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->OnHideDropdownListEvent).Delegate);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->SelectedListItem).FormatArgs.AllocatorInstance.Data,
             (this->SelectedListItem).FormatArgs.ArrayNum);
  pFVar2 = (this->SelectedListItem).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SelectedListItem).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b63f3e0

IClassDescriptor * __thiscall UDS_VM_Dropdown::GetFieldNotificationDescriptor(UDS_VM_Dropdown *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Dropdown::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b63fd90

UClass * __cdecl UDS_VM_Dropdown::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Dropdown.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Dropdown",
               &Z_Registration_Info_UClass_UDS_VM_Dropdown.InnerSingleton,
               StaticRegisterNativesUDS_VM_Dropdown,0x280,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_VM_Dropdown>,InternalVTableHelperCtorCaller<UDS_VM_Dropdown>
               ,local_res8,UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Dropdown.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Dropdown @ 14b640ab0

void __cdecl UDS_VM_Dropdown::StaticRegisterNativesUDS_VM_Dropdown(void)

{
  return;
}

// InitViewModel @ 14bdc72b0

void __thiscall UDS_VM_Dropdown::InitViewModel(UDS_VM_Dropdown *this)

{
  UDS_VM_CommonIconTextButton *pUVar1;
  
  if ((this->VMDropdownIconButton).field0_0x0.DebugPtr == (UDS_VM_CommonIconTextButton *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_CommonIconTextButton>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_CommonIconTextButton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->VMDropdownIconButton).field0_0x0.DebugPtr = pUVar1;
  }
  return;
}

// OnClickCommonIconTextButton @ 14bdcbe70

void __thiscall
UDS_VM_Dropdown::OnClickCommonIconTextButton(UDS_VM_Dropdown *this,FDS_ButtonEventField *param_1)

{
  ESlateVisibility local_res8 [32];
  FName local_18;
  int local_10;
  
  local_res8[0] = this->VisibleDropdownList != Collapsed;
  SetVisibleDropdownList(this,local_res8);
  local_10 = FFieldNotificationClassDescriptor::VisibleDropdownListUpward.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibleDropdownListUpward.FieldName;
  if (this->VisibleDropdownListUpward == Collapsed) {
    if (this->bOpenUpward != true) {
      return;
    }
    this->VisibleDropdownListUpward = Visible;
  }
  else {
    this->VisibleDropdownListUpward = Collapsed;
  }
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnClickDropdown @ 14bdcc2f0

void __thiscall UDS_VM_Dropdown::OnClickDropdown(UDS_VM_Dropdown *this,int param_1)

{
  ESlateVisibility local_res8 [32];
  FName local_18;
  int local_10;
  
  local_res8[0] = this->VisibleDropdownList != Collapsed;
  SetVisibleDropdownList(this,local_res8);
  local_10 = FFieldNotificationClassDescriptor::VisibleDropdownListUpward.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibleDropdownListUpward.FieldName;
  if (this->VisibleDropdownListUpward == Collapsed) {
    if (this->bOpenUpward != true) {
      return;
    }
    this->VisibleDropdownListUpward = Visible;
  }
  else {
    this->VisibleDropdownListUpward = Collapsed;
  }
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnClickDropdownList @ 14bdcc380

void __thiscall UDS_VM_Dropdown::OnClickDropdownList(UDS_VM_Dropdown *this,int param_1)

{
  UDS_VM_CommonIconTextButton *this_00;
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  ESlateVisibility local_res10 [8];
  FName local_58;
  int local_50;
  FName local_48;
  int local_40;
  FName local_38;
  int local_30;
  FReadAccessScope local_28;
  
  if ((-1 < param_1) && (param_1 < (this->DropdownList).ArrayNum)) {
    if ((param_1 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FDS_Text::operator=(&this->SelectedListItem,
                        (FDS_Text *)
                        ((this->DropdownList).AllocatorInstance.Data + (longlong)param_1 * 0x50));
    local_50 = FFieldNotificationClassDescriptor::SelectedListItem.BitNumber;
    local_58 = FFieldNotificationClassDescriptor::SelectedListItem.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
    this_00 = (this->VMDropdownIconButton).field0_0x0.DebugPtr;
    if (this_00 != (UDS_VM_CommonIconTextButton *)0x0) {
      UDS_VM_CommonIconTextButton::SetDSText(this_00,&this->SelectedListItem);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnClickListDelegate,
               &local_28);
    if ((*(int *)&(this->OnClickListDelegate).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(this->OnClickListDelegate).field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    local_res10[0] = Collapsed;
    SetVisibleDropdownList(this,local_res10);
    if (this->bOpenUpward == true) {
      if (this->VisibleDropdownListUpward == Collapsed) {
        return;
      }
      local_48 = FFieldNotificationClassDescriptor::VisibleDropdownListUpward.FieldName;
      pFVar4 = &local_48;
      local_40 = FFieldNotificationClassDescriptor::VisibleDropdownListUpward.BitNumber;
    }
    else {
      if (this->VisibleDropdownListUpward == Collapsed) {
        return;
      }
      local_38 = FFieldNotificationClassDescriptor::VisibleDropdownListUpward.FieldName;
      pFVar4 = &local_38;
      local_30 = FFieldNotificationClassDescriptor::VisibleDropdownListUpward.BitNumber;
    }
    this->VisibleDropdownListUpward = Collapsed;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar4);
  }
  return;
}

// OnClickDropdownListCommonIconTextButton @ 14bdcc520

void __thiscall
UDS_VM_Dropdown::OnClickDropdownListCommonIconTextButton
          (UDS_VM_Dropdown *this,FDS_ButtonEventField *param_1,int param_2)

{
  UDS_VM_CommonIconTextButton *this_00;
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  ESlateVisibility local_res18 [8];
  FName local_58;
  int local_50;
  FName local_48;
  int local_40;
  FName local_38;
  int local_30;
  FReadAccessScope local_28;
  
  if ((-1 < param_2) && (param_2 < (this->DropdownList).ArrayNum)) {
    if ((param_2 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FDS_Text::operator=(&this->SelectedListItem,
                        (FDS_Text *)
                        ((this->DropdownList).AllocatorInstance.Data + (longlong)param_2 * 0x50));
    local_50 = FFieldNotificationClassDescriptor::SelectedListItem.BitNumber;
    local_58 = FFieldNotificationClassDescriptor::SelectedListItem.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
    this_00 = (this->VMDropdownIconButton).field0_0x0.DebugPtr;
    if (this_00 != (UDS_VM_CommonIconTextButton *)0x0) {
      UDS_VM_CommonIconTextButton::SetDSText(this_00,&this->SelectedListItem);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnClickListDelegate,
               &local_28);
    if ((*(int *)&(this->OnClickListDelegate).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(this->OnClickListDelegate).field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x68))(plVar1,param_2);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    local_res18[0] = Collapsed;
    SetVisibleDropdownList(this,local_res18);
    if (this->bOpenUpward == true) {
      if (this->VisibleDropdownListUpward == Collapsed) {
        return;
      }
      local_48 = FFieldNotificationClassDescriptor::VisibleDropdownListUpward.FieldName;
      pFVar4 = &local_48;
      local_40 = FFieldNotificationClassDescriptor::VisibleDropdownListUpward.BitNumber;
    }
    else {
      if (this->VisibleDropdownListUpward == Collapsed) {
        return;
      }
      local_38 = FFieldNotificationClassDescriptor::VisibleDropdownListUpward.FieldName;
      pFVar4 = &local_38;
      local_30 = FFieldNotificationClassDescriptor::VisibleDropdownListUpward.BitNumber;
    }
    this->VisibleDropdownListUpward = Collapsed;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar4);
  }
  return;
}

// OnEventMouseLeave @ 14bdce790

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Dropdown::OnEventMouseLeave(UDS_VM_Dropdown *this,FDS_WidgetPointerEventField *param_1)

{
  UDS_WindowManager *this_00;
  float local_res18 [2];
  uint local_res20 [2];
  
  this_00 = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_00 == (UDS_WindowManager *)0x0) {
      return;
    }
  }
  else {
    if (this_00 == (UDS_WindowManager *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  local_res18[0] = 0.0;
  local_res20[0] = 0;
  UDS_WindowManager::CloseWindow(this_00,ContextMenu,local_res20,local_res18);
  return;
}

// OnSetViewModel @ 14bddb080

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Dropdown::OnSetViewModel(UDS_VM_Dropdown *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int *piVar1;
  TArray<FDS_Text,TSizedDefaultAllocator<32>_> *pTVar2;
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *this_00;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  FDS_Text *pFVar5;
  longlong *plVar6;
  FScriptContainerElement *pFVar7;
  UDS_VM_CommonIconTextButton *this_01;
  code *pcVar8;
  ulonglong uVar9;
  FName FVar10;
  FDS_ViewModelContext_CommonIconTextButton *pFVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  undefined8 *puVar15;
  ulong64 uVar16;
  UDS_UserObjectListItem *pUVar17;
  UDS_WindowManager *this_02;
  UObject *pUVar18;
  FDS_EntryBindingEventField *this_03;
  TObjectPtr<UDS_UserObjectListItem>_u_0 TVar19;
  atomic<int> *paVar20;
  FSharedReferencer<1> FVar21;
  uint uVar22;
  TSharedPtr<FDS_ViewModelContext_Dropdown,1> local_1b8;
  undefined1 local_1a8 [8];
  ForAnyElementType local_1a0;
  int local_198;
  TSharedPtr<FDS_ViewModelContext_CommonIconTextButton,1> local_188;
  code *local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  TSharedPtr<FDS_ViewModelContext_CommonIconTextButton,1> local_168;
  FWeakObjectPtr local_158;
  UDS_VM_Dropdown *local_150;
  UDS_VM_Dropdown *local_148;
  UDS_UserObjectListItem *local_140;
  UDS_UserObjectListItem *local_138 [2];
  FName local_128;
  int local_120;
  FName local_118;
  int local_110;
  FName local_108;
  int local_100;
  FName local_f8;
  int local_f0;
  code *local_e8;
  undefined4 uStack_e0;
  uint uStack_dc;
  TSharedPtr<FDS_ViewModelContext,1> local_d8;
  TSharedPtr<FDS_ViewModelContext,1> local_c8;
  FDestructionSentinel local_b8;
  FDestructionSentinel local_a0;
  undefined1 *local_88;
  FDestructionSentinel local_80;
  undefined1 *local_68;
  FReadAccessScope local_60;
  
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  local_c8.Object = param_1->Object;
  local_c8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_Dropdown>(&local_1b8,&local_c8);
  if (local_1b8.Object != (FDS_ViewModelContext_Dropdown *)0x0) {
    if ((local_1b8.Object == (FDS_ViewModelContext_Dropdown *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (0 < ((local_1b8.Object)->DropdownList).ArrayNum) {
      pTVar2 = &this->DropdownList;
      if (pTVar2 != &(local_1b8.Object)->DropdownList) {
        DestructItems<FDS_Text,int>
                  ((FDS_Text *)(pTVar2->AllocatorInstance).Data,(this->DropdownList).ArrayNum);
        iVar3 = ((local_1b8.Object)->DropdownList).ArrayNum;
        piVar1 = &(this->DropdownList).ArrayMax;
        pFVar5 = (FDS_Text *)((local_1b8.Object)->DropdownList).AllocatorInstance.Data;
        (this->DropdownList).ArrayNum = iVar3;
        if ((iVar3 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x50,8,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
          ConstructItems<FDS_Text,FDS_Text,int>((pTVar2->AllocatorInstance).Data,pFVar5,iVar3);
        }
      }
      this_00 = &this->OnClickListDelegate;
      if (&(local_1b8.Object)->OnClickList != this_00) {
        local_1a8 = (undefined1  [8])0x0;
        local_1a0.Data = (FScriptContainerElement *)0x0;
        local_198 = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &(local_1b8.Object)->OnClickList,&local_60);
        if ((*(int *)&((local_1b8.Object)->OnClickList).field_0x10 != 0) &&
           (plVar6 = *(longlong **)&((local_1b8.Object)->OnClickList).field_0x8,
           plVar6 != (longlong *)0x0)) {
          (**(code **)(*plVar6 + 0x50))(plVar6,local_1a8);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_60);
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a8,
                   (FWriteAccessScope *)&local_b8);
        if ((local_198 != 0) && (local_1a0.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)local_1a0.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1a0,0,0,0x10);
          local_198 = 0;
        }
        if (local_b8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
        }
        if (local_1a0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a0.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_1a8);
      }
      FVar10 = FFieldNotificationClassDescriptor::bOpenUpward.FieldName;
      if (this->bOpenUpward != (local_1b8.Object)->bOpenUpward) {
        local_120 = FFieldNotificationClassDescriptor::bOpenUpward.BitNumber;
        this->bOpenUpward = (local_1b8.Object)->bOpenUpward;
        local_128 = FVar10;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_128);
      }
      FDS_EntryBindingEventField::Reset(&this->EntryBindingEvent);
      FDS_EntryBindingEventField::Reset(&this->UpwardEntryBindingEvent);
      if ((this->VMDropdownIconButton).field0_0x0.DebugPtr != (UDS_VM_CommonIconTextButton *)0x0) {
        MakeContext<FDS_ViewModelContext_CommonIconTextButton>(&local_188);
        pFVar11 = local_188.Object;
        if ((local_188.Object == (FDS_ViewModelContext_CommonIconTextButton *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        *(undefined4 *)&pFVar11->_padding_ = 0x15b;
        local_178 = OnClickCommonIconTextButton;
        uStack_16c = local_d8.SharedReferenceCount.ReferenceController._4_4_;
        uStack_170 = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &pFVar11->OnClickDelegate,(FWriteAccessScope *)&local_a0);
        local_88 = &(pFVar11->OnClickDelegate).field_0x8;
        puVar15 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_88);
        if (puVar15 != (undefined8 *)0x0) {
          *puVar15 = &
                     ___7__TCommonDelegateInstanceState___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar16 = FDelegateHandle::GenerateNewID();
          puVar15[2] = uVar16;
          *puVar15 = &
                     ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Dropdown____A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar15[3] = 0;
          local_150 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar15 + 3),(FObjectPtr)&local_150);
          puVar15[4] = local_178;
          puVar15[5] = CONCAT44(uStack_16c,uStack_170);
        }
        if (local_a0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
        }
        if ((local_1b8.Object == (FDS_ViewModelContext_Dropdown *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar22 = (local_1b8.Object)->DropdownIndex;
        if ((-1 < (int)uVar22) && ((int)uVar22 < (this->DropdownList).ArrayNum)) {
          uVar13 = 0;
          if ((int)uVar22 < (this->DropdownList).ArrayNum) {
            uVar13 = ~uVar22 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar7 = (pTVar2->AllocatorInstance).Data;
          if ((pFVar11 == (FDS_ViewModelContext_CommonIconTextButton *)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          FDS_Text::operator=(&pFVar11->DSText,(FDS_Text *)(pFVar7 + (longlong)(int)uVar22 * 0x50));
          if ((local_1b8.Object == (FDS_ViewModelContext_Dropdown *)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar22 = (local_1b8.Object)->DropdownIndex;
          uVar13 = 0;
          if ((int)uVar22 < (this->DropdownList).ArrayNum) {
            uVar13 = ~uVar22 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          FDS_Text::operator=(&this->SelectedListItem,
                              (FDS_Text *)
                              ((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar22 * 0x50));
          local_110 = FFieldNotificationClassDescriptor::SelectedListItem.BitNumber;
          local_118 = FFieldNotificationClassDescriptor::SelectedListItem.FieldName;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_118);
        }
        FVar21.ReferenceController = local_188.SharedReferenceCount.ReferenceController;
        this_01 = (this->VMDropdownIconButton).field0_0x0.DebugPtr;
        local_d8.Object = (FDS_ViewModelContext *)local_188.Object;
        local_d8.SharedReferenceCount.ReferenceController =
             local_188.SharedReferenceCount.ReferenceController;
        if (local_188.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_01,&local_d8);
        if ((local_1b8.Object == (FDS_ViewModelContext_Dropdown *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((local_1b8.Object)->bCallOnClickInSetViewMoel != false) {
          TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::ExecuteIfBound
                    (this_00,(local_1b8.Object)->DropdownIndex);
        }
        iVar3 = (this->DropdownList).ArrayNum;
        uVar22 = 0;
        if (0 < iVar3) {
          local_e8 = OnClickDropdownListCommonIconTextButton;
          uStack_dc = local_d8.SharedReferenceCount.ReferenceController._4_4_;
          uStack_e0 = 0;
          uVar9 = (ulonglong)local_d8.SharedReferenceCount.ReferenceController._4_4_;
          local_178 = (code *)0x0;
          do {
            pcVar8 = local_178;
            pUVar17 = NewObject<UDS_UserObjectListItem>((UObject *)this);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar17 != (UDS_UserObjectListItem *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar17);
            }
            MakeContext<FDS_ViewModelContext_CommonIconTextButton>(&local_168);
            pFVar11 = local_168.Object;
            if ((local_168.Object == (FDS_ViewModelContext_CommonIconTextButton *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            *(undefined4 *)&pFVar11->_padding_ = 0x15b;
            uVar13 = 0;
            if ((int)uVar22 < (this->DropdownList).ArrayNum) {
              uVar13 = ~uVar22 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar7 = (this->DropdownList).AllocatorInstance.Data;
            if ((pFVar11 == (FDS_ViewModelContext_CommonIconTextButton *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            FDS_Text::operator=(&pFVar11->DSText,(FDS_Text *)(pcVar8 + (longlong)pFVar7));
            if ((pFVar11 == (FDS_ViewModelContext_CommonIconTextButton *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &pFVar11->OnClickDelegate,(FWriteAccessScope *)&local_80);
            local_68 = &(pFVar11->OnClickDelegate).field_0x8;
            puVar15 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_68);
            if (puVar15 != (undefined8 *)0x0) {
              *puVar15 = &
                         ___7__TCommonDelegateInstanceState___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy__H__6B_
              ;
              *(uint *)(puVar15 + 1) = uVar22;
              uVar16 = FDelegateHandle::GenerateNewID();
              puVar15[2] = uVar16;
              *puVar15 = &
                         ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Dropdown____A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy__H__6B_
              ;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)this);
              }
              puVar15[3] = 0;
              local_148 = this;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)this);
              }
              FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar15 + 3),(FObjectPtr)&local_148);
              puVar15[4] = OnClickDropdownListCommonIconTextButton;
              puVar15[5] = uVar9 << 0x20;
            }
            if (local_80.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
            }
            FVar21.ReferenceController = local_168.SharedReferenceCount.ReferenceController;
            if (local_168.SharedReferenceCount.ReferenceController ==
                (TReferenceControllerBase<1> *)0x0) {
              paVar20 = (atomic<int> *)&DAT_00000008;
            }
            else {
              paVar20 = &(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
              LOCK();
              *paVar20 = (atomic<int>)((int)*paVar20 + 1);
              UNLOCK();
            }
            iVar14 = (pUVar17->ViewModelContextArray).ArrayNum;
            piVar1 = &(pUVar17->ViewModelContextArray).ArrayMax;
            if (iVar14 == *piVar1) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&(pUVar17->ViewModelContextArray).AllocatorInstance,piVar1);
            }
            (pUVar17->ViewModelContextArray).ArrayNum = iVar14 + 1;
            pFVar7 = (pUVar17->ViewModelContextArray).AllocatorInstance.Data;
            *(FDS_ViewModelContext_CommonIconTextButton **)(pFVar7 + (longlong)iVar14 * 0x10) =
                 pFVar11;
            *(TReferenceControllerBase<1> **)(pFVar7 + (longlong)iVar14 * 0x10 + 8) =
                 FVar21.ReferenceController;
            if (FVar21.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              *paVar20 = (atomic<int>)((int)*paVar20 + 1);
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar21.ReferenceController);
            if (this->bOpenUpward == true) {
              local_140 = pUVar17;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar17 != (UDS_UserObjectListItem *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)pUVar17);
              }
              TVar19.DebugPtr = (UDS_UserObjectListItem *)&local_140;
              this_03 = &this->UpwardEntryBindingEvent;
            }
            else {
              local_138[0] = pUVar17;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar17 != (UDS_UserObjectListItem *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)pUVar17);
              }
              TVar19.DebugPtr = (UDS_UserObjectListItem *)local_138;
              this_03 = &this->EntryBindingEvent;
            }
            FDS_EntryBindingEventField::Add(this_03,(TObjectPtr<UDS_UserObjectListItem>)TVar19);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar21.ReferenceController);
            uVar22 = uVar22 + 1;
            local_178 = local_178 + 0x50;
            FVar21.ReferenceController = local_188.SharedReferenceCount.ReferenceController;
          } while ((int)uVar22 < iVar3);
        }
        local_100 = FFieldNotificationClassDescriptor::EntryBindingEvent.BitNumber;
        local_108 = FFieldNotificationClassDescriptor::EntryBindingEvent.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_108);
        local_f0 = FFieldNotificationClassDescriptor::UpwardEntryBindingEvent.BitNumber;
        local_f8 = FFieldNotificationClassDescriptor::UpwardEntryBindingEvent.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_f8);
        this_02 = UDS_WindowManager::GetInst();
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (this_02 != (UDS_WindowManager *)0x0) goto LAB_14bddb9ab;
        }
        else if (this_02 != (UDS_WindowManager *)0x0) {
          UE::GC::MarkAsReachable((UObject *)this_02);
LAB_14bddb9ab:
          UDS_WindowManager::GetWindowInfo(this_02,(EDS_WindowWidget)&local_158);
          bVar12 = FWeakObjectPtr::IsValid(&local_158);
          if (bVar12) {
            pUVar18 = FWeakObjectPtr::Get(&local_158);
            pUVar18[6].field_0x10 = 0;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar21.ReferenceController);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1b8.SharedReferenceCount.ReferenceController);
      goto LAB_14bddba14;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b8.SharedReferenceCount.ReferenceController);
LAB_14bddba14:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetOnHideDropdownListEvent @ 14bde8170

void __thiscall
UDS_VM_Dropdown::SetOnHideDropdownListEvent(UDS_VM_Dropdown *this,FDS_ButtonEventField *param_1)

{
  ESlateVisibility local_res8 [32];
  FName local_18;
  int local_10;
  
  local_res8[0] = Collapsed;
  SetVisibleDropdownList(this,local_res8);
  local_18 = FFieldNotificationClassDescriptor::VisibleDropdownListUpward.FieldName;
  if (this->VisibleDropdownListUpward != Collapsed) {
    local_10 = FFieldNotificationClassDescriptor::VisibleDropdownListUpward.BitNumber;
    this->VisibleDropdownListUpward = Collapsed;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetOpenUpward @ 14bde81d0

void __thiscall UDS_VM_Dropdown::SetOpenUpward(UDS_VM_Dropdown *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bOpenUpward.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bOpenUpward.FieldName;
  if (this->bOpenUpward != param_1) {
    this->bOpenUpward = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetSelectedListItem @ 14bde8e50

void __thiscall UDS_VM_Dropdown::SetSelectedListItem(UDS_VM_Dropdown *this,FDS_Text *param_1)

{
  UDS_VM_CommonIconTextButton *this_00;
  FName local_18;
  int local_10;
  
  FDS_Text::operator=(&this->SelectedListItem,param_1);
  local_10 = FFieldNotificationClassDescriptor::SelectedListItem.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SelectedListItem.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this_00 = (this->VMDropdownIconButton).field0_0x0.DebugPtr;
  if (this_00 != (UDS_VM_CommonIconTextButton *)0x0) {
    UDS_VM_CommonIconTextButton::SetDSText(this_00,&this->SelectedListItem);
  }
  return;
}

// SetVisibleDropdownButton @ 14bdea3f0

void __thiscall
UDS_VM_Dropdown::SetVisibleDropdownButton(UDS_VM_Dropdown *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  this->VisibleDropdownButton = *param_1;
  local_10 = FFieldNotificationClassDescriptor::VisibleDropdownButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibleDropdownButton.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetVisibleDropdownList @ 14bdea430

void __thiscall
UDS_VM_Dropdown::SetVisibleDropdownList(UDS_VM_Dropdown *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::VisibleDropdownList.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibleDropdownList.FieldName;
  if (this->bOpenUpward == true) {
    if (this->VisibleDropdownList != Collapsed) {
      this->VisibleDropdownList = Collapsed;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      return;
    }
  }
  else {
    if (this->VisibleDropdownList != *param_1) {
      this->VisibleDropdownList = *param_1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    this->DropdownListSwitcherActiveIndex = (uint)(this->VisibleDropdownList != Collapsed);
    local_10 = FFieldNotificationClassDescriptor::DropdownListSwitcherActiveIndex.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::DropdownListSwitcherActiveIndex.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVisibleDropdownListUpward @ 14bdea510

void __thiscall
UDS_VM_Dropdown::SetVisibleDropdownListUpward(UDS_VM_Dropdown *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::VisibleDropdownListUpward.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibleDropdownListUpward.FieldName;
  if (this->bOpenUpward == true) {
    if (this->VisibleDropdownListUpward == *param_1) {
      return;
    }
    this->VisibleDropdownListUpward = *param_1;
  }
  else {
    if (this->VisibleDropdownListUpward == Collapsed) {
      return;
    }
    this->VisibleDropdownListUpward = Collapsed;
  }
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

