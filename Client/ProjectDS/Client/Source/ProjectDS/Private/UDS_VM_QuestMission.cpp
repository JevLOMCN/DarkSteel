// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// SetClickCliamAllButton_WrapperImpl @ 14b6c61a0

void __cdecl UDS_VM_QuestMission::SetClickCliamAllButton_WrapperImpl(void *param_1,void *param_2)

{
  undefined1 auStackX_10 [8];
  undefined1 auStackX_18 [8];
  TArray<EDS_QuestStateType,TSizedDefaultAllocator<32>_> TStack_38;
  TArray<EDS_QuestType,TSizedDefaultAllocator<32>_> TStack_28;
  TArray<int,TSizedDefaultAllocator<32>_> TStack_18;
  
  if (*(char *)((longlong)param_2 + 3) != '\x01') {
    TStack_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    auStackX_10[0] = 1;
    TStack_38.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,1,0,&TStack_38.AllocatorInstance,1,&TStack_38.ArrayMax);
    memcpy(TStack_38.AllocatorInstance.Data,auStackX_10,1);
    auStackX_18[0] = *(undefined1 *)((longlong)param_1 + 0x128);
    TStack_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_28.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,1,0,&TStack_28.AllocatorInstance,1,&TStack_28.ArrayMax);
    memcpy(TStack_28.AllocatorInstance.Data,auStackX_18,1);
    UDS_QuestManager::GetQuestListByInProgress(&TStack_18,&TStack_28,&TStack_38,false);
    if (TStack_18.ArrayNum != 0) {
      FDS_QuestService::RequestQuestClaimRewardAll
                (*(EDS_QuestType *)((longlong)param_1 + 0x128),&TStack_18);
    }
    if (TStack_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_18.AllocatorInstance.Data);
    }
  }
  return;
}

// StaticClass @ 14b6c61b0

UClass * __cdecl UDS_VM_QuestMission::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_QuestMission.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_QuestMission",
               &Z_Registration_Info_UClass_UDS_VM_QuestMission.InnerSingleton,
               StaticRegisterNativesUDS_VM_QuestMission,0x130,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_QuestMission>,
               InternalVTableHelperCtorCaller<UDS_VM_QuestMission>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_QuestMission.InnerSingleton;
}

// UDS_VM_QuestMission @ 14b6caed0

UDS_VM_QuestMission * __thiscall
UDS_VM_QuestMission::UDS_VM_QuestMission(UDS_VM_QuestMission *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestMission__6B_;
  (this->EntryBindingEventField_QuestList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_QuestList).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_QuestList).UserObjectList.ArrayMax = 0;
  (this->ClickCliamAllButton)._padding_ = '\0';
  (this->ClickCliamAllButton).bIsCustomSelected = false;
  (this->ClickCliamAllButton).bIsLacked = false;
  (this->ClickCliamAllButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickCliamAllButton).Delegate = 0;
  *(undefined8 *)&(this->ClickCliamAllButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickCliamAllButton).Delegate.field_0x10 = 0;
  (this->FixedText_Btn_ClaimAll).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_ClaimAll).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_ClaimAll).DateTime.Ticks = 0;
  (this->FixedText_Btn_ClaimAll).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_ClaimAll).TimeExpressionType = None;
  (this->FixedText_Btn_ClaimAll).IsExpression = false;
  (this->FixedText_Btn_ClaimAll).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_ClaimAll).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_ClaimAll).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_ClaimAll).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_ClaimAll).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_ClaimAll).FormatArgs.ArrayMax = 0;
  this->QuestType = None;
  (this->FixedText_Btn_ClaimAll).StringTableType = StringUi;
  (this->FixedText_Btn_ClaimAll).StringTableID = 0x50922;
  return this;
}

// UDS_VM_QuestMission @ 14b6caf90

UDS_VM_QuestMission * __thiscall
UDS_VM_QuestMission::UDS_VM_QuestMission(UDS_VM_QuestMission *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestMission__6B_;
  (this->EntryBindingEventField_QuestList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_QuestList).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_QuestList).UserObjectList.ArrayMax = 0;
  (this->ClickCliamAllButton)._padding_ = '\0';
  (this->ClickCliamAllButton).bIsCustomSelected = false;
  (this->ClickCliamAllButton).bIsLacked = false;
  (this->ClickCliamAllButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickCliamAllButton).Delegate = 0;
  *(undefined8 *)&(this->ClickCliamAllButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickCliamAllButton).Delegate.field_0x10 = 0;
  (this->FixedText_Btn_ClaimAll).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_ClaimAll).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_ClaimAll).DateTime.Ticks = 0;
  (this->FixedText_Btn_ClaimAll).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_ClaimAll).TimeExpressionType = None;
  (this->FixedText_Btn_ClaimAll).IsExpression = false;
  (this->FixedText_Btn_ClaimAll).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_ClaimAll).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_ClaimAll).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_ClaimAll).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_ClaimAll).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_ClaimAll).FormatArgs.ArrayMax = 0;
  this->QuestType = None;
  (this->FixedText_Btn_ClaimAll).StringTableType = StringUi;
  (this->FixedText_Btn_ClaimAll).StringTableID = 0x50922;
  return this;
}

// ~UDS_VM_QuestMission @ 14b6cca80

void __thiscall UDS_VM_QuestMission::~UDS_VM_QuestMission(UDS_VM_QuestMission *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestMission__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Btn_ClaimAll).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_ClaimAll).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_ClaimAll).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_ClaimAll).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickCliamAllButton).Delegate);
  pvVar2 = *(void **)&(this->ClickCliamAllButton).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickCliamAllButton).Delegate);
  pFVar1 = (this->EntryBindingEventField_QuestList).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6cfbc0

IClassDescriptor * __thiscall
UDS_VM_QuestMission::GetFieldNotificationDescriptor(UDS_VM_QuestMission *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_QuestMission::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6d09c0

UClass * __cdecl UDS_VM_QuestMission::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_QuestMission.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_QuestMission",
               &Z_Registration_Info_UClass_UDS_VM_QuestMission.InnerSingleton,
               StaticRegisterNativesUDS_VM_QuestMission,0x130,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_QuestMission>,
               InternalVTableHelperCtorCaller<UDS_VM_QuestMission>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_QuestMission.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_QuestMission @ 14b6d10d0

void __cdecl UDS_VM_QuestMission::StaticRegisterNativesUDS_VM_QuestMission(void)

{
  return;
}

// BindModel @ 14bf41ba0

void __thiscall UDS_VM_QuestMission::BindModel(UDS_VM_QuestMission *this)

{
  UDS_QuestEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_QuestEvent::GetEvent();
  if (pUVar1 != (UDS_QuestEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnUpdateQuestDataDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_QuestMission>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnUpdateQuestDataDelegate,(UDS_VM_QuestMission *)&stack0x00000010,
               (pmf_9a6b9e33 *)this);
  }
  return;
}

// OnClickCliamAllButton @ 14bf61b20

void __thiscall
UDS_VM_QuestMission::OnClickCliamAllButton(UDS_VM_QuestMission *this,FDS_ButtonEventField *param_1)

{
  undefined1 local_res10 [8];
  EDS_QuestType local_res18 [8];
  TArray<EDS_QuestStateType,TSizedDefaultAllocator<32>_> local_38;
  TArray<EDS_QuestType,TSizedDefaultAllocator<32>_> local_28;
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  if (param_1->bIsCustomDisabled != true) {
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_res10[0] = 1;
    local_38.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,1,0,&local_38.AllocatorInstance,1,&local_38.ArrayMax);
    memcpy(local_38.AllocatorInstance.Data,local_res10,1);
    local_res18[0] = this->QuestType;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,1,0,&local_28.AllocatorInstance,1,&local_28.ArrayMax);
    memcpy(local_28.AllocatorInstance.Data,local_res18,1);
    UDS_QuestManager::GetQuestListByInProgress(&local_18,&local_28,&local_38,false);
    if (local_18.ArrayNum != 0) {
      FDS_QuestService::RequestQuestClaimRewardAll(this->QuestType,&local_18);
    }
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return;
}

// OnQuestDataUpdate @ 14bf66780

void __thiscall UDS_VM_QuestMission::OnQuestDataUpdate(UDS_VM_QuestMission *this,int param_1)

{
  SetIsDisableCliamAllButton(this);
  UpdateQuestList(this);
  return;
}

// OnSetViewModel @ 14bf6c300

void __thiscall
UDS_VM_QuestMission::OnSetViewModel
          (UDS_VM_QuestMission *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<FDS_ViewModelContext_ContentsOpen,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_ContentsOpen>(&local_28,&local_18);
  if (local_28.Object != (FDS_ViewModelContext_ContentsOpen *)0x0) {
    if (local_28.Object == (FDS_ViewModelContext_ContentsOpen *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((local_28.Object)->TabFrameID == QuestWeekly) {
      this->QuestType = MissionWeekly;
    }
    else if ((local_28.Object)->TabFrameID == QuestMonthly) {
      this->QuestType = MissionMonthly;
    }
    SetIsDisableCliamAllButton(this);
    UpdateQuestList(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetIsDisableCliamAllButton @ 14bf7b3b0

void __thiscall UDS_VM_QuestMission::SetIsDisableCliamAllButton(UDS_VM_QuestMission *this)

{
  FName FVar1;
  undefined1 local_res8 [8];
  EDS_QuestType local_res10 [8];
  TArray<EDS_QuestStateType,TSizedDefaultAllocator<32>_> local_48;
  TArray<EDS_QuestType,TSizedDefaultAllocator<32>_> local_38;
  TArray<int,TSizedDefaultAllocator<32>_> local_28;
  
  local_res8[0] = 1;
  local_48.ArrayNum = 1;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,1,0,&local_48.AllocatorInstance,1,&local_48.ArrayMax);
  memcpy(local_48.AllocatorInstance.Data,local_res8,1);
  local_res10[0] = this->QuestType;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,1,0,&local_38.AllocatorInstance,1,&local_38.ArrayMax);
  memcpy(local_38.AllocatorInstance.Data,local_res10,1);
  UDS_QuestManager::GetQuestListByInProgress(&local_28,&local_38,&local_48,false);
  FVar1 = FFieldNotificationClassDescriptor::IsDisableCliamAllButton.FieldName;
  if (this->IsDisableCliamAllButton != local_28.ArrayNum < 1) {
    local_48.ArrayNum = FFieldNotificationClassDescriptor::IsDisableCliamAllButton.BitNumber;
    this->IsDisableCliamAllButton = local_28.ArrayNum < 1;
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// UnbindModel @ 14bf85370

void __thiscall UDS_VM_QuestMission::UnbindModel(UDS_VM_QuestMission *this)

{
  UDS_QuestEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_QuestEvent::GetEvent();
  if (pUVar1 != (UDS_QuestEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnUpdateQuestDataDelegate,this);
    return;
  }
  return;
}

// UpdateQuestList @ 14bf88eb0

void __thiscall UDS_VM_QuestMission::UpdateQuestList(UDS_VM_QuestMission *this)

{
  undefined4 uVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  UDS_QuestManager *pUVar5;
  UDS_UserObjectListItem *this_00;
  FDS_ViewModelContext *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  UScriptStruct *pUVar8;
  UDS_ViewModelContextManager *this_01;
  ulonglong uVar9;
  FDS_ViewModelContext *pFVar10;
  ForAnyElementType FVar11;
  EDS_QuestType local_res8 [8];
  undefined1 local_res10 [8];
  undefined2 local_res18;
  undefined1 local_res1a;
  uint local_res20;
  UDS_UserObjectListItem *local_b8;
  FScriptContainerElement *local_b0;
  FName local_a8;
  int local_a0;
  TArray<EDS_QuestStateType,TSizedDefaultAllocator<32>_> local_98;
  TArray<EDS_QuestType,TSizedDefaultAllocator<32>_> local_88;
  TArray<int,TSizedDefaultAllocator<32>_> local_78;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_QuestList);
  pUVar5 = UDS_QuestManager::GetInst();
  if (pUVar5 != (UDS_QuestManager *)0x0) {
    local_res18 = 0x100;
    local_res1a = 3;
    local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.ArrayNum = 3;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,3,0,&local_98.AllocatorInstance,3,&local_98.ArrayMax);
    memcpy(local_98.AllocatorInstance.Data,&local_res18,3);
    local_res8[0] = this->QuestType;
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,1,0,&local_88.AllocatorInstance,1,&local_88.ArrayMax);
    memcpy(local_88.AllocatorInstance.Data,local_res8,1);
    UDS_QuestManager::GetQuestListByInProgress(&local_78,&local_88,&local_98,true);
    local_res20 = local_78.ArrayNum;
    uVar9 = (ulonglong)(int)local_res20;
    local_b0 = local_78.AllocatorInstance.Data + uVar9 * 4;
    FVar11.Data = local_78.AllocatorInstance.Data;
    while( true ) {
      pFVar3 = local_b0;
      pFVar10 = (FDS_ViewModelContext *)0x0;
      if (local_78.ArrayNum != (int)uVar9) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (FVar11.Data == pFVar3) break;
      uVar1 = *(undefined4 *)FVar11.Data;
      this_00 = NewObject<UDS_UserObjectListItem>((UObject *)this);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (this_00 == (UDS_UserObjectListItem *)0x0) goto LAB_14bf89144;
      }
      else {
        if (this_00 == (UDS_UserObjectListItem *)0x0) {
LAB_14bf89144:
          if (local_78.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return;
          }
          FMemory::Free(local_78.AllocatorInstance.Data);
          return;
        }
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      pFVar6 = ::operator_new(0x28);
      if (pFVar6 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar6->ViewModelTemplateKey = 0;
        *(undefined4 *)((longlong)&pFVar6[1]._padding_ + 4) = 0;
        pFVar6->DerivedStaticStruct = (UStruct *)0x0;
        (pFVar6->ViewModelName).ComparisonIndex = 0;
        (pFVar6->ViewModelName).Number = 0;
        pFVar6->_padding_ = (longlong)&___7FDS_ViewModelContext_Quest__6B_;
        *(undefined4 *)&pFVar6[1]._padding_ = 0;
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
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_Quest__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        pTVar7->WeakReferenceCount = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pTVar7[1].SharedReferenceCount = pFVar10;
      }
      if ((pFVar10 == (FDS_ViewModelContext *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar8 = FDS_ViewModelContext_Quest::StaticStruct();
      pFVar10->DerivedStaticStruct = (UStruct *)pUVar8;
      this_01 = UDS_ViewModelContextManager::GetInst();
      if (this_01 != (UDS_ViewModelContextManager *)0x0) {
        if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_68.Object = pFVar10;
        local_68.SharedReferenceCount.ReferenceController = pTVar7;
        UDS_ViewModelContextManager::RegisterContext(this_01,&local_68);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.SharedReferenceCount.ReferenceController);
      }
      pFVar10->ViewModelTemplateKey = QuestMissionListSlot;
      *(undefined4 *)&pFVar10[1]._padding_ = uVar1;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_58.Object = pFVar10;
      local_58.SharedReferenceCount.ReferenceController = pTVar7;
      UDS_UserObjectListItem::AddContext(this_00,&local_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      local_b8 = this_00;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      FDS_EntryBindingEventField::Add
                (&this->EntryBindingEventField_QuestList,
                 (TObjectPtr<UDS_UserObjectListItem>)&local_b8);
      FVar11.Data = FVar11.Data + 4;
      uVar9 = (ulonglong)local_res20;
    }
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
  }
  local_a0 = FFieldNotificationClassDescriptor::EntryBindingEventField_QuestList.BitNumber;
  local_a8 = FFieldNotificationClassDescriptor::EntryBindingEventField_QuestList.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
  return;
}

