// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_control_audio_bandwidth @ 14f8891b8

int silk_control_audio_bandwidth(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = *(int *)(param_1 + 0x11e0);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x20);
  }
  iVar2 = *(int *)(param_1 + 0x11cc);
  iVar1 = (short)iVar3 * 1000;
  if (iVar1 == 0) {
    iVar3 = *(int *)(param_1 + 0x11dc);
    if (iVar2 <= *(int *)(param_1 + 0x11dc)) {
      iVar3 = iVar2;
    }
    return iVar3 / 1000;
  }
  if (((iVar2 < iVar1) || (*(int *)(param_1 + 0x11d4) < iVar1)) ||
     (iVar1 < *(int *)(param_1 + 0x11d8))) {
    if (*(int *)(param_1 + 0x11d4) <= iVar2) {
      iVar2 = *(int *)(param_1 + 0x11d4);
    }
    if (iVar2 <= *(int *)(param_1 + 0x11d8)) {
      iVar2 = *(int *)(param_1 + 0x11d8);
    }
    return iVar2 / 1000;
  }
  if (0xff < *(int *)(param_1 + 0x18)) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  if ((*(int *)(param_1 + 0x11b8) == 0) && (*(int *)(param_2 + 0x40) == 0)) {
    return iVar3;
  }
  if (*(int *)(param_1 + 0x11dc) < iVar1) {
    if (*(int *)(param_1 + 0x1c) == 0) {
      *(undefined4 *)(param_1 + 0x18) = 0x100;
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    if (*(int *)(param_2 + 0x40) != 0) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
      if (iVar3 != 0x10) {
        return 8;
      }
      return 0xc;
    }
    if (0 < *(int *)(param_1 + 0x18)) {
      *(undefined4 *)(param_1 + 0x1c) = 0xfffffffe;
      return iVar3;
    }
LAB_14f889293:
    *(undefined4 *)(param_2 + 0x58) = 1;
    *(int *)(param_2 + 0x38) =
         *(int *)(param_2 + 0x38) - (*(int *)(param_2 + 0x38) * 5) / (*(int *)(param_2 + 0x18) + 5);
  }
  else {
    if (iVar1 < *(int *)(param_1 + 0x11dc)) {
      if (*(int *)(param_2 + 0x40) == 0) {
        if (*(int *)(param_1 + 0x1c) == 0) goto LAB_14f889293;
      }
      else {
        *(undefined4 *)(param_1 + 0x18) = 0;
        bVar4 = iVar3 == 8;
        iVar3 = 0x10;
        if (bVar4) {
          iVar3 = 0xc;
        }
        *(undefined8 *)(param_1 + 0x10) = 0;
      }
    }
    else if (-1 < *(int *)(param_1 + 0x1c)) {
      return iVar3;
    }
    *(undefined4 *)(param_1 + 0x1c) = 1;
  }
  return iVar3;
}

