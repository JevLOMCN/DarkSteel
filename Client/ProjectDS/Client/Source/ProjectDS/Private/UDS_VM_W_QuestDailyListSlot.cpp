// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// SetClickSlotButton_WrapperImpl @ 14b74a060

void __cdecl
UDS_VM_W_QuestDailyListSlot::SetClickSlotButton_WrapperImpl(void *param_1,void *param_2)

{
  int iVar1;
  bool bVar2;
  UDS_QuestEvent *pUVar3;
  
  pUVar3 = UDS_QuestEvent::GetEvent();
  if (pUVar3 != (UDS_QuestEvent *)0x0) {
    iVar1 = *(int *)((longlong)param_1 + 0xe4);
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

// SetSelectedButton_WrapperImpl @ 14b74a070

void __cdecl UDS_VM_W_QuestDailyListSlot::SetSelectedButton_WrapperImpl(void *param_1,void *param_2)

{
  SetSelectedButton(param_1,*(bool *)param_2);
  return;
}

// StaticClass @ 14b74a080

UClass * __cdecl UDS_VM_W_QuestDailyListSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_QuestDailyListSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_QuestDailyListSlot",
               &Z_Registration_Info_UClass_UDS_VM_W_QuestDailyListSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_QuestDailyListSlot,0xf0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_QuestDailyListSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_W_QuestDailyListSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_QuestDailyListSlot.InnerSingleton;
}

// UDS_VM_W_QuestDailyListSlot @ 14b74dea0

UDS_VM_W_QuestDailyListSlot * __thiscall
UDS_VM_W_QuestDailyListSlot::UDS_VM_W_QuestDailyListSlot
          (UDS_VM_W_QuestDailyListSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->ClickSlotButton)._padding_ = '\0';
  (this->ClickSlotButton).bIsCustomSelected = false;
  (this->ClickSlotButton).bIsLacked = false;
  (this->ClickSlotButton).bIsCustomDisabled = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_QuestDailyListSlot__6B_;
  *(undefined8 *)&(this->ClickSlotButton).Delegate = 0;
  *(undefined8 *)&(this->ClickSlotButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickSlotButton).Delegate.field_0x10 = 0;
  FText::FText(&this->LimitTime);
  this->QuestID = 0;
  this->SuggestID = 0;
  this->SelectedQuestID = 0;
  return this;
}

// UDS_VM_W_QuestDailyListSlot @ 14b74df20

UDS_VM_W_QuestDailyListSlot * __thiscall
UDS_VM_W_QuestDailyListSlot::UDS_VM_W_QuestDailyListSlot
          (UDS_VM_W_QuestDailyListSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->ClickSlotButton)._padding_ = '\0';
  (this->ClickSlotButton).bIsCustomSelected = false;
  (this->ClickSlotButton).bIsLacked = false;
  (this->ClickSlotButton).bIsCustomDisabled = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_QuestDailyListSlot__6B_;
  *(undefined8 *)&(this->ClickSlotButton).Delegate = 0;
  *(undefined8 *)&(this->ClickSlotButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickSlotButton).Delegate.field_0x10 = 0;
  FText::FText(&this->LimitTime);
  this->QuestID = 0;
  this->SuggestID = 0;
  this->SelectedQuestID = 0;
  return this;
}

// ~UDS_VM_W_QuestDailyListSlot @ 14b74f5a0

void __thiscall
UDS_VM_W_QuestDailyListSlot::~UDS_VM_W_QuestDailyListSlot(UDS_VM_W_QuestDailyListSlot *this)

{
  ITextData *pIVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_QuestDailyListSlot__6B_;
  pIVar1 = (this->LimitTime).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
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

// GetFieldNotificationDescriptor @ 14b7514e0

IClassDescriptor * __thiscall
UDS_VM_W_QuestDailyListSlot::GetFieldNotificationDescriptor(UDS_VM_W_QuestDailyListSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_QuestDailyListSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b751e40

UClass * __cdecl UDS_VM_W_QuestDailyListSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_QuestDailyListSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_QuestDailyListSlot",
               &Z_Registration_Info_UClass_UDS_VM_W_QuestDailyListSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_QuestDailyListSlot,0xf0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_QuestDailyListSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_W_QuestDailyListSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_QuestDailyListSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_QuestDailyListSlot @ 14b752460

void __cdecl UDS_VM_W_QuestDailyListSlot::StaticRegisterNativesUDS_VM_W_QuestDailyListSlot(void)

{
  return;
}

// OnChangeSelectQuestID @ 14c025780

void __thiscall
UDS_VM_W_QuestDailyListSlot::OnChangeSelectQuestID(UDS_VM_W_QuestDailyListSlot *this,int param_1)

{
  bool bVar1;
  FName local_18;
  int local_10;
  
  bVar1 = this->QuestID == param_1;
  this->SelectedQuestID = param_1;
  local_10 = FFieldNotificationClassDescriptor::SelectedButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SelectedButton.FieldName;
  if (this->SelectedButton != bVar1) {
    this->SelectedButton = bVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnClickSlotButton @ 14c026cd0

void __thiscall
UDS_VM_W_QuestDailyListSlot::OnClickSlotButton
          (UDS_VM_W_QuestDailyListSlot *this,FDS_ButtonEventField *param_1)

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

// OnSetViewModel @ 14c033480

void __thiscall
UDS_VM_W_QuestDailyListSlot::OnSetViewModel
          (UDS_VM_W_QuestDailyListSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  int iVar3;
  EDS_QuestConditionType EVar4;
  UDS_QuestEvent *pUVar5;
  UDS_DailyQuestManager *this_00;
  UDS_QuestManager *this_01;
  bool bVar6;
  FName local_88;
  int local_80;
  FName local_78;
  int local_70;
  FName local_68;
  int local_60;
  FName local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TSharedPtr<FDS_ViewModelContext_DailyQuestListSlot,1> local_48;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  FName local_28;
  undefined8 uStack_20;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
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
  SafeCast<FDS_ViewModelContext_DailyQuestListSlot>(&local_48,&local_38);
  if (local_48.Object != (FDS_ViewModelContext_DailyQuestListSlot *)0x0) {
    this->QuestID = (local_48.Object)->QuestID;
    if (this->SelectedQuestID == 0) {
      this->SelectedQuestID = (local_48.Object)->SelectedQuestID;
    }
    this->SuggestID = (local_48.Object)->SuggestID;
    pUVar5 = UDS_QuestEvent::GetEvent();
    if (pUVar5 != (UDS_QuestEvent *)0x0) {
      iStack_50 = 0;
      local_58 = (FName)OnChangeSelectQuestID;
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &pUVar5->OnSelectedQuestDelegate,this);
      uStack_20 = CONCAT44(uStack_4c,iStack_50);
      local_28 = local_58;
      TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
      AddUObject<UDS_VM_W_QuestDailyListSlot>
                ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
                 &pUVar5->OnSelectedQuestDelegate,(UDS_VM_W_QuestDailyListSlot *)&stack0x00000010,
                 (pmf_0a742c20 *)this);
    }
    iVar3 = FFieldNotificationClassDescriptor::VisibilityLimitTime.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::VisibilityLimitTime.FieldName;
    if (this->VisibilityLimitTime != Collapsed) {
      this->VisibilityLimitTime = Collapsed;
      local_80 = iVar3;
      local_88 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
    }
    iVar3 = FFieldNotificationClassDescriptor::SelectedButton.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::SelectedButton.FieldName;
    bVar6 = this->QuestID == this->SelectedQuestID;
    if (this->SelectedButton != bVar6) {
      this->SelectedButton = bVar6;
      local_70 = iVar3;
      local_78 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
    }
    this_00 = UDS_DailyQuestManager::GetInst();
    if ((this_00 != (UDS_DailyQuestManager *)0x0) &&
       (this_01 = UDS_QuestManager::GetInst(), this_01 != (UDS_QuestManager *)0x0)) {
      bVar6 = UDS_DailyQuestManager::IsQuestComplete(this_00,this->SuggestID,this->QuestID);
      if (bVar6) {
        this->QuestStateActiveWidgetIndex = 4;
      }
      else {
        EVar4 = UDS_QuestManager::GetQuestConditionType(this_01,this->QuestID,0);
        if (EVar4 == AbleComplete) {
          this->QuestStateActiveWidgetIndex = 2;
        }
        else if (EVar4 == AbleAccept) {
          this->QuestStateActiveWidgetIndex = 1;
        }
        else if (EVar4 == InProgress) {
          this->QuestStateActiveWidgetIndex = 0;
        }
        else if (EVar4 == NotAbleAccept) {
          this->QuestStateActiveWidgetIndex = 3;
        }
        this->QuestRewardStateWigetIndex = (uint)(EVar4 == AbleComplete);
      }
      local_60 = FFieldNotificationClassDescriptor::QuestStateActiveWidgetIndex.BitNumber;
      local_68 = FFieldNotificationClassDescriptor::QuestStateActiveWidgetIndex.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
      iStack_50 = FFieldNotificationClassDescriptor::QuestRewardStateWigetIndex.BitNumber;
      local_58 = FFieldNotificationClassDescriptor::QuestRewardStateWigetIndex.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetLimitTime @ 14c042570

void __thiscall UDS_VM_W_QuestDailyListSlot::SetLimitTime(UDS_VM_W_QuestDailyListSlot *this)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::LimitTime.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::LimitTime.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetQuestStateActiveWidgetIndex @ 14c042c00

void __thiscall
UDS_VM_W_QuestDailyListSlot::SetQuestStateActiveWidgetIndex(UDS_VM_W_QuestDailyListSlot *this)

{
  bool bVar1;
  EDS_QuestConditionType EVar2;
  UDS_DailyQuestManager *this_00;
  UDS_QuestManager *this_01;
  FName local_18;
  int local_10;
  
  this_00 = UDS_DailyQuestManager::GetInst();
  if ((this_00 != (UDS_DailyQuestManager *)0x0) &&
     (this_01 = UDS_QuestManager::GetInst(), this_01 != (UDS_QuestManager *)0x0)) {
    bVar1 = UDS_DailyQuestManager::IsQuestComplete(this_00,this->SuggestID,this->QuestID);
    if (bVar1) {
      this->QuestStateActiveWidgetIndex = 4;
    }
    else {
      EVar2 = UDS_QuestManager::GetQuestConditionType(this_01,this->QuestID,0);
      if (EVar2 == AbleComplete) {
        this->QuestStateActiveWidgetIndex = 2;
      }
      else if (EVar2 == AbleAccept) {
        this->QuestStateActiveWidgetIndex = 1;
      }
      else if (EVar2 == InProgress) {
        this->QuestStateActiveWidgetIndex = 0;
      }
      else if (EVar2 == NotAbleAccept) {
        this->QuestStateActiveWidgetIndex = 3;
      }
      this->QuestRewardStateWigetIndex = (uint)(EVar2 == AbleComplete);
    }
    local_10 = FFieldNotificationClassDescriptor::QuestStateActiveWidgetIndex.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::QuestStateActiveWidgetIndex.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    local_10 = FFieldNotificationClassDescriptor::QuestRewardStateWigetIndex.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::QuestRewardStateWigetIndex.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetSelectedButton @ 14c0435e0

void __thiscall
UDS_VM_W_QuestDailyListSlot::SetSelectedButton(UDS_VM_W_QuestDailyListSlot *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::SelectedButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SelectedButton.FieldName;
  if (this->SelectedButton != param_1) {
    this->SelectedButton = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVisibilityLimitTime @ 14c0459d0

void __thiscall
UDS_VM_W_QuestDailyListSlot::SetVisibilityLimitTime(UDS_VM_W_QuestDailyListSlot *this)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::VisibilityLimitTime.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibilityLimitTime.FieldName;
  if (this->VisibilityLimitTime != Collapsed) {
    this->VisibilityLimitTime = Collapsed;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14c048c20

void __thiscall UDS_VM_W_QuestDailyListSlot::UnbindModel(UDS_VM_W_QuestDailyListSlot *this)

{
  UDS_QuestEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_QuestEvent::GetEvent();
  if (pUVar1 != (UDS_QuestEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnSelectedQuestDelegate,this);
    return;
  }
  return;
}

