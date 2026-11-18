// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Imports
// Functions: 8

// _wgetenv @ 15018fff9

wchar_t * __cdecl _wgetenv(wchar_t *_VarName)

{
  wchar_t *pwVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015018fff9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pwVar1 = _wgetenv(_VarName);
  return pwVar1;
}

// getenv @ 150190005

char * __cdecl getenv(char *_VarName)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150190005. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = getenv(_VarName);
  return pcVar1;
}

// _putenv_s @ 150190455

errno_t __cdecl _putenv_s(char *_Name,char *_Value)

{
  errno_t eVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150190455. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  eVar1 = _putenv_s(_Name,_Value);
  return eVar1;
}

// getenv_s @ 150190479

errno_t __cdecl getenv_s(size_t *_ReturnSize,char *_DstBuf,rsize_t _DstSize,char *_VarName)

{
  errno_t eVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150190479. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  eVar1 = getenv_s(_ReturnSize,_DstBuf,_DstSize,_VarName);
  return eVar1;
}

// _wgetenv_s @ 1501905d5

errno_t __cdecl
_wgetenv_s(size_t *_ReturnSize,wchar_t *_DstBuf,size_t _DstSizeInWords,wchar_t *_VarName)

{
  errno_t eVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501905d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  eVar1 = _wgetenv_s(_ReturnSize,_DstBuf,_DstSizeInWords,_VarName);
  return eVar1;
}

// _dupenv_s @ 15019064d

errno_t __cdecl _dupenv_s(char **_PBuffer,size_t *_PBufferSizeInBytes,char *_VarName)

{
  errno_t eVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015019064d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  eVar1 = _dupenv_s(_PBuffer,_PBufferSizeInBytes,_VarName);
  return eVar1;
}

// _wputenv_s @ 150190779

errno_t __cdecl _wputenv_s(wchar_t *_Name,wchar_t *_Value)

{
  errno_t eVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150190779. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  eVar1 = _wputenv_s(_Name,_Value);
  return eVar1;
}

// __p__wenviron @ 150190785

void __p__wenviron(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150190785. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __p__wenviron();
  return;
}

