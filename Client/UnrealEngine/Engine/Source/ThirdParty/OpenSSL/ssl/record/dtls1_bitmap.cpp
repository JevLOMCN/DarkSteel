// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 3

// dtls1_record_bitmap_update @ 14f697370

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void dtls1_record_bitmap_update(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(param_1 + 0x16c8);
  puVar2 = param_2 + 1;
  uVar1 = FUN_14f697470(puVar3);
  if ((int)uVar1 < 1) {
    if (-uVar1 < 0x20) {
      *param_2 = *param_2 | 1 << (-uVar1 & 0x1f);
    }
    return;
  }
  if (uVar1 < 0x20) {
    *param_2 = *param_2 << ((byte)uVar1 & 0x1f) | 1;
    *(undefined8 *)puVar2 = *puVar3;
    return;
  }
  *param_2 = 1;
  *(undefined8 *)puVar2 = *puVar3;
  return;
}

// dtls1_record_replay_check @ 14f6973f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dtls1_record_replay_check(longlong param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = FUN_14f697470(param_1 + 0x16c8,param_2 + 1);
  if ((iVar1 < 1) && ((0x1f < (uint)-iVar1 || ((*param_2 >> (-iVar1 & 0x1fU) & 1) != 0)))) {
    return 0;
  }
  SSL3_RECORD_set_seq_num(param_1 + 0xd78,param_1 + 0x16c8);
  return 1;
}

// FUN_14f697470 @ 14f697470

ulonglong FUN_14f697470(byte *param_1,byte *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)*param_1 << 0x38 | (ulonglong)param_1[1] << 0x30 |
          (ulonglong)param_1[2] << 0x28 | (ulonglong)param_1[3] << 0x20 |
          (ulonglong)param_1[4] << 0x18 | (ulonglong)param_1[5] << 0x10 |
          (ulonglong)CONCAT11(param_1[6],param_1[7]);
  uVar2 = (ulonglong)*param_2 << 0x38 | (ulonglong)param_2[1] << 0x30 |
          (ulonglong)param_2[2] << 0x28 | (ulonglong)param_2[3] << 0x20 |
          (ulonglong)param_2[4] << 0x18 | (ulonglong)param_2[5] << 0x10 |
          (ulonglong)CONCAT11(param_2[6],param_2[7]);
  uVar1 = uVar3 - uVar2;
  if ((uVar3 <= uVar2) || (-1 < (longlong)uVar1)) {
    if ((uVar3 < uVar2) && (0 < (longlong)uVar1)) {
      return 0xffffff80;
    }
    if ((longlong)uVar1 < 0x81) {
      uVar2 = uVar1 & 0xffffffff;
      if ((longlong)uVar1 < -0x80) {
        uVar2 = 0xffffff80;
      }
      return uVar2;
    }
  }
  return 0x80;
}

