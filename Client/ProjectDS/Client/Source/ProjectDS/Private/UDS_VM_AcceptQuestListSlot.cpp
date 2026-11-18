// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 21

// SetClickSlotButton_WrapperImpl @ 14b5fba60

void __cdecl UDS_VM_AcceptQuestListSlot::SetClickSlotButton_WrapperImpl(void *param_1,void *param_2)

{
  int iVar1;
  bool bVar2;
  UDS_QuestEvent *pUVar3;
  
  pUVar3 = UDS_QuestEvent::GetEvent();
  if (pUVar3 != (UDS_QuestEvent *)0x0) {
    iVar1 = *(int *)((longlong)param_1 + 0x1c8);
    bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar3->OnSelectedQuestDelegate);
    if (bVar2) {
      TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar3->OnSelectedQuestDelegate).Delegate,iVar1);
    }
  }
  return;
}

// SetCheckBoxEvent_AutoTracking_WrapperImpl @ 14b5fba70

void __cdecl
UDS_VM_AcceptQuestListSlot::SetCheckBoxEvent_AutoTracking_WrapperImpl(void *param_1,void *param_2)

{
  UDS_QuestManager *this;
  
  this = UDS_QuestManager::GetInst();
  if (this != (UDS_QuestManager *)0x0) {
    UDS_QuestManager::OnReqAutoTracking(this,*(int *)((longlong)param_1 + 0x1c8),*(bool *)param_2);
  }
  return;
}

// StaticClass @ 14b5fba80

UClass * __cdecl UDS_VM_AcceptQuestListSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_AcceptQuestListSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_AcceptQuestListSlot",
               &Z_Registration_Info_UClass_UDS_VM_AcceptQuestListSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_AcceptQuestListSlot,0x1d0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_AcceptQuestListSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_AcceptQuestListSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_AcceptQuestListSlot.InnerSingleton;
}

// UDS_VM_AcceptQuestListSlot @ 14b5ffad0

UDS_VM_AcceptQuestListSlot * __thiscall
UDS_VM_AcceptQuestListSlot::UDS_VM_AcceptQuestListSlot
          (UDS_VM_AcceptQuestListSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_AcceptQuestListSlot__6B_;
  *(undefined8 *)&(this->ClickSlotButton).Delegate = 0;
  *(undefined8 *)&(this->ClickSlotButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickSlotButton).Delegate.field_0x10 = 0;
  this->CheckBoxEvent_AutoTracking = false;
  this->IsSelectedButton = false;
  this->QuestStateWidgetIndex = 0;
  (this->ProgressZone).StringTableType = None;
  (this->ProgressZone).StringTableID = 0;
  (this->ProgressZone).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ProgressZone).StringEnumTableNameID.Number = 0;
  (this->ProgressZone).DateTime.Ticks = 0;
  (this->ProgressZone).TimeSpan.Ticks = 0;
  (this->ProgressZone).TimeExpressionType = None;
  (this->ProgressZone).IsExpression = false;
  (this->ProgressZone).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProgressZone).UniqueString.Data.ArrayNum = 0;
  (this->ProgressZone).UniqueString.Data.ArrayMax = 0;
  (this->ProgressZone).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProgressZone).FormatArgs.ArrayNum = 0;
  (this->ProgressZone).FormatArgs.ArrayMax = 0;
  (this->VM_QuestData).field0_0x0.DebugPtr = (UDS_VM_QuestData *)0x0;
  (this->FixedText_Complete).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Complete).StringEnumTableNameID.Number = 0;
  (this->FixedText_Complete).DateTime.Ticks = 0;
  (this->FixedText_Complete).TimeSpan.Ticks = 0;
  (this->FixedText_Complete).TimeExpressionType = None;
  (this->FixedText_Complete).IsExpression = false;
  (this->FixedText_Complete).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Complete).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Complete).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Complete).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Complete).FormatArgs.ArrayNum = 0;
  (this->FixedText_Complete).FormatArgs.ArrayMax = 0;
  (this->FixedText_Check_Auto).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Check_Auto).StringEnumTableNameID.Number = 0;
  (this->FixedText_Check_Auto).DateTime.Ticks = 0;
  (this->FixedText_Check_Auto).TimeSpan.Ticks = 0;
  (this->FixedText_Check_Auto).TimeExpressionType = None;
  (this->FixedText_Check_Auto).IsExpression = false;
  (this->FixedText_Check_Auto).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Check_Auto).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Check_Auto).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Check_Auto).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Check_Auto).FormatArgs.ArrayNum = 0;
  (this->FixedText_Check_Auto).FormatArgs.ArrayMax = 0;
  this->QuestID = 0;
  (this->ClickSlotButton)._padding_ = '\0';
  (this->ClickSlotButton).bIsCustomSelected = false;
  (this->ClickSlotButton).bIsLacked = false;
  (this->ClickSlotButton).bIsCustomDisabled = false;
  (this->FixedText_Complete).StringTableType = StringUi;
  (this->FixedText_Complete).StringTableID = 0xeb29;
  (this->FixedText_Check_Auto).StringTableType = StringUi;
  (this->FixedText_Check_Auto).StringTableID = 0xebf6;
  return this;
}

// UDS_VM_AcceptQuestListSlot @ 14b5ffc30

UDS_VM_AcceptQuestListSlot * __thiscall
UDS_VM_AcceptQuestListSlot::UDS_VM_AcceptQuestListSlot
          (UDS_VM_AcceptQuestListSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_AcceptQuestListSlot__6B_;
  *(undefined8 *)&(this->ClickSlotButton).Delegate = 0;
  *(undefined8 *)&(this->ClickSlotButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickSlotButton).Delegate.field_0x10 = 0;
  this->CheckBoxEvent_AutoTracking = false;
  this->IsSelectedButton = false;
  this->QuestStateWidgetIndex = 0;
  (this->ProgressZone).StringTableType = None;
  (this->ProgressZone).StringTableID = 0;
  (this->ProgressZone).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ProgressZone).StringEnumTableNameID.Number = 0;
  (this->ProgressZone).DateTime.Ticks = 0;
  (this->ProgressZone).TimeSpan.Ticks = 0;
  (this->ProgressZone).TimeExpressionType = None;
  (this->ProgressZone).IsExpression = false;
  (this->ProgressZone).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProgressZone).UniqueString.Data.ArrayNum = 0;
  (this->ProgressZone).UniqueString.Data.ArrayMax = 0;
  (this->ProgressZone).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProgressZone).FormatArgs.ArrayNum = 0;
  (this->ProgressZone).FormatArgs.ArrayMax = 0;
  (this->VM_QuestData).field0_0x0.DebugPtr = (UDS_VM_QuestData *)0x0;
  (this->FixedText_Complete).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Complete).StringEnumTableNameID.Number = 0;
  (this->FixedText_Complete).DateTime.Ticks = 0;
  (this->FixedText_Complete).TimeSpan.Ticks = 0;
  (this->FixedText_Complete).TimeExpressionType = None;
  (this->FixedText_Complete).IsExpression = false;
  (this->FixedText_Complete).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Complete).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Complete).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Complete).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Complete).FormatArgs.ArrayNum = 0;
  (this->FixedText_Complete).FormatArgs.ArrayMax = 0;
  (this->FixedText_Check_Auto).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Check_Auto).StringEnumTableNameID.Number = 0;
  (this->FixedText_Check_Auto).DateTime.Ticks = 0;
  (this->FixedText_Check_Auto).TimeSpan.Ticks = 0;
  (this->FixedText_Check_Auto).TimeExpressionType = None;
  (this->FixedText_Check_Auto).IsExpression = false;
  (this->FixedText_Check_Auto).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Check_Auto).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Check_Auto).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Check_Auto).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Check_Auto).FormatArgs.ArrayNum = 0;
  (this->FixedText_Check_Auto).FormatArgs.ArrayMax = 0;
  this->QuestID = 0;
  (this->ClickSlotButton)._padding_ = '\0';
  (this->ClickSlotButton).bIsCustomSelected = false;
  (this->ClickSlotButton).bIsLacked = false;
  (this->ClickSlotButton).bIsCustomDisabled = false;
  (this->FixedText_Complete).StringTableType = StringUi;
  (this->FixedText_Complete).StringTableID = 0xeb29;
  (this->FixedText_Check_Auto).StringTableType = StringUi;
  (this->FixedText_Check_Auto).StringTableID = 0xebf6;
  return this;
}

// ~UDS_VM_AcceptQuestListSlot @ 14b6018a0

void __thiscall
UDS_VM_AcceptQuestListSlot::~UDS_VM_AcceptQuestListSlot(UDS_VM_AcceptQuestListSlot *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_AcceptQuestListSlot__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Check_Auto).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Check_Auto).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Check_Auto).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Check_Auto).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Complete).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Complete).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Complete).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Complete).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ProgressZone).FormatArgs.AllocatorInstance.Data,
             (this->ProgressZone).FormatArgs.ArrayNum);
  pFVar1 = (this->ProgressZone).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ProgressZone).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickSlotButton).Delegate);
  pvVar2 = *(void **)&(this->ClickSlotButton).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickSlotButton).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b603990

IClassDescriptor * __thiscall
UDS_VM_AcceptQuestListSlot::GetFieldNotificationDescriptor(UDS_VM_AcceptQuestListSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_AcceptQuestListSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b603f20

UClass * __cdecl UDS_VM_AcceptQuestListSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_AcceptQuestListSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_AcceptQuestListSlot",
               &Z_Registration_Info_UClass_UDS_VM_AcceptQuestListSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_AcceptQuestListSlot,0x1d0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_AcceptQuestListSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_AcceptQuestListSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_AcceptQuestListSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_AcceptQuestListSlot @ 14b604870

void __cdecl UDS_VM_AcceptQuestListSlot::StaticRegisterNativesUDS_VM_AcceptQuestListSlot(void)

{
  return;
}

// __VTableCtorCaller @ 14b605580

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_VM_AcceptQuestListSlot::__VTableCtorCaller(FVTableHelper *param_1)

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
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
    this->_padding_ = (longlong)&___7UDS_VM_AcceptQuestListSlot__6B_;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    this[1].Visibility = Visible;
    *(undefined3 *)&this[1].field_0x81 = 0;
    this[1].VMName.ComparisonIndex = 0;
    *(undefined1 *)&this[1].VMName.Number = 2;
    this[1].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0xeb29;
    this[1].TextPropertyIDList.ArrayNum = 0;
    this[1].TextPropertyIDList.ArrayMax = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined1 *)&this[2]._padding_ = 2;
    this[2]._padding_ = 0xebf6;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    this[2].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    this[2].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[2].Visibility = Visible;
    *(undefined3 *)&this[2].field_0x81 = 0;
    this[2].VMName.ComparisonIndex = 0;
    this[2].VMName.Number = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// OnChangeSelectQuestID @ 14bf5f8e0

void __thiscall
UDS_VM_AcceptQuestListSlot::OnChangeSelectQuestID(UDS_VM_AcceptQuestListSlot *this,int param_1)

{
  bool bVar1;
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsSelectedButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsSelectedButton.FieldName;
  bVar1 = this->QuestID == param_1;
  if (this->IsSelectedButton != bVar1) {
    this->IsSelectedButton = bVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnChangedTraceQuest @ 14bf60fa0

void __thiscall
UDS_VM_AcceptQuestListSlot::OnChangedTraceQuest(UDS_VM_AcceptQuestListSlot *this,int param_1)

{
  int iVar1;
  EDS_QuestStateType EVar2;
  EDS_QuestType EVar3;
  int iVar4;
  UDS_QuestManager *this_00;
  bool bVar5;
  FName FStack_18;
  int iStack_10;
  
  bVar5 = false;
  if ((0 < this->QuestID) &&
     (this_00 = UDS_QuestManager::GetInst(), this_00 != (UDS_QuestManager *)0x0)) {
    iVar1 = this->QuestID;
    iVar4 = UDS_QuestManager::GetTraceQuestID(this_00);
    if ((iVar4 != iVar1) && (EVar2 = UDS_QuestManager::GetQuestStateType(iVar1), EVar2 == Progress))
    {
      EVar3 = UDS_QuestManager::GetQuestType(this->QuestID);
      bVar5 = false;
      if (EVar3 != Main) {
        bVar5 = true;
      }
    }
  }
  iStack_10 = FFieldNotificationClassDescriptor::IsShowAutoTracking.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsShowAutoTracking.FieldName;
  if (this->IsShowAutoTracking != bVar5) {
    this->IsShowAutoTracking = bVar5;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_18);
  }
  return;
}

// OnCheckBox_AutoTracking @ 14bf61350

void __thiscall
UDS_VM_AcceptQuestListSlot::OnCheckBox_AutoTracking
          (UDS_VM_AcceptQuestListSlot *this,FDS_WidgetEventField *param_1)

{
  UDS_QuestManager *this_00;
  
  this_00 = UDS_QuestManager::GetInst();
  if (this_00 != (UDS_QuestManager *)0x0) {
    UDS_QuestManager::OnReqAutoTracking(this_00,this->QuestID,param_1->bIsActivate);
  }
  return;
}

// OnClickSlotButton @ 14bf62af0

void __thiscall
UDS_VM_AcceptQuestListSlot::OnClickSlotButton
          (UDS_VM_AcceptQuestListSlot *this,FDS_ButtonEventField *param_1)

{
  int iVar1;
  bool bVar2;
  UDS_QuestEvent *pUVar3;
  
  pUVar3 = UDS_QuestEvent::GetEvent();
  if (pUVar3 != (UDS_QuestEvent *)0x0) {
    iVar1 = this->QuestID;
    bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar3->OnSelectedQuestDelegate);
    if (bVar2) {
      TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar3->OnSelectedQuestDelegate).Delegate,iVar1);
    }
  }
  return;
}

// OnSetViewModel @ 14bf67d90

void __thiscall
UDS_VM_AcceptQuestListSlot::OnSetViewModel
          (UDS_VM_AcceptQuestListSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  FDS_ViewModelContext_Quest *pFVar4;
  bool bVar5;
  EDS_QuestConditionType EVar6;
  UDS_QuestEvent *pUVar7;
  UDS_QuestManager *this_00;
  UDS_VM_QuestData *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  FName local_a8;
  int local_a0;
  FName local_98;
  int local_90;
  TSharedPtr<FDS_ViewModelContext_Quest,1> local_88;
  TSharedPtr<FDS_ViewModelContext_QuestListSlot,1> local_78;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  FDS_ViewModelContext_Quest *local_58;
  undefined8 uStack_50;
  FDS_ViewModelContext_Quest *local_48;
  undefined8 uStack_40;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  local_68.Object = param_1->Object;
  local_68.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_QuestListSlot>(&local_78,&local_68);
  if (local_78.Object == (FDS_ViewModelContext_QuestListSlot *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
    goto LAB_14bf68037;
  }
  this->QuestID = (local_78.Object)->QuestID;
  bVar5 = (local_78.Object)->IsSelectedSlot;
  pUVar7 = UDS_QuestEvent::GetEvent();
  if (pUVar7 != (UDS_QuestEvent *)0x0) {
    local_88.SharedReferenceCount.ReferenceController._0_4_ = 0;
    local_88.Object = (FDS_ViewModelContext_Quest *)OnChangeSelectQuestID;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar7->OnSelectedQuestDelegate,this);
    uStack_50 = CONCAT44(local_88.SharedReferenceCount.ReferenceController._4_4_,
                         local_88.SharedReferenceCount.ReferenceController._0_4_);
    local_58 = local_88.Object;
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_AcceptQuestListSlot>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar7->OnSelectedQuestDelegate,(UDS_VM_AcceptQuestListSlot *)&stack0x00000010,
               (pmf_fc810e75 *)this);
    local_88.SharedReferenceCount.ReferenceController._0_4_ = 0;
    local_88.Object = (FDS_ViewModelContext_Quest *)OnChangedTraceQuest;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar7->OnChangedTraceQuestDelegate,this);
    uStack_40 = CONCAT44(local_88.SharedReferenceCount.ReferenceController._4_4_,
                         local_88.SharedReferenceCount.ReferenceController._0_4_);
    local_48 = local_88.Object;
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_AcceptQuestListSlot>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar7->OnChangedTraceQuestDelegate,(UDS_VM_AcceptQuestListSlot *)&stack0x00000018,
               (pmf_fc810e75 *)this);
  }
  iVar3 = FFieldNotificationClassDescriptor::IsSelectedButton.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::IsSelectedButton.FieldName;
  if (this->IsSelectedButton != bVar5) {
    this->IsSelectedButton = bVar5;
    local_a0 = iVar3;
    local_a8 = FVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
  }
  this_00 = UDS_QuestManager::GetInst();
  if (this_00 != (UDS_QuestManager *)0x0) {
    EVar6 = UDS_QuestManager::GetQuestConditionType(this_00,this->QuestID,0);
    this->QuestStateWidgetIndex = (uint)(EVar6 == AbleComplete);
    local_90 = FFieldNotificationClassDescriptor::QuestStateWidgetIndex.BitNumber;
    local_98 = FFieldNotificationClassDescriptor::QuestStateWidgetIndex.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
  }
  SetProgressZone(this);
  SetIsShowAutoTracking(this);
  if ((this->VM_QuestData).field0_0x0.DebugPtr == (UDS_VM_QuestData *)0x0) {
    pUVar8 = UDS_ViewModelBase::CreateViewModel<UDS_VM_QuestData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UDS_VM_QuestData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    (this->VM_QuestData).field0_0x0.DebugPtr = pUVar8;
    if (pUVar8 != (UDS_VM_QuestData *)0x0) goto LAB_14bf67f96;
  }
  else {
LAB_14bf67f96:
    MakeContext<FDS_ViewModelContext_Quest>(&local_88);
    pFVar4 = local_88.Object;
    if (local_88.Object == (FDS_ViewModelContext_Quest *)0x0) {
      pTVar9 = (TReferenceControllerBase<1> *)
               CONCAT44(local_88.SharedReferenceCount.ReferenceController._4_4_,
                        local_88.SharedReferenceCount.ReferenceController._0_4_);
    }
    else {
      if (local_88.Object == (FDS_ViewModelContext_Quest *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pTVar9 = (TReferenceControllerBase<1> *)
               CONCAT44(local_88.SharedReferenceCount.ReferenceController._4_4_,
                        local_88.SharedReferenceCount.ReferenceController._0_4_);
      *(undefined4 *)&pFVar4->_padding_ = 0x97;
      pFVar4->QuestID = this->QuestID;
      pUVar8 = (this->VM_QuestData).field0_0x0.DebugPtr;
      local_38.Object = (FDS_ViewModelContext *)local_88.Object;
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_38.SharedReferenceCount.ReferenceController = pTVar9;
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar8,&local_38);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
LAB_14bf68037:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetIsSelectedButton @ 14bf7b510

void __thiscall
UDS_VM_AcceptQuestListSlot::SetIsSelectedButton(UDS_VM_AcceptQuestListSlot *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsSelectedButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsSelectedButton.FieldName;
  if (this->IsSelectedButton != *param_1) {
    this->IsSelectedButton = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetIsShowAutoTracking @ 14bf7b650

void __thiscall UDS_VM_AcceptQuestListSlot::SetIsShowAutoTracking(UDS_VM_AcceptQuestListSlot *this)

{
  int iVar1;
  EDS_QuestStateType EVar2;
  EDS_QuestType EVar3;
  int iVar4;
  UDS_QuestManager *this_00;
  bool bVar5;
  FName local_18;
  int local_10;
  
  bVar5 = false;
  if ((0 < this->QuestID) &&
     (this_00 = UDS_QuestManager::GetInst(), this_00 != (UDS_QuestManager *)0x0)) {
    iVar1 = this->QuestID;
    iVar4 = UDS_QuestManager::GetTraceQuestID(this_00);
    if ((iVar4 != iVar1) && (EVar2 = UDS_QuestManager::GetQuestStateType(iVar1), EVar2 == Progress))
    {
      EVar3 = UDS_QuestManager::GetQuestType(this->QuestID);
      bVar5 = false;
      if (EVar3 != Main) {
        bVar5 = true;
      }
    }
  }
  local_10 = FFieldNotificationClassDescriptor::IsShowAutoTracking.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsShowAutoTracking.FieldName;
  if (this->IsShowAutoTracking != bVar5) {
    this->IsShowAutoTracking = bVar5;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetProgressZone @ 14bf7cb80

void __thiscall UDS_VM_AcceptQuestListSlot::SetProgressZone(UDS_VM_AcceptQuestListSlot *this)

{
  int *piVar1;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar2;
  FInstancedStruct *this_00;
  FObjectPtr_u_0 FVar3;
  bool bVar4;
  int iVar5;
  FDS_QuestBaseTableRow *this_01;
  FDS_QuestObjectiveTableRow *this_02;
  FDS_ZoneBaseTableRow *this_03;
  FDS_StringWorldTableRow *pFVar6;
  FObjectPtr_u_0 *pFVar7;
  FString *this_04;
  FName local_18;
  int local_10;
  
  FDS_Text::Reset(&this->ProgressZone);
  if (0 < this->QuestID) {
    this_01 = FDS_QuestBaseTableRow::GetRef((longlong)this->QuestID,true);
    bVar4 = FDS_QuestBaseTableRow::IsValid(this_01);
    if ((bVar4) && (0 < (this_01->ID_QuestObjectiveId).ArrayNum)) {
      this_02 = FDS_QuestObjectiveTableRow::GetRef
                          ((longlong)*(int *)(this_01->ID_QuestObjectiveId).AllocatorInstance.Data,
                           true);
      bVar4 = FDS_QuestObjectiveTableRow::IsValid(this_02);
      if (bVar4) {
        this_03 = FDS_ZoneBaseTableRow::GetRef((longlong)this_02->ID_ProgressZone,true);
        bVar4 = FDS_ZoneBaseTableRow::IsValid(this_03);
        if (bVar4) {
          pFVar6 = FDS_ZoneBaseTableRow::ID_ZoneNameTable(this_03);
          (this->ProgressZone).StringTableType = StringUi;
          pTVar2 = &(this->ProgressZone).FormatArgs;
          (this->ProgressZone).StringTableID = 0xebf7;
          DestructItems<FDS_TextFormatArg,int>
                    ((FDS_TextFormatArg *)(pTVar2->AllocatorInstance).Data,
                     (this->ProgressZone).FormatArgs.ArrayNum);
          piVar1 = &(this->ProgressZone).FormatArgs.ArrayMax;
          (this->ProgressZone).FormatArgs.ArrayNum = 0;
          if (*piVar1 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,0,&pTVar2->AllocatorInstance,0,piVar1);
          }
          iVar5 = (this->ProgressZone).FormatArgs.ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x828,&pTVar2->AllocatorInstance,piVar1);
          }
          (this->ProgressZone).FormatArgs.ArrayNum = iVar5 + 1;
          this_00 = (FInstancedStruct *)((pTVar2->AllocatorInstance).Data + (longlong)iVar5 * 0x28);
          FInstancedStruct::FInstancedStruct(this_00);
          pFVar7 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
          FVar3 = pFVar7[1];
          this_00[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar7;
          this_00[1].StructMemory = (uchar *)FVar3;
          this_00[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar7[2];
          FInstancedStruct::InitializeAs<FDS_StringFormatArg>(this_00);
          this_04 = &FInstancedStruct::GetMutablePtr<FDS_StringFormatArg>(this_00)->Value;
          if (this_04 != (FString *)0x0) {
            ::FString::operator=(this_04,&pFVar6->Text);
          }
        }
      }
    }
  }
  local_10 = FFieldNotificationClassDescriptor::ProgressZone.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ProgressZone.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetQuestStateWidgetIndex @ 14bf7d070

void __thiscall
UDS_VM_AcceptQuestListSlot::SetQuestStateWidgetIndex(UDS_VM_AcceptQuestListSlot *this)

{
  EDS_QuestConditionType EVar1;
  UDS_QuestManager *this_00;
  FName local_18;
  int local_10;
  
  this_00 = UDS_QuestManager::GetInst();
  if (this_00 != (UDS_QuestManager *)0x0) {
    EVar1 = UDS_QuestManager::GetQuestConditionType(this_00,this->QuestID,0);
    this->QuestStateWidgetIndex = (uint)(EVar1 == AbleComplete);
    local_10 = FFieldNotificationClassDescriptor::QuestStateWidgetIndex.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::QuestStateWidgetIndex.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVM_QuestData @ 14bf7fba0

void __thiscall UDS_VM_AcceptQuestListSlot::SetVM_QuestData(UDS_VM_AcceptQuestListSlot *this)

{
  code *pcVar1;
  FDS_ViewModelContext_Quest *pFVar2;
  bool bVar3;
  UDS_VM_QuestData *pUVar4;
  TSharedPtr<FDS_ViewModelContext_Quest,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((this->VM_QuestData).field0_0x0.DebugPtr == (UDS_VM_QuestData *)0x0) {
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_QuestData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_VM_QuestData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VM_QuestData).field0_0x0.DebugPtr = pUVar4;
    if (pUVar4 == (UDS_VM_QuestData *)0x0) {
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
  *(undefined4 *)&pFVar2->_padding_ = 0x97;
  pFVar2->QuestID = this->QuestID;
  pUVar4 = (this->VM_QuestData).field0_0x0.DebugPtr;
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

// UnbindModel @ 14bf846e0

void __thiscall UDS_VM_AcceptQuestListSlot::UnbindModel(UDS_VM_AcceptQuestListSlot *this)

{
  UDS_QuestEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_QuestEvent::GetEvent();
  if (pUVar1 != (UDS_QuestEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnSelectedQuestDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangedTraceQuestDelegate,this);
  }
  return;
}

