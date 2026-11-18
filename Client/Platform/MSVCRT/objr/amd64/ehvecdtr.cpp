// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 6

// `eh_vector_destructor_iterator' @ 15015c4d0

void __cdecl
_eh_vector_destructor_iterator_
          (void *param_1,ulong64 param_2,ulong64 param_3,_func___cdecl_void_void_ptr *param_4)

{
  void *pvVar1;
  
  pvVar1 = (void *)(param_2 * param_3 + (longlong)param_1);
  while( true ) {
    if (param_3 == 0) break;
    pvVar1 = (void *)((longlong)pvVar1 - param_2);
    (*__guard_dispatch_icall_fptr)(pvVar1);
    param_3 = param_3 - 1;
  }
  return;
}

// `eh_vector_destructor_iterator' @ 15015c544

void __cdecl
_eh_vector_destructor_iterator_
          (void *param_1,ulong64 param_2,int param_3,_func___cdecl_void_void_ptr *param_4)

{
  _eh_vector_destructor_iterator_(param_1,param_2,(longlong)param_3,param_4);
  return;
}

// ArrayUnwindFilter @ 15015c554

int __cdecl ArrayUnwindFilter(_EXCEPTION_POINTERS *param_1)

{
  _EXCEPTION_RECORD *p_Var1;
  _CONTEXT *p_Var2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  p_Var1 = param_1->ExceptionRecord;
  if (p_Var1->ExceptionCode != 0xe06d7363) {
    return 0;
  }
  plVar3 = (longlong *)__current_exception();
  *plVar3 = (longlong)p_Var1;
  p_Var2 = param_1->ContextRecord;
  puVar4 = (undefined8 *)__current_exception_context();
  *puVar4 = p_Var2;
                    /* WARNING: Subroutine does not return */
  terminate();
}

// __ArrayUnwind @ 15015c59c

void __cdecl
__ArrayUnwind(void *param_1,ulong64 param_2,ulong64 param_3,_func___cdecl_void_void_ptr *param_4)

{
  ulong64 uVar1;
  
  for (uVar1 = 0; uVar1 != param_3; uVar1 = uVar1 + 1) {
    param_1 = (void *)((longlong)param_1 - param_2);
    (*__guard_dispatch_icall_fptr)(param_1);
  }
  return;
}

// fin$0 @ 15032c1c2

void ``eh_vector_destructor_iterator''::__l1::fin_0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\0') {
    __ArrayUnwind(*(void **)(param_2 + 0x60),*(ulong64 *)(param_2 + 0x68),
                  *(ulong64 *)(param_2 + 0x70),*(_func___cdecl_void_void_ptr **)(param_2 + 0x78));
  }
  return;
}

// filt$0 @ 15032c1f4

undefined4 `__ArrayUnwind'::__l1::filt_0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)(param_2 + 0x30) = param_1;
  *(undefined8 *)(param_2 + 0x28) = **(undefined8 **)(param_2 + 0x30);
  if (**(int **)(param_2 + 0x28) != -0x1f928c9d) {
    *(undefined4 *)(param_2 + 0x20) = 0;
    return *(undefined4 *)(param_2 + 0x20);
  }
  puVar2 = (undefined8 *)__current_exception();
  *puVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 8);
  puVar2 = (undefined8 *)__current_exception_context();
  *puVar2 = uVar1;
                    /* WARNING: Subroutine does not return */
  terminate();
}

