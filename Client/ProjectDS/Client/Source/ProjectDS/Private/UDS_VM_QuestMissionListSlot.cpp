// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// SetClickClaimReward_WrapperImpl @ 14b6c6600

void __cdecl
UDS_VM_QuestMissionListSlot::SetClickClaimReward_WrapperImpl(void *param_1,void *param_2)

{
  UDS_QuestManager *this;
  
  if (*(char *)((longlong)param_2 + 3) != '\x01') {
    this = UDS_QuestManager::GetInst();
    if (this != (UDS_QuestManager *)0x0) {
      UDS_QuestManager::OnReqQuestComplete(this,*(int *)((longlong)param_1 + 0x1f0));
      return;
    }
  }
  return;
}

// SetClickMove_WrapperImpl @ 14b6c6610

void __cdecl UDS_VM_QuestMissionListSlot::SetClickMove_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  FDS_QuestMissionTableRow *this;
  UDS_ContentManager *this_00;
  undefined8 auStackX_8 [4];
  
  if (0 < *(int *)((longlong)param_1 + 0x1f0)) {
    this = FDS_QuestMissionTableRow::GetRef((longlong)*(int *)((longlong)param_1 + 0x1f0),true);
    bVar1 = FDS_QuestMissionTableRow::IsValid(this);
    if (((bVar1) && (this->ID_ContentsTabFrame != None)) &&
       (this_00 = UDS_ContentManager::GetInst(), this_00 != (UDS_ContentManager *)0x0)) {
      auStackX_8[0] = 0;
      UDS_ContentManager::OpenContent
                (this_00,&this->ID_ContentsTabFrame,(TObjectPtr<UDS_ContentArguments>)auStackX_8);
    }
  }
  return;
}

// StaticClass @ 14b6c6620

UClass * __cdecl UDS_VM_QuestMissionListSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_QuestMissionListSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_QuestMissionListSlot",
               &Z_Registration_Info_UClass_UDS_VM_QuestMissionListSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_QuestMissionListSlot,0x1f8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_QuestMissionListSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_QuestMissionListSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_QuestMissionListSlot.InnerSingleton;
}

// UDS_VM_QuestMissionListSlot @ 14b6cb050

UDS_VM_QuestMissionListSlot * __thiscall
UDS_VM_QuestMissionListSlot::UDS_VM_QuestMissionListSlot
          (UDS_VM_QuestMissionListSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestMissionListSlot__6B_;
  *(undefined8 *)&(this->ClickClaimReward).Delegate = 0;
  *(undefined8 *)&(this->ClickClaimReward).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickClaimReward).Delegate.field_0x10 = 0;
  (this->ClickMove)._padding_ = '\0';
  (this->ClickMove).bIsCustomSelected = false;
  (this->ClickMove).bIsLacked = false;
  (this->ClickMove).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickMove).Delegate = 0;
  *(undefined8 *)&(this->ClickMove).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickMove).Delegate.field_0x10 = 0;
  (this->VM_QuestData).field0_0x0.DebugPtr = (UDS_VM_QuestData *)0x0;
  (this->VM_QuestObjectiveData).field0_0x0.DebugPtr = (UDS_VM_QuestObjectiveData *)0x0;
  (this->FixedText_Btn_Claim).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Claim).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Claim).DateTime.Ticks = 0;
  (this->FixedText_Btn_Claim).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Claim).TimeExpressionType = None;
  (this->FixedText_Btn_Claim).IsExpression = false;
  (this->FixedText_Btn_Claim).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Claim).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Claim).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Claim).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Claim).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Claim).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Move).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Move).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Move).DateTime.Ticks = 0;
  (this->FixedText_Btn_Move).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Move).TimeExpressionType = None;
  (this->FixedText_Btn_Move).IsExpression = false;
  (this->FixedText_Btn_Move).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Move).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Move).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Move).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Move).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Move).FormatArgs.ArrayMax = 0;
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
  this->QuestID = 0;
  (this->ClickClaimReward)._padding_ = '\0';
  (this->ClickClaimReward).bIsCustomSelected = false;
  (this->ClickClaimReward).bIsLacked = false;
  (this->ClickClaimReward).bIsCustomDisabled = false;
  (this->FixedText_Btn_Claim).StringTableType = StringUi;
  (this->FixedText_Btn_Claim).StringTableID = 0x50926;
  (this->FixedText_Btn_Move).StringTableType = StringUi;
  (this->FixedText_Btn_Move).StringTableID = 0xedeb;
  (this->FixedText_Complete).StringTableType = StringUi;
  (this->FixedText_Complete).StringTableID = 0xeaad;
  return this;
}

// UDS_VM_QuestMissionListSlot @ 14b6cb1d0

UDS_VM_QuestMissionListSlot * __thiscall
UDS_VM_QuestMissionListSlot::UDS_VM_QuestMissionListSlot
          (UDS_VM_QuestMissionListSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestMissionListSlot__6B_;
  *(undefined8 *)&(this->ClickClaimReward).Delegate = 0;
  *(undefined8 *)&(this->ClickClaimReward).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickClaimReward).Delegate.field_0x10 = 0;
  (this->ClickMove)._padding_ = '\0';
  (this->ClickMove).bIsCustomSelected = false;
  (this->ClickMove).bIsLacked = false;
  (this->ClickMove).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickMove).Delegate = 0;
  *(undefined8 *)&(this->ClickMove).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickMove).Delegate.field_0x10 = 0;
  (this->VM_QuestData).field0_0x0.DebugPtr = (UDS_VM_QuestData *)0x0;
  (this->VM_QuestObjectiveData).field0_0x0.DebugPtr = (UDS_VM_QuestObjectiveData *)0x0;
  (this->FixedText_Btn_Claim).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Claim).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Claim).DateTime.Ticks = 0;
  (this->FixedText_Btn_Claim).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Claim).TimeExpressionType = None;
  (this->FixedText_Btn_Claim).IsExpression = false;
  (this->FixedText_Btn_Claim).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Claim).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Claim).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Claim).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Claim).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Claim).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Move).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Move).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Move).DateTime.Ticks = 0;
  (this->FixedText_Btn_Move).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Move).TimeExpressionType = None;
  (this->FixedText_Btn_Move).IsExpression = false;
  (this->FixedText_Btn_Move).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Move).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Move).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Move).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Move).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Move).FormatArgs.ArrayMax = 0;
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
  this->QuestID = 0;
  (this->ClickClaimReward)._padding_ = '\0';
  (this->ClickClaimReward).bIsCustomSelected = false;
  (this->ClickClaimReward).bIsLacked = false;
  (this->ClickClaimReward).bIsCustomDisabled = false;
  (this->FixedText_Btn_Claim).StringTableType = StringUi;
  (this->FixedText_Btn_Claim).StringTableID = 0x50926;
  (this->FixedText_Btn_Move).StringTableType = StringUi;
  (this->FixedText_Btn_Move).StringTableID = 0xedeb;
  (this->FixedText_Complete).StringTableType = StringUi;
  (this->FixedText_Complete).StringTableID = 0xeaad;
  return this;
}

// ~UDS_VM_QuestMissionListSlot @ 14b6ccb40

void __thiscall
UDS_VM_QuestMissionListSlot::~UDS_VM_QuestMissionListSlot(UDS_VM_QuestMissionListSlot *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestMissionListSlot__6B_;
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
            ((FDS_TextFormatArg *)(this->FixedText_Btn_Move).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_Move).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_Move).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_Move).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Btn_Claim).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_Claim).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_Claim).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_Claim).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickMove).Delegate);
  pvVar2 = *(void **)&(this->ClickMove).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickMove).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickClaimReward).Delegate);
  pvVar2 = *(void **)&(this->ClickClaimReward).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickClaimReward).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6cfc30

IClassDescriptor * __thiscall
UDS_VM_QuestMissionListSlot::GetFieldNotificationDescriptor(UDS_VM_QuestMissionListSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_QuestMissionListSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6d0a80

UClass * __cdecl UDS_VM_QuestMissionListSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_QuestMissionListSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_QuestMissionListSlot",
               &Z_Registration_Info_UClass_UDS_VM_QuestMissionListSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_QuestMissionListSlot,0x1f8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_QuestMissionListSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_QuestMissionListSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_QuestMissionListSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_QuestMissionListSlot @ 14b6d10e0

void __cdecl UDS_VM_QuestMissionListSlot::StaticRegisterNativesUDS_VM_QuestMissionListSlot(void)

{
  return;
}

// __VTableCtorCaller @ 14b6d1ea0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_VM_QuestMissionListSlot::__VTableCtorCaller(FVTableHelper *param_1)

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
    *(undefined4 *)&this[3]._padding_ = 0;
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
    this->_padding_ = (longlong)&___7UDS_VM_QuestMissionListSlot__6B_;
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
    *(undefined1 *)&this[1]._padding_ = 2;
    this[1]._padding_ = 0x50926;
    this[1].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    this[1].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[1].Visibility = Visible;
    *(undefined3 *)&this[1].field_0x81 = 0;
    this[1].VMName.ComparisonIndex = 0;
    this[1].VMName.Number = 0;
    this[1].bIsCloseInit = false;
    this[1].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].TextPropertyIDList.ArrayNum = 0;
    this[1].TextPropertyIDList.ArrayMax = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined1 *)&this[2]._padding_ = 2;
    this[2]._padding_ = 0xedeb;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined1 *)&this[2]._padding_ = 2;
    this[2]._padding_ = 0xeaad;
    this[2].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    this[2].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[2].Visibility = Visible;
    *(undefined3 *)&this[2].field_0x81 = 0;
    this[2].VMName.ComparisonIndex = 0;
    this[2].VMName.Number = 0;
    this[2].bIsCloseInit = false;
    this[2].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[2].TextPropertyIDList.ArrayNum = 0;
    this[2].TextPropertyIDList.ArrayMax = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// OnClickClaimReward @ 14bf61ae0

void __thiscall
UDS_VM_QuestMissionListSlot::OnClickClaimReward
          (UDS_VM_QuestMissionListSlot *this,FDS_ButtonEventField *param_1)

{
  UDS_QuestManager *this_00;
  
  if (param_1->bIsCustomDisabled != true) {
    this_00 = UDS_QuestManager::GetInst();
    if (this_00 != (UDS_QuestManager *)0x0) {
      UDS_QuestManager::OnReqQuestComplete(this_00,this->QuestID);
      return;
    }
  }
  return;
}

// OnClickMove @ 14bf62320

void __thiscall
UDS_VM_QuestMissionListSlot::OnClickMove
          (UDS_VM_QuestMissionListSlot *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  FDS_QuestMissionTableRow *this_00;
  UDS_ContentManager *this_01;
  undefined8 local_res8 [4];
  
  if (0 < this->QuestID) {
    this_00 = FDS_QuestMissionTableRow::GetRef((longlong)this->QuestID,true);
    bVar1 = FDS_QuestMissionTableRow::IsValid(this_00);
    if (((bVar1) && (this_00->ID_ContentsTabFrame != None)) &&
       (this_01 = UDS_ContentManager::GetInst(), this_01 != (UDS_ContentManager *)0x0)) {
      local_res8[0] = 0;
      UDS_ContentManager::OpenContent
                (this_01,&this_00->ID_ContentsTabFrame,(TObjectPtr<UDS_ContentArguments>)local_res8)
      ;
    }
  }
  return;
}

// OnSetViewModel @ 14bf6c3f0

void __thiscall
UDS_VM_QuestMissionListSlot::OnSetViewModel
          (UDS_VM_QuestMissionListSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  FName FVar4;
  FName FVar5;
  int iVar6;
  FDS_ViewModelContext_QuestObjectiveData *pFVar7;
  FDS_ViewModelContext_Quest *pFVar8;
  bool bVar9;
  EDS_QuestStateType EVar10;
  UDS_QuestManager *pUVar11;
  FDS_QuestMissionTableRow *this_00;
  UDS_VM_QuestData *pUVar12;
  UDS_VM_QuestObjectiveData *pUVar13;
  FDS_QuestBaseTableRow *this_01;
  TSharedPtr<FDS_ViewModelContext_QuestObjectiveData,1> local_c8;
  TSharedPtr<FDS_ViewModelContext_Quest,1> local_b8;
  TSharedPtr<FDS_ViewModelContext_Quest,1> local_a8;
  FName local_98;
  int local_90;
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
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_38.Object = param_1->Object;
  local_38.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_Quest>(&local_a8,&local_38);
  if (local_a8.Object == (FDS_ViewModelContext_Quest *)0x0) goto LAB_14bf6c8a0;
  if ((local_a8.Object == (FDS_ViewModelContext_Quest *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this->QuestID = (local_a8.Object)->QuestID;
  iVar1 = FFieldNotificationClassDescriptor::IsDisableClaimRewardButton.BitNumber;
  FVar4 = FFieldNotificationClassDescriptor::IsDisableClaimRewardButton.FieldName;
  if (this->IsDisableClaimRewardButton != true) {
    this->IsDisableClaimRewardButton = true;
    local_90 = iVar1;
    local_98 = FVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
  }
  iVar1 = FFieldNotificationClassDescriptor::SlotBgWidgetIndex.BitNumber;
  FVar4 = FFieldNotificationClassDescriptor::SlotBgWidgetIndex.FieldName;
  if (this->SlotBgWidgetIndex != 0) {
    this->SlotBgWidgetIndex = 0;
    local_80 = iVar1;
    local_88 = FVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
  }
  iVar1 = FFieldNotificationClassDescriptor::ButtonWidgetIndex.BitNumber;
  FVar4 = FFieldNotificationClassDescriptor::ButtonWidgetIndex.FieldName;
  if (this->ButtonWidgetIndex != 0) {
    this->ButtonWidgetIndex = 0;
    local_70 = iVar1;
    local_78 = FVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
  }
  if ((0 < this->QuestID) &&
     (pUVar11 = UDS_QuestManager::GetInst(), pUVar11 != (UDS_QuestManager *)0x0)) {
    EVar10 = UDS_QuestManager::GetQuestStateType(this->QuestID);
    iVar6 = FFieldNotificationClassDescriptor::SlotBgWidgetIndex.BitNumber;
    FVar5 = FFieldNotificationClassDescriptor::SlotBgWidgetIndex.FieldName;
    iVar1 = FFieldNotificationClassDescriptor::IsDisableClaimRewardButton.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::IsDisableClaimRewardButton.FieldName;
    if (EVar10 == Progress) {
      this_00 = FDS_QuestMissionTableRow::GetRef((longlong)this->QuestID,true);
      bVar9 = FDS_QuestMissionTableRow::IsValid(this_00);
      if (bVar9) {
        SetButtonWidgetIndex(this,(uint)(this_00->ID_ContentsTabFrame != None));
      }
    }
    else if (EVar10 == Complete) {
      if (this->IsDisableClaimRewardButton != false) {
        this->IsDisableClaimRewardButton = false;
        local_50 = iVar1;
        local_58 = FVar4;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
      }
      iVar1 = FFieldNotificationClassDescriptor::SlotBgWidgetIndex.BitNumber;
      FVar4 = FFieldNotificationClassDescriptor::SlotBgWidgetIndex.FieldName;
      if (this->SlotBgWidgetIndex != 1) {
        this->SlotBgWidgetIndex = 1;
        local_40 = iVar1;
        local_48 = FVar4;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
      }
    }
    else if ((EVar10 == Rewarded) && (this->SlotBgWidgetIndex != 2)) {
      this->SlotBgWidgetIndex = 2;
      local_60 = iVar6;
      local_68 = FVar5;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
    }
  }
  if ((this->VM_QuestData).field0_0x0.DebugPtr == (UDS_VM_QuestData *)0x0) {
    pUVar12 = UDS_ViewModelBase::CreateViewModel<UDS_VM_QuestData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UDS_VM_QuestData *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pUVar12);
    }
    (this->VM_QuestData).field0_0x0.DebugPtr = pUVar12;
    if (pUVar12 != (UDS_VM_QuestData *)0x0) goto LAB_14bf6c68c;
  }
  else {
LAB_14bf6c68c:
    MakeContext<FDS_ViewModelContext_Quest>(&local_b8);
    pFVar8 = local_b8.Object;
    if (local_b8.Object != (FDS_ViewModelContext_Quest *)0x0) {
      if ((local_b8.Object == (FDS_ViewModelContext_Quest *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined4 *)&pFVar8->_padding_ = 0x97;
      pFVar8->QuestID = this->QuestID;
      pUVar12 = (this->VM_QuestData).field0_0x0.DebugPtr;
      local_28.Object = (FDS_ViewModelContext *)local_b8.Object;
      local_28.SharedReferenceCount.ReferenceController =
           local_b8.SharedReferenceCount.ReferenceController;
      if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar12,&local_28);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.SharedReferenceCount.ReferenceController);
  }
  if ((this->VM_QuestObjectiveData).field0_0x0.DebugPtr == (UDS_VM_QuestObjectiveData *)0x0) {
    pUVar13 = UDS_ViewModelBase::CreateViewModel<UDS_VM_QuestObjectiveData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar13 != (UDS_VM_QuestObjectiveData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar13);
    }
    (this->VM_QuestObjectiveData).field0_0x0.DebugPtr = pUVar13;
    if (pUVar13 == (UDS_VM_QuestObjectiveData *)0x0) goto LAB_14bf6c8a0;
  }
  this_01 = FDS_QuestBaseTableRow::GetRef((longlong)this->QuestID,true);
  bVar9 = FDS_QuestBaseTableRow::IsValid(this_01);
  if ((bVar9) && (0 < (this_01->ID_QuestObjectiveId).ArrayNum)) {
    MakeContext<FDS_ViewModelContext_QuestObjectiveData>(&local_c8);
    pFVar7 = local_c8.Object;
    if (local_c8.Object != (FDS_ViewModelContext_QuestObjectiveData *)0x0) {
      if ((local_c8.Object == (FDS_ViewModelContext_QuestObjectiveData *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined4 *)&pFVar7->_padding_ = 0x98;
      pFVar7->QuestID = this->QuestID;
      if (((this_01->ID_QuestObjectiveId).ArrayNum < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar1 = *(int *)(this_01->ID_QuestObjectiveId).AllocatorInstance.Data;
      if ((pFVar7 == (FDS_ViewModelContext_QuestObjectiveData *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_18.Object = (FDS_ViewModelContext *)local_c8.Object;
      local_18.SharedReferenceCount.ReferenceController =
           local_c8.SharedReferenceCount.ReferenceController;
      pFVar7->QuestObjectiveID = iVar1;
      pUVar13 = (this->VM_QuestObjectiveData).field0_0x0.DebugPtr;
      if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar13,&local_18);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.SharedReferenceCount.ReferenceController);
  }
LAB_14bf6c8a0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetButtonWidgetIndex @ 14bf79700

void __thiscall
UDS_VM_QuestMissionListSlot::SetButtonWidgetIndex(UDS_VM_QuestMissionListSlot *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::ButtonWidgetIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ButtonWidgetIndex.FieldName;
  if (this->ButtonWidgetIndex != param_1) {
    this->ButtonWidgetIndex = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetIsDisableClaimRewardButton @ 14bf7b360

void __thiscall
UDS_VM_QuestMissionListSlot::SetIsDisableClaimRewardButton
          (UDS_VM_QuestMissionListSlot *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsDisableClaimRewardButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsDisableClaimRewardButton.FieldName;
  if (this->IsDisableClaimRewardButton != param_1) {
    this->IsDisableClaimRewardButton = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetSlotBgWidgetIndex @ 14bf7d9e0

void __thiscall
UDS_VM_QuestMissionListSlot::SetSlotBgWidgetIndex(UDS_VM_QuestMissionListSlot *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::SlotBgWidgetIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SlotBgWidgetIndex.FieldName;
  if (this->SlotBgWidgetIndex != param_1) {
    this->SlotBgWidgetIndex = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVM_QuestData @ 14bf801f0

void __thiscall UDS_VM_QuestMissionListSlot::SetVM_QuestData(UDS_VM_QuestMissionListSlot *this)

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

// SetVM_QuestObjectiveData @ 14bf815c0

void __thiscall
UDS_VM_QuestMissionListSlot::SetVM_QuestObjectiveData(UDS_VM_QuestMissionListSlot *this)

{
  int iVar1;
  code *pcVar2;
  FDS_ViewModelContext_QuestObjectiveData *pFVar3;
  bool bVar4;
  UDS_VM_QuestObjectiveData *pUVar5;
  FDS_QuestBaseTableRow *this_00;
  TSharedPtr<FDS_ViewModelContext_QuestObjectiveData,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((this->VM_QuestObjectiveData).field0_0x0.DebugPtr == (UDS_VM_QuestObjectiveData *)0x0) {
    pUVar5 = UDS_ViewModelBase::CreateViewModel<UDS_VM_QuestObjectiveData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_QuestObjectiveData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_QuestObjectiveData).field0_0x0.DebugPtr = pUVar5;
    if (pUVar5 == (UDS_VM_QuestObjectiveData *)0x0) {
      return;
    }
  }
  this_00 = FDS_QuestBaseTableRow::GetRef((longlong)this->QuestID,true);
  bVar4 = FDS_QuestBaseTableRow::IsValid(this_00);
  if ((bVar4) && (0 < (this_00->ID_QuestObjectiveId).ArrayNum)) {
    MakeContext<FDS_ViewModelContext_QuestObjectiveData>(&local_28);
    pFVar3 = local_28.Object;
    if (local_28.Object != (FDS_ViewModelContext_QuestObjectiveData *)0x0) {
      if ((local_28.Object == (FDS_ViewModelContext_QuestObjectiveData *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined4 *)&pFVar3->_padding_ = 0x98;
      pFVar3->QuestID = this->QuestID;
      if (((this_00->ID_QuestObjectiveId).ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar1 = *(int *)(this_00->ID_QuestObjectiveId).AllocatorInstance.Data;
      if ((pFVar3 == (FDS_ViewModelContext_QuestObjectiveData *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar3->QuestObjectiveID = iVar1;
      pUVar5 = (this->VM_QuestObjectiveData).field0_0x0.DebugPtr;
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
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar5,&local_18);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return;
}

