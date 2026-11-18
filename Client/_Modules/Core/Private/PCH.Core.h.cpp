// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// `vector_constructor_iterator' @ 14146fd90

void __cdecl
_vector_constructor_iterator_
          (void *param_1,ulong64 param_2,ulong64 param_3,_func___cdecl_void_ptr_void_ptr *param_4)

{
  for (; param_3 != 0; param_3 = param_3 - 1) {
    (*param_4)(param_1);
    param_1 = (void *)((longlong)param_1 + param_2);
  }
  return;
}

// `vector_destructor_iterator' @ 14146fde0

void __cdecl
_vector_destructor_iterator_
          (void *param_1,ulong64 param_2,ulong64 param_3,_func___cdecl_void_void_ptr *param_4)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    pvVar1 = (void *)(param_2 * param_3 + (longlong)param_1);
    do {
      pvVar1 = (void *)((longlong)pvVar1 - param_2);
      (*param_4)(pvVar1);
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}

// __empty_global_delete @ 14146fe40

void __cdecl __empty_global_delete(void *param_1)

{
  return;
}

// __empty_global_delete @ 14146fe50

void __cdecl __empty_global_delete(void *param_1,align_val_t param_2)

{
  return;
}

// __empty_global_delete @ 14146fe60

void __cdecl __empty_global_delete(void *param_1,ulong64 param_2)

{
  return;
}

// __empty_global_delete @ 14146fe70

void __cdecl __empty_global_delete(void *param_1,ulong64 param_2,align_val_t param_3)

{
  return;
}

