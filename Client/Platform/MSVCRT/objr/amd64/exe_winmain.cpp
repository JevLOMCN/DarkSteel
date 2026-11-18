// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 11

// pre_c_initialization @ 15015c5fc

int __cdecl pre_c_initialization(void)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  _crt_argv_mode _Var4;
  
  _set_app_type(2);
  iVar3 = _get_startup_file_mode();
  _set_fmode(iVar3);
  iVar3 = _get_startup_commit_mode();
  piVar1 = (int *)__p__commode();
  *piVar1 = iVar3;
  bVar2 = __scrt_initialize_onexit_tables(exe);
  if (bVar2) {
    _RTC_Initialize();
    atexit(_RTC_Terminate);
    _Var4 = _get_startup_argv_mode();
    iVar3 = _configure_narrow_argv(_Var4);
    if (iVar3 == 0) {
      __scrt_initialize_type_info();
      iVar3 = __scrt_is_user_matherr_present();
      if (iVar3 != 0) {
        __setusermatherr(_matherr);
      }
      _initialize_invalid_parameter_handler();
      _initialize_denormal_control();
      iVar3 = _get_startup_thread_locale_mode();
      _configthreadlocale(iVar3);
      bVar2 = _should_initialize_environment();
      if (bVar2) {
        _initialize_narrow_environment();
      }
      __scrt_initialize_winrt();
      iVar3 = __scrt_initialize_mta();
      if (iVar3 == 0) {
        return 0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __scrt_fastfail(7);
}

// post_pgo_initialization @ 15015c6b8

int __cdecl post_pgo_initialization(void)

{
  __scrt_initialize_default_local_stdio_options();
  return 0;
}

// pre_cpp_initialization @ 15015c6d0

void __cdecl pre_cpp_initialization(void)

{
  int iVar1;
  
  __scrt_set_unhandled_exception_filter();
  iVar1 = _get_startup_new_mode();
  _set_new_mode(iVar1);
  return;
}

// __scrt_common_main @ 15015c6f0

int __cdecl __scrt_common_main(void)

{
  int iVar1;
  
  __security_init_cookie();
  iVar1 = __scrt_common_main_seh();
  return iVar1;
}

// __scrt_common_main_seh @ 15015c708

int __cdecl __scrt_common_main_seh(void)

{
  bool bVar1;
  bool bVar2;
  ushort uVar3;
  int iVar4;
  _func___cdecl_void_void_ptr_ulong_void_ptr **pp_Var5;
  char *pcVar6;
  
  bVar1 = __scrt_initialize_crt(exe);
  if (!bVar1) {
                    /* WARNING: Subroutine does not return */
    __scrt_fastfail(7);
  }
  bVar1 = false;
  bVar2 = __scrt_acquire_startup_lock();
  if (__scrt_current_native_startup_state == initializing) {
                    /* WARNING: Subroutine does not return */
    __scrt_fastfail(7);
  }
  if (__scrt_current_native_startup_state == uninitialized) {
    __scrt_current_native_startup_state = initializing;
    iVar4 = _initterm_e(&__xi_a,&__xi_z);
    if (iVar4 != 0) {
      return 0xff;
    }
    _initterm(&__xc_a);
    __scrt_current_native_startup_state = initialized;
  }
  else {
    bVar1 = true;
  }
  __scrt_release_startup_lock(bVar2);
  pp_Var5 = __scrt_get_dyn_tls_init_callback();
  if ((*pp_Var5 != (_func___cdecl_void_void_ptr_ulong_void_ptr *)0x0) &&
     (bVar2 = __scrt_is_nonwritable_in_current_image(pp_Var5), bVar2)) {
    (*__guard_dispatch_icall_fptr)(0);
  }
  pp_Var5 = __scrt_get_dyn_tls_dtor_callback();
  if ((*pp_Var5 != (_func___cdecl_void_void_ptr_ulong_void_ptr *)0x0) &&
     (bVar2 = __scrt_is_nonwritable_in_current_image(pp_Var5), bVar2)) {
    _register_thread_local_exe_atexit_callback(*pp_Var5);
  }
  uVar3 = __scrt_get_show_window_mode();
  pcVar6 = (char *)_get_narrow_winmain_command_line();
  iVar4 = WinMain((HINSTANCE__ *)&switchD_1501dbc7b::caseD_1,(HINSTANCE__ *)0x0,pcVar6,(uint)uVar3);
  bVar2 = __scrt_is_managed_app();
  if (bVar2) {
    if (!bVar1) {
      _cexit();
    }
    __scrt_uninitialize_crt(true,false);
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  exit(iVar4);
}

// invoke_main @ 15015c880

int __cdecl invoke_main(void)

{
  int iVar1;
  ushort uVar2;
  undefined2 extraout_AX;
  undefined2 extraout_var;
  undefined4 extraout_var_00;
  
  uVar2 = __scrt_get_show_window_mode();
  _get_narrow_winmain_command_line();
  iVar1 = WinMain((HINSTANCE__ *)&switchD_1501dbc7b::caseD_1,(HINSTANCE__ *)0x0,
                  (char *)CONCAT44(extraout_var_00,CONCAT22(extraout_var,extraout_AX)),(uint)uVar2);
  return iVar1;
}

// set_app_type @ 15015c8b4

void __cdecl __scrt_winmain_policy::set_app_type(void)

{
  _set_app_type(2);
  return;
}

// set_commode @ 15015c8c4

void __cdecl __scrt_file_policy::set_commode(void)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = _get_startup_commit_mode();
  piVar1 = (int *)__p__commode();
  *piVar1 = iVar2;
  return;
}

// set_fmode @ 15015c8e4

void __cdecl __scrt_file_policy::set_fmode(void)

{
  int _Mode;
  
  _Mode = _get_startup_file_mode();
  _set_fmode(_Mode);
  return;
}

// WinMainCRTStartup @ 15015c900

ulong __cdecl WinMainCRTStartup(void *param_1)

{
  ulong uVar1;
  
  __security_init_cookie();
  uVar1 = __scrt_common_main_seh();
  return uVar1;
}

// filt$0 @ 15032c255

void `__scrt_common_main_seh'::__l1::filt_0(undefined8 *param_1)

{
  _seh_filter_exe(*(undefined4 *)*param_1,param_1);
  return;
}

