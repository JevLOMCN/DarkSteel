// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 35

// SetClickBackButton_WrapperImpl @ 14b5fc130

void __cdecl UDS_VM_AcceptQuest::SetClickBackButton_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0xc0) = 1;
  iStack_10 = FFieldNotificationClassDescriptor::CloseMySelf.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::CloseMySelf.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetClickOpenContentButton_WrapperImpl @ 14b5fc140

void __cdecl UDS_VM_AcceptQuest::SetClickOpenContentButton_WrapperImpl(void *param_1,void *param_2)

{
  UDS_QuestManager *this;
  FName FStack_18;
  int iStack_10;
  
  if (*(char *)((longlong)param_2 + 3) != '\x01') {
    this = UDS_QuestManager::GetInst();
    if (this != (UDS_QuestManager *)0x0) {
      UDS_QuestManager::OpenQuestContent(this,*(int *)((longlong)param_1 + 0x300));
      *(undefined1 *)((longlong)param_1 + 0xc0) = 1;
      iStack_10 = FFieldNotificationClassDescriptor::CloseMySelf.BitNumber;
      FStack_18 = FFieldNotificationClassDescriptor::CloseMySelf.FieldName;
      (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
                ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
    }
  }
  return;
}

// SetClickAbandonButton_WrapperImpl @ 14b5fc150

void __cdecl UDS_VM_AcceptQuest::SetClickAbandonButton_WrapperImpl(void *param_1,void *param_2)

{
  UDS_QuestManager *this;
  
  if (*(char *)((longlong)param_2 + 3) != '\x01') {
    this = UDS_QuestManager::GetInst();
    if (this != (UDS_QuestManager *)0x0) {
      UDS_QuestManager::OnReqCancelQuest(this,*(int *)((longlong)param_1 + 0x300));
      return;
    }
  }
  return;
}

// SetClickRewardButton_WrapperImpl @ 14b5fc160

void __cdecl UDS_VM_AcceptQuest::SetClickRewardButton_WrapperImpl(void *param_1,void *param_2)

{
  UDS_QuestManager *this;
  
  this = UDS_QuestManager::GetInst();
  if (this != (UDS_QuestManager *)0x0) {
    UDS_QuestManager::OnReqQuestComplete(this,*(int *)((longlong)param_1 + 0x300));
    return;
  }
  return;
}

// SetClickTraceButton_WrapperImpl @ 14b5fc1b0

void __cdecl UDS_VM_AcceptQuest::SetClickTraceButton_WrapperImpl(void *param_1,void *param_2)

{
  UDS_QuestManager *this;
  
  if (*(char *)((longlong)param_2 + 3) != '\x01') {
    this = UDS_QuestManager::GetInst();
    if (this != (UDS_QuestManager *)0x0) {
      UDS_QuestManager::OnReqQuestTrace(this,*(int *)((longlong)param_1 + 0x300));
      return;
    }
  }
  return;
}

// SetDisabledOpenContentButton_WrapperImpl @ 14b5fc1c0

void __cdecl
UDS_VM_AcceptQuest::SetDisabledOpenContentButton_WrapperImpl(void *param_1,void *param_2)

{
  SetDisabledOpenContentButton(param_1,*(bool *)param_2);
  return;
}

// SetDisabledTraceButton_WrapperImpl @ 14b5fc1d0

void __cdecl UDS_VM_AcceptQuest::SetDisabledTraceButton_WrapperImpl(void *param_1,void *param_2)

{
  SetDisabledTraceButton(param_1,*(bool *)param_2);
  return;
}

// SetIsVisibilityDailyQuestButton_WrapperImpl @ 14b5fc1e0

void __cdecl
UDS_VM_AcceptQuest::SetIsVisibilityDailyQuestButton_WrapperImpl(void *param_1,void *param_2)

{
  SetIsVisibilityDailyQuestButton(param_1,*(bool *)param_2);
  return;
}

// SetVisibilityQuestInfoPanel_WrapperImpl @ 14b5fc1f0

void __cdecl
UDS_VM_AcceptQuest::SetVisibilityQuestInfoPanel_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::VisibilityQuestInfoPanel.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::VisibilityQuestInfoPanel.FieldName;
  if (*(char *)((longlong)param_1 + 0x1b4) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0x1b4) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// StaticClass @ 14b5fc200

UClass * __cdecl UDS_VM_AcceptQuest::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_AcceptQuest.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_AcceptQuest",
               &Z_Registration_Info_UClass_UDS_VM_AcceptQuest.InnerSingleton,
               StaticRegisterNativesUDS_VM_AcceptQuest,0x308,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_AcceptQuest>,
               InternalVTableHelperCtorCaller<UDS_VM_AcceptQuest>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_AcceptQuest.InnerSingleton;
}

// UDS_VM_AcceptQuest @ 14b5ff5d0

UDS_VM_AcceptQuest * __thiscall
UDS_VM_AcceptQuest::UDS_VM_AcceptQuest(UDS_VM_AcceptQuest *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_AcceptQuest__6B_;
  *(undefined8 *)&(this->ClickBackButton).Delegate = 0;
  *(undefined8 *)&(this->ClickBackButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickBackButton).Delegate.field_0x10 = 0;
  (this->CloseMySelf).bIsActivate = false;
  (this->AcceptQuestCount).StringTableType = None;
  (this->AcceptQuestCount).StringTableID = 0;
  (this->AcceptQuestCount).StringEnumTableNameID.ComparisonIndex = 0;
  (this->AcceptQuestCount).StringEnumTableNameID.Number = 0;
  (this->AcceptQuestCount).DateTime.Ticks = 0;
  (this->AcceptQuestCount).TimeSpan.Ticks = 0;
  (this->AcceptQuestCount).TimeExpressionType = None;
  (this->AcceptQuestCount).IsExpression = false;
  (this->AcceptQuestCount).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->AcceptQuestCount).UniqueString.Data.ArrayNum = 0;
  (this->AcceptQuestCount).UniqueString.Data.ArrayMax = 0;
  (this->AcceptQuestCount).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AcceptQuestCount).FormatArgs.ArrayNum = 0;
  (this->AcceptQuestCount).FormatArgs.ArrayMax = 0;
  (this->EntryBindingEventField_QuestList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_QuestList).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_QuestList).UserObjectList.ArrayMax = 0;
  (this->EntryFocusEventField_QuestList).FocusIndex = 0;
  (this->EntryFocusEventField_QuestList).Offset = 0.0;
  (this->ClickOpenContentButton)._padding_ = '\0';
  (this->ClickOpenContentButton).bIsCustomSelected = false;
  (this->ClickOpenContentButton).bIsLacked = false;
  (this->ClickOpenContentButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickOpenContentButton).Delegate = 0;
  *(undefined8 *)&(this->ClickOpenContentButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickOpenContentButton).Delegate.field_0x10 = 0;
  (this->ClickAbandonButton)._padding_ = '\0';
  (this->ClickAbandonButton).bIsCustomSelected = false;
  (this->ClickAbandonButton).bIsLacked = false;
  (this->ClickAbandonButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickAbandonButton).Delegate = 0;
  *(undefined8 *)&(this->ClickAbandonButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickAbandonButton).Delegate.field_0x10 = 0;
  (this->ClickRewardButton)._padding_ = '\0';
  (this->ClickRewardButton).bIsCustomSelected = false;
  (this->ClickRewardButton).bIsLacked = false;
  (this->ClickRewardButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickRewardButton).Delegate = 0;
  *(undefined8 *)&(this->ClickRewardButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickRewardButton).Delegate.field_0x10 = 0;
  (this->ClickTraceButton)._padding_ = '\0';
  (this->ClickTraceButton).bIsCustomSelected = false;
  (this->ClickTraceButton).bIsLacked = false;
  (this->ClickTraceButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickTraceButton).Delegate = 0;
  *(undefined8 *)&(this->ClickTraceButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickTraceButton).Delegate.field_0x10 = 0;
  (this->VM_QuestInfo).field0_0x0.DebugPtr = (UDS_VM_QuestInfo *)0x0;
  (this->FixedText_Btn_Detail).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Detail).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Detail).DateTime.Ticks = 0;
  (this->FixedText_Btn_Detail).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Detail).TimeExpressionType = None;
  (this->FixedText_Btn_Detail).IsExpression = false;
  (this->FixedText_Btn_Detail).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Detail).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Detail).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Detail).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Detail).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Detail).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Abandon).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Abandon).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Abandon).DateTime.Ticks = 0;
  (this->FixedText_Btn_Abandon).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Abandon).TimeExpressionType = None;
  (this->FixedText_Btn_Abandon).IsExpression = false;
  (this->FixedText_Btn_Abandon).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Abandon).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Abandon).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Abandon).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Abandon).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Abandon).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Trace).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Trace).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Trace).DateTime.Ticks = 0;
  (this->FixedText_Btn_Trace).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Trace).TimeExpressionType = None;
  (this->FixedText_Btn_Trace).IsExpression = false;
  (this->FixedText_Btn_Trace).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Trace).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Trace).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Trace).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Trace).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Trace).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Rewards).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Rewards).StringEnumTableNameID.Number = 0;
  (this->ClickBackButton)._padding_ = '\0';
  (this->ClickBackButton).bIsCustomSelected = false;
  (this->ClickBackButton).bIsLacked = false;
  (this->ClickBackButton).bIsCustomDisabled = false;
  (this->FixedText_Btn_Detail).StringTableType = StringUi;
  (this->FixedText_Btn_Detail).StringTableID = 0xeb8d;
  (this->FixedText_Btn_Abandon).StringTableType = StringUi;
  (this->FixedText_Btn_Abandon).StringTableID = 0xeb8e;
  (this->FixedText_Btn_Trace).StringTableType = StringUi;
  (this->FixedText_Btn_Trace).StringTableID = 0xeb8f;
  (this->FixedText_Btn_Rewards).StringTableType = StringUi;
  (this->FixedText_Btn_Rewards).StringTableID = 0xeb90;
  (this->FixedText_Btn_Rewards).DateTime.Ticks = 0;
  (this->FixedText_Btn_Rewards).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Rewards).TimeExpressionType = None;
  (this->FixedText_Btn_Rewards).IsExpression = false;
  (this->FixedText_Btn_Rewards).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Rewards).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Rewards).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Rewards).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Rewards).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Rewards).FormatArgs.ArrayMax = 0;
  this->SelectedQuestID = 0;
  return this;
}

// UDS_VM_AcceptQuest @ 14b5ff850

UDS_VM_AcceptQuest * __thiscall
UDS_VM_AcceptQuest::UDS_VM_AcceptQuest(UDS_VM_AcceptQuest *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_AcceptQuest__6B_;
  *(undefined8 *)&(this->ClickBackButton).Delegate = 0;
  *(undefined8 *)&(this->ClickBackButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickBackButton).Delegate.field_0x10 = 0;
  (this->CloseMySelf).bIsActivate = false;
  (this->AcceptQuestCount).StringTableType = None;
  (this->AcceptQuestCount).StringTableID = 0;
  (this->AcceptQuestCount).StringEnumTableNameID.ComparisonIndex = 0;
  (this->AcceptQuestCount).StringEnumTableNameID.Number = 0;
  (this->AcceptQuestCount).DateTime.Ticks = 0;
  (this->AcceptQuestCount).TimeSpan.Ticks = 0;
  (this->AcceptQuestCount).TimeExpressionType = None;
  (this->AcceptQuestCount).IsExpression = false;
  (this->AcceptQuestCount).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->AcceptQuestCount).UniqueString.Data.ArrayNum = 0;
  (this->AcceptQuestCount).UniqueString.Data.ArrayMax = 0;
  (this->AcceptQuestCount).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AcceptQuestCount).FormatArgs.ArrayNum = 0;
  (this->AcceptQuestCount).FormatArgs.ArrayMax = 0;
  (this->EntryBindingEventField_QuestList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_QuestList).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_QuestList).UserObjectList.ArrayMax = 0;
  (this->EntryFocusEventField_QuestList).FocusIndex = 0;
  (this->EntryFocusEventField_QuestList).Offset = 0.0;
  (this->ClickOpenContentButton)._padding_ = '\0';
  (this->ClickOpenContentButton).bIsCustomSelected = false;
  (this->ClickOpenContentButton).bIsLacked = false;
  (this->ClickOpenContentButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickOpenContentButton).Delegate = 0;
  *(undefined8 *)&(this->ClickOpenContentButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickOpenContentButton).Delegate.field_0x10 = 0;
  (this->ClickAbandonButton)._padding_ = '\0';
  (this->ClickAbandonButton).bIsCustomSelected = false;
  (this->ClickAbandonButton).bIsLacked = false;
  (this->ClickAbandonButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickAbandonButton).Delegate = 0;
  *(undefined8 *)&(this->ClickAbandonButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickAbandonButton).Delegate.field_0x10 = 0;
  (this->ClickRewardButton)._padding_ = '\0';
  (this->ClickRewardButton).bIsCustomSelected = false;
  (this->ClickRewardButton).bIsLacked = false;
  (this->ClickRewardButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickRewardButton).Delegate = 0;
  *(undefined8 *)&(this->ClickRewardButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickRewardButton).Delegate.field_0x10 = 0;
  (this->ClickTraceButton)._padding_ = '\0';
  (this->ClickTraceButton).bIsCustomSelected = false;
  (this->ClickTraceButton).bIsLacked = false;
  (this->ClickTraceButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickTraceButton).Delegate = 0;
  *(undefined8 *)&(this->ClickTraceButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickTraceButton).Delegate.field_0x10 = 0;
  (this->VM_QuestInfo).field0_0x0.DebugPtr = (UDS_VM_QuestInfo *)0x0;
  (this->FixedText_Btn_Detail).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Detail).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Detail).DateTime.Ticks = 0;
  (this->FixedText_Btn_Detail).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Detail).TimeExpressionType = None;
  (this->FixedText_Btn_Detail).IsExpression = false;
  (this->FixedText_Btn_Detail).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Detail).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Detail).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Detail).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Detail).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Detail).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Abandon).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Abandon).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Abandon).DateTime.Ticks = 0;
  (this->FixedText_Btn_Abandon).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Abandon).TimeExpressionType = None;
  (this->FixedText_Btn_Abandon).IsExpression = false;
  (this->FixedText_Btn_Abandon).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Abandon).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Abandon).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Abandon).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Abandon).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Abandon).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Trace).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Trace).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Trace).DateTime.Ticks = 0;
  (this->FixedText_Btn_Trace).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Trace).TimeExpressionType = None;
  (this->FixedText_Btn_Trace).IsExpression = false;
  (this->FixedText_Btn_Trace).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Trace).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Trace).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Trace).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Trace).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Trace).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Rewards).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Rewards).StringEnumTableNameID.Number = 0;
  (this->ClickBackButton)._padding_ = '\0';
  (this->ClickBackButton).bIsCustomSelected = false;
  (this->ClickBackButton).bIsLacked = false;
  (this->ClickBackButton).bIsCustomDisabled = false;
  (this->FixedText_Btn_Detail).StringTableType = StringUi;
  (this->FixedText_Btn_Detail).StringTableID = 0xeb8d;
  (this->FixedText_Btn_Abandon).StringTableType = StringUi;
  (this->FixedText_Btn_Abandon).StringTableID = 0xeb8e;
  (this->FixedText_Btn_Trace).StringTableType = StringUi;
  (this->FixedText_Btn_Trace).StringTableID = 0xeb8f;
  (this->FixedText_Btn_Rewards).StringTableType = StringUi;
  (this->FixedText_Btn_Rewards).StringTableID = 0xeb90;
  (this->FixedText_Btn_Rewards).DateTime.Ticks = 0;
  (this->FixedText_Btn_Rewards).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Rewards).TimeExpressionType = None;
  (this->FixedText_Btn_Rewards).IsExpression = false;
  (this->FixedText_Btn_Rewards).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Rewards).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Rewards).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Rewards).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Rewards).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Rewards).FormatArgs.ArrayMax = 0;
  this->SelectedQuestID = 0;
  return this;
}

// ~UDS_VM_AcceptQuest @ 14b601670

void __thiscall UDS_VM_AcceptQuest::~UDS_VM_AcceptQuest(UDS_VM_AcceptQuest *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_AcceptQuest__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Btn_Rewards).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_Rewards).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_Rewards).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_Rewards).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Btn_Trace).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_Trace).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_Trace).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_Trace).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Btn_Abandon).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_Abandon).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_Abandon).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_Abandon).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Btn_Detail).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_Detail).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_Detail).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_Detail).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickTraceButton).Delegate);
  pvVar2 = *(void **)&(this->ClickTraceButton).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickTraceButton).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickRewardButton).Delegate);
  pvVar2 = *(void **)&(this->ClickRewardButton).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickRewardButton).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickAbandonButton).Delegate);
  pvVar2 = *(void **)&(this->ClickAbandonButton).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickAbandonButton).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickOpenContentButton).Delegate);
  pvVar2 = *(void **)&(this->ClickOpenContentButton).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickOpenContentButton).Delegate);
  pFVar1 = (this->EntryBindingEventField_QuestList).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->AcceptQuestCount).FormatArgs.AllocatorInstance.Data,
             (this->AcceptQuestCount).FormatArgs.ArrayNum);
  pFVar1 = (this->AcceptQuestCount).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AcceptQuestCount).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickBackButton).Delegate);
  pvVar2 = *(void **)&(this->ClickBackButton).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickBackButton).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b603920

IClassDescriptor * __thiscall
UDS_VM_AcceptQuest::GetFieldNotificationDescriptor(UDS_VM_AcceptQuest *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_AcceptQuest::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b603e60

UClass * __cdecl UDS_VM_AcceptQuest::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_AcceptQuest.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_AcceptQuest",
               &Z_Registration_Info_UClass_UDS_VM_AcceptQuest.InnerSingleton,
               StaticRegisterNativesUDS_VM_AcceptQuest,0x308,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_AcceptQuest>,
               InternalVTableHelperCtorCaller<UDS_VM_AcceptQuest>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_AcceptQuest.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_AcceptQuest @ 14b604860

void __cdecl UDS_VM_AcceptQuest::StaticRegisterNativesUDS_VM_AcceptQuest(void)

{
  return;
}

// OnChangeSelectQuestID @ 14bf5f5f0

void __thiscall UDS_VM_AcceptQuest::OnChangeSelectQuestID(UDS_VM_AcceptQuest *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  FName FVar3;
  FDS_ViewModelContext_Quest *pFVar4;
  bool bVar5;
  ESlateVisibility EVar6;
  bool bVar7;
  EDS_QuestType EVar8;
  EDS_QuestConditionType EVar9;
  int iVar10;
  UDS_QuestManager *this_00;
  UDS_VM_QuestInfo *pUVar11;
  FDS_QuestBaseTableRow *this_01;
  UDS_QuestManager *this_02;
  FName local_68;
  int local_60;
  FName local_58;
  int local_50;
  FName local_48;
  int local_40;
  FName local_38;
  int local_30;
  TSharedPtr<FDS_ViewModelContext_Quest,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  this_00 = UDS_QuestManager::GetInst();
  if (this_00 == (UDS_QuestManager *)0x0) {
    return;
  }
  this->SelectedQuestID = param_1;
  if ((this->VM_QuestInfo).field0_0x0.DebugPtr == (UDS_VM_QuestInfo *)0x0) {
    pUVar11 = UDS_ViewModelBase::CreateViewModel<UDS_VM_QuestInfo>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UDS_VM_QuestInfo *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
    (this->VM_QuestInfo).field0_0x0.DebugPtr = pUVar11;
    if (pUVar11 == (UDS_VM_QuestInfo *)0x0) goto LAB_14bf5f703;
  }
  MakeContext<FDS_ViewModelContext_Quest>(&local_28);
  pFVar4 = local_28.Object;
  if (local_28.Object != (FDS_ViewModelContext_Quest *)0x0) {
    if ((local_28.Object == (FDS_ViewModelContext_Quest *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(undefined4 *)&pFVar4->_padding_ = 0x76;
    pFVar4->QuestID = this->SelectedQuestID;
    pUVar11 = (this->VM_QuestInfo).field0_0x0.DebugPtr;
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
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar11,&local_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
LAB_14bf5f703:
  iVar1 = FFieldNotificationClassDescriptor::VisibilityQuestInfoPanel.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::VisibilityQuestInfoPanel.FieldName;
  EVar6 = Collapsed;
  if (0 < this->SelectedQuestID) {
    EVar6 = SelfHitTestInvisible;
  }
  if (this->VisibilityQuestInfoPanel != EVar6) {
    this->VisibilityQuestInfoPanel = EVar6;
    local_60 = iVar1;
    local_68 = FVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
  }
  this_01 = FDS_QuestBaseTableRow::GetRef((longlong)this->SelectedQuestID,true);
  bVar5 = FDS_QuestBaseTableRow::IsValid(this_01);
  if (bVar5) {
    if ((this_01->QuestType == Daily) &&
       (EVar9 = UDS_QuestManager::GetQuestConditionType(this_00,this->SelectedQuestID,0),
       EVar9 == AbleComplete)) {
      SetIsVisibilityDailyQuestButton(this,true);
    }
    else {
      iVar1 = FFieldNotificationClassDescriptor::IsVisibilityDailyQuestButton.BitNumber;
      FVar3 = FFieldNotificationClassDescriptor::IsVisibilityDailyQuestButton.FieldName;
      if (this->IsVisibilityDailyQuestButton != false) {
        this->IsVisibilityDailyQuestButton = false;
        local_50 = iVar1;
        local_58 = FVar3;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
      }
    }
  }
  this_02 = UDS_QuestManager::GetInst();
  if (this_02 != (UDS_QuestManager *)0x0) {
    bVar7 = UDS_QuestManager::HasQuestData(this->SelectedQuestID);
    bVar5 = true;
    if ((bVar7) && (EVar8 = UDS_QuestManager::GetQuestType(this->SelectedQuestID), EVar8 != Main)) {
      EVar9 = UDS_QuestManager::GetQuestConditionType(this_02,this->SelectedQuestID,0);
      bVar5 = true;
      if (EVar9 == InProgress) {
        bVar5 = false;
      }
    }
    iVar1 = FFieldNotificationClassDescriptor::DisabledAbandonButton.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::DisabledAbandonButton.FieldName;
    if (this->DisabledAbandonButton != bVar5) {
      this->DisabledAbandonButton = bVar5;
      local_40 = iVar1;
      local_48 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
    }
  }
  bVar5 = UDS_QuestManager::HasQuestData(this->SelectedQuestID);
  if ((bVar5) &&
     (iVar1 = this->SelectedQuestID, iVar10 = UDS_QuestManager::GetTraceQuestID(this_00),
     iVar1 != iVar10)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  local_30 = FFieldNotificationClassDescriptor::DisabledTraceButton.BitNumber;
  local_38 = FFieldNotificationClassDescriptor::DisabledTraceButton.FieldName;
  if (this->DisabledTraceButton != bVar5) {
    this->DisabledTraceButton = bVar5;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
  }
  return;
}

// OnChangeTraceQuestID @ 14bf5f9d0

void __thiscall UDS_VM_AcceptQuest::OnChangeTraceQuestID(UDS_VM_AcceptQuest *this,int param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  UDS_QuestManager *this_00;
  FName local_18;
  int local_10;
  
  this_00 = UDS_QuestManager::GetInst();
  if (this_00 != (UDS_QuestManager *)0x0) {
    bVar2 = UDS_QuestManager::HasQuestData(this->SelectedQuestID);
    if ((bVar2) &&
       (iVar1 = this->SelectedQuestID, iVar3 = UDS_QuestManager::GetTraceQuestID(this_00),
       iVar1 != iVar3)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    local_18 = FFieldNotificationClassDescriptor::DisabledTraceButton.FieldName;
    if (this->DisabledTraceButton != bVar2) {
      local_10 = FFieldNotificationClassDescriptor::DisabledTraceButton.BitNumber;
      this->DisabledTraceButton = bVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    return;
  }
  return;
}

// OnClickAbandonButton @ 14bf61390

void __thiscall
UDS_VM_AcceptQuest::OnClickAbandonButton(UDS_VM_AcceptQuest *this,FDS_ButtonEventField *param_1)

{
  UDS_QuestManager *this_00;
  
  if (param_1->bIsCustomDisabled != true) {
    this_00 = UDS_QuestManager::GetInst();
    if (this_00 != (UDS_QuestManager *)0x0) {
      UDS_QuestManager::OnReqCancelQuest(this_00,this->SelectedQuestID);
      return;
    }
  }
  return;
}

// OnClickBackButton @ 14bf617b0

void __thiscall
UDS_VM_AcceptQuest::OnClickBackButton(UDS_VM_AcceptQuest *this,FDS_ButtonEventField *param_1)

{
  FName local_18;
  int local_10;
  
  (this->CloseMySelf).bIsActivate = true;
  local_10 = FFieldNotificationClassDescriptor::CloseMySelf.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CloseMySelf.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnClickOpenContentButton @ 14bf62470

void __thiscall
UDS_VM_AcceptQuest::OnClickOpenContentButton(UDS_VM_AcceptQuest *this,FDS_ButtonEventField *param_1)

{
  UDS_QuestManager *this_00;
  FName local_18;
  int local_10;
  
  if (param_1->bIsCustomDisabled != true) {
    this_00 = UDS_QuestManager::GetInst();
    if (this_00 != (UDS_QuestManager *)0x0) {
      UDS_QuestManager::OpenQuestContent(this_00,this->SelectedQuestID);
      (this->CloseMySelf).bIsActivate = true;
      local_10 = FFieldNotificationClassDescriptor::CloseMySelf.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::CloseMySelf.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// OnClickRewardButton @ 14bf626d0

void __thiscall
UDS_VM_AcceptQuest::OnClickRewardButton(UDS_VM_AcceptQuest *this,FDS_ButtonEventField *param_1)

{
  UDS_QuestManager *this_00;
  
  this_00 = UDS_QuestManager::GetInst();
  if (this_00 != (UDS_QuestManager *)0x0) {
    UDS_QuestManager::OnReqQuestComplete(this_00,this->SelectedQuestID);
    return;
  }
  return;
}

// OnClickTraceButton @ 14bf62e00

void __thiscall
UDS_VM_AcceptQuest::OnClickTraceButton(UDS_VM_AcceptQuest *this,FDS_ButtonEventField *param_1)

{
  UDS_QuestManager *this_00;
  
  if (param_1->bIsCustomDisabled != true) {
    this_00 = UDS_QuestManager::GetInst();
    if (this_00 != (UDS_QuestManager *)0x0) {
      UDS_QuestManager::OnReqQuestTrace(this_00,this->SelectedQuestID);
      return;
    }
  }
  return;
}

// OnCloseMySelf @ 14bf63610

void __thiscall UDS_VM_AcceptQuest::OnCloseMySelf(UDS_VM_AcceptQuest *this)

{
  FName local_18;
  int local_10;
  
  (this->CloseMySelf).bIsActivate = true;
  local_10 = FFieldNotificationClassDescriptor::CloseMySelf.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CloseMySelf.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnRemoveQuestData @ 14bf66b40

void __thiscall UDS_VM_AcceptQuest::OnRemoveQuestData(UDS_VM_AcceptQuest *this,int param_1)

{
  bool bVar1;
  UDS_QuestManager *pUVar2;
  UDS_QuestEvent *pUVar3;
  int iVar4;
  undefined4 local_res18 [4];
  TArray<EDS_QuestType,TSizedDefaultAllocator<32>_> local_28;
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  pUVar2 = UDS_QuestManager::GetInst();
  if (pUVar2 != (UDS_QuestManager *)0x0) {
    local_res18[0] = 0x9050102;
    iVar4 = 0;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 4;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,4,0,&local_28.AllocatorInstance,4,&local_28.ArrayMax);
    memcpy(local_28.AllocatorInstance.Data,local_res18,4);
    UDS_QuestManager::GetQuestListByInProgress(&local_18,&local_28,true);
    if (0 < local_18.ArrayNum) {
      iVar4 = *(int *)local_18.AllocatorInstance.Data;
    }
    pUVar3 = UDS_QuestEvent::GetEvent();
    if (pUVar3 != (UDS_QuestEvent *)0x0) {
      bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &pUVar3->OnSelectedQuestDelegate);
      if (bVar1) {
        TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
                  (&(pUVar3->OnSelectedQuestDelegate).Delegate,iVar4);
      }
    }
    UpdateAcceptQuestList(this);
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return;
}

// OnSetViewModel @ 14bf67b90

void __thiscall
UDS_VM_AcceptQuest::OnSetViewModel
          (UDS_VM_AcceptQuest *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  UDS_QuestManager *this_00;
  UDS_QuestEvent *pUVar4;
  undefined4 local_res10 [6];
  undefined1 local_98 [24];
  undefined4 uStack_80;
  int iStack_7c;
  TArray<int,TSizedDefaultAllocator<32>_> local_78;
  code *local_68;
  longlong lStack_60;
  code *local_58;
  longlong lStack_50;
  code *local_48;
  longlong lStack_40;
  
  if ((param_1->Object == (FDS_ViewModelContext *)0x0) ||
     (this_00 = UDS_QuestManager::GetInst(), this_00 == (UDS_QuestManager *)0x0))
  goto LAB_14bf67d74;
  pUVar4 = UDS_QuestEvent::GetEvent();
  iVar3 = 0;
  if (pUVar4 != (UDS_QuestEvent *)0x0) {
    uStack_80 = 0;
    local_98._16_8_ = OnRemoveQuestData;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar4->OnRemoveQuestDataDelegate,this);
    lStack_60 = CONCAT44(iStack_7c,uStack_80);
    local_68 = (code *)local_98._16_8_;
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_AcceptQuest>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar4->OnRemoveQuestDataDelegate,(UDS_VM_AcceptQuest *)(local_res10 + 2),
               (pmf_1c416951 *)this);
    uStack_80 = 0;
    local_98._16_8_ = OnChangeTraceQuestID;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar4->OnChangedTraceQuestDelegate,this);
    lStack_50 = CONCAT44(iStack_7c,uStack_80);
    local_58 = (code *)local_98._16_8_;
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_AcceptQuest>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar4->OnChangedTraceQuestDelegate,(UDS_VM_AcceptQuest *)(local_res10 + 4),
               (pmf_1c416951 *)this);
    uStack_80 = 0;
    local_98._16_8_ = OnChangeSelectQuestID;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar4->OnSelectedQuestDelegate,this);
    lStack_40 = CONCAT44(iStack_7c,uStack_80);
    local_48 = (code *)local_98._16_8_;
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_AcceptQuest>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar4->OnSelectedQuestDelegate,(UDS_VM_AcceptQuest *)local_98,(pmf_1c416951 *)this)
    ;
  }
  iVar2 = UDS_QuestManager::GetTraceQuestID(this_00);
  if (iVar2 < 1) {
LAB_14bf67cda:
    local_res10[0] = 0x9050102;
    local_98._16_8_ = (code *)0x0;
    uStack_80 = 4;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,4,0,(ForAnyElementType *)(local_98 + 0x10),4,&iStack_7c);
    memcpy((void *)local_98._16_8_,local_res10,4);
    UDS_QuestManager::GetQuestListByInProgress
              (&local_78,(TArray<EDS_QuestType,TSizedDefaultAllocator<32>_> *)(local_98 + 0x10),true
              );
    if (0 < local_78.ArrayNum) {
      iVar3 = *(int *)local_78.AllocatorInstance.Data;
    }
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
  }
  else {
    iVar2 = UDS_QuestManager::GetTraceQuestID(this_00);
    bVar1 = UDS_QuestManager::HasQuestData(iVar2);
    if (!bVar1) goto LAB_14bf67cda;
    iVar3 = UDS_QuestManager::GetTraceQuestID(this_00);
  }
  OnChangeSelectQuestID(this,iVar3);
  UpdateAcceptQuestList(this);
LAB_14bf67d74:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetAcceptQuestCount @ 14bf793b0

void __thiscall UDS_VM_AcceptQuest::SetAcceptQuestCount(UDS_VM_AcceptQuest *this)

{
  FInstancedStruct *pFVar1;
  FObjectPtr_u_0 FVar2;
  int iVar3;
  int iVar4;
  FObjectPtr_u_0 *pFVar5;
  FDS_Int32StringFormatArg *pFVar6;
  longlong lVar7;
  undefined4 local_res8 [2];
  TArray<EDS_QuestType,TSizedDefaultAllocator<32>_> local_48;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> local_38;
  TArray<int,TSizedDefaultAllocator<32>_> local_28;
  
  FDS_Text::Reset(&this->AcceptQuestCount);
  local_res8[0] = 0x9050102;
  local_48.ArrayNum = 4;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,4,0,&local_48.AllocatorInstance,4,&local_48.ArrayMax);
  memcpy(local_48.AllocatorInstance.Data,local_res8,4);
  UDS_QuestManager::GetQuestListByInProgress(&local_28,&local_48,false);
  iVar3 = DS_CommonDataHelper::QuestAcceptMaxCount();
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  iVar4 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x828,&local_38.AllocatorInstance,&local_38.ArrayMax);
  pFVar1 = (FInstancedStruct *)(local_38.AllocatorInstance.Data + (longlong)iVar4 * 0x28);
  local_38.ArrayNum = iVar4 + 1;
  FInstancedStruct::FInstancedStruct(pFVar1);
  pFVar5 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
  FVar2 = pFVar5[1];
  pFVar1[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar5;
  pFVar1[1].StructMemory = (uchar *)FVar2;
  pFVar1[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar5[2];
  FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(pFVar1);
  pFVar6 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(pFVar1);
  if (pFVar6 != (FDS_Int32StringFormatArg *)0x0) {
    pFVar6->Value = local_28.ArrayNum;
  }
  if (local_38.ArrayNum == local_38.ArrayMax) {
    local_38.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x828,&local_38.AllocatorInstance,&local_38.ArrayMax);
  }
  lVar7 = (longlong)local_38.ArrayNum;
  local_38.ArrayNum = local_38.ArrayNum + 1;
  pFVar1 = (FInstancedStruct *)(local_38.AllocatorInstance.Data + lVar7 * 0x28);
  FInstancedStruct::FInstancedStruct(pFVar1);
  pFVar5 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
  FVar2 = pFVar5[1];
  pFVar1[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar5;
  pFVar1[1].StructMemory = (uchar *)FVar2;
  pFVar1[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar5[2];
  FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(pFVar1);
  pFVar6 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(pFVar1);
  if (pFVar6 != (FDS_Int32StringFormatArg *)0x0) {
    pFVar6->Value = iVar3;
  }
  FDS_Text::SetTextFormatFromStringTable(&this->AcceptQuestCount,StringUi,0xebf2,&local_38);
  local_48.ArrayNum = FFieldNotificationClassDescriptor::AcceptQuestCount.BitNumber;
  local_48.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::AcceptQuestCount.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if ((FDS_TextFormatArg *)local_38.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// SetDisabledAbandonButton @ 14bf7a780

void __thiscall UDS_VM_AcceptQuest::SetDisabledAbandonButton(UDS_VM_AcceptQuest *this)

{
  bool bVar1;
  EDS_QuestType EVar2;
  EDS_QuestConditionType EVar3;
  UDS_QuestManager *this_00;
  bool bVar4;
  FName local_18;
  int local_10;
  
  this_00 = UDS_QuestManager::GetInst();
  if (this_00 != (UDS_QuestManager *)0x0) {
    bVar1 = UDS_QuestManager::HasQuestData(this->SelectedQuestID);
    bVar4 = true;
    if ((bVar1) && (EVar2 = UDS_QuestManager::GetQuestType(this->SelectedQuestID), EVar2 != Main)) {
      EVar3 = UDS_QuestManager::GetQuestConditionType(this_00,this->SelectedQuestID,0);
      bVar4 = true;
      if (EVar3 == InProgress) {
        bVar4 = false;
      }
    }
    local_10 = FFieldNotificationClassDescriptor::DisabledAbandonButton.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::DisabledAbandonButton.FieldName;
    if (this->DisabledAbandonButton != bVar4) {
      this->DisabledAbandonButton = bVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// SetDisabledOpenContentButton @ 14bf7a920

void __thiscall
UDS_VM_AcceptQuest::SetDisabledOpenContentButton(UDS_VM_AcceptQuest *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::DisabledOpenContentButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::DisabledOpenContentButton.FieldName;
  if (this->DisabledOpenContentButton != param_1) {
    this->DisabledOpenContentButton = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetDisabledTraceButton @ 14bf7a970

void __thiscall UDS_VM_AcceptQuest::SetDisabledTraceButton(UDS_VM_AcceptQuest *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::DisabledTraceButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::DisabledTraceButton.FieldName;
  if (this->DisabledTraceButton != param_1) {
    this->DisabledTraceButton = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetIsVisibilityDailyQuestButton @ 14bf7b7a0

void __thiscall
UDS_VM_AcceptQuest::SetIsVisibilityDailyQuestButton(UDS_VM_AcceptQuest *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsVisibilityDailyQuestButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsVisibilityDailyQuestButton.FieldName;
  if (this->IsVisibilityDailyQuestButton != param_1) {
    this->IsVisibilityDailyQuestButton = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVM_QuestInfo @ 14bf80520

void __thiscall UDS_VM_AcceptQuest::SetVM_QuestInfo(UDS_VM_AcceptQuest *this)

{
  code *pcVar1;
  FDS_ViewModelContext_Quest *pFVar2;
  bool bVar3;
  UDS_VM_QuestInfo *pUVar4;
  TSharedPtr<FDS_ViewModelContext_Quest,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((this->VM_QuestInfo).field0_0x0.DebugPtr == (UDS_VM_QuestInfo *)0x0) {
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_QuestInfo>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_VM_QuestInfo *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VM_QuestInfo).field0_0x0.DebugPtr = pUVar4;
    if (pUVar4 == (UDS_VM_QuestInfo *)0x0) {
      return;
    }
  }
  MakeContext<FDS_ViewModelContext_Quest>(&local_28);
  pFVar2 = local_28.Object;
  if (local_28.Object == (FDS_ViewModelContext_Quest *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    return;
  }
  if ((local_28.Object == (FDS_ViewModelContext_Quest *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined4 *)&pFVar2->_padding_ = 0x76;
  pFVar2->QuestID = this->SelectedQuestID;
  pUVar4 = (this->VM_QuestInfo).field0_0x0.DebugPtr;
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

// SetVisibilityQuestInfoPanel @ 14bf81f40

void __thiscall
UDS_VM_AcceptQuest::SetVisibilityQuestInfoPanel(UDS_VM_AcceptQuest *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::VisibilityQuestInfoPanel.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibilityQuestInfoPanel.FieldName;
  if (this->VisibilityQuestInfoPanel != *param_1) {
    this->VisibilityQuestInfoPanel = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14bf84680

void __thiscall UDS_VM_AcceptQuest::UnbindModel(UDS_VM_AcceptQuest *this)

{
  UDS_QuestEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_QuestEvent::GetEvent();
  if (pUVar1 != (UDS_QuestEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnRemoveQuestDataDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangedTraceQuestDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnSelectedQuestDelegate,this);
  }
  return;
}

// UpdateAcceptQuestList @ 14bf85dd0

void __thiscall UDS_VM_AcceptQuest::UpdateAcceptQuestList(UDS_VM_AcceptQuest *this)

{
  int iVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  UDS_UserObjectListItem *this_00;
  FDS_ViewModelContext *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  UScriptStruct *pUVar7;
  UDS_ViewModelContextManager *this_01;
  ulonglong uVar8;
  FDS_ViewModelContext *pFVar9;
  int iVar10;
  int iVar11;
  ForAnyElementType FVar12;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  int local_res18;
  uint local_res20;
  UDS_UserObjectListItem *local_b8;
  FScriptContainerElement *local_b0;
  FName local_a8;
  int local_a0;
  FName local_98;
  int local_90;
  TArray<EDS_QuestType,TSizedDefaultAllocator<32>_> local_88;
  TArray<int,TSizedDefaultAllocator<32>_> local_78;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  
  iVar11 = 0;
  local_res10[0] = 0x9050102;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,4,0,&local_88.AllocatorInstance,4,&local_88.ArrayMax);
  memcpy(local_88.AllocatorInstance.Data,local_res10,4);
  UDS_QuestManager::GetQuestListByInProgress(&local_78,&local_88,true);
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_QuestList);
  local_res20 = local_78.ArrayNum;
  uVar8 = (ulonglong)(int)local_res20;
  local_res18 = 0;
  local_b0 = local_78.AllocatorInstance.Data + uVar8 * 4;
  FVar12.Data = local_78.AllocatorInstance.Data;
  iVar10 = iVar11;
  while( true ) {
    pFVar3 = local_b0;
    pFVar9 = (FDS_ViewModelContext *)0x0;
    if (local_78.ArrayNum != (int)uVar8) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar12.Data == pFVar3) break;
    iVar1 = *(int *)FVar12.Data;
    this_00 = NewObject<UDS_UserObjectListItem>((UObject *)this);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_00 == (UDS_UserObjectListItem *)0x0) goto LAB_14bf860a7;
    }
    else {
      if (this_00 == (UDS_UserObjectListItem *)0x0) goto LAB_14bf860a7;
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    pFVar5 = ::operator_new(0x28);
    if (pFVar5 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar5->ViewModelTemplateKey = 0;
      *(undefined2 *)((longlong)&pFVar5[1]._padding_ + 1) = 0;
      *(undefined1 *)((longlong)&pFVar5[1]._padding_ + 3) = 0;
      pFVar5->DerivedStaticStruct = (UStruct *)0x0;
      (pFVar5->ViewModelName).ComparisonIndex = 0;
      (pFVar5->ViewModelName).Number = 0;
      pFVar5->_padding_ = (longlong)&___7FDS_ViewModelContext_QuestListSlot__6B_;
      *(undefined1 *)&pFVar5[1]._padding_ = 0;
      *(undefined4 *)((longlong)&pFVar5[1]._padding_ + 4) = 0;
      pFVar9 = pFVar5;
    }
    pTVar6 = ::operator_new(0x20);
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      pTVar6 = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pTVar6->SharedReferenceCount = (atomic<int>)0x1;
      pTVar6[1]._padding_ = (longlong)ViewModelContextDeleter;
      pTVar6->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_QuestListSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      pTVar6->WeakReferenceCount = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pTVar6[1].SharedReferenceCount = pFVar9;
    }
    if ((pFVar9 == (FDS_ViewModelContext *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar7 = FDS_ViewModelContext_QuestListSlot::StaticStruct();
    pFVar9->DerivedStaticStruct = (UStruct *)pUVar7;
    this_01 = UDS_ViewModelContextManager::GetInst();
    if (this_01 != (UDS_ViewModelContextManager *)0x0) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_68.Object = pFVar9;
      local_68.SharedReferenceCount.ReferenceController = pTVar6;
      UDS_ViewModelContextManager::RegisterContext(this_01,&local_68);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
    }
    pFVar9->ViewModelTemplateKey = AcceptQuestListSlot;
    *(int *)((longlong)&pFVar9[1]._padding_ + 4) = iVar1;
    *(bool *)&pFVar9[1]._padding_ = iVar1 == this->SelectedQuestID;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_58.Object = pFVar9;
    local_58.SharedReferenceCount.ReferenceController = pTVar6;
    UDS_UserObjectListItem::AddContext(this_00,&local_58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    iVar10 = iVar11;
    if (iVar1 != this->SelectedQuestID) {
      iVar10 = local_res18;
    }
    local_res18 = iVar10;
    local_b8 = this_00;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    FDS_EntryBindingEventField::Add
              (&this->EntryBindingEventField_QuestList,(TObjectPtr<UDS_UserObjectListItem>)&local_b8
              );
    iVar11 = iVar11 + 1;
    uVar8 = (ulonglong)local_res20;
    FVar12.Data = FVar12.Data + 4;
  }
  local_a0 = FFieldNotificationClassDescriptor::EntryBindingEventField_QuestList.BitNumber;
  local_a8 = FFieldNotificationClassDescriptor::EntryBindingEventField_QuestList.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
  (this->EntryFocusEventField_QuestList).FocusIndex = iVar10;
  local_90 = FFieldNotificationClassDescriptor::EntryFocusEventField_QuestList.BitNumber;
  local_98 = FFieldNotificationClassDescriptor::EntryFocusEventField_QuestList.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
  SetAcceptQuestCount(this);
LAB_14bf860a7:
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

