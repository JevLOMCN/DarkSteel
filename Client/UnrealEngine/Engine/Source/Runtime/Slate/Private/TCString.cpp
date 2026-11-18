// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// IsNumeric @ 1429552a0

bool __cdecl TCString<wchar_t>::IsNumeric(wchar_t *param_1)

{
  bool bVar1;
  wchar_t wVar2;
  int iVar3;
  
  wVar2 = *param_1;
  if ((wVar2 == L'-') || (wVar2 == L'+')) {
    wVar2 = param_1[1];
    param_1 = param_1 + 1;
  }
  bVar1 = false;
  if (wVar2 != L'\0') {
    wVar2 = *param_1;
    do {
      if (wVar2 == L'.') {
        if (bVar1) {
          return false;
        }
        bVar1 = true;
      }
      else {
        iVar3 = iswdigit(wVar2);
        if (iVar3 == 0) {
          return false;
        }
      }
      wVar2 = param_1[1];
      param_1 = param_1 + 1;
    } while (wVar2 != L'\0');
  }
  return true;
}

