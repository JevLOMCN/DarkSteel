// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b4fe6d0

UClass * __cdecl UDS_MountEvent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MountEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MountEvent",
               &Z_Registration_Info_UClass_UDS_MountEvent.InnerSingleton,
               StaticRegisterNativesUDS_MountEvent,0x2b0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_MountEvent>,InternalVTableHelperCtorCaller<UDS_MountEvent>,
               local_res8,UDS_EventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MountEvent.InnerSingleton;
}

// UDS_MountEvent @ 14b500d70

UDS_MountEvent * __thiscall
UDS_MountEvent::UDS_MountEvent(UDS_MountEvent *this,FVTableHelper *param_1)

{
  UDS_EventManager *pUVar1;
  
  UDS_EventBase::UDS_EventBase((UDS_EventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_MountEvent__6B_;
  (this->OnMountOwnerChanged_Filtered)._padding_ =
       (longlong)&___7__FDS_FilteredEventDelegate___CB_KAEB_K__6B_;
  *(undefined8 *)&(this->OnMountOwnerChanged_Filtered).Subscriptions = 0;
  *(undefined8 *)&(this->OnMountOwnerChanged_Filtered).Subscriptions.field_0x8 = 0;
  *(undefined8 *)&(this->OnMountOwnerChanged_Filtered).Subscriptions.field_0x20 = 0;
  *(undefined4 *)&(this->OnMountOwnerChanged_Filtered).Subscriptions.field_0x28 = 0;
  *(undefined4 *)&(this->OnMountOwnerChanged_Filtered).Subscriptions.field_0x2c = 0x80;
  *(undefined4 *)&(this->OnMountOwnerChanged_Filtered).Subscriptions.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OnMountOwnerChanged_Filtered).Subscriptions.field_0x34 = 0;
  *(undefined8 *)&(this->OnMountOwnerChanged_Filtered).Subscriptions.field_0x40 = 0;
  *(undefined4 *)&(this->OnMountOwnerChanged_Filtered).Subscriptions.field_0x48 = 0;
  pUVar1 = UDS_EventManager::GetInst();
  if (pUVar1 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate
              (pUVar1,(FDS_IDelegateCleanable *)&this->OnMountOwnerChanged_Filtered);
  }
  *(undefined8 *)&(this->OnChangedMountStep_Filtered).Subscriptions = 0;
  (this->OnChangedMountStep_Filtered)._padding_ =
       (longlong)&___7__FDS_FilteredEventDelegate___CBW4EDS_MountStep__AEBVFDS_MountStepInfo____6B_;
  *(undefined8 *)&(this->OnChangedMountStep_Filtered).Subscriptions.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedMountStep_Filtered).Subscriptions.field_0x20 = 0;
  *(undefined4 *)&(this->OnChangedMountStep_Filtered).Subscriptions.field_0x28 = 0;
  *(undefined4 *)&(this->OnChangedMountStep_Filtered).Subscriptions.field_0x2c = 0x80;
  *(undefined4 *)&(this->OnChangedMountStep_Filtered).Subscriptions.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OnChangedMountStep_Filtered).Subscriptions.field_0x34 = 0;
  *(undefined8 *)&(this->OnChangedMountStep_Filtered).Subscriptions.field_0x40 = 0;
  *(undefined4 *)&(this->OnChangedMountStep_Filtered).Subscriptions.field_0x48 = 0;
  pUVar1 = UDS_EventManager::GetInst();
  if (pUVar1 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate
              (pUVar1,(FDS_IDelegateCleanable *)&this->OnChangedMountStep_Filtered);
  }
  *(undefined8 *)&(this->OnChangedMountStatus_Filtered).Subscriptions = 0;
  (this->OnChangedMountStatus_Filtered)._padding_ =
       (longlong)&___7__FDS_FilteredEventDelegate___CBW4EDS_StatusType____V__6B_;
  *(undefined8 *)&(this->OnChangedMountStatus_Filtered).Subscriptions.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedMountStatus_Filtered).Subscriptions.field_0x20 = 0;
  *(undefined4 *)&(this->OnChangedMountStatus_Filtered).Subscriptions.field_0x28 = 0;
  *(undefined4 *)&(this->OnChangedMountStatus_Filtered).Subscriptions.field_0x2c = 0x80;
  *(undefined4 *)&(this->OnChangedMountStatus_Filtered).Subscriptions.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OnChangedMountStatus_Filtered).Subscriptions.field_0x34 = 0;
  *(undefined8 *)&(this->OnChangedMountStatus_Filtered).Subscriptions.field_0x40 = 0;
  *(undefined4 *)&(this->OnChangedMountStatus_Filtered).Subscriptions.field_0x48 = 0;
  pUVar1 = UDS_EventManager::GetInst();
  if (pUVar1 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate
              (pUVar1,(FDS_IDelegateCleanable *)&this->OnChangedMountStatus_Filtered);
  }
  *(undefined8 *)&(this->UpdateMountListDel).Delegate = 0;
  *(undefined8 *)&(this->UpdateMountListDel).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->UpdateMountListDel).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->UpdateMountExtendedTextDel).Delegate = 0;
  *(undefined8 *)&(this->UpdateMountExtendedTextDel).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->UpdateMountExtendedTextDel).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedMountStep).Delegate = 0;
  *(undefined8 *)&(this->OnChangedMountStep).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedMountStep).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedSelectedMount).Delegate = 0;
  *(undefined8 *)&(this->OnChangedSelectedMount).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedSelectedMount).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->SetMountRotationAngleDel).Delegate = 0;
  *(undefined8 *)&(this->SetMountRotationAngleDel).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->SetMountRotationAngleDel).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->MountDataSlotSelectedChangeDel).Delegate = 0;
  *(undefined8 *)&(this->MountDataSlotSelectedChangeDel).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->MountDataSlotSelectedChangeDel).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->CurSelectedMountCategoryTypeDel).Delegate = 0;
  *(undefined8 *)&(this->CurSelectedMountCategoryTypeDel).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->CurSelectedMountCategoryTypeDel).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->CurChangeNameMountUIDDel).Delegate = 0;
  *(undefined8 *)&(this->CurChangeNameMountUIDDel).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->CurChangeNameMountUIDDel).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->MountFlyUpDownStateChangeDel).Delegate = 0;
  *(undefined8 *)&(this->MountFlyUpDownStateChangeDel).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->MountFlyUpDownStateChangeDel).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectedMountFoodItem).Delegate = 0;
  *(undefined8 *)&(this->OnSelectedMountFoodItem).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectedMountFoodItem).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnEquipSlotSelectDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnEquipSlotSelectDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnEquipSlotSelectDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->LostListSelectedDelegate).Delegate = 0;
  *(undefined8 *)&(this->LostListSelectedDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->LostListSelectedDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->UpdateMountListDel).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->UpdateMountExtendedTextDel).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangedMountStep).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangedSelectedMount).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->SetMountRotationAngleDel).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->MountDataSlotSelectedChangeDel).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->CurSelectedMountCategoryTypeDel).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->CurChangeNameMountUIDDel).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->MountFlyUpDownStateChangeDel).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSelectedMountFoodItem).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnEquipSlotSelectDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->LostListSelectedDelegate).Delegate.field_0x18 = 2;
  return this;
}

// UDS_MountEvent @ 14b501010

UDS_MountEvent * __thiscall
UDS_MountEvent::UDS_MountEvent(UDS_MountEvent *this,FObjectInitializer *param_1)

{
  UDS_EventManager *pUVar1;
  
  UDS_EventBase::UDS_EventBase((UDS_EventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_MountEvent__6B_;
  (this->OnMountOwnerChanged_Filtered)._padding_ =
       (longlong)&___7__FDS_FilteredEventDelegate___CB_KAEB_K__6B_;
  *(undefined8 *)&(this->OnMountOwnerChanged_Filtered).Subscriptions = 0;
  *(undefined8 *)&(this->OnMountOwnerChanged_Filtered).Subscriptions.field_0x8 = 0;
  *(undefined8 *)&(this->OnMountOwnerChanged_Filtered).Subscriptions.field_0x20 = 0;
  *(undefined4 *)&(this->OnMountOwnerChanged_Filtered).Subscriptions.field_0x28 = 0;
  *(undefined4 *)&(this->OnMountOwnerChanged_Filtered).Subscriptions.field_0x2c = 0x80;
  *(undefined4 *)&(this->OnMountOwnerChanged_Filtered).Subscriptions.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OnMountOwnerChanged_Filtered).Subscriptions.field_0x34 = 0;
  *(undefined8 *)&(this->OnMountOwnerChanged_Filtered).Subscriptions.field_0x40 = 0;
  *(undefined4 *)&(this->OnMountOwnerChanged_Filtered).Subscriptions.field_0x48 = 0;
  pUVar1 = UDS_EventManager::GetInst();
  if (pUVar1 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate
              (pUVar1,(FDS_IDelegateCleanable *)&this->OnMountOwnerChanged_Filtered);
  }
  *(undefined8 *)&(this->OnChangedMountStep_Filtered).Subscriptions = 0;
  (this->OnChangedMountStep_Filtered)._padding_ =
       (longlong)&___7__FDS_FilteredEventDelegate___CBW4EDS_MountStep__AEBVFDS_MountStepInfo____6B_;
  *(undefined8 *)&(this->OnChangedMountStep_Filtered).Subscriptions.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedMountStep_Filtered).Subscriptions.field_0x20 = 0;
  *(undefined4 *)&(this->OnChangedMountStep_Filtered).Subscriptions.field_0x28 = 0;
  *(undefined4 *)&(this->OnChangedMountStep_Filtered).Subscriptions.field_0x2c = 0x80;
  *(undefined4 *)&(this->OnChangedMountStep_Filtered).Subscriptions.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OnChangedMountStep_Filtered).Subscriptions.field_0x34 = 0;
  *(undefined8 *)&(this->OnChangedMountStep_Filtered).Subscriptions.field_0x40 = 0;
  *(undefined4 *)&(this->OnChangedMountStep_Filtered).Subscriptions.field_0x48 = 0;
  pUVar1 = UDS_EventManager::GetInst();
  if (pUVar1 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate
              (pUVar1,(FDS_IDelegateCleanable *)&this->OnChangedMountStep_Filtered);
  }
  *(undefined8 *)&(this->OnChangedMountStatus_Filtered).Subscriptions = 0;
  (this->OnChangedMountStatus_Filtered)._padding_ =
       (longlong)&___7__FDS_FilteredEventDelegate___CBW4EDS_StatusType____V__6B_;
  *(undefined8 *)&(this->OnChangedMountStatus_Filtered).Subscriptions.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedMountStatus_Filtered).Subscriptions.field_0x20 = 0;
  *(undefined4 *)&(this->OnChangedMountStatus_Filtered).Subscriptions.field_0x28 = 0;
  *(undefined4 *)&(this->OnChangedMountStatus_Filtered).Subscriptions.field_0x2c = 0x80;
  *(undefined4 *)&(this->OnChangedMountStatus_Filtered).Subscriptions.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OnChangedMountStatus_Filtered).Subscriptions.field_0x34 = 0;
  *(undefined8 *)&(this->OnChangedMountStatus_Filtered).Subscriptions.field_0x40 = 0;
  *(undefined4 *)&(this->OnChangedMountStatus_Filtered).Subscriptions.field_0x48 = 0;
  pUVar1 = UDS_EventManager::GetInst();
  if (pUVar1 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate
              (pUVar1,(FDS_IDelegateCleanable *)&this->OnChangedMountStatus_Filtered);
  }
  *(undefined8 *)&(this->UpdateMountListDel).Delegate = 0;
  *(undefined8 *)&(this->UpdateMountListDel).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->UpdateMountListDel).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->UpdateMountExtendedTextDel).Delegate = 0;
  *(undefined8 *)&(this->UpdateMountExtendedTextDel).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->UpdateMountExtendedTextDel).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedMountStep).Delegate = 0;
  *(undefined8 *)&(this->OnChangedMountStep).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedMountStep).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedSelectedMount).Delegate = 0;
  *(undefined8 *)&(this->OnChangedSelectedMount).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedSelectedMount).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->SetMountRotationAngleDel).Delegate = 0;
  *(undefined8 *)&(this->SetMountRotationAngleDel).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->SetMountRotationAngleDel).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->MountDataSlotSelectedChangeDel).Delegate = 0;
  *(undefined8 *)&(this->MountDataSlotSelectedChangeDel).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->MountDataSlotSelectedChangeDel).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->CurSelectedMountCategoryTypeDel).Delegate = 0;
  *(undefined8 *)&(this->CurSelectedMountCategoryTypeDel).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->CurSelectedMountCategoryTypeDel).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->CurChangeNameMountUIDDel).Delegate = 0;
  *(undefined8 *)&(this->CurChangeNameMountUIDDel).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->CurChangeNameMountUIDDel).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->MountFlyUpDownStateChangeDel).Delegate = 0;
  *(undefined8 *)&(this->MountFlyUpDownStateChangeDel).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->MountFlyUpDownStateChangeDel).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectedMountFoodItem).Delegate = 0;
  *(undefined8 *)&(this->OnSelectedMountFoodItem).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectedMountFoodItem).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnEquipSlotSelectDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnEquipSlotSelectDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnEquipSlotSelectDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->LostListSelectedDelegate).Delegate = 0;
  *(undefined8 *)&(this->LostListSelectedDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->LostListSelectedDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->UpdateMountListDel).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->UpdateMountExtendedTextDel).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangedMountStep).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangedSelectedMount).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->SetMountRotationAngleDel).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->MountDataSlotSelectedChangeDel).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->CurSelectedMountCategoryTypeDel).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->CurChangeNameMountUIDDel).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->MountFlyUpDownStateChangeDel).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSelectedMountFoodItem).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnEquipSlotSelectDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->LostListSelectedDelegate).Delegate.field_0x18 = 2;
  return this;
}

// ~UDS_MountEvent @ 14b5023a0

void __thiscall UDS_MountEvent::~UDS_MountEvent(UDS_MountEvent *this)

{
  void *pvVar1;
  UDS_EventManager *pUVar2;
  
  this->_padding_ = (longlong)&___7UDS_MountEvent__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->LostListSelectedDelegate).Delegate.field_0x8,
             *(int *)&(this->LostListSelectedDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->LostListSelectedDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->LostListSelectedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnEquipSlotSelectDelegate).Delegate.field_0x8,
             *(int *)&(this->OnEquipSlotSelectDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnEquipSlotSelectDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnEquipSlotSelectDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSelectedMountFoodItem).Delegate.field_0x8,
             *(int *)&(this->OnSelectedMountFoodItem).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnSelectedMountFoodItem).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSelectedMountFoodItem);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->MountFlyUpDownStateChangeDel).Delegate.field_0x8,
             *(int *)&(this->MountFlyUpDownStateChangeDel).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->MountFlyUpDownStateChangeDel).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MountFlyUpDownStateChangeDel);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->CurChangeNameMountUIDDel).Delegate.field_0x8,
             *(int *)&(this->CurChangeNameMountUIDDel).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->CurChangeNameMountUIDDel).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->CurChangeNameMountUIDDel);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->CurSelectedMountCategoryTypeDel).Delegate.field_0x8,
             *(int *)&(this->CurSelectedMountCategoryTypeDel).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->CurSelectedMountCategoryTypeDel).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->CurSelectedMountCategoryTypeDel);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->MountDataSlotSelectedChangeDel).Delegate.field_0x8,
             *(int *)&(this->MountDataSlotSelectedChangeDel).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->MountDataSlotSelectedChangeDel).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MountDataSlotSelectedChangeDel);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->SetMountRotationAngleDel).Delegate.field_0x8,
             *(int *)&(this->SetMountRotationAngleDel).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->SetMountRotationAngleDel).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->SetMountRotationAngleDel);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangedSelectedMount).Delegate.field_0x8,
             *(int *)&(this->OnChangedSelectedMount).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnChangedSelectedMount).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangedSelectedMount);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangedMountStep).Delegate.field_0x8,
             *(int *)&(this->OnChangedMountStep).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnChangedMountStep).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangedMountStep);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->UpdateMountExtendedTextDel).Delegate.field_0x8,
             *(int *)&(this->UpdateMountExtendedTextDel).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->UpdateMountExtendedTextDel).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->UpdateMountExtendedTextDel);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->UpdateMountListDel).Delegate.field_0x8,
             *(int *)&(this->UpdateMountListDel).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->UpdateMountListDel).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->UpdateMountListDel);
  (this->OnChangedMountStatus_Filtered)._padding_ =
       (longlong)&___7__FDS_FilteredEventDelegate___CBW4EDS_StatusType____V__6B_;
  pUVar2 = UDS_EventManager::GetInst();
  if (pUVar2 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate
              (pUVar2,(FDS_IDelegateCleanable *)&this->OnChangedMountStatus_Filtered);
  }
  TSet<TTuple<enum_EDS_StatusType_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset(&(this->OnChangedMountStatus_Filtered).Subscriptions);
  *(undefined4 *)&(this->OnChangedMountStatus_Filtered).Subscriptions.field_0x48 = 0;
  pvVar1 = *(void **)&(this->OnChangedMountStatus_Filtered).Subscriptions.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->OnChangedMountStatus_Filtered).Subscriptions);
  (this->OnChangedMountStep_Filtered)._padding_ =
       (longlong)&___7__FDS_FilteredEventDelegate___CBW4EDS_MountStep__AEBVFDS_MountStepInfo____6B_;
  pUVar2 = UDS_EventManager::GetInst();
  if (pUVar2 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate
              (pUVar2,(FDS_IDelegateCleanable *)&this->OnChangedMountStep_Filtered);
  }
  TSet<TTuple<enum_EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset(&(this->OnChangedMountStep_Filtered).Subscriptions);
  *(undefined4 *)&(this->OnChangedMountStep_Filtered).Subscriptions.field_0x48 = 0;
  pvVar1 = *(void **)&(this->OnChangedMountStep_Filtered).Subscriptions.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->OnChangedMountStep_Filtered).Subscriptions);
  (this->OnMountOwnerChanged_Filtered)._padding_ =
       (longlong)&___7__FDS_FilteredEventDelegate___CB_KAEB_K__6B_;
  pUVar2 = UDS_EventManager::GetInst();
  if (pUVar2 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate
              (pUVar2,(FDS_IDelegateCleanable *)&this->OnMountOwnerChanged_Filtered);
  }
  TSet<TTuple<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
           *)&(this->OnMountOwnerChanged_Filtered).Subscriptions);
  *(undefined4 *)&(this->OnMountOwnerChanged_Filtered).Subscriptions.field_0x48 = 0;
  pvVar1 = *(void **)&(this->OnMountOwnerChanged_Filtered).Subscriptions.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->OnMountOwnerChanged_Filtered).Subscriptions);
  UDS_EventBase::~UDS_EventBase((UDS_EventBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b504720

UClass * __cdecl UDS_MountEvent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MountEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MountEvent",
               &Z_Registration_Info_UClass_UDS_MountEvent.InnerSingleton,
               StaticRegisterNativesUDS_MountEvent,0x2b0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_MountEvent>,InternalVTableHelperCtorCaller<UDS_MountEvent>,
               local_res8,UDS_EventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MountEvent.InnerSingleton;
}

// StaticRegisterNativesUDS_MountEvent @ 14b505b30

void __cdecl UDS_MountEvent::StaticRegisterNativesUDS_MountEvent(void)

{
  return;
}

// GetEvent @ 14b8319b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_MountEvent * __cdecl UDS_MountEvent::GetEvent(void)

{
  UDS_EventManager *this;
  UDS_LogManager *pUVar1;
  UDS_MountEvent *pUVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this = UDS_EventManager::GetInst();
  if (this != (UDS_EventManager *)0x0) {
    if ((char)this->_padding_ != '\x01') {
      pUVar2 = UDS_EventManager::GetEventInternal<UDS_MountEvent>(this);
      return pUVar2;
    }
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_EventManager::GetEvent",0x1a,Yes);
      UDS_LogManager::PrintLog
                (pUVar1,1,Warning,local_138.Ptr,0x31,
                 L"Cannot access event during UDS_EventManager destruction.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return (UDS_MountEvent *)0x0;
}

