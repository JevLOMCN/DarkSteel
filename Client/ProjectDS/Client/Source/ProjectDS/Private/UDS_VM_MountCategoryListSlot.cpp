// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// SetClickSlotEvent_WrapperImpl @ 14b6a28e0

void __cdecl
UDS_VM_MountCategoryListSlot::SetClickSlotEvent_WrapperImpl(void *param_1,void *param_2)

{
  UDS_MountEvent *pUVar1;
  
  pUVar1 = UDS_MountEvent::GetEvent();
  if (pUVar1 != (UDS_MountEvent *)0x0) {
    FDS_EventDelegate<int_const_>::Broadcast
              (&pUVar1->CurSelectedMountCategoryTypeDel,*(int *)((longlong)param_1 + 200));
    return;
  }
  return;
}

// StaticClass @ 14b6a28f0

UClass * __cdecl UDS_VM_MountCategoryListSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_MountCategoryListSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_MountCategoryListSlot",
               &Z_Registration_Info_UClass_UDS_VM_MountCategoryListSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_MountCategoryListSlot,0xd0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_MountCategoryListSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_MountCategoryListSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_MountCategoryListSlot.InnerSingleton;
}

// UDS_VM_MountCategoryListSlot @ 14b6a5110

UDS_VM_MountCategoryListSlot * __thiscall
UDS_VM_MountCategoryListSlot::UDS_VM_MountCategoryListSlot
          (UDS_VM_MountCategoryListSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_MountCategoryListSlot__6B_;
  *(undefined8 *)&(this->ClickSlotEvent).Delegate = 0;
  *(undefined8 *)&(this->ClickSlotEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickSlotEvent).Delegate.field_0x10 = 0;
  this->IconID = 0;
  this->IsChecked = false;
  this->CurCategoryType = 0;
  (this->ClickSlotEvent)._padding_ = '\0';
  (this->ClickSlotEvent).bIsCustomSelected = false;
  (this->ClickSlotEvent).bIsLacked = false;
  (this->ClickSlotEvent).bIsCustomDisabled = false;
  return this;
}

// UDS_VM_MountCategoryListSlot @ 14b6a5180

UDS_VM_MountCategoryListSlot * __thiscall
UDS_VM_MountCategoryListSlot::UDS_VM_MountCategoryListSlot
          (UDS_VM_MountCategoryListSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_MountCategoryListSlot__6B_;
  *(undefined8 *)&(this->ClickSlotEvent).Delegate = 0;
  *(undefined8 *)&(this->ClickSlotEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickSlotEvent).Delegate.field_0x10 = 0;
  this->IconID = 0;
  this->IsChecked = false;
  this->CurCategoryType = 0;
  (this->ClickSlotEvent)._padding_ = '\0';
  (this->ClickSlotEvent).bIsCustomSelected = false;
  (this->ClickSlotEvent).bIsLacked = false;
  (this->ClickSlotEvent).bIsCustomDisabled = false;
  return this;
}

// ~UDS_VM_MountCategoryListSlot @ 14b6a7120

void __thiscall
UDS_VM_MountCategoryListSlot::~UDS_VM_MountCategoryListSlot(UDS_VM_MountCategoryListSlot *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_MountCategoryListSlot__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickSlotEvent).Delegate);
  pvVar1 = *(void **)&(this->ClickSlotEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickSlotEvent).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6a97f0

IClassDescriptor * __thiscall
UDS_VM_MountCategoryListSlot::GetFieldNotificationDescriptor(UDS_VM_MountCategoryListSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_MountCategoryListSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2
             ::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6aa100

UClass * __cdecl UDS_VM_MountCategoryListSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_MountCategoryListSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_MountCategoryListSlot",
               &Z_Registration_Info_UClass_UDS_VM_MountCategoryListSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_MountCategoryListSlot,0xd0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_MountCategoryListSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_MountCategoryListSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_MountCategoryListSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_MountCategoryListSlot @ 14b6aac70

void __cdecl UDS_VM_MountCategoryListSlot::StaticRegisterNativesUDS_VM_MountCategoryListSlot(void)

{
  return;
}

// BindModel @ 14bed8030

void __thiscall UDS_VM_MountCategoryListSlot::BindModel(UDS_VM_MountCategoryListSlot *this)

{
  UDS_MountEvent *pUVar1;
  
  pUVar1 = UDS_MountEvent::GetEvent();
  if (pUVar1 != (UDS_MountEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->CurSelectedMountCategoryTypeDel,this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_MountCategoryListSlot>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->CurSelectedMountCategoryTypeDel,
               (UDS_VM_MountCategoryListSlot *)&stack0x00000010,(pmf_6690a1f8 *)this);
  }
  return;
}

// InitViewModel @ 14bef3200

void __thiscall UDS_VM_MountCategoryListSlot::InitViewModel(UDS_VM_MountCategoryListSlot *this)

{
  return;
}

// OnClickSlot @ 14befb330

void __thiscall
UDS_VM_MountCategoryListSlot::OnClickSlot
          (UDS_VM_MountCategoryListSlot *this,FDS_ButtonEventField *param_1)

{
  UDS_MountEvent *pUVar1;
  
  pUVar1 = UDS_MountEvent::GetEvent();
  if (pUVar1 != (UDS_MountEvent *)0x0) {
    FDS_EventDelegate<int_const_>::Broadcast
              (&pUVar1->CurSelectedMountCategoryTypeDel,this->CurCategoryType);
    return;
  }
  return;
}

// OnSelectedCurCategory @ 14bf042a0

void __thiscall
UDS_VM_MountCategoryListSlot::OnSelectedCurCategory(UDS_VM_MountCategoryListSlot *this,int param_1)

{
  bool bVar1;
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsChecked.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsChecked.FieldName;
  bVar1 = this->CurCategoryType == param_1;
  if (this->IsChecked != bVar1) {
    this->IsChecked = bVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnSetViewModel @ 14bf05f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_MountCategoryListSlot::OnSetViewModel
          (UDS_VM_MountCategoryListSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  UDS_LogManager *pUVar6;
  undefined1 auStackY_1a8 [32];
  FName local_178;
  int local_170;
  FName local_168;
  int local_160;
  TSharedPtr<FDS_ViewModelContext_MountCategoryListItem,1> local_158;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_148.Object = param_1->Object;
  local_148.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_MountCategoryListItem>(&local_158,&local_148);
  if (local_158.Object == (FDS_ViewModelContext_MountCategoryListItem *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4803026802874253327>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Mount\\DS_VM_MountCategoryListSlot.cpp"
                       ,0xf,"false");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_MountCategoryListSlot::OnSetViewModel",0x2c,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_138.Ptr,0x10,L"context is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    iVar1 = (local_158.Object)->CurIndex;
    this->CurCategoryType = iVar1;
    this->IconID = (local_158.Object)->IconID;
    FVar4 = FFieldNotificationClassDescriptor::IsChecked.FieldName;
    bVar5 = iVar1 == (local_158.Object)->CurSelectedIndex;
    if (this->IsChecked != bVar5) {
      local_170 = FFieldNotificationClassDescriptor::IsChecked.BitNumber;
      this->IsChecked = bVar5;
      local_178 = FVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_178);
    }
    local_160 = FFieldNotificationClassDescriptor::IconID.BitNumber;
    local_168 = FFieldNotificationClassDescriptor::IconID.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UnbindModel @ 14bf1e060

void __thiscall UDS_VM_MountCategoryListSlot::UnbindModel(UDS_VM_MountCategoryListSlot *this)

{
  UDS_MountEvent *pUVar1;
  
  pUVar1 = UDS_MountEvent::GetEvent();
  if (pUVar1 != (UDS_MountEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->CurSelectedMountCategoryTypeDel,this);
    return;
  }
  return;
}

