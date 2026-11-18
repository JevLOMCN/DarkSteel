// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// SetClickSlotButton_WrapperImpl @ 14b6c4400

void __cdecl UDS_VM_QuestRepeatListSlot::SetClickSlotButton_WrapperImpl(void *param_1,void *param_2)

{
  int iVar1;
  bool bVar2;
  UDS_QuestEvent *pUVar3;
  
  pUVar3 = UDS_QuestEvent::GetEvent();
  if (pUVar3 != (UDS_QuestEvent *)0x0) {
    iVar1 = *(int *)((longlong)param_1 + 0xd0);
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

// SetIsSelectedSlot_WrapperImpl @ 14b6c4410

void __cdecl UDS_VM_QuestRepeatListSlot::SetIsSelectedSlot_WrapperImpl(void *param_1,void *param_2)

{
  SetIsSelectedSlot(param_1,*(bool *)param_2);
  return;
}

// StaticClass @ 14b6c4420

UClass * __cdecl UDS_VM_QuestRepeatListSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_QuestRepeatListSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_QuestRepeatListSlot",
               &Z_Registration_Info_UClass_UDS_VM_QuestRepeatListSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_QuestRepeatListSlot,0xd8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_QuestRepeatListSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_QuestRepeatListSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_QuestRepeatListSlot.InnerSingleton;
}

// UDS_VM_QuestRepeatListSlot @ 14b6cbed0

UDS_VM_QuestRepeatListSlot * __thiscall
UDS_VM_QuestRepeatListSlot::UDS_VM_QuestRepeatListSlot
          (UDS_VM_QuestRepeatListSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestRepeatListSlot__6B_;
  *(undefined8 *)&(this->ClickSlotButton).Delegate = 0;
  *(undefined8 *)&(this->ClickSlotButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickSlotButton).Delegate.field_0x10 = 0;
  (this->VM_QuestData).field0_0x0.DebugPtr = (UDS_VM_QuestData *)0x0;
  this->QuestID = 0;
  (this->ClickSlotButton)._padding_ = '\0';
  (this->ClickSlotButton).bIsCustomSelected = false;
  (this->ClickSlotButton).bIsLacked = false;
  (this->ClickSlotButton).bIsCustomDisabled = false;
  return this;
}

// UDS_VM_QuestRepeatListSlot @ 14b6cbf40

UDS_VM_QuestRepeatListSlot * __thiscall
UDS_VM_QuestRepeatListSlot::UDS_VM_QuestRepeatListSlot
          (UDS_VM_QuestRepeatListSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestRepeatListSlot__6B_;
  *(undefined8 *)&(this->ClickSlotButton).Delegate = 0;
  *(undefined8 *)&(this->ClickSlotButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickSlotButton).Delegate.field_0x10 = 0;
  (this->VM_QuestData).field0_0x0.DebugPtr = (UDS_VM_QuestData *)0x0;
  this->QuestID = 0;
  (this->ClickSlotButton)._padding_ = '\0';
  (this->ClickSlotButton).bIsCustomSelected = false;
  (this->ClickSlotButton).bIsLacked = false;
  (this->ClickSlotButton).bIsCustomDisabled = false;
  return this;
}

// ~UDS_VM_QuestRepeatListSlot @ 14b6cd140

void __thiscall
UDS_VM_QuestRepeatListSlot::~UDS_VM_QuestRepeatListSlot(UDS_VM_QuestRepeatListSlot *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestRepeatListSlot__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickSlotButton).Delegate);
  pvVar1 = *(void **)&(this->ClickSlotButton).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickSlotButton).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6cfed0

IClassDescriptor * __thiscall
UDS_VM_QuestRepeatListSlot::GetFieldNotificationDescriptor(UDS_VM_QuestRepeatListSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_QuestRepeatListSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6d0f00

UClass * __cdecl UDS_VM_QuestRepeatListSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_QuestRepeatListSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_QuestRepeatListSlot",
               &Z_Registration_Info_UClass_UDS_VM_QuestRepeatListSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_QuestRepeatListSlot,0xd8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_QuestRepeatListSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_QuestRepeatListSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_QuestRepeatListSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_QuestRepeatListSlot @ 14b6d1140

void __cdecl UDS_VM_QuestRepeatListSlot::StaticRegisterNativesUDS_VM_QuestRepeatListSlot(void)

{
  return;
}

// OnChangeSelectQuestID @ 14bf5f980

void __thiscall
UDS_VM_QuestRepeatListSlot::OnChangeSelectQuestID(UDS_VM_QuestRepeatListSlot *this,int param_1)

{
  bool bVar1;
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsSelectedSlot.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsSelectedSlot.FieldName;
  bVar1 = this->QuestID == param_1;
  if (this->IsSelectedSlot != bVar1) {
    this->IsSelectedSlot = bVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnChangedQuestDelegate @ 14bf60940

void __thiscall
UDS_VM_QuestRepeatListSlot::OnChangedQuestDelegate
          (UDS_VM_QuestRepeatListSlot *this,int param_1,EDS_QuestDataType param_2)

{
  EDS_QuestConditionType EVar1;
  UDS_QuestManager *this_00;
  FName FStack_18;
  int iStack_10;
  
  if (this->QuestID != param_1) {
    return;
  }
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
    else if (EVar1 == NotAbleAccept) {
      this->QuestStateActiveWidgetIndex = 3;
    }
    else if (EVar1 == Completed) {
      this->QuestStateActiveWidgetIndex = 4;
    }
    iStack_10 = FFieldNotificationClassDescriptor::QuestStateActiveWidgetIndex.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::QuestStateActiveWidgetIndex.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_18);
  }
  return;
}

// OnClickSlotButton @ 14bf62ce0

void __thiscall
UDS_VM_QuestRepeatListSlot::OnClickSlotButton
          (UDS_VM_QuestRepeatListSlot *this,FDS_ButtonEventField *param_1)

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

// OnSetViewModel @ 14bf6cea0

void __thiscall
UDS_VM_QuestRepeatListSlot::OnSetViewModel
          (UDS_VM_QuestRepeatListSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  code *pcVar1;
  FName FVar2;
  FDS_ViewModelContext_Quest *pFVar3;
  bool bVar4;
  UDS_QuestEvent *pUVar5;
  UDS_VM_QuestData *pUVar6;
  TReferenceControllerBase<1> *pTVar7;
  FName local_98;
  int local_90;
  TSharedPtr<FDS_ViewModelContext_QuestListSlot,1> local_88;
  TSharedPtr<FDS_ViewModelContext_Quest,1> local_78;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  FDS_ViewModelContext_Quest *local_58;
  undefined8 uStack_50;
  FDS_ViewModelContext_Quest *local_48;
  undefined8 uStack_40;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  
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
  SafeCast<FDS_ViewModelContext_QuestListSlot>(&local_88,&local_68);
  if (local_88.Object == (FDS_ViewModelContext_QuestListSlot *)0x0) goto LAB_14bf6d0e4;
  this->QuestID = (local_88.Object)->QuestID;
  pUVar5 = UDS_QuestEvent::GetEvent();
  if (pUVar5 != (UDS_QuestEvent *)0x0) {
    local_78.SharedReferenceCount.ReferenceController._0_4_ = 0;
    local_78.Object = (FDS_ViewModelContext_Quest *)OnChangeSelectQuestID;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar5->OnSelectedQuestDelegate,this);
    uStack_50 = CONCAT44(local_78.SharedReferenceCount.ReferenceController._4_4_,
                         local_78.SharedReferenceCount.ReferenceController._0_4_);
    local_58 = local_78.Object;
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_QuestRepeatListSlot>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar5->OnSelectedQuestDelegate,(UDS_VM_QuestRepeatListSlot *)&stack0x00000010,
               (pmf_4ae17d12 *)this);
    local_78.SharedReferenceCount.ReferenceController._0_4_ = 0;
    local_78.Object = (FDS_ViewModelContext_Quest *)OnChangedQuestDelegate;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar5->OnChanedQuestDelegate,
               this);
    uStack_40 = CONCAT44(local_78.SharedReferenceCount.ReferenceController._4_4_,
                         local_78.SharedReferenceCount.ReferenceController._0_4_);
    local_48 = local_78.Object;
    TMulticastDelegateRegistration<void___cdecl(int,enum_EDS_QuestDataType),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_QuestRepeatListSlot>
              (&pUVar5->OnChanedQuestDelegate,(UDS_VM_QuestRepeatListSlot *)&stack0x00000018,
               (pmf_c4d32ea0 *)this);
  }
  if ((this->VM_QuestData).field0_0x0.DebugPtr == (UDS_VM_QuestData *)0x0) {
    pUVar6 = UDS_ViewModelBase::CreateViewModel<UDS_VM_QuestData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UDS_VM_QuestData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    (this->VM_QuestData).field0_0x0.DebugPtr = pUVar6;
    if (pUVar6 != (UDS_VM_QuestData *)0x0) goto LAB_14bf6cfdb;
  }
  else {
LAB_14bf6cfdb:
    MakeContext<FDS_ViewModelContext_Quest>(&local_78);
    pFVar3 = local_78.Object;
    if (local_78.Object == (FDS_ViewModelContext_Quest *)0x0) {
      pTVar7 = (TReferenceControllerBase<1> *)
               CONCAT44(local_78.SharedReferenceCount.ReferenceController._4_4_,
                        local_78.SharedReferenceCount.ReferenceController._0_4_);
    }
    else {
      if (local_78.Object == (FDS_ViewModelContext_Quest *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pTVar7 = (TReferenceControllerBase<1> *)
               CONCAT44(local_78.SharedReferenceCount.ReferenceController._4_4_,
                        local_78.SharedReferenceCount.ReferenceController._0_4_);
      *(undefined4 *)&pFVar3->_padding_ = 0x97;
      pFVar3->QuestID = this->QuestID;
      pUVar6 = (this->VM_QuestData).field0_0x0.DebugPtr;
      local_38.Object = (FDS_ViewModelContext *)local_78.Object;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_38.SharedReferenceCount.ReferenceController = pTVar7;
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar6,&local_38);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  if (local_88.Object == (FDS_ViewModelContext_QuestListSlot *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FVar2 = FFieldNotificationClassDescriptor::IsSelectedSlot.FieldName;
  if (this->IsSelectedSlot != (local_88.Object)->IsSelectedSlot) {
    local_90 = FFieldNotificationClassDescriptor::IsSelectedSlot.BitNumber;
    this->IsSelectedSlot = (local_88.Object)->IsSelectedSlot;
    local_98 = FVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
  }
  SetQuestStateActiveWidgetIndex(this);
LAB_14bf6d0e4:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetIsSelectedSlot @ 14bf7b600

void __thiscall
UDS_VM_QuestRepeatListSlot::SetIsSelectedSlot(UDS_VM_QuestRepeatListSlot *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsSelectedSlot.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsSelectedSlot.FieldName;
  if (this->IsSelectedSlot != param_1) {
    this->IsSelectedSlot = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetQuestStateActiveWidgetIndex @ 14bf7cfc0

void __thiscall
UDS_VM_QuestRepeatListSlot::SetQuestStateActiveWidgetIndex(UDS_VM_QuestRepeatListSlot *this)

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
    else if (EVar1 == NotAbleAccept) {
      this->QuestStateActiveWidgetIndex = 3;
    }
    else if (EVar1 == Completed) {
      this->QuestStateActiveWidgetIndex = 4;
    }
    local_10 = FFieldNotificationClassDescriptor::QuestStateActiveWidgetIndex.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::QuestStateActiveWidgetIndex.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVM_QuestData @ 14bf80410

void __thiscall UDS_VM_QuestRepeatListSlot::SetVM_QuestData(UDS_VM_QuestRepeatListSlot *this)

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

// UnbindModel @ 14bf85510

void __thiscall UDS_VM_QuestRepeatListSlot::UnbindModel(UDS_VM_QuestRepeatListSlot *this)

{
  UDS_QuestEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_QuestEvent::GetEvent();
  if (pUVar1 != (UDS_QuestEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnSelectedQuestDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChanedQuestDelegate,
               this);
  }
  return;
}

