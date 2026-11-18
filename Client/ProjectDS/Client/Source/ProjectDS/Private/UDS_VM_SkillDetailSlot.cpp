// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b6df6b0

UClass * __cdecl UDS_VM_SkillDetailSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_SkillDetailSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_SkillDetailSlot",
               &Z_Registration_Info_UClass_UDS_VM_SkillDetailSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_SkillDetailSlot,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_SkillDetailSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_SkillDetailSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_SkillDetailSlot.InnerSingleton;
}

// UDS_VM_SkillDetailSlot @ 14b6e56b0

UDS_VM_SkillDetailSlot * __thiscall
UDS_VM_SkillDetailSlot::UDS_VM_SkillDetailSlot(UDS_VM_SkillDetailSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_SkillDetailSlot__6B_;
  (this->VM_SkillData).field0_0x0.DebugPtr = (UDS_VM_SkillData *)0x0;
  return this;
}

// UDS_VM_SkillDetailSlot @ 14b6e5700

UDS_VM_SkillDetailSlot * __thiscall
UDS_VM_SkillDetailSlot::UDS_VM_SkillDetailSlot
          (UDS_VM_SkillDetailSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_SkillDetailSlot__6B_;
  (this->VM_SkillData).field0_0x0.DebugPtr = (UDS_VM_SkillData *)0x0;
  return this;
}

// ~UDS_VM_SkillDetailSlot @ 14b6e7030

void __thiscall UDS_VM_SkillDetailSlot::~UDS_VM_SkillDetailSlot(UDS_VM_SkillDetailSlot *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_SkillDetailSlot__6B_;
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6e9600

IClassDescriptor * __thiscall
UDS_VM_SkillDetailSlot::GetFieldNotificationDescriptor(UDS_VM_SkillDetailSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_SkillDetailSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6e9f40

UClass * __cdecl UDS_VM_SkillDetailSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_SkillDetailSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_SkillDetailSlot",
               &Z_Registration_Info_UClass_UDS_VM_SkillDetailSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_SkillDetailSlot,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_SkillDetailSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_SkillDetailSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_SkillDetailSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_SkillDetailSlot @ 14b6eabc0

void __cdecl UDS_VM_SkillDetailSlot::StaticRegisterNativesUDS_VM_SkillDetailSlot(void)

{
  return;
}

// Create @ 14bf44d70

UDS_VM_SkillDetailSlot * __cdecl UDS_VM_SkillDetailSlot::Create(void)

{
  return (UDS_VM_SkillDetailSlot *)0x0;
}

// OnSetViewModel @ 14bf6d4d0

void __thiscall
UDS_VM_SkillDetailSlot::OnSetViewModel
          (UDS_VM_SkillDetailSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

