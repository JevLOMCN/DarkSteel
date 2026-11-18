// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Imports
// Functions: 5

// XInputGetState @ 14f3e5214

void XInputGetState(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014f3e5214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  XInputGetState();
  return;
}

// __tailMerge_xinput1_4_dll @ 14f3e521a

void __tailMerge_xinput1_4_dll
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _func___cdecl_long64 **in_RAX;
  _func___cdecl_long64 *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = __delayLoadHelper2((ImgDelayDescr *)&ImgDelayDescr_154b6061c,in_RAX);
                    /* WARNING: Could not recover jumptable at 0x00014f3e5291. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
  return;
}

// DelayLoad_XInputGetState @ 14f3e5299

void DelayLoad_XInputGetState(void)

{
  __tailMerge_xinput1_4_dll();
  return;
}

// XInputSetState @ 14f3e52ab

void XInputSetState(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014f3e52ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  XInputSetState();
  return;
}

// DelayLoad_XInputSetState @ 14f3e52b7

void DelayLoad_XInputSetState(void)

{
  __tailMerge_xinput1_4_dll();
  return;
}

