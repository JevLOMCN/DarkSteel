// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 2

// ~ISearchEngine @ 14ae5c850

void __thiscall Metasound::Frontend::ISearchEngine::~ISearchEngine(ISearchEngine *this)

{
  return;
}

// Get @ 14ae745c0

ISearchEngine * __cdecl Metasound::Frontend::ISearchEngine::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FSearchEngineCore::FSearchEngineCore(&SearchEngine);
      atexit(`Metasound::Frontend::ISearchEngine::Get'::__l2::
             _dynamic_atexit_destructor_for__SearchEngine__);
      _Init_thread_footer(&::_TSS0);
      return (ISearchEngine *)&SearchEngine;
    }
  }
  return (ISearchEngine *)&SearchEngine;
}

