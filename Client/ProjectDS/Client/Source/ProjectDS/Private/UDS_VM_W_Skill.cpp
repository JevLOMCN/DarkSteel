// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 33

// StaticClass @ 14b7568e0

UClass * __cdecl UDS_VM_W_Skill::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Skill.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Skill",
               &Z_Registration_Info_UClass_UDS_VM_W_Skill.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Skill,0x520,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_W_Skill>,InternalVTableHelperCtorCaller<UDS_VM_W_Skill>,
               local_res8,UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Skill.InnerSingleton;
}

// UDS_VM_W_Skill @ 14b758fd0

UDS_VM_W_Skill * __thiscall
UDS_VM_W_Skill::UDS_VM_W_Skill(UDS_VM_W_Skill *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->SelectedCharSortType = CharGet;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Skill__6B_;
  *(undefined8 *)&this->CharSortTypeMap = 0;
  *(undefined8 *)&(this->CharSortTypeMap).field_0x8 = 0;
  *(undefined8 *)&(this->CharSortTypeMap).field_0x20 = 0;
  this->SelectSkillID = 0;
  *(undefined4 *)&(this->CharSortTypeMap).field_0x28 = 0;
  *(undefined4 *)&(this->CharSortTypeMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CharSortTypeMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CharSortTypeMap).field_0x34 = 0;
  *(undefined8 *)&(this->CharSortTypeMap).field_0x40 = 0;
  *(undefined4 *)&(this->CharSortTypeMap).field_0x48 = 0;
  (this->VM_SpecialSkill).field0_0x0.DebugPtr = (UDS_VM_W_SkillInfo_SkillSlot *)0x0;
  (this->VM_TraitSkill).field0_0x0.DebugPtr = (UDS_VM_W_SkillInfo_SkillSlot *)0x0;
  (this->VM_AvoidSkill).field0_0x0.DebugPtr = (UDS_VM_W_SkillInfo_SkillSlot *)0x0;
  (this->VM_Default1Skill).field0_0x0.DebugPtr = (UDS_VM_W_SkillInfo_SkillSlot *)0x0;
  (this->VM_Default2Skill).field0_0x0.DebugPtr = (UDS_VM_W_SkillInfo_SkillSlot *)0x0;
  (this->VM_Default3Skill).field0_0x0.DebugPtr = (UDS_VM_W_SkillInfo_SkillSlot *)0x0;
  (this->VM_Default4Skill).field0_0x0.DebugPtr = (UDS_VM_W_SkillInfo_SkillSlot *)0x0;
  (this->VM_NormalSkill).field0_0x0.DebugPtr = (UDS_VM_W_SkillInfo_SkillSlot *)0x0;
  (this->VM_Condition).field0_0x0.DebugPtr = (UDS_VM_W_Common_Condition *)0x0;
  *(undefined8 *)&this->MapSkillSlotVM = 0;
  *(undefined8 *)&(this->MapSkillSlotVM).field_0x8 = 0;
  *(undefined8 *)&(this->MapSkillSlotVM).field_0x20 = 0;
  this->VM_ConditionVisibility = Collapsed;
  *(undefined4 *)&(this->MapSkillSlotVM).field_0x28 = 0;
  *(undefined4 *)&(this->MapSkillSlotVM).field_0x2c = 0x80;
  *(undefined4 *)&(this->MapSkillSlotVM).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MapSkillSlotVM).field_0x34 = 0;
  *(undefined8 *)&(this->MapSkillSlotVM).field_0x40 = 0;
  *(undefined4 *)&(this->MapSkillSlotVM).field_0x48 = 0;
  (this->RemainTimeString).StringTableType = None;
  (this->RemainTimeString).StringTableID = 0;
  (this->RemainTimeString).StringEnumTableNameID.ComparisonIndex = 0;
  (this->RemainTimeString).StringEnumTableNameID.Number = 0;
  (this->RemainTimeString).DateTime.Ticks = 0;
  (this->RemainTimeString).TimeSpan.Ticks = 0;
  (this->RemainTimeString).TimeExpressionType = None;
  (this->RemainTimeString).IsExpression = false;
  (this->RemainTimeString).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->RemainTimeString).UniqueString.Data.ArrayNum = 0;
  (this->RemainTimeString).UniqueString.Data.ArrayMax = 0;
  (this->RemainTimeString).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RemainTimeString).FormatArgs.ArrayNum = 0;
  (this->RemainTimeString).FormatArgs.ArrayMax = 0;
  (this->SkillAscendTime).StringTableType = None;
  (this->SkillAscendTime).StringTableID = 0;
  (this->SkillAscendTime).StringEnumTableNameID.ComparisonIndex = 0;
  (this->SkillAscendTime).StringEnumTableNameID.Number = 0;
  (this->SkillAscendTime).DateTime.Ticks = 0;
  (this->SkillAscendTime).TimeSpan.Ticks = 0;
  (this->SkillAscendTime).TimeExpressionType = None;
  (this->SkillAscendTime).IsExpression = false;
  (this->SkillAscendTime).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkillAscendTime).UniqueString.Data.ArrayNum = 0;
  (this->SkillAscendTime).UniqueString.Data.ArrayMax = 0;
  (this->SkillAscendTime).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkillAscendTime).FormatArgs.ArrayNum = 0;
  (this->SkillAscendTime).FormatArgs.ArrayMax = 0;
  (this->MoneyEntryBindField).UserObjectList.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->MoneyEntryBindField).UserObjectList.ArrayNum = 0;
  (this->MoneyEntryBindField).UserObjectList.ArrayMax = 0;
  (this->ItemEntryBindField).UserObjectList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ItemEntryBindField).UserObjectList.ArrayNum = 0;
  (this->ItemEntryBindField).UserObjectList.ArrayMax = 0;
  (this->SkillLevelUpBtnDel)._padding_ = '\0';
  (this->SkillLevelUpBtnDel).bIsCustomSelected = false;
  (this->SkillLevelUpBtnDel).bIsLacked = false;
  (this->SkillLevelUpBtnDel).bIsCustomDisabled = false;
  *(undefined8 *)&(this->SkillLevelUpBtnDel).Delegate = 0;
  *(undefined8 *)&(this->SkillLevelUpBtnDel).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->SkillLevelUpBtnDel).Delegate.field_0x10 = 0;
  (this->SkillAscendBtnDel)._padding_ = '\0';
  (this->SkillAscendBtnDel).bIsCustomSelected = false;
  (this->SkillAscendBtnDel).bIsLacked = false;
  (this->SkillAscendBtnDel).bIsCustomDisabled = false;
  *(undefined8 *)&(this->SkillAscendBtnDel).Delegate = 0;
  *(undefined8 *)&(this->SkillAscendBtnDel).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->SkillAscendBtnDel).Delegate.field_0x10 = 0;
  (this->SkillAccelerateBtnDel)._padding_ = '\0';
  (this->SkillAccelerateBtnDel).bIsCustomSelected = false;
  (this->SkillAccelerateBtnDel).bIsLacked = false;
  (this->SkillAccelerateBtnDel).bIsCustomDisabled = false;
  *(undefined8 *)&(this->SkillAccelerateBtnDel).Delegate = 0;
  *(undefined8 *)&(this->SkillAccelerateBtnDel).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->SkillAccelerateBtnDel).Delegate.field_0x10 = 0;
  this->bIsAscendComplete = false;
  this->bIsAscending = false;
  this->bIsMaxLevel = false;
  this->bIsCanGrow = false;
  this->bIsNextAscend = false;
  this->bIsOwnedCharacter = false;
  (this->VM_SkillInfoPanel).field0_0x0.DebugPtr = (UDS_VM_SkillInfo_Panel *)0x0;
  (this->VM_SkillData).field0_0x0.DebugPtr = (UDS_VM_SkillData *)0x0;
  (this->FixedText_AscendComplete).StringTableType = StringUi;
  (this->FixedText_AscendComplete).StringTableID = 0x11945;
  (this->FixedText_AscendComplete).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_AscendComplete).StringEnumTableNameID.Number = 0;
  (this->FixedText_AscendComplete).DateTime.Ticks = 0;
  (this->FixedText_AscendComplete).TimeSpan.Ticks = 0;
  (this->FixedText_AscendComplete).TimeExpressionType = None;
  (this->FixedText_AscendComplete).IsExpression = false;
  (this->FixedText_AscendComplete).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_AscendComplete).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_AscendComplete).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_AscendComplete).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_AscendComplete).FormatArgs.ArrayNum = 0;
  (this->FixedText_AscendComplete).FormatArgs.ArrayMax = 0;
  (this->FixedText_AscendProgress).StringTableType = StringUi;
  (this->FixedText_AscendProgress).StringTableID = 0x11944;
  (this->FixedText_AscendProgress).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_AscendProgress).StringEnumTableNameID.Number = 0;
  (this->FixedText_AscendProgress).DateTime.Ticks = 0;
  (this->FixedText_AscendProgress).TimeSpan.Ticks = 0;
  (this->FixedText_AscendProgress).TimeExpressionType = None;
  (this->FixedText_AscendProgress).IsExpression = false;
  (this->FixedText_AscendProgress).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_AscendProgress).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_AscendProgress).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_AscendProgress).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_AscendProgress).FormatArgs.ArrayNum = 0;
  (this->FixedText_AscendProgress).FormatArgs.ArrayMax = 0;
  (this->FixedText_MaxLevel).StringTableType = StringUi;
  (this->FixedText_MaxLevel).StringTableID = 0x11176;
  (this->FixedText_MaxLevel).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_MaxLevel).StringEnumTableNameID.Number = 0;
  (this->FixedText_MaxLevel).DateTime.Ticks = 0;
  (this->FixedText_MaxLevel).TimeSpan.Ticks = 0;
  (this->FixedText_MaxLevel).TimeExpressionType = None;
  (this->FixedText_MaxLevel).IsExpression = false;
  (this->FixedText_MaxLevel).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_MaxLevel).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_MaxLevel).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_MaxLevel).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_MaxLevel).FormatArgs.ArrayNum = 0;
  (this->FixedText_MaxLevel).FormatArgs.ArrayMax = 0;
  (this->FixedText_NotOwnedCharacter).StringTableType = StringUi;
  (this->FixedText_NotOwnedCharacter).StringTableID = 0x11178;
  (this->FixedText_NotOwnedCharacter).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_NotOwnedCharacter).StringEnumTableNameID.Number = 0;
  (this->FixedText_NotOwnedCharacter).DateTime.Ticks = 0;
  (this->FixedText_NotOwnedCharacter).TimeSpan.Ticks = 0;
  (this->FixedText_NotOwnedCharacter).TimeExpressionType = None;
  (this->FixedText_NotOwnedCharacter).IsExpression = false;
  (this->FixedText_NotOwnedCharacter).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_NotOwnedCharacter).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_NotOwnedCharacter).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_NotOwnedCharacter).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_NotOwnedCharacter).FormatArgs.ArrayNum = 0;
  (this->FixedText_NotOwnedCharacter).FormatArgs.ArrayMax = 0;
  (this->FixedText_AscendTimeTitle).StringTableType = StringUi;
  (this->FixedText_AscendTimeTitle).StringTableID = 0x11943;
  (this->FixedText_AscendTimeTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_AscendTimeTitle).StringEnumTableNameID.Number = 0;
  (this->FixedText_AscendTimeTitle).DateTime.Ticks = 0;
  (this->FixedText_AscendTimeTitle).TimeSpan.Ticks = 0;
  (this->FixedText_AscendTimeTitle).TimeExpressionType = None;
  (this->FixedText_AscendTimeTitle).IsExpression = false;
  (this->FixedText_AscendTimeTitle).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_AscendTimeTitle).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_AscendTimeTitle).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_AscendTimeTitle).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_AscendTimeTitle).FormatArgs.ArrayNum = 0;
  (this->FixedText_AscendTimeTitle).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Ascend).StringTableType = StringUi;
  (this->FixedText_Btn_Ascend).StringTableID = 0x6f;
  (this->FixedText_Btn_Ascend).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Ascend).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Ascend).DateTime.Ticks = 0;
  (this->FixedText_Btn_Ascend).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Ascend).TimeExpressionType = None;
  (this->FixedText_Btn_Ascend).IsExpression = false;
  (this->FixedText_Btn_Ascend).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Ascend).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Ascend).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Ascend).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Ascend).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Ascend).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Accel).StringTableType = StringUi;
  (this->FixedText_Btn_Accel).StringTableID = 0x138b;
  (this->FixedText_Btn_Accel).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Accel).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Accel).DateTime.Ticks = 0;
  (this->FixedText_Btn_Accel).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Accel).TimeExpressionType = None;
  (this->FixedText_Btn_Accel).IsExpression = false;
  (this->FixedText_Btn_Accel).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Accel).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Accel).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Accel).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Accel).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Accel).FormatArgs.ArrayMax = 0;
  (this->VM_CurClickedSkillSlot).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->VM_CurClickedSkillSlot).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// UDS_VM_W_Skill @ 14b759450

UDS_VM_W_Skill * __thiscall
UDS_VM_W_Skill::UDS_VM_W_Skill(UDS_VM_W_Skill *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->SelectedCharSortType = CharGet;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Skill__6B_;
  *(undefined8 *)&this->CharSortTypeMap = 0;
  *(undefined8 *)&(this->CharSortTypeMap).field_0x8 = 0;
  *(undefined8 *)&(this->CharSortTypeMap).field_0x20 = 0;
  this->SelectSkillID = 0;
  *(undefined4 *)&(this->CharSortTypeMap).field_0x28 = 0;
  *(undefined4 *)&(this->CharSortTypeMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CharSortTypeMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CharSortTypeMap).field_0x34 = 0;
  *(undefined8 *)&(this->CharSortTypeMap).field_0x40 = 0;
  *(undefined4 *)&(this->CharSortTypeMap).field_0x48 = 0;
  (this->VM_SpecialSkill).field0_0x0.DebugPtr = (UDS_VM_W_SkillInfo_SkillSlot *)0x0;
  (this->VM_TraitSkill).field0_0x0.DebugPtr = (UDS_VM_W_SkillInfo_SkillSlot *)0x0;
  (this->VM_AvoidSkill).field0_0x0.DebugPtr = (UDS_VM_W_SkillInfo_SkillSlot *)0x0;
  (this->VM_Default1Skill).field0_0x0.DebugPtr = (UDS_VM_W_SkillInfo_SkillSlot *)0x0;
  (this->VM_Default2Skill).field0_0x0.DebugPtr = (UDS_VM_W_SkillInfo_SkillSlot *)0x0;
  (this->VM_Default3Skill).field0_0x0.DebugPtr = (UDS_VM_W_SkillInfo_SkillSlot *)0x0;
  (this->VM_Default4Skill).field0_0x0.DebugPtr = (UDS_VM_W_SkillInfo_SkillSlot *)0x0;
  (this->VM_NormalSkill).field0_0x0.DebugPtr = (UDS_VM_W_SkillInfo_SkillSlot *)0x0;
  (this->VM_Condition).field0_0x0.DebugPtr = (UDS_VM_W_Common_Condition *)0x0;
  *(undefined8 *)&this->MapSkillSlotVM = 0;
  *(undefined8 *)&(this->MapSkillSlotVM).field_0x8 = 0;
  *(undefined8 *)&(this->MapSkillSlotVM).field_0x20 = 0;
  this->VM_ConditionVisibility = Collapsed;
  *(undefined4 *)&(this->MapSkillSlotVM).field_0x28 = 0;
  *(undefined4 *)&(this->MapSkillSlotVM).field_0x2c = 0x80;
  *(undefined4 *)&(this->MapSkillSlotVM).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MapSkillSlotVM).field_0x34 = 0;
  *(undefined8 *)&(this->MapSkillSlotVM).field_0x40 = 0;
  *(undefined4 *)&(this->MapSkillSlotVM).field_0x48 = 0;
  (this->RemainTimeString).StringTableType = None;
  (this->RemainTimeString).StringTableID = 0;
  (this->RemainTimeString).StringEnumTableNameID.ComparisonIndex = 0;
  (this->RemainTimeString).StringEnumTableNameID.Number = 0;
  (this->RemainTimeString).DateTime.Ticks = 0;
  (this->RemainTimeString).TimeSpan.Ticks = 0;
  (this->RemainTimeString).TimeExpressionType = None;
  (this->RemainTimeString).IsExpression = false;
  (this->RemainTimeString).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->RemainTimeString).UniqueString.Data.ArrayNum = 0;
  (this->RemainTimeString).UniqueString.Data.ArrayMax = 0;
  (this->RemainTimeString).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RemainTimeString).FormatArgs.ArrayNum = 0;
  (this->RemainTimeString).FormatArgs.ArrayMax = 0;
  (this->SkillAscendTime).StringTableType = None;
  (this->SkillAscendTime).StringTableID = 0;
  (this->SkillAscendTime).StringEnumTableNameID.ComparisonIndex = 0;
  (this->SkillAscendTime).StringEnumTableNameID.Number = 0;
  (this->SkillAscendTime).DateTime.Ticks = 0;
  (this->SkillAscendTime).TimeSpan.Ticks = 0;
  (this->SkillAscendTime).TimeExpressionType = None;
  (this->SkillAscendTime).IsExpression = false;
  (this->SkillAscendTime).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkillAscendTime).UniqueString.Data.ArrayNum = 0;
  (this->SkillAscendTime).UniqueString.Data.ArrayMax = 0;
  (this->SkillAscendTime).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkillAscendTime).FormatArgs.ArrayNum = 0;
  (this->SkillAscendTime).FormatArgs.ArrayMax = 0;
  (this->MoneyEntryBindField).UserObjectList.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->MoneyEntryBindField).UserObjectList.ArrayNum = 0;
  (this->MoneyEntryBindField).UserObjectList.ArrayMax = 0;
  (this->ItemEntryBindField).UserObjectList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ItemEntryBindField).UserObjectList.ArrayNum = 0;
  (this->ItemEntryBindField).UserObjectList.ArrayMax = 0;
  (this->SkillLevelUpBtnDel)._padding_ = '\0';
  (this->SkillLevelUpBtnDel).bIsCustomSelected = false;
  (this->SkillLevelUpBtnDel).bIsLacked = false;
  (this->SkillLevelUpBtnDel).bIsCustomDisabled = false;
  *(undefined8 *)&(this->SkillLevelUpBtnDel).Delegate = 0;
  *(undefined8 *)&(this->SkillLevelUpBtnDel).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->SkillLevelUpBtnDel).Delegate.field_0x10 = 0;
  (this->SkillAscendBtnDel)._padding_ = '\0';
  (this->SkillAscendBtnDel).bIsCustomSelected = false;
  (this->SkillAscendBtnDel).bIsLacked = false;
  (this->SkillAscendBtnDel).bIsCustomDisabled = false;
  *(undefined8 *)&(this->SkillAscendBtnDel).Delegate = 0;
  *(undefined8 *)&(this->SkillAscendBtnDel).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->SkillAscendBtnDel).Delegate.field_0x10 = 0;
  (this->SkillAccelerateBtnDel)._padding_ = '\0';
  (this->SkillAccelerateBtnDel).bIsCustomSelected = false;
  (this->SkillAccelerateBtnDel).bIsLacked = false;
  (this->SkillAccelerateBtnDel).bIsCustomDisabled = false;
  *(undefined8 *)&(this->SkillAccelerateBtnDel).Delegate = 0;
  *(undefined8 *)&(this->SkillAccelerateBtnDel).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->SkillAccelerateBtnDel).Delegate.field_0x10 = 0;
  this->bIsAscendComplete = false;
  this->bIsAscending = false;
  this->bIsMaxLevel = false;
  this->bIsCanGrow = false;
  this->bIsNextAscend = false;
  this->bIsOwnedCharacter = false;
  (this->VM_SkillInfoPanel).field0_0x0.DebugPtr = (UDS_VM_SkillInfo_Panel *)0x0;
  (this->VM_SkillData).field0_0x0.DebugPtr = (UDS_VM_SkillData *)0x0;
  (this->FixedText_AscendComplete).StringTableType = StringUi;
  (this->FixedText_AscendComplete).StringTableID = 0x11945;
  (this->FixedText_AscendComplete).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_AscendComplete).StringEnumTableNameID.Number = 0;
  (this->FixedText_AscendComplete).DateTime.Ticks = 0;
  (this->FixedText_AscendComplete).TimeSpan.Ticks = 0;
  (this->FixedText_AscendComplete).TimeExpressionType = None;
  (this->FixedText_AscendComplete).IsExpression = false;
  (this->FixedText_AscendComplete).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_AscendComplete).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_AscendComplete).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_AscendComplete).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_AscendComplete).FormatArgs.ArrayNum = 0;
  (this->FixedText_AscendComplete).FormatArgs.ArrayMax = 0;
  (this->FixedText_AscendProgress).StringTableType = StringUi;
  (this->FixedText_AscendProgress).StringTableID = 0x11944;
  (this->FixedText_AscendProgress).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_AscendProgress).StringEnumTableNameID.Number = 0;
  (this->FixedText_AscendProgress).DateTime.Ticks = 0;
  (this->FixedText_AscendProgress).TimeSpan.Ticks = 0;
  (this->FixedText_AscendProgress).TimeExpressionType = None;
  (this->FixedText_AscendProgress).IsExpression = false;
  (this->FixedText_AscendProgress).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_AscendProgress).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_AscendProgress).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_AscendProgress).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_AscendProgress).FormatArgs.ArrayNum = 0;
  (this->FixedText_AscendProgress).FormatArgs.ArrayMax = 0;
  (this->FixedText_MaxLevel).StringTableType = StringUi;
  (this->FixedText_MaxLevel).StringTableID = 0x11176;
  (this->FixedText_MaxLevel).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_MaxLevel).StringEnumTableNameID.Number = 0;
  (this->FixedText_MaxLevel).DateTime.Ticks = 0;
  (this->FixedText_MaxLevel).TimeSpan.Ticks = 0;
  (this->FixedText_MaxLevel).TimeExpressionType = None;
  (this->FixedText_MaxLevel).IsExpression = false;
  (this->FixedText_MaxLevel).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_MaxLevel).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_MaxLevel).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_MaxLevel).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_MaxLevel).FormatArgs.ArrayNum = 0;
  (this->FixedText_MaxLevel).FormatArgs.ArrayMax = 0;
  (this->FixedText_NotOwnedCharacter).StringTableType = StringUi;
  (this->FixedText_NotOwnedCharacter).StringTableID = 0x11178;
  (this->FixedText_NotOwnedCharacter).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_NotOwnedCharacter).StringEnumTableNameID.Number = 0;
  (this->FixedText_NotOwnedCharacter).DateTime.Ticks = 0;
  (this->FixedText_NotOwnedCharacter).TimeSpan.Ticks = 0;
  (this->FixedText_NotOwnedCharacter).TimeExpressionType = None;
  (this->FixedText_NotOwnedCharacter).IsExpression = false;
  (this->FixedText_NotOwnedCharacter).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_NotOwnedCharacter).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_NotOwnedCharacter).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_NotOwnedCharacter).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_NotOwnedCharacter).FormatArgs.ArrayNum = 0;
  (this->FixedText_NotOwnedCharacter).FormatArgs.ArrayMax = 0;
  (this->FixedText_AscendTimeTitle).StringTableType = StringUi;
  (this->FixedText_AscendTimeTitle).StringTableID = 0x11943;
  (this->FixedText_AscendTimeTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_AscendTimeTitle).StringEnumTableNameID.Number = 0;
  (this->FixedText_AscendTimeTitle).DateTime.Ticks = 0;
  (this->FixedText_AscendTimeTitle).TimeSpan.Ticks = 0;
  (this->FixedText_AscendTimeTitle).TimeExpressionType = None;
  (this->FixedText_AscendTimeTitle).IsExpression = false;
  (this->FixedText_AscendTimeTitle).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_AscendTimeTitle).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_AscendTimeTitle).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_AscendTimeTitle).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_AscendTimeTitle).FormatArgs.ArrayNum = 0;
  (this->FixedText_AscendTimeTitle).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Ascend).StringTableType = StringUi;
  (this->FixedText_Btn_Ascend).StringTableID = 0x6f;
  (this->FixedText_Btn_Ascend).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Ascend).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Ascend).DateTime.Ticks = 0;
  (this->FixedText_Btn_Ascend).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Ascend).TimeExpressionType = None;
  (this->FixedText_Btn_Ascend).IsExpression = false;
  (this->FixedText_Btn_Ascend).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Ascend).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Ascend).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Ascend).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Ascend).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Ascend).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Accel).StringTableType = StringUi;
  (this->FixedText_Btn_Accel).StringTableID = 0x138b;
  (this->FixedText_Btn_Accel).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Accel).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Accel).DateTime.Ticks = 0;
  (this->FixedText_Btn_Accel).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Accel).TimeExpressionType = None;
  (this->FixedText_Btn_Accel).IsExpression = false;
  (this->FixedText_Btn_Accel).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Accel).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Accel).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Accel).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Accel).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Accel).FormatArgs.ArrayMax = 0;
  (this->VM_CurClickedSkillSlot).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->VM_CurClickedSkillSlot).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~UDS_VM_W_Skill @ 14b75b580

void __thiscall UDS_VM_W_Skill::~UDS_VM_W_Skill(UDS_VM_W_Skill *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Skill__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Btn_Accel).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_Accel).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_Accel).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_Accel).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Btn_Ascend).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_Ascend).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_Ascend).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_Ascend).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)
             (this->FixedText_AscendTimeTitle).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_AscendTimeTitle).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_AscendTimeTitle).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_AscendTimeTitle).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)
             (this->FixedText_NotOwnedCharacter).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_NotOwnedCharacter).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_NotOwnedCharacter).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_NotOwnedCharacter).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_MaxLevel).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_MaxLevel).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_MaxLevel).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_MaxLevel).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_AscendProgress).FormatArgs.AllocatorInstance.Data
             ,(this->FixedText_AscendProgress).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_AscendProgress).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_AscendProgress).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_AscendComplete).FormatArgs.AllocatorInstance.Data
             ,(this->FixedText_AscendComplete).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_AscendComplete).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_AscendComplete).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SkillAccelerateBtnDel).Delegate);
  pvVar2 = *(void **)&(this->SkillAccelerateBtnDel).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->SkillAccelerateBtnDel).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SkillAscendBtnDel).Delegate);
  pvVar2 = *(void **)&(this->SkillAscendBtnDel).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->SkillAscendBtnDel).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SkillLevelUpBtnDel).Delegate);
  pvVar2 = *(void **)&(this->SkillLevelUpBtnDel).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->SkillLevelUpBtnDel).Delegate);
  pFVar1 = (this->ItemEntryBindField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MoneyEntryBindField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->SkillAscendTime).FormatArgs.AllocatorInstance.Data,
             (this->SkillAscendTime).FormatArgs.ArrayNum);
  pFVar1 = (this->SkillAscendTime).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SkillAscendTime).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->RemainTimeString).FormatArgs.AllocatorInstance.Data,
             (this->RemainTimeString).FormatArgs.ArrayNum);
  pFVar1 = (this->RemainTimeString).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RemainTimeString).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->MapSkillSlotVM).field_0x48 = 0;
  pvVar2 = *(void **)&(this->MapSkillSlotVM).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UDS_VM_W_SkillInfo_SkillSlot>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UDS_VM_W_SkillInfo_SkillSlot>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UDS_VM_W_SkillInfo_SkillSlot>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MapSkillSlotVM);
  *(undefined4 *)&(this->CharSortTypeMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->CharSortTypeMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,enum_EDS_SortingType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,enum_EDS_SortingType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->CharSortTypeMap);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b75dc10

IClassDescriptor * __thiscall UDS_VM_W_Skill::GetFieldNotificationDescriptor(UDS_VM_W_Skill *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_Skill::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b75e430

UClass * __cdecl UDS_VM_W_Skill::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Skill.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Skill",
               &Z_Registration_Info_UClass_UDS_VM_W_Skill.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Skill,0x520,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_W_Skill>,InternalVTableHelperCtorCaller<UDS_VM_W_Skill>,
               local_res8,UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Skill.InnerSingleton;
}

// GetTickableTickType @ 14b75eeb0

ETickableTickType __thiscall UDS_VM_W_Skill::GetTickableTickType(UDS_VM_W_Skill *this)

{
  return Conditional;
}

// StaticRegisterNativesUDS_VM_W_Skill @ 14b75ef40

void __cdecl UDS_VM_W_Skill::StaticRegisterNativesUDS_VM_W_Skill(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_W_Skill_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnChangedCharSortType @ 14b760270

void __cdecl
UDS_VM_W_Skill::execOnChangedCharSortType(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChangedCharSortType((UDS_VM_W_Skill *)param_1,local_res10[0]);
  return;
}

// operator() @ 14bf3ded0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
`UDS_VM_W_Skill::OnSkillAccelerateClick'::__l2::<lambda_1>::operator()
          (void *this,UDS_UserWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UDS_M_Common_AccelBase_Popup *this_00;
  longlong *plVar5;
  undefined1 auStackY_d8 [32];
  FWeakObjectPtr local_a8;
  UDS_UserWidget *local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pUVar3 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = Z_Construct_UClass_UDS_M_Common_AccelBase_Popup_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar4);
  local_98._8_8_ = pUVar3;
  this_00 = (UDS_M_Common_AccelBase_Popup *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar5 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_00 == (UDS_M_Common_AccelBase_Popup *)0x0) goto LAB_14bf3e013;
  }
  else {
    if (this_00 == (UDS_M_Common_AccelBase_Popup *)0x0) {
LAB_14bf3e013:
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6776846514867142112>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Skill\\DS_VM_W_Skill.cpp"
                         ,0x220,"false");
      if (!bVar2) {
        return;
      }
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  UDS_M_Common_AccelBase_Popup::InitModel(this_00,*(long64 *)this);
  pcVar1 = *(code **)(this_00->_padding_ + 0x2e8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_UserWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_a8.ObjectIndex = 0;
  local_a8.ObjectSerialNumber = 0;
  local_a0 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_UserWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_a8,(FObjectPtr)&local_a0);
  (*pcVar1)(this_00,local_a8);
  return;
}

// GetSkillData @ 14bf57e80

TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> __thiscall
UDS_VM_W_Skill::GetSkillData(UDS_VM_W_Skill *this,int param_1)

{
  bool bVar1;
  ulong64 uVar2;
  UObject *pUVar3;
  UDS_SkillData *this_00;
  int in_register_00000014;
  FWeakObjectPtr this_01;
  int in_R8D;
  UDS_SkillData *local_res10;
  
  this_01.ObjectSerialNumber = in_register_00000014;
  this_01.ObjectIndex = param_1;
  uVar2 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
  UDS_SkillData::GetData((ulong64)this_01,uVar2,SUB41(in_R8D,0));
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_01);
  if (!bVar1) {
    pUVar3 = GetTransientPackageAsObject();
    local_res10 = NewObject<UDS_SkillData>(pUVar3);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res10 != (UDS_SkillData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res10);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)this_01,(FObjectPtr)&local_res10);
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01);
    *(undefined4 *)&pUVar3[4].field_0x8 = 1;
    this_00 = (UDS_SkillData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_01);
    UDS_SkillData::InitSkillData(this_00,in_R8D,1);
  }
  return (TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>)this_01;
}

// InitViewModel @ 14bf5c1e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_W_Skill::InitViewModel(UDS_VM_W_Skill *this)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_W_Common_Condition *this_00;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  ESlateVisibility local_a8 [8];
  FName local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((this->VM_Condition).field0_0x0.DebugPtr == (UDS_VM_W_Common_Condition *)0x0) {
    local_a0.ComparisonIndex.Value = 0;
    local_a0.Number = 0;
    pUVar3 = Z_Construct_UClass_UDS_VM_W_Common_Condition_NoRegister();
    FVar1 = local_a0;
    if (local_a0 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar4 = Z_Construct_UClass_UDS_VM_W_Common_Condition_NoRegister();
    CheckIsClassChildOf_Internal(pUVar4,pUVar3);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar3);
    FVar2 = local_a0;
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_a0.ComparisonIndex = FVar1.ComparisonIndex.Value;
    local_a0.Number = FVar1.Number;
    local_98._16_4_ = local_a0.ComparisonIndex.Value;
    local_98._20_4_ = local_a0.Number;
    local_98._24_4_ = RF_Transient;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_a0 = FVar2;
    local_98._8_8_ = this;
    this_00 = (UDS_VM_W_Common_Condition *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar5 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar5 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    if (this_00 != (UDS_VM_W_Common_Condition *)0x0) {
      *(undefined1 *)((longlong)&this_00->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_00 != (UDS_VM_W_Common_Condition *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    (this->VM_Condition).field0_0x0.DebugPtr = this_00;
    local_a8[0] = Collapsed;
    UDS_VM_W_Common_Condition::SetCountValueVisibility(this_00,local_a8);
  }
  return;
}

// IsUpdate @ 14bf5de70

bool __thiscall UDS_VM_W_Skill::IsUpdate(UDS_VM_W_Skill *this)

{
  if (this->bIsAscending == true) {
    return this->bIsAscendComplete == false;
  }
  return false;
}

// MakeSkillSlotVM @ 14bf5e1d0

UDS_VM_W_SkillInfo_SkillSlot * __thiscall
UDS_VM_W_Skill::MakeSkillSlotVM(UDS_VM_W_Skill *this,int param_1)

{
  FMRSWRecursiveAccessDetector FVar1;
  TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> TVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  TPairInitializer<int_&,UDS_VM_W_SkillInfo_SkillSlot_*_&> local_res8;
  FMRSWRecursiveAccessDetector local_res18 [2];
  FName local_88;
  undefined8 uStack_80;
  bool local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  local_res8.Value._0_4_ = param_1;
  TVar2 = GetSkillData(this,(int)&local_res8);
                    /* WARNING: Load size is inaccurate */
  local_res18[0].State =
       (atomic<unsigned___int64>)
       UDS_VM_W_SkillInfo_SkillSlot::Create
                 ((UObject *)this,(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>)*TVar2.WeakPtr,
                  (TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)local_68);
  local_88 = (FName)OnSkillClicked;
  uStack_80 = (FMRSWRecursiveAccessDetector *)((ulonglong)uStack_80._4_4_ << 0x20);
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy__PEAVUDS_VM_W_SkillInfo_SkillSlot____6B_
    ;
    *(atomic<unsigned___int64> *)(puVar3 + 1) = local_res18[0].State;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_Skill____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy__PEAVUDS_VM_W_SkillInfo_SkillSlot____6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_W_Skill *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar3[3] = 0;
    local_res8.Key = (int *)this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_W_Skill *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res8);
    *(FName *)(puVar3 + 4) = local_88;
    puVar3[5] = uStack_80;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  FVar1.State = local_res18[0].State;
  TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
             ((longlong)local_res18[0].State + 0xb0),
             (TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)local_68);
  uStack_80 = (FMRSWRecursiveAccessDetector *)
              CONCAT44(uStack_80._4_4_,
                       UDS_VM_W_SkillInfo_SkillSlot::FFieldNotificationClassDescriptor::
                       BtnEventField.BitNumber);
  local_88 = UDS_VM_W_SkillInfo_SkillSlot::FFieldNotificationClassDescriptor::BtnEventField.
             FieldName;
  (**(code **)(*(longlong *)((longlong)FVar1.State + 0x28) + 0x38))
            ((longlong *)((longlong)FVar1.State + 0x28),&local_88);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_88);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_78 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(uStack_80,(FDestructionSentinel *)&local_88);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  local_88 = (FName)&local_res8.Value;
  uStack_80 = local_res18;
  TSet<TTuple<int,TObjectPtr<UDS_VM_W_SkillInfo_SkillSlot>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_VM_W_SkillInfo_SkillSlot>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_&,UDS_VM_W_SkillInfo_SkillSlot_*_&>_>
            ((TSet<TTuple<int,TObjectPtr<UDS_VM_W_SkillInfo_SkillSlot>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_VM_W_SkillInfo_SkillSlot>,0>,FDefaultSetAllocator>
              *)&this->MapSkillSlotVM,&local_res8,(bool *)&local_88);
  return (UDS_VM_W_SkillInfo_SkillSlot *)local_res18[0].State;
}

// OnChangedCharSortType @ 14bf5fe90

void __thiscall UDS_VM_W_Skill::OnChangedCharSortType(UDS_VM_W_Skill *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  EDS_SortingType *pEVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->CharSortTypeMap).field_0x8 != *(int *)&(this->CharSortTypeMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->CharSortTypeMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->CharSortTypeMap).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->CharSortTypeMap).field_0x48 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->CharSortTypeMap;
      while (*(int *)(lVar1 + (longlong)iVar2 * 0x10) != param_1) {
        iVar2 = *(int *)(lVar1 + 8 + (longlong)iVar2 * 0x10);
        if (iVar2 == -1) {
          return;
        }
      }
      pEVar3 = TMapBase<int,enum_EDS_SortingType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,enum_EDS_SortingType,0>_>
               ::FindChecked(&this->CharSortTypeMap,param_1);
      this->SelectedCharSortType = *pEVar3;
    }
  }
  return;
}

// OnCharSlotClick @ 14bf610d0

void __thiscall UDS_VM_W_Skill::OnCharSlotClick(UDS_VM_W_Skill *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  UDS_PlayerData *this_00;
  FDS_CharacterBaseTableRow *this_01;
  FWeakObjectPtr local_res18;
  FName local_res20;
  FName local_28;
  int local_20;
  TArray<FDS_SkillTableRow_const_*,TSizedDefaultAllocator<32>_> local_18;
  
  UDS_PlayerData::GetMainPlayerData();
  bVar3 = FWeakObjectPtr::IsValid(&local_res18);
  iVar2 = FFieldNotificationClassDescriptor::bIsOwnedCharacter.BitNumber;
  if (bVar3) {
    local_res20 = FFieldNotificationClassDescriptor::bIsOwnedCharacter.FieldName;
    this_00 = (UDS_PlayerData *)FWeakObjectPtr::Get(&local_res18);
    bVar3 = UDS_PlayerData::IsHaveChar(this_00,param_1);
    if (this->bIsOwnedCharacter != bVar3) {
      this->bIsOwnedCharacter = bVar3;
      local_28 = local_res20;
      local_20 = iVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
    }
    this_01 = FDS_CharacterBaseTableRow::GetRef((longlong)param_1,true);
    FDS_CharacterBaseTableRow::ID_DefaultSkillTables(this_01,&local_18);
    if (local_18.ArrayNum == 0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6776846514867142198>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Skill\\DS_VM_W_Skill.cpp"
                         ,0x1ca,"false");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      if (local_18.ArrayNum < 1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      this->SelectSkillID = *(int *)(*(longlong *)local_18.AllocatorInstance.Data + 8);
      RefreshSkillSlots(this);
      RefreshItems(this);
      RefreshInfoPanel(this);
    }
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6776846514867142208>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Skill\\DS_VM_W_Skill.cpp"
                       ,0x1c0,"false");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnCloseInit @ 14bf635e0

void __thiscall UDS_VM_W_Skill::OnCloseInit(UDS_VM_W_Skill *this)

{
  UDS_VM_W_SkillDetailPopup::ClosePopup();
  UDS_ViewModelBase::OnCloseInit((UDS_ViewModelBase *)this);
  return;
}

// OnEventSkillItemSlotModel @ 14bf63e10

void __thiscall
UDS_VM_W_Skill::OnEventSkillItemSlotModel
          (UDS_VM_W_Skill *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  
  local_res10 = param_1.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar2) {
    return;
  }
  pUVar3 = FWeakObjectPtr::Get(&local_res10);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar3 + 1));
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14bf63e70;
  }
  pUVar3 = (UObject *)0x0;
LAB_14bf63e70:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_res20 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&local_res18);
    (**(code **)(*(longlong *)pUVar3 + 0x380))(pUVar3);
  }
  return;
}

// OnItemSlotClick @ 14bf643b0

void __thiscall UDS_VM_W_Skill::OnItemSlotClick(UDS_VM_W_Skill *this,long64 *param_1)

{
  return;
}

// OnSetViewModel @ 14bf6fba0

void __thiscall
UDS_VM_W_Skill::OnSetViewModel(UDS_VM_W_Skill *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  UDS_PlayerData *this_00;
  FDS_CharacterBaseTableRow *this_01;
  FWeakObjectPtr local_res10;
  FName local_res18;
  FName local_38;
  int local_30;
  TArray<FDS_SkillTableRow_const_*,TSizedDefaultAllocator<32>_> local_28;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  iVar5 = UDS_PlayerData::GetMainPlayerCurrentCharID();
  UDS_PlayerData::GetMainPlayerData();
  bVar4 = FWeakObjectPtr::IsValid(&local_res10);
  iVar3 = FFieldNotificationClassDescriptor::bIsOwnedCharacter.BitNumber;
  if (bVar4) {
    local_res18 = FFieldNotificationClassDescriptor::bIsOwnedCharacter.FieldName;
    this_00 = (UDS_PlayerData *)FWeakObjectPtr::Get(&local_res10);
    bVar4 = UDS_PlayerData::IsHaveChar(this_00,iVar5);
    if (this->bIsOwnedCharacter != bVar4) {
      this->bIsOwnedCharacter = bVar4;
      local_38 = local_res18;
      local_30 = iVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
    }
    this_01 = FDS_CharacterBaseTableRow::GetRef((longlong)iVar5,true);
    FDS_CharacterBaseTableRow::ID_DefaultSkillTables(this_01,&local_28);
    if (local_28.ArrayNum == 0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6776846514867142198>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Skill\\DS_VM_W_Skill.cpp"
                         ,0x1ca,"false");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      if (local_28.ArrayNum < 1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      this->SelectSkillID = *(int *)(*(longlong *)local_28.AllocatorInstance.Data + 8);
      RefreshSkillSlots(this);
      RefreshItems(this);
      RefreshInfoPanel(this);
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6776846514867142208>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Skill\\DS_VM_W_Skill.cpp"
                       ,0x1c0,"false");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnSkillAccelerateClick @ 14bf70280

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_Skill::OnSkillAccelerateClick(UDS_VM_W_Skill *this,UObject *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  UDS_WindowManager *this_00;
  UObject *pUVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FWeakObjectPtr local_res18;
  UDS_VM_W_Skill *local_res20;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6776846514867142129>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Skill\\DS_VM_W_Skill.cpp"
                       ,0x20f,"false");
    if (!bVar3) {
      return;
    }
code_r0x00014bf70327:
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  GetSkillData(this,(int)&local_res18);
  bVar3 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar3) {
    pUVar4 = FWeakObjectPtr::Get(&local_res18);
    local_68 = (undefined1  [8])0x0;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    uVar1 = *(undefined8 *)(pUVar4 + 4);
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_50);
    local_38 = &local_60;
    puVar5 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[2] = uVar6;
      *puVar5 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,`UDS_VM_W_Skill::OnSkillAccelerateClick'::`2'::<lambda_1>_>
                 ::_vftable_;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar5[3] = 0;
      local_res20 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_res20);
      puVar5[4] = uVar1;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    UDS_WindowManager::OpenWindow
              (this_00,PopupAccelBase,
               (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)local_68);
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6776846514867142122>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Skill\\DS_VM_W_Skill.cpp"
                       ,0x216,"false");
    if (bVar3) goto code_r0x00014bf70327;
  }
  return;
}

// OnSkillAccelerateSuccess @ 14bf70460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_W_Skill::OnSkillAccelerateSuccess(UDS_VM_W_Skill *this)

{
  FScriptContainerElement FVar1;
  undefined8 uVar2;
  code *pcVar3;
  FName FVar4;
  FName FVar5;
  int iVar6;
  UDS_M_ItemImplBase *this_00;
  bool bVar7;
  int iVar8;
  uint uVar9;
  UObject *pUVar10;
  FDS_SkillGrowLevelTableRow *pFVar11;
  FDS_MoneyBaseTableRow *pFVar12;
  UClass *pUVar13;
  UDS_M_CommonAsset *pUVar14;
  UDS_UserObjectListItem *pUVar15;
  undefined8 *puVar16;
  FDS_QuestBaseTableRow *pFVar17;
  ulong64 uVar18;
  UDS_SkillData *pUVar19;
  longlong *plVar20;
  TObjectPtr<UDS_UserObjectListItem>_u_0 TVar21;
  FName *pFVar22;
  uint uVar23;
  ulonglong uVar24;
  int iVar25;
  uint uVar26;
  longlong lVar27;
  ulonglong uVar28;
  undefined1 auVar29 [16];
  undefined1 auStackY_3d8 [32];
  FWeakObjectPtr FStack_398;
  undefined1 auStack_390 [8];
  FDelegateAllocation FStack_388;
  UDS_M_ItemImplBase *pUStack_378;
  UDS_M_CommonAsset *pUStack_370;
  UDS_UserObjectListItem *apUStack_368 [2];
  FDS_Text FStack_358;
  undefined1 auStack_308 [8];
  undefined4 uStack_300;
  uint uStack_2fc;
  FTimespan FStack_2f8;
  UDS_VM_W_Skill *pUStack_2f0;
  UDS_VM_W_Skill *pUStack_2e8;
  UDS_VM_W_Skill *pUStack_2e0;
  UDS_VM_W_Skill *apUStack_2d8 [2];
  FName FStack_2c8;
  int iStack_2c0;
  FName FStack_2b8;
  int iStack_2b0;
  FName FStack_2a8;
  int iStack_2a0;
  FName FStack_298;
  int iStack_290;
  FName FStack_288;
  int iStack_280;
  FName FStack_278;
  int iStack_270;
  FName FStack_268;
  int iStack_260;
  FName FStack_258;
  int iStack_250;
  FName FStack_248;
  int iStack_240;
  FName FStack_238;
  int iStack_230;
  FName FStack_228;
  int iStack_220;
  FName FStack_218;
  int iStack_210;
  FName FStack_208;
  int iStack_200;
  FName FStack_1f8;
  int iStack_1f0;
  FName FStack_1e8;
  int iStack_1e0;
  FName FStack_1d8;
  int iStack_1d0;
  FName FStack_1c8;
  int iStack_1c0;
  FWeakObjectPtr FStack_1b8;
  UDS_UserObjectListItem *pUStack_1b0;
  TSharedPtr<FDS_ViewModelContext,1> TStack_1a8;
  TSharedPtr<FDS_ViewModelContext,1> TStack_198;
  FDestructionSentinel FStack_188;
  FDestructionSentinel FStack_170;
  FDelegateAllocation *pFStack_158;
  FDestructionSentinel FStack_150;
  undefined1 *puStack_138;
  FDestructionSentinel FStack_130;
  undefined1 *puStack_118;
  FDestructionSentinel FStack_110;
  undefined1 *puStack_f8;
  undefined1 auStack_f0 [8];
  TReferenceControllerBase<1> *pTStack_e8;
  FName FStack_e0;
  FName aFStack_d8 [2];
  undefined1 auStack_c8 [128];
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_3d8;
  GetSkillData(this,(int)&FStack_398);
  bVar7 = FWeakObjectPtr::IsValid(&FStack_398);
  if (bVar7) {
    pUVar10 = FWeakObjectPtr::Get(&FStack_398);
    pFVar11 = FDS_SkillGrowLevelTableRow::GetRef
                        ((longlong)(this->SelectSkillID * 100 + 1 + *(int *)&pUVar10[4].field_0x8),
                         true);
    if ((pFVar11->ID_SkillGrowItem).ArrayNum == (pFVar11->SkillGrowItemCount).ArrayNum) {
      TDS_DataSetGetter<UDS_MoneyDataSet>::Get((ulong64)&FStack_1b8);
      bVar7 = FWeakObjectPtr::IsValid(&FStack_1b8);
      FVar4 = FFieldNotificationClassDescriptor::bIsNextAscend.FieldName;
      if (bVar7) {
        if (this->bIsNextAscend != pFVar11->IsAscendLevel) {
          iStack_2c0 = FFieldNotificationClassDescriptor::bIsNextAscend.BitNumber;
          this->bIsNextAscend = pFVar11->IsAscendLevel;
          FStack_2c8 = FVar4;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_2c8);
        }
        FDS_EntryBindingEventField::Reset(&this->MoneyEntryBindField);
        iVar25 = (pFVar11->SkillGrowMoneyType).ArrayNum;
        uVar26 = 0;
        if (((pFVar11->SkillGrowMoneyValue).ArrayNum == iVar25) && (0 < iVar25)) {
          lVar27 = 0;
          do {
            uVar23 = 0;
            if ((int)uVar26 < (pFVar11->SkillGrowMoneyType).ArrayNum) {
              uVar23 = ~uVar26 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FVar1 = (pFVar11->SkillGrowMoneyType).AllocatorInstance.Data[lVar27];
            uVar23 = 0;
            if ((int)uVar26 < (pFVar11->SkillGrowMoneyValue).ArrayNum) {
              uVar23 = ~uVar26 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar2 = *(undefined8 *)
                     ((pFVar11->SkillGrowMoneyValue).AllocatorInstance.Data + lVar27 * 8);
            pFVar12 = FDS_MoneyBaseTableRow::GetRef((ulonglong)(byte)FVar1,true);
            pUVar10 = GetTransientPackageAsObject();
            FObjectInitializer::AssertIfInConstructor
                      (pUVar10,
                       L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                      );
            pUVar13 = Z_Construct_UClass_UDS_M_CommonAsset_NoRegister();
            FStaticConstructObjectParameters::FStaticConstructObjectParameters
                      ((FStaticConstructObjectParameters *)auStack_c8,pUVar13);
            auStack_c8._8_8_ = pUVar10;
            pUVar14 = (UDS_M_CommonAsset *)
                      StaticConstructObject_Internal((FStaticConstructObjectParameters *)auStack_c8)
            ;
            pUStack_370 = pUVar14;
            if (auStack_c8._64_8_ != 0) {
              plVar20 = (longlong *)(auStack_c8 + 0x50);
              if ((longlong *)auStack_c8._104_8_ != (longlong *)0x0) {
                plVar20 = (longlong *)auStack_c8._104_8_;
              }
              (**(code **)(*plVar20 + 0x10))();
            }
            iVar25 = (int)uVar2;
            UDS_M_CommonAsset::Init(pUVar14,pFVar12->ID_MoneyIcon,iVar25,iVar25,false);
            pUVar15 = NewObject<UDS_UserObjectListItem>((UObject *)this);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar15 != (UDS_UserObjectListItem *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar15);
            }
            pcVar3 = *(code **)(pUVar14->_padding_ + 0x308);
            ::FName::FName(&FStack_e0,L"");
            ::FName::FName(aFStack_d8,L"");
            puVar16 = (undefined8 *)(*pcVar3)(pUStack_370,auStack_f0);
            TStack_198.Object = (FDS_ViewModelContext *)*puVar16;
            TStack_198.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)puVar16[1];
            if (TStack_198.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (TStack_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(TStack_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            UDS_UserObjectListItem::AddContext(pUVar15,&TStack_198);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_e8);
            pUStack_1b0 = pUVar15;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar15 != (UDS_UserObjectListItem *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar15);
            }
            FDS_EntryBindingEventField::Add
                      (&this->MoneyEntryBindField,(TObjectPtr<UDS_UserObjectListItem>)&pUStack_1b0);
            uVar26 = uVar26 + 1;
            lVar27 = lVar27 + 1;
          } while ((int)uVar26 < (pFVar11->SkillGrowMoneyType).ArrayNum);
        }
        uVar26 = 0;
        iStack_2b0 = FFieldNotificationClassDescriptor::MoneyEntryBindField.BitNumber;
        FStack_2b8 = FFieldNotificationClassDescriptor::MoneyEntryBindField.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_2b8);
        FDS_Text::Reset(&this->SkillAscendTime);
        if ((pFVar11->IsAscendLevel != false) && (0.0 < pFVar11->AscendProcessTime)) {
          auVar29._0_8_ = (double)(pFVar11->AscendProcessTime * __real_4b189680 + __real_3f000000);
          auVar29._8_8_ = 0;
          auVar29 = roundpd(auVar29,auVar29,1);
          FStack_2f8.Ticks = (long64)auVar29._0_8_;
          FDS_Text::SetTextFromTimespan(&this->SkillAscendTime,&FStack_2f8,DayHourSec,false);
        }
        TVar21.DebugPtr = (UDS_UserObjectListItem *)&FStack_2a8;
        iStack_2a0 = FFieldNotificationClassDescriptor::SkillAscendTime.BitNumber;
        FStack_2a8 = FFieldNotificationClassDescriptor::SkillAscendTime.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,TVar21.DebugPtr);
        if ((this->VM_Condition).field0_0x0.DebugPtr != (UDS_VM_W_Common_Condition *)0x0) {
          this->VM_ConditionVisibility = SelfHitTestInvisible;
          FStack_358.StringTableType = None;
          FStack_358.StringTableID = 0;
          FStack_358.StringEnumTableNameID.ComparisonIndex.Value = 0;
          FStack_358.StringEnumTableNameID.Number = 0;
          FStack_358.DateTime.Ticks = 0;
          FStack_358.TimeSpan.Ticks = 0;
          FStack_358.TimeExpressionType = None;
          FStack_358.IsExpression = false;
          FStack_358.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          FStack_358.UniqueString.Data.ArrayNum = 0;
          FStack_358.UniqueString.Data.ArrayMax = 0;
          FStack_358.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          FStack_358.FormatArgs.ArrayNum = 0;
          FStack_358.FormatArgs.ArrayMax = 0;
          if (pFVar11->ID_ReqCheckQuest == 0) {
            if (pFVar11->ReqCharLevel == 0) {
              this->VM_ConditionVisibility = Collapsed;
            }
            else {
              FDS_Text::SetTextFormatFromStringTable<int_const_&>
                        (&FStack_358,StringUi,0x11173,&pFVar11->ReqCharLevel);
            }
          }
          else {
            pFVar17 = FDS_QuestBaseTableRow::GetRef((longlong)pFVar11->ID_ReqCheckQuest,true);
            FStack_358.StringTableType = StringUi;
            FStack_358.StringTableID = 0x11172;
            DestructItems<FDS_TextFormatArg,int>
                      ((FDS_TextFormatArg *)FStack_358.FormatArgs.AllocatorInstance.Data,
                       FStack_358.FormatArgs.ArrayNum);
            iVar25 = 0;
            if (FStack_358.FormatArgs.ArrayMax != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x28,8,0,&FStack_358.FormatArgs.AllocatorInstance,0,
                         &FStack_358.FormatArgs.ArrayMax);
              iVar25 = FStack_358.FormatArgs.ArrayMax;
            }
            iVar8 = FStack_358.FormatArgs.ArrayNum;
            if (FStack_358.FormatArgs.ArrayNum == iVar25) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x828,&FStack_358.FormatArgs.AllocatorInstance,
                                 &FStack_358.FormatArgs.ArrayMax);
            }
            FStack_358.FormatArgs.ArrayNum = iVar8 + 1;
            FDS_TextFormatArg::FDS_TextFormatArg<FDS_StringQuestID_const_&>
                      ((FDS_TextFormatArg *)
                       (FStack_358.FormatArgs.AllocatorInstance.Data + (longlong)iVar8 * 0x28),
                       &pFVar17->ID_QuestTitleId);
          }
          UDS_VM_W_Common_Condition::SetConditionText
                    ((this->VM_Condition).field0_0x0.DebugPtr,&FStack_358);
          iStack_290 = FFieldNotificationClassDescriptor::VM_Condition.BitNumber;
          FStack_298 = FFieldNotificationClassDescriptor::VM_Condition.FieldName;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_298);
          iStack_280 = FFieldNotificationClassDescriptor::VM_ConditionVisibility.BitNumber;
          FStack_288 = FFieldNotificationClassDescriptor::VM_ConditionVisibility.FieldName;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_288);
          TVar21.DebugPtr = (UDS_UserObjectListItem *)(FStack_358.FormatArgs._8_8_ & 0xffffffff);
          DestructItems<FDS_TextFormatArg,int>
                    ((FDS_TextFormatArg *)FStack_358.FormatArgs.AllocatorInstance.Data,
                     FStack_358.FormatArgs.ArrayNum);
          if ((FDS_TextFormatArg *)FStack_358.FormatArgs.AllocatorInstance.Data !=
              (FDS_TextFormatArg *)0x0) {
            FMemory::Free(FStack_358.FormatArgs.AllocatorInstance.Data);
          }
          if (FStack_358.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(FStack_358.UniqueString.Data.AllocatorInstance.Data);
          }
        }
        FDS_EntryBindingEventField::Reset(&this->ItemEntryBindField);
        uVar23 = uStack_2fc;
        if (0 < (pFVar11->ID_SkillGrowItem).ArrayNum) {
          pUStack_370 = (UDS_M_CommonAsset *)0x0;
          do {
            pUVar14 = pUStack_370;
            uVar9 = 0;
            if ((int)uVar26 < (pFVar11->ID_SkillGrowItem).ArrayNum) {
              uVar9 = ~uVar26 >> 0x1f;
            }
            if (uVar9 == 0) {
              TVar21.DebugPtr = (UDS_UserObjectListItem *)0x1506109c0;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            uVar9 = 0;
            if ((int)uVar26 < (pFVar11->SkillGrowItemCount).ArrayNum) {
              uVar9 = ~uVar26 >> 0x1f;
            }
            if (uVar9 == 0) {
              TVar21.DebugPtr = (UDS_UserObjectListItem *)0x1506109c0;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            iVar25 = *(int *)((longlong)&pUVar14->_padding_ +
                             (longlong)(pFVar11->SkillGrowItemCount).AllocatorInstance.Data);
            pUVar15 = NewObject<UDS_UserObjectListItem>((UObject *)this);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar15 != (UDS_UserObjectListItem *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar15);
            }
            TVar21._0_1_ = 0xd;
            DS_ItemDataUtil::CreateItemModel((EDS_ItemSlotStateType)&pUStack_378,TVar21._0_4_);
            if (pUStack_378 != (UDS_M_ItemImplBase *)0x0) {
              UDS_M_ItemImplBase::SetQuantity(pUStack_378,iVar25);
              this_00 = pUStack_378;
              auStack_390 = (undefined1  [8])0x0;
              FStack_388.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
              FStack_388.DelegateSize = 0;
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_390,
                         (FWriteAccessScope *)&FStack_170);
              pFStack_158 = &FStack_388;
              puVar16 = UE::Core::Private::DelegateAllocate(0x30,&FStack_388);
              if (puVar16 != (undefined8 *)0x0) {
                *puVar16 = &
                           ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
                ;
                uVar18 = FDelegateHandle::GenerateNewID();
                puVar16[2] = uVar18;
                *puVar16 = &
                           ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_Skill____A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
                ;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)this);
                }
                puVar16[3] = 0;
                pUStack_2f0 = this;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)this);
                }
                FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar16 + 3),(FObjectPtr)&pUStack_2f0);
                puVar16[4] = OnEventSkillItemSlotModel;
                puVar16[5] = (ulonglong)uVar23 << 0x20;
              }
              if (FStack_170.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_170.Accessor,&FStack_170);
              }
              UDS_ModelBase::AddUpdateModelDelegate
                        ((UDS_ModelBase *)this_00,
                         (TDelegate<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                          *)auStack_390);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_390,
                         (FWriteAccessScope *)&FStack_188);
              if ((FStack_388.DelegateSize != 0) &&
                 (FStack_388.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
                (*(code *)**(undefined8 **)FStack_388.DelegateAllocator)();
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          ((ForAnyElementType *)&FStack_388,0,0,0x10);
                FStack_388.DelegateSize = 0;
              }
              if (FStack_188.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_188.Accessor,&FStack_188);
              }
              if (FStack_388.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
                FMemory::Free((void *)FStack_388.DelegateAllocator);
              }
              FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                        ((FMRSWRecursiveAccessDetector *)auStack_390);
              UDS_M_ItemImplBase::SetSelected(pUStack_378,false);
              puVar16 = (undefined8 *)
                        (**(code **)(pUStack_378->_padding_ + 0x310))(pUStack_378,auStack_308);
              TStack_1a8.Object = (FDS_ViewModelContext *)*puVar16;
              TStack_1a8.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)puVar16[1];
              if (TStack_1a8.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (TStack_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(TStack_1a8.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              UDS_UserObjectListItem::AddContext(pUVar15,&TStack_1a8);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)CONCAT44(uStack_2fc,uStack_300));
              apUStack_368[0] = pUVar15;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar15 != (UDS_UserObjectListItem *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)pUVar15);
              }
              TVar21.DebugPtr = (UDS_UserObjectListItem *)apUStack_368;
              FDS_EntryBindingEventField::Add
                        (&this->ItemEntryBindField,
                         (TObjectPtr<UDS_UserObjectListItem>)TVar21.ObjectPtr.field0_0x0);
            }
            uVar26 = uVar26 + 1;
            pUStack_370 = (UDS_M_CommonAsset *)((longlong)&pUStack_370->_padding_ + 4);
          } while ((int)uVar26 < (pFVar11->ID_SkillGrowItem).ArrayNum);
        }
        uVar24 = 0;
        iStack_270 = FFieldNotificationClassDescriptor::ItemEntryBindField.BitNumber;
        FStack_278 = FFieldNotificationClassDescriptor::ItemEntryBindField.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_278);
        iVar25 = (pFVar11->SkillGrowMoneyType).ArrayNum;
        if (iVar25 == (pFVar11->SkillGrowMoneyValue).ArrayNum) {
          uVar28 = uVar24;
          if (0 < iVar25) {
            do {
              uVar23 = (uint)uVar24;
              uVar26 = 0;
              if ((int)uVar23 < (pFVar11->SkillGrowMoneyType).ArrayNum) {
                uVar26 = ~uVar23 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              FVar1 = (pFVar11->SkillGrowMoneyType).AllocatorInstance.Data[uVar28];
              uVar26 = 0;
              if ((int)uVar23 < (pFVar11->SkillGrowMoneyValue).ArrayNum) {
                uVar26 = ~uVar23 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar25 = *(int *)((pFVar11->SkillGrowMoneyValue).AllocatorInstance.Data + uVar28 * 8);
              pFVar12 = FDS_MoneyBaseTableRow::GetRef((ulonglong)(byte)FVar1,true);
              iVar6 = FFieldNotificationClassDescriptor::MoneyIconID2.BitNumber;
              FVar5 = FFieldNotificationClassDescriptor::MoneyIconID2.FieldName;
              iVar8 = FFieldNotificationClassDescriptor::MoneyIconID1.BitNumber;
              FVar4 = FFieldNotificationClassDescriptor::MoneyIconID1.FieldName;
              if (uVar23 == 0) {
                if (this->MoneyIconID1 != pFVar12->ID_MoneyIcon) {
                  this->MoneyIconID1 = pFVar12->ID_MoneyIcon;
                  iStack_260 = iVar8;
                  FStack_268 = FVar4;
                  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_268);
                }
                iVar8 = FFieldNotificationClassDescriptor::MoneyValue1.BitNumber;
                FVar4 = FFieldNotificationClassDescriptor::MoneyValue1.FieldName;
                if (this->MoneyValue1 != iVar25) {
                  this->MoneyValue1 = iVar25;
                  pFVar22 = &FStack_258;
                  FStack_258 = FVar4;
                  iStack_250 = iVar8;
LAB_14bf76e89:
                  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar22);
                }
              }
              else if (uVar23 == 1) {
                if (this->MoneyIconID2 != pFVar12->ID_MoneyIcon) {
                  this->MoneyIconID2 = pFVar12->ID_MoneyIcon;
                  iStack_240 = iVar6;
                  FStack_248 = FVar5;
                  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_248);
                }
                iVar8 = FFieldNotificationClassDescriptor::MoneyValue2.BitNumber;
                FVar4 = FFieldNotificationClassDescriptor::MoneyValue2.FieldName;
                if (this->MoneyValue2 != iVar25) {
                  this->MoneyValue2 = iVar25;
                  pFVar22 = &FStack_238;
                  FStack_238 = FVar4;
                  iStack_230 = iVar8;
                  goto LAB_14bf76e89;
                }
              }
              uVar24 = (ulonglong)(uVar23 + 1);
              uVar28 = uVar28 + 1;
            } while ((int)(uVar23 + 1) < (pFVar11->SkillGrowMoneyType).ArrayNum);
          }
          uVar26 = uStack_2fc;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &(this->SkillLevelUpBtnDel).Delegate,(FWriteAccessScope *)&FStack_150);
          puStack_138 = &(this->SkillLevelUpBtnDel).Delegate.field_0x8;
          puVar16 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puStack_138);
          if (puVar16 != (undefined8 *)0x0) {
            *puVar16 = &
                       ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar18 = FDelegateHandle::GenerateNewID();
            puVar16[2] = uVar18;
            *puVar16 = &
                       ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_Skill____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            puVar16[3] = 0;
            pUStack_2e8 = this;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar16 + 3),(FObjectPtr)&pUStack_2e8);
            puVar16[4] = OnSkillLevelUpClick;
            puVar16[5] = (ulonglong)uVar26 << 0x20;
          }
          if (FStack_150.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_150.Accessor,&FStack_150);
          }
          iStack_220 = FFieldNotificationClassDescriptor::SkillLevelUpBtnDel.BitNumber;
          FStack_228 = FFieldNotificationClassDescriptor::SkillLevelUpBtnDel.FieldName;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_228);
          uVar26 = uStack_2fc;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &(this->SkillAccelerateBtnDel).Delegate,(FWriteAccessScope *)&FStack_130);
          puStack_118 = &(this->SkillAccelerateBtnDel).Delegate.field_0x8;
          puVar16 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puStack_118);
          if (puVar16 != (undefined8 *)0x0) {
            *puVar16 = &
                       ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar18 = FDelegateHandle::GenerateNewID();
            puVar16[2] = uVar18;
            *puVar16 = &
                       ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_Skill____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            puVar16[3] = 0;
            pUStack_2e0 = this;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar16 + 3),(FObjectPtr)&pUStack_2e0);
            puVar16[4] = OnSkillAccelerateClick;
            puVar16[5] = (ulonglong)uVar26 << 0x20;
          }
          if (FStack_130.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_130.Accessor,&FStack_130);
          }
          iStack_210 = FFieldNotificationClassDescriptor::SkillAccelerateBtnDel.BitNumber;
          FStack_218 = FFieldNotificationClassDescriptor::SkillAccelerateBtnDel.FieldName;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_218);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &(this->SkillAscendBtnDel).Delegate,(FWriteAccessScope *)&FStack_110);
          puStack_f8 = &(this->SkillAscendBtnDel).Delegate.field_0x8;
          puVar16 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puStack_f8);
          if (puVar16 != (undefined8 *)0x0) {
            *puVar16 = &
                       ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar18 = FDelegateHandle::GenerateNewID();
            puVar16[2] = uVar18;
            *puVar16 = &
                       ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_Skill____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            puVar16[3] = 0;
            apUStack_2d8[0] = this;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar16 + 3),(FObjectPtr)apUStack_2d8);
            puVar16[4] = OnSkillAscendBtnClick;
            puVar16[5] = (ulonglong)uStack_2fc << 0x20;
          }
          if (FStack_110.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_110.Accessor,&FStack_110);
          }
          iStack_200 = FFieldNotificationClassDescriptor::SkillAscendBtnDel.BitNumber;
          FStack_208 = FFieldNotificationClassDescriptor::SkillAscendBtnDel.FieldName;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_208);
          iVar25 = FFieldNotificationClassDescriptor::bIsCanGrow.BitNumber;
          FVar4 = FFieldNotificationClassDescriptor::bIsCanGrow.FieldName;
          pUVar19 = (UDS_SkillData *)FWeakObjectPtr::Get(&FStack_398);
          bVar7 = UDS_SkillData::IsCanGrow(pUVar19);
          if (this->bIsCanGrow != bVar7) {
            this->bIsCanGrow = bVar7;
            FStack_1f8 = FVar4;
            iStack_1f0 = iVar25;
            (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_1f8);
          }
          iVar25 = FFieldNotificationClassDescriptor::bIsMaxLevel.BitNumber;
          FVar4 = FFieldNotificationClassDescriptor::bIsMaxLevel.FieldName;
          pUVar19 = (UDS_SkillData *)FWeakObjectPtr::Get(&FStack_398);
          bVar7 = UDS_SkillData::IsMaxLevel(pUVar19);
          if (this->bIsMaxLevel != bVar7) {
            this->bIsMaxLevel = bVar7;
            FStack_1e8 = FVar4;
            iStack_1e0 = iVar25;
            (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_1e8);
          }
          iVar25 = FFieldNotificationClassDescriptor::bIsAscendComplete.BitNumber;
          FVar4 = FFieldNotificationClassDescriptor::bIsAscendComplete.FieldName;
          pUVar19 = (UDS_SkillData *)FWeakObjectPtr::Get(&FStack_398);
          bVar7 = UDS_SkillData::IsAscendComplete(pUVar19);
          if (this->bIsAscendComplete != bVar7) {
            this->bIsAscendComplete = bVar7;
            FStack_1d8 = FVar4;
            iStack_1d0 = iVar25;
            (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_1d8);
          }
          iVar25 = FFieldNotificationClassDescriptor::bIsAscending.BitNumber;
          FVar4 = FFieldNotificationClassDescriptor::bIsAscending.FieldName;
          pUVar19 = (UDS_SkillData *)FWeakObjectPtr::Get(&FStack_398);
          bVar7 = UDS_SkillData::IsAscending(pUVar19);
          if (this->bIsAscending != bVar7) {
            this->bIsAscending = bVar7;
            FStack_1c8 = FVar4;
            iStack_1c0 = iVar25;
            (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_1c8);
          }
        }
        else {
          bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_6776846514867142319>,true,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Skill\\DS_VM_W_Skill.cpp"
                             ,0x151,"false");
          if (bVar7) goto code_r0x00014bf76cd3;
        }
      }
      else {
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_6776846514867142404>,true,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Skill\\DS_VM_W_Skill.cpp"
                           ,0xfc,"false");
        if (bVar7) goto code_r0x00014bf76cd3;
      }
    }
    else {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6776846514867142411>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Skill\\DS_VM_W_Skill.cpp"
                         ,0xf5,"false");
      if (bVar7) goto code_r0x00014bf76cd3;
    }
  }
  else {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6776846514867142418>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Skill\\DS_VM_W_Skill.cpp"
                       ,0xee,"false");
    if (bVar7) {
code_r0x00014bf76cd3:
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// OnSkillAscendBtnClick @ 14bf70470

void __thiscall UDS_VM_W_Skill::OnSkillAscendBtnClick(UDS_VM_W_Skill *this,UObject *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  undefined8 *puVar5;
  UObject *pUVar6;
  FWeakObjectPtr local_res8;
  UDS_VM_W_Skill *local_res18 [2];
  uint uStack_5c;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  iVar1 = this->SelectSkillID;
  uVar4 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
  UDS_SkillData::GetData((ulong64)&local_res8,uVar4,SUB41(iVar1,0));
  bVar3 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar3) {
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar5 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar5[2] = uVar4;
      *puVar5 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_Skill____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar5[3] = 0;
      local_res18[0] = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)local_res18);
      puVar5[4] = OnSkillAscendSuccess;
      puVar5[5] = (ulonglong)uStack_5c << 0x20;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    pUVar6 = FWeakObjectPtr::Get(&local_res8);
    FDS_CharacterService::RequestSkillAscendComplete
              (*(long64 *)(pUVar6 + 4),
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_58);
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6776846514867142094>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Skill\\DS_VM_W_Skill.cpp"
                       ,0x232,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// OnSkillAscendSuccess @ 14bf70610

void __thiscall UDS_VM_W_Skill::OnSkillAscendSuccess(UDS_VM_W_Skill *this)

{
  bool bVar1;
  UDS_VM_W_SkillInfo_SkillSlot *this_00;
  
  RefreshInfoPanel(this);
  RefreshItems(this);
  RefreshSkillSlots(this);
  bVar1 = FWeakObjectPtr::IsValid(&(this->VM_CurClickedSkillSlot).WeakPtr);
  if (bVar1) {
    this_00 = (UDS_VM_W_SkillInfo_SkillSlot *)
              FWeakObjectPtr::Get(&(this->VM_CurClickedSkillSlot).WeakPtr);
    UDS_VM_W_SkillInfo_SkillSlot::OnUpgrade(this_00);
    return;
  }
  return;
}

// OnSkillClicked @ 14bf70670

void __thiscall
UDS_VM_W_Skill::OnSkillClicked
          (UDS_VM_W_Skill *this,UObject *param_1,UDS_VM_W_SkillInfo_SkillSlot *param_2)

{
  UDS_VM_SkillData *pUVar1;
  FName FVar2;
  bool bVar3;
  int iVar4;
  UObject *pUVar5;
  UDS_VM_W_SkillInfo_SkillSlot *local_res8;
  FName local_18;
  int local_10;
  
  bVar3 = TWeakObjectPtr<UDS_VM_W_SkillInfo_SkillSlot,FWeakObjectPtr>::
          UEOpEquals<UDS_VM_W_SkillInfo_SkillSlot,bool>(&this->VM_CurClickedSkillSlot,param_2);
  if (!bVar3) {
    bVar3 = FWeakObjectPtr::IsValid(&(this->VM_CurClickedSkillSlot).WeakPtr);
    if (bVar3) {
      pUVar5 = FWeakObjectPtr::Get(&(this->VM_CurClickedSkillSlot).WeakPtr);
      FVar2 = UDS_VM_W_SkillInfo_SkillSlot::FFieldNotificationClassDescriptor::IsSelected.FieldName;
      if (pUVar5[10].field_0xa != '\0') {
        local_10 = UDS_VM_W_SkillInfo_SkillSlot::FFieldNotificationClassDescriptor::IsSelected.
                   BitNumber;
        pUVar5[10].field_0xa = 0;
        local_18 = FVar2;
        (**(code **)(*(longlong *)(pUVar5 + 1) + 0x38))(pUVar5 + 1,&local_18);
      }
    }
    pUVar1 = (param_2->VM_SkillData).field0_0x0.DebugPtr;
    iVar4 = 0;
    if (pUVar1 != (UDS_VM_SkillData *)0x0) {
      iVar4 = pUVar1->SkillID;
    }
    this->SelectSkillID = iVar4;
    local_res8 = param_2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&(this->VM_CurClickedSkillSlot).WeakPtr,(FObjectPtr)&local_res8);
    iVar4 = UDS_VM_W_SkillInfo_SkillSlot::FFieldNotificationClassDescriptor::IsSelected.BitNumber;
    FVar2 = UDS_VM_W_SkillInfo_SkillSlot::FFieldNotificationClassDescriptor::IsSelected.FieldName;
    if (param_2->IsSelected != true) {
      param_2->IsSelected = true;
      local_10 = iVar4;
      local_18 = FVar2;
      (**(code **)(param_2->_padding_ + 0x38))(&param_2->_padding_,&local_18);
    }
    RefreshItems(this);
    RefreshInfoPanel(this);
  }
  return;
}

// OnSkillLevelUpClick @ 14bf70f20

void __thiscall UDS_VM_W_Skill::OnSkillLevelUpClick(UDS_VM_W_Skill *this,UObject *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ulong64 uVar5;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar6;
  FWeakObjectPtr local_res8;
  code *local_48;
  undefined8 uStack_40;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_38;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_20;
  
  if (this->bIsOwnedCharacter == false) {
    local_38._0_8_ = 0;
    local_38._8_8_ = 0;
    local_38._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x12501,Alert_None_01,&local_38);
    return;
  }
  iVar1 = this->SelectSkillID;
  uVar5 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
  UDS_SkillData::GetData((ulong64)&local_res8,uVar5,SUB41(iVar1,0));
  bVar3 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar3) {
    uStack_40 = (ulonglong)uStack_40._4_4_ << 0x20;
    local_48 = OnSkillLevelUpSuccess;
    pTVar6 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CreateUObject<UDS_VM_W_Skill>
                       (&local_20,this,(pmf_91b87c60 *)&local_48);
    iVar1 = this->SelectSkillID;
    iVar4 = UDS_PlayerData::GetMainPlayerCurrentCharID();
    FDS_CharacterService::RequestSkillUp(iVar4,iVar1,pTVar6);
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6776846514867142169>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Skill\\DS_VM_W_Skill.cpp"
                       ,0x1e7,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// OnSkillLevelUpSuccess @ 14bf71040

void __thiscall UDS_VM_W_Skill::OnSkillLevelUpSuccess(UDS_VM_W_Skill *this)

{
  bool bVar1;
  UDS_VM_W_SkillInfo_SkillSlot *this_00;
  
  RefreshSkillSlots(this);
  RefreshItems(this);
  RefreshInfoPanel(this);
  if (this->bIsAscending == false) {
    bVar1 = FWeakObjectPtr::IsValid(&(this->VM_CurClickedSkillSlot).WeakPtr);
    if (bVar1) {
      this_00 = (UDS_VM_W_SkillInfo_SkillSlot *)
                FWeakObjectPtr::Get(&(this->VM_CurClickedSkillSlot).WeakPtr);
      UDS_VM_W_SkillInfo_SkillSlot::OnUpgrade(this_00);
      return;
    }
  }
  return;
}

// OnUpdate @ 14bf72550

void __thiscall UDS_VM_W_Skill::OnUpdate(UDS_VM_W_Skill *this,float param_1)

{
  int iVar1;
  bool bVar2;
  ulong64 uVar3;
  UObject *pUVar4;
  FDateTime FVar5;
  FDS_SkillGrowLevelTableRow *pFVar6;
  FWeakObjectPtr local_res8;
  FTimespan local_res18;
  FWeakObjectPtr local_res20;
  FName local_18;
  int local_10;
  
  iVar1 = this->SelectSkillID;
  uVar3 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
  UDS_SkillData::GetData((ulong64)&local_res8,uVar3,SUB41(iVar1,0));
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(&local_res8);
    UDS_WaitCompleteData::GetData
              ((ulong64)&local_res20,UDS_PlayerData::MainPlayerEntityID,
               SUB81(*(undefined8 *)(pUVar4 + 4),0));
    bVar2 = FWeakObjectPtr::IsValid(&local_res20);
    if (bVar2) {
      pUVar4 = FWeakObjectPtr::Get(&local_res20);
      FVar5 = UDS_TimeUtilManager::GetCurrentServerDateTime();
      local_res18.Ticks = *(longlong *)&pUVar4[3].field_0x10 - *(longlong *)FVar5.Ticks;
      pUVar4 = FWeakObjectPtr::Get(&local_res8);
      pFVar6 = FDS_SkillGrowLevelTableRow::GetRef
                         ((longlong)(*(int *)&pUVar4[4].field_0x8 + this->SelectSkillID * 100) + 1,
                          true);
      if (0.0 < pFVar6->AscendProcessTime) {
        this->RemainTimePercent =
             __real_3f800000 -
             (float)((double)local_res18.Ticks * __real_3e7ad7f29abcaf48) /
             pFVar6->AscendProcessTime;
        local_10 = FFieldNotificationClassDescriptor::RemainTimePercent.BitNumber;
        local_18 = FFieldNotificationClassDescriptor::RemainTimePercent.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      }
      FDS_Text::SetTextFromTimespan(&this->RemainTimeString,&local_res18,DayHourSec,false);
      local_10 = FFieldNotificationClassDescriptor::RemainTimeString.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::RemainTimeString.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      if (local_res18.Ticks < 0) {
        RefreshItems(this);
        RefreshSkillSlots(this);
      }
    }
  }
  return;
}

// RefreshCharSlots @ 14bf75440

void __thiscall UDS_VM_W_Skill::RefreshCharSlots(UDS_VM_W_Skill *this)

{
  return;
}

// RefreshInfoPanel @ 14bf755a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_W_Skill::RefreshInfoPanel(UDS_VM_W_Skill *this)

{
  code *pcVar1;
  FDS_VMContext_SkillData *pFVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UDS_VM_SkillInfo_Panel *pUVar6;
  FDS_ViewModelContext *pFVar7;
  UScriptStruct *pUVar8;
  UDS_ViewModelContextManager *this_00;
  UDS_VM_SkillData *pUVar9;
  longlong *plVar10;
  FDS_ViewModelContext *pFVar11;
  FDS_ViewModelContext *pFVar12;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  FWeakObjectPtr local_100;
  FName local_f8;
  int local_f0;
  TSharedPtr<FDS_ViewModelContext,1> local_e8;
  TSharedPtr<FDS_VMContext_SkillData,1> local_d8;
  TSharedPtr<FDS_ViewModelContext,1> local_c8;
  TSharedPtr<FDS_ViewModelContext,1> local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  GetSkillData(this,(int)&local_100);
  bVar3 = FWeakObjectPtr::IsValid(&local_100);
  if (bVar3) {
    pFVar12 = (FDS_ViewModelContext *)0x0;
    if ((this->VM_SkillInfoPanel).field0_0x0.DebugPtr == (UDS_VM_SkillInfo_Panel *)0x0) {
      local_108 = 0;
      pUVar4 = Z_Construct_UClass_UDS_VM_SkillInfo_Panel_NoRegister();
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar5 = Z_Construct_UClass_UDS_VM_SkillInfo_Panel_NoRegister();
      CheckIsClassChildOf_Internal(pUVar5,pUVar4);
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_a8,pUVar4);
      local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
      local_a8._56_8_ = (UPackage *)0x0;
      local_a8._16_4_ = 0;
      local_a8._20_4_ = 0;
      local_a8._24_4_ = RF_Transient;
      local_a8._40_8_ = (UObject *)0x0;
      local_a8[0x20] = false;
      local_a8._8_8_ = this;
      pUVar6 = (UDS_VM_SkillInfo_Panel *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
      if (local_a8._64_8_ != 0) {
        plVar10 = (longlong *)(local_a8 + 0x50);
        if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
          plVar10 = (longlong *)local_a8._104_8_;
        }
        (**(code **)(*plVar10 + 0x10))();
      }
      if (pUVar6 != (UDS_VM_SkillInfo_Panel *)0x0) {
        *(undefined1 *)((longlong)&pUVar6->_padding_ + 4) = 0;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar6 != (UDS_VM_SkillInfo_Panel *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      (this->VM_SkillInfoPanel).field0_0x0.DebugPtr = pUVar6;
    }
    pFVar7 = ::operator_new(0x28);
    pFVar11 = pFVar12;
    if (pFVar7 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar7->field_0x1c = 0;
      *(undefined4 *)((longlong)&pFVar7[1]._padding_ + 4) = 0;
      *(undefined8 *)&pFVar7->DerivedStaticStruct = 0;
      (pFVar7->ViewModelName).ComparisonIndex = 0;
      (pFVar7->ViewModelName).Number = 0;
      pFVar7->ViewModelTemplateKey = None;
      pFVar7->_padding_ = (longlong)&___7FDS_ViewModelContext_SkillInfoPanel__6B_;
      pFVar11 = pFVar7;
    }
    pFVar7 = ::operator_new(0x20);
    if (pFVar7 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar7->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar7->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar7->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_SkillInfoPanel__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar7->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar7->ViewModelTemplateKey = pFVar11;
      pFVar12 = pFVar7;
    }
    if ((pFVar11 == (FDS_ViewModelContext *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar8 = FDS_ViewModelContext_SkillInfoPanel::StaticStruct();
    *(UScriptStruct **)&pFVar11->DerivedStaticStruct = pUVar8;
    this_00 = UDS_ViewModelContextManager::GetInst();
    if (this_00 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar12 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar12->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar12->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_e8.Object = pFVar11;
      local_e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar12;
      UDS_ViewModelContextManager::RegisterContext(this_00,&local_e8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_e8.SharedReferenceCount.ReferenceController);
    }
    *(int *)&pFVar11[1]._padding_ = this->SelectSkillID;
    pUVar6 = (this->VM_SkillInfoPanel).field0_0x0.DebugPtr;
    if (pFVar12 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar12->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar12->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_c8.Object = pFVar11;
    local_c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar12;
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar6,&local_c8);
    if ((this->VM_SkillData).field0_0x0.DebugPtr == (UDS_VM_SkillData *)0x0) {
      pUVar9 = UDS_ViewModelBase::CreateViewModel<UDS_VM_SkillData>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar9 != (UDS_VM_SkillData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar9);
      }
      (this->VM_SkillData).field0_0x0.DebugPtr = pUVar9;
    }
    MakeContext<FDS_VMContext_SkillData>(&local_d8);
    pFVar2 = local_d8.Object;
    if ((local_d8.Object == (FDS_VMContext_SkillData *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (pFVar2->SkillData).WeakPtr = local_100;
    pUVar9 = (this->VM_SkillData).field0_0x0.DebugPtr;
    local_b8.Object = (FDS_ViewModelContext *)local_d8.Object;
    local_b8.SharedReferenceCount.ReferenceController =
         local_d8.SharedReferenceCount.ReferenceController;
    if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar9,&local_b8);
    local_f0 = FFieldNotificationClassDescriptor::VM_SkillData.BitNumber;
    local_f8 = FFieldNotificationClassDescriptor::VM_SkillData.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_f8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar12);
  }
  return;
}

// RefreshItems @ 14bf76330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_W_Skill::RefreshItems(UDS_VM_W_Skill *this)

{
  FScriptContainerElement FVar1;
  undefined8 uVar2;
  code *pcVar3;
  FName FVar4;
  FName FVar5;
  int iVar6;
  UDS_M_ItemImplBase *this_00;
  bool bVar7;
  int iVar8;
  uint uVar9;
  UObject *pUVar10;
  FDS_SkillGrowLevelTableRow *pFVar11;
  FDS_MoneyBaseTableRow *pFVar12;
  UClass *pUVar13;
  UDS_M_CommonAsset *pUVar14;
  UDS_UserObjectListItem *pUVar15;
  undefined8 *puVar16;
  FDS_QuestBaseTableRow *pFVar17;
  ulong64 uVar18;
  UDS_SkillData *pUVar19;
  longlong *plVar20;
  TObjectPtr<UDS_UserObjectListItem>_u_0 TVar21;
  FName *pFVar22;
  uint uVar23;
  ulonglong uVar24;
  int iVar25;
  uint uVar26;
  longlong lVar27;
  ulonglong uVar28;
  undefined1 auVar29 [16];
  undefined1 auStackY_3d8 [32];
  FWeakObjectPtr local_398;
  undefined1 local_390 [8];
  FDelegateAllocation local_388;
  UDS_M_ItemImplBase *local_378;
  UDS_M_CommonAsset *local_370;
  UDS_UserObjectListItem *local_368 [2];
  FDS_Text local_358;
  undefined1 local_308 [8];
  undefined4 local_300;
  uint uStack_2fc;
  FTimespan local_2f8;
  UDS_VM_W_Skill *local_2f0;
  UDS_VM_W_Skill *local_2e8;
  UDS_VM_W_Skill *local_2e0;
  UDS_VM_W_Skill *local_2d8 [2];
  FName local_2c8;
  int local_2c0;
  FName local_2b8;
  int local_2b0;
  FName local_2a8;
  int local_2a0;
  FName local_298;
  int local_290;
  FName local_288;
  int local_280;
  FName local_278;
  int local_270;
  FName local_268;
  int local_260;
  FName local_258;
  int local_250;
  FName local_248;
  int local_240;
  FName local_238;
  int local_230;
  FName local_228;
  int local_220;
  FName local_218;
  int local_210;
  FName local_208;
  int local_200;
  FName local_1f8;
  int local_1f0;
  FName local_1e8;
  int local_1e0;
  FName local_1d8;
  int local_1d0;
  FName local_1c8;
  int local_1c0;
  FWeakObjectPtr local_1b8;
  UDS_UserObjectListItem *local_1b0;
  TSharedPtr<FDS_ViewModelContext,1> local_1a8;
  TSharedPtr<FDS_ViewModelContext,1> local_198;
  FDestructionSentinel local_188;
  FDestructionSentinel local_170;
  FDelegateAllocation *local_158;
  FDestructionSentinel local_150;
  undefined1 *local_138;
  FDestructionSentinel local_130;
  undefined1 *local_118;
  FDestructionSentinel local_110;
  undefined1 *local_f8;
  undefined1 local_f0 [8];
  TReferenceControllerBase<1> *local_e8;
  FName local_e0;
  FName local_d8 [2];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3d8;
  GetSkillData(this,(int)&local_398);
  bVar7 = FWeakObjectPtr::IsValid(&local_398);
  if (bVar7) {
    pUVar10 = FWeakObjectPtr::Get(&local_398);
    pFVar11 = FDS_SkillGrowLevelTableRow::GetRef
                        ((longlong)(this->SelectSkillID * 100 + 1 + *(int *)&pUVar10[4].field_0x8),
                         true);
    if ((pFVar11->ID_SkillGrowItem).ArrayNum == (pFVar11->SkillGrowItemCount).ArrayNum) {
      TDS_DataSetGetter<UDS_MoneyDataSet>::Get((ulong64)&local_1b8);
      bVar7 = FWeakObjectPtr::IsValid(&local_1b8);
      FVar4 = FFieldNotificationClassDescriptor::bIsNextAscend.FieldName;
      if (bVar7) {
        if (this->bIsNextAscend != pFVar11->IsAscendLevel) {
          local_2c0 = FFieldNotificationClassDescriptor::bIsNextAscend.BitNumber;
          this->bIsNextAscend = pFVar11->IsAscendLevel;
          local_2c8 = FVar4;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2c8);
        }
        FDS_EntryBindingEventField::Reset(&this->MoneyEntryBindField);
        iVar25 = (pFVar11->SkillGrowMoneyType).ArrayNum;
        uVar26 = 0;
        if (((pFVar11->SkillGrowMoneyValue).ArrayNum == iVar25) && (0 < iVar25)) {
          lVar27 = 0;
          do {
            uVar23 = 0;
            if ((int)uVar26 < (pFVar11->SkillGrowMoneyType).ArrayNum) {
              uVar23 = ~uVar26 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FVar1 = (pFVar11->SkillGrowMoneyType).AllocatorInstance.Data[lVar27];
            uVar23 = 0;
            if ((int)uVar26 < (pFVar11->SkillGrowMoneyValue).ArrayNum) {
              uVar23 = ~uVar26 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar2 = *(undefined8 *)
                     ((pFVar11->SkillGrowMoneyValue).AllocatorInstance.Data + lVar27 * 8);
            pFVar12 = FDS_MoneyBaseTableRow::GetRef((ulonglong)(byte)FVar1,true);
            pUVar10 = GetTransientPackageAsObject();
            FObjectInitializer::AssertIfInConstructor
                      (pUVar10,
                       L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                      );
            pUVar13 = Z_Construct_UClass_UDS_M_CommonAsset_NoRegister();
            FStaticConstructObjectParameters::FStaticConstructObjectParameters
                      ((FStaticConstructObjectParameters *)local_c8,pUVar13);
            local_c8._8_8_ = pUVar10;
            pUVar14 = (UDS_M_CommonAsset *)
                      StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
            local_370 = pUVar14;
            if (local_c8._64_8_ != 0) {
              plVar20 = (longlong *)(local_c8 + 0x50);
              if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
                plVar20 = (longlong *)local_c8._104_8_;
              }
              (**(code **)(*plVar20 + 0x10))();
            }
            iVar25 = (int)uVar2;
            UDS_M_CommonAsset::Init(pUVar14,pFVar12->ID_MoneyIcon,iVar25,iVar25,false);
            pUVar15 = NewObject<UDS_UserObjectListItem>((UObject *)this);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar15 != (UDS_UserObjectListItem *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar15);
            }
            pcVar3 = *(code **)(pUVar14->_padding_ + 0x308);
            ::FName::FName(&local_e0,L"");
            ::FName::FName(local_d8,L"");
            puVar16 = (undefined8 *)(*pcVar3)(local_370,local_f0);
            local_198.Object = (FDS_ViewModelContext *)*puVar16;
            local_198.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)puVar16[1];
            if (local_198.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            UDS_UserObjectListItem::AddContext(pUVar15,&local_198);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_e8);
            local_1b0 = pUVar15;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar15 != (UDS_UserObjectListItem *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar15);
            }
            FDS_EntryBindingEventField::Add
                      (&this->MoneyEntryBindField,(TObjectPtr<UDS_UserObjectListItem>)&local_1b0);
            uVar26 = uVar26 + 1;
            lVar27 = lVar27 + 1;
          } while ((int)uVar26 < (pFVar11->SkillGrowMoneyType).ArrayNum);
        }
        uVar26 = 0;
        local_2b0 = FFieldNotificationClassDescriptor::MoneyEntryBindField.BitNumber;
        local_2b8 = FFieldNotificationClassDescriptor::MoneyEntryBindField.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2b8);
        FDS_Text::Reset(&this->SkillAscendTime);
        if ((pFVar11->IsAscendLevel != false) && (0.0 < pFVar11->AscendProcessTime)) {
          auVar29._0_8_ = (double)(pFVar11->AscendProcessTime * __real_4b189680 + __real_3f000000);
          auVar29._8_8_ = 0;
          auVar29 = roundpd(auVar29,auVar29,1);
          local_2f8.Ticks = (long64)auVar29._0_8_;
          FDS_Text::SetTextFromTimespan(&this->SkillAscendTime,&local_2f8,DayHourSec,false);
        }
        TVar21.DebugPtr = (UDS_UserObjectListItem *)&local_2a8;
        local_2a0 = FFieldNotificationClassDescriptor::SkillAscendTime.BitNumber;
        local_2a8 = FFieldNotificationClassDescriptor::SkillAscendTime.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,TVar21.DebugPtr);
        if ((this->VM_Condition).field0_0x0.DebugPtr != (UDS_VM_W_Common_Condition *)0x0) {
          this->VM_ConditionVisibility = SelfHitTestInvisible;
          local_358.StringTableType = None;
          local_358.StringTableID = 0;
          local_358.StringEnumTableNameID.ComparisonIndex.Value = 0;
          local_358.StringEnumTableNameID.Number = 0;
          local_358.DateTime.Ticks = 0;
          local_358.TimeSpan.Ticks = 0;
          local_358.TimeExpressionType = None;
          local_358.IsExpression = false;
          local_358.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_358.UniqueString.Data.ArrayNum = 0;
          local_358.UniqueString.Data.ArrayMax = 0;
          local_358.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_358.FormatArgs.ArrayNum = 0;
          local_358.FormatArgs.ArrayMax = 0;
          if (pFVar11->ID_ReqCheckQuest == 0) {
            if (pFVar11->ReqCharLevel == 0) {
              this->VM_ConditionVisibility = Collapsed;
            }
            else {
              FDS_Text::SetTextFormatFromStringTable<int_const_&>
                        (&local_358,StringUi,0x11173,&pFVar11->ReqCharLevel);
            }
          }
          else {
            pFVar17 = FDS_QuestBaseTableRow::GetRef((longlong)pFVar11->ID_ReqCheckQuest,true);
            local_358.StringTableType = StringUi;
            local_358.StringTableID = 0x11172;
            DestructItems<FDS_TextFormatArg,int>
                      ((FDS_TextFormatArg *)local_358.FormatArgs.AllocatorInstance.Data,
                       local_358.FormatArgs.ArrayNum);
            iVar25 = 0;
            if (local_358.FormatArgs.ArrayMax != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x28,8,0,&local_358.FormatArgs.AllocatorInstance,0,
                         &local_358.FormatArgs.ArrayMax);
              iVar25 = local_358.FormatArgs.ArrayMax;
            }
            iVar8 = local_358.FormatArgs.ArrayNum;
            if (local_358.FormatArgs.ArrayNum == iVar25) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x828,&local_358.FormatArgs.AllocatorInstance,
                                 &local_358.FormatArgs.ArrayMax);
            }
            local_358.FormatArgs.ArrayNum = iVar8 + 1;
            FDS_TextFormatArg::FDS_TextFormatArg<FDS_StringQuestID_const_&>
                      ((FDS_TextFormatArg *)
                       (local_358.FormatArgs.AllocatorInstance.Data + (longlong)iVar8 * 0x28),
                       &pFVar17->ID_QuestTitleId);
          }
          UDS_VM_W_Common_Condition::SetConditionText
                    ((this->VM_Condition).field0_0x0.DebugPtr,&local_358);
          local_290 = FFieldNotificationClassDescriptor::VM_Condition.BitNumber;
          local_298 = FFieldNotificationClassDescriptor::VM_Condition.FieldName;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_298);
          local_280 = FFieldNotificationClassDescriptor::VM_ConditionVisibility.BitNumber;
          local_288 = FFieldNotificationClassDescriptor::VM_ConditionVisibility.FieldName;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_288);
          TVar21.DebugPtr = (UDS_UserObjectListItem *)(local_358.FormatArgs._8_8_ & 0xffffffff);
          DestructItems<FDS_TextFormatArg,int>
                    ((FDS_TextFormatArg *)local_358.FormatArgs.AllocatorInstance.Data,
                     local_358.FormatArgs.ArrayNum);
          if ((FDS_TextFormatArg *)local_358.FormatArgs.AllocatorInstance.Data !=
              (FDS_TextFormatArg *)0x0) {
            FMemory::Free(local_358.FormatArgs.AllocatorInstance.Data);
          }
          if (local_358.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_358.UniqueString.Data.AllocatorInstance.Data);
          }
        }
        FDS_EntryBindingEventField::Reset(&this->ItemEntryBindField);
        uVar23 = uStack_2fc;
        if (0 < (pFVar11->ID_SkillGrowItem).ArrayNum) {
          local_370 = (UDS_M_CommonAsset *)0x0;
          do {
            pUVar14 = local_370;
            uVar9 = 0;
            if ((int)uVar26 < (pFVar11->ID_SkillGrowItem).ArrayNum) {
              uVar9 = ~uVar26 >> 0x1f;
            }
            if (uVar9 == 0) {
              TVar21.DebugPtr = (UDS_UserObjectListItem *)0x1506109c0;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            uVar9 = 0;
            if ((int)uVar26 < (pFVar11->SkillGrowItemCount).ArrayNum) {
              uVar9 = ~uVar26 >> 0x1f;
            }
            if (uVar9 == 0) {
              TVar21.DebugPtr = (UDS_UserObjectListItem *)0x1506109c0;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            iVar25 = *(int *)((longlong)&pUVar14->_padding_ +
                             (longlong)(pFVar11->SkillGrowItemCount).AllocatorInstance.Data);
            pUVar15 = NewObject<UDS_UserObjectListItem>((UObject *)this);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar15 != (UDS_UserObjectListItem *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar15);
            }
            TVar21._0_1_ = 0xd;
            DS_ItemDataUtil::CreateItemModel((EDS_ItemSlotStateType)&local_378,TVar21._0_4_);
            if (local_378 != (UDS_M_ItemImplBase *)0x0) {
              UDS_M_ItemImplBase::SetQuantity(local_378,iVar25);
              this_00 = local_378;
              local_390 = (undefined1  [8])0x0;
              local_388.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
              local_388.DelegateSize = 0;
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_390,
                         (FWriteAccessScope *)&local_170);
              local_158 = &local_388;
              puVar16 = UE::Core::Private::DelegateAllocate(0x30,&local_388);
              if (puVar16 != (undefined8 *)0x0) {
                *puVar16 = &
                           ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
                ;
                uVar18 = FDelegateHandle::GenerateNewID();
                puVar16[2] = uVar18;
                *puVar16 = &
                           ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_Skill____A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
                ;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)this);
                }
                puVar16[3] = 0;
                local_2f0 = this;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)this);
                }
                FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar16 + 3),(FObjectPtr)&local_2f0);
                puVar16[4] = OnEventSkillItemSlotModel;
                puVar16[5] = (ulonglong)uVar23 << 0x20;
              }
              if (local_170.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_170.Accessor,&local_170);
              }
              UDS_ModelBase::AddUpdateModelDelegate
                        ((UDS_ModelBase *)this_00,
                         (TDelegate<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                          *)local_390);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_390,
                         (FWriteAccessScope *)&local_188);
              if ((local_388.DelegateSize != 0) &&
                 (local_388.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
                (*(code *)**(undefined8 **)local_388.DelegateAllocator)();
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          ((ForAnyElementType *)&local_388,0,0,0x10);
                local_388.DelegateSize = 0;
              }
              if (local_188.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_188.Accessor,&local_188);
              }
              if (local_388.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
                FMemory::Free((void *)local_388.DelegateAllocator);
              }
              FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                        ((FMRSWRecursiveAccessDetector *)local_390);
              UDS_M_ItemImplBase::SetSelected(local_378,false);
              puVar16 = (undefined8 *)
                        (**(code **)(local_378->_padding_ + 0x310))(local_378,local_308);
              local_1a8.Object = (FDS_ViewModelContext *)*puVar16;
              local_1a8.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)puVar16[1];
              if (local_1a8.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_1a8.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              UDS_UserObjectListItem::AddContext(pUVar15,&local_1a8);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)CONCAT44(uStack_2fc,local_300));
              local_368[0] = pUVar15;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar15 != (UDS_UserObjectListItem *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)pUVar15);
              }
              TVar21.DebugPtr = (UDS_UserObjectListItem *)local_368;
              FDS_EntryBindingEventField::Add
                        (&this->ItemEntryBindField,
                         (TObjectPtr<UDS_UserObjectListItem>)TVar21.ObjectPtr.field0_0x0);
            }
            uVar26 = uVar26 + 1;
            local_370 = (UDS_M_CommonAsset *)((longlong)&local_370->_padding_ + 4);
          } while ((int)uVar26 < (pFVar11->ID_SkillGrowItem).ArrayNum);
        }
        uVar24 = 0;
        local_270 = FFieldNotificationClassDescriptor::ItemEntryBindField.BitNumber;
        local_278 = FFieldNotificationClassDescriptor::ItemEntryBindField.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_278);
        iVar25 = (pFVar11->SkillGrowMoneyType).ArrayNum;
        if (iVar25 == (pFVar11->SkillGrowMoneyValue).ArrayNum) {
          uVar28 = uVar24;
          if (0 < iVar25) {
            do {
              uVar23 = (uint)uVar24;
              uVar26 = 0;
              if ((int)uVar23 < (pFVar11->SkillGrowMoneyType).ArrayNum) {
                uVar26 = ~uVar23 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              FVar1 = (pFVar11->SkillGrowMoneyType).AllocatorInstance.Data[uVar28];
              uVar26 = 0;
              if ((int)uVar23 < (pFVar11->SkillGrowMoneyValue).ArrayNum) {
                uVar26 = ~uVar23 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar25 = *(int *)((pFVar11->SkillGrowMoneyValue).AllocatorInstance.Data + uVar28 * 8);
              pFVar12 = FDS_MoneyBaseTableRow::GetRef((ulonglong)(byte)FVar1,true);
              iVar6 = FFieldNotificationClassDescriptor::MoneyIconID2.BitNumber;
              FVar5 = FFieldNotificationClassDescriptor::MoneyIconID2.FieldName;
              iVar8 = FFieldNotificationClassDescriptor::MoneyIconID1.BitNumber;
              FVar4 = FFieldNotificationClassDescriptor::MoneyIconID1.FieldName;
              if (uVar23 == 0) {
                if (this->MoneyIconID1 != pFVar12->ID_MoneyIcon) {
                  this->MoneyIconID1 = pFVar12->ID_MoneyIcon;
                  local_260 = iVar8;
                  local_268 = FVar4;
                  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_268);
                }
                iVar8 = FFieldNotificationClassDescriptor::MoneyValue1.BitNumber;
                FVar4 = FFieldNotificationClassDescriptor::MoneyValue1.FieldName;
                if (this->MoneyValue1 != iVar25) {
                  this->MoneyValue1 = iVar25;
                  pFVar22 = &local_258;
                  local_258 = FVar4;
                  local_250 = iVar8;
LAB_14bf76e89:
                  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar22);
                }
              }
              else if (uVar23 == 1) {
                if (this->MoneyIconID2 != pFVar12->ID_MoneyIcon) {
                  this->MoneyIconID2 = pFVar12->ID_MoneyIcon;
                  local_240 = iVar6;
                  local_248 = FVar5;
                  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_248);
                }
                iVar8 = FFieldNotificationClassDescriptor::MoneyValue2.BitNumber;
                FVar4 = FFieldNotificationClassDescriptor::MoneyValue2.FieldName;
                if (this->MoneyValue2 != iVar25) {
                  this->MoneyValue2 = iVar25;
                  pFVar22 = &local_238;
                  local_238 = FVar4;
                  local_230 = iVar8;
                  goto LAB_14bf76e89;
                }
              }
              uVar24 = (ulonglong)(uVar23 + 1);
              uVar28 = uVar28 + 1;
            } while ((int)(uVar23 + 1) < (pFVar11->SkillGrowMoneyType).ArrayNum);
          }
          uVar26 = uStack_2fc;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &(this->SkillLevelUpBtnDel).Delegate,(FWriteAccessScope *)&local_150);
          local_138 = &(this->SkillLevelUpBtnDel).Delegate.field_0x8;
          puVar16 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_138);
          if (puVar16 != (undefined8 *)0x0) {
            *puVar16 = &
                       ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar18 = FDelegateHandle::GenerateNewID();
            puVar16[2] = uVar18;
            *puVar16 = &
                       ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_Skill____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            puVar16[3] = 0;
            local_2e8 = this;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar16 + 3),(FObjectPtr)&local_2e8);
            puVar16[4] = OnSkillLevelUpClick;
            puVar16[5] = (ulonglong)uVar26 << 0x20;
          }
          if (local_150.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_150.Accessor,&local_150);
          }
          local_220 = FFieldNotificationClassDescriptor::SkillLevelUpBtnDel.BitNumber;
          local_228 = FFieldNotificationClassDescriptor::SkillLevelUpBtnDel.FieldName;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_228);
          uVar26 = uStack_2fc;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &(this->SkillAccelerateBtnDel).Delegate,(FWriteAccessScope *)&local_130);
          local_118 = &(this->SkillAccelerateBtnDel).Delegate.field_0x8;
          puVar16 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_118);
          if (puVar16 != (undefined8 *)0x0) {
            *puVar16 = &
                       ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar18 = FDelegateHandle::GenerateNewID();
            puVar16[2] = uVar18;
            *puVar16 = &
                       ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_Skill____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            puVar16[3] = 0;
            local_2e0 = this;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar16 + 3),(FObjectPtr)&local_2e0);
            puVar16[4] = OnSkillAccelerateClick;
            puVar16[5] = (ulonglong)uVar26 << 0x20;
          }
          if (local_130.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_130.Accessor,&local_130);
          }
          local_210 = FFieldNotificationClassDescriptor::SkillAccelerateBtnDel.BitNumber;
          local_218 = FFieldNotificationClassDescriptor::SkillAccelerateBtnDel.FieldName;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_218);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &(this->SkillAscendBtnDel).Delegate,(FWriteAccessScope *)&local_110);
          local_f8 = &(this->SkillAscendBtnDel).Delegate.field_0x8;
          puVar16 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_f8);
          if (puVar16 != (undefined8 *)0x0) {
            *puVar16 = &
                       ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar18 = FDelegateHandle::GenerateNewID();
            puVar16[2] = uVar18;
            *puVar16 = &
                       ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_Skill____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            puVar16[3] = 0;
            local_2d8[0] = this;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar16 + 3),(FObjectPtr)local_2d8);
            puVar16[4] = OnSkillAscendBtnClick;
            puVar16[5] = (ulonglong)uStack_2fc << 0x20;
          }
          if (local_110.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_110.Accessor,&local_110);
          }
          local_200 = FFieldNotificationClassDescriptor::SkillAscendBtnDel.BitNumber;
          local_208 = FFieldNotificationClassDescriptor::SkillAscendBtnDel.FieldName;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_208);
          iVar25 = FFieldNotificationClassDescriptor::bIsCanGrow.BitNumber;
          FVar4 = FFieldNotificationClassDescriptor::bIsCanGrow.FieldName;
          pUVar19 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_398);
          bVar7 = UDS_SkillData::IsCanGrow(pUVar19);
          if (this->bIsCanGrow != bVar7) {
            this->bIsCanGrow = bVar7;
            local_1f8 = FVar4;
            local_1f0 = iVar25;
            (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1f8);
          }
          iVar25 = FFieldNotificationClassDescriptor::bIsMaxLevel.BitNumber;
          FVar4 = FFieldNotificationClassDescriptor::bIsMaxLevel.FieldName;
          pUVar19 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_398);
          bVar7 = UDS_SkillData::IsMaxLevel(pUVar19);
          if (this->bIsMaxLevel != bVar7) {
            this->bIsMaxLevel = bVar7;
            local_1e8 = FVar4;
            local_1e0 = iVar25;
            (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1e8);
          }
          iVar25 = FFieldNotificationClassDescriptor::bIsAscendComplete.BitNumber;
          FVar4 = FFieldNotificationClassDescriptor::bIsAscendComplete.FieldName;
          pUVar19 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_398);
          bVar7 = UDS_SkillData::IsAscendComplete(pUVar19);
          if (this->bIsAscendComplete != bVar7) {
            this->bIsAscendComplete = bVar7;
            local_1d8 = FVar4;
            local_1d0 = iVar25;
            (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1d8);
          }
          iVar25 = FFieldNotificationClassDescriptor::bIsAscending.BitNumber;
          FVar4 = FFieldNotificationClassDescriptor::bIsAscending.FieldName;
          pUVar19 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_398);
          bVar7 = UDS_SkillData::IsAscending(pUVar19);
          if (this->bIsAscending != bVar7) {
            this->bIsAscending = bVar7;
            local_1c8 = FVar4;
            local_1c0 = iVar25;
            (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1c8);
          }
        }
        else {
          bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_6776846514867142319>,true,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Skill\\DS_VM_W_Skill.cpp"
                             ,0x151,"false");
          if (bVar7) goto code_r0x00014bf76cd3;
        }
      }
      else {
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_6776846514867142404>,true,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Skill\\DS_VM_W_Skill.cpp"
                           ,0xfc,"false");
        if (bVar7) goto code_r0x00014bf76cd3;
      }
    }
    else {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6776846514867142411>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Skill\\DS_VM_W_Skill.cpp"
                         ,0xf5,"false");
      if (bVar7) goto code_r0x00014bf76cd3;
    }
  }
  else {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6776846514867142418>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Skill\\DS_VM_W_Skill.cpp"
                       ,0xee,"false");
    if (bVar7) {
code_r0x00014bf76cd3:
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// RefreshSkillSlots @ 14bf78400

void __thiscall UDS_VM_W_Skill::RefreshSkillSlots(UDS_VM_W_Skill *this)

{
  TMap<int,TObjectPtr<UDS_VM_W_SkillInfo_SkillSlot>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_VM_W_SkillInfo_SkillSlot>,0>_>
  *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FDS_CharacterBaseTableRow *this_01;
  UDS_VM_W_SkillInfo_SkillSlot *pUVar5;
  UDS_VM_W_SkillInfo_SkillSlot *pUVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  TArray<FDS_SkillTableRow_const_*,TSizedDefaultAllocator<32>_> local_18;
  
  iVar4 = UDS_PlayerData::GetMainPlayerCurrentCharID();
  this_01 = FDS_CharacterBaseTableRow::GetRef((longlong)iVar4,true);
  FDS_CharacterBaseTableRow::ID_DefaultSkillTables(this_01,&local_18);
  if (local_18.ArrayNum == 4) {
    this_00 = &this->MapSkillSlotVM;
    bVar3 = 1 < *(int *)&(this->MapSkillSlotVM).field_0x48;
    if (!bVar3) {
      TSet<TTuple<int,TObjectPtr<UDS_VM_W_SkillInfo_SkillSlot>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_VM_W_SkillInfo_SkillSlot>,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<int,TObjectPtr<UDS_VM_W_SkillInfo_SkillSlot>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_VM_W_SkillInfo_SkillSlot>,0>,FDefaultSetAllocator>
                        *)this_00);
    }
    puVar7 = &(this->MapSkillSlotVM).field_0xc;
    *(undefined4 *)&(this->MapSkillSlotVM).field_0x8 = 0;
    if (*(int *)puVar7 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar7);
    }
    *(undefined4 *)&(this->MapSkillSlotVM).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->MapSkillSlotVM).field_0x34 = 0;
    iVar4 = *(int *)&(this->MapSkillSlotVM).field_0x2c;
    *(undefined4 *)&(this->MapSkillSlotVM).field_0x28 = 0;
    if ((iVar4 < 0) || (0x80 < iVar4)) {
      *(undefined4 *)&(this->MapSkillSlotVM).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->MapSkillSlotVM).field_0x10,0);
    }
    if (bVar3) {
      *(undefined4 *)&(this->MapSkillSlotVM).field_0x48 = 1;
      TSet<TTuple<int,TObjectPtr<UDS_VM_W_SkillInfo_SkillSlot>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_VM_W_SkillInfo_SkillSlot>,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<int,TObjectPtr<UDS_VM_W_SkillInfo_SkillSlot>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_VM_W_SkillInfo_SkillSlot>,0>,FDefaultSetAllocator>
                *)this_00);
    }
    pUVar5 = (this->VM_SpecialSkill).field0_0x0.DebugPtr;
    if (pUVar5 == (UDS_VM_W_SkillInfo_SkillSlot *)0x0) {
      pUVar5 = MakeSkillSlotVM(this,this_01->ID_SpecialSkill);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar5 != (UDS_VM_W_SkillInfo_SkillSlot *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      (this->VM_SpecialSkill).field0_0x0.DebugPtr = pUVar5;
      pUVar5 = MakeSkillSlotVM(this,this_01->ID_TraitSkill);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar5 != (UDS_VM_W_SkillInfo_SkillSlot *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      (this->VM_TraitSkill).field0_0x0.DebugPtr = pUVar5;
      pUVar5 = MakeSkillSlotVM(this,this_01->ID_NotInputRoll);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar5 != (UDS_VM_W_SkillInfo_SkillSlot *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      (this->VM_AvoidSkill).field0_0x0.DebugPtr = pUVar5;
      pUVar5 = MakeSkillSlotVM(this,this_01->ID_NormalSkill);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar5 != (UDS_VM_W_SkillInfo_SkillSlot *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      (this->VM_NormalSkill).field0_0x0.DebugPtr = pUVar5;
      if (local_18.ArrayNum == 4) {
        pUVar5 = MakeSkillSlotVM(this,*(int *)(*(longlong *)local_18.AllocatorInstance.Data + 8));
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar5 != (UDS_VM_W_SkillInfo_SkillSlot *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar5);
        }
        (this->VM_Default1Skill).field0_0x0.DebugPtr = pUVar5;
        if ((local_18.ArrayNum < 2) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pUVar5 = MakeSkillSlotVM(this,*(int *)(*(longlong *)(local_18.AllocatorInstance.Data + 8) +
                                              8));
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar5 != (UDS_VM_W_SkillInfo_SkillSlot *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar5);
        }
        (this->VM_Default2Skill).field0_0x0.DebugPtr = pUVar5;
        if ((local_18.ArrayNum < 3) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pUVar5 = MakeSkillSlotVM(this,*(int *)(*(longlong *)(local_18.AllocatorInstance.Data + 0x10)
                                              + 8));
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar5 != (UDS_VM_W_SkillInfo_SkillSlot *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar5);
        }
        (this->VM_Default3Skill).field0_0x0.DebugPtr = pUVar5;
        if ((local_18.ArrayNum < 4) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pUVar5 = MakeSkillSlotVM(this,*(int *)(*(longlong *)(local_18.AllocatorInstance.Data + 0x18)
                                              + 8));
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar5 != (UDS_VM_W_SkillInfo_SkillSlot *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar5);
        }
        (this->VM_Default4Skill).field0_0x0.DebugPtr = pUVar5;
      }
    }
    else {
      SetSkillDataToSlotVM(this,pUVar5,this_01->ID_SpecialSkill);
      SetSkillDataToSlotVM(this,(this->VM_TraitSkill).field0_0x0.DebugPtr,this_01->ID_TraitSkill);
      SetSkillDataToSlotVM(this,(this->VM_AvoidSkill).field0_0x0.DebugPtr,this_01->ID_NotInputRoll);
      SetSkillDataToSlotVM(this,(this->VM_NormalSkill).field0_0x0.DebugPtr,this_01->ID_NormalSkill);
      if (local_18.ArrayNum == 4) {
        SetSkillDataToSlotVM
                  (this,(this->VM_Default1Skill).field0_0x0.DebugPtr,
                   *(int *)(*(longlong *)local_18.AllocatorInstance.Data + 8));
        if ((local_18.ArrayNum < 2) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        SetSkillDataToSlotVM
                  (this,(this->VM_Default2Skill).field0_0x0.DebugPtr,
                   *(int *)(*(longlong *)(local_18.AllocatorInstance.Data + 8) + 8));
        if ((local_18.ArrayNum < 3) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        SetSkillDataToSlotVM
                  (this,(this->VM_Default3Skill).field0_0x0.DebugPtr,
                   *(int *)(*(longlong *)(local_18.AllocatorInstance.Data + 0x10) + 8));
        if ((local_18.ArrayNum < 4) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        SetSkillDataToSlotVM
                  (this,(this->VM_Default4Skill).field0_0x0.DebugPtr,
                   *(int *)(*(longlong *)(local_18.AllocatorInstance.Data + 0x18) + 8));
      }
    }
    if (*(int *)&(this->MapSkillSlotVM).field_0x8 != *(int *)&(this->MapSkillSlotVM).field_0x34) {
      puVar7 = *(undefined1 **)&(this->MapSkillSlotVM).field_0x40;
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &(this->MapSkillSlotVM).field_0x38;
      }
      iVar4 = *(int *)(puVar7 + (ulonglong)
                                (*(int *)&(this->MapSkillSlotVM).field_0x48 - 1U &
                                this->SelectSkillID) * 4);
      if (iVar4 != -1) {
        do {
          lVar1 = *(longlong *)&this_00->field_0x0 + (longlong)iVar4 * 0x18;
          if (*(uint *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar4 * 0x18) ==
              this->SelectSkillID) {
            puVar8 = (undefined8 *)(lVar1 + 8);
            if (lVar1 == 0) {
              puVar8 = (undefined8 *)0x0;
            }
            if (puVar8 != (undefined8 *)0x0) {
              pUVar6 = (UDS_VM_W_SkillInfo_SkillSlot *)
                       FWeakObjectPtr::Get(&(this->VM_CurClickedSkillSlot).WeakPtr);
              pUVar5 = (UDS_VM_W_SkillInfo_SkillSlot *)*puVar8;
              if (pUVar5 == (UDS_VM_W_SkillInfo_SkillSlot *)0x0) {
                bVar3 = pUVar6 == (UDS_VM_W_SkillInfo_SkillSlot *)0x0;
              }
              else {
                bVar3 = pUVar5 == pUVar6;
              }
              if (!bVar3) {
                OnSkillClicked(this,(UObject *)0x0,pUVar5);
              }
            }
            break;
          }
          iVar4 = *(int *)(lVar1 + 0x10);
        } while (iVar4 != -1);
      }
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6776846514867142516>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Skill\\DS_VM_W_Skill.cpp"
                       ,0x8c,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// SetSkillDataToSlotVM @ 14bf7d640

void __thiscall
UDS_VM_W_Skill::SetSkillDataToSlotVM
          (UDS_VM_W_Skill *this,UDS_VM_W_SkillInfo_SkillSlot *param_1,int param_2)

{
  UDS_VM_SkillData *this_00;
  TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> TVar1;
  TPairInitializer<int_&,UDS_VM_W_SkillInfo_SkillSlot_*_&> local_res8;
  int local_res18 [4];
  int *local_18;
  UDS_VM_W_SkillInfo_SkillSlot ***local_10;
  
  local_res8.Value = (UDS_VM_W_SkillInfo_SkillSlot **)param_1;
  local_res18[0] = param_2;
  TVar1 = GetSkillData(this,(int)&local_res8);
  this_00 = (((TObjectPtr<UDS_VM_SkillData> *)((longlong)local_res8.Value + 0xa0))->field0_0x0).
            DebugPtr;
  if (this_00 != (UDS_VM_SkillData *)0x0) {
                    /* WARNING: Load size is inaccurate */
    UDS_VM_SkillData::SetSkillData
              (this_00,(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>)*TVar1.WeakPtr);
  }
  local_18 = local_res18;
  local_10 = &local_res8.Value;
  TSet<TTuple<int,TObjectPtr<UDS_VM_W_SkillInfo_SkillSlot>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_VM_W_SkillInfo_SkillSlot>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_&,UDS_VM_W_SkillInfo_SkillSlot_*_&>_>
            ((TSet<TTuple<int,TObjectPtr<UDS_VM_W_SkillInfo_SkillSlot>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_VM_W_SkillInfo_SkillSlot>,0>,FDefaultSetAllocator>
              *)&this->MapSkillSlotVM,&local_res8,(bool *)&local_18);
  return;
}

