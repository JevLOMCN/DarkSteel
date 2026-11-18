// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// CodepointToString @ 14174c0e0

bool __cdecl FUnicodeChar::CodepointToString(uint param_1,FString *param_2)

{
  uint uVar1;
  wchar_t wVar2;
  
  ::FString::Reset(param_2,0);
  if ((0x10ffff < param_1) || (param_1 - 0xfffe < 2)) {
    return false;
  }
  if ((0x3ff < param_1 - 0xd800) && (0x3ff < param_1 - 0xdc00)) {
    uVar1 = param_1 - 0x10000;
    if (uVar1 < 0x100000) {
      ::FString::AppendChar(param_2,(short)(uVar1 >> 10) + L'\xd800');
      wVar2 = ((ushort)uVar1 & 0x3ff) + L'\xdc00';
    }
    else {
      wVar2 = (wchar_t)param_1;
    }
    ::FString::AppendChar(param_2,wVar2);
    return true;
  }
  return false;
}

