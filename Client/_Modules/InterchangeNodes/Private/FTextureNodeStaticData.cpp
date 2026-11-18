// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeNodes
// Functions: 1

// PayloadSourceFileKey @ 14e49da60

FAttributeKey * __cdecl UE::Interchange::FTextureNodeStaticData::PayloadSourceFileKey(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_UE::Interchange::FAttributeKey_const&___ptr64___cdecl_UE::Interchange::FTextureNodeStaticData::PayloadSourceFileKey(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_UE::Interchange::FAttributeKey_const&___ptr64___cdecl_UE::Interchange::FTextureNodeStaticData::PayloadSourceFileKey(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_UE::Interchange::FAttributeKey_const&___ptr64___cdecl_UE::Interchange::FTextureNodeStaticData::PayloadSourceFileKey(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_struct_UE::Interchange::FAttributeKey_const&___ptr64___cdecl_UE::Interchange::FTextureNodeStaticData::PayloadSourceFileKey(void)'
      ::__l2::AttributeKey.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      `public:_static_struct_UE::Interchange::FAttributeKey_const&___ptr64___cdecl_UE::Interchange::FTextureNodeStaticData::PayloadSourceFileKey(void)'
      ::__l2::AttributeKey.Key.Data.ArrayNum = 0;
      `public:_static_struct_UE::Interchange::FAttributeKey_const&___ptr64___cdecl_UE::Interchange::FTextureNodeStaticData::PayloadSourceFileKey(void)'
      ::__l2::AttributeKey.Key.Data.ArrayMax = 0;
      ::FString::operator=
                (&`public:_static_struct_UE::Interchange::FAttributeKey_const&___ptr64___cdecl_UE::Interchange::FTextureNodeStaticData::PayloadSourceFileKey(void)'
                  ::__l2::AttributeKey.Key,L"__PayloadSourceFile__");
      atexit(`UE::Interchange::FTextureNodeStaticData::PayloadSourceFileKey'::__l2::
             _dynamic_atexit_destructor_for__AttributeKey__);
      _Init_thread_footer(&`public:_static_struct_UE::Interchange::FAttributeKey_const&___ptr64___cdecl_UE::Interchange::FTextureNodeStaticData::PayloadSourceFileKey(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_UE::Interchange::FAttributeKey_const&___ptr64___cdecl_UE::Interchange::FTextureNodeStaticData::PayloadSourceFileKey(void)'
              ::__l2::AttributeKey;
    }
  }
  return &`public:_static_struct_UE::Interchange::FAttributeKey_const&___ptr64___cdecl_UE::Interchange::FTextureNodeStaticData::PayloadSourceFileKey(void)'
          ::__l2::AttributeKey;
}

