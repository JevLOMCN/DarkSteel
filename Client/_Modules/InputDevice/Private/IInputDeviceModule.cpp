// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InputDevice
// Functions: 2

// StartupModule @ 14e2c1de0

void __thiscall IInputDeviceModule::StartupModule(IInputDeviceModule *this)

{
  code *UNRECOVERED_JUMPTABLE;
  IModularFeatures *pIVar1;
  IInputDeviceModule *pIVar2;
  
  pIVar1 = IModularFeatures::Get();
  pIVar2 = this + 1;
  if (this == (IInputDeviceModule *)0x0) {
    pIVar2 = (IInputDeviceModule *)0x0;
  }
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*pIVar1 + 0x28);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_IInputDeviceModule::GetModularFeatureName(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IInputDeviceModule::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IInputDeviceModule::GetModularFeatureName(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IInputDeviceModule::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"InputDevice");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IInputDeviceModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014e2c1e5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (pIVar1,`public:_static_class_FName___cdecl_IInputDeviceModule::GetModularFeatureName(void)'
                    ::__l2::FeatureName,pIVar2);
  return;
}

// CreateInputDevice @ 14e2c1ea0

TSharedPtr<IInputDevice,1> * __thiscall
IInputDeviceModule::CreateInputDevice
          (IInputDeviceModule *this,TSharedPtr<IInputDevice,1> *__return_storage_ptr__,
          TSharedRef<FGenericApplicationMessageHandler,1> *param_1,
          FInputDeviceCreationParameters param_2)

{
  if (param_2.bInitAsPrimaryDevice != false) {
    (**(code **)((longlong)*this + 0x48))();
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (IInputDevice *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

