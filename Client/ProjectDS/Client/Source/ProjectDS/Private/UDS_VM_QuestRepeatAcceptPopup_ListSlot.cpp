// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 20

// SetClickAcceptbutton_WrapperImpl @ 14b6c3f90

/* WARNING: Type propagation algorithm not settling */

void __cdecl
UDS_VM_QuestRepeatAcceptPopup_ListSlot::SetClickAcceptbutton_WrapperImpl
          (void *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  UDS_QuestManager *this;
  undefined1 auStackX_18 [8];
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> TStack_38;
  TArray<int,TSizedDefaultAllocator<32>_> TStack_20;
  
  this = UDS_QuestManager::GetInst();
  if (this != (UDS_QuestManager *)0x0) {
    auStackX_18[0] = 9;
    TStack_38._0_8_ = (FScriptContainerElement *)0x0;
    TStack_38._8_4_ = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,1,0,(ForAnyElementType *)&TStack_38,1,(int *)((longlong)&TStack_38 + 0xc));
    memcpy((void *)TStack_38._0_8_,auStackX_18,1);
    UDS_QuestManager::GetQuestListByInProgress
              (&TStack_20,(TArray<EDS_QuestType,TSizedDefaultAllocator<32>_> *)&TStack_38,false);
    iVar1 = UDS_QuestManager::GetTotalQuestRepeatCount(this);
    iVar2 = DS_CommonDataHelper::RepeatQuestDailyCount();
    if (TStack_20.ArrayNum + iVar1 < iVar2) {
      UDS_QuestManager::OnReqAcceptQuest(this,*(int *)((longlong)param_1 + 0x118));
    }
    else {
      TStack_38._0_8_ = (FScriptContainerElement *)0x0;
      TStack_38._8_8_ = 0;
      TStack_38._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0xec6c,Alert_System_02,&TStack_38);
    }
    if (TStack_20.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_20.AllocatorInstance.Data);
    }
  }
  return;
}

// SetClickAbandonButton_WrapperImpl @ 14b6c3fa0

void __cdecl
UDS_VM_QuestRepeatAcceptPopup_ListSlot::SetClickAbandonButton_WrapperImpl
          (void *param_1,void *param_2)

{
  UDS_QuestManager *this;
  
  this = UDS_QuestManager::GetInst();
  if (this != (UDS_QuestManager *)0x0) {
    UDS_QuestManager::OnReqCancelQuest(this,*(int *)((longlong)param_1 + 0x118));
    return;
  }
  return;
}

// SetClickClaimButton_WrapperImpl @ 14b6c3fb0

void __cdecl
UDS_VM_QuestRepeatAcceptPopup_ListSlot::SetClickClaimButton_WrapperImpl(void *param_1,void *param_2)

{
  UDS_QuestManager *this;
  
  this = UDS_QuestManager::GetInst();
  if (this != (UDS_QuestManager *)0x0) {
    UDS_QuestManager::OnReqQuestComplete(this,*(int *)((longlong)param_1 + 0x118));
    return;
  }
  return;
}

// StaticClass @ 14b6c3fc0

UClass * __cdecl UDS_VM_QuestRepeatAcceptPopup_ListSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_QuestRepeatAcceptPopup_ListSlot.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_QuestRepeatAcceptPopup_ListSlot",
               &Z_Registration_Info_UClass_UDS_VM_QuestRepeatAcceptPopup_ListSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_QuestRepeatAcceptPopup_ListSlot,0x120,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_QuestRepeatAcceptPopup_ListSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_QuestRepeatAcceptPopup_ListSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_QuestRepeatAcceptPopup_ListSlot.InnerSingleton;
}

// UDS_VM_QuestRepeatAcceptPopup_ListSlot @ 14b6cbbb0

UDS_VM_QuestRepeatAcceptPopup_ListSlot * __thiscall
UDS_VM_QuestRepeatAcceptPopup_ListSlot::UDS_VM_QuestRepeatAcceptPopup_ListSlot
          (UDS_VM_QuestRepeatAcceptPopup_ListSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestRepeatAcceptPopup_ListSlot__6B_;
  *(undefined8 *)&(this->ClickAcceptbutton).Delegate = 0;
  *(undefined8 *)&(this->ClickAcceptbutton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickAcceptbutton).Delegate.field_0x10 = 0;
  (this->ClickAbandonButton)._padding_ = '\0';
  (this->ClickAbandonButton).bIsCustomSelected = false;
  (this->ClickAbandonButton).bIsLacked = false;
  (this->ClickAbandonButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickAbandonButton).Delegate = 0;
  *(undefined8 *)&(this->ClickAbandonButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickAbandonButton).Delegate.field_0x10 = 0;
  (this->ClickClaimButton)._padding_ = '\0';
  (this->ClickClaimButton).bIsCustomSelected = false;
  (this->ClickClaimButton).bIsLacked = false;
  (this->ClickClaimButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickClaimButton).Delegate = 0;
  *(undefined8 *)&(this->ClickClaimButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickClaimButton).Delegate.field_0x10 = 0;
  (this->VM_QuestData).field0_0x0.DebugPtr = (UDS_VM_QuestData *)0x0;
  (this->VM_QuestObjectiveData).field0_0x0.DebugPtr = (UDS_VM_QuestObjectiveData *)0x0;
  this->QuestID = 0;
  (this->ClickAcceptbutton)._padding_ = '\0';
  (this->ClickAcceptbutton).bIsCustomSelected = false;
  (this->ClickAcceptbutton).bIsLacked = false;
  (this->ClickAcceptbutton).bIsCustomDisabled = false;
  return this;
}

// UDS_VM_QuestRepeatAcceptPopup_ListSlot @ 14b6cbc60

UDS_VM_QuestRepeatAcceptPopup_ListSlot * __thiscall
UDS_VM_QuestRepeatAcceptPopup_ListSlot::UDS_VM_QuestRepeatAcceptPopup_ListSlot
          (UDS_VM_QuestRepeatAcceptPopup_ListSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestRepeatAcceptPopup_ListSlot__6B_;
  *(undefined8 *)&(this->ClickAcceptbutton).Delegate = 0;
  *(undefined8 *)&(this->ClickAcceptbutton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickAcceptbutton).Delegate.field_0x10 = 0;
  (this->ClickAbandonButton)._padding_ = '\0';
  (this->ClickAbandonButton).bIsCustomSelected = false;
  (this->ClickAbandonButton).bIsLacked = false;
  (this->ClickAbandonButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickAbandonButton).Delegate = 0;
  *(undefined8 *)&(this->ClickAbandonButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickAbandonButton).Delegate.field_0x10 = 0;
  (this->ClickClaimButton)._padding_ = '\0';
  (this->ClickClaimButton).bIsCustomSelected = false;
  (this->ClickClaimButton).bIsLacked = false;
  (this->ClickClaimButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickClaimButton).Delegate = 0;
  *(undefined8 *)&(this->ClickClaimButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickClaimButton).Delegate.field_0x10 = 0;
  (this->VM_QuestData).field0_0x0.DebugPtr = (UDS_VM_QuestData *)0x0;
  (this->VM_QuestObjectiveData).field0_0x0.DebugPtr = (UDS_VM_QuestObjectiveData *)0x0;
  this->QuestID = 0;
  (this->ClickAcceptbutton)._padding_ = '\0';
  (this->ClickAcceptbutton).bIsCustomSelected = false;
  (this->ClickAcceptbutton).bIsLacked = false;
  (this->ClickAcceptbutton).bIsCustomDisabled = false;
  return this;
}

// ~UDS_VM_QuestRepeatAcceptPopup_ListSlot @ 14b6ccfd0

void __thiscall
UDS_VM_QuestRepeatAcceptPopup_ListSlot::~UDS_VM_QuestRepeatAcceptPopup_ListSlot
          (UDS_VM_QuestRepeatAcceptPopup_ListSlot *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestRepeatAcceptPopup_ListSlot__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickClaimButton).Delegate);
  pvVar1 = *(void **)&(this->ClickClaimButton).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickClaimButton).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickAbandonButton).Delegate);
  pvVar1 = *(void **)&(this->ClickAbandonButton).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickAbandonButton).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickAcceptbutton).Delegate);
  pvVar1 = *(void **)&(this->ClickAcceptbutton).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickAcceptbutton).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6cfdf0

IClassDescriptor * __thiscall
UDS_VM_QuestRepeatAcceptPopup_ListSlot::GetFieldNotificationDescriptor
          (UDS_VM_QuestRepeatAcceptPopup_ListSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_QuestRepeatAcceptPopup_ListSlot::FFieldNotificationClassDescriptor::
             GetDescriptor'::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6d0d80

UClass * __cdecl UDS_VM_QuestRepeatAcceptPopup_ListSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_QuestRepeatAcceptPopup_ListSlot.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_QuestRepeatAcceptPopup_ListSlot",
               &Z_Registration_Info_UClass_UDS_VM_QuestRepeatAcceptPopup_ListSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_QuestRepeatAcceptPopup_ListSlot,0x120,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_QuestRepeatAcceptPopup_ListSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_QuestRepeatAcceptPopup_ListSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_QuestRepeatAcceptPopup_ListSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_QuestRepeatAcceptPopup_ListSlot @ 14b6d1120

void __cdecl
UDS_VM_QuestRepeatAcceptPopup_ListSlot::StaticRegisterNativesUDS_VM_QuestRepeatAcceptPopup_ListSlot
          (void)

{
  return;
}

// BindModel @ 14bf41f00

void __thiscall
UDS_VM_QuestRepeatAcceptPopup_ListSlot::BindModel(UDS_VM_QuestRepeatAcceptPopup_ListSlot *this)

{
  UDS_QuestEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_QuestEvent::GetEvent();
  if (pUVar1 != (UDS_QuestEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChanedQuestDelegate,
               this);
    TMulticastDelegateRegistration<void___cdecl(int,enum_EDS_QuestDataType),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_QuestRepeatAcceptPopup_ListSlot>
              (&pUVar1->OnChanedQuestDelegate,
               (UDS_VM_QuestRepeatAcceptPopup_ListSlot *)&stack0x00000010,(pmf_9aeb16a5 *)this);
  }
  return;
}

// OnChangedQuestDelegate @ 14bf60900

void __thiscall
UDS_VM_QuestRepeatAcceptPopup_ListSlot::OnChangedQuestDelegate
          (UDS_VM_QuestRepeatAcceptPopup_ListSlot *this,int param_1,EDS_QuestDataType param_2)

{
  if (this->QuestID == param_1) {
    SetVM_QuestData(this);
    SetVM_QuestObjectiveData(this);
    SetQuestStateActiveWidgetIndex(this);
    return;
  }
  return;
}

// OnClickAbandonButton @ 14bf61450

void __thiscall
UDS_VM_QuestRepeatAcceptPopup_ListSlot::OnClickAbandonButton
          (UDS_VM_QuestRepeatAcceptPopup_ListSlot *this,FDS_ButtonEventField *param_1)

{
  UDS_QuestManager *this_00;
  
  this_00 = UDS_QuestManager::GetInst();
  if (this_00 != (UDS_QuestManager *)0x0) {
    UDS_QuestManager::OnReqCancelQuest(this_00,this->QuestID);
    return;
  }
  return;
}

// OnClickAcceptbutton @ 14bf61690

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UDS_VM_QuestRepeatAcceptPopup_ListSlot::OnClickAcceptbutton
          (UDS_VM_QuestRepeatAcceptPopup_ListSlot *this,FDS_ButtonEventField *param_1)

{
  int iVar1;
  int iVar2;
  UDS_QuestManager *this_00;
  undefined1 local_res18 [8];
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_38;
  TArray<int,TSizedDefaultAllocator<32>_> local_20;
  
  this_00 = UDS_QuestManager::GetInst();
  if (this_00 != (UDS_QuestManager *)0x0) {
    local_res18[0] = 9;
    local_38._0_8_ = (FScriptContainerElement *)0x0;
    local_38._8_4_ = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,1,0,(ForAnyElementType *)&local_38,1,(int *)((longlong)&local_38 + 0xc));
    memcpy((void *)local_38._0_8_,local_res18,1);
    UDS_QuestManager::GetQuestListByInProgress
              (&local_20,(TArray<EDS_QuestType,TSizedDefaultAllocator<32>_> *)&local_38,false);
    iVar1 = UDS_QuestManager::GetTotalQuestRepeatCount(this_00);
    iVar2 = DS_CommonDataHelper::RepeatQuestDailyCount();
    if (local_20.ArrayNum + iVar1 < iVar2) {
      UDS_QuestManager::OnReqAcceptQuest(this_00,this->QuestID);
    }
    else {
      local_38._0_8_ = (FScriptContainerElement *)0x0;
      local_38._8_8_ = 0;
      local_38._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0xec6c,Alert_System_02,&local_38);
    }
    if (local_20.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.AllocatorInstance.Data);
    }
  }
  return;
}

// OnClickClaimButton @ 14bf61aa0

void __thiscall
UDS_VM_QuestRepeatAcceptPopup_ListSlot::OnClickClaimButton
          (UDS_VM_QuestRepeatAcceptPopup_ListSlot *this,FDS_ButtonEventField *param_1)

{
  UDS_QuestManager *this_00;
  
  this_00 = UDS_QuestManager::GetInst();
  if (this_00 != (UDS_QuestManager *)0x0) {
    UDS_QuestManager::OnReqQuestComplete(this_00,this->QuestID);
    return;
  }
  return;
}

// OnSetViewModel @ 14bf6ccd0

void __thiscall
UDS_VM_QuestRepeatAcceptPopup_ListSlot::OnSetViewModel
          (UDS_VM_QuestRepeatAcceptPopup_ListSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TSharedPtr<FDS_ViewModelContext_QuestListSlot,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
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
  SafeCast<FDS_ViewModelContext_QuestListSlot>(&local_28,&local_18);
  if (local_28.Object != (FDS_ViewModelContext_QuestListSlot *)0x0) {
    this->QuestID = (local_28.Object)->QuestID;
    SetVM_QuestData(this);
    SetVM_QuestObjectiveData(this);
    SetQuestStateActiveWidgetIndex(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetQuestStateActiveWidgetIndex @ 14bf7cf20

void __thiscall
UDS_VM_QuestRepeatAcceptPopup_ListSlot::SetQuestStateActiveWidgetIndex
          (UDS_VM_QuestRepeatAcceptPopup_ListSlot *this)

{
  EDS_QuestConditionType EVar1;
  UDS_QuestManager *this_00;
  FName local_18;
  int local_10;
  
  this_00 = UDS_QuestManager::GetInst();
  if (this_00 != (UDS_QuestManager *)0x0) {
    EVar1 = UDS_QuestManager::GetQuestConditionType(this_00,this->QuestID,0);
    if (EVar1 == AbleComplete) {
      this->QuestStateActiveWidgetIndex = 2;
    }
    else if (EVar1 == AbleAccept) {
      this->QuestStateActiveWidgetIndex = 0;
    }
    else if (EVar1 == InProgress) {
      this->QuestStateActiveWidgetIndex = 1;
    }
    else if (EVar1 == Completed) {
      this->QuestStateActiveWidgetIndex = 3;
    }
    local_10 = FFieldNotificationClassDescriptor::QuestStateActiveWidgetIndex.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::QuestStateActiveWidgetIndex.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVM_QuestData @ 14bf80300

void __thiscall
UDS_VM_QuestRepeatAcceptPopup_ListSlot::SetVM_QuestData
          (UDS_VM_QuestRepeatAcceptPopup_ListSlot *this)

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

// SetVM_QuestObjectiveData @ 14bf81770

void __thiscall
UDS_VM_QuestRepeatAcceptPopup_ListSlot::SetVM_QuestObjectiveData
          (UDS_VM_QuestRepeatAcceptPopup_ListSlot *this)

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

// UnbindModel @ 14bf85480

void __thiscall
UDS_VM_QuestRepeatAcceptPopup_ListSlot::UnbindModel(UDS_VM_QuestRepeatAcceptPopup_ListSlot *this)

{
  UDS_QuestEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_QuestEvent::GetEvent();
  if (pUVar1 != (UDS_QuestEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChanedQuestDelegate,
               this);
    return;
  }
  return;
}

