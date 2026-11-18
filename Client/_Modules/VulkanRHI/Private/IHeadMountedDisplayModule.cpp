// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 1

// IsAvailable @ 145b27020

bool __cdecl IHeadMountedDisplayModule::IsAvailable(void)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  IModularFeatures *pIVar5;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\HeadMountedDisplay\\Public\\IHeadMountedDisplayModule.h"
                       ,0x5a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pIVar5 = IModularFeatures::Get();
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
  iVar4 = (**(code **)((longlong)*pIVar5 + 0x18))
                    (pIVar5,`public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
                            ::__l2::HMDFeatureName);
  return 0 < iVar4;
}

