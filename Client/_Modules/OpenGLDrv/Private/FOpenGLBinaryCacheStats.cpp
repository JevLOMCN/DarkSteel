// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 2

// Get @ 145c015e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FOpenGLBinaryCacheStats * __cdecl FOpenGLBinaryCacheStats::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FOpenGLBinaryCacheStats&___ptr64___cdecl_FOpenGLBinaryCacheStats::Get(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FOpenGLBinaryCacheStats&___ptr64___cdecl_FOpenGLBinaryCacheStats::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FOpenGLBinaryCacheStats&___ptr64___cdecl_FOpenGLBinaryCacheStats::Get(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)
                 &`public:_static_class_FOpenGLBinaryCacheStats&___ptr64___cdecl_FOpenGLBinaryCacheStats::Get(void)'
                  ::__l2::CacheStats,4000);
      `public:_static_class_FOpenGLBinaryCacheStats&___ptr64___cdecl_FOpenGLBinaryCacheStats::Get(void)'
      ::__l2::CacheStats.KeyToTimes._40_8_ = ___xmm_00000000ffffffff0000008000000000;
      `public:_static_class_FOpenGLBinaryCacheStats&___ptr64___cdecl_FOpenGLBinaryCacheStats::Get(void)'
      ::__l2::CacheStats.KeyToTimes._48_8_ = _UNK_150631d98;
      `public:_static_class_FOpenGLBinaryCacheStats&___ptr64___cdecl_FOpenGLBinaryCacheStats::Get(void)'
      ::__l2::CacheStats.KeyToTimes._0_8_ = 0;
      `public:_static_class_FOpenGLBinaryCacheStats&___ptr64___cdecl_FOpenGLBinaryCacheStats::Get(void)'
      ::__l2::CacheStats.CombinedEarlyTimeToUse = 0.0;
      `public:_static_class_FOpenGLBinaryCacheStats&___ptr64___cdecl_FOpenGLBinaryCacheStats::Get(void)'
      ::__l2::CacheStats.CombinedCompileTime = 0.0;
      `public:_static_class_FOpenGLBinaryCacheStats&___ptr64___cdecl_FOpenGLBinaryCacheStats::Get(void)'
      ::__l2::CacheStats.KeyToTimes._8_8_ = 0;
      `public:_static_class_FOpenGLBinaryCacheStats&___ptr64___cdecl_FOpenGLBinaryCacheStats::Get(void)'
      ::__l2::CacheStats.KeyToTimes._32_8_ = 0;
      `public:_static_class_FOpenGLBinaryCacheStats&___ptr64___cdecl_FOpenGLBinaryCacheStats::Get(void)'
      ::__l2::CacheStats.KeyToTimes._64_8_ = 0;
      `public:_static_class_FOpenGLBinaryCacheStats&___ptr64___cdecl_FOpenGLBinaryCacheStats::Get(void)'
      ::__l2::CacheStats.KeyToTimes._72_4_ = 0;
      `public:_static_class_FOpenGLBinaryCacheStats&___ptr64___cdecl_FOpenGLBinaryCacheStats::Get(void)'
      ::__l2::CacheStats.TotalMisses = 0;
      `public:_static_class_FOpenGLBinaryCacheStats&___ptr64___cdecl_FOpenGLBinaryCacheStats::Get(void)'
      ::__l2::CacheStats.TotalEarlyUses = 0;
      `public:_static_class_FOpenGLBinaryCacheStats&___ptr64___cdecl_FOpenGLBinaryCacheStats::Get(void)'
      ::__l2::CacheStats.TotalHits = 0;
      `public:_static_class_FOpenGLBinaryCacheStats&___ptr64___cdecl_FOpenGLBinaryCacheStats::Get(void)'
      ::__l2::CacheStats.PreloadedBinaries = 0;
      `public:_static_class_FOpenGLBinaryCacheStats&___ptr64___cdecl_FOpenGLBinaryCacheStats::Get(void)'
      ::__l2::CacheStats.bLogMe = false;
      atexit(`FOpenGLBinaryCacheStats::Get'::__l2::_dynamic_atexit_destructor_for__CacheStats__);
      _Init_thread_footer(&`public:_static_class_FOpenGLBinaryCacheStats&___ptr64___cdecl_FOpenGLBinaryCacheStats::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FOpenGLBinaryCacheStats&___ptr64___cdecl_FOpenGLBinaryCacheStats::Get(void)'
              ::__l2::CacheStats;
    }
  }
  return &`public:_static_class_FOpenGLBinaryCacheStats&___ptr64___cdecl_FOpenGLBinaryCacheStats::Get(void)'
          ::__l2::CacheStats;
}

// IsEnabled @ 145c0aa10

bool __cdecl FOpenGLBinaryCacheStats::IsEnabled(void)

{
  wchar_t *pwVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_bool___cdecl_FOpenGLBinaryCacheStats::IsEnabled(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_bool___cdecl_FOpenGLBinaryCacheStats::IsEnabled(void)'::
                         __l2::_thread_safe_static_guard_0__);
    if (`public:_static_bool___cdecl_FOpenGLBinaryCacheStats::IsEnabled(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      pwVar1 = FCommandLine::Get();
      `public:_static_bool___cdecl_FOpenGLBinaryCacheStats::IsEnabled(void)'::__l2::bEnabled =
           FParse::Param(pwVar1,L"openglprecachestats");
      _Init_thread_footer(&`public:_static_bool___cdecl_FOpenGLBinaryCacheStats::IsEnabled(void)'::
                           __l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_bool___cdecl_FOpenGLBinaryCacheStats::IsEnabled(void)'::__l2::bEnabled;
}

