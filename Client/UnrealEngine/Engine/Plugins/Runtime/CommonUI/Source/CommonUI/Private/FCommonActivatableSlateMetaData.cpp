// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 2

// GetTypeId @ 14a7e8fe0

FName * __cdecl FCommonActivatableSlateMetaData::GetTypeId(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_FCommonActivatableSlateMetaData::GetTypeId(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_FCommonActivatableSlateMetaData::GetTypeId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_FCommonActivatableSlateMetaData::GetTypeId(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName_const&___ptr64___cdecl_FCommonActivatableSlateMetaData::GetTypeId(void)'
                      ::__l2::Type,L"FCommonActivatableSlateMetaData");
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_FCommonActivatableSlateMetaData::GetTypeId(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FName_const&___ptr64___cdecl_FCommonActivatableSlateMetaData::GetTypeId(void)'
              ::__l2::Type;
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_FCommonActivatableSlateMetaData::GetTypeId(void)'
          ::__l2::Type;
}

// IsOfTypeImpl @ 14a7f6310

bool __thiscall
FCommonActivatableSlateMetaData::IsOfTypeImpl(FCommonActivatableSlateMetaData *this,FName *param_1)

{
  FName *pFVar1;
  
  pFVar1 = GetTypeId();
  return *pFVar1 == *param_1;
}

