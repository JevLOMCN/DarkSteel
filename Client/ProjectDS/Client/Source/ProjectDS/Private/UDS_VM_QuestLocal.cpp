// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 35

// SetClickAbandonButton_WrapperImpl @ 14b6c6800

void __cdecl UDS_VM_QuestLocal::SetClickAbandonButton_WrapperImpl(void *param_1,void *param_2)

{
  UDS_QuestManager *this;
  
  if (*(char *)((longlong)param_2 + 3) != '\x01') {
    this = UDS_QuestManager::GetInst();
    if (this != (UDS_QuestManager *)0x0) {
      UDS_QuestManager::OnReqCancelQuest(this,*(int *)((longlong)param_1 + 0x274));
      return;
    }
  }
  return;
}

// SetClickTraceButton_WrapperImpl @ 14b6c6810

void __cdecl UDS_VM_QuestLocal::SetClickTraceButton_WrapperImpl(void *param_1,void *param_2)

{
  UDS_QuestManager *this;
  
  if (*(char *)((longlong)param_2 + 3) != '\x01') {
    this = UDS_QuestManager::GetInst();
    if (this != (UDS_QuestManager *)0x0) {
      UDS_QuestManager::OnReqQuestTrace(this,*(int *)((longlong)param_1 + 0x274));
      return;
    }
  }
  return;
}

// SetClickNpcTraceButton_WrapperImpl @ 14b6c6820

void __cdecl UDS_VM_QuestLocal::SetClickNpcTraceButton_WrapperImpl(void *param_1,void *param_2)

{
  UDS_QuestManager *this;
  
  if (*(char *)((longlong)param_2 + 3) != '\x01') {
    this = UDS_QuestManager::GetInst();
    if (this != (UDS_QuestManager *)0x0) {
      UDS_QuestManager::SetTraceQuestID(this,*(int *)((longlong)param_1 + 0x274));
      return;
    }
  }
  return;
}

// SetDisabledAbandonButton_WrapperImpl @ 14b6c6830

void __cdecl UDS_VM_QuestLocal::SetDisabledAbandonButton_WrapperImpl(void *param_1,void *param_2)

{
  SetDisabledAbandonButton(param_1,*(bool *)param_2);
  return;
}

// SetDisabledTraceButton_WrapperImpl @ 14b6c6840

void __cdecl UDS_VM_QuestLocal::SetDisabledTraceButton_WrapperImpl(void *param_1,void *param_2)

{
  SetDisabledTraceButton(param_1,*(bool *)param_2);
  return;
}

// SetDisabledNpcTraceButton_WrapperImpl @ 14b6c6850

void __cdecl UDS_VM_QuestLocal::SetDisabledNpcTraceButton_WrapperImpl(void *param_1,void *param_2)

{
  SetDisabledNpcTraceButton(param_1,*(bool *)param_2);
  return;
}

// SetCheckBoxShowAllQuest_WrapperImpl @ 14b6c6860

void __cdecl UDS_VM_QuestLocal::SetCheckBoxShowAllQuest_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  UDS_QuestLocalSave *this;
  FWeakObjectPtr FStackX_8;
  
  UDS_QuestLocalSave::GetInst();
  bVar1 = FWeakObjectPtr::IsValid(&FStackX_8);
  if (bVar1) {
    this = (UDS_QuestLocalSave *)FWeakObjectPtr::Get(&FStackX_8);
    UDS_QuestLocalSave::SetShowAllQuestLocalOption(this,*(bool *)param_2);
  }
  if (*(char *)((longlong)param_1 + 0x11c) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0x11c) = *(char *)param_2;
    UpdateQuestList(param_1);
  }
  return;
}

// StaticClass @ 14b6c68b0

UClass * __cdecl UDS_VM_QuestLocal::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_QuestLocal.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_QuestLocal",
               &Z_Registration_Info_UClass_UDS_VM_QuestLocal.InnerSingleton,
               StaticRegisterNativesUDS_VM_QuestLocal,0x280,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_QuestLocal>,
               InternalVTableHelperCtorCaller<UDS_VM_QuestLocal>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_QuestLocal.InnerSingleton;
}

// UDS_VM_QuestLocal @ 14b6c9d30

UDS_VM_QuestLocal * __thiscall
UDS_VM_QuestLocal::UDS_VM_QuestLocal(UDS_VM_QuestLocal *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestLocal__6B_;
  (this->EntryBindingEventField_QuestList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_QuestList).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_QuestList).UserObjectList.ArrayMax = 0;
  (this->EntryFocusEventField_QuestList).FocusIndex = 0;
  (this->EntryFocusEventField_QuestList).Offset = 0.0;
  (this->ClickAbandonButton)._padding_ = '\0';
  (this->ClickAbandonButton).bIsCustomSelected = false;
  (this->ClickAbandonButton).bIsLacked = false;
  (this->ClickAbandonButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickAbandonButton).Delegate = 0;
  *(undefined8 *)&(this->ClickAbandonButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickAbandonButton).Delegate.field_0x10 = 0;
  (this->ClickTraceButton)._padding_ = '\0';
  (this->ClickTraceButton).bIsCustomSelected = false;
  (this->ClickTraceButton).bIsLacked = false;
  (this->ClickTraceButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickTraceButton).Delegate = 0;
  *(undefined8 *)&(this->ClickTraceButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickTraceButton).Delegate.field_0x10 = 0;
  (this->ClickNpcTraceButton)._padding_ = '\0';
  (this->ClickNpcTraceButton).bIsCustomSelected = false;
  (this->ClickNpcTraceButton).bIsLacked = false;
  (this->ClickNpcTraceButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickNpcTraceButton).Delegate = 0;
  *(undefined8 *)&(this->ClickNpcTraceButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickNpcTraceButton).Delegate.field_0x10 = 0;
  (this->CheckBoxShowAllQuest).bIsActivate = false;
  (this->VM_QuestInfo).field0_0x0.DebugPtr = (UDS_VM_QuestInfo *)0x0;
  (this->TabGroup).field0_0x0.DebugPtr = (UDS_VM_Common_TabGroup *)0x0;
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
  (this->FixedText_Btn_NpcTrace).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_NpcTrace).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_NpcTrace).DateTime.Ticks = 0;
  (this->FixedText_Btn_NpcTrace).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_NpcTrace).TimeExpressionType = None;
  (this->FixedText_Btn_NpcTrace).IsExpression = false;
  (this->FixedText_Btn_NpcTrace).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_NpcTrace).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_NpcTrace).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_NpcTrace).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_NpcTrace).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_NpcTrace).FormatArgs.ArrayMax = 0;
  (this->FixedText_Check_ShowAll).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Check_ShowAll).StringEnumTableNameID.Number = 0;
  (this->FixedText_Check_ShowAll).DateTime.Ticks = 0;
  (this->FixedText_Check_ShowAll).TimeSpan.Ticks = 0;
  (this->FixedText_Check_ShowAll).TimeExpressionType = None;
  (this->FixedText_Check_ShowAll).IsExpression = false;
  (this->FixedText_Check_ShowAll).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Check_ShowAll).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Check_ShowAll).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Check_ShowAll).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedText_Check_ShowAll).FormatArgs.ArrayNum = 0;
  (this->FixedText_Check_ShowAll).FormatArgs.ArrayMax = 0;
  this->SelectedQuestID = 0;
  this->QuestCategory = 0;
  (this->FixedText_Btn_Abandon).StringTableType = StringUi;
  (this->FixedText_Btn_Abandon).StringTableID = 0xeb8e;
  (this->FixedText_Btn_Trace).StringTableType = StringUi;
  (this->FixedText_Btn_Trace).StringTableID = 0xeb8f;
  (this->FixedText_Btn_NpcTrace).StringTableType = StringUi;
  (this->FixedText_Btn_NpcTrace).StringTableID = 0xeb41;
  (this->FixedText_Check_ShowAll).StringTableType = StringUi;
  (this->FixedText_Check_ShowAll).StringTableID = 0xec59;
  return this;
}

// UDS_VM_QuestLocal @ 14b6c9f30

UDS_VM_QuestLocal * __thiscall
UDS_VM_QuestLocal::UDS_VM_QuestLocal(UDS_VM_QuestLocal *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestLocal__6B_;
  (this->EntryBindingEventField_QuestList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_QuestList).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_QuestList).UserObjectList.ArrayMax = 0;
  (this->EntryFocusEventField_QuestList).FocusIndex = 0;
  (this->EntryFocusEventField_QuestList).Offset = 0.0;
  (this->ClickAbandonButton)._padding_ = '\0';
  (this->ClickAbandonButton).bIsCustomSelected = false;
  (this->ClickAbandonButton).bIsLacked = false;
  (this->ClickAbandonButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickAbandonButton).Delegate = 0;
  *(undefined8 *)&(this->ClickAbandonButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickAbandonButton).Delegate.field_0x10 = 0;
  (this->ClickTraceButton)._padding_ = '\0';
  (this->ClickTraceButton).bIsCustomSelected = false;
  (this->ClickTraceButton).bIsLacked = false;
  (this->ClickTraceButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickTraceButton).Delegate = 0;
  *(undefined8 *)&(this->ClickTraceButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickTraceButton).Delegate.field_0x10 = 0;
  (this->ClickNpcTraceButton)._padding_ = '\0';
  (this->ClickNpcTraceButton).bIsCustomSelected = false;
  (this->ClickNpcTraceButton).bIsLacked = false;
  (this->ClickNpcTraceButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickNpcTraceButton).Delegate = 0;
  *(undefined8 *)&(this->ClickNpcTraceButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickNpcTraceButton).Delegate.field_0x10 = 0;
  (this->CheckBoxShowAllQuest).bIsActivate = false;
  (this->VM_QuestInfo).field0_0x0.DebugPtr = (UDS_VM_QuestInfo *)0x0;
  (this->TabGroup).field0_0x0.DebugPtr = (UDS_VM_Common_TabGroup *)0x0;
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
  (this->FixedText_Btn_NpcTrace).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_NpcTrace).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_NpcTrace).DateTime.Ticks = 0;
  (this->FixedText_Btn_NpcTrace).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_NpcTrace).TimeExpressionType = None;
  (this->FixedText_Btn_NpcTrace).IsExpression = false;
  (this->FixedText_Btn_NpcTrace).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_NpcTrace).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_NpcTrace).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_NpcTrace).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_NpcTrace).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_NpcTrace).FormatArgs.ArrayMax = 0;
  (this->FixedText_Check_ShowAll).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Check_ShowAll).StringEnumTableNameID.Number = 0;
  (this->FixedText_Check_ShowAll).DateTime.Ticks = 0;
  (this->FixedText_Check_ShowAll).TimeSpan.Ticks = 0;
  (this->FixedText_Check_ShowAll).TimeExpressionType = None;
  (this->FixedText_Check_ShowAll).IsExpression = false;
  (this->FixedText_Check_ShowAll).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Check_ShowAll).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Check_ShowAll).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Check_ShowAll).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedText_Check_ShowAll).FormatArgs.ArrayNum = 0;
  (this->FixedText_Check_ShowAll).FormatArgs.ArrayMax = 0;
  this->SelectedQuestID = 0;
  this->QuestCategory = 0;
  (this->FixedText_Btn_Abandon).StringTableType = StringUi;
  (this->FixedText_Btn_Abandon).StringTableID = 0xeb8e;
  (this->FixedText_Btn_Trace).StringTableType = StringUi;
  (this->FixedText_Btn_Trace).StringTableID = 0xeb8f;
  (this->FixedText_Btn_NpcTrace).StringTableType = StringUi;
  (this->FixedText_Btn_NpcTrace).StringTableID = 0xeb41;
  (this->FixedText_Check_ShowAll).StringTableType = StringUi;
  (this->FixedText_Check_ShowAll).StringTableID = 0xec59;
  return this;
}

// ~UDS_VM_QuestLocal @ 14b6cc310

void __thiscall UDS_VM_QuestLocal::~UDS_VM_QuestLocal(UDS_VM_QuestLocal *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestLocal__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Check_ShowAll).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Check_ShowAll).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Check_ShowAll).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Check_ShowAll).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Btn_NpcTrace).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_NpcTrace).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_NpcTrace).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_NpcTrace).UniqueString.Data.AllocatorInstance.Data;
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
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickNpcTraceButton).Delegate);
  pvVar2 = *(void **)&(this->ClickNpcTraceButton).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickNpcTraceButton).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickTraceButton).Delegate);
  pvVar2 = *(void **)&(this->ClickTraceButton).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickTraceButton).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickAbandonButton).Delegate);
  pvVar2 = *(void **)&(this->ClickAbandonButton).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickAbandonButton).Delegate);
  pFVar1 = (this->EntryBindingEventField_QuestList).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6cf7d0

IClassDescriptor * __thiscall
UDS_VM_QuestLocal::GetFieldNotificationDescriptor(UDS_VM_QuestLocal *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_QuestLocal::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6d0300

UClass * __cdecl UDS_VM_QuestLocal::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_QuestLocal.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_QuestLocal",
               &Z_Registration_Info_UClass_UDS_VM_QuestLocal.InnerSingleton,
               StaticRegisterNativesUDS_VM_QuestLocal,0x280,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_QuestLocal>,
               InternalVTableHelperCtorCaller<UDS_VM_QuestLocal>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_QuestLocal.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_QuestLocal @ 14b6d1010

void __cdecl UDS_VM_QuestLocal::StaticRegisterNativesUDS_VM_QuestLocal(void)

{
  return;
}

// BindModel @ 14bf41950

void __thiscall UDS_VM_QuestLocal::BindModel(UDS_VM_QuestLocal *this)

{
  TObjectPtr<UDS_VM_Common_TabGroup>_u_0 TVar1;
  UDS_QuestEvent *pUVar2;
  UDS_UIEvent *pUVar3;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  FWeakObjectPtr local_res10;
  TObjectPtr<UDS_VM_Common_TabGroup>_u_0 local_res18;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar2 = UDS_QuestEvent::GetEvent();
  if (pUVar2 != (UDS_QuestEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnUpdateQuestDataDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_QuestLocal>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar2->OnUpdateQuestDataDelegate,(UDS_VM_QuestLocal *)&local_res10,
               (pmf_5598f136 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnChangedTraceQuestDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_QuestLocal>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar2->OnChangedTraceQuestDelegate,(UDS_VM_QuestLocal *)&local_res10,
               (pmf_5598f136 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnSelectedQuestDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_QuestLocal>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar2->OnSelectedQuestDelegate,(UDS_VM_QuestLocal *)&local_res10,
               (pmf_5598f136 *)this);
  }
  pUVar3 = UDS_UIEvent::GetEvent();
  if (pUVar3 != (UDS_UIEvent *)0x0) {
    TVar1 = (TObjectPtr<UDS_VM_Common_TabGroup>_u_0)(this->TabGroup).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (TVar1.DebugPtr != (UDS_VM_Common_TabGroup *)0x0) {
        UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.DebugPtr != (UDS_VM_Common_TabGroup *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
      }
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18 = TVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar1.DebugPtr != (UDS_VM_Common_TabGroup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
    this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
              TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>_>
              ::FindOrAddImpl<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&>
                        ((TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>_>
                          *)&(pUVar3->OnSelectedTabIndex).Subscriptions,
                         local_res10.ObjectSerialNumber ^ local_res10.ObjectIndex,
                         (TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_res10);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(this_00,this);
    TMulticastDelegateRegistration<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>::
    AddUObject<UDS_VM_QuestLocal>
              ((TMulticastDelegateRegistration<void___cdecl(int,int),FDefaultTSDelegateUserPolicy> *
               )this_00,(UDS_VM_QuestLocal *)&local_res18.ObjectPtr,(pmf_3a159cb0 *)this);
  }
  return;
}

// InitViewModel @ 14bf5b690

void __thiscall UDS_VM_QuestLocal::InitViewModel(UDS_VM_QuestLocal *this)

{
  return;
}

// OnChangeSelectQuest @ 14bf5f1e0

void __thiscall UDS_VM_QuestLocal::OnChangeSelectQuest(UDS_VM_QuestLocal *this,int param_1)

{
  code *pcVar1;
  FName FVar2;
  FDS_ViewModelContext_Quest *pFVar3;
  bool bVar4;
  EDS_QuestConditionType EVar5;
  int iVar6;
  UDS_VM_QuestInfo *pUVar7;
  UDS_QuestManager *this_00;
  FName *pFVar8;
  FName local_58;
  int local_50;
  FName local_48;
  int local_40;
  FName local_38;
  int local_30;
  TSharedPtr<FDS_ViewModelContext_Quest,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pUVar7 = (this->VM_QuestInfo).field0_0x0.DebugPtr;
  this->SelectedQuestID = param_1;
  if (pUVar7 == (UDS_VM_QuestInfo *)0x0) {
    pUVar7 = UDS_ViewModelBase::CreateViewModel<UDS_VM_QuestInfo>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UDS_VM_QuestInfo *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    (this->VM_QuestInfo).field0_0x0.DebugPtr = pUVar7;
    if (pUVar7 == (UDS_VM_QuestInfo *)0x0) goto LAB_14bf5f2cb;
  }
  MakeContext<FDS_ViewModelContext_Quest>(&local_28);
  pFVar3 = local_28.Object;
  if (local_28.Object != (FDS_ViewModelContext_Quest *)0x0) {
    if ((local_28.Object == (FDS_ViewModelContext_Quest *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)&pFVar3->_padding_ = 0x76;
    pFVar3->QuestID = this->SelectedQuestID;
    pUVar7 = (this->VM_QuestInfo).field0_0x0.DebugPtr;
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
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar7,&local_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
LAB_14bf5f2cb:
  this_00 = UDS_QuestManager::GetInst();
  if (this_00 != (UDS_QuestManager *)0x0) {
    bVar4 = UDS_QuestManager::HasQuestData(this->SelectedQuestID);
    if ((bVar4) &&
       (EVar5 = UDS_QuestManager::GetQuestConditionType(this_00,this->SelectedQuestID,0),
       EVar5 == InProgress)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    iVar6 = FFieldNotificationClassDescriptor::DisabledAbandonButton.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::DisabledAbandonButton.FieldName;
    if (this->DisabledAbandonButton != bVar4) {
      this->DisabledAbandonButton = bVar4;
      local_50 = iVar6;
      local_58 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
    }
    bVar4 = UDS_QuestManager::HasQuestData(this->SelectedQuestID);
    if (bVar4) {
      iVar6 = UDS_QuestManager::GetTraceQuestID(this_00);
      bVar4 = iVar6 == param_1;
      if (this->DisabledTraceButton == bVar4) {
        return;
      }
      local_48 = FFieldNotificationClassDescriptor::DisabledTraceButton.FieldName;
      pFVar8 = &local_48;
      local_40 = FFieldNotificationClassDescriptor::DisabledTraceButton.BitNumber;
    }
    else {
      iVar6 = UDS_QuestManager::GetTraceQuestID(this_00);
      if ((iVar6 == param_1) ||
         (EVar5 = UDS_QuestManager::GetQuestConditionType(this_00,this->SelectedQuestID,0),
         EVar5 != AbleAccept)) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (this->DisabledTraceButton == bVar4) {
        return;
      }
      local_38 = FFieldNotificationClassDescriptor::DisabledTraceButton.FieldName;
      pFVar8 = &local_38;
      local_30 = FFieldNotificationClassDescriptor::DisabledTraceButton.BitNumber;
    }
    this->DisabledTraceButton = bVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar8);
  }
  return;
}

// OnChangeTraceQuestID @ 14bf5fa70

void __thiscall UDS_VM_QuestLocal::OnChangeTraceQuestID(UDS_VM_QuestLocal *this,int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  EDS_QuestConditionType EVar4;
  UDS_QuestManager *this_00;
  longlong lVar5;
  FName FVar6;
  FName local_18;
  int local_10;
  
  this_00 = UDS_QuestManager::GetInst();
  if (this_00 != (UDS_QuestManager *)0x0) {
    bVar3 = UDS_QuestManager::HasQuestData(this->SelectedQuestID);
    iVar1 = FFieldNotificationClassDescriptor::DisabledNpcTraceButton.BitNumber;
    FVar6 = FFieldNotificationClassDescriptor::DisabledNpcTraceButton.FieldName;
    if ((bVar3) || (bVar3 = false, this->SelectedQuestID == param_1)) {
      bVar3 = true;
    }
    if (this->DisabledNpcTraceButton != bVar3) {
      this->DisabledNpcTraceButton = bVar3;
      local_10 = iVar1;
      local_18 = FVar6;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    bVar3 = UDS_QuestManager::HasQuestData(this->SelectedQuestID);
    iVar2 = FFieldNotificationClassDescriptor::DisabledTraceButton.BitNumber;
    FVar6 = FFieldNotificationClassDescriptor::DisabledTraceButton.FieldName;
    iVar1 = this->SelectedQuestID;
    if (bVar3) {
      if (this->DisabledTraceButton == (iVar1 == param_1)) {
        return;
      }
      this->DisabledTraceButton = iVar1 == param_1;
      lVar5 = this->_padding_;
      local_10 = iVar2;
    }
    else {
      if ((iVar1 == param_1) ||
         (EVar4 = UDS_QuestManager::GetQuestConditionType(this_00,iVar1,0), EVar4 != AbleAccept)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      local_10 = FFieldNotificationClassDescriptor::DisabledTraceButton.BitNumber;
      FVar6 = FFieldNotificationClassDescriptor::DisabledTraceButton.FieldName;
      if (this->DisabledTraceButton == bVar3) {
        return;
      }
      this->DisabledTraceButton = bVar3;
      lVar5 = this->_padding_;
    }
    local_18 = FVar6;
    (**(code **)(lVar5 + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnCheckBoxShowAllQuest @ 14bf61270

void __thiscall
UDS_VM_QuestLocal::OnCheckBoxShowAllQuest(UDS_VM_QuestLocal *this,FDS_WidgetEventField *param_1)

{
  bool bVar1;
  UDS_QuestLocalSave *this_00;
  FWeakObjectPtr local_res8;
  
  UDS_QuestLocalSave::GetInst();
  bVar1 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar1) {
    this_00 = (UDS_QuestLocalSave *)FWeakObjectPtr::Get(&local_res8);
    UDS_QuestLocalSave::SetShowAllQuestLocalOption(this_00,param_1->bIsActivate);
  }
  if (this->ShowAllQuest != param_1->bIsActivate) {
    this->ShowAllQuest = param_1->bIsActivate;
    UpdateQuestList(this);
  }
  return;
}

// OnClickAbandonButton @ 14bf613d0

void __thiscall
UDS_VM_QuestLocal::OnClickAbandonButton(UDS_VM_QuestLocal *this,FDS_ButtonEventField *param_1)

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

// OnClickNpcTraceButton @ 14bf62430

void __thiscall
UDS_VM_QuestLocal::OnClickNpcTraceButton(UDS_VM_QuestLocal *this,FDS_ButtonEventField *param_1)

{
  UDS_QuestManager *this_00;
  
  if (param_1->bIsCustomDisabled != true) {
    this_00 = UDS_QuestManager::GetInst();
    if (this_00 != (UDS_QuestManager *)0x0) {
      UDS_QuestManager::SetTraceQuestID(this_00,this->SelectedQuestID);
      return;
    }
  }
  return;
}

// OnClickTraceButton @ 14bf62e40

void __thiscall
UDS_VM_QuestLocal::OnClickTraceButton(UDS_VM_QuestLocal *this,FDS_ButtonEventField *param_1)

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

// OnSelectedTabIndex @ 14bf67a70

void __thiscall
UDS_VM_QuestLocal::OnSelectedTabIndex(UDS_VM_QuestLocal *this,int param_1,int param_2)

{
  UDS_QuestManager *this_00;
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  if (this->QuestCategory != param_2) {
    this->QuestCategory = param_2;
    this_00 = UDS_QuestManager::GetInst();
    if (this_00 != (UDS_QuestManager *)0x0) {
      UDS_QuestManager::GetQuestList
                (this_00,&local_18,Local,this->QuestCategory,true,this->ShowAllQuest == false,true);
      if (0 < local_18.ArrayNum) {
        OnChangeSelectQuest(this,*(int *)local_18.AllocatorInstance.Data);
      }
      if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
    }
    UpdateQuestList(this);
    return;
  }
  return;
}

// OnSetViewModel @ 14bf6b020

void __thiscall
UDS_VM_QuestLocal::OnSetViewModel
          (UDS_VM_QuestLocal *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  FName FVar1;
  int iVar2;
  bool bVar3;
  UDS_QuestManager *pUVar4;
  UObject *pUVar5;
  FWeakObjectPtr local_res10 [3];
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext_ContentsOpen,1> local_18;
  
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
  SafeCast<FDS_ViewModelContext_ContentsOpen>(&local_18,&local_28);
  if (local_18.Object != (FDS_ViewModelContext_ContentsOpen *)0x0) {
    pUVar4 = UDS_QuestManager::GetInst();
    if (pUVar4 != (UDS_QuestManager *)0x0) {
      UDS_QuestLocalSave::GetInst();
      bVar3 = FWeakObjectPtr::IsValid(local_res10);
      if (bVar3) {
        pUVar5 = FWeakObjectPtr::Get(local_res10);
        iVar2 = FFieldNotificationClassDescriptor::ShowAllQuest.BitNumber;
        FVar1 = FFieldNotificationClassDescriptor::ShowAllQuest.FieldName;
        if (this->ShowAllQuest != (bool)pUVar5[1].field_0x10) {
          this->ShowAllQuest = (bool)pUVar5[1].field_0x10;
          local_28.SharedReferenceCount.ReferenceController._0_4_ = iVar2;
          local_28.Object = (FDS_ViewModelContext *)FVar1;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
        }
      }
      SetVM_CommonTabGroup(this);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdateQuestData @ 14bf72740

void __thiscall UDS_VM_QuestLocal::OnUpdateQuestData(UDS_VM_QuestLocal *this,int param_1)

{
  bool bVar1;
  EDS_QuestConditionType EVar2;
  UDS_QuestManager *this_00;
  FName local_18;
  int local_10;
  
  this_00 = UDS_QuestManager::GetInst();
  if (this_00 != (UDS_QuestManager *)0x0) {
    bVar1 = UDS_QuestManager::HasQuestData(this->SelectedQuestID);
    if ((bVar1) &&
       (EVar2 = UDS_QuestManager::GetQuestConditionType(this_00,this->SelectedQuestID,0),
       EVar2 == InProgress)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    local_18 = FFieldNotificationClassDescriptor::DisabledAbandonButton.FieldName;
    if (this->DisabledAbandonButton != bVar1) {
      local_10 = FFieldNotificationClassDescriptor::DisabledAbandonButton.BitNumber;
      this->DisabledAbandonButton = bVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    return;
  }
  return;
}

// SetDisabledAbandonButton @ 14bf7a830

void __thiscall UDS_VM_QuestLocal::SetDisabledAbandonButton(UDS_VM_QuestLocal *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::DisabledAbandonButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::DisabledAbandonButton.FieldName;
  if (this->DisabledAbandonButton != param_1) {
    this->DisabledAbandonButton = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetDisabledNpcTraceButton @ 14bf7a8d0

void __thiscall UDS_VM_QuestLocal::SetDisabledNpcTraceButton(UDS_VM_QuestLocal *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::DisabledNpcTraceButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::DisabledNpcTraceButton.FieldName;
  if (this->DisabledNpcTraceButton != param_1) {
    this->DisabledNpcTraceButton = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetDisabledTraceButton @ 14bf7a9c0

void __thiscall UDS_VM_QuestLocal::SetDisabledTraceButton(UDS_VM_QuestLocal *this,bool param_1)

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

// SetShowAllQuest @ 14bf7d560

void __thiscall UDS_VM_QuestLocal::SetShowAllQuest(UDS_VM_QuestLocal *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::ShowAllQuest.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ShowAllQuest.FieldName;
  if (this->ShowAllQuest != param_1) {
    this->ShowAllQuest = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVM_CommonTabGroup @ 14bf7f040

void __thiscall UDS_VM_QuestLocal::SetVM_CommonTabGroup(UDS_VM_QuestLocal *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  FDS_ViewModelContext_TabGroup *pFVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UDS_VM_Common_TabGroup *pUVar9;
  UDS_QuestManager *this_00;
  uint uVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  ForAnyElementType FVar13;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  ForAnyElementType local_138;
  uint local_130;
  uint local_12c;
  undefined4 local_128;
  undefined4 local_124;
  FDS_Text local_120;
  undefined2 local_d0;
  FScriptContainerElement local_ce;
  TSharedPtr<FDS_ViewModelContext_TabGroup,1> local_c8;
  TArray<FDS_QuestCategoryTableRow_const_*,TSizedDefaultAllocator<32>_> local_b8;
  TArray<int,TSizedDefaultAllocator<32>_> local_a8;
  FDS_Text local_98;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  
  if ((this->TabGroup).field0_0x0.DebugPtr == (UDS_VM_Common_TabGroup *)0x0) {
    pUVar9 = UDS_ViewModelBase::CreateViewModel<UDS_VM_Common_TabGroup>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar9 != (UDS_VM_Common_TabGroup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (this->TabGroup).field0_0x0.DebugPtr = pUVar9;
    if (pUVar9 == (UDS_VM_Common_TabGroup *)0x0) {
      return;
    }
  }
  FDS_QuestCategoryTableRow::GetAll(&local_b8);
  iVar8 = local_b8.ArrayNum;
  uVar10 = 0;
  local_130 = 0;
  local_138.Data = (FScriptContainerElement *)0x0;
  local_12c = 0;
  pFVar2 = local_b8.AllocatorInstance.Data + (longlong)local_b8.ArrayNum * 8;
  FVar13.Data = local_b8.AllocatorInstance.Data;
  while( true ) {
    uVar7 = uVar10;
    if (local_b8.ArrayNum != iVar8) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FDS_QuestCategoryTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
      uVar7 = local_130;
    }
    if (FVar13.Data == pFVar2) break;
    lVar3 = *(longlong *)FVar13.Data;
    uVar10 = uVar7;
    if (*(char *)(lVar3 + 0x20) == '\x02') {
      if (uVar7 == local_12c) {
        uVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_138,(int *)&local_12c);
      }
      uVar10 = uVar7 + 1;
      *(longlong *)(local_138.Data + (longlong)(int)uVar7 * 8) = lVar3;
      local_130 = uVar10;
    }
    FVar13.Data = FVar13.Data + 8;
  }
  MakeContext<FDS_ViewModelContext_TabGroup>(&local_c8);
  pFVar5 = local_c8.Object;
  if ((local_c8.Object == (FDS_ViewModelContext_TabGroup *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar10 = local_130;
  *(undefined4 *)&pFVar5->_padding_ = 0x162;
  pFVar5->SelectedIndex = 0;
  uVar11 = (ulonglong)(int)local_130;
  pFVar2 = local_138.Data + uVar11 * 8;
  FVar13.Data = local_138.Data;
  while( true ) {
    if ((uint)uVar11 != uVar10) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FDS_QuestCategoryTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (FVar13.Data == pFVar2) break;
    lVar3 = *(longlong *)FVar13.Data;
    if ((pFVar5 == (FDS_ViewModelContext_TabGroup *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_98.StringTableType = None;
    local_98.StringTableID = 0;
    local_98.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_98.StringEnumTableNameID.Number = 0;
    local_98.TimeExpressionType = None;
    local_98.DateTime.Ticks = 0;
    local_98.TimeSpan.Ticks = 0;
    local_98.IsExpression = false;
    local_98.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.UniqueString.Data.ArrayNum = 0;
    local_98.UniqueString.Data.ArrayMax = 0;
    local_98.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.FormatArgs.ArrayNum = 0;
    local_98.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringID(&local_98,(FDS_StringWorldID *)(lVar3 + 0x28));
    local_124 = *(undefined4 *)(lVar3 + 8);
    local_128 = 0xffffffff;
    FDS_Text::FDS_Text(&local_120,&local_98);
    local_d0 = 0;
    piVar1 = &(pFVar5->TabInfos).ArrayMax;
    local_ce = (FScriptContainerElement)0x0;
    iVar8 = (pFVar5->TabInfos).ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x860,&(pFVar5->TabInfos).AllocatorInstance,piVar1);
    }
    (pFVar5->TabInfos).ArrayNum = iVar8 + 1;
    pFVar12 = (pFVar5->TabInfos).AllocatorInstance.Data + (longlong)iVar8 * 0x60;
    *(undefined4 *)pFVar12 = local_128;
    *(undefined4 *)(pFVar12 + 4) = local_124;
    pFVar12[8] = (FScriptContainerElement)local_120.StringTableType;
    *(long64 *)(pFVar12 + 0x10) = local_120.StringTableID;
    *(FName *)(pFVar12 + 0x18) = local_120.StringEnumTableNameID;
    *(long64 *)(pFVar12 + 0x20) = local_120.DateTime.Ticks;
    *(long64 *)(pFVar12 + 0x28) = local_120.TimeSpan.Ticks;
    *(EDS_TimeExpression *)(pFVar12 + 0x30) = local_120.TimeExpressionType;
    *(undefined8 *)(pFVar12 + 0x38) = 0;
    pFVar12[0x34] = (FScriptContainerElement)local_120.IsExpression;
    *(FScriptContainerElement **)(pFVar12 + 0x38) =
         local_120.UniqueString.Data.AllocatorInstance.Data;
    local_120.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar12 + 0x40) = local_120.UniqueString.Data.ArrayNum;
    *(int *)(pFVar12 + 0x44) = local_120.UniqueString.Data.ArrayMax;
    local_120.UniqueString.Data.ArrayNum = 0;
    local_120.UniqueString.Data.ArrayMax = 0;
    *(undefined8 *)(pFVar12 + 0x48) = 0;
    *(FScriptContainerElement **)(pFVar12 + 0x48) = local_120.FormatArgs.AllocatorInstance.Data;
    local_120.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar12 + 0x50) = local_120.FormatArgs.ArrayNum;
    *(int *)(pFVar12 + 0x54) = local_120.FormatArgs.ArrayMax;
    local_120.FormatArgs.ArrayNum = 0;
    local_120.FormatArgs.ArrayMax = 0;
    pFVar12[0x58] = local_d0._0_1_;
    pFVar12[0x59] = local_d0._1_1_;
    pFVar12[0x5a] = local_ce;
    DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
    if (local_120.FormatArgs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.FormatArgs.AllocatorInstance.Data);
    }
    if (local_120.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.UniqueString.Data.AllocatorInstance.Data);
    }
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_98.FormatArgs.AllocatorInstance.Data,
               local_98.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_98.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
    {
      FMemory::Free(local_98.FormatArgs.AllocatorInstance.Data);
    }
    if (local_98.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.UniqueString.Data.AllocatorInstance.Data);
    }
    uVar11 = (ulonglong)local_130;
    FVar13.Data = FVar13.Data + 8;
  }
  pUVar9 = (this->TabGroup).field0_0x0.DebugPtr;
  local_48.Object = (FDS_ViewModelContext *)local_c8.Object;
  local_48.SharedReferenceCount.ReferenceController =
       local_c8.SharedReferenceCount.ReferenceController;
  if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar9,&local_48);
  if ((0 < (int)local_130) && (this->QuestCategory != *(int *)(*(longlong *)local_138.Data + 8))) {
    this->QuestCategory = *(int *)(*(longlong *)local_138.Data + 8);
    this_00 = UDS_QuestManager::GetInst();
    if (this_00 != (UDS_QuestManager *)0x0) {
      UDS_QuestManager::GetQuestList
                (this_00,&local_a8,Local,this->QuestCategory,true,this->ShowAllQuest == false,true);
      if (0 < local_a8.ArrayNum) {
        OnChangeSelectQuest(this,*(int *)local_a8.AllocatorInstance.Data);
      }
      if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.AllocatorInstance.Data);
      }
    }
    UpdateQuestList(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.SharedReferenceCount.ReferenceController);
  if (local_138.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data);
  }
  if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  return;
}

// SetVM_QuestInfo @ 14bf80630

void __thiscall UDS_VM_QuestLocal::SetVM_QuestInfo(UDS_VM_QuestLocal *this)

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

// SetVisibilityNpcTraceBtn @ 14bf81ef0

void __thiscall
UDS_VM_QuestLocal::SetVisibilityNpcTraceBtn(UDS_VM_QuestLocal *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::VisibilityNpcTraceBtn.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibilityNpcTraceBtn.FieldName;
  if (this->VisibilityNpcTraceBtn != *param_1) {
    this->VisibilityNpcTraceBtn = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVisibilityQuestTraceBtn @ 14bf81fe0

void __thiscall
UDS_VM_QuestLocal::SetVisibilityQuestTraceBtn(UDS_VM_QuestLocal *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::VisibilityQuestTraceBtn.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibilityQuestTraceBtn.FieldName;
  if (this->VisibilityQuestTraceBtn != *param_1) {
    this->VisibilityQuestTraceBtn = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14bf85200

void __thiscall UDS_VM_QuestLocal::UnbindModel(UDS_VM_QuestLocal *this)

{
  UDS_QuestEvent *pUVar1;
  UDS_UIEvent *pUVar2;
  
  pUVar1 = UDS_QuestEvent::GetEvent();
  if (pUVar1 != (UDS_QuestEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnUpdateQuestDataDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangedTraceQuestDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnSelectedQuestDelegate,this);
  }
  pUVar2 = UDS_UIEvent::GetEvent();
  if (pUVar2 != (UDS_UIEvent *)0x0) {
    FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_,int_const_>::
    Remove<UDS_VM_QuestLocal>(&pUVar2->OnSelectedTabIndex,this);
  }
  return;
}

// UpdateQuestList @ 14bf88b60

void __thiscall UDS_VM_QuestLocal::UpdateQuestList(UDS_VM_QuestLocal *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  UDS_QuestManager *this_00;
  UDS_UserObjectListItem *this_01;
  FDS_ViewModelContext *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  UScriptStruct *pUVar7;
  UDS_ViewModelContextManager *this_02;
  ulonglong uVar8;
  FDS_ViewModelContext *pFVar9;
  int iVar10;
  int iVar11;
  ForAnyElementType FVar12;
  undefined1 local_res8 [8];
  int local_res10;
  uint local_res18;
  UDS_UserObjectListItem *local_res20;
  FName local_98;
  int local_90;
  FName local_88;
  int local_80;
  TArray<int,TSizedDefaultAllocator<32>_> local_78;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_QuestList);
  this_00 = UDS_QuestManager::GetInst();
  if (this_00 != (UDS_QuestManager *)0x0) {
    UDS_QuestManager::GetQuestList
              (this_00,&local_78,Local,this->QuestCategory,true,this->ShowAllQuest == false,true);
    iVar11 = 0;
    local_res18 = local_78.ArrayNum;
    uVar8 = (ulonglong)(int)local_res18;
    local_res10 = 0;
    pFVar1 = local_78.AllocatorInstance.Data + uVar8 * 4;
    FVar12.Data = local_78.AllocatorInstance.Data;
    iVar10 = iVar11;
    while( true ) {
      pFVar9 = (FDS_ViewModelContext *)0x0;
      if (local_78.ArrayNum != (int)uVar8) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (FVar12.Data == pFVar1) break;
      iVar2 = *(int *)FVar12.Data;
      this_01 = NewObject<UDS_UserObjectListItem>((UObject *)this);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (this_01 == (UDS_UserObjectListItem *)0x0) goto LAB_14bf88e60;
      }
      else {
        if (this_01 == (UDS_UserObjectListItem *)0x0) goto LAB_14bf88e60;
        UE::GC::MarkAsReachable((UObject *)this_01);
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
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar7 = FDS_ViewModelContext_QuestListSlot::StaticStruct();
      pFVar9->DerivedStaticStruct = (UStruct *)pUVar7;
      this_02 = UDS_ViewModelContextManager::GetInst();
      if (this_02 != (UDS_ViewModelContextManager *)0x0) {
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_68.Object = pFVar9;
        local_68.SharedReferenceCount.ReferenceController = pTVar6;
        UDS_ViewModelContextManager::RegisterContext(this_02,&local_68);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.SharedReferenceCount.ReferenceController);
      }
      pFVar9->ViewModelTemplateKey = QuestLocalListSlot;
      *(int *)((longlong)&pFVar9[1]._padding_ + 4) = iVar2;
      *(bool *)&pFVar9[1]._padding_ = iVar2 == this->SelectedQuestID;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_58.Object = pFVar9;
      local_58.SharedReferenceCount.ReferenceController = pTVar6;
      UDS_UserObjectListItem::AddContext(this_01,&local_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      iVar10 = iVar11;
      if (this->SelectedQuestID != iVar2) {
        iVar10 = local_res10;
      }
      local_res10 = iVar10;
      local_res20 = this_01;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      FDS_EntryBindingEventField::Add
                (&this->EntryBindingEventField_QuestList,
                 (TObjectPtr<UDS_UserObjectListItem>)&local_res20);
      iVar11 = iVar11 + 1;
      uVar8 = (ulonglong)local_res18;
      FVar12.Data = FVar12.Data + 4;
    }
    local_90 = FFieldNotificationClassDescriptor::EntryBindingEventField_QuestList.BitNumber;
    local_98 = FFieldNotificationClassDescriptor::EntryBindingEventField_QuestList.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
    (this->EntryFocusEventField_QuestList).FocusIndex = iVar10;
    local_80 = FFieldNotificationClassDescriptor::EntryFocusEventField_QuestList.BitNumber;
    local_88 = FFieldNotificationClassDescriptor::EntryFocusEventField_QuestList.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
LAB_14bf88e60:
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
  }
  return;
}

