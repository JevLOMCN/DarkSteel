// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 1

// DES_xcbc_encrypt @ 14f7aab70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DES_xcbc_encrypt(uint *param_1,undefined1 *param_2,uint param_3,undefined8 param_4,
                     uint *param_5,uint *param_6,uint *param_7,int param_8)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  undefined1 *local_40;
  
  local_40 = (undefined1 *)0x14f7aab8f;
  uVar10 = *param_6;
  uVar13 = param_6[1];
  uVar3 = *param_7;
  uVar4 = param_7[1];
  if (param_8 == 0) {
    iVar12 = param_3 - 8;
    local_40 = (undefined1 *)((longlong)param_5 + 1);
    uVar7 = *param_5;
    uVar8 = param_5[1];
    if (0 < iVar12) {
      uVar6 = (param_3 - 9 >> 3) + 1;
      local_48 = (ulonglong)uVar6;
      iVar12 = iVar12 + uVar6 * -8;
      uVar6 = uVar7;
      uVar9 = uVar8;
      do {
        uVar7 = *param_1;
        local_50 = uVar7 ^ uVar3;
        uVar8 = param_1[1];
        param_1 = param_1 + 2;
        local_4c = uVar8 ^ uVar4;
        DES_encrypt1(&local_50,param_4,0);
        uVar6 = local_50 ^ uVar6 ^ uVar10;
        uVar9 = local_4c ^ uVar9 ^ uVar13;
        *param_2 = (char)uVar6;
        param_2[1] = (char)(uVar6 >> 8);
        param_2[2] = (char)(uVar6 >> 0x10);
        param_2[3] = (char)(uVar6 >> 0x18);
        param_2[4] = (char)uVar9;
        param_2[5] = (char)(uVar9 >> 8);
        param_2[6] = (char)(uVar9 >> 0x10);
        param_2[7] = (char)(uVar9 >> 0x18);
        param_2 = param_2 + 8;
        local_48 = local_48 - 1;
        uVar6 = uVar7;
        uVar9 = uVar8;
      } while (local_48 != 0);
      local_48 = 0;
    }
    puVar5 = local_40;
    uVar6 = uVar7;
    uVar9 = uVar8;
    if (iVar12 != -8) {
      uVar6 = *param_1;
      local_50 = uVar6 ^ uVar3;
      uVar9 = param_1[1];
      local_4c = uVar9 ^ uVar4;
      DES_encrypt1(&local_50,param_4,0);
      uVar10 = local_50 ^ uVar7 ^ uVar10;
      uVar13 = local_4c ^ uVar8 ^ uVar13;
      param_2 = param_2 + (iVar12 + 8);
      switch(iVar12) {
      case 0:
        param_2 = param_2 + -1;
        *param_2 = (char)(uVar13 >> 0x18);
      case -1:
        param_2 = param_2 + -1;
        *param_2 = (char)(uVar13 >> 0x10);
      case -2:
        param_2 = param_2 + -1;
        *param_2 = (char)(uVar13 >> 8);
      case -3:
        param_2 = param_2 + -1;
        *param_2 = (char)uVar13;
      case -4:
        param_2 = param_2 + -1;
        *param_2 = (char)(uVar10 >> 0x18);
      case -5:
        param_2 = param_2 + -1;
        *param_2 = (char)(uVar10 >> 0x10);
      case -6:
        param_2 = param_2 + -1;
        *param_2 = (char)(uVar10 >> 8);
      case -7:
        param_2[-1] = (char)uVar10;
      }
    }
    *(char *)param_5 = (char)uVar6;
    *puVar5 = (char)(uVar6 >> 8);
    puVar5[1] = (char)(uVar6 >> 0x10);
    puVar5[2] = (char)(uVar6 >> 0x18);
    puVar5[3] = (char)uVar9;
    puVar5[4] = (char)(uVar9 >> 8);
    puVar5[5] = (char)(uVar9 >> 0x10);
    puVar5[6] = (char)(uVar9 >> 0x18);
  }
  else {
    iVar12 = param_3 - 8;
    local_50 = *param_5;
    local_4c = param_5[1];
    if (-1 < iVar12) {
      uVar14 = (ulonglong)(param_3 >> 3);
      iVar12 = iVar12 + (param_3 >> 3) * -8;
      do {
        puVar1 = param_1 + 1;
        local_50 = *param_1 ^ local_50 ^ uVar10;
        param_1 = param_1 + 2;
        local_4c = *puVar1 ^ local_4c ^ uVar13;
        DES_encrypt1(&local_50,param_4,1);
        local_50 = local_50 ^ uVar3;
        *param_2 = (char)local_50;
        local_4c = local_4c ^ uVar4;
        param_2[1] = (char)(local_50 >> 8);
        param_2[2] = (char)(local_50 >> 0x10);
        param_2[3] = (char)(local_50 >> 0x18);
        param_2[4] = (char)local_4c;
        param_2[5] = (char)(local_4c >> 8);
        param_2[6] = (char)(local_4c >> 0x10);
        param_2[7] = (char)(local_4c >> 0x18);
        param_2 = param_2 + 8;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    if (iVar12 != -8) {
      lVar11 = (longlong)param_1 + (longlong)(iVar12 + 8);
      uVar7 = 0;
      uVar8 = 0;
      switch(iVar12) {
      case 0:
        pbVar2 = (byte *)(lVar11 + -1);
        lVar11 = lVar11 + -1;
        uVar7 = (uint)*pbVar2 << 0x18;
      case -1:
        pbVar2 = (byte *)(lVar11 + -1);
        lVar11 = lVar11 + -1;
        uVar7 = uVar7 | (uint)*pbVar2 << 0x10;
      case -2:
        pbVar2 = (byte *)(lVar11 + -1);
        lVar11 = lVar11 + -1;
        uVar7 = uVar7 | (uint)*pbVar2 << 8;
      case -3:
        pbVar2 = (byte *)(lVar11 + -1);
        lVar11 = lVar11 + -1;
        uVar7 = uVar7 | *pbVar2;
      case -4:
        pbVar2 = (byte *)(lVar11 + -1);
        lVar11 = lVar11 + -1;
        uVar8 = (uint)*pbVar2 << 0x18;
      case -5:
        pbVar2 = (byte *)(lVar11 + -1);
        lVar11 = lVar11 + -1;
        uVar8 = uVar8 | (uint)*pbVar2 << 0x10;
      case -6:
        pbVar2 = (byte *)(lVar11 + -1);
        lVar11 = lVar11 + -1;
        uVar8 = uVar8 | (uint)*pbVar2 << 8;
      case -7:
        uVar8 = uVar8 | *(byte *)(lVar11 + -1);
      default:
        local_50 = uVar8 ^ local_50 ^ uVar10;
        local_4c = uVar7 ^ local_4c ^ uVar13;
        DES_encrypt1(&local_50,param_4,1);
        local_50 = local_50 ^ uVar3;
        *param_2 = (char)local_50;
        local_4c = local_4c ^ uVar4;
        param_2[1] = (char)(local_50 >> 8);
        param_2[2] = (char)(local_50 >> 0x10);
        param_2[3] = (char)(local_50 >> 0x18);
        param_2[4] = (char)local_4c;
        param_2[5] = (char)(local_4c >> 8);
        param_2[6] = (char)(local_4c >> 0x10);
        param_2[7] = (char)(local_4c >> 0x18);
      }
    }
    *(char *)param_5 = (char)local_50;
    *(char *)((longlong)param_5 + 1) = (char)(local_50 >> 8);
    *(char *)((longlong)param_5 + 2) = (char)(local_50 >> 0x10);
    *(char *)((longlong)param_5 + 3) = (char)(local_50 >> 0x18);
    *(char *)(param_5 + 1) = (char)local_4c;
    *(char *)((longlong)param_5 + 5) = (char)(local_4c >> 8);
    *(char *)((longlong)param_5 + 6) = (char)(local_4c >> 0x10);
    *(char *)((longlong)param_5 + 7) = (char)(local_4c >> 0x18);
  }
  return;
}

