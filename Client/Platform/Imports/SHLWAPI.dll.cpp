// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Imports
// Functions: 9

// PathFileExistsW @ 15018f727

BOOL __stdcall PathFileExistsW(LPCWSTR pszPath)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015018f727. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = PathFileExistsW(pszPath);
  return BVar1;
}

// __tailMerge_shlwapi_dll @ 15018f72d

void __tailMerge_shlwapi_dll
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _func___cdecl_long64 **in_RAX;
  _func___cdecl_long64 *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = __delayLoadHelper2((ImgDelayDescr *)&ImgDelayDescr_154b607fc,in_RAX);
                    /* WARNING: Could not recover jumptable at 0x00015018f7a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
  return;
}

// DelayLoad_PathFileExistsW @ 15018f7ac

void DelayLoad_PathFileExistsW(void)

{
  __tailMerge_shlwapi_dll();
  return;
}

// PathFindFileNameW @ 15018f7be

LPWSTR __stdcall PathFindFileNameW(LPCWSTR pszPath)

{
  LPWSTR pWVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015018f7be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pWVar1 = PathFindFileNameW(pszPath);
  return pWVar1;
}

// DelayLoad_PathFindFileNameW @ 15018f7ca

void DelayLoad_PathFindFileNameW(void)

{
  __tailMerge_shlwapi_dll();
  return;
}

// PathRenameExtensionW @ 15018f7dc

BOOL __stdcall PathRenameExtensionW(LPWSTR pszPath,LPCWSTR pszExt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015018f7dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = PathRenameExtensionW(pszPath,pszExt);
  return BVar1;
}

// DelayLoad_PathRenameExtensionW @ 15018f7e8

void DelayLoad_PathRenameExtensionW(void)

{
  __tailMerge_shlwapi_dll();
  return;
}

// QISearch @ 15018f7fa

HRESULT __stdcall QISearch(void *that,LPCQITAB pqit,IID *riid,void **ppv)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015018f7fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = QISearch(that,pqit,riid,ppv);
  return HVar1;
}

// DelayLoad_Ordinal_219 @ 15018f806

void DelayLoad_Ordinal_219(void)

{
  __tailMerge_shlwapi_dll();
  return;
}

