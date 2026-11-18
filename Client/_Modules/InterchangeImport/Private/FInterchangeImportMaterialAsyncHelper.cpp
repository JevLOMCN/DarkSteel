// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 1

// GetInstance @ 14e6f0120

FInterchangeImportMaterialAsyncHelper * __cdecl
FInterchangeImportMaterialAsyncHelper::GetInstance(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Instance,4000);
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)&::Instance.UpdatedMaterialFunctionsLock,4000);
      atexit(`FInterchangeImportMaterialAsyncHelper::GetInstance'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
      return &::Instance;
    }
  }
  return &::Instance;
}

