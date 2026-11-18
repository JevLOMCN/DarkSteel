// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 2

// simd_find_max_U32_256_sse4 @ 14f3d8cc0

uint __cdecl oo2::simd_find_max_U32_256_sse4(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  uVar7 = 0;
  uVar9 = 0;
  uVar11 = 0;
  uVar13 = 0;
  lVar6 = 0x10;
  puVar5 = param_1 + 8;
  do {
    uVar1 = puVar5[-8];
    uVar2 = puVar5[-7];
    uVar3 = puVar5[-6];
    uVar4 = puVar5[-5];
    uVar8 = puVar5[-4];
    uVar10 = puVar5[-3];
    uVar12 = puVar5[-2];
    uVar14 = puVar5[-1];
    uVar7 = (uVar7 < uVar1) * uVar1 | (uVar7 >= uVar1) * uVar7;
    uVar9 = (uVar9 < uVar2) * uVar2 | (uVar9 >= uVar2) * uVar9;
    uVar11 = (uVar11 < uVar3) * uVar3 | (uVar11 >= uVar3) * uVar11;
    uVar13 = (uVar13 < uVar4) * uVar4 | (uVar13 >= uVar4) * uVar13;
    uVar8 = (uVar7 < uVar8) * uVar8 | (uVar7 >= uVar8) * uVar7;
    uVar10 = (uVar9 < uVar10) * uVar10 | (uVar9 >= uVar10) * uVar9;
    uVar12 = (uVar11 < uVar12) * uVar12 | (uVar11 >= uVar12) * uVar11;
    uVar14 = (uVar13 < uVar14) * uVar14 | (uVar13 >= uVar14) * uVar13;
    uVar7 = *puVar5;
    uVar9 = puVar5[1];
    uVar11 = puVar5[2];
    uVar13 = puVar5[3];
    uVar1 = puVar5[4];
    uVar2 = puVar5[5];
    uVar3 = puVar5[6];
    uVar4 = puVar5[7];
    uVar7 = (uVar8 < uVar7) * uVar7 | (uVar8 >= uVar7) * uVar8;
    uVar9 = (uVar10 < uVar9) * uVar9 | (uVar10 >= uVar9) * uVar10;
    uVar11 = (uVar12 < uVar11) * uVar11 | (uVar12 >= uVar11) * uVar12;
    uVar13 = (uVar14 < uVar13) * uVar13 | (uVar14 >= uVar13) * uVar14;
    uVar7 = (uVar7 < uVar1) * uVar1 | (uVar7 >= uVar1) * uVar7;
    uVar9 = (uVar9 < uVar2) * uVar2 | (uVar9 >= uVar2) * uVar9;
    uVar11 = (uVar11 < uVar3) * uVar3 | (uVar11 >= uVar3) * uVar11;
    uVar13 = (uVar13 < uVar4) * uVar4 | (uVar13 >= uVar4) * uVar13;
    lVar6 = lVar6 + -1;
    puVar5 = puVar5 + 0x10;
  } while (lVar6 != 0);
  uVar7 = (uVar7 < uVar11) * uVar11 | (uVar7 >= uVar11) * uVar7;
  uVar9 = (uVar9 < uVar13) * uVar13 | (uVar9 >= uVar13) * uVar9;
  return (uVar7 < uVar9) * uVar9 | (uVar7 >= uVar9) * uVar7;
}

// simd_mul_s32_sub_u8_sse4 @ 14f3d8d40

void __cdecl oo2::simd_mul_s32_sub_u8_sse4(int *param_1,long64 param_2,int param_3,uchar *param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 (*pauVar6) [16];
  uint *puVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  lVar9 = 0;
  auVar13._4_4_ = param_3;
  auVar13._0_4_ = param_3;
  auVar13._8_4_ = param_3;
  auVar13._12_4_ = param_3;
  auVar18._4_4_ = param_3;
  auVar18._0_4_ = param_3;
  auVar18._8_4_ = param_3;
  auVar18._12_4_ = param_3;
  if (0xf < param_2) {
    puVar7 = (uint *)(param_4 + 8);
    pauVar6 = (undefined1 (*) [16])(param_1 + 8);
    do {
      puVar1 = puVar7 + -2;
      lVar9 = lVar9 + 0x10;
      puVar2 = puVar7 + -1;
      uVar8 = *puVar7;
      puVar3 = puVar7 + 1;
      puVar7 = puVar7 + 4;
      in_XMM1 = pmovzxbd(in_XMM1,ZEXT416(*puVar1));
      auVar10 = pmovzxbd(ZEXT416(*puVar1),ZEXT416(*puVar2));
      auVar16 = pmulld(pauVar6[-1],auVar13);
      auVar11 = pmovzxbd(auVar10,ZEXT416(uVar8));
      auVar17 = pmulld(*pauVar6,auVar13);
      auVar12 = pmovzxbd(auVar11,ZEXT416(*puVar3));
      auVar15 = pmulld(pauVar6[1],auVar13);
      auVar14 = pmulld(pauVar6[-2],auVar13);
      *(int *)pauVar6[1] = auVar15._0_4_ - auVar12._0_4_;
      *(int *)(pauVar6[1] + 4) = auVar15._4_4_ - auVar12._4_4_;
      *(int *)(pauVar6[1] + 8) = auVar15._8_4_ - auVar12._8_4_;
      *(int *)(pauVar6[1] + 0xc) = auVar15._12_4_ - auVar12._12_4_;
      *(int *)pauVar6[-2] = auVar14._0_4_ - in_XMM1._0_4_;
      *(int *)(pauVar6[-2] + 4) = auVar14._4_4_ - in_XMM1._4_4_;
      *(int *)(pauVar6[-2] + 8) = auVar14._8_4_ - in_XMM1._8_4_;
      *(int *)(pauVar6[-2] + 0xc) = auVar14._12_4_ - in_XMM1._12_4_;
      *(int *)pauVar6[-1] = auVar16._0_4_ - auVar10._0_4_;
      *(int *)(pauVar6[-1] + 4) = auVar16._4_4_ - auVar10._4_4_;
      *(int *)(pauVar6[-1] + 8) = auVar16._8_4_ - auVar10._8_4_;
      *(int *)(pauVar6[-1] + 0xc) = auVar16._12_4_ - auVar10._12_4_;
      *(int *)*pauVar6 = auVar17._0_4_ - auVar11._0_4_;
      *(int *)(*pauVar6 + 4) = auVar17._4_4_ - auVar11._4_4_;
      *(int *)(*pauVar6 + 8) = auVar17._8_4_ - auVar11._8_4_;
      *(int *)(*pauVar6 + 0xc) = auVar17._12_4_ - auVar11._12_4_;
      pauVar6 = pauVar6 + 4;
    } while ((8 - (longlong)param_4) + (longlong)puVar7 <= param_2);
  }
  uVar5 = param_2 - lVar9;
  if (lVar9 < param_2) {
    if ((0xf < uVar5) && (1 < __isa_available)) {
      if ((param_4 + param_2 + -1 < param_1 + lVar9) || (param_1 + param_2 + -1 < param_4 + lVar9))
      {
        uVar8 = (uint)((longlong)uVar5 >> 0x3f) & 0xf;
        pauVar6 = (undefined1 (*) [16])(param_1 + lVar9 + 8);
        puVar7 = (uint *)((longlong)(param_4 + lVar9) + 8);
        do {
          lVar9 = lVar9 + 0x10;
          auVar10 = pmulld(pauVar6[-2],auVar18);
          auVar13 = pmovzxbd(in_XMM1,ZEXT416(puVar7[-2]));
          uVar4 = puVar7[-1];
          *(int *)pauVar6[-2] = auVar10._0_4_ - auVar13._0_4_;
          *(int *)(pauVar6[-2] + 4) = auVar10._4_4_ - auVar13._4_4_;
          *(int *)(pauVar6[-2] + 8) = auVar10._8_4_ - auVar13._8_4_;
          *(int *)(pauVar6[-2] + 0xc) = auVar10._12_4_ - auVar13._12_4_;
          auVar13 = pmovzxbd(auVar13,ZEXT416(uVar4));
          uVar4 = *puVar7;
          auVar10 = pmulld(pauVar6[-1],auVar18);
          *(int *)pauVar6[-1] = auVar10._0_4_ - auVar13._0_4_;
          *(int *)(pauVar6[-1] + 4) = auVar10._4_4_ - auVar13._4_4_;
          *(int *)(pauVar6[-1] + 8) = auVar10._8_4_ - auVar13._8_4_;
          *(int *)(pauVar6[-1] + 0xc) = auVar10._12_4_ - auVar13._12_4_;
          auVar13 = pmovzxbd(auVar13,ZEXT416(uVar4));
          uVar4 = puVar7[1];
          auVar10 = pmulld(*pauVar6,auVar18);
          *(int *)*pauVar6 = auVar10._0_4_ - auVar13._0_4_;
          *(int *)(*pauVar6 + 4) = auVar10._4_4_ - auVar13._4_4_;
          *(int *)(*pauVar6 + 8) = auVar10._8_4_ - auVar13._8_4_;
          *(int *)(*pauVar6 + 0xc) = auVar10._12_4_ - auVar13._12_4_;
          in_XMM1 = pmovzxbd(auVar13,ZEXT416(uVar4));
          auVar13 = pmulld(pauVar6[1],auVar18);
          *(int *)pauVar6[1] = auVar13._0_4_ - in_XMM1._0_4_;
          *(int *)(pauVar6[1] + 4) = auVar13._4_4_ - in_XMM1._4_4_;
          *(int *)(pauVar6[1] + 8) = auVar13._8_4_ - in_XMM1._8_4_;
          *(int *)(pauVar6[1] + 0xc) = auVar13._12_4_ - in_XMM1._12_4_;
          pauVar6 = pauVar6 + 4;
          puVar7 = puVar7 + 4;
        } while (lVar9 < (longlong)
                         (param_2 - ((ulonglong)((int)uVar5 + uVar8 & 0xf) - (ulonglong)uVar8)));
        if (param_2 <= lVar9) {
          return;
        }
      }
    }
    do {
      param_1[lVar9] = param_3 * param_1[lVar9] - (uint)param_4[lVar9];
      lVar9 = lVar9 + 1;
    } while (lVar9 < param_2);
  }
  return;
}

