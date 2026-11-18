// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b6a1a00

UClass * __cdecl UDS_VM_Mounts_Sustain_Slot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Mounts_Sustain_Slot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Mounts_Sustain_Slot",
               &Z_Registration_Info_UClass_UDS_VM_Mounts_Sustain_Slot.InnerSingleton,
               StaticRegisterNativesUDS_VM_Mounts_Sustain_Slot,0xa8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_Mounts_Sustain_Slot>,
               InternalVTableHelperCtorCaller<UDS_VM_Mounts_Sustain_Slot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Mounts_Sustain_Slot.InnerSingleton;
}

// UDS_VM_Mounts_Sustain_Slot @ 14b6a6590

UDS_VM_Mounts_Sustain_Slot * __thiscall
UDS_VM_Mounts_Sustain_Slot::UDS_VM_Mounts_Sustain_Slot
          (UDS_VM_Mounts_Sustain_Slot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Mounts_Sustain_Slot__6B_;
  return this;
}

// UDS_VM_Mounts_Sustain_Slot @ 14b6a65d0

UDS_VM_Mounts_Sustain_Slot * __thiscall
UDS_VM_Mounts_Sustain_Slot::UDS_VM_Mounts_Sustain_Slot
          (UDS_VM_Mounts_Sustain_Slot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Mounts_Sustain_Slot__6B_;
  return this;
}

// ~UDS_VM_Mounts_Sustain_Slot @ 14b6a7930

void __thiscall
UDS_VM_Mounts_Sustain_Slot::~UDS_VM_Mounts_Sustain_Slot(UDS_VM_Mounts_Sustain_Slot *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Mounts_Sustain_Slot__6B_;
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6a9b70

IClassDescriptor * __thiscall
UDS_VM_Mounts_Sustain_Slot::GetFieldNotificationDescriptor(UDS_VM_Mounts_Sustain_Slot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Mounts_Sustain_Slot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6aa880

UClass * __cdecl UDS_VM_Mounts_Sustain_Slot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Mounts_Sustain_Slot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Mounts_Sustain_Slot",
               &Z_Registration_Info_UClass_UDS_VM_Mounts_Sustain_Slot.InnerSingleton,
               StaticRegisterNativesUDS_VM_Mounts_Sustain_Slot,0xa8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_Mounts_Sustain_Slot>,
               InternalVTableHelperCtorCaller<UDS_VM_Mounts_Sustain_Slot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Mounts_Sustain_Slot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Mounts_Sustain_Slot @ 14b6aadd0

void __cdecl UDS_VM_Mounts_Sustain_Slot::StaticRegisterNativesUDS_VM_Mounts_Sustain_Slot(void)

{
  return;
}

// BindModel @ 14bed8920

void __thiscall UDS_VM_Mounts_Sustain_Slot::BindModel(UDS_VM_Mounts_Sustain_Slot *this)

{
  UDS_MountEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_MountEvent::GetEvent();
  if (pUVar1 != (UDS_MountEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnSelectedMountFoodItem,this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Mounts_Sustain_Slot>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnSelectedMountFoodItem,(UDS_VM_Mounts_Sustain_Slot *)&stack0x00000010,
               (pmf_68330d8c *)this);
  }
  return;
}

// OnSetViewModel @ 14bf07490

void __thiscall
UDS_VM_Mounts_Sustain_Slot::OnSetViewModel
          (UDS_VM_Mounts_Sustain_Slot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
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
  SafeCast<FDS_ViewModelContext>(&local_18,&local_28);
  if (local_18.Object != (FDS_ViewModelContext *)0x0) {
    this->bIsItemIconVisible = false;
    local_28.SharedReferenceCount.ReferenceController._0_4_ =
         FFieldNotificationClassDescriptor::bIsItemIconVisible.BitNumber;
    local_28.Object =
         (FDS_ViewModelContext *)FFieldNotificationClassDescriptor::bIsItemIconVisible.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetFoodItemIcon @ 14bf14970

void __thiscall
UDS_VM_Mounts_Sustain_Slot::SetFoodItemIcon(UDS_VM_Mounts_Sustain_Slot *this,int param_1)

{
  bool bVar1;
  FDS_ItemBaseTableRow *this_00;
  FDS_ResourceIconTableRow *this_01;
  FName local_18;
  int local_10;
  
  if (param_1 == 0) {
    this->bIsItemIconVisible = false;
    local_10 = FFieldNotificationClassDescriptor::bIsItemIconVisible.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::bIsItemIconVisible.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  this_00 = FDS_ItemBaseTableRow::GetRef((longlong)param_1,true);
  bVar1 = FDS_ItemBaseTableRow::IsValid(this_00);
  if (bVar1) {
    this_01 = FDS_ResourceIconTableRow::GetRef((longlong)this_00->ID_Icon,true);
    bVar1 = FDS_ResourceIconTableRow::IsValid(this_01);
    if (bVar1) {
      this->ItemIconID = this_01->ID;
      local_10 = FFieldNotificationClassDescriptor::ItemIconID.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::ItemIconID.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      this->bIsItemIconVisible = true;
      local_10 = FFieldNotificationClassDescriptor::bIsItemIconVisible.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::bIsItemIconVisible.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// UnbindModel @ 14bf1e270

void __thiscall UDS_VM_Mounts_Sustain_Slot::UnbindModel(UDS_VM_Mounts_Sustain_Slot *this)

{
  UDS_MountEvent *pUVar1;
  
  pUVar1 = UDS_MountEvent::GetEvent();
  if (pUVar1 != (UDS_MountEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnSelectedMountFoodItem,this);
  }
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  return;
}

