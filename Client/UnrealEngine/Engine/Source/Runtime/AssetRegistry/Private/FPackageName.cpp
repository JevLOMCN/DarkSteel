// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 1

// IsPackageFilename @ 142b05530

bool __cdecl FPackageName::IsPackageFilename(TStringView<wchar_t> *param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  wchar_t *_Str;
  size_t sVar6;
  wchar_t *_Str_00;
  int iVar7;
  int iVar8;
  
  _Str = ::LexToString(Asset);
  iVar5 = 0;
  if (_Str != (wchar_t *)0x0) {
    sVar6 = wcslen(_Str);
    iVar5 = (int)sVar6;
  }
  _Str_00 = ::LexToString(Map);
  iVar7 = 0;
  if (_Str_00 != (wchar_t *)0x0) {
    sVar6 = wcslen(_Str_00);
    iVar7 = (int)sVar6;
  }
  iVar1 = param_1->Size;
  iVar4 = iVar1;
  if (iVar5 < iVar1) {
    iVar4 = iVar5;
  }
  iVar8 = 0;
  if (0 < iVar4) {
    iVar8 = iVar4;
  }
  pwVar2 = param_1->DataPtr;
  if (iVar5 == iVar8) {
    if ((iVar5 != 0) && (iVar8 != 0)) {
      iVar4 = FGenericPlatformStricmp::Strnicmp
                        (_Str,pwVar2 + ((longlong)iVar1 - (longlong)iVar8),(longlong)iVar8);
      if (iVar4 != 0) goto LAB_142b055d7;
    }
    if (iVar5 != iVar8) goto LAB_142b055d7;
LAB_142b0561c:
    bVar3 = true;
  }
  else {
LAB_142b055d7:
    iVar5 = iVar1;
    if (iVar7 < iVar1) {
      iVar5 = iVar7;
    }
    iVar4 = 0;
    if (0 < iVar5) {
      iVar4 = iVar5;
    }
    if (iVar7 == iVar4) {
      if ((iVar7 != 0) && (iVar4 != 0)) {
        iVar5 = iVar4;
        if (iVar7 < iVar4) {
          iVar5 = iVar7;
        }
        iVar5 = FGenericPlatformStricmp::Strnicmp
                          (_Str_00,pwVar2 + ((longlong)iVar1 - (longlong)iVar4),(longlong)iVar5);
        if (iVar5 != 0) goto LAB_142b05620;
      }
      if (iVar7 == iVar4) goto LAB_142b0561c;
    }
LAB_142b05620:
    bVar3 = false;
  }
  return bVar3;
}

