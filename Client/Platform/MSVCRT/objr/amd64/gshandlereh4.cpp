// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 1

// __GSHandlerCheck_EH4 @ 15015c348

_EXCEPTION_DISPOSITION __cdecl
__GSHandlerCheck_EH4
          (_EXCEPTION_RECORD *param_1,void *param_2,_CONTEXT *param_3,_DISPATCHER_CONTEXT *param_4)

{
  void *pvVar1;
  _EXCEPTION_DISPOSITION _Var2;
  
  pvVar1 = param_4->HandlerData;
  __GSHandlerCheckCommon(param_2,param_4,(_GS_HANDLER_DATA *)((longlong)pvVar1 + 4));
  _Var2 = ExceptionContinueSearch;
  if ((*(uint *)((longlong)pvVar1 + 4) & ((param_1->ExceptionFlags & 0x66) != 0) + 1) != 0) {
    _Var2 = __CxxFrameHandler4(param_1,param_2,param_3,param_4);
  }
  return _Var2;
}

