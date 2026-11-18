// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Imports
// Functions: 3

// DMLCreateDevice @ 14ffce08d

void DMLCreateDevice(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014ffce08d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DMLCreateDevice();
  return;
}

// __tailMerge_directml_dll @ 14ffce093

void __tailMerge_directml_dll
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _func___cdecl_long64 **in_RAX;
  _func___cdecl_long64 *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = __delayLoadHelper2((ImgDelayDescr *)&ImgDelayDescr_154b6077c,in_RAX);
                    /* WARNING: Could not recover jumptable at 0x00014ffce10a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
  return;
}

// DelayLoad_Ordinal_1 @ 14ffce112

void DelayLoad_Ordinal_1(void)

{
  __tailMerge_directml_dll();
  return;
}

