// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 2

// Strfind @ 145e702b0

wchar_t * __cdecl TCString<wchar_t>::Strfind(wchar_t *param_1,wchar_t *param_2,bool param_3)

{
  wchar_t wVar1;
  wchar_t wVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  size_t sVar6;
  wchar_t *_Str1;
  int iVar7;
  
  if ((param_2 != (wchar_t *)0x0) && (param_1 != (wchar_t *)0x0)) {
    wVar1 = *param_2;
    bVar4 = false;
    sVar6 = wcslen(param_2);
    wVar2 = *param_1;
    _Str1 = param_1 + 1;
    iVar7 = (int)sVar6 + -1;
    if (param_3) {
      bVar3 = false;
      while (wVar2 != L'\0') {
        if (((!bVar3) && (!bVar4)) &&
           ((wVar2 == wVar1 && (iVar5 = wcsncmp(_Str1,param_2 + 1,(longlong)iVar7), iVar5 == 0)))) {
LAB_145e70377:
          return _Str1 + -1;
        }
        if ((((ushort)(wVar2 + L'﾿') < 0x1a) || ((ushort)(wVar2 + L'ﾟ') < 0x1a)) ||
           ((ushort)(wVar2 + L'￐') < 10)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if (wVar2 == L'\"') {
          bVar3 = !bVar3;
        }
        wVar2 = *_Str1;
        _Str1 = _Str1 + 1;
      }
    }
    else {
      while (wVar2 != L'\0') {
        if (((!bVar4) && (wVar2 == wVar1)) &&
           (iVar5 = wcsncmp(_Str1,param_2 + 1,(longlong)iVar7), iVar5 == 0)) goto LAB_145e70377;
        if ((((ushort)(wVar2 + L'﾿') < 0x1a) || ((ushort)(wVar2 + L'ﾟ') < 0x1a)) ||
           ((ushort)(wVar2 + L'￐') < 10)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        wVar2 = *_Str1;
        _Str1 = _Str1 + 1;
      }
    }
  }
  return (wchar_t *)0x0;
}

// Strlen @ 145e70400

int __cdecl TCString<char>::Strlen(char *param_1)

{
  size_t sVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015018fbe5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = strlen(param_1);
  return (int)sVar1;
}

