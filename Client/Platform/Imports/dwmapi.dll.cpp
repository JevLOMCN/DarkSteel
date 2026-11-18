// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Imports
// Functions: 4

// DwmGetCompositionTimingInfo @ 15015a9f6

HRESULT __stdcall DwmGetCompositionTimingInfo(HWND hwnd,DWM_TIMING_INFO *pTimingInfo)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a9f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = DwmGetCompositionTimingInfo(hwnd,pTimingInfo);
  return HVar1;
}

// DwmSetWindowAttribute @ 15015aa02

HRESULT __stdcall
DwmSetWindowAttribute(HWND hwnd,DWORD dwAttribute,LPCVOID pvAttribute,DWORD cbAttribute)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015aa02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = DwmSetWindowAttribute(hwnd,dwAttribute,pvAttribute,cbAttribute);
  return HVar1;
}

// DwmIsCompositionEnabled @ 15015aa0e

HRESULT __stdcall DwmIsCompositionEnabled(BOOL *pfEnabled)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015aa0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = DwmIsCompositionEnabled(pfEnabled);
  return HVar1;
}

// DwmFlush @ 15015aa1a

HRESULT __stdcall DwmFlush(void)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015aa1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = DwmFlush();
  return HVar1;
}

