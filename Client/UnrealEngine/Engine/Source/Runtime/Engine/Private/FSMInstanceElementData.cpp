// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// StaticTypeName @ 147b8ef40

FName __cdecl FSMInstanceElementData::StaticTypeName(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_FSMInstanceElementData::StaticTypeName(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_FSMInstanceElementData::StaticTypeName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_FSMInstanceElementData::StaticTypeName(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_FSMInstanceElementData::StaticTypeName(void)'
                      ::__l2::TypeName,"FSMInstanceElementData");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_FSMInstanceElementData::StaticTypeName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  *(FName *)in_RCX =
       `public:_static_class_FName___cdecl_FSMInstanceElementData::StaticTypeName(void)'::__l2::
       TypeName;
  return in_RCX;
}

