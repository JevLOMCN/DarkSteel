// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 22

// configure_argv @ 15015af5c

int __cdecl __scrt_narrow_argv_policy::configure_argv(void)

{
  _crt_argv_mode _Var1;
  int iVar2;
  
  _Var1 = _get_startup_argv_mode();
  iVar2 = _configure_narrow_argv(_Var1);
  return iVar2;
}

// find_pe_section @ 15015af78

_IMAGE_SECTION_HEADER * __cdecl find_pe_section(uchar *param_1,ulong64 param_2)

{
  _IMAGE_SECTION_HEADER *p_Var1;
  longlong lVar2;
  _IMAGE_SECTION_HEADER *p_Var3;
  
  lVar2 = (longlong)*(int *)(param_1 + 0x3c);
  p_Var3 = (_IMAGE_SECTION_HEADER *)
           (param_1 + (ulonglong)*(ushort *)(param_1 + lVar2 + 0x14) + 0x18 + lVar2);
  p_Var1 = p_Var3 + *(ushort *)(param_1 + lVar2 + 6);
  while( true ) {
    if (p_Var3 == p_Var1) {
      return (_IMAGE_SECTION_HEADER *)0x0;
    }
    if ((p_Var3->VirtualAddress <= param_2) &&
       (param_2 < (p_Var3->Misc).PhysicalAddress + p_Var3->VirtualAddress)) break;
    p_Var3 = p_Var3 + 1;
  }
  return p_Var3;
}

// initialize_environment @ 15015afc8

int __cdecl __scrt_narrow_environment_policy::initialize_environment(void)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501907f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _initialize_narrow_environment();
  return iVar1;
}

// is_potentially_valid_image_base @ 15015afd4

bool __cdecl is_potentially_valid_image_base(void *param_1)

{
  if (((param_1 != (void *)0x0) && (*(short *)param_1 == 0x5a4d)) &&
     (*(int *)((longlong)*(int *)((longlong)param_1 + 0x3c) + (longlong)param_1) == 0x4550)) {
    return *(short *)((longlong)*(int *)((longlong)param_1 + 0x3c) + 0x18 + (longlong)param_1) ==
           0x20b;
  }
  return false;
}

// NtCurrentTeb @ 15015b008

_TEB * __cdecl NtCurrentTeb(void)

{
  return Self;
}

// __scrt_acquire_startup_lock @ 15015b018

bool __cdecl __scrt_acquire_startup_lock(void)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  bool bVar4;
  
  iVar2 = __scrt_is_ucrt_dll_in_use();
  if (iVar2 == 0) {
LAB_15015b046:
    bVar4 = false;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar4 = __scrt_native_startup_lock == (void *)0x0;
      pvVar1 = *(void **)((longlong)Self + 8);
      if (!bVar4) {
        pvVar3 = __scrt_native_startup_lock;
        pvVar1 = __scrt_native_startup_lock;
      }
      __scrt_native_startup_lock = pvVar1;
      UNLOCK();
      if (bVar4) goto LAB_15015b046;
    } while (*(void **)((longlong)Self + 8) != pvVar3);
    bVar4 = true;
  }
  return bVar4;
}

// __scrt_dllmain_after_initialize_c @ 15015b058

bool __cdecl __scrt_dllmain_after_initialize_c(void)

{
  int iVar1;
  _crt_argv_mode _Var2;
  
  iVar1 = __scrt_is_ucrt_dll_in_use();
  if (iVar1 == 0) {
    _Var2 = _get_startup_argv_mode();
    iVar1 = _configure_narrow_argv(_Var2);
    if (iVar1 != 0) {
      return false;
    }
    _initialize_narrow_environment();
  }
  else {
    __isa_available_init();
  }
  return true;
}

// __scrt_dllmain_before_initialize_c @ 15015b094

bool __cdecl __scrt_dllmain_before_initialize_c(void)

{
  bool bVar1;
  
  bVar1 = __scrt_initialize_onexit_tables(dll);
  return bVar1;
}

// __scrt_dllmain_crt_thread_attach @ 15015b0b0

bool __cdecl __scrt_dllmain_crt_thread_attach(void)

{
  bool bVar1;
  
  bVar1 = __scrt_stub_for_acrt_thread_attach();
  if (bVar1) {
    bVar1 = __scrt_stub_for_acrt_thread_attach();
    if (bVar1) {
      return true;
    }
    __scrt_stub_for_acrt_thread_detach();
  }
  return false;
}

// __scrt_dllmain_crt_thread_detach @ 15015b0e0

bool __cdecl __scrt_dllmain_crt_thread_detach(void)

{
  __scrt_stub_for_acrt_thread_detach();
  __scrt_stub_for_acrt_thread_detach();
  return true;
}

// __scrt_dllmain_exception_filter @ 15015b0fc

int __cdecl
__scrt_dllmain_exception_filter
          (HINSTANCE__ *param_1,ulong param_2,void *param_3,
          _func___cdecl_int_HINSTANCE___ptr_ulong_void_ptr *param_4,ulong param_5,
          _EXCEPTION_POINTERS *param_6)

{
  int iVar1;
  
  iVar1 = __scrt_is_ucrt_dll_in_use();
  if ((iVar1 == 0) && (param_2 == 1)) {
    (*__guard_dispatch_icall_fptr)(param_1,0,param_3);
  }
  iVar1 = _seh_filter_dll(param_5,param_6);
  return iVar1;
}

// __scrt_dllmain_uninitialize_c @ 15015b164

void __cdecl __scrt_dllmain_uninitialize_c(void)

{
  int iVar1;
  
  iVar1 = __scrt_is_ucrt_dll_in_use();
  if (iVar1 != 0) {
    _execute_onexit_table(&module_local_atexit_table);
    return;
  }
  iVar1 = __scrt_stub_for_is_c_termination_complete();
  if (iVar1 == 0) {
    _cexit();
  }
  return;
}

// __scrt_dllmain_uninitialize_critical @ 15015b19c

void __cdecl __scrt_dllmain_uninitialize_critical(void)

{
  bool bVar1;
  
  bVar1 = false;
  __scrt_stub_for_acrt_uninitialize_critical(false);
  __scrt_stub_for_acrt_uninitialize_critical(bVar1);
  return;
}

// __scrt_initialize_crt @ 15015b1b8

bool __cdecl __scrt_initialize_crt(__scrt_module_type param_1)

{
  bool bVar1;
  
  if (param_1 == dll) {
    is_initialized_as_dll = true;
  }
  __isa_available_init();
  bVar1 = __scrt_stub_for_acrt_initialize();
  if (bVar1) {
    bVar1 = __scrt_stub_for_acrt_initialize();
    if (bVar1) {
      return true;
    }
    __scrt_stub_for_acrt_uninitialize(false);
  }
  return false;
}

// __scrt_initialize_onexit_tables @ 15015b1f8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl __scrt_initialize_onexit_tables(__scrt_module_type param_1)

{
  int iVar1;
  
  if (!module_local_atexit_table_initialized) {
    if (exe < param_1) {
                    /* WARNING: Subroutine does not return */
      __scrt_fastfail(5);
    }
    iVar1 = __scrt_is_ucrt_dll_in_use();
    if ((iVar1 == 0) || (param_1 != dll)) {
      module_local_atexit_table._first = ___xmm_ffffffffffffffffffffffffffffffff;
      module_local_atexit_table._last = _UNK_15060db28;
      module_local_atexit_table._end = (_func___cdecl_void **)0xffffffffffffffff;
      module_local_at_quick_exit_table._first = ___xmm_ffffffffffffffffffffffffffffffff;
      module_local_at_quick_exit_table._last = _UNK_15060db28;
      module_local_at_quick_exit_table._end = (_func___cdecl_void **)0xffffffffffffffff;
    }
    else {
      iVar1 = _initialize_onexit_table(&module_local_atexit_table);
      if ((iVar1 != 0) ||
         (iVar1 = _initialize_onexit_table(&module_local_at_quick_exit_table), iVar1 != 0)) {
        return false;
      }
    }
    module_local_atexit_table_initialized = true;
  }
  return true;
}

// __scrt_is_nonwritable_in_current_image @ 15015b28c

bool __cdecl __scrt_is_nonwritable_in_current_image(void *param_1)

{
  word *pwVar1;
  longlong lVar2;
  word *pwVar3;
  
  if (switchD_1501dbc7b::caseD_1.e_magic == (char  [2])0x5a4d) {
    lVar2 = (longlong)(int)switchD_1501dbc7b::caseD_1.e_lfanew;
    if ((*(int *)(switchD_1501dbc7b::caseD_1.e_magic + lVar2) == 0x4550) &&
       (*(short *)((longlong)switchD_1501dbc7b::caseD_1.e_res_4_ + lVar2 + -4) == 0x20b)) {
      pwVar3 = (word *)(switchD_1501dbc7b::caseD_1.e_magic + lVar2 +
                       (ulonglong)
                       *(ushort *)((longlong)switchD_1501dbc7b::caseD_1.e_res_4_ + lVar2 + -8) +
                       0x18);
      pwVar1 = pwVar3 + (ulonglong)*(ushort *)(switchD_1501dbc7b::caseD_1.e_magic + lVar2 + 6) *
                        0x14;
      for (; pwVar3 != pwVar1; pwVar3 = pwVar3 + 0x14) {
        if (((ulonglong)*(uint *)(pwVar3 + 6) <= (longlong)param_1 - 0x140000000U) &&
           ((longlong)param_1 - 0x140000000U <
            (ulonglong)(*(int *)(pwVar3 + 4) + *(uint *)(pwVar3 + 6)))) goto LAB_15015b302;
      }
      pwVar3 = (word *)0x0;
LAB_15015b302:
      if (pwVar3 == (word *)0x0) {
        return false;
      }
      if (*(int *)(pwVar3 + 0x12) < 0) {
        return false;
      }
      return true;
    }
  }
  return false;
}

// __scrt_release_startup_lock @ 15015b32c

void __cdecl __scrt_release_startup_lock(bool param_1)

{
  int iVar1;
  
  iVar1 = __scrt_is_ucrt_dll_in_use();
  if ((iVar1 != 0) && (!param_1)) {
    LOCK();
    __scrt_native_startup_lock = (void *)0x0;
    UNLOCK();
  }
  return;
}

// __scrt_uninitialize_crt @ 15015b358

bool __cdecl __scrt_uninitialize_crt(bool param_1,bool param_2)

{
  if ((!is_initialized_as_dll) || (!param_2)) {
    __scrt_stub_for_acrt_uninitialize(param_1);
    __scrt_stub_for_acrt_uninitialize(param_1);
  }
  return true;
}

// _onexit @ 15015b388

_func___cdecl_int * __cdecl _onexit(_func___cdecl_int *param_1)

{
  int iVar1;
  _func___cdecl_int *p_Var2;
  
  if (module_local_atexit_table._first == (_func___cdecl_void **)0xffffffffffffffff) {
    iVar1 = _crt_atexit();
  }
  else {
    iVar1 = _register_onexit_function(&module_local_atexit_table);
  }
  p_Var2 = (_func___cdecl_int *)0x0;
  if (iVar1 == 0) {
    p_Var2 = param_1;
  }
  return p_Var2;
}

// at_quick_exit @ 15015b3c8

int __cdecl at_quick_exit(_func___cdecl_void *param_1)

{
  int iVar1;
  
  if (module_local_at_quick_exit_table._first != (_func___cdecl_void **)0xffffffffffffffff) {
    iVar1 = _register_onexit_function(&module_local_at_quick_exit_table,param_1);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00015019082d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _crt_at_quick_exit();
  return iVar1;
}

// atexit @ 15015b3ec

int __cdecl atexit(_func___cdecl_void *param_1)

{
  _func___cdecl_int *p_Var1;
  
  p_Var1 = _onexit((_func___cdecl_int *)param_1);
  return (p_Var1 != (_func___cdecl_int *)0x0) - 1;
}

// __scrt_is_nonwritable_in_current_image$filt$0 @ 15032c172

bool __scrt_is_nonwritable_in_current_image_filt_0(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}

