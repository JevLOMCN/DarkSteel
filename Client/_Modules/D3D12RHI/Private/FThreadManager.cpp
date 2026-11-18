// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 1

// GetThreadName @ 145aab8e0

FString * __cdecl FThreadManager::GetThreadName(uint param_1)

{
  FThreadManager *this;
  FString *pFVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar2 < `public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::FString(&`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
                          ::__l2::GameThreadName,L"GameThread");
      atexit(`FThreadManager::GetThreadName'::__l2::_dynamic_atexit_destructor_for__GameThreadName__
            );
      _Init_thread_footer(&`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*piVar2 < `public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
                ::__l2::_thread_safe_static_guard_1__) {
    _Init_thread_header(&`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
                         ::__l2::_thread_safe_static_guard_1__);
    if (`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
        ::__l2::_thread_safe_static_guard_1__ == -1) {
      ::FString::FString(&`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
                          ::__l2::RenderThreadName,L"RenderThread");
      atexit(`FThreadManager::GetThreadName'::__l2::
             _dynamic_atexit_destructor_for__RenderThreadName__);
      _Init_thread_footer(&`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
                           ::__l2::_thread_safe_static_guard_1__);
    }
  }
  if (param_1 == GGameThreadId) {
    return &`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
            ::__l2::GameThreadName;
  }
  if (param_1 == GRenderThreadId) {
    return &`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
            ::__l2::RenderThreadName;
  }
  this = Get();
  pFVar1 = GetThreadNameInternal(this,param_1);
  return pFVar1;
}

