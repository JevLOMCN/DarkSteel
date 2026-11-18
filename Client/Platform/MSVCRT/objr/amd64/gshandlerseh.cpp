// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 1

// __GSHandlerCheck_SEH @ 15015c0cc

_EXCEPTION_DISPOSITION __cdecl
__GSHandlerCheck_SEH
          (_EXCEPTION_RECORD *param_1,void *param_2,_CONTEXT *param_3,_DISPATCHER_CONTEXT *param_4)

{
  uint uVar1;
  uint *puVar2;
  EXCEPTION_DISPOSITION EVar3;
  
  puVar2 = param_4->HandlerData;
  uVar1 = *puVar2;
  __GSHandlerCheckCommon(param_2,param_4,(_GS_HANDLER_DATA *)(puVar2 + (ulonglong)uVar1 * 4 + 1));
  EVar3 = ExceptionContinueSearch;
  if ((puVar2[(ulonglong)uVar1 * 4 + 1] & ((param_1->ExceptionFlags & 0x66) != 0) + 1) != 0) {
    EVar3 = __C_specific_handler
                      ((_EXCEPTION_RECORD *)param_1,param_2,(_CONTEXT *)param_3,
                       (_DISPATCHER_CONTEXT *)param_4);
  }
  return EVar3;
}

