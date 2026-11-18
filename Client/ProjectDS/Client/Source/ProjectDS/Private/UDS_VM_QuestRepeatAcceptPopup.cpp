// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 20

// SetClickClaimAllButton_WrapperImpl @ 14b6c3b50

void __cdecl
UDS_VM_QuestRepeatAcceptPopup::SetClickClaimAllButton_WrapperImpl(void *param_1,void *param_2)

{
  undefined1 auStackX_10 [8];
  undefined1 auStackX_18 [16];
  TArray<EDS_QuestStateType,TSizedDefaultAllocator<32>_> TStack_38;
  TArray<EDS_QuestType,TSizedDefaultAllocator<32>_> TStack_28;
  TArray<int,TSizedDefaultAllocator<32>_> TStack_18;
  
  if (*(char *)((longlong)param_2 + 3) != '\x01') {
    TStack_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_38.ArrayNum = 1;
    auStackX_10[0] = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,1,0,&TStack_38.AllocatorInstance,1,&TStack_38.ArrayMax);
    memcpy(TStack_38.AllocatorInstance.Data,auStackX_10,1);
    auStackX_18[0] = 9;
    TStack_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_28.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,1,0,&TStack_28.AllocatorInstance,1,&TStack_28.ArrayMax);
    memcpy(TStack_28.AllocatorInstance.Data,auStackX_18,1);
    UDS_QuestManager::GetQuestListByInProgress(&TStack_18,&TStack_28,&TStack_38,false);
    if (TStack_18.ArrayNum != 0) {
      FDS_QuestService::RequestQuestClaimRewardAll(Repeat,&TStack_18);
    }
    if (TStack_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_18.AllocatorInstance.Data);
    }
  }
  return;
}

// StaticClass @ 14b6c3b60

UClass * __cdecl UDS_VM_QuestRepeatAcceptPopup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_QuestRepeatAcceptPopup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_QuestRepeatAcceptPopup",
               &Z_Registration_Info_UClass_UDS_VM_QuestRepeatAcceptPopup.InnerSingleton,
               StaticRegisterNativesUDS_VM_QuestRepeatAcceptPopup,0x188,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_QuestRepeatAcceptPopup>,
               InternalVTableHelperCtorCaller<UDS_VM_QuestRepeatAcceptPopup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_QuestRepeatAcceptPopup.InnerSingleton;
}

// UDS_VM_QuestRepeatAcceptPopup @ 14b6cb970

UDS_VM_QuestRepeatAcceptPopup * __thiscall
UDS_VM_QuestRepeatAcceptPopup::UDS_VM_QuestRepeatAcceptPopup
          (UDS_VM_QuestRepeatAcceptPopup *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestRepeatAcceptPopup__6B_;
  *(undefined8 *)&(this->ClickClaimAllButton).Delegate = 0;
  *(undefined8 *)&(this->ClickClaimAllButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickClaimAllButton).Delegate.field_0x10 = 0;
  (this->ClaimAllName).StringTableType = None;
  (this->ClaimAllName).StringTableID = 0;
  (this->ClaimAllName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ClaimAllName).StringEnumTableNameID.Number = 0;
  (this->ClaimAllName).DateTime.Ticks = 0;
  (this->ClaimAllName).TimeSpan.Ticks = 0;
  (this->ClaimAllName).TimeExpressionType = None;
  (this->ClaimAllName).IsExpression = false;
  (this->ClaimAllName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClaimAllName).UniqueString.Data.ArrayNum = 0;
  (this->ClaimAllName).UniqueString.Data.ArrayMax = 0;
  (this->ClaimAllName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClaimAllName).FormatArgs.ArrayNum = 0;
  (this->ClaimAllName).FormatArgs.ArrayMax = 0;
  this->EmptyQuestWidgetIndex = 0;
  (this->EntryBindingEventField_QuestList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_QuestList).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_QuestList).UserObjectList.ArrayMax = 0;
  (this->VM_QuestRepeatData).field0_0x0.DebugPtr = (UDS_VM_QuestRepeatData *)0x0;
  (this->FixedText_Empty).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Empty).StringEnumTableNameID.Number = 0;
  (this->FixedText_Empty).DateTime.Ticks = 0;
  (this->FixedText_Empty).TimeSpan.Ticks = 0;
  (this->FixedText_Empty).TimeExpressionType = None;
  (this->FixedText_Empty).IsExpression = false;
  (this->FixedText_Empty).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Empty).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Empty).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Empty).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Empty).FormatArgs.ArrayNum = 0;
  (this->FixedText_Empty).FormatArgs.ArrayMax = 0;
  this->NpcEntityID = 0;
  (this->ClickClaimAllButton)._padding_ = '\0';
  (this->ClickClaimAllButton).bIsCustomSelected = false;
  (this->ClickClaimAllButton).bIsLacked = false;
  (this->ClickClaimAllButton).bIsCustomDisabled = false;
  (this->FixedText_Empty).StringTableType = StringUi;
  (this->FixedText_Empty).StringTableID = 0xec69;
  return this;
}

// UDS_VM_QuestRepeatAcceptPopup @ 14b6cba90

UDS_VM_QuestRepeatAcceptPopup * __thiscall
UDS_VM_QuestRepeatAcceptPopup::UDS_VM_QuestRepeatAcceptPopup
          (UDS_VM_QuestRepeatAcceptPopup *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestRepeatAcceptPopup__6B_;
  *(undefined8 *)&(this->ClickClaimAllButton).Delegate = 0;
  *(undefined8 *)&(this->ClickClaimAllButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickClaimAllButton).Delegate.field_0x10 = 0;
  (this->ClaimAllName).StringTableType = None;
  (this->ClaimAllName).StringTableID = 0;
  (this->ClaimAllName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ClaimAllName).StringEnumTableNameID.Number = 0;
  (this->ClaimAllName).DateTime.Ticks = 0;
  (this->ClaimAllName).TimeSpan.Ticks = 0;
  (this->ClaimAllName).TimeExpressionType = None;
  (this->ClaimAllName).IsExpression = false;
  (this->ClaimAllName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClaimAllName).UniqueString.Data.ArrayNum = 0;
  (this->ClaimAllName).UniqueString.Data.ArrayMax = 0;
  (this->ClaimAllName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClaimAllName).FormatArgs.ArrayNum = 0;
  (this->ClaimAllName).FormatArgs.ArrayMax = 0;
  this->EmptyQuestWidgetIndex = 0;
  (this->EntryBindingEventField_QuestList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_QuestList).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_QuestList).UserObjectList.ArrayMax = 0;
  (this->VM_QuestRepeatData).field0_0x0.DebugPtr = (UDS_VM_QuestRepeatData *)0x0;
  (this->FixedText_Empty).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Empty).StringEnumTableNameID.Number = 0;
  (this->FixedText_Empty).DateTime.Ticks = 0;
  (this->FixedText_Empty).TimeSpan.Ticks = 0;
  (this->FixedText_Empty).TimeExpressionType = None;
  (this->FixedText_Empty).IsExpression = false;
  (this->FixedText_Empty).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Empty).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Empty).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Empty).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Empty).FormatArgs.ArrayNum = 0;
  (this->FixedText_Empty).FormatArgs.ArrayMax = 0;
  this->NpcEntityID = 0;
  (this->ClickClaimAllButton)._padding_ = '\0';
  (this->ClickClaimAllButton).bIsCustomSelected = false;
  (this->ClickClaimAllButton).bIsLacked = false;
  (this->ClickClaimAllButton).bIsCustomDisabled = false;
  (this->FixedText_Empty).StringTableType = StringUi;
  (this->FixedText_Empty).StringTableID = 0xec69;
  return this;
}

// ~UDS_VM_QuestRepeatAcceptPopup @ 14b6ccee0

void __thiscall
UDS_VM_QuestRepeatAcceptPopup::~UDS_VM_QuestRepeatAcceptPopup(UDS_VM_QuestRepeatAcceptPopup *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestRepeatAcceptPopup__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Empty).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Empty).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Empty).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Empty).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EntryBindingEventField_QuestList).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ClaimAllName).FormatArgs.AllocatorInstance.Data,
             (this->ClaimAllName).FormatArgs.ArrayNum);
  pFVar1 = (this->ClaimAllName).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ClaimAllName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickClaimAllButton).Delegate);
  pvVar2 = *(void **)&(this->ClickClaimAllButton).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickClaimAllButton).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6cfd80

IClassDescriptor * __thiscall
UDS_VM_QuestRepeatAcceptPopup::GetFieldNotificationDescriptor(UDS_VM_QuestRepeatAcceptPopup *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_QuestRepeatAcceptPopup::FFieldNotificationClassDescriptor::GetDescriptor'::__l2
             ::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6d0cc0

UClass * __cdecl UDS_VM_QuestRepeatAcceptPopup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_QuestRepeatAcceptPopup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_QuestRepeatAcceptPopup",
               &Z_Registration_Info_UClass_UDS_VM_QuestRepeatAcceptPopup.InnerSingleton,
               StaticRegisterNativesUDS_VM_QuestRepeatAcceptPopup,0x188,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_QuestRepeatAcceptPopup>,
               InternalVTableHelperCtorCaller<UDS_VM_QuestRepeatAcceptPopup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_QuestRepeatAcceptPopup.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_QuestRepeatAcceptPopup @ 14b6d1110

void __cdecl UDS_VM_QuestRepeatAcceptPopup::StaticRegisterNativesUDS_VM_QuestRepeatAcceptPopup(void)

{
  return;
}

// BindModel @ 14bf41e30

void __thiscall UDS_VM_QuestRepeatAcceptPopup::BindModel(UDS_VM_QuestRepeatAcceptPopup *this)

{
  UDS_QuestEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_QuestEvent::GetEvent();
  if (pUVar1 != (UDS_QuestEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnQuestRepeatResetDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_QuestRepeatAcceptPopup>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnQuestRepeatResetDelegate,(UDS_VM_QuestRepeatAcceptPopup *)&stack0x00000010
               ,(pmf_c15e5500 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnCompleteQuestDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_QuestRepeatAcceptPopup>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnCompleteQuestDelegate,(UDS_VM_QuestRepeatAcceptPopup *)&stack0x00000010,
               (pmf_6d22fd7c *)this);
  }
  return;
}

// InitViewModel @ 14bf5b6b0

void __thiscall UDS_VM_QuestRepeatAcceptPopup::InitViewModel(UDS_VM_QuestRepeatAcceptPopup *this)

{
  return;
}

// OnClickClaimAllButton @ 14bf61990

void __thiscall
UDS_VM_QuestRepeatAcceptPopup::OnClickClaimAllButton
          (UDS_VM_QuestRepeatAcceptPopup *this,FDS_ButtonEventField *param_1)

{
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  TArray<EDS_QuestStateType,TSizedDefaultAllocator<32>_> local_38;
  TArray<EDS_QuestType,TSizedDefaultAllocator<32>_> local_28;
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  if (param_1->bIsCustomDisabled != true) {
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 1;
    local_res10[0] = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,1,0,&local_38.AllocatorInstance,1,&local_38.ArrayMax);
    memcpy(local_38.AllocatorInstance.Data,local_res10,1);
    local_res18[0] = 9;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,1,0,&local_28.AllocatorInstance,1,&local_28.ArrayMax);
    memcpy(local_28.AllocatorInstance.Data,local_res18,1);
    UDS_QuestManager::GetQuestListByInProgress(&local_18,&local_28,&local_38,false);
    if (local_18.ArrayNum != 0) {
      FDS_QuestService::RequestQuestClaimRewardAll(Repeat,&local_18);
    }
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return;
}

// OnCompleteQuest @ 14bf63690

void __thiscall
UDS_VM_QuestRepeatAcceptPopup::OnCompleteQuest(UDS_VM_QuestRepeatAcceptPopup *this,int param_1)

{
  FName FVar1;
  undefined1 auStackX_8 [8];
  undefined1 auStackX_10 [8];
  TArray<EDS_QuestStateType,TSizedDefaultAllocator<32>_> TStack_48;
  TArray<EDS_QuestType,TSizedDefaultAllocator<32>_> TStack_38;
  TArray<int,TSizedDefaultAllocator<32>_> TStack_28;
  
  auStackX_8[0] = 1;
  TStack_48.ArrayNum = 1;
  TStack_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,1,0,&TStack_48.AllocatorInstance,1,&TStack_48.ArrayMax);
  memcpy(TStack_48.AllocatorInstance.Data,auStackX_8,1);
  auStackX_10[0] = 9;
  TStack_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_38.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,1,0,&TStack_38.AllocatorInstance,1,&TStack_38.ArrayMax);
  memcpy(TStack_38.AllocatorInstance.Data,auStackX_10,1);
  UDS_QuestManager::GetQuestListByInProgress(&TStack_28,&TStack_38,&TStack_48,false);
  FVar1 = FFieldNotificationClassDescriptor::IsDisableClaimAllButton.FieldName;
  if (this->IsDisableClaimAllButton != TStack_28.ArrayNum < 1) {
    TStack_48.ArrayNum = FFieldNotificationClassDescriptor::IsDisableClaimAllButton.BitNumber;
    this->IsDisableClaimAllButton = TStack_28.ArrayNum < 1;
    TStack_48.AllocatorInstance.Data = (FScriptContainerElement *)FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&TStack_48);
  }
  if (TStack_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_28.AllocatorInstance.Data);
  }
  return;
}

// OnQuestRepeatReset @ 14bf667c0

void __thiscall
UDS_VM_QuestRepeatAcceptPopup::OnQuestRepeatReset(UDS_VM_QuestRepeatAcceptPopup *this)

{
  UpdateQuestList(this);
  SetIsDisableClaimAllButton(this);
  return;
}

// OnSetViewModel @ 14bf6ca90

void __thiscall
UDS_VM_QuestRepeatAcceptPopup::OnSetViewModel
          (UDS_VM_QuestRepeatAcceptPopup *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_VM_QuestRepeatData *pUVar3;
  UDS_QuestManager *this_00;
  FName local_78;
  int local_70;
  FName local_68;
  int local_60;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  TSharedPtr<FDS_ViewModelContext_NpcFunction,1> local_48;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  TArray<int,TSizedDefaultAllocator<32>_> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
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
  SafeCast<FDS_ViewModelContext_NpcFunction>(&local_48,&local_38);
  if (local_48.Object == (FDS_ViewModelContext_NpcFunction *)0x0) goto LAB_14bf6cc9a;
  if ((local_48.Object == (FDS_ViewModelContext_NpcFunction *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pUVar3 = (this->VM_QuestRepeatData).field0_0x0.DebugPtr;
  this->NpcEntityID = (local_48.Object)->NpcEntityID;
  if (pUVar3 == (UDS_VM_QuestRepeatData *)0x0) {
    pUVar3 = UDS_ViewModelBase::CreateViewModel<UDS_VM_QuestRepeatData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDS_VM_QuestRepeatData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->VM_QuestRepeatData).field0_0x0.DebugPtr = pUVar3;
    if (pUVar3 != (UDS_VM_QuestRepeatData *)0x0) goto LAB_14bf6cb60;
  }
  else {
LAB_14bf6cb60:
    MakeContext<FDS_ViewModelContext>(&local_58);
    if (local_58.Object != (FDS_ViewModelContext *)0x0) {
      if ((local_58.Object == (FDS_ViewModelContext *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (local_58.Object)->ViewModelTemplateKey = QuestRepeatData;
      pUVar3 = (this->VM_QuestRepeatData).field0_0x0.DebugPtr;
      local_18.Object = local_58.Object;
      local_18.SharedReferenceCount.ReferenceController =
           local_58.SharedReferenceCount.ReferenceController;
      if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar3,&local_18);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  this->EmptyQuestWidgetIndex = 0;
  this_00 = UDS_QuestManager::GetInst();
  if (this_00 != (UDS_QuestManager *)0x0) {
    UDS_QuestManager::GetNpcActiveQuestIDs(this_00,&local_28,this->NpcEntityID,false);
    if (local_28.ArrayNum < 1) {
      this->EmptyQuestWidgetIndex = 1;
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  local_70 = FFieldNotificationClassDescriptor::EmptyQuestWidgetIndex.BitNumber;
  local_78 = FFieldNotificationClassDescriptor::EmptyQuestWidgetIndex.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
  SetIsDisableClaimAllButton(this);
  FDS_Text::SetTextFromStringTable(&this->ClaimAllName,StringUi,0x50922);
  local_60 = FFieldNotificationClassDescriptor::ClaimAllName.BitNumber;
  local_68 = FFieldNotificationClassDescriptor::ClaimAllName.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
  UpdateQuestList(this);
LAB_14bf6cc9a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetCliamAllName @ 14bf79970

void __thiscall UDS_VM_QuestRepeatAcceptPopup::SetCliamAllName(UDS_VM_QuestRepeatAcceptPopup *this)

{
  FName local_18;
  int local_10;
  
  FDS_Text::SetTextFromStringTable(&this->ClaimAllName,StringUi,0x50922);
  local_10 = FFieldNotificationClassDescriptor::ClaimAllName.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ClaimAllName.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetEmptyQuestWidgetIndex @ 14bf7ab40

void __thiscall
UDS_VM_QuestRepeatAcceptPopup::SetEmptyQuestWidgetIndex(UDS_VM_QuestRepeatAcceptPopup *this)

{
  UDS_QuestManager *this_00;
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  this->EmptyQuestWidgetIndex = 0;
  this_00 = UDS_QuestManager::GetInst();
  if (this_00 != (UDS_QuestManager *)0x0) {
    UDS_QuestManager::GetNpcActiveQuestIDs(this_00,&local_18,this->NpcEntityID,false);
    if (local_18.ArrayNum < 1) {
      this->EmptyQuestWidgetIndex = 1;
    }
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  local_18.ArrayNum = FFieldNotificationClassDescriptor::EmptyQuestWidgetIndex.BitNumber;
  local_18.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::EmptyQuestWidgetIndex.FieldName
  ;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetIsDisableClaimAllButton @ 14bf7b250

void __thiscall
UDS_VM_QuestRepeatAcceptPopup::SetIsDisableClaimAllButton(UDS_VM_QuestRepeatAcceptPopup *this)

{
  FName FVar1;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TArray<EDS_QuestStateType,TSizedDefaultAllocator<32>_> local_48;
  TArray<EDS_QuestType,TSizedDefaultAllocator<32>_> local_38;
  TArray<int,TSizedDefaultAllocator<32>_> local_28;
  
  local_res8[0] = 1;
  local_48.ArrayNum = 1;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,1,0,&local_48.AllocatorInstance,1,&local_48.ArrayMax);
  memcpy(local_48.AllocatorInstance.Data,local_res8,1);
  local_res10[0] = 9;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,1,0,&local_38.AllocatorInstance,1,&local_38.ArrayMax);
  memcpy(local_38.AllocatorInstance.Data,local_res10,1);
  UDS_QuestManager::GetQuestListByInProgress(&local_28,&local_38,&local_48,false);
  FVar1 = FFieldNotificationClassDescriptor::IsDisableClaimAllButton.FieldName;
  if (this->IsDisableClaimAllButton != local_28.ArrayNum < 1) {
    local_48.ArrayNum = FFieldNotificationClassDescriptor::IsDisableClaimAllButton.BitNumber;
    this->IsDisableClaimAllButton = local_28.ArrayNum < 1;
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// SetVM_QuestRepeatData @ 14bf81a10

void __thiscall
UDS_VM_QuestRepeatAcceptPopup::SetVM_QuestRepeatData(UDS_VM_QuestRepeatAcceptPopup *this)

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

// UnbindModel @ 14bf85430

void __thiscall UDS_VM_QuestRepeatAcceptPopup::UnbindModel(UDS_VM_QuestRepeatAcceptPopup *this)

{
  UDS_QuestEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_QuestEvent::GetEvent();
  if (pUVar1 != (UDS_QuestEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnQuestRepeatResetDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnCompleteQuestDelegate,this);
  }
  return;
}

// UpdateQuestList @ 14bf89480

void __thiscall UDS_VM_QuestRepeatAcceptPopup::UpdateQuestList(UDS_VM_QuestRepeatAcceptPopup *this)

{
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
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
  ForAnyElementType FVar10;
  undefined1 local_res8 [8];
  undefined2 local_res10 [4];
  uint local_res18;
  UDS_UserObjectListItem *local_res20;
  FName local_98;
  int local_90;
  TArray<EDS_QuestSortType,TSizedDefaultAllocator<32>_> local_88;
  TArray<int,TSizedDefaultAllocator<32>_> local_78;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_QuestList);
  this_00 = UDS_QuestManager::GetInst();
  if (this_00 != (UDS_QuestManager *)0x0) {
    UDS_QuestManager::GetNpcActiveQuestIDs(this_00,&local_78,this->NpcEntityID,false);
    if (1 < local_78.ArrayNum) {
      local_res10[0] = 0x301;
      local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,2,0,&local_88.AllocatorInstance,2,&local_88.ArrayMax);
      memcpy(local_88.AllocatorInstance.Data,local_res10,2);
      UDS_QuestManager::SortQuestList(this_00,&local_78,&local_88,true);
      if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.AllocatorInstance.Data);
      }
    }
    uVar8 = (ulonglong)local_78.ArrayNum;
    local_res18 = local_78.ArrayNum;
    pFVar1 = local_78.AllocatorInstance.Data + uVar8 * 4;
    FVar10.Data = local_78.AllocatorInstance.Data;
    while( true ) {
      pFVar9 = (FDS_ViewModelContext *)0x0;
      if (local_78.ArrayNum != (uint)uVar8) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (FVar10.Data == pFVar1) break;
      uVar2 = *(undefined4 *)FVar10.Data;
      this_01 = NewObject<UDS_UserObjectListItem>((UObject *)this);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (this_01 == (UDS_UserObjectListItem *)0x0) goto LAB_14bf896ef;
      }
      else {
        if (this_01 == (UDS_UserObjectListItem *)0x0) {
LAB_14bf896ef:
          if (local_78.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return;
          }
          FMemory::Free(local_78.AllocatorInstance.Data);
          return;
        }
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
      pFVar9->ViewModelTemplateKey = QuestRepeatAccepPopup_ListSlot;
      *(undefined4 *)((longlong)&pFVar9[1]._padding_ + 4) = uVar2;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_58.Object = pFVar9;
      local_58.SharedReferenceCount.ReferenceController = pTVar6;
      UDS_UserObjectListItem::AddContext(this_01,&local_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      local_res20 = this_01;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      FDS_EntryBindingEventField::Add
                (&this->EntryBindingEventField_QuestList,
                 (TObjectPtr<UDS_UserObjectListItem>)&local_res20);
      uVar8 = (ulonglong)local_res18;
      FVar10.Data = FVar10.Data + 4;
    }
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
  }
  local_90 = FFieldNotificationClassDescriptor::EntryBindingEventField_QuestList.BitNumber;
  local_98 = FFieldNotificationClassDescriptor::EntryBindingEventField_QuestList.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
  return;
}

