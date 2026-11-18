// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AISupportModule
// Functions: 2

// StartupModule @ 14de8e4b0

void __thiscall FAISupportModule::StartupModule(FAISupportModule *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ForceLink = FAIResources::GetResourcesCount();
      _Init_thread_footer(&::_TSS0);
    }
  }
  ForceLink = ForceLink + 1;
  return;
}

// ShutdownModule @ 14de8e520

void __thiscall FAISupportModule::ShutdownModule(FAISupportModule *this)

{
  return;
}

