// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// SetIsSelectedDeckSwitcher_WrapperImpl @ 14b754560

void __cdecl
UDS_VM_W_RingCmd_RingDeck::SetIsSelectedDeckSwitcher_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::IsSelectedDeckSwitcher.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsSelectedDeckSwitcher.FieldName;
  if (*(int *)((longlong)param_1 + 0xa0) != *(int *)param_2) {
    *(int *)((longlong)param_1 + 0xa0) = *(int *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// StaticClass @ 14b754570

UClass * __cdecl UDS_VM_W_RingCmd_RingDeck::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_RingCmd_RingDeck.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_RingCmd_RingDeck",
               &Z_Registration_Info_UClass_UDS_VM_W_RingCmd_RingDeck.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_RingCmd_RingDeck,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_RingCmd_RingDeck>,
               InternalVTableHelperCtorCaller<UDS_VM_W_RingCmd_RingDeck>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_RingCmd_RingDeck.InnerSingleton;
}

// UDS_VM_W_RingCmd_RingDeck @ 14b758770

UDS_VM_W_RingCmd_RingDeck * __thiscall
UDS_VM_W_RingCmd_RingDeck::UDS_VM_W_RingCmd_RingDeck
          (UDS_VM_W_RingCmd_RingDeck *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->IsSelectedDeckSwitcher = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_RingCmd_RingDeck__6B_;
  return this;
}

// UDS_VM_W_RingCmd_RingDeck @ 14b7587c0

UDS_VM_W_RingCmd_RingDeck * __thiscall
UDS_VM_W_RingCmd_RingDeck::UDS_VM_W_RingCmd_RingDeck
          (UDS_VM_W_RingCmd_RingDeck *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->IsSelectedDeckSwitcher = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_RingCmd_RingDeck__6B_;
  return this;
}

// ~UDS_VM_W_RingCmd_RingDeck @ 14b75b250

void __thiscall
UDS_VM_W_RingCmd_RingDeck::~UDS_VM_W_RingCmd_RingDeck(UDS_VM_W_RingCmd_RingDeck *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_RingCmd_RingDeck__6B_;
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b75d9e0

IClassDescriptor * __thiscall
UDS_VM_W_RingCmd_RingDeck::GetFieldNotificationDescriptor(UDS_VM_W_RingCmd_RingDeck *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_RingCmd_RingDeck::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b75e070

UClass * __cdecl UDS_VM_W_RingCmd_RingDeck::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_RingCmd_RingDeck.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_RingCmd_RingDeck",
               &Z_Registration_Info_UClass_UDS_VM_W_RingCmd_RingDeck.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_RingCmd_RingDeck,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_RingCmd_RingDeck>,
               InternalVTableHelperCtorCaller<UDS_VM_W_RingCmd_RingDeck>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_RingCmd_RingDeck.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_RingCmd_RingDeck @ 14b75eec0

void __cdecl UDS_VM_W_RingCmd_RingDeck::StaticRegisterNativesUDS_VM_W_RingCmd_RingDeck(void)

{
  return;
}

// OnSetViewModel @ 14c034b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_RingCmd_RingDeck::OnSetViewModel
          (UDS_VM_W_RingCmd_RingDeck *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FDS_ViewModelContext *pFVar2;
  FName FVar3;
  uint uVar4;
  UDS_LogManager *pUVar5;
  undefined1 auStackY_198 [32];
  FName local_168;
  int local_160;
  TSharedPtr<FDS_ViewModelContext_RingCmd,1> local_158;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_W_RingCmd_RingDeck::OnSetViewModel",0x29,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,0xf,L"InViewModelContext is nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    local_148.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_148.Object = pFVar2;
    SafeCast<FDS_ViewModelContext_RingCmd>(&local_158,&local_148);
    FVar3 = FFieldNotificationClassDescriptor::IsSelectedDeckSwitcher.FieldName;
    if (local_158.Object == (FDS_ViewModelContext_RingCmd *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_VM_W_RingCmd_RingDeck::OnSetViewModel",0x29,Yes);
        UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,0x16,L"context is nullptr");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      uVar4 = (uint)((local_158.Object)->bIsSelected == true);
      if (this->IsSelectedDeckSwitcher != uVar4) {
        local_160 = FFieldNotificationClassDescriptor::IsSelectedDeckSwitcher.BitNumber;
        this->IsSelectedDeckSwitcher = uVar4;
        local_168 = FVar3;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetIsSelectedDeckSwitcher @ 14c041980

void __thiscall
UDS_VM_W_RingCmd_RingDeck::SetIsSelectedDeckSwitcher(UDS_VM_W_RingCmd_RingDeck *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsSelectedDeckSwitcher.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsSelectedDeckSwitcher.FieldName;
  if (this->IsSelectedDeckSwitcher != *param_1) {
    this->IsSelectedDeckSwitcher = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

