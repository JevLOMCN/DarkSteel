// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 28

// SetClickAcceptButton_WrapperImpl @ 14b71b690

void __cdecl UDS_VM_W_B_DailyQuest::SetClickAcceptButton_WrapperImpl(void *param_1,void *param_2)

{
  int iVar1;
  UDS_QuestManager *this;
  UDS_DailyQuestManager *pUVar2;
  UDS_QuestManager *pUVar3;
  int iVar4;
  undefined1 auStackX_18 [8];
  TArray<EDS_QuestType,TSizedDefaultAllocator<32>_> TStack_28;
  TArray<int,TSizedDefaultAllocator<32>_> TStack_18;
  
  this = UDS_QuestManager::GetInst();
  if ((this != (UDS_QuestManager *)0x0) &&
     (pUVar2 = UDS_DailyQuestManager::GetInst(), pUVar2 != (UDS_DailyQuestManager *)0x0)) {
    iVar1 = DS_CommonDataHelper::DailyQuestOngoing();
    pUVar3 = UDS_QuestManager::GetInst();
    iVar4 = 0;
    if (pUVar3 != (UDS_QuestManager *)0x0) {
      TStack_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      auStackX_18[0] = 5;
      TStack_28.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,1,0,&TStack_28.AllocatorInstance,1,&TStack_28.ArrayMax);
      memcpy(TStack_28.AllocatorInstance.Data,auStackX_18,1);
      UDS_QuestManager::GetQuestListByInProgress(&TStack_18,&TStack_28,false);
      iVar4 = TStack_18.ArrayNum;
      if (TStack_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(TStack_18.AllocatorInstance.Data);
      }
    }
    if (iVar1 <= iVar4) {
      OpenPopupProgressQuestCountOver(param_1);
      return;
    }
    UDS_QuestManager::OnReqAcceptQuest(this,*(int *)((longlong)param_1 + 0x270));
  }
  return;
}

// SetClickAbandonButton_WrapperImpl @ 14b71b6a0

void __cdecl UDS_VM_W_B_DailyQuest::SetClickAbandonButton_WrapperImpl(void *param_1,void *param_2)

{
  UDS_QuestManager *this;
  
  if (*(char *)((longlong)param_2 + 3) != '\x01') {
    this = UDS_QuestManager::GetInst();
    if (this != (UDS_QuestManager *)0x0) {
      UDS_QuestManager::OnReqCancelQuest(this,*(int *)((longlong)param_1 + 0x270));
      return;
    }
  }
  return;
}

// SetClickRewardsButton_WrapperImpl @ 14b71b6b0

void __cdecl UDS_VM_W_B_DailyQuest::SetClickRewardsButton_WrapperImpl(void *param_1,void *param_2)

{
  UDS_QuestManager *this;
  
  if (*(char *)((longlong)param_2 + 3) != '\x01') {
    this = UDS_QuestManager::GetInst();
    if (this != (UDS_QuestManager *)0x0) {
      UDS_QuestManager::OnReqQuestComplete(this,*(int *)((longlong)param_1 + 0x270));
      return;
    }
  }
  return;
}

// SetClickCloseButton_WrapperImpl @ 14b71b6c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_W_B_DailyQuest::SetClickCloseButton_WrapperImpl(void *param_1,void *param_2)

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
  UDS_WindowManager::CloseWindow(this,QuestDaily,auStackX_20,afStackX_18);
  return;
}

// SetDisabledRewardButton_WrapperImpl @ 14b71b6d0

void __cdecl UDS_VM_W_B_DailyQuest::SetDisabledRewardButton_WrapperImpl(void *param_1,void *param_2)

{
  SetDisabledRewardButton(param_1,*(bool *)param_2);
  return;
}

// StaticClass @ 14b71b6e0

UClass * __cdecl UDS_VM_W_B_DailyQuest::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_B_DailyQuest.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_B_DailyQuest",
               &Z_Registration_Info_UClass_UDS_VM_W_B_DailyQuest.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_B_DailyQuest,0x278,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_B_DailyQuest>,
               InternalVTableHelperCtorCaller<UDS_VM_W_B_DailyQuest>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_B_DailyQuest.InnerSingleton;
}

// UDS_VM_W_B_DailyQuest @ 14b71d540

UDS_VM_W_B_DailyQuest * __thiscall
UDS_VM_W_B_DailyQuest::UDS_VM_W_B_DailyQuest(UDS_VM_W_B_DailyQuest *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->VM_DailyQuestStatus).field0_0x0.DebugPtr = (UDS_VM_DailyQuestStatus *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_B_DailyQuest__6B_;
  (this->VM_ContentsPopupTitle).field0_0x0.DebugPtr = (UDS_VM_W_ContentsPopupTitle *)0x0;
  (this->EntryBindingEventField_QuestList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_QuestList).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_QuestList).UserObjectList.ArrayMax = 0;
  (this->EntryFocusEventField_QuestList).FocusIndex = 0;
  (this->EntryFocusEventField_QuestList).Offset = 0.0;
  (this->ClickAcceptButton)._padding_ = '\0';
  (this->ClickAcceptButton).bIsCustomSelected = false;
  (this->ClickAcceptButton).bIsLacked = false;
  (this->ClickAcceptButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickAcceptButton).Delegate = 0;
  *(undefined8 *)&(this->ClickAcceptButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickAcceptButton).Delegate.field_0x10 = 0;
  (this->ClickAbandonButton)._padding_ = '\0';
  (this->ClickAbandonButton).bIsCustomSelected = false;
  (this->ClickAbandonButton).bIsLacked = false;
  (this->ClickAbandonButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickAbandonButton).Delegate = 0;
  *(undefined8 *)&(this->ClickAbandonButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickAbandonButton).Delegate.field_0x10 = 0;
  (this->ClickRewardsButton)._padding_ = '\0';
  (this->ClickRewardsButton).bIsCustomSelected = false;
  (this->ClickRewardsButton).bIsLacked = false;
  (this->ClickRewardsButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickRewardsButton).Delegate = 0;
  *(undefined8 *)&(this->ClickRewardsButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickRewardsButton).Delegate.field_0x10 = 0;
  (this->ClickCloseButton)._padding_ = '\0';
  (this->ClickCloseButton).bIsCustomSelected = false;
  (this->ClickCloseButton).bIsLacked = false;
  (this->ClickCloseButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickCloseButton).Delegate = 0;
  *(undefined8 *)&(this->ClickCloseButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickCloseButton).Delegate.field_0x10 = 0;
  FText::FText(&this->QuestSuggestCountText);
  FText::FText(&this->QuestCompleteCountText);
  (this->VM_QuestInfo).field0_0x0.DebugPtr = (UDS_VM_QuestInfo *)0x0;
  (this->FixedText_Btn_Abandon).StringTableType = StringUi;
  (this->FixedText_Btn_Abandon).StringTableID = 0xeb8e;
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
  (this->FixedText_Btn_Rewards).StringTableType = StringUi;
  (this->FixedText_Btn_Rewards).StringTableID = 0xeb90;
  (this->FixedText_Btn_Rewards).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Rewards).StringEnumTableNameID.Number = 0;
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
  (this->FixedText_Btn_Accept).StringTableType = StringUi;
  (this->FixedText_Btn_Accept).StringTableID = 0xeb91;
  (this->FixedText_Btn_Accept).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Accept).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Accept).DateTime.Ticks = 0;
  (this->FixedText_Btn_Accept).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Accept).TimeExpressionType = None;
  (this->FixedText_Btn_Accept).IsExpression = false;
  (this->FixedText_Btn_Accept).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Accept).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Accept).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Accept).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Accept).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Accept).FormatArgs.ArrayMax = 0;
  this->SelectedQuestID = 0;
  this->SuggestID = 0;
  return this;
}

// UDS_VM_W_B_DailyQuest @ 14b71d730

UDS_VM_W_B_DailyQuest * __thiscall
UDS_VM_W_B_DailyQuest::UDS_VM_W_B_DailyQuest
          (UDS_VM_W_B_DailyQuest *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->VM_DailyQuestStatus).field0_0x0.DebugPtr = (UDS_VM_DailyQuestStatus *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_B_DailyQuest__6B_;
  (this->VM_ContentsPopupTitle).field0_0x0.DebugPtr = (UDS_VM_W_ContentsPopupTitle *)0x0;
  (this->EntryBindingEventField_QuestList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_QuestList).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_QuestList).UserObjectList.ArrayMax = 0;
  (this->EntryFocusEventField_QuestList).FocusIndex = 0;
  (this->EntryFocusEventField_QuestList).Offset = 0.0;
  (this->ClickAcceptButton)._padding_ = '\0';
  (this->ClickAcceptButton).bIsCustomSelected = false;
  (this->ClickAcceptButton).bIsLacked = false;
  (this->ClickAcceptButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickAcceptButton).Delegate = 0;
  *(undefined8 *)&(this->ClickAcceptButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickAcceptButton).Delegate.field_0x10 = 0;
  (this->ClickAbandonButton)._padding_ = '\0';
  (this->ClickAbandonButton).bIsCustomSelected = false;
  (this->ClickAbandonButton).bIsLacked = false;
  (this->ClickAbandonButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickAbandonButton).Delegate = 0;
  *(undefined8 *)&(this->ClickAbandonButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickAbandonButton).Delegate.field_0x10 = 0;
  (this->ClickRewardsButton)._padding_ = '\0';
  (this->ClickRewardsButton).bIsCustomSelected = false;
  (this->ClickRewardsButton).bIsLacked = false;
  (this->ClickRewardsButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickRewardsButton).Delegate = 0;
  *(undefined8 *)&(this->ClickRewardsButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickRewardsButton).Delegate.field_0x10 = 0;
  (this->ClickCloseButton)._padding_ = '\0';
  (this->ClickCloseButton).bIsCustomSelected = false;
  (this->ClickCloseButton).bIsLacked = false;
  (this->ClickCloseButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickCloseButton).Delegate = 0;
  *(undefined8 *)&(this->ClickCloseButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickCloseButton).Delegate.field_0x10 = 0;
  FText::FText(&this->QuestSuggestCountText);
  FText::FText(&this->QuestCompleteCountText);
  (this->VM_QuestInfo).field0_0x0.DebugPtr = (UDS_VM_QuestInfo *)0x0;
  (this->FixedText_Btn_Abandon).StringTableType = StringUi;
  (this->FixedText_Btn_Abandon).StringTableID = 0xeb8e;
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
  (this->FixedText_Btn_Rewards).StringTableType = StringUi;
  (this->FixedText_Btn_Rewards).StringTableID = 0xeb90;
  (this->FixedText_Btn_Rewards).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Rewards).StringEnumTableNameID.Number = 0;
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
  (this->FixedText_Btn_Accept).StringTableType = StringUi;
  (this->FixedText_Btn_Accept).StringTableID = 0xeb91;
  (this->FixedText_Btn_Accept).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Accept).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Accept).DateTime.Ticks = 0;
  (this->FixedText_Btn_Accept).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Accept).TimeExpressionType = None;
  (this->FixedText_Btn_Accept).IsExpression = false;
  (this->FixedText_Btn_Accept).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Accept).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Accept).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Accept).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Accept).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Accept).FormatArgs.ArrayMax = 0;
  this->SelectedQuestID = 0;
  this->SuggestID = 0;
  return this;
}

// ~UDS_VM_W_B_DailyQuest @ 14b71f370

void __thiscall UDS_VM_W_B_DailyQuest::~UDS_VM_W_B_DailyQuest(UDS_VM_W_B_DailyQuest *this)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_B_DailyQuest__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Btn_Accept).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_Accept).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_Accept).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_Accept).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
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
  pIVar2 = (this->QuestCompleteCountText).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar2 = (this->QuestSuggestCountText).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickCloseButton).Delegate);
  pvVar3 = *(void **)&(this->ClickCloseButton).Delegate.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickCloseButton).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickRewardsButton).Delegate);
  pvVar3 = *(void **)&(this->ClickRewardsButton).Delegate.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickRewardsButton).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickAbandonButton).Delegate);
  pvVar3 = *(void **)&(this->ClickAbandonButton).Delegate.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickAbandonButton).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickAcceptButton).Delegate);
  pvVar3 = *(void **)&(this->ClickAcceptButton).Delegate.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickAcceptButton).Delegate);
  pFVar1 = (this->EntryBindingEventField_QuestList).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b721020

IClassDescriptor * __thiscall
UDS_VM_W_B_DailyQuest::GetFieldNotificationDescriptor(UDS_VM_W_B_DailyQuest *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_B_DailyQuest::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b721520

UClass * __cdecl UDS_VM_W_B_DailyQuest::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_B_DailyQuest.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_B_DailyQuest",
               &Z_Registration_Info_UClass_UDS_VM_W_B_DailyQuest.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_B_DailyQuest,0x278,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_B_DailyQuest>,
               InternalVTableHelperCtorCaller<UDS_VM_W_B_DailyQuest>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_B_DailyQuest.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_B_DailyQuest @ 14b721b40

void __cdecl UDS_VM_W_B_DailyQuest::StaticRegisterNativesUDS_VM_W_B_DailyQuest(void)

{
  return;
}

// DailyQeustProgressCount @ 14bfa5120

int __thiscall UDS_VM_W_B_DailyQuest::DailyQeustProgressCount(UDS_VM_W_B_DailyQuest *this)

{
  UDS_QuestManager *pUVar1;
  undefined1 local_res10 [24];
  TArray<EDS_QuestType,TSizedDefaultAllocator<32>_> local_28;
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  pUVar1 = UDS_QuestManager::GetInst();
  if (pUVar1 == (UDS_QuestManager *)0x0) {
    return 0;
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_res10[0] = 5;
  local_28.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,1,0,&local_28.AllocatorInstance,1,&local_28.ArrayMax);
  memcpy(local_28.AllocatorInstance.Data,local_res10,1);
  UDS_QuestManager::GetQuestListByInProgress(&local_18,&local_28,false);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return local_18.ArrayNum;
}

// OnChangeDailyQuestData @ 14bfb4d30

void __thiscall
UDS_VM_W_B_DailyQuest::OnChangeDailyQuestData(UDS_VM_W_B_DailyQuest *this,int param_1)

{
  if (this->SuggestID == param_1) {
    QuestButtonSwitcher(this);
    UpdateQuestList(this);
    return;
  }
  return;
}

// OnChangeQuestData @ 14bfb4d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_DailyQuest::OnChangeQuestData
          (UDS_VM_W_B_DailyQuest *this,int param_1,EDS_QuestDataType param_2)

{
  FDS_EventDelegate<> *this_00;
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  UDS_EventManager *this_01;
  UDS_LogManager *pUVar9;
  UDS_DailyQuestEvent *pUVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStackY_198 [32];
  FDestructionSentinel local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  QuestButtonSwitcher(this);
  UpdateQuestList(this);
  this_01 = UDS_EventManager::GetInst();
  if (this_01 != (UDS_EventManager *)0x0) {
    if ((char)this_01->_padding_ == '\x01') {
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 != (UDS_LogManager *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_EventManager::GetEvent",0x1a,Yes);
        UDS_LogManager::PrintLog
                  (pUVar9,1,Warning,local_148.Ptr,0x31,
                   L"Cannot access event during UDS_EventManager destruction.");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    else {
      pUVar10 = UDS_EventManager::GetEventInternal<UDS_DailyQuestEvent>(this_01);
      if (pUVar10 != (UDS_DailyQuestEvent *)0x0) {
        this_00 = &pUVar10->UpdateQuestBoardText;
        bVar5 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                          ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
        if (bVar5) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                     (FWriteAccessScope *)&local_168);
          puVar1 = &(pUVar10->UpdateQuestBoardText).Delegate.field_0x1c;
          *(int *)puVar1 = *(int *)puVar1 + 1;
          bVar5 = false;
          uVar11 = *(int *)&(pUVar10->UpdateQuestBoardText).Delegate.field_0x10 - 1;
          if (-1 < (int)uVar11) {
            lVar12 = (longlong)(int)uVar11 << 4;
            bVar5 = false;
            do {
              uVar8 = 0;
              if ((int)uVar11 < *(int *)&(pUVar10->UpdateQuestBoardText).Delegate.field_0x10) {
                uVar8 = ~uVar11 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              lVar2 = *(longlong *)&(pUVar10->UpdateQuestBoardText).Delegate.field_0x8;
              if (((*(int *)(lVar12 + 8 + lVar2) == 0) ||
                  (plVar3 = *(longlong **)(lVar12 + lVar2), plVar3 == (longlong *)0x0)) ||
                 (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
                bVar5 = true;
              }
              lVar12 = lVar12 + -0x10;
              uVar11 = uVar11 - 1;
            } while (-1 < (int)uVar11);
          }
          puVar1 = &(pUVar10->UpdateQuestBoardText).Delegate.field_0x1c;
          *(int *)puVar1 = *(int *)puVar1 + -1;
          if (bVar5) {
            TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
          }
          if (local_168.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_168.Accessor,&local_168);
          }
        }
      }
    }
  }
  return;
}

// OnChangeSelectQuest @ 14bfb4f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_W_B_DailyQuest::OnChangeSelectQuest(UDS_VM_W_B_DailyQuest *this,int param_1)

{
  FName FVar1;
  code *pcVar2;
  FDS_ViewModelContext_Quest *pFVar3;
  bool bVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UDS_VM_QuestInfo *pUVar7;
  longlong *plVar8;
  undefined1 auStack_e8 [32];
  FName local_c8;
  TSharedPtr<FDS_ViewModelContext_Quest,1> local_b8;
  TSharedPtr<FDS_ViewModelContext,1> local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  FVar1 = (FName)(this->VM_QuestInfo).field0_0x0.DebugPtr;
  this->SelectedQuestID = param_1;
  if (FVar1 == (FName)0x0) {
    local_c8 = FVar1;
    pUVar5 = Z_Construct_UClass_UDS_VM_QuestInfo_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar6 = Z_Construct_UClass_UDS_VM_QuestInfo_NoRegister();
    CheckIsClassChildOf_Internal(pUVar6,pUVar5);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar5);
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_98._24_4_ = RF_Transient;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_98._8_8_ = this;
    local_98._16_8_ = FVar1;
    pUVar7 = (UDS_VM_QuestInfo *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar8 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
    if (pUVar7 != (UDS_VM_QuestInfo *)0x0) {
      *(undefined1 *)((longlong)&pUVar7->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UDS_VM_QuestInfo *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    (this->VM_QuestInfo).field0_0x0.DebugPtr = pUVar7;
    if (pUVar7 == (UDS_VM_QuestInfo *)0x0) goto LAB_14bfb5146;
  }
  MakeContext<FDS_ViewModelContext_Quest>(&local_b8);
  pFVar3 = local_b8.Object;
  if (local_b8.Object != (FDS_ViewModelContext_Quest *)0x0) {
    if ((local_b8.Object == (FDS_ViewModelContext_Quest *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(undefined4 *)&pFVar3->_padding_ = 0x76;
    pFVar3->QuestID = this->SelectedQuestID;
    pUVar7 = (this->VM_QuestInfo).field0_0x0.DebugPtr;
    local_a8.Object = (FDS_ViewModelContext *)local_b8.Object;
    local_a8.SharedReferenceCount.ReferenceController =
         local_b8.SharedReferenceCount.ReferenceController;
    if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar7,&local_a8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
LAB_14bfb5146:
  QuestButtonSwitcher(this);
  return;
}

// OnClickAbandonButton @ 14bfb8140

void __thiscall
UDS_VM_W_B_DailyQuest::OnClickAbandonButton
          (UDS_VM_W_B_DailyQuest *this,FDS_ButtonEventField *param_1)

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

// OnClickAcceptButton @ 14bfb83c0

void __thiscall
UDS_VM_W_B_DailyQuest::OnClickAcceptButton
          (UDS_VM_W_B_DailyQuest *this,FDS_ButtonEventField *param_1)

{
  int iVar1;
  UDS_QuestManager *this_00;
  UDS_DailyQuestManager *pUVar2;
  UDS_QuestManager *pUVar3;
  int iVar4;
  undefined1 local_res18 [8];
  TArray<EDS_QuestType,TSizedDefaultAllocator<32>_> local_28;
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  this_00 = UDS_QuestManager::GetInst();
  if ((this_00 != (UDS_QuestManager *)0x0) &&
     (pUVar2 = UDS_DailyQuestManager::GetInst(), pUVar2 != (UDS_DailyQuestManager *)0x0)) {
    iVar1 = DS_CommonDataHelper::DailyQuestOngoing();
    pUVar3 = UDS_QuestManager::GetInst();
    iVar4 = 0;
    if (pUVar3 != (UDS_QuestManager *)0x0) {
      local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_res18[0] = 5;
      local_28.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,1,0,&local_28.AllocatorInstance,1,&local_28.ArrayMax);
      memcpy(local_28.AllocatorInstance.Data,local_res18,1);
      UDS_QuestManager::GetQuestListByInProgress(&local_18,&local_28,false);
      iVar4 = local_18.ArrayNum;
      if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
    }
    if (iVar1 <= iVar4) {
      OpenPopupProgressQuestCountOver(this);
      return;
    }
    UDS_QuestManager::OnReqAcceptQuest(this_00,this->SelectedQuestID);
  }
  return;
}

// OnClickCloseButton @ 14bfb8df0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_DailyQuest::OnClickCloseButton(UDS_VM_W_B_DailyQuest *this,FDS_ButtonEventField *param_1)

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
  UDS_WindowManager::CloseWindow(this_00,QuestDaily,local_res20,local_res18);
  return;
}

// OnClickRewardsButton @ 14bfba320

void __thiscall
UDS_VM_W_B_DailyQuest::OnClickRewardsButton
          (UDS_VM_W_B_DailyQuest *this,FDS_ButtonEventField *param_1)

{
  UDS_QuestManager *this_00;
  
  if (param_1->bIsCustomDisabled != true) {
    this_00 = UDS_QuestManager::GetInst();
    if (this_00 != (UDS_QuestManager *)0x0) {
      UDS_QuestManager::OnReqQuestComplete(this_00,this->SelectedQuestID);
      return;
    }
  }
  return;
}

// OnCommonPopupClose @ 14bfbc1b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_DailyQuest::OnCommonPopupClose
          (UDS_VM_W_B_DailyQuest *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

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
  UDS_WindowManager::CloseWindow(this_00,PopupCommon,local_res20,local_res18);
  return;
}

// OnSetViewModel @ 14bfc4e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_DailyQuest::OnSetViewModel
          (UDS_VM_W_B_DailyQuest *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  UDS_DailyQuestManager *this_00;
  UDS_QuestManager *pUVar4;
  UDS_QuestEvent *pUVar5;
  FDS_StuffBaseTableRow *pFVar6;
  UDS_LogManager *pUVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  UDS_VM_DailyQuestStatus *pUVar10;
  TObjectPtr<UDS_VM_W_ContentsPopupTitle>_u_0 TVar11;
  TObjectPtr<UDS_VM_W_ContentsPopupTitle>_u_0 TVar12;
  UScriptStruct *pUVar13;
  UDS_ViewModelContextManager *this_01;
  TObjectPtr<UDS_VM_W_ContentsPopupTitle>_u_0 TVar14;
  TObjectPtr<UDS_VM_W_ContentsPopupTitle>_u_0 TVar15;
  undefined1 auStackY_358 [32];
  TObjectPtr<UDS_VM_W_ContentsPopupTitle>_u_0 local_318;
  TObjectPtr<UDS_VM_W_ContentsPopupTitle>_u_0 TStack_310;
  int local_308;
  TObjectPtr<UDS_VM_W_ContentsPopupTitle>_u_0 local_300;
  TSharedPtr<FDS_ViewModelContext_DailyQuestPopupOpen,1> local_2f8;
  undefined8 local_2e8;
  TObjectPtr<UDS_VM_W_ContentsPopupTitle>_u_0 local_2e0;
  TObjectPtr<UDS_VM_W_ContentsPopupTitle>_u_0 local_2d8;
  TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_> local_2d0;
  FName local_2b8;
  int local_2b0;
  FName local_2a8;
  int local_2a0;
  FDS_Text local_298;
  TSharedPtr<FDS_ViewModelContext,1> local_248;
  undefined1 local_238 [16];
  undefined1 local_228 [72];
  UDS_VM_W_B_DailyQuest *local_1e0;
  longlong local_1d8;
  undefined4 local_1d0;
  undefined1 local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  longlong lStack_1b0;
  longlong local_1a8;
  undefined1 local_198 [24];
  TObjectPtr<UDS_VM_W_ContentsPopupTitle>_u_0 local_180;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  FDateTime local_48;
  
  local_48.Ticks = __security_cookie.value ^ (ulonglong)auStackY_358;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_248.Object = param_1->Object;
  local_248.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_248.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_248.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_248.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_DailyQuestPopupOpen>(&local_2f8,&local_248);
  if (local_2f8.Object == (FDS_ViewModelContext_DailyQuestPopupOpen *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2f8.SharedReferenceCount.ReferenceController);
  }
  else {
    this_00 = UDS_DailyQuestManager::GetInst();
    if ((this_00 == (UDS_DailyQuestManager *)0x0) ||
       (pUVar4 = UDS_QuestManager::GetInst(), pUVar4 == (UDS_QuestManager *)0x0)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2f8.SharedReferenceCount.ReferenceController);
    }
    else {
      this->SuggestID = (local_2f8.Object)->SuggestID;
      local_318.DebugPtr = (UDS_VM_W_ContentsPopupTitle *)OnChangeDailyQuestData;
      TVar15.DebugPtr = (UDS_VM_W_ContentsPopupTitle *)0x0;
      TStack_310.DebugPtr = TStack_310.DebugPtr & 0xffffffff00000000;
      local_228._16_8_ = OnChangeDailyQuestData;
      local_228._24_8_ = TStack_310;
      TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
      AddUObject<UDS_VM_W_B_DailyQuest>
                ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
                 &this_00->OnUpdateDailyQuestDataDelegate,(UDS_VM_W_B_DailyQuest *)local_238,
                 (pmf_204a71e7 *)this);
      pUVar5 = UDS_QuestEvent::GetEvent();
      if (pUVar5 != (UDS_QuestEvent *)0x0) {
        TStack_310.DebugPtr = TStack_310.DebugPtr & 0xffffffff00000000;
        local_318.DebugPtr = (UDS_VM_W_ContentsPopupTitle *)OnChangeSelectQuest;
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pUVar5->OnSelectedQuestDelegate,this);
        local_228._32_8_ = local_318;
        local_228._40_8_ = TStack_310;
        TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
        AddUObject<UDS_VM_W_B_DailyQuest>
                  ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
                   &pUVar5->OnSelectedQuestDelegate,(UDS_VM_W_B_DailyQuest *)(local_238 + 8),
                   (pmf_204a71e7 *)this);
        TStack_310.DebugPtr = TStack_310.DebugPtr & 0xffffffff00000000;
        local_318.DebugPtr = (UDS_VM_W_ContentsPopupTitle *)OnChangeQuestData;
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pUVar5->OnChanedQuestDelegate,this);
        local_228._48_8_ = local_318;
        local_228._56_8_ = TStack_310;
        TMulticastDelegateRegistration<void___cdecl(int,enum_EDS_QuestDataType),FDefaultDelegateUserPolicy>
        ::AddUObject<UDS_VM_W_B_DailyQuest>
                  (&pUVar5->OnChanedQuestDelegate,(UDS_VM_W_B_DailyQuest *)local_228,
                   (pmf_816babbb *)this);
      }
      local_308 = 0;
      UDS_DailyQuestManager::GetSuggestDailyQuestDataArray(this_00,&local_2d0,this->SuggestID);
      if (0 < local_2d0.ArrayNum) {
        local_308 = *(int *)local_2d0.AllocatorInstance.Data;
      }
      pFVar6 = FDS_StuffBaseTableRow::Get(this_00->TargetStuffBaseTableID,true);
      if (pFVar6 == (FDS_StuffBaseTableRow *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        if (pUVar7 != (UDS_LogManager *)0x0) {
          pUVar7 = UDS_LogManager::GetInst();
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"UDS_VM_W_B_DailyQuest::OnSetViewModel",0x25,Yes);
          UDS_LogManager::PrintLog
                    (pUVar7,1,Warning,local_168.Ptr,0x4a,L"stuffBaseTable is nullptr. (%llu)");
          if ((void *)local_168._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_168._padding_);
          }
        }
      }
      else {
        if ((this->VM_DailyQuestStatus).field0_0x0.DebugPtr == (UDS_VM_DailyQuestStatus *)0x0) {
          local_2e8 = 0;
          pUVar8 = Z_Construct_UClass_UDS_VM_DailyQuestStatus_NoRegister();
          FObjectInitializer::AssertIfInConstructor
                    ((UObject *)this,
                     L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                    );
          pUVar9 = Z_Construct_UClass_UDS_VM_DailyQuestStatus_NoRegister();
          CheckIsClassChildOf_Internal(pUVar9,pUVar8);
          FStaticConstructObjectParameters::FStaticConstructObjectParameters
                    ((FStaticConstructObjectParameters *)(local_228 + 0x40),pUVar8);
          local_1b8 = 0;
          lStack_1b0 = 0;
          local_1d8 = 0;
          local_1d0 = 0x40;
          local_1c0 = 0;
          local_1c8 = 0;
          local_1e0 = this;
          pUVar10 = (UDS_VM_DailyQuestStatus *)
                    StaticConstructObject_Internal
                              ((FStaticConstructObjectParameters *)(local_228 + 0x40));
          if (local_1a8 != 0) {
            TVar14.DebugPtr = (UDS_VM_W_ContentsPopupTitle *)local_198;
            if (local_180.DebugPtr != (UDS_VM_W_ContentsPopupTitle *)0x0) {
              TVar14 = local_180;
            }
            (**(code **)((TVar14.DebugPtr)->_padding_ + 0x10))(TVar14.DebugPtr);
          }
          if (pUVar10 != (UDS_VM_DailyQuestStatus *)0x0) {
            *(undefined1 *)((longlong)&pUVar10->_padding_ + 4) = 0;
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar10 != (UDS_VM_DailyQuestStatus *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar10);
          }
          (this->VM_DailyQuestStatus).field0_0x0.DebugPtr = pUVar10;
          local_2b0 = FFieldNotificationClassDescriptor::VM_DailyQuestStatus.BitNumber;
          local_2b8 = FFieldNotificationClassDescriptor::VM_DailyQuestStatus.FieldName;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2b8);
        }
        if ((this->VM_ContentsPopupTitle).field0_0x0.DebugPtr == (UDS_VM_W_ContentsPopupTitle *)0x0)
        {
          TVar11.DebugPtr = ::operator_new(0x70);
          TVar14.DebugPtr = TVar15.DebugPtr;
          if (TVar11.DebugPtr != (UDS_VM_W_ContentsPopupTitle *)0x0) {
            *(undefined4 *)((longlong)&(TVar11.DebugPtr)->_padding_ + 4) = 0;
            *(undefined4 *)((longlong)&(TVar11.DebugPtr)->_padding_ + 1) = 0;
            *(undefined2 *)((longlong)&(TVar11.DebugPtr)->_padding_ + 5) = 0;
            *(undefined1 *)((longlong)&(TVar11.DebugPtr)->_padding_ + 7) = 0;
            *(undefined2 *)((longlong)&(TVar11.DebugPtr)->_padding_ + 5) = 0;
            *(undefined1 *)((longlong)&(TVar11.DebugPtr)->_padding_ + 7) = 0;
            (TVar11.DebugPtr)->_padding_ = (longlong)&___7FDS_ViewModelContext_PopupTitle__6B_;
            (TVar11.DebugPtr)->_padding_ = 0;
            (TVar11.DebugPtr)->_padding_ = 0;
            *(undefined4 *)&(TVar11.DebugPtr)->_padding_ = 0;
            *(undefined1 *)&(TVar11.DebugPtr)->_padding_ = 0;
            (TVar11.DebugPtr)->_padding_ = 0;
            (TVar11.DebugPtr)->_padding_ = 0;
            (TVar11.DebugPtr)->_padding_ = 0;
            (TVar11.DebugPtr)->_padding_ = 0;
            *(undefined4 *)&(TVar11.DebugPtr)->_padding_ = 0;
            *(undefined1 *)((longlong)&(TVar11.DebugPtr)->_padding_ + 4) = 0;
            (TVar11.DebugPtr)->_padding_ = 0;
            (TVar11.DebugPtr)->_padding_ = 0;
            (TVar11.DebugPtr)->_padding_ = 0;
            (TVar11.DebugPtr)->_padding_ = 0;
            TVar14.DebugPtr = TVar11.DebugPtr;
          }
          TVar12.DebugPtr = ::operator_new(0x20);
          TVar11.DebugPtr = TVar15.DebugPtr;
          if (TVar12.DebugPtr != (UDS_VM_W_ContentsPopupTitle *)0x0) {
            *(undefined4 *)&(TVar12.DebugPtr)->_padding_ = 1;
            (TVar12.DebugPtr)->_padding_ = (longlong)ViewModelContextDeleter;
            (TVar12.DebugPtr)->_padding_ =
                 (longlong)
                 &
                 ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_PopupTitle__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
            ;
            *(undefined4 *)((longlong)&(TVar12.DebugPtr)->_padding_ + 4) = 1;
            (TVar12.DebugPtr)->_padding_ = (longlong)TVar14;
            TVar11.DebugPtr = TVar12.DebugPtr;
          }
          if ((TVar14.DebugPtr == (UDS_VM_W_ContentsPopupTitle *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pUVar13 = FDS_ViewModelContext_PopupTitle::StaticStruct();
          (TVar14.DebugPtr)->_padding_ = (longlong)pUVar13;
          this_01 = UDS_ViewModelContextManager::GetInst();
          if (this_01 != (UDS_ViewModelContextManager *)0x0) {
            if (TVar11.DebugPtr != (UDS_VM_W_ContentsPopupTitle *)0x0) {
              LOCK();
              *(int *)&(TVar11.DebugPtr)->_padding_ = (int)(TVar11.DebugPtr)->_padding_ + 1;
              UNLOCK();
            }
            local_318 = TVar14;
            TStack_310 = TVar11;
            UDS_ViewModelContextManager::RegisterContext
                      (this_01,(TSharedPtr<FDS_ViewModelContext,1> *)&local_318.ObjectPtr);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)TStack_310.DebugPtr);
          }
          *(undefined4 *)&(TVar14.DebugPtr)->_padding_ = 0x195;
          local_298.StringTableType = None;
          local_298.StringTableID = 0;
          local_298.DateTime.Ticks = 0;
          local_298.TimeSpan.Ticks = 0;
          local_298.StringEnumTableNameID.ComparisonIndex.Value = 0;
          local_298.StringEnumTableNameID.Number = 0;
          local_298.TimeExpressionType = None;
          local_298.IsExpression = false;
          local_298.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_298.UniqueString.Data.ArrayNum = 0;
          local_298.UniqueString.Data.ArrayMax = 0;
          local_298.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_298.FormatArgs.ArrayNum = 0;
          local_298.FormatArgs.ArrayMax = 0;
          FDS_Text::SetTextFromStringID(&local_298,&pFVar6->ID_Name);
          FDS_Text::operator=((FDS_Text *)&(TVar14.DebugPtr)->_padding_,&local_298);
          DestructItems<FDS_TextFormatArg,int>
                    ((FDS_TextFormatArg *)local_298.FormatArgs.AllocatorInstance.Data,
                     local_298.FormatArgs.ArrayNum);
          if ((FDS_TextFormatArg *)local_298.FormatArgs.AllocatorInstance.Data !=
              (FDS_TextFormatArg *)0x0) {
            FMemory::Free(local_298.FormatArgs.AllocatorInstance.Data);
          }
          if (local_298.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_298.UniqueString.Data.AllocatorInstance.Data);
          }
          if (TVar11.DebugPtr != (UDS_VM_W_ContentsPopupTitle *)0x0) {
            LOCK();
            *(int *)&(TVar11.DebugPtr)->_padding_ = (int)(TVar11.DebugPtr)->_padding_ + 1;
            UNLOCK();
            LOCK();
            *(int *)&(TVar11.DebugPtr)->_padding_ = (int)(TVar11.DebugPtr)->_padding_ + 1;
            UNLOCK();
          }
          local_2e0 = TVar14;
          local_2d8 = TVar11;
          DS_ViewModelTemplateUtil::CreateViewModel
                    ((UObject *)&local_300.ObjectPtr,(TSharedPtr<FDS_ViewModelContext,1> *)this);
          if (local_300.DebugPtr != (UDS_VM_W_ContentsPopupTitle *)0x0) {
            pUVar8 = Z_Construct_UClass_UDS_VM_W_ContentsPopupTitle_NoRegister();
            bVar3 = FObjectPtr::IsA(&local_300.ObjectPtr,pUVar8);
            if (bVar3) {
              TVar15 = local_300;
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)TVar11.DebugPtr);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (TVar15.DebugPtr != (UDS_VM_W_ContentsPopupTitle *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)TVar15.DebugPtr);
          }
          (this->VM_ContentsPopupTitle).field0_0x0.DebugPtr = (UDS_VM_W_ContentsPopupTitle *)TVar15;
          local_2a0 = FFieldNotificationClassDescriptor::VM_ContentsPopupTitle.BitNumber;
          local_2a8 = FFieldNotificationClassDescriptor::VM_ContentsPopupTitle.FieldName;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2a8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)TVar11.DebugPtr);
        }
        OnChangeSelectQuest(this,local_308);
        UpdateQuestList(this);
      }
      if (local_2d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2d0.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2f8.SharedReferenceCount.ReferenceController);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OpenPopupProgressQuestCountOver @ 14bfd2d00

void __thiscall UDS_VM_W_B_DailyQuest::OpenPopupProgressQuestCountOver(UDS_VM_W_B_DailyQuest *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_CommonPopupManager *this_00;
  UDS_M_CommonPopup *pUVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  UDS_CommonPopupManager *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [8];
  FDelegateAllocation local_110;
  UDS_GameInstance *local_100;
  UDS_VM_W_B_DailyQuest *local_f8;
  undefined4 local_ec;
  FDS_Text local_e8;
  FDS_Text local_98;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  local_100 = UDS_GameInstance::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_100 != (UDS_GameInstance *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_100);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_100 != (UDS_GameInstance *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_100);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_100);
  bVar2 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar2) {
    local_128 = UDS_CommonPopupManager::GetInst();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_128 != (UDS_CommonPopupManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_128);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_128 != (UDS_CommonPopupManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_128);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_128);
    bVar2 = FWeakObjectPtr::IsValid(&local_res18);
    if (bVar2) {
      this_00 = (UDS_CommonPopupManager *)FWeakObjectPtr::Get(&local_res18);
      UDS_CommonPopupManager::CreateCommonPopup(this_00);
      bVar2 = FWeakObjectPtr::IsValid(&local_res10);
      if (bVar2) {
        pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
        local_e8.StringTableType = None;
        local_e8.StringTableID = 0;
        local_e8.StringEnumTableNameID.ComparisonIndex.Value = 0;
        local_e8.StringEnumTableNameID.Number = 0;
        local_e8.TimeExpressionType = None;
        local_e8.IsExpression = false;
        local_e8.DateTime.Ticks = 0;
        local_e8.TimeSpan.Ticks = 0;
        local_e8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e8.UniqueString.Data.ArrayNum = 0;
        local_e8.UniqueString.Data.ArrayMax = 0;
        local_e8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e8.FormatArgs.ArrayNum = 0;
        local_e8.FormatArgs.ArrayMax = 0;
        FDS_Text::SetTextFromStringTable(&local_e8,StringUi,2);
        UDS_M_CommonPopup::SetTitle(pUVar3,&local_e8);
        pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
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
        FDS_Text::SetTextFromStringTable(&local_98,StringUi,0x1111a);
        UDS_M_CommonPopup::SetMainContent(pUVar3,&local_98);
        pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
        UDS_M_CommonPopup::SetButton(pUVar3,ButtonCancel,StringUi,0x65,false);
        pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
        uStack_11c = local_ec;
        uStack_120 = 0;
        local_128 = (UDS_CommonPopupManager *)OnCommonPopupClose;
        local_118 = (undefined1  [8])0x0;
        local_110.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_110.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
                   (FWriteAccessScope *)&local_48);
        local_30 = &local_110;
        puVar4 = UE::Core::Private::DelegateAllocate(0x30,&local_110);
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = &
                    ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar5 = FDelegateHandle::GenerateNewID();
          puVar4[2] = uVar5;
          *puVar4 = &
                    ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_B_DailyQuest____A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this != (UDS_VM_W_B_DailyQuest *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar4[3] = 0;
          local_f8 = this;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this != (UDS_VM_W_B_DailyQuest *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_f8);
          puVar4[4] = local_128;
          puVar4[5] = CONCAT44(uStack_11c,uStack_120);
        }
        if (local_48.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
        }
        UDS_M_CommonPopup::SetDelegate
                  (pUVar3,ButtonCancel,
                   (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                    *)local_118);
        pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
        UDS_M_CommonPopup::OpenCommonPopup(pUVar3);
      }
      else {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_5519244618463444639>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_B_DailyQuest.cpp"
                           ,0x161,"false");
        if (bVar2) goto code_r0x00014bfd2e96;
      }
      return;
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5519244618463444642>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_B_DailyQuest.cpp"
                       ,0x15e,"false");
    if (!bVar2) {
      return;
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5519244618463444645>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_B_DailyQuest.cpp"
                       ,0x15b,"false");
    if (!bVar2) {
      return;
    }
  }
code_r0x00014bfd2e96:
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// QuestButtonSwitcher @ 14bfd3260

void __thiscall UDS_VM_W_B_DailyQuest::QuestButtonSwitcher(UDS_VM_W_B_DailyQuest *this)

{
  bool bVar1;
  EDS_QuestConditionType EVar2;
  UDS_QuestManager *this_00;
  UDS_DailyQuestManager *this_01;
  FName local_18;
  int local_10;
  
  this_00 = UDS_QuestManager::GetInst();
  if (this_00 != (UDS_QuestManager *)0x0) {
    this_01 = UDS_DailyQuestManager::GetInst();
    if (this_01 != (UDS_DailyQuestManager *)0x0) {
      bVar1 = UDS_DailyQuestManager::IsQuestComplete(this_01,this->SuggestID,this->SelectedQuestID);
      if (bVar1) {
        this->QuestStateWidgetIndex = 2;
        local_10 = FFieldNotificationClassDescriptor::DisabledRewardButton.BitNumber;
        local_18 = FFieldNotificationClassDescriptor::DisabledRewardButton.FieldName;
        if (this->DisabledRewardButton != true) {
          this->DisabledRewardButton = true;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
        }
      }
      else {
        EVar2 = UDS_QuestManager::GetQuestConditionType(this_00,this->SelectedQuestID,0);
        local_10 = FFieldNotificationClassDescriptor::DisabledRewardButton.BitNumber;
        local_18 = FFieldNotificationClassDescriptor::DisabledRewardButton.FieldName;
        if (EVar2 == AbleComplete) {
          if (this->DisabledRewardButton != false) {
            this->DisabledRewardButton = false;
            (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
          }
          this->QuestStateWidgetIndex = 2;
        }
        else if (EVar2 == AbleAccept) {
          this->QuestStateWidgetIndex = 0;
        }
        else if (EVar2 == InProgress) {
          this->QuestStateWidgetIndex = 1;
        }
      }
      local_10 = FFieldNotificationClassDescriptor::QuestStateWidgetIndex.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::QuestStateWidgetIndex.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// SetDisabledRewardButton @ 14bfd96c0

void __thiscall
UDS_VM_W_B_DailyQuest::SetDisabledRewardButton(UDS_VM_W_B_DailyQuest *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::DisabledRewardButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::DisabledRewardButton.FieldName;
  if (this->DisabledRewardButton != param_1) {
    this->DisabledRewardButton = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVM_QuestInfo @ 14bfddff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_W_B_DailyQuest::SetVM_QuestInfo(UDS_VM_W_B_DailyQuest *this)

{
  FName FVar1;
  code *pcVar2;
  FDS_ViewModelContext_Quest *pFVar3;
  bool bVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UDS_VM_QuestInfo *pUVar7;
  longlong *plVar8;
  undefined1 auStack_e8 [32];
  FName local_c8;
  TSharedPtr<FDS_ViewModelContext_Quest,1> local_b8;
  TSharedPtr<FDS_ViewModelContext,1> local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  FVar1 = (FName)(this->VM_QuestInfo).field0_0x0.DebugPtr;
  if (FVar1 == (FName)0x0) {
    local_c8 = FVar1;
    pUVar5 = Z_Construct_UClass_UDS_VM_QuestInfo_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar6 = Z_Construct_UClass_UDS_VM_QuestInfo_NoRegister();
    CheckIsClassChildOf_Internal(pUVar6,pUVar5);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar5);
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_98._24_4_ = RF_Transient;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_98._8_8_ = this;
    local_98._16_8_ = FVar1;
    pUVar7 = (UDS_VM_QuestInfo *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar8 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (pUVar7 != (UDS_VM_QuestInfo *)0x0) {
      *(undefined1 *)((longlong)&pUVar7->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UDS_VM_QuestInfo *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    (this->VM_QuestInfo).field0_0x0.DebugPtr = pUVar7;
    if (pUVar7 == (UDS_VM_QuestInfo *)0x0) {
      return;
    }
  }
  MakeContext<FDS_ViewModelContext_Quest>(&local_b8);
  pFVar3 = local_b8.Object;
  if (local_b8.Object != (FDS_ViewModelContext_Quest *)0x0) {
    if ((local_b8.Object == (FDS_ViewModelContext_Quest *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(undefined4 *)&pFVar3->_padding_ = 0x76;
    pFVar3->QuestID = this->SelectedQuestID;
    pUVar7 = (this->VM_QuestInfo).field0_0x0.DebugPtr;
    local_a8.Object = (FDS_ViewModelContext *)local_b8.Object;
    local_a8.SharedReferenceCount.ReferenceController =
         local_b8.SharedReferenceCount.ReferenceController;
    if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar7,&local_a8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  return;
}

// UnbindModel @ 14bfdf8e0

void __thiscall UDS_VM_W_B_DailyQuest::UnbindModel(UDS_VM_W_B_DailyQuest *this)

{
  UDS_QuestEvent *pUVar1;
  UDS_DailyQuestManager *pUVar2;
  
  pUVar1 = UDS_QuestEvent::GetEvent();
  if (pUVar1 != (UDS_QuestEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnSelectedQuestDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChanedQuestDelegate,
               this);
  }
  pUVar2 = UDS_DailyQuestManager::GetInst();
  if (pUVar2 != (UDS_DailyQuestManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnUpdateDailyQuestDataDelegate,this);
    pUVar2->TargetStuffBaseTableID = 0;
  }
  return;
}

// UpdateQuestList @ 14bfe4a40

void __thiscall UDS_VM_W_B_DailyQuest::UpdateQuestList(UDS_VM_W_B_DailyQuest *this)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  UDS_DailyQuestManager *this_00;
  UDS_UserObjectListItem *this_01;
  FDS_ViewModelContext *pFVar6;
  FDS_ViewModelContext *pFVar7;
  UScriptStruct *pUVar8;
  UDS_ViewModelContextManager *pUVar9;
  TReferenceControllerBase<1> *pTVar10;
  ulonglong uVar11;
  ForAnyElementType FVar12;
  int iVar13;
  FDS_ViewModelContext *pFVar14;
  int iVar15;
  FDS_ViewModelContext *pFVar16;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  uint local_res20;
  TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_> local_d0;
  UDS_UserObjectListItem *local_c0;
  FScriptContainerElement *local_b8;
  FName local_a8;
  int local_a0;
  FName local_98;
  int local_90;
  TSharedPtr<FDS_ViewModelContext,1> local_88;
  TSharedPtr<FDS_ViewModelContext,1> local_78;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_QuestList);
  this_00 = UDS_DailyQuestManager::GetInst();
  if (this_00 != (UDS_DailyQuestManager *)0x0) {
    UDS_DailyQuestManager::GetSuggestDailyQuestDataArray(this_00,&local_d0,this->SuggestID);
    iVar13 = 0;
    local_res20 = local_d0.ArrayNum;
    uVar11 = (ulonglong)(int)local_res20;
    local_res18 = 0;
    local_res10 = 0;
    local_b8 = local_d0.AllocatorInstance.Data + uVar11 * 8;
    FVar12.Data = local_d0.AllocatorInstance.Data;
    while( true ) {
      pFVar4 = local_b8;
      pFVar14 = (FDS_ViewModelContext *)0x0;
      if (local_d0.ArrayNum != (int)uVar11) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<DailyQuestInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (FVar12.Data == pFVar4) break;
      uVar1 = *(undefined8 *)FVar12.Data;
      this_01 = NewObject<UDS_UserObjectListItem>((UObject *)this);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (this_01 == (UDS_UserObjectListItem *)0x0) goto LAB_14bfe4e11;
      }
      else {
        if (this_01 == (UDS_UserObjectListItem *)0x0) goto LAB_14bfe4e11;
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      pFVar6 = ::operator_new(0x30);
      pFVar16 = pFVar14;
      if (pFVar6 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar6->field_0x1c = 0;
        *(undefined8 *)((longlong)&pFVar6[1]._padding_ + 4) = 0;
        ((atomic<int> *)&pFVar6[1].DerivedStaticStruct)[1] = (atomic<int>)0x0;
        *(undefined8 *)&pFVar6->DerivedStaticStruct = 0;
        (pFVar6->ViewModelName).ComparisonIndex = 0;
        (pFVar6->ViewModelName).Number = 0;
        pFVar6->ViewModelTemplateKey = None;
        pFVar6->_padding_ = (longlong)&___7FDS_ViewModelContext_DailyQuestListSlot__6B_;
        pFVar16 = pFVar6;
      }
      pFVar7 = ::operator_new(0x20);
      pFVar6 = pFVar14;
      if (pFVar7 != (FDS_ViewModelContext *)0x0) {
        *(atomic<int> *)&pFVar7->DerivedStaticStruct = (atomic<int>)0x1;
        *(code **)&(pFVar7->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
        pFVar7->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_DailyQuestListSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        ((atomic<int> *)&pFVar7->DerivedStaticStruct)[1] = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pFVar7->ViewModelTemplateKey = pFVar16;
        pFVar6 = pFVar7;
      }
      if ((pFVar16 == (FDS_ViewModelContext *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar8 = FDS_ViewModelContext_DailyQuestListSlot::StaticStruct();
      *(UScriptStruct **)&pFVar16->DerivedStaticStruct = pUVar8;
      pUVar9 = UDS_ViewModelContextManager::GetInst();
      if (pUVar9 != (UDS_ViewModelContextManager *)0x0) {
        if (pFVar6 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar6->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar6->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_88.Object = pFVar16;
        local_88.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
        UDS_ViewModelContextManager::RegisterContext(pUVar9,&local_88);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_88.SharedReferenceCount.ReferenceController);
      }
      pFVar16->ViewModelTemplateKey = W_QuestDailyListSlot;
      iVar15 = (int)uVar1;
      *(int *)&pFVar16[1]._padding_ = iVar15;
      *(int *)((longlong)&pFVar16[1]._padding_ + 4) = this->SelectedQuestID;
      *(int *)&pFVar16[1].DerivedStaticStruct = this->SuggestID;
      pFVar7 = ::operator_new(0x28);
      if (pFVar7 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar7->ViewModelTemplateKey = 0;
        *(undefined4 *)((longlong)&pFVar7[1]._padding_ + 4) = 0;
        *(undefined8 *)&pFVar7->DerivedStaticStruct = 0;
        (pFVar7->ViewModelName).ComparisonIndex = 0;
        (pFVar7->ViewModelName).Number = 0;
        pFVar7->_padding_ = (longlong)&___7FDS_ViewModelContext_Quest__6B_;
        *(undefined4 *)&pFVar7[1]._padding_ = 0;
        pFVar14 = pFVar7;
      }
      pTVar10 = ::operator_new(0x20);
      if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar10->SharedReferenceCount = (atomic<int>)0x1;
        pTVar10[1]._padding_ = (longlong)ViewModelContextDeleter;
        pTVar10->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_Quest__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        pTVar10->WeakReferenceCount = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pTVar10[1].SharedReferenceCount = pFVar14;
      }
      if ((pFVar14 == (FDS_ViewModelContext *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar8 = FDS_ViewModelContext_Quest::StaticStruct();
      *(UScriptStruct **)&pFVar14->DerivedStaticStruct = pUVar8;
      pUVar9 = UDS_ViewModelContextManager::GetInst();
      if (pUVar9 != (UDS_ViewModelContextManager *)0x0) {
        if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_78.Object = pFVar14;
        local_78.SharedReferenceCount.ReferenceController = pTVar10;
        UDS_ViewModelContextManager::RegisterContext(pUVar9,&local_78);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_78.SharedReferenceCount.ReferenceController);
      }
      pFVar14->ViewModelTemplateKey = Data_QuestData;
      *(int *)&pFVar14[1]._padding_ = iVar15;
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_68.Object = pFVar14;
      local_68.SharedReferenceCount.ReferenceController = pTVar10;
      UDS_UserObjectListItem::AddContext(this_01,&local_68);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
      if (pFVar6 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar6->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar6->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_58.Object = pFVar16;
      local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
      UDS_UserObjectListItem::AddContext(this_01,&local_58);
      iVar3 = local_res18;
      iVar13 = local_res10;
      if (this->SelectedQuestID == iVar15) {
        iVar13 = local_res18;
      }
      local_res10 = iVar13;
      local_c0 = this_01;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      FDS_EntryBindingEventField::Add
                (&this->EntryBindingEventField_QuestList,
                 (TObjectPtr<UDS_UserObjectListItem>)&local_c0);
      local_res18 = iVar3 + 1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar6);
      FVar12.Data = FVar12.Data + 8;
      uVar11 = (ulonglong)local_res20;
    }
    local_a0 = FFieldNotificationClassDescriptor::EntryBindingEventField_QuestList.BitNumber;
    local_a8 = FFieldNotificationClassDescriptor::EntryBindingEventField_QuestList.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
    (this->EntryFocusEventField_QuestList).FocusIndex = iVar13;
    local_90 = FFieldNotificationClassDescriptor::EntryFocusEventField_QuestList.BitNumber;
    local_98 = FFieldNotificationClassDescriptor::EntryFocusEventField_QuestList.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
LAB_14bfe4e11:
    if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.AllocatorInstance.Data);
    }
  }
  return;
}

