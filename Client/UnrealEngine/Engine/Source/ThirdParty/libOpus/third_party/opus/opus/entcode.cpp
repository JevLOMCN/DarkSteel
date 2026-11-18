// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// ec_tell_frac @ 14f8780f8

int ec_tell_frac(longlong param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x20);
  iVar1 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  uVar2 = uVar2 >> ((char)iVar1 - 0xfU & 0x1f);
  uVar3 = (uVar2 >> 0xc) - 8;
  return ((*(int *)(param_1 + 0x18) * 8 -
          (uint)(*(uint *)((longlong)&DAT_153513ed8 + (ulonglong)uVar3 * 4) < uVar2)) +
         (iVar1 + 1) * -8) - uVar3;
}

