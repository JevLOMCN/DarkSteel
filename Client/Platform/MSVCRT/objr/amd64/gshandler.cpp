// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 2

// __GSHandlerCheck @ 15015b810

_EXCEPTION_DISPOSITION __cdecl
__GSHandlerCheck(_EXCEPTION_RECORD *param_1,void *param_2,_CONTEXT *param_3,
                _DISPATCHER_CONTEXT *param_4)

{
  __GSHandlerCheckCommon(param_2,param_4,param_4->HandlerData);
  return ExceptionContinueSearch;
}

// __GSHandlerCheckCommon @ 15015b834

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
__GSHandlerCheckCommon(void *param_1,_DISPATCHER_CONTEXT *param_2,_GS_HANDLER_DATA *param_3)

{
  return;
}

