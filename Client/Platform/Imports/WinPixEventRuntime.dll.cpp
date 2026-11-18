// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Imports
// Functions: 5

// PIXGetThreadInfo @ 14f31604a

void PIXGetThreadInfo(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014f31604a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PIXGetThreadInfo();
  return;
}

// __tailMerge_winpixeventruntime_dll @ 14f316050

void __tailMerge_winpixeventruntime_dll
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _func___cdecl_long64 **in_RAX;
  _func___cdecl_long64 *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = __delayLoadHelper2((ImgDelayDescr *)&ImgDelayDescr_154b605fc,in_RAX);
                    /* WARNING: Could not recover jumptable at 0x00014f3160c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
  return;
}

// DelayLoad_PIXGetThreadInfo @ 14f3160cf

void DelayLoad_PIXGetThreadInfo(void)

{
  __tailMerge_winpixeventruntime_dll();
  return;
}

// PIXEventsReplaceBlock @ 14f3160e1

void PIXEventsReplaceBlock(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014f3160e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PIXEventsReplaceBlock();
  return;
}

// DelayLoad_PIXEventsReplaceBlock @ 14f3160ed

void DelayLoad_PIXEventsReplaceBlock(void)

{
  __tailMerge_winpixeventruntime_dll();
  return;
}

