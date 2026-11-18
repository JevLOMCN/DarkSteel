// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 2

// ~IDataTypeRegistry @ 14ad9ebe0

void __thiscall Metasound::Frontend::IDataTypeRegistry::~IDataTypeRegistry(IDataTypeRegistry *this)

{
  return;
}

// Get @ 14adbbbb0

IDataTypeRegistry * __cdecl Metasound::Frontend::IDataTypeRegistry::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Registry.RegistryMapMutex,4000);
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)&::Registry.RegistryObjectMapMutex,4000);
      atexit(`Metasound::Frontend::IDataTypeRegistry::Get'::__l2::
             _dynamic_atexit_destructor_for__Registry__);
      _Init_thread_footer(&::_TSS0);
      return (IDataTypeRegistry *)&::Registry;
    }
  }
  return (IDataTypeRegistry *)&::Registry;
}

