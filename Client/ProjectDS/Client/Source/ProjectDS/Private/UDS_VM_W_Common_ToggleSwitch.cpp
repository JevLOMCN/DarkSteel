// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// SetEvent_ClickOn_WrapperImpl @ 14b730db0

void __cdecl UDS_VM_W_Common_ToggleSwitch::SetEvent_ClickOn_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined4 *)((longlong)param_1 + 0xa0) = 1;
  iStack_10 = FFieldNotificationClassDescriptor::ToggleSwitchIndex.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::ToggleSwitchIndex.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
             ((longlong)param_1 + 0xe8),*(int *)((longlong)param_1 + 0xa0) == 0);
  return;
}

// SetEvent_ClickOff_WrapperImpl @ 14b730dc0

void __cdecl
UDS_VM_W_Common_ToggleSwitch::SetEvent_ClickOff_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0;
  iStack_10 = FFieldNotificationClassDescriptor::ToggleSwitchIndex.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::ToggleSwitchIndex.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
             ((longlong)param_1 + 0xe8),*(int *)((longlong)param_1 + 0xa0) == 0);
  return;
}

// StaticClass @ 14b730dd0

UClass * __cdecl UDS_VM_W_Common_ToggleSwitch::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Common_ToggleSwitch.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Common_ToggleSwitch",
               &Z_Registration_Info_UClass_UDS_VM_W_Common_ToggleSwitch.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Common_ToggleSwitch,0x108,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_Common_ToggleSwitch>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Common_ToggleSwitch>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Common_ToggleSwitch.InnerSingleton;
}

// UDS_VM_W_Common_ToggleSwitch @ 14b734550

UDS_VM_W_Common_ToggleSwitch * __thiscall
UDS_VM_W_Common_ToggleSwitch::UDS_VM_W_Common_ToggleSwitch
          (UDS_VM_W_Common_ToggleSwitch *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Common_ToggleSwitch__6B_;
  this->ToggleSwitchIndex = 0;
  (this->Event_ClickOn)._padding_ = '\0';
  (this->Event_ClickOn).bIsCustomSelected = false;
  (this->Event_ClickOn).bIsLacked = false;
  (this->Event_ClickOn).bIsCustomDisabled = false;
  *(undefined8 *)&(this->Event_ClickOn).Delegate = 0;
  *(undefined8 *)&(this->Event_ClickOn).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->Event_ClickOn).Delegate.field_0x10 = 0;
  (this->Event_ClickOff)._padding_ = '\0';
  (this->Event_ClickOff).bIsCustomSelected = false;
  (this->Event_ClickOff).bIsLacked = false;
  (this->Event_ClickOff).bIsCustomDisabled = false;
  *(undefined8 *)&(this->Event_ClickOff).Delegate = 0;
  *(undefined8 *)&(this->Event_ClickOff).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->Event_ClickOff).Delegate.field_0x10 = 0;
  *(undefined8 *)&this->OnChangedToggleSwitchState = 0;
  *(undefined8 *)&(this->OnChangedToggleSwitchState).field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedToggleSwitchState).field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedToggleSwitchState).field_0x18 = 2;
  return this;
}

// UDS_VM_W_Common_ToggleSwitch @ 14b7345f0

UDS_VM_W_Common_ToggleSwitch * __thiscall
UDS_VM_W_Common_ToggleSwitch::UDS_VM_W_Common_ToggleSwitch
          (UDS_VM_W_Common_ToggleSwitch *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Common_ToggleSwitch__6B_;
  this->ToggleSwitchIndex = 0;
  (this->Event_ClickOn)._padding_ = '\0';
  (this->Event_ClickOn).bIsCustomSelected = false;
  (this->Event_ClickOn).bIsLacked = false;
  (this->Event_ClickOn).bIsCustomDisabled = false;
  *(undefined8 *)&(this->Event_ClickOn).Delegate = 0;
  *(undefined8 *)&(this->Event_ClickOn).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->Event_ClickOn).Delegate.field_0x10 = 0;
  (this->Event_ClickOff)._padding_ = '\0';
  (this->Event_ClickOff).bIsCustomSelected = false;
  (this->Event_ClickOff).bIsLacked = false;
  (this->Event_ClickOff).bIsCustomDisabled = false;
  *(undefined8 *)&(this->Event_ClickOff).Delegate = 0;
  *(undefined8 *)&(this->Event_ClickOff).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->Event_ClickOff).Delegate.field_0x10 = 0;
  *(undefined8 *)&this->OnChangedToggleSwitchState = 0;
  *(undefined8 *)&(this->OnChangedToggleSwitchState).field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedToggleSwitchState).field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedToggleSwitchState).field_0x18 = 2;
  return this;
}

// ~UDS_VM_W_Common_ToggleSwitch @ 14b7360f0

void __thiscall
UDS_VM_W_Common_ToggleSwitch::~UDS_VM_W_Common_ToggleSwitch(UDS_VM_W_Common_ToggleSwitch *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Common_ToggleSwitch__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangedToggleSwitchState).field_0x8,
             *(int *)&(this->OnChangedToggleSwitchState).field_0x10);
  pvVar1 = *(void **)&(this->OnChangedToggleSwitchState).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangedToggleSwitchState);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Event_ClickOff).Delegate);
  pvVar1 = *(void **)&(this->Event_ClickOff).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Event_ClickOff).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Event_ClickOn).Delegate);
  pvVar1 = *(void **)&(this->Event_ClickOn).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Event_ClickOn).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b739280

IClassDescriptor * __thiscall
UDS_VM_W_Common_ToggleSwitch::GetFieldNotificationDescriptor(UDS_VM_W_Common_ToggleSwitch *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_Common_ToggleSwitch::FFieldNotificationClassDescriptor::GetDescriptor'::__l2
             ::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b739f00

UClass * __cdecl UDS_VM_W_Common_ToggleSwitch::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Common_ToggleSwitch.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Common_ToggleSwitch",
               &Z_Registration_Info_UClass_UDS_VM_W_Common_ToggleSwitch.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Common_ToggleSwitch,0x108,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_Common_ToggleSwitch>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Common_ToggleSwitch>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Common_ToggleSwitch.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_Common_ToggleSwitch @ 14b73aef0

void __cdecl UDS_VM_W_Common_ToggleSwitch::StaticRegisterNativesUDS_VM_W_Common_ToggleSwitch(void)

{
  return;
}

// GetToggleSwitchState @ 14bfac9c0

bool __thiscall
UDS_VM_W_Common_ToggleSwitch::GetToggleSwitchState(UDS_VM_W_Common_ToggleSwitch *this)

{
  return this->ToggleSwitchIndex == 0;
}

// OnEvent_ClickOff @ 14bfbd330

void __thiscall
UDS_VM_W_Common_ToggleSwitch::OnEvent_ClickOff
          (UDS_VM_W_Common_ToggleSwitch *this,FDS_ButtonEventField *param_1)

{
  FName local_18;
  int local_10;
  
  this->ToggleSwitchIndex = 0;
  local_10 = FFieldNotificationClassDescriptor::ToggleSwitchIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ToggleSwitchIndex.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnChangedToggleSwitchState,this->ToggleSwitchIndex == 0);
  return;
}

// OnEvent_ClickOn @ 14bfbd390

void __thiscall
UDS_VM_W_Common_ToggleSwitch::OnEvent_ClickOn
          (UDS_VM_W_Common_ToggleSwitch *this,FDS_ButtonEventField *param_1)

{
  FName local_18;
  int local_10;
  
  this->ToggleSwitchIndex = 1;
  local_10 = FFieldNotificationClassDescriptor::ToggleSwitchIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ToggleSwitchIndex.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnChangedToggleSwitchState,this->ToggleSwitchIndex == 0);
  return;
}

// SetToggleSwitchState @ 14bfddf40

void __thiscall
UDS_VM_W_Common_ToggleSwitch::SetToggleSwitchState(UDS_VM_W_Common_ToggleSwitch *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  this->ToggleSwitchIndex = (uint)(*param_1 != true);
  local_10 = FFieldNotificationClassDescriptor::ToggleSwitchIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ToggleSwitchIndex.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnChangedToggleSwitchState,this->ToggleSwitchIndex == 0);
  return;
}

