// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 2

// Get<1> @ 145de4840

FRenderResourceList * __cdecl FRenderResourceList::Get<1>(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FRenderResourceList&___ptr64___cdecl_FRenderResourceList::Get<1>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FRenderResourceList&___ptr64___cdecl_FRenderResourceList::Get<1>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FRenderResourceList&___ptr64___cdecl_FRenderResourceList::Get<1>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`FRenderResourceList::Get<1>'::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&`public:_static_class_FRenderResourceList&___ptr64___cdecl_FRenderResourceList::Get<1>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FRenderResourceList&___ptr64___cdecl_FRenderResourceList::Get<1>(void)'
          ::__l2::Instance;
}

// Get<0> @ 145de48b0

FRenderResourceList * __cdecl FRenderResourceList::Get<0>(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FRenderResourceList&___ptr64___cdecl_FRenderResourceList::Get<0>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FRenderResourceList&___ptr64___cdecl_FRenderResourceList::Get<0>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FRenderResourceList&___ptr64___cdecl_FRenderResourceList::Get<0>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`FRenderResourceList::Get<0>'::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&`public:_static_class_FRenderResourceList&___ptr64___cdecl_FRenderResourceList::Get<0>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_FRenderResourceList&___ptr64___cdecl_FRenderResourceList::Get<0>(void)'
          ::__l2::Instance;
}

