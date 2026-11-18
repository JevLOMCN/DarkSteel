// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HeadMountedDisplay
// Functions: 10

// GetModuleAliases @ 14594ab70

void __thiscall
IHeadMountedDisplayModule::GetModuleAliases
          (IHeadMountedDisplayModule *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// StartupModule @ 14594ab90

void __thiscall IHeadMountedDisplayModule::StartupModule(IHeadMountedDisplayModule *this)

{
  code *UNRECOVERED_JUMPTABLE;
  IModularFeatures *pIVar1;
  IHeadMountedDisplayModule *pIVar2;
  
  pIVar1 = IModularFeatures::Get();
  pIVar2 = this + 1;
  if (this == (IHeadMountedDisplayModule *)0x0) {
    pIVar2 = (IHeadMountedDisplayModule *)0x0;
  }
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*pIVar1 + 0x28);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'::
      __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
                      ::__l2::HMDFeatureName,L"HMD");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014594ac0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (pIVar1,`public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
                    ::__l2::HMDFeatureName,pIVar2);
  return;
}

// PreInit @ 14594ac50

bool __thiscall IHeadMountedDisplayModule::PreInit(IHeadMountedDisplayModule *this)

{
  return true;
}

// IsHMDConnected @ 14594ac60

bool __thiscall IHeadMountedDisplayModule::IsHMDConnected(IHeadMountedDisplayModule *this)

{
  return false;
}

// GetGraphicsAdapterLuid @ 14594ac70

ulong64 __thiscall
IHeadMountedDisplayModule::GetGraphicsAdapterLuid(IHeadMountedDisplayModule *this)

{
  return 0;
}

// GetAudioInputDevice @ 14594ac80

FString * __thiscall
IHeadMountedDisplayModule::GetAudioInputDevice
          (IHeadMountedDisplayModule *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetAudioOutputDevice @ 14594aca0

FString * __thiscall
IHeadMountedDisplayModule::GetAudioOutputDevice
          (IHeadMountedDisplayModule *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetDeviceSystemName @ 14594acc0

FString * __thiscall
IHeadMountedDisplayModule::GetDeviceSystemName
          (IHeadMountedDisplayModule *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetVulkanExtensions @ 14594ace0

TSharedPtr<IHeadMountedDisplayVulkanExtensions,1> * __thiscall
IHeadMountedDisplayModule::GetVulkanExtensions
          (IHeadMountedDisplayModule *this,
          TSharedPtr<IHeadMountedDisplayVulkanExtensions,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IHeadMountedDisplayVulkanExtensions *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// IsStandaloneStereoOnlyDevice @ 14594ad00

bool __thiscall
IHeadMountedDisplayModule::IsStandaloneStereoOnlyDevice(IHeadMountedDisplayModule *this)

{
  return false;
}

