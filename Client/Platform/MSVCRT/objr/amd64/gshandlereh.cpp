// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 1

// __GSHandlerCheck_EH @ 15015c918

_EXCEPTION_DISPOSITION __cdecl
__GSHandlerCheck_EH(_EXCEPTION_RECORD *param_1,void *param_2,_CONTEXT *param_3,
                   _DISPATCHER_CONTEXT *param_4)

{
  void *pvVar1;
  
  pvVar1 = param_4->HandlerData;
  __GSHandlerCheckCommon(param_2,param_4,(_GS_HANDLER_DATA *)((longlong)pvVar1 + 4));
  if ((*(uint *)((longlong)pvVar1 + 4) & ((param_1->ExceptionFlags & 0x66) != 0) + 1) != 0) {
                    /* WARNING: Subroutine does not return */
    __CxxFrameHandler3(param_1,param_2,param_3,param_4);
  }
  return ExceptionContinueSearch;
}

