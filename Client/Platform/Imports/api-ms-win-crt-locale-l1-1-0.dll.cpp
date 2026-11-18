// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Imports
// Functions: 6

// setlocale @ 15018fd35

char * __cdecl setlocale(int _Category,char *_Locale)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015018fd35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = setlocale(_Category,_Locale);
  return pcVar1;
}

// _create_locale @ 15019040d

_locale_t __cdecl _create_locale(int _Category,char *_Locale)

{
  _locale_t plVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015019040d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar1 = _create_locale(_Category,_Locale);
  return plVar1;
}

// _free_locale @ 150190419

void __cdecl _free_locale(_locale_t _Locale)

{
                    /* WARNING: Could not recover jumptable at 0x000150190419. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _free_locale(_Locale);
  return;
}

// _configthreadlocale @ 1501908b1

int __cdecl _configthreadlocale(int _Flag)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501908b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _configthreadlocale(_Flag);
  return iVar1;
}

// __initialize_lconv_for_unsigned_char @ 1501908d5

void __initialize_lconv_for_unsigned_char(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001501908d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __initialize_lconv_for_unsigned_char();
  return;
}

// ___lc_codepage_func @ 150190911

UINT __cdecl ___lc_codepage_func(void)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150190911. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = ___lc_codepage_func();
  return UVar1;
}

