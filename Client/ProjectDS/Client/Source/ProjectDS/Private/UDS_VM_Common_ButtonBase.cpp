// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// SetIconID_WrapperImpl @ 14b61db00

void __cdecl UDS_VM_Common_ButtonBase::SetIconID_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::IconID.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IconID.FieldName;
  if (*(int *)((longlong)param_1 + 0xb8) != *(int *)param_2) {
    *(int *)((longlong)param_1 + 0xb8) = *(int *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetIsVisible_WrapperImpl @ 14b61db10

void __cdecl UDS_VM_Common_ButtonBase::SetIsVisible_WrapperImpl(void *param_1,void *param_2)

{
  SetIsVisible(param_1,*(bool *)param_2);
  return;
}

// SetClickButton_WrapperImpl @ 14b61db20

void __cdecl UDS_VM_Common_ButtonBase::SetClickButton_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  FReadAccessScope FStack_28;
  
  uVar1 = *(undefined4 *)((longlong)param_1 + 0xc0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0xa0),
             &FStack_28);
  if ((*(int *)((longlong)param_1 + 0xb0) != 0) &&
     (plVar2 = *(longlong **)((longlong)param_1 + 0xa8), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x68))(plVar2,uVar1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&FStack_28);
  return;
}

// StaticClass @ 14b61db30

UClass * __cdecl UDS_VM_Common_ButtonBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Common_ButtonBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Common_ButtonBase",
               &Z_Registration_Info_UClass_UDS_VM_Common_ButtonBase.InnerSingleton,
               StaticRegisterNativesUDS_VM_Common_ButtonBase,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Common_ButtonBase>,
               InternalVTableHelperCtorCaller<UDS_VM_Common_ButtonBase>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Common_ButtonBase.InnerSingleton;
}

// UDS_VM_Common_ButtonBase @ 14b620e70

UDS_VM_Common_ButtonBase * __thiscall
UDS_VM_Common_ButtonBase::UDS_VM_Common_ButtonBase
          (UDS_VM_Common_ButtonBase *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Common_ButtonBase__6B_;
  *(undefined8 *)&this->OnClickDelegate = 0;
  *(undefined8 *)&(this->OnClickDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnClickDelegate).field_0x10 = 0;
  return this;
}

// UDS_VM_Common_ButtonBase @ 14b620ed0

UDS_VM_Common_ButtonBase * __thiscall
UDS_VM_Common_ButtonBase::UDS_VM_Common_ButtonBase
          (UDS_VM_Common_ButtonBase *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Common_ButtonBase__6B_;
  *(undefined8 *)&this->OnClickDelegate = 0;
  *(undefined8 *)&(this->OnClickDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnClickDelegate).field_0x10 = 0;
  return this;
}

// ~UDS_VM_Common_ButtonBase @ 14b621c80

void __thiscall UDS_VM_Common_ButtonBase::~UDS_VM_Common_ButtonBase(UDS_VM_Common_ButtonBase *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Common_ButtonBase__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnClickDelegate);
  pvVar1 = *(void **)&(this->OnClickDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClickDelegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b623c70

IClassDescriptor * __thiscall
UDS_VM_Common_ButtonBase::GetFieldNotificationDescriptor(UDS_VM_Common_ButtonBase *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Common_ButtonBase::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b624730

UClass * __cdecl UDS_VM_Common_ButtonBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Common_ButtonBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Common_ButtonBase",
               &Z_Registration_Info_UClass_UDS_VM_Common_ButtonBase.InnerSingleton,
               StaticRegisterNativesUDS_VM_Common_ButtonBase,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Common_ButtonBase>,
               InternalVTableHelperCtorCaller<UDS_VM_Common_ButtonBase>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Common_ButtonBase.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Common_ButtonBase @ 14b624c10

void __cdecl UDS_VM_Common_ButtonBase::StaticRegisterNativesUDS_VM_Common_ButtonBase(void)

{
  return;
}

// BindModel @ 14bdb1210

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_Common_ButtonBase::BindModel(UDS_VM_Common_ButtonBase *this)

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

// InitViewModel @ 14bdc6a90

void __thiscall UDS_VM_Common_ButtonBase::InitViewModel(UDS_VM_Common_ButtonBase *this)

{
  this->TableID = 0;
  return;
}

// OnClickButton @ 14bdcb8c0

void __thiscall
UDS_VM_Common_ButtonBase::OnClickButton(UDS_VM_Common_ButtonBase *this,FWidgetEventField *param_1)

{
  int iVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  iVar1 = this->TableID;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnClickDelegate,
             &local_28);
  if ((*(int *)&(this->OnClickDelegate).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->OnClickDelegate).field_0x8, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x68))(plVar2,iVar1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// SetIconID @ 14bde6590

void __thiscall UDS_VM_Common_ButtonBase::SetIconID(UDS_VM_Common_ButtonBase *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IconID.FieldName;
  if (this->IconID != *param_1) {
    this->IconID = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetIsVisible @ 14bde6d80

void __thiscall UDS_VM_Common_ButtonBase::SetIsVisible(UDS_VM_Common_ButtonBase *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsVisible.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsVisible.FieldName;
  if (this->IsVisible != param_1) {
    this->IsVisible = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetTableID @ 14bde98c0

void __thiscall UDS_VM_Common_ButtonBase::SetTableID(UDS_VM_Common_ButtonBase *this,int *param_1)

{
  this->TableID = *param_1;
  return;
}

// UnbindModel @ 14bdec850

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_Common_ButtonBase::UnbindModel(UDS_VM_Common_ButtonBase *this)

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
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnClickDelegate);
  return;
}

