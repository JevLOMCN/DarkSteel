// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 1

// InvalidID @ 146fb9250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FAIGenericID<FPerceptionListenerCounter> __cdecl
FAIGenericID<FPerceptionListenerCounter>::InvalidID(void)

{
  undefined4 *in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_FAIGenericID<struct_FPerceptionListenerCounter>___cdecl_FAIGenericID<FPerceptionListenerCounter>::InvalidID(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_FAIGenericID<struct_FPerceptionListenerCounter>___cdecl_FAIGenericID<FPerceptionListenerCounter>::InvalidID(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_FAIGenericID<struct_FPerceptionListenerCounter>___cdecl_FAIGenericID<FPerceptionListenerCounter>::InvalidID(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      _InvalidIDInstance = 0xffffffff;
      _Init_thread_footer(&`public:_static_struct_FAIGenericID<struct_FPerceptionListenerCounter>___cdecl_FAIGenericID<FPerceptionListenerCounter>::InvalidID(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  *in_RCX = _InvalidIDInstance;
  return (FAIGenericID<FPerceptionListenerCounter>)(uint)in_RCX;
}

