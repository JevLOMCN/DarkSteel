// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Imports
// Functions: 3

// D3D11CreateDevice @ 14f89ef73

void D3D11CreateDevice(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014f89ef73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  D3D11CreateDevice();
  return;
}

// __tailMerge_d3d11_dll @ 14f89ef79

void __tailMerge_d3d11_dll
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _func___cdecl_long64 **in_RAX;
  _func___cdecl_long64 *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = __delayLoadHelper2((ImgDelayDescr *)&ImgDelayDescr_154b6069c,in_RAX);
                    /* WARNING: Could not recover jumptable at 0x00014f89eff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
  return;
}

// DelayLoad_D3D11CreateDevice @ 14f89eff8

void DelayLoad_D3D11CreateDevice(void)

{
  __tailMerge_d3d11_dll();
  return;
}

