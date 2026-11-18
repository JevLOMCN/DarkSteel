// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// IsOfTypeImpl @ 1486d1430

bool __thiscall
FInvisibleToWidgetReflectorMetaData::IsOfTypeImpl
          (FInvisibleToWidgetReflectorMetaData *this,FName *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_FInvisibleToWidgetReflectorMetaData::GetTypeId(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_FInvisibleToWidgetReflectorMetaData::GetTypeId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_FInvisibleToWidgetReflectorMetaData::GetTypeId(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName_const&___ptr64___cdecl_FInvisibleToWidgetReflectorMetaData::GetTypeId(void)'
                      ::__l2::Type,L"FInvisibleToWidgetReflectorMetaData");
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_FInvisibleToWidgetReflectorMetaData::GetTypeId(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_FName_const&___ptr64___cdecl_FInvisibleToWidgetReflectorMetaData::GetTypeId(void)'
         ::__l2::Type == *param_1;
}

