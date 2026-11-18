// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 3

// `eh_vector_constructor_iterator' @ 15015c448

void __cdecl
_eh_vector_constructor_iterator_
          (void *param_1,ulong64 param_2,ulong64 param_3,_func___cdecl_void_void_ptr *param_4,
          _func___cdecl_void_void_ptr *param_5)

{
  ulong64 uVar1;
  
  for (uVar1 = 0; uVar1 != param_3; uVar1 = uVar1 + 1) {
    (*__guard_dispatch_icall_fptr)(param_1);
    param_1 = (void *)((longlong)param_1 + param_2);
  }
  return;
}

// `eh_vector_constructor_iterator' @ 15015c4c0

void __cdecl
_eh_vector_constructor_iterator_
          (void *param_1,ulong64 param_2,int param_3,_func___cdecl_void_void_ptr *param_4,
          _func___cdecl_void_void_ptr *param_5)

{
  _eh_vector_constructor_iterator_(param_1,param_2,(longlong)param_3,param_4,param_5);
  return;
}

// fin$0 @ 15032c190

void ``eh_vector_constructor_iterator''::__l1::fin_0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\0') {
    __ArrayUnwind(*(void **)(param_2 + 0x50),*(ulong64 *)(param_2 + 0x58),
                  *(ulong64 *)(param_2 + 0x28),*(_func___cdecl_void_void_ptr **)(param_2 + 0x70));
  }
  return;
}

