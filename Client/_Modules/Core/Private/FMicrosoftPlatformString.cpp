// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// Strupr<char8_t> @ 141bdbde0

uchar * __cdecl FMicrosoftPlatformString::Strupr<char8_t>(uchar *param_1,ulong64 param_2)

{
  byte bVar1;
  byte *pbVar2;
  
  bVar1 = *param_1;
  pbVar2 = param_1;
  for (; (bVar1 != 0 && (param_2 != 0)); param_2 = param_2 - 1) {
    *pbVar2 = *pbVar2 - (-(*pbVar2 - 0x61 < 0x1a) & 0x20U);
    pbVar2 = pbVar2 + 1;
    bVar1 = *pbVar2;
  }
  return param_1;
}

// Strupr<wchar_t> @ 141bdbe20

wchar_t * __cdecl FMicrosoftPlatformString::Strupr<wchar_t>(wchar_t *param_1,ulong64 param_2)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  
  wVar1 = *param_1;
  pwVar2 = param_1;
  for (; (wVar1 != L'\0' && (param_2 != 0)); param_2 = param_2 - 1) {
    *pwVar2 = *pwVar2 - (-(ushort)((ushort)*pwVar2 - 0x61 < 0x1a) & 0x20);
    pwVar2 = pwVar2 + 1;
    wVar1 = *pwVar2;
  }
  return param_1;
}

