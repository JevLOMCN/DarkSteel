// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// Get @ 1448133e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FSceneCaptureCustomRenderPassUserData * __cdecl
FSceneCaptureCustomRenderPassUserData::Get(FCustomRenderPassBase *param_1)

{
  FSceneCaptureCustomRenderPassUserData *pFVar1;
  FSceneCaptureCustomRenderPassUserData *pFVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_FSceneCaptureCustomRenderPassUserData::GetTypeNameStatic(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_FSceneCaptureCustomRenderPassUserData::GetTypeNameStatic(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_FSceneCaptureCustomRenderPassUserData::GetTypeNameStatic(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName_const&___ptr64___cdecl_FSceneCaptureCustomRenderPassUserData::GetTypeNameStatic(void)'
                      ::__l2::Name,L"FSceneCaptureCustomRenderPassUserData");
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_FSceneCaptureCustomRenderPassUserData::GetTypeNameStatic(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar1 = (FSceneCaptureCustomRenderPassUserData *)
           FCustomRenderPassBase::GetUserData
                     (param_1,&`public:_static_class_FName_const&___ptr64___cdecl_FSceneCaptureCustomRenderPassUserData::GetTypeNameStatic(void)'
                               ::__l2::Name);
  pFVar2 = &GDefaultData;
  if (pFVar1 != (FSceneCaptureCustomRenderPassUserData *)0x0) {
    pFVar2 = pFVar1;
  }
  return pFVar2;
}

// GetTypeName @ 1454aa9f0

FName * __thiscall
FSceneCaptureCustomRenderPassUserData::GetTypeName(FSceneCaptureCustomRenderPassUserData *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_FSceneCaptureCustomRenderPassUserData::GetTypeNameStatic(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_FSceneCaptureCustomRenderPassUserData::GetTypeNameStatic(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_FSceneCaptureCustomRenderPassUserData::GetTypeNameStatic(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName_const&___ptr64___cdecl_FSceneCaptureCustomRenderPassUserData::GetTypeNameStatic(void)'
                      ::__l2::Name,L"FSceneCaptureCustomRenderPassUserData");
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_FSceneCaptureCustomRenderPassUserData::GetTypeNameStatic(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FName_const&___ptr64___cdecl_FSceneCaptureCustomRenderPassUserData::GetTypeNameStatic(void)'
              ::__l2::Name;
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_FSceneCaptureCustomRenderPassUserData::GetTypeNameStatic(void)'
          ::__l2::Name;
}

// GetTypeNameStatic @ 1454aab00

FName * __cdecl FSceneCaptureCustomRenderPassUserData::GetTypeNameStatic(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_FSceneCaptureCustomRenderPassUserData::GetTypeNameStatic(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_FSceneCaptureCustomRenderPassUserData::GetTypeNameStatic(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_FSceneCaptureCustomRenderPassUserData::GetTypeNameStatic(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName_const&___ptr64___cdecl_FSceneCaptureCustomRenderPassUserData::GetTypeNameStatic(void)'
                      ::__l2::Name,L"FSceneCaptureCustomRenderPassUserData");
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_FSceneCaptureCustomRenderPassUserData::GetTypeNameStatic(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FName_const&___ptr64___cdecl_FSceneCaptureCustomRenderPassUserData::GetTypeNameStatic(void)'
              ::__l2::Name;
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_FSceneCaptureCustomRenderPassUserData::GetTypeNameStatic(void)'
          ::__l2::Name;
}

