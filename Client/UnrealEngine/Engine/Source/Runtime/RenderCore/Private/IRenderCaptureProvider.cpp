// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 2

// Get @ 145db86a0

IRenderCaptureProvider * __cdecl IRenderCaptureProvider::Get(void)

{
  IModularFeatures *pIVar1;
  longlong lVar2;
  IRenderCaptureProvider *pIVar3;
  
  pIVar1 = IModularFeatures::Get();
  (**(code **)((longlong)*pIVar1 + 8))(pIVar1);
  pIVar1 = IModularFeatures::Get();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_IRenderCaptureProvider::GetModularFeatureName(void)'::__l2
      ::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IRenderCaptureProvider::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IRenderCaptureProvider::GetModularFeatureName(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IRenderCaptureProvider::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"RenderCaptureProvider");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IRenderCaptureProvider::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  lVar2 = (**(code **)((longlong)*pIVar1 + 0x20))
                    (pIVar1,`public:_static_class_FName___cdecl_IRenderCaptureProvider::GetModularFeatureName(void)'
                            ::__l2::FeatureName,0);
  pIVar3 = (IRenderCaptureProvider *)(lVar2 + -8);
  if (lVar2 == 0) {
    pIVar3 = (IRenderCaptureProvider *)0x0;
  }
  pIVar1 = IModularFeatures::Get();
  (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
  return pIVar3;
}

// IsAvailable @ 145dc0ab0

bool __cdecl IRenderCaptureProvider::IsAvailable(void)

{
  int iVar1;
  IModularFeatures *pIVar2;
  
  pIVar2 = IModularFeatures::Get();
  (**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  pIVar2 = IModularFeatures::Get();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_IRenderCaptureProvider::GetModularFeatureName(void)'::__l2
      ::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IRenderCaptureProvider::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IRenderCaptureProvider::GetModularFeatureName(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IRenderCaptureProvider::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"RenderCaptureProvider");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IRenderCaptureProvider::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  iVar1 = (**(code **)((longlong)*pIVar2 + 0x18))
                    (pIVar2,`public:_static_class_FName___cdecl_IRenderCaptureProvider::GetModularFeatureName(void)'
                            ::__l2::FeatureName);
  pIVar2 = IModularFeatures::Get();
  (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
  return 0 < iVar1;
}

