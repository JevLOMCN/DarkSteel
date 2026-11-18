// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// StaticClass @ 14b643fc0

UClass * __cdecl UDS_VM_FadeInOut::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_FadeInOut.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_FadeInOut",
               &Z_Registration_Info_UClass_UDS_VM_FadeInOut.InnerSingleton,
               StaticRegisterNativesUDS_VM_FadeInOut,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_VM_FadeInOut>,
               InternalVTableHelperCtorCaller<UDS_VM_FadeInOut>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_FadeInOut.InnerSingleton;
}

// UDS_VM_FadeInOut @ 14b648220

UDS_VM_FadeInOut * __thiscall
UDS_VM_FadeInOut::UDS_VM_FadeInOut(UDS_VM_FadeInOut *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->FadeOpacity = 0.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_FadeInOut__6B_;
  return this;
}

// UDS_VM_FadeInOut @ 14b648270

UDS_VM_FadeInOut * __thiscall
UDS_VM_FadeInOut::UDS_VM_FadeInOut(UDS_VM_FadeInOut *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->FadeOpacity = 0.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_FadeInOut__6B_;
  return this;
}

// ~UDS_VM_FadeInOut @ 14b649590

void __thiscall UDS_VM_FadeInOut::~UDS_VM_FadeInOut(UDS_VM_FadeInOut *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_FadeInOut__6B_;
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b64b160

IClassDescriptor * __thiscall
UDS_VM_FadeInOut::GetFieldNotificationDescriptor(UDS_VM_FadeInOut *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_FadeInOut::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b64ba50

UClass * __cdecl UDS_VM_FadeInOut::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_FadeInOut.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_FadeInOut",
               &Z_Registration_Info_UClass_UDS_VM_FadeInOut.InnerSingleton,
               StaticRegisterNativesUDS_VM_FadeInOut,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_VM_FadeInOut>,
               InternalVTableHelperCtorCaller<UDS_VM_FadeInOut>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_FadeInOut.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_FadeInOut @ 14b64bf60

void __cdecl UDS_VM_FadeInOut::StaticRegisterNativesUDS_VM_FadeInOut(void)

{
  return;
}

// BindModel @ 14bdb1bb0

void __thiscall UDS_VM_FadeInOut::BindModel(UDS_VM_FadeInOut *this)

{
  UDS_LoadingEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_LoadingEvent::GetEvent();
  if (pUVar1 != (UDS_LoadingEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->FadeOpacityDelegate,
               this);
    TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_FadeInOut>
              ((TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy> *)
               &pUVar1->FadeOpacityDelegate,(UDS_VM_FadeInOut *)&stack0x00000010,
               (pmf_b345a135 *)this);
  }
  return;
}

// OnFadeOpacity @ 14bdced10

void __thiscall UDS_VM_FadeInOut::OnFadeOpacity(UDS_VM_FadeInOut *this,float param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::FadeOpacity.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::FadeOpacity.FieldName;
  if (param_1 != this->FadeOpacity) {
    this->FadeOpacity = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnSetViewModel @ 14bddc1f0

void __thiscall
UDS_VM_FadeInOut::OnSetViewModel(UDS_VM_FadeInOut *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (param_1->Object != (FDS_ViewModelContext *)0x0) {
    this->FadeOpacity = 0.0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetFadeOpcaty @ 14bde64a0

void __thiscall UDS_VM_FadeInOut::SetFadeOpcaty(UDS_VM_FadeInOut *this,float param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::FadeOpacity.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::FadeOpacity.FieldName;
  if (param_1 != this->FadeOpacity) {
    this->FadeOpacity = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14bdecd70

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_FadeInOut::UnbindModel(UDS_VM_FadeInOut *this)

{
  UDS_LanguageManager *pUVar1;
  UDS_LoadingEvent *pUVar2;
  
  pUVar1 = UDS_LanguageManager::GetInst();
  if (pUVar1 != (UDS_LanguageManager *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnLanguageChanged,this
              );
  }
  pUVar2 = UDS_LoadingEvent::GetEvent();
  if (pUVar2 != (UDS_LoadingEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->FadeOpacityDelegate,
               this);
  }
  return;
}

