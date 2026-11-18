// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// ContainsWildcards @ 14192f4b0

bool __cdecl FWildcardString::ContainsWildcards(wchar_t *param_1)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  
  if (param_1 != (wchar_t *)0x0) {
    wVar2 = *param_1;
    while (wVar2 != L'\0') {
      if ((wVar2 == L'?') || (wVar2 == L'*')) {
        return true;
      }
      pwVar1 = param_1 + 1;
      param_1 = param_1 + 1;
      wVar2 = *pwVar1;
    }
  }
  return false;
}

// IsMatch @ 141951f10

bool __cdecl FWildcardString::IsMatch(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  
  if ((param_1 != (wchar_t *)0x0) && (param_2 != (wchar_t *)0x0)) {
    wVar1 = *param_2;
    pwVar4 = param_1;
    pwVar2 = (wchar_t *)0x0;
    while (wVar1 != L'\0') {
      wVar1 = *param_1;
      if (wVar1 == L'*') {
        pwVar4 = param_1 + 1;
        if (*pwVar4 == L'\0') {
          return true;
        }
        pwVar3 = param_2 + 1;
        param_1 = pwVar4;
      }
      else if ((wVar1 == L'?') || (wVar1 == *param_2)) {
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        pwVar3 = pwVar2;
      }
      else {
        if (pwVar2 == (wchar_t *)0x0) {
          return false;
        }
        pwVar3 = pwVar2 + 1;
        param_1 = pwVar4;
        param_2 = pwVar2;
      }
      pwVar2 = pwVar3;
      wVar1 = *param_2;
    }
    wVar1 = *param_1;
    while (wVar1 == L'*') {
      pwVar4 = param_1 + 1;
      param_1 = param_1 + 1;
      wVar1 = *pwVar4;
    }
    if (wVar1 == L'\0') {
      return true;
    }
  }
  return false;
}

// IsMatchSubstring @ 141951fb0

bool __cdecl
FWildcardString::IsMatchSubstring(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,Type param_4)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  wchar_t wVar3;
  wchar_t *pwVar4;
  wchar_t wVar5;
  
  if (((param_1 != (wchar_t *)0x0) && (param_2 != (wchar_t *)0x0)) && (param_3 != (wchar_t *)0x0)) {
    pwVar4 = param_1;
    pwVar2 = (wchar_t *)0x0;
    while (param_2 != param_3) {
      wVar3 = *param_2;
      wVar1 = *pwVar4;
      wVar5 = wVar1;
      if (param_4 == IgnoreCase) {
        wVar3 = (-(ushort)((ushort)wVar3 - 0x41 < 0x1a) & 0x20) + wVar3;
        wVar5 = (-(ushort)((ushort)wVar1 - 0x41 < 0x1a) & 0x20) + wVar1;
      }
      if (wVar1 == L'*') {
        param_1 = pwVar4 + 1;
        if (*param_1 == L'\0') {
          return true;
        }
        pwVar4 = param_1;
        pwVar2 = param_2 + 1;
      }
      else if ((wVar1 == L'?') || (wVar5 == wVar3)) {
        pwVar4 = pwVar4 + 1;
        param_2 = param_2 + 1;
      }
      else {
        if (pwVar2 == (wchar_t *)0x0) {
          return false;
        }
        pwVar4 = param_1;
        param_2 = pwVar2;
        pwVar2 = pwVar2 + 1;
      }
    }
    wVar3 = *pwVar4;
    while (wVar3 == L'*') {
      pwVar2 = pwVar4 + 1;
      pwVar4 = pwVar4 + 1;
      wVar3 = *pwVar2;
    }
    if (wVar3 == L'\0') {
      return true;
    }
  }
  return false;
}

