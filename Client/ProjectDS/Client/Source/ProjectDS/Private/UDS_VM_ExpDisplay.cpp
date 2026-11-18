// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b643b60

UClass * __cdecl UDS_VM_ExpDisplay::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ExpDisplay.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ExpDisplay",
               &Z_Registration_Info_UClass_UDS_VM_ExpDisplay.InnerSingleton,
               StaticRegisterNativesUDS_VM_ExpDisplay,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_ExpDisplay>,
               InternalVTableHelperCtorCaller<UDS_VM_ExpDisplay>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ExpDisplay.InnerSingleton;
}

// UDS_VM_ExpDisplay @ 14b6481a0

UDS_VM_ExpDisplay * __thiscall
UDS_VM_ExpDisplay::UDS_VM_ExpDisplay(UDS_VM_ExpDisplay *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ExpDisplay__6B_;
  return this;
}

// UDS_VM_ExpDisplay @ 14b6481e0

UDS_VM_ExpDisplay * __thiscall
UDS_VM_ExpDisplay::UDS_VM_ExpDisplay(UDS_VM_ExpDisplay *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ExpDisplay__6B_;
  return this;
}

// ~UDS_VM_ExpDisplay @ 14b649560

void __thiscall UDS_VM_ExpDisplay::~UDS_VM_ExpDisplay(UDS_VM_ExpDisplay *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ExpDisplay__6B_;
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b64b0f0

IClassDescriptor * __thiscall
UDS_VM_ExpDisplay::GetFieldNotificationDescriptor(UDS_VM_ExpDisplay *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_ExpDisplay::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b64b990

UClass * __cdecl UDS_VM_ExpDisplay::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ExpDisplay.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ExpDisplay",
               &Z_Registration_Info_UClass_UDS_VM_ExpDisplay.InnerSingleton,
               StaticRegisterNativesUDS_VM_ExpDisplay,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_ExpDisplay>,
               InternalVTableHelperCtorCaller<UDS_VM_ExpDisplay>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ExpDisplay.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_ExpDisplay @ 14b64bf50

void __cdecl UDS_VM_ExpDisplay::StaticRegisterNativesUDS_VM_ExpDisplay(void)

{
  return;
}

// OnSetViewModel @ 14bddc070

void __thiscall
UDS_VM_ExpDisplay::OnSetViewModel
          (UDS_VM_ExpDisplay *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FName FVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  FDS_CommonContentsInfoTableRow *this_00;
  FName local_58;
  int local_50;
  FName local_48;
  int local_40;
  FName local_38;
  int local_30;
  TSharedPtr<FDS_ViewModelContext_Exp,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
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
  SafeCast<FDS_ViewModelContext_Exp>(&local_28,&local_18);
  if (local_28.Object == (FDS_ViewModelContext_Exp *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  else {
    this->Exp = (local_28.Object)->Exp;
    iVar4 = UDS_ViewModelBase::FFieldNotificationClassDescriptor::Visibility.BitNumber;
    FVar3 = UDS_ViewModelBase::FFieldNotificationClassDescriptor::Visibility.FieldName;
    cVar5 = '\x04';
    if ((local_28.Object)->IsHideDisplay == true) {
      cVar5 = '\x01';
    }
    iVar1 = (local_28.Object)->CommonContentsType;
    if ((char)this->_padding_ != cVar5) {
      *(char *)&this->_padding_ = cVar5;
      local_50 = iVar4;
      local_58 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
    }
    this_00 = FDS_CommonContentsInfoTableRow::GetRef((longlong)iVar1,true);
    bVar6 = FDS_CommonContentsInfoTableRow::IsValid(this_00);
    if (bVar6) {
      this->ExpIconID = this_00->ID_Icon;
    }
    local_40 = FFieldNotificationClassDescriptor::ExpIconID.BitNumber;
    local_48 = FFieldNotificationClassDescriptor::ExpIconID.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
    local_30 = FFieldNotificationClassDescriptor::Exp.BitNumber;
    local_38 = FFieldNotificationClassDescriptor::Exp.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

