// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 32

// SetClickAbandonButton_WrapperImpl @ 14b6c35a0

void __cdecl UDS_VM_QuestRepeat::SetClickAbandonButton_WrapperImpl(void *param_1,void *param_2)

{
  UDS_QuestManager *this;
  
  if (*(char *)((longlong)param_2 + 3) != '\x01') {
    this = UDS_QuestManager::GetInst();
    if (this != (UDS_QuestManager *)0x0) {
      UDS_QuestManager::OnReqCancelQuest(this,*(int *)((longlong)param_1 + 0x200));
      return;
    }
  }
  return;
}

// SetClickTraceButton_WrapperImpl @ 14b6c35b0

void __cdecl UDS_VM_QuestRepeat::SetClickTraceButton_WrapperImpl(void *param_1,void *param_2)

{
  UDS_QuestManager *this;
  
  if (*(char *)((longlong)param_2 + 3) != '\x01') {
    this = UDS_QuestManager::GetInst();
    if (this != (UDS_QuestManager *)0x0) {
      UDS_QuestManager::OnReqQuestTrace(this,*(int *)((longlong)param_1 + 0x200));
      return;
    }
  }
  return;
}

// SetDisabledAbandonButton_WrapperImpl @ 14b6c35c0

void __cdecl UDS_VM_QuestRepeat::SetDisabledAbandonButton_WrapperImpl(void *param_1,void *param_2)

{
  SetDisabledAbandonButton(param_1,*(bool *)param_2);
  return;
}

// SetDisabledTraceButton_WrapperImpl @ 14b6c35d0

void __cdecl UDS_VM_QuestRepeat::SetDisabledTraceButton_WrapperImpl(void *param_1,void *param_2)

{
  SetDisabledTraceButton(param_1,*(bool *)param_2);
  return;
}

// SetCheckBoxShowAllQuest_WrapperImpl @ 14b6c35e0

void __cdecl UDS_VM_QuestRepeat::SetCheckBoxShowAllQuest_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  UDS_QuestLocalSave *this;
  FWeakObjectPtr FStackX_8;
  
  UDS_QuestLocalSave::GetInst();
  bVar1 = FWeakObjectPtr::IsValid(&FStackX_8);
  if (bVar1) {
    this = (UDS_QuestLocalSave *)FWeakObjectPtr::Get(&FStackX_8);
    UDS_QuestLocalSave::SetShowAllQuestRepeatOption(this,*(bool *)param_2);
  }
  if (*(char *)((longlong)param_1 + 0xf3) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0xf3) = *(char *)param_2;
    UpdateQuestList(param_1);
  }
  return;
}

// StaticClass @ 14b6c35f0

UClass * __cdecl UDS_VM_QuestRepeat::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_QuestRepeat.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_QuestRepeat",
               &Z_Registration_Info_UClass_UDS_VM_QuestRepeat.InnerSingleton,
               StaticRegisterNativesUDS_VM_QuestRepeat,0x208,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_QuestRepeat>,
               InternalVTableHelperCtorCaller<UDS_VM_QuestRepeat>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_QuestRepeat.InnerSingleton;
}

// UDS_VM_QuestRepeat @ 14b6cb650

UDS_VM_QuestRepeat * __thiscall
UDS_VM_QuestRepeat::UDS_VM_QuestRepeat(UDS_VM_QuestRepeat *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestRepeat__6B_;
  (this->EntryBindingEventField_QuestList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_QuestList).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_QuestList).UserObjectList.ArrayMax = 0;
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
  (this->CheckBoxShowAllQuest).bIsActivate = false;
  (this->VM_QuestInfo).field0_0x0.DebugPtr = (UDS_VM_QuestInfo *)0x0;
  (this->TabGroup).field0_0x0.DebugPtr = (UDS_VM_Common_TabGroup *)0x0;
  (this->VM_QuestRepeatData).field0_0x0.DebugPtr = (UDS_VM_QuestRepeatData *)0x0;
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
  (this->FixedText_Check_ShowAll).StringTableType = StringUi;
  (this->FixedText_Check_ShowAll).StringTableID = 0xec59;
  return this;
}

// UDS_VM_QuestRepeat @ 14b6cb7e0

UDS_VM_QuestRepeat * __thiscall
UDS_VM_QuestRepeat::UDS_VM_QuestRepeat(UDS_VM_QuestRepeat *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestRepeat__6B_;
  (this->EntryBindingEventField_QuestList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_QuestList).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_QuestList).UserObjectList.ArrayMax = 0;
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
  (this->CheckBoxShowAllQuest).bIsActivate = false;
  (this->VM_QuestInfo).field0_0x0.DebugPtr = (UDS_VM_QuestInfo *)0x0;
  (this->TabGroup).field0_0x0.DebugPtr = (UDS_VM_Common_TabGroup *)0x0;
  (this->VM_QuestRepeatData).field0_0x0.DebugPtr = (UDS_VM_QuestRepeatData *)0x0;
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
  (this->FixedText_Check_ShowAll).StringTableType = StringUi;
  (this->FixedText_Check_ShowAll).StringTableID = 0xec59;
  return this;
}

// ~UDS_VM_QuestRepeat @ 14b6ccd90

void __thiscall UDS_VM_QuestRepeat::~UDS_VM_QuestRepeat(UDS_VM_QuestRepeat *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestRepeat__6B_;
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

// GetFieldNotificationDescriptor @ 14b6cfd10

IClassDescriptor * __thiscall
UDS_VM_QuestRepeat::GetFieldNotificationDescriptor(UDS_VM_QuestRepeat *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_QuestRepeat::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6d0c00

UClass * __cdecl UDS_VM_QuestRepeat::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_QuestRepeat.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_QuestRepeat",
               &Z_Registration_Info_UClass_UDS_VM_QuestRepeat.InnerSingleton,
               StaticRegisterNativesUDS_VM_QuestRepeat,0x208,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_QuestRepeat>,
               InternalVTableHelperCtorCaller<UDS_VM_QuestRepeat>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_QuestRepeat.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_QuestRepeat @ 14b6d1100

void __cdecl UDS_VM_QuestRepeat::StaticRegisterNativesUDS_VM_QuestRepeat(void)

{
  return;
}

// __VTableCtorCaller @ 14b6d22b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_VM_QuestRepeat::__VTableCtorCaller(FVTableHelper *param_1)

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
    this->_padding_ = (longlong)&___7UDS_VM_QuestRepeat__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1].ViewModelContext.Object = 2;
    this[1].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0xeb8e;
    this[1].Visibility = Visible;
    *(undefined3 *)&this[1].field_0x81 = 0;
    this[1].VMName.ComparisonIndex = 0;
    *(undefined8 *)&this[1].VMName.Number = 0;
    this[1].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].TextPropertyIDList.ArrayNum = 0;
    *(undefined1 *)&this[1].TextPropertyIDList.ArrayMax = 0;
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
         (TReferenceControllerBase<1> *)0xec59;
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

// BindModel @ 14bf41c20

void __thiscall UDS_VM_QuestRepeat::BindModel(UDS_VM_QuestRepeat *this)

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
    AddUObject<UDS_VM_QuestRepeat>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar2->OnUpdateQuestDataDelegate,(UDS_VM_QuestRepeat *)&local_res10,
               (pmf_87c9f1ee *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnChangedTraceQuestDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_QuestRepeat>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar2->OnChangedTraceQuestDelegate,(UDS_VM_QuestRepeat *)&local_res10,
               (pmf_87c9f1ee *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnSelectedQuestDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_QuestRepeat>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar2->OnSelectedQuestDelegate,(UDS_VM_QuestRepeat *)&local_res10,
               (pmf_87c9f1ee *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnQuestRepeatResetDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_QuestRepeat>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar2->OnQuestRepeatResetDelegate,(UDS_VM_QuestRepeat *)&local_res10,
               (pmf_7d70972c *)this);
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
    AddUObject<UDS_VM_QuestRepeat>
              ((TMulticastDelegateRegistration<void___cdecl(int,int),FDefaultTSDelegateUserPolicy> *
               )this_00,(UDS_VM_QuestRepeat *)&local_res18.ObjectPtr,(pmf_d73541c2 *)this);
  }
  return;
}

// InitViewModel @ 14bf5b6a0

void __thiscall UDS_VM_QuestRepeat::InitViewModel(UDS_VM_QuestRepeat *this)

{
  return;
}

// OnChangeSelectQuest @ 14bf5f410

void __thiscall UDS_VM_QuestRepeat::OnChangeSelectQuest(UDS_VM_QuestRepeat *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  FName FVar3;
  FDS_ViewModelContext_Quest *pFVar4;
  bool bVar5;
  EDS_QuestConditionType EVar6;
  int iVar7;
  UDS_VM_QuestInfo *pUVar8;
  UDS_QuestManager *this_00;
  FName local_48;
  int local_40;
  FName local_38;
  int local_30;
  TSharedPtr<FDS_ViewModelContext_Quest,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pUVar8 = (this->VM_QuestInfo).field0_0x0.DebugPtr;
  this->SelectedQuestID = param_1;
  if (pUVar8 == (UDS_VM_QuestInfo *)0x0) {
    pUVar8 = UDS_ViewModelBase::CreateViewModel<UDS_VM_QuestInfo>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UDS_VM_QuestInfo *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    (this->VM_QuestInfo).field0_0x0.DebugPtr = pUVar8;
    if (pUVar8 == (UDS_VM_QuestInfo *)0x0) goto LAB_14bf5f4f9;
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
    pUVar8 = (this->VM_QuestInfo).field0_0x0.DebugPtr;
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
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar8,&local_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
LAB_14bf5f4f9:
  this_00 = UDS_QuestManager::GetInst();
  if (this_00 != (UDS_QuestManager *)0x0) {
    bVar5 = UDS_QuestManager::HasQuestData(this->SelectedQuestID);
    if ((bVar5) &&
       (EVar6 = UDS_QuestManager::GetQuestConditionType(this_00,this->SelectedQuestID,0),
       EVar6 == InProgress)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    iVar1 = FFieldNotificationClassDescriptor::DisabledAbandonButton.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::DisabledAbandonButton.FieldName;
    if (this->DisabledAbandonButton != bVar5) {
      this->DisabledAbandonButton = bVar5;
      local_40 = iVar1;
      local_48 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
    }
    bVar5 = UDS_QuestManager::HasQuestData(this->SelectedQuestID);
    if ((bVar5) &&
       (iVar1 = this->SelectedQuestID, iVar7 = UDS_QuestManager::GetTraceQuestID(this_00),
       iVar1 != iVar7)) {
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
  }
  return;
}

// OnChangeTraceQuestID @ 14bf5fba0

void __thiscall UDS_VM_QuestRepeat::OnChangeTraceQuestID(UDS_VM_QuestRepeat *this,int param_1)

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

// OnCheckBoxShowAllQuest @ 14bf612e0

void __thiscall
UDS_VM_QuestRepeat::OnCheckBoxShowAllQuest(UDS_VM_QuestRepeat *this,FDS_WidgetEventField *param_1)

{
  bool bVar1;
  UDS_QuestLocalSave *this_00;
  FWeakObjectPtr local_res8;
  
  UDS_QuestLocalSave::GetInst();
  bVar1 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar1) {
    this_00 = (UDS_QuestLocalSave *)FWeakObjectPtr::Get(&local_res8);
    UDS_QuestLocalSave::SetShowAllQuestRepeatOption(this_00,param_1->bIsActivate);
  }
  if (this->ShowAllQuest != param_1->bIsActivate) {
    this->ShowAllQuest = param_1->bIsActivate;
    UpdateQuestList(this);
  }
  return;
}

// OnClickAbandonButton @ 14bf61410

void __thiscall
UDS_VM_QuestRepeat::OnClickAbandonButton(UDS_VM_QuestRepeat *this,FDS_ButtonEventField *param_1)

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

// OnClickTraceButton @ 14bf62ec0

void __thiscall
UDS_VM_QuestRepeat::OnClickTraceButton(UDS_VM_QuestRepeat *this,FDS_ButtonEventField *param_1)

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

// OnQuestRepeatReset @ 14bf667b0

void __thiscall UDS_VM_QuestRepeat::OnQuestRepeatReset(UDS_VM_QuestRepeat *this)

{
  int iVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  UDS_QuestManager *this_00;
  UDS_UserObjectListItem *this_01;
  FDS_ViewModelContext *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  UScriptStruct *pUVar7;
  UDS_ViewModelContextManager *this_02;
  int iVar8;
  FDS_ViewModelContext *pFVar9;
  ForAnyElementType FVar10;
  undefined1 auStackX_8 [8];
  UDS_UserObjectListItem *pUStackX_10;
  FScriptContainerElement *pFStackX_18;
  FName FStack_78;
  int iStack_70;
  TArray<int,TSizedDefaultAllocator<32>_> TStack_68;
  TSharedPtr<FDS_ViewModelContext,1> TStack_58;
  TSharedPtr<FDS_ViewModelContext,1> TStack_48;
  
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_QuestList);
  this_00 = UDS_QuestManager::GetInst();
  if (this_00 != (UDS_QuestManager *)0x0) {
    UDS_QuestManager::GetQuestList
              (this_00,&TStack_68,Repeat,this->QuestCategory,false,this->ShowAllQuest == false,true)
    ;
    iVar8 = TStack_68.ArrayNum;
    pFStackX_18 = TStack_68.AllocatorInstance.Data + (longlong)iVar8 * 4;
    FVar10.Data = TStack_68.AllocatorInstance.Data;
    while( true ) {
      pFVar3 = pFStackX_18;
      pFVar9 = (FDS_ViewModelContext *)0x0;
      if (TStack_68.ArrayNum != iVar8) {
        auStackX_8[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(auStackX_8);
      }
      if (FVar10.Data == pFVar3) break;
      iVar1 = *(int *)FVar10.Data;
      this_01 = NewObject<UDS_UserObjectListItem>((UObject *)this);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (this_01 == (UDS_UserObjectListItem *)0x0) goto LAB_14bf8942b;
      }
      else {
        if (this_01 == (UDS_UserObjectListItem *)0x0) goto LAB_14bf8942b;
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
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
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
        TStack_58.Object = pFVar9;
        TStack_58.SharedReferenceCount.ReferenceController = pTVar6;
        UDS_ViewModelContextManager::RegisterContext(this_02,&TStack_58);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (TStack_58.SharedReferenceCount.ReferenceController);
      }
      pFVar9->ViewModelTemplateKey = QuestRepeatListSlot;
      *(int *)((longlong)&pFVar9[1]._padding_ + 4) = iVar1;
      *(bool *)&pFVar9[1]._padding_ = iVar1 == this->SelectedQuestID;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      TStack_48.Object = pFVar9;
      TStack_48.SharedReferenceCount.ReferenceController = pTVar6;
      UDS_UserObjectListItem::AddContext(this_01,&TStack_48);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      pUStackX_10 = this_01;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      FDS_EntryBindingEventField::Add
                (&this->EntryBindingEventField_QuestList,
                 (TObjectPtr<UDS_UserObjectListItem>)&pUStackX_10);
      FVar10.Data = FVar10.Data + 4;
    }
    iStack_70 = FFieldNotificationClassDescriptor::EntryBindingEventField_QuestList.BitNumber;
    FStack_78 = FFieldNotificationClassDescriptor::EntryBindingEventField_QuestList.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_78);
LAB_14bf8942b:
    if (TStack_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_68.AllocatorInstance.Data);
    }
  }
  return;
}

// OnSelectedTabIndex @ 14bf67b00

void __thiscall
UDS_VM_QuestRepeat::OnSelectedTabIndex(UDS_VM_QuestRepeat *this,int param_1,int param_2)

{
  UDS_QuestManager *this_00;
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  if (this->QuestCategory != param_2) {
    this->QuestCategory = param_2;
    this_00 = UDS_QuestManager::GetInst();
    if (this_00 != (UDS_QuestManager *)0x0) {
      UDS_QuestManager::GetQuestList
                (this_00,&local_18,Repeat,this->QuestCategory,false,this->ShowAllQuest == false,true
                );
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

// OnSetViewModel @ 14bf6c8d0

void __thiscall
UDS_VM_QuestRepeat::OnSetViewModel
          (UDS_VM_QuestRepeat *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UDS_QuestManager *pUVar5;
  UObject *pUVar6;
  UDS_VM_QuestRepeatData *pUVar7;
  FWeakObjectPtr local_res10;
  FName local_58;
  int local_50;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  TSharedPtr<FDS_ViewModelContext_ContentsOpen,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
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
  SafeCast<FDS_ViewModelContext_ContentsOpen>(&local_38,&local_28);
  if ((local_38.Object != (FDS_ViewModelContext_ContentsOpen *)0x0) &&
     (pUVar5 = UDS_QuestManager::GetInst(), pUVar5 != (UDS_QuestManager *)0x0)) {
    UDS_QuestLocalSave::GetInst();
    bVar4 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar4) {
      pUVar6 = FWeakObjectPtr::Get(&local_res10);
      iVar3 = FFieldNotificationClassDescriptor::ShowAllQuest.BitNumber;
      FVar2 = FFieldNotificationClassDescriptor::ShowAllQuest.FieldName;
      if (this->ShowAllQuest != (bool)pUVar6[1].field_0x11) {
        this->ShowAllQuest = (bool)pUVar6[1].field_0x11;
        local_50 = iVar3;
        local_58 = FVar2;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
      }
    }
    bVar4 = false;
    if ((this->VM_QuestRepeatData).field0_0x0.DebugPtr == (UDS_VM_QuestRepeatData *)0x0) {
      pUVar7 = UDS_ViewModelBase::CreateViewModel<UDS_VM_QuestRepeatData>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar7 != (UDS_VM_QuestRepeatData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      (this->VM_QuestRepeatData).field0_0x0.DebugPtr = pUVar7;
      bVar4 = pUVar7 == (UDS_VM_QuestRepeatData *)0x0;
    }
    if (!bVar4) {
      MakeContext<FDS_ViewModelContext>(&local_48);
      if (local_48.Object != (FDS_ViewModelContext *)0x0) {
        if ((local_48.Object == (FDS_ViewModelContext *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        (local_48.Object)->ViewModelTemplateKey = QuestRepeatData;
        pUVar7 = (this->VM_QuestRepeatData).field0_0x0.DebugPtr;
        local_18.Object = local_48.Object;
        local_18.SharedReferenceCount.ReferenceController =
             local_48.SharedReferenceCount.ReferenceController;
        if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar7,&local_18);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
    }
    SetVM_CommonTabGroup(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdateQuestData @ 14bf727d0

void __thiscall UDS_VM_QuestRepeat::OnUpdateQuestData(UDS_VM_QuestRepeat *this,int param_1)

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

// SetDisabledAbandonButton @ 14bf7a880

void __thiscall UDS_VM_QuestRepeat::SetDisabledAbandonButton(UDS_VM_QuestRepeat *this,bool param_1)

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

// SetDisabledTraceButton @ 14bf7aa10

void __thiscall UDS_VM_QuestRepeat::SetDisabledTraceButton(UDS_VM_QuestRepeat *this,bool param_1)

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

// SetShowAllQuest @ 14bf7d5b0

void __thiscall UDS_VM_QuestRepeat::SetShowAllQuest(UDS_VM_QuestRepeat *this,bool param_1)

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

// SetVM_CommonTabGroup @ 14bf7f490

void __thiscall UDS_VM_QuestRepeat::SetVM_CommonTabGroup(UDS_VM_QuestRepeat *this)

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
    if (*(char *)(lVar3 + 0x20) == '\t') {
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
                (this_00,&local_a8,Repeat,this->QuestCategory,false,this->ShowAllQuest == false,true
                );
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

// SetVM_QuestInfo @ 14bf80850

void __thiscall UDS_VM_QuestRepeat::SetVM_QuestInfo(UDS_VM_QuestRepeat *this)

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

// SetVM_QuestRepeatData @ 14bf81920

void __thiscall UDS_VM_QuestRepeat::SetVM_QuestRepeatData(UDS_VM_QuestRepeat *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_VM_QuestRepeatData *pUVar3;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((this->VM_QuestRepeatData).field0_0x0.DebugPtr == (UDS_VM_QuestRepeatData *)0x0) {
    pUVar3 = UDS_ViewModelBase::CreateViewModel<UDS_VM_QuestRepeatData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDS_VM_QuestRepeatData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->VM_QuestRepeatData).field0_0x0.DebugPtr = pUVar3;
    if (pUVar3 == (UDS_VM_QuestRepeatData *)0x0) {
      return;
    }
  }
  MakeContext<FDS_ViewModelContext>(&local_28);
  if (local_28.Object != (FDS_ViewModelContext *)0x0) {
    if ((local_28.Object == (FDS_ViewModelContext *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (local_28.Object)->ViewModelTemplateKey = QuestRepeatData;
    pUVar3 = (this->VM_QuestRepeatData).field0_0x0.DebugPtr;
    local_18.Object = local_28.Object;
    local_18.SharedReferenceCount.ReferenceController =
         local_28.SharedReferenceCount.ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar3,&local_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// UnbindModel @ 14bf853b0

void __thiscall UDS_VM_QuestRepeat::UnbindModel(UDS_VM_QuestRepeat *this)

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
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnQuestRepeatResetDelegate,this);
  }
  pUVar2 = UDS_UIEvent::GetEvent();
  if (pUVar2 != (UDS_UIEvent *)0x0) {
    FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_,int_const_>::
    Remove<UDS_VM_QuestRepeat>(&pUVar2->OnSelectedTabIndex,this);
  }
  return;
}

// UpdateQuestList @ 14bf891a0

void __thiscall UDS_VM_QuestRepeat::UpdateQuestList(UDS_VM_QuestRepeat *this)

{
  int iVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  UDS_QuestManager *this_00;
  UDS_UserObjectListItem *this_01;
  FDS_ViewModelContext *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  UScriptStruct *pUVar7;
  UDS_ViewModelContextManager *this_02;
  int iVar8;
  FDS_ViewModelContext *pFVar9;
  ForAnyElementType FVar10;
  undefined1 local_res8 [8];
  UDS_UserObjectListItem *local_res10;
  FScriptContainerElement *local_res18;
  FName local_78;
  int local_70;
  TArray<int,TSizedDefaultAllocator<32>_> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_QuestList);
  this_00 = UDS_QuestManager::GetInst();
  if (this_00 != (UDS_QuestManager *)0x0) {
    UDS_QuestManager::GetQuestList
              (this_00,&local_68,Repeat,this->QuestCategory,false,this->ShowAllQuest == false,true);
    iVar8 = local_68.ArrayNum;
    local_res18 = local_68.AllocatorInstance.Data + (longlong)iVar8 * 4;
    FVar10.Data = local_68.AllocatorInstance.Data;
    while( true ) {
      pFVar3 = local_res18;
      pFVar9 = (FDS_ViewModelContext *)0x0;
      if (local_68.ArrayNum != iVar8) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (FVar10.Data == pFVar3) break;
      iVar1 = *(int *)FVar10.Data;
      this_01 = NewObject<UDS_UserObjectListItem>((UObject *)this);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (this_01 == (UDS_UserObjectListItem *)0x0) goto LAB_14bf8942b;
      }
      else {
        if (this_01 == (UDS_UserObjectListItem *)0x0) goto LAB_14bf8942b;
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
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
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
        local_58.Object = pFVar9;
        local_58.SharedReferenceCount.ReferenceController = pTVar6;
        UDS_ViewModelContextManager::RegisterContext(this_02,&local_58);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_58.SharedReferenceCount.ReferenceController);
      }
      pFVar9->ViewModelTemplateKey = QuestRepeatListSlot;
      *(int *)((longlong)&pFVar9[1]._padding_ + 4) = iVar1;
      *(bool *)&pFVar9[1]._padding_ = iVar1 == this->SelectedQuestID;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48.Object = pFVar9;
      local_48.SharedReferenceCount.ReferenceController = pTVar6;
      UDS_UserObjectListItem::AddContext(this_01,&local_48);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      local_res10 = this_01;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      FDS_EntryBindingEventField::Add
                (&this->EntryBindingEventField_QuestList,
                 (TObjectPtr<UDS_UserObjectListItem>)&local_res10);
      FVar10.Data = FVar10.Data + 4;
    }
    local_70 = FFieldNotificationClassDescriptor::EntryBindingEventField_QuestList.BitNumber;
    local_78 = FFieldNotificationClassDescriptor::EntryBindingEventField_QuestList.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
LAB_14bf8942b:
    if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
  }
  return;
}

