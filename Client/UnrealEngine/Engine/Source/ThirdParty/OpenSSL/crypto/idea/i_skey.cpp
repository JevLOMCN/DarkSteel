// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 2

// IDEA_set_decrypt_key @ 14f73d730

void IDEA_set_decrypt_key(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar4 = 0;
  piVar3 = (int *)(param_1 + 0xc0);
  piVar6 = param_2;
  do {
    if (*piVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *piVar3;
      iVar1 = 1;
      iVar9 = 0x10001;
      iVar5 = 0;
      while( true ) {
        iVar7 = iVar1;
        iVar8 = iVar2;
        iVar2 = iVar9 % iVar8;
        if (iVar2 == 0) break;
        iVar1 = iVar5 - ((iVar9 - iVar2) / iVar8) * iVar7;
        iVar9 = iVar8;
        iVar5 = iVar7;
      }
      iVar2 = iVar7 + 0x10001;
      if (-1 < iVar7) {
        iVar2 = iVar7;
      }
    }
    *piVar6 = iVar2;
    piVar6[1] = -piVar3[2] & 0xffff;
    piVar6[2] = -piVar3[1] & 0xffff;
    if (piVar3[3] == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = piVar3[3];
      iVar1 = 1;
      iVar9 = 0x10001;
      iVar5 = 0;
      while( true ) {
        iVar7 = iVar1;
        iVar8 = iVar2;
        iVar2 = iVar9 % iVar8;
        if (iVar2 == 0) break;
        iVar1 = iVar5 - ((iVar9 - iVar2) / iVar8) * iVar7;
        iVar9 = iVar8;
        iVar5 = iVar7;
      }
      iVar2 = iVar7 + 0x10001;
      if (-1 < iVar7) {
        iVar2 = iVar7;
      }
    }
    piVar6[3] = iVar2;
    if (iVar4 == 8) break;
    piVar6[4] = piVar3[-2];
    iVar4 = iVar4 + 1;
    piVar6[5] = piVar3[-1];
    piVar6 = piVar6 + 6;
    piVar3 = piVar3 + -6;
  } while (iVar4 < 9);
  iVar4 = param_2[1];
  param_2[1] = param_2[2];
  param_2[2] = iVar4;
  iVar4 = param_2[0x31];
  param_2[0x31] = param_2[0x32];
  param_2[0x32] = iVar4;
  return;
}

// IDEA_set_encrypt_key @ 14f73d890

void IDEA_set_encrypt_key(byte *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  
  puVar6 = param_2 + 2;
  *param_2 = (uint)*param_1 << 8;
  *param_2 = *param_2 | (uint)param_1[1];
  param_2[1] = (uint)param_1[2] << 8;
  param_2[1] = param_2[1] | (uint)param_1[3];
  *puVar6 = (uint)param_1[4] << 8;
  *puVar6 = *puVar6 | (uint)param_1[5];
  param_2[3] = (uint)param_1[6] << 8;
  param_2[3] = param_2[3] | (uint)param_1[7];
  param_2[4] = (uint)param_1[8] << 8;
  param_2[4] = param_2[4] | (uint)param_1[9];
  param_2[5] = (uint)param_1[10] << 8;
  param_2[5] = param_2[5] | (uint)param_1[0xb];
  param_2[6] = (uint)param_1[0xc] << 8;
  param_2[6] = param_2[6] | (uint)param_1[0xd];
  bVar1 = param_1[0xe];
  param_2[7] = (uint)bVar1 << 8;
  param_2[7] = (uint)CONCAT11(bVar1,param_1[0xf]);
  iVar5 = 0;
  do {
    uVar2 = *puVar6;
    uVar3 = puVar6[-1];
    param_2[8] = (uVar2 >> 7 | uVar3 << 9) & 0xffff;
    uVar4 = puVar6[1];
    param_2[9] = (uVar4 >> 7 | uVar2 << 9) & 0xffff;
    uVar2 = puVar6[2];
    param_2[10] = (uVar4 << 9 | uVar2 >> 7) & 0xffff;
    uVar4 = puVar6[3];
    param_2[0xb] = (uVar4 >> 7 | uVar2 << 9) & 0xffff;
    uVar2 = puVar6[4];
    param_2[0xc] = (uVar4 << 9 | uVar2 >> 7) & 0xffff;
    uVar4 = puVar6[5];
    param_2[0xd] = (uVar4 >> 7 | uVar2 << 9) & 0xffff;
    uVar2 = puVar6[-2];
    if (4 < iVar5) {
      return;
    }
    puVar6 = puVar6 + 8;
    iVar5 = iVar5 + 1;
    param_2[0xe] = (uVar4 << 9 | uVar2 >> 7) & 0xffff;
    param_2[0xf] = (uVar2 << 9 | uVar3 >> 7) & 0xffff;
    param_2 = param_2 + 8;
  } while (iVar5 < 6);
  return;
}

