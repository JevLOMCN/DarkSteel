// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 23

// SetClickTraceButton_WrapperImpl @ 14b6c4770

void __cdecl
UDS_VM_QuestMainChapterInfo::SetClickTraceButton_WrapperImpl(void *param_1,void *param_2)

{
  UDS_QuestManager *this;
  
  if (*(char *)((longlong)param_2 + 3) != '\x01') {
    this = UDS_QuestManager::GetInst();
    if (this != (UDS_QuestManager *)0x0) {
      UDS_QuestManager::OnReqQuestTrace(this,*(int *)((longlong)param_1 + 0x204));
      return;
    }
  }
  return;
}

// SetClickStepPopupButton_WrapperImpl @ 14b6c4780

void __cdecl
UDS_VM_QuestMainChapterInfo::SetClickStepPopupButton_WrapperImpl(void *param_1,void *param_2)

{
  char cVar1;
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::IsShowStepPopup.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsShowStepPopup.FieldName;
  cVar1 = *(char *)((longlong)param_1 + 0xf0);
  if ((bool)cVar1 != (cVar1 == '\0')) {
    *(bool *)((longlong)param_1 + 0xf0) = cVar1 == '\0';
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  return;
}

// StaticClass @ 14b6c4790

UClass * __cdecl UDS_VM_QuestMainChapterInfo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_QuestMainChapterInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_QuestMainChapterInfo",
               &Z_Registration_Info_UClass_UDS_VM_QuestMainChapterInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_QuestMainChapterInfo,0x208,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_QuestMainChapterInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_QuestMainChapterInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_QuestMainChapterInfo.InnerSingleton;
}

// UDS_VM_QuestMainChapterInfo @ 14b6ca3d0

UDS_VM_QuestMainChapterInfo * __thiscall
UDS_VM_QuestMainChapterInfo::UDS_VM_QuestMainChapterInfo
          (UDS_VM_QuestMainChapterInfo *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestMainChapterInfo__6B_;
  *(undefined8 *)&(this->ClickTraceButton).Delegate = 0;
  *(undefined8 *)&(this->ClickTraceButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickTraceButton).Delegate.field_0x10 = 0;
  (this->ClickStepPopupButton)._padding_ = '\0';
  (this->ClickStepPopupButton).bIsCustomSelected = false;
  (this->ClickStepPopupButton).bIsLacked = false;
  (this->ClickStepPopupButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickStepPopupButton).Delegate = 0;
  *(undefined8 *)&(this->ClickStepPopupButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickStepPopupButton).Delegate.field_0x10 = 0;
  (this->EntryBindingEventField_StoryList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_StoryList).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_StoryList).UserObjectList.ArrayMax = 0;
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
  (this->VM_QuestInfo_Reward).field0_0x0.DebugPtr = (UDS_VM_QuestInfo_Reward *)0x0;
  (this->VM_QuestMainStoryInfo).field0_0x0.DebugPtr = (UDS_VM_QuestMainStoryInfo *)0x0;
  (this->VM_QuestMainChapterStepPopup).field0_0x0.DebugPtr = (UDS_VM_QuestMainChapterStepPopup *)0x0
  ;
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
  (this->FixedText_Btn_StepPopup).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_StepPopup).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_StepPopup).DateTime.Ticks = 0;
  (this->FixedText_Btn_StepPopup).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_StepPopup).TimeExpressionType = None;
  (this->FixedText_Btn_StepPopup).IsExpression = false;
  (this->FixedText_Btn_StepPopup).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_StepPopup).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_StepPopup).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_StepPopup).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedText_Btn_StepPopup).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_StepPopup).FormatArgs.ArrayMax = 0;
  this->ChapterIndex = 0;
  this->QuestID = 0;
  (this->ClickTraceButton)._padding_ = '\0';
  (this->ClickTraceButton).bIsCustomSelected = false;
  (this->ClickTraceButton).bIsLacked = false;
  (this->ClickTraceButton).bIsCustomDisabled = false;
  (this->FixedText_Btn_Trace).StringTableType = StringUi;
  (this->FixedText_Btn_Trace).StringTableID = 0xeb8f;
  (this->FixedText_Btn_StepPopup).StringTableType = StringUi;
  (this->FixedText_Btn_StepPopup).StringTableID = 0xeb93;
  return this;
}

// UDS_VM_QuestMainChapterInfo @ 14b6ca560

UDS_VM_QuestMainChapterInfo * __thiscall
UDS_VM_QuestMainChapterInfo::UDS_VM_QuestMainChapterInfo
          (UDS_VM_QuestMainChapterInfo *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestMainChapterInfo__6B_;
  *(undefined8 *)&(this->ClickTraceButton).Delegate = 0;
  *(undefined8 *)&(this->ClickTraceButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickTraceButton).Delegate.field_0x10 = 0;
  (this->ClickStepPopupButton)._padding_ = '\0';
  (this->ClickStepPopupButton).bIsCustomSelected = false;
  (this->ClickStepPopupButton).bIsLacked = false;
  (this->ClickStepPopupButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickStepPopupButton).Delegate = 0;
  *(undefined8 *)&(this->ClickStepPopupButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickStepPopupButton).Delegate.field_0x10 = 0;
  (this->EntryBindingEventField_StoryList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_StoryList).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_StoryList).UserObjectList.ArrayMax = 0;
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
  (this->VM_QuestInfo_Reward).field0_0x0.DebugPtr = (UDS_VM_QuestInfo_Reward *)0x0;
  (this->VM_QuestMainStoryInfo).field0_0x0.DebugPtr = (UDS_VM_QuestMainStoryInfo *)0x0;
  (this->VM_QuestMainChapterStepPopup).field0_0x0.DebugPtr = (UDS_VM_QuestMainChapterStepPopup *)0x0
  ;
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
  (this->FixedText_Btn_StepPopup).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_StepPopup).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_StepPopup).DateTime.Ticks = 0;
  (this->FixedText_Btn_StepPopup).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_StepPopup).TimeExpressionType = None;
  (this->FixedText_Btn_StepPopup).IsExpression = false;
  (this->FixedText_Btn_StepPopup).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_StepPopup).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_StepPopup).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_StepPopup).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedText_Btn_StepPopup).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_StepPopup).FormatArgs.ArrayMax = 0;
  this->ChapterIndex = 0;
  this->QuestID = 0;
  (this->ClickTraceButton)._padding_ = '\0';
  (this->ClickTraceButton).bIsCustomSelected = false;
  (this->ClickTraceButton).bIsLacked = false;
  (this->ClickTraceButton).bIsCustomDisabled = false;
  (this->FixedText_Btn_Trace).StringTableType = StringUi;
  (this->FixedText_Btn_Trace).StringTableID = 0xeb8f;
  (this->FixedText_Btn_StepPopup).StringTableType = StringUi;
  (this->FixedText_Btn_StepPopup).StringTableID = 0xeb93;
  return this;
}

// ~UDS_VM_QuestMainChapterInfo @ 14b6cc600

void __thiscall
UDS_VM_QuestMainChapterInfo::~UDS_VM_QuestMainChapterInfo(UDS_VM_QuestMainChapterInfo *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestMainChapterInfo__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Btn_StepPopup).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_StepPopup).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_StepPopup).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_StepPopup).UniqueString.Data.AllocatorInstance.Data;
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
  pFVar1 = (this->EntryBindingEventField_StoryList).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickStepPopupButton).Delegate);
  pvVar2 = *(void **)&(this->ClickStepPopupButton).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickStepPopupButton).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickTraceButton).Delegate);
  pvVar2 = *(void **)&(this->ClickTraceButton).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickTraceButton).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6cf920

IClassDescriptor * __thiscall
UDS_VM_QuestMainChapterInfo::GetFieldNotificationDescriptor(UDS_VM_QuestMainChapterInfo *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_QuestMainChapterInfo::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6d0540

UClass * __cdecl UDS_VM_QuestMainChapterInfo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_QuestMainChapterInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_QuestMainChapterInfo",
               &Z_Registration_Info_UClass_UDS_VM_QuestMainChapterInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_QuestMainChapterInfo,0x208,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_QuestMainChapterInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_QuestMainChapterInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_QuestMainChapterInfo.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_QuestMainChapterInfo @ 14b6d1040

void __cdecl UDS_VM_QuestMainChapterInfo::StaticRegisterNativesUDS_VM_QuestMainChapterInfo(void)

{
  return;
}

// __VTableCtorCaller @ 14b6d1c90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_VM_QuestMainChapterInfo::__VTableCtorCaller(FVTableHelper *param_1)

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
    this[3]._padding_ = 0;
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
    this->_padding_ = (longlong)&___7UDS_VM_QuestMainChapterInfo__6B_;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    this[1].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    *(undefined4 *)&this[1].Visibility = 0;
    *(undefined1 *)&this[1].VMName.ComparisonIndex.Value = 0;
    *(undefined8 *)&this[1].VMName.Number = 0;
    this[1].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].TextPropertyIDList.ArrayNum = 0;
    this[1].TextPropertyIDList.ArrayMax = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined1 *)&this[2]._padding_ = 2;
    this[2]._padding_ = 0xeb8f;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined1 *)&this[2].ViewModelContext.Object = 2;
    this[2].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0xeb93;
    this[2].Visibility = Visible;
    *(undefined3 *)&this[2].field_0x81 = 0;
    this[2].VMName.ComparisonIndex = 0;
    *(undefined8 *)&this[2].VMName.Number = 0;
    this[2].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[2].TextPropertyIDList.ArrayNum = 0;
    *(undefined1 *)&this[2].TextPropertyIDList.ArrayMax = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// BindModel @ 14bf41b20

void __thiscall UDS_VM_QuestMainChapterInfo::BindModel(UDS_VM_QuestMainChapterInfo *this)

{
  UDS_QuestEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_QuestEvent::GetEvent();
  if (pUVar1 != (UDS_QuestEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangedTraceQuestDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_QuestMainChapterInfo>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangedTraceQuestDelegate,(UDS_VM_QuestMainChapterInfo *)&stack0x00000010,
               (pmf_2b252cb1 *)this);
  }
  return;
}

// OnChangedTraceQuestID @ 14bf60fb0

void __thiscall
UDS_VM_QuestMainChapterInfo::OnChangedTraceQuestID(UDS_VM_QuestMainChapterInfo *this,int param_1)

{
  bool bVar1;
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::DisableTraceButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::DisableTraceButton.FieldName;
  bVar1 = param_1 == this->QuestID;
  if (this->DisableTraceButton != bVar1) {
    this->DisableTraceButton = bVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnClickStepPopupButton @ 14bf62d30

void __thiscall
UDS_VM_QuestMainChapterInfo::OnClickStepPopupButton
          (UDS_VM_QuestMainChapterInfo *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsShowStepPopup.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsShowStepPopup.FieldName;
  bVar1 = this->IsShowStepPopup;
  if (bVar1 != (bVar1 == false)) {
    this->IsShowStepPopup = bVar1 == false;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnClickTraceButton @ 14bf62e80

void __thiscall
UDS_VM_QuestMainChapterInfo::OnClickTraceButton
          (UDS_VM_QuestMainChapterInfo *this,FDS_ButtonEventField *param_1)

{
  UDS_QuestManager *this_00;
  
  if (param_1->bIsCustomDisabled != true) {
    this_00 = UDS_QuestManager::GetInst();
    if (this_00 != (UDS_QuestManager *)0x0) {
      UDS_QuestManager::OnReqQuestTrace(this_00,this->QuestID);
      return;
    }
  }
  return;
}

// OnSetViewModel @ 14bf6b4b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_VM_QuestMainChapterInfo::OnSetViewModel
          (UDS_VM_QuestMainChapterInfo *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  FName FVar4;
  FDS_ViewModelContext_Quest *pFVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  UDS_QuestManager *pUVar9;
  FDS_QuestMainTableRow *this_00;
  FDS_QuestMainChapterInfoTableRow *this_01;
  UDS_VM_QuestInfo_Reward *pUVar10;
  UClass *pUVar11;
  UClass *pUVar12;
  UDS_VM_QuestMainChapterStepPopup *pUVar13;
  longlong *plVar14;
  undefined8 uVar15;
  ForAnyElementType FVar16;
  undefined1 auStack_198 [32];
  undefined1 local_178 [8];
  undefined8 local_170;
  TArray<FDS_QuestMainTableRow_const_*,TSizedDefaultAllocator<32>_> local_168;
  TSharedPtr<FDS_ViewModelContext_Quest,1> local_158;
  TSharedPtr<FDS_ViewModelContext_Quest,1> local_148;
  FName local_138;
  int local_130;
  FName local_128;
  int local_120;
  FName local_118;
  int local_110;
  FName local_108;
  int local_100;
  TSharedPtr<FDS_ViewModelContext_QuestMainChapterInfo,1> local_f8;
  TSharedPtr<FDS_ViewModelContext,1> local_e8;
  TSharedPtr<FDS_ViewModelContext,1> local_d8;
  TSharedPtr<FDS_ViewModelContext,1> local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_198;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_e8.Object = param_1->Object;
  local_e8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_QuestMainChapterInfo>(&local_f8,&local_e8);
  if (local_f8.Object == (FDS_ViewModelContext_QuestMainChapterInfo *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f8.SharedReferenceCount.ReferenceController);
    goto LAB_14bf6b983;
  }
  this->ChapterIndex = (local_f8.Object)->ChapterIndex;
  pUVar9 = UDS_QuestManager::GetInst();
  if (pUVar9 != (UDS_QuestManager *)0x0) {
    iVar7 = UDS_QuestManager::GetProgressMainQuestID();
    this_00 = FDS_QuestMainTableRow::GetRef((longlong)iVar7,true);
    bVar6 = FDS_QuestMainTableRow::IsValid(this_00);
    if (bVar6) {
      if (this->ChapterIndex == this_00->ChapterIndex) {
        iVar7 = UDS_QuestManager::GetProgressMainQuestID();
        this->QuestID = iVar7;
      }
      else {
        FDS_QuestMainTableRow::GetAll(&local_168);
        iVar7 = local_168.ArrayNum;
        pFVar1 = local_168.AllocatorInstance.Data + (longlong)iVar7 * 8;
        uVar15 = local_168._8_8_;
        FVar16.Data = local_168.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar15 != iVar7) {
            local_178[0] = 0;
            `TCheckedPointerIterator<FDS_QuestMainTableRow_const_*,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_178);
            uVar15 = local_168._8_8_;
          }
          if (FVar16.Data == pFVar1) break;
          if ((*(int *)(*(longlong *)FVar16.Data + 0x24) == this->ChapterIndex) &&
             (iVar8 = *(int *)(*(longlong *)FVar16.Data + 8), this->QuestID < iVar8)) {
            this->QuestID = iVar8;
          }
          FVar16.Data = FVar16.Data + 8;
        }
        if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.AllocatorInstance.Data);
        }
      }
    }
  }
  FDS_Text::Reset(&this->ChapterTitle);
  if (0 < this->ChapterIndex) {
    this_01 = FDS_QuestMainChapterInfoTableRow::GetRef((longlong)this->ChapterIndex,true);
    bVar6 = FDS_QuestMainChapterInfoTableRow::IsValid(this_01);
    if (bVar6) {
      FDS_Text::SetTextFromStringID(&this->ChapterTitle,&this_01->ID_ChapterTitle);
    }
  }
  local_130 = FFieldNotificationClassDescriptor::ChapterTitle.BitNumber;
  local_138 = FFieldNotificationClassDescriptor::ChapterTitle.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_138);
  SetVM_QuestMainStoryInfo(this);
  iVar7 = FFieldNotificationClassDescriptor::IsShowStepPopup.BitNumber;
  FVar4 = FFieldNotificationClassDescriptor::IsShowStepPopup.FieldName;
  if (this->IsShowStepPopup != false) {
    this->IsShowStepPopup = false;
    local_120 = iVar7;
    local_128 = FVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_128);
  }
  if ((local_f8.Object)->IsPreviousStory == true) {
    UpdateChapterStoryList(this);
  }
  else {
    if ((this->VM_QuestInfo_Reward).field0_0x0.DebugPtr == (UDS_VM_QuestInfo_Reward *)0x0) {
      pUVar10 = UDS_ViewModelBase::CreateViewModel<UDS_VM_QuestInfo_Reward>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar10 != (UDS_VM_QuestInfo_Reward *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar10);
      }
      (this->VM_QuestInfo_Reward).field0_0x0.DebugPtr = pUVar10;
      if (pUVar10 != (UDS_VM_QuestInfo_Reward *)0x0) goto LAB_14bf6b6fa;
    }
    else {
LAB_14bf6b6fa:
      MakeContext<FDS_ViewModelContext_Quest>(&local_158);
      pFVar5 = local_158.Object;
      if (local_158.Object != (FDS_ViewModelContext_Quest *)0x0) {
        if ((local_158.Object == (FDS_ViewModelContext_Quest *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined4 *)&pFVar5->_padding_ = 0x77;
        pFVar5->QuestID = this->QuestID;
        pUVar10 = (this->VM_QuestInfo_Reward).field0_0x0.DebugPtr;
        local_d8.Object = (FDS_ViewModelContext *)local_158.Object;
        local_d8.SharedReferenceCount.ReferenceController =
             local_158.SharedReferenceCount.ReferenceController;
        if (local_158.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar10,&local_d8);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_158.SharedReferenceCount.ReferenceController);
    }
    local_110 = FFieldNotificationClassDescriptor::VM_QuestInfo_Reward.BitNumber;
    local_118 = FFieldNotificationClassDescriptor::VM_QuestInfo_Reward.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_118);
    if ((this->VM_QuestMainChapterStepPopup).field0_0x0.DebugPtr ==
        (UDS_VM_QuestMainChapterStepPopup *)0x0) {
      local_170 = 0;
      pUVar11 = Z_Construct_UClass_UDS_VM_QuestMainChapterStepPopup_NoRegister();
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar12 = Z_Construct_UClass_UDS_VM_QuestMainChapterStepPopup_NoRegister();
      CheckIsClassChildOf_Internal(pUVar12,pUVar11);
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_b8,pUVar11);
      local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
      local_b8._56_8_ = (UPackage *)0x0;
      local_b8._16_4_ = 0;
      local_b8._20_4_ = 0;
      local_b8._24_4_ = RF_Transient;
      local_b8._40_8_ = (UObject *)0x0;
      local_b8[0x20] = false;
      local_b8._8_8_ = this;
      pUVar13 = (UDS_VM_QuestMainChapterStepPopup *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
      if (local_b8._64_8_ != 0) {
        plVar14 = (longlong *)(local_b8 + 0x50);
        if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
          plVar14 = (longlong *)local_b8._104_8_;
        }
        (**(code **)(*plVar14 + 0x10))();
      }
      if (pUVar13 != (UDS_VM_QuestMainChapterStepPopup *)0x0) {
        *(undefined1 *)((longlong)&pUVar13->_padding_ + 4) = 0;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar13 != (UDS_VM_QuestMainChapterStepPopup *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar13);
      }
      (this->VM_QuestMainChapterStepPopup).field0_0x0.DebugPtr = pUVar13;
      if (pUVar13 != (UDS_VM_QuestMainChapterStepPopup *)0x0) goto LAB_14bf6b87f;
    }
    else {
LAB_14bf6b87f:
      MakeContext<FDS_ViewModelContext_Quest>(&local_148);
      pFVar5 = local_148.Object;
      if (local_148.Object != (FDS_ViewModelContext_Quest *)0x0) {
        if ((local_148.Object == (FDS_ViewModelContext_Quest *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined4 *)&pFVar5->_padding_ = 0x89;
        pFVar5->QuestID = this->QuestID;
        pUVar13 = (this->VM_QuestMainChapterStepPopup).field0_0x0.DebugPtr;
        local_c8.Object = (FDS_ViewModelContext *)local_148.Object;
        local_c8.SharedReferenceCount.ReferenceController =
             local_148.SharedReferenceCount.ReferenceController;
        if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar13,&local_c8);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_148.SharedReferenceCount.ReferenceController);
    }
    pUVar9 = UDS_QuestManager::GetInst();
    if (pUVar9 != (UDS_QuestManager *)0x0) {
      iVar8 = UDS_QuestManager::GetTraceQuestID(pUVar9);
      iVar7 = FFieldNotificationClassDescriptor::DisableTraceButton.BitNumber;
      FVar4 = FFieldNotificationClassDescriptor::DisableTraceButton.FieldName;
      bVar6 = iVar8 == this->QuestID;
      if (this->DisableTraceButton != bVar6) {
        this->DisableTraceButton = bVar6;
        local_100 = iVar7;
        local_108 = FVar4;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_108);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.SharedReferenceCount.ReferenceController);
LAB_14bf6b983:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetChapterTitle @ 14bf79850

void __thiscall UDS_VM_QuestMainChapterInfo::SetChapterTitle(UDS_VM_QuestMainChapterInfo *this)

{
  bool bVar1;
  FDS_QuestMainChapterInfoTableRow *this_00;
  FName local_18;
  int local_10;
  
  FDS_Text::Reset(&this->ChapterTitle);
  if (0 < this->ChapterIndex) {
    this_00 = FDS_QuestMainChapterInfoTableRow::GetRef((longlong)this->ChapterIndex,true);
    bVar1 = FDS_QuestMainChapterInfoTableRow::IsValid(this_00);
    if (bVar1) {
      FDS_Text::SetTextFromStringID(&this->ChapterTitle,&this_00->ID_ChapterTitle);
    }
  }
  local_10 = FFieldNotificationClassDescriptor::ChapterTitle.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ChapterTitle.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetDisableTraceButton @ 14bf7a730

void __thiscall
UDS_VM_QuestMainChapterInfo::SetDisableTraceButton(UDS_VM_QuestMainChapterInfo *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::DisableTraceButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::DisableTraceButton.FieldName;
  if (this->DisableTraceButton != *param_1) {
    this->DisableTraceButton = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetIsShowStepPopup @ 14bf7b750

void __thiscall
UDS_VM_QuestMainChapterInfo::SetIsShowStepPopup(UDS_VM_QuestMainChapterInfo *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsShowStepPopup.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsShowStepPopup.FieldName;
  if (this->IsShowStepPopup != *param_1) {
    this->IsShowStepPopup = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVM_QuestInfo_Reward @ 14bf80a80

void __thiscall
UDS_VM_QuestMainChapterInfo::SetVM_QuestInfo_Reward(UDS_VM_QuestMainChapterInfo *this)

{
  code *pcVar1;
  FDS_ViewModelContext_Quest *pFVar2;
  bool bVar3;
  UDS_VM_QuestInfo_Reward *pUVar4;
  FName local_38;
  int local_30;
  TSharedPtr<FDS_ViewModelContext_Quest,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((this->VM_QuestInfo_Reward).field0_0x0.DebugPtr == (UDS_VM_QuestInfo_Reward *)0x0) {
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_QuestInfo_Reward>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDS_VM_QuestInfo_Reward *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VM_QuestInfo_Reward).field0_0x0.DebugPtr = pUVar4;
    if (pUVar4 == (UDS_VM_QuestInfo_Reward *)0x0) goto LAB_14bf80b5e;
  }
  MakeContext<FDS_ViewModelContext_Quest>(&local_28);
  pFVar2 = local_28.Object;
  if (local_28.Object != (FDS_ViewModelContext_Quest *)0x0) {
    if ((local_28.Object == (FDS_ViewModelContext_Quest *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)&pFVar2->_padding_ = 0x77;
    pFVar2->QuestID = this->QuestID;
    pUVar4 = (this->VM_QuestInfo_Reward).field0_0x0.DebugPtr;
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
LAB_14bf80b5e:
  local_30 = FFieldNotificationClassDescriptor::VM_QuestInfo_Reward.BitNumber;
  local_38 = FFieldNotificationClassDescriptor::VM_QuestInfo_Reward.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
  return;
}

// SetVM_QuestMainChapterStepPopup @ 14bf80e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_VM_QuestMainChapterInfo::SetVM_QuestMainChapterStepPopup(UDS_VM_QuestMainChapterInfo *this)

{
  FName FVar1;
  code *pcVar2;
  FDS_ViewModelContext_Quest *pFVar3;
  bool bVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UDS_VM_QuestMainChapterStepPopup *pUVar7;
  longlong *plVar8;
  undefined1 auStack_e8 [32];
  FName local_c8;
  TSharedPtr<FDS_ViewModelContext_Quest,1> local_b8;
  TSharedPtr<FDS_ViewModelContext,1> local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  FVar1 = (FName)(this->VM_QuestMainChapterStepPopup).field0_0x0.DebugPtr;
  if (FVar1 == (FName)0x0) {
    local_c8 = FVar1;
    pUVar5 = Z_Construct_UClass_UDS_VM_QuestMainChapterStepPopup_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar6 = Z_Construct_UClass_UDS_VM_QuestMainChapterStepPopup_NoRegister();
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
    pUVar7 = (UDS_VM_QuestMainChapterStepPopup *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar8 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (pUVar7 != (UDS_VM_QuestMainChapterStepPopup *)0x0) {
      *(undefined1 *)((longlong)&pUVar7->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar7 != (UDS_VM_QuestMainChapterStepPopup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    (this->VM_QuestMainChapterStepPopup).field0_0x0.DebugPtr = pUVar7;
    if (pUVar7 == (UDS_VM_QuestMainChapterStepPopup *)0x0) {
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
    *(undefined4 *)&pFVar3->_padding_ = 0x89;
    pFVar3->QuestID = this->QuestID;
    pUVar7 = (this->VM_QuestMainChapterStepPopup).field0_0x0.DebugPtr;
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

// SetVM_QuestMainStoryInfo @ 14bf80ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_VM_QuestMainChapterInfo::SetVM_QuestMainStoryInfo(UDS_VM_QuestMainChapterInfo *this)

{
  code *pcVar1;
  FDS_ViewModelContext_QuestMainStoryInfo *pFVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UDS_VM_QuestMainStoryInfo *pUVar6;
  FDS_QuestBaseTableRow *this_00;
  longlong *plVar7;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  TSharedPtr<FDS_ViewModelContext_QuestMainStoryInfo,1> local_118;
  FDS_Text local_108;
  TSharedPtr<FDS_ViewModelContext,1> local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  if ((this->VM_QuestMainStoryInfo).field0_0x0.DebugPtr == (UDS_VM_QuestMainStoryInfo *)0x0) {
    local_128 = 0;
    pUVar4 = Z_Construct_UClass_UDS_VM_QuestMainStoryInfo_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar5 = Z_Construct_UClass_UDS_VM_QuestMainStoryInfo_NoRegister();
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
    pUVar6 = (UDS_VM_QuestMainStoryInfo *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar7 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar7 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
    if (pUVar6 != (UDS_VM_QuestMainStoryInfo *)0x0) {
      *(undefined1 *)((longlong)&pUVar6->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 != (UDS_VM_QuestMainStoryInfo *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    (this->VM_QuestMainStoryInfo).field0_0x0.DebugPtr = pUVar6;
    if (pUVar6 == (UDS_VM_QuestMainStoryInfo *)0x0) {
      return;
    }
  }
  MakeContext<FDS_ViewModelContext_QuestMainStoryInfo>(&local_118);
  pFVar2 = local_118.Object;
  if (local_118.Object != (FDS_ViewModelContext_QuestMainStoryInfo *)0x0) {
    if ((local_118.Object == (FDS_ViewModelContext_QuestMainStoryInfo *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)&pFVar2->_padding_ = 0x86;
    this_00 = FDS_QuestBaseTableRow::GetRef((longlong)this->QuestID,true);
    bVar3 = FDS_QuestBaseTableRow::IsValid(this_00);
    if (bVar3) {
      local_108.StringTableType = None;
      local_108.StringTableID = 0;
      local_108.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_108.StringEnumTableNameID.Number = 0;
      local_108.DateTime.Ticks = 0;
      local_108.TimeSpan.Ticks = 0;
      local_108.TimeExpressionType = None;
      local_108.IsExpression = false;
      local_108.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_108.UniqueString.Data.ArrayNum = 0;
      local_108.UniqueString.Data.ArrayMax = 0;
      local_108.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_108.FormatArgs.ArrayNum = 0;
      local_108.FormatArgs.ArrayMax = 0;
      if (this_00->QuestTitleStep < 1) {
        FDS_Text::SetTextFromStringID(&local_108,&this_00->ID_QuestTitleId);
      }
      else {
        FDS_Text::SetTextFormatFromStringTable<int_const_&>
                  (&local_108,StringQuest,(this_00->ID_QuestTitleId).ID,&this_00->QuestTitleStep);
      }
      FDS_Text::operator=(&pFVar2->Title,&local_108);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_108.FormatArgs.AllocatorInstance.Data,
                 local_108.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_108.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_108.FormatArgs.AllocatorInstance.Data);
      }
      if (local_108.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.UniqueString.Data.AllocatorInstance.Data);
      }
      FDS_Text::SetTextFromStringID(&pFVar2->Story,&this_00->ID_QuestSummaryId);
    }
    pUVar6 = (this->VM_QuestMainStoryInfo).field0_0x0.DebugPtr;
    local_b8.Object = (FDS_ViewModelContext *)local_118.Object;
    local_b8.SharedReferenceCount.ReferenceController =
         local_118.SharedReferenceCount.ReferenceController;
    if (local_118.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar6,&local_b8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_118.SharedReferenceCount.ReferenceController);
  return;
}

// UnbindModel @ 14bf852f0

void __thiscall UDS_VM_QuestMainChapterInfo::UnbindModel(UDS_VM_QuestMainChapterInfo *this)

{
  UDS_QuestEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_QuestEvent::GetEvent();
  if (pUVar1 != (UDS_QuestEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangedTraceQuestDelegate,this);
    return;
  }
  return;
}

// UpdateChapterStoryList @ 14bf87260

void __thiscall
UDS_VM_QuestMainChapterInfo::UpdateChapterStoryList(UDS_VM_QuestMainChapterInfo *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  UDS_UserObjectListItem *this_00;
  FDS_ViewModelContext *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  UScriptStruct *pUVar10;
  UDS_ViewModelContextManager *this_01;
  FDS_QuestMainTableRow *this_02;
  TReferenceControllerBase<1> *pTVar11;
  ForAnyElementType FVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  UDS_UserObjectListItem *local_res18;
  FScriptContainerElement *local_res20;
  FName local_98;
  int local_90;
  ForAnyElementType local_88;
  undefined8 local_80;
  TArray<FDS_QuestMainTableRow_const_*,TSizedDefaultAllocator<32>_> local_78;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_StoryList);
  if (0 < this->QuestID) {
    FDS_QuestMainTableRow::GetAll(&local_78);
    iVar4 = local_78.ArrayNum;
    local_88.Data = (FScriptContainerElement *)0x0;
    local_80 = 0;
    pFVar1 = local_78.AllocatorInstance.Data + (longlong)local_78.ArrayNum * 8;
    FVar12.Data = local_78.AllocatorInstance.Data;
    while( true ) {
      if (local_78.ArrayNum != iVar4) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FDS_QuestMainTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (FVar12.Data == pFVar1) break;
      lVar2 = *(longlong *)FVar12.Data;
      if ((((*(int *)(lVar2 + 0x24) == this->ChapterIndex) && (*(int *)(lVar2 + 8) <= this->QuestID)
           ) && (lVar7 = (*(code *)**(undefined8 **)(lVar2 + 0x60))(lVar2 + 0x60), 0 < lVar7)) &&
         (lVar7 = (*(code *)**(undefined8 **)(lVar2 + 0x70))(lVar2 + 0x70), 0 < lVar7)) {
        iVar6 = (int)local_80;
        if ((int)local_80 == local_80._4_4_) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_88,(int *)((longlong)&local_80 + 4));
        }
        local_80 = CONCAT44(local_80._4_4_,iVar6 + 1);
        *(undefined4 *)(local_88.Data + (longlong)iVar6 * 4) = *(undefined4 *)(lVar2 + 8);
      }
      FVar12.Data = FVar12.Data + 8;
    }
    iVar4 = (int)local_80;
    local_res20 = local_88.Data + (longlong)(int)local_80 * 4;
    FVar12.Data = local_88.Data;
    while( true ) {
      pFVar1 = local_res20;
      if ((int)local_80 != iVar4) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (FVar12.Data == pFVar1) break;
      this_00 = NewObject<UDS_UserObjectListItem>((UObject *)this);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (this_00 == (UDS_UserObjectListItem *)0x0) goto LAB_14bf87599;
      }
      else {
        if (this_00 == (UDS_UserObjectListItem *)0x0) {
LAB_14bf87599:
          if (local_88.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data);
          }
          if (local_78.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return;
          }
          FMemory::Free(local_78.AllocatorInstance.Data);
          return;
        }
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      pFVar8 = ::operator_new(0xc0);
      if (pFVar8 == (FDS_ViewModelContext *)0x0) {
        pFVar8 = (FDS_ViewModelContext *)0x0;
      }
      else {
        *(undefined4 *)&pFVar8->field_0x1c = 0;
        *(undefined4 *)((longlong)&pFVar8[1]._padding_ + 1) = 0;
        *(undefined2 *)((longlong)&pFVar8[1]._padding_ + 5) = 0;
        *(undefined1 *)((longlong)&pFVar8[1]._padding_ + 7) = 0;
        *(undefined2 *)((longlong)&pFVar8[2].DerivedStaticStruct + 5) = 0;
        *(undefined1 *)((longlong)&pFVar8[2].DerivedStaticStruct + 7) = 0;
        *(undefined4 *)((longlong)&pFVar8[3].ViewModelName.ComparisonIndex.Value + 1) = 0;
        *(undefined2 *)((longlong)&pFVar8[3].ViewModelName.Number + 1) = 0;
        *(undefined1 *)((longlong)&pFVar8[3].ViewModelName.Number + 3) = 0;
        *(undefined2 *)&pFVar8[4].field_0x1d = 0;
        pFVar8[4].field_0x1f = 0;
        pFVar8->DerivedStaticStruct = (UStruct *)0x0;
        (pFVar8->ViewModelName).ComparisonIndex = 0;
        (pFVar8->ViewModelName).Number = 0;
        pFVar8->ViewModelTemplateKey = None;
        pFVar8->_padding_ = (longlong)&___7FDS_ViewModelContext_QuestMainStoryInfo__6B_;
        *(undefined1 *)&pFVar8[1]._padding_ = 0;
        pFVar8[1].DerivedStaticStruct = (UStruct *)0x0;
        pFVar8[1].ViewModelName.ComparisonIndex = 0;
        pFVar8[1].ViewModelName.Number = 0;
        *(undefined8 *)&pFVar8[1].ViewModelTemplateKey = 0;
        pFVar8[2]._padding_ = 0;
        *(undefined4 *)&pFVar8[2].DerivedStaticStruct = 0;
        *(undefined1 *)((longlong)&pFVar8[2].DerivedStaticStruct + 4) = 0;
        pFVar8[2].ViewModelName.ComparisonIndex = 0;
        pFVar8[2].ViewModelName.Number = 0;
        *(undefined8 *)&pFVar8[2].ViewModelTemplateKey = 0;
        pFVar8[3]._padding_ = 0;
        pFVar8[3].DerivedStaticStruct = (UStruct *)0x0;
        *(undefined1 *)&pFVar8[3].ViewModelName.ComparisonIndex.Value = 0;
        *(undefined8 *)&pFVar8[3].ViewModelTemplateKey = 0;
        pFVar8[4]._padding_ = 0;
        pFVar8[4].DerivedStaticStruct = (UStruct *)0x0;
        pFVar8[4].ViewModelName.ComparisonIndex = 0;
        pFVar8[4].ViewModelName.Number = 0;
        pFVar8[4].ViewModelTemplateKey = None;
        pFVar8[4].field_0x1c = 0;
        pFVar8[5]._padding_ = 0;
        pFVar8[5].DerivedStaticStruct = (UStruct *)0x0;
        pFVar8[5].ViewModelName.ComparisonIndex = 0;
        pFVar8[5].ViewModelName.Number = 0;
        *(undefined8 *)&pFVar8[5].ViewModelTemplateKey = 0;
      }
      pTVar11 = (TReferenceControllerBase<1> *)0x0;
      pTVar9 = ::operator_new(0x20);
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        pTVar9->SharedReferenceCount = (atomic<int>)0x1;
        pTVar9[1]._padding_ = (longlong)ViewModelContextDeleter;
        pTVar9->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_QuestMainStoryInfo__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        pTVar9->WeakReferenceCount = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pTVar9[1].SharedReferenceCount = pFVar8;
        pTVar11 = pTVar9;
      }
      if ((pFVar8 == (FDS_ViewModelContext *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar10 = FDS_ViewModelContext_QuestMainStoryInfo::StaticStruct();
      pFVar8->DerivedStaticStruct = (UStruct *)pUVar10;
      this_01 = UDS_ViewModelContextManager::GetInst();
      if (this_01 != (UDS_ViewModelContextManager *)0x0) {
        if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_68.Object = pFVar8;
        local_68.SharedReferenceCount.ReferenceController = pTVar11;
        UDS_ViewModelContextManager::RegisterContext(this_01,&local_68);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.SharedReferenceCount.ReferenceController);
      }
      pFVar8->ViewModelTemplateKey = QuestMainStoryInfo;
      this_02 = FDS_QuestMainTableRow::GetRef((longlong)*(int *)FVar12.Data,true);
      bVar5 = FDS_QuestMainTableRow::IsValid(this_02);
      if (bVar5) {
        FDS_Text::SetTextFromStringID((FDS_Text *)(pFVar8 + 1),&this_02->ID_SectionTitle);
        FDS_Text::SetTextFromStringID
                  ((FDS_Text *)&pFVar8[3].ViewModelName,&this_02->ID_SectionStory);
      }
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_58.Object = pFVar8;
      local_58.SharedReferenceCount.ReferenceController = pTVar11;
      UDS_UserObjectListItem::AddContext(this_00,&local_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
      local_res18 = this_00;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      FDS_EntryBindingEventField::Add
                (&this->EntryBindingEventField_StoryList,
                 (TObjectPtr<UDS_UserObjectListItem>)&local_res18);
      FVar12.Data = FVar12.Data + 4;
    }
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
    }
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
  }
  local_90 = FFieldNotificationClassDescriptor::EntryBindingEventField_StoryList.BitNumber;
  local_98 = FFieldNotificationClassDescriptor::EntryBindingEventField_StoryList.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
  return;
}

