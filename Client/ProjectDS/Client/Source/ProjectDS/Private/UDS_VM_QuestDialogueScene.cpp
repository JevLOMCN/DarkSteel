// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 31

// SetClickNextDialogueButton_WrapperImpl @ 14b6ba080

void __cdecl
UDS_VM_QuestDialogueScene::SetClickNextDialogueButton_WrapperImpl(void *param_1,void *param_2)

{
  UDS_QuestDialogueSceneManager *this;
  FName FStack_18;
  int iStack_10;
  
  this = UDS_QuestDialogueSceneManager::GetInst();
  if (this != (UDS_QuestDialogueSceneManager *)0x0) {
    UDS_QuestDialogueSceneManager::OnNextTalkDialogue(this);
  }
  iStack_10 = FFieldNotificationClassDescriptor::VisibilityNextDialogueButton.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::VisibilityNextDialogueButton.FieldName;
  if (*(char *)((longlong)param_1 + 0xe0) != '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xe0) = 1;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  iStack_10 = FFieldNotificationClassDescriptor::VisibilityTalkDialogue.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::VisibilityTalkDialogue.FieldName;
  if (*(char *)((longlong)param_1 + 0xe2) != '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xe2) = 1;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetClickSkipButton_WrapperImpl @ 14b6ba090

void __cdecl UDS_VM_QuestDialogueScene::SetClickSkipButton_WrapperImpl(void *param_1,void *param_2)

{
  UDS_QuestDialogueSceneManager *this;
  
  this = UDS_QuestDialogueSceneManager::GetInst();
  if (this != (UDS_QuestDialogueSceneManager *)0x0) {
    UDS_ViewModelBase::SetVisibility(param_1,Collapsed);
    UDS_QuestDialogueSceneManager::OnSkip(this);
  }
  return;
}

// SetVisibilityNextDialogueButton_WrapperImpl @ 14b6ba0a0

void __cdecl
UDS_VM_QuestDialogueScene::SetVisibilityNextDialogueButton_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::VisibilityNextDialogueButton.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::VisibilityNextDialogueButton.FieldName;
  if (*(char *)((longlong)param_1 + 0xe0) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0xe0) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetVisibilitySkipButton_WrapperImpl @ 14b6ba0b0

void __cdecl
UDS_VM_QuestDialogueScene::SetVisibilitySkipButton_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::VisibilitySkipButton.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::VisibilitySkipButton.FieldName;
  if (*(char *)((longlong)param_1 + 0xe1) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0xe1) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetVisibilityTalkDialogue_WrapperImpl @ 14b6ba0c0

void __cdecl
UDS_VM_QuestDialogueScene::SetVisibilityTalkDialogue_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::VisibilityTalkDialogue.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::VisibilityTalkDialogue.FieldName;
  if (*(char *)((longlong)param_1 + 0xe2) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0xe2) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetVisibilitySelectTalkPanel_WrapperImpl @ 14b6ba0f0

void __cdecl
UDS_VM_QuestDialogueScene::SetVisibilitySelectTalkPanel_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::VisibilitySelectTalkPanel.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::VisibilitySelectTalkPanel.FieldName;
  if (*(char *)((longlong)param_1 + 0xe3) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0xe3) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// StaticClass @ 14b6ba140

UClass * __cdecl UDS_VM_QuestDialogueScene::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_QuestDialogueScene.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_QuestDialogueScene",
               &Z_Registration_Info_UClass_UDS_VM_QuestDialogueScene.InnerSingleton,
               StaticRegisterNativesUDS_VM_QuestDialogueScene,0x208,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_QuestDialogueScene>,
               InternalVTableHelperCtorCaller<UDS_VM_QuestDialogueScene>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_QuestDialogueScene.InnerSingleton;
}

// UDS_VM_QuestDialogueScene @ 14b6bed50

UDS_VM_QuestDialogueScene * __thiscall
UDS_VM_QuestDialogueScene::UDS_VM_QuestDialogueScene
          (UDS_VM_QuestDialogueScene *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestDialogueScene__6B_;
  *(undefined8 *)&(this->ClickNextDialogueButton).Delegate = 0;
  *(undefined8 *)&(this->ClickNextDialogueButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickNextDialogueButton).Delegate.field_0x10 = 0;
  (this->ClickSkipButton)._padding_ = '\0';
  (this->ClickSkipButton).bIsCustomSelected = false;
  (this->ClickSkipButton).bIsLacked = false;
  (this->ClickSkipButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickSkipButton).Delegate = 0;
  *(undefined8 *)&(this->ClickSkipButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickSkipButton).Delegate.field_0x10 = 0;
  (this->NpcName).StringTableType = None;
  (this->NpcName).StringTableID = 0;
  (this->NpcName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->NpcName).StringEnumTableNameID.Number = 0;
  (this->NpcName).DateTime.Ticks = 0;
  (this->NpcName).TimeSpan.Ticks = 0;
  (this->NpcName).TimeExpressionType = None;
  (this->NpcName).IsExpression = false;
  (this->NpcName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NpcName).UniqueString.Data.ArrayNum = 0;
  (this->NpcName).UniqueString.Data.ArrayMax = 0;
  (this->NpcName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NpcName).FormatArgs.ArrayNum = 0;
  (this->NpcName).FormatArgs.ArrayMax = 0;
  (this->TalkDialogue).StringTableType = None;
  (this->TalkDialogue).StringTableID = 0;
  (this->TalkDialogue).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TalkDialogue).StringEnumTableNameID.Number = 0;
  (this->TalkDialogue).DateTime.Ticks = 0;
  (this->TalkDialogue).TimeSpan.Ticks = 0;
  (this->TalkDialogue).TimeExpressionType = None;
  (this->TalkDialogue).IsExpression = false;
  (this->TalkDialogue).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TalkDialogue).UniqueString.Data.ArrayNum = 0;
  (this->TalkDialogue).UniqueString.Data.ArrayMax = 0;
  (this->TalkDialogue).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TalkDialogue).FormatArgs.ArrayNum = 0;
  (this->TalkDialogue).FormatArgs.ArrayMax = 0;
  (this->EntryBindingEventField_SelectTalkList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_SelectTalkList).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_SelectTalkList).UserObjectList.ArrayMax = 0;
  (this->FixedText_Btn_Skip).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Skip).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Skip).DateTime.Ticks = 0;
  (this->FixedText_Btn_Skip).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Skip).TimeExpressionType = None;
  (this->FixedText_Btn_Skip).IsExpression = false;
  (this->FixedText_Btn_Skip).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Skip).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Skip).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Skip).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Skip).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Skip).FormatArgs.ArrayMax = 0;
  (this->DialogueSceneEventData).EventType = None;
  (this->DialogueSceneEventData).QuestMainDialogueTableID = 0;
  (this->DialogueSceneEventData).CurTime = 0.0;
  (this->DialogueSceneEventData).KeepTime = 0.0;
  (this->DialogueSceneEventData).SequencePlaybackTime = 0.0;
  (this->TalkDialogueTimerHandle).Handle = 0;
  (this->ClickNextDialogueButton)._padding_ = '\0';
  (this->ClickNextDialogueButton).bIsCustomSelected = false;
  (this->ClickNextDialogueButton).bIsLacked = false;
  (this->ClickNextDialogueButton).bIsCustomDisabled = false;
  (this->FixedText_Btn_Skip).StringTableType = StringUi;
  (this->FixedText_Btn_Skip).StringTableID = 0xecc0;
  return this;
}

// UDS_VM_QuestDialogueScene @ 14b6beee0

UDS_VM_QuestDialogueScene * __thiscall
UDS_VM_QuestDialogueScene::UDS_VM_QuestDialogueScene
          (UDS_VM_QuestDialogueScene *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestDialogueScene__6B_;
  *(undefined8 *)&(this->ClickNextDialogueButton).Delegate = 0;
  *(undefined8 *)&(this->ClickNextDialogueButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickNextDialogueButton).Delegate.field_0x10 = 0;
  (this->ClickSkipButton)._padding_ = '\0';
  (this->ClickSkipButton).bIsCustomSelected = false;
  (this->ClickSkipButton).bIsLacked = false;
  (this->ClickSkipButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickSkipButton).Delegate = 0;
  *(undefined8 *)&(this->ClickSkipButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickSkipButton).Delegate.field_0x10 = 0;
  (this->NpcName).StringTableType = None;
  (this->NpcName).StringTableID = 0;
  (this->NpcName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->NpcName).StringEnumTableNameID.Number = 0;
  (this->NpcName).DateTime.Ticks = 0;
  (this->NpcName).TimeSpan.Ticks = 0;
  (this->NpcName).TimeExpressionType = None;
  (this->NpcName).IsExpression = false;
  (this->NpcName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NpcName).UniqueString.Data.ArrayNum = 0;
  (this->NpcName).UniqueString.Data.ArrayMax = 0;
  (this->NpcName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NpcName).FormatArgs.ArrayNum = 0;
  (this->NpcName).FormatArgs.ArrayMax = 0;
  (this->TalkDialogue).StringTableType = None;
  (this->TalkDialogue).StringTableID = 0;
  (this->TalkDialogue).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TalkDialogue).StringEnumTableNameID.Number = 0;
  (this->TalkDialogue).DateTime.Ticks = 0;
  (this->TalkDialogue).TimeSpan.Ticks = 0;
  (this->TalkDialogue).TimeExpressionType = None;
  (this->TalkDialogue).IsExpression = false;
  (this->TalkDialogue).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TalkDialogue).UniqueString.Data.ArrayNum = 0;
  (this->TalkDialogue).UniqueString.Data.ArrayMax = 0;
  (this->TalkDialogue).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TalkDialogue).FormatArgs.ArrayNum = 0;
  (this->TalkDialogue).FormatArgs.ArrayMax = 0;
  (this->EntryBindingEventField_SelectTalkList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_SelectTalkList).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_SelectTalkList).UserObjectList.ArrayMax = 0;
  (this->FixedText_Btn_Skip).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Skip).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Skip).DateTime.Ticks = 0;
  (this->FixedText_Btn_Skip).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Skip).TimeExpressionType = None;
  (this->FixedText_Btn_Skip).IsExpression = false;
  (this->FixedText_Btn_Skip).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Skip).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Skip).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Skip).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Skip).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Skip).FormatArgs.ArrayMax = 0;
  (this->DialogueSceneEventData).EventType = None;
  (this->DialogueSceneEventData).QuestMainDialogueTableID = 0;
  (this->DialogueSceneEventData).CurTime = 0.0;
  (this->DialogueSceneEventData).KeepTime = 0.0;
  (this->DialogueSceneEventData).SequencePlaybackTime = 0.0;
  (this->TalkDialogueTimerHandle).Handle = 0;
  (this->ClickNextDialogueButton)._padding_ = '\0';
  (this->ClickNextDialogueButton).bIsCustomSelected = false;
  (this->ClickNextDialogueButton).bIsLacked = false;
  (this->ClickNextDialogueButton).bIsCustomDisabled = false;
  (this->FixedText_Btn_Skip).StringTableType = StringUi;
  (this->FixedText_Btn_Skip).StringTableID = 0xecc0;
  return this;
}

// ~UDS_VM_QuestDialogueScene @ 14b6bfa00

void __thiscall
UDS_VM_QuestDialogueScene::~UDS_VM_QuestDialogueScene(UDS_VM_QuestDialogueScene *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestDialogueScene__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Btn_Skip).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_Skip).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_Skip).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_Skip).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EntryBindingEventField_SelectTalkList).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TalkDialogue).FormatArgs.AllocatorInstance.Data,
             (this->TalkDialogue).FormatArgs.ArrayNum);
  pFVar1 = (this->TalkDialogue).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TalkDialogue).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->NpcName).FormatArgs.AllocatorInstance.Data,
             (this->NpcName).FormatArgs.ArrayNum);
  pFVar1 = (this->NpcName).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NpcName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickSkipButton).Delegate);
  pvVar2 = *(void **)&(this->ClickSkipButton).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickSkipButton).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickNextDialogueButton).Delegate)
  ;
  pvVar2 = *(void **)&(this->ClickNextDialogueButton).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickNextDialogueButton).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6c1030

IClassDescriptor * __thiscall
UDS_VM_QuestDialogueScene::GetFieldNotificationDescriptor(UDS_VM_QuestDialogueScene *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_QuestDialogueScene::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6c1820

UClass * __cdecl UDS_VM_QuestDialogueScene::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_QuestDialogueScene.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_QuestDialogueScene",
               &Z_Registration_Info_UClass_UDS_VM_QuestDialogueScene.InnerSingleton,
               StaticRegisterNativesUDS_VM_QuestDialogueScene,0x208,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_QuestDialogueScene>,
               InternalVTableHelperCtorCaller<UDS_VM_QuestDialogueScene>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_QuestDialogueScene.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_QuestDialogueScene @ 14b6c1ab0

void __cdecl UDS_VM_QuestDialogueScene::StaticRegisterNativesUDS_VM_QuestDialogueScene(void)

{
  return;
}

// __VTableCtorCaller @ 14b6c2580

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_VM_QuestDialogueScene::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_ViewModelBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (UDS_ViewModelBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_ViewModelBase *)0x0) {
    UDS_ViewModelBase::UDS_ViewModelBase(this,param_1);
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
    this->_padding_ = (longlong)&___7UDS_VM_QuestDialogueScene__6B_;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1].ViewModelContext.Object = 0;
    *(undefined1 *)((longlong)&this[1].ViewModelContext.Object + 4) = 0;
    this[1].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[1].Visibility = Visible;
    *(undefined3 *)&this[1].field_0x81 = 0;
    this[1].VMName.ComparisonIndex = 0;
    *(undefined8 *)&this[1].VMName.Number = 0;
    this[1].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(undefined1 *)&this[1].TextPropertyIDList.ArrayNum = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined1 *)&this[2]._padding_ = 2;
    this[2]._padding_ = 0xecc0;
    this[2]._padding_ = 0;
    this[2].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    this[2].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    *(undefined4 *)&this[2].Visibility = 0;
    *(undefined1 *)&this[2].VMName.ComparisonIndex.Value = 0;
    *(undefined8 *)&this[2].VMName.Number = 0;
    this[2].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[2].TextPropertyIDList.ArrayNum = 0;
    this[2].TextPropertyIDList.ArrayMax = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// BindModel @ 14bf41730

void __thiscall UDS_VM_QuestDialogueScene::BindModel(UDS_VM_QuestDialogueScene *this)

{
  UDS_QuestEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_QuestEvent::GetEvent();
  if (pUVar1 != (UDS_QuestEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnQuestDialogueSceneDataDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(FDS_QuestDialogueSceneEventData_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_QuestDialogueScene>
              ((TMulticastDelegateRegistration<void___cdecl(FDS_QuestDialogueSceneEventData_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar1->OnQuestDialogueSceneDataDelegate,
               (UDS_VM_QuestDialogueScene *)&stack0x00000010,(pmf_ddbe7249 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnSelectedTalkSlotDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_QuestDialogueScene>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnSelectedTalkSlotDelegate,(UDS_VM_QuestDialogueScene *)&stack0x00000010,
               (pmf_e06b275b *)this);
  }
  return;
}

// ClearTimerTalkDialogue @ 14bf44490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_VM_QuestDialogueScene::ClearTimerTalkDialogue(UDS_VM_QuestDialogueScene *this)

{
  FTimerHandle *pFVar1;
  FTimerManager *this_00;
  FTimerData *pFVar2;
  
  pFVar1 = &this->TalkDialogueTimerHandle;
  if (pFVar1->Handle != 0) {
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar2 = FTimerManager::FindTimer(this_00,pFVar1);
    if (pFVar2 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(this_00,(FTimerHandle)pFVar1->Handle);
    }
    pFVar1->Handle = 0;
  }
  return;
}

// OnClickNextDialogueButton @ 14bf62390

void __thiscall
UDS_VM_QuestDialogueScene::OnClickNextDialogueButton
          (UDS_VM_QuestDialogueScene *this,FDS_ButtonEventField *param_1)

{
  UDS_QuestDialogueSceneManager *this_00;
  FName local_18;
  int local_10;
  
  this_00 = UDS_QuestDialogueSceneManager::GetInst();
  if (this_00 != (UDS_QuestDialogueSceneManager *)0x0) {
    UDS_QuestDialogueSceneManager::OnNextTalkDialogue(this_00);
  }
  local_10 = FFieldNotificationClassDescriptor::VisibilityNextDialogueButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibilityNextDialogueButton.FieldName;
  if (this->VisibilityNextDialogueButton != Collapsed) {
    this->VisibilityNextDialogueButton = Collapsed;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::VisibilityTalkDialogue.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibilityTalkDialogue.FieldName;
  if (this->VisibilityTalkDialogue != Collapsed) {
    this->VisibilityTalkDialogue = Collapsed;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnClickSkipButton @ 14bf62a50

void __thiscall
UDS_VM_QuestDialogueScene::OnClickSkipButton
          (UDS_VM_QuestDialogueScene *this,FDS_ButtonEventField *param_1)

{
  UDS_QuestDialogueSceneManager *this_00;
  
  this_00 = UDS_QuestDialogueSceneManager::GetInst();
  if (this_00 != (UDS_QuestDialogueSceneManager *)0x0) {
    UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
    UDS_QuestDialogueSceneManager::OnSkip(this_00);
  }
  return;
}

// OnDialogueSceneEventData @ 14bf636a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_QuestDialogueScene::OnDialogueSceneEventData
          (UDS_VM_QuestDialogueScene *this,FDS_QuestDialogueSceneEventData *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  FName FVar4;
  bool bVar5;
  UDS_QuestDialogueSceneManager *pUVar6;
  UDS_LogManager *pUVar7;
  FDS_QuestMainDialogueTableRow *pFVar8;
  undefined1 auStackY_188 [32];
  FName local_158;
  int local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pUVar6 = UDS_QuestDialogueSceneManager::GetInst();
  iVar1 = FFieldNotificationClassDescriptor::VisibilitySkipButton.BitNumber;
  FVar4 = FFieldNotificationClassDescriptor::VisibilitySkipButton.FieldName;
  if (pUVar6 != (UDS_QuestDialogueSceneManager *)0x0) {
    if (param_1->EventType == None) {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 != (UDS_LogManager *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_VM_QuestDialogueScene::OnDialogueSceneEventData",0x33,Yes);
        UDS_LogManager::PrintLog
                  (pUVar7,1,Warning,local_148.Ptr,0x42,L"FDS_QuestDialogueSceneEventType None");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    else {
      switch(param_1->EventType) {
      case ShowUI:
        UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Visible);
        break;
      case HideUI:
        UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
        break;
      case ShowSkipButton:
        if (this->VisibilitySkipButton != Visible) {
          this->VisibilitySkipButton = Visible;
          local_150 = iVar1;
          local_158 = FVar4;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
        }
        break;
      case HideSkipButton:
        if (this->VisibilitySkipButton != Collapsed) {
          this->VisibilitySkipButton = Collapsed;
          local_150 = iVar1;
          local_158 = FVar4;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
        }
        break;
      case TalkNormal:
        SetTimerTalkDialogue(this,param_1->KeepTime);
        break;
      case TalkNext:
        SetTimerTalkDialogue(this,param_1->KeepTime);
        iVar1 = FFieldNotificationClassDescriptor::VisibilityNextDialogueButton.BitNumber;
        FVar4 = FFieldNotificationClassDescriptor::VisibilityNextDialogueButton.FieldName;
        if (this->VisibilityNextDialogueButton != Visible) {
          this->VisibilityNextDialogueButton = Visible;
          local_150 = iVar1;
          local_158 = FVar4;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
        }
        break;
      case TalkSelect:
        ClearTimerTalkDialogue(this);
        iVar1 = FFieldNotificationClassDescriptor::VisibilityNextDialogueButton.BitNumber;
        FVar4 = FFieldNotificationClassDescriptor::VisibilityNextDialogueButton.FieldName;
        if (this->VisibilityNextDialogueButton != Collapsed) {
          this->VisibilityNextDialogueButton = Collapsed;
          local_150 = iVar1;
          local_158 = FVar4;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
        }
        iVar1 = FFieldNotificationClassDescriptor::VisibilitySkipButton.BitNumber;
        FVar4 = FFieldNotificationClassDescriptor::VisibilitySkipButton.FieldName;
        if (this->VisibilitySkipButton != Collapsed) {
          this->VisibilitySkipButton = Collapsed;
          local_150 = iVar1;
          local_158 = FVar4;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
        }
        UpdateSelectTalkSlotList(this);
      }
      if ((param_1->EventType == TalkNext) || ((param_1->EventType - TalkNormal & 0xfffffffd) == 0))
      {
        iVar1 = param_1->QuestMainDialogueTableID;
        fVar2 = param_1->CurTime;
        fVar3 = param_1->KeepTime;
        (this->DialogueSceneEventData).EventType = param_1->EventType;
        (this->DialogueSceneEventData).QuestMainDialogueTableID = iVar1;
        (this->DialogueSceneEventData).CurTime = fVar2;
        (this->DialogueSceneEventData).KeepTime = fVar3;
        (this->DialogueSceneEventData).SequencePlaybackTime = param_1->SequencePlaybackTime;
        FDS_Text::Reset(&this->NpcName);
        pFVar8 = FDS_QuestMainDialogueTableRow::GetRef
                           ((longlong)(this->DialogueSceneEventData).QuestMainDialogueTableID,true);
        bVar5 = FDS_QuestMainDialogueTableRow::IsValid(pFVar8);
        if (bVar5) {
          FDS_Text::SetTextFromStringID(&this->NpcName,&pFVar8->ID_StringWorld);
        }
        local_150 = FFieldNotificationClassDescriptor::NpcName.BitNumber;
        local_158 = FFieldNotificationClassDescriptor::NpcName.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
        pFVar8 = FDS_QuestMainDialogueTableRow::GetRef
                           ((longlong)param_1->QuestMainDialogueTableID,true);
        bVar5 = FDS_QuestMainDialogueTableRow::IsValid(pFVar8);
        if (bVar5) {
          SetTalkDialogue(this,pFVar8->ID_StringDialogue);
        }
      }
      local_158 = FFieldNotificationClassDescriptor::VisibilitySelectTalkPanel.FieldName;
      bVar5 = param_1->EventType != TalkSelect;
      if ((bool)this->VisibilitySelectTalkPanel != bVar5) {
        local_150 = FFieldNotificationClassDescriptor::VisibilitySelectTalkPanel.BitNumber;
        this->VisibilitySelectTalkPanel = bVar5;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
      }
    }
  }
  return;
}

// OnSelectTalkSlot @ 14bf677a0

void __thiscall
UDS_VM_QuestDialogueScene::OnSelectTalkSlot(UDS_VM_QuestDialogueScene *this,int param_1)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  FDS_QuestMainDialogueTableRow *this_00;
  FDS_QuestDialogueSceneAnswerTableRow *this_01;
  FName local_38;
  int local_30;
  FName local_28;
  int local_20;
  
  iVar3 = FFieldNotificationClassDescriptor::VisibilitySkipButton.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::VisibilitySkipButton.FieldName;
  if (this->VisibilitySkipButton != SelfHitTestInvisible) {
    this->VisibilitySkipButton = SelfHitTestInvisible;
    local_30 = iVar3;
    local_38 = FVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
  }
  iVar3 = FFieldNotificationClassDescriptor::VisibilitySelectTalkPanel.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::VisibilitySelectTalkPanel.FieldName;
  if (this->VisibilitySelectTalkPanel != Collapsed) {
    this->VisibilitySelectTalkPanel = Collapsed;
    local_20 = iVar3;
    local_28 = FVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  this_00 = FDS_QuestMainDialogueTableRow::GetRef
                      ((longlong)(this->DialogueSceneEventData).QuestMainDialogueTableID,true);
  bVar4 = FDS_QuestMainDialogueTableRow::IsValid(this_00);
  if (bVar4) {
    this_01 = FDS_QuestDialogueSceneAnswerTableRow::GetRef
                        ((longlong)this_00->ID_QuestDialogueSceneAnswer,true);
    bVar4 = FDS_QuestDialogueSceneAnswerTableRow::IsValid(this_01);
    if (((bVar4) && (-1 < param_1)) && (param_1 < (this_01->ID_StringDialogue).ArrayNum)) {
      uVar5 = 0;
      if (param_1 < (this_01->ID_StringDialogue).ArrayNum) {
        uVar5 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      SetTalkDialogue(this,*(long64 *)
                            ((this_01->ID_StringDialogue).AllocatorInstance.Data +
                            (longlong)param_1 * 8));
      if (param_1 < (this_01->DialogueKeepTime).ArrayNum) {
        uVar5 = 0;
        if (param_1 < (this_01->DialogueKeepTime).ArrayNum) {
          uVar5 = (uint)~param_1 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        SetTimerTalkDialogue
                  (this,*(float *)((this_01->DialogueKeepTime).AllocatorInstance.Data +
                                  (longlong)param_1 * 4));
      }
    }
  }
  return;
}

// OnSetViewModel @ 14bf6a4c0

void __thiscall
UDS_VM_QuestDialogueScene::OnSetViewModel
          (UDS_VM_QuestDialogueScene *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  if (param_1->Object != (FDS_ViewModelContext *)0x0) {
    UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
    iVar2 = FFieldNotificationClassDescriptor::VisibilityTalkDialogue.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::VisibilityTalkDialogue.FieldName;
    if (this->VisibilityTalkDialogue != Collapsed) {
      this->VisibilityTalkDialogue = Collapsed;
      local_10 = iVar2;
      local_18 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    iVar2 = FFieldNotificationClassDescriptor::VisibilityNextDialogueButton.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::VisibilityNextDialogueButton.FieldName;
    if (this->VisibilityNextDialogueButton != Collapsed) {
      this->VisibilityNextDialogueButton = Collapsed;
      local_10 = iVar2;
      local_18 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    UDS_WindowInfoBase::SetEscapeLock(QuestDialogueScene,true);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnTimerTalkDialogue @ 14bf71b10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_VM_QuestDialogueScene::OnTimerTalkDialogue(UDS_VM_QuestDialogueScene *this)

{
  FTimerManager *this_00;
  FTimerData *pFVar1;
  FName local_18;
  int local_10;
  
  if ((this->TalkDialogueTimerHandle).Handle != 0) {
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar1 = FTimerManager::FindTimer(this_00,&this->TalkDialogueTimerHandle);
    if (pFVar1 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer
                (this_00,(FTimerHandle)(this->TalkDialogueTimerHandle).Handle);
    }
    (this->TalkDialogueTimerHandle).Handle = 0;
  }
  local_10 = FFieldNotificationClassDescriptor::VisibilityTalkDialogue.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibilityTalkDialogue.FieldName;
  if (this->VisibilityTalkDialogue != Collapsed) {
    this->VisibilityTalkDialogue = Collapsed;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::VisibilityNextDialogueButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibilityNextDialogueButton.FieldName;
  if (this->VisibilityNextDialogueButton != Collapsed) {
    this->VisibilityNextDialogueButton = Collapsed;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::VisibilitySkipButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibilitySkipButton.FieldName;
  if (this->VisibilitySkipButton != Visible) {
    this->VisibilitySkipButton = Visible;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetNpcName @ 14bf7c7a0

void __thiscall UDS_VM_QuestDialogueScene::SetNpcName(UDS_VM_QuestDialogueScene *this)

{
  bool bVar1;
  FDS_QuestMainDialogueTableRow *this_00;
  FName local_18;
  int local_10;
  
  FDS_Text::Reset(&this->NpcName);
  this_00 = FDS_QuestMainDialogueTableRow::GetRef
                      ((longlong)(this->DialogueSceneEventData).QuestMainDialogueTableID,true);
  bVar1 = FDS_QuestMainDialogueTableRow::IsValid(this_00);
  if (bVar1) {
    FDS_Text::SetTextFromStringID(&this->NpcName,&this_00->ID_StringWorld);
  }
  local_10 = FFieldNotificationClassDescriptor::NpcName.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::NpcName.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetTalkDialogue @ 14bf7e6f0

void __thiscall
UDS_VM_QuestDialogueScene::SetTalkDialogue(UDS_VM_QuestDialogueScene *this,long64 param_1)

{
  int *piVar1;
  bool bVar2;
  FDS_StringDialogueTableRow *this_00;
  FName local_18;
  int local_10;
  
  FDS_Text::Reset(&this->TalkDialogue);
  if (0 < param_1) {
    this_00 = FDS_StringDialogueTableRow::GetRef(param_1,true);
    bVar2 = FDS_StringDialogueTableRow::IsValid(this_00);
    if (bVar2) {
      (this->TalkDialogue).StringTableType = StringDialogue;
      (this->TalkDialogue).StringTableID = param_1;
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)(this->TalkDialogue).FormatArgs.AllocatorInstance.Data,
                 (this->TalkDialogue).FormatArgs.ArrayNum);
      piVar1 = &(this->TalkDialogue).FormatArgs.ArrayMax;
      (this->TalkDialogue).FormatArgs.ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,&(this->TalkDialogue).FormatArgs.AllocatorInstance,0,piVar1);
      }
      local_10 = FFieldNotificationClassDescriptor::VisibilityTalkDialogue.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::VisibilityTalkDialogue.FieldName;
      if (this->VisibilityTalkDialogue != SelfHitTestInvisible) {
        this->VisibilityTalkDialogue = SelfHitTestInvisible;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      }
    }
  }
  local_10 = FFieldNotificationClassDescriptor::TalkDialogue.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TalkDialogue.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetTimerTalkDialogue @ 14bf7ea90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_VM_QuestDialogueScene::SetTimerTalkDialogue(UDS_VM_QuestDialogueScene *this,float param_1)

{
  FTimerManager *pFVar1;
  FTimerData *pFVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  UDS_VM_QuestDialogueScene *local_res18;
  FDelegateAllocation local_48;
  code *local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (0.0 < param_1) {
    if ((this->TalkDialogueTimerHandle).Handle != 0) {
      pFVar1 = FDS_TimerManager::Get((UObject *)0x0);
      pFVar2 = FTimerManager::FindTimer(pFVar1,&this->TalkDialogueTimerHandle);
      if (pFVar2 != (FTimerData *)0x0) {
        FTimerManager::InternalClearTimer
                  (pFVar1,(FTimerHandle)(this->TalkDialogueTimerHandle).Handle);
      }
      (this->TalkDialogueTimerHandle).Handle = 0;
    }
    pFVar1 = FDS_TimerManager::Get((UObject *)0x0);
    uStack_30 = 0;
    local_38 = OnTimerTalkDialogue;
    local_48.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_48.DelegateSize = 0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x30,&local_48);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_QuestDialogueScene____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_QuestDialogueScene *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar3[3] = 0;
      local_res18 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_QuestDialogueScene *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res18);
      puVar3[4] = local_38;
      puVar3[5] = CONCAT44(uStack_2c,uStack_30);
    }
    FTimerManager::SetTimer
              (pFVar1,&this->TalkDialogueTimerHandle,
               (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)&local_48
               ,param_1,false,__real_bf800000);
    if ((local_48.DelegateSize != 0) &&
       (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_48.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_48,0,0,0x10);
      local_48.DelegateSize = 0;
    }
    if (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_48.DelegateAllocator);
    }
  }
  return;
}

// SetVisibilityNextDialogueButton @ 14bf81ea0

void __thiscall
UDS_VM_QuestDialogueScene::SetVisibilityNextDialogueButton
          (UDS_VM_QuestDialogueScene *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::VisibilityNextDialogueButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibilityNextDialogueButton.FieldName;
  if (this->VisibilityNextDialogueButton != *param_1) {
    this->VisibilityNextDialogueButton = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVisibilitySelectTalkPanel @ 14bf820d0

void __thiscall
UDS_VM_QuestDialogueScene::SetVisibilitySelectTalkPanel
          (UDS_VM_QuestDialogueScene *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::VisibilitySelectTalkPanel.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibilitySelectTalkPanel.FieldName;
  if (this->VisibilitySelectTalkPanel != *param_1) {
    this->VisibilitySelectTalkPanel = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVisibilitySkipButton @ 14bf82120

void __thiscall
UDS_VM_QuestDialogueScene::SetVisibilitySkipButton
          (UDS_VM_QuestDialogueScene *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::VisibilitySkipButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibilitySkipButton.FieldName;
  if (this->VisibilitySkipButton != *param_1) {
    this->VisibilitySkipButton = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVisibilityTalkDialogue @ 14bf821c0

void __thiscall
UDS_VM_QuestDialogueScene::SetVisibilityTalkDialogue
          (UDS_VM_QuestDialogueScene *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::VisibilityTalkDialogue.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibilityTalkDialogue.FieldName;
  if (this->VisibilityTalkDialogue != *param_1) {
    this->VisibilityTalkDialogue = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14bf85120

void __thiscall UDS_VM_QuestDialogueScene::UnbindModel(UDS_VM_QuestDialogueScene *this)

{
  UDS_QuestEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_QuestEvent::GetEvent();
  if (pUVar1 != (UDS_QuestEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnQuestDialogueSceneDataDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnSelectedTalkSlotDelegate,this);
  }
  return;
}

// UpdateSelectTalkSlotList @ 14bf89bb0

void __thiscall UDS_VM_QuestDialogueScene::UpdateSelectTalkSlotList(UDS_VM_QuestDialogueScene *this)

{
  UStruct *pUVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  FDS_QuestMainDialogueTableRow *this_00;
  FDS_QuestDialogueSceneAnswerTableRow *this_01;
  UDS_UserObjectListItem *this_02;
  FDS_ViewModelContext *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  UScriptStruct *pUVar7;
  UDS_ViewModelContextManager *this_03;
  ulonglong uVar8;
  FDS_ViewModelContext *pFVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  undefined1 local_res8 [8];
  uint local_res10;
  UDS_UserObjectListItem *local_res18;
  FScriptContainerElement *local_res20;
  FName local_78;
  int local_70;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_SelectTalkList);
  this_00 = FDS_QuestMainDialogueTableRow::GetRef
                      ((longlong)(this->DialogueSceneEventData).QuestMainDialogueTableID,true);
  bVar4 = FDS_QuestMainDialogueTableRow::IsValid(this_00);
  if (bVar4) {
    this_01 = FDS_QuestDialogueSceneAnswerTableRow::GetRef
                        ((longlong)this_00->ID_QuestDialogueSceneAnswer,true);
    bVar4 = FDS_QuestDialogueSceneAnswerTableRow::IsValid(this_01);
    if (bVar4) {
      local_res10 = (this_01->ID_AnswerTitle).ArrayNum;
      uVar8 = (ulonglong)(int)local_res10;
      iVar11 = 0;
      pFVar10 = (this_01->ID_AnswerTitle).AllocatorInstance.Data;
      local_res20 = pFVar10 + uVar8 * 8;
      while( true ) {
        pFVar3 = local_res20;
        pFVar9 = (FDS_ViewModelContext *)0x0;
        if ((this_01->ID_AnswerTitle).ArrayNum != (int)uVar8) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<__int64_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pFVar10 == pFVar3) break;
        pUVar1 = *(UStruct **)pFVar10;
        this_02 = NewObject<UDS_UserObjectListItem>((UObject *)this);
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (this_02 == (UDS_UserObjectListItem *)0x0) {
            return;
          }
        }
        else {
          if (this_02 == (UDS_UserObjectListItem *)0x0) {
            return;
          }
          UE::GC::MarkAsReachable((UObject *)this_02);
        }
        pFVar5 = ::operator_new(0x30);
        if (pFVar5 != (FDS_ViewModelContext *)0x0) {
          *(undefined8 *)&pFVar5->ViewModelTemplateKey = 0;
          *(undefined4 *)((longlong)&pFVar5[1]._padding_ + 4) = 0;
          pFVar5->DerivedStaticStruct = (UStruct *)0x0;
          (pFVar5->ViewModelName).ComparisonIndex = 0;
          (pFVar5->ViewModelName).Number = 0;
          pFVar5->_padding_ =
               (longlong)&___7FDS_ViewModelContext_QuestDialogueScene_SelectTalkSlot__6B_;
          *(undefined4 *)&pFVar5[1]._padding_ = 0;
          pFVar5[1].DerivedStaticStruct = (UStruct *)0x0;
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
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_QuestDialogueScene_SelectTalkSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
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
        pUVar7 = FDS_ViewModelContext_QuestDialogueScene_SelectTalkSlot::StaticStruct();
        pFVar9->DerivedStaticStruct = (UStruct *)pUVar7;
        this_03 = UDS_ViewModelContextManager::GetInst();
        if (this_03 != (UDS_ViewModelContextManager *)0x0) {
          if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_68.Object = pFVar9;
          local_68.SharedReferenceCount.ReferenceController = pTVar6;
          UDS_ViewModelContextManager::RegisterContext(this_03,&local_68);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_68.SharedReferenceCount.ReferenceController);
        }
        pFVar9->ViewModelTemplateKey = QuestDialogueScene_SelectTalkSlot;
        pFVar9[1].DerivedStaticStruct = pUVar1;
        *(int *)&pFVar9[1]._padding_ = iVar11;
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_58.Object = pFVar9;
        local_58.SharedReferenceCount.ReferenceController = pTVar6;
        UDS_UserObjectListItem::AddContext(this_02,&local_58);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
        iVar11 = iVar11 + 1;
        local_res18 = this_02;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_02);
        }
        FDS_EntryBindingEventField::Add
                  (&this->EntryBindingEventField_SelectTalkList,
                   (TObjectPtr<UDS_UserObjectListItem>)&local_res18);
        uVar8 = (ulonglong)local_res10;
        pFVar10 = pFVar10 + 8;
      }
    }
  }
  local_70 = FFieldNotificationClassDescriptor::EntryBindingEventField_SelectTalkList.BitNumber;
  local_78 = FFieldNotificationClassDescriptor::EntryBindingEventField_SelectTalkList.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
  return;
}

