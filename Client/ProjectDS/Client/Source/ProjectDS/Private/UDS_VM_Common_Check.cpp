// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// SetOnChangedCheckState_WrapperImpl @ 14b61b030

void __cdecl UDS_VM_Common_Check::SetOnChangedCheckState_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  bool bVar3;
  FReadAccessScope FStack_28;
  
  bVar3 = *(char *)((longlong)param_1 + 200) == '\0';
  uVar1 = *(undefined4 *)((longlong)param_1 + 0xc4);
  *(bool *)((longlong)param_1 + 200) = bVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0xa8),
             &FStack_28);
  if ((*(int *)((longlong)param_1 + 0xb8) != 0) &&
     (plVar2 = *(longlong **)((longlong)param_1 + 0xb0), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x68))(plVar2,uVar1,bVar3);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&FStack_28);
  return;
}

// StaticClass @ 14b61b040

UClass * __cdecl UDS_VM_Common_Check::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Common_Check.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Common_Check",
               &Z_Registration_Info_UClass_UDS_VM_Common_Check.InnerSingleton,
               StaticRegisterNativesUDS_VM_Common_Check,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Common_Check>,
               InternalVTableHelperCtorCaller<UDS_VM_Common_Check>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Common_Check.InnerSingleton;
}

// UDS_VM_Common_Check @ 14b620f30

UDS_VM_Common_Check * __thiscall
UDS_VM_Common_Check::UDS_VM_Common_Check(UDS_VM_Common_Check *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Common_Check__6B_;
  *(undefined8 *)&this->OnDelegateChangedCheckState = 0;
  *(undefined8 *)&(this->OnDelegateChangedCheckState).field_0x8 = 0;
  *(undefined4 *)&(this->OnDelegateChangedCheckState).field_0x10 = 0;
  this->FilterIndex = 0;
  this->FilterValue = false;
  (this->OnChangedCheckState).bIsActivate = false;
  return this;
}

// UDS_VM_Common_Check @ 14b620fa0

UDS_VM_Common_Check * __thiscall
UDS_VM_Common_Check::UDS_VM_Common_Check(UDS_VM_Common_Check *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Common_Check__6B_;
  *(undefined8 *)&this->OnDelegateChangedCheckState = 0;
  *(undefined8 *)&(this->OnDelegateChangedCheckState).field_0x8 = 0;
  *(undefined4 *)&(this->OnDelegateChangedCheckState).field_0x10 = 0;
  this->FilterIndex = 0;
  this->FilterValue = false;
  (this->OnChangedCheckState).bIsActivate = false;
  return this;
}

// ~UDS_VM_Common_Check @ 14b621cf0

void __thiscall UDS_VM_Common_Check::~UDS_VM_Common_Check(UDS_VM_Common_Check *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Common_Check__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDelegateChangedCheckState);
  pvVar1 = *(void **)&(this->OnDelegateChangedCheckState).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDelegateChangedCheckState);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b623ce0

IClassDescriptor * __thiscall
UDS_VM_Common_Check::GetFieldNotificationDescriptor(UDS_VM_Common_Check *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Common_Check::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6247f0

UClass * __cdecl UDS_VM_Common_Check::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Common_Check.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Common_Check",
               &Z_Registration_Info_UClass_UDS_VM_Common_Check.InnerSingleton,
               StaticRegisterNativesUDS_VM_Common_Check,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Common_Check>,
               InternalVTableHelperCtorCaller<UDS_VM_Common_Check>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Common_Check.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Common_Check @ 14b624c20

void __cdecl UDS_VM_Common_Check::StaticRegisterNativesUDS_VM_Common_Check(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_Common_Check_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execIsChecked @ 14b6258f0

void __cdecl UDS_VM_Common_Check::execIsChecked(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsChecked((UDS_VM_Common_Check *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// IsChecked @ 14bdc7c60

bool __thiscall UDS_VM_Common_Check::IsChecked(UDS_VM_Common_Check *this)

{
  return this->FilterValue;
}

// OnSetViewModel @ 14bdd7320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Common_Check::OnSetViewModel
          (UDS_VM_Common_Check *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  bool bVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_218 [32];
  FName local_1e8;
  int local_1e0;
  undefined1 local_1d8 [8];
  ForAnyElementType local_1d0;
  int local_1c8;
  FName local_1b8;
  int local_1b0;
  TSharedPtr<FDS_ViewModelContext_CommonCheck,1> local_1a8;
  TSharedPtr<FDS_ViewModelContext,1> local_198;
  FDestructionSentinel local_188;
  FReadAccessScope local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_218;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_198.Object = param_1->Object;
  local_198.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_198.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_CommonCheck>(&local_1a8,&local_198);
  if (local_1a8.Object == (FDS_ViewModelContext_CommonCheck *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_Common_Check::OnSetViewModel",0x23,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_158.Ptr,0xf,
                 L"FDS_ViewModelContext_CommonCheckText is nullptr");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    this->FilterIndex = (local_1a8.Object)->Index;
    bVar1 = (local_1a8.Object)->Value;
    this->FilterValue = bVar1;
    if ((local_1a8.Object)->Disabled == false) {
      this->SwitcherIndex = 0;
    }
    else if (bVar1 == false) {
      this->SwitcherIndex = 2;
    }
    else {
      this->SwitcherIndex = 1;
    }
    local_1e0 = FFieldNotificationClassDescriptor::SwitcherIndex.BitNumber;
    local_1e8 = FFieldNotificationClassDescriptor::SwitcherIndex.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1e8);
    local_1b0 = FFieldNotificationClassDescriptor::IsChecked.BitNumber;
    local_1b8 = FFieldNotificationClassDescriptor::IsChecked.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
    if (&(local_1a8.Object)->OnDelegateChangedCheckState != &this->OnDelegateChangedCheckState) {
      local_1d8 = (undefined1  [8])0x0;
      local_1d0.Data = (FScriptContainerElement *)0x0;
      local_1c8 = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &(local_1a8.Object)->OnDelegateChangedCheckState,&local_170);
      if ((*(int *)&((local_1a8.Object)->OnDelegateChangedCheckState).field_0x10 != 0) &&
         (plVar3 = *(longlong **)&((local_1a8.Object)->OnDelegateChangedCheckState).field_0x8,
         plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x50))(plVar3,local_1d8);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_170);
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDelegateChangedCheckState,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1d8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1d8,
                 (FWriteAccessScope *)&local_188);
      if ((local_1c8 != 0) && (local_1d0.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_1d0.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1d0,0,0,0x10);
        local_1c8 = 0;
      }
      if (local_188.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_188.Accessor,&local_188);
      }
      if (local_1d0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d0.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_1d8);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnWidgetEventFieldChangedCheckState @ 14bde11b0

void __thiscall
UDS_VM_Common_Check::OnWidgetEventFieldChangedCheckState
          (UDS_VM_Common_Check *this,FDS_WidgetEventField *param_1)

{
  uint uVar1;
  longlong *plVar2;
  bool bVar3;
  FReadAccessScope local_28;
  
  bVar3 = this->FilterValue == false;
  uVar1 = this->FilterIndex;
  this->FilterValue = bVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnDelegateChangedCheckState,&local_28);
  if ((*(int *)&(this->OnDelegateChangedCheckState).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->OnDelegateChangedCheckState).field_0x8,
     plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x68))(plVar2,uVar1,bVar3);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// SetChecked @ 14bde4020

void __thiscall UDS_VM_Common_Check::SetChecked(UDS_VM_Common_Check *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  this->FilterValue = param_1;
  local_10 = FFieldNotificationClassDescriptor::IsChecked.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsChecked.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetSwitcherIndex @ 14bde9050

void __thiscall UDS_VM_Common_Check::SetSwitcherIndex(UDS_VM_Common_Check *this,int param_1)

{
  FName local_18;
  int local_10;
  
  this->SwitcherIndex = param_1;
  local_10 = FFieldNotificationClassDescriptor::SwitcherIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SwitcherIndex.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

