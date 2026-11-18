// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 3

// `dynamic_atexit_destructor_for_'secondary_variable' @ 140d51bc0

void __cdecl _dynamic_atexit_destructor_for__secondary_variable_(void)

{
  pas_thread_local_cache *ppVar1;
  code *pcVar2;
  
  ppVar1 = *(pas_thread_local_cache **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c10
            );
  if (ppVar1 == (pas_thread_local_cache *)0x0) {
    return;
  }
  pas_fast_tls_set(&DAT_00000001);
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (*(longlong *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08) ==
      1) {
    if (ppVar1 != (pas_thread_local_cache *)&DAT_00000001) {
      destroy(ppVar1,pas_lock_is_not_held);
      return;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

// pas_fast_tls_initialize_if_necessary @ 140d51bf0

void __cdecl pas_fast_tls_initialize_if_necessary(void)

{
  return;
}

// pas_fast_tls_set @ 140d51c00

void __cdecl pas_fast_tls_set(void *param_1)

{
  *(void **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08
            ) = param_1;
  if (param_1 != &DAT_00000001) {
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    *(void **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9c10) = param_1;
  }
  return;
}

