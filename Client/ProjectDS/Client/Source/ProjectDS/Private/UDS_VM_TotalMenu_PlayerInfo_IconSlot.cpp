// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// SetIconID_WrapperImpl @ 14b6ee960

void __cdecl
UDS_VM_TotalMenu_PlayerInfo_IconSlot::SetIconID_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined4 *)((longlong)param_1 + 0xa0) = *(undefined4 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::IconID.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IconID.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetbHasIcon_WrapperImpl @ 14b6ee970

void __cdecl
UDS_VM_TotalMenu_PlayerInfo_IconSlot::SetbHasIcon_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0xa4) = *(undefined1 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::bHasIcon.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::bHasIcon.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// StaticClass @ 14b6ee980

UClass * __cdecl UDS_VM_TotalMenu_PlayerInfo_IconSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_TotalMenu_PlayerInfo_IconSlot.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_TotalMenu_PlayerInfo_IconSlot",
               &Z_Registration_Info_UClass_UDS_VM_TotalMenu_PlayerInfo_IconSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_TotalMenu_PlayerInfo_IconSlot,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_TotalMenu_PlayerInfo_IconSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_TotalMenu_PlayerInfo_IconSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_TotalMenu_PlayerInfo_IconSlot.InnerSingleton;
}

// UDS_VM_TotalMenu_PlayerInfo_IconSlot @ 14b6f2d50

UDS_VM_TotalMenu_PlayerInfo_IconSlot * __thiscall
UDS_VM_TotalMenu_PlayerInfo_IconSlot::UDS_VM_TotalMenu_PlayerInfo_IconSlot
          (UDS_VM_TotalMenu_PlayerInfo_IconSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_TotalMenu_PlayerInfo_IconSlot__6B_;
  return this;
}

// UDS_VM_TotalMenu_PlayerInfo_IconSlot @ 14b6f2d90

UDS_VM_TotalMenu_PlayerInfo_IconSlot * __thiscall
UDS_VM_TotalMenu_PlayerInfo_IconSlot::UDS_VM_TotalMenu_PlayerInfo_IconSlot
          (UDS_VM_TotalMenu_PlayerInfo_IconSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_TotalMenu_PlayerInfo_IconSlot__6B_;
  return this;
}

// ~UDS_VM_TotalMenu_PlayerInfo_IconSlot @ 14b6f46a0

void __thiscall
UDS_VM_TotalMenu_PlayerInfo_IconSlot::~UDS_VM_TotalMenu_PlayerInfo_IconSlot
          (UDS_VM_TotalMenu_PlayerInfo_IconSlot *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_TotalMenu_PlayerInfo_IconSlot__6B_;
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6f6f50

IClassDescriptor * __thiscall
UDS_VM_TotalMenu_PlayerInfo_IconSlot::GetFieldNotificationDescriptor
          (UDS_VM_TotalMenu_PlayerInfo_IconSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_TotalMenu_PlayerInfo_IconSlot::FFieldNotificationClassDescriptor::
             GetDescriptor'::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6f7ae0

UClass * __cdecl UDS_VM_TotalMenu_PlayerInfo_IconSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_TotalMenu_PlayerInfo_IconSlot.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_TotalMenu_PlayerInfo_IconSlot",
               &Z_Registration_Info_UClass_UDS_VM_TotalMenu_PlayerInfo_IconSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_TotalMenu_PlayerInfo_IconSlot,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_TotalMenu_PlayerInfo_IconSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_TotalMenu_PlayerInfo_IconSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_TotalMenu_PlayerInfo_IconSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_TotalMenu_PlayerInfo_IconSlot @ 14b6f84c0

void __cdecl
UDS_VM_TotalMenu_PlayerInfo_IconSlot::StaticRegisterNativesUDS_VM_TotalMenu_PlayerInfo_IconSlot
          (void)

{
  return;
}

// OnSetViewModel @ 14bf6f000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_TotalMenu_PlayerInfo_IconSlot::OnSetViewModel
          (UDS_VM_TotalMenu_PlayerInfo_IconSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  UDS_LogManager *pUVar2;
  FDS_PlayerIconTableRow *pFVar3;
  undefined1 auStackY_1a8 [32];
  FName local_178;
  int local_170;
  FName local_168;
  int local_160;
  TSharedPtr<FDS_ViewModelContext_TotalMenuPlayerInfoIconSlot,1> local_158;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
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
  SafeCast<FDS_ViewModelContext_TotalMenuPlayerInfoIconSlot>(&local_158,&local_148);
  if (local_158.Object == (FDS_ViewModelContext_TotalMenuPlayerInfoIconSlot *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_TotalMenu_PlayerInfo_IconSlot::OnSetViewModel",0x34,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x13,
                 L"FDS_ViewModelContext_TotalMenuPlayerInfoIconSlot is nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    pFVar3 = FDS_PlayerIconTableRow::Get((longlong)(local_158.Object)->PlayerIconID,true);
    if (pFVar3 == (FDS_PlayerIconTableRow *)0x0) {
      this->bHasIcon = false;
    }
    else {
      this->IconID = pFVar3->ID_PlayerIcon;
      local_160 = FFieldNotificationClassDescriptor::IconID.BitNumber;
      local_168 = FFieldNotificationClassDescriptor::IconID.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
      this->bHasIcon = true;
    }
    local_170 = FFieldNotificationClassDescriptor::bHasIcon.BitNumber;
    local_178 = FFieldNotificationClassDescriptor::bHasIcon.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_178);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetIconID @ 14bf7b210

void __thiscall
UDS_VM_TotalMenu_PlayerInfo_IconSlot::SetIconID
          (UDS_VM_TotalMenu_PlayerInfo_IconSlot *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  this->IconID = *param_1;
  local_10 = FFieldNotificationClassDescriptor::IconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IconID.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetbHasIcon @ 14bf823a0

void __thiscall
UDS_VM_TotalMenu_PlayerInfo_IconSlot::SetbHasIcon
          (UDS_VM_TotalMenu_PlayerInfo_IconSlot *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  this->bHasIcon = *param_1;
  local_10 = FFieldNotificationClassDescriptor::bHasIcon.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bHasIcon.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

