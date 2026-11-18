// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Imports
// Functions: 3

// GetFileVersionInfoSizeW @ 15018f703

DWORD __stdcall GetFileVersionInfoSizeW(LPCWSTR lptstrFilename,LPDWORD lpdwHandle)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015018f703. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileVersionInfoSizeW(lptstrFilename,lpdwHandle);
  return DVar1;
}

// GetFileVersionInfoW @ 15018f70f

BOOL __stdcall GetFileVersionInfoW(LPCWSTR lptstrFilename,DWORD dwHandle,DWORD dwLen,LPVOID lpData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015018f70f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetFileVersionInfoW(lptstrFilename,dwHandle,dwLen,lpData);
  return BVar1;
}

// VerQueryValueW @ 15018f71b

BOOL __stdcall VerQueryValueW(LPCVOID pBlock,LPCWSTR lpSubBlock,LPVOID *lplpBuffer,PUINT puLen)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015018f71b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = VerQueryValueW(pBlock,lpSubBlock,lplpBuffer,puLen);
  return BVar1;
}

