// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: JsonUtilities
// Functions: 2

// WriteChar @ 144630420

void __cdecl TJsonPrintPolicy<wchar_t>::WriteChar(FArchive *param_1,wchar_t param_2)

{
  wchar_t local_res10 [12];
  
  local_res10[0] = param_2;
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,2);
  return;
}

// WriteString @ 1446325a0

void __cdecl TJsonPrintPolicy<wchar_t>::WriteString(FArchive *param_1,TStringView<wchar_t> *param_2)

{
  size_t sVar1;
  wchar_t *_Str;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  
  _Str = param_2->DataPtr;
  iVar2 = param_2->Size;
  if (_Str == (wchar_t *)0x0) {
    iVar2 = 0;
    _Str = (wchar_t *)0x0;
    UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)param_1 + 0x188);
  }
  else {
    if ((0 < iVar2) && (_Str[(longlong)iVar2 + -1] == L'\0')) {
      iVar2 = iVar2 + -1;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)param_1 + 0x188);
    if (iVar2 == -1) {
      sVar1 = wcslen(_Str);
      iVar2 = (int)sVar1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014463261d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,_Str,(longlong)iVar2 * 2);
  return;
}

