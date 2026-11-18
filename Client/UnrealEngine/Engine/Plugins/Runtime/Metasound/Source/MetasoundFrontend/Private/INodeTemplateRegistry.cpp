// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 2

// ~INodeTemplateRegistry @ 14ae5c830

void __thiscall
Metasound::Frontend::INodeTemplateRegistry::~INodeTemplateRegistry(INodeTemplateRegistry *this)

{
  return;
}

// Get @ 14ae74550

INodeTemplateRegistry * __cdecl Metasound::Frontend::INodeTemplateRegistry::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`Metasound::Frontend::INodeTemplateRegistry::Get'::__l2::
             _dynamic_atexit_destructor_for__Registry__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (INodeTemplateRegistry *)&::Registry;
}

