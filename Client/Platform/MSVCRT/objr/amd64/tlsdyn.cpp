// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 3

// __dyn_tls_init @ 15015b40c

void __cdecl __dyn_tls_init(void *param_1,ulong param_2,void *param_3)

{
  longlong lVar1;
  _func___cdecl_void **pp_Var2;
  
  if ((param_2 == 2) &&
     (lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8),
     *(char *)(lVar1 + 0x9d48) != '\x01')) {
    *(undefined1 *)(lVar1 + 0x9d48) = 1;
    for (pp_Var2 = &UE::Trace::Private::GTlsContext_initializer_; pp_Var2 != &__xd_z;
        pp_Var2 = pp_Var2 + 1) {
      if (*pp_Var2 != (_func___cdecl_void *)0x0) {
        (*__guard_dispatch_icall_fptr)();
      }
    }
  }
  return;
}

// __dyn_tls_on_demand_init @ 15015b478

void __cdecl __dyn_tls_on_demand_init(void)

{
  __dyn_tls_init((void *)0x0,2,(void *)0x0);
  return;
}

// __safe_get_tls_index @ 15015b48c

ulong __cdecl __safe_get_tls_index(void)

{
  __dyn_tls_init((void *)0x0,2,(void *)0x0);
  return _tls_index;
}

