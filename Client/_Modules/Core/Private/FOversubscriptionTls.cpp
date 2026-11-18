// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// GetIsOversubscriptionAllowedRef @ 141499500

bool * __cdecl LowLevelTasks::Private::FOversubscriptionTls::GetIsOversubscriptionAllowedRef(void)

{
  return (bool *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38);
}

