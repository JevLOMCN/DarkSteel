// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 1

// BF_set_key @ 14f7ab250

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BF_set_key(undefined8 *param_1,int param_2,undefined1 *param_3)

{
  uint *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  undefined8 local_res8;
  
  lVar11 = 0x20;
  puVar7 = (undefined8 *)&DAT_1534e69f0;
  puVar8 = param_1;
  do {
    puVar18 = puVar8;
    puVar10 = puVar7;
    uVar6 = puVar10[1];
    *puVar18 = *puVar10;
    puVar18[1] = uVar6;
    uVar6 = puVar10[3];
    puVar18[2] = puVar10[2];
    puVar18[3] = uVar6;
    uVar6 = puVar10[5];
    puVar18[4] = puVar10[4];
    puVar18[5] = uVar6;
    uVar6 = puVar10[7];
    puVar18[6] = puVar10[6];
    puVar18[7] = uVar6;
    uVar6 = puVar10[9];
    puVar18[8] = puVar10[8];
    puVar18[9] = uVar6;
    uVar6 = puVar10[0xb];
    puVar18[10] = puVar10[10];
    puVar18[0xb] = uVar6;
    uVar6 = puVar10[0xd];
    puVar18[0xc] = puVar10[0xc];
    puVar18[0xd] = uVar6;
    uVar6 = puVar10[0xf];
    puVar18[0xe] = puVar10[0xe];
    puVar18[0xf] = uVar6;
    lVar11 = lVar11 + -1;
    puVar7 = puVar10 + 0x10;
    puVar8 = puVar18 + 0x10;
  } while (lVar11 != 0);
  uVar6 = puVar10[0x11];
  puVar18[0x10] = puVar10[0x10];
  puVar18[0x11] = uVar6;
  uVar6 = puVar10[0x13];
  puVar18[0x12] = puVar10[0x12];
  puVar18[0x13] = uVar6;
  uVar3 = *(undefined4 *)((longlong)puVar10 + 0xa4);
  uVar4 = *(undefined4 *)(puVar10 + 0x15);
  uVar5 = *(undefined4 *)((longlong)puVar10 + 0xac);
  *(undefined4 *)(puVar18 + 0x14) = *(undefined4 *)(puVar10 + 0x14);
  *(undefined4 *)((longlong)puVar18 + 0xa4) = uVar3;
  *(undefined4 *)(puVar18 + 0x15) = uVar4;
  *(undefined4 *)((longlong)puVar18 + 0xac) = uVar5;
  uVar6 = puVar10[0x17];
  puVar18[0x16] = puVar10[0x16];
  puVar18[0x17] = uVar6;
  puVar18[0x18] = puVar10[0x18];
  iVar9 = 0x48;
  if (param_2 < 0x49) {
    iVar9 = param_2;
  }
  puVar17 = param_3 + iVar9;
  lVar16 = 0;
  puVar15 = param_3;
  lVar11 = lVar16;
  do {
    uVar2 = *puVar15;
    puVar12 = puVar15 + 1;
    if (puVar17 <= puVar15 + 1) {
      puVar12 = param_3;
    }
    puVar13 = puVar12 + 1;
    if (puVar17 <= puVar12 + 1) {
      puVar13 = param_3;
    }
    puVar14 = puVar13 + 1;
    if (puVar17 <= puVar13 + 1) {
      puVar14 = param_3;
    }
    puVar15 = puVar14 + 1;
    if (puVar17 <= puVar14 + 1) {
      puVar15 = param_3;
    }
    puVar1 = (uint *)((longlong)param_1 + lVar11 * 4);
    *puVar1 = *puVar1 ^ CONCAT31(CONCAT21(CONCAT11(uVar2,*puVar12),*puVar13),*puVar14);
    lVar11 = lVar11 + 1;
  } while (lVar11 < 0x12);
  local_res8 = 0;
  lVar11 = lVar16;
  do {
    BF_encrypt(&local_res8,param_1);
    *(undefined4 *)((longlong)param_1 + lVar11 * 4) = (undefined4)local_res8;
    *(undefined4 *)((longlong)param_1 + lVar11 * 4 + 4) = local_res8._4_4_;
    lVar11 = lVar11 + 2;
  } while (lVar11 < 0x12);
  do {
    BF_encrypt(&local_res8,param_1);
    *(undefined4 *)((longlong)param_1 + lVar16 * 4 + 0x48) = (undefined4)local_res8;
    *(undefined4 *)((longlong)param_1 + lVar16 * 4 + 0x4c) = local_res8._4_4_;
    lVar16 = lVar16 + 2;
  } while (lVar16 < 0x400);
  return;
}

