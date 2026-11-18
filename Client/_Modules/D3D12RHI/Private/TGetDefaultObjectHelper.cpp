// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 2

// Do @ 145a12540

void * __cdecl TGetDefaultObjectHelper<TResourceArray<unsigned_char,64>,1>::Do(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_TResourceArray<unsigned_char,64>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_char,64>_>(void)'
      ::__l3::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_TResourceArray<unsigned_char,64>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_char,64>_>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
    if (`class_TResourceArray<unsigned_char,64>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_char,64>_>(void)'
        ::__l3::_thread_safe_static_guard_0__ == -1) {
      `class_TResourceArray<unsigned_char,64>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_char,64>_>(void)'
      ::__l3::Default.bNeedsCPUAccess = false;
      `class_TResourceArray<unsigned_char,64>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_char,64>_>(void)'
      ::__l3::Default._padding_ = 0;
      `class_TResourceArray<unsigned_char,64>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_char,64>_>(void)'
      ::__l3::Default._padding_ = 0;
      `class_TResourceArray<unsigned_char,64>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_char,64>_>(void)'
      ::__l3::Default._padding_ = (longlong)&___7__TResourceArray_E_0EA___6B_;
      atexit(`InternalGetDefaultObject<TResourceArray<unsigned_char,64>_>'::__l3::
             _dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&`class_TResourceArray<unsigned_char,64>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_char,64>_>(void)'
                           ::__l3::_thread_safe_static_guard_0__);
      return &`class_TResourceArray<unsigned_char,64>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_char,64>_>(void)'
              ::__l3::Default;
    }
  }
  return &`class_TResourceArray<unsigned_char,64>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_char,64>_>(void)'
          ::__l3::Default;
}

// Do @ 145aa5920

void * __cdecl TGetDefaultObjectHelper<TResourceArray<unsigned_int,0>,1>::Do(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_TResourceArray<unsigned_int,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_int,0>_>(void)'
      ::__l3::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_TResourceArray<unsigned_int,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_int,0>_>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
    if (`class_TResourceArray<unsigned_int,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_int,0>_>(void)'
        ::__l3::_thread_safe_static_guard_0__ == -1) {
      `class_TResourceArray<unsigned_int,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_int,0>_>(void)'
      ::__l3::Default.bNeedsCPUAccess = false;
      `class_TResourceArray<unsigned_int,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_int,0>_>(void)'
      ::__l3::Default._padding_ = 0;
      `class_TResourceArray<unsigned_int,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_int,0>_>(void)'
      ::__l3::Default._padding_ = 0;
      `class_TResourceArray<unsigned_int,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_int,0>_>(void)'
      ::__l3::Default._padding_ = (longlong)&___7__TResourceArray_I_0A___6B_;
      atexit(`InternalGetDefaultObject<TResourceArray<unsigned_int,0>_>'::__l3::
             _dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&`class_TResourceArray<unsigned_int,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_int,0>_>(void)'
                           ::__l3::_thread_safe_static_guard_0__);
      return &`class_TResourceArray<unsigned_int,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_int,0>_>(void)'
              ::__l3::Default;
    }
  }
  return &`class_TResourceArray<unsigned_int,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_int,0>_>(void)'
          ::__l3::Default;
}

