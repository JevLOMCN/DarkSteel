// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NGX
// Functions: 3

// DefaultErrorCallback @ 14ff40530

void __cdecl ngx::util::DefaultErrorCallback(char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014ff40542. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MessageBoxA((HWND)0x0,param_1,"Error",0x30);
  return;
}

// error @ 14ff40550

void __cdecl ngx::util::error(char *param_1,int param_2,char *param_3,char *param_4)

{
  errorva(param_1,param_2,param_3,param_4,&stack0x00000028);
  return;
}

// errorva @ 14ff40580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl ngx::util::errorva(char *param_1,int param_2,char *param_3,char *param_4,char *param_5)

{
  _func___cdecl_void_char_ptr *p_Var1;
  ulong64 *puVar2;
  undefined1 auStackY_868 [32];
  undefined1 local_838 [1024];
  char local_438 [1024];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_868;
  logva(param_1,param_2,param_3,param_4,NVSDK_NGX_LOGGING_LEVEL_ON,param_5);
  if ((g_errorCallback != (_func___cdecl_void_char_ptr *)0x0) && (g_breakOnError == false)) {
    puVar2 = __local_stdio_printf_options();
    __stdio_common_vsprintf_s(*puVar2,local_838,0x400,param_4);
    nvSprintf(local_438,0x400,"[%s:%d] %s");
    p_Var1 = g_errorCallback;
    (*__guard_check_icall_fptr)(g_errorCallback);
    (*p_Var1)(local_438);
  }
  return;
}

