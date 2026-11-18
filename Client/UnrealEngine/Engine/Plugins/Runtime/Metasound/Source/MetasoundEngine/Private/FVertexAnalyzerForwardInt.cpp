// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 2

// ~FVertexAnalyzerForwardInt @ 14b352060

void __thiscall
Metasound::Frontend::FVertexAnalyzerForwardInt::~FVertexAnalyzerForwardInt
          (FVertexAnalyzerForwardInt *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)&this->field_0xd8;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined4 *)&this->field_0xc0 = 0;
  if (*(void **)&this->field_0xb8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb8);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x78);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x8);
  return;
}

// GetAnalyzerName @ 14b3ac800

FName * __cdecl Metasound::Frontend::FVertexAnalyzerForwardInt::GetAnalyzerName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::Frontend::FVertexAnalyzerForwardInt::GetAnalyzerName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::Frontend::FVertexAnalyzerForwardInt::GetAnalyzerName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::Frontend::FVertexAnalyzerForwardInt::GetAnalyzerName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::Frontend::FVertexAnalyzerForwardInt::GetAnalyzerName(void)'
                      ::__l2::AnalyzerName,"UE.Forward.Int32");
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::Frontend::FVertexAnalyzerForwardInt::GetAnalyzerName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::Frontend::FVertexAnalyzerForwardInt::GetAnalyzerName(void)'
              ::__l2::AnalyzerName;
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_Metasound::Frontend::FVertexAnalyzerForwardInt::GetAnalyzerName(void)'
          ::__l2::AnalyzerName;
}

