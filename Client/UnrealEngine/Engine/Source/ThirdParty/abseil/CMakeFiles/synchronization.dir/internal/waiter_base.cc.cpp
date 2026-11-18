// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 1

// MaybeBecomeIdle @ 1501f37b0

/* protected: static void __cdecl
   absl::lts_20240722::synchronization_internal::WaiterBase::MaybeBecomeIdle(void) */

void __cdecl absl::lts_20240722::synchronization_internal::WaiterBase::MaybeBecomeIdle(void)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0x9e78);
  if ((*(char *)(lVar1 + 0x150) == '\0') &&
     (0x3c < *(int *)(lVar1 + 0x148) - *(int *)(lVar1 + 0x14c))) {
    *(undefined1 *)(lVar1 + 0x150) = 1;
  }
  return;
}

