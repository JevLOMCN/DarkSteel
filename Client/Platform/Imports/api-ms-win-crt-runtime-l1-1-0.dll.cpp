// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Imports
// Functions: 38

// abort @ 15018fd1d

void __cdecl abort(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015018fd1d. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  abort();
  return;
}

// exit @ 15018fe85

void __cdecl exit(int _Code)

{
                    /* WARNING: Could not recover jumptable at 0x00015018fe85. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  exit(_Code);
  return;
}

// _invoke_watson @ 15018fecd

void __cdecl
_invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00015018fecd. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _invoke_watson(param_1,param_2,param_3,param_4,param_5);
  return;
}

// signal @ 15018ff09

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void signal(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00015018ff09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  signal(param_1);
  return;
}

// _errno @ 15018ffe1

int * __cdecl _errno(void)

{
  int *piVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015018ffe1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  piVar1 = _errno();
  return piVar1;
}

// strerror @ 15018ffed

char * __cdecl strerror(int param_1)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015018ffed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = strerror(param_1);
  return pcVar1;
}

// strerror_s @ 150190089

errno_t __cdecl strerror_s(char *_Buf,size_t _SizeInBytes,int _ErrNum)

{
  errno_t eVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150190089. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  eVar1 = strerror_s(_Buf,_SizeInBytes,_ErrNum);
  return eVar1;
}

// _Exit @ 1501901d9

void _Exit(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001501901d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Exit();
  return;
}

// _beginthreadex @ 1501901e5

uintptr_t __cdecl
_beginthreadex(void *_Security,uint _StackSize,_StartAddress *_StartAddress,void *_ArgList,
              uint _InitFlag,uint *_ThrdAddr)

{
  uintptr_t uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501901e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = _beginthreadex(_Security,_StackSize,_StartAddress,_ArgList,_InitFlag,_ThrdAddr);
  return uVar1;
}

// _set_invalid_parameter_handler @ 1501901fd

_invalid_parameter_handler __cdecl
_set_invalid_parameter_handler(_invalid_parameter_handler _Handler)

{
  _invalid_parameter_handler p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501901fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = _set_invalid_parameter_handler(_Handler);
  return p_Var1;
}

// _invalid_parameter_noinfo @ 150190215

void __cdecl _invalid_parameter_noinfo(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150190215. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}

// _endthreadex @ 1501902a5

void __cdecl _endthreadex(uint _Retval)

{
                    /* WARNING: Could not recover jumptable at 0x0001501902a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _endthreadex(_Retval);
  return;
}

// _getpid @ 1501903b9

int __cdecl _getpid(void)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501903b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _getpid();
  return iVar1;
}

// _invalid_parameter_noinfo_noreturn @ 15019043d

void __cdecl _invalid_parameter_noinfo_noreturn(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015019043d. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo_noreturn();
  return;
}

// _exit @ 1501904c1

void __cdecl _exit(int _Code)

{
                    /* WARNING: Could not recover jumptable at 0x0001501904c1. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _exit(_Code);
  return;
}

// raise @ 1501904cd

int __cdecl raise(int _SigNum)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501904cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = raise(_SigNum);
  return iVar1;
}

// _wassert @ 150190509

void __cdecl _wassert(wchar_t *_Message,wchar_t *_File,uint _Line)

{
                    /* WARNING: Could not recover jumptable at 0x000150190509. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _wassert(_Message,_File,_Line);
  return;
}

// __sys_errlist @ 150190515

char ** __cdecl __sys_errlist(void)

{
  char **ppcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150190515. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppcVar1 = __sys_errlist();
  return ppcVar1;
}

// __sys_nerr @ 150190521

int * __cdecl __sys_nerr(void)

{
  int *piVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150190521. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  piVar1 = __sys_nerr();
  return piVar1;
}

// terminate @ 150190671

void terminate(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150190671. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  terminate();
  return;
}

// _set_abort_behavior @ 1501906e9

uint __cdecl _set_abort_behavior(uint _Flags,uint _Mask)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501906e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = _set_abort_behavior(_Flags,_Mask);
  return uVar1;
}

// _set_error_mode @ 1501906f5

int __cdecl _set_error_mode(int _Mode)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501906f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _set_error_mode(_Mode);
  return iVar1;
}

// _seh_filter_dll @ 1501907d9

void _seh_filter_dll(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001501907d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _seh_filter_dll();
  return;
}

// _configure_narrow_argv @ 1501907e5

void _configure_narrow_argv(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001501907e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _configure_narrow_argv();
  return;
}

// _initialize_narrow_environment @ 1501907f1

void _initialize_narrow_environment(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001501907f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _initialize_narrow_environment();
  return;
}

// _initialize_onexit_table @ 1501907fd

void _initialize_onexit_table(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001501907fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _initialize_onexit_table();
  return;
}

// _register_onexit_function @ 150190809

void _register_onexit_function(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150190809. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _register_onexit_function();
  return;
}

// _execute_onexit_table @ 150190815

void _execute_onexit_table(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150190815. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _execute_onexit_table();
  return;
}

// _crt_atexit @ 150190821

void _crt_atexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150190821. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _crt_atexit();
  return;
}

// _crt_at_quick_exit @ 15019082d

void _crt_at_quick_exit(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015019082d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _crt_at_quick_exit();
  return;
}

// _cexit @ 150190839

void __cdecl _cexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150190839. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _cexit();
  return;
}

// _seh_filter_exe @ 150190845

void _seh_filter_exe(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150190845. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _seh_filter_exe();
  return;
}

// _set_app_type @ 150190851

void _set_app_type(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150190851. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _set_app_type();
  return;
}

// _get_narrow_winmain_command_line @ 150190869

void _get_narrow_winmain_command_line(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150190869. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _get_narrow_winmain_command_line();
  return;
}

// _initterm @ 150190875

void _initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150190875. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _initterm();
  return;
}

// _initterm_e @ 150190881

void _initterm_e(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150190881. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _initterm_e();
  return;
}

// _c_exit @ 150190899

void __cdecl _c_exit(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150190899. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _c_exit();
  return;
}

// _register_thread_local_exe_atexit_callback @ 1501908a5

void _register_thread_local_exe_atexit_callback(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001501908a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _register_thread_local_exe_atexit_callback();
  return;
}

