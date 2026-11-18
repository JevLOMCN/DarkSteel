// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b628570

UClass * __cdecl UDS_VM_Common_CooltimeButton::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Common_CooltimeButton.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Common_CooltimeButton",
               &Z_Registration_Info_UClass_UDS_VM_Common_CooltimeButton.InnerSingleton,
               StaticRegisterNativesUDS_VM_Common_CooltimeButton,0xd0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_Common_CooltimeButton>,
               InternalVTableHelperCtorCaller<UDS_VM_Common_CooltimeButton>,local_res8,
               UDS_VM_Common_ButtonBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Common_CooltimeButton.InnerSingleton;
}

// UDS_VM_Common_CooltimeButton @ 14b62c4d0

UDS_VM_Common_CooltimeButton * __thiscall
UDS_VM_Common_CooltimeButton::UDS_VM_Common_CooltimeButton
          (UDS_VM_Common_CooltimeButton *this,FVTableHelper *param_1)

{
  UDS_VM_Common_ButtonBase::UDS_VM_Common_ButtonBase((UDS_VM_Common_ButtonBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Common_CooltimeButton__6B_;
  (this->VMCooltime).field0_0x0.DebugPtr = (UDS_VM_Progress *)0x0;
  return this;
}

// UDS_VM_Common_CooltimeButton @ 14b62c520

UDS_VM_Common_CooltimeButton * __thiscall
UDS_VM_Common_CooltimeButton::UDS_VM_Common_CooltimeButton
          (UDS_VM_Common_CooltimeButton *this,FObjectInitializer *param_1)

{
  UDS_VM_Common_ButtonBase::UDS_VM_Common_ButtonBase((UDS_VM_Common_ButtonBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Common_CooltimeButton__6B_;
  (this->VMCooltime).field0_0x0.DebugPtr = (UDS_VM_Progress *)0x0;
  return this;
}

// ~UDS_VM_Common_CooltimeButton @ 14b62eb50

void __thiscall
UDS_VM_Common_CooltimeButton::~UDS_VM_Common_CooltimeButton(UDS_VM_Common_CooltimeButton *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Common_CooltimeButton__6B_;
  UDS_VM_Common_ButtonBase::~UDS_VM_Common_ButtonBase((UDS_VM_Common_ButtonBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6316e0

IClassDescriptor * __thiscall
UDS_VM_Common_CooltimeButton::GetFieldNotificationDescriptor(UDS_VM_Common_CooltimeButton *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Common_CooltimeButton::FFieldNotificationClassDescriptor::GetDescriptor'::__l2
             ::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b632060

UClass * __cdecl UDS_VM_Common_CooltimeButton::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Common_CooltimeButton.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Common_CooltimeButton",
               &Z_Registration_Info_UClass_UDS_VM_Common_CooltimeButton.InnerSingleton,
               StaticRegisterNativesUDS_VM_Common_CooltimeButton,0xd0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_Common_CooltimeButton>,
               InternalVTableHelperCtorCaller<UDS_VM_Common_CooltimeButton>,local_res8,
               UDS_VM_Common_ButtonBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Common_CooltimeButton.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Common_CooltimeButton @ 14b632f70

void __cdecl UDS_VM_Common_CooltimeButton::StaticRegisterNativesUDS_VM_Common_CooltimeButton(void)

{
  return;
}

// OnSetViewModel @ 14bdd7c20

void __thiscall
UDS_VM_Common_CooltimeButton::OnSetViewModel
          (UDS_VM_Common_CooltimeButton *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  UDS_VM_Progress *pUVar2;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if ((this->VMCooltime).field0_0x0.DebugPtr == (UDS_VM_Progress *)0x0) {
    pUVar2 = UDS_ViewModelBase::CreateViewModel<UDS_VM_Progress>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UDS_VM_Progress *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->VMCooltime).field0_0x0.DebugPtr = pUVar2;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

