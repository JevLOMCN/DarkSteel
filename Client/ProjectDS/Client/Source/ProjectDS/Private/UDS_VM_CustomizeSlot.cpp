// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b627b30

UClass * __cdecl UDS_VM_CustomizeSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_CustomizeSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_CustomizeSlot",
               &Z_Registration_Info_UClass_UDS_VM_CustomizeSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_CustomizeSlot,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_CustomizeSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_CustomizeSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_CustomizeSlot.InnerSingleton;
}

// UDS_VM_CustomizeSlot @ 14b62e530

UDS_VM_CustomizeSlot * __thiscall
UDS_VM_CustomizeSlot::UDS_VM_CustomizeSlot(UDS_VM_CustomizeSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->Value = -1;
  this->SlotIndex = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CustomizeSlot__6B_;
  *(undefined8 *)&(this->BtnEvent_Click).Delegate = 0;
  *(undefined8 *)&(this->BtnEvent_Click).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->BtnEvent_Click).Delegate.field_0x10 = 0;
  this->ComponentTableID = 0;
  (this->ParentList).WeakPtr.ObjectIndex = 0;
  (this->ParentList).WeakPtr.ObjectSerialNumber = 0;
  (this->BtnEvent_Click)._padding_ = '\0';
  (this->BtnEvent_Click).bIsCustomSelected = false;
  (this->BtnEvent_Click).bIsLacked = false;
  (this->BtnEvent_Click).bIsCustomDisabled = false;
  return this;
}

// UDS_VM_CustomizeSlot @ 14b62e5b0

UDS_VM_CustomizeSlot * __thiscall
UDS_VM_CustomizeSlot::UDS_VM_CustomizeSlot(UDS_VM_CustomizeSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->Value = -1;
  this->SlotIndex = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CustomizeSlot__6B_;
  *(undefined8 *)&(this->BtnEvent_Click).Delegate = 0;
  *(undefined8 *)&(this->BtnEvent_Click).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->BtnEvent_Click).Delegate.field_0x10 = 0;
  this->ComponentTableID = 0;
  (this->ParentList).WeakPtr.ObjectIndex = 0;
  (this->ParentList).WeakPtr.ObjectSerialNumber = 0;
  (this->BtnEvent_Click)._padding_ = '\0';
  (this->BtnEvent_Click).bIsCustomSelected = false;
  (this->BtnEvent_Click).bIsLacked = false;
  (this->BtnEvent_Click).bIsCustomDisabled = false;
  return this;
}

// ~UDS_VM_CustomizeSlot @ 14b62f880

void __thiscall UDS_VM_CustomizeSlot::~UDS_VM_CustomizeSlot(UDS_VM_CustomizeSlot *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CustomizeSlot__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->BtnEvent_Click).Delegate);
  pvVar1 = *(void **)&(this->BtnEvent_Click).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->BtnEvent_Click).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b631e50

IClassDescriptor * __thiscall
UDS_VM_CustomizeSlot::GetFieldNotificationDescriptor(UDS_VM_CustomizeSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_CustomizeSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b632d20

UClass * __cdecl UDS_VM_CustomizeSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_CustomizeSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_CustomizeSlot",
               &Z_Registration_Info_UClass_UDS_VM_CustomizeSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_CustomizeSlot,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_CustomizeSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_CustomizeSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_CustomizeSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_CustomizeSlot @ 14b633170

void __cdecl UDS_VM_CustomizeSlot::StaticRegisterNativesUDS_VM_CustomizeSlot(void)

{
  return;
}

// BindModel @ 14c06c350

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_CustomizeSlot::BindModel(UDS_VM_CustomizeSlot *this)

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

// InitViewModel @ 14c08c540

void __thiscall UDS_VM_CustomizeSlot::InitViewModel(UDS_VM_CustomizeSlot *this)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  UDS_VM_CustomizeSlot *local_res8;
  uint uStack_2c;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->BtnEvent_Click).Delegate,(FWriteAccessScope *)&local_28);
  local_10 = &(this->BtnEvent_Click).Delegate.field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy___N__6B_
    ;
    *(undefined1 *)(puVar1 + 1) = 0;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_CustomizeSlot____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy___N__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_CustomizeSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar1[3] = 0;
    local_res8 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_CustomizeSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&local_res8);
    puVar1[4] = OnSlotClick;
    puVar1[5] = (ulonglong)uStack_2c << 0x20;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// OnOtherSlotClicked @ 14c0982c0

void __thiscall
UDS_VM_CustomizeSlot::OnOtherSlotClicked(UDS_VM_CustomizeSlot *this,UObject *param_1)

{
  FName local_18;
  int local_10;
  
  this->bIsSelected = this == (UDS_VM_CustomizeSlot *)param_1;
  local_10 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnSetViewModel @ 14c099480

void __thiscall
UDS_VM_CustomizeSlot::OnSetViewModel
          (UDS_VM_CustomizeSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  uint uVar4;
  UDS_CharacterUIEvent *pUVar5;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  UObject *local_res10 [2];
  TSharedPtr<FDS_ViewModelContext_CustomizeSlot,1> local_48;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  code *local_28;
  ulonglong uStack_20;
  
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
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
  SafeCast<FDS_ViewModelContext_CustomizeSlot>(&local_48,&local_38);
  if (local_48.Object == (FDS_ViewModelContext_CustomizeSlot *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return;
  }
  this->SlotIndex = (local_48.Object)->Index;
  this->Value = (local_48.Object)->Value;
  this->ComponentTableID = (local_48.Object)->ComponentTableID;
  (this->ParentList).WeakPtr = ((local_48.Object)->ParentList).WeakPtr;
  plVar1 = &this->_padding_;
  if (this->IconID != (local_48.Object)->IconID) {
    this->IconID = (local_48.Object)->IconID;
    (**(code **)(*plVar1 + 0x38))(plVar1);
  }
  if (this->bIsSelected != (local_48.Object)->bIsSelected) {
    this->bIsSelected = (local_48.Object)->bIsSelected;
    (**(code **)(*plVar1 + 0x38))(plVar1);
  }
  pUVar5 = UDS_CharacterUIEvent::GetEvent();
  if (pUVar5 != (UDS_CharacterUIEvent *)0x0) {
    bVar3 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals(&this->ParentList,(void *)0x0);
    if (!bVar3) {
      uStack_20 = uStack_20 & 0xffffffff00000000;
      local_28 = OnOtherSlotClicked;
      local_res10[0] = FWeakObjectPtr::Get(&(this->ParentList).WeakPtr);
      uVar4 = ((uint)((ulonglong)local_res10[0] >> 0x14) & 0xffff ^
              (uint)((ulonglong)local_res10[0] >> 4)) * -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                TMapBase<UObject_*,TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>,0>_>
                ::FindOrAddImpl<UObject_*_const_&>
                          ((TMapBase<UObject_*,TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>,0>_>
                            *)&(pUVar5->OnCustomizeComponentSlotClicked).Subscriptions,
                           uVar4 >> 0x10 ^ uVar4,local_res10);
      TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(this_00,this);
      TMulticastDelegateRegistration<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>::
      AddUObject<UDS_VM_CustomizeSlot>
                ((TMulticastDelegateRegistration<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>
                  *)this_00,(UDS_VM_CustomizeSlot *)(local_res10 + 1),(pmf_b00bee92 *)this);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnSlotClick @ 14c09bcb0

void __thiscall
UDS_VM_CustomizeSlot::OnSlotClick(UDS_VM_CustomizeSlot *this,UObject *param_1,bool param_2)

{
  bool bVar1;
  UDS_CharacterUIEvent *pUVar2;
  UObject *local_res20;
  FDS_CustomizeComponentInfo local_28;
  
  pUVar2 = UDS_CharacterUIEvent::GetEvent();
  if (pUVar2 != (UDS_CharacterUIEvent *)0x0) {
    local_28.IntValue = this->Value;
    local_28.Index = this->SlotIndex;
    local_28.TableID = this->ComponentTableID;
    local_28.FloatValue = 0.0;
    local_28.bIsInit = param_2;
    FDS_EventDelegate<int,FDS_CustomizeComponentInfo_const_&>::Broadcast
              (&pUVar2->OnCustomizeComponentInfoChanged,local_28.TableID,&local_28);
    bVar1 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals(&this->ParentList,(void *)0x0);
    if (!bVar1) {
      local_res20 = FWeakObjectPtr::Get(&(this->ParentList).WeakPtr);
      FDS_FilteredEventDelegate<UObject_*,UObject_*>::Broadcast
                (&pUVar2->OnCustomizeComponentSlotClicked,&local_res20,(UObject *)this);
    }
  }
  return;
}

// UnbindModel @ 14c0adb40

void __thiscall UDS_VM_CustomizeSlot::UnbindModel(UDS_VM_CustomizeSlot *this)

{
  bool bVar1;
  UDS_CharacterUIEvent *pUVar2;
  UObject *local_res8;
  
  pUVar2 = UDS_CharacterUIEvent::GetEvent();
  if ((pUVar2 != (UDS_CharacterUIEvent *)0x0) &&
     (bVar1 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals(&this->ParentList,(void *)0x0),
     !bVar1)) {
    local_res8 = FWeakObjectPtr::Get(&(this->ParentList).WeakPtr);
    FDS_FilteredEventDelegate<UObject_*,UObject_*>::Broadcast
              (&pUVar2->OnCustomizeComponentSlotClicked,&local_res8,(UObject *)this);
  }
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  return;
}

