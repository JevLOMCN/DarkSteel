// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// EncodeArgumentsInternal<wchar_t_const_*> @ 148b0b980

void __cdecl
FFormatArgsTrace::EncodeArgumentsInternal<wchar_t_const_*>
          (uchar **param_1,uchar **param_2,wchar_t *param_3)

{
  uchar *puVar1;
  uint uVar2;
  size_t sVar3;
  ulonglong uVar4;
  ulonglong _Size;
  
  **param_1 = 0xc2;
  *param_1 = *param_1 + 1;
  if (param_3 != (wchar_t *)0x0) {
    sVar3 = wcslen(param_3);
    uVar2 = (int)sVar3 * 2 + 2;
    uVar4 = (ulonglong)uVar2;
    if (0xffff < (int)uVar2) {
      uVar4 = 0xffff;
    }
    _Size = uVar4 & 0xffff;
    memcpy(*param_2,param_3,_Size);
    if ((short)uVar4 == -1) {
      puVar1 = *param_2 + _Size + (-8 - (ulonglong)((uint)_Size & 1));
      puVar1[0] = '.';
      puVar1[1] = '\0';
      puVar1[2] = '.';
      puVar1[3] = '\0';
      puVar1[4] = '.';
      puVar1[5] = '\0';
      puVar1[6] = '\0';
      puVar1[7] = '\0';
    }
    *param_2 = *param_2 + _Size;
    return;
  }
  puVar1 = *param_2;
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  *param_2 = *param_2 + 2;
  return;
}

