// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 2

// ~IVertexAnalyzerRegistry @ 14ad9eda0

void __thiscall
Metasound::Frontend::IVertexAnalyzerRegistry::~IVertexAnalyzerRegistry
          (IVertexAnalyzerRegistry *this)

{
  return;
}

// Get @ 14adbbe70

IVertexAnalyzerRegistry * __cdecl Metasound::Frontend::IVertexAnalyzerRegistry::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`Metasound::Frontend::IVertexAnalyzerRegistry::Get'::__l2::
             _dynamic_atexit_destructor_for__Registry__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IVertexAnalyzerRegistry *)&::Registry;
}

