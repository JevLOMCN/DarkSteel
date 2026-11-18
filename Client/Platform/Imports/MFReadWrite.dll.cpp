// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Imports
// Functions: 3

// MFCreateSinkWriterFromURL @ 15015aec5

void MFCreateSinkWriterFromURL(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015015aec5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MFCreateSinkWriterFromURL();
  return;
}

// __tailMerge_mfreadwrite_dll @ 15015aecb

void __tailMerge_mfreadwrite_dll
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _func___cdecl_long64 **in_RAX;
  _func___cdecl_long64 *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = __delayLoadHelper2((ImgDelayDescr *)&ImgDelayDescr_154b607dc,in_RAX);
                    /* WARNING: Could not recover jumptable at 0x00015015af42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
  return;
}

// DelayLoad_MFCreateSinkWriterFromURL @ 15015af4a

void DelayLoad_MFCreateSinkWriterFromURL(void)

{
  __tailMerge_mfreadwrite_dll();
  return;
}

