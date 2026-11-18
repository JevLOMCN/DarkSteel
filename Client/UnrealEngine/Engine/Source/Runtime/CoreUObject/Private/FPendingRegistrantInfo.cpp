// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// GetMap @ 14226fbf0

TMap<UObjectBase_*,FPendingRegistrantInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_*,FPendingRegistrantInfo,0>_>
* __cdecl FPendingRegistrantInfo::GetMap(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_TMap<UObjectBase*___ptr64,FPendingRegistrantInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase*___ptr64,FPendingRegistrantInfo,0>_>&___ptr64___cdecl_FPendingRegistrantInfo::GetMap(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_TMap<UObjectBase*___ptr64,FPendingRegistrantInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase*___ptr64,FPendingRegistrantInfo,0>_>&___ptr64___cdecl_FPendingRegistrantInfo::GetMap(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_TMap<UObjectBase*___ptr64,FPendingRegistrantInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase*___ptr64,FPendingRegistrantInfo,0>_>&___ptr64___cdecl_FPendingRegistrantInfo::GetMap(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`FPendingRegistrantInfo::GetMap'::__l2::
             _dynamic_atexit_destructor_for__PendingRegistrantInfo__);
      _Init_thread_footer(&`public:_static_class_TMap<UObjectBase*___ptr64,FPendingRegistrantInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase*___ptr64,FPendingRegistrantInfo,0>_>&___ptr64___cdecl_FPendingRegistrantInfo::GetMap(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return (TMap<UObjectBase_*,FPendingRegistrantInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_*,FPendingRegistrantInfo,0>_>
          *)&`public:_static_class_TMap<UObjectBase*___ptr64,FPendingRegistrantInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase*___ptr64,FPendingRegistrantInfo,0>_>&___ptr64___cdecl_FPendingRegistrantInfo::GetMap(void)'
             ::__l2::PendingRegistrantInfo;
}

