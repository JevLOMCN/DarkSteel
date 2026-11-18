// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 30

// SetCheckBox_Master_WrapperImpl @ 14b65bed0

void __cdecl
UDS_VM_GuildMemberGradePopupSlot::SetCheckBox_Master_WrapperImpl(void *param_1,void *param_2)

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
  *(undefined4 *)((longlong)param_1 + 0x250) = 1;
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

// SetCheckBox_SubMaster_WrapperImpl @ 14b65bee0

void __cdecl
UDS_VM_GuildMemberGradePopupSlot::SetCheckBox_SubMaster_WrapperImpl(void *param_1,void *param_2)

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
  *(undefined4 *)((longlong)param_1 + 0x250) = 2;
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

// SetCheckBox_Manager_WrapperImpl @ 14b65bef0

void __cdecl
UDS_VM_GuildMemberGradePopupSlot::SetCheckBox_Manager_WrapperImpl(void *param_1,void *param_2)

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
  *(undefined4 *)((longlong)param_1 + 0x250) = 3;
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

// SetCheckBox_Normal_WrapperImpl @ 14b65bf00

void __cdecl
UDS_VM_GuildMemberGradePopupSlot::SetCheckBox_Normal_WrapperImpl(void *param_1,void *param_2)

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
  *(undefined4 *)((longlong)param_1 + 0x250) = 4;
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

// SetCheckBox_Newbie_WrapperImpl @ 14b65bf10

void __cdecl
UDS_VM_GuildMemberGradePopupSlot::SetCheckBox_Newbie_WrapperImpl(void *param_1,void *param_2)

{
  longlong lVar1;
  FName FStack_18;
  int iStack_10;
  
  if (*(char *)param_2 == '\0') {
    *(undefined1 *)((longlong)param_1 + 0xa4) = *(undefined1 *)((longlong)param_1 + 0xa4);
    lVar1 = *(longlong *)((longlong)param_1 + 0x28);
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0x250) = 5;
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

// StaticClass @ 14b65bf20

UClass * __cdecl UDS_VM_GuildMemberGradePopupSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildMemberGradePopupSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildMemberGradePopupSlot",
               &Z_Registration_Info_UClass_UDS_VM_GuildMemberGradePopupSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildMemberGradePopupSlot,600,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_GuildMemberGradePopupSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildMemberGradePopupSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildMemberGradePopupSlot.InnerSingleton;
}

// UDS_VM_GuildMemberGradePopupSlot @ 14b65f3d0

UDS_VM_GuildMemberGradePopupSlot * __thiscall
UDS_VM_GuildMemberGradePopupSlot::UDS_VM_GuildMemberGradePopupSlot
          (UDS_VM_GuildMemberGradePopupSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildMemberGradePopupSlot__6B_;
  (this->FixedTxt_GradeMaster).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GradeMaster).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GradeMaster).DateTime.Ticks = 0;
  (this->FixedTxt_GradeMaster).TimeSpan.Ticks = 0;
  (this->FixedTxt_GradeMaster).TimeExpressionType = None;
  (this->FixedTxt_GradeMaster).IsExpression = false;
  (this->FixedTxt_GradeMaster).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GradeMaster).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GradeMaster).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GradeMaster).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_GradeMaster).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GradeMaster).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GradeSubMaster).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GradeSubMaster).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GradeSubMaster).DateTime.Ticks = 0;
  (this->FixedTxt_GradeSubMaster).TimeSpan.Ticks = 0;
  (this->FixedTxt_GradeSubMaster).TimeExpressionType = None;
  (this->FixedTxt_GradeSubMaster).IsExpression = false;
  (this->FixedTxt_GradeSubMaster).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GradeSubMaster).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GradeSubMaster).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GradeSubMaster).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedTxt_GradeSubMaster).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GradeSubMaster).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GradeManager).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GradeManager).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GradeManager).DateTime.Ticks = 0;
  (this->FixedTxt_GradeManager).TimeSpan.Ticks = 0;
  (this->FixedTxt_GradeManager).TimeExpressionType = None;
  (this->FixedTxt_GradeManager).IsExpression = false;
  (this->FixedTxt_GradeManager).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GradeManager).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GradeManager).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GradeManager).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_GradeManager).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GradeManager).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GradeNormal).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GradeNormal).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GradeNormal).DateTime.Ticks = 0;
  (this->FixedTxt_GradeNormal).TimeSpan.Ticks = 0;
  (this->FixedTxt_GradeNormal).TimeExpressionType = None;
  (this->FixedTxt_GradeNormal).IsExpression = false;
  (this->FixedTxt_GradeNormal).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GradeNormal).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GradeNormal).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GradeNormal).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_GradeNormal).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GradeNormal).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GradeNewbie).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GradeNewbie).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GradeNewbie).DateTime.Ticks = 0;
  (this->FixedTxt_GradeNewbie).TimeSpan.Ticks = 0;
  (this->FixedTxt_GradeNewbie).TimeExpressionType = None;
  (this->FixedTxt_GradeNewbie).IsExpression = false;
  (this->FixedTxt_GradeNewbie).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GradeNewbie).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GradeNewbie).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GradeNewbie).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_GradeNewbie).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GradeNewbie).FormatArgs.ArrayMax = 0;
  this->CheckBox_Master = false;
  this->CheckBox_SubMaster = false;
  this->CheckBox_Manager = false;
  this->CheckBox_Normal = false;
  (this->CheckBox_Newbie).bIsActivate = false;
  (this->VM_GuildMemberData).field0_0x0.DebugPtr = (UDS_VM_GuildMemberData *)0x0;
  (this->MemberData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->FixedTxt_GradeMaster).StringTableType = StringUi;
  (this->FixedTxt_GradeMaster).StringTableID = 0x3a9e7;
  (this->FixedTxt_GradeSubMaster).StringTableType = StringUi;
  (this->FixedTxt_GradeSubMaster).StringTableID = 0x3a9e8;
  (this->FixedTxt_GradeManager).StringTableType = StringUi;
  (this->FixedTxt_GradeManager).StringTableID = 0x3a9e9;
  (this->FixedTxt_GradeNormal).StringTableType = StringUi;
  (this->FixedTxt_GradeNormal).StringTableID = 0x3a9ea;
  (this->FixedTxt_GradeNewbie).StringTableType = StringUi;
  (this->FixedTxt_GradeNewbie).StringTableID = 0x3aa02;
  return this;
}

// UDS_VM_GuildMemberGradePopupSlot @ 14b65f5c0

UDS_VM_GuildMemberGradePopupSlot * __thiscall
UDS_VM_GuildMemberGradePopupSlot::UDS_VM_GuildMemberGradePopupSlot
          (UDS_VM_GuildMemberGradePopupSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildMemberGradePopupSlot__6B_;
  (this->FixedTxt_GradeMaster).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GradeMaster).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GradeMaster).DateTime.Ticks = 0;
  (this->FixedTxt_GradeMaster).TimeSpan.Ticks = 0;
  (this->FixedTxt_GradeMaster).TimeExpressionType = None;
  (this->FixedTxt_GradeMaster).IsExpression = false;
  (this->FixedTxt_GradeMaster).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GradeMaster).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GradeMaster).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GradeMaster).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_GradeMaster).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GradeMaster).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GradeSubMaster).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GradeSubMaster).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GradeSubMaster).DateTime.Ticks = 0;
  (this->FixedTxt_GradeSubMaster).TimeSpan.Ticks = 0;
  (this->FixedTxt_GradeSubMaster).TimeExpressionType = None;
  (this->FixedTxt_GradeSubMaster).IsExpression = false;
  (this->FixedTxt_GradeSubMaster).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GradeSubMaster).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GradeSubMaster).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GradeSubMaster).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedTxt_GradeSubMaster).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GradeSubMaster).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GradeManager).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GradeManager).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GradeManager).DateTime.Ticks = 0;
  (this->FixedTxt_GradeManager).TimeSpan.Ticks = 0;
  (this->FixedTxt_GradeManager).TimeExpressionType = None;
  (this->FixedTxt_GradeManager).IsExpression = false;
  (this->FixedTxt_GradeManager).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GradeManager).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GradeManager).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GradeManager).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_GradeManager).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GradeManager).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GradeNormal).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GradeNormal).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GradeNormal).DateTime.Ticks = 0;
  (this->FixedTxt_GradeNormal).TimeSpan.Ticks = 0;
  (this->FixedTxt_GradeNormal).TimeExpressionType = None;
  (this->FixedTxt_GradeNormal).IsExpression = false;
  (this->FixedTxt_GradeNormal).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GradeNormal).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GradeNormal).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GradeNormal).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_GradeNormal).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GradeNormal).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GradeNewbie).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GradeNewbie).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GradeNewbie).DateTime.Ticks = 0;
  (this->FixedTxt_GradeNewbie).TimeSpan.Ticks = 0;
  (this->FixedTxt_GradeNewbie).TimeExpressionType = None;
  (this->FixedTxt_GradeNewbie).IsExpression = false;
  (this->FixedTxt_GradeNewbie).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GradeNewbie).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GradeNewbie).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GradeNewbie).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_GradeNewbie).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GradeNewbie).FormatArgs.ArrayMax = 0;
  this->CheckBox_Master = false;
  this->CheckBox_SubMaster = false;
  this->CheckBox_Manager = false;
  this->CheckBox_Normal = false;
  (this->CheckBox_Newbie).bIsActivate = false;
  (this->VM_GuildMemberData).field0_0x0.DebugPtr = (UDS_VM_GuildMemberData *)0x0;
  (this->MemberData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->FixedTxt_GradeMaster).StringTableType = StringUi;
  (this->FixedTxt_GradeMaster).StringTableID = 0x3a9e7;
  (this->FixedTxt_GradeSubMaster).StringTableType = StringUi;
  (this->FixedTxt_GradeSubMaster).StringTableID = 0x3a9e8;
  (this->FixedTxt_GradeManager).StringTableType = StringUi;
  (this->FixedTxt_GradeManager).StringTableID = 0x3a9e9;
  (this->FixedTxt_GradeNormal).StringTableType = StringUi;
  (this->FixedTxt_GradeNormal).StringTableID = 0x3a9ea;
  (this->FixedTxt_GradeNewbie).StringTableType = StringUi;
  (this->FixedTxt_GradeNewbie).StringTableID = 0x3aa02;
  return this;
}

// ~UDS_VM_GuildMemberGradePopupSlot @ 14b662020

void __thiscall
UDS_VM_GuildMemberGradePopupSlot::~UDS_VM_GuildMemberGradePopupSlot
          (UDS_VM_GuildMemberGradePopupSlot *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildMemberGradePopupSlot__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_GradeNewbie).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_GradeNewbie).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_GradeNewbie).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_GradeNewbie).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_GradeNormal).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_GradeNormal).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_GradeNormal).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_GradeNormal).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_GradeManager).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_GradeManager).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_GradeManager).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_GradeManager).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_GradeSubMaster).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_GradeSubMaster).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_GradeSubMaster).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_GradeSubMaster).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_GradeMaster).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_GradeMaster).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_GradeMaster).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_GradeMaster).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b664650

IClassDescriptor * __thiscall
UDS_VM_GuildMemberGradePopupSlot::GetFieldNotificationDescriptor
          (UDS_VM_GuildMemberGradePopupSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_GuildMemberGradePopupSlot::FFieldNotificationClassDescriptor::GetDescriptor'::
             __l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b664ea0

UClass * __cdecl UDS_VM_GuildMemberGradePopupSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildMemberGradePopupSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildMemberGradePopupSlot",
               &Z_Registration_Info_UClass_UDS_VM_GuildMemberGradePopupSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildMemberGradePopupSlot,600,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_GuildMemberGradePopupSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildMemberGradePopupSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildMemberGradePopupSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_GuildMemberGradePopupSlot @ 14b665450

void __cdecl
UDS_VM_GuildMemberGradePopupSlot::StaticRegisterNativesUDS_VM_GuildMemberGradePopupSlot(void)

{
  return;
}

// BindModel @ 14be75f30

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_GuildMemberGradePopupSlot::BindModel(UDS_VM_GuildMemberGradePopupSlot *this)

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

// InitViewModel @ 14be8ccc0

void __thiscall
UDS_VM_GuildMemberGradePopupSlot::InitViewModel(UDS_VM_GuildMemberGradePopupSlot *this)

{
  return;
}

// OnCheckBox_Manager @ 14be91f60

void __thiscall
UDS_VM_GuildMemberGradePopupSlot::OnCheckBox_Manager
          (UDS_VM_GuildMemberGradePopupSlot *this,FDS_WidgetEventField *param_1)

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

// OnCheckBox_Master @ 14be92220

void __thiscall
UDS_VM_GuildMemberGradePopupSlot::OnCheckBox_Master
          (UDS_VM_GuildMemberGradePopupSlot *this,FDS_WidgetEventField *param_1)

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

// OnCheckBox_Newbie @ 14be924e0

void __thiscall
UDS_VM_GuildMemberGradePopupSlot::OnCheckBox_Newbie
          (UDS_VM_GuildMemberGradePopupSlot *this,FDS_WidgetEventField *param_1)

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

// OnCheckBox_Normal @ 14be92760

void __thiscall
UDS_VM_GuildMemberGradePopupSlot::OnCheckBox_Normal
          (UDS_VM_GuildMemberGradePopupSlot *this,FDS_WidgetEventField *param_1)

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

// OnCheckBox_SubMaster @ 14be92a20

void __thiscall
UDS_VM_GuildMemberGradePopupSlot::OnCheckBox_SubMaster
          (UDS_VM_GuildMemberGradePopupSlot *this,FDS_WidgetEventField *param_1)

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

// OnSetViewModel @ 14bea06b0

void __thiscall
UDS_VM_GuildMemberGradePopupSlot::OnSetViewModel
          (UDS_VM_GuildMemberGradePopupSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  FName FVar3;
  int iVar4;
  FDS_ViewModelContext_GuildMemberData *pFVar5;
  bool bVar6;
  GuildMemberGradeType GVar7;
  UObject *pUVar8;
  UDS_VM_GuildMemberData *pUVar9;
  FName *pFVar10;
  TSharedPtr<FDS_ViewModelContext_GuildMemberGradePopupSlot,1> local_a8;
  TSharedPtr<FDS_ViewModelContext_GuildMemberData,1> local_98;
  FName local_88;
  int local_80;
  FName local_78;
  int local_70;
  FName local_68;
  int local_60;
  FName local_58;
  int local_50;
  FName local_48;
  int local_40;
  FName local_38;
  int local_30;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_28.Object = param_1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_GuildMemberGradePopupSlot>(&local_a8,&local_28);
  if (local_a8.Object == (FDS_ViewModelContext_GuildMemberGradePopupSlot *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
    goto LAB_14bea099b;
  }
  if ((local_a8.Object == (FDS_ViewModelContext_GuildMemberGradePopupSlot *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (this->MemberData).WeakPtr = ((local_a8.Object)->MemberData).WeakPtr;
  bVar6 = FWeakObjectPtr::IsValid(&(this->MemberData).WeakPtr);
  if (bVar6) {
    GVar7 = UDS_GuildManager::GetMyMemberGrade();
    iVar4 = FFieldNotificationClassDescriptor::DisableSubMaster.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::DisableSubMaster.FieldName;
    if (GVar7 == GuildMemberGradeType_Master) {
      if (this->DisableSubMaster != false) {
        this->DisableSubMaster = false;
        local_40 = iVar4;
        local_48 = FVar3;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
      }
      if (this->DisableManager != false) {
        local_38 = FFieldNotificationClassDescriptor::DisableManager.FieldName;
        pFVar10 = &local_38;
        local_30 = FFieldNotificationClassDescriptor::DisableManager.BitNumber;
LAB_14bea0892:
        this->DisableManager = false;
LAB_14bea0899:
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar10);
      }
    }
    else if (GVar7 == GuildMemberGradeType_SubMaster) {
      if (this->DisableSubMaster != true) {
        this->DisableSubMaster = true;
        local_60 = iVar4;
        local_68 = FVar3;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
      }
      if (this->DisableManager != false) {
        local_58 = FFieldNotificationClassDescriptor::DisableManager.FieldName;
        pFVar10 = &local_58;
        local_50 = FFieldNotificationClassDescriptor::DisableManager.BitNumber;
        goto LAB_14bea0892;
      }
    }
    else {
      if (this->DisableSubMaster != true) {
        this->DisableSubMaster = true;
        local_80 = iVar4;
        local_88 = FVar3;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
      }
      iVar4 = FFieldNotificationClassDescriptor::DisableManager.BitNumber;
      FVar3 = FFieldNotificationClassDescriptor::DisableManager.FieldName;
      if (this->DisableManager != true) {
        this->DisableManager = true;
        pFVar10 = &local_78;
        local_78 = FVar3;
        local_70 = iVar4;
        goto LAB_14bea0899;
      }
    }
    pUVar8 = FWeakObjectPtr::Get(&(this->MemberData).WeakPtr);
    SetMemberGrade(this,*(GuildMemberGradeType *)&pUVar8[1].field_0x20);
    if ((this->VM_GuildMemberData).field0_0x0.DebugPtr == (UDS_VM_GuildMemberData *)0x0) {
      pUVar9 = UDS_ViewModelBase::CreateViewModel<UDS_VM_GuildMemberData>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar9 != (UDS_VM_GuildMemberData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar9);
      }
      (this->VM_GuildMemberData).field0_0x0.DebugPtr = pUVar9;
      if (pUVar9 == (UDS_VM_GuildMemberData *)0x0) goto LAB_14bea098a;
    }
    MakeContext<FDS_ViewModelContext_GuildMemberData>(&local_98);
    pFVar5 = local_98.Object;
    if (local_98.Object != (FDS_ViewModelContext_GuildMemberData *)0x0) {
      if ((local_98.Object == (FDS_ViewModelContext_GuildMemberData *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined4 *)&pFVar5->_padding_ = 0x212;
      local_18.Object = (FDS_ViewModelContext *)local_98.Object;
      local_18.SharedReferenceCount.ReferenceController =
           local_98.SharedReferenceCount.ReferenceController;
      (pFVar5->MemberData).WeakPtr = (this->MemberData).WeakPtr;
      pUVar9 = (this->VM_GuildMemberData).field0_0x0.DebugPtr;
      if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar9,&local_18);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
  }
LAB_14bea098a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.SharedReferenceCount.ReferenceController);
LAB_14bea099b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetDisableManager @ 14beae300

void __thiscall
UDS_VM_GuildMemberGradePopupSlot::SetDisableManager
          (UDS_VM_GuildMemberGradePopupSlot *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::DisableManager.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::DisableManager.FieldName;
  if (this->DisableManager != param_1) {
    this->DisableManager = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetDisableSubMaster @ 14beae500

void __thiscall
UDS_VM_GuildMemberGradePopupSlot::SetDisableSubMaster
          (UDS_VM_GuildMemberGradePopupSlot *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::DisableSubMaster.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::DisableSubMaster.FieldName;
  if (this->DisableSubMaster != param_1) {
    this->DisableSubMaster = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetIsManager @ 14beb15f0

void __thiscall
UDS_VM_GuildMemberGradePopupSlot::SetIsManager(UDS_VM_GuildMemberGradePopupSlot *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  this->IsManager = param_1;
  local_10 = FFieldNotificationClassDescriptor::IsManager.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsManager.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetIsMaster @ 14beb1670

void __thiscall
UDS_VM_GuildMemberGradePopupSlot::SetIsMaster(UDS_VM_GuildMemberGradePopupSlot *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  this->IsMaster = param_1;
  local_10 = FFieldNotificationClassDescriptor::IsMaster.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsMaster.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetIsNewbie @ 14beb16f0

void __thiscall
UDS_VM_GuildMemberGradePopupSlot::SetIsNewbie(UDS_VM_GuildMemberGradePopupSlot *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  this->IsNewbie = param_1;
  local_10 = FFieldNotificationClassDescriptor::IsNewbie.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsNewbie.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetIsNormal @ 14beb1770

void __thiscall
UDS_VM_GuildMemberGradePopupSlot::SetIsNormal(UDS_VM_GuildMemberGradePopupSlot *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  this->IsNormal = param_1;
  local_10 = FFieldNotificationClassDescriptor::IsNormal.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsNormal.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetIsSubMaster @ 14beb1cb0

void __thiscall
UDS_VM_GuildMemberGradePopupSlot::SetIsSubMaster
          (UDS_VM_GuildMemberGradePopupSlot *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  this->IsSubMaster = param_1;
  local_10 = FFieldNotificationClassDescriptor::IsSubMaster.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsSubMaster.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetMemberGrade @ 14beb2e70

void __thiscall
UDS_VM_GuildMemberGradePopupSlot::SetMemberGrade
          (UDS_VM_GuildMemberGradePopupSlot *this,GuildMemberGradeType param_1)

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

// SetVM_GuildMemberData @ 14beb8240

void __thiscall
UDS_VM_GuildMemberGradePopupSlot::SetVM_GuildMemberData(UDS_VM_GuildMemberGradePopupSlot *this)

{
  code *pcVar1;
  FDS_ViewModelContext_GuildMemberData *pFVar2;
  bool bVar3;
  UDS_VM_GuildMemberData *pUVar4;
  TSharedPtr<FDS_ViewModelContext_GuildMemberData,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((this->VM_GuildMemberData).field0_0x0.DebugPtr == (UDS_VM_GuildMemberData *)0x0) {
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_GuildMemberData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDS_VM_GuildMemberData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VM_GuildMemberData).field0_0x0.DebugPtr = pUVar4;
    if (pUVar4 == (UDS_VM_GuildMemberData *)0x0) {
      return;
    }
  }
  MakeContext<FDS_ViewModelContext_GuildMemberData>(&local_28);
  pFVar2 = local_28.Object;
  if (local_28.Object == (FDS_ViewModelContext_GuildMemberData *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    return;
  }
  if ((local_28.Object == (FDS_ViewModelContext_GuildMemberData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined4 *)&pFVar2->_padding_ = 0x212;
  (pFVar2->MemberData).WeakPtr = (this->MemberData).WeakPtr;
  pUVar4 = (this->VM_GuildMemberData).field0_0x0.DebugPtr;
  local_18.Object = (FDS_ViewModelContext *)local_28.Object;
  local_18.SharedReferenceCount.ReferenceController =
       local_28.SharedReferenceCount.ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar4,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// UnbindModel @ 14bebc0e0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
UDS_VM_GuildMemberGradePopupSlot::UnbindModel(UDS_VM_GuildMemberGradePopupSlot *this)

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

