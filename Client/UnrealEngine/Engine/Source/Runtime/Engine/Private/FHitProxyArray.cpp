// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Get @ 147cf9df0

FHitProxyArray * __cdecl FHitProxyArray::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FHitProxyArray&___ptr64___cdecl_FHitProxyArray::Get(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FHitProxyArray&___ptr64___cdecl_FHitProxyArray::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FHitProxyArray&___ptr64___cdecl_FHitProxyArray::Get(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FHitProxyArray&___ptr64___cdecl_FHitProxyArray::Get(void)'::__l2::
      Singleton.HitProxies._44_4_ = 0x80;
      `public:_static_class_FHitProxyArray&___ptr64___cdecl_FHitProxyArray::Get(void)'::__l2::
      Singleton.HitProxies._0_8_ = 0;
      `public:_static_class_FHitProxyArray&___ptr64___cdecl_FHitProxyArray::Get(void)'::__l2::
      Singleton.HitProxies._8_8_ = 0;
      `public:_static_class_FHitProxyArray&___ptr64___cdecl_FHitProxyArray::Get(void)'::__l2::
      Singleton.HitProxies._32_8_ = 0;
      `public:_static_class_FHitProxyArray&___ptr64___cdecl_FHitProxyArray::Get(void)'::__l2::
      Singleton.HitProxies._40_4_ = 0;
      `public:_static_class_FHitProxyArray&___ptr64___cdecl_FHitProxyArray::Get(void)'::__l2::
      Singleton.HitProxies._52_4_ = 0;
      `public:_static_class_FHitProxyArray&___ptr64___cdecl_FHitProxyArray::Get(void)'::__l2::
      Singleton.HitProxies._48_4_ = 0xffffffff;
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)
                 &`public:_static_class_FHitProxyArray&___ptr64___cdecl_FHitProxyArray::Get(void)'::
                  __l2::Singleton.Lock,4000);
      atexit(`FHitProxyArray::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&`public:_static_class_FHitProxyArray&___ptr64___cdecl_FHitProxyArray::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FHitProxyArray&___ptr64___cdecl_FHitProxyArray::Get(void)'::__l2
              ::Singleton;
    }
  }
  return &`public:_static_class_FHitProxyArray&___ptr64___cdecl_FHitProxyArray::Get(void)'::__l2::
          Singleton;
}

