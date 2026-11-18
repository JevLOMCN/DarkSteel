// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Imports
// Functions: 12

// ImmGetDescriptionW @ 15015aa26

UINT __stdcall ImmGetDescriptionW(HKL param_1,LPWSTR lpszDescription,UINT uBufLen)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015aa26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = ImmGetDescriptionW(param_1,lpszDescription,uBufLen);
  return UVar1;
}

// ImmGetIMEFileNameW @ 15015aa32

UINT __stdcall ImmGetIMEFileNameW(HKL param_1,LPWSTR lpszFileName,UINT uBufLen)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015aa32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = ImmGetIMEFileNameW(param_1,lpszFileName,uBufLen);
  return UVar1;
}

// ImmGetProperty @ 15015aa3e

DWORD __stdcall ImmGetProperty(HKL param_1,DWORD param_2)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015aa3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = ImmGetProperty(param_1,param_2);
  return DVar1;
}

// ImmCreateContext @ 15015aa4a

HIMC __stdcall ImmCreateContext(void)

{
  HIMC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015aa4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = ImmCreateContext();
  return pHVar1;
}

// ImmDestroyContext @ 15015aa56

BOOL __stdcall ImmDestroyContext(HIMC param_1)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015aa56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImmDestroyContext(param_1);
  return BVar1;
}

// ImmGetContext @ 15015aa62

HIMC __stdcall ImmGetContext(HWND param_1)

{
  HIMC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015aa62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = ImmGetContext(param_1);
  return pHVar1;
}

// ImmReleaseContext @ 15015aa6e

BOOL __stdcall ImmReleaseContext(HWND param_1,HIMC param_2)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015aa6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImmReleaseContext(param_1,param_2);
  return BVar1;
}

// ImmAssociateContext @ 15015aa7a

HIMC __stdcall ImmAssociateContext(HWND param_1,HIMC param_2)

{
  HIMC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015aa7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = ImmAssociateContext(param_1,param_2);
  return pHVar1;
}

// ImmGetCompositionStringW @ 15015aa86

LONG __stdcall ImmGetCompositionStringW(HIMC param_1,DWORD param_2,LPVOID lpBuf,DWORD dwBufLen)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015aa86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = ImmGetCompositionStringW(param_1,param_2,lpBuf,dwBufLen);
  return LVar1;
}

// ImmNotifyIME @ 15015aa92

BOOL __stdcall ImmNotifyIME(HIMC param_1,DWORD dwAction,DWORD dwIndex,DWORD dwValue)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015aa92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImmNotifyIME(param_1,dwAction,dwIndex,dwValue);
  return BVar1;
}

// ImmSetCompositionWindow @ 15015aa9e

BOOL __stdcall ImmSetCompositionWindow(HIMC param_1,LPCOMPOSITIONFORM lpCompForm)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015aa9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImmSetCompositionWindow(param_1,lpCompForm);
  return BVar1;
}

// ImmSetCandidateWindow @ 15015aaaa

BOOL __stdcall ImmSetCandidateWindow(HIMC param_1,LPCANDIDATEFORM lpCandidate)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015aaaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImmSetCandidateWindow(param_1,lpCandidate);
  return BVar1;
}

