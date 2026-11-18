// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// Get @ 1422af000

FObjectPrintHandlerRegistry * __cdecl _anon_77A772C6::FObjectPrintHandlerRegistry::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < `FObjectPrintHandlerRegistry::Get'::`2'::_TSS0) {
    _Init_thread_header(&`FObjectPrintHandlerRegistry::Get'::`2'::_TSS0);
    if (`FObjectPrintHandlerRegistry::Get'::`2'::_TSS0 == -1) {
      atexit(``anonymous_namespace'::FObjectPrintHandlerRegistry::Get'::__l2::
             _dynamic_atexit_destructor_for__Registry__);
      _Init_thread_footer(&`FObjectPrintHandlerRegistry::Get'::`2'::_TSS0);
    }
  }
  return &`FObjectPrintHandlerRegistry::Get'::`2'::Registry;
}

