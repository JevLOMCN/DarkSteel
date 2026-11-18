// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 1

// GetTypeNameStatic @ 145f96130

FName * __cdecl FLandscapeLODOverridesCustomRenderPassUserData::GetTypeNameStatic(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_FLandscapeLODOverridesCustomRenderPassUserData::GetTypeNameStatic(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_FLandscapeLODOverridesCustomRenderPassUserData::GetTypeNameStatic(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_FLandscapeLODOverridesCustomRenderPassUserData::GetTypeNameStatic(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName_const&___ptr64___cdecl_FLandscapeLODOverridesCustomRenderPassUserData::GetTypeNameStatic(void)'
                      ::__l2::Name,L"FLandscapeLODOverridesCustomRenderPassUserData");
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_FLandscapeLODOverridesCustomRenderPassUserData::GetTypeNameStatic(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FName_const&___ptr64___cdecl_FLandscapeLODOverridesCustomRenderPassUserData::GetTypeNameStatic(void)'
              ::__l2::Name;
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_FLandscapeLODOverridesCustomRenderPassUserData::GetTypeNameStatic(void)'
          ::__l2::Name;
}

