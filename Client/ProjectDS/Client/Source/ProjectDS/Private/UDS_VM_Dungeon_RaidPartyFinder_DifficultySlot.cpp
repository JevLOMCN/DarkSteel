// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// SetClickedEventField_WrapperImpl @ 14b635fd0

void __cdecl
UDS_VM_Dungeon_RaidPartyFinder_DifficultySlot::SetClickedEventField_WrapperImpl
          (void *param_1,void *param_2)

{
  return;
}

// SetCheckStateChangeEventField_WrapperImpl @ 14b635fe0

void __cdecl
UDS_VM_Dungeon_RaidPartyFinder_DifficultySlot::SetCheckStateChangeEventField_WrapperImpl
          (void *param_1,void *param_2)

{
  return;
}

// SetbIsSelected_WrapperImpl @ 14b635ff0

void __cdecl
UDS_VM_Dungeon_RaidPartyFinder_DifficultySlot::SetbIsSelected_WrapperImpl
          (void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
  if (*(char *)((longlong)param_1 + 0xc1) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0xc1) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetDifficultyNameID_WrapperImpl @ 14b636000

void __cdecl
UDS_VM_Dungeon_RaidPartyFinder_DifficultySlot::SetDifficultyNameID_WrapperImpl
          (void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::DifficultyNameID.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::DifficultyNameID.FieldName;
  if (*(int *)((longlong)param_1 + 0xc4) != *(int *)param_2) {
    *(int *)((longlong)param_1 + 0xc4) = *(int *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// StaticClass @ 14b636010

UClass * __cdecl UDS_VM_Dungeon_RaidPartyFinder_DifficultySlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidPartyFinder_DifficultySlot.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Dungeon_RaidPartyFinder_DifficultySlot",
               &Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidPartyFinder_DifficultySlot.
                InnerSingleton,StaticRegisterNativesUDS_VM_Dungeon_RaidPartyFinder_DifficultySlot,
               200,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_Dungeon_RaidPartyFinder_DifficultySlot>,
               InternalVTableHelperCtorCaller<UDS_VM_Dungeon_RaidPartyFinder_DifficultySlot>,
               local_res8,UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidPartyFinder_DifficultySlot.InnerSingleton;
}

// UDS_VM_Dungeon_RaidPartyFinder_DifficultySlot @ 14b63b8d0

UDS_VM_Dungeon_RaidPartyFinder_DifficultySlot * __thiscall
UDS_VM_Dungeon_RaidPartyFinder_DifficultySlot::UDS_VM_Dungeon_RaidPartyFinder_DifficultySlot
          (UDS_VM_Dungeon_RaidPartyFinder_DifficultySlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_RaidPartyFinder_DifficultySlot__6B_;
  *(undefined8 *)&(this->ClickedEventField).Delegate = 0;
  *(undefined8 *)&(this->ClickedEventField).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickedEventField).Delegate.field_0x10 = 0;
  (this->CheckStateChangeEventField).bIsActivate = false;
  (this->ClickedEventField)._padding_ = '\0';
  (this->ClickedEventField).bIsCustomSelected = false;
  (this->ClickedEventField).bIsLacked = false;
  (this->ClickedEventField).bIsCustomDisabled = false;
  return this;
}

// UDS_VM_Dungeon_RaidPartyFinder_DifficultySlot @ 14b63b940

UDS_VM_Dungeon_RaidPartyFinder_DifficultySlot * __thiscall
UDS_VM_Dungeon_RaidPartyFinder_DifficultySlot::UDS_VM_Dungeon_RaidPartyFinder_DifficultySlot
          (UDS_VM_Dungeon_RaidPartyFinder_DifficultySlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_RaidPartyFinder_DifficultySlot__6B_;
  *(undefined8 *)&(this->ClickedEventField).Delegate = 0;
  *(undefined8 *)&(this->ClickedEventField).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickedEventField).Delegate.field_0x10 = 0;
  (this->CheckStateChangeEventField).bIsActivate = false;
  (this->ClickedEventField)._padding_ = '\0';
  (this->ClickedEventField).bIsCustomSelected = false;
  (this->ClickedEventField).bIsLacked = false;
  (this->ClickedEventField).bIsCustomDisabled = false;
  return this;
}

// ~UDS_VM_Dungeon_RaidPartyFinder_DifficultySlot @ 14b63d100

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_DifficultySlot::~UDS_VM_Dungeon_RaidPartyFinder_DifficultySlot
          (UDS_VM_Dungeon_RaidPartyFinder_DifficultySlot *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_RaidPartyFinder_DifficultySlot__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickedEventField).Delegate);
  pvVar1 = *(void **)&(this->ClickedEventField).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickedEventField).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b63f920

IClassDescriptor * __thiscall
UDS_VM_Dungeon_RaidPartyFinder_DifficultySlot::GetFieldNotificationDescriptor
          (UDS_VM_Dungeon_RaidPartyFinder_DifficultySlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Dungeon_RaidPartyFinder_DifficultySlot::FFieldNotificationClassDescriptor::
             GetDescriptor'::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b640690

UClass * __cdecl UDS_VM_Dungeon_RaidPartyFinder_DifficultySlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidPartyFinder_DifficultySlot.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Dungeon_RaidPartyFinder_DifficultySlot",
               &Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidPartyFinder_DifficultySlot.
                InnerSingleton,StaticRegisterNativesUDS_VM_Dungeon_RaidPartyFinder_DifficultySlot,
               200,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_Dungeon_RaidPartyFinder_DifficultySlot>,
               InternalVTableHelperCtorCaller<UDS_VM_Dungeon_RaidPartyFinder_DifficultySlot>,
               local_res8,UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidPartyFinder_DifficultySlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Dungeon_RaidPartyFinder_DifficultySlot @ 14b640c00

void __cdecl
UDS_VM_Dungeon_RaidPartyFinder_DifficultySlot::
StaticRegisterNativesUDS_VM_Dungeon_RaidPartyFinder_DifficultySlot(void)

{
  return;
}

// BindModel @ 14be111a0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_DifficultySlot::BindModel
          (UDS_VM_Dungeon_RaidPartyFinder_DifficultySlot *this)

{
  UDS_LanguageManager *pUVar1;
  
  if ((0 < (int)this->_padding_) &&
     (pUVar1 = UDS_LanguageManager::GetInst(), pUVar1 != (UDS_LanguageManager *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_ViewModelBase>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnLanguageChanged,(UDS_ViewModelBase *)&stack0x00000008,(pmf_620f4446 *)this
              );
  }
  return;
}

// OnCheckStateChangeEventField @ 14be2be80

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_DifficultySlot::OnCheckStateChangeEventField
          (UDS_VM_Dungeon_RaidPartyFinder_DifficultySlot *this,FDS_WidgetEventField *param_1)

{
  return;
}

// OnClickedEventField @ 14be2ce90

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_DifficultySlot::OnClickedEventField
          (UDS_VM_Dungeon_RaidPartyFinder_DifficultySlot *this,FDS_ButtonEventField *param_1)

{
  return;
}

// OnSetViewModel @ 14be335b0

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_DifficultySlot::OnSetViewModel
          (UDS_VM_Dungeon_RaidPartyFinder_DifficultySlot *this,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  int iVar3;
  FName local_18;
  int local_10;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  iVar3 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
  if (this->bIsSelected != false) {
    this->bIsSelected = false;
    local_10 = iVar3;
    local_18 = FVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetDifficultyNameID @ 14be4ac30

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_DifficultySlot::SetDifficultyNameID
          (UDS_VM_Dungeon_RaidPartyFinder_DifficultySlot *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::DifficultyNameID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::DifficultyNameID.FieldName;
  if (this->DifficultyNameID != *param_1) {
    this->DifficultyNameID = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetIsSelected @ 14be4cae0

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_DifficultySlot::SetIsSelected
          (UDS_VM_Dungeon_RaidPartyFinder_DifficultySlot *this,bool *param_1)

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

// UnbindModel @ 14be551f0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_DifficultySlot::UnbindModel
          (UDS_VM_Dungeon_RaidPartyFinder_DifficultySlot *this)

{
  UDS_LanguageManager *pUVar1;
  
  pUVar1 = UDS_LanguageManager::GetInst();
  if (pUVar1 != (UDS_LanguageManager *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnLanguageChanged,this
              );
  }
  return;
}

