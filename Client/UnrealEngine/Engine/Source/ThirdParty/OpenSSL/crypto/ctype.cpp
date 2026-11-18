// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 3

// ascii_isdigit @ 14f705210

bool ascii_isdigit(char param_1)

{
  return (byte)(param_1 - 0x30U) < 10;
}

// ossl_ctype_check @ 14f705230

undefined8 ossl_ctype_check(uint param_1,ushort param_2)

{
  if ((param_1 < 0x80) &&
     ((param_2 & *(ushort *)(&DAT_1534b32f0 + (longlong)(int)param_1 * 2)) != 0)) {
    return 1;
  }
  return 0;
}

// ossl_tolower @ 14f705260

/* WARNING: Removing unreachable block (ram,0x00014f705281) */

uint ossl_tolower(uint param_1)

{
  if ((param_1 < 0x80) && (((&DAT_1534b32f0)[(longlong)(int)param_1 * 2] & 2) != 0)) {
    return param_1 ^ 0x20;
  }
  return param_1;
}

