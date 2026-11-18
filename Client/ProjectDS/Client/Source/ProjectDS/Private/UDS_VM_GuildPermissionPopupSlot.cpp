// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 28

// SetCheckBox_Master_WrapperImpl @ 14b659ef0

void __cdecl
UDS_VM_GuildPermissionPopupSlot::SetCheckBox_Master_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  if (*(char *)param_2 == '\0') {
    *(undefined1 *)((longlong)param_1 + 0xa0) = *(undefined1 *)((longlong)param_1 + 0xa0);
    iStack_10 = FFieldNotificationClassDescriptor::IsMaster.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::IsMaster.FieldName;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28);
    return;
  }
  *(undefined4 *)((longlong)param_1 + 0x100) = 1;
  *(undefined1 *)((longlong)param_1 + 0xa0) = 1;
  iStack_10 = FFieldNotificationClassDescriptor::IsMaster.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsMaster.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
  *(undefined1 *)((longlong)param_1 + 0xa1) = 0;
  iStack_10 = FFieldNotificationClassDescriptor::IsSubMaster.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsSubMaster.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
  *(undefined1 *)((longlong)param_1 + 0xa2) = 0;
  iStack_10 = FFieldNotificationClassDescriptor::IsManager.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsManager.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
  *(undefined1 *)((longlong)param_1 + 0xa3) = 0;
  iStack_10 = FFieldNotificationClassDescriptor::IsNormal.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsNormal.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
  *(undefined1 *)((longlong)param_1 + 0xa4) = 0;
  iStack_10 = FFieldNotificationClassDescriptor::IsNewbie.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsNewbie.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
  return;
}

// SetCheckBox_SubMaster_WrapperImpl @ 14b659f00

void __cdecl
UDS_VM_GuildPermissionPopupSlot::SetCheckBox_SubMaster_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  if (*(char *)param_2 == '\0') {
    *(undefined1 *)((longlong)param_1 + 0xa1) = *(undefined1 *)((longlong)param_1 + 0xa1);
    iStack_10 = FFieldNotificationClassDescriptor::IsSubMaster.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::IsSubMaster.FieldName;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28);
    return;
  }
  *(undefined4 *)((longlong)param_1 + 0x100) = 2;
  *(undefined1 *)((longlong)param_1 + 0xa0) = 0;
  iStack_10 = FFieldNotificationClassDescriptor::IsMaster.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsMaster.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
  *(undefined1 *)((longlong)param_1 + 0xa1) = 1;
  iStack_10 = FFieldNotificationClassDescriptor::IsSubMaster.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsSubMaster.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
  *(undefined1 *)((longlong)param_1 + 0xa2) = 0;
  iStack_10 = FFieldNotificationClassDescriptor::IsManager.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsManager.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
  *(undefined1 *)((longlong)param_1 + 0xa3) = 0;
  iStack_10 = FFieldNotificationClassDescriptor::IsNormal.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsNormal.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
  *(undefined1 *)((longlong)param_1 + 0xa4) = 0;
  iStack_10 = FFieldNotificationClassDescriptor::IsNewbie.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsNewbie.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
  return;
}

// SetCheckBox_Manager_WrapperImpl @ 14b659f10

void __cdecl
UDS_VM_GuildPermissionPopupSlot::SetCheckBox_Manager_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  if (*(char *)param_2 == '\0') {
    *(undefined1 *)((longlong)param_1 + 0xa2) = *(undefined1 *)((longlong)param_1 + 0xa2);
    iStack_10 = FFieldNotificationClassDescriptor::IsManager.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::IsManager.FieldName;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28);
    return;
  }
  *(undefined4 *)((longlong)param_1 + 0x100) = 3;
  *(undefined1 *)((longlong)param_1 + 0xa0) = 0;
  iStack_10 = FFieldNotificationClassDescriptor::IsMaster.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsMaster.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
  *(undefined1 *)((longlong)param_1 + 0xa1) = 0;
  iStack_10 = FFieldNotificationClassDescriptor::IsSubMaster.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsSubMaster.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
  *(undefined1 *)((longlong)param_1 + 0xa2) = 1;
  iStack_10 = FFieldNotificationClassDescriptor::IsManager.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsManager.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
  *(undefined1 *)((longlong)param_1 + 0xa3) = 0;
  iStack_10 = FFieldNotificationClassDescriptor::IsNormal.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsNormal.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
  *(undefined1 *)((longlong)param_1 + 0xa4) = 0;
  iStack_10 = FFieldNotificationClassDescriptor::IsNewbie.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsNewbie.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
  return;
}

// SetCheckBox_Normal_WrapperImpl @ 14b659f20

void __cdecl
UDS_VM_GuildPermissionPopupSlot::SetCheckBox_Normal_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  if (*(char *)param_2 == '\0') {
    *(undefined1 *)((longlong)param_1 + 0xa3) = *(undefined1 *)((longlong)param_1 + 0xa3);
    iStack_10 = FFieldNotificationClassDescriptor::IsNormal.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::IsNormal.FieldName;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28);
    return;
  }
  *(undefined4 *)((longlong)param_1 + 0x100) = 4;
  *(undefined1 *)((longlong)param_1 + 0xa0) = 0;
  iStack_10 = FFieldNotificationClassDescriptor::IsMaster.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsMaster.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
  *(undefined1 *)((longlong)param_1 + 0xa1) = 0;
  iStack_10 = FFieldNotificationClassDescriptor::IsSubMaster.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsSubMaster.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
  *(undefined1 *)((longlong)param_1 + 0xa2) = 0;
  iStack_10 = FFieldNotificationClassDescriptor::IsManager.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsManager.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
  *(undefined1 *)((longlong)param_1 + 0xa3) = 1;
  iStack_10 = FFieldNotificationClassDescriptor::IsNormal.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsNormal.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
  *(undefined1 *)((longlong)param_1 + 0xa4) = 0;
  iStack_10 = FFieldNotificationClassDescriptor::IsNewbie.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsNewbie.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_18)
  ;
  return;
}

// SetCheckBox_Newbie_WrapperImpl @ 14b659f30

void __cdecl
UDS_VM_GuildPermissionPopupSlot::SetCheckBox_Newbie_WrapperImpl(void *param_1,void *param_2)

{
  longlong lVar1;
  FName FStack_18;
  int iStack_10;
  
  if (*(char *)param_2 == '\0') {
    *(undefined1 *)((longlong)param_1 + 0xa4) = *(undefined1 *)((longlong)param_1 + 0xa4);
    lVar1 = *(longlong *)((longlong)param_1 + 0x28);
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0x100) = 5;
    *(undefined1 *)((longlong)param_1 + 0xa0) = 0;
    iStack_10 = FFieldNotificationClassDescriptor::IsMaster.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::IsMaster.FieldName;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
    *(undefined1 *)((longlong)param_1 + 0xa1) = 0;
    iStack_10 = FFieldNotificationClassDescriptor::IsSubMaster.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::IsSubMaster.FieldName;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
    *(undefined1 *)((longlong)param_1 + 0xa2) = 0;
    iStack_10 = FFieldNotificationClassDescriptor::IsManager.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::IsManager.FieldName;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
    *(undefined1 *)((longlong)param_1 + 0xa3) = 0;
    iStack_10 = FFieldNotificationClassDescriptor::IsNormal.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::IsNormal.FieldName;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
    *(undefined1 *)((longlong)param_1 + 0xa4) = 1;
    lVar1 = *(longlong *)((longlong)param_1 + 0x28);
  }
  FStack_18 = FFieldNotificationClassDescriptor::IsNewbie.FieldName;
  iStack_10 = FFieldNotificationClassDescriptor::IsNewbie.BitNumber;
  (**(code **)(lVar1 + 0x38))((longlong)param_1 + 0x28,&FStack_18);
  return;
}

// StaticClass @ 14b659f40

UClass * __cdecl UDS_VM_GuildPermissionPopupSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildPermissionPopupSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildPermissionPopupSlot",
               &Z_Registration_Info_UClass_UDS_VM_GuildPermissionPopupSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildPermissionPopupSlot,0x108,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_GuildPermissionPopupSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildPermissionPopupSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildPermissionPopupSlot.InnerSingleton;
}

// UDS_VM_GuildPermissionPopupSlot @ 14b660830

UDS_VM_GuildPermissionPopupSlot * __thiscall
UDS_VM_GuildPermissionPopupSlot::UDS_VM_GuildPermissionPopupSlot
          (UDS_VM_GuildPermissionPopupSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildPermissionPopupSlot__6B_;
  (this->Txt_Title).StringTableID = 0;
  (this->Txt_Title).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Txt_Title).StringEnumTableNameID.Number = 0;
  (this->Txt_Title).DateTime.Ticks = 0;
  (this->Txt_Title).TimeSpan.Ticks = 0;
  (this->Txt_Title).TimeExpressionType = None;
  (this->Txt_Title).IsExpression = false;
  (this->Txt_Title).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_Title).UniqueString.Data.ArrayNum = 0;
  (this->Txt_Title).UniqueString.Data.ArrayMax = 0;
  (this->Txt_Title).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_Title).FormatArgs.ArrayNum = 0;
  (this->Txt_Title).FormatArgs.ArrayMax = 0;
  this->CheckBox_Master = false;
  this->CheckBox_SubMaster = false;
  this->CheckBox_Manager = false;
  this->CheckBox_Normal = false;
  (this->CheckBox_Newbie).bIsActivate = false;
  (this->Txt_Title).StringTableType = None;
  return this;
}

// UDS_VM_GuildPermissionPopupSlot @ 14b6608d0

UDS_VM_GuildPermissionPopupSlot * __thiscall
UDS_VM_GuildPermissionPopupSlot::UDS_VM_GuildPermissionPopupSlot
          (UDS_VM_GuildPermissionPopupSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildPermissionPopupSlot__6B_;
  (this->Txt_Title).StringTableID = 0;
  (this->Txt_Title).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Txt_Title).StringEnumTableNameID.Number = 0;
  (this->Txt_Title).DateTime.Ticks = 0;
  (this->Txt_Title).TimeSpan.Ticks = 0;
  (this->Txt_Title).TimeExpressionType = None;
  (this->Txt_Title).IsExpression = false;
  (this->Txt_Title).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_Title).UniqueString.Data.ArrayNum = 0;
  (this->Txt_Title).UniqueString.Data.ArrayMax = 0;
  (this->Txt_Title).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_Title).FormatArgs.ArrayNum = 0;
  (this->Txt_Title).FormatArgs.ArrayMax = 0;
  this->CheckBox_Master = false;
  this->CheckBox_SubMaster = false;
  this->CheckBox_Manager = false;
  this->CheckBox_Normal = false;
  (this->CheckBox_Newbie).bIsActivate = false;
  (this->Txt_Title).StringTableType = None;
  return this;
}

// ~UDS_VM_GuildPermissionPopupSlot @ 14b662790

void __thiscall
UDS_VM_GuildPermissionPopupSlot::~UDS_VM_GuildPermissionPopupSlot
          (UDS_VM_GuildPermissionPopupSlot *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildPermissionPopupSlot__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Txt_Title).FormatArgs.AllocatorInstance.Data,
             (this->Txt_Title).FormatArgs.ArrayNum);
  pFVar1 = (this->Txt_Title).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Txt_Title).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b664880

IClassDescriptor * __thiscall
UDS_VM_GuildPermissionPopupSlot::GetFieldNotificationDescriptor
          (UDS_VM_GuildPermissionPopupSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_GuildPermissionPopupSlot::FFieldNotificationClassDescriptor::GetDescriptor'::
             __l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b665260

UClass * __cdecl UDS_VM_GuildPermissionPopupSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildPermissionPopupSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildPermissionPopupSlot",
               &Z_Registration_Info_UClass_UDS_VM_GuildPermissionPopupSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildPermissionPopupSlot,0x108,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_GuildPermissionPopupSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildPermissionPopupSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildPermissionPopupSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_GuildPermissionPopupSlot @ 14b6654a0

void __cdecl
UDS_VM_GuildPermissionPopupSlot::StaticRegisterNativesUDS_VM_GuildPermissionPopupSlot(void)

{
  return;
}

// BindModel @ 14be75ff0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_GuildPermissionPopupSlot::BindModel(UDS_VM_GuildPermissionPopupSlot *this)

{
  UDS_LanguageManager *pUVar1;
  
  if ((0 < (int)this->_padding_) &&
     (pUVar1 = UDS_LanguageManager::GetInst(), pUVar1 != (UDS_LanguageManager *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_ViewModelBase>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnLanguageChanged,(UDS_ViewModelBase *)&stack0x00000008,(pmf_620f4446 *)this
              );
  }
  return;
}

// InitViewModel @ 14be8cd00

void __thiscall
UDS_VM_GuildPermissionPopupSlot::InitViewModel(UDS_VM_GuildPermissionPopupSlot *this)

{
  return;
}

// OnCheckBox_Manager @ 14be920c0

void __thiscall
UDS_VM_GuildPermissionPopupSlot::OnCheckBox_Manager
          (UDS_VM_GuildPermissionPopupSlot *this,FDS_WidgetEventField *param_1)

{
  FName local_18;
  int local_10;
  
  if (param_1->bIsActivate == false) {
    this->IsManager = this->IsManager;
    local_10 = FFieldNotificationClassDescriptor::IsManager.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::IsManager.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_);
    return;
  }
  this->MemberGrade = GuildMemberGradeType_Manager;
  this->IsMaster = false;
  local_10 = FFieldNotificationClassDescriptor::IsMaster.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsMaster.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->IsSubMaster = false;
  local_10 = FFieldNotificationClassDescriptor::IsSubMaster.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsSubMaster.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->IsManager = true;
  local_10 = FFieldNotificationClassDescriptor::IsManager.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsManager.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->IsNormal = false;
  local_10 = FFieldNotificationClassDescriptor::IsNormal.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsNormal.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->IsNewbie = false;
  local_10 = FFieldNotificationClassDescriptor::IsNewbie.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsNewbie.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnCheckBox_Master @ 14be92380

void __thiscall
UDS_VM_GuildPermissionPopupSlot::OnCheckBox_Master
          (UDS_VM_GuildPermissionPopupSlot *this,FDS_WidgetEventField *param_1)

{
  FName local_18;
  int local_10;
  
  if (param_1->bIsActivate == false) {
    this->IsMaster = this->IsMaster;
    local_10 = FFieldNotificationClassDescriptor::IsMaster.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::IsMaster.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_);
    return;
  }
  this->MemberGrade = GuildMemberGradeType_Master;
  this->IsMaster = true;
  local_10 = FFieldNotificationClassDescriptor::IsMaster.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsMaster.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->IsSubMaster = false;
  local_10 = FFieldNotificationClassDescriptor::IsSubMaster.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsSubMaster.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->IsManager = false;
  local_10 = FFieldNotificationClassDescriptor::IsManager.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsManager.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->IsNormal = false;
  local_10 = FFieldNotificationClassDescriptor::IsNormal.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsNormal.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->IsNewbie = false;
  local_10 = FFieldNotificationClassDescriptor::IsNewbie.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsNewbie.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnCheckBox_Newbie @ 14be92620

void __thiscall
UDS_VM_GuildPermissionPopupSlot::OnCheckBox_Newbie
          (UDS_VM_GuildPermissionPopupSlot *this,FDS_WidgetEventField *param_1)

{
  longlong lVar1;
  FName local_18;
  int local_10;
  
  if (param_1->bIsActivate == false) {
    this->IsNewbie = this->IsNewbie;
    lVar1 = this->_padding_;
  }
  else {
    this->MemberGrade = GuildMemberGradeType_Newcomer;
    this->IsMaster = false;
    local_10 = FFieldNotificationClassDescriptor::IsMaster.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::IsMaster.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    this->IsSubMaster = false;
    local_10 = FFieldNotificationClassDescriptor::IsSubMaster.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::IsSubMaster.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    this->IsManager = false;
    local_10 = FFieldNotificationClassDescriptor::IsManager.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::IsManager.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    this->IsNormal = false;
    local_10 = FFieldNotificationClassDescriptor::IsNormal.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::IsNormal.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    this->IsNewbie = true;
    lVar1 = this->_padding_;
  }
  local_18 = FFieldNotificationClassDescriptor::IsNewbie.FieldName;
  local_10 = FFieldNotificationClassDescriptor::IsNewbie.BitNumber;
  (**(code **)(lVar1 + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnCheckBox_Normal @ 14be928c0

void __thiscall
UDS_VM_GuildPermissionPopupSlot::OnCheckBox_Normal
          (UDS_VM_GuildPermissionPopupSlot *this,FDS_WidgetEventField *param_1)

{
  FName local_18;
  int local_10;
  
  if (param_1->bIsActivate == false) {
    this->IsNormal = this->IsNormal;
    local_10 = FFieldNotificationClassDescriptor::IsNormal.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::IsNormal.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_);
    return;
  }
  this->MemberGrade = GuildMemberGradeType_Member;
  this->IsMaster = false;
  local_10 = FFieldNotificationClassDescriptor::IsMaster.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsMaster.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->IsSubMaster = false;
  local_10 = FFieldNotificationClassDescriptor::IsSubMaster.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsSubMaster.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->IsManager = false;
  local_10 = FFieldNotificationClassDescriptor::IsManager.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsManager.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->IsNormal = true;
  local_10 = FFieldNotificationClassDescriptor::IsNormal.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsNormal.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->IsNewbie = false;
  local_10 = FFieldNotificationClassDescriptor::IsNewbie.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsNewbie.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnCheckBox_SubMaster @ 14be92b80

void __thiscall
UDS_VM_GuildPermissionPopupSlot::OnCheckBox_SubMaster
          (UDS_VM_GuildPermissionPopupSlot *this,FDS_WidgetEventField *param_1)

{
  FName local_18;
  int local_10;
  
  if (param_1->bIsActivate == false) {
    this->IsSubMaster = this->IsSubMaster;
    local_10 = FFieldNotificationClassDescriptor::IsSubMaster.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::IsSubMaster.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_);
    return;
  }
  this->MemberGrade = GuildMemberGradeType_SubMaster;
  this->IsMaster = false;
  local_10 = FFieldNotificationClassDescriptor::IsMaster.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsMaster.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->IsSubMaster = true;
  local_10 = FFieldNotificationClassDescriptor::IsSubMaster.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsSubMaster.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->IsManager = false;
  local_10 = FFieldNotificationClassDescriptor::IsManager.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsManager.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->IsNormal = false;
  local_10 = FFieldNotificationClassDescriptor::IsNormal.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsNormal.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->IsNewbie = false;
  local_10 = FFieldNotificationClassDescriptor::IsNewbie.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsNewbie.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnSetViewModel @ 14bea11d0

void __thiscall
UDS_VM_GuildPermissionPopupSlot::OnSetViewModel
          (UDS_VM_GuildPermissionPopupSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  EDS_GuildPermissionType EVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  FName FVar4;
  int iVar5;
  bool bVar6;
  ForAnyElementType FVar7;
  TSharedPtr<FDS_ViewModelContext_GuildPermissionPopupSlot,1> local_158;
  FName local_148;
  int local_140;
  FName local_138;
  int local_130;
  FName local_128;
  int local_120;
  FDS_Text local_118;
  FDS_Text local_c8;
  FDS_Text local_78;
  TSharedPtr<FDS_ViewModelContext,1> local_28 [2];
  
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_28[0].Object = param_1->Object;
  local_28[0].SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_28[0].SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_GuildPermissionPopupSlot>(&local_158,local_28);
  if (local_158.Object == (FDS_ViewModelContext_GuildPermissionPopupSlot *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    goto LAB_14bea1483;
  }
  if ((local_158.Object == (FDS_ViewModelContext_GuildPermissionPopupSlot *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EVar1 = (local_158.Object)->PermissionType;
  if (EVar1 == MemberManagement) {
    local_78.StringTableType = None;
    local_78.StringTableID = 0;
    local_78.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_78.StringEnumTableNameID.Number = 0;
    local_78.TimeExpressionType = None;
    local_78.IsExpression = false;
    local_78.DateTime.Ticks = 0;
    local_78.TimeSpan.Ticks = 0;
    local_78.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.UniqueString.Data.ArrayNum = 0;
    local_78.UniqueString.Data.ArrayMax = 0;
    local_78.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.FormatArgs.ArrayNum = 0;
    local_78.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_78,StringUi,0x3a9eb);
    iVar5 = FFieldNotificationClassDescriptor::Txt_Title.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::Txt_Title.FieldName;
    FDS_Text::operator=(&this->Txt_Title,&local_78);
    local_128 = FVar4;
    local_120 = iVar5;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_128);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_78.FormatArgs.AllocatorInstance.Data,
               local_78.FormatArgs.ArrayNum);
    FVar7.Data = local_78.UniqueString.Data.AllocatorInstance.Data;
    if ((FDS_TextFormatArg *)local_78.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
    {
      FMemory::Free(local_78.FormatArgs.AllocatorInstance.Data);
      FVar7.Data = local_78.UniqueString.Data.AllocatorInstance.Data;
    }
LAB_14bea1467:
    if (FVar7.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar7.Data);
    }
  }
  else {
    if (EVar1 == MoneyManagement) {
      local_c8.StringTableType = None;
      local_c8.StringTableID = 0;
      local_c8.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_c8.StringEnumTableNameID.Number = 0;
      local_c8.TimeExpressionType = None;
      local_c8.IsExpression = false;
      local_c8.DateTime.Ticks = 0;
      local_c8.TimeSpan.Ticks = 0;
      local_c8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.UniqueString.Data.ArrayNum = 0;
      local_c8.UniqueString.Data.ArrayMax = 0;
      local_c8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.FormatArgs.ArrayNum = 0;
      local_c8.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&local_c8,StringUi,0x3a9ec);
      iVar5 = FFieldNotificationClassDescriptor::Txt_Title.BitNumber;
      FVar4 = FFieldNotificationClassDescriptor::Txt_Title.FieldName;
      FDS_Text::operator=(&this->Txt_Title,&local_c8);
      local_138 = FVar4;
      local_130 = iVar5;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_138);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_c8.FormatArgs.AllocatorInstance.Data,
                 local_c8.FormatArgs.ArrayNum);
      FVar7.Data = local_c8.UniqueString.Data.AllocatorInstance.Data;
      if ((FDS_TextFormatArg *)local_c8.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_c8.FormatArgs.AllocatorInstance.Data);
        FVar7.Data = local_c8.UniqueString.Data.AllocatorInstance.Data;
      }
      goto LAB_14bea1467;
    }
    if (EVar1 == GuildSetting) {
      local_118.StringTableType = None;
      local_118.StringTableID = 0;
      local_118.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_118.StringEnumTableNameID.Number = 0;
      local_118.TimeExpressionType = None;
      local_118.IsExpression = false;
      local_118.DateTime.Ticks = 0;
      local_118.TimeSpan.Ticks = 0;
      local_118.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.UniqueString.Data.ArrayNum = 0;
      local_118.UniqueString.Data.ArrayMax = 0;
      local_118.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.FormatArgs.ArrayNum = 0;
      local_118.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&local_118,StringUi,0x3a9ed);
      iVar5 = FFieldNotificationClassDescriptor::Txt_Title.BitNumber;
      FVar4 = FFieldNotificationClassDescriptor::Txt_Title.FieldName;
      FDS_Text::operator=(&this->Txt_Title,&local_118);
      local_148 = FVar4;
      local_140 = iVar5;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_148);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_118.FormatArgs.AllocatorInstance.Data,
                 local_118.FormatArgs.ArrayNum);
      FVar7.Data = local_118.UniqueString.Data.AllocatorInstance.Data;
      if ((FDS_TextFormatArg *)local_118.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_118.FormatArgs.AllocatorInstance.Data);
        FVar7.Data = local_118.UniqueString.Data.AllocatorInstance.Data;
      }
      goto LAB_14bea1467;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.SharedReferenceCount.ReferenceController);
LAB_14bea1483:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetIsManager @ 14beb1630

void __thiscall
UDS_VM_GuildPermissionPopupSlot::SetIsManager(UDS_VM_GuildPermissionPopupSlot *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  this->IsManager = param_1;
  local_10 = FFieldNotificationClassDescriptor::IsManager.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsManager.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetIsMaster @ 14beb16b0

void __thiscall
UDS_VM_GuildPermissionPopupSlot::SetIsMaster(UDS_VM_GuildPermissionPopupSlot *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  this->IsMaster = param_1;
  local_10 = FFieldNotificationClassDescriptor::IsMaster.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsMaster.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetIsNewbie @ 14beb1730

void __thiscall
UDS_VM_GuildPermissionPopupSlot::SetIsNewbie(UDS_VM_GuildPermissionPopupSlot *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  this->IsNewbie = param_1;
  local_10 = FFieldNotificationClassDescriptor::IsNewbie.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsNewbie.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetIsNormal @ 14beb17b0

void __thiscall
UDS_VM_GuildPermissionPopupSlot::SetIsNormal(UDS_VM_GuildPermissionPopupSlot *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  this->IsNormal = param_1;
  local_10 = FFieldNotificationClassDescriptor::IsNormal.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsNormal.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetIsSubMaster @ 14beb1cf0

void __thiscall
UDS_VM_GuildPermissionPopupSlot::SetIsSubMaster(UDS_VM_GuildPermissionPopupSlot *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  this->IsSubMaster = param_1;
  local_10 = FFieldNotificationClassDescriptor::IsSubMaster.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsSubMaster.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetMemberGrade @ 14beb2fb0

void __thiscall
UDS_VM_GuildPermissionPopupSlot::SetMemberGrade
          (UDS_VM_GuildPermissionPopupSlot *this,GuildMemberGradeType param_1)

{
  FName local_18;
  int local_10;
  
  this->MemberGrade = param_1;
  this->IsMaster = param_1 == GuildMemberGradeType_Master;
  local_10 = FFieldNotificationClassDescriptor::IsMaster.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsMaster.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->IsSubMaster = param_1 == GuildMemberGradeType_SubMaster;
  local_10 = FFieldNotificationClassDescriptor::IsSubMaster.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsSubMaster.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->IsManager = param_1 == GuildMemberGradeType_Manager;
  local_10 = FFieldNotificationClassDescriptor::IsManager.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsManager.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->IsNormal = param_1 == GuildMemberGradeType_Member;
  local_10 = FFieldNotificationClassDescriptor::IsNormal.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsNormal.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->IsNewbie = param_1 == GuildMemberGradeType_Newcomer;
  local_10 = FFieldNotificationClassDescriptor::IsNewbie.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsNewbie.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetTxt_Title @ 14beb5fe0

void __thiscall
UDS_VM_GuildPermissionPopupSlot::SetTxt_Title
          (UDS_VM_GuildPermissionPopupSlot *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::Txt_Title.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::Txt_Title.FieldName;
  FDS_Text::operator=(&this->Txt_Title,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14bebc160

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_GuildPermissionPopupSlot::UnbindModel(UDS_VM_GuildPermissionPopupSlot *this)

{
  UDS_LanguageManager *pUVar1;
  
  pUVar1 = UDS_LanguageManager::GetInst();
  if (pUVar1 != (UDS_LanguageManager *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnLanguageChanged,this
              );
  }
  return;
}

