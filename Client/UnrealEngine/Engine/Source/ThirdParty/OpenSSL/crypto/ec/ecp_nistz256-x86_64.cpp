// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 60

// ecp_nistz256_mul_by_2 @ 140e57100

void ecp_nistz256_mul_by_2(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar9 = *param_2;
  uVar11 = param_2[1];
  uVar5 = uVar9 * 2;
  uVar1 = param_2[2];
  uVar6 = uVar11 * 2 + (ulonglong)CARRY8(uVar9,uVar9);
  uVar7 = param_2[3];
  uVar9 = (ulonglong)(CARRY8(uVar11,uVar11) || CARRY8(uVar11 * 2,(ulonglong)CARRY8(uVar9,uVar9)));
  uVar8 = uVar1 * 2 + uVar9;
  uVar9 = (ulonglong)(CARRY8(uVar1,uVar1) || CARRY8(uVar1 * 2,uVar9));
  uVar10 = uVar7 * 2 + uVar9;
  uVar11 = (ulonglong)(uVar6 < DAT_140e57008 || uVar6 - DAT_140e57008 < (ulonglong)(uVar5 < L_poly))
  ;
  uVar2 = uVar8 - DAT_140e57010;
  uVar1 = (ulonglong)(uVar8 < DAT_140e57010 || uVar2 < uVar11);
  uVar3 = uVar10 - DAT_140e57018;
  bVar4 = (CARRY8(uVar7,uVar7) || CARRY8(uVar7 * 2,uVar9)) <
          (uVar10 < DAT_140e57018 || uVar3 < uVar1);
  uVar7 = (uVar6 - DAT_140e57008) - (ulonglong)(uVar5 < L_poly);
  uVar9 = uVar5 - L_poly;
  if (bVar4) {
    uVar7 = uVar6;
    uVar9 = uVar5;
  }
  *param_1 = uVar9;
  uVar9 = uVar2 - uVar11;
  if (bVar4) {
    uVar9 = uVar8;
  }
  param_1[1] = uVar7;
  uVar11 = uVar3 - uVar1;
  if (bVar4) {
    uVar11 = uVar10;
  }
  param_1[2] = uVar9;
  param_1[3] = uVar11;
  return;
}

// L$SEH_begin_ecp_nistz256_mul_by_2 @ 140e5710d

void L_SEH_begin_ecp_nistz256_mul_by_2(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar9 = *param_2;
  uVar11 = param_2[1];
  uVar5 = uVar9 * 2;
  uVar1 = param_2[2];
  uVar6 = uVar11 * 2 + (ulonglong)CARRY8(uVar9,uVar9);
  uVar7 = param_2[3];
  uVar9 = (ulonglong)(CARRY8(uVar11,uVar11) || CARRY8(uVar11 * 2,(ulonglong)CARRY8(uVar9,uVar9)));
  uVar8 = uVar1 * 2 + uVar9;
  uVar9 = (ulonglong)(CARRY8(uVar1,uVar1) || CARRY8(uVar1 * 2,uVar9));
  uVar10 = uVar7 * 2 + uVar9;
  uVar11 = (ulonglong)(uVar6 < DAT_140e57008 || uVar6 - DAT_140e57008 < (ulonglong)(uVar5 < L_poly))
  ;
  uVar2 = uVar8 - DAT_140e57010;
  uVar1 = (ulonglong)(uVar8 < DAT_140e57010 || uVar2 < uVar11);
  uVar3 = uVar10 - DAT_140e57018;
  bVar4 = (CARRY8(uVar7,uVar7) || CARRY8(uVar7 * 2,uVar9)) <
          (uVar10 < DAT_140e57018 || uVar3 < uVar1);
  uVar7 = (uVar6 - DAT_140e57008) - (ulonglong)(uVar5 < L_poly);
  uVar9 = uVar5 - L_poly;
  if (bVar4) {
    uVar7 = uVar6;
    uVar9 = uVar5;
  }
  *param_1 = uVar9;
  uVar9 = uVar2 - uVar11;
  if (bVar4) {
    uVar9 = uVar8;
  }
  param_1[1] = uVar7;
  uVar11 = uVar3 - uVar1;
  if (bVar4) {
    uVar11 = uVar10;
  }
  param_1[2] = uVar9;
  param_1[3] = uVar11;
  return;
}

// ecp_nistz256_div_by_2 @ 140e571a0

void ecp_nistz256_div_by_2(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = (ulonglong)
          (CARRY8(uVar2,DAT_140e57008) ||
          CARRY8(uVar2 + DAT_140e57008,(ulonglong)CARRY8(uVar1,L_poly)));
  uVar6 = (ulonglong)(CARRY8(uVar3,DAT_140e57010) || CARRY8(uVar3 + DAT_140e57010,uVar5));
  uVar9 = (ulonglong)(CARRY8(uVar4,DAT_140e57018) || CARRY8(uVar4 + DAT_140e57018,uVar6));
  uVar6 = uVar4 + DAT_140e57018 + uVar6;
  uVar5 = uVar3 + DAT_140e57010 + uVar5;
  uVar7 = uVar2 + DAT_140e57008 + (ulonglong)CARRY8(uVar1,L_poly);
  uVar8 = uVar1 + L_poly;
  if ((uVar1 & 1) == 0) {
    uVar9 = 0;
    uVar6 = uVar4;
    uVar5 = uVar3;
    uVar7 = uVar2;
    uVar8 = uVar1;
  }
  *param_1 = uVar8 >> 1 | uVar7 << 0x3f;
  param_1[1] = uVar7 >> 1 | uVar5 << 0x3f;
  param_1[2] = uVar5 >> 1 | uVar6 << 0x3f;
  param_1[3] = uVar6 >> 1 | uVar9 << 0x3f;
  return;
}

// L$SEH_begin_ecp_nistz256_div_by_2 @ 140e571ad

void L_SEH_begin_ecp_nistz256_div_by_2(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = (ulonglong)
          (CARRY8(uVar2,DAT_140e57008) ||
          CARRY8(uVar2 + DAT_140e57008,(ulonglong)CARRY8(uVar1,L_poly)));
  uVar6 = (ulonglong)(CARRY8(uVar3,DAT_140e57010) || CARRY8(uVar3 + DAT_140e57010,uVar5));
  uVar9 = (ulonglong)(CARRY8(uVar4,DAT_140e57018) || CARRY8(uVar4 + DAT_140e57018,uVar6));
  uVar6 = uVar4 + DAT_140e57018 + uVar6;
  uVar5 = uVar3 + DAT_140e57010 + uVar5;
  uVar7 = uVar2 + DAT_140e57008 + (ulonglong)CARRY8(uVar1,L_poly);
  uVar8 = uVar1 + L_poly;
  if ((uVar1 & 1) == 0) {
    uVar9 = 0;
    uVar6 = uVar4;
    uVar5 = uVar3;
    uVar7 = uVar2;
    uVar8 = uVar1;
  }
  *param_1 = uVar8 >> 1 | uVar7 << 0x3f;
  param_1[1] = uVar7 >> 1 | uVar5 << 0x3f;
  param_1[2] = uVar5 >> 1 | uVar6 << 0x3f;
  param_1[3] = uVar6 >> 1 | uVar9 << 0x3f;
  return;
}

// ecp_nistz256_mul_by_3 @ 140e57280

void ecp_nistz256_mul_by_3(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  uVar8 = *param_2;
  uVar11 = param_2[1];
  uVar3 = uVar8 * 2;
  uVar1 = param_2[2];
  uVar7 = uVar11 * 2 + (ulonglong)CARRY8(uVar8,uVar8);
  uVar2 = param_2[3];
  uVar8 = (ulonglong)(CARRY8(uVar11,uVar11) || CARRY8(uVar11 * 2,(ulonglong)CARRY8(uVar8,uVar8)));
  uVar9 = uVar1 * 2 + uVar8;
  uVar8 = (ulonglong)(CARRY8(uVar1,uVar1) || CARRY8(uVar1 * 2,uVar8));
  uVar12 = uVar2 * 2 + uVar8;
  uVar11 = (ulonglong)
           (uVar7 < DAT_140e57008 ||
           uVar7 - DAT_140e57008 < (ulonglong)(uVar3 != 0xffffffffffffffff));
  uVar1 = (ulonglong)(uVar9 < uVar11);
  uVar13 = (uVar12 - DAT_140e57018) - uVar1;
  uVar11 = uVar9 - uVar11;
  uVar10 = (uVar7 - DAT_140e57008) - (ulonglong)(uVar3 != 0xffffffffffffffff);
  uVar14 = uVar3 + 1;
  if ((CARRY8(uVar2,uVar2) || CARRY8(uVar2 * 2,uVar8)) <
      (uVar12 < DAT_140e57018 || uVar12 - DAT_140e57018 < uVar1)) {
    uVar13 = uVar12;
    uVar11 = uVar9;
    uVar10 = uVar7;
    uVar14 = uVar3;
  }
  lVar6 = uVar14 + *param_2;
  uVar8 = uVar10 + param_2[1];
  uVar7 = uVar8 + CARRY8(uVar14,*param_2);
  uVar8 = (ulonglong)(CARRY8(uVar10,param_2[1]) || CARRY8(uVar8,(ulonglong)CARRY8(uVar14,*param_2)))
  ;
  uVar1 = uVar11 + param_2[2];
  uVar10 = uVar1 + uVar8;
  uVar8 = (ulonglong)(CARRY8(uVar11,param_2[2]) || CARRY8(uVar1,uVar8));
  uVar11 = uVar13 + param_2[3];
  uVar14 = uVar11 + uVar8;
  uVar1 = (ulonglong)(uVar7 < DAT_140e57008 || uVar7 - DAT_140e57008 < (ulonglong)(lVar6 != -1));
  uVar2 = (ulonglong)(uVar10 < uVar1);
  uVar3 = uVar14 - DAT_140e57018;
  bVar4 = (CARRY8(uVar13,param_2[3]) || CARRY8(uVar11,uVar8)) <
          (uVar14 < DAT_140e57018 || uVar3 < uVar2);
  uVar8 = (uVar7 - DAT_140e57008) - (ulonglong)(lVar6 != -1);
  lVar5 = lVar6 + 1;
  if (bVar4) {
    uVar8 = uVar7;
    lVar5 = lVar6;
  }
  *param_1 = lVar5;
  uVar11 = uVar10 - uVar1;
  if (bVar4) {
    uVar11 = uVar10;
  }
  param_1[1] = uVar8;
  uVar8 = uVar3 - uVar2;
  if (bVar4) {
    uVar8 = uVar14;
  }
  param_1[2] = uVar11;
  param_1[3] = uVar8;
  return;
}

// L$SEH_begin_ecp_nistz256_mul_by_3 @ 140e5728d

void L_SEH_begin_ecp_nistz256_mul_by_3(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  uVar8 = *param_2;
  uVar11 = param_2[1];
  uVar3 = uVar8 * 2;
  uVar1 = param_2[2];
  uVar7 = uVar11 * 2 + (ulonglong)CARRY8(uVar8,uVar8);
  uVar2 = param_2[3];
  uVar8 = (ulonglong)(CARRY8(uVar11,uVar11) || CARRY8(uVar11 * 2,(ulonglong)CARRY8(uVar8,uVar8)));
  uVar9 = uVar1 * 2 + uVar8;
  uVar8 = (ulonglong)(CARRY8(uVar1,uVar1) || CARRY8(uVar1 * 2,uVar8));
  uVar12 = uVar2 * 2 + uVar8;
  uVar11 = (ulonglong)
           (uVar7 < DAT_140e57008 ||
           uVar7 - DAT_140e57008 < (ulonglong)(uVar3 != 0xffffffffffffffff));
  uVar1 = (ulonglong)(uVar9 < uVar11);
  uVar13 = (uVar12 - DAT_140e57018) - uVar1;
  uVar11 = uVar9 - uVar11;
  uVar10 = (uVar7 - DAT_140e57008) - (ulonglong)(uVar3 != 0xffffffffffffffff);
  uVar14 = uVar3 + 1;
  if ((CARRY8(uVar2,uVar2) || CARRY8(uVar2 * 2,uVar8)) <
      (uVar12 < DAT_140e57018 || uVar12 - DAT_140e57018 < uVar1)) {
    uVar13 = uVar12;
    uVar11 = uVar9;
    uVar10 = uVar7;
    uVar14 = uVar3;
  }
  lVar6 = uVar14 + *param_2;
  uVar8 = uVar10 + param_2[1];
  uVar7 = uVar8 + CARRY8(uVar14,*param_2);
  uVar8 = (ulonglong)(CARRY8(uVar10,param_2[1]) || CARRY8(uVar8,(ulonglong)CARRY8(uVar14,*param_2)))
  ;
  uVar1 = uVar11 + param_2[2];
  uVar10 = uVar1 + uVar8;
  uVar8 = (ulonglong)(CARRY8(uVar11,param_2[2]) || CARRY8(uVar1,uVar8));
  uVar11 = uVar13 + param_2[3];
  uVar14 = uVar11 + uVar8;
  uVar1 = (ulonglong)(uVar7 < DAT_140e57008 || uVar7 - DAT_140e57008 < (ulonglong)(lVar6 != -1));
  uVar2 = (ulonglong)(uVar10 < uVar1);
  uVar3 = uVar14 - DAT_140e57018;
  bVar4 = (CARRY8(uVar13,param_2[3]) || CARRY8(uVar11,uVar8)) <
          (uVar14 < DAT_140e57018 || uVar3 < uVar2);
  uVar8 = (uVar7 - DAT_140e57008) - (ulonglong)(lVar6 != -1);
  lVar5 = lVar6 + 1;
  if (bVar4) {
    uVar8 = uVar7;
    lVar5 = lVar6;
  }
  *param_1 = lVar5;
  uVar11 = uVar10 - uVar1;
  if (bVar4) {
    uVar11 = uVar10;
  }
  param_1[1] = uVar8;
  uVar8 = uVar3 - uVar2;
  if (bVar4) {
    uVar8 = uVar14;
  }
  param_1[2] = uVar11;
  param_1[3] = uVar8;
  return;
}

// ecp_nistz256_add @ 140e57380

void ecp_nistz256_add(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar6 = *param_2 + *param_3;
  uVar10 = (ulonglong)CARRY8(*param_2,*param_3);
  uVar8 = param_2[1] + param_3[1];
  uVar7 = uVar8 + uVar10;
  uVar10 = (ulonglong)(CARRY8(param_2[1],param_3[1]) || CARRY8(uVar8,uVar10));
  uVar8 = param_2[2] + param_3[2];
  uVar9 = uVar8 + uVar10;
  uVar10 = (ulonglong)(CARRY8(param_2[2],param_3[2]) || CARRY8(uVar8,uVar10));
  uVar8 = param_2[3] + param_3[3];
  uVar11 = uVar8 + uVar10;
  uVar1 = (ulonglong)(uVar7 < DAT_140e57008 || uVar7 - DAT_140e57008 < (ulonglong)(uVar6 < L_poly));
  uVar3 = uVar9 - DAT_140e57010;
  uVar2 = (ulonglong)(uVar9 < DAT_140e57010 || uVar3 < uVar1);
  uVar4 = uVar11 - DAT_140e57018;
  bVar5 = (CARRY8(param_2[3],param_3[3]) || CARRY8(uVar8,uVar10)) <
          (uVar11 < DAT_140e57018 || uVar4 < uVar2);
  uVar8 = (uVar7 - DAT_140e57008) - (ulonglong)(uVar6 < L_poly);
  uVar10 = uVar6 - L_poly;
  if (bVar5) {
    uVar8 = uVar7;
    uVar10 = uVar6;
  }
  *param_1 = uVar10;
  uVar10 = uVar3 - uVar1;
  if (bVar5) {
    uVar10 = uVar9;
  }
  param_1[1] = uVar8;
  uVar8 = uVar4 - uVar2;
  if (bVar5) {
    uVar8 = uVar11;
  }
  param_1[2] = uVar10;
  param_1[3] = uVar8;
  return;
}

// L$SEH_begin_ecp_nistz256_add @ 140e5738d

void L_SEH_begin_ecp_nistz256_add(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar6 = *param_2 + *param_3;
  uVar10 = (ulonglong)CARRY8(*param_2,*param_3);
  uVar8 = param_2[1] + param_3[1];
  uVar7 = uVar8 + uVar10;
  uVar10 = (ulonglong)(CARRY8(param_2[1],param_3[1]) || CARRY8(uVar8,uVar10));
  uVar8 = param_2[2] + param_3[2];
  uVar9 = uVar8 + uVar10;
  uVar10 = (ulonglong)(CARRY8(param_2[2],param_3[2]) || CARRY8(uVar8,uVar10));
  uVar8 = param_2[3] + param_3[3];
  uVar11 = uVar8 + uVar10;
  uVar1 = (ulonglong)(uVar7 < DAT_140e57008 || uVar7 - DAT_140e57008 < (ulonglong)(uVar6 < L_poly));
  uVar3 = uVar9 - DAT_140e57010;
  uVar2 = (ulonglong)(uVar9 < DAT_140e57010 || uVar3 < uVar1);
  uVar4 = uVar11 - DAT_140e57018;
  bVar5 = (CARRY8(param_2[3],param_3[3]) || CARRY8(uVar8,uVar10)) <
          (uVar11 < DAT_140e57018 || uVar4 < uVar2);
  uVar8 = (uVar7 - DAT_140e57008) - (ulonglong)(uVar6 < L_poly);
  uVar10 = uVar6 - L_poly;
  if (bVar5) {
    uVar8 = uVar7;
    uVar10 = uVar6;
  }
  *param_1 = uVar10;
  uVar10 = uVar3 - uVar1;
  if (bVar5) {
    uVar10 = uVar9;
  }
  param_1[1] = uVar8;
  uVar8 = uVar4 - uVar2;
  if (bVar5) {
    uVar8 = uVar11;
  }
  param_1[2] = uVar10;
  param_1[3] = uVar8;
  return;
}

// ecp_nistz256_sub @ 140e57420

void ecp_nistz256_sub(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  bool bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  bool bVar11;
  bool bVar12;
  
  uVar4 = *param_2 - *param_3;
  uVar10 = (ulonglong)(*param_2 < *param_3);
  uVar2 = param_2[1] - param_3[1];
  uVar5 = uVar2 - uVar10;
  uVar10 = (ulonglong)(param_2[1] < param_3[1] || uVar2 < uVar10);
  uVar2 = param_2[2] - param_3[2];
  uVar7 = uVar2 - uVar10;
  uVar10 = (ulonglong)(param_2[2] < param_3[2] || uVar2 < uVar10);
  bVar11 = param_3[3] <= param_2[3];
  uVar9 = param_2[3] - param_3[3];
  bVar3 = uVar10 <= uVar9;
  uVar9 = uVar9 - uVar10;
  uVar10 = (ulonglong)
           (CARRY8(uVar5,DAT_140e57008) ||
           CARRY8(uVar5 + DAT_140e57008,(ulonglong)CARRY8(uVar4,L_poly)));
  bVar12 = CARRY8(uVar7,DAT_140e57010);
  uVar2 = uVar7 + DAT_140e57010;
  lVar1 = uVar9 + DAT_140e57018;
  uVar6 = uVar5 + DAT_140e57008 + (ulonglong)CARRY8(uVar4,L_poly);
  uVar8 = uVar4 + L_poly;
  if (bVar11 && bVar3) {
    uVar6 = uVar5;
    uVar8 = uVar4;
  }
  *param_1 = uVar8;
  uVar8 = uVar2 + uVar10;
  if (bVar11 && bVar3) {
    uVar8 = uVar7;
  }
  param_1[1] = uVar6;
  uVar10 = lVar1 + (ulonglong)(bVar12 || CARRY8(uVar2,uVar10));
  if (bVar11 && bVar3) {
    uVar10 = uVar9;
  }
  param_1[2] = uVar8;
  param_1[3] = uVar10;
  return;
}

// L$SEH_begin_ecp_nistz256_sub @ 140e5742d

void L_SEH_begin_ecp_nistz256_sub(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  bool bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  bool bVar11;
  bool bVar12;
  
  uVar4 = *param_2 - *param_3;
  uVar10 = (ulonglong)(*param_2 < *param_3);
  uVar2 = param_2[1] - param_3[1];
  uVar5 = uVar2 - uVar10;
  uVar10 = (ulonglong)(param_2[1] < param_3[1] || uVar2 < uVar10);
  uVar2 = param_2[2] - param_3[2];
  uVar7 = uVar2 - uVar10;
  uVar10 = (ulonglong)(param_2[2] < param_3[2] || uVar2 < uVar10);
  bVar11 = param_3[3] <= param_2[3];
  uVar9 = param_2[3] - param_3[3];
  bVar3 = uVar10 <= uVar9;
  uVar9 = uVar9 - uVar10;
  uVar10 = (ulonglong)
           (CARRY8(uVar5,DAT_140e57008) ||
           CARRY8(uVar5 + DAT_140e57008,(ulonglong)CARRY8(uVar4,L_poly)));
  bVar12 = CARRY8(uVar7,DAT_140e57010);
  uVar2 = uVar7 + DAT_140e57010;
  lVar1 = uVar9 + DAT_140e57018;
  uVar6 = uVar5 + DAT_140e57008 + (ulonglong)CARRY8(uVar4,L_poly);
  uVar8 = uVar4 + L_poly;
  if (bVar11 && bVar3) {
    uVar6 = uVar5;
    uVar8 = uVar4;
  }
  *param_1 = uVar8;
  uVar8 = uVar2 + uVar10;
  if (bVar11 && bVar3) {
    uVar8 = uVar7;
  }
  param_1[1] = uVar6;
  uVar10 = lVar1 + (ulonglong)(bVar12 || CARRY8(uVar2,uVar10));
  if (bVar11 && bVar3) {
    uVar10 = uVar9;
  }
  param_1[2] = uVar8;
  param_1[3] = uVar10;
  return;
}

// ecp_nistz256_neg @ 140e574c0

void ecp_nistz256_neg(ulonglong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  bool bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  bool bVar11;
  bool bVar12;
  
  uVar8 = -*param_2;
  uVar10 = -param_2[1];
  uVar5 = uVar10 - (*param_2 != 0);
  uVar10 = (ulonglong)(param_2[1] != 0 || uVar10 < (*param_2 != 0));
  uVar1 = -param_2[2];
  uVar7 = uVar1 - uVar10;
  uVar10 = (ulonglong)(param_2[2] != 0 || uVar1 < uVar10);
  bVar11 = param_2[3] == 0;
  uVar9 = -param_2[3];
  bVar3 = uVar10 <= uVar9;
  uVar9 = uVar9 - uVar10;
  uVar10 = (ulonglong)
           (CARRY8(uVar5,DAT_140e57008) ||
           CARRY8(uVar5 + DAT_140e57008,(ulonglong)CARRY8(uVar8,L_poly)));
  bVar12 = CARRY8(uVar7,DAT_140e57010);
  uVar1 = uVar7 + DAT_140e57010;
  lVar2 = uVar9 + DAT_140e57018;
  uVar6 = uVar5 + DAT_140e57008 + (ulonglong)CARRY8(uVar8,L_poly);
  uVar4 = uVar8 + L_poly;
  if (bVar11 && bVar3) {
    uVar6 = uVar5;
    uVar4 = uVar8;
  }
  *param_1 = uVar4;
  uVar8 = uVar1 + uVar10;
  if (bVar11 && bVar3) {
    uVar8 = uVar7;
  }
  param_1[1] = uVar6;
  uVar10 = lVar2 + (ulonglong)(bVar12 || CARRY8(uVar1,uVar10));
  if (bVar11 && bVar3) {
    uVar10 = uVar9;
  }
  param_1[2] = uVar8;
  param_1[3] = uVar10;
  return;
}

// L$SEH_begin_ecp_nistz256_neg @ 140e574cd

void L_SEH_begin_ecp_nistz256_neg(ulonglong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  bool bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  bool bVar11;
  bool bVar12;
  
  uVar8 = -*param_2;
  uVar10 = -param_2[1];
  uVar5 = uVar10 - (*param_2 != 0);
  uVar10 = (ulonglong)(param_2[1] != 0 || uVar10 < (*param_2 != 0));
  uVar1 = -param_2[2];
  uVar7 = uVar1 - uVar10;
  uVar10 = (ulonglong)(param_2[2] != 0 || uVar1 < uVar10);
  bVar11 = param_2[3] == 0;
  uVar9 = -param_2[3];
  bVar3 = uVar10 <= uVar9;
  uVar9 = uVar9 - uVar10;
  uVar10 = (ulonglong)
           (CARRY8(uVar5,DAT_140e57008) ||
           CARRY8(uVar5 + DAT_140e57008,(ulonglong)CARRY8(uVar8,L_poly)));
  bVar12 = CARRY8(uVar7,DAT_140e57010);
  uVar1 = uVar7 + DAT_140e57010;
  lVar2 = uVar9 + DAT_140e57018;
  uVar6 = uVar5 + DAT_140e57008 + (ulonglong)CARRY8(uVar8,L_poly);
  uVar4 = uVar8 + L_poly;
  if (bVar11 && bVar3) {
    uVar6 = uVar5;
    uVar4 = uVar8;
  }
  *param_1 = uVar4;
  uVar8 = uVar1 + uVar10;
  if (bVar11 && bVar3) {
    uVar8 = uVar7;
  }
  param_1[1] = uVar6;
  uVar10 = lVar2 + (ulonglong)(bVar12 || CARRY8(uVar1,uVar10));
  if (bVar11 && bVar3) {
    uVar10 = uVar9;
  }
  param_1[2] = uVar8;
  param_1[3] = uVar10;
  return;
}

// ecp_nistz256_ord_mul_mont @ 140e57560

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong ecp_nistz256_ord_mul_mont(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  unkint9 Var49;
  unkint9 Var50;
  unkint9 Var51;
  unkint9 Var52;
  unkint9 Var53;
  unkint9 Var54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  ulonglong uVar137;
  ulonglong uVar138;
  ulonglong uVar139;
  ulonglong uVar140;
  ulonglong uVar141;
  ulonglong uVar142;
  longlong lVar143;
  ulonglong uVar144;
  ulonglong uVar145;
  ulonglong uVar146;
  ulonglong uVar147;
  ulonglong uVar148;
  ulonglong uVar149;
  ulonglong uVar150;
  ulonglong uVar151;
  ulonglong uVar152;
  ulonglong uVar153;
  ulonglong uVar154;
  ulonglong uVar155;
  
  if ((_DAT_15540a9f8 & 0x80100) == 0x80100) {
    uVar138 = *param_3;
    auVar55._8_8_ = 0;
    auVar55._0_8_ = uVar138;
    auVar88._8_8_ = 0;
    auVar88._0_8_ = *param_2;
    uVar141 = SUB168(auVar55 * auVar88,0);
    uVar148 = SUB168(auVar55 * auVar88,8);
    auVar56._8_8_ = 0;
    auVar56._0_8_ = uVar138;
    auVar89._8_8_ = 0;
    auVar89._0_8_ = param_2[1];
    uVar142 = SUB168(auVar56 * auVar89,0);
    uVar139 = SUB168(auVar56 * auVar89,8);
    auVar57._8_8_ = 0;
    auVar57._0_8_ = uVar138;
    auVar90._8_8_ = 0;
    auVar90._0_8_ = param_2[2];
    uVar140 = SUB168(auVar57 * auVar90,0);
    uVar150 = SUB168(auVar57 * auVar90,8);
    auVar58._8_8_ = 0;
    auVar58._0_8_ = uVar138;
    auVar91._8_8_ = 0;
    auVar91._0_8_ = param_2[3];
    uVar146 = SUB168(auVar58 * auVar91,0);
    uVar147 = uVar141 * L_ordK;
    uVar138 = (ulonglong)CARRY8(uVar148,uVar142);
    uVar137 = uVar139 + uVar140;
    uVar140 = (ulonglong)(CARRY8(uVar139,uVar140) || CARRY8(uVar137,uVar138));
    uVar139 = uVar150 + uVar146;
    auVar59._8_8_ = 0;
    auVar59._0_8_ = uVar147;
    auVar92._8_8_ = 0;
    auVar92._0_8_ = L_ord;
    Var49 = (unkuint9)uVar141 + (unkuint9)SUB168(auVar59 * auVar92,0) + (unkuint9)0;
    uVar141 = (ulonglong)Var49;
    Var50 = (unkuint9)(uVar148 + uVar142) + (unkuint9)SUB168(auVar59 * auVar92,8) + (unkuint9)0;
    auVar60._8_8_ = 0;
    auVar60._0_8_ = uVar147;
    auVar93._8_8_ = 0;
    auVar93._0_8_ = DAT_140e570c8;
    Var49 = (unkuint9)(ulonglong)Var50 + (unkuint9)SUB168(auVar60 * auVar93,0) +
            (unkuint9)((char)((unkuint9)Var49 >> 0x40) != '\0');
    Var51 = (unkuint9)(uVar137 + uVar138) + (unkuint9)SUB168(auVar60 * auVar93,8) +
            (unkuint9)((char)((unkuint9)Var50 >> 0x40) != '\0');
    auVar61._8_8_ = 0;
    auVar61._0_8_ = uVar147;
    auVar94._8_8_ = 0;
    auVar94._0_8_ = DAT_140e570d0;
    Var50 = (unkuint9)(ulonglong)Var51 + (unkuint9)SUB168(auVar61 * auVar94,0) +
            (unkuint9)((char)((unkuint9)Var49 >> 0x40) != '\0');
    Var52 = (unkuint9)(uVar139 + uVar140) + (unkuint9)SUB168(auVar61 * auVar94,8) +
            (unkuint9)((char)((unkuint9)Var51 >> 0x40) != '\0');
    auVar62._8_8_ = 0;
    auVar62._0_8_ = uVar147;
    auVar95._8_8_ = 0;
    auVar95._0_8_ = DAT_140e570d8;
    uVar138 = param_3[1];
    Var51 = (unkuint9)(ulonglong)Var52 + (unkuint9)SUB168(auVar62 * auVar95,0) +
            (unkuint9)((char)((unkuint9)Var50 >> 0x40) != '\0');
    Var53 = (unkuint9)
            (SUB168(auVar58 * auVar91,8) +
            (ulonglong)(CARRY8(uVar150,uVar146) || CARRY8(uVar139,uVar140))) +
            (unkuint9)SUB168(auVar62 * auVar95,8) +
            (unkuint9)((char)((unkuint9)Var52 >> 0x40) != '\0');
    Var52 = (unkuint9)(ulonglong)Var53 + (unkuint9)uVar141 +
            (unkuint9)((char)((unkuint9)Var51 >> 0x40) != '\0');
    uVar139 = uVar141 + ((char)((unkuint9)Var53 >> 0x40) != '\0');
    uVar140 = (ulonglong)((char)((unkuint9)Var52 >> 0x40) != '\0');
    auVar63._8_8_ = 0;
    auVar63._0_8_ = uVar138;
    auVar96._8_8_ = 0;
    auVar96._0_8_ = *param_2;
    Var49 = (unkuint9)(ulonglong)Var49 + (unkuint9)SUB168(auVar63 * auVar96,0) +
            (unkuint9)CARRY8(uVar139,uVar140);
    uVar137 = (ulonglong)Var49;
    Var50 = (unkuint9)(ulonglong)Var50 + (unkuint9)SUB168(auVar63 * auVar96,8) +
            (unkuint9)SCARRY8(uVar139,uVar140);
    auVar64._8_8_ = 0;
    auVar64._0_8_ = uVar138;
    auVar97._8_8_ = 0;
    auVar97._0_8_ = param_2[1];
    Var49 = (unkuint9)(ulonglong)Var50 + (unkuint9)SUB168(auVar64 * auVar97,0) +
            (unkuint9)((char)((unkuint9)Var49 >> 0x40) != '\0');
    Var51 = (unkuint9)(ulonglong)Var51 + (unkuint9)SUB168(auVar64 * auVar97,8) +
            (unkuint9)((char)((unkuint9)Var50 >> 0x40) != '\0');
    auVar65._8_8_ = 0;
    auVar65._0_8_ = uVar138;
    auVar98._8_8_ = 0;
    auVar98._0_8_ = param_2[2];
    Var50 = (unkuint9)(ulonglong)Var51 + (unkuint9)SUB168(auVar65 * auVar98,0) +
            (unkuint9)((char)((unkuint9)Var49 >> 0x40) != '\0');
    Var52 = (unkuint9)(ulonglong)Var52 + (unkuint9)SUB168(auVar65 * auVar98,8) +
            (unkuint9)((char)((unkuint9)Var51 >> 0x40) != '\0');
    auVar66._8_8_ = 0;
    auVar66._0_8_ = uVar138;
    auVar99._8_8_ = 0;
    auVar99._0_8_ = param_2[3];
    uVar138 = uVar137 * L_ordK;
    Var51 = (unkuint9)(ulonglong)Var52 + (unkuint9)SUB168(auVar66 * auVar99,0) +
            (unkuint9)((char)((unkuint9)Var50 >> 0x40) != '\0');
    Var53 = (unkuint9)(uVar139 + uVar140) + (unkuint9)SUB168(auVar66 * auVar99,8) +
            (unkuint9)((char)((unkuint9)Var52 >> 0x40) != '\0');
    Var52 = (unkuint9)(ulonglong)Var53 + (unkuint9)uVar141 +
            (unkuint9)((char)((unkuint9)Var51 >> 0x40) != '\0');
    uVar139 = uVar141 * 2 + (ulonglong)((char)((unkuint9)Var53 >> 0x40) != '\0');
    uVar140 = (ulonglong)((char)((unkuint9)Var52 >> 0x40) != '\0');
    auVar67._8_8_ = 0;
    auVar67._0_8_ = uVar138;
    auVar100._8_8_ = 0;
    auVar100._0_8_ = L_ord;
    Var53 = (unkuint9)uVar137 + (unkuint9)SUB168(auVar67 * auVar100,0) +
            (unkuint9)CARRY8(uVar139,uVar140);
    uVar137 = (ulonglong)Var53;
    Var54 = (unkuint9)(ulonglong)Var49 + (unkuint9)SUB168(auVar67 * auVar100,8) +
            (unkuint9)SCARRY8(uVar139,uVar140);
    auVar68._8_8_ = 0;
    auVar68._0_8_ = uVar138;
    auVar101._8_8_ = 0;
    auVar101._0_8_ = DAT_140e570c8;
    Var49 = (unkuint9)(ulonglong)Var54 + (unkuint9)SUB168(auVar68 * auVar101,0) +
            (unkuint9)((char)((unkuint9)Var53 >> 0x40) != '\0');
    Var53 = (unkuint9)(ulonglong)Var50 + (unkuint9)SUB168(auVar68 * auVar101,8) +
            (unkuint9)((char)((unkuint9)Var54 >> 0x40) != '\0');
    auVar69._8_8_ = 0;
    auVar69._0_8_ = uVar138;
    auVar102._8_8_ = 0;
    auVar102._0_8_ = DAT_140e570d0;
    Var50 = (unkuint9)(ulonglong)Var53 + (unkuint9)SUB168(auVar69 * auVar102,0) +
            (unkuint9)((char)((unkuint9)Var49 >> 0x40) != '\0');
    Var53 = (unkuint9)(ulonglong)Var51 + (unkuint9)SUB168(auVar69 * auVar102,8) +
            (unkuint9)((char)((unkuint9)Var53 >> 0x40) != '\0');
    auVar70._8_8_ = 0;
    auVar70._0_8_ = uVar138;
    auVar103._8_8_ = 0;
    auVar103._0_8_ = DAT_140e570d8;
    uVar138 = param_3[2];
    Var51 = (unkuint9)(ulonglong)Var53 + (unkuint9)SUB168(auVar70 * auVar103,0) +
            (unkuint9)((char)((unkuint9)Var50 >> 0x40) != '\0');
    Var53 = (unkuint9)(ulonglong)Var52 + (unkuint9)SUB168(auVar70 * auVar103,8) +
            (unkuint9)((char)((unkuint9)Var53 >> 0x40) != '\0');
    Var52 = (unkuint9)(ulonglong)Var53 + (unkuint9)uVar137 +
            (unkuint9)((char)((unkuint9)Var51 >> 0x40) != '\0');
    uVar141 = uVar139 + uVar140 + uVar137 + (ulonglong)((char)((unkuint9)Var53 >> 0x40) != '\0');
    uVar140 = (ulonglong)((char)((unkuint9)Var52 >> 0x40) != '\0');
    auVar71._8_8_ = 0;
    auVar71._0_8_ = uVar138;
    auVar104._8_8_ = 0;
    auVar104._0_8_ = *param_2;
    Var49 = (unkuint9)(ulonglong)Var49 + (unkuint9)SUB168(auVar71 * auVar104,0) +
            (unkuint9)CARRY8(uVar141,uVar140);
    uVar139 = (ulonglong)Var49;
    Var50 = (unkuint9)(ulonglong)Var50 + (unkuint9)SUB168(auVar71 * auVar104,8) +
            (unkuint9)SCARRY8(uVar141,uVar140);
    auVar72._8_8_ = 0;
    auVar72._0_8_ = uVar138;
    auVar105._8_8_ = 0;
    auVar105._0_8_ = param_2[1];
    Var49 = (unkuint9)(ulonglong)Var50 + (unkuint9)SUB168(auVar72 * auVar105,0) +
            (unkuint9)((char)((unkuint9)Var49 >> 0x40) != '\0');
    Var51 = (unkuint9)(ulonglong)Var51 + (unkuint9)SUB168(auVar72 * auVar105,8) +
            (unkuint9)((char)((unkuint9)Var50 >> 0x40) != '\0');
    auVar73._8_8_ = 0;
    auVar73._0_8_ = uVar138;
    auVar106._8_8_ = 0;
    auVar106._0_8_ = param_2[2];
    Var50 = (unkuint9)(ulonglong)Var51 + (unkuint9)SUB168(auVar73 * auVar106,0) +
            (unkuint9)((char)((unkuint9)Var49 >> 0x40) != '\0');
    Var52 = (unkuint9)(ulonglong)Var52 + (unkuint9)SUB168(auVar73 * auVar106,8) +
            (unkuint9)((char)((unkuint9)Var51 >> 0x40) != '\0');
    auVar74._8_8_ = 0;
    auVar74._0_8_ = uVar138;
    auVar107._8_8_ = 0;
    auVar107._0_8_ = param_2[3];
    uVar138 = uVar139 * L_ordK;
    Var51 = (unkuint9)(ulonglong)Var52 + (unkuint9)SUB168(auVar74 * auVar107,0) +
            (unkuint9)((char)((unkuint9)Var50 >> 0x40) != '\0');
    Var53 = (unkuint9)(uVar141 + uVar140) + (unkuint9)SUB168(auVar74 * auVar107,8) +
            (unkuint9)((char)((unkuint9)Var52 >> 0x40) != '\0');
    Var52 = (unkuint9)(ulonglong)Var53 + (unkuint9)uVar137 +
            (unkuint9)((char)((unkuint9)Var51 >> 0x40) != '\0');
    uVar141 = uVar137 * 2 + (ulonglong)((char)((unkuint9)Var53 >> 0x40) != '\0');
    uVar140 = (ulonglong)((char)((unkuint9)Var52 >> 0x40) != '\0');
    auVar75._8_8_ = 0;
    auVar75._0_8_ = uVar138;
    auVar108._8_8_ = 0;
    auVar108._0_8_ = L_ord;
    Var53 = (unkuint9)uVar139 + (unkuint9)SUB168(auVar75 * auVar108,0) +
            (unkuint9)CARRY8(uVar141,uVar140);
    uVar137 = (ulonglong)Var53;
    Var54 = (unkuint9)(ulonglong)Var49 + (unkuint9)SUB168(auVar75 * auVar108,8) +
            (unkuint9)SCARRY8(uVar141,uVar140);
    auVar76._8_8_ = 0;
    auVar76._0_8_ = uVar138;
    auVar109._8_8_ = 0;
    auVar109._0_8_ = DAT_140e570c8;
    Var49 = (unkuint9)(ulonglong)Var54 + (unkuint9)SUB168(auVar76 * auVar109,0) +
            (unkuint9)((char)((unkuint9)Var53 >> 0x40) != '\0');
    Var53 = (unkuint9)(ulonglong)Var50 + (unkuint9)SUB168(auVar76 * auVar109,8) +
            (unkuint9)((char)((unkuint9)Var54 >> 0x40) != '\0');
    auVar77._8_8_ = 0;
    auVar77._0_8_ = uVar138;
    auVar110._8_8_ = 0;
    auVar110._0_8_ = DAT_140e570d0;
    Var50 = (unkuint9)(ulonglong)Var53 + (unkuint9)SUB168(auVar77 * auVar110,0) +
            (unkuint9)((char)((unkuint9)Var49 >> 0x40) != '\0');
    Var53 = (unkuint9)(ulonglong)Var51 + (unkuint9)SUB168(auVar77 * auVar110,8) +
            (unkuint9)((char)((unkuint9)Var53 >> 0x40) != '\0');
    auVar78._8_8_ = 0;
    auVar78._0_8_ = uVar138;
    auVar111._8_8_ = 0;
    auVar111._0_8_ = DAT_140e570d8;
    uVar138 = param_3[3];
    Var51 = (unkuint9)(ulonglong)Var53 + (unkuint9)SUB168(auVar78 * auVar111,0) +
            (unkuint9)((char)((unkuint9)Var50 >> 0x40) != '\0');
    Var53 = (unkuint9)(ulonglong)Var52 + (unkuint9)SUB168(auVar78 * auVar111,8) +
            (unkuint9)((char)((unkuint9)Var53 >> 0x40) != '\0');
    Var52 = (unkuint9)(ulonglong)Var53 + (unkuint9)uVar137 +
            (unkuint9)((char)((unkuint9)Var51 >> 0x40) != '\0');
    uVar141 = uVar141 + uVar140 + uVar137 + (ulonglong)((char)((unkuint9)Var53 >> 0x40) != '\0');
    uVar140 = (ulonglong)((char)((unkuint9)Var52 >> 0x40) != '\0');
    auVar79._8_8_ = 0;
    auVar79._0_8_ = uVar138;
    auVar112._8_8_ = 0;
    auVar112._0_8_ = *param_2;
    Var49 = (unkuint9)(ulonglong)Var49 + (unkuint9)SUB168(auVar79 * auVar112,0) +
            (unkuint9)CARRY8(uVar141,uVar140);
    uVar139 = (ulonglong)Var49;
    Var50 = (unkuint9)(ulonglong)Var50 + (unkuint9)SUB168(auVar79 * auVar112,8) +
            (unkuint9)SCARRY8(uVar141,uVar140);
    auVar80._8_8_ = 0;
    auVar80._0_8_ = uVar138;
    auVar113._8_8_ = 0;
    auVar113._0_8_ = param_2[1];
    Var49 = (unkuint9)(ulonglong)Var50 + (unkuint9)SUB168(auVar80 * auVar113,0) +
            (unkuint9)((char)((unkuint9)Var49 >> 0x40) != '\0');
    Var51 = (unkuint9)(ulonglong)Var51 + (unkuint9)SUB168(auVar80 * auVar113,8) +
            (unkuint9)((char)((unkuint9)Var50 >> 0x40) != '\0');
    auVar81._8_8_ = 0;
    auVar81._0_8_ = uVar138;
    auVar114._8_8_ = 0;
    auVar114._0_8_ = param_2[2];
    Var50 = (unkuint9)(ulonglong)Var51 + (unkuint9)SUB168(auVar81 * auVar114,0) +
            (unkuint9)((char)((unkuint9)Var49 >> 0x40) != '\0');
    Var52 = (unkuint9)(ulonglong)Var52 + (unkuint9)SUB168(auVar81 * auVar114,8) +
            (unkuint9)((char)((unkuint9)Var51 >> 0x40) != '\0');
    auVar82._8_8_ = 0;
    auVar82._0_8_ = uVar138;
    auVar115._8_8_ = 0;
    auVar115._0_8_ = param_2[3];
    auVar83._8_8_ = 0;
    auVar83._0_8_ = uVar139;
    auVar116._8_8_ = 0;
    auVar116._0_8_ = L_ordK;
    uVar146 = SUB168(auVar83 * auVar116,0);
    Var51 = (unkuint9)(ulonglong)Var52 + (unkuint9)SUB168(auVar82 * auVar115,0) +
            (unkuint9)((char)((unkuint9)Var50 >> 0x40) != '\0');
    Var53 = (unkuint9)(uVar141 + uVar140) + (unkuint9)SUB168(auVar82 * auVar115,8) +
            (unkuint9)((char)((unkuint9)Var52 >> 0x40) != '\0');
    Var52 = (unkuint9)(ulonglong)Var53 + (unkuint9)uVar137 +
            (unkuint9)((char)((unkuint9)Var51 >> 0x40) != '\0');
    uVar148 = uVar137 * 2 + (ulonglong)((char)((unkuint9)Var53 >> 0x40) != '\0');
    uVar138 = (ulonglong)((char)((unkuint9)Var52 >> 0x40) != '\0');
    auVar84._8_8_ = 0;
    auVar84._0_8_ = uVar146;
    auVar117._8_8_ = 0;
    auVar117._0_8_ = L_ord;
    Var53 = (unkuint9)uVar139 + (unkuint9)SUB168(auVar84 * auVar117,0) +
            (unkuint9)CARRY8(uVar148,uVar138);
    uVar139 = (ulonglong)Var53;
    Var54 = (unkuint9)(ulonglong)Var49 + (unkuint9)SUB168(auVar84 * auVar117,8) +
            (unkuint9)SCARRY8(uVar148,uVar138);
    auVar85._8_8_ = 0;
    auVar85._0_8_ = uVar146;
    auVar118._8_8_ = 0;
    auVar118._0_8_ = DAT_140e570c8;
    Var49 = (unkuint9)(ulonglong)Var54 + (unkuint9)SUB168(auVar85 * auVar118,0) +
            (unkuint9)((char)((unkuint9)Var53 >> 0x40) != '\0');
    uVar141 = (ulonglong)Var49;
    Var50 = (unkuint9)(ulonglong)Var50 + (unkuint9)SUB168(auVar85 * auVar118,8) +
            (unkuint9)((char)((unkuint9)Var54 >> 0x40) != '\0');
    auVar86._8_8_ = 0;
    auVar86._0_8_ = uVar146;
    auVar119._8_8_ = 0;
    auVar119._0_8_ = DAT_140e570d0;
    Var49 = (unkuint9)(ulonglong)Var50 + (unkuint9)SUB168(auVar86 * auVar119,0) +
            (unkuint9)((char)((unkuint9)Var49 >> 0x40) != '\0');
    uVar142 = (ulonglong)Var49;
    Var50 = (unkuint9)(ulonglong)Var51 + (unkuint9)SUB168(auVar86 * auVar119,8) +
            (unkuint9)((char)((unkuint9)Var50 >> 0x40) != '\0');
    auVar87._8_8_ = 0;
    auVar87._0_8_ = uVar146;
    auVar120._8_8_ = 0;
    auVar120._0_8_ = DAT_140e570d8;
    Var49 = (unkuint9)(ulonglong)Var50 + (unkuint9)SUB168(auVar87 * auVar120,0) +
            (unkuint9)((char)((unkuint9)Var49 >> 0x40) != '\0');
    uVar146 = (ulonglong)Var49;
    Var50 = (unkuint9)(ulonglong)Var52 + (unkuint9)SUB168(auVar87 * auVar120,8) +
            (unkuint9)((char)((unkuint9)Var50 >> 0x40) != '\0');
    Var49 = (unkuint9)(ulonglong)Var50 + (unkuint9)uVar139 +
            (unkuint9)((char)((unkuint9)Var49 >> 0x40) != '\0');
    uVar147 = (ulonglong)Var49;
    uVar140 = (ulonglong)
              (uVar142 < DAT_140e570c8 || uVar142 - DAT_140e570c8 < (ulonglong)(uVar141 < L_ord));
    uVar137 = (ulonglong)(uVar146 < DAT_140e570d0 || uVar146 - DAT_140e570d0 < uVar140);
    uVar151 = (uVar147 - DAT_140e570d8) - uVar137;
    uVar140 = (uVar146 - DAT_140e570d0) - uVar140;
    uVar150 = (uVar142 - DAT_140e570c8) - (ulonglong)(uVar141 < L_ord);
    uVar149 = uVar141 - L_ord;
    if (uVar148 + uVar138 + uVar139 + (ulonglong)((char)((unkuint9)Var50 >> 0x40) != '\0') +
        (ulonglong)((char)((unkuint9)Var49 >> 0x40) != '\0') <
        (ulonglong)(uVar147 < DAT_140e570d8 || uVar147 - DAT_140e570d8 < uVar137)) {
      uVar151 = uVar147;
      uVar140 = uVar146;
      uVar150 = uVar142;
      uVar149 = uVar141;
    }
    *param_1 = uVar149;
    param_1[1] = uVar150;
    param_1[2] = uVar140;
    param_1[3] = uVar151;
    return SUB168(auVar83 * auVar116,8);
  }
  uVar138 = *param_3;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar138;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = *param_2;
  auVar124._8_8_ = 0;
  auVar124._0_8_ = SUB168(auVar1 * auVar25,8);
  uVar137 = SUB168(auVar1 * auVar25,0);
  auVar127._8_8_ = 0;
  auVar127._0_8_ = uVar137;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar138;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = param_2[1];
  auVar124 = auVar2 * auVar26 + auVar124;
  uVar141 = auVar124._0_8_;
  auVar125._8_8_ = 0;
  auVar125._0_8_ = auVar124._8_8_;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar138;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = param_2[2];
  auVar125 = auVar3 * auVar27 + auVar125;
  uVar146 = auVar125._0_8_;
  auVar126._8_8_ = 0;
  auVar126._0_8_ = auVar125._8_8_;
  uVar137 = uVar137 * L_ordK;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar138;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = param_2[3];
  auVar126 = auVar4 * auVar28 + auVar126;
  uVar148 = auVar126._0_8_;
  uVar139 = auVar126._8_8_;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar137;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = L_ord;
  auVar127 = auVar5 * auVar29 + auVar127;
  uVar140 = auVar127._8_8_;
  uVar147 = uVar146 - uVar137;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar137;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = DAT_140e570c8;
  uVar138 = SUB168(auVar6 * auVar30,0);
  uVar142 = uVar141 + uVar140;
  uVar141 = SUB168(auVar6 * auVar30,8) + (ulonglong)CARRY8(uVar141,uVar140);
  auVar128._8_8_ = 0;
  auVar128._0_8_ = uVar142 + uVar138;
  uVar138 = (ulonglong)CARRY8(uVar142,uVar138);
  uVar140 = uVar147 + uVar141;
  uVar142 = uVar140 + uVar138;
  uVar140 = (uVar137 - (uVar146 < uVar137)) +
            (ulonglong)(CARRY8(uVar147,uVar141) || CARRY8(uVar140,uVar138));
  uVar146 = uVar148 - (uVar137 << 0x20);
  uVar138 = param_3[1];
  uVar141 = (uVar137 - (uVar137 >> 0x20)) - (ulonglong)(uVar148 < uVar137 << 0x20);
  uVar147 = uVar146 + uVar140;
  uVar140 = (ulonglong)CARRY8(uVar146,uVar140);
  uVar137 = uVar139 + uVar141;
  uVar150 = uVar137 + uVar140;
  uVar153 = auVar127._0_8_ + (ulonglong)(CARRY8(uVar139,uVar141) || CARRY8(uVar137,uVar140));
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar138;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = *param_2;
  auVar128 = auVar7 * auVar31 + auVar128;
  lVar143 = auVar128._0_8_;
  uVar140 = auVar128._8_8_;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar138;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = param_2[1];
  auVar131[8] = CARRY8(uVar142,uVar140);
  auVar131._0_8_ = uVar142 + uVar140;
  auVar131._9_7_ = 0;
  auVar131 = auVar8 * auVar32 + auVar131;
  uVar141 = auVar131._0_8_;
  uVar140 = auVar131._8_8_;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar138;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = param_2[2];
  auVar132[8] = CARRY8(uVar147,uVar140);
  auVar132._0_8_ = uVar147 + uVar140;
  auVar132._9_7_ = 0;
  auVar132 = auVar9 * auVar33 + auVar132;
  uVar148 = auVar132._0_8_;
  uVar140 = auVar132._8_8_;
  uVar146 = lVar143 * L_ordK;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar138;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = param_2[3];
  uVar138 = SUB168(auVar10 * auVar34,0);
  uVar137 = uVar150 + uVar140;
  uVar142 = SUB168(auVar10 * auVar34,8) + (ulonglong)CARRY8(uVar150,uVar140);
  uVar151 = uVar137 + uVar138;
  uVar140 = (ulonglong)CARRY8(uVar137,uVar138);
  uVar139 = uVar153 + uVar142;
  uVar154 = uVar139 + uVar140;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar146;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = L_ord;
  auVar121._8_8_ = auVar121._0_8_;
  auVar121._0_8_ = lVar143;
  auVar121 = auVar11 * auVar35 + auVar121;
  uVar137 = auVar121._8_8_;
  uVar150 = uVar148 - uVar146;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar146;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = DAT_140e570c8;
  uVar138 = SUB168(auVar12 * auVar36,0);
  uVar147 = uVar141 + uVar137;
  uVar141 = SUB168(auVar12 * auVar36,8) + (ulonglong)CARRY8(uVar141,uVar137);
  auVar129._8_8_ = 0;
  auVar129._0_8_ = uVar147 + uVar138;
  uVar138 = (ulonglong)CARRY8(uVar147,uVar138);
  uVar137 = uVar150 + uVar141;
  uVar149 = uVar137 + uVar138;
  uVar137 = (uVar146 - (uVar148 < uVar146)) +
            (ulonglong)(CARRY8(uVar150,uVar141) || CARRY8(uVar137,uVar138));
  uVar141 = uVar151 - (uVar146 << 0x20);
  uVar138 = param_3[2];
  uVar146 = (uVar146 - (uVar146 >> 0x20)) - (ulonglong)(uVar151 < uVar146 << 0x20);
  uVar148 = uVar141 + uVar137;
  uVar137 = (ulonglong)CARRY8(uVar141,uVar137);
  uVar141 = uVar154 + uVar146;
  uVar150 = uVar141 + uVar137;
  uVar147 = (ulonglong)(CARRY8(uVar153,uVar142) || CARRY8(uVar139,uVar140)) +
            (ulonglong)(CARRY8(uVar154,uVar146) || CARRY8(uVar141,uVar137));
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar138;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = *param_2;
  auVar129 = auVar13 * auVar37 + auVar129;
  lVar143 = auVar129._0_8_;
  uVar140 = auVar129._8_8_;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar138;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = param_2[1];
  auVar133[8] = CARRY8(uVar149,uVar140);
  auVar133._0_8_ = uVar149 + uVar140;
  auVar133._9_7_ = 0;
  auVar133 = auVar14 * auVar38 + auVar133;
  uVar141 = auVar133._0_8_;
  uVar140 = auVar133._8_8_;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar138;
  auVar39._8_8_ = 0;
  auVar39._0_8_ = param_2[2];
  auVar134[8] = CARRY8(uVar148,uVar140);
  auVar134._0_8_ = uVar148 + uVar140;
  auVar134._9_7_ = 0;
  auVar134 = auVar15 * auVar39 + auVar134;
  uVar149 = auVar134._0_8_;
  uVar140 = auVar134._8_8_;
  uVar146 = lVar143 * L_ordK;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar138;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = param_2[3];
  uVar138 = SUB168(auVar16 * auVar40,0);
  uVar137 = uVar150 + uVar140;
  uVar142 = SUB168(auVar16 * auVar40,8) + (ulonglong)CARRY8(uVar150,uVar140);
  uVar154 = uVar137 + uVar138;
  uVar140 = (ulonglong)CARRY8(uVar137,uVar138);
  uVar139 = uVar147 + uVar142;
  uVar148 = uVar139 + uVar140;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar146;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = L_ord;
  auVar1 = auVar17 * auVar41 + auVar122;
  auVar122._8_8_ = auVar1._0_8_;
  auVar122._0_8_ = lVar143;
  uVar137 = auVar1._8_8_;
  uVar151 = uVar149 - uVar146;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar146;
  auVar42._8_8_ = 0;
  auVar42._0_8_ = DAT_140e570c8;
  uVar138 = SUB168(auVar18 * auVar42,0);
  uVar150 = uVar141 + uVar137;
  uVar141 = SUB168(auVar18 * auVar42,8) + (ulonglong)CARRY8(uVar141,uVar137);
  auVar130._8_8_ = 0;
  auVar130._0_8_ = uVar150 + uVar138;
  uVar138 = (ulonglong)CARRY8(uVar150,uVar138);
  uVar137 = uVar151 + uVar141;
  uVar153 = uVar137 + uVar138;
  uVar137 = (uVar146 - (uVar149 < uVar146)) +
            (ulonglong)(CARRY8(uVar151,uVar141) || CARRY8(uVar137,uVar138));
  uVar141 = uVar154 - (uVar146 << 0x20);
  uVar138 = param_3[3];
  uVar146 = (uVar146 - (uVar146 >> 0x20)) - (ulonglong)(uVar154 < uVar146 << 0x20);
  uVar149 = uVar141 + uVar137;
  uVar137 = (ulonglong)CARRY8(uVar141,uVar137);
  uVar141 = uVar148 + uVar146;
  uVar150 = uVar141 + uVar137;
  uVar154 = (ulonglong)(CARRY8(uVar147,uVar142) || CARRY8(uVar139,uVar140)) +
            (ulonglong)(CARRY8(uVar148,uVar146) || CARRY8(uVar141,uVar137));
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar138;
  auVar43._8_8_ = 0;
  auVar43._0_8_ = *param_2;
  auVar130 = auVar19 * auVar43 + auVar130;
  lVar143 = auVar130._0_8_;
  uVar140 = auVar130._8_8_;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar138;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = param_2[1];
  auVar135[8] = CARRY8(uVar153,uVar140);
  auVar135._0_8_ = uVar153 + uVar140;
  auVar135._9_7_ = 0;
  auVar135 = auVar20 * auVar44 + auVar135;
  uVar141 = auVar135._0_8_;
  uVar140 = auVar135._8_8_;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar138;
  auVar45._8_8_ = 0;
  auVar45._0_8_ = param_2[2];
  auVar136[8] = CARRY8(uVar149,uVar140);
  auVar136._0_8_ = uVar149 + uVar140;
  auVar136._9_7_ = 0;
  auVar136 = auVar21 * auVar45 + auVar136;
  uVar148 = auVar136._0_8_;
  uVar140 = auVar136._8_8_;
  uVar146 = lVar143 * L_ordK;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar138;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = param_2[3];
  uVar138 = SUB168(auVar22 * auVar46,0);
  uVar137 = uVar150 + uVar140;
  uVar149 = SUB168(auVar22 * auVar46,8) + (ulonglong)CARRY8(uVar150,uVar140);
  uVar142 = uVar137 + uVar138;
  uVar138 = (ulonglong)CARRY8(uVar137,uVar138);
  uVar137 = uVar154 + uVar149;
  uVar144 = uVar137 + uVar138;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar146;
  auVar47._8_8_ = 0;
  auVar47._0_8_ = L_ord;
  auVar1 = auVar23 * auVar47 + auVar123;
  auVar123._8_8_ = auVar1._0_8_;
  auVar123._0_8_ = lVar143;
  uVar139 = auVar1._8_8_;
  uVar150 = uVar148 - uVar146;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar146;
  auVar48._8_8_ = 0;
  auVar48._0_8_ = DAT_140e570c8;
  uVar140 = SUB168(auVar24 * auVar48,0);
  uVar147 = uVar141 + uVar139;
  uVar141 = SUB168(auVar24 * auVar48,8) + (ulonglong)CARRY8(uVar141,uVar139);
  uVar152 = uVar147 + uVar140;
  uVar140 = (ulonglong)CARRY8(uVar147,uVar140);
  uVar139 = uVar150 + uVar141;
  uVar155 = uVar139 + uVar140;
  uVar139 = (uVar146 - (uVar148 < uVar146)) +
            (ulonglong)(CARRY8(uVar150,uVar141) || CARRY8(uVar139,uVar140));
  uVar150 = uVar146 << 0x20;
  uVar140 = uVar142 - uVar150;
  uVar151 = (uVar146 - (uVar146 >> 0x20)) - (ulonglong)(uVar142 < uVar150);
  uVar153 = uVar140 + uVar139;
  uVar140 = (ulonglong)CARRY8(uVar140,uVar139);
  uVar139 = uVar144 + uVar151;
  uVar145 = uVar139 + uVar140;
  uVar141 = (ulonglong)
            (uVar155 < DAT_140e570c8 || uVar155 - DAT_140e570c8 < (ulonglong)(uVar152 < L_ord));
  uVar142 = (ulonglong)(uVar153 < DAT_140e570d0 || uVar153 - DAT_140e570d0 < uVar141);
  uVar148 = (uVar145 - DAT_140e570d8) - uVar142;
  uVar141 = (uVar153 - DAT_140e570d0) - uVar141;
  uVar146 = (uVar155 - DAT_140e570c8) - (ulonglong)(uVar152 < L_ord);
  uVar147 = uVar152 - L_ord;
  if ((byte)((CARRY8(uVar154,uVar149) || CARRY8(uVar137,uVar138)) +
            (CARRY8(uVar144,uVar151) || CARRY8(uVar139,uVar140))) <
      (uVar145 < DAT_140e570d8 || uVar145 - DAT_140e570d8 < uVar142)) {
    uVar148 = uVar145;
    uVar141 = uVar153;
    uVar146 = uVar155;
    uVar147 = uVar152;
  }
  *param_1 = uVar147;
  param_1[1] = uVar146;
  param_1[2] = uVar141;
  param_1[3] = uVar148;
  return uVar150;
}

// L$SEH_begin_ecp_nistz256_ord_mul_mont @ 140e5756d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong L_SEH_begin_ecp_nistz256_ord_mul_mont
                    (ulonglong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  unkint9 Var49;
  unkint9 Var50;
  unkint9 Var51;
  unkint9 Var52;
  unkint9 Var53;
  unkint9 Var54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  ulonglong uVar137;
  ulonglong uVar138;
  ulonglong uVar139;
  ulonglong uVar140;
  ulonglong uVar141;
  ulonglong uVar142;
  longlong lVar143;
  ulonglong uVar144;
  ulonglong uVar145;
  ulonglong uVar146;
  ulonglong uVar147;
  ulonglong uVar148;
  ulonglong uVar149;
  ulonglong uVar150;
  ulonglong uVar151;
  ulonglong uVar152;
  ulonglong uVar153;
  ulonglong uVar154;
  ulonglong uVar155;
  
  if ((_DAT_15540a9f8 & 0x80100) == 0x80100) {
    uVar138 = *param_3;
    auVar55._8_8_ = 0;
    auVar55._0_8_ = uVar138;
    auVar88._8_8_ = 0;
    auVar88._0_8_ = *param_2;
    uVar141 = SUB168(auVar55 * auVar88,0);
    uVar148 = SUB168(auVar55 * auVar88,8);
    auVar56._8_8_ = 0;
    auVar56._0_8_ = uVar138;
    auVar89._8_8_ = 0;
    auVar89._0_8_ = param_2[1];
    uVar142 = SUB168(auVar56 * auVar89,0);
    uVar139 = SUB168(auVar56 * auVar89,8);
    auVar57._8_8_ = 0;
    auVar57._0_8_ = uVar138;
    auVar90._8_8_ = 0;
    auVar90._0_8_ = param_2[2];
    uVar140 = SUB168(auVar57 * auVar90,0);
    uVar150 = SUB168(auVar57 * auVar90,8);
    auVar58._8_8_ = 0;
    auVar58._0_8_ = uVar138;
    auVar91._8_8_ = 0;
    auVar91._0_8_ = param_2[3];
    uVar146 = SUB168(auVar58 * auVar91,0);
    uVar147 = uVar141 * L_ordK;
    uVar138 = (ulonglong)CARRY8(uVar148,uVar142);
    uVar137 = uVar139 + uVar140;
    uVar140 = (ulonglong)(CARRY8(uVar139,uVar140) || CARRY8(uVar137,uVar138));
    uVar139 = uVar150 + uVar146;
    auVar59._8_8_ = 0;
    auVar59._0_8_ = uVar147;
    auVar92._8_8_ = 0;
    auVar92._0_8_ = L_ord;
    Var49 = (unkuint9)uVar141 + (unkuint9)SUB168(auVar59 * auVar92,0) + (unkuint9)0;
    uVar141 = (ulonglong)Var49;
    Var50 = (unkuint9)(uVar148 + uVar142) + (unkuint9)SUB168(auVar59 * auVar92,8) + (unkuint9)0;
    auVar60._8_8_ = 0;
    auVar60._0_8_ = uVar147;
    auVar93._8_8_ = 0;
    auVar93._0_8_ = DAT_140e570c8;
    Var49 = (unkuint9)(ulonglong)Var50 + (unkuint9)SUB168(auVar60 * auVar93,0) +
            (unkuint9)((char)((unkuint9)Var49 >> 0x40) != '\0');
    Var51 = (unkuint9)(uVar137 + uVar138) + (unkuint9)SUB168(auVar60 * auVar93,8) +
            (unkuint9)((char)((unkuint9)Var50 >> 0x40) != '\0');
    auVar61._8_8_ = 0;
    auVar61._0_8_ = uVar147;
    auVar94._8_8_ = 0;
    auVar94._0_8_ = DAT_140e570d0;
    Var50 = (unkuint9)(ulonglong)Var51 + (unkuint9)SUB168(auVar61 * auVar94,0) +
            (unkuint9)((char)((unkuint9)Var49 >> 0x40) != '\0');
    Var52 = (unkuint9)(uVar139 + uVar140) + (unkuint9)SUB168(auVar61 * auVar94,8) +
            (unkuint9)((char)((unkuint9)Var51 >> 0x40) != '\0');
    auVar62._8_8_ = 0;
    auVar62._0_8_ = uVar147;
    auVar95._8_8_ = 0;
    auVar95._0_8_ = DAT_140e570d8;
    uVar138 = param_3[1];
    Var51 = (unkuint9)(ulonglong)Var52 + (unkuint9)SUB168(auVar62 * auVar95,0) +
            (unkuint9)((char)((unkuint9)Var50 >> 0x40) != '\0');
    Var53 = (unkuint9)
            (SUB168(auVar58 * auVar91,8) +
            (ulonglong)(CARRY8(uVar150,uVar146) || CARRY8(uVar139,uVar140))) +
            (unkuint9)SUB168(auVar62 * auVar95,8) +
            (unkuint9)((char)((unkuint9)Var52 >> 0x40) != '\0');
    Var52 = (unkuint9)(ulonglong)Var53 + (unkuint9)uVar141 +
            (unkuint9)((char)((unkuint9)Var51 >> 0x40) != '\0');
    uVar139 = uVar141 + ((char)((unkuint9)Var53 >> 0x40) != '\0');
    uVar140 = (ulonglong)((char)((unkuint9)Var52 >> 0x40) != '\0');
    auVar63._8_8_ = 0;
    auVar63._0_8_ = uVar138;
    auVar96._8_8_ = 0;
    auVar96._0_8_ = *param_2;
    Var49 = (unkuint9)(ulonglong)Var49 + (unkuint9)SUB168(auVar63 * auVar96,0) +
            (unkuint9)CARRY8(uVar139,uVar140);
    uVar137 = (ulonglong)Var49;
    Var50 = (unkuint9)(ulonglong)Var50 + (unkuint9)SUB168(auVar63 * auVar96,8) +
            (unkuint9)SCARRY8(uVar139,uVar140);
    auVar64._8_8_ = 0;
    auVar64._0_8_ = uVar138;
    auVar97._8_8_ = 0;
    auVar97._0_8_ = param_2[1];
    Var49 = (unkuint9)(ulonglong)Var50 + (unkuint9)SUB168(auVar64 * auVar97,0) +
            (unkuint9)((char)((unkuint9)Var49 >> 0x40) != '\0');
    Var51 = (unkuint9)(ulonglong)Var51 + (unkuint9)SUB168(auVar64 * auVar97,8) +
            (unkuint9)((char)((unkuint9)Var50 >> 0x40) != '\0');
    auVar65._8_8_ = 0;
    auVar65._0_8_ = uVar138;
    auVar98._8_8_ = 0;
    auVar98._0_8_ = param_2[2];
    Var50 = (unkuint9)(ulonglong)Var51 + (unkuint9)SUB168(auVar65 * auVar98,0) +
            (unkuint9)((char)((unkuint9)Var49 >> 0x40) != '\0');
    Var52 = (unkuint9)(ulonglong)Var52 + (unkuint9)SUB168(auVar65 * auVar98,8) +
            (unkuint9)((char)((unkuint9)Var51 >> 0x40) != '\0');
    auVar66._8_8_ = 0;
    auVar66._0_8_ = uVar138;
    auVar99._8_8_ = 0;
    auVar99._0_8_ = param_2[3];
    uVar138 = uVar137 * L_ordK;
    Var51 = (unkuint9)(ulonglong)Var52 + (unkuint9)SUB168(auVar66 * auVar99,0) +
            (unkuint9)((char)((unkuint9)Var50 >> 0x40) != '\0');
    Var53 = (unkuint9)(uVar139 + uVar140) + (unkuint9)SUB168(auVar66 * auVar99,8) +
            (unkuint9)((char)((unkuint9)Var52 >> 0x40) != '\0');
    Var52 = (unkuint9)(ulonglong)Var53 + (unkuint9)uVar141 +
            (unkuint9)((char)((unkuint9)Var51 >> 0x40) != '\0');
    uVar139 = uVar141 * 2 + (ulonglong)((char)((unkuint9)Var53 >> 0x40) != '\0');
    uVar140 = (ulonglong)((char)((unkuint9)Var52 >> 0x40) != '\0');
    auVar67._8_8_ = 0;
    auVar67._0_8_ = uVar138;
    auVar100._8_8_ = 0;
    auVar100._0_8_ = L_ord;
    Var53 = (unkuint9)uVar137 + (unkuint9)SUB168(auVar67 * auVar100,0) +
            (unkuint9)CARRY8(uVar139,uVar140);
    uVar137 = (ulonglong)Var53;
    Var54 = (unkuint9)(ulonglong)Var49 + (unkuint9)SUB168(auVar67 * auVar100,8) +
            (unkuint9)SCARRY8(uVar139,uVar140);
    auVar68._8_8_ = 0;
    auVar68._0_8_ = uVar138;
    auVar101._8_8_ = 0;
    auVar101._0_8_ = DAT_140e570c8;
    Var49 = (unkuint9)(ulonglong)Var54 + (unkuint9)SUB168(auVar68 * auVar101,0) +
            (unkuint9)((char)((unkuint9)Var53 >> 0x40) != '\0');
    Var53 = (unkuint9)(ulonglong)Var50 + (unkuint9)SUB168(auVar68 * auVar101,8) +
            (unkuint9)((char)((unkuint9)Var54 >> 0x40) != '\0');
    auVar69._8_8_ = 0;
    auVar69._0_8_ = uVar138;
    auVar102._8_8_ = 0;
    auVar102._0_8_ = DAT_140e570d0;
    Var50 = (unkuint9)(ulonglong)Var53 + (unkuint9)SUB168(auVar69 * auVar102,0) +
            (unkuint9)((char)((unkuint9)Var49 >> 0x40) != '\0');
    Var53 = (unkuint9)(ulonglong)Var51 + (unkuint9)SUB168(auVar69 * auVar102,8) +
            (unkuint9)((char)((unkuint9)Var53 >> 0x40) != '\0');
    auVar70._8_8_ = 0;
    auVar70._0_8_ = uVar138;
    auVar103._8_8_ = 0;
    auVar103._0_8_ = DAT_140e570d8;
    uVar138 = param_3[2];
    Var51 = (unkuint9)(ulonglong)Var53 + (unkuint9)SUB168(auVar70 * auVar103,0) +
            (unkuint9)((char)((unkuint9)Var50 >> 0x40) != '\0');
    Var53 = (unkuint9)(ulonglong)Var52 + (unkuint9)SUB168(auVar70 * auVar103,8) +
            (unkuint9)((char)((unkuint9)Var53 >> 0x40) != '\0');
    Var52 = (unkuint9)(ulonglong)Var53 + (unkuint9)uVar137 +
            (unkuint9)((char)((unkuint9)Var51 >> 0x40) != '\0');
    uVar141 = uVar139 + uVar140 + uVar137 + (ulonglong)((char)((unkuint9)Var53 >> 0x40) != '\0');
    uVar140 = (ulonglong)((char)((unkuint9)Var52 >> 0x40) != '\0');
    auVar71._8_8_ = 0;
    auVar71._0_8_ = uVar138;
    auVar104._8_8_ = 0;
    auVar104._0_8_ = *param_2;
    Var49 = (unkuint9)(ulonglong)Var49 + (unkuint9)SUB168(auVar71 * auVar104,0) +
            (unkuint9)CARRY8(uVar141,uVar140);
    uVar139 = (ulonglong)Var49;
    Var50 = (unkuint9)(ulonglong)Var50 + (unkuint9)SUB168(auVar71 * auVar104,8) +
            (unkuint9)SCARRY8(uVar141,uVar140);
    auVar72._8_8_ = 0;
    auVar72._0_8_ = uVar138;
    auVar105._8_8_ = 0;
    auVar105._0_8_ = param_2[1];
    Var49 = (unkuint9)(ulonglong)Var50 + (unkuint9)SUB168(auVar72 * auVar105,0) +
            (unkuint9)((char)((unkuint9)Var49 >> 0x40) != '\0');
    Var51 = (unkuint9)(ulonglong)Var51 + (unkuint9)SUB168(auVar72 * auVar105,8) +
            (unkuint9)((char)((unkuint9)Var50 >> 0x40) != '\0');
    auVar73._8_8_ = 0;
    auVar73._0_8_ = uVar138;
    auVar106._8_8_ = 0;
    auVar106._0_8_ = param_2[2];
    Var50 = (unkuint9)(ulonglong)Var51 + (unkuint9)SUB168(auVar73 * auVar106,0) +
            (unkuint9)((char)((unkuint9)Var49 >> 0x40) != '\0');
    Var52 = (unkuint9)(ulonglong)Var52 + (unkuint9)SUB168(auVar73 * auVar106,8) +
            (unkuint9)((char)((unkuint9)Var51 >> 0x40) != '\0');
    auVar74._8_8_ = 0;
    auVar74._0_8_ = uVar138;
    auVar107._8_8_ = 0;
    auVar107._0_8_ = param_2[3];
    uVar138 = uVar139 * L_ordK;
    Var51 = (unkuint9)(ulonglong)Var52 + (unkuint9)SUB168(auVar74 * auVar107,0) +
            (unkuint9)((char)((unkuint9)Var50 >> 0x40) != '\0');
    Var53 = (unkuint9)(uVar141 + uVar140) + (unkuint9)SUB168(auVar74 * auVar107,8) +
            (unkuint9)((char)((unkuint9)Var52 >> 0x40) != '\0');
    Var52 = (unkuint9)(ulonglong)Var53 + (unkuint9)uVar137 +
            (unkuint9)((char)((unkuint9)Var51 >> 0x40) != '\0');
    uVar141 = uVar137 * 2 + (ulonglong)((char)((unkuint9)Var53 >> 0x40) != '\0');
    uVar140 = (ulonglong)((char)((unkuint9)Var52 >> 0x40) != '\0');
    auVar75._8_8_ = 0;
    auVar75._0_8_ = uVar138;
    auVar108._8_8_ = 0;
    auVar108._0_8_ = L_ord;
    Var53 = (unkuint9)uVar139 + (unkuint9)SUB168(auVar75 * auVar108,0) +
            (unkuint9)CARRY8(uVar141,uVar140);
    uVar137 = (ulonglong)Var53;
    Var54 = (unkuint9)(ulonglong)Var49 + (unkuint9)SUB168(auVar75 * auVar108,8) +
            (unkuint9)SCARRY8(uVar141,uVar140);
    auVar76._8_8_ = 0;
    auVar76._0_8_ = uVar138;
    auVar109._8_8_ = 0;
    auVar109._0_8_ = DAT_140e570c8;
    Var49 = (unkuint9)(ulonglong)Var54 + (unkuint9)SUB168(auVar76 * auVar109,0) +
            (unkuint9)((char)((unkuint9)Var53 >> 0x40) != '\0');
    Var53 = (unkuint9)(ulonglong)Var50 + (unkuint9)SUB168(auVar76 * auVar109,8) +
            (unkuint9)((char)((unkuint9)Var54 >> 0x40) != '\0');
    auVar77._8_8_ = 0;
    auVar77._0_8_ = uVar138;
    auVar110._8_8_ = 0;
    auVar110._0_8_ = DAT_140e570d0;
    Var50 = (unkuint9)(ulonglong)Var53 + (unkuint9)SUB168(auVar77 * auVar110,0) +
            (unkuint9)((char)((unkuint9)Var49 >> 0x40) != '\0');
    Var53 = (unkuint9)(ulonglong)Var51 + (unkuint9)SUB168(auVar77 * auVar110,8) +
            (unkuint9)((char)((unkuint9)Var53 >> 0x40) != '\0');
    auVar78._8_8_ = 0;
    auVar78._0_8_ = uVar138;
    auVar111._8_8_ = 0;
    auVar111._0_8_ = DAT_140e570d8;
    uVar138 = param_3[3];
    Var51 = (unkuint9)(ulonglong)Var53 + (unkuint9)SUB168(auVar78 * auVar111,0) +
            (unkuint9)((char)((unkuint9)Var50 >> 0x40) != '\0');
    Var53 = (unkuint9)(ulonglong)Var52 + (unkuint9)SUB168(auVar78 * auVar111,8) +
            (unkuint9)((char)((unkuint9)Var53 >> 0x40) != '\0');
    Var52 = (unkuint9)(ulonglong)Var53 + (unkuint9)uVar137 +
            (unkuint9)((char)((unkuint9)Var51 >> 0x40) != '\0');
    uVar141 = uVar141 + uVar140 + uVar137 + (ulonglong)((char)((unkuint9)Var53 >> 0x40) != '\0');
    uVar140 = (ulonglong)((char)((unkuint9)Var52 >> 0x40) != '\0');
    auVar79._8_8_ = 0;
    auVar79._0_8_ = uVar138;
    auVar112._8_8_ = 0;
    auVar112._0_8_ = *param_2;
    Var49 = (unkuint9)(ulonglong)Var49 + (unkuint9)SUB168(auVar79 * auVar112,0) +
            (unkuint9)CARRY8(uVar141,uVar140);
    uVar139 = (ulonglong)Var49;
    Var50 = (unkuint9)(ulonglong)Var50 + (unkuint9)SUB168(auVar79 * auVar112,8) +
            (unkuint9)SCARRY8(uVar141,uVar140);
    auVar80._8_8_ = 0;
    auVar80._0_8_ = uVar138;
    auVar113._8_8_ = 0;
    auVar113._0_8_ = param_2[1];
    Var49 = (unkuint9)(ulonglong)Var50 + (unkuint9)SUB168(auVar80 * auVar113,0) +
            (unkuint9)((char)((unkuint9)Var49 >> 0x40) != '\0');
    Var51 = (unkuint9)(ulonglong)Var51 + (unkuint9)SUB168(auVar80 * auVar113,8) +
            (unkuint9)((char)((unkuint9)Var50 >> 0x40) != '\0');
    auVar81._8_8_ = 0;
    auVar81._0_8_ = uVar138;
    auVar114._8_8_ = 0;
    auVar114._0_8_ = param_2[2];
    Var50 = (unkuint9)(ulonglong)Var51 + (unkuint9)SUB168(auVar81 * auVar114,0) +
            (unkuint9)((char)((unkuint9)Var49 >> 0x40) != '\0');
    Var52 = (unkuint9)(ulonglong)Var52 + (unkuint9)SUB168(auVar81 * auVar114,8) +
            (unkuint9)((char)((unkuint9)Var51 >> 0x40) != '\0');
    auVar82._8_8_ = 0;
    auVar82._0_8_ = uVar138;
    auVar115._8_8_ = 0;
    auVar115._0_8_ = param_2[3];
    auVar83._8_8_ = 0;
    auVar83._0_8_ = uVar139;
    auVar116._8_8_ = 0;
    auVar116._0_8_ = L_ordK;
    uVar146 = SUB168(auVar83 * auVar116,0);
    Var51 = (unkuint9)(ulonglong)Var52 + (unkuint9)SUB168(auVar82 * auVar115,0) +
            (unkuint9)((char)((unkuint9)Var50 >> 0x40) != '\0');
    Var53 = (unkuint9)(uVar141 + uVar140) + (unkuint9)SUB168(auVar82 * auVar115,8) +
            (unkuint9)((char)((unkuint9)Var52 >> 0x40) != '\0');
    Var52 = (unkuint9)(ulonglong)Var53 + (unkuint9)uVar137 +
            (unkuint9)((char)((unkuint9)Var51 >> 0x40) != '\0');
    uVar148 = uVar137 * 2 + (ulonglong)((char)((unkuint9)Var53 >> 0x40) != '\0');
    uVar138 = (ulonglong)((char)((unkuint9)Var52 >> 0x40) != '\0');
    auVar84._8_8_ = 0;
    auVar84._0_8_ = uVar146;
    auVar117._8_8_ = 0;
    auVar117._0_8_ = L_ord;
    Var53 = (unkuint9)uVar139 + (unkuint9)SUB168(auVar84 * auVar117,0) +
            (unkuint9)CARRY8(uVar148,uVar138);
    uVar139 = (ulonglong)Var53;
    Var54 = (unkuint9)(ulonglong)Var49 + (unkuint9)SUB168(auVar84 * auVar117,8) +
            (unkuint9)SCARRY8(uVar148,uVar138);
    auVar85._8_8_ = 0;
    auVar85._0_8_ = uVar146;
    auVar118._8_8_ = 0;
    auVar118._0_8_ = DAT_140e570c8;
    Var49 = (unkuint9)(ulonglong)Var54 + (unkuint9)SUB168(auVar85 * auVar118,0) +
            (unkuint9)((char)((unkuint9)Var53 >> 0x40) != '\0');
    uVar141 = (ulonglong)Var49;
    Var50 = (unkuint9)(ulonglong)Var50 + (unkuint9)SUB168(auVar85 * auVar118,8) +
            (unkuint9)((char)((unkuint9)Var54 >> 0x40) != '\0');
    auVar86._8_8_ = 0;
    auVar86._0_8_ = uVar146;
    auVar119._8_8_ = 0;
    auVar119._0_8_ = DAT_140e570d0;
    Var49 = (unkuint9)(ulonglong)Var50 + (unkuint9)SUB168(auVar86 * auVar119,0) +
            (unkuint9)((char)((unkuint9)Var49 >> 0x40) != '\0');
    uVar142 = (ulonglong)Var49;
    Var50 = (unkuint9)(ulonglong)Var51 + (unkuint9)SUB168(auVar86 * auVar119,8) +
            (unkuint9)((char)((unkuint9)Var50 >> 0x40) != '\0');
    auVar87._8_8_ = 0;
    auVar87._0_8_ = uVar146;
    auVar120._8_8_ = 0;
    auVar120._0_8_ = DAT_140e570d8;
    Var49 = (unkuint9)(ulonglong)Var50 + (unkuint9)SUB168(auVar87 * auVar120,0) +
            (unkuint9)((char)((unkuint9)Var49 >> 0x40) != '\0');
    uVar146 = (ulonglong)Var49;
    Var50 = (unkuint9)(ulonglong)Var52 + (unkuint9)SUB168(auVar87 * auVar120,8) +
            (unkuint9)((char)((unkuint9)Var50 >> 0x40) != '\0');
    Var49 = (unkuint9)(ulonglong)Var50 + (unkuint9)uVar139 +
            (unkuint9)((char)((unkuint9)Var49 >> 0x40) != '\0');
    uVar147 = (ulonglong)Var49;
    uVar140 = (ulonglong)
              (uVar142 < DAT_140e570c8 || uVar142 - DAT_140e570c8 < (ulonglong)(uVar141 < L_ord));
    uVar137 = (ulonglong)(uVar146 < DAT_140e570d0 || uVar146 - DAT_140e570d0 < uVar140);
    uVar151 = (uVar147 - DAT_140e570d8) - uVar137;
    uVar140 = (uVar146 - DAT_140e570d0) - uVar140;
    uVar150 = (uVar142 - DAT_140e570c8) - (ulonglong)(uVar141 < L_ord);
    uVar149 = uVar141 - L_ord;
    if (uVar148 + uVar138 + uVar139 + (ulonglong)((char)((unkuint9)Var50 >> 0x40) != '\0') +
        (ulonglong)((char)((unkuint9)Var49 >> 0x40) != '\0') <
        (ulonglong)(uVar147 < DAT_140e570d8 || uVar147 - DAT_140e570d8 < uVar137)) {
      uVar151 = uVar147;
      uVar140 = uVar146;
      uVar150 = uVar142;
      uVar149 = uVar141;
    }
    *param_1 = uVar149;
    param_1[1] = uVar150;
    param_1[2] = uVar140;
    param_1[3] = uVar151;
    return SUB168(auVar83 * auVar116,8);
  }
  uVar138 = *param_3;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar138;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = *param_2;
  auVar124._8_8_ = 0;
  auVar124._0_8_ = SUB168(auVar1 * auVar25,8);
  uVar137 = SUB168(auVar1 * auVar25,0);
  auVar127._8_8_ = 0;
  auVar127._0_8_ = uVar137;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar138;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = param_2[1];
  auVar124 = auVar2 * auVar26 + auVar124;
  uVar141 = auVar124._0_8_;
  auVar125._8_8_ = 0;
  auVar125._0_8_ = auVar124._8_8_;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar138;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = param_2[2];
  auVar125 = auVar3 * auVar27 + auVar125;
  uVar146 = auVar125._0_8_;
  auVar126._8_8_ = 0;
  auVar126._0_8_ = auVar125._8_8_;
  uVar137 = uVar137 * L_ordK;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar138;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = param_2[3];
  auVar126 = auVar4 * auVar28 + auVar126;
  uVar148 = auVar126._0_8_;
  uVar139 = auVar126._8_8_;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar137;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = L_ord;
  auVar127 = auVar5 * auVar29 + auVar127;
  uVar140 = auVar127._8_8_;
  uVar147 = uVar146 - uVar137;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar137;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = DAT_140e570c8;
  uVar138 = SUB168(auVar6 * auVar30,0);
  uVar142 = uVar141 + uVar140;
  uVar141 = SUB168(auVar6 * auVar30,8) + (ulonglong)CARRY8(uVar141,uVar140);
  auVar128._8_8_ = 0;
  auVar128._0_8_ = uVar142 + uVar138;
  uVar138 = (ulonglong)CARRY8(uVar142,uVar138);
  uVar140 = uVar147 + uVar141;
  uVar142 = uVar140 + uVar138;
  uVar140 = (uVar137 - (uVar146 < uVar137)) +
            (ulonglong)(CARRY8(uVar147,uVar141) || CARRY8(uVar140,uVar138));
  uVar146 = uVar148 - (uVar137 << 0x20);
  uVar138 = param_3[1];
  uVar141 = (uVar137 - (uVar137 >> 0x20)) - (ulonglong)(uVar148 < uVar137 << 0x20);
  uVar147 = uVar146 + uVar140;
  uVar140 = (ulonglong)CARRY8(uVar146,uVar140);
  uVar137 = uVar139 + uVar141;
  uVar150 = uVar137 + uVar140;
  uVar153 = auVar127._0_8_ + (ulonglong)(CARRY8(uVar139,uVar141) || CARRY8(uVar137,uVar140));
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar138;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = *param_2;
  auVar128 = auVar7 * auVar31 + auVar128;
  lVar143 = auVar128._0_8_;
  uVar140 = auVar128._8_8_;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar138;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = param_2[1];
  auVar131[8] = CARRY8(uVar142,uVar140);
  auVar131._0_8_ = uVar142 + uVar140;
  auVar131._9_7_ = 0;
  auVar131 = auVar8 * auVar32 + auVar131;
  uVar141 = auVar131._0_8_;
  uVar140 = auVar131._8_8_;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar138;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = param_2[2];
  auVar132[8] = CARRY8(uVar147,uVar140);
  auVar132._0_8_ = uVar147 + uVar140;
  auVar132._9_7_ = 0;
  auVar132 = auVar9 * auVar33 + auVar132;
  uVar148 = auVar132._0_8_;
  uVar140 = auVar132._8_8_;
  uVar146 = lVar143 * L_ordK;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar138;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = param_2[3];
  uVar138 = SUB168(auVar10 * auVar34,0);
  uVar137 = uVar150 + uVar140;
  uVar142 = SUB168(auVar10 * auVar34,8) + (ulonglong)CARRY8(uVar150,uVar140);
  uVar151 = uVar137 + uVar138;
  uVar140 = (ulonglong)CARRY8(uVar137,uVar138);
  uVar139 = uVar153 + uVar142;
  uVar154 = uVar139 + uVar140;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar146;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = L_ord;
  auVar121._8_8_ = auVar121._0_8_;
  auVar121._0_8_ = lVar143;
  auVar121 = auVar11 * auVar35 + auVar121;
  uVar137 = auVar121._8_8_;
  uVar150 = uVar148 - uVar146;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar146;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = DAT_140e570c8;
  uVar138 = SUB168(auVar12 * auVar36,0);
  uVar147 = uVar141 + uVar137;
  uVar141 = SUB168(auVar12 * auVar36,8) + (ulonglong)CARRY8(uVar141,uVar137);
  auVar129._8_8_ = 0;
  auVar129._0_8_ = uVar147 + uVar138;
  uVar138 = (ulonglong)CARRY8(uVar147,uVar138);
  uVar137 = uVar150 + uVar141;
  uVar149 = uVar137 + uVar138;
  uVar137 = (uVar146 - (uVar148 < uVar146)) +
            (ulonglong)(CARRY8(uVar150,uVar141) || CARRY8(uVar137,uVar138));
  uVar141 = uVar151 - (uVar146 << 0x20);
  uVar138 = param_3[2];
  uVar146 = (uVar146 - (uVar146 >> 0x20)) - (ulonglong)(uVar151 < uVar146 << 0x20);
  uVar148 = uVar141 + uVar137;
  uVar137 = (ulonglong)CARRY8(uVar141,uVar137);
  uVar141 = uVar154 + uVar146;
  uVar150 = uVar141 + uVar137;
  uVar147 = (ulonglong)(CARRY8(uVar153,uVar142) || CARRY8(uVar139,uVar140)) +
            (ulonglong)(CARRY8(uVar154,uVar146) || CARRY8(uVar141,uVar137));
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar138;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = *param_2;
  auVar129 = auVar13 * auVar37 + auVar129;
  lVar143 = auVar129._0_8_;
  uVar140 = auVar129._8_8_;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar138;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = param_2[1];
  auVar133[8] = CARRY8(uVar149,uVar140);
  auVar133._0_8_ = uVar149 + uVar140;
  auVar133._9_7_ = 0;
  auVar133 = auVar14 * auVar38 + auVar133;
  uVar141 = auVar133._0_8_;
  uVar140 = auVar133._8_8_;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar138;
  auVar39._8_8_ = 0;
  auVar39._0_8_ = param_2[2];
  auVar134[8] = CARRY8(uVar148,uVar140);
  auVar134._0_8_ = uVar148 + uVar140;
  auVar134._9_7_ = 0;
  auVar134 = auVar15 * auVar39 + auVar134;
  uVar149 = auVar134._0_8_;
  uVar140 = auVar134._8_8_;
  uVar146 = lVar143 * L_ordK;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar138;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = param_2[3];
  uVar138 = SUB168(auVar16 * auVar40,0);
  uVar137 = uVar150 + uVar140;
  uVar142 = SUB168(auVar16 * auVar40,8) + (ulonglong)CARRY8(uVar150,uVar140);
  uVar154 = uVar137 + uVar138;
  uVar140 = (ulonglong)CARRY8(uVar137,uVar138);
  uVar139 = uVar147 + uVar142;
  uVar148 = uVar139 + uVar140;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar146;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = L_ord;
  auVar1 = auVar17 * auVar41 + auVar122;
  auVar122._8_8_ = auVar1._0_8_;
  auVar122._0_8_ = lVar143;
  uVar137 = auVar1._8_8_;
  uVar151 = uVar149 - uVar146;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar146;
  auVar42._8_8_ = 0;
  auVar42._0_8_ = DAT_140e570c8;
  uVar138 = SUB168(auVar18 * auVar42,0);
  uVar150 = uVar141 + uVar137;
  uVar141 = SUB168(auVar18 * auVar42,8) + (ulonglong)CARRY8(uVar141,uVar137);
  auVar130._8_8_ = 0;
  auVar130._0_8_ = uVar150 + uVar138;
  uVar138 = (ulonglong)CARRY8(uVar150,uVar138);
  uVar137 = uVar151 + uVar141;
  uVar153 = uVar137 + uVar138;
  uVar137 = (uVar146 - (uVar149 < uVar146)) +
            (ulonglong)(CARRY8(uVar151,uVar141) || CARRY8(uVar137,uVar138));
  uVar141 = uVar154 - (uVar146 << 0x20);
  uVar138 = param_3[3];
  uVar146 = (uVar146 - (uVar146 >> 0x20)) - (ulonglong)(uVar154 < uVar146 << 0x20);
  uVar149 = uVar141 + uVar137;
  uVar137 = (ulonglong)CARRY8(uVar141,uVar137);
  uVar141 = uVar148 + uVar146;
  uVar150 = uVar141 + uVar137;
  uVar154 = (ulonglong)(CARRY8(uVar147,uVar142) || CARRY8(uVar139,uVar140)) +
            (ulonglong)(CARRY8(uVar148,uVar146) || CARRY8(uVar141,uVar137));
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar138;
  auVar43._8_8_ = 0;
  auVar43._0_8_ = *param_2;
  auVar130 = auVar19 * auVar43 + auVar130;
  lVar143 = auVar130._0_8_;
  uVar140 = auVar130._8_8_;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar138;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = param_2[1];
  auVar135[8] = CARRY8(uVar153,uVar140);
  auVar135._0_8_ = uVar153 + uVar140;
  auVar135._9_7_ = 0;
  auVar135 = auVar20 * auVar44 + auVar135;
  uVar141 = auVar135._0_8_;
  uVar140 = auVar135._8_8_;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar138;
  auVar45._8_8_ = 0;
  auVar45._0_8_ = param_2[2];
  auVar136[8] = CARRY8(uVar149,uVar140);
  auVar136._0_8_ = uVar149 + uVar140;
  auVar136._9_7_ = 0;
  auVar136 = auVar21 * auVar45 + auVar136;
  uVar148 = auVar136._0_8_;
  uVar140 = auVar136._8_8_;
  uVar146 = lVar143 * L_ordK;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar138;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = param_2[3];
  uVar138 = SUB168(auVar22 * auVar46,0);
  uVar137 = uVar150 + uVar140;
  uVar149 = SUB168(auVar22 * auVar46,8) + (ulonglong)CARRY8(uVar150,uVar140);
  uVar142 = uVar137 + uVar138;
  uVar138 = (ulonglong)CARRY8(uVar137,uVar138);
  uVar137 = uVar154 + uVar149;
  uVar144 = uVar137 + uVar138;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar146;
  auVar47._8_8_ = 0;
  auVar47._0_8_ = L_ord;
  auVar1 = auVar23 * auVar47 + auVar123;
  auVar123._8_8_ = auVar1._0_8_;
  auVar123._0_8_ = lVar143;
  uVar139 = auVar1._8_8_;
  uVar150 = uVar148 - uVar146;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar146;
  auVar48._8_8_ = 0;
  auVar48._0_8_ = DAT_140e570c8;
  uVar140 = SUB168(auVar24 * auVar48,0);
  uVar147 = uVar141 + uVar139;
  uVar141 = SUB168(auVar24 * auVar48,8) + (ulonglong)CARRY8(uVar141,uVar139);
  uVar152 = uVar147 + uVar140;
  uVar140 = (ulonglong)CARRY8(uVar147,uVar140);
  uVar139 = uVar150 + uVar141;
  uVar155 = uVar139 + uVar140;
  uVar139 = (uVar146 - (uVar148 < uVar146)) +
            (ulonglong)(CARRY8(uVar150,uVar141) || CARRY8(uVar139,uVar140));
  uVar150 = uVar146 << 0x20;
  uVar140 = uVar142 - uVar150;
  uVar151 = (uVar146 - (uVar146 >> 0x20)) - (ulonglong)(uVar142 < uVar150);
  uVar153 = uVar140 + uVar139;
  uVar140 = (ulonglong)CARRY8(uVar140,uVar139);
  uVar139 = uVar144 + uVar151;
  uVar145 = uVar139 + uVar140;
  uVar141 = (ulonglong)
            (uVar155 < DAT_140e570c8 || uVar155 - DAT_140e570c8 < (ulonglong)(uVar152 < L_ord));
  uVar142 = (ulonglong)(uVar153 < DAT_140e570d0 || uVar153 - DAT_140e570d0 < uVar141);
  uVar148 = (uVar145 - DAT_140e570d8) - uVar142;
  uVar141 = (uVar153 - DAT_140e570d0) - uVar141;
  uVar146 = (uVar155 - DAT_140e570c8) - (ulonglong)(uVar152 < L_ord);
  uVar147 = uVar152 - L_ord;
  if ((byte)((CARRY8(uVar154,uVar149) || CARRY8(uVar137,uVar138)) +
            (CARRY8(uVar144,uVar151) || CARRY8(uVar139,uVar140))) <
      (uVar145 < DAT_140e570d8 || uVar145 - DAT_140e570d8 < uVar142)) {
    uVar148 = uVar145;
    uVar141 = uVar153;
    uVar146 = uVar155;
    uVar147 = uVar152;
  }
  *param_1 = uVar147;
  param_1[1] = uVar146;
  param_1[2] = uVar141;
  param_1[3] = uVar148;
  return uVar150;
}

// ecp_nistz256_ord_sqr_mont @ 140e578e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong ecp_nistz256_ord_sqr_mont(ulonglong *param_1,ulonglong *param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  unkint9 Var37;
  unkint9 Var38;
  unkint9 Var39;
  unkint9 Var40;
  unkint9 Var41;
  unkint9 Var42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  ulonglong uVar103;
  ulonglong uVar104;
  longlong lVar105;
  ulonglong uVar106;
  ulonglong uVar107;
  ulonglong uVar108;
  ulonglong uVar109;
  ulonglong uVar110;
  ulonglong uVar111;
  ulonglong uVar112;
  ulonglong uVar113;
  ulonglong uVar114;
  ulonglong uVar115;
  ulonglong uVar116;
  ulonglong uVar117;
  ulonglong uVar118;
  
  if ((_DAT_15540a9f8 & 0x80100) != 0x80100) {
    uVar110 = *param_2;
    uVar107 = param_2[1];
    uVar106 = param_2[2];
    uVar111 = param_2[3];
    do {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar107;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar110;
      auVar99._8_8_ = 0;
      auVar99._0_8_ = SUB168(auVar1 * auVar19,8);
      uVar103 = SUB168(auVar1 * auVar19,0);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar106;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar110;
      auVar99 = auVar2 * auVar20 + auVar99;
      uVar112 = auVar99._0_8_;
      auVar100._8_8_ = 0;
      auVar100._0_8_ = auVar99._8_8_;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar111;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar110;
      auVar100 = auVar3 * auVar21 + auVar100;
      auVar101._8_8_ = 0;
      auVar101._0_8_ = auVar100._0_8_;
      auVar102._8_8_ = 0;
      auVar102._0_8_ = auVar100._8_8_;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar111;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar106;
      uVar104 = SUB168(auVar4 * auVar22,0);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar106;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar107;
      auVar101 = auVar5 * auVar23 + auVar101;
      uVar113 = auVar101._0_8_;
      uVar108 = auVar101._8_8_;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar111;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar107;
      auVar102 = auVar6 * auVar24 + auVar102;
      uVar114 = auVar102._0_8_;
      uVar109 = auVar102._8_8_;
      uVar115 = uVar114 + uVar108;
      uVar108 = (ulonglong)CARRY8(uVar114,uVar108);
      uVar114 = uVar104 + uVar109;
      uVar116 = uVar114 + uVar108;
      uVar118 = SUB168(auVar4 * auVar22,8) +
                (ulonglong)(CARRY8(uVar104,uVar109) || CARRY8(uVar114,uVar108));
      uVar109 = uVar112 * 2 + (ulonglong)CARRY8(uVar103,uVar103);
      uVar108 = (ulonglong)
                (CARRY8(uVar112,uVar112) || CARRY8(uVar112 * 2,(ulonglong)CARRY8(uVar103,uVar103)));
      uVar112 = uVar113 * 2 + uVar108;
      uVar108 = (ulonglong)(CARRY8(uVar113,uVar113) || CARRY8(uVar113 * 2,uVar108));
      uVar113 = uVar115 * 2 + uVar108;
      uVar108 = (ulonglong)(CARRY8(uVar115,uVar115) || CARRY8(uVar115 * 2,uVar108));
      uVar117 = uVar116 * 2 + uVar108;
      uVar108 = (ulonglong)(CARRY8(uVar116,uVar116) || CARRY8(uVar116 * 2,uVar108));
      uVar116 = uVar118 * 2 + uVar108;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar110;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar110;
      uVar110 = SUB168(auVar7 * auVar25,8);
      lVar105 = SUB168(auVar7 * auVar25,0);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar107;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar107;
      uVar114 = SUB168(auVar8 * auVar26,0);
      uVar104 = uVar103 * 2 + uVar110;
      uVar110 = (ulonglong)CARRY8(uVar103 * 2,uVar110);
      uVar107 = uVar109 + uVar114;
      uVar103 = uVar107 + uVar110;
      uVar110 = SUB168(auVar8 * auVar26,8) +
                (ulonglong)(CARRY8(uVar109,uVar114) || CARRY8(uVar107,uVar110));
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar106;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar106;
      uVar106 = SUB168(auVar9 * auVar27,0);
      uVar109 = uVar112 + uVar110;
      uVar110 = (ulonglong)CARRY8(uVar112,uVar110);
      uVar107 = uVar113 + uVar106;
      uVar115 = uVar107 + uVar110;
      uVar110 = SUB168(auVar9 * auVar27,8) +
                (ulonglong)(CARRY8(uVar113,uVar106) || CARRY8(uVar107,uVar110));
      uVar114 = lVar105 * L_ordK;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar111;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar111;
      uVar106 = SUB168(auVar10 * auVar28,0);
      uVar113 = uVar117 + uVar110;
      uVar110 = (ulonglong)CARRY8(uVar117,uVar110);
      uVar107 = uVar116 + uVar106;
      uVar117 = uVar107 + uVar110;
      uVar116 = (ulonglong)(CARRY8(uVar118,uVar118) || CARRY8(uVar118 * 2,uVar108)) +
                SUB168(auVar10 * auVar28,8) +
                (ulonglong)(CARRY8(uVar116,uVar106) || CARRY8(uVar107,uVar110));
      auVar11._8_8_ = 0;
      auVar11._0_8_ = L_ord;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar114;
      auVar43 = auVar11 * auVar29 + auVar95;
      auVar95._8_8_ = auVar43._0_8_;
      auVar95._0_8_ = lVar105;
      uVar107 = auVar43._8_8_;
      uVar108 = uVar103 - uVar114;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = DAT_140e570c8;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = uVar114;
      uVar110 = SUB168(auVar12 * auVar30,0);
      uVar111 = uVar104 + uVar107;
      uVar106 = SUB168(auVar12 * auVar30,8) + (ulonglong)CARRY8(uVar104,uVar107);
      lVar105 = uVar111 + uVar110;
      uVar110 = (ulonglong)CARRY8(uVar111,uVar110);
      uVar107 = uVar108 + uVar106;
      uVar104 = uVar107 + uVar110;
      uVar110 = (uVar114 - (uVar103 < uVar114)) +
                (ulonglong)(CARRY8(uVar108,uVar106) || CARRY8(uVar107,uVar110));
      uVar103 = lVar105 * L_ordK;
      uVar107 = uVar109 - (uVar114 << 0x20);
      uVar112 = uVar107 + uVar110;
      uVar111 = ((uVar114 - (uVar114 >> 0x20)) - (ulonglong)(uVar109 < uVar114 << 0x20)) +
                (ulonglong)CARRY8(uVar107,uVar110);
      auVar13._8_8_ = 0;
      auVar13._0_8_ = L_ord;
      auVar31._8_8_ = 0;
      auVar31._0_8_ = uVar103;
      auVar43 = auVar13 * auVar31 + auVar96;
      auVar96._8_8_ = auVar43._0_8_;
      auVar96._0_8_ = lVar105;
      uVar107 = auVar43._8_8_;
      uVar114 = uVar112 - uVar103;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = DAT_140e570c8;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = uVar103;
      uVar110 = SUB168(auVar14 * auVar32,0);
      uVar108 = uVar104 + uVar107;
      uVar106 = SUB168(auVar14 * auVar32,8) + (ulonglong)CARRY8(uVar104,uVar107);
      lVar105 = uVar108 + uVar110;
      uVar110 = (ulonglong)CARRY8(uVar108,uVar110);
      uVar107 = uVar114 + uVar106;
      uVar104 = uVar107 + uVar110;
      uVar110 = (uVar103 - (uVar112 < uVar103)) +
                (ulonglong)(CARRY8(uVar114,uVar106) || CARRY8(uVar107,uVar110));
      uVar109 = lVar105 * L_ordK;
      uVar107 = uVar111 - (uVar103 << 0x20);
      uVar108 = uVar107 + uVar110;
      uVar103 = ((uVar103 - (uVar103 >> 0x20)) - (ulonglong)(uVar111 < uVar103 << 0x20)) +
                (ulonglong)CARRY8(uVar107,uVar110);
      auVar15._8_8_ = 0;
      auVar15._0_8_ = L_ord;
      auVar33._8_8_ = 0;
      auVar33._0_8_ = uVar109;
      auVar43 = auVar15 * auVar33 + auVar97;
      auVar97._8_8_ = auVar43._0_8_;
      auVar97._0_8_ = lVar105;
      uVar107 = auVar43._8_8_;
      uVar111 = uVar108 - uVar109;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = DAT_140e570c8;
      auVar34._8_8_ = 0;
      auVar34._0_8_ = uVar109;
      uVar110 = SUB168(auVar16 * auVar34,0);
      uVar114 = uVar104 + uVar107;
      uVar106 = SUB168(auVar16 * auVar34,8) + (ulonglong)CARRY8(uVar104,uVar107);
      lVar105 = uVar114 + uVar110;
      uVar110 = (ulonglong)CARRY8(uVar114,uVar110);
      uVar107 = uVar111 + uVar106;
      uVar114 = uVar107 + uVar110;
      uVar110 = (uVar109 - (uVar108 < uVar109)) +
                (ulonglong)(CARRY8(uVar111,uVar106) || CARRY8(uVar107,uVar110));
      uVar112 = lVar105 * L_ordK;
      uVar107 = uVar103 - (uVar109 << 0x20);
      uVar104 = uVar107 + uVar110;
      uVar109 = ((uVar109 - (uVar109 >> 0x20)) - (ulonglong)(uVar103 < uVar109 << 0x20)) +
                (ulonglong)CARRY8(uVar107,uVar110);
      auVar17._8_8_ = 0;
      auVar17._0_8_ = L_ord;
      auVar35._8_8_ = 0;
      auVar35._0_8_ = uVar112;
      auVar43 = auVar17 * auVar35 + auVar98;
      auVar98._8_8_ = auVar43._0_8_;
      auVar98._0_8_ = lVar105;
      uVar107 = auVar43._8_8_;
      uVar103 = uVar104 - uVar112;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = DAT_140e570c8;
      auVar36._8_8_ = 0;
      auVar36._0_8_ = uVar112;
      uVar110 = SUB168(auVar18 * auVar36,0);
      uVar111 = uVar114 + uVar107;
      uVar106 = SUB168(auVar18 * auVar36,8) + (ulonglong)CARRY8(uVar114,uVar107);
      uVar108 = uVar111 + uVar110;
      uVar110 = (ulonglong)CARRY8(uVar111,uVar110);
      uVar107 = uVar103 + uVar106;
      uVar114 = uVar107 + uVar110;
      uVar110 = (uVar112 - (uVar104 < uVar112)) +
                (ulonglong)(CARRY8(uVar103,uVar106) || CARRY8(uVar107,uVar110));
      uVar107 = uVar109 - (uVar112 << 0x20);
      uVar103 = uVar107 + uVar110;
      uVar109 = ((uVar112 - (uVar112 >> 0x20)) - (ulonglong)(uVar109 < uVar112 << 0x20)) +
                (ulonglong)CARRY8(uVar107,uVar110);
      uVar110 = uVar108 + uVar115;
      uVar106 = (ulonglong)CARRY8(uVar108,uVar115);
      uVar111 = uVar114 + uVar113;
      uVar107 = uVar111 + uVar106;
      uVar111 = (ulonglong)(CARRY8(uVar114,uVar113) || CARRY8(uVar111,uVar106));
      uVar108 = uVar103 + uVar117;
      uVar106 = uVar108 + uVar111;
      uVar108 = (ulonglong)(CARRY8(uVar103,uVar117) || CARRY8(uVar108,uVar111));
      uVar114 = uVar109 + uVar116;
      uVar111 = uVar114 + uVar108;
      uVar103 = (ulonglong)
                (uVar107 < DAT_140e570c8 || uVar107 - DAT_140e570c8 < (ulonglong)(uVar110 < L_ord));
      uVar104 = (ulonglong)(uVar106 < DAT_140e570d0 || uVar106 - DAT_140e570d0 < uVar103);
      if ((uVar111 < DAT_140e570d8 || uVar111 - DAT_140e570d8 < uVar104) <=
          (CARRY8(uVar109,uVar116) || CARRY8(uVar114,uVar108))) {
        uVar111 = (uVar111 - DAT_140e570d8) - uVar104;
        uVar106 = (uVar106 - DAT_140e570d0) - uVar103;
        uVar107 = (uVar107 - DAT_140e570c8) - (ulonglong)(uVar110 < L_ord);
        uVar110 = uVar110 - L_ord;
      }
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    *param_1 = uVar110;
    param_1[1] = uVar107;
    param_1[2] = uVar106;
    param_1[3] = uVar111;
    return uVar107;
  }
  uVar110 = *param_2;
  uVar107 = param_2[1];
  uVar106 = param_2[2];
  uVar111 = param_2[3];
  do {
    auVar43._8_8_ = 0;
    auVar43._0_8_ = uVar110;
    auVar69._8_8_ = 0;
    auVar69._0_8_ = uVar107;
    uVar104 = SUB168(auVar43 * auVar69,0);
    uVar114 = SUB168(auVar43 * auVar69,8);
    auVar44._8_8_ = 0;
    auVar44._0_8_ = uVar110;
    auVar70._8_8_ = 0;
    auVar70._0_8_ = uVar106;
    uVar108 = SUB168(auVar44 * auVar70,0);
    uVar113 = SUB168(auVar44 * auVar70,8);
    auVar45._8_8_ = 0;
    auVar45._0_8_ = uVar110;
    auVar71._8_8_ = 0;
    auVar71._0_8_ = uVar111;
    uVar109 = SUB168(auVar45 * auVar71,0);
    uVar112 = uVar114 + uVar108;
    uVar108 = (ulonglong)CARRY8(uVar114,uVar108);
    uVar114 = uVar113 + uVar109;
    auVar46._8_8_ = 0;
    auVar46._0_8_ = uVar107;
    auVar72._8_8_ = 0;
    auVar72._0_8_ = uVar106;
    Var37 = (unkuint9)(uVar114 + uVar108) + (unkuint9)SUB168(auVar46 * auVar72,0) + (unkuint9)0;
    uVar103 = (ulonglong)Var37;
    Var39 = (unkuint9)
            (SUB168(auVar45 * auVar71,8) +
            (ulonglong)(CARRY8(uVar113,uVar109) || CARRY8(uVar114,uVar108))) +
            (unkuint9)SUB168(auVar46 * auVar72,8) + (unkuint9)0;
    auVar47._8_8_ = 0;
    auVar47._0_8_ = uVar107;
    auVar73._8_8_ = 0;
    auVar73._0_8_ = uVar111;
    Var37 = (unkuint9)(ulonglong)Var39 + (unkuint9)SUB168(auVar47 * auVar73,0) +
            (unkuint9)((char)((unkuint9)Var37 >> 0x40) != '\0');
    uVar108 = (ulonglong)Var37;
    auVar48._8_8_ = 0;
    auVar48._0_8_ = uVar106;
    auVar74._8_8_ = 0;
    auVar74._0_8_ = uVar111;
    Var38 = (unkuint9)uVar104 + (unkuint9)uVar104 + (unkuint9)0;
    Var39 = (unkuint9)
            (SUB168(auVar47 * auVar73,8) + (ulonglong)((char)((unkuint9)Var39 >> 0x40) != '\0') +
            (ulonglong)((char)((unkuint9)Var37 >> 0x40) != '\0')) +
            (unkuint9)SUB168(auVar48 * auVar74,0) + (unkuint9)0;
    uVar114 = (ulonglong)Var39;
    Var37 = (unkuint9)uVar112 + (unkuint9)uVar112 +
            (unkuint9)((char)((unkuint9)Var38 >> 0x40) != '\0');
    Var40 = (unkuint9)SUB168(auVar48 * auVar74,8) + (unkuint9)0 +
            (unkuint9)((char)((unkuint9)Var39 >> 0x40) != '\0');
    uVar104 = (ulonglong)Var40;
    auVar49._8_8_ = 0;
    auVar49._0_8_ = uVar110;
    auVar75._8_8_ = 0;
    auVar75._0_8_ = uVar110;
    uVar110 = SUB168(auVar49 * auVar75,0);
    Var39 = (unkuint9)uVar103 + (unkuint9)uVar103 +
            (unkuint9)((char)((unkuint9)Var37 >> 0x40) != '\0');
    Var41 = (unkuint9)(ulonglong)Var38 + (unkuint9)SUB168(auVar49 * auVar75,8) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    Var38 = (unkuint9)uVar108 + (unkuint9)uVar108 +
            (unkuint9)((char)((unkuint9)Var39 >> 0x40) != '\0');
    auVar50._8_8_ = 0;
    auVar50._0_8_ = uVar107;
    auVar76._8_8_ = 0;
    auVar76._0_8_ = uVar107;
    Var40 = (unkuint9)uVar114 + (unkuint9)uVar114 +
            (unkuint9)((char)((unkuint9)Var38 >> 0x40) != '\0');
    Var42 = (unkuint9)(ulonglong)Var37 + (unkuint9)SUB168(auVar50 * auVar76,0) +
            (unkuint9)((char)((unkuint9)Var41 >> 0x40) != '\0');
    Var37 = (unkuint9)uVar104 + (unkuint9)uVar104 +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    auVar51._8_8_ = 0;
    auVar51._0_8_ = uVar106;
    auVar77._8_8_ = 0;
    auVar77._0_8_ = uVar106;
    Var39 = (unkuint9)(ulonglong)Var39 + (unkuint9)SUB168(auVar50 * auVar76,8) +
            (unkuint9)((char)((unkuint9)Var42 >> 0x40) != '\0');
    Var38 = (unkuint9)(ulonglong)Var38 + (unkuint9)SUB168(auVar51 * auVar77,0) +
            (unkuint9)((char)((unkuint9)Var39 >> 0x40) != '\0');
    uVar107 = (ulonglong)Var38;
    Var38 = (unkuint9)(ulonglong)Var40 + (unkuint9)SUB168(auVar51 * auVar77,8) +
            (unkuint9)((char)((unkuint9)Var38 >> 0x40) != '\0');
    uVar108 = (ulonglong)Var38;
    auVar52._8_8_ = 0;
    auVar52._0_8_ = uVar111;
    auVar78._8_8_ = 0;
    auVar78._0_8_ = uVar111;
    Var38 = (unkuint9)(ulonglong)Var37 + (unkuint9)SUB168(auVar52 * auVar78,0) +
            (unkuint9)((char)((unkuint9)Var38 >> 0x40) != '\0');
    uVar114 = (ulonglong)Var38;
    uVar103 = (ulonglong)((char)((unkuint9)Var37 >> 0x40) != '\0') + SUB168(auVar52 * auVar78,8) +
              (ulonglong)((char)((unkuint9)Var38 >> 0x40) != '\0');
    uVar106 = uVar110 * L_ordK;
    auVar53._8_8_ = 0;
    auVar53._0_8_ = uVar106;
    auVar79._8_8_ = 0;
    auVar79._0_8_ = L_ord;
    Var37 = (unkuint9)uVar110 + (unkuint9)SUB168(auVar53 * auVar79,0) + (unkuint9)0;
    Var40 = (unkuint9)(ulonglong)Var41 + (unkuint9)SUB168(auVar53 * auVar79,8) + (unkuint9)0;
    auVar54._8_8_ = 0;
    auVar54._0_8_ = uVar106;
    auVar80._8_8_ = 0;
    auVar80._0_8_ = DAT_140e570c8;
    Var38 = (unkuint9)(ulonglong)Var40 + (unkuint9)SUB168(auVar54 * auVar80,0) +
            (unkuint9)((char)((unkuint9)Var37 >> 0x40) != '\0');
    uVar110 = (ulonglong)Var38;
    Var40 = (unkuint9)(ulonglong)Var42 + (unkuint9)SUB168(auVar54 * auVar80,8) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    auVar55._8_8_ = 0;
    auVar55._0_8_ = uVar106;
    auVar81._8_8_ = 0;
    auVar81._0_8_ = DAT_140e570d0;
    Var38 = (unkuint9)(ulonglong)Var40 + (unkuint9)SUB168(auVar55 * auVar81,0) +
            (unkuint9)((char)((unkuint9)Var38 >> 0x40) != '\0');
    Var40 = (unkuint9)(ulonglong)Var39 + (unkuint9)SUB168(auVar55 * auVar81,8) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    auVar56._8_8_ = 0;
    auVar56._0_8_ = uVar106;
    auVar82._8_8_ = 0;
    auVar82._0_8_ = DAT_140e570d8;
    Var39 = (unkuint9)(ulonglong)Var40 + (unkuint9)SUB168(auVar56 * auVar82,0) +
            (unkuint9)((char)((unkuint9)Var38 >> 0x40) != '\0');
    Var40 = (unkuint9)(ulonglong)Var37 + (unkuint9)SUB168(auVar56 * auVar82,8) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    Var37 = (unkuint9)(ulonglong)Var40 + (unkuint9)0 +
            (unkuint9)((char)((unkuint9)Var39 >> 0x40) != '\0');
    uVar106 = uVar110 * L_ordK;
    auVar57._8_8_ = 0;
    auVar57._0_8_ = uVar106;
    auVar83._8_8_ = 0;
    auVar83._0_8_ = L_ord;
    Var40 = (unkuint9)uVar110 + (unkuint9)SUB168(auVar57 * auVar83,0) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    Var38 = (unkuint9)(ulonglong)Var38 + (unkuint9)SUB168(auVar57 * auVar83,8) +
            (unkuint9)((char)((unkuint9)Var37 >> 0x40) != '\0');
    auVar58._8_8_ = 0;
    auVar58._0_8_ = uVar106;
    auVar84._8_8_ = 0;
    auVar84._0_8_ = DAT_140e570c8;
    Var41 = (unkuint9)(ulonglong)Var38 + (unkuint9)SUB168(auVar58 * auVar84,0) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    uVar110 = (ulonglong)Var41;
    Var38 = (unkuint9)(ulonglong)Var39 + (unkuint9)SUB168(auVar58 * auVar84,8) +
            (unkuint9)((char)((unkuint9)Var38 >> 0x40) != '\0');
    auVar59._8_8_ = 0;
    auVar59._0_8_ = uVar106;
    auVar85._8_8_ = 0;
    auVar85._0_8_ = DAT_140e570d0;
    Var39 = (unkuint9)(ulonglong)Var38 + (unkuint9)SUB168(auVar59 * auVar85,0) +
            (unkuint9)((char)((unkuint9)Var41 >> 0x40) != '\0');
    Var37 = (unkuint9)(ulonglong)Var37 + (unkuint9)SUB168(auVar59 * auVar85,8) +
            (unkuint9)((char)((unkuint9)Var38 >> 0x40) != '\0');
    auVar60._8_8_ = 0;
    auVar60._0_8_ = uVar106;
    auVar86._8_8_ = 0;
    auVar86._0_8_ = DAT_140e570d8;
    Var41 = (unkuint9)(ulonglong)Var37 + (unkuint9)SUB168(auVar60 * auVar86,0) +
            (unkuint9)((char)((unkuint9)Var39 >> 0x40) != '\0');
    Var37 = (unkuint9)(ulonglong)Var40 + (unkuint9)SUB168(auVar60 * auVar86,8) +
            (unkuint9)((char)((unkuint9)Var37 >> 0x40) != '\0');
    Var40 = (unkuint9)(ulonglong)Var37 + (unkuint9)0 +
            (unkuint9)((char)((unkuint9)Var41 >> 0x40) != '\0');
    uVar106 = uVar110 * L_ordK;
    auVar61._8_8_ = 0;
    auVar61._0_8_ = uVar106;
    auVar87._8_8_ = 0;
    auVar87._0_8_ = L_ord;
    Var37 = (unkuint9)uVar110 + (unkuint9)SUB168(auVar61 * auVar87,0) +
            (unkuint9)((char)((unkuint9)Var37 >> 0x40) != '\0');
    Var39 = (unkuint9)(ulonglong)Var39 + (unkuint9)SUB168(auVar61 * auVar87,8) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    auVar62._8_8_ = 0;
    auVar62._0_8_ = uVar106;
    auVar88._8_8_ = 0;
    auVar88._0_8_ = DAT_140e570c8;
    Var38 = (unkuint9)(ulonglong)Var39 + (unkuint9)SUB168(auVar62 * auVar88,0) +
            (unkuint9)((char)((unkuint9)Var37 >> 0x40) != '\0');
    uVar110 = (ulonglong)Var38;
    Var39 = (unkuint9)(ulonglong)Var41 + (unkuint9)SUB168(auVar62 * auVar88,8) +
            (unkuint9)((char)((unkuint9)Var39 >> 0x40) != '\0');
    auVar63._8_8_ = 0;
    auVar63._0_8_ = uVar106;
    auVar89._8_8_ = 0;
    auVar89._0_8_ = DAT_140e570d0;
    Var38 = (unkuint9)(ulonglong)Var39 + (unkuint9)SUB168(auVar63 * auVar89,0) +
            (unkuint9)((char)((unkuint9)Var38 >> 0x40) != '\0');
    Var40 = (unkuint9)(ulonglong)Var40 + (unkuint9)SUB168(auVar63 * auVar89,8) +
            (unkuint9)((char)((unkuint9)Var39 >> 0x40) != '\0');
    auVar64._8_8_ = 0;
    auVar64._0_8_ = uVar106;
    auVar90._8_8_ = 0;
    auVar90._0_8_ = DAT_140e570d8;
    Var39 = (unkuint9)(ulonglong)Var40 + (unkuint9)SUB168(auVar64 * auVar90,0) +
            (unkuint9)((char)((unkuint9)Var38 >> 0x40) != '\0');
    Var40 = (unkuint9)(ulonglong)Var37 + (unkuint9)SUB168(auVar64 * auVar90,8) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    Var37 = (unkuint9)(ulonglong)Var40 + (unkuint9)0 +
            (unkuint9)((char)((unkuint9)Var39 >> 0x40) != '\0');
    uVar111 = uVar110 * L_ordK;
    auVar65._8_8_ = 0;
    auVar65._0_8_ = uVar111;
    auVar91._8_8_ = 0;
    auVar91._0_8_ = L_ord;
    Var40 = (unkuint9)uVar110 + (unkuint9)SUB168(auVar65 * auVar91,0) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    Var38 = (unkuint9)(ulonglong)Var38 + (unkuint9)SUB168(auVar65 * auVar91,8) +
            (unkuint9)((char)((unkuint9)Var37 >> 0x40) != '\0');
    auVar66._8_8_ = 0;
    auVar66._0_8_ = uVar111;
    auVar92._8_8_ = 0;
    auVar92._0_8_ = DAT_140e570c8;
    Var41 = (unkuint9)(ulonglong)Var38 + (unkuint9)SUB168(auVar66 * auVar92,0) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    uVar106 = (ulonglong)Var41;
    Var38 = (unkuint9)(ulonglong)Var39 + (unkuint9)SUB168(auVar66 * auVar92,8) +
            (unkuint9)((char)((unkuint9)Var38 >> 0x40) != '\0');
    auVar67._8_8_ = 0;
    auVar67._0_8_ = uVar111;
    auVar93._8_8_ = 0;
    auVar93._0_8_ = DAT_140e570d0;
    Var39 = (unkuint9)(ulonglong)Var38 + (unkuint9)SUB168(auVar67 * auVar93,0) +
            (unkuint9)((char)((unkuint9)Var41 >> 0x40) != '\0');
    uVar104 = (ulonglong)Var39;
    Var37 = (unkuint9)(ulonglong)Var37 + (unkuint9)SUB168(auVar67 * auVar93,8) +
            (unkuint9)((char)((unkuint9)Var38 >> 0x40) != '\0');
    auVar68._8_8_ = 0;
    auVar68._0_8_ = uVar111;
    auVar94._8_8_ = 0;
    auVar94._0_8_ = DAT_140e570d8;
    Var38 = (unkuint9)(ulonglong)Var37 + (unkuint9)SUB168(auVar68 * auVar94,0) +
            (unkuint9)((char)((unkuint9)Var39 >> 0x40) != '\0');
    uVar109 = (ulonglong)Var38;
    uVar112 = (longlong)Var40 + SUB168(auVar68 * auVar94,8) +
              (ulonglong)((char)((unkuint9)Var37 >> 0x40) != '\0') +
              (ulonglong)((char)((unkuint9)Var38 >> 0x40) != '\0');
    uVar110 = uVar107 + uVar106;
    uVar106 = (ulonglong)CARRY8(uVar107,uVar106);
    uVar111 = uVar104 + uVar108;
    uVar107 = uVar111 + uVar106;
    uVar111 = (ulonglong)(CARRY8(uVar104,uVar108) || CARRY8(uVar111,uVar106));
    uVar108 = uVar109 + uVar114;
    uVar106 = uVar108 + uVar111;
    uVar108 = (ulonglong)(CARRY8(uVar109,uVar114) || CARRY8(uVar108,uVar111));
    uVar114 = uVar112 + uVar103;
    uVar111 = uVar114 + uVar108;
    uVar108 = (ulonglong)(CARRY8(uVar112,uVar103) || CARRY8(uVar114,uVar108));
    uVar114 = (ulonglong)
              (uVar107 < DAT_140e570c8 || uVar107 - DAT_140e570c8 < (ulonglong)(uVar110 < L_ord));
    uVar103 = (ulonglong)(uVar106 < DAT_140e570d0 || uVar106 - DAT_140e570d0 < uVar114);
    uVar104 = (ulonglong)(uVar111 < DAT_140e570d8 || uVar111 - DAT_140e570d8 < uVar103);
    if (uVar104 <= uVar108) {
      uVar111 = (uVar111 - DAT_140e570d8) - uVar103;
      uVar106 = (uVar106 - DAT_140e570d0) - uVar114;
      uVar107 = (uVar107 - DAT_140e570c8) - (ulonglong)(uVar110 < L_ord);
      uVar110 = uVar110 - L_ord;
    }
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  *param_1 = uVar110;
  param_1[1] = uVar107;
  param_1[2] = uVar106;
  param_1[3] = uVar111;
  return uVar108 - uVar104;
}

// L$SEH_begin_ecp_nistz256_ord_sqr_mont @ 140e578ed

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong L_SEH_begin_ecp_nistz256_ord_sqr_mont
                    (ulonglong *param_1,ulonglong *param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  unkint9 Var37;
  unkint9 Var38;
  unkint9 Var39;
  unkint9 Var40;
  unkint9 Var41;
  unkint9 Var42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  ulonglong uVar103;
  ulonglong uVar104;
  longlong lVar105;
  ulonglong uVar106;
  ulonglong uVar107;
  ulonglong uVar108;
  ulonglong uVar109;
  ulonglong uVar110;
  ulonglong uVar111;
  ulonglong uVar112;
  ulonglong uVar113;
  ulonglong uVar114;
  ulonglong uVar115;
  ulonglong uVar116;
  ulonglong uVar117;
  ulonglong uVar118;
  
  if ((_DAT_15540a9f8 & 0x80100) != 0x80100) {
    uVar110 = *param_2;
    uVar107 = param_2[1];
    uVar106 = param_2[2];
    uVar111 = param_2[3];
    do {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar107;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar110;
      auVar99._8_8_ = 0;
      auVar99._0_8_ = SUB168(auVar1 * auVar19,8);
      uVar103 = SUB168(auVar1 * auVar19,0);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar106;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar110;
      auVar99 = auVar2 * auVar20 + auVar99;
      uVar112 = auVar99._0_8_;
      auVar100._8_8_ = 0;
      auVar100._0_8_ = auVar99._8_8_;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar111;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar110;
      auVar100 = auVar3 * auVar21 + auVar100;
      auVar101._8_8_ = 0;
      auVar101._0_8_ = auVar100._0_8_;
      auVar102._8_8_ = 0;
      auVar102._0_8_ = auVar100._8_8_;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar111;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar106;
      uVar104 = SUB168(auVar4 * auVar22,0);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar106;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar107;
      auVar101 = auVar5 * auVar23 + auVar101;
      uVar113 = auVar101._0_8_;
      uVar108 = auVar101._8_8_;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar111;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar107;
      auVar102 = auVar6 * auVar24 + auVar102;
      uVar114 = auVar102._0_8_;
      uVar109 = auVar102._8_8_;
      uVar115 = uVar114 + uVar108;
      uVar108 = (ulonglong)CARRY8(uVar114,uVar108);
      uVar114 = uVar104 + uVar109;
      uVar116 = uVar114 + uVar108;
      uVar118 = SUB168(auVar4 * auVar22,8) +
                (ulonglong)(CARRY8(uVar104,uVar109) || CARRY8(uVar114,uVar108));
      uVar109 = uVar112 * 2 + (ulonglong)CARRY8(uVar103,uVar103);
      uVar108 = (ulonglong)
                (CARRY8(uVar112,uVar112) || CARRY8(uVar112 * 2,(ulonglong)CARRY8(uVar103,uVar103)));
      uVar112 = uVar113 * 2 + uVar108;
      uVar108 = (ulonglong)(CARRY8(uVar113,uVar113) || CARRY8(uVar113 * 2,uVar108));
      uVar113 = uVar115 * 2 + uVar108;
      uVar108 = (ulonglong)(CARRY8(uVar115,uVar115) || CARRY8(uVar115 * 2,uVar108));
      uVar117 = uVar116 * 2 + uVar108;
      uVar108 = (ulonglong)(CARRY8(uVar116,uVar116) || CARRY8(uVar116 * 2,uVar108));
      uVar116 = uVar118 * 2 + uVar108;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar110;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar110;
      uVar110 = SUB168(auVar7 * auVar25,8);
      lVar105 = SUB168(auVar7 * auVar25,0);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar107;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar107;
      uVar114 = SUB168(auVar8 * auVar26,0);
      uVar104 = uVar103 * 2 + uVar110;
      uVar110 = (ulonglong)CARRY8(uVar103 * 2,uVar110);
      uVar107 = uVar109 + uVar114;
      uVar103 = uVar107 + uVar110;
      uVar110 = SUB168(auVar8 * auVar26,8) +
                (ulonglong)(CARRY8(uVar109,uVar114) || CARRY8(uVar107,uVar110));
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar106;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar106;
      uVar106 = SUB168(auVar9 * auVar27,0);
      uVar109 = uVar112 + uVar110;
      uVar110 = (ulonglong)CARRY8(uVar112,uVar110);
      uVar107 = uVar113 + uVar106;
      uVar115 = uVar107 + uVar110;
      uVar110 = SUB168(auVar9 * auVar27,8) +
                (ulonglong)(CARRY8(uVar113,uVar106) || CARRY8(uVar107,uVar110));
      uVar114 = lVar105 * L_ordK;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar111;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar111;
      uVar106 = SUB168(auVar10 * auVar28,0);
      uVar113 = uVar117 + uVar110;
      uVar110 = (ulonglong)CARRY8(uVar117,uVar110);
      uVar107 = uVar116 + uVar106;
      uVar117 = uVar107 + uVar110;
      uVar116 = (ulonglong)(CARRY8(uVar118,uVar118) || CARRY8(uVar118 * 2,uVar108)) +
                SUB168(auVar10 * auVar28,8) +
                (ulonglong)(CARRY8(uVar116,uVar106) || CARRY8(uVar107,uVar110));
      auVar11._8_8_ = 0;
      auVar11._0_8_ = L_ord;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar114;
      auVar43 = auVar11 * auVar29 + auVar95;
      auVar95._8_8_ = auVar43._0_8_;
      auVar95._0_8_ = lVar105;
      uVar107 = auVar43._8_8_;
      uVar108 = uVar103 - uVar114;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = DAT_140e570c8;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = uVar114;
      uVar110 = SUB168(auVar12 * auVar30,0);
      uVar111 = uVar104 + uVar107;
      uVar106 = SUB168(auVar12 * auVar30,8) + (ulonglong)CARRY8(uVar104,uVar107);
      lVar105 = uVar111 + uVar110;
      uVar110 = (ulonglong)CARRY8(uVar111,uVar110);
      uVar107 = uVar108 + uVar106;
      uVar104 = uVar107 + uVar110;
      uVar110 = (uVar114 - (uVar103 < uVar114)) +
                (ulonglong)(CARRY8(uVar108,uVar106) || CARRY8(uVar107,uVar110));
      uVar103 = lVar105 * L_ordK;
      uVar107 = uVar109 - (uVar114 << 0x20);
      uVar112 = uVar107 + uVar110;
      uVar111 = ((uVar114 - (uVar114 >> 0x20)) - (ulonglong)(uVar109 < uVar114 << 0x20)) +
                (ulonglong)CARRY8(uVar107,uVar110);
      auVar13._8_8_ = 0;
      auVar13._0_8_ = L_ord;
      auVar31._8_8_ = 0;
      auVar31._0_8_ = uVar103;
      auVar43 = auVar13 * auVar31 + auVar96;
      auVar96._8_8_ = auVar43._0_8_;
      auVar96._0_8_ = lVar105;
      uVar107 = auVar43._8_8_;
      uVar114 = uVar112 - uVar103;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = DAT_140e570c8;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = uVar103;
      uVar110 = SUB168(auVar14 * auVar32,0);
      uVar108 = uVar104 + uVar107;
      uVar106 = SUB168(auVar14 * auVar32,8) + (ulonglong)CARRY8(uVar104,uVar107);
      lVar105 = uVar108 + uVar110;
      uVar110 = (ulonglong)CARRY8(uVar108,uVar110);
      uVar107 = uVar114 + uVar106;
      uVar104 = uVar107 + uVar110;
      uVar110 = (uVar103 - (uVar112 < uVar103)) +
                (ulonglong)(CARRY8(uVar114,uVar106) || CARRY8(uVar107,uVar110));
      uVar109 = lVar105 * L_ordK;
      uVar107 = uVar111 - (uVar103 << 0x20);
      uVar108 = uVar107 + uVar110;
      uVar103 = ((uVar103 - (uVar103 >> 0x20)) - (ulonglong)(uVar111 < uVar103 << 0x20)) +
                (ulonglong)CARRY8(uVar107,uVar110);
      auVar15._8_8_ = 0;
      auVar15._0_8_ = L_ord;
      auVar33._8_8_ = 0;
      auVar33._0_8_ = uVar109;
      auVar43 = auVar15 * auVar33 + auVar97;
      auVar97._8_8_ = auVar43._0_8_;
      auVar97._0_8_ = lVar105;
      uVar107 = auVar43._8_8_;
      uVar111 = uVar108 - uVar109;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = DAT_140e570c8;
      auVar34._8_8_ = 0;
      auVar34._0_8_ = uVar109;
      uVar110 = SUB168(auVar16 * auVar34,0);
      uVar114 = uVar104 + uVar107;
      uVar106 = SUB168(auVar16 * auVar34,8) + (ulonglong)CARRY8(uVar104,uVar107);
      lVar105 = uVar114 + uVar110;
      uVar110 = (ulonglong)CARRY8(uVar114,uVar110);
      uVar107 = uVar111 + uVar106;
      uVar114 = uVar107 + uVar110;
      uVar110 = (uVar109 - (uVar108 < uVar109)) +
                (ulonglong)(CARRY8(uVar111,uVar106) || CARRY8(uVar107,uVar110));
      uVar112 = lVar105 * L_ordK;
      uVar107 = uVar103 - (uVar109 << 0x20);
      uVar104 = uVar107 + uVar110;
      uVar109 = ((uVar109 - (uVar109 >> 0x20)) - (ulonglong)(uVar103 < uVar109 << 0x20)) +
                (ulonglong)CARRY8(uVar107,uVar110);
      auVar17._8_8_ = 0;
      auVar17._0_8_ = L_ord;
      auVar35._8_8_ = 0;
      auVar35._0_8_ = uVar112;
      auVar43 = auVar17 * auVar35 + auVar98;
      auVar98._8_8_ = auVar43._0_8_;
      auVar98._0_8_ = lVar105;
      uVar107 = auVar43._8_8_;
      uVar103 = uVar104 - uVar112;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = DAT_140e570c8;
      auVar36._8_8_ = 0;
      auVar36._0_8_ = uVar112;
      uVar110 = SUB168(auVar18 * auVar36,0);
      uVar111 = uVar114 + uVar107;
      uVar106 = SUB168(auVar18 * auVar36,8) + (ulonglong)CARRY8(uVar114,uVar107);
      uVar108 = uVar111 + uVar110;
      uVar110 = (ulonglong)CARRY8(uVar111,uVar110);
      uVar107 = uVar103 + uVar106;
      uVar114 = uVar107 + uVar110;
      uVar110 = (uVar112 - (uVar104 < uVar112)) +
                (ulonglong)(CARRY8(uVar103,uVar106) || CARRY8(uVar107,uVar110));
      uVar107 = uVar109 - (uVar112 << 0x20);
      uVar103 = uVar107 + uVar110;
      uVar109 = ((uVar112 - (uVar112 >> 0x20)) - (ulonglong)(uVar109 < uVar112 << 0x20)) +
                (ulonglong)CARRY8(uVar107,uVar110);
      uVar110 = uVar108 + uVar115;
      uVar106 = (ulonglong)CARRY8(uVar108,uVar115);
      uVar111 = uVar114 + uVar113;
      uVar107 = uVar111 + uVar106;
      uVar111 = (ulonglong)(CARRY8(uVar114,uVar113) || CARRY8(uVar111,uVar106));
      uVar108 = uVar103 + uVar117;
      uVar106 = uVar108 + uVar111;
      uVar108 = (ulonglong)(CARRY8(uVar103,uVar117) || CARRY8(uVar108,uVar111));
      uVar114 = uVar109 + uVar116;
      uVar111 = uVar114 + uVar108;
      uVar103 = (ulonglong)
                (uVar107 < DAT_140e570c8 || uVar107 - DAT_140e570c8 < (ulonglong)(uVar110 < L_ord));
      uVar104 = (ulonglong)(uVar106 < DAT_140e570d0 || uVar106 - DAT_140e570d0 < uVar103);
      if ((uVar111 < DAT_140e570d8 || uVar111 - DAT_140e570d8 < uVar104) <=
          (CARRY8(uVar109,uVar116) || CARRY8(uVar114,uVar108))) {
        uVar111 = (uVar111 - DAT_140e570d8) - uVar104;
        uVar106 = (uVar106 - DAT_140e570d0) - uVar103;
        uVar107 = (uVar107 - DAT_140e570c8) - (ulonglong)(uVar110 < L_ord);
        uVar110 = uVar110 - L_ord;
      }
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    *param_1 = uVar110;
    param_1[1] = uVar107;
    param_1[2] = uVar106;
    param_1[3] = uVar111;
    return uVar107;
  }
  uVar110 = *param_2;
  uVar107 = param_2[1];
  uVar106 = param_2[2];
  uVar111 = param_2[3];
  do {
    auVar43._8_8_ = 0;
    auVar43._0_8_ = uVar110;
    auVar69._8_8_ = 0;
    auVar69._0_8_ = uVar107;
    uVar104 = SUB168(auVar43 * auVar69,0);
    uVar114 = SUB168(auVar43 * auVar69,8);
    auVar44._8_8_ = 0;
    auVar44._0_8_ = uVar110;
    auVar70._8_8_ = 0;
    auVar70._0_8_ = uVar106;
    uVar108 = SUB168(auVar44 * auVar70,0);
    uVar113 = SUB168(auVar44 * auVar70,8);
    auVar45._8_8_ = 0;
    auVar45._0_8_ = uVar110;
    auVar71._8_8_ = 0;
    auVar71._0_8_ = uVar111;
    uVar109 = SUB168(auVar45 * auVar71,0);
    uVar112 = uVar114 + uVar108;
    uVar108 = (ulonglong)CARRY8(uVar114,uVar108);
    uVar114 = uVar113 + uVar109;
    auVar46._8_8_ = 0;
    auVar46._0_8_ = uVar107;
    auVar72._8_8_ = 0;
    auVar72._0_8_ = uVar106;
    Var37 = (unkuint9)(uVar114 + uVar108) + (unkuint9)SUB168(auVar46 * auVar72,0) + (unkuint9)0;
    uVar103 = (ulonglong)Var37;
    Var39 = (unkuint9)
            (SUB168(auVar45 * auVar71,8) +
            (ulonglong)(CARRY8(uVar113,uVar109) || CARRY8(uVar114,uVar108))) +
            (unkuint9)SUB168(auVar46 * auVar72,8) + (unkuint9)0;
    auVar47._8_8_ = 0;
    auVar47._0_8_ = uVar107;
    auVar73._8_8_ = 0;
    auVar73._0_8_ = uVar111;
    Var37 = (unkuint9)(ulonglong)Var39 + (unkuint9)SUB168(auVar47 * auVar73,0) +
            (unkuint9)((char)((unkuint9)Var37 >> 0x40) != '\0');
    uVar108 = (ulonglong)Var37;
    auVar48._8_8_ = 0;
    auVar48._0_8_ = uVar106;
    auVar74._8_8_ = 0;
    auVar74._0_8_ = uVar111;
    Var38 = (unkuint9)uVar104 + (unkuint9)uVar104 + (unkuint9)0;
    Var39 = (unkuint9)
            (SUB168(auVar47 * auVar73,8) + (ulonglong)((char)((unkuint9)Var39 >> 0x40) != '\0') +
            (ulonglong)((char)((unkuint9)Var37 >> 0x40) != '\0')) +
            (unkuint9)SUB168(auVar48 * auVar74,0) + (unkuint9)0;
    uVar114 = (ulonglong)Var39;
    Var37 = (unkuint9)uVar112 + (unkuint9)uVar112 +
            (unkuint9)((char)((unkuint9)Var38 >> 0x40) != '\0');
    Var40 = (unkuint9)SUB168(auVar48 * auVar74,8) + (unkuint9)0 +
            (unkuint9)((char)((unkuint9)Var39 >> 0x40) != '\0');
    uVar104 = (ulonglong)Var40;
    auVar49._8_8_ = 0;
    auVar49._0_8_ = uVar110;
    auVar75._8_8_ = 0;
    auVar75._0_8_ = uVar110;
    uVar110 = SUB168(auVar49 * auVar75,0);
    Var39 = (unkuint9)uVar103 + (unkuint9)uVar103 +
            (unkuint9)((char)((unkuint9)Var37 >> 0x40) != '\0');
    Var41 = (unkuint9)(ulonglong)Var38 + (unkuint9)SUB168(auVar49 * auVar75,8) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    Var38 = (unkuint9)uVar108 + (unkuint9)uVar108 +
            (unkuint9)((char)((unkuint9)Var39 >> 0x40) != '\0');
    auVar50._8_8_ = 0;
    auVar50._0_8_ = uVar107;
    auVar76._8_8_ = 0;
    auVar76._0_8_ = uVar107;
    Var40 = (unkuint9)uVar114 + (unkuint9)uVar114 +
            (unkuint9)((char)((unkuint9)Var38 >> 0x40) != '\0');
    Var42 = (unkuint9)(ulonglong)Var37 + (unkuint9)SUB168(auVar50 * auVar76,0) +
            (unkuint9)((char)((unkuint9)Var41 >> 0x40) != '\0');
    Var37 = (unkuint9)uVar104 + (unkuint9)uVar104 +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    auVar51._8_8_ = 0;
    auVar51._0_8_ = uVar106;
    auVar77._8_8_ = 0;
    auVar77._0_8_ = uVar106;
    Var39 = (unkuint9)(ulonglong)Var39 + (unkuint9)SUB168(auVar50 * auVar76,8) +
            (unkuint9)((char)((unkuint9)Var42 >> 0x40) != '\0');
    Var38 = (unkuint9)(ulonglong)Var38 + (unkuint9)SUB168(auVar51 * auVar77,0) +
            (unkuint9)((char)((unkuint9)Var39 >> 0x40) != '\0');
    uVar107 = (ulonglong)Var38;
    Var38 = (unkuint9)(ulonglong)Var40 + (unkuint9)SUB168(auVar51 * auVar77,8) +
            (unkuint9)((char)((unkuint9)Var38 >> 0x40) != '\0');
    uVar108 = (ulonglong)Var38;
    auVar52._8_8_ = 0;
    auVar52._0_8_ = uVar111;
    auVar78._8_8_ = 0;
    auVar78._0_8_ = uVar111;
    Var38 = (unkuint9)(ulonglong)Var37 + (unkuint9)SUB168(auVar52 * auVar78,0) +
            (unkuint9)((char)((unkuint9)Var38 >> 0x40) != '\0');
    uVar114 = (ulonglong)Var38;
    uVar103 = (ulonglong)((char)((unkuint9)Var37 >> 0x40) != '\0') + SUB168(auVar52 * auVar78,8) +
              (ulonglong)((char)((unkuint9)Var38 >> 0x40) != '\0');
    uVar106 = uVar110 * L_ordK;
    auVar53._8_8_ = 0;
    auVar53._0_8_ = uVar106;
    auVar79._8_8_ = 0;
    auVar79._0_8_ = L_ord;
    Var37 = (unkuint9)uVar110 + (unkuint9)SUB168(auVar53 * auVar79,0) + (unkuint9)0;
    Var40 = (unkuint9)(ulonglong)Var41 + (unkuint9)SUB168(auVar53 * auVar79,8) + (unkuint9)0;
    auVar54._8_8_ = 0;
    auVar54._0_8_ = uVar106;
    auVar80._8_8_ = 0;
    auVar80._0_8_ = DAT_140e570c8;
    Var38 = (unkuint9)(ulonglong)Var40 + (unkuint9)SUB168(auVar54 * auVar80,0) +
            (unkuint9)((char)((unkuint9)Var37 >> 0x40) != '\0');
    uVar110 = (ulonglong)Var38;
    Var40 = (unkuint9)(ulonglong)Var42 + (unkuint9)SUB168(auVar54 * auVar80,8) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    auVar55._8_8_ = 0;
    auVar55._0_8_ = uVar106;
    auVar81._8_8_ = 0;
    auVar81._0_8_ = DAT_140e570d0;
    Var38 = (unkuint9)(ulonglong)Var40 + (unkuint9)SUB168(auVar55 * auVar81,0) +
            (unkuint9)((char)((unkuint9)Var38 >> 0x40) != '\0');
    Var40 = (unkuint9)(ulonglong)Var39 + (unkuint9)SUB168(auVar55 * auVar81,8) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    auVar56._8_8_ = 0;
    auVar56._0_8_ = uVar106;
    auVar82._8_8_ = 0;
    auVar82._0_8_ = DAT_140e570d8;
    Var39 = (unkuint9)(ulonglong)Var40 + (unkuint9)SUB168(auVar56 * auVar82,0) +
            (unkuint9)((char)((unkuint9)Var38 >> 0x40) != '\0');
    Var40 = (unkuint9)(ulonglong)Var37 + (unkuint9)SUB168(auVar56 * auVar82,8) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    Var37 = (unkuint9)(ulonglong)Var40 + (unkuint9)0 +
            (unkuint9)((char)((unkuint9)Var39 >> 0x40) != '\0');
    uVar106 = uVar110 * L_ordK;
    auVar57._8_8_ = 0;
    auVar57._0_8_ = uVar106;
    auVar83._8_8_ = 0;
    auVar83._0_8_ = L_ord;
    Var40 = (unkuint9)uVar110 + (unkuint9)SUB168(auVar57 * auVar83,0) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    Var38 = (unkuint9)(ulonglong)Var38 + (unkuint9)SUB168(auVar57 * auVar83,8) +
            (unkuint9)((char)((unkuint9)Var37 >> 0x40) != '\0');
    auVar58._8_8_ = 0;
    auVar58._0_8_ = uVar106;
    auVar84._8_8_ = 0;
    auVar84._0_8_ = DAT_140e570c8;
    Var41 = (unkuint9)(ulonglong)Var38 + (unkuint9)SUB168(auVar58 * auVar84,0) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    uVar110 = (ulonglong)Var41;
    Var38 = (unkuint9)(ulonglong)Var39 + (unkuint9)SUB168(auVar58 * auVar84,8) +
            (unkuint9)((char)((unkuint9)Var38 >> 0x40) != '\0');
    auVar59._8_8_ = 0;
    auVar59._0_8_ = uVar106;
    auVar85._8_8_ = 0;
    auVar85._0_8_ = DAT_140e570d0;
    Var39 = (unkuint9)(ulonglong)Var38 + (unkuint9)SUB168(auVar59 * auVar85,0) +
            (unkuint9)((char)((unkuint9)Var41 >> 0x40) != '\0');
    Var37 = (unkuint9)(ulonglong)Var37 + (unkuint9)SUB168(auVar59 * auVar85,8) +
            (unkuint9)((char)((unkuint9)Var38 >> 0x40) != '\0');
    auVar60._8_8_ = 0;
    auVar60._0_8_ = uVar106;
    auVar86._8_8_ = 0;
    auVar86._0_8_ = DAT_140e570d8;
    Var41 = (unkuint9)(ulonglong)Var37 + (unkuint9)SUB168(auVar60 * auVar86,0) +
            (unkuint9)((char)((unkuint9)Var39 >> 0x40) != '\0');
    Var37 = (unkuint9)(ulonglong)Var40 + (unkuint9)SUB168(auVar60 * auVar86,8) +
            (unkuint9)((char)((unkuint9)Var37 >> 0x40) != '\0');
    Var40 = (unkuint9)(ulonglong)Var37 + (unkuint9)0 +
            (unkuint9)((char)((unkuint9)Var41 >> 0x40) != '\0');
    uVar106 = uVar110 * L_ordK;
    auVar61._8_8_ = 0;
    auVar61._0_8_ = uVar106;
    auVar87._8_8_ = 0;
    auVar87._0_8_ = L_ord;
    Var37 = (unkuint9)uVar110 + (unkuint9)SUB168(auVar61 * auVar87,0) +
            (unkuint9)((char)((unkuint9)Var37 >> 0x40) != '\0');
    Var39 = (unkuint9)(ulonglong)Var39 + (unkuint9)SUB168(auVar61 * auVar87,8) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    auVar62._8_8_ = 0;
    auVar62._0_8_ = uVar106;
    auVar88._8_8_ = 0;
    auVar88._0_8_ = DAT_140e570c8;
    Var38 = (unkuint9)(ulonglong)Var39 + (unkuint9)SUB168(auVar62 * auVar88,0) +
            (unkuint9)((char)((unkuint9)Var37 >> 0x40) != '\0');
    uVar110 = (ulonglong)Var38;
    Var39 = (unkuint9)(ulonglong)Var41 + (unkuint9)SUB168(auVar62 * auVar88,8) +
            (unkuint9)((char)((unkuint9)Var39 >> 0x40) != '\0');
    auVar63._8_8_ = 0;
    auVar63._0_8_ = uVar106;
    auVar89._8_8_ = 0;
    auVar89._0_8_ = DAT_140e570d0;
    Var38 = (unkuint9)(ulonglong)Var39 + (unkuint9)SUB168(auVar63 * auVar89,0) +
            (unkuint9)((char)((unkuint9)Var38 >> 0x40) != '\0');
    Var40 = (unkuint9)(ulonglong)Var40 + (unkuint9)SUB168(auVar63 * auVar89,8) +
            (unkuint9)((char)((unkuint9)Var39 >> 0x40) != '\0');
    auVar64._8_8_ = 0;
    auVar64._0_8_ = uVar106;
    auVar90._8_8_ = 0;
    auVar90._0_8_ = DAT_140e570d8;
    Var39 = (unkuint9)(ulonglong)Var40 + (unkuint9)SUB168(auVar64 * auVar90,0) +
            (unkuint9)((char)((unkuint9)Var38 >> 0x40) != '\0');
    Var40 = (unkuint9)(ulonglong)Var37 + (unkuint9)SUB168(auVar64 * auVar90,8) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    Var37 = (unkuint9)(ulonglong)Var40 + (unkuint9)0 +
            (unkuint9)((char)((unkuint9)Var39 >> 0x40) != '\0');
    uVar111 = uVar110 * L_ordK;
    auVar65._8_8_ = 0;
    auVar65._0_8_ = uVar111;
    auVar91._8_8_ = 0;
    auVar91._0_8_ = L_ord;
    Var40 = (unkuint9)uVar110 + (unkuint9)SUB168(auVar65 * auVar91,0) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    Var38 = (unkuint9)(ulonglong)Var38 + (unkuint9)SUB168(auVar65 * auVar91,8) +
            (unkuint9)((char)((unkuint9)Var37 >> 0x40) != '\0');
    auVar66._8_8_ = 0;
    auVar66._0_8_ = uVar111;
    auVar92._8_8_ = 0;
    auVar92._0_8_ = DAT_140e570c8;
    Var41 = (unkuint9)(ulonglong)Var38 + (unkuint9)SUB168(auVar66 * auVar92,0) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    uVar106 = (ulonglong)Var41;
    Var38 = (unkuint9)(ulonglong)Var39 + (unkuint9)SUB168(auVar66 * auVar92,8) +
            (unkuint9)((char)((unkuint9)Var38 >> 0x40) != '\0');
    auVar67._8_8_ = 0;
    auVar67._0_8_ = uVar111;
    auVar93._8_8_ = 0;
    auVar93._0_8_ = DAT_140e570d0;
    Var39 = (unkuint9)(ulonglong)Var38 + (unkuint9)SUB168(auVar67 * auVar93,0) +
            (unkuint9)((char)((unkuint9)Var41 >> 0x40) != '\0');
    uVar104 = (ulonglong)Var39;
    Var37 = (unkuint9)(ulonglong)Var37 + (unkuint9)SUB168(auVar67 * auVar93,8) +
            (unkuint9)((char)((unkuint9)Var38 >> 0x40) != '\0');
    auVar68._8_8_ = 0;
    auVar68._0_8_ = uVar111;
    auVar94._8_8_ = 0;
    auVar94._0_8_ = DAT_140e570d8;
    Var38 = (unkuint9)(ulonglong)Var37 + (unkuint9)SUB168(auVar68 * auVar94,0) +
            (unkuint9)((char)((unkuint9)Var39 >> 0x40) != '\0');
    uVar109 = (ulonglong)Var38;
    uVar112 = (longlong)Var40 + SUB168(auVar68 * auVar94,8) +
              (ulonglong)((char)((unkuint9)Var37 >> 0x40) != '\0') +
              (ulonglong)((char)((unkuint9)Var38 >> 0x40) != '\0');
    uVar110 = uVar107 + uVar106;
    uVar106 = (ulonglong)CARRY8(uVar107,uVar106);
    uVar111 = uVar104 + uVar108;
    uVar107 = uVar111 + uVar106;
    uVar111 = (ulonglong)(CARRY8(uVar104,uVar108) || CARRY8(uVar111,uVar106));
    uVar108 = uVar109 + uVar114;
    uVar106 = uVar108 + uVar111;
    uVar108 = (ulonglong)(CARRY8(uVar109,uVar114) || CARRY8(uVar108,uVar111));
    uVar114 = uVar112 + uVar103;
    uVar111 = uVar114 + uVar108;
    uVar108 = (ulonglong)(CARRY8(uVar112,uVar103) || CARRY8(uVar114,uVar108));
    uVar114 = (ulonglong)
              (uVar107 < DAT_140e570c8 || uVar107 - DAT_140e570c8 < (ulonglong)(uVar110 < L_ord));
    uVar103 = (ulonglong)(uVar106 < DAT_140e570d0 || uVar106 - DAT_140e570d0 < uVar114);
    uVar104 = (ulonglong)(uVar111 < DAT_140e570d8 || uVar111 - DAT_140e570d8 < uVar103);
    if (uVar104 <= uVar108) {
      uVar111 = (uVar111 - DAT_140e570d8) - uVar103;
      uVar106 = (uVar106 - DAT_140e570d0) - uVar114;
      uVar107 = (uVar107 - DAT_140e570c8) - (ulonglong)(uVar110 < L_ord);
      uVar110 = uVar110 - L_ord;
    }
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  *param_1 = uVar110;
  param_1[1] = uVar107;
  param_1[2] = uVar106;
  param_1[3] = uVar111;
  return uVar108 - uVar104;
}

// ecp_nistz256_ord_mul_montx @ 140e57c00

undefined8 ecp_nistz256_ord_mul_montx(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  unkint9 Var6;
  ulonglong uVar7;
  unkint9 Var8;
  unkint9 Var9;
  unkint9 Var10;
  unkint9 Var11;
  unkint9 Var12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  ulonglong uVar79;
  ulonglong uVar80;
  ulonglong uVar81;
  ulonglong uVar82;
  ulonglong uVar83;
  ulonglong uVar84;
  
  uVar1 = *param_3;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar1;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = *param_2;
  uVar7 = SUB168(auVar13 * auVar46,0);
  uVar81 = SUB168(auVar13 * auVar46,8);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar1;
  auVar47._8_8_ = 0;
  auVar47._0_8_ = param_2[1];
  uVar4 = SUB168(auVar14 * auVar47,0);
  uVar83 = SUB168(auVar14 * auVar47,8);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar1;
  auVar48._8_8_ = 0;
  auVar48._0_8_ = param_2[2];
  uVar2 = SUB168(auVar15 * auVar48,0);
  uVar84 = SUB168(auVar15 * auVar48,8);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar1;
  auVar49._8_8_ = 0;
  auVar49._0_8_ = param_2[3];
  uVar5 = SUB168(auVar16 * auVar49,0);
  uVar79 = uVar7 * L_ordK;
  uVar1 = (ulonglong)CARRY8(uVar81,uVar4);
  uVar3 = uVar83 + uVar2;
  uVar2 = (ulonglong)(CARRY8(uVar83,uVar2) || CARRY8(uVar3,uVar1));
  uVar83 = uVar84 + uVar5;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar79;
  auVar50._8_8_ = 0;
  auVar50._0_8_ = L_ord;
  Var6 = (unkuint9)uVar7 + (unkuint9)SUB168(auVar17 * auVar50,0) + (unkuint9)0;
  uVar7 = (ulonglong)Var6;
  Var8 = (unkuint9)(uVar81 + uVar4) + (unkuint9)SUB168(auVar17 * auVar50,8) + (unkuint9)0;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar79;
  auVar51._8_8_ = 0;
  auVar51._0_8_ = DAT_140e570c8;
  Var6 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar18 * auVar51,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  Var9 = (unkuint9)(uVar3 + uVar1) + (unkuint9)SUB168(auVar18 * auVar51,8) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar79;
  auVar52._8_8_ = 0;
  auVar52._0_8_ = DAT_140e570d0;
  Var8 = (unkuint9)(ulonglong)Var9 + (unkuint9)SUB168(auVar19 * auVar52,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  Var10 = (unkuint9)(uVar83 + uVar2) + (unkuint9)SUB168(auVar19 * auVar52,8) +
          (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar79;
  auVar53._8_8_ = 0;
  auVar53._0_8_ = DAT_140e570d8;
  uVar1 = param_3[1];
  Var9 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar20 * auVar53,0) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  Var11 = (unkuint9)
          (SUB168(auVar16 * auVar49,8) + (ulonglong)(CARRY8(uVar84,uVar5) || CARRY8(uVar83,uVar2)))
          + (unkuint9)SUB168(auVar20 * auVar53,8) +
          (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
  Var10 = (unkuint9)(ulonglong)Var11 + (unkuint9)uVar7 +
          (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
  uVar83 = uVar7 + ((char)((unkuint9)Var11 >> 0x40) != '\0');
  uVar2 = (ulonglong)((char)((unkuint9)Var10 >> 0x40) != '\0');
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar1;
  auVar54._8_8_ = 0;
  auVar54._0_8_ = *param_2;
  Var6 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar21 * auVar54,0) +
         (unkuint9)CARRY8(uVar83,uVar2);
  uVar3 = (ulonglong)Var6;
  Var8 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar21 * auVar54,8) +
         (unkuint9)SCARRY8(uVar83,uVar2);
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar1;
  auVar55._8_8_ = 0;
  auVar55._0_8_ = param_2[1];
  Var6 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar22 * auVar55,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  Var9 = (unkuint9)(ulonglong)Var9 + (unkuint9)SUB168(auVar22 * auVar55,8) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar1;
  auVar56._8_8_ = 0;
  auVar56._0_8_ = param_2[2];
  Var8 = (unkuint9)(ulonglong)Var9 + (unkuint9)SUB168(auVar23 * auVar56,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  Var10 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar23 * auVar56,8) +
          (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar1;
  auVar57._8_8_ = 0;
  auVar57._0_8_ = param_2[3];
  uVar1 = uVar3 * L_ordK;
  Var9 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar24 * auVar57,0) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  Var11 = (unkuint9)(uVar83 + uVar2) + (unkuint9)SUB168(auVar24 * auVar57,8) +
          (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
  Var10 = (unkuint9)(ulonglong)Var11 + (unkuint9)uVar7 +
          (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
  uVar83 = uVar7 * 2 + (ulonglong)((char)((unkuint9)Var11 >> 0x40) != '\0');
  uVar2 = (ulonglong)((char)((unkuint9)Var10 >> 0x40) != '\0');
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar1;
  auVar58._8_8_ = 0;
  auVar58._0_8_ = L_ord;
  Var11 = (unkuint9)uVar3 + (unkuint9)SUB168(auVar25 * auVar58,0) + (unkuint9)CARRY8(uVar83,uVar2);
  uVar3 = (ulonglong)Var11;
  Var12 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar25 * auVar58,8) +
          (unkuint9)SCARRY8(uVar83,uVar2);
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar1;
  auVar59._8_8_ = 0;
  auVar59._0_8_ = DAT_140e570c8;
  Var6 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar26 * auVar59,0) +
         (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
  Var11 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar26 * auVar59,8) +
          (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar1;
  auVar60._8_8_ = 0;
  auVar60._0_8_ = DAT_140e570d0;
  Var8 = (unkuint9)(ulonglong)Var11 + (unkuint9)SUB168(auVar27 * auVar60,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  Var11 = (unkuint9)(ulonglong)Var9 + (unkuint9)SUB168(auVar27 * auVar60,8) +
          (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar1;
  auVar61._8_8_ = 0;
  auVar61._0_8_ = DAT_140e570d8;
  uVar1 = param_3[2];
  Var9 = (unkuint9)(ulonglong)Var11 + (unkuint9)SUB168(auVar28 * auVar61,0) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  Var11 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar28 * auVar61,8) +
          (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
  Var10 = (unkuint9)(ulonglong)Var11 + (unkuint9)uVar3 +
          (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
  uVar7 = uVar83 + uVar2 + uVar3 + (ulonglong)((char)((unkuint9)Var11 >> 0x40) != '\0');
  uVar2 = (ulonglong)((char)((unkuint9)Var10 >> 0x40) != '\0');
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar1;
  auVar62._8_8_ = 0;
  auVar62._0_8_ = *param_2;
  Var6 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar29 * auVar62,0) +
         (unkuint9)CARRY8(uVar7,uVar2);
  uVar83 = (ulonglong)Var6;
  Var8 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar29 * auVar62,8) +
         (unkuint9)SCARRY8(uVar7,uVar2);
  auVar30._8_8_ = 0;
  auVar30._0_8_ = uVar1;
  auVar63._8_8_ = 0;
  auVar63._0_8_ = param_2[1];
  Var6 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar30 * auVar63,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  Var9 = (unkuint9)(ulonglong)Var9 + (unkuint9)SUB168(auVar30 * auVar63,8) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar1;
  auVar64._8_8_ = 0;
  auVar64._0_8_ = param_2[2];
  Var8 = (unkuint9)(ulonglong)Var9 + (unkuint9)SUB168(auVar31 * auVar64,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  Var10 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar31 * auVar64,8) +
          (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar1;
  auVar65._8_8_ = 0;
  auVar65._0_8_ = param_2[3];
  uVar1 = uVar83 * L_ordK;
  Var9 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar32 * auVar65,0) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  Var11 = (unkuint9)(uVar7 + uVar2) + (unkuint9)SUB168(auVar32 * auVar65,8) +
          (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
  Var10 = (unkuint9)(ulonglong)Var11 + (unkuint9)uVar3 +
          (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
  uVar7 = uVar3 * 2 + (ulonglong)((char)((unkuint9)Var11 >> 0x40) != '\0');
  uVar2 = (ulonglong)((char)((unkuint9)Var10 >> 0x40) != '\0');
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar1;
  auVar66._8_8_ = 0;
  auVar66._0_8_ = L_ord;
  Var11 = (unkuint9)uVar83 + (unkuint9)SUB168(auVar33 * auVar66,0) + (unkuint9)CARRY8(uVar7,uVar2);
  uVar3 = (ulonglong)Var11;
  Var12 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar33 * auVar66,8) +
          (unkuint9)SCARRY8(uVar7,uVar2);
  auVar34._8_8_ = 0;
  auVar34._0_8_ = uVar1;
  auVar67._8_8_ = 0;
  auVar67._0_8_ = DAT_140e570c8;
  Var6 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar34 * auVar67,0) +
         (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
  Var11 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar34 * auVar67,8) +
          (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
  auVar35._8_8_ = 0;
  auVar35._0_8_ = uVar1;
  auVar68._8_8_ = 0;
  auVar68._0_8_ = DAT_140e570d0;
  Var8 = (unkuint9)(ulonglong)Var11 + (unkuint9)SUB168(auVar35 * auVar68,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  Var11 = (unkuint9)(ulonglong)Var9 + (unkuint9)SUB168(auVar35 * auVar68,8) +
          (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
  auVar36._8_8_ = 0;
  auVar36._0_8_ = uVar1;
  auVar69._8_8_ = 0;
  auVar69._0_8_ = DAT_140e570d8;
  uVar1 = param_3[3];
  Var9 = (unkuint9)(ulonglong)Var11 + (unkuint9)SUB168(auVar36 * auVar69,0) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  Var11 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar36 * auVar69,8) +
          (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
  Var10 = (unkuint9)(ulonglong)Var11 + (unkuint9)uVar3 +
          (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
  uVar7 = uVar7 + uVar2 + uVar3 + (ulonglong)((char)((unkuint9)Var11 >> 0x40) != '\0');
  uVar2 = (ulonglong)((char)((unkuint9)Var10 >> 0x40) != '\0');
  auVar37._8_8_ = 0;
  auVar37._0_8_ = uVar1;
  auVar70._8_8_ = 0;
  auVar70._0_8_ = *param_2;
  Var6 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar37 * auVar70,0) +
         (unkuint9)CARRY8(uVar7,uVar2);
  uVar83 = (ulonglong)Var6;
  Var8 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar37 * auVar70,8) +
         (unkuint9)SCARRY8(uVar7,uVar2);
  auVar38._8_8_ = 0;
  auVar38._0_8_ = uVar1;
  auVar71._8_8_ = 0;
  auVar71._0_8_ = param_2[1];
  Var6 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar38 * auVar71,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  Var9 = (unkuint9)(ulonglong)Var9 + (unkuint9)SUB168(auVar38 * auVar71,8) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  auVar39._8_8_ = 0;
  auVar39._0_8_ = uVar1;
  auVar72._8_8_ = 0;
  auVar72._0_8_ = param_2[2];
  Var8 = (unkuint9)(ulonglong)Var9 + (unkuint9)SUB168(auVar39 * auVar72,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  Var10 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar39 * auVar72,8) +
          (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
  auVar40._8_8_ = 0;
  auVar40._0_8_ = uVar1;
  auVar73._8_8_ = 0;
  auVar73._0_8_ = param_2[3];
  auVar41._8_8_ = 0;
  auVar41._0_8_ = uVar83;
  auVar74._8_8_ = 0;
  auVar74._0_8_ = L_ordK;
  uVar5 = SUB168(auVar41 * auVar74,0);
  Var9 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar40 * auVar73,0) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  Var11 = (unkuint9)(uVar7 + uVar2) + (unkuint9)SUB168(auVar40 * auVar73,8) +
          (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
  Var10 = (unkuint9)(ulonglong)Var11 + (unkuint9)uVar3 +
          (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
  uVar81 = uVar3 * 2 + (ulonglong)((char)((unkuint9)Var11 >> 0x40) != '\0');
  uVar1 = (ulonglong)((char)((unkuint9)Var10 >> 0x40) != '\0');
  auVar42._8_8_ = 0;
  auVar42._0_8_ = uVar5;
  auVar75._8_8_ = 0;
  auVar75._0_8_ = L_ord;
  Var11 = (unkuint9)uVar83 + (unkuint9)SUB168(auVar42 * auVar75,0) + (unkuint9)CARRY8(uVar81,uVar1);
  uVar83 = (ulonglong)Var11;
  Var12 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar42 * auVar75,8) +
          (unkuint9)SCARRY8(uVar81,uVar1);
  auVar43._8_8_ = 0;
  auVar43._0_8_ = uVar5;
  auVar76._8_8_ = 0;
  auVar76._0_8_ = DAT_140e570c8;
  Var6 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar43 * auVar76,0) +
         (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
  uVar7 = (ulonglong)Var6;
  Var8 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar43 * auVar76,8) +
         (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
  auVar44._8_8_ = 0;
  auVar44._0_8_ = uVar5;
  auVar77._8_8_ = 0;
  auVar77._0_8_ = DAT_140e570d0;
  Var6 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar44 * auVar77,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  uVar4 = (ulonglong)Var6;
  Var8 = (unkuint9)(ulonglong)Var9 + (unkuint9)SUB168(auVar44 * auVar77,8) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  auVar45._8_8_ = 0;
  auVar45._0_8_ = uVar5;
  auVar78._8_8_ = 0;
  auVar78._0_8_ = DAT_140e570d8;
  Var6 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar45 * auVar78,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  uVar5 = (ulonglong)Var6;
  Var8 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar45 * auVar78,8) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  Var6 = (unkuint9)(ulonglong)Var8 + (unkuint9)uVar83 +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  uVar79 = (ulonglong)Var6;
  uVar2 = (ulonglong)(uVar4 < DAT_140e570c8 || uVar4 - DAT_140e570c8 < (ulonglong)(uVar7 < L_ord));
  uVar3 = (ulonglong)(uVar5 < DAT_140e570d0 || uVar5 - DAT_140e570d0 < uVar2);
  uVar82 = (uVar79 - DAT_140e570d8) - uVar3;
  uVar2 = (uVar5 - DAT_140e570d0) - uVar2;
  uVar84 = (uVar4 - DAT_140e570c8) - (ulonglong)(uVar7 < L_ord);
  uVar80 = uVar7 - L_ord;
  if (uVar81 + uVar1 + uVar83 + (ulonglong)((char)((unkuint9)Var8 >> 0x40) != '\0') +
      (ulonglong)((char)((unkuint9)Var6 >> 0x40) != '\0') <
      (ulonglong)(uVar79 < DAT_140e570d8 || uVar79 - DAT_140e570d8 < uVar3)) {
    uVar82 = uVar79;
    uVar2 = uVar5;
    uVar84 = uVar4;
    uVar80 = uVar7;
  }
  *param_1 = uVar80;
  param_1[1] = uVar84;
  param_1[2] = uVar2;
  param_1[3] = uVar82;
  return SUB168(auVar41 * auVar74,8);
}

// L$SEH_begin_ecp_nistz256_ord_mul_montx @ 140e57c0d

undefined8
L_SEH_begin_ecp_nistz256_ord_mul_montx(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  unkint9 Var6;
  ulonglong uVar7;
  unkint9 Var8;
  unkint9 Var9;
  unkint9 Var10;
  unkint9 Var11;
  unkint9 Var12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  ulonglong uVar79;
  ulonglong uVar80;
  ulonglong uVar81;
  ulonglong uVar82;
  ulonglong uVar83;
  ulonglong uVar84;
  
  uVar1 = *param_3;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar1;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = *param_2;
  uVar7 = SUB168(auVar13 * auVar46,0);
  uVar81 = SUB168(auVar13 * auVar46,8);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar1;
  auVar47._8_8_ = 0;
  auVar47._0_8_ = param_2[1];
  uVar4 = SUB168(auVar14 * auVar47,0);
  uVar83 = SUB168(auVar14 * auVar47,8);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar1;
  auVar48._8_8_ = 0;
  auVar48._0_8_ = param_2[2];
  uVar2 = SUB168(auVar15 * auVar48,0);
  uVar84 = SUB168(auVar15 * auVar48,8);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar1;
  auVar49._8_8_ = 0;
  auVar49._0_8_ = param_2[3];
  uVar5 = SUB168(auVar16 * auVar49,0);
  uVar79 = uVar7 * L_ordK;
  uVar1 = (ulonglong)CARRY8(uVar81,uVar4);
  uVar3 = uVar83 + uVar2;
  uVar2 = (ulonglong)(CARRY8(uVar83,uVar2) || CARRY8(uVar3,uVar1));
  uVar83 = uVar84 + uVar5;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar79;
  auVar50._8_8_ = 0;
  auVar50._0_8_ = L_ord;
  Var6 = (unkuint9)uVar7 + (unkuint9)SUB168(auVar17 * auVar50,0) + (unkuint9)0;
  uVar7 = (ulonglong)Var6;
  Var8 = (unkuint9)(uVar81 + uVar4) + (unkuint9)SUB168(auVar17 * auVar50,8) + (unkuint9)0;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar79;
  auVar51._8_8_ = 0;
  auVar51._0_8_ = DAT_140e570c8;
  Var6 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar18 * auVar51,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  Var9 = (unkuint9)(uVar3 + uVar1) + (unkuint9)SUB168(auVar18 * auVar51,8) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar79;
  auVar52._8_8_ = 0;
  auVar52._0_8_ = DAT_140e570d0;
  Var8 = (unkuint9)(ulonglong)Var9 + (unkuint9)SUB168(auVar19 * auVar52,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  Var10 = (unkuint9)(uVar83 + uVar2) + (unkuint9)SUB168(auVar19 * auVar52,8) +
          (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar79;
  auVar53._8_8_ = 0;
  auVar53._0_8_ = DAT_140e570d8;
  uVar1 = param_3[1];
  Var9 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar20 * auVar53,0) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  Var11 = (unkuint9)
          (SUB168(auVar16 * auVar49,8) + (ulonglong)(CARRY8(uVar84,uVar5) || CARRY8(uVar83,uVar2)))
          + (unkuint9)SUB168(auVar20 * auVar53,8) +
          (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
  Var10 = (unkuint9)(ulonglong)Var11 + (unkuint9)uVar7 +
          (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
  uVar83 = uVar7 + ((char)((unkuint9)Var11 >> 0x40) != '\0');
  uVar2 = (ulonglong)((char)((unkuint9)Var10 >> 0x40) != '\0');
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar1;
  auVar54._8_8_ = 0;
  auVar54._0_8_ = *param_2;
  Var6 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar21 * auVar54,0) +
         (unkuint9)CARRY8(uVar83,uVar2);
  uVar3 = (ulonglong)Var6;
  Var8 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar21 * auVar54,8) +
         (unkuint9)SCARRY8(uVar83,uVar2);
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar1;
  auVar55._8_8_ = 0;
  auVar55._0_8_ = param_2[1];
  Var6 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar22 * auVar55,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  Var9 = (unkuint9)(ulonglong)Var9 + (unkuint9)SUB168(auVar22 * auVar55,8) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar1;
  auVar56._8_8_ = 0;
  auVar56._0_8_ = param_2[2];
  Var8 = (unkuint9)(ulonglong)Var9 + (unkuint9)SUB168(auVar23 * auVar56,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  Var10 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar23 * auVar56,8) +
          (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar1;
  auVar57._8_8_ = 0;
  auVar57._0_8_ = param_2[3];
  uVar1 = uVar3 * L_ordK;
  Var9 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar24 * auVar57,0) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  Var11 = (unkuint9)(uVar83 + uVar2) + (unkuint9)SUB168(auVar24 * auVar57,8) +
          (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
  Var10 = (unkuint9)(ulonglong)Var11 + (unkuint9)uVar7 +
          (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
  uVar83 = uVar7 * 2 + (ulonglong)((char)((unkuint9)Var11 >> 0x40) != '\0');
  uVar2 = (ulonglong)((char)((unkuint9)Var10 >> 0x40) != '\0');
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar1;
  auVar58._8_8_ = 0;
  auVar58._0_8_ = L_ord;
  Var11 = (unkuint9)uVar3 + (unkuint9)SUB168(auVar25 * auVar58,0) + (unkuint9)CARRY8(uVar83,uVar2);
  uVar3 = (ulonglong)Var11;
  Var12 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar25 * auVar58,8) +
          (unkuint9)SCARRY8(uVar83,uVar2);
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar1;
  auVar59._8_8_ = 0;
  auVar59._0_8_ = DAT_140e570c8;
  Var6 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar26 * auVar59,0) +
         (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
  Var11 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar26 * auVar59,8) +
          (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar1;
  auVar60._8_8_ = 0;
  auVar60._0_8_ = DAT_140e570d0;
  Var8 = (unkuint9)(ulonglong)Var11 + (unkuint9)SUB168(auVar27 * auVar60,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  Var11 = (unkuint9)(ulonglong)Var9 + (unkuint9)SUB168(auVar27 * auVar60,8) +
          (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar1;
  auVar61._8_8_ = 0;
  auVar61._0_8_ = DAT_140e570d8;
  uVar1 = param_3[2];
  Var9 = (unkuint9)(ulonglong)Var11 + (unkuint9)SUB168(auVar28 * auVar61,0) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  Var11 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar28 * auVar61,8) +
          (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
  Var10 = (unkuint9)(ulonglong)Var11 + (unkuint9)uVar3 +
          (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
  uVar7 = uVar83 + uVar2 + uVar3 + (ulonglong)((char)((unkuint9)Var11 >> 0x40) != '\0');
  uVar2 = (ulonglong)((char)((unkuint9)Var10 >> 0x40) != '\0');
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar1;
  auVar62._8_8_ = 0;
  auVar62._0_8_ = *param_2;
  Var6 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar29 * auVar62,0) +
         (unkuint9)CARRY8(uVar7,uVar2);
  uVar83 = (ulonglong)Var6;
  Var8 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar29 * auVar62,8) +
         (unkuint9)SCARRY8(uVar7,uVar2);
  auVar30._8_8_ = 0;
  auVar30._0_8_ = uVar1;
  auVar63._8_8_ = 0;
  auVar63._0_8_ = param_2[1];
  Var6 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar30 * auVar63,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  Var9 = (unkuint9)(ulonglong)Var9 + (unkuint9)SUB168(auVar30 * auVar63,8) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar1;
  auVar64._8_8_ = 0;
  auVar64._0_8_ = param_2[2];
  Var8 = (unkuint9)(ulonglong)Var9 + (unkuint9)SUB168(auVar31 * auVar64,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  Var10 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar31 * auVar64,8) +
          (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar1;
  auVar65._8_8_ = 0;
  auVar65._0_8_ = param_2[3];
  uVar1 = uVar83 * L_ordK;
  Var9 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar32 * auVar65,0) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  Var11 = (unkuint9)(uVar7 + uVar2) + (unkuint9)SUB168(auVar32 * auVar65,8) +
          (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
  Var10 = (unkuint9)(ulonglong)Var11 + (unkuint9)uVar3 +
          (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
  uVar7 = uVar3 * 2 + (ulonglong)((char)((unkuint9)Var11 >> 0x40) != '\0');
  uVar2 = (ulonglong)((char)((unkuint9)Var10 >> 0x40) != '\0');
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar1;
  auVar66._8_8_ = 0;
  auVar66._0_8_ = L_ord;
  Var11 = (unkuint9)uVar83 + (unkuint9)SUB168(auVar33 * auVar66,0) + (unkuint9)CARRY8(uVar7,uVar2);
  uVar3 = (ulonglong)Var11;
  Var12 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar33 * auVar66,8) +
          (unkuint9)SCARRY8(uVar7,uVar2);
  auVar34._8_8_ = 0;
  auVar34._0_8_ = uVar1;
  auVar67._8_8_ = 0;
  auVar67._0_8_ = DAT_140e570c8;
  Var6 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar34 * auVar67,0) +
         (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
  Var11 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar34 * auVar67,8) +
          (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
  auVar35._8_8_ = 0;
  auVar35._0_8_ = uVar1;
  auVar68._8_8_ = 0;
  auVar68._0_8_ = DAT_140e570d0;
  Var8 = (unkuint9)(ulonglong)Var11 + (unkuint9)SUB168(auVar35 * auVar68,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  Var11 = (unkuint9)(ulonglong)Var9 + (unkuint9)SUB168(auVar35 * auVar68,8) +
          (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
  auVar36._8_8_ = 0;
  auVar36._0_8_ = uVar1;
  auVar69._8_8_ = 0;
  auVar69._0_8_ = DAT_140e570d8;
  uVar1 = param_3[3];
  Var9 = (unkuint9)(ulonglong)Var11 + (unkuint9)SUB168(auVar36 * auVar69,0) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  Var11 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar36 * auVar69,8) +
          (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
  Var10 = (unkuint9)(ulonglong)Var11 + (unkuint9)uVar3 +
          (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
  uVar7 = uVar7 + uVar2 + uVar3 + (ulonglong)((char)((unkuint9)Var11 >> 0x40) != '\0');
  uVar2 = (ulonglong)((char)((unkuint9)Var10 >> 0x40) != '\0');
  auVar37._8_8_ = 0;
  auVar37._0_8_ = uVar1;
  auVar70._8_8_ = 0;
  auVar70._0_8_ = *param_2;
  Var6 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar37 * auVar70,0) +
         (unkuint9)CARRY8(uVar7,uVar2);
  uVar83 = (ulonglong)Var6;
  Var8 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar37 * auVar70,8) +
         (unkuint9)SCARRY8(uVar7,uVar2);
  auVar38._8_8_ = 0;
  auVar38._0_8_ = uVar1;
  auVar71._8_8_ = 0;
  auVar71._0_8_ = param_2[1];
  Var6 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar38 * auVar71,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  Var9 = (unkuint9)(ulonglong)Var9 + (unkuint9)SUB168(auVar38 * auVar71,8) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  auVar39._8_8_ = 0;
  auVar39._0_8_ = uVar1;
  auVar72._8_8_ = 0;
  auVar72._0_8_ = param_2[2];
  Var8 = (unkuint9)(ulonglong)Var9 + (unkuint9)SUB168(auVar39 * auVar72,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  Var10 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar39 * auVar72,8) +
          (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
  auVar40._8_8_ = 0;
  auVar40._0_8_ = uVar1;
  auVar73._8_8_ = 0;
  auVar73._0_8_ = param_2[3];
  auVar41._8_8_ = 0;
  auVar41._0_8_ = uVar83;
  auVar74._8_8_ = 0;
  auVar74._0_8_ = L_ordK;
  uVar5 = SUB168(auVar41 * auVar74,0);
  Var9 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar40 * auVar73,0) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  Var11 = (unkuint9)(uVar7 + uVar2) + (unkuint9)SUB168(auVar40 * auVar73,8) +
          (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
  Var10 = (unkuint9)(ulonglong)Var11 + (unkuint9)uVar3 +
          (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
  uVar81 = uVar3 * 2 + (ulonglong)((char)((unkuint9)Var11 >> 0x40) != '\0');
  uVar1 = (ulonglong)((char)((unkuint9)Var10 >> 0x40) != '\0');
  auVar42._8_8_ = 0;
  auVar42._0_8_ = uVar5;
  auVar75._8_8_ = 0;
  auVar75._0_8_ = L_ord;
  Var11 = (unkuint9)uVar83 + (unkuint9)SUB168(auVar42 * auVar75,0) + (unkuint9)CARRY8(uVar81,uVar1);
  uVar83 = (ulonglong)Var11;
  Var12 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar42 * auVar75,8) +
          (unkuint9)SCARRY8(uVar81,uVar1);
  auVar43._8_8_ = 0;
  auVar43._0_8_ = uVar5;
  auVar76._8_8_ = 0;
  auVar76._0_8_ = DAT_140e570c8;
  Var6 = (unkuint9)(ulonglong)Var12 + (unkuint9)SUB168(auVar43 * auVar76,0) +
         (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
  uVar7 = (ulonglong)Var6;
  Var8 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar43 * auVar76,8) +
         (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
  auVar44._8_8_ = 0;
  auVar44._0_8_ = uVar5;
  auVar77._8_8_ = 0;
  auVar77._0_8_ = DAT_140e570d0;
  Var6 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar44 * auVar77,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  uVar4 = (ulonglong)Var6;
  Var8 = (unkuint9)(ulonglong)Var9 + (unkuint9)SUB168(auVar44 * auVar77,8) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  auVar45._8_8_ = 0;
  auVar45._0_8_ = uVar5;
  auVar78._8_8_ = 0;
  auVar78._0_8_ = DAT_140e570d8;
  Var6 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar45 * auVar78,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  uVar5 = (ulonglong)Var6;
  Var8 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar45 * auVar78,8) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  Var6 = (unkuint9)(ulonglong)Var8 + (unkuint9)uVar83 +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  uVar79 = (ulonglong)Var6;
  uVar2 = (ulonglong)(uVar4 < DAT_140e570c8 || uVar4 - DAT_140e570c8 < (ulonglong)(uVar7 < L_ord));
  uVar3 = (ulonglong)(uVar5 < DAT_140e570d0 || uVar5 - DAT_140e570d0 < uVar2);
  uVar82 = (uVar79 - DAT_140e570d8) - uVar3;
  uVar2 = (uVar5 - DAT_140e570d0) - uVar2;
  uVar84 = (uVar4 - DAT_140e570c8) - (ulonglong)(uVar7 < L_ord);
  uVar80 = uVar7 - L_ord;
  if (uVar81 + uVar1 + uVar83 + (ulonglong)((char)((unkuint9)Var8 >> 0x40) != '\0') +
      (ulonglong)((char)((unkuint9)Var6 >> 0x40) != '\0') <
      (ulonglong)(uVar79 < DAT_140e570d8 || uVar79 - DAT_140e570d8 < uVar3)) {
    uVar82 = uVar79;
    uVar2 = uVar5;
    uVar84 = uVar4;
    uVar80 = uVar7;
  }
  *param_1 = uVar80;
  param_1[1] = uVar84;
  param_1[2] = uVar2;
  param_1[3] = uVar82;
  return SUB168(auVar41 * auVar74,8);
}

// ecp_nistz256_ord_sqr_montx @ 140e57fe0

longlong ecp_nistz256_ord_sqr_montx(ulonglong *param_1,ulonglong *param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  unkint9 Var3;
  unkint9 Var4;
  ulonglong uVar5;
  ulonglong uVar6;
  unkint9 Var7;
  unkint9 Var8;
  unkint9 Var9;
  unkint9 Var10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  ulonglong uVar63;
  ulonglong uVar64;
  ulonglong uVar65;
  ulonglong uVar66;
  ulonglong uVar67;
  ulonglong uVar68;
  ulonglong uVar69;
  
  uVar69 = *param_2;
  uVar63 = param_2[1];
  uVar66 = param_2[2];
  uVar68 = param_2[3];
  do {
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar69;
    auVar37._8_8_ = 0;
    auVar37._0_8_ = uVar63;
    uVar2 = SUB168(auVar11 * auVar37,0);
    uVar64 = SUB168(auVar11 * auVar37,8);
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar69;
    auVar38._8_8_ = 0;
    auVar38._0_8_ = uVar66;
    uVar1 = SUB168(auVar12 * auVar38,0);
    uVar67 = SUB168(auVar12 * auVar38,8);
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar69;
    auVar39._8_8_ = 0;
    auVar39._0_8_ = uVar68;
    uVar6 = SUB168(auVar13 * auVar39,0);
    uVar65 = uVar64 + uVar1;
    uVar1 = (ulonglong)CARRY8(uVar64,uVar1);
    uVar64 = uVar67 + uVar6;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar63;
    auVar40._8_8_ = 0;
    auVar40._0_8_ = uVar66;
    Var3 = (unkuint9)(uVar64 + uVar1) + (unkuint9)SUB168(auVar14 * auVar40,0) + (unkuint9)0;
    uVar5 = (ulonglong)Var3;
    Var7 = (unkuint9)
           (SUB168(auVar13 * auVar39,8) + (ulonglong)(CARRY8(uVar67,uVar6) || CARRY8(uVar64,uVar1)))
           + (unkuint9)SUB168(auVar14 * auVar40,8) + (unkuint9)0;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar63;
    auVar41._8_8_ = 0;
    auVar41._0_8_ = uVar68;
    Var3 = (unkuint9)(ulonglong)Var7 + (unkuint9)SUB168(auVar15 * auVar41,0) +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    uVar1 = (ulonglong)Var3;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar66;
    auVar42._8_8_ = 0;
    auVar42._0_8_ = uVar68;
    Var4 = (unkuint9)uVar2 + (unkuint9)uVar2 + (unkuint9)0;
    Var7 = (unkuint9)
           (SUB168(auVar15 * auVar41,8) + (ulonglong)((char)((unkuint9)Var7 >> 0x40) != '\0') +
           (ulonglong)((char)((unkuint9)Var3 >> 0x40) != '\0')) +
           (unkuint9)SUB168(auVar16 * auVar42,0) + (unkuint9)0;
    uVar64 = (ulonglong)Var7;
    Var3 = (unkuint9)uVar65 + (unkuint9)uVar65 + (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    Var8 = (unkuint9)SUB168(auVar16 * auVar42,8) + (unkuint9)0 +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    uVar2 = (ulonglong)Var8;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar69;
    auVar43._8_8_ = 0;
    auVar43._0_8_ = uVar69;
    uVar69 = SUB168(auVar17 * auVar43,0);
    Var7 = (unkuint9)uVar5 + (unkuint9)uVar5 + (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    Var9 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar17 * auVar43,8) +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    Var4 = (unkuint9)uVar1 + (unkuint9)uVar1 + (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar63;
    auVar44._8_8_ = 0;
    auVar44._0_8_ = uVar63;
    Var8 = (unkuint9)uVar64 + (unkuint9)uVar64 + (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    Var10 = (unkuint9)(ulonglong)Var3 + (unkuint9)SUB168(auVar18 * auVar44,0) +
            (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
    Var3 = (unkuint9)uVar2 + (unkuint9)uVar2 + (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar66;
    auVar45._8_8_ = 0;
    auVar45._0_8_ = uVar66;
    Var7 = (unkuint9)(ulonglong)Var7 + (unkuint9)SUB168(auVar18 * auVar44,8) +
           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    Var4 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar19 * auVar45,0) +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    uVar63 = (ulonglong)Var4;
    Var4 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar19 * auVar45,8) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    uVar1 = (ulonglong)Var4;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar68;
    auVar46._8_8_ = 0;
    auVar46._0_8_ = uVar68;
    Var4 = (unkuint9)(ulonglong)Var3 + (unkuint9)SUB168(auVar20 * auVar46,0) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    uVar64 = (ulonglong)Var4;
    uVar5 = (ulonglong)((char)((unkuint9)Var3 >> 0x40) != '\0') + SUB168(auVar20 * auVar46,8) +
            (ulonglong)((char)((unkuint9)Var4 >> 0x40) != '\0');
    uVar66 = uVar69 * L_ordK;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar66;
    auVar47._8_8_ = 0;
    auVar47._0_8_ = L_ord;
    Var3 = (unkuint9)uVar69 + (unkuint9)SUB168(auVar21 * auVar47,0) + (unkuint9)0;
    Var8 = (unkuint9)(ulonglong)Var9 + (unkuint9)SUB168(auVar21 * auVar47,8) + (unkuint9)0;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar66;
    auVar48._8_8_ = 0;
    auVar48._0_8_ = DAT_140e570c8;
    Var4 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar22 * auVar48,0) +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    uVar69 = (ulonglong)Var4;
    Var8 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar22 * auVar48,8) +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar66;
    auVar49._8_8_ = 0;
    auVar49._0_8_ = DAT_140e570d0;
    Var4 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar23 * auVar49,0) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    Var8 = (unkuint9)(ulonglong)Var7 + (unkuint9)SUB168(auVar23 * auVar49,8) +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar66;
    auVar50._8_8_ = 0;
    auVar50._0_8_ = DAT_140e570d8;
    Var7 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar24 * auVar50,0) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    Var8 = (unkuint9)(ulonglong)Var3 + (unkuint9)SUB168(auVar24 * auVar50,8) +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    Var3 = (unkuint9)(ulonglong)Var8 + (unkuint9)0 +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    uVar66 = uVar69 * L_ordK;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar66;
    auVar51._8_8_ = 0;
    auVar51._0_8_ = L_ord;
    Var8 = (unkuint9)uVar69 + (unkuint9)SUB168(auVar25 * auVar51,0) +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    Var4 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar25 * auVar51,8) +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar66;
    auVar52._8_8_ = 0;
    auVar52._0_8_ = DAT_140e570c8;
    Var9 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar26 * auVar52,0) +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    uVar69 = (ulonglong)Var9;
    Var4 = (unkuint9)(ulonglong)Var7 + (unkuint9)SUB168(auVar26 * auVar52,8) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar66;
    auVar53._8_8_ = 0;
    auVar53._0_8_ = DAT_140e570d0;
    Var7 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar27 * auVar53,0) +
           (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
    Var3 = (unkuint9)(ulonglong)Var3 + (unkuint9)SUB168(auVar27 * auVar53,8) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar66;
    auVar54._8_8_ = 0;
    auVar54._0_8_ = DAT_140e570d8;
    Var9 = (unkuint9)(ulonglong)Var3 + (unkuint9)SUB168(auVar28 * auVar54,0) +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    Var3 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar28 * auVar54,8) +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    Var8 = (unkuint9)(ulonglong)Var3 + (unkuint9)0 +
           (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
    uVar66 = uVar69 * L_ordK;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar66;
    auVar55._8_8_ = 0;
    auVar55._0_8_ = L_ord;
    Var3 = (unkuint9)uVar69 + (unkuint9)SUB168(auVar29 * auVar55,0) +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    Var7 = (unkuint9)(ulonglong)Var7 + (unkuint9)SUB168(auVar29 * auVar55,8) +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar66;
    auVar56._8_8_ = 0;
    auVar56._0_8_ = DAT_140e570c8;
    Var4 = (unkuint9)(ulonglong)Var7 + (unkuint9)SUB168(auVar30 * auVar56,0) +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    uVar69 = (ulonglong)Var4;
    Var7 = (unkuint9)(ulonglong)Var9 + (unkuint9)SUB168(auVar30 * auVar56,8) +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar66;
    auVar57._8_8_ = 0;
    auVar57._0_8_ = DAT_140e570d0;
    Var4 = (unkuint9)(ulonglong)Var7 + (unkuint9)SUB168(auVar31 * auVar57,0) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    Var8 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar31 * auVar57,8) +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar66;
    auVar58._8_8_ = 0;
    auVar58._0_8_ = DAT_140e570d8;
    Var7 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar32 * auVar58,0) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    Var8 = (unkuint9)(ulonglong)Var3 + (unkuint9)SUB168(auVar32 * auVar58,8) +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    Var3 = (unkuint9)(ulonglong)Var8 + (unkuint9)0 +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    uVar68 = uVar69 * L_ordK;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar68;
    auVar59._8_8_ = 0;
    auVar59._0_8_ = L_ord;
    Var8 = (unkuint9)uVar69 + (unkuint9)SUB168(auVar33 * auVar59,0) +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    Var4 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar33 * auVar59,8) +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar68;
    auVar60._8_8_ = 0;
    auVar60._0_8_ = DAT_140e570c8;
    Var9 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar34 * auVar60,0) +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    uVar66 = (ulonglong)Var9;
    Var4 = (unkuint9)(ulonglong)Var7 + (unkuint9)SUB168(auVar34 * auVar60,8) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar68;
    auVar61._8_8_ = 0;
    auVar61._0_8_ = DAT_140e570d0;
    Var7 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar35 * auVar61,0) +
           (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
    uVar2 = (ulonglong)Var7;
    Var3 = (unkuint9)(ulonglong)Var3 + (unkuint9)SUB168(auVar35 * auVar61,8) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    auVar36._8_8_ = 0;
    auVar36._0_8_ = uVar68;
    auVar62._8_8_ = 0;
    auVar62._0_8_ = DAT_140e570d8;
    Var4 = (unkuint9)(ulonglong)Var3 + (unkuint9)SUB168(auVar36 * auVar62,0) +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    uVar6 = (ulonglong)Var4;
    uVar65 = (longlong)Var8 + SUB168(auVar36 * auVar62,8) +
             (ulonglong)((char)((unkuint9)Var3 >> 0x40) != '\0') +
             (ulonglong)((char)((unkuint9)Var4 >> 0x40) != '\0');
    uVar69 = uVar63 + uVar66;
    uVar66 = (ulonglong)CARRY8(uVar63,uVar66);
    uVar68 = uVar2 + uVar1;
    uVar63 = uVar68 + uVar66;
    uVar68 = (ulonglong)(CARRY8(uVar2,uVar1) || CARRY8(uVar68,uVar66));
    uVar1 = uVar6 + uVar64;
    uVar66 = uVar1 + uVar68;
    uVar1 = (ulonglong)(CARRY8(uVar6,uVar64) || CARRY8(uVar1,uVar68));
    uVar64 = uVar65 + uVar5;
    uVar68 = uVar64 + uVar1;
    uVar1 = (ulonglong)(CARRY8(uVar65,uVar5) || CARRY8(uVar64,uVar1));
    uVar64 = (ulonglong)
             (uVar63 < DAT_140e570c8 || uVar63 - DAT_140e570c8 < (ulonglong)(uVar69 < L_ord));
    uVar5 = (ulonglong)(uVar66 < DAT_140e570d0 || uVar66 - DAT_140e570d0 < uVar64);
    uVar2 = (ulonglong)(uVar68 < DAT_140e570d8 || uVar68 - DAT_140e570d8 < uVar5);
    if (uVar2 <= uVar1) {
      uVar68 = (uVar68 - DAT_140e570d8) - uVar5;
      uVar66 = (uVar66 - DAT_140e570d0) - uVar64;
      uVar63 = (uVar63 - DAT_140e570c8) - (ulonglong)(uVar69 < L_ord);
      uVar69 = uVar69 - L_ord;
    }
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  *param_1 = uVar69;
  param_1[1] = uVar63;
  param_1[2] = uVar66;
  param_1[3] = uVar68;
  return uVar1 - uVar2;
}

// L$SEH_begin_ecp_nistz256_ord_sqr_montx @ 140e57fed

longlong L_SEH_begin_ecp_nistz256_ord_sqr_montx
                   (ulonglong *param_1,ulonglong *param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  unkint9 Var3;
  unkint9 Var4;
  ulonglong uVar5;
  ulonglong uVar6;
  unkint9 Var7;
  unkint9 Var8;
  unkint9 Var9;
  unkint9 Var10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  ulonglong uVar63;
  ulonglong uVar64;
  ulonglong uVar65;
  ulonglong uVar66;
  ulonglong uVar67;
  ulonglong uVar68;
  ulonglong uVar69;
  
  uVar69 = *param_2;
  uVar63 = param_2[1];
  uVar66 = param_2[2];
  uVar68 = param_2[3];
  do {
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar69;
    auVar37._8_8_ = 0;
    auVar37._0_8_ = uVar63;
    uVar2 = SUB168(auVar11 * auVar37,0);
    uVar64 = SUB168(auVar11 * auVar37,8);
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar69;
    auVar38._8_8_ = 0;
    auVar38._0_8_ = uVar66;
    uVar1 = SUB168(auVar12 * auVar38,0);
    uVar67 = SUB168(auVar12 * auVar38,8);
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar69;
    auVar39._8_8_ = 0;
    auVar39._0_8_ = uVar68;
    uVar6 = SUB168(auVar13 * auVar39,0);
    uVar65 = uVar64 + uVar1;
    uVar1 = (ulonglong)CARRY8(uVar64,uVar1);
    uVar64 = uVar67 + uVar6;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar63;
    auVar40._8_8_ = 0;
    auVar40._0_8_ = uVar66;
    Var3 = (unkuint9)(uVar64 + uVar1) + (unkuint9)SUB168(auVar14 * auVar40,0) + (unkuint9)0;
    uVar5 = (ulonglong)Var3;
    Var7 = (unkuint9)
           (SUB168(auVar13 * auVar39,8) + (ulonglong)(CARRY8(uVar67,uVar6) || CARRY8(uVar64,uVar1)))
           + (unkuint9)SUB168(auVar14 * auVar40,8) + (unkuint9)0;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar63;
    auVar41._8_8_ = 0;
    auVar41._0_8_ = uVar68;
    Var3 = (unkuint9)(ulonglong)Var7 + (unkuint9)SUB168(auVar15 * auVar41,0) +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    uVar1 = (ulonglong)Var3;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar66;
    auVar42._8_8_ = 0;
    auVar42._0_8_ = uVar68;
    Var4 = (unkuint9)uVar2 + (unkuint9)uVar2 + (unkuint9)0;
    Var7 = (unkuint9)
           (SUB168(auVar15 * auVar41,8) + (ulonglong)((char)((unkuint9)Var7 >> 0x40) != '\0') +
           (ulonglong)((char)((unkuint9)Var3 >> 0x40) != '\0')) +
           (unkuint9)SUB168(auVar16 * auVar42,0) + (unkuint9)0;
    uVar64 = (ulonglong)Var7;
    Var3 = (unkuint9)uVar65 + (unkuint9)uVar65 + (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    Var8 = (unkuint9)SUB168(auVar16 * auVar42,8) + (unkuint9)0 +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    uVar2 = (ulonglong)Var8;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar69;
    auVar43._8_8_ = 0;
    auVar43._0_8_ = uVar69;
    uVar69 = SUB168(auVar17 * auVar43,0);
    Var7 = (unkuint9)uVar5 + (unkuint9)uVar5 + (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    Var9 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar17 * auVar43,8) +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    Var4 = (unkuint9)uVar1 + (unkuint9)uVar1 + (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar63;
    auVar44._8_8_ = 0;
    auVar44._0_8_ = uVar63;
    Var8 = (unkuint9)uVar64 + (unkuint9)uVar64 + (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    Var10 = (unkuint9)(ulonglong)Var3 + (unkuint9)SUB168(auVar18 * auVar44,0) +
            (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
    Var3 = (unkuint9)uVar2 + (unkuint9)uVar2 + (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar66;
    auVar45._8_8_ = 0;
    auVar45._0_8_ = uVar66;
    Var7 = (unkuint9)(ulonglong)Var7 + (unkuint9)SUB168(auVar18 * auVar44,8) +
           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    Var4 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar19 * auVar45,0) +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    uVar63 = (ulonglong)Var4;
    Var4 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar19 * auVar45,8) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    uVar1 = (ulonglong)Var4;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar68;
    auVar46._8_8_ = 0;
    auVar46._0_8_ = uVar68;
    Var4 = (unkuint9)(ulonglong)Var3 + (unkuint9)SUB168(auVar20 * auVar46,0) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    uVar64 = (ulonglong)Var4;
    uVar5 = (ulonglong)((char)((unkuint9)Var3 >> 0x40) != '\0') + SUB168(auVar20 * auVar46,8) +
            (ulonglong)((char)((unkuint9)Var4 >> 0x40) != '\0');
    uVar66 = uVar69 * L_ordK;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar66;
    auVar47._8_8_ = 0;
    auVar47._0_8_ = L_ord;
    Var3 = (unkuint9)uVar69 + (unkuint9)SUB168(auVar21 * auVar47,0) + (unkuint9)0;
    Var8 = (unkuint9)(ulonglong)Var9 + (unkuint9)SUB168(auVar21 * auVar47,8) + (unkuint9)0;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar66;
    auVar48._8_8_ = 0;
    auVar48._0_8_ = DAT_140e570c8;
    Var4 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar22 * auVar48,0) +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    uVar69 = (ulonglong)Var4;
    Var8 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar22 * auVar48,8) +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar66;
    auVar49._8_8_ = 0;
    auVar49._0_8_ = DAT_140e570d0;
    Var4 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar23 * auVar49,0) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    Var8 = (unkuint9)(ulonglong)Var7 + (unkuint9)SUB168(auVar23 * auVar49,8) +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar66;
    auVar50._8_8_ = 0;
    auVar50._0_8_ = DAT_140e570d8;
    Var7 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar24 * auVar50,0) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    Var8 = (unkuint9)(ulonglong)Var3 + (unkuint9)SUB168(auVar24 * auVar50,8) +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    Var3 = (unkuint9)(ulonglong)Var8 + (unkuint9)0 +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    uVar66 = uVar69 * L_ordK;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar66;
    auVar51._8_8_ = 0;
    auVar51._0_8_ = L_ord;
    Var8 = (unkuint9)uVar69 + (unkuint9)SUB168(auVar25 * auVar51,0) +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    Var4 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar25 * auVar51,8) +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar66;
    auVar52._8_8_ = 0;
    auVar52._0_8_ = DAT_140e570c8;
    Var9 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar26 * auVar52,0) +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    uVar69 = (ulonglong)Var9;
    Var4 = (unkuint9)(ulonglong)Var7 + (unkuint9)SUB168(auVar26 * auVar52,8) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar66;
    auVar53._8_8_ = 0;
    auVar53._0_8_ = DAT_140e570d0;
    Var7 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar27 * auVar53,0) +
           (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
    Var3 = (unkuint9)(ulonglong)Var3 + (unkuint9)SUB168(auVar27 * auVar53,8) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar66;
    auVar54._8_8_ = 0;
    auVar54._0_8_ = DAT_140e570d8;
    Var9 = (unkuint9)(ulonglong)Var3 + (unkuint9)SUB168(auVar28 * auVar54,0) +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    Var3 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar28 * auVar54,8) +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    Var8 = (unkuint9)(ulonglong)Var3 + (unkuint9)0 +
           (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
    uVar66 = uVar69 * L_ordK;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar66;
    auVar55._8_8_ = 0;
    auVar55._0_8_ = L_ord;
    Var3 = (unkuint9)uVar69 + (unkuint9)SUB168(auVar29 * auVar55,0) +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    Var7 = (unkuint9)(ulonglong)Var7 + (unkuint9)SUB168(auVar29 * auVar55,8) +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar66;
    auVar56._8_8_ = 0;
    auVar56._0_8_ = DAT_140e570c8;
    Var4 = (unkuint9)(ulonglong)Var7 + (unkuint9)SUB168(auVar30 * auVar56,0) +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    uVar69 = (ulonglong)Var4;
    Var7 = (unkuint9)(ulonglong)Var9 + (unkuint9)SUB168(auVar30 * auVar56,8) +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar66;
    auVar57._8_8_ = 0;
    auVar57._0_8_ = DAT_140e570d0;
    Var4 = (unkuint9)(ulonglong)Var7 + (unkuint9)SUB168(auVar31 * auVar57,0) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    Var8 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar31 * auVar57,8) +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar66;
    auVar58._8_8_ = 0;
    auVar58._0_8_ = DAT_140e570d8;
    Var7 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar32 * auVar58,0) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    Var8 = (unkuint9)(ulonglong)Var3 + (unkuint9)SUB168(auVar32 * auVar58,8) +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    Var3 = (unkuint9)(ulonglong)Var8 + (unkuint9)0 +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    uVar68 = uVar69 * L_ordK;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar68;
    auVar59._8_8_ = 0;
    auVar59._0_8_ = L_ord;
    Var8 = (unkuint9)uVar69 + (unkuint9)SUB168(auVar33 * auVar59,0) +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    Var4 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar33 * auVar59,8) +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar68;
    auVar60._8_8_ = 0;
    auVar60._0_8_ = DAT_140e570c8;
    Var9 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar34 * auVar60,0) +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    uVar66 = (ulonglong)Var9;
    Var4 = (unkuint9)(ulonglong)Var7 + (unkuint9)SUB168(auVar34 * auVar60,8) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar68;
    auVar61._8_8_ = 0;
    auVar61._0_8_ = DAT_140e570d0;
    Var7 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar35 * auVar61,0) +
           (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
    uVar2 = (ulonglong)Var7;
    Var3 = (unkuint9)(ulonglong)Var3 + (unkuint9)SUB168(auVar35 * auVar61,8) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    auVar36._8_8_ = 0;
    auVar36._0_8_ = uVar68;
    auVar62._8_8_ = 0;
    auVar62._0_8_ = DAT_140e570d8;
    Var4 = (unkuint9)(ulonglong)Var3 + (unkuint9)SUB168(auVar36 * auVar62,0) +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    uVar6 = (ulonglong)Var4;
    uVar65 = (longlong)Var8 + SUB168(auVar36 * auVar62,8) +
             (ulonglong)((char)((unkuint9)Var3 >> 0x40) != '\0') +
             (ulonglong)((char)((unkuint9)Var4 >> 0x40) != '\0');
    uVar69 = uVar63 + uVar66;
    uVar66 = (ulonglong)CARRY8(uVar63,uVar66);
    uVar68 = uVar2 + uVar1;
    uVar63 = uVar68 + uVar66;
    uVar68 = (ulonglong)(CARRY8(uVar2,uVar1) || CARRY8(uVar68,uVar66));
    uVar1 = uVar6 + uVar64;
    uVar66 = uVar1 + uVar68;
    uVar1 = (ulonglong)(CARRY8(uVar6,uVar64) || CARRY8(uVar1,uVar68));
    uVar64 = uVar65 + uVar5;
    uVar68 = uVar64 + uVar1;
    uVar1 = (ulonglong)(CARRY8(uVar65,uVar5) || CARRY8(uVar64,uVar1));
    uVar64 = (ulonglong)
             (uVar63 < DAT_140e570c8 || uVar63 - DAT_140e570c8 < (ulonglong)(uVar69 < L_ord));
    uVar5 = (ulonglong)(uVar66 < DAT_140e570d0 || uVar66 - DAT_140e570d0 < uVar64);
    uVar2 = (ulonglong)(uVar68 < DAT_140e570d8 || uVar68 - DAT_140e570d8 < uVar5);
    if (uVar2 <= uVar1) {
      uVar68 = (uVar68 - DAT_140e570d8) - uVar5;
      uVar66 = (uVar66 - DAT_140e570d0) - uVar64;
      uVar63 = (uVar63 - DAT_140e570c8) - (ulonglong)(uVar69 < L_ord);
      uVar69 = uVar69 - L_ord;
    }
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  *param_1 = uVar69;
  param_1[1] = uVar63;
  param_1[2] = uVar66;
  param_1[3] = uVar68;
  return uVar1 - uVar2;
}

// ecp_nistz256_to_mont @ 140e58300

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ecp_nistz256_to_mont(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  if ((_DAT_15540a9f8 & 0x80100) == 0x80100) {
    __ecp_nistz256_mul_montx(0x80100,_L_RR,param_3,*param_2);
  }
  else {
    __ecp_nistz256_mul_montq();
  }
  return;
}

// L$SEH_begin_ecp_nistz256_to_mont @ 140e5830d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L_SEH_begin_ecp_nistz256_to_mont(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  if ((_DAT_15540a9f8 & 0x80100) == 0x80100) {
    __ecp_nistz256_mul_montx(0x80100,_L_RR,param_3,*param_2);
  }
  else {
    __ecp_nistz256_mul_montq();
  }
  return;
}

// ecp_nistz256_mul_mont @ 140e58340

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ecp_nistz256_mul_mont(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  if ((_DAT_15540a9f8 & 0x80100) == 0x80100) {
    __ecp_nistz256_mul_montx(0x80100,*param_3,param_3,*param_2);
  }
  else {
    __ecp_nistz256_mul_montq();
  }
  return;
}

// L$SEH_begin_ecp_nistz256_mul_mont @ 140e5834d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L_SEH_begin_ecp_nistz256_mul_mont(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  if ((_DAT_15540a9f8 & 0x80100) == 0x80100) {
    __ecp_nistz256_mul_montx(0x80100,*param_3,param_3,*param_2);
  }
  else {
    __ecp_nistz256_mul_montq();
  }
  return;
}

// __ecp_nistz256_mul_montq @ 140e58400

void __ecp_nistz256_mul_montq(void)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  longlong lVar54;
  ulonglong in_RAX;
  ulonglong uVar55;
  ulonglong uVar56;
  ulonglong uVar57;
  ulonglong uVar58;
  ulonglong uVar59;
  longlong unaff_RBX;
  ulonglong *unaff_RSI;
  longlong *unaff_RDI;
  ulonglong in_R9;
  ulonglong uVar60;
  ulonglong in_R10;
  ulonglong uVar61;
  ulonglong uVar62;
  ulonglong in_R11;
  ulonglong uVar63;
  ulonglong uVar64;
  ulonglong uVar65;
  ulonglong unaff_R12;
  ulonglong uVar66;
  longlong lVar67;
  ulonglong uVar68;
  ulonglong uVar69;
  
  auVar2._8_8_ = 0;
  auVar2._0_8_ = in_RAX;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = in_R9;
  auVar42._8_8_ = 0;
  auVar42._0_8_ = SUB168(auVar2 * auVar22,8);
  uVar55 = SUB168(auVar2 * auVar22,0);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = in_RAX;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = in_R10;
  auVar42 = auVar3 * auVar23 + auVar42;
  uVar60 = auVar42._0_8_;
  auVar43._8_8_ = 0;
  auVar43._0_8_ = auVar42._8_8_;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = in_RAX;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = in_R11;
  auVar43 = auVar4 * auVar24 + auVar43;
  uVar61 = auVar43._0_8_;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = auVar43._8_8_;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = in_RAX;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = unaff_R12;
  auVar44 = auVar5 * auVar25 + auVar44;
  uVar63 = auVar44._0_8_;
  uVar57 = auVar44._8_8_;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar55;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = DAT_140e57018;
  uVar58 = SUB168(auVar6 * auVar26,8);
  uVar56 = SUB168(auVar6 * auVar26,0);
  auVar45._8_8_ = 0;
  auVar45._0_8_ = uVar60 + (uVar55 << 0x20);
  uVar60 = (ulonglong)CARRY8(uVar60,uVar55 << 0x20);
  uVar59 = uVar61 + (uVar55 >> 0x20);
  uVar62 = uVar59 + uVar60;
  uVar59 = (ulonglong)(CARRY8(uVar61,uVar55 >> 0x20) || CARRY8(uVar59,uVar60));
  uVar55 = uVar63 + uVar56;
  uVar61 = uVar55 + uVar59;
  uVar60 = *(ulonglong *)(unaff_RBX + 8);
  uVar59 = (ulonglong)(CARRY8(uVar63,uVar56) || CARRY8(uVar55,uVar59));
  uVar55 = uVar57 + uVar58;
  uVar63 = uVar55 + uVar59;
  uVar59 = (ulonglong)(CARRY8(uVar57,uVar58) || CARRY8(uVar55,uVar59));
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar60;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = *unaff_RSI;
  auVar45 = auVar7 * auVar27 + auVar45;
  uVar58 = auVar45._0_8_;
  uVar55 = auVar45._8_8_;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar60;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = unaff_RSI[1];
  auVar48[8] = CARRY8(uVar62,uVar55);
  auVar48._0_8_ = uVar62 + uVar55;
  auVar48._9_7_ = 0;
  auVar48 = auVar8 * auVar28 + auVar48;
  uVar56 = auVar48._0_8_;
  uVar55 = auVar48._8_8_;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar60;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = unaff_RSI[2];
  auVar49[8] = CARRY8(uVar61,uVar55);
  auVar49._0_8_ = uVar61 + uVar55;
  auVar49._9_7_ = 0;
  auVar49 = auVar9 * auVar29 + auVar49;
  uVar64 = auVar49._0_8_;
  uVar55 = auVar49._8_8_;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar60;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = unaff_RSI[3];
  uVar60 = SUB168(auVar10 * auVar30,0);
  uVar57 = uVar63 + uVar55;
  uVar62 = SUB168(auVar10 * auVar30,8) + (ulonglong)CARRY8(uVar63,uVar55);
  uVar66 = uVar57 + uVar60;
  uVar55 = (ulonglong)CARRY8(uVar57,uVar60);
  uVar57 = uVar59 + uVar62;
  uVar68 = uVar57 + uVar55;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar58;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = DAT_140e57018;
  uVar63 = SUB168(auVar11 * auVar31,8);
  uVar61 = SUB168(auVar11 * auVar31,0);
  auVar46._8_8_ = 0;
  auVar46._0_8_ = uVar56 + (uVar58 << 0x20);
  uVar60 = (ulonglong)CARRY8(uVar56,uVar58 << 0x20);
  uVar56 = uVar64 + (uVar58 >> 0x20);
  uVar65 = uVar56 + uVar60;
  uVar56 = (ulonglong)(CARRY8(uVar64,uVar58 >> 0x20) || CARRY8(uVar56,uVar60));
  uVar58 = uVar66 + uVar61;
  uVar64 = uVar58 + uVar56;
  uVar60 = *(ulonglong *)(unaff_RBX + 0x10);
  uVar56 = (ulonglong)(CARRY8(uVar66,uVar61) || CARRY8(uVar58,uVar56));
  uVar58 = uVar68 + uVar63;
  uVar61 = uVar58 + uVar56;
  uVar63 = (ulonglong)(CARRY8(uVar59,uVar62) || CARRY8(uVar57,uVar55)) +
           (ulonglong)(CARRY8(uVar68,uVar63) || CARRY8(uVar58,uVar56));
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar60;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = *unaff_RSI;
  auVar46 = auVar12 * auVar32 + auVar46;
  uVar57 = auVar46._0_8_;
  uVar59 = auVar46._8_8_;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar60;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = unaff_RSI[1];
  auVar50[8] = CARRY8(uVar65,uVar59);
  auVar50._0_8_ = uVar65 + uVar59;
  auVar50._9_7_ = 0;
  auVar50 = auVar13 * auVar33 + auVar50;
  uVar55 = auVar50._0_8_;
  uVar59 = auVar50._8_8_;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar60;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = unaff_RSI[2];
  auVar51[8] = CARRY8(uVar64,uVar59);
  auVar51._0_8_ = uVar64 + uVar59;
  auVar51._9_7_ = 0;
  auVar51 = auVar14 * auVar34 + auVar51;
  uVar65 = auVar51._0_8_;
  uVar59 = auVar51._8_8_;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar60;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = unaff_RSI[3];
  uVar60 = SUB168(auVar15 * auVar35,0);
  uVar56 = uVar61 + uVar59;
  uVar61 = SUB168(auVar15 * auVar35,8) + (ulonglong)CARRY8(uVar61,uVar59);
  uVar68 = uVar56 + uVar60;
  uVar59 = (ulonglong)CARRY8(uVar56,uVar60);
  uVar56 = uVar63 + uVar61;
  uVar64 = uVar56 + uVar59;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar57;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = DAT_140e57018;
  uVar62 = SUB168(auVar16 * auVar36,8);
  uVar58 = SUB168(auVar16 * auVar36,0);
  auVar47._8_8_ = 0;
  auVar47._0_8_ = uVar55 + (uVar57 << 0x20);
  uVar60 = (ulonglong)CARRY8(uVar55,uVar57 << 0x20);
  uVar55 = uVar65 + (uVar57 >> 0x20);
  uVar66 = uVar55 + uVar60;
  uVar55 = (ulonglong)(CARRY8(uVar65,uVar57 >> 0x20) || CARRY8(uVar55,uVar60));
  uVar57 = uVar68 + uVar58;
  uVar69 = uVar57 + uVar55;
  uVar60 = *(ulonglong *)(unaff_RBX + 0x18);
  uVar55 = (ulonglong)(CARRY8(uVar68,uVar58) || CARRY8(uVar57,uVar55));
  uVar57 = uVar64 + uVar62;
  uVar58 = uVar57 + uVar55;
  uVar65 = (ulonglong)(CARRY8(uVar63,uVar61) || CARRY8(uVar56,uVar59)) +
           (ulonglong)(CARRY8(uVar64,uVar62) || CARRY8(uVar57,uVar55));
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar60;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = *unaff_RSI;
  auVar47 = auVar17 * auVar37 + auVar47;
  uVar61 = auVar47._0_8_;
  uVar59 = auVar47._8_8_;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar60;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = unaff_RSI[1];
  auVar52[8] = CARRY8(uVar66,uVar59);
  auVar52._0_8_ = uVar66 + uVar59;
  auVar52._9_7_ = 0;
  auVar52 = auVar18 * auVar38 + auVar52;
  uVar56 = auVar52._0_8_;
  uVar59 = auVar52._8_8_;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar60;
  auVar39._8_8_ = 0;
  auVar39._0_8_ = unaff_RSI[2];
  auVar53[8] = CARRY8(uVar69,uVar59);
  auVar53._0_8_ = uVar69 + uVar59;
  auVar53._9_7_ = 0;
  auVar53 = auVar19 * auVar39 + auVar53;
  uVar64 = auVar53._0_8_;
  uVar59 = auVar53._8_8_;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar60;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = unaff_RSI[3];
  uVar60 = SUB168(auVar20 * auVar40,0);
  uVar55 = uVar58 + uVar59;
  uVar62 = SUB168(auVar20 * auVar40,8) + (ulonglong)CARRY8(uVar58,uVar59);
  uVar58 = uVar55 + uVar60;
  uVar60 = (ulonglong)CARRY8(uVar55,uVar60);
  uVar55 = uVar65 + uVar62;
  uVar66 = uVar55 + uVar60;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar61;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = DAT_140e57018;
  uVar63 = SUB168(auVar21 * auVar41,8);
  uVar57 = SUB168(auVar21 * auVar41,0);
  lVar67 = uVar56 + (uVar61 << 0x20);
  uVar59 = (ulonglong)CARRY8(uVar56,uVar61 << 0x20);
  uVar56 = uVar64 + (uVar61 >> 0x20);
  uVar69 = uVar56 + uVar59;
  uVar59 = (ulonglong)(CARRY8(uVar64,uVar61 >> 0x20) || CARRY8(uVar56,uVar59));
  uVar56 = uVar58 + uVar57;
  uVar64 = uVar56 + uVar59;
  uVar59 = (ulonglong)(CARRY8(uVar58,uVar57) || CARRY8(uVar56,uVar59));
  uVar56 = uVar66 + uVar63;
  uVar68 = uVar56 + uVar59;
  uVar57 = (ulonglong)(uVar69 < DAT_140e57008 || uVar69 - DAT_140e57008 < (ulonglong)(lVar67 != -1))
  ;
  uVar58 = (ulonglong)(uVar64 < uVar57);
  uVar61 = uVar68 - DAT_140e57018;
  bVar1 = (byte)((CARRY8(uVar65,uVar62) || CARRY8(uVar55,uVar60)) +
                (CARRY8(uVar66,uVar63) || CARRY8(uVar56,uVar59))) <
          (uVar68 < DAT_140e57018 || uVar61 < uVar58);
  uVar60 = (uVar69 - DAT_140e57008) - (ulonglong)(lVar67 != -1);
  lVar54 = lVar67 + 1;
  if (bVar1) {
    uVar60 = uVar69;
    lVar54 = lVar67;
  }
  *unaff_RDI = lVar54;
  uVar59 = uVar64 - uVar57;
  if (bVar1) {
    uVar59 = uVar64;
  }
  unaff_RDI[1] = uVar60;
  uVar60 = uVar61 - uVar58;
  if (bVar1) {
    uVar60 = uVar68;
  }
  unaff_RDI[2] = uVar59;
  unaff_RDI[3] = uVar60;
  return;
}

// ecp_nistz256_sqr_mont @ 140e58640

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ecp_nistz256_sqr_mont(undefined8 param_1,undefined8 *param_2)

{
  if ((_DAT_15540a9f8 & 0x80100) == 0x80100) {
    __ecp_nistz256_sqr_montx(0x80100,*param_2,param_2[3]);
  }
  else {
    __ecp_nistz256_sqr_montq(_DAT_15540a9f8 & 0x80100,param_2,param_2[3]);
  }
  return;
}

// L$SEH_begin_ecp_nistz256_sqr_mont @ 140e5864d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L_SEH_begin_ecp_nistz256_sqr_mont(undefined8 param_1,undefined8 *param_2)

{
  if ((_DAT_15540a9f8 & 0x80100) == 0x80100) {
    __ecp_nistz256_sqr_montx(0x80100,*param_2,param_2[3]);
  }
  else {
    __ecp_nistz256_sqr_montq(_DAT_15540a9f8 & 0x80100,param_2,param_2[3]);
  }
  return;
}

// __ecp_nistz256_sqr_montq @ 140e58700

void __ecp_nistz256_sqr_montq(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  longlong lVar36;
  ulonglong in_RAX;
  ulonglong uVar37;
  ulonglong *unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  longlong lVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  ulonglong unaff_R14;
  ulonglong uVar51;
  ulonglong uVar52;
  ulonglong unaff_R15;
  
  auVar2._8_8_ = 0;
  auVar2._0_8_ = in_RAX;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = unaff_R14;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = SUB168(auVar2 * auVar16,8);
  uVar37 = SUB168(auVar2 * auVar16,0);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = unaff_R15;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = in_RAX;
  auVar30 = auVar3 * auVar17 + auVar30;
  uVar39 = auVar30._0_8_;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = auVar30._8_8_;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_3;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = in_RAX;
  auVar31 = auVar4 * auVar18 + auVar31;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = auVar31._0_8_;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = auVar31._8_8_;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = unaff_R15;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = unaff_R14;
  auVar32 = auVar5 * auVar19 + auVar32;
  uVar42 = auVar32._0_8_;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = auVar32._8_8_;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_3;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = unaff_R14;
  auVar34 = auVar6 * auVar20 + auVar33 + auVar34;
  uVar44 = auVar34._0_8_;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = auVar34._8_8_;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_3;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = unaff_R15;
  auVar35 = auVar7 * auVar21 + auVar35;
  uVar48 = auVar35._0_8_;
  uVar51 = auVar35._8_8_;
  uVar40 = uVar39 * 2 + (ulonglong)CARRY8(uVar37,uVar37);
  uVar39 = (ulonglong)(CARRY8(uVar39,uVar39) || CARRY8(uVar39 * 2,(ulonglong)CARRY8(uVar37,uVar37)))
  ;
  uVar43 = uVar42 * 2 + uVar39;
  uVar39 = (ulonglong)(CARRY8(uVar42,uVar42) || CARRY8(uVar42 * 2,uVar39));
  uVar45 = uVar44 * 2 + uVar39;
  uVar39 = (ulonglong)(CARRY8(uVar44,uVar44) || CARRY8(uVar44 * 2,uVar39));
  uVar49 = uVar48 * 2 + uVar39;
  uVar39 = (ulonglong)(CARRY8(uVar48,uVar48) || CARRY8(uVar48 * 2,uVar39));
  uVar52 = uVar51 * 2 + uVar39;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = *unaff_RSI;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = *unaff_RSI;
  uVar42 = SUB168(auVar8 * auVar22,8);
  uVar44 = SUB168(auVar8 * auVar22,0);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = unaff_RSI[1];
  auVar23._8_8_ = 0;
  auVar23._0_8_ = unaff_RSI[1];
  uVar48 = SUB168(auVar9 * auVar23,0);
  uVar38 = uVar37 * 2 + uVar42;
  uVar37 = (ulonglong)CARRY8(uVar37 * 2,uVar42);
  uVar42 = uVar40 + uVar48;
  uVar41 = uVar42 + uVar37;
  uVar37 = SUB168(auVar9 * auVar23,8) + (ulonglong)(CARRY8(uVar40,uVar48) || CARRY8(uVar42,uVar37));
  auVar10._8_8_ = 0;
  auVar10._0_8_ = unaff_RSI[2];
  auVar24._8_8_ = 0;
  auVar24._0_8_ = unaff_RSI[2];
  uVar48 = SUB168(auVar10 * auVar24,0);
  uVar40 = uVar43 + uVar37;
  uVar37 = (ulonglong)CARRY8(uVar43,uVar37);
  uVar42 = uVar45 + uVar48;
  uVar46 = uVar42 + uVar37;
  uVar37 = SUB168(auVar10 * auVar24,8) + (ulonglong)(CARRY8(uVar45,uVar48) || CARRY8(uVar42,uVar37))
  ;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = unaff_RSI[3];
  auVar25._8_8_ = 0;
  auVar25._0_8_ = unaff_RSI[3];
  uVar48 = SUB168(auVar11 * auVar25,0);
  uVar50 = uVar49 + uVar37;
  uVar37 = (ulonglong)CARRY8(uVar49,uVar37);
  uVar42 = uVar52 + uVar48;
  uVar49 = uVar42 + uVar37;
  uVar51 = (ulonglong)(CARRY8(uVar51,uVar51) || CARRY8(uVar51 * 2,uVar39)) +
           SUB168(auVar11 * auVar25,8) + (ulonglong)(CARRY8(uVar52,uVar48) || CARRY8(uVar42,uVar37))
  ;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar44;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = DAT_140e57018;
  uVar42 = SUB168(auVar12 * auVar26,0);
  uVar48 = uVar38 + (uVar44 << 0x20);
  uVar39 = (ulonglong)CARRY8(uVar38,uVar44 << 0x20);
  uVar37 = uVar41 + (uVar44 >> 0x20);
  uVar43 = uVar37 + uVar39;
  uVar39 = (ulonglong)(CARRY8(uVar41,uVar44 >> 0x20) || CARRY8(uVar37,uVar39));
  uVar37 = uVar40 + uVar42;
  uVar41 = uVar37 + uVar39;
  uVar40 = SUB168(auVar12 * auVar26,8) + (ulonglong)(CARRY8(uVar40,uVar42) || CARRY8(uVar37,uVar39))
  ;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar48;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = DAT_140e57018;
  uVar42 = SUB168(auVar13 * auVar27,0);
  uVar48 = uVar48 >> 0x20;
  uVar44 = uVar43 + (uVar38 << 0x20);
  uVar39 = (ulonglong)CARRY8(uVar43,uVar38 << 0x20);
  uVar37 = uVar41 + uVar48;
  uVar45 = uVar37 + uVar39;
  uVar39 = (ulonglong)(CARRY8(uVar41,uVar48) || CARRY8(uVar37,uVar39));
  uVar37 = uVar40 + uVar42;
  uVar38 = uVar37 + uVar39;
  uVar40 = SUB168(auVar13 * auVar27,8) + (ulonglong)(CARRY8(uVar40,uVar42) || CARRY8(uVar37,uVar39))
  ;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar44;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = DAT_140e57018;
  uVar42 = SUB168(auVar14 * auVar28,0);
  uVar44 = uVar44 >> 0x20;
  uVar48 = uVar45 + (uVar43 << 0x20);
  uVar39 = (ulonglong)CARRY8(uVar45,uVar43 << 0x20);
  uVar37 = uVar38 + uVar44;
  uVar41 = uVar37 + uVar39;
  uVar39 = (ulonglong)(CARRY8(uVar38,uVar44) || CARRY8(uVar37,uVar39));
  uVar37 = uVar40 + uVar42;
  uVar43 = uVar37 + uVar39;
  uVar44 = SUB168(auVar14 * auVar28,8) + (ulonglong)(CARRY8(uVar40,uVar42) || CARRY8(uVar37,uVar39))
  ;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar48;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = DAT_140e57018;
  uVar42 = SUB168(auVar15 * auVar29,0);
  uVar48 = uVar48 >> 0x20;
  uVar38 = uVar41 + (uVar45 << 0x20);
  uVar39 = (ulonglong)CARRY8(uVar41,uVar45 << 0x20);
  uVar37 = uVar43 + uVar48;
  uVar41 = uVar37 + uVar39;
  uVar39 = (ulonglong)(CARRY8(uVar43,uVar48) || CARRY8(uVar37,uVar39));
  uVar37 = uVar44 + uVar42;
  uVar48 = uVar37 + uVar39;
  uVar40 = SUB168(auVar15 * auVar29,8) + (ulonglong)(CARRY8(uVar44,uVar42) || CARRY8(uVar37,uVar39))
  ;
  lVar47 = uVar46 + uVar38;
  uVar39 = (ulonglong)CARRY8(uVar46,uVar38);
  uVar37 = uVar50 + uVar41;
  uVar38 = uVar37 + uVar39;
  uVar39 = (ulonglong)(CARRY8(uVar50,uVar41) || CARRY8(uVar37,uVar39));
  uVar37 = uVar49 + uVar48;
  uVar41 = uVar37 + uVar39;
  uVar39 = (ulonglong)(CARRY8(uVar49,uVar48) || CARRY8(uVar37,uVar39));
  uVar37 = uVar51 + uVar40;
  uVar43 = uVar37 + uVar39;
  uVar42 = (ulonglong)(uVar38 < DAT_140e57008 || uVar38 - DAT_140e57008 < (ulonglong)(lVar47 != -1))
  ;
  uVar44 = (ulonglong)(uVar41 < uVar42);
  uVar48 = uVar43 - DAT_140e57018;
  bVar1 = (CARRY8(uVar51,uVar40) || CARRY8(uVar37,uVar39)) <
          (uVar43 < DAT_140e57018 || uVar48 < uVar44);
  uVar39 = (uVar38 - DAT_140e57008) - (ulonglong)(lVar47 != -1);
  lVar36 = lVar47 + 1;
  if (bVar1) {
    uVar39 = uVar38;
    lVar36 = lVar47;
  }
  *unaff_RDI = lVar36;
  uVar37 = uVar41 - uVar42;
  if (bVar1) {
    uVar37 = uVar41;
  }
  unaff_RDI[1] = uVar39;
  uVar39 = uVar48 - uVar44;
  if (bVar1) {
    uVar39 = uVar43;
  }
  unaff_RDI[2] = uVar37;
  unaff_RDI[3] = uVar39;
  return;
}

// __ecp_nistz256_mul_montx @ 140e588c0

undefined8
__ecp_nistz256_mul_montx(undefined8 param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  unkint9 Var5;
  unkint9 Var6;
  unkint9 Var7;
  unkint9 Var8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  longlong lVar49;
  longlong unaff_RBX;
  ulonglong uVar50;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar51;
  ulonglong uVar52;
  ulonglong uVar53;
  ulonglong in_R10;
  ulonglong uVar54;
  ulonglong uVar55;
  ulonglong in_R11;
  ulonglong uVar56;
  ulonglong uVar57;
  ulonglong unaff_R12;
  ulonglong uVar58;
  longlong lVar59;
  
  auVar9._8_8_ = 0;
  auVar9._0_8_ = param_2;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = param_4;
  uVar52 = SUB168(auVar9 * auVar29,0);
  uVar51 = SUB168(auVar9 * auVar29,8);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = param_2;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = in_R10;
  uVar53 = SUB168(auVar10 * auVar30,0);
  uVar54 = SUB168(auVar10 * auVar30,8);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = param_2;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = in_R11;
  uVar1 = SUB168(auVar11 * auVar31,0);
  uVar56 = SUB168(auVar11 * auVar31,8);
  uVar3 = uVar51 + uVar53;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = param_2;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = unaff_R12;
  uVar2 = SUB168(auVar12 * auVar32,0);
  uVar53 = (ulonglong)CARRY8(uVar51,uVar53);
  uVar51 = uVar54 + uVar1;
  uVar55 = uVar51 + uVar53;
  uVar53 = (ulonglong)(CARRY8(uVar54,uVar1) || CARRY8(uVar51,uVar53));
  uVar51 = uVar56 + uVar2;
  uVar57 = uVar51 + uVar53;
  uVar58 = SUB168(auVar12 * auVar32,8) + (ulonglong)(CARRY8(uVar56,uVar2) || CARRY8(uVar51,uVar53));
  uVar51 = (ulonglong)CARRY8(uVar3,uVar52 << 0x20);
  uVar54 = uVar55 + (uVar52 >> 0x20);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar52;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = DAT_140e57018;
  uVar2 = SUB168(auVar13 * auVar33,0);
  uVar50 = SUB168(auVar13 * auVar33,8);
  uVar53 = *(ulonglong *)(unaff_RBX + 8);
  uVar1 = (ulonglong)(CARRY8(uVar55,uVar52 >> 0x20) || CARRY8(uVar54,uVar51));
  uVar55 = uVar57 + uVar2;
  uVar2 = (ulonglong)(CARRY8(uVar57,uVar2) || CARRY8(uVar55,uVar1));
  uVar56 = uVar58 + uVar50;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar53;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = *(ulonglong *)(unaff_RSI + 0x80);
  Var5 = (unkuint9)(uVar3 + (uVar52 << 0x20)) + (unkuint9)SUB168(auVar14 * auVar34,0) + (unkuint9)0;
  uVar52 = (ulonglong)Var5;
  Var6 = (unkuint9)(uVar54 + uVar51) + (unkuint9)SUB168(auVar14 * auVar34,8) + (unkuint9)0;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar53;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = *(ulonglong *)(unaff_RSI + 0x88);
  Var5 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar15 * auVar35,0) +
         (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  uVar57 = (ulonglong)Var5;
  Var6 = (unkuint9)(uVar55 + uVar1) + (unkuint9)SUB168(auVar15 * auVar35,8) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar53;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = *(ulonglong *)(unaff_RSI + 0x90);
  Var5 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar16 * auVar36,0) +
         (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  uVar1 = (ulonglong)Var5;
  Var6 = (unkuint9)(uVar56 + uVar2) + (unkuint9)SUB168(auVar16 * auVar36,8) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar53;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = *(ulonglong *)(unaff_RSI + 0x98);
  Var5 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar17 * auVar37,0) +
         (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  uVar55 = (ulonglong)Var5;
  Var7 = (unkuint9)(CARRY8(uVar58,uVar50) || CARRY8(uVar56,uVar2)) +
         (unkuint9)SUB168(auVar17 * auVar37,8) + (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  Var5 = (unkuint9)(ulonglong)Var7 + (unkuint9)0 +
         (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  uVar56 = (ulonglong)Var5;
  uVar51 = (ulonglong)CARRY8(uVar57,uVar52 << 0x20);
  uVar3 = uVar1 + (uVar52 >> 0x20);
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar52;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = DAT_140e57018;
  uVar2 = SUB168(auVar18 * auVar38,0);
  uVar58 = SUB168(auVar18 * auVar38,8);
  uVar53 = *(ulonglong *)(unaff_RBX + 0x10);
  uVar1 = (ulonglong)(CARRY8(uVar1,uVar52 >> 0x20) || CARRY8(uVar3,uVar51));
  uVar54 = uVar55 + uVar2;
  uVar2 = (ulonglong)(CARRY8(uVar55,uVar2) || CARRY8(uVar54,uVar1));
  uVar55 = uVar56 + uVar58;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar53;
  auVar39._8_8_ = 0;
  auVar39._0_8_ = *(ulonglong *)(unaff_RSI + 0x80);
  Var6 = (unkuint9)(uVar57 + (uVar52 << 0x20)) + (unkuint9)SUB168(auVar19 * auVar39,0) + (unkuint9)0
  ;
  uVar52 = (ulonglong)Var6;
  Var8 = (unkuint9)(uVar3 + uVar51) + (unkuint9)SUB168(auVar19 * auVar39,8) + (unkuint9)0;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar53;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = *(ulonglong *)(unaff_RSI + 0x88);
  Var6 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar20 * auVar40,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  uVar57 = (ulonglong)Var6;
  Var8 = (unkuint9)(uVar54 + uVar1) + (unkuint9)SUB168(auVar20 * auVar40,8) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar53;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = *(ulonglong *)(unaff_RSI + 0x90);
  Var6 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar21 * auVar41,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  uVar1 = (ulonglong)Var6;
  Var8 = (unkuint9)(uVar55 + uVar2) + (unkuint9)SUB168(auVar21 * auVar41,8) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar53;
  auVar42._8_8_ = 0;
  auVar42._0_8_ = *(ulonglong *)(unaff_RSI + 0x98);
  Var6 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar22 * auVar42,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  uVar50 = (ulonglong)Var6;
  Var7 = (unkuint9)
         ((ulonglong)((char)((unkuint9)Var7 >> 0x40) != '\0') +
          (ulonglong)((char)((unkuint9)Var5 >> 0x40) != '\0') +
         (ulonglong)(CARRY8(uVar56,uVar58) || CARRY8(uVar55,uVar2))) +
         (unkuint9)SUB168(auVar22 * auVar42,8) + (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  Var5 = (unkuint9)(ulonglong)Var7 + (unkuint9)0 +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  uVar56 = (ulonglong)Var5;
  uVar51 = (ulonglong)CARRY8(uVar57,uVar52 << 0x20);
  uVar3 = uVar1 + (uVar52 >> 0x20);
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar52;
  auVar43._8_8_ = 0;
  auVar43._0_8_ = DAT_140e57018;
  uVar2 = SUB168(auVar23 * auVar43,0);
  uVar58 = SUB168(auVar23 * auVar43,8);
  uVar53 = *(ulonglong *)(unaff_RBX + 0x18);
  uVar1 = (ulonglong)(CARRY8(uVar1,uVar52 >> 0x20) || CARRY8(uVar3,uVar51));
  uVar54 = uVar50 + uVar2;
  uVar2 = (ulonglong)(CARRY8(uVar50,uVar2) || CARRY8(uVar54,uVar1));
  uVar55 = uVar56 + uVar58;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar53;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = *(ulonglong *)(unaff_RSI + 0x80);
  Var6 = (unkuint9)(uVar57 + (uVar52 << 0x20)) + (unkuint9)SUB168(auVar24 * auVar44,0) + (unkuint9)0
  ;
  uVar52 = (ulonglong)Var6;
  Var8 = (unkuint9)(uVar3 + uVar51) + (unkuint9)SUB168(auVar24 * auVar44,8) + (unkuint9)0;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar53;
  auVar45._8_8_ = 0;
  auVar45._0_8_ = *(ulonglong *)(unaff_RSI + 0x88);
  Var6 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar25 * auVar45,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  uVar51 = (ulonglong)Var6;
  Var8 = (unkuint9)(uVar54 + uVar1) + (unkuint9)SUB168(auVar25 * auVar45,8) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar53;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = *(ulonglong *)(unaff_RSI + 0x90);
  Var6 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar26 * auVar46,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  uVar1 = (ulonglong)Var6;
  Var8 = (unkuint9)(uVar55 + uVar2) + (unkuint9)SUB168(auVar26 * auVar46,8) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar53;
  auVar47._8_8_ = 0;
  auVar47._0_8_ = *(ulonglong *)(unaff_RSI + 0x98);
  Var6 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar27 * auVar47,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  uVar3 = (ulonglong)Var6;
  Var7 = (unkuint9)
         ((ulonglong)((char)((unkuint9)Var7 >> 0x40) != '\0') +
          (ulonglong)((char)((unkuint9)Var5 >> 0x40) != '\0') +
         (ulonglong)(CARRY8(uVar56,uVar58) || CARRY8(uVar55,uVar2))) +
         (unkuint9)SUB168(auVar27 * auVar47,8) + (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  Var5 = (unkuint9)(ulonglong)Var7 + (unkuint9)0 +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  uVar54 = (ulonglong)Var5;
  lVar59 = uVar51 + (uVar52 << 0x20);
  uVar53 = (ulonglong)CARRY8(uVar51,uVar52 << 0x20);
  uVar51 = uVar1 + (uVar52 >> 0x20);
  uVar57 = uVar51 + uVar53;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar52;
  auVar48._8_8_ = 0;
  auVar48._0_8_ = DAT_140e57018;
  uVar2 = SUB168(auVar28 * auVar48,0);
  uVar55 = SUB168(auVar28 * auVar48,8);
  uVar53 = (ulonglong)(CARRY8(uVar1,uVar52 >> 0x20) || CARRY8(uVar51,uVar53));
  uVar51 = uVar3 + uVar2;
  uVar56 = uVar51 + uVar53;
  uVar53 = (ulonglong)(CARRY8(uVar3,uVar2) || CARRY8(uVar51,uVar53));
  uVar51 = uVar54 + uVar55;
  uVar52 = uVar51 + uVar53;
  uVar1 = (ulonglong)(uVar57 < DAT_140e57008 || uVar57 - DAT_140e57008 < (ulonglong)(lVar59 != -1));
  uVar2 = (ulonglong)(uVar56 < uVar1);
  uVar3 = uVar52 - DAT_140e57018;
  bVar4 = (byte)(((char)((unkuint9)Var7 >> 0x40) != '\0') + ((char)((unkuint9)Var5 >> 0x40) != '\0')
                + (CARRY8(uVar54,uVar55) || CARRY8(uVar51,uVar53))) <
          (uVar52 < DAT_140e57018 || uVar3 < uVar2);
  uVar53 = (uVar57 - DAT_140e57008) - (ulonglong)(lVar59 != -1);
  lVar49 = lVar59 + 1;
  if (bVar4) {
    uVar53 = uVar57;
    lVar49 = lVar59;
  }
  *unaff_RDI = lVar49;
  uVar51 = uVar56 - uVar1;
  if (bVar4) {
    uVar51 = uVar56;
  }
  unaff_RDI[1] = uVar53;
  uVar53 = uVar3 - uVar2;
  if (bVar4) {
    uVar53 = uVar52;
  }
  unaff_RDI[2] = uVar51;
  unaff_RDI[3] = uVar53;
  return 0;
}

// __ecp_nistz256_sqr_montx @ 140e58b20

void __ecp_nistz256_sqr_montx(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  bool bVar1;
  unkint9 Var2;
  unkint9 Var3;
  ulonglong uVar4;
  unkint9 Var5;
  unkint9 Var6;
  unkint9 Var7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  longlong lVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  longlong lVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  ulonglong unaff_R14;
  ulonglong uVar51;
  ulonglong unaff_R15;
  ulonglong uVar52;
  
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_2;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = unaff_R14;
  uVar37 = SUB168(auVar8 * auVar22,0);
  uVar42 = SUB168(auVar8 * auVar22,8);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = param_2;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = unaff_R15;
  uVar50 = SUB168(auVar9 * auVar23,0);
  uVar45 = SUB168(auVar9 * auVar23,8);
  uVar51 = uVar42 + uVar50;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = param_2;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = param_3;
  uVar49 = SUB168(auVar10 * auVar24,0);
  uVar50 = (ulonglong)CARRY8(uVar42,uVar50);
  uVar42 = uVar45 + uVar49;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = unaff_R14;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = unaff_R15;
  Var2 = (unkuint9)(uVar42 + uVar50) + (unkuint9)SUB168(auVar11 * auVar25,0) + (unkuint9)0;
  uVar38 = (ulonglong)Var2;
  Var5 = (unkuint9)
         (SUB168(auVar10 * auVar24,8) + (ulonglong)(CARRY8(uVar45,uVar49) || CARRY8(uVar42,uVar50)))
         + (unkuint9)SUB168(auVar11 * auVar25,8) + (unkuint9)0;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = unaff_R14;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = param_3;
  Var2 = (unkuint9)(ulonglong)Var5 + (unkuint9)SUB168(auVar12 * auVar26,0) +
         (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
  uVar50 = (ulonglong)Var2;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = unaff_R15;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = param_3;
  Var3 = (unkuint9)uVar37 + (unkuint9)uVar37 + (unkuint9)0;
  Var5 = (unkuint9)
         (SUB168(auVar12 * auVar26,8) + (ulonglong)((char)((unkuint9)Var5 >> 0x40) != '\0') +
         (ulonglong)((char)((unkuint9)Var2 >> 0x40) != '\0')) +
         (unkuint9)SUB168(auVar13 * auVar27,0) + (unkuint9)0;
  uVar42 = (ulonglong)Var5;
  Var2 = (unkuint9)uVar51 + (unkuint9)uVar51 + (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
  Var6 = (unkuint9)SUB168(auVar13 * auVar27,8) + (unkuint9)0 +
         (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  uVar51 = (ulonglong)Var6;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = *(ulonglong *)(unaff_RSI + 0x80);
  auVar28._8_8_ = 0;
  auVar28._0_8_ = *(ulonglong *)(unaff_RSI + 0x80);
  uVar39 = SUB168(auVar14 * auVar28,0);
  Var5 = (unkuint9)uVar38 + (unkuint9)uVar38 + (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
  Var7 = (unkuint9)(ulonglong)Var3 + (unkuint9)SUB168(auVar14 * auVar28,8) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  uVar38 = (ulonglong)Var7;
  Var3 = (unkuint9)uVar50 + (unkuint9)uVar50 + (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  auVar15._8_8_ = 0;
  auVar15._0_8_ = *(ulonglong *)(unaff_RSI + 0x88);
  auVar29._8_8_ = 0;
  auVar29._0_8_ = *(ulonglong *)(unaff_RSI + 0x88);
  Var6 = (unkuint9)uVar42 + (unkuint9)uVar42 + (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
  Var7 = (unkuint9)(ulonglong)Var2 + (unkuint9)SUB168(auVar15 * auVar29,0) +
         (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
  uVar42 = (ulonglong)Var7;
  Var2 = (unkuint9)uVar51 + (unkuint9)uVar51 + (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  auVar16._8_8_ = 0;
  auVar16._0_8_ = *(ulonglong *)(unaff_RSI + 0x90);
  auVar30._8_8_ = 0;
  auVar30._0_8_ = *(ulonglong *)(unaff_RSI + 0x90);
  Var5 = (unkuint9)(ulonglong)Var5 + (unkuint9)SUB168(auVar15 * auVar29,8) +
         (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
  uVar37 = (ulonglong)Var5;
  Var3 = (unkuint9)(ulonglong)Var3 + (unkuint9)SUB168(auVar16 * auVar30,0) +
         (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  uVar49 = (ulonglong)Var3;
  Var3 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar16 * auVar30,8) +
         (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
  uVar45 = (ulonglong)Var3;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = *(ulonglong *)(unaff_RSI + 0x98);
  auVar31._8_8_ = 0;
  auVar31._0_8_ = *(ulonglong *)(unaff_RSI + 0x98);
  Var3 = (unkuint9)(ulonglong)Var2 + (unkuint9)SUB168(auVar17 * auVar31,0) +
         (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
  uVar52 = (ulonglong)Var3;
  uVar4 = (ulonglong)((char)((unkuint9)Var2 >> 0x40) != '\0') + SUB168(auVar17 * auVar31,8) +
          (ulonglong)((char)((unkuint9)Var3 >> 0x40) != '\0');
  uVar40 = uVar38 + (uVar39 << 0x20);
  uVar50 = (ulonglong)CARRY8(uVar38,uVar39 << 0x20);
  uVar51 = uVar42 + (uVar39 >> 0x20);
  uVar43 = uVar51 + uVar50;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = DAT_140e57018;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar39;
  uVar41 = SUB168(auVar18 * auVar32,0);
  uVar50 = (ulonglong)(CARRY8(uVar42,uVar39 >> 0x20) || CARRY8(uVar51,uVar50));
  uVar51 = uVar37 + uVar41;
  uVar46 = uVar51 + uVar50;
  uVar39 = SUB168(auVar18 * auVar32,8) + (ulonglong)(CARRY8(uVar37,uVar41) || CARRY8(uVar51,uVar50))
  ;
  uVar37 = uVar40 >> 0x20;
  uVar44 = uVar43 + (uVar38 << 0x20);
  uVar50 = (ulonglong)CARRY8(uVar43,uVar38 << 0x20);
  uVar51 = uVar46 + uVar37;
  uVar47 = uVar51 + uVar50;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = DAT_140e57018;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar40;
  uVar42 = SUB168(auVar19 * auVar33,0);
  uVar50 = (ulonglong)(CARRY8(uVar46,uVar37) || CARRY8(uVar51,uVar50));
  uVar51 = uVar39 + uVar42;
  uVar37 = uVar51 + uVar50;
  uVar41 = SUB168(auVar19 * auVar33,8) + (ulonglong)(CARRY8(uVar39,uVar42) || CARRY8(uVar51,uVar50))
  ;
  uVar38 = uVar44 >> 0x20;
  uVar46 = uVar47 + (uVar43 << 0x20);
  uVar50 = (ulonglong)CARRY8(uVar47,uVar43 << 0x20);
  uVar51 = uVar37 + uVar38;
  uVar39 = uVar51 + uVar50;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = DAT_140e57018;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = uVar44;
  uVar42 = SUB168(auVar20 * auVar34,0);
  uVar50 = (ulonglong)(CARRY8(uVar37,uVar38) || CARRY8(uVar51,uVar50));
  uVar51 = uVar41 + uVar42;
  uVar40 = uVar51 + uVar50;
  uVar41 = SUB168(auVar20 * auVar34,8) + (ulonglong)(CARRY8(uVar41,uVar42) || CARRY8(uVar51,uVar50))
  ;
  uVar38 = uVar46 >> 0x20;
  uVar37 = uVar39 + (uVar47 << 0x20);
  uVar50 = (ulonglong)CARRY8(uVar39,uVar47 << 0x20);
  uVar51 = uVar40 + uVar38;
  uVar39 = uVar51 + uVar50;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = DAT_140e57018;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = uVar46;
  uVar42 = SUB168(auVar21 * auVar35,0);
  uVar50 = (ulonglong)(CARRY8(uVar40,uVar38) || CARRY8(uVar51,uVar50));
  uVar51 = uVar41 + uVar42;
  uVar38 = uVar51 + uVar50;
  uVar41 = SUB168(auVar21 * auVar35,8) + (ulonglong)(CARRY8(uVar41,uVar42) || CARRY8(uVar51,uVar50))
  ;
  lVar48 = uVar49 + uVar37;
  uVar50 = (ulonglong)CARRY8(uVar49,uVar37);
  uVar51 = uVar45 + uVar39;
  uVar49 = uVar51 + uVar50;
  uVar50 = (ulonglong)(CARRY8(uVar45,uVar39) || CARRY8(uVar51,uVar50));
  uVar51 = uVar52 + uVar38;
  uVar45 = uVar51 + uVar50;
  uVar50 = (ulonglong)(CARRY8(uVar52,uVar38) || CARRY8(uVar51,uVar50));
  uVar51 = uVar4 + uVar41;
  uVar52 = uVar51 + uVar50;
  uVar42 = (ulonglong)(uVar49 < DAT_140e57008 || uVar49 - DAT_140e57008 < (ulonglong)(lVar48 != -1))
  ;
  uVar38 = (ulonglong)(uVar45 < uVar42);
  uVar37 = uVar52 - DAT_140e57018;
  bVar1 = (CARRY8(uVar4,uVar41) || CARRY8(uVar51,uVar50)) <
          (uVar52 < DAT_140e57018 || uVar37 < uVar38);
  uVar50 = (uVar49 - DAT_140e57008) - (ulonglong)(lVar48 != -1);
  lVar36 = lVar48 + 1;
  if (bVar1) {
    uVar50 = uVar49;
    lVar36 = lVar48;
  }
  *unaff_RDI = lVar36;
  uVar51 = uVar45 - uVar42;
  if (bVar1) {
    uVar51 = uVar45;
  }
  unaff_RDI[1] = uVar50;
  uVar50 = uVar37 - uVar38;
  if (bVar1) {
    uVar50 = uVar52;
  }
  unaff_RDI[2] = uVar51;
  unaff_RDI[3] = uVar50;
  return;
}

// ecp_nistz256_from_mont @ 140e58ce0

void ecp_nistz256_from_mont(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  bool bVar21;
  
  uVar18 = *param_2;
  uVar1 = param_2[1];
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar18;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = DAT_140e57018;
  uVar12 = SUB168(auVar3 * auVar7,0);
  uVar15 = uVar1 + (uVar18 << 0x20);
  uVar13 = (ulonglong)CARRY8(uVar1,uVar18 << 0x20);
  uVar17 = param_2[2] + (uVar18 >> 0x20);
  uVar16 = uVar17 + uVar13;
  uVar18 = (ulonglong)(CARRY8(param_2[2],uVar18 >> 0x20) || CARRY8(uVar17,uVar13));
  uVar13 = param_2[3] + uVar12;
  uVar19 = uVar13 + uVar18;
  uVar12 = SUB168(auVar3 * auVar7,8) +
           (ulonglong)(CARRY8(param_2[3],uVar12) || CARRY8(uVar13,uVar18));
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar15;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = DAT_140e57018;
  uVar13 = SUB168(auVar4 * auVar8,0);
  uVar15 = uVar15 >> 0x20;
  uVar17 = uVar16 + (uVar1 << 0x20);
  uVar18 = (ulonglong)CARRY8(uVar16,uVar1 << 0x20);
  uVar1 = uVar19 + uVar15;
  uVar20 = uVar1 + uVar18;
  uVar18 = (ulonglong)(CARRY8(uVar19,uVar15) || CARRY8(uVar1,uVar18));
  uVar1 = uVar12 + uVar13;
  uVar19 = uVar1 + uVar18;
  uVar15 = SUB168(auVar4 * auVar8,8) + (ulonglong)(CARRY8(uVar12,uVar13) || CARRY8(uVar1,uVar18));
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar17;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = DAT_140e57018;
  uVar13 = SUB168(auVar5 * auVar9,0);
  uVar17 = uVar17 >> 0x20;
  uVar12 = uVar20 + (uVar16 << 0x20);
  uVar18 = (ulonglong)CARRY8(uVar20,uVar16 << 0x20);
  uVar1 = uVar19 + uVar17;
  uVar16 = uVar1 + uVar18;
  uVar18 = (ulonglong)(CARRY8(uVar19,uVar17) || CARRY8(uVar1,uVar18));
  uVar1 = uVar15 + uVar13;
  uVar19 = uVar1 + uVar18;
  uVar17 = SUB168(auVar5 * auVar9,8) + (ulonglong)(CARRY8(uVar15,uVar13) || CARRY8(uVar1,uVar18));
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar12;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = DAT_140e57018;
  uVar13 = SUB168(auVar6 * auVar10,0);
  uVar12 = uVar12 >> 0x20;
  lVar14 = uVar16 + (uVar20 << 0x20);
  uVar18 = (ulonglong)CARRY8(uVar16,uVar20 << 0x20);
  uVar1 = uVar19 + uVar12;
  uVar15 = uVar1 + uVar18;
  uVar18 = (ulonglong)(CARRY8(uVar19,uVar12) || CARRY8(uVar1,uVar18));
  uVar1 = uVar17 + uVar13;
  uVar19 = uVar1 + uVar18;
  uVar12 = SUB168(auVar6 * auVar10,8) + (ulonglong)(CARRY8(uVar17,uVar13) || CARRY8(uVar1,uVar18));
  uVar18 = (ulonglong)(uVar15 < DAT_140e57008 || uVar15 - DAT_140e57008 < (ulonglong)(lVar14 != -1))
  ;
  uVar1 = (ulonglong)(uVar19 < uVar18);
  bVar21 = DAT_140e57018 <= uVar12;
  uVar13 = uVar12 - DAT_140e57018;
  bVar2 = uVar1 <= uVar13;
  uVar17 = (uVar15 - DAT_140e57008) - (ulonglong)(lVar14 != -1);
  lVar11 = lVar14 + 1;
  if (!bVar21 || !bVar2) {
    uVar17 = uVar15;
    lVar11 = lVar14;
  }
  *param_1 = lVar11;
  uVar18 = uVar19 - uVar18;
  if (!bVar21 || !bVar2) {
    uVar18 = uVar19;
  }
  param_1[1] = uVar17;
  if (bVar21 && bVar2) {
    uVar12 = uVar13 - uVar1;
  }
  param_1[2] = uVar18;
  param_1[3] = uVar12;
  return;
}

// L$SEH_begin_ecp_nistz256_from_mont @ 140e58ced

void L_SEH_begin_ecp_nistz256_from_mont(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  bool bVar21;
  
  uVar18 = *param_2;
  uVar1 = param_2[1];
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar18;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = DAT_140e57018;
  uVar12 = SUB168(auVar3 * auVar7,0);
  uVar15 = uVar1 + (uVar18 << 0x20);
  uVar13 = (ulonglong)CARRY8(uVar1,uVar18 << 0x20);
  uVar17 = param_2[2] + (uVar18 >> 0x20);
  uVar16 = uVar17 + uVar13;
  uVar18 = (ulonglong)(CARRY8(param_2[2],uVar18 >> 0x20) || CARRY8(uVar17,uVar13));
  uVar13 = param_2[3] + uVar12;
  uVar19 = uVar13 + uVar18;
  uVar12 = SUB168(auVar3 * auVar7,8) +
           (ulonglong)(CARRY8(param_2[3],uVar12) || CARRY8(uVar13,uVar18));
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar15;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = DAT_140e57018;
  uVar13 = SUB168(auVar4 * auVar8,0);
  uVar15 = uVar15 >> 0x20;
  uVar17 = uVar16 + (uVar1 << 0x20);
  uVar18 = (ulonglong)CARRY8(uVar16,uVar1 << 0x20);
  uVar1 = uVar19 + uVar15;
  uVar20 = uVar1 + uVar18;
  uVar18 = (ulonglong)(CARRY8(uVar19,uVar15) || CARRY8(uVar1,uVar18));
  uVar1 = uVar12 + uVar13;
  uVar19 = uVar1 + uVar18;
  uVar15 = SUB168(auVar4 * auVar8,8) + (ulonglong)(CARRY8(uVar12,uVar13) || CARRY8(uVar1,uVar18));
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar17;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = DAT_140e57018;
  uVar13 = SUB168(auVar5 * auVar9,0);
  uVar17 = uVar17 >> 0x20;
  uVar12 = uVar20 + (uVar16 << 0x20);
  uVar18 = (ulonglong)CARRY8(uVar20,uVar16 << 0x20);
  uVar1 = uVar19 + uVar17;
  uVar16 = uVar1 + uVar18;
  uVar18 = (ulonglong)(CARRY8(uVar19,uVar17) || CARRY8(uVar1,uVar18));
  uVar1 = uVar15 + uVar13;
  uVar19 = uVar1 + uVar18;
  uVar17 = SUB168(auVar5 * auVar9,8) + (ulonglong)(CARRY8(uVar15,uVar13) || CARRY8(uVar1,uVar18));
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar12;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = DAT_140e57018;
  uVar13 = SUB168(auVar6 * auVar10,0);
  uVar12 = uVar12 >> 0x20;
  lVar14 = uVar16 + (uVar20 << 0x20);
  uVar18 = (ulonglong)CARRY8(uVar16,uVar20 << 0x20);
  uVar1 = uVar19 + uVar12;
  uVar15 = uVar1 + uVar18;
  uVar18 = (ulonglong)(CARRY8(uVar19,uVar12) || CARRY8(uVar1,uVar18));
  uVar1 = uVar17 + uVar13;
  uVar19 = uVar1 + uVar18;
  uVar12 = SUB168(auVar6 * auVar10,8) + (ulonglong)(CARRY8(uVar17,uVar13) || CARRY8(uVar1,uVar18));
  uVar18 = (ulonglong)(uVar15 < DAT_140e57008 || uVar15 - DAT_140e57008 < (ulonglong)(lVar14 != -1))
  ;
  uVar1 = (ulonglong)(uVar19 < uVar18);
  bVar21 = DAT_140e57018 <= uVar12;
  uVar13 = uVar12 - DAT_140e57018;
  bVar2 = uVar1 <= uVar13;
  uVar17 = (uVar15 - DAT_140e57008) - (ulonglong)(lVar14 != -1);
  lVar11 = lVar14 + 1;
  if (!bVar21 || !bVar2) {
    uVar17 = uVar15;
    lVar11 = lVar14;
  }
  *param_1 = lVar11;
  uVar18 = uVar19 - uVar18;
  if (!bVar21 || !bVar2) {
    uVar18 = uVar19;
  }
  param_1[1] = uVar17;
  if (bVar21 && bVar2) {
    uVar12 = uVar13 - uVar1;
  }
  param_1[2] = uVar18;
  param_1[3] = uVar12;
  return;
}

// ecp_nistz256_scatter_w5 @ 140e58e00

void ecp_nistz256_scatter_w5(longlong param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  
  uVar2 = param_2[1];
  uVar13 = (ulonglong)(uint)((param_3 * 3 + -3) * 0x20);
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  uVar9 = param_2[8];
  uVar10 = param_2[9];
  uVar11 = param_2[10];
  uVar12 = param_2[0xb];
  *(undefined8 *)(param_1 + uVar13) = *param_2;
  ((undefined8 *)(param_1 + uVar13))[1] = uVar2;
  puVar1 = (undefined8 *)(param_1 + 0x10 + uVar13);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1 = (undefined8 *)(param_1 + 0x20 + uVar13);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1 = (undefined8 *)(param_1 + 0x30 + uVar13);
  *puVar1 = uVar7;
  puVar1[1] = uVar8;
  puVar1 = (undefined8 *)(param_1 + 0x40 + uVar13);
  *puVar1 = uVar9;
  puVar1[1] = uVar10;
  puVar1 = (undefined8 *)(param_1 + 0x50 + uVar13);
  *puVar1 = uVar11;
  puVar1[1] = uVar12;
  return;
}

// ecp_nistz256_gather_w5 @ 140e58e60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ecp_nistz256_gather_w5(undefined1 (*param_1) [32],undefined1 (*param_2) [32],uint param_3)

{
  undefined1 (*pauVar1) [32];
  undefined1 (*pauVar2) [32];
  undefined1 (*pauVar3) [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 (*pauVar15) [32];
  undefined1 (*pauVar16) [32];
  longlong lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [64];
  undefined1 auVar20 [16];
  undefined1 auVar21 [64];
  undefined1 auVar22 [16];
  undefined1 auVar23 [64];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  undefined1 auVar31 [16];
  
  if ((_DAT_15540a9f8 & 0x20) == 0) {
    auVar18 = (undefined1  [16])0x0;
    auVar20 = (undefined1  [16])0x0;
    auVar22 = (undefined1  [16])0x0;
    auVar24 = (undefined1  [16])0x0;
    auVar25 = (undefined1  [16])0x0;
    auVar26 = (undefined1  [16])0x0;
    lVar17 = 0x10;
    uVar27 = _L_One;
    uVar28 = _UNK_140e57044;
    uVar29 = _UNK_140e57048;
    uVar30 = _UNK_140e5704c;
    do {
      auVar31._0_4_ = -(uint)(uVar27 == param_3);
      auVar31._4_4_ = -(uint)(uVar28 == param_3);
      auVar31._8_4_ = -(uint)(uVar29 == param_3);
      auVar31._12_4_ = -(uint)(uVar30 == param_3);
      puVar13 = *param_2;
      puVar14 = *param_2;
      pauVar1 = param_2 + 1;
      pauVar15 = param_2 + 1;
      pauVar2 = param_2 + 2;
      pauVar16 = param_2 + 2;
      param_2 = param_2 + 3;
      auVar18 = auVar18 | *(undefined1 (*) [16])puVar13 & auVar31;
      auVar20 = auVar20 | *(undefined1 (*) [16])(puVar14 + 0x10) & auVar31;
      auVar22 = auVar22 | *(undefined1 (*) [16])*pauVar1 & auVar31;
      auVar24 = auVar24 | *(undefined1 (*) [16])(*pauVar15 + 0x10) & auVar31;
      auVar25 = auVar25 | *(undefined1 (*) [16])*pauVar2 & auVar31;
      auVar26 = auVar26 | *(undefined1 (*) [16])(*pauVar16 + 0x10) & auVar31;
      lVar17 = lVar17 + -1;
      uVar27 = uVar27 + _L_One;
      uVar28 = uVar28 + _UNK_140e57044;
      uVar29 = uVar29 + _UNK_140e57048;
      uVar30 = uVar30 + _UNK_140e5704c;
    } while (lVar17 != 0);
    *(undefined1 (*) [16])*param_1 = auVar18;
    *(undefined1 (*) [16])(*param_1 + 0x10) = auVar20;
    *(undefined1 (*) [16])param_1[1] = auVar22;
    *(undefined1 (*) [16])(param_1[1] + 0x10) = auVar24;
    *(undefined1 (*) [16])param_1[2] = auVar25;
    *(undefined1 (*) [16])(param_1[2] + 0x10) = auVar26;
    return;
  }
  auVar19 = ZEXT3264((undefined1  [32])0x0);
  auVar21 = ZEXT3264((undefined1  [32])0x0);
  auVar23 = ZEXT3264((undefined1  [32])0x0);
  auVar7._4_4_ = _UNK_140e57044;
  auVar7._0_4_ = _L_One;
  auVar7._8_4_ = _UNK_140e57048;
  auVar7._12_4_ = _UNK_140e5704c;
  auVar7._16_16_ = _UNK_140e57050;
  auVar8._4_4_ = _UNK_140e57064;
  auVar8._0_4_ = _L_Two;
  auVar8._8_4_ = _UNK_140e57068;
  auVar8._12_4_ = _UNK_140e5706c;
  auVar8._16_4_ = _UNK_140e57070;
  auVar8._20_4_ = _UNK_140e57074;
  auVar8._24_4_ = _UNK_140e57078;
  auVar8._28_4_ = _UNK_140e5707c;
  auVar12 = vpermd_avx2((undefined1  [32])0x0,ZEXT432(param_3));
  lVar17 = 8;
  do {
    auVar4 = *param_2;
    pauVar1 = param_2 + 1;
    pauVar2 = param_2 + 2;
    pauVar15 = param_2 + 3;
    pauVar16 = param_2 + 4;
    pauVar3 = param_2 + 5;
    auVar10 = vpcmpeqd_avx2(auVar7,auVar12);
    auVar11 = vpcmpeqd_avx2(auVar8,auVar12);
    auVar5._0_4_ = auVar7._0_4_ + _L_Two;
    auVar5._4_4_ = auVar7._4_4_ + _UNK_140e57064;
    auVar5._8_4_ = auVar7._8_4_ + _UNK_140e57068;
    auVar5._12_4_ = auVar7._12_4_ + _UNK_140e5706c;
    auVar5._16_4_ = auVar7._16_4_ + _UNK_140e57070;
    auVar5._20_4_ = auVar7._20_4_ + _UNK_140e57074;
    auVar5._24_4_ = auVar7._24_4_ + _UNK_140e57078;
    auVar5._28_4_ = auVar7._28_4_ + _UNK_140e5707c;
    auVar6._0_4_ = auVar8._0_4_ + _L_Two;
    auVar6._4_4_ = auVar8._4_4_ + _UNK_140e57064;
    auVar6._8_4_ = auVar8._8_4_ + _UNK_140e57068;
    auVar6._12_4_ = auVar8._12_4_ + _UNK_140e5706c;
    auVar6._16_4_ = auVar8._16_4_ + _UNK_140e57070;
    auVar6._20_4_ = auVar8._20_4_ + _UNK_140e57074;
    auVar6._24_4_ = auVar8._24_4_ + _UNK_140e57078;
    auVar6._28_4_ = auVar8._28_4_ + _UNK_140e5707c;
    param_2 = param_2 + 6;
    auVar7 = vpand_avx2(auVar4,auVar10);
    auVar8 = vpand_avx2(*pauVar1,auVar10);
    auVar4 = vpand_avx2(*pauVar2,auVar10);
    auVar10 = vpand_avx2(*pauVar15,auVar11);
    auVar9 = vpand_avx2(*pauVar16,auVar11);
    auVar11 = vpand_avx2(*pauVar3,auVar11);
    auVar10 = auVar19._0_32_ ^ auVar7 ^ auVar10;
    auVar19 = ZEXT3264(auVar10);
    auVar9 = auVar21._0_32_ ^ auVar8 ^ auVar9;
    auVar21 = ZEXT3264(auVar9);
    auVar11 = auVar23._0_32_ ^ auVar4 ^ auVar11;
    auVar23 = ZEXT3264(auVar11);
    lVar17 = lVar17 + -1;
    auVar7 = auVar5;
    auVar8 = auVar6;
  } while (lVar17 != 0);
  *param_1 = auVar10;
  param_1[1] = auVar9;
  param_1[2] = auVar11;
  return;
}

// L$SEH_begin_ecp_nistz256_gather_w5 @ 140e58e79

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L_SEH_begin_ecp_nistz256_gather_w5(uint *param_1,uint *param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  uint *puVar20;
  uint uVar21;
  uint *puVar22;
  uint *puVar23;
  uint *puVar24;
  undefined8 *in_RAX;
  longlong lVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  undefined8 unaff_XMM6_Qa;
  uint uVar43;
  uint uVar44;
  undefined8 unaff_XMM6_Qb;
  uint uVar45;
  uint uVar46;
  undefined8 unaff_XMM7_Qa;
  uint uVar47;
  uint uVar48;
  undefined8 unaff_XMM7_Qb;
  uint uVar49;
  int iVar50;
  undefined8 unaff_XMM8_Qa;
  int iVar51;
  int iVar52;
  undefined8 unaff_XMM8_Qb;
  int iVar53;
  undefined8 unaff_XMM9_Qa;
  undefined8 unaff_XMM9_Qb;
  undefined8 unaff_XMM10_Qa;
  undefined8 unaff_XMM10_Qb;
  undefined8 unaff_XMM11_Qa;
  undefined8 unaff_XMM11_Qb;
  undefined8 unaff_XMM12_Qa;
  undefined8 unaff_XMM12_Qb;
  undefined8 unaff_XMM13_Qa;
  undefined8 unaff_XMM13_Qb;
  undefined8 unaff_XMM14_Qa;
  undefined8 unaff_XMM14_Qb;
  uint uVar54;
  undefined8 unaff_XMM15_Qa;
  uint uVar55;
  uint uVar56;
  undefined8 unaff_XMM15_Qb;
  uint uVar57;
  
  in_RAX[-4] = unaff_XMM6_Qa;
  in_RAX[-3] = unaff_XMM6_Qb;
  in_RAX[-2] = unaff_XMM7_Qa;
  in_RAX[-1] = unaff_XMM7_Qb;
  *in_RAX = unaff_XMM8_Qa;
  in_RAX[1] = unaff_XMM8_Qb;
  in_RAX[2] = unaff_XMM9_Qa;
  in_RAX[3] = unaff_XMM9_Qb;
  in_RAX[4] = unaff_XMM10_Qa;
  in_RAX[5] = unaff_XMM10_Qb;
  in_RAX[6] = unaff_XMM11_Qa;
  in_RAX[7] = unaff_XMM11_Qb;
  in_RAX[8] = unaff_XMM12_Qa;
  in_RAX[9] = unaff_XMM12_Qb;
  in_RAX[10] = unaff_XMM13_Qa;
  in_RAX[0xb] = unaff_XMM13_Qb;
  in_RAX[0xc] = unaff_XMM14_Qa;
  in_RAX[0xd] = unaff_XMM14_Qb;
  in_RAX[0xe] = unaff_XMM15_Qa;
  in_RAX[0xf] = unaff_XMM15_Qb;
  uVar26 = 0;
  uVar27 = 0;
  uVar28 = 0;
  uVar29 = 0;
  uVar30 = 0;
  uVar31 = 0;
  uVar32 = 0;
  uVar33 = 0;
  uVar34 = 0;
  uVar35 = 0;
  uVar36 = 0;
  uVar37 = 0;
  uVar38 = 0;
  uVar39 = 0;
  uVar40 = 0;
  uVar41 = 0;
  uVar42 = 0;
  uVar43 = 0;
  uVar44 = 0;
  uVar45 = 0;
  uVar46 = 0;
  uVar47 = 0;
  uVar48 = 0;
  uVar49 = 0;
  lVar25 = 0x10;
  iVar50 = _L_One;
  iVar51 = _UNK_140e57044;
  iVar52 = _UNK_140e57048;
  iVar53 = _UNK_140e5704c;
  do {
    uVar54 = -(uint)(iVar50 == param_3);
    uVar55 = -(uint)(iVar51 == param_3);
    uVar56 = -(uint)(iVar52 == param_3);
    uVar57 = -(uint)(iVar53 == param_3);
    uVar21 = *param_2;
    puVar22 = param_2 + 1;
    puVar23 = param_2 + 2;
    puVar24 = param_2 + 3;
    puVar1 = param_2 + 4;
    puVar18 = param_2 + 5;
    puVar19 = param_2 + 6;
    puVar20 = param_2 + 7;
    puVar2 = param_2 + 8;
    puVar15 = param_2 + 9;
    puVar16 = param_2 + 10;
    puVar17 = param_2 + 0xb;
    puVar3 = param_2 + 0xc;
    puVar12 = param_2 + 0xd;
    puVar13 = param_2 + 0xe;
    puVar14 = param_2 + 0xf;
    puVar4 = param_2 + 0x10;
    puVar9 = param_2 + 0x11;
    puVar10 = param_2 + 0x12;
    puVar11 = param_2 + 0x13;
    puVar5 = param_2 + 0x14;
    puVar6 = param_2 + 0x15;
    puVar7 = param_2 + 0x16;
    puVar8 = param_2 + 0x17;
    param_2 = param_2 + 0x18;
    uVar26 = uVar26 | uVar21 & uVar54;
    uVar27 = uVar27 | *puVar22 & uVar55;
    uVar28 = uVar28 | *puVar23 & uVar56;
    uVar29 = uVar29 | *puVar24 & uVar57;
    uVar30 = uVar30 | *puVar1 & uVar54;
    uVar31 = uVar31 | *puVar18 & uVar55;
    uVar32 = uVar32 | *puVar19 & uVar56;
    uVar33 = uVar33 | *puVar20 & uVar57;
    uVar34 = uVar34 | *puVar2 & uVar54;
    uVar35 = uVar35 | *puVar15 & uVar55;
    uVar36 = uVar36 | *puVar16 & uVar56;
    uVar37 = uVar37 | *puVar17 & uVar57;
    uVar38 = uVar38 | *puVar3 & uVar54;
    uVar39 = uVar39 | *puVar12 & uVar55;
    uVar40 = uVar40 | *puVar13 & uVar56;
    uVar41 = uVar41 | *puVar14 & uVar57;
    uVar42 = uVar42 | *puVar4 & uVar54;
    uVar43 = uVar43 | *puVar9 & uVar55;
    uVar44 = uVar44 | *puVar10 & uVar56;
    uVar45 = uVar45 | *puVar11 & uVar57;
    uVar46 = uVar46 | *puVar5 & uVar54;
    uVar47 = uVar47 | *puVar6 & uVar55;
    uVar48 = uVar48 | *puVar7 & uVar56;
    uVar49 = uVar49 | *puVar8 & uVar57;
    lVar25 = lVar25 + -1;
    iVar50 = iVar50 + _L_One;
    iVar51 = iVar51 + _UNK_140e57044;
    iVar52 = iVar52 + _UNK_140e57048;
    iVar53 = iVar53 + _UNK_140e5704c;
  } while (lVar25 != 0);
  *param_1 = uVar26;
  param_1[1] = uVar27;
  param_1[2] = uVar28;
  param_1[3] = uVar29;
  param_1[4] = uVar30;
  param_1[5] = uVar31;
  param_1[6] = uVar32;
  param_1[7] = uVar33;
  param_1[8] = uVar34;
  param_1[9] = uVar35;
  param_1[10] = uVar36;
  param_1[0xb] = uVar37;
  param_1[0xc] = uVar38;
  param_1[0xd] = uVar39;
  param_1[0xe] = uVar40;
  param_1[0xf] = uVar41;
  param_1[0x10] = uVar42;
  param_1[0x11] = uVar43;
  param_1[0x12] = uVar44;
  param_1[0x13] = uVar45;
  param_1[0x14] = uVar46;
  param_1[0x15] = uVar47;
  param_1[0x16] = uVar48;
  param_1[0x17] = uVar49;
  return;
}

// ecp_nistz256_scatter_w7 @ 140e58fc0

void ecp_nistz256_scatter_w7(longlong param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  
  uVar2 = param_2[1];
  uVar9 = (ulonglong)(uint)(param_3 << 6);
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  *(undefined8 *)(param_1 + uVar9) = *param_2;
  ((undefined8 *)(param_1 + uVar9))[1] = uVar2;
  puVar1 = (undefined8 *)(param_1 + 0x10 + uVar9);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1 = (undefined8 *)(param_1 + 0x20 + uVar9);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1 = (undefined8 *)(param_1 + 0x30 + uVar9);
  *puVar1 = uVar7;
  puVar1[1] = uVar8;
  return;
}

// ecp_nistz256_gather_w7 @ 140e59000

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ecp_nistz256_gather_w7(undefined1 (*param_1) [32],undefined1 (*param_2) [32],uint param_3)

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 (*pauVar13) [32];
  longlong lVar14;
  undefined1 (*pauVar15) [32];
  undefined1 auVar16 [16];
  undefined1 auVar17 [64];
  undefined1 auVar18 [16];
  undefined1 auVar19 [64];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined1 auVar26 [16];
  
  if ((_DAT_15540a9f8 & 0x20) == 0) {
    auVar16 = (undefined1  [16])0x0;
    auVar18 = (undefined1  [16])0x0;
    auVar20 = (undefined1  [16])0x0;
    auVar21 = (undefined1  [16])0x0;
    lVar14 = 0x40;
    uVar22 = _L_One;
    uVar23 = _UNK_140e57044;
    uVar24 = _UNK_140e57048;
    uVar25 = _UNK_140e5704c;
    do {
      puVar11 = *param_2;
      puVar12 = *param_2;
      auVar26._0_4_ = -(uint)(uVar22 == param_3);
      auVar26._4_4_ = -(uint)(uVar23 == param_3);
      auVar26._8_4_ = -(uint)(uVar24 == param_3);
      auVar26._12_4_ = -(uint)(uVar25 == param_3);
      pauVar15 = param_2 + 1;
      pauVar13 = param_2 + 1;
      param_2 = param_2 + 2;
      auVar16 = auVar16 | *(undefined1 (*) [16])puVar11 & auVar26;
      auVar18 = auVar18 | *(undefined1 (*) [16])(puVar12 + 0x10) & auVar26;
      auVar20 = auVar20 | *(undefined1 (*) [16])*pauVar15 & auVar26;
      auVar21 = auVar21 | *(undefined1 (*) [16])(*pauVar13 + 0x10) & auVar26;
      lVar14 = lVar14 + -1;
      uVar22 = uVar22 + _L_One;
      uVar23 = uVar23 + _UNK_140e57044;
      uVar24 = uVar24 + _UNK_140e57048;
      uVar25 = uVar25 + _UNK_140e5704c;
    } while (lVar14 != 0);
    *(undefined1 (*) [16])*param_1 = auVar16;
    *(undefined1 (*) [16])(*param_1 + 0x10) = auVar18;
    *(undefined1 (*) [16])param_1[1] = auVar20;
    *(undefined1 (*) [16])(param_1[1] + 0x10) = auVar21;
    return;
  }
  auVar17 = ZEXT3264((undefined1  [32])0x0);
  auVar19 = ZEXT3264((undefined1  [32])0x0);
  auVar6._4_4_ = _UNK_140e57044;
  auVar6._0_4_ = _L_One;
  auVar6._8_4_ = _UNK_140e57048;
  auVar6._12_4_ = _UNK_140e5704c;
  auVar6._16_16_ = _UNK_140e57050;
  auVar5._4_4_ = _UNK_140e57084;
  auVar5._0_4_ = _L_Three;
  auVar5._8_4_ = _UNK_140e57088;
  auVar5._12_4_ = _UNK_140e5708c;
  auVar5._16_4_ = _UNK_140e57090;
  auVar5._20_4_ = _UNK_140e57094;
  auVar5._24_4_ = _UNK_140e57098;
  auVar5._28_4_ = _UNK_140e5709c;
  auVar10 = vpermd_avx2((undefined1  [32])0x0,ZEXT432(param_3));
  lVar14 = 0x15;
  auVar4 = _L_Two;
  do {
    pauVar15 = param_2;
    auVar7 = vpcmpeqd_avx2(auVar6,auVar10);
    auVar8 = vpcmpeqd_avx2(auVar4,auVar10);
    auVar9 = vpcmpeqd_avx2(auVar5,auVar10);
    auVar1._0_4_ = auVar6._0_4_ + _L_Three;
    auVar1._4_4_ = auVar6._4_4_ + _UNK_140e57084;
    auVar1._8_4_ = auVar6._8_4_ + _UNK_140e57088;
    auVar1._12_4_ = auVar6._12_4_ + _UNK_140e5708c;
    auVar1._16_4_ = auVar6._16_4_ + _UNK_140e57090;
    auVar1._20_4_ = auVar6._20_4_ + _UNK_140e57094;
    auVar1._24_4_ = auVar6._24_4_ + _UNK_140e57098;
    auVar1._28_4_ = auVar6._28_4_ + _UNK_140e5709c;
    auVar2._0_4_ = auVar4._0_4_ + _L_Three;
    auVar2._4_4_ = auVar4._4_4_ + _UNK_140e57084;
    auVar2._8_4_ = auVar4._8_4_ + _UNK_140e57088;
    auVar2._12_4_ = auVar4._12_4_ + _UNK_140e5708c;
    auVar2._16_4_ = auVar4._16_4_ + _UNK_140e57090;
    auVar2._20_4_ = auVar4._20_4_ + _UNK_140e57094;
    auVar2._24_4_ = auVar4._24_4_ + _UNK_140e57098;
    auVar2._28_4_ = auVar4._28_4_ + _UNK_140e5709c;
    auVar3._0_4_ = auVar5._0_4_ + _L_Three;
    auVar3._4_4_ = auVar5._4_4_ + _UNK_140e57084;
    auVar3._8_4_ = auVar5._8_4_ + _UNK_140e57088;
    auVar3._12_4_ = auVar5._12_4_ + _UNK_140e5708c;
    auVar3._16_4_ = auVar5._16_4_ + _UNK_140e57090;
    auVar3._20_4_ = auVar5._20_4_ + _UNK_140e57094;
    auVar3._24_4_ = auVar5._24_4_ + _UNK_140e57098;
    auVar3._28_4_ = auVar5._28_4_ + _UNK_140e5709c;
    auVar4 = vpand_avx2(*pauVar15,auVar7);
    auVar5 = vpand_avx2(pauVar15[1],auVar7);
    auVar6 = vpand_avx2(pauVar15[2],auVar8);
    auVar7 = vpand_avx2(pauVar15[3],auVar8);
    auVar8 = vpand_avx2(pauVar15[4],auVar9);
    auVar9 = vpand_avx2(pauVar15[5],auVar9);
    auVar8 = auVar17._0_32_ ^ auVar4 ^ auVar6 ^ auVar8;
    auVar17 = ZEXT3264(auVar8);
    auVar9 = auVar19._0_32_ ^ auVar5 ^ auVar7 ^ auVar9;
    auVar19 = ZEXT3264(auVar9);
    lVar14 = lVar14 + -1;
    param_2 = pauVar15 + 6;
    auVar4 = auVar2;
    auVar5 = auVar3;
    auVar6 = auVar1;
  } while (lVar14 != 0);
  auVar4 = vpcmpeqd_avx2(auVar1,auVar10);
  auVar10 = vpand_avx2(pauVar15[6],auVar4);
  auVar4 = vpand_avx2(pauVar15[7],auVar4);
  *param_1 = auVar8 ^ auVar10;
  param_1[1] = auVar9 ^ auVar4;
  return;
}

// L$SEH_begin_ecp_nistz256_gather_w7 @ 140e59019

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L_SEH_begin_ecp_nistz256_gather_w7(uint *param_1,uint *param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  undefined8 *in_RAX;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  int iVar34;
  undefined8 unaff_XMM8_Qa;
  int iVar35;
  int iVar36;
  undefined8 unaff_XMM8_Qb;
  int iVar37;
  undefined8 unaff_XMM9_Qa;
  undefined8 unaff_XMM9_Qb;
  undefined8 unaff_XMM10_Qa;
  undefined8 unaff_XMM10_Qb;
  undefined8 unaff_XMM11_Qa;
  undefined8 unaff_XMM11_Qb;
  undefined8 unaff_XMM12_Qa;
  undefined8 unaff_XMM12_Qb;
  undefined4 unaff_XMM13_Da;
  undefined4 unaff_XMM13_Db;
  undefined4 unaff_XMM13_Dc;
  undefined4 unaff_XMM13_Dd;
  undefined4 unaff_XMM14_Da;
  undefined4 unaff_XMM14_Db;
  undefined4 unaff_XMM14_Dc;
  undefined4 unaff_XMM14_Dd;
  uint uVar38;
  undefined8 unaff_XMM15_Qa;
  uint uVar39;
  uint uVar40;
  undefined8 unaff_XMM15_Qb;
  uint uVar41;
  
  *(undefined4 *)(in_RAX + -4) = unaff_XMM6_Da;
  *(undefined4 *)((longlong)in_RAX + -0x1c) = unaff_XMM6_Db;
  *(undefined4 *)(in_RAX + -3) = unaff_XMM6_Dc;
  *(undefined4 *)((longlong)in_RAX + -0x14) = unaff_XMM6_Dd;
  *(undefined4 *)(in_RAX + -2) = unaff_XMM7_Da;
  *(undefined4 *)((longlong)in_RAX + -0xc) = unaff_XMM7_Db;
  *(undefined4 *)(in_RAX + -1) = unaff_XMM7_Dc;
  *(undefined4 *)((longlong)in_RAX + -4) = unaff_XMM7_Dd;
  *in_RAX = unaff_XMM8_Qa;
  in_RAX[1] = unaff_XMM8_Qb;
  in_RAX[2] = unaff_XMM9_Qa;
  in_RAX[3] = unaff_XMM9_Qb;
  in_RAX[4] = unaff_XMM10_Qa;
  in_RAX[5] = unaff_XMM10_Qb;
  in_RAX[6] = unaff_XMM11_Qa;
  in_RAX[7] = unaff_XMM11_Qb;
  in_RAX[8] = unaff_XMM12_Qa;
  in_RAX[9] = unaff_XMM12_Qb;
  *(undefined4 *)(in_RAX + 10) = unaff_XMM13_Da;
  *(undefined4 *)((longlong)in_RAX + 0x54) = unaff_XMM13_Db;
  *(undefined4 *)(in_RAX + 0xb) = unaff_XMM13_Dc;
  *(undefined4 *)((longlong)in_RAX + 0x5c) = unaff_XMM13_Dd;
  *(undefined4 *)(in_RAX + 0xc) = unaff_XMM14_Da;
  *(undefined4 *)((longlong)in_RAX + 100) = unaff_XMM14_Db;
  *(undefined4 *)(in_RAX + 0xd) = unaff_XMM14_Dc;
  *(undefined4 *)((longlong)in_RAX + 0x6c) = unaff_XMM14_Dd;
  in_RAX[0xe] = unaff_XMM15_Qa;
  in_RAX[0xf] = unaff_XMM15_Qb;
  uVar18 = 0;
  uVar19 = 0;
  uVar20 = 0;
  uVar21 = 0;
  uVar22 = 0;
  uVar23 = 0;
  uVar24 = 0;
  uVar25 = 0;
  uVar26 = 0;
  uVar27 = 0;
  uVar28 = 0;
  uVar29 = 0;
  uVar30 = 0;
  uVar31 = 0;
  uVar32 = 0;
  uVar33 = 0;
  lVar17 = 0x40;
  iVar34 = _L_One;
  iVar35 = _UNK_140e57044;
  iVar36 = _UNK_140e57048;
  iVar37 = _UNK_140e5704c;
  do {
    uVar13 = *param_2;
    puVar14 = param_2 + 1;
    puVar15 = param_2 + 2;
    puVar16 = param_2 + 3;
    puVar1 = param_2 + 4;
    puVar10 = param_2 + 5;
    puVar11 = param_2 + 6;
    puVar12 = param_2 + 7;
    uVar38 = -(uint)(iVar34 == param_3);
    uVar39 = -(uint)(iVar35 == param_3);
    uVar40 = -(uint)(iVar36 == param_3);
    uVar41 = -(uint)(iVar37 == param_3);
    puVar2 = param_2 + 8;
    puVar7 = param_2 + 9;
    puVar8 = param_2 + 10;
    puVar9 = param_2 + 0xb;
    puVar3 = param_2 + 0xc;
    puVar4 = param_2 + 0xd;
    puVar5 = param_2 + 0xe;
    puVar6 = param_2 + 0xf;
    param_2 = param_2 + 0x10;
    uVar18 = uVar18 | uVar13 & uVar38;
    uVar19 = uVar19 | *puVar14 & uVar39;
    uVar20 = uVar20 | *puVar15 & uVar40;
    uVar21 = uVar21 | *puVar16 & uVar41;
    uVar22 = uVar22 | *puVar1 & uVar38;
    uVar23 = uVar23 | *puVar10 & uVar39;
    uVar24 = uVar24 | *puVar11 & uVar40;
    uVar25 = uVar25 | *puVar12 & uVar41;
    uVar26 = uVar26 | *puVar2 & uVar38;
    uVar27 = uVar27 | *puVar7 & uVar39;
    uVar28 = uVar28 | *puVar8 & uVar40;
    uVar29 = uVar29 | *puVar9 & uVar41;
    uVar30 = uVar30 | *puVar3 & uVar38;
    uVar31 = uVar31 | *puVar4 & uVar39;
    uVar32 = uVar32 | *puVar5 & uVar40;
    uVar33 = uVar33 | *puVar6 & uVar41;
    lVar17 = lVar17 + -1;
    iVar34 = iVar34 + _L_One;
    iVar35 = iVar35 + _UNK_140e57044;
    iVar36 = iVar36 + _UNK_140e57048;
    iVar37 = iVar37 + _UNK_140e5704c;
  } while (lVar17 != 0);
  *param_1 = uVar18;
  param_1[1] = uVar19;
  param_1[2] = uVar20;
  param_1[3] = uVar21;
  param_1[4] = uVar22;
  param_1[5] = uVar23;
  param_1[6] = uVar24;
  param_1[7] = uVar25;
  param_1[8] = uVar26;
  param_1[9] = uVar27;
  param_1[10] = uVar28;
  param_1[0xb] = uVar29;
  param_1[0xc] = uVar30;
  param_1[0xd] = uVar31;
  param_1[0xe] = uVar32;
  param_1[0xf] = uVar33;
  return;
}

// L$SEH_begin_ecp_nistz256_avx2_gather_w5 @ 140e5914e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L_SEH_begin_ecp_nistz256_avx2_gather_w5
               (undefined1 (*param_1) [32],undefined1 (*param_2) [32],uint param_3)

{
  undefined1 (*pauVar1) [32];
  undefined1 (*pauVar2) [32];
  undefined1 (*pauVar3) [32];
  undefined1 (*pauVar4) [32];
  undefined1 (*pauVar5) [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined8 *in_RAX;
  longlong lVar15;
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined8 unaff_XMM7_Qa;
  undefined8 unaff_XMM7_Qb;
  undefined8 unaff_XMM8_Qa;
  undefined8 unaff_XMM8_Qb;
  undefined8 unaff_XMM9_Qa;
  undefined8 unaff_XMM9_Qb;
  undefined8 unaff_XMM10_Qa;
  undefined8 unaff_XMM10_Qb;
  undefined8 unaff_XMM11_Qa;
  undefined8 unaff_XMM11_Qb;
  undefined8 unaff_XMM12_Qa;
  undefined8 unaff_XMM12_Qb;
  undefined8 unaff_XMM13_Qa;
  undefined8 unaff_XMM13_Qb;
  undefined8 unaff_XMM14_Qa;
  undefined8 unaff_XMM14_Qb;
  undefined4 unaff_XMM15_Da;
  undefined4 unaff_XMM15_Db;
  undefined4 unaff_XMM15_Dc;
  undefined4 unaff_XMM15_Dd;
  
  in_RAX[-4] = unaff_XMM6_Qa;
  in_RAX[-3] = unaff_XMM6_Qb;
  in_RAX[-2] = unaff_XMM7_Qa;
  in_RAX[-1] = unaff_XMM7_Qb;
  *in_RAX = unaff_XMM8_Qa;
  in_RAX[1] = unaff_XMM8_Qb;
  in_RAX[2] = unaff_XMM9_Qa;
  in_RAX[3] = unaff_XMM9_Qb;
  in_RAX[4] = unaff_XMM10_Qa;
  in_RAX[5] = unaff_XMM10_Qb;
  in_RAX[6] = unaff_XMM11_Qa;
  in_RAX[7] = unaff_XMM11_Qb;
  in_RAX[8] = unaff_XMM12_Qa;
  in_RAX[9] = unaff_XMM12_Qb;
  in_RAX[10] = unaff_XMM13_Qa;
  in_RAX[0xb] = unaff_XMM13_Qb;
  in_RAX[0xc] = unaff_XMM14_Qa;
  in_RAX[0xd] = unaff_XMM14_Qb;
  *(undefined4 *)(in_RAX + 0xe) = unaff_XMM15_Da;
  *(undefined4 *)((longlong)in_RAX + 0x74) = unaff_XMM15_Db;
  *(undefined4 *)(in_RAX + 0xf) = unaff_XMM15_Dc;
  *(undefined4 *)((longlong)in_RAX + 0x7c) = unaff_XMM15_Dd;
  auVar16 = ZEXT3264((undefined1  [32])0x0);
  auVar17 = ZEXT3264((undefined1  [32])0x0);
  auVar18 = ZEXT3264((undefined1  [32])0x0);
  auVar10._4_4_ = _UNK_140e57064;
  auVar10._0_4_ = _L_Two;
  auVar10._8_4_ = _UNK_140e57068;
  auVar10._12_4_ = _UNK_140e5706c;
  auVar10._16_4_ = _UNK_140e57070;
  auVar10._20_4_ = _UNK_140e57074;
  auVar10._24_4_ = _UNK_140e57078;
  auVar10._28_4_ = _UNK_140e5707c;
  auVar14 = vpermd_avx2((undefined1  [32])0x0,ZEXT432(param_3));
  lVar15 = 8;
  auVar9 = _L_One;
  do {
    auVar6 = *param_2;
    pauVar1 = param_2 + 1;
    pauVar2 = param_2 + 2;
    pauVar3 = param_2 + 3;
    pauVar4 = param_2 + 4;
    pauVar5 = param_2 + 5;
    auVar12 = vpcmpeqd_avx2(auVar9,auVar14);
    auVar13 = vpcmpeqd_avx2(auVar10,auVar14);
    auVar7._0_4_ = auVar9._0_4_ + _L_Two;
    auVar7._4_4_ = auVar9._4_4_ + _UNK_140e57064;
    auVar7._8_4_ = auVar9._8_4_ + _UNK_140e57068;
    auVar7._12_4_ = auVar9._12_4_ + _UNK_140e5706c;
    auVar7._16_4_ = auVar9._16_4_ + _UNK_140e57070;
    auVar7._20_4_ = auVar9._20_4_ + _UNK_140e57074;
    auVar7._24_4_ = auVar9._24_4_ + _UNK_140e57078;
    auVar7._28_4_ = auVar9._28_4_ + _UNK_140e5707c;
    auVar8._0_4_ = auVar10._0_4_ + _L_Two;
    auVar8._4_4_ = auVar10._4_4_ + _UNK_140e57064;
    auVar8._8_4_ = auVar10._8_4_ + _UNK_140e57068;
    auVar8._12_4_ = auVar10._12_4_ + _UNK_140e5706c;
    auVar8._16_4_ = auVar10._16_4_ + _UNK_140e57070;
    auVar8._20_4_ = auVar10._20_4_ + _UNK_140e57074;
    auVar8._24_4_ = auVar10._24_4_ + _UNK_140e57078;
    auVar8._28_4_ = auVar10._28_4_ + _UNK_140e5707c;
    param_2 = param_2 + 6;
    auVar9 = vpand_avx2(auVar6,auVar12);
    auVar10 = vpand_avx2(*pauVar1,auVar12);
    auVar6 = vpand_avx2(*pauVar2,auVar12);
    auVar12 = vpand_avx2(*pauVar3,auVar13);
    auVar11 = vpand_avx2(*pauVar4,auVar13);
    auVar13 = vpand_avx2(*pauVar5,auVar13);
    auVar12 = auVar16._0_32_ ^ auVar9 ^ auVar12;
    auVar16 = ZEXT3264(auVar12);
    auVar11 = auVar17._0_32_ ^ auVar10 ^ auVar11;
    auVar17 = ZEXT3264(auVar11);
    auVar13 = auVar18._0_32_ ^ auVar6 ^ auVar13;
    auVar18 = ZEXT3264(auVar13);
    lVar15 = lVar15 + -1;
    auVar9 = auVar7;
    auVar10 = auVar8;
  } while (lVar15 != 0);
  *param_1 = auVar12;
  param_1[1] = auVar11;
  param_1[2] = auVar13;
  return;
}

// L$SEH_begin_ecp_nistz256_avx2_gather_w7 @ 140e592ae

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L_SEH_begin_ecp_nistz256_avx2_gather_w7
               (undefined1 (*param_1) [32],undefined1 (*param_2) [32],uint param_3)

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined8 *in_RAX;
  longlong lVar11;
  undefined1 (*pauVar12) [32];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined8 unaff_XMM7_Qa;
  undefined8 unaff_XMM7_Qb;
  undefined8 unaff_XMM8_Qa;
  undefined8 unaff_XMM8_Qb;
  undefined8 unaff_XMM9_Qa;
  undefined8 unaff_XMM9_Qb;
  undefined8 unaff_XMM10_Qa;
  undefined8 unaff_XMM10_Qb;
  undefined8 unaff_XMM11_Qa;
  undefined8 unaff_XMM11_Qb;
  undefined8 unaff_XMM12_Qa;
  undefined8 unaff_XMM12_Qb;
  undefined8 unaff_XMM13_Qa;
  undefined8 unaff_XMM13_Qb;
  undefined8 unaff_XMM14_Qa;
  undefined8 unaff_XMM14_Qb;
  undefined8 unaff_XMM15_Qa;
  undefined8 unaff_XMM15_Qb;
  
  in_RAX[-4] = unaff_XMM6_Qa;
  in_RAX[-3] = unaff_XMM6_Qb;
  in_RAX[-2] = unaff_XMM7_Qa;
  in_RAX[-1] = unaff_XMM7_Qb;
  *in_RAX = unaff_XMM8_Qa;
  in_RAX[1] = unaff_XMM8_Qb;
  in_RAX[2] = unaff_XMM9_Qa;
  in_RAX[3] = unaff_XMM9_Qb;
  in_RAX[4] = unaff_XMM10_Qa;
  in_RAX[5] = unaff_XMM10_Qb;
  in_RAX[6] = unaff_XMM11_Qa;
  in_RAX[7] = unaff_XMM11_Qb;
  in_RAX[8] = unaff_XMM12_Qa;
  in_RAX[9] = unaff_XMM12_Qb;
  in_RAX[10] = unaff_XMM13_Qa;
  in_RAX[0xb] = unaff_XMM13_Qb;
  in_RAX[0xc] = unaff_XMM14_Qa;
  in_RAX[0xd] = unaff_XMM14_Qb;
  in_RAX[0xe] = unaff_XMM15_Qa;
  in_RAX[0xf] = unaff_XMM15_Qb;
  auVar13 = ZEXT3264((undefined1  [32])0x0);
  auVar14 = ZEXT3264((undefined1  [32])0x0);
  auVar5._4_4_ = _UNK_140e57084;
  auVar5._0_4_ = _L_Three;
  auVar5._8_4_ = _UNK_140e57088;
  auVar5._12_4_ = _UNK_140e5708c;
  auVar5._16_4_ = _UNK_140e57090;
  auVar5._20_4_ = _UNK_140e57094;
  auVar5._24_4_ = _UNK_140e57098;
  auVar5._28_4_ = _UNK_140e5709c;
  auVar10 = vpermd_avx2((undefined1  [32])0x0,ZEXT432(param_3));
  lVar11 = 0x15;
  auVar4 = _L_Two;
  auVar2 = _L_One;
  do {
    pauVar12 = param_2;
    auVar7 = vpcmpeqd_avx2(auVar2,auVar10);
    auVar8 = vpcmpeqd_avx2(auVar4,auVar10);
    auVar9 = vpcmpeqd_avx2(auVar5,auVar10);
    auVar1._0_4_ = auVar2._0_4_ + _L_Three;
    auVar1._4_4_ = auVar2._4_4_ + _UNK_140e57084;
    auVar1._8_4_ = auVar2._8_4_ + _UNK_140e57088;
    auVar1._12_4_ = auVar2._12_4_ + _UNK_140e5708c;
    auVar1._16_4_ = auVar2._16_4_ + _UNK_140e57090;
    auVar1._20_4_ = auVar2._20_4_ + _UNK_140e57094;
    auVar1._24_4_ = auVar2._24_4_ + _UNK_140e57098;
    auVar1._28_4_ = auVar2._28_4_ + _UNK_140e5709c;
    auVar2._0_4_ = auVar4._0_4_ + _L_Three;
    auVar2._4_4_ = auVar4._4_4_ + _UNK_140e57084;
    auVar2._8_4_ = auVar4._8_4_ + _UNK_140e57088;
    auVar2._12_4_ = auVar4._12_4_ + _UNK_140e5708c;
    auVar2._16_4_ = auVar4._16_4_ + _UNK_140e57090;
    auVar2._20_4_ = auVar4._20_4_ + _UNK_140e57094;
    auVar2._24_4_ = auVar4._24_4_ + _UNK_140e57098;
    auVar2._28_4_ = auVar4._28_4_ + _UNK_140e5709c;
    auVar3._0_4_ = auVar5._0_4_ + _L_Three;
    auVar3._4_4_ = auVar5._4_4_ + _UNK_140e57084;
    auVar3._8_4_ = auVar5._8_4_ + _UNK_140e57088;
    auVar3._12_4_ = auVar5._12_4_ + _UNK_140e5708c;
    auVar3._16_4_ = auVar5._16_4_ + _UNK_140e57090;
    auVar3._20_4_ = auVar5._20_4_ + _UNK_140e57094;
    auVar3._24_4_ = auVar5._24_4_ + _UNK_140e57098;
    auVar3._28_4_ = auVar5._28_4_ + _UNK_140e5709c;
    auVar4 = vpand_avx2(*pauVar12,auVar7);
    auVar5 = vpand_avx2(pauVar12[1],auVar7);
    auVar7 = vpand_avx2(pauVar12[2],auVar8);
    auVar8 = vpand_avx2(pauVar12[3],auVar8);
    auVar6 = vpand_avx2(pauVar12[4],auVar9);
    auVar9 = vpand_avx2(pauVar12[5],auVar9);
    auVar6 = auVar13._0_32_ ^ auVar4 ^ auVar7 ^ auVar6;
    auVar13 = ZEXT3264(auVar6);
    auVar9 = auVar14._0_32_ ^ auVar5 ^ auVar8 ^ auVar9;
    auVar14 = ZEXT3264(auVar9);
    lVar11 = lVar11 + -1;
    param_2 = pauVar12 + 6;
    auVar4 = auVar2;
    auVar5 = auVar3;
    auVar2 = auVar1;
  } while (lVar11 != 0);
  auVar4 = vpcmpeqd_avx2(auVar1,auVar10);
  auVar10 = vpand_avx2(pauVar12[6],auVar4);
  auVar4 = vpand_avx2(pauVar12[7],auVar4);
  *param_1 = auVar6 ^ auVar10;
  param_1[1] = auVar9 ^ auVar4;
  return;
}

// __ecp_nistz256_add_toq @ 140e59420

void __ecp_nistz256_add_toq
               (undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  longlong lVar4;
  ulonglong *unaff_RBX;
  longlong *unaff_RDI;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong unaff_R12;
  longlong lVar9;
  ulonglong unaff_R13;
  ulonglong uVar10;
  ulonglong unaff_R14;
  ulonglong unaff_R15;
  
  lVar9 = unaff_R12 + *unaff_RBX;
  uVar8 = unaff_R13 + unaff_RBX[1];
  uVar10 = uVar8 + CARRY8(unaff_R12,*unaff_RBX);
  uVar8 = (ulonglong)
          (CARRY8(unaff_R13,unaff_RBX[1]) || CARRY8(uVar8,(ulonglong)CARRY8(unaff_R12,*unaff_RBX)));
  uVar6 = param_3 + unaff_RBX[2];
  uVar5 = uVar6 + uVar8;
  uVar8 = (ulonglong)(CARRY8(param_3,unaff_RBX[2]) || CARRY8(uVar6,uVar8));
  uVar6 = param_4 + unaff_RBX[3];
  uVar7 = uVar6 + uVar8;
  uVar1 = (ulonglong)(uVar10 < unaff_R14 || uVar10 - unaff_R14 < (ulonglong)(lVar9 != -1));
  uVar2 = (ulonglong)(uVar5 < uVar1);
  bVar3 = (CARRY8(param_4,unaff_RBX[3]) || CARRY8(uVar6,uVar8)) <
          (uVar7 < unaff_R15 || uVar7 - unaff_R15 < uVar2);
  uVar8 = (uVar10 - unaff_R14) - (ulonglong)(lVar9 != -1);
  lVar4 = lVar9 + 1;
  if (bVar3) {
    uVar8 = uVar10;
    lVar4 = lVar9;
  }
  *unaff_RDI = lVar4;
  uVar6 = uVar5 - uVar1;
  if (bVar3) {
    uVar6 = uVar5;
  }
  unaff_RDI[1] = uVar8;
  uVar8 = (uVar7 - unaff_R15) - uVar2;
  if (bVar3) {
    uVar8 = uVar7;
  }
  unaff_RDI[2] = uVar6;
  unaff_RDI[3] = uVar8;
  return;
}

// __ecp_nistz256_sub_fromq @ 140e59480

void __ecp_nistz256_sub_fromq
               (undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  bool bVar2;
  ulonglong *unaff_RBX;
  longlong *unaff_RDI;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong unaff_R12;
  longlong lVar6;
  ulonglong unaff_R13;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong unaff_R14;
  longlong unaff_R15;
  bool bVar9;
  
  lVar6 = unaff_R12 - *unaff_RBX;
  uVar1 = unaff_R13 - unaff_RBX[1];
  uVar7 = uVar1 - (unaff_R12 < *unaff_RBX);
  uVar1 = (ulonglong)(unaff_R13 < unaff_RBX[1] || uVar1 < (unaff_R12 < *unaff_RBX));
  uVar8 = param_3 - unaff_RBX[2];
  uVar3 = uVar8 - uVar1;
  uVar1 = (ulonglong)(param_3 < unaff_RBX[2] || uVar8 < uVar1);
  bVar9 = unaff_RBX[3] <= param_4;
  param_4 = param_4 - unaff_RBX[3];
  bVar2 = uVar1 <= param_4;
  lVar4 = param_4 - uVar1;
  uVar1 = (ulonglong)(CARRY8(uVar7,unaff_R14) || CARRY8(uVar7 + unaff_R14,(ulonglong)(lVar6 != 0)));
  uVar8 = uVar7 + unaff_R14 + (ulonglong)(lVar6 != 0);
  lVar5 = lVar6 + -1;
  if (bVar9 && bVar2) {
    uVar8 = uVar7;
    lVar5 = lVar6;
  }
  *unaff_RDI = lVar5;
  uVar7 = uVar3 + uVar1;
  if (bVar9 && bVar2) {
    uVar7 = uVar3;
  }
  unaff_RDI[1] = uVar8;
  lVar5 = lVar4 + unaff_R15 + (ulonglong)CARRY8(uVar3,uVar1);
  if (bVar9 && bVar2) {
    lVar5 = lVar4;
  }
  unaff_RDI[2] = uVar7;
  unaff_RDI[3] = lVar5;
  return;
}

// __ecp_nistz256_subq @ 140e594e0

longlong __ecp_nistz256_subq(void)

{
  longlong in_RAX;
  longlong unaff_R12;
  
  return (in_RAX - unaff_R12) + -1;
}

// __ecp_nistz256_mul_by_2q @ 140e59520

void __ecp_nistz256_mul_by_2q
               (undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *unaff_RDI;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong unaff_R12;
  ulonglong unaff_R13;
  ulonglong uVar9;
  ulonglong unaff_R14;
  ulonglong unaff_R15;
  
  lVar3 = unaff_R12 * 2;
  uVar9 = unaff_R13 * 2 + (ulonglong)CARRY8(unaff_R12,unaff_R12);
  uVar8 = (ulonglong)
          (CARRY8(unaff_R13,unaff_R13) ||
          CARRY8(unaff_R13 * 2,(ulonglong)CARRY8(unaff_R12,unaff_R12)));
  uVar5 = param_3 * 2 + uVar8;
  uVar8 = (ulonglong)(CARRY8(param_3,param_3) || CARRY8(param_3 * 2,uVar8));
  uVar7 = param_4 * 2 + uVar8;
  uVar6 = (ulonglong)(uVar9 < unaff_R14 || uVar9 - unaff_R14 < (ulonglong)(lVar3 != -1));
  uVar1 = (ulonglong)(uVar5 < uVar6);
  bVar2 = (CARRY8(param_4,param_4) || CARRY8(param_4 * 2,uVar8)) <
          (uVar7 < unaff_R15 || uVar7 - unaff_R15 < uVar1);
  uVar8 = (uVar9 - unaff_R14) - (ulonglong)(lVar3 != -1);
  lVar4 = lVar3 + 1;
  if (bVar2) {
    uVar8 = uVar9;
    lVar4 = lVar3;
  }
  *unaff_RDI = lVar4;
  uVar6 = uVar5 - uVar6;
  if (bVar2) {
    uVar6 = uVar5;
  }
  unaff_RDI[1] = uVar8;
  uVar8 = (uVar7 - unaff_R15) - uVar1;
  if (bVar2) {
    uVar8 = uVar7;
  }
  unaff_RDI[2] = uVar6;
  unaff_RDI[3] = uVar8;
  return;
}

// ecp_nistz256_point_double @ 140e59580

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ecp_nistz256_point_double(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  ulonglong unaff_RBP;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong *puVar9;
  undefined1 auStack_158 [120];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulonglong uStack_d0;
  ulonglong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulonglong uStack_78;
  undefined1 *puStack_70;
  ulonglong uStack_68;
  ulonglong uStack_60;
  
  if ((_DAT_15540a9f8 & 0x80100) != 0x80100) {
    uStack_78 = *param_2;
    puStack_70 = (undefined1 *)param_2[1];
    uStack_68 = param_2[2];
    uStack_60 = param_2[3];
    puVar9 = (ulonglong *)(param_1 + 0x20);
    uStack_e0 = 0x140e59611;
    __ecp_nistz256_mul_by_2q(param_1,puVar9,param_1 + 0x40,param_2[7]);
    uStack_e0 = 0x140e5962f;
    __ecp_nistz256_sqr_montq();
    uStack_e0 = 0x140e5964f;
    __ecp_nistz256_sqr_montq();
    uStack_e0 = 0x140e59675;
    __ecp_nistz256_mul_montq();
    uStack_e0 = 0x140e5967a;
    __ecp_nistz256_mul_by_2q();
    uStack_e0 = 0x140e5969d;
    __ecp_nistz256_add_toq();
    puVar5 = puStack_70;
    uVar7 = uStack_78;
    uStack_e0 = 0x140e596c0;
    __ecp_nistz256_sub_fromq();
    uStack_e0 = 0x140e596e1;
    __ecp_nistz256_sqr_montq();
    uVar1 = (ulonglong)
            (CARRY8((ulonglong)puVar5,(ulonglong)&uStack_d8) ||
            CARRY8((longlong)&uStack_d8 + (longlong)puVar5,(ulonglong)(uVar7 != 0)));
    uVar2 = (ulonglong)CARRY8(uStack_d0,uVar1);
    uVar6 = (ulonglong)(CARRY8(uStack_c8,unaff_RBP) || CARRY8(uStack_c8 + unaff_RBP,uVar2));
    uVar2 = uStack_c8 + unaff_RBP + uVar2;
    uVar1 = uStack_d0 + uVar1;
    puVar3 = (undefined1 *)((longlong)&uStack_d8 + (longlong)puVar5 + (ulonglong)(uVar7 != 0));
    uVar4 = uVar7 - 1;
    if ((uVar7 & 1) == 0) {
      uVar6 = 0;
      uVar2 = uStack_c8;
      uVar1 = uStack_d0;
      puVar3 = puVar5;
      uVar4 = uVar7;
    }
    uVar7 = (ulonglong)puVar3 >> 1 | uVar1 << 0x3f;
    *puVar9 = uVar4 >> 1 | (longlong)puVar3 << 0x3f;
    puVar9[1] = uVar7;
    puVar9[2] = uVar1 >> 1 | uVar2 << 0x3f;
    puVar9[3] = uVar2 >> 1 | uVar6 << 0x3f;
    uStack_e0 = 0x140e5978c;
    __ecp_nistz256_mul_montq();
    uStack_e0 = 0x140e59799;
    __ecp_nistz256_mul_by_2q();
    uStack_e0 = 0x140e597a8;
    __ecp_nistz256_add_toq();
    uStack_e0 = 0x140e597d2;
    __ecp_nistz256_mul_montq();
    uStack_e0 = 0x140e597df;
    __ecp_nistz256_mul_by_2q();
    uStack_e0 = 0x140e59802;
    __ecp_nistz256_sqr_montq();
    uStack_e0 = 0x140e5981b;
    __ecp_nistz256_sub_fromq();
    uStack_e0 = 0x140e59837;
    __ecp_nistz256_subq();
    uStack_d8 = uStack_c0;
    uStack_e0 = 0x140e59874;
    uStack_d0 = uVar7;
    __ecp_nistz256_mul_montq();
    uStack_e0 = 0x140e59883;
    __ecp_nistz256_sub_fromq();
    return;
  }
  uStack_78 = *param_2;
  puStack_70 = (undefined1 *)param_2[1];
  uStack_68 = param_2[2];
  uStack_60 = param_2[3];
  puVar9 = (ulonglong *)(param_1 + 0x20);
  uStack_e0 = 0x140e5a7ba;
  uVar8 = __ecp_nistz256_mul_by_2x(param_1,puVar9,param_1 + 0x40,param_2[7]);
  uStack_e0 = 0x140e5a7d8;
  uVar8 = __ecp_nistz256_sqr_montx(uVar8,param_2[8],param_2[0xb]);
  uStack_e0 = 0x140e5a7f9;
  uVar8 = __ecp_nistz256_sqr_montx(uVar8,uStack_d8,uStack_c0);
  uStack_e0 = 0x140e5a81f;
  __ecp_nistz256_mul_montx(uVar8,param_2[4]);
  uStack_e0 = 0x140e5a824;
  __ecp_nistz256_mul_by_2x();
  uStack_e0 = 0x140e5a847;
  __ecp_nistz256_add_tox();
  puVar5 = puStack_70;
  uVar7 = uStack_78;
  uStack_e0 = 0x140e5a86a;
  uVar8 = __ecp_nistz256_sub_fromx();
  uStack_e0 = 0x140e5a88c;
  __ecp_nistz256_sqr_montx(uVar8,uStack_d8,uStack_c0);
  uVar1 = (ulonglong)
          (CARRY8((ulonglong)puVar5,(ulonglong)auStack_158) ||
          CARRY8((ulonglong)(puVar5 + (longlong)auStack_158),(ulonglong)(uVar7 != 0)));
  uVar2 = (ulonglong)CARRY8(uStack_d0,uVar1);
  uVar6 = (ulonglong)(CARRY8(uStack_c8,unaff_RBP) || CARRY8(uStack_c8 + unaff_RBP,uVar2));
  uVar2 = uStack_c8 + unaff_RBP + uVar2;
  uVar1 = uStack_d0 + uVar1;
  puVar3 = puVar5 + (longlong)auStack_158 + (uVar7 != 0);
  uVar4 = uVar7 - 1;
  if ((uVar7 & 1) == 0) {
    uVar6 = 0;
    uVar2 = uStack_c8;
    uVar1 = uStack_d0;
    puVar3 = puVar5;
    uVar4 = uVar7;
  }
  uVar7 = (ulonglong)puVar3 >> 1 | uVar1 << 0x3f;
  *puVar9 = uVar4 >> 1 | (longlong)puVar3 << 0x3f;
  puVar9[1] = uVar7;
  puVar9[2] = uVar1 >> 1 | uVar2 << 0x3f;
  puVar9[3] = uVar2 >> 1 | uVar6 << 0x3f;
  uStack_e0 = 0x140e5a937;
  __ecp_nistz256_mul_montx(uVar2 << 0x3f,uStack_98,uStack_c8,uStack_b8);
  uStack_e0 = 0x140e5a944;
  __ecp_nistz256_mul_by_2x();
  uStack_e0 = 0x140e5a953;
  uVar8 = __ecp_nistz256_add_tox();
  uStack_e0 = 0x140e5a97e;
  __ecp_nistz256_mul_montx(uVar8,uStack_78);
  uStack_e0 = 0x140e5a98b;
  uVar8 = __ecp_nistz256_mul_by_2x();
  uStack_e0 = 0x140e5a9ae;
  __ecp_nistz256_sqr_montx(uVar8,uStack_b8,uStack_a0);
  uStack_e0 = 0x140e5a9c7;
  __ecp_nistz256_sub_fromx();
  uStack_e0 = 0x140e5a9e3;
  __ecp_nistz256_subx();
  uStack_d8 = uStack_c0;
  uStack_e0 = 0x140e5aa21;
  uStack_d0 = uVar7;
  __ecp_nistz256_mul_montx(0,uStack_b8);
  uStack_e0 = 0x140e5aa30;
  __ecp_nistz256_sub_fromx();
  return;
}

// L$SEH_begin_ecp_nistz256_point_double @ 140e5958d

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L_SEH_begin_ecp_nistz256_point_double(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  ulonglong unaff_RBP;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong *puVar9;
  undefined1 auStack_158 [120];
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_a0;
  undefined8 local_98;
  ulonglong local_78;
  undefined1 *puStack_70;
  ulonglong local_68;
  ulonglong uStack_60;
  
  if ((_DAT_15540a9f8 & 0x80100) != 0x80100) {
    local_78 = *param_2;
    puStack_70 = (undefined1 *)param_2[1];
    local_68 = param_2[2];
    uStack_60 = param_2[3];
    puVar9 = (ulonglong *)(param_1 + 0x20);
    uStack_e0 = 0x140e59611;
    __ecp_nistz256_mul_by_2q(param_1,puVar9,param_1 + 0x40,param_2[7]);
    uStack_e0 = 0x140e5962f;
    __ecp_nistz256_sqr_montq();
    uStack_e0 = 0x140e5964f;
    __ecp_nistz256_sqr_montq();
    uStack_e0 = 0x140e59675;
    __ecp_nistz256_mul_montq();
    uStack_e0 = 0x140e5967a;
    __ecp_nistz256_mul_by_2q();
    uStack_e0 = 0x140e5969d;
    __ecp_nistz256_add_toq();
    puVar5 = puStack_70;
    uVar7 = local_78;
    uStack_e0 = 0x140e596c0;
    __ecp_nistz256_sub_fromq();
    uStack_e0 = 0x140e596e1;
    __ecp_nistz256_sqr_montq();
    uVar1 = (ulonglong)
            (CARRY8((ulonglong)puVar5,(ulonglong)&local_d8) ||
            CARRY8((longlong)&local_d8 + (longlong)puVar5,(ulonglong)(uVar7 != 0)));
    uVar2 = (ulonglong)CARRY8(local_d0,uVar1);
    uVar6 = (ulonglong)(CARRY8(local_c8,unaff_RBP) || CARRY8(local_c8 + unaff_RBP,uVar2));
    uVar2 = local_c8 + unaff_RBP + uVar2;
    uVar1 = local_d0 + uVar1;
    puVar3 = (undefined1 *)((longlong)&local_d8 + (longlong)puVar5 + (ulonglong)(uVar7 != 0));
    uVar4 = uVar7 - 1;
    if ((uVar7 & 1) == 0) {
      uVar6 = 0;
      uVar2 = local_c8;
      uVar1 = local_d0;
      puVar3 = puVar5;
      uVar4 = uVar7;
    }
    uVar7 = (ulonglong)puVar3 >> 1 | uVar1 << 0x3f;
    *puVar9 = uVar4 >> 1 | (longlong)puVar3 << 0x3f;
    puVar9[1] = uVar7;
    puVar9[2] = uVar1 >> 1 | uVar2 << 0x3f;
    puVar9[3] = uVar2 >> 1 | uVar6 << 0x3f;
    uStack_e0 = 0x140e5978c;
    __ecp_nistz256_mul_montq();
    uStack_e0 = 0x140e59799;
    __ecp_nistz256_mul_by_2q();
    uStack_e0 = 0x140e597a8;
    __ecp_nistz256_add_toq();
    uStack_e0 = 0x140e597d2;
    __ecp_nistz256_mul_montq();
    uStack_e0 = 0x140e597df;
    __ecp_nistz256_mul_by_2q();
    uStack_e0 = 0x140e59802;
    __ecp_nistz256_sqr_montq();
    uStack_e0 = 0x140e5981b;
    __ecp_nistz256_sub_fromq();
    uStack_e0 = 0x140e59837;
    __ecp_nistz256_subq();
    local_d8 = local_c0;
    uStack_e0 = 0x140e59874;
    local_d0 = uVar7;
    __ecp_nistz256_mul_montq();
    uStack_e0 = 0x140e59883;
    __ecp_nistz256_sub_fromq();
    return;
  }
  local_78 = *param_2;
  puStack_70 = (undefined1 *)param_2[1];
  local_68 = param_2[2];
  uStack_60 = param_2[3];
  puVar9 = (ulonglong *)(param_1 + 0x20);
  uStack_e0 = 0x140e5a7ba;
  uVar8 = __ecp_nistz256_mul_by_2x(param_1,puVar9,param_1 + 0x40,param_2[7]);
  uStack_e0 = 0x140e5a7d8;
  uVar8 = __ecp_nistz256_sqr_montx(uVar8,param_2[8],param_2[0xb]);
  uStack_e0 = 0x140e5a7f9;
  uVar8 = __ecp_nistz256_sqr_montx(uVar8,local_d8,local_c0);
  uStack_e0 = 0x140e5a81f;
  __ecp_nistz256_mul_montx(uVar8,param_2[4]);
  uStack_e0 = 0x140e5a824;
  __ecp_nistz256_mul_by_2x();
  uStack_e0 = 0x140e5a847;
  __ecp_nistz256_add_tox();
  puVar5 = puStack_70;
  uVar7 = local_78;
  uStack_e0 = 0x140e5a86a;
  uVar8 = __ecp_nistz256_sub_fromx();
  uStack_e0 = 0x140e5a88c;
  __ecp_nistz256_sqr_montx(uVar8,local_d8,local_c0);
  uVar1 = (ulonglong)
          (CARRY8((ulonglong)puVar5,(ulonglong)auStack_158) ||
          CARRY8((ulonglong)(puVar5 + (longlong)auStack_158),(ulonglong)(uVar7 != 0)));
  uVar2 = (ulonglong)CARRY8(local_d0,uVar1);
  uVar6 = (ulonglong)(CARRY8(local_c8,unaff_RBP) || CARRY8(local_c8 + unaff_RBP,uVar2));
  uVar2 = local_c8 + unaff_RBP + uVar2;
  uVar1 = local_d0 + uVar1;
  puVar3 = puVar5 + (longlong)auStack_158 + (uVar7 != 0);
  uVar4 = uVar7 - 1;
  if ((uVar7 & 1) == 0) {
    uVar6 = 0;
    uVar2 = local_c8;
    uVar1 = local_d0;
    puVar3 = puVar5;
    uVar4 = uVar7;
  }
  uVar7 = (ulonglong)puVar3 >> 1 | uVar1 << 0x3f;
  *puVar9 = uVar4 >> 1 | (longlong)puVar3 << 0x3f;
  puVar9[1] = uVar7;
  puVar9[2] = uVar1 >> 1 | uVar2 << 0x3f;
  puVar9[3] = uVar2 >> 1 | uVar6 << 0x3f;
  uStack_e0 = 0x140e5a937;
  __ecp_nistz256_mul_montx(uVar2 << 0x3f,local_98,local_c8,local_b8);
  uStack_e0 = 0x140e5a944;
  __ecp_nistz256_mul_by_2x();
  uStack_e0 = 0x140e5a953;
  uVar8 = __ecp_nistz256_add_tox();
  uStack_e0 = 0x140e5a97e;
  __ecp_nistz256_mul_montx(uVar8,local_78);
  uStack_e0 = 0x140e5a98b;
  uVar8 = __ecp_nistz256_mul_by_2x();
  uStack_e0 = 0x140e5a9ae;
  __ecp_nistz256_sqr_montx(uVar8,local_b8,local_a0);
  uStack_e0 = 0x140e5a9c7;
  __ecp_nistz256_sub_fromx();
  uStack_e0 = 0x140e5a9e3;
  __ecp_nistz256_subx();
  local_d8 = local_c0;
  uStack_e0 = 0x140e5aa21;
  local_d0 = uVar7;
  __ecp_nistz256_mul_montx(0,local_b8);
  uStack_e0 = 0x140e5aa30;
  __ecp_nistz256_sub_fromx();
  return;
}

// ecp_nistz256_point_add @ 140e598c0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ecp_nistz256_point_add(undefined8 param_1,ulonglong *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  ulonglong uVar31;
  undefined1 *puVar32;
  ulonglong unaff_RBP;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  undefined8 uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong unaff_R13;
  ulonglong uVar39;
  longlong lVar40;
  undefined1 (*pauVar41) [16];
  undefined8 uVar42;
  undefined8 uVar43;
  ulonglong *puVar44;
  undefined1 auVar45 [16];
  uint uVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  uint uVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined8 uStack_278;
  ulonglong uStack_270;
  ulonglong uStack_268;
  ulonglong uStack_260;
  ulonglong uStack_258;
  ulonglong uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_208;
  undefined8 uStack_1f8;
  undefined8 uStack_1d8;
  undefined8 uStack_1a8;
  ulonglong uStack_178;
  ulonglong uStack_160;
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [16];
  longlong lStack_138;
  ulonglong uStack_130;
  ulonglong uStack_128;
  ulonglong uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [16];
  ulonglong uStack_f8;
  ulonglong uStack_f0;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  ulonglong uStack_d8;
  ulonglong uStack_d0;
  ulonglong uStack_c8;
  ulonglong uStack_c0;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulonglong uStack_78;
  undefined1 *puStack_70;
  ulonglong uStack_68;
  ulonglong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((_DAT_15540a9f8 & 0x80100) == 0x80100) {
    uStack_f8 = *param_2;
    uStack_f0 = param_2[1];
    uStack_e8 = param_2[2];
    uStack_e0 = param_2[3];
    uStack_d8 = param_2[4];
    uStack_d0 = param_2[5];
    uStack_c8 = param_2[6];
    uStack_c0 = param_2[7];
    uStack_b8 = (uint)param_2[8];
    uStack_b4 = *(uint *)((longlong)param_2 + 0x44);
    uStack_b0 = (uint)param_2[9];
    uStack_ac = *(uint *)((longlong)param_2 + 0x4c);
    uStack_a8 = (uint)param_2[10];
    uStack_a4 = *(uint *)((longlong)param_2 + 0x54);
    uStack_a0 = (uint)param_2[0xb];
    uStack_9c = *(uint *)((longlong)param_2 + 0x5c);
    uStack_98 = *param_3;
    uStack_90 = param_3[1];
    uStack_88 = param_3[2];
    uStack_80 = param_3[3];
    uStack_78 = param_3[4];
    puStack_70 = (undefined1 *)param_3[5];
    uStack_68 = param_3[6];
    uStack_60 = param_3[7];
    uStack_58 = param_3[8];
    uStack_50 = param_3[9];
    uStack_48 = param_3[10];
    uStack_40 = param_3[0xb];
    uVar51 = uStack_a8 | uStack_b8 | uStack_a4 | uStack_b4 |
             uStack_a0 | uStack_b0 | uStack_9c | uStack_ac;
    uVar46 = 0;
    auVar45 = *(undefined1 (*) [16])(param_3 + 10) | *(undefined1 (*) [16])(param_3 + 8);
    uVar43 = __ecp_nistz256_sqr_montx(param_1);
    auVar53._0_4_ = -(uint)(uVar51 == uVar46);
    auVar49._4_4_ = auVar45._0_4_;
    auVar49._0_4_ = auVar45._4_4_;
    auVar49._8_4_ = auVar45._12_4_;
    auVar49._12_4_ = auVar45._8_4_;
    auVar53._4_4_ = auVar53._0_4_;
    auVar53._8_4_ = auVar53._0_4_;
    auVar53._12_4_ = auVar53._0_4_;
    auVar50._0_4_ = -(uint)(SUB164(auVar49 | auVar45,0) == 0 && SUB164(auVar49 | auVar45,8) == 0);
    auVar50._4_4_ = auVar50._0_4_;
    auVar50._8_4_ = auVar50._0_4_;
    auVar50._12_4_ = auVar50._0_4_;
    uVar34 = param_2[0xb];
    uVar43 = __ecp_nistz256_sqr_montx(uVar43,param_2[8]);
    uVar43 = __ecp_nistz256_mul_montx(uVar43,uStack_58);
    uVar43 = __ecp_nistz256_mul_montx(uVar43,CONCAT44(uStack_b4,uStack_b8));
    uVar43 = __ecp_nistz256_mul_montx(uVar43,uStack_d8);
    __ecp_nistz256_mul_montx(uVar43,uStack_78);
    uVar43 = __ecp_nistz256_sub_fromx();
    uStack_178 = uStack_160 | unaff_R13 | uVar34 | uStack_178;
    auVar45 = auVar50 | auVar53;
    uVar43 = __ecp_nistz256_mul_montx(uVar43,uStack_f8,auVar45._0_8_,uStack_218);
    uVar37 = uStack_258;
    __ecp_nistz256_mul_montx(uVar43,uStack_98);
    lVar40 = __ecp_nistz256_sub_fromx();
    if (((((uStack_240 == 0 && unaff_R13 == 0) && uVar34 == 0) && uVar37 == 0) && auVar45._0_8_ == 0
        ) && uStack_178 == 0) {
      uStack_78 = *param_2;
      puStack_70 = (undefined1 *)param_2[1];
      uStack_68 = param_2[2];
      uStack_60 = param_2[3];
      puVar44 = (ulonglong *)(lVar40 + 0x20);
      uStack_e0 = 0x140e5a7ba;
      uVar43 = __ecp_nistz256_mul_by_2x(lVar40,puVar44,lVar40 + 0x40,param_2[7]);
      uStack_e0 = 0x140e5a7d8;
      uVar43 = __ecp_nistz256_sqr_montx(uVar43,param_2[8],param_2[0xb]);
      uStack_e0 = 0x140e5a7f9;
      uVar43 = __ecp_nistz256_sqr_montx(uVar43,uStack_d8,uStack_c0);
      uStack_e0 = 0x140e5a81f;
      __ecp_nistz256_mul_montx(uVar43,param_2[4]);
      uStack_e0 = 0x140e5a824;
      __ecp_nistz256_mul_by_2x();
      uStack_e0 = 0x140e5a847;
      __ecp_nistz256_add_tox();
      puVar32 = puStack_70;
      uVar31 = uStack_78;
      uStack_e0 = 0x140e5a86a;
      uVar43 = __ecp_nistz256_sub_fromx();
      uVar39 = uStack_c8;
      uVar38 = uStack_d0;
      uStack_e0 = 0x140e5a88c;
      __ecp_nistz256_sqr_montx(uVar43,uStack_d8,uStack_c0);
      uVar34 = (ulonglong)
               (CARRY8((ulonglong)puVar32,(ulonglong)auStack_158) ||
               CARRY8((ulonglong)(puVar32 + (longlong)auStack_158),(ulonglong)(uVar31 != 0)));
      uVar37 = (ulonglong)CARRY8(uVar38,uVar34);
      uVar35 = (ulonglong)(CARRY8(uVar39,unaff_RBP) || CARRY8(uVar39 + unaff_RBP,uVar37));
      uVar37 = uVar39 + unaff_RBP + uVar37;
      uVar34 = uVar38 + uVar34;
      puVar1 = puVar32 + (longlong)auStack_158 + (uVar31 != 0);
      uVar33 = uVar31 - 1;
      if ((uVar31 & 1) == 0) {
        uVar35 = 0;
        uVar37 = uVar39;
        uVar34 = uVar38;
        puVar1 = puVar32;
        uVar33 = uVar31;
      }
      uVar38 = (ulonglong)puVar1 >> 1 | uVar34 << 0x3f;
      *puVar44 = uVar33 >> 1 | (longlong)puVar1 << 0x3f;
      puVar44[1] = uVar38;
      puVar44[2] = uVar34 >> 1 | uVar37 << 0x3f;
      puVar44[3] = uVar37 >> 1 | uVar35 << 0x3f;
      uStack_e0 = 0x140e5a937;
      __ecp_nistz256_mul_montx(uVar37 << 0x3f,uStack_98,uVar39,CONCAT44(uStack_b4,uStack_b8));
      uStack_e0 = 0x140e5a944;
      __ecp_nistz256_mul_by_2x();
      uStack_e0 = 0x140e5a953;
      uVar43 = __ecp_nistz256_add_tox();
      uVar34 = uStack_c0;
      uStack_e0 = 0x140e5a97e;
      __ecp_nistz256_mul_montx(uVar43,uStack_78);
      uStack_e0 = 0x140e5a98b;
      uVar42 = __ecp_nistz256_mul_by_2x();
      uVar43 = CONCAT44(uStack_ac,uStack_b0);
      uVar36 = CONCAT44(uStack_a4,uStack_a8);
      uStack_e0 = 0x140e5a9ae;
      __ecp_nistz256_sqr_montx(uVar42,CONCAT44(uStack_b4,uStack_b8),CONCAT44(uStack_9c,uStack_a0));
      uStack_e0 = 0x140e5a9c7;
      __ecp_nistz256_sub_fromx();
      uStack_e0 = 0x140e5a9e3;
      __ecp_nistz256_subx();
      uStack_d8 = uVar34;
      uStack_e0 = 0x140e5aa21;
      uStack_d0 = uVar38;
      uStack_c8 = uVar43;
      uStack_c0 = uVar36;
      __ecp_nistz256_mul_montx(0,CONCAT44(uStack_b4,uStack_b8));
      uStack_e0 = 0x140e5aa30;
      __ecp_nistz256_sub_fromx();
      return;
    }
    uVar43 = __ecp_nistz256_sqr_montx(lVar40,uStack_238,uStack_220);
    uVar43 = __ecp_nistz256_mul_montx(uVar43,CONCAT44(uStack_b4,uStack_b8));
    uVar43 = __ecp_nistz256_sqr_montx(uVar43,uStack_278);
    uVar43 = __ecp_nistz256_mul_montx(uVar43,uStack_58);
    uVar43 = __ecp_nistz256_mul_montx(uVar43,uStack_278);
    __ecp_nistz256_mul_montx(uVar43,uStack_1d8);
    lVar40 = uStack_240 * 2;
    uVar39 = unaff_R13 * 2 + (ulonglong)CARRY8(uStack_240,uStack_240);
    uVar34 = (ulonglong)
             (CARRY8(unaff_R13,unaff_R13) ||
             CARRY8(unaff_R13 * 2,(ulonglong)CARRY8(uStack_240,uStack_240)));
    uVar33 = uStack_260 * 2 + uVar34;
    uVar34 = (ulonglong)(CARRY8(uStack_260,uStack_260) || CARRY8(uStack_260 * 2,uVar34));
    uVar38 = uStack_258 * 2 + uVar34;
    uVar37 = (ulonglong)(uVar39 < uStack_270 || uVar39 - uStack_270 < (ulonglong)(lVar40 != -1));
    uVar35 = (ulonglong)(uVar33 < uVar37);
    uStack_120 = (uVar38 - uStack_268) - uVar35;
    uStack_128 = uVar33 - uVar37;
    uStack_130 = (uVar39 - uStack_270) - (ulonglong)(lVar40 != -1);
    lStack_138 = lVar40 + 1;
    if ((CARRY8(uStack_258,uStack_258) || CARRY8(uStack_258 * 2,uVar34)) <
        (uVar38 < uStack_268 || uVar38 - uStack_268 < uVar35)) {
      uStack_120 = uVar38;
      uStack_128 = uVar33;
      uStack_130 = uVar39;
      lStack_138 = lVar40;
    }
    __ecp_nistz256_subx(uStack_208);
    __ecp_nistz256_sub_fromx();
    uVar43 = __ecp_nistz256_subx(uStack_1a8);
    uVar43 = __ecp_nistz256_mul_montx(uVar43,uStack_1f8);
    __ecp_nistz256_mul_montx(uVar43,lStack_138);
    pauVar41 = (undefined1 (*) [16])__ecp_nistz256_sub_fromx();
    auVar6._8_8_ = uStack_110;
    auVar6._0_8_ = uStack_118;
    auVar28._8_8_ = uStack_50;
    auVar28._0_8_ = uStack_58;
    auVar30._8_8_ = uStack_40;
    auVar30._0_8_ = uStack_48;
    auVar16._4_4_ = uStack_b4;
    auVar16._0_4_ = uStack_b8;
    auVar16._8_4_ = uStack_b0;
    auVar16._12_4_ = uStack_ac;
    auVar18._4_4_ = uStack_a4;
    auVar18._0_4_ = uStack_a8;
    auVar18._8_4_ = uStack_a0;
    auVar18._12_4_ = uStack_9c;
    pauVar41[4] = auVar50 & auVar16 | ~auVar50 & (auVar53 & auVar28 | ~auVar53 & auVar6);
    pauVar41[5] = auVar50 & auVar18 | ~auVar50 & (auVar53 & auVar30 | ~auVar53 & auStack_108);
    auVar20._8_8_ = uStack_90;
    auVar20._0_8_ = uStack_98;
    auVar22._8_8_ = uStack_80;
    auVar22._0_8_ = uStack_88;
    auVar8._8_8_ = uStack_f0;
    auVar8._0_8_ = uStack_f8;
    auVar10._8_8_ = uStack_e0;
    auVar10._0_8_ = uStack_e8;
    *pauVar41 = auVar50 & auVar8 | ~auVar50 & (auVar53 & auVar20 | ~auVar53 & auStack_158);
    pauVar41[1] = auVar50 & auVar10 | ~auVar50 & (auVar53 & auVar22 | ~auVar53 & auStack_148);
    auVar45._8_8_ = uStack_130;
    auVar45._0_8_ = lStack_138;
    auVar4._8_8_ = uStack_120;
    auVar4._0_8_ = uStack_128;
    auVar24._8_8_ = puStack_70;
    auVar24._0_8_ = uStack_78;
    auVar26._8_8_ = uStack_60;
    auVar26._0_8_ = uStack_68;
    auVar12._8_8_ = uStack_d0;
    auVar12._0_8_ = uStack_d8;
    auVar14._8_8_ = uStack_c0;
    auVar14._0_8_ = uStack_c8;
    pauVar41[2] = auVar50 & auVar12 | ~auVar50 & (auVar53 & auVar24 | ~auVar53 & auVar45);
    pauVar41[3] = auVar50 & auVar14 | ~auVar50 & (auVar53 & auVar26 | ~auVar53 & auVar4);
    return;
  }
  uStack_f8 = *param_2;
  uStack_f0 = param_2[1];
  uStack_e8 = param_2[2];
  uStack_e0 = param_2[3];
  uStack_d8 = param_2[4];
  uStack_d0 = param_2[5];
  uStack_c8 = param_2[6];
  uStack_c0 = param_2[7];
  uStack_b8 = (uint)param_2[8];
  uStack_b4 = *(uint *)((longlong)param_2 + 0x44);
  uStack_b0 = (uint)param_2[9];
  uStack_ac = *(uint *)((longlong)param_2 + 0x4c);
  uStack_a8 = (uint)param_2[10];
  uStack_a4 = *(uint *)((longlong)param_2 + 0x54);
  uStack_a0 = (uint)param_2[0xb];
  uStack_9c = *(uint *)((longlong)param_2 + 0x5c);
  uStack_98 = *param_3;
  uStack_90 = param_3[1];
  uStack_88 = param_3[2];
  uStack_80 = param_3[3];
  uStack_78 = param_3[4];
  puStack_70 = (undefined1 *)param_3[5];
  uStack_68 = param_3[6];
  uStack_60 = param_3[7];
  uStack_58 = param_3[8];
  uStack_50 = param_3[9];
  uStack_48 = param_3[10];
  uStack_40 = param_3[0xb];
  uVar51 = uStack_a8 | uStack_b8 | uStack_a4 | uStack_b4 |
           uStack_a0 | uStack_b0 | uStack_9c | uStack_ac;
  uVar46 = 0;
  auVar45 = *(undefined1 (*) [16])(param_3 + 10) | *(undefined1 (*) [16])(param_3 + 8);
  __ecp_nistz256_sqr_montq(param_1);
  auVar52._0_4_ = -(uint)(uVar51 == uVar46);
  auVar47._4_4_ = auVar45._0_4_;
  auVar47._0_4_ = auVar45._4_4_;
  auVar47._8_4_ = auVar45._12_4_;
  auVar47._12_4_ = auVar45._8_4_;
  auVar52._4_4_ = auVar52._0_4_;
  auVar52._8_4_ = auVar52._0_4_;
  auVar52._12_4_ = auVar52._0_4_;
  auVar48._0_4_ = -(uint)(SUB164(auVar47 | auVar45,0) == 0 && SUB164(auVar47 | auVar45,8) == 0);
  auVar48._4_4_ = auVar48._0_4_;
  auVar48._8_4_ = auVar48._0_4_;
  auVar48._12_4_ = auVar48._0_4_;
  uVar34 = param_2[0xb];
  __ecp_nistz256_sqr_montq();
  __ecp_nistz256_mul_montq();
  __ecp_nistz256_mul_montq();
  __ecp_nistz256_mul_montq();
  __ecp_nistz256_mul_montq();
  __ecp_nistz256_sub_fromq();
  uStack_178 = uStack_160 | unaff_R13 | uVar34 | uStack_178;
  auVar45 = auVar48 | auVar52;
  __ecp_nistz256_mul_montq();
  uVar37 = uStack_258;
  __ecp_nistz256_mul_montq();
  lVar40 = __ecp_nistz256_sub_fromq();
  if (((((uStack_240 == 0 && unaff_R13 == 0) && uVar34 == 0) && uVar37 == 0) && auVar45._0_8_ == 0)
      && uStack_178 == 0) {
    uStack_78 = *param_2;
    puStack_70 = (undefined1 *)param_2[1];
    uStack_68 = param_2[2];
    uStack_60 = param_2[3];
    puVar44 = (ulonglong *)(lVar40 + 0x20);
    uStack_e0 = 0x140e59611;
    __ecp_nistz256_mul_by_2q(lVar40,puVar44,lVar40 + 0x40,param_2[7]);
    uStack_e0 = 0x140e5962f;
    __ecp_nistz256_sqr_montq();
    uStack_e0 = 0x140e5964f;
    __ecp_nistz256_sqr_montq();
    uStack_e0 = 0x140e59675;
    __ecp_nistz256_mul_montq();
    uStack_e0 = 0x140e5967a;
    __ecp_nistz256_mul_by_2q();
    uStack_e0 = 0x140e5969d;
    __ecp_nistz256_add_toq();
    puVar32 = puStack_70;
    uVar31 = uStack_78;
    uStack_e0 = 0x140e596c0;
    __ecp_nistz256_sub_fromq();
    uVar39 = uStack_c8;
    uVar38 = uStack_d0;
    uStack_e0 = 0x140e596e1;
    __ecp_nistz256_sqr_montq();
    uVar34 = (ulonglong)
             (CARRY8((ulonglong)puVar32,(ulonglong)&uStack_d8) ||
             CARRY8((longlong)&uStack_d8 + (longlong)puVar32,(ulonglong)(uVar31 != 0)));
    uVar37 = (ulonglong)CARRY8(uVar38,uVar34);
    uVar35 = (ulonglong)(CARRY8(uVar39,unaff_RBP) || CARRY8(uVar39 + unaff_RBP,uVar37));
    uVar37 = uVar39 + unaff_RBP + uVar37;
    uVar34 = uVar38 + uVar34;
    puVar1 = (undefined1 *)((longlong)&uStack_d8 + (longlong)puVar32 + (ulonglong)(uVar31 != 0));
    uVar33 = uVar31 - 1;
    if ((uVar31 & 1) == 0) {
      uVar35 = 0;
      uVar37 = uVar39;
      uVar34 = uVar38;
      puVar1 = puVar32;
      uVar33 = uVar31;
    }
    uVar38 = (ulonglong)puVar1 >> 1 | uVar34 << 0x3f;
    *puVar44 = uVar33 >> 1 | (longlong)puVar1 << 0x3f;
    puVar44[1] = uVar38;
    puVar44[2] = uVar34 >> 1 | uVar37 << 0x3f;
    puVar44[3] = uVar37 >> 1 | uVar35 << 0x3f;
    uStack_e0 = 0x140e5978c;
    __ecp_nistz256_mul_montq();
    uStack_e0 = 0x140e59799;
    __ecp_nistz256_mul_by_2q();
    uStack_e0 = 0x140e597a8;
    __ecp_nistz256_add_toq();
    uVar34 = uStack_c0;
    uStack_e0 = 0x140e597d2;
    __ecp_nistz256_mul_montq();
    uStack_e0 = 0x140e597df;
    __ecp_nistz256_mul_by_2q();
    uVar43 = CONCAT44(uStack_ac,uStack_b0);
    uVar36 = CONCAT44(uStack_a4,uStack_a8);
    uStack_e0 = 0x140e59802;
    __ecp_nistz256_sqr_montq();
    uStack_e0 = 0x140e5981b;
    __ecp_nistz256_sub_fromq();
    uStack_e0 = 0x140e59837;
    __ecp_nistz256_subq();
    uStack_d8 = uVar34;
    uStack_e0 = 0x140e59874;
    uStack_d0 = uVar38;
    uStack_c8 = uVar43;
    uStack_c0 = uVar36;
    __ecp_nistz256_mul_montq();
    uStack_e0 = 0x140e59883;
    __ecp_nistz256_sub_fromq();
    return;
  }
  __ecp_nistz256_sqr_montq();
  __ecp_nistz256_mul_montq();
  __ecp_nistz256_sqr_montq();
  __ecp_nistz256_mul_montq();
  __ecp_nistz256_mul_montq();
  __ecp_nistz256_mul_montq();
  lVar40 = uStack_240 * 2;
  uVar39 = unaff_R13 * 2 + (ulonglong)CARRY8(uStack_240,uStack_240);
  uVar34 = (ulonglong)
           (CARRY8(unaff_R13,unaff_R13) ||
           CARRY8(unaff_R13 * 2,(ulonglong)CARRY8(uStack_240,uStack_240)));
  uVar33 = uStack_260 * 2 + uVar34;
  uVar34 = (ulonglong)(CARRY8(uStack_260,uStack_260) || CARRY8(uStack_260 * 2,uVar34));
  uVar38 = uStack_258 * 2 + uVar34;
  uVar37 = (ulonglong)(uVar39 < uStack_270 || uVar39 - uStack_270 < (ulonglong)(lVar40 != -1));
  uVar35 = (ulonglong)(uVar33 < uVar37);
  uStack_120 = (uVar38 - uStack_268) - uVar35;
  uStack_128 = uVar33 - uVar37;
  uStack_130 = (uVar39 - uStack_270) - (ulonglong)(lVar40 != -1);
  lStack_138 = lVar40 + 1;
  if ((CARRY8(uStack_258,uStack_258) || CARRY8(uStack_258 * 2,uVar34)) <
      (uVar38 < uStack_268 || uVar38 - uStack_268 < uVar35)) {
    uStack_120 = uVar38;
    uStack_128 = uVar33;
    uStack_130 = uVar39;
    lStack_138 = lVar40;
  }
  __ecp_nistz256_subq(uStack_208);
  __ecp_nistz256_sub_fromq();
  __ecp_nistz256_subq(uStack_1a8);
  __ecp_nistz256_mul_montq();
  __ecp_nistz256_mul_montq();
  pauVar41 = (undefined1 (*) [16])__ecp_nistz256_sub_fromq();
  auVar5._8_8_ = uStack_110;
  auVar5._0_8_ = uStack_118;
  auVar27._8_8_ = uStack_50;
  auVar27._0_8_ = uStack_58;
  auVar29._8_8_ = uStack_40;
  auVar29._0_8_ = uStack_48;
  auVar15._4_4_ = uStack_b4;
  auVar15._0_4_ = uStack_b8;
  auVar15._8_4_ = uStack_b0;
  auVar15._12_4_ = uStack_ac;
  auVar17._4_4_ = uStack_a4;
  auVar17._0_4_ = uStack_a8;
  auVar17._8_4_ = uStack_a0;
  auVar17._12_4_ = uStack_9c;
  pauVar41[4] = auVar48 & auVar15 | ~auVar48 & (auVar52 & auVar27 | ~auVar52 & auVar5);
  pauVar41[5] = auVar48 & auVar17 | ~auVar48 & (auVar52 & auVar29 | ~auVar52 & auStack_108);
  auVar19._8_8_ = uStack_90;
  auVar19._0_8_ = uStack_98;
  auVar21._8_8_ = uStack_80;
  auVar21._0_8_ = uStack_88;
  auVar7._8_8_ = uStack_f0;
  auVar7._0_8_ = uStack_f8;
  auVar9._8_8_ = uStack_e0;
  auVar9._0_8_ = uStack_e8;
  *pauVar41 = auVar48 & auVar7 | ~auVar48 & (auVar52 & auVar19 | ~auVar52 & auStack_158);
  pauVar41[1] = auVar48 & auVar9 | ~auVar48 & (auVar52 & auVar21 | ~auVar52 & auStack_148);
  auVar2._8_8_ = uStack_130;
  auVar2._0_8_ = lStack_138;
  auVar3._8_8_ = uStack_120;
  auVar3._0_8_ = uStack_128;
  auVar23._8_8_ = puStack_70;
  auVar23._0_8_ = uStack_78;
  auVar25._8_8_ = uStack_60;
  auVar25._0_8_ = uStack_68;
  auVar11._8_8_ = uStack_d0;
  auVar11._0_8_ = uStack_d8;
  auVar13._8_8_ = uStack_c0;
  auVar13._0_8_ = uStack_c8;
  pauVar41[2] = auVar48 & auVar11 | ~auVar48 & (auVar52 & auVar23 | ~auVar52 & auVar2);
  pauVar41[3] = auVar48 & auVar13 | ~auVar48 & (auVar52 & auVar25 | ~auVar52 & auVar3);
  return;
}

// L$SEH_begin_ecp_nistz256_point_add @ 140e598cd

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L_SEH_begin_ecp_nistz256_point_add(undefined8 param_1,ulonglong *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  ulonglong uVar31;
  undefined1 *puVar32;
  ulonglong unaff_RBP;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  undefined8 uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong unaff_R13;
  ulonglong uVar39;
  longlong lVar40;
  undefined1 (*pauVar41) [16];
  undefined8 uVar42;
  undefined8 uVar43;
  ulonglong *puVar44;
  undefined1 auVar45 [16];
  uint uVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  uint uVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined8 local_278;
  ulonglong local_270;
  ulonglong local_268;
  ulonglong local_260;
  ulonglong local_258;
  ulonglong local_240;
  undefined8 local_238;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_208;
  undefined8 local_1f8;
  undefined8 local_1d8;
  undefined8 local_1a8;
  ulonglong local_178;
  ulonglong local_160;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  longlong local_138;
  ulonglong uStack_130;
  ulonglong local_128;
  ulonglong uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108 [16];
  ulonglong local_f8;
  ulonglong uStack_f0;
  ulonglong local_e8;
  ulonglong uStack_e0;
  ulonglong local_d8;
  ulonglong uStack_d0;
  ulonglong local_c8;
  ulonglong uStack_c0;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  undefined1 *puStack_70;
  ulonglong local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  if ((_DAT_15540a9f8 & 0x80100) == 0x80100) {
    local_f8 = *param_2;
    uStack_f0 = param_2[1];
    local_e8 = param_2[2];
    uStack_e0 = param_2[3];
    local_d8 = param_2[4];
    uStack_d0 = param_2[5];
    local_c8 = param_2[6];
    uStack_c0 = param_2[7];
    local_b8 = (uint)param_2[8];
    uStack_b4 = *(uint *)((longlong)param_2 + 0x44);
    uStack_b0 = (uint)param_2[9];
    uStack_ac = *(uint *)((longlong)param_2 + 0x4c);
    local_a8 = (uint)param_2[10];
    uStack_a4 = *(uint *)((longlong)param_2 + 0x54);
    uStack_a0 = (uint)param_2[0xb];
    uStack_9c = *(uint *)((longlong)param_2 + 0x5c);
    local_98 = *param_3;
    uStack_90 = param_3[1];
    local_88 = param_3[2];
    uStack_80 = param_3[3];
    local_78 = param_3[4];
    puStack_70 = (undefined1 *)param_3[5];
    local_68 = param_3[6];
    uStack_60 = param_3[7];
    local_58 = param_3[8];
    uStack_50 = param_3[9];
    local_48 = param_3[10];
    uStack_40 = param_3[0xb];
    uVar51 = local_a8 | local_b8 | uStack_a4 | uStack_b4 |
             uStack_a0 | uStack_b0 | uStack_9c | uStack_ac;
    uVar46 = 0;
    auVar45 = *(undefined1 (*) [16])(param_3 + 10) | *(undefined1 (*) [16])(param_3 + 8);
    uVar43 = __ecp_nistz256_sqr_montx(param_1);
    auVar53._0_4_ = -(uint)(uVar51 == uVar46);
    auVar49._4_4_ = auVar45._0_4_;
    auVar49._0_4_ = auVar45._4_4_;
    auVar49._8_4_ = auVar45._12_4_;
    auVar49._12_4_ = auVar45._8_4_;
    auVar53._4_4_ = auVar53._0_4_;
    auVar53._8_4_ = auVar53._0_4_;
    auVar53._12_4_ = auVar53._0_4_;
    auVar50._0_4_ = -(uint)(SUB164(auVar49 | auVar45,0) == 0 && SUB164(auVar49 | auVar45,8) == 0);
    auVar50._4_4_ = auVar50._0_4_;
    auVar50._8_4_ = auVar50._0_4_;
    auVar50._12_4_ = auVar50._0_4_;
    uVar34 = param_2[0xb];
    uVar43 = __ecp_nistz256_sqr_montx(uVar43,param_2[8]);
    uVar43 = __ecp_nistz256_mul_montx(uVar43,local_58);
    uVar43 = __ecp_nistz256_mul_montx(uVar43,CONCAT44(uStack_b4,local_b8));
    uVar43 = __ecp_nistz256_mul_montx(uVar43,local_d8);
    __ecp_nistz256_mul_montx(uVar43,local_78);
    uVar43 = __ecp_nistz256_sub_fromx();
    local_178 = local_160 | unaff_R13 | uVar34 | local_178;
    auVar45 = auVar50 | auVar53;
    uVar43 = __ecp_nistz256_mul_montx(uVar43,local_f8,auVar45._0_8_,local_218);
    uVar37 = local_258;
    __ecp_nistz256_mul_montx(uVar43,local_98);
    lVar40 = __ecp_nistz256_sub_fromx();
    if (((((local_240 == 0 && unaff_R13 == 0) && uVar34 == 0) && uVar37 == 0) && auVar45._0_8_ == 0)
        && local_178 == 0) {
      local_78 = *param_2;
      puStack_70 = (undefined1 *)param_2[1];
      local_68 = param_2[2];
      uStack_60 = param_2[3];
      puVar44 = (ulonglong *)(lVar40 + 0x20);
      uStack_e0 = 0x140e5a7ba;
      uVar43 = __ecp_nistz256_mul_by_2x(lVar40,puVar44,lVar40 + 0x40,param_2[7]);
      uStack_e0 = 0x140e5a7d8;
      uVar43 = __ecp_nistz256_sqr_montx(uVar43,param_2[8],param_2[0xb]);
      uStack_e0 = 0x140e5a7f9;
      uVar43 = __ecp_nistz256_sqr_montx(uVar43,local_d8,uStack_c0);
      uStack_e0 = 0x140e5a81f;
      __ecp_nistz256_mul_montx(uVar43,param_2[4]);
      uStack_e0 = 0x140e5a824;
      __ecp_nistz256_mul_by_2x();
      uStack_e0 = 0x140e5a847;
      __ecp_nistz256_add_tox();
      puVar32 = puStack_70;
      uVar31 = local_78;
      uStack_e0 = 0x140e5a86a;
      uVar43 = __ecp_nistz256_sub_fromx();
      uVar39 = local_c8;
      uVar38 = uStack_d0;
      uStack_e0 = 0x140e5a88c;
      __ecp_nistz256_sqr_montx(uVar43,local_d8,uStack_c0);
      uVar34 = (ulonglong)
               (CARRY8((ulonglong)puVar32,(ulonglong)local_158) ||
               CARRY8((ulonglong)(puVar32 + (longlong)local_158),(ulonglong)(uVar31 != 0)));
      uVar37 = (ulonglong)CARRY8(uVar38,uVar34);
      uVar35 = (ulonglong)(CARRY8(uVar39,unaff_RBP) || CARRY8(uVar39 + unaff_RBP,uVar37));
      uVar37 = uVar39 + unaff_RBP + uVar37;
      uVar34 = uVar38 + uVar34;
      puVar1 = puVar32 + (longlong)local_158 + (uVar31 != 0);
      uVar33 = uVar31 - 1;
      if ((uVar31 & 1) == 0) {
        uVar35 = 0;
        uVar37 = uVar39;
        uVar34 = uVar38;
        puVar1 = puVar32;
        uVar33 = uVar31;
      }
      uVar38 = (ulonglong)puVar1 >> 1 | uVar34 << 0x3f;
      *puVar44 = uVar33 >> 1 | (longlong)puVar1 << 0x3f;
      puVar44[1] = uVar38;
      puVar44[2] = uVar34 >> 1 | uVar37 << 0x3f;
      puVar44[3] = uVar37 >> 1 | uVar35 << 0x3f;
      uStack_e0 = 0x140e5a937;
      __ecp_nistz256_mul_montx(uVar37 << 0x3f,local_98,uVar39,CONCAT44(uStack_b4,local_b8));
      uStack_e0 = 0x140e5a944;
      __ecp_nistz256_mul_by_2x();
      uStack_e0 = 0x140e5a953;
      uVar43 = __ecp_nistz256_add_tox();
      uVar34 = uStack_c0;
      uStack_e0 = 0x140e5a97e;
      __ecp_nistz256_mul_montx(uVar43,local_78);
      uStack_e0 = 0x140e5a98b;
      uVar42 = __ecp_nistz256_mul_by_2x();
      uVar43 = CONCAT44(uStack_ac,uStack_b0);
      uVar36 = CONCAT44(uStack_a4,local_a8);
      uStack_e0 = 0x140e5a9ae;
      __ecp_nistz256_sqr_montx(uVar42,CONCAT44(uStack_b4,local_b8),CONCAT44(uStack_9c,uStack_a0));
      uStack_e0 = 0x140e5a9c7;
      __ecp_nistz256_sub_fromx();
      uStack_e0 = 0x140e5a9e3;
      __ecp_nistz256_subx();
      local_d8 = uVar34;
      uStack_e0 = 0x140e5aa21;
      uStack_d0 = uVar38;
      local_c8 = uVar43;
      uStack_c0 = uVar36;
      __ecp_nistz256_mul_montx(0,CONCAT44(uStack_b4,local_b8));
      uStack_e0 = 0x140e5aa30;
      __ecp_nistz256_sub_fromx();
      return;
    }
    uVar43 = __ecp_nistz256_sqr_montx(lVar40,local_238,local_220);
    uVar43 = __ecp_nistz256_mul_montx(uVar43,CONCAT44(uStack_b4,local_b8));
    uVar43 = __ecp_nistz256_sqr_montx(uVar43,local_278);
    uVar43 = __ecp_nistz256_mul_montx(uVar43,local_58);
    uVar43 = __ecp_nistz256_mul_montx(uVar43,local_278);
    __ecp_nistz256_mul_montx(uVar43,local_1d8);
    lVar40 = local_240 * 2;
    uVar39 = unaff_R13 * 2 + (ulonglong)CARRY8(local_240,local_240);
    uVar34 = (ulonglong)
             (CARRY8(unaff_R13,unaff_R13) ||
             CARRY8(unaff_R13 * 2,(ulonglong)CARRY8(local_240,local_240)));
    uVar33 = local_260 * 2 + uVar34;
    uVar34 = (ulonglong)(CARRY8(local_260,local_260) || CARRY8(local_260 * 2,uVar34));
    uVar38 = local_258 * 2 + uVar34;
    uVar37 = (ulonglong)(uVar39 < local_270 || uVar39 - local_270 < (ulonglong)(lVar40 != -1));
    uVar35 = (ulonglong)(uVar33 < uVar37);
    uStack_120 = (uVar38 - local_268) - uVar35;
    local_128 = uVar33 - uVar37;
    uStack_130 = (uVar39 - local_270) - (ulonglong)(lVar40 != -1);
    local_138 = lVar40 + 1;
    if ((CARRY8(local_258,local_258) || CARRY8(local_258 * 2,uVar34)) <
        (uVar38 < local_268 || uVar38 - local_268 < uVar35)) {
      uStack_120 = uVar38;
      local_128 = uVar33;
      uStack_130 = uVar39;
      local_138 = lVar40;
    }
    __ecp_nistz256_subx(local_208);
    __ecp_nistz256_sub_fromx();
    uVar43 = __ecp_nistz256_subx(local_1a8);
    uVar43 = __ecp_nistz256_mul_montx(uVar43,local_1f8);
    __ecp_nistz256_mul_montx(uVar43,local_138);
    pauVar41 = (undefined1 (*) [16])__ecp_nistz256_sub_fromx();
    auVar6._8_8_ = uStack_110;
    auVar6._0_8_ = local_118;
    auVar28._8_8_ = uStack_50;
    auVar28._0_8_ = local_58;
    auVar30._8_8_ = uStack_40;
    auVar30._0_8_ = local_48;
    auVar16._4_4_ = uStack_b4;
    auVar16._0_4_ = local_b8;
    auVar16._8_4_ = uStack_b0;
    auVar16._12_4_ = uStack_ac;
    auVar18._4_4_ = uStack_a4;
    auVar18._0_4_ = local_a8;
    auVar18._8_4_ = uStack_a0;
    auVar18._12_4_ = uStack_9c;
    pauVar41[4] = auVar50 & auVar16 | ~auVar50 & (auVar53 & auVar28 | ~auVar53 & auVar6);
    pauVar41[5] = auVar50 & auVar18 | ~auVar50 & (auVar53 & auVar30 | ~auVar53 & local_108);
    auVar20._8_8_ = uStack_90;
    auVar20._0_8_ = local_98;
    auVar22._8_8_ = uStack_80;
    auVar22._0_8_ = local_88;
    auVar8._8_8_ = uStack_f0;
    auVar8._0_8_ = local_f8;
    auVar10._8_8_ = uStack_e0;
    auVar10._0_8_ = local_e8;
    *pauVar41 = auVar50 & auVar8 | ~auVar50 & (auVar53 & auVar20 | ~auVar53 & local_158);
    pauVar41[1] = auVar50 & auVar10 | ~auVar50 & (auVar53 & auVar22 | ~auVar53 & local_148);
    auVar45._8_8_ = uStack_130;
    auVar45._0_8_ = local_138;
    auVar4._8_8_ = uStack_120;
    auVar4._0_8_ = local_128;
    auVar24._8_8_ = puStack_70;
    auVar24._0_8_ = local_78;
    auVar26._8_8_ = uStack_60;
    auVar26._0_8_ = local_68;
    auVar12._8_8_ = uStack_d0;
    auVar12._0_8_ = local_d8;
    auVar14._8_8_ = uStack_c0;
    auVar14._0_8_ = local_c8;
    pauVar41[2] = auVar50 & auVar12 | ~auVar50 & (auVar53 & auVar24 | ~auVar53 & auVar45);
    pauVar41[3] = auVar50 & auVar14 | ~auVar50 & (auVar53 & auVar26 | ~auVar53 & auVar4);
    return;
  }
  local_f8 = *param_2;
  uStack_f0 = param_2[1];
  local_e8 = param_2[2];
  uStack_e0 = param_2[3];
  local_d8 = param_2[4];
  uStack_d0 = param_2[5];
  local_c8 = param_2[6];
  uStack_c0 = param_2[7];
  local_b8 = (uint)param_2[8];
  uStack_b4 = *(uint *)((longlong)param_2 + 0x44);
  uStack_b0 = (uint)param_2[9];
  uStack_ac = *(uint *)((longlong)param_2 + 0x4c);
  local_a8 = (uint)param_2[10];
  uStack_a4 = *(uint *)((longlong)param_2 + 0x54);
  uStack_a0 = (uint)param_2[0xb];
  uStack_9c = *(uint *)((longlong)param_2 + 0x5c);
  local_98 = *param_3;
  uStack_90 = param_3[1];
  local_88 = param_3[2];
  uStack_80 = param_3[3];
  local_78 = param_3[4];
  puStack_70 = (undefined1 *)param_3[5];
  local_68 = param_3[6];
  uStack_60 = param_3[7];
  local_58 = param_3[8];
  uStack_50 = param_3[9];
  local_48 = param_3[10];
  uStack_40 = param_3[0xb];
  uVar51 = local_a8 | local_b8 | uStack_a4 | uStack_b4 |
           uStack_a0 | uStack_b0 | uStack_9c | uStack_ac;
  uVar46 = 0;
  auVar45 = *(undefined1 (*) [16])(param_3 + 10) | *(undefined1 (*) [16])(param_3 + 8);
  __ecp_nistz256_sqr_montq(param_1);
  auVar52._0_4_ = -(uint)(uVar51 == uVar46);
  auVar47._4_4_ = auVar45._0_4_;
  auVar47._0_4_ = auVar45._4_4_;
  auVar47._8_4_ = auVar45._12_4_;
  auVar47._12_4_ = auVar45._8_4_;
  auVar52._4_4_ = auVar52._0_4_;
  auVar52._8_4_ = auVar52._0_4_;
  auVar52._12_4_ = auVar52._0_4_;
  auVar48._0_4_ = -(uint)(SUB164(auVar47 | auVar45,0) == 0 && SUB164(auVar47 | auVar45,8) == 0);
  auVar48._4_4_ = auVar48._0_4_;
  auVar48._8_4_ = auVar48._0_4_;
  auVar48._12_4_ = auVar48._0_4_;
  uVar34 = param_2[0xb];
  __ecp_nistz256_sqr_montq();
  __ecp_nistz256_mul_montq();
  __ecp_nistz256_mul_montq();
  __ecp_nistz256_mul_montq();
  __ecp_nistz256_mul_montq();
  __ecp_nistz256_sub_fromq();
  local_178 = local_160 | unaff_R13 | uVar34 | local_178;
  auVar45 = auVar48 | auVar52;
  __ecp_nistz256_mul_montq();
  uVar37 = local_258;
  __ecp_nistz256_mul_montq();
  lVar40 = __ecp_nistz256_sub_fromq();
  if (((((local_240 == 0 && unaff_R13 == 0) && uVar34 == 0) && uVar37 == 0) && auVar45._0_8_ == 0)
      && local_178 == 0) {
    local_78 = *param_2;
    puStack_70 = (undefined1 *)param_2[1];
    local_68 = param_2[2];
    uStack_60 = param_2[3];
    puVar44 = (ulonglong *)(lVar40 + 0x20);
    uStack_e0 = 0x140e59611;
    __ecp_nistz256_mul_by_2q(lVar40,puVar44,lVar40 + 0x40,param_2[7]);
    uStack_e0 = 0x140e5962f;
    __ecp_nistz256_sqr_montq();
    uStack_e0 = 0x140e5964f;
    __ecp_nistz256_sqr_montq();
    uStack_e0 = 0x140e59675;
    __ecp_nistz256_mul_montq();
    uStack_e0 = 0x140e5967a;
    __ecp_nistz256_mul_by_2q();
    uStack_e0 = 0x140e5969d;
    __ecp_nistz256_add_toq();
    puVar32 = puStack_70;
    uVar31 = local_78;
    uStack_e0 = 0x140e596c0;
    __ecp_nistz256_sub_fromq();
    uVar39 = local_c8;
    uVar38 = uStack_d0;
    uStack_e0 = 0x140e596e1;
    __ecp_nistz256_sqr_montq();
    uVar34 = (ulonglong)
             (CARRY8((ulonglong)puVar32,(ulonglong)&local_d8) ||
             CARRY8((longlong)&local_d8 + (longlong)puVar32,(ulonglong)(uVar31 != 0)));
    uVar37 = (ulonglong)CARRY8(uVar38,uVar34);
    uVar35 = (ulonglong)(CARRY8(uVar39,unaff_RBP) || CARRY8(uVar39 + unaff_RBP,uVar37));
    uVar37 = uVar39 + unaff_RBP + uVar37;
    uVar34 = uVar38 + uVar34;
    puVar1 = (undefined1 *)((longlong)&local_d8 + (longlong)puVar32 + (ulonglong)(uVar31 != 0));
    uVar33 = uVar31 - 1;
    if ((uVar31 & 1) == 0) {
      uVar35 = 0;
      uVar37 = uVar39;
      uVar34 = uVar38;
      puVar1 = puVar32;
      uVar33 = uVar31;
    }
    uVar38 = (ulonglong)puVar1 >> 1 | uVar34 << 0x3f;
    *puVar44 = uVar33 >> 1 | (longlong)puVar1 << 0x3f;
    puVar44[1] = uVar38;
    puVar44[2] = uVar34 >> 1 | uVar37 << 0x3f;
    puVar44[3] = uVar37 >> 1 | uVar35 << 0x3f;
    uStack_e0 = 0x140e5978c;
    __ecp_nistz256_mul_montq();
    uStack_e0 = 0x140e59799;
    __ecp_nistz256_mul_by_2q();
    uStack_e0 = 0x140e597a8;
    __ecp_nistz256_add_toq();
    uVar34 = uStack_c0;
    uStack_e0 = 0x140e597d2;
    __ecp_nistz256_mul_montq();
    uStack_e0 = 0x140e597df;
    __ecp_nistz256_mul_by_2q();
    uVar43 = CONCAT44(uStack_ac,uStack_b0);
    uVar36 = CONCAT44(uStack_a4,local_a8);
    uStack_e0 = 0x140e59802;
    __ecp_nistz256_sqr_montq();
    uStack_e0 = 0x140e5981b;
    __ecp_nistz256_sub_fromq();
    uStack_e0 = 0x140e59837;
    __ecp_nistz256_subq();
    local_d8 = uVar34;
    uStack_e0 = 0x140e59874;
    uStack_d0 = uVar38;
    local_c8 = uVar43;
    uStack_c0 = uVar36;
    __ecp_nistz256_mul_montq();
    uStack_e0 = 0x140e59883;
    __ecp_nistz256_sub_fromq();
    return;
  }
  __ecp_nistz256_sqr_montq();
  __ecp_nistz256_mul_montq();
  __ecp_nistz256_sqr_montq();
  __ecp_nistz256_mul_montq();
  __ecp_nistz256_mul_montq();
  __ecp_nistz256_mul_montq();
  lVar40 = local_240 * 2;
  uVar39 = unaff_R13 * 2 + (ulonglong)CARRY8(local_240,local_240);
  uVar34 = (ulonglong)
           (CARRY8(unaff_R13,unaff_R13) ||
           CARRY8(unaff_R13 * 2,(ulonglong)CARRY8(local_240,local_240)));
  uVar33 = local_260 * 2 + uVar34;
  uVar34 = (ulonglong)(CARRY8(local_260,local_260) || CARRY8(local_260 * 2,uVar34));
  uVar38 = local_258 * 2 + uVar34;
  uVar37 = (ulonglong)(uVar39 < local_270 || uVar39 - local_270 < (ulonglong)(lVar40 != -1));
  uVar35 = (ulonglong)(uVar33 < uVar37);
  uStack_120 = (uVar38 - local_268) - uVar35;
  local_128 = uVar33 - uVar37;
  uStack_130 = (uVar39 - local_270) - (ulonglong)(lVar40 != -1);
  local_138 = lVar40 + 1;
  if ((CARRY8(local_258,local_258) || CARRY8(local_258 * 2,uVar34)) <
      (uVar38 < local_268 || uVar38 - local_268 < uVar35)) {
    uStack_120 = uVar38;
    local_128 = uVar33;
    uStack_130 = uVar39;
    local_138 = lVar40;
  }
  __ecp_nistz256_subq(local_208);
  __ecp_nistz256_sub_fromq();
  __ecp_nistz256_subq(local_1a8);
  __ecp_nistz256_mul_montq();
  __ecp_nistz256_mul_montq();
  pauVar41 = (undefined1 (*) [16])__ecp_nistz256_sub_fromq();
  auVar5._8_8_ = uStack_110;
  auVar5._0_8_ = local_118;
  auVar27._8_8_ = uStack_50;
  auVar27._0_8_ = local_58;
  auVar29._8_8_ = uStack_40;
  auVar29._0_8_ = local_48;
  auVar15._4_4_ = uStack_b4;
  auVar15._0_4_ = local_b8;
  auVar15._8_4_ = uStack_b0;
  auVar15._12_4_ = uStack_ac;
  auVar17._4_4_ = uStack_a4;
  auVar17._0_4_ = local_a8;
  auVar17._8_4_ = uStack_a0;
  auVar17._12_4_ = uStack_9c;
  pauVar41[4] = auVar48 & auVar15 | ~auVar48 & (auVar52 & auVar27 | ~auVar52 & auVar5);
  pauVar41[5] = auVar48 & auVar17 | ~auVar48 & (auVar52 & auVar29 | ~auVar52 & local_108);
  auVar19._8_8_ = uStack_90;
  auVar19._0_8_ = local_98;
  auVar21._8_8_ = uStack_80;
  auVar21._0_8_ = local_88;
  auVar7._8_8_ = uStack_f0;
  auVar7._0_8_ = local_f8;
  auVar9._8_8_ = uStack_e0;
  auVar9._0_8_ = local_e8;
  *pauVar41 = auVar48 & auVar7 | ~auVar48 & (auVar52 & auVar19 | ~auVar52 & local_158);
  pauVar41[1] = auVar48 & auVar9 | ~auVar48 & (auVar52 & auVar21 | ~auVar52 & local_148);
  auVar2._8_8_ = uStack_130;
  auVar2._0_8_ = local_138;
  auVar3._8_8_ = uStack_120;
  auVar3._0_8_ = local_128;
  auVar23._8_8_ = puStack_70;
  auVar23._0_8_ = local_78;
  auVar25._8_8_ = uStack_60;
  auVar25._0_8_ = local_68;
  auVar11._8_8_ = uStack_d0;
  auVar11._0_8_ = local_d8;
  auVar13._8_8_ = uStack_c0;
  auVar13._0_8_ = local_c8;
  pauVar41[2] = auVar48 & auVar11 | ~auVar48 & (auVar52 & auVar23 | ~auVar52 & auVar2);
  pauVar41[3] = auVar48 & auVar13 | ~auVar48 & (auVar52 & auVar25 | ~auVar52 & auVar3);
  return;
}

// ecp_nistz256_point_add_affine @ 140e5a020

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ecp_nistz256_point_add_affine
               (undefined8 param_1,undefined8 *param_2,undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  uint *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar30;
  uint uVar31;
  undefined1 auVar29 [16];
  uint uVar32;
  uint uVar33;
  uint uVar34;
  undefined1 auVar35 [16];
  uint uVar37;
  undefined1 auVar36 [16];
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  undefined8 uStack_208;
  undefined8 uStack_1d8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_198;
  undefined8 uStack_148;
  uint uStack_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined8 uStack_58;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  
  if ((_DAT_15540a9f8 & 0x80100) != 0x80100) {
    uVar13 = *param_2;
    uVar14 = param_2[1];
    uVar15 = param_2[2];
    uVar16 = param_2[3];
    uVar17 = param_2[4];
    uVar18 = param_2[5];
    uVar19 = param_2[6];
    uVar20 = param_2[7];
    uVar5 = *(uint *)(param_2 + 8);
    uVar6 = *(uint *)((longlong)param_2 + 0x44);
    uVar7 = *(uint *)(param_2 + 9);
    uVar8 = *(uint *)((longlong)param_2 + 0x4c);
    uVar9 = *(uint *)(param_2 + 10);
    uVar10 = *(uint *)((longlong)param_2 + 0x54);
    uVar11 = *(uint *)(param_2 + 0xb);
    uVar12 = *(uint *)((longlong)param_2 + 0x5c);
    auVar1 = *param_3;
    auVar2 = param_3[1];
    auVar3 = param_3[2];
    auVar4 = param_3[3];
    uVar38 = uVar9 | uVar5 | uVar10 | uVar6 | uVar11 | uVar7 | uVar12 | uVar8;
    uVar33 = 0;
    auVar29 = auVar4 | auVar3 | auVar2 | auVar1;
    __ecp_nistz256_sqr_montq(param_1,param_3,param_2[0xb]);
    uVar39 = -(uint)(uVar38 == uVar33);
    auVar35._4_4_ = auVar29._0_4_;
    auVar35._0_4_ = auVar29._4_4_;
    auVar35._8_4_ = auVar29._12_4_;
    auVar35._12_4_ = auVar29._8_4_;
    uVar34 = -(uint)(SUB164(auVar35 | auVar29,0) == 0 && SUB164(auVar35 | auVar29,8) == 0);
    uVar33 = uVar34;
    uVar38 = uVar34;
    uVar37 = uVar34;
    uVar40 = uVar39;
    uVar41 = uVar39;
    uVar42 = uVar39;
    __ecp_nistz256_mul_montq();
    __ecp_nistz256_sub_fromq();
    __ecp_nistz256_mul_montq();
    __ecp_nistz256_mul_montq();
    __ecp_nistz256_mul_montq();
    __ecp_nistz256_sub_fromq();
    __ecp_nistz256_sqr_montq();
    __ecp_nistz256_sqr_montq();
    __ecp_nistz256_mul_montq();
    __ecp_nistz256_mul_montq();
    __ecp_nistz256_subq(uStack_148);
    __ecp_nistz256_sub_fromq();
    __ecp_nistz256_subq(uStack_208);
    __ecp_nistz256_mul_montq();
    __ecp_nistz256_mul_montq();
    puVar22 = (uint *)__ecp_nistz256_sub_fromq();
    uVar25 = uVar40 & _UNK_140e570a4;
    uVar26 = uVar41 & _UNK_140e570a8;
    uVar27 = uVar42 & _UNK_140e570ac;
    uVar28 = uVar39 & _DAT_140e570b0;
    uVar30 = uVar40 & _UNK_140e570b4;
    uVar31 = uVar41 & _UNK_140e570b8;
    uVar32 = uVar42 & _UNK_140e570bc;
    puVar22[0x10] = uVar34 & uVar5 | ~uVar34 & (uVar39 & _L_ONE_mont | ~uVar39 & uStack_f8);
    puVar22[0x11] = uVar33 & uVar6 | ~uVar33 & (uVar25 | ~uVar40 & uStack_f4);
    puVar22[0x12] = uVar38 & uVar7 | ~uVar38 & (uVar26 | ~uVar41 & uStack_f0);
    puVar22[0x13] = uVar37 & uVar8 | ~uVar37 & (uVar27 | ~uVar42 & uStack_ec);
    puVar22[0x14] = uVar34 & uVar9 | ~uVar34 & (uVar28 | ~uVar39 & uStack_e8);
    puVar22[0x15] = uVar33 & uVar10 | ~uVar33 & (uVar30 | ~uVar40 & uStack_e4);
    puVar22[0x16] = uVar38 & uVar11 | ~uVar38 & (uVar31 | ~uVar41 & uStack_e0);
    puVar22[0x17] = uVar37 & uVar12 | ~uVar37 & (uVar32 | ~uVar42 & uStack_dc);
    uStack_78 = auVar1._0_4_;
    uStack_74 = auVar1._4_4_;
    uStack_70 = auVar1._8_4_;
    uStack_6c = auVar1._12_4_;
    uStack_68 = auVar2._0_4_;
    uStack_64 = auVar2._4_4_;
    uStack_60 = auVar2._8_4_;
    uStack_5c = auVar2._12_4_;
    uStack_d8 = (uint)uVar13;
    uStack_d4 = (uint)((ulonglong)uVar13 >> 0x20);
    uStack_d0 = (uint)uVar14;
    uStack_cc = (uint)((ulonglong)uVar14 >> 0x20);
    uStack_c8 = (uint)uVar15;
    uStack_c4 = (uint)((ulonglong)uVar15 >> 0x20);
    uStack_c0 = (uint)uVar16;
    uStack_bc = (uint)((ulonglong)uVar16 >> 0x20);
    *puVar22 = uVar34 & uStack_d8 | ~uVar34 & (uVar39 & uStack_78 | ~uVar39 & uStack_138);
    puVar22[1] = uVar33 & uStack_d4 | ~uVar33 & (uVar40 & uStack_74 | ~uVar40 & uStack_134);
    puVar22[2] = uVar38 & uStack_d0 | ~uVar38 & (uVar41 & uStack_70 | ~uVar41 & uStack_130);
    puVar22[3] = uVar37 & uStack_cc | ~uVar37 & (uVar42 & uStack_6c | ~uVar42 & uStack_12c);
    puVar22[4] = uVar34 & uStack_c8 | ~uVar34 & (uVar39 & uStack_68 | ~uVar39 & uStack_128);
    puVar22[5] = uVar33 & uStack_c4 | ~uVar33 & (uVar40 & uStack_64 | ~uVar40 & uStack_124);
    puVar22[6] = uVar38 & uStack_c0 | ~uVar38 & (uVar41 & uStack_60 | ~uVar41 & uStack_120);
    puVar22[7] = uVar37 & uStack_bc | ~uVar37 & (uVar42 & uStack_5c | ~uVar42 & uStack_11c);
    uStack_58._0_4_ = auVar3._0_4_;
    uStack_58._4_4_ = auVar3._4_4_;
    uStack_50 = auVar3._8_4_;
    uStack_4c = auVar3._12_4_;
    uStack_48 = auVar4._0_4_;
    uStack_44 = auVar4._4_4_;
    uStack_40 = auVar4._8_4_;
    uStack_3c = auVar4._12_4_;
    uStack_b8 = (uint)uVar17;
    uStack_b4 = (uint)((ulonglong)uVar17 >> 0x20);
    uStack_b0 = (uint)uVar18;
    uStack_ac = (uint)((ulonglong)uVar18 >> 0x20);
    uStack_a8 = (uint)uVar19;
    uStack_a4 = (uint)((ulonglong)uVar19 >> 0x20);
    uStack_a0 = (uint)uVar20;
    uStack_9c = (uint)((ulonglong)uVar20 >> 0x20);
    puVar22[8] = uVar34 & uStack_b8 | ~uVar34 & (uVar39 & (uint)uStack_58 | ~uVar39 & uStack_118);
    puVar22[9] = uVar33 & uStack_b4 | ~uVar33 & (uVar40 & uStack_58._4_4_ | ~uVar40 & uStack_114);
    puVar22[10] = uVar38 & uStack_b0 | ~uVar38 & (uVar41 & uStack_50 | ~uVar41 & uStack_110);
    puVar22[0xb] = uVar37 & uStack_ac | ~uVar37 & (uVar42 & uStack_4c | ~uVar42 & uStack_10c);
    puVar22[0xc] = uVar34 & uStack_a8 | ~uVar34 & (uVar39 & uStack_48 | ~uVar39 & uStack_108);
    puVar22[0xd] = uVar33 & uStack_a4 | ~uVar33 & (uVar40 & uStack_44 | ~uVar40 & uStack_104);
    puVar22[0xe] = uVar38 & uStack_a0 | ~uVar38 & (uVar41 & uStack_40 | ~uVar41 & uStack_100);
    puVar22[0xf] = uVar37 & uStack_9c | ~uVar37 & (uVar42 & uStack_3c | ~uVar42 & uStack_fc);
    return;
  }
  uVar13 = *param_2;
  uVar14 = param_2[1];
  uVar15 = param_2[2];
  uVar16 = param_2[3];
  uVar17 = param_2[4];
  uVar18 = param_2[5];
  uVar19 = param_2[6];
  uVar20 = param_2[7];
  puVar22 = (uint *)(param_2 + 8);
  uVar5 = *puVar22;
  uVar6 = *(uint *)((longlong)param_2 + 0x44);
  uVar21 = *(undefined8 *)puVar22;
  uVar24 = *(undefined8 *)puVar22;
  uVar7 = *(uint *)(param_2 + 9);
  uVar8 = *(uint *)((longlong)param_2 + 0x4c);
  uVar9 = *(uint *)(param_2 + 10);
  uVar10 = *(uint *)((longlong)param_2 + 0x54);
  uVar11 = *(uint *)(param_2 + 0xb);
  uVar12 = *(uint *)((longlong)param_2 + 0x5c);
  auVar1 = *param_3;
  auVar2 = param_3[1];
  auVar3 = param_3[2];
  auVar4 = param_3[3];
  uVar38 = uVar9 | uVar5 | uVar10 | uVar6 | uVar11 | uVar7 | uVar12 | uVar8;
  uVar33 = 0;
  auVar29 = auVar4 | auVar3 | auVar2 | auVar1;
  uVar23 = __ecp_nistz256_sqr_montx(param_1,param_2[8],param_2[0xb]);
  uVar39 = -(uint)(uVar38 == uVar33);
  auVar36._4_4_ = auVar29._0_4_;
  auVar36._0_4_ = auVar29._4_4_;
  auVar36._8_4_ = auVar29._12_4_;
  auVar36._12_4_ = auVar29._8_4_;
  uVar34 = -(uint)(SUB164(auVar36 | auVar29,0) == 0 && SUB164(auVar36 | auVar29,8) == 0);
  uVar33 = uVar34;
  uVar38 = uVar34;
  uVar37 = uVar34;
  uVar40 = uVar39;
  uVar41 = uVar39;
  uVar42 = uVar39;
  __ecp_nistz256_mul_montx(uVar23,*(undefined8 *)*param_3);
  uVar23 = __ecp_nistz256_sub_fromx();
  uVar24 = __ecp_nistz256_mul_montx(uVar23,uVar24);
  uVar24 = __ecp_nistz256_mul_montx(uVar24,uVar21);
  uStack_58 = auVar3._0_8_;
  __ecp_nistz256_mul_montx(uVar24,uStack_58);
  uVar24 = __ecp_nistz256_sub_fromx();
  uVar24 = __ecp_nistz256_sqr_montx(uVar24,uStack_1d8,uStack_1c0);
  uVar24 = __ecp_nistz256_sqr_montx(uVar24,uStack_1b8);
  uVar24 = __ecp_nistz256_mul_montx(uVar24,uStack_198);
  __ecp_nistz256_mul_montx(uVar24,uVar13);
  __ecp_nistz256_subx(uStack_148);
  __ecp_nistz256_sub_fromx();
  uVar24 = __ecp_nistz256_subx(uStack_208);
  uVar24 = __ecp_nistz256_mul_montx(uVar24,uVar17);
  __ecp_nistz256_mul_montx(uVar24,uStack_1b8);
  puVar22 = (uint *)__ecp_nistz256_sub_fromx();
  uVar25 = uVar40 & _UNK_140e570a4;
  uVar26 = uVar41 & _UNK_140e570a8;
  uVar27 = uVar42 & _UNK_140e570ac;
  uVar28 = uVar39 & _DAT_140e570b0;
  uVar30 = uVar40 & _UNK_140e570b4;
  uVar31 = uVar41 & _UNK_140e570b8;
  uVar32 = uVar42 & _UNK_140e570bc;
  puVar22[0x10] = uVar34 & uVar5 | ~uVar34 & (uVar39 & _L_ONE_mont | ~uVar39 & uStack_f8);
  puVar22[0x11] = uVar33 & uVar6 | ~uVar33 & (uVar25 | ~uVar40 & uStack_f4);
  puVar22[0x12] = uVar38 & uVar7 | ~uVar38 & (uVar26 | ~uVar41 & uStack_f0);
  puVar22[0x13] = uVar37 & uVar8 | ~uVar37 & (uVar27 | ~uVar42 & uStack_ec);
  puVar22[0x14] = uVar34 & uVar9 | ~uVar34 & (uVar28 | ~uVar39 & uStack_e8);
  puVar22[0x15] = uVar33 & uVar10 | ~uVar33 & (uVar30 | ~uVar40 & uStack_e4);
  puVar22[0x16] = uVar38 & uVar11 | ~uVar38 & (uVar31 | ~uVar41 & uStack_e0);
  puVar22[0x17] = uVar37 & uVar12 | ~uVar37 & (uVar32 | ~uVar42 & uStack_dc);
  uStack_78 = auVar1._0_4_;
  uStack_74 = auVar1._4_4_;
  uStack_70 = auVar1._8_4_;
  uStack_6c = auVar1._12_4_;
  uStack_68 = auVar2._0_4_;
  uStack_64 = auVar2._4_4_;
  uStack_60 = auVar2._8_4_;
  uStack_5c = auVar2._12_4_;
  uStack_d8 = (uint)uVar13;
  uStack_d4 = (uint)((ulonglong)uVar13 >> 0x20);
  uStack_d0 = (uint)uVar14;
  uStack_cc = (uint)((ulonglong)uVar14 >> 0x20);
  uStack_c8 = (uint)uVar15;
  uStack_c4 = (uint)((ulonglong)uVar15 >> 0x20);
  uStack_c0 = (uint)uVar16;
  uStack_bc = (uint)((ulonglong)uVar16 >> 0x20);
  *puVar22 = uVar34 & uStack_d8 | ~uVar34 & (uVar39 & uStack_78 | ~uVar39 & uStack_138);
  puVar22[1] = uVar33 & uStack_d4 | ~uVar33 & (uVar40 & uStack_74 | ~uVar40 & uStack_134);
  puVar22[2] = uVar38 & uStack_d0 | ~uVar38 & (uVar41 & uStack_70 | ~uVar41 & uStack_130);
  puVar22[3] = uVar37 & uStack_cc | ~uVar37 & (uVar42 & uStack_6c | ~uVar42 & uStack_12c);
  puVar22[4] = uVar34 & uStack_c8 | ~uVar34 & (uVar39 & uStack_68 | ~uVar39 & uStack_128);
  puVar22[5] = uVar33 & uStack_c4 | ~uVar33 & (uVar40 & uStack_64 | ~uVar40 & uStack_124);
  puVar22[6] = uVar38 & uStack_c0 | ~uVar38 & (uVar41 & uStack_60 | ~uVar41 & uStack_120);
  puVar22[7] = uVar37 & uStack_bc | ~uVar37 & (uVar42 & uStack_5c | ~uVar42 & uStack_11c);
  uStack_58._0_4_ = auVar3._0_4_;
  uStack_58._4_4_ = auVar3._4_4_;
  uStack_50 = auVar3._8_4_;
  uStack_4c = auVar3._12_4_;
  uStack_48 = auVar4._0_4_;
  uStack_44 = auVar4._4_4_;
  uStack_40 = auVar4._8_4_;
  uStack_3c = auVar4._12_4_;
  uStack_b8 = (uint)uVar17;
  uStack_b4 = (uint)((ulonglong)uVar17 >> 0x20);
  uStack_b0 = (uint)uVar18;
  uStack_ac = (uint)((ulonglong)uVar18 >> 0x20);
  uStack_a8 = (uint)uVar19;
  uStack_a4 = (uint)((ulonglong)uVar19 >> 0x20);
  uStack_a0 = (uint)uVar20;
  uStack_9c = (uint)((ulonglong)uVar20 >> 0x20);
  puVar22[8] = uVar34 & uStack_b8 | ~uVar34 & (uVar39 & (uint)uStack_58 | ~uVar39 & uStack_118);
  puVar22[9] = uVar33 & uStack_b4 | ~uVar33 & (uVar40 & uStack_58._4_4_ | ~uVar40 & uStack_114);
  puVar22[10] = uVar38 & uStack_b0 | ~uVar38 & (uVar41 & uStack_50 | ~uVar41 & uStack_110);
  puVar22[0xb] = uVar37 & uStack_ac | ~uVar37 & (uVar42 & uStack_4c | ~uVar42 & uStack_10c);
  puVar22[0xc] = uVar34 & uStack_a8 | ~uVar34 & (uVar39 & uStack_48 | ~uVar39 & uStack_108);
  puVar22[0xd] = uVar33 & uStack_a4 | ~uVar33 & (uVar40 & uStack_44 | ~uVar40 & uStack_104);
  puVar22[0xe] = uVar38 & uStack_a0 | ~uVar38 & (uVar41 & uStack_40 | ~uVar41 & uStack_100);
  puVar22[0xf] = uVar37 & uStack_9c | ~uVar37 & (uVar42 & uStack_3c | ~uVar42 & uStack_fc);
  return;
}

// L$SEH_begin_ecp_nistz256_point_add_affine @ 140e5a02d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L_SEH_begin_ecp_nistz256_point_add_affine
               (undefined8 param_1,undefined8 *param_2,undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  uint *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar30;
  uint uVar31;
  undefined1 auVar29 [16];
  uint uVar32;
  uint uVar33;
  uint uVar34;
  undefined1 auVar35 [16];
  uint uVar37;
  undefined1 auVar36 [16];
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  undefined8 local_208;
  undefined8 local_1d8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_198;
  undefined8 local_148;
  uint local_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  uint local_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  uint local_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint local_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  uint local_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  uint local_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  uint uStack_50;
  uint uStack_4c;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  
  if ((_DAT_15540a9f8 & 0x80100) != 0x80100) {
    uVar13 = *param_2;
    uVar14 = param_2[1];
    uVar15 = param_2[2];
    uVar16 = param_2[3];
    uVar17 = param_2[4];
    uVar18 = param_2[5];
    uVar19 = param_2[6];
    uVar20 = param_2[7];
    uVar5 = *(uint *)(param_2 + 8);
    uVar6 = *(uint *)((longlong)param_2 + 0x44);
    uVar7 = *(uint *)(param_2 + 9);
    uVar8 = *(uint *)((longlong)param_2 + 0x4c);
    uVar9 = *(uint *)(param_2 + 10);
    uVar10 = *(uint *)((longlong)param_2 + 0x54);
    uVar11 = *(uint *)(param_2 + 0xb);
    uVar12 = *(uint *)((longlong)param_2 + 0x5c);
    auVar1 = *param_3;
    auVar2 = param_3[1];
    auVar3 = param_3[2];
    auVar4 = param_3[3];
    uVar38 = uVar9 | uVar5 | uVar10 | uVar6 | uVar11 | uVar7 | uVar12 | uVar8;
    uVar33 = 0;
    auVar29 = auVar4 | auVar3 | auVar2 | auVar1;
    __ecp_nistz256_sqr_montq(param_1,param_3,param_2[0xb]);
    uVar39 = -(uint)(uVar38 == uVar33);
    auVar35._4_4_ = auVar29._0_4_;
    auVar35._0_4_ = auVar29._4_4_;
    auVar35._8_4_ = auVar29._12_4_;
    auVar35._12_4_ = auVar29._8_4_;
    uVar34 = -(uint)(SUB164(auVar35 | auVar29,0) == 0 && SUB164(auVar35 | auVar29,8) == 0);
    uVar33 = uVar34;
    uVar38 = uVar34;
    uVar37 = uVar34;
    uVar40 = uVar39;
    uVar41 = uVar39;
    uVar42 = uVar39;
    __ecp_nistz256_mul_montq();
    __ecp_nistz256_sub_fromq();
    __ecp_nistz256_mul_montq();
    __ecp_nistz256_mul_montq();
    __ecp_nistz256_mul_montq();
    __ecp_nistz256_sub_fromq();
    __ecp_nistz256_sqr_montq();
    __ecp_nistz256_sqr_montq();
    __ecp_nistz256_mul_montq();
    __ecp_nistz256_mul_montq();
    __ecp_nistz256_subq(local_148);
    __ecp_nistz256_sub_fromq();
    __ecp_nistz256_subq(local_208);
    __ecp_nistz256_mul_montq();
    __ecp_nistz256_mul_montq();
    puVar22 = (uint *)__ecp_nistz256_sub_fromq();
    uVar25 = uVar40 & _UNK_140e570a4;
    uVar26 = uVar41 & _UNK_140e570a8;
    uVar27 = uVar42 & _UNK_140e570ac;
    uVar28 = uVar39 & _DAT_140e570b0;
    uVar30 = uVar40 & _UNK_140e570b4;
    uVar31 = uVar41 & _UNK_140e570b8;
    uVar32 = uVar42 & _UNK_140e570bc;
    puVar22[0x10] = uVar34 & uVar5 | ~uVar34 & (uVar39 & _L_ONE_mont | ~uVar39 & local_f8);
    puVar22[0x11] = uVar33 & uVar6 | ~uVar33 & (uVar25 | ~uVar40 & uStack_f4);
    puVar22[0x12] = uVar38 & uVar7 | ~uVar38 & (uVar26 | ~uVar41 & uStack_f0);
    puVar22[0x13] = uVar37 & uVar8 | ~uVar37 & (uVar27 | ~uVar42 & uStack_ec);
    puVar22[0x14] = uVar34 & uVar9 | ~uVar34 & (uVar28 | ~uVar39 & local_e8);
    puVar22[0x15] = uVar33 & uVar10 | ~uVar33 & (uVar30 | ~uVar40 & uStack_e4);
    puVar22[0x16] = uVar38 & uVar11 | ~uVar38 & (uVar31 | ~uVar41 & uStack_e0);
    puVar22[0x17] = uVar37 & uVar12 | ~uVar37 & (uVar32 | ~uVar42 & uStack_dc);
    local_78 = auVar1._0_4_;
    uStack_74 = auVar1._4_4_;
    uStack_70 = auVar1._8_4_;
    uStack_6c = auVar1._12_4_;
    local_68 = auVar2._0_4_;
    uStack_64 = auVar2._4_4_;
    uStack_60 = auVar2._8_4_;
    uStack_5c = auVar2._12_4_;
    local_d8 = (uint)uVar13;
    uStack_d4 = (uint)((ulonglong)uVar13 >> 0x20);
    uStack_d0 = (uint)uVar14;
    uStack_cc = (uint)((ulonglong)uVar14 >> 0x20);
    local_c8 = (uint)uVar15;
    uStack_c4 = (uint)((ulonglong)uVar15 >> 0x20);
    uStack_c0 = (uint)uVar16;
    uStack_bc = (uint)((ulonglong)uVar16 >> 0x20);
    *puVar22 = uVar34 & local_d8 | ~uVar34 & (uVar39 & local_78 | ~uVar39 & local_138);
    puVar22[1] = uVar33 & uStack_d4 | ~uVar33 & (uVar40 & uStack_74 | ~uVar40 & uStack_134);
    puVar22[2] = uVar38 & uStack_d0 | ~uVar38 & (uVar41 & uStack_70 | ~uVar41 & uStack_130);
    puVar22[3] = uVar37 & uStack_cc | ~uVar37 & (uVar42 & uStack_6c | ~uVar42 & uStack_12c);
    puVar22[4] = uVar34 & local_c8 | ~uVar34 & (uVar39 & local_68 | ~uVar39 & local_128);
    puVar22[5] = uVar33 & uStack_c4 | ~uVar33 & (uVar40 & uStack_64 | ~uVar40 & uStack_124);
    puVar22[6] = uVar38 & uStack_c0 | ~uVar38 & (uVar41 & uStack_60 | ~uVar41 & uStack_120);
    puVar22[7] = uVar37 & uStack_bc | ~uVar37 & (uVar42 & uStack_5c | ~uVar42 & uStack_11c);
    local_58._0_4_ = auVar3._0_4_;
    local_58._4_4_ = auVar3._4_4_;
    uStack_50 = auVar3._8_4_;
    uStack_4c = auVar3._12_4_;
    local_48 = auVar4._0_4_;
    uStack_44 = auVar4._4_4_;
    uStack_40 = auVar4._8_4_;
    uStack_3c = auVar4._12_4_;
    local_b8 = (uint)uVar17;
    uStack_b4 = (uint)((ulonglong)uVar17 >> 0x20);
    uStack_b0 = (uint)uVar18;
    uStack_ac = (uint)((ulonglong)uVar18 >> 0x20);
    local_a8 = (uint)uVar19;
    uStack_a4 = (uint)((ulonglong)uVar19 >> 0x20);
    uStack_a0 = (uint)uVar20;
    uStack_9c = (uint)((ulonglong)uVar20 >> 0x20);
    puVar22[8] = uVar34 & local_b8 | ~uVar34 & (uVar39 & (uint)local_58 | ~uVar39 & local_118);
    puVar22[9] = uVar33 & uStack_b4 | ~uVar33 & (uVar40 & local_58._4_4_ | ~uVar40 & uStack_114);
    puVar22[10] = uVar38 & uStack_b0 | ~uVar38 & (uVar41 & uStack_50 | ~uVar41 & uStack_110);
    puVar22[0xb] = uVar37 & uStack_ac | ~uVar37 & (uVar42 & uStack_4c | ~uVar42 & uStack_10c);
    puVar22[0xc] = uVar34 & local_a8 | ~uVar34 & (uVar39 & local_48 | ~uVar39 & local_108);
    puVar22[0xd] = uVar33 & uStack_a4 | ~uVar33 & (uVar40 & uStack_44 | ~uVar40 & uStack_104);
    puVar22[0xe] = uVar38 & uStack_a0 | ~uVar38 & (uVar41 & uStack_40 | ~uVar41 & uStack_100);
    puVar22[0xf] = uVar37 & uStack_9c | ~uVar37 & (uVar42 & uStack_3c | ~uVar42 & uStack_fc);
    return;
  }
  uVar13 = *param_2;
  uVar14 = param_2[1];
  uVar15 = param_2[2];
  uVar16 = param_2[3];
  uVar17 = param_2[4];
  uVar18 = param_2[5];
  uVar19 = param_2[6];
  uVar20 = param_2[7];
  puVar22 = (uint *)(param_2 + 8);
  uVar5 = *puVar22;
  uVar6 = *(uint *)((longlong)param_2 + 0x44);
  uVar21 = *(undefined8 *)puVar22;
  uVar24 = *(undefined8 *)puVar22;
  uVar7 = *(uint *)(param_2 + 9);
  uVar8 = *(uint *)((longlong)param_2 + 0x4c);
  uVar9 = *(uint *)(param_2 + 10);
  uVar10 = *(uint *)((longlong)param_2 + 0x54);
  uVar11 = *(uint *)(param_2 + 0xb);
  uVar12 = *(uint *)((longlong)param_2 + 0x5c);
  auVar1 = *param_3;
  auVar2 = param_3[1];
  auVar3 = param_3[2];
  auVar4 = param_3[3];
  uVar38 = uVar9 | uVar5 | uVar10 | uVar6 | uVar11 | uVar7 | uVar12 | uVar8;
  uVar33 = 0;
  auVar29 = auVar4 | auVar3 | auVar2 | auVar1;
  uVar23 = __ecp_nistz256_sqr_montx(param_1,param_2[8],param_2[0xb]);
  uVar39 = -(uint)(uVar38 == uVar33);
  auVar36._4_4_ = auVar29._0_4_;
  auVar36._0_4_ = auVar29._4_4_;
  auVar36._8_4_ = auVar29._12_4_;
  auVar36._12_4_ = auVar29._8_4_;
  uVar34 = -(uint)(SUB164(auVar36 | auVar29,0) == 0 && SUB164(auVar36 | auVar29,8) == 0);
  uVar33 = uVar34;
  uVar38 = uVar34;
  uVar37 = uVar34;
  uVar40 = uVar39;
  uVar41 = uVar39;
  uVar42 = uVar39;
  __ecp_nistz256_mul_montx(uVar23,*(undefined8 *)*param_3);
  uVar23 = __ecp_nistz256_sub_fromx();
  uVar24 = __ecp_nistz256_mul_montx(uVar23,uVar24);
  uVar24 = __ecp_nistz256_mul_montx(uVar24,uVar21);
  local_58 = auVar3._0_8_;
  __ecp_nistz256_mul_montx(uVar24,local_58);
  uVar24 = __ecp_nistz256_sub_fromx();
  uVar24 = __ecp_nistz256_sqr_montx(uVar24,local_1d8,local_1c0);
  uVar24 = __ecp_nistz256_sqr_montx(uVar24,local_1b8);
  uVar24 = __ecp_nistz256_mul_montx(uVar24,local_198);
  __ecp_nistz256_mul_montx(uVar24,uVar13);
  __ecp_nistz256_subx(local_148);
  __ecp_nistz256_sub_fromx();
  uVar24 = __ecp_nistz256_subx(local_208);
  uVar24 = __ecp_nistz256_mul_montx(uVar24,uVar17);
  __ecp_nistz256_mul_montx(uVar24,local_1b8);
  puVar22 = (uint *)__ecp_nistz256_sub_fromx();
  uVar25 = uVar40 & _UNK_140e570a4;
  uVar26 = uVar41 & _UNK_140e570a8;
  uVar27 = uVar42 & _UNK_140e570ac;
  uVar28 = uVar39 & _DAT_140e570b0;
  uVar30 = uVar40 & _UNK_140e570b4;
  uVar31 = uVar41 & _UNK_140e570b8;
  uVar32 = uVar42 & _UNK_140e570bc;
  puVar22[0x10] = uVar34 & uVar5 | ~uVar34 & (uVar39 & _L_ONE_mont | ~uVar39 & local_f8);
  puVar22[0x11] = uVar33 & uVar6 | ~uVar33 & (uVar25 | ~uVar40 & uStack_f4);
  puVar22[0x12] = uVar38 & uVar7 | ~uVar38 & (uVar26 | ~uVar41 & uStack_f0);
  puVar22[0x13] = uVar37 & uVar8 | ~uVar37 & (uVar27 | ~uVar42 & uStack_ec);
  puVar22[0x14] = uVar34 & uVar9 | ~uVar34 & (uVar28 | ~uVar39 & local_e8);
  puVar22[0x15] = uVar33 & uVar10 | ~uVar33 & (uVar30 | ~uVar40 & uStack_e4);
  puVar22[0x16] = uVar38 & uVar11 | ~uVar38 & (uVar31 | ~uVar41 & uStack_e0);
  puVar22[0x17] = uVar37 & uVar12 | ~uVar37 & (uVar32 | ~uVar42 & uStack_dc);
  local_78 = auVar1._0_4_;
  uStack_74 = auVar1._4_4_;
  uStack_70 = auVar1._8_4_;
  uStack_6c = auVar1._12_4_;
  local_68 = auVar2._0_4_;
  uStack_64 = auVar2._4_4_;
  uStack_60 = auVar2._8_4_;
  uStack_5c = auVar2._12_4_;
  local_d8 = (uint)uVar13;
  uStack_d4 = (uint)((ulonglong)uVar13 >> 0x20);
  uStack_d0 = (uint)uVar14;
  uStack_cc = (uint)((ulonglong)uVar14 >> 0x20);
  local_c8 = (uint)uVar15;
  uStack_c4 = (uint)((ulonglong)uVar15 >> 0x20);
  uStack_c0 = (uint)uVar16;
  uStack_bc = (uint)((ulonglong)uVar16 >> 0x20);
  *puVar22 = uVar34 & local_d8 | ~uVar34 & (uVar39 & local_78 | ~uVar39 & local_138);
  puVar22[1] = uVar33 & uStack_d4 | ~uVar33 & (uVar40 & uStack_74 | ~uVar40 & uStack_134);
  puVar22[2] = uVar38 & uStack_d0 | ~uVar38 & (uVar41 & uStack_70 | ~uVar41 & uStack_130);
  puVar22[3] = uVar37 & uStack_cc | ~uVar37 & (uVar42 & uStack_6c | ~uVar42 & uStack_12c);
  puVar22[4] = uVar34 & local_c8 | ~uVar34 & (uVar39 & local_68 | ~uVar39 & local_128);
  puVar22[5] = uVar33 & uStack_c4 | ~uVar33 & (uVar40 & uStack_64 | ~uVar40 & uStack_124);
  puVar22[6] = uVar38 & uStack_c0 | ~uVar38 & (uVar41 & uStack_60 | ~uVar41 & uStack_120);
  puVar22[7] = uVar37 & uStack_bc | ~uVar37 & (uVar42 & uStack_5c | ~uVar42 & uStack_11c);
  local_58._0_4_ = auVar3._0_4_;
  local_58._4_4_ = auVar3._4_4_;
  uStack_50 = auVar3._8_4_;
  uStack_4c = auVar3._12_4_;
  local_48 = auVar4._0_4_;
  uStack_44 = auVar4._4_4_;
  uStack_40 = auVar4._8_4_;
  uStack_3c = auVar4._12_4_;
  local_b8 = (uint)uVar17;
  uStack_b4 = (uint)((ulonglong)uVar17 >> 0x20);
  uStack_b0 = (uint)uVar18;
  uStack_ac = (uint)((ulonglong)uVar18 >> 0x20);
  local_a8 = (uint)uVar19;
  uStack_a4 = (uint)((ulonglong)uVar19 >> 0x20);
  uStack_a0 = (uint)uVar20;
  uStack_9c = (uint)((ulonglong)uVar20 >> 0x20);
  puVar22[8] = uVar34 & local_b8 | ~uVar34 & (uVar39 & (uint)local_58 | ~uVar39 & local_118);
  puVar22[9] = uVar33 & uStack_b4 | ~uVar33 & (uVar40 & local_58._4_4_ | ~uVar40 & uStack_114);
  puVar22[10] = uVar38 & uStack_b0 | ~uVar38 & (uVar41 & uStack_50 | ~uVar41 & uStack_110);
  puVar22[0xb] = uVar37 & uStack_ac | ~uVar37 & (uVar42 & uStack_4c | ~uVar42 & uStack_10c);
  puVar22[0xc] = uVar34 & local_a8 | ~uVar34 & (uVar39 & local_48 | ~uVar39 & local_108);
  puVar22[0xd] = uVar33 & uStack_a4 | ~uVar33 & (uVar40 & uStack_44 | ~uVar40 & uStack_104);
  puVar22[0xe] = uVar38 & uStack_a0 | ~uVar38 & (uVar41 & uStack_40 | ~uVar41 & uStack_100);
  puVar22[0xf] = uVar37 & uStack_9c | ~uVar37 & (uVar42 & uStack_3c | ~uVar42 & uStack_fc);
  return;
}

// __ecp_nistz256_add_tox @ 140e5a5c0

void __ecp_nistz256_add_tox
               (undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  longlong lVar5;
  ulonglong *unaff_RBX;
  longlong *unaff_RDI;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong unaff_R12;
  ulonglong unaff_R13;
  ulonglong uVar10;
  ulonglong unaff_R14;
  ulonglong unaff_R15;
  
  lVar1 = unaff_R12 + *unaff_RBX;
  uVar9 = unaff_R13 + unaff_RBX[1];
  uVar10 = uVar9 + CARRY8(unaff_R12,*unaff_RBX);
  uVar9 = (ulonglong)
          (CARRY8(unaff_R13,unaff_RBX[1]) || CARRY8(uVar9,(ulonglong)CARRY8(unaff_R12,*unaff_RBX)));
  uVar7 = param_3 + unaff_RBX[2];
  uVar6 = uVar7 + uVar9;
  uVar9 = (ulonglong)(CARRY8(param_3,unaff_RBX[2]) || CARRY8(uVar7,uVar9));
  uVar7 = param_4 + unaff_RBX[3];
  uVar8 = uVar7 + uVar9;
  uVar2 = (ulonglong)(uVar10 < unaff_R14 || uVar10 - unaff_R14 < (ulonglong)(lVar1 != -1));
  uVar3 = (ulonglong)(uVar6 < uVar2);
  bVar4 = (CARRY8(param_4,unaff_RBX[3]) || CARRY8(uVar7,uVar9)) <
          (uVar8 < unaff_R15 || uVar8 - unaff_R15 < uVar3);
  uVar9 = (uVar10 - unaff_R14) - (ulonglong)(lVar1 != -1);
  lVar5 = lVar1 + 1;
  if (bVar4) {
    uVar9 = uVar10;
    lVar5 = lVar1;
  }
  *unaff_RDI = lVar5;
  uVar7 = uVar6 - uVar2;
  if (bVar4) {
    uVar7 = uVar6;
  }
  unaff_RDI[1] = uVar9;
  uVar9 = (uVar8 - unaff_R15) - uVar3;
  if (bVar4) {
    uVar9 = uVar8;
  }
  unaff_RDI[2] = uVar7;
  unaff_RDI[3] = uVar9;
  return;
}

// __ecp_nistz256_sub_fromx @ 140e5a620

void __ecp_nistz256_sub_fromx
               (undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong *unaff_RBX;
  longlong *unaff_RDI;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong unaff_R12;
  ulonglong unaff_R13;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong unaff_R14;
  longlong unaff_R15;
  bool bVar9;
  
  lVar6 = unaff_R12 - *unaff_RBX;
  uVar1 = unaff_R13 - unaff_RBX[1];
  uVar7 = uVar1 - (unaff_R12 < *unaff_RBX);
  uVar1 = (ulonglong)(unaff_R13 < unaff_RBX[1] || uVar1 < (unaff_R12 < *unaff_RBX));
  uVar8 = param_3 - unaff_RBX[2];
  uVar4 = uVar8 - uVar1;
  uVar1 = (ulonglong)(param_3 < unaff_RBX[2] || uVar8 < uVar1);
  bVar9 = unaff_RBX[3] <= param_4;
  param_4 = param_4 - unaff_RBX[3];
  bVar2 = uVar1 <= param_4;
  lVar5 = param_4 - uVar1;
  uVar1 = (ulonglong)(CARRY8(uVar7,unaff_R14) || CARRY8(uVar7 + unaff_R14,(ulonglong)(lVar6 != 0)));
  uVar8 = uVar7 + unaff_R14 + (ulonglong)(lVar6 != 0);
  lVar3 = lVar6 + -1;
  if (bVar9 && bVar2) {
    uVar8 = uVar7;
    lVar3 = lVar6;
  }
  *unaff_RDI = lVar3;
  uVar7 = uVar4 + uVar1;
  if (bVar9 && bVar2) {
    uVar7 = uVar4;
  }
  unaff_RDI[1] = uVar8;
  lVar6 = lVar5 + unaff_R15 + (ulonglong)CARRY8(uVar4,uVar1);
  if (bVar9 && bVar2) {
    lVar6 = lVar5;
  }
  unaff_RDI[2] = uVar7;
  unaff_RDI[3] = lVar6;
  return;
}

// __ecp_nistz256_subx @ 140e5a680

longlong __ecp_nistz256_subx(void)

{
  longlong in_RAX;
  longlong unaff_R12;
  
  return (in_RAX - unaff_R12) + -1;
}

// __ecp_nistz256_mul_by_2x @ 140e5a6e0

void __ecp_nistz256_mul_by_2x
               (undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *unaff_RDI;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong unaff_R12;
  ulonglong unaff_R13;
  ulonglong uVar9;
  ulonglong unaff_R14;
  ulonglong unaff_R15;
  
  lVar3 = unaff_R12 * 2;
  uVar9 = unaff_R13 * 2 + (ulonglong)CARRY8(unaff_R12,unaff_R12);
  uVar8 = (ulonglong)
          (CARRY8(unaff_R13,unaff_R13) ||
          CARRY8(unaff_R13 * 2,(ulonglong)CARRY8(unaff_R12,unaff_R12)));
  uVar5 = param_3 * 2 + uVar8;
  uVar8 = (ulonglong)(CARRY8(param_3,param_3) || CARRY8(param_3 * 2,uVar8));
  uVar7 = param_4 * 2 + uVar8;
  uVar6 = (ulonglong)(uVar9 < unaff_R14 || uVar9 - unaff_R14 < (ulonglong)(lVar3 != -1));
  uVar1 = (ulonglong)(uVar5 < uVar6);
  bVar2 = (CARRY8(param_4,param_4) || CARRY8(param_4 * 2,uVar8)) <
          (uVar7 < unaff_R15 || uVar7 - unaff_R15 < uVar1);
  uVar8 = (uVar9 - unaff_R14) - (ulonglong)(lVar3 != -1);
  lVar4 = lVar3 + 1;
  if (bVar2) {
    uVar8 = uVar9;
    lVar4 = lVar3;
  }
  *unaff_RDI = lVar4;
  uVar6 = uVar5 - uVar6;
  if (bVar2) {
    uVar6 = uVar5;
  }
  unaff_RDI[1] = uVar8;
  uVar8 = (uVar7 - unaff_R15) - uVar1;
  if (bVar2) {
    uVar8 = uVar7;
  }
  unaff_RDI[2] = uVar6;
  unaff_RDI[3] = uVar8;
  return;
}

// ecp_nistz256_point_doublex @ 140e5a740

/* WARNING: Type propagation algorithm not settling */

void ecp_nistz256_point_doublex(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  ulonglong unaff_RBP;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong *puVar9;
  undefined1 auStack_158 [120];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulonglong uStack_d0;
  ulonglong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulonglong uStack_78;
  undefined1 *puStack_70;
  ulonglong uStack_68;
  ulonglong uStack_60;
  
  uStack_78 = *param_2;
  puStack_70 = (undefined1 *)param_2[1];
  uStack_68 = param_2[2];
  uStack_60 = param_2[3];
  puVar9 = (ulonglong *)(param_1 + 0x20);
  uStack_e0 = 0x140e5a7ba;
  uVar8 = __ecp_nistz256_mul_by_2x(param_1,puVar9,param_1 + 0x40,param_2[7]);
  uStack_e0 = 0x140e5a7d8;
  uVar8 = __ecp_nistz256_sqr_montx(uVar8,param_2[8],param_2[0xb]);
  uStack_e0 = 0x140e5a7f9;
  uVar8 = __ecp_nistz256_sqr_montx(uVar8,uStack_d8,uStack_c0);
  uStack_e0 = 0x140e5a81f;
  __ecp_nistz256_mul_montx(uVar8,param_2[4]);
  uStack_e0 = 0x140e5a824;
  __ecp_nistz256_mul_by_2x();
  uStack_e0 = 0x140e5a847;
  __ecp_nistz256_add_tox();
  puVar5 = puStack_70;
  uVar7 = uStack_78;
  uStack_e0 = 0x140e5a86a;
  uVar8 = __ecp_nistz256_sub_fromx();
  uStack_e0 = 0x140e5a88c;
  __ecp_nistz256_sqr_montx(uVar8,uStack_d8,uStack_c0);
  uVar1 = (ulonglong)
          (CARRY8((ulonglong)puVar5,(ulonglong)auStack_158) ||
          CARRY8((ulonglong)(puVar5 + (longlong)auStack_158),(ulonglong)(uVar7 != 0)));
  uVar2 = (ulonglong)CARRY8(uStack_d0,uVar1);
  uVar6 = (ulonglong)(CARRY8(uStack_c8,unaff_RBP) || CARRY8(uStack_c8 + unaff_RBP,uVar2));
  uVar2 = uStack_c8 + unaff_RBP + uVar2;
  uVar1 = uStack_d0 + uVar1;
  puVar3 = puVar5 + (longlong)auStack_158 + (uVar7 != 0);
  uVar4 = uVar7 - 1;
  if ((uVar7 & 1) == 0) {
    uVar6 = 0;
    uVar2 = uStack_c8;
    uVar1 = uStack_d0;
    puVar3 = puVar5;
    uVar4 = uVar7;
  }
  uVar7 = (ulonglong)puVar3 >> 1 | uVar1 << 0x3f;
  *puVar9 = uVar4 >> 1 | (longlong)puVar3 << 0x3f;
  puVar9[1] = uVar7;
  puVar9[2] = uVar1 >> 1 | uVar2 << 0x3f;
  puVar9[3] = uVar2 >> 1 | uVar6 << 0x3f;
  uStack_e0 = 0x140e5a937;
  __ecp_nistz256_mul_montx(uVar2 << 0x3f,uStack_98,uStack_c8,uStack_b8);
  uStack_e0 = 0x140e5a944;
  __ecp_nistz256_mul_by_2x();
  uStack_e0 = 0x140e5a953;
  uVar8 = __ecp_nistz256_add_tox();
  uStack_e0 = 0x140e5a97e;
  __ecp_nistz256_mul_montx(uVar8,uStack_78);
  uStack_e0 = 0x140e5a98b;
  uVar8 = __ecp_nistz256_mul_by_2x();
  uStack_e0 = 0x140e5a9ae;
  __ecp_nistz256_sqr_montx(uVar8,uStack_b8,uStack_a0);
  uStack_e0 = 0x140e5a9c7;
  __ecp_nistz256_sub_fromx();
  uStack_e0 = 0x140e5a9e3;
  __ecp_nistz256_subx();
  uStack_d8 = uStack_c0;
  uStack_e0 = 0x140e5aa21;
  uStack_d0 = uVar7;
  __ecp_nistz256_mul_montx(0,uStack_b8);
  uStack_e0 = 0x140e5aa30;
  __ecp_nistz256_sub_fromx();
  return;
}

// L$SEH_begin_ecp_nistz256_point_doublex @ 140e5a74d

/* WARNING: Type propagation algorithm not settling */

void L_SEH_begin_ecp_nistz256_point_doublex(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  ulonglong unaff_RBP;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong *puVar9;
  undefined1 local_158 [120];
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_a0;
  undefined8 local_98;
  ulonglong local_78;
  undefined1 *puStack_70;
  ulonglong local_68;
  ulonglong uStack_60;
  
  local_78 = *param_2;
  puStack_70 = (undefined1 *)param_2[1];
  local_68 = param_2[2];
  uStack_60 = param_2[3];
  puVar9 = (ulonglong *)(param_1 + 0x20);
  uStack_e0 = 0x140e5a7ba;
  uVar8 = __ecp_nistz256_mul_by_2x(param_1,puVar9,param_1 + 0x40,param_2[7]);
  uStack_e0 = 0x140e5a7d8;
  uVar8 = __ecp_nistz256_sqr_montx(uVar8,param_2[8],param_2[0xb]);
  uStack_e0 = 0x140e5a7f9;
  uVar8 = __ecp_nistz256_sqr_montx(uVar8,local_d8,local_c0);
  uStack_e0 = 0x140e5a81f;
  __ecp_nistz256_mul_montx(uVar8,param_2[4]);
  uStack_e0 = 0x140e5a824;
  __ecp_nistz256_mul_by_2x();
  uStack_e0 = 0x140e5a847;
  __ecp_nistz256_add_tox();
  puVar5 = puStack_70;
  uVar7 = local_78;
  uStack_e0 = 0x140e5a86a;
  uVar8 = __ecp_nistz256_sub_fromx();
  uStack_e0 = 0x140e5a88c;
  __ecp_nistz256_sqr_montx(uVar8,local_d8,local_c0);
  uVar1 = (ulonglong)
          (CARRY8((ulonglong)puVar5,(ulonglong)local_158) ||
          CARRY8((ulonglong)(puVar5 + (longlong)local_158),(ulonglong)(uVar7 != 0)));
  uVar2 = (ulonglong)CARRY8(local_d0,uVar1);
  uVar6 = (ulonglong)(CARRY8(local_c8,unaff_RBP) || CARRY8(local_c8 + unaff_RBP,uVar2));
  uVar2 = local_c8 + unaff_RBP + uVar2;
  uVar1 = local_d0 + uVar1;
  puVar3 = puVar5 + (longlong)local_158 + (uVar7 != 0);
  uVar4 = uVar7 - 1;
  if ((uVar7 & 1) == 0) {
    uVar6 = 0;
    uVar2 = local_c8;
    uVar1 = local_d0;
    puVar3 = puVar5;
    uVar4 = uVar7;
  }
  uVar7 = (ulonglong)puVar3 >> 1 | uVar1 << 0x3f;
  *puVar9 = uVar4 >> 1 | (longlong)puVar3 << 0x3f;
  puVar9[1] = uVar7;
  puVar9[2] = uVar1 >> 1 | uVar2 << 0x3f;
  puVar9[3] = uVar2 >> 1 | uVar6 << 0x3f;
  uStack_e0 = 0x140e5a937;
  __ecp_nistz256_mul_montx(uVar2 << 0x3f,local_98,local_c8,local_b8);
  uStack_e0 = 0x140e5a944;
  __ecp_nistz256_mul_by_2x();
  uStack_e0 = 0x140e5a953;
  uVar8 = __ecp_nistz256_add_tox();
  uStack_e0 = 0x140e5a97e;
  __ecp_nistz256_mul_montx(uVar8,local_78);
  uStack_e0 = 0x140e5a98b;
  uVar8 = __ecp_nistz256_mul_by_2x();
  uStack_e0 = 0x140e5a9ae;
  __ecp_nistz256_sqr_montx(uVar8,local_b8,local_a0);
  uStack_e0 = 0x140e5a9c7;
  __ecp_nistz256_sub_fromx();
  uStack_e0 = 0x140e5a9e3;
  __ecp_nistz256_subx();
  local_d8 = local_c0;
  uStack_e0 = 0x140e5aa21;
  local_d0 = uVar7;
  __ecp_nistz256_mul_montx(0,local_b8);
  uStack_e0 = 0x140e5aa30;
  __ecp_nistz256_sub_fromx();
  return;
}

// ecp_nistz256_point_addx @ 140e5aa60

/* WARNING: Type propagation algorithm not settling */

void ecp_nistz256_point_addx(undefined8 param_1,ulonglong *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  ulonglong uVar16;
  undefined1 *puVar17;
  ulonglong unaff_RBP;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong unaff_R13;
  ulonglong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  longlong lVar27;
  undefined1 (*pauVar28) [16];
  ulonglong *puVar29;
  undefined1 auVar30 [16];
  uint uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  uint uVar34;
  undefined1 auVar35 [16];
  undefined8 uStack_278;
  ulonglong uStack_270;
  ulonglong uStack_268;
  ulonglong uStack_260;
  ulonglong uStack_258;
  ulonglong uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_208;
  undefined8 uStack_1f8;
  undefined8 uStack_1d8;
  undefined8 uStack_1a8;
  ulonglong uStack_178;
  ulonglong uStack_160;
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [16];
  longlong lStack_138;
  ulonglong uStack_130;
  ulonglong uStack_128;
  ulonglong uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [16];
  ulonglong uStack_f8;
  ulonglong uStack_f0;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  ulonglong uStack_d8;
  ulonglong uStack_d0;
  ulonglong uStack_c8;
  ulonglong uStack_c0;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulonglong uStack_78;
  undefined1 *puStack_70;
  ulonglong uStack_68;
  ulonglong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_f8 = *param_2;
  uStack_f0 = param_2[1];
  uStack_e8 = param_2[2];
  uStack_e0 = param_2[3];
  uStack_d8 = param_2[4];
  uStack_d0 = param_2[5];
  uStack_c8 = param_2[6];
  uStack_c0 = param_2[7];
  uStack_b8 = (uint)param_2[8];
  uStack_b4 = *(uint *)((longlong)param_2 + 0x44);
  uStack_b0 = (uint)param_2[9];
  uStack_ac = *(uint *)((longlong)param_2 + 0x4c);
  uStack_a8 = (uint)param_2[10];
  uStack_a4 = *(uint *)((longlong)param_2 + 0x54);
  uStack_a0 = (uint)param_2[0xb];
  uStack_9c = *(uint *)((longlong)param_2 + 0x5c);
  uStack_98 = *param_3;
  uStack_90 = param_3[1];
  uStack_88 = param_3[2];
  uStack_80 = param_3[3];
  uStack_78 = param_3[4];
  puStack_70 = (undefined1 *)param_3[5];
  uStack_68 = param_3[6];
  uStack_60 = param_3[7];
  uStack_58 = param_3[8];
  uStack_50 = param_3[9];
  uStack_48 = param_3[10];
  uStack_40 = param_3[0xb];
  uVar34 = uStack_a8 | uStack_b8 | uStack_a4 | uStack_b4 |
           uStack_a0 | uStack_b0 | uStack_9c | uStack_ac;
  uVar31 = 0;
  auVar30 = *(undefined1 (*) [16])(param_3 + 10) | *(undefined1 (*) [16])(param_3 + 8);
  uVar26 = __ecp_nistz256_sqr_montx(param_1);
  auVar35._0_4_ = -(uint)(uVar34 == uVar31);
  auVar32._4_4_ = auVar30._0_4_;
  auVar32._0_4_ = auVar30._4_4_;
  auVar32._8_4_ = auVar30._12_4_;
  auVar32._12_4_ = auVar30._8_4_;
  auVar35._4_4_ = auVar35._0_4_;
  auVar35._8_4_ = auVar35._0_4_;
  auVar35._12_4_ = auVar35._0_4_;
  auVar33._0_4_ = -(uint)(SUB164(auVar32 | auVar30,0) == 0 && SUB164(auVar32 | auVar30,8) == 0);
  auVar33._4_4_ = auVar33._0_4_;
  auVar33._8_4_ = auVar33._0_4_;
  auVar33._12_4_ = auVar33._0_4_;
  uVar18 = param_2[0xb];
  uVar26 = __ecp_nistz256_sqr_montx(uVar26,param_2[8]);
  uVar26 = __ecp_nistz256_mul_montx(uVar26,uStack_58);
  uVar26 = __ecp_nistz256_mul_montx(uVar26,CONCAT44(uStack_b4,uStack_b8));
  uVar26 = __ecp_nistz256_mul_montx(uVar26,uStack_d8);
  __ecp_nistz256_mul_montx(uVar26,uStack_78);
  uVar26 = __ecp_nistz256_sub_fromx();
  uStack_178 = uStack_160 | unaff_R13 | uVar18 | uStack_178;
  auVar30 = auVar33 | auVar35;
  uVar26 = __ecp_nistz256_mul_montx(uVar26,uStack_f8,auVar30._0_8_,uStack_218);
  uVar22 = uStack_258;
  __ecp_nistz256_mul_montx(uVar26,uStack_98);
  lVar27 = __ecp_nistz256_sub_fromx();
  if (((((uStack_240 == 0 && unaff_R13 == 0) && uVar18 == 0) && uVar22 == 0) && auVar30._0_8_ == 0)
      && uStack_178 == 0) {
    uStack_78 = *param_2;
    puStack_70 = (undefined1 *)param_2[1];
    uStack_68 = param_2[2];
    uStack_60 = param_2[3];
    puVar29 = (ulonglong *)(lVar27 + 0x20);
    uStack_e0 = 0x140e5a7ba;
    uVar26 = __ecp_nistz256_mul_by_2x(lVar27,puVar29,lVar27 + 0x40,param_2[7]);
    uStack_e0 = 0x140e5a7d8;
    uVar26 = __ecp_nistz256_sqr_montx(uVar26,param_2[8],param_2[0xb]);
    uStack_e0 = 0x140e5a7f9;
    uVar26 = __ecp_nistz256_sqr_montx(uVar26,uStack_d8,uStack_c0);
    uStack_e0 = 0x140e5a81f;
    __ecp_nistz256_mul_montx(uVar26,param_2[4]);
    uStack_e0 = 0x140e5a824;
    __ecp_nistz256_mul_by_2x();
    uStack_e0 = 0x140e5a847;
    __ecp_nistz256_add_tox();
    puVar17 = puStack_70;
    uVar16 = uStack_78;
    uStack_e0 = 0x140e5a86a;
    uVar26 = __ecp_nistz256_sub_fromx();
    uVar24 = uStack_c8;
    uVar23 = uStack_d0;
    uStack_e0 = 0x140e5a88c;
    __ecp_nistz256_sqr_montx(uVar26,uStack_d8,uStack_c0);
    uVar18 = (ulonglong)
             (CARRY8((ulonglong)puVar17,(ulonglong)auStack_158) ||
             CARRY8((ulonglong)(puVar17 + (longlong)auStack_158),(ulonglong)(uVar16 != 0)));
    uVar22 = (ulonglong)CARRY8(uVar23,uVar18);
    uVar20 = (ulonglong)(CARRY8(uVar24,unaff_RBP) || CARRY8(uVar24 + unaff_RBP,uVar22));
    uVar22 = uVar24 + unaff_RBP + uVar22;
    uVar18 = uVar23 + uVar18;
    puVar1 = puVar17 + (longlong)auStack_158 + (uVar16 != 0);
    uVar19 = uVar16 - 1;
    if ((uVar16 & 1) == 0) {
      uVar20 = 0;
      uVar22 = uVar24;
      uVar18 = uVar23;
      puVar1 = puVar17;
      uVar19 = uVar16;
    }
    uVar23 = (ulonglong)puVar1 >> 1 | uVar18 << 0x3f;
    *puVar29 = uVar19 >> 1 | (longlong)puVar1 << 0x3f;
    puVar29[1] = uVar23;
    puVar29[2] = uVar18 >> 1 | uVar22 << 0x3f;
    puVar29[3] = uVar22 >> 1 | uVar20 << 0x3f;
    uStack_e0 = 0x140e5a937;
    __ecp_nistz256_mul_montx(uVar22 << 0x3f,uStack_98,uVar24,CONCAT44(uStack_b4,uStack_b8));
    uStack_e0 = 0x140e5a944;
    __ecp_nistz256_mul_by_2x();
    uStack_e0 = 0x140e5a953;
    uVar26 = __ecp_nistz256_add_tox();
    uVar18 = uStack_c0;
    uStack_e0 = 0x140e5a97e;
    __ecp_nistz256_mul_montx(uVar26,uStack_78);
    uStack_e0 = 0x140e5a98b;
    uVar25 = __ecp_nistz256_mul_by_2x();
    uVar26 = CONCAT44(uStack_ac,uStack_b0);
    uVar21 = CONCAT44(uStack_a4,uStack_a8);
    uStack_e0 = 0x140e5a9ae;
    __ecp_nistz256_sqr_montx(uVar25,CONCAT44(uStack_b4,uStack_b8),CONCAT44(uStack_9c,uStack_a0));
    uStack_e0 = 0x140e5a9c7;
    __ecp_nistz256_sub_fromx();
    uStack_e0 = 0x140e5a9e3;
    __ecp_nistz256_subx();
    uStack_d8 = uVar18;
    uStack_e0 = 0x140e5aa21;
    uStack_d0 = uVar23;
    uStack_c8 = uVar26;
    uStack_c0 = uVar21;
    __ecp_nistz256_mul_montx(0,CONCAT44(uStack_b4,uStack_b8));
    uStack_e0 = 0x140e5aa30;
    __ecp_nistz256_sub_fromx();
    return;
  }
  uVar26 = __ecp_nistz256_sqr_montx(lVar27,uStack_238,uStack_220);
  uVar26 = __ecp_nistz256_mul_montx(uVar26,CONCAT44(uStack_b4,uStack_b8));
  uVar26 = __ecp_nistz256_sqr_montx(uVar26,uStack_278);
  uVar26 = __ecp_nistz256_mul_montx(uVar26,uStack_58);
  uVar26 = __ecp_nistz256_mul_montx(uVar26,uStack_278);
  __ecp_nistz256_mul_montx(uVar26,uStack_1d8);
  lVar27 = uStack_240 * 2;
  uVar24 = unaff_R13 * 2 + (ulonglong)CARRY8(uStack_240,uStack_240);
  uVar18 = (ulonglong)
           (CARRY8(unaff_R13,unaff_R13) ||
           CARRY8(unaff_R13 * 2,(ulonglong)CARRY8(uStack_240,uStack_240)));
  uVar19 = uStack_260 * 2 + uVar18;
  uVar18 = (ulonglong)(CARRY8(uStack_260,uStack_260) || CARRY8(uStack_260 * 2,uVar18));
  uVar23 = uStack_258 * 2 + uVar18;
  uVar22 = (ulonglong)(uVar24 < uStack_270 || uVar24 - uStack_270 < (ulonglong)(lVar27 != -1));
  uVar20 = (ulonglong)(uVar19 < uVar22);
  uStack_120 = (uVar23 - uStack_268) - uVar20;
  uStack_128 = uVar19 - uVar22;
  uStack_130 = (uVar24 - uStack_270) - (ulonglong)(lVar27 != -1);
  lStack_138 = lVar27 + 1;
  if ((CARRY8(uStack_258,uStack_258) || CARRY8(uStack_258 * 2,uVar18)) <
      (uVar23 < uStack_268 || uVar23 - uStack_268 < uVar20)) {
    uStack_120 = uVar23;
    uStack_128 = uVar19;
    uStack_130 = uVar24;
    lStack_138 = lVar27;
  }
  __ecp_nistz256_subx(uStack_208);
  __ecp_nistz256_sub_fromx();
  uVar26 = __ecp_nistz256_subx(uStack_1a8);
  uVar26 = __ecp_nistz256_mul_montx(uVar26,uStack_1f8);
  __ecp_nistz256_mul_montx(uVar26,lStack_138);
  pauVar28 = (undefined1 (*) [16])__ecp_nistz256_sub_fromx();
  auVar3._8_8_ = uStack_110;
  auVar3._0_8_ = uStack_118;
  auVar14._8_8_ = uStack_50;
  auVar14._0_8_ = uStack_58;
  auVar15._8_8_ = uStack_40;
  auVar15._0_8_ = uStack_48;
  auVar8._4_4_ = uStack_b4;
  auVar8._0_4_ = uStack_b8;
  auVar8._8_4_ = uStack_b0;
  auVar8._12_4_ = uStack_ac;
  auVar9._4_4_ = uStack_a4;
  auVar9._0_4_ = uStack_a8;
  auVar9._8_4_ = uStack_a0;
  auVar9._12_4_ = uStack_9c;
  pauVar28[4] = auVar33 & auVar8 | ~auVar33 & (auVar35 & auVar14 | ~auVar35 & auVar3);
  pauVar28[5] = auVar33 & auVar9 | ~auVar33 & (auVar35 & auVar15 | ~auVar35 & auStack_108);
  auVar10._8_8_ = uStack_90;
  auVar10._0_8_ = uStack_98;
  auVar11._8_8_ = uStack_80;
  auVar11._0_8_ = uStack_88;
  auVar4._8_8_ = uStack_f0;
  auVar4._0_8_ = uStack_f8;
  auVar5._8_8_ = uStack_e0;
  auVar5._0_8_ = uStack_e8;
  *pauVar28 = auVar33 & auVar4 | ~auVar33 & (auVar35 & auVar10 | ~auVar35 & auStack_158);
  pauVar28[1] = auVar33 & auVar5 | ~auVar33 & (auVar35 & auVar11 | ~auVar35 & auStack_148);
  auVar30._8_8_ = uStack_130;
  auVar30._0_8_ = lStack_138;
  auVar2._8_8_ = uStack_120;
  auVar2._0_8_ = uStack_128;
  auVar12._8_8_ = puStack_70;
  auVar12._0_8_ = uStack_78;
  auVar13._8_8_ = uStack_60;
  auVar13._0_8_ = uStack_68;
  auVar6._8_8_ = uStack_d0;
  auVar6._0_8_ = uStack_d8;
  auVar7._8_8_ = uStack_c0;
  auVar7._0_8_ = uStack_c8;
  pauVar28[2] = auVar33 & auVar6 | ~auVar33 & (auVar35 & auVar12 | ~auVar35 & auVar30);
  pauVar28[3] = auVar33 & auVar7 | ~auVar33 & (auVar35 & auVar13 | ~auVar35 & auVar2);
  return;
}

// L$SEH_begin_ecp_nistz256_point_addx @ 140e5aa6d

/* WARNING: Type propagation algorithm not settling */

void L_SEH_begin_ecp_nistz256_point_addx(undefined8 param_1,ulonglong *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  ulonglong uVar16;
  undefined1 *puVar17;
  ulonglong unaff_RBP;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong unaff_R13;
  ulonglong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  longlong lVar27;
  undefined1 (*pauVar28) [16];
  ulonglong *puVar29;
  undefined1 auVar30 [16];
  uint uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  uint uVar34;
  undefined1 auVar35 [16];
  undefined8 local_278;
  ulonglong local_270;
  ulonglong local_268;
  ulonglong local_260;
  ulonglong local_258;
  ulonglong local_240;
  undefined8 local_238;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_208;
  undefined8 local_1f8;
  undefined8 local_1d8;
  undefined8 local_1a8;
  ulonglong local_178;
  ulonglong local_160;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  longlong local_138;
  ulonglong uStack_130;
  ulonglong local_128;
  ulonglong uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108 [16];
  ulonglong local_f8;
  ulonglong uStack_f0;
  ulonglong local_e8;
  ulonglong uStack_e0;
  ulonglong local_d8;
  ulonglong uStack_d0;
  ulonglong local_c8;
  ulonglong uStack_c0;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  undefined1 *puStack_70;
  ulonglong local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_f8 = *param_2;
  uStack_f0 = param_2[1];
  local_e8 = param_2[2];
  uStack_e0 = param_2[3];
  local_d8 = param_2[4];
  uStack_d0 = param_2[5];
  local_c8 = param_2[6];
  uStack_c0 = param_2[7];
  local_b8 = (uint)param_2[8];
  uStack_b4 = *(uint *)((longlong)param_2 + 0x44);
  uStack_b0 = (uint)param_2[9];
  uStack_ac = *(uint *)((longlong)param_2 + 0x4c);
  local_a8 = (uint)param_2[10];
  uStack_a4 = *(uint *)((longlong)param_2 + 0x54);
  uStack_a0 = (uint)param_2[0xb];
  uStack_9c = *(uint *)((longlong)param_2 + 0x5c);
  local_98 = *param_3;
  uStack_90 = param_3[1];
  local_88 = param_3[2];
  uStack_80 = param_3[3];
  local_78 = param_3[4];
  puStack_70 = (undefined1 *)param_3[5];
  local_68 = param_3[6];
  uStack_60 = param_3[7];
  local_58 = param_3[8];
  uStack_50 = param_3[9];
  local_48 = param_3[10];
  uStack_40 = param_3[0xb];
  uVar34 = local_a8 | local_b8 | uStack_a4 | uStack_b4 |
           uStack_a0 | uStack_b0 | uStack_9c | uStack_ac;
  uVar31 = 0;
  auVar30 = *(undefined1 (*) [16])(param_3 + 10) | *(undefined1 (*) [16])(param_3 + 8);
  uVar26 = __ecp_nistz256_sqr_montx(param_1);
  auVar35._0_4_ = -(uint)(uVar34 == uVar31);
  auVar32._4_4_ = auVar30._0_4_;
  auVar32._0_4_ = auVar30._4_4_;
  auVar32._8_4_ = auVar30._12_4_;
  auVar32._12_4_ = auVar30._8_4_;
  auVar35._4_4_ = auVar35._0_4_;
  auVar35._8_4_ = auVar35._0_4_;
  auVar35._12_4_ = auVar35._0_4_;
  auVar33._0_4_ = -(uint)(SUB164(auVar32 | auVar30,0) == 0 && SUB164(auVar32 | auVar30,8) == 0);
  auVar33._4_4_ = auVar33._0_4_;
  auVar33._8_4_ = auVar33._0_4_;
  auVar33._12_4_ = auVar33._0_4_;
  uVar18 = param_2[0xb];
  uVar26 = __ecp_nistz256_sqr_montx(uVar26,param_2[8]);
  uVar26 = __ecp_nistz256_mul_montx(uVar26,local_58);
  uVar26 = __ecp_nistz256_mul_montx(uVar26,CONCAT44(uStack_b4,local_b8));
  uVar26 = __ecp_nistz256_mul_montx(uVar26,local_d8);
  __ecp_nistz256_mul_montx(uVar26,local_78);
  uVar26 = __ecp_nistz256_sub_fromx();
  local_178 = local_160 | unaff_R13 | uVar18 | local_178;
  auVar30 = auVar33 | auVar35;
  uVar26 = __ecp_nistz256_mul_montx(uVar26,local_f8,auVar30._0_8_,local_218);
  uVar22 = local_258;
  __ecp_nistz256_mul_montx(uVar26,local_98);
  lVar27 = __ecp_nistz256_sub_fromx();
  if (((((local_240 == 0 && unaff_R13 == 0) && uVar18 == 0) && uVar22 == 0) && auVar30._0_8_ == 0)
      && local_178 == 0) {
    local_78 = *param_2;
    puStack_70 = (undefined1 *)param_2[1];
    local_68 = param_2[2];
    uStack_60 = param_2[3];
    puVar29 = (ulonglong *)(lVar27 + 0x20);
    uStack_e0 = 0x140e5a7ba;
    uVar26 = __ecp_nistz256_mul_by_2x(lVar27,puVar29,lVar27 + 0x40,param_2[7]);
    uStack_e0 = 0x140e5a7d8;
    uVar26 = __ecp_nistz256_sqr_montx(uVar26,param_2[8],param_2[0xb]);
    uStack_e0 = 0x140e5a7f9;
    uVar26 = __ecp_nistz256_sqr_montx(uVar26,local_d8,uStack_c0);
    uStack_e0 = 0x140e5a81f;
    __ecp_nistz256_mul_montx(uVar26,param_2[4]);
    uStack_e0 = 0x140e5a824;
    __ecp_nistz256_mul_by_2x();
    uStack_e0 = 0x140e5a847;
    __ecp_nistz256_add_tox();
    puVar17 = puStack_70;
    uVar16 = local_78;
    uStack_e0 = 0x140e5a86a;
    uVar26 = __ecp_nistz256_sub_fromx();
    uVar24 = local_c8;
    uVar23 = uStack_d0;
    uStack_e0 = 0x140e5a88c;
    __ecp_nistz256_sqr_montx(uVar26,local_d8,uStack_c0);
    uVar18 = (ulonglong)
             (CARRY8((ulonglong)puVar17,(ulonglong)local_158) ||
             CARRY8((ulonglong)(puVar17 + (longlong)local_158),(ulonglong)(uVar16 != 0)));
    uVar22 = (ulonglong)CARRY8(uVar23,uVar18);
    uVar20 = (ulonglong)(CARRY8(uVar24,unaff_RBP) || CARRY8(uVar24 + unaff_RBP,uVar22));
    uVar22 = uVar24 + unaff_RBP + uVar22;
    uVar18 = uVar23 + uVar18;
    puVar1 = puVar17 + (longlong)local_158 + (uVar16 != 0);
    uVar19 = uVar16 - 1;
    if ((uVar16 & 1) == 0) {
      uVar20 = 0;
      uVar22 = uVar24;
      uVar18 = uVar23;
      puVar1 = puVar17;
      uVar19 = uVar16;
    }
    uVar23 = (ulonglong)puVar1 >> 1 | uVar18 << 0x3f;
    *puVar29 = uVar19 >> 1 | (longlong)puVar1 << 0x3f;
    puVar29[1] = uVar23;
    puVar29[2] = uVar18 >> 1 | uVar22 << 0x3f;
    puVar29[3] = uVar22 >> 1 | uVar20 << 0x3f;
    uStack_e0 = 0x140e5a937;
    __ecp_nistz256_mul_montx(uVar22 << 0x3f,local_98,uVar24,CONCAT44(uStack_b4,local_b8));
    uStack_e0 = 0x140e5a944;
    __ecp_nistz256_mul_by_2x();
    uStack_e0 = 0x140e5a953;
    uVar26 = __ecp_nistz256_add_tox();
    uVar18 = uStack_c0;
    uStack_e0 = 0x140e5a97e;
    __ecp_nistz256_mul_montx(uVar26,local_78);
    uStack_e0 = 0x140e5a98b;
    uVar25 = __ecp_nistz256_mul_by_2x();
    uVar26 = CONCAT44(uStack_ac,uStack_b0);
    uVar21 = CONCAT44(uStack_a4,local_a8);
    uStack_e0 = 0x140e5a9ae;
    __ecp_nistz256_sqr_montx(uVar25,CONCAT44(uStack_b4,local_b8),CONCAT44(uStack_9c,uStack_a0));
    uStack_e0 = 0x140e5a9c7;
    __ecp_nistz256_sub_fromx();
    uStack_e0 = 0x140e5a9e3;
    __ecp_nistz256_subx();
    local_d8 = uVar18;
    uStack_e0 = 0x140e5aa21;
    uStack_d0 = uVar23;
    local_c8 = uVar26;
    uStack_c0 = uVar21;
    __ecp_nistz256_mul_montx(0,CONCAT44(uStack_b4,local_b8));
    uStack_e0 = 0x140e5aa30;
    __ecp_nistz256_sub_fromx();
    return;
  }
  uVar26 = __ecp_nistz256_sqr_montx(lVar27,local_238,local_220);
  uVar26 = __ecp_nistz256_mul_montx(uVar26,CONCAT44(uStack_b4,local_b8));
  uVar26 = __ecp_nistz256_sqr_montx(uVar26,local_278);
  uVar26 = __ecp_nistz256_mul_montx(uVar26,local_58);
  uVar26 = __ecp_nistz256_mul_montx(uVar26,local_278);
  __ecp_nistz256_mul_montx(uVar26,local_1d8);
  lVar27 = local_240 * 2;
  uVar24 = unaff_R13 * 2 + (ulonglong)CARRY8(local_240,local_240);
  uVar18 = (ulonglong)
           (CARRY8(unaff_R13,unaff_R13) ||
           CARRY8(unaff_R13 * 2,(ulonglong)CARRY8(local_240,local_240)));
  uVar19 = local_260 * 2 + uVar18;
  uVar18 = (ulonglong)(CARRY8(local_260,local_260) || CARRY8(local_260 * 2,uVar18));
  uVar23 = local_258 * 2 + uVar18;
  uVar22 = (ulonglong)(uVar24 < local_270 || uVar24 - local_270 < (ulonglong)(lVar27 != -1));
  uVar20 = (ulonglong)(uVar19 < uVar22);
  uStack_120 = (uVar23 - local_268) - uVar20;
  local_128 = uVar19 - uVar22;
  uStack_130 = (uVar24 - local_270) - (ulonglong)(lVar27 != -1);
  local_138 = lVar27 + 1;
  if ((CARRY8(local_258,local_258) || CARRY8(local_258 * 2,uVar18)) <
      (uVar23 < local_268 || uVar23 - local_268 < uVar20)) {
    uStack_120 = uVar23;
    local_128 = uVar19;
    uStack_130 = uVar24;
    local_138 = lVar27;
  }
  __ecp_nistz256_subx(local_208);
  __ecp_nistz256_sub_fromx();
  uVar26 = __ecp_nistz256_subx(local_1a8);
  uVar26 = __ecp_nistz256_mul_montx(uVar26,local_1f8);
  __ecp_nistz256_mul_montx(uVar26,local_138);
  pauVar28 = (undefined1 (*) [16])__ecp_nistz256_sub_fromx();
  auVar3._8_8_ = uStack_110;
  auVar3._0_8_ = local_118;
  auVar14._8_8_ = uStack_50;
  auVar14._0_8_ = local_58;
  auVar15._8_8_ = uStack_40;
  auVar15._0_8_ = local_48;
  auVar8._4_4_ = uStack_b4;
  auVar8._0_4_ = local_b8;
  auVar8._8_4_ = uStack_b0;
  auVar8._12_4_ = uStack_ac;
  auVar9._4_4_ = uStack_a4;
  auVar9._0_4_ = local_a8;
  auVar9._8_4_ = uStack_a0;
  auVar9._12_4_ = uStack_9c;
  pauVar28[4] = auVar33 & auVar8 | ~auVar33 & (auVar35 & auVar14 | ~auVar35 & auVar3);
  pauVar28[5] = auVar33 & auVar9 | ~auVar33 & (auVar35 & auVar15 | ~auVar35 & local_108);
  auVar10._8_8_ = uStack_90;
  auVar10._0_8_ = local_98;
  auVar11._8_8_ = uStack_80;
  auVar11._0_8_ = local_88;
  auVar4._8_8_ = uStack_f0;
  auVar4._0_8_ = local_f8;
  auVar5._8_8_ = uStack_e0;
  auVar5._0_8_ = local_e8;
  *pauVar28 = auVar33 & auVar4 | ~auVar33 & (auVar35 & auVar10 | ~auVar35 & local_158);
  pauVar28[1] = auVar33 & auVar5 | ~auVar33 & (auVar35 & auVar11 | ~auVar35 & local_148);
  auVar30._8_8_ = uStack_130;
  auVar30._0_8_ = local_138;
  auVar2._8_8_ = uStack_120;
  auVar2._0_8_ = local_128;
  auVar12._8_8_ = puStack_70;
  auVar12._0_8_ = local_78;
  auVar13._8_8_ = uStack_60;
  auVar13._0_8_ = local_68;
  auVar6._8_8_ = uStack_d0;
  auVar6._0_8_ = local_d8;
  auVar7._8_8_ = uStack_c0;
  auVar7._0_8_ = local_c8;
  pauVar28[2] = auVar33 & auVar6 | ~auVar33 & (auVar35 & auVar12 | ~auVar35 & auVar30);
  pauVar28[3] = auVar33 & auVar7 | ~auVar33 & (auVar35 & auVar13 | ~auVar35 & auVar2);
  return;
}

// ecp_nistz256_point_add_affinex @ 140e5b1a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ecp_nistz256_point_add_affinex
               (undefined8 param_1,undefined8 *param_2,undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  uint *puVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar30;
  uint uVar31;
  undefined1 auVar29 [16];
  uint uVar32;
  uint uVar33;
  uint uVar34;
  undefined1 auVar35 [16];
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  undefined8 uStack_208;
  undefined8 uStack_1d8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_198;
  undefined8 uStack_148;
  uint uStack_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined8 uStack_58;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  
  uVar13 = *param_2;
  uVar14 = param_2[1];
  uVar15 = param_2[2];
  uVar16 = param_2[3];
  uVar17 = param_2[4];
  uVar18 = param_2[5];
  uVar19 = param_2[6];
  uVar20 = param_2[7];
  puVar24 = (uint *)(param_2 + 8);
  uVar5 = *puVar24;
  uVar6 = *(uint *)((longlong)param_2 + 0x44);
  uVar21 = *(undefined8 *)puVar24;
  uVar23 = *(undefined8 *)puVar24;
  uVar7 = *(uint *)(param_2 + 9);
  uVar8 = *(uint *)((longlong)param_2 + 0x4c);
  uVar9 = *(uint *)(param_2 + 10);
  uVar10 = *(uint *)((longlong)param_2 + 0x54);
  uVar11 = *(uint *)(param_2 + 0xb);
  uVar12 = *(uint *)((longlong)param_2 + 0x5c);
  auVar1 = *param_3;
  auVar2 = param_3[1];
  auVar3 = param_3[2];
  auVar4 = param_3[3];
  uVar37 = uVar9 | uVar5 | uVar10 | uVar6 | uVar11 | uVar7 | uVar12 | uVar8;
  uVar33 = 0;
  auVar29 = auVar4 | auVar3 | auVar2 | auVar1;
  uVar22 = __ecp_nistz256_sqr_montx(param_1,param_2[8],param_2[0xb]);
  uVar38 = -(uint)(uVar37 == uVar33);
  auVar35._4_4_ = auVar29._0_4_;
  auVar35._0_4_ = auVar29._4_4_;
  auVar35._8_4_ = auVar29._12_4_;
  auVar35._12_4_ = auVar29._8_4_;
  uVar34 = -(uint)(SUB164(auVar35 | auVar29,0) == 0 && SUB164(auVar35 | auVar29,8) == 0);
  uVar33 = uVar34;
  uVar37 = uVar34;
  uVar36 = uVar34;
  uVar39 = uVar38;
  uVar40 = uVar38;
  uVar41 = uVar38;
  __ecp_nistz256_mul_montx(uVar22,*(undefined8 *)*param_3);
  uVar22 = __ecp_nistz256_sub_fromx();
  uVar23 = __ecp_nistz256_mul_montx(uVar22,uVar23);
  uVar23 = __ecp_nistz256_mul_montx(uVar23,uVar21);
  uStack_58 = auVar3._0_8_;
  __ecp_nistz256_mul_montx(uVar23,uStack_58);
  uVar23 = __ecp_nistz256_sub_fromx();
  uVar23 = __ecp_nistz256_sqr_montx(uVar23,uStack_1d8,uStack_1c0);
  uVar23 = __ecp_nistz256_sqr_montx(uVar23,uStack_1b8);
  uVar23 = __ecp_nistz256_mul_montx(uVar23,uStack_198);
  __ecp_nistz256_mul_montx(uVar23,uVar13);
  __ecp_nistz256_subx(uStack_148);
  __ecp_nistz256_sub_fromx();
  uVar23 = __ecp_nistz256_subx(uStack_208);
  uVar23 = __ecp_nistz256_mul_montx(uVar23,uVar17);
  __ecp_nistz256_mul_montx(uVar23,uStack_1b8);
  puVar24 = (uint *)__ecp_nistz256_sub_fromx();
  uVar25 = uVar39 & _UNK_140e570a4;
  uVar26 = uVar40 & _UNK_140e570a8;
  uVar27 = uVar41 & _UNK_140e570ac;
  uVar28 = uVar38 & _DAT_140e570b0;
  uVar30 = uVar39 & _UNK_140e570b4;
  uVar31 = uVar40 & _UNK_140e570b8;
  uVar32 = uVar41 & _UNK_140e570bc;
  puVar24[0x10] = uVar34 & uVar5 | ~uVar34 & (uVar38 & _L_ONE_mont | ~uVar38 & uStack_f8);
  puVar24[0x11] = uVar33 & uVar6 | ~uVar33 & (uVar25 | ~uVar39 & uStack_f4);
  puVar24[0x12] = uVar37 & uVar7 | ~uVar37 & (uVar26 | ~uVar40 & uStack_f0);
  puVar24[0x13] = uVar36 & uVar8 | ~uVar36 & (uVar27 | ~uVar41 & uStack_ec);
  puVar24[0x14] = uVar34 & uVar9 | ~uVar34 & (uVar28 | ~uVar38 & uStack_e8);
  puVar24[0x15] = uVar33 & uVar10 | ~uVar33 & (uVar30 | ~uVar39 & uStack_e4);
  puVar24[0x16] = uVar37 & uVar11 | ~uVar37 & (uVar31 | ~uVar40 & uStack_e0);
  puVar24[0x17] = uVar36 & uVar12 | ~uVar36 & (uVar32 | ~uVar41 & uStack_dc);
  uStack_78 = auVar1._0_4_;
  uStack_74 = auVar1._4_4_;
  uStack_70 = auVar1._8_4_;
  uStack_6c = auVar1._12_4_;
  uStack_68 = auVar2._0_4_;
  uStack_64 = auVar2._4_4_;
  uStack_60 = auVar2._8_4_;
  uStack_5c = auVar2._12_4_;
  uStack_d8 = (uint)uVar13;
  uStack_d4 = (uint)((ulonglong)uVar13 >> 0x20);
  uStack_d0 = (uint)uVar14;
  uStack_cc = (uint)((ulonglong)uVar14 >> 0x20);
  uStack_c8 = (uint)uVar15;
  uStack_c4 = (uint)((ulonglong)uVar15 >> 0x20);
  uStack_c0 = (uint)uVar16;
  uStack_bc = (uint)((ulonglong)uVar16 >> 0x20);
  *puVar24 = uVar34 & uStack_d8 | ~uVar34 & (uVar38 & uStack_78 | ~uVar38 & uStack_138);
  puVar24[1] = uVar33 & uStack_d4 | ~uVar33 & (uVar39 & uStack_74 | ~uVar39 & uStack_134);
  puVar24[2] = uVar37 & uStack_d0 | ~uVar37 & (uVar40 & uStack_70 | ~uVar40 & uStack_130);
  puVar24[3] = uVar36 & uStack_cc | ~uVar36 & (uVar41 & uStack_6c | ~uVar41 & uStack_12c);
  puVar24[4] = uVar34 & uStack_c8 | ~uVar34 & (uVar38 & uStack_68 | ~uVar38 & uStack_128);
  puVar24[5] = uVar33 & uStack_c4 | ~uVar33 & (uVar39 & uStack_64 | ~uVar39 & uStack_124);
  puVar24[6] = uVar37 & uStack_c0 | ~uVar37 & (uVar40 & uStack_60 | ~uVar40 & uStack_120);
  puVar24[7] = uVar36 & uStack_bc | ~uVar36 & (uVar41 & uStack_5c | ~uVar41 & uStack_11c);
  uStack_58._0_4_ = auVar3._0_4_;
  uStack_58._4_4_ = auVar3._4_4_;
  uStack_50 = auVar3._8_4_;
  uStack_4c = auVar3._12_4_;
  uStack_48 = auVar4._0_4_;
  uStack_44 = auVar4._4_4_;
  uStack_40 = auVar4._8_4_;
  uStack_3c = auVar4._12_4_;
  uStack_b8 = (uint)uVar17;
  uStack_b4 = (uint)((ulonglong)uVar17 >> 0x20);
  uStack_b0 = (uint)uVar18;
  uStack_ac = (uint)((ulonglong)uVar18 >> 0x20);
  uStack_a8 = (uint)uVar19;
  uStack_a4 = (uint)((ulonglong)uVar19 >> 0x20);
  uStack_a0 = (uint)uVar20;
  uStack_9c = (uint)((ulonglong)uVar20 >> 0x20);
  puVar24[8] = uVar34 & uStack_b8 | ~uVar34 & (uVar38 & (uint)uStack_58 | ~uVar38 & uStack_118);
  puVar24[9] = uVar33 & uStack_b4 | ~uVar33 & (uVar39 & uStack_58._4_4_ | ~uVar39 & uStack_114);
  puVar24[10] = uVar37 & uStack_b0 | ~uVar37 & (uVar40 & uStack_50 | ~uVar40 & uStack_110);
  puVar24[0xb] = uVar36 & uStack_ac | ~uVar36 & (uVar41 & uStack_4c | ~uVar41 & uStack_10c);
  puVar24[0xc] = uVar34 & uStack_a8 | ~uVar34 & (uVar38 & uStack_48 | ~uVar38 & uStack_108);
  puVar24[0xd] = uVar33 & uStack_a4 | ~uVar33 & (uVar39 & uStack_44 | ~uVar39 & uStack_104);
  puVar24[0xe] = uVar37 & uStack_a0 | ~uVar37 & (uVar40 & uStack_40 | ~uVar40 & uStack_100);
  puVar24[0xf] = uVar36 & uStack_9c | ~uVar36 & (uVar41 & uStack_3c | ~uVar41 & uStack_fc);
  return;
}

// L$SEH_begin_ecp_nistz256_point_add_affinex @ 140e5b1ad

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L_SEH_begin_ecp_nistz256_point_add_affinex
               (undefined8 param_1,undefined8 *param_2,undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  uint *puVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar30;
  uint uVar31;
  undefined1 auVar29 [16];
  uint uVar32;
  uint uVar33;
  uint uVar34;
  undefined1 auVar35 [16];
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  undefined8 local_208;
  undefined8 local_1d8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_198;
  undefined8 local_148;
  uint local_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  uint local_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  uint local_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint local_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  uint local_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  uint local_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  uint uStack_50;
  uint uStack_4c;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  
  uVar13 = *param_2;
  uVar14 = param_2[1];
  uVar15 = param_2[2];
  uVar16 = param_2[3];
  uVar17 = param_2[4];
  uVar18 = param_2[5];
  uVar19 = param_2[6];
  uVar20 = param_2[7];
  puVar24 = (uint *)(param_2 + 8);
  uVar5 = *puVar24;
  uVar6 = *(uint *)((longlong)param_2 + 0x44);
  uVar21 = *(undefined8 *)puVar24;
  uVar23 = *(undefined8 *)puVar24;
  uVar7 = *(uint *)(param_2 + 9);
  uVar8 = *(uint *)((longlong)param_2 + 0x4c);
  uVar9 = *(uint *)(param_2 + 10);
  uVar10 = *(uint *)((longlong)param_2 + 0x54);
  uVar11 = *(uint *)(param_2 + 0xb);
  uVar12 = *(uint *)((longlong)param_2 + 0x5c);
  auVar1 = *param_3;
  auVar2 = param_3[1];
  auVar3 = param_3[2];
  auVar4 = param_3[3];
  uVar37 = uVar9 | uVar5 | uVar10 | uVar6 | uVar11 | uVar7 | uVar12 | uVar8;
  uVar33 = 0;
  auVar29 = auVar4 | auVar3 | auVar2 | auVar1;
  uVar22 = __ecp_nistz256_sqr_montx(param_1,param_2[8],param_2[0xb]);
  uVar38 = -(uint)(uVar37 == uVar33);
  auVar35._4_4_ = auVar29._0_4_;
  auVar35._0_4_ = auVar29._4_4_;
  auVar35._8_4_ = auVar29._12_4_;
  auVar35._12_4_ = auVar29._8_4_;
  uVar34 = -(uint)(SUB164(auVar35 | auVar29,0) == 0 && SUB164(auVar35 | auVar29,8) == 0);
  uVar33 = uVar34;
  uVar37 = uVar34;
  uVar36 = uVar34;
  uVar39 = uVar38;
  uVar40 = uVar38;
  uVar41 = uVar38;
  __ecp_nistz256_mul_montx(uVar22,*(undefined8 *)*param_3);
  uVar22 = __ecp_nistz256_sub_fromx();
  uVar23 = __ecp_nistz256_mul_montx(uVar22,uVar23);
  uVar23 = __ecp_nistz256_mul_montx(uVar23,uVar21);
  local_58 = auVar3._0_8_;
  __ecp_nistz256_mul_montx(uVar23,local_58);
  uVar23 = __ecp_nistz256_sub_fromx();
  uVar23 = __ecp_nistz256_sqr_montx(uVar23,local_1d8,local_1c0);
  uVar23 = __ecp_nistz256_sqr_montx(uVar23,local_1b8);
  uVar23 = __ecp_nistz256_mul_montx(uVar23,local_198);
  __ecp_nistz256_mul_montx(uVar23,uVar13);
  __ecp_nistz256_subx(local_148);
  __ecp_nistz256_sub_fromx();
  uVar23 = __ecp_nistz256_subx(local_208);
  uVar23 = __ecp_nistz256_mul_montx(uVar23,uVar17);
  __ecp_nistz256_mul_montx(uVar23,local_1b8);
  puVar24 = (uint *)__ecp_nistz256_sub_fromx();
  uVar25 = uVar39 & _UNK_140e570a4;
  uVar26 = uVar40 & _UNK_140e570a8;
  uVar27 = uVar41 & _UNK_140e570ac;
  uVar28 = uVar38 & _DAT_140e570b0;
  uVar30 = uVar39 & _UNK_140e570b4;
  uVar31 = uVar40 & _UNK_140e570b8;
  uVar32 = uVar41 & _UNK_140e570bc;
  puVar24[0x10] = uVar34 & uVar5 | ~uVar34 & (uVar38 & _L_ONE_mont | ~uVar38 & local_f8);
  puVar24[0x11] = uVar33 & uVar6 | ~uVar33 & (uVar25 | ~uVar39 & uStack_f4);
  puVar24[0x12] = uVar37 & uVar7 | ~uVar37 & (uVar26 | ~uVar40 & uStack_f0);
  puVar24[0x13] = uVar36 & uVar8 | ~uVar36 & (uVar27 | ~uVar41 & uStack_ec);
  puVar24[0x14] = uVar34 & uVar9 | ~uVar34 & (uVar28 | ~uVar38 & local_e8);
  puVar24[0x15] = uVar33 & uVar10 | ~uVar33 & (uVar30 | ~uVar39 & uStack_e4);
  puVar24[0x16] = uVar37 & uVar11 | ~uVar37 & (uVar31 | ~uVar40 & uStack_e0);
  puVar24[0x17] = uVar36 & uVar12 | ~uVar36 & (uVar32 | ~uVar41 & uStack_dc);
  local_78 = auVar1._0_4_;
  uStack_74 = auVar1._4_4_;
  uStack_70 = auVar1._8_4_;
  uStack_6c = auVar1._12_4_;
  local_68 = auVar2._0_4_;
  uStack_64 = auVar2._4_4_;
  uStack_60 = auVar2._8_4_;
  uStack_5c = auVar2._12_4_;
  local_d8 = (uint)uVar13;
  uStack_d4 = (uint)((ulonglong)uVar13 >> 0x20);
  uStack_d0 = (uint)uVar14;
  uStack_cc = (uint)((ulonglong)uVar14 >> 0x20);
  local_c8 = (uint)uVar15;
  uStack_c4 = (uint)((ulonglong)uVar15 >> 0x20);
  uStack_c0 = (uint)uVar16;
  uStack_bc = (uint)((ulonglong)uVar16 >> 0x20);
  *puVar24 = uVar34 & local_d8 | ~uVar34 & (uVar38 & local_78 | ~uVar38 & local_138);
  puVar24[1] = uVar33 & uStack_d4 | ~uVar33 & (uVar39 & uStack_74 | ~uVar39 & uStack_134);
  puVar24[2] = uVar37 & uStack_d0 | ~uVar37 & (uVar40 & uStack_70 | ~uVar40 & uStack_130);
  puVar24[3] = uVar36 & uStack_cc | ~uVar36 & (uVar41 & uStack_6c | ~uVar41 & uStack_12c);
  puVar24[4] = uVar34 & local_c8 | ~uVar34 & (uVar38 & local_68 | ~uVar38 & local_128);
  puVar24[5] = uVar33 & uStack_c4 | ~uVar33 & (uVar39 & uStack_64 | ~uVar39 & uStack_124);
  puVar24[6] = uVar37 & uStack_c0 | ~uVar37 & (uVar40 & uStack_60 | ~uVar40 & uStack_120);
  puVar24[7] = uVar36 & uStack_bc | ~uVar36 & (uVar41 & uStack_5c | ~uVar41 & uStack_11c);
  local_58._0_4_ = auVar3._0_4_;
  local_58._4_4_ = auVar3._4_4_;
  uStack_50 = auVar3._8_4_;
  uStack_4c = auVar3._12_4_;
  local_48 = auVar4._0_4_;
  uStack_44 = auVar4._4_4_;
  uStack_40 = auVar4._8_4_;
  uStack_3c = auVar4._12_4_;
  local_b8 = (uint)uVar17;
  uStack_b4 = (uint)((ulonglong)uVar17 >> 0x20);
  uStack_b0 = (uint)uVar18;
  uStack_ac = (uint)((ulonglong)uVar18 >> 0x20);
  local_a8 = (uint)uVar19;
  uStack_a4 = (uint)((ulonglong)uVar19 >> 0x20);
  uStack_a0 = (uint)uVar20;
  uStack_9c = (uint)((ulonglong)uVar20 >> 0x20);
  puVar24[8] = uVar34 & local_b8 | ~uVar34 & (uVar38 & (uint)local_58 | ~uVar38 & local_118);
  puVar24[9] = uVar33 & uStack_b4 | ~uVar33 & (uVar39 & local_58._4_4_ | ~uVar39 & uStack_114);
  puVar24[10] = uVar37 & uStack_b0 | ~uVar37 & (uVar40 & uStack_50 | ~uVar40 & uStack_110);
  puVar24[0xb] = uVar36 & uStack_ac | ~uVar36 & (uVar41 & uStack_4c | ~uVar41 & uStack_10c);
  puVar24[0xc] = uVar34 & local_a8 | ~uVar34 & (uVar38 & local_48 | ~uVar38 & local_108);
  puVar24[0xd] = uVar33 & uStack_a4 | ~uVar33 & (uVar39 & uStack_44 | ~uVar39 & uStack_104);
  puVar24[0xe] = uVar37 & uStack_a0 | ~uVar37 & (uVar40 & uStack_40 | ~uVar40 & uStack_100);
  puVar24[0xf] = uVar36 & uStack_9c | ~uVar36 & (uVar41 & uStack_3c | ~uVar41 & uStack_fc);
  return;
}

