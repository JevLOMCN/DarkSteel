// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// SetSelectTabIndex_WrapperImpl @ 14b724600

void __cdecl
UDS_VM_W_CharacterSubTabGroup::SetSelectTabIndex_WrapperImpl(void *param_1,void *param_2)

{
  SetSelectTabIndex(param_1,*(int *)param_2);
  return;
}

// SetClick_Equip_WrapperImpl @ 14b724610

void __cdecl UDS_VM_W_CharacterSubTabGroup::SetClick_Equip_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::SelectEquipButton.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::SelectEquipButton.FieldName;
  if (*(char *)((longlong)param_1 + 0xa6) != '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xa6) = 1;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  iStack_10 = FFieldNotificationClassDescriptor::SelectToolButton.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::SelectToolButton.FieldName;
  if (*(char *)((longlong)param_1 + 0xa7) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0xa7) = 0;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  iStack_10 = FFieldNotificationClassDescriptor::SelectTabIndex.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::SelectTabIndex.FieldName;
  if (*(int *)((longlong)param_1 + 0xa0) != 0) {
    *(undefined4 *)((longlong)param_1 + 0xa0) = 0;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetClick_Tool_WrapperImpl @ 14b724620

void __cdecl UDS_VM_W_CharacterSubTabGroup::SetClick_Tool_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::SelectEquipButton.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::SelectEquipButton.FieldName;
  if (*(char *)((longlong)param_1 + 0xa6) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0xa6) = 0;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  iStack_10 = FFieldNotificationClassDescriptor::SelectToolButton.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::SelectToolButton.FieldName;
  if (*(char *)((longlong)param_1 + 0xa7) != '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xa7) = 1;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  iStack_10 = FFieldNotificationClassDescriptor::SelectTabIndex.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::SelectTabIndex.FieldName;
  if (*(int *)((longlong)param_1 + 0xa0) != 1) {
    *(undefined4 *)((longlong)param_1 + 0xa0) = 1;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetSelectEquipButton_WrapperImpl @ 14b724630

void __cdecl
UDS_VM_W_CharacterSubTabGroup::SetSelectEquipButton_WrapperImpl(void *param_1,void *param_2)

{
  SetSelectEquipButton(param_1,*(bool *)param_2);
  return;
}

// SetSelectToolButton_WrapperImpl @ 14b724640

void __cdecl
UDS_VM_W_CharacterSubTabGroup::SetSelectToolButton_WrapperImpl(void *param_1,void *param_2)

{
  SetSelectToolButton(param_1,*(bool *)param_2);
  return;
}

// StaticClass @ 14b724650

UClass * __cdecl UDS_VM_W_CharacterSubTabGroup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_CharacterSubTabGroup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_CharacterSubTabGroup",
               &Z_Registration_Info_UClass_UDS_VM_W_CharacterSubTabGroup.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_CharacterSubTabGroup,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_CharacterSubTabGroup>,
               InternalVTableHelperCtorCaller<UDS_VM_W_CharacterSubTabGroup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_CharacterSubTabGroup.InnerSingleton;
}

// UDS_VM_W_CharacterSubTabGroup @ 14b727190

UDS_VM_W_CharacterSubTabGroup * __thiscall
UDS_VM_W_CharacterSubTabGroup::UDS_VM_W_CharacterSubTabGroup
          (UDS_VM_W_CharacterSubTabGroup *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->SelectTabIndex = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_CharacterSubTabGroup__6B_;
  this->SelectEquipButton = true;
  this->SelectToolButton = false;
  return this;
}

// UDS_VM_W_CharacterSubTabGroup @ 14b7271e0

UDS_VM_W_CharacterSubTabGroup * __thiscall
UDS_VM_W_CharacterSubTabGroup::UDS_VM_W_CharacterSubTabGroup
          (UDS_VM_W_CharacterSubTabGroup *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->SelectTabIndex = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_CharacterSubTabGroup__6B_;
  this->SelectEquipButton = true;
  this->SelectToolButton = false;
  return this;
}

// ~UDS_VM_W_CharacterSubTabGroup @ 14b728d80

void __thiscall
UDS_VM_W_CharacterSubTabGroup::~UDS_VM_W_CharacterSubTabGroup(UDS_VM_W_CharacterSubTabGroup *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_CharacterSubTabGroup__6B_;
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b72ace0

IClassDescriptor * __thiscall
UDS_VM_W_CharacterSubTabGroup::GetFieldNotificationDescriptor(UDS_VM_W_CharacterSubTabGroup *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_CharacterSubTabGroup::FFieldNotificationClassDescriptor::GetDescriptor'::__l2
             ::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b72b2e0

UClass * __cdecl UDS_VM_W_CharacterSubTabGroup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_CharacterSubTabGroup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_CharacterSubTabGroup",
               &Z_Registration_Info_UClass_UDS_VM_W_CharacterSubTabGroup.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_CharacterSubTabGroup,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_CharacterSubTabGroup>,
               InternalVTableHelperCtorCaller<UDS_VM_W_CharacterSubTabGroup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_CharacterSubTabGroup.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_CharacterSubTabGroup @ 14b72bdb0

void __cdecl UDS_VM_W_CharacterSubTabGroup::StaticRegisterNativesUDS_VM_W_CharacterSubTabGroup(void)

{
  return;
}

// OnClick_Equip @ 14bfbb020

void __thiscall
UDS_VM_W_CharacterSubTabGroup::OnClick_Equip
          (UDS_VM_W_CharacterSubTabGroup *this,FWidgetEventField *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::SelectEquipButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SelectEquipButton.FieldName;
  if (this->SelectEquipButton != true) {
    this->SelectEquipButton = true;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::SelectToolButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SelectToolButton.FieldName;
  if (this->SelectToolButton != false) {
    this->SelectToolButton = false;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::SelectTabIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SelectTabIndex.FieldName;
  if (this->SelectTabIndex != 0) {
    this->SelectTabIndex = 0;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnClick_Tool @ 14bfbb0f0

void __thiscall
UDS_VM_W_CharacterSubTabGroup::OnClick_Tool
          (UDS_VM_W_CharacterSubTabGroup *this,FWidgetEventField *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::SelectEquipButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SelectEquipButton.FieldName;
  if (this->SelectEquipButton != false) {
    this->SelectEquipButton = false;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::SelectToolButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SelectToolButton.FieldName;
  if (this->SelectToolButton != true) {
    this->SelectToolButton = true;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::SelectTabIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SelectTabIndex.FieldName;
  if (this->SelectTabIndex != 1) {
    this->SelectTabIndex = 1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetSelectEquipButton @ 14bfdd620

void __thiscall
UDS_VM_W_CharacterSubTabGroup::SetSelectEquipButton
          (UDS_VM_W_CharacterSubTabGroup *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::SelectEquipButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SelectEquipButton.FieldName;
  if (this->SelectEquipButton != param_1) {
    this->SelectEquipButton = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetSelectTabIndex @ 14bfdd670

void __thiscall
UDS_VM_W_CharacterSubTabGroup::SetSelectTabIndex(UDS_VM_W_CharacterSubTabGroup *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::SelectTabIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SelectTabIndex.FieldName;
  if (this->SelectTabIndex != param_1) {
    this->SelectTabIndex = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetSelectToolButton @ 14bfdd6c0

void __thiscall
UDS_VM_W_CharacterSubTabGroup::SetSelectToolButton(UDS_VM_W_CharacterSubTabGroup *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::SelectToolButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SelectToolButton.FieldName;
  if (this->SelectToolButton != param_1) {
    this->SelectToolButton = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

