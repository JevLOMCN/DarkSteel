// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 1

// TProxyData<FMetasoundAssetProxy> @ 14ad94db0

TProxyData<FMetasoundAssetProxy> * __thiscall
Audio::TProxyData<FMetasoundAssetProxy>::TProxyData<FMetasoundAssetProxy>
          (TProxyData<FMetasoundAssetProxy> *this)

{
  uint uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_FMetasoundAssetProxy::GetAudioProxyTypeName(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_FMetasoundAssetProxy::GetAudioProxyTypeName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_FMetasoundAssetProxy::GetAudioProxyTypeName(void)'::__l2
        ::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_FMetasoundAssetProxy::GetAudioProxyTypeName(void)'
                      ::__l2::MyClassName,"FMetasoundAssetProxy");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_FMetasoundAssetProxy::GetAudioProxyTypeName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  uVar1 = `public:_static_class_FName___cdecl_FMetasoundAssetProxy::GetAudioProxyTypeName(void)'::
          __l2::MyClassName.Number;
  *(uint *)&this->field_0x8 =
       `public:_static_class_FName___cdecl_FMetasoundAssetProxy::GetAudioProxyTypeName(void)'::__l2
       ::MyClassName.ComparisonIndex.Value;
  *(uint *)&this->field_0xc = uVar1;
  *(undefined ***)this = &___7__TProxyData_VFMetasoundAssetProxy___Audio__6B_;
  return this;
}

