// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// SetItemName_WrapperImpl @ 14b689ab0

void __cdecl
UDS_VM_ItemCraft_Crafting_Info_Slot::SetItemName_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStackX_8 [8];
  FName FStack_18;
  int iStack_10;
  
  plVar1 = *(longlong **)param_2;
  plVar2 = *(longlong **)((longlong)param_1 + 0xa0);
  if (plVar2 != plVar1) {
    *(longlong **)((longlong)param_1 + 0xa0) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1,auStackX_8);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)((longlong)param_1 + 0xa8) = *(undefined4 *)((longlong)param_2 + 8);
  iStack_10 = FFieldNotificationClassDescriptor::ItemName.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::ItemName.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// StaticClass @ 14b689ac0

UClass * __cdecl UDS_VM_ItemCraft_Crafting_Info_Slot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ItemCraft_Crafting_Info_Slot.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ItemCraft_Crafting_Info_Slot",
               &Z_Registration_Info_UClass_UDS_VM_ItemCraft_Crafting_Info_Slot.InnerSingleton,
               StaticRegisterNativesUDS_VM_ItemCraft_Crafting_Info_Slot,0xb0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_ItemCraft_Crafting_Info_Slot>,
               InternalVTableHelperCtorCaller<UDS_VM_ItemCraft_Crafting_Info_Slot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ItemCraft_Crafting_Info_Slot.InnerSingleton;
}

// UDS_VM_ItemCraft_Crafting_Info_Slot @ 14b68cca0

UDS_VM_ItemCraft_Crafting_Info_Slot * __thiscall
UDS_VM_ItemCraft_Crafting_Info_Slot::UDS_VM_ItemCraft_Crafting_Info_Slot
          (UDS_VM_ItemCraft_Crafting_Info_Slot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemCraft_Crafting_Info_Slot__6B_;
  FText::FText(&this->ItemName);
  return this;
}

// UDS_VM_ItemCraft_Crafting_Info_Slot @ 14b68ccf0

UDS_VM_ItemCraft_Crafting_Info_Slot * __thiscall
UDS_VM_ItemCraft_Crafting_Info_Slot::UDS_VM_ItemCraft_Crafting_Info_Slot
          (UDS_VM_ItemCraft_Crafting_Info_Slot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemCraft_Crafting_Info_Slot__6B_;
  FText::FText(&this->ItemName);
  return this;
}

// ~UDS_VM_ItemCraft_Crafting_Info_Slot @ 14b68de70

void __thiscall
UDS_VM_ItemCraft_Crafting_Info_Slot::~UDS_VM_ItemCraft_Crafting_Info_Slot
          (UDS_VM_ItemCraft_Crafting_Info_Slot *this)

{
  ITextData *pIVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemCraft_Crafting_Info_Slot__6B_;
  pIVar1 = (this->ItemName).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b68fda0

IClassDescriptor * __thiscall
UDS_VM_ItemCraft_Crafting_Info_Slot::GetFieldNotificationDescriptor
          (UDS_VM_ItemCraft_Crafting_Info_Slot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_ItemCraft_Crafting_Info_Slot::FFieldNotificationClassDescriptor::GetDescriptor'
             ::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6906a0

UClass * __cdecl UDS_VM_ItemCraft_Crafting_Info_Slot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ItemCraft_Crafting_Info_Slot.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ItemCraft_Crafting_Info_Slot",
               &Z_Registration_Info_UClass_UDS_VM_ItemCraft_Crafting_Info_Slot.InnerSingleton,
               StaticRegisterNativesUDS_VM_ItemCraft_Crafting_Info_Slot,0xb0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_ItemCraft_Crafting_Info_Slot>,
               InternalVTableHelperCtorCaller<UDS_VM_ItemCraft_Crafting_Info_Slot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ItemCraft_Crafting_Info_Slot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_ItemCraft_Crafting_Info_Slot @ 14b691050

void __cdecl
UDS_VM_ItemCraft_Crafting_Info_Slot::StaticRegisterNativesUDS_VM_ItemCraft_Crafting_Info_Slot(void)

{
  return;
}

// BindModel @ 14be77320

void __thiscall
UDS_VM_ItemCraft_Crafting_Info_Slot::BindModel(UDS_VM_ItemCraft_Crafting_Info_Slot *this)

{
  UDS_ItemCraftEvent *pUVar1;
  
  pUVar1 = UDS_ItemCraftEvent::GetEvent();
  if (pUVar1 != (UDS_ItemCraftEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangeCraftManager_ItemCraftListTID,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_ItemCraft_Crafting_Info_Slot>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangeCraftManager_ItemCraftListTID,
               (UDS_VM_ItemCraft_Crafting_Info_Slot *)&stack0x00000010,(pmf_fa7dfd3d *)this);
  }
  return;
}

// OnChangeCraftManager_ItemCraftListTID @ 14be907d0

void __thiscall
UDS_VM_ItemCraft_Crafting_Info_Slot::OnChangeCraftManager_ItemCraftListTID
          (UDS_VM_ItemCraft_Crafting_Info_Slot *this)

{
  UDS_CraftManager *this_00;
  FText *pFVar1;
  FText local_18;
  
  this_00 = UDS_CraftManager::GetInst();
  if (this_00 != (UDS_CraftManager *)0x0) {
    pFVar1 = UDS_CraftManager::GetSelectedItemName(this_00,&local_18);
    SetItemName(this,pFVar1);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  return;
}

// OnSetViewModel @ 14bea3c40

void __thiscall
UDS_VM_ItemCraft_Crafting_Info_Slot::OnSetViewModel
          (UDS_VM_ItemCraft_Crafting_Info_Slot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  UDS_CraftManager *this_00;
  FText *pFVar2;
  FText local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  this_00 = UDS_CraftManager::GetInst();
  if (this_00 != (UDS_CraftManager *)0x0) {
    pFVar2 = UDS_CraftManager::GetSelectedItemName(this_00,&local_18);
    SetItemName(this,pFVar2);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetItemName @ 14beb2320

void __thiscall
UDS_VM_ItemCraft_Crafting_Info_Slot::SetItemName
          (UDS_VM_ItemCraft_Crafting_Info_Slot *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  FName local_18;
  int local_10;
  
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->ItemName).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->ItemName).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->ItemName).Flags = param_1->Flags;
  local_10 = FFieldNotificationClassDescriptor::ItemName.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ItemName.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14bebc8c0

void __thiscall
UDS_VM_ItemCraft_Crafting_Info_Slot::UnbindModel(UDS_VM_ItemCraft_Crafting_Info_Slot *this)

{
  UDS_ItemCraftEvent *pUVar1;
  
  pUVar1 = UDS_ItemCraftEvent::GetEvent();
  if (pUVar1 != (UDS_ItemCraftEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangeCraftManager_ItemCraftListTID,this);
    return;
  }
  return;
}

