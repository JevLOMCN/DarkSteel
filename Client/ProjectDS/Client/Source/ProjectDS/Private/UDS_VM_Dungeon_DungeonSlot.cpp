// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// SetClickSlot_WrapperImpl @ 14b634850

void __cdecl UDS_VM_Dungeon_DungeonSlot::SetClickSlot_WrapperImpl(void *param_1,void *param_2)

{
  UDS_DungeonManager *this;
  FDS_DungeonBaseTableRow *pFVar1;
  
  this = UDS_DungeonManager::GetInst();
  if (this != (UDS_DungeonManager *)0x0) {
    pFVar1 = FDS_DungeonBaseTableRow::GetRef((longlong)*(int *)((longlong)param_1 + 0xc4),true);
    if (this->SelectedDungeonLevelGroup != pFVar1->LevelGroup) {
      UDS_DungeonManager::SetSelectedDungeonID(this,*(int *)((longlong)param_1 + 0xc4));
    }
  }
  return;
}

// SetbIsSelected_WrapperImpl @ 14b634860

void __cdecl UDS_VM_Dungeon_DungeonSlot::SetbIsSelected_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
  if (*(char *)((longlong)param_1 + 0xc0) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0xc0) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// StaticClass @ 14b634870

UClass * __cdecl UDS_VM_Dungeon_DungeonSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Dungeon_DungeonSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Dungeon_DungeonSlot",
               &Z_Registration_Info_UClass_UDS_VM_Dungeon_DungeonSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_Dungeon_DungeonSlot,0xd0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_Dungeon_DungeonSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_Dungeon_DungeonSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Dungeon_DungeonSlot.InnerSingleton;
}

// UDS_VM_Dungeon_DungeonSlot @ 14b63ac10

UDS_VM_Dungeon_DungeonSlot * __thiscall
UDS_VM_Dungeon_DungeonSlot::UDS_VM_Dungeon_DungeonSlot
          (UDS_VM_Dungeon_DungeonSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_DungeonSlot__6B_;
  *(undefined8 *)&(this->ClickSlot).Delegate = 0;
  *(undefined8 *)&(this->ClickSlot).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickSlot).Delegate.field_0x10 = 0;
  (this->ClickSlot)._padding_ = '\0';
  (this->ClickSlot).bIsCustomSelected = false;
  (this->ClickSlot).bIsLacked = false;
  (this->ClickSlot).bIsCustomDisabled = false;
  return this;
}

// UDS_VM_Dungeon_DungeonSlot @ 14b63ac70

UDS_VM_Dungeon_DungeonSlot * __thiscall
UDS_VM_Dungeon_DungeonSlot::UDS_VM_Dungeon_DungeonSlot
          (UDS_VM_Dungeon_DungeonSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_DungeonSlot__6B_;
  *(undefined8 *)&(this->ClickSlot).Delegate = 0;
  *(undefined8 *)&(this->ClickSlot).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickSlot).Delegate.field_0x10 = 0;
  (this->ClickSlot)._padding_ = '\0';
  (this->ClickSlot).bIsCustomSelected = false;
  (this->ClickSlot).bIsLacked = false;
  (this->ClickSlot).bIsCustomDisabled = false;
  return this;
}

// ~UDS_VM_Dungeon_DungeonSlot @ 14b63cbe0

void __thiscall
UDS_VM_Dungeon_DungeonSlot::~UDS_VM_Dungeon_DungeonSlot(UDS_VM_Dungeon_DungeonSlot *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_DungeonSlot__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickSlot).Delegate);
  pvVar1 = *(void **)&(this->ClickSlot).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickSlot).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b63f680

IClassDescriptor * __thiscall
UDS_VM_Dungeon_DungeonSlot::GetFieldNotificationDescriptor(UDS_VM_Dungeon_DungeonSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Dungeon_DungeonSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b640210

UClass * __cdecl UDS_VM_Dungeon_DungeonSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Dungeon_DungeonSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Dungeon_DungeonSlot",
               &Z_Registration_Info_UClass_UDS_VM_Dungeon_DungeonSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_Dungeon_DungeonSlot,0xd0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_Dungeon_DungeonSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_Dungeon_DungeonSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Dungeon_DungeonSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Dungeon_DungeonSlot @ 14b640b40

void __cdecl UDS_VM_Dungeon_DungeonSlot::StaticRegisterNativesUDS_VM_Dungeon_DungeonSlot(void)

{
  return;
}

// BindModel @ 14be74ea0

void __thiscall UDS_VM_Dungeon_DungeonSlot::BindModel(UDS_VM_Dungeon_DungeonSlot *this)

{
  UDS_DungeonEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_DungeonEvent::GetEvent();
  if (pUVar1 != (UDS_DungeonEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectedDungeonLevel
               ,this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Dungeon_DungeonSlot>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnSelectedDungeonLevel,(UDS_VM_Dungeon_DungeonSlot *)&stack0x00000010,
               (pmf_848f1758 *)this);
  }
  return;
}

// OnClickSlot @ 14be97310

void __thiscall
UDS_VM_Dungeon_DungeonSlot::OnClickSlot
          (UDS_VM_Dungeon_DungeonSlot *this,FDS_ButtonEventField *param_1)

{
  UDS_DungeonManager *this_00;
  FDS_DungeonBaseTableRow *pFVar1;
  
  this_00 = UDS_DungeonManager::GetInst();
  if (this_00 != (UDS_DungeonManager *)0x0) {
    pFVar1 = FDS_DungeonBaseTableRow::GetRef((longlong)this->DungeonID,true);
    if (this_00->SelectedDungeonLevelGroup != pFVar1->LevelGroup) {
      UDS_DungeonManager::SetSelectedDungeonID(this_00,this->DungeonID);
    }
  }
  return;
}

// OnSelectedDungeonLevel @ 14be9cb60

void __thiscall
UDS_VM_Dungeon_DungeonSlot::OnSelectedDungeonLevel(UDS_VM_Dungeon_DungeonSlot *this,int param_1)

{
  bool bVar1;
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
  bVar1 = this->DungeonLevelGroup == param_1;
  if (this->bIsSelected != bVar1) {
    this->bIsSelected = bVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnSetViewModel @ 14be9dc00

void __thiscall
UDS_VM_Dungeon_DungeonSlot::OnSetViewModel
          (UDS_VM_Dungeon_DungeonSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UDS_DungeonManager *pUVar5;
  FDS_DungeonBaseTableRow *this_00;
  UDS_DungeonManager *pUVar6;
  int iVar7;
  FName local_48;
  int local_40;
  FName local_38;
  int local_30;
  TSharedPtr<FDS_ViewModelContext_Dungeon,1> local_28;
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
  SafeCast<FDS_ViewModelContext_Dungeon>(&local_28,&local_18);
  if (local_28.Object == (FDS_ViewModelContext_Dungeon *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  else {
    this->DungeonID = (int)(local_28.Object)->DungeonId;
    pUVar5 = UDS_DungeonManager::GetInst();
    if (pUVar5 == (UDS_DungeonManager *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
    }
    else {
      this_00 = FDS_DungeonBaseTableRow::GetRef((longlong)this->DungeonID,true);
      bVar4 = FDS_DungeonBaseTableRow::IsValid(this_00);
      if (bVar4) {
        FDS_DungeonBaseTableRow::GetRef((longlong)this->DungeonID,true);
        iVar7 = 0;
        pUVar6 = UDS_DungeonManager::GetInst();
        iVar3 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
        FVar2 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
        if (pUVar6 != (UDS_DungeonManager *)0x0) {
          iVar7 = pUVar6->SelectedDungeonLevelGroup;
        }
        bVar4 = this->DungeonLevelGroup == iVar7;
        if (this->bIsSelected != bVar4) {
          this->bIsSelected = bVar4;
          local_40 = iVar3;
          local_48 = FVar2;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
        }
        iVar7 = this_00->LevelGroup;
        this->DungeonLevelGroup = iVar7;
        iVar3 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
        FVar2 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
        bVar4 = pUVar5->SelectedDungeonLevelGroup == iVar7;
        if (this->bIsSelected != bVar4) {
          this->bIsSelected = bVar4;
          local_30 = iVar3;
          local_38 = FVar2;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_28.SharedReferenceCount.ReferenceController);
      }
      else {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_28.SharedReferenceCount.ReferenceController);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetDungeonSlot @ 14beaee10

void __thiscall UDS_VM_Dungeon_DungeonSlot::SetDungeonSlot(UDS_VM_Dungeon_DungeonSlot *this)

{
  UDS_DungeonManager *pUVar1;
  int iVar2;
  bool bVar3;
  FName local_18;
  int local_10;
  
  FDS_DungeonBaseTableRow::GetRef((longlong)this->DungeonID,true);
  iVar2 = 0;
  pUVar1 = UDS_DungeonManager::GetInst();
  local_18 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
  if (pUVar1 != (UDS_DungeonManager *)0x0) {
    iVar2 = pUVar1->SelectedDungeonLevelGroup;
  }
  bVar3 = this->DungeonLevelGroup == iVar2;
  if (this->bIsSelected != bVar3) {
    local_10 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
    this->bIsSelected = bVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetIsSelected @ 14beb1aa0

void __thiscall
UDS_VM_Dungeon_DungeonSlot::SetIsSelected(UDS_VM_Dungeon_DungeonSlot *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
  if (this->bIsSelected != *param_1) {
    this->bIsSelected = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14bebbc20

void __thiscall UDS_VM_Dungeon_DungeonSlot::UnbindModel(UDS_VM_Dungeon_DungeonSlot *this)

{
  UDS_DungeonEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_DungeonEvent::GetEvent();
  if (pUVar1 != (UDS_DungeonEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectedDungeonLevel
               ,this);
    return;
  }
  return;
}

