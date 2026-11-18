// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_lin2log @ 14f87431c

int silk_lin2log(uint param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    iVar3 = 0x20;
  }
  else {
    iVar3 = 0x1f;
    if (param_1 != 0) {
      for (; param_1 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    iVar3 = 0x1f - iVar3;
  }
  iVar2 = 0x18 - iVar3;
  if (iVar2 != 0) {
    if (iVar2 < 0) {
      bVar1 = -(byte)iVar2 & 0x1f;
      param_1 = param_1 << bVar1 | param_1 >> 0x20 - bVar1;
    }
    else {
      bVar1 = (byte)iVar2 & 0x1f;
      param_1 = param_1 >> bVar1 | param_1 << 0x20 - bVar1;
    }
  }
  param_1 = param_1 & 0x7f;
  return param_1 + 0xf80 +
         (int)((ulonglong)((longlong)(int)((0x80 - param_1) * param_1) * 0xb3) >> 0x10) +
         iVar3 * -0x80;
}

