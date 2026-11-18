// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 36

// StaticClass @ 14b6ba8f0

UClass * __cdecl UDS_VM_QuestData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_QuestData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_QuestData",
               &Z_Registration_Info_UClass_UDS_VM_QuestData.InnerSingleton,
               StaticRegisterNativesUDS_VM_QuestData,0x6f8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_QuestData>,
               InternalVTableHelperCtorCaller<UDS_VM_QuestData>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_QuestData.InnerSingleton;
}

// UDS_VM_QuestData @ 14b6be0f0

UDS_VM_QuestData * __thiscall
UDS_VM_QuestData::UDS_VM_QuestData(UDS_VM_QuestData *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestData__6B_;
  (this->QuestName).StringTableID = 0;
  (this->QuestName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->QuestName).StringEnumTableNameID.Number = 0;
  (this->QuestName).DateTime.Ticks = 0;
  (this->QuestName).TimeSpan.Ticks = 0;
  (this->QuestName).TimeExpressionType = None;
  (this->QuestName).IsExpression = false;
  (this->QuestName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QuestName).UniqueString.Data.ArrayNum = 0;
  (this->QuestName).UniqueString.Data.ArrayMax = 0;
  (this->QuestName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QuestName).FormatArgs.ArrayNum = 0;
  (this->QuestName).FormatArgs.ArrayMax = 0;
  (this->QuestStory).StringTableType = None;
  (this->QuestStory).StringTableID = 0;
  (this->QuestStory).StringEnumTableNameID.ComparisonIndex = 0;
  (this->QuestStory).StringEnumTableNameID.Number = 0;
  (this->QuestStory).DateTime.Ticks = 0;
  (this->QuestStory).TimeSpan.Ticks = 0;
  (this->QuestStory).TimeExpressionType = None;
  (this->QuestStory).IsExpression = false;
  (this->QuestStory).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QuestStory).UniqueString.Data.ArrayNum = 0;
  (this->QuestStory).UniqueString.Data.ArrayMax = 0;
  (this->QuestStory).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QuestStory).FormatArgs.ArrayNum = 0;
  (this->QuestStory).FormatArgs.ArrayMax = 0;
  (this->Requirement).StringTableType = None;
  (this->Requirement).StringTableID = 0;
  (this->Requirement).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Requirement).StringEnumTableNameID.Number = 0;
  (this->Requirement).DateTime.Ticks = 0;
  (this->Requirement).TimeSpan.Ticks = 0;
  (this->Requirement).TimeExpressionType = None;
  (this->Requirement).IsExpression = false;
  (this->Requirement).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Requirement).UniqueString.Data.ArrayNum = 0;
  (this->Requirement).UniqueString.Data.ArrayMax = 0;
  (this->Requirement).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Requirement).FormatArgs.ArrayNum = 0;
  (this->Requirement).FormatArgs.ArrayMax = 0;
  (this->Clue_AcceptInfo).StringTableType = None;
  (this->Clue_AcceptInfo).StringTableID = 0;
  (this->Clue_AcceptInfo).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Clue_AcceptInfo).StringEnumTableNameID.Number = 0;
  (this->Clue_AcceptInfo).DateTime.Ticks = 0;
  (this->Clue_AcceptInfo).TimeSpan.Ticks = 0;
  (this->Clue_AcceptInfo).TimeExpressionType = None;
  (this->Clue_AcceptInfo).IsExpression = false;
  (this->Clue_AcceptInfo).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Clue_AcceptInfo).UniqueString.Data.ArrayNum = 0;
  (this->Clue_AcceptInfo).UniqueString.Data.ArrayMax = 0;
  (this->Clue_AcceptInfo).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Clue_AcceptInfo).FormatArgs.ArrayNum = 0;
  (this->Clue_AcceptInfo).FormatArgs.ArrayMax = 0;
  (this->Clue_CompleteInfo).StringTableType = None;
  (this->Clue_CompleteInfo).StringTableID = 0;
  (this->Clue_CompleteInfo).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Clue_CompleteInfo).StringEnumTableNameID.Number = 0;
  (this->Clue_CompleteInfo).DateTime.Ticks = 0;
  (this->Clue_CompleteInfo).TimeSpan.Ticks = 0;
  (this->Clue_CompleteInfo).TimeExpressionType = None;
  (this->Clue_CompleteInfo).IsExpression = false;
  (this->Clue_CompleteInfo).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Clue_CompleteInfo).UniqueString.Data.ArrayNum = 0;
  (this->Clue_CompleteInfo).UniqueString.Data.ArrayMax = 0;
  (this->Clue_CompleteInfo).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Clue_CompleteInfo).FormatArgs.ArrayNum = 0;
  (this->Clue_CompleteInfo).FormatArgs.ArrayMax = 0;
  (this->Condition).StringTableType = None;
  (this->Condition).StringTableID = 0;
  (this->Condition).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Condition).StringEnumTableNameID.Number = 0;
  (this->Condition).DateTime.Ticks = 0;
  (this->Condition).TimeSpan.Ticks = 0;
  (this->Condition).TimeExpressionType = None;
  (this->Condition).IsExpression = false;
  (this->Condition).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Condition).UniqueString.Data.ArrayNum = 0;
  (this->Condition).UniqueString.Data.ArrayMax = 0;
  (this->Condition).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Condition).FormatArgs.ArrayNum = 0;
  (this->Condition).FormatArgs.ArrayMax = 0;
  (this->QuestStoryTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->QuestStoryTitle).StringEnumTableNameID.Number = 0;
  (this->QuestStoryTitle).DateTime.Ticks = 0;
  (this->QuestStoryTitle).TimeSpan.Ticks = 0;
  (this->QuestStoryTitle).TimeExpressionType = None;
  (this->QuestName).StringTableType = None;
  (this->QuestStoryTitle).StringTableType = StringUi;
  (this->QuestStoryTitle).StringTableID = 0xeb2a;
  (this->QuestStoryTitle).IsExpression = false;
  (this->QuestStoryTitle).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QuestStoryTitle).UniqueString.Data.ArrayNum = 0;
  (this->QuestStoryTitle).UniqueString.Data.ArrayMax = 0;
  (this->QuestStoryTitle).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QuestStoryTitle).FormatArgs.ArrayNum = 0;
  (this->QuestStoryTitle).FormatArgs.ArrayMax = 0;
  (this->ChapterTitle).StringTableType = None;
  (this->ChapterTitle).StringTableID = 0;
  (this->ChapterTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ChapterTitle).StringEnumTableNameID.Number = 0;
  (this->ChapterTitle).DateTime.Ticks = 0;
  (this->ChapterTitle).TimeSpan.Ticks = 0;
  (this->ChapterTitle).TimeExpressionType = None;
  (this->ChapterTitle).IsExpression = false;
  (this->ChapterTitle).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChapterTitle).UniqueString.Data.ArrayNum = 0;
  (this->ChapterTitle).UniqueString.Data.ArrayMax = 0;
  (this->ChapterTitle).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChapterTitle).FormatArgs.ArrayNum = 0;
  (this->ChapterTitle).FormatArgs.ArrayMax = 0;
  (this->SectionTitle).StringTableType = None;
  (this->SectionTitle).StringTableID = 0;
  (this->SectionTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->SectionTitle).StringEnumTableNameID.Number = 0;
  (this->SectionTitle).DateTime.Ticks = 0;
  (this->SectionTitle).TimeSpan.Ticks = 0;
  (this->SectionTitle).TimeExpressionType = None;
  (this->SectionTitle).IsExpression = false;
  (this->SectionTitle).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SectionTitle).UniqueString.Data.ArrayNum = 0;
  (this->SectionTitle).UniqueString.Data.ArrayMax = 0;
  (this->SectionTitle).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SectionTitle).FormatArgs.ArrayNum = 0;
  (this->SectionTitle).FormatArgs.ArrayMax = 0;
  (this->SectionStory).StringTableType = None;
  (this->SectionStory).StringTableID = 0;
  (this->SectionStory).StringEnumTableNameID.ComparisonIndex = 0;
  (this->SectionStory).StringEnumTableNameID.Number = 0;
  (this->SectionStory).DateTime.Ticks = 0;
  (this->SectionStory).TimeSpan.Ticks = 0;
  (this->SectionStory).TimeExpressionType = None;
  (this->SectionStory).IsExpression = false;
  (this->SectionStory).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SectionStory).UniqueString.Data.ArrayNum = 0;
  (this->SectionStory).UniqueString.Data.ArrayMax = 0;
  (this->SectionStory).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SectionStory).FormatArgs.ArrayNum = 0;
  (this->SectionStory).FormatArgs.ArrayMax = 0;
  this->IsDifficlutyIcon = false;
  (this->EntryBindingEventField_RewardList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_RewardList).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_RewardList).UserObjectList.ArrayMax = 0;
  this->IsRewardItem = false;
  this->IsRewardGoods = false;
  this->IsRewardPoint = false;
  (this->VM_MoneyDisplay1).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  (this->VM_MoneyDisplay2).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  (this->VM_PlayerExpDisplay).field0_0x0.DebugPtr = (UDS_VM_ExpDisplay *)0x0;
  (this->VM_CharExpDisplay).field0_0x0.DebugPtr = (UDS_VM_ExpDisplay *)0x0;
  (this->EntryBindingEventField_ObjectiveList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_ObjectiveList).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_ObjectiveList).UserObjectList.ArrayMax = 0;
  (this->RepeatCount).StringTableType = None;
  (this->RepeatCount).StringTableID = 0;
  (this->RepeatCount).StringEnumTableNameID.ComparisonIndex = 0;
  (this->RepeatCount).StringEnumTableNameID.Number = 0;
  (this->RepeatCount).DateTime.Ticks = 0;
  (this->RepeatCount).TimeSpan.Ticks = 0;
  (this->RepeatCount).TimeExpressionType = None;
  (this->RepeatCount).IsExpression = false;
  (this->RepeatCount).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RepeatCount).UniqueString.Data.ArrayNum = 0;
  (this->RepeatCount).UniqueString.Data.ArrayMax = 0;
  (this->RepeatCount).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RepeatCount).FormatArgs.ArrayNum = 0;
  (this->RepeatCount).FormatArgs.ArrayMax = 0;
  (this->AccepName).StringTableType = None;
  (this->AccepName).StringTableID = 0;
  (this->AccepName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->AccepName).StringEnumTableNameID.Number = 0;
  (this->AccepName).DateTime.Ticks = 0;
  (this->AccepName).TimeSpan.Ticks = 0;
  (this->AccepName).TimeExpressionType = None;
  (this->AccepName).IsExpression = false;
  (this->AccepName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AccepName).UniqueString.Data.ArrayNum = 0;
  (this->AccepName).UniqueString.Data.ArrayMax = 0;
  (this->AccepName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AccepName).FormatArgs.ArrayNum = 0;
  (this->AccepName).FormatArgs.ArrayMax = 0;
  (this->AbandonName).StringTableType = None;
  (this->AbandonName).StringTableID = 0;
  (this->AbandonName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->AbandonName).StringEnumTableNameID.Number = 0;
  (this->AbandonName).DateTime.Ticks = 0;
  (this->AbandonName).TimeSpan.Ticks = 0;
  (this->AbandonName).TimeExpressionType = None;
  (this->AbandonName).IsExpression = false;
  (this->AbandonName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AbandonName).UniqueString.Data.ArrayNum = 0;
  (this->AbandonName).UniqueString.Data.ArrayMax = 0;
  (this->AbandonName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AbandonName).FormatArgs.ArrayNum = 0;
  (this->AbandonName).FormatArgs.ArrayMax = 0;
  (this->ClaimName).StringTableType = None;
  (this->ClaimName).StringTableID = 0;
  (this->ClaimName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ClaimName).StringEnumTableNameID.Number = 0;
  (this->ClaimName).DateTime.Ticks = 0;
  (this->ClaimName).TimeSpan.Ticks = 0;
  (this->ClaimName).TimeExpressionType = None;
  (this->ClaimName).IsExpression = false;
  (this->ClaimName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClaimName).UniqueString.Data.ArrayNum = 0;
  (this->ClaimName).UniqueString.Data.ArrayMax = 0;
  (this->ClaimName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClaimName).FormatArgs.ArrayNum = 0;
  (this->ClaimName).FormatArgs.ArrayMax = 0;
  (this->CompleteName).StringTableType = None;
  (this->CompleteName).StringTableID = 0;
  (this->CompleteName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CompleteName).StringEnumTableNameID.Number = 0;
  (this->CompleteName).DateTime.Ticks = 0;
  (this->CompleteName).TimeSpan.Ticks = 0;
  (this->CompleteName).TimeExpressionType = None;
  (this->CompleteName).IsExpression = false;
  (this->CompleteName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompleteName).UniqueString.Data.ArrayNum = 0;
  (this->CompleteName).UniqueString.Data.ArrayMax = 0;
  (this->CompleteName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompleteName).FormatArgs.ArrayNum = 0;
  (this->CompleteName).FormatArgs.ArrayMax = 0;
  (this->FixedText_QuestRequirementsTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_QuestRequirementsTitle).StringEnumTableNameID.Number = 0;
  (this->FixedText_QuestRequirementsTitle).DateTime.Ticks = 0;
  (this->FixedText_QuestRequirementsTitle).TimeSpan.Ticks = 0;
  (this->FixedText_QuestRequirementsTitle).TimeExpressionType = None;
  (this->FixedText_QuestRequirementsTitle).IsExpression = false;
  (this->FixedText_QuestRequirementsTitle).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_QuestRequirementsTitle).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_QuestRequirementsTitle).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_QuestRequirementsTitle).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_QuestRequirementsTitle).FormatArgs.ArrayNum = 0;
  (this->FixedText_QuestRequirementsTitle).FormatArgs.ArrayMax = 0;
  (this->FixedText_QuestClueTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_QuestClueTitle).StringEnumTableNameID.Number = 0;
  (this->FixedText_QuestClueTitle).DateTime.Ticks = 0;
  (this->FixedText_QuestClueTitle).TimeSpan.Ticks = 0;
  (this->FixedText_QuestClueTitle).TimeExpressionType = None;
  (this->FixedText_QuestClueTitle).IsExpression = false;
  (this->FixedText_QuestClueTitle).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_QuestClueTitle).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_QuestClueTitle).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_QuestClueTitle).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_QuestClueTitle).FormatArgs.ArrayNum = 0;
  (this->FixedText_QuestClueTitle).FormatArgs.ArrayMax = 0;
  (this->FixedText_QuestConditionTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_QuestConditionTitle).StringEnumTableNameID.Number = 0;
  (this->FixedText_QuestConditionTitle).DateTime.Ticks = 0;
  (this->FixedText_QuestConditionTitle).TimeSpan.Ticks = 0;
  (this->FixedText_QuestConditionTitle).TimeExpressionType = None;
  (this->FixedText_QuestConditionTitle).IsExpression = false;
  (this->FixedText_QuestConditionTitle).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_QuestConditionTitle).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_QuestConditionTitle).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_QuestConditionTitle).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_QuestConditionTitle).FormatArgs.ArrayNum = 0;
  (this->FixedText_QuestConditionTitle).FormatArgs.ArrayMax = 0;
  (this->FixedText_SubTitle_Objective).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_SubTitle_Objective).StringEnumTableNameID.Number = 0;
  (this->FixedText_SubTitle_Objective).DateTime.Ticks = 0;
  (this->FixedText_SubTitle_Objective).TimeSpan.Ticks = 0;
  (this->FixedText_SubTitle_Objective).TimeExpressionType = None;
  (this->FixedText_SubTitle_Objective).IsExpression = false;
  (this->FixedText_SubTitle_Objective).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_SubTitle_Objective).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_SubTitle_Objective).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_SubTitle_Objective).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_SubTitle_Objective).FormatArgs.ArrayNum = 0;
  (this->FixedText_SubTitle_Objective).FormatArgs.ArrayMax = 0;
  this->QuestID = 0;
  (this->FixedText_QuestRequirementsTitle).StringTableType = StringUi;
  (this->FixedText_QuestRequirementsTitle).StringTableID = 0xeb2e;
  (this->FixedText_QuestClueTitle).StringTableType = StringUi;
  (this->FixedText_QuestClueTitle).StringTableID = 0xeb2f;
  (this->FixedText_QuestConditionTitle).StringTableType = StringUi;
  (this->FixedText_QuestConditionTitle).StringTableID = 0xeb30;
  (this->FixedText_SubTitle_Objective).StringTableType = StringUi;
  (this->FixedText_SubTitle_Objective).StringTableID = 0xeb2c;
  return this;
}

// UDS_VM_QuestData @ 14b6be720

UDS_VM_QuestData * __thiscall
UDS_VM_QuestData::UDS_VM_QuestData(UDS_VM_QuestData *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestData__6B_;
  (this->QuestName).StringTableID = 0;
  (this->QuestName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->QuestName).StringEnumTableNameID.Number = 0;
  (this->QuestName).DateTime.Ticks = 0;
  (this->QuestName).TimeSpan.Ticks = 0;
  (this->QuestName).TimeExpressionType = None;
  (this->QuestName).IsExpression = false;
  (this->QuestName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QuestName).UniqueString.Data.ArrayNum = 0;
  (this->QuestName).UniqueString.Data.ArrayMax = 0;
  (this->QuestName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QuestName).FormatArgs.ArrayNum = 0;
  (this->QuestName).FormatArgs.ArrayMax = 0;
  (this->QuestStory).StringTableType = None;
  (this->QuestStory).StringTableID = 0;
  (this->QuestStory).StringEnumTableNameID.ComparisonIndex = 0;
  (this->QuestStory).StringEnumTableNameID.Number = 0;
  (this->QuestStory).DateTime.Ticks = 0;
  (this->QuestStory).TimeSpan.Ticks = 0;
  (this->QuestStory).TimeExpressionType = None;
  (this->QuestStory).IsExpression = false;
  (this->QuestStory).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QuestStory).UniqueString.Data.ArrayNum = 0;
  (this->QuestStory).UniqueString.Data.ArrayMax = 0;
  (this->QuestStory).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QuestStory).FormatArgs.ArrayNum = 0;
  (this->QuestStory).FormatArgs.ArrayMax = 0;
  (this->Requirement).StringTableType = None;
  (this->Requirement).StringTableID = 0;
  (this->Requirement).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Requirement).StringEnumTableNameID.Number = 0;
  (this->Requirement).DateTime.Ticks = 0;
  (this->Requirement).TimeSpan.Ticks = 0;
  (this->Requirement).TimeExpressionType = None;
  (this->Requirement).IsExpression = false;
  (this->Requirement).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Requirement).UniqueString.Data.ArrayNum = 0;
  (this->Requirement).UniqueString.Data.ArrayMax = 0;
  (this->Requirement).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Requirement).FormatArgs.ArrayNum = 0;
  (this->Requirement).FormatArgs.ArrayMax = 0;
  (this->Clue_AcceptInfo).StringTableType = None;
  (this->Clue_AcceptInfo).StringTableID = 0;
  (this->Clue_AcceptInfo).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Clue_AcceptInfo).StringEnumTableNameID.Number = 0;
  (this->Clue_AcceptInfo).DateTime.Ticks = 0;
  (this->Clue_AcceptInfo).TimeSpan.Ticks = 0;
  (this->Clue_AcceptInfo).TimeExpressionType = None;
  (this->Clue_AcceptInfo).IsExpression = false;
  (this->Clue_AcceptInfo).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Clue_AcceptInfo).UniqueString.Data.ArrayNum = 0;
  (this->Clue_AcceptInfo).UniqueString.Data.ArrayMax = 0;
  (this->Clue_AcceptInfo).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Clue_AcceptInfo).FormatArgs.ArrayNum = 0;
  (this->Clue_AcceptInfo).FormatArgs.ArrayMax = 0;
  (this->Clue_CompleteInfo).StringTableType = None;
  (this->Clue_CompleteInfo).StringTableID = 0;
  (this->Clue_CompleteInfo).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Clue_CompleteInfo).StringEnumTableNameID.Number = 0;
  (this->Clue_CompleteInfo).DateTime.Ticks = 0;
  (this->Clue_CompleteInfo).TimeSpan.Ticks = 0;
  (this->Clue_CompleteInfo).TimeExpressionType = None;
  (this->Clue_CompleteInfo).IsExpression = false;
  (this->Clue_CompleteInfo).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Clue_CompleteInfo).UniqueString.Data.ArrayNum = 0;
  (this->Clue_CompleteInfo).UniqueString.Data.ArrayMax = 0;
  (this->Clue_CompleteInfo).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Clue_CompleteInfo).FormatArgs.ArrayNum = 0;
  (this->Clue_CompleteInfo).FormatArgs.ArrayMax = 0;
  (this->Condition).StringTableType = None;
  (this->Condition).StringTableID = 0;
  (this->Condition).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Condition).StringEnumTableNameID.Number = 0;
  (this->Condition).DateTime.Ticks = 0;
  (this->Condition).TimeSpan.Ticks = 0;
  (this->Condition).TimeExpressionType = None;
  (this->Condition).IsExpression = false;
  (this->Condition).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Condition).UniqueString.Data.ArrayNum = 0;
  (this->Condition).UniqueString.Data.ArrayMax = 0;
  (this->Condition).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Condition).FormatArgs.ArrayNum = 0;
  (this->Condition).FormatArgs.ArrayMax = 0;
  (this->QuestStoryTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->QuestStoryTitle).StringEnumTableNameID.Number = 0;
  (this->QuestStoryTitle).DateTime.Ticks = 0;
  (this->QuestStoryTitle).TimeSpan.Ticks = 0;
  (this->QuestStoryTitle).TimeExpressionType = None;
  (this->QuestName).StringTableType = None;
  (this->QuestStoryTitle).StringTableType = StringUi;
  (this->QuestStoryTitle).StringTableID = 0xeb2a;
  (this->QuestStoryTitle).IsExpression = false;
  (this->QuestStoryTitle).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QuestStoryTitle).UniqueString.Data.ArrayNum = 0;
  (this->QuestStoryTitle).UniqueString.Data.ArrayMax = 0;
  (this->QuestStoryTitle).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QuestStoryTitle).FormatArgs.ArrayNum = 0;
  (this->QuestStoryTitle).FormatArgs.ArrayMax = 0;
  (this->ChapterTitle).StringTableType = None;
  (this->ChapterTitle).StringTableID = 0;
  (this->ChapterTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ChapterTitle).StringEnumTableNameID.Number = 0;
  (this->ChapterTitle).DateTime.Ticks = 0;
  (this->ChapterTitle).TimeSpan.Ticks = 0;
  (this->ChapterTitle).TimeExpressionType = None;
  (this->ChapterTitle).IsExpression = false;
  (this->ChapterTitle).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChapterTitle).UniqueString.Data.ArrayNum = 0;
  (this->ChapterTitle).UniqueString.Data.ArrayMax = 0;
  (this->ChapterTitle).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChapterTitle).FormatArgs.ArrayNum = 0;
  (this->ChapterTitle).FormatArgs.ArrayMax = 0;
  (this->SectionTitle).StringTableType = None;
  (this->SectionTitle).StringTableID = 0;
  (this->SectionTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->SectionTitle).StringEnumTableNameID.Number = 0;
  (this->SectionTitle).DateTime.Ticks = 0;
  (this->SectionTitle).TimeSpan.Ticks = 0;
  (this->SectionTitle).TimeExpressionType = None;
  (this->SectionTitle).IsExpression = false;
  (this->SectionTitle).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SectionTitle).UniqueString.Data.ArrayNum = 0;
  (this->SectionTitle).UniqueString.Data.ArrayMax = 0;
  (this->SectionTitle).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SectionTitle).FormatArgs.ArrayNum = 0;
  (this->SectionTitle).FormatArgs.ArrayMax = 0;
  (this->SectionStory).StringTableType = None;
  (this->SectionStory).StringTableID = 0;
  (this->SectionStory).StringEnumTableNameID.ComparisonIndex = 0;
  (this->SectionStory).StringEnumTableNameID.Number = 0;
  (this->SectionStory).DateTime.Ticks = 0;
  (this->SectionStory).TimeSpan.Ticks = 0;
  (this->SectionStory).TimeExpressionType = None;
  (this->SectionStory).IsExpression = false;
  (this->SectionStory).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SectionStory).UniqueString.Data.ArrayNum = 0;
  (this->SectionStory).UniqueString.Data.ArrayMax = 0;
  (this->SectionStory).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SectionStory).FormatArgs.ArrayNum = 0;
  (this->SectionStory).FormatArgs.ArrayMax = 0;
  this->IsDifficlutyIcon = false;
  (this->EntryBindingEventField_RewardList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_RewardList).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_RewardList).UserObjectList.ArrayMax = 0;
  this->IsRewardItem = false;
  this->IsRewardGoods = false;
  this->IsRewardPoint = false;
  (this->VM_MoneyDisplay1).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  (this->VM_MoneyDisplay2).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  (this->VM_PlayerExpDisplay).field0_0x0.DebugPtr = (UDS_VM_ExpDisplay *)0x0;
  (this->VM_CharExpDisplay).field0_0x0.DebugPtr = (UDS_VM_ExpDisplay *)0x0;
  (this->EntryBindingEventField_ObjectiveList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_ObjectiveList).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_ObjectiveList).UserObjectList.ArrayMax = 0;
  (this->RepeatCount).StringTableType = None;
  (this->RepeatCount).StringTableID = 0;
  (this->RepeatCount).StringEnumTableNameID.ComparisonIndex = 0;
  (this->RepeatCount).StringEnumTableNameID.Number = 0;
  (this->RepeatCount).DateTime.Ticks = 0;
  (this->RepeatCount).TimeSpan.Ticks = 0;
  (this->RepeatCount).TimeExpressionType = None;
  (this->RepeatCount).IsExpression = false;
  (this->RepeatCount).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RepeatCount).UniqueString.Data.ArrayNum = 0;
  (this->RepeatCount).UniqueString.Data.ArrayMax = 0;
  (this->RepeatCount).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RepeatCount).FormatArgs.ArrayNum = 0;
  (this->RepeatCount).FormatArgs.ArrayMax = 0;
  (this->AccepName).StringTableType = None;
  (this->AccepName).StringTableID = 0;
  (this->AccepName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->AccepName).StringEnumTableNameID.Number = 0;
  (this->AccepName).DateTime.Ticks = 0;
  (this->AccepName).TimeSpan.Ticks = 0;
  (this->AccepName).TimeExpressionType = None;
  (this->AccepName).IsExpression = false;
  (this->AccepName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AccepName).UniqueString.Data.ArrayNum = 0;
  (this->AccepName).UniqueString.Data.ArrayMax = 0;
  (this->AccepName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AccepName).FormatArgs.ArrayNum = 0;
  (this->AccepName).FormatArgs.ArrayMax = 0;
  (this->AbandonName).StringTableType = None;
  (this->AbandonName).StringTableID = 0;
  (this->AbandonName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->AbandonName).StringEnumTableNameID.Number = 0;
  (this->AbandonName).DateTime.Ticks = 0;
  (this->AbandonName).TimeSpan.Ticks = 0;
  (this->AbandonName).TimeExpressionType = None;
  (this->AbandonName).IsExpression = false;
  (this->AbandonName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AbandonName).UniqueString.Data.ArrayNum = 0;
  (this->AbandonName).UniqueString.Data.ArrayMax = 0;
  (this->AbandonName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AbandonName).FormatArgs.ArrayNum = 0;
  (this->AbandonName).FormatArgs.ArrayMax = 0;
  (this->ClaimName).StringTableType = None;
  (this->ClaimName).StringTableID = 0;
  (this->ClaimName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ClaimName).StringEnumTableNameID.Number = 0;
  (this->ClaimName).DateTime.Ticks = 0;
  (this->ClaimName).TimeSpan.Ticks = 0;
  (this->ClaimName).TimeExpressionType = None;
  (this->ClaimName).IsExpression = false;
  (this->ClaimName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClaimName).UniqueString.Data.ArrayNum = 0;
  (this->ClaimName).UniqueString.Data.ArrayMax = 0;
  (this->ClaimName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClaimName).FormatArgs.ArrayNum = 0;
  (this->ClaimName).FormatArgs.ArrayMax = 0;
  (this->CompleteName).StringTableType = None;
  (this->CompleteName).StringTableID = 0;
  (this->CompleteName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CompleteName).StringEnumTableNameID.Number = 0;
  (this->CompleteName).DateTime.Ticks = 0;
  (this->CompleteName).TimeSpan.Ticks = 0;
  (this->CompleteName).TimeExpressionType = None;
  (this->CompleteName).IsExpression = false;
  (this->CompleteName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompleteName).UniqueString.Data.ArrayNum = 0;
  (this->CompleteName).UniqueString.Data.ArrayMax = 0;
  (this->CompleteName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompleteName).FormatArgs.ArrayNum = 0;
  (this->CompleteName).FormatArgs.ArrayMax = 0;
  (this->FixedText_QuestRequirementsTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_QuestRequirementsTitle).StringEnumTableNameID.Number = 0;
  (this->FixedText_QuestRequirementsTitle).DateTime.Ticks = 0;
  (this->FixedText_QuestRequirementsTitle).TimeSpan.Ticks = 0;
  (this->FixedText_QuestRequirementsTitle).TimeExpressionType = None;
  (this->FixedText_QuestRequirementsTitle).IsExpression = false;
  (this->FixedText_QuestRequirementsTitle).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_QuestRequirementsTitle).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_QuestRequirementsTitle).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_QuestRequirementsTitle).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_QuestRequirementsTitle).FormatArgs.ArrayNum = 0;
  (this->FixedText_QuestRequirementsTitle).FormatArgs.ArrayMax = 0;
  (this->FixedText_QuestClueTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_QuestClueTitle).StringEnumTableNameID.Number = 0;
  (this->FixedText_QuestClueTitle).DateTime.Ticks = 0;
  (this->FixedText_QuestClueTitle).TimeSpan.Ticks = 0;
  (this->FixedText_QuestClueTitle).TimeExpressionType = None;
  (this->FixedText_QuestClueTitle).IsExpression = false;
  (this->FixedText_QuestClueTitle).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_QuestClueTitle).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_QuestClueTitle).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_QuestClueTitle).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_QuestClueTitle).FormatArgs.ArrayNum = 0;
  (this->FixedText_QuestClueTitle).FormatArgs.ArrayMax = 0;
  (this->FixedText_QuestConditionTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_QuestConditionTitle).StringEnumTableNameID.Number = 0;
  (this->FixedText_QuestConditionTitle).DateTime.Ticks = 0;
  (this->FixedText_QuestConditionTitle).TimeSpan.Ticks = 0;
  (this->FixedText_QuestConditionTitle).TimeExpressionType = None;
  (this->FixedText_QuestConditionTitle).IsExpression = false;
  (this->FixedText_QuestConditionTitle).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_QuestConditionTitle).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_QuestConditionTitle).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_QuestConditionTitle).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_QuestConditionTitle).FormatArgs.ArrayNum = 0;
  (this->FixedText_QuestConditionTitle).FormatArgs.ArrayMax = 0;
  (this->FixedText_SubTitle_Objective).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_SubTitle_Objective).StringEnumTableNameID.Number = 0;
  (this->FixedText_SubTitle_Objective).DateTime.Ticks = 0;
  (this->FixedText_SubTitle_Objective).TimeSpan.Ticks = 0;
  (this->FixedText_SubTitle_Objective).TimeExpressionType = None;
  (this->FixedText_SubTitle_Objective).IsExpression = false;
  (this->FixedText_SubTitle_Objective).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_SubTitle_Objective).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_SubTitle_Objective).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_SubTitle_Objective).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_SubTitle_Objective).FormatArgs.ArrayNum = 0;
  (this->FixedText_SubTitle_Objective).FormatArgs.ArrayMax = 0;
  this->QuestID = 0;
  (this->FixedText_QuestRequirementsTitle).StringTableType = StringUi;
  (this->FixedText_QuestRequirementsTitle).StringTableID = 0xeb2e;
  (this->FixedText_QuestClueTitle).StringTableType = StringUi;
  (this->FixedText_QuestClueTitle).StringTableID = 0xeb2f;
  (this->FixedText_QuestConditionTitle).StringTableType = StringUi;
  (this->FixedText_QuestConditionTitle).StringTableID = 0xeb30;
  (this->FixedText_SubTitle_Objective).StringTableType = StringUi;
  (this->FixedText_SubTitle_Objective).StringTableID = 0xeb2c;
  return this;
}

// ~UDS_VM_QuestData @ 14b6bf5c0

void __thiscall UDS_VM_QuestData::~UDS_VM_QuestData(UDS_VM_QuestData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestData__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)
             (this->FixedText_SubTitle_Objective).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_SubTitle_Objective).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_SubTitle_Objective).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_SubTitle_Objective).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)
             (this->FixedText_QuestConditionTitle).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_QuestConditionTitle).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_QuestConditionTitle).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_QuestConditionTitle).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_QuestClueTitle).FormatArgs.AllocatorInstance.Data
             ,(this->FixedText_QuestClueTitle).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_QuestClueTitle).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_QuestClueTitle).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)
             (this->FixedText_QuestRequirementsTitle).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_QuestRequirementsTitle).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_QuestRequirementsTitle).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_QuestRequirementsTitle).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->CompleteName).FormatArgs.AllocatorInstance.Data,
             (this->CompleteName).FormatArgs.ArrayNum);
  pFVar1 = (this->CompleteName).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CompleteName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ClaimName).FormatArgs.AllocatorInstance.Data,
             (this->ClaimName).FormatArgs.ArrayNum);
  pFVar1 = (this->ClaimName).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ClaimName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->AbandonName).FormatArgs.AllocatorInstance.Data,
             (this->AbandonName).FormatArgs.ArrayNum);
  pFVar1 = (this->AbandonName).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AbandonName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->AccepName).FormatArgs.AllocatorInstance.Data,
             (this->AccepName).FormatArgs.ArrayNum);
  pFVar1 = (this->AccepName).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AccepName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->RepeatCount).FormatArgs.AllocatorInstance.Data,
             (this->RepeatCount).FormatArgs.ArrayNum);
  pFVar1 = (this->RepeatCount).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RepeatCount).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EntryBindingEventField_ObjectiveList).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EntryBindingEventField_RewardList).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->SectionStory).FormatArgs.AllocatorInstance.Data,
             (this->SectionStory).FormatArgs.ArrayNum);
  pFVar1 = (this->SectionStory).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SectionStory).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->SectionTitle).FormatArgs.AllocatorInstance.Data,
             (this->SectionTitle).FormatArgs.ArrayNum);
  pFVar1 = (this->SectionTitle).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SectionTitle).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ChapterTitle).FormatArgs.AllocatorInstance.Data,
             (this->ChapterTitle).FormatArgs.ArrayNum);
  pFVar1 = (this->ChapterTitle).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ChapterTitle).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->QuestStoryTitle).FormatArgs.AllocatorInstance.Data,
             (this->QuestStoryTitle).FormatArgs.ArrayNum);
  pFVar1 = (this->QuestStoryTitle).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->QuestStoryTitle).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Condition).FormatArgs.AllocatorInstance.Data,
             (this->Condition).FormatArgs.ArrayNum);
  pFVar1 = (this->Condition).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Condition).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Clue_CompleteInfo).FormatArgs.AllocatorInstance.Data,
             (this->Clue_CompleteInfo).FormatArgs.ArrayNum);
  pFVar1 = (this->Clue_CompleteInfo).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Clue_CompleteInfo).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Clue_AcceptInfo).FormatArgs.AllocatorInstance.Data,
             (this->Clue_AcceptInfo).FormatArgs.ArrayNum);
  pFVar1 = (this->Clue_AcceptInfo).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Clue_AcceptInfo).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Requirement).FormatArgs.AllocatorInstance.Data,
             (this->Requirement).FormatArgs.ArrayNum);
  pFVar1 = (this->Requirement).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Requirement).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->QuestStory).FormatArgs.AllocatorInstance.Data,
             (this->QuestStory).FormatArgs.ArrayNum);
  pFVar1 = (this->QuestStory).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->QuestStory).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->QuestName).FormatArgs.AllocatorInstance.Data,
             (this->QuestName).FormatArgs.ArrayNum);
  pFVar1 = (this->QuestName).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->QuestName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6c0fc0

IClassDescriptor * __thiscall
UDS_VM_QuestData::GetFieldNotificationDescriptor(UDS_VM_QuestData *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_QuestData::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6c1760

UClass * __cdecl UDS_VM_QuestData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_QuestData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_QuestData",
               &Z_Registration_Info_UClass_UDS_VM_QuestData.InnerSingleton,
               StaticRegisterNativesUDS_VM_QuestData,0x6f8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_QuestData>,
               InternalVTableHelperCtorCaller<UDS_VM_QuestData>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_QuestData.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_QuestData @ 14b6c1aa0

void __cdecl UDS_VM_QuestData::StaticRegisterNativesUDS_VM_QuestData(void)

{
  return;
}

// operator() @ 14be0f370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
`UDS_VM_QuestData::SetRewardExp'::__l2::<lambda_1>::operator()
          (void *this,TObjectPtr<UDS_VM_ExpDisplay> *param_1,EDS_CommonContentsType param_2,
          long64 param_3)

{
  FName FVar1;
  UObject *pUVar2;
  code *pcVar3;
  FDS_ViewModelContext_Exp *pFVar4;
  bool bVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UDS_VM_ExpDisplay *pUVar8;
  longlong *plVar9;
  undefined1 auStack_108 [32];
  FName local_e8;
  TSharedPtr<FDS_ViewModelContext_Exp,1> local_d8;
  TSharedPtr<FDS_ViewModelContext,1> local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  FVar1 = (FName)(param_1->field0_0x0).DebugPtr;
  if (FVar1 == (FName)0x0) {
    pUVar2 = *(UObject **)this;
    local_e8 = FVar1;
    pUVar6 = Z_Construct_UClass_UDS_VM_ExpDisplay_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              (pUVar2,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UDS_VM_ExpDisplay_NoRegister();
    CheckIsClassChildOf_Internal(pUVar7,pUVar6);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar6);
    local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_b8._56_8_ = (UPackage *)0x0;
    local_b8._24_4_ = RF_Transient;
    local_b8._40_8_ = (UObject *)0x0;
    local_b8[0x20] = false;
    local_b8._8_8_ = pUVar2;
    local_b8._16_8_ = FVar1;
    pUVar8 = (UDS_VM_ExpDisplay *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar9 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar9 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    if (pUVar8 != (UDS_VM_ExpDisplay *)0x0) {
      *(undefined1 *)((longlong)&pUVar8->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UDS_VM_ExpDisplay *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    (param_1->field0_0x0).DebugPtr = pUVar8;
    if (pUVar8 == (UDS_VM_ExpDisplay *)0x0) {
      return;
    }
  }
  MakeContext<FDS_ViewModelContext_Exp>(&local_d8);
  pFVar4 = local_d8.Object;
  if (local_d8.Object != (FDS_ViewModelContext_Exp *)0x0) {
    if ((local_d8.Object == (FDS_ViewModelContext_Exp *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(undefined4 *)&pFVar4->_padding_ = 0x194;
    pFVar4->Exp = param_3;
    pFVar4->CommonContentsType = (uint)param_2;
    pFVar4->IsHideDisplay = param_3 == 0;
    pUVar8 = (param_1->field0_0x0).DebugPtr;
    local_c8.Object = (FDS_ViewModelContext *)local_d8.Object;
    local_c8.SharedReferenceCount.ReferenceController =
         local_d8.SharedReferenceCount.ReferenceController;
    if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar8,&local_c8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.SharedReferenceCount.ReferenceController);
  return;
}

// operator() @ 14be0f550

void __thiscall
`UDS_VM_QuestData::SetRewardMoney'::__l2::<lambda_1>::operator()
          (void *this,TObjectPtr<UDS_VM_MoneyDisplay> *param_1,EDS_MoneyType param_2,long64 param_3)

{
  code *pcVar1;
  FDS_ViewModelContext_MoneyDisplay *pFVar2;
  bool bVar3;
  UDS_VM_MoneyDisplay *pUVar4;
  TSharedPtr<FDS_ViewModelContext_MoneyDisplay,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((param_1->field0_0x0).DebugPtr == (UDS_VM_MoneyDisplay *)0x0) {
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_MoneyDisplay>(*(UObject **)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDS_VM_MoneyDisplay *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (param_1->field0_0x0).DebugPtr = pUVar4;
    if (pUVar4 == (UDS_VM_MoneyDisplay *)0x0) {
      return;
    }
  }
  MakeContext<FDS_ViewModelContext_MoneyDisplay>(&local_28);
  pFVar2 = local_28.Object;
  if (local_28.Object != (FDS_ViewModelContext_MoneyDisplay *)0x0) {
    if ((local_28.Object == (FDS_ViewModelContext_MoneyDisplay *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)&pFVar2->_padding_ = 0x192;
    pFVar2->MoneyId = (ulonglong)param_2;
    pFVar2->Quantity = param_3;
    pFVar2->IsHideDisplay = param_3 == 0;
    pUVar4 = (param_1->field0_0x0).DebugPtr;
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
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// OnSetViewModel @ 14be3c580

void __thiscall
UDS_VM_QuestData::OnSetViewModel(UDS_VM_QuestData *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  EDS_QuestDifficulty EVar1;
  TReferenceControllerBase<1> *pTVar2;
  FScriptContainerElement *pFVar3;
  FName FVar4;
  int iVar5;
  bool bVar6;
  EDS_QuestType EVar7;
  bool bVar8;
  EDS_QuestStateType EVar9;
  int iVar10;
  FDS_QuestBaseTableRow *pFVar11;
  FDS_QuestLocalTableRow *this_00;
  FDS_QuestMainTableRow *pFVar12;
  FDS_QuestMainChapterInfoTableRow *this_01;
  FDS_QuestRewardTableRow *pFVar13;
  UObject *pUVar14;
  FDS_QuestMissionTableRow *this_02;
  UDS_QuestManager *this_03;
  FDS_QuestRepeatTableRow *this_04;
  undefined1 uVar15;
  int iVar16;
  int local_res10 [2];
  int local_res18 [2];
  UDS_VM_QuestData *local_res20;
  FWeakObjectPtr local_238 [2];
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
  FName local_1b8;
  int local_1b0;
  FName local_1a8;
  int local_1a0;
  FName local_198;
  int local_190;
  FName local_188;
  int local_180;
  FName local_178;
  int local_170;
  FName local_168;
  int local_160;
  FName local_158;
  int local_150;
  FName local_148;
  int local_140;
  FName local_138;
  int local_130;
  FName local_128;
  int local_120;
  FName local_118;
  int local_110;
  FName local_108;
  int local_100;
  FName local_f8;
  int local_f0;
  FName local_e8;
  int local_e0;
  FName local_d8;
  int local_d0;
  FName local_c8;
  int local_c0;
  TSharedPtr<FDS_ViewModelContext_Quest,1> local_b8;
  FDS_Text local_a8;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  FText local_48;
  
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_58.Object = param_1->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_Quest>(&local_b8,&local_58);
  if (local_b8.Object == (FDS_ViewModelContext_Quest *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.SharedReferenceCount.ReferenceController);
  }
  else {
    this->QuestID = (local_b8.Object)->QuestID;
    FDS_Text::Reset(&this->QuestName);
    if (0 < this->QuestID) {
      pFVar11 = FDS_QuestBaseTableRow::GetRef((longlong)this->QuestID,true);
      bVar6 = FDS_QuestBaseTableRow::IsValid(pFVar11);
      if (bVar6) {
        local_a8.StringTableType = None;
        local_a8.StringTableID = 0;
        local_a8.StringEnumTableNameID.ComparisonIndex.Value = 0;
        local_a8.StringEnumTableNameID.Number = 0;
        local_a8.DateTime.Ticks = 0;
        local_a8.TimeSpan.Ticks = 0;
        local_a8.TimeExpressionType = None;
        local_a8.IsExpression = false;
        local_a8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_a8.UniqueString.Data.ArrayNum = 0;
        local_a8.UniqueString.Data.ArrayMax = 0;
        local_a8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_a8.FormatArgs.ArrayNum = 0;
        local_a8.FormatArgs.ArrayMax = 0;
        if (pFVar11->QuestTitleStep < 1) {
          FDS_Text::SetTextFromStringID(&local_a8,&pFVar11->ID_QuestTitleId);
        }
        else {
          FDS_Text::SetTextFormatFromStringTable<int_const_&>
                    (&local_a8,StringQuest,(pFVar11->ID_QuestTitleId).ID,&pFVar11->QuestTitleStep);
        }
        FDS_Text::operator=(&this->QuestName,&local_a8);
        DestructItems<FDS_TextFormatArg,int>
                  ((FDS_TextFormatArg *)local_a8.FormatArgs.AllocatorInstance.Data,
                   local_a8.FormatArgs.ArrayNum);
        if ((FDS_TextFormatArg *)local_a8.FormatArgs.AllocatorInstance.Data !=
            (FDS_TextFormatArg *)0x0) {
          FMemory::Free(local_a8.FormatArgs.AllocatorInstance.Data);
        }
        if (local_a8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.UniqueString.Data.AllocatorInstance.Data);
        }
      }
    }
    local_220 = FFieldNotificationClassDescriptor::QuestName.BitNumber;
    local_228 = FFieldNotificationClassDescriptor::QuestName.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_228);
    FDS_Text::Reset(&this->QuestStory);
    if (0 < this->QuestID) {
      pFVar11 = FDS_QuestBaseTableRow::GetRef((longlong)this->QuestID,true);
      bVar6 = FDS_QuestBaseTableRow::IsValid(pFVar11);
      if (bVar6) {
        FDS_Text::SetTextFromStringID(&this->QuestStory,&pFVar11->ID_QuestSummaryId);
      }
    }
    local_210 = FFieldNotificationClassDescriptor::QuestStory.BitNumber;
    local_218 = FFieldNotificationClassDescriptor::QuestStory.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_218);
    SetRequirement(this);
    SetClue(this);
    FDS_Text::Reset(&this->Condition);
    if (0 < this->QuestID) {
      pFVar11 = FDS_QuestBaseTableRow::GetRef((longlong)this->QuestID,true);
      bVar6 = FDS_QuestBaseTableRow::IsValid(pFVar11);
      if ((bVar6) && (pFVar11->QuestType == Local)) {
        this_00 = FDS_QuestLocalTableRow::GetRef((longlong)this->QuestID,true);
        bVar6 = FDS_QuestLocalTableRow::IsValid(this_00);
        if (bVar6) {
          FDS_Text::SetTextFromStringID(&this->Condition,&this_00->ConditionText);
        }
      }
    }
    local_200 = FFieldNotificationClassDescriptor::Condition.BitNumber;
    local_208 = FFieldNotificationClassDescriptor::Condition.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_208);
    iVar16 = 0;
    iVar10 = 0;
    if (0 < this->QuestID) {
      pFVar11 = FDS_QuestBaseTableRow::GetRef((longlong)this->QuestID,true);
      bVar6 = FDS_QuestBaseTableRow::IsValid(pFVar11);
      iVar10 = iVar16;
      if (bVar6) {
        EVar7 = pFVar11->QuestType;
        if (EVar7 == Main) {
          iVar10 = DS_CommonDataHelper::QuestTypeIconMain();
        }
        else if (EVar7 == Local) {
          iVar10 = DS_CommonDataHelper::QuestTypeIconLocal();
        }
        else if (EVar7 == Daily) {
          iVar10 = DS_CommonDataHelper::QuestTypeIconDaily();
        }
        else if (EVar7 == Repeat) {
          iVar10 = DS_CommonDataHelper::QuestTypeIconRepeat();
        }
      }
    }
    iVar5 = FFieldNotificationClassDescriptor::QuestTypeIconID.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::QuestTypeIconID.FieldName;
    if (this->QuestTypeIconID != iVar10) {
      this->QuestTypeIconID = iVar10;
      local_1f0 = iVar5;
      local_1f8 = FVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1f8);
    }
    iVar10 = 0;
    if (0 < this->QuestID) {
      pFVar11 = FDS_QuestBaseTableRow::GetRef((longlong)this->QuestID,true);
      bVar6 = FDS_QuestBaseTableRow::IsValid(pFVar11);
      iVar10 = 0;
      if (bVar6) {
        EVar1 = pFVar11->QuestGrade;
        if (EVar1 == SS) {
          iVar10 = DS_CommonDataHelper::QuestDifficultySs();
        }
        else if (EVar1 == S) {
          iVar10 = DS_CommonDataHelper::QuestDifficultyS();
        }
        else if (EVar1 == A) {
          iVar10 = DS_CommonDataHelper::QuestDifficultyA();
        }
        else if (EVar1 == B) {
          iVar10 = DS_CommonDataHelper::QuestDifficultyB();
        }
        else if (EVar1 == C) {
          iVar10 = DS_CommonDataHelper::QuestDifficultyC();
        }
      }
    }
    iVar5 = FFieldNotificationClassDescriptor::DifficultyIconID.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::DifficultyIconID.FieldName;
    if (this->DifficultyIconID != iVar10) {
      this->DifficultyIconID = iVar10;
      local_1e0 = iVar5;
      local_1e8 = FVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1e8);
    }
    iVar10 = FFieldNotificationClassDescriptor::IsDifficlutyIcon.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::IsDifficlutyIcon.FieldName;
    bVar6 = 0 < this->DifficultyIconID;
    if (this->IsDifficlutyIcon != bVar6) {
      this->IsDifficlutyIcon = bVar6;
      local_1d0 = iVar10;
      local_1d8 = FVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1d8);
    }
    FText::FText(&local_48);
    FDS_Text::Reset(&this->ChapterTitle);
    if (0 < this->QuestID) {
      pFVar11 = FDS_QuestBaseTableRow::GetRef((longlong)this->QuestID,true);
      bVar6 = FDS_QuestBaseTableRow::IsValid(pFVar11);
      if ((bVar6) && (pFVar11->QuestType == Main)) {
        pFVar12 = FDS_QuestMainTableRow::GetRef((longlong)this->QuestID,true);
        bVar6 = FDS_QuestMainTableRow::IsValid(pFVar12);
        if (bVar6) {
          this_01 = FDS_QuestMainChapterInfoTableRow::GetRef((longlong)pFVar12->ChapterIndex,true);
          bVar6 = FDS_QuestMainChapterInfoTableRow::IsValid(this_01);
          if (bVar6) {
            FDS_Text::SetTextFromStringID(&this->ChapterTitle,&this_01->ID_ChapterTitle);
          }
        }
      }
    }
    local_1c0 = FFieldNotificationClassDescriptor::ChapterTitle.BitNumber;
    local_1c8 = FFieldNotificationClassDescriptor::ChapterTitle.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1c8);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    FDS_Text::Reset(&this->SectionTitle);
    if ((0 < this->QuestID) &&
       (EVar7 = UDS_QuestManager::GetQuestType(this->QuestID), EVar7 == Main)) {
      pFVar12 = FDS_QuestMainTableRow::GetRef((longlong)this->QuestID,true);
      bVar6 = FDS_QuestMainTableRow::IsValid(pFVar12);
      if (bVar6) {
        FDS_Text::SetTextFromStringID(&this->SectionTitle,&pFVar12->ID_SectionTitle);
      }
    }
    local_1b0 = FFieldNotificationClassDescriptor::SectionTitle.BitNumber;
    local_1b8 = FFieldNotificationClassDescriptor::SectionTitle.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
    FDS_Text::Reset(&this->SectionStory);
    if ((0 < this->QuestID) &&
       (EVar7 = UDS_QuestManager::GetQuestType(this->QuestID), EVar7 == Main)) {
      pFVar12 = FDS_QuestMainTableRow::GetRef((longlong)this->QuestID,true);
      bVar6 = FDS_QuestMainTableRow::IsValid(pFVar12);
      if (bVar6) {
        FDS_Text::SetTextFromStringID(&this->SectionStory,&pFVar12->ID_SectionStory);
      }
    }
    local_1a0 = FFieldNotificationClassDescriptor::SectionStory.BitNumber;
    local_1a8 = FFieldNotificationClassDescriptor::SectionStory.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1a8);
    SetRewardItem(this);
    SetRewardMoney(this);
    local_res20 = this;
    if (0 < this->QuestID) {
      pFVar11 = FDS_QuestBaseTableRow::GetRef((longlong)this->QuestID,true);
      bVar6 = FDS_QuestBaseTableRow::IsValid(pFVar11);
      if ((bVar6) && (0 < pFVar11->ID_QuestRewardId)) {
        pFVar13 = FDS_QuestRewardTableRow::GetRef((longlong)pFVar11->ID_QuestRewardId,true);
        bVar6 = FDS_QuestRewardTableRow::IsValid(pFVar13);
        if (bVar6) {
          `UDS_VM_QuestData::SetRewardExp'::__l2::<lambda_1>::operator()
                    (&local_res20,&this->VM_PlayerExpDisplay,PlayerExp,(longlong)pFVar13->PlayerExp)
          ;
          `UDS_VM_QuestData::SetRewardExp'::__l2::<lambda_1>::operator()
                    (&local_res20,&this->VM_CharExpDisplay,CharExp,(longlong)pFVar13->CharExp);
        }
      }
    }
    local_190 = FFieldNotificationClassDescriptor::VM_PlayerExpDisplay.BitNumber;
    local_198 = FFieldNotificationClassDescriptor::VM_PlayerExpDisplay.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_198);
    local_180 = FFieldNotificationClassDescriptor::VM_CharExpDisplay.BitNumber;
    local_188 = FFieldNotificationClassDescriptor::VM_CharExpDisplay.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_188);
    bVar6 = false;
    if (0 < this->QuestID) {
      pFVar11 = FDS_QuestBaseTableRow::GetRef((longlong)this->QuestID,true);
      bVar8 = FDS_QuestBaseTableRow::IsValid(pFVar11);
      if ((bVar8) && (0 < pFVar11->ID_QuestRewardId)) {
        pFVar13 = FDS_QuestRewardTableRow::GetRef((longlong)pFVar11->ID_QuestRewardId,true);
        bVar8 = FDS_QuestRewardTableRow::IsValid(pFVar13);
        if (bVar8) {
          if ((0 < pFVar13->PlayerExp) || (bVar6 = false, 0 < pFVar13->CharExp)) {
            bVar6 = true;
          }
          iVar10 = (pFVar13->RewardMoneyType).ArrayNum;
          if (0 < iVar10) {
            pFVar3 = (pFVar13->RewardMoneyType).AllocatorInstance.Data;
            if (*pFVar3 != (FScriptContainerElement)0x0) {
              bVar6 = true;
            }
            if ((1 < iVar10) && (pFVar3[1] != (FScriptContainerElement)0x0)) {
              bVar6 = true;
            }
          }
        }
      }
    }
    iVar10 = FFieldNotificationClassDescriptor::IsRewardGoods.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::IsRewardGoods.FieldName;
    if (this->IsRewardGoods != bVar6) {
      this->IsRewardGoods = bVar6;
      local_170 = iVar10;
      local_178 = FVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_178);
    }
    SetObjective(this);
    if (((this->IsRewardItem == false) && (this->IsRewardGoods == false)) &&
       (this->IsRewardPoint == false)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    this->IsReward = bVar6;
    local_160 = FFieldNotificationClassDescriptor::IsReward.BitNumber;
    local_168 = FFieldNotificationClassDescriptor::IsReward.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
    bVar6 = false;
    if (0 < this->QuestID) {
      EVar9 = UDS_QuestManager::GetQuestStateType(this->QuestID);
      bVar6 = EVar9 == Complete;
    }
    iVar10 = FFieldNotificationClassDescriptor::IsQuestAbleComplete.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::IsQuestAbleComplete.FieldName;
    if (this->IsQuestAbleComplete != bVar6) {
      this->IsQuestAbleComplete = bVar6;
      local_150 = iVar10;
      local_158 = FVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
    }
    bVar6 = false;
    if (0 < this->QuestID) {
      EVar9 = UDS_QuestManager::GetQuestStateType(this->QuestID);
      bVar6 = EVar9 == Progress;
    }
    iVar10 = FFieldNotificationClassDescriptor::IsQuestProgress.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::IsQuestProgress.FieldName;
    if (this->IsQuestProgress != bVar6) {
      this->IsQuestProgress = bVar6;
      local_140 = iVar10;
      local_148 = FVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_148);
    }
    bVar6 = false;
    if (0 < this->QuestID) {
      EVar7 = UDS_QuestManager::GetQuestType(this->QuestID);
      bVar6 = EVar7 == Main;
    }
    iVar10 = FFieldNotificationClassDescriptor::IsQuestType_Main.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::IsQuestType_Main.FieldName;
    if (this->IsQuestType_Main != bVar6) {
      this->IsQuestType_Main = bVar6;
      local_130 = iVar10;
      local_138 = FVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_138);
    }
    uVar15 = false;
    if (0 < this->QuestID) {
      UDS_QuestManager::GetQuestData((int)local_238);
      bVar6 = FWeakObjectPtr::IsValid(local_238);
      if (bVar6) {
        pUVar14 = FWeakObjectPtr::Get(local_238);
        uVar15 = pUVar14[2].field_0xc;
      }
    }
    iVar10 = FFieldNotificationClassDescriptor::IsAutoTracking.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::IsAutoTracking.FieldName;
    if (this->IsAutoTracking != (bool)uVar15) {
      this->IsAutoTracking = (bool)uVar15;
      local_120 = iVar10;
      local_128 = FVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_128);
    }
    if ((0 < this->QuestID) &&
       ((EVar7 = UDS_QuestManager::GetQuestType(this->QuestID), EVar7 == MissionWeekly ||
        (EVar7 == MissionMonthly)))) {
      this_02 = FDS_QuestMissionTableRow::GetRef((longlong)this->QuestID,true);
      bVar6 = FDS_QuestMissionTableRow::IsValid(this_02);
      if (bVar6) {
        iVar16 = this_02->ID_ResourceIcon;
      }
    }
    iVar10 = FFieldNotificationClassDescriptor::QuestMissionIconID.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::QuestMissionIconID.FieldName;
    if (this->QuestMissionIconID != iVar16) {
      this->QuestMissionIconID = iVar16;
      local_110 = iVar10;
      local_118 = FVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_118);
    }
    local_res18[0] = 0;
    local_res10[0] = 0;
    this_03 = UDS_QuestManager::GetInst();
    if ((this_03 != (UDS_QuestManager *)0x0) &&
       (EVar7 = UDS_QuestManager::GetQuestType(this->QuestID), EVar7 == Repeat)) {
      local_res18[0] = UDS_QuestManager::GetQuestRepeatCount(this_03,this->QuestID);
      this_04 = FDS_QuestRepeatTableRow::GetRef((longlong)this->QuestID,true);
      bVar6 = FDS_QuestRepeatTableRow::IsValid(this_04);
      if (bVar6) {
        local_res10[0] = this_04->RepeatCount;
      }
    }
    FDS_Text::SetTextFormatFromStringTable<int_&,int_&>
              (&this->RepeatCount,StringUi,0xec6a,local_res18,local_res10);
    local_100 = FFieldNotificationClassDescriptor::RepeatCount.BitNumber;
    local_108 = FFieldNotificationClassDescriptor::RepeatCount.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_108);
    FDS_Text::SetTextFromStringTable(&this->AccepName,StringUi,0xeb91);
    local_f0 = FFieldNotificationClassDescriptor::AccepName.BitNumber;
    local_f8 = FFieldNotificationClassDescriptor::AccepName.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_f8);
    FDS_Text::SetTextFromStringTable(&this->AbandonName,StringUi,0xeb8e);
    local_e0 = FFieldNotificationClassDescriptor::AbandonName.BitNumber;
    local_e8 = FFieldNotificationClassDescriptor::AbandonName.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_e8);
    FDS_Text::SetTextFromStringTable(&this->ClaimName,StringUi,0xeb90);
    local_d0 = FFieldNotificationClassDescriptor::ClaimName.BitNumber;
    local_d8 = FFieldNotificationClassDescriptor::ClaimName.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_d8);
    FDS_Text::SetTextFromStringTable(&this->CompleteName,StringUi,0xeb29);
    local_c0 = FFieldNotificationClassDescriptor::CompleteName.BitNumber;
    local_c8 = FFieldNotificationClassDescriptor::CompleteName.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetAbandonName @ 14be489f0

void __thiscall UDS_VM_QuestData::SetAbandonName(UDS_VM_QuestData *this)

{
  FName local_18;
  int local_10;
  
  FDS_Text::SetTextFromStringTable(&this->AbandonName,StringUi,0xeb8e);
  local_10 = FFieldNotificationClassDescriptor::AbandonName.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::AbandonName.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetAcceptName @ 14be48a40

void __thiscall UDS_VM_QuestData::SetAcceptName(UDS_VM_QuestData *this)

{
  FName local_18;
  int local_10;
  
  FDS_Text::SetTextFromStringTable(&this->AccepName,StringUi,0xeb91);
  local_10 = FFieldNotificationClassDescriptor::AccepName.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::AccepName.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetChaterTitle @ 14be49710

void __thiscall UDS_VM_QuestData::SetChaterTitle(UDS_VM_QuestData *this)

{
  bool bVar1;
  FDS_QuestBaseTableRow *this_00;
  FDS_QuestMainTableRow *this_01;
  FDS_QuestMainChapterInfoTableRow *this_02;
  FName local_28;
  int local_20;
  FText local_18;
  
  FText::FText(&local_18);
  FDS_Text::Reset(&this->ChapterTitle);
  if (0 < this->QuestID) {
    this_00 = FDS_QuestBaseTableRow::GetRef((longlong)this->QuestID,true);
    bVar1 = FDS_QuestBaseTableRow::IsValid(this_00);
    if ((bVar1) && (this_00->QuestType == Main)) {
      this_01 = FDS_QuestMainTableRow::GetRef((longlong)this->QuestID,true);
      bVar1 = FDS_QuestMainTableRow::IsValid(this_01);
      if (bVar1) {
        this_02 = FDS_QuestMainChapterInfoTableRow::GetRef((longlong)this_01->ChapterIndex,true);
        bVar1 = FDS_QuestMainChapterInfoTableRow::IsValid(this_02);
        if (bVar1) {
          FDS_Text::SetTextFromStringID(&this->ChapterTitle,&this_02->ID_ChapterTitle);
        }
      }
    }
  }
  local_20 = FFieldNotificationClassDescriptor::ChapterTitle.BitNumber;
  local_28 = FFieldNotificationClassDescriptor::ChapterTitle.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// SetClaimName @ 14be49800

void __thiscall UDS_VM_QuestData::SetClaimName(UDS_VM_QuestData *this)

{
  FName local_18;
  int local_10;
  
  FDS_Text::SetTextFromStringTable(&this->ClaimName,StringUi,0xeb90);
  local_10 = FFieldNotificationClassDescriptor::ClaimName.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ClaimName.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetClue @ 14be49850

void __thiscall UDS_VM_QuestData::SetClue(UDS_VM_QuestData *this)

{
  FInstancedStruct *pFVar1;
  EDS_QuestType EVar2;
  long64 lVar3;
  FObjectPtr_u_0 FVar4;
  FName FVar5;
  FName FVar6;
  bool bVar7;
  int iVar8;
  FDS_QuestBaseTableRow *this_00;
  FDS_QuestRepeatTableRow *this_01;
  FDS_ZoneBaseTableRow *pFVar9;
  FDS_StringWorldTableRow *pFVar10;
  FObjectPtr_u_0 *pFVar11;
  FDS_StringWorldIDFormatArg *pFVar12;
  FDS_NpcBaseTableRow *pFVar13;
  FDS_QuestLocalTableRow *this_02;
  FDS_QuestMainTableRow *this_03;
  FDS_TextFormatArg *this_04;
  ESlateVisibility EVar14;
  ESlateVisibility EVar15;
  FDS_StringUiID local_58;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> local_48;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> local_38;
  
  FDS_Text::Reset(&this->Clue_AcceptInfo);
  FDS_Text::Reset(&this->Clue_CompleteInfo);
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  EVar14 = Collapsed;
  EVar15 = Collapsed;
  if (this->QuestID < 1) goto LAB_14be49deb;
  this_00 = FDS_QuestBaseTableRow::GetRef((longlong)this->QuestID,true);
  bVar7 = FDS_QuestBaseTableRow::IsValid(this_00);
  EVar14 = Collapsed;
  if (!bVar7) goto LAB_14be49deb;
  EVar2 = this_00->QuestType;
  EVar15 = Collapsed;
  if (EVar2 == Main) {
    this_03 = FDS_QuestMainTableRow::GetRef((longlong)this->QuestID,true);
    bVar7 = FDS_QuestMainTableRow::IsValid(this_03);
    if (bVar7) {
      pFVar9 = FDS_ZoneBaseTableRow::GetRef((longlong)this_03->ID_CompleteZone,true);
      bVar7 = FDS_ZoneBaseTableRow::IsValid(pFVar9);
      if (bVar7) {
        pFVar10 = FDS_ZoneBaseTableRow::ID_ZoneNameTable(pFVar9);
        lVar3 = pFVar10->ID;
        iVar8 = local_48.ArrayNum;
        if (local_48.ArrayNum == local_48.ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x828,&local_48.AllocatorInstance,&local_48.ArrayMax);
        }
        local_48.ArrayNum = iVar8 + 1;
        pFVar1 = (FInstancedStruct *)(local_48.AllocatorInstance.Data + (longlong)iVar8 * 0x28);
        FInstancedStruct::FInstancedStruct(pFVar1);
        pFVar11 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
        FVar4 = pFVar11[1];
        pFVar1[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar11;
        pFVar1[1].StructMemory = (uchar *)FVar4;
        pFVar1[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar11[2];
        FInstancedStruct::InitializeAs<FDS_StringWorldIDFormatArg>(pFVar1);
        pFVar12 = FInstancedStruct::GetMutablePtr<FDS_StringWorldIDFormatArg>(pFVar1);
        if (pFVar12 != (FDS_StringWorldIDFormatArg *)0x0) {
          (pFVar12->Value).ID = lVar3;
        }
      }
      pFVar13 = FDS_NpcBaseTableRow::GetRef((longlong)this_03->ID_CompleteNpc,true);
      bVar7 = FDS_NpcBaseTableRow::IsValid(pFVar13);
      if (bVar7) {
LAB_14be49d2f:
        iVar8 = local_48.ArrayNum;
        if (local_48.ArrayNum == local_48.ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x828,&local_48.AllocatorInstance,&local_48.ArrayMax);
        }
        local_48.ArrayNum = iVar8 + 1;
        pFVar1 = (FInstancedStruct *)(local_48.AllocatorInstance.Data + (longlong)iVar8 * 0x28);
        FInstancedStruct::FInstancedStruct(pFVar1);
        pFVar11 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
        FVar4 = pFVar11[1];
        pFVar1[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar11;
        pFVar1[1].StructMemory = (uchar *)FVar4;
        pFVar1[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar11[2];
        FInstancedStruct::InitializeAs<FDS_StringWorldIDFormatArg>(pFVar1);
        pFVar12 = FInstancedStruct::GetMutablePtr<FDS_StringWorldIDFormatArg>(pFVar1);
        if (pFVar12 != (FDS_StringWorldIDFormatArg *)0x0) {
          (pFVar12->Value).ID = (pFVar13->ID_NameSid).ID;
        }
      }
      else {
        local_58.ID = 0xeb3e;
        local_58._padding_ = (longlong)&___7FDS_StringUiID__6B_;
        iVar8 = local_48.ArrayNum;
        if (local_48.ArrayNum == local_48.ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x828,&local_48.AllocatorInstance,&local_48.ArrayMax);
        }
        local_48.ArrayNum = iVar8 + 1;
        this_04 = (FDS_TextFormatArg *)(local_48.AllocatorInstance.Data + (longlong)iVar8 * 0x28);
LAB_14be49ddb:
        FDS_TextFormatArg::FDS_TextFormatArg<FDS_StringUiID>(this_04,&local_58);
      }
    }
  }
  else {
    if (EVar2 == Local) {
      this_02 = FDS_QuestLocalTableRow::GetRef((longlong)this->QuestID,true);
      bVar7 = FDS_QuestLocalTableRow::IsValid(this_02);
      if (bVar7) {
        pFVar9 = FDS_ZoneBaseTableRow::GetRef((longlong)this_02->ID_AcceptZone,true);
        bVar7 = FDS_ZoneBaseTableRow::IsValid(pFVar9);
        if (bVar7) {
          pFVar10 = FDS_ZoneBaseTableRow::ID_ZoneNameTable(pFVar9);
          lVar3 = pFVar10->ID;
          iVar8 = local_38.ArrayNum;
          if (local_38.ArrayNum == local_38.ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x828,&local_38.AllocatorInstance,&local_38.ArrayMax);
          }
          local_38.ArrayNum = iVar8 + 1;
          pFVar1 = (FInstancedStruct *)(local_38.AllocatorInstance.Data + (longlong)iVar8 * 0x28);
          FInstancedStruct::FInstancedStruct(pFVar1);
          pFVar11 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
          FVar4 = pFVar11[1];
          pFVar1[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar11;
          pFVar1[1].StructMemory = (uchar *)FVar4;
          pFVar1[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar11[2];
          FInstancedStruct::InitializeAs<FDS_StringWorldIDFormatArg>(pFVar1);
          pFVar12 = FInstancedStruct::GetMutablePtr<FDS_StringWorldIDFormatArg>(pFVar1);
          if (pFVar12 != (FDS_StringWorldIDFormatArg *)0x0) {
            (pFVar12->Value).ID = lVar3;
          }
        }
        pFVar13 = FDS_NpcBaseTableRow::GetRef((longlong)this_02->ID_AcceptNpc,true);
        bVar7 = FDS_NpcBaseTableRow::IsValid(pFVar13);
        if (bVar7) {
          iVar8 = local_38.ArrayNum;
          if (local_38.ArrayNum == local_38.ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x828,&local_38.AllocatorInstance,&local_38.ArrayMax);
          }
          local_38.ArrayNum = iVar8 + 1;
          pFVar1 = (FInstancedStruct *)(local_38.AllocatorInstance.Data + (longlong)iVar8 * 0x28);
          FInstancedStruct::FInstancedStruct(pFVar1);
          pFVar11 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
          FVar4 = pFVar11[1];
          pFVar1[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar11;
          pFVar1[1].StructMemory = (uchar *)FVar4;
          pFVar1[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar11[2];
          FInstancedStruct::InitializeAs<FDS_StringWorldIDFormatArg>(pFVar1);
          pFVar12 = FInstancedStruct::GetMutablePtr<FDS_StringWorldIDFormatArg>(pFVar1);
          if (pFVar12 != (FDS_StringWorldIDFormatArg *)0x0) {
            (pFVar12->Value).ID = (pFVar13->ID_NameSid).ID;
          }
        }
        pFVar9 = FDS_ZoneBaseTableRow::GetRef((longlong)this_02->ID_CompleteZone,true);
        bVar7 = FDS_ZoneBaseTableRow::IsValid(pFVar9);
        if (bVar7) {
          pFVar10 = FDS_ZoneBaseTableRow::ID_ZoneNameTable(pFVar9);
          lVar3 = pFVar10->ID;
          iVar8 = local_48.ArrayNum;
          if (local_48.ArrayNum == local_48.ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x828,&local_48.AllocatorInstance,&local_48.ArrayMax);
          }
          local_48.ArrayNum = iVar8 + 1;
          pFVar1 = (FInstancedStruct *)(local_48.AllocatorInstance.Data + (longlong)iVar8 * 0x28);
          FInstancedStruct::FInstancedStruct(pFVar1);
          pFVar11 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
          FVar4 = pFVar11[1];
          pFVar1[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar11;
          pFVar1[1].StructMemory = (uchar *)FVar4;
          pFVar1[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar11[2];
          FInstancedStruct::InitializeAs<FDS_StringWorldIDFormatArg>(pFVar1);
          pFVar12 = FInstancedStruct::GetMutablePtr<FDS_StringWorldIDFormatArg>(pFVar1);
          if (pFVar12 != (FDS_StringWorldIDFormatArg *)0x0) {
            (pFVar12->Value).ID = lVar3;
          }
        }
        pFVar13 = FDS_NpcBaseTableRow::GetRef((longlong)this_02->ID_CompleteNpc,true);
        bVar7 = FDS_NpcBaseTableRow::IsValid(pFVar13);
        if (bVar7) {
          iVar8 = local_48.ArrayNum;
          if (local_48.ArrayNum == local_48.ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x828,&local_48.AllocatorInstance,&local_48.ArrayMax);
          }
          local_48.ArrayNum = iVar8 + 1;
          pFVar1 = (FInstancedStruct *)(local_48.AllocatorInstance.Data + (longlong)iVar8 * 0x28);
          FInstancedStruct::FInstancedStruct(pFVar1);
          pFVar11 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
          FVar4 = pFVar11[1];
          pFVar1[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar11;
          pFVar1[1].StructMemory = (uchar *)FVar4;
          pFVar1[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar11[2];
          FInstancedStruct::InitializeAs<FDS_StringWorldIDFormatArg>(pFVar1);
          pFVar12 = FInstancedStruct::GetMutablePtr<FDS_StringWorldIDFormatArg>(pFVar1);
          if (pFVar12 != (FDS_StringWorldIDFormatArg *)0x0) {
            (pFVar12->Value).ID = (pFVar13->ID_NameSid).ID;
          }
        }
      }
      EVar15 = SelfHitTestInvisible;
      EVar14 = SelfHitTestInvisible;
      goto LAB_14be49deb;
    }
    EVar14 = Collapsed;
    if (EVar2 != Repeat) goto LAB_14be49deb;
    this_01 = FDS_QuestRepeatTableRow::GetRef((longlong)this->QuestID,true);
    bVar7 = FDS_QuestRepeatTableRow::IsValid(this_01);
    if (bVar7) {
      pFVar9 = FDS_ZoneBaseTableRow::GetRef((longlong)this_01->ID_CompleteZone,true);
      bVar7 = FDS_ZoneBaseTableRow::IsValid(pFVar9);
      if (bVar7) {
        pFVar10 = FDS_ZoneBaseTableRow::ID_ZoneNameTable(pFVar9);
        lVar3 = pFVar10->ID;
        iVar8 = local_48.ArrayNum;
        if (local_48.ArrayNum == local_48.ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x828,&local_48.AllocatorInstance,&local_48.ArrayMax);
        }
        local_48.ArrayNum = iVar8 + 1;
        pFVar1 = (FInstancedStruct *)(local_48.AllocatorInstance.Data + (longlong)iVar8 * 0x28);
        FInstancedStruct::FInstancedStruct(pFVar1);
        pFVar11 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
        FVar4 = pFVar11[1];
        pFVar1[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar11;
        pFVar1[1].StructMemory = (uchar *)FVar4;
        pFVar1[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar11[2];
        FInstancedStruct::InitializeAs<FDS_StringWorldIDFormatArg>(pFVar1);
        pFVar12 = FInstancedStruct::GetMutablePtr<FDS_StringWorldIDFormatArg>(pFVar1);
        if (pFVar12 != (FDS_StringWorldIDFormatArg *)0x0) {
          (pFVar12->Value).ID = lVar3;
        }
      }
      pFVar13 = FDS_NpcBaseTableRow::GetRef((longlong)this_01->ID_CompleteNpc,true);
      bVar7 = FDS_NpcBaseTableRow::IsValid(pFVar13);
      if (bVar7) goto LAB_14be49d2f;
      local_58.ID = 0xeb3b;
      local_58._padding_ = (longlong)&___7FDS_StringUiID__6B_;
      iVar8 = local_48.ArrayNum;
      if (local_48.ArrayNum == local_48.ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,&local_48.AllocatorInstance,&local_48.ArrayMax);
      }
      local_48.ArrayNum = iVar8 + 1;
      this_04 = (FDS_TextFormatArg *)(local_48.AllocatorInstance.Data + (longlong)iVar8 * 0x28);
      goto LAB_14be49ddb;
    }
  }
  EVar14 = SelfHitTestInvisible;
LAB_14be49deb:
  FDS_Text::SetTextFormatFromStringTable(&this->Clue_AcceptInfo,StringUi,0xeaab,&local_38);
  FDS_Text::SetTextFormatFromStringTable(&this->Clue_CompleteInfo,StringUi,0xeaaa,&local_48);
  local_58.ID._0_4_ = FFieldNotificationClassDescriptor::Clue_AcceptInfo.BitNumber;
  local_58._padding_._0_4_ =
       FFieldNotificationClassDescriptor::Clue_AcceptInfo.FieldName.ComparisonIndex.Value;
  local_58._padding_._4_4_ = FFieldNotificationClassDescriptor::Clue_AcceptInfo.FieldName.Number;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
  local_58.ID._0_4_ = FFieldNotificationClassDescriptor::Clue_CompleteInfo.BitNumber;
  local_58._padding_._0_4_ =
       FFieldNotificationClassDescriptor::Clue_CompleteInfo.FieldName.ComparisonIndex.Value;
  local_58._padding_._4_4_ = FFieldNotificationClassDescriptor::Clue_CompleteInfo.FieldName.Number;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
  iVar8 = FFieldNotificationClassDescriptor::VisibilityClueAcceptInfo.BitNumber;
  FVar5 = FFieldNotificationClassDescriptor::VisibilityClueAcceptInfo.FieldName;
  if (this->VisibilityClueAcceptInfo != EVar15) {
    this->VisibilityClueAcceptInfo = EVar15;
    FVar6 = FFieldNotificationClassDescriptor::VisibilityClueAcceptInfo.FieldName;
    local_58.ID._0_4_ = iVar8;
    FFieldNotificationClassDescriptor::VisibilityClueAcceptInfo.FieldName.ComparisonIndex =
         FVar5.ComparisonIndex.Value;
    FFieldNotificationClassDescriptor::VisibilityClueAcceptInfo.FieldName.Number = FVar5.Number;
    local_58._padding_._0_4_ =
         FFieldNotificationClassDescriptor::VisibilityClueAcceptInfo.FieldName.ComparisonIndex.Value
    ;
    local_58._padding_._4_4_ =
         FFieldNotificationClassDescriptor::VisibilityClueAcceptInfo.FieldName.Number;
    FFieldNotificationClassDescriptor::VisibilityClueAcceptInfo.FieldName = FVar6;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
  }
  iVar8 = FFieldNotificationClassDescriptor::VisibilityClueCompleteInfo.BitNumber;
  FVar5 = FFieldNotificationClassDescriptor::VisibilityClueCompleteInfo.FieldName;
  if (this->VisibilityClueCompleteInfo != EVar14) {
    this->VisibilityClueCompleteInfo = EVar14;
    FVar6 = FFieldNotificationClassDescriptor::VisibilityClueCompleteInfo.FieldName;
    local_58.ID._0_4_ = iVar8;
    FFieldNotificationClassDescriptor::VisibilityClueCompleteInfo.FieldName.ComparisonIndex =
         FVar5.ComparisonIndex.Value;
    FFieldNotificationClassDescriptor::VisibilityClueCompleteInfo.FieldName.Number = FVar5.Number;
    local_58._padding_._0_4_ =
         FFieldNotificationClassDescriptor::VisibilityClueCompleteInfo.FieldName.ComparisonIndex.
         Value;
    local_58._padding_._4_4_ =
         FFieldNotificationClassDescriptor::VisibilityClueCompleteInfo.FieldName.Number;
    FFieldNotificationClassDescriptor::VisibilityClueCompleteInfo.FieldName = FVar6;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if ((FDS_TextFormatArg *)local_48.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if ((FDS_TextFormatArg *)local_38.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// SetCompleteName @ 14be49f40

void __thiscall UDS_VM_QuestData::SetCompleteName(UDS_VM_QuestData *this)

{
  FName local_18;
  int local_10;
  
  FDS_Text::SetTextFromStringTable(&this->CompleteName,StringUi,0xeb29);
  local_10 = FFieldNotificationClassDescriptor::CompleteName.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CompleteName.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetCondition @ 14be49f90

void __thiscall UDS_VM_QuestData::SetCondition(UDS_VM_QuestData *this)

{
  bool bVar1;
  FDS_QuestBaseTableRow *this_00;
  FDS_QuestLocalTableRow *this_01;
  FName local_18;
  int local_10;
  
  FDS_Text::Reset(&this->Condition);
  if (0 < this->QuestID) {
    this_00 = FDS_QuestBaseTableRow::GetRef((longlong)this->QuestID,true);
    bVar1 = FDS_QuestBaseTableRow::IsValid(this_00);
    if ((bVar1) && (this_00->QuestType == Local)) {
      this_01 = FDS_QuestLocalTableRow::GetRef((longlong)this->QuestID,true);
      bVar1 = FDS_QuestLocalTableRow::IsValid(this_01);
      if (bVar1) {
        FDS_Text::SetTextFromStringID(&this->Condition,&this_01->ConditionText);
      }
    }
  }
  local_10 = FFieldNotificationClassDescriptor::Condition.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Condition.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetDifficultyIconID @ 14be4ab20

void __thiscall UDS_VM_QuestData::SetDifficultyIconID(UDS_VM_QuestData *this)

{
  EDS_QuestDifficulty EVar1;
  bool bVar2;
  int iVar3;
  FDS_QuestBaseTableRow *this_00;
  FName local_18;
  int local_10;
  
  iVar3 = 0;
  if (0 < this->QuestID) {
    this_00 = FDS_QuestBaseTableRow::GetRef((longlong)this->QuestID,true);
    bVar2 = FDS_QuestBaseTableRow::IsValid(this_00);
    if (bVar2) {
      EVar1 = this_00->QuestGrade;
      if (EVar1 == SS) {
        iVar3 = DS_CommonDataHelper::QuestDifficultySs();
      }
      else if (EVar1 == S) {
        iVar3 = DS_CommonDataHelper::QuestDifficultyS();
      }
      else if (EVar1 == A) {
        iVar3 = DS_CommonDataHelper::QuestDifficultyA();
      }
      else if (EVar1 == B) {
        iVar3 = DS_CommonDataHelper::QuestDifficultyB();
      }
      else if (EVar1 == C) {
        iVar3 = DS_CommonDataHelper::QuestDifficultyC();
      }
    }
  }
  local_10 = FFieldNotificationClassDescriptor::DifficultyIconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::DifficultyIconID.FieldName;
  if (this->DifficultyIconID != iVar3) {
    this->DifficultyIconID = iVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::IsDifficlutyIcon.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsDifficlutyIcon.FieldName;
  bVar2 = 0 < this->DifficultyIconID;
  if (this->IsDifficlutyIcon != bVar2) {
    this->IsDifficlutyIcon = bVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetIsAutoTracking @ 14be4b710

void __thiscall UDS_VM_QuestData::SetIsAutoTracking(UDS_VM_QuestData *this)

{
  bool bVar1;
  UObject *pUVar2;
  undefined1 uVar3;
  FWeakObjectPtr local_res8;
  FName local_18;
  int local_10;
  
  uVar3 = false;
  if (0 < this->QuestID) {
    UDS_QuestManager::GetQuestData((int)&local_res8);
    bVar1 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&local_res8);
      uVar3 = pUVar2[2].field_0xc;
    }
  }
  local_10 = FFieldNotificationClassDescriptor::IsAutoTracking.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsAutoTracking.FieldName;
  if (this->IsAutoTracking != (bool)uVar3) {
    this->IsAutoTracking = (bool)uVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetIsQuestAbleComplete @ 14be4c720

void __thiscall UDS_VM_QuestData::SetIsQuestAbleComplete(UDS_VM_QuestData *this)

{
  EDS_QuestStateType EVar1;
  bool bVar2;
  FName local_18;
  int local_10;
  
  bVar2 = false;
  if (0 < this->QuestID) {
    EVar1 = UDS_QuestManager::GetQuestStateType(this->QuestID);
    bVar2 = EVar1 == Complete;
  }
  local_18 = FFieldNotificationClassDescriptor::IsQuestAbleComplete.FieldName;
  if (this->IsQuestAbleComplete != bVar2) {
    local_10 = FFieldNotificationClassDescriptor::IsQuestAbleComplete.BitNumber;
    this->IsQuestAbleComplete = bVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetIsQuestProgress @ 14be4c780

void __thiscall UDS_VM_QuestData::SetIsQuestProgress(UDS_VM_QuestData *this)

{
  EDS_QuestStateType EVar1;
  bool bVar2;
  FName local_18;
  int local_10;
  
  bVar2 = false;
  if (0 < this->QuestID) {
    EVar1 = UDS_QuestManager::GetQuestStateType(this->QuestID);
    bVar2 = EVar1 == Progress;
  }
  local_18 = FFieldNotificationClassDescriptor::IsQuestProgress.FieldName;
  if (this->IsQuestProgress != bVar2) {
    local_10 = FFieldNotificationClassDescriptor::IsQuestProgress.BitNumber;
    this->IsQuestProgress = bVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetIsQuestType_Main @ 14be4c7e0

void __thiscall UDS_VM_QuestData::SetIsQuestType_Main(UDS_VM_QuestData *this)

{
  EDS_QuestType EVar1;
  bool bVar2;
  FName local_18;
  int local_10;
  
  bVar2 = false;
  if (0 < this->QuestID) {
    EVar1 = UDS_QuestManager::GetQuestType(this->QuestID);
    bVar2 = EVar1 == Main;
  }
  local_18 = FFieldNotificationClassDescriptor::IsQuestType_Main.FieldName;
  if (this->IsQuestType_Main != bVar2) {
    local_10 = FFieldNotificationClassDescriptor::IsQuestType_Main.BitNumber;
    this->IsQuestType_Main = bVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetIsReward @ 14be4c9a0

void __thiscall UDS_VM_QuestData::SetIsReward(UDS_VM_QuestData *this)

{
  bool bVar1;
  FName local_18;
  int local_10;
  
  if (((this->IsRewardItem == false) && (this->IsRewardGoods == false)) &&
     (this->IsRewardPoint == false)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  this->IsReward = bVar1;
  local_10 = FFieldNotificationClassDescriptor::IsReward.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsReward.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetIsRewardGoods @ 14be4ca00

void __thiscall UDS_VM_QuestData::SetIsRewardGoods(UDS_VM_QuestData *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  bool bVar4;
  FDS_QuestBaseTableRow *this_00;
  FDS_QuestRewardTableRow *this_01;
  bool bVar5;
  FName local_18;
  int local_10;
  
  bVar4 = false;
  bVar5 = false;
  if (0 < this->QuestID) {
    this_00 = FDS_QuestBaseTableRow::GetRef((longlong)this->QuestID,true);
    bVar3 = FDS_QuestBaseTableRow::IsValid(this_00);
    bVar5 = bVar4;
    if ((bVar3) && (0 < this_00->ID_QuestRewardId)) {
      this_01 = FDS_QuestRewardTableRow::GetRef((longlong)this_00->ID_QuestRewardId,true);
      bVar4 = FDS_QuestRewardTableRow::IsValid(this_01);
      if (bVar4) {
        if ((0 < this_01->PlayerExp) || (bVar5 = false, 0 < this_01->CharExp)) {
          bVar5 = true;
        }
        iVar1 = (this_01->RewardMoneyType).ArrayNum;
        if (0 < iVar1) {
          pFVar2 = (this_01->RewardMoneyType).AllocatorInstance.Data;
          if (*pFVar2 != (FScriptContainerElement)0x0) {
            bVar5 = true;
          }
          if ((1 < iVar1) && (pFVar2[1] != (FScriptContainerElement)0x0)) {
            bVar5 = true;
          }
        }
      }
    }
  }
  local_10 = FFieldNotificationClassDescriptor::IsRewardGoods.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsRewardGoods.FieldName;
  if (this->IsRewardGoods != bVar5) {
    this->IsRewardGoods = bVar5;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetObjective @ 14be4e6a0

void __thiscall UDS_VM_QuestData::SetObjective(UDS_VM_QuestData *this)

{
  int iVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FDS_QuestBaseTableRow *this_00;
  UDS_UserObjectListItem *this_01;
  FDS_ViewModelContext *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  UScriptStruct *pUVar8;
  UDS_ViewModelContextManager *this_02;
  ulonglong uVar9;
  FDS_ViewModelContext *pFVar10;
  ForAnyElementType FVar11;
  undefined1 local_res8 [8];
  uint local_res10;
  UDS_UserObjectListItem *local_res18;
  FScriptContainerElement *local_res20;
  FName local_88;
  int local_80;
  ForAnyElementType local_78;
  undefined8 local_70;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_ObjectiveList);
  if (0 < this->QuestID) {
    local_78.Data = (FScriptContainerElement *)0x0;
    local_70 = 0;
    this_00 = FDS_QuestBaseTableRow::GetRef((longlong)this->QuestID,true);
    bVar5 = FDS_QuestBaseTableRow::IsValid(this_00);
    if ((bVar5) &&
       ((TArray<int,TSizedDefaultAllocator<32>_> *)&local_78 != &this_00->ID_QuestObjectiveId)) {
      iVar1 = (this_00->ID_QuestObjectiveId).ArrayNum;
      pFVar3 = (this_00->ID_QuestObjectiveId).AllocatorInstance.Data;
      local_70 = CONCAT44(local_70._4_4_,iVar1);
      if (((iVar1 != 0) || (local_70._4_4_ != 0)) &&
         (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar1,local_70._4_4_,&local_78,iVar1,(int *)((longlong)&local_70 + 4)),
         iVar1 != 0)) {
        memcpy(local_78.Data,pFVar3,(longlong)iVar1 << 2);
      }
    }
    uVar9 = (ulonglong)(int)(uint)local_70;
    local_res10 = (uint)local_70;
    local_res20 = local_78.Data + uVar9 * 4;
    FVar11.Data = local_78.Data;
    while( true ) {
      pFVar3 = local_res20;
      pFVar10 = (FDS_ViewModelContext *)0x0;
      if ((uint)local_70 != (int)uVar9) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (FVar11.Data == pFVar3) break;
      uVar2 = *(undefined4 *)FVar11.Data;
      this_01 = NewObject<UDS_UserObjectListItem>((UObject *)this);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (this_01 == (UDS_UserObjectListItem *)0x0) goto LAB_14be4e90d;
      }
      else {
        if (this_01 == (UDS_UserObjectListItem *)0x0) {
LAB_14be4e90d:
          if (local_78.Data == (FScriptContainerElement *)0x0) {
            return;
          }
          FMemory::Free(local_78.Data);
          return;
        }
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      pFVar6 = ::operator_new(0x28);
      if (pFVar6 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar6->ViewModelTemplateKey = 0;
        pFVar6->DerivedStaticStruct = (UStruct *)0x0;
        (pFVar6->ViewModelName).ComparisonIndex = 0;
        (pFVar6->ViewModelName).Number = 0;
        pFVar6->_padding_ = (longlong)&___7FDS_ViewModelContext_QuestObjectiveData__6B_;
        pFVar6[1]._padding_ = 0;
        pFVar10 = pFVar6;
      }
      pTVar7 = ::operator_new(0x20);
      if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar7->SharedReferenceCount = (atomic<int>)0x1;
        pTVar7[1]._padding_ = (longlong)ViewModelContextDeleter;
        pTVar7->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_QuestObjectiveData__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        pTVar7->WeakReferenceCount = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pTVar7[1].SharedReferenceCount = pFVar10;
      }
      if ((pFVar10 == (FDS_ViewModelContext *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pUVar8 = FDS_ViewModelContext_QuestObjectiveData::StaticStruct();
      pFVar10->DerivedStaticStruct = (UStruct *)pUVar8;
      this_02 = UDS_ViewModelContextManager::GetInst();
      if (this_02 != (UDS_ViewModelContextManager *)0x0) {
        if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_68.Object = pFVar10;
        local_68.SharedReferenceCount.ReferenceController = pTVar7;
        UDS_ViewModelContextManager::RegisterContext(this_02,&local_68);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.SharedReferenceCount.ReferenceController);
      }
      pFVar10->ViewModelTemplateKey = Data_QuestObjectiveData;
      *(int *)&pFVar10[1]._padding_ = this->QuestID;
      *(undefined4 *)((longlong)&pFVar10[1]._padding_ + 4) = uVar2;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_58.Object = pFVar10;
      local_58.SharedReferenceCount.ReferenceController = pTVar7;
      UDS_UserObjectListItem::AddContext(this_01,&local_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      local_res18 = this_01;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      FDS_EntryBindingEventField::Add
                (&this->EntryBindingEventField_ObjectiveList,
                 (TObjectPtr<UDS_UserObjectListItem>)&local_res18);
      uVar9 = (ulonglong)local_res10;
      FVar11.Data = FVar11.Data + 4;
    }
    if (local_78.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data);
    }
  }
  local_80 = FFieldNotificationClassDescriptor::EntryBindingEventField_ObjectiveList.BitNumber;
  local_88 = FFieldNotificationClassDescriptor::EntryBindingEventField_ObjectiveList.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
  return;
}

// SetQuestMissionIconID @ 14be4f640

void __thiscall UDS_VM_QuestData::SetQuestMissionIconID(UDS_VM_QuestData *this)

{
  EDS_QuestType EVar1;
  bool bVar2;
  FDS_QuestMissionTableRow *this_00;
  int iVar3;
  FName local_18;
  int local_10;
  
  iVar3 = 0;
  if ((0 < this->QuestID) &&
     ((EVar1 = UDS_QuestManager::GetQuestType(this->QuestID), EVar1 == MissionWeekly ||
      (iVar3 = 0, EVar1 == MissionMonthly)))) {
    this_00 = FDS_QuestMissionTableRow::GetRef((longlong)this->QuestID,true);
    bVar2 = FDS_QuestMissionTableRow::IsValid(this_00);
    iVar3 = 0;
    if (bVar2) {
      iVar3 = this_00->ID_ResourceIcon;
    }
  }
  local_10 = FFieldNotificationClassDescriptor::QuestMissionIconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::QuestMissionIconID.FieldName;
  if (this->QuestMissionIconID != iVar3) {
    this->QuestMissionIconID = iVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetQuestName @ 14be4f6e0

void __thiscall UDS_VM_QuestData::SetQuestName(UDS_VM_QuestData *this)

{
  bool bVar1;
  FDS_QuestBaseTableRow *this_00;
  FName local_68;
  int local_60;
  FDS_Text local_58;
  
  FDS_Text::Reset(&this->QuestName);
  if (0 < this->QuestID) {
    this_00 = FDS_QuestBaseTableRow::GetRef((longlong)this->QuestID,true);
    bVar1 = FDS_QuestBaseTableRow::IsValid(this_00);
    if (bVar1) {
      local_58.StringTableType = None;
      local_58.StringTableID = 0;
      local_58.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_58.StringEnumTableNameID.Number = 0;
      local_58.DateTime.Ticks = 0;
      local_58.TimeSpan.Ticks = 0;
      local_58.TimeExpressionType = None;
      local_58.IsExpression = false;
      local_58.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.UniqueString.Data.ArrayNum = 0;
      local_58.UniqueString.Data.ArrayMax = 0;
      local_58.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.FormatArgs.ArrayNum = 0;
      local_58.FormatArgs.ArrayMax = 0;
      if (this_00->QuestTitleStep < 1) {
        FDS_Text::SetTextFromStringID(&local_58,&this_00->ID_QuestTitleId);
      }
      else {
        FDS_Text::SetTextFormatFromStringTable<int_const_&>
                  (&local_58,StringQuest,(this_00->ID_QuestTitleId).ID,&this_00->QuestTitleStep);
      }
      FDS_Text::operator=(&this->QuestName,&local_58);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
                 local_58.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
      }
      if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
      }
    }
  }
  local_60 = FFieldNotificationClassDescriptor::QuestName.BitNumber;
  local_68 = FFieldNotificationClassDescriptor::QuestName.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
  return;
}

// SetQuestStory @ 14be4f810

void __thiscall UDS_VM_QuestData::SetQuestStory(UDS_VM_QuestData *this)

{
  bool bVar1;
  FDS_QuestBaseTableRow *this_00;
  FName local_18;
  int local_10;
  
  FDS_Text::Reset(&this->QuestStory);
  if (0 < this->QuestID) {
    this_00 = FDS_QuestBaseTableRow::GetRef((longlong)this->QuestID,true);
    bVar1 = FDS_QuestBaseTableRow::IsValid(this_00);
    if (bVar1) {
      FDS_Text::SetTextFromStringID(&this->QuestStory,&this_00->ID_QuestSummaryId);
    }
  }
  local_10 = FFieldNotificationClassDescriptor::QuestStory.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::QuestStory.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetQuestTypeIconID @ 14be4f8a0

void __thiscall UDS_VM_QuestData::SetQuestTypeIconID(UDS_VM_QuestData *this)

{
  EDS_QuestType EVar1;
  bool bVar2;
  int iVar3;
  FDS_QuestBaseTableRow *this_00;
  FName local_18;
  int local_10;
  
  iVar3 = 0;
  if (0 < this->QuestID) {
    this_00 = FDS_QuestBaseTableRow::GetRef((longlong)this->QuestID,true);
    bVar2 = FDS_QuestBaseTableRow::IsValid(this_00);
    iVar3 = 0;
    if (bVar2) {
      EVar1 = this_00->QuestType;
      if (EVar1 == Main) {
        iVar3 = DS_CommonDataHelper::QuestTypeIconMain();
      }
      else if (EVar1 == Local) {
        iVar3 = DS_CommonDataHelper::QuestTypeIconLocal();
      }
      else if (EVar1 == Daily) {
        iVar3 = DS_CommonDataHelper::QuestTypeIconDaily();
      }
      else if (EVar1 == Repeat) {
        iVar3 = DS_CommonDataHelper::QuestTypeIconRepeat();
      }
    }
  }
  local_10 = FFieldNotificationClassDescriptor::QuestTypeIconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::QuestTypeIconID.FieldName;
  if (this->QuestTypeIconID != iVar3) {
    this->QuestTypeIconID = iVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetRepeatCount @ 14be4ffd0

void __thiscall UDS_VM_QuestData::SetRepeatCount(UDS_VM_QuestData *this)

{
  EDS_QuestType EVar1;
  bool bVar2;
  UDS_QuestManager *this_00;
  FDS_QuestRepeatTableRow *this_01;
  int local_res8 [2];
  int local_res10 [2];
  FName local_18;
  int local_10;
  
  local_res10[0] = 0;
  local_res8[0] = 0;
  this_00 = UDS_QuestManager::GetInst();
  if (this_00 != (UDS_QuestManager *)0x0) {
    EVar1 = UDS_QuestManager::GetQuestType(this->QuestID);
    if (EVar1 == Repeat) {
      local_res10[0] = UDS_QuestManager::GetQuestRepeatCount(this_00,this->QuestID);
      this_01 = FDS_QuestRepeatTableRow::GetRef((longlong)this->QuestID,true);
      bVar2 = FDS_QuestRepeatTableRow::IsValid(this_01);
      if (bVar2) {
        local_res8[0] = this_01->RepeatCount;
      }
    }
  }
  FDS_Text::SetTextFormatFromStringTable<int_&,int_&>
            (&this->RepeatCount,StringUi,0xec6a,local_res10,local_res8);
  local_10 = FFieldNotificationClassDescriptor::RepeatCount.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::RepeatCount.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetRequirement @ 14be500a0

void __thiscall UDS_VM_QuestData::SetRequirement(UDS_VM_QuestData *this)

{
  int *piVar1;
  FDS_Text *this_00;
  FDS_TextFormatArg *this_01;
  EDS_QuestOpenConditionType EVar2;
  bool bVar3;
  undefined1 uVar4;
  ERoundingMode EVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  FDS_QuestBaseTableRow *pFVar9;
  FDS_CharacterBaseTableRow *this_02;
  FDS_AchievementBaseTableRow *this_03;
  long64 lVar10;
  FDS_QuestLocalTableRow *this_04;
  FDS_NpcBaseTableRow *this_05;
  FNumberFormattingOptions *pFVar11;
  FName local_78;
  int local_70;
  FDS_Text local_68;
  
  this_00 = &this->Requirement;
  FDS_Text::Reset(this_00);
  if (0 < this->QuestID) {
    pFVar9 = FDS_QuestBaseTableRow::GetRef((longlong)this->QuestID,true);
    bVar7 = FDS_QuestBaseTableRow::IsValid(pFVar9);
    if (bVar7) {
      EVar2 = pFVar9->QuestOpenConditionType;
      if (EVar2 == PlayerGrade) {
        FDS_Text::SetTextFormatFromStringTable<int_const_&>
                  (this_00,StringUi,0xec5c,&pFVar9->QuestOpenConditionValue);
      }
      else {
        if (EVar2 == AppointQuest) {
          pFVar9 = FDS_QuestBaseTableRow::GetRef((longlong)pFVar9->QuestOpenConditionValue,true);
          bVar7 = FDS_QuestBaseTableRow::IsValid(pFVar9);
          if (!bVar7) goto LAB_14be503b4;
          local_68.StringTableType = None;
          local_68.StringTableID = 0;
          local_68.StringEnumTableNameID.ComparisonIndex.Value = 0;
          local_68.StringEnumTableNameID.Number = 0;
          local_68.DateTime.Ticks = 0;
          local_68.TimeSpan.Ticks = 0;
          local_68.TimeExpressionType = None;
          local_68.IsExpression = false;
          local_68.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_68.UniqueString.Data.ArrayNum = 0;
          local_68.UniqueString.Data.ArrayMax = 0;
          local_68.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_68.FormatArgs.ArrayNum = 0;
          local_68.FormatArgs.ArrayMax = 0;
          if (pFVar9->QuestTitleStep < 1) {
            FDS_Text::SetTextFromStringID(&local_68,&pFVar9->ID_QuestTitleId);
          }
          else {
            FDS_Text::SetTextFormatFromStringTable<int_const_&>
                      (&local_68,StringQuest,(pFVar9->ID_QuestTitleId).ID,&pFVar9->QuestTitleStep);
          }
          (this->Requirement).StringTableID = 0xec5d;
        }
        else {
          if (EVar2 == NpcRelationEvolveAble) {
            this_04 = FDS_QuestLocalTableRow::GetRef((longlong)this->QuestID,true);
            bVar7 = FDS_QuestLocalTableRow::IsValid(this_04);
            if (bVar7) {
              this_05 = FDS_NpcBaseTableRow::GetRef((longlong)this_04->ID_AcceptNpc,true);
              bVar7 = FDS_NpcBaseTableRow::IsValid(this_05);
              if (bVar7) {
                FDS_Text::SetTextFormatFromStringTable<FDS_StringWorldID_const_&>
                          (this_00,StringUi,0xec64,&this_05->ID_NameSid);
              }
            }
            goto LAB_14be503b4;
          }
          if (EVar2 != AppointAchievement) {
            if (EVar2 == AppointCharacterGet) {
              this_02 = FDS_CharacterBaseTableRow::GetRef
                                  ((longlong)pFVar9->QuestOpenConditionValue,true);
              bVar7 = FDS_CharacterBaseTableRow::IsValid(this_02);
              if (bVar7) {
                FDS_Text::SetTextFormatFromStringTable<FDS_StringBaseID_const_&>
                          (this_00,StringUi,0xec66,&this_02->ID_Name);
              }
            }
            else {
              FDS_Text::SetTextFromStringTable(this_00,StringUi,0xec5b);
            }
            goto LAB_14be503b4;
          }
          this_03 = FDS_AchievementBaseTableRow::GetRef
                              ((longlong)pFVar9->QuestOpenConditionValue,true);
          bVar7 = FDS_AchievementBaseTableRow::IsValid(this_03);
          if (!bVar7) goto LAB_14be503b4;
          bVar7 = FDS_AchievementService::IsGroupAchievement(this_03->AchievementGroupId);
          if (!bVar7) {
            FDS_Text::SetTextFormatFromStringTable<FDS_StringBaseID_const_&>
                      (this_00,StringUi,0xec65,&this_03->ID_Title);
            goto LAB_14be503b4;
          }
          local_68.StringTableType = None;
          local_68.StringTableID = 0;
          local_68.StringEnumTableNameID.ComparisonIndex.Value = 0;
          local_68.StringEnumTableNameID.Number = 0;
          local_68.DateTime.Ticks = 0;
          local_68.TimeSpan.Ticks = 0;
          local_68.TimeExpressionType = None;
          local_68.IsExpression = false;
          local_68.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_68.UniqueString.Data.ArrayNum = 0;
          local_68.UniqueString.Data.ArrayMax = 0;
          local_68.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_68.FormatArgs.ArrayNum = 0;
          local_68.FormatArgs.ArrayMax = 0;
          lVar10 = (**(code **)(this_03->ID_Title)._padding_)(&this_03->ID_Title);
          FDS_Text::SetTextFormatFromStringTable<int_const_&>
                    (&local_68,StringBase,lVar10,&this_03->AchievementGroupStep);
          (this->Requirement).StringTableID = 0xec65;
        }
        this_00->StringTableType = StringUi;
        DestructItems<FDS_TextFormatArg,int>
                  ((FDS_TextFormatArg *)(this->Requirement).FormatArgs.AllocatorInstance.Data,
                   (this->Requirement).FormatArgs.ArrayNum);
        iVar8 = (this->Requirement).FormatArgs.ArrayMax;
        piVar1 = &(this->Requirement).FormatArgs.ArrayMax;
        (this->Requirement).FormatArgs.ArrayNum = 0;
        if (iVar8 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,0,&(this->Requirement).FormatArgs.AllocatorInstance,0,piVar1);
        }
        iVar8 = (this->Requirement).FormatArgs.ArrayNum;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x828,&(this->Requirement).FormatArgs.AllocatorInstance,piVar1);
        }
        (this->Requirement).FormatArgs.ArrayNum = iVar8 + 1;
        this_01 = (FDS_TextFormatArg *)
                  ((this->Requirement).FormatArgs.AllocatorInstance.Data + (longlong)iVar8 * 0x28);
        FInstancedStruct::FInstancedStruct((FInstancedStruct *)this_01);
        pFVar11 = FNumberFormattingOptions::DefaultWithGrouping();
        bVar7 = pFVar11->UseGrouping;
        bVar3 = pFVar11->IndicateNearlyInteger;
        uVar4 = pFVar11->field_0x3;
        EVar5 = pFVar11->RoundingMode;
        iVar8 = pFVar11->MinimumIntegralDigits;
        iVar6 = pFVar11->MaximumIntegralDigits;
        (this_01->NumberFormatOption).AlwaysSign = pFVar11->AlwaysSign;
        (this_01->NumberFormatOption).UseGrouping = bVar7;
        (this_01->NumberFormatOption).IndicateNearlyInteger = bVar3;
        (this_01->NumberFormatOption).field_0x3 = uVar4;
        (this_01->NumberFormatOption).RoundingMode = EVar5;
        (this_01->NumberFormatOption).MinimumIntegralDigits = iVar8;
        (this_01->NumberFormatOption).MaximumIntegralDigits = iVar6;
        iVar8 = pFVar11->MaximumFractionalDigits;
        (this_01->NumberFormatOption).MinimumFractionalDigits = pFVar11->MinimumFractionalDigits;
        (this_01->NumberFormatOption).MaximumFractionalDigits = iVar8;
        FDS_TextFormatArg::SetArg<FDS_Text_&>(this_01,&local_68);
        DestructItems<FDS_TextFormatArg,int>
                  ((FDS_TextFormatArg *)local_68.FormatArgs.AllocatorInstance.Data,
                   local_68.FormatArgs.ArrayNum);
        if ((FDS_TextFormatArg *)local_68.FormatArgs.AllocatorInstance.Data !=
            (FDS_TextFormatArg *)0x0) {
          FMemory::Free(local_68.FormatArgs.AllocatorInstance.Data);
        }
        if (local_68.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.UniqueString.Data.AllocatorInstance.Data);
        }
      }
    }
  }
LAB_14be503b4:
  local_70 = FFieldNotificationClassDescriptor::Requirement.BitNumber;
  local_78 = FFieldNotificationClassDescriptor::Requirement.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
  return;
}

// SetRewardExp @ 14be50400

void __thiscall UDS_VM_QuestData::SetRewardExp(UDS_VM_QuestData *this)

{
  bool bVar1;
  FDS_QuestBaseTableRow *this_00;
  FDS_QuestRewardTableRow *this_01;
  UDS_VM_QuestData *local_res8;
  FName local_18;
  int local_10;
  
  local_res8 = this;
  if (0 < this->QuestID) {
    this_00 = FDS_QuestBaseTableRow::GetRef((longlong)this->QuestID,true);
    bVar1 = FDS_QuestBaseTableRow::IsValid(this_00);
    if ((bVar1) && (0 < this_00->ID_QuestRewardId)) {
      this_01 = FDS_QuestRewardTableRow::GetRef((longlong)this_00->ID_QuestRewardId,true);
      bVar1 = FDS_QuestRewardTableRow::IsValid(this_01);
      if (bVar1) {
        `UDS_VM_QuestData::SetRewardExp'::__l2::<lambda_1>::operator()
                  (&local_res8,&this->VM_PlayerExpDisplay,PlayerExp,(longlong)this_01->PlayerExp);
        `UDS_VM_QuestData::SetRewardExp'::__l2::<lambda_1>::operator()
                  (&local_res8,&this->VM_CharExpDisplay,CharExp,(longlong)this_01->CharExp);
      }
    }
  }
  local_10 = FFieldNotificationClassDescriptor::VM_PlayerExpDisplay.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VM_PlayerExpDisplay.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  local_10 = FFieldNotificationClassDescriptor::VM_CharExpDisplay.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VM_CharExpDisplay.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetRewardItem @ 14be504f0

void __thiscall UDS_VM_QuestData::SetRewardItem(UDS_VM_QuestData *this)

{
  FScriptContainerElement FVar1;
  long64 lVar2;
  code *pcVar3;
  FName FVar4;
  FDS_ViewModelContext_MoneyDisplay *pFVar5;
  FDS_ViewModelContext_Exp *pFVar6;
  FDS_VMContext_RewardSlot *pFVar7;
  FDS_ViewModelContext_RelationPoint *pFVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  FDS_QuestBaseTableRow *this_00;
  FDS_QuestRewardTableRow *this_01;
  UDS_UserObjectListItem *pUVar12;
  undefined8 *puVar13;
  undefined8 in_RDX;
  undefined7 uVar15;
  TObjectPtr<UDS_UserObjectListItem>_u_0 TVar14;
  uint uVar16;
  FSharedReferencer<1> FVar17;
  longlong lVar18;
  uint uVar19;
  FDS_EntryBindingEventField *pFVar20;
  bool local_res10;
  UDS_M_ItemImplBase *local_res18;
  FDS_EntryBindingEventField *local_res20;
  TSharedPtr<FDS_ViewModelContext_MoneyDisplay,1> local_1e8;
  TSharedPtr<FDS_ViewModelContext_Exp,1> local_1d8;
  TSharedPtr<FDS_VMContext_RewardSlot,1> local_1c8;
  TSharedPtr<FDS_ViewModelContext_Exp,1> local_1b8;
  TSharedPtr<FDS_VMContext_RewardSlot,1> local_1a8;
  TSharedPtr<FDS_VMContext_RewardSlot,1> local_198;
  TSharedPtr<FDS_VMContext_RewardSlot,1> local_188;
  TSharedPtr<FDS_ViewModelContext_RelationPoint,1> local_178;
  TSharedPtr<FDS_VMContext_RewardSlot,1> local_168;
  UDS_UserObjectListItem *local_158;
  UDS_UserObjectListItem *local_150;
  UDS_UserObjectListItem *local_148;
  UDS_UserObjectListItem *local_140;
  UDS_UserObjectListItem *local_138 [2];
  FName local_128;
  int local_120;
  FName local_118;
  int local_110;
  FName local_108;
  int local_100;
  TSharedPtr<FDS_ViewModelContext,1> local_f8;
  TSharedPtr<FDS_ViewModelContext,1> local_e8;
  TSharedPtr<FDS_ViewModelContext,1> local_d8;
  TSharedPtr<FDS_ViewModelContext,1> local_c8;
  TSharedPtr<FDS_ViewModelContext,1> local_b8;
  TSharedPtr<FDS_ViewModelContext,1> local_a8;
  TSharedPtr<FDS_ViewModelContext,1> local_98;
  undefined1 local_88 [8];
  TReferenceControllerBase<1> *local_80;
  TSharedPtr<FDS_ViewModelContext,1> local_78;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  
  pFVar20 = &this->EntryBindingEventField_RewardList;
  local_res10 = false;
  local_res20 = pFVar20;
  FDS_EntryBindingEventField::Reset(pFVar20);
  if (this->QuestID < 1) goto LAB_14be50fa7;
  uVar15 = (undefined7)((ulonglong)in_RDX >> 8);
  this_00 = FDS_QuestBaseTableRow::GetRef((longlong)this->QuestID,true);
  bVar9 = FDS_QuestBaseTableRow::IsValid(this_00);
  if ((!bVar9) || (this_00->ID_QuestRewardId < 1)) goto LAB_14be50fa7;
  TVar14._1_7_ = uVar15;
  TVar14._0_1_ = 1;
  this_01 = FDS_QuestRewardTableRow::GetRef((longlong)this_00->ID_QuestRewardId,true);
  bVar9 = FDS_QuestRewardTableRow::IsValid(this_01);
  if (!bVar9) goto LAB_14be50fa7;
  if (0 < this_01->PlayerExp) {
    pUVar12 = NewObject<UDS_UserObjectListItem>((UObject *)this);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar12 != (UDS_UserObjectListItem *)0x0) goto LAB_14be505dc;
    }
    else if (pUVar12 != (UDS_UserObjectListItem *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar12);
LAB_14be505dc:
      MakeContext<FDS_ViewModelContext_Exp>(&local_1d8);
      pFVar6 = local_1d8.Object;
      if (local_1d8.Object != (FDS_ViewModelContext_Exp *)0x0) {
        if ((local_1d8.Object == (FDS_ViewModelContext_Exp *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined4 *)&pFVar6->_padding_ = 0x194;
        pFVar6->Exp = (longlong)this_01->PlayerExp;
        local_e8.Object = (FDS_ViewModelContext *)local_1d8.Object;
        local_e8.SharedReferenceCount.ReferenceController =
             local_1d8.SharedReferenceCount.ReferenceController;
        pFVar6->CommonContentsType = 1;
        if (local_1d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_1d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_1d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UDS_UserObjectListItem::AddContext(pUVar12,&local_e8);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1d8.SharedReferenceCount.ReferenceController);
      MakeContext<FDS_VMContext_RewardSlot>(&local_1c8);
      pFVar7 = local_1c8.Object;
      if (local_1c8.Object != (FDS_VMContext_RewardSlot *)0x0) {
        if ((local_1c8.Object == (FDS_VMContext_RewardSlot *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined4 *)&pFVar7->_padding_ = 0xb8;
        local_d8.Object = (FDS_ViewModelContext *)local_1c8.Object;
        local_d8.SharedReferenceCount.ReferenceController =
             local_1c8.SharedReferenceCount.ReferenceController;
        pFVar7->RewardSlotType = Exp;
        if (local_1c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UDS_UserObjectListItem::AddContext(pUVar12,&local_d8);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1c8.SharedReferenceCount.ReferenceController);
      local_158 = pUVar12;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar12);
      }
      TVar14.DebugPtr = (UDS_UserObjectListItem *)&local_158;
      FDS_EntryBindingEventField::Add
                (pFVar20,(TObjectPtr<UDS_UserObjectListItem>)TVar14.ObjectPtr.field0_0x0);
    }
  }
  if (0 < this_01->CharExp) {
    pUVar12 = NewObject<UDS_UserObjectListItem>((UObject *)this);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar12 != (UDS_UserObjectListItem *)0x0) goto LAB_14be5075b;
    }
    else if (pUVar12 != (UDS_UserObjectListItem *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar12);
LAB_14be5075b:
      MakeContext<FDS_ViewModelContext_Exp>(&local_1b8);
      pFVar6 = local_1b8.Object;
      if (local_1b8.Object != (FDS_ViewModelContext_Exp *)0x0) {
        if ((local_1b8.Object == (FDS_ViewModelContext_Exp *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined4 *)&pFVar6->_padding_ = 0x194;
        pFVar6->Exp = (longlong)this_01->CharExp;
        local_c8.Object = (FDS_ViewModelContext *)local_1b8.Object;
        local_c8.SharedReferenceCount.ReferenceController =
             local_1b8.SharedReferenceCount.ReferenceController;
        pFVar6->CommonContentsType = 3;
        if (local_1b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_1b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_1b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UDS_UserObjectListItem::AddContext(pUVar12,&local_c8);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1b8.SharedReferenceCount.ReferenceController);
      MakeContext<FDS_VMContext_RewardSlot>(&local_1a8);
      pFVar7 = local_1a8.Object;
      if (local_1a8.Object != (FDS_VMContext_RewardSlot *)0x0) {
        if ((local_1a8.Object == (FDS_VMContext_RewardSlot *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined4 *)&pFVar7->_padding_ = 0xb8;
        local_b8.Object = (FDS_ViewModelContext *)local_1a8.Object;
        local_b8.SharedReferenceCount.ReferenceController =
             local_1a8.SharedReferenceCount.ReferenceController;
        pFVar7->RewardSlotType = Exp;
        if (local_1a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UDS_UserObjectListItem::AddContext(pUVar12,&local_b8);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1a8.SharedReferenceCount.ReferenceController);
      local_150 = pUVar12;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar12);
      }
      TVar14.DebugPtr = (UDS_UserObjectListItem *)&local_150;
      FDS_EntryBindingEventField::Add
                (pFVar20,(TObjectPtr<UDS_UserObjectListItem>)TVar14.ObjectPtr.field0_0x0);
    }
  }
  iVar10 = (this_01->RewardMoneyType).ArrayNum;
  uVar16 = 0;
  if (0 < iVar10) {
    lVar18 = 0;
    do {
      if ((-1 < (int)uVar16) && ((int)uVar16 < iVar10)) {
        uVar19 = ~uVar16 >> 0x1f;
        uVar11 = 0;
        if ((int)uVar16 < (this_01->RewardMoneyType).ArrayNum) {
          uVar11 = uVar19;
        }
        if (uVar11 == 0) {
          TVar14.DebugPtr = (UDS_UserObjectListItem *)0x1506109c0;
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        if ((this_01->RewardMoneyType).AllocatorInstance.Data[lVar18] !=
            (FScriptContainerElement)0x0) {
          pUVar12 = NewObject<UDS_UserObjectListItem>((UObject *)this);
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
            if (pUVar12 != (UDS_UserObjectListItem *)0x0) goto LAB_14be50957;
          }
          else if (pUVar12 != (UDS_UserObjectListItem *)0x0) {
            UE::GC::MarkAsReachable((UObject *)pUVar12);
LAB_14be50957:
            MakeContext<FDS_ViewModelContext_MoneyDisplay>(&local_1e8);
            pFVar5 = local_1e8.Object;
            FVar17.ReferenceController = local_1e8.SharedReferenceCount.ReferenceController;
            if (local_1e8.Object != (FDS_ViewModelContext_MoneyDisplay *)0x0) {
              if ((local_1e8.Object == (FDS_ViewModelContext_MoneyDisplay *)0x0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar9)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              *(undefined4 *)&pFVar5->_padding_ = 0x192;
              uVar11 = 0;
              if ((int)uVar16 < (this_01->RewardMoneyType).ArrayNum) {
                uVar11 = uVar19;
              }
              if ((uVar11 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              FVar1 = (this_01->RewardMoneyType).AllocatorInstance.Data[lVar18];
              if ((pFVar5 == (FDS_ViewModelContext_MoneyDisplay *)0x0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar9)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar5->MoneyId = (ulonglong)(byte)FVar1;
              uVar11 = 0;
              if ((int)uVar16 < (this_01->RewardMoneyCount).ArrayNum) {
                uVar11 = uVar19;
              }
              if ((uVar11 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              lVar2 = *(long64 *)((this_01->RewardMoneyCount).AllocatorInstance.Data + lVar18 * 8);
              if ((pFVar5 == (FDS_ViewModelContext_MoneyDisplay *)0x0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar9)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              FVar17.ReferenceController = local_1e8.SharedReferenceCount.ReferenceController;
              local_a8.Object = (FDS_ViewModelContext *)local_1e8.Object;
              local_a8.SharedReferenceCount.ReferenceController =
                   local_1e8.SharedReferenceCount.ReferenceController;
              pFVar5->Quantity = lVar2;
              if (local_1e8.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_1e8.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              UDS_UserObjectListItem::AddContext(pUVar12,&local_a8);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar17.ReferenceController);
            MakeContext<FDS_VMContext_RewardSlot>(&local_198);
            pFVar7 = local_198.Object;
            FVar17.ReferenceController = local_198.SharedReferenceCount.ReferenceController;
            if (local_198.Object != (FDS_VMContext_RewardSlot *)0x0) {
              if ((local_198.Object == (FDS_VMContext_RewardSlot *)0x0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar9)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              FVar17.ReferenceController = local_198.SharedReferenceCount.ReferenceController;
              *(undefined4 *)&pFVar7->_padding_ = 0xb8;
              local_98.Object = (FDS_ViewModelContext *)local_198.Object;
              local_98.SharedReferenceCount.ReferenceController =
                   local_198.SharedReferenceCount.ReferenceController;
              pFVar7->RewardSlotType = Money;
              if (local_198.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_198.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              UDS_UserObjectListItem::AddContext(pUVar12,&local_98);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar17.ReferenceController);
            local_148 = pUVar12;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar12);
            }
            TVar14.DebugPtr = (UDS_UserObjectListItem *)&local_148;
            FDS_EntryBindingEventField::Add
                      (&this->EntryBindingEventField_RewardList,
                       (TObjectPtr<UDS_UserObjectListItem>)TVar14.ObjectPtr.field0_0x0);
          }
        }
      }
      iVar10 = (this_01->RewardMoneyType).ArrayNum;
      uVar16 = uVar16 + 1;
      lVar18 = lVar18 + 1;
    } while ((int)uVar16 < iVar10);
  }
  pFVar20 = &this->EntryBindingEventField_RewardList;
  iVar10 = (this_01->ID_RewardItemId).ArrayNum;
  local_res10 = 0 < iVar10;
  uVar16 = 0;
  if (0 < iVar10) {
    lVar18 = 0;
    do {
      pUVar12 = NewObject<UDS_UserObjectListItem>((UObject *)this);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar12 != (UDS_UserObjectListItem *)0x0) goto LAB_14be50c14;
      }
      else if (pUVar12 != (UDS_UserObjectListItem *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar12);
LAB_14be50c14:
        uVar11 = 0;
        if ((int)uVar16 < (this_01->ID_RewardItemId).ArrayNum) {
          uVar11 = ~uVar16 >> 0x1f;
        }
        if (uVar11 == 0) {
          TVar14.DebugPtr = (UDS_UserObjectListItem *)0x1506109c0;
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        iVar10 = 0;
        if ((-1 < (int)uVar16) && (iVar10 = 0, (int)uVar16 < (this_01->RewardItemCount).ArrayNum)) {
          uVar11 = 0;
          if ((int)uVar16 < (this_01->RewardItemCount).ArrayNum) {
            uVar11 = ~uVar16 >> 0x1f;
          }
          if (uVar11 == 0) {
            TVar14.DebugPtr = (UDS_UserObjectListItem *)0x1506109c0;
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar9) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          iVar10 = *(int *)((this_01->RewardItemCount).AllocatorInstance.Data + lVar18);
        }
        TVar14._0_1_ = 6;
        DS_ItemDataUtil::CreateItemModel((EDS_ItemSlotStateType)&local_res18,TVar14._0_4_);
        pFVar20 = local_res20;
        if (local_res18 != (UDS_M_ItemImplBase *)0x0) {
          UDS_M_ItemImplBase::SetQuantity(local_res18,iVar10);
          puVar13 = (undefined8 *)
                    (**(code **)(local_res18->_padding_ + 0x310))(local_res18,local_88);
          local_f8.Object = (FDS_ViewModelContext *)*puVar13;
          local_f8.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)puVar13[1];
          if (local_f8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          UDS_UserObjectListItem::AddContext(pUVar12,&local_f8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_80);
          MakeContext<FDS_VMContext_RewardSlot>(&local_188);
          pFVar7 = local_188.Object;
          FVar17.ReferenceController = local_188.SharedReferenceCount.ReferenceController;
          if (local_188.Object != (FDS_VMContext_RewardSlot *)0x0) {
            if ((local_188.Object == (FDS_VMContext_RewardSlot *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar9)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FVar17.ReferenceController = local_188.SharedReferenceCount.ReferenceController;
            *(undefined4 *)&pFVar7->_padding_ = 0xb8;
            local_78.Object = (FDS_ViewModelContext *)local_188.Object;
            local_78.SharedReferenceCount.ReferenceController =
                 local_188.SharedReferenceCount.ReferenceController;
            pFVar7->RewardSlotType = Item;
            if (local_188.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            UDS_UserObjectListItem::AddContext(pUVar12,&local_78);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar17.ReferenceController);
          local_140 = pUVar12;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar12);
          }
          pFVar20 = local_res20;
          TVar14.DebugPtr = (UDS_UserObjectListItem *)&local_140;
          FDS_EntryBindingEventField::Add
                    (local_res20,(TObjectPtr<UDS_UserObjectListItem>)TVar14.ObjectPtr.field0_0x0);
        }
      }
      uVar16 = uVar16 + 1;
      lVar18 = lVar18 + 4;
    } while ((int)uVar16 < (this_01->ID_RewardItemId).ArrayNum);
  }
  if (0 < this_01->RewardRelationPointCount) {
    pUVar12 = NewObject<UDS_UserObjectListItem>((UObject *)this);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar12 == (UDS_UserObjectListItem *)0x0) goto LAB_14be50fa7;
    }
    else {
      if (pUVar12 == (UDS_UserObjectListItem *)0x0) goto LAB_14be50fa7;
      UE::GC::MarkAsReachable((UObject *)pUVar12);
    }
    MakeContext<FDS_ViewModelContext_RelationPoint>(&local_178);
    pFVar8 = local_178.Object;
    if (local_178.Object != (FDS_ViewModelContext_RelationPoint *)0x0) {
      if ((local_178.Object == (FDS_ViewModelContext_RelationPoint *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined4 *)&pFVar8->_padding_ = 0x1ca;
      pFVar8->NpcTID = this_01->RewardRelationPointTarget;
      local_68.Object = (FDS_ViewModelContext *)local_178.Object;
      local_68.SharedReferenceCount.ReferenceController =
           local_178.SharedReferenceCount.ReferenceController;
      pFVar8->RelationPoint = this_01->RewardRelationPointCount;
      if (local_178.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_UserObjectListItem::AddContext(pUVar12,&local_68);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_178.SharedReferenceCount.ReferenceController);
    MakeContext<FDS_VMContext_RewardSlot>(&local_168);
    pFVar7 = local_168.Object;
    if (local_168.Object != (FDS_VMContext_RewardSlot *)0x0) {
      if ((local_168.Object == (FDS_VMContext_RewardSlot *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined4 *)&pFVar7->_padding_ = 0xb8;
      local_58.Object = (FDS_ViewModelContext *)local_168.Object;
      local_58.SharedReferenceCount.ReferenceController =
           local_168.SharedReferenceCount.ReferenceController;
      pFVar7->RewardSlotType = Point;
      if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_UserObjectListItem::AddContext(pUVar12,&local_58);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_168.SharedReferenceCount.ReferenceController);
    local_138[0] = pUVar12;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar12);
    }
    FDS_EntryBindingEventField::Add(pFVar20,(TObjectPtr<UDS_UserObjectListItem>)local_138);
  }
LAB_14be50fa7:
  iVar10 = FFieldNotificationClassDescriptor::IsRewardItem.BitNumber;
  FVar4 = FFieldNotificationClassDescriptor::IsRewardItem.FieldName;
  if (this->IsRewardItem != local_res10) {
    this->IsRewardItem = local_res10;
    local_120 = iVar10;
    local_128 = FVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_128);
  }
  iVar10 = FFieldNotificationClassDescriptor::IsRewardPoint.BitNumber;
  FVar4 = FFieldNotificationClassDescriptor::IsRewardPoint.FieldName;
  if (this->IsRewardPoint != false) {
    this->IsRewardPoint = false;
    local_110 = iVar10;
    local_118 = FVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_118);
  }
  local_100 = FFieldNotificationClassDescriptor::EntryBindingEventField_RewardList.BitNumber;
  local_108 = FFieldNotificationClassDescriptor::EntryBindingEventField_RewardList.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_108);
  return;
}

// SetRewardMoney @ 14be51070

void __thiscall UDS_VM_QuestData::SetRewardMoney(UDS_VM_QuestData *this)

{
  code *pcVar1;
  bool bVar2;
  FDS_QuestBaseTableRow *this_00;
  FDS_QuestRewardTableRow *this_01;
  FScriptContainerElement FVar3;
  long64 lVar4;
  long64 lVar5;
  UDS_VM_QuestData *local_res8;
  FName local_38;
  int local_30;
  FName local_28;
  int local_20;
  
  local_res8 = this;
  if (0 < this->QuestID) {
    this_00 = FDS_QuestBaseTableRow::GetRef((longlong)this->QuestID,true);
    bVar2 = FDS_QuestBaseTableRow::IsValid(this_00);
    if ((bVar2) && (0 < this_00->ID_QuestRewardId)) {
      this_01 = FDS_QuestRewardTableRow::GetRef((longlong)this_00->ID_QuestRewardId,true);
      bVar2 = FDS_QuestRewardTableRow::IsValid(this_01);
      if (bVar2) {
        FVar3 = (FScriptContainerElement)0x0;
        lVar4 = 0;
        lVar5 = lVar4;
        if ((0 < (this_01->RewardMoneyType).ArrayNum) &&
           (lVar5 = 0, 0 < (this_01->RewardMoneyCount).ArrayNum)) {
          FVar3 = *(this_01->RewardMoneyType).AllocatorInstance.Data;
          if ((this_01->RewardMoneyCount).ArrayNum < 1) {
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          lVar5 = *(long64 *)(this_01->RewardMoneyCount).AllocatorInstance.Data;
        }
        `UDS_VM_QuestData::SetRewardMoney'::__l2::<lambda_1>::operator()
                  (&local_res8,&this->VM_MoneyDisplay1,(EDS_MoneyType)FVar3,lVar5);
        FVar3 = (FScriptContainerElement)0x0;
        if ((1 < (this_01->RewardMoneyType).ArrayNum) && (1 < (this_01->RewardMoneyCount).ArrayNum))
        {
          FVar3 = (this_01->RewardMoneyType).AllocatorInstance.Data[1];
          if ((this_01->RewardMoneyCount).ArrayNum < 2) {
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          lVar4 = *(long64 *)((this_01->RewardMoneyCount).AllocatorInstance.Data + 8);
        }
        `UDS_VM_QuestData::SetRewardMoney'::__l2::<lambda_1>::operator()
                  (&local_res8,&this->VM_MoneyDisplay2,(EDS_MoneyType)FVar3,lVar4);
      }
    }
  }
  local_30 = FFieldNotificationClassDescriptor::VM_MoneyDisplay1.BitNumber;
  local_38 = FFieldNotificationClassDescriptor::VM_MoneyDisplay1.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
  local_20 = FFieldNotificationClassDescriptor::VM_MoneyDisplay2.BitNumber;
  local_28 = FFieldNotificationClassDescriptor::VM_MoneyDisplay2.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  return;
}

// SetSectionStory @ 14be51540

void __thiscall UDS_VM_QuestData::SetSectionStory(UDS_VM_QuestData *this)

{
  EDS_QuestType EVar1;
  bool bVar2;
  FDS_QuestMainTableRow *this_00;
  FName local_18;
  int local_10;
  
  FDS_Text::Reset(&this->SectionStory);
  if ((0 < this->QuestID) && (EVar1 = UDS_QuestManager::GetQuestType(this->QuestID), EVar1 == Main))
  {
    this_00 = FDS_QuestMainTableRow::GetRef((longlong)this->QuestID,true);
    bVar2 = FDS_QuestMainTableRow::IsValid(this_00);
    if (bVar2) {
      FDS_Text::SetTextFromStringID(&this->SectionStory,&this_00->ID_SectionStory);
    }
  }
  local_10 = FFieldNotificationClassDescriptor::SectionStory.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SectionStory.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetSectionTitle @ 14be515e0

void __thiscall UDS_VM_QuestData::SetSectionTitle(UDS_VM_QuestData *this)

{
  EDS_QuestType EVar1;
  bool bVar2;
  FDS_QuestMainTableRow *this_00;
  FName local_18;
  int local_10;
  
  FDS_Text::Reset(&this->SectionTitle);
  if ((0 < this->QuestID) && (EVar1 = UDS_QuestManager::GetQuestType(this->QuestID), EVar1 == Main))
  {
    this_00 = FDS_QuestMainTableRow::GetRef((longlong)this->QuestID,true);
    bVar2 = FDS_QuestMainTableRow::IsValid(this_00);
    if (bVar2) {
      FDS_Text::SetTextFromStringID(&this->SectionTitle,&this_00->ID_SectionTitle);
    }
  }
  local_10 = FFieldNotificationClassDescriptor::SectionTitle.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SectionTitle.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

