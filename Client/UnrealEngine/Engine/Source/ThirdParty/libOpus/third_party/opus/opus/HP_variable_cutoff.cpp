// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_HP_variable_cutoff @ 14f880158

void silk_HP_variable_cutoff(longlong param_1)

{
  longlong lVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  
  if (*(char *)(param_1 + 0x11bd) != '\x02') {
    return;
  }
  lVar1 = (longlong)(*(int *)(param_1 + 0x11e0) * 0x3e80000);
  iVar3 = silk_lin2log(lVar1 / (longlong)*(int *)(param_1 + 0x11c0) & 0xffffffff,
                       lVar1 % (longlong)*(int *)(param_1 + 0x11c0) & 0xffffffff);
  iVar5 = *(int *)(param_1 + 0x1268);
  sVar2 = silk_lin2log(0x3c0000);
  iVar5 = (iVar3 + -0x800 +
          (int)((ulonglong)
                ((longlong)(short)(((short)(iVar3 + -0x800) - sVar2) + 0x800) *
                (longlong)
                (int)((ulonglong)((longlong)(short)iVar5 * (longlong)(iVar5 * -4)) >> 0x10)) >> 0x10
               )) - (*(int *)(param_1 + 8) >> 8);
  if (iVar5 < 0) {
    iVar5 = iVar5 * 3;
  }
  sVar2 = (short)iVar5;
  if (iVar5 < -0x33) {
    sVar2 = -0x33;
  }
  if (0x33 < iVar5) {
    sVar2 = 0x33;
  }
  *(int *)(param_1 + 8) =
       *(int *)(param_1 + 8) +
       (int)((ulonglong)((longlong)((int)*(short *)(param_1 + 0x11b4) * (int)sVar2) * 0x199a) >>
            0x10);
  iVar5 = silk_lin2log(100);
  iVar3 = silk_lin2log(0x3c);
  if (iVar5 * 0x100 < iVar3 * 0x100) {
    iVar5 = silk_lin2log(0x3c);
    if (*(int *)(param_1 + 8) <= iVar5 * 0x100) {
      iVar3 = silk_lin2log(100);
      iVar5 = *(int *)(param_1 + 8);
      if (iVar3 * 0x100 <= iVar5) goto LAB_14f880293;
      goto LAB_14f880263;
    }
LAB_14f880287:
    uVar4 = 0x3c;
  }
  else {
    iVar5 = silk_lin2log(100);
    if (*(int *)(param_1 + 8) <= iVar5 * 0x100) {
      iVar3 = silk_lin2log(0x3c);
      iVar5 = *(int *)(param_1 + 8);
      if (iVar3 * 0x100 <= iVar5) goto LAB_14f880293;
      goto LAB_14f880287;
    }
LAB_14f880263:
    uVar4 = 100;
  }
  iVar5 = silk_lin2log(uVar4);
  iVar5 = iVar5 << 8;
LAB_14f880293:
  *(int *)(param_1 + 8) = iVar5;
  return;
}

