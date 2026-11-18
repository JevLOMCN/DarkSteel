// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 14

// _mm_mullo_epi32_sse2 @ 14f3ba1e0

__m128i * __cdecl
oo2::_mm_mullo_epi32_sse2(__m128i *__return_storage_ptr__,__m128i *param_1,__m128i *param_2)

{
  __m128i *in_RAX;
  
  return in_RAX;
}

// hsum_epi32_sse2 @ 14f3ba220

int __cdecl oo2::hsum_epi32_sse2(__m128i *param_1)

{
  return param_1->m128i_i32[3] + param_1->m128i_i32[1] +
         param_1->m128i_i32[2] + param_1->m128i_i32[0];
}

// rrCPUx86_feature_present @ 14f3ba240

int __cdecl oo2::rrCPUx86_feature_present(uint param_1)

{
  return g_rrCPUx86_feature_flags & param_1;
}

// rrPtrDiff @ 14f3ba250

long64 __cdecl oo2::rrPtrDiff(long64 param_1)

{
  return param_1;
}

// rrsimd_has_sse4 @ 14f3ba260

int __cdecl oo2::rrsimd_has_sse4(void)

{
  return g_rrCPUx86_feature_flags & 8;
}

// simd_add_u32_256 @ 14f3ba280

void __cdecl oo2::simd_add_u32_256(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  lVar7 = 0x10;
  do {
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    *param_1 = *param_3 + *param_2;
    param_1[1] = uVar4 + uVar1;
    param_1[2] = uVar5 + uVar2;
    param_1[3] = uVar6 + uVar3;
    uVar1 = param_2[5];
    uVar2 = param_2[6];
    uVar3 = param_2[7];
    uVar4 = param_3[5];
    uVar5 = param_3[6];
    uVar6 = param_3[7];
    param_1[4] = param_3[4] + param_2[4];
    param_1[5] = uVar4 + uVar1;
    param_1[6] = uVar5 + uVar2;
    param_1[7] = uVar6 + uVar3;
    uVar1 = param_2[9];
    uVar2 = param_2[10];
    uVar3 = param_2[0xb];
    uVar4 = param_3[9];
    uVar5 = param_3[10];
    uVar6 = param_3[0xb];
    param_1[8] = param_3[8] + param_2[8];
    param_1[9] = uVar4 + uVar1;
    param_1[10] = uVar5 + uVar2;
    param_1[0xb] = uVar6 + uVar3;
    uVar1 = param_3[0xd];
    uVar2 = param_3[0xe];
    uVar3 = param_3[0xf];
    uVar4 = param_2[0xd];
    uVar5 = param_2[0xe];
    uVar6 = param_2[0xf];
    param_1[0xc] = param_3[0xc] + param_2[0xc];
    param_1[0xd] = uVar1 + uVar4;
    param_1[0xe] = uVar2 + uVar5;
    param_1[0xf] = uVar3 + uVar6;
    lVar7 = lVar7 + -1;
    param_1 = param_1 + 0x10;
    param_2 = param_2 + 0x10;
    param_3 = param_3 + 0x10;
  } while (lVar7 != 0);
  return;
}

// simd_dotproduct_s16_s16_256 @ 14f3ba300

int __cdecl oo2::simd_dotproduct_s16_s16_256(short *param_1,short *param_2)

{
  undefined1 (*pauVar1) [16];
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar5 = 0;
  iVar6 = 0;
  iVar7 = 0;
  iVar8 = 0;
  lVar3 = (longlong)param_1 - (longlong)param_2;
  lVar2 = 0x20;
  do {
    pauVar1 = (undefined1 (*) [16])(lVar3 + (longlong)param_2);
    auVar4 = *(undefined1 (*) [16])param_2;
    param_2 = (short *)((longlong)param_2 + 0x10);
    auVar4 = pmaddwd(*pauVar1,auVar4);
    iVar5 = iVar5 + auVar4._0_4_;
    iVar6 = iVar6 + auVar4._4_4_;
    iVar7 = iVar7 + auVar4._8_4_;
    iVar8 = iVar8 + auVar4._12_4_;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return iVar8 + iVar6 + iVar7 + iVar5;
}

// simd_dotproduct_s32_s16_256 @ 14f3ba360

int __cdecl oo2::simd_dotproduct_s32_s16_256(int *param_1,bool param_2,short *param_3)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  int *piVar4;
  uint *puVar5;
  int *piVar6;
  uint *puVar7;
  undefined1 (*pauVar8) [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [14];
  undefined1 auVar13 [14];
  undefined1 auVar14 [14];
  undefined1 auVar15 [14];
  undefined1 auVar16 [14];
  undefined1 auVar17 [14];
  undefined1 auVar18 [14];
  undefined1 auVar19 [14];
  uint6 uVar20;
  uint6 uVar21;
  uint6 uVar22;
  uint6 uVar23;
  undefined1 auVar24 [14];
  undefined1 auVar25 [14];
  undefined1 auVar26 [14];
  undefined1 auVar27 [14];
  int *piVar28;
  uint *puVar29;
  int *piVar30;
  int *piVar31;
  uint *puVar32;
  uint *puVar33;
  int iVar34;
  int *piVar35;
  uint *puVar36;
  uint *puVar37;
  int *piVar38;
  uint *puVar39;
  int *piVar40;
  int *piVar41;
  uint *puVar42;
  uint *puVar43;
  int *piVar44;
  uint *puVar45;
  int *piVar46;
  int *piVar47;
  uint *puVar48;
  uint *puVar49;
  int *piVar50;
  uint *puVar51;
  int *piVar52;
  undefined1 auVar53 [14];
  undefined1 auVar54 [14];
  undefined1 auVar55 [14];
  undefined1 auVar56 [14];
  longlong lVar57;
  longlong lVar58;
  int *piVar59;
  undefined1 (*pauVar60) [16];
  undefined1 auVar61 [14];
  undefined1 auVar62 [14];
  undefined1 auVar63 [14];
  undefined1 auVar64 [14];
  undefined1 auVar65 [16];
  int iVar66;
  int iVar67;
  int iVar68;
  int iVar69;
  
  iVar66 = 0;
  iVar67 = 0;
  iVar68 = 0;
  iVar69 = 0;
  if (param_2) {
    lVar58 = 0;
    do {
      pauVar60 = (undefined1 (*) [16])(param_1 + lVar58);
      lVar57 = lVar58 + 4;
      pauVar8 = (undefined1 (*) [16])(param_3 + lVar58);
      lVar58 = lVar58 + 8;
      auVar65 = packssdw(*pauVar60,*(undefined1 (*) [16])(param_1 + lVar57));
      auVar65 = pmaddwd(auVar65,*pauVar8);
      iVar66 = iVar66 + auVar65._0_4_;
      iVar67 = iVar67 + auVar65._4_4_;
      iVar68 = iVar68 + auVar65._8_4_;
      iVar69 = iVar69 + auVar65._12_4_;
    } while (lVar58 < 0x100);
  }
  else {
    pauVar60 = (undefined1 (*) [16])(param_3 + 0x10);
    lVar58 = 8;
    piVar59 = param_1 + 8;
    do {
      auVar65 = pauVar60[-2];
      puVar1 = (uint *)(piVar59 + -4);
      piVar28 = piVar59 + -3;
      puVar29 = (uint *)(piVar59 + -2);
      piVar30 = piVar59 + -1;
      piVar2 = piVar59 + -8;
      piVar31 = piVar59 + -7;
      puVar32 = (uint *)(piVar59 + -6);
      puVar33 = (uint *)(piVar59 + -5);
      auVar61._0_8_ = CONCAT26(0,CONCAT24(auVar65._10_2_,(uint)auVar65._8_2_));
      auVar61._8_2_ = auVar65._12_2_;
      auVar61._10_2_ = 0;
      auVar61._12_2_ = auVar65._14_2_;
      auVar12._10_2_ = 0;
      auVar12._0_10_ = auVar65._0_10_;
      auVar12._12_2_ = auVar65._6_2_;
      auVar16._8_2_ = auVar65._4_2_;
      auVar16._0_8_ = auVar65._0_8_;
      auVar16._10_4_ = auVar12._10_4_;
      uVar20 = auVar16._8_6_;
      auVar53._6_8_ = 0;
      auVar53._0_6_ = uVar20;
      auVar24._4_2_ = auVar65._2_2_;
      auVar24._0_4_ = auVar65._0_4_;
      auVar24._6_8_ = SUB148(auVar53 << 0x40,6);
      iVar34 = *piVar59;
      piVar35 = piVar59 + 1;
      puVar36 = (uint *)(piVar59 + 2);
      puVar37 = (uint *)(piVar59 + 3);
      puVar3 = (uint *)(piVar59 + 4);
      piVar38 = piVar59 + 5;
      puVar39 = (uint *)(piVar59 + 6);
      piVar40 = piVar59 + 7;
      auVar9 = pauVar60[-1];
      auVar62._0_8_ = CONCAT26(0,CONCAT24(auVar9._10_2_,(uint)auVar9._8_2_));
      auVar62._8_2_ = auVar9._12_2_;
      auVar62._10_2_ = 0;
      auVar62._12_2_ = auVar9._14_2_;
      auVar13._10_2_ = 0;
      auVar13._0_10_ = auVar9._0_10_;
      auVar13._12_2_ = auVar9._6_2_;
      auVar17._8_2_ = auVar9._4_2_;
      auVar17._0_8_ = auVar9._0_8_;
      auVar17._10_4_ = auVar13._10_4_;
      uVar21 = auVar17._8_6_;
      auVar54._6_8_ = 0;
      auVar54._0_6_ = uVar21;
      auVar25._4_2_ = auVar9._2_2_;
      auVar25._0_4_ = auVar9._0_4_;
      auVar25._6_8_ = SUB148(auVar54 << 0x40,6);
      piVar4 = piVar59 + 8;
      piVar41 = piVar59 + 9;
      puVar42 = (uint *)(piVar59 + 10);
      puVar43 = (uint *)(piVar59 + 0xb);
      puVar5 = (uint *)(piVar59 + 0xc);
      piVar44 = piVar59 + 0xd;
      puVar45 = (uint *)(piVar59 + 0xe);
      piVar46 = piVar59 + 0xf;
      auVar10 = *pauVar60;
      auVar63._0_8_ = CONCAT26(0,CONCAT24(auVar10._10_2_,(uint)auVar10._8_2_));
      auVar63._8_2_ = auVar10._12_2_;
      auVar63._10_2_ = 0;
      auVar63._12_2_ = auVar10._14_2_;
      auVar14._10_2_ = 0;
      auVar14._0_10_ = auVar10._0_10_;
      auVar14._12_2_ = auVar10._6_2_;
      auVar18._8_2_ = auVar10._4_2_;
      auVar18._0_8_ = auVar10._0_8_;
      auVar18._10_4_ = auVar14._10_4_;
      uVar22 = auVar18._8_6_;
      auVar55._6_8_ = 0;
      auVar55._0_6_ = uVar22;
      auVar26._4_2_ = auVar10._2_2_;
      auVar26._0_4_ = auVar10._0_4_;
      auVar26._6_8_ = SUB148(auVar55 << 0x40,6);
      piVar6 = piVar59 + 0x10;
      piVar47 = piVar59 + 0x11;
      puVar48 = (uint *)(piVar59 + 0x12);
      puVar49 = (uint *)(piVar59 + 0x13);
      puVar7 = (uint *)(piVar59 + 0x14);
      piVar50 = piVar59 + 0x15;
      puVar51 = (uint *)(piVar59 + 0x16);
      piVar52 = piVar59 + 0x17;
      auVar11 = pauVar60[1];
      auVar64._0_8_ = CONCAT26(0,CONCAT24(auVar11._10_2_,(uint)auVar11._8_2_));
      auVar64._8_2_ = auVar11._12_2_;
      auVar64._10_2_ = 0;
      auVar64._12_2_ = auVar11._14_2_;
      auVar15._10_2_ = 0;
      auVar15._0_10_ = auVar11._0_10_;
      auVar15._12_2_ = auVar11._6_2_;
      auVar19._8_2_ = auVar11._4_2_;
      auVar19._0_8_ = auVar11._0_8_;
      auVar19._10_4_ = auVar15._10_4_;
      uVar23 = auVar19._8_6_;
      auVar56._6_8_ = 0;
      auVar56._0_6_ = uVar23;
      auVar27._4_2_ = auVar11._2_2_;
      auVar27._0_4_ = auVar11._0_4_;
      auVar27._6_8_ = SUB148(auVar56 << 0x40,6);
      piVar59 = piVar59 + 0x20;
      pauVar60 = pauVar60 + 4;
      iVar66 = (int)((auVar64._0_8_ & 0xffffffff) * (ulonglong)*puVar7) +
               (auVar11._0_4_ & 0xffff) * *piVar6 +
               (int)((auVar63._0_8_ & 0xffffffff) * (ulonglong)*puVar5) +
               (auVar10._0_4_ & 0xffff) * *piVar4 +
               (int)((auVar62._0_8_ & 0xffffffff) * (ulonglong)*puVar3) +
               (auVar9._0_4_ & 0xffff) * iVar34 +
               (int)((auVar61._0_8_ & 0xffffffff) * (ulonglong)*puVar1) +
               (auVar65._0_4_ & 0xffff) * *piVar2 + iVar66;
      iVar67 = (uint)auVar11._10_2_ * *piVar50 + auVar27._4_4_ * *piVar47 +
               (uint)auVar10._10_2_ * *piVar44 + auVar26._4_4_ * *piVar41 +
               (uint)auVar9._10_2_ * *piVar38 + auVar25._4_4_ * *piVar35 +
               (uint)auVar65._10_2_ * *piVar28 + auVar24._4_4_ * *piVar31 + iVar67;
      iVar68 = (int)(((ulonglong)auVar64._8_6_ & 0xffffffff) * (ulonglong)*puVar51) +
               (int)(((ulonglong)uVar23 & 0xffffffff) * (ulonglong)*puVar48) +
               (int)(((ulonglong)auVar63._8_6_ & 0xffffffff) * (ulonglong)*puVar45) +
               (int)(((ulonglong)uVar22 & 0xffffffff) * (ulonglong)*puVar42) +
               (int)(((ulonglong)auVar62._8_6_ & 0xffffffff) * (ulonglong)*puVar39) +
               (int)(((ulonglong)uVar21 & 0xffffffff) * (ulonglong)*puVar36) +
               (int)(((ulonglong)auVar61._8_6_ & 0xffffffff) * (ulonglong)*puVar29) +
               (int)(((ulonglong)uVar20 & 0xffffffff) * (ulonglong)*puVar32) + iVar68;
      iVar69 = (uint)auVar11._14_2_ * *piVar52 +
               (int)((ulonglong)(uVar23 >> 0x20) * (ulonglong)*puVar49) +
               (uint)auVar10._14_2_ * *piVar46 +
               (int)((ulonglong)(uVar22 >> 0x20) * (ulonglong)*puVar43) +
               (uint)auVar9._14_2_ * *piVar40 +
               (int)((ulonglong)(uVar21 >> 0x20) * (ulonglong)*puVar37) +
               (uint)auVar65._14_2_ * *piVar30 +
               (int)((ulonglong)(uVar20 >> 0x20) * (ulonglong)*puVar33) + iVar69;
      lVar58 = lVar58 + -1;
    } while (lVar58 != 0);
  }
  return iVar69 + iVar67 + iVar68 + iVar66;
}

// simd_dotproduct_s32_s8_256 @ 14f3ba5c0

int __cdecl oo2::simd_dotproduct_s32_s8_256(int *param_1,bool param_2,schar *param_3,int param_4)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  int *piVar15;
  int iVar16;
  int *piVar17;
  uint *puVar18;
  uint *puVar19;
  uint *puVar20;
  uint *puVar21;
  int *piVar22;
  undefined1 auVar23 [14];
  undefined1 auVar24 [12];
  unkbyte10 Var25;
  undefined1 auVar26 [12];
  undefined1 (*pauVar27) [16];
  int *piVar28;
  longlong lVar29;
  undefined1 auVar30 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar42 [16];
  uint6 uVar43;
  undefined1 auVar44 [16];
  undefined1 auVar53 [16];
  undefined2 uVar58;
  uint6 uVar61;
  int iVar67;
  int iVar68;
  int iVar69;
  int iVar70;
  undefined1 unaff_XMM11_Ba;
  undefined1 unaff_XMM11_Bb;
  undefined1 uVar71;
  undefined1 unaff_XMM11_Bc;
  undefined1 uVar72;
  undefined1 unaff_XMM11_Bd;
  undefined1 uVar73;
  undefined1 unaff_XMM11_Be;
  undefined1 unaff_XMM11_Bf;
  undefined1 uVar74;
  undefined1 unaff_XMM11_Bg;
  undefined1 uVar75;
  undefined1 unaff_XMM11_Bh;
  undefined1 uVar76;
  undefined1 unaff_XMM11_Bi;
  undefined1 unaff_XMM11_Bj;
  undefined1 uVar77;
  undefined1 unaff_XMM11_Bk;
  undefined1 uVar78;
  undefined1 unaff_XMM11_Bl;
  undefined1 uVar79;
  undefined1 unaff_XMM11_Bm;
  undefined1 unaff_XMM11_Bn;
  undefined1 uVar80;
  undefined1 unaff_XMM11_Bo;
  undefined1 uVar81;
  undefined1 unaff_XMM11_Bp;
  undefined1 uVar82;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  ulonglong uVar41;
  undefined1 auVar45 [16];
  undefined1 auVar52 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined4 uVar59;
  undefined6 uVar60;
  undefined8 uVar62;
  undefined1 auVar66 [16];
  undefined1 auVar63 [12];
  undefined1 auVar64 [14];
  undefined1 auVar65 [16];
  
  iVar67 = 0;
  iVar68 = 0;
  iVar69 = 0;
  iVar70 = 0;
  uVar6 = CONCAT13(unaff_XMM11_Bd,CONCAT12(unaff_XMM11_Bc,CONCAT11(unaff_XMM11_Bb,unaff_XMM11_Ba)))
          ^ CONCAT13(unaff_XMM11_Bd,CONCAT12(unaff_XMM11_Bc,CONCAT11(unaff_XMM11_Bb,unaff_XMM11_Ba))
                    );
  uVar71 = (undefined1)(uVar6 >> 8);
  uVar72 = (undefined1)(uVar6 >> 0x10);
  uVar73 = (undefined1)(uVar6 >> 0x18);
  uVar7 = CONCAT13(unaff_XMM11_Bh,CONCAT12(unaff_XMM11_Bg,CONCAT11(unaff_XMM11_Bf,unaff_XMM11_Be)))
          ^ CONCAT13(unaff_XMM11_Bh,CONCAT12(unaff_XMM11_Bg,CONCAT11(unaff_XMM11_Bf,unaff_XMM11_Be))
                    );
  uVar74 = (undefined1)(uVar7 >> 8);
  uVar75 = (undefined1)(uVar7 >> 0x10);
  uVar76 = (undefined1)(uVar7 >> 0x18);
  uVar8 = CONCAT13(unaff_XMM11_Bl,CONCAT12(unaff_XMM11_Bk,CONCAT11(unaff_XMM11_Bj,unaff_XMM11_Bi)))
          ^ CONCAT13(unaff_XMM11_Bl,CONCAT12(unaff_XMM11_Bk,CONCAT11(unaff_XMM11_Bj,unaff_XMM11_Bi))
                    );
  uVar77 = (undefined1)(uVar8 >> 8);
  uVar78 = (undefined1)(uVar8 >> 0x10);
  uVar79 = (undefined1)(uVar8 >> 0x18);
  uVar9 = CONCAT13(unaff_XMM11_Bp,CONCAT12(unaff_XMM11_Bo,CONCAT11(unaff_XMM11_Bn,unaff_XMM11_Bm)))
          ^ CONCAT13(unaff_XMM11_Bp,CONCAT12(unaff_XMM11_Bo,CONCAT11(unaff_XMM11_Bn,unaff_XMM11_Bm))
                    );
  uVar80 = (undefined1)(uVar9 >> 8);
  uVar81 = (undefined1)(uVar9 >> 0x10);
  uVar82 = (undefined1)(uVar9 >> 0x18);
  if (0 < param_4) {
    if (param_2) {
      lVar29 = 0;
      pauVar27 = (undefined1 (*) [16])(param_1 + 8);
      do {
        auVar38 = *(undefined1 (*) [16])(param_3 + lVar29);
        lVar29 = lVar29 + 0x10;
        auVar42[1] = (char)uVar8;
        auVar42[0] = auVar38[8];
        auVar42[2] = auVar38[9];
        auVar42[3] = uVar77;
        auVar42[4] = auVar38[10];
        auVar42[5] = uVar78;
        auVar42[6] = auVar38[0xb];
        auVar42[7] = uVar79;
        auVar42[8] = auVar38[0xc];
        auVar42[9] = (char)uVar9;
        auVar42[10] = auVar38[0xd];
        auVar42[0xb] = uVar80;
        auVar42[0xc] = auVar38[0xe];
        auVar42[0xd] = uVar81;
        auVar42[0xe] = auVar38[0xf];
        auVar42[0xf] = uVar82;
        auVar37._0_14_ = auVar38._0_14_;
        auVar37[0xe] = auVar38[7];
        auVar37[0xf] = uVar76;
        auVar36._14_2_ = auVar37._14_2_;
        auVar36._0_13_ = auVar38._0_13_;
        auVar36[0xd] = uVar75;
        auVar35._13_3_ = auVar36._13_3_;
        auVar35._0_12_ = auVar38._0_12_;
        auVar35[0xc] = auVar38[6];
        auVar34._12_4_ = auVar35._12_4_;
        auVar34._0_11_ = auVar38._0_11_;
        auVar34[0xb] = uVar74;
        auVar33._11_5_ = auVar34._11_5_;
        auVar33._0_10_ = auVar38._0_10_;
        auVar33[10] = auVar38[5];
        auVar32._10_6_ = auVar33._10_6_;
        auVar32._0_9_ = auVar38._0_9_;
        auVar32[9] = (char)uVar7;
        auVar31._9_7_ = auVar32._9_7_;
        auVar31._0_8_ = auVar38._0_8_;
        auVar31[8] = auVar38[4];
        auVar30._8_8_ = auVar31._8_8_;
        auVar30[7] = uVar73;
        auVar30[6] = auVar38[3];
        auVar30[5] = uVar72;
        auVar30[4] = auVar38[2];
        auVar30[3] = uVar71;
        auVar30[2] = auVar38[1];
        auVar30[0] = auVar38[0];
        auVar30[1] = (char)uVar6;
        auVar38 = packssdw(pauVar27[-2],pauVar27[-1]);
        auVar39 = pmaddwd(auVar38,auVar30);
        auVar38 = packssdw(*pauVar27,pauVar27[1]);
        auVar38 = pmaddwd(auVar38,auVar42);
        iVar67 = iVar67 + auVar39._0_4_ + auVar38._0_4_;
        iVar68 = iVar68 + auVar39._4_4_ + auVar38._4_4_;
        iVar69 = iVar69 + auVar39._8_4_ + auVar38._8_4_;
        iVar70 = iVar70 + auVar39._12_4_ + auVar38._12_4_;
        pauVar27 = pauVar27 + 4;
      } while (lVar29 < param_4);
    }
    else {
      lVar29 = 0;
      piVar28 = param_1 + 8;
      do {
        auVar38 = *(undefined1 (*) [16])(param_3 + lVar29);
        lVar29 = lVar29 + 0x10;
        piVar1 = piVar28 + -8;
        piVar10 = piVar28 + -7;
        puVar11 = (uint *)(piVar28 + -6);
        puVar12 = (uint *)(piVar28 + -5);
        puVar2 = (uint *)(piVar28 + -4);
        puVar13 = (uint *)(piVar28 + -3);
        puVar14 = (uint *)(piVar28 + -2);
        piVar15 = piVar28 + -1;
        iVar16 = *piVar28;
        piVar17 = piVar28 + 1;
        puVar18 = (uint *)(piVar28 + 2);
        puVar19 = (uint *)(piVar28 + 3);
        puVar3 = (uint *)(piVar28 + 4);
        puVar20 = (uint *)(piVar28 + 5);
        puVar21 = (uint *)(piVar28 + 6);
        piVar22 = piVar28 + 7;
        piVar28 = piVar28 + 0x10;
        uVar58 = CONCAT11((char)uVar8,auVar38[8]);
        uVar59 = CONCAT13(uVar77,CONCAT12(auVar38[9],uVar58));
        uVar60 = CONCAT15(uVar78,CONCAT14(auVar38[10],uVar59));
        uVar62 = CONCAT17(uVar79,CONCAT16(auVar38[0xb],uVar60));
        auVar63._0_10_ = CONCAT19((char)uVar9,CONCAT18(auVar38[0xc],uVar62));
        auVar63[10] = auVar38[0xd];
        auVar63[0xb] = uVar80;
        auVar64[0xc] = auVar38[0xe];
        auVar64._0_12_ = auVar63;
        auVar64[0xd] = uVar81;
        auVar65[0xe] = auVar38[0xf];
        auVar65._0_14_ = auVar64;
        auVar65[0xf] = uVar82;
        auVar51._0_14_ = auVar38._0_14_;
        auVar51[0xe] = auVar38[7];
        auVar51[0xf] = uVar76;
        auVar50._14_2_ = auVar51._14_2_;
        auVar50._0_13_ = auVar38._0_13_;
        auVar50[0xd] = uVar75;
        auVar49._13_3_ = auVar50._13_3_;
        auVar49._0_12_ = auVar38._0_12_;
        auVar49[0xc] = auVar38[6];
        auVar48._12_4_ = auVar49._12_4_;
        auVar48._0_11_ = auVar38._0_11_;
        auVar48[0xb] = uVar74;
        auVar47._11_5_ = auVar48._11_5_;
        auVar47._0_10_ = auVar38._0_10_;
        auVar47[10] = auVar38[5];
        auVar46._10_6_ = auVar47._10_6_;
        auVar46._0_9_ = auVar38._0_9_;
        auVar46[9] = (char)uVar7;
        auVar45._9_7_ = auVar46._9_7_;
        auVar45._0_8_ = auVar38._0_8_;
        auVar45[8] = auVar38[4];
        Var25 = CONCAT91(CONCAT81(auVar45._8_8_,uVar73),auVar38[3]);
        auVar24._2_10_ = Var25;
        auVar24[1] = uVar72;
        auVar24[0] = auVar38[2];
        auVar23._2_12_ = auVar24;
        auVar23[1] = uVar71;
        auVar23[0] = auVar38[1];
        auVar44._0_2_ = CONCAT11((char)uVar6,auVar38[0]);
        auVar44._2_14_ = auVar23;
        uVar5 = (undefined2)(uVar7 >> 0x10);
        auVar57._12_2_ = (short)((ulonglong)uVar62 >> 0x30);
        auVar57._0_12_ = auVar63;
        auVar57._14_2_ = uVar5;
        auVar56._12_4_ = auVar57._12_4_;
        auVar56._10_2_ = (short)uVar7;
        auVar56._0_10_ = auVar63._0_10_;
        auVar55._10_6_ = auVar56._10_6_;
        auVar55._8_2_ = (short)((uint6)uVar60 >> 0x20);
        auVar55._0_8_ = uVar62;
        auVar54._8_8_ = auVar55._8_8_;
        uVar4 = (undefined2)(uVar6 >> 0x10);
        auVar54._6_2_ = uVar4;
        auVar54._0_6_ = uVar60;
        auVar53._6_10_ = auVar54._6_10_;
        auVar53._4_2_ = (short)((uint)uVar59 >> 0x10);
        auVar53._0_4_ = uVar59;
        auVar40._0_12_ = auVar44._0_12_;
        auVar40._12_2_ = (short)Var25;
        auVar40._14_2_ = uVar5;
        auVar39._12_4_ = auVar40._12_4_;
        auVar39._0_10_ = auVar44._0_10_;
        auVar39._10_2_ = (short)uVar7;
        auVar38._10_6_ = auVar39._10_6_;
        auVar38._0_8_ = auVar44._0_8_;
        auVar38._8_2_ = auVar24._0_2_;
        uVar41 = auVar38._8_8_;
        auVar26._4_8_ = uVar41;
        auVar26._2_2_ = uVar4;
        auVar26._0_2_ = auVar23._0_2_;
        uVar43 = CONCAT24(auVar47._10_2_,CONCAT22((short)uVar8,auVar45._8_2_));
        uVar4 = (undefined2)(uVar8 >> 0x10);
        auVar52._0_8_ = CONCAT26(uVar4,uVar43);
        auVar52._8_2_ = auVar49._12_2_;
        auVar52._10_2_ = (short)uVar9;
        auVar52._12_2_ = auVar50._14_2_;
        uVar5 = (undefined2)(uVar9 >> 0x10);
        auVar52._14_2_ = uVar5;
        uVar61 = CONCAT24(auVar63._10_2_,
                          CONCAT22((short)uVar8,(short)((unkuint10)auVar63._0_10_ >> 0x40)));
        auVar66._0_8_ = CONCAT26(uVar4,uVar61);
        auVar66._8_2_ = auVar64._12_2_;
        auVar66._10_2_ = (short)uVar9;
        auVar66._12_2_ = auVar65._14_2_;
        auVar66._14_2_ = uVar5;
        iVar67 = iVar67 + CONCAT22((short)uVar6,auVar44._0_2_) * *piVar1 +
                 (int)(((ulonglong)uVar43 & 0xffffffff) * (ulonglong)*puVar2) +
                 CONCAT22((short)uVar6,uVar58) * iVar16 +
                 (int)(((ulonglong)uVar61 & 0xffffffff) * (ulonglong)*puVar3);
        iVar68 = iVar68 + auVar26._0_4_ * *piVar10 +
                 (int)((auVar52._0_8_ >> 0x20) * (ulonglong)*puVar13) + auVar53._4_4_ * *piVar17 +
                 (int)((auVar66._0_8_ >> 0x20) * (ulonglong)*puVar20);
        iVar69 = iVar69 + (int)((uVar41 & 0xffffffff) * (ulonglong)*puVar11) +
                 (int)((auVar52._8_8_ & 0xffffffff) * (ulonglong)*puVar14) +
                 (int)((auVar54._8_8_ & 0xffffffff) * (ulonglong)*puVar18) +
                 (int)((auVar66._8_8_ & 0xffffffff) * (ulonglong)*puVar21);
        iVar70 = iVar70 + (int)((uVar41 >> 0x20) * (ulonglong)*puVar12) + auVar52._12_4_ * *piVar15
                 + (int)((auVar54._8_8_ >> 0x20) * (ulonglong)*puVar19) + auVar66._12_4_ * *piVar22;
      } while (lVar29 < param_4);
    }
  }
  return iVar70 + iVar68 + iVar69 + iVar67;
}

// simd_find_max_U32_256 @ 14f3ba7c0

uint __cdecl oo2::simd_find_max_U32_256(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  
  if (((byte)g_rrCPUx86_feature_flags & 8) != 0) {
    uVar4 = simd_find_max_U32_256_sse4(param_1);
    return uVar4;
  }
  uVar11 = 0;
  uVar6 = 0;
  uVar4 = 0;
  uVar8 = 0;
  lVar7 = 4;
  puVar9 = param_1 + 2;
  do {
    uVar5 = puVar9[-2];
    if (puVar9[-2] < uVar11) {
      uVar5 = uVar11;
    }
    uVar11 = puVar9[-1];
    if (puVar9[-1] < uVar6) {
      uVar11 = uVar6;
    }
    uVar6 = *puVar9;
    if (*puVar9 < uVar8) {
      uVar6 = uVar8;
    }
    uVar8 = puVar9[1];
    if (puVar9[1] < uVar4) {
      uVar8 = uVar4;
    }
    uVar4 = puVar9[2];
    if (puVar9[2] < uVar5) {
      uVar4 = uVar5;
    }
    uVar5 = puVar9[3];
    if (puVar9[3] < uVar11) {
      uVar5 = uVar11;
    }
    uVar11 = puVar9[4];
    if (puVar9[4] < uVar6) {
      uVar11 = uVar6;
    }
    uVar6 = puVar9[5];
    if (puVar9[5] < uVar8) {
      uVar6 = uVar8;
    }
    uVar8 = puVar9[6];
    if (puVar9[6] < uVar4) {
      uVar8 = uVar4;
    }
    uVar4 = puVar9[7];
    if (puVar9[7] < uVar5) {
      uVar4 = uVar5;
    }
    uVar5 = puVar9[8];
    if (puVar9[8] < uVar11) {
      uVar5 = uVar11;
    }
    uVar11 = puVar9[9];
    if (puVar9[9] < uVar6) {
      uVar11 = uVar6;
    }
    uVar6 = puVar9[10];
    if (puVar9[10] < uVar8) {
      uVar6 = uVar8;
    }
    uVar8 = puVar9[0xb];
    if (puVar9[0xb] < uVar4) {
      uVar8 = uVar4;
    }
    uVar4 = puVar9[0xc];
    if (puVar9[0xc] < uVar5) {
      uVar4 = uVar5;
    }
    uVar5 = puVar9[0xd];
    if (puVar9[0xd] < uVar11) {
      uVar5 = uVar11;
    }
    uVar11 = puVar9[0xe];
    if (puVar9[0xe] < uVar6) {
      uVar11 = uVar6;
    }
    uVar6 = puVar9[0xf];
    if (puVar9[0xf] < uVar8) {
      uVar6 = uVar8;
    }
    uVar8 = puVar9[0x10];
    if (puVar9[0x10] < uVar4) {
      uVar8 = uVar4;
    }
    uVar4 = puVar9[0x11];
    if (puVar9[0x11] < uVar5) {
      uVar4 = uVar5;
    }
    uVar5 = puVar9[0x12];
    if (puVar9[0x12] < uVar11) {
      uVar5 = uVar11;
    }
    uVar11 = puVar9[0x13];
    if (puVar9[0x13] < uVar6) {
      uVar11 = uVar6;
    }
    uVar6 = puVar9[0x14];
    if (puVar9[0x14] < uVar8) {
      uVar6 = uVar8;
    }
    uVar8 = puVar9[0x15];
    if (puVar9[0x15] < uVar4) {
      uVar8 = uVar4;
    }
    uVar4 = puVar9[0x16];
    if (puVar9[0x16] < uVar5) {
      uVar4 = uVar5;
    }
    uVar5 = puVar9[0x17];
    if (puVar9[0x17] < uVar11) {
      uVar5 = uVar11;
    }
    uVar11 = puVar9[0x18];
    if (puVar9[0x18] < uVar6) {
      uVar11 = uVar6;
    }
    uVar6 = puVar9[0x19];
    if (puVar9[0x19] < uVar8) {
      uVar6 = uVar8;
    }
    uVar8 = puVar9[0x1a];
    if (puVar9[0x1a] < uVar4) {
      uVar8 = uVar4;
    }
    uVar4 = puVar9[0x1b];
    if (puVar9[0x1b] < uVar5) {
      uVar4 = uVar5;
    }
    uVar5 = puVar9[0x1c];
    if (puVar9[0x1c] < uVar11) {
      uVar5 = uVar11;
    }
    uVar11 = puVar9[0x1d];
    if (puVar9[0x1d] < uVar6) {
      uVar11 = uVar6;
    }
    uVar6 = puVar9[0x1e];
    if (puVar9[0x1e] < uVar8) {
      uVar6 = uVar8;
    }
    uVar8 = puVar9[0x1f];
    if (puVar9[0x1f] < uVar4) {
      uVar8 = uVar4;
    }
    uVar4 = puVar9[0x20];
    if (puVar9[0x20] < uVar5) {
      uVar4 = uVar5;
    }
    uVar5 = puVar9[0x21];
    if (puVar9[0x21] < uVar11) {
      uVar5 = uVar11;
    }
    uVar11 = puVar9[0x22];
    if (puVar9[0x22] < uVar6) {
      uVar11 = uVar6;
    }
    uVar6 = puVar9[0x23];
    if (puVar9[0x23] < uVar8) {
      uVar6 = uVar8;
    }
    uVar8 = puVar9[0x24];
    if (puVar9[0x24] < uVar4) {
      uVar8 = uVar4;
    }
    uVar4 = puVar9[0x25];
    if (puVar9[0x25] < uVar5) {
      uVar4 = uVar5;
    }
    uVar5 = puVar9[0x26];
    if (puVar9[0x26] < uVar11) {
      uVar5 = uVar11;
    }
    uVar11 = puVar9[0x27];
    if (puVar9[0x27] < uVar6) {
      uVar11 = uVar6;
    }
    uVar6 = puVar9[0x28];
    if (puVar9[0x28] < uVar8) {
      uVar6 = uVar8;
    }
    uVar8 = puVar9[0x29];
    if (puVar9[0x29] < uVar4) {
      uVar8 = uVar4;
    }
    uVar4 = puVar9[0x2a];
    if (puVar9[0x2a] < uVar5) {
      uVar4 = uVar5;
    }
    uVar5 = puVar9[0x2b];
    if (puVar9[0x2b] < uVar11) {
      uVar5 = uVar11;
    }
    uVar11 = puVar9[0x2c];
    if (puVar9[0x2c] < uVar6) {
      uVar11 = uVar6;
    }
    uVar6 = puVar9[0x2d];
    if (puVar9[0x2d] < uVar8) {
      uVar6 = uVar8;
    }
    uVar8 = puVar9[0x2e];
    if (puVar9[0x2e] < uVar4) {
      uVar8 = uVar4;
    }
    uVar4 = puVar9[0x2f];
    if (puVar9[0x2f] < uVar5) {
      uVar4 = uVar5;
    }
    uVar5 = puVar9[0x30];
    if (puVar9[0x30] < uVar11) {
      uVar5 = uVar11;
    }
    uVar11 = puVar9[0x31];
    if (puVar9[0x31] < uVar6) {
      uVar11 = uVar6;
    }
    uVar6 = puVar9[0x32];
    if (puVar9[0x32] < uVar8) {
      uVar6 = uVar8;
    }
    uVar8 = puVar9[0x33];
    if (puVar9[0x33] < uVar4) {
      uVar8 = uVar4;
    }
    uVar4 = puVar9[0x34];
    if (puVar9[0x34] < uVar5) {
      uVar4 = uVar5;
    }
    uVar5 = puVar9[0x35];
    if (puVar9[0x35] < uVar11) {
      uVar5 = uVar11;
    }
    uVar1 = puVar9[0x36];
    if (puVar9[0x36] < uVar6) {
      uVar1 = uVar6;
    }
    uVar10 = puVar9[0x37];
    if (puVar9[0x37] < uVar8) {
      uVar10 = uVar8;
    }
    uVar2 = puVar9[0x38];
    if (puVar9[0x38] < uVar4) {
      uVar2 = uVar4;
    }
    uVar3 = puVar9[0x39];
    if (puVar9[0x39] < uVar5) {
      uVar3 = uVar5;
    }
    uVar11 = puVar9[0x3a];
    if (puVar9[0x3a] < uVar1) {
      uVar11 = uVar1;
    }
    uVar6 = puVar9[0x3b];
    if (puVar9[0x3b] < uVar10) {
      uVar6 = uVar10;
    }
    uVar8 = puVar9[0x3c];
    if (puVar9[0x3c] < uVar2) {
      uVar8 = uVar2;
    }
    uVar4 = puVar9[0x3d];
    if (puVar9[0x3d] < uVar3) {
      uVar4 = uVar3;
    }
    lVar7 = lVar7 + -1;
    puVar9 = puVar9 + 0x40;
  } while (lVar7 != 0);
  if (uVar4 < uVar8) {
    uVar4 = uVar8;
  }
  if (uVar6 < uVar11) {
    uVar6 = uVar11;
  }
  if (uVar4 < uVar6) {
    uVar4 = uVar6;
  }
  return uVar4;
}

// simd_horizontal_sum_s32 @ 14f3bab00

int __cdecl oo2::simd_horizontal_sum_s32(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  
  lVar17 = (longlong)param_2;
  iVar29 = 0;
  iVar30 = 0;
  iVar31 = 0;
  iVar32 = 0;
  lVar19 = lVar17 * 4;
  piVar4 = param_1 + lVar17;
  if (0xf < lVar17) {
    do {
      iVar24 = *param_1;
      piVar5 = param_1 + 1;
      piVar6 = param_1 + 2;
      piVar7 = param_1 + 3;
      lVar19 = lVar19 + -0x40;
      piVar1 = param_1 + 4;
      piVar8 = param_1 + 5;
      piVar9 = param_1 + 6;
      piVar10 = param_1 + 7;
      piVar2 = param_1 + 8;
      piVar11 = param_1 + 9;
      piVar12 = param_1 + 10;
      piVar13 = param_1 + 0xb;
      piVar3 = param_1 + 0xc;
      piVar14 = param_1 + 0xd;
      piVar15 = param_1 + 0xe;
      piVar16 = param_1 + 0xf;
      param_1 = param_1 + 0x10;
      iVar29 = iVar29 + *piVar3 + *piVar2 + *piVar1 + iVar24;
      iVar30 = iVar30 + *piVar14 + *piVar11 + *piVar8 + *piVar5;
      iVar31 = iVar31 + *piVar15 + *piVar12 + *piVar9 + *piVar6;
      iVar32 = iVar32 + *piVar16 + *piVar13 + *piVar10 + *piVar7;
    } while (0x3f < lVar19);
  }
  for (uVar20 = (longlong)piVar4 - (longlong)param_1; 0xf < (longlong)(uVar20 & 0xfffffffffffffffc);
      uVar20 = uVar20 - 0x10) {
    iVar24 = *param_1;
    piVar1 = param_1 + 1;
    piVar2 = param_1 + 2;
    piVar3 = param_1 + 3;
    param_1 = param_1 + 4;
    iVar29 = iVar29 + iVar24;
    iVar30 = iVar30 + *piVar1;
    iVar31 = iVar31 + *piVar2;
    iVar32 = iVar32 + *piVar3;
  }
  uVar21 = 0;
  uVar18 = 0;
  uVar22 = 0;
  iVar29 = iVar32 + iVar30 + iVar31 + iVar29;
  uVar20 = (ulonglong)((longlong)piVar4 + (3 - (longlong)param_1)) >> 2;
  if (piVar4 < param_1) {
    uVar20 = uVar21;
  }
  if ((uVar20 != 0) && (7 < uVar20)) {
    iVar25 = 0;
    iVar26 = 0;
    iVar27 = 0;
    iVar28 = 0;
    iVar30 = 0;
    iVar31 = 0;
    iVar32 = 0;
    iVar24 = 0;
    uVar23 = uVar21;
    do {
      uVar23 = uVar23 + 8;
      iVar25 = iVar25 + *param_1;
      iVar26 = iVar26 + param_1[1];
      iVar27 = iVar27 + param_1[2];
      iVar28 = iVar28 + param_1[3];
      piVar1 = param_1 + 4;
      piVar2 = param_1 + 5;
      piVar3 = param_1 + 6;
      piVar5 = param_1 + 7;
      param_1 = param_1 + 8;
      iVar30 = iVar30 + *piVar1;
      iVar31 = iVar31 + *piVar2;
      iVar32 = iVar32 + *piVar3;
      iVar24 = iVar24 + *piVar5;
    } while (uVar23 < (uVar20 & 0xfffffffffffffff8));
    iVar29 = iVar29 + iVar30 + iVar25 + iVar32 + iVar27 + iVar31 + iVar26 + iVar24 + iVar28;
  }
  if (piVar4 <= param_1) {
    return iVar29;
  }
  if (7 < ((longlong)piVar4 + (3 - (longlong)param_1) & 0xfffffffffffffffcU)) {
    uVar20 = uVar21;
    do {
      uVar18 = (int)uVar21 + *param_1;
      uVar21 = (ulonglong)uVar18;
      uVar22 = (int)uVar20 + param_1[1];
      uVar20 = (ulonglong)uVar22;
      param_1 = param_1 + 2;
    } while (param_1 < piVar4 + -1);
    if (piVar4 <= param_1) goto LAB_14f3bac68;
  }
  iVar29 = iVar29 + *param_1;
LAB_14f3bac68:
  return uVar22 + uVar18 + iVar29;
}

// simd_interleave_8x2 @ 14f3bac80

void __cdecl oo2::simd_interleave_8x2(ushort *param_1,long64 param_2,uchar *param_3,uchar *param_4)

{
  ulonglong *puVar1;
  uchar *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uchar uVar6;
  int iVar7;
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined1 auVar24 [15];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  undefined1 auVar36 [15];
  undefined1 auVar37 [15];
  undefined1 auVar38 [15];
  undefined1 auVar39 [15];
  undefined1 auVar40 [15];
  undefined1 auVar41 [15];
  undefined1 auVar42 [15];
  undefined1 auVar43 [15];
  undefined1 auVar44 [15];
  undefined1 auVar45 [15];
  undefined1 auVar46 [15];
  undefined1 auVar47 [15];
  undefined1 auVar48 [15];
  undefined1 auVar49 [15];
  undefined1 auVar50 [15];
  undefined1 auVar51 [15];
  undefined1 auVar52 [15];
  undefined1 auVar53 [15];
  undefined1 auVar54 [15];
  undefined1 auVar55 [15];
  uchar uVar56;
  uchar uVar57;
  uchar uVar58;
  uchar uVar59;
  uchar uVar60;
  uchar uVar61;
  uchar uVar62;
  uchar uVar63;
  uchar uVar64;
  uchar uVar65;
  uchar uVar66;
  uchar uVar67;
  uchar uVar68;
  uchar uVar69;
  uchar uVar70;
  uchar uVar71;
  uchar uVar72;
  uchar uVar73;
  uchar uVar74;
  uchar uVar75;
  uchar uVar76;
  uchar uVar77;
  uchar uVar78;
  uchar uVar79;
  uchar uVar80;
  uchar uVar81;
  uchar uVar82;
  uchar uVar83;
  uchar uVar84;
  uchar uVar85;
  undefined1 auVar86 [15];
  undefined1 auVar87 [15];
  undefined1 auVar88 [15];
  undefined1 auVar89 [15];
  undefined1 auVar90 [15];
  undefined1 auVar91 [15];
  undefined1 auVar92 [15];
  undefined1 auVar93 [15];
  undefined1 auVar94 [15];
  undefined1 auVar95 [15];
  undefined1 auVar96 [15];
  undefined1 auVar97 [15];
  undefined1 auVar98 [15];
  undefined1 auVar99 [15];
  undefined1 auVar100 [15];
  undefined1 auVar101 [15];
  undefined1 auVar102 [15];
  undefined1 auVar103 [15];
  undefined1 auVar104 [15];
  undefined1 auVar105 [15];
  undefined1 auVar106 [15];
  undefined1 auVar107 [15];
  undefined1 auVar108 [15];
  undefined1 auVar109 [15];
  int iVar110;
  uchar *puVar111;
  uint uVar112;
  int iVar113;
  longlong lVar114;
  undefined1 (*pauVar115) [16];
  ushort *puVar116;
  ulonglong *puVar117;
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  
  iVar7 = (int)param_2;
  iVar113 = 0;
  if (0 < (longlong)(iVar7 + -0xf)) {
    lVar114 = ((longlong)(iVar7 + -0xf) - 1U >> 4) + 1;
    iVar113 = (int)lVar114 << 4;
    puVar111 = param_4;
    puVar116 = param_1;
    do {
      puVar2 = puVar111 + ((longlong)param_3 - (longlong)param_4);
      uVar6 = puVar2[1];
      uVar56 = puVar2[2];
      uVar57 = puVar2[3];
      uVar58 = puVar2[4];
      uVar59 = puVar2[5];
      uVar60 = puVar2[6];
      uVar61 = puVar2[7];
      uVar62 = puVar2[8];
      uVar63 = puVar2[9];
      uVar64 = puVar2[10];
      uVar65 = puVar2[0xb];
      uVar66 = puVar2[0xc];
      uVar67 = puVar2[0xd];
      uVar68 = puVar2[0xe];
      uVar69 = puVar2[0xf];
      uVar70 = *puVar111;
      uVar71 = puVar111[1];
      uVar72 = puVar111[2];
      uVar73 = puVar111[3];
      uVar74 = puVar111[4];
      uVar75 = puVar111[5];
      uVar76 = puVar111[6];
      uVar77 = puVar111[7];
      uVar78 = puVar111[8];
      uVar79 = puVar111[9];
      uVar80 = puVar111[10];
      uVar81 = puVar111[0xb];
      uVar82 = puVar111[0xc];
      uVar83 = puVar111[0xd];
      uVar84 = puVar111[0xe];
      uVar85 = puVar111[0xf];
      puVar111 = puVar111 + 0x10;
      *(uchar *)puVar116 = *puVar2;
      *(uchar *)((longlong)puVar116 + 1) = uVar70;
      *(uchar *)(puVar116 + 1) = uVar6;
      *(uchar *)((longlong)puVar116 + 3) = uVar71;
      *(uchar *)(puVar116 + 2) = uVar56;
      *(uchar *)((longlong)puVar116 + 5) = uVar72;
      *(uchar *)(puVar116 + 3) = uVar57;
      *(uchar *)((longlong)puVar116 + 7) = uVar73;
      *(uchar *)(puVar116 + 4) = uVar58;
      *(uchar *)((longlong)puVar116 + 9) = uVar74;
      *(uchar *)(puVar116 + 5) = uVar59;
      *(uchar *)((longlong)puVar116 + 0xb) = uVar75;
      *(uchar *)(puVar116 + 6) = uVar60;
      *(uchar *)((longlong)puVar116 + 0xd) = uVar76;
      *(uchar *)(puVar116 + 7) = uVar61;
      *(uchar *)((longlong)puVar116 + 0xf) = uVar77;
      *(uchar *)(puVar116 + 8) = uVar62;
      *(uchar *)((longlong)puVar116 + 0x11) = uVar78;
      *(uchar *)(puVar116 + 9) = uVar63;
      *(uchar *)((longlong)puVar116 + 0x13) = uVar79;
      *(uchar *)(puVar116 + 10) = uVar64;
      *(uchar *)((longlong)puVar116 + 0x15) = uVar80;
      *(uchar *)(puVar116 + 0xb) = uVar65;
      *(uchar *)((longlong)puVar116 + 0x17) = uVar81;
      *(uchar *)(puVar116 + 0xc) = uVar66;
      *(uchar *)((longlong)puVar116 + 0x19) = uVar82;
      *(uchar *)(puVar116 + 0xd) = uVar67;
      *(uchar *)((longlong)puVar116 + 0x1b) = uVar83;
      *(uchar *)(puVar116 + 0xe) = uVar68;
      *(uchar *)((longlong)puVar116 + 0x1d) = uVar84;
      *(uchar *)(puVar116 + 0xf) = uVar69;
      *(uchar *)((longlong)puVar116 + 0x1f) = uVar85;
      lVar114 = lVar114 + -1;
      puVar116 = puVar116 + 0x10;
    } while (lVar114 != 0);
  }
  if (iVar113 < iVar7) {
    if (0x1f < (uint)(iVar7 - iVar113)) {
      iVar110 = iVar7 + -1;
      if (((param_3 + iVar110 < param_1 + iVar113) || (param_1 + iVar110 < param_3 + iVar113)) &&
         ((param_4 + iVar110 < param_1 + iVar113 || (param_1 + iVar110 < param_4 + iVar113)))) {
        uVar112 = iVar7 - iVar113 & 0x8000001f;
        if ((int)uVar112 < 0) {
          uVar112 = (uVar112 - 1 | 0xffffffe0) + 1;
        }
        lVar114 = (longlong)param_4 - (longlong)param_3;
        auVar126 = ZEXT416(8);
        pauVar115 = (undefined1 (*) [16])(param_1 + (longlong)iVar113 + 0x10);
        puVar117 = (ulonglong *)((longlong)(param_3 + iVar113) + 8);
        do {
          uVar3 = *(ulonglong *)((longlong)puVar117 + lVar114 + -8);
          uVar4 = puVar117[-1];
          iVar113 = iVar113 + 0x20;
          uVar5 = *(ulonglong *)(lVar114 + (longlong)puVar117);
          puVar1 = puVar117 + 4;
          auVar8._8_6_ = 0;
          auVar8._0_8_ = uVar4;
          auVar8[0xe] = (char)(uVar4 >> 0x38);
          auVar16._8_4_ = 0;
          auVar16._0_8_ = uVar4;
          auVar16[0xc] = (char)(uVar4 >> 0x30);
          auVar16._13_2_ = auVar8._13_2_;
          auVar24._8_4_ = 0;
          auVar24._0_8_ = uVar4;
          auVar24._12_3_ = auVar16._12_3_;
          auVar32._8_2_ = 0;
          auVar32._0_8_ = uVar4;
          auVar32[10] = (char)(uVar4 >> 0x28);
          auVar32._11_4_ = auVar24._11_4_;
          auVar40._8_2_ = 0;
          auVar40._0_8_ = uVar4;
          auVar40._10_5_ = auVar32._10_5_;
          auVar48[8] = (char)(uVar4 >> 0x20);
          auVar48._0_8_ = uVar4;
          auVar48._9_6_ = auVar40._9_6_;
          auVar86._7_8_ = 0;
          auVar86._0_7_ = auVar48._8_7_;
          auVar94._1_8_ = SUB158(auVar86 << 0x40,7);
          auVar94[0] = (char)(uVar4 >> 0x18);
          auVar94._9_6_ = 0;
          auVar95._1_10_ = SUB1510(auVar94 << 0x30,5);
          auVar95[0] = (char)(uVar4 >> 0x10);
          auVar95._11_4_ = 0;
          auVar121._3_12_ = SUB1512(auVar95 << 0x20,3);
          auVar121[2] = (char)(uVar4 >> 8);
          auVar121[0] = (byte)uVar4;
          auVar121[1] = 0;
          auVar121[0xf] = 0;
          auVar9._8_6_ = 0;
          auVar9._0_8_ = uVar3;
          auVar9[0xe] = (char)(uVar3 >> 0x38);
          auVar17._8_4_ = 0;
          auVar17._0_8_ = uVar3;
          auVar17[0xc] = (char)(uVar3 >> 0x30);
          auVar17._13_2_ = auVar9._13_2_;
          auVar25._8_4_ = 0;
          auVar25._0_8_ = uVar3;
          auVar25._12_3_ = auVar17._12_3_;
          auVar33._8_2_ = 0;
          auVar33._0_8_ = uVar3;
          auVar33[10] = (char)(uVar3 >> 0x28);
          auVar33._11_4_ = auVar25._11_4_;
          auVar41._8_2_ = 0;
          auVar41._0_8_ = uVar3;
          auVar41._10_5_ = auVar33._10_5_;
          auVar49[8] = (char)(uVar3 >> 0x20);
          auVar49._0_8_ = uVar3;
          auVar49._9_6_ = auVar41._9_6_;
          auVar87._7_8_ = 0;
          auVar87._0_7_ = auVar49._8_7_;
          auVar96._1_8_ = SUB158(auVar87 << 0x40,7);
          auVar96[0] = (char)(uVar3 >> 0x18);
          auVar96._9_6_ = 0;
          auVar97._1_10_ = SUB1510(auVar96 << 0x30,5);
          auVar97[0] = (char)(uVar3 >> 0x10);
          auVar97._11_4_ = 0;
          auVar123._3_12_ = SUB1512(auVar97 << 0x20,3);
          auVar123[2] = (char)(uVar3 >> 8);
          auVar123[0] = (byte)uVar3;
          auVar123[1] = 0;
          auVar123[0xf] = 0;
          auVar10._8_6_ = 0;
          auVar10._0_8_ = uVar5;
          auVar10[0xe] = (char)(uVar5 >> 0x38);
          auVar18._8_4_ = 0;
          auVar18._0_8_ = uVar5;
          auVar18[0xc] = (char)(uVar5 >> 0x30);
          auVar18._13_2_ = auVar10._13_2_;
          auVar26._8_4_ = 0;
          auVar26._0_8_ = uVar5;
          auVar26._12_3_ = auVar18._12_3_;
          auVar34._8_2_ = 0;
          auVar34._0_8_ = uVar5;
          auVar34[10] = (char)(uVar5 >> 0x28);
          auVar34._11_4_ = auVar26._11_4_;
          auVar42._8_2_ = 0;
          auVar42._0_8_ = uVar5;
          auVar42._10_5_ = auVar34._10_5_;
          auVar50[8] = (char)(uVar5 >> 0x20);
          auVar50._0_8_ = uVar5;
          auVar50._9_6_ = auVar42._9_6_;
          auVar88._7_8_ = 0;
          auVar88._0_7_ = auVar50._8_7_;
          auVar98._1_8_ = SUB158(auVar88 << 0x40,7);
          auVar98[0] = (char)(uVar5 >> 0x18);
          auVar98._9_6_ = 0;
          auVar99._1_10_ = SUB1510(auVar98 << 0x30,5);
          auVar99[0] = (char)(uVar5 >> 0x10);
          auVar99._11_4_ = 0;
          auVar122._3_12_ = SUB1512(auVar99 << 0x20,3);
          auVar122[2] = (char)(uVar5 >> 8);
          auVar122[0] = (byte)uVar5;
          auVar122[1] = 0;
          auVar122[0xf] = 0;
          auVar119 = psllw(auVar123,auVar126);
          auVar123 = psllw(auVar122,auVar126);
          uVar3 = *puVar117;
          auVar11._8_6_ = 0;
          auVar11._0_8_ = uVar3;
          auVar11[0xe] = (char)(uVar3 >> 0x38);
          auVar19._8_4_ = 0;
          auVar19._0_8_ = uVar3;
          auVar19[0xc] = (char)(uVar3 >> 0x30);
          auVar19._13_2_ = auVar11._13_2_;
          auVar27._8_4_ = 0;
          auVar27._0_8_ = uVar3;
          auVar27._12_3_ = auVar19._12_3_;
          auVar35._8_2_ = 0;
          auVar35._0_8_ = uVar3;
          auVar35[10] = (char)(uVar3 >> 0x28);
          auVar35._11_4_ = auVar27._11_4_;
          auVar43._8_2_ = 0;
          auVar43._0_8_ = uVar3;
          auVar43._10_5_ = auVar35._10_5_;
          auVar51[8] = (char)(uVar3 >> 0x20);
          auVar51._0_8_ = uVar3;
          auVar51._9_6_ = auVar43._9_6_;
          auVar89._7_8_ = 0;
          auVar89._0_7_ = auVar51._8_7_;
          auVar100._1_8_ = SUB158(auVar89 << 0x40,7);
          auVar100[0] = (char)(uVar3 >> 0x18);
          auVar100._9_6_ = 0;
          auVar101._1_10_ = SUB1510(auVar100 << 0x30,5);
          auVar101[0] = (char)(uVar3 >> 0x10);
          auVar101._11_4_ = 0;
          auVar125._3_12_ = SUB1512(auVar101 << 0x20,3);
          auVar125[2] = (char)(uVar3 >> 8);
          auVar125[0] = (byte)uVar3;
          auVar125[1] = 0;
          auVar125[0xf] = 0;
          uVar3 = puVar117[1];
          auVar12._8_6_ = 0;
          auVar12._0_8_ = uVar3;
          auVar12[0xe] = (char)(uVar3 >> 0x38);
          auVar20._8_4_ = 0;
          auVar20._0_8_ = uVar3;
          auVar20[0xc] = (char)(uVar3 >> 0x30);
          auVar20._13_2_ = auVar12._13_2_;
          auVar28._8_4_ = 0;
          auVar28._0_8_ = uVar3;
          auVar28._12_3_ = auVar20._12_3_;
          auVar36._8_2_ = 0;
          auVar36._0_8_ = uVar3;
          auVar36[10] = (char)(uVar3 >> 0x28);
          auVar36._11_4_ = auVar28._11_4_;
          auVar44._8_2_ = 0;
          auVar44._0_8_ = uVar3;
          auVar44._10_5_ = auVar36._10_5_;
          auVar52[8] = (char)(uVar3 >> 0x20);
          auVar52._0_8_ = uVar3;
          auVar52._9_6_ = auVar44._9_6_;
          auVar90._7_8_ = 0;
          auVar90._0_7_ = auVar52._8_7_;
          auVar102._1_8_ = SUB158(auVar90 << 0x40,7);
          auVar102[0] = (char)(uVar3 >> 0x18);
          auVar102._9_6_ = 0;
          auVar103._1_10_ = SUB1510(auVar102 << 0x30,5);
          auVar103[0] = (char)(uVar3 >> 0x10);
          auVar103._11_4_ = 0;
          auVar118._3_12_ = SUB1512(auVar103 << 0x20,3);
          auVar118[2] = (char)(uVar3 >> 8);
          auVar118[0] = (byte)uVar3;
          auVar118[1] = 0;
          auVar118[0xf] = 0;
          pauVar115[-2] = auVar119 | auVar121;
          uVar3 = *(ulonglong *)(lVar114 + -0x18 + (longlong)puVar1);
          auVar13._8_6_ = 0;
          auVar13._0_8_ = uVar3;
          auVar13[0xe] = (char)(uVar3 >> 0x38);
          auVar21._8_4_ = 0;
          auVar21._0_8_ = uVar3;
          auVar21[0xc] = (char)(uVar3 >> 0x30);
          auVar21._13_2_ = auVar13._13_2_;
          auVar29._8_4_ = 0;
          auVar29._0_8_ = uVar3;
          auVar29._12_3_ = auVar21._12_3_;
          auVar37._8_2_ = 0;
          auVar37._0_8_ = uVar3;
          auVar37[10] = (char)(uVar3 >> 0x28);
          auVar37._11_4_ = auVar29._11_4_;
          auVar45._8_2_ = 0;
          auVar45._0_8_ = uVar3;
          auVar45._10_5_ = auVar37._10_5_;
          auVar53[8] = (char)(uVar3 >> 0x20);
          auVar53._0_8_ = uVar3;
          auVar53._9_6_ = auVar45._9_6_;
          auVar91._7_8_ = 0;
          auVar91._0_7_ = auVar53._8_7_;
          auVar104._1_8_ = SUB158(auVar91 << 0x40,7);
          auVar104[0] = (char)(uVar3 >> 0x18);
          auVar104._9_6_ = 0;
          auVar105._1_10_ = SUB1510(auVar104 << 0x30,5);
          auVar105[0] = (char)(uVar3 >> 0x10);
          auVar105._11_4_ = 0;
          auVar120._3_12_ = SUB1512(auVar105 << 0x20,3);
          auVar120[2] = (char)(uVar3 >> 8);
          auVar120[0] = (byte)uVar3;
          auVar120[1] = 0;
          auVar120[0xf] = 0;
          pauVar115[-1] = auVar123 | auVar125;
          uVar3 = *(ulonglong *)((longlong)puVar117 + lVar114 + 0x10);
          auVar14._8_6_ = 0;
          auVar14._0_8_ = uVar3;
          auVar14[0xe] = (char)(uVar3 >> 0x38);
          auVar22._8_4_ = 0;
          auVar22._0_8_ = uVar3;
          auVar22[0xc] = (char)(uVar3 >> 0x30);
          auVar22._13_2_ = auVar14._13_2_;
          auVar30._8_4_ = 0;
          auVar30._0_8_ = uVar3;
          auVar30._12_3_ = auVar22._12_3_;
          auVar38._8_2_ = 0;
          auVar38._0_8_ = uVar3;
          auVar38[10] = (char)(uVar3 >> 0x28);
          auVar38._11_4_ = auVar30._11_4_;
          auVar46._8_2_ = 0;
          auVar46._0_8_ = uVar3;
          auVar46._10_5_ = auVar38._10_5_;
          auVar54[8] = (char)(uVar3 >> 0x20);
          auVar54._0_8_ = uVar3;
          auVar54._9_6_ = auVar46._9_6_;
          auVar92._7_8_ = 0;
          auVar92._0_7_ = auVar54._8_7_;
          auVar106._1_8_ = SUB158(auVar92 << 0x40,7);
          auVar106[0] = (char)(uVar3 >> 0x18);
          auVar106._9_6_ = 0;
          auVar107._1_10_ = SUB1510(auVar106 << 0x30,5);
          auVar107[0] = (char)(uVar3 >> 0x10);
          auVar107._11_4_ = 0;
          auVar124._3_12_ = SUB1512(auVar107 << 0x20,3);
          auVar124[2] = (char)(uVar3 >> 8);
          auVar124[0] = (byte)uVar3;
          auVar124[1] = 0;
          auVar124[0xf] = 0;
          auVar121 = psllw(auVar120,auVar126);
          auVar125 = psllw(auVar124,auVar126);
          uVar3 = puVar117[2];
          auVar15._8_6_ = 0;
          auVar15._0_8_ = uVar3;
          auVar15[0xe] = (char)(uVar3 >> 0x38);
          auVar23._8_4_ = 0;
          auVar23._0_8_ = uVar3;
          auVar23[0xc] = (char)(uVar3 >> 0x30);
          auVar23._13_2_ = auVar15._13_2_;
          auVar31._8_4_ = 0;
          auVar31._0_8_ = uVar3;
          auVar31._12_3_ = auVar23._12_3_;
          auVar39._8_2_ = 0;
          auVar39._0_8_ = uVar3;
          auVar39[10] = (char)(uVar3 >> 0x28);
          auVar39._11_4_ = auVar31._11_4_;
          auVar47._8_2_ = 0;
          auVar47._0_8_ = uVar3;
          auVar47._10_5_ = auVar39._10_5_;
          auVar55[8] = (char)(uVar3 >> 0x20);
          auVar55._0_8_ = uVar3;
          auVar55._9_6_ = auVar47._9_6_;
          auVar93._7_8_ = 0;
          auVar93._0_7_ = auVar55._8_7_;
          auVar108._1_8_ = SUB158(auVar93 << 0x40,7);
          auVar108[0] = (char)(uVar3 >> 0x18);
          auVar108._9_6_ = 0;
          auVar109._1_10_ = SUB1510(auVar108 << 0x30,5);
          auVar109[0] = (char)(uVar3 >> 0x10);
          auVar109._11_4_ = 0;
          auVar119._3_12_ = SUB1512(auVar109 << 0x20,3);
          auVar119[2] = (char)(uVar3 >> 8);
          auVar119[0] = (byte)uVar3;
          auVar119[1] = 0;
          auVar119[0xf] = 0;
          *pauVar115 = auVar121 | auVar118;
          pauVar115[1] = auVar125 | auVar119;
          pauVar115 = pauVar115 + 4;
          puVar117 = puVar1;
        } while ((longlong)puVar1 + (-8 - (longlong)param_3) < (longlong)(int)(iVar7 - uVar112));
        if (iVar7 <= iVar113) {
          return;
        }
      }
    }
    lVar114 = (longlong)(iVar7 - iVar113);
    puVar111 = param_3 + iVar113;
    puVar116 = param_1 + iVar113;
    do {
      puVar2 = puVar111 + ((longlong)param_4 - (longlong)param_3);
      uVar6 = *puVar111;
      puVar111 = puVar111 + 1;
      *puVar116 = CONCAT11(*puVar2,uVar6);
      lVar114 = lVar114 + -1;
      puVar116 = puVar116 + 1;
    } while (lVar114 != 0);
  }
  return;
}

// simd_mul_s32_sub_u8 @ 14f3baea0

void __cdecl oo2::simd_mul_s32_sub_u8(int *param_1,long64 param_2,int param_3,uchar *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auVar10 [14];
  undefined1 auVar11 [12];
  unkbyte10 Var12;
  undefined1 auVar13 [12];
  ulonglong uVar14;
  undefined1 (*pauVar15) [16];
  longlong lVar16;
  uint *puVar17;
  uint uVar18;
  longlong lVar19;
  undefined1 in_XMM1 [16];
  undefined1 auVar20 [16];
  undefined1 auVar22 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  int iVar28;
  undefined1 auVar30 [16];
  undefined2 uVar39;
  undefined1 auVar44 [12];
  undefined1 auVar48 [16];
  undefined1 unaff_XMM11_Ba;
  undefined1 unaff_XMM11_Bb;
  undefined1 unaff_XMM11_Bc;
  undefined1 unaff_XMM11_Bd;
  undefined1 unaff_XMM11_Be;
  undefined1 unaff_XMM11_Bf;
  undefined1 unaff_XMM11_Bg;
  undefined1 unaff_XMM11_Bh;
  undefined1 unaff_XMM11_Bi;
  undefined1 unaff_XMM11_Bj;
  undefined1 unaff_XMM11_Bk;
  undefined1 unaff_XMM11_Bl;
  undefined1 unaff_XMM11_Bm;
  undefined1 unaff_XMM11_Bn;
  undefined1 unaff_XMM11_Bo;
  undefined1 unaff_XMM11_Bp;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar21 [16];
  undefined1 auVar25 [16];
  undefined1 auVar31 [16];
  undefined1 auVar29 [12];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar38 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined4 uVar40;
  undefined6 uVar41;
  undefined8 uVar42;
  undefined1 auVar43 [12];
  undefined1 auVar45 [14];
  undefined1 auVar47 [16];
  undefined1 auVar46 [16];
  
  lVar19 = 0;
  auVar48._4_4_ = param_3;
  auVar48._0_4_ = param_3;
  auVar48._8_4_ = param_3;
  auVar48._12_4_ = param_3;
  if (((byte)g_rrCPUx86_feature_flags & 8) != 0) {
    simd_mul_s32_sub_u8_sse4(param_1,param_2,param_3,param_4);
    return;
  }
  if (0xf < param_2) {
    lVar16 = 0x10;
    uVar18 = CONCAT13(unaff_XMM11_Bd,
                      CONCAT12(unaff_XMM11_Bc,CONCAT11(unaff_XMM11_Bb,unaff_XMM11_Ba))) ^
             CONCAT13(unaff_XMM11_Bd,
                      CONCAT12(unaff_XMM11_Bc,CONCAT11(unaff_XMM11_Bb,unaff_XMM11_Ba)));
    uVar7 = CONCAT13(unaff_XMM11_Bh,CONCAT12(unaff_XMM11_Bg,CONCAT11(unaff_XMM11_Bf,unaff_XMM11_Be))
                    ) ^
            CONCAT13(unaff_XMM11_Bh,CONCAT12(unaff_XMM11_Bg,CONCAT11(unaff_XMM11_Bf,unaff_XMM11_Be))
                    );
    uVar8 = CONCAT13(unaff_XMM11_Bl,CONCAT12(unaff_XMM11_Bk,CONCAT11(unaff_XMM11_Bj,unaff_XMM11_Bi))
                    ) ^
            CONCAT13(unaff_XMM11_Bl,CONCAT12(unaff_XMM11_Bk,CONCAT11(unaff_XMM11_Bj,unaff_XMM11_Bi))
                    );
    uVar9 = CONCAT13(unaff_XMM11_Bp,CONCAT12(unaff_XMM11_Bo,CONCAT11(unaff_XMM11_Bn,unaff_XMM11_Bm))
                    ) ^
            CONCAT13(unaff_XMM11_Bp,CONCAT12(unaff_XMM11_Bo,CONCAT11(unaff_XMM11_Bn,unaff_XMM11_Bm))
                    );
    pauVar15 = (undefined1 (*) [16])(param_1 + 8);
    do {
      auVar26 = *(undefined1 (*) [16])(param_4 + lVar16 + -0x10);
      lVar19 = lVar19 + 0x10;
      lVar16 = lVar16 + 0x10;
      auVar27 = pauVar15[-2];
      auVar22 = pauVar15[-1];
      auVar1 = *pauVar15;
      auVar2 = pauVar15[1];
      auVar37._0_14_ = auVar26._0_14_;
      auVar37[0xe] = auVar26[7];
      auVar37[0xf] = (char)(uVar7 >> 0x18);
      auVar36._14_2_ = auVar37._14_2_;
      auVar36._0_13_ = auVar26._0_13_;
      auVar36[0xd] = (char)(uVar7 >> 0x10);
      auVar35._13_3_ = auVar36._13_3_;
      auVar35._0_12_ = auVar26._0_12_;
      auVar35[0xc] = auVar26[6];
      auVar34._12_4_ = auVar35._12_4_;
      auVar34._0_11_ = auVar26._0_11_;
      auVar34[0xb] = (char)(uVar7 >> 8);
      auVar33._11_5_ = auVar34._11_5_;
      auVar33._0_10_ = auVar26._0_10_;
      auVar33[10] = auVar26[5];
      auVar32._10_6_ = auVar33._10_6_;
      auVar32._0_9_ = auVar26._0_9_;
      auVar32[9] = (char)uVar7;
      auVar31._9_7_ = auVar32._9_7_;
      auVar31._0_8_ = auVar26._0_8_;
      auVar31[8] = auVar26[4];
      Var12 = CONCAT91(CONCAT81(auVar31._8_8_,(char)(uVar18 >> 0x18)),auVar26[3]);
      auVar11._2_10_ = Var12;
      auVar11[1] = (char)(uVar18 >> 0x10);
      auVar11[0] = auVar26[2];
      auVar10._2_12_ = auVar11;
      auVar10[1] = (char)(uVar18 >> 8);
      auVar10[0] = auVar26[1];
      auVar30._0_2_ = CONCAT11((char)uVar18,auVar26[0]);
      auVar30._2_14_ = auVar10;
      uVar39 = CONCAT11((char)uVar8,auVar26[8]);
      uVar40 = CONCAT13((char)(uVar8 >> 8),CONCAT12(auVar26[9],uVar39));
      uVar41 = CONCAT15((char)(uVar8 >> 0x10),CONCAT14(auVar26[10],uVar40));
      uVar42 = CONCAT17((char)(uVar8 >> 0x18),CONCAT16(auVar26[0xb],uVar41));
      auVar43._0_10_ = CONCAT19((char)uVar9,CONCAT18(auVar26[0xc],uVar42));
      auVar43[10] = auVar26[0xd];
      auVar43[0xb] = (char)(uVar9 >> 8);
      auVar45[0xc] = auVar26[0xe];
      auVar45._0_12_ = auVar43;
      auVar45[0xd] = (char)(uVar9 >> 0x10);
      auVar46[0xe] = auVar26[0xf];
      auVar46._0_14_ = auVar45;
      auVar46[0xf] = (char)(uVar9 >> 0x18);
      uVar4 = (undefined2)(uVar7 >> 0x10);
      auVar21._0_12_ = auVar30._0_12_;
      auVar21._12_2_ = (short)Var12;
      auVar21._14_2_ = uVar4;
      auVar20._12_4_ = auVar21._12_4_;
      auVar20._0_10_ = auVar30._0_10_;
      auVar20._10_2_ = (short)uVar7;
      auVar26._10_6_ = auVar20._10_6_;
      auVar26._0_8_ = auVar30._0_8_;
      auVar26._8_2_ = auVar11._0_2_;
      uVar3 = (undefined2)(uVar18 >> 0x10);
      auVar13._4_8_ = auVar26._8_8_;
      auVar13._2_2_ = uVar3;
      auVar13._0_2_ = auVar10._0_2_;
      iVar28 = CONCAT22((short)uVar8,auVar31._8_2_);
      uVar5 = (undefined2)(uVar8 >> 0x10);
      auVar29._0_8_ = CONCAT26(uVar5,CONCAT24(auVar33._10_2_,iVar28));
      auVar29._8_2_ = auVar35._12_2_;
      auVar29._10_2_ = (short)uVar9;
      auVar38._12_2_ = auVar36._14_2_;
      auVar38._0_12_ = auVar29;
      uVar6 = (undefined2)(uVar9 >> 0x10);
      auVar38._14_2_ = uVar6;
      *(int *)pauVar15[-2] = auVar27._0_4_ * param_3 - CONCAT22((short)uVar18,auVar30._0_2_);
      *(int *)(pauVar15[-2] + 4) = auVar27._4_4_ * param_3 - auVar13._0_4_;
      *(int *)(pauVar15[-2] + 8) =
           (int)((auVar27._8_8_ & 0xffffffff) * (ulonglong)(uint)param_3) - auVar26._8_4_;
      *(int *)(pauVar15[-2] + 0xc) = auVar27._12_4_ * param_3 - auVar20._12_4_;
      *(int *)pauVar15[-1] = auVar22._0_4_ * param_3 - iVar28;
      *(int *)(pauVar15[-1] + 4) = auVar22._4_4_ * param_3 - (int)((ulonglong)auVar29._0_8_ >> 0x20)
      ;
      *(int *)(pauVar15[-1] + 8) =
           (int)((auVar22._8_8_ & 0xffffffff) * (ulonglong)(uint)param_3) - auVar29._8_4_;
      *(int *)(pauVar15[-1] + 0xc) = auVar22._12_4_ * param_3 - auVar38._12_4_;
      auVar25._12_2_ = (short)((ulonglong)uVar42 >> 0x30);
      auVar25._0_12_ = auVar43;
      auVar25._14_2_ = uVar4;
      auVar24._12_4_ = auVar25._12_4_;
      auVar24._10_2_ = (short)uVar7;
      auVar24._0_10_ = auVar43._0_10_;
      auVar23._10_6_ = auVar24._10_6_;
      auVar23._8_2_ = (short)((uint6)uVar41 >> 0x20);
      auVar23._0_8_ = uVar42;
      auVar22._8_8_ = auVar23._8_8_;
      auVar22._6_2_ = uVar3;
      auVar22._0_6_ = uVar41;
      auVar27._6_10_ = auVar22._6_10_;
      auVar27._4_2_ = (short)((uint)uVar40 >> 0x10);
      auVar27._0_4_ = uVar40;
      iVar28 = CONCAT22((short)uVar8,(short)((unkuint10)auVar43._0_10_ >> 0x40));
      auVar44._0_8_ = CONCAT26(uVar5,CONCAT24(auVar43._10_2_,iVar28));
      auVar44._8_2_ = auVar45._12_2_;
      auVar44._10_2_ = (short)uVar9;
      auVar47._12_2_ = auVar46._14_2_;
      auVar47._0_12_ = auVar44;
      auVar47._14_2_ = uVar6;
      *(int *)*pauVar15 = auVar1._0_4_ * param_3 - CONCAT22((short)uVar18,uVar39);
      *(int *)(*pauVar15 + 4) = auVar1._4_4_ * param_3 - auVar27._4_4_;
      *(int *)(*pauVar15 + 8) =
           (int)((auVar1._8_8_ & 0xffffffff) * (ulonglong)(uint)param_3) - auVar23._8_4_;
      *(int *)(*pauVar15 + 0xc) = auVar1._12_4_ * param_3 - auVar24._12_4_;
      in_XMM1._0_4_ = auVar2._0_4_ * param_3 - iVar28;
      in_XMM1._4_4_ = auVar2._4_4_ * param_3 - (int)((ulonglong)auVar44._0_8_ >> 0x20);
      in_XMM1._8_4_ = (int)((auVar2._8_8_ & 0xffffffff) * (ulonglong)(uint)param_3) - auVar44._8_4_;
      in_XMM1._12_4_ = auVar2._12_4_ * param_3 - auVar47._12_4_;
      pauVar15[1] = in_XMM1;
      pauVar15 = pauVar15 + 4;
    } while (lVar16 <= param_2);
  }
  uVar14 = param_2 - lVar19;
  if (lVar19 < param_2) {
    if ((0xf < uVar14) && (1 < __isa_available)) {
      if ((param_4 + param_2 + -1 < param_1 + lVar19) || (param_1 + param_2 + -1 < param_4 + lVar19)
         ) {
        uVar18 = (uint)((longlong)uVar14 >> 0x3f) & 0xf;
        pauVar15 = (undefined1 (*) [16])(param_1 + lVar19 + 8);
        puVar17 = (uint *)((longlong)(param_4 + lVar19) + 8);
        do {
          lVar19 = lVar19 + 0x10;
          auVar27 = pmulld(pauVar15[-2],auVar48);
          auVar26 = pmovzxbd(in_XMM1,ZEXT416(puVar17[-2]));
          uVar7 = puVar17[-1];
          *(int *)pauVar15[-2] = auVar27._0_4_ - auVar26._0_4_;
          *(int *)(pauVar15[-2] + 4) = auVar27._4_4_ - auVar26._4_4_;
          *(int *)(pauVar15[-2] + 8) = auVar27._8_4_ - auVar26._8_4_;
          *(int *)(pauVar15[-2] + 0xc) = auVar27._12_4_ - auVar26._12_4_;
          auVar26 = pmovzxbd(auVar26,ZEXT416(uVar7));
          uVar7 = *puVar17;
          auVar27 = pmulld(pauVar15[-1],auVar48);
          *(int *)pauVar15[-1] = auVar27._0_4_ - auVar26._0_4_;
          *(int *)(pauVar15[-1] + 4) = auVar27._4_4_ - auVar26._4_4_;
          *(int *)(pauVar15[-1] + 8) = auVar27._8_4_ - auVar26._8_4_;
          *(int *)(pauVar15[-1] + 0xc) = auVar27._12_4_ - auVar26._12_4_;
          auVar26 = pmovzxbd(auVar26,ZEXT416(uVar7));
          uVar7 = puVar17[1];
          auVar27 = pmulld(*pauVar15,auVar48);
          *(int *)*pauVar15 = auVar27._0_4_ - auVar26._0_4_;
          *(int *)(*pauVar15 + 4) = auVar27._4_4_ - auVar26._4_4_;
          *(int *)(*pauVar15 + 8) = auVar27._8_4_ - auVar26._8_4_;
          *(int *)(*pauVar15 + 0xc) = auVar27._12_4_ - auVar26._12_4_;
          in_XMM1 = pmovzxbd(auVar26,ZEXT416(uVar7));
          auVar26 = pmulld(pauVar15[1],auVar48);
          *(int *)pauVar15[1] = auVar26._0_4_ - in_XMM1._0_4_;
          *(int *)(pauVar15[1] + 4) = auVar26._4_4_ - in_XMM1._4_4_;
          *(int *)(pauVar15[1] + 8) = auVar26._8_4_ - in_XMM1._8_4_;
          *(int *)(pauVar15[1] + 0xc) = auVar26._12_4_ - in_XMM1._12_4_;
          pauVar15 = pauVar15 + 4;
          puVar17 = puVar17 + 4;
        } while (lVar19 < (longlong)
                          (param_2 - ((ulonglong)((int)uVar14 + uVar18 & 0xf) - (ulonglong)uVar18)))
        ;
        if (param_2 <= lVar19) {
          return;
        }
      }
    }
    do {
      param_1[lVar19] = param_3 * param_1[lVar19] - (uint)param_4[lVar19];
      lVar19 = lVar19 + 1;
    } while (lVar19 < param_2);
  }
  return;
}

// simd_sub_u32_256 @ 14f3bb1c0

void __cdecl oo2::simd_sub_u32_256(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  lVar7 = 0x10;
  do {
    uVar1 = param_3[1];
    uVar2 = param_3[2];
    uVar3 = param_3[3];
    uVar4 = param_2[1];
    uVar5 = param_2[2];
    uVar6 = param_2[3];
    *param_1 = *param_2 - *param_3;
    param_1[1] = uVar4 - uVar1;
    param_1[2] = uVar5 - uVar2;
    param_1[3] = uVar6 - uVar3;
    uVar1 = param_3[5];
    uVar2 = param_3[6];
    uVar3 = param_3[7];
    uVar4 = param_2[5];
    uVar5 = param_2[6];
    uVar6 = param_2[7];
    param_1[4] = param_2[4] - param_3[4];
    param_1[5] = uVar4 - uVar1;
    param_1[6] = uVar5 - uVar2;
    param_1[7] = uVar6 - uVar3;
    uVar1 = param_3[9];
    uVar2 = param_3[10];
    uVar3 = param_3[0xb];
    uVar4 = param_2[9];
    uVar5 = param_2[10];
    uVar6 = param_2[0xb];
    param_1[8] = param_2[8] - param_3[8];
    param_1[9] = uVar4 - uVar1;
    param_1[10] = uVar5 - uVar2;
    param_1[0xb] = uVar6 - uVar3;
    uVar1 = param_2[0xd];
    uVar2 = param_2[0xe];
    uVar3 = param_2[0xf];
    uVar4 = param_3[0xd];
    uVar5 = param_3[0xe];
    uVar6 = param_3[0xf];
    param_1[0xc] = param_2[0xc] - param_3[0xc];
    param_1[0xd] = uVar1 - uVar4;
    param_1[0xe] = uVar2 - uVar5;
    param_1[0xf] = uVar3 - uVar6;
    lVar7 = lVar7 + -1;
    param_1 = param_1 + 0x10;
    param_2 = param_2 + 0x10;
    param_3 = param_3 + 0x10;
  } while (lVar7 != 0);
  return;
}

