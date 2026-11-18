// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// SetKeyButtonEvent_WrapperImpl @ 14b73efb0

void __cdecl UDS_VM_W_Key::SetKeyButtonEvent_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  FReadAccessScope FStack_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0xc0),
             &FStack_28);
  if ((*(int *)((longlong)param_1 + 0xd0) != 0) &&
     (plVar1 = *(longlong **)((longlong)param_1 + 200), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_2);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&FStack_28);
  return;
}

// StaticClass @ 14b73efd0

UClass * __cdecl UDS_VM_W_Key::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Key.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Key",
               &Z_Registration_Info_UClass_UDS_VM_W_Key.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Key,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_W_Key>,InternalVTableHelperCtorCaller<UDS_VM_W_Key>,
               local_res8,UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Key.InnerSingleton;
}

// UDS_VM_W_Key @ 14b741c50

UDS_VM_W_Key * __thiscall UDS_VM_W_Key::UDS_VM_W_Key(UDS_VM_W_Key *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Key__6B_;
  *(undefined8 *)&(this->KeyButtonEvent).Delegate = 0;
  *(undefined8 *)&(this->KeyButtonEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->KeyButtonEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&this->OnClickedButton = 0;
  *(undefined8 *)&(this->OnClickedButton).field_0x8 = 0;
  *(undefined4 *)&(this->OnClickedButton).field_0x10 = 0;
  (this->KeyButtonEvent)._padding_ = '\0';
  (this->KeyButtonEvent).bIsCustomSelected = false;
  (this->KeyButtonEvent).bIsLacked = false;
  (this->KeyButtonEvent).bIsCustomDisabled = false;
  return this;
}

// UDS_VM_W_Key @ 14b741cd0

UDS_VM_W_Key * __thiscall UDS_VM_W_Key::UDS_VM_W_Key(UDS_VM_W_Key *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Key__6B_;
  *(undefined8 *)&(this->KeyButtonEvent).Delegate = 0;
  *(undefined8 *)&(this->KeyButtonEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->KeyButtonEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&this->OnClickedButton = 0;
  *(undefined8 *)&(this->OnClickedButton).field_0x8 = 0;
  *(undefined4 *)&(this->OnClickedButton).field_0x10 = 0;
  (this->KeyButtonEvent)._padding_ = '\0';
  (this->KeyButtonEvent).bIsCustomSelected = false;
  (this->KeyButtonEvent).bIsLacked = false;
  (this->KeyButtonEvent).bIsCustomDisabled = false;
  return this;
}

// ~UDS_VM_W_Key @ 14b742fe0

void __thiscall UDS_VM_W_Key::~UDS_VM_W_Key(UDS_VM_W_Key *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Key__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnClickedButton);
  pvVar1 = *(void **)&(this->OnClickedButton).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClickedButton);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->KeyButtonEvent).Delegate);
  pvVar1 = *(void **)&(this->KeyButtonEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->KeyButtonEvent).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b744f80

IClassDescriptor * __thiscall UDS_VM_W_Key::GetFieldNotificationDescriptor(UDS_VM_W_Key *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_Key::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b7458c0

UClass * __cdecl UDS_VM_W_Key::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Key.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Key",
               &Z_Registration_Info_UClass_UDS_VM_W_Key.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Key,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_W_Key>,InternalVTableHelperCtorCaller<UDS_VM_W_Key>,
               local_res8,UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Key.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_Key @ 14b745dc0

void __cdecl UDS_VM_W_Key::StaticRegisterNativesUDS_VM_W_Key(void)

{
  return;
}

// OnKeyButtonEvent @ 14c02c000

void __thiscall UDS_VM_W_Key::OnKeyButtonEvent(UDS_VM_W_Key *this,FDS_ButtonEventField *param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnClickedButton,
             &local_28);
  if ((*(int *)&(this->OnClickedButton).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnClickedButton).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnSetViewModel @ 14c032220

void __thiscall
UDS_VM_W_Key::OnSetViewModel(UDS_VM_W_Key *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  longlong *plVar1;
  TSharedPtr<FDS_ViewModelContext_Key,1> local_78;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  undefined1 local_58 [8];
  ForAnyElementType local_50;
  int local_48;
  FDestructionSentinel local_40;
  FReadAccessScope local_28;
  
  local_68.Object = param_1->Object;
  local_68.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_Key>(&local_78,&local_68);
  if (local_78.Object != (FDS_ViewModelContext_Key *)0x0) {
    if (&(local_78.Object)->OnClickedButton != &this->OnClickedButton) {
      local_58 = (undefined1  [8])0x0;
      local_50.Data = (FScriptContainerElement *)0x0;
      local_48 = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &(local_78.Object)->OnClickedButton,&local_28);
      if ((*(int *)&((local_78.Object)->OnClickedButton).field_0x10 != 0) &&
         (plVar1 = *(longlong **)&((local_78.Object)->OnClickedButton).field_0x8,
         plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x50))(plVar1,local_58);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnClickedButton,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                 (FWriteAccessScope *)&local_40);
      if ((local_48 != 0) && (local_50.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_50.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_50,0,0,0x10);
        local_48 = 0;
      }
      if (local_40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
      }
      if (local_50.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_58);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

