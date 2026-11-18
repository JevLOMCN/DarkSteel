// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Imports
// Functions: 3

// XAudio2Create @ 14f8dda18

void XAudio2Create(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014f8dda18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_1();
  return;
}

// __tailMerge_xaudio2_9redist_dll @ 14f8dda1e

void __tailMerge_xaudio2_9redist_dll
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _func___cdecl_long64 **in_RAX;
  _func___cdecl_long64 *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = __delayLoadHelper2((ImgDelayDescr *)&ImgDelayDescr_154b606fc,in_RAX);
                    /* WARNING: Could not recover jumptable at 0x00014f8dda95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
  return;
}

// DelayLoad_Ordinal_1 @ 14f8dda9d

void DelayLoad_Ordinal_1(void)

{
  __tailMerge_xaudio2_9redist_dll();
  return;
}

