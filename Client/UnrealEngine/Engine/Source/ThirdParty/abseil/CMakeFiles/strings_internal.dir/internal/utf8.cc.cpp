// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 1

// EncodeUTF8Char @ 14f8fe480

/* unsigned __int64 __cdecl absl::lts_20240722::strings_internal::EncodeUTF8Char(char *
   __ptr64,char32_t) */

__uint64 __cdecl absl::lts_20240722::strings_internal::EncodeUTF8Char(char *param_1,wchar32 param_2)

{
  byte bVar1;
  byte bVar2;
  
  if ((uint)param_2 < 0x80) {
    *param_1 = (byte)param_2;
    return 1;
  }
  bVar1 = (byte)param_2 & 0x3f | 0x80;
  bVar2 = (byte)((uint)param_2 >> 6);
  if ((uint)param_2 < 0x800) {
    param_1[1] = bVar1;
    *param_1 = bVar2 | 0xc0;
    return 2;
  }
  if ((uint)param_2 < 0x10000) {
    param_1[2] = bVar1;
    param_1[1] = bVar2 & 0x3f | 0x80;
    *param_1 = (byte)((uint)param_2 >> 0xc) | 0xe0;
    return 3;
  }
  param_1[3] = bVar1;
  param_1[2] = bVar2 & 0x3f | 0x80;
  param_1[1] = (byte)((uint)param_2 >> 0xc) & 0x3f | 0x80;
  *param_1 = (byte)((uint)param_2 >> 0x12) | 0xf0;
  return 4;
}

