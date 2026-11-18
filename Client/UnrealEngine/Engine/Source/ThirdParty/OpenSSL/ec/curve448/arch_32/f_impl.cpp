// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 3

// gf_mul @ 14f7c68e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void gf_mul(uint *param_1,int *param_2,uint *param_3)

{
  bool bVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint *puVar7;
  uint *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  uint *puVar12;
  uint local_98 [2];
  longlong local_90;
  uint *local_88;
  uint *local_80;
  uint local_78 [4];
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  uint local_58 [4];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x14f7c6902;
  local_38 = __security_cookie.value ^ (ulonglong)local_98;
  local_80 = param_1;
  uVar9 = 0;
  uVar2 = 0;
  iVar11 = 1;
  local_58[1] = param_3[9] + param_3[1];
  local_78[2] = param_2[10] + param_2[2];
  local_58[2] = param_3[10] + param_3[2];
  local_78[3] = param_2[0xb] + param_2[3];
  local_58[3] = param_3[0xb] + param_3[3];
  local_68 = param_2[0xc] + param_2[4];
  local_48 = param_3[0xc] + param_3[4];
  local_64 = param_2[0xd] + param_2[5];
  local_44 = param_3[0xd] + param_3[5];
  local_60 = param_2[0xe] + param_2[6];
  local_40 = param_3[0xe] + param_3[6];
  local_5c = param_2[0xf] + param_2[7];
  local_3c = param_3[0xf] + param_3[7];
  local_88 = param_1 + 8;
  local_78[0] = param_2[8] + *param_2;
  local_78[1] = param_2[9] + param_2[1];
  local_58[0] = param_3[8] + *param_3;
  local_90 = (longlong)param_2 + (-0x20 - (longlong)param_1);
  lVar3 = local_90;
  lVar6 = 1;
  puVar12 = local_88;
  do {
    lVar10 = 0;
    lVar4 = (longlong)iVar11;
    if (0 < iVar11) {
      puVar7 = param_3;
      puVar8 = (uint *)(lVar3 + (longlong)puVar12);
      do {
        lVar10 = lVar10 + (ulonglong)*puVar8 * (ulonglong)*puVar7;
        uVar2 = uVar2 + (ulonglong)
                        *(uint *)((longlong)local_78 + (4 - (longlong)param_2) +
                                 (longlong)(puVar8 + -1)) *
                        (ulonglong)
                        *(uint *)(((longlong)&local_5c - (longlong)param_3) + (longlong)(puVar7 + 1)
                                 );
        uVar9 = uVar9 + (ulonglong)puVar8[8] * (ulonglong)puVar7[8];
        lVar4 = lVar4 + -1;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + -1;
      } while (lVar4 != 0);
    }
    lVar3 = uVar2 - lVar10;
    lVar10 = uVar9 + lVar10;
    lVar4 = 0;
    if (lVar6 < 8) {
      lVar5 = 8 - lVar6;
      puVar7 = (uint *)((longlong)param_3 + (-0x1c - (longlong)param_1) + (longlong)puVar12);
      puVar8 = (uint *)(param_2 + 0xf);
      do {
        lVar10 = lVar10 - (ulonglong)puVar8[-8] * (ulonglong)*puVar7;
        lVar4 = lVar4 + (ulonglong)
                        *(uint *)((longlong)puVar7 + ((longlong)local_58 - (longlong)param_3)) *
                        (ulonglong)
                        *(uint *)((longlong)local_98 + (4 - (longlong)param_2) +
                                 (longlong)(puVar8 + -1));
        lVar3 = lVar3 + (ulonglong)puVar7[8] * (ulonglong)*puVar8;
        lVar5 = lVar5 + -1;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + -1;
      } while (lVar5 != 0);
    }
    uVar9 = (ulonglong)(lVar10 + lVar4) >> 0x1c;
    puVar12[-8] = (uint)(lVar10 + lVar4) & 0xfffffff;
    iVar11 = iVar11 + 1;
    uVar2 = (ulonglong)(lVar3 + lVar4) >> 0x1c;
    *puVar12 = (uint)(lVar3 + lVar4) & 0xfffffff;
    puVar12 = puVar12 + 1;
    bVar1 = lVar6 < 8;
    lVar3 = local_90;
    lVar6 = lVar6 + 1;
  } while (bVar1);
  uVar9 = uVar9 + *local_88 + uVar2;
  param_1[9] = param_1[9] + (int)(uVar9 >> 0x1c);
  *local_88 = (uint)uVar9 & 0xfffffff;
  param_1[1] = param_1[1] + (int)(uVar2 + *param_1 >> 0x1c);
  *param_1 = (uint)(uVar2 + *param_1) & 0xfffffff;
  return;
}

// gf_mulw_unsigned @ 14f7c6bb0

void gf_mulw_unsigned(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar1 = *param_2;
  uVar9 = (ulonglong)param_3;
  uVar2 = param_2[8];
  uVar6 = (uint)(uVar1 * uVar9) & 0xfffffff;
  *param_1 = uVar6;
  uVar5 = (uint)(uVar2 * uVar9) & 0xfffffff;
  param_1[8] = uVar5;
  uVar3 = param_2[9];
  uVar4 = param_2[1] * uVar9 + (uVar1 * uVar9 >> 0x1c);
  param_1[1] = (uint)uVar4 & 0xfffffff;
  uVar8 = uVar3 * uVar9 + (uVar2 * uVar9 >> 0x1c);
  param_1[9] = (uint)uVar8 & 0xfffffff;
  uVar4 = param_2[2] * uVar9 + (uVar4 >> 0x1c);
  uVar8 = param_2[10] * uVar9 + (uVar8 >> 0x1c);
  param_1[2] = (uint)uVar4 & 0xfffffff;
  param_1[10] = (uint)uVar8 & 0xfffffff;
  uVar7 = param_2[3] * uVar9 + (uVar4 >> 0x1c);
  uVar4 = param_2[0xb] * uVar9 + (uVar8 >> 0x1c);
  param_1[3] = (uint)uVar7 & 0xfffffff;
  param_1[0xb] = (uint)uVar4 & 0xfffffff;
  uVar8 = param_2[4] * uVar9 + (uVar7 >> 0x1c);
  uVar1 = param_2[0xc];
  param_1[4] = (uint)uVar8 & 0xfffffff;
  uVar7 = uVar1 * uVar9 + (uVar4 >> 0x1c);
  param_1[0xc] = (uint)uVar7 & 0xfffffff;
  uVar4 = param_2[5] * uVar9 + (uVar8 >> 0x1c);
  uVar8 = param_2[0xd] * uVar9 + (uVar7 >> 0x1c);
  param_1[5] = (uint)uVar4 & 0xfffffff;
  param_1[0xd] = (uint)uVar8 & 0xfffffff;
  uVar7 = param_2[6] * uVar9 + (uVar4 >> 0x1c);
  uVar1 = param_2[0xe];
  param_1[6] = (uint)uVar7 & 0xfffffff;
  uVar4 = uVar1 * uVar9 + (uVar8 >> 0x1c);
  param_1[0xe] = (uint)uVar4 & 0xfffffff;
  uVar8 = param_2[7] * uVar9 + (uVar7 >> 0x1c);
  uVar1 = param_2[0xf];
  param_1[7] = (uint)uVar8 & 0xfffffff;
  uVar4 = uVar1 * uVar9 + (uVar4 >> 0x1c);
  uVar7 = uVar4 >> 0x1c;
  param_1[0xf] = (uint)uVar4 & 0xfffffff;
  uVar4 = (uVar8 >> 0x1c) + uVar5 + uVar7;
  param_1[9] = param_1[9] + (int)(uVar4 >> 0x1c);
  param_1[8] = (uint)uVar4 & 0xfffffff;
  uVar7 = uVar7 + uVar6;
  param_1[1] = param_1[1] + (int)(uVar7 >> 0x1c);
  *param_1 = (uint)uVar7 & 0xfffffff;
  return;
}

// gf_sqr @ 14f7c6da0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void gf_sqr(undefined8 param_1,undefined8 param_2)

{
  gf_mul(param_1,param_2,param_2);
  return;
}

