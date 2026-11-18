// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 25

// SetClickAcceptQuest_WrapperImpl @ 14b6d38c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_QuestTracker::SetClickAcceptQuest_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  int iVar2;
  UDS_PhasingManager *this;
  FDS_PhasingBaseTableRow *this_00;
  UDS_WindowManager *this_01;
  undefined8 *puVar3;
  ulong64 uVar4;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar5;
  void *pvStackX_18;
  code *pcStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  bool bStack_68;
  undefined1 auStack_58 [8];
  FDelegateAllocation FStack_50;
  FDestructionSentinel FStack_40;
  FDelegateAllocation *pFStack_28;
  
  this = UDS_PhasingManager::GetInst();
  if ((this != (UDS_PhasingManager *)0x0) &&
     (bVar1 = UDS_PhasingManager::IsPhasingInProgress(this), bVar1)) {
    iVar2 = UDS_PhasingManager::GetPhasingIDInProgress(this);
    this_00 = FDS_PhasingBaseTableRow::GetRef((longlong)iVar2,true);
    bVar1 = FDS_PhasingBaseTableRow::IsValid(this_00);
    if (!bVar1) {
      return;
    }
    if (this_00->PhasingContentsType != Inn) {
      return;
    }
  }
  this_01 = UDS_WindowManager::GetInst();
  if (this_01 != (UDS_WindowManager *)0x0) {
    pcStack_78 = OnOpenAcceptQuestUI;
    uStack_70 = 0;
    auStack_58 = (undefined1  [8])0x0;
    FStack_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    FStack_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_58,
               (FWriteAccessScope *)&FStack_40);
    pFStack_28 = &FStack_50;
    puVar3 = UE::Core::Private::DelegateAllocate(0x30,&FStack_50);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_QuestTracker____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (void *)0x0)) {
        UE::GC::MarkAsReachable(param_1);
      }
      puVar3[3] = 0;
      pvStackX_18 = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (void *)0x0)) {
        UE::GC::MarkAsReachable(param_1);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&pvStackX_18);
      puVar3[4] = pcStack_78;
      puVar3[5] = CONCAT44(uStack_6c,uStack_70);
    }
    if (FStack_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_40.Accessor,&FStack_40);
    }
    pTVar5 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                       ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        &pcStack_78,
                        (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        auStack_58);
    UDS_WindowManager::OpenWindow(this_01,AcceptQuestList,pTVar5);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_58,
               (FWriteAccessScope *)&pcStack_78);
    if ((FStack_50.DelegateSize != 0) &&
       (FStack_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)FStack_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&FStack_50,0,0,0x10);
      FStack_50.DelegateSize = 0;
    }
    if (bStack_68 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_6c,uStack_70),
                 (FDestructionSentinel *)&pcStack_78);
    }
    if (FStack_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)FStack_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)auStack_58);
  }
  return;
}

// StaticClass @ 14b6d38d0

UClass * __cdecl UDS_VM_QuestTracker::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_QuestTracker.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_QuestTracker",
               &Z_Registration_Info_UClass_UDS_VM_QuestTracker.InnerSingleton,
               StaticRegisterNativesUDS_VM_QuestTracker,400,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_QuestTracker>,
               InternalVTableHelperCtorCaller<UDS_VM_QuestTracker>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_QuestTracker.InnerSingleton;
}

// UDS_VM_QuestTracker @ 14b6d7320

UDS_VM_QuestTracker * __thiscall
UDS_VM_QuestTracker::UDS_VM_QuestTracker(UDS_VM_QuestTracker *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestTracker__6B_;
  *(undefined8 *)&(this->ClickAcceptQuest).Delegate = 0;
  *(undefined8 *)&(this->ClickAcceptQuest).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickAcceptQuest).Delegate.field_0x10 = 0;
  (this->EntryBindingEventField_Objective).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_Objective).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_Objective).UserObjectList.ArrayMax = 0;
  (this->Title).StringTableType = None;
  (this->Title).StringTableID = 0;
  (this->Title).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Title).StringEnumTableNameID.Number = 0;
  (this->Title).DateTime.Ticks = 0;
  (this->Title).TimeSpan.Ticks = 0;
  (this->Title).TimeExpressionType = None;
  (this->Title).IsExpression = false;
  (this->Title).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Title).UniqueString.Data.ArrayNum = 0;
  (this->Title).UniqueString.Data.ArrayMax = 0;
  (this->Title).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Title).FormatArgs.ArrayNum = 0;
  (this->Title).FormatArgs.ArrayMax = 0;
  (this->CompleteText).StringTableType = None;
  (this->CompleteText).StringTableID = 0;
  (this->CompleteText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CompleteText).StringEnumTableNameID.Number = 0;
  (this->CompleteText).DateTime.Ticks = 0;
  (this->CompleteText).TimeSpan.Ticks = 0;
  (this->CompleteText).TimeExpressionType = None;
  (this->CompleteText).IsExpression = false;
  (this->CompleteText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompleteText).UniqueString.Data.ArrayNum = 0;
  (this->CompleteText).UniqueString.Data.ArrayMax = 0;
  (this->CompleteText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompleteText).FormatArgs.ArrayNum = 0;
  (this->CompleteText).FormatArgs.ArrayMax = 0;
  this->QuestTypeIconID = 0;
  this->QuestCompleteWidgetIndex = 0;
  (this->VM_W_HUD_QuestMenu).field0_0x0.DebugPtr = (UDS_VM_W_HUD_QuestMenu *)0x0;
  this->TraceQuestID = 0;
  (this->ClickAcceptQuest)._padding_ = '\0';
  (this->ClickAcceptQuest).bIsCustomSelected = false;
  (this->ClickAcceptQuest).bIsLacked = false;
  (this->ClickAcceptQuest).bIsCustomDisabled = false;
  return this;
}

// UDS_VM_QuestTracker @ 14b6d7440

UDS_VM_QuestTracker * __thiscall
UDS_VM_QuestTracker::UDS_VM_QuestTracker(UDS_VM_QuestTracker *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestTracker__6B_;
  *(undefined8 *)&(this->ClickAcceptQuest).Delegate = 0;
  *(undefined8 *)&(this->ClickAcceptQuest).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickAcceptQuest).Delegate.field_0x10 = 0;
  (this->EntryBindingEventField_Objective).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_Objective).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_Objective).UserObjectList.ArrayMax = 0;
  (this->Title).StringTableType = None;
  (this->Title).StringTableID = 0;
  (this->Title).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Title).StringEnumTableNameID.Number = 0;
  (this->Title).DateTime.Ticks = 0;
  (this->Title).TimeSpan.Ticks = 0;
  (this->Title).TimeExpressionType = None;
  (this->Title).IsExpression = false;
  (this->Title).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Title).UniqueString.Data.ArrayNum = 0;
  (this->Title).UniqueString.Data.ArrayMax = 0;
  (this->Title).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Title).FormatArgs.ArrayNum = 0;
  (this->Title).FormatArgs.ArrayMax = 0;
  (this->CompleteText).StringTableType = None;
  (this->CompleteText).StringTableID = 0;
  (this->CompleteText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CompleteText).StringEnumTableNameID.Number = 0;
  (this->CompleteText).DateTime.Ticks = 0;
  (this->CompleteText).TimeSpan.Ticks = 0;
  (this->CompleteText).TimeExpressionType = None;
  (this->CompleteText).IsExpression = false;
  (this->CompleteText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompleteText).UniqueString.Data.ArrayNum = 0;
  (this->CompleteText).UniqueString.Data.ArrayMax = 0;
  (this->CompleteText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompleteText).FormatArgs.ArrayNum = 0;
  (this->CompleteText).FormatArgs.ArrayMax = 0;
  this->QuestTypeIconID = 0;
  this->QuestCompleteWidgetIndex = 0;
  (this->VM_W_HUD_QuestMenu).field0_0x0.DebugPtr = (UDS_VM_W_HUD_QuestMenu *)0x0;
  this->TraceQuestID = 0;
  (this->ClickAcceptQuest)._padding_ = '\0';
  (this->ClickAcceptQuest).bIsCustomSelected = false;
  (this->ClickAcceptQuest).bIsLacked = false;
  (this->ClickAcceptQuest).bIsCustomDisabled = false;
  return this;
}

// ~UDS_VM_QuestTracker @ 14b6d9c80

void __thiscall UDS_VM_QuestTracker::~UDS_VM_QuestTracker(UDS_VM_QuestTracker *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestTracker__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->CompleteText).FormatArgs.AllocatorInstance.Data,
             (this->CompleteText).FormatArgs.ArrayNum);
  pFVar1 = (this->CompleteText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CompleteText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Title).FormatArgs.AllocatorInstance.Data,
             (this->Title).FormatArgs.ArrayNum);
  pFVar1 = (this->Title).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Title).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EntryBindingEventField_Objective).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickAcceptQuest).Delegate);
  pvVar2 = *(void **)&(this->ClickAcceptQuest).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickAcceptQuest).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6dc8a0

IClassDescriptor * __thiscall
UDS_VM_QuestTracker::GetFieldNotificationDescriptor(UDS_VM_QuestTracker *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_QuestTracker::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6dd080

UClass * __cdecl UDS_VM_QuestTracker::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_QuestTracker.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_QuestTracker",
               &Z_Registration_Info_UClass_UDS_VM_QuestTracker.InnerSingleton,
               StaticRegisterNativesUDS_VM_QuestTracker,400,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_QuestTracker>,
               InternalVTableHelperCtorCaller<UDS_VM_QuestTracker>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_QuestTracker.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_QuestTracker @ 14b6dde10

void __cdecl UDS_VM_QuestTracker::StaticRegisterNativesUDS_VM_QuestTracker(void)

{
  return;
}

// OnChangeTraceQuestID @ 14bf5fc40

void __thiscall UDS_VM_QuestTracker::OnChangeTraceQuestID(UDS_VM_QuestTracker *this,int param_1)

{
  EDS_QuestType EVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  UDS_PhasingManager *this_00;
  FDS_PhasingBaseTableRow *this_01;
  FDS_QuestBaseTableRow *this_02;
  FName local_18;
  int local_10;
  
  this_00 = UDS_PhasingManager::GetInst();
  if (this_00 != (UDS_PhasingManager *)0x0) {
    bVar4 = UDS_PhasingManager::IsPhasingInProgress(this_00);
    if (bVar4) {
      iVar5 = UDS_PhasingManager::GetPhasingIDInProgress(this_00);
      this_01 = FDS_PhasingBaseTableRow::GetRef((longlong)iVar5,true);
      bVar4 = FDS_PhasingBaseTableRow::IsValid(this_01);
      if (!bVar4) {
        return;
      }
      if (this_01->PhasingContentsType != Inn) {
        return;
      }
    }
    this->TraceQuestID = param_1;
    SetTitle(this);
    iVar5 = 0;
    if (0 < this->TraceQuestID) {
      this_02 = FDS_QuestBaseTableRow::GetRef((longlong)this->TraceQuestID,true);
      bVar4 = FDS_QuestBaseTableRow::IsValid(this_02);
      if (bVar4) {
        EVar1 = this_02->QuestType;
        if (EVar1 == Main) {
          iVar5 = DS_CommonDataHelper::QuestTypeIconMain();
        }
        else if (EVar1 == Local) {
          iVar5 = DS_CommonDataHelper::QuestTypeIconLocal();
        }
        else if (EVar1 == Daily) {
          iVar5 = DS_CommonDataHelper::QuestTypeIconDaily();
        }
        else if (EVar1 == Repeat) {
          iVar5 = DS_CommonDataHelper::QuestTypeIconRepeat();
        }
      }
    }
    iVar3 = FFieldNotificationClassDescriptor::QuestTypeIconID.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::QuestTypeIconID.FieldName;
    if (this->QuestTypeIconID != iVar5) {
      this->QuestTypeIconID = iVar5;
      local_10 = iVar3;
      local_18 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    SetCompleteText(this);
    SetQuestCompleteWidgetIndex(this);
    iVar5 = FFieldNotificationClassDescriptor::VisibilityQuestTypeIcon.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::VisibilityQuestTypeIcon.FieldName;
    if (this->VisibilityQuestTypeIcon != SelfHitTestInvisible) {
      this->VisibilityQuestTypeIcon = SelfHitTestInvisible;
      local_10 = iVar5;
      local_18 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    UpdateQuestObjective(this);
  }
  return;
}

// OnClickAcceptQuest @ 14bf61490

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_QuestTracker::OnClickAcceptQuest(UDS_VM_QuestTracker *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  int iVar2;
  UDS_PhasingManager *this_00;
  FDS_PhasingBaseTableRow *this_01;
  UDS_WindowManager *this_02;
  undefined8 *puVar3;
  ulong64 uVar4;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar5;
  UDS_VM_QuestTracker *local_res18;
  code *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  bool local_68;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  this_00 = UDS_PhasingManager::GetInst();
  if ((this_00 != (UDS_PhasingManager *)0x0) &&
     (bVar1 = UDS_PhasingManager::IsPhasingInProgress(this_00), bVar1)) {
    iVar2 = UDS_PhasingManager::GetPhasingIDInProgress(this_00);
    this_01 = FDS_PhasingBaseTableRow::GetRef((longlong)iVar2,true);
    bVar1 = FDS_PhasingBaseTableRow::IsValid(this_01);
    if (!bVar1) {
      return;
    }
    if (this_01->PhasingContentsType != Inn) {
      return;
    }
  }
  this_02 = UDS_WindowManager::GetInst();
  if (this_02 != (UDS_WindowManager *)0x0) {
    local_78 = OnOpenAcceptQuestUI;
    uStack_70 = 0;
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar3 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_QuestTracker____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_QuestTracker *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar3[3] = 0;
      local_res18 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_QuestTracker *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res18);
      puVar3[4] = local_78;
      puVar3[5] = CONCAT44(uStack_6c,uStack_70);
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    pTVar5 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                       ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        &local_78,
                        (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        local_58);
    UDS_WindowManager::OpenWindow(this_02,AcceptQuestList,pTVar5);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_78);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_68 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_6c,uStack_70),
                 (FDestructionSentinel *)&local_78);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  return;
}

// OnOpenAcceptQuestUI @ 14bf654c0

void __thiscall
UDS_VM_QuestTracker::OnOpenAcceptQuestUI(UDS_VM_QuestTracker *this,UDS_UserWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext *pFVar3;
  UScriptStruct *pUVar4;
  UDS_ViewModelContextManager *this_00;
  FDS_ViewModelContext *pFVar5;
  FDS_ViewModelContext *pFVar6;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  UDS_UserWidget *local_res20;
  TSharedPtr<FDS_ViewModelContext,1> local_c8;
  UDS_UserWidget *local_b8;
  TSharedPtr<FDS_ViewModelContext,1> local_b0;
  FDS_Text local_a0;
  TSharedPtr<FDS_ViewModelContext,1> local_50;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  
  if (param_1 != (UDS_UserWidget *)0x0) {
    MakeContext<FDS_ViewModelContext>(&local_c8);
    pFVar5 = (FDS_ViewModelContext *)0x0;
    if (local_c8.Object != (FDS_ViewModelContext *)0x0) {
      if ((local_c8.Object == (FDS_ViewModelContext *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (local_c8.Object)->ViewModelTemplateKey = AcceptQuest;
      local_38.Object = local_c8.Object;
      local_38.SharedReferenceCount.ReferenceController =
           local_c8.SharedReferenceCount.ReferenceController;
      if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_res10.ObjectIndex = 0;
      local_res10.ObjectSerialNumber = 0;
      local_res20 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
      DS_ViewModelTemplateUtil::BindViewModel
                ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res10,&local_38,false);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.SharedReferenceCount.ReferenceController);
    pFVar3 = ::operator_new(0x70);
    pFVar6 = pFVar5;
    if (pFVar3 != (FDS_ViewModelContext *)0x0) {
      *(undefined4 *)&pFVar3->field_0x1c = 0;
      *(undefined4 *)((longlong)&pFVar3[1]._padding_ + 1) = 0;
      *(undefined2 *)((longlong)&pFVar3[1]._padding_ + 5) = 0;
      *(undefined1 *)((longlong)&pFVar3[1]._padding_ + 7) = 0;
      *(undefined2 *)&((atomic<int> *)&pFVar3[2].DerivedStaticStruct)[1].field_0x1 = 0;
      ((atomic<int> *)&pFVar3[2].DerivedStaticStruct)[1].field_0x3 = 0;
      pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_PopupTitle__6B_;
      *(undefined8 *)&pFVar3->DerivedStaticStruct = 0;
      (pFVar3->ViewModelName).ComparisonIndex = 0;
      (pFVar3->ViewModelName).Number = 0;
      pFVar3->ViewModelTemplateKey = None;
      *(undefined1 *)&pFVar3[1]._padding_ = 0;
      *(undefined8 *)&pFVar3[1].DerivedStaticStruct = 0;
      pFVar3[1].ViewModelName.ComparisonIndex = 0;
      pFVar3[1].ViewModelName.Number = 0;
      *(undefined8 *)&pFVar3[1].ViewModelTemplateKey = 0;
      pFVar3[2]._padding_ = 0;
      *(atomic<int> *)&pFVar3[2].DerivedStaticStruct = (atomic<int>)0x0;
      *(undefined1 *)((atomic<int> *)&pFVar3[2].DerivedStaticStruct + 1) = 0;
      pFVar3[2].ViewModelName.ComparisonIndex = 0;
      pFVar3[2].ViewModelName.Number = 0;
      *(undefined8 *)&pFVar3[2].ViewModelTemplateKey = 0;
      pFVar3[3]._padding_ = 0;
      *(undefined8 *)&pFVar3[3].DerivedStaticStruct = 0;
      pFVar6 = pFVar3;
    }
    pFVar3 = ::operator_new(0x20);
    if (pFVar3 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar3->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar3->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar3->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_PopupTitle__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar3->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar3->ViewModelTemplateKey = pFVar6;
      pFVar5 = pFVar3;
    }
    if ((pFVar6 == (FDS_ViewModelContext *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar4 = FDS_ViewModelContext_PopupTitle::StaticStruct();
    *(UScriptStruct **)&pFVar6->DerivedStaticStruct = pUVar4;
    this_00 = UDS_ViewModelContextManager::GetInst();
    if (this_00 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar5 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar5->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar5->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_b0.Object = pFVar6;
      local_b0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar5;
      UDS_ViewModelContextManager::RegisterContext(this_00,&local_b0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b0.SharedReferenceCount.ReferenceController);
    }
    pFVar6->ViewModelTemplateKey = W_ContentsPopupTitle;
    local_a0.StringTableType = None;
    local_a0.StringTableID = 0;
    local_a0.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_a0.StringEnumTableNameID.Number = 0;
    local_a0.DateTime.Ticks = 0;
    local_a0.TimeSpan.Ticks = 0;
    local_a0.TimeExpressionType = None;
    local_a0.IsExpression = false;
    local_a0.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a0.UniqueString.Data.ArrayNum = 0;
    local_a0.UniqueString.Data.ArrayMax = 0;
    local_a0.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a0.FormatArgs.ArrayNum = 0;
    local_a0.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_a0,StringUi,0xebf1);
    FDS_Text::operator=((FDS_Text *)(pFVar6 + 1),&local_a0);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_a0.FormatArgs.AllocatorInstance.Data,
               local_a0.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_a0.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
    {
      FMemory::Free(local_a0.FormatArgs.AllocatorInstance.Data);
    }
    if (local_a0.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.UniqueString.Data.AllocatorInstance.Data);
    }
    if (pFVar5 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar5->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar5->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_50.Object = pFVar6;
    local_50.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar5;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_b8 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_b8);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res18,&local_50,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar5);
  }
  return;
}

// OnPhasingChange @ 14bf66430

void __thiscall UDS_VM_QuestTracker::OnPhasingChange(UDS_VM_QuestTracker *this,bool *param_1)

{
  int iVar1;
  UDS_QuestManager *this_00;
  
  if (*param_1 == false) {
    this_00 = UDS_QuestManager::GetInst();
    if (this_00 != (UDS_QuestManager *)0x0) {
      iVar1 = UDS_QuestManager::GetTraceQuestID(this_00);
      OnChangeTraceQuestID(this,iVar1);
      return;
    }
  }
  return;
}

// OnScriptMissionStart @ 14bf67690

void __thiscall UDS_VM_QuestTracker::OnScriptMissionStart(UDS_VM_QuestTracker *this,int *param_1)

{
  FName FVar1;
  int iVar2;
  bool bVar3;
  FDS_ScriptMissionTrackerTableRow *this_00;
  FName local_18;
  int local_10;
  
  FDS_Text::Reset(&this->Title);
  this_00 = FDS_ScriptMissionTrackerTableRow::GetRef((longlong)*param_1,true);
  bVar3 = FDS_ScriptMissionTrackerTableRow::IsValid(this_00);
  if (bVar3) {
    FDS_Text::SetTextFromStringID(&this->Title,&this_00->ID_TrackerTitleId);
  }
  local_10 = FFieldNotificationClassDescriptor::Title.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Title.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  iVar2 = FFieldNotificationClassDescriptor::VisibilityQuestTypeIcon.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::VisibilityQuestTypeIcon.FieldName;
  if (this->VisibilityQuestTypeIcon != Collapsed) {
    this->VisibilityQuestTypeIcon = Collapsed;
    local_10 = iVar2;
    local_18 = FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  UpdateScriptMission(this,*param_1);
  return;
}

// OnSetViewModel @ 14bf6d110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_VM_QuestTracker::OnSetViewModel
          (UDS_VM_QuestTracker *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UDS_PhasingManager *this_00;
  UDS_QuestManager *this_01;
  UDS_QuestEvent *pUVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  UDS_VM_W_HUD_QuestMenu *pUVar9;
  FDS_PhasingBaseTableRow *this_02;
  FDateTime FVar10;
  undefined1 auStack_198 [32];
  TSharedPtr<FDS_ViewModelContext,1> local_178;
  int local_168 [2];
  FName local_160;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [104];
  longlong lStack_d0;
  undefined1 local_c8 [80];
  longlong local_78 [3];
  FDateTime local_60;
  ForAnyElementType local_48;
  
  local_48.Data = (FScriptContainerElement *)(__security_cookie.value ^ (ulonglong)auStack_198);
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (param_1->Object == (FDS_ViewModelContext *)0x0) goto LAB_14bf6d49b;
  this_00 = UDS_PhasingManager::GetInst();
  if (this_00 != (UDS_PhasingManager *)0x0) {
    local_178.SharedReferenceCount.ReferenceController._0_4_ = 0;
    local_178.Object = (FDS_ViewModelContext *)OnPhasingChange;
    local_138._24_8_ = (ulonglong)local_178.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
    local_138._16_8_ = OnPhasingChange;
    TMulticastDelegateRegistration<void___cdecl(bool_const_&),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_QuestTracker>
              ((TMulticastDelegateRegistration<void___cdecl(bool_const_&),FDefaultDelegateUserPolicy>
                *)&this_00->PhasingStartOrEndDelegate,(UDS_VM_QuestTracker *)local_158,
               (pmf_60161cb7 *)this);
    local_178.SharedReferenceCount.ReferenceController._0_4_ = 0;
    local_178.Object = (FDS_ViewModelContext *)OnScriptMissionStart;
    local_138._40_8_ = (ulonglong)local_178.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
    local_138._32_8_ = OnScriptMissionStart;
    TMulticastDelegateRegistration<void___cdecl(int_const_&),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_QuestTracker>
              ((TMulticastDelegateRegistration<void___cdecl(int_const_&),FDefaultDelegateUserPolicy>
                *)&this_00->PhasingScriptMissionStartDelegate,(UDS_VM_QuestTracker *)(local_158 + 8)
               ,(pmf_b15218cf *)this);
  }
  this_01 = UDS_QuestManager::GetInst();
  if (this_01 == (UDS_QuestManager *)0x0) goto LAB_14bf6d49b;
  pUVar6 = UDS_QuestEvent::GetEvent();
  if (pUVar6 != (UDS_QuestEvent *)0x0) {
    local_178.SharedReferenceCount.ReferenceController._0_4_ = 0;
    local_178.Object = (FDS_ViewModelContext *)OnChangeTraceQuestID;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar6->OnChangedTraceQuestDelegate,this);
    local_138._56_8_ =
         CONCAT44(local_178.SharedReferenceCount.ReferenceController._4_4_,
                  local_178.SharedReferenceCount.ReferenceController._0_4_);
    local_138._48_8_ = local_178.Object;
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_QuestTracker>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar6->OnChangedTraceQuestDelegate,(UDS_VM_QuestTracker *)local_148,
               (pmf_804b89af *)this);
    local_178.SharedReferenceCount.ReferenceController._0_4_ = 0;
    local_178.Object = (FDS_ViewModelContext *)OnUpdateQuestData;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar6->OnAddQuestDataDelegate
               ,this);
    local_138._72_8_ =
         CONCAT44(local_178.SharedReferenceCount.ReferenceController._4_4_,
                  local_178.SharedReferenceCount.ReferenceController._0_4_);
    local_138._64_8_ = local_178.Object;
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_QuestTracker>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar6->OnAddQuestDataDelegate,(UDS_VM_QuestTracker *)(local_148 + 8),
               (pmf_804b89af *)this);
    local_178.Object = (FDS_ViewModelContext *)OnUpdateQuestData;
    local_178.SharedReferenceCount.ReferenceController._0_4_ = 0;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar6->OnUpdateQuestDataDelegate,this);
    local_138._88_8_ =
         CONCAT44(local_178.SharedReferenceCount.ReferenceController._4_4_,
                  local_178.SharedReferenceCount.ReferenceController._0_4_);
    local_138._80_8_ = local_178.Object;
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_QuestTracker>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar6->OnUpdateQuestDataDelegate,(UDS_VM_QuestTracker *)local_138,
               (pmf_804b89af *)this);
  }
  FVar2 = (FName)(this->VM_W_HUD_QuestMenu).field0_0x0.DebugPtr;
  if (FVar2 == (FName)0x0) {
    local_160 = FVar2;
    pUVar7 = Z_Construct_UClass_UDS_VM_W_HUD_QuestMenu_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar8 = Z_Construct_UClass_UDS_VM_W_HUD_QuestMenu_NoRegister();
    CheckIsClassChildOf_Internal(pUVar8,pUVar7);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_c8,pUVar7);
    local_c8._48_8_ = (FScriptContainerElement *)0x0;
    local_c8._56_8_ = (UPackage *)0x0;
    local_c8._24_4_ = RF_Transient;
    local_c8._40_8_ = (UObject *)0x0;
    local_c8[0x20] = false;
    local_c8._8_8_ = this;
    local_c8._16_8_ = FVar2;
    pUVar9 = (UDS_VM_W_HUD_QuestMenu *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
    if ((FScriptContainerElement *)local_c8._64_8_ != (FScriptContainerElement *)0x0) {
      FVar10.Ticks = (long64)local_78;
      if ((longlong *)local_60.Ticks != (longlong *)0x0) {
        FVar10.Ticks = local_60.Ticks;
      }
      (**(code **)(*(longlong *)FVar10.Ticks + 0x10))(FVar10.Ticks);
    }
    if (pUVar9 != (UDS_VM_W_HUD_QuestMenu *)0x0) {
      *(undefined1 *)((longlong)&pUVar9->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar9 != (UDS_VM_W_HUD_QuestMenu *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (this->VM_W_HUD_QuestMenu).field0_0x0.DebugPtr = pUVar9;
    if (pUVar9 != (UDS_VM_W_HUD_QuestMenu *)0x0) goto LAB_14bf6d3a0;
  }
  else {
LAB_14bf6d3a0:
    MakeContext<FDS_ViewModelContext>(&local_178);
    if ((local_178.Object == (FDS_ViewModelContext *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (local_178.Object)->ViewModelTemplateKey = W_HUD_QuestMenu;
    lStack_d0 = CONCAT44(local_178.SharedReferenceCount.ReferenceController._4_4_,
                         local_178.SharedReferenceCount.ReferenceController._0_4_);
    pUVar9 = (this->VM_W_HUD_QuestMenu).field0_0x0.DebugPtr;
    local_138._96_8_ = local_178.Object;
    if (lStack_d0 != 0) {
      LOCK();
      *(int *)(lStack_d0 + 8) = *(int *)(lStack_d0 + 8) + 1;
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext
              ((UDS_ViewModelBase *)pUVar9,(TSharedPtr<FDS_ViewModelContext,1> *)(local_138 + 0x60))
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_178.SharedReferenceCount.ReferenceController._4_4_,
                        local_178.SharedReferenceCount.ReferenceController._0_4_));
  }
  bVar4 = UDS_PhasingManager::IsPhasingInProgress(this_00);
  if (bVar4) {
    iVar5 = UDS_PhasingManager::GetPhasingIDInProgress(this_00);
    this_02 = FDS_PhasingBaseTableRow::GetRef((longlong)iVar5,true);
    bVar4 = FDS_PhasingBaseTableRow::IsValid(this_02);
    if (!bVar4) goto LAB_14bf6d49b;
    if (this_02->PhasingContentsType != Inn) {
      local_168[0] = UDS_PhasingManager::GetScriptMissionID(this_00);
      OnScriptMissionStart(this,local_168);
      goto LAB_14bf6d49b;
    }
  }
  iVar5 = UDS_QuestManager::GetTraceQuestID(this_01);
  OnChangeTraceQuestID(this,iVar5);
LAB_14bf6d49b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdateQuestData @ 14bf72860

void __thiscall UDS_VM_QuestTracker::OnUpdateQuestData(UDS_VM_QuestTracker *this,int param_1)

{
  if (this->TraceQuestID == param_1) {
    SetTitle(this);
    SetQuestCompleteWidgetIndex(this);
    UpdateQuestObjective(this);
    return;
  }
  return;
}

// OpenAcceptQuestUI @ 14bf732e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_QuestTracker::OpenAcceptQuestUI(UDS_VM_QuestTracker *this)

{
  UDS_WindowManager *this_00;
  undefined8 *puVar1;
  ulong64 uVar2;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar3;
  UDS_VM_QuestTracker *local_res10;
  code *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  bool local_68;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    uStack_70 = 0;
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    local_78 = OnOpenAcceptQuestUI;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar1 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_QuestTracker____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_QuestTracker *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar1[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_QuestTracker *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&local_res10);
      puVar1[4] = local_78;
      puVar1[5] = CONCAT44(uStack_6c,uStack_70);
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    pTVar3 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                       ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        &local_78,
                        (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        local_58);
    UDS_WindowManager::OpenWindow(this_00,AcceptQuestList,pTVar3);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_78);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_68 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_6c,uStack_70),
                 (FDestructionSentinel *)&local_78);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  return;
}

// SetCompleteText @ 14bf7a0f0

void __thiscall UDS_VM_QuestTracker::SetCompleteText(UDS_VM_QuestTracker *this)

{
  EDS_QuestType EVar1;
  bool bVar2;
  FDS_QuestBaseTableRow *this_00;
  FDS_QuestRepeatTableRow *this_01;
  FDS_QuestLocalTableRow *this_02;
  FDS_QuestMainTableRow *this_03;
  FDS_NpcBaseTableRow *this_04;
  long64 lVar3;
  FName local_18;
  int local_10;
  
  FDS_Text::Reset(&this->CompleteText);
  if (0 < this->TraceQuestID) {
    this_00 = FDS_QuestBaseTableRow::GetRef((longlong)this->TraceQuestID,true);
    bVar2 = FDS_QuestBaseTableRow::IsValid(this_00);
    if (bVar2) {
      EVar1 = this_00->QuestType;
      if (EVar1 == Main) {
        this_03 = FDS_QuestMainTableRow::GetRef((longlong)this->TraceQuestID,true);
        bVar2 = FDS_QuestMainTableRow::IsValid(this_03);
        if (!bVar2) goto LAB_14bf7a21d;
        lVar3 = (long64)this_03->ID_CompleteNpc;
      }
      else if (EVar1 == Local) {
        this_02 = FDS_QuestLocalTableRow::GetRef((longlong)this->TraceQuestID,true);
        bVar2 = FDS_QuestLocalTableRow::IsValid(this_02);
        if (!bVar2) goto LAB_14bf7a21d;
        lVar3 = (long64)this_02->ID_CompleteNpc;
      }
      else {
        if (EVar1 == Daily) {
          lVar3 = (**(code **)(this_00->ID_TrackerCompleteStringId)._padding_)
                            (&this_00->ID_TrackerCompleteStringId);
          FDS_Text::SetTextFromStringTable(&this->CompleteText,StringQuest,lVar3);
          goto LAB_14bf7a21d;
        }
        if (EVar1 != Repeat) goto LAB_14bf7a21d;
        this_01 = FDS_QuestRepeatTableRow::GetRef((longlong)this->TraceQuestID,true);
        bVar2 = FDS_QuestRepeatTableRow::IsValid(this_01);
        if (!bVar2) goto LAB_14bf7a21d;
        lVar3 = (long64)this_01->ID_CompleteNpc;
      }
      this_04 = FDS_NpcBaseTableRow::GetRef(lVar3,true);
      bVar2 = FDS_NpcBaseTableRow::IsValid(this_04);
      if (bVar2) {
        FDS_Text::SetTextFormatFromStringTable<FDS_StringWorldID_const_&>
                  (&this->CompleteText,StringQuest,(this_00->ID_TrackerCompleteStringId).ID,
                   &this_04->ID_NameSid);
      }
    }
  }
LAB_14bf7a21d:
  local_10 = FFieldNotificationClassDescriptor::CompleteText.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CompleteText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetQuestCompleteWidgetIndex @ 14bf7cd20

void __thiscall UDS_VM_QuestTracker::SetQuestCompleteWidgetIndex(UDS_VM_QuestTracker *this)

{
  EDS_QuestStateType EVar1;
  bool bVar2;
  UDS_QuestManager *pUVar3;
  FDS_QuestBaseTableRow *this_00;
  longlong lVar4;
  int iVar5;
  FName local_18;
  int local_10;
  
  iVar5 = 0;
  if (((0 < this->TraceQuestID) &&
      (pUVar3 = UDS_QuestManager::GetInst(), iVar5 = 0, pUVar3 != (UDS_QuestManager *)0x0)) &&
     (EVar1 = UDS_QuestManager::GetQuestStateType(this->TraceQuestID), EVar1 == Complete)) {
    this_00 = FDS_QuestBaseTableRow::GetRef((longlong)this->TraceQuestID,true);
    bVar2 = FDS_QuestBaseTableRow::IsValid(this_00);
    iVar5 = 0;
    if (bVar2) {
      lVar4 = (**(code **)(this_00->ID_TrackerCompleteStringId)._padding_)
                        (&this_00->ID_TrackerCompleteStringId);
      iVar5 = 0;
      if (0 < lVar4) {
        iVar5 = 1;
      }
    }
  }
  local_10 = FFieldNotificationClassDescriptor::QuestCompleteWidgetIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::QuestCompleteWidgetIndex.FieldName;
  if (this->QuestCompleteWidgetIndex != iVar5) {
    this->QuestCompleteWidgetIndex = iVar5;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetQuestTypeIconID @ 14bf7d130

void __thiscall UDS_VM_QuestTracker::SetQuestTypeIconID(UDS_VM_QuestTracker *this)

{
  EDS_QuestType EVar1;
  bool bVar2;
  int iVar3;
  FDS_QuestBaseTableRow *this_00;
  FName local_18;
  int local_10;
  
  iVar3 = 0;
  if (0 < this->TraceQuestID) {
    this_00 = FDS_QuestBaseTableRow::GetRef((longlong)this->TraceQuestID,true);
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

// SetTitle @ 14bf7ecc0

void __thiscall UDS_VM_QuestTracker::SetTitle(UDS_VM_QuestTracker *this)

{
  bool bVar1;
  FDS_QuestBaseTableRow *this_00;
  FDS_QuestLocalTableRow *this_01;
  FDS_NpcBaseTableRow *this_02;
  FName local_68;
  int local_60;
  FDS_Text local_58;
  
  FDS_Text::Reset(&this->Title);
  if (this->TraceQuestID < 1) {
    FDS_Text::SetTextFromStringTable(&this->Title,StringUi,0xeb39);
  }
  else {
    bVar1 = UDS_QuestManager::HasQuestData(this->TraceQuestID);
    if (bVar1) {
      this_00 = FDS_QuestBaseTableRow::GetRef((longlong)this->TraceQuestID,true);
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
        FDS_Text::operator=(&this->Title,&local_58);
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
    else {
      this_01 = FDS_QuestLocalTableRow::GetRef((longlong)this->TraceQuestID,true);
      bVar1 = FDS_QuestLocalTableRow::IsValid(this_01);
      if (bVar1) {
        this_02 = FDS_NpcBaseTableRow::GetRef((longlong)this_01->ID_AcceptNpc,true);
        bVar1 = FDS_NpcBaseTableRow::IsValid(this_02);
        if (bVar1) {
          FDS_Text::SetTextFormatFromStringTable<FDS_StringWorldID_const_&>
                    (&this->Title,StringUi,0xeb43,&this_02->ID_NameSid);
        }
      }
    }
  }
  local_60 = FFieldNotificationClassDescriptor::Title.BitNumber;
  local_68 = FFieldNotificationClassDescriptor::Title.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
  return;
}

// SetVM_W_QuestMenu @ 14bf81b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_QuestTracker::SetVM_W_QuestMenu(UDS_VM_QuestTracker *this)

{
  FName FVar1;
  code *pcVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_W_HUD_QuestMenu *pUVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_e8 [32];
  FName local_c8;
  TSharedPtr<FDS_ViewModelContext,1> local_b8;
  TSharedPtr<FDS_ViewModelContext,1> local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  FVar1 = (FName)(this->VM_W_HUD_QuestMenu).field0_0x0.DebugPtr;
  bVar7 = false;
  if (FVar1 == (FName)0x0) {
    local_c8 = FVar1;
    pUVar3 = Z_Construct_UClass_UDS_VM_W_HUD_QuestMenu_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar4 = Z_Construct_UClass_UDS_VM_W_HUD_QuestMenu_NoRegister();
    CheckIsClassChildOf_Internal(pUVar4,pUVar3);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar3);
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_98._24_4_ = RF_Transient;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_98._8_8_ = this;
    local_98._16_8_ = FVar1;
    pUVar5 = (UDS_VM_W_HUD_QuestMenu *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar6 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (pUVar5 != (UDS_VM_W_HUD_QuestMenu *)0x0) {
      *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_W_HUD_QuestMenu *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_W_HUD_QuestMenu).field0_0x0.DebugPtr = pUVar5;
    bVar7 = pUVar5 == (UDS_VM_W_HUD_QuestMenu *)0x0;
  }
  if (!bVar7) {
    MakeContext<FDS_ViewModelContext>(&local_b8);
    if ((local_b8.Object == (FDS_ViewModelContext *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (local_b8.Object)->ViewModelTemplateKey = W_HUD_QuestMenu;
    pUVar5 = (this->VM_W_HUD_QuestMenu).field0_0x0.DebugPtr;
    local_a8.Object = local_b8.Object;
    local_a8.SharedReferenceCount.ReferenceController =
         local_b8.SharedReferenceCount.ReferenceController;
    if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar5,&local_a8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.SharedReferenceCount.ReferenceController);
  }
  return;
}

// SetVisibilityQuestTypeIcon @ 14bf82030

void __thiscall
UDS_VM_QuestTracker::SetVisibilityQuestTypeIcon(UDS_VM_QuestTracker *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::VisibilityQuestTypeIcon.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibilityQuestTypeIcon.FieldName;
  if (this->VisibilityQuestTypeIcon != *param_1) {
    this->VisibilityQuestTypeIcon = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14bf85560

void __thiscall UDS_VM_QuestTracker::UnbindModel(UDS_VM_QuestTracker *this)

{
  UDS_PhasingManager *pUVar1;
  UDS_QuestEvent *pUVar2;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_PhasingManager::GetInst();
  if (pUVar1 != (UDS_PhasingManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->PhasingStartOrEndDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->PhasingScriptMissionStartDelegate,this);
  }
  pUVar2 = UDS_QuestEvent::GetEvent();
  if (pUVar2 != (UDS_QuestEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnChangedTraceQuestDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnAddQuestDataDelegate
               ,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnUpdateQuestDataDelegate,this);
  }
  return;
}

// UpdateQuestObjective @ 14bf89750

void __thiscall UDS_VM_QuestTracker::UpdateQuestObjective(UDS_VM_QuestTracker *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  FDS_ViewModelContext_QuestObjectiveData *pFVar5;
  bool bVar6;
  FDS_QuestBaseTableRow *this_00;
  UDS_UserObjectListItem *this_01;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  FSharedReferencer<1> FVar9;
  undefined1 local_res8 [8];
  UDS_UserObjectListItem *local_res10;
  FName local_78;
  int local_70;
  TArray<int,TSizedDefaultAllocator<32>_> local_68;
  TSharedPtr<FDS_ViewModelContext_QuestObjectiveData,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_Objective);
  if ((this->TraceQuestID < 1) ||
     (bVar6 = UDS_QuestManager::HasQuestData(this->TraceQuestID), !bVar6)) {
LAB_14bf8991d:
    local_70 = FFieldNotificationClassDescriptor::EntryBindingEventField_Objective.BitNumber;
    local_78 = FFieldNotificationClassDescriptor::EntryBindingEventField_Objective.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
    return;
  }
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  this_00 = FDS_QuestBaseTableRow::GetRef((longlong)this->TraceQuestID,true);
  bVar6 = FDS_QuestBaseTableRow::IsValid(this_00);
  if (bVar6) {
    TArray<int,TSizedDefaultAllocator<32>_>::operator=(&local_68,&this_00->ID_QuestObjectiveId);
  }
  iVar4 = local_68.ArrayNum;
  uVar7 = (ulonglong)local_68.ArrayNum;
  pFVar1 = local_68.AllocatorInstance.Data + uVar7 * 4;
  FVar8.Data = local_68.AllocatorInstance.Data;
  do {
    if ((int)uVar7 != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar8.Data == pFVar1) {
      if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.AllocatorInstance.Data);
      }
      goto LAB_14bf8991d;
    }
    iVar2 = *(int *)FVar8.Data;
    this_01 = NewObject<UDS_UserObjectListItem>((UObject *)this);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_01 == (UDS_UserObjectListItem *)0x0) goto LAB_14bf898fd;
    }
    else {
      if (this_01 == (UDS_UserObjectListItem *)0x0) {
LAB_14bf898fd:
        if (local_68.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_68.AllocatorInstance.Data);
        return;
      }
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
    MakeContext<FDS_ViewModelContext_QuestObjectiveData>(&local_58);
    pFVar5 = local_58.Object;
    FVar9.ReferenceController = local_58.SharedReferenceCount.ReferenceController;
    if (local_58.Object != (FDS_ViewModelContext_QuestObjectiveData *)0x0) {
      if ((local_58.Object == (FDS_ViewModelContext_QuestObjectiveData *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar9.ReferenceController = local_58.SharedReferenceCount.ReferenceController;
      *(undefined4 *)&pFVar5->_padding_ = 0x98;
      pFVar5->QuestID = this->TraceQuestID;
      local_48.Object = (FDS_ViewModelContext *)local_58.Object;
      local_48.SharedReferenceCount.ReferenceController =
           local_58.SharedReferenceCount.ReferenceController;
      pFVar5->QuestObjectiveID = iVar2;
      if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_UserObjectListItem::AddContext(this_01,&local_48);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar9.ReferenceController);
    local_res10 = this_01;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
    FDS_EntryBindingEventField::Add
              (&this->EntryBindingEventField_Objective,
               (TObjectPtr<UDS_UserObjectListItem>)&local_res10);
    uVar7 = local_68._8_8_ & 0xffffffff;
    FVar8.Data = FVar8.Data + 4;
  } while( true );
}

// UpdateScriptMission @ 14bf89970

void __thiscall UDS_VM_QuestTracker::UpdateScriptMission(UDS_VM_QuestTracker *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FDS_ScriptMissionTrackerTableRow *this_00;
  UDS_UserObjectListItem *this_01;
  FDS_ViewModelContext *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  UScriptStruct *pUVar5;
  UDS_ViewModelContextManager *this_02;
  int iVar6;
  FDS_ViewModelContext *pFVar7;
  UDS_UserObjectListItem *local_res8;
  FName local_58;
  int local_50;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_Objective);
  if (0 < param_1) {
    this_00 = FDS_ScriptMissionTrackerTableRow::GetRef((longlong)param_1,true);
    bVar2 = FDS_ScriptMissionTrackerTableRow::IsValid(this_00);
    if ((bVar2) && (iVar6 = 0, 0 < (this_00->ID_TrackerObjectiveId).ArrayNum)) {
      do {
        pFVar7 = (FDS_ViewModelContext *)0x0;
        this_01 = NewObject<UDS_UserObjectListItem>((UObject *)this);
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (this_01 == (UDS_UserObjectListItem *)0x0) {
            return;
          }
        }
        else {
          if (this_01 == (UDS_UserObjectListItem *)0x0) {
            return;
          }
          UE::GC::MarkAsReachable((UObject *)this_01);
        }
        pFVar3 = ::operator_new(0x28);
        if (pFVar3 != (FDS_ViewModelContext *)0x0) {
          *(undefined8 *)&pFVar3->ViewModelTemplateKey = 0;
          pFVar3->DerivedStaticStruct = (UStruct *)0x0;
          (pFVar3->ViewModelName).ComparisonIndex = 0;
          (pFVar3->ViewModelName).Number = 0;
          pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_ScriptMissionTracker__6B_;
          pFVar3[1]._padding_ = 0;
          pFVar7 = pFVar3;
        }
        pTVar4 = ::operator_new(0x20);
        if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
          pTVar4 = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          pTVar4->SharedReferenceCount = (atomic<int>)0x1;
          pTVar4[1]._padding_ = (longlong)ViewModelContextDeleter;
          pTVar4->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_ScriptMissionTracker__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          pTVar4->WeakReferenceCount = (atomic<int>)0x1;
          *(FDS_ViewModelContext **)&pTVar4[1].SharedReferenceCount = pFVar7;
        }
        if ((pFVar7 == (FDS_ViewModelContext *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pUVar5 = FDS_ViewModelContext_ScriptMissionTracker::StaticStruct();
        pFVar7->DerivedStaticStruct = (UStruct *)pUVar5;
        this_02 = UDS_ViewModelContextManager::GetInst();
        if (this_02 != (UDS_ViewModelContextManager *)0x0) {
          if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_48.Object = pFVar7;
          local_48.SharedReferenceCount.ReferenceController = pTVar4;
          UDS_ViewModelContextManager::RegisterContext(this_02,&local_48);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_48.SharedReferenceCount.ReferenceController);
        }
        pFVar7->ViewModelTemplateKey = ScriptMissionTracker;
        *(int *)&pFVar7[1]._padding_ = param_1;
        *(int *)((longlong)&pFVar7[1]._padding_ + 4) = iVar6;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_38.Object = pFVar7;
        local_38.SharedReferenceCount.ReferenceController = pTVar4;
        UDS_UserObjectListItem::AddContext(this_01,&local_38);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        local_res8 = this_01;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_01);
        }
        FDS_EntryBindingEventField::Add
                  (&this->EntryBindingEventField_Objective,
                   (TObjectPtr<UDS_UserObjectListItem>)&local_res8);
        iVar6 = iVar6 + 1;
      } while (iVar6 < (this_00->ID_TrackerObjectiveId).ArrayNum);
    }
  }
  local_50 = FFieldNotificationClassDescriptor::EntryBindingEventField_Objective.BitNumber;
  local_58 = FFieldNotificationClassDescriptor::EntryBindingEventField_Objective.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
  return;
}

