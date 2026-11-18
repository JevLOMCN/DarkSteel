// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b6d4810

UClass * __cdecl UDS_VM_RewardSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_RewardSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_RewardSlot",
               &Z_Registration_Info_UClass_UDS_VM_RewardSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_RewardSlot,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_RewardSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_RewardSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_RewardSlot.InnerSingleton;
}

// UDS_VM_RewardSlot @ 14b6d93c0

UDS_VM_RewardSlot * __thiscall
UDS_VM_RewardSlot::UDS_VM_RewardSlot(UDS_VM_RewardSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->VisMoneyVM = Collapsed;
  this->VisPointVM = Collapsed;
  this->VisItemVM = Collapsed;
  this->VisExpVM = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_RewardSlot__6B_;
  this->VisRewardCompleted = Collapsed;
  this->RewardSlotType = None;
  return this;
}

// UDS_VM_RewardSlot @ 14b6d9410

UDS_VM_RewardSlot * __thiscall
UDS_VM_RewardSlot::UDS_VM_RewardSlot(UDS_VM_RewardSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->VisMoneyVM = Collapsed;
  this->VisPointVM = Collapsed;
  this->VisItemVM = Collapsed;
  this->VisExpVM = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_RewardSlot__6B_;
  this->VisRewardCompleted = Collapsed;
  this->RewardSlotType = None;
  return this;
}

// ~UDS_VM_RewardSlot @ 14b6daa40

void __thiscall UDS_VM_RewardSlot::~UDS_VM_RewardSlot(UDS_VM_RewardSlot *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_RewardSlot__6B_;
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6dcec0

IClassDescriptor * __thiscall
UDS_VM_RewardSlot::GetFieldNotificationDescriptor(UDS_VM_RewardSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_RewardSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6ddb00

UClass * __cdecl UDS_VM_RewardSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_RewardSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_RewardSlot",
               &Z_Registration_Info_UClass_UDS_VM_RewardSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_RewardSlot,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_RewardSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_RewardSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_RewardSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_RewardSlot @ 14b6ddf80

void __cdecl UDS_VM_RewardSlot::StaticRegisterNativesUDS_VM_RewardSlot(void)

{
  return;
}

// OnSetViewModel @ 14be3e2e0

void __thiscall
UDS_VM_RewardSlot::OnSetViewModel
          (UDS_VM_RewardSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  int iVar3;
  FName local_38;
  int local_30;
  TSharedPtr<FDS_VMContext_RewardSlot,1> local_28;
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
  SafeCast<FDS_VMContext_RewardSlot>(&local_28,&local_18);
  if (local_28.Object != (FDS_VMContext_RewardSlot *)0x0) {
    SetRewardType(this,(local_28.Object)->RewardSlotType);
    iVar3 = FFieldNotificationClassDescriptor::VisRewardCompleted.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::VisRewardCompleted.FieldName;
    if ((local_28.Object)->bIsReward == false) {
      if (this->VisRewardCompleted == Collapsed) goto LAB_14be3e395;
      this->VisRewardCompleted = Collapsed;
    }
    else {
      if (this->VisRewardCompleted == Visible) goto LAB_14be3e395;
      this->VisRewardCompleted = Visible;
    }
    local_30 = iVar3;
    local_38 = FVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
  }
LAB_14be3e395:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Reset @ 14be480c0

void __thiscall UDS_VM_RewardSlot::Reset(UDS_VM_RewardSlot *this)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::VisMoneyVM.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisMoneyVM.FieldName;
  if (this->VisMoneyVM != Collapsed) {
    this->VisMoneyVM = Collapsed;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::VisPointVM.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisPointVM.FieldName;
  if (this->VisPointVM != Collapsed) {
    this->VisPointVM = Collapsed;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::VisItemVM.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisItemVM.FieldName;
  if (this->VisItemVM != Collapsed) {
    this->VisItemVM = Collapsed;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::VisExpVM.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisExpVM.FieldName;
  if (this->VisExpVM != Collapsed) {
    this->VisExpVM = Collapsed;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetRewardType @ 14be51250

void __thiscall UDS_VM_RewardSlot::SetRewardType(UDS_VM_RewardSlot *this,EDS_RewardSlotType param_1)

{
  EDS_RewardSlotType EVar1;
  FName FVar2;
  int iVar3;
  FName FVar4;
  int iVar5;
  FName FVar6;
  int iVar7;
  FName local_18;
  int local_10;
  
  this->RewardSlotType = param_1;
  local_10 = FFieldNotificationClassDescriptor::VisMoneyVM.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisMoneyVM.FieldName;
  if (this->VisMoneyVM != Collapsed) {
    this->VisMoneyVM = Collapsed;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::VisPointVM.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisPointVM.FieldName;
  if (this->VisPointVM != Collapsed) {
    this->VisPointVM = Collapsed;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::VisItemVM.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisItemVM.FieldName;
  if (this->VisItemVM != Collapsed) {
    this->VisItemVM = Collapsed;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::VisExpVM.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisExpVM.FieldName;
  if (this->VisExpVM != Collapsed) {
    this->VisExpVM = Collapsed;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  iVar7 = FFieldNotificationClassDescriptor::VisExpVM.BitNumber;
  FVar6 = FFieldNotificationClassDescriptor::VisExpVM.FieldName;
  local_10 = FFieldNotificationClassDescriptor::VisItemVM.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisItemVM.FieldName;
  iVar5 = FFieldNotificationClassDescriptor::VisPointVM.BitNumber;
  FVar4 = FFieldNotificationClassDescriptor::VisPointVM.FieldName;
  iVar3 = FFieldNotificationClassDescriptor::VisMoneyVM.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::VisMoneyVM.FieldName;
  EVar1 = this->RewardSlotType;
  if (EVar1 == Item) {
    if (this->VisItemVM == Visible) {
      return;
    }
    this->VisItemVM = Visible;
  }
  else if (EVar1 == Point) {
    if (this->VisPointVM == SelfHitTestInvisible) {
      return;
    }
    this->VisPointVM = SelfHitTestInvisible;
    local_18 = FVar4;
    local_10 = iVar5;
  }
  else if (EVar1 == Money) {
    if (this->VisMoneyVM == SelfHitTestInvisible) {
      return;
    }
    this->VisMoneyVM = SelfHitTestInvisible;
    local_18 = FVar2;
    local_10 = iVar3;
  }
  else {
    if (EVar1 != Exp) {
      return;
    }
    if (this->VisExpVM == SelfHitTestInvisible) {
      return;
    }
    this->VisExpVM = SelfHitTestInvisible;
    local_18 = FVar6;
    local_10 = iVar7;
  }
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetVisReward @ 14be52db0

void __thiscall UDS_VM_RewardSlot::SetVisReward(UDS_VM_RewardSlot *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::VisRewardCompleted.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisRewardCompleted.FieldName;
  if (param_1) {
    if (this->VisRewardCompleted == Visible) {
      return;
    }
    this->VisRewardCompleted = Visible;
  }
  else {
    if (this->VisRewardCompleted == Collapsed) {
      return;
    }
    this->VisRewardCompleted = Collapsed;
  }
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

