// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 26

// ApplySphericalConstraintsWithMap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_CunfCunfCuniCuni_avx2 @ 14031b1f0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplySphericalConstraintsWithMap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_CunfCunfCuniCuni_avx2
               (longlong param_1,longlong param_2,longlong param_3,float param_4,float param_5,
               int param_6,uint param_7)

{
  float *pfVar1;
  undefined1 (*pauVar2) [32];
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 (*pauVar17) [32];
  int iVar18;
  longlong lVar19;
  uint uVar20;
  float fVar21;
  float fVar25;
  float fVar26;
  undefined1 auVar22 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  float fVar31;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  float fVar41;
  undefined1 auVar34 [32];
  undefined1 auVar42 [16];
  undefined1 auVar43 [32];
  float fVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  float fVar51;
  undefined1 auVar50 [16];
  undefined1 auVar49 [32];
  undefined1 auVar52 [16];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar58 [16];
  undefined1 auVar57 [32];
  undefined1 auVar59 [16];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [16];
  undefined1 auVar48 [32];
  undefined1 auVar56 [32];
  undefined1 auVar60 [32];
  undefined1 auVar69 [32];
  
  uVar14 = param_7 + 7;
  if (-1 < (int)param_7) {
    uVar14 = param_7;
  }
  if ((int)(uVar14 & 0xfffffff8) < 1) {
    uVar15 = 0;
    if ((int)param_7 < 1) {
      return;
    }
  }
  else {
    lVar19 = (longlong)param_6 * 0x10 + param_1;
    pauVar17 = (undefined1 (*) [32])(param_2 + (longlong)param_6 * 0xc + 0x40);
    uVar16 = 0;
    uVar15 = 0;
    do {
      auVar23 = *(undefined1 (*) [32])(lVar19 + uVar16 * 4);
      auVar46 = *(undefined1 (*) [32])(lVar19 + 0x20 + uVar16 * 4);
      auVar34 = *(undefined1 (*) [32])(lVar19 + 0x40 + uVar16 * 4);
      auVar67 = *(undefined1 (*) [32])(lVar19 + 0x60 + uVar16 * 4);
      auVar69 = vperm2f128_avx(auVar23,auVar34,0x20);
      auVar32 = vperm2f128_avx(auVar23,auVar34,0x31);
      auVar33 = vperm2f128_avx(auVar46,auVar67,0x20);
      auVar53 = vperm2f128_avx(auVar46,auVar67,0x31);
      auVar62 = vunpckhps_avx(auVar69,auVar32);
      auVar60 = vunpckhps_avx(auVar33,auVar53);
      auVar55 = vunpckhpd_avx(auVar62,auVar60);
      auVar43 = vcmpps_avx(auVar55,
                           ___ymm_0000000000000000000000000000000000000000000000000000000000000000,4
                          );
      if ((((((((SUB321(auVar43 >> 0x1f,0) & 1) != 0 || (SUB321(auVar43 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar43 >> 0x5f,0) & 1) != 0) || SUB321(auVar43 >> 0x7f,0) != '\0') ||
            (SUB321(auVar43 >> 0x9f,0) & 1) != 0) || SUB321(auVar43 >> 0xbf,0) != '\0') ||
          (SUB321(auVar43 >> 0xdf,0) & 1) != 0) || auVar43[0x1f] < '\0') {
        auVar54 = vunpcklpd_avx(auVar62,auVar60);
        auVar62 = vunpcklps_avx(auVar69,auVar32);
        auVar60 = vunpcklps_avx(auVar33,auVar53);
        auVar33 = vunpckhpd_avx(auVar62,auVar60);
        auVar32 = vunpcklpd_avx(auVar62,auVar60);
        auVar62 = pauVar17[-1];
        auVar60 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                               ,auVar62);
        auVar69 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,pauVar17[-2]);
        auVar60 = vblendps_avx(auVar69,auVar60,0x88);
        auVar69 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                               ,auVar62);
        auVar53 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,*pauVar17);
        auVar69 = vblendps_avx(auVar53,auVar69,0x13);
        auVar63._16_16_ = auVar69._0_16_;
        auVar63._0_16_ = auVar60._0_16_;
        auVar47 = vperm2f128_avx(auVar60,auVar69,0x31);
        auVar62 = vblendps_avx(auVar62,pauVar17[-2],0x24);
        auVar62 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar62);
        auVar53._16_16_ = ___xmm_00000007000000040000000100000000;
        auVar53._0_16_ = ___xmm_00000007000000040000000100000000;
        auVar53 = vpermps_avx2(auVar53,*pauVar17);
        auVar62 = vblendps_avx(auVar62,auVar53,0xe0);
        auVar32 = vsubps_avx(auVar32,auVar63);
        auVar33 = vsubps_avx(auVar33,auVar47);
        auVar53 = vsubps_avx(auVar54,auVar62);
        fVar4 = auVar33._0_4_;
        fVar5 = auVar33._4_4_;
        fVar6 = auVar33._8_4_;
        fVar7 = auVar33._12_4_;
        fVar8 = auVar33._16_4_;
        fVar9 = auVar33._20_4_;
        fVar10 = auVar33._24_4_;
        fVar11 = auVar33._28_4_;
        fVar35 = auVar32._0_4_;
        fVar36 = auVar32._4_4_;
        fVar37 = auVar32._8_4_;
        fVar38 = auVar32._12_4_;
        fVar39 = auVar32._16_4_;
        fVar40 = auVar32._20_4_;
        fVar41 = auVar32._24_4_;
        fVar44 = auVar32._28_4_;
        fVar25 = auVar53._0_4_;
        auVar66._0_4_ = fVar25 * fVar25 + fVar35 * fVar35 + fVar4 * fVar4;
        fVar26 = auVar53._4_4_;
        auVar66._4_4_ = fVar26 * fVar26 + fVar36 * fVar36 + fVar5 * fVar5;
        fVar27 = auVar53._8_4_;
        auVar66._8_4_ = fVar27 * fVar27 + fVar37 * fVar37 + fVar6 * fVar6;
        fVar28 = auVar53._12_4_;
        auVar66._12_4_ = fVar28 * fVar28 + fVar38 * fVar38 + fVar7 * fVar7;
        fVar29 = auVar53._16_4_;
        auVar66._16_4_ = fVar29 * fVar29 + fVar39 * fVar39 + fVar8 * fVar8;
        fVar30 = auVar53._20_4_;
        auVar66._20_4_ = fVar30 * fVar30 + fVar40 * fVar40 + fVar9 * fVar9;
        fVar31 = auVar53._24_4_;
        auVar66._24_4_ = fVar31 * fVar31 + fVar41 * fVar41 + fVar10 * fVar10;
        fVar51 = auVar53._28_4_;
        auVar66._28_4_ = fVar51 * fVar51 + fVar44 * fVar44 + fVar11 * fVar11;
        pfVar1 = (float *)(param_3 + (uVar16 & 0xffffffff));
        auVar54._0_4_ = param_5 * *pfVar1 + param_4;
        auVar54._4_4_ = param_5 * pfVar1[1] + param_4;
        auVar54._8_4_ = param_5 * pfVar1[2] + param_4;
        auVar54._12_4_ = param_5 * pfVar1[3] + param_4;
        auVar54._16_4_ = param_5 * pfVar1[4] + param_4;
        auVar54._20_4_ = param_5 * pfVar1[5] + param_4;
        auVar54._24_4_ = param_5 * pfVar1[6] + param_4;
        auVar54._28_4_ = param_5 * pfVar1[7] + param_4;
        auVar32._0_4_ = auVar54._0_4_ * auVar54._0_4_ + __real_322bcc77;
        auVar32._4_4_ = auVar54._4_4_ * auVar54._4_4_ + __real_322bcc77;
        auVar32._8_4_ = auVar54._8_4_ * auVar54._8_4_ + __real_322bcc77;
        auVar32._12_4_ = auVar54._12_4_ * auVar54._12_4_ + __real_322bcc77;
        auVar32._16_4_ = auVar54._16_4_ * auVar54._16_4_ + __real_322bcc77;
        auVar32._20_4_ = auVar54._20_4_ * auVar54._20_4_ + __real_322bcc77;
        auVar32._24_4_ = auVar54._24_4_ * auVar54._24_4_ + __real_322bcc77;
        auVar32._28_4_ = auVar54._28_4_ * auVar54._28_4_ + __real_322bcc77;
        auVar32 = vcmpps_avx(auVar32,auVar66,1);
        auVar33._0_4_ = auVar32._0_4_ & auVar43._0_4_;
        auVar33._4_4_ = auVar32._4_4_ & auVar43._4_4_;
        auVar33._8_4_ = auVar32._8_4_ & auVar43._8_4_;
        auVar33._12_4_ = auVar32._12_4_ & auVar43._12_4_;
        auVar33._16_4_ = auVar32._16_4_ & auVar43._16_4_;
        auVar33._20_4_ = auVar32._20_4_ & auVar43._20_4_;
        auVar33._24_4_ = auVar32._24_4_ & auVar43._24_4_;
        auVar33._28_4_ = auVar32._28_4_ & auVar43._28_4_;
        uVar20 = vmovmskps_avx(auVar33);
        if (uVar20 != 0) {
          auVar43 = vsqrtps_avx(auVar66);
          auVar43 = vdivps_avx(auVar54,auVar43);
          fVar21 = auVar43._0_4_;
          auVar59._0_4_ = fVar21 * fVar35 + auVar60._0_4_;
          fVar35 = auVar43._4_4_;
          auVar59._4_4_ = fVar35 * fVar36 + auVar60._4_4_;
          fVar36 = auVar43._8_4_;
          auVar59._8_4_ = fVar36 * fVar37 + auVar60._8_4_;
          fVar37 = auVar43._12_4_;
          auVar59._12_4_ = fVar37 * fVar38 + auVar60._12_4_;
          fVar38 = auVar43._16_4_;
          auVar60._16_4_ = fVar38 * fVar39 + auVar69._0_4_;
          auVar60._0_16_ = auVar59;
          fVar39 = auVar43._20_4_;
          auVar60._20_4_ = fVar39 * fVar40 + auVar69._4_4_;
          fVar40 = auVar43._24_4_;
          auVar60._24_4_ = fVar40 * fVar41 + auVar69._8_4_;
          fVar41 = auVar43._28_4_;
          auVar60._28_4_ = fVar41 * fVar44 + auVar69._12_4_;
          auVar22._0_4_ = fVar21 * fVar4 + auVar47._0_4_;
          auVar22._4_4_ = fVar35 * fVar5 + auVar47._4_4_;
          auVar22._8_4_ = fVar36 * fVar6 + auVar47._8_4_;
          auVar22._12_4_ = fVar37 * fVar7 + auVar47._12_4_;
          auVar43._16_4_ = fVar38 * fVar8 + auVar47._16_4_;
          auVar43._0_16_ = auVar22;
          auVar43._20_4_ = fVar39 * fVar9 + auVar47._20_4_;
          auVar43._24_4_ = fVar40 * fVar10 + auVar47._24_4_;
          auVar43._28_4_ = fVar41 * fVar11 + auVar47._28_4_;
          auVar68._0_4_ = fVar21 * fVar25 + auVar62._0_4_;
          auVar68._4_4_ = fVar35 * fVar26 + auVar62._4_4_;
          auVar68._8_4_ = fVar36 * fVar27 + auVar62._8_4_;
          auVar68._12_4_ = fVar37 * fVar28 + auVar62._12_4_;
          auVar69._16_4_ = fVar38 * fVar29 + auVar62._16_4_;
          auVar69._0_16_ = auVar68;
          auVar69._20_4_ = fVar39 * fVar30 + auVar62._20_4_;
          auVar69._24_4_ = fVar40 * fVar31 + auVar62._24_4_;
          auVar69._28_4_ = fVar41 * fVar51 + auVar62._28_4_;
          cVar12 = (char)uVar20;
          if (cVar12 == -1) {
            auVar23 = vunpcklps_avx(auVar60,auVar43);
            auVar46 = vunpcklps_avx(auVar69,auVar55);
            auVar67 = vunpcklpd_avx(auVar23,auVar46);
            auVar23 = vunpckhpd_avx(auVar23,auVar46);
            auVar46 = vunpckhps_avx(auVar60,auVar43);
            auVar34 = vunpckhps_avx(auVar69,auVar55);
            auVar43 = vunpcklpd_avx(auVar46,auVar34);
            auVar55._16_16_ = auVar23._0_16_;
            auVar55._0_16_ = auVar67._0_16_;
            *(undefined1 (*) [32])(lVar19 + uVar16 * 4) = auVar55;
            auVar46 = vunpckhpd_avx(auVar46,auVar34);
            auVar34._16_16_ = auVar46._0_16_;
            auVar34._0_16_ = auVar43._0_16_;
            *(undefined1 (*) [32])(lVar19 + 0x20 + uVar16 * 4) = auVar34;
            auVar23 = vperm2f128_avx(auVar67,auVar23,0x31);
            *(undefined1 (*) [32])(lVar19 + 0x40 + uVar16 * 4) = auVar23;
            auVar23 = vperm2f128_avx(auVar43,auVar46,0x31);
            *(undefined1 (*) [32])(lVar19 + 0x60 + uVar16 * 4) = auVar23;
          }
          else {
            auVar42 = auVar43._16_16_;
            auVar45 = auVar60._16_16_;
            auVar52 = auVar69._16_16_;
            if ((uVar20 & 1) != 0) {
              *(float *)(lVar19 + uVar16 * 4) = auVar59._0_4_;
            }
            if ((uVar20 & 2) != 0) {
              uVar3 = vextractps_avx(auVar59,1);
              *(undefined4 *)(lVar19 + 0x10 + uVar16 * 4) = uVar3;
            }
            if ((uVar20 & 4) != 0) {
              uVar3 = vextractps_avx(auVar59,2);
              *(undefined4 *)(lVar19 + 0x20 + uVar16 * 4) = uVar3;
            }
            if ((uVar20 & 8) != 0) {
              uVar3 = vextractps_avx(auVar59,3);
              *(undefined4 *)(lVar19 + 0x30 + uVar16 * 4) = uVar3;
            }
            if ((uVar20 & 0x10) != 0) {
              *(float *)(lVar19 + 0x40 + uVar16 * 4) = auVar60._16_4_;
            }
            if ((uVar20 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar45,1);
              *(undefined4 *)(lVar19 + 0x50 + uVar16 * 4) = uVar3;
            }
            if ((uVar20 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar45,2);
              *(undefined4 *)(lVar19 + 0x60 + uVar16 * 4) = uVar3;
            }
            if (cVar12 < '\0') {
              uVar3 = vextractps_avx(auVar45,3);
              *(undefined4 *)(lVar19 + 0x70 + uVar16 * 4) = uVar3;
            }
            if ((uVar20 & 1) != 0) {
              *(float *)(lVar19 + 4 + uVar16 * 4) = auVar22._0_4_;
            }
            if ((uVar20 & 2) != 0) {
              uVar3 = vextractps_avx(auVar22,1);
              *(undefined4 *)(lVar19 + 0x14 + uVar16 * 4) = uVar3;
            }
            if ((uVar20 & 4) != 0) {
              uVar3 = vextractps_avx(auVar22,2);
              *(undefined4 *)(lVar19 + 0x24 + uVar16 * 4) = uVar3;
            }
            if ((uVar20 & 8) != 0) {
              uVar3 = vextractps_avx(auVar22,3);
              *(undefined4 *)(lVar19 + 0x34 + uVar16 * 4) = uVar3;
            }
            if ((uVar20 & 0x10) != 0) {
              *(float *)(lVar19 + 0x44 + uVar16 * 4) = auVar43._16_4_;
            }
            if ((uVar20 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar42,1);
              *(undefined4 *)(lVar19 + 0x54 + uVar16 * 4) = uVar3;
            }
            if ((uVar20 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar42,2);
              *(undefined4 *)(lVar19 + 100 + uVar16 * 4) = uVar3;
            }
            if (cVar12 < '\0') {
              uVar3 = vextractps_avx(auVar42,3);
              *(undefined4 *)(lVar19 + 0x74 + uVar16 * 4) = uVar3;
            }
            if ((uVar20 & 1) != 0) {
              *(float *)(lVar19 + 8 + uVar16 * 4) = auVar68._0_4_;
            }
            if ((uVar20 & 2) != 0) {
              uVar3 = vextractps_avx(auVar68,1);
              *(undefined4 *)(lVar19 + 0x18 + uVar16 * 4) = uVar3;
            }
            if ((uVar20 & 4) != 0) {
              uVar3 = vextractps_avx(auVar68,2);
              *(undefined4 *)(lVar19 + 0x28 + uVar16 * 4) = uVar3;
            }
            if ((uVar20 & 8) != 0) {
              uVar3 = vextractps_avx(auVar68,3);
              *(undefined4 *)(lVar19 + 0x38 + uVar16 * 4) = uVar3;
            }
            if ((uVar20 & 0x10) != 0) {
              *(float *)(lVar19 + 0x48 + uVar16 * 4) = auVar69._16_4_;
            }
            if ((uVar20 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar52,1);
              *(undefined4 *)(lVar19 + 0x58 + uVar16 * 4) = uVar3;
            }
            if ((uVar20 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar52,2);
              *(undefined4 *)(lVar19 + 0x68 + uVar16 * 4) = uVar3;
            }
            if (cVar12 < '\0') {
              uVar3 = vextractps_avx(auVar52,3);
              *(undefined4 *)(lVar19 + 0x78 + uVar16 * 4) = uVar3;
            }
            if ((uVar20 & 1) != 0) {
              uVar3 = vextractps_avx(auVar23._0_16_,3);
              *(undefined4 *)(lVar19 + 0xc + uVar16 * 4) = uVar3;
            }
            if ((uVar20 & 2) != 0) {
              uVar3 = vextractps_avx(auVar23._16_16_,3);
              *(undefined4 *)(lVar19 + 0x1c + uVar16 * 4) = uVar3;
            }
            if ((uVar20 & 4) != 0) {
              uVar3 = vextractps_avx(auVar46._0_16_,3);
              *(undefined4 *)(lVar19 + 0x2c + uVar16 * 4) = uVar3;
            }
            if ((uVar20 & 8) != 0) {
              uVar3 = vextractps_avx(auVar46._16_16_,3);
              *(undefined4 *)(lVar19 + 0x3c + uVar16 * 4) = uVar3;
            }
            if ((uVar20 & 0x10) != 0) {
              uVar3 = vextractps_avx(auVar34._0_16_,3);
              *(undefined4 *)(lVar19 + 0x4c + uVar16 * 4) = uVar3;
            }
            if ((uVar20 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar34._16_16_,3);
              *(undefined4 *)(lVar19 + 0x5c + uVar16 * 4) = uVar3;
            }
            if ((uVar20 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar67._0_16_,3);
              *(undefined4 *)(lVar19 + 0x6c + uVar16 * 4) = uVar3;
            }
            if (cVar12 < '\0') {
              uVar3 = vextractps_avx(auVar67._16_16_,3);
              *(undefined4 *)(lVar19 + 0x7c + uVar16 * 4) = uVar3;
            }
          }
        }
      }
      uVar15 = uVar15 + 8;
      uVar16 = uVar16 + 0x20;
      pauVar17 = pauVar17 + 3;
    } while (uVar15 < (uVar14 & 0xfffffff8));
    if ((int)param_7 <= (int)uVar15) {
      return;
    }
  }
  iVar13 = (int)uVar15;
  auVar23._4_4_ = iVar13;
  auVar23._0_4_ = iVar13;
  auVar23._8_4_ = iVar13;
  auVar23._12_4_ = iVar13;
  auVar23._16_4_ = iVar13;
  auVar23._20_4_ = iVar13;
  auVar23._24_4_ = iVar13;
  auVar23._28_4_ = iVar13;
  auVar23 = vpor_avx2(auVar23,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar46._4_4_ = param_7;
  auVar46._0_4_ = param_7;
  auVar46._8_4_ = param_7;
  auVar46._12_4_ = param_7;
  auVar46._16_4_ = param_7;
  auVar46._20_4_ = param_7;
  auVar46._24_4_ = param_7;
  auVar46._28_4_ = param_7;
  auVar23 = vpcmpgtd_avx2(auVar46,auVar23);
  pauVar17 = (undefined1 (*) [32])(param_1 + (longlong)(param_6 + iVar13) * 0x10);
  iVar18 = vmovmskps_avx(auVar23);
  if (iVar18 == 0xff) {
    auVar34 = vperm2f128_avx(*pauVar17,pauVar17[2],0x20);
    auVar67 = vperm2f128_avx(*pauVar17,pauVar17[2],0x31);
    auVar43 = vperm2f128_avx(pauVar17[1],pauVar17[3],0x20);
    auVar62 = vperm2f128_avx(pauVar17[1],pauVar17[3],0x31);
    auVar46 = vunpcklps_avx(auVar34,auVar67);
    auVar34 = vunpckhps_avx(auVar34,auVar67);
    auVar55 = vunpcklps_avx(auVar43,auVar62);
    auVar67 = vunpckhps_avx(auVar43,auVar62);
    auVar43 = vunpcklpd_avx(auVar46,auVar55);
    auVar46 = vunpckhpd_avx(auVar46,auVar55);
    auVar55 = vunpcklpd_avx(auVar34,auVar67);
    auVar34 = vunpckhpd_avx(auVar34,auVar67);
  }
  else {
    auVar43 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar23);
    auVar46 = vgatherdps(ZEXT832(0),auVar23);
    auVar55 = vgatherdps(ZEXT832(0),auVar23);
    auVar34 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar23);
  }
  auVar67 = vmaskmovps_avx(auVar23,auVar43);
  auVar46 = vmaskmovps_avx(auVar23,auVar46);
  auVar43 = vmaskmovps_avx(auVar23,auVar55);
  auVar55 = vcmpps_avx(auVar34,ZEXT832(0) << 0x20,4);
  auVar55 = auVar23 & auVar55;
  if ((((((((SUB321(auVar55 >> 0x1f,0) & 1) != 0 || (SUB321(auVar55 >> 0x3f,0) & 1) != 0) ||
          (SUB321(auVar55 >> 0x5f,0) & 1) != 0) || SUB321(auVar55 >> 0x7f,0) != '\0') ||
        (SUB321(auVar55 >> 0x9f,0) & 1) != 0) || SUB321(auVar55 >> 0xbf,0) != '\0') ||
      (SUB321(auVar55 >> 0xdf,0) & 1) != 0) || auVar55[0x1f] < '\0') {
    pauVar2 = (undefined1 (*) [32])(param_2 + (longlong)(param_6 + iVar13) * 0xc);
    if ((char)iVar18 == -1) {
      auVar55 = pauVar2[1];
      auVar62 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                             ,auVar55);
      auVar60 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,*pauVar2);
      auVar62 = vblendps_avx(auVar60,auVar62,0x88);
      auVar60 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                             ,auVar55);
      auVar69 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,pauVar2[2]);
      auVar60 = vblendps_avx(auVar69,auVar60,0x13);
      auVar61._16_16_ = auVar60._0_16_;
      auVar61._0_16_ = auVar62._0_16_;
      auVar62 = vperm2f128_avx(auVar62,auVar60,0x31);
      auVar55 = vblendps_avx(auVar55,*pauVar2,0x24);
      auVar55 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar55);
      auVar47._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar47._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar60 = vpermps_avx2(auVar47,pauVar2[2]);
      auVar55 = vblendps_avx(auVar55,auVar60,0xe0);
    }
    else {
      auVar61 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar23);
      auVar62 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar23);
      auVar55 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar23);
    }
    auVar67 = vsubps_avx(auVar67,auVar61);
    auVar46 = vsubps_avx(auVar46,auVar62);
    auVar43 = vsubps_avx(auVar43,auVar55);
    fVar4 = auVar46._0_4_;
    fVar5 = auVar46._4_4_;
    fVar6 = auVar46._8_4_;
    fVar7 = auVar46._12_4_;
    fVar8 = auVar46._16_4_;
    fVar9 = auVar46._20_4_;
    fVar10 = auVar46._24_4_;
    fVar11 = auVar46._28_4_;
    fVar25 = auVar67._0_4_;
    fVar26 = auVar67._4_4_;
    fVar27 = auVar67._8_4_;
    fVar28 = auVar67._12_4_;
    fVar29 = auVar67._16_4_;
    fVar30 = auVar67._20_4_;
    fVar31 = auVar67._24_4_;
    fVar51 = auVar67._28_4_;
    fVar35 = auVar43._0_4_;
    auVar64._0_4_ = fVar35 * fVar35 + fVar25 * fVar25 + fVar4 * fVar4;
    fVar36 = auVar43._4_4_;
    auVar64._4_4_ = fVar36 * fVar36 + fVar26 * fVar26 + fVar5 * fVar5;
    fVar37 = auVar43._8_4_;
    auVar64._8_4_ = fVar37 * fVar37 + fVar27 * fVar27 + fVar6 * fVar6;
    fVar38 = auVar43._12_4_;
    auVar64._12_4_ = fVar38 * fVar38 + fVar28 * fVar28 + fVar7 * fVar7;
    fVar39 = auVar43._16_4_;
    auVar64._16_4_ = fVar39 * fVar39 + fVar29 * fVar29 + fVar8 * fVar8;
    fVar40 = auVar43._20_4_;
    auVar64._20_4_ = fVar40 * fVar40 + fVar30 * fVar30 + fVar9 * fVar9;
    fVar41 = auVar43._24_4_;
    auVar64._24_4_ = fVar41 * fVar41 + fVar31 * fVar31 + fVar10 * fVar10;
    fVar44 = auVar43._28_4_;
    auVar64._28_4_ = fVar44 * fVar44 + fVar51 * fVar51 + fVar11 * fVar11;
    auVar46 = vmaskmovps_avx(auVar23,*(undefined1 (*) [32])(param_3 + (iVar13 << 2)));
    auVar65._0_4_ = param_5 * auVar46._0_4_ + param_4;
    auVar65._4_4_ = param_5 * auVar46._4_4_ + param_4;
    auVar65._8_4_ = param_5 * auVar46._8_4_ + param_4;
    auVar65._12_4_ = param_5 * auVar46._12_4_ + param_4;
    auVar65._16_4_ = param_5 * auVar46._16_4_ + param_4;
    auVar65._20_4_ = param_5 * auVar46._20_4_ + param_4;
    auVar65._24_4_ = param_5 * auVar46._24_4_ + param_4;
    auVar65._28_4_ = param_5 * auVar46._28_4_ + param_4;
    auVar67._0_4_ = auVar65._0_4_ * auVar65._0_4_ + __real_322bcc77;
    auVar67._4_4_ = auVar65._4_4_ * auVar65._4_4_ + __real_322bcc77;
    auVar67._8_4_ = auVar65._8_4_ * auVar65._8_4_ + __real_322bcc77;
    auVar67._12_4_ = auVar65._12_4_ * auVar65._12_4_ + __real_322bcc77;
    auVar67._16_4_ = auVar65._16_4_ * auVar65._16_4_ + __real_322bcc77;
    auVar67._20_4_ = auVar65._20_4_ * auVar65._20_4_ + __real_322bcc77;
    auVar67._24_4_ = auVar65._24_4_ * auVar65._24_4_ + __real_322bcc77;
    auVar67._28_4_ = auVar65._28_4_ * auVar65._28_4_ + __real_322bcc77;
    auVar46 = vcmpps_avx(auVar67,auVar64,1);
    auVar67 = vcmpps_avx(ZEXT1232(ZEXT812(0)),auVar34,4);
    auVar24._0_4_ = auVar46._0_4_ & auVar67._0_4_ & auVar23._0_4_;
    auVar24._4_4_ = auVar46._4_4_ & auVar67._4_4_ & auVar23._4_4_;
    auVar24._8_4_ = auVar46._8_4_ & auVar67._8_4_ & auVar23._8_4_;
    auVar24._12_4_ = auVar46._12_4_ & auVar67._12_4_ & auVar23._12_4_;
    auVar24._16_4_ = auVar46._16_4_ & auVar67._16_4_ & auVar23._16_4_;
    auVar24._20_4_ = auVar46._20_4_ & auVar67._20_4_ & auVar23._20_4_;
    auVar24._24_4_ = auVar46._24_4_ & auVar67._24_4_ & auVar23._24_4_;
    auVar24._28_4_ = auVar46._28_4_ & auVar67._28_4_ & auVar23._28_4_;
    uVar14 = vmovmskps_avx(auVar24);
    if (uVar14 != 0) {
      auVar23 = vsqrtps_avx(auVar64);
      auVar23 = vdivps_avx(auVar65,auVar23);
      fVar21 = auVar23._0_4_;
      auVar45._0_4_ = fVar21 * fVar25 + auVar61._0_4_;
      fVar25 = auVar23._4_4_;
      auVar45._4_4_ = fVar25 * fVar26 + auVar61._4_4_;
      fVar26 = auVar23._8_4_;
      auVar45._8_4_ = fVar26 * fVar27 + auVar61._8_4_;
      fVar27 = auVar23._12_4_;
      auVar45._12_4_ = fVar27 * fVar28 + auVar61._12_4_;
      fVar28 = auVar23._16_4_;
      auVar48._16_4_ = fVar28 * fVar29 + auVar61._16_4_;
      auVar48._0_16_ = auVar45;
      fVar29 = auVar23._20_4_;
      auVar48._20_4_ = fVar29 * fVar30 + auVar61._20_4_;
      fVar30 = auVar23._24_4_;
      auVar48._24_4_ = fVar30 * fVar31 + auVar61._24_4_;
      fVar31 = auVar23._28_4_;
      auVar48._28_4_ = fVar31 * fVar51 + auVar61._28_4_;
      auVar52._0_4_ = fVar21 * fVar4 + auVar62._0_4_;
      auVar52._4_4_ = fVar25 * fVar5 + auVar62._4_4_;
      auVar52._8_4_ = fVar26 * fVar6 + auVar62._8_4_;
      auVar52._12_4_ = fVar27 * fVar7 + auVar62._12_4_;
      auVar56._16_4_ = fVar28 * fVar8 + auVar62._16_4_;
      auVar56._0_16_ = auVar52;
      auVar56._20_4_ = fVar29 * fVar9 + auVar62._20_4_;
      auVar56._24_4_ = fVar30 * fVar10 + auVar62._24_4_;
      auVar56._28_4_ = fVar31 * fVar11 + auVar62._28_4_;
      auVar42._0_4_ = fVar21 * fVar35 + auVar55._0_4_;
      auVar42._4_4_ = fVar25 * fVar36 + auVar55._4_4_;
      auVar42._8_4_ = fVar26 * fVar37 + auVar55._8_4_;
      auVar42._12_4_ = fVar27 * fVar38 + auVar55._12_4_;
      auVar62._16_4_ = fVar28 * fVar39 + auVar55._16_4_;
      auVar62._0_16_ = auVar42;
      auVar62._20_4_ = fVar29 * fVar40 + auVar55._20_4_;
      auVar62._24_4_ = fVar30 * fVar41 + auVar55._24_4_;
      auVar62._28_4_ = fVar31 * fVar44 + auVar55._28_4_;
      cVar12 = (char)uVar14;
      if (cVar12 == -1) {
        auVar23 = vunpcklps_avx(auVar48,auVar56);
        auVar46 = vunpcklps_avx(auVar62,auVar34);
        auVar67 = vunpcklpd_avx(auVar23,auVar46);
        auVar23 = vunpckhpd_avx(auVar23,auVar46);
        auVar46 = vunpckhps_avx(auVar48,auVar56);
        auVar34 = vunpckhps_avx(auVar62,auVar34);
        auVar43 = vunpcklpd_avx(auVar46,auVar34);
        auVar57._16_16_ = auVar23._0_16_;
        auVar57._0_16_ = auVar67._0_16_;
        *pauVar17 = auVar57;
        auVar46 = vunpckhpd_avx(auVar46,auVar34);
        auVar49._16_16_ = auVar46._0_16_;
        auVar49._0_16_ = auVar43._0_16_;
        pauVar17[1] = auVar49;
        auVar23 = vperm2f128_avx(auVar67,auVar23,0x31);
        pauVar17[2] = auVar23;
        auVar23 = vperm2f128_avx(auVar43,auVar46,0x31);
        pauVar17[3] = auVar23;
      }
      else {
        auVar22 = auVar34._0_16_;
        auVar59 = auVar34._16_16_;
        auVar50 = auVar48._16_16_;
        auVar58 = auVar56._16_16_;
        auVar68 = auVar62._16_16_;
        if ((uVar14 & 1) != 0) {
          *(float *)*pauVar17 = auVar45._0_4_;
        }
        if ((uVar14 & 2) != 0) {
          uVar3 = vextractps_avx(auVar45,1);
          *(undefined4 *)(*pauVar17 + 0x10) = uVar3;
        }
        if ((uVar14 & 4) != 0) {
          uVar3 = vextractps_avx(auVar45,2);
          *(undefined4 *)pauVar17[1] = uVar3;
        }
        if ((uVar14 & 8) != 0) {
          uVar3 = vextractps_avx(auVar45,3);
          *(undefined4 *)(pauVar17[1] + 0x10) = uVar3;
        }
        if ((uVar14 & 0x10) != 0) {
          *(float *)pauVar17[2] = auVar48._16_4_;
        }
        if ((uVar14 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar50,1);
          *(undefined4 *)(pauVar17[2] + 0x10) = uVar3;
        }
        if ((uVar14 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar50,2);
          *(undefined4 *)pauVar17[3] = uVar3;
        }
        if (cVar12 < '\0') {
          uVar3 = vextractps_avx(auVar50,3);
          *(undefined4 *)(pauVar17[3] + 0x10) = uVar3;
        }
        if ((uVar14 & 1) != 0) {
          *(float *)(*pauVar17 + 4) = auVar52._0_4_;
        }
        if ((uVar14 & 2) != 0) {
          uVar3 = vextractps_avx(auVar52,1);
          *(undefined4 *)(*pauVar17 + 0x14) = uVar3;
        }
        if ((uVar14 & 4) != 0) {
          uVar3 = vextractps_avx(auVar52,2);
          *(undefined4 *)(pauVar17[1] + 4) = uVar3;
        }
        if ((uVar14 & 8) != 0) {
          uVar3 = vextractps_avx(auVar52,3);
          *(undefined4 *)(pauVar17[1] + 0x14) = uVar3;
        }
        if ((uVar14 & 0x10) != 0) {
          *(float *)(pauVar17[2] + 4) = auVar56._16_4_;
        }
        if ((uVar14 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar58,1);
          *(undefined4 *)(pauVar17[2] + 0x14) = uVar3;
        }
        if ((uVar14 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar58,2);
          *(undefined4 *)(pauVar17[3] + 4) = uVar3;
        }
        if (cVar12 < '\0') {
          uVar3 = vextractps_avx(auVar58,3);
          *(undefined4 *)(pauVar17[3] + 0x14) = uVar3;
        }
        if ((uVar14 & 1) != 0) {
          *(float *)(*pauVar17 + 8) = auVar42._0_4_;
        }
        if ((uVar14 & 2) != 0) {
          uVar3 = vextractps_avx(auVar42,1);
          *(undefined4 *)(*pauVar17 + 0x18) = uVar3;
        }
        if ((uVar14 & 4) != 0) {
          uVar3 = vextractps_avx(auVar42,2);
          *(undefined4 *)(pauVar17[1] + 8) = uVar3;
        }
        if ((uVar14 & 8) != 0) {
          uVar3 = vextractps_avx(auVar42,3);
          *(undefined4 *)(pauVar17[1] + 0x18) = uVar3;
        }
        if ((uVar14 & 0x10) != 0) {
          *(float *)(pauVar17[2] + 8) = auVar62._16_4_;
        }
        if ((uVar14 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar68,1);
          *(undefined4 *)(pauVar17[2] + 0x18) = uVar3;
        }
        if ((uVar14 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar68,2);
          *(undefined4 *)(pauVar17[3] + 8) = uVar3;
        }
        if (cVar12 < '\0') {
          uVar3 = vextractps_avx(auVar68,3);
          *(undefined4 *)(pauVar17[3] + 0x18) = uVar3;
        }
        if ((uVar14 & 1) != 0) {
          *(int *)(*pauVar17 + 0xc) = auVar34._0_4_;
        }
        if ((uVar14 & 2) != 0) {
          uVar3 = vextractps_avx(auVar22,1);
          *(undefined4 *)(*pauVar17 + 0x1c) = uVar3;
        }
        if ((uVar14 & 4) != 0) {
          uVar3 = vextractps_avx(auVar22,2);
          *(undefined4 *)(pauVar17[1] + 0xc) = uVar3;
        }
        if ((uVar14 & 8) != 0) {
          uVar3 = vextractps_avx(auVar22,3);
          *(undefined4 *)(pauVar17[1] + 0x1c) = uVar3;
        }
        if ((uVar14 & 0x10) != 0) {
          *(int *)(pauVar17[2] + 0xc) = auVar34._16_4_;
        }
        if ((uVar14 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar59,1);
          *(undefined4 *)(pauVar17[2] + 0x1c) = uVar3;
        }
        if ((uVar14 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar59,2);
          *(undefined4 *)(pauVar17[3] + 0xc) = uVar3;
        }
        if (cVar12 < '\0') {
          uVar3 = vextractps_avx(auVar59,3);
          *(undefined4 *)(pauVar17[3] + 0x1c) = uVar3;
        }
      }
    }
  }
  return;
}

// ApplySphericalConstraintsWithoutMap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_CunfCuniCuni_avx2 @ 14031bed0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplySphericalConstraintsWithoutMap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_CunfCuniCuni_avx2
               (longlong param_1,longlong param_2,float param_3,int param_4,uint param_5)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  char cVar10;
  uint uVar11;
  undefined1 (*pauVar12) [32];
  uint uVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  undefined1 (*pauVar17) [32];
  float fVar18;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  float fVar28;
  undefined1 auVar21 [32];
  undefined1 auVar29 [16];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  float fVar33;
  float fVar34;
  float fVar41;
  undefined1 auVar35 [16];
  float fVar39;
  float fVar40;
  float fVar42;
  float fVar44;
  float fVar45;
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  float fVar46;
  undefined1 auVar43 [16];
  undefined1 auVar47 [32];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar51 [32];
  undefined1 auVar54 [16];
  undefined1 auVar53 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar32 [32];
  undefined1 auVar38 [32];
  undefined1 auVar50 [32];
  undefined1 auVar52 [32];
  undefined1 auVar66 [32];
  
  uVar11 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar11 = param_5;
  }
  if ((int)(uVar11 & 0xfffffff8) < 1) {
    uVar16 = 0;
    if ((int)param_5 < 1) {
      return;
    }
  }
  else {
    auVar19._4_4_ = param_3;
    auVar19._0_4_ = param_3;
    auVar19._8_4_ = param_3;
    auVar19._12_4_ = param_3;
    auVar19._16_4_ = param_3;
    auVar19._20_4_ = param_3;
    auVar19._24_4_ = param_3;
    auVar19._28_4_ = param_3;
    auVar36._0_4_ = param_3 * param_3 + __real_322bcc77;
    auVar36._4_4_ = auVar36._0_4_;
    auVar36._8_4_ = auVar36._0_4_;
    auVar36._12_4_ = auVar36._0_4_;
    auVar36._16_4_ = auVar36._0_4_;
    auVar36._20_4_ = auVar36._0_4_;
    auVar36._24_4_ = auVar36._0_4_;
    auVar36._28_4_ = auVar36._0_4_;
    pauVar17 = (undefined1 (*) [32])((longlong)param_4 * 0x10 + param_1);
    pauVar12 = (undefined1 (*) [32])(param_2 + (longlong)param_4 * 0xc + 0x40);
    uVar16 = 0;
    do {
      auVar21 = *pauVar17;
      auVar30 = pauVar17[1];
      auVar31 = pauVar17[2];
      auVar51 = pauVar17[3];
      auVar66 = vperm2f128_avx(auVar21,auVar31,0x20);
      auVar55 = vperm2f128_avx(auVar21,auVar31,0x31);
      auVar20 = vperm2f128_avx(auVar30,auVar51,0x20);
      auVar59 = vperm2f128_avx(auVar30,auVar51,0x31);
      auVar37 = vunpckhps_avx(auVar66,auVar55);
      auVar50 = vunpckhps_avx(auVar20,auVar59);
      auVar56 = vunpckhpd_avx(auVar37,auVar50);
      auVar57 = vcmpps_avx(auVar56,
                           ___ymm_0000000000000000000000000000000000000000000000000000000000000000,4
                          );
      if ((((((((SUB321(auVar57 >> 0x1f,0) & 1) != 0 || (SUB321(auVar57 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar57 >> 0x5f,0) & 1) != 0) || SUB321(auVar57 >> 0x7f,0) != '\0') ||
            (SUB321(auVar57 >> 0x9f,0) & 1) != 0) || SUB321(auVar57 >> 0xbf,0) != '\0') ||
          (SUB321(auVar57 >> 0xdf,0) & 1) != 0) || auVar57[0x1f] < '\0') {
        auVar62 = vunpcklpd_avx(auVar37,auVar50);
        auVar37 = vunpcklps_avx(auVar66,auVar55);
        auVar50 = vunpcklps_avx(auVar20,auVar59);
        auVar20 = vunpckhpd_avx(auVar37,auVar50);
        auVar55 = vunpcklpd_avx(auVar37,auVar50);
        auVar37 = pauVar12[-1];
        auVar50 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                               ,auVar37);
        auVar66 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,pauVar12[-2]);
        auVar50 = vblendps_avx(auVar66,auVar50,0x88);
        auVar66 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                               ,auVar37);
        auVar59 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,*pauVar12);
        auVar66 = vblendps_avx(auVar59,auVar66,0x13);
        auVar58._16_16_ = auVar66._0_16_;
        auVar58._0_16_ = auVar50._0_16_;
        auVar47 = vperm2f128_avx(auVar50,auVar66,0x31);
        auVar37 = vblendps_avx(auVar37,pauVar12[-2],0x24);
        auVar37 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar37);
        auVar59._16_16_ = ___xmm_00000007000000040000000100000000;
        auVar59._0_16_ = ___xmm_00000007000000040000000100000000;
        auVar59 = vpermps_avx2(auVar59,*pauVar12);
        auVar37 = vblendps_avx(auVar37,auVar59,0xe0);
        auVar55 = vsubps_avx(auVar55,auVar58);
        auVar20 = vsubps_avx(auVar20,auVar47);
        auVar59 = vsubps_avx(auVar62,auVar37);
        fVar2 = auVar20._0_4_;
        fVar3 = auVar20._4_4_;
        fVar4 = auVar20._8_4_;
        fVar5 = auVar20._12_4_;
        fVar6 = auVar20._16_4_;
        fVar7 = auVar20._20_4_;
        fVar8 = auVar20._24_4_;
        fVar9 = auVar20._28_4_;
        fVar22 = auVar55._0_4_;
        fVar23 = auVar55._4_4_;
        fVar24 = auVar55._8_4_;
        fVar25 = auVar55._12_4_;
        fVar26 = auVar55._16_4_;
        fVar27 = auVar55._20_4_;
        fVar28 = auVar55._24_4_;
        fVar33 = auVar55._28_4_;
        fVar34 = auVar59._0_4_;
        auVar62._0_4_ = fVar34 * fVar34 + fVar22 * fVar22 + fVar2 * fVar2;
        fVar39 = auVar59._4_4_;
        auVar62._4_4_ = fVar39 * fVar39 + fVar23 * fVar23 + fVar3 * fVar3;
        fVar40 = auVar59._8_4_;
        auVar62._8_4_ = fVar40 * fVar40 + fVar24 * fVar24 + fVar4 * fVar4;
        fVar41 = auVar59._12_4_;
        auVar62._12_4_ = fVar41 * fVar41 + fVar25 * fVar25 + fVar5 * fVar5;
        fVar42 = auVar59._16_4_;
        auVar62._16_4_ = fVar42 * fVar42 + fVar26 * fVar26 + fVar6 * fVar6;
        fVar44 = auVar59._20_4_;
        auVar62._20_4_ = fVar44 * fVar44 + fVar27 * fVar27 + fVar7 * fVar7;
        fVar45 = auVar59._24_4_;
        auVar62._24_4_ = fVar45 * fVar45 + fVar28 * fVar28 + fVar8 * fVar8;
        fVar46 = auVar59._28_4_;
        auVar62._28_4_ = fVar46 * fVar46 + fVar33 * fVar33 + fVar9 * fVar9;
        auVar55 = vcmpps_avx(auVar36,auVar62,1);
        auVar20._0_4_ = auVar55._0_4_ & auVar57._0_4_;
        auVar20._4_4_ = auVar55._4_4_ & auVar57._4_4_;
        auVar20._8_4_ = auVar55._8_4_ & auVar57._8_4_;
        auVar20._12_4_ = auVar55._12_4_ & auVar57._12_4_;
        auVar20._16_4_ = auVar55._16_4_ & auVar57._16_4_;
        auVar20._20_4_ = auVar55._20_4_ & auVar57._20_4_;
        auVar20._24_4_ = auVar55._24_4_ & auVar57._24_4_;
        auVar20._28_4_ = auVar55._28_4_ & auVar57._28_4_;
        uVar13 = vmovmskps_avx(auVar20);
        if (uVar13 != 0) {
          auVar57 = vsqrtps_avx(auVar62);
          auVar57 = vdivps_avx(auVar19,auVar57);
          fVar18 = auVar57._0_4_;
          auVar48._0_4_ = fVar18 * fVar22 + auVar50._0_4_;
          fVar22 = auVar57._4_4_;
          auVar48._4_4_ = fVar22 * fVar23 + auVar50._4_4_;
          fVar23 = auVar57._8_4_;
          auVar48._8_4_ = fVar23 * fVar24 + auVar50._8_4_;
          fVar24 = auVar57._12_4_;
          auVar48._12_4_ = fVar24 * fVar25 + auVar50._12_4_;
          fVar25 = auVar57._16_4_;
          auVar50._16_4_ = fVar25 * fVar26 + auVar66._0_4_;
          auVar50._0_16_ = auVar48;
          fVar26 = auVar57._20_4_;
          auVar50._20_4_ = fVar26 * fVar27 + auVar66._4_4_;
          fVar27 = auVar57._24_4_;
          auVar50._24_4_ = fVar27 * fVar28 + auVar66._8_4_;
          fVar28 = auVar57._28_4_;
          auVar50._28_4_ = fVar28 * fVar33 + auVar66._12_4_;
          auVar65._0_4_ = fVar18 * fVar2 + auVar47._0_4_;
          auVar65._4_4_ = fVar22 * fVar3 + auVar47._4_4_;
          auVar65._8_4_ = fVar23 * fVar4 + auVar47._8_4_;
          auVar65._12_4_ = fVar24 * fVar5 + auVar47._12_4_;
          auVar66._16_4_ = fVar25 * fVar6 + auVar47._16_4_;
          auVar66._0_16_ = auVar65;
          auVar66._20_4_ = fVar26 * fVar7 + auVar47._20_4_;
          auVar66._24_4_ = fVar27 * fVar8 + auVar47._24_4_;
          auVar66._28_4_ = fVar28 * fVar9 + auVar47._28_4_;
          auVar64._0_4_ = fVar18 * fVar34 + auVar37._0_4_;
          auVar64._4_4_ = fVar22 * fVar39 + auVar37._4_4_;
          auVar64._8_4_ = fVar23 * fVar40 + auVar37._8_4_;
          auVar64._12_4_ = fVar24 * fVar41 + auVar37._12_4_;
          auVar57._16_4_ = fVar25 * fVar42 + auVar37._16_4_;
          auVar57._0_16_ = auVar64;
          auVar57._20_4_ = fVar26 * fVar44 + auVar37._20_4_;
          auVar57._24_4_ = fVar27 * fVar45 + auVar37._24_4_;
          auVar57._28_4_ = fVar28 * fVar46 + auVar37._28_4_;
          cVar10 = (char)uVar13;
          if (cVar10 == -1) {
            auVar21 = vunpcklps_avx(auVar50,auVar66);
            auVar30 = vunpcklps_avx(auVar57,auVar56);
            auVar51 = vunpcklpd_avx(auVar21,auVar30);
            auVar21 = vunpckhpd_avx(auVar21,auVar30);
            auVar30 = vunpckhps_avx(auVar50,auVar66);
            auVar31 = vunpckhps_avx(auVar57,auVar56);
            auVar57 = vunpcklpd_avx(auVar30,auVar31);
            auVar56._16_16_ = auVar21._0_16_;
            auVar56._0_16_ = auVar51._0_16_;
            *pauVar17 = auVar56;
            auVar30 = vunpckhpd_avx(auVar30,auVar31);
            auVar31._16_16_ = auVar30._0_16_;
            auVar31._0_16_ = auVar57._0_16_;
            pauVar17[1] = auVar31;
            auVar21 = vperm2f128_avx(auVar51,auVar21,0x31);
            pauVar17[2] = auVar21;
            auVar21 = vperm2f128_avx(auVar57,auVar30,0x31);
            pauVar17[3] = auVar21;
          }
          else {
            auVar29 = auVar50._16_16_;
            auVar49 = auVar66._16_16_;
            auVar35 = auVar57._16_16_;
            if ((uVar13 & 1) != 0) {
              *(float *)*pauVar17 = auVar48._0_4_;
            }
            if ((uVar13 & 2) != 0) {
              uVar1 = vextractps_avx(auVar48,1);
              *(undefined4 *)(*pauVar17 + 0x10) = uVar1;
            }
            if ((uVar13 & 4) != 0) {
              uVar1 = vextractps_avx(auVar48,2);
              *(undefined4 *)pauVar17[1] = uVar1;
            }
            if ((uVar13 & 8) != 0) {
              uVar1 = vextractps_avx(auVar48,3);
              *(undefined4 *)(pauVar17[1] + 0x10) = uVar1;
            }
            if ((uVar13 & 0x10) != 0) {
              *(float *)pauVar17[2] = auVar50._16_4_;
            }
            if ((uVar13 & 0x20) != 0) {
              uVar1 = vextractps_avx(auVar29,1);
              *(undefined4 *)(pauVar17[2] + 0x10) = uVar1;
            }
            if ((uVar13 & 0x40) != 0) {
              uVar1 = vextractps_avx(auVar29,2);
              *(undefined4 *)pauVar17[3] = uVar1;
            }
            if (cVar10 < '\0') {
              uVar1 = vextractps_avx(auVar29,3);
              *(undefined4 *)(pauVar17[3] + 0x10) = uVar1;
            }
            if ((uVar13 & 1) != 0) {
              *(float *)(*pauVar17 + 4) = auVar65._0_4_;
            }
            if ((uVar13 & 2) != 0) {
              uVar1 = vextractps_avx(auVar65,1);
              *(undefined4 *)(*pauVar17 + 0x14) = uVar1;
            }
            if ((uVar13 & 4) != 0) {
              uVar1 = vextractps_avx(auVar65,2);
              *(undefined4 *)(pauVar17[1] + 4) = uVar1;
            }
            if ((uVar13 & 8) != 0) {
              uVar1 = vextractps_avx(auVar65,3);
              *(undefined4 *)(pauVar17[1] + 0x14) = uVar1;
            }
            if ((uVar13 & 0x10) != 0) {
              *(float *)(pauVar17[2] + 4) = auVar66._16_4_;
            }
            if ((uVar13 & 0x20) != 0) {
              uVar1 = vextractps_avx(auVar49,1);
              *(undefined4 *)(pauVar17[2] + 0x14) = uVar1;
            }
            if ((uVar13 & 0x40) != 0) {
              uVar1 = vextractps_avx(auVar49,2);
              *(undefined4 *)(pauVar17[3] + 4) = uVar1;
            }
            if (cVar10 < '\0') {
              uVar1 = vextractps_avx(auVar49,3);
              *(undefined4 *)(pauVar17[3] + 0x14) = uVar1;
            }
            if ((uVar13 & 1) != 0) {
              *(float *)(*pauVar17 + 8) = auVar64._0_4_;
            }
            if ((uVar13 & 2) != 0) {
              uVar1 = vextractps_avx(auVar64,1);
              *(undefined4 *)(*pauVar17 + 0x18) = uVar1;
            }
            if ((uVar13 & 4) != 0) {
              uVar1 = vextractps_avx(auVar64,2);
              *(undefined4 *)(pauVar17[1] + 8) = uVar1;
            }
            if ((uVar13 & 8) != 0) {
              uVar1 = vextractps_avx(auVar64,3);
              *(undefined4 *)(pauVar17[1] + 0x18) = uVar1;
            }
            if ((uVar13 & 0x10) != 0) {
              *(float *)(pauVar17[2] + 8) = auVar57._16_4_;
            }
            if ((uVar13 & 0x20) != 0) {
              uVar1 = vextractps_avx(auVar35,1);
              *(undefined4 *)(pauVar17[2] + 0x18) = uVar1;
            }
            if ((uVar13 & 0x40) != 0) {
              uVar1 = vextractps_avx(auVar35,2);
              *(undefined4 *)(pauVar17[3] + 8) = uVar1;
            }
            if (cVar10 < '\0') {
              uVar1 = vextractps_avx(auVar35,3);
              *(undefined4 *)(pauVar17[3] + 0x18) = uVar1;
            }
            if ((uVar13 & 1) != 0) {
              uVar1 = vextractps_avx(auVar21._0_16_,3);
              *(undefined4 *)(*pauVar17 + 0xc) = uVar1;
            }
            if ((uVar13 & 2) != 0) {
              uVar1 = vextractps_avx(auVar21._16_16_,3);
              *(undefined4 *)(*pauVar17 + 0x1c) = uVar1;
            }
            if ((uVar13 & 4) != 0) {
              uVar1 = vextractps_avx(auVar30._0_16_,3);
              *(undefined4 *)(pauVar17[1] + 0xc) = uVar1;
            }
            if ((uVar13 & 8) != 0) {
              uVar1 = vextractps_avx(auVar30._16_16_,3);
              *(undefined4 *)(pauVar17[1] + 0x1c) = uVar1;
            }
            if ((uVar13 & 0x10) != 0) {
              uVar1 = vextractps_avx(auVar31._0_16_,3);
              *(undefined4 *)(pauVar17[2] + 0xc) = uVar1;
            }
            if ((uVar13 & 0x20) != 0) {
              uVar1 = vextractps_avx(auVar31._16_16_,3);
              *(undefined4 *)(pauVar17[2] + 0x1c) = uVar1;
            }
            if ((uVar13 & 0x40) != 0) {
              uVar1 = vextractps_avx(auVar51._0_16_,3);
              *(undefined4 *)(pauVar17[3] + 0xc) = uVar1;
            }
            if (cVar10 < '\0') {
              uVar1 = vextractps_avx(auVar51._16_16_,3);
              *(undefined4 *)(pauVar17[3] + 0x1c) = uVar1;
            }
          }
        }
      }
      uVar16 = uVar16 + 8;
      pauVar17 = pauVar17 + 4;
      pauVar12 = pauVar12 + 3;
    } while (uVar16 < (uVar11 & 0xfffffff8));
    if ((int)param_5 <= (int)uVar16) {
      return;
    }
  }
  iVar14 = (int)uVar16;
  auVar21._4_4_ = iVar14;
  auVar21._0_4_ = iVar14;
  auVar21._8_4_ = iVar14;
  auVar21._12_4_ = iVar14;
  auVar21._16_4_ = iVar14;
  auVar21._20_4_ = iVar14;
  auVar21._24_4_ = iVar14;
  auVar21._28_4_ = iVar14;
  auVar19 = vpor_avx2(auVar21,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar30._4_4_ = param_5;
  auVar30._0_4_ = param_5;
  auVar30._8_4_ = param_5;
  auVar30._12_4_ = param_5;
  auVar30._16_4_ = param_5;
  auVar30._20_4_ = param_5;
  auVar30._24_4_ = param_5;
  auVar30._28_4_ = param_5;
  auVar19 = vpcmpgtd_avx2(auVar30,auVar19);
  pauVar12 = (undefined1 (*) [32])(param_1 + (longlong)(param_4 + iVar14) * 0x10);
  iVar15 = vmovmskps_avx(auVar19);
  if (iVar15 == 0xff) {
    auVar21 = vperm2f128_avx(*pauVar12,pauVar12[2],0x20);
    auVar30 = vperm2f128_avx(*pauVar12,pauVar12[2],0x31);
    auVar31 = vperm2f128_avx(pauVar12[1],pauVar12[3],0x20);
    auVar57 = vperm2f128_avx(pauVar12[1],pauVar12[3],0x31);
    auVar36 = vunpcklps_avx(auVar21,auVar30);
    auVar21 = vunpckhps_avx(auVar21,auVar30);
    auVar51 = vunpcklps_avx(auVar31,auVar57);
    auVar30 = vunpckhps_avx(auVar31,auVar57);
    auVar31 = vunpcklpd_avx(auVar36,auVar51);
    auVar36 = vunpckhpd_avx(auVar36,auVar51);
    auVar51 = vunpcklpd_avx(auVar21,auVar30);
    auVar21 = vunpckhpd_avx(auVar21,auVar30);
  }
  else {
    auVar31 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar19);
    auVar36 = vgatherdps(ZEXT832(0),auVar19);
    auVar51 = vgatherdps(ZEXT832(0),auVar19);
    auVar21 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar19);
  }
  auVar30 = vmaskmovps_avx(auVar19,auVar31);
  auVar36 = vmaskmovps_avx(auVar19,auVar36);
  auVar31 = vmaskmovps_avx(auVar19,auVar51);
  auVar51 = vcmpps_avx(auVar21,ZEXT832(0) << 0x20,4);
  auVar51 = auVar19 & auVar51;
  if ((((((((SUB321(auVar51 >> 0x1f,0) & 1) != 0 || (SUB321(auVar51 >> 0x3f,0) & 1) != 0) ||
          (SUB321(auVar51 >> 0x5f,0) & 1) != 0) || SUB321(auVar51 >> 0x7f,0) != '\0') ||
        (SUB321(auVar51 >> 0x9f,0) & 1) != 0) || SUB321(auVar51 >> 0xbf,0) != '\0') ||
      (SUB321(auVar51 >> 0xdf,0) & 1) != 0) || auVar51[0x1f] < '\0') {
    pauVar17 = (undefined1 (*) [32])(param_2 + (longlong)(param_4 + iVar14) * 0xc);
    if ((char)iVar15 == -1) {
      auVar51 = pauVar17[1];
      auVar57 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                             ,auVar51);
      auVar56 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,*pauVar17);
      auVar57 = vblendps_avx(auVar56,auVar57,0x88);
      auVar56 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                             ,auVar51);
      auVar37 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,pauVar17[2]);
      auVar56 = vblendps_avx(auVar37,auVar56,0x13);
      auVar55._16_16_ = auVar56._0_16_;
      auVar55._0_16_ = auVar57._0_16_;
      auVar57 = vperm2f128_avx(auVar57,auVar56,0x31);
      auVar51 = vblendps_avx(auVar51,*pauVar17,0x24);
      auVar51 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar51);
      auVar37._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar37._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar56 = vpermps_avx2(auVar37,pauVar17[2]);
      auVar51 = vblendps_avx(auVar51,auVar56,0xe0);
    }
    else {
      auVar55 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar19);
      auVar57 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar19);
      auVar51 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar19);
    }
    auVar30 = vsubps_avx(auVar30,auVar55);
    auVar36 = vsubps_avx(auVar36,auVar57);
    auVar31 = vsubps_avx(auVar31,auVar51);
    fVar2 = auVar36._0_4_;
    fVar3 = auVar36._4_4_;
    fVar4 = auVar36._8_4_;
    fVar5 = auVar36._12_4_;
    fVar6 = auVar36._16_4_;
    fVar7 = auVar36._20_4_;
    fVar8 = auVar36._24_4_;
    fVar9 = auVar36._28_4_;
    fVar34 = auVar30._0_4_;
    fVar39 = auVar30._4_4_;
    fVar40 = auVar30._8_4_;
    fVar41 = auVar30._12_4_;
    fVar42 = auVar30._16_4_;
    fVar44 = auVar30._20_4_;
    fVar45 = auVar30._24_4_;
    fVar46 = auVar30._28_4_;
    fVar22 = auVar31._0_4_;
    auVar60._0_4_ = fVar22 * fVar22 + fVar34 * fVar34 + fVar2 * fVar2;
    fVar23 = auVar31._4_4_;
    auVar60._4_4_ = fVar23 * fVar23 + fVar39 * fVar39 + fVar3 * fVar3;
    fVar24 = auVar31._8_4_;
    auVar60._8_4_ = fVar24 * fVar24 + fVar40 * fVar40 + fVar4 * fVar4;
    fVar25 = auVar31._12_4_;
    auVar60._12_4_ = fVar25 * fVar25 + fVar41 * fVar41 + fVar5 * fVar5;
    fVar26 = auVar31._16_4_;
    auVar60._16_4_ = fVar26 * fVar26 + fVar42 * fVar42 + fVar6 * fVar6;
    fVar27 = auVar31._20_4_;
    auVar60._20_4_ = fVar27 * fVar27 + fVar44 * fVar44 + fVar7 * fVar7;
    fVar28 = auVar31._24_4_;
    auVar60._24_4_ = fVar28 * fVar28 + fVar45 * fVar45 + fVar8 * fVar8;
    fVar33 = auVar31._28_4_;
    auVar60._28_4_ = fVar33 * fVar33 + fVar46 * fVar46 + fVar9 * fVar9;
    auVar63._0_4_ = param_3 * param_3 + __real_322bcc77;
    auVar63._4_4_ = auVar63._0_4_;
    auVar63._8_4_ = auVar63._0_4_;
    auVar63._12_4_ = auVar63._0_4_;
    auVar63._16_4_ = auVar63._0_4_;
    auVar63._20_4_ = auVar63._0_4_;
    auVar63._24_4_ = auVar63._0_4_;
    auVar63._28_4_ = auVar63._0_4_;
    auVar36 = vcmpps_avx(auVar63,auVar60,1);
    auVar30 = vcmpps_avx(ZEXT1232(ZEXT812(0)),auVar21,4);
    auVar47._0_4_ = auVar36._0_4_ & auVar30._0_4_ & auVar19._0_4_;
    auVar47._4_4_ = auVar36._4_4_ & auVar30._4_4_ & auVar19._4_4_;
    auVar47._8_4_ = auVar36._8_4_ & auVar30._8_4_ & auVar19._8_4_;
    auVar47._12_4_ = auVar36._12_4_ & auVar30._12_4_ & auVar19._12_4_;
    auVar47._16_4_ = auVar36._16_4_ & auVar30._16_4_ & auVar19._16_4_;
    auVar47._20_4_ = auVar36._20_4_ & auVar30._20_4_ & auVar19._20_4_;
    auVar47._24_4_ = auVar36._24_4_ & auVar30._24_4_ & auVar19._24_4_;
    auVar47._28_4_ = auVar36._28_4_ & auVar30._28_4_ & auVar19._28_4_;
    uVar11 = vmovmskps_avx(auVar47);
    if (uVar11 != 0) {
      auVar19 = vsqrtps_avx(auVar60);
      auVar61._4_4_ = param_3;
      auVar61._0_4_ = param_3;
      auVar61._8_4_ = param_3;
      auVar61._12_4_ = param_3;
      auVar61._16_4_ = param_3;
      auVar61._20_4_ = param_3;
      auVar61._24_4_ = param_3;
      auVar61._28_4_ = param_3;
      auVar19 = vdivps_avx(auVar61,auVar19);
      fVar18 = auVar19._0_4_;
      auVar35._0_4_ = fVar18 * fVar34 + auVar55._0_4_;
      fVar34 = auVar19._4_4_;
      auVar35._4_4_ = fVar34 * fVar39 + auVar55._4_4_;
      fVar39 = auVar19._8_4_;
      auVar35._8_4_ = fVar39 * fVar40 + auVar55._8_4_;
      fVar40 = auVar19._12_4_;
      auVar35._12_4_ = fVar40 * fVar41 + auVar55._12_4_;
      fVar41 = auVar19._16_4_;
      auVar38._16_4_ = fVar41 * fVar42 + auVar55._16_4_;
      auVar38._0_16_ = auVar35;
      fVar42 = auVar19._20_4_;
      auVar38._20_4_ = fVar42 * fVar44 + auVar55._20_4_;
      fVar44 = auVar19._24_4_;
      auVar38._24_4_ = fVar44 * fVar45 + auVar55._24_4_;
      fVar45 = auVar19._28_4_;
      auVar38._28_4_ = fVar45 * fVar46 + auVar55._28_4_;
      auVar49._0_4_ = fVar18 * fVar2 + auVar57._0_4_;
      auVar49._4_4_ = fVar34 * fVar3 + auVar57._4_4_;
      auVar49._8_4_ = fVar39 * fVar4 + auVar57._8_4_;
      auVar49._12_4_ = fVar40 * fVar5 + auVar57._12_4_;
      auVar52._16_4_ = fVar41 * fVar6 + auVar57._16_4_;
      auVar52._0_16_ = auVar49;
      auVar52._20_4_ = fVar42 * fVar7 + auVar57._20_4_;
      auVar52._24_4_ = fVar44 * fVar8 + auVar57._24_4_;
      auVar52._28_4_ = fVar45 * fVar9 + auVar57._28_4_;
      auVar29._0_4_ = fVar18 * fVar22 + auVar51._0_4_;
      auVar29._4_4_ = fVar34 * fVar23 + auVar51._4_4_;
      auVar29._8_4_ = fVar39 * fVar24 + auVar51._8_4_;
      auVar29._12_4_ = fVar40 * fVar25 + auVar51._12_4_;
      auVar32._16_4_ = fVar41 * fVar26 + auVar51._16_4_;
      auVar32._0_16_ = auVar29;
      auVar32._20_4_ = fVar42 * fVar27 + auVar51._20_4_;
      auVar32._24_4_ = fVar44 * fVar28 + auVar51._24_4_;
      auVar32._28_4_ = fVar45 * fVar33 + auVar51._28_4_;
      cVar10 = (char)uVar11;
      if (cVar10 == -1) {
        auVar19 = vunpcklps_avx(auVar38,auVar52);
        auVar36 = vunpcklps_avx(auVar32,auVar21);
        auVar30 = vunpcklpd_avx(auVar19,auVar36);
        auVar19 = vunpckhpd_avx(auVar19,auVar36);
        auVar36 = vunpckhps_avx(auVar38,auVar52);
        auVar21 = vunpckhps_avx(auVar32,auVar21);
        auVar31 = vunpcklpd_avx(auVar36,auVar21);
        auVar53._16_16_ = auVar19._0_16_;
        auVar53._0_16_ = auVar30._0_16_;
        *pauVar12 = auVar53;
        auVar36 = vunpckhpd_avx(auVar36,auVar21);
        auVar51._16_16_ = auVar36._0_16_;
        auVar51._0_16_ = auVar31._0_16_;
        pauVar12[1] = auVar51;
        auVar19 = vperm2f128_avx(auVar30,auVar19,0x31);
        pauVar12[2] = auVar19;
        auVar19 = vperm2f128_avx(auVar31,auVar36,0x31);
        pauVar12[3] = auVar19;
      }
      else {
        auVar48 = auVar21._0_16_;
        auVar64 = auVar21._16_16_;
        auVar43 = auVar38._16_16_;
        auVar54 = auVar52._16_16_;
        auVar65 = auVar32._16_16_;
        if ((uVar11 & 1) != 0) {
          *(float *)*pauVar12 = auVar35._0_4_;
        }
        if ((uVar11 & 2) != 0) {
          uVar1 = vextractps_avx(auVar35,1);
          *(undefined4 *)(*pauVar12 + 0x10) = uVar1;
        }
        if ((uVar11 & 4) != 0) {
          uVar1 = vextractps_avx(auVar35,2);
          *(undefined4 *)pauVar12[1] = uVar1;
        }
        if ((uVar11 & 8) != 0) {
          uVar1 = vextractps_avx(auVar35,3);
          *(undefined4 *)(pauVar12[1] + 0x10) = uVar1;
        }
        if ((uVar11 & 0x10) != 0) {
          *(float *)pauVar12[2] = auVar38._16_4_;
        }
        if ((uVar11 & 0x20) != 0) {
          uVar1 = vextractps_avx(auVar43,1);
          *(undefined4 *)(pauVar12[2] + 0x10) = uVar1;
        }
        if ((uVar11 & 0x40) != 0) {
          uVar1 = vextractps_avx(auVar43,2);
          *(undefined4 *)pauVar12[3] = uVar1;
        }
        if (cVar10 < '\0') {
          uVar1 = vextractps_avx(auVar43,3);
          *(undefined4 *)(pauVar12[3] + 0x10) = uVar1;
        }
        if ((uVar11 & 1) != 0) {
          *(float *)(*pauVar12 + 4) = auVar49._0_4_;
        }
        if ((uVar11 & 2) != 0) {
          uVar1 = vextractps_avx(auVar49,1);
          *(undefined4 *)(*pauVar12 + 0x14) = uVar1;
        }
        if ((uVar11 & 4) != 0) {
          uVar1 = vextractps_avx(auVar49,2);
          *(undefined4 *)(pauVar12[1] + 4) = uVar1;
        }
        if ((uVar11 & 8) != 0) {
          uVar1 = vextractps_avx(auVar49,3);
          *(undefined4 *)(pauVar12[1] + 0x14) = uVar1;
        }
        if ((uVar11 & 0x10) != 0) {
          *(float *)(pauVar12[2] + 4) = auVar52._16_4_;
        }
        if ((uVar11 & 0x20) != 0) {
          uVar1 = vextractps_avx(auVar54,1);
          *(undefined4 *)(pauVar12[2] + 0x14) = uVar1;
        }
        if ((uVar11 & 0x40) != 0) {
          uVar1 = vextractps_avx(auVar54,2);
          *(undefined4 *)(pauVar12[3] + 4) = uVar1;
        }
        if (cVar10 < '\0') {
          uVar1 = vextractps_avx(auVar54,3);
          *(undefined4 *)(pauVar12[3] + 0x14) = uVar1;
        }
        if ((uVar11 & 1) != 0) {
          *(float *)(*pauVar12 + 8) = auVar29._0_4_;
        }
        if ((uVar11 & 2) != 0) {
          uVar1 = vextractps_avx(auVar29,1);
          *(undefined4 *)(*pauVar12 + 0x18) = uVar1;
        }
        if ((uVar11 & 4) != 0) {
          uVar1 = vextractps_avx(auVar29,2);
          *(undefined4 *)(pauVar12[1] + 8) = uVar1;
        }
        if ((uVar11 & 8) != 0) {
          uVar1 = vextractps_avx(auVar29,3);
          *(undefined4 *)(pauVar12[1] + 0x18) = uVar1;
        }
        if ((uVar11 & 0x10) != 0) {
          *(float *)(pauVar12[2] + 8) = auVar32._16_4_;
        }
        if ((uVar11 & 0x20) != 0) {
          uVar1 = vextractps_avx(auVar65,1);
          *(undefined4 *)(pauVar12[2] + 0x18) = uVar1;
        }
        if ((uVar11 & 0x40) != 0) {
          uVar1 = vextractps_avx(auVar65,2);
          *(undefined4 *)(pauVar12[3] + 8) = uVar1;
        }
        if (cVar10 < '\0') {
          uVar1 = vextractps_avx(auVar65,3);
          *(undefined4 *)(pauVar12[3] + 0x18) = uVar1;
        }
        if ((uVar11 & 1) != 0) {
          *(int *)(*pauVar12 + 0xc) = auVar21._0_4_;
        }
        if ((uVar11 & 2) != 0) {
          uVar1 = vextractps_avx(auVar48,1);
          *(undefined4 *)(*pauVar12 + 0x1c) = uVar1;
        }
        if ((uVar11 & 4) != 0) {
          uVar1 = vextractps_avx(auVar48,2);
          *(undefined4 *)(pauVar12[1] + 0xc) = uVar1;
        }
        if ((uVar11 & 8) != 0) {
          uVar1 = vextractps_avx(auVar48,3);
          *(undefined4 *)(pauVar12[1] + 0x1c) = uVar1;
        }
        if ((uVar11 & 0x10) != 0) {
          *(int *)(pauVar12[2] + 0xc) = auVar21._16_4_;
        }
        if ((uVar11 & 0x20) != 0) {
          uVar1 = vextractps_avx(auVar64,1);
          *(undefined4 *)(pauVar12[2] + 0x1c) = uVar1;
        }
        if ((uVar11 & 0x40) != 0) {
          uVar1 = vextractps_avx(auVar64,2);
          *(undefined4 *)(pauVar12[3] + 0xc) = uVar1;
        }
        if (cVar10 < '\0') {
          uVar1 = vextractps_avx(auVar64,3);
          *(undefined4 *)(pauVar12[3] + 0x1c) = uVar1;
        }
      }
    }
  }
  return;
}

// ApplySphericalConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_CunfCuniCuni_avx2 @ 14031cb20

void ApplySphericalConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_CunfCuniCuni_avx2
               (void)

{
  ApplySphericalConstraintsWithMap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_CunfCunfCuniCuni_avx2
            ();
  return;
}

// ApplyLegacySphericalBackstopConstraintsWithMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_CunfCunfCunfCunfCuniCuni_avx2 @ 14031cb60

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLegacySphericalBackstopConstraintsWithMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_CunfCunfCunfCunfCuniCuni_avx2
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,float param_6,float param_7,float param_8,float param_9,int param_10,uint param_11)

{
  float *pfVar1;
  undefined1 (*pauVar2) [32];
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  char cVar12;
  uint uVar13;
  undefined1 (*pauVar14) [32];
  int iVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  float fVar28;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [16];
  undefined1 auVar48 [16];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  float fVar49;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined1 auVar50 [16];
  float fVar57;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined1 auVar58 [16];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [16];
  undefined1 auVar65 [32];
  undefined1 auVar68 [16];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [64];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  float fVar76;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  undefined1 auVar77 [32];
  float fVar84;
  undefined1 auVar85 [32];
  uint uVar86;
  undefined1 auVar87 [16];
  uint uVar89;
  uint uVar90;
  uint uVar91;
  uint uVar92;
  uint uVar94;
  uint uVar95;
  uint uVar96;
  undefined1 auVar88 [32];
  undefined1 auVar93 [16];
  undefined1 auVar97 [32];
  float fVar98;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  undefined1 auVar99 [32];
  undefined1 auVar100 [32];
  float fVar107;
  undefined1 auVar108 [32];
  
  uVar13 = param_11 + 7;
  if (-1 < (int)param_11) {
    uVar13 = param_11;
  }
  if ((int)(uVar13 & 0xfffffff8) < 1) {
    uVar18 = 0;
    if ((int)param_11 < 1) {
      return;
    }
  }
  else {
    lVar16 = (longlong)param_10 * 0x10 + param_1;
    lVar20 = (longlong)param_10 * 0xc + 0x40;
    uVar21 = 0;
    auVar73 = ZEXT1264(ZEXT812(0));
    uVar18 = 0;
    do {
      auVar24 = *(undefined1 (*) [32])(lVar16 + uVar21 * 4);
      auVar41 = *(undefined1 (*) [32])(lVar16 + 0x20 + uVar21 * 4);
      auVar51 = *(undefined1 (*) [32])(lVar16 + 0x40 + uVar21 * 4);
      auVar30 = *(undefined1 (*) [32])(lVar16 + 0x60 + uVar21 * 4);
      auVar85 = vperm2f128_avx(auVar24,auVar51,0x20);
      auVar66 = vperm2f128_avx(auVar24,auVar51,0x31);
      auVar25 = vperm2f128_avx(auVar41,auVar30,0x20);
      auVar52 = vperm2f128_avx(auVar41,auVar30,0x31);
      auVar23 = vunpckhps_avx(auVar85,auVar66);
      auVar40 = vunpckhps_avx(auVar25,auVar52);
      auVar43 = vunpckhpd_avx(auVar23,auVar40);
      auVar29 = vcmpps_avx(auVar73._0_32_,auVar43,4);
      if ((((((((SUB321(auVar29 >> 0x1f,0) & 1) != 0 || (SUB321(auVar29 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar29 >> 0x5f,0) & 1) != 0) || SUB321(auVar29 >> 0x7f,0) != '\0') ||
            (SUB321(auVar29 >> 0x9f,0) & 1) != 0) || SUB321(auVar29 >> 0xbf,0) != '\0') ||
          (SUB321(auVar29 >> 0xdf,0) & 1) != 0) || auVar29[0x1f] < '\0') {
        auVar71 = vunpcklpd_avx(auVar23,auVar40);
        auVar23 = vunpcklps_avx(auVar85,auVar66);
        auVar40 = vunpcklps_avx(auVar25,auVar52);
        auVar65 = vunpckhpd_avx(auVar23,auVar40);
        auVar44 = vunpcklpd_avx(auVar23,auVar40);
        auVar23 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar20);
        auVar40 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar20);
        auVar85 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar40);
        auVar66 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,auVar23);
        auVar85 = vblendps_avx(auVar66,auVar85,0x88);
        auVar66 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar40);
        auVar25 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,*(undefined1 (*) [32])(param_2 + lVar20));
        auVar66 = vblendps_avx(auVar25,auVar66,0x13);
        auVar69 = vperm2f128_avx(auVar85,auVar66,0x31);
        auVar23 = vblendps_avx(auVar40,auVar23,0x24);
        auVar23 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar23);
        auVar40 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,*(undefined1 (*) [32])(param_2 + lVar20));
        auVar25 = vblendps_avx(auVar23,auVar40,0xe0);
        auVar23 = *(undefined1 (*) [32])(param_3 + -0x40 + lVar20);
        auVar40 = *(undefined1 (*) [32])(param_3 + -0x20 + lVar20);
        auVar52 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar40);
        auVar74 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,auVar23);
        auVar52 = vblendps_avx(auVar74,auVar52,0x88);
        auVar74 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar40);
        auVar77 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,*(undefined1 (*) [32])(param_3 + lVar20));
        auVar74 = vblendps_avx(auVar77,auVar74,0x13);
        auVar45 = vperm2f128_avx(auVar52,auVar74,0x31);
        auVar23 = vblendps_avx(auVar40,auVar23,0x24);
        auVar23 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar23);
        auVar40 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,*(undefined1 (*) [32])(param_3 + lVar20));
        auVar23 = vblendps_avx(auVar23,auVar40,0xe0);
        pfVar1 = (float *)(param_4 + (uVar21 & 0xffffffff));
        auVar99._0_4_ = param_7 * *pfVar1 + param_6;
        auVar99._4_4_ = param_7 * pfVar1[1] + param_6;
        auVar99._8_4_ = param_7 * pfVar1[2] + param_6;
        auVar99._12_4_ = param_7 * pfVar1[3] + param_6;
        auVar99._16_4_ = param_7 * pfVar1[4] + param_6;
        auVar99._20_4_ = param_7 * pfVar1[5] + param_6;
        auVar99._24_4_ = param_7 * pfVar1[6] + param_6;
        auVar99._28_4_ = param_7 * pfVar1[7] + param_6;
        pfVar1 = (float *)(param_5 + (uVar21 & 0xffffffff));
        auVar39._0_4_ = param_9 * *pfVar1 + param_8;
        auVar39._4_4_ = param_9 * pfVar1[1] + param_8;
        auVar39._8_4_ = param_9 * pfVar1[2] + param_8;
        auVar39._12_4_ = param_9 * pfVar1[3] + param_8;
        auVar39._16_4_ = param_9 * pfVar1[4] + param_8;
        auVar39._20_4_ = param_9 * pfVar1[5] + param_8;
        auVar39._24_4_ = param_9 * pfVar1[6] + param_8;
        auVar39._28_4_ = param_9 * pfVar1[7] + param_8;
        auVar62._0_4_ = -(auVar52._0_4_ * auVar99._0_4_) + auVar85._0_4_;
        auVar62._4_4_ = -(auVar52._4_4_ * auVar99._4_4_) + auVar85._4_4_;
        auVar62._8_4_ = -(auVar52._8_4_ * auVar99._8_4_) + auVar85._8_4_;
        auVar62._12_4_ = -(auVar52._12_4_ * auVar99._12_4_) + auVar85._12_4_;
        auVar62._16_4_ = -(auVar74._0_4_ * auVar99._16_4_) + auVar66._0_4_;
        auVar62._20_4_ = -(auVar74._4_4_ * auVar99._20_4_) + auVar66._4_4_;
        auVar62._24_4_ = -(auVar74._8_4_ * auVar99._24_4_) + auVar66._8_4_;
        auVar62._28_4_ = -(auVar74._12_4_ * auVar99._28_4_) + auVar66._12_4_;
        auVar22._0_4_ = -(auVar45._0_4_ * auVar99._0_4_) + auVar69._0_4_;
        auVar22._4_4_ = -(auVar45._4_4_ * auVar99._4_4_) + auVar69._4_4_;
        auVar22._8_4_ = -(auVar45._8_4_ * auVar99._8_4_) + auVar69._8_4_;
        auVar22._12_4_ = -(auVar45._12_4_ * auVar99._12_4_) + auVar69._12_4_;
        auVar22._16_4_ = -(auVar45._16_4_ * auVar99._16_4_) + auVar69._16_4_;
        auVar22._20_4_ = -(auVar45._20_4_ * auVar99._20_4_) + auVar69._20_4_;
        auVar22._24_4_ = -(auVar45._24_4_ * auVar99._24_4_) + auVar69._24_4_;
        auVar22._28_4_ = -(auVar45._28_4_ * auVar99._28_4_) + auVar69._28_4_;
        auVar77 = vsubps_avx(auVar99,auVar39);
        auVar100._0_4_ = -(auVar23._0_4_ * auVar99._0_4_) + auVar25._0_4_;
        auVar100._4_4_ = -(auVar23._4_4_ * auVar99._4_4_) + auVar25._4_4_;
        auVar100._8_4_ = -(auVar23._8_4_ * auVar99._8_4_) + auVar25._8_4_;
        auVar100._12_4_ = -(auVar23._12_4_ * auVar99._12_4_) + auVar25._12_4_;
        auVar100._16_4_ = -(auVar23._16_4_ * auVar99._16_4_) + auVar25._16_4_;
        auVar100._20_4_ = -(auVar23._20_4_ * auVar99._20_4_) + auVar25._20_4_;
        auVar100._24_4_ = -(auVar23._24_4_ * auVar99._24_4_) + auVar25._24_4_;
        auVar100._28_4_ = -(auVar23._28_4_ * auVar99._28_4_) + auVar25._28_4_;
        auVar40 = vsubps_avx(auVar44,auVar62);
        auVar65 = vsubps_avx(auVar65,auVar22);
        auVar71 = vsubps_avx(auVar71,auVar100);
        fVar4 = auVar65._0_4_;
        fVar5 = auVar65._4_4_;
        fVar6 = auVar65._8_4_;
        fVar7 = auVar65._12_4_;
        fVar8 = auVar65._16_4_;
        fVar9 = auVar65._20_4_;
        fVar10 = auVar65._24_4_;
        fVar11 = auVar65._28_4_;
        fVar49 = auVar40._0_4_;
        fVar54 = auVar40._4_4_;
        fVar55 = auVar40._8_4_;
        fVar56 = auVar40._12_4_;
        fVar57 = auVar40._16_4_;
        fVar59 = auVar40._20_4_;
        fVar60 = auVar40._24_4_;
        fVar61 = auVar40._28_4_;
        fVar76 = auVar71._0_4_;
        auVar65._0_4_ = fVar76 * fVar76 + fVar49 * fVar49 + fVar4 * fVar4;
        fVar78 = auVar71._4_4_;
        auVar65._4_4_ = fVar78 * fVar78 + fVar54 * fVar54 + fVar5 * fVar5;
        fVar79 = auVar71._8_4_;
        auVar65._8_4_ = fVar79 * fVar79 + fVar55 * fVar55 + fVar6 * fVar6;
        fVar80 = auVar71._12_4_;
        auVar65._12_4_ = fVar80 * fVar80 + fVar56 * fVar56 + fVar7 * fVar7;
        fVar81 = auVar71._16_4_;
        auVar65._16_4_ = fVar81 * fVar81 + fVar57 * fVar57 + fVar8 * fVar8;
        fVar82 = auVar71._20_4_;
        auVar65._20_4_ = fVar82 * fVar82 + fVar59 * fVar59 + fVar9 * fVar9;
        fVar83 = auVar71._24_4_;
        auVar65._24_4_ = fVar83 * fVar83 + fVar60 * fVar60 + fVar10 * fVar10;
        fVar84 = auVar71._28_4_;
        auVar65._28_4_ = fVar84 * fVar84 + fVar61 * fVar61 + fVar11 * fVar11;
        auVar40 = vsqrtps_avx(auVar65);
        auVar40 = vdivps_avx(auVar39,auVar40);
        fVar28 = auVar40._0_4_;
        fVar32 = auVar40._4_4_;
        fVar33 = auVar40._8_4_;
        fVar34 = auVar40._12_4_;
        fVar35 = auVar40._16_4_;
        fVar36 = auVar40._20_4_;
        fVar37 = auVar40._24_4_;
        fVar38 = auVar40._28_4_;
        fVar98 = auVar77._0_4_;
        auVar71._0_4_ = -(fVar98 * auVar52._0_4_) + auVar85._0_4_;
        fVar101 = auVar77._4_4_;
        auVar71._4_4_ = -(fVar101 * auVar52._4_4_) + auVar85._4_4_;
        fVar102 = auVar77._8_4_;
        auVar71._8_4_ = -(fVar102 * auVar52._8_4_) + auVar85._8_4_;
        fVar103 = auVar77._12_4_;
        auVar71._12_4_ = -(fVar103 * auVar52._12_4_) + auVar85._12_4_;
        fVar104 = auVar77._16_4_;
        auVar71._16_4_ = -(fVar104 * auVar74._0_4_) + auVar66._0_4_;
        fVar105 = auVar77._20_4_;
        auVar71._20_4_ = -(fVar105 * auVar74._4_4_) + auVar66._4_4_;
        fVar106 = auVar77._24_4_;
        auVar71._24_4_ = -(fVar106 * auVar74._8_4_) + auVar66._8_4_;
        fVar107 = auVar77._28_4_;
        auVar71._28_4_ = -(fVar107 * auVar74._12_4_) + auVar66._12_4_;
        auVar40._0_4_ = auVar39._0_4_ * auVar39._0_4_;
        auVar40._4_4_ = auVar39._4_4_ * auVar39._4_4_;
        auVar40._8_4_ = auVar39._8_4_ * auVar39._8_4_;
        auVar40._12_4_ = auVar39._12_4_ * auVar39._12_4_;
        auVar40._16_4_ = auVar39._16_4_ * auVar39._16_4_;
        auVar40._20_4_ = auVar39._20_4_ * auVar39._20_4_;
        auVar40._24_4_ = auVar39._24_4_ * auVar39._24_4_;
        auVar40._28_4_ = auVar39._28_4_ * auVar39._28_4_;
        auVar40 = vcmpps_avx(auVar65,auVar40,1);
        auVar85._4_4_ = __real_322bcc77;
        auVar85._0_4_ = __real_322bcc77;
        auVar85._8_4_ = __real_322bcc77;
        auVar85._12_4_ = __real_322bcc77;
        auVar85._16_4_ = __real_322bcc77;
        auVar85._20_4_ = __real_322bcc77;
        auVar85._24_4_ = __real_322bcc77;
        auVar85._28_4_ = __real_322bcc77;
        auVar85 = vcmpps_avx(auVar65,auVar85,1);
        uVar86 = auVar40._0_4_;
        auVar66._0_4_ = uVar86 & (uint)(fVar28 * fVar49 + auVar62._0_4_);
        uVar89 = auVar40._4_4_;
        auVar66._4_4_ = uVar89 & (uint)(fVar32 * fVar54 + auVar62._4_4_);
        uVar90 = auVar40._8_4_;
        auVar66._8_4_ = uVar90 & (uint)(fVar33 * fVar55 + auVar62._8_4_);
        uVar91 = auVar40._12_4_;
        auVar66._12_4_ = uVar91 & (uint)(fVar34 * fVar56 + auVar62._12_4_);
        uVar92 = auVar40._16_4_;
        auVar66._16_4_ = uVar92 & (uint)(fVar35 * fVar57 + auVar62._16_4_);
        uVar94 = auVar40._20_4_;
        auVar66._20_4_ = uVar94 & (uint)(fVar36 * fVar59 + auVar62._20_4_);
        uVar95 = auVar40._24_4_;
        auVar66._24_4_ = uVar95 & (uint)(fVar37 * fVar60 + auVar62._24_4_);
        uVar96 = auVar40._28_4_;
        auVar66._28_4_ = uVar96 & (uint)(fVar38 * fVar61 + auVar62._28_4_);
        auVar40 = vblendvps_avx(auVar66,auVar71,auVar85);
        auVar73 = ZEXT1264(ZEXT412(0)) << 0x20;
        auVar66 = vcmpps_avx(ZEXT1232(ZEXT412(0)) << 0x20,auVar40,4);
        auVar52._0_4_ = auVar66._0_4_ & auVar29._0_4_;
        auVar52._4_4_ = auVar66._4_4_ & auVar29._4_4_;
        auVar52._8_4_ = auVar66._8_4_ & auVar29._8_4_;
        auVar52._12_4_ = auVar66._12_4_ & auVar29._12_4_;
        auVar52._16_4_ = auVar66._16_4_ & auVar29._16_4_;
        auVar52._20_4_ = auVar66._20_4_ & auVar29._20_4_;
        auVar52._24_4_ = auVar66._24_4_ & auVar29._24_4_;
        auVar52._28_4_ = auVar66._28_4_ & auVar29._28_4_;
        uVar19 = vmovmskps_avx(auVar52);
        if (uVar19 != 0) {
          auVar74._0_4_ = -(fVar98 * auVar45._0_4_) + auVar69._0_4_;
          auVar74._4_4_ = -(fVar101 * auVar45._4_4_) + auVar69._4_4_;
          auVar74._8_4_ = -(fVar102 * auVar45._8_4_) + auVar69._8_4_;
          auVar74._12_4_ = -(fVar103 * auVar45._12_4_) + auVar69._12_4_;
          auVar74._16_4_ = -(fVar104 * auVar45._16_4_) + auVar69._16_4_;
          auVar74._20_4_ = -(fVar105 * auVar45._20_4_) + auVar69._20_4_;
          auVar74._24_4_ = -(fVar106 * auVar45._24_4_) + auVar69._24_4_;
          auVar74._28_4_ = -(fVar107 * auVar45._28_4_) + auVar69._28_4_;
          auVar77._0_4_ = -(fVar98 * auVar23._0_4_) + auVar25._0_4_;
          auVar77._4_4_ = -(fVar101 * auVar23._4_4_) + auVar25._4_4_;
          auVar77._8_4_ = -(fVar102 * auVar23._8_4_) + auVar25._8_4_;
          auVar77._12_4_ = -(fVar103 * auVar23._12_4_) + auVar25._12_4_;
          auVar77._16_4_ = -(fVar104 * auVar23._16_4_) + auVar25._16_4_;
          auVar77._20_4_ = -(fVar105 * auVar23._20_4_) + auVar25._20_4_;
          auVar77._24_4_ = -(fVar106 * auVar23._24_4_) + auVar25._24_4_;
          auVar77._28_4_ = -(fVar107 * auVar23._28_4_) + auVar25._28_4_;
          auVar29._0_4_ = uVar86 & (uint)(fVar28 * fVar4 + auVar22._0_4_);
          auVar29._4_4_ = uVar89 & (uint)(fVar32 * fVar5 + auVar22._4_4_);
          auVar29._8_4_ = uVar90 & (uint)(fVar33 * fVar6 + auVar22._8_4_);
          auVar29._12_4_ = uVar91 & (uint)(fVar34 * fVar7 + auVar22._12_4_);
          auVar29._16_4_ = uVar92 & (uint)(fVar35 * fVar8 + auVar22._16_4_);
          auVar29._20_4_ = uVar94 & (uint)(fVar36 * fVar9 + auVar22._20_4_);
          auVar29._24_4_ = uVar95 & (uint)(fVar37 * fVar10 + auVar22._24_4_);
          auVar29._28_4_ = uVar96 & (uint)(fVar38 * fVar11 + auVar22._28_4_);
          auVar29 = vblendvps_avx(auVar29,auVar74,auVar85);
          auVar23._0_4_ = uVar86 & (uint)(fVar28 * fVar76 + auVar100._0_4_);
          auVar23._4_4_ = uVar89 & (uint)(fVar32 * fVar78 + auVar100._4_4_);
          auVar23._8_4_ = uVar90 & (uint)(fVar33 * fVar79 + auVar100._8_4_);
          auVar23._12_4_ = uVar91 & (uint)(fVar34 * fVar80 + auVar100._12_4_);
          auVar23._16_4_ = uVar92 & (uint)(fVar35 * fVar81 + auVar100._16_4_);
          auVar23._20_4_ = uVar94 & (uint)(fVar36 * fVar82 + auVar100._20_4_);
          auVar23._24_4_ = uVar95 & (uint)(fVar37 * fVar83 + auVar100._24_4_);
          auVar23._28_4_ = uVar96 & (uint)(fVar38 * fVar84 + auVar100._28_4_);
          auVar23 = vblendvps_avx(auVar23,auVar77,auVar85);
          cVar12 = (char)uVar19;
          if (cVar12 == -1) {
            auVar24 = vunpcklps_avx(auVar40,auVar29);
            auVar41 = vunpcklps_avx(auVar23,auVar43);
            auVar30 = vunpcklpd_avx(auVar24,auVar41);
            auVar24 = vunpckhpd_avx(auVar24,auVar41);
            auVar41 = vunpckhps_avx(auVar40,auVar29);
            auVar51 = vunpckhps_avx(auVar23,auVar43);
            auVar29 = vunpcklpd_avx(auVar41,auVar51);
            auVar43._16_16_ = auVar24._0_16_;
            auVar43._0_16_ = auVar30._0_16_;
            *(undefined1 (*) [32])(lVar16 + uVar21 * 4) = auVar43;
            auVar41 = vunpckhpd_avx(auVar41,auVar51);
            auVar51._16_16_ = auVar41._0_16_;
            auVar51._0_16_ = auVar29._0_16_;
            *(undefined1 (*) [32])(lVar16 + 0x20 + uVar21 * 4) = auVar51;
            auVar24 = vperm2f128_avx(auVar30,auVar24,0x31);
            *(undefined1 (*) [32])(lVar16 + 0x40 + uVar21 * 4) = auVar24;
            auVar24 = vperm2f128_avx(auVar29,auVar41,0x31);
            *(undefined1 (*) [32])(lVar16 + 0x60 + uVar21 * 4) = auVar24;
          }
          else {
            auVar64 = auVar40._0_16_;
            auVar68 = auVar40._16_16_;
            auVar50 = auVar29._0_16_;
            auVar58 = auVar29._16_16_;
            auVar42 = auVar23._0_16_;
            auVar48 = auVar23._16_16_;
            if ((uVar19 & 1) != 0) {
              *(int *)(lVar16 + uVar21 * 4) = auVar40._0_4_;
            }
            if ((uVar19 & 2) != 0) {
              uVar3 = vextractps_avx(auVar64,1);
              *(undefined4 *)(lVar16 + 0x10 + uVar21 * 4) = uVar3;
            }
            if ((uVar19 & 4) != 0) {
              uVar3 = vextractps_avx(auVar64,2);
              *(undefined4 *)(lVar16 + 0x20 + uVar21 * 4) = uVar3;
            }
            if ((uVar19 & 8) != 0) {
              uVar3 = vextractps_avx(auVar64,3);
              *(undefined4 *)(lVar16 + 0x30 + uVar21 * 4) = uVar3;
            }
            if ((uVar19 & 0x10) != 0) {
              *(int *)(lVar16 + 0x40 + uVar21 * 4) = auVar40._16_4_;
            }
            if ((uVar19 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar68,1);
              *(undefined4 *)(lVar16 + 0x50 + uVar21 * 4) = uVar3;
            }
            if ((uVar19 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar68,2);
              *(undefined4 *)(lVar16 + 0x60 + uVar21 * 4) = uVar3;
            }
            if (cVar12 < '\0') {
              uVar3 = vextractps_avx(auVar68,3);
              *(undefined4 *)(lVar16 + 0x70 + uVar21 * 4) = uVar3;
            }
            if ((uVar19 & 1) != 0) {
              *(int *)(lVar16 + 4 + uVar21 * 4) = auVar29._0_4_;
            }
            if ((uVar19 & 2) != 0) {
              uVar3 = vextractps_avx(auVar50,1);
              *(undefined4 *)(lVar16 + 0x14 + uVar21 * 4) = uVar3;
            }
            if ((uVar19 & 4) != 0) {
              uVar3 = vextractps_avx(auVar50,2);
              *(undefined4 *)(lVar16 + 0x24 + uVar21 * 4) = uVar3;
            }
            if ((uVar19 & 8) != 0) {
              uVar3 = vextractps_avx(auVar50,3);
              *(undefined4 *)(lVar16 + 0x34 + uVar21 * 4) = uVar3;
            }
            if ((uVar19 & 0x10) != 0) {
              *(int *)(lVar16 + 0x44 + uVar21 * 4) = auVar29._16_4_;
            }
            if ((uVar19 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar58,1);
              *(undefined4 *)(lVar16 + 0x54 + uVar21 * 4) = uVar3;
            }
            if ((uVar19 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar58,2);
              *(undefined4 *)(lVar16 + 100 + uVar21 * 4) = uVar3;
            }
            if (cVar12 < '\0') {
              uVar3 = vextractps_avx(auVar58,3);
              *(undefined4 *)(lVar16 + 0x74 + uVar21 * 4) = uVar3;
            }
            if ((uVar19 & 1) != 0) {
              *(int *)(lVar16 + 8 + uVar21 * 4) = auVar23._0_4_;
            }
            if ((uVar19 & 2) != 0) {
              uVar3 = vextractps_avx(auVar42,1);
              *(undefined4 *)(lVar16 + 0x18 + uVar21 * 4) = uVar3;
            }
            if ((uVar19 & 4) != 0) {
              uVar3 = vextractps_avx(auVar42,2);
              *(undefined4 *)(lVar16 + 0x28 + uVar21 * 4) = uVar3;
            }
            if ((uVar19 & 8) != 0) {
              uVar3 = vextractps_avx(auVar42,3);
              *(undefined4 *)(lVar16 + 0x38 + uVar21 * 4) = uVar3;
            }
            if ((uVar19 & 0x10) != 0) {
              *(int *)(lVar16 + 0x48 + uVar21 * 4) = auVar23._16_4_;
            }
            if ((uVar19 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar48,1);
              *(undefined4 *)(lVar16 + 0x58 + uVar21 * 4) = uVar3;
            }
            if ((uVar19 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar48,2);
              *(undefined4 *)(lVar16 + 0x68 + uVar21 * 4) = uVar3;
            }
            if (cVar12 < '\0') {
              uVar3 = vextractps_avx(auVar48,3);
              *(undefined4 *)(lVar16 + 0x78 + uVar21 * 4) = uVar3;
            }
            if ((uVar19 & 1) != 0) {
              uVar3 = vextractps_avx(auVar24._0_16_,3);
              *(undefined4 *)(lVar16 + 0xc + uVar21 * 4) = uVar3;
            }
            if ((uVar19 & 2) != 0) {
              uVar3 = vextractps_avx(auVar24._16_16_,3);
              *(undefined4 *)(lVar16 + 0x1c + uVar21 * 4) = uVar3;
            }
            if ((uVar19 & 4) != 0) {
              uVar3 = vextractps_avx(auVar41._0_16_,3);
              *(undefined4 *)(lVar16 + 0x2c + uVar21 * 4) = uVar3;
            }
            if ((uVar19 & 8) != 0) {
              uVar3 = vextractps_avx(auVar41._16_16_,3);
              *(undefined4 *)(lVar16 + 0x3c + uVar21 * 4) = uVar3;
            }
            if ((uVar19 & 0x10) != 0) {
              uVar3 = vextractps_avx(auVar51._0_16_,3);
              *(undefined4 *)(lVar16 + 0x4c + uVar21 * 4) = uVar3;
            }
            if ((uVar19 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar51._16_16_,3);
              *(undefined4 *)(lVar16 + 0x5c + uVar21 * 4) = uVar3;
            }
            if ((uVar19 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar30._0_16_,3);
              *(undefined4 *)(lVar16 + 0x6c + uVar21 * 4) = uVar3;
            }
            if (cVar12 < '\0') {
              uVar3 = vextractps_avx(auVar30._16_16_,3);
              *(undefined4 *)(lVar16 + 0x7c + uVar21 * 4) = uVar3;
            }
          }
        }
      }
      uVar18 = uVar18 + 8;
      uVar21 = uVar21 + 0x20;
      lVar20 = lVar20 + 0x60;
    } while (uVar18 < (uVar13 & 0xfffffff8));
    if ((int)param_11 <= (int)uVar18) {
      return;
    }
  }
  iVar17 = (int)uVar18;
  auVar24._4_4_ = iVar17;
  auVar24._0_4_ = iVar17;
  auVar24._8_4_ = iVar17;
  auVar24._12_4_ = iVar17;
  auVar24._16_4_ = iVar17;
  auVar24._20_4_ = iVar17;
  auVar24._24_4_ = iVar17;
  auVar24._28_4_ = iVar17;
  auVar24 = vpor_avx2(auVar24,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar41._4_4_ = param_11;
  auVar41._0_4_ = param_11;
  auVar41._8_4_ = param_11;
  auVar41._12_4_ = param_11;
  auVar41._16_4_ = param_11;
  auVar41._20_4_ = param_11;
  auVar41._24_4_ = param_11;
  auVar41._28_4_ = param_11;
  auVar24 = vpcmpgtd_avx2(auVar41,auVar24);
  lVar20 = (longlong)(param_10 + iVar17);
  pauVar14 = (undefined1 (*) [32])(param_1 + lVar20 * 0x10);
  iVar15 = vmovmskps_avx(auVar24);
  if (iVar15 == 0xff) {
    auVar51 = vperm2f128_avx(*pauVar14,pauVar14[2],0x20);
    auVar30 = vperm2f128_avx(*pauVar14,pauVar14[2],0x31);
    auVar29 = vperm2f128_avx(pauVar14[1],pauVar14[3],0x20);
    auVar23 = vperm2f128_avx(pauVar14[1],pauVar14[3],0x31);
    auVar41 = vunpcklps_avx(auVar51,auVar30);
    auVar51 = vunpckhps_avx(auVar51,auVar30);
    auVar43 = vunpcklps_avx(auVar29,auVar23);
    auVar30 = vunpckhps_avx(auVar29,auVar23);
    auVar29 = vunpcklpd_avx(auVar41,auVar43);
    auVar41 = vunpckhpd_avx(auVar41,auVar43);
    auVar43 = vunpcklpd_avx(auVar51,auVar30);
    auVar51 = vunpckhpd_avx(auVar51,auVar30);
  }
  else {
    auVar29 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar24);
    auVar41 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar24);
    auVar43 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar24);
    auVar51 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar24);
  }
  auVar30 = vmaskmovps_avx(auVar24,auVar29);
  auVar41 = vmaskmovps_avx(auVar24,auVar41);
  auVar29 = vmaskmovps_avx(auVar24,auVar43);
  auVar43 = vcmpps_avx(auVar51,ZEXT832(0) << 0x20,4);
  auVar43 = auVar24 & auVar43;
  if ((((((((SUB321(auVar43 >> 0x1f,0) & 1) != 0 || (SUB321(auVar43 >> 0x3f,0) & 1) != 0) ||
          (SUB321(auVar43 >> 0x5f,0) & 1) != 0) || SUB321(auVar43 >> 0x7f,0) != '\0') ||
        (SUB321(auVar43 >> 0x9f,0) & 1) != 0) || SUB321(auVar43 >> 0xbf,0) != '\0') ||
      (SUB321(auVar43 >> 0xdf,0) & 1) != 0) || auVar43[0x1f] < '\0') {
    pauVar2 = (undefined1 (*) [32])(param_2 + lVar20 * 0xc);
    if ((char)iVar15 == -1) {
      auVar43 = pauVar2[1];
      auVar23 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar43);
      auVar40 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,*pauVar2);
      auVar23 = vblendps_avx(auVar40,auVar23,0x88);
      auVar40 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar43);
      auVar85 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,pauVar2[2]);
      auVar40 = vblendps_avx(auVar85,auVar40,0x13);
      auVar44._16_16_ = auVar40._0_16_;
      auVar44._0_16_ = auVar23._0_16_;
      auVar52 = vperm2f128_avx(auVar23,auVar40,0x31);
      auVar43 = vblendps_avx(auVar43,*pauVar2,0x24);
      auVar43 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar43);
      auVar23 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,pauVar2[2]);
      auVar85 = vblendps_avx(auVar43,auVar23,0xe0);
      auVar43 = *(undefined1 (*) [32])(param_3 + lVar20 * 0xc);
      auVar23 = *(undefined1 (*) [32])(param_3 + 0x20 + lVar20 * 0xc);
      auVar40 = *(undefined1 (*) [32])(param_3 + 0x40 + lVar20 * 0xc);
      auVar66 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar23);
      auVar25 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar43);
      auVar66 = vblendps_avx(auVar25,auVar66,0x88);
      auVar25 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar23);
      auVar74 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,auVar40);
      auVar25 = vblendps_avx(auVar74,auVar25,0x13);
      auVar69._16_16_ = auVar25._0_16_;
      auVar69._0_16_ = auVar66._0_16_;
      auVar66 = vperm2f128_avx(auVar66,auVar25,0x31);
      auVar43 = vblendps_avx(auVar23,auVar43,0x24);
      auVar43 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar43);
      auVar23 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,auVar40);
      auVar43 = vblendps_avx(auVar43,auVar23,0xe0);
    }
    else {
      auVar44 = vgatherdps(ZEXT832(0) << 0x20,auVar24);
      auVar52 = vgatherdps(ZEXT832(0) << 0x20,auVar24);
      auVar85 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar24);
      auVar69 = vgatherdps(ZEXT832(0),auVar24);
      auVar66 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar24);
      auVar43 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar24);
    }
    auVar23 = vmaskmovps_avx(auVar24,*(undefined1 (*) [32])(param_4 + (iVar17 << 2)));
    auVar108._0_4_ = param_7 * auVar23._0_4_ + param_6;
    auVar108._4_4_ = param_7 * auVar23._4_4_ + param_6;
    auVar108._8_4_ = param_7 * auVar23._8_4_ + param_6;
    auVar108._12_4_ = param_7 * auVar23._12_4_ + param_6;
    auVar108._16_4_ = param_7 * auVar23._16_4_ + param_6;
    auVar108._20_4_ = param_7 * auVar23._20_4_ + param_6;
    auVar108._24_4_ = param_7 * auVar23._24_4_ + param_6;
    auVar108._28_4_ = param_7 * auVar23._28_4_ + param_6;
    auVar23 = vmaskmovps_avx(auVar24,*(undefined1 (*) [32])(param_5 + (iVar17 << 2)));
    auVar97._0_4_ = param_9 * auVar23._0_4_ + param_8;
    auVar97._4_4_ = param_9 * auVar23._4_4_ + param_8;
    auVar97._8_4_ = param_9 * auVar23._8_4_ + param_8;
    auVar97._12_4_ = param_9 * auVar23._12_4_ + param_8;
    auVar97._16_4_ = param_9 * auVar23._16_4_ + param_8;
    auVar97._20_4_ = param_9 * auVar23._20_4_ + param_8;
    auVar97._24_4_ = param_9 * auVar23._24_4_ + param_8;
    auVar97._28_4_ = param_9 * auVar23._28_4_ + param_8;
    auVar88._0_4_ = -(auVar69._0_4_ * auVar108._0_4_) + auVar44._0_4_;
    auVar88._4_4_ = -(auVar69._4_4_ * auVar108._4_4_) + auVar44._4_4_;
    auVar88._8_4_ = -(auVar69._8_4_ * auVar108._8_4_) + auVar44._8_4_;
    auVar88._12_4_ = -(auVar69._12_4_ * auVar108._12_4_) + auVar44._12_4_;
    auVar88._16_4_ = -(auVar69._16_4_ * auVar108._16_4_) + auVar44._16_4_;
    auVar88._20_4_ = -(auVar69._20_4_ * auVar108._20_4_) + auVar44._20_4_;
    auVar88._24_4_ = -(auVar69._24_4_ * auVar108._24_4_) + auVar44._24_4_;
    auVar88._28_4_ = -(auVar69._28_4_ * auVar108._28_4_) + auVar44._28_4_;
    auVar72._0_4_ = -(auVar66._0_4_ * auVar108._0_4_) + auVar52._0_4_;
    auVar72._4_4_ = -(auVar66._4_4_ * auVar108._4_4_) + auVar52._4_4_;
    auVar72._8_4_ = -(auVar66._8_4_ * auVar108._8_4_) + auVar52._8_4_;
    auVar72._12_4_ = -(auVar66._12_4_ * auVar108._12_4_) + auVar52._12_4_;
    auVar72._16_4_ = -(auVar66._16_4_ * auVar108._16_4_) + auVar52._16_4_;
    auVar72._20_4_ = -(auVar66._20_4_ * auVar108._20_4_) + auVar52._20_4_;
    auVar72._24_4_ = -(auVar66._24_4_ * auVar108._24_4_) + auVar52._24_4_;
    auVar72._28_4_ = -(auVar66._28_4_ * auVar108._28_4_) + auVar52._28_4_;
    auVar75._0_4_ = -(auVar43._0_4_ * auVar108._0_4_) + auVar85._0_4_;
    auVar75._4_4_ = -(auVar43._4_4_ * auVar108._4_4_) + auVar85._4_4_;
    auVar75._8_4_ = -(auVar43._8_4_ * auVar108._8_4_) + auVar85._8_4_;
    auVar75._12_4_ = -(auVar43._12_4_ * auVar108._12_4_) + auVar85._12_4_;
    auVar75._16_4_ = -(auVar43._16_4_ * auVar108._16_4_) + auVar85._16_4_;
    auVar75._20_4_ = -(auVar43._20_4_ * auVar108._20_4_) + auVar85._20_4_;
    auVar75._24_4_ = -(auVar43._24_4_ * auVar108._24_4_) + auVar85._24_4_;
    auVar75._28_4_ = -(auVar43._28_4_ * auVar108._28_4_) + auVar85._28_4_;
    auVar30 = vsubps_avx(auVar30,auVar88);
    auVar41 = vsubps_avx(auVar41,auVar72);
    auVar29 = vsubps_avx(auVar29,auVar75);
    fVar4 = auVar41._0_4_;
    fVar5 = auVar41._4_4_;
    fVar6 = auVar41._8_4_;
    fVar7 = auVar41._12_4_;
    fVar8 = auVar41._16_4_;
    fVar9 = auVar41._20_4_;
    fVar10 = auVar41._24_4_;
    fVar11 = auVar41._28_4_;
    fVar28 = auVar30._0_4_;
    fVar33 = auVar30._4_4_;
    fVar35 = auVar30._8_4_;
    fVar37 = auVar30._12_4_;
    fVar49 = auVar30._16_4_;
    fVar55 = auVar30._20_4_;
    fVar57 = auVar30._24_4_;
    fVar60 = auVar30._28_4_;
    fVar76 = auVar29._0_4_;
    auVar30._0_4_ = fVar76 * fVar76 + fVar28 * fVar28 + fVar4 * fVar4;
    fVar78 = auVar29._4_4_;
    auVar30._4_4_ = fVar78 * fVar78 + fVar33 * fVar33 + fVar5 * fVar5;
    fVar79 = auVar29._8_4_;
    auVar30._8_4_ = fVar79 * fVar79 + fVar35 * fVar35 + fVar6 * fVar6;
    fVar80 = auVar29._12_4_;
    auVar30._12_4_ = fVar80 * fVar80 + fVar37 * fVar37 + fVar7 * fVar7;
    fVar81 = auVar29._16_4_;
    auVar30._16_4_ = fVar81 * fVar81 + fVar49 * fVar49 + fVar8 * fVar8;
    fVar82 = auVar29._20_4_;
    auVar30._20_4_ = fVar82 * fVar82 + fVar55 * fVar55 + fVar9 * fVar9;
    fVar83 = auVar29._24_4_;
    auVar30._24_4_ = fVar83 * fVar83 + fVar57 * fVar57 + fVar10 * fVar10;
    fVar84 = auVar29._28_4_;
    auVar30._28_4_ = fVar84 * fVar84 + fVar60 * fVar60 + fVar11 * fVar11;
    auVar41 = vsqrtps_avx(auVar30);
    auVar41 = vdivps_avx(auVar97,auVar41);
    fVar98 = auVar41._0_4_;
    fVar101 = auVar41._4_4_;
    fVar102 = auVar41._8_4_;
    fVar103 = auVar41._12_4_;
    fVar104 = auVar41._16_4_;
    fVar105 = auVar41._20_4_;
    fVar106 = auVar41._24_4_;
    fVar107 = auVar41._28_4_;
    auVar41 = vsubps_avx(auVar108,auVar97);
    fVar32 = auVar41._0_4_;
    auVar70._0_4_ = -(fVar32 * auVar69._0_4_) + auVar44._0_4_;
    fVar34 = auVar41._4_4_;
    auVar70._4_4_ = -(fVar34 * auVar69._4_4_) + auVar44._4_4_;
    fVar36 = auVar41._8_4_;
    auVar70._8_4_ = -(fVar36 * auVar69._8_4_) + auVar44._8_4_;
    fVar38 = auVar41._12_4_;
    auVar70._12_4_ = -(fVar38 * auVar69._12_4_) + auVar44._12_4_;
    fVar54 = auVar41._16_4_;
    auVar70._16_4_ = -(fVar54 * auVar69._16_4_) + auVar44._16_4_;
    fVar56 = auVar41._20_4_;
    auVar70._20_4_ = -(fVar56 * auVar69._20_4_) + auVar44._20_4_;
    fVar59 = auVar41._24_4_;
    auVar70._24_4_ = -(fVar59 * auVar69._24_4_) + auVar44._24_4_;
    fVar61 = auVar41._28_4_;
    auVar70._28_4_ = -(fVar61 * auVar69._28_4_) + auVar44._28_4_;
    auVar45._0_4_ = auVar97._0_4_ * auVar97._0_4_;
    auVar45._4_4_ = auVar97._4_4_ * auVar97._4_4_;
    auVar45._8_4_ = auVar97._8_4_ * auVar97._8_4_;
    auVar45._12_4_ = auVar97._12_4_ * auVar97._12_4_;
    auVar45._16_4_ = auVar97._16_4_ * auVar97._16_4_;
    auVar45._20_4_ = auVar97._20_4_ * auVar97._20_4_;
    auVar45._24_4_ = auVar97._24_4_ * auVar97._24_4_;
    auVar45._28_4_ = auVar97._28_4_ * auVar97._28_4_;
    auVar41 = vcmpps_avx(auVar30,auVar45,1);
    auVar46._4_4_ = __real_322bcc77;
    auVar46._0_4_ = __real_322bcc77;
    auVar46._8_4_ = __real_322bcc77;
    auVar46._12_4_ = __real_322bcc77;
    auVar46._16_4_ = __real_322bcc77;
    auVar46._20_4_ = __real_322bcc77;
    auVar46._24_4_ = __real_322bcc77;
    auVar46._28_4_ = __real_322bcc77;
    auVar30 = vcmpps_avx(auVar30,auVar46,1);
    uVar19 = auVar41._0_4_;
    auVar47._0_4_ = uVar19 & (uint)(fVar98 * fVar28 + auVar88._0_4_);
    uVar86 = auVar41._4_4_;
    auVar47._4_4_ = uVar86 & (uint)(fVar101 * fVar33 + auVar88._4_4_);
    uVar89 = auVar41._8_4_;
    auVar47._8_4_ = uVar89 & (uint)(fVar102 * fVar35 + auVar88._8_4_);
    uVar90 = auVar41._12_4_;
    auVar47._12_4_ = uVar90 & (uint)(fVar103 * fVar37 + auVar88._12_4_);
    uVar91 = auVar41._16_4_;
    auVar47._16_4_ = uVar91 & (uint)(fVar104 * fVar49 + auVar88._16_4_);
    uVar92 = auVar41._20_4_;
    auVar47._20_4_ = uVar92 & (uint)(fVar105 * fVar55 + auVar88._20_4_);
    uVar94 = auVar41._24_4_;
    auVar47._24_4_ = uVar94 & (uint)(fVar106 * fVar57 + auVar88._24_4_);
    uVar95 = auVar41._28_4_;
    auVar47._28_4_ = uVar95 & (uint)(fVar107 * fVar60 + auVar88._28_4_);
    auVar41 = vblendvps_avx(auVar47,auVar70,auVar30);
    auVar29 = vcmpps_avx(auVar51,ZEXT432(0) << 0x20,4);
    auVar23 = vcmpps_avx(auVar41,ZEXT432(0) << 0x20,4);
    auVar25._0_4_ = auVar23._0_4_ & auVar29._0_4_ & auVar24._0_4_;
    auVar25._4_4_ = auVar23._4_4_ & auVar29._4_4_ & auVar24._4_4_;
    auVar25._8_4_ = auVar23._8_4_ & auVar29._8_4_ & auVar24._8_4_;
    auVar25._12_4_ = auVar23._12_4_ & auVar29._12_4_ & auVar24._12_4_;
    auVar25._16_4_ = auVar23._16_4_ & auVar29._16_4_ & auVar24._16_4_;
    auVar25._20_4_ = auVar23._20_4_ & auVar29._20_4_ & auVar24._20_4_;
    auVar25._24_4_ = auVar23._24_4_ & auVar29._24_4_ & auVar24._24_4_;
    auVar25._28_4_ = auVar23._28_4_ & auVar29._28_4_ & auVar24._28_4_;
    uVar13 = vmovmskps_avx(auVar25);
    if (uVar13 != 0) {
      auVar67._0_4_ = -(fVar32 * auVar66._0_4_) + auVar52._0_4_;
      auVar67._4_4_ = -(fVar34 * auVar66._4_4_) + auVar52._4_4_;
      auVar67._8_4_ = -(fVar36 * auVar66._8_4_) + auVar52._8_4_;
      auVar67._12_4_ = -(fVar38 * auVar66._12_4_) + auVar52._12_4_;
      auVar67._16_4_ = -(fVar54 * auVar66._16_4_) + auVar52._16_4_;
      auVar67._20_4_ = -(fVar56 * auVar66._20_4_) + auVar52._20_4_;
      auVar67._24_4_ = -(fVar59 * auVar66._24_4_) + auVar52._24_4_;
      auVar67._28_4_ = -(fVar61 * auVar66._28_4_) + auVar52._28_4_;
      auVar63._0_4_ = -(fVar32 * auVar43._0_4_) + auVar85._0_4_;
      auVar63._4_4_ = -(fVar34 * auVar43._4_4_) + auVar85._4_4_;
      auVar63._8_4_ = -(fVar36 * auVar43._8_4_) + auVar85._8_4_;
      auVar63._12_4_ = -(fVar38 * auVar43._12_4_) + auVar85._12_4_;
      auVar63._16_4_ = -(fVar54 * auVar43._16_4_) + auVar85._16_4_;
      auVar63._20_4_ = -(fVar56 * auVar43._20_4_) + auVar85._20_4_;
      auVar63._24_4_ = -(fVar59 * auVar43._24_4_) + auVar85._24_4_;
      auVar63._28_4_ = -(fVar61 * auVar43._28_4_) + auVar85._28_4_;
      auVar26._0_4_ = uVar19 & (uint)(fVar98 * fVar4 + auVar72._0_4_);
      auVar26._4_4_ = uVar86 & (uint)(fVar101 * fVar5 + auVar72._4_4_);
      auVar26._8_4_ = uVar89 & (uint)(fVar102 * fVar6 + auVar72._8_4_);
      auVar26._12_4_ = uVar90 & (uint)(fVar103 * fVar7 + auVar72._12_4_);
      auVar26._16_4_ = uVar91 & (uint)(fVar104 * fVar8 + auVar72._16_4_);
      auVar26._20_4_ = uVar92 & (uint)(fVar105 * fVar9 + auVar72._20_4_);
      auVar26._24_4_ = uVar94 & (uint)(fVar106 * fVar10 + auVar72._24_4_);
      auVar26._28_4_ = uVar95 & (uint)(fVar107 * fVar11 + auVar72._28_4_);
      auVar24 = vblendvps_avx(auVar26,auVar67,auVar30);
      auVar27._0_4_ = uVar19 & (uint)(fVar98 * fVar76 + auVar75._0_4_);
      auVar27._4_4_ = uVar86 & (uint)(fVar101 * fVar78 + auVar75._4_4_);
      auVar27._8_4_ = uVar89 & (uint)(fVar102 * fVar79 + auVar75._8_4_);
      auVar27._12_4_ = uVar90 & (uint)(fVar103 * fVar80 + auVar75._12_4_);
      auVar27._16_4_ = uVar91 & (uint)(fVar104 * fVar81 + auVar75._16_4_);
      auVar27._20_4_ = uVar92 & (uint)(fVar105 * fVar82 + auVar75._20_4_);
      auVar27._24_4_ = uVar94 & (uint)(fVar106 * fVar83 + auVar75._24_4_);
      auVar27._28_4_ = uVar95 & (uint)(fVar107 * fVar84 + auVar75._28_4_);
      auVar30 = vblendvps_avx(auVar27,auVar63,auVar30);
      cVar12 = (char)uVar13;
      if (cVar12 == -1) {
        auVar29 = vunpcklps_avx(auVar41,auVar24);
        auVar23 = vunpcklps_avx(auVar30,auVar51);
        auVar43 = vunpcklpd_avx(auVar29,auVar23);
        auVar29 = vunpckhpd_avx(auVar29,auVar23);
        auVar24 = vunpckhps_avx(auVar41,auVar24);
        auVar41 = vunpckhps_avx(auVar30,auVar51);
        auVar51 = vunpcklpd_avx(auVar24,auVar41);
        auVar53._16_16_ = auVar29._0_16_;
        auVar53._0_16_ = auVar43._0_16_;
        *pauVar14 = auVar53;
        auVar24 = vunpckhpd_avx(auVar24,auVar41);
        auVar31._16_16_ = auVar24._0_16_;
        auVar31._0_16_ = auVar51._0_16_;
        pauVar14[1] = auVar31;
        auVar41 = vperm2f128_avx(auVar43,auVar29,0x31);
        pauVar14[2] = auVar41;
        auVar24 = vperm2f128_avx(auVar51,auVar24,0x31);
        pauVar14[3] = auVar24;
      }
      else {
        auVar87 = auVar51._0_16_;
        auVar93 = auVar51._16_16_;
        auVar64 = auVar41._0_16_;
        auVar68 = auVar41._16_16_;
        auVar50 = auVar24._0_16_;
        auVar58 = auVar24._16_16_;
        auVar42 = auVar30._0_16_;
        auVar48 = auVar30._16_16_;
        if ((uVar13 & 1) != 0) {
          *(int *)*pauVar14 = auVar41._0_4_;
        }
        if ((uVar13 & 2) != 0) {
          uVar3 = vextractps_avx(auVar64,1);
          *(undefined4 *)(*pauVar14 + 0x10) = uVar3;
        }
        if ((uVar13 & 4) != 0) {
          uVar3 = vextractps_avx(auVar64,2);
          *(undefined4 *)pauVar14[1] = uVar3;
        }
        if ((uVar13 & 8) != 0) {
          uVar3 = vextractps_avx(auVar64,3);
          *(undefined4 *)(pauVar14[1] + 0x10) = uVar3;
        }
        if ((uVar13 & 0x10) != 0) {
          *(int *)pauVar14[2] = auVar41._16_4_;
        }
        if ((uVar13 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar68,1);
          *(undefined4 *)(pauVar14[2] + 0x10) = uVar3;
        }
        if ((uVar13 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar68,2);
          *(undefined4 *)pauVar14[3] = uVar3;
        }
        if (cVar12 < '\0') {
          uVar3 = vextractps_avx(auVar68,3);
          *(undefined4 *)(pauVar14[3] + 0x10) = uVar3;
        }
        if ((uVar13 & 1) != 0) {
          *(int *)(*pauVar14 + 4) = auVar24._0_4_;
        }
        if ((uVar13 & 2) != 0) {
          uVar3 = vextractps_avx(auVar50,1);
          *(undefined4 *)(*pauVar14 + 0x14) = uVar3;
        }
        if ((uVar13 & 4) != 0) {
          uVar3 = vextractps_avx(auVar50,2);
          *(undefined4 *)(pauVar14[1] + 4) = uVar3;
        }
        if ((uVar13 & 8) != 0) {
          uVar3 = vextractps_avx(auVar50,3);
          *(undefined4 *)(pauVar14[1] + 0x14) = uVar3;
        }
        if ((uVar13 & 0x10) != 0) {
          *(int *)(pauVar14[2] + 4) = auVar24._16_4_;
        }
        if ((uVar13 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar58,1);
          *(undefined4 *)(pauVar14[2] + 0x14) = uVar3;
        }
        if ((uVar13 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar58,2);
          *(undefined4 *)(pauVar14[3] + 4) = uVar3;
        }
        if (cVar12 < '\0') {
          uVar3 = vextractps_avx(auVar58,3);
          *(undefined4 *)(pauVar14[3] + 0x14) = uVar3;
        }
        if ((uVar13 & 1) != 0) {
          *(int *)(*pauVar14 + 8) = auVar30._0_4_;
        }
        if ((uVar13 & 2) != 0) {
          uVar3 = vextractps_avx(auVar42,1);
          *(undefined4 *)(*pauVar14 + 0x18) = uVar3;
        }
        if ((uVar13 & 4) != 0) {
          uVar3 = vextractps_avx(auVar42,2);
          *(undefined4 *)(pauVar14[1] + 8) = uVar3;
        }
        if ((uVar13 & 8) != 0) {
          uVar3 = vextractps_avx(auVar42,3);
          *(undefined4 *)(pauVar14[1] + 0x18) = uVar3;
        }
        if ((uVar13 & 0x10) != 0) {
          *(int *)(pauVar14[2] + 8) = auVar30._16_4_;
        }
        if ((uVar13 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar48,1);
          *(undefined4 *)(pauVar14[2] + 0x18) = uVar3;
        }
        if ((uVar13 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar48,2);
          *(undefined4 *)(pauVar14[3] + 8) = uVar3;
        }
        if (cVar12 < '\0') {
          uVar3 = vextractps_avx(auVar48,3);
          *(undefined4 *)(pauVar14[3] + 0x18) = uVar3;
        }
        if ((uVar13 & 1) != 0) {
          *(int *)(*pauVar14 + 0xc) = auVar51._0_4_;
        }
        if ((uVar13 & 2) != 0) {
          uVar3 = vextractps_avx(auVar87,1);
          *(undefined4 *)(*pauVar14 + 0x1c) = uVar3;
        }
        if ((uVar13 & 4) != 0) {
          uVar3 = vextractps_avx(auVar87,2);
          *(undefined4 *)(pauVar14[1] + 0xc) = uVar3;
        }
        if ((uVar13 & 8) != 0) {
          uVar3 = vextractps_avx(auVar87,3);
          *(undefined4 *)(pauVar14[1] + 0x1c) = uVar3;
        }
        if ((uVar13 & 0x10) != 0) {
          *(int *)(pauVar14[2] + 0xc) = auVar51._16_4_;
        }
        if ((uVar13 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar93,1);
          *(undefined4 *)(pauVar14[2] + 0x1c) = uVar3;
        }
        if ((uVar13 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar93,2);
          *(undefined4 *)(pauVar14[3] + 0xc) = uVar3;
        }
        if (cVar12 < '\0') {
          uVar3 = vextractps_avx(auVar93,3);
          *(undefined4 *)(pauVar14[3] + 0x1c) = uVar3;
        }
      }
    }
  }
  return;
}

// ApplyLegacySphericalBackstopConstraintsWithDistanceMap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_CunfCunfCunfCuniCuni_avx2 @ 14031db40

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLegacySphericalBackstopConstraintsWithDistanceMap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_CunfCunfCunfCuniCuni_avx2
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,float param_5,
               float param_6,float param_7,int param_8,uint param_9)

{
  float *pfVar1;
  undefined1 (*pauVar2) [32];
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  char cVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 (*pauVar18) [32];
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  ulonglong uVar22;
  uint uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [32];
  undefined1 auVar32 [16];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  float fVar33;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar34 [32];
  float fVar42;
  uint uVar43;
  float fVar45;
  uint uVar46;
  float fVar47;
  uint uVar48;
  float fVar49;
  uint uVar50;
  float fVar51;
  uint uVar52;
  float fVar53;
  uint uVar54;
  float fVar55;
  uint uVar56;
  float fVar57;
  uint uVar58;
  undefined1 auVar44 [32];
  float fVar59;
  undefined1 auVar60 [16];
  undefined1 auVar63 [16];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [16];
  undefined1 auVar74 [32];
  undefined1 auVar77 [16];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  float fVar86;
  undefined1 auVar87 [16];
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar95;
  float fVar96;
  float fVar97;
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  undefined1 auVar94 [16];
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  undefined1 auVar108 [32];
  
  uVar16 = param_9 + 7;
  if (-1 < (int)param_9) {
    uVar16 = param_9;
  }
  if ((int)(uVar16 & 0xfffffff8) < 1) {
    uVar17 = 0;
    if ((int)param_9 < 1) {
      return;
    }
  }
  else {
    fVar11 = param_7 * param_7;
    lVar20 = (longlong)param_8 * 0x10 + param_1;
    lVar19 = (longlong)param_8 * 0xc + 0x40;
    uVar22 = 0;
    uVar17 = 0;
    do {
      auVar26 = *(undefined1 (*) [32])(lVar20 + uVar22 * 4);
      auVar44 = *(undefined1 (*) [32])(lVar20 + 0x20 + uVar22 * 4);
      auVar61 = *(undefined1 (*) [32])(lVar20 + 0x40 + uVar22 * 4);
      auVar28 = *(undefined1 (*) [32])(lVar20 + 0x60 + uVar22 * 4);
      auVar98 = vperm2f128_avx(auVar26,auVar61,0x20);
      auVar75 = vperm2f128_avx(auVar26,auVar61,0x31);
      auVar29 = vperm2f128_avx(auVar44,auVar28,0x20);
      auVar62 = vperm2f128_avx(auVar44,auVar28,0x31);
      auVar25 = vunpckhps_avx(auVar98,auVar75);
      auVar12 = vunpckhps_avx(auVar29,auVar62);
      auVar65 = vunpckhpd_avx(auVar25,auVar12);
      auVar27 = vcmpps_avx(auVar65,
                           ___ymm_0000000000000000000000000000000000000000000000000000000000000000,4
                          );
      if ((((((((SUB321(auVar27 >> 0x1f,0) & 1) != 0 || (SUB321(auVar27 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar27 >> 0x5f,0) & 1) != 0) || SUB321(auVar27 >> 0x7f,0) != '\0') ||
            (SUB321(auVar27 >> 0x9f,0) & 1) != 0) || SUB321(auVar27 >> 0xbf,0) != '\0') ||
          (SUB321(auVar27 >> 0xdf,0) & 1) != 0) || auVar27[0x1f] < '\0') {
        auVar66 = vunpcklpd_avx(auVar25,auVar12);
        auVar25 = vunpcklps_avx(auVar98,auVar75);
        auVar12 = vunpcklps_avx(auVar29,auVar62);
        auVar71 = vunpckhpd_avx(auVar25,auVar12);
        auVar74 = vunpcklpd_avx(auVar25,auVar12);
        auVar25 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar19);
        auVar12 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar19);
        auVar98 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar12);
        auVar75 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,auVar25);
        auVar98 = vblendps_avx(auVar75,auVar98,0x88);
        auVar75 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar12);
        auVar29 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,*(undefined1 (*) [32])(param_2 + lVar19));
        auVar75 = vblendps_avx(auVar29,auVar75,0x13);
        auVar80 = vperm2f128_avx(auVar98,auVar75,0x31);
        auVar25 = vblendps_avx(auVar12,auVar25,0x24);
        auVar25 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar25);
        auVar12 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,*(undefined1 (*) [32])(param_2 + lVar19));
        auVar29 = vblendps_avx(auVar25,auVar12,0xe0);
        auVar25 = *(undefined1 (*) [32])(param_3 + -0x40 + lVar19);
        auVar12 = *(undefined1 (*) [32])(param_3 + -0x20 + lVar19);
        auVar62 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar12);
        auVar83 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,auVar25);
        auVar62 = vblendps_avx(auVar83,auVar62,0x88);
        auVar83 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar12);
        auVar85 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,*(undefined1 (*) [32])(param_3 + lVar19));
        auVar83 = vblendps_avx(auVar85,auVar83,0x13);
        auVar67 = vperm2f128_avx(auVar62,auVar83,0x31);
        auVar25 = vblendps_avx(auVar12,auVar25,0x24);
        auVar25 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar25);
        auVar12 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,*(undefined1 (*) [32])(param_3 + lVar19));
        auVar25 = vblendps_avx(auVar25,auVar12,0xe0);
        pfVar1 = (float *)(param_4 + (uVar22 & 0xffffffff));
        auVar78._0_4_ = param_6 * *pfVar1 + param_5;
        auVar78._4_4_ = param_6 * pfVar1[1] + param_5;
        auVar78._8_4_ = param_6 * pfVar1[2] + param_5;
        auVar78._12_4_ = param_6 * pfVar1[3] + param_5;
        auVar78._16_4_ = param_6 * pfVar1[4] + param_5;
        auVar78._20_4_ = param_6 * pfVar1[5] + param_5;
        auVar78._24_4_ = param_6 * pfVar1[6] + param_5;
        auVar78._28_4_ = param_6 * pfVar1[7] + param_5;
        auVar64._0_4_ = -(auVar62._0_4_ * auVar78._0_4_) + auVar98._0_4_;
        auVar64._4_4_ = -(auVar62._4_4_ * auVar78._4_4_) + auVar98._4_4_;
        auVar64._8_4_ = -(auVar62._8_4_ * auVar78._8_4_) + auVar98._8_4_;
        auVar64._12_4_ = -(auVar62._12_4_ * auVar78._12_4_) + auVar98._12_4_;
        auVar64._16_4_ = -(auVar83._0_4_ * auVar78._16_4_) + auVar75._0_4_;
        auVar64._20_4_ = -(auVar83._4_4_ * auVar78._20_4_) + auVar75._4_4_;
        auVar64._24_4_ = -(auVar83._8_4_ * auVar78._24_4_) + auVar75._8_4_;
        auVar64._28_4_ = -(auVar83._12_4_ * auVar78._28_4_) + auVar75._12_4_;
        auVar108._0_4_ = -(auVar67._0_4_ * auVar78._0_4_) + auVar80._0_4_;
        auVar108._4_4_ = -(auVar67._4_4_ * auVar78._4_4_) + auVar80._4_4_;
        auVar108._8_4_ = -(auVar67._8_4_ * auVar78._8_4_) + auVar80._8_4_;
        auVar108._12_4_ = -(auVar67._12_4_ * auVar78._12_4_) + auVar80._12_4_;
        auVar108._16_4_ = -(auVar67._16_4_ * auVar78._16_4_) + auVar80._16_4_;
        auVar108._20_4_ = -(auVar67._20_4_ * auVar78._20_4_) + auVar80._20_4_;
        auVar108._24_4_ = -(auVar67._24_4_ * auVar78._24_4_) + auVar80._24_4_;
        auVar108._28_4_ = -(auVar67._28_4_ * auVar78._28_4_) + auVar80._28_4_;
        auVar13._4_4_ = param_7;
        auVar13._0_4_ = param_7;
        auVar13._8_4_ = param_7;
        auVar13._12_4_ = param_7;
        auVar13._16_4_ = param_7;
        auVar13._20_4_ = param_7;
        auVar13._24_4_ = param_7;
        auVar13._28_4_ = param_7;
        auVar85 = vsubps_avx(auVar78,auVar13);
        auVar79._0_4_ = -(auVar25._0_4_ * auVar78._0_4_) + auVar29._0_4_;
        auVar79._4_4_ = -(auVar25._4_4_ * auVar78._4_4_) + auVar29._4_4_;
        auVar79._8_4_ = -(auVar25._8_4_ * auVar78._8_4_) + auVar29._8_4_;
        auVar79._12_4_ = -(auVar25._12_4_ * auVar78._12_4_) + auVar29._12_4_;
        auVar79._16_4_ = -(auVar25._16_4_ * auVar78._16_4_) + auVar29._16_4_;
        auVar79._20_4_ = -(auVar25._20_4_ * auVar78._20_4_) + auVar29._20_4_;
        auVar79._24_4_ = -(auVar25._24_4_ * auVar78._24_4_) + auVar29._24_4_;
        auVar79._28_4_ = -(auVar25._28_4_ * auVar78._28_4_) + auVar29._28_4_;
        auVar12 = vsubps_avx(auVar74,auVar64);
        auVar71 = vsubps_avx(auVar71,auVar108);
        auVar66 = vsubps_avx(auVar66,auVar79);
        fVar4 = auVar71._0_4_;
        fVar5 = auVar71._4_4_;
        fVar6 = auVar71._8_4_;
        fVar7 = auVar71._12_4_;
        fVar8 = auVar71._16_4_;
        fVar9 = auVar71._20_4_;
        fVar10 = auVar71._24_4_;
        fVar59 = auVar71._28_4_;
        fVar42 = auVar12._0_4_;
        fVar45 = auVar12._4_4_;
        fVar47 = auVar12._8_4_;
        fVar49 = auVar12._12_4_;
        fVar51 = auVar12._16_4_;
        fVar53 = auVar12._20_4_;
        fVar55 = auVar12._24_4_;
        fVar57 = auVar12._28_4_;
        fVar86 = auVar66._0_4_;
        auVar74._0_4_ = fVar86 * fVar86 + fVar42 * fVar42 + fVar4 * fVar4;
        fVar90 = auVar66._4_4_;
        auVar74._4_4_ = fVar90 * fVar90 + fVar45 * fVar45 + fVar5 * fVar5;
        fVar91 = auVar66._8_4_;
        auVar74._8_4_ = fVar91 * fVar91 + fVar47 * fVar47 + fVar6 * fVar6;
        fVar92 = auVar66._12_4_;
        auVar74._12_4_ = fVar92 * fVar92 + fVar49 * fVar49 + fVar7 * fVar7;
        fVar93 = auVar66._16_4_;
        auVar74._16_4_ = fVar93 * fVar93 + fVar51 * fVar51 + fVar8 * fVar8;
        fVar95 = auVar66._20_4_;
        auVar74._20_4_ = fVar95 * fVar95 + fVar53 * fVar53 + fVar9 * fVar9;
        fVar96 = auVar66._24_4_;
        auVar74._24_4_ = fVar96 * fVar96 + fVar55 * fVar55 + fVar10 * fVar10;
        fVar97 = auVar66._28_4_;
        auVar74._28_4_ = fVar97 * fVar97 + fVar57 * fVar57 + fVar59 * fVar59;
        auVar12 = vsqrtps_avx(auVar74);
        auVar12 = vdivps_avx(auVar13,auVar12);
        fVar33 = auVar12._0_4_;
        fVar35 = auVar12._4_4_;
        fVar36 = auVar12._8_4_;
        fVar37 = auVar12._12_4_;
        fVar38 = auVar12._16_4_;
        fVar39 = auVar12._20_4_;
        fVar40 = auVar12._24_4_;
        fVar41 = auVar12._28_4_;
        fVar100 = auVar85._0_4_;
        auVar71._0_4_ = -(fVar100 * auVar62._0_4_) + auVar98._0_4_;
        fVar101 = auVar85._4_4_;
        auVar71._4_4_ = -(fVar101 * auVar62._4_4_) + auVar98._4_4_;
        fVar102 = auVar85._8_4_;
        auVar71._8_4_ = -(fVar102 * auVar62._8_4_) + auVar98._8_4_;
        fVar103 = auVar85._12_4_;
        auVar71._12_4_ = -(fVar103 * auVar62._12_4_) + auVar98._12_4_;
        fVar104 = auVar85._16_4_;
        auVar71._16_4_ = -(fVar104 * auVar83._0_4_) + auVar75._0_4_;
        fVar105 = auVar85._20_4_;
        auVar71._20_4_ = -(fVar105 * auVar83._4_4_) + auVar75._4_4_;
        fVar106 = auVar85._24_4_;
        auVar71._24_4_ = -(fVar106 * auVar83._8_4_) + auVar75._8_4_;
        fVar107 = auVar85._28_4_;
        auVar71._28_4_ = -(fVar107 * auVar83._12_4_) + auVar75._12_4_;
        auVar98._4_4_ = __real_322bcc77;
        auVar98._0_4_ = __real_322bcc77;
        auVar98._8_4_ = __real_322bcc77;
        auVar98._12_4_ = __real_322bcc77;
        auVar98._16_4_ = __real_322bcc77;
        auVar98._20_4_ = __real_322bcc77;
        auVar98._24_4_ = __real_322bcc77;
        auVar98._28_4_ = __real_322bcc77;
        auVar98 = vcmpps_avx(auVar74,auVar98,1);
        auVar12._4_4_ = fVar11;
        auVar12._0_4_ = fVar11;
        auVar12._8_4_ = fVar11;
        auVar12._12_4_ = fVar11;
        auVar12._16_4_ = fVar11;
        auVar12._20_4_ = fVar11;
        auVar12._24_4_ = fVar11;
        auVar12._28_4_ = fVar11;
        auVar12 = vcmpps_avx(auVar74,auVar12,1);
        uVar43 = auVar12._0_4_;
        auVar75._0_4_ = uVar43 & (uint)(fVar33 * fVar42 + auVar64._0_4_);
        uVar46 = auVar12._4_4_;
        auVar75._4_4_ = uVar46 & (uint)(fVar35 * fVar45 + auVar64._4_4_);
        uVar48 = auVar12._8_4_;
        auVar75._8_4_ = uVar48 & (uint)(fVar36 * fVar47 + auVar64._8_4_);
        uVar50 = auVar12._12_4_;
        auVar75._12_4_ = uVar50 & (uint)(fVar37 * fVar49 + auVar64._12_4_);
        uVar52 = auVar12._16_4_;
        auVar75._16_4_ = uVar52 & (uint)(fVar38 * fVar51 + auVar64._16_4_);
        uVar54 = auVar12._20_4_;
        auVar75._20_4_ = uVar54 & (uint)(fVar39 * fVar53 + auVar64._20_4_);
        uVar56 = auVar12._24_4_;
        auVar75._24_4_ = uVar56 & (uint)(fVar40 * fVar55 + auVar64._24_4_);
        uVar58 = auVar12._28_4_;
        auVar75._28_4_ = uVar58 & (uint)(fVar41 * fVar57 + auVar64._28_4_);
        auVar12 = vblendvps_avx(auVar75,auVar71,auVar98);
        auVar75 = vcmpps_avx(auVar12,
                             ___ymm_0000000000000000000000000000000000000000000000000000000000000000
                             ,4);
        auVar62._0_4_ = auVar75._0_4_ & auVar27._0_4_;
        auVar62._4_4_ = auVar75._4_4_ & auVar27._4_4_;
        auVar62._8_4_ = auVar75._8_4_ & auVar27._8_4_;
        auVar62._12_4_ = auVar75._12_4_ & auVar27._12_4_;
        auVar62._16_4_ = auVar75._16_4_ & auVar27._16_4_;
        auVar62._20_4_ = auVar75._20_4_ & auVar27._20_4_;
        auVar62._24_4_ = auVar75._24_4_ & auVar27._24_4_;
        auVar62._28_4_ = auVar75._28_4_ & auVar27._28_4_;
        uVar23 = vmovmskps_avx(auVar62);
        if (uVar23 != 0) {
          auVar83._0_4_ = -(fVar100 * auVar67._0_4_) + auVar80._0_4_;
          auVar83._4_4_ = -(fVar101 * auVar67._4_4_) + auVar80._4_4_;
          auVar83._8_4_ = -(fVar102 * auVar67._8_4_) + auVar80._8_4_;
          auVar83._12_4_ = -(fVar103 * auVar67._12_4_) + auVar80._12_4_;
          auVar83._16_4_ = -(fVar104 * auVar67._16_4_) + auVar80._16_4_;
          auVar83._20_4_ = -(fVar105 * auVar67._20_4_) + auVar80._20_4_;
          auVar83._24_4_ = -(fVar106 * auVar67._24_4_) + auVar80._24_4_;
          auVar83._28_4_ = -(fVar107 * auVar67._28_4_) + auVar80._28_4_;
          auVar85._0_4_ = -(fVar100 * auVar25._0_4_) + auVar29._0_4_;
          auVar85._4_4_ = -(fVar101 * auVar25._4_4_) + auVar29._4_4_;
          auVar85._8_4_ = -(fVar102 * auVar25._8_4_) + auVar29._8_4_;
          auVar85._12_4_ = -(fVar103 * auVar25._12_4_) + auVar29._12_4_;
          auVar85._16_4_ = -(fVar104 * auVar25._16_4_) + auVar29._16_4_;
          auVar85._20_4_ = -(fVar105 * auVar25._20_4_) + auVar29._20_4_;
          auVar85._24_4_ = -(fVar106 * auVar25._24_4_) + auVar29._24_4_;
          auVar85._28_4_ = -(fVar107 * auVar25._28_4_) + auVar29._28_4_;
          auVar27._0_4_ = (uint)(fVar33 * fVar4 + auVar108._0_4_) & uVar43;
          auVar27._4_4_ = (uint)(fVar35 * fVar5 + auVar108._4_4_) & uVar46;
          auVar27._8_4_ = (uint)(fVar36 * fVar6 + auVar108._8_4_) & uVar48;
          auVar27._12_4_ = (uint)(fVar37 * fVar7 + auVar108._12_4_) & uVar50;
          auVar27._16_4_ = (uint)(fVar38 * fVar8 + auVar108._16_4_) & uVar52;
          auVar27._20_4_ = (uint)(fVar39 * fVar9 + auVar108._20_4_) & uVar54;
          auVar27._24_4_ = (uint)(fVar40 * fVar10 + auVar108._24_4_) & uVar56;
          auVar27._28_4_ = (uint)(fVar41 * fVar59 + auVar108._28_4_) & uVar58;
          auVar27 = vblendvps_avx(auVar27,auVar83,auVar98);
          auVar25._0_4_ = (uint)(fVar33 * fVar86 + auVar79._0_4_) & uVar43;
          auVar25._4_4_ = (uint)(fVar35 * fVar90 + auVar79._4_4_) & uVar46;
          auVar25._8_4_ = (uint)(fVar36 * fVar91 + auVar79._8_4_) & uVar48;
          auVar25._12_4_ = (uint)(fVar37 * fVar92 + auVar79._12_4_) & uVar50;
          auVar25._16_4_ = (uint)(fVar38 * fVar93 + auVar79._16_4_) & uVar52;
          auVar25._20_4_ = (uint)(fVar39 * fVar95 + auVar79._20_4_) & uVar54;
          auVar25._24_4_ = (uint)(fVar40 * fVar96 + auVar79._24_4_) & uVar56;
          auVar25._28_4_ = (uint)(fVar41 * fVar97 + auVar79._28_4_) & uVar58;
          auVar25 = vblendvps_avx(auVar25,auVar85,auVar98);
          cVar14 = (char)uVar23;
          if (cVar14 == -1) {
            auVar26 = vunpcklps_avx(auVar12,auVar27);
            auVar44 = vunpcklps_avx(auVar25,auVar65);
            auVar28 = vunpcklpd_avx(auVar26,auVar44);
            auVar26 = vunpckhpd_avx(auVar26,auVar44);
            auVar44 = vunpckhps_avx(auVar12,auVar27);
            auVar61 = vunpckhps_avx(auVar25,auVar65);
            auVar27 = vunpcklpd_avx(auVar44,auVar61);
            auVar65._16_16_ = auVar26._0_16_;
            auVar65._0_16_ = auVar28._0_16_;
            *(undefined1 (*) [32])(lVar20 + uVar22 * 4) = auVar65;
            auVar44 = vunpckhpd_avx(auVar44,auVar61);
            auVar61._16_16_ = auVar44._0_16_;
            auVar61._0_16_ = auVar27._0_16_;
            *(undefined1 (*) [32])(lVar20 + 0x20 + uVar22 * 4) = auVar61;
            auVar26 = vperm2f128_avx(auVar28,auVar26,0x31);
            *(undefined1 (*) [32])(lVar20 + 0x40 + uVar22 * 4) = auVar26;
            auVar26 = vperm2f128_avx(auVar27,auVar44,0x31);
            *(undefined1 (*) [32])(lVar20 + 0x60 + uVar22 * 4) = auVar26;
          }
          else {
            auVar73 = auVar12._0_16_;
            auVar77 = auVar12._16_16_;
            auVar60 = auVar27._0_16_;
            auVar63 = auVar27._16_16_;
            auVar24 = auVar25._0_16_;
            auVar32 = auVar25._16_16_;
            if ((uVar23 & 1) != 0) {
              *(int *)(lVar20 + uVar22 * 4) = auVar12._0_4_;
            }
            if ((uVar23 & 2) != 0) {
              uVar3 = vextractps_avx(auVar73,1);
              *(undefined4 *)(lVar20 + 0x10 + uVar22 * 4) = uVar3;
            }
            if ((uVar23 & 4) != 0) {
              uVar3 = vextractps_avx(auVar73,2);
              *(undefined4 *)(lVar20 + 0x20 + uVar22 * 4) = uVar3;
            }
            if ((uVar23 & 8) != 0) {
              uVar3 = vextractps_avx(auVar73,3);
              *(undefined4 *)(lVar20 + 0x30 + uVar22 * 4) = uVar3;
            }
            if ((uVar23 & 0x10) != 0) {
              *(int *)(lVar20 + 0x40 + uVar22 * 4) = auVar12._16_4_;
            }
            if ((uVar23 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar77,1);
              *(undefined4 *)(lVar20 + 0x50 + uVar22 * 4) = uVar3;
            }
            if ((uVar23 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar77,2);
              *(undefined4 *)(lVar20 + 0x60 + uVar22 * 4) = uVar3;
            }
            if (cVar14 < '\0') {
              uVar3 = vextractps_avx(auVar77,3);
              *(undefined4 *)(lVar20 + 0x70 + uVar22 * 4) = uVar3;
            }
            if ((uVar23 & 1) != 0) {
              *(int *)(lVar20 + 4 + uVar22 * 4) = auVar27._0_4_;
            }
            if ((uVar23 & 2) != 0) {
              uVar3 = vextractps_avx(auVar60,1);
              *(undefined4 *)(lVar20 + 0x14 + uVar22 * 4) = uVar3;
            }
            if ((uVar23 & 4) != 0) {
              uVar3 = vextractps_avx(auVar60,2);
              *(undefined4 *)(lVar20 + 0x24 + uVar22 * 4) = uVar3;
            }
            if ((uVar23 & 8) != 0) {
              uVar3 = vextractps_avx(auVar60,3);
              *(undefined4 *)(lVar20 + 0x34 + uVar22 * 4) = uVar3;
            }
            if ((uVar23 & 0x10) != 0) {
              *(int *)(lVar20 + 0x44 + uVar22 * 4) = auVar27._16_4_;
            }
            if ((uVar23 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar63,1);
              *(undefined4 *)(lVar20 + 0x54 + uVar22 * 4) = uVar3;
            }
            if ((uVar23 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar63,2);
              *(undefined4 *)(lVar20 + 100 + uVar22 * 4) = uVar3;
            }
            if (cVar14 < '\0') {
              uVar3 = vextractps_avx(auVar63,3);
              *(undefined4 *)(lVar20 + 0x74 + uVar22 * 4) = uVar3;
            }
            if ((uVar23 & 1) != 0) {
              *(int *)(lVar20 + 8 + uVar22 * 4) = auVar25._0_4_;
            }
            if ((uVar23 & 2) != 0) {
              uVar3 = vextractps_avx(auVar24,1);
              *(undefined4 *)(lVar20 + 0x18 + uVar22 * 4) = uVar3;
            }
            if ((uVar23 & 4) != 0) {
              uVar3 = vextractps_avx(auVar24,2);
              *(undefined4 *)(lVar20 + 0x28 + uVar22 * 4) = uVar3;
            }
            if ((uVar23 & 8) != 0) {
              uVar3 = vextractps_avx(auVar24,3);
              *(undefined4 *)(lVar20 + 0x38 + uVar22 * 4) = uVar3;
            }
            if ((uVar23 & 0x10) != 0) {
              *(int *)(lVar20 + 0x48 + uVar22 * 4) = auVar25._16_4_;
            }
            if ((uVar23 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar32,1);
              *(undefined4 *)(lVar20 + 0x58 + uVar22 * 4) = uVar3;
            }
            if ((uVar23 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar32,2);
              *(undefined4 *)(lVar20 + 0x68 + uVar22 * 4) = uVar3;
            }
            if (cVar14 < '\0') {
              uVar3 = vextractps_avx(auVar32,3);
              *(undefined4 *)(lVar20 + 0x78 + uVar22 * 4) = uVar3;
            }
            if ((uVar23 & 1) != 0) {
              uVar3 = vextractps_avx(auVar26._0_16_,3);
              *(undefined4 *)(lVar20 + 0xc + uVar22 * 4) = uVar3;
            }
            if ((uVar23 & 2) != 0) {
              uVar3 = vextractps_avx(auVar26._16_16_,3);
              *(undefined4 *)(lVar20 + 0x1c + uVar22 * 4) = uVar3;
            }
            if ((uVar23 & 4) != 0) {
              uVar3 = vextractps_avx(auVar44._0_16_,3);
              *(undefined4 *)(lVar20 + 0x2c + uVar22 * 4) = uVar3;
            }
            if ((uVar23 & 8) != 0) {
              uVar3 = vextractps_avx(auVar44._16_16_,3);
              *(undefined4 *)(lVar20 + 0x3c + uVar22 * 4) = uVar3;
            }
            if ((uVar23 & 0x10) != 0) {
              uVar3 = vextractps_avx(auVar61._0_16_,3);
              *(undefined4 *)(lVar20 + 0x4c + uVar22 * 4) = uVar3;
            }
            if ((uVar23 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar61._16_16_,3);
              *(undefined4 *)(lVar20 + 0x5c + uVar22 * 4) = uVar3;
            }
            if ((uVar23 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar28._0_16_,3);
              *(undefined4 *)(lVar20 + 0x6c + uVar22 * 4) = uVar3;
            }
            if (cVar14 < '\0') {
              uVar3 = vextractps_avx(auVar28._16_16_,3);
              *(undefined4 *)(lVar20 + 0x7c + uVar22 * 4) = uVar3;
            }
          }
        }
      }
      uVar17 = uVar17 + 8;
      uVar22 = uVar22 + 0x20;
      lVar19 = lVar19 + 0x60;
    } while (uVar17 < (uVar16 & 0xfffffff8));
    if ((int)param_9 <= (int)uVar17) {
      return;
    }
  }
  iVar15 = (int)uVar17;
  auVar26._4_4_ = iVar15;
  auVar26._0_4_ = iVar15;
  auVar26._8_4_ = iVar15;
  auVar26._12_4_ = iVar15;
  auVar26._16_4_ = iVar15;
  auVar26._20_4_ = iVar15;
  auVar26._24_4_ = iVar15;
  auVar26._28_4_ = iVar15;
  auVar26 = vpor_avx2(auVar26,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar44._4_4_ = param_9;
  auVar44._0_4_ = param_9;
  auVar44._8_4_ = param_9;
  auVar44._12_4_ = param_9;
  auVar44._16_4_ = param_9;
  auVar44._20_4_ = param_9;
  auVar44._24_4_ = param_9;
  auVar44._28_4_ = param_9;
  auVar26 = vpcmpgtd_avx2(auVar44,auVar26);
  lVar19 = (longlong)(param_8 + iVar15);
  pauVar18 = (undefined1 (*) [32])(param_1 + lVar19 * 0x10);
  iVar21 = vmovmskps_avx(auVar26);
  if (iVar21 == 0xff) {
    auVar61 = vperm2f128_avx(*pauVar18,pauVar18[2],0x20);
    auVar28 = vperm2f128_avx(*pauVar18,pauVar18[2],0x31);
    auVar27 = vperm2f128_avx(pauVar18[1],pauVar18[3],0x20);
    auVar25 = vperm2f128_avx(pauVar18[1],pauVar18[3],0x31);
    auVar44 = vunpcklps_avx(auVar61,auVar28);
    auVar61 = vunpckhps_avx(auVar61,auVar28);
    auVar65 = vunpcklps_avx(auVar27,auVar25);
    auVar28 = vunpckhps_avx(auVar27,auVar25);
    auVar27 = vunpcklpd_avx(auVar44,auVar65);
    auVar44 = vunpckhpd_avx(auVar44,auVar65);
    auVar65 = vunpcklpd_avx(auVar61,auVar28);
    auVar61 = vunpckhpd_avx(auVar61,auVar28);
  }
  else {
    auVar27 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar26);
    auVar44 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar26);
    auVar65 = vgatherdps(ZEXT832(0),auVar26);
    auVar61 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar26);
  }
  auVar28 = vmaskmovps_avx(auVar26,auVar27);
  auVar44 = vmaskmovps_avx(auVar26,auVar44);
  auVar27 = vmaskmovps_avx(auVar26,auVar65);
  auVar65 = vcmpps_avx(auVar61,ZEXT832(0) << 0x20,4);
  auVar65 = auVar26 & auVar65;
  if ((((((((SUB321(auVar65 >> 0x1f,0) & 1) != 0 || (SUB321(auVar65 >> 0x3f,0) & 1) != 0) ||
          (SUB321(auVar65 >> 0x5f,0) & 1) != 0) || SUB321(auVar65 >> 0x7f,0) != '\0') ||
        (SUB321(auVar65 >> 0x9f,0) & 1) != 0) || SUB321(auVar65 >> 0xbf,0) != '\0') ||
      (SUB321(auVar65 >> 0xdf,0) & 1) != 0) || auVar65[0x1f] < '\0') {
    pauVar2 = (undefined1 (*) [32])(param_2 + lVar19 * 0xc);
    if ((char)iVar21 == -1) {
      auVar65 = pauVar2[1];
      auVar25 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar65);
      auVar12 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,*pauVar2);
      auVar25 = vblendps_avx(auVar12,auVar25,0x88);
      auVar12 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar65);
      auVar98 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,pauVar2[2]);
      auVar12 = vblendps_avx(auVar98,auVar12,0x13);
      auVar66._16_16_ = auVar12._0_16_;
      auVar66._0_16_ = auVar25._0_16_;
      auVar62 = vperm2f128_avx(auVar25,auVar12,0x31);
      auVar65 = vblendps_avx(auVar65,*pauVar2,0x24);
      auVar65 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar65);
      auVar25 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,pauVar2[2]);
      auVar98 = vblendps_avx(auVar65,auVar25,0xe0);
      auVar65 = *(undefined1 (*) [32])(param_3 + lVar19 * 0xc);
      auVar25 = *(undefined1 (*) [32])(param_3 + 0x20 + lVar19 * 0xc);
      auVar12 = *(undefined1 (*) [32])(param_3 + 0x40 + lVar19 * 0xc);
      auVar75 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar25);
      auVar29 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar65);
      auVar75 = vblendps_avx(auVar29,auVar75,0x88);
      auVar29 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar25);
      auVar83 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,auVar12);
      auVar29 = vblendps_avx(auVar83,auVar29,0x13);
      auVar80._16_16_ = auVar29._0_16_;
      auVar80._0_16_ = auVar75._0_16_;
      auVar75 = vperm2f128_avx(auVar75,auVar29,0x31);
      auVar65 = vblendps_avx(auVar25,auVar65,0x24);
      auVar65 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar65);
      auVar25 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,auVar12);
      auVar65 = vblendps_avx(auVar65,auVar25,0xe0);
    }
    else {
      auVar66 = vgatherdps(ZEXT832(0) << 0x20,auVar26);
      auVar62 = vgatherdps(ZEXT832(0) << 0x20,auVar26);
      auVar98 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar26);
      auVar80 = vgatherdps(ZEXT832(0),auVar26);
      auVar75 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar26);
      auVar65 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar26);
    }
    auVar25 = vmaskmovps_avx(auVar26,*(undefined1 (*) [32])(param_4 + (iVar15 << 2)));
    auVar88._0_4_ = param_6 * auVar25._0_4_ + param_5;
    auVar88._4_4_ = param_6 * auVar25._4_4_ + param_5;
    auVar88._8_4_ = param_6 * auVar25._8_4_ + param_5;
    auVar88._12_4_ = param_6 * auVar25._12_4_ + param_5;
    auVar88._16_4_ = param_6 * auVar25._16_4_ + param_5;
    auVar88._20_4_ = param_6 * auVar25._20_4_ + param_5;
    auVar88._24_4_ = param_6 * auVar25._24_4_ + param_5;
    auVar88._28_4_ = param_6 * auVar25._28_4_ + param_5;
    auVar99._4_4_ = param_7;
    auVar99._0_4_ = param_7;
    auVar99._8_4_ = param_7;
    auVar99._12_4_ = param_7;
    auVar99._16_4_ = param_7;
    auVar99._20_4_ = param_7;
    auVar99._24_4_ = param_7;
    auVar99._28_4_ = param_7;
    auVar25 = vsubps_avx(auVar88,auVar99);
    auVar89._0_4_ = -(auVar80._0_4_ * auVar88._0_4_) + auVar66._0_4_;
    auVar89._4_4_ = -(auVar80._4_4_ * auVar88._4_4_) + auVar66._4_4_;
    auVar89._8_4_ = -(auVar80._8_4_ * auVar88._8_4_) + auVar66._8_4_;
    auVar89._12_4_ = -(auVar80._12_4_ * auVar88._12_4_) + auVar66._12_4_;
    auVar89._16_4_ = -(auVar80._16_4_ * auVar88._16_4_) + auVar66._16_4_;
    auVar89._20_4_ = -(auVar80._20_4_ * auVar88._20_4_) + auVar66._20_4_;
    auVar89._24_4_ = -(auVar80._24_4_ * auVar88._24_4_) + auVar66._24_4_;
    auVar89._28_4_ = -(auVar80._28_4_ * auVar88._28_4_) + auVar66._28_4_;
    auVar82._0_4_ = -(auVar75._0_4_ * auVar88._0_4_) + auVar62._0_4_;
    auVar82._4_4_ = -(auVar75._4_4_ * auVar88._4_4_) + auVar62._4_4_;
    auVar82._8_4_ = -(auVar75._8_4_ * auVar88._8_4_) + auVar62._8_4_;
    auVar82._12_4_ = -(auVar75._12_4_ * auVar88._12_4_) + auVar62._12_4_;
    auVar82._16_4_ = -(auVar75._16_4_ * auVar88._16_4_) + auVar62._16_4_;
    auVar82._20_4_ = -(auVar75._20_4_ * auVar88._20_4_) + auVar62._20_4_;
    auVar82._24_4_ = -(auVar75._24_4_ * auVar88._24_4_) + auVar62._24_4_;
    auVar82._28_4_ = -(auVar75._28_4_ * auVar88._28_4_) + auVar62._28_4_;
    auVar84._0_4_ = -(auVar65._0_4_ * auVar88._0_4_) + auVar98._0_4_;
    auVar84._4_4_ = -(auVar65._4_4_ * auVar88._4_4_) + auVar98._4_4_;
    auVar84._8_4_ = -(auVar65._8_4_ * auVar88._8_4_) + auVar98._8_4_;
    auVar84._12_4_ = -(auVar65._12_4_ * auVar88._12_4_) + auVar98._12_4_;
    auVar84._16_4_ = -(auVar65._16_4_ * auVar88._16_4_) + auVar98._16_4_;
    auVar84._20_4_ = -(auVar65._20_4_ * auVar88._20_4_) + auVar98._20_4_;
    auVar84._24_4_ = -(auVar65._24_4_ * auVar88._24_4_) + auVar98._24_4_;
    auVar84._28_4_ = -(auVar65._28_4_ * auVar88._28_4_) + auVar98._28_4_;
    auVar28 = vsubps_avx(auVar28,auVar89);
    auVar44 = vsubps_avx(auVar44,auVar82);
    auVar27 = vsubps_avx(auVar27,auVar84);
    fVar11 = auVar44._0_4_;
    fVar4 = auVar44._4_4_;
    fVar5 = auVar44._8_4_;
    fVar6 = auVar44._12_4_;
    fVar7 = auVar44._16_4_;
    fVar8 = auVar44._20_4_;
    fVar9 = auVar44._24_4_;
    fVar10 = auVar44._28_4_;
    fVar97 = auVar28._0_4_;
    fVar100 = auVar28._4_4_;
    fVar101 = auVar28._8_4_;
    fVar102 = auVar28._12_4_;
    fVar103 = auVar28._16_4_;
    fVar104 = auVar28._20_4_;
    fVar105 = auVar28._24_4_;
    fVar106 = auVar28._28_4_;
    fVar59 = auVar27._0_4_;
    auVar28._0_4_ = fVar59 * fVar59 + fVar97 * fVar97 + fVar11 * fVar11;
    fVar33 = auVar27._4_4_;
    auVar28._4_4_ = fVar33 * fVar33 + fVar100 * fVar100 + fVar4 * fVar4;
    fVar35 = auVar27._8_4_;
    auVar28._8_4_ = fVar35 * fVar35 + fVar101 * fVar101 + fVar5 * fVar5;
    fVar36 = auVar27._12_4_;
    auVar28._12_4_ = fVar36 * fVar36 + fVar102 * fVar102 + fVar6 * fVar6;
    fVar37 = auVar27._16_4_;
    auVar28._16_4_ = fVar37 * fVar37 + fVar103 * fVar103 + fVar7 * fVar7;
    fVar38 = auVar27._20_4_;
    auVar28._20_4_ = fVar38 * fVar38 + fVar104 * fVar104 + fVar8 * fVar8;
    fVar39 = auVar27._24_4_;
    auVar28._24_4_ = fVar39 * fVar39 + fVar105 * fVar105 + fVar9 * fVar9;
    fVar40 = auVar27._28_4_;
    auVar28._28_4_ = fVar40 * fVar40 + fVar106 * fVar106 + fVar10 * fVar10;
    auVar44 = vsqrtps_avx(auVar28);
    auVar44 = vdivps_avx(auVar99,auVar44);
    fVar57 = auVar44._0_4_;
    fVar86 = auVar44._4_4_;
    fVar90 = auVar44._8_4_;
    fVar91 = auVar44._12_4_;
    fVar92 = auVar44._16_4_;
    fVar93 = auVar44._20_4_;
    fVar95 = auVar44._24_4_;
    fVar96 = auVar44._28_4_;
    fVar41 = auVar25._0_4_;
    auVar81._0_4_ = -(fVar41 * auVar80._0_4_) + auVar66._0_4_;
    fVar42 = auVar25._4_4_;
    auVar81._4_4_ = -(fVar42 * auVar80._4_4_) + auVar66._4_4_;
    fVar45 = auVar25._8_4_;
    auVar81._8_4_ = -(fVar45 * auVar80._8_4_) + auVar66._8_4_;
    fVar47 = auVar25._12_4_;
    auVar81._12_4_ = -(fVar47 * auVar80._12_4_) + auVar66._12_4_;
    fVar49 = auVar25._16_4_;
    auVar81._16_4_ = -(fVar49 * auVar80._16_4_) + auVar66._16_4_;
    fVar51 = auVar25._20_4_;
    auVar81._20_4_ = -(fVar51 * auVar80._20_4_) + auVar66._20_4_;
    fVar53 = auVar25._24_4_;
    auVar81._24_4_ = -(fVar53 * auVar80._24_4_) + auVar66._24_4_;
    fVar55 = auVar25._28_4_;
    auVar81._28_4_ = -(fVar55 * auVar80._28_4_) + auVar66._28_4_;
    param_7 = param_7 * param_7;
    auVar67._4_4_ = param_7;
    auVar67._0_4_ = param_7;
    auVar67._8_4_ = param_7;
    auVar67._12_4_ = param_7;
    auVar67._16_4_ = param_7;
    auVar67._20_4_ = param_7;
    auVar67._24_4_ = param_7;
    auVar67._28_4_ = param_7;
    auVar44 = vcmpps_avx(auVar28,auVar67,1);
    auVar68._4_4_ = __real_322bcc77;
    auVar68._0_4_ = __real_322bcc77;
    auVar68._8_4_ = __real_322bcc77;
    auVar68._12_4_ = __real_322bcc77;
    auVar68._16_4_ = __real_322bcc77;
    auVar68._20_4_ = __real_322bcc77;
    auVar68._24_4_ = __real_322bcc77;
    auVar68._28_4_ = __real_322bcc77;
    auVar28 = vcmpps_avx(auVar28,auVar68,1);
    uVar23 = auVar44._0_4_;
    auVar69._0_4_ = uVar23 & (uint)(fVar57 * fVar97 + auVar89._0_4_);
    uVar43 = auVar44._4_4_;
    auVar69._4_4_ = uVar43 & (uint)(fVar86 * fVar100 + auVar89._4_4_);
    uVar46 = auVar44._8_4_;
    auVar69._8_4_ = uVar46 & (uint)(fVar90 * fVar101 + auVar89._8_4_);
    uVar48 = auVar44._12_4_;
    auVar69._12_4_ = uVar48 & (uint)(fVar91 * fVar102 + auVar89._12_4_);
    uVar50 = auVar44._16_4_;
    auVar69._16_4_ = uVar50 & (uint)(fVar92 * fVar103 + auVar89._16_4_);
    uVar52 = auVar44._20_4_;
    auVar69._20_4_ = uVar52 & (uint)(fVar93 * fVar104 + auVar89._20_4_);
    uVar54 = auVar44._24_4_;
    auVar69._24_4_ = uVar54 & (uint)(fVar95 * fVar105 + auVar89._24_4_);
    uVar56 = auVar44._28_4_;
    auVar69._28_4_ = uVar56 & (uint)(fVar96 * fVar106 + auVar89._28_4_);
    auVar44 = vblendvps_avx(auVar69,auVar81,auVar28);
    auVar27 = vcmpps_avx(auVar61,ZEXT432(0) << 0x20,4);
    auVar25 = vcmpps_avx(auVar44,ZEXT432(0) << 0x20,4);
    auVar29._0_4_ = auVar25._0_4_ & auVar27._0_4_ & auVar26._0_4_;
    auVar29._4_4_ = auVar25._4_4_ & auVar27._4_4_ & auVar26._4_4_;
    auVar29._8_4_ = auVar25._8_4_ & auVar27._8_4_ & auVar26._8_4_;
    auVar29._12_4_ = auVar25._12_4_ & auVar27._12_4_ & auVar26._12_4_;
    auVar29._16_4_ = auVar25._16_4_ & auVar27._16_4_ & auVar26._16_4_;
    auVar29._20_4_ = auVar25._20_4_ & auVar27._20_4_ & auVar26._20_4_;
    auVar29._24_4_ = auVar25._24_4_ & auVar27._24_4_ & auVar26._24_4_;
    auVar29._28_4_ = auVar25._28_4_ & auVar27._28_4_ & auVar26._28_4_;
    uVar16 = vmovmskps_avx(auVar29);
    if (uVar16 != 0) {
      auVar76._0_4_ = -(fVar41 * auVar75._0_4_) + auVar62._0_4_;
      auVar76._4_4_ = -(fVar42 * auVar75._4_4_) + auVar62._4_4_;
      auVar76._8_4_ = -(fVar45 * auVar75._8_4_) + auVar62._8_4_;
      auVar76._12_4_ = -(fVar47 * auVar75._12_4_) + auVar62._12_4_;
      auVar76._16_4_ = -(fVar49 * auVar75._16_4_) + auVar62._16_4_;
      auVar76._20_4_ = -(fVar51 * auVar75._20_4_) + auVar62._20_4_;
      auVar76._24_4_ = -(fVar53 * auVar75._24_4_) + auVar62._24_4_;
      auVar76._28_4_ = -(fVar55 * auVar75._28_4_) + auVar62._28_4_;
      auVar72._0_4_ = -(fVar41 * auVar65._0_4_) + auVar98._0_4_;
      auVar72._4_4_ = -(fVar42 * auVar65._4_4_) + auVar98._4_4_;
      auVar72._8_4_ = -(fVar45 * auVar65._8_4_) + auVar98._8_4_;
      auVar72._12_4_ = -(fVar47 * auVar65._12_4_) + auVar98._12_4_;
      auVar72._16_4_ = -(fVar49 * auVar65._16_4_) + auVar98._16_4_;
      auVar72._20_4_ = -(fVar51 * auVar65._20_4_) + auVar98._20_4_;
      auVar72._24_4_ = -(fVar53 * auVar65._24_4_) + auVar98._24_4_;
      auVar72._28_4_ = -(fVar55 * auVar65._28_4_) + auVar98._28_4_;
      auVar30._0_4_ = uVar23 & (uint)(fVar57 * fVar11 + auVar82._0_4_);
      auVar30._4_4_ = uVar43 & (uint)(fVar86 * fVar4 + auVar82._4_4_);
      auVar30._8_4_ = uVar46 & (uint)(fVar90 * fVar5 + auVar82._8_4_);
      auVar30._12_4_ = uVar48 & (uint)(fVar91 * fVar6 + auVar82._12_4_);
      auVar30._16_4_ = uVar50 & (uint)(fVar92 * fVar7 + auVar82._16_4_);
      auVar30._20_4_ = uVar52 & (uint)(fVar93 * fVar8 + auVar82._20_4_);
      auVar30._24_4_ = uVar54 & (uint)(fVar95 * fVar9 + auVar82._24_4_);
      auVar30._28_4_ = uVar56 & (uint)(fVar96 * fVar10 + auVar82._28_4_);
      auVar26 = vblendvps_avx(auVar30,auVar76,auVar28);
      auVar31._0_4_ = uVar23 & (uint)(fVar57 * fVar59 + auVar84._0_4_);
      auVar31._4_4_ = uVar43 & (uint)(fVar86 * fVar33 + auVar84._4_4_);
      auVar31._8_4_ = uVar46 & (uint)(fVar90 * fVar35 + auVar84._8_4_);
      auVar31._12_4_ = uVar48 & (uint)(fVar91 * fVar36 + auVar84._12_4_);
      auVar31._16_4_ = uVar50 & (uint)(fVar92 * fVar37 + auVar84._16_4_);
      auVar31._20_4_ = uVar52 & (uint)(fVar93 * fVar38 + auVar84._20_4_);
      auVar31._24_4_ = uVar54 & (uint)(fVar95 * fVar39 + auVar84._24_4_);
      auVar31._28_4_ = uVar56 & (uint)(fVar96 * fVar40 + auVar84._28_4_);
      auVar28 = vblendvps_avx(auVar31,auVar72,auVar28);
      cVar14 = (char)uVar16;
      if (cVar14 == -1) {
        auVar27 = vunpcklps_avx(auVar44,auVar26);
        auVar25 = vunpcklps_avx(auVar28,auVar61);
        auVar65 = vunpcklpd_avx(auVar27,auVar25);
        auVar27 = vunpckhpd_avx(auVar27,auVar25);
        auVar26 = vunpckhps_avx(auVar44,auVar26);
        auVar44 = vunpckhps_avx(auVar28,auVar61);
        auVar61 = vunpcklpd_avx(auVar26,auVar44);
        auVar70._16_16_ = auVar27._0_16_;
        auVar70._0_16_ = auVar65._0_16_;
        *pauVar18 = auVar70;
        auVar26 = vunpckhpd_avx(auVar26,auVar44);
        auVar34._16_16_ = auVar26._0_16_;
        auVar34._0_16_ = auVar61._0_16_;
        pauVar18[1] = auVar34;
        auVar44 = vperm2f128_avx(auVar65,auVar27,0x31);
        pauVar18[2] = auVar44;
        auVar26 = vperm2f128_avx(auVar61,auVar26,0x31);
        pauVar18[3] = auVar26;
      }
      else {
        auVar87 = auVar61._0_16_;
        auVar94 = auVar61._16_16_;
        auVar73 = auVar44._0_16_;
        auVar77 = auVar44._16_16_;
        auVar60 = auVar26._0_16_;
        auVar63 = auVar26._16_16_;
        auVar24 = auVar28._0_16_;
        auVar32 = auVar28._16_16_;
        if ((uVar16 & 1) != 0) {
          *(int *)*pauVar18 = auVar44._0_4_;
        }
        if ((uVar16 & 2) != 0) {
          uVar3 = vextractps_avx(auVar73,1);
          *(undefined4 *)(*pauVar18 + 0x10) = uVar3;
        }
        if ((uVar16 & 4) != 0) {
          uVar3 = vextractps_avx(auVar73,2);
          *(undefined4 *)pauVar18[1] = uVar3;
        }
        if ((uVar16 & 8) != 0) {
          uVar3 = vextractps_avx(auVar73,3);
          *(undefined4 *)(pauVar18[1] + 0x10) = uVar3;
        }
        if ((uVar16 & 0x10) != 0) {
          *(int *)pauVar18[2] = auVar44._16_4_;
        }
        if ((uVar16 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar77,1);
          *(undefined4 *)(pauVar18[2] + 0x10) = uVar3;
        }
        if ((uVar16 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar77,2);
          *(undefined4 *)pauVar18[3] = uVar3;
        }
        if (cVar14 < '\0') {
          uVar3 = vextractps_avx(auVar77,3);
          *(undefined4 *)(pauVar18[3] + 0x10) = uVar3;
        }
        if ((uVar16 & 1) != 0) {
          *(int *)(*pauVar18 + 4) = auVar26._0_4_;
        }
        if ((uVar16 & 2) != 0) {
          uVar3 = vextractps_avx(auVar60,1);
          *(undefined4 *)(*pauVar18 + 0x14) = uVar3;
        }
        if ((uVar16 & 4) != 0) {
          uVar3 = vextractps_avx(auVar60,2);
          *(undefined4 *)(pauVar18[1] + 4) = uVar3;
        }
        if ((uVar16 & 8) != 0) {
          uVar3 = vextractps_avx(auVar60,3);
          *(undefined4 *)(pauVar18[1] + 0x14) = uVar3;
        }
        if ((uVar16 & 0x10) != 0) {
          *(int *)(pauVar18[2] + 4) = auVar26._16_4_;
        }
        if ((uVar16 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar63,1);
          *(undefined4 *)(pauVar18[2] + 0x14) = uVar3;
        }
        if ((uVar16 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar63,2);
          *(undefined4 *)(pauVar18[3] + 4) = uVar3;
        }
        if (cVar14 < '\0') {
          uVar3 = vextractps_avx(auVar63,3);
          *(undefined4 *)(pauVar18[3] + 0x14) = uVar3;
        }
        if ((uVar16 & 1) != 0) {
          *(int *)(*pauVar18 + 8) = auVar28._0_4_;
        }
        if ((uVar16 & 2) != 0) {
          uVar3 = vextractps_avx(auVar24,1);
          *(undefined4 *)(*pauVar18 + 0x18) = uVar3;
        }
        if ((uVar16 & 4) != 0) {
          uVar3 = vextractps_avx(auVar24,2);
          *(undefined4 *)(pauVar18[1] + 8) = uVar3;
        }
        if ((uVar16 & 8) != 0) {
          uVar3 = vextractps_avx(auVar24,3);
          *(undefined4 *)(pauVar18[1] + 0x18) = uVar3;
        }
        if ((uVar16 & 0x10) != 0) {
          *(int *)(pauVar18[2] + 8) = auVar28._16_4_;
        }
        if ((uVar16 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar32,1);
          *(undefined4 *)(pauVar18[2] + 0x18) = uVar3;
        }
        if ((uVar16 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar32,2);
          *(undefined4 *)(pauVar18[3] + 8) = uVar3;
        }
        if (cVar14 < '\0') {
          uVar3 = vextractps_avx(auVar32,3);
          *(undefined4 *)(pauVar18[3] + 0x18) = uVar3;
        }
        if ((uVar16 & 1) != 0) {
          *(int *)(*pauVar18 + 0xc) = auVar61._0_4_;
        }
        if ((uVar16 & 2) != 0) {
          uVar3 = vextractps_avx(auVar87,1);
          *(undefined4 *)(*pauVar18 + 0x1c) = uVar3;
        }
        if ((uVar16 & 4) != 0) {
          uVar3 = vextractps_avx(auVar87,2);
          *(undefined4 *)(pauVar18[1] + 0xc) = uVar3;
        }
        if ((uVar16 & 8) != 0) {
          uVar3 = vextractps_avx(auVar87,3);
          *(undefined4 *)(pauVar18[1] + 0x1c) = uVar3;
        }
        if ((uVar16 & 0x10) != 0) {
          *(int *)(pauVar18[2] + 0xc) = auVar61._16_4_;
        }
        if ((uVar16 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar94,1);
          *(undefined4 *)(pauVar18[2] + 0x1c) = uVar3;
        }
        if ((uVar16 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar94,2);
          *(undefined4 *)(pauVar18[3] + 0xc) = uVar3;
        }
        if (cVar14 < '\0') {
          uVar3 = vextractps_avx(auVar94,3);
          *(undefined4 *)(pauVar18[3] + 0x1c) = uVar3;
        }
      }
    }
  }
  return;
}

// ApplyLegacySphericalBackstopConstraintsWithRadiusMap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_CunfCunfCunfCuniCuni_avx2 @ 14031eae0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLegacySphericalBackstopConstraintsWithRadiusMap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_CunfCunfCunfCuniCuni_avx2
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,float param_5,
               float param_6,float param_7,int param_8,uint param_9)

{
  float *pfVar1;
  undefined1 (*pauVar2) [32];
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [32];
  char cVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined1 (*pauVar17) [32];
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  ulonglong uVar21;
  uint uVar22;
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [16];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar35 [16];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar36 [16];
  undefined1 auVar39 [16];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [16];
  undefined1 auVar45 [32];
  undefined1 auVar52 [16];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [16];
  undefined1 auVar58 [32];
  undefined1 auVar59 [16];
  float fVar60;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  undefined1 auVar61 [32];
  float fVar68;
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  uint uVar71;
  uint uVar73;
  uint uVar74;
  uint uVar75;
  uint uVar76;
  uint uVar77;
  uint uVar78;
  uint uVar79;
  undefined1 auVar72 [32];
  undefined1 auVar80 [32];
  float fVar81;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  undefined1 auVar82 [32];
  float fVar89;
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  uint local_2a0;
  uint uStack_29c;
  uint uStack_298;
  uint uStack_294;
  uint uStack_290;
  uint uStack_28c;
  uint uStack_288;
  uint uStack_284;
  
  uVar15 = param_9 + 7;
  if (-1 < (int)param_9) {
    uVar15 = param_9;
  }
  if ((int)(uVar15 & 0xfffffff8) < 1) {
    uVar16 = 0;
    if ((int)param_9 < 1) {
      return;
    }
  }
  else {
    lVar19 = (longlong)param_8 * 0x10 + param_1;
    lVar18 = (longlong)param_8 * 0xc + 0x40;
    uVar21 = 0;
    uVar16 = 0;
    do {
      auVar25 = *(undefined1 (*) [32])(lVar19 + uVar21 * 4);
      auVar37 = *(undefined1 (*) [32])(lVar19 + 0x20 + uVar21 * 4);
      auVar41 = *(undefined1 (*) [32])(lVar19 + 0x40 + uVar21 * 4);
      auVar33 = *(undefined1 (*) [32])(lVar19 + 0x60 + uVar21 * 4);
      auVar38 = vperm2f128_avx(auVar25,auVar41,0x20);
      auVar55 = vperm2f128_avx(auVar25,auVar41,0x31);
      auVar31 = vperm2f128_avx(auVar37,auVar33,0x20);
      auVar80 = vperm2f128_avx(auVar37,auVar33,0x31);
      auVar30 = vunpckhps_avx(auVar38,auVar55);
      auVar24 = vunpckhps_avx(auVar31,auVar80);
      auVar46 = vunpckhpd_avx(auVar30,auVar24);
      auVar32 = vcmpps_avx(auVar46,
                           ___ymm_0000000000000000000000000000000000000000000000000000000000000000,4
                          );
      if ((((((((SUB321(auVar32 >> 0x1f,0) & 1) != 0 || (SUB321(auVar32 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar32 >> 0x5f,0) & 1) != 0) || SUB321(auVar32 >> 0x7f,0) != '\0') ||
            (SUB321(auVar32 >> 0x9f,0) & 1) != 0) || SUB321(auVar32 >> 0xbf,0) != '\0') ||
          (SUB321(auVar32 >> 0xdf,0) & 1) != 0) || auVar32[0x1f] < '\0') {
        auVar45 = vunpcklpd_avx(auVar30,auVar24);
        auVar30 = vunpcklps_avx(auVar38,auVar55);
        auVar24 = vunpcklps_avx(auVar31,auVar80);
        auVar23 = vunpckhpd_avx(auVar30,auVar24);
        auVar40 = vunpcklpd_avx(auVar30,auVar24);
        auVar30 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar18);
        auVar24 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar18);
        auVar38 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar24);
        auVar55 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,auVar30);
        auVar38 = vblendps_avx(auVar55,auVar38,0x88);
        auVar55 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar24);
        auVar31 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,*(undefined1 (*) [32])(param_2 + lVar18));
        auVar55 = vblendps_avx(auVar31,auVar55,0x13);
        auVar42 = vperm2f128_avx(auVar38,auVar55,0x31);
        auVar30 = vblendps_avx(auVar24,auVar30,0x24);
        auVar30 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar30);
        auVar24 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,*(undefined1 (*) [32])(param_2 + lVar18));
        auVar31 = vblendps_avx(auVar30,auVar24,0xe0);
        auVar30 = *(undefined1 (*) [32])(param_3 + -0x40 + lVar18);
        auVar24 = *(undefined1 (*) [32])(param_3 + -0x20 + lVar18);
        auVar80 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar24);
        auVar90 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,auVar30);
        auVar80 = vblendps_avx(auVar90,auVar80,0x88);
        auVar90 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar24);
        auVar47 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,*(undefined1 (*) [32])(param_3 + lVar18));
        auVar90 = vblendps_avx(auVar47,auVar90,0x13);
        auVar47 = vperm2f128_avx(auVar80,auVar90,0x31);
        auVar30 = vblendps_avx(auVar24,auVar30,0x24);
        auVar30 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar30);
        auVar24 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,*(undefined1 (*) [32])(param_3 + lVar18));
        auVar30 = vblendps_avx(auVar30,auVar24,0xe0);
        pfVar1 = (float *)(param_4 + (uVar21 & 0xffffffff));
        auVar12._4_4_ = param_5;
        auVar12._0_4_ = param_5;
        auVar12._8_4_ = param_5;
        auVar12._12_4_ = param_5;
        auVar12._16_4_ = param_5;
        auVar12._20_4_ = param_5;
        auVar12._24_4_ = param_5;
        auVar12._28_4_ = param_5;
        auVar54._0_4_ = -(param_5 * auVar80._0_4_) + auVar38._0_4_;
        auVar54._4_4_ = -(param_5 * auVar80._4_4_) + auVar38._4_4_;
        auVar54._8_4_ = -(param_5 * auVar80._8_4_) + auVar38._8_4_;
        auVar54._12_4_ = -(param_5 * auVar80._12_4_) + auVar38._12_4_;
        auVar54._16_4_ = -(param_5 * auVar90._0_4_) + auVar55._0_4_;
        auVar54._20_4_ = -(param_5 * auVar90._4_4_) + auVar55._4_4_;
        auVar54._24_4_ = -(param_5 * auVar90._8_4_) + auVar55._8_4_;
        auVar54._28_4_ = -(param_5 * auVar90._12_4_) + auVar55._12_4_;
        auVar61._0_4_ = -(param_5 * auVar47._0_4_) + auVar42._0_4_;
        auVar61._4_4_ = -(param_5 * auVar47._4_4_) + auVar42._4_4_;
        auVar61._8_4_ = -(param_5 * auVar47._8_4_) + auVar42._8_4_;
        auVar61._12_4_ = -(param_5 * auVar47._12_4_) + auVar42._12_4_;
        auVar61._16_4_ = -(param_5 * auVar47._16_4_) + auVar42._16_4_;
        auVar61._20_4_ = -(param_5 * auVar47._20_4_) + auVar42._20_4_;
        auVar61._24_4_ = -(param_5 * auVar47._24_4_) + auVar42._24_4_;
        auVar61._28_4_ = -(param_5 * auVar47._28_4_) + auVar42._28_4_;
        auVar69._0_4_ = -(param_5 * auVar30._0_4_) + auVar31._0_4_;
        auVar69._4_4_ = -(param_5 * auVar30._4_4_) + auVar31._4_4_;
        auVar69._8_4_ = -(param_5 * auVar30._8_4_) + auVar31._8_4_;
        auVar69._12_4_ = -(param_5 * auVar30._12_4_) + auVar31._12_4_;
        auVar69._16_4_ = -(param_5 * auVar30._16_4_) + auVar31._16_4_;
        auVar69._20_4_ = -(param_5 * auVar30._20_4_) + auVar31._20_4_;
        auVar69._24_4_ = -(param_5 * auVar30._24_4_) + auVar31._24_4_;
        auVar69._28_4_ = -(param_5 * auVar30._28_4_) + auVar31._28_4_;
        auVar24 = vsubps_avx(auVar40,auVar54);
        auVar23 = vsubps_avx(auVar23,auVar61);
        auVar45 = vsubps_avx(auVar45,auVar69);
        fVar4 = auVar23._0_4_;
        fVar5 = auVar23._4_4_;
        fVar6 = auVar23._8_4_;
        fVar7 = auVar23._12_4_;
        fVar8 = auVar23._16_4_;
        fVar9 = auVar23._20_4_;
        fVar10 = auVar23._24_4_;
        fVar11 = auVar23._28_4_;
        fVar81 = auVar24._0_4_;
        fVar84 = auVar24._4_4_;
        fVar86 = auVar24._8_4_;
        fVar88 = auVar24._12_4_;
        fVar92 = auVar24._16_4_;
        fVar94 = auVar24._20_4_;
        fVar96 = auVar24._24_4_;
        fVar98 = auVar24._28_4_;
        fVar60 = auVar45._0_4_;
        auVar40._0_4_ = fVar60 * fVar60 + fVar81 * fVar81 + fVar4 * fVar4;
        fVar62 = auVar45._4_4_;
        auVar40._4_4_ = fVar62 * fVar62 + fVar84 * fVar84 + fVar5 * fVar5;
        fVar63 = auVar45._8_4_;
        auVar40._8_4_ = fVar63 * fVar63 + fVar86 * fVar86 + fVar6 * fVar6;
        fVar64 = auVar45._12_4_;
        auVar40._12_4_ = fVar64 * fVar64 + fVar88 * fVar88 + fVar7 * fVar7;
        fVar65 = auVar45._16_4_;
        auVar40._16_4_ = fVar65 * fVar65 + fVar92 * fVar92 + fVar8 * fVar8;
        fVar66 = auVar45._20_4_;
        auVar40._20_4_ = fVar66 * fVar66 + fVar94 * fVar94 + fVar9 * fVar9;
        fVar67 = auVar45._24_4_;
        auVar40._24_4_ = fVar67 * fVar67 + fVar96 * fVar96 + fVar10 * fVar10;
        fVar68 = auVar45._28_4_;
        auVar40._28_4_ = fVar68 * fVar68 + fVar98 * fVar98 + fVar11 * fVar11;
        auVar24 = vsqrtps_avx(auVar40);
        auVar23._0_4_ = param_7 * *pfVar1 + param_6;
        auVar23._4_4_ = param_7 * pfVar1[1] + param_6;
        auVar23._8_4_ = param_7 * pfVar1[2] + param_6;
        auVar23._12_4_ = param_7 * pfVar1[3] + param_6;
        auVar23._16_4_ = param_7 * pfVar1[4] + param_6;
        auVar23._20_4_ = param_7 * pfVar1[5] + param_6;
        auVar23._24_4_ = param_7 * pfVar1[6] + param_6;
        auVar23._28_4_ = param_7 * pfVar1[7] + param_6;
        auVar24 = vdivps_avx(auVar23,auVar24);
        fVar100 = auVar24._0_4_;
        fVar101 = auVar24._4_4_;
        fVar102 = auVar24._8_4_;
        fVar103 = auVar24._12_4_;
        fVar104 = auVar24._16_4_;
        fVar105 = auVar24._20_4_;
        fVar106 = auVar24._24_4_;
        fVar107 = auVar24._28_4_;
        auVar24 = vsubps_avx(auVar12,auVar23);
        fVar83 = auVar24._0_4_;
        auVar45._0_4_ = -(fVar83 * auVar80._0_4_) + auVar38._0_4_;
        fVar85 = auVar24._4_4_;
        auVar45._4_4_ = -(fVar85 * auVar80._4_4_) + auVar38._4_4_;
        fVar87 = auVar24._8_4_;
        auVar45._8_4_ = -(fVar87 * auVar80._8_4_) + auVar38._8_4_;
        fVar89 = auVar24._12_4_;
        auVar45._12_4_ = -(fVar89 * auVar80._12_4_) + auVar38._12_4_;
        fVar93 = auVar24._16_4_;
        auVar45._16_4_ = -(fVar93 * auVar90._0_4_) + auVar55._0_4_;
        fVar95 = auVar24._20_4_;
        auVar45._20_4_ = -(fVar95 * auVar90._4_4_) + auVar55._4_4_;
        fVar97 = auVar24._24_4_;
        auVar45._24_4_ = -(fVar97 * auVar90._8_4_) + auVar55._8_4_;
        fVar99 = auVar24._28_4_;
        auVar45._28_4_ = -(fVar99 * auVar90._12_4_) + auVar55._12_4_;
        auVar24._0_4_ = auVar23._0_4_ * auVar23._0_4_;
        auVar24._4_4_ = auVar23._4_4_ * auVar23._4_4_;
        auVar24._8_4_ = auVar23._8_4_ * auVar23._8_4_;
        auVar24._12_4_ = auVar23._12_4_ * auVar23._12_4_;
        auVar24._16_4_ = auVar23._16_4_ * auVar23._16_4_;
        auVar24._20_4_ = auVar23._20_4_ * auVar23._20_4_;
        auVar24._24_4_ = auVar23._24_4_ * auVar23._24_4_;
        auVar24._28_4_ = auVar23._28_4_ * auVar23._28_4_;
        auVar24 = vcmpps_avx(auVar40,auVar24,1);
        auVar38._4_4_ = __real_322bcc77;
        auVar38._0_4_ = __real_322bcc77;
        auVar38._8_4_ = __real_322bcc77;
        auVar38._12_4_ = __real_322bcc77;
        auVar38._16_4_ = __real_322bcc77;
        auVar38._20_4_ = __real_322bcc77;
        auVar38._24_4_ = __real_322bcc77;
        auVar38._28_4_ = __real_322bcc77;
        auVar38 = vcmpps_avx(auVar40,auVar38,1);
        uVar71 = auVar24._0_4_;
        auVar55._0_4_ = uVar71 & (uint)(fVar100 * fVar81 + auVar54._0_4_);
        uVar73 = auVar24._4_4_;
        auVar55._4_4_ = uVar73 & (uint)(fVar101 * fVar84 + auVar54._4_4_);
        uVar74 = auVar24._8_4_;
        auVar55._8_4_ = uVar74 & (uint)(fVar102 * fVar86 + auVar54._8_4_);
        uVar75 = auVar24._12_4_;
        auVar55._12_4_ = uVar75 & (uint)(fVar103 * fVar88 + auVar54._12_4_);
        uVar76 = auVar24._16_4_;
        auVar55._16_4_ = uVar76 & (uint)(fVar104 * fVar92 + auVar54._16_4_);
        uVar77 = auVar24._20_4_;
        auVar55._20_4_ = uVar77 & (uint)(fVar105 * fVar94 + auVar54._20_4_);
        uVar78 = auVar24._24_4_;
        auVar55._24_4_ = uVar78 & (uint)(fVar106 * fVar96 + auVar54._24_4_);
        uVar79 = auVar24._28_4_;
        auVar55._28_4_ = uVar79 & (uint)(fVar107 * fVar98 + auVar54._28_4_);
        auVar24 = vblendvps_avx(auVar55,auVar45,auVar38);
        auVar55 = vcmpps_avx(auVar24,
                             ___ymm_0000000000000000000000000000000000000000000000000000000000000000
                             ,4);
        local_2a0 = auVar32._0_4_;
        uStack_29c = auVar32._4_4_;
        uStack_298 = auVar32._8_4_;
        uStack_294 = auVar32._12_4_;
        uStack_290 = auVar32._16_4_;
        uStack_28c = auVar32._20_4_;
        uStack_288 = auVar32._24_4_;
        uStack_284 = auVar32._28_4_;
        auVar32._0_4_ = auVar55._0_4_ & local_2a0;
        auVar32._4_4_ = auVar55._4_4_ & uStack_29c;
        auVar32._8_4_ = auVar55._8_4_ & uStack_298;
        auVar32._12_4_ = auVar55._12_4_ & uStack_294;
        auVar32._16_4_ = auVar55._16_4_ & uStack_290;
        auVar32._20_4_ = auVar55._20_4_ & uStack_28c;
        auVar32._24_4_ = auVar55._24_4_ & uStack_288;
        auVar32._28_4_ = auVar55._28_4_ & uStack_284;
        uVar22 = vmovmskps_avx(auVar32);
        if (uVar22 != 0) {
          auVar80._0_4_ = -(fVar83 * auVar47._0_4_) + auVar42._0_4_;
          auVar80._4_4_ = -(fVar85 * auVar47._4_4_) + auVar42._4_4_;
          auVar80._8_4_ = -(fVar87 * auVar47._8_4_) + auVar42._8_4_;
          auVar80._12_4_ = -(fVar89 * auVar47._12_4_) + auVar42._12_4_;
          auVar80._16_4_ = -(fVar93 * auVar47._16_4_) + auVar42._16_4_;
          auVar80._20_4_ = -(fVar95 * auVar47._20_4_) + auVar42._20_4_;
          auVar80._24_4_ = -(fVar97 * auVar47._24_4_) + auVar42._24_4_;
          auVar80._28_4_ = -(fVar99 * auVar47._28_4_) + auVar42._28_4_;
          auVar90._0_4_ = -(fVar83 * auVar30._0_4_) + auVar31._0_4_;
          auVar90._4_4_ = -(fVar85 * auVar30._4_4_) + auVar31._4_4_;
          auVar90._8_4_ = -(fVar87 * auVar30._8_4_) + auVar31._8_4_;
          auVar90._12_4_ = -(fVar89 * auVar30._12_4_) + auVar31._12_4_;
          auVar90._16_4_ = -(fVar93 * auVar30._16_4_) + auVar31._16_4_;
          auVar90._20_4_ = -(fVar95 * auVar30._20_4_) + auVar31._20_4_;
          auVar90._24_4_ = -(fVar97 * auVar30._24_4_) + auVar31._24_4_;
          auVar90._28_4_ = -(fVar99 * auVar30._28_4_) + auVar31._28_4_;
          auVar30._0_4_ = uVar71 & (uint)(fVar100 * fVar4 + auVar61._0_4_);
          auVar30._4_4_ = uVar73 & (uint)(fVar101 * fVar5 + auVar61._4_4_);
          auVar30._8_4_ = uVar74 & (uint)(fVar102 * fVar6 + auVar61._8_4_);
          auVar30._12_4_ = uVar75 & (uint)(fVar103 * fVar7 + auVar61._12_4_);
          auVar30._16_4_ = uVar76 & (uint)(fVar104 * fVar8 + auVar61._16_4_);
          auVar30._20_4_ = uVar77 & (uint)(fVar105 * fVar9 + auVar61._20_4_);
          auVar30._24_4_ = uVar78 & (uint)(fVar106 * fVar10 + auVar61._24_4_);
          auVar30._28_4_ = uVar79 & (uint)(fVar107 * fVar11 + auVar61._28_4_);
          auVar32 = vblendvps_avx(auVar30,auVar80,auVar38);
          auVar31._0_4_ = uVar71 & (uint)(fVar100 * fVar60 + auVar69._0_4_);
          auVar31._4_4_ = uVar73 & (uint)(fVar101 * fVar62 + auVar69._4_4_);
          auVar31._8_4_ = uVar74 & (uint)(fVar102 * fVar63 + auVar69._8_4_);
          auVar31._12_4_ = uVar75 & (uint)(fVar103 * fVar64 + auVar69._12_4_);
          auVar31._16_4_ = uVar76 & (uint)(fVar104 * fVar65 + auVar69._16_4_);
          auVar31._20_4_ = uVar77 & (uint)(fVar105 * fVar66 + auVar69._20_4_);
          auVar31._24_4_ = uVar78 & (uint)(fVar106 * fVar67 + auVar69._24_4_);
          auVar31._28_4_ = uVar79 & (uint)(fVar107 * fVar68 + auVar69._28_4_);
          auVar30 = vblendvps_avx(auVar31,auVar90,auVar38);
          cVar13 = (char)uVar22;
          if (cVar13 == -1) {
            auVar25 = vunpcklps_avx(auVar24,auVar32);
            auVar37 = vunpcklps_avx(auVar30,auVar46);
            auVar33 = vunpcklpd_avx(auVar25,auVar37);
            auVar25 = vunpckhpd_avx(auVar25,auVar37);
            auVar37 = vunpckhps_avx(auVar24,auVar32);
            auVar41 = vunpckhps_avx(auVar30,auVar46);
            auVar32 = vunpcklpd_avx(auVar37,auVar41);
            auVar46._16_16_ = auVar25._0_16_;
            auVar46._0_16_ = auVar33._0_16_;
            *(undefined1 (*) [32])(lVar19 + uVar21 * 4) = auVar46;
            auVar37 = vunpckhpd_avx(auVar37,auVar41);
            auVar41._16_16_ = auVar37._0_16_;
            auVar41._0_16_ = auVar32._0_16_;
            *(undefined1 (*) [32])(lVar19 + 0x20 + uVar21 * 4) = auVar41;
            auVar25 = vperm2f128_avx(auVar33,auVar25,0x31);
            *(undefined1 (*) [32])(lVar19 + 0x40 + uVar21 * 4) = auVar25;
            auVar25 = vperm2f128_avx(auVar32,auVar37,0x31);
            *(undefined1 (*) [32])(lVar19 + 0x60 + uVar21 * 4) = auVar25;
          }
          else {
            auVar44 = auVar24._0_16_;
            auVar52 = auVar24._16_16_;
            auVar36 = auVar32._0_16_;
            auVar39 = auVar32._16_16_;
            auVar29 = auVar30._0_16_;
            auVar35 = auVar30._16_16_;
            if ((uVar22 & 1) != 0) {
              *(int *)(lVar19 + uVar21 * 4) = auVar24._0_4_;
            }
            if ((uVar22 & 2) != 0) {
              uVar3 = vextractps_avx(auVar44,1);
              *(undefined4 *)(lVar19 + 0x10 + uVar21 * 4) = uVar3;
            }
            if ((uVar22 & 4) != 0) {
              uVar3 = vextractps_avx(auVar44,2);
              *(undefined4 *)(lVar19 + 0x20 + uVar21 * 4) = uVar3;
            }
            if ((uVar22 & 8) != 0) {
              uVar3 = vextractps_avx(auVar44,3);
              *(undefined4 *)(lVar19 + 0x30 + uVar21 * 4) = uVar3;
            }
            if ((uVar22 & 0x10) != 0) {
              *(int *)(lVar19 + 0x40 + uVar21 * 4) = auVar24._16_4_;
            }
            if ((uVar22 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar52,1);
              *(undefined4 *)(lVar19 + 0x50 + uVar21 * 4) = uVar3;
            }
            if ((uVar22 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar52,2);
              *(undefined4 *)(lVar19 + 0x60 + uVar21 * 4) = uVar3;
            }
            if (cVar13 < '\0') {
              uVar3 = vextractps_avx(auVar52,3);
              *(undefined4 *)(lVar19 + 0x70 + uVar21 * 4) = uVar3;
            }
            if ((uVar22 & 1) != 0) {
              *(int *)(lVar19 + 4 + uVar21 * 4) = auVar32._0_4_;
            }
            if ((uVar22 & 2) != 0) {
              uVar3 = vextractps_avx(auVar36,1);
              *(undefined4 *)(lVar19 + 0x14 + uVar21 * 4) = uVar3;
            }
            if ((uVar22 & 4) != 0) {
              uVar3 = vextractps_avx(auVar36,2);
              *(undefined4 *)(lVar19 + 0x24 + uVar21 * 4) = uVar3;
            }
            if ((uVar22 & 8) != 0) {
              uVar3 = vextractps_avx(auVar36,3);
              *(undefined4 *)(lVar19 + 0x34 + uVar21 * 4) = uVar3;
            }
            if ((uVar22 & 0x10) != 0) {
              *(int *)(lVar19 + 0x44 + uVar21 * 4) = auVar32._16_4_;
            }
            if ((uVar22 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar39,1);
              *(undefined4 *)(lVar19 + 0x54 + uVar21 * 4) = uVar3;
            }
            if ((uVar22 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar39,2);
              *(undefined4 *)(lVar19 + 100 + uVar21 * 4) = uVar3;
            }
            if (cVar13 < '\0') {
              uVar3 = vextractps_avx(auVar39,3);
              *(undefined4 *)(lVar19 + 0x74 + uVar21 * 4) = uVar3;
            }
            if ((uVar22 & 1) != 0) {
              *(int *)(lVar19 + 8 + uVar21 * 4) = auVar30._0_4_;
            }
            if ((uVar22 & 2) != 0) {
              uVar3 = vextractps_avx(auVar29,1);
              *(undefined4 *)(lVar19 + 0x18 + uVar21 * 4) = uVar3;
            }
            if ((uVar22 & 4) != 0) {
              uVar3 = vextractps_avx(auVar29,2);
              *(undefined4 *)(lVar19 + 0x28 + uVar21 * 4) = uVar3;
            }
            if ((uVar22 & 8) != 0) {
              uVar3 = vextractps_avx(auVar29,3);
              *(undefined4 *)(lVar19 + 0x38 + uVar21 * 4) = uVar3;
            }
            if ((uVar22 & 0x10) != 0) {
              *(int *)(lVar19 + 0x48 + uVar21 * 4) = auVar30._16_4_;
            }
            if ((uVar22 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar35,1);
              *(undefined4 *)(lVar19 + 0x58 + uVar21 * 4) = uVar3;
            }
            if ((uVar22 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar35,2);
              *(undefined4 *)(lVar19 + 0x68 + uVar21 * 4) = uVar3;
            }
            if (cVar13 < '\0') {
              uVar3 = vextractps_avx(auVar35,3);
              *(undefined4 *)(lVar19 + 0x78 + uVar21 * 4) = uVar3;
            }
            if ((uVar22 & 1) != 0) {
              uVar3 = vextractps_avx(auVar25._0_16_,3);
              *(undefined4 *)(lVar19 + 0xc + uVar21 * 4) = uVar3;
            }
            if ((uVar22 & 2) != 0) {
              uVar3 = vextractps_avx(auVar25._16_16_,3);
              *(undefined4 *)(lVar19 + 0x1c + uVar21 * 4) = uVar3;
            }
            if ((uVar22 & 4) != 0) {
              uVar3 = vextractps_avx(auVar37._0_16_,3);
              *(undefined4 *)(lVar19 + 0x2c + uVar21 * 4) = uVar3;
            }
            if ((uVar22 & 8) != 0) {
              uVar3 = vextractps_avx(auVar37._16_16_,3);
              *(undefined4 *)(lVar19 + 0x3c + uVar21 * 4) = uVar3;
            }
            if ((uVar22 & 0x10) != 0) {
              uVar3 = vextractps_avx(auVar41._0_16_,3);
              *(undefined4 *)(lVar19 + 0x4c + uVar21 * 4) = uVar3;
            }
            if ((uVar22 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar41._16_16_,3);
              *(undefined4 *)(lVar19 + 0x5c + uVar21 * 4) = uVar3;
            }
            if ((uVar22 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar33._0_16_,3);
              *(undefined4 *)(lVar19 + 0x6c + uVar21 * 4) = uVar3;
            }
            if (cVar13 < '\0') {
              uVar3 = vextractps_avx(auVar33._16_16_,3);
              *(undefined4 *)(lVar19 + 0x7c + uVar21 * 4) = uVar3;
            }
          }
        }
      }
      uVar16 = uVar16 + 8;
      uVar21 = uVar21 + 0x20;
      lVar18 = lVar18 + 0x60;
    } while (uVar16 < (uVar15 & 0xfffffff8));
    if ((int)param_9 <= (int)uVar16) {
      return;
    }
  }
  iVar14 = (int)uVar16;
  auVar25._4_4_ = iVar14;
  auVar25._0_4_ = iVar14;
  auVar25._8_4_ = iVar14;
  auVar25._12_4_ = iVar14;
  auVar25._16_4_ = iVar14;
  auVar25._20_4_ = iVar14;
  auVar25._24_4_ = iVar14;
  auVar25._28_4_ = iVar14;
  auVar25 = vpor_avx2(auVar25,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar37._4_4_ = param_9;
  auVar37._0_4_ = param_9;
  auVar37._8_4_ = param_9;
  auVar37._12_4_ = param_9;
  auVar37._16_4_ = param_9;
  auVar37._20_4_ = param_9;
  auVar37._24_4_ = param_9;
  auVar37._28_4_ = param_9;
  auVar25 = vpcmpgtd_avx2(auVar37,auVar25);
  lVar18 = (longlong)(param_8 + iVar14);
  pauVar17 = (undefined1 (*) [32])(param_1 + lVar18 * 0x10);
  iVar20 = vmovmskps_avx(auVar25);
  if (iVar20 == 0xff) {
    auVar41 = vperm2f128_avx(*pauVar17,pauVar17[2],0x20);
    auVar33 = vperm2f128_avx(*pauVar17,pauVar17[2],0x31);
    auVar32 = vperm2f128_avx(pauVar17[1],pauVar17[3],0x20);
    auVar30 = vperm2f128_avx(pauVar17[1],pauVar17[3],0x31);
    auVar37 = vunpcklps_avx(auVar41,auVar33);
    auVar41 = vunpckhps_avx(auVar41,auVar33);
    auVar46 = vunpcklps_avx(auVar32,auVar30);
    auVar33 = vunpckhps_avx(auVar32,auVar30);
    auVar32 = vunpcklpd_avx(auVar37,auVar46);
    auVar37 = vunpckhpd_avx(auVar37,auVar46);
    auVar46 = vunpcklpd_avx(auVar41,auVar33);
    auVar41 = vunpckhpd_avx(auVar41,auVar33);
  }
  else {
    auVar32 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar25);
    auVar37 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar25);
    auVar46 = vgatherdps(ZEXT832(0),auVar25);
    auVar41 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar25);
  }
  auVar33 = vmaskmovps_avx(auVar25,auVar32);
  auVar37 = vmaskmovps_avx(auVar25,auVar37);
  auVar32 = vmaskmovps_avx(auVar25,auVar46);
  auVar46 = vcmpps_avx(auVar41,ZEXT832(0) << 0x20,4);
  auVar46 = auVar25 & auVar46;
  if ((((((((SUB321(auVar46 >> 0x1f,0) & 1) != 0 || (SUB321(auVar46 >> 0x3f,0) & 1) != 0) ||
          (SUB321(auVar46 >> 0x5f,0) & 1) != 0) || SUB321(auVar46 >> 0x7f,0) != '\0') ||
        (SUB321(auVar46 >> 0x9f,0) & 1) != 0) || SUB321(auVar46 >> 0xbf,0) != '\0') ||
      (SUB321(auVar46 >> 0xdf,0) & 1) != 0) || auVar46[0x1f] < '\0') {
    pauVar2 = (undefined1 (*) [32])(param_2 + lVar18 * 0xc);
    if ((char)iVar20 == -1) {
      auVar46 = pauVar2[1];
      auVar30 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar46);
      auVar24 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,*pauVar2);
      auVar30 = vblendps_avx(auVar24,auVar30,0x88);
      auVar24 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar46);
      auVar38 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,pauVar2[2]);
      auVar24 = vblendps_avx(auVar38,auVar24,0x13);
      auVar47._16_16_ = auVar24._0_16_;
      auVar47._0_16_ = auVar30._0_16_;
      auVar80 = vperm2f128_avx(auVar30,auVar24,0x31);
      auVar46 = vblendps_avx(auVar46,*pauVar2,0x24);
      auVar46 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar46);
      auVar30 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,pauVar2[2]);
      auVar38 = vblendps_avx(auVar46,auVar30,0xe0);
      auVar46 = *(undefined1 (*) [32])(param_3 + lVar18 * 0xc);
      auVar30 = *(undefined1 (*) [32])(param_3 + 0x20 + lVar18 * 0xc);
      auVar24 = *(undefined1 (*) [32])(param_3 + 0x40 + lVar18 * 0xc);
      auVar55 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar30);
      auVar31 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar46);
      auVar55 = vblendps_avx(auVar31,auVar55,0x88);
      auVar31 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar30);
      auVar90 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,auVar24);
      auVar31 = vblendps_avx(auVar90,auVar31,0x13);
      auVar42._16_16_ = auVar31._0_16_;
      auVar42._0_16_ = auVar55._0_16_;
      auVar55 = vperm2f128_avx(auVar55,auVar31,0x31);
      auVar46 = vblendps_avx(auVar30,auVar46,0x24);
      auVar46 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar46);
      auVar30 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,auVar24);
      auVar46 = vblendps_avx(auVar46,auVar30,0xe0);
    }
    else {
      auVar47 = vgatherdps(ZEXT832(0) << 0x20,auVar25);
      auVar80 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar25);
      auVar38 = vgatherdps(ZEXT832(0),auVar25);
      auVar42 = vgatherdps(ZEXT832(0) << 0x20,auVar25);
      auVar55 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar25);
      auVar46 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar25);
    }
    auVar30 = vmaskmovps_avx(auVar25,*(undefined1 (*) [32])(param_4 + (iVar14 << 2)));
    auVar91._0_4_ = param_7 * auVar30._0_4_ + param_6;
    auVar91._4_4_ = param_7 * auVar30._4_4_ + param_6;
    auVar91._8_4_ = param_7 * auVar30._8_4_ + param_6;
    auVar91._12_4_ = param_7 * auVar30._12_4_ + param_6;
    auVar91._16_4_ = param_7 * auVar30._16_4_ + param_6;
    auVar91._20_4_ = param_7 * auVar30._20_4_ + param_6;
    auVar91._24_4_ = param_7 * auVar30._24_4_ + param_6;
    auVar91._28_4_ = param_7 * auVar30._28_4_ + param_6;
    auVar82._4_4_ = param_5;
    auVar82._0_4_ = param_5;
    auVar82._8_4_ = param_5;
    auVar82._12_4_ = param_5;
    auVar82._16_4_ = param_5;
    auVar82._20_4_ = param_5;
    auVar82._24_4_ = param_5;
    auVar82._28_4_ = param_5;
    auVar58._0_4_ = -(param_5 * auVar42._0_4_) + auVar47._0_4_;
    auVar58._4_4_ = -(param_5 * auVar42._4_4_) + auVar47._4_4_;
    auVar58._8_4_ = -(param_5 * auVar42._8_4_) + auVar47._8_4_;
    auVar58._12_4_ = -(param_5 * auVar42._12_4_) + auVar47._12_4_;
    auVar58._16_4_ = -(param_5 * auVar42._16_4_) + auVar47._16_4_;
    auVar58._20_4_ = -(param_5 * auVar42._20_4_) + auVar47._20_4_;
    auVar58._24_4_ = -(param_5 * auVar42._24_4_) + auVar47._24_4_;
    auVar58._28_4_ = -(param_5 * auVar42._28_4_) + auVar47._28_4_;
    auVar70._0_4_ = -(param_5 * auVar55._0_4_) + auVar80._0_4_;
    auVar70._4_4_ = -(param_5 * auVar55._4_4_) + auVar80._4_4_;
    auVar70._8_4_ = -(param_5 * auVar55._8_4_) + auVar80._8_4_;
    auVar70._12_4_ = -(param_5 * auVar55._12_4_) + auVar80._12_4_;
    auVar70._16_4_ = -(param_5 * auVar55._16_4_) + auVar80._16_4_;
    auVar70._20_4_ = -(param_5 * auVar55._20_4_) + auVar80._20_4_;
    auVar70._24_4_ = -(param_5 * auVar55._24_4_) + auVar80._24_4_;
    auVar70._28_4_ = -(param_5 * auVar55._28_4_) + auVar80._28_4_;
    auVar72._0_4_ = -(param_5 * auVar46._0_4_) + auVar38._0_4_;
    auVar72._4_4_ = -(param_5 * auVar46._4_4_) + auVar38._4_4_;
    auVar72._8_4_ = -(param_5 * auVar46._8_4_) + auVar38._8_4_;
    auVar72._12_4_ = -(param_5 * auVar46._12_4_) + auVar38._12_4_;
    auVar72._16_4_ = -(param_5 * auVar46._16_4_) + auVar38._16_4_;
    auVar72._20_4_ = -(param_5 * auVar46._20_4_) + auVar38._20_4_;
    auVar72._24_4_ = -(param_5 * auVar46._24_4_) + auVar38._24_4_;
    auVar72._28_4_ = -(param_5 * auVar46._28_4_) + auVar38._28_4_;
    auVar33 = vsubps_avx(auVar33,auVar58);
    auVar37 = vsubps_avx(auVar37,auVar70);
    auVar32 = vsubps_avx(auVar32,auVar72);
    fVar4 = auVar37._0_4_;
    fVar5 = auVar37._4_4_;
    fVar6 = auVar37._8_4_;
    fVar7 = auVar37._12_4_;
    fVar8 = auVar37._16_4_;
    fVar9 = auVar37._20_4_;
    fVar10 = auVar37._24_4_;
    fVar11 = auVar37._28_4_;
    fVar100 = auVar33._0_4_;
    fVar101 = auVar33._4_4_;
    fVar102 = auVar33._8_4_;
    fVar103 = auVar33._12_4_;
    fVar104 = auVar33._16_4_;
    fVar105 = auVar33._20_4_;
    fVar106 = auVar33._24_4_;
    fVar107 = auVar33._28_4_;
    fVar60 = auVar32._0_4_;
    auVar33._0_4_ = fVar60 * fVar60 + fVar100 * fVar100 + fVar4 * fVar4;
    fVar62 = auVar32._4_4_;
    auVar33._4_4_ = fVar62 * fVar62 + fVar101 * fVar101 + fVar5 * fVar5;
    fVar63 = auVar32._8_4_;
    auVar33._8_4_ = fVar63 * fVar63 + fVar102 * fVar102 + fVar6 * fVar6;
    fVar64 = auVar32._12_4_;
    auVar33._12_4_ = fVar64 * fVar64 + fVar103 * fVar103 + fVar7 * fVar7;
    fVar65 = auVar32._16_4_;
    auVar33._16_4_ = fVar65 * fVar65 + fVar104 * fVar104 + fVar8 * fVar8;
    fVar66 = auVar32._20_4_;
    auVar33._20_4_ = fVar66 * fVar66 + fVar105 * fVar105 + fVar9 * fVar9;
    fVar67 = auVar32._24_4_;
    auVar33._24_4_ = fVar67 * fVar67 + fVar106 * fVar106 + fVar10 * fVar10;
    fVar68 = auVar32._28_4_;
    auVar33._28_4_ = fVar68 * fVar68 + fVar107 * fVar107 + fVar11 * fVar11;
    auVar37 = vsqrtps_avx(auVar33);
    auVar37 = vdivps_avx(auVar91,auVar37);
    fVar92 = auVar37._0_4_;
    fVar93 = auVar37._4_4_;
    fVar94 = auVar37._8_4_;
    fVar95 = auVar37._12_4_;
    fVar96 = auVar37._16_4_;
    fVar97 = auVar37._20_4_;
    fVar98 = auVar37._24_4_;
    fVar99 = auVar37._28_4_;
    auVar37 = vsubps_avx(auVar82,auVar91);
    fVar81 = auVar37._0_4_;
    auVar43._0_4_ = -(fVar81 * auVar42._0_4_) + auVar47._0_4_;
    fVar83 = auVar37._4_4_;
    auVar43._4_4_ = -(fVar83 * auVar42._4_4_) + auVar47._4_4_;
    fVar84 = auVar37._8_4_;
    auVar43._8_4_ = -(fVar84 * auVar42._8_4_) + auVar47._8_4_;
    fVar85 = auVar37._12_4_;
    auVar43._12_4_ = -(fVar85 * auVar42._12_4_) + auVar47._12_4_;
    fVar86 = auVar37._16_4_;
    auVar43._16_4_ = -(fVar86 * auVar42._16_4_) + auVar47._16_4_;
    fVar87 = auVar37._20_4_;
    auVar43._20_4_ = -(fVar87 * auVar42._20_4_) + auVar47._20_4_;
    fVar88 = auVar37._24_4_;
    auVar43._24_4_ = -(fVar88 * auVar42._24_4_) + auVar47._24_4_;
    fVar89 = auVar37._28_4_;
    auVar43._28_4_ = -(fVar89 * auVar42._28_4_) + auVar47._28_4_;
    auVar48._0_4_ = auVar91._0_4_ * auVar91._0_4_;
    auVar48._4_4_ = auVar91._4_4_ * auVar91._4_4_;
    auVar48._8_4_ = auVar91._8_4_ * auVar91._8_4_;
    auVar48._12_4_ = auVar91._12_4_ * auVar91._12_4_;
    auVar48._16_4_ = auVar91._16_4_ * auVar91._16_4_;
    auVar48._20_4_ = auVar91._20_4_ * auVar91._20_4_;
    auVar48._24_4_ = auVar91._24_4_ * auVar91._24_4_;
    auVar48._28_4_ = auVar91._28_4_ * auVar91._28_4_;
    auVar37 = vcmpps_avx(auVar33,auVar48,1);
    auVar49._4_4_ = __real_322bcc77;
    auVar49._0_4_ = __real_322bcc77;
    auVar49._8_4_ = __real_322bcc77;
    auVar49._12_4_ = __real_322bcc77;
    auVar49._16_4_ = __real_322bcc77;
    auVar49._20_4_ = __real_322bcc77;
    auVar49._24_4_ = __real_322bcc77;
    auVar49._28_4_ = __real_322bcc77;
    auVar33 = vcmpps_avx(auVar33,auVar49,1);
    uVar22 = auVar37._0_4_;
    auVar50._0_4_ = uVar22 & (uint)(fVar92 * fVar100 + auVar58._0_4_);
    uVar71 = auVar37._4_4_;
    auVar50._4_4_ = uVar71 & (uint)(fVar93 * fVar101 + auVar58._4_4_);
    uVar73 = auVar37._8_4_;
    auVar50._8_4_ = uVar73 & (uint)(fVar94 * fVar102 + auVar58._8_4_);
    uVar74 = auVar37._12_4_;
    auVar50._12_4_ = uVar74 & (uint)(fVar95 * fVar103 + auVar58._12_4_);
    uVar75 = auVar37._16_4_;
    auVar50._16_4_ = uVar75 & (uint)(fVar96 * fVar104 + auVar58._16_4_);
    uVar76 = auVar37._20_4_;
    auVar50._20_4_ = uVar76 & (uint)(fVar97 * fVar105 + auVar58._20_4_);
    uVar77 = auVar37._24_4_;
    auVar50._24_4_ = uVar77 & (uint)(fVar98 * fVar106 + auVar58._24_4_);
    uVar78 = auVar37._28_4_;
    auVar50._28_4_ = uVar78 & (uint)(fVar99 * fVar107 + auVar58._28_4_);
    auVar37 = vblendvps_avx(auVar50,auVar43,auVar33);
    auVar32 = vcmpps_avx(auVar41,ZEXT432(0) << 0x20,4);
    auVar30 = vcmpps_avx(auVar37,ZEXT432(0) << 0x20,4);
    auVar26._0_4_ = auVar30._0_4_ & auVar32._0_4_ & auVar25._0_4_;
    auVar26._4_4_ = auVar30._4_4_ & auVar32._4_4_ & auVar25._4_4_;
    auVar26._8_4_ = auVar30._8_4_ & auVar32._8_4_ & auVar25._8_4_;
    auVar26._12_4_ = auVar30._12_4_ & auVar32._12_4_ & auVar25._12_4_;
    auVar26._16_4_ = auVar30._16_4_ & auVar32._16_4_ & auVar25._16_4_;
    auVar26._20_4_ = auVar30._20_4_ & auVar32._20_4_ & auVar25._20_4_;
    auVar26._24_4_ = auVar30._24_4_ & auVar32._24_4_ & auVar25._24_4_;
    auVar26._28_4_ = auVar30._28_4_ & auVar32._28_4_ & auVar25._28_4_;
    uVar15 = vmovmskps_avx(auVar26);
    if (uVar15 != 0) {
      auVar56._0_4_ = -(fVar81 * auVar55._0_4_) + auVar80._0_4_;
      auVar56._4_4_ = -(fVar83 * auVar55._4_4_) + auVar80._4_4_;
      auVar56._8_4_ = -(fVar84 * auVar55._8_4_) + auVar80._8_4_;
      auVar56._12_4_ = -(fVar85 * auVar55._12_4_) + auVar80._12_4_;
      auVar56._16_4_ = -(fVar86 * auVar55._16_4_) + auVar80._16_4_;
      auVar56._20_4_ = -(fVar87 * auVar55._20_4_) + auVar80._20_4_;
      auVar56._24_4_ = -(fVar88 * auVar55._24_4_) + auVar80._24_4_;
      auVar56._28_4_ = -(fVar89 * auVar55._28_4_) + auVar80._28_4_;
      auVar53._0_4_ = -(fVar81 * auVar46._0_4_) + auVar38._0_4_;
      auVar53._4_4_ = -(fVar83 * auVar46._4_4_) + auVar38._4_4_;
      auVar53._8_4_ = -(fVar84 * auVar46._8_4_) + auVar38._8_4_;
      auVar53._12_4_ = -(fVar85 * auVar46._12_4_) + auVar38._12_4_;
      auVar53._16_4_ = -(fVar86 * auVar46._16_4_) + auVar38._16_4_;
      auVar53._20_4_ = -(fVar87 * auVar46._20_4_) + auVar38._20_4_;
      auVar53._24_4_ = -(fVar88 * auVar46._24_4_) + auVar38._24_4_;
      auVar53._28_4_ = -(fVar89 * auVar46._28_4_) + auVar38._28_4_;
      auVar27._0_4_ = uVar22 & (uint)(fVar92 * fVar4 + auVar70._0_4_);
      auVar27._4_4_ = uVar71 & (uint)(fVar93 * fVar5 + auVar70._4_4_);
      auVar27._8_4_ = uVar73 & (uint)(fVar94 * fVar6 + auVar70._8_4_);
      auVar27._12_4_ = uVar74 & (uint)(fVar95 * fVar7 + auVar70._12_4_);
      auVar27._16_4_ = uVar75 & (uint)(fVar96 * fVar8 + auVar70._16_4_);
      auVar27._20_4_ = uVar76 & (uint)(fVar97 * fVar9 + auVar70._20_4_);
      auVar27._24_4_ = uVar77 & (uint)(fVar98 * fVar10 + auVar70._24_4_);
      auVar27._28_4_ = uVar78 & (uint)(fVar99 * fVar11 + auVar70._28_4_);
      auVar25 = vblendvps_avx(auVar27,auVar56,auVar33);
      auVar28._0_4_ = uVar22 & (uint)(fVar92 * fVar60 + auVar72._0_4_);
      auVar28._4_4_ = uVar71 & (uint)(fVar93 * fVar62 + auVar72._4_4_);
      auVar28._8_4_ = uVar73 & (uint)(fVar94 * fVar63 + auVar72._8_4_);
      auVar28._12_4_ = uVar74 & (uint)(fVar95 * fVar64 + auVar72._12_4_);
      auVar28._16_4_ = uVar75 & (uint)(fVar96 * fVar65 + auVar72._16_4_);
      auVar28._20_4_ = uVar76 & (uint)(fVar97 * fVar66 + auVar72._20_4_);
      auVar28._24_4_ = uVar77 & (uint)(fVar98 * fVar67 + auVar72._24_4_);
      auVar28._28_4_ = uVar78 & (uint)(fVar99 * fVar68 + auVar72._28_4_);
      auVar33 = vblendvps_avx(auVar28,auVar53,auVar33);
      cVar13 = (char)uVar15;
      if (cVar13 == -1) {
        auVar32 = vunpcklps_avx(auVar37,auVar25);
        auVar30 = vunpcklps_avx(auVar33,auVar41);
        auVar46 = vunpcklpd_avx(auVar32,auVar30);
        auVar32 = vunpckhpd_avx(auVar32,auVar30);
        auVar25 = vunpckhps_avx(auVar37,auVar25);
        auVar37 = vunpckhps_avx(auVar33,auVar41);
        auVar41 = vunpcklpd_avx(auVar25,auVar37);
        auVar51._16_16_ = auVar32._0_16_;
        auVar51._0_16_ = auVar46._0_16_;
        *pauVar17 = auVar51;
        auVar25 = vunpckhpd_avx(auVar25,auVar37);
        auVar34._16_16_ = auVar25._0_16_;
        auVar34._0_16_ = auVar41._0_16_;
        pauVar17[1] = auVar34;
        auVar37 = vperm2f128_avx(auVar46,auVar32,0x31);
        pauVar17[2] = auVar37;
        auVar25 = vperm2f128_avx(auVar41,auVar25,0x31);
        pauVar17[3] = auVar25;
      }
      else {
        auVar57 = auVar41._0_16_;
        auVar59 = auVar41._16_16_;
        auVar44 = auVar37._0_16_;
        auVar52 = auVar37._16_16_;
        auVar36 = auVar25._0_16_;
        auVar39 = auVar25._16_16_;
        auVar29 = auVar33._0_16_;
        auVar35 = auVar33._16_16_;
        if ((uVar15 & 1) != 0) {
          *(int *)*pauVar17 = auVar37._0_4_;
        }
        if ((uVar15 & 2) != 0) {
          uVar3 = vextractps_avx(auVar44,1);
          *(undefined4 *)(*pauVar17 + 0x10) = uVar3;
        }
        if ((uVar15 & 4) != 0) {
          uVar3 = vextractps_avx(auVar44,2);
          *(undefined4 *)pauVar17[1] = uVar3;
        }
        if ((uVar15 & 8) != 0) {
          uVar3 = vextractps_avx(auVar44,3);
          *(undefined4 *)(pauVar17[1] + 0x10) = uVar3;
        }
        if ((uVar15 & 0x10) != 0) {
          *(int *)pauVar17[2] = auVar37._16_4_;
        }
        if ((uVar15 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar52,1);
          *(undefined4 *)(pauVar17[2] + 0x10) = uVar3;
        }
        if ((uVar15 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar52,2);
          *(undefined4 *)pauVar17[3] = uVar3;
        }
        if (cVar13 < '\0') {
          uVar3 = vextractps_avx(auVar52,3);
          *(undefined4 *)(pauVar17[3] + 0x10) = uVar3;
        }
        if ((uVar15 & 1) != 0) {
          *(int *)(*pauVar17 + 4) = auVar25._0_4_;
        }
        if ((uVar15 & 2) != 0) {
          uVar3 = vextractps_avx(auVar36,1);
          *(undefined4 *)(*pauVar17 + 0x14) = uVar3;
        }
        if ((uVar15 & 4) != 0) {
          uVar3 = vextractps_avx(auVar36,2);
          *(undefined4 *)(pauVar17[1] + 4) = uVar3;
        }
        if ((uVar15 & 8) != 0) {
          uVar3 = vextractps_avx(auVar36,3);
          *(undefined4 *)(pauVar17[1] + 0x14) = uVar3;
        }
        if ((uVar15 & 0x10) != 0) {
          *(int *)(pauVar17[2] + 4) = auVar25._16_4_;
        }
        if ((uVar15 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar39,1);
          *(undefined4 *)(pauVar17[2] + 0x14) = uVar3;
        }
        if ((uVar15 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar39,2);
          *(undefined4 *)(pauVar17[3] + 4) = uVar3;
        }
        if (cVar13 < '\0') {
          uVar3 = vextractps_avx(auVar39,3);
          *(undefined4 *)(pauVar17[3] + 0x14) = uVar3;
        }
        if ((uVar15 & 1) != 0) {
          *(int *)(*pauVar17 + 8) = auVar33._0_4_;
        }
        if ((uVar15 & 2) != 0) {
          uVar3 = vextractps_avx(auVar29,1);
          *(undefined4 *)(*pauVar17 + 0x18) = uVar3;
        }
        if ((uVar15 & 4) != 0) {
          uVar3 = vextractps_avx(auVar29,2);
          *(undefined4 *)(pauVar17[1] + 8) = uVar3;
        }
        if ((uVar15 & 8) != 0) {
          uVar3 = vextractps_avx(auVar29,3);
          *(undefined4 *)(pauVar17[1] + 0x18) = uVar3;
        }
        if ((uVar15 & 0x10) != 0) {
          *(int *)(pauVar17[2] + 8) = auVar33._16_4_;
        }
        if ((uVar15 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar35,1);
          *(undefined4 *)(pauVar17[2] + 0x18) = uVar3;
        }
        if ((uVar15 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar35,2);
          *(undefined4 *)(pauVar17[3] + 8) = uVar3;
        }
        if (cVar13 < '\0') {
          uVar3 = vextractps_avx(auVar35,3);
          *(undefined4 *)(pauVar17[3] + 0x18) = uVar3;
        }
        if ((uVar15 & 1) != 0) {
          *(int *)(*pauVar17 + 0xc) = auVar41._0_4_;
        }
        if ((uVar15 & 2) != 0) {
          uVar3 = vextractps_avx(auVar57,1);
          *(undefined4 *)(*pauVar17 + 0x1c) = uVar3;
        }
        if ((uVar15 & 4) != 0) {
          uVar3 = vextractps_avx(auVar57,2);
          *(undefined4 *)(pauVar17[1] + 0xc) = uVar3;
        }
        if ((uVar15 & 8) != 0) {
          uVar3 = vextractps_avx(auVar57,3);
          *(undefined4 *)(pauVar17[1] + 0x1c) = uVar3;
        }
        if ((uVar15 & 0x10) != 0) {
          *(int *)(pauVar17[2] + 0xc) = auVar41._16_4_;
        }
        if ((uVar15 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar59,1);
          *(undefined4 *)(pauVar17[2] + 0x1c) = uVar3;
        }
        if ((uVar15 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar59,2);
          *(undefined4 *)(pauVar17[3] + 0xc) = uVar3;
        }
        if (cVar13 < '\0') {
          uVar3 = vextractps_avx(auVar59,3);
          *(undefined4 *)(pauVar17[3] + 0x1c) = uVar3;
        }
      }
    }
  }
  return;
}

// ApplyLegacySphericalBackstopConstraintsWithoutMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_CunfCunfCuniCuni_avx2 @ 14031fa80

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLegacySphericalBackstopConstraintsWithoutMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_CunfCunfCuniCuni_avx2
               (longlong param_1,longlong param_2,longlong param_3,float param_4,float param_5,
               int param_6,uint param_7)

{
  undefined1 (*pauVar1) [32];
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  char cVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  undefined1 (*pauVar19) [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  float fVar26;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar27 [32];
  float fVar36;
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar37 [16];
  undefined1 auVar42 [16];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  float fVar54;
  float fVar55;
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar56 [16];
  undefined1 auVar57 [32];
  undefined1 auVar61 [16];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar62 [32];
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  undefined1 auVar63 [32];
  float fVar69;
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [16];
  undefined1 auVar73 [32];
  undefined1 auVar74 [16];
  float fVar75;
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  undefined1 auVar78 [64];
  undefined1 auVar86 [32];
  uint uVar87;
  uint uVar88;
  uint uVar89;
  uint uVar90;
  uint uVar91;
  uint uVar92;
  float fVar93;
  uint uVar94;
  float fVar95;
  uint uVar96;
  
  uVar14 = param_7 + 7;
  if (-1 < (int)param_7) {
    uVar14 = param_7;
  }
  if ((int)(uVar14 & 0xfffffff8) < 1) {
    uVar18 = 0;
    if ((int)param_7 < 1) {
      return;
    }
  }
  else {
    fVar10 = param_4 - param_5;
    fVar9 = param_5 * param_5;
    pauVar19 = (undefined1 (*) [32])((longlong)param_6 * 0x10 + param_1);
    lVar16 = (longlong)param_6 * 0xc + 0x40;
    uVar18 = 0;
    auVar78 = ZEXT1264(ZEXT812(0));
    do {
      auVar22 = *pauVar19;
      auVar58 = pauVar19[1];
      auVar51 = pauVar19[2];
      auVar28 = pauVar19[3];
      auVar39 = vperm2f128_avx(auVar22,auVar51,0x20);
      auVar52 = vperm2f128_avx(auVar22,auVar51,0x31);
      auVar23 = vperm2f128_avx(auVar58,auVar28,0x20);
      auVar77 = vperm2f128_avx(auVar58,auVar28,0x31);
      auVar21 = vunpckhps_avx(auVar39,auVar52);
      auVar12 = vunpckhps_avx(auVar23,auVar77);
      auVar46 = vunpckhpd_avx(auVar21,auVar12);
      auVar38 = vcmpps_avx(auVar78._0_32_,auVar46,4);
      if ((((((((SUB321(auVar38 >> 0x1f,0) & 1) != 0 || (SUB321(auVar38 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar38 >> 0x5f,0) & 1) != 0) || SUB321(auVar38 >> 0x7f,0) != '\0') ||
            (SUB321(auVar38 >> 0x9f,0) & 1) != 0) || SUB321(auVar38 >> 0xbf,0) != '\0') ||
          (SUB321(auVar38 >> 0xdf,0) & 1) != 0) || auVar38[0x1f] < '\0') {
        auVar20 = vunpcklpd_avx(auVar21,auVar12);
        auVar21 = vunpcklps_avx(auVar39,auVar52);
        auVar12 = vunpcklps_avx(auVar23,auVar77);
        auVar11 = vunpckhpd_avx(auVar21,auVar12);
        auVar57 = vunpcklpd_avx(auVar21,auVar12);
        auVar21 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar16);
        auVar12 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar16);
        auVar39 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar12);
        auVar52 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,auVar21);
        auVar39 = vblendps_avx(auVar52,auVar39,0x88);
        auVar52 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar12);
        auVar23 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,*(undefined1 (*) [32])(param_2 + lVar16));
        auVar52 = vblendps_avx(auVar23,auVar52,0x13);
        auVar47 = vperm2f128_avx(auVar39,auVar52,0x31);
        auVar21 = vblendps_avx(auVar12,auVar21,0x24);
        auVar21 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar21);
        auVar12 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,*(undefined1 (*) [32])(param_2 + lVar16));
        auVar23 = vblendps_avx(auVar21,auVar12,0xe0);
        auVar21 = *(undefined1 (*) [32])(param_3 + -0x40 + lVar16);
        auVar12 = *(undefined1 (*) [32])(param_3 + -0x20 + lVar16);
        auVar77 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar12);
        auVar27 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,auVar21);
        auVar77 = vblendps_avx(auVar27,auVar77,0x88);
        auVar27 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar12);
        auVar59 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,*(undefined1 (*) [32])(param_3 + lVar16));
        auVar27 = vblendps_avx(auVar59,auVar27,0x13);
        auVar59 = vperm2f128_avx(auVar77,auVar27,0x31);
        auVar21 = vblendps_avx(auVar12,auVar21,0x24);
        auVar21 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar21);
        auVar12 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,*(undefined1 (*) [32])(param_3 + lVar16));
        auVar21 = vblendps_avx(auVar21,auVar12,0xe0);
        auVar76._0_4_ = -(param_4 * auVar77._0_4_) + auVar39._0_4_;
        auVar76._4_4_ = -(param_4 * auVar77._4_4_) + auVar39._4_4_;
        auVar76._8_4_ = -(param_4 * auVar77._8_4_) + auVar39._8_4_;
        auVar76._12_4_ = -(param_4 * auVar77._12_4_) + auVar39._12_4_;
        auVar76._16_4_ = -(param_4 * auVar27._0_4_) + auVar52._0_4_;
        auVar76._20_4_ = -(param_4 * auVar27._4_4_) + auVar52._4_4_;
        auVar76._24_4_ = -(param_4 * auVar27._8_4_) + auVar52._8_4_;
        auVar76._28_4_ = -(param_4 * auVar27._12_4_) + auVar52._12_4_;
        auVar63._0_4_ = -(param_4 * auVar59._0_4_) + auVar47._0_4_;
        auVar63._4_4_ = -(param_4 * auVar59._4_4_) + auVar47._4_4_;
        auVar63._8_4_ = -(param_4 * auVar59._8_4_) + auVar47._8_4_;
        auVar63._12_4_ = -(param_4 * auVar59._12_4_) + auVar47._12_4_;
        auVar63._16_4_ = -(param_4 * auVar59._16_4_) + auVar47._16_4_;
        auVar63._20_4_ = -(param_4 * auVar59._20_4_) + auVar47._20_4_;
        auVar63._24_4_ = -(param_4 * auVar59._24_4_) + auVar47._24_4_;
        auVar63._28_4_ = -(param_4 * auVar59._28_4_) + auVar47._28_4_;
        auVar70._0_4_ = -(param_4 * auVar21._0_4_) + auVar23._0_4_;
        auVar70._4_4_ = -(param_4 * auVar21._4_4_) + auVar23._4_4_;
        auVar70._8_4_ = -(param_4 * auVar21._8_4_) + auVar23._8_4_;
        auVar70._12_4_ = -(param_4 * auVar21._12_4_) + auVar23._12_4_;
        auVar70._16_4_ = -(param_4 * auVar21._16_4_) + auVar23._16_4_;
        auVar70._20_4_ = -(param_4 * auVar21._20_4_) + auVar23._20_4_;
        auVar70._24_4_ = -(param_4 * auVar21._24_4_) + auVar23._24_4_;
        auVar70._28_4_ = -(param_4 * auVar21._28_4_) + auVar23._28_4_;
        auVar12 = vsubps_avx(auVar57,auVar76);
        auVar11 = vsubps_avx(auVar11,auVar63);
        auVar20 = vsubps_avx(auVar20,auVar70);
        fVar3 = auVar11._0_4_;
        fVar4 = auVar11._4_4_;
        fVar5 = auVar11._8_4_;
        fVar6 = auVar11._12_4_;
        fVar7 = auVar11._16_4_;
        fVar8 = auVar11._20_4_;
        fVar26 = auVar11._24_4_;
        fVar30 = auVar11._28_4_;
        fVar80 = auVar12._0_4_;
        fVar81 = auVar12._4_4_;
        fVar82 = auVar12._8_4_;
        fVar83 = auVar12._12_4_;
        fVar84 = auVar12._16_4_;
        fVar85 = auVar12._20_4_;
        fVar93 = auVar12._24_4_;
        fVar95 = auVar12._28_4_;
        fVar31 = auVar20._0_4_;
        auVar57._0_4_ = fVar31 * fVar31 + fVar80 * fVar80 + fVar3 * fVar3;
        fVar32 = auVar20._4_4_;
        auVar57._4_4_ = fVar32 * fVar32 + fVar81 * fVar81 + fVar4 * fVar4;
        fVar33 = auVar20._8_4_;
        auVar57._8_4_ = fVar33 * fVar33 + fVar82 * fVar82 + fVar5 * fVar5;
        fVar34 = auVar20._12_4_;
        auVar57._12_4_ = fVar34 * fVar34 + fVar83 * fVar83 + fVar6 * fVar6;
        fVar35 = auVar20._16_4_;
        auVar57._16_4_ = fVar35 * fVar35 + fVar84 * fVar84 + fVar7 * fVar7;
        fVar36 = auVar20._20_4_;
        auVar57._20_4_ = fVar36 * fVar36 + fVar85 * fVar85 + fVar8 * fVar8;
        fVar54 = auVar20._24_4_;
        auVar57._24_4_ = fVar54 * fVar54 + fVar93 * fVar93 + fVar26 * fVar26;
        fVar55 = auVar20._28_4_;
        auVar57._28_4_ = fVar55 * fVar55 + fVar95 * fVar95 + fVar30 * fVar30;
        auVar12 = vsqrtps_avx(auVar57);
        auVar11._4_4_ = param_5;
        auVar11._0_4_ = param_5;
        auVar11._8_4_ = param_5;
        auVar11._12_4_ = param_5;
        auVar11._16_4_ = param_5;
        auVar11._20_4_ = param_5;
        auVar11._24_4_ = param_5;
        auVar11._28_4_ = param_5;
        auVar12 = vdivps_avx(auVar11,auVar12);
        fVar64 = auVar12._0_4_;
        fVar65 = auVar12._4_4_;
        fVar66 = auVar12._8_4_;
        fVar67 = auVar12._12_4_;
        fVar68 = auVar12._16_4_;
        fVar69 = auVar12._20_4_;
        fVar75 = auVar12._24_4_;
        fVar79 = auVar12._28_4_;
        auVar20._0_4_ = -(auVar77._0_4_ * fVar10) + auVar39._0_4_;
        auVar20._4_4_ = -(auVar77._4_4_ * fVar10) + auVar39._4_4_;
        auVar20._8_4_ = -(auVar77._8_4_ * fVar10) + auVar39._8_4_;
        auVar20._12_4_ = -(auVar77._12_4_ * fVar10) + auVar39._12_4_;
        auVar20._16_4_ = -(auVar27._0_4_ * fVar10) + auVar52._0_4_;
        auVar20._20_4_ = -(auVar27._4_4_ * fVar10) + auVar52._4_4_;
        auVar20._24_4_ = -(auVar27._8_4_ * fVar10) + auVar52._8_4_;
        auVar20._28_4_ = -(auVar27._12_4_ * fVar10) + auVar52._12_4_;
        auVar39._4_4_ = __real_322bcc77;
        auVar39._0_4_ = __real_322bcc77;
        auVar39._8_4_ = __real_322bcc77;
        auVar39._12_4_ = __real_322bcc77;
        auVar39._16_4_ = __real_322bcc77;
        auVar39._20_4_ = __real_322bcc77;
        auVar39._24_4_ = __real_322bcc77;
        auVar39._28_4_ = __real_322bcc77;
        auVar39 = vcmpps_avx(auVar57,auVar39,1);
        auVar12._4_4_ = fVar9;
        auVar12._0_4_ = fVar9;
        auVar12._8_4_ = fVar9;
        auVar12._12_4_ = fVar9;
        auVar12._16_4_ = fVar9;
        auVar12._20_4_ = fVar9;
        auVar12._24_4_ = fVar9;
        auVar12._28_4_ = fVar9;
        auVar12 = vcmpps_avx(auVar57,auVar12,1);
        uVar87 = auVar12._0_4_;
        auVar52._0_4_ = uVar87 & (uint)(fVar64 * fVar80 + auVar76._0_4_);
        uVar88 = auVar12._4_4_;
        auVar52._4_4_ = uVar88 & (uint)(fVar65 * fVar81 + auVar76._4_4_);
        uVar89 = auVar12._8_4_;
        auVar52._8_4_ = uVar89 & (uint)(fVar66 * fVar82 + auVar76._8_4_);
        uVar90 = auVar12._12_4_;
        auVar52._12_4_ = uVar90 & (uint)(fVar67 * fVar83 + auVar76._12_4_);
        uVar91 = auVar12._16_4_;
        auVar52._16_4_ = uVar91 & (uint)(fVar68 * fVar84 + auVar76._16_4_);
        uVar92 = auVar12._20_4_;
        auVar52._20_4_ = uVar92 & (uint)(fVar69 * fVar85 + auVar76._20_4_);
        uVar94 = auVar12._24_4_;
        auVar52._24_4_ = uVar94 & (uint)(fVar75 * fVar93 + auVar76._24_4_);
        uVar96 = auVar12._28_4_;
        auVar52._28_4_ = uVar96 & (uint)(fVar79 * fVar95 + auVar76._28_4_);
        auVar78 = ZEXT1264(ZEXT412(0)) << 0x20;
        auVar12 = vblendvps_avx(auVar52,auVar20,auVar39);
        auVar52 = vcmpps_avx(ZEXT1232(ZEXT412(0)) << 0x20,auVar12,4);
        auVar77._0_4_ = auVar52._0_4_ & auVar38._0_4_;
        auVar77._4_4_ = auVar52._4_4_ & auVar38._4_4_;
        auVar77._8_4_ = auVar52._8_4_ & auVar38._8_4_;
        auVar77._12_4_ = auVar52._12_4_ & auVar38._12_4_;
        auVar77._16_4_ = auVar52._16_4_ & auVar38._16_4_;
        auVar77._20_4_ = auVar52._20_4_ & auVar38._20_4_;
        auVar77._24_4_ = auVar52._24_4_ & auVar38._24_4_;
        auVar77._28_4_ = auVar52._28_4_ & auVar38._28_4_;
        uVar15 = vmovmskps_avx(auVar77);
        if (uVar15 != 0) {
          auVar45._0_4_ = -(fVar10 * auVar59._0_4_) + auVar47._0_4_;
          auVar45._4_4_ = -(fVar10 * auVar59._4_4_) + auVar47._4_4_;
          auVar45._8_4_ = -(fVar10 * auVar59._8_4_) + auVar47._8_4_;
          auVar45._12_4_ = -(fVar10 * auVar59._12_4_) + auVar47._12_4_;
          auVar45._16_4_ = -(fVar10 * auVar59._16_4_) + auVar47._16_4_;
          auVar45._20_4_ = -(fVar10 * auVar59._20_4_) + auVar47._20_4_;
          auVar45._24_4_ = -(fVar10 * auVar59._24_4_) + auVar47._24_4_;
          auVar45._28_4_ = -(fVar10 * auVar59._28_4_) + auVar47._28_4_;
          auVar27._0_4_ = -(fVar10 * auVar21._0_4_) + auVar23._0_4_;
          auVar27._4_4_ = -(fVar10 * auVar21._4_4_) + auVar23._4_4_;
          auVar27._8_4_ = -(fVar10 * auVar21._8_4_) + auVar23._8_4_;
          auVar27._12_4_ = -(fVar10 * auVar21._12_4_) + auVar23._12_4_;
          auVar27._16_4_ = -(fVar10 * auVar21._16_4_) + auVar23._16_4_;
          auVar27._20_4_ = -(fVar10 * auVar21._20_4_) + auVar23._20_4_;
          auVar27._24_4_ = -(fVar10 * auVar21._24_4_) + auVar23._24_4_;
          auVar27._28_4_ = -(fVar10 * auVar21._28_4_) + auVar23._28_4_;
          auVar38._0_4_ = uVar87 & (uint)(fVar64 * fVar3 + auVar63._0_4_);
          auVar38._4_4_ = uVar88 & (uint)(fVar65 * fVar4 + auVar63._4_4_);
          auVar38._8_4_ = uVar89 & (uint)(fVar66 * fVar5 + auVar63._8_4_);
          auVar38._12_4_ = uVar90 & (uint)(fVar67 * fVar6 + auVar63._12_4_);
          auVar38._16_4_ = uVar91 & (uint)(fVar68 * fVar7 + auVar63._16_4_);
          auVar38._20_4_ = uVar92 & (uint)(fVar69 * fVar8 + auVar63._20_4_);
          auVar38._24_4_ = uVar94 & (uint)(fVar75 * fVar26 + auVar63._24_4_);
          auVar38._28_4_ = uVar96 & (uint)(fVar79 * fVar30 + auVar63._28_4_);
          auVar38 = vblendvps_avx(auVar38,auVar45,auVar39);
          auVar21._0_4_ = uVar87 & (uint)(fVar64 * fVar31 + auVar70._0_4_);
          auVar21._4_4_ = uVar88 & (uint)(fVar65 * fVar32 + auVar70._4_4_);
          auVar21._8_4_ = uVar89 & (uint)(fVar66 * fVar33 + auVar70._8_4_);
          auVar21._12_4_ = uVar90 & (uint)(fVar67 * fVar34 + auVar70._12_4_);
          auVar21._16_4_ = uVar91 & (uint)(fVar68 * fVar35 + auVar70._16_4_);
          auVar21._20_4_ = uVar92 & (uint)(fVar69 * fVar36 + auVar70._20_4_);
          auVar21._24_4_ = uVar94 & (uint)(fVar75 * fVar54 + auVar70._24_4_);
          auVar21._28_4_ = uVar96 & (uint)(fVar79 * fVar55 + auVar70._28_4_);
          auVar21 = vblendvps_avx(auVar21,auVar27,auVar39);
          cVar13 = (char)uVar15;
          if (cVar13 == -1) {
            auVar22 = vunpcklps_avx(auVar12,auVar38);
            auVar58 = vunpcklps_avx(auVar21,auVar46);
            auVar28 = vunpcklpd_avx(auVar22,auVar58);
            auVar22 = vunpckhpd_avx(auVar22,auVar58);
            auVar58 = vunpckhps_avx(auVar12,auVar38);
            auVar51 = vunpckhps_avx(auVar21,auVar46);
            auVar38 = vunpcklpd_avx(auVar58,auVar51);
            auVar46._16_16_ = auVar22._0_16_;
            auVar46._0_16_ = auVar28._0_16_;
            *pauVar19 = auVar46;
            auVar58 = vunpckhpd_avx(auVar58,auVar51);
            auVar51._16_16_ = auVar58._0_16_;
            auVar51._0_16_ = auVar38._0_16_;
            pauVar19[1] = auVar51;
            auVar22 = vperm2f128_avx(auVar28,auVar22,0x31);
            pauVar19[2] = auVar22;
            auVar22 = vperm2f128_avx(auVar38,auVar58,0x31);
            pauVar19[3] = auVar22;
          }
          else {
            auVar56 = auVar12._0_16_;
            auVar61 = auVar12._16_16_;
            auVar43 = auVar38._0_16_;
            auVar44 = auVar38._16_16_;
            auVar37 = auVar21._0_16_;
            auVar42 = auVar21._16_16_;
            if ((uVar15 & 1) != 0) {
              *(int *)*pauVar19 = auVar12._0_4_;
            }
            if ((uVar15 & 2) != 0) {
              uVar2 = vextractps_avx(auVar56,1);
              *(undefined4 *)(*pauVar19 + 0x10) = uVar2;
            }
            if ((uVar15 & 4) != 0) {
              uVar2 = vextractps_avx(auVar56,2);
              *(undefined4 *)pauVar19[1] = uVar2;
            }
            if ((uVar15 & 8) != 0) {
              uVar2 = vextractps_avx(auVar56,3);
              *(undefined4 *)(pauVar19[1] + 0x10) = uVar2;
            }
            if ((uVar15 & 0x10) != 0) {
              *(int *)pauVar19[2] = auVar12._16_4_;
            }
            if ((uVar15 & 0x20) != 0) {
              uVar2 = vextractps_avx(auVar61,1);
              *(undefined4 *)(pauVar19[2] + 0x10) = uVar2;
            }
            if ((uVar15 & 0x40) != 0) {
              uVar2 = vextractps_avx(auVar61,2);
              *(undefined4 *)pauVar19[3] = uVar2;
            }
            if (cVar13 < '\0') {
              uVar2 = vextractps_avx(auVar61,3);
              *(undefined4 *)(pauVar19[3] + 0x10) = uVar2;
            }
            if ((uVar15 & 1) != 0) {
              *(int *)(*pauVar19 + 4) = auVar38._0_4_;
            }
            if ((uVar15 & 2) != 0) {
              uVar2 = vextractps_avx(auVar43,1);
              *(undefined4 *)(*pauVar19 + 0x14) = uVar2;
            }
            if ((uVar15 & 4) != 0) {
              uVar2 = vextractps_avx(auVar43,2);
              *(undefined4 *)(pauVar19[1] + 4) = uVar2;
            }
            if ((uVar15 & 8) != 0) {
              uVar2 = vextractps_avx(auVar43,3);
              *(undefined4 *)(pauVar19[1] + 0x14) = uVar2;
            }
            if ((uVar15 & 0x10) != 0) {
              *(int *)(pauVar19[2] + 4) = auVar38._16_4_;
            }
            if ((uVar15 & 0x20) != 0) {
              uVar2 = vextractps_avx(auVar44,1);
              *(undefined4 *)(pauVar19[2] + 0x14) = uVar2;
            }
            if ((uVar15 & 0x40) != 0) {
              uVar2 = vextractps_avx(auVar44,2);
              *(undefined4 *)(pauVar19[3] + 4) = uVar2;
            }
            if (cVar13 < '\0') {
              uVar2 = vextractps_avx(auVar44,3);
              *(undefined4 *)(pauVar19[3] + 0x14) = uVar2;
            }
            if ((uVar15 & 1) != 0) {
              *(int *)(*pauVar19 + 8) = auVar21._0_4_;
            }
            if ((uVar15 & 2) != 0) {
              uVar2 = vextractps_avx(auVar37,1);
              *(undefined4 *)(*pauVar19 + 0x18) = uVar2;
            }
            if ((uVar15 & 4) != 0) {
              uVar2 = vextractps_avx(auVar37,2);
              *(undefined4 *)(pauVar19[1] + 8) = uVar2;
            }
            if ((uVar15 & 8) != 0) {
              uVar2 = vextractps_avx(auVar37,3);
              *(undefined4 *)(pauVar19[1] + 0x18) = uVar2;
            }
            if ((uVar15 & 0x10) != 0) {
              *(int *)(pauVar19[2] + 8) = auVar21._16_4_;
            }
            if ((uVar15 & 0x20) != 0) {
              uVar2 = vextractps_avx(auVar42,1);
              *(undefined4 *)(pauVar19[2] + 0x18) = uVar2;
            }
            if ((uVar15 & 0x40) != 0) {
              uVar2 = vextractps_avx(auVar42,2);
              *(undefined4 *)(pauVar19[3] + 8) = uVar2;
            }
            if (cVar13 < '\0') {
              uVar2 = vextractps_avx(auVar42,3);
              *(undefined4 *)(pauVar19[3] + 0x18) = uVar2;
            }
            if ((uVar15 & 1) != 0) {
              uVar2 = vextractps_avx(auVar22._0_16_,3);
              *(undefined4 *)(*pauVar19 + 0xc) = uVar2;
            }
            if ((uVar15 & 2) != 0) {
              uVar2 = vextractps_avx(auVar22._16_16_,3);
              *(undefined4 *)(*pauVar19 + 0x1c) = uVar2;
            }
            if ((uVar15 & 4) != 0) {
              uVar2 = vextractps_avx(auVar58._0_16_,3);
              *(undefined4 *)(pauVar19[1] + 0xc) = uVar2;
            }
            if ((uVar15 & 8) != 0) {
              uVar2 = vextractps_avx(auVar58._16_16_,3);
              *(undefined4 *)(pauVar19[1] + 0x1c) = uVar2;
            }
            if ((uVar15 & 0x10) != 0) {
              uVar2 = vextractps_avx(auVar51._0_16_,3);
              *(undefined4 *)(pauVar19[2] + 0xc) = uVar2;
            }
            if ((uVar15 & 0x20) != 0) {
              uVar2 = vextractps_avx(auVar51._16_16_,3);
              *(undefined4 *)(pauVar19[2] + 0x1c) = uVar2;
            }
            if ((uVar15 & 0x40) != 0) {
              uVar2 = vextractps_avx(auVar28._0_16_,3);
              *(undefined4 *)(pauVar19[3] + 0xc) = uVar2;
            }
            if (cVar13 < '\0') {
              uVar2 = vextractps_avx(auVar28._16_16_,3);
              *(undefined4 *)(pauVar19[3] + 0x1c) = uVar2;
            }
          }
        }
      }
      uVar18 = uVar18 + 8;
      pauVar19 = pauVar19 + 4;
      lVar16 = lVar16 + 0x60;
    } while (uVar18 < (uVar14 & 0xfffffff8));
    if ((int)param_7 <= (int)uVar18) {
      return;
    }
  }
  iVar17 = (int)uVar18;
  auVar22._4_4_ = iVar17;
  auVar22._0_4_ = iVar17;
  auVar22._8_4_ = iVar17;
  auVar22._12_4_ = iVar17;
  auVar22._16_4_ = iVar17;
  auVar22._20_4_ = iVar17;
  auVar22._24_4_ = iVar17;
  auVar22._28_4_ = iVar17;
  auVar22 = vpor_avx2(auVar22,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar58._4_4_ = param_7;
  auVar58._0_4_ = param_7;
  auVar58._8_4_ = param_7;
  auVar58._12_4_ = param_7;
  auVar58._16_4_ = param_7;
  auVar58._20_4_ = param_7;
  auVar58._24_4_ = param_7;
  auVar58._28_4_ = param_7;
  auVar22 = vpcmpgtd_avx2(auVar58,auVar22);
  lVar16 = (longlong)(param_6 + iVar17);
  pauVar19 = (undefined1 (*) [32])(param_1 + lVar16 * 0x10);
  iVar17 = vmovmskps_avx(auVar22);
  if (iVar17 == 0xff) {
    auVar51 = vperm2f128_avx(*pauVar19,pauVar19[2],0x20);
    auVar28 = vperm2f128_avx(*pauVar19,pauVar19[2],0x31);
    auVar38 = vperm2f128_avx(pauVar19[1],pauVar19[3],0x20);
    auVar21 = vperm2f128_avx(pauVar19[1],pauVar19[3],0x31);
    auVar58 = vunpcklps_avx(auVar51,auVar28);
    auVar51 = vunpckhps_avx(auVar51,auVar28);
    auVar46 = vunpcklps_avx(auVar38,auVar21);
    auVar28 = vunpckhps_avx(auVar38,auVar21);
    auVar38 = vunpcklpd_avx(auVar58,auVar46);
    auVar58 = vunpckhpd_avx(auVar58,auVar46);
    auVar46 = vunpcklpd_avx(auVar51,auVar28);
    auVar51 = vunpckhpd_avx(auVar51,auVar28);
  }
  else {
    auVar38 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar22);
    auVar58 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar22);
    auVar46 = vgatherdps(ZEXT832(0),auVar22);
    auVar51 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar22);
  }
  auVar28 = vmaskmovps_avx(auVar22,auVar38);
  auVar58 = vmaskmovps_avx(auVar22,auVar58);
  auVar38 = vmaskmovps_avx(auVar22,auVar46);
  auVar46 = vcmpps_avx(auVar51,ZEXT1232(ZEXT812(0)),4);
  auVar46 = auVar22 & auVar46;
  if ((((((((SUB321(auVar46 >> 0x1f,0) & 1) != 0 || (SUB321(auVar46 >> 0x3f,0) & 1) != 0) ||
          (SUB321(auVar46 >> 0x5f,0) & 1) != 0) || SUB321(auVar46 >> 0x7f,0) != '\0') ||
        (SUB321(auVar46 >> 0x9f,0) & 1) != 0) || SUB321(auVar46 >> 0xbf,0) != '\0') ||
      (SUB321(auVar46 >> 0xdf,0) & 1) != 0) || auVar46[0x1f] < '\0') {
    pauVar1 = (undefined1 (*) [32])(param_2 + lVar16 * 0xc);
    if ((char)iVar17 == -1) {
      auVar46 = pauVar1[1];
      auVar21 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar46);
      auVar12 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,*pauVar1);
      auVar21 = vblendps_avx(auVar12,auVar21,0x88);
      auVar12 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar46);
      auVar39 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,pauVar1[2]);
      auVar12 = vblendps_avx(auVar39,auVar12,0x13);
      auVar47._16_16_ = auVar12._0_16_;
      auVar47._0_16_ = auVar21._0_16_;
      auVar77 = vperm2f128_avx(auVar21,auVar12,0x31);
      auVar46 = vblendps_avx(auVar46,*pauVar1,0x24);
      auVar46 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar46);
      auVar21 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,pauVar1[2]);
      auVar39 = vblendps_avx(auVar46,auVar21,0xe0);
      auVar46 = *(undefined1 (*) [32])(param_3 + lVar16 * 0xc);
      auVar21 = *(undefined1 (*) [32])(param_3 + 0x20 + lVar16 * 0xc);
      auVar12 = *(undefined1 (*) [32])(param_3 + 0x40 + lVar16 * 0xc);
      auVar52 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar21);
      auVar23 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar46);
      auVar52 = vblendps_avx(auVar23,auVar52,0x88);
      auVar23 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar21);
      auVar27 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,auVar12);
      auVar23 = vblendps_avx(auVar27,auVar23,0x13);
      auVar59._16_16_ = auVar23._0_16_;
      auVar59._0_16_ = auVar52._0_16_;
      auVar52 = vperm2f128_avx(auVar52,auVar23,0x31);
      auVar46 = vblendps_avx(auVar21,auVar46,0x24);
      auVar46 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar46);
      auVar21 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,auVar12);
      auVar46 = vblendps_avx(auVar46,auVar21,0xe0);
    }
    else {
      auVar47 = vgatherdps(ZEXT832(0) << 0x20,auVar22);
      auVar77 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar22);
      auVar39 = vgatherdps(ZEXT832(0),auVar22);
      auVar59 = vgatherdps(ZEXT832(0) << 0x20,auVar22);
      auVar52 = vgatherdps(ZEXT832(0),auVar22);
      auVar46 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar22);
    }
    auVar73._0_4_ = -(param_4 * auVar59._0_4_) + auVar47._0_4_;
    auVar73._4_4_ = -(param_4 * auVar59._4_4_) + auVar47._4_4_;
    auVar73._8_4_ = -(param_4 * auVar59._8_4_) + auVar47._8_4_;
    auVar73._12_4_ = -(param_4 * auVar59._12_4_) + auVar47._12_4_;
    auVar73._16_4_ = -(param_4 * auVar59._16_4_) + auVar47._16_4_;
    auVar73._20_4_ = -(param_4 * auVar59._20_4_) + auVar47._20_4_;
    auVar73._24_4_ = -(param_4 * auVar59._24_4_) + auVar47._24_4_;
    auVar73._28_4_ = -(param_4 * auVar59._28_4_) + auVar47._28_4_;
    auVar71._0_4_ = -(param_4 * auVar52._0_4_) + auVar77._0_4_;
    auVar71._4_4_ = -(param_4 * auVar52._4_4_) + auVar77._4_4_;
    auVar71._8_4_ = -(param_4 * auVar52._8_4_) + auVar77._8_4_;
    auVar71._12_4_ = -(param_4 * auVar52._12_4_) + auVar77._12_4_;
    auVar71._16_4_ = -(param_4 * auVar52._16_4_) + auVar77._16_4_;
    auVar71._20_4_ = -(param_4 * auVar52._20_4_) + auVar77._20_4_;
    auVar71._24_4_ = -(param_4 * auVar52._24_4_) + auVar77._24_4_;
    auVar71._28_4_ = -(param_4 * auVar52._28_4_) + auVar77._28_4_;
    auVar62._0_4_ = -(auVar46._0_4_ * param_4) + auVar39._0_4_;
    auVar62._4_4_ = -(auVar46._4_4_ * param_4) + auVar39._4_4_;
    auVar62._8_4_ = -(auVar46._8_4_ * param_4) + auVar39._8_4_;
    auVar62._12_4_ = -(auVar46._12_4_ * param_4) + auVar39._12_4_;
    auVar62._16_4_ = -(auVar46._16_4_ * param_4) + auVar39._16_4_;
    auVar62._20_4_ = -(auVar46._20_4_ * param_4) + auVar39._20_4_;
    auVar62._24_4_ = -(auVar46._24_4_ * param_4) + auVar39._24_4_;
    auVar62._28_4_ = -(auVar46._28_4_ * param_4) + auVar39._28_4_;
    auVar28 = vsubps_avx(auVar28,auVar73);
    auVar58 = vsubps_avx(auVar58,auVar71);
    auVar38 = vsubps_avx(auVar38,auVar62);
    fVar9 = auVar58._0_4_;
    fVar10 = auVar58._4_4_;
    fVar3 = auVar58._8_4_;
    fVar4 = auVar58._12_4_;
    fVar5 = auVar58._16_4_;
    fVar6 = auVar58._20_4_;
    fVar7 = auVar58._24_4_;
    fVar8 = auVar58._28_4_;
    fVar26 = auVar28._0_4_;
    fVar30 = auVar28._4_4_;
    fVar31 = auVar28._8_4_;
    fVar32 = auVar28._12_4_;
    fVar33 = auVar28._16_4_;
    fVar34 = auVar28._20_4_;
    fVar35 = auVar28._24_4_;
    fVar36 = auVar28._28_4_;
    fVar54 = auVar38._0_4_;
    auVar40._0_4_ = fVar54 * fVar54 + fVar26 * fVar26 + fVar9 * fVar9;
    fVar55 = auVar38._4_4_;
    auVar40._4_4_ = fVar55 * fVar55 + fVar30 * fVar30 + fVar10 * fVar10;
    fVar64 = auVar38._8_4_;
    auVar40._8_4_ = fVar64 * fVar64 + fVar31 * fVar31 + fVar3 * fVar3;
    fVar65 = auVar38._12_4_;
    auVar40._12_4_ = fVar65 * fVar65 + fVar32 * fVar32 + fVar4 * fVar4;
    fVar66 = auVar38._16_4_;
    auVar40._16_4_ = fVar66 * fVar66 + fVar33 * fVar33 + fVar5 * fVar5;
    fVar67 = auVar38._20_4_;
    auVar40._20_4_ = fVar67 * fVar67 + fVar34 * fVar34 + fVar6 * fVar6;
    fVar68 = auVar38._24_4_;
    auVar40._24_4_ = fVar68 * fVar68 + fVar35 * fVar35 + fVar7 * fVar7;
    fVar69 = auVar38._28_4_;
    auVar40._28_4_ = fVar69 * fVar69 + fVar36 * fVar36 + fVar8 * fVar8;
    auVar58 = vsqrtps_avx(auVar40);
    auVar86._4_4_ = param_5;
    auVar86._0_4_ = param_5;
    auVar86._8_4_ = param_5;
    auVar86._12_4_ = param_5;
    auVar86._16_4_ = param_5;
    auVar86._20_4_ = param_5;
    auVar86._24_4_ = param_5;
    auVar86._28_4_ = param_5;
    auVar58 = vdivps_avx(auVar86,auVar58);
    fVar75 = auVar58._0_4_;
    fVar79 = auVar58._4_4_;
    fVar80 = auVar58._8_4_;
    fVar81 = auVar58._12_4_;
    fVar82 = auVar58._16_4_;
    fVar83 = auVar58._20_4_;
    fVar84 = auVar58._24_4_;
    fVar85 = auVar58._28_4_;
    param_4 = param_4 - param_5;
    auVar60._0_4_ = -(param_4 * auVar59._0_4_) + auVar47._0_4_;
    auVar60._4_4_ = -(param_4 * auVar59._4_4_) + auVar47._4_4_;
    auVar60._8_4_ = -(param_4 * auVar59._8_4_) + auVar47._8_4_;
    auVar60._12_4_ = -(param_4 * auVar59._12_4_) + auVar47._12_4_;
    auVar60._16_4_ = -(param_4 * auVar59._16_4_) + auVar47._16_4_;
    auVar60._20_4_ = -(param_4 * auVar59._20_4_) + auVar47._20_4_;
    auVar60._24_4_ = -(param_4 * auVar59._24_4_) + auVar47._24_4_;
    auVar60._28_4_ = -(param_4 * auVar59._28_4_) + auVar47._28_4_;
    param_5 = param_5 * param_5;
    auVar28._4_4_ = param_5;
    auVar28._0_4_ = param_5;
    auVar28._8_4_ = param_5;
    auVar28._12_4_ = param_5;
    auVar28._16_4_ = param_5;
    auVar28._20_4_ = param_5;
    auVar28._24_4_ = param_5;
    auVar28._28_4_ = param_5;
    auVar58 = vcmpps_avx(auVar40,auVar28,1);
    auVar29._4_4_ = __real_322bcc77;
    auVar29._0_4_ = __real_322bcc77;
    auVar29._8_4_ = __real_322bcc77;
    auVar29._12_4_ = __real_322bcc77;
    auVar29._16_4_ = __real_322bcc77;
    auVar29._20_4_ = __real_322bcc77;
    auVar29._24_4_ = __real_322bcc77;
    auVar29._28_4_ = __real_322bcc77;
    auVar28 = vcmpps_avx(auVar40,auVar29,1);
    uVar15 = auVar58._0_4_;
    auVar48._0_4_ = uVar15 & (uint)(fVar75 * fVar26 + auVar73._0_4_);
    uVar87 = auVar58._4_4_;
    auVar48._4_4_ = uVar87 & (uint)(fVar79 * fVar30 + auVar73._4_4_);
    uVar88 = auVar58._8_4_;
    auVar48._8_4_ = uVar88 & (uint)(fVar80 * fVar31 + auVar73._8_4_);
    uVar89 = auVar58._12_4_;
    auVar48._12_4_ = uVar89 & (uint)(fVar81 * fVar32 + auVar73._12_4_);
    uVar90 = auVar58._16_4_;
    auVar48._16_4_ = uVar90 & (uint)(fVar82 * fVar33 + auVar73._16_4_);
    uVar91 = auVar58._20_4_;
    auVar48._20_4_ = uVar91 & (uint)(fVar83 * fVar34 + auVar73._20_4_);
    uVar92 = auVar58._24_4_;
    auVar48._24_4_ = uVar92 & (uint)(fVar84 * fVar35 + auVar73._24_4_);
    uVar94 = auVar58._28_4_;
    auVar48._28_4_ = uVar94 & (uint)(fVar85 * fVar36 + auVar73._28_4_);
    auVar58 = vblendvps_avx(auVar48,auVar60,auVar28);
    auVar38 = vcmpps_avx(auVar51,ZEXT432(0) << 0x20,4);
    auVar21 = vcmpps_avx(auVar58,ZEXT432(0) << 0x20,4);
    auVar23._0_4_ = auVar21._0_4_ & auVar38._0_4_ & auVar22._0_4_;
    auVar23._4_4_ = auVar21._4_4_ & auVar38._4_4_ & auVar22._4_4_;
    auVar23._8_4_ = auVar21._8_4_ & auVar38._8_4_ & auVar22._8_4_;
    auVar23._12_4_ = auVar21._12_4_ & auVar38._12_4_ & auVar22._12_4_;
    auVar23._16_4_ = auVar21._16_4_ & auVar38._16_4_ & auVar22._16_4_;
    auVar23._20_4_ = auVar21._20_4_ & auVar38._20_4_ & auVar22._20_4_;
    auVar23._24_4_ = auVar21._24_4_ & auVar38._24_4_ & auVar22._24_4_;
    auVar23._28_4_ = auVar21._28_4_ & auVar38._28_4_ & auVar22._28_4_;
    uVar14 = vmovmskps_avx(auVar23);
    if (uVar14 != 0) {
      auVar53._0_4_ = -(param_4 * auVar52._0_4_) + auVar77._0_4_;
      auVar53._4_4_ = -(param_4 * auVar52._4_4_) + auVar77._4_4_;
      auVar53._8_4_ = -(param_4 * auVar52._8_4_) + auVar77._8_4_;
      auVar53._12_4_ = -(param_4 * auVar52._12_4_) + auVar77._12_4_;
      auVar53._16_4_ = -(param_4 * auVar52._16_4_) + auVar77._16_4_;
      auVar53._20_4_ = -(param_4 * auVar52._20_4_) + auVar77._20_4_;
      auVar53._24_4_ = -(param_4 * auVar52._24_4_) + auVar77._24_4_;
      auVar53._28_4_ = -(param_4 * auVar52._28_4_) + auVar77._28_4_;
      auVar50._0_4_ = -(param_4 * auVar46._0_4_) + auVar39._0_4_;
      auVar50._4_4_ = -(param_4 * auVar46._4_4_) + auVar39._4_4_;
      auVar50._8_4_ = -(param_4 * auVar46._8_4_) + auVar39._8_4_;
      auVar50._12_4_ = -(param_4 * auVar46._12_4_) + auVar39._12_4_;
      auVar50._16_4_ = -(param_4 * auVar46._16_4_) + auVar39._16_4_;
      auVar50._20_4_ = -(param_4 * auVar46._20_4_) + auVar39._20_4_;
      auVar50._24_4_ = -(param_4 * auVar46._24_4_) + auVar39._24_4_;
      auVar50._28_4_ = -(param_4 * auVar46._28_4_) + auVar39._28_4_;
      auVar24._0_4_ = uVar15 & (uint)(fVar75 * fVar9 + auVar71._0_4_);
      auVar24._4_4_ = uVar87 & (uint)(fVar79 * fVar10 + auVar71._4_4_);
      auVar24._8_4_ = uVar88 & (uint)(fVar80 * fVar3 + auVar71._8_4_);
      auVar24._12_4_ = uVar89 & (uint)(fVar81 * fVar4 + auVar71._12_4_);
      auVar24._16_4_ = uVar90 & (uint)(fVar82 * fVar5 + auVar71._16_4_);
      auVar24._20_4_ = uVar91 & (uint)(fVar83 * fVar6 + auVar71._20_4_);
      auVar24._24_4_ = uVar92 & (uint)(fVar84 * fVar7 + auVar71._24_4_);
      auVar24._28_4_ = uVar94 & (uint)(fVar85 * fVar8 + auVar71._28_4_);
      auVar22 = vblendvps_avx(auVar24,auVar53,auVar28);
      auVar25._0_4_ = uVar15 & (uint)(fVar75 * fVar54 + auVar62._0_4_);
      auVar25._4_4_ = uVar87 & (uint)(fVar79 * fVar55 + auVar62._4_4_);
      auVar25._8_4_ = uVar88 & (uint)(fVar80 * fVar64 + auVar62._8_4_);
      auVar25._12_4_ = uVar89 & (uint)(fVar81 * fVar65 + auVar62._12_4_);
      auVar25._16_4_ = uVar90 & (uint)(fVar82 * fVar66 + auVar62._16_4_);
      auVar25._20_4_ = uVar91 & (uint)(fVar83 * fVar67 + auVar62._20_4_);
      auVar25._24_4_ = uVar92 & (uint)(fVar84 * fVar68 + auVar62._24_4_);
      auVar25._28_4_ = uVar94 & (uint)(fVar85 * fVar69 + auVar62._28_4_);
      auVar28 = vblendvps_avx(auVar25,auVar50,auVar28);
      cVar13 = (char)uVar14;
      if (cVar13 == -1) {
        auVar38 = vunpcklps_avx(auVar58,auVar22);
        auVar21 = vunpcklps_avx(auVar28,auVar51);
        auVar46 = vunpcklpd_avx(auVar38,auVar21);
        auVar38 = vunpckhpd_avx(auVar38,auVar21);
        auVar22 = vunpckhps_avx(auVar58,auVar22);
        auVar58 = vunpckhps_avx(auVar28,auVar51);
        auVar51 = vunpcklpd_avx(auVar22,auVar58);
        auVar49._16_16_ = auVar38._0_16_;
        auVar49._0_16_ = auVar46._0_16_;
        *pauVar19 = auVar49;
        auVar22 = vunpckhpd_avx(auVar22,auVar58);
        auVar41._16_16_ = auVar22._0_16_;
        auVar41._0_16_ = auVar51._0_16_;
        pauVar19[1] = auVar41;
        auVar58 = vperm2f128_avx(auVar46,auVar38,0x31);
        pauVar19[2] = auVar58;
        auVar22 = vperm2f128_avx(auVar51,auVar22,0x31);
        pauVar19[3] = auVar22;
      }
      else {
        auVar72 = auVar51._0_16_;
        auVar74 = auVar51._16_16_;
        auVar56 = auVar58._0_16_;
        auVar61 = auVar58._16_16_;
        auVar43 = auVar22._0_16_;
        auVar44 = auVar22._16_16_;
        auVar37 = auVar28._0_16_;
        auVar42 = auVar28._16_16_;
        if ((uVar14 & 1) != 0) {
          *(int *)*pauVar19 = auVar58._0_4_;
        }
        if ((uVar14 & 2) != 0) {
          uVar2 = vextractps_avx(auVar56,1);
          *(undefined4 *)(*pauVar19 + 0x10) = uVar2;
        }
        if ((uVar14 & 4) != 0) {
          uVar2 = vextractps_avx(auVar56,2);
          *(undefined4 *)pauVar19[1] = uVar2;
        }
        if ((uVar14 & 8) != 0) {
          uVar2 = vextractps_avx(auVar56,3);
          *(undefined4 *)(pauVar19[1] + 0x10) = uVar2;
        }
        if ((uVar14 & 0x10) != 0) {
          *(int *)pauVar19[2] = auVar58._16_4_;
        }
        if ((uVar14 & 0x20) != 0) {
          uVar2 = vextractps_avx(auVar61,1);
          *(undefined4 *)(pauVar19[2] + 0x10) = uVar2;
        }
        if ((uVar14 & 0x40) != 0) {
          uVar2 = vextractps_avx(auVar61,2);
          *(undefined4 *)pauVar19[3] = uVar2;
        }
        if (cVar13 < '\0') {
          uVar2 = vextractps_avx(auVar61,3);
          *(undefined4 *)(pauVar19[3] + 0x10) = uVar2;
        }
        if ((uVar14 & 1) != 0) {
          *(int *)(*pauVar19 + 4) = auVar22._0_4_;
        }
        if ((uVar14 & 2) != 0) {
          uVar2 = vextractps_avx(auVar43,1);
          *(undefined4 *)(*pauVar19 + 0x14) = uVar2;
        }
        if ((uVar14 & 4) != 0) {
          uVar2 = vextractps_avx(auVar43,2);
          *(undefined4 *)(pauVar19[1] + 4) = uVar2;
        }
        if ((uVar14 & 8) != 0) {
          uVar2 = vextractps_avx(auVar43,3);
          *(undefined4 *)(pauVar19[1] + 0x14) = uVar2;
        }
        if ((uVar14 & 0x10) != 0) {
          *(int *)(pauVar19[2] + 4) = auVar22._16_4_;
        }
        if ((uVar14 & 0x20) != 0) {
          uVar2 = vextractps_avx(auVar44,1);
          *(undefined4 *)(pauVar19[2] + 0x14) = uVar2;
        }
        if ((uVar14 & 0x40) != 0) {
          uVar2 = vextractps_avx(auVar44,2);
          *(undefined4 *)(pauVar19[3] + 4) = uVar2;
        }
        if (cVar13 < '\0') {
          uVar2 = vextractps_avx(auVar44,3);
          *(undefined4 *)(pauVar19[3] + 0x14) = uVar2;
        }
        if ((uVar14 & 1) != 0) {
          *(int *)(*pauVar19 + 8) = auVar28._0_4_;
        }
        if ((uVar14 & 2) != 0) {
          uVar2 = vextractps_avx(auVar37,1);
          *(undefined4 *)(*pauVar19 + 0x18) = uVar2;
        }
        if ((uVar14 & 4) != 0) {
          uVar2 = vextractps_avx(auVar37,2);
          *(undefined4 *)(pauVar19[1] + 8) = uVar2;
        }
        if ((uVar14 & 8) != 0) {
          uVar2 = vextractps_avx(auVar37,3);
          *(undefined4 *)(pauVar19[1] + 0x18) = uVar2;
        }
        if ((uVar14 & 0x10) != 0) {
          *(int *)(pauVar19[2] + 8) = auVar28._16_4_;
        }
        if ((uVar14 & 0x20) != 0) {
          uVar2 = vextractps_avx(auVar42,1);
          *(undefined4 *)(pauVar19[2] + 0x18) = uVar2;
        }
        if ((uVar14 & 0x40) != 0) {
          uVar2 = vextractps_avx(auVar42,2);
          *(undefined4 *)(pauVar19[3] + 8) = uVar2;
        }
        if (cVar13 < '\0') {
          uVar2 = vextractps_avx(auVar42,3);
          *(undefined4 *)(pauVar19[3] + 0x18) = uVar2;
        }
        if ((uVar14 & 1) != 0) {
          *(int *)(*pauVar19 + 0xc) = auVar51._0_4_;
        }
        if ((uVar14 & 2) != 0) {
          uVar2 = vextractps_avx(auVar72,1);
          *(undefined4 *)(*pauVar19 + 0x1c) = uVar2;
        }
        if ((uVar14 & 4) != 0) {
          uVar2 = vextractps_avx(auVar72,2);
          *(undefined4 *)(pauVar19[1] + 0xc) = uVar2;
        }
        if ((uVar14 & 8) != 0) {
          uVar2 = vextractps_avx(auVar72,3);
          *(undefined4 *)(pauVar19[1] + 0x1c) = uVar2;
        }
        if ((uVar14 & 0x10) != 0) {
          *(int *)(pauVar19[2] + 0xc) = auVar51._16_4_;
        }
        if ((uVar14 & 0x20) != 0) {
          uVar2 = vextractps_avx(auVar74,1);
          *(undefined4 *)(pauVar19[2] + 0x1c) = uVar2;
        }
        if ((uVar14 & 0x40) != 0) {
          uVar2 = vextractps_avx(auVar74,2);
          *(undefined4 *)(pauVar19[3] + 0xc) = uVar2;
        }
        if (cVar13 < '\0') {
          uVar2 = vextractps_avx(auVar74,3);
          *(undefined4 *)(pauVar19[3] + 0x1c) = uVar2;
        }
      }
    }
  }
  return;
}

// ApplyLegacySphericalBackstopConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_CunfCuniCuni_avx2 @ 1403209d0

void ApplyLegacySphericalBackstopConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_CunfCuniCuni_avx2
               (void)

{
  ApplyLegacySphericalBackstopConstraintsWithMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_CunfCunfCunfCunfCuniCuni_avx2
            ();
  return;
}

// ApplySphericalBackstopConstraintsWithMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_CunfCunfCunfCunfCuniCuni_avx2 @ 140320a40

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplySphericalBackstopConstraintsWithMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_CunfCunfCunfCunfCuniCuni_avx2
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,float param_6,float param_7,float param_8,float param_9,int param_10,uint param_11)

{
  float *pfVar1;
  undefined1 (*pauVar2) [32];
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  undefined1 (*pauVar6) [32];
  int iVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  float fVar31;
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [16];
  undefined1 auVar41 [16];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  float fVar42;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auVar43 [16];
  float fVar50;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined1 auVar51 [16];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [16];
  undefined1 auVar58 [32];
  undefined1 auVar61 [16];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  float fVar64;
  undefined1 auVar65 [32];
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  undefined1 auVar66 [64];
  undefined1 auVar73 [16];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [16];
  undefined1 auVar77 [32];
  float fVar78;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  undefined1 auVar79 [32];
  uint uVar87;
  uint uVar89;
  uint uVar90;
  uint uVar91;
  uint uVar92;
  uint uVar93;
  uint uVar94;
  uint uVar95;
  undefined1 auVar88 [32];
  undefined1 auVar96 [32];
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  
  uVar5 = param_11 + 7;
  if (-1 < (int)param_11) {
    uVar5 = param_11;
  }
  if ((int)(uVar5 & 0xfffffff8) < 1) {
    uVar10 = 0;
    if ((int)param_11 < 1) {
      return;
    }
  }
  else {
    lVar8 = (longlong)param_10 * 0x10 + param_1;
    lVar12 = (longlong)param_10 * 0xc + 0x40;
    uVar13 = 0;
    auVar66 = ZEXT1264(ZEXT812(0));
    uVar10 = 0;
    do {
      auVar17 = *(undefined1 (*) [32])(lVar8 + uVar13 * 4);
      auVar34 = *(undefined1 (*) [32])(lVar8 + 0x20 + uVar13 * 4);
      auVar44 = *(undefined1 (*) [32])(lVar8 + 0x40 + uVar13 * 4);
      auVar29 = *(undefined1 (*) [32])(lVar8 + 0x60 + uVar13 * 4);
      auVar88 = vperm2f128_avx(auVar17,auVar44,0x20);
      auVar59 = vperm2f128_avx(auVar17,auVar44,0x31);
      auVar18 = vperm2f128_avx(auVar34,auVar29,0x20);
      auVar106 = vperm2f128_avx(auVar34,auVar29,0x31);
      auVar16 = vunpckhps_avx(auVar88,auVar59);
      auVar33 = vunpckhps_avx(auVar18,auVar106);
      auVar36 = vunpckhpd_avx(auVar16,auVar33);
      auVar28 = vcmpps_avx(auVar66._0_32_,auVar36,4);
      if ((((((((SUB321(auVar28 >> 0x1f,0) & 1) != 0 || (SUB321(auVar28 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar28 >> 0x5f,0) & 1) != 0) || SUB321(auVar28 >> 0x7f,0) != '\0') ||
            (SUB321(auVar28 >> 0x9f,0) & 1) != 0) || SUB321(auVar28 >> 0xbf,0) != '\0') ||
          (SUB321(auVar28 >> 0xdf,0) & 1) != 0) || auVar28[0x1f] < '\0') {
        auVar65 = vunpcklpd_avx(auVar16,auVar33);
        auVar16 = vunpcklps_avx(auVar88,auVar59);
        auVar33 = vunpcklps_avx(auVar18,auVar106);
        auVar58 = vunpckhpd_avx(auVar16,auVar33);
        auVar77 = vunpcklpd_avx(auVar16,auVar33);
        auVar16 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar12);
        auVar33 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar12);
        auVar88 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar33);
        auVar59 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,auVar16);
        auVar88 = vblendps_avx(auVar59,auVar88,0x88);
        auVar59 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar33);
        auVar18 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,*(undefined1 (*) [32])(param_2 + lVar12));
        auVar59 = vblendps_avx(auVar18,auVar59,0x13);
        auVar37 = vperm2f128_avx(auVar88,auVar59,0x31);
        auVar16 = vblendps_avx(auVar33,auVar16,0x24);
        auVar16 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar16);
        auVar33 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,*(undefined1 (*) [32])(param_2 + lVar12));
        auVar18 = vblendps_avx(auVar16,auVar33,0xe0);
        auVar16 = *(undefined1 (*) [32])(param_3 + -0x40 + lVar12);
        auVar33 = *(undefined1 (*) [32])(param_3 + -0x20 + lVar12);
        auVar106 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                                ,auVar33);
        auVar74 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,auVar16);
        auVar106 = vblendps_avx(auVar74,auVar106,0x88);
        auVar74 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar33);
        auVar62 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,*(undefined1 (*) [32])(param_3 + lVar12));
        auVar74 = vblendps_avx(auVar62,auVar74,0x13);
        auVar62 = vperm2f128_avx(auVar106,auVar74,0x31);
        auVar16 = vblendps_avx(auVar33,auVar16,0x24);
        auVar16 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar16);
        auVar33 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,*(undefined1 (*) [32])(param_3 + lVar12));
        auVar16 = vblendps_avx(auVar16,auVar33,0xe0);
        pfVar1 = (float *)(param_4 + (uVar13 & 0xffffffff));
        fVar97 = param_7 * *pfVar1 + param_6;
        fVar98 = param_7 * pfVar1[1] + param_6;
        fVar99 = param_7 * pfVar1[2] + param_6;
        fVar100 = param_7 * pfVar1[3] + param_6;
        fVar101 = param_7 * pfVar1[4] + param_6;
        fVar102 = param_7 * pfVar1[5] + param_6;
        fVar103 = param_7 * pfVar1[6] + param_6;
        fVar104 = param_7 * pfVar1[7] + param_6;
        pfVar1 = (float *)(param_5 + (uVar13 & 0xffffffff));
        auVar32._0_4_ = param_9 * *pfVar1 + param_8;
        auVar32._4_4_ = param_9 * pfVar1[1] + param_8;
        auVar32._8_4_ = param_9 * pfVar1[2] + param_8;
        auVar32._12_4_ = param_9 * pfVar1[3] + param_8;
        auVar32._16_4_ = param_9 * pfVar1[4] + param_8;
        auVar32._20_4_ = param_9 * pfVar1[5] + param_8;
        auVar32._24_4_ = param_9 * pfVar1[6] + param_8;
        auVar32._28_4_ = param_9 * pfVar1[7] + param_8;
        fVar14 = fVar97 + auVar32._0_4_;
        fVar21 = fVar98 + auVar32._4_4_;
        fVar22 = fVar99 + auVar32._8_4_;
        fVar23 = fVar100 + auVar32._12_4_;
        fVar24 = fVar101 + auVar32._16_4_;
        fVar25 = fVar102 + auVar32._20_4_;
        fVar26 = fVar103 + auVar32._24_4_;
        fVar27 = fVar104 + auVar32._28_4_;
        auVar105._0_4_ = -(auVar106._0_4_ * fVar14) + auVar88._0_4_;
        auVar105._4_4_ = -(auVar106._4_4_ * fVar21) + auVar88._4_4_;
        auVar105._8_4_ = -(auVar106._8_4_ * fVar22) + auVar88._8_4_;
        auVar105._12_4_ = -(auVar106._12_4_ * fVar23) + auVar88._12_4_;
        auVar105._16_4_ = -(auVar74._0_4_ * fVar24) + auVar59._0_4_;
        auVar105._20_4_ = -(auVar74._4_4_ * fVar25) + auVar59._4_4_;
        auVar105._24_4_ = -(auVar74._8_4_ * fVar26) + auVar59._8_4_;
        auVar105._28_4_ = -(auVar74._12_4_ * fVar27) + auVar59._12_4_;
        auVar55._0_4_ = -(auVar62._0_4_ * fVar14) + auVar37._0_4_;
        auVar55._4_4_ = -(auVar62._4_4_ * fVar21) + auVar37._4_4_;
        auVar55._8_4_ = -(auVar62._8_4_ * fVar22) + auVar37._8_4_;
        auVar55._12_4_ = -(auVar62._12_4_ * fVar23) + auVar37._12_4_;
        auVar55._16_4_ = -(auVar62._16_4_ * fVar24) + auVar37._16_4_;
        auVar55._20_4_ = -(auVar62._20_4_ * fVar25) + auVar37._20_4_;
        auVar55._24_4_ = -(auVar62._24_4_ * fVar26) + auVar37._24_4_;
        auVar55._28_4_ = -(auVar62._28_4_ * fVar27) + auVar37._28_4_;
        auVar15._0_4_ = -(auVar16._0_4_ * fVar14) + auVar18._0_4_;
        auVar15._4_4_ = -(auVar16._4_4_ * fVar21) + auVar18._4_4_;
        auVar15._8_4_ = -(auVar16._8_4_ * fVar22) + auVar18._8_4_;
        auVar15._12_4_ = -(auVar16._12_4_ * fVar23) + auVar18._12_4_;
        auVar15._16_4_ = -(auVar16._16_4_ * fVar24) + auVar18._16_4_;
        auVar15._20_4_ = -(auVar16._20_4_ * fVar25) + auVar18._20_4_;
        auVar15._24_4_ = -(auVar16._24_4_ * fVar26) + auVar18._24_4_;
        auVar15._28_4_ = -(auVar16._28_4_ * fVar27) + auVar18._28_4_;
        auVar33 = vsubps_avx(auVar77,auVar105);
        auVar58 = vsubps_avx(auVar58,auVar55);
        auVar65 = vsubps_avx(auVar65,auVar15);
        fVar14 = auVar58._0_4_;
        fVar21 = auVar58._4_4_;
        fVar22 = auVar58._8_4_;
        fVar23 = auVar58._12_4_;
        fVar24 = auVar58._16_4_;
        fVar25 = auVar58._20_4_;
        fVar26 = auVar58._24_4_;
        fVar27 = auVar58._28_4_;
        fVar42 = auVar33._0_4_;
        fVar47 = auVar33._4_4_;
        fVar48 = auVar33._8_4_;
        fVar49 = auVar33._12_4_;
        fVar50 = auVar33._16_4_;
        fVar52 = auVar33._20_4_;
        fVar53 = auVar33._24_4_;
        fVar54 = auVar33._28_4_;
        fVar78 = auVar65._0_4_;
        auVar58._0_4_ = fVar78 * fVar78 + fVar42 * fVar42 + fVar14 * fVar14;
        fVar80 = auVar65._4_4_;
        auVar58._4_4_ = fVar80 * fVar80 + fVar47 * fVar47 + fVar21 * fVar21;
        fVar81 = auVar65._8_4_;
        auVar58._8_4_ = fVar81 * fVar81 + fVar48 * fVar48 + fVar22 * fVar22;
        fVar82 = auVar65._12_4_;
        auVar58._12_4_ = fVar82 * fVar82 + fVar49 * fVar49 + fVar23 * fVar23;
        fVar83 = auVar65._16_4_;
        auVar58._16_4_ = fVar83 * fVar83 + fVar50 * fVar50 + fVar24 * fVar24;
        fVar84 = auVar65._20_4_;
        auVar58._20_4_ = fVar84 * fVar84 + fVar52 * fVar52 + fVar25 * fVar25;
        fVar85 = auVar65._24_4_;
        auVar58._24_4_ = fVar85 * fVar85 + fVar53 * fVar53 + fVar26 * fVar26;
        fVar86 = auVar65._28_4_;
        auVar58._28_4_ = fVar86 * fVar86 + fVar54 * fVar54 + fVar27 * fVar27;
        auVar33 = vsqrtps_avx(auVar58);
        auVar33 = vdivps_avx(auVar32,auVar33);
        fVar64 = auVar33._0_4_;
        fVar67 = auVar33._4_4_;
        fVar68 = auVar33._8_4_;
        fVar69 = auVar33._12_4_;
        fVar70 = auVar33._16_4_;
        fVar71 = auVar33._20_4_;
        fVar72 = auVar33._24_4_;
        fVar31 = auVar33._28_4_;
        auVar65._0_4_ = -(fVar97 * auVar106._0_4_) + auVar88._0_4_;
        auVar65._4_4_ = -(fVar98 * auVar106._4_4_) + auVar88._4_4_;
        auVar65._8_4_ = -(fVar99 * auVar106._8_4_) + auVar88._8_4_;
        auVar65._12_4_ = -(fVar100 * auVar106._12_4_) + auVar88._12_4_;
        auVar65._16_4_ = -(fVar101 * auVar74._0_4_) + auVar59._0_4_;
        auVar65._20_4_ = -(fVar102 * auVar74._4_4_) + auVar59._4_4_;
        auVar65._24_4_ = -(fVar103 * auVar74._8_4_) + auVar59._8_4_;
        auVar65._28_4_ = -(fVar104 * auVar74._12_4_) + auVar59._12_4_;
        auVar33._0_4_ = auVar32._0_4_ * auVar32._0_4_;
        auVar33._4_4_ = auVar32._4_4_ * auVar32._4_4_;
        auVar33._8_4_ = auVar32._8_4_ * auVar32._8_4_;
        auVar33._12_4_ = auVar32._12_4_ * auVar32._12_4_;
        auVar33._16_4_ = auVar32._16_4_ * auVar32._16_4_;
        auVar33._20_4_ = auVar32._20_4_ * auVar32._20_4_;
        auVar33._24_4_ = auVar32._24_4_ * auVar32._24_4_;
        auVar33._28_4_ = auVar32._28_4_ * auVar32._28_4_;
        auVar33 = vcmpps_avx(auVar58,auVar33,1);
        auVar88._4_4_ = __real_322bcc77;
        auVar88._0_4_ = __real_322bcc77;
        auVar88._8_4_ = __real_322bcc77;
        auVar88._12_4_ = __real_322bcc77;
        auVar88._16_4_ = __real_322bcc77;
        auVar88._20_4_ = __real_322bcc77;
        auVar88._24_4_ = __real_322bcc77;
        auVar88._28_4_ = __real_322bcc77;
        auVar88 = vcmpps_avx(auVar58,auVar88,1);
        uVar87 = auVar33._0_4_;
        auVar59._0_4_ = uVar87 & (uint)(fVar64 * fVar42 + auVar105._0_4_);
        uVar89 = auVar33._4_4_;
        auVar59._4_4_ = uVar89 & (uint)(fVar67 * fVar47 + auVar105._4_4_);
        uVar90 = auVar33._8_4_;
        auVar59._8_4_ = uVar90 & (uint)(fVar68 * fVar48 + auVar105._8_4_);
        uVar91 = auVar33._12_4_;
        auVar59._12_4_ = uVar91 & (uint)(fVar69 * fVar49 + auVar105._12_4_);
        uVar92 = auVar33._16_4_;
        auVar59._16_4_ = uVar92 & (uint)(fVar70 * fVar50 + auVar105._16_4_);
        uVar93 = auVar33._20_4_;
        auVar59._20_4_ = uVar93 & (uint)(fVar71 * fVar52 + auVar105._20_4_);
        uVar94 = auVar33._24_4_;
        auVar59._24_4_ = uVar94 & (uint)(fVar72 * fVar53 + auVar105._24_4_);
        uVar95 = auVar33._28_4_;
        auVar59._28_4_ = uVar95 & (uint)(fVar31 * fVar54 + auVar105._28_4_);
        auVar33 = vblendvps_avx(auVar59,auVar65,auVar88);
        auVar66 = ZEXT1264(ZEXT412(0)) << 0x20;
        auVar59 = vcmpps_avx(ZEXT1232(ZEXT412(0)) << 0x20,auVar33,4);
        auVar106._0_4_ = auVar59._0_4_ & auVar28._0_4_;
        auVar106._4_4_ = auVar59._4_4_ & auVar28._4_4_;
        auVar106._8_4_ = auVar59._8_4_ & auVar28._8_4_;
        auVar106._12_4_ = auVar59._12_4_ & auVar28._12_4_;
        auVar106._16_4_ = auVar59._16_4_ & auVar28._16_4_;
        auVar106._20_4_ = auVar59._20_4_ & auVar28._20_4_;
        auVar106._24_4_ = auVar59._24_4_ & auVar28._24_4_;
        auVar106._28_4_ = auVar59._28_4_ & auVar28._28_4_;
        uVar11 = vmovmskps_avx(auVar106);
        if (uVar11 != 0) {
          auVar74._0_4_ = -(fVar97 * auVar62._0_4_) + auVar37._0_4_;
          auVar74._4_4_ = -(fVar98 * auVar62._4_4_) + auVar37._4_4_;
          auVar74._8_4_ = -(fVar99 * auVar62._8_4_) + auVar37._8_4_;
          auVar74._12_4_ = -(fVar100 * auVar62._12_4_) + auVar37._12_4_;
          auVar74._16_4_ = -(fVar101 * auVar62._16_4_) + auVar37._16_4_;
          auVar74._20_4_ = -(fVar102 * auVar62._20_4_) + auVar37._20_4_;
          auVar74._24_4_ = -(fVar103 * auVar62._24_4_) + auVar37._24_4_;
          auVar74._28_4_ = -(fVar104 * auVar62._28_4_) + auVar37._28_4_;
          auVar77._0_4_ = -(fVar97 * auVar16._0_4_) + auVar18._0_4_;
          auVar77._4_4_ = -(fVar98 * auVar16._4_4_) + auVar18._4_4_;
          auVar77._8_4_ = -(fVar99 * auVar16._8_4_) + auVar18._8_4_;
          auVar77._12_4_ = -(fVar100 * auVar16._12_4_) + auVar18._12_4_;
          auVar77._16_4_ = -(fVar101 * auVar16._16_4_) + auVar18._16_4_;
          auVar77._20_4_ = -(fVar102 * auVar16._20_4_) + auVar18._20_4_;
          auVar77._24_4_ = -(fVar103 * auVar16._24_4_) + auVar18._24_4_;
          auVar77._28_4_ = -(fVar104 * auVar16._28_4_) + auVar18._28_4_;
          auVar28._0_4_ = uVar87 & (uint)(fVar64 * fVar14 + auVar55._0_4_);
          auVar28._4_4_ = uVar89 & (uint)(fVar67 * fVar21 + auVar55._4_4_);
          auVar28._8_4_ = uVar90 & (uint)(fVar68 * fVar22 + auVar55._8_4_);
          auVar28._12_4_ = uVar91 & (uint)(fVar69 * fVar23 + auVar55._12_4_);
          auVar28._16_4_ = uVar92 & (uint)(fVar70 * fVar24 + auVar55._16_4_);
          auVar28._20_4_ = uVar93 & (uint)(fVar71 * fVar25 + auVar55._20_4_);
          auVar28._24_4_ = uVar94 & (uint)(fVar72 * fVar26 + auVar55._24_4_);
          auVar28._28_4_ = uVar95 & (uint)(fVar31 * fVar27 + auVar55._28_4_);
          auVar28 = vblendvps_avx(auVar28,auVar74,auVar88);
          auVar16._0_4_ = uVar87 & (uint)(fVar64 * fVar78 + auVar15._0_4_);
          auVar16._4_4_ = uVar89 & (uint)(fVar67 * fVar80 + auVar15._4_4_);
          auVar16._8_4_ = uVar90 & (uint)(fVar68 * fVar81 + auVar15._8_4_);
          auVar16._12_4_ = uVar91 & (uint)(fVar69 * fVar82 + auVar15._12_4_);
          auVar16._16_4_ = uVar92 & (uint)(fVar70 * fVar83 + auVar15._16_4_);
          auVar16._20_4_ = uVar93 & (uint)(fVar71 * fVar84 + auVar15._20_4_);
          auVar16._24_4_ = uVar94 & (uint)(fVar72 * fVar85 + auVar15._24_4_);
          auVar16._28_4_ = uVar95 & (uint)(fVar31 * fVar86 + auVar15._28_4_);
          auVar16 = vblendvps_avx(auVar16,auVar77,auVar88);
          cVar4 = (char)uVar11;
          if (cVar4 == -1) {
            auVar17 = vunpcklps_avx(auVar33,auVar28);
            auVar34 = vunpcklps_avx(auVar16,auVar36);
            auVar29 = vunpcklpd_avx(auVar17,auVar34);
            auVar17 = vunpckhpd_avx(auVar17,auVar34);
            auVar34 = vunpckhps_avx(auVar33,auVar28);
            auVar44 = vunpckhps_avx(auVar16,auVar36);
            auVar28 = vunpcklpd_avx(auVar34,auVar44);
            auVar36._16_16_ = auVar17._0_16_;
            auVar36._0_16_ = auVar29._0_16_;
            *(undefined1 (*) [32])(lVar8 + uVar13 * 4) = auVar36;
            auVar34 = vunpckhpd_avx(auVar34,auVar44);
            auVar44._16_16_ = auVar34._0_16_;
            auVar44._0_16_ = auVar28._0_16_;
            *(undefined1 (*) [32])(lVar8 + 0x20 + uVar13 * 4) = auVar44;
            auVar17 = vperm2f128_avx(auVar29,auVar17,0x31);
            *(undefined1 (*) [32])(lVar8 + 0x40 + uVar13 * 4) = auVar17;
            auVar17 = vperm2f128_avx(auVar28,auVar34,0x31);
            *(undefined1 (*) [32])(lVar8 + 0x60 + uVar13 * 4) = auVar17;
          }
          else {
            auVar57 = auVar33._0_16_;
            auVar61 = auVar33._16_16_;
            auVar43 = auVar28._0_16_;
            auVar51 = auVar28._16_16_;
            auVar35 = auVar16._0_16_;
            auVar41 = auVar16._16_16_;
            if ((uVar11 & 1) != 0) {
              *(int *)(lVar8 + uVar13 * 4) = auVar33._0_4_;
            }
            if ((uVar11 & 2) != 0) {
              uVar3 = vextractps_avx(auVar57,1);
              *(undefined4 *)(lVar8 + 0x10 + uVar13 * 4) = uVar3;
            }
            if ((uVar11 & 4) != 0) {
              uVar3 = vextractps_avx(auVar57,2);
              *(undefined4 *)(lVar8 + 0x20 + uVar13 * 4) = uVar3;
            }
            if ((uVar11 & 8) != 0) {
              uVar3 = vextractps_avx(auVar57,3);
              *(undefined4 *)(lVar8 + 0x30 + uVar13 * 4) = uVar3;
            }
            if ((uVar11 & 0x10) != 0) {
              *(int *)(lVar8 + 0x40 + uVar13 * 4) = auVar33._16_4_;
            }
            if ((uVar11 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar61,1);
              *(undefined4 *)(lVar8 + 0x50 + uVar13 * 4) = uVar3;
            }
            if ((uVar11 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar61,2);
              *(undefined4 *)(lVar8 + 0x60 + uVar13 * 4) = uVar3;
            }
            if (cVar4 < '\0') {
              uVar3 = vextractps_avx(auVar61,3);
              *(undefined4 *)(lVar8 + 0x70 + uVar13 * 4) = uVar3;
            }
            if ((uVar11 & 1) != 0) {
              *(int *)(lVar8 + 4 + uVar13 * 4) = auVar28._0_4_;
            }
            if ((uVar11 & 2) != 0) {
              uVar3 = vextractps_avx(auVar43,1);
              *(undefined4 *)(lVar8 + 0x14 + uVar13 * 4) = uVar3;
            }
            if ((uVar11 & 4) != 0) {
              uVar3 = vextractps_avx(auVar43,2);
              *(undefined4 *)(lVar8 + 0x24 + uVar13 * 4) = uVar3;
            }
            if ((uVar11 & 8) != 0) {
              uVar3 = vextractps_avx(auVar43,3);
              *(undefined4 *)(lVar8 + 0x34 + uVar13 * 4) = uVar3;
            }
            if ((uVar11 & 0x10) != 0) {
              *(int *)(lVar8 + 0x44 + uVar13 * 4) = auVar28._16_4_;
            }
            if ((uVar11 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar51,1);
              *(undefined4 *)(lVar8 + 0x54 + uVar13 * 4) = uVar3;
            }
            if ((uVar11 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar51,2);
              *(undefined4 *)(lVar8 + 100 + uVar13 * 4) = uVar3;
            }
            if (cVar4 < '\0') {
              uVar3 = vextractps_avx(auVar51,3);
              *(undefined4 *)(lVar8 + 0x74 + uVar13 * 4) = uVar3;
            }
            if ((uVar11 & 1) != 0) {
              *(int *)(lVar8 + 8 + uVar13 * 4) = auVar16._0_4_;
            }
            if ((uVar11 & 2) != 0) {
              uVar3 = vextractps_avx(auVar35,1);
              *(undefined4 *)(lVar8 + 0x18 + uVar13 * 4) = uVar3;
            }
            if ((uVar11 & 4) != 0) {
              uVar3 = vextractps_avx(auVar35,2);
              *(undefined4 *)(lVar8 + 0x28 + uVar13 * 4) = uVar3;
            }
            if ((uVar11 & 8) != 0) {
              uVar3 = vextractps_avx(auVar35,3);
              *(undefined4 *)(lVar8 + 0x38 + uVar13 * 4) = uVar3;
            }
            if ((uVar11 & 0x10) != 0) {
              *(int *)(lVar8 + 0x48 + uVar13 * 4) = auVar16._16_4_;
            }
            if ((uVar11 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar41,1);
              *(undefined4 *)(lVar8 + 0x58 + uVar13 * 4) = uVar3;
            }
            if ((uVar11 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar41,2);
              *(undefined4 *)(lVar8 + 0x68 + uVar13 * 4) = uVar3;
            }
            if (cVar4 < '\0') {
              uVar3 = vextractps_avx(auVar41,3);
              *(undefined4 *)(lVar8 + 0x78 + uVar13 * 4) = uVar3;
            }
            if ((uVar11 & 1) != 0) {
              uVar3 = vextractps_avx(auVar17._0_16_,3);
              *(undefined4 *)(lVar8 + 0xc + uVar13 * 4) = uVar3;
            }
            if ((uVar11 & 2) != 0) {
              uVar3 = vextractps_avx(auVar17._16_16_,3);
              *(undefined4 *)(lVar8 + 0x1c + uVar13 * 4) = uVar3;
            }
            if ((uVar11 & 4) != 0) {
              uVar3 = vextractps_avx(auVar34._0_16_,3);
              *(undefined4 *)(lVar8 + 0x2c + uVar13 * 4) = uVar3;
            }
            if ((uVar11 & 8) != 0) {
              uVar3 = vextractps_avx(auVar34._16_16_,3);
              *(undefined4 *)(lVar8 + 0x3c + uVar13 * 4) = uVar3;
            }
            if ((uVar11 & 0x10) != 0) {
              uVar3 = vextractps_avx(auVar44._0_16_,3);
              *(undefined4 *)(lVar8 + 0x4c + uVar13 * 4) = uVar3;
            }
            if ((uVar11 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar44._16_16_,3);
              *(undefined4 *)(lVar8 + 0x5c + uVar13 * 4) = uVar3;
            }
            if ((uVar11 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar29._0_16_,3);
              *(undefined4 *)(lVar8 + 0x6c + uVar13 * 4) = uVar3;
            }
            if (cVar4 < '\0') {
              uVar3 = vextractps_avx(auVar29._16_16_,3);
              *(undefined4 *)(lVar8 + 0x7c + uVar13 * 4) = uVar3;
            }
          }
        }
      }
      uVar10 = uVar10 + 8;
      uVar13 = uVar13 + 0x20;
      lVar12 = lVar12 + 0x60;
    } while (uVar10 < (uVar5 & 0xfffffff8));
    if ((int)param_11 <= (int)uVar10) {
      return;
    }
  }
  iVar9 = (int)uVar10;
  auVar17._4_4_ = iVar9;
  auVar17._0_4_ = iVar9;
  auVar17._8_4_ = iVar9;
  auVar17._12_4_ = iVar9;
  auVar17._16_4_ = iVar9;
  auVar17._20_4_ = iVar9;
  auVar17._24_4_ = iVar9;
  auVar17._28_4_ = iVar9;
  auVar17 = vpor_avx2(auVar17,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar34._4_4_ = param_11;
  auVar34._0_4_ = param_11;
  auVar34._8_4_ = param_11;
  auVar34._12_4_ = param_11;
  auVar34._16_4_ = param_11;
  auVar34._20_4_ = param_11;
  auVar34._24_4_ = param_11;
  auVar34._28_4_ = param_11;
  auVar17 = vpcmpgtd_avx2(auVar34,auVar17);
  lVar12 = (longlong)(param_10 + iVar9);
  pauVar6 = (undefined1 (*) [32])(param_1 + lVar12 * 0x10);
  iVar7 = vmovmskps_avx(auVar17);
  if (iVar7 == 0xff) {
    auVar44 = vperm2f128_avx(*pauVar6,pauVar6[2],0x20);
    auVar29 = vperm2f128_avx(*pauVar6,pauVar6[2],0x31);
    auVar28 = vperm2f128_avx(pauVar6[1],pauVar6[3],0x20);
    auVar16 = vperm2f128_avx(pauVar6[1],pauVar6[3],0x31);
    auVar34 = vunpcklps_avx(auVar44,auVar29);
    auVar44 = vunpckhps_avx(auVar44,auVar29);
    auVar36 = vunpcklps_avx(auVar28,auVar16);
    auVar29 = vunpckhps_avx(auVar28,auVar16);
    auVar28 = vunpcklpd_avx(auVar34,auVar36);
    auVar34 = vunpckhpd_avx(auVar34,auVar36);
    auVar36 = vunpcklpd_avx(auVar44,auVar29);
    auVar44 = vunpckhpd_avx(auVar44,auVar29);
  }
  else {
    auVar28 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar17);
    auVar34 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar17);
    auVar36 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar17);
    auVar44 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar17);
  }
  auVar29 = vmaskmovps_avx(auVar17,auVar28);
  auVar34 = vmaskmovps_avx(auVar17,auVar34);
  auVar28 = vmaskmovps_avx(auVar17,auVar36);
  auVar36 = vcmpps_avx(auVar44,ZEXT832(0) << 0x20,4);
  auVar36 = auVar17 & auVar36;
  if ((((((((SUB321(auVar36 >> 0x1f,0) & 1) != 0 || (SUB321(auVar36 >> 0x3f,0) & 1) != 0) ||
          (SUB321(auVar36 >> 0x5f,0) & 1) != 0) || SUB321(auVar36 >> 0x7f,0) != '\0') ||
        (SUB321(auVar36 >> 0x9f,0) & 1) != 0) || SUB321(auVar36 >> 0xbf,0) != '\0') ||
      (SUB321(auVar36 >> 0xdf,0) & 1) != 0) || auVar36[0x1f] < '\0') {
    pauVar2 = (undefined1 (*) [32])(param_2 + lVar12 * 0xc);
    if ((char)iVar7 == -1) {
      auVar36 = pauVar2[1];
      auVar16 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar36);
      auVar33 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,*pauVar2);
      auVar16 = vblendps_avx(auVar33,auVar16,0x88);
      auVar33 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar36);
      auVar88 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,pauVar2[2]);
      auVar33 = vblendps_avx(auVar88,auVar33,0x13);
      auVar37._16_16_ = auVar33._0_16_;
      auVar37._0_16_ = auVar16._0_16_;
      auVar106 = vperm2f128_avx(auVar16,auVar33,0x31);
      auVar36 = vblendps_avx(auVar36,*pauVar2,0x24);
      auVar36 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar36);
      auVar16 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,pauVar2[2]);
      auVar88 = vblendps_avx(auVar36,auVar16,0xe0);
      auVar36 = *(undefined1 (*) [32])(param_3 + lVar12 * 0xc);
      auVar16 = *(undefined1 (*) [32])(param_3 + 0x20 + lVar12 * 0xc);
      auVar33 = *(undefined1 (*) [32])(param_3 + 0x40 + lVar12 * 0xc);
      auVar59 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar16);
      auVar18 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar36);
      auVar59 = vblendps_avx(auVar18,auVar59,0x88);
      auVar18 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar16);
      auVar74 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,auVar33);
      auVar18 = vblendps_avx(auVar74,auVar18,0x13);
      auVar62._16_16_ = auVar18._0_16_;
      auVar62._0_16_ = auVar59._0_16_;
      auVar59 = vperm2f128_avx(auVar59,auVar18,0x31);
      auVar36 = vblendps_avx(auVar16,auVar36,0x24);
      auVar36 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar36);
      auVar16 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,auVar33);
      auVar36 = vblendps_avx(auVar36,auVar16,0xe0);
    }
    else {
      auVar37 = vgatherdps(ZEXT832(0) << 0x20,auVar17);
      auVar106 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar17);
      auVar88 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar17);
      auVar62 = vgatherdps(ZEXT832(0),auVar17);
      auVar59 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar17);
      auVar36 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar17);
    }
    auVar16 = vmaskmovps_avx(auVar17,*(undefined1 (*) [32])(param_4 + (iVar9 << 2)));
    fVar64 = param_7 * auVar16._0_4_ + param_6;
    fVar67 = param_7 * auVar16._4_4_ + param_6;
    fVar68 = param_7 * auVar16._8_4_ + param_6;
    fVar69 = param_7 * auVar16._12_4_ + param_6;
    fVar70 = param_7 * auVar16._16_4_ + param_6;
    fVar71 = param_7 * auVar16._20_4_ + param_6;
    fVar72 = param_7 * auVar16._24_4_ + param_6;
    param_6 = param_7 * auVar16._28_4_ + param_6;
    auVar16 = vmaskmovps_avx(auVar17,*(undefined1 (*) [32])(param_5 + (iVar9 << 2)));
    auVar96._0_4_ = param_9 * auVar16._0_4_ + param_8;
    auVar96._4_4_ = param_9 * auVar16._4_4_ + param_8;
    auVar96._8_4_ = param_9 * auVar16._8_4_ + param_8;
    auVar96._12_4_ = param_9 * auVar16._12_4_ + param_8;
    auVar96._16_4_ = param_9 * auVar16._16_4_ + param_8;
    auVar96._20_4_ = param_9 * auVar16._20_4_ + param_8;
    auVar96._24_4_ = param_9 * auVar16._24_4_ + param_8;
    auVar96._28_4_ = param_9 * auVar16._28_4_ + param_8;
    fVar14 = fVar64 + auVar96._0_4_;
    fVar21 = fVar67 + auVar96._4_4_;
    fVar22 = fVar68 + auVar96._8_4_;
    fVar23 = fVar69 + auVar96._12_4_;
    fVar24 = fVar70 + auVar96._16_4_;
    fVar25 = fVar71 + auVar96._20_4_;
    fVar26 = fVar72 + auVar96._24_4_;
    fVar27 = param_6 + auVar96._28_4_;
    auVar75._0_4_ = -(auVar62._0_4_ * fVar14) + auVar37._0_4_;
    auVar75._4_4_ = -(auVar62._4_4_ * fVar21) + auVar37._4_4_;
    auVar75._8_4_ = -(auVar62._8_4_ * fVar22) + auVar37._8_4_;
    auVar75._12_4_ = -(auVar62._12_4_ * fVar23) + auVar37._12_4_;
    auVar75._16_4_ = -(auVar62._16_4_ * fVar24) + auVar37._16_4_;
    auVar75._20_4_ = -(auVar62._20_4_ * fVar25) + auVar37._20_4_;
    auVar75._24_4_ = -(auVar62._24_4_ * fVar26) + auVar37._24_4_;
    auVar75._28_4_ = -(auVar62._28_4_ * fVar27) + auVar37._28_4_;
    auVar45._0_4_ = -(auVar59._0_4_ * fVar14) + auVar106._0_4_;
    auVar45._4_4_ = -(auVar59._4_4_ * fVar21) + auVar106._4_4_;
    auVar45._8_4_ = -(auVar59._8_4_ * fVar22) + auVar106._8_4_;
    auVar45._12_4_ = -(auVar59._12_4_ * fVar23) + auVar106._12_4_;
    auVar45._16_4_ = -(auVar59._16_4_ * fVar24) + auVar106._16_4_;
    auVar45._20_4_ = -(auVar59._20_4_ * fVar25) + auVar106._20_4_;
    auVar45._24_4_ = -(auVar59._24_4_ * fVar26) + auVar106._24_4_;
    auVar45._28_4_ = -(auVar59._28_4_ * fVar27) + auVar106._28_4_;
    auVar79._0_4_ = -(auVar36._0_4_ * fVar14) + auVar88._0_4_;
    auVar79._4_4_ = -(auVar36._4_4_ * fVar21) + auVar88._4_4_;
    auVar79._8_4_ = -(auVar36._8_4_ * fVar22) + auVar88._8_4_;
    auVar79._12_4_ = -(auVar36._12_4_ * fVar23) + auVar88._12_4_;
    auVar79._16_4_ = -(auVar36._16_4_ * fVar24) + auVar88._16_4_;
    auVar79._20_4_ = -(auVar36._20_4_ * fVar25) + auVar88._20_4_;
    auVar79._24_4_ = -(auVar36._24_4_ * fVar26) + auVar88._24_4_;
    auVar79._28_4_ = -(auVar36._28_4_ * fVar27) + auVar88._28_4_;
    auVar29 = vsubps_avx(auVar29,auVar75);
    auVar34 = vsubps_avx(auVar34,auVar45);
    auVar28 = vsubps_avx(auVar28,auVar79);
    fVar14 = auVar34._0_4_;
    fVar21 = auVar34._4_4_;
    fVar22 = auVar34._8_4_;
    fVar23 = auVar34._12_4_;
    fVar24 = auVar34._16_4_;
    fVar25 = auVar34._20_4_;
    fVar26 = auVar34._24_4_;
    fVar27 = auVar34._28_4_;
    fVar86 = auVar29._0_4_;
    fVar97 = auVar29._4_4_;
    fVar98 = auVar29._8_4_;
    fVar99 = auVar29._12_4_;
    fVar100 = auVar29._16_4_;
    fVar101 = auVar29._20_4_;
    fVar102 = auVar29._24_4_;
    fVar103 = auVar29._28_4_;
    fVar31 = auVar28._0_4_;
    auVar29._0_4_ = fVar31 * fVar31 + fVar86 * fVar86 + fVar14 * fVar14;
    fVar42 = auVar28._4_4_;
    auVar29._4_4_ = fVar42 * fVar42 + fVar97 * fVar97 + fVar21 * fVar21;
    fVar47 = auVar28._8_4_;
    auVar29._8_4_ = fVar47 * fVar47 + fVar98 * fVar98 + fVar22 * fVar22;
    fVar48 = auVar28._12_4_;
    auVar29._12_4_ = fVar48 * fVar48 + fVar99 * fVar99 + fVar23 * fVar23;
    fVar49 = auVar28._16_4_;
    auVar29._16_4_ = fVar49 * fVar49 + fVar100 * fVar100 + fVar24 * fVar24;
    fVar50 = auVar28._20_4_;
    auVar29._20_4_ = fVar50 * fVar50 + fVar101 * fVar101 + fVar25 * fVar25;
    fVar52 = auVar28._24_4_;
    auVar29._24_4_ = fVar52 * fVar52 + fVar102 * fVar102 + fVar26 * fVar26;
    fVar53 = auVar28._28_4_;
    auVar29._28_4_ = fVar53 * fVar53 + fVar103 * fVar103 + fVar27 * fVar27;
    auVar34 = vsqrtps_avx(auVar29);
    auVar34 = vdivps_avx(auVar96,auVar34);
    fVar54 = auVar34._0_4_;
    fVar78 = auVar34._4_4_;
    fVar80 = auVar34._8_4_;
    fVar81 = auVar34._12_4_;
    fVar82 = auVar34._16_4_;
    fVar83 = auVar34._20_4_;
    fVar84 = auVar34._24_4_;
    fVar85 = auVar34._28_4_;
    auVar63._0_4_ = -(fVar64 * auVar62._0_4_) + auVar37._0_4_;
    auVar63._4_4_ = -(fVar67 * auVar62._4_4_) + auVar37._4_4_;
    auVar63._8_4_ = -(fVar68 * auVar62._8_4_) + auVar37._8_4_;
    auVar63._12_4_ = -(fVar69 * auVar62._12_4_) + auVar37._12_4_;
    auVar63._16_4_ = -(fVar70 * auVar62._16_4_) + auVar37._16_4_;
    auVar63._20_4_ = -(fVar71 * auVar62._20_4_) + auVar37._20_4_;
    auVar63._24_4_ = -(fVar72 * auVar62._24_4_) + auVar37._24_4_;
    auVar63._28_4_ = -(param_6 * auVar62._28_4_) + auVar37._28_4_;
    auVar38._0_4_ = auVar96._0_4_ * auVar96._0_4_;
    auVar38._4_4_ = auVar96._4_4_ * auVar96._4_4_;
    auVar38._8_4_ = auVar96._8_4_ * auVar96._8_4_;
    auVar38._12_4_ = auVar96._12_4_ * auVar96._12_4_;
    auVar38._16_4_ = auVar96._16_4_ * auVar96._16_4_;
    auVar38._20_4_ = auVar96._20_4_ * auVar96._20_4_;
    auVar38._24_4_ = auVar96._24_4_ * auVar96._24_4_;
    auVar38._28_4_ = auVar96._28_4_ * auVar96._28_4_;
    auVar34 = vcmpps_avx(auVar29,auVar38,1);
    auVar39._4_4_ = __real_322bcc77;
    auVar39._0_4_ = __real_322bcc77;
    auVar39._8_4_ = __real_322bcc77;
    auVar39._12_4_ = __real_322bcc77;
    auVar39._16_4_ = __real_322bcc77;
    auVar39._20_4_ = __real_322bcc77;
    auVar39._24_4_ = __real_322bcc77;
    auVar39._28_4_ = __real_322bcc77;
    auVar29 = vcmpps_avx(auVar29,auVar39,1);
    uVar11 = auVar34._0_4_;
    auVar40._0_4_ = uVar11 & (uint)(fVar54 * fVar86 + auVar75._0_4_);
    uVar87 = auVar34._4_4_;
    auVar40._4_4_ = uVar87 & (uint)(fVar78 * fVar97 + auVar75._4_4_);
    uVar89 = auVar34._8_4_;
    auVar40._8_4_ = uVar89 & (uint)(fVar80 * fVar98 + auVar75._8_4_);
    uVar90 = auVar34._12_4_;
    auVar40._12_4_ = uVar90 & (uint)(fVar81 * fVar99 + auVar75._12_4_);
    uVar91 = auVar34._16_4_;
    auVar40._16_4_ = uVar91 & (uint)(fVar82 * fVar100 + auVar75._16_4_);
    uVar92 = auVar34._20_4_;
    auVar40._20_4_ = uVar92 & (uint)(fVar83 * fVar101 + auVar75._20_4_);
    uVar93 = auVar34._24_4_;
    auVar40._24_4_ = uVar93 & (uint)(fVar84 * fVar102 + auVar75._24_4_);
    uVar94 = auVar34._28_4_;
    auVar40._28_4_ = uVar94 & (uint)(fVar85 * fVar103 + auVar75._28_4_);
    auVar34 = vblendvps_avx(auVar40,auVar63,auVar29);
    auVar28 = vcmpps_avx(auVar44,ZEXT432(0) << 0x20,4);
    auVar16 = vcmpps_avx(auVar34,ZEXT432(0) << 0x20,4);
    auVar18._0_4_ = auVar16._0_4_ & auVar28._0_4_ & auVar17._0_4_;
    auVar18._4_4_ = auVar16._4_4_ & auVar28._4_4_ & auVar17._4_4_;
    auVar18._8_4_ = auVar16._8_4_ & auVar28._8_4_ & auVar17._8_4_;
    auVar18._12_4_ = auVar16._12_4_ & auVar28._12_4_ & auVar17._12_4_;
    auVar18._16_4_ = auVar16._16_4_ & auVar28._16_4_ & auVar17._16_4_;
    auVar18._20_4_ = auVar16._20_4_ & auVar28._20_4_ & auVar17._20_4_;
    auVar18._24_4_ = auVar16._24_4_ & auVar28._24_4_ & auVar17._24_4_;
    auVar18._28_4_ = auVar16._28_4_ & auVar28._28_4_ & auVar17._28_4_;
    uVar5 = vmovmskps_avx(auVar18);
    if (uVar5 != 0) {
      auVar60._0_4_ = -(fVar64 * auVar59._0_4_) + auVar106._0_4_;
      auVar60._4_4_ = -(fVar67 * auVar59._4_4_) + auVar106._4_4_;
      auVar60._8_4_ = -(fVar68 * auVar59._8_4_) + auVar106._8_4_;
      auVar60._12_4_ = -(fVar69 * auVar59._12_4_) + auVar106._12_4_;
      auVar60._16_4_ = -(fVar70 * auVar59._16_4_) + auVar106._16_4_;
      auVar60._20_4_ = -(fVar71 * auVar59._20_4_) + auVar106._20_4_;
      auVar60._24_4_ = -(fVar72 * auVar59._24_4_) + auVar106._24_4_;
      auVar60._28_4_ = -(param_6 * auVar59._28_4_) + auVar106._28_4_;
      auVar56._0_4_ = -(fVar64 * auVar36._0_4_) + auVar88._0_4_;
      auVar56._4_4_ = -(fVar67 * auVar36._4_4_) + auVar88._4_4_;
      auVar56._8_4_ = -(fVar68 * auVar36._8_4_) + auVar88._8_4_;
      auVar56._12_4_ = -(fVar69 * auVar36._12_4_) + auVar88._12_4_;
      auVar56._16_4_ = -(fVar70 * auVar36._16_4_) + auVar88._16_4_;
      auVar56._20_4_ = -(fVar71 * auVar36._20_4_) + auVar88._20_4_;
      auVar56._24_4_ = -(fVar72 * auVar36._24_4_) + auVar88._24_4_;
      auVar56._28_4_ = -(param_6 * auVar36._28_4_) + auVar88._28_4_;
      auVar19._0_4_ = uVar11 & (uint)(fVar54 * fVar14 + auVar45._0_4_);
      auVar19._4_4_ = uVar87 & (uint)(fVar78 * fVar21 + auVar45._4_4_);
      auVar19._8_4_ = uVar89 & (uint)(fVar80 * fVar22 + auVar45._8_4_);
      auVar19._12_4_ = uVar90 & (uint)(fVar81 * fVar23 + auVar45._12_4_);
      auVar19._16_4_ = uVar91 & (uint)(fVar82 * fVar24 + auVar45._16_4_);
      auVar19._20_4_ = uVar92 & (uint)(fVar83 * fVar25 + auVar45._20_4_);
      auVar19._24_4_ = uVar93 & (uint)(fVar84 * fVar26 + auVar45._24_4_);
      auVar19._28_4_ = uVar94 & (uint)(fVar85 * fVar27 + auVar45._28_4_);
      auVar17 = vblendvps_avx(auVar19,auVar60,auVar29);
      auVar20._0_4_ = uVar11 & (uint)(fVar54 * fVar31 + auVar79._0_4_);
      auVar20._4_4_ = uVar87 & (uint)(fVar78 * fVar42 + auVar79._4_4_);
      auVar20._8_4_ = uVar89 & (uint)(fVar80 * fVar47 + auVar79._8_4_);
      auVar20._12_4_ = uVar90 & (uint)(fVar81 * fVar48 + auVar79._12_4_);
      auVar20._16_4_ = uVar91 & (uint)(fVar82 * fVar49 + auVar79._16_4_);
      auVar20._20_4_ = uVar92 & (uint)(fVar83 * fVar50 + auVar79._20_4_);
      auVar20._24_4_ = uVar93 & (uint)(fVar84 * fVar52 + auVar79._24_4_);
      auVar20._28_4_ = uVar94 & (uint)(fVar85 * fVar53 + auVar79._28_4_);
      auVar29 = vblendvps_avx(auVar20,auVar56,auVar29);
      cVar4 = (char)uVar5;
      if (cVar4 == -1) {
        auVar28 = vunpcklps_avx(auVar34,auVar17);
        auVar16 = vunpcklps_avx(auVar29,auVar44);
        auVar36 = vunpcklpd_avx(auVar28,auVar16);
        auVar28 = vunpckhpd_avx(auVar28,auVar16);
        auVar17 = vunpckhps_avx(auVar34,auVar17);
        auVar34 = vunpckhps_avx(auVar29,auVar44);
        auVar44 = vunpcklpd_avx(auVar17,auVar34);
        auVar46._16_16_ = auVar28._0_16_;
        auVar46._0_16_ = auVar36._0_16_;
        *pauVar6 = auVar46;
        auVar17 = vunpckhpd_avx(auVar17,auVar34);
        auVar30._16_16_ = auVar17._0_16_;
        auVar30._0_16_ = auVar44._0_16_;
        pauVar6[1] = auVar30;
        auVar34 = vperm2f128_avx(auVar36,auVar28,0x31);
        pauVar6[2] = auVar34;
        auVar17 = vperm2f128_avx(auVar44,auVar17,0x31);
        pauVar6[3] = auVar17;
      }
      else {
        auVar73 = auVar44._0_16_;
        auVar76 = auVar44._16_16_;
        auVar57 = auVar34._0_16_;
        auVar61 = auVar34._16_16_;
        auVar43 = auVar17._0_16_;
        auVar51 = auVar17._16_16_;
        auVar35 = auVar29._0_16_;
        auVar41 = auVar29._16_16_;
        if ((uVar5 & 1) != 0) {
          *(int *)*pauVar6 = auVar34._0_4_;
        }
        if ((uVar5 & 2) != 0) {
          uVar3 = vextractps_avx(auVar57,1);
          *(undefined4 *)(*pauVar6 + 0x10) = uVar3;
        }
        if ((uVar5 & 4) != 0) {
          uVar3 = vextractps_avx(auVar57,2);
          *(undefined4 *)pauVar6[1] = uVar3;
        }
        if ((uVar5 & 8) != 0) {
          uVar3 = vextractps_avx(auVar57,3);
          *(undefined4 *)(pauVar6[1] + 0x10) = uVar3;
        }
        if ((uVar5 & 0x10) != 0) {
          *(int *)pauVar6[2] = auVar34._16_4_;
        }
        if ((uVar5 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar61,1);
          *(undefined4 *)(pauVar6[2] + 0x10) = uVar3;
        }
        if ((uVar5 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar61,2);
          *(undefined4 *)pauVar6[3] = uVar3;
        }
        if (cVar4 < '\0') {
          uVar3 = vextractps_avx(auVar61,3);
          *(undefined4 *)(pauVar6[3] + 0x10) = uVar3;
        }
        if ((uVar5 & 1) != 0) {
          *(int *)(*pauVar6 + 4) = auVar17._0_4_;
        }
        if ((uVar5 & 2) != 0) {
          uVar3 = vextractps_avx(auVar43,1);
          *(undefined4 *)(*pauVar6 + 0x14) = uVar3;
        }
        if ((uVar5 & 4) != 0) {
          uVar3 = vextractps_avx(auVar43,2);
          *(undefined4 *)(pauVar6[1] + 4) = uVar3;
        }
        if ((uVar5 & 8) != 0) {
          uVar3 = vextractps_avx(auVar43,3);
          *(undefined4 *)(pauVar6[1] + 0x14) = uVar3;
        }
        if ((uVar5 & 0x10) != 0) {
          *(int *)(pauVar6[2] + 4) = auVar17._16_4_;
        }
        if ((uVar5 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar51,1);
          *(undefined4 *)(pauVar6[2] + 0x14) = uVar3;
        }
        if ((uVar5 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar51,2);
          *(undefined4 *)(pauVar6[3] + 4) = uVar3;
        }
        if (cVar4 < '\0') {
          uVar3 = vextractps_avx(auVar51,3);
          *(undefined4 *)(pauVar6[3] + 0x14) = uVar3;
        }
        if ((uVar5 & 1) != 0) {
          *(int *)(*pauVar6 + 8) = auVar29._0_4_;
        }
        if ((uVar5 & 2) != 0) {
          uVar3 = vextractps_avx(auVar35,1);
          *(undefined4 *)(*pauVar6 + 0x18) = uVar3;
        }
        if ((uVar5 & 4) != 0) {
          uVar3 = vextractps_avx(auVar35,2);
          *(undefined4 *)(pauVar6[1] + 8) = uVar3;
        }
        if ((uVar5 & 8) != 0) {
          uVar3 = vextractps_avx(auVar35,3);
          *(undefined4 *)(pauVar6[1] + 0x18) = uVar3;
        }
        if ((uVar5 & 0x10) != 0) {
          *(int *)(pauVar6[2] + 8) = auVar29._16_4_;
        }
        if ((uVar5 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar41,1);
          *(undefined4 *)(pauVar6[2] + 0x18) = uVar3;
        }
        if ((uVar5 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar41,2);
          *(undefined4 *)(pauVar6[3] + 8) = uVar3;
        }
        if (cVar4 < '\0') {
          uVar3 = vextractps_avx(auVar41,3);
          *(undefined4 *)(pauVar6[3] + 0x18) = uVar3;
        }
        if ((uVar5 & 1) != 0) {
          *(int *)(*pauVar6 + 0xc) = auVar44._0_4_;
        }
        if ((uVar5 & 2) != 0) {
          uVar3 = vextractps_avx(auVar73,1);
          *(undefined4 *)(*pauVar6 + 0x1c) = uVar3;
        }
        if ((uVar5 & 4) != 0) {
          uVar3 = vextractps_avx(auVar73,2);
          *(undefined4 *)(pauVar6[1] + 0xc) = uVar3;
        }
        if ((uVar5 & 8) != 0) {
          uVar3 = vextractps_avx(auVar73,3);
          *(undefined4 *)(pauVar6[1] + 0x1c) = uVar3;
        }
        if ((uVar5 & 0x10) != 0) {
          *(int *)(pauVar6[2] + 0xc) = auVar44._16_4_;
        }
        if ((uVar5 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar76,1);
          *(undefined4 *)(pauVar6[2] + 0x1c) = uVar3;
        }
        if ((uVar5 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar76,2);
          *(undefined4 *)(pauVar6[3] + 0xc) = uVar3;
        }
        if (cVar4 < '\0') {
          uVar3 = vextractps_avx(auVar76,3);
          *(undefined4 *)(pauVar6[3] + 0x1c) = uVar3;
        }
      }
    }
  }
  return;
}

// ApplySphericalBackstopConstraintsWithDistanceMap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_CunfCunfCunfCuniCuni_avx2 @ 140321a20

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplySphericalBackstopConstraintsWithDistanceMap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_CunfCunfCunfCuniCuni_avx2
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,float param_5,
               float param_6,float param_7,int param_8,uint param_9)

{
  float *pfVar1;
  undefined1 (*pauVar2) [32];
  undefined4 uVar3;
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  char cVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 (*pauVar10) [32];
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar24 [16];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  float fVar26;
  float fVar27;
  undefined1 auVar25 [32];
  float fVar28;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar29 [32];
  undefined1 auVar37 [16];
  undefined1 auVar40 [16];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [16];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar55 [16];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  float fVar56;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [16];
  undefined1 auVar76 [32];
  float fVar77;
  float fVar78;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  undefined1 auVar79 [32];
  undefined1 auVar87 [32];
  uint uVar88;
  uint uVar90;
  uint uVar91;
  uint uVar92;
  uint uVar93;
  uint uVar94;
  uint uVar95;
  undefined1 auVar89 [32];
  uint uVar96;
  undefined1 auVar97 [32];
  undefined1 auVar98 [64];
  float fVar99;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  undefined1 auVar100 [32];
  undefined1 local_2a0 [8];
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  
  uVar8 = param_9 + 7;
  if (-1 < (int)param_9) {
    uVar8 = param_9;
  }
  if ((int)(uVar8 & 0xfffffff8) < 1) {
    uVar9 = 0;
    if ((int)param_9 < 1) {
      return;
    }
  }
  else {
    fVar78 = param_7 * param_7;
    lVar12 = (longlong)param_8 * 0x10 + param_1;
    lVar11 = (longlong)param_8 * 0xc + 0x40;
    uVar14 = 0;
    auVar98 = ZEXT864(0);
    uVar9 = 0;
    do {
      auVar19 = *(undefined1 (*) [32])(lVar12 + uVar14 * 4);
      auVar29 = *(undefined1 (*) [32])(lVar12 + 0x20 + uVar14 * 4);
      auVar38 = *(undefined1 (*) [32])(lVar12 + 0x40 + uVar14 * 4);
      auVar21 = *(undefined1 (*) [32])(lVar12 + 0x60 + uVar14 * 4);
      auVar53 = vperm2f128_avx(auVar19,auVar38,0x20);
      auVar52 = vperm2f128_avx(auVar19,auVar38,0x31);
      auVar87 = vperm2f128_avx(auVar29,auVar21,0x20);
      auVar17 = vperm2f128_avx(auVar29,auVar21,0x31);
      auVar18 = vunpckhps_avx(auVar53,auVar52);
      auVar4 = vunpckhps_avx(auVar87,auVar17);
      auVar42 = vunpckhpd_avx(auVar18,auVar4);
      auVar20 = vcmpps_avx(auVar98._0_32_,auVar42,4);
      if ((((((((SUB321(auVar20 >> 0x1f,0) & 1) != 0 || (SUB321(auVar20 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar20 >> 0x5f,0) & 1) != 0) || SUB321(auVar20 >> 0x7f,0) != '\0') ||
            (SUB321(auVar20 >> 0x9f,0) & 1) != 0) || SUB321(auVar20 >> 0xbf,0) != '\0') ||
          (SUB321(auVar20 >> 0xdf,0) & 1) != 0) || auVar20[0x1f] < '\0') {
        auVar76 = vunpcklpd_avx(auVar18,auVar4);
        auVar18 = vunpcklps_avx(auVar53,auVar52);
        auVar4 = vunpcklps_avx(auVar87,auVar17);
        auVar48 = vunpckhpd_avx(auVar18,auVar4);
        auVar51 = vunpcklpd_avx(auVar18,auVar4);
        auVar18 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar11);
        auVar4 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar11);
        auVar53 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar4);
        auVar52 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,auVar18);
        auVar53 = vblendps_avx(auVar52,auVar53,0x88);
        auVar52 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar4);
        auVar87 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,*(undefined1 (*) [32])(param_2 + lVar11));
        auVar52 = vblendps_avx(auVar87,auVar52,0x13);
        auVar43 = vperm2f128_avx(auVar53,auVar52,0x31);
        auVar18 = vblendps_avx(auVar4,auVar18,0x24);
        auVar18 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar18);
        auVar4 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                              ,*(undefined1 (*) [32])(param_2 + lVar11));
        auVar87 = vblendps_avx(auVar18,auVar4,0xe0);
        auVar18 = *(undefined1 (*) [32])(param_3 + -0x40 + lVar11);
        auVar4 = *(undefined1 (*) [32])(param_3 + -0x20 + lVar11);
        auVar17 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar4);
        auVar73 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,auVar18);
        auVar17 = vblendps_avx(auVar73,auVar17,0x88);
        auVar73 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar4);
        auVar57 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,*(undefined1 (*) [32])(param_3 + lVar11));
        auVar73 = vblendps_avx(auVar57,auVar73,0x13);
        auVar57 = vperm2f128_avx(auVar17,auVar73,0x31);
        auVar18 = vblendps_avx(auVar4,auVar18,0x24);
        auVar18 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar18);
        auVar4 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                              ,*(undefined1 (*) [32])(param_3 + lVar11));
        auVar18 = vblendps_avx(auVar18,auVar4,0xe0);
        pfVar1 = (float *)(param_4 + (uVar14 & 0xffffffff));
        fVar56 = param_6 * *pfVar1 + param_5;
        fVar59 = param_6 * pfVar1[1] + param_5;
        fVar60 = param_6 * pfVar1[2] + param_5;
        fVar61 = param_6 * pfVar1[3] + param_5;
        fVar62 = param_6 * pfVar1[4] + param_5;
        fVar63 = param_6 * pfVar1[5] + param_5;
        fVar64 = param_6 * pfVar1[6] + param_5;
        fVar65 = param_6 * pfVar1[7] + param_5;
        auVar5._4_4_ = param_7;
        auVar5._0_4_ = param_7;
        auVar5._8_4_ = param_7;
        auVar5._12_4_ = param_7;
        auVar5._16_4_ = param_7;
        auVar5._20_4_ = param_7;
        auVar5._24_4_ = param_7;
        auVar5._28_4_ = param_7;
        fVar99 = param_7 + fVar56;
        fVar101 = param_7 + fVar59;
        fVar102 = param_7 + fVar60;
        fVar103 = param_7 + fVar61;
        fVar104 = param_7 + fVar62;
        fVar105 = param_7 + fVar63;
        fVar106 = param_7 + fVar64;
        fVar107 = param_7 + fVar65;
        auVar97._0_4_ = -(auVar17._0_4_ * fVar99) + auVar53._0_4_;
        auVar97._4_4_ = -(auVar17._4_4_ * fVar101) + auVar53._4_4_;
        auVar97._8_4_ = -(auVar17._8_4_ * fVar102) + auVar53._8_4_;
        auVar97._12_4_ = -(auVar17._12_4_ * fVar103) + auVar53._12_4_;
        auVar97._16_4_ = -(auVar73._0_4_ * fVar104) + auVar52._0_4_;
        auVar97._20_4_ = -(auVar73._4_4_ * fVar105) + auVar52._4_4_;
        auVar97._24_4_ = -(auVar73._8_4_ * fVar106) + auVar52._8_4_;
        auVar97._28_4_ = -(auVar73._12_4_ * fVar107) + auVar52._12_4_;
        auVar41._0_4_ = -(auVar57._0_4_ * fVar99) + auVar43._0_4_;
        auVar41._4_4_ = -(auVar57._4_4_ * fVar101) + auVar43._4_4_;
        auVar41._8_4_ = -(auVar57._8_4_ * fVar102) + auVar43._8_4_;
        auVar41._12_4_ = -(auVar57._12_4_ * fVar103) + auVar43._12_4_;
        auVar41._16_4_ = -(auVar57._16_4_ * fVar104) + auVar43._16_4_;
        auVar41._20_4_ = -(auVar57._20_4_ * fVar105) + auVar43._20_4_;
        auVar41._24_4_ = -(auVar57._24_4_ * fVar106) + auVar43._24_4_;
        auVar41._28_4_ = -(auVar57._28_4_ * fVar107) + auVar43._28_4_;
        auVar100._0_4_ = -(auVar18._0_4_ * fVar99) + auVar87._0_4_;
        auVar100._4_4_ = -(auVar18._4_4_ * fVar101) + auVar87._4_4_;
        auVar100._8_4_ = -(auVar18._8_4_ * fVar102) + auVar87._8_4_;
        auVar100._12_4_ = -(auVar18._12_4_ * fVar103) + auVar87._12_4_;
        auVar100._16_4_ = -(auVar18._16_4_ * fVar104) + auVar87._16_4_;
        auVar100._20_4_ = -(auVar18._20_4_ * fVar105) + auVar87._20_4_;
        auVar100._24_4_ = -(auVar18._24_4_ * fVar106) + auVar87._24_4_;
        auVar100._28_4_ = -(auVar18._28_4_ * fVar107) + auVar87._28_4_;
        auVar4 = vsubps_avx(auVar51,auVar97);
        auVar48 = vsubps_avx(auVar48,auVar41);
        auVar76 = vsubps_avx(auVar76,auVar100);
        fVar99 = auVar48._0_4_;
        fVar101 = auVar48._4_4_;
        fVar102 = auVar48._8_4_;
        fVar103 = auVar48._12_4_;
        fVar104 = auVar48._16_4_;
        fVar105 = auVar48._20_4_;
        fVar106 = auVar48._24_4_;
        fVar107 = auVar48._28_4_;
        fVar28 = auVar4._0_4_;
        fVar30 = auVar4._4_4_;
        fVar31 = auVar4._8_4_;
        fVar32 = auVar4._12_4_;
        fVar33 = auVar4._16_4_;
        fVar34 = auVar4._20_4_;
        fVar35 = auVar4._24_4_;
        fVar36 = auVar4._28_4_;
        fVar77 = auVar76._0_4_;
        auVar51._0_4_ = fVar77 * fVar77 + fVar28 * fVar28 + fVar99 * fVar99;
        fVar80 = auVar76._4_4_;
        auVar51._4_4_ = fVar80 * fVar80 + fVar30 * fVar30 + fVar101 * fVar101;
        fVar81 = auVar76._8_4_;
        auVar51._8_4_ = fVar81 * fVar81 + fVar31 * fVar31 + fVar102 * fVar102;
        fVar82 = auVar76._12_4_;
        auVar51._12_4_ = fVar82 * fVar82 + fVar32 * fVar32 + fVar103 * fVar103;
        fVar83 = auVar76._16_4_;
        auVar51._16_4_ = fVar83 * fVar83 + fVar33 * fVar33 + fVar104 * fVar104;
        fVar84 = auVar76._20_4_;
        auVar51._20_4_ = fVar84 * fVar84 + fVar34 * fVar34 + fVar105 * fVar105;
        fVar85 = auVar76._24_4_;
        auVar51._24_4_ = fVar85 * fVar85 + fVar35 * fVar35 + fVar106 * fVar106;
        fVar86 = auVar76._28_4_;
        auVar51._28_4_ = fVar86 * fVar86 + fVar36 * fVar36 + fVar107 * fVar107;
        auVar4 = vsqrtps_avx(auVar51);
        auVar4 = vdivps_avx(auVar5,auVar4);
        fVar66 = auVar4._0_4_;
        fVar67 = auVar4._4_4_;
        fVar68 = auVar4._8_4_;
        fVar69 = auVar4._12_4_;
        fVar70 = auVar4._16_4_;
        fVar71 = auVar4._20_4_;
        fVar26 = auVar4._24_4_;
        fVar27 = auVar4._28_4_;
        auVar48._0_4_ = -(fVar56 * auVar17._0_4_) + auVar53._0_4_;
        auVar48._4_4_ = -(fVar59 * auVar17._4_4_) + auVar53._4_4_;
        auVar48._8_4_ = -(fVar60 * auVar17._8_4_) + auVar53._8_4_;
        auVar48._12_4_ = -(fVar61 * auVar17._12_4_) + auVar53._12_4_;
        auVar48._16_4_ = -(fVar62 * auVar73._0_4_) + auVar52._0_4_;
        auVar48._20_4_ = -(fVar63 * auVar73._4_4_) + auVar52._4_4_;
        auVar48._24_4_ = -(fVar64 * auVar73._8_4_) + auVar52._8_4_;
        auVar48._28_4_ = -(fVar65 * auVar73._12_4_) + auVar52._12_4_;
        auVar53._4_4_ = __real_322bcc77;
        auVar53._0_4_ = __real_322bcc77;
        auVar53._8_4_ = __real_322bcc77;
        auVar53._12_4_ = __real_322bcc77;
        auVar53._16_4_ = __real_322bcc77;
        auVar53._20_4_ = __real_322bcc77;
        auVar53._24_4_ = __real_322bcc77;
        auVar53._28_4_ = __real_322bcc77;
        auVar53 = vcmpps_avx(auVar51,auVar53,1);
        auVar4._4_4_ = fVar78;
        auVar4._0_4_ = fVar78;
        auVar4._8_4_ = fVar78;
        auVar4._12_4_ = fVar78;
        auVar4._16_4_ = fVar78;
        auVar4._20_4_ = fVar78;
        auVar4._24_4_ = fVar78;
        auVar4._28_4_ = fVar78;
        auVar4 = vcmpps_avx(auVar51,auVar4,1);
        uVar88 = auVar4._0_4_;
        auVar52._0_4_ = (uint)(fVar66 * fVar28 + auVar97._0_4_) & uVar88;
        uVar90 = auVar4._4_4_;
        auVar52._4_4_ = (uint)(fVar67 * fVar30 + auVar97._4_4_) & uVar90;
        uVar91 = auVar4._8_4_;
        auVar52._8_4_ = (uint)(fVar68 * fVar31 + auVar97._8_4_) & uVar91;
        uVar92 = auVar4._12_4_;
        auVar52._12_4_ = (uint)(fVar69 * fVar32 + auVar97._12_4_) & uVar92;
        uVar93 = auVar4._16_4_;
        auVar52._16_4_ = (uint)(fVar70 * fVar33 + auVar97._16_4_) & uVar93;
        uVar94 = auVar4._20_4_;
        auVar52._20_4_ = (uint)(fVar71 * fVar34 + auVar97._20_4_) & uVar94;
        uVar95 = auVar4._24_4_;
        auVar52._24_4_ = (uint)(fVar26 * fVar35 + auVar97._24_4_) & uVar95;
        uVar96 = auVar4._28_4_;
        auVar52._28_4_ = (uint)(fVar27 * fVar36 + auVar97._28_4_) & uVar96;
        auVar98 = ZEXT1264(ZEXT412(0)) << 0x20;
        auVar4 = vblendvps_avx(auVar52,auVar48,auVar53);
        auVar52 = vcmpps_avx(ZEXT1232(ZEXT412(0)) << 0x20,auVar4,4);
        auVar17._0_4_ = auVar52._0_4_ & auVar20._0_4_;
        auVar17._4_4_ = auVar52._4_4_ & auVar20._4_4_;
        auVar17._8_4_ = auVar52._8_4_ & auVar20._8_4_;
        auVar17._12_4_ = auVar52._12_4_ & auVar20._12_4_;
        auVar17._16_4_ = auVar52._16_4_ & auVar20._16_4_;
        auVar17._20_4_ = auVar52._20_4_ & auVar20._20_4_;
        auVar17._24_4_ = auVar52._24_4_ & auVar20._24_4_;
        auVar17._28_4_ = auVar52._28_4_ & auVar20._28_4_;
        uVar15 = vmovmskps_avx(auVar17);
        if (uVar15 != 0) {
          auVar73._0_4_ = -(fVar56 * auVar57._0_4_) + auVar43._0_4_;
          auVar73._4_4_ = -(fVar59 * auVar57._4_4_) + auVar43._4_4_;
          auVar73._8_4_ = -(fVar60 * auVar57._8_4_) + auVar43._8_4_;
          auVar73._12_4_ = -(fVar61 * auVar57._12_4_) + auVar43._12_4_;
          auVar73._16_4_ = -(fVar62 * auVar57._16_4_) + auVar43._16_4_;
          auVar73._20_4_ = -(fVar63 * auVar57._20_4_) + auVar43._20_4_;
          auVar73._24_4_ = -(fVar64 * auVar57._24_4_) + auVar43._24_4_;
          auVar73._28_4_ = -(fVar65 * auVar57._28_4_) + auVar43._28_4_;
          auVar76._0_4_ = -(fVar56 * auVar18._0_4_) + auVar87._0_4_;
          auVar76._4_4_ = -(fVar59 * auVar18._4_4_) + auVar87._4_4_;
          auVar76._8_4_ = -(fVar60 * auVar18._8_4_) + auVar87._8_4_;
          auVar76._12_4_ = -(fVar61 * auVar18._12_4_) + auVar87._12_4_;
          auVar76._16_4_ = -(fVar62 * auVar18._16_4_) + auVar87._16_4_;
          auVar76._20_4_ = -(fVar63 * auVar18._20_4_) + auVar87._20_4_;
          auVar76._24_4_ = -(fVar64 * auVar18._24_4_) + auVar87._24_4_;
          auVar76._28_4_ = -(fVar65 * auVar18._28_4_) + auVar87._28_4_;
          auVar20._0_4_ = (uint)(fVar66 * fVar99 + auVar41._0_4_) & uVar88;
          auVar20._4_4_ = (uint)(fVar67 * fVar101 + auVar41._4_4_) & uVar90;
          auVar20._8_4_ = (uint)(fVar68 * fVar102 + auVar41._8_4_) & uVar91;
          auVar20._12_4_ = (uint)(fVar69 * fVar103 + auVar41._12_4_) & uVar92;
          auVar20._16_4_ = (uint)(fVar70 * fVar104 + auVar41._16_4_) & uVar93;
          auVar20._20_4_ = (uint)(fVar71 * fVar105 + auVar41._20_4_) & uVar94;
          auVar20._24_4_ = (uint)(fVar26 * fVar106 + auVar41._24_4_) & uVar95;
          auVar20._28_4_ = (uint)(fVar27 * fVar107 + auVar41._28_4_) & uVar96;
          auVar20 = vblendvps_avx(auVar20,auVar73,auVar53);
          auVar18._0_4_ = (uint)(fVar66 * fVar77 + auVar100._0_4_) & uVar88;
          auVar18._4_4_ = (uint)(fVar67 * fVar80 + auVar100._4_4_) & uVar90;
          auVar18._8_4_ = (uint)(fVar68 * fVar81 + auVar100._8_4_) & uVar91;
          auVar18._12_4_ = (uint)(fVar69 * fVar82 + auVar100._12_4_) & uVar92;
          auVar18._16_4_ = (uint)(fVar70 * fVar83 + auVar100._16_4_) & uVar93;
          auVar18._20_4_ = (uint)(fVar71 * fVar84 + auVar100._20_4_) & uVar94;
          auVar18._24_4_ = (uint)(fVar26 * fVar85 + auVar100._24_4_) & uVar95;
          auVar18._28_4_ = (uint)(fVar27 * fVar86 + auVar100._28_4_) & uVar96;
          auVar18 = vblendvps_avx(auVar18,auVar76,auVar53);
          cVar6 = (char)uVar15;
          if (cVar6 == -1) {
            auVar19 = vunpcklps_avx(auVar4,auVar20);
            auVar29 = vunpcklps_avx(auVar18,auVar42);
            auVar21 = vunpcklpd_avx(auVar19,auVar29);
            auVar19 = vunpckhpd_avx(auVar19,auVar29);
            auVar29 = vunpckhps_avx(auVar4,auVar20);
            auVar38 = vunpckhps_avx(auVar18,auVar42);
            auVar20 = vunpcklpd_avx(auVar29,auVar38);
            auVar42._16_16_ = auVar19._0_16_;
            auVar42._0_16_ = auVar21._0_16_;
            *(undefined1 (*) [32])(lVar12 + uVar14 * 4) = auVar42;
            auVar29 = vunpckhpd_avx(auVar29,auVar38);
            auVar38._16_16_ = auVar29._0_16_;
            auVar38._0_16_ = auVar20._0_16_;
            *(undefined1 (*) [32])(lVar12 + 0x20 + uVar14 * 4) = auVar38;
            auVar19 = vperm2f128_avx(auVar21,auVar19,0x31);
            *(undefined1 (*) [32])(lVar12 + 0x40 + uVar14 * 4) = auVar19;
            auVar19 = vperm2f128_avx(auVar20,auVar29,0x31);
            *(undefined1 (*) [32])(lVar12 + 0x60 + uVar14 * 4) = auVar19;
          }
          else {
            auVar50 = auVar4._0_16_;
            auVar55 = auVar4._16_16_;
            auVar37 = auVar20._0_16_;
            auVar40 = auVar20._16_16_;
            auVar16 = auVar18._0_16_;
            auVar24 = auVar18._16_16_;
            if ((uVar15 & 1) != 0) {
              *(int *)(lVar12 + uVar14 * 4) = auVar4._0_4_;
            }
            if ((uVar15 & 2) != 0) {
              uVar3 = vextractps_avx(auVar50,1);
              *(undefined4 *)(lVar12 + 0x10 + uVar14 * 4) = uVar3;
            }
            if ((uVar15 & 4) != 0) {
              uVar3 = vextractps_avx(auVar50,2);
              *(undefined4 *)(lVar12 + 0x20 + uVar14 * 4) = uVar3;
            }
            if ((uVar15 & 8) != 0) {
              uVar3 = vextractps_avx(auVar50,3);
              *(undefined4 *)(lVar12 + 0x30 + uVar14 * 4) = uVar3;
            }
            if ((uVar15 & 0x10) != 0) {
              *(int *)(lVar12 + 0x40 + uVar14 * 4) = auVar4._16_4_;
            }
            if ((uVar15 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar55,1);
              *(undefined4 *)(lVar12 + 0x50 + uVar14 * 4) = uVar3;
            }
            if ((uVar15 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar55,2);
              *(undefined4 *)(lVar12 + 0x60 + uVar14 * 4) = uVar3;
            }
            if (cVar6 < '\0') {
              uVar3 = vextractps_avx(auVar55,3);
              *(undefined4 *)(lVar12 + 0x70 + uVar14 * 4) = uVar3;
            }
            if ((uVar15 & 1) != 0) {
              *(int *)(lVar12 + 4 + uVar14 * 4) = auVar20._0_4_;
            }
            if ((uVar15 & 2) != 0) {
              uVar3 = vextractps_avx(auVar37,1);
              *(undefined4 *)(lVar12 + 0x14 + uVar14 * 4) = uVar3;
            }
            if ((uVar15 & 4) != 0) {
              uVar3 = vextractps_avx(auVar37,2);
              *(undefined4 *)(lVar12 + 0x24 + uVar14 * 4) = uVar3;
            }
            if ((uVar15 & 8) != 0) {
              uVar3 = vextractps_avx(auVar37,3);
              *(undefined4 *)(lVar12 + 0x34 + uVar14 * 4) = uVar3;
            }
            if ((uVar15 & 0x10) != 0) {
              *(int *)(lVar12 + 0x44 + uVar14 * 4) = auVar20._16_4_;
            }
            if ((uVar15 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar40,1);
              *(undefined4 *)(lVar12 + 0x54 + uVar14 * 4) = uVar3;
            }
            if ((uVar15 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar40,2);
              *(undefined4 *)(lVar12 + 100 + uVar14 * 4) = uVar3;
            }
            if (cVar6 < '\0') {
              uVar3 = vextractps_avx(auVar40,3);
              *(undefined4 *)(lVar12 + 0x74 + uVar14 * 4) = uVar3;
            }
            if ((uVar15 & 1) != 0) {
              *(int *)(lVar12 + 8 + uVar14 * 4) = auVar18._0_4_;
            }
            if ((uVar15 & 2) != 0) {
              uVar3 = vextractps_avx(auVar16,1);
              *(undefined4 *)(lVar12 + 0x18 + uVar14 * 4) = uVar3;
            }
            if ((uVar15 & 4) != 0) {
              uVar3 = vextractps_avx(auVar16,2);
              *(undefined4 *)(lVar12 + 0x28 + uVar14 * 4) = uVar3;
            }
            if ((uVar15 & 8) != 0) {
              uVar3 = vextractps_avx(auVar16,3);
              *(undefined4 *)(lVar12 + 0x38 + uVar14 * 4) = uVar3;
            }
            if ((uVar15 & 0x10) != 0) {
              *(int *)(lVar12 + 0x48 + uVar14 * 4) = auVar18._16_4_;
            }
            if ((uVar15 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar24,1);
              *(undefined4 *)(lVar12 + 0x58 + uVar14 * 4) = uVar3;
            }
            if ((uVar15 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar24,2);
              *(undefined4 *)(lVar12 + 0x68 + uVar14 * 4) = uVar3;
            }
            if (cVar6 < '\0') {
              uVar3 = vextractps_avx(auVar24,3);
              *(undefined4 *)(lVar12 + 0x78 + uVar14 * 4) = uVar3;
            }
            if ((uVar15 & 1) != 0) {
              uVar3 = vextractps_avx(auVar19._0_16_,3);
              *(undefined4 *)(lVar12 + 0xc + uVar14 * 4) = uVar3;
            }
            if ((uVar15 & 2) != 0) {
              uVar3 = vextractps_avx(auVar19._16_16_,3);
              *(undefined4 *)(lVar12 + 0x1c + uVar14 * 4) = uVar3;
            }
            if ((uVar15 & 4) != 0) {
              uVar3 = vextractps_avx(auVar29._0_16_,3);
              *(undefined4 *)(lVar12 + 0x2c + uVar14 * 4) = uVar3;
            }
            if ((uVar15 & 8) != 0) {
              uVar3 = vextractps_avx(auVar29._16_16_,3);
              *(undefined4 *)(lVar12 + 0x3c + uVar14 * 4) = uVar3;
            }
            if ((uVar15 & 0x10) != 0) {
              uVar3 = vextractps_avx(auVar38._0_16_,3);
              *(undefined4 *)(lVar12 + 0x4c + uVar14 * 4) = uVar3;
            }
            if ((uVar15 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar38._16_16_,3);
              *(undefined4 *)(lVar12 + 0x5c + uVar14 * 4) = uVar3;
            }
            if ((uVar15 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar21._0_16_,3);
              *(undefined4 *)(lVar12 + 0x6c + uVar14 * 4) = uVar3;
            }
            if (cVar6 < '\0') {
              uVar3 = vextractps_avx(auVar21._16_16_,3);
              *(undefined4 *)(lVar12 + 0x7c + uVar14 * 4) = uVar3;
            }
          }
        }
      }
      uVar9 = uVar9 + 8;
      uVar14 = uVar14 + 0x20;
      lVar11 = lVar11 + 0x60;
    } while (uVar9 < (uVar8 & 0xfffffff8));
    if ((int)param_9 <= (int)uVar9) {
      return;
    }
  }
  iVar7 = (int)uVar9;
  auVar19._4_4_ = iVar7;
  auVar19._0_4_ = iVar7;
  auVar19._8_4_ = iVar7;
  auVar19._12_4_ = iVar7;
  auVar19._16_4_ = iVar7;
  auVar19._20_4_ = iVar7;
  auVar19._24_4_ = iVar7;
  auVar19._28_4_ = iVar7;
  auVar19 = vpor_avx2(auVar19,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar29._4_4_ = param_9;
  auVar29._0_4_ = param_9;
  auVar29._8_4_ = param_9;
  auVar29._12_4_ = param_9;
  auVar29._16_4_ = param_9;
  auVar29._20_4_ = param_9;
  auVar29._24_4_ = param_9;
  auVar29._28_4_ = param_9;
  auVar19 = vpcmpgtd_avx2(auVar29,auVar19);
  lVar11 = (longlong)(param_8 + iVar7);
  pauVar10 = (undefined1 (*) [32])(param_1 + lVar11 * 0x10);
  iVar13 = vmovmskps_avx(auVar19);
  if (iVar13 == 0xff) {
    auVar38 = vperm2f128_avx(*pauVar10,pauVar10[2],0x20);
    auVar21 = vperm2f128_avx(*pauVar10,pauVar10[2],0x31);
    auVar20 = vperm2f128_avx(pauVar10[1],pauVar10[3],0x20);
    auVar18 = vperm2f128_avx(pauVar10[1],pauVar10[3],0x31);
    auVar29 = vunpcklps_avx(auVar38,auVar21);
    auVar38 = vunpckhps_avx(auVar38,auVar21);
    auVar42 = vunpcklps_avx(auVar20,auVar18);
    auVar21 = vunpckhps_avx(auVar20,auVar18);
    auVar20 = vunpcklpd_avx(auVar29,auVar42);
    auVar29 = vunpckhpd_avx(auVar29,auVar42);
    auVar42 = vunpcklpd_avx(auVar38,auVar21);
    auVar38 = vunpckhpd_avx(auVar38,auVar21);
  }
  else {
    auVar20 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar19);
    auVar29 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar19);
    auVar42 = vgatherdps(ZEXT832(0),auVar19);
    auVar38 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar19);
  }
  auVar21 = vmaskmovps_avx(auVar19,auVar20);
  auVar29 = vmaskmovps_avx(auVar19,auVar29);
  auVar20 = vmaskmovps_avx(auVar19,auVar42);
  auVar42 = vcmpps_avx(auVar38,ZEXT832(0) << 0x20,4);
  auVar42 = auVar19 & auVar42;
  if ((((((((SUB321(auVar42 >> 0x1f,0) & 1) != 0 || (SUB321(auVar42 >> 0x3f,0) & 1) != 0) ||
          (SUB321(auVar42 >> 0x5f,0) & 1) != 0) || SUB321(auVar42 >> 0x7f,0) != '\0') ||
        (SUB321(auVar42 >> 0x9f,0) & 1) != 0) || SUB321(auVar42 >> 0xbf,0) != '\0') ||
      (SUB321(auVar42 >> 0xdf,0) & 1) != 0) || auVar42[0x1f] < '\0') {
    pauVar2 = (undefined1 (*) [32])(param_2 + lVar11 * 0xc);
    if ((char)iVar13 == -1) {
      auVar42 = pauVar2[1];
      auVar18 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar42);
      auVar4 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                            *pauVar2);
      auVar18 = vblendps_avx(auVar4,auVar18,0x88);
      auVar4 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004,
                            auVar42);
      auVar53 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,pauVar2[2]);
      auVar4 = vblendps_avx(auVar53,auVar4,0x13);
      auVar43._16_16_ = auVar4._0_16_;
      auVar43._0_16_ = auVar18._0_16_;
      auVar87 = vperm2f128_avx(auVar18,auVar4,0x31);
      auVar42 = vblendps_avx(auVar42,*pauVar2,0x24);
      auVar42 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar42);
      auVar18 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,pauVar2[2]);
      _local_2a0 = vblendps_avx(auVar42,auVar18,0xe0);
      auVar42 = *(undefined1 (*) [32])(param_3 + lVar11 * 0xc);
      auVar18 = *(undefined1 (*) [32])(param_3 + 0x20 + lVar11 * 0xc);
      auVar4 = *(undefined1 (*) [32])(param_3 + 0x40 + lVar11 * 0xc);
      auVar53 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar18);
      auVar52 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar42);
      auVar53 = vblendps_avx(auVar52,auVar53,0x88);
      auVar52 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar18);
      auVar17 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,auVar4);
      auVar52 = vblendps_avx(auVar17,auVar52,0x13);
      auVar57._16_16_ = auVar52._0_16_;
      auVar57._0_16_ = auVar53._0_16_;
      auVar53 = vperm2f128_avx(auVar53,auVar52,0x31);
      auVar42 = vblendps_avx(auVar18,auVar42,0x24);
      auVar42 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar42);
      auVar18 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,auVar4);
      auVar42 = vblendps_avx(auVar42,auVar18,0xe0);
    }
    else {
      auVar43 = vgatherdps(ZEXT832(0) << 0x20,auVar19);
      auVar87 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar19);
      _local_2a0 = vgatherdps(ZEXT832(0),auVar19);
      auVar57 = vgatherdps(ZEXT832(0),auVar19);
      auVar53 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar19);
      auVar42 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar19);
    }
    auVar18 = vmaskmovps_avx(auVar19,*(undefined1 (*) [32])(param_4 + (iVar7 << 2)));
    fVar107 = param_6 * auVar18._0_4_ + param_5;
    fVar66 = param_6 * auVar18._4_4_ + param_5;
    fVar67 = param_6 * auVar18._8_4_ + param_5;
    fVar68 = param_6 * auVar18._12_4_ + param_5;
    fVar69 = param_6 * auVar18._16_4_ + param_5;
    fVar70 = param_6 * auVar18._20_4_ + param_5;
    fVar71 = param_6 * auVar18._24_4_ + param_5;
    param_5 = param_6 * auVar18._28_4_ + param_5;
    auVar89._4_4_ = param_7;
    auVar89._0_4_ = param_7;
    auVar89._8_4_ = param_7;
    auVar89._12_4_ = param_7;
    auVar89._16_4_ = param_7;
    auVar89._20_4_ = param_7;
    auVar89._24_4_ = param_7;
    auVar89._28_4_ = param_7;
    fVar78 = param_7 + fVar107;
    fVar99 = param_7 + fVar66;
    fVar101 = param_7 + fVar67;
    fVar102 = param_7 + fVar68;
    fVar103 = param_7 + fVar69;
    fVar104 = param_7 + fVar70;
    fVar105 = param_7 + fVar71;
    fVar106 = param_7 + param_5;
    auVar74._0_4_ = -(auVar57._0_4_ * fVar78) + auVar43._0_4_;
    auVar74._4_4_ = -(auVar57._4_4_ * fVar99) + auVar43._4_4_;
    auVar74._8_4_ = -(auVar57._8_4_ * fVar101) + auVar43._8_4_;
    auVar74._12_4_ = -(auVar57._12_4_ * fVar102) + auVar43._12_4_;
    auVar74._16_4_ = -(auVar57._16_4_ * fVar103) + auVar43._16_4_;
    auVar74._20_4_ = -(auVar57._20_4_ * fVar104) + auVar43._20_4_;
    auVar74._24_4_ = -(auVar57._24_4_ * fVar105) + auVar43._24_4_;
    auVar74._28_4_ = -(auVar57._28_4_ * fVar106) + auVar43._28_4_;
    auVar39._0_4_ = -(auVar53._0_4_ * fVar78) + auVar87._0_4_;
    auVar39._4_4_ = -(auVar53._4_4_ * fVar99) + auVar87._4_4_;
    auVar39._8_4_ = -(auVar53._8_4_ * fVar101) + auVar87._8_4_;
    auVar39._12_4_ = -(auVar53._12_4_ * fVar102) + auVar87._12_4_;
    auVar39._16_4_ = -(auVar53._16_4_ * fVar103) + auVar87._16_4_;
    auVar39._20_4_ = -(auVar53._20_4_ * fVar104) + auVar87._20_4_;
    auVar39._24_4_ = -(auVar53._24_4_ * fVar105) + auVar87._24_4_;
    auVar39._28_4_ = -(auVar53._28_4_ * fVar106) + auVar87._28_4_;
    auVar79._0_4_ = -(auVar42._0_4_ * fVar78) + (float)local_2a0._0_4_;
    auVar79._4_4_ = -(auVar42._4_4_ * fVar99) + (float)local_2a0._4_4_;
    auVar79._8_4_ = -(auVar42._8_4_ * fVar101) + fStack_298;
    auVar79._12_4_ = -(auVar42._12_4_ * fVar102) + fStack_294;
    auVar79._16_4_ = -(auVar42._16_4_ * fVar103) + fStack_290;
    auVar79._20_4_ = -(auVar42._20_4_ * fVar104) + fStack_28c;
    auVar79._24_4_ = -(auVar42._24_4_ * fVar105) + fStack_288;
    auVar79._28_4_ = -(auVar42._28_4_ * fVar106) + fStack_284;
    auVar21 = vsubps_avx(auVar21,auVar74);
    auVar29 = vsubps_avx(auVar29,auVar39);
    auVar20 = vsubps_avx(auVar20,auVar79);
    fVar78 = auVar29._0_4_;
    fVar99 = auVar29._4_4_;
    fVar101 = auVar29._8_4_;
    fVar102 = auVar29._12_4_;
    fVar103 = auVar29._16_4_;
    fVar104 = auVar29._20_4_;
    fVar105 = auVar29._24_4_;
    fVar106 = auVar29._28_4_;
    fVar64 = auVar21._0_4_;
    fVar65 = auVar21._4_4_;
    fVar77 = auVar21._8_4_;
    fVar80 = auVar21._12_4_;
    fVar81 = auVar21._16_4_;
    fVar82 = auVar21._20_4_;
    fVar83 = auVar21._24_4_;
    fVar84 = auVar21._28_4_;
    fVar26 = auVar20._0_4_;
    auVar21._0_4_ = fVar26 * fVar26 + fVar64 * fVar64 + fVar78 * fVar78;
    fVar27 = auVar20._4_4_;
    auVar21._4_4_ = fVar27 * fVar27 + fVar65 * fVar65 + fVar99 * fVar99;
    fVar28 = auVar20._8_4_;
    auVar21._8_4_ = fVar28 * fVar28 + fVar77 * fVar77 + fVar101 * fVar101;
    fVar30 = auVar20._12_4_;
    auVar21._12_4_ = fVar30 * fVar30 + fVar80 * fVar80 + fVar102 * fVar102;
    fVar31 = auVar20._16_4_;
    auVar21._16_4_ = fVar31 * fVar31 + fVar81 * fVar81 + fVar103 * fVar103;
    fVar32 = auVar20._20_4_;
    auVar21._20_4_ = fVar32 * fVar32 + fVar82 * fVar82 + fVar104 * fVar104;
    fVar33 = auVar20._24_4_;
    auVar21._24_4_ = fVar33 * fVar33 + fVar83 * fVar83 + fVar105 * fVar105;
    fVar34 = auVar20._28_4_;
    auVar21._28_4_ = fVar34 * fVar34 + fVar84 * fVar84 + fVar106 * fVar106;
    auVar29 = vsqrtps_avx(auVar21);
    auVar29 = vdivps_avx(auVar89,auVar29);
    fVar35 = auVar29._0_4_;
    fVar36 = auVar29._4_4_;
    fVar56 = auVar29._8_4_;
    fVar59 = auVar29._12_4_;
    fVar60 = auVar29._16_4_;
    fVar61 = auVar29._20_4_;
    fVar62 = auVar29._24_4_;
    fVar63 = auVar29._28_4_;
    auVar58._0_4_ = -(fVar107 * auVar57._0_4_) + auVar43._0_4_;
    auVar58._4_4_ = -(fVar66 * auVar57._4_4_) + auVar43._4_4_;
    auVar58._8_4_ = -(fVar67 * auVar57._8_4_) + auVar43._8_4_;
    auVar58._12_4_ = -(fVar68 * auVar57._12_4_) + auVar43._12_4_;
    auVar58._16_4_ = -(fVar69 * auVar57._16_4_) + auVar43._16_4_;
    auVar58._20_4_ = -(fVar70 * auVar57._20_4_) + auVar43._20_4_;
    auVar58._24_4_ = -(fVar71 * auVar57._24_4_) + auVar43._24_4_;
    auVar58._28_4_ = -(param_5 * auVar57._28_4_) + auVar43._28_4_;
    param_7 = param_7 * param_7;
    auVar44._4_4_ = param_7;
    auVar44._0_4_ = param_7;
    auVar44._8_4_ = param_7;
    auVar44._12_4_ = param_7;
    auVar44._16_4_ = param_7;
    auVar44._20_4_ = param_7;
    auVar44._24_4_ = param_7;
    auVar44._28_4_ = param_7;
    auVar29 = vcmpps_avx(auVar21,auVar44,1);
    auVar45._4_4_ = __real_322bcc77;
    auVar45._0_4_ = __real_322bcc77;
    auVar45._8_4_ = __real_322bcc77;
    auVar45._12_4_ = __real_322bcc77;
    auVar45._16_4_ = __real_322bcc77;
    auVar45._20_4_ = __real_322bcc77;
    auVar45._24_4_ = __real_322bcc77;
    auVar45._28_4_ = __real_322bcc77;
    auVar21 = vcmpps_avx(auVar21,auVar45,1);
    uVar88 = auVar29._0_4_;
    auVar46._0_4_ = uVar88 & (uint)(fVar35 * fVar64 + auVar74._0_4_);
    uVar90 = auVar29._4_4_;
    auVar46._4_4_ = uVar90 & (uint)(fVar36 * fVar65 + auVar74._4_4_);
    uVar91 = auVar29._8_4_;
    auVar46._8_4_ = uVar91 & (uint)(fVar56 * fVar77 + auVar74._8_4_);
    uVar92 = auVar29._12_4_;
    auVar46._12_4_ = uVar92 & (uint)(fVar59 * fVar80 + auVar74._12_4_);
    uVar93 = auVar29._16_4_;
    auVar46._16_4_ = uVar93 & (uint)(fVar60 * fVar81 + auVar74._16_4_);
    uVar94 = auVar29._20_4_;
    auVar46._20_4_ = uVar94 & (uint)(fVar61 * fVar82 + auVar74._20_4_);
    uVar95 = auVar29._24_4_;
    auVar46._24_4_ = uVar95 & (uint)(fVar62 * fVar83 + auVar74._24_4_);
    uVar96 = auVar29._28_4_;
    auVar46._28_4_ = uVar96 & (uint)(fVar63 * fVar84 + auVar74._28_4_);
    auVar29 = vblendvps_avx(auVar46,auVar58,auVar21);
    auVar20 = vcmpps_avx(auVar38,ZEXT432(0) << 0x20,4);
    auVar18 = vcmpps_avx(auVar29,ZEXT432(0) << 0x20,4);
    auVar22._0_4_ = auVar18._0_4_ & auVar20._0_4_ & auVar19._0_4_;
    auVar22._4_4_ = auVar18._4_4_ & auVar20._4_4_ & auVar19._4_4_;
    auVar22._8_4_ = auVar18._8_4_ & auVar20._8_4_ & auVar19._8_4_;
    auVar22._12_4_ = auVar18._12_4_ & auVar20._12_4_ & auVar19._12_4_;
    auVar22._16_4_ = auVar18._16_4_ & auVar20._16_4_ & auVar19._16_4_;
    auVar22._20_4_ = auVar18._20_4_ & auVar20._20_4_ & auVar19._20_4_;
    auVar22._24_4_ = auVar18._24_4_ & auVar20._24_4_ & auVar19._24_4_;
    auVar22._28_4_ = auVar18._28_4_ & auVar20._28_4_ & auVar19._28_4_;
    uVar8 = vmovmskps_avx(auVar22);
    if (uVar8 != 0) {
      auVar54._0_4_ = -(fVar107 * auVar53._0_4_) + auVar87._0_4_;
      auVar54._4_4_ = -(fVar66 * auVar53._4_4_) + auVar87._4_4_;
      auVar54._8_4_ = -(fVar67 * auVar53._8_4_) + auVar87._8_4_;
      auVar54._12_4_ = -(fVar68 * auVar53._12_4_) + auVar87._12_4_;
      auVar54._16_4_ = -(fVar69 * auVar53._16_4_) + auVar87._16_4_;
      auVar54._20_4_ = -(fVar70 * auVar53._20_4_) + auVar87._20_4_;
      auVar54._24_4_ = -(fVar71 * auVar53._24_4_) + auVar87._24_4_;
      auVar54._28_4_ = -(param_5 * auVar53._28_4_) + auVar87._28_4_;
      auVar49._0_4_ = -(fVar107 * auVar42._0_4_) + (float)local_2a0._0_4_;
      auVar49._4_4_ = -(fVar66 * auVar42._4_4_) + (float)local_2a0._4_4_;
      auVar49._8_4_ = -(fVar67 * auVar42._8_4_) + fStack_298;
      auVar49._12_4_ = -(fVar68 * auVar42._12_4_) + fStack_294;
      auVar49._16_4_ = -(fVar69 * auVar42._16_4_) + fStack_290;
      auVar49._20_4_ = -(fVar70 * auVar42._20_4_) + fStack_28c;
      auVar49._24_4_ = -(fVar71 * auVar42._24_4_) + fStack_288;
      auVar49._28_4_ = -(param_5 * auVar42._28_4_) + fStack_284;
      auVar87._0_4_ = uVar88 & (uint)(fVar35 * fVar78 + auVar39._0_4_);
      auVar87._4_4_ = uVar90 & (uint)(fVar36 * fVar99 + auVar39._4_4_);
      auVar87._8_4_ = uVar91 & (uint)(fVar56 * fVar101 + auVar39._8_4_);
      auVar87._12_4_ = uVar92 & (uint)(fVar59 * fVar102 + auVar39._12_4_);
      auVar87._16_4_ = uVar93 & (uint)(fVar60 * fVar103 + auVar39._16_4_);
      auVar87._20_4_ = uVar94 & (uint)(fVar61 * fVar104 + auVar39._20_4_);
      auVar87._24_4_ = uVar95 & (uint)(fVar62 * fVar105 + auVar39._24_4_);
      auVar87._28_4_ = uVar96 & (uint)(fVar63 * fVar106 + auVar39._28_4_);
      auVar19 = vblendvps_avx(auVar87,auVar54,auVar21);
      auVar23._0_4_ = uVar88 & (uint)(fVar35 * fVar26 + auVar79._0_4_);
      auVar23._4_4_ = uVar90 & (uint)(fVar36 * fVar27 + auVar79._4_4_);
      auVar23._8_4_ = uVar91 & (uint)(fVar56 * fVar28 + auVar79._8_4_);
      auVar23._12_4_ = uVar92 & (uint)(fVar59 * fVar30 + auVar79._12_4_);
      auVar23._16_4_ = uVar93 & (uint)(fVar60 * fVar31 + auVar79._16_4_);
      auVar23._20_4_ = uVar94 & (uint)(fVar61 * fVar32 + auVar79._20_4_);
      auVar23._24_4_ = uVar95 & (uint)(fVar62 * fVar33 + auVar79._24_4_);
      auVar23._28_4_ = uVar96 & (uint)(fVar63 * fVar34 + auVar79._28_4_);
      auVar21 = vblendvps_avx(auVar23,auVar49,auVar21);
      cVar6 = (char)uVar8;
      if (cVar6 == -1) {
        auVar20 = vunpcklps_avx(auVar29,auVar19);
        auVar18 = vunpcklps_avx(auVar21,auVar38);
        auVar42 = vunpcklpd_avx(auVar20,auVar18);
        auVar20 = vunpckhpd_avx(auVar20,auVar18);
        auVar19 = vunpckhps_avx(auVar29,auVar19);
        auVar29 = vunpckhps_avx(auVar21,auVar38);
        auVar38 = vunpcklpd_avx(auVar19,auVar29);
        auVar47._16_16_ = auVar20._0_16_;
        auVar47._0_16_ = auVar42._0_16_;
        *pauVar10 = auVar47;
        auVar19 = vunpckhpd_avx(auVar19,auVar29);
        auVar25._16_16_ = auVar19._0_16_;
        auVar25._0_16_ = auVar38._0_16_;
        pauVar10[1] = auVar25;
        auVar29 = vperm2f128_avx(auVar42,auVar20,0x31);
        pauVar10[2] = auVar29;
        auVar19 = vperm2f128_avx(auVar38,auVar19,0x31);
        pauVar10[3] = auVar19;
      }
      else {
        auVar72 = auVar38._0_16_;
        auVar75 = auVar38._16_16_;
        auVar50 = auVar29._0_16_;
        auVar55 = auVar29._16_16_;
        auVar37 = auVar19._0_16_;
        auVar40 = auVar19._16_16_;
        auVar16 = auVar21._0_16_;
        auVar24 = auVar21._16_16_;
        if ((uVar8 & 1) != 0) {
          *(int *)*pauVar10 = auVar29._0_4_;
        }
        if ((uVar8 & 2) != 0) {
          uVar3 = vextractps_avx(auVar50,1);
          *(undefined4 *)(*pauVar10 + 0x10) = uVar3;
        }
        if ((uVar8 & 4) != 0) {
          uVar3 = vextractps_avx(auVar50,2);
          *(undefined4 *)pauVar10[1] = uVar3;
        }
        if ((uVar8 & 8) != 0) {
          uVar3 = vextractps_avx(auVar50,3);
          *(undefined4 *)(pauVar10[1] + 0x10) = uVar3;
        }
        if ((uVar8 & 0x10) != 0) {
          *(int *)pauVar10[2] = auVar29._16_4_;
        }
        if ((uVar8 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar55,1);
          *(undefined4 *)(pauVar10[2] + 0x10) = uVar3;
        }
        if ((uVar8 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar55,2);
          *(undefined4 *)pauVar10[3] = uVar3;
        }
        if (cVar6 < '\0') {
          uVar3 = vextractps_avx(auVar55,3);
          *(undefined4 *)(pauVar10[3] + 0x10) = uVar3;
        }
        if ((uVar8 & 1) != 0) {
          *(int *)(*pauVar10 + 4) = auVar19._0_4_;
        }
        if ((uVar8 & 2) != 0) {
          uVar3 = vextractps_avx(auVar37,1);
          *(undefined4 *)(*pauVar10 + 0x14) = uVar3;
        }
        if ((uVar8 & 4) != 0) {
          uVar3 = vextractps_avx(auVar37,2);
          *(undefined4 *)(pauVar10[1] + 4) = uVar3;
        }
        if ((uVar8 & 8) != 0) {
          uVar3 = vextractps_avx(auVar37,3);
          *(undefined4 *)(pauVar10[1] + 0x14) = uVar3;
        }
        if ((uVar8 & 0x10) != 0) {
          *(int *)(pauVar10[2] + 4) = auVar19._16_4_;
        }
        if ((uVar8 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar40,1);
          *(undefined4 *)(pauVar10[2] + 0x14) = uVar3;
        }
        if ((uVar8 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar40,2);
          *(undefined4 *)(pauVar10[3] + 4) = uVar3;
        }
        if (cVar6 < '\0') {
          uVar3 = vextractps_avx(auVar40,3);
          *(undefined4 *)(pauVar10[3] + 0x14) = uVar3;
        }
        if ((uVar8 & 1) != 0) {
          *(int *)(*pauVar10 + 8) = auVar21._0_4_;
        }
        if ((uVar8 & 2) != 0) {
          uVar3 = vextractps_avx(auVar16,1);
          *(undefined4 *)(*pauVar10 + 0x18) = uVar3;
        }
        if ((uVar8 & 4) != 0) {
          uVar3 = vextractps_avx(auVar16,2);
          *(undefined4 *)(pauVar10[1] + 8) = uVar3;
        }
        if ((uVar8 & 8) != 0) {
          uVar3 = vextractps_avx(auVar16,3);
          *(undefined4 *)(pauVar10[1] + 0x18) = uVar3;
        }
        if ((uVar8 & 0x10) != 0) {
          *(int *)(pauVar10[2] + 8) = auVar21._16_4_;
        }
        if ((uVar8 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar24,1);
          *(undefined4 *)(pauVar10[2] + 0x18) = uVar3;
        }
        if ((uVar8 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar24,2);
          *(undefined4 *)(pauVar10[3] + 8) = uVar3;
        }
        if (cVar6 < '\0') {
          uVar3 = vextractps_avx(auVar24,3);
          *(undefined4 *)(pauVar10[3] + 0x18) = uVar3;
        }
        if ((uVar8 & 1) != 0) {
          *(int *)(*pauVar10 + 0xc) = auVar38._0_4_;
        }
        if ((uVar8 & 2) != 0) {
          uVar3 = vextractps_avx(auVar72,1);
          *(undefined4 *)(*pauVar10 + 0x1c) = uVar3;
        }
        if ((uVar8 & 4) != 0) {
          uVar3 = vextractps_avx(auVar72,2);
          *(undefined4 *)(pauVar10[1] + 0xc) = uVar3;
        }
        if ((uVar8 & 8) != 0) {
          uVar3 = vextractps_avx(auVar72,3);
          *(undefined4 *)(pauVar10[1] + 0x1c) = uVar3;
        }
        if ((uVar8 & 0x10) != 0) {
          *(int *)(pauVar10[2] + 0xc) = auVar38._16_4_;
        }
        if ((uVar8 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar75,1);
          *(undefined4 *)(pauVar10[2] + 0x1c) = uVar3;
        }
        if ((uVar8 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar75,2);
          *(undefined4 *)(pauVar10[3] + 0xc) = uVar3;
        }
        if (cVar6 < '\0') {
          uVar3 = vextractps_avx(auVar75,3);
          *(undefined4 *)(pauVar10[3] + 0x1c) = uVar3;
        }
      }
    }
  }
  return;
}

// ApplySphericalBackstopConstraintsWithRadiusMap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_CunfCunfCunfCuniCuni_avx2 @ 1403229d0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplySphericalBackstopConstraintsWithRadiusMap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_CunfCunfCunfCuniCuni_avx2
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,float param_5,
               float param_6,float param_7,int param_8,uint param_9)

{
  float *pfVar1;
  undefined1 (*pauVar2) [32];
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 (*pauVar8) [32];
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [16];
  undefined1 auVar24 [16];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar25 [16];
  undefined1 auVar27 [16];
  undefined1 auVar26 [32];
  float fVar28;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar40 [16];
  undefined1 auVar41 [32];
  undefined1 auVar48 [16];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [16];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [16];
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  uint uVar69;
  uint uVar71;
  uint uVar72;
  uint uVar73;
  uint uVar74;
  uint uVar75;
  uint uVar76;
  uint uVar77;
  undefined1 auVar70 [32];
  undefined1 auVar78 [32];
  float fVar79;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  undefined1 auVar97 [32];
  undefined1 local_2a0 [8];
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  
  uVar6 = param_9 + 7;
  if (-1 < (int)param_9) {
    uVar6 = param_9;
  }
  if ((int)(uVar6 & 0xfffffff8) < 1) {
    uVar7 = 0;
    if ((int)param_9 < 1) {
      return;
    }
  }
  else {
    lVar10 = (longlong)param_8 * 0x10 + param_1;
    lVar9 = (longlong)param_8 * 0xc + 0x40;
    uVar12 = 0;
    uVar7 = 0;
    do {
      auVar16 = *(undefined1 (*) [32])(lVar10 + uVar12 * 4);
      auVar26 = *(undefined1 (*) [32])(lVar10 + 0x20 + uVar12 * 4);
      auVar31 = *(undefined1 (*) [32])(lVar10 + 0x40 + uVar12 * 4);
      auVar22 = *(undefined1 (*) [32])(lVar10 + 0x60 + uVar12 * 4);
      auVar52 = vperm2f128_avx(auVar16,auVar31,0x20);
      auVar30 = vperm2f128_avx(auVar16,auVar31,0x31);
      auVar78 = vperm2f128_avx(auVar26,auVar22,0x20);
      auVar56 = vperm2f128_avx(auVar26,auVar22,0x31);
      auVar15 = vunpckhps_avx(auVar52,auVar30);
      auVar29 = vunpckhps_avx(auVar78,auVar56);
      auVar42 = vunpckhpd_avx(auVar15,auVar29);
      auVar21 = vcmpps_avx(auVar42,
                           ___ymm_0000000000000000000000000000000000000000000000000000000000000000,4
                          );
      if ((((((((SUB321(auVar21 >> 0x1f,0) & 1) != 0 || (SUB321(auVar21 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar21 >> 0x5f,0) & 1) != 0) || SUB321(auVar21 >> 0x7f,0) != '\0') ||
            (SUB321(auVar21 >> 0x9f,0) & 1) != 0) || SUB321(auVar21 >> 0xbf,0) != '\0') ||
          (SUB321(auVar21 >> 0xdf,0) & 1) != 0) || auVar21[0x1f] < '\0') {
        auVar51 = vunpcklpd_avx(auVar15,auVar29);
        auVar15 = vunpcklps_avx(auVar52,auVar30);
        auVar29 = vunpcklps_avx(auVar78,auVar56);
        auVar41 = vunpckhpd_avx(auVar15,auVar29);
        auVar43 = vunpcklpd_avx(auVar15,auVar29);
        auVar15 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar9);
        auVar29 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar9);
        auVar52 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar29);
        auVar30 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,auVar15);
        auVar52 = vblendps_avx(auVar30,auVar52,0x88);
        auVar30 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar29);
        auVar78 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,*(undefined1 (*) [32])(param_2 + lVar9));
        auVar30 = vblendps_avx(auVar78,auVar30,0x13);
        auVar54 = vperm2f128_avx(auVar52,auVar30,0x31);
        auVar15 = vblendps_avx(auVar29,auVar15,0x24);
        auVar15 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar15);
        auVar29 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,*(undefined1 (*) [32])(param_2 + lVar9));
        auVar78 = vblendps_avx(auVar15,auVar29,0xe0);
        auVar15 = *(undefined1 (*) [32])(param_3 + -0x40 + lVar9);
        auVar29 = *(undefined1 (*) [32])(param_3 + -0x20 + lVar9);
        auVar56 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar29);
        auVar58 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,auVar15);
        auVar56 = vblendps_avx(auVar58,auVar56,0x88);
        auVar58 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar29);
        auVar17 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,*(undefined1 (*) [32])(param_3 + lVar9));
        auVar58 = vblendps_avx(auVar17,auVar58,0x13);
        auVar17 = vperm2f128_avx(auVar56,auVar58,0x31);
        auVar15 = vblendps_avx(auVar29,auVar15,0x24);
        auVar15 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar15);
        auVar29 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,*(undefined1 (*) [32])(param_3 + lVar9));
        auVar15 = vblendps_avx(auVar15,auVar29,0xe0);
        pfVar1 = (float *)(param_4 + (uVar12 & 0xffffffff));
        auVar97._0_4_ = param_7 * *pfVar1 + param_6;
        auVar97._4_4_ = param_7 * pfVar1[1] + param_6;
        auVar97._8_4_ = param_7 * pfVar1[2] + param_6;
        auVar97._12_4_ = param_7 * pfVar1[3] + param_6;
        auVar97._16_4_ = param_7 * pfVar1[4] + param_6;
        auVar97._20_4_ = param_7 * pfVar1[5] + param_6;
        auVar97._24_4_ = param_7 * pfVar1[6] + param_6;
        auVar97._28_4_ = param_7 * pfVar1[7] + param_6;
        fVar79 = auVar97._0_4_ + param_5;
        fVar82 = auVar97._4_4_ + param_5;
        fVar83 = auVar97._8_4_ + param_5;
        fVar84 = auVar97._12_4_ + param_5;
        fVar85 = auVar97._16_4_ + param_5;
        fVar86 = auVar97._20_4_ + param_5;
        fVar87 = auVar97._24_4_ + param_5;
        fVar88 = auVar97._28_4_ + param_5;
        auVar49._0_4_ = -(auVar56._0_4_ * fVar79) + auVar52._0_4_;
        auVar49._4_4_ = -(auVar56._4_4_ * fVar82) + auVar52._4_4_;
        auVar49._8_4_ = -(auVar56._8_4_ * fVar83) + auVar52._8_4_;
        auVar49._12_4_ = -(auVar56._12_4_ * fVar84) + auVar52._12_4_;
        auVar49._16_4_ = -(auVar58._0_4_ * fVar85) + auVar30._0_4_;
        auVar49._20_4_ = -(auVar58._4_4_ * fVar86) + auVar30._4_4_;
        auVar49._24_4_ = -(auVar58._8_4_ * fVar87) + auVar30._8_4_;
        auVar49._28_4_ = -(auVar58._12_4_ * fVar88) + auVar30._12_4_;
        auVar14._0_4_ = -(auVar17._0_4_ * fVar79) + auVar54._0_4_;
        auVar14._4_4_ = -(auVar17._4_4_ * fVar82) + auVar54._4_4_;
        auVar14._8_4_ = -(auVar17._8_4_ * fVar83) + auVar54._8_4_;
        auVar14._12_4_ = -(auVar17._12_4_ * fVar84) + auVar54._12_4_;
        auVar14._16_4_ = -(auVar17._16_4_ * fVar85) + auVar54._16_4_;
        auVar14._20_4_ = -(auVar17._20_4_ * fVar86) + auVar54._20_4_;
        auVar14._24_4_ = -(auVar17._24_4_ * fVar87) + auVar54._24_4_;
        auVar14._28_4_ = -(auVar17._28_4_ * fVar88) + auVar54._28_4_;
        auVar80._0_4_ = -(auVar15._0_4_ * fVar79) + auVar78._0_4_;
        auVar80._4_4_ = -(auVar15._4_4_ * fVar82) + auVar78._4_4_;
        auVar80._8_4_ = -(auVar15._8_4_ * fVar83) + auVar78._8_4_;
        auVar80._12_4_ = -(auVar15._12_4_ * fVar84) + auVar78._12_4_;
        auVar80._16_4_ = -(auVar15._16_4_ * fVar85) + auVar78._16_4_;
        auVar80._20_4_ = -(auVar15._20_4_ * fVar86) + auVar78._20_4_;
        auVar80._24_4_ = -(auVar15._24_4_ * fVar87) + auVar78._24_4_;
        auVar80._28_4_ = -(auVar15._28_4_ * fVar88) + auVar78._28_4_;
        auVar29 = vsubps_avx(auVar43,auVar49);
        auVar41 = vsubps_avx(auVar41,auVar14);
        auVar51 = vsubps_avx(auVar51,auVar80);
        fVar79 = auVar41._0_4_;
        fVar82 = auVar41._4_4_;
        fVar83 = auVar41._8_4_;
        fVar84 = auVar41._12_4_;
        fVar85 = auVar41._16_4_;
        fVar86 = auVar41._20_4_;
        fVar87 = auVar41._24_4_;
        fVar88 = auVar41._28_4_;
        fVar28 = auVar29._0_4_;
        fVar33 = auVar29._4_4_;
        fVar34 = auVar29._8_4_;
        fVar35 = auVar29._12_4_;
        fVar36 = auVar29._16_4_;
        fVar37 = auVar29._20_4_;
        fVar38 = auVar29._24_4_;
        fVar39 = auVar29._28_4_;
        fVar61 = auVar51._0_4_;
        auVar41._0_4_ = fVar61 * fVar61 + fVar28 * fVar28 + fVar79 * fVar79;
        fVar62 = auVar51._4_4_;
        auVar41._4_4_ = fVar62 * fVar62 + fVar33 * fVar33 + fVar82 * fVar82;
        fVar63 = auVar51._8_4_;
        auVar41._8_4_ = fVar63 * fVar63 + fVar34 * fVar34 + fVar83 * fVar83;
        fVar64 = auVar51._12_4_;
        auVar41._12_4_ = fVar64 * fVar64 + fVar35 * fVar35 + fVar84 * fVar84;
        fVar65 = auVar51._16_4_;
        auVar41._16_4_ = fVar65 * fVar65 + fVar36 * fVar36 + fVar85 * fVar85;
        fVar66 = auVar51._20_4_;
        auVar41._20_4_ = fVar66 * fVar66 + fVar37 * fVar37 + fVar86 * fVar86;
        fVar67 = auVar51._24_4_;
        auVar41._24_4_ = fVar67 * fVar67 + fVar38 * fVar38 + fVar87 * fVar87;
        fVar68 = auVar51._28_4_;
        auVar41._28_4_ = fVar68 * fVar68 + fVar39 * fVar39 + fVar88 * fVar88;
        auVar29 = vsqrtps_avx(auVar41);
        auVar29 = vdivps_avx(auVar97,auVar29);
        fVar89 = auVar29._0_4_;
        fVar90 = auVar29._4_4_;
        fVar91 = auVar29._8_4_;
        fVar92 = auVar29._12_4_;
        fVar93 = auVar29._16_4_;
        fVar94 = auVar29._20_4_;
        fVar95 = auVar29._24_4_;
        fVar96 = auVar29._28_4_;
        auVar51._0_4_ = -(param_5 * auVar56._0_4_) + auVar52._0_4_;
        auVar51._4_4_ = -(param_5 * auVar56._4_4_) + auVar52._4_4_;
        auVar51._8_4_ = -(param_5 * auVar56._8_4_) + auVar52._8_4_;
        auVar51._12_4_ = -(param_5 * auVar56._12_4_) + auVar52._12_4_;
        auVar51._16_4_ = -(param_5 * auVar58._0_4_) + auVar30._0_4_;
        auVar51._20_4_ = -(param_5 * auVar58._4_4_) + auVar30._4_4_;
        auVar51._24_4_ = -(param_5 * auVar58._8_4_) + auVar30._8_4_;
        auVar51._28_4_ = -(param_5 * auVar58._12_4_) + auVar30._12_4_;
        auVar29._0_4_ = auVar97._0_4_ * auVar97._0_4_;
        auVar29._4_4_ = auVar97._4_4_ * auVar97._4_4_;
        auVar29._8_4_ = auVar97._8_4_ * auVar97._8_4_;
        auVar29._12_4_ = auVar97._12_4_ * auVar97._12_4_;
        auVar29._16_4_ = auVar97._16_4_ * auVar97._16_4_;
        auVar29._20_4_ = auVar97._20_4_ * auVar97._20_4_;
        auVar29._24_4_ = auVar97._24_4_ * auVar97._24_4_;
        auVar29._28_4_ = auVar97._28_4_ * auVar97._28_4_;
        auVar29 = vcmpps_avx(auVar41,auVar29,1);
        auVar52._4_4_ = __real_322bcc77;
        auVar52._0_4_ = __real_322bcc77;
        auVar52._8_4_ = __real_322bcc77;
        auVar52._12_4_ = __real_322bcc77;
        auVar52._16_4_ = __real_322bcc77;
        auVar52._20_4_ = __real_322bcc77;
        auVar52._24_4_ = __real_322bcc77;
        auVar52._28_4_ = __real_322bcc77;
        auVar52 = vcmpps_avx(auVar41,auVar52,1);
        uVar69 = auVar29._0_4_;
        auVar30._0_4_ = uVar69 & (uint)(fVar89 * fVar28 + auVar49._0_4_);
        uVar71 = auVar29._4_4_;
        auVar30._4_4_ = uVar71 & (uint)(fVar90 * fVar33 + auVar49._4_4_);
        uVar72 = auVar29._8_4_;
        auVar30._8_4_ = uVar72 & (uint)(fVar91 * fVar34 + auVar49._8_4_);
        uVar73 = auVar29._12_4_;
        auVar30._12_4_ = uVar73 & (uint)(fVar92 * fVar35 + auVar49._12_4_);
        uVar74 = auVar29._16_4_;
        auVar30._16_4_ = uVar74 & (uint)(fVar93 * fVar36 + auVar49._16_4_);
        uVar75 = auVar29._20_4_;
        auVar30._20_4_ = uVar75 & (uint)(fVar94 * fVar37 + auVar49._20_4_);
        uVar76 = auVar29._24_4_;
        auVar30._24_4_ = uVar76 & (uint)(fVar95 * fVar38 + auVar49._24_4_);
        uVar77 = auVar29._28_4_;
        auVar30._28_4_ = uVar77 & (uint)(fVar96 * fVar39 + auVar49._28_4_);
        auVar29 = vblendvps_avx(auVar30,auVar51,auVar52);
        auVar30 = vcmpps_avx(auVar29,
                             ___ymm_0000000000000000000000000000000000000000000000000000000000000000
                             ,4);
        local_2a0._0_4_ = auVar21._0_4_;
        local_2a0._4_4_ = auVar21._4_4_;
        fStack_298 = auVar21._8_4_;
        fStack_294 = auVar21._12_4_;
        fStack_290 = auVar21._16_4_;
        fStack_28c = auVar21._20_4_;
        fStack_288 = auVar21._24_4_;
        fStack_284 = auVar21._28_4_;
        auVar21._0_4_ = auVar30._0_4_ & local_2a0._0_4_;
        auVar21._4_4_ = auVar30._4_4_ & local_2a0._4_4_;
        auVar21._8_4_ = auVar30._8_4_ & (uint)fStack_298;
        auVar21._12_4_ = auVar30._12_4_ & (uint)fStack_294;
        auVar21._16_4_ = auVar30._16_4_ & (uint)fStack_290;
        auVar21._20_4_ = auVar30._20_4_ & (uint)fStack_28c;
        auVar21._24_4_ = auVar30._24_4_ & (uint)fStack_288;
        auVar21._28_4_ = auVar30._28_4_ & (uint)fStack_284;
        uVar13 = vmovmskps_avx(auVar21);
        if (uVar13 != 0) {
          auVar56._0_4_ = -(param_5 * auVar17._0_4_) + auVar54._0_4_;
          auVar56._4_4_ = -(param_5 * auVar17._4_4_) + auVar54._4_4_;
          auVar56._8_4_ = -(param_5 * auVar17._8_4_) + auVar54._8_4_;
          auVar56._12_4_ = -(param_5 * auVar17._12_4_) + auVar54._12_4_;
          auVar56._16_4_ = -(param_5 * auVar17._16_4_) + auVar54._16_4_;
          auVar56._20_4_ = -(param_5 * auVar17._20_4_) + auVar54._20_4_;
          auVar56._24_4_ = -(param_5 * auVar17._24_4_) + auVar54._24_4_;
          auVar56._28_4_ = -(param_5 * auVar17._28_4_) + auVar54._28_4_;
          auVar58._0_4_ = -(param_5 * auVar15._0_4_) + auVar78._0_4_;
          auVar58._4_4_ = -(param_5 * auVar15._4_4_) + auVar78._4_4_;
          auVar58._8_4_ = -(param_5 * auVar15._8_4_) + auVar78._8_4_;
          auVar58._12_4_ = -(param_5 * auVar15._12_4_) + auVar78._12_4_;
          auVar58._16_4_ = -(param_5 * auVar15._16_4_) + auVar78._16_4_;
          auVar58._20_4_ = -(param_5 * auVar15._20_4_) + auVar78._20_4_;
          auVar58._24_4_ = -(param_5 * auVar15._24_4_) + auVar78._24_4_;
          auVar58._28_4_ = -(param_5 * auVar15._28_4_) + auVar78._28_4_;
          auVar15._0_4_ = uVar69 & (uint)(fVar89 * fVar79 + auVar14._0_4_);
          auVar15._4_4_ = uVar71 & (uint)(fVar90 * fVar82 + auVar14._4_4_);
          auVar15._8_4_ = uVar72 & (uint)(fVar91 * fVar83 + auVar14._8_4_);
          auVar15._12_4_ = uVar73 & (uint)(fVar92 * fVar84 + auVar14._12_4_);
          auVar15._16_4_ = uVar74 & (uint)(fVar93 * fVar85 + auVar14._16_4_);
          auVar15._20_4_ = uVar75 & (uint)(fVar94 * fVar86 + auVar14._20_4_);
          auVar15._24_4_ = uVar76 & (uint)(fVar95 * fVar87 + auVar14._24_4_);
          auVar15._28_4_ = uVar77 & (uint)(fVar96 * fVar88 + auVar14._28_4_);
          auVar21 = vblendvps_avx(auVar15,auVar56,auVar52);
          auVar78._0_4_ = uVar69 & (uint)(fVar89 * fVar61 + auVar80._0_4_);
          auVar78._4_4_ = uVar71 & (uint)(fVar90 * fVar62 + auVar80._4_4_);
          auVar78._8_4_ = uVar72 & (uint)(fVar91 * fVar63 + auVar80._8_4_);
          auVar78._12_4_ = uVar73 & (uint)(fVar92 * fVar64 + auVar80._12_4_);
          auVar78._16_4_ = uVar74 & (uint)(fVar93 * fVar65 + auVar80._16_4_);
          auVar78._20_4_ = uVar75 & (uint)(fVar94 * fVar66 + auVar80._20_4_);
          auVar78._24_4_ = uVar76 & (uint)(fVar95 * fVar67 + auVar80._24_4_);
          auVar78._28_4_ = uVar77 & (uint)(fVar96 * fVar68 + auVar80._28_4_);
          auVar15 = vblendvps_avx(auVar78,auVar58,auVar52);
          cVar4 = (char)uVar13;
          if (cVar4 == -1) {
            auVar16 = vunpcklps_avx(auVar29,auVar21);
            auVar26 = vunpcklps_avx(auVar15,auVar42);
            auVar22 = vunpcklpd_avx(auVar16,auVar26);
            auVar16 = vunpckhpd_avx(auVar16,auVar26);
            auVar26 = vunpckhps_avx(auVar29,auVar21);
            auVar31 = vunpckhps_avx(auVar15,auVar42);
            auVar21 = vunpcklpd_avx(auVar26,auVar31);
            auVar42._16_16_ = auVar16._0_16_;
            auVar42._0_16_ = auVar22._0_16_;
            *(undefined1 (*) [32])(lVar10 + uVar12 * 4) = auVar42;
            auVar26 = vunpckhpd_avx(auVar26,auVar31);
            auVar31._16_16_ = auVar26._0_16_;
            auVar31._0_16_ = auVar21._0_16_;
            *(undefined1 (*) [32])(lVar10 + 0x20 + uVar12 * 4) = auVar31;
            auVar16 = vperm2f128_avx(auVar22,auVar16,0x31);
            *(undefined1 (*) [32])(lVar10 + 0x40 + uVar12 * 4) = auVar16;
            auVar16 = vperm2f128_avx(auVar21,auVar26,0x31);
            *(undefined1 (*) [32])(lVar10 + 0x60 + uVar12 * 4) = auVar16;
          }
          else {
            auVar40 = auVar29._0_16_;
            auVar48 = auVar29._16_16_;
            auVar25 = auVar21._0_16_;
            auVar27 = auVar21._16_16_;
            auVar20 = auVar15._0_16_;
            auVar24 = auVar15._16_16_;
            if ((uVar13 & 1) != 0) {
              *(int *)(lVar10 + uVar12 * 4) = auVar29._0_4_;
            }
            if ((uVar13 & 2) != 0) {
              uVar3 = vextractps_avx(auVar40,1);
              *(undefined4 *)(lVar10 + 0x10 + uVar12 * 4) = uVar3;
            }
            if ((uVar13 & 4) != 0) {
              uVar3 = vextractps_avx(auVar40,2);
              *(undefined4 *)(lVar10 + 0x20 + uVar12 * 4) = uVar3;
            }
            if ((uVar13 & 8) != 0) {
              uVar3 = vextractps_avx(auVar40,3);
              *(undefined4 *)(lVar10 + 0x30 + uVar12 * 4) = uVar3;
            }
            if ((uVar13 & 0x10) != 0) {
              *(int *)(lVar10 + 0x40 + uVar12 * 4) = auVar29._16_4_;
            }
            if ((uVar13 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar48,1);
              *(undefined4 *)(lVar10 + 0x50 + uVar12 * 4) = uVar3;
            }
            if ((uVar13 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar48,2);
              *(undefined4 *)(lVar10 + 0x60 + uVar12 * 4) = uVar3;
            }
            if (cVar4 < '\0') {
              uVar3 = vextractps_avx(auVar48,3);
              *(undefined4 *)(lVar10 + 0x70 + uVar12 * 4) = uVar3;
            }
            if ((uVar13 & 1) != 0) {
              *(int *)(lVar10 + 4 + uVar12 * 4) = auVar21._0_4_;
            }
            if ((uVar13 & 2) != 0) {
              uVar3 = vextractps_avx(auVar25,1);
              *(undefined4 *)(lVar10 + 0x14 + uVar12 * 4) = uVar3;
            }
            if ((uVar13 & 4) != 0) {
              uVar3 = vextractps_avx(auVar25,2);
              *(undefined4 *)(lVar10 + 0x24 + uVar12 * 4) = uVar3;
            }
            if ((uVar13 & 8) != 0) {
              uVar3 = vextractps_avx(auVar25,3);
              *(undefined4 *)(lVar10 + 0x34 + uVar12 * 4) = uVar3;
            }
            if ((uVar13 & 0x10) != 0) {
              *(int *)(lVar10 + 0x44 + uVar12 * 4) = auVar21._16_4_;
            }
            if ((uVar13 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar27,1);
              *(undefined4 *)(lVar10 + 0x54 + uVar12 * 4) = uVar3;
            }
            if ((uVar13 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar27,2);
              *(undefined4 *)(lVar10 + 100 + uVar12 * 4) = uVar3;
            }
            if (cVar4 < '\0') {
              uVar3 = vextractps_avx(auVar27,3);
              *(undefined4 *)(lVar10 + 0x74 + uVar12 * 4) = uVar3;
            }
            if ((uVar13 & 1) != 0) {
              *(int *)(lVar10 + 8 + uVar12 * 4) = auVar15._0_4_;
            }
            if ((uVar13 & 2) != 0) {
              uVar3 = vextractps_avx(auVar20,1);
              *(undefined4 *)(lVar10 + 0x18 + uVar12 * 4) = uVar3;
            }
            if ((uVar13 & 4) != 0) {
              uVar3 = vextractps_avx(auVar20,2);
              *(undefined4 *)(lVar10 + 0x28 + uVar12 * 4) = uVar3;
            }
            if ((uVar13 & 8) != 0) {
              uVar3 = vextractps_avx(auVar20,3);
              *(undefined4 *)(lVar10 + 0x38 + uVar12 * 4) = uVar3;
            }
            if ((uVar13 & 0x10) != 0) {
              *(int *)(lVar10 + 0x48 + uVar12 * 4) = auVar15._16_4_;
            }
            if ((uVar13 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar24,1);
              *(undefined4 *)(lVar10 + 0x58 + uVar12 * 4) = uVar3;
            }
            if ((uVar13 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar24,2);
              *(undefined4 *)(lVar10 + 0x68 + uVar12 * 4) = uVar3;
            }
            if (cVar4 < '\0') {
              uVar3 = vextractps_avx(auVar24,3);
              *(undefined4 *)(lVar10 + 0x78 + uVar12 * 4) = uVar3;
            }
            if ((uVar13 & 1) != 0) {
              uVar3 = vextractps_avx(auVar16._0_16_,3);
              *(undefined4 *)(lVar10 + 0xc + uVar12 * 4) = uVar3;
            }
            if ((uVar13 & 2) != 0) {
              uVar3 = vextractps_avx(auVar16._16_16_,3);
              *(undefined4 *)(lVar10 + 0x1c + uVar12 * 4) = uVar3;
            }
            if ((uVar13 & 4) != 0) {
              uVar3 = vextractps_avx(auVar26._0_16_,3);
              *(undefined4 *)(lVar10 + 0x2c + uVar12 * 4) = uVar3;
            }
            if ((uVar13 & 8) != 0) {
              uVar3 = vextractps_avx(auVar26._16_16_,3);
              *(undefined4 *)(lVar10 + 0x3c + uVar12 * 4) = uVar3;
            }
            if ((uVar13 & 0x10) != 0) {
              uVar3 = vextractps_avx(auVar31._0_16_,3);
              *(undefined4 *)(lVar10 + 0x4c + uVar12 * 4) = uVar3;
            }
            if ((uVar13 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar31._16_16_,3);
              *(undefined4 *)(lVar10 + 0x5c + uVar12 * 4) = uVar3;
            }
            if ((uVar13 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar22._0_16_,3);
              *(undefined4 *)(lVar10 + 0x6c + uVar12 * 4) = uVar3;
            }
            if (cVar4 < '\0') {
              uVar3 = vextractps_avx(auVar22._16_16_,3);
              *(undefined4 *)(lVar10 + 0x7c + uVar12 * 4) = uVar3;
            }
          }
        }
      }
      uVar7 = uVar7 + 8;
      uVar12 = uVar12 + 0x20;
      lVar9 = lVar9 + 0x60;
    } while (uVar7 < (uVar6 & 0xfffffff8));
    if ((int)param_9 <= (int)uVar7) {
      return;
    }
  }
  iVar5 = (int)uVar7;
  auVar16._4_4_ = iVar5;
  auVar16._0_4_ = iVar5;
  auVar16._8_4_ = iVar5;
  auVar16._12_4_ = iVar5;
  auVar16._16_4_ = iVar5;
  auVar16._20_4_ = iVar5;
  auVar16._24_4_ = iVar5;
  auVar16._28_4_ = iVar5;
  auVar16 = vpor_avx2(auVar16,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar26._4_4_ = param_9;
  auVar26._0_4_ = param_9;
  auVar26._8_4_ = param_9;
  auVar26._12_4_ = param_9;
  auVar26._16_4_ = param_9;
  auVar26._20_4_ = param_9;
  auVar26._24_4_ = param_9;
  auVar26._28_4_ = param_9;
  auVar16 = vpcmpgtd_avx2(auVar26,auVar16);
  lVar9 = (longlong)(param_8 + iVar5);
  pauVar8 = (undefined1 (*) [32])(param_1 + lVar9 * 0x10);
  iVar11 = vmovmskps_avx(auVar16);
  if (iVar11 == 0xff) {
    auVar31 = vperm2f128_avx(*pauVar8,pauVar8[2],0x20);
    auVar22 = vperm2f128_avx(*pauVar8,pauVar8[2],0x31);
    auVar21 = vperm2f128_avx(pauVar8[1],pauVar8[3],0x20);
    auVar15 = vperm2f128_avx(pauVar8[1],pauVar8[3],0x31);
    auVar26 = vunpcklps_avx(auVar31,auVar22);
    auVar31 = vunpckhps_avx(auVar31,auVar22);
    auVar42 = vunpcklps_avx(auVar21,auVar15);
    auVar22 = vunpckhps_avx(auVar21,auVar15);
    auVar21 = vunpcklpd_avx(auVar26,auVar42);
    auVar26 = vunpckhpd_avx(auVar26,auVar42);
    auVar42 = vunpcklpd_avx(auVar31,auVar22);
    auVar31 = vunpckhpd_avx(auVar31,auVar22);
  }
  else {
    auVar21 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar16);
    auVar26 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar16);
    auVar42 = vgatherdps(ZEXT832(0),auVar16);
    auVar31 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar16);
  }
  auVar22 = vmaskmovps_avx(auVar16,auVar21);
  auVar26 = vmaskmovps_avx(auVar16,auVar26);
  auVar21 = vmaskmovps_avx(auVar16,auVar42);
  auVar42 = vcmpps_avx(auVar31,ZEXT832(0) << 0x20,4);
  auVar42 = auVar16 & auVar42;
  if ((((((((SUB321(auVar42 >> 0x1f,0) & 1) != 0 || (SUB321(auVar42 >> 0x3f,0) & 1) != 0) ||
          (SUB321(auVar42 >> 0x5f,0) & 1) != 0) || SUB321(auVar42 >> 0x7f,0) != '\0') ||
        (SUB321(auVar42 >> 0x9f,0) & 1) != 0) || SUB321(auVar42 >> 0xbf,0) != '\0') ||
      (SUB321(auVar42 >> 0xdf,0) & 1) != 0) || auVar42[0x1f] < '\0') {
    pauVar2 = (undefined1 (*) [32])(param_2 + lVar9 * 0xc);
    if ((char)iVar11 == -1) {
      auVar42 = pauVar2[1];
      auVar15 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar42);
      auVar29 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,*pauVar2);
      auVar15 = vblendps_avx(auVar29,auVar15,0x88);
      auVar29 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar42);
      auVar52 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,pauVar2[2]);
      auVar29 = vblendps_avx(auVar52,auVar29,0x13);
      auVar43._16_16_ = auVar29._0_16_;
      auVar43._0_16_ = auVar15._0_16_;
      auVar78 = vperm2f128_avx(auVar15,auVar29,0x31);
      auVar42 = vblendps_avx(auVar42,*pauVar2,0x24);
      auVar42 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar42);
      auVar15 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,pauVar2[2]);
      _local_2a0 = vblendps_avx(auVar42,auVar15,0xe0);
      auVar42 = *(undefined1 (*) [32])(param_3 + lVar9 * 0xc);
      auVar15 = *(undefined1 (*) [32])(param_3 + 0x20 + lVar9 * 0xc);
      auVar29 = *(undefined1 (*) [32])(param_3 + 0x40 + lVar9 * 0xc);
      auVar52 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar15);
      auVar30 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar42);
      auVar52 = vblendps_avx(auVar30,auVar52,0x88);
      auVar30 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar15);
      auVar56 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,auVar29);
      auVar30 = vblendps_avx(auVar56,auVar30,0x13);
      auVar54._16_16_ = auVar30._0_16_;
      auVar54._0_16_ = auVar52._0_16_;
      auVar52 = vperm2f128_avx(auVar52,auVar30,0x31);
      auVar42 = vblendps_avx(auVar15,auVar42,0x24);
      auVar42 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar42);
      auVar15 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,auVar29);
      auVar42 = vblendps_avx(auVar42,auVar15,0xe0);
    }
    else {
      auVar43 = vgatherdps(ZEXT832(0) << 0x20,auVar16);
      auVar78 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar16);
      _local_2a0 = vgatherdps(ZEXT832(0),auVar16);
      auVar54 = vgatherdps(ZEXT832(0),auVar16);
      auVar52 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar16);
      auVar42 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar16);
    }
    auVar15 = vmaskmovps_avx(auVar16,*(undefined1 (*) [32])(param_4 + (iVar5 << 2)));
    auVar81._0_4_ = param_7 * auVar15._0_4_ + param_6;
    auVar81._4_4_ = param_7 * auVar15._4_4_ + param_6;
    auVar81._8_4_ = param_7 * auVar15._8_4_ + param_6;
    auVar81._12_4_ = param_7 * auVar15._12_4_ + param_6;
    auVar81._16_4_ = param_7 * auVar15._16_4_ + param_6;
    auVar81._20_4_ = param_7 * auVar15._20_4_ + param_6;
    auVar81._24_4_ = param_7 * auVar15._24_4_ + param_6;
    auVar81._28_4_ = param_7 * auVar15._28_4_ + param_6;
    fVar79 = param_5 + auVar81._0_4_;
    fVar82 = param_5 + auVar81._4_4_;
    fVar83 = param_5 + auVar81._8_4_;
    fVar84 = param_5 + auVar81._12_4_;
    fVar85 = param_5 + auVar81._16_4_;
    fVar86 = param_5 + auVar81._20_4_;
    fVar87 = param_5 + auVar81._24_4_;
    fVar88 = param_5 + auVar81._28_4_;
    auVar59._0_4_ = -(auVar54._0_4_ * fVar79) + auVar43._0_4_;
    auVar59._4_4_ = -(auVar54._4_4_ * fVar82) + auVar43._4_4_;
    auVar59._8_4_ = -(auVar54._8_4_ * fVar83) + auVar43._8_4_;
    auVar59._12_4_ = -(auVar54._12_4_ * fVar84) + auVar43._12_4_;
    auVar59._16_4_ = -(auVar54._16_4_ * fVar85) + auVar43._16_4_;
    auVar59._20_4_ = -(auVar54._20_4_ * fVar86) + auVar43._20_4_;
    auVar59._24_4_ = -(auVar54._24_4_ * fVar87) + auVar43._24_4_;
    auVar59._28_4_ = -(auVar54._28_4_ * fVar88) + auVar43._28_4_;
    auVar32._0_4_ = -(auVar52._0_4_ * fVar79) + auVar78._0_4_;
    auVar32._4_4_ = -(auVar52._4_4_ * fVar82) + auVar78._4_4_;
    auVar32._8_4_ = -(auVar52._8_4_ * fVar83) + auVar78._8_4_;
    auVar32._12_4_ = -(auVar52._12_4_ * fVar84) + auVar78._12_4_;
    auVar32._16_4_ = -(auVar52._16_4_ * fVar85) + auVar78._16_4_;
    auVar32._20_4_ = -(auVar52._20_4_ * fVar86) + auVar78._20_4_;
    auVar32._24_4_ = -(auVar52._24_4_ * fVar87) + auVar78._24_4_;
    auVar32._28_4_ = -(auVar52._28_4_ * fVar88) + auVar78._28_4_;
    auVar70._0_4_ = -(auVar42._0_4_ * fVar79) + (float)local_2a0._0_4_;
    auVar70._4_4_ = -(auVar42._4_4_ * fVar82) + (float)local_2a0._4_4_;
    auVar70._8_4_ = -(auVar42._8_4_ * fVar83) + fStack_298;
    auVar70._12_4_ = -(auVar42._12_4_ * fVar84) + fStack_294;
    auVar70._16_4_ = -(auVar42._16_4_ * fVar85) + fStack_290;
    auVar70._20_4_ = -(auVar42._20_4_ * fVar86) + fStack_28c;
    auVar70._24_4_ = -(auVar42._24_4_ * fVar87) + fStack_288;
    auVar70._28_4_ = -(auVar42._28_4_ * fVar88) + fStack_284;
    auVar22 = vsubps_avx(auVar22,auVar59);
    auVar26 = vsubps_avx(auVar26,auVar32);
    auVar21 = vsubps_avx(auVar21,auVar70);
    fVar79 = auVar26._0_4_;
    fVar82 = auVar26._4_4_;
    fVar83 = auVar26._8_4_;
    fVar84 = auVar26._12_4_;
    fVar85 = auVar26._16_4_;
    fVar86 = auVar26._20_4_;
    fVar87 = auVar26._24_4_;
    fVar88 = auVar26._28_4_;
    fVar89 = auVar22._0_4_;
    fVar90 = auVar22._4_4_;
    fVar91 = auVar22._8_4_;
    fVar92 = auVar22._12_4_;
    fVar93 = auVar22._16_4_;
    fVar94 = auVar22._20_4_;
    fVar95 = auVar22._24_4_;
    fVar96 = auVar22._28_4_;
    fVar28 = auVar21._0_4_;
    auVar22._0_4_ = fVar28 * fVar28 + fVar89 * fVar89 + fVar79 * fVar79;
    fVar33 = auVar21._4_4_;
    auVar22._4_4_ = fVar33 * fVar33 + fVar90 * fVar90 + fVar82 * fVar82;
    fVar34 = auVar21._8_4_;
    auVar22._8_4_ = fVar34 * fVar34 + fVar91 * fVar91 + fVar83 * fVar83;
    fVar35 = auVar21._12_4_;
    auVar22._12_4_ = fVar35 * fVar35 + fVar92 * fVar92 + fVar84 * fVar84;
    fVar36 = auVar21._16_4_;
    auVar22._16_4_ = fVar36 * fVar36 + fVar93 * fVar93 + fVar85 * fVar85;
    fVar37 = auVar21._20_4_;
    auVar22._20_4_ = fVar37 * fVar37 + fVar94 * fVar94 + fVar86 * fVar86;
    fVar38 = auVar21._24_4_;
    auVar22._24_4_ = fVar38 * fVar38 + fVar95 * fVar95 + fVar87 * fVar87;
    fVar39 = auVar21._28_4_;
    auVar22._28_4_ = fVar39 * fVar39 + fVar96 * fVar96 + fVar88 * fVar88;
    auVar26 = vsqrtps_avx(auVar22);
    auVar26 = vdivps_avx(auVar81,auVar26);
    fVar61 = auVar26._0_4_;
    fVar62 = auVar26._4_4_;
    fVar63 = auVar26._8_4_;
    fVar64 = auVar26._12_4_;
    fVar65 = auVar26._16_4_;
    fVar66 = auVar26._20_4_;
    fVar67 = auVar26._24_4_;
    fVar68 = auVar26._28_4_;
    auVar55._0_4_ = -(param_5 * auVar54._0_4_) + auVar43._0_4_;
    auVar55._4_4_ = -(param_5 * auVar54._4_4_) + auVar43._4_4_;
    auVar55._8_4_ = -(param_5 * auVar54._8_4_) + auVar43._8_4_;
    auVar55._12_4_ = -(param_5 * auVar54._12_4_) + auVar43._12_4_;
    auVar55._16_4_ = -(param_5 * auVar54._16_4_) + auVar43._16_4_;
    auVar55._20_4_ = -(param_5 * auVar54._20_4_) + auVar43._20_4_;
    auVar55._24_4_ = -(param_5 * auVar54._24_4_) + auVar43._24_4_;
    auVar55._28_4_ = -(param_5 * auVar54._28_4_) + auVar43._28_4_;
    auVar44._0_4_ = auVar81._0_4_ * auVar81._0_4_;
    auVar44._4_4_ = auVar81._4_4_ * auVar81._4_4_;
    auVar44._8_4_ = auVar81._8_4_ * auVar81._8_4_;
    auVar44._12_4_ = auVar81._12_4_ * auVar81._12_4_;
    auVar44._16_4_ = auVar81._16_4_ * auVar81._16_4_;
    auVar44._20_4_ = auVar81._20_4_ * auVar81._20_4_;
    auVar44._24_4_ = auVar81._24_4_ * auVar81._24_4_;
    auVar44._28_4_ = auVar81._28_4_ * auVar81._28_4_;
    auVar26 = vcmpps_avx(auVar22,auVar44,1);
    auVar45._4_4_ = __real_322bcc77;
    auVar45._0_4_ = __real_322bcc77;
    auVar45._8_4_ = __real_322bcc77;
    auVar45._12_4_ = __real_322bcc77;
    auVar45._16_4_ = __real_322bcc77;
    auVar45._20_4_ = __real_322bcc77;
    auVar45._24_4_ = __real_322bcc77;
    auVar45._28_4_ = __real_322bcc77;
    auVar22 = vcmpps_avx(auVar22,auVar45,1);
    uVar13 = auVar26._0_4_;
    auVar46._0_4_ = uVar13 & (uint)(fVar61 * fVar89 + auVar59._0_4_);
    uVar69 = auVar26._4_4_;
    auVar46._4_4_ = uVar69 & (uint)(fVar62 * fVar90 + auVar59._4_4_);
    uVar71 = auVar26._8_4_;
    auVar46._8_4_ = uVar71 & (uint)(fVar63 * fVar91 + auVar59._8_4_);
    uVar72 = auVar26._12_4_;
    auVar46._12_4_ = uVar72 & (uint)(fVar64 * fVar92 + auVar59._12_4_);
    uVar73 = auVar26._16_4_;
    auVar46._16_4_ = uVar73 & (uint)(fVar65 * fVar93 + auVar59._16_4_);
    uVar74 = auVar26._20_4_;
    auVar46._20_4_ = uVar74 & (uint)(fVar66 * fVar94 + auVar59._20_4_);
    uVar75 = auVar26._24_4_;
    auVar46._24_4_ = uVar75 & (uint)(fVar67 * fVar95 + auVar59._24_4_);
    uVar76 = auVar26._28_4_;
    auVar46._28_4_ = uVar76 & (uint)(fVar68 * fVar96 + auVar59._28_4_);
    auVar26 = vblendvps_avx(auVar46,auVar55,auVar22);
    auVar21 = vcmpps_avx(auVar31,ZEXT432(0) << 0x20,4);
    auVar15 = vcmpps_avx(auVar26,ZEXT432(0) << 0x20,4);
    auVar17._0_4_ = auVar15._0_4_ & auVar21._0_4_ & auVar16._0_4_;
    auVar17._4_4_ = auVar15._4_4_ & auVar21._4_4_ & auVar16._4_4_;
    auVar17._8_4_ = auVar15._8_4_ & auVar21._8_4_ & auVar16._8_4_;
    auVar17._12_4_ = auVar15._12_4_ & auVar21._12_4_ & auVar16._12_4_;
    auVar17._16_4_ = auVar15._16_4_ & auVar21._16_4_ & auVar16._16_4_;
    auVar17._20_4_ = auVar15._20_4_ & auVar21._20_4_ & auVar16._20_4_;
    auVar17._24_4_ = auVar15._24_4_ & auVar21._24_4_ & auVar16._24_4_;
    auVar17._28_4_ = auVar15._28_4_ & auVar21._28_4_ & auVar16._28_4_;
    uVar6 = vmovmskps_avx(auVar17);
    if (uVar6 != 0) {
      auVar53._0_4_ = -(param_5 * auVar52._0_4_) + auVar78._0_4_;
      auVar53._4_4_ = -(param_5 * auVar52._4_4_) + auVar78._4_4_;
      auVar53._8_4_ = -(param_5 * auVar52._8_4_) + auVar78._8_4_;
      auVar53._12_4_ = -(param_5 * auVar52._12_4_) + auVar78._12_4_;
      auVar53._16_4_ = -(param_5 * auVar52._16_4_) + auVar78._16_4_;
      auVar53._20_4_ = -(param_5 * auVar52._20_4_) + auVar78._20_4_;
      auVar53._24_4_ = -(param_5 * auVar52._24_4_) + auVar78._24_4_;
      auVar53._28_4_ = -(param_5 * auVar52._28_4_) + auVar78._28_4_;
      auVar50._0_4_ = -(param_5 * auVar42._0_4_) + (float)local_2a0._0_4_;
      auVar50._4_4_ = -(param_5 * auVar42._4_4_) + (float)local_2a0._4_4_;
      auVar50._8_4_ = -(param_5 * auVar42._8_4_) + fStack_298;
      auVar50._12_4_ = -(param_5 * auVar42._12_4_) + fStack_294;
      auVar50._16_4_ = -(param_5 * auVar42._16_4_) + fStack_290;
      auVar50._20_4_ = -(param_5 * auVar42._20_4_) + fStack_28c;
      auVar50._24_4_ = -(param_5 * auVar42._24_4_) + fStack_288;
      auVar50._28_4_ = -(param_5 * auVar42._28_4_) + fStack_284;
      auVar18._0_4_ = uVar13 & (uint)(fVar61 * fVar79 + auVar32._0_4_);
      auVar18._4_4_ = uVar69 & (uint)(fVar62 * fVar82 + auVar32._4_4_);
      auVar18._8_4_ = uVar71 & (uint)(fVar63 * fVar83 + auVar32._8_4_);
      auVar18._12_4_ = uVar72 & (uint)(fVar64 * fVar84 + auVar32._12_4_);
      auVar18._16_4_ = uVar73 & (uint)(fVar65 * fVar85 + auVar32._16_4_);
      auVar18._20_4_ = uVar74 & (uint)(fVar66 * fVar86 + auVar32._20_4_);
      auVar18._24_4_ = uVar75 & (uint)(fVar67 * fVar87 + auVar32._24_4_);
      auVar18._28_4_ = uVar76 & (uint)(fVar68 * fVar88 + auVar32._28_4_);
      auVar16 = vblendvps_avx(auVar18,auVar53,auVar22);
      auVar19._0_4_ = uVar13 & (uint)(fVar61 * fVar28 + auVar70._0_4_);
      auVar19._4_4_ = uVar69 & (uint)(fVar62 * fVar33 + auVar70._4_4_);
      auVar19._8_4_ = uVar71 & (uint)(fVar63 * fVar34 + auVar70._8_4_);
      auVar19._12_4_ = uVar72 & (uint)(fVar64 * fVar35 + auVar70._12_4_);
      auVar19._16_4_ = uVar73 & (uint)(fVar65 * fVar36 + auVar70._16_4_);
      auVar19._20_4_ = uVar74 & (uint)(fVar66 * fVar37 + auVar70._20_4_);
      auVar19._24_4_ = uVar75 & (uint)(fVar67 * fVar38 + auVar70._24_4_);
      auVar19._28_4_ = uVar76 & (uint)(fVar68 * fVar39 + auVar70._28_4_);
      auVar22 = vblendvps_avx(auVar19,auVar50,auVar22);
      cVar4 = (char)uVar6;
      if (cVar4 == -1) {
        auVar21 = vunpcklps_avx(auVar26,auVar16);
        auVar15 = vunpcklps_avx(auVar22,auVar31);
        auVar42 = vunpcklpd_avx(auVar21,auVar15);
        auVar21 = vunpckhpd_avx(auVar21,auVar15);
        auVar16 = vunpckhps_avx(auVar26,auVar16);
        auVar26 = vunpckhps_avx(auVar22,auVar31);
        auVar31 = vunpcklpd_avx(auVar16,auVar26);
        auVar47._16_16_ = auVar21._0_16_;
        auVar47._0_16_ = auVar42._0_16_;
        *pauVar8 = auVar47;
        auVar16 = vunpckhpd_avx(auVar16,auVar26);
        auVar23._16_16_ = auVar16._0_16_;
        auVar23._0_16_ = auVar31._0_16_;
        pauVar8[1] = auVar23;
        auVar26 = vperm2f128_avx(auVar42,auVar21,0x31);
        pauVar8[2] = auVar26;
        auVar16 = vperm2f128_avx(auVar31,auVar16,0x31);
        pauVar8[3] = auVar16;
      }
      else {
        auVar57 = auVar31._0_16_;
        auVar60 = auVar31._16_16_;
        auVar40 = auVar26._0_16_;
        auVar48 = auVar26._16_16_;
        auVar25 = auVar16._0_16_;
        auVar27 = auVar16._16_16_;
        auVar20 = auVar22._0_16_;
        auVar24 = auVar22._16_16_;
        if ((uVar6 & 1) != 0) {
          *(int *)*pauVar8 = auVar26._0_4_;
        }
        if ((uVar6 & 2) != 0) {
          uVar3 = vextractps_avx(auVar40,1);
          *(undefined4 *)(*pauVar8 + 0x10) = uVar3;
        }
        if ((uVar6 & 4) != 0) {
          uVar3 = vextractps_avx(auVar40,2);
          *(undefined4 *)pauVar8[1] = uVar3;
        }
        if ((uVar6 & 8) != 0) {
          uVar3 = vextractps_avx(auVar40,3);
          *(undefined4 *)(pauVar8[1] + 0x10) = uVar3;
        }
        if ((uVar6 & 0x10) != 0) {
          *(int *)pauVar8[2] = auVar26._16_4_;
        }
        if ((uVar6 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar48,1);
          *(undefined4 *)(pauVar8[2] + 0x10) = uVar3;
        }
        if ((uVar6 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar48,2);
          *(undefined4 *)pauVar8[3] = uVar3;
        }
        if (cVar4 < '\0') {
          uVar3 = vextractps_avx(auVar48,3);
          *(undefined4 *)(pauVar8[3] + 0x10) = uVar3;
        }
        if ((uVar6 & 1) != 0) {
          *(int *)(*pauVar8 + 4) = auVar16._0_4_;
        }
        if ((uVar6 & 2) != 0) {
          uVar3 = vextractps_avx(auVar25,1);
          *(undefined4 *)(*pauVar8 + 0x14) = uVar3;
        }
        if ((uVar6 & 4) != 0) {
          uVar3 = vextractps_avx(auVar25,2);
          *(undefined4 *)(pauVar8[1] + 4) = uVar3;
        }
        if ((uVar6 & 8) != 0) {
          uVar3 = vextractps_avx(auVar25,3);
          *(undefined4 *)(pauVar8[1] + 0x14) = uVar3;
        }
        if ((uVar6 & 0x10) != 0) {
          *(int *)(pauVar8[2] + 4) = auVar16._16_4_;
        }
        if ((uVar6 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar27,1);
          *(undefined4 *)(pauVar8[2] + 0x14) = uVar3;
        }
        if ((uVar6 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar27,2);
          *(undefined4 *)(pauVar8[3] + 4) = uVar3;
        }
        if (cVar4 < '\0') {
          uVar3 = vextractps_avx(auVar27,3);
          *(undefined4 *)(pauVar8[3] + 0x14) = uVar3;
        }
        if ((uVar6 & 1) != 0) {
          *(int *)(*pauVar8 + 8) = auVar22._0_4_;
        }
        if ((uVar6 & 2) != 0) {
          uVar3 = vextractps_avx(auVar20,1);
          *(undefined4 *)(*pauVar8 + 0x18) = uVar3;
        }
        if ((uVar6 & 4) != 0) {
          uVar3 = vextractps_avx(auVar20,2);
          *(undefined4 *)(pauVar8[1] + 8) = uVar3;
        }
        if ((uVar6 & 8) != 0) {
          uVar3 = vextractps_avx(auVar20,3);
          *(undefined4 *)(pauVar8[1] + 0x18) = uVar3;
        }
        if ((uVar6 & 0x10) != 0) {
          *(int *)(pauVar8[2] + 8) = auVar22._16_4_;
        }
        if ((uVar6 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar24,1);
          *(undefined4 *)(pauVar8[2] + 0x18) = uVar3;
        }
        if ((uVar6 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar24,2);
          *(undefined4 *)(pauVar8[3] + 8) = uVar3;
        }
        if (cVar4 < '\0') {
          uVar3 = vextractps_avx(auVar24,3);
          *(undefined4 *)(pauVar8[3] + 0x18) = uVar3;
        }
        if ((uVar6 & 1) != 0) {
          *(int *)(*pauVar8 + 0xc) = auVar31._0_4_;
        }
        if ((uVar6 & 2) != 0) {
          uVar3 = vextractps_avx(auVar57,1);
          *(undefined4 *)(*pauVar8 + 0x1c) = uVar3;
        }
        if ((uVar6 & 4) != 0) {
          uVar3 = vextractps_avx(auVar57,2);
          *(undefined4 *)(pauVar8[1] + 0xc) = uVar3;
        }
        if ((uVar6 & 8) != 0) {
          uVar3 = vextractps_avx(auVar57,3);
          *(undefined4 *)(pauVar8[1] + 0x1c) = uVar3;
        }
        if ((uVar6 & 0x10) != 0) {
          *(int *)(pauVar8[2] + 0xc) = auVar31._16_4_;
        }
        if ((uVar6 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar60,1);
          *(undefined4 *)(pauVar8[2] + 0x1c) = uVar3;
        }
        if ((uVar6 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar60,2);
          *(undefined4 *)(pauVar8[3] + 0xc) = uVar3;
        }
        if (cVar4 < '\0') {
          uVar3 = vextractps_avx(auVar60,3);
          *(undefined4 *)(pauVar8[3] + 0x1c) = uVar3;
        }
      }
    }
  }
  return;
}

// ApplySphericalBackstopConstraintsWithoutMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_CunfCunfCuniCuni_avx2 @ 140323970

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplySphericalBackstopConstraintsWithoutMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_CunfCunfCuniCuni_avx2
               (longlong param_1,longlong param_2,longlong param_3,float param_4,float param_5,
               int param_6,uint param_7)

{
  undefined1 (*pauVar1) [32];
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  char cVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  undefined1 (*pauVar19) [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  float fVar26;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar27 [32];
  float fVar36;
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar37 [16];
  undefined1 auVar42 [16];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  float fVar54;
  float fVar55;
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar56 [16];
  undefined1 auVar57 [32];
  undefined1 auVar61 [16];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar62 [32];
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  undefined1 auVar63 [32];
  float fVar69;
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [16];
  undefined1 auVar73 [32];
  undefined1 auVar74 [16];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [64];
  float fVar78;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  undefined1 auVar79 [32];
  float fVar86;
  uint uVar87;
  uint uVar88;
  uint uVar89;
  uint uVar90;
  uint uVar91;
  uint uVar92;
  float fVar93;
  uint uVar94;
  float fVar95;
  uint uVar96;
  
  uVar14 = param_7 + 7;
  if (-1 < (int)param_7) {
    uVar14 = param_7;
  }
  if ((int)(uVar14 & 0xfffffff8) < 1) {
    uVar18 = 0;
    if ((int)param_7 < 1) {
      return;
    }
  }
  else {
    fVar3 = param_5 + param_4;
    fVar10 = param_5 * param_5;
    pauVar19 = (undefined1 (*) [32])((longlong)param_6 * 0x10 + param_1);
    lVar16 = (longlong)param_6 * 0xc + 0x40;
    uVar18 = 0;
    auVar77 = ZEXT1264(ZEXT812(0));
    do {
      auVar22 = *pauVar19;
      auVar58 = pauVar19[1];
      auVar51 = pauVar19[2];
      auVar28 = pauVar19[3];
      auVar39 = vperm2f128_avx(auVar22,auVar51,0x20);
      auVar52 = vperm2f128_avx(auVar22,auVar51,0x31);
      auVar23 = vperm2f128_avx(auVar58,auVar28,0x20);
      auVar76 = vperm2f128_avx(auVar58,auVar28,0x31);
      auVar21 = vunpckhps_avx(auVar39,auVar52);
      auVar12 = vunpckhps_avx(auVar23,auVar76);
      auVar46 = vunpckhpd_avx(auVar21,auVar12);
      auVar38 = vcmpps_avx(auVar77._0_32_,auVar46,4);
      if ((((((((SUB321(auVar38 >> 0x1f,0) & 1) != 0 || (SUB321(auVar38 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar38 >> 0x5f,0) & 1) != 0) || SUB321(auVar38 >> 0x7f,0) != '\0') ||
            (SUB321(auVar38 >> 0x9f,0) & 1) != 0) || SUB321(auVar38 >> 0xbf,0) != '\0') ||
          (SUB321(auVar38 >> 0xdf,0) & 1) != 0) || auVar38[0x1f] < '\0') {
        auVar20 = vunpcklpd_avx(auVar21,auVar12);
        auVar21 = vunpcklps_avx(auVar39,auVar52);
        auVar12 = vunpcklps_avx(auVar23,auVar76);
        auVar11 = vunpckhpd_avx(auVar21,auVar12);
        auVar57 = vunpcklpd_avx(auVar21,auVar12);
        auVar21 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar16);
        auVar12 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar16);
        auVar39 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar12);
        auVar52 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,auVar21);
        auVar39 = vblendps_avx(auVar52,auVar39,0x88);
        auVar52 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar12);
        auVar23 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,*(undefined1 (*) [32])(param_2 + lVar16));
        auVar52 = vblendps_avx(auVar23,auVar52,0x13);
        auVar47 = vperm2f128_avx(auVar39,auVar52,0x31);
        auVar21 = vblendps_avx(auVar12,auVar21,0x24);
        auVar21 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar21);
        auVar12 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,*(undefined1 (*) [32])(param_2 + lVar16));
        auVar23 = vblendps_avx(auVar21,auVar12,0xe0);
        auVar21 = *(undefined1 (*) [32])(param_3 + -0x40 + lVar16);
        auVar12 = *(undefined1 (*) [32])(param_3 + -0x20 + lVar16);
        auVar76 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar12);
        auVar27 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,auVar21);
        auVar76 = vblendps_avx(auVar27,auVar76,0x88);
        auVar27 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar12);
        auVar59 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,*(undefined1 (*) [32])(param_3 + lVar16));
        auVar27 = vblendps_avx(auVar59,auVar27,0x13);
        auVar59 = vperm2f128_avx(auVar76,auVar27,0x31);
        auVar21 = vblendps_avx(auVar12,auVar21,0x24);
        auVar21 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar21);
        auVar12 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,*(undefined1 (*) [32])(param_3 + lVar16));
        auVar21 = vblendps_avx(auVar21,auVar12,0xe0);
        auVar75._0_4_ = -(fVar3 * auVar76._0_4_) + auVar39._0_4_;
        auVar75._4_4_ = -(fVar3 * auVar76._4_4_) + auVar39._4_4_;
        auVar75._8_4_ = -(fVar3 * auVar76._8_4_) + auVar39._8_4_;
        auVar75._12_4_ = -(fVar3 * auVar76._12_4_) + auVar39._12_4_;
        auVar75._16_4_ = -(fVar3 * auVar27._0_4_) + auVar52._0_4_;
        auVar75._20_4_ = -(fVar3 * auVar27._4_4_) + auVar52._4_4_;
        auVar75._24_4_ = -(fVar3 * auVar27._8_4_) + auVar52._8_4_;
        auVar75._28_4_ = -(fVar3 * auVar27._12_4_) + auVar52._12_4_;
        auVar63._0_4_ = -(fVar3 * auVar59._0_4_) + auVar47._0_4_;
        auVar63._4_4_ = -(fVar3 * auVar59._4_4_) + auVar47._4_4_;
        auVar63._8_4_ = -(fVar3 * auVar59._8_4_) + auVar47._8_4_;
        auVar63._12_4_ = -(fVar3 * auVar59._12_4_) + auVar47._12_4_;
        auVar63._16_4_ = -(fVar3 * auVar59._16_4_) + auVar47._16_4_;
        auVar63._20_4_ = -(fVar3 * auVar59._20_4_) + auVar47._20_4_;
        auVar63._24_4_ = -(fVar3 * auVar59._24_4_) + auVar47._24_4_;
        auVar63._28_4_ = -(fVar3 * auVar59._28_4_) + auVar47._28_4_;
        auVar70._0_4_ = -(fVar3 * auVar21._0_4_) + auVar23._0_4_;
        auVar70._4_4_ = -(fVar3 * auVar21._4_4_) + auVar23._4_4_;
        auVar70._8_4_ = -(fVar3 * auVar21._8_4_) + auVar23._8_4_;
        auVar70._12_4_ = -(fVar3 * auVar21._12_4_) + auVar23._12_4_;
        auVar70._16_4_ = -(fVar3 * auVar21._16_4_) + auVar23._16_4_;
        auVar70._20_4_ = -(fVar3 * auVar21._20_4_) + auVar23._20_4_;
        auVar70._24_4_ = -(fVar3 * auVar21._24_4_) + auVar23._24_4_;
        auVar70._28_4_ = -(fVar3 * auVar21._28_4_) + auVar23._28_4_;
        auVar12 = vsubps_avx(auVar57,auVar75);
        auVar11 = vsubps_avx(auVar11,auVar63);
        auVar20 = vsubps_avx(auVar20,auVar70);
        fVar4 = auVar11._0_4_;
        fVar5 = auVar11._4_4_;
        fVar6 = auVar11._8_4_;
        fVar7 = auVar11._12_4_;
        fVar8 = auVar11._16_4_;
        fVar9 = auVar11._20_4_;
        fVar26 = auVar11._24_4_;
        fVar30 = auVar11._28_4_;
        fVar81 = auVar12._0_4_;
        fVar82 = auVar12._4_4_;
        fVar83 = auVar12._8_4_;
        fVar84 = auVar12._12_4_;
        fVar85 = auVar12._16_4_;
        fVar86 = auVar12._20_4_;
        fVar93 = auVar12._24_4_;
        fVar95 = auVar12._28_4_;
        fVar31 = auVar20._0_4_;
        auVar57._0_4_ = fVar31 * fVar31 + fVar81 * fVar81 + fVar4 * fVar4;
        fVar32 = auVar20._4_4_;
        auVar57._4_4_ = fVar32 * fVar32 + fVar82 * fVar82 + fVar5 * fVar5;
        fVar33 = auVar20._8_4_;
        auVar57._8_4_ = fVar33 * fVar33 + fVar83 * fVar83 + fVar6 * fVar6;
        fVar34 = auVar20._12_4_;
        auVar57._12_4_ = fVar34 * fVar34 + fVar84 * fVar84 + fVar7 * fVar7;
        fVar35 = auVar20._16_4_;
        auVar57._16_4_ = fVar35 * fVar35 + fVar85 * fVar85 + fVar8 * fVar8;
        fVar36 = auVar20._20_4_;
        auVar57._20_4_ = fVar36 * fVar36 + fVar86 * fVar86 + fVar9 * fVar9;
        fVar54 = auVar20._24_4_;
        auVar57._24_4_ = fVar54 * fVar54 + fVar93 * fVar93 + fVar26 * fVar26;
        fVar55 = auVar20._28_4_;
        auVar57._28_4_ = fVar55 * fVar55 + fVar95 * fVar95 + fVar30 * fVar30;
        auVar12 = vsqrtps_avx(auVar57);
        auVar11._4_4_ = param_5;
        auVar11._0_4_ = param_5;
        auVar11._8_4_ = param_5;
        auVar11._12_4_ = param_5;
        auVar11._16_4_ = param_5;
        auVar11._20_4_ = param_5;
        auVar11._24_4_ = param_5;
        auVar11._28_4_ = param_5;
        auVar12 = vdivps_avx(auVar11,auVar12);
        fVar64 = auVar12._0_4_;
        fVar65 = auVar12._4_4_;
        fVar66 = auVar12._8_4_;
        fVar67 = auVar12._12_4_;
        fVar68 = auVar12._16_4_;
        fVar69 = auVar12._20_4_;
        fVar78 = auVar12._24_4_;
        fVar80 = auVar12._28_4_;
        auVar20._0_4_ = -(auVar76._0_4_ * param_4) + auVar39._0_4_;
        auVar20._4_4_ = -(auVar76._4_4_ * param_4) + auVar39._4_4_;
        auVar20._8_4_ = -(auVar76._8_4_ * param_4) + auVar39._8_4_;
        auVar20._12_4_ = -(auVar76._12_4_ * param_4) + auVar39._12_4_;
        auVar20._16_4_ = -(auVar27._0_4_ * param_4) + auVar52._0_4_;
        auVar20._20_4_ = -(auVar27._4_4_ * param_4) + auVar52._4_4_;
        auVar20._24_4_ = -(auVar27._8_4_ * param_4) + auVar52._8_4_;
        auVar20._28_4_ = -(auVar27._12_4_ * param_4) + auVar52._12_4_;
        auVar39._4_4_ = __real_322bcc77;
        auVar39._0_4_ = __real_322bcc77;
        auVar39._8_4_ = __real_322bcc77;
        auVar39._12_4_ = __real_322bcc77;
        auVar39._16_4_ = __real_322bcc77;
        auVar39._20_4_ = __real_322bcc77;
        auVar39._24_4_ = __real_322bcc77;
        auVar39._28_4_ = __real_322bcc77;
        auVar39 = vcmpps_avx(auVar57,auVar39,1);
        auVar12._4_4_ = fVar10;
        auVar12._0_4_ = fVar10;
        auVar12._8_4_ = fVar10;
        auVar12._12_4_ = fVar10;
        auVar12._16_4_ = fVar10;
        auVar12._20_4_ = fVar10;
        auVar12._24_4_ = fVar10;
        auVar12._28_4_ = fVar10;
        auVar12 = vcmpps_avx(auVar57,auVar12,1);
        uVar87 = auVar12._0_4_;
        auVar52._0_4_ = uVar87 & (uint)(fVar64 * fVar81 + auVar75._0_4_);
        uVar88 = auVar12._4_4_;
        auVar52._4_4_ = uVar88 & (uint)(fVar65 * fVar82 + auVar75._4_4_);
        uVar89 = auVar12._8_4_;
        auVar52._8_4_ = uVar89 & (uint)(fVar66 * fVar83 + auVar75._8_4_);
        uVar90 = auVar12._12_4_;
        auVar52._12_4_ = uVar90 & (uint)(fVar67 * fVar84 + auVar75._12_4_);
        uVar91 = auVar12._16_4_;
        auVar52._16_4_ = uVar91 & (uint)(fVar68 * fVar85 + auVar75._16_4_);
        uVar92 = auVar12._20_4_;
        auVar52._20_4_ = uVar92 & (uint)(fVar69 * fVar86 + auVar75._20_4_);
        uVar94 = auVar12._24_4_;
        auVar52._24_4_ = uVar94 & (uint)(fVar78 * fVar93 + auVar75._24_4_);
        uVar96 = auVar12._28_4_;
        auVar52._28_4_ = uVar96 & (uint)(fVar80 * fVar95 + auVar75._28_4_);
        auVar77 = ZEXT1264(ZEXT412(0)) << 0x20;
        auVar12 = vblendvps_avx(auVar52,auVar20,auVar39);
        auVar52 = vcmpps_avx(ZEXT1232(ZEXT412(0)) << 0x20,auVar12,4);
        auVar76._0_4_ = auVar52._0_4_ & auVar38._0_4_;
        auVar76._4_4_ = auVar52._4_4_ & auVar38._4_4_;
        auVar76._8_4_ = auVar52._8_4_ & auVar38._8_4_;
        auVar76._12_4_ = auVar52._12_4_ & auVar38._12_4_;
        auVar76._16_4_ = auVar52._16_4_ & auVar38._16_4_;
        auVar76._20_4_ = auVar52._20_4_ & auVar38._20_4_;
        auVar76._24_4_ = auVar52._24_4_ & auVar38._24_4_;
        auVar76._28_4_ = auVar52._28_4_ & auVar38._28_4_;
        uVar15 = vmovmskps_avx(auVar76);
        if (uVar15 != 0) {
          auVar45._0_4_ = -(param_4 * auVar59._0_4_) + auVar47._0_4_;
          auVar45._4_4_ = -(param_4 * auVar59._4_4_) + auVar47._4_4_;
          auVar45._8_4_ = -(param_4 * auVar59._8_4_) + auVar47._8_4_;
          auVar45._12_4_ = -(param_4 * auVar59._12_4_) + auVar47._12_4_;
          auVar45._16_4_ = -(param_4 * auVar59._16_4_) + auVar47._16_4_;
          auVar45._20_4_ = -(param_4 * auVar59._20_4_) + auVar47._20_4_;
          auVar45._24_4_ = -(param_4 * auVar59._24_4_) + auVar47._24_4_;
          auVar45._28_4_ = -(param_4 * auVar59._28_4_) + auVar47._28_4_;
          auVar27._0_4_ = -(param_4 * auVar21._0_4_) + auVar23._0_4_;
          auVar27._4_4_ = -(param_4 * auVar21._4_4_) + auVar23._4_4_;
          auVar27._8_4_ = -(param_4 * auVar21._8_4_) + auVar23._8_4_;
          auVar27._12_4_ = -(param_4 * auVar21._12_4_) + auVar23._12_4_;
          auVar27._16_4_ = -(param_4 * auVar21._16_4_) + auVar23._16_4_;
          auVar27._20_4_ = -(param_4 * auVar21._20_4_) + auVar23._20_4_;
          auVar27._24_4_ = -(param_4 * auVar21._24_4_) + auVar23._24_4_;
          auVar27._28_4_ = -(param_4 * auVar21._28_4_) + auVar23._28_4_;
          auVar38._0_4_ = uVar87 & (uint)(fVar64 * fVar4 + auVar63._0_4_);
          auVar38._4_4_ = uVar88 & (uint)(fVar65 * fVar5 + auVar63._4_4_);
          auVar38._8_4_ = uVar89 & (uint)(fVar66 * fVar6 + auVar63._8_4_);
          auVar38._12_4_ = uVar90 & (uint)(fVar67 * fVar7 + auVar63._12_4_);
          auVar38._16_4_ = uVar91 & (uint)(fVar68 * fVar8 + auVar63._16_4_);
          auVar38._20_4_ = uVar92 & (uint)(fVar69 * fVar9 + auVar63._20_4_);
          auVar38._24_4_ = uVar94 & (uint)(fVar78 * fVar26 + auVar63._24_4_);
          auVar38._28_4_ = uVar96 & (uint)(fVar80 * fVar30 + auVar63._28_4_);
          auVar38 = vblendvps_avx(auVar38,auVar45,auVar39);
          auVar21._0_4_ = uVar87 & (uint)(fVar64 * fVar31 + auVar70._0_4_);
          auVar21._4_4_ = uVar88 & (uint)(fVar65 * fVar32 + auVar70._4_4_);
          auVar21._8_4_ = uVar89 & (uint)(fVar66 * fVar33 + auVar70._8_4_);
          auVar21._12_4_ = uVar90 & (uint)(fVar67 * fVar34 + auVar70._12_4_);
          auVar21._16_4_ = uVar91 & (uint)(fVar68 * fVar35 + auVar70._16_4_);
          auVar21._20_4_ = uVar92 & (uint)(fVar69 * fVar36 + auVar70._20_4_);
          auVar21._24_4_ = uVar94 & (uint)(fVar78 * fVar54 + auVar70._24_4_);
          auVar21._28_4_ = uVar96 & (uint)(fVar80 * fVar55 + auVar70._28_4_);
          auVar21 = vblendvps_avx(auVar21,auVar27,auVar39);
          cVar13 = (char)uVar15;
          if (cVar13 == -1) {
            auVar22 = vunpcklps_avx(auVar12,auVar38);
            auVar58 = vunpcklps_avx(auVar21,auVar46);
            auVar28 = vunpcklpd_avx(auVar22,auVar58);
            auVar22 = vunpckhpd_avx(auVar22,auVar58);
            auVar58 = vunpckhps_avx(auVar12,auVar38);
            auVar51 = vunpckhps_avx(auVar21,auVar46);
            auVar38 = vunpcklpd_avx(auVar58,auVar51);
            auVar46._16_16_ = auVar22._0_16_;
            auVar46._0_16_ = auVar28._0_16_;
            *pauVar19 = auVar46;
            auVar58 = vunpckhpd_avx(auVar58,auVar51);
            auVar51._16_16_ = auVar58._0_16_;
            auVar51._0_16_ = auVar38._0_16_;
            pauVar19[1] = auVar51;
            auVar22 = vperm2f128_avx(auVar28,auVar22,0x31);
            pauVar19[2] = auVar22;
            auVar22 = vperm2f128_avx(auVar38,auVar58,0x31);
            pauVar19[3] = auVar22;
          }
          else {
            auVar56 = auVar12._0_16_;
            auVar61 = auVar12._16_16_;
            auVar43 = auVar38._0_16_;
            auVar44 = auVar38._16_16_;
            auVar37 = auVar21._0_16_;
            auVar42 = auVar21._16_16_;
            if ((uVar15 & 1) != 0) {
              *(int *)*pauVar19 = auVar12._0_4_;
            }
            if ((uVar15 & 2) != 0) {
              uVar2 = vextractps_avx(auVar56,1);
              *(undefined4 *)(*pauVar19 + 0x10) = uVar2;
            }
            if ((uVar15 & 4) != 0) {
              uVar2 = vextractps_avx(auVar56,2);
              *(undefined4 *)pauVar19[1] = uVar2;
            }
            if ((uVar15 & 8) != 0) {
              uVar2 = vextractps_avx(auVar56,3);
              *(undefined4 *)(pauVar19[1] + 0x10) = uVar2;
            }
            if ((uVar15 & 0x10) != 0) {
              *(int *)pauVar19[2] = auVar12._16_4_;
            }
            if ((uVar15 & 0x20) != 0) {
              uVar2 = vextractps_avx(auVar61,1);
              *(undefined4 *)(pauVar19[2] + 0x10) = uVar2;
            }
            if ((uVar15 & 0x40) != 0) {
              uVar2 = vextractps_avx(auVar61,2);
              *(undefined4 *)pauVar19[3] = uVar2;
            }
            if (cVar13 < '\0') {
              uVar2 = vextractps_avx(auVar61,3);
              *(undefined4 *)(pauVar19[3] + 0x10) = uVar2;
            }
            if ((uVar15 & 1) != 0) {
              *(int *)(*pauVar19 + 4) = auVar38._0_4_;
            }
            if ((uVar15 & 2) != 0) {
              uVar2 = vextractps_avx(auVar43,1);
              *(undefined4 *)(*pauVar19 + 0x14) = uVar2;
            }
            if ((uVar15 & 4) != 0) {
              uVar2 = vextractps_avx(auVar43,2);
              *(undefined4 *)(pauVar19[1] + 4) = uVar2;
            }
            if ((uVar15 & 8) != 0) {
              uVar2 = vextractps_avx(auVar43,3);
              *(undefined4 *)(pauVar19[1] + 0x14) = uVar2;
            }
            if ((uVar15 & 0x10) != 0) {
              *(int *)(pauVar19[2] + 4) = auVar38._16_4_;
            }
            if ((uVar15 & 0x20) != 0) {
              uVar2 = vextractps_avx(auVar44,1);
              *(undefined4 *)(pauVar19[2] + 0x14) = uVar2;
            }
            if ((uVar15 & 0x40) != 0) {
              uVar2 = vextractps_avx(auVar44,2);
              *(undefined4 *)(pauVar19[3] + 4) = uVar2;
            }
            if (cVar13 < '\0') {
              uVar2 = vextractps_avx(auVar44,3);
              *(undefined4 *)(pauVar19[3] + 0x14) = uVar2;
            }
            if ((uVar15 & 1) != 0) {
              *(int *)(*pauVar19 + 8) = auVar21._0_4_;
            }
            if ((uVar15 & 2) != 0) {
              uVar2 = vextractps_avx(auVar37,1);
              *(undefined4 *)(*pauVar19 + 0x18) = uVar2;
            }
            if ((uVar15 & 4) != 0) {
              uVar2 = vextractps_avx(auVar37,2);
              *(undefined4 *)(pauVar19[1] + 8) = uVar2;
            }
            if ((uVar15 & 8) != 0) {
              uVar2 = vextractps_avx(auVar37,3);
              *(undefined4 *)(pauVar19[1] + 0x18) = uVar2;
            }
            if ((uVar15 & 0x10) != 0) {
              *(int *)(pauVar19[2] + 8) = auVar21._16_4_;
            }
            if ((uVar15 & 0x20) != 0) {
              uVar2 = vextractps_avx(auVar42,1);
              *(undefined4 *)(pauVar19[2] + 0x18) = uVar2;
            }
            if ((uVar15 & 0x40) != 0) {
              uVar2 = vextractps_avx(auVar42,2);
              *(undefined4 *)(pauVar19[3] + 8) = uVar2;
            }
            if (cVar13 < '\0') {
              uVar2 = vextractps_avx(auVar42,3);
              *(undefined4 *)(pauVar19[3] + 0x18) = uVar2;
            }
            if ((uVar15 & 1) != 0) {
              uVar2 = vextractps_avx(auVar22._0_16_,3);
              *(undefined4 *)(*pauVar19 + 0xc) = uVar2;
            }
            if ((uVar15 & 2) != 0) {
              uVar2 = vextractps_avx(auVar22._16_16_,3);
              *(undefined4 *)(*pauVar19 + 0x1c) = uVar2;
            }
            if ((uVar15 & 4) != 0) {
              uVar2 = vextractps_avx(auVar58._0_16_,3);
              *(undefined4 *)(pauVar19[1] + 0xc) = uVar2;
            }
            if ((uVar15 & 8) != 0) {
              uVar2 = vextractps_avx(auVar58._16_16_,3);
              *(undefined4 *)(pauVar19[1] + 0x1c) = uVar2;
            }
            if ((uVar15 & 0x10) != 0) {
              uVar2 = vextractps_avx(auVar51._0_16_,3);
              *(undefined4 *)(pauVar19[2] + 0xc) = uVar2;
            }
            if ((uVar15 & 0x20) != 0) {
              uVar2 = vextractps_avx(auVar51._16_16_,3);
              *(undefined4 *)(pauVar19[2] + 0x1c) = uVar2;
            }
            if ((uVar15 & 0x40) != 0) {
              uVar2 = vextractps_avx(auVar28._0_16_,3);
              *(undefined4 *)(pauVar19[3] + 0xc) = uVar2;
            }
            if (cVar13 < '\0') {
              uVar2 = vextractps_avx(auVar28._16_16_,3);
              *(undefined4 *)(pauVar19[3] + 0x1c) = uVar2;
            }
          }
        }
      }
      uVar18 = uVar18 + 8;
      pauVar19 = pauVar19 + 4;
      lVar16 = lVar16 + 0x60;
    } while (uVar18 < (uVar14 & 0xfffffff8));
    if ((int)param_7 <= (int)uVar18) {
      return;
    }
  }
  iVar17 = (int)uVar18;
  auVar22._4_4_ = iVar17;
  auVar22._0_4_ = iVar17;
  auVar22._8_4_ = iVar17;
  auVar22._12_4_ = iVar17;
  auVar22._16_4_ = iVar17;
  auVar22._20_4_ = iVar17;
  auVar22._24_4_ = iVar17;
  auVar22._28_4_ = iVar17;
  auVar22 = vpor_avx2(auVar22,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar58._4_4_ = param_7;
  auVar58._0_4_ = param_7;
  auVar58._8_4_ = param_7;
  auVar58._12_4_ = param_7;
  auVar58._16_4_ = param_7;
  auVar58._20_4_ = param_7;
  auVar58._24_4_ = param_7;
  auVar58._28_4_ = param_7;
  auVar22 = vpcmpgtd_avx2(auVar58,auVar22);
  lVar16 = (longlong)(param_6 + iVar17);
  pauVar19 = (undefined1 (*) [32])(param_1 + lVar16 * 0x10);
  iVar17 = vmovmskps_avx(auVar22);
  if (iVar17 == 0xff) {
    auVar51 = vperm2f128_avx(*pauVar19,pauVar19[2],0x20);
    auVar28 = vperm2f128_avx(*pauVar19,pauVar19[2],0x31);
    auVar38 = vperm2f128_avx(pauVar19[1],pauVar19[3],0x20);
    auVar21 = vperm2f128_avx(pauVar19[1],pauVar19[3],0x31);
    auVar58 = vunpcklps_avx(auVar51,auVar28);
    auVar51 = vunpckhps_avx(auVar51,auVar28);
    auVar46 = vunpcklps_avx(auVar38,auVar21);
    auVar28 = vunpckhps_avx(auVar38,auVar21);
    auVar38 = vunpcklpd_avx(auVar58,auVar46);
    auVar58 = vunpckhpd_avx(auVar58,auVar46);
    auVar46 = vunpcklpd_avx(auVar51,auVar28);
    auVar51 = vunpckhpd_avx(auVar51,auVar28);
  }
  else {
    auVar38 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar22);
    auVar58 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar22);
    auVar46 = vgatherdps(ZEXT832(0),auVar22);
    auVar51 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar22);
  }
  auVar28 = vmaskmovps_avx(auVar22,auVar38);
  auVar58 = vmaskmovps_avx(auVar22,auVar58);
  auVar38 = vmaskmovps_avx(auVar22,auVar46);
  auVar46 = vcmpps_avx(auVar51,ZEXT1232(ZEXT812(0)),4);
  auVar46 = auVar22 & auVar46;
  if ((((((((SUB321(auVar46 >> 0x1f,0) & 1) != 0 || (SUB321(auVar46 >> 0x3f,0) & 1) != 0) ||
          (SUB321(auVar46 >> 0x5f,0) & 1) != 0) || SUB321(auVar46 >> 0x7f,0) != '\0') ||
        (SUB321(auVar46 >> 0x9f,0) & 1) != 0) || SUB321(auVar46 >> 0xbf,0) != '\0') ||
      (SUB321(auVar46 >> 0xdf,0) & 1) != 0) || auVar46[0x1f] < '\0') {
    pauVar1 = (undefined1 (*) [32])(param_2 + lVar16 * 0xc);
    if ((char)iVar17 == -1) {
      auVar46 = pauVar1[1];
      auVar21 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar46);
      auVar12 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,*pauVar1);
      auVar21 = vblendps_avx(auVar12,auVar21,0x88);
      auVar12 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar46);
      auVar39 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,pauVar1[2]);
      auVar12 = vblendps_avx(auVar39,auVar12,0x13);
      auVar47._16_16_ = auVar12._0_16_;
      auVar47._0_16_ = auVar21._0_16_;
      auVar76 = vperm2f128_avx(auVar21,auVar12,0x31);
      auVar46 = vblendps_avx(auVar46,*pauVar1,0x24);
      auVar46 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar46);
      auVar21 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,pauVar1[2]);
      auVar39 = vblendps_avx(auVar46,auVar21,0xe0);
      auVar46 = *(undefined1 (*) [32])(param_3 + lVar16 * 0xc);
      auVar21 = *(undefined1 (*) [32])(param_3 + 0x20 + lVar16 * 0xc);
      auVar12 = *(undefined1 (*) [32])(param_3 + 0x40 + lVar16 * 0xc);
      auVar52 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar21);
      auVar23 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar46);
      auVar52 = vblendps_avx(auVar23,auVar52,0x88);
      auVar23 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar21);
      auVar27 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,auVar12);
      auVar23 = vblendps_avx(auVar27,auVar23,0x13);
      auVar59._16_16_ = auVar23._0_16_;
      auVar59._0_16_ = auVar52._0_16_;
      auVar52 = vperm2f128_avx(auVar52,auVar23,0x31);
      auVar46 = vblendps_avx(auVar21,auVar46,0x24);
      auVar46 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar46);
      auVar21 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,auVar12);
      auVar46 = vblendps_avx(auVar46,auVar21,0xe0);
    }
    else {
      auVar47 = vgatherdps(ZEXT832(0) << 0x20,auVar22);
      auVar76 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar22);
      auVar39 = vgatherdps(ZEXT832(0),auVar22);
      auVar59 = vgatherdps(ZEXT832(0) << 0x20,auVar22);
      auVar52 = vgatherdps(ZEXT832(0),auVar22);
      auVar46 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar22);
    }
    fVar3 = param_5 + param_4;
    auVar73._0_4_ = -(fVar3 * auVar59._0_4_) + auVar47._0_4_;
    auVar73._4_4_ = -(fVar3 * auVar59._4_4_) + auVar47._4_4_;
    auVar73._8_4_ = -(fVar3 * auVar59._8_4_) + auVar47._8_4_;
    auVar73._12_4_ = -(fVar3 * auVar59._12_4_) + auVar47._12_4_;
    auVar73._16_4_ = -(fVar3 * auVar59._16_4_) + auVar47._16_4_;
    auVar73._20_4_ = -(fVar3 * auVar59._20_4_) + auVar47._20_4_;
    auVar73._24_4_ = -(fVar3 * auVar59._24_4_) + auVar47._24_4_;
    auVar73._28_4_ = -(fVar3 * auVar59._28_4_) + auVar47._28_4_;
    auVar71._0_4_ = -(fVar3 * auVar52._0_4_) + auVar76._0_4_;
    auVar71._4_4_ = -(fVar3 * auVar52._4_4_) + auVar76._4_4_;
    auVar71._8_4_ = -(fVar3 * auVar52._8_4_) + auVar76._8_4_;
    auVar71._12_4_ = -(fVar3 * auVar52._12_4_) + auVar76._12_4_;
    auVar71._16_4_ = -(fVar3 * auVar52._16_4_) + auVar76._16_4_;
    auVar71._20_4_ = -(fVar3 * auVar52._20_4_) + auVar76._20_4_;
    auVar71._24_4_ = -(fVar3 * auVar52._24_4_) + auVar76._24_4_;
    auVar71._28_4_ = -(fVar3 * auVar52._28_4_) + auVar76._28_4_;
    auVar62._0_4_ = -(auVar46._0_4_ * fVar3) + auVar39._0_4_;
    auVar62._4_4_ = -(auVar46._4_4_ * fVar3) + auVar39._4_4_;
    auVar62._8_4_ = -(auVar46._8_4_ * fVar3) + auVar39._8_4_;
    auVar62._12_4_ = -(auVar46._12_4_ * fVar3) + auVar39._12_4_;
    auVar62._16_4_ = -(auVar46._16_4_ * fVar3) + auVar39._16_4_;
    auVar62._20_4_ = -(auVar46._20_4_ * fVar3) + auVar39._20_4_;
    auVar62._24_4_ = -(auVar46._24_4_ * fVar3) + auVar39._24_4_;
    auVar62._28_4_ = -(auVar46._28_4_ * fVar3) + auVar39._28_4_;
    auVar28 = vsubps_avx(auVar28,auVar73);
    auVar58 = vsubps_avx(auVar58,auVar71);
    auVar38 = vsubps_avx(auVar38,auVar62);
    fVar3 = auVar58._0_4_;
    fVar10 = auVar58._4_4_;
    fVar4 = auVar58._8_4_;
    fVar5 = auVar58._12_4_;
    fVar6 = auVar58._16_4_;
    fVar7 = auVar58._20_4_;
    fVar8 = auVar58._24_4_;
    fVar9 = auVar58._28_4_;
    fVar26 = auVar28._0_4_;
    fVar30 = auVar28._4_4_;
    fVar31 = auVar28._8_4_;
    fVar32 = auVar28._12_4_;
    fVar33 = auVar28._16_4_;
    fVar34 = auVar28._20_4_;
    fVar35 = auVar28._24_4_;
    fVar36 = auVar28._28_4_;
    fVar54 = auVar38._0_4_;
    auVar40._0_4_ = fVar54 * fVar54 + fVar26 * fVar26 + fVar3 * fVar3;
    fVar55 = auVar38._4_4_;
    auVar40._4_4_ = fVar55 * fVar55 + fVar30 * fVar30 + fVar10 * fVar10;
    fVar64 = auVar38._8_4_;
    auVar40._8_4_ = fVar64 * fVar64 + fVar31 * fVar31 + fVar4 * fVar4;
    fVar65 = auVar38._12_4_;
    auVar40._12_4_ = fVar65 * fVar65 + fVar32 * fVar32 + fVar5 * fVar5;
    fVar66 = auVar38._16_4_;
    auVar40._16_4_ = fVar66 * fVar66 + fVar33 * fVar33 + fVar6 * fVar6;
    fVar67 = auVar38._20_4_;
    auVar40._20_4_ = fVar67 * fVar67 + fVar34 * fVar34 + fVar7 * fVar7;
    fVar68 = auVar38._24_4_;
    auVar40._24_4_ = fVar68 * fVar68 + fVar35 * fVar35 + fVar8 * fVar8;
    fVar69 = auVar38._28_4_;
    auVar40._28_4_ = fVar69 * fVar69 + fVar36 * fVar36 + fVar9 * fVar9;
    auVar58 = vsqrtps_avx(auVar40);
    auVar79._4_4_ = param_5;
    auVar79._0_4_ = param_5;
    auVar79._8_4_ = param_5;
    auVar79._12_4_ = param_5;
    auVar79._16_4_ = param_5;
    auVar79._20_4_ = param_5;
    auVar79._24_4_ = param_5;
    auVar79._28_4_ = param_5;
    auVar58 = vdivps_avx(auVar79,auVar58);
    fVar78 = auVar58._0_4_;
    fVar80 = auVar58._4_4_;
    fVar81 = auVar58._8_4_;
    fVar82 = auVar58._12_4_;
    fVar83 = auVar58._16_4_;
    fVar84 = auVar58._20_4_;
    fVar85 = auVar58._24_4_;
    fVar86 = auVar58._28_4_;
    auVar60._0_4_ = -(param_4 * auVar59._0_4_) + auVar47._0_4_;
    auVar60._4_4_ = -(param_4 * auVar59._4_4_) + auVar47._4_4_;
    auVar60._8_4_ = -(param_4 * auVar59._8_4_) + auVar47._8_4_;
    auVar60._12_4_ = -(param_4 * auVar59._12_4_) + auVar47._12_4_;
    auVar60._16_4_ = -(param_4 * auVar59._16_4_) + auVar47._16_4_;
    auVar60._20_4_ = -(param_4 * auVar59._20_4_) + auVar47._20_4_;
    auVar60._24_4_ = -(param_4 * auVar59._24_4_) + auVar47._24_4_;
    auVar60._28_4_ = -(param_4 * auVar59._28_4_) + auVar47._28_4_;
    param_5 = param_5 * param_5;
    auVar28._4_4_ = param_5;
    auVar28._0_4_ = param_5;
    auVar28._8_4_ = param_5;
    auVar28._12_4_ = param_5;
    auVar28._16_4_ = param_5;
    auVar28._20_4_ = param_5;
    auVar28._24_4_ = param_5;
    auVar28._28_4_ = param_5;
    auVar58 = vcmpps_avx(auVar40,auVar28,1);
    auVar29._4_4_ = __real_322bcc77;
    auVar29._0_4_ = __real_322bcc77;
    auVar29._8_4_ = __real_322bcc77;
    auVar29._12_4_ = __real_322bcc77;
    auVar29._16_4_ = __real_322bcc77;
    auVar29._20_4_ = __real_322bcc77;
    auVar29._24_4_ = __real_322bcc77;
    auVar29._28_4_ = __real_322bcc77;
    auVar28 = vcmpps_avx(auVar40,auVar29,1);
    uVar15 = auVar58._0_4_;
    auVar48._0_4_ = uVar15 & (uint)(fVar78 * fVar26 + auVar73._0_4_);
    uVar87 = auVar58._4_4_;
    auVar48._4_4_ = uVar87 & (uint)(fVar80 * fVar30 + auVar73._4_4_);
    uVar88 = auVar58._8_4_;
    auVar48._8_4_ = uVar88 & (uint)(fVar81 * fVar31 + auVar73._8_4_);
    uVar89 = auVar58._12_4_;
    auVar48._12_4_ = uVar89 & (uint)(fVar82 * fVar32 + auVar73._12_4_);
    uVar90 = auVar58._16_4_;
    auVar48._16_4_ = uVar90 & (uint)(fVar83 * fVar33 + auVar73._16_4_);
    uVar91 = auVar58._20_4_;
    auVar48._20_4_ = uVar91 & (uint)(fVar84 * fVar34 + auVar73._20_4_);
    uVar92 = auVar58._24_4_;
    auVar48._24_4_ = uVar92 & (uint)(fVar85 * fVar35 + auVar73._24_4_);
    uVar94 = auVar58._28_4_;
    auVar48._28_4_ = uVar94 & (uint)(fVar86 * fVar36 + auVar73._28_4_);
    auVar58 = vblendvps_avx(auVar48,auVar60,auVar28);
    auVar38 = vcmpps_avx(auVar51,ZEXT432(0) << 0x20,4);
    auVar21 = vcmpps_avx(auVar58,ZEXT432(0) << 0x20,4);
    auVar23._0_4_ = auVar21._0_4_ & auVar38._0_4_ & auVar22._0_4_;
    auVar23._4_4_ = auVar21._4_4_ & auVar38._4_4_ & auVar22._4_4_;
    auVar23._8_4_ = auVar21._8_4_ & auVar38._8_4_ & auVar22._8_4_;
    auVar23._12_4_ = auVar21._12_4_ & auVar38._12_4_ & auVar22._12_4_;
    auVar23._16_4_ = auVar21._16_4_ & auVar38._16_4_ & auVar22._16_4_;
    auVar23._20_4_ = auVar21._20_4_ & auVar38._20_4_ & auVar22._20_4_;
    auVar23._24_4_ = auVar21._24_4_ & auVar38._24_4_ & auVar22._24_4_;
    auVar23._28_4_ = auVar21._28_4_ & auVar38._28_4_ & auVar22._28_4_;
    uVar14 = vmovmskps_avx(auVar23);
    if (uVar14 != 0) {
      auVar53._0_4_ = -(param_4 * auVar52._0_4_) + auVar76._0_4_;
      auVar53._4_4_ = -(param_4 * auVar52._4_4_) + auVar76._4_4_;
      auVar53._8_4_ = -(param_4 * auVar52._8_4_) + auVar76._8_4_;
      auVar53._12_4_ = -(param_4 * auVar52._12_4_) + auVar76._12_4_;
      auVar53._16_4_ = -(param_4 * auVar52._16_4_) + auVar76._16_4_;
      auVar53._20_4_ = -(param_4 * auVar52._20_4_) + auVar76._20_4_;
      auVar53._24_4_ = -(param_4 * auVar52._24_4_) + auVar76._24_4_;
      auVar53._28_4_ = -(param_4 * auVar52._28_4_) + auVar76._28_4_;
      auVar50._0_4_ = -(param_4 * auVar46._0_4_) + auVar39._0_4_;
      auVar50._4_4_ = -(param_4 * auVar46._4_4_) + auVar39._4_4_;
      auVar50._8_4_ = -(param_4 * auVar46._8_4_) + auVar39._8_4_;
      auVar50._12_4_ = -(param_4 * auVar46._12_4_) + auVar39._12_4_;
      auVar50._16_4_ = -(param_4 * auVar46._16_4_) + auVar39._16_4_;
      auVar50._20_4_ = -(param_4 * auVar46._20_4_) + auVar39._20_4_;
      auVar50._24_4_ = -(param_4 * auVar46._24_4_) + auVar39._24_4_;
      auVar50._28_4_ = -(param_4 * auVar46._28_4_) + auVar39._28_4_;
      auVar24._0_4_ = uVar15 & (uint)(fVar78 * fVar3 + auVar71._0_4_);
      auVar24._4_4_ = uVar87 & (uint)(fVar80 * fVar10 + auVar71._4_4_);
      auVar24._8_4_ = uVar88 & (uint)(fVar81 * fVar4 + auVar71._8_4_);
      auVar24._12_4_ = uVar89 & (uint)(fVar82 * fVar5 + auVar71._12_4_);
      auVar24._16_4_ = uVar90 & (uint)(fVar83 * fVar6 + auVar71._16_4_);
      auVar24._20_4_ = uVar91 & (uint)(fVar84 * fVar7 + auVar71._20_4_);
      auVar24._24_4_ = uVar92 & (uint)(fVar85 * fVar8 + auVar71._24_4_);
      auVar24._28_4_ = uVar94 & (uint)(fVar86 * fVar9 + auVar71._28_4_);
      auVar22 = vblendvps_avx(auVar24,auVar53,auVar28);
      auVar25._0_4_ = uVar15 & (uint)(fVar78 * fVar54 + auVar62._0_4_);
      auVar25._4_4_ = uVar87 & (uint)(fVar80 * fVar55 + auVar62._4_4_);
      auVar25._8_4_ = uVar88 & (uint)(fVar81 * fVar64 + auVar62._8_4_);
      auVar25._12_4_ = uVar89 & (uint)(fVar82 * fVar65 + auVar62._12_4_);
      auVar25._16_4_ = uVar90 & (uint)(fVar83 * fVar66 + auVar62._16_4_);
      auVar25._20_4_ = uVar91 & (uint)(fVar84 * fVar67 + auVar62._20_4_);
      auVar25._24_4_ = uVar92 & (uint)(fVar85 * fVar68 + auVar62._24_4_);
      auVar25._28_4_ = uVar94 & (uint)(fVar86 * fVar69 + auVar62._28_4_);
      auVar28 = vblendvps_avx(auVar25,auVar50,auVar28);
      cVar13 = (char)uVar14;
      if (cVar13 == -1) {
        auVar38 = vunpcklps_avx(auVar58,auVar22);
        auVar21 = vunpcklps_avx(auVar28,auVar51);
        auVar46 = vunpcklpd_avx(auVar38,auVar21);
        auVar38 = vunpckhpd_avx(auVar38,auVar21);
        auVar22 = vunpckhps_avx(auVar58,auVar22);
        auVar58 = vunpckhps_avx(auVar28,auVar51);
        auVar51 = vunpcklpd_avx(auVar22,auVar58);
        auVar49._16_16_ = auVar38._0_16_;
        auVar49._0_16_ = auVar46._0_16_;
        *pauVar19 = auVar49;
        auVar22 = vunpckhpd_avx(auVar22,auVar58);
        auVar41._16_16_ = auVar22._0_16_;
        auVar41._0_16_ = auVar51._0_16_;
        pauVar19[1] = auVar41;
        auVar58 = vperm2f128_avx(auVar46,auVar38,0x31);
        pauVar19[2] = auVar58;
        auVar22 = vperm2f128_avx(auVar51,auVar22,0x31);
        pauVar19[3] = auVar22;
      }
      else {
        auVar72 = auVar51._0_16_;
        auVar74 = auVar51._16_16_;
        auVar56 = auVar58._0_16_;
        auVar61 = auVar58._16_16_;
        auVar43 = auVar22._0_16_;
        auVar44 = auVar22._16_16_;
        auVar37 = auVar28._0_16_;
        auVar42 = auVar28._16_16_;
        if ((uVar14 & 1) != 0) {
          *(int *)*pauVar19 = auVar58._0_4_;
        }
        if ((uVar14 & 2) != 0) {
          uVar2 = vextractps_avx(auVar56,1);
          *(undefined4 *)(*pauVar19 + 0x10) = uVar2;
        }
        if ((uVar14 & 4) != 0) {
          uVar2 = vextractps_avx(auVar56,2);
          *(undefined4 *)pauVar19[1] = uVar2;
        }
        if ((uVar14 & 8) != 0) {
          uVar2 = vextractps_avx(auVar56,3);
          *(undefined4 *)(pauVar19[1] + 0x10) = uVar2;
        }
        if ((uVar14 & 0x10) != 0) {
          *(int *)pauVar19[2] = auVar58._16_4_;
        }
        if ((uVar14 & 0x20) != 0) {
          uVar2 = vextractps_avx(auVar61,1);
          *(undefined4 *)(pauVar19[2] + 0x10) = uVar2;
        }
        if ((uVar14 & 0x40) != 0) {
          uVar2 = vextractps_avx(auVar61,2);
          *(undefined4 *)pauVar19[3] = uVar2;
        }
        if (cVar13 < '\0') {
          uVar2 = vextractps_avx(auVar61,3);
          *(undefined4 *)(pauVar19[3] + 0x10) = uVar2;
        }
        if ((uVar14 & 1) != 0) {
          *(int *)(*pauVar19 + 4) = auVar22._0_4_;
        }
        if ((uVar14 & 2) != 0) {
          uVar2 = vextractps_avx(auVar43,1);
          *(undefined4 *)(*pauVar19 + 0x14) = uVar2;
        }
        if ((uVar14 & 4) != 0) {
          uVar2 = vextractps_avx(auVar43,2);
          *(undefined4 *)(pauVar19[1] + 4) = uVar2;
        }
        if ((uVar14 & 8) != 0) {
          uVar2 = vextractps_avx(auVar43,3);
          *(undefined4 *)(pauVar19[1] + 0x14) = uVar2;
        }
        if ((uVar14 & 0x10) != 0) {
          *(int *)(pauVar19[2] + 4) = auVar22._16_4_;
        }
        if ((uVar14 & 0x20) != 0) {
          uVar2 = vextractps_avx(auVar44,1);
          *(undefined4 *)(pauVar19[2] + 0x14) = uVar2;
        }
        if ((uVar14 & 0x40) != 0) {
          uVar2 = vextractps_avx(auVar44,2);
          *(undefined4 *)(pauVar19[3] + 4) = uVar2;
        }
        if (cVar13 < '\0') {
          uVar2 = vextractps_avx(auVar44,3);
          *(undefined4 *)(pauVar19[3] + 0x14) = uVar2;
        }
        if ((uVar14 & 1) != 0) {
          *(int *)(*pauVar19 + 8) = auVar28._0_4_;
        }
        if ((uVar14 & 2) != 0) {
          uVar2 = vextractps_avx(auVar37,1);
          *(undefined4 *)(*pauVar19 + 0x18) = uVar2;
        }
        if ((uVar14 & 4) != 0) {
          uVar2 = vextractps_avx(auVar37,2);
          *(undefined4 *)(pauVar19[1] + 8) = uVar2;
        }
        if ((uVar14 & 8) != 0) {
          uVar2 = vextractps_avx(auVar37,3);
          *(undefined4 *)(pauVar19[1] + 0x18) = uVar2;
        }
        if ((uVar14 & 0x10) != 0) {
          *(int *)(pauVar19[2] + 8) = auVar28._16_4_;
        }
        if ((uVar14 & 0x20) != 0) {
          uVar2 = vextractps_avx(auVar42,1);
          *(undefined4 *)(pauVar19[2] + 0x18) = uVar2;
        }
        if ((uVar14 & 0x40) != 0) {
          uVar2 = vextractps_avx(auVar42,2);
          *(undefined4 *)(pauVar19[3] + 8) = uVar2;
        }
        if (cVar13 < '\0') {
          uVar2 = vextractps_avx(auVar42,3);
          *(undefined4 *)(pauVar19[3] + 0x18) = uVar2;
        }
        if ((uVar14 & 1) != 0) {
          *(int *)(*pauVar19 + 0xc) = auVar51._0_4_;
        }
        if ((uVar14 & 2) != 0) {
          uVar2 = vextractps_avx(auVar72,1);
          *(undefined4 *)(*pauVar19 + 0x1c) = uVar2;
        }
        if ((uVar14 & 4) != 0) {
          uVar2 = vextractps_avx(auVar72,2);
          *(undefined4 *)(pauVar19[1] + 0xc) = uVar2;
        }
        if ((uVar14 & 8) != 0) {
          uVar2 = vextractps_avx(auVar72,3);
          *(undefined4 *)(pauVar19[1] + 0x1c) = uVar2;
        }
        if ((uVar14 & 0x10) != 0) {
          *(int *)(pauVar19[2] + 0xc) = auVar51._16_4_;
        }
        if ((uVar14 & 0x20) != 0) {
          uVar2 = vextractps_avx(auVar74,1);
          *(undefined4 *)(pauVar19[2] + 0x1c) = uVar2;
        }
        if ((uVar14 & 0x40) != 0) {
          uVar2 = vextractps_avx(auVar74,2);
          *(undefined4 *)(pauVar19[3] + 0xc) = uVar2;
        }
        if (cVar13 < '\0') {
          uVar2 = vextractps_avx(auVar74,3);
          *(undefined4 *)(pauVar19[3] + 0x1c) = uVar2;
        }
      }
    }
  }
  return;
}

// ApplySphericalBackstopConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_CunfCuniCuni_avx2 @ 1403248c0

void ApplySphericalBackstopConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_CunfCuniCuni_avx2
               (void)

{
  ApplySphericalBackstopConstraintsWithMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_CunfCunfCunfCunfCuniCuni_avx2
            ();
  return;
}

// ApplySphericalConstraintsWithMap_avx2 @ 140324930

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplySphericalConstraintsWithMap_avx2
               (longlong param_1,longlong param_2,longlong param_3,float param_4,float param_5,
               int param_6,uint param_7)

{
  float *pfVar1;
  undefined1 (*pauVar2) [32];
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 (*pauVar17) [32];
  int iVar18;
  longlong lVar19;
  uint uVar20;
  float fVar21;
  float fVar25;
  float fVar26;
  undefined1 auVar22 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  float fVar31;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  float fVar41;
  undefined1 auVar34 [32];
  undefined1 auVar42 [16];
  undefined1 auVar43 [32];
  float fVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  float fVar51;
  undefined1 auVar50 [16];
  undefined1 auVar49 [32];
  undefined1 auVar52 [16];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar58 [16];
  undefined1 auVar57 [32];
  undefined1 auVar59 [16];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [16];
  undefined1 auVar48 [32];
  undefined1 auVar56 [32];
  undefined1 auVar60 [32];
  undefined1 auVar69 [32];
  
  uVar14 = param_7 + 7;
  if (-1 < (int)param_7) {
    uVar14 = param_7;
  }
  if ((int)(uVar14 & 0xfffffff8) < 1) {
    uVar15 = 0;
    if ((int)param_7 < 1) {
      return;
    }
  }
  else {
    lVar19 = (longlong)param_6 * 0x10 + param_1;
    pauVar17 = (undefined1 (*) [32])(param_2 + (longlong)param_6 * 0xc + 0x40);
    uVar16 = 0;
    uVar15 = 0;
    do {
      auVar23 = *(undefined1 (*) [32])(lVar19 + uVar16 * 4);
      auVar46 = *(undefined1 (*) [32])(lVar19 + 0x20 + uVar16 * 4);
      auVar34 = *(undefined1 (*) [32])(lVar19 + 0x40 + uVar16 * 4);
      auVar67 = *(undefined1 (*) [32])(lVar19 + 0x60 + uVar16 * 4);
      auVar69 = vperm2f128_avx(auVar23,auVar34,0x20);
      auVar32 = vperm2f128_avx(auVar23,auVar34,0x31);
      auVar33 = vperm2f128_avx(auVar46,auVar67,0x20);
      auVar53 = vperm2f128_avx(auVar46,auVar67,0x31);
      auVar62 = vunpckhps_avx(auVar69,auVar32);
      auVar60 = vunpckhps_avx(auVar33,auVar53);
      auVar55 = vunpckhpd_avx(auVar62,auVar60);
      auVar43 = vcmpps_avx(auVar55,
                           ___ymm_0000000000000000000000000000000000000000000000000000000000000000,4
                          );
      if ((((((((SUB321(auVar43 >> 0x1f,0) & 1) != 0 || (SUB321(auVar43 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar43 >> 0x5f,0) & 1) != 0) || SUB321(auVar43 >> 0x7f,0) != '\0') ||
            (SUB321(auVar43 >> 0x9f,0) & 1) != 0) || SUB321(auVar43 >> 0xbf,0) != '\0') ||
          (SUB321(auVar43 >> 0xdf,0) & 1) != 0) || auVar43[0x1f] < '\0') {
        auVar54 = vunpcklpd_avx(auVar62,auVar60);
        auVar62 = vunpcklps_avx(auVar69,auVar32);
        auVar60 = vunpcklps_avx(auVar33,auVar53);
        auVar33 = vunpckhpd_avx(auVar62,auVar60);
        auVar32 = vunpcklpd_avx(auVar62,auVar60);
        auVar62 = pauVar17[-1];
        auVar60 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                               ,auVar62);
        auVar69 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,pauVar17[-2]);
        auVar60 = vblendps_avx(auVar69,auVar60,0x88);
        auVar69 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                               ,auVar62);
        auVar53 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,*pauVar17);
        auVar69 = vblendps_avx(auVar53,auVar69,0x13);
        auVar63._16_16_ = auVar69._0_16_;
        auVar63._0_16_ = auVar60._0_16_;
        auVar47 = vperm2f128_avx(auVar60,auVar69,0x31);
        auVar62 = vblendps_avx(auVar62,pauVar17[-2],0x24);
        auVar62 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar62);
        auVar53._16_16_ = ___xmm_00000007000000040000000100000000;
        auVar53._0_16_ = ___xmm_00000007000000040000000100000000;
        auVar53 = vpermps_avx2(auVar53,*pauVar17);
        auVar62 = vblendps_avx(auVar62,auVar53,0xe0);
        auVar32 = vsubps_avx(auVar32,auVar63);
        auVar33 = vsubps_avx(auVar33,auVar47);
        auVar53 = vsubps_avx(auVar54,auVar62);
        fVar4 = auVar33._0_4_;
        fVar5 = auVar33._4_4_;
        fVar6 = auVar33._8_4_;
        fVar7 = auVar33._12_4_;
        fVar8 = auVar33._16_4_;
        fVar9 = auVar33._20_4_;
        fVar10 = auVar33._24_4_;
        fVar11 = auVar33._28_4_;
        fVar35 = auVar32._0_4_;
        fVar36 = auVar32._4_4_;
        fVar37 = auVar32._8_4_;
        fVar38 = auVar32._12_4_;
        fVar39 = auVar32._16_4_;
        fVar40 = auVar32._20_4_;
        fVar41 = auVar32._24_4_;
        fVar44 = auVar32._28_4_;
        fVar25 = auVar53._0_4_;
        auVar66._0_4_ = fVar25 * fVar25 + fVar35 * fVar35 + fVar4 * fVar4;
        fVar26 = auVar53._4_4_;
        auVar66._4_4_ = fVar26 * fVar26 + fVar36 * fVar36 + fVar5 * fVar5;
        fVar27 = auVar53._8_4_;
        auVar66._8_4_ = fVar27 * fVar27 + fVar37 * fVar37 + fVar6 * fVar6;
        fVar28 = auVar53._12_4_;
        auVar66._12_4_ = fVar28 * fVar28 + fVar38 * fVar38 + fVar7 * fVar7;
        fVar29 = auVar53._16_4_;
        auVar66._16_4_ = fVar29 * fVar29 + fVar39 * fVar39 + fVar8 * fVar8;
        fVar30 = auVar53._20_4_;
        auVar66._20_4_ = fVar30 * fVar30 + fVar40 * fVar40 + fVar9 * fVar9;
        fVar31 = auVar53._24_4_;
        auVar66._24_4_ = fVar31 * fVar31 + fVar41 * fVar41 + fVar10 * fVar10;
        fVar51 = auVar53._28_4_;
        auVar66._28_4_ = fVar51 * fVar51 + fVar44 * fVar44 + fVar11 * fVar11;
        pfVar1 = (float *)(param_3 + (uVar16 & 0xffffffff));
        auVar54._0_4_ = param_5 * *pfVar1 + param_4;
        auVar54._4_4_ = param_5 * pfVar1[1] + param_4;
        auVar54._8_4_ = param_5 * pfVar1[2] + param_4;
        auVar54._12_4_ = param_5 * pfVar1[3] + param_4;
        auVar54._16_4_ = param_5 * pfVar1[4] + param_4;
        auVar54._20_4_ = param_5 * pfVar1[5] + param_4;
        auVar54._24_4_ = param_5 * pfVar1[6] + param_4;
        auVar54._28_4_ = param_5 * pfVar1[7] + param_4;
        auVar32._0_4_ = auVar54._0_4_ * auVar54._0_4_ + __real_322bcc77;
        auVar32._4_4_ = auVar54._4_4_ * auVar54._4_4_ + __real_322bcc77;
        auVar32._8_4_ = auVar54._8_4_ * auVar54._8_4_ + __real_322bcc77;
        auVar32._12_4_ = auVar54._12_4_ * auVar54._12_4_ + __real_322bcc77;
        auVar32._16_4_ = auVar54._16_4_ * auVar54._16_4_ + __real_322bcc77;
        auVar32._20_4_ = auVar54._20_4_ * auVar54._20_4_ + __real_322bcc77;
        auVar32._24_4_ = auVar54._24_4_ * auVar54._24_4_ + __real_322bcc77;
        auVar32._28_4_ = auVar54._28_4_ * auVar54._28_4_ + __real_322bcc77;
        auVar32 = vcmpps_avx(auVar32,auVar66,1);
        auVar33._0_4_ = auVar32._0_4_ & auVar43._0_4_;
        auVar33._4_4_ = auVar32._4_4_ & auVar43._4_4_;
        auVar33._8_4_ = auVar32._8_4_ & auVar43._8_4_;
        auVar33._12_4_ = auVar32._12_4_ & auVar43._12_4_;
        auVar33._16_4_ = auVar32._16_4_ & auVar43._16_4_;
        auVar33._20_4_ = auVar32._20_4_ & auVar43._20_4_;
        auVar33._24_4_ = auVar32._24_4_ & auVar43._24_4_;
        auVar33._28_4_ = auVar32._28_4_ & auVar43._28_4_;
        uVar20 = vmovmskps_avx(auVar33);
        if (uVar20 != 0) {
          auVar43 = vsqrtps_avx(auVar66);
          auVar43 = vdivps_avx(auVar54,auVar43);
          fVar21 = auVar43._0_4_;
          auVar59._0_4_ = fVar21 * fVar35 + auVar60._0_4_;
          fVar35 = auVar43._4_4_;
          auVar59._4_4_ = fVar35 * fVar36 + auVar60._4_4_;
          fVar36 = auVar43._8_4_;
          auVar59._8_4_ = fVar36 * fVar37 + auVar60._8_4_;
          fVar37 = auVar43._12_4_;
          auVar59._12_4_ = fVar37 * fVar38 + auVar60._12_4_;
          fVar38 = auVar43._16_4_;
          auVar60._16_4_ = fVar38 * fVar39 + auVar69._0_4_;
          auVar60._0_16_ = auVar59;
          fVar39 = auVar43._20_4_;
          auVar60._20_4_ = fVar39 * fVar40 + auVar69._4_4_;
          fVar40 = auVar43._24_4_;
          auVar60._24_4_ = fVar40 * fVar41 + auVar69._8_4_;
          fVar41 = auVar43._28_4_;
          auVar60._28_4_ = fVar41 * fVar44 + auVar69._12_4_;
          auVar22._0_4_ = fVar21 * fVar4 + auVar47._0_4_;
          auVar22._4_4_ = fVar35 * fVar5 + auVar47._4_4_;
          auVar22._8_4_ = fVar36 * fVar6 + auVar47._8_4_;
          auVar22._12_4_ = fVar37 * fVar7 + auVar47._12_4_;
          auVar43._16_4_ = fVar38 * fVar8 + auVar47._16_4_;
          auVar43._0_16_ = auVar22;
          auVar43._20_4_ = fVar39 * fVar9 + auVar47._20_4_;
          auVar43._24_4_ = fVar40 * fVar10 + auVar47._24_4_;
          auVar43._28_4_ = fVar41 * fVar11 + auVar47._28_4_;
          auVar68._0_4_ = fVar21 * fVar25 + auVar62._0_4_;
          auVar68._4_4_ = fVar35 * fVar26 + auVar62._4_4_;
          auVar68._8_4_ = fVar36 * fVar27 + auVar62._8_4_;
          auVar68._12_4_ = fVar37 * fVar28 + auVar62._12_4_;
          auVar69._16_4_ = fVar38 * fVar29 + auVar62._16_4_;
          auVar69._0_16_ = auVar68;
          auVar69._20_4_ = fVar39 * fVar30 + auVar62._20_4_;
          auVar69._24_4_ = fVar40 * fVar31 + auVar62._24_4_;
          auVar69._28_4_ = fVar41 * fVar51 + auVar62._28_4_;
          cVar12 = (char)uVar20;
          if (cVar12 == -1) {
            auVar23 = vunpcklps_avx(auVar60,auVar43);
            auVar46 = vunpcklps_avx(auVar69,auVar55);
            auVar67 = vunpcklpd_avx(auVar23,auVar46);
            auVar23 = vunpckhpd_avx(auVar23,auVar46);
            auVar46 = vunpckhps_avx(auVar60,auVar43);
            auVar34 = vunpckhps_avx(auVar69,auVar55);
            auVar43 = vunpcklpd_avx(auVar46,auVar34);
            auVar55._16_16_ = auVar23._0_16_;
            auVar55._0_16_ = auVar67._0_16_;
            *(undefined1 (*) [32])(lVar19 + uVar16 * 4) = auVar55;
            auVar46 = vunpckhpd_avx(auVar46,auVar34);
            auVar34._16_16_ = auVar46._0_16_;
            auVar34._0_16_ = auVar43._0_16_;
            *(undefined1 (*) [32])(lVar19 + 0x20 + uVar16 * 4) = auVar34;
            auVar23 = vperm2f128_avx(auVar67,auVar23,0x31);
            *(undefined1 (*) [32])(lVar19 + 0x40 + uVar16 * 4) = auVar23;
            auVar23 = vperm2f128_avx(auVar43,auVar46,0x31);
            *(undefined1 (*) [32])(lVar19 + 0x60 + uVar16 * 4) = auVar23;
          }
          else {
            auVar42 = auVar43._16_16_;
            auVar45 = auVar60._16_16_;
            auVar52 = auVar69._16_16_;
            if ((uVar20 & 1) != 0) {
              *(float *)(lVar19 + uVar16 * 4) = auVar59._0_4_;
            }
            if ((uVar20 & 2) != 0) {
              uVar3 = vextractps_avx(auVar59,1);
              *(undefined4 *)(lVar19 + 0x10 + uVar16 * 4) = uVar3;
            }
            if ((uVar20 & 4) != 0) {
              uVar3 = vextractps_avx(auVar59,2);
              *(undefined4 *)(lVar19 + 0x20 + uVar16 * 4) = uVar3;
            }
            if ((uVar20 & 8) != 0) {
              uVar3 = vextractps_avx(auVar59,3);
              *(undefined4 *)(lVar19 + 0x30 + uVar16 * 4) = uVar3;
            }
            if ((uVar20 & 0x10) != 0) {
              *(float *)(lVar19 + 0x40 + uVar16 * 4) = auVar60._16_4_;
            }
            if ((uVar20 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar45,1);
              *(undefined4 *)(lVar19 + 0x50 + uVar16 * 4) = uVar3;
            }
            if ((uVar20 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar45,2);
              *(undefined4 *)(lVar19 + 0x60 + uVar16 * 4) = uVar3;
            }
            if (cVar12 < '\0') {
              uVar3 = vextractps_avx(auVar45,3);
              *(undefined4 *)(lVar19 + 0x70 + uVar16 * 4) = uVar3;
            }
            if ((uVar20 & 1) != 0) {
              *(float *)(lVar19 + 4 + uVar16 * 4) = auVar22._0_4_;
            }
            if ((uVar20 & 2) != 0) {
              uVar3 = vextractps_avx(auVar22,1);
              *(undefined4 *)(lVar19 + 0x14 + uVar16 * 4) = uVar3;
            }
            if ((uVar20 & 4) != 0) {
              uVar3 = vextractps_avx(auVar22,2);
              *(undefined4 *)(lVar19 + 0x24 + uVar16 * 4) = uVar3;
            }
            if ((uVar20 & 8) != 0) {
              uVar3 = vextractps_avx(auVar22,3);
              *(undefined4 *)(lVar19 + 0x34 + uVar16 * 4) = uVar3;
            }
            if ((uVar20 & 0x10) != 0) {
              *(float *)(lVar19 + 0x44 + uVar16 * 4) = auVar43._16_4_;
            }
            if ((uVar20 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar42,1);
              *(undefined4 *)(lVar19 + 0x54 + uVar16 * 4) = uVar3;
            }
            if ((uVar20 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar42,2);
              *(undefined4 *)(lVar19 + 100 + uVar16 * 4) = uVar3;
            }
            if (cVar12 < '\0') {
              uVar3 = vextractps_avx(auVar42,3);
              *(undefined4 *)(lVar19 + 0x74 + uVar16 * 4) = uVar3;
            }
            if ((uVar20 & 1) != 0) {
              *(float *)(lVar19 + 8 + uVar16 * 4) = auVar68._0_4_;
            }
            if ((uVar20 & 2) != 0) {
              uVar3 = vextractps_avx(auVar68,1);
              *(undefined4 *)(lVar19 + 0x18 + uVar16 * 4) = uVar3;
            }
            if ((uVar20 & 4) != 0) {
              uVar3 = vextractps_avx(auVar68,2);
              *(undefined4 *)(lVar19 + 0x28 + uVar16 * 4) = uVar3;
            }
            if ((uVar20 & 8) != 0) {
              uVar3 = vextractps_avx(auVar68,3);
              *(undefined4 *)(lVar19 + 0x38 + uVar16 * 4) = uVar3;
            }
            if ((uVar20 & 0x10) != 0) {
              *(float *)(lVar19 + 0x48 + uVar16 * 4) = auVar69._16_4_;
            }
            if ((uVar20 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar52,1);
              *(undefined4 *)(lVar19 + 0x58 + uVar16 * 4) = uVar3;
            }
            if ((uVar20 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar52,2);
              *(undefined4 *)(lVar19 + 0x68 + uVar16 * 4) = uVar3;
            }
            if (cVar12 < '\0') {
              uVar3 = vextractps_avx(auVar52,3);
              *(undefined4 *)(lVar19 + 0x78 + uVar16 * 4) = uVar3;
            }
            if ((uVar20 & 1) != 0) {
              uVar3 = vextractps_avx(auVar23._0_16_,3);
              *(undefined4 *)(lVar19 + 0xc + uVar16 * 4) = uVar3;
            }
            if ((uVar20 & 2) != 0) {
              uVar3 = vextractps_avx(auVar23._16_16_,3);
              *(undefined4 *)(lVar19 + 0x1c + uVar16 * 4) = uVar3;
            }
            if ((uVar20 & 4) != 0) {
              uVar3 = vextractps_avx(auVar46._0_16_,3);
              *(undefined4 *)(lVar19 + 0x2c + uVar16 * 4) = uVar3;
            }
            if ((uVar20 & 8) != 0) {
              uVar3 = vextractps_avx(auVar46._16_16_,3);
              *(undefined4 *)(lVar19 + 0x3c + uVar16 * 4) = uVar3;
            }
            if ((uVar20 & 0x10) != 0) {
              uVar3 = vextractps_avx(auVar34._0_16_,3);
              *(undefined4 *)(lVar19 + 0x4c + uVar16 * 4) = uVar3;
            }
            if ((uVar20 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar34._16_16_,3);
              *(undefined4 *)(lVar19 + 0x5c + uVar16 * 4) = uVar3;
            }
            if ((uVar20 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar67._0_16_,3);
              *(undefined4 *)(lVar19 + 0x6c + uVar16 * 4) = uVar3;
            }
            if (cVar12 < '\0') {
              uVar3 = vextractps_avx(auVar67._16_16_,3);
              *(undefined4 *)(lVar19 + 0x7c + uVar16 * 4) = uVar3;
            }
          }
        }
      }
      uVar15 = uVar15 + 8;
      uVar16 = uVar16 + 0x20;
      pauVar17 = pauVar17 + 3;
    } while (uVar15 < (uVar14 & 0xfffffff8));
    if ((int)param_7 <= (int)uVar15) {
      return;
    }
  }
  iVar13 = (int)uVar15;
  auVar23._4_4_ = iVar13;
  auVar23._0_4_ = iVar13;
  auVar23._8_4_ = iVar13;
  auVar23._12_4_ = iVar13;
  auVar23._16_4_ = iVar13;
  auVar23._20_4_ = iVar13;
  auVar23._24_4_ = iVar13;
  auVar23._28_4_ = iVar13;
  auVar23 = vpor_avx2(auVar23,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar46._4_4_ = param_7;
  auVar46._0_4_ = param_7;
  auVar46._8_4_ = param_7;
  auVar46._12_4_ = param_7;
  auVar46._16_4_ = param_7;
  auVar46._20_4_ = param_7;
  auVar46._24_4_ = param_7;
  auVar46._28_4_ = param_7;
  auVar23 = vpcmpgtd_avx2(auVar46,auVar23);
  pauVar17 = (undefined1 (*) [32])(param_1 + (longlong)(param_6 + iVar13) * 0x10);
  iVar18 = vmovmskps_avx(auVar23);
  if (iVar18 == 0xff) {
    auVar34 = vperm2f128_avx(*pauVar17,pauVar17[2],0x20);
    auVar67 = vperm2f128_avx(*pauVar17,pauVar17[2],0x31);
    auVar43 = vperm2f128_avx(pauVar17[1],pauVar17[3],0x20);
    auVar62 = vperm2f128_avx(pauVar17[1],pauVar17[3],0x31);
    auVar46 = vunpcklps_avx(auVar34,auVar67);
    auVar34 = vunpckhps_avx(auVar34,auVar67);
    auVar55 = vunpcklps_avx(auVar43,auVar62);
    auVar67 = vunpckhps_avx(auVar43,auVar62);
    auVar43 = vunpcklpd_avx(auVar46,auVar55);
    auVar46 = vunpckhpd_avx(auVar46,auVar55);
    auVar55 = vunpcklpd_avx(auVar34,auVar67);
    auVar34 = vunpckhpd_avx(auVar34,auVar67);
  }
  else {
    auVar43 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar23);
    auVar46 = vgatherdps(ZEXT832(0),auVar23);
    auVar55 = vgatherdps(ZEXT832(0),auVar23);
    auVar34 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar23);
  }
  auVar67 = vmaskmovps_avx(auVar23,auVar43);
  auVar46 = vmaskmovps_avx(auVar23,auVar46);
  auVar43 = vmaskmovps_avx(auVar23,auVar55);
  auVar55 = vcmpps_avx(auVar34,ZEXT832(0) << 0x20,4);
  auVar55 = auVar23 & auVar55;
  if ((((((((SUB321(auVar55 >> 0x1f,0) & 1) != 0 || (SUB321(auVar55 >> 0x3f,0) & 1) != 0) ||
          (SUB321(auVar55 >> 0x5f,0) & 1) != 0) || SUB321(auVar55 >> 0x7f,0) != '\0') ||
        (SUB321(auVar55 >> 0x9f,0) & 1) != 0) || SUB321(auVar55 >> 0xbf,0) != '\0') ||
      (SUB321(auVar55 >> 0xdf,0) & 1) != 0) || auVar55[0x1f] < '\0') {
    pauVar2 = (undefined1 (*) [32])(param_2 + (longlong)(param_6 + iVar13) * 0xc);
    if ((char)iVar18 == -1) {
      auVar55 = pauVar2[1];
      auVar62 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                             ,auVar55);
      auVar60 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,*pauVar2);
      auVar62 = vblendps_avx(auVar60,auVar62,0x88);
      auVar60 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                             ,auVar55);
      auVar69 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,pauVar2[2]);
      auVar60 = vblendps_avx(auVar69,auVar60,0x13);
      auVar61._16_16_ = auVar60._0_16_;
      auVar61._0_16_ = auVar62._0_16_;
      auVar62 = vperm2f128_avx(auVar62,auVar60,0x31);
      auVar55 = vblendps_avx(auVar55,*pauVar2,0x24);
      auVar55 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar55);
      auVar47._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar47._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar60 = vpermps_avx2(auVar47,pauVar2[2]);
      auVar55 = vblendps_avx(auVar55,auVar60,0xe0);
    }
    else {
      auVar61 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar23);
      auVar62 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar23);
      auVar55 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar23);
    }
    auVar67 = vsubps_avx(auVar67,auVar61);
    auVar46 = vsubps_avx(auVar46,auVar62);
    auVar43 = vsubps_avx(auVar43,auVar55);
    fVar4 = auVar46._0_4_;
    fVar5 = auVar46._4_4_;
    fVar6 = auVar46._8_4_;
    fVar7 = auVar46._12_4_;
    fVar8 = auVar46._16_4_;
    fVar9 = auVar46._20_4_;
    fVar10 = auVar46._24_4_;
    fVar11 = auVar46._28_4_;
    fVar25 = auVar67._0_4_;
    fVar26 = auVar67._4_4_;
    fVar27 = auVar67._8_4_;
    fVar28 = auVar67._12_4_;
    fVar29 = auVar67._16_4_;
    fVar30 = auVar67._20_4_;
    fVar31 = auVar67._24_4_;
    fVar51 = auVar67._28_4_;
    fVar35 = auVar43._0_4_;
    auVar64._0_4_ = fVar35 * fVar35 + fVar25 * fVar25 + fVar4 * fVar4;
    fVar36 = auVar43._4_4_;
    auVar64._4_4_ = fVar36 * fVar36 + fVar26 * fVar26 + fVar5 * fVar5;
    fVar37 = auVar43._8_4_;
    auVar64._8_4_ = fVar37 * fVar37 + fVar27 * fVar27 + fVar6 * fVar6;
    fVar38 = auVar43._12_4_;
    auVar64._12_4_ = fVar38 * fVar38 + fVar28 * fVar28 + fVar7 * fVar7;
    fVar39 = auVar43._16_4_;
    auVar64._16_4_ = fVar39 * fVar39 + fVar29 * fVar29 + fVar8 * fVar8;
    fVar40 = auVar43._20_4_;
    auVar64._20_4_ = fVar40 * fVar40 + fVar30 * fVar30 + fVar9 * fVar9;
    fVar41 = auVar43._24_4_;
    auVar64._24_4_ = fVar41 * fVar41 + fVar31 * fVar31 + fVar10 * fVar10;
    fVar44 = auVar43._28_4_;
    auVar64._28_4_ = fVar44 * fVar44 + fVar51 * fVar51 + fVar11 * fVar11;
    auVar46 = vmaskmovps_avx(auVar23,*(undefined1 (*) [32])(param_3 + (iVar13 << 2)));
    auVar65._0_4_ = param_5 * auVar46._0_4_ + param_4;
    auVar65._4_4_ = param_5 * auVar46._4_4_ + param_4;
    auVar65._8_4_ = param_5 * auVar46._8_4_ + param_4;
    auVar65._12_4_ = param_5 * auVar46._12_4_ + param_4;
    auVar65._16_4_ = param_5 * auVar46._16_4_ + param_4;
    auVar65._20_4_ = param_5 * auVar46._20_4_ + param_4;
    auVar65._24_4_ = param_5 * auVar46._24_4_ + param_4;
    auVar65._28_4_ = param_5 * auVar46._28_4_ + param_4;
    auVar67._0_4_ = auVar65._0_4_ * auVar65._0_4_ + __real_322bcc77;
    auVar67._4_4_ = auVar65._4_4_ * auVar65._4_4_ + __real_322bcc77;
    auVar67._8_4_ = auVar65._8_4_ * auVar65._8_4_ + __real_322bcc77;
    auVar67._12_4_ = auVar65._12_4_ * auVar65._12_4_ + __real_322bcc77;
    auVar67._16_4_ = auVar65._16_4_ * auVar65._16_4_ + __real_322bcc77;
    auVar67._20_4_ = auVar65._20_4_ * auVar65._20_4_ + __real_322bcc77;
    auVar67._24_4_ = auVar65._24_4_ * auVar65._24_4_ + __real_322bcc77;
    auVar67._28_4_ = auVar65._28_4_ * auVar65._28_4_ + __real_322bcc77;
    auVar46 = vcmpps_avx(auVar67,auVar64,1);
    auVar67 = vcmpps_avx(ZEXT1232(ZEXT812(0)),auVar34,4);
    auVar24._0_4_ = auVar46._0_4_ & auVar67._0_4_ & auVar23._0_4_;
    auVar24._4_4_ = auVar46._4_4_ & auVar67._4_4_ & auVar23._4_4_;
    auVar24._8_4_ = auVar46._8_4_ & auVar67._8_4_ & auVar23._8_4_;
    auVar24._12_4_ = auVar46._12_4_ & auVar67._12_4_ & auVar23._12_4_;
    auVar24._16_4_ = auVar46._16_4_ & auVar67._16_4_ & auVar23._16_4_;
    auVar24._20_4_ = auVar46._20_4_ & auVar67._20_4_ & auVar23._20_4_;
    auVar24._24_4_ = auVar46._24_4_ & auVar67._24_4_ & auVar23._24_4_;
    auVar24._28_4_ = auVar46._28_4_ & auVar67._28_4_ & auVar23._28_4_;
    uVar14 = vmovmskps_avx(auVar24);
    if (uVar14 != 0) {
      auVar23 = vsqrtps_avx(auVar64);
      auVar23 = vdivps_avx(auVar65,auVar23);
      fVar21 = auVar23._0_4_;
      auVar45._0_4_ = fVar21 * fVar25 + auVar61._0_4_;
      fVar25 = auVar23._4_4_;
      auVar45._4_4_ = fVar25 * fVar26 + auVar61._4_4_;
      fVar26 = auVar23._8_4_;
      auVar45._8_4_ = fVar26 * fVar27 + auVar61._8_4_;
      fVar27 = auVar23._12_4_;
      auVar45._12_4_ = fVar27 * fVar28 + auVar61._12_4_;
      fVar28 = auVar23._16_4_;
      auVar48._16_4_ = fVar28 * fVar29 + auVar61._16_4_;
      auVar48._0_16_ = auVar45;
      fVar29 = auVar23._20_4_;
      auVar48._20_4_ = fVar29 * fVar30 + auVar61._20_4_;
      fVar30 = auVar23._24_4_;
      auVar48._24_4_ = fVar30 * fVar31 + auVar61._24_4_;
      fVar31 = auVar23._28_4_;
      auVar48._28_4_ = fVar31 * fVar51 + auVar61._28_4_;
      auVar52._0_4_ = fVar21 * fVar4 + auVar62._0_4_;
      auVar52._4_4_ = fVar25 * fVar5 + auVar62._4_4_;
      auVar52._8_4_ = fVar26 * fVar6 + auVar62._8_4_;
      auVar52._12_4_ = fVar27 * fVar7 + auVar62._12_4_;
      auVar56._16_4_ = fVar28 * fVar8 + auVar62._16_4_;
      auVar56._0_16_ = auVar52;
      auVar56._20_4_ = fVar29 * fVar9 + auVar62._20_4_;
      auVar56._24_4_ = fVar30 * fVar10 + auVar62._24_4_;
      auVar56._28_4_ = fVar31 * fVar11 + auVar62._28_4_;
      auVar42._0_4_ = fVar21 * fVar35 + auVar55._0_4_;
      auVar42._4_4_ = fVar25 * fVar36 + auVar55._4_4_;
      auVar42._8_4_ = fVar26 * fVar37 + auVar55._8_4_;
      auVar42._12_4_ = fVar27 * fVar38 + auVar55._12_4_;
      auVar62._16_4_ = fVar28 * fVar39 + auVar55._16_4_;
      auVar62._0_16_ = auVar42;
      auVar62._20_4_ = fVar29 * fVar40 + auVar55._20_4_;
      auVar62._24_4_ = fVar30 * fVar41 + auVar55._24_4_;
      auVar62._28_4_ = fVar31 * fVar44 + auVar55._28_4_;
      cVar12 = (char)uVar14;
      if (cVar12 == -1) {
        auVar23 = vunpcklps_avx(auVar48,auVar56);
        auVar46 = vunpcklps_avx(auVar62,auVar34);
        auVar67 = vunpcklpd_avx(auVar23,auVar46);
        auVar23 = vunpckhpd_avx(auVar23,auVar46);
        auVar46 = vunpckhps_avx(auVar48,auVar56);
        auVar34 = vunpckhps_avx(auVar62,auVar34);
        auVar43 = vunpcklpd_avx(auVar46,auVar34);
        auVar57._16_16_ = auVar23._0_16_;
        auVar57._0_16_ = auVar67._0_16_;
        *pauVar17 = auVar57;
        auVar46 = vunpckhpd_avx(auVar46,auVar34);
        auVar49._16_16_ = auVar46._0_16_;
        auVar49._0_16_ = auVar43._0_16_;
        pauVar17[1] = auVar49;
        auVar23 = vperm2f128_avx(auVar67,auVar23,0x31);
        pauVar17[2] = auVar23;
        auVar23 = vperm2f128_avx(auVar43,auVar46,0x31);
        pauVar17[3] = auVar23;
      }
      else {
        auVar22 = auVar34._0_16_;
        auVar59 = auVar34._16_16_;
        auVar50 = auVar48._16_16_;
        auVar58 = auVar56._16_16_;
        auVar68 = auVar62._16_16_;
        if ((uVar14 & 1) != 0) {
          *(float *)*pauVar17 = auVar45._0_4_;
        }
        if ((uVar14 & 2) != 0) {
          uVar3 = vextractps_avx(auVar45,1);
          *(undefined4 *)(*pauVar17 + 0x10) = uVar3;
        }
        if ((uVar14 & 4) != 0) {
          uVar3 = vextractps_avx(auVar45,2);
          *(undefined4 *)pauVar17[1] = uVar3;
        }
        if ((uVar14 & 8) != 0) {
          uVar3 = vextractps_avx(auVar45,3);
          *(undefined4 *)(pauVar17[1] + 0x10) = uVar3;
        }
        if ((uVar14 & 0x10) != 0) {
          *(float *)pauVar17[2] = auVar48._16_4_;
        }
        if ((uVar14 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar50,1);
          *(undefined4 *)(pauVar17[2] + 0x10) = uVar3;
        }
        if ((uVar14 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar50,2);
          *(undefined4 *)pauVar17[3] = uVar3;
        }
        if (cVar12 < '\0') {
          uVar3 = vextractps_avx(auVar50,3);
          *(undefined4 *)(pauVar17[3] + 0x10) = uVar3;
        }
        if ((uVar14 & 1) != 0) {
          *(float *)(*pauVar17 + 4) = auVar52._0_4_;
        }
        if ((uVar14 & 2) != 0) {
          uVar3 = vextractps_avx(auVar52,1);
          *(undefined4 *)(*pauVar17 + 0x14) = uVar3;
        }
        if ((uVar14 & 4) != 0) {
          uVar3 = vextractps_avx(auVar52,2);
          *(undefined4 *)(pauVar17[1] + 4) = uVar3;
        }
        if ((uVar14 & 8) != 0) {
          uVar3 = vextractps_avx(auVar52,3);
          *(undefined4 *)(pauVar17[1] + 0x14) = uVar3;
        }
        if ((uVar14 & 0x10) != 0) {
          *(float *)(pauVar17[2] + 4) = auVar56._16_4_;
        }
        if ((uVar14 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar58,1);
          *(undefined4 *)(pauVar17[2] + 0x14) = uVar3;
        }
        if ((uVar14 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar58,2);
          *(undefined4 *)(pauVar17[3] + 4) = uVar3;
        }
        if (cVar12 < '\0') {
          uVar3 = vextractps_avx(auVar58,3);
          *(undefined4 *)(pauVar17[3] + 0x14) = uVar3;
        }
        if ((uVar14 & 1) != 0) {
          *(float *)(*pauVar17 + 8) = auVar42._0_4_;
        }
        if ((uVar14 & 2) != 0) {
          uVar3 = vextractps_avx(auVar42,1);
          *(undefined4 *)(*pauVar17 + 0x18) = uVar3;
        }
        if ((uVar14 & 4) != 0) {
          uVar3 = vextractps_avx(auVar42,2);
          *(undefined4 *)(pauVar17[1] + 8) = uVar3;
        }
        if ((uVar14 & 8) != 0) {
          uVar3 = vextractps_avx(auVar42,3);
          *(undefined4 *)(pauVar17[1] + 0x18) = uVar3;
        }
        if ((uVar14 & 0x10) != 0) {
          *(float *)(pauVar17[2] + 8) = auVar62._16_4_;
        }
        if ((uVar14 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar68,1);
          *(undefined4 *)(pauVar17[2] + 0x18) = uVar3;
        }
        if ((uVar14 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar68,2);
          *(undefined4 *)(pauVar17[3] + 8) = uVar3;
        }
        if (cVar12 < '\0') {
          uVar3 = vextractps_avx(auVar68,3);
          *(undefined4 *)(pauVar17[3] + 0x18) = uVar3;
        }
        if ((uVar14 & 1) != 0) {
          *(int *)(*pauVar17 + 0xc) = auVar34._0_4_;
        }
        if ((uVar14 & 2) != 0) {
          uVar3 = vextractps_avx(auVar22,1);
          *(undefined4 *)(*pauVar17 + 0x1c) = uVar3;
        }
        if ((uVar14 & 4) != 0) {
          uVar3 = vextractps_avx(auVar22,2);
          *(undefined4 *)(pauVar17[1] + 0xc) = uVar3;
        }
        if ((uVar14 & 8) != 0) {
          uVar3 = vextractps_avx(auVar22,3);
          *(undefined4 *)(pauVar17[1] + 0x1c) = uVar3;
        }
        if ((uVar14 & 0x10) != 0) {
          *(int *)(pauVar17[2] + 0xc) = auVar34._16_4_;
        }
        if ((uVar14 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar59,1);
          *(undefined4 *)(pauVar17[2] + 0x1c) = uVar3;
        }
        if ((uVar14 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar59,2);
          *(undefined4 *)(pauVar17[3] + 0xc) = uVar3;
        }
        if (cVar12 < '\0') {
          uVar3 = vextractps_avx(auVar59,3);
          *(undefined4 *)(pauVar17[3] + 0x1c) = uVar3;
        }
      }
    }
  }
  return;
}

// ApplySphericalConstraintsWithoutMap_avx2 @ 140325610

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplySphericalConstraintsWithoutMap_avx2
               (longlong param_1,longlong param_2,float param_3,int param_4,uint param_5)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  char cVar10;
  uint uVar11;
  undefined1 (*pauVar12) [32];
  uint uVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  undefined1 (*pauVar17) [32];
  float fVar18;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  float fVar28;
  undefined1 auVar21 [32];
  undefined1 auVar29 [16];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  float fVar33;
  float fVar34;
  float fVar41;
  undefined1 auVar35 [16];
  float fVar39;
  float fVar40;
  float fVar42;
  float fVar44;
  float fVar45;
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  float fVar46;
  undefined1 auVar43 [16];
  undefined1 auVar47 [32];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar51 [32];
  undefined1 auVar54 [16];
  undefined1 auVar53 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar32 [32];
  undefined1 auVar38 [32];
  undefined1 auVar50 [32];
  undefined1 auVar52 [32];
  undefined1 auVar66 [32];
  
  uVar11 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar11 = param_5;
  }
  if ((int)(uVar11 & 0xfffffff8) < 1) {
    uVar16 = 0;
    if ((int)param_5 < 1) {
      return;
    }
  }
  else {
    auVar19._4_4_ = param_3;
    auVar19._0_4_ = param_3;
    auVar19._8_4_ = param_3;
    auVar19._12_4_ = param_3;
    auVar19._16_4_ = param_3;
    auVar19._20_4_ = param_3;
    auVar19._24_4_ = param_3;
    auVar19._28_4_ = param_3;
    auVar36._0_4_ = param_3 * param_3 + __real_322bcc77;
    auVar36._4_4_ = auVar36._0_4_;
    auVar36._8_4_ = auVar36._0_4_;
    auVar36._12_4_ = auVar36._0_4_;
    auVar36._16_4_ = auVar36._0_4_;
    auVar36._20_4_ = auVar36._0_4_;
    auVar36._24_4_ = auVar36._0_4_;
    auVar36._28_4_ = auVar36._0_4_;
    pauVar17 = (undefined1 (*) [32])((longlong)param_4 * 0x10 + param_1);
    pauVar12 = (undefined1 (*) [32])(param_2 + (longlong)param_4 * 0xc + 0x40);
    uVar16 = 0;
    do {
      auVar21 = *pauVar17;
      auVar30 = pauVar17[1];
      auVar31 = pauVar17[2];
      auVar51 = pauVar17[3];
      auVar66 = vperm2f128_avx(auVar21,auVar31,0x20);
      auVar55 = vperm2f128_avx(auVar21,auVar31,0x31);
      auVar20 = vperm2f128_avx(auVar30,auVar51,0x20);
      auVar59 = vperm2f128_avx(auVar30,auVar51,0x31);
      auVar37 = vunpckhps_avx(auVar66,auVar55);
      auVar50 = vunpckhps_avx(auVar20,auVar59);
      auVar56 = vunpckhpd_avx(auVar37,auVar50);
      auVar57 = vcmpps_avx(auVar56,
                           ___ymm_0000000000000000000000000000000000000000000000000000000000000000,4
                          );
      if ((((((((SUB321(auVar57 >> 0x1f,0) & 1) != 0 || (SUB321(auVar57 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar57 >> 0x5f,0) & 1) != 0) || SUB321(auVar57 >> 0x7f,0) != '\0') ||
            (SUB321(auVar57 >> 0x9f,0) & 1) != 0) || SUB321(auVar57 >> 0xbf,0) != '\0') ||
          (SUB321(auVar57 >> 0xdf,0) & 1) != 0) || auVar57[0x1f] < '\0') {
        auVar62 = vunpcklpd_avx(auVar37,auVar50);
        auVar37 = vunpcklps_avx(auVar66,auVar55);
        auVar50 = vunpcklps_avx(auVar20,auVar59);
        auVar20 = vunpckhpd_avx(auVar37,auVar50);
        auVar55 = vunpcklpd_avx(auVar37,auVar50);
        auVar37 = pauVar12[-1];
        auVar50 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                               ,auVar37);
        auVar66 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,pauVar12[-2]);
        auVar50 = vblendps_avx(auVar66,auVar50,0x88);
        auVar66 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                               ,auVar37);
        auVar59 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,*pauVar12);
        auVar66 = vblendps_avx(auVar59,auVar66,0x13);
        auVar58._16_16_ = auVar66._0_16_;
        auVar58._0_16_ = auVar50._0_16_;
        auVar47 = vperm2f128_avx(auVar50,auVar66,0x31);
        auVar37 = vblendps_avx(auVar37,pauVar12[-2],0x24);
        auVar37 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar37);
        auVar59._16_16_ = ___xmm_00000007000000040000000100000000;
        auVar59._0_16_ = ___xmm_00000007000000040000000100000000;
        auVar59 = vpermps_avx2(auVar59,*pauVar12);
        auVar37 = vblendps_avx(auVar37,auVar59,0xe0);
        auVar55 = vsubps_avx(auVar55,auVar58);
        auVar20 = vsubps_avx(auVar20,auVar47);
        auVar59 = vsubps_avx(auVar62,auVar37);
        fVar2 = auVar20._0_4_;
        fVar3 = auVar20._4_4_;
        fVar4 = auVar20._8_4_;
        fVar5 = auVar20._12_4_;
        fVar6 = auVar20._16_4_;
        fVar7 = auVar20._20_4_;
        fVar8 = auVar20._24_4_;
        fVar9 = auVar20._28_4_;
        fVar22 = auVar55._0_4_;
        fVar23 = auVar55._4_4_;
        fVar24 = auVar55._8_4_;
        fVar25 = auVar55._12_4_;
        fVar26 = auVar55._16_4_;
        fVar27 = auVar55._20_4_;
        fVar28 = auVar55._24_4_;
        fVar33 = auVar55._28_4_;
        fVar34 = auVar59._0_4_;
        auVar62._0_4_ = fVar34 * fVar34 + fVar22 * fVar22 + fVar2 * fVar2;
        fVar39 = auVar59._4_4_;
        auVar62._4_4_ = fVar39 * fVar39 + fVar23 * fVar23 + fVar3 * fVar3;
        fVar40 = auVar59._8_4_;
        auVar62._8_4_ = fVar40 * fVar40 + fVar24 * fVar24 + fVar4 * fVar4;
        fVar41 = auVar59._12_4_;
        auVar62._12_4_ = fVar41 * fVar41 + fVar25 * fVar25 + fVar5 * fVar5;
        fVar42 = auVar59._16_4_;
        auVar62._16_4_ = fVar42 * fVar42 + fVar26 * fVar26 + fVar6 * fVar6;
        fVar44 = auVar59._20_4_;
        auVar62._20_4_ = fVar44 * fVar44 + fVar27 * fVar27 + fVar7 * fVar7;
        fVar45 = auVar59._24_4_;
        auVar62._24_4_ = fVar45 * fVar45 + fVar28 * fVar28 + fVar8 * fVar8;
        fVar46 = auVar59._28_4_;
        auVar62._28_4_ = fVar46 * fVar46 + fVar33 * fVar33 + fVar9 * fVar9;
        auVar55 = vcmpps_avx(auVar36,auVar62,1);
        auVar20._0_4_ = auVar55._0_4_ & auVar57._0_4_;
        auVar20._4_4_ = auVar55._4_4_ & auVar57._4_4_;
        auVar20._8_4_ = auVar55._8_4_ & auVar57._8_4_;
        auVar20._12_4_ = auVar55._12_4_ & auVar57._12_4_;
        auVar20._16_4_ = auVar55._16_4_ & auVar57._16_4_;
        auVar20._20_4_ = auVar55._20_4_ & auVar57._20_4_;
        auVar20._24_4_ = auVar55._24_4_ & auVar57._24_4_;
        auVar20._28_4_ = auVar55._28_4_ & auVar57._28_4_;
        uVar13 = vmovmskps_avx(auVar20);
        if (uVar13 != 0) {
          auVar57 = vsqrtps_avx(auVar62);
          auVar57 = vdivps_avx(auVar19,auVar57);
          fVar18 = auVar57._0_4_;
          auVar48._0_4_ = fVar18 * fVar22 + auVar50._0_4_;
          fVar22 = auVar57._4_4_;
          auVar48._4_4_ = fVar22 * fVar23 + auVar50._4_4_;
          fVar23 = auVar57._8_4_;
          auVar48._8_4_ = fVar23 * fVar24 + auVar50._8_4_;
          fVar24 = auVar57._12_4_;
          auVar48._12_4_ = fVar24 * fVar25 + auVar50._12_4_;
          fVar25 = auVar57._16_4_;
          auVar50._16_4_ = fVar25 * fVar26 + auVar66._0_4_;
          auVar50._0_16_ = auVar48;
          fVar26 = auVar57._20_4_;
          auVar50._20_4_ = fVar26 * fVar27 + auVar66._4_4_;
          fVar27 = auVar57._24_4_;
          auVar50._24_4_ = fVar27 * fVar28 + auVar66._8_4_;
          fVar28 = auVar57._28_4_;
          auVar50._28_4_ = fVar28 * fVar33 + auVar66._12_4_;
          auVar65._0_4_ = fVar18 * fVar2 + auVar47._0_4_;
          auVar65._4_4_ = fVar22 * fVar3 + auVar47._4_4_;
          auVar65._8_4_ = fVar23 * fVar4 + auVar47._8_4_;
          auVar65._12_4_ = fVar24 * fVar5 + auVar47._12_4_;
          auVar66._16_4_ = fVar25 * fVar6 + auVar47._16_4_;
          auVar66._0_16_ = auVar65;
          auVar66._20_4_ = fVar26 * fVar7 + auVar47._20_4_;
          auVar66._24_4_ = fVar27 * fVar8 + auVar47._24_4_;
          auVar66._28_4_ = fVar28 * fVar9 + auVar47._28_4_;
          auVar64._0_4_ = fVar18 * fVar34 + auVar37._0_4_;
          auVar64._4_4_ = fVar22 * fVar39 + auVar37._4_4_;
          auVar64._8_4_ = fVar23 * fVar40 + auVar37._8_4_;
          auVar64._12_4_ = fVar24 * fVar41 + auVar37._12_4_;
          auVar57._16_4_ = fVar25 * fVar42 + auVar37._16_4_;
          auVar57._0_16_ = auVar64;
          auVar57._20_4_ = fVar26 * fVar44 + auVar37._20_4_;
          auVar57._24_4_ = fVar27 * fVar45 + auVar37._24_4_;
          auVar57._28_4_ = fVar28 * fVar46 + auVar37._28_4_;
          cVar10 = (char)uVar13;
          if (cVar10 == -1) {
            auVar21 = vunpcklps_avx(auVar50,auVar66);
            auVar30 = vunpcklps_avx(auVar57,auVar56);
            auVar51 = vunpcklpd_avx(auVar21,auVar30);
            auVar21 = vunpckhpd_avx(auVar21,auVar30);
            auVar30 = vunpckhps_avx(auVar50,auVar66);
            auVar31 = vunpckhps_avx(auVar57,auVar56);
            auVar57 = vunpcklpd_avx(auVar30,auVar31);
            auVar56._16_16_ = auVar21._0_16_;
            auVar56._0_16_ = auVar51._0_16_;
            *pauVar17 = auVar56;
            auVar30 = vunpckhpd_avx(auVar30,auVar31);
            auVar31._16_16_ = auVar30._0_16_;
            auVar31._0_16_ = auVar57._0_16_;
            pauVar17[1] = auVar31;
            auVar21 = vperm2f128_avx(auVar51,auVar21,0x31);
            pauVar17[2] = auVar21;
            auVar21 = vperm2f128_avx(auVar57,auVar30,0x31);
            pauVar17[3] = auVar21;
          }
          else {
            auVar29 = auVar50._16_16_;
            auVar49 = auVar66._16_16_;
            auVar35 = auVar57._16_16_;
            if ((uVar13 & 1) != 0) {
              *(float *)*pauVar17 = auVar48._0_4_;
            }
            if ((uVar13 & 2) != 0) {
              uVar1 = vextractps_avx(auVar48,1);
              *(undefined4 *)(*pauVar17 + 0x10) = uVar1;
            }
            if ((uVar13 & 4) != 0) {
              uVar1 = vextractps_avx(auVar48,2);
              *(undefined4 *)pauVar17[1] = uVar1;
            }
            if ((uVar13 & 8) != 0) {
              uVar1 = vextractps_avx(auVar48,3);
              *(undefined4 *)(pauVar17[1] + 0x10) = uVar1;
            }
            if ((uVar13 & 0x10) != 0) {
              *(float *)pauVar17[2] = auVar50._16_4_;
            }
            if ((uVar13 & 0x20) != 0) {
              uVar1 = vextractps_avx(auVar29,1);
              *(undefined4 *)(pauVar17[2] + 0x10) = uVar1;
            }
            if ((uVar13 & 0x40) != 0) {
              uVar1 = vextractps_avx(auVar29,2);
              *(undefined4 *)pauVar17[3] = uVar1;
            }
            if (cVar10 < '\0') {
              uVar1 = vextractps_avx(auVar29,3);
              *(undefined4 *)(pauVar17[3] + 0x10) = uVar1;
            }
            if ((uVar13 & 1) != 0) {
              *(float *)(*pauVar17 + 4) = auVar65._0_4_;
            }
            if ((uVar13 & 2) != 0) {
              uVar1 = vextractps_avx(auVar65,1);
              *(undefined4 *)(*pauVar17 + 0x14) = uVar1;
            }
            if ((uVar13 & 4) != 0) {
              uVar1 = vextractps_avx(auVar65,2);
              *(undefined4 *)(pauVar17[1] + 4) = uVar1;
            }
            if ((uVar13 & 8) != 0) {
              uVar1 = vextractps_avx(auVar65,3);
              *(undefined4 *)(pauVar17[1] + 0x14) = uVar1;
            }
            if ((uVar13 & 0x10) != 0) {
              *(float *)(pauVar17[2] + 4) = auVar66._16_4_;
            }
            if ((uVar13 & 0x20) != 0) {
              uVar1 = vextractps_avx(auVar49,1);
              *(undefined4 *)(pauVar17[2] + 0x14) = uVar1;
            }
            if ((uVar13 & 0x40) != 0) {
              uVar1 = vextractps_avx(auVar49,2);
              *(undefined4 *)(pauVar17[3] + 4) = uVar1;
            }
            if (cVar10 < '\0') {
              uVar1 = vextractps_avx(auVar49,3);
              *(undefined4 *)(pauVar17[3] + 0x14) = uVar1;
            }
            if ((uVar13 & 1) != 0) {
              *(float *)(*pauVar17 + 8) = auVar64._0_4_;
            }
            if ((uVar13 & 2) != 0) {
              uVar1 = vextractps_avx(auVar64,1);
              *(undefined4 *)(*pauVar17 + 0x18) = uVar1;
            }
            if ((uVar13 & 4) != 0) {
              uVar1 = vextractps_avx(auVar64,2);
              *(undefined4 *)(pauVar17[1] + 8) = uVar1;
            }
            if ((uVar13 & 8) != 0) {
              uVar1 = vextractps_avx(auVar64,3);
              *(undefined4 *)(pauVar17[1] + 0x18) = uVar1;
            }
            if ((uVar13 & 0x10) != 0) {
              *(float *)(pauVar17[2] + 8) = auVar57._16_4_;
            }
            if ((uVar13 & 0x20) != 0) {
              uVar1 = vextractps_avx(auVar35,1);
              *(undefined4 *)(pauVar17[2] + 0x18) = uVar1;
            }
            if ((uVar13 & 0x40) != 0) {
              uVar1 = vextractps_avx(auVar35,2);
              *(undefined4 *)(pauVar17[3] + 8) = uVar1;
            }
            if (cVar10 < '\0') {
              uVar1 = vextractps_avx(auVar35,3);
              *(undefined4 *)(pauVar17[3] + 0x18) = uVar1;
            }
            if ((uVar13 & 1) != 0) {
              uVar1 = vextractps_avx(auVar21._0_16_,3);
              *(undefined4 *)(*pauVar17 + 0xc) = uVar1;
            }
            if ((uVar13 & 2) != 0) {
              uVar1 = vextractps_avx(auVar21._16_16_,3);
              *(undefined4 *)(*pauVar17 + 0x1c) = uVar1;
            }
            if ((uVar13 & 4) != 0) {
              uVar1 = vextractps_avx(auVar30._0_16_,3);
              *(undefined4 *)(pauVar17[1] + 0xc) = uVar1;
            }
            if ((uVar13 & 8) != 0) {
              uVar1 = vextractps_avx(auVar30._16_16_,3);
              *(undefined4 *)(pauVar17[1] + 0x1c) = uVar1;
            }
            if ((uVar13 & 0x10) != 0) {
              uVar1 = vextractps_avx(auVar31._0_16_,3);
              *(undefined4 *)(pauVar17[2] + 0xc) = uVar1;
            }
            if ((uVar13 & 0x20) != 0) {
              uVar1 = vextractps_avx(auVar31._16_16_,3);
              *(undefined4 *)(pauVar17[2] + 0x1c) = uVar1;
            }
            if ((uVar13 & 0x40) != 0) {
              uVar1 = vextractps_avx(auVar51._0_16_,3);
              *(undefined4 *)(pauVar17[3] + 0xc) = uVar1;
            }
            if (cVar10 < '\0') {
              uVar1 = vextractps_avx(auVar51._16_16_,3);
              *(undefined4 *)(pauVar17[3] + 0x1c) = uVar1;
            }
          }
        }
      }
      uVar16 = uVar16 + 8;
      pauVar17 = pauVar17 + 4;
      pauVar12 = pauVar12 + 3;
    } while (uVar16 < (uVar11 & 0xfffffff8));
    if ((int)param_5 <= (int)uVar16) {
      return;
    }
  }
  iVar14 = (int)uVar16;
  auVar21._4_4_ = iVar14;
  auVar21._0_4_ = iVar14;
  auVar21._8_4_ = iVar14;
  auVar21._12_4_ = iVar14;
  auVar21._16_4_ = iVar14;
  auVar21._20_4_ = iVar14;
  auVar21._24_4_ = iVar14;
  auVar21._28_4_ = iVar14;
  auVar19 = vpor_avx2(auVar21,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar30._4_4_ = param_5;
  auVar30._0_4_ = param_5;
  auVar30._8_4_ = param_5;
  auVar30._12_4_ = param_5;
  auVar30._16_4_ = param_5;
  auVar30._20_4_ = param_5;
  auVar30._24_4_ = param_5;
  auVar30._28_4_ = param_5;
  auVar19 = vpcmpgtd_avx2(auVar30,auVar19);
  pauVar12 = (undefined1 (*) [32])(param_1 + (longlong)(param_4 + iVar14) * 0x10);
  iVar15 = vmovmskps_avx(auVar19);
  if (iVar15 == 0xff) {
    auVar21 = vperm2f128_avx(*pauVar12,pauVar12[2],0x20);
    auVar30 = vperm2f128_avx(*pauVar12,pauVar12[2],0x31);
    auVar31 = vperm2f128_avx(pauVar12[1],pauVar12[3],0x20);
    auVar57 = vperm2f128_avx(pauVar12[1],pauVar12[3],0x31);
    auVar36 = vunpcklps_avx(auVar21,auVar30);
    auVar21 = vunpckhps_avx(auVar21,auVar30);
    auVar51 = vunpcklps_avx(auVar31,auVar57);
    auVar30 = vunpckhps_avx(auVar31,auVar57);
    auVar31 = vunpcklpd_avx(auVar36,auVar51);
    auVar36 = vunpckhpd_avx(auVar36,auVar51);
    auVar51 = vunpcklpd_avx(auVar21,auVar30);
    auVar21 = vunpckhpd_avx(auVar21,auVar30);
  }
  else {
    auVar31 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar19);
    auVar36 = vgatherdps(ZEXT832(0),auVar19);
    auVar51 = vgatherdps(ZEXT832(0),auVar19);
    auVar21 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar19);
  }
  auVar30 = vmaskmovps_avx(auVar19,auVar31);
  auVar36 = vmaskmovps_avx(auVar19,auVar36);
  auVar31 = vmaskmovps_avx(auVar19,auVar51);
  auVar51 = vcmpps_avx(auVar21,ZEXT832(0) << 0x20,4);
  auVar51 = auVar19 & auVar51;
  if ((((((((SUB321(auVar51 >> 0x1f,0) & 1) != 0 || (SUB321(auVar51 >> 0x3f,0) & 1) != 0) ||
          (SUB321(auVar51 >> 0x5f,0) & 1) != 0) || SUB321(auVar51 >> 0x7f,0) != '\0') ||
        (SUB321(auVar51 >> 0x9f,0) & 1) != 0) || SUB321(auVar51 >> 0xbf,0) != '\0') ||
      (SUB321(auVar51 >> 0xdf,0) & 1) != 0) || auVar51[0x1f] < '\0') {
    pauVar17 = (undefined1 (*) [32])(param_2 + (longlong)(param_4 + iVar14) * 0xc);
    if ((char)iVar15 == -1) {
      auVar51 = pauVar17[1];
      auVar57 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                             ,auVar51);
      auVar56 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,*pauVar17);
      auVar57 = vblendps_avx(auVar56,auVar57,0x88);
      auVar56 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                             ,auVar51);
      auVar37 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,pauVar17[2]);
      auVar56 = vblendps_avx(auVar37,auVar56,0x13);
      auVar55._16_16_ = auVar56._0_16_;
      auVar55._0_16_ = auVar57._0_16_;
      auVar57 = vperm2f128_avx(auVar57,auVar56,0x31);
      auVar51 = vblendps_avx(auVar51,*pauVar17,0x24);
      auVar51 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar51);
      auVar37._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar37._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar56 = vpermps_avx2(auVar37,pauVar17[2]);
      auVar51 = vblendps_avx(auVar51,auVar56,0xe0);
    }
    else {
      auVar55 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar19);
      auVar57 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar19);
      auVar51 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar19);
    }
    auVar30 = vsubps_avx(auVar30,auVar55);
    auVar36 = vsubps_avx(auVar36,auVar57);
    auVar31 = vsubps_avx(auVar31,auVar51);
    fVar2 = auVar36._0_4_;
    fVar3 = auVar36._4_4_;
    fVar4 = auVar36._8_4_;
    fVar5 = auVar36._12_4_;
    fVar6 = auVar36._16_4_;
    fVar7 = auVar36._20_4_;
    fVar8 = auVar36._24_4_;
    fVar9 = auVar36._28_4_;
    fVar34 = auVar30._0_4_;
    fVar39 = auVar30._4_4_;
    fVar40 = auVar30._8_4_;
    fVar41 = auVar30._12_4_;
    fVar42 = auVar30._16_4_;
    fVar44 = auVar30._20_4_;
    fVar45 = auVar30._24_4_;
    fVar46 = auVar30._28_4_;
    fVar22 = auVar31._0_4_;
    auVar60._0_4_ = fVar22 * fVar22 + fVar34 * fVar34 + fVar2 * fVar2;
    fVar23 = auVar31._4_4_;
    auVar60._4_4_ = fVar23 * fVar23 + fVar39 * fVar39 + fVar3 * fVar3;
    fVar24 = auVar31._8_4_;
    auVar60._8_4_ = fVar24 * fVar24 + fVar40 * fVar40 + fVar4 * fVar4;
    fVar25 = auVar31._12_4_;
    auVar60._12_4_ = fVar25 * fVar25 + fVar41 * fVar41 + fVar5 * fVar5;
    fVar26 = auVar31._16_4_;
    auVar60._16_4_ = fVar26 * fVar26 + fVar42 * fVar42 + fVar6 * fVar6;
    fVar27 = auVar31._20_4_;
    auVar60._20_4_ = fVar27 * fVar27 + fVar44 * fVar44 + fVar7 * fVar7;
    fVar28 = auVar31._24_4_;
    auVar60._24_4_ = fVar28 * fVar28 + fVar45 * fVar45 + fVar8 * fVar8;
    fVar33 = auVar31._28_4_;
    auVar60._28_4_ = fVar33 * fVar33 + fVar46 * fVar46 + fVar9 * fVar9;
    auVar63._0_4_ = param_3 * param_3 + __real_322bcc77;
    auVar63._4_4_ = auVar63._0_4_;
    auVar63._8_4_ = auVar63._0_4_;
    auVar63._12_4_ = auVar63._0_4_;
    auVar63._16_4_ = auVar63._0_4_;
    auVar63._20_4_ = auVar63._0_4_;
    auVar63._24_4_ = auVar63._0_4_;
    auVar63._28_4_ = auVar63._0_4_;
    auVar36 = vcmpps_avx(auVar63,auVar60,1);
    auVar30 = vcmpps_avx(ZEXT1232(ZEXT812(0)),auVar21,4);
    auVar47._0_4_ = auVar36._0_4_ & auVar30._0_4_ & auVar19._0_4_;
    auVar47._4_4_ = auVar36._4_4_ & auVar30._4_4_ & auVar19._4_4_;
    auVar47._8_4_ = auVar36._8_4_ & auVar30._8_4_ & auVar19._8_4_;
    auVar47._12_4_ = auVar36._12_4_ & auVar30._12_4_ & auVar19._12_4_;
    auVar47._16_4_ = auVar36._16_4_ & auVar30._16_4_ & auVar19._16_4_;
    auVar47._20_4_ = auVar36._20_4_ & auVar30._20_4_ & auVar19._20_4_;
    auVar47._24_4_ = auVar36._24_4_ & auVar30._24_4_ & auVar19._24_4_;
    auVar47._28_4_ = auVar36._28_4_ & auVar30._28_4_ & auVar19._28_4_;
    uVar11 = vmovmskps_avx(auVar47);
    if (uVar11 != 0) {
      auVar19 = vsqrtps_avx(auVar60);
      auVar61._4_4_ = param_3;
      auVar61._0_4_ = param_3;
      auVar61._8_4_ = param_3;
      auVar61._12_4_ = param_3;
      auVar61._16_4_ = param_3;
      auVar61._20_4_ = param_3;
      auVar61._24_4_ = param_3;
      auVar61._28_4_ = param_3;
      auVar19 = vdivps_avx(auVar61,auVar19);
      fVar18 = auVar19._0_4_;
      auVar35._0_4_ = fVar18 * fVar34 + auVar55._0_4_;
      fVar34 = auVar19._4_4_;
      auVar35._4_4_ = fVar34 * fVar39 + auVar55._4_4_;
      fVar39 = auVar19._8_4_;
      auVar35._8_4_ = fVar39 * fVar40 + auVar55._8_4_;
      fVar40 = auVar19._12_4_;
      auVar35._12_4_ = fVar40 * fVar41 + auVar55._12_4_;
      fVar41 = auVar19._16_4_;
      auVar38._16_4_ = fVar41 * fVar42 + auVar55._16_4_;
      auVar38._0_16_ = auVar35;
      fVar42 = auVar19._20_4_;
      auVar38._20_4_ = fVar42 * fVar44 + auVar55._20_4_;
      fVar44 = auVar19._24_4_;
      auVar38._24_4_ = fVar44 * fVar45 + auVar55._24_4_;
      fVar45 = auVar19._28_4_;
      auVar38._28_4_ = fVar45 * fVar46 + auVar55._28_4_;
      auVar49._0_4_ = fVar18 * fVar2 + auVar57._0_4_;
      auVar49._4_4_ = fVar34 * fVar3 + auVar57._4_4_;
      auVar49._8_4_ = fVar39 * fVar4 + auVar57._8_4_;
      auVar49._12_4_ = fVar40 * fVar5 + auVar57._12_4_;
      auVar52._16_4_ = fVar41 * fVar6 + auVar57._16_4_;
      auVar52._0_16_ = auVar49;
      auVar52._20_4_ = fVar42 * fVar7 + auVar57._20_4_;
      auVar52._24_4_ = fVar44 * fVar8 + auVar57._24_4_;
      auVar52._28_4_ = fVar45 * fVar9 + auVar57._28_4_;
      auVar29._0_4_ = fVar18 * fVar22 + auVar51._0_4_;
      auVar29._4_4_ = fVar34 * fVar23 + auVar51._4_4_;
      auVar29._8_4_ = fVar39 * fVar24 + auVar51._8_4_;
      auVar29._12_4_ = fVar40 * fVar25 + auVar51._12_4_;
      auVar32._16_4_ = fVar41 * fVar26 + auVar51._16_4_;
      auVar32._0_16_ = auVar29;
      auVar32._20_4_ = fVar42 * fVar27 + auVar51._20_4_;
      auVar32._24_4_ = fVar44 * fVar28 + auVar51._24_4_;
      auVar32._28_4_ = fVar45 * fVar33 + auVar51._28_4_;
      cVar10 = (char)uVar11;
      if (cVar10 == -1) {
        auVar19 = vunpcklps_avx(auVar38,auVar52);
        auVar36 = vunpcklps_avx(auVar32,auVar21);
        auVar30 = vunpcklpd_avx(auVar19,auVar36);
        auVar19 = vunpckhpd_avx(auVar19,auVar36);
        auVar36 = vunpckhps_avx(auVar38,auVar52);
        auVar21 = vunpckhps_avx(auVar32,auVar21);
        auVar31 = vunpcklpd_avx(auVar36,auVar21);
        auVar53._16_16_ = auVar19._0_16_;
        auVar53._0_16_ = auVar30._0_16_;
        *pauVar12 = auVar53;
        auVar36 = vunpckhpd_avx(auVar36,auVar21);
        auVar51._16_16_ = auVar36._0_16_;
        auVar51._0_16_ = auVar31._0_16_;
        pauVar12[1] = auVar51;
        auVar19 = vperm2f128_avx(auVar30,auVar19,0x31);
        pauVar12[2] = auVar19;
        auVar19 = vperm2f128_avx(auVar31,auVar36,0x31);
        pauVar12[3] = auVar19;
      }
      else {
        auVar48 = auVar21._0_16_;
        auVar64 = auVar21._16_16_;
        auVar43 = auVar38._16_16_;
        auVar54 = auVar52._16_16_;
        auVar65 = auVar32._16_16_;
        if ((uVar11 & 1) != 0) {
          *(float *)*pauVar12 = auVar35._0_4_;
        }
        if ((uVar11 & 2) != 0) {
          uVar1 = vextractps_avx(auVar35,1);
          *(undefined4 *)(*pauVar12 + 0x10) = uVar1;
        }
        if ((uVar11 & 4) != 0) {
          uVar1 = vextractps_avx(auVar35,2);
          *(undefined4 *)pauVar12[1] = uVar1;
        }
        if ((uVar11 & 8) != 0) {
          uVar1 = vextractps_avx(auVar35,3);
          *(undefined4 *)(pauVar12[1] + 0x10) = uVar1;
        }
        if ((uVar11 & 0x10) != 0) {
          *(float *)pauVar12[2] = auVar38._16_4_;
        }
        if ((uVar11 & 0x20) != 0) {
          uVar1 = vextractps_avx(auVar43,1);
          *(undefined4 *)(pauVar12[2] + 0x10) = uVar1;
        }
        if ((uVar11 & 0x40) != 0) {
          uVar1 = vextractps_avx(auVar43,2);
          *(undefined4 *)pauVar12[3] = uVar1;
        }
        if (cVar10 < '\0') {
          uVar1 = vextractps_avx(auVar43,3);
          *(undefined4 *)(pauVar12[3] + 0x10) = uVar1;
        }
        if ((uVar11 & 1) != 0) {
          *(float *)(*pauVar12 + 4) = auVar49._0_4_;
        }
        if ((uVar11 & 2) != 0) {
          uVar1 = vextractps_avx(auVar49,1);
          *(undefined4 *)(*pauVar12 + 0x14) = uVar1;
        }
        if ((uVar11 & 4) != 0) {
          uVar1 = vextractps_avx(auVar49,2);
          *(undefined4 *)(pauVar12[1] + 4) = uVar1;
        }
        if ((uVar11 & 8) != 0) {
          uVar1 = vextractps_avx(auVar49,3);
          *(undefined4 *)(pauVar12[1] + 0x14) = uVar1;
        }
        if ((uVar11 & 0x10) != 0) {
          *(float *)(pauVar12[2] + 4) = auVar52._16_4_;
        }
        if ((uVar11 & 0x20) != 0) {
          uVar1 = vextractps_avx(auVar54,1);
          *(undefined4 *)(pauVar12[2] + 0x14) = uVar1;
        }
        if ((uVar11 & 0x40) != 0) {
          uVar1 = vextractps_avx(auVar54,2);
          *(undefined4 *)(pauVar12[3] + 4) = uVar1;
        }
        if (cVar10 < '\0') {
          uVar1 = vextractps_avx(auVar54,3);
          *(undefined4 *)(pauVar12[3] + 0x14) = uVar1;
        }
        if ((uVar11 & 1) != 0) {
          *(float *)(*pauVar12 + 8) = auVar29._0_4_;
        }
        if ((uVar11 & 2) != 0) {
          uVar1 = vextractps_avx(auVar29,1);
          *(undefined4 *)(*pauVar12 + 0x18) = uVar1;
        }
        if ((uVar11 & 4) != 0) {
          uVar1 = vextractps_avx(auVar29,2);
          *(undefined4 *)(pauVar12[1] + 8) = uVar1;
        }
        if ((uVar11 & 8) != 0) {
          uVar1 = vextractps_avx(auVar29,3);
          *(undefined4 *)(pauVar12[1] + 0x18) = uVar1;
        }
        if ((uVar11 & 0x10) != 0) {
          *(float *)(pauVar12[2] + 8) = auVar32._16_4_;
        }
        if ((uVar11 & 0x20) != 0) {
          uVar1 = vextractps_avx(auVar65,1);
          *(undefined4 *)(pauVar12[2] + 0x18) = uVar1;
        }
        if ((uVar11 & 0x40) != 0) {
          uVar1 = vextractps_avx(auVar65,2);
          *(undefined4 *)(pauVar12[3] + 8) = uVar1;
        }
        if (cVar10 < '\0') {
          uVar1 = vextractps_avx(auVar65,3);
          *(undefined4 *)(pauVar12[3] + 0x18) = uVar1;
        }
        if ((uVar11 & 1) != 0) {
          *(int *)(*pauVar12 + 0xc) = auVar21._0_4_;
        }
        if ((uVar11 & 2) != 0) {
          uVar1 = vextractps_avx(auVar48,1);
          *(undefined4 *)(*pauVar12 + 0x1c) = uVar1;
        }
        if ((uVar11 & 4) != 0) {
          uVar1 = vextractps_avx(auVar48,2);
          *(undefined4 *)(pauVar12[1] + 0xc) = uVar1;
        }
        if ((uVar11 & 8) != 0) {
          uVar1 = vextractps_avx(auVar48,3);
          *(undefined4 *)(pauVar12[1] + 0x1c) = uVar1;
        }
        if ((uVar11 & 0x10) != 0) {
          *(int *)(pauVar12[2] + 0xc) = auVar21._16_4_;
        }
        if ((uVar11 & 0x20) != 0) {
          uVar1 = vextractps_avx(auVar64,1);
          *(undefined4 *)(pauVar12[2] + 0x1c) = uVar1;
        }
        if ((uVar11 & 0x40) != 0) {
          uVar1 = vextractps_avx(auVar64,2);
          *(undefined4 *)(pauVar12[3] + 0xc) = uVar1;
        }
        if (cVar10 < '\0') {
          uVar1 = vextractps_avx(auVar64,3);
          *(undefined4 *)(pauVar12[3] + 0x1c) = uVar1;
        }
      }
    }
  }
  return;
}

// ApplySphericalConstraints_avx2 @ 140326260

void ApplySphericalConstraints_avx2(void)

{
  ApplySphericalConstraintsWithMap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_CunfCunfCuniCuni_avx2
            ();
  return;
}

// ApplyLegacySphericalBackstopConstraintsWithMaps_avx2 @ 1403262a0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLegacySphericalBackstopConstraintsWithMaps_avx2
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,float param_6,float param_7,float param_8,float param_9,int param_10,uint param_11)

{
  float *pfVar1;
  undefined1 (*pauVar2) [32];
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  char cVar12;
  uint uVar13;
  undefined1 (*pauVar14) [32];
  int iVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  float fVar28;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [16];
  undefined1 auVar48 [16];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  float fVar49;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined1 auVar50 [16];
  float fVar57;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined1 auVar58 [16];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [16];
  undefined1 auVar65 [32];
  undefined1 auVar68 [16];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [64];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  float fVar76;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  undefined1 auVar77 [32];
  float fVar84;
  undefined1 auVar85 [32];
  uint uVar86;
  undefined1 auVar87 [16];
  uint uVar89;
  uint uVar90;
  uint uVar91;
  uint uVar92;
  uint uVar94;
  uint uVar95;
  uint uVar96;
  undefined1 auVar88 [32];
  undefined1 auVar93 [16];
  undefined1 auVar97 [32];
  float fVar98;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  undefined1 auVar99 [32];
  undefined1 auVar100 [32];
  float fVar107;
  undefined1 auVar108 [32];
  
  uVar13 = param_11 + 7;
  if (-1 < (int)param_11) {
    uVar13 = param_11;
  }
  if ((int)(uVar13 & 0xfffffff8) < 1) {
    uVar18 = 0;
    if ((int)param_11 < 1) {
      return;
    }
  }
  else {
    lVar16 = (longlong)param_10 * 0x10 + param_1;
    lVar20 = (longlong)param_10 * 0xc + 0x40;
    uVar21 = 0;
    auVar73 = ZEXT1264(ZEXT812(0));
    uVar18 = 0;
    do {
      auVar24 = *(undefined1 (*) [32])(lVar16 + uVar21 * 4);
      auVar41 = *(undefined1 (*) [32])(lVar16 + 0x20 + uVar21 * 4);
      auVar51 = *(undefined1 (*) [32])(lVar16 + 0x40 + uVar21 * 4);
      auVar30 = *(undefined1 (*) [32])(lVar16 + 0x60 + uVar21 * 4);
      auVar85 = vperm2f128_avx(auVar24,auVar51,0x20);
      auVar66 = vperm2f128_avx(auVar24,auVar51,0x31);
      auVar25 = vperm2f128_avx(auVar41,auVar30,0x20);
      auVar52 = vperm2f128_avx(auVar41,auVar30,0x31);
      auVar23 = vunpckhps_avx(auVar85,auVar66);
      auVar40 = vunpckhps_avx(auVar25,auVar52);
      auVar43 = vunpckhpd_avx(auVar23,auVar40);
      auVar29 = vcmpps_avx(auVar73._0_32_,auVar43,4);
      if ((((((((SUB321(auVar29 >> 0x1f,0) & 1) != 0 || (SUB321(auVar29 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar29 >> 0x5f,0) & 1) != 0) || SUB321(auVar29 >> 0x7f,0) != '\0') ||
            (SUB321(auVar29 >> 0x9f,0) & 1) != 0) || SUB321(auVar29 >> 0xbf,0) != '\0') ||
          (SUB321(auVar29 >> 0xdf,0) & 1) != 0) || auVar29[0x1f] < '\0') {
        auVar71 = vunpcklpd_avx(auVar23,auVar40);
        auVar23 = vunpcklps_avx(auVar85,auVar66);
        auVar40 = vunpcklps_avx(auVar25,auVar52);
        auVar65 = vunpckhpd_avx(auVar23,auVar40);
        auVar44 = vunpcklpd_avx(auVar23,auVar40);
        auVar23 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar20);
        auVar40 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar20);
        auVar85 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar40);
        auVar66 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,auVar23);
        auVar85 = vblendps_avx(auVar66,auVar85,0x88);
        auVar66 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar40);
        auVar25 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,*(undefined1 (*) [32])(param_2 + lVar20));
        auVar66 = vblendps_avx(auVar25,auVar66,0x13);
        auVar69 = vperm2f128_avx(auVar85,auVar66,0x31);
        auVar23 = vblendps_avx(auVar40,auVar23,0x24);
        auVar23 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar23);
        auVar40 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,*(undefined1 (*) [32])(param_2 + lVar20));
        auVar25 = vblendps_avx(auVar23,auVar40,0xe0);
        auVar23 = *(undefined1 (*) [32])(param_3 + -0x40 + lVar20);
        auVar40 = *(undefined1 (*) [32])(param_3 + -0x20 + lVar20);
        auVar52 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar40);
        auVar74 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,auVar23);
        auVar52 = vblendps_avx(auVar74,auVar52,0x88);
        auVar74 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar40);
        auVar77 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,*(undefined1 (*) [32])(param_3 + lVar20));
        auVar74 = vblendps_avx(auVar77,auVar74,0x13);
        auVar45 = vperm2f128_avx(auVar52,auVar74,0x31);
        auVar23 = vblendps_avx(auVar40,auVar23,0x24);
        auVar23 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar23);
        auVar40 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,*(undefined1 (*) [32])(param_3 + lVar20));
        auVar23 = vblendps_avx(auVar23,auVar40,0xe0);
        pfVar1 = (float *)(param_4 + (uVar21 & 0xffffffff));
        auVar99._0_4_ = param_7 * *pfVar1 + param_6;
        auVar99._4_4_ = param_7 * pfVar1[1] + param_6;
        auVar99._8_4_ = param_7 * pfVar1[2] + param_6;
        auVar99._12_4_ = param_7 * pfVar1[3] + param_6;
        auVar99._16_4_ = param_7 * pfVar1[4] + param_6;
        auVar99._20_4_ = param_7 * pfVar1[5] + param_6;
        auVar99._24_4_ = param_7 * pfVar1[6] + param_6;
        auVar99._28_4_ = param_7 * pfVar1[7] + param_6;
        pfVar1 = (float *)(param_5 + (uVar21 & 0xffffffff));
        auVar39._0_4_ = param_9 * *pfVar1 + param_8;
        auVar39._4_4_ = param_9 * pfVar1[1] + param_8;
        auVar39._8_4_ = param_9 * pfVar1[2] + param_8;
        auVar39._12_4_ = param_9 * pfVar1[3] + param_8;
        auVar39._16_4_ = param_9 * pfVar1[4] + param_8;
        auVar39._20_4_ = param_9 * pfVar1[5] + param_8;
        auVar39._24_4_ = param_9 * pfVar1[6] + param_8;
        auVar39._28_4_ = param_9 * pfVar1[7] + param_8;
        auVar62._0_4_ = -(auVar52._0_4_ * auVar99._0_4_) + auVar85._0_4_;
        auVar62._4_4_ = -(auVar52._4_4_ * auVar99._4_4_) + auVar85._4_4_;
        auVar62._8_4_ = -(auVar52._8_4_ * auVar99._8_4_) + auVar85._8_4_;
        auVar62._12_4_ = -(auVar52._12_4_ * auVar99._12_4_) + auVar85._12_4_;
        auVar62._16_4_ = -(auVar74._0_4_ * auVar99._16_4_) + auVar66._0_4_;
        auVar62._20_4_ = -(auVar74._4_4_ * auVar99._20_4_) + auVar66._4_4_;
        auVar62._24_4_ = -(auVar74._8_4_ * auVar99._24_4_) + auVar66._8_4_;
        auVar62._28_4_ = -(auVar74._12_4_ * auVar99._28_4_) + auVar66._12_4_;
        auVar22._0_4_ = -(auVar45._0_4_ * auVar99._0_4_) + auVar69._0_4_;
        auVar22._4_4_ = -(auVar45._4_4_ * auVar99._4_4_) + auVar69._4_4_;
        auVar22._8_4_ = -(auVar45._8_4_ * auVar99._8_4_) + auVar69._8_4_;
        auVar22._12_4_ = -(auVar45._12_4_ * auVar99._12_4_) + auVar69._12_4_;
        auVar22._16_4_ = -(auVar45._16_4_ * auVar99._16_4_) + auVar69._16_4_;
        auVar22._20_4_ = -(auVar45._20_4_ * auVar99._20_4_) + auVar69._20_4_;
        auVar22._24_4_ = -(auVar45._24_4_ * auVar99._24_4_) + auVar69._24_4_;
        auVar22._28_4_ = -(auVar45._28_4_ * auVar99._28_4_) + auVar69._28_4_;
        auVar77 = vsubps_avx(auVar99,auVar39);
        auVar100._0_4_ = -(auVar23._0_4_ * auVar99._0_4_) + auVar25._0_4_;
        auVar100._4_4_ = -(auVar23._4_4_ * auVar99._4_4_) + auVar25._4_4_;
        auVar100._8_4_ = -(auVar23._8_4_ * auVar99._8_4_) + auVar25._8_4_;
        auVar100._12_4_ = -(auVar23._12_4_ * auVar99._12_4_) + auVar25._12_4_;
        auVar100._16_4_ = -(auVar23._16_4_ * auVar99._16_4_) + auVar25._16_4_;
        auVar100._20_4_ = -(auVar23._20_4_ * auVar99._20_4_) + auVar25._20_4_;
        auVar100._24_4_ = -(auVar23._24_4_ * auVar99._24_4_) + auVar25._24_4_;
        auVar100._28_4_ = -(auVar23._28_4_ * auVar99._28_4_) + auVar25._28_4_;
        auVar40 = vsubps_avx(auVar44,auVar62);
        auVar65 = vsubps_avx(auVar65,auVar22);
        auVar71 = vsubps_avx(auVar71,auVar100);
        fVar4 = auVar65._0_4_;
        fVar5 = auVar65._4_4_;
        fVar6 = auVar65._8_4_;
        fVar7 = auVar65._12_4_;
        fVar8 = auVar65._16_4_;
        fVar9 = auVar65._20_4_;
        fVar10 = auVar65._24_4_;
        fVar11 = auVar65._28_4_;
        fVar49 = auVar40._0_4_;
        fVar54 = auVar40._4_4_;
        fVar55 = auVar40._8_4_;
        fVar56 = auVar40._12_4_;
        fVar57 = auVar40._16_4_;
        fVar59 = auVar40._20_4_;
        fVar60 = auVar40._24_4_;
        fVar61 = auVar40._28_4_;
        fVar76 = auVar71._0_4_;
        auVar65._0_4_ = fVar76 * fVar76 + fVar49 * fVar49 + fVar4 * fVar4;
        fVar78 = auVar71._4_4_;
        auVar65._4_4_ = fVar78 * fVar78 + fVar54 * fVar54 + fVar5 * fVar5;
        fVar79 = auVar71._8_4_;
        auVar65._8_4_ = fVar79 * fVar79 + fVar55 * fVar55 + fVar6 * fVar6;
        fVar80 = auVar71._12_4_;
        auVar65._12_4_ = fVar80 * fVar80 + fVar56 * fVar56 + fVar7 * fVar7;
        fVar81 = auVar71._16_4_;
        auVar65._16_4_ = fVar81 * fVar81 + fVar57 * fVar57 + fVar8 * fVar8;
        fVar82 = auVar71._20_4_;
        auVar65._20_4_ = fVar82 * fVar82 + fVar59 * fVar59 + fVar9 * fVar9;
        fVar83 = auVar71._24_4_;
        auVar65._24_4_ = fVar83 * fVar83 + fVar60 * fVar60 + fVar10 * fVar10;
        fVar84 = auVar71._28_4_;
        auVar65._28_4_ = fVar84 * fVar84 + fVar61 * fVar61 + fVar11 * fVar11;
        auVar40 = vsqrtps_avx(auVar65);
        auVar40 = vdivps_avx(auVar39,auVar40);
        fVar28 = auVar40._0_4_;
        fVar32 = auVar40._4_4_;
        fVar33 = auVar40._8_4_;
        fVar34 = auVar40._12_4_;
        fVar35 = auVar40._16_4_;
        fVar36 = auVar40._20_4_;
        fVar37 = auVar40._24_4_;
        fVar38 = auVar40._28_4_;
        fVar98 = auVar77._0_4_;
        auVar71._0_4_ = -(fVar98 * auVar52._0_4_) + auVar85._0_4_;
        fVar101 = auVar77._4_4_;
        auVar71._4_4_ = -(fVar101 * auVar52._4_4_) + auVar85._4_4_;
        fVar102 = auVar77._8_4_;
        auVar71._8_4_ = -(fVar102 * auVar52._8_4_) + auVar85._8_4_;
        fVar103 = auVar77._12_4_;
        auVar71._12_4_ = -(fVar103 * auVar52._12_4_) + auVar85._12_4_;
        fVar104 = auVar77._16_4_;
        auVar71._16_4_ = -(fVar104 * auVar74._0_4_) + auVar66._0_4_;
        fVar105 = auVar77._20_4_;
        auVar71._20_4_ = -(fVar105 * auVar74._4_4_) + auVar66._4_4_;
        fVar106 = auVar77._24_4_;
        auVar71._24_4_ = -(fVar106 * auVar74._8_4_) + auVar66._8_4_;
        fVar107 = auVar77._28_4_;
        auVar71._28_4_ = -(fVar107 * auVar74._12_4_) + auVar66._12_4_;
        auVar40._0_4_ = auVar39._0_4_ * auVar39._0_4_;
        auVar40._4_4_ = auVar39._4_4_ * auVar39._4_4_;
        auVar40._8_4_ = auVar39._8_4_ * auVar39._8_4_;
        auVar40._12_4_ = auVar39._12_4_ * auVar39._12_4_;
        auVar40._16_4_ = auVar39._16_4_ * auVar39._16_4_;
        auVar40._20_4_ = auVar39._20_4_ * auVar39._20_4_;
        auVar40._24_4_ = auVar39._24_4_ * auVar39._24_4_;
        auVar40._28_4_ = auVar39._28_4_ * auVar39._28_4_;
        auVar40 = vcmpps_avx(auVar65,auVar40,1);
        auVar85._4_4_ = __real_322bcc77;
        auVar85._0_4_ = __real_322bcc77;
        auVar85._8_4_ = __real_322bcc77;
        auVar85._12_4_ = __real_322bcc77;
        auVar85._16_4_ = __real_322bcc77;
        auVar85._20_4_ = __real_322bcc77;
        auVar85._24_4_ = __real_322bcc77;
        auVar85._28_4_ = __real_322bcc77;
        auVar85 = vcmpps_avx(auVar65,auVar85,1);
        uVar86 = auVar40._0_4_;
        auVar66._0_4_ = uVar86 & (uint)(fVar28 * fVar49 + auVar62._0_4_);
        uVar89 = auVar40._4_4_;
        auVar66._4_4_ = uVar89 & (uint)(fVar32 * fVar54 + auVar62._4_4_);
        uVar90 = auVar40._8_4_;
        auVar66._8_4_ = uVar90 & (uint)(fVar33 * fVar55 + auVar62._8_4_);
        uVar91 = auVar40._12_4_;
        auVar66._12_4_ = uVar91 & (uint)(fVar34 * fVar56 + auVar62._12_4_);
        uVar92 = auVar40._16_4_;
        auVar66._16_4_ = uVar92 & (uint)(fVar35 * fVar57 + auVar62._16_4_);
        uVar94 = auVar40._20_4_;
        auVar66._20_4_ = uVar94 & (uint)(fVar36 * fVar59 + auVar62._20_4_);
        uVar95 = auVar40._24_4_;
        auVar66._24_4_ = uVar95 & (uint)(fVar37 * fVar60 + auVar62._24_4_);
        uVar96 = auVar40._28_4_;
        auVar66._28_4_ = uVar96 & (uint)(fVar38 * fVar61 + auVar62._28_4_);
        auVar40 = vblendvps_avx(auVar66,auVar71,auVar85);
        auVar73 = ZEXT1264(ZEXT412(0)) << 0x20;
        auVar66 = vcmpps_avx(ZEXT1232(ZEXT412(0)) << 0x20,auVar40,4);
        auVar52._0_4_ = auVar66._0_4_ & auVar29._0_4_;
        auVar52._4_4_ = auVar66._4_4_ & auVar29._4_4_;
        auVar52._8_4_ = auVar66._8_4_ & auVar29._8_4_;
        auVar52._12_4_ = auVar66._12_4_ & auVar29._12_4_;
        auVar52._16_4_ = auVar66._16_4_ & auVar29._16_4_;
        auVar52._20_4_ = auVar66._20_4_ & auVar29._20_4_;
        auVar52._24_4_ = auVar66._24_4_ & auVar29._24_4_;
        auVar52._28_4_ = auVar66._28_4_ & auVar29._28_4_;
        uVar19 = vmovmskps_avx(auVar52);
        if (uVar19 != 0) {
          auVar74._0_4_ = -(fVar98 * auVar45._0_4_) + auVar69._0_4_;
          auVar74._4_4_ = -(fVar101 * auVar45._4_4_) + auVar69._4_4_;
          auVar74._8_4_ = -(fVar102 * auVar45._8_4_) + auVar69._8_4_;
          auVar74._12_4_ = -(fVar103 * auVar45._12_4_) + auVar69._12_4_;
          auVar74._16_4_ = -(fVar104 * auVar45._16_4_) + auVar69._16_4_;
          auVar74._20_4_ = -(fVar105 * auVar45._20_4_) + auVar69._20_4_;
          auVar74._24_4_ = -(fVar106 * auVar45._24_4_) + auVar69._24_4_;
          auVar74._28_4_ = -(fVar107 * auVar45._28_4_) + auVar69._28_4_;
          auVar77._0_4_ = -(fVar98 * auVar23._0_4_) + auVar25._0_4_;
          auVar77._4_4_ = -(fVar101 * auVar23._4_4_) + auVar25._4_4_;
          auVar77._8_4_ = -(fVar102 * auVar23._8_4_) + auVar25._8_4_;
          auVar77._12_4_ = -(fVar103 * auVar23._12_4_) + auVar25._12_4_;
          auVar77._16_4_ = -(fVar104 * auVar23._16_4_) + auVar25._16_4_;
          auVar77._20_4_ = -(fVar105 * auVar23._20_4_) + auVar25._20_4_;
          auVar77._24_4_ = -(fVar106 * auVar23._24_4_) + auVar25._24_4_;
          auVar77._28_4_ = -(fVar107 * auVar23._28_4_) + auVar25._28_4_;
          auVar29._0_4_ = uVar86 & (uint)(fVar28 * fVar4 + auVar22._0_4_);
          auVar29._4_4_ = uVar89 & (uint)(fVar32 * fVar5 + auVar22._4_4_);
          auVar29._8_4_ = uVar90 & (uint)(fVar33 * fVar6 + auVar22._8_4_);
          auVar29._12_4_ = uVar91 & (uint)(fVar34 * fVar7 + auVar22._12_4_);
          auVar29._16_4_ = uVar92 & (uint)(fVar35 * fVar8 + auVar22._16_4_);
          auVar29._20_4_ = uVar94 & (uint)(fVar36 * fVar9 + auVar22._20_4_);
          auVar29._24_4_ = uVar95 & (uint)(fVar37 * fVar10 + auVar22._24_4_);
          auVar29._28_4_ = uVar96 & (uint)(fVar38 * fVar11 + auVar22._28_4_);
          auVar29 = vblendvps_avx(auVar29,auVar74,auVar85);
          auVar23._0_4_ = uVar86 & (uint)(fVar28 * fVar76 + auVar100._0_4_);
          auVar23._4_4_ = uVar89 & (uint)(fVar32 * fVar78 + auVar100._4_4_);
          auVar23._8_4_ = uVar90 & (uint)(fVar33 * fVar79 + auVar100._8_4_);
          auVar23._12_4_ = uVar91 & (uint)(fVar34 * fVar80 + auVar100._12_4_);
          auVar23._16_4_ = uVar92 & (uint)(fVar35 * fVar81 + auVar100._16_4_);
          auVar23._20_4_ = uVar94 & (uint)(fVar36 * fVar82 + auVar100._20_4_);
          auVar23._24_4_ = uVar95 & (uint)(fVar37 * fVar83 + auVar100._24_4_);
          auVar23._28_4_ = uVar96 & (uint)(fVar38 * fVar84 + auVar100._28_4_);
          auVar23 = vblendvps_avx(auVar23,auVar77,auVar85);
          cVar12 = (char)uVar19;
          if (cVar12 == -1) {
            auVar24 = vunpcklps_avx(auVar40,auVar29);
            auVar41 = vunpcklps_avx(auVar23,auVar43);
            auVar30 = vunpcklpd_avx(auVar24,auVar41);
            auVar24 = vunpckhpd_avx(auVar24,auVar41);
            auVar41 = vunpckhps_avx(auVar40,auVar29);
            auVar51 = vunpckhps_avx(auVar23,auVar43);
            auVar29 = vunpcklpd_avx(auVar41,auVar51);
            auVar43._16_16_ = auVar24._0_16_;
            auVar43._0_16_ = auVar30._0_16_;
            *(undefined1 (*) [32])(lVar16 + uVar21 * 4) = auVar43;
            auVar41 = vunpckhpd_avx(auVar41,auVar51);
            auVar51._16_16_ = auVar41._0_16_;
            auVar51._0_16_ = auVar29._0_16_;
            *(undefined1 (*) [32])(lVar16 + 0x20 + uVar21 * 4) = auVar51;
            auVar24 = vperm2f128_avx(auVar30,auVar24,0x31);
            *(undefined1 (*) [32])(lVar16 + 0x40 + uVar21 * 4) = auVar24;
            auVar24 = vperm2f128_avx(auVar29,auVar41,0x31);
            *(undefined1 (*) [32])(lVar16 + 0x60 + uVar21 * 4) = auVar24;
          }
          else {
            auVar64 = auVar40._0_16_;
            auVar68 = auVar40._16_16_;
            auVar50 = auVar29._0_16_;
            auVar58 = auVar29._16_16_;
            auVar42 = auVar23._0_16_;
            auVar48 = auVar23._16_16_;
            if ((uVar19 & 1) != 0) {
              *(int *)(lVar16 + uVar21 * 4) = auVar40._0_4_;
            }
            if ((uVar19 & 2) != 0) {
              uVar3 = vextractps_avx(auVar64,1);
              *(undefined4 *)(lVar16 + 0x10 + uVar21 * 4) = uVar3;
            }
            if ((uVar19 & 4) != 0) {
              uVar3 = vextractps_avx(auVar64,2);
              *(undefined4 *)(lVar16 + 0x20 + uVar21 * 4) = uVar3;
            }
            if ((uVar19 & 8) != 0) {
              uVar3 = vextractps_avx(auVar64,3);
              *(undefined4 *)(lVar16 + 0x30 + uVar21 * 4) = uVar3;
            }
            if ((uVar19 & 0x10) != 0) {
              *(int *)(lVar16 + 0x40 + uVar21 * 4) = auVar40._16_4_;
            }
            if ((uVar19 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar68,1);
              *(undefined4 *)(lVar16 + 0x50 + uVar21 * 4) = uVar3;
            }
            if ((uVar19 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar68,2);
              *(undefined4 *)(lVar16 + 0x60 + uVar21 * 4) = uVar3;
            }
            if (cVar12 < '\0') {
              uVar3 = vextractps_avx(auVar68,3);
              *(undefined4 *)(lVar16 + 0x70 + uVar21 * 4) = uVar3;
            }
            if ((uVar19 & 1) != 0) {
              *(int *)(lVar16 + 4 + uVar21 * 4) = auVar29._0_4_;
            }
            if ((uVar19 & 2) != 0) {
              uVar3 = vextractps_avx(auVar50,1);
              *(undefined4 *)(lVar16 + 0x14 + uVar21 * 4) = uVar3;
            }
            if ((uVar19 & 4) != 0) {
              uVar3 = vextractps_avx(auVar50,2);
              *(undefined4 *)(lVar16 + 0x24 + uVar21 * 4) = uVar3;
            }
            if ((uVar19 & 8) != 0) {
              uVar3 = vextractps_avx(auVar50,3);
              *(undefined4 *)(lVar16 + 0x34 + uVar21 * 4) = uVar3;
            }
            if ((uVar19 & 0x10) != 0) {
              *(int *)(lVar16 + 0x44 + uVar21 * 4) = auVar29._16_4_;
            }
            if ((uVar19 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar58,1);
              *(undefined4 *)(lVar16 + 0x54 + uVar21 * 4) = uVar3;
            }
            if ((uVar19 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar58,2);
              *(undefined4 *)(lVar16 + 100 + uVar21 * 4) = uVar3;
            }
            if (cVar12 < '\0') {
              uVar3 = vextractps_avx(auVar58,3);
              *(undefined4 *)(lVar16 + 0x74 + uVar21 * 4) = uVar3;
            }
            if ((uVar19 & 1) != 0) {
              *(int *)(lVar16 + 8 + uVar21 * 4) = auVar23._0_4_;
            }
            if ((uVar19 & 2) != 0) {
              uVar3 = vextractps_avx(auVar42,1);
              *(undefined4 *)(lVar16 + 0x18 + uVar21 * 4) = uVar3;
            }
            if ((uVar19 & 4) != 0) {
              uVar3 = vextractps_avx(auVar42,2);
              *(undefined4 *)(lVar16 + 0x28 + uVar21 * 4) = uVar3;
            }
            if ((uVar19 & 8) != 0) {
              uVar3 = vextractps_avx(auVar42,3);
              *(undefined4 *)(lVar16 + 0x38 + uVar21 * 4) = uVar3;
            }
            if ((uVar19 & 0x10) != 0) {
              *(int *)(lVar16 + 0x48 + uVar21 * 4) = auVar23._16_4_;
            }
            if ((uVar19 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar48,1);
              *(undefined4 *)(lVar16 + 0x58 + uVar21 * 4) = uVar3;
            }
            if ((uVar19 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar48,2);
              *(undefined4 *)(lVar16 + 0x68 + uVar21 * 4) = uVar3;
            }
            if (cVar12 < '\0') {
              uVar3 = vextractps_avx(auVar48,3);
              *(undefined4 *)(lVar16 + 0x78 + uVar21 * 4) = uVar3;
            }
            if ((uVar19 & 1) != 0) {
              uVar3 = vextractps_avx(auVar24._0_16_,3);
              *(undefined4 *)(lVar16 + 0xc + uVar21 * 4) = uVar3;
            }
            if ((uVar19 & 2) != 0) {
              uVar3 = vextractps_avx(auVar24._16_16_,3);
              *(undefined4 *)(lVar16 + 0x1c + uVar21 * 4) = uVar3;
            }
            if ((uVar19 & 4) != 0) {
              uVar3 = vextractps_avx(auVar41._0_16_,3);
              *(undefined4 *)(lVar16 + 0x2c + uVar21 * 4) = uVar3;
            }
            if ((uVar19 & 8) != 0) {
              uVar3 = vextractps_avx(auVar41._16_16_,3);
              *(undefined4 *)(lVar16 + 0x3c + uVar21 * 4) = uVar3;
            }
            if ((uVar19 & 0x10) != 0) {
              uVar3 = vextractps_avx(auVar51._0_16_,3);
              *(undefined4 *)(lVar16 + 0x4c + uVar21 * 4) = uVar3;
            }
            if ((uVar19 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar51._16_16_,3);
              *(undefined4 *)(lVar16 + 0x5c + uVar21 * 4) = uVar3;
            }
            if ((uVar19 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar30._0_16_,3);
              *(undefined4 *)(lVar16 + 0x6c + uVar21 * 4) = uVar3;
            }
            if (cVar12 < '\0') {
              uVar3 = vextractps_avx(auVar30._16_16_,3);
              *(undefined4 *)(lVar16 + 0x7c + uVar21 * 4) = uVar3;
            }
          }
        }
      }
      uVar18 = uVar18 + 8;
      uVar21 = uVar21 + 0x20;
      lVar20 = lVar20 + 0x60;
    } while (uVar18 < (uVar13 & 0xfffffff8));
    if ((int)param_11 <= (int)uVar18) {
      return;
    }
  }
  iVar17 = (int)uVar18;
  auVar24._4_4_ = iVar17;
  auVar24._0_4_ = iVar17;
  auVar24._8_4_ = iVar17;
  auVar24._12_4_ = iVar17;
  auVar24._16_4_ = iVar17;
  auVar24._20_4_ = iVar17;
  auVar24._24_4_ = iVar17;
  auVar24._28_4_ = iVar17;
  auVar24 = vpor_avx2(auVar24,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar41._4_4_ = param_11;
  auVar41._0_4_ = param_11;
  auVar41._8_4_ = param_11;
  auVar41._12_4_ = param_11;
  auVar41._16_4_ = param_11;
  auVar41._20_4_ = param_11;
  auVar41._24_4_ = param_11;
  auVar41._28_4_ = param_11;
  auVar24 = vpcmpgtd_avx2(auVar41,auVar24);
  lVar20 = (longlong)(param_10 + iVar17);
  pauVar14 = (undefined1 (*) [32])(param_1 + lVar20 * 0x10);
  iVar15 = vmovmskps_avx(auVar24);
  if (iVar15 == 0xff) {
    auVar51 = vperm2f128_avx(*pauVar14,pauVar14[2],0x20);
    auVar30 = vperm2f128_avx(*pauVar14,pauVar14[2],0x31);
    auVar29 = vperm2f128_avx(pauVar14[1],pauVar14[3],0x20);
    auVar23 = vperm2f128_avx(pauVar14[1],pauVar14[3],0x31);
    auVar41 = vunpcklps_avx(auVar51,auVar30);
    auVar51 = vunpckhps_avx(auVar51,auVar30);
    auVar43 = vunpcklps_avx(auVar29,auVar23);
    auVar30 = vunpckhps_avx(auVar29,auVar23);
    auVar29 = vunpcklpd_avx(auVar41,auVar43);
    auVar41 = vunpckhpd_avx(auVar41,auVar43);
    auVar43 = vunpcklpd_avx(auVar51,auVar30);
    auVar51 = vunpckhpd_avx(auVar51,auVar30);
  }
  else {
    auVar29 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar24);
    auVar41 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar24);
    auVar43 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar24);
    auVar51 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar24);
  }
  auVar30 = vmaskmovps_avx(auVar24,auVar29);
  auVar41 = vmaskmovps_avx(auVar24,auVar41);
  auVar29 = vmaskmovps_avx(auVar24,auVar43);
  auVar43 = vcmpps_avx(auVar51,ZEXT832(0) << 0x20,4);
  auVar43 = auVar24 & auVar43;
  if ((((((((SUB321(auVar43 >> 0x1f,0) & 1) != 0 || (SUB321(auVar43 >> 0x3f,0) & 1) != 0) ||
          (SUB321(auVar43 >> 0x5f,0) & 1) != 0) || SUB321(auVar43 >> 0x7f,0) != '\0') ||
        (SUB321(auVar43 >> 0x9f,0) & 1) != 0) || SUB321(auVar43 >> 0xbf,0) != '\0') ||
      (SUB321(auVar43 >> 0xdf,0) & 1) != 0) || auVar43[0x1f] < '\0') {
    pauVar2 = (undefined1 (*) [32])(param_2 + lVar20 * 0xc);
    if ((char)iVar15 == -1) {
      auVar43 = pauVar2[1];
      auVar23 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar43);
      auVar40 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,*pauVar2);
      auVar23 = vblendps_avx(auVar40,auVar23,0x88);
      auVar40 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar43);
      auVar85 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,pauVar2[2]);
      auVar40 = vblendps_avx(auVar85,auVar40,0x13);
      auVar44._16_16_ = auVar40._0_16_;
      auVar44._0_16_ = auVar23._0_16_;
      auVar52 = vperm2f128_avx(auVar23,auVar40,0x31);
      auVar43 = vblendps_avx(auVar43,*pauVar2,0x24);
      auVar43 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar43);
      auVar23 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,pauVar2[2]);
      auVar85 = vblendps_avx(auVar43,auVar23,0xe0);
      auVar43 = *(undefined1 (*) [32])(param_3 + lVar20 * 0xc);
      auVar23 = *(undefined1 (*) [32])(param_3 + 0x20 + lVar20 * 0xc);
      auVar40 = *(undefined1 (*) [32])(param_3 + 0x40 + lVar20 * 0xc);
      auVar66 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar23);
      auVar25 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar43);
      auVar66 = vblendps_avx(auVar25,auVar66,0x88);
      auVar25 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar23);
      auVar74 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,auVar40);
      auVar25 = vblendps_avx(auVar74,auVar25,0x13);
      auVar69._16_16_ = auVar25._0_16_;
      auVar69._0_16_ = auVar66._0_16_;
      auVar66 = vperm2f128_avx(auVar66,auVar25,0x31);
      auVar43 = vblendps_avx(auVar23,auVar43,0x24);
      auVar43 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar43);
      auVar23 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,auVar40);
      auVar43 = vblendps_avx(auVar43,auVar23,0xe0);
    }
    else {
      auVar44 = vgatherdps(ZEXT832(0) << 0x20,auVar24);
      auVar52 = vgatherdps(ZEXT832(0) << 0x20,auVar24);
      auVar85 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar24);
      auVar69 = vgatherdps(ZEXT832(0),auVar24);
      auVar66 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar24);
      auVar43 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar24);
    }
    auVar23 = vmaskmovps_avx(auVar24,*(undefined1 (*) [32])(param_4 + (iVar17 << 2)));
    auVar108._0_4_ = param_7 * auVar23._0_4_ + param_6;
    auVar108._4_4_ = param_7 * auVar23._4_4_ + param_6;
    auVar108._8_4_ = param_7 * auVar23._8_4_ + param_6;
    auVar108._12_4_ = param_7 * auVar23._12_4_ + param_6;
    auVar108._16_4_ = param_7 * auVar23._16_4_ + param_6;
    auVar108._20_4_ = param_7 * auVar23._20_4_ + param_6;
    auVar108._24_4_ = param_7 * auVar23._24_4_ + param_6;
    auVar108._28_4_ = param_7 * auVar23._28_4_ + param_6;
    auVar23 = vmaskmovps_avx(auVar24,*(undefined1 (*) [32])(param_5 + (iVar17 << 2)));
    auVar97._0_4_ = param_9 * auVar23._0_4_ + param_8;
    auVar97._4_4_ = param_9 * auVar23._4_4_ + param_8;
    auVar97._8_4_ = param_9 * auVar23._8_4_ + param_8;
    auVar97._12_4_ = param_9 * auVar23._12_4_ + param_8;
    auVar97._16_4_ = param_9 * auVar23._16_4_ + param_8;
    auVar97._20_4_ = param_9 * auVar23._20_4_ + param_8;
    auVar97._24_4_ = param_9 * auVar23._24_4_ + param_8;
    auVar97._28_4_ = param_9 * auVar23._28_4_ + param_8;
    auVar88._0_4_ = -(auVar69._0_4_ * auVar108._0_4_) + auVar44._0_4_;
    auVar88._4_4_ = -(auVar69._4_4_ * auVar108._4_4_) + auVar44._4_4_;
    auVar88._8_4_ = -(auVar69._8_4_ * auVar108._8_4_) + auVar44._8_4_;
    auVar88._12_4_ = -(auVar69._12_4_ * auVar108._12_4_) + auVar44._12_4_;
    auVar88._16_4_ = -(auVar69._16_4_ * auVar108._16_4_) + auVar44._16_4_;
    auVar88._20_4_ = -(auVar69._20_4_ * auVar108._20_4_) + auVar44._20_4_;
    auVar88._24_4_ = -(auVar69._24_4_ * auVar108._24_4_) + auVar44._24_4_;
    auVar88._28_4_ = -(auVar69._28_4_ * auVar108._28_4_) + auVar44._28_4_;
    auVar72._0_4_ = -(auVar66._0_4_ * auVar108._0_4_) + auVar52._0_4_;
    auVar72._4_4_ = -(auVar66._4_4_ * auVar108._4_4_) + auVar52._4_4_;
    auVar72._8_4_ = -(auVar66._8_4_ * auVar108._8_4_) + auVar52._8_4_;
    auVar72._12_4_ = -(auVar66._12_4_ * auVar108._12_4_) + auVar52._12_4_;
    auVar72._16_4_ = -(auVar66._16_4_ * auVar108._16_4_) + auVar52._16_4_;
    auVar72._20_4_ = -(auVar66._20_4_ * auVar108._20_4_) + auVar52._20_4_;
    auVar72._24_4_ = -(auVar66._24_4_ * auVar108._24_4_) + auVar52._24_4_;
    auVar72._28_4_ = -(auVar66._28_4_ * auVar108._28_4_) + auVar52._28_4_;
    auVar75._0_4_ = -(auVar43._0_4_ * auVar108._0_4_) + auVar85._0_4_;
    auVar75._4_4_ = -(auVar43._4_4_ * auVar108._4_4_) + auVar85._4_4_;
    auVar75._8_4_ = -(auVar43._8_4_ * auVar108._8_4_) + auVar85._8_4_;
    auVar75._12_4_ = -(auVar43._12_4_ * auVar108._12_4_) + auVar85._12_4_;
    auVar75._16_4_ = -(auVar43._16_4_ * auVar108._16_4_) + auVar85._16_4_;
    auVar75._20_4_ = -(auVar43._20_4_ * auVar108._20_4_) + auVar85._20_4_;
    auVar75._24_4_ = -(auVar43._24_4_ * auVar108._24_4_) + auVar85._24_4_;
    auVar75._28_4_ = -(auVar43._28_4_ * auVar108._28_4_) + auVar85._28_4_;
    auVar30 = vsubps_avx(auVar30,auVar88);
    auVar41 = vsubps_avx(auVar41,auVar72);
    auVar29 = vsubps_avx(auVar29,auVar75);
    fVar4 = auVar41._0_4_;
    fVar5 = auVar41._4_4_;
    fVar6 = auVar41._8_4_;
    fVar7 = auVar41._12_4_;
    fVar8 = auVar41._16_4_;
    fVar9 = auVar41._20_4_;
    fVar10 = auVar41._24_4_;
    fVar11 = auVar41._28_4_;
    fVar28 = auVar30._0_4_;
    fVar33 = auVar30._4_4_;
    fVar35 = auVar30._8_4_;
    fVar37 = auVar30._12_4_;
    fVar49 = auVar30._16_4_;
    fVar55 = auVar30._20_4_;
    fVar57 = auVar30._24_4_;
    fVar60 = auVar30._28_4_;
    fVar76 = auVar29._0_4_;
    auVar30._0_4_ = fVar76 * fVar76 + fVar28 * fVar28 + fVar4 * fVar4;
    fVar78 = auVar29._4_4_;
    auVar30._4_4_ = fVar78 * fVar78 + fVar33 * fVar33 + fVar5 * fVar5;
    fVar79 = auVar29._8_4_;
    auVar30._8_4_ = fVar79 * fVar79 + fVar35 * fVar35 + fVar6 * fVar6;
    fVar80 = auVar29._12_4_;
    auVar30._12_4_ = fVar80 * fVar80 + fVar37 * fVar37 + fVar7 * fVar7;
    fVar81 = auVar29._16_4_;
    auVar30._16_4_ = fVar81 * fVar81 + fVar49 * fVar49 + fVar8 * fVar8;
    fVar82 = auVar29._20_4_;
    auVar30._20_4_ = fVar82 * fVar82 + fVar55 * fVar55 + fVar9 * fVar9;
    fVar83 = auVar29._24_4_;
    auVar30._24_4_ = fVar83 * fVar83 + fVar57 * fVar57 + fVar10 * fVar10;
    fVar84 = auVar29._28_4_;
    auVar30._28_4_ = fVar84 * fVar84 + fVar60 * fVar60 + fVar11 * fVar11;
    auVar41 = vsqrtps_avx(auVar30);
    auVar41 = vdivps_avx(auVar97,auVar41);
    fVar98 = auVar41._0_4_;
    fVar101 = auVar41._4_4_;
    fVar102 = auVar41._8_4_;
    fVar103 = auVar41._12_4_;
    fVar104 = auVar41._16_4_;
    fVar105 = auVar41._20_4_;
    fVar106 = auVar41._24_4_;
    fVar107 = auVar41._28_4_;
    auVar41 = vsubps_avx(auVar108,auVar97);
    fVar32 = auVar41._0_4_;
    auVar70._0_4_ = -(fVar32 * auVar69._0_4_) + auVar44._0_4_;
    fVar34 = auVar41._4_4_;
    auVar70._4_4_ = -(fVar34 * auVar69._4_4_) + auVar44._4_4_;
    fVar36 = auVar41._8_4_;
    auVar70._8_4_ = -(fVar36 * auVar69._8_4_) + auVar44._8_4_;
    fVar38 = auVar41._12_4_;
    auVar70._12_4_ = -(fVar38 * auVar69._12_4_) + auVar44._12_4_;
    fVar54 = auVar41._16_4_;
    auVar70._16_4_ = -(fVar54 * auVar69._16_4_) + auVar44._16_4_;
    fVar56 = auVar41._20_4_;
    auVar70._20_4_ = -(fVar56 * auVar69._20_4_) + auVar44._20_4_;
    fVar59 = auVar41._24_4_;
    auVar70._24_4_ = -(fVar59 * auVar69._24_4_) + auVar44._24_4_;
    fVar61 = auVar41._28_4_;
    auVar70._28_4_ = -(fVar61 * auVar69._28_4_) + auVar44._28_4_;
    auVar45._0_4_ = auVar97._0_4_ * auVar97._0_4_;
    auVar45._4_4_ = auVar97._4_4_ * auVar97._4_4_;
    auVar45._8_4_ = auVar97._8_4_ * auVar97._8_4_;
    auVar45._12_4_ = auVar97._12_4_ * auVar97._12_4_;
    auVar45._16_4_ = auVar97._16_4_ * auVar97._16_4_;
    auVar45._20_4_ = auVar97._20_4_ * auVar97._20_4_;
    auVar45._24_4_ = auVar97._24_4_ * auVar97._24_4_;
    auVar45._28_4_ = auVar97._28_4_ * auVar97._28_4_;
    auVar41 = vcmpps_avx(auVar30,auVar45,1);
    auVar46._4_4_ = __real_322bcc77;
    auVar46._0_4_ = __real_322bcc77;
    auVar46._8_4_ = __real_322bcc77;
    auVar46._12_4_ = __real_322bcc77;
    auVar46._16_4_ = __real_322bcc77;
    auVar46._20_4_ = __real_322bcc77;
    auVar46._24_4_ = __real_322bcc77;
    auVar46._28_4_ = __real_322bcc77;
    auVar30 = vcmpps_avx(auVar30,auVar46,1);
    uVar19 = auVar41._0_4_;
    auVar47._0_4_ = uVar19 & (uint)(fVar98 * fVar28 + auVar88._0_4_);
    uVar86 = auVar41._4_4_;
    auVar47._4_4_ = uVar86 & (uint)(fVar101 * fVar33 + auVar88._4_4_);
    uVar89 = auVar41._8_4_;
    auVar47._8_4_ = uVar89 & (uint)(fVar102 * fVar35 + auVar88._8_4_);
    uVar90 = auVar41._12_4_;
    auVar47._12_4_ = uVar90 & (uint)(fVar103 * fVar37 + auVar88._12_4_);
    uVar91 = auVar41._16_4_;
    auVar47._16_4_ = uVar91 & (uint)(fVar104 * fVar49 + auVar88._16_4_);
    uVar92 = auVar41._20_4_;
    auVar47._20_4_ = uVar92 & (uint)(fVar105 * fVar55 + auVar88._20_4_);
    uVar94 = auVar41._24_4_;
    auVar47._24_4_ = uVar94 & (uint)(fVar106 * fVar57 + auVar88._24_4_);
    uVar95 = auVar41._28_4_;
    auVar47._28_4_ = uVar95 & (uint)(fVar107 * fVar60 + auVar88._28_4_);
    auVar41 = vblendvps_avx(auVar47,auVar70,auVar30);
    auVar29 = vcmpps_avx(auVar51,ZEXT432(0) << 0x20,4);
    auVar23 = vcmpps_avx(auVar41,ZEXT432(0) << 0x20,4);
    auVar25._0_4_ = auVar23._0_4_ & auVar29._0_4_ & auVar24._0_4_;
    auVar25._4_4_ = auVar23._4_4_ & auVar29._4_4_ & auVar24._4_4_;
    auVar25._8_4_ = auVar23._8_4_ & auVar29._8_4_ & auVar24._8_4_;
    auVar25._12_4_ = auVar23._12_4_ & auVar29._12_4_ & auVar24._12_4_;
    auVar25._16_4_ = auVar23._16_4_ & auVar29._16_4_ & auVar24._16_4_;
    auVar25._20_4_ = auVar23._20_4_ & auVar29._20_4_ & auVar24._20_4_;
    auVar25._24_4_ = auVar23._24_4_ & auVar29._24_4_ & auVar24._24_4_;
    auVar25._28_4_ = auVar23._28_4_ & auVar29._28_4_ & auVar24._28_4_;
    uVar13 = vmovmskps_avx(auVar25);
    if (uVar13 != 0) {
      auVar67._0_4_ = -(fVar32 * auVar66._0_4_) + auVar52._0_4_;
      auVar67._4_4_ = -(fVar34 * auVar66._4_4_) + auVar52._4_4_;
      auVar67._8_4_ = -(fVar36 * auVar66._8_4_) + auVar52._8_4_;
      auVar67._12_4_ = -(fVar38 * auVar66._12_4_) + auVar52._12_4_;
      auVar67._16_4_ = -(fVar54 * auVar66._16_4_) + auVar52._16_4_;
      auVar67._20_4_ = -(fVar56 * auVar66._20_4_) + auVar52._20_4_;
      auVar67._24_4_ = -(fVar59 * auVar66._24_4_) + auVar52._24_4_;
      auVar67._28_4_ = -(fVar61 * auVar66._28_4_) + auVar52._28_4_;
      auVar63._0_4_ = -(fVar32 * auVar43._0_4_) + auVar85._0_4_;
      auVar63._4_4_ = -(fVar34 * auVar43._4_4_) + auVar85._4_4_;
      auVar63._8_4_ = -(fVar36 * auVar43._8_4_) + auVar85._8_4_;
      auVar63._12_4_ = -(fVar38 * auVar43._12_4_) + auVar85._12_4_;
      auVar63._16_4_ = -(fVar54 * auVar43._16_4_) + auVar85._16_4_;
      auVar63._20_4_ = -(fVar56 * auVar43._20_4_) + auVar85._20_4_;
      auVar63._24_4_ = -(fVar59 * auVar43._24_4_) + auVar85._24_4_;
      auVar63._28_4_ = -(fVar61 * auVar43._28_4_) + auVar85._28_4_;
      auVar26._0_4_ = uVar19 & (uint)(fVar98 * fVar4 + auVar72._0_4_);
      auVar26._4_4_ = uVar86 & (uint)(fVar101 * fVar5 + auVar72._4_4_);
      auVar26._8_4_ = uVar89 & (uint)(fVar102 * fVar6 + auVar72._8_4_);
      auVar26._12_4_ = uVar90 & (uint)(fVar103 * fVar7 + auVar72._12_4_);
      auVar26._16_4_ = uVar91 & (uint)(fVar104 * fVar8 + auVar72._16_4_);
      auVar26._20_4_ = uVar92 & (uint)(fVar105 * fVar9 + auVar72._20_4_);
      auVar26._24_4_ = uVar94 & (uint)(fVar106 * fVar10 + auVar72._24_4_);
      auVar26._28_4_ = uVar95 & (uint)(fVar107 * fVar11 + auVar72._28_4_);
      auVar24 = vblendvps_avx(auVar26,auVar67,auVar30);
      auVar27._0_4_ = uVar19 & (uint)(fVar98 * fVar76 + auVar75._0_4_);
      auVar27._4_4_ = uVar86 & (uint)(fVar101 * fVar78 + auVar75._4_4_);
      auVar27._8_4_ = uVar89 & (uint)(fVar102 * fVar79 + auVar75._8_4_);
      auVar27._12_4_ = uVar90 & (uint)(fVar103 * fVar80 + auVar75._12_4_);
      auVar27._16_4_ = uVar91 & (uint)(fVar104 * fVar81 + auVar75._16_4_);
      auVar27._20_4_ = uVar92 & (uint)(fVar105 * fVar82 + auVar75._20_4_);
      auVar27._24_4_ = uVar94 & (uint)(fVar106 * fVar83 + auVar75._24_4_);
      auVar27._28_4_ = uVar95 & (uint)(fVar107 * fVar84 + auVar75._28_4_);
      auVar30 = vblendvps_avx(auVar27,auVar63,auVar30);
      cVar12 = (char)uVar13;
      if (cVar12 == -1) {
        auVar29 = vunpcklps_avx(auVar41,auVar24);
        auVar23 = vunpcklps_avx(auVar30,auVar51);
        auVar43 = vunpcklpd_avx(auVar29,auVar23);
        auVar29 = vunpckhpd_avx(auVar29,auVar23);
        auVar24 = vunpckhps_avx(auVar41,auVar24);
        auVar41 = vunpckhps_avx(auVar30,auVar51);
        auVar51 = vunpcklpd_avx(auVar24,auVar41);
        auVar53._16_16_ = auVar29._0_16_;
        auVar53._0_16_ = auVar43._0_16_;
        *pauVar14 = auVar53;
        auVar24 = vunpckhpd_avx(auVar24,auVar41);
        auVar31._16_16_ = auVar24._0_16_;
        auVar31._0_16_ = auVar51._0_16_;
        pauVar14[1] = auVar31;
        auVar41 = vperm2f128_avx(auVar43,auVar29,0x31);
        pauVar14[2] = auVar41;
        auVar24 = vperm2f128_avx(auVar51,auVar24,0x31);
        pauVar14[3] = auVar24;
      }
      else {
        auVar87 = auVar51._0_16_;
        auVar93 = auVar51._16_16_;
        auVar64 = auVar41._0_16_;
        auVar68 = auVar41._16_16_;
        auVar50 = auVar24._0_16_;
        auVar58 = auVar24._16_16_;
        auVar42 = auVar30._0_16_;
        auVar48 = auVar30._16_16_;
        if ((uVar13 & 1) != 0) {
          *(int *)*pauVar14 = auVar41._0_4_;
        }
        if ((uVar13 & 2) != 0) {
          uVar3 = vextractps_avx(auVar64,1);
          *(undefined4 *)(*pauVar14 + 0x10) = uVar3;
        }
        if ((uVar13 & 4) != 0) {
          uVar3 = vextractps_avx(auVar64,2);
          *(undefined4 *)pauVar14[1] = uVar3;
        }
        if ((uVar13 & 8) != 0) {
          uVar3 = vextractps_avx(auVar64,3);
          *(undefined4 *)(pauVar14[1] + 0x10) = uVar3;
        }
        if ((uVar13 & 0x10) != 0) {
          *(int *)pauVar14[2] = auVar41._16_4_;
        }
        if ((uVar13 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar68,1);
          *(undefined4 *)(pauVar14[2] + 0x10) = uVar3;
        }
        if ((uVar13 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar68,2);
          *(undefined4 *)pauVar14[3] = uVar3;
        }
        if (cVar12 < '\0') {
          uVar3 = vextractps_avx(auVar68,3);
          *(undefined4 *)(pauVar14[3] + 0x10) = uVar3;
        }
        if ((uVar13 & 1) != 0) {
          *(int *)(*pauVar14 + 4) = auVar24._0_4_;
        }
        if ((uVar13 & 2) != 0) {
          uVar3 = vextractps_avx(auVar50,1);
          *(undefined4 *)(*pauVar14 + 0x14) = uVar3;
        }
        if ((uVar13 & 4) != 0) {
          uVar3 = vextractps_avx(auVar50,2);
          *(undefined4 *)(pauVar14[1] + 4) = uVar3;
        }
        if ((uVar13 & 8) != 0) {
          uVar3 = vextractps_avx(auVar50,3);
          *(undefined4 *)(pauVar14[1] + 0x14) = uVar3;
        }
        if ((uVar13 & 0x10) != 0) {
          *(int *)(pauVar14[2] + 4) = auVar24._16_4_;
        }
        if ((uVar13 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar58,1);
          *(undefined4 *)(pauVar14[2] + 0x14) = uVar3;
        }
        if ((uVar13 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar58,2);
          *(undefined4 *)(pauVar14[3] + 4) = uVar3;
        }
        if (cVar12 < '\0') {
          uVar3 = vextractps_avx(auVar58,3);
          *(undefined4 *)(pauVar14[3] + 0x14) = uVar3;
        }
        if ((uVar13 & 1) != 0) {
          *(int *)(*pauVar14 + 8) = auVar30._0_4_;
        }
        if ((uVar13 & 2) != 0) {
          uVar3 = vextractps_avx(auVar42,1);
          *(undefined4 *)(*pauVar14 + 0x18) = uVar3;
        }
        if ((uVar13 & 4) != 0) {
          uVar3 = vextractps_avx(auVar42,2);
          *(undefined4 *)(pauVar14[1] + 8) = uVar3;
        }
        if ((uVar13 & 8) != 0) {
          uVar3 = vextractps_avx(auVar42,3);
          *(undefined4 *)(pauVar14[1] + 0x18) = uVar3;
        }
        if ((uVar13 & 0x10) != 0) {
          *(int *)(pauVar14[2] + 8) = auVar30._16_4_;
        }
        if ((uVar13 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar48,1);
          *(undefined4 *)(pauVar14[2] + 0x18) = uVar3;
        }
        if ((uVar13 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar48,2);
          *(undefined4 *)(pauVar14[3] + 8) = uVar3;
        }
        if (cVar12 < '\0') {
          uVar3 = vextractps_avx(auVar48,3);
          *(undefined4 *)(pauVar14[3] + 0x18) = uVar3;
        }
        if ((uVar13 & 1) != 0) {
          *(int *)(*pauVar14 + 0xc) = auVar51._0_4_;
        }
        if ((uVar13 & 2) != 0) {
          uVar3 = vextractps_avx(auVar87,1);
          *(undefined4 *)(*pauVar14 + 0x1c) = uVar3;
        }
        if ((uVar13 & 4) != 0) {
          uVar3 = vextractps_avx(auVar87,2);
          *(undefined4 *)(pauVar14[1] + 0xc) = uVar3;
        }
        if ((uVar13 & 8) != 0) {
          uVar3 = vextractps_avx(auVar87,3);
          *(undefined4 *)(pauVar14[1] + 0x1c) = uVar3;
        }
        if ((uVar13 & 0x10) != 0) {
          *(int *)(pauVar14[2] + 0xc) = auVar51._16_4_;
        }
        if ((uVar13 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar93,1);
          *(undefined4 *)(pauVar14[2] + 0x1c) = uVar3;
        }
        if ((uVar13 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar93,2);
          *(undefined4 *)(pauVar14[3] + 0xc) = uVar3;
        }
        if (cVar12 < '\0') {
          uVar3 = vextractps_avx(auVar93,3);
          *(undefined4 *)(pauVar14[3] + 0x1c) = uVar3;
        }
      }
    }
  }
  return;
}

// ApplyLegacySphericalBackstopConstraintsWithDistanceMap_avx2 @ 140327280

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLegacySphericalBackstopConstraintsWithDistanceMap_avx2
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,float param_5,
               float param_6,float param_7,int param_8,uint param_9)

{
  float *pfVar1;
  undefined1 (*pauVar2) [32];
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  char cVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 (*pauVar18) [32];
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  ulonglong uVar22;
  uint uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [32];
  undefined1 auVar32 [16];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  float fVar33;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar34 [32];
  float fVar42;
  uint uVar43;
  float fVar45;
  uint uVar46;
  float fVar47;
  uint uVar48;
  float fVar49;
  uint uVar50;
  float fVar51;
  uint uVar52;
  float fVar53;
  uint uVar54;
  float fVar55;
  uint uVar56;
  float fVar57;
  uint uVar58;
  undefined1 auVar44 [32];
  float fVar59;
  undefined1 auVar60 [16];
  undefined1 auVar63 [16];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [16];
  undefined1 auVar74 [32];
  undefined1 auVar77 [16];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  float fVar86;
  undefined1 auVar87 [16];
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar95;
  float fVar96;
  float fVar97;
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  undefined1 auVar94 [16];
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  undefined1 auVar108 [32];
  
  uVar16 = param_9 + 7;
  if (-1 < (int)param_9) {
    uVar16 = param_9;
  }
  if ((int)(uVar16 & 0xfffffff8) < 1) {
    uVar17 = 0;
    if ((int)param_9 < 1) {
      return;
    }
  }
  else {
    fVar11 = param_7 * param_7;
    lVar20 = (longlong)param_8 * 0x10 + param_1;
    lVar19 = (longlong)param_8 * 0xc + 0x40;
    uVar22 = 0;
    uVar17 = 0;
    do {
      auVar26 = *(undefined1 (*) [32])(lVar20 + uVar22 * 4);
      auVar44 = *(undefined1 (*) [32])(lVar20 + 0x20 + uVar22 * 4);
      auVar61 = *(undefined1 (*) [32])(lVar20 + 0x40 + uVar22 * 4);
      auVar28 = *(undefined1 (*) [32])(lVar20 + 0x60 + uVar22 * 4);
      auVar98 = vperm2f128_avx(auVar26,auVar61,0x20);
      auVar75 = vperm2f128_avx(auVar26,auVar61,0x31);
      auVar29 = vperm2f128_avx(auVar44,auVar28,0x20);
      auVar62 = vperm2f128_avx(auVar44,auVar28,0x31);
      auVar25 = vunpckhps_avx(auVar98,auVar75);
      auVar12 = vunpckhps_avx(auVar29,auVar62);
      auVar65 = vunpckhpd_avx(auVar25,auVar12);
      auVar27 = vcmpps_avx(auVar65,
                           ___ymm_0000000000000000000000000000000000000000000000000000000000000000,4
                          );
      if ((((((((SUB321(auVar27 >> 0x1f,0) & 1) != 0 || (SUB321(auVar27 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar27 >> 0x5f,0) & 1) != 0) || SUB321(auVar27 >> 0x7f,0) != '\0') ||
            (SUB321(auVar27 >> 0x9f,0) & 1) != 0) || SUB321(auVar27 >> 0xbf,0) != '\0') ||
          (SUB321(auVar27 >> 0xdf,0) & 1) != 0) || auVar27[0x1f] < '\0') {
        auVar66 = vunpcklpd_avx(auVar25,auVar12);
        auVar25 = vunpcklps_avx(auVar98,auVar75);
        auVar12 = vunpcklps_avx(auVar29,auVar62);
        auVar71 = vunpckhpd_avx(auVar25,auVar12);
        auVar74 = vunpcklpd_avx(auVar25,auVar12);
        auVar25 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar19);
        auVar12 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar19);
        auVar98 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar12);
        auVar75 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,auVar25);
        auVar98 = vblendps_avx(auVar75,auVar98,0x88);
        auVar75 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar12);
        auVar29 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,*(undefined1 (*) [32])(param_2 + lVar19));
        auVar75 = vblendps_avx(auVar29,auVar75,0x13);
        auVar80 = vperm2f128_avx(auVar98,auVar75,0x31);
        auVar25 = vblendps_avx(auVar12,auVar25,0x24);
        auVar25 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar25);
        auVar12 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,*(undefined1 (*) [32])(param_2 + lVar19));
        auVar29 = vblendps_avx(auVar25,auVar12,0xe0);
        auVar25 = *(undefined1 (*) [32])(param_3 + -0x40 + lVar19);
        auVar12 = *(undefined1 (*) [32])(param_3 + -0x20 + lVar19);
        auVar62 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar12);
        auVar83 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,auVar25);
        auVar62 = vblendps_avx(auVar83,auVar62,0x88);
        auVar83 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar12);
        auVar85 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,*(undefined1 (*) [32])(param_3 + lVar19));
        auVar83 = vblendps_avx(auVar85,auVar83,0x13);
        auVar67 = vperm2f128_avx(auVar62,auVar83,0x31);
        auVar25 = vblendps_avx(auVar12,auVar25,0x24);
        auVar25 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar25);
        auVar12 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,*(undefined1 (*) [32])(param_3 + lVar19));
        auVar25 = vblendps_avx(auVar25,auVar12,0xe0);
        pfVar1 = (float *)(param_4 + (uVar22 & 0xffffffff));
        auVar78._0_4_ = param_6 * *pfVar1 + param_5;
        auVar78._4_4_ = param_6 * pfVar1[1] + param_5;
        auVar78._8_4_ = param_6 * pfVar1[2] + param_5;
        auVar78._12_4_ = param_6 * pfVar1[3] + param_5;
        auVar78._16_4_ = param_6 * pfVar1[4] + param_5;
        auVar78._20_4_ = param_6 * pfVar1[5] + param_5;
        auVar78._24_4_ = param_6 * pfVar1[6] + param_5;
        auVar78._28_4_ = param_6 * pfVar1[7] + param_5;
        auVar64._0_4_ = -(auVar62._0_4_ * auVar78._0_4_) + auVar98._0_4_;
        auVar64._4_4_ = -(auVar62._4_4_ * auVar78._4_4_) + auVar98._4_4_;
        auVar64._8_4_ = -(auVar62._8_4_ * auVar78._8_4_) + auVar98._8_4_;
        auVar64._12_4_ = -(auVar62._12_4_ * auVar78._12_4_) + auVar98._12_4_;
        auVar64._16_4_ = -(auVar83._0_4_ * auVar78._16_4_) + auVar75._0_4_;
        auVar64._20_4_ = -(auVar83._4_4_ * auVar78._20_4_) + auVar75._4_4_;
        auVar64._24_4_ = -(auVar83._8_4_ * auVar78._24_4_) + auVar75._8_4_;
        auVar64._28_4_ = -(auVar83._12_4_ * auVar78._28_4_) + auVar75._12_4_;
        auVar108._0_4_ = -(auVar67._0_4_ * auVar78._0_4_) + auVar80._0_4_;
        auVar108._4_4_ = -(auVar67._4_4_ * auVar78._4_4_) + auVar80._4_4_;
        auVar108._8_4_ = -(auVar67._8_4_ * auVar78._8_4_) + auVar80._8_4_;
        auVar108._12_4_ = -(auVar67._12_4_ * auVar78._12_4_) + auVar80._12_4_;
        auVar108._16_4_ = -(auVar67._16_4_ * auVar78._16_4_) + auVar80._16_4_;
        auVar108._20_4_ = -(auVar67._20_4_ * auVar78._20_4_) + auVar80._20_4_;
        auVar108._24_4_ = -(auVar67._24_4_ * auVar78._24_4_) + auVar80._24_4_;
        auVar108._28_4_ = -(auVar67._28_4_ * auVar78._28_4_) + auVar80._28_4_;
        auVar13._4_4_ = param_7;
        auVar13._0_4_ = param_7;
        auVar13._8_4_ = param_7;
        auVar13._12_4_ = param_7;
        auVar13._16_4_ = param_7;
        auVar13._20_4_ = param_7;
        auVar13._24_4_ = param_7;
        auVar13._28_4_ = param_7;
        auVar85 = vsubps_avx(auVar78,auVar13);
        auVar79._0_4_ = -(auVar25._0_4_ * auVar78._0_4_) + auVar29._0_4_;
        auVar79._4_4_ = -(auVar25._4_4_ * auVar78._4_4_) + auVar29._4_4_;
        auVar79._8_4_ = -(auVar25._8_4_ * auVar78._8_4_) + auVar29._8_4_;
        auVar79._12_4_ = -(auVar25._12_4_ * auVar78._12_4_) + auVar29._12_4_;
        auVar79._16_4_ = -(auVar25._16_4_ * auVar78._16_4_) + auVar29._16_4_;
        auVar79._20_4_ = -(auVar25._20_4_ * auVar78._20_4_) + auVar29._20_4_;
        auVar79._24_4_ = -(auVar25._24_4_ * auVar78._24_4_) + auVar29._24_4_;
        auVar79._28_4_ = -(auVar25._28_4_ * auVar78._28_4_) + auVar29._28_4_;
        auVar12 = vsubps_avx(auVar74,auVar64);
        auVar71 = vsubps_avx(auVar71,auVar108);
        auVar66 = vsubps_avx(auVar66,auVar79);
        fVar4 = auVar71._0_4_;
        fVar5 = auVar71._4_4_;
        fVar6 = auVar71._8_4_;
        fVar7 = auVar71._12_4_;
        fVar8 = auVar71._16_4_;
        fVar9 = auVar71._20_4_;
        fVar10 = auVar71._24_4_;
        fVar59 = auVar71._28_4_;
        fVar42 = auVar12._0_4_;
        fVar45 = auVar12._4_4_;
        fVar47 = auVar12._8_4_;
        fVar49 = auVar12._12_4_;
        fVar51 = auVar12._16_4_;
        fVar53 = auVar12._20_4_;
        fVar55 = auVar12._24_4_;
        fVar57 = auVar12._28_4_;
        fVar86 = auVar66._0_4_;
        auVar74._0_4_ = fVar86 * fVar86 + fVar42 * fVar42 + fVar4 * fVar4;
        fVar90 = auVar66._4_4_;
        auVar74._4_4_ = fVar90 * fVar90 + fVar45 * fVar45 + fVar5 * fVar5;
        fVar91 = auVar66._8_4_;
        auVar74._8_4_ = fVar91 * fVar91 + fVar47 * fVar47 + fVar6 * fVar6;
        fVar92 = auVar66._12_4_;
        auVar74._12_4_ = fVar92 * fVar92 + fVar49 * fVar49 + fVar7 * fVar7;
        fVar93 = auVar66._16_4_;
        auVar74._16_4_ = fVar93 * fVar93 + fVar51 * fVar51 + fVar8 * fVar8;
        fVar95 = auVar66._20_4_;
        auVar74._20_4_ = fVar95 * fVar95 + fVar53 * fVar53 + fVar9 * fVar9;
        fVar96 = auVar66._24_4_;
        auVar74._24_4_ = fVar96 * fVar96 + fVar55 * fVar55 + fVar10 * fVar10;
        fVar97 = auVar66._28_4_;
        auVar74._28_4_ = fVar97 * fVar97 + fVar57 * fVar57 + fVar59 * fVar59;
        auVar12 = vsqrtps_avx(auVar74);
        auVar12 = vdivps_avx(auVar13,auVar12);
        fVar33 = auVar12._0_4_;
        fVar35 = auVar12._4_4_;
        fVar36 = auVar12._8_4_;
        fVar37 = auVar12._12_4_;
        fVar38 = auVar12._16_4_;
        fVar39 = auVar12._20_4_;
        fVar40 = auVar12._24_4_;
        fVar41 = auVar12._28_4_;
        fVar100 = auVar85._0_4_;
        auVar71._0_4_ = -(fVar100 * auVar62._0_4_) + auVar98._0_4_;
        fVar101 = auVar85._4_4_;
        auVar71._4_4_ = -(fVar101 * auVar62._4_4_) + auVar98._4_4_;
        fVar102 = auVar85._8_4_;
        auVar71._8_4_ = -(fVar102 * auVar62._8_4_) + auVar98._8_4_;
        fVar103 = auVar85._12_4_;
        auVar71._12_4_ = -(fVar103 * auVar62._12_4_) + auVar98._12_4_;
        fVar104 = auVar85._16_4_;
        auVar71._16_4_ = -(fVar104 * auVar83._0_4_) + auVar75._0_4_;
        fVar105 = auVar85._20_4_;
        auVar71._20_4_ = -(fVar105 * auVar83._4_4_) + auVar75._4_4_;
        fVar106 = auVar85._24_4_;
        auVar71._24_4_ = -(fVar106 * auVar83._8_4_) + auVar75._8_4_;
        fVar107 = auVar85._28_4_;
        auVar71._28_4_ = -(fVar107 * auVar83._12_4_) + auVar75._12_4_;
        auVar98._4_4_ = __real_322bcc77;
        auVar98._0_4_ = __real_322bcc77;
        auVar98._8_4_ = __real_322bcc77;
        auVar98._12_4_ = __real_322bcc77;
        auVar98._16_4_ = __real_322bcc77;
        auVar98._20_4_ = __real_322bcc77;
        auVar98._24_4_ = __real_322bcc77;
        auVar98._28_4_ = __real_322bcc77;
        auVar98 = vcmpps_avx(auVar74,auVar98,1);
        auVar12._4_4_ = fVar11;
        auVar12._0_4_ = fVar11;
        auVar12._8_4_ = fVar11;
        auVar12._12_4_ = fVar11;
        auVar12._16_4_ = fVar11;
        auVar12._20_4_ = fVar11;
        auVar12._24_4_ = fVar11;
        auVar12._28_4_ = fVar11;
        auVar12 = vcmpps_avx(auVar74,auVar12,1);
        uVar43 = auVar12._0_4_;
        auVar75._0_4_ = uVar43 & (uint)(fVar33 * fVar42 + auVar64._0_4_);
        uVar46 = auVar12._4_4_;
        auVar75._4_4_ = uVar46 & (uint)(fVar35 * fVar45 + auVar64._4_4_);
        uVar48 = auVar12._8_4_;
        auVar75._8_4_ = uVar48 & (uint)(fVar36 * fVar47 + auVar64._8_4_);
        uVar50 = auVar12._12_4_;
        auVar75._12_4_ = uVar50 & (uint)(fVar37 * fVar49 + auVar64._12_4_);
        uVar52 = auVar12._16_4_;
        auVar75._16_4_ = uVar52 & (uint)(fVar38 * fVar51 + auVar64._16_4_);
        uVar54 = auVar12._20_4_;
        auVar75._20_4_ = uVar54 & (uint)(fVar39 * fVar53 + auVar64._20_4_);
        uVar56 = auVar12._24_4_;
        auVar75._24_4_ = uVar56 & (uint)(fVar40 * fVar55 + auVar64._24_4_);
        uVar58 = auVar12._28_4_;
        auVar75._28_4_ = uVar58 & (uint)(fVar41 * fVar57 + auVar64._28_4_);
        auVar12 = vblendvps_avx(auVar75,auVar71,auVar98);
        auVar75 = vcmpps_avx(auVar12,
                             ___ymm_0000000000000000000000000000000000000000000000000000000000000000
                             ,4);
        auVar62._0_4_ = auVar75._0_4_ & auVar27._0_4_;
        auVar62._4_4_ = auVar75._4_4_ & auVar27._4_4_;
        auVar62._8_4_ = auVar75._8_4_ & auVar27._8_4_;
        auVar62._12_4_ = auVar75._12_4_ & auVar27._12_4_;
        auVar62._16_4_ = auVar75._16_4_ & auVar27._16_4_;
        auVar62._20_4_ = auVar75._20_4_ & auVar27._20_4_;
        auVar62._24_4_ = auVar75._24_4_ & auVar27._24_4_;
        auVar62._28_4_ = auVar75._28_4_ & auVar27._28_4_;
        uVar23 = vmovmskps_avx(auVar62);
        if (uVar23 != 0) {
          auVar83._0_4_ = -(fVar100 * auVar67._0_4_) + auVar80._0_4_;
          auVar83._4_4_ = -(fVar101 * auVar67._4_4_) + auVar80._4_4_;
          auVar83._8_4_ = -(fVar102 * auVar67._8_4_) + auVar80._8_4_;
          auVar83._12_4_ = -(fVar103 * auVar67._12_4_) + auVar80._12_4_;
          auVar83._16_4_ = -(fVar104 * auVar67._16_4_) + auVar80._16_4_;
          auVar83._20_4_ = -(fVar105 * auVar67._20_4_) + auVar80._20_4_;
          auVar83._24_4_ = -(fVar106 * auVar67._24_4_) + auVar80._24_4_;
          auVar83._28_4_ = -(fVar107 * auVar67._28_4_) + auVar80._28_4_;
          auVar85._0_4_ = -(fVar100 * auVar25._0_4_) + auVar29._0_4_;
          auVar85._4_4_ = -(fVar101 * auVar25._4_4_) + auVar29._4_4_;
          auVar85._8_4_ = -(fVar102 * auVar25._8_4_) + auVar29._8_4_;
          auVar85._12_4_ = -(fVar103 * auVar25._12_4_) + auVar29._12_4_;
          auVar85._16_4_ = -(fVar104 * auVar25._16_4_) + auVar29._16_4_;
          auVar85._20_4_ = -(fVar105 * auVar25._20_4_) + auVar29._20_4_;
          auVar85._24_4_ = -(fVar106 * auVar25._24_4_) + auVar29._24_4_;
          auVar85._28_4_ = -(fVar107 * auVar25._28_4_) + auVar29._28_4_;
          auVar27._0_4_ = (uint)(fVar33 * fVar4 + auVar108._0_4_) & uVar43;
          auVar27._4_4_ = (uint)(fVar35 * fVar5 + auVar108._4_4_) & uVar46;
          auVar27._8_4_ = (uint)(fVar36 * fVar6 + auVar108._8_4_) & uVar48;
          auVar27._12_4_ = (uint)(fVar37 * fVar7 + auVar108._12_4_) & uVar50;
          auVar27._16_4_ = (uint)(fVar38 * fVar8 + auVar108._16_4_) & uVar52;
          auVar27._20_4_ = (uint)(fVar39 * fVar9 + auVar108._20_4_) & uVar54;
          auVar27._24_4_ = (uint)(fVar40 * fVar10 + auVar108._24_4_) & uVar56;
          auVar27._28_4_ = (uint)(fVar41 * fVar59 + auVar108._28_4_) & uVar58;
          auVar27 = vblendvps_avx(auVar27,auVar83,auVar98);
          auVar25._0_4_ = (uint)(fVar33 * fVar86 + auVar79._0_4_) & uVar43;
          auVar25._4_4_ = (uint)(fVar35 * fVar90 + auVar79._4_4_) & uVar46;
          auVar25._8_4_ = (uint)(fVar36 * fVar91 + auVar79._8_4_) & uVar48;
          auVar25._12_4_ = (uint)(fVar37 * fVar92 + auVar79._12_4_) & uVar50;
          auVar25._16_4_ = (uint)(fVar38 * fVar93 + auVar79._16_4_) & uVar52;
          auVar25._20_4_ = (uint)(fVar39 * fVar95 + auVar79._20_4_) & uVar54;
          auVar25._24_4_ = (uint)(fVar40 * fVar96 + auVar79._24_4_) & uVar56;
          auVar25._28_4_ = (uint)(fVar41 * fVar97 + auVar79._28_4_) & uVar58;
          auVar25 = vblendvps_avx(auVar25,auVar85,auVar98);
          cVar14 = (char)uVar23;
          if (cVar14 == -1) {
            auVar26 = vunpcklps_avx(auVar12,auVar27);
            auVar44 = vunpcklps_avx(auVar25,auVar65);
            auVar28 = vunpcklpd_avx(auVar26,auVar44);
            auVar26 = vunpckhpd_avx(auVar26,auVar44);
            auVar44 = vunpckhps_avx(auVar12,auVar27);
            auVar61 = vunpckhps_avx(auVar25,auVar65);
            auVar27 = vunpcklpd_avx(auVar44,auVar61);
            auVar65._16_16_ = auVar26._0_16_;
            auVar65._0_16_ = auVar28._0_16_;
            *(undefined1 (*) [32])(lVar20 + uVar22 * 4) = auVar65;
            auVar44 = vunpckhpd_avx(auVar44,auVar61);
            auVar61._16_16_ = auVar44._0_16_;
            auVar61._0_16_ = auVar27._0_16_;
            *(undefined1 (*) [32])(lVar20 + 0x20 + uVar22 * 4) = auVar61;
            auVar26 = vperm2f128_avx(auVar28,auVar26,0x31);
            *(undefined1 (*) [32])(lVar20 + 0x40 + uVar22 * 4) = auVar26;
            auVar26 = vperm2f128_avx(auVar27,auVar44,0x31);
            *(undefined1 (*) [32])(lVar20 + 0x60 + uVar22 * 4) = auVar26;
          }
          else {
            auVar73 = auVar12._0_16_;
            auVar77 = auVar12._16_16_;
            auVar60 = auVar27._0_16_;
            auVar63 = auVar27._16_16_;
            auVar24 = auVar25._0_16_;
            auVar32 = auVar25._16_16_;
            if ((uVar23 & 1) != 0) {
              *(int *)(lVar20 + uVar22 * 4) = auVar12._0_4_;
            }
            if ((uVar23 & 2) != 0) {
              uVar3 = vextractps_avx(auVar73,1);
              *(undefined4 *)(lVar20 + 0x10 + uVar22 * 4) = uVar3;
            }
            if ((uVar23 & 4) != 0) {
              uVar3 = vextractps_avx(auVar73,2);
              *(undefined4 *)(lVar20 + 0x20 + uVar22 * 4) = uVar3;
            }
            if ((uVar23 & 8) != 0) {
              uVar3 = vextractps_avx(auVar73,3);
              *(undefined4 *)(lVar20 + 0x30 + uVar22 * 4) = uVar3;
            }
            if ((uVar23 & 0x10) != 0) {
              *(int *)(lVar20 + 0x40 + uVar22 * 4) = auVar12._16_4_;
            }
            if ((uVar23 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar77,1);
              *(undefined4 *)(lVar20 + 0x50 + uVar22 * 4) = uVar3;
            }
            if ((uVar23 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar77,2);
              *(undefined4 *)(lVar20 + 0x60 + uVar22 * 4) = uVar3;
            }
            if (cVar14 < '\0') {
              uVar3 = vextractps_avx(auVar77,3);
              *(undefined4 *)(lVar20 + 0x70 + uVar22 * 4) = uVar3;
            }
            if ((uVar23 & 1) != 0) {
              *(int *)(lVar20 + 4 + uVar22 * 4) = auVar27._0_4_;
            }
            if ((uVar23 & 2) != 0) {
              uVar3 = vextractps_avx(auVar60,1);
              *(undefined4 *)(lVar20 + 0x14 + uVar22 * 4) = uVar3;
            }
            if ((uVar23 & 4) != 0) {
              uVar3 = vextractps_avx(auVar60,2);
              *(undefined4 *)(lVar20 + 0x24 + uVar22 * 4) = uVar3;
            }
            if ((uVar23 & 8) != 0) {
              uVar3 = vextractps_avx(auVar60,3);
              *(undefined4 *)(lVar20 + 0x34 + uVar22 * 4) = uVar3;
            }
            if ((uVar23 & 0x10) != 0) {
              *(int *)(lVar20 + 0x44 + uVar22 * 4) = auVar27._16_4_;
            }
            if ((uVar23 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar63,1);
              *(undefined4 *)(lVar20 + 0x54 + uVar22 * 4) = uVar3;
            }
            if ((uVar23 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar63,2);
              *(undefined4 *)(lVar20 + 100 + uVar22 * 4) = uVar3;
            }
            if (cVar14 < '\0') {
              uVar3 = vextractps_avx(auVar63,3);
              *(undefined4 *)(lVar20 + 0x74 + uVar22 * 4) = uVar3;
            }
            if ((uVar23 & 1) != 0) {
              *(int *)(lVar20 + 8 + uVar22 * 4) = auVar25._0_4_;
            }
            if ((uVar23 & 2) != 0) {
              uVar3 = vextractps_avx(auVar24,1);
              *(undefined4 *)(lVar20 + 0x18 + uVar22 * 4) = uVar3;
            }
            if ((uVar23 & 4) != 0) {
              uVar3 = vextractps_avx(auVar24,2);
              *(undefined4 *)(lVar20 + 0x28 + uVar22 * 4) = uVar3;
            }
            if ((uVar23 & 8) != 0) {
              uVar3 = vextractps_avx(auVar24,3);
              *(undefined4 *)(lVar20 + 0x38 + uVar22 * 4) = uVar3;
            }
            if ((uVar23 & 0x10) != 0) {
              *(int *)(lVar20 + 0x48 + uVar22 * 4) = auVar25._16_4_;
            }
            if ((uVar23 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar32,1);
              *(undefined4 *)(lVar20 + 0x58 + uVar22 * 4) = uVar3;
            }
            if ((uVar23 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar32,2);
              *(undefined4 *)(lVar20 + 0x68 + uVar22 * 4) = uVar3;
            }
            if (cVar14 < '\0') {
              uVar3 = vextractps_avx(auVar32,3);
              *(undefined4 *)(lVar20 + 0x78 + uVar22 * 4) = uVar3;
            }
            if ((uVar23 & 1) != 0) {
              uVar3 = vextractps_avx(auVar26._0_16_,3);
              *(undefined4 *)(lVar20 + 0xc + uVar22 * 4) = uVar3;
            }
            if ((uVar23 & 2) != 0) {
              uVar3 = vextractps_avx(auVar26._16_16_,3);
              *(undefined4 *)(lVar20 + 0x1c + uVar22 * 4) = uVar3;
            }
            if ((uVar23 & 4) != 0) {
              uVar3 = vextractps_avx(auVar44._0_16_,3);
              *(undefined4 *)(lVar20 + 0x2c + uVar22 * 4) = uVar3;
            }
            if ((uVar23 & 8) != 0) {
              uVar3 = vextractps_avx(auVar44._16_16_,3);
              *(undefined4 *)(lVar20 + 0x3c + uVar22 * 4) = uVar3;
            }
            if ((uVar23 & 0x10) != 0) {
              uVar3 = vextractps_avx(auVar61._0_16_,3);
              *(undefined4 *)(lVar20 + 0x4c + uVar22 * 4) = uVar3;
            }
            if ((uVar23 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar61._16_16_,3);
              *(undefined4 *)(lVar20 + 0x5c + uVar22 * 4) = uVar3;
            }
            if ((uVar23 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar28._0_16_,3);
              *(undefined4 *)(lVar20 + 0x6c + uVar22 * 4) = uVar3;
            }
            if (cVar14 < '\0') {
              uVar3 = vextractps_avx(auVar28._16_16_,3);
              *(undefined4 *)(lVar20 + 0x7c + uVar22 * 4) = uVar3;
            }
          }
        }
      }
      uVar17 = uVar17 + 8;
      uVar22 = uVar22 + 0x20;
      lVar19 = lVar19 + 0x60;
    } while (uVar17 < (uVar16 & 0xfffffff8));
    if ((int)param_9 <= (int)uVar17) {
      return;
    }
  }
  iVar15 = (int)uVar17;
  auVar26._4_4_ = iVar15;
  auVar26._0_4_ = iVar15;
  auVar26._8_4_ = iVar15;
  auVar26._12_4_ = iVar15;
  auVar26._16_4_ = iVar15;
  auVar26._20_4_ = iVar15;
  auVar26._24_4_ = iVar15;
  auVar26._28_4_ = iVar15;
  auVar26 = vpor_avx2(auVar26,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar44._4_4_ = param_9;
  auVar44._0_4_ = param_9;
  auVar44._8_4_ = param_9;
  auVar44._12_4_ = param_9;
  auVar44._16_4_ = param_9;
  auVar44._20_4_ = param_9;
  auVar44._24_4_ = param_9;
  auVar44._28_4_ = param_9;
  auVar26 = vpcmpgtd_avx2(auVar44,auVar26);
  lVar19 = (longlong)(param_8 + iVar15);
  pauVar18 = (undefined1 (*) [32])(param_1 + lVar19 * 0x10);
  iVar21 = vmovmskps_avx(auVar26);
  if (iVar21 == 0xff) {
    auVar61 = vperm2f128_avx(*pauVar18,pauVar18[2],0x20);
    auVar28 = vperm2f128_avx(*pauVar18,pauVar18[2],0x31);
    auVar27 = vperm2f128_avx(pauVar18[1],pauVar18[3],0x20);
    auVar25 = vperm2f128_avx(pauVar18[1],pauVar18[3],0x31);
    auVar44 = vunpcklps_avx(auVar61,auVar28);
    auVar61 = vunpckhps_avx(auVar61,auVar28);
    auVar65 = vunpcklps_avx(auVar27,auVar25);
    auVar28 = vunpckhps_avx(auVar27,auVar25);
    auVar27 = vunpcklpd_avx(auVar44,auVar65);
    auVar44 = vunpckhpd_avx(auVar44,auVar65);
    auVar65 = vunpcklpd_avx(auVar61,auVar28);
    auVar61 = vunpckhpd_avx(auVar61,auVar28);
  }
  else {
    auVar27 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar26);
    auVar44 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar26);
    auVar65 = vgatherdps(ZEXT832(0),auVar26);
    auVar61 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar26);
  }
  auVar28 = vmaskmovps_avx(auVar26,auVar27);
  auVar44 = vmaskmovps_avx(auVar26,auVar44);
  auVar27 = vmaskmovps_avx(auVar26,auVar65);
  auVar65 = vcmpps_avx(auVar61,ZEXT832(0) << 0x20,4);
  auVar65 = auVar26 & auVar65;
  if ((((((((SUB321(auVar65 >> 0x1f,0) & 1) != 0 || (SUB321(auVar65 >> 0x3f,0) & 1) != 0) ||
          (SUB321(auVar65 >> 0x5f,0) & 1) != 0) || SUB321(auVar65 >> 0x7f,0) != '\0') ||
        (SUB321(auVar65 >> 0x9f,0) & 1) != 0) || SUB321(auVar65 >> 0xbf,0) != '\0') ||
      (SUB321(auVar65 >> 0xdf,0) & 1) != 0) || auVar65[0x1f] < '\0') {
    pauVar2 = (undefined1 (*) [32])(param_2 + lVar19 * 0xc);
    if ((char)iVar21 == -1) {
      auVar65 = pauVar2[1];
      auVar25 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar65);
      auVar12 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,*pauVar2);
      auVar25 = vblendps_avx(auVar12,auVar25,0x88);
      auVar12 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar65);
      auVar98 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,pauVar2[2]);
      auVar12 = vblendps_avx(auVar98,auVar12,0x13);
      auVar66._16_16_ = auVar12._0_16_;
      auVar66._0_16_ = auVar25._0_16_;
      auVar62 = vperm2f128_avx(auVar25,auVar12,0x31);
      auVar65 = vblendps_avx(auVar65,*pauVar2,0x24);
      auVar65 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar65);
      auVar25 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,pauVar2[2]);
      auVar98 = vblendps_avx(auVar65,auVar25,0xe0);
      auVar65 = *(undefined1 (*) [32])(param_3 + lVar19 * 0xc);
      auVar25 = *(undefined1 (*) [32])(param_3 + 0x20 + lVar19 * 0xc);
      auVar12 = *(undefined1 (*) [32])(param_3 + 0x40 + lVar19 * 0xc);
      auVar75 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar25);
      auVar29 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar65);
      auVar75 = vblendps_avx(auVar29,auVar75,0x88);
      auVar29 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar25);
      auVar83 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,auVar12);
      auVar29 = vblendps_avx(auVar83,auVar29,0x13);
      auVar80._16_16_ = auVar29._0_16_;
      auVar80._0_16_ = auVar75._0_16_;
      auVar75 = vperm2f128_avx(auVar75,auVar29,0x31);
      auVar65 = vblendps_avx(auVar25,auVar65,0x24);
      auVar65 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar65);
      auVar25 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,auVar12);
      auVar65 = vblendps_avx(auVar65,auVar25,0xe0);
    }
    else {
      auVar66 = vgatherdps(ZEXT832(0) << 0x20,auVar26);
      auVar62 = vgatherdps(ZEXT832(0) << 0x20,auVar26);
      auVar98 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar26);
      auVar80 = vgatherdps(ZEXT832(0),auVar26);
      auVar75 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar26);
      auVar65 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar26);
    }
    auVar25 = vmaskmovps_avx(auVar26,*(undefined1 (*) [32])(param_4 + (iVar15 << 2)));
    auVar88._0_4_ = param_6 * auVar25._0_4_ + param_5;
    auVar88._4_4_ = param_6 * auVar25._4_4_ + param_5;
    auVar88._8_4_ = param_6 * auVar25._8_4_ + param_5;
    auVar88._12_4_ = param_6 * auVar25._12_4_ + param_5;
    auVar88._16_4_ = param_6 * auVar25._16_4_ + param_5;
    auVar88._20_4_ = param_6 * auVar25._20_4_ + param_5;
    auVar88._24_4_ = param_6 * auVar25._24_4_ + param_5;
    auVar88._28_4_ = param_6 * auVar25._28_4_ + param_5;
    auVar99._4_4_ = param_7;
    auVar99._0_4_ = param_7;
    auVar99._8_4_ = param_7;
    auVar99._12_4_ = param_7;
    auVar99._16_4_ = param_7;
    auVar99._20_4_ = param_7;
    auVar99._24_4_ = param_7;
    auVar99._28_4_ = param_7;
    auVar25 = vsubps_avx(auVar88,auVar99);
    auVar89._0_4_ = -(auVar80._0_4_ * auVar88._0_4_) + auVar66._0_4_;
    auVar89._4_4_ = -(auVar80._4_4_ * auVar88._4_4_) + auVar66._4_4_;
    auVar89._8_4_ = -(auVar80._8_4_ * auVar88._8_4_) + auVar66._8_4_;
    auVar89._12_4_ = -(auVar80._12_4_ * auVar88._12_4_) + auVar66._12_4_;
    auVar89._16_4_ = -(auVar80._16_4_ * auVar88._16_4_) + auVar66._16_4_;
    auVar89._20_4_ = -(auVar80._20_4_ * auVar88._20_4_) + auVar66._20_4_;
    auVar89._24_4_ = -(auVar80._24_4_ * auVar88._24_4_) + auVar66._24_4_;
    auVar89._28_4_ = -(auVar80._28_4_ * auVar88._28_4_) + auVar66._28_4_;
    auVar82._0_4_ = -(auVar75._0_4_ * auVar88._0_4_) + auVar62._0_4_;
    auVar82._4_4_ = -(auVar75._4_4_ * auVar88._4_4_) + auVar62._4_4_;
    auVar82._8_4_ = -(auVar75._8_4_ * auVar88._8_4_) + auVar62._8_4_;
    auVar82._12_4_ = -(auVar75._12_4_ * auVar88._12_4_) + auVar62._12_4_;
    auVar82._16_4_ = -(auVar75._16_4_ * auVar88._16_4_) + auVar62._16_4_;
    auVar82._20_4_ = -(auVar75._20_4_ * auVar88._20_4_) + auVar62._20_4_;
    auVar82._24_4_ = -(auVar75._24_4_ * auVar88._24_4_) + auVar62._24_4_;
    auVar82._28_4_ = -(auVar75._28_4_ * auVar88._28_4_) + auVar62._28_4_;
    auVar84._0_4_ = -(auVar65._0_4_ * auVar88._0_4_) + auVar98._0_4_;
    auVar84._4_4_ = -(auVar65._4_4_ * auVar88._4_4_) + auVar98._4_4_;
    auVar84._8_4_ = -(auVar65._8_4_ * auVar88._8_4_) + auVar98._8_4_;
    auVar84._12_4_ = -(auVar65._12_4_ * auVar88._12_4_) + auVar98._12_4_;
    auVar84._16_4_ = -(auVar65._16_4_ * auVar88._16_4_) + auVar98._16_4_;
    auVar84._20_4_ = -(auVar65._20_4_ * auVar88._20_4_) + auVar98._20_4_;
    auVar84._24_4_ = -(auVar65._24_4_ * auVar88._24_4_) + auVar98._24_4_;
    auVar84._28_4_ = -(auVar65._28_4_ * auVar88._28_4_) + auVar98._28_4_;
    auVar28 = vsubps_avx(auVar28,auVar89);
    auVar44 = vsubps_avx(auVar44,auVar82);
    auVar27 = vsubps_avx(auVar27,auVar84);
    fVar11 = auVar44._0_4_;
    fVar4 = auVar44._4_4_;
    fVar5 = auVar44._8_4_;
    fVar6 = auVar44._12_4_;
    fVar7 = auVar44._16_4_;
    fVar8 = auVar44._20_4_;
    fVar9 = auVar44._24_4_;
    fVar10 = auVar44._28_4_;
    fVar97 = auVar28._0_4_;
    fVar100 = auVar28._4_4_;
    fVar101 = auVar28._8_4_;
    fVar102 = auVar28._12_4_;
    fVar103 = auVar28._16_4_;
    fVar104 = auVar28._20_4_;
    fVar105 = auVar28._24_4_;
    fVar106 = auVar28._28_4_;
    fVar59 = auVar27._0_4_;
    auVar28._0_4_ = fVar59 * fVar59 + fVar97 * fVar97 + fVar11 * fVar11;
    fVar33 = auVar27._4_4_;
    auVar28._4_4_ = fVar33 * fVar33 + fVar100 * fVar100 + fVar4 * fVar4;
    fVar35 = auVar27._8_4_;
    auVar28._8_4_ = fVar35 * fVar35 + fVar101 * fVar101 + fVar5 * fVar5;
    fVar36 = auVar27._12_4_;
    auVar28._12_4_ = fVar36 * fVar36 + fVar102 * fVar102 + fVar6 * fVar6;
    fVar37 = auVar27._16_4_;
    auVar28._16_4_ = fVar37 * fVar37 + fVar103 * fVar103 + fVar7 * fVar7;
    fVar38 = auVar27._20_4_;
    auVar28._20_4_ = fVar38 * fVar38 + fVar104 * fVar104 + fVar8 * fVar8;
    fVar39 = auVar27._24_4_;
    auVar28._24_4_ = fVar39 * fVar39 + fVar105 * fVar105 + fVar9 * fVar9;
    fVar40 = auVar27._28_4_;
    auVar28._28_4_ = fVar40 * fVar40 + fVar106 * fVar106 + fVar10 * fVar10;
    auVar44 = vsqrtps_avx(auVar28);
    auVar44 = vdivps_avx(auVar99,auVar44);
    fVar57 = auVar44._0_4_;
    fVar86 = auVar44._4_4_;
    fVar90 = auVar44._8_4_;
    fVar91 = auVar44._12_4_;
    fVar92 = auVar44._16_4_;
    fVar93 = auVar44._20_4_;
    fVar95 = auVar44._24_4_;
    fVar96 = auVar44._28_4_;
    fVar41 = auVar25._0_4_;
    auVar81._0_4_ = -(fVar41 * auVar80._0_4_) + auVar66._0_4_;
    fVar42 = auVar25._4_4_;
    auVar81._4_4_ = -(fVar42 * auVar80._4_4_) + auVar66._4_4_;
    fVar45 = auVar25._8_4_;
    auVar81._8_4_ = -(fVar45 * auVar80._8_4_) + auVar66._8_4_;
    fVar47 = auVar25._12_4_;
    auVar81._12_4_ = -(fVar47 * auVar80._12_4_) + auVar66._12_4_;
    fVar49 = auVar25._16_4_;
    auVar81._16_4_ = -(fVar49 * auVar80._16_4_) + auVar66._16_4_;
    fVar51 = auVar25._20_4_;
    auVar81._20_4_ = -(fVar51 * auVar80._20_4_) + auVar66._20_4_;
    fVar53 = auVar25._24_4_;
    auVar81._24_4_ = -(fVar53 * auVar80._24_4_) + auVar66._24_4_;
    fVar55 = auVar25._28_4_;
    auVar81._28_4_ = -(fVar55 * auVar80._28_4_) + auVar66._28_4_;
    param_7 = param_7 * param_7;
    auVar67._4_4_ = param_7;
    auVar67._0_4_ = param_7;
    auVar67._8_4_ = param_7;
    auVar67._12_4_ = param_7;
    auVar67._16_4_ = param_7;
    auVar67._20_4_ = param_7;
    auVar67._24_4_ = param_7;
    auVar67._28_4_ = param_7;
    auVar44 = vcmpps_avx(auVar28,auVar67,1);
    auVar68._4_4_ = __real_322bcc77;
    auVar68._0_4_ = __real_322bcc77;
    auVar68._8_4_ = __real_322bcc77;
    auVar68._12_4_ = __real_322bcc77;
    auVar68._16_4_ = __real_322bcc77;
    auVar68._20_4_ = __real_322bcc77;
    auVar68._24_4_ = __real_322bcc77;
    auVar68._28_4_ = __real_322bcc77;
    auVar28 = vcmpps_avx(auVar28,auVar68,1);
    uVar23 = auVar44._0_4_;
    auVar69._0_4_ = uVar23 & (uint)(fVar57 * fVar97 + auVar89._0_4_);
    uVar43 = auVar44._4_4_;
    auVar69._4_4_ = uVar43 & (uint)(fVar86 * fVar100 + auVar89._4_4_);
    uVar46 = auVar44._8_4_;
    auVar69._8_4_ = uVar46 & (uint)(fVar90 * fVar101 + auVar89._8_4_);
    uVar48 = auVar44._12_4_;
    auVar69._12_4_ = uVar48 & (uint)(fVar91 * fVar102 + auVar89._12_4_);
    uVar50 = auVar44._16_4_;
    auVar69._16_4_ = uVar50 & (uint)(fVar92 * fVar103 + auVar89._16_4_);
    uVar52 = auVar44._20_4_;
    auVar69._20_4_ = uVar52 & (uint)(fVar93 * fVar104 + auVar89._20_4_);
    uVar54 = auVar44._24_4_;
    auVar69._24_4_ = uVar54 & (uint)(fVar95 * fVar105 + auVar89._24_4_);
    uVar56 = auVar44._28_4_;
    auVar69._28_4_ = uVar56 & (uint)(fVar96 * fVar106 + auVar89._28_4_);
    auVar44 = vblendvps_avx(auVar69,auVar81,auVar28);
    auVar27 = vcmpps_avx(auVar61,ZEXT432(0) << 0x20,4);
    auVar25 = vcmpps_avx(auVar44,ZEXT432(0) << 0x20,4);
    auVar29._0_4_ = auVar25._0_4_ & auVar27._0_4_ & auVar26._0_4_;
    auVar29._4_4_ = auVar25._4_4_ & auVar27._4_4_ & auVar26._4_4_;
    auVar29._8_4_ = auVar25._8_4_ & auVar27._8_4_ & auVar26._8_4_;
    auVar29._12_4_ = auVar25._12_4_ & auVar27._12_4_ & auVar26._12_4_;
    auVar29._16_4_ = auVar25._16_4_ & auVar27._16_4_ & auVar26._16_4_;
    auVar29._20_4_ = auVar25._20_4_ & auVar27._20_4_ & auVar26._20_4_;
    auVar29._24_4_ = auVar25._24_4_ & auVar27._24_4_ & auVar26._24_4_;
    auVar29._28_4_ = auVar25._28_4_ & auVar27._28_4_ & auVar26._28_4_;
    uVar16 = vmovmskps_avx(auVar29);
    if (uVar16 != 0) {
      auVar76._0_4_ = -(fVar41 * auVar75._0_4_) + auVar62._0_4_;
      auVar76._4_4_ = -(fVar42 * auVar75._4_4_) + auVar62._4_4_;
      auVar76._8_4_ = -(fVar45 * auVar75._8_4_) + auVar62._8_4_;
      auVar76._12_4_ = -(fVar47 * auVar75._12_4_) + auVar62._12_4_;
      auVar76._16_4_ = -(fVar49 * auVar75._16_4_) + auVar62._16_4_;
      auVar76._20_4_ = -(fVar51 * auVar75._20_4_) + auVar62._20_4_;
      auVar76._24_4_ = -(fVar53 * auVar75._24_4_) + auVar62._24_4_;
      auVar76._28_4_ = -(fVar55 * auVar75._28_4_) + auVar62._28_4_;
      auVar72._0_4_ = -(fVar41 * auVar65._0_4_) + auVar98._0_4_;
      auVar72._4_4_ = -(fVar42 * auVar65._4_4_) + auVar98._4_4_;
      auVar72._8_4_ = -(fVar45 * auVar65._8_4_) + auVar98._8_4_;
      auVar72._12_4_ = -(fVar47 * auVar65._12_4_) + auVar98._12_4_;
      auVar72._16_4_ = -(fVar49 * auVar65._16_4_) + auVar98._16_4_;
      auVar72._20_4_ = -(fVar51 * auVar65._20_4_) + auVar98._20_4_;
      auVar72._24_4_ = -(fVar53 * auVar65._24_4_) + auVar98._24_4_;
      auVar72._28_4_ = -(fVar55 * auVar65._28_4_) + auVar98._28_4_;
      auVar30._0_4_ = uVar23 & (uint)(fVar57 * fVar11 + auVar82._0_4_);
      auVar30._4_4_ = uVar43 & (uint)(fVar86 * fVar4 + auVar82._4_4_);
      auVar30._8_4_ = uVar46 & (uint)(fVar90 * fVar5 + auVar82._8_4_);
      auVar30._12_4_ = uVar48 & (uint)(fVar91 * fVar6 + auVar82._12_4_);
      auVar30._16_4_ = uVar50 & (uint)(fVar92 * fVar7 + auVar82._16_4_);
      auVar30._20_4_ = uVar52 & (uint)(fVar93 * fVar8 + auVar82._20_4_);
      auVar30._24_4_ = uVar54 & (uint)(fVar95 * fVar9 + auVar82._24_4_);
      auVar30._28_4_ = uVar56 & (uint)(fVar96 * fVar10 + auVar82._28_4_);
      auVar26 = vblendvps_avx(auVar30,auVar76,auVar28);
      auVar31._0_4_ = uVar23 & (uint)(fVar57 * fVar59 + auVar84._0_4_);
      auVar31._4_4_ = uVar43 & (uint)(fVar86 * fVar33 + auVar84._4_4_);
      auVar31._8_4_ = uVar46 & (uint)(fVar90 * fVar35 + auVar84._8_4_);
      auVar31._12_4_ = uVar48 & (uint)(fVar91 * fVar36 + auVar84._12_4_);
      auVar31._16_4_ = uVar50 & (uint)(fVar92 * fVar37 + auVar84._16_4_);
      auVar31._20_4_ = uVar52 & (uint)(fVar93 * fVar38 + auVar84._20_4_);
      auVar31._24_4_ = uVar54 & (uint)(fVar95 * fVar39 + auVar84._24_4_);
      auVar31._28_4_ = uVar56 & (uint)(fVar96 * fVar40 + auVar84._28_4_);
      auVar28 = vblendvps_avx(auVar31,auVar72,auVar28);
      cVar14 = (char)uVar16;
      if (cVar14 == -1) {
        auVar27 = vunpcklps_avx(auVar44,auVar26);
        auVar25 = vunpcklps_avx(auVar28,auVar61);
        auVar65 = vunpcklpd_avx(auVar27,auVar25);
        auVar27 = vunpckhpd_avx(auVar27,auVar25);
        auVar26 = vunpckhps_avx(auVar44,auVar26);
        auVar44 = vunpckhps_avx(auVar28,auVar61);
        auVar61 = vunpcklpd_avx(auVar26,auVar44);
        auVar70._16_16_ = auVar27._0_16_;
        auVar70._0_16_ = auVar65._0_16_;
        *pauVar18 = auVar70;
        auVar26 = vunpckhpd_avx(auVar26,auVar44);
        auVar34._16_16_ = auVar26._0_16_;
        auVar34._0_16_ = auVar61._0_16_;
        pauVar18[1] = auVar34;
        auVar44 = vperm2f128_avx(auVar65,auVar27,0x31);
        pauVar18[2] = auVar44;
        auVar26 = vperm2f128_avx(auVar61,auVar26,0x31);
        pauVar18[3] = auVar26;
      }
      else {
        auVar87 = auVar61._0_16_;
        auVar94 = auVar61._16_16_;
        auVar73 = auVar44._0_16_;
        auVar77 = auVar44._16_16_;
        auVar60 = auVar26._0_16_;
        auVar63 = auVar26._16_16_;
        auVar24 = auVar28._0_16_;
        auVar32 = auVar28._16_16_;
        if ((uVar16 & 1) != 0) {
          *(int *)*pauVar18 = auVar44._0_4_;
        }
        if ((uVar16 & 2) != 0) {
          uVar3 = vextractps_avx(auVar73,1);
          *(undefined4 *)(*pauVar18 + 0x10) = uVar3;
        }
        if ((uVar16 & 4) != 0) {
          uVar3 = vextractps_avx(auVar73,2);
          *(undefined4 *)pauVar18[1] = uVar3;
        }
        if ((uVar16 & 8) != 0) {
          uVar3 = vextractps_avx(auVar73,3);
          *(undefined4 *)(pauVar18[1] + 0x10) = uVar3;
        }
        if ((uVar16 & 0x10) != 0) {
          *(int *)pauVar18[2] = auVar44._16_4_;
        }
        if ((uVar16 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar77,1);
          *(undefined4 *)(pauVar18[2] + 0x10) = uVar3;
        }
        if ((uVar16 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar77,2);
          *(undefined4 *)pauVar18[3] = uVar3;
        }
        if (cVar14 < '\0') {
          uVar3 = vextractps_avx(auVar77,3);
          *(undefined4 *)(pauVar18[3] + 0x10) = uVar3;
        }
        if ((uVar16 & 1) != 0) {
          *(int *)(*pauVar18 + 4) = auVar26._0_4_;
        }
        if ((uVar16 & 2) != 0) {
          uVar3 = vextractps_avx(auVar60,1);
          *(undefined4 *)(*pauVar18 + 0x14) = uVar3;
        }
        if ((uVar16 & 4) != 0) {
          uVar3 = vextractps_avx(auVar60,2);
          *(undefined4 *)(pauVar18[1] + 4) = uVar3;
        }
        if ((uVar16 & 8) != 0) {
          uVar3 = vextractps_avx(auVar60,3);
          *(undefined4 *)(pauVar18[1] + 0x14) = uVar3;
        }
        if ((uVar16 & 0x10) != 0) {
          *(int *)(pauVar18[2] + 4) = auVar26._16_4_;
        }
        if ((uVar16 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar63,1);
          *(undefined4 *)(pauVar18[2] + 0x14) = uVar3;
        }
        if ((uVar16 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar63,2);
          *(undefined4 *)(pauVar18[3] + 4) = uVar3;
        }
        if (cVar14 < '\0') {
          uVar3 = vextractps_avx(auVar63,3);
          *(undefined4 *)(pauVar18[3] + 0x14) = uVar3;
        }
        if ((uVar16 & 1) != 0) {
          *(int *)(*pauVar18 + 8) = auVar28._0_4_;
        }
        if ((uVar16 & 2) != 0) {
          uVar3 = vextractps_avx(auVar24,1);
          *(undefined4 *)(*pauVar18 + 0x18) = uVar3;
        }
        if ((uVar16 & 4) != 0) {
          uVar3 = vextractps_avx(auVar24,2);
          *(undefined4 *)(pauVar18[1] + 8) = uVar3;
        }
        if ((uVar16 & 8) != 0) {
          uVar3 = vextractps_avx(auVar24,3);
          *(undefined4 *)(pauVar18[1] + 0x18) = uVar3;
        }
        if ((uVar16 & 0x10) != 0) {
          *(int *)(pauVar18[2] + 8) = auVar28._16_4_;
        }
        if ((uVar16 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar32,1);
          *(undefined4 *)(pauVar18[2] + 0x18) = uVar3;
        }
        if ((uVar16 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar32,2);
          *(undefined4 *)(pauVar18[3] + 8) = uVar3;
        }
        if (cVar14 < '\0') {
          uVar3 = vextractps_avx(auVar32,3);
          *(undefined4 *)(pauVar18[3] + 0x18) = uVar3;
        }
        if ((uVar16 & 1) != 0) {
          *(int *)(*pauVar18 + 0xc) = auVar61._0_4_;
        }
        if ((uVar16 & 2) != 0) {
          uVar3 = vextractps_avx(auVar87,1);
          *(undefined4 *)(*pauVar18 + 0x1c) = uVar3;
        }
        if ((uVar16 & 4) != 0) {
          uVar3 = vextractps_avx(auVar87,2);
          *(undefined4 *)(pauVar18[1] + 0xc) = uVar3;
        }
        if ((uVar16 & 8) != 0) {
          uVar3 = vextractps_avx(auVar87,3);
          *(undefined4 *)(pauVar18[1] + 0x1c) = uVar3;
        }
        if ((uVar16 & 0x10) != 0) {
          *(int *)(pauVar18[2] + 0xc) = auVar61._16_4_;
        }
        if ((uVar16 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar94,1);
          *(undefined4 *)(pauVar18[2] + 0x1c) = uVar3;
        }
        if ((uVar16 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar94,2);
          *(undefined4 *)(pauVar18[3] + 0xc) = uVar3;
        }
        if (cVar14 < '\0') {
          uVar3 = vextractps_avx(auVar94,3);
          *(undefined4 *)(pauVar18[3] + 0x1c) = uVar3;
        }
      }
    }
  }
  return;
}

// ApplyLegacySphericalBackstopConstraintsWithRadiusMap_avx2 @ 140328220

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLegacySphericalBackstopConstraintsWithRadiusMap_avx2
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,float param_5,
               float param_6,float param_7,int param_8,uint param_9)

{
  float *pfVar1;
  undefined1 (*pauVar2) [32];
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [32];
  char cVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined1 (*pauVar17) [32];
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  ulonglong uVar21;
  uint uVar22;
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [16];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar35 [16];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar36 [16];
  undefined1 auVar39 [16];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [16];
  undefined1 auVar45 [32];
  undefined1 auVar52 [16];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [16];
  undefined1 auVar58 [32];
  undefined1 auVar59 [16];
  float fVar60;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  undefined1 auVar61 [32];
  float fVar68;
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  uint uVar71;
  uint uVar73;
  uint uVar74;
  uint uVar75;
  uint uVar76;
  uint uVar77;
  uint uVar78;
  uint uVar79;
  undefined1 auVar72 [32];
  undefined1 auVar80 [32];
  float fVar81;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  undefined1 auVar82 [32];
  float fVar89;
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  uint local_2a0;
  uint uStack_29c;
  uint uStack_298;
  uint uStack_294;
  uint uStack_290;
  uint uStack_28c;
  uint uStack_288;
  uint uStack_284;
  
  uVar15 = param_9 + 7;
  if (-1 < (int)param_9) {
    uVar15 = param_9;
  }
  if ((int)(uVar15 & 0xfffffff8) < 1) {
    uVar16 = 0;
    if ((int)param_9 < 1) {
      return;
    }
  }
  else {
    lVar19 = (longlong)param_8 * 0x10 + param_1;
    lVar18 = (longlong)param_8 * 0xc + 0x40;
    uVar21 = 0;
    uVar16 = 0;
    do {
      auVar25 = *(undefined1 (*) [32])(lVar19 + uVar21 * 4);
      auVar37 = *(undefined1 (*) [32])(lVar19 + 0x20 + uVar21 * 4);
      auVar41 = *(undefined1 (*) [32])(lVar19 + 0x40 + uVar21 * 4);
      auVar33 = *(undefined1 (*) [32])(lVar19 + 0x60 + uVar21 * 4);
      auVar38 = vperm2f128_avx(auVar25,auVar41,0x20);
      auVar55 = vperm2f128_avx(auVar25,auVar41,0x31);
      auVar31 = vperm2f128_avx(auVar37,auVar33,0x20);
      auVar80 = vperm2f128_avx(auVar37,auVar33,0x31);
      auVar30 = vunpckhps_avx(auVar38,auVar55);
      auVar24 = vunpckhps_avx(auVar31,auVar80);
      auVar46 = vunpckhpd_avx(auVar30,auVar24);
      auVar32 = vcmpps_avx(auVar46,
                           ___ymm_0000000000000000000000000000000000000000000000000000000000000000,4
                          );
      if ((((((((SUB321(auVar32 >> 0x1f,0) & 1) != 0 || (SUB321(auVar32 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar32 >> 0x5f,0) & 1) != 0) || SUB321(auVar32 >> 0x7f,0) != '\0') ||
            (SUB321(auVar32 >> 0x9f,0) & 1) != 0) || SUB321(auVar32 >> 0xbf,0) != '\0') ||
          (SUB321(auVar32 >> 0xdf,0) & 1) != 0) || auVar32[0x1f] < '\0') {
        auVar45 = vunpcklpd_avx(auVar30,auVar24);
        auVar30 = vunpcklps_avx(auVar38,auVar55);
        auVar24 = vunpcklps_avx(auVar31,auVar80);
        auVar23 = vunpckhpd_avx(auVar30,auVar24);
        auVar40 = vunpcklpd_avx(auVar30,auVar24);
        auVar30 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar18);
        auVar24 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar18);
        auVar38 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar24);
        auVar55 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,auVar30);
        auVar38 = vblendps_avx(auVar55,auVar38,0x88);
        auVar55 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar24);
        auVar31 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,*(undefined1 (*) [32])(param_2 + lVar18));
        auVar55 = vblendps_avx(auVar31,auVar55,0x13);
        auVar42 = vperm2f128_avx(auVar38,auVar55,0x31);
        auVar30 = vblendps_avx(auVar24,auVar30,0x24);
        auVar30 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar30);
        auVar24 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,*(undefined1 (*) [32])(param_2 + lVar18));
        auVar31 = vblendps_avx(auVar30,auVar24,0xe0);
        auVar30 = *(undefined1 (*) [32])(param_3 + -0x40 + lVar18);
        auVar24 = *(undefined1 (*) [32])(param_3 + -0x20 + lVar18);
        auVar80 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar24);
        auVar90 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,auVar30);
        auVar80 = vblendps_avx(auVar90,auVar80,0x88);
        auVar90 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar24);
        auVar47 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,*(undefined1 (*) [32])(param_3 + lVar18));
        auVar90 = vblendps_avx(auVar47,auVar90,0x13);
        auVar47 = vperm2f128_avx(auVar80,auVar90,0x31);
        auVar30 = vblendps_avx(auVar24,auVar30,0x24);
        auVar30 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar30);
        auVar24 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,*(undefined1 (*) [32])(param_3 + lVar18));
        auVar30 = vblendps_avx(auVar30,auVar24,0xe0);
        pfVar1 = (float *)(param_4 + (uVar21 & 0xffffffff));
        auVar12._4_4_ = param_5;
        auVar12._0_4_ = param_5;
        auVar12._8_4_ = param_5;
        auVar12._12_4_ = param_5;
        auVar12._16_4_ = param_5;
        auVar12._20_4_ = param_5;
        auVar12._24_4_ = param_5;
        auVar12._28_4_ = param_5;
        auVar54._0_4_ = -(param_5 * auVar80._0_4_) + auVar38._0_4_;
        auVar54._4_4_ = -(param_5 * auVar80._4_4_) + auVar38._4_4_;
        auVar54._8_4_ = -(param_5 * auVar80._8_4_) + auVar38._8_4_;
        auVar54._12_4_ = -(param_5 * auVar80._12_4_) + auVar38._12_4_;
        auVar54._16_4_ = -(param_5 * auVar90._0_4_) + auVar55._0_4_;
        auVar54._20_4_ = -(param_5 * auVar90._4_4_) + auVar55._4_4_;
        auVar54._24_4_ = -(param_5 * auVar90._8_4_) + auVar55._8_4_;
        auVar54._28_4_ = -(param_5 * auVar90._12_4_) + auVar55._12_4_;
        auVar61._0_4_ = -(param_5 * auVar47._0_4_) + auVar42._0_4_;
        auVar61._4_4_ = -(param_5 * auVar47._4_4_) + auVar42._4_4_;
        auVar61._8_4_ = -(param_5 * auVar47._8_4_) + auVar42._8_4_;
        auVar61._12_4_ = -(param_5 * auVar47._12_4_) + auVar42._12_4_;
        auVar61._16_4_ = -(param_5 * auVar47._16_4_) + auVar42._16_4_;
        auVar61._20_4_ = -(param_5 * auVar47._20_4_) + auVar42._20_4_;
        auVar61._24_4_ = -(param_5 * auVar47._24_4_) + auVar42._24_4_;
        auVar61._28_4_ = -(param_5 * auVar47._28_4_) + auVar42._28_4_;
        auVar69._0_4_ = -(param_5 * auVar30._0_4_) + auVar31._0_4_;
        auVar69._4_4_ = -(param_5 * auVar30._4_4_) + auVar31._4_4_;
        auVar69._8_4_ = -(param_5 * auVar30._8_4_) + auVar31._8_4_;
        auVar69._12_4_ = -(param_5 * auVar30._12_4_) + auVar31._12_4_;
        auVar69._16_4_ = -(param_5 * auVar30._16_4_) + auVar31._16_4_;
        auVar69._20_4_ = -(param_5 * auVar30._20_4_) + auVar31._20_4_;
        auVar69._24_4_ = -(param_5 * auVar30._24_4_) + auVar31._24_4_;
        auVar69._28_4_ = -(param_5 * auVar30._28_4_) + auVar31._28_4_;
        auVar24 = vsubps_avx(auVar40,auVar54);
        auVar23 = vsubps_avx(auVar23,auVar61);
        auVar45 = vsubps_avx(auVar45,auVar69);
        fVar4 = auVar23._0_4_;
        fVar5 = auVar23._4_4_;
        fVar6 = auVar23._8_4_;
        fVar7 = auVar23._12_4_;
        fVar8 = auVar23._16_4_;
        fVar9 = auVar23._20_4_;
        fVar10 = auVar23._24_4_;
        fVar11 = auVar23._28_4_;
        fVar81 = auVar24._0_4_;
        fVar84 = auVar24._4_4_;
        fVar86 = auVar24._8_4_;
        fVar88 = auVar24._12_4_;
        fVar92 = auVar24._16_4_;
        fVar94 = auVar24._20_4_;
        fVar96 = auVar24._24_4_;
        fVar98 = auVar24._28_4_;
        fVar60 = auVar45._0_4_;
        auVar40._0_4_ = fVar60 * fVar60 + fVar81 * fVar81 + fVar4 * fVar4;
        fVar62 = auVar45._4_4_;
        auVar40._4_4_ = fVar62 * fVar62 + fVar84 * fVar84 + fVar5 * fVar5;
        fVar63 = auVar45._8_4_;
        auVar40._8_4_ = fVar63 * fVar63 + fVar86 * fVar86 + fVar6 * fVar6;
        fVar64 = auVar45._12_4_;
        auVar40._12_4_ = fVar64 * fVar64 + fVar88 * fVar88 + fVar7 * fVar7;
        fVar65 = auVar45._16_4_;
        auVar40._16_4_ = fVar65 * fVar65 + fVar92 * fVar92 + fVar8 * fVar8;
        fVar66 = auVar45._20_4_;
        auVar40._20_4_ = fVar66 * fVar66 + fVar94 * fVar94 + fVar9 * fVar9;
        fVar67 = auVar45._24_4_;
        auVar40._24_4_ = fVar67 * fVar67 + fVar96 * fVar96 + fVar10 * fVar10;
        fVar68 = auVar45._28_4_;
        auVar40._28_4_ = fVar68 * fVar68 + fVar98 * fVar98 + fVar11 * fVar11;
        auVar24 = vsqrtps_avx(auVar40);
        auVar23._0_4_ = param_7 * *pfVar1 + param_6;
        auVar23._4_4_ = param_7 * pfVar1[1] + param_6;
        auVar23._8_4_ = param_7 * pfVar1[2] + param_6;
        auVar23._12_4_ = param_7 * pfVar1[3] + param_6;
        auVar23._16_4_ = param_7 * pfVar1[4] + param_6;
        auVar23._20_4_ = param_7 * pfVar1[5] + param_6;
        auVar23._24_4_ = param_7 * pfVar1[6] + param_6;
        auVar23._28_4_ = param_7 * pfVar1[7] + param_6;
        auVar24 = vdivps_avx(auVar23,auVar24);
        fVar100 = auVar24._0_4_;
        fVar101 = auVar24._4_4_;
        fVar102 = auVar24._8_4_;
        fVar103 = auVar24._12_4_;
        fVar104 = auVar24._16_4_;
        fVar105 = auVar24._20_4_;
        fVar106 = auVar24._24_4_;
        fVar107 = auVar24._28_4_;
        auVar24 = vsubps_avx(auVar12,auVar23);
        fVar83 = auVar24._0_4_;
        auVar45._0_4_ = -(fVar83 * auVar80._0_4_) + auVar38._0_4_;
        fVar85 = auVar24._4_4_;
        auVar45._4_4_ = -(fVar85 * auVar80._4_4_) + auVar38._4_4_;
        fVar87 = auVar24._8_4_;
        auVar45._8_4_ = -(fVar87 * auVar80._8_4_) + auVar38._8_4_;
        fVar89 = auVar24._12_4_;
        auVar45._12_4_ = -(fVar89 * auVar80._12_4_) + auVar38._12_4_;
        fVar93 = auVar24._16_4_;
        auVar45._16_4_ = -(fVar93 * auVar90._0_4_) + auVar55._0_4_;
        fVar95 = auVar24._20_4_;
        auVar45._20_4_ = -(fVar95 * auVar90._4_4_) + auVar55._4_4_;
        fVar97 = auVar24._24_4_;
        auVar45._24_4_ = -(fVar97 * auVar90._8_4_) + auVar55._8_4_;
        fVar99 = auVar24._28_4_;
        auVar45._28_4_ = -(fVar99 * auVar90._12_4_) + auVar55._12_4_;
        auVar24._0_4_ = auVar23._0_4_ * auVar23._0_4_;
        auVar24._4_4_ = auVar23._4_4_ * auVar23._4_4_;
        auVar24._8_4_ = auVar23._8_4_ * auVar23._8_4_;
        auVar24._12_4_ = auVar23._12_4_ * auVar23._12_4_;
        auVar24._16_4_ = auVar23._16_4_ * auVar23._16_4_;
        auVar24._20_4_ = auVar23._20_4_ * auVar23._20_4_;
        auVar24._24_4_ = auVar23._24_4_ * auVar23._24_4_;
        auVar24._28_4_ = auVar23._28_4_ * auVar23._28_4_;
        auVar24 = vcmpps_avx(auVar40,auVar24,1);
        auVar38._4_4_ = __real_322bcc77;
        auVar38._0_4_ = __real_322bcc77;
        auVar38._8_4_ = __real_322bcc77;
        auVar38._12_4_ = __real_322bcc77;
        auVar38._16_4_ = __real_322bcc77;
        auVar38._20_4_ = __real_322bcc77;
        auVar38._24_4_ = __real_322bcc77;
        auVar38._28_4_ = __real_322bcc77;
        auVar38 = vcmpps_avx(auVar40,auVar38,1);
        uVar71 = auVar24._0_4_;
        auVar55._0_4_ = uVar71 & (uint)(fVar100 * fVar81 + auVar54._0_4_);
        uVar73 = auVar24._4_4_;
        auVar55._4_4_ = uVar73 & (uint)(fVar101 * fVar84 + auVar54._4_4_);
        uVar74 = auVar24._8_4_;
        auVar55._8_4_ = uVar74 & (uint)(fVar102 * fVar86 + auVar54._8_4_);
        uVar75 = auVar24._12_4_;
        auVar55._12_4_ = uVar75 & (uint)(fVar103 * fVar88 + auVar54._12_4_);
        uVar76 = auVar24._16_4_;
        auVar55._16_4_ = uVar76 & (uint)(fVar104 * fVar92 + auVar54._16_4_);
        uVar77 = auVar24._20_4_;
        auVar55._20_4_ = uVar77 & (uint)(fVar105 * fVar94 + auVar54._20_4_);
        uVar78 = auVar24._24_4_;
        auVar55._24_4_ = uVar78 & (uint)(fVar106 * fVar96 + auVar54._24_4_);
        uVar79 = auVar24._28_4_;
        auVar55._28_4_ = uVar79 & (uint)(fVar107 * fVar98 + auVar54._28_4_);
        auVar24 = vblendvps_avx(auVar55,auVar45,auVar38);
        auVar55 = vcmpps_avx(auVar24,
                             ___ymm_0000000000000000000000000000000000000000000000000000000000000000
                             ,4);
        local_2a0 = auVar32._0_4_;
        uStack_29c = auVar32._4_4_;
        uStack_298 = auVar32._8_4_;
        uStack_294 = auVar32._12_4_;
        uStack_290 = auVar32._16_4_;
        uStack_28c = auVar32._20_4_;
        uStack_288 = auVar32._24_4_;
        uStack_284 = auVar32._28_4_;
        auVar32._0_4_ = auVar55._0_4_ & local_2a0;
        auVar32._4_4_ = auVar55._4_4_ & uStack_29c;
        auVar32._8_4_ = auVar55._8_4_ & uStack_298;
        auVar32._12_4_ = auVar55._12_4_ & uStack_294;
        auVar32._16_4_ = auVar55._16_4_ & uStack_290;
        auVar32._20_4_ = auVar55._20_4_ & uStack_28c;
        auVar32._24_4_ = auVar55._24_4_ & uStack_288;
        auVar32._28_4_ = auVar55._28_4_ & uStack_284;
        uVar22 = vmovmskps_avx(auVar32);
        if (uVar22 != 0) {
          auVar80._0_4_ = -(fVar83 * auVar47._0_4_) + auVar42._0_4_;
          auVar80._4_4_ = -(fVar85 * auVar47._4_4_) + auVar42._4_4_;
          auVar80._8_4_ = -(fVar87 * auVar47._8_4_) + auVar42._8_4_;
          auVar80._12_4_ = -(fVar89 * auVar47._12_4_) + auVar42._12_4_;
          auVar80._16_4_ = -(fVar93 * auVar47._16_4_) + auVar42._16_4_;
          auVar80._20_4_ = -(fVar95 * auVar47._20_4_) + auVar42._20_4_;
          auVar80._24_4_ = -(fVar97 * auVar47._24_4_) + auVar42._24_4_;
          auVar80._28_4_ = -(fVar99 * auVar47._28_4_) + auVar42._28_4_;
          auVar90._0_4_ = -(fVar83 * auVar30._0_4_) + auVar31._0_4_;
          auVar90._4_4_ = -(fVar85 * auVar30._4_4_) + auVar31._4_4_;
          auVar90._8_4_ = -(fVar87 * auVar30._8_4_) + auVar31._8_4_;
          auVar90._12_4_ = -(fVar89 * auVar30._12_4_) + auVar31._12_4_;
          auVar90._16_4_ = -(fVar93 * auVar30._16_4_) + auVar31._16_4_;
          auVar90._20_4_ = -(fVar95 * auVar30._20_4_) + auVar31._20_4_;
          auVar90._24_4_ = -(fVar97 * auVar30._24_4_) + auVar31._24_4_;
          auVar90._28_4_ = -(fVar99 * auVar30._28_4_) + auVar31._28_4_;
          auVar30._0_4_ = uVar71 & (uint)(fVar100 * fVar4 + auVar61._0_4_);
          auVar30._4_4_ = uVar73 & (uint)(fVar101 * fVar5 + auVar61._4_4_);
          auVar30._8_4_ = uVar74 & (uint)(fVar102 * fVar6 + auVar61._8_4_);
          auVar30._12_4_ = uVar75 & (uint)(fVar103 * fVar7 + auVar61._12_4_);
          auVar30._16_4_ = uVar76 & (uint)(fVar104 * fVar8 + auVar61._16_4_);
          auVar30._20_4_ = uVar77 & (uint)(fVar105 * fVar9 + auVar61._20_4_);
          auVar30._24_4_ = uVar78 & (uint)(fVar106 * fVar10 + auVar61._24_4_);
          auVar30._28_4_ = uVar79 & (uint)(fVar107 * fVar11 + auVar61._28_4_);
          auVar32 = vblendvps_avx(auVar30,auVar80,auVar38);
          auVar31._0_4_ = uVar71 & (uint)(fVar100 * fVar60 + auVar69._0_4_);
          auVar31._4_4_ = uVar73 & (uint)(fVar101 * fVar62 + auVar69._4_4_);
          auVar31._8_4_ = uVar74 & (uint)(fVar102 * fVar63 + auVar69._8_4_);
          auVar31._12_4_ = uVar75 & (uint)(fVar103 * fVar64 + auVar69._12_4_);
          auVar31._16_4_ = uVar76 & (uint)(fVar104 * fVar65 + auVar69._16_4_);
          auVar31._20_4_ = uVar77 & (uint)(fVar105 * fVar66 + auVar69._20_4_);
          auVar31._24_4_ = uVar78 & (uint)(fVar106 * fVar67 + auVar69._24_4_);
          auVar31._28_4_ = uVar79 & (uint)(fVar107 * fVar68 + auVar69._28_4_);
          auVar30 = vblendvps_avx(auVar31,auVar90,auVar38);
          cVar13 = (char)uVar22;
          if (cVar13 == -1) {
            auVar25 = vunpcklps_avx(auVar24,auVar32);
            auVar37 = vunpcklps_avx(auVar30,auVar46);
            auVar33 = vunpcklpd_avx(auVar25,auVar37);
            auVar25 = vunpckhpd_avx(auVar25,auVar37);
            auVar37 = vunpckhps_avx(auVar24,auVar32);
            auVar41 = vunpckhps_avx(auVar30,auVar46);
            auVar32 = vunpcklpd_avx(auVar37,auVar41);
            auVar46._16_16_ = auVar25._0_16_;
            auVar46._0_16_ = auVar33._0_16_;
            *(undefined1 (*) [32])(lVar19 + uVar21 * 4) = auVar46;
            auVar37 = vunpckhpd_avx(auVar37,auVar41);
            auVar41._16_16_ = auVar37._0_16_;
            auVar41._0_16_ = auVar32._0_16_;
            *(undefined1 (*) [32])(lVar19 + 0x20 + uVar21 * 4) = auVar41;
            auVar25 = vperm2f128_avx(auVar33,auVar25,0x31);
            *(undefined1 (*) [32])(lVar19 + 0x40 + uVar21 * 4) = auVar25;
            auVar25 = vperm2f128_avx(auVar32,auVar37,0x31);
            *(undefined1 (*) [32])(lVar19 + 0x60 + uVar21 * 4) = auVar25;
          }
          else {
            auVar44 = auVar24._0_16_;
            auVar52 = auVar24._16_16_;
            auVar36 = auVar32._0_16_;
            auVar39 = auVar32._16_16_;
            auVar29 = auVar30._0_16_;
            auVar35 = auVar30._16_16_;
            if ((uVar22 & 1) != 0) {
              *(int *)(lVar19 + uVar21 * 4) = auVar24._0_4_;
            }
            if ((uVar22 & 2) != 0) {
              uVar3 = vextractps_avx(auVar44,1);
              *(undefined4 *)(lVar19 + 0x10 + uVar21 * 4) = uVar3;
            }
            if ((uVar22 & 4) != 0) {
              uVar3 = vextractps_avx(auVar44,2);
              *(undefined4 *)(lVar19 + 0x20 + uVar21 * 4) = uVar3;
            }
            if ((uVar22 & 8) != 0) {
              uVar3 = vextractps_avx(auVar44,3);
              *(undefined4 *)(lVar19 + 0x30 + uVar21 * 4) = uVar3;
            }
            if ((uVar22 & 0x10) != 0) {
              *(int *)(lVar19 + 0x40 + uVar21 * 4) = auVar24._16_4_;
            }
            if ((uVar22 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar52,1);
              *(undefined4 *)(lVar19 + 0x50 + uVar21 * 4) = uVar3;
            }
            if ((uVar22 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar52,2);
              *(undefined4 *)(lVar19 + 0x60 + uVar21 * 4) = uVar3;
            }
            if (cVar13 < '\0') {
              uVar3 = vextractps_avx(auVar52,3);
              *(undefined4 *)(lVar19 + 0x70 + uVar21 * 4) = uVar3;
            }
            if ((uVar22 & 1) != 0) {
              *(int *)(lVar19 + 4 + uVar21 * 4) = auVar32._0_4_;
            }
            if ((uVar22 & 2) != 0) {
              uVar3 = vextractps_avx(auVar36,1);
              *(undefined4 *)(lVar19 + 0x14 + uVar21 * 4) = uVar3;
            }
            if ((uVar22 & 4) != 0) {
              uVar3 = vextractps_avx(auVar36,2);
              *(undefined4 *)(lVar19 + 0x24 + uVar21 * 4) = uVar3;
            }
            if ((uVar22 & 8) != 0) {
              uVar3 = vextractps_avx(auVar36,3);
              *(undefined4 *)(lVar19 + 0x34 + uVar21 * 4) = uVar3;
            }
            if ((uVar22 & 0x10) != 0) {
              *(int *)(lVar19 + 0x44 + uVar21 * 4) = auVar32._16_4_;
            }
            if ((uVar22 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar39,1);
              *(undefined4 *)(lVar19 + 0x54 + uVar21 * 4) = uVar3;
            }
            if ((uVar22 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar39,2);
              *(undefined4 *)(lVar19 + 100 + uVar21 * 4) = uVar3;
            }
            if (cVar13 < '\0') {
              uVar3 = vextractps_avx(auVar39,3);
              *(undefined4 *)(lVar19 + 0x74 + uVar21 * 4) = uVar3;
            }
            if ((uVar22 & 1) != 0) {
              *(int *)(lVar19 + 8 + uVar21 * 4) = auVar30._0_4_;
            }
            if ((uVar22 & 2) != 0) {
              uVar3 = vextractps_avx(auVar29,1);
              *(undefined4 *)(lVar19 + 0x18 + uVar21 * 4) = uVar3;
            }
            if ((uVar22 & 4) != 0) {
              uVar3 = vextractps_avx(auVar29,2);
              *(undefined4 *)(lVar19 + 0x28 + uVar21 * 4) = uVar3;
            }
            if ((uVar22 & 8) != 0) {
              uVar3 = vextractps_avx(auVar29,3);
              *(undefined4 *)(lVar19 + 0x38 + uVar21 * 4) = uVar3;
            }
            if ((uVar22 & 0x10) != 0) {
              *(int *)(lVar19 + 0x48 + uVar21 * 4) = auVar30._16_4_;
            }
            if ((uVar22 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar35,1);
              *(undefined4 *)(lVar19 + 0x58 + uVar21 * 4) = uVar3;
            }
            if ((uVar22 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar35,2);
              *(undefined4 *)(lVar19 + 0x68 + uVar21 * 4) = uVar3;
            }
            if (cVar13 < '\0') {
              uVar3 = vextractps_avx(auVar35,3);
              *(undefined4 *)(lVar19 + 0x78 + uVar21 * 4) = uVar3;
            }
            if ((uVar22 & 1) != 0) {
              uVar3 = vextractps_avx(auVar25._0_16_,3);
              *(undefined4 *)(lVar19 + 0xc + uVar21 * 4) = uVar3;
            }
            if ((uVar22 & 2) != 0) {
              uVar3 = vextractps_avx(auVar25._16_16_,3);
              *(undefined4 *)(lVar19 + 0x1c + uVar21 * 4) = uVar3;
            }
            if ((uVar22 & 4) != 0) {
              uVar3 = vextractps_avx(auVar37._0_16_,3);
              *(undefined4 *)(lVar19 + 0x2c + uVar21 * 4) = uVar3;
            }
            if ((uVar22 & 8) != 0) {
              uVar3 = vextractps_avx(auVar37._16_16_,3);
              *(undefined4 *)(lVar19 + 0x3c + uVar21 * 4) = uVar3;
            }
            if ((uVar22 & 0x10) != 0) {
              uVar3 = vextractps_avx(auVar41._0_16_,3);
              *(undefined4 *)(lVar19 + 0x4c + uVar21 * 4) = uVar3;
            }
            if ((uVar22 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar41._16_16_,3);
              *(undefined4 *)(lVar19 + 0x5c + uVar21 * 4) = uVar3;
            }
            if ((uVar22 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar33._0_16_,3);
              *(undefined4 *)(lVar19 + 0x6c + uVar21 * 4) = uVar3;
            }
            if (cVar13 < '\0') {
              uVar3 = vextractps_avx(auVar33._16_16_,3);
              *(undefined4 *)(lVar19 + 0x7c + uVar21 * 4) = uVar3;
            }
          }
        }
      }
      uVar16 = uVar16 + 8;
      uVar21 = uVar21 + 0x20;
      lVar18 = lVar18 + 0x60;
    } while (uVar16 < (uVar15 & 0xfffffff8));
    if ((int)param_9 <= (int)uVar16) {
      return;
    }
  }
  iVar14 = (int)uVar16;
  auVar25._4_4_ = iVar14;
  auVar25._0_4_ = iVar14;
  auVar25._8_4_ = iVar14;
  auVar25._12_4_ = iVar14;
  auVar25._16_4_ = iVar14;
  auVar25._20_4_ = iVar14;
  auVar25._24_4_ = iVar14;
  auVar25._28_4_ = iVar14;
  auVar25 = vpor_avx2(auVar25,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar37._4_4_ = param_9;
  auVar37._0_4_ = param_9;
  auVar37._8_4_ = param_9;
  auVar37._12_4_ = param_9;
  auVar37._16_4_ = param_9;
  auVar37._20_4_ = param_9;
  auVar37._24_4_ = param_9;
  auVar37._28_4_ = param_9;
  auVar25 = vpcmpgtd_avx2(auVar37,auVar25);
  lVar18 = (longlong)(param_8 + iVar14);
  pauVar17 = (undefined1 (*) [32])(param_1 + lVar18 * 0x10);
  iVar20 = vmovmskps_avx(auVar25);
  if (iVar20 == 0xff) {
    auVar41 = vperm2f128_avx(*pauVar17,pauVar17[2],0x20);
    auVar33 = vperm2f128_avx(*pauVar17,pauVar17[2],0x31);
    auVar32 = vperm2f128_avx(pauVar17[1],pauVar17[3],0x20);
    auVar30 = vperm2f128_avx(pauVar17[1],pauVar17[3],0x31);
    auVar37 = vunpcklps_avx(auVar41,auVar33);
    auVar41 = vunpckhps_avx(auVar41,auVar33);
    auVar46 = vunpcklps_avx(auVar32,auVar30);
    auVar33 = vunpckhps_avx(auVar32,auVar30);
    auVar32 = vunpcklpd_avx(auVar37,auVar46);
    auVar37 = vunpckhpd_avx(auVar37,auVar46);
    auVar46 = vunpcklpd_avx(auVar41,auVar33);
    auVar41 = vunpckhpd_avx(auVar41,auVar33);
  }
  else {
    auVar32 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar25);
    auVar37 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar25);
    auVar46 = vgatherdps(ZEXT832(0),auVar25);
    auVar41 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar25);
  }
  auVar33 = vmaskmovps_avx(auVar25,auVar32);
  auVar37 = vmaskmovps_avx(auVar25,auVar37);
  auVar32 = vmaskmovps_avx(auVar25,auVar46);
  auVar46 = vcmpps_avx(auVar41,ZEXT832(0) << 0x20,4);
  auVar46 = auVar25 & auVar46;
  if ((((((((SUB321(auVar46 >> 0x1f,0) & 1) != 0 || (SUB321(auVar46 >> 0x3f,0) & 1) != 0) ||
          (SUB321(auVar46 >> 0x5f,0) & 1) != 0) || SUB321(auVar46 >> 0x7f,0) != '\0') ||
        (SUB321(auVar46 >> 0x9f,0) & 1) != 0) || SUB321(auVar46 >> 0xbf,0) != '\0') ||
      (SUB321(auVar46 >> 0xdf,0) & 1) != 0) || auVar46[0x1f] < '\0') {
    pauVar2 = (undefined1 (*) [32])(param_2 + lVar18 * 0xc);
    if ((char)iVar20 == -1) {
      auVar46 = pauVar2[1];
      auVar30 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar46);
      auVar24 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,*pauVar2);
      auVar30 = vblendps_avx(auVar24,auVar30,0x88);
      auVar24 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar46);
      auVar38 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,pauVar2[2]);
      auVar24 = vblendps_avx(auVar38,auVar24,0x13);
      auVar47._16_16_ = auVar24._0_16_;
      auVar47._0_16_ = auVar30._0_16_;
      auVar80 = vperm2f128_avx(auVar30,auVar24,0x31);
      auVar46 = vblendps_avx(auVar46,*pauVar2,0x24);
      auVar46 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar46);
      auVar30 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,pauVar2[2]);
      auVar38 = vblendps_avx(auVar46,auVar30,0xe0);
      auVar46 = *(undefined1 (*) [32])(param_3 + lVar18 * 0xc);
      auVar30 = *(undefined1 (*) [32])(param_3 + 0x20 + lVar18 * 0xc);
      auVar24 = *(undefined1 (*) [32])(param_3 + 0x40 + lVar18 * 0xc);
      auVar55 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar30);
      auVar31 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar46);
      auVar55 = vblendps_avx(auVar31,auVar55,0x88);
      auVar31 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar30);
      auVar90 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,auVar24);
      auVar31 = vblendps_avx(auVar90,auVar31,0x13);
      auVar42._16_16_ = auVar31._0_16_;
      auVar42._0_16_ = auVar55._0_16_;
      auVar55 = vperm2f128_avx(auVar55,auVar31,0x31);
      auVar46 = vblendps_avx(auVar30,auVar46,0x24);
      auVar46 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar46);
      auVar30 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,auVar24);
      auVar46 = vblendps_avx(auVar46,auVar30,0xe0);
    }
    else {
      auVar47 = vgatherdps(ZEXT832(0) << 0x20,auVar25);
      auVar80 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar25);
      auVar38 = vgatherdps(ZEXT832(0),auVar25);
      auVar42 = vgatherdps(ZEXT832(0) << 0x20,auVar25);
      auVar55 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar25);
      auVar46 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar25);
    }
    auVar30 = vmaskmovps_avx(auVar25,*(undefined1 (*) [32])(param_4 + (iVar14 << 2)));
    auVar91._0_4_ = param_7 * auVar30._0_4_ + param_6;
    auVar91._4_4_ = param_7 * auVar30._4_4_ + param_6;
    auVar91._8_4_ = param_7 * auVar30._8_4_ + param_6;
    auVar91._12_4_ = param_7 * auVar30._12_4_ + param_6;
    auVar91._16_4_ = param_7 * auVar30._16_4_ + param_6;
    auVar91._20_4_ = param_7 * auVar30._20_4_ + param_6;
    auVar91._24_4_ = param_7 * auVar30._24_4_ + param_6;
    auVar91._28_4_ = param_7 * auVar30._28_4_ + param_6;
    auVar82._4_4_ = param_5;
    auVar82._0_4_ = param_5;
    auVar82._8_4_ = param_5;
    auVar82._12_4_ = param_5;
    auVar82._16_4_ = param_5;
    auVar82._20_4_ = param_5;
    auVar82._24_4_ = param_5;
    auVar82._28_4_ = param_5;
    auVar58._0_4_ = -(param_5 * auVar42._0_4_) + auVar47._0_4_;
    auVar58._4_4_ = -(param_5 * auVar42._4_4_) + auVar47._4_4_;
    auVar58._8_4_ = -(param_5 * auVar42._8_4_) + auVar47._8_4_;
    auVar58._12_4_ = -(param_5 * auVar42._12_4_) + auVar47._12_4_;
    auVar58._16_4_ = -(param_5 * auVar42._16_4_) + auVar47._16_4_;
    auVar58._20_4_ = -(param_5 * auVar42._20_4_) + auVar47._20_4_;
    auVar58._24_4_ = -(param_5 * auVar42._24_4_) + auVar47._24_4_;
    auVar58._28_4_ = -(param_5 * auVar42._28_4_) + auVar47._28_4_;
    auVar70._0_4_ = -(param_5 * auVar55._0_4_) + auVar80._0_4_;
    auVar70._4_4_ = -(param_5 * auVar55._4_4_) + auVar80._4_4_;
    auVar70._8_4_ = -(param_5 * auVar55._8_4_) + auVar80._8_4_;
    auVar70._12_4_ = -(param_5 * auVar55._12_4_) + auVar80._12_4_;
    auVar70._16_4_ = -(param_5 * auVar55._16_4_) + auVar80._16_4_;
    auVar70._20_4_ = -(param_5 * auVar55._20_4_) + auVar80._20_4_;
    auVar70._24_4_ = -(param_5 * auVar55._24_4_) + auVar80._24_4_;
    auVar70._28_4_ = -(param_5 * auVar55._28_4_) + auVar80._28_4_;
    auVar72._0_4_ = -(param_5 * auVar46._0_4_) + auVar38._0_4_;
    auVar72._4_4_ = -(param_5 * auVar46._4_4_) + auVar38._4_4_;
    auVar72._8_4_ = -(param_5 * auVar46._8_4_) + auVar38._8_4_;
    auVar72._12_4_ = -(param_5 * auVar46._12_4_) + auVar38._12_4_;
    auVar72._16_4_ = -(param_5 * auVar46._16_4_) + auVar38._16_4_;
    auVar72._20_4_ = -(param_5 * auVar46._20_4_) + auVar38._20_4_;
    auVar72._24_4_ = -(param_5 * auVar46._24_4_) + auVar38._24_4_;
    auVar72._28_4_ = -(param_5 * auVar46._28_4_) + auVar38._28_4_;
    auVar33 = vsubps_avx(auVar33,auVar58);
    auVar37 = vsubps_avx(auVar37,auVar70);
    auVar32 = vsubps_avx(auVar32,auVar72);
    fVar4 = auVar37._0_4_;
    fVar5 = auVar37._4_4_;
    fVar6 = auVar37._8_4_;
    fVar7 = auVar37._12_4_;
    fVar8 = auVar37._16_4_;
    fVar9 = auVar37._20_4_;
    fVar10 = auVar37._24_4_;
    fVar11 = auVar37._28_4_;
    fVar100 = auVar33._0_4_;
    fVar101 = auVar33._4_4_;
    fVar102 = auVar33._8_4_;
    fVar103 = auVar33._12_4_;
    fVar104 = auVar33._16_4_;
    fVar105 = auVar33._20_4_;
    fVar106 = auVar33._24_4_;
    fVar107 = auVar33._28_4_;
    fVar60 = auVar32._0_4_;
    auVar33._0_4_ = fVar60 * fVar60 + fVar100 * fVar100 + fVar4 * fVar4;
    fVar62 = auVar32._4_4_;
    auVar33._4_4_ = fVar62 * fVar62 + fVar101 * fVar101 + fVar5 * fVar5;
    fVar63 = auVar32._8_4_;
    auVar33._8_4_ = fVar63 * fVar63 + fVar102 * fVar102 + fVar6 * fVar6;
    fVar64 = auVar32._12_4_;
    auVar33._12_4_ = fVar64 * fVar64 + fVar103 * fVar103 + fVar7 * fVar7;
    fVar65 = auVar32._16_4_;
    auVar33._16_4_ = fVar65 * fVar65 + fVar104 * fVar104 + fVar8 * fVar8;
    fVar66 = auVar32._20_4_;
    auVar33._20_4_ = fVar66 * fVar66 + fVar105 * fVar105 + fVar9 * fVar9;
    fVar67 = auVar32._24_4_;
    auVar33._24_4_ = fVar67 * fVar67 + fVar106 * fVar106 + fVar10 * fVar10;
    fVar68 = auVar32._28_4_;
    auVar33._28_4_ = fVar68 * fVar68 + fVar107 * fVar107 + fVar11 * fVar11;
    auVar37 = vsqrtps_avx(auVar33);
    auVar37 = vdivps_avx(auVar91,auVar37);
    fVar92 = auVar37._0_4_;
    fVar93 = auVar37._4_4_;
    fVar94 = auVar37._8_4_;
    fVar95 = auVar37._12_4_;
    fVar96 = auVar37._16_4_;
    fVar97 = auVar37._20_4_;
    fVar98 = auVar37._24_4_;
    fVar99 = auVar37._28_4_;
    auVar37 = vsubps_avx(auVar82,auVar91);
    fVar81 = auVar37._0_4_;
    auVar43._0_4_ = -(fVar81 * auVar42._0_4_) + auVar47._0_4_;
    fVar83 = auVar37._4_4_;
    auVar43._4_4_ = -(fVar83 * auVar42._4_4_) + auVar47._4_4_;
    fVar84 = auVar37._8_4_;
    auVar43._8_4_ = -(fVar84 * auVar42._8_4_) + auVar47._8_4_;
    fVar85 = auVar37._12_4_;
    auVar43._12_4_ = -(fVar85 * auVar42._12_4_) + auVar47._12_4_;
    fVar86 = auVar37._16_4_;
    auVar43._16_4_ = -(fVar86 * auVar42._16_4_) + auVar47._16_4_;
    fVar87 = auVar37._20_4_;
    auVar43._20_4_ = -(fVar87 * auVar42._20_4_) + auVar47._20_4_;
    fVar88 = auVar37._24_4_;
    auVar43._24_4_ = -(fVar88 * auVar42._24_4_) + auVar47._24_4_;
    fVar89 = auVar37._28_4_;
    auVar43._28_4_ = -(fVar89 * auVar42._28_4_) + auVar47._28_4_;
    auVar48._0_4_ = auVar91._0_4_ * auVar91._0_4_;
    auVar48._4_4_ = auVar91._4_4_ * auVar91._4_4_;
    auVar48._8_4_ = auVar91._8_4_ * auVar91._8_4_;
    auVar48._12_4_ = auVar91._12_4_ * auVar91._12_4_;
    auVar48._16_4_ = auVar91._16_4_ * auVar91._16_4_;
    auVar48._20_4_ = auVar91._20_4_ * auVar91._20_4_;
    auVar48._24_4_ = auVar91._24_4_ * auVar91._24_4_;
    auVar48._28_4_ = auVar91._28_4_ * auVar91._28_4_;
    auVar37 = vcmpps_avx(auVar33,auVar48,1);
    auVar49._4_4_ = __real_322bcc77;
    auVar49._0_4_ = __real_322bcc77;
    auVar49._8_4_ = __real_322bcc77;
    auVar49._12_4_ = __real_322bcc77;
    auVar49._16_4_ = __real_322bcc77;
    auVar49._20_4_ = __real_322bcc77;
    auVar49._24_4_ = __real_322bcc77;
    auVar49._28_4_ = __real_322bcc77;
    auVar33 = vcmpps_avx(auVar33,auVar49,1);
    uVar22 = auVar37._0_4_;
    auVar50._0_4_ = uVar22 & (uint)(fVar92 * fVar100 + auVar58._0_4_);
    uVar71 = auVar37._4_4_;
    auVar50._4_4_ = uVar71 & (uint)(fVar93 * fVar101 + auVar58._4_4_);
    uVar73 = auVar37._8_4_;
    auVar50._8_4_ = uVar73 & (uint)(fVar94 * fVar102 + auVar58._8_4_);
    uVar74 = auVar37._12_4_;
    auVar50._12_4_ = uVar74 & (uint)(fVar95 * fVar103 + auVar58._12_4_);
    uVar75 = auVar37._16_4_;
    auVar50._16_4_ = uVar75 & (uint)(fVar96 * fVar104 + auVar58._16_4_);
    uVar76 = auVar37._20_4_;
    auVar50._20_4_ = uVar76 & (uint)(fVar97 * fVar105 + auVar58._20_4_);
    uVar77 = auVar37._24_4_;
    auVar50._24_4_ = uVar77 & (uint)(fVar98 * fVar106 + auVar58._24_4_);
    uVar78 = auVar37._28_4_;
    auVar50._28_4_ = uVar78 & (uint)(fVar99 * fVar107 + auVar58._28_4_);
    auVar37 = vblendvps_avx(auVar50,auVar43,auVar33);
    auVar32 = vcmpps_avx(auVar41,ZEXT432(0) << 0x20,4);
    auVar30 = vcmpps_avx(auVar37,ZEXT432(0) << 0x20,4);
    auVar26._0_4_ = auVar30._0_4_ & auVar32._0_4_ & auVar25._0_4_;
    auVar26._4_4_ = auVar30._4_4_ & auVar32._4_4_ & auVar25._4_4_;
    auVar26._8_4_ = auVar30._8_4_ & auVar32._8_4_ & auVar25._8_4_;
    auVar26._12_4_ = auVar30._12_4_ & auVar32._12_4_ & auVar25._12_4_;
    auVar26._16_4_ = auVar30._16_4_ & auVar32._16_4_ & auVar25._16_4_;
    auVar26._20_4_ = auVar30._20_4_ & auVar32._20_4_ & auVar25._20_4_;
    auVar26._24_4_ = auVar30._24_4_ & auVar32._24_4_ & auVar25._24_4_;
    auVar26._28_4_ = auVar30._28_4_ & auVar32._28_4_ & auVar25._28_4_;
    uVar15 = vmovmskps_avx(auVar26);
    if (uVar15 != 0) {
      auVar56._0_4_ = -(fVar81 * auVar55._0_4_) + auVar80._0_4_;
      auVar56._4_4_ = -(fVar83 * auVar55._4_4_) + auVar80._4_4_;
      auVar56._8_4_ = -(fVar84 * auVar55._8_4_) + auVar80._8_4_;
      auVar56._12_4_ = -(fVar85 * auVar55._12_4_) + auVar80._12_4_;
      auVar56._16_4_ = -(fVar86 * auVar55._16_4_) + auVar80._16_4_;
      auVar56._20_4_ = -(fVar87 * auVar55._20_4_) + auVar80._20_4_;
      auVar56._24_4_ = -(fVar88 * auVar55._24_4_) + auVar80._24_4_;
      auVar56._28_4_ = -(fVar89 * auVar55._28_4_) + auVar80._28_4_;
      auVar53._0_4_ = -(fVar81 * auVar46._0_4_) + auVar38._0_4_;
      auVar53._4_4_ = -(fVar83 * auVar46._4_4_) + auVar38._4_4_;
      auVar53._8_4_ = -(fVar84 * auVar46._8_4_) + auVar38._8_4_;
      auVar53._12_4_ = -(fVar85 * auVar46._12_4_) + auVar38._12_4_;
      auVar53._16_4_ = -(fVar86 * auVar46._16_4_) + auVar38._16_4_;
      auVar53._20_4_ = -(fVar87 * auVar46._20_4_) + auVar38._20_4_;
      auVar53._24_4_ = -(fVar88 * auVar46._24_4_) + auVar38._24_4_;
      auVar53._28_4_ = -(fVar89 * auVar46._28_4_) + auVar38._28_4_;
      auVar27._0_4_ = uVar22 & (uint)(fVar92 * fVar4 + auVar70._0_4_);
      auVar27._4_4_ = uVar71 & (uint)(fVar93 * fVar5 + auVar70._4_4_);
      auVar27._8_4_ = uVar73 & (uint)(fVar94 * fVar6 + auVar70._8_4_);
      auVar27._12_4_ = uVar74 & (uint)(fVar95 * fVar7 + auVar70._12_4_);
      auVar27._16_4_ = uVar75 & (uint)(fVar96 * fVar8 + auVar70._16_4_);
      auVar27._20_4_ = uVar76 & (uint)(fVar97 * fVar9 + auVar70._20_4_);
      auVar27._24_4_ = uVar77 & (uint)(fVar98 * fVar10 + auVar70._24_4_);
      auVar27._28_4_ = uVar78 & (uint)(fVar99 * fVar11 + auVar70._28_4_);
      auVar25 = vblendvps_avx(auVar27,auVar56,auVar33);
      auVar28._0_4_ = uVar22 & (uint)(fVar92 * fVar60 + auVar72._0_4_);
      auVar28._4_4_ = uVar71 & (uint)(fVar93 * fVar62 + auVar72._4_4_);
      auVar28._8_4_ = uVar73 & (uint)(fVar94 * fVar63 + auVar72._8_4_);
      auVar28._12_4_ = uVar74 & (uint)(fVar95 * fVar64 + auVar72._12_4_);
      auVar28._16_4_ = uVar75 & (uint)(fVar96 * fVar65 + auVar72._16_4_);
      auVar28._20_4_ = uVar76 & (uint)(fVar97 * fVar66 + auVar72._20_4_);
      auVar28._24_4_ = uVar77 & (uint)(fVar98 * fVar67 + auVar72._24_4_);
      auVar28._28_4_ = uVar78 & (uint)(fVar99 * fVar68 + auVar72._28_4_);
      auVar33 = vblendvps_avx(auVar28,auVar53,auVar33);
      cVar13 = (char)uVar15;
      if (cVar13 == -1) {
        auVar32 = vunpcklps_avx(auVar37,auVar25);
        auVar30 = vunpcklps_avx(auVar33,auVar41);
        auVar46 = vunpcklpd_avx(auVar32,auVar30);
        auVar32 = vunpckhpd_avx(auVar32,auVar30);
        auVar25 = vunpckhps_avx(auVar37,auVar25);
        auVar37 = vunpckhps_avx(auVar33,auVar41);
        auVar41 = vunpcklpd_avx(auVar25,auVar37);
        auVar51._16_16_ = auVar32._0_16_;
        auVar51._0_16_ = auVar46._0_16_;
        *pauVar17 = auVar51;
        auVar25 = vunpckhpd_avx(auVar25,auVar37);
        auVar34._16_16_ = auVar25._0_16_;
        auVar34._0_16_ = auVar41._0_16_;
        pauVar17[1] = auVar34;
        auVar37 = vperm2f128_avx(auVar46,auVar32,0x31);
        pauVar17[2] = auVar37;
        auVar25 = vperm2f128_avx(auVar41,auVar25,0x31);
        pauVar17[3] = auVar25;
      }
      else {
        auVar57 = auVar41._0_16_;
        auVar59 = auVar41._16_16_;
        auVar44 = auVar37._0_16_;
        auVar52 = auVar37._16_16_;
        auVar36 = auVar25._0_16_;
        auVar39 = auVar25._16_16_;
        auVar29 = auVar33._0_16_;
        auVar35 = auVar33._16_16_;
        if ((uVar15 & 1) != 0) {
          *(int *)*pauVar17 = auVar37._0_4_;
        }
        if ((uVar15 & 2) != 0) {
          uVar3 = vextractps_avx(auVar44,1);
          *(undefined4 *)(*pauVar17 + 0x10) = uVar3;
        }
        if ((uVar15 & 4) != 0) {
          uVar3 = vextractps_avx(auVar44,2);
          *(undefined4 *)pauVar17[1] = uVar3;
        }
        if ((uVar15 & 8) != 0) {
          uVar3 = vextractps_avx(auVar44,3);
          *(undefined4 *)(pauVar17[1] + 0x10) = uVar3;
        }
        if ((uVar15 & 0x10) != 0) {
          *(int *)pauVar17[2] = auVar37._16_4_;
        }
        if ((uVar15 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar52,1);
          *(undefined4 *)(pauVar17[2] + 0x10) = uVar3;
        }
        if ((uVar15 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar52,2);
          *(undefined4 *)pauVar17[3] = uVar3;
        }
        if (cVar13 < '\0') {
          uVar3 = vextractps_avx(auVar52,3);
          *(undefined4 *)(pauVar17[3] + 0x10) = uVar3;
        }
        if ((uVar15 & 1) != 0) {
          *(int *)(*pauVar17 + 4) = auVar25._0_4_;
        }
        if ((uVar15 & 2) != 0) {
          uVar3 = vextractps_avx(auVar36,1);
          *(undefined4 *)(*pauVar17 + 0x14) = uVar3;
        }
        if ((uVar15 & 4) != 0) {
          uVar3 = vextractps_avx(auVar36,2);
          *(undefined4 *)(pauVar17[1] + 4) = uVar3;
        }
        if ((uVar15 & 8) != 0) {
          uVar3 = vextractps_avx(auVar36,3);
          *(undefined4 *)(pauVar17[1] + 0x14) = uVar3;
        }
        if ((uVar15 & 0x10) != 0) {
          *(int *)(pauVar17[2] + 4) = auVar25._16_4_;
        }
        if ((uVar15 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar39,1);
          *(undefined4 *)(pauVar17[2] + 0x14) = uVar3;
        }
        if ((uVar15 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar39,2);
          *(undefined4 *)(pauVar17[3] + 4) = uVar3;
        }
        if (cVar13 < '\0') {
          uVar3 = vextractps_avx(auVar39,3);
          *(undefined4 *)(pauVar17[3] + 0x14) = uVar3;
        }
        if ((uVar15 & 1) != 0) {
          *(int *)(*pauVar17 + 8) = auVar33._0_4_;
        }
        if ((uVar15 & 2) != 0) {
          uVar3 = vextractps_avx(auVar29,1);
          *(undefined4 *)(*pauVar17 + 0x18) = uVar3;
        }
        if ((uVar15 & 4) != 0) {
          uVar3 = vextractps_avx(auVar29,2);
          *(undefined4 *)(pauVar17[1] + 8) = uVar3;
        }
        if ((uVar15 & 8) != 0) {
          uVar3 = vextractps_avx(auVar29,3);
          *(undefined4 *)(pauVar17[1] + 0x18) = uVar3;
        }
        if ((uVar15 & 0x10) != 0) {
          *(int *)(pauVar17[2] + 8) = auVar33._16_4_;
        }
        if ((uVar15 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar35,1);
          *(undefined4 *)(pauVar17[2] + 0x18) = uVar3;
        }
        if ((uVar15 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar35,2);
          *(undefined4 *)(pauVar17[3] + 8) = uVar3;
        }
        if (cVar13 < '\0') {
          uVar3 = vextractps_avx(auVar35,3);
          *(undefined4 *)(pauVar17[3] + 0x18) = uVar3;
        }
        if ((uVar15 & 1) != 0) {
          *(int *)(*pauVar17 + 0xc) = auVar41._0_4_;
        }
        if ((uVar15 & 2) != 0) {
          uVar3 = vextractps_avx(auVar57,1);
          *(undefined4 *)(*pauVar17 + 0x1c) = uVar3;
        }
        if ((uVar15 & 4) != 0) {
          uVar3 = vextractps_avx(auVar57,2);
          *(undefined4 *)(pauVar17[1] + 0xc) = uVar3;
        }
        if ((uVar15 & 8) != 0) {
          uVar3 = vextractps_avx(auVar57,3);
          *(undefined4 *)(pauVar17[1] + 0x1c) = uVar3;
        }
        if ((uVar15 & 0x10) != 0) {
          *(int *)(pauVar17[2] + 0xc) = auVar41._16_4_;
        }
        if ((uVar15 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar59,1);
          *(undefined4 *)(pauVar17[2] + 0x1c) = uVar3;
        }
        if ((uVar15 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar59,2);
          *(undefined4 *)(pauVar17[3] + 0xc) = uVar3;
        }
        if (cVar13 < '\0') {
          uVar3 = vextractps_avx(auVar59,3);
          *(undefined4 *)(pauVar17[3] + 0x1c) = uVar3;
        }
      }
    }
  }
  return;
}

// ApplyLegacySphericalBackstopConstraintsWithoutMaps_avx2 @ 1403291c0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLegacySphericalBackstopConstraintsWithoutMaps_avx2
               (longlong param_1,longlong param_2,longlong param_3,float param_4,float param_5,
               int param_6,uint param_7)

{
  undefined1 (*pauVar1) [32];
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  char cVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  undefined1 (*pauVar19) [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  float fVar26;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar27 [32];
  float fVar36;
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar37 [16];
  undefined1 auVar42 [16];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  float fVar54;
  float fVar55;
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar56 [16];
  undefined1 auVar57 [32];
  undefined1 auVar61 [16];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar62 [32];
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  undefined1 auVar63 [32];
  float fVar69;
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [16];
  undefined1 auVar73 [32];
  undefined1 auVar74 [16];
  float fVar75;
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  undefined1 auVar78 [64];
  undefined1 auVar86 [32];
  uint uVar87;
  uint uVar88;
  uint uVar89;
  uint uVar90;
  uint uVar91;
  uint uVar92;
  float fVar93;
  uint uVar94;
  float fVar95;
  uint uVar96;
  
  uVar14 = param_7 + 7;
  if (-1 < (int)param_7) {
    uVar14 = param_7;
  }
  if ((int)(uVar14 & 0xfffffff8) < 1) {
    uVar18 = 0;
    if ((int)param_7 < 1) {
      return;
    }
  }
  else {
    fVar10 = param_4 - param_5;
    fVar9 = param_5 * param_5;
    pauVar19 = (undefined1 (*) [32])((longlong)param_6 * 0x10 + param_1);
    lVar16 = (longlong)param_6 * 0xc + 0x40;
    uVar18 = 0;
    auVar78 = ZEXT1264(ZEXT812(0));
    do {
      auVar22 = *pauVar19;
      auVar58 = pauVar19[1];
      auVar51 = pauVar19[2];
      auVar28 = pauVar19[3];
      auVar39 = vperm2f128_avx(auVar22,auVar51,0x20);
      auVar52 = vperm2f128_avx(auVar22,auVar51,0x31);
      auVar23 = vperm2f128_avx(auVar58,auVar28,0x20);
      auVar77 = vperm2f128_avx(auVar58,auVar28,0x31);
      auVar21 = vunpckhps_avx(auVar39,auVar52);
      auVar12 = vunpckhps_avx(auVar23,auVar77);
      auVar46 = vunpckhpd_avx(auVar21,auVar12);
      auVar38 = vcmpps_avx(auVar78._0_32_,auVar46,4);
      if ((((((((SUB321(auVar38 >> 0x1f,0) & 1) != 0 || (SUB321(auVar38 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar38 >> 0x5f,0) & 1) != 0) || SUB321(auVar38 >> 0x7f,0) != '\0') ||
            (SUB321(auVar38 >> 0x9f,0) & 1) != 0) || SUB321(auVar38 >> 0xbf,0) != '\0') ||
          (SUB321(auVar38 >> 0xdf,0) & 1) != 0) || auVar38[0x1f] < '\0') {
        auVar20 = vunpcklpd_avx(auVar21,auVar12);
        auVar21 = vunpcklps_avx(auVar39,auVar52);
        auVar12 = vunpcklps_avx(auVar23,auVar77);
        auVar11 = vunpckhpd_avx(auVar21,auVar12);
        auVar57 = vunpcklpd_avx(auVar21,auVar12);
        auVar21 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar16);
        auVar12 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar16);
        auVar39 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar12);
        auVar52 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,auVar21);
        auVar39 = vblendps_avx(auVar52,auVar39,0x88);
        auVar52 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar12);
        auVar23 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,*(undefined1 (*) [32])(param_2 + lVar16));
        auVar52 = vblendps_avx(auVar23,auVar52,0x13);
        auVar47 = vperm2f128_avx(auVar39,auVar52,0x31);
        auVar21 = vblendps_avx(auVar12,auVar21,0x24);
        auVar21 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar21);
        auVar12 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,*(undefined1 (*) [32])(param_2 + lVar16));
        auVar23 = vblendps_avx(auVar21,auVar12,0xe0);
        auVar21 = *(undefined1 (*) [32])(param_3 + -0x40 + lVar16);
        auVar12 = *(undefined1 (*) [32])(param_3 + -0x20 + lVar16);
        auVar77 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar12);
        auVar27 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,auVar21);
        auVar77 = vblendps_avx(auVar27,auVar77,0x88);
        auVar27 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar12);
        auVar59 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,*(undefined1 (*) [32])(param_3 + lVar16));
        auVar27 = vblendps_avx(auVar59,auVar27,0x13);
        auVar59 = vperm2f128_avx(auVar77,auVar27,0x31);
        auVar21 = vblendps_avx(auVar12,auVar21,0x24);
        auVar21 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar21);
        auVar12 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,*(undefined1 (*) [32])(param_3 + lVar16));
        auVar21 = vblendps_avx(auVar21,auVar12,0xe0);
        auVar76._0_4_ = -(param_4 * auVar77._0_4_) + auVar39._0_4_;
        auVar76._4_4_ = -(param_4 * auVar77._4_4_) + auVar39._4_4_;
        auVar76._8_4_ = -(param_4 * auVar77._8_4_) + auVar39._8_4_;
        auVar76._12_4_ = -(param_4 * auVar77._12_4_) + auVar39._12_4_;
        auVar76._16_4_ = -(param_4 * auVar27._0_4_) + auVar52._0_4_;
        auVar76._20_4_ = -(param_4 * auVar27._4_4_) + auVar52._4_4_;
        auVar76._24_4_ = -(param_4 * auVar27._8_4_) + auVar52._8_4_;
        auVar76._28_4_ = -(param_4 * auVar27._12_4_) + auVar52._12_4_;
        auVar63._0_4_ = -(param_4 * auVar59._0_4_) + auVar47._0_4_;
        auVar63._4_4_ = -(param_4 * auVar59._4_4_) + auVar47._4_4_;
        auVar63._8_4_ = -(param_4 * auVar59._8_4_) + auVar47._8_4_;
        auVar63._12_4_ = -(param_4 * auVar59._12_4_) + auVar47._12_4_;
        auVar63._16_4_ = -(param_4 * auVar59._16_4_) + auVar47._16_4_;
        auVar63._20_4_ = -(param_4 * auVar59._20_4_) + auVar47._20_4_;
        auVar63._24_4_ = -(param_4 * auVar59._24_4_) + auVar47._24_4_;
        auVar63._28_4_ = -(param_4 * auVar59._28_4_) + auVar47._28_4_;
        auVar70._0_4_ = -(param_4 * auVar21._0_4_) + auVar23._0_4_;
        auVar70._4_4_ = -(param_4 * auVar21._4_4_) + auVar23._4_4_;
        auVar70._8_4_ = -(param_4 * auVar21._8_4_) + auVar23._8_4_;
        auVar70._12_4_ = -(param_4 * auVar21._12_4_) + auVar23._12_4_;
        auVar70._16_4_ = -(param_4 * auVar21._16_4_) + auVar23._16_4_;
        auVar70._20_4_ = -(param_4 * auVar21._20_4_) + auVar23._20_4_;
        auVar70._24_4_ = -(param_4 * auVar21._24_4_) + auVar23._24_4_;
        auVar70._28_4_ = -(param_4 * auVar21._28_4_) + auVar23._28_4_;
        auVar12 = vsubps_avx(auVar57,auVar76);
        auVar11 = vsubps_avx(auVar11,auVar63);
        auVar20 = vsubps_avx(auVar20,auVar70);
        fVar3 = auVar11._0_4_;
        fVar4 = auVar11._4_4_;
        fVar5 = auVar11._8_4_;
        fVar6 = auVar11._12_4_;
        fVar7 = auVar11._16_4_;
        fVar8 = auVar11._20_4_;
        fVar26 = auVar11._24_4_;
        fVar30 = auVar11._28_4_;
        fVar80 = auVar12._0_4_;
        fVar81 = auVar12._4_4_;
        fVar82 = auVar12._8_4_;
        fVar83 = auVar12._12_4_;
        fVar84 = auVar12._16_4_;
        fVar85 = auVar12._20_4_;
        fVar93 = auVar12._24_4_;
        fVar95 = auVar12._28_4_;
        fVar31 = auVar20._0_4_;
        auVar57._0_4_ = fVar31 * fVar31 + fVar80 * fVar80 + fVar3 * fVar3;
        fVar32 = auVar20._4_4_;
        auVar57._4_4_ = fVar32 * fVar32 + fVar81 * fVar81 + fVar4 * fVar4;
        fVar33 = auVar20._8_4_;
        auVar57._8_4_ = fVar33 * fVar33 + fVar82 * fVar82 + fVar5 * fVar5;
        fVar34 = auVar20._12_4_;
        auVar57._12_4_ = fVar34 * fVar34 + fVar83 * fVar83 + fVar6 * fVar6;
        fVar35 = auVar20._16_4_;
        auVar57._16_4_ = fVar35 * fVar35 + fVar84 * fVar84 + fVar7 * fVar7;
        fVar36 = auVar20._20_4_;
        auVar57._20_4_ = fVar36 * fVar36 + fVar85 * fVar85 + fVar8 * fVar8;
        fVar54 = auVar20._24_4_;
        auVar57._24_4_ = fVar54 * fVar54 + fVar93 * fVar93 + fVar26 * fVar26;
        fVar55 = auVar20._28_4_;
        auVar57._28_4_ = fVar55 * fVar55 + fVar95 * fVar95 + fVar30 * fVar30;
        auVar12 = vsqrtps_avx(auVar57);
        auVar11._4_4_ = param_5;
        auVar11._0_4_ = param_5;
        auVar11._8_4_ = param_5;
        auVar11._12_4_ = param_5;
        auVar11._16_4_ = param_5;
        auVar11._20_4_ = param_5;
        auVar11._24_4_ = param_5;
        auVar11._28_4_ = param_5;
        auVar12 = vdivps_avx(auVar11,auVar12);
        fVar64 = auVar12._0_4_;
        fVar65 = auVar12._4_4_;
        fVar66 = auVar12._8_4_;
        fVar67 = auVar12._12_4_;
        fVar68 = auVar12._16_4_;
        fVar69 = auVar12._20_4_;
        fVar75 = auVar12._24_4_;
        fVar79 = auVar12._28_4_;
        auVar20._0_4_ = -(auVar77._0_4_ * fVar10) + auVar39._0_4_;
        auVar20._4_4_ = -(auVar77._4_4_ * fVar10) + auVar39._4_4_;
        auVar20._8_4_ = -(auVar77._8_4_ * fVar10) + auVar39._8_4_;
        auVar20._12_4_ = -(auVar77._12_4_ * fVar10) + auVar39._12_4_;
        auVar20._16_4_ = -(auVar27._0_4_ * fVar10) + auVar52._0_4_;
        auVar20._20_4_ = -(auVar27._4_4_ * fVar10) + auVar52._4_4_;
        auVar20._24_4_ = -(auVar27._8_4_ * fVar10) + auVar52._8_4_;
        auVar20._28_4_ = -(auVar27._12_4_ * fVar10) + auVar52._12_4_;
        auVar39._4_4_ = __real_322bcc77;
        auVar39._0_4_ = __real_322bcc77;
        auVar39._8_4_ = __real_322bcc77;
        auVar39._12_4_ = __real_322bcc77;
        auVar39._16_4_ = __real_322bcc77;
        auVar39._20_4_ = __real_322bcc77;
        auVar39._24_4_ = __real_322bcc77;
        auVar39._28_4_ = __real_322bcc77;
        auVar39 = vcmpps_avx(auVar57,auVar39,1);
        auVar12._4_4_ = fVar9;
        auVar12._0_4_ = fVar9;
        auVar12._8_4_ = fVar9;
        auVar12._12_4_ = fVar9;
        auVar12._16_4_ = fVar9;
        auVar12._20_4_ = fVar9;
        auVar12._24_4_ = fVar9;
        auVar12._28_4_ = fVar9;
        auVar12 = vcmpps_avx(auVar57,auVar12,1);
        uVar87 = auVar12._0_4_;
        auVar52._0_4_ = uVar87 & (uint)(fVar64 * fVar80 + auVar76._0_4_);
        uVar88 = auVar12._4_4_;
        auVar52._4_4_ = uVar88 & (uint)(fVar65 * fVar81 + auVar76._4_4_);
        uVar89 = auVar12._8_4_;
        auVar52._8_4_ = uVar89 & (uint)(fVar66 * fVar82 + auVar76._8_4_);
        uVar90 = auVar12._12_4_;
        auVar52._12_4_ = uVar90 & (uint)(fVar67 * fVar83 + auVar76._12_4_);
        uVar91 = auVar12._16_4_;
        auVar52._16_4_ = uVar91 & (uint)(fVar68 * fVar84 + auVar76._16_4_);
        uVar92 = auVar12._20_4_;
        auVar52._20_4_ = uVar92 & (uint)(fVar69 * fVar85 + auVar76._20_4_);
        uVar94 = auVar12._24_4_;
        auVar52._24_4_ = uVar94 & (uint)(fVar75 * fVar93 + auVar76._24_4_);
        uVar96 = auVar12._28_4_;
        auVar52._28_4_ = uVar96 & (uint)(fVar79 * fVar95 + auVar76._28_4_);
        auVar78 = ZEXT1264(ZEXT412(0)) << 0x20;
        auVar12 = vblendvps_avx(auVar52,auVar20,auVar39);
        auVar52 = vcmpps_avx(ZEXT1232(ZEXT412(0)) << 0x20,auVar12,4);
        auVar77._0_4_ = auVar52._0_4_ & auVar38._0_4_;
        auVar77._4_4_ = auVar52._4_4_ & auVar38._4_4_;
        auVar77._8_4_ = auVar52._8_4_ & auVar38._8_4_;
        auVar77._12_4_ = auVar52._12_4_ & auVar38._12_4_;
        auVar77._16_4_ = auVar52._16_4_ & auVar38._16_4_;
        auVar77._20_4_ = auVar52._20_4_ & auVar38._20_4_;
        auVar77._24_4_ = auVar52._24_4_ & auVar38._24_4_;
        auVar77._28_4_ = auVar52._28_4_ & auVar38._28_4_;
        uVar15 = vmovmskps_avx(auVar77);
        if (uVar15 != 0) {
          auVar45._0_4_ = -(fVar10 * auVar59._0_4_) + auVar47._0_4_;
          auVar45._4_4_ = -(fVar10 * auVar59._4_4_) + auVar47._4_4_;
          auVar45._8_4_ = -(fVar10 * auVar59._8_4_) + auVar47._8_4_;
          auVar45._12_4_ = -(fVar10 * auVar59._12_4_) + auVar47._12_4_;
          auVar45._16_4_ = -(fVar10 * auVar59._16_4_) + auVar47._16_4_;
          auVar45._20_4_ = -(fVar10 * auVar59._20_4_) + auVar47._20_4_;
          auVar45._24_4_ = -(fVar10 * auVar59._24_4_) + auVar47._24_4_;
          auVar45._28_4_ = -(fVar10 * auVar59._28_4_) + auVar47._28_4_;
          auVar27._0_4_ = -(fVar10 * auVar21._0_4_) + auVar23._0_4_;
          auVar27._4_4_ = -(fVar10 * auVar21._4_4_) + auVar23._4_4_;
          auVar27._8_4_ = -(fVar10 * auVar21._8_4_) + auVar23._8_4_;
          auVar27._12_4_ = -(fVar10 * auVar21._12_4_) + auVar23._12_4_;
          auVar27._16_4_ = -(fVar10 * auVar21._16_4_) + auVar23._16_4_;
          auVar27._20_4_ = -(fVar10 * auVar21._20_4_) + auVar23._20_4_;
          auVar27._24_4_ = -(fVar10 * auVar21._24_4_) + auVar23._24_4_;
          auVar27._28_4_ = -(fVar10 * auVar21._28_4_) + auVar23._28_4_;
          auVar38._0_4_ = uVar87 & (uint)(fVar64 * fVar3 + auVar63._0_4_);
          auVar38._4_4_ = uVar88 & (uint)(fVar65 * fVar4 + auVar63._4_4_);
          auVar38._8_4_ = uVar89 & (uint)(fVar66 * fVar5 + auVar63._8_4_);
          auVar38._12_4_ = uVar90 & (uint)(fVar67 * fVar6 + auVar63._12_4_);
          auVar38._16_4_ = uVar91 & (uint)(fVar68 * fVar7 + auVar63._16_4_);
          auVar38._20_4_ = uVar92 & (uint)(fVar69 * fVar8 + auVar63._20_4_);
          auVar38._24_4_ = uVar94 & (uint)(fVar75 * fVar26 + auVar63._24_4_);
          auVar38._28_4_ = uVar96 & (uint)(fVar79 * fVar30 + auVar63._28_4_);
          auVar38 = vblendvps_avx(auVar38,auVar45,auVar39);
          auVar21._0_4_ = uVar87 & (uint)(fVar64 * fVar31 + auVar70._0_4_);
          auVar21._4_4_ = uVar88 & (uint)(fVar65 * fVar32 + auVar70._4_4_);
          auVar21._8_4_ = uVar89 & (uint)(fVar66 * fVar33 + auVar70._8_4_);
          auVar21._12_4_ = uVar90 & (uint)(fVar67 * fVar34 + auVar70._12_4_);
          auVar21._16_4_ = uVar91 & (uint)(fVar68 * fVar35 + auVar70._16_4_);
          auVar21._20_4_ = uVar92 & (uint)(fVar69 * fVar36 + auVar70._20_4_);
          auVar21._24_4_ = uVar94 & (uint)(fVar75 * fVar54 + auVar70._24_4_);
          auVar21._28_4_ = uVar96 & (uint)(fVar79 * fVar55 + auVar70._28_4_);
          auVar21 = vblendvps_avx(auVar21,auVar27,auVar39);
          cVar13 = (char)uVar15;
          if (cVar13 == -1) {
            auVar22 = vunpcklps_avx(auVar12,auVar38);
            auVar58 = vunpcklps_avx(auVar21,auVar46);
            auVar28 = vunpcklpd_avx(auVar22,auVar58);
            auVar22 = vunpckhpd_avx(auVar22,auVar58);
            auVar58 = vunpckhps_avx(auVar12,auVar38);
            auVar51 = vunpckhps_avx(auVar21,auVar46);
            auVar38 = vunpcklpd_avx(auVar58,auVar51);
            auVar46._16_16_ = auVar22._0_16_;
            auVar46._0_16_ = auVar28._0_16_;
            *pauVar19 = auVar46;
            auVar58 = vunpckhpd_avx(auVar58,auVar51);
            auVar51._16_16_ = auVar58._0_16_;
            auVar51._0_16_ = auVar38._0_16_;
            pauVar19[1] = auVar51;
            auVar22 = vperm2f128_avx(auVar28,auVar22,0x31);
            pauVar19[2] = auVar22;
            auVar22 = vperm2f128_avx(auVar38,auVar58,0x31);
            pauVar19[3] = auVar22;
          }
          else {
            auVar56 = auVar12._0_16_;
            auVar61 = auVar12._16_16_;
            auVar43 = auVar38._0_16_;
            auVar44 = auVar38._16_16_;
            auVar37 = auVar21._0_16_;
            auVar42 = auVar21._16_16_;
            if ((uVar15 & 1) != 0) {
              *(int *)*pauVar19 = auVar12._0_4_;
            }
            if ((uVar15 & 2) != 0) {
              uVar2 = vextractps_avx(auVar56,1);
              *(undefined4 *)(*pauVar19 + 0x10) = uVar2;
            }
            if ((uVar15 & 4) != 0) {
              uVar2 = vextractps_avx(auVar56,2);
              *(undefined4 *)pauVar19[1] = uVar2;
            }
            if ((uVar15 & 8) != 0) {
              uVar2 = vextractps_avx(auVar56,3);
              *(undefined4 *)(pauVar19[1] + 0x10) = uVar2;
            }
            if ((uVar15 & 0x10) != 0) {
              *(int *)pauVar19[2] = auVar12._16_4_;
            }
            if ((uVar15 & 0x20) != 0) {
              uVar2 = vextractps_avx(auVar61,1);
              *(undefined4 *)(pauVar19[2] + 0x10) = uVar2;
            }
            if ((uVar15 & 0x40) != 0) {
              uVar2 = vextractps_avx(auVar61,2);
              *(undefined4 *)pauVar19[3] = uVar2;
            }
            if (cVar13 < '\0') {
              uVar2 = vextractps_avx(auVar61,3);
              *(undefined4 *)(pauVar19[3] + 0x10) = uVar2;
            }
            if ((uVar15 & 1) != 0) {
              *(int *)(*pauVar19 + 4) = auVar38._0_4_;
            }
            if ((uVar15 & 2) != 0) {
              uVar2 = vextractps_avx(auVar43,1);
              *(undefined4 *)(*pauVar19 + 0x14) = uVar2;
            }
            if ((uVar15 & 4) != 0) {
              uVar2 = vextractps_avx(auVar43,2);
              *(undefined4 *)(pauVar19[1] + 4) = uVar2;
            }
            if ((uVar15 & 8) != 0) {
              uVar2 = vextractps_avx(auVar43,3);
              *(undefined4 *)(pauVar19[1] + 0x14) = uVar2;
            }
            if ((uVar15 & 0x10) != 0) {
              *(int *)(pauVar19[2] + 4) = auVar38._16_4_;
            }
            if ((uVar15 & 0x20) != 0) {
              uVar2 = vextractps_avx(auVar44,1);
              *(undefined4 *)(pauVar19[2] + 0x14) = uVar2;
            }
            if ((uVar15 & 0x40) != 0) {
              uVar2 = vextractps_avx(auVar44,2);
              *(undefined4 *)(pauVar19[3] + 4) = uVar2;
            }
            if (cVar13 < '\0') {
              uVar2 = vextractps_avx(auVar44,3);
              *(undefined4 *)(pauVar19[3] + 0x14) = uVar2;
            }
            if ((uVar15 & 1) != 0) {
              *(int *)(*pauVar19 + 8) = auVar21._0_4_;
            }
            if ((uVar15 & 2) != 0) {
              uVar2 = vextractps_avx(auVar37,1);
              *(undefined4 *)(*pauVar19 + 0x18) = uVar2;
            }
            if ((uVar15 & 4) != 0) {
              uVar2 = vextractps_avx(auVar37,2);
              *(undefined4 *)(pauVar19[1] + 8) = uVar2;
            }
            if ((uVar15 & 8) != 0) {
              uVar2 = vextractps_avx(auVar37,3);
              *(undefined4 *)(pauVar19[1] + 0x18) = uVar2;
            }
            if ((uVar15 & 0x10) != 0) {
              *(int *)(pauVar19[2] + 8) = auVar21._16_4_;
            }
            if ((uVar15 & 0x20) != 0) {
              uVar2 = vextractps_avx(auVar42,1);
              *(undefined4 *)(pauVar19[2] + 0x18) = uVar2;
            }
            if ((uVar15 & 0x40) != 0) {
              uVar2 = vextractps_avx(auVar42,2);
              *(undefined4 *)(pauVar19[3] + 8) = uVar2;
            }
            if (cVar13 < '\0') {
              uVar2 = vextractps_avx(auVar42,3);
              *(undefined4 *)(pauVar19[3] + 0x18) = uVar2;
            }
            if ((uVar15 & 1) != 0) {
              uVar2 = vextractps_avx(auVar22._0_16_,3);
              *(undefined4 *)(*pauVar19 + 0xc) = uVar2;
            }
            if ((uVar15 & 2) != 0) {
              uVar2 = vextractps_avx(auVar22._16_16_,3);
              *(undefined4 *)(*pauVar19 + 0x1c) = uVar2;
            }
            if ((uVar15 & 4) != 0) {
              uVar2 = vextractps_avx(auVar58._0_16_,3);
              *(undefined4 *)(pauVar19[1] + 0xc) = uVar2;
            }
            if ((uVar15 & 8) != 0) {
              uVar2 = vextractps_avx(auVar58._16_16_,3);
              *(undefined4 *)(pauVar19[1] + 0x1c) = uVar2;
            }
            if ((uVar15 & 0x10) != 0) {
              uVar2 = vextractps_avx(auVar51._0_16_,3);
              *(undefined4 *)(pauVar19[2] + 0xc) = uVar2;
            }
            if ((uVar15 & 0x20) != 0) {
              uVar2 = vextractps_avx(auVar51._16_16_,3);
              *(undefined4 *)(pauVar19[2] + 0x1c) = uVar2;
            }
            if ((uVar15 & 0x40) != 0) {
              uVar2 = vextractps_avx(auVar28._0_16_,3);
              *(undefined4 *)(pauVar19[3] + 0xc) = uVar2;
            }
            if (cVar13 < '\0') {
              uVar2 = vextractps_avx(auVar28._16_16_,3);
              *(undefined4 *)(pauVar19[3] + 0x1c) = uVar2;
            }
          }
        }
      }
      uVar18 = uVar18 + 8;
      pauVar19 = pauVar19 + 4;
      lVar16 = lVar16 + 0x60;
    } while (uVar18 < (uVar14 & 0xfffffff8));
    if ((int)param_7 <= (int)uVar18) {
      return;
    }
  }
  iVar17 = (int)uVar18;
  auVar22._4_4_ = iVar17;
  auVar22._0_4_ = iVar17;
  auVar22._8_4_ = iVar17;
  auVar22._12_4_ = iVar17;
  auVar22._16_4_ = iVar17;
  auVar22._20_4_ = iVar17;
  auVar22._24_4_ = iVar17;
  auVar22._28_4_ = iVar17;
  auVar22 = vpor_avx2(auVar22,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar58._4_4_ = param_7;
  auVar58._0_4_ = param_7;
  auVar58._8_4_ = param_7;
  auVar58._12_4_ = param_7;
  auVar58._16_4_ = param_7;
  auVar58._20_4_ = param_7;
  auVar58._24_4_ = param_7;
  auVar58._28_4_ = param_7;
  auVar22 = vpcmpgtd_avx2(auVar58,auVar22);
  lVar16 = (longlong)(param_6 + iVar17);
  pauVar19 = (undefined1 (*) [32])(param_1 + lVar16 * 0x10);
  iVar17 = vmovmskps_avx(auVar22);
  if (iVar17 == 0xff) {
    auVar51 = vperm2f128_avx(*pauVar19,pauVar19[2],0x20);
    auVar28 = vperm2f128_avx(*pauVar19,pauVar19[2],0x31);
    auVar38 = vperm2f128_avx(pauVar19[1],pauVar19[3],0x20);
    auVar21 = vperm2f128_avx(pauVar19[1],pauVar19[3],0x31);
    auVar58 = vunpcklps_avx(auVar51,auVar28);
    auVar51 = vunpckhps_avx(auVar51,auVar28);
    auVar46 = vunpcklps_avx(auVar38,auVar21);
    auVar28 = vunpckhps_avx(auVar38,auVar21);
    auVar38 = vunpcklpd_avx(auVar58,auVar46);
    auVar58 = vunpckhpd_avx(auVar58,auVar46);
    auVar46 = vunpcklpd_avx(auVar51,auVar28);
    auVar51 = vunpckhpd_avx(auVar51,auVar28);
  }
  else {
    auVar38 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar22);
    auVar58 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar22);
    auVar46 = vgatherdps(ZEXT832(0),auVar22);
    auVar51 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar22);
  }
  auVar28 = vmaskmovps_avx(auVar22,auVar38);
  auVar58 = vmaskmovps_avx(auVar22,auVar58);
  auVar38 = vmaskmovps_avx(auVar22,auVar46);
  auVar46 = vcmpps_avx(auVar51,ZEXT1232(ZEXT812(0)),4);
  auVar46 = auVar22 & auVar46;
  if ((((((((SUB321(auVar46 >> 0x1f,0) & 1) != 0 || (SUB321(auVar46 >> 0x3f,0) & 1) != 0) ||
          (SUB321(auVar46 >> 0x5f,0) & 1) != 0) || SUB321(auVar46 >> 0x7f,0) != '\0') ||
        (SUB321(auVar46 >> 0x9f,0) & 1) != 0) || SUB321(auVar46 >> 0xbf,0) != '\0') ||
      (SUB321(auVar46 >> 0xdf,0) & 1) != 0) || auVar46[0x1f] < '\0') {
    pauVar1 = (undefined1 (*) [32])(param_2 + lVar16 * 0xc);
    if ((char)iVar17 == -1) {
      auVar46 = pauVar1[1];
      auVar21 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar46);
      auVar12 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,*pauVar1);
      auVar21 = vblendps_avx(auVar12,auVar21,0x88);
      auVar12 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar46);
      auVar39 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,pauVar1[2]);
      auVar12 = vblendps_avx(auVar39,auVar12,0x13);
      auVar47._16_16_ = auVar12._0_16_;
      auVar47._0_16_ = auVar21._0_16_;
      auVar77 = vperm2f128_avx(auVar21,auVar12,0x31);
      auVar46 = vblendps_avx(auVar46,*pauVar1,0x24);
      auVar46 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar46);
      auVar21 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,pauVar1[2]);
      auVar39 = vblendps_avx(auVar46,auVar21,0xe0);
      auVar46 = *(undefined1 (*) [32])(param_3 + lVar16 * 0xc);
      auVar21 = *(undefined1 (*) [32])(param_3 + 0x20 + lVar16 * 0xc);
      auVar12 = *(undefined1 (*) [32])(param_3 + 0x40 + lVar16 * 0xc);
      auVar52 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar21);
      auVar23 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar46);
      auVar52 = vblendps_avx(auVar23,auVar52,0x88);
      auVar23 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar21);
      auVar27 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,auVar12);
      auVar23 = vblendps_avx(auVar27,auVar23,0x13);
      auVar59._16_16_ = auVar23._0_16_;
      auVar59._0_16_ = auVar52._0_16_;
      auVar52 = vperm2f128_avx(auVar52,auVar23,0x31);
      auVar46 = vblendps_avx(auVar21,auVar46,0x24);
      auVar46 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar46);
      auVar21 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,auVar12);
      auVar46 = vblendps_avx(auVar46,auVar21,0xe0);
    }
    else {
      auVar47 = vgatherdps(ZEXT832(0) << 0x20,auVar22);
      auVar77 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar22);
      auVar39 = vgatherdps(ZEXT832(0),auVar22);
      auVar59 = vgatherdps(ZEXT832(0) << 0x20,auVar22);
      auVar52 = vgatherdps(ZEXT832(0),auVar22);
      auVar46 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar22);
    }
    auVar73._0_4_ = -(param_4 * auVar59._0_4_) + auVar47._0_4_;
    auVar73._4_4_ = -(param_4 * auVar59._4_4_) + auVar47._4_4_;
    auVar73._8_4_ = -(param_4 * auVar59._8_4_) + auVar47._8_4_;
    auVar73._12_4_ = -(param_4 * auVar59._12_4_) + auVar47._12_4_;
    auVar73._16_4_ = -(param_4 * auVar59._16_4_) + auVar47._16_4_;
    auVar73._20_4_ = -(param_4 * auVar59._20_4_) + auVar47._20_4_;
    auVar73._24_4_ = -(param_4 * auVar59._24_4_) + auVar47._24_4_;
    auVar73._28_4_ = -(param_4 * auVar59._28_4_) + auVar47._28_4_;
    auVar71._0_4_ = -(param_4 * auVar52._0_4_) + auVar77._0_4_;
    auVar71._4_4_ = -(param_4 * auVar52._4_4_) + auVar77._4_4_;
    auVar71._8_4_ = -(param_4 * auVar52._8_4_) + auVar77._8_4_;
    auVar71._12_4_ = -(param_4 * auVar52._12_4_) + auVar77._12_4_;
    auVar71._16_4_ = -(param_4 * auVar52._16_4_) + auVar77._16_4_;
    auVar71._20_4_ = -(param_4 * auVar52._20_4_) + auVar77._20_4_;
    auVar71._24_4_ = -(param_4 * auVar52._24_4_) + auVar77._24_4_;
    auVar71._28_4_ = -(param_4 * auVar52._28_4_) + auVar77._28_4_;
    auVar62._0_4_ = -(auVar46._0_4_ * param_4) + auVar39._0_4_;
    auVar62._4_4_ = -(auVar46._4_4_ * param_4) + auVar39._4_4_;
    auVar62._8_4_ = -(auVar46._8_4_ * param_4) + auVar39._8_4_;
    auVar62._12_4_ = -(auVar46._12_4_ * param_4) + auVar39._12_4_;
    auVar62._16_4_ = -(auVar46._16_4_ * param_4) + auVar39._16_4_;
    auVar62._20_4_ = -(auVar46._20_4_ * param_4) + auVar39._20_4_;
    auVar62._24_4_ = -(auVar46._24_4_ * param_4) + auVar39._24_4_;
    auVar62._28_4_ = -(auVar46._28_4_ * param_4) + auVar39._28_4_;
    auVar28 = vsubps_avx(auVar28,auVar73);
    auVar58 = vsubps_avx(auVar58,auVar71);
    auVar38 = vsubps_avx(auVar38,auVar62);
    fVar9 = auVar58._0_4_;
    fVar10 = auVar58._4_4_;
    fVar3 = auVar58._8_4_;
    fVar4 = auVar58._12_4_;
    fVar5 = auVar58._16_4_;
    fVar6 = auVar58._20_4_;
    fVar7 = auVar58._24_4_;
    fVar8 = auVar58._28_4_;
    fVar26 = auVar28._0_4_;
    fVar30 = auVar28._4_4_;
    fVar31 = auVar28._8_4_;
    fVar32 = auVar28._12_4_;
    fVar33 = auVar28._16_4_;
    fVar34 = auVar28._20_4_;
    fVar35 = auVar28._24_4_;
    fVar36 = auVar28._28_4_;
    fVar54 = auVar38._0_4_;
    auVar40._0_4_ = fVar54 * fVar54 + fVar26 * fVar26 + fVar9 * fVar9;
    fVar55 = auVar38._4_4_;
    auVar40._4_4_ = fVar55 * fVar55 + fVar30 * fVar30 + fVar10 * fVar10;
    fVar64 = auVar38._8_4_;
    auVar40._8_4_ = fVar64 * fVar64 + fVar31 * fVar31 + fVar3 * fVar3;
    fVar65 = auVar38._12_4_;
    auVar40._12_4_ = fVar65 * fVar65 + fVar32 * fVar32 + fVar4 * fVar4;
    fVar66 = auVar38._16_4_;
    auVar40._16_4_ = fVar66 * fVar66 + fVar33 * fVar33 + fVar5 * fVar5;
    fVar67 = auVar38._20_4_;
    auVar40._20_4_ = fVar67 * fVar67 + fVar34 * fVar34 + fVar6 * fVar6;
    fVar68 = auVar38._24_4_;
    auVar40._24_4_ = fVar68 * fVar68 + fVar35 * fVar35 + fVar7 * fVar7;
    fVar69 = auVar38._28_4_;
    auVar40._28_4_ = fVar69 * fVar69 + fVar36 * fVar36 + fVar8 * fVar8;
    auVar58 = vsqrtps_avx(auVar40);
    auVar86._4_4_ = param_5;
    auVar86._0_4_ = param_5;
    auVar86._8_4_ = param_5;
    auVar86._12_4_ = param_5;
    auVar86._16_4_ = param_5;
    auVar86._20_4_ = param_5;
    auVar86._24_4_ = param_5;
    auVar86._28_4_ = param_5;
    auVar58 = vdivps_avx(auVar86,auVar58);
    fVar75 = auVar58._0_4_;
    fVar79 = auVar58._4_4_;
    fVar80 = auVar58._8_4_;
    fVar81 = auVar58._12_4_;
    fVar82 = auVar58._16_4_;
    fVar83 = auVar58._20_4_;
    fVar84 = auVar58._24_4_;
    fVar85 = auVar58._28_4_;
    param_4 = param_4 - param_5;
    auVar60._0_4_ = -(param_4 * auVar59._0_4_) + auVar47._0_4_;
    auVar60._4_4_ = -(param_4 * auVar59._4_4_) + auVar47._4_4_;
    auVar60._8_4_ = -(param_4 * auVar59._8_4_) + auVar47._8_4_;
    auVar60._12_4_ = -(param_4 * auVar59._12_4_) + auVar47._12_4_;
    auVar60._16_4_ = -(param_4 * auVar59._16_4_) + auVar47._16_4_;
    auVar60._20_4_ = -(param_4 * auVar59._20_4_) + auVar47._20_4_;
    auVar60._24_4_ = -(param_4 * auVar59._24_4_) + auVar47._24_4_;
    auVar60._28_4_ = -(param_4 * auVar59._28_4_) + auVar47._28_4_;
    param_5 = param_5 * param_5;
    auVar28._4_4_ = param_5;
    auVar28._0_4_ = param_5;
    auVar28._8_4_ = param_5;
    auVar28._12_4_ = param_5;
    auVar28._16_4_ = param_5;
    auVar28._20_4_ = param_5;
    auVar28._24_4_ = param_5;
    auVar28._28_4_ = param_5;
    auVar58 = vcmpps_avx(auVar40,auVar28,1);
    auVar29._4_4_ = __real_322bcc77;
    auVar29._0_4_ = __real_322bcc77;
    auVar29._8_4_ = __real_322bcc77;
    auVar29._12_4_ = __real_322bcc77;
    auVar29._16_4_ = __real_322bcc77;
    auVar29._20_4_ = __real_322bcc77;
    auVar29._24_4_ = __real_322bcc77;
    auVar29._28_4_ = __real_322bcc77;
    auVar28 = vcmpps_avx(auVar40,auVar29,1);
    uVar15 = auVar58._0_4_;
    auVar48._0_4_ = uVar15 & (uint)(fVar75 * fVar26 + auVar73._0_4_);
    uVar87 = auVar58._4_4_;
    auVar48._4_4_ = uVar87 & (uint)(fVar79 * fVar30 + auVar73._4_4_);
    uVar88 = auVar58._8_4_;
    auVar48._8_4_ = uVar88 & (uint)(fVar80 * fVar31 + auVar73._8_4_);
    uVar89 = auVar58._12_4_;
    auVar48._12_4_ = uVar89 & (uint)(fVar81 * fVar32 + auVar73._12_4_);
    uVar90 = auVar58._16_4_;
    auVar48._16_4_ = uVar90 & (uint)(fVar82 * fVar33 + auVar73._16_4_);
    uVar91 = auVar58._20_4_;
    auVar48._20_4_ = uVar91 & (uint)(fVar83 * fVar34 + auVar73._20_4_);
    uVar92 = auVar58._24_4_;
    auVar48._24_4_ = uVar92 & (uint)(fVar84 * fVar35 + auVar73._24_4_);
    uVar94 = auVar58._28_4_;
    auVar48._28_4_ = uVar94 & (uint)(fVar85 * fVar36 + auVar73._28_4_);
    auVar58 = vblendvps_avx(auVar48,auVar60,auVar28);
    auVar38 = vcmpps_avx(auVar51,ZEXT432(0) << 0x20,4);
    auVar21 = vcmpps_avx(auVar58,ZEXT432(0) << 0x20,4);
    auVar23._0_4_ = auVar21._0_4_ & auVar38._0_4_ & auVar22._0_4_;
    auVar23._4_4_ = auVar21._4_4_ & auVar38._4_4_ & auVar22._4_4_;
    auVar23._8_4_ = auVar21._8_4_ & auVar38._8_4_ & auVar22._8_4_;
    auVar23._12_4_ = auVar21._12_4_ & auVar38._12_4_ & auVar22._12_4_;
    auVar23._16_4_ = auVar21._16_4_ & auVar38._16_4_ & auVar22._16_4_;
    auVar23._20_4_ = auVar21._20_4_ & auVar38._20_4_ & auVar22._20_4_;
    auVar23._24_4_ = auVar21._24_4_ & auVar38._24_4_ & auVar22._24_4_;
    auVar23._28_4_ = auVar21._28_4_ & auVar38._28_4_ & auVar22._28_4_;
    uVar14 = vmovmskps_avx(auVar23);
    if (uVar14 != 0) {
      auVar53._0_4_ = -(param_4 * auVar52._0_4_) + auVar77._0_4_;
      auVar53._4_4_ = -(param_4 * auVar52._4_4_) + auVar77._4_4_;
      auVar53._8_4_ = -(param_4 * auVar52._8_4_) + auVar77._8_4_;
      auVar53._12_4_ = -(param_4 * auVar52._12_4_) + auVar77._12_4_;
      auVar53._16_4_ = -(param_4 * auVar52._16_4_) + auVar77._16_4_;
      auVar53._20_4_ = -(param_4 * auVar52._20_4_) + auVar77._20_4_;
      auVar53._24_4_ = -(param_4 * auVar52._24_4_) + auVar77._24_4_;
      auVar53._28_4_ = -(param_4 * auVar52._28_4_) + auVar77._28_4_;
      auVar50._0_4_ = -(param_4 * auVar46._0_4_) + auVar39._0_4_;
      auVar50._4_4_ = -(param_4 * auVar46._4_4_) + auVar39._4_4_;
      auVar50._8_4_ = -(param_4 * auVar46._8_4_) + auVar39._8_4_;
      auVar50._12_4_ = -(param_4 * auVar46._12_4_) + auVar39._12_4_;
      auVar50._16_4_ = -(param_4 * auVar46._16_4_) + auVar39._16_4_;
      auVar50._20_4_ = -(param_4 * auVar46._20_4_) + auVar39._20_4_;
      auVar50._24_4_ = -(param_4 * auVar46._24_4_) + auVar39._24_4_;
      auVar50._28_4_ = -(param_4 * auVar46._28_4_) + auVar39._28_4_;
      auVar24._0_4_ = uVar15 & (uint)(fVar75 * fVar9 + auVar71._0_4_);
      auVar24._4_4_ = uVar87 & (uint)(fVar79 * fVar10 + auVar71._4_4_);
      auVar24._8_4_ = uVar88 & (uint)(fVar80 * fVar3 + auVar71._8_4_);
      auVar24._12_4_ = uVar89 & (uint)(fVar81 * fVar4 + auVar71._12_4_);
      auVar24._16_4_ = uVar90 & (uint)(fVar82 * fVar5 + auVar71._16_4_);
      auVar24._20_4_ = uVar91 & (uint)(fVar83 * fVar6 + auVar71._20_4_);
      auVar24._24_4_ = uVar92 & (uint)(fVar84 * fVar7 + auVar71._24_4_);
      auVar24._28_4_ = uVar94 & (uint)(fVar85 * fVar8 + auVar71._28_4_);
      auVar22 = vblendvps_avx(auVar24,auVar53,auVar28);
      auVar25._0_4_ = uVar15 & (uint)(fVar75 * fVar54 + auVar62._0_4_);
      auVar25._4_4_ = uVar87 & (uint)(fVar79 * fVar55 + auVar62._4_4_);
      auVar25._8_4_ = uVar88 & (uint)(fVar80 * fVar64 + auVar62._8_4_);
      auVar25._12_4_ = uVar89 & (uint)(fVar81 * fVar65 + auVar62._12_4_);
      auVar25._16_4_ = uVar90 & (uint)(fVar82 * fVar66 + auVar62._16_4_);
      auVar25._20_4_ = uVar91 & (uint)(fVar83 * fVar67 + auVar62._20_4_);
      auVar25._24_4_ = uVar92 & (uint)(fVar84 * fVar68 + auVar62._24_4_);
      auVar25._28_4_ = uVar94 & (uint)(fVar85 * fVar69 + auVar62._28_4_);
      auVar28 = vblendvps_avx(auVar25,auVar50,auVar28);
      cVar13 = (char)uVar14;
      if (cVar13 == -1) {
        auVar38 = vunpcklps_avx(auVar58,auVar22);
        auVar21 = vunpcklps_avx(auVar28,auVar51);
        auVar46 = vunpcklpd_avx(auVar38,auVar21);
        auVar38 = vunpckhpd_avx(auVar38,auVar21);
        auVar22 = vunpckhps_avx(auVar58,auVar22);
        auVar58 = vunpckhps_avx(auVar28,auVar51);
        auVar51 = vunpcklpd_avx(auVar22,auVar58);
        auVar49._16_16_ = auVar38._0_16_;
        auVar49._0_16_ = auVar46._0_16_;
        *pauVar19 = auVar49;
        auVar22 = vunpckhpd_avx(auVar22,auVar58);
        auVar41._16_16_ = auVar22._0_16_;
        auVar41._0_16_ = auVar51._0_16_;
        pauVar19[1] = auVar41;
        auVar58 = vperm2f128_avx(auVar46,auVar38,0x31);
        pauVar19[2] = auVar58;
        auVar22 = vperm2f128_avx(auVar51,auVar22,0x31);
        pauVar19[3] = auVar22;
      }
      else {
        auVar72 = auVar51._0_16_;
        auVar74 = auVar51._16_16_;
        auVar56 = auVar58._0_16_;
        auVar61 = auVar58._16_16_;
        auVar43 = auVar22._0_16_;
        auVar44 = auVar22._16_16_;
        auVar37 = auVar28._0_16_;
        auVar42 = auVar28._16_16_;
        if ((uVar14 & 1) != 0) {
          *(int *)*pauVar19 = auVar58._0_4_;
        }
        if ((uVar14 & 2) != 0) {
          uVar2 = vextractps_avx(auVar56,1);
          *(undefined4 *)(*pauVar19 + 0x10) = uVar2;
        }
        if ((uVar14 & 4) != 0) {
          uVar2 = vextractps_avx(auVar56,2);
          *(undefined4 *)pauVar19[1] = uVar2;
        }
        if ((uVar14 & 8) != 0) {
          uVar2 = vextractps_avx(auVar56,3);
          *(undefined4 *)(pauVar19[1] + 0x10) = uVar2;
        }
        if ((uVar14 & 0x10) != 0) {
          *(int *)pauVar19[2] = auVar58._16_4_;
        }
        if ((uVar14 & 0x20) != 0) {
          uVar2 = vextractps_avx(auVar61,1);
          *(undefined4 *)(pauVar19[2] + 0x10) = uVar2;
        }
        if ((uVar14 & 0x40) != 0) {
          uVar2 = vextractps_avx(auVar61,2);
          *(undefined4 *)pauVar19[3] = uVar2;
        }
        if (cVar13 < '\0') {
          uVar2 = vextractps_avx(auVar61,3);
          *(undefined4 *)(pauVar19[3] + 0x10) = uVar2;
        }
        if ((uVar14 & 1) != 0) {
          *(int *)(*pauVar19 + 4) = auVar22._0_4_;
        }
        if ((uVar14 & 2) != 0) {
          uVar2 = vextractps_avx(auVar43,1);
          *(undefined4 *)(*pauVar19 + 0x14) = uVar2;
        }
        if ((uVar14 & 4) != 0) {
          uVar2 = vextractps_avx(auVar43,2);
          *(undefined4 *)(pauVar19[1] + 4) = uVar2;
        }
        if ((uVar14 & 8) != 0) {
          uVar2 = vextractps_avx(auVar43,3);
          *(undefined4 *)(pauVar19[1] + 0x14) = uVar2;
        }
        if ((uVar14 & 0x10) != 0) {
          *(int *)(pauVar19[2] + 4) = auVar22._16_4_;
        }
        if ((uVar14 & 0x20) != 0) {
          uVar2 = vextractps_avx(auVar44,1);
          *(undefined4 *)(pauVar19[2] + 0x14) = uVar2;
        }
        if ((uVar14 & 0x40) != 0) {
          uVar2 = vextractps_avx(auVar44,2);
          *(undefined4 *)(pauVar19[3] + 4) = uVar2;
        }
        if (cVar13 < '\0') {
          uVar2 = vextractps_avx(auVar44,3);
          *(undefined4 *)(pauVar19[3] + 0x14) = uVar2;
        }
        if ((uVar14 & 1) != 0) {
          *(int *)(*pauVar19 + 8) = auVar28._0_4_;
        }
        if ((uVar14 & 2) != 0) {
          uVar2 = vextractps_avx(auVar37,1);
          *(undefined4 *)(*pauVar19 + 0x18) = uVar2;
        }
        if ((uVar14 & 4) != 0) {
          uVar2 = vextractps_avx(auVar37,2);
          *(undefined4 *)(pauVar19[1] + 8) = uVar2;
        }
        if ((uVar14 & 8) != 0) {
          uVar2 = vextractps_avx(auVar37,3);
          *(undefined4 *)(pauVar19[1] + 0x18) = uVar2;
        }
        if ((uVar14 & 0x10) != 0) {
          *(int *)(pauVar19[2] + 8) = auVar28._16_4_;
        }
        if ((uVar14 & 0x20) != 0) {
          uVar2 = vextractps_avx(auVar42,1);
          *(undefined4 *)(pauVar19[2] + 0x18) = uVar2;
        }
        if ((uVar14 & 0x40) != 0) {
          uVar2 = vextractps_avx(auVar42,2);
          *(undefined4 *)(pauVar19[3] + 8) = uVar2;
        }
        if (cVar13 < '\0') {
          uVar2 = vextractps_avx(auVar42,3);
          *(undefined4 *)(pauVar19[3] + 0x18) = uVar2;
        }
        if ((uVar14 & 1) != 0) {
          *(int *)(*pauVar19 + 0xc) = auVar51._0_4_;
        }
        if ((uVar14 & 2) != 0) {
          uVar2 = vextractps_avx(auVar72,1);
          *(undefined4 *)(*pauVar19 + 0x1c) = uVar2;
        }
        if ((uVar14 & 4) != 0) {
          uVar2 = vextractps_avx(auVar72,2);
          *(undefined4 *)(pauVar19[1] + 0xc) = uVar2;
        }
        if ((uVar14 & 8) != 0) {
          uVar2 = vextractps_avx(auVar72,3);
          *(undefined4 *)(pauVar19[1] + 0x1c) = uVar2;
        }
        if ((uVar14 & 0x10) != 0) {
          *(int *)(pauVar19[2] + 0xc) = auVar51._16_4_;
        }
        if ((uVar14 & 0x20) != 0) {
          uVar2 = vextractps_avx(auVar74,1);
          *(undefined4 *)(pauVar19[2] + 0x1c) = uVar2;
        }
        if ((uVar14 & 0x40) != 0) {
          uVar2 = vextractps_avx(auVar74,2);
          *(undefined4 *)(pauVar19[3] + 0xc) = uVar2;
        }
        if (cVar13 < '\0') {
          uVar2 = vextractps_avx(auVar74,3);
          *(undefined4 *)(pauVar19[3] + 0x1c) = uVar2;
        }
      }
    }
  }
  return;
}

// ApplyLegacySphericalBackstopConstraints_avx2 @ 14032a110

void ApplyLegacySphericalBackstopConstraints_avx2(void)

{
  ApplyLegacySphericalBackstopConstraintsWithMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_CunfCunfCunfCunfCuniCuni_avx2
            ();
  return;
}

// ApplySphericalBackstopConstraintsWithMaps_avx2 @ 14032a180

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplySphericalBackstopConstraintsWithMaps_avx2
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,float param_6,float param_7,float param_8,float param_9,int param_10,uint param_11)

{
  float *pfVar1;
  undefined1 (*pauVar2) [32];
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  undefined1 (*pauVar6) [32];
  int iVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  float fVar31;
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [16];
  undefined1 auVar41 [16];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  float fVar42;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auVar43 [16];
  float fVar50;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined1 auVar51 [16];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [16];
  undefined1 auVar58 [32];
  undefined1 auVar61 [16];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  float fVar64;
  undefined1 auVar65 [32];
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  undefined1 auVar66 [64];
  undefined1 auVar73 [16];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [16];
  undefined1 auVar77 [32];
  float fVar78;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  undefined1 auVar79 [32];
  uint uVar87;
  uint uVar89;
  uint uVar90;
  uint uVar91;
  uint uVar92;
  uint uVar93;
  uint uVar94;
  uint uVar95;
  undefined1 auVar88 [32];
  undefined1 auVar96 [32];
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  
  uVar5 = param_11 + 7;
  if (-1 < (int)param_11) {
    uVar5 = param_11;
  }
  if ((int)(uVar5 & 0xfffffff8) < 1) {
    uVar10 = 0;
    if ((int)param_11 < 1) {
      return;
    }
  }
  else {
    lVar8 = (longlong)param_10 * 0x10 + param_1;
    lVar12 = (longlong)param_10 * 0xc + 0x40;
    uVar13 = 0;
    auVar66 = ZEXT1264(ZEXT812(0));
    uVar10 = 0;
    do {
      auVar17 = *(undefined1 (*) [32])(lVar8 + uVar13 * 4);
      auVar34 = *(undefined1 (*) [32])(lVar8 + 0x20 + uVar13 * 4);
      auVar44 = *(undefined1 (*) [32])(lVar8 + 0x40 + uVar13 * 4);
      auVar29 = *(undefined1 (*) [32])(lVar8 + 0x60 + uVar13 * 4);
      auVar88 = vperm2f128_avx(auVar17,auVar44,0x20);
      auVar59 = vperm2f128_avx(auVar17,auVar44,0x31);
      auVar18 = vperm2f128_avx(auVar34,auVar29,0x20);
      auVar106 = vperm2f128_avx(auVar34,auVar29,0x31);
      auVar16 = vunpckhps_avx(auVar88,auVar59);
      auVar33 = vunpckhps_avx(auVar18,auVar106);
      auVar36 = vunpckhpd_avx(auVar16,auVar33);
      auVar28 = vcmpps_avx(auVar66._0_32_,auVar36,4);
      if ((((((((SUB321(auVar28 >> 0x1f,0) & 1) != 0 || (SUB321(auVar28 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar28 >> 0x5f,0) & 1) != 0) || SUB321(auVar28 >> 0x7f,0) != '\0') ||
            (SUB321(auVar28 >> 0x9f,0) & 1) != 0) || SUB321(auVar28 >> 0xbf,0) != '\0') ||
          (SUB321(auVar28 >> 0xdf,0) & 1) != 0) || auVar28[0x1f] < '\0') {
        auVar65 = vunpcklpd_avx(auVar16,auVar33);
        auVar16 = vunpcklps_avx(auVar88,auVar59);
        auVar33 = vunpcklps_avx(auVar18,auVar106);
        auVar58 = vunpckhpd_avx(auVar16,auVar33);
        auVar77 = vunpcklpd_avx(auVar16,auVar33);
        auVar16 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar12);
        auVar33 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar12);
        auVar88 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar33);
        auVar59 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,auVar16);
        auVar88 = vblendps_avx(auVar59,auVar88,0x88);
        auVar59 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar33);
        auVar18 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,*(undefined1 (*) [32])(param_2 + lVar12));
        auVar59 = vblendps_avx(auVar18,auVar59,0x13);
        auVar37 = vperm2f128_avx(auVar88,auVar59,0x31);
        auVar16 = vblendps_avx(auVar33,auVar16,0x24);
        auVar16 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar16);
        auVar33 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,*(undefined1 (*) [32])(param_2 + lVar12));
        auVar18 = vblendps_avx(auVar16,auVar33,0xe0);
        auVar16 = *(undefined1 (*) [32])(param_3 + -0x40 + lVar12);
        auVar33 = *(undefined1 (*) [32])(param_3 + -0x20 + lVar12);
        auVar106 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                                ,auVar33);
        auVar74 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,auVar16);
        auVar106 = vblendps_avx(auVar74,auVar106,0x88);
        auVar74 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar33);
        auVar62 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,*(undefined1 (*) [32])(param_3 + lVar12));
        auVar74 = vblendps_avx(auVar62,auVar74,0x13);
        auVar62 = vperm2f128_avx(auVar106,auVar74,0x31);
        auVar16 = vblendps_avx(auVar33,auVar16,0x24);
        auVar16 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar16);
        auVar33 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,*(undefined1 (*) [32])(param_3 + lVar12));
        auVar16 = vblendps_avx(auVar16,auVar33,0xe0);
        pfVar1 = (float *)(param_4 + (uVar13 & 0xffffffff));
        fVar97 = param_7 * *pfVar1 + param_6;
        fVar98 = param_7 * pfVar1[1] + param_6;
        fVar99 = param_7 * pfVar1[2] + param_6;
        fVar100 = param_7 * pfVar1[3] + param_6;
        fVar101 = param_7 * pfVar1[4] + param_6;
        fVar102 = param_7 * pfVar1[5] + param_6;
        fVar103 = param_7 * pfVar1[6] + param_6;
        fVar104 = param_7 * pfVar1[7] + param_6;
        pfVar1 = (float *)(param_5 + (uVar13 & 0xffffffff));
        auVar32._0_4_ = param_9 * *pfVar1 + param_8;
        auVar32._4_4_ = param_9 * pfVar1[1] + param_8;
        auVar32._8_4_ = param_9 * pfVar1[2] + param_8;
        auVar32._12_4_ = param_9 * pfVar1[3] + param_8;
        auVar32._16_4_ = param_9 * pfVar1[4] + param_8;
        auVar32._20_4_ = param_9 * pfVar1[5] + param_8;
        auVar32._24_4_ = param_9 * pfVar1[6] + param_8;
        auVar32._28_4_ = param_9 * pfVar1[7] + param_8;
        fVar14 = fVar97 + auVar32._0_4_;
        fVar21 = fVar98 + auVar32._4_4_;
        fVar22 = fVar99 + auVar32._8_4_;
        fVar23 = fVar100 + auVar32._12_4_;
        fVar24 = fVar101 + auVar32._16_4_;
        fVar25 = fVar102 + auVar32._20_4_;
        fVar26 = fVar103 + auVar32._24_4_;
        fVar27 = fVar104 + auVar32._28_4_;
        auVar105._0_4_ = -(auVar106._0_4_ * fVar14) + auVar88._0_4_;
        auVar105._4_4_ = -(auVar106._4_4_ * fVar21) + auVar88._4_4_;
        auVar105._8_4_ = -(auVar106._8_4_ * fVar22) + auVar88._8_4_;
        auVar105._12_4_ = -(auVar106._12_4_ * fVar23) + auVar88._12_4_;
        auVar105._16_4_ = -(auVar74._0_4_ * fVar24) + auVar59._0_4_;
        auVar105._20_4_ = -(auVar74._4_4_ * fVar25) + auVar59._4_4_;
        auVar105._24_4_ = -(auVar74._8_4_ * fVar26) + auVar59._8_4_;
        auVar105._28_4_ = -(auVar74._12_4_ * fVar27) + auVar59._12_4_;
        auVar55._0_4_ = -(auVar62._0_4_ * fVar14) + auVar37._0_4_;
        auVar55._4_4_ = -(auVar62._4_4_ * fVar21) + auVar37._4_4_;
        auVar55._8_4_ = -(auVar62._8_4_ * fVar22) + auVar37._8_4_;
        auVar55._12_4_ = -(auVar62._12_4_ * fVar23) + auVar37._12_4_;
        auVar55._16_4_ = -(auVar62._16_4_ * fVar24) + auVar37._16_4_;
        auVar55._20_4_ = -(auVar62._20_4_ * fVar25) + auVar37._20_4_;
        auVar55._24_4_ = -(auVar62._24_4_ * fVar26) + auVar37._24_4_;
        auVar55._28_4_ = -(auVar62._28_4_ * fVar27) + auVar37._28_4_;
        auVar15._0_4_ = -(auVar16._0_4_ * fVar14) + auVar18._0_4_;
        auVar15._4_4_ = -(auVar16._4_4_ * fVar21) + auVar18._4_4_;
        auVar15._8_4_ = -(auVar16._8_4_ * fVar22) + auVar18._8_4_;
        auVar15._12_4_ = -(auVar16._12_4_ * fVar23) + auVar18._12_4_;
        auVar15._16_4_ = -(auVar16._16_4_ * fVar24) + auVar18._16_4_;
        auVar15._20_4_ = -(auVar16._20_4_ * fVar25) + auVar18._20_4_;
        auVar15._24_4_ = -(auVar16._24_4_ * fVar26) + auVar18._24_4_;
        auVar15._28_4_ = -(auVar16._28_4_ * fVar27) + auVar18._28_4_;
        auVar33 = vsubps_avx(auVar77,auVar105);
        auVar58 = vsubps_avx(auVar58,auVar55);
        auVar65 = vsubps_avx(auVar65,auVar15);
        fVar14 = auVar58._0_4_;
        fVar21 = auVar58._4_4_;
        fVar22 = auVar58._8_4_;
        fVar23 = auVar58._12_4_;
        fVar24 = auVar58._16_4_;
        fVar25 = auVar58._20_4_;
        fVar26 = auVar58._24_4_;
        fVar27 = auVar58._28_4_;
        fVar42 = auVar33._0_4_;
        fVar47 = auVar33._4_4_;
        fVar48 = auVar33._8_4_;
        fVar49 = auVar33._12_4_;
        fVar50 = auVar33._16_4_;
        fVar52 = auVar33._20_4_;
        fVar53 = auVar33._24_4_;
        fVar54 = auVar33._28_4_;
        fVar78 = auVar65._0_4_;
        auVar58._0_4_ = fVar78 * fVar78 + fVar42 * fVar42 + fVar14 * fVar14;
        fVar80 = auVar65._4_4_;
        auVar58._4_4_ = fVar80 * fVar80 + fVar47 * fVar47 + fVar21 * fVar21;
        fVar81 = auVar65._8_4_;
        auVar58._8_4_ = fVar81 * fVar81 + fVar48 * fVar48 + fVar22 * fVar22;
        fVar82 = auVar65._12_4_;
        auVar58._12_4_ = fVar82 * fVar82 + fVar49 * fVar49 + fVar23 * fVar23;
        fVar83 = auVar65._16_4_;
        auVar58._16_4_ = fVar83 * fVar83 + fVar50 * fVar50 + fVar24 * fVar24;
        fVar84 = auVar65._20_4_;
        auVar58._20_4_ = fVar84 * fVar84 + fVar52 * fVar52 + fVar25 * fVar25;
        fVar85 = auVar65._24_4_;
        auVar58._24_4_ = fVar85 * fVar85 + fVar53 * fVar53 + fVar26 * fVar26;
        fVar86 = auVar65._28_4_;
        auVar58._28_4_ = fVar86 * fVar86 + fVar54 * fVar54 + fVar27 * fVar27;
        auVar33 = vsqrtps_avx(auVar58);
        auVar33 = vdivps_avx(auVar32,auVar33);
        fVar64 = auVar33._0_4_;
        fVar67 = auVar33._4_4_;
        fVar68 = auVar33._8_4_;
        fVar69 = auVar33._12_4_;
        fVar70 = auVar33._16_4_;
        fVar71 = auVar33._20_4_;
        fVar72 = auVar33._24_4_;
        fVar31 = auVar33._28_4_;
        auVar65._0_4_ = -(fVar97 * auVar106._0_4_) + auVar88._0_4_;
        auVar65._4_4_ = -(fVar98 * auVar106._4_4_) + auVar88._4_4_;
        auVar65._8_4_ = -(fVar99 * auVar106._8_4_) + auVar88._8_4_;
        auVar65._12_4_ = -(fVar100 * auVar106._12_4_) + auVar88._12_4_;
        auVar65._16_4_ = -(fVar101 * auVar74._0_4_) + auVar59._0_4_;
        auVar65._20_4_ = -(fVar102 * auVar74._4_4_) + auVar59._4_4_;
        auVar65._24_4_ = -(fVar103 * auVar74._8_4_) + auVar59._8_4_;
        auVar65._28_4_ = -(fVar104 * auVar74._12_4_) + auVar59._12_4_;
        auVar33._0_4_ = auVar32._0_4_ * auVar32._0_4_;
        auVar33._4_4_ = auVar32._4_4_ * auVar32._4_4_;
        auVar33._8_4_ = auVar32._8_4_ * auVar32._8_4_;
        auVar33._12_4_ = auVar32._12_4_ * auVar32._12_4_;
        auVar33._16_4_ = auVar32._16_4_ * auVar32._16_4_;
        auVar33._20_4_ = auVar32._20_4_ * auVar32._20_4_;
        auVar33._24_4_ = auVar32._24_4_ * auVar32._24_4_;
        auVar33._28_4_ = auVar32._28_4_ * auVar32._28_4_;
        auVar33 = vcmpps_avx(auVar58,auVar33,1);
        auVar88._4_4_ = __real_322bcc77;
        auVar88._0_4_ = __real_322bcc77;
        auVar88._8_4_ = __real_322bcc77;
        auVar88._12_4_ = __real_322bcc77;
        auVar88._16_4_ = __real_322bcc77;
        auVar88._20_4_ = __real_322bcc77;
        auVar88._24_4_ = __real_322bcc77;
        auVar88._28_4_ = __real_322bcc77;
        auVar88 = vcmpps_avx(auVar58,auVar88,1);
        uVar87 = auVar33._0_4_;
        auVar59._0_4_ = uVar87 & (uint)(fVar64 * fVar42 + auVar105._0_4_);
        uVar89 = auVar33._4_4_;
        auVar59._4_4_ = uVar89 & (uint)(fVar67 * fVar47 + auVar105._4_4_);
        uVar90 = auVar33._8_4_;
        auVar59._8_4_ = uVar90 & (uint)(fVar68 * fVar48 + auVar105._8_4_);
        uVar91 = auVar33._12_4_;
        auVar59._12_4_ = uVar91 & (uint)(fVar69 * fVar49 + auVar105._12_4_);
        uVar92 = auVar33._16_4_;
        auVar59._16_4_ = uVar92 & (uint)(fVar70 * fVar50 + auVar105._16_4_);
        uVar93 = auVar33._20_4_;
        auVar59._20_4_ = uVar93 & (uint)(fVar71 * fVar52 + auVar105._20_4_);
        uVar94 = auVar33._24_4_;
        auVar59._24_4_ = uVar94 & (uint)(fVar72 * fVar53 + auVar105._24_4_);
        uVar95 = auVar33._28_4_;
        auVar59._28_4_ = uVar95 & (uint)(fVar31 * fVar54 + auVar105._28_4_);
        auVar33 = vblendvps_avx(auVar59,auVar65,auVar88);
        auVar66 = ZEXT1264(ZEXT412(0)) << 0x20;
        auVar59 = vcmpps_avx(ZEXT1232(ZEXT412(0)) << 0x20,auVar33,4);
        auVar106._0_4_ = auVar59._0_4_ & auVar28._0_4_;
        auVar106._4_4_ = auVar59._4_4_ & auVar28._4_4_;
        auVar106._8_4_ = auVar59._8_4_ & auVar28._8_4_;
        auVar106._12_4_ = auVar59._12_4_ & auVar28._12_4_;
        auVar106._16_4_ = auVar59._16_4_ & auVar28._16_4_;
        auVar106._20_4_ = auVar59._20_4_ & auVar28._20_4_;
        auVar106._24_4_ = auVar59._24_4_ & auVar28._24_4_;
        auVar106._28_4_ = auVar59._28_4_ & auVar28._28_4_;
        uVar11 = vmovmskps_avx(auVar106);
        if (uVar11 != 0) {
          auVar74._0_4_ = -(fVar97 * auVar62._0_4_) + auVar37._0_4_;
          auVar74._4_4_ = -(fVar98 * auVar62._4_4_) + auVar37._4_4_;
          auVar74._8_4_ = -(fVar99 * auVar62._8_4_) + auVar37._8_4_;
          auVar74._12_4_ = -(fVar100 * auVar62._12_4_) + auVar37._12_4_;
          auVar74._16_4_ = -(fVar101 * auVar62._16_4_) + auVar37._16_4_;
          auVar74._20_4_ = -(fVar102 * auVar62._20_4_) + auVar37._20_4_;
          auVar74._24_4_ = -(fVar103 * auVar62._24_4_) + auVar37._24_4_;
          auVar74._28_4_ = -(fVar104 * auVar62._28_4_) + auVar37._28_4_;
          auVar77._0_4_ = -(fVar97 * auVar16._0_4_) + auVar18._0_4_;
          auVar77._4_4_ = -(fVar98 * auVar16._4_4_) + auVar18._4_4_;
          auVar77._8_4_ = -(fVar99 * auVar16._8_4_) + auVar18._8_4_;
          auVar77._12_4_ = -(fVar100 * auVar16._12_4_) + auVar18._12_4_;
          auVar77._16_4_ = -(fVar101 * auVar16._16_4_) + auVar18._16_4_;
          auVar77._20_4_ = -(fVar102 * auVar16._20_4_) + auVar18._20_4_;
          auVar77._24_4_ = -(fVar103 * auVar16._24_4_) + auVar18._24_4_;
          auVar77._28_4_ = -(fVar104 * auVar16._28_4_) + auVar18._28_4_;
          auVar28._0_4_ = uVar87 & (uint)(fVar64 * fVar14 + auVar55._0_4_);
          auVar28._4_4_ = uVar89 & (uint)(fVar67 * fVar21 + auVar55._4_4_);
          auVar28._8_4_ = uVar90 & (uint)(fVar68 * fVar22 + auVar55._8_4_);
          auVar28._12_4_ = uVar91 & (uint)(fVar69 * fVar23 + auVar55._12_4_);
          auVar28._16_4_ = uVar92 & (uint)(fVar70 * fVar24 + auVar55._16_4_);
          auVar28._20_4_ = uVar93 & (uint)(fVar71 * fVar25 + auVar55._20_4_);
          auVar28._24_4_ = uVar94 & (uint)(fVar72 * fVar26 + auVar55._24_4_);
          auVar28._28_4_ = uVar95 & (uint)(fVar31 * fVar27 + auVar55._28_4_);
          auVar28 = vblendvps_avx(auVar28,auVar74,auVar88);
          auVar16._0_4_ = uVar87 & (uint)(fVar64 * fVar78 + auVar15._0_4_);
          auVar16._4_4_ = uVar89 & (uint)(fVar67 * fVar80 + auVar15._4_4_);
          auVar16._8_4_ = uVar90 & (uint)(fVar68 * fVar81 + auVar15._8_4_);
          auVar16._12_4_ = uVar91 & (uint)(fVar69 * fVar82 + auVar15._12_4_);
          auVar16._16_4_ = uVar92 & (uint)(fVar70 * fVar83 + auVar15._16_4_);
          auVar16._20_4_ = uVar93 & (uint)(fVar71 * fVar84 + auVar15._20_4_);
          auVar16._24_4_ = uVar94 & (uint)(fVar72 * fVar85 + auVar15._24_4_);
          auVar16._28_4_ = uVar95 & (uint)(fVar31 * fVar86 + auVar15._28_4_);
          auVar16 = vblendvps_avx(auVar16,auVar77,auVar88);
          cVar4 = (char)uVar11;
          if (cVar4 == -1) {
            auVar17 = vunpcklps_avx(auVar33,auVar28);
            auVar34 = vunpcklps_avx(auVar16,auVar36);
            auVar29 = vunpcklpd_avx(auVar17,auVar34);
            auVar17 = vunpckhpd_avx(auVar17,auVar34);
            auVar34 = vunpckhps_avx(auVar33,auVar28);
            auVar44 = vunpckhps_avx(auVar16,auVar36);
            auVar28 = vunpcklpd_avx(auVar34,auVar44);
            auVar36._16_16_ = auVar17._0_16_;
            auVar36._0_16_ = auVar29._0_16_;
            *(undefined1 (*) [32])(lVar8 + uVar13 * 4) = auVar36;
            auVar34 = vunpckhpd_avx(auVar34,auVar44);
            auVar44._16_16_ = auVar34._0_16_;
            auVar44._0_16_ = auVar28._0_16_;
            *(undefined1 (*) [32])(lVar8 + 0x20 + uVar13 * 4) = auVar44;
            auVar17 = vperm2f128_avx(auVar29,auVar17,0x31);
            *(undefined1 (*) [32])(lVar8 + 0x40 + uVar13 * 4) = auVar17;
            auVar17 = vperm2f128_avx(auVar28,auVar34,0x31);
            *(undefined1 (*) [32])(lVar8 + 0x60 + uVar13 * 4) = auVar17;
          }
          else {
            auVar57 = auVar33._0_16_;
            auVar61 = auVar33._16_16_;
            auVar43 = auVar28._0_16_;
            auVar51 = auVar28._16_16_;
            auVar35 = auVar16._0_16_;
            auVar41 = auVar16._16_16_;
            if ((uVar11 & 1) != 0) {
              *(int *)(lVar8 + uVar13 * 4) = auVar33._0_4_;
            }
            if ((uVar11 & 2) != 0) {
              uVar3 = vextractps_avx(auVar57,1);
              *(undefined4 *)(lVar8 + 0x10 + uVar13 * 4) = uVar3;
            }
            if ((uVar11 & 4) != 0) {
              uVar3 = vextractps_avx(auVar57,2);
              *(undefined4 *)(lVar8 + 0x20 + uVar13 * 4) = uVar3;
            }
            if ((uVar11 & 8) != 0) {
              uVar3 = vextractps_avx(auVar57,3);
              *(undefined4 *)(lVar8 + 0x30 + uVar13 * 4) = uVar3;
            }
            if ((uVar11 & 0x10) != 0) {
              *(int *)(lVar8 + 0x40 + uVar13 * 4) = auVar33._16_4_;
            }
            if ((uVar11 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar61,1);
              *(undefined4 *)(lVar8 + 0x50 + uVar13 * 4) = uVar3;
            }
            if ((uVar11 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar61,2);
              *(undefined4 *)(lVar8 + 0x60 + uVar13 * 4) = uVar3;
            }
            if (cVar4 < '\0') {
              uVar3 = vextractps_avx(auVar61,3);
              *(undefined4 *)(lVar8 + 0x70 + uVar13 * 4) = uVar3;
            }
            if ((uVar11 & 1) != 0) {
              *(int *)(lVar8 + 4 + uVar13 * 4) = auVar28._0_4_;
            }
            if ((uVar11 & 2) != 0) {
              uVar3 = vextractps_avx(auVar43,1);
              *(undefined4 *)(lVar8 + 0x14 + uVar13 * 4) = uVar3;
            }
            if ((uVar11 & 4) != 0) {
              uVar3 = vextractps_avx(auVar43,2);
              *(undefined4 *)(lVar8 + 0x24 + uVar13 * 4) = uVar3;
            }
            if ((uVar11 & 8) != 0) {
              uVar3 = vextractps_avx(auVar43,3);
              *(undefined4 *)(lVar8 + 0x34 + uVar13 * 4) = uVar3;
            }
            if ((uVar11 & 0x10) != 0) {
              *(int *)(lVar8 + 0x44 + uVar13 * 4) = auVar28._16_4_;
            }
            if ((uVar11 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar51,1);
              *(undefined4 *)(lVar8 + 0x54 + uVar13 * 4) = uVar3;
            }
            if ((uVar11 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar51,2);
              *(undefined4 *)(lVar8 + 100 + uVar13 * 4) = uVar3;
            }
            if (cVar4 < '\0') {
              uVar3 = vextractps_avx(auVar51,3);
              *(undefined4 *)(lVar8 + 0x74 + uVar13 * 4) = uVar3;
            }
            if ((uVar11 & 1) != 0) {
              *(int *)(lVar8 + 8 + uVar13 * 4) = auVar16._0_4_;
            }
            if ((uVar11 & 2) != 0) {
              uVar3 = vextractps_avx(auVar35,1);
              *(undefined4 *)(lVar8 + 0x18 + uVar13 * 4) = uVar3;
            }
            if ((uVar11 & 4) != 0) {
              uVar3 = vextractps_avx(auVar35,2);
              *(undefined4 *)(lVar8 + 0x28 + uVar13 * 4) = uVar3;
            }
            if ((uVar11 & 8) != 0) {
              uVar3 = vextractps_avx(auVar35,3);
              *(undefined4 *)(lVar8 + 0x38 + uVar13 * 4) = uVar3;
            }
            if ((uVar11 & 0x10) != 0) {
              *(int *)(lVar8 + 0x48 + uVar13 * 4) = auVar16._16_4_;
            }
            if ((uVar11 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar41,1);
              *(undefined4 *)(lVar8 + 0x58 + uVar13 * 4) = uVar3;
            }
            if ((uVar11 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar41,2);
              *(undefined4 *)(lVar8 + 0x68 + uVar13 * 4) = uVar3;
            }
            if (cVar4 < '\0') {
              uVar3 = vextractps_avx(auVar41,3);
              *(undefined4 *)(lVar8 + 0x78 + uVar13 * 4) = uVar3;
            }
            if ((uVar11 & 1) != 0) {
              uVar3 = vextractps_avx(auVar17._0_16_,3);
              *(undefined4 *)(lVar8 + 0xc + uVar13 * 4) = uVar3;
            }
            if ((uVar11 & 2) != 0) {
              uVar3 = vextractps_avx(auVar17._16_16_,3);
              *(undefined4 *)(lVar8 + 0x1c + uVar13 * 4) = uVar3;
            }
            if ((uVar11 & 4) != 0) {
              uVar3 = vextractps_avx(auVar34._0_16_,3);
              *(undefined4 *)(lVar8 + 0x2c + uVar13 * 4) = uVar3;
            }
            if ((uVar11 & 8) != 0) {
              uVar3 = vextractps_avx(auVar34._16_16_,3);
              *(undefined4 *)(lVar8 + 0x3c + uVar13 * 4) = uVar3;
            }
            if ((uVar11 & 0x10) != 0) {
              uVar3 = vextractps_avx(auVar44._0_16_,3);
              *(undefined4 *)(lVar8 + 0x4c + uVar13 * 4) = uVar3;
            }
            if ((uVar11 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar44._16_16_,3);
              *(undefined4 *)(lVar8 + 0x5c + uVar13 * 4) = uVar3;
            }
            if ((uVar11 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar29._0_16_,3);
              *(undefined4 *)(lVar8 + 0x6c + uVar13 * 4) = uVar3;
            }
            if (cVar4 < '\0') {
              uVar3 = vextractps_avx(auVar29._16_16_,3);
              *(undefined4 *)(lVar8 + 0x7c + uVar13 * 4) = uVar3;
            }
          }
        }
      }
      uVar10 = uVar10 + 8;
      uVar13 = uVar13 + 0x20;
      lVar12 = lVar12 + 0x60;
    } while (uVar10 < (uVar5 & 0xfffffff8));
    if ((int)param_11 <= (int)uVar10) {
      return;
    }
  }
  iVar9 = (int)uVar10;
  auVar17._4_4_ = iVar9;
  auVar17._0_4_ = iVar9;
  auVar17._8_4_ = iVar9;
  auVar17._12_4_ = iVar9;
  auVar17._16_4_ = iVar9;
  auVar17._20_4_ = iVar9;
  auVar17._24_4_ = iVar9;
  auVar17._28_4_ = iVar9;
  auVar17 = vpor_avx2(auVar17,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar34._4_4_ = param_11;
  auVar34._0_4_ = param_11;
  auVar34._8_4_ = param_11;
  auVar34._12_4_ = param_11;
  auVar34._16_4_ = param_11;
  auVar34._20_4_ = param_11;
  auVar34._24_4_ = param_11;
  auVar34._28_4_ = param_11;
  auVar17 = vpcmpgtd_avx2(auVar34,auVar17);
  lVar12 = (longlong)(param_10 + iVar9);
  pauVar6 = (undefined1 (*) [32])(param_1 + lVar12 * 0x10);
  iVar7 = vmovmskps_avx(auVar17);
  if (iVar7 == 0xff) {
    auVar44 = vperm2f128_avx(*pauVar6,pauVar6[2],0x20);
    auVar29 = vperm2f128_avx(*pauVar6,pauVar6[2],0x31);
    auVar28 = vperm2f128_avx(pauVar6[1],pauVar6[3],0x20);
    auVar16 = vperm2f128_avx(pauVar6[1],pauVar6[3],0x31);
    auVar34 = vunpcklps_avx(auVar44,auVar29);
    auVar44 = vunpckhps_avx(auVar44,auVar29);
    auVar36 = vunpcklps_avx(auVar28,auVar16);
    auVar29 = vunpckhps_avx(auVar28,auVar16);
    auVar28 = vunpcklpd_avx(auVar34,auVar36);
    auVar34 = vunpckhpd_avx(auVar34,auVar36);
    auVar36 = vunpcklpd_avx(auVar44,auVar29);
    auVar44 = vunpckhpd_avx(auVar44,auVar29);
  }
  else {
    auVar28 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar17);
    auVar34 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar17);
    auVar36 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar17);
    auVar44 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar17);
  }
  auVar29 = vmaskmovps_avx(auVar17,auVar28);
  auVar34 = vmaskmovps_avx(auVar17,auVar34);
  auVar28 = vmaskmovps_avx(auVar17,auVar36);
  auVar36 = vcmpps_avx(auVar44,ZEXT832(0) << 0x20,4);
  auVar36 = auVar17 & auVar36;
  if ((((((((SUB321(auVar36 >> 0x1f,0) & 1) != 0 || (SUB321(auVar36 >> 0x3f,0) & 1) != 0) ||
          (SUB321(auVar36 >> 0x5f,0) & 1) != 0) || SUB321(auVar36 >> 0x7f,0) != '\0') ||
        (SUB321(auVar36 >> 0x9f,0) & 1) != 0) || SUB321(auVar36 >> 0xbf,0) != '\0') ||
      (SUB321(auVar36 >> 0xdf,0) & 1) != 0) || auVar36[0x1f] < '\0') {
    pauVar2 = (undefined1 (*) [32])(param_2 + lVar12 * 0xc);
    if ((char)iVar7 == -1) {
      auVar36 = pauVar2[1];
      auVar16 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar36);
      auVar33 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,*pauVar2);
      auVar16 = vblendps_avx(auVar33,auVar16,0x88);
      auVar33 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar36);
      auVar88 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,pauVar2[2]);
      auVar33 = vblendps_avx(auVar88,auVar33,0x13);
      auVar37._16_16_ = auVar33._0_16_;
      auVar37._0_16_ = auVar16._0_16_;
      auVar106 = vperm2f128_avx(auVar16,auVar33,0x31);
      auVar36 = vblendps_avx(auVar36,*pauVar2,0x24);
      auVar36 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar36);
      auVar16 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,pauVar2[2]);
      auVar88 = vblendps_avx(auVar36,auVar16,0xe0);
      auVar36 = *(undefined1 (*) [32])(param_3 + lVar12 * 0xc);
      auVar16 = *(undefined1 (*) [32])(param_3 + 0x20 + lVar12 * 0xc);
      auVar33 = *(undefined1 (*) [32])(param_3 + 0x40 + lVar12 * 0xc);
      auVar59 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar16);
      auVar18 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar36);
      auVar59 = vblendps_avx(auVar18,auVar59,0x88);
      auVar18 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar16);
      auVar74 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,auVar33);
      auVar18 = vblendps_avx(auVar74,auVar18,0x13);
      auVar62._16_16_ = auVar18._0_16_;
      auVar62._0_16_ = auVar59._0_16_;
      auVar59 = vperm2f128_avx(auVar59,auVar18,0x31);
      auVar36 = vblendps_avx(auVar16,auVar36,0x24);
      auVar36 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar36);
      auVar16 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,auVar33);
      auVar36 = vblendps_avx(auVar36,auVar16,0xe0);
    }
    else {
      auVar37 = vgatherdps(ZEXT832(0) << 0x20,auVar17);
      auVar106 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar17);
      auVar88 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar17);
      auVar62 = vgatherdps(ZEXT832(0),auVar17);
      auVar59 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar17);
      auVar36 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar17);
    }
    auVar16 = vmaskmovps_avx(auVar17,*(undefined1 (*) [32])(param_4 + (iVar9 << 2)));
    fVar64 = param_7 * auVar16._0_4_ + param_6;
    fVar67 = param_7 * auVar16._4_4_ + param_6;
    fVar68 = param_7 * auVar16._8_4_ + param_6;
    fVar69 = param_7 * auVar16._12_4_ + param_6;
    fVar70 = param_7 * auVar16._16_4_ + param_6;
    fVar71 = param_7 * auVar16._20_4_ + param_6;
    fVar72 = param_7 * auVar16._24_4_ + param_6;
    param_6 = param_7 * auVar16._28_4_ + param_6;
    auVar16 = vmaskmovps_avx(auVar17,*(undefined1 (*) [32])(param_5 + (iVar9 << 2)));
    auVar96._0_4_ = param_9 * auVar16._0_4_ + param_8;
    auVar96._4_4_ = param_9 * auVar16._4_4_ + param_8;
    auVar96._8_4_ = param_9 * auVar16._8_4_ + param_8;
    auVar96._12_4_ = param_9 * auVar16._12_4_ + param_8;
    auVar96._16_4_ = param_9 * auVar16._16_4_ + param_8;
    auVar96._20_4_ = param_9 * auVar16._20_4_ + param_8;
    auVar96._24_4_ = param_9 * auVar16._24_4_ + param_8;
    auVar96._28_4_ = param_9 * auVar16._28_4_ + param_8;
    fVar14 = fVar64 + auVar96._0_4_;
    fVar21 = fVar67 + auVar96._4_4_;
    fVar22 = fVar68 + auVar96._8_4_;
    fVar23 = fVar69 + auVar96._12_4_;
    fVar24 = fVar70 + auVar96._16_4_;
    fVar25 = fVar71 + auVar96._20_4_;
    fVar26 = fVar72 + auVar96._24_4_;
    fVar27 = param_6 + auVar96._28_4_;
    auVar75._0_4_ = -(auVar62._0_4_ * fVar14) + auVar37._0_4_;
    auVar75._4_4_ = -(auVar62._4_4_ * fVar21) + auVar37._4_4_;
    auVar75._8_4_ = -(auVar62._8_4_ * fVar22) + auVar37._8_4_;
    auVar75._12_4_ = -(auVar62._12_4_ * fVar23) + auVar37._12_4_;
    auVar75._16_4_ = -(auVar62._16_4_ * fVar24) + auVar37._16_4_;
    auVar75._20_4_ = -(auVar62._20_4_ * fVar25) + auVar37._20_4_;
    auVar75._24_4_ = -(auVar62._24_4_ * fVar26) + auVar37._24_4_;
    auVar75._28_4_ = -(auVar62._28_4_ * fVar27) + auVar37._28_4_;
    auVar45._0_4_ = -(auVar59._0_4_ * fVar14) + auVar106._0_4_;
    auVar45._4_4_ = -(auVar59._4_4_ * fVar21) + auVar106._4_4_;
    auVar45._8_4_ = -(auVar59._8_4_ * fVar22) + auVar106._8_4_;
    auVar45._12_4_ = -(auVar59._12_4_ * fVar23) + auVar106._12_4_;
    auVar45._16_4_ = -(auVar59._16_4_ * fVar24) + auVar106._16_4_;
    auVar45._20_4_ = -(auVar59._20_4_ * fVar25) + auVar106._20_4_;
    auVar45._24_4_ = -(auVar59._24_4_ * fVar26) + auVar106._24_4_;
    auVar45._28_4_ = -(auVar59._28_4_ * fVar27) + auVar106._28_4_;
    auVar79._0_4_ = -(auVar36._0_4_ * fVar14) + auVar88._0_4_;
    auVar79._4_4_ = -(auVar36._4_4_ * fVar21) + auVar88._4_4_;
    auVar79._8_4_ = -(auVar36._8_4_ * fVar22) + auVar88._8_4_;
    auVar79._12_4_ = -(auVar36._12_4_ * fVar23) + auVar88._12_4_;
    auVar79._16_4_ = -(auVar36._16_4_ * fVar24) + auVar88._16_4_;
    auVar79._20_4_ = -(auVar36._20_4_ * fVar25) + auVar88._20_4_;
    auVar79._24_4_ = -(auVar36._24_4_ * fVar26) + auVar88._24_4_;
    auVar79._28_4_ = -(auVar36._28_4_ * fVar27) + auVar88._28_4_;
    auVar29 = vsubps_avx(auVar29,auVar75);
    auVar34 = vsubps_avx(auVar34,auVar45);
    auVar28 = vsubps_avx(auVar28,auVar79);
    fVar14 = auVar34._0_4_;
    fVar21 = auVar34._4_4_;
    fVar22 = auVar34._8_4_;
    fVar23 = auVar34._12_4_;
    fVar24 = auVar34._16_4_;
    fVar25 = auVar34._20_4_;
    fVar26 = auVar34._24_4_;
    fVar27 = auVar34._28_4_;
    fVar86 = auVar29._0_4_;
    fVar97 = auVar29._4_4_;
    fVar98 = auVar29._8_4_;
    fVar99 = auVar29._12_4_;
    fVar100 = auVar29._16_4_;
    fVar101 = auVar29._20_4_;
    fVar102 = auVar29._24_4_;
    fVar103 = auVar29._28_4_;
    fVar31 = auVar28._0_4_;
    auVar29._0_4_ = fVar31 * fVar31 + fVar86 * fVar86 + fVar14 * fVar14;
    fVar42 = auVar28._4_4_;
    auVar29._4_4_ = fVar42 * fVar42 + fVar97 * fVar97 + fVar21 * fVar21;
    fVar47 = auVar28._8_4_;
    auVar29._8_4_ = fVar47 * fVar47 + fVar98 * fVar98 + fVar22 * fVar22;
    fVar48 = auVar28._12_4_;
    auVar29._12_4_ = fVar48 * fVar48 + fVar99 * fVar99 + fVar23 * fVar23;
    fVar49 = auVar28._16_4_;
    auVar29._16_4_ = fVar49 * fVar49 + fVar100 * fVar100 + fVar24 * fVar24;
    fVar50 = auVar28._20_4_;
    auVar29._20_4_ = fVar50 * fVar50 + fVar101 * fVar101 + fVar25 * fVar25;
    fVar52 = auVar28._24_4_;
    auVar29._24_4_ = fVar52 * fVar52 + fVar102 * fVar102 + fVar26 * fVar26;
    fVar53 = auVar28._28_4_;
    auVar29._28_4_ = fVar53 * fVar53 + fVar103 * fVar103 + fVar27 * fVar27;
    auVar34 = vsqrtps_avx(auVar29);
    auVar34 = vdivps_avx(auVar96,auVar34);
    fVar54 = auVar34._0_4_;
    fVar78 = auVar34._4_4_;
    fVar80 = auVar34._8_4_;
    fVar81 = auVar34._12_4_;
    fVar82 = auVar34._16_4_;
    fVar83 = auVar34._20_4_;
    fVar84 = auVar34._24_4_;
    fVar85 = auVar34._28_4_;
    auVar63._0_4_ = -(fVar64 * auVar62._0_4_) + auVar37._0_4_;
    auVar63._4_4_ = -(fVar67 * auVar62._4_4_) + auVar37._4_4_;
    auVar63._8_4_ = -(fVar68 * auVar62._8_4_) + auVar37._8_4_;
    auVar63._12_4_ = -(fVar69 * auVar62._12_4_) + auVar37._12_4_;
    auVar63._16_4_ = -(fVar70 * auVar62._16_4_) + auVar37._16_4_;
    auVar63._20_4_ = -(fVar71 * auVar62._20_4_) + auVar37._20_4_;
    auVar63._24_4_ = -(fVar72 * auVar62._24_4_) + auVar37._24_4_;
    auVar63._28_4_ = -(param_6 * auVar62._28_4_) + auVar37._28_4_;
    auVar38._0_4_ = auVar96._0_4_ * auVar96._0_4_;
    auVar38._4_4_ = auVar96._4_4_ * auVar96._4_4_;
    auVar38._8_4_ = auVar96._8_4_ * auVar96._8_4_;
    auVar38._12_4_ = auVar96._12_4_ * auVar96._12_4_;
    auVar38._16_4_ = auVar96._16_4_ * auVar96._16_4_;
    auVar38._20_4_ = auVar96._20_4_ * auVar96._20_4_;
    auVar38._24_4_ = auVar96._24_4_ * auVar96._24_4_;
    auVar38._28_4_ = auVar96._28_4_ * auVar96._28_4_;
    auVar34 = vcmpps_avx(auVar29,auVar38,1);
    auVar39._4_4_ = __real_322bcc77;
    auVar39._0_4_ = __real_322bcc77;
    auVar39._8_4_ = __real_322bcc77;
    auVar39._12_4_ = __real_322bcc77;
    auVar39._16_4_ = __real_322bcc77;
    auVar39._20_4_ = __real_322bcc77;
    auVar39._24_4_ = __real_322bcc77;
    auVar39._28_4_ = __real_322bcc77;
    auVar29 = vcmpps_avx(auVar29,auVar39,1);
    uVar11 = auVar34._0_4_;
    auVar40._0_4_ = uVar11 & (uint)(fVar54 * fVar86 + auVar75._0_4_);
    uVar87 = auVar34._4_4_;
    auVar40._4_4_ = uVar87 & (uint)(fVar78 * fVar97 + auVar75._4_4_);
    uVar89 = auVar34._8_4_;
    auVar40._8_4_ = uVar89 & (uint)(fVar80 * fVar98 + auVar75._8_4_);
    uVar90 = auVar34._12_4_;
    auVar40._12_4_ = uVar90 & (uint)(fVar81 * fVar99 + auVar75._12_4_);
    uVar91 = auVar34._16_4_;
    auVar40._16_4_ = uVar91 & (uint)(fVar82 * fVar100 + auVar75._16_4_);
    uVar92 = auVar34._20_4_;
    auVar40._20_4_ = uVar92 & (uint)(fVar83 * fVar101 + auVar75._20_4_);
    uVar93 = auVar34._24_4_;
    auVar40._24_4_ = uVar93 & (uint)(fVar84 * fVar102 + auVar75._24_4_);
    uVar94 = auVar34._28_4_;
    auVar40._28_4_ = uVar94 & (uint)(fVar85 * fVar103 + auVar75._28_4_);
    auVar34 = vblendvps_avx(auVar40,auVar63,auVar29);
    auVar28 = vcmpps_avx(auVar44,ZEXT432(0) << 0x20,4);
    auVar16 = vcmpps_avx(auVar34,ZEXT432(0) << 0x20,4);
    auVar18._0_4_ = auVar16._0_4_ & auVar28._0_4_ & auVar17._0_4_;
    auVar18._4_4_ = auVar16._4_4_ & auVar28._4_4_ & auVar17._4_4_;
    auVar18._8_4_ = auVar16._8_4_ & auVar28._8_4_ & auVar17._8_4_;
    auVar18._12_4_ = auVar16._12_4_ & auVar28._12_4_ & auVar17._12_4_;
    auVar18._16_4_ = auVar16._16_4_ & auVar28._16_4_ & auVar17._16_4_;
    auVar18._20_4_ = auVar16._20_4_ & auVar28._20_4_ & auVar17._20_4_;
    auVar18._24_4_ = auVar16._24_4_ & auVar28._24_4_ & auVar17._24_4_;
    auVar18._28_4_ = auVar16._28_4_ & auVar28._28_4_ & auVar17._28_4_;
    uVar5 = vmovmskps_avx(auVar18);
    if (uVar5 != 0) {
      auVar60._0_4_ = -(fVar64 * auVar59._0_4_) + auVar106._0_4_;
      auVar60._4_4_ = -(fVar67 * auVar59._4_4_) + auVar106._4_4_;
      auVar60._8_4_ = -(fVar68 * auVar59._8_4_) + auVar106._8_4_;
      auVar60._12_4_ = -(fVar69 * auVar59._12_4_) + auVar106._12_4_;
      auVar60._16_4_ = -(fVar70 * auVar59._16_4_) + auVar106._16_4_;
      auVar60._20_4_ = -(fVar71 * auVar59._20_4_) + auVar106._20_4_;
      auVar60._24_4_ = -(fVar72 * auVar59._24_4_) + auVar106._24_4_;
      auVar60._28_4_ = -(param_6 * auVar59._28_4_) + auVar106._28_4_;
      auVar56._0_4_ = -(fVar64 * auVar36._0_4_) + auVar88._0_4_;
      auVar56._4_4_ = -(fVar67 * auVar36._4_4_) + auVar88._4_4_;
      auVar56._8_4_ = -(fVar68 * auVar36._8_4_) + auVar88._8_4_;
      auVar56._12_4_ = -(fVar69 * auVar36._12_4_) + auVar88._12_4_;
      auVar56._16_4_ = -(fVar70 * auVar36._16_4_) + auVar88._16_4_;
      auVar56._20_4_ = -(fVar71 * auVar36._20_4_) + auVar88._20_4_;
      auVar56._24_4_ = -(fVar72 * auVar36._24_4_) + auVar88._24_4_;
      auVar56._28_4_ = -(param_6 * auVar36._28_4_) + auVar88._28_4_;
      auVar19._0_4_ = uVar11 & (uint)(fVar54 * fVar14 + auVar45._0_4_);
      auVar19._4_4_ = uVar87 & (uint)(fVar78 * fVar21 + auVar45._4_4_);
      auVar19._8_4_ = uVar89 & (uint)(fVar80 * fVar22 + auVar45._8_4_);
      auVar19._12_4_ = uVar90 & (uint)(fVar81 * fVar23 + auVar45._12_4_);
      auVar19._16_4_ = uVar91 & (uint)(fVar82 * fVar24 + auVar45._16_4_);
      auVar19._20_4_ = uVar92 & (uint)(fVar83 * fVar25 + auVar45._20_4_);
      auVar19._24_4_ = uVar93 & (uint)(fVar84 * fVar26 + auVar45._24_4_);
      auVar19._28_4_ = uVar94 & (uint)(fVar85 * fVar27 + auVar45._28_4_);
      auVar17 = vblendvps_avx(auVar19,auVar60,auVar29);
      auVar20._0_4_ = uVar11 & (uint)(fVar54 * fVar31 + auVar79._0_4_);
      auVar20._4_4_ = uVar87 & (uint)(fVar78 * fVar42 + auVar79._4_4_);
      auVar20._8_4_ = uVar89 & (uint)(fVar80 * fVar47 + auVar79._8_4_);
      auVar20._12_4_ = uVar90 & (uint)(fVar81 * fVar48 + auVar79._12_4_);
      auVar20._16_4_ = uVar91 & (uint)(fVar82 * fVar49 + auVar79._16_4_);
      auVar20._20_4_ = uVar92 & (uint)(fVar83 * fVar50 + auVar79._20_4_);
      auVar20._24_4_ = uVar93 & (uint)(fVar84 * fVar52 + auVar79._24_4_);
      auVar20._28_4_ = uVar94 & (uint)(fVar85 * fVar53 + auVar79._28_4_);
      auVar29 = vblendvps_avx(auVar20,auVar56,auVar29);
      cVar4 = (char)uVar5;
      if (cVar4 == -1) {
        auVar28 = vunpcklps_avx(auVar34,auVar17);
        auVar16 = vunpcklps_avx(auVar29,auVar44);
        auVar36 = vunpcklpd_avx(auVar28,auVar16);
        auVar28 = vunpckhpd_avx(auVar28,auVar16);
        auVar17 = vunpckhps_avx(auVar34,auVar17);
        auVar34 = vunpckhps_avx(auVar29,auVar44);
        auVar44 = vunpcklpd_avx(auVar17,auVar34);
        auVar46._16_16_ = auVar28._0_16_;
        auVar46._0_16_ = auVar36._0_16_;
        *pauVar6 = auVar46;
        auVar17 = vunpckhpd_avx(auVar17,auVar34);
        auVar30._16_16_ = auVar17._0_16_;
        auVar30._0_16_ = auVar44._0_16_;
        pauVar6[1] = auVar30;
        auVar34 = vperm2f128_avx(auVar36,auVar28,0x31);
        pauVar6[2] = auVar34;
        auVar17 = vperm2f128_avx(auVar44,auVar17,0x31);
        pauVar6[3] = auVar17;
      }
      else {
        auVar73 = auVar44._0_16_;
        auVar76 = auVar44._16_16_;
        auVar57 = auVar34._0_16_;
        auVar61 = auVar34._16_16_;
        auVar43 = auVar17._0_16_;
        auVar51 = auVar17._16_16_;
        auVar35 = auVar29._0_16_;
        auVar41 = auVar29._16_16_;
        if ((uVar5 & 1) != 0) {
          *(int *)*pauVar6 = auVar34._0_4_;
        }
        if ((uVar5 & 2) != 0) {
          uVar3 = vextractps_avx(auVar57,1);
          *(undefined4 *)(*pauVar6 + 0x10) = uVar3;
        }
        if ((uVar5 & 4) != 0) {
          uVar3 = vextractps_avx(auVar57,2);
          *(undefined4 *)pauVar6[1] = uVar3;
        }
        if ((uVar5 & 8) != 0) {
          uVar3 = vextractps_avx(auVar57,3);
          *(undefined4 *)(pauVar6[1] + 0x10) = uVar3;
        }
        if ((uVar5 & 0x10) != 0) {
          *(int *)pauVar6[2] = auVar34._16_4_;
        }
        if ((uVar5 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar61,1);
          *(undefined4 *)(pauVar6[2] + 0x10) = uVar3;
        }
        if ((uVar5 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar61,2);
          *(undefined4 *)pauVar6[3] = uVar3;
        }
        if (cVar4 < '\0') {
          uVar3 = vextractps_avx(auVar61,3);
          *(undefined4 *)(pauVar6[3] + 0x10) = uVar3;
        }
        if ((uVar5 & 1) != 0) {
          *(int *)(*pauVar6 + 4) = auVar17._0_4_;
        }
        if ((uVar5 & 2) != 0) {
          uVar3 = vextractps_avx(auVar43,1);
          *(undefined4 *)(*pauVar6 + 0x14) = uVar3;
        }
        if ((uVar5 & 4) != 0) {
          uVar3 = vextractps_avx(auVar43,2);
          *(undefined4 *)(pauVar6[1] + 4) = uVar3;
        }
        if ((uVar5 & 8) != 0) {
          uVar3 = vextractps_avx(auVar43,3);
          *(undefined4 *)(pauVar6[1] + 0x14) = uVar3;
        }
        if ((uVar5 & 0x10) != 0) {
          *(int *)(pauVar6[2] + 4) = auVar17._16_4_;
        }
        if ((uVar5 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar51,1);
          *(undefined4 *)(pauVar6[2] + 0x14) = uVar3;
        }
        if ((uVar5 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar51,2);
          *(undefined4 *)(pauVar6[3] + 4) = uVar3;
        }
        if (cVar4 < '\0') {
          uVar3 = vextractps_avx(auVar51,3);
          *(undefined4 *)(pauVar6[3] + 0x14) = uVar3;
        }
        if ((uVar5 & 1) != 0) {
          *(int *)(*pauVar6 + 8) = auVar29._0_4_;
        }
        if ((uVar5 & 2) != 0) {
          uVar3 = vextractps_avx(auVar35,1);
          *(undefined4 *)(*pauVar6 + 0x18) = uVar3;
        }
        if ((uVar5 & 4) != 0) {
          uVar3 = vextractps_avx(auVar35,2);
          *(undefined4 *)(pauVar6[1] + 8) = uVar3;
        }
        if ((uVar5 & 8) != 0) {
          uVar3 = vextractps_avx(auVar35,3);
          *(undefined4 *)(pauVar6[1] + 0x18) = uVar3;
        }
        if ((uVar5 & 0x10) != 0) {
          *(int *)(pauVar6[2] + 8) = auVar29._16_4_;
        }
        if ((uVar5 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar41,1);
          *(undefined4 *)(pauVar6[2] + 0x18) = uVar3;
        }
        if ((uVar5 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar41,2);
          *(undefined4 *)(pauVar6[3] + 8) = uVar3;
        }
        if (cVar4 < '\0') {
          uVar3 = vextractps_avx(auVar41,3);
          *(undefined4 *)(pauVar6[3] + 0x18) = uVar3;
        }
        if ((uVar5 & 1) != 0) {
          *(int *)(*pauVar6 + 0xc) = auVar44._0_4_;
        }
        if ((uVar5 & 2) != 0) {
          uVar3 = vextractps_avx(auVar73,1);
          *(undefined4 *)(*pauVar6 + 0x1c) = uVar3;
        }
        if ((uVar5 & 4) != 0) {
          uVar3 = vextractps_avx(auVar73,2);
          *(undefined4 *)(pauVar6[1] + 0xc) = uVar3;
        }
        if ((uVar5 & 8) != 0) {
          uVar3 = vextractps_avx(auVar73,3);
          *(undefined4 *)(pauVar6[1] + 0x1c) = uVar3;
        }
        if ((uVar5 & 0x10) != 0) {
          *(int *)(pauVar6[2] + 0xc) = auVar44._16_4_;
        }
        if ((uVar5 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar76,1);
          *(undefined4 *)(pauVar6[2] + 0x1c) = uVar3;
        }
        if ((uVar5 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar76,2);
          *(undefined4 *)(pauVar6[3] + 0xc) = uVar3;
        }
        if (cVar4 < '\0') {
          uVar3 = vextractps_avx(auVar76,3);
          *(undefined4 *)(pauVar6[3] + 0x1c) = uVar3;
        }
      }
    }
  }
  return;
}

// ApplySphericalBackstopConstraintsWithDistanceMap_avx2 @ 14032b160

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplySphericalBackstopConstraintsWithDistanceMap_avx2
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,float param_5,
               float param_6,float param_7,int param_8,uint param_9)

{
  float *pfVar1;
  undefined1 (*pauVar2) [32];
  undefined4 uVar3;
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  char cVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 (*pauVar10) [32];
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar24 [16];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  float fVar26;
  float fVar27;
  undefined1 auVar25 [32];
  float fVar28;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar29 [32];
  undefined1 auVar37 [16];
  undefined1 auVar40 [16];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [16];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar55 [16];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  float fVar56;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [16];
  undefined1 auVar76 [32];
  float fVar77;
  float fVar78;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  undefined1 auVar79 [32];
  undefined1 auVar87 [32];
  uint uVar88;
  uint uVar90;
  uint uVar91;
  uint uVar92;
  uint uVar93;
  uint uVar94;
  uint uVar95;
  undefined1 auVar89 [32];
  uint uVar96;
  undefined1 auVar97 [32];
  undefined1 auVar98 [64];
  float fVar99;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  undefined1 auVar100 [32];
  undefined1 local_2a0 [8];
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  
  uVar8 = param_9 + 7;
  if (-1 < (int)param_9) {
    uVar8 = param_9;
  }
  if ((int)(uVar8 & 0xfffffff8) < 1) {
    uVar9 = 0;
    if ((int)param_9 < 1) {
      return;
    }
  }
  else {
    fVar78 = param_7 * param_7;
    lVar12 = (longlong)param_8 * 0x10 + param_1;
    lVar11 = (longlong)param_8 * 0xc + 0x40;
    uVar14 = 0;
    auVar98 = ZEXT864(0);
    uVar9 = 0;
    do {
      auVar19 = *(undefined1 (*) [32])(lVar12 + uVar14 * 4);
      auVar29 = *(undefined1 (*) [32])(lVar12 + 0x20 + uVar14 * 4);
      auVar38 = *(undefined1 (*) [32])(lVar12 + 0x40 + uVar14 * 4);
      auVar21 = *(undefined1 (*) [32])(lVar12 + 0x60 + uVar14 * 4);
      auVar53 = vperm2f128_avx(auVar19,auVar38,0x20);
      auVar52 = vperm2f128_avx(auVar19,auVar38,0x31);
      auVar87 = vperm2f128_avx(auVar29,auVar21,0x20);
      auVar17 = vperm2f128_avx(auVar29,auVar21,0x31);
      auVar18 = vunpckhps_avx(auVar53,auVar52);
      auVar4 = vunpckhps_avx(auVar87,auVar17);
      auVar42 = vunpckhpd_avx(auVar18,auVar4);
      auVar20 = vcmpps_avx(auVar98._0_32_,auVar42,4);
      if ((((((((SUB321(auVar20 >> 0x1f,0) & 1) != 0 || (SUB321(auVar20 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar20 >> 0x5f,0) & 1) != 0) || SUB321(auVar20 >> 0x7f,0) != '\0') ||
            (SUB321(auVar20 >> 0x9f,0) & 1) != 0) || SUB321(auVar20 >> 0xbf,0) != '\0') ||
          (SUB321(auVar20 >> 0xdf,0) & 1) != 0) || auVar20[0x1f] < '\0') {
        auVar76 = vunpcklpd_avx(auVar18,auVar4);
        auVar18 = vunpcklps_avx(auVar53,auVar52);
        auVar4 = vunpcklps_avx(auVar87,auVar17);
        auVar48 = vunpckhpd_avx(auVar18,auVar4);
        auVar51 = vunpcklpd_avx(auVar18,auVar4);
        auVar18 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar11);
        auVar4 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar11);
        auVar53 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar4);
        auVar52 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,auVar18);
        auVar53 = vblendps_avx(auVar52,auVar53,0x88);
        auVar52 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar4);
        auVar87 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,*(undefined1 (*) [32])(param_2 + lVar11));
        auVar52 = vblendps_avx(auVar87,auVar52,0x13);
        auVar43 = vperm2f128_avx(auVar53,auVar52,0x31);
        auVar18 = vblendps_avx(auVar4,auVar18,0x24);
        auVar18 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar18);
        auVar4 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                              ,*(undefined1 (*) [32])(param_2 + lVar11));
        auVar87 = vblendps_avx(auVar18,auVar4,0xe0);
        auVar18 = *(undefined1 (*) [32])(param_3 + -0x40 + lVar11);
        auVar4 = *(undefined1 (*) [32])(param_3 + -0x20 + lVar11);
        auVar17 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar4);
        auVar73 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,auVar18);
        auVar17 = vblendps_avx(auVar73,auVar17,0x88);
        auVar73 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar4);
        auVar57 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,*(undefined1 (*) [32])(param_3 + lVar11));
        auVar73 = vblendps_avx(auVar57,auVar73,0x13);
        auVar57 = vperm2f128_avx(auVar17,auVar73,0x31);
        auVar18 = vblendps_avx(auVar4,auVar18,0x24);
        auVar18 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar18);
        auVar4 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                              ,*(undefined1 (*) [32])(param_3 + lVar11));
        auVar18 = vblendps_avx(auVar18,auVar4,0xe0);
        pfVar1 = (float *)(param_4 + (uVar14 & 0xffffffff));
        fVar56 = param_6 * *pfVar1 + param_5;
        fVar59 = param_6 * pfVar1[1] + param_5;
        fVar60 = param_6 * pfVar1[2] + param_5;
        fVar61 = param_6 * pfVar1[3] + param_5;
        fVar62 = param_6 * pfVar1[4] + param_5;
        fVar63 = param_6 * pfVar1[5] + param_5;
        fVar64 = param_6 * pfVar1[6] + param_5;
        fVar65 = param_6 * pfVar1[7] + param_5;
        auVar5._4_4_ = param_7;
        auVar5._0_4_ = param_7;
        auVar5._8_4_ = param_7;
        auVar5._12_4_ = param_7;
        auVar5._16_4_ = param_7;
        auVar5._20_4_ = param_7;
        auVar5._24_4_ = param_7;
        auVar5._28_4_ = param_7;
        fVar99 = param_7 + fVar56;
        fVar101 = param_7 + fVar59;
        fVar102 = param_7 + fVar60;
        fVar103 = param_7 + fVar61;
        fVar104 = param_7 + fVar62;
        fVar105 = param_7 + fVar63;
        fVar106 = param_7 + fVar64;
        fVar107 = param_7 + fVar65;
        auVar97._0_4_ = -(auVar17._0_4_ * fVar99) + auVar53._0_4_;
        auVar97._4_4_ = -(auVar17._4_4_ * fVar101) + auVar53._4_4_;
        auVar97._8_4_ = -(auVar17._8_4_ * fVar102) + auVar53._8_4_;
        auVar97._12_4_ = -(auVar17._12_4_ * fVar103) + auVar53._12_4_;
        auVar97._16_4_ = -(auVar73._0_4_ * fVar104) + auVar52._0_4_;
        auVar97._20_4_ = -(auVar73._4_4_ * fVar105) + auVar52._4_4_;
        auVar97._24_4_ = -(auVar73._8_4_ * fVar106) + auVar52._8_4_;
        auVar97._28_4_ = -(auVar73._12_4_ * fVar107) + auVar52._12_4_;
        auVar41._0_4_ = -(auVar57._0_4_ * fVar99) + auVar43._0_4_;
        auVar41._4_4_ = -(auVar57._4_4_ * fVar101) + auVar43._4_4_;
        auVar41._8_4_ = -(auVar57._8_4_ * fVar102) + auVar43._8_4_;
        auVar41._12_4_ = -(auVar57._12_4_ * fVar103) + auVar43._12_4_;
        auVar41._16_4_ = -(auVar57._16_4_ * fVar104) + auVar43._16_4_;
        auVar41._20_4_ = -(auVar57._20_4_ * fVar105) + auVar43._20_4_;
        auVar41._24_4_ = -(auVar57._24_4_ * fVar106) + auVar43._24_4_;
        auVar41._28_4_ = -(auVar57._28_4_ * fVar107) + auVar43._28_4_;
        auVar100._0_4_ = -(auVar18._0_4_ * fVar99) + auVar87._0_4_;
        auVar100._4_4_ = -(auVar18._4_4_ * fVar101) + auVar87._4_4_;
        auVar100._8_4_ = -(auVar18._8_4_ * fVar102) + auVar87._8_4_;
        auVar100._12_4_ = -(auVar18._12_4_ * fVar103) + auVar87._12_4_;
        auVar100._16_4_ = -(auVar18._16_4_ * fVar104) + auVar87._16_4_;
        auVar100._20_4_ = -(auVar18._20_4_ * fVar105) + auVar87._20_4_;
        auVar100._24_4_ = -(auVar18._24_4_ * fVar106) + auVar87._24_4_;
        auVar100._28_4_ = -(auVar18._28_4_ * fVar107) + auVar87._28_4_;
        auVar4 = vsubps_avx(auVar51,auVar97);
        auVar48 = vsubps_avx(auVar48,auVar41);
        auVar76 = vsubps_avx(auVar76,auVar100);
        fVar99 = auVar48._0_4_;
        fVar101 = auVar48._4_4_;
        fVar102 = auVar48._8_4_;
        fVar103 = auVar48._12_4_;
        fVar104 = auVar48._16_4_;
        fVar105 = auVar48._20_4_;
        fVar106 = auVar48._24_4_;
        fVar107 = auVar48._28_4_;
        fVar28 = auVar4._0_4_;
        fVar30 = auVar4._4_4_;
        fVar31 = auVar4._8_4_;
        fVar32 = auVar4._12_4_;
        fVar33 = auVar4._16_4_;
        fVar34 = auVar4._20_4_;
        fVar35 = auVar4._24_4_;
        fVar36 = auVar4._28_4_;
        fVar77 = auVar76._0_4_;
        auVar51._0_4_ = fVar77 * fVar77 + fVar28 * fVar28 + fVar99 * fVar99;
        fVar80 = auVar76._4_4_;
        auVar51._4_4_ = fVar80 * fVar80 + fVar30 * fVar30 + fVar101 * fVar101;
        fVar81 = auVar76._8_4_;
        auVar51._8_4_ = fVar81 * fVar81 + fVar31 * fVar31 + fVar102 * fVar102;
        fVar82 = auVar76._12_4_;
        auVar51._12_4_ = fVar82 * fVar82 + fVar32 * fVar32 + fVar103 * fVar103;
        fVar83 = auVar76._16_4_;
        auVar51._16_4_ = fVar83 * fVar83 + fVar33 * fVar33 + fVar104 * fVar104;
        fVar84 = auVar76._20_4_;
        auVar51._20_4_ = fVar84 * fVar84 + fVar34 * fVar34 + fVar105 * fVar105;
        fVar85 = auVar76._24_4_;
        auVar51._24_4_ = fVar85 * fVar85 + fVar35 * fVar35 + fVar106 * fVar106;
        fVar86 = auVar76._28_4_;
        auVar51._28_4_ = fVar86 * fVar86 + fVar36 * fVar36 + fVar107 * fVar107;
        auVar4 = vsqrtps_avx(auVar51);
        auVar4 = vdivps_avx(auVar5,auVar4);
        fVar66 = auVar4._0_4_;
        fVar67 = auVar4._4_4_;
        fVar68 = auVar4._8_4_;
        fVar69 = auVar4._12_4_;
        fVar70 = auVar4._16_4_;
        fVar71 = auVar4._20_4_;
        fVar26 = auVar4._24_4_;
        fVar27 = auVar4._28_4_;
        auVar48._0_4_ = -(fVar56 * auVar17._0_4_) + auVar53._0_4_;
        auVar48._4_4_ = -(fVar59 * auVar17._4_4_) + auVar53._4_4_;
        auVar48._8_4_ = -(fVar60 * auVar17._8_4_) + auVar53._8_4_;
        auVar48._12_4_ = -(fVar61 * auVar17._12_4_) + auVar53._12_4_;
        auVar48._16_4_ = -(fVar62 * auVar73._0_4_) + auVar52._0_4_;
        auVar48._20_4_ = -(fVar63 * auVar73._4_4_) + auVar52._4_4_;
        auVar48._24_4_ = -(fVar64 * auVar73._8_4_) + auVar52._8_4_;
        auVar48._28_4_ = -(fVar65 * auVar73._12_4_) + auVar52._12_4_;
        auVar53._4_4_ = __real_322bcc77;
        auVar53._0_4_ = __real_322bcc77;
        auVar53._8_4_ = __real_322bcc77;
        auVar53._12_4_ = __real_322bcc77;
        auVar53._16_4_ = __real_322bcc77;
        auVar53._20_4_ = __real_322bcc77;
        auVar53._24_4_ = __real_322bcc77;
        auVar53._28_4_ = __real_322bcc77;
        auVar53 = vcmpps_avx(auVar51,auVar53,1);
        auVar4._4_4_ = fVar78;
        auVar4._0_4_ = fVar78;
        auVar4._8_4_ = fVar78;
        auVar4._12_4_ = fVar78;
        auVar4._16_4_ = fVar78;
        auVar4._20_4_ = fVar78;
        auVar4._24_4_ = fVar78;
        auVar4._28_4_ = fVar78;
        auVar4 = vcmpps_avx(auVar51,auVar4,1);
        uVar88 = auVar4._0_4_;
        auVar52._0_4_ = (uint)(fVar66 * fVar28 + auVar97._0_4_) & uVar88;
        uVar90 = auVar4._4_4_;
        auVar52._4_4_ = (uint)(fVar67 * fVar30 + auVar97._4_4_) & uVar90;
        uVar91 = auVar4._8_4_;
        auVar52._8_4_ = (uint)(fVar68 * fVar31 + auVar97._8_4_) & uVar91;
        uVar92 = auVar4._12_4_;
        auVar52._12_4_ = (uint)(fVar69 * fVar32 + auVar97._12_4_) & uVar92;
        uVar93 = auVar4._16_4_;
        auVar52._16_4_ = (uint)(fVar70 * fVar33 + auVar97._16_4_) & uVar93;
        uVar94 = auVar4._20_4_;
        auVar52._20_4_ = (uint)(fVar71 * fVar34 + auVar97._20_4_) & uVar94;
        uVar95 = auVar4._24_4_;
        auVar52._24_4_ = (uint)(fVar26 * fVar35 + auVar97._24_4_) & uVar95;
        uVar96 = auVar4._28_4_;
        auVar52._28_4_ = (uint)(fVar27 * fVar36 + auVar97._28_4_) & uVar96;
        auVar98 = ZEXT1264(ZEXT412(0)) << 0x20;
        auVar4 = vblendvps_avx(auVar52,auVar48,auVar53);
        auVar52 = vcmpps_avx(ZEXT1232(ZEXT412(0)) << 0x20,auVar4,4);
        auVar17._0_4_ = auVar52._0_4_ & auVar20._0_4_;
        auVar17._4_4_ = auVar52._4_4_ & auVar20._4_4_;
        auVar17._8_4_ = auVar52._8_4_ & auVar20._8_4_;
        auVar17._12_4_ = auVar52._12_4_ & auVar20._12_4_;
        auVar17._16_4_ = auVar52._16_4_ & auVar20._16_4_;
        auVar17._20_4_ = auVar52._20_4_ & auVar20._20_4_;
        auVar17._24_4_ = auVar52._24_4_ & auVar20._24_4_;
        auVar17._28_4_ = auVar52._28_4_ & auVar20._28_4_;
        uVar15 = vmovmskps_avx(auVar17);
        if (uVar15 != 0) {
          auVar73._0_4_ = -(fVar56 * auVar57._0_4_) + auVar43._0_4_;
          auVar73._4_4_ = -(fVar59 * auVar57._4_4_) + auVar43._4_4_;
          auVar73._8_4_ = -(fVar60 * auVar57._8_4_) + auVar43._8_4_;
          auVar73._12_4_ = -(fVar61 * auVar57._12_4_) + auVar43._12_4_;
          auVar73._16_4_ = -(fVar62 * auVar57._16_4_) + auVar43._16_4_;
          auVar73._20_4_ = -(fVar63 * auVar57._20_4_) + auVar43._20_4_;
          auVar73._24_4_ = -(fVar64 * auVar57._24_4_) + auVar43._24_4_;
          auVar73._28_4_ = -(fVar65 * auVar57._28_4_) + auVar43._28_4_;
          auVar76._0_4_ = -(fVar56 * auVar18._0_4_) + auVar87._0_4_;
          auVar76._4_4_ = -(fVar59 * auVar18._4_4_) + auVar87._4_4_;
          auVar76._8_4_ = -(fVar60 * auVar18._8_4_) + auVar87._8_4_;
          auVar76._12_4_ = -(fVar61 * auVar18._12_4_) + auVar87._12_4_;
          auVar76._16_4_ = -(fVar62 * auVar18._16_4_) + auVar87._16_4_;
          auVar76._20_4_ = -(fVar63 * auVar18._20_4_) + auVar87._20_4_;
          auVar76._24_4_ = -(fVar64 * auVar18._24_4_) + auVar87._24_4_;
          auVar76._28_4_ = -(fVar65 * auVar18._28_4_) + auVar87._28_4_;
          auVar20._0_4_ = (uint)(fVar66 * fVar99 + auVar41._0_4_) & uVar88;
          auVar20._4_4_ = (uint)(fVar67 * fVar101 + auVar41._4_4_) & uVar90;
          auVar20._8_4_ = (uint)(fVar68 * fVar102 + auVar41._8_4_) & uVar91;
          auVar20._12_4_ = (uint)(fVar69 * fVar103 + auVar41._12_4_) & uVar92;
          auVar20._16_4_ = (uint)(fVar70 * fVar104 + auVar41._16_4_) & uVar93;
          auVar20._20_4_ = (uint)(fVar71 * fVar105 + auVar41._20_4_) & uVar94;
          auVar20._24_4_ = (uint)(fVar26 * fVar106 + auVar41._24_4_) & uVar95;
          auVar20._28_4_ = (uint)(fVar27 * fVar107 + auVar41._28_4_) & uVar96;
          auVar20 = vblendvps_avx(auVar20,auVar73,auVar53);
          auVar18._0_4_ = (uint)(fVar66 * fVar77 + auVar100._0_4_) & uVar88;
          auVar18._4_4_ = (uint)(fVar67 * fVar80 + auVar100._4_4_) & uVar90;
          auVar18._8_4_ = (uint)(fVar68 * fVar81 + auVar100._8_4_) & uVar91;
          auVar18._12_4_ = (uint)(fVar69 * fVar82 + auVar100._12_4_) & uVar92;
          auVar18._16_4_ = (uint)(fVar70 * fVar83 + auVar100._16_4_) & uVar93;
          auVar18._20_4_ = (uint)(fVar71 * fVar84 + auVar100._20_4_) & uVar94;
          auVar18._24_4_ = (uint)(fVar26 * fVar85 + auVar100._24_4_) & uVar95;
          auVar18._28_4_ = (uint)(fVar27 * fVar86 + auVar100._28_4_) & uVar96;
          auVar18 = vblendvps_avx(auVar18,auVar76,auVar53);
          cVar6 = (char)uVar15;
          if (cVar6 == -1) {
            auVar19 = vunpcklps_avx(auVar4,auVar20);
            auVar29 = vunpcklps_avx(auVar18,auVar42);
            auVar21 = vunpcklpd_avx(auVar19,auVar29);
            auVar19 = vunpckhpd_avx(auVar19,auVar29);
            auVar29 = vunpckhps_avx(auVar4,auVar20);
            auVar38 = vunpckhps_avx(auVar18,auVar42);
            auVar20 = vunpcklpd_avx(auVar29,auVar38);
            auVar42._16_16_ = auVar19._0_16_;
            auVar42._0_16_ = auVar21._0_16_;
            *(undefined1 (*) [32])(lVar12 + uVar14 * 4) = auVar42;
            auVar29 = vunpckhpd_avx(auVar29,auVar38);
            auVar38._16_16_ = auVar29._0_16_;
            auVar38._0_16_ = auVar20._0_16_;
            *(undefined1 (*) [32])(lVar12 + 0x20 + uVar14 * 4) = auVar38;
            auVar19 = vperm2f128_avx(auVar21,auVar19,0x31);
            *(undefined1 (*) [32])(lVar12 + 0x40 + uVar14 * 4) = auVar19;
            auVar19 = vperm2f128_avx(auVar20,auVar29,0x31);
            *(undefined1 (*) [32])(lVar12 + 0x60 + uVar14 * 4) = auVar19;
          }
          else {
            auVar50 = auVar4._0_16_;
            auVar55 = auVar4._16_16_;
            auVar37 = auVar20._0_16_;
            auVar40 = auVar20._16_16_;
            auVar16 = auVar18._0_16_;
            auVar24 = auVar18._16_16_;
            if ((uVar15 & 1) != 0) {
              *(int *)(lVar12 + uVar14 * 4) = auVar4._0_4_;
            }
            if ((uVar15 & 2) != 0) {
              uVar3 = vextractps_avx(auVar50,1);
              *(undefined4 *)(lVar12 + 0x10 + uVar14 * 4) = uVar3;
            }
            if ((uVar15 & 4) != 0) {
              uVar3 = vextractps_avx(auVar50,2);
              *(undefined4 *)(lVar12 + 0x20 + uVar14 * 4) = uVar3;
            }
            if ((uVar15 & 8) != 0) {
              uVar3 = vextractps_avx(auVar50,3);
              *(undefined4 *)(lVar12 + 0x30 + uVar14 * 4) = uVar3;
            }
            if ((uVar15 & 0x10) != 0) {
              *(int *)(lVar12 + 0x40 + uVar14 * 4) = auVar4._16_4_;
            }
            if ((uVar15 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar55,1);
              *(undefined4 *)(lVar12 + 0x50 + uVar14 * 4) = uVar3;
            }
            if ((uVar15 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar55,2);
              *(undefined4 *)(lVar12 + 0x60 + uVar14 * 4) = uVar3;
            }
            if (cVar6 < '\0') {
              uVar3 = vextractps_avx(auVar55,3);
              *(undefined4 *)(lVar12 + 0x70 + uVar14 * 4) = uVar3;
            }
            if ((uVar15 & 1) != 0) {
              *(int *)(lVar12 + 4 + uVar14 * 4) = auVar20._0_4_;
            }
            if ((uVar15 & 2) != 0) {
              uVar3 = vextractps_avx(auVar37,1);
              *(undefined4 *)(lVar12 + 0x14 + uVar14 * 4) = uVar3;
            }
            if ((uVar15 & 4) != 0) {
              uVar3 = vextractps_avx(auVar37,2);
              *(undefined4 *)(lVar12 + 0x24 + uVar14 * 4) = uVar3;
            }
            if ((uVar15 & 8) != 0) {
              uVar3 = vextractps_avx(auVar37,3);
              *(undefined4 *)(lVar12 + 0x34 + uVar14 * 4) = uVar3;
            }
            if ((uVar15 & 0x10) != 0) {
              *(int *)(lVar12 + 0x44 + uVar14 * 4) = auVar20._16_4_;
            }
            if ((uVar15 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar40,1);
              *(undefined4 *)(lVar12 + 0x54 + uVar14 * 4) = uVar3;
            }
            if ((uVar15 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar40,2);
              *(undefined4 *)(lVar12 + 100 + uVar14 * 4) = uVar3;
            }
            if (cVar6 < '\0') {
              uVar3 = vextractps_avx(auVar40,3);
              *(undefined4 *)(lVar12 + 0x74 + uVar14 * 4) = uVar3;
            }
            if ((uVar15 & 1) != 0) {
              *(int *)(lVar12 + 8 + uVar14 * 4) = auVar18._0_4_;
            }
            if ((uVar15 & 2) != 0) {
              uVar3 = vextractps_avx(auVar16,1);
              *(undefined4 *)(lVar12 + 0x18 + uVar14 * 4) = uVar3;
            }
            if ((uVar15 & 4) != 0) {
              uVar3 = vextractps_avx(auVar16,2);
              *(undefined4 *)(lVar12 + 0x28 + uVar14 * 4) = uVar3;
            }
            if ((uVar15 & 8) != 0) {
              uVar3 = vextractps_avx(auVar16,3);
              *(undefined4 *)(lVar12 + 0x38 + uVar14 * 4) = uVar3;
            }
            if ((uVar15 & 0x10) != 0) {
              *(int *)(lVar12 + 0x48 + uVar14 * 4) = auVar18._16_4_;
            }
            if ((uVar15 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar24,1);
              *(undefined4 *)(lVar12 + 0x58 + uVar14 * 4) = uVar3;
            }
            if ((uVar15 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar24,2);
              *(undefined4 *)(lVar12 + 0x68 + uVar14 * 4) = uVar3;
            }
            if (cVar6 < '\0') {
              uVar3 = vextractps_avx(auVar24,3);
              *(undefined4 *)(lVar12 + 0x78 + uVar14 * 4) = uVar3;
            }
            if ((uVar15 & 1) != 0) {
              uVar3 = vextractps_avx(auVar19._0_16_,3);
              *(undefined4 *)(lVar12 + 0xc + uVar14 * 4) = uVar3;
            }
            if ((uVar15 & 2) != 0) {
              uVar3 = vextractps_avx(auVar19._16_16_,3);
              *(undefined4 *)(lVar12 + 0x1c + uVar14 * 4) = uVar3;
            }
            if ((uVar15 & 4) != 0) {
              uVar3 = vextractps_avx(auVar29._0_16_,3);
              *(undefined4 *)(lVar12 + 0x2c + uVar14 * 4) = uVar3;
            }
            if ((uVar15 & 8) != 0) {
              uVar3 = vextractps_avx(auVar29._16_16_,3);
              *(undefined4 *)(lVar12 + 0x3c + uVar14 * 4) = uVar3;
            }
            if ((uVar15 & 0x10) != 0) {
              uVar3 = vextractps_avx(auVar38._0_16_,3);
              *(undefined4 *)(lVar12 + 0x4c + uVar14 * 4) = uVar3;
            }
            if ((uVar15 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar38._16_16_,3);
              *(undefined4 *)(lVar12 + 0x5c + uVar14 * 4) = uVar3;
            }
            if ((uVar15 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar21._0_16_,3);
              *(undefined4 *)(lVar12 + 0x6c + uVar14 * 4) = uVar3;
            }
            if (cVar6 < '\0') {
              uVar3 = vextractps_avx(auVar21._16_16_,3);
              *(undefined4 *)(lVar12 + 0x7c + uVar14 * 4) = uVar3;
            }
          }
        }
      }
      uVar9 = uVar9 + 8;
      uVar14 = uVar14 + 0x20;
      lVar11 = lVar11 + 0x60;
    } while (uVar9 < (uVar8 & 0xfffffff8));
    if ((int)param_9 <= (int)uVar9) {
      return;
    }
  }
  iVar7 = (int)uVar9;
  auVar19._4_4_ = iVar7;
  auVar19._0_4_ = iVar7;
  auVar19._8_4_ = iVar7;
  auVar19._12_4_ = iVar7;
  auVar19._16_4_ = iVar7;
  auVar19._20_4_ = iVar7;
  auVar19._24_4_ = iVar7;
  auVar19._28_4_ = iVar7;
  auVar19 = vpor_avx2(auVar19,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar29._4_4_ = param_9;
  auVar29._0_4_ = param_9;
  auVar29._8_4_ = param_9;
  auVar29._12_4_ = param_9;
  auVar29._16_4_ = param_9;
  auVar29._20_4_ = param_9;
  auVar29._24_4_ = param_9;
  auVar29._28_4_ = param_9;
  auVar19 = vpcmpgtd_avx2(auVar29,auVar19);
  lVar11 = (longlong)(param_8 + iVar7);
  pauVar10 = (undefined1 (*) [32])(param_1 + lVar11 * 0x10);
  iVar13 = vmovmskps_avx(auVar19);
  if (iVar13 == 0xff) {
    auVar38 = vperm2f128_avx(*pauVar10,pauVar10[2],0x20);
    auVar21 = vperm2f128_avx(*pauVar10,pauVar10[2],0x31);
    auVar20 = vperm2f128_avx(pauVar10[1],pauVar10[3],0x20);
    auVar18 = vperm2f128_avx(pauVar10[1],pauVar10[3],0x31);
    auVar29 = vunpcklps_avx(auVar38,auVar21);
    auVar38 = vunpckhps_avx(auVar38,auVar21);
    auVar42 = vunpcklps_avx(auVar20,auVar18);
    auVar21 = vunpckhps_avx(auVar20,auVar18);
    auVar20 = vunpcklpd_avx(auVar29,auVar42);
    auVar29 = vunpckhpd_avx(auVar29,auVar42);
    auVar42 = vunpcklpd_avx(auVar38,auVar21);
    auVar38 = vunpckhpd_avx(auVar38,auVar21);
  }
  else {
    auVar20 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar19);
    auVar29 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar19);
    auVar42 = vgatherdps(ZEXT832(0),auVar19);
    auVar38 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar19);
  }
  auVar21 = vmaskmovps_avx(auVar19,auVar20);
  auVar29 = vmaskmovps_avx(auVar19,auVar29);
  auVar20 = vmaskmovps_avx(auVar19,auVar42);
  auVar42 = vcmpps_avx(auVar38,ZEXT832(0) << 0x20,4);
  auVar42 = auVar19 & auVar42;
  if ((((((((SUB321(auVar42 >> 0x1f,0) & 1) != 0 || (SUB321(auVar42 >> 0x3f,0) & 1) != 0) ||
          (SUB321(auVar42 >> 0x5f,0) & 1) != 0) || SUB321(auVar42 >> 0x7f,0) != '\0') ||
        (SUB321(auVar42 >> 0x9f,0) & 1) != 0) || SUB321(auVar42 >> 0xbf,0) != '\0') ||
      (SUB321(auVar42 >> 0xdf,0) & 1) != 0) || auVar42[0x1f] < '\0') {
    pauVar2 = (undefined1 (*) [32])(param_2 + lVar11 * 0xc);
    if ((char)iVar13 == -1) {
      auVar42 = pauVar2[1];
      auVar18 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar42);
      auVar4 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                            *pauVar2);
      auVar18 = vblendps_avx(auVar4,auVar18,0x88);
      auVar4 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004,
                            auVar42);
      auVar53 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,pauVar2[2]);
      auVar4 = vblendps_avx(auVar53,auVar4,0x13);
      auVar43._16_16_ = auVar4._0_16_;
      auVar43._0_16_ = auVar18._0_16_;
      auVar87 = vperm2f128_avx(auVar18,auVar4,0x31);
      auVar42 = vblendps_avx(auVar42,*pauVar2,0x24);
      auVar42 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar42);
      auVar18 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,pauVar2[2]);
      _local_2a0 = vblendps_avx(auVar42,auVar18,0xe0);
      auVar42 = *(undefined1 (*) [32])(param_3 + lVar11 * 0xc);
      auVar18 = *(undefined1 (*) [32])(param_3 + 0x20 + lVar11 * 0xc);
      auVar4 = *(undefined1 (*) [32])(param_3 + 0x40 + lVar11 * 0xc);
      auVar53 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar18);
      auVar52 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar42);
      auVar53 = vblendps_avx(auVar52,auVar53,0x88);
      auVar52 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar18);
      auVar17 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,auVar4);
      auVar52 = vblendps_avx(auVar17,auVar52,0x13);
      auVar57._16_16_ = auVar52._0_16_;
      auVar57._0_16_ = auVar53._0_16_;
      auVar53 = vperm2f128_avx(auVar53,auVar52,0x31);
      auVar42 = vblendps_avx(auVar18,auVar42,0x24);
      auVar42 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar42);
      auVar18 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,auVar4);
      auVar42 = vblendps_avx(auVar42,auVar18,0xe0);
    }
    else {
      auVar43 = vgatherdps(ZEXT832(0) << 0x20,auVar19);
      auVar87 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar19);
      _local_2a0 = vgatherdps(ZEXT832(0),auVar19);
      auVar57 = vgatherdps(ZEXT832(0),auVar19);
      auVar53 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar19);
      auVar42 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar19);
    }
    auVar18 = vmaskmovps_avx(auVar19,*(undefined1 (*) [32])(param_4 + (iVar7 << 2)));
    fVar107 = param_6 * auVar18._0_4_ + param_5;
    fVar66 = param_6 * auVar18._4_4_ + param_5;
    fVar67 = param_6 * auVar18._8_4_ + param_5;
    fVar68 = param_6 * auVar18._12_4_ + param_5;
    fVar69 = param_6 * auVar18._16_4_ + param_5;
    fVar70 = param_6 * auVar18._20_4_ + param_5;
    fVar71 = param_6 * auVar18._24_4_ + param_5;
    param_5 = param_6 * auVar18._28_4_ + param_5;
    auVar89._4_4_ = param_7;
    auVar89._0_4_ = param_7;
    auVar89._8_4_ = param_7;
    auVar89._12_4_ = param_7;
    auVar89._16_4_ = param_7;
    auVar89._20_4_ = param_7;
    auVar89._24_4_ = param_7;
    auVar89._28_4_ = param_7;
    fVar78 = param_7 + fVar107;
    fVar99 = param_7 + fVar66;
    fVar101 = param_7 + fVar67;
    fVar102 = param_7 + fVar68;
    fVar103 = param_7 + fVar69;
    fVar104 = param_7 + fVar70;
    fVar105 = param_7 + fVar71;
    fVar106 = param_7 + param_5;
    auVar74._0_4_ = -(auVar57._0_4_ * fVar78) + auVar43._0_4_;
    auVar74._4_4_ = -(auVar57._4_4_ * fVar99) + auVar43._4_4_;
    auVar74._8_4_ = -(auVar57._8_4_ * fVar101) + auVar43._8_4_;
    auVar74._12_4_ = -(auVar57._12_4_ * fVar102) + auVar43._12_4_;
    auVar74._16_4_ = -(auVar57._16_4_ * fVar103) + auVar43._16_4_;
    auVar74._20_4_ = -(auVar57._20_4_ * fVar104) + auVar43._20_4_;
    auVar74._24_4_ = -(auVar57._24_4_ * fVar105) + auVar43._24_4_;
    auVar74._28_4_ = -(auVar57._28_4_ * fVar106) + auVar43._28_4_;
    auVar39._0_4_ = -(auVar53._0_4_ * fVar78) + auVar87._0_4_;
    auVar39._4_4_ = -(auVar53._4_4_ * fVar99) + auVar87._4_4_;
    auVar39._8_4_ = -(auVar53._8_4_ * fVar101) + auVar87._8_4_;
    auVar39._12_4_ = -(auVar53._12_4_ * fVar102) + auVar87._12_4_;
    auVar39._16_4_ = -(auVar53._16_4_ * fVar103) + auVar87._16_4_;
    auVar39._20_4_ = -(auVar53._20_4_ * fVar104) + auVar87._20_4_;
    auVar39._24_4_ = -(auVar53._24_4_ * fVar105) + auVar87._24_4_;
    auVar39._28_4_ = -(auVar53._28_4_ * fVar106) + auVar87._28_4_;
    auVar79._0_4_ = -(auVar42._0_4_ * fVar78) + (float)local_2a0._0_4_;
    auVar79._4_4_ = -(auVar42._4_4_ * fVar99) + (float)local_2a0._4_4_;
    auVar79._8_4_ = -(auVar42._8_4_ * fVar101) + fStack_298;
    auVar79._12_4_ = -(auVar42._12_4_ * fVar102) + fStack_294;
    auVar79._16_4_ = -(auVar42._16_4_ * fVar103) + fStack_290;
    auVar79._20_4_ = -(auVar42._20_4_ * fVar104) + fStack_28c;
    auVar79._24_4_ = -(auVar42._24_4_ * fVar105) + fStack_288;
    auVar79._28_4_ = -(auVar42._28_4_ * fVar106) + fStack_284;
    auVar21 = vsubps_avx(auVar21,auVar74);
    auVar29 = vsubps_avx(auVar29,auVar39);
    auVar20 = vsubps_avx(auVar20,auVar79);
    fVar78 = auVar29._0_4_;
    fVar99 = auVar29._4_4_;
    fVar101 = auVar29._8_4_;
    fVar102 = auVar29._12_4_;
    fVar103 = auVar29._16_4_;
    fVar104 = auVar29._20_4_;
    fVar105 = auVar29._24_4_;
    fVar106 = auVar29._28_4_;
    fVar64 = auVar21._0_4_;
    fVar65 = auVar21._4_4_;
    fVar77 = auVar21._8_4_;
    fVar80 = auVar21._12_4_;
    fVar81 = auVar21._16_4_;
    fVar82 = auVar21._20_4_;
    fVar83 = auVar21._24_4_;
    fVar84 = auVar21._28_4_;
    fVar26 = auVar20._0_4_;
    auVar21._0_4_ = fVar26 * fVar26 + fVar64 * fVar64 + fVar78 * fVar78;
    fVar27 = auVar20._4_4_;
    auVar21._4_4_ = fVar27 * fVar27 + fVar65 * fVar65 + fVar99 * fVar99;
    fVar28 = auVar20._8_4_;
    auVar21._8_4_ = fVar28 * fVar28 + fVar77 * fVar77 + fVar101 * fVar101;
    fVar30 = auVar20._12_4_;
    auVar21._12_4_ = fVar30 * fVar30 + fVar80 * fVar80 + fVar102 * fVar102;
    fVar31 = auVar20._16_4_;
    auVar21._16_4_ = fVar31 * fVar31 + fVar81 * fVar81 + fVar103 * fVar103;
    fVar32 = auVar20._20_4_;
    auVar21._20_4_ = fVar32 * fVar32 + fVar82 * fVar82 + fVar104 * fVar104;
    fVar33 = auVar20._24_4_;
    auVar21._24_4_ = fVar33 * fVar33 + fVar83 * fVar83 + fVar105 * fVar105;
    fVar34 = auVar20._28_4_;
    auVar21._28_4_ = fVar34 * fVar34 + fVar84 * fVar84 + fVar106 * fVar106;
    auVar29 = vsqrtps_avx(auVar21);
    auVar29 = vdivps_avx(auVar89,auVar29);
    fVar35 = auVar29._0_4_;
    fVar36 = auVar29._4_4_;
    fVar56 = auVar29._8_4_;
    fVar59 = auVar29._12_4_;
    fVar60 = auVar29._16_4_;
    fVar61 = auVar29._20_4_;
    fVar62 = auVar29._24_4_;
    fVar63 = auVar29._28_4_;
    auVar58._0_4_ = -(fVar107 * auVar57._0_4_) + auVar43._0_4_;
    auVar58._4_4_ = -(fVar66 * auVar57._4_4_) + auVar43._4_4_;
    auVar58._8_4_ = -(fVar67 * auVar57._8_4_) + auVar43._8_4_;
    auVar58._12_4_ = -(fVar68 * auVar57._12_4_) + auVar43._12_4_;
    auVar58._16_4_ = -(fVar69 * auVar57._16_4_) + auVar43._16_4_;
    auVar58._20_4_ = -(fVar70 * auVar57._20_4_) + auVar43._20_4_;
    auVar58._24_4_ = -(fVar71 * auVar57._24_4_) + auVar43._24_4_;
    auVar58._28_4_ = -(param_5 * auVar57._28_4_) + auVar43._28_4_;
    param_7 = param_7 * param_7;
    auVar44._4_4_ = param_7;
    auVar44._0_4_ = param_7;
    auVar44._8_4_ = param_7;
    auVar44._12_4_ = param_7;
    auVar44._16_4_ = param_7;
    auVar44._20_4_ = param_7;
    auVar44._24_4_ = param_7;
    auVar44._28_4_ = param_7;
    auVar29 = vcmpps_avx(auVar21,auVar44,1);
    auVar45._4_4_ = __real_322bcc77;
    auVar45._0_4_ = __real_322bcc77;
    auVar45._8_4_ = __real_322bcc77;
    auVar45._12_4_ = __real_322bcc77;
    auVar45._16_4_ = __real_322bcc77;
    auVar45._20_4_ = __real_322bcc77;
    auVar45._24_4_ = __real_322bcc77;
    auVar45._28_4_ = __real_322bcc77;
    auVar21 = vcmpps_avx(auVar21,auVar45,1);
    uVar88 = auVar29._0_4_;
    auVar46._0_4_ = uVar88 & (uint)(fVar35 * fVar64 + auVar74._0_4_);
    uVar90 = auVar29._4_4_;
    auVar46._4_4_ = uVar90 & (uint)(fVar36 * fVar65 + auVar74._4_4_);
    uVar91 = auVar29._8_4_;
    auVar46._8_4_ = uVar91 & (uint)(fVar56 * fVar77 + auVar74._8_4_);
    uVar92 = auVar29._12_4_;
    auVar46._12_4_ = uVar92 & (uint)(fVar59 * fVar80 + auVar74._12_4_);
    uVar93 = auVar29._16_4_;
    auVar46._16_4_ = uVar93 & (uint)(fVar60 * fVar81 + auVar74._16_4_);
    uVar94 = auVar29._20_4_;
    auVar46._20_4_ = uVar94 & (uint)(fVar61 * fVar82 + auVar74._20_4_);
    uVar95 = auVar29._24_4_;
    auVar46._24_4_ = uVar95 & (uint)(fVar62 * fVar83 + auVar74._24_4_);
    uVar96 = auVar29._28_4_;
    auVar46._28_4_ = uVar96 & (uint)(fVar63 * fVar84 + auVar74._28_4_);
    auVar29 = vblendvps_avx(auVar46,auVar58,auVar21);
    auVar20 = vcmpps_avx(auVar38,ZEXT432(0) << 0x20,4);
    auVar18 = vcmpps_avx(auVar29,ZEXT432(0) << 0x20,4);
    auVar22._0_4_ = auVar18._0_4_ & auVar20._0_4_ & auVar19._0_4_;
    auVar22._4_4_ = auVar18._4_4_ & auVar20._4_4_ & auVar19._4_4_;
    auVar22._8_4_ = auVar18._8_4_ & auVar20._8_4_ & auVar19._8_4_;
    auVar22._12_4_ = auVar18._12_4_ & auVar20._12_4_ & auVar19._12_4_;
    auVar22._16_4_ = auVar18._16_4_ & auVar20._16_4_ & auVar19._16_4_;
    auVar22._20_4_ = auVar18._20_4_ & auVar20._20_4_ & auVar19._20_4_;
    auVar22._24_4_ = auVar18._24_4_ & auVar20._24_4_ & auVar19._24_4_;
    auVar22._28_4_ = auVar18._28_4_ & auVar20._28_4_ & auVar19._28_4_;
    uVar8 = vmovmskps_avx(auVar22);
    if (uVar8 != 0) {
      auVar54._0_4_ = -(fVar107 * auVar53._0_4_) + auVar87._0_4_;
      auVar54._4_4_ = -(fVar66 * auVar53._4_4_) + auVar87._4_4_;
      auVar54._8_4_ = -(fVar67 * auVar53._8_4_) + auVar87._8_4_;
      auVar54._12_4_ = -(fVar68 * auVar53._12_4_) + auVar87._12_4_;
      auVar54._16_4_ = -(fVar69 * auVar53._16_4_) + auVar87._16_4_;
      auVar54._20_4_ = -(fVar70 * auVar53._20_4_) + auVar87._20_4_;
      auVar54._24_4_ = -(fVar71 * auVar53._24_4_) + auVar87._24_4_;
      auVar54._28_4_ = -(param_5 * auVar53._28_4_) + auVar87._28_4_;
      auVar49._0_4_ = -(fVar107 * auVar42._0_4_) + (float)local_2a0._0_4_;
      auVar49._4_4_ = -(fVar66 * auVar42._4_4_) + (float)local_2a0._4_4_;
      auVar49._8_4_ = -(fVar67 * auVar42._8_4_) + fStack_298;
      auVar49._12_4_ = -(fVar68 * auVar42._12_4_) + fStack_294;
      auVar49._16_4_ = -(fVar69 * auVar42._16_4_) + fStack_290;
      auVar49._20_4_ = -(fVar70 * auVar42._20_4_) + fStack_28c;
      auVar49._24_4_ = -(fVar71 * auVar42._24_4_) + fStack_288;
      auVar49._28_4_ = -(param_5 * auVar42._28_4_) + fStack_284;
      auVar87._0_4_ = uVar88 & (uint)(fVar35 * fVar78 + auVar39._0_4_);
      auVar87._4_4_ = uVar90 & (uint)(fVar36 * fVar99 + auVar39._4_4_);
      auVar87._8_4_ = uVar91 & (uint)(fVar56 * fVar101 + auVar39._8_4_);
      auVar87._12_4_ = uVar92 & (uint)(fVar59 * fVar102 + auVar39._12_4_);
      auVar87._16_4_ = uVar93 & (uint)(fVar60 * fVar103 + auVar39._16_4_);
      auVar87._20_4_ = uVar94 & (uint)(fVar61 * fVar104 + auVar39._20_4_);
      auVar87._24_4_ = uVar95 & (uint)(fVar62 * fVar105 + auVar39._24_4_);
      auVar87._28_4_ = uVar96 & (uint)(fVar63 * fVar106 + auVar39._28_4_);
      auVar19 = vblendvps_avx(auVar87,auVar54,auVar21);
      auVar23._0_4_ = uVar88 & (uint)(fVar35 * fVar26 + auVar79._0_4_);
      auVar23._4_4_ = uVar90 & (uint)(fVar36 * fVar27 + auVar79._4_4_);
      auVar23._8_4_ = uVar91 & (uint)(fVar56 * fVar28 + auVar79._8_4_);
      auVar23._12_4_ = uVar92 & (uint)(fVar59 * fVar30 + auVar79._12_4_);
      auVar23._16_4_ = uVar93 & (uint)(fVar60 * fVar31 + auVar79._16_4_);
      auVar23._20_4_ = uVar94 & (uint)(fVar61 * fVar32 + auVar79._20_4_);
      auVar23._24_4_ = uVar95 & (uint)(fVar62 * fVar33 + auVar79._24_4_);
      auVar23._28_4_ = uVar96 & (uint)(fVar63 * fVar34 + auVar79._28_4_);
      auVar21 = vblendvps_avx(auVar23,auVar49,auVar21);
      cVar6 = (char)uVar8;
      if (cVar6 == -1) {
        auVar20 = vunpcklps_avx(auVar29,auVar19);
        auVar18 = vunpcklps_avx(auVar21,auVar38);
        auVar42 = vunpcklpd_avx(auVar20,auVar18);
        auVar20 = vunpckhpd_avx(auVar20,auVar18);
        auVar19 = vunpckhps_avx(auVar29,auVar19);
        auVar29 = vunpckhps_avx(auVar21,auVar38);
        auVar38 = vunpcklpd_avx(auVar19,auVar29);
        auVar47._16_16_ = auVar20._0_16_;
        auVar47._0_16_ = auVar42._0_16_;
        *pauVar10 = auVar47;
        auVar19 = vunpckhpd_avx(auVar19,auVar29);
        auVar25._16_16_ = auVar19._0_16_;
        auVar25._0_16_ = auVar38._0_16_;
        pauVar10[1] = auVar25;
        auVar29 = vperm2f128_avx(auVar42,auVar20,0x31);
        pauVar10[2] = auVar29;
        auVar19 = vperm2f128_avx(auVar38,auVar19,0x31);
        pauVar10[3] = auVar19;
      }
      else {
        auVar72 = auVar38._0_16_;
        auVar75 = auVar38._16_16_;
        auVar50 = auVar29._0_16_;
        auVar55 = auVar29._16_16_;
        auVar37 = auVar19._0_16_;
        auVar40 = auVar19._16_16_;
        auVar16 = auVar21._0_16_;
        auVar24 = auVar21._16_16_;
        if ((uVar8 & 1) != 0) {
          *(int *)*pauVar10 = auVar29._0_4_;
        }
        if ((uVar8 & 2) != 0) {
          uVar3 = vextractps_avx(auVar50,1);
          *(undefined4 *)(*pauVar10 + 0x10) = uVar3;
        }
        if ((uVar8 & 4) != 0) {
          uVar3 = vextractps_avx(auVar50,2);
          *(undefined4 *)pauVar10[1] = uVar3;
        }
        if ((uVar8 & 8) != 0) {
          uVar3 = vextractps_avx(auVar50,3);
          *(undefined4 *)(pauVar10[1] + 0x10) = uVar3;
        }
        if ((uVar8 & 0x10) != 0) {
          *(int *)pauVar10[2] = auVar29._16_4_;
        }
        if ((uVar8 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar55,1);
          *(undefined4 *)(pauVar10[2] + 0x10) = uVar3;
        }
        if ((uVar8 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar55,2);
          *(undefined4 *)pauVar10[3] = uVar3;
        }
        if (cVar6 < '\0') {
          uVar3 = vextractps_avx(auVar55,3);
          *(undefined4 *)(pauVar10[3] + 0x10) = uVar3;
        }
        if ((uVar8 & 1) != 0) {
          *(int *)(*pauVar10 + 4) = auVar19._0_4_;
        }
        if ((uVar8 & 2) != 0) {
          uVar3 = vextractps_avx(auVar37,1);
          *(undefined4 *)(*pauVar10 + 0x14) = uVar3;
        }
        if ((uVar8 & 4) != 0) {
          uVar3 = vextractps_avx(auVar37,2);
          *(undefined4 *)(pauVar10[1] + 4) = uVar3;
        }
        if ((uVar8 & 8) != 0) {
          uVar3 = vextractps_avx(auVar37,3);
          *(undefined4 *)(pauVar10[1] + 0x14) = uVar3;
        }
        if ((uVar8 & 0x10) != 0) {
          *(int *)(pauVar10[2] + 4) = auVar19._16_4_;
        }
        if ((uVar8 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar40,1);
          *(undefined4 *)(pauVar10[2] + 0x14) = uVar3;
        }
        if ((uVar8 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar40,2);
          *(undefined4 *)(pauVar10[3] + 4) = uVar3;
        }
        if (cVar6 < '\0') {
          uVar3 = vextractps_avx(auVar40,3);
          *(undefined4 *)(pauVar10[3] + 0x14) = uVar3;
        }
        if ((uVar8 & 1) != 0) {
          *(int *)(*pauVar10 + 8) = auVar21._0_4_;
        }
        if ((uVar8 & 2) != 0) {
          uVar3 = vextractps_avx(auVar16,1);
          *(undefined4 *)(*pauVar10 + 0x18) = uVar3;
        }
        if ((uVar8 & 4) != 0) {
          uVar3 = vextractps_avx(auVar16,2);
          *(undefined4 *)(pauVar10[1] + 8) = uVar3;
        }
        if ((uVar8 & 8) != 0) {
          uVar3 = vextractps_avx(auVar16,3);
          *(undefined4 *)(pauVar10[1] + 0x18) = uVar3;
        }
        if ((uVar8 & 0x10) != 0) {
          *(int *)(pauVar10[2] + 8) = auVar21._16_4_;
        }
        if ((uVar8 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar24,1);
          *(undefined4 *)(pauVar10[2] + 0x18) = uVar3;
        }
        if ((uVar8 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar24,2);
          *(undefined4 *)(pauVar10[3] + 8) = uVar3;
        }
        if (cVar6 < '\0') {
          uVar3 = vextractps_avx(auVar24,3);
          *(undefined4 *)(pauVar10[3] + 0x18) = uVar3;
        }
        if ((uVar8 & 1) != 0) {
          *(int *)(*pauVar10 + 0xc) = auVar38._0_4_;
        }
        if ((uVar8 & 2) != 0) {
          uVar3 = vextractps_avx(auVar72,1);
          *(undefined4 *)(*pauVar10 + 0x1c) = uVar3;
        }
        if ((uVar8 & 4) != 0) {
          uVar3 = vextractps_avx(auVar72,2);
          *(undefined4 *)(pauVar10[1] + 0xc) = uVar3;
        }
        if ((uVar8 & 8) != 0) {
          uVar3 = vextractps_avx(auVar72,3);
          *(undefined4 *)(pauVar10[1] + 0x1c) = uVar3;
        }
        if ((uVar8 & 0x10) != 0) {
          *(int *)(pauVar10[2] + 0xc) = auVar38._16_4_;
        }
        if ((uVar8 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar75,1);
          *(undefined4 *)(pauVar10[2] + 0x1c) = uVar3;
        }
        if ((uVar8 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar75,2);
          *(undefined4 *)(pauVar10[3] + 0xc) = uVar3;
        }
        if (cVar6 < '\0') {
          uVar3 = vextractps_avx(auVar75,3);
          *(undefined4 *)(pauVar10[3] + 0x1c) = uVar3;
        }
      }
    }
  }
  return;
}

// ApplySphericalBackstopConstraintsWithRadiusMap_avx2 @ 14032c110

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplySphericalBackstopConstraintsWithRadiusMap_avx2
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,float param_5,
               float param_6,float param_7,int param_8,uint param_9)

{
  float *pfVar1;
  undefined1 (*pauVar2) [32];
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 (*pauVar8) [32];
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [16];
  undefined1 auVar24 [16];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar25 [16];
  undefined1 auVar27 [16];
  undefined1 auVar26 [32];
  float fVar28;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar40 [16];
  undefined1 auVar41 [32];
  undefined1 auVar48 [16];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [16];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [16];
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  uint uVar69;
  uint uVar71;
  uint uVar72;
  uint uVar73;
  uint uVar74;
  uint uVar75;
  uint uVar76;
  uint uVar77;
  undefined1 auVar70 [32];
  undefined1 auVar78 [32];
  float fVar79;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  undefined1 auVar97 [32];
  undefined1 local_2a0 [8];
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  
  uVar6 = param_9 + 7;
  if (-1 < (int)param_9) {
    uVar6 = param_9;
  }
  if ((int)(uVar6 & 0xfffffff8) < 1) {
    uVar7 = 0;
    if ((int)param_9 < 1) {
      return;
    }
  }
  else {
    lVar10 = (longlong)param_8 * 0x10 + param_1;
    lVar9 = (longlong)param_8 * 0xc + 0x40;
    uVar12 = 0;
    uVar7 = 0;
    do {
      auVar16 = *(undefined1 (*) [32])(lVar10 + uVar12 * 4);
      auVar26 = *(undefined1 (*) [32])(lVar10 + 0x20 + uVar12 * 4);
      auVar31 = *(undefined1 (*) [32])(lVar10 + 0x40 + uVar12 * 4);
      auVar22 = *(undefined1 (*) [32])(lVar10 + 0x60 + uVar12 * 4);
      auVar52 = vperm2f128_avx(auVar16,auVar31,0x20);
      auVar30 = vperm2f128_avx(auVar16,auVar31,0x31);
      auVar78 = vperm2f128_avx(auVar26,auVar22,0x20);
      auVar56 = vperm2f128_avx(auVar26,auVar22,0x31);
      auVar15 = vunpckhps_avx(auVar52,auVar30);
      auVar29 = vunpckhps_avx(auVar78,auVar56);
      auVar42 = vunpckhpd_avx(auVar15,auVar29);
      auVar21 = vcmpps_avx(auVar42,
                           ___ymm_0000000000000000000000000000000000000000000000000000000000000000,4
                          );
      if ((((((((SUB321(auVar21 >> 0x1f,0) & 1) != 0 || (SUB321(auVar21 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar21 >> 0x5f,0) & 1) != 0) || SUB321(auVar21 >> 0x7f,0) != '\0') ||
            (SUB321(auVar21 >> 0x9f,0) & 1) != 0) || SUB321(auVar21 >> 0xbf,0) != '\0') ||
          (SUB321(auVar21 >> 0xdf,0) & 1) != 0) || auVar21[0x1f] < '\0') {
        auVar51 = vunpcklpd_avx(auVar15,auVar29);
        auVar15 = vunpcklps_avx(auVar52,auVar30);
        auVar29 = vunpcklps_avx(auVar78,auVar56);
        auVar41 = vunpckhpd_avx(auVar15,auVar29);
        auVar43 = vunpcklpd_avx(auVar15,auVar29);
        auVar15 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar9);
        auVar29 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar9);
        auVar52 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar29);
        auVar30 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,auVar15);
        auVar52 = vblendps_avx(auVar30,auVar52,0x88);
        auVar30 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar29);
        auVar78 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,*(undefined1 (*) [32])(param_2 + lVar9));
        auVar30 = vblendps_avx(auVar78,auVar30,0x13);
        auVar54 = vperm2f128_avx(auVar52,auVar30,0x31);
        auVar15 = vblendps_avx(auVar29,auVar15,0x24);
        auVar15 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar15);
        auVar29 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,*(undefined1 (*) [32])(param_2 + lVar9));
        auVar78 = vblendps_avx(auVar15,auVar29,0xe0);
        auVar15 = *(undefined1 (*) [32])(param_3 + -0x40 + lVar9);
        auVar29 = *(undefined1 (*) [32])(param_3 + -0x20 + lVar9);
        auVar56 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar29);
        auVar58 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,auVar15);
        auVar56 = vblendps_avx(auVar58,auVar56,0x88);
        auVar58 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar29);
        auVar17 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,*(undefined1 (*) [32])(param_3 + lVar9));
        auVar58 = vblendps_avx(auVar17,auVar58,0x13);
        auVar17 = vperm2f128_avx(auVar56,auVar58,0x31);
        auVar15 = vblendps_avx(auVar29,auVar15,0x24);
        auVar15 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar15);
        auVar29 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,*(undefined1 (*) [32])(param_3 + lVar9));
        auVar15 = vblendps_avx(auVar15,auVar29,0xe0);
        pfVar1 = (float *)(param_4 + (uVar12 & 0xffffffff));
        auVar97._0_4_ = param_7 * *pfVar1 + param_6;
        auVar97._4_4_ = param_7 * pfVar1[1] + param_6;
        auVar97._8_4_ = param_7 * pfVar1[2] + param_6;
        auVar97._12_4_ = param_7 * pfVar1[3] + param_6;
        auVar97._16_4_ = param_7 * pfVar1[4] + param_6;
        auVar97._20_4_ = param_7 * pfVar1[5] + param_6;
        auVar97._24_4_ = param_7 * pfVar1[6] + param_6;
        auVar97._28_4_ = param_7 * pfVar1[7] + param_6;
        fVar79 = auVar97._0_4_ + param_5;
        fVar82 = auVar97._4_4_ + param_5;
        fVar83 = auVar97._8_4_ + param_5;
        fVar84 = auVar97._12_4_ + param_5;
        fVar85 = auVar97._16_4_ + param_5;
        fVar86 = auVar97._20_4_ + param_5;
        fVar87 = auVar97._24_4_ + param_5;
        fVar88 = auVar97._28_4_ + param_5;
        auVar49._0_4_ = -(auVar56._0_4_ * fVar79) + auVar52._0_4_;
        auVar49._4_4_ = -(auVar56._4_4_ * fVar82) + auVar52._4_4_;
        auVar49._8_4_ = -(auVar56._8_4_ * fVar83) + auVar52._8_4_;
        auVar49._12_4_ = -(auVar56._12_4_ * fVar84) + auVar52._12_4_;
        auVar49._16_4_ = -(auVar58._0_4_ * fVar85) + auVar30._0_4_;
        auVar49._20_4_ = -(auVar58._4_4_ * fVar86) + auVar30._4_4_;
        auVar49._24_4_ = -(auVar58._8_4_ * fVar87) + auVar30._8_4_;
        auVar49._28_4_ = -(auVar58._12_4_ * fVar88) + auVar30._12_4_;
        auVar14._0_4_ = -(auVar17._0_4_ * fVar79) + auVar54._0_4_;
        auVar14._4_4_ = -(auVar17._4_4_ * fVar82) + auVar54._4_4_;
        auVar14._8_4_ = -(auVar17._8_4_ * fVar83) + auVar54._8_4_;
        auVar14._12_4_ = -(auVar17._12_4_ * fVar84) + auVar54._12_4_;
        auVar14._16_4_ = -(auVar17._16_4_ * fVar85) + auVar54._16_4_;
        auVar14._20_4_ = -(auVar17._20_4_ * fVar86) + auVar54._20_4_;
        auVar14._24_4_ = -(auVar17._24_4_ * fVar87) + auVar54._24_4_;
        auVar14._28_4_ = -(auVar17._28_4_ * fVar88) + auVar54._28_4_;
        auVar80._0_4_ = -(auVar15._0_4_ * fVar79) + auVar78._0_4_;
        auVar80._4_4_ = -(auVar15._4_4_ * fVar82) + auVar78._4_4_;
        auVar80._8_4_ = -(auVar15._8_4_ * fVar83) + auVar78._8_4_;
        auVar80._12_4_ = -(auVar15._12_4_ * fVar84) + auVar78._12_4_;
        auVar80._16_4_ = -(auVar15._16_4_ * fVar85) + auVar78._16_4_;
        auVar80._20_4_ = -(auVar15._20_4_ * fVar86) + auVar78._20_4_;
        auVar80._24_4_ = -(auVar15._24_4_ * fVar87) + auVar78._24_4_;
        auVar80._28_4_ = -(auVar15._28_4_ * fVar88) + auVar78._28_4_;
        auVar29 = vsubps_avx(auVar43,auVar49);
        auVar41 = vsubps_avx(auVar41,auVar14);
        auVar51 = vsubps_avx(auVar51,auVar80);
        fVar79 = auVar41._0_4_;
        fVar82 = auVar41._4_4_;
        fVar83 = auVar41._8_4_;
        fVar84 = auVar41._12_4_;
        fVar85 = auVar41._16_4_;
        fVar86 = auVar41._20_4_;
        fVar87 = auVar41._24_4_;
        fVar88 = auVar41._28_4_;
        fVar28 = auVar29._0_4_;
        fVar33 = auVar29._4_4_;
        fVar34 = auVar29._8_4_;
        fVar35 = auVar29._12_4_;
        fVar36 = auVar29._16_4_;
        fVar37 = auVar29._20_4_;
        fVar38 = auVar29._24_4_;
        fVar39 = auVar29._28_4_;
        fVar61 = auVar51._0_4_;
        auVar41._0_4_ = fVar61 * fVar61 + fVar28 * fVar28 + fVar79 * fVar79;
        fVar62 = auVar51._4_4_;
        auVar41._4_4_ = fVar62 * fVar62 + fVar33 * fVar33 + fVar82 * fVar82;
        fVar63 = auVar51._8_4_;
        auVar41._8_4_ = fVar63 * fVar63 + fVar34 * fVar34 + fVar83 * fVar83;
        fVar64 = auVar51._12_4_;
        auVar41._12_4_ = fVar64 * fVar64 + fVar35 * fVar35 + fVar84 * fVar84;
        fVar65 = auVar51._16_4_;
        auVar41._16_4_ = fVar65 * fVar65 + fVar36 * fVar36 + fVar85 * fVar85;
        fVar66 = auVar51._20_4_;
        auVar41._20_4_ = fVar66 * fVar66 + fVar37 * fVar37 + fVar86 * fVar86;
        fVar67 = auVar51._24_4_;
        auVar41._24_4_ = fVar67 * fVar67 + fVar38 * fVar38 + fVar87 * fVar87;
        fVar68 = auVar51._28_4_;
        auVar41._28_4_ = fVar68 * fVar68 + fVar39 * fVar39 + fVar88 * fVar88;
        auVar29 = vsqrtps_avx(auVar41);
        auVar29 = vdivps_avx(auVar97,auVar29);
        fVar89 = auVar29._0_4_;
        fVar90 = auVar29._4_4_;
        fVar91 = auVar29._8_4_;
        fVar92 = auVar29._12_4_;
        fVar93 = auVar29._16_4_;
        fVar94 = auVar29._20_4_;
        fVar95 = auVar29._24_4_;
        fVar96 = auVar29._28_4_;
        auVar51._0_4_ = -(param_5 * auVar56._0_4_) + auVar52._0_4_;
        auVar51._4_4_ = -(param_5 * auVar56._4_4_) + auVar52._4_4_;
        auVar51._8_4_ = -(param_5 * auVar56._8_4_) + auVar52._8_4_;
        auVar51._12_4_ = -(param_5 * auVar56._12_4_) + auVar52._12_4_;
        auVar51._16_4_ = -(param_5 * auVar58._0_4_) + auVar30._0_4_;
        auVar51._20_4_ = -(param_5 * auVar58._4_4_) + auVar30._4_4_;
        auVar51._24_4_ = -(param_5 * auVar58._8_4_) + auVar30._8_4_;
        auVar51._28_4_ = -(param_5 * auVar58._12_4_) + auVar30._12_4_;
        auVar29._0_4_ = auVar97._0_4_ * auVar97._0_4_;
        auVar29._4_4_ = auVar97._4_4_ * auVar97._4_4_;
        auVar29._8_4_ = auVar97._8_4_ * auVar97._8_4_;
        auVar29._12_4_ = auVar97._12_4_ * auVar97._12_4_;
        auVar29._16_4_ = auVar97._16_4_ * auVar97._16_4_;
        auVar29._20_4_ = auVar97._20_4_ * auVar97._20_4_;
        auVar29._24_4_ = auVar97._24_4_ * auVar97._24_4_;
        auVar29._28_4_ = auVar97._28_4_ * auVar97._28_4_;
        auVar29 = vcmpps_avx(auVar41,auVar29,1);
        auVar52._4_4_ = __real_322bcc77;
        auVar52._0_4_ = __real_322bcc77;
        auVar52._8_4_ = __real_322bcc77;
        auVar52._12_4_ = __real_322bcc77;
        auVar52._16_4_ = __real_322bcc77;
        auVar52._20_4_ = __real_322bcc77;
        auVar52._24_4_ = __real_322bcc77;
        auVar52._28_4_ = __real_322bcc77;
        auVar52 = vcmpps_avx(auVar41,auVar52,1);
        uVar69 = auVar29._0_4_;
        auVar30._0_4_ = uVar69 & (uint)(fVar89 * fVar28 + auVar49._0_4_);
        uVar71 = auVar29._4_4_;
        auVar30._4_4_ = uVar71 & (uint)(fVar90 * fVar33 + auVar49._4_4_);
        uVar72 = auVar29._8_4_;
        auVar30._8_4_ = uVar72 & (uint)(fVar91 * fVar34 + auVar49._8_4_);
        uVar73 = auVar29._12_4_;
        auVar30._12_4_ = uVar73 & (uint)(fVar92 * fVar35 + auVar49._12_4_);
        uVar74 = auVar29._16_4_;
        auVar30._16_4_ = uVar74 & (uint)(fVar93 * fVar36 + auVar49._16_4_);
        uVar75 = auVar29._20_4_;
        auVar30._20_4_ = uVar75 & (uint)(fVar94 * fVar37 + auVar49._20_4_);
        uVar76 = auVar29._24_4_;
        auVar30._24_4_ = uVar76 & (uint)(fVar95 * fVar38 + auVar49._24_4_);
        uVar77 = auVar29._28_4_;
        auVar30._28_4_ = uVar77 & (uint)(fVar96 * fVar39 + auVar49._28_4_);
        auVar29 = vblendvps_avx(auVar30,auVar51,auVar52);
        auVar30 = vcmpps_avx(auVar29,
                             ___ymm_0000000000000000000000000000000000000000000000000000000000000000
                             ,4);
        local_2a0._0_4_ = auVar21._0_4_;
        local_2a0._4_4_ = auVar21._4_4_;
        fStack_298 = auVar21._8_4_;
        fStack_294 = auVar21._12_4_;
        fStack_290 = auVar21._16_4_;
        fStack_28c = auVar21._20_4_;
        fStack_288 = auVar21._24_4_;
        fStack_284 = auVar21._28_4_;
        auVar21._0_4_ = auVar30._0_4_ & local_2a0._0_4_;
        auVar21._4_4_ = auVar30._4_4_ & local_2a0._4_4_;
        auVar21._8_4_ = auVar30._8_4_ & (uint)fStack_298;
        auVar21._12_4_ = auVar30._12_4_ & (uint)fStack_294;
        auVar21._16_4_ = auVar30._16_4_ & (uint)fStack_290;
        auVar21._20_4_ = auVar30._20_4_ & (uint)fStack_28c;
        auVar21._24_4_ = auVar30._24_4_ & (uint)fStack_288;
        auVar21._28_4_ = auVar30._28_4_ & (uint)fStack_284;
        uVar13 = vmovmskps_avx(auVar21);
        if (uVar13 != 0) {
          auVar56._0_4_ = -(param_5 * auVar17._0_4_) + auVar54._0_4_;
          auVar56._4_4_ = -(param_5 * auVar17._4_4_) + auVar54._4_4_;
          auVar56._8_4_ = -(param_5 * auVar17._8_4_) + auVar54._8_4_;
          auVar56._12_4_ = -(param_5 * auVar17._12_4_) + auVar54._12_4_;
          auVar56._16_4_ = -(param_5 * auVar17._16_4_) + auVar54._16_4_;
          auVar56._20_4_ = -(param_5 * auVar17._20_4_) + auVar54._20_4_;
          auVar56._24_4_ = -(param_5 * auVar17._24_4_) + auVar54._24_4_;
          auVar56._28_4_ = -(param_5 * auVar17._28_4_) + auVar54._28_4_;
          auVar58._0_4_ = -(param_5 * auVar15._0_4_) + auVar78._0_4_;
          auVar58._4_4_ = -(param_5 * auVar15._4_4_) + auVar78._4_4_;
          auVar58._8_4_ = -(param_5 * auVar15._8_4_) + auVar78._8_4_;
          auVar58._12_4_ = -(param_5 * auVar15._12_4_) + auVar78._12_4_;
          auVar58._16_4_ = -(param_5 * auVar15._16_4_) + auVar78._16_4_;
          auVar58._20_4_ = -(param_5 * auVar15._20_4_) + auVar78._20_4_;
          auVar58._24_4_ = -(param_5 * auVar15._24_4_) + auVar78._24_4_;
          auVar58._28_4_ = -(param_5 * auVar15._28_4_) + auVar78._28_4_;
          auVar15._0_4_ = uVar69 & (uint)(fVar89 * fVar79 + auVar14._0_4_);
          auVar15._4_4_ = uVar71 & (uint)(fVar90 * fVar82 + auVar14._4_4_);
          auVar15._8_4_ = uVar72 & (uint)(fVar91 * fVar83 + auVar14._8_4_);
          auVar15._12_4_ = uVar73 & (uint)(fVar92 * fVar84 + auVar14._12_4_);
          auVar15._16_4_ = uVar74 & (uint)(fVar93 * fVar85 + auVar14._16_4_);
          auVar15._20_4_ = uVar75 & (uint)(fVar94 * fVar86 + auVar14._20_4_);
          auVar15._24_4_ = uVar76 & (uint)(fVar95 * fVar87 + auVar14._24_4_);
          auVar15._28_4_ = uVar77 & (uint)(fVar96 * fVar88 + auVar14._28_4_);
          auVar21 = vblendvps_avx(auVar15,auVar56,auVar52);
          auVar78._0_4_ = uVar69 & (uint)(fVar89 * fVar61 + auVar80._0_4_);
          auVar78._4_4_ = uVar71 & (uint)(fVar90 * fVar62 + auVar80._4_4_);
          auVar78._8_4_ = uVar72 & (uint)(fVar91 * fVar63 + auVar80._8_4_);
          auVar78._12_4_ = uVar73 & (uint)(fVar92 * fVar64 + auVar80._12_4_);
          auVar78._16_4_ = uVar74 & (uint)(fVar93 * fVar65 + auVar80._16_4_);
          auVar78._20_4_ = uVar75 & (uint)(fVar94 * fVar66 + auVar80._20_4_);
          auVar78._24_4_ = uVar76 & (uint)(fVar95 * fVar67 + auVar80._24_4_);
          auVar78._28_4_ = uVar77 & (uint)(fVar96 * fVar68 + auVar80._28_4_);
          auVar15 = vblendvps_avx(auVar78,auVar58,auVar52);
          cVar4 = (char)uVar13;
          if (cVar4 == -1) {
            auVar16 = vunpcklps_avx(auVar29,auVar21);
            auVar26 = vunpcklps_avx(auVar15,auVar42);
            auVar22 = vunpcklpd_avx(auVar16,auVar26);
            auVar16 = vunpckhpd_avx(auVar16,auVar26);
            auVar26 = vunpckhps_avx(auVar29,auVar21);
            auVar31 = vunpckhps_avx(auVar15,auVar42);
            auVar21 = vunpcklpd_avx(auVar26,auVar31);
            auVar42._16_16_ = auVar16._0_16_;
            auVar42._0_16_ = auVar22._0_16_;
            *(undefined1 (*) [32])(lVar10 + uVar12 * 4) = auVar42;
            auVar26 = vunpckhpd_avx(auVar26,auVar31);
            auVar31._16_16_ = auVar26._0_16_;
            auVar31._0_16_ = auVar21._0_16_;
            *(undefined1 (*) [32])(lVar10 + 0x20 + uVar12 * 4) = auVar31;
            auVar16 = vperm2f128_avx(auVar22,auVar16,0x31);
            *(undefined1 (*) [32])(lVar10 + 0x40 + uVar12 * 4) = auVar16;
            auVar16 = vperm2f128_avx(auVar21,auVar26,0x31);
            *(undefined1 (*) [32])(lVar10 + 0x60 + uVar12 * 4) = auVar16;
          }
          else {
            auVar40 = auVar29._0_16_;
            auVar48 = auVar29._16_16_;
            auVar25 = auVar21._0_16_;
            auVar27 = auVar21._16_16_;
            auVar20 = auVar15._0_16_;
            auVar24 = auVar15._16_16_;
            if ((uVar13 & 1) != 0) {
              *(int *)(lVar10 + uVar12 * 4) = auVar29._0_4_;
            }
            if ((uVar13 & 2) != 0) {
              uVar3 = vextractps_avx(auVar40,1);
              *(undefined4 *)(lVar10 + 0x10 + uVar12 * 4) = uVar3;
            }
            if ((uVar13 & 4) != 0) {
              uVar3 = vextractps_avx(auVar40,2);
              *(undefined4 *)(lVar10 + 0x20 + uVar12 * 4) = uVar3;
            }
            if ((uVar13 & 8) != 0) {
              uVar3 = vextractps_avx(auVar40,3);
              *(undefined4 *)(lVar10 + 0x30 + uVar12 * 4) = uVar3;
            }
            if ((uVar13 & 0x10) != 0) {
              *(int *)(lVar10 + 0x40 + uVar12 * 4) = auVar29._16_4_;
            }
            if ((uVar13 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar48,1);
              *(undefined4 *)(lVar10 + 0x50 + uVar12 * 4) = uVar3;
            }
            if ((uVar13 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar48,2);
              *(undefined4 *)(lVar10 + 0x60 + uVar12 * 4) = uVar3;
            }
            if (cVar4 < '\0') {
              uVar3 = vextractps_avx(auVar48,3);
              *(undefined4 *)(lVar10 + 0x70 + uVar12 * 4) = uVar3;
            }
            if ((uVar13 & 1) != 0) {
              *(int *)(lVar10 + 4 + uVar12 * 4) = auVar21._0_4_;
            }
            if ((uVar13 & 2) != 0) {
              uVar3 = vextractps_avx(auVar25,1);
              *(undefined4 *)(lVar10 + 0x14 + uVar12 * 4) = uVar3;
            }
            if ((uVar13 & 4) != 0) {
              uVar3 = vextractps_avx(auVar25,2);
              *(undefined4 *)(lVar10 + 0x24 + uVar12 * 4) = uVar3;
            }
            if ((uVar13 & 8) != 0) {
              uVar3 = vextractps_avx(auVar25,3);
              *(undefined4 *)(lVar10 + 0x34 + uVar12 * 4) = uVar3;
            }
            if ((uVar13 & 0x10) != 0) {
              *(int *)(lVar10 + 0x44 + uVar12 * 4) = auVar21._16_4_;
            }
            if ((uVar13 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar27,1);
              *(undefined4 *)(lVar10 + 0x54 + uVar12 * 4) = uVar3;
            }
            if ((uVar13 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar27,2);
              *(undefined4 *)(lVar10 + 100 + uVar12 * 4) = uVar3;
            }
            if (cVar4 < '\0') {
              uVar3 = vextractps_avx(auVar27,3);
              *(undefined4 *)(lVar10 + 0x74 + uVar12 * 4) = uVar3;
            }
            if ((uVar13 & 1) != 0) {
              *(int *)(lVar10 + 8 + uVar12 * 4) = auVar15._0_4_;
            }
            if ((uVar13 & 2) != 0) {
              uVar3 = vextractps_avx(auVar20,1);
              *(undefined4 *)(lVar10 + 0x18 + uVar12 * 4) = uVar3;
            }
            if ((uVar13 & 4) != 0) {
              uVar3 = vextractps_avx(auVar20,2);
              *(undefined4 *)(lVar10 + 0x28 + uVar12 * 4) = uVar3;
            }
            if ((uVar13 & 8) != 0) {
              uVar3 = vextractps_avx(auVar20,3);
              *(undefined4 *)(lVar10 + 0x38 + uVar12 * 4) = uVar3;
            }
            if ((uVar13 & 0x10) != 0) {
              *(int *)(lVar10 + 0x48 + uVar12 * 4) = auVar15._16_4_;
            }
            if ((uVar13 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar24,1);
              *(undefined4 *)(lVar10 + 0x58 + uVar12 * 4) = uVar3;
            }
            if ((uVar13 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar24,2);
              *(undefined4 *)(lVar10 + 0x68 + uVar12 * 4) = uVar3;
            }
            if (cVar4 < '\0') {
              uVar3 = vextractps_avx(auVar24,3);
              *(undefined4 *)(lVar10 + 0x78 + uVar12 * 4) = uVar3;
            }
            if ((uVar13 & 1) != 0) {
              uVar3 = vextractps_avx(auVar16._0_16_,3);
              *(undefined4 *)(lVar10 + 0xc + uVar12 * 4) = uVar3;
            }
            if ((uVar13 & 2) != 0) {
              uVar3 = vextractps_avx(auVar16._16_16_,3);
              *(undefined4 *)(lVar10 + 0x1c + uVar12 * 4) = uVar3;
            }
            if ((uVar13 & 4) != 0) {
              uVar3 = vextractps_avx(auVar26._0_16_,3);
              *(undefined4 *)(lVar10 + 0x2c + uVar12 * 4) = uVar3;
            }
            if ((uVar13 & 8) != 0) {
              uVar3 = vextractps_avx(auVar26._16_16_,3);
              *(undefined4 *)(lVar10 + 0x3c + uVar12 * 4) = uVar3;
            }
            if ((uVar13 & 0x10) != 0) {
              uVar3 = vextractps_avx(auVar31._0_16_,3);
              *(undefined4 *)(lVar10 + 0x4c + uVar12 * 4) = uVar3;
            }
            if ((uVar13 & 0x20) != 0) {
              uVar3 = vextractps_avx(auVar31._16_16_,3);
              *(undefined4 *)(lVar10 + 0x5c + uVar12 * 4) = uVar3;
            }
            if ((uVar13 & 0x40) != 0) {
              uVar3 = vextractps_avx(auVar22._0_16_,3);
              *(undefined4 *)(lVar10 + 0x6c + uVar12 * 4) = uVar3;
            }
            if (cVar4 < '\0') {
              uVar3 = vextractps_avx(auVar22._16_16_,3);
              *(undefined4 *)(lVar10 + 0x7c + uVar12 * 4) = uVar3;
            }
          }
        }
      }
      uVar7 = uVar7 + 8;
      uVar12 = uVar12 + 0x20;
      lVar9 = lVar9 + 0x60;
    } while (uVar7 < (uVar6 & 0xfffffff8));
    if ((int)param_9 <= (int)uVar7) {
      return;
    }
  }
  iVar5 = (int)uVar7;
  auVar16._4_4_ = iVar5;
  auVar16._0_4_ = iVar5;
  auVar16._8_4_ = iVar5;
  auVar16._12_4_ = iVar5;
  auVar16._16_4_ = iVar5;
  auVar16._20_4_ = iVar5;
  auVar16._24_4_ = iVar5;
  auVar16._28_4_ = iVar5;
  auVar16 = vpor_avx2(auVar16,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar26._4_4_ = param_9;
  auVar26._0_4_ = param_9;
  auVar26._8_4_ = param_9;
  auVar26._12_4_ = param_9;
  auVar26._16_4_ = param_9;
  auVar26._20_4_ = param_9;
  auVar26._24_4_ = param_9;
  auVar26._28_4_ = param_9;
  auVar16 = vpcmpgtd_avx2(auVar26,auVar16);
  lVar9 = (longlong)(param_8 + iVar5);
  pauVar8 = (undefined1 (*) [32])(param_1 + lVar9 * 0x10);
  iVar11 = vmovmskps_avx(auVar16);
  if (iVar11 == 0xff) {
    auVar31 = vperm2f128_avx(*pauVar8,pauVar8[2],0x20);
    auVar22 = vperm2f128_avx(*pauVar8,pauVar8[2],0x31);
    auVar21 = vperm2f128_avx(pauVar8[1],pauVar8[3],0x20);
    auVar15 = vperm2f128_avx(pauVar8[1],pauVar8[3],0x31);
    auVar26 = vunpcklps_avx(auVar31,auVar22);
    auVar31 = vunpckhps_avx(auVar31,auVar22);
    auVar42 = vunpcklps_avx(auVar21,auVar15);
    auVar22 = vunpckhps_avx(auVar21,auVar15);
    auVar21 = vunpcklpd_avx(auVar26,auVar42);
    auVar26 = vunpckhpd_avx(auVar26,auVar42);
    auVar42 = vunpcklpd_avx(auVar31,auVar22);
    auVar31 = vunpckhpd_avx(auVar31,auVar22);
  }
  else {
    auVar21 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar16);
    auVar26 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar16);
    auVar42 = vgatherdps(ZEXT832(0),auVar16);
    auVar31 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar16);
  }
  auVar22 = vmaskmovps_avx(auVar16,auVar21);
  auVar26 = vmaskmovps_avx(auVar16,auVar26);
  auVar21 = vmaskmovps_avx(auVar16,auVar42);
  auVar42 = vcmpps_avx(auVar31,ZEXT832(0) << 0x20,4);
  auVar42 = auVar16 & auVar42;
  if ((((((((SUB321(auVar42 >> 0x1f,0) & 1) != 0 || (SUB321(auVar42 >> 0x3f,0) & 1) != 0) ||
          (SUB321(auVar42 >> 0x5f,0) & 1) != 0) || SUB321(auVar42 >> 0x7f,0) != '\0') ||
        (SUB321(auVar42 >> 0x9f,0) & 1) != 0) || SUB321(auVar42 >> 0xbf,0) != '\0') ||
      (SUB321(auVar42 >> 0xdf,0) & 1) != 0) || auVar42[0x1f] < '\0') {
    pauVar2 = (undefined1 (*) [32])(param_2 + lVar9 * 0xc);
    if ((char)iVar11 == -1) {
      auVar42 = pauVar2[1];
      auVar15 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar42);
      auVar29 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,*pauVar2);
      auVar15 = vblendps_avx(auVar29,auVar15,0x88);
      auVar29 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar42);
      auVar52 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,pauVar2[2]);
      auVar29 = vblendps_avx(auVar52,auVar29,0x13);
      auVar43._16_16_ = auVar29._0_16_;
      auVar43._0_16_ = auVar15._0_16_;
      auVar78 = vperm2f128_avx(auVar15,auVar29,0x31);
      auVar42 = vblendps_avx(auVar42,*pauVar2,0x24);
      auVar42 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar42);
      auVar15 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,pauVar2[2]);
      _local_2a0 = vblendps_avx(auVar42,auVar15,0xe0);
      auVar42 = *(undefined1 (*) [32])(param_3 + lVar9 * 0xc);
      auVar15 = *(undefined1 (*) [32])(param_3 + 0x20 + lVar9 * 0xc);
      auVar29 = *(undefined1 (*) [32])(param_3 + 0x40 + lVar9 * 0xc);
      auVar52 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar15);
      auVar30 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar42);
      auVar52 = vblendps_avx(auVar30,auVar52,0x88);
      auVar30 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar15);
      auVar56 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,auVar29);
      auVar30 = vblendps_avx(auVar56,auVar30,0x13);
      auVar54._16_16_ = auVar30._0_16_;
      auVar54._0_16_ = auVar52._0_16_;
      auVar52 = vperm2f128_avx(auVar52,auVar30,0x31);
      auVar42 = vblendps_avx(auVar15,auVar42,0x24);
      auVar42 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar42);
      auVar15 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,auVar29);
      auVar42 = vblendps_avx(auVar42,auVar15,0xe0);
    }
    else {
      auVar43 = vgatherdps(ZEXT832(0) << 0x20,auVar16);
      auVar78 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar16);
      _local_2a0 = vgatherdps(ZEXT832(0),auVar16);
      auVar54 = vgatherdps(ZEXT832(0),auVar16);
      auVar52 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar16);
      auVar42 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar16);
    }
    auVar15 = vmaskmovps_avx(auVar16,*(undefined1 (*) [32])(param_4 + (iVar5 << 2)));
    auVar81._0_4_ = param_7 * auVar15._0_4_ + param_6;
    auVar81._4_4_ = param_7 * auVar15._4_4_ + param_6;
    auVar81._8_4_ = param_7 * auVar15._8_4_ + param_6;
    auVar81._12_4_ = param_7 * auVar15._12_4_ + param_6;
    auVar81._16_4_ = param_7 * auVar15._16_4_ + param_6;
    auVar81._20_4_ = param_7 * auVar15._20_4_ + param_6;
    auVar81._24_4_ = param_7 * auVar15._24_4_ + param_6;
    auVar81._28_4_ = param_7 * auVar15._28_4_ + param_6;
    fVar79 = param_5 + auVar81._0_4_;
    fVar82 = param_5 + auVar81._4_4_;
    fVar83 = param_5 + auVar81._8_4_;
    fVar84 = param_5 + auVar81._12_4_;
    fVar85 = param_5 + auVar81._16_4_;
    fVar86 = param_5 + auVar81._20_4_;
    fVar87 = param_5 + auVar81._24_4_;
    fVar88 = param_5 + auVar81._28_4_;
    auVar59._0_4_ = -(auVar54._0_4_ * fVar79) + auVar43._0_4_;
    auVar59._4_4_ = -(auVar54._4_4_ * fVar82) + auVar43._4_4_;
    auVar59._8_4_ = -(auVar54._8_4_ * fVar83) + auVar43._8_4_;
    auVar59._12_4_ = -(auVar54._12_4_ * fVar84) + auVar43._12_4_;
    auVar59._16_4_ = -(auVar54._16_4_ * fVar85) + auVar43._16_4_;
    auVar59._20_4_ = -(auVar54._20_4_ * fVar86) + auVar43._20_4_;
    auVar59._24_4_ = -(auVar54._24_4_ * fVar87) + auVar43._24_4_;
    auVar59._28_4_ = -(auVar54._28_4_ * fVar88) + auVar43._28_4_;
    auVar32._0_4_ = -(auVar52._0_4_ * fVar79) + auVar78._0_4_;
    auVar32._4_4_ = -(auVar52._4_4_ * fVar82) + auVar78._4_4_;
    auVar32._8_4_ = -(auVar52._8_4_ * fVar83) + auVar78._8_4_;
    auVar32._12_4_ = -(auVar52._12_4_ * fVar84) + auVar78._12_4_;
    auVar32._16_4_ = -(auVar52._16_4_ * fVar85) + auVar78._16_4_;
    auVar32._20_4_ = -(auVar52._20_4_ * fVar86) + auVar78._20_4_;
    auVar32._24_4_ = -(auVar52._24_4_ * fVar87) + auVar78._24_4_;
    auVar32._28_4_ = -(auVar52._28_4_ * fVar88) + auVar78._28_4_;
    auVar70._0_4_ = -(auVar42._0_4_ * fVar79) + (float)local_2a0._0_4_;
    auVar70._4_4_ = -(auVar42._4_4_ * fVar82) + (float)local_2a0._4_4_;
    auVar70._8_4_ = -(auVar42._8_4_ * fVar83) + fStack_298;
    auVar70._12_4_ = -(auVar42._12_4_ * fVar84) + fStack_294;
    auVar70._16_4_ = -(auVar42._16_4_ * fVar85) + fStack_290;
    auVar70._20_4_ = -(auVar42._20_4_ * fVar86) + fStack_28c;
    auVar70._24_4_ = -(auVar42._24_4_ * fVar87) + fStack_288;
    auVar70._28_4_ = -(auVar42._28_4_ * fVar88) + fStack_284;
    auVar22 = vsubps_avx(auVar22,auVar59);
    auVar26 = vsubps_avx(auVar26,auVar32);
    auVar21 = vsubps_avx(auVar21,auVar70);
    fVar79 = auVar26._0_4_;
    fVar82 = auVar26._4_4_;
    fVar83 = auVar26._8_4_;
    fVar84 = auVar26._12_4_;
    fVar85 = auVar26._16_4_;
    fVar86 = auVar26._20_4_;
    fVar87 = auVar26._24_4_;
    fVar88 = auVar26._28_4_;
    fVar89 = auVar22._0_4_;
    fVar90 = auVar22._4_4_;
    fVar91 = auVar22._8_4_;
    fVar92 = auVar22._12_4_;
    fVar93 = auVar22._16_4_;
    fVar94 = auVar22._20_4_;
    fVar95 = auVar22._24_4_;
    fVar96 = auVar22._28_4_;
    fVar28 = auVar21._0_4_;
    auVar22._0_4_ = fVar28 * fVar28 + fVar89 * fVar89 + fVar79 * fVar79;
    fVar33 = auVar21._4_4_;
    auVar22._4_4_ = fVar33 * fVar33 + fVar90 * fVar90 + fVar82 * fVar82;
    fVar34 = auVar21._8_4_;
    auVar22._8_4_ = fVar34 * fVar34 + fVar91 * fVar91 + fVar83 * fVar83;
    fVar35 = auVar21._12_4_;
    auVar22._12_4_ = fVar35 * fVar35 + fVar92 * fVar92 + fVar84 * fVar84;
    fVar36 = auVar21._16_4_;
    auVar22._16_4_ = fVar36 * fVar36 + fVar93 * fVar93 + fVar85 * fVar85;
    fVar37 = auVar21._20_4_;
    auVar22._20_4_ = fVar37 * fVar37 + fVar94 * fVar94 + fVar86 * fVar86;
    fVar38 = auVar21._24_4_;
    auVar22._24_4_ = fVar38 * fVar38 + fVar95 * fVar95 + fVar87 * fVar87;
    fVar39 = auVar21._28_4_;
    auVar22._28_4_ = fVar39 * fVar39 + fVar96 * fVar96 + fVar88 * fVar88;
    auVar26 = vsqrtps_avx(auVar22);
    auVar26 = vdivps_avx(auVar81,auVar26);
    fVar61 = auVar26._0_4_;
    fVar62 = auVar26._4_4_;
    fVar63 = auVar26._8_4_;
    fVar64 = auVar26._12_4_;
    fVar65 = auVar26._16_4_;
    fVar66 = auVar26._20_4_;
    fVar67 = auVar26._24_4_;
    fVar68 = auVar26._28_4_;
    auVar55._0_4_ = -(param_5 * auVar54._0_4_) + auVar43._0_4_;
    auVar55._4_4_ = -(param_5 * auVar54._4_4_) + auVar43._4_4_;
    auVar55._8_4_ = -(param_5 * auVar54._8_4_) + auVar43._8_4_;
    auVar55._12_4_ = -(param_5 * auVar54._12_4_) + auVar43._12_4_;
    auVar55._16_4_ = -(param_5 * auVar54._16_4_) + auVar43._16_4_;
    auVar55._20_4_ = -(param_5 * auVar54._20_4_) + auVar43._20_4_;
    auVar55._24_4_ = -(param_5 * auVar54._24_4_) + auVar43._24_4_;
    auVar55._28_4_ = -(param_5 * auVar54._28_4_) + auVar43._28_4_;
    auVar44._0_4_ = auVar81._0_4_ * auVar81._0_4_;
    auVar44._4_4_ = auVar81._4_4_ * auVar81._4_4_;
    auVar44._8_4_ = auVar81._8_4_ * auVar81._8_4_;
    auVar44._12_4_ = auVar81._12_4_ * auVar81._12_4_;
    auVar44._16_4_ = auVar81._16_4_ * auVar81._16_4_;
    auVar44._20_4_ = auVar81._20_4_ * auVar81._20_4_;
    auVar44._24_4_ = auVar81._24_4_ * auVar81._24_4_;
    auVar44._28_4_ = auVar81._28_4_ * auVar81._28_4_;
    auVar26 = vcmpps_avx(auVar22,auVar44,1);
    auVar45._4_4_ = __real_322bcc77;
    auVar45._0_4_ = __real_322bcc77;
    auVar45._8_4_ = __real_322bcc77;
    auVar45._12_4_ = __real_322bcc77;
    auVar45._16_4_ = __real_322bcc77;
    auVar45._20_4_ = __real_322bcc77;
    auVar45._24_4_ = __real_322bcc77;
    auVar45._28_4_ = __real_322bcc77;
    auVar22 = vcmpps_avx(auVar22,auVar45,1);
    uVar13 = auVar26._0_4_;
    auVar46._0_4_ = uVar13 & (uint)(fVar61 * fVar89 + auVar59._0_4_);
    uVar69 = auVar26._4_4_;
    auVar46._4_4_ = uVar69 & (uint)(fVar62 * fVar90 + auVar59._4_4_);
    uVar71 = auVar26._8_4_;
    auVar46._8_4_ = uVar71 & (uint)(fVar63 * fVar91 + auVar59._8_4_);
    uVar72 = auVar26._12_4_;
    auVar46._12_4_ = uVar72 & (uint)(fVar64 * fVar92 + auVar59._12_4_);
    uVar73 = auVar26._16_4_;
    auVar46._16_4_ = uVar73 & (uint)(fVar65 * fVar93 + auVar59._16_4_);
    uVar74 = auVar26._20_4_;
    auVar46._20_4_ = uVar74 & (uint)(fVar66 * fVar94 + auVar59._20_4_);
    uVar75 = auVar26._24_4_;
    auVar46._24_4_ = uVar75 & (uint)(fVar67 * fVar95 + auVar59._24_4_);
    uVar76 = auVar26._28_4_;
    auVar46._28_4_ = uVar76 & (uint)(fVar68 * fVar96 + auVar59._28_4_);
    auVar26 = vblendvps_avx(auVar46,auVar55,auVar22);
    auVar21 = vcmpps_avx(auVar31,ZEXT432(0) << 0x20,4);
    auVar15 = vcmpps_avx(auVar26,ZEXT432(0) << 0x20,4);
    auVar17._0_4_ = auVar15._0_4_ & auVar21._0_4_ & auVar16._0_4_;
    auVar17._4_4_ = auVar15._4_4_ & auVar21._4_4_ & auVar16._4_4_;
    auVar17._8_4_ = auVar15._8_4_ & auVar21._8_4_ & auVar16._8_4_;
    auVar17._12_4_ = auVar15._12_4_ & auVar21._12_4_ & auVar16._12_4_;
    auVar17._16_4_ = auVar15._16_4_ & auVar21._16_4_ & auVar16._16_4_;
    auVar17._20_4_ = auVar15._20_4_ & auVar21._20_4_ & auVar16._20_4_;
    auVar17._24_4_ = auVar15._24_4_ & auVar21._24_4_ & auVar16._24_4_;
    auVar17._28_4_ = auVar15._28_4_ & auVar21._28_4_ & auVar16._28_4_;
    uVar6 = vmovmskps_avx(auVar17);
    if (uVar6 != 0) {
      auVar53._0_4_ = -(param_5 * auVar52._0_4_) + auVar78._0_4_;
      auVar53._4_4_ = -(param_5 * auVar52._4_4_) + auVar78._4_4_;
      auVar53._8_4_ = -(param_5 * auVar52._8_4_) + auVar78._8_4_;
      auVar53._12_4_ = -(param_5 * auVar52._12_4_) + auVar78._12_4_;
      auVar53._16_4_ = -(param_5 * auVar52._16_4_) + auVar78._16_4_;
      auVar53._20_4_ = -(param_5 * auVar52._20_4_) + auVar78._20_4_;
      auVar53._24_4_ = -(param_5 * auVar52._24_4_) + auVar78._24_4_;
      auVar53._28_4_ = -(param_5 * auVar52._28_4_) + auVar78._28_4_;
      auVar50._0_4_ = -(param_5 * auVar42._0_4_) + (float)local_2a0._0_4_;
      auVar50._4_4_ = -(param_5 * auVar42._4_4_) + (float)local_2a0._4_4_;
      auVar50._8_4_ = -(param_5 * auVar42._8_4_) + fStack_298;
      auVar50._12_4_ = -(param_5 * auVar42._12_4_) + fStack_294;
      auVar50._16_4_ = -(param_5 * auVar42._16_4_) + fStack_290;
      auVar50._20_4_ = -(param_5 * auVar42._20_4_) + fStack_28c;
      auVar50._24_4_ = -(param_5 * auVar42._24_4_) + fStack_288;
      auVar50._28_4_ = -(param_5 * auVar42._28_4_) + fStack_284;
      auVar18._0_4_ = uVar13 & (uint)(fVar61 * fVar79 + auVar32._0_4_);
      auVar18._4_4_ = uVar69 & (uint)(fVar62 * fVar82 + auVar32._4_4_);
      auVar18._8_4_ = uVar71 & (uint)(fVar63 * fVar83 + auVar32._8_4_);
      auVar18._12_4_ = uVar72 & (uint)(fVar64 * fVar84 + auVar32._12_4_);
      auVar18._16_4_ = uVar73 & (uint)(fVar65 * fVar85 + auVar32._16_4_);
      auVar18._20_4_ = uVar74 & (uint)(fVar66 * fVar86 + auVar32._20_4_);
      auVar18._24_4_ = uVar75 & (uint)(fVar67 * fVar87 + auVar32._24_4_);
      auVar18._28_4_ = uVar76 & (uint)(fVar68 * fVar88 + auVar32._28_4_);
      auVar16 = vblendvps_avx(auVar18,auVar53,auVar22);
      auVar19._0_4_ = uVar13 & (uint)(fVar61 * fVar28 + auVar70._0_4_);
      auVar19._4_4_ = uVar69 & (uint)(fVar62 * fVar33 + auVar70._4_4_);
      auVar19._8_4_ = uVar71 & (uint)(fVar63 * fVar34 + auVar70._8_4_);
      auVar19._12_4_ = uVar72 & (uint)(fVar64 * fVar35 + auVar70._12_4_);
      auVar19._16_4_ = uVar73 & (uint)(fVar65 * fVar36 + auVar70._16_4_);
      auVar19._20_4_ = uVar74 & (uint)(fVar66 * fVar37 + auVar70._20_4_);
      auVar19._24_4_ = uVar75 & (uint)(fVar67 * fVar38 + auVar70._24_4_);
      auVar19._28_4_ = uVar76 & (uint)(fVar68 * fVar39 + auVar70._28_4_);
      auVar22 = vblendvps_avx(auVar19,auVar50,auVar22);
      cVar4 = (char)uVar6;
      if (cVar4 == -1) {
        auVar21 = vunpcklps_avx(auVar26,auVar16);
        auVar15 = vunpcklps_avx(auVar22,auVar31);
        auVar42 = vunpcklpd_avx(auVar21,auVar15);
        auVar21 = vunpckhpd_avx(auVar21,auVar15);
        auVar16 = vunpckhps_avx(auVar26,auVar16);
        auVar26 = vunpckhps_avx(auVar22,auVar31);
        auVar31 = vunpcklpd_avx(auVar16,auVar26);
        auVar47._16_16_ = auVar21._0_16_;
        auVar47._0_16_ = auVar42._0_16_;
        *pauVar8 = auVar47;
        auVar16 = vunpckhpd_avx(auVar16,auVar26);
        auVar23._16_16_ = auVar16._0_16_;
        auVar23._0_16_ = auVar31._0_16_;
        pauVar8[1] = auVar23;
        auVar26 = vperm2f128_avx(auVar42,auVar21,0x31);
        pauVar8[2] = auVar26;
        auVar16 = vperm2f128_avx(auVar31,auVar16,0x31);
        pauVar8[3] = auVar16;
      }
      else {
        auVar57 = auVar31._0_16_;
        auVar60 = auVar31._16_16_;
        auVar40 = auVar26._0_16_;
        auVar48 = auVar26._16_16_;
        auVar25 = auVar16._0_16_;
        auVar27 = auVar16._16_16_;
        auVar20 = auVar22._0_16_;
        auVar24 = auVar22._16_16_;
        if ((uVar6 & 1) != 0) {
          *(int *)*pauVar8 = auVar26._0_4_;
        }
        if ((uVar6 & 2) != 0) {
          uVar3 = vextractps_avx(auVar40,1);
          *(undefined4 *)(*pauVar8 + 0x10) = uVar3;
        }
        if ((uVar6 & 4) != 0) {
          uVar3 = vextractps_avx(auVar40,2);
          *(undefined4 *)pauVar8[1] = uVar3;
        }
        if ((uVar6 & 8) != 0) {
          uVar3 = vextractps_avx(auVar40,3);
          *(undefined4 *)(pauVar8[1] + 0x10) = uVar3;
        }
        if ((uVar6 & 0x10) != 0) {
          *(int *)pauVar8[2] = auVar26._16_4_;
        }
        if ((uVar6 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar48,1);
          *(undefined4 *)(pauVar8[2] + 0x10) = uVar3;
        }
        if ((uVar6 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar48,2);
          *(undefined4 *)pauVar8[3] = uVar3;
        }
        if (cVar4 < '\0') {
          uVar3 = vextractps_avx(auVar48,3);
          *(undefined4 *)(pauVar8[3] + 0x10) = uVar3;
        }
        if ((uVar6 & 1) != 0) {
          *(int *)(*pauVar8 + 4) = auVar16._0_4_;
        }
        if ((uVar6 & 2) != 0) {
          uVar3 = vextractps_avx(auVar25,1);
          *(undefined4 *)(*pauVar8 + 0x14) = uVar3;
        }
        if ((uVar6 & 4) != 0) {
          uVar3 = vextractps_avx(auVar25,2);
          *(undefined4 *)(pauVar8[1] + 4) = uVar3;
        }
        if ((uVar6 & 8) != 0) {
          uVar3 = vextractps_avx(auVar25,3);
          *(undefined4 *)(pauVar8[1] + 0x14) = uVar3;
        }
        if ((uVar6 & 0x10) != 0) {
          *(int *)(pauVar8[2] + 4) = auVar16._16_4_;
        }
        if ((uVar6 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar27,1);
          *(undefined4 *)(pauVar8[2] + 0x14) = uVar3;
        }
        if ((uVar6 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar27,2);
          *(undefined4 *)(pauVar8[3] + 4) = uVar3;
        }
        if (cVar4 < '\0') {
          uVar3 = vextractps_avx(auVar27,3);
          *(undefined4 *)(pauVar8[3] + 0x14) = uVar3;
        }
        if ((uVar6 & 1) != 0) {
          *(int *)(*pauVar8 + 8) = auVar22._0_4_;
        }
        if ((uVar6 & 2) != 0) {
          uVar3 = vextractps_avx(auVar20,1);
          *(undefined4 *)(*pauVar8 + 0x18) = uVar3;
        }
        if ((uVar6 & 4) != 0) {
          uVar3 = vextractps_avx(auVar20,2);
          *(undefined4 *)(pauVar8[1] + 8) = uVar3;
        }
        if ((uVar6 & 8) != 0) {
          uVar3 = vextractps_avx(auVar20,3);
          *(undefined4 *)(pauVar8[1] + 0x18) = uVar3;
        }
        if ((uVar6 & 0x10) != 0) {
          *(int *)(pauVar8[2] + 8) = auVar22._16_4_;
        }
        if ((uVar6 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar24,1);
          *(undefined4 *)(pauVar8[2] + 0x18) = uVar3;
        }
        if ((uVar6 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar24,2);
          *(undefined4 *)(pauVar8[3] + 8) = uVar3;
        }
        if (cVar4 < '\0') {
          uVar3 = vextractps_avx(auVar24,3);
          *(undefined4 *)(pauVar8[3] + 0x18) = uVar3;
        }
        if ((uVar6 & 1) != 0) {
          *(int *)(*pauVar8 + 0xc) = auVar31._0_4_;
        }
        if ((uVar6 & 2) != 0) {
          uVar3 = vextractps_avx(auVar57,1);
          *(undefined4 *)(*pauVar8 + 0x1c) = uVar3;
        }
        if ((uVar6 & 4) != 0) {
          uVar3 = vextractps_avx(auVar57,2);
          *(undefined4 *)(pauVar8[1] + 0xc) = uVar3;
        }
        if ((uVar6 & 8) != 0) {
          uVar3 = vextractps_avx(auVar57,3);
          *(undefined4 *)(pauVar8[1] + 0x1c) = uVar3;
        }
        if ((uVar6 & 0x10) != 0) {
          *(int *)(pauVar8[2] + 0xc) = auVar31._16_4_;
        }
        if ((uVar6 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar60,1);
          *(undefined4 *)(pauVar8[2] + 0x1c) = uVar3;
        }
        if ((uVar6 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar60,2);
          *(undefined4 *)(pauVar8[3] + 0xc) = uVar3;
        }
        if (cVar4 < '\0') {
          uVar3 = vextractps_avx(auVar60,3);
          *(undefined4 *)(pauVar8[3] + 0x1c) = uVar3;
        }
      }
    }
  }
  return;
}

// ApplySphericalBackstopConstraintsWithoutMaps_avx2 @ 14032d0b0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplySphericalBackstopConstraintsWithoutMaps_avx2
               (longlong param_1,longlong param_2,longlong param_3,float param_4,float param_5,
               int param_6,uint param_7)

{
  undefined1 (*pauVar1) [32];
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  char cVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  undefined1 (*pauVar19) [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  float fVar26;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar27 [32];
  float fVar36;
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar37 [16];
  undefined1 auVar42 [16];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  float fVar54;
  float fVar55;
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar56 [16];
  undefined1 auVar57 [32];
  undefined1 auVar61 [16];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar62 [32];
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  undefined1 auVar63 [32];
  float fVar69;
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [16];
  undefined1 auVar73 [32];
  undefined1 auVar74 [16];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [64];
  float fVar78;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  undefined1 auVar79 [32];
  float fVar86;
  uint uVar87;
  uint uVar88;
  uint uVar89;
  uint uVar90;
  uint uVar91;
  uint uVar92;
  float fVar93;
  uint uVar94;
  float fVar95;
  uint uVar96;
  
  uVar14 = param_7 + 7;
  if (-1 < (int)param_7) {
    uVar14 = param_7;
  }
  if ((int)(uVar14 & 0xfffffff8) < 1) {
    uVar18 = 0;
    if ((int)param_7 < 1) {
      return;
    }
  }
  else {
    fVar3 = param_5 + param_4;
    fVar10 = param_5 * param_5;
    pauVar19 = (undefined1 (*) [32])((longlong)param_6 * 0x10 + param_1);
    lVar16 = (longlong)param_6 * 0xc + 0x40;
    uVar18 = 0;
    auVar77 = ZEXT1264(ZEXT812(0));
    do {
      auVar22 = *pauVar19;
      auVar58 = pauVar19[1];
      auVar51 = pauVar19[2];
      auVar28 = pauVar19[3];
      auVar39 = vperm2f128_avx(auVar22,auVar51,0x20);
      auVar52 = vperm2f128_avx(auVar22,auVar51,0x31);
      auVar23 = vperm2f128_avx(auVar58,auVar28,0x20);
      auVar76 = vperm2f128_avx(auVar58,auVar28,0x31);
      auVar21 = vunpckhps_avx(auVar39,auVar52);
      auVar12 = vunpckhps_avx(auVar23,auVar76);
      auVar46 = vunpckhpd_avx(auVar21,auVar12);
      auVar38 = vcmpps_avx(auVar77._0_32_,auVar46,4);
      if ((((((((SUB321(auVar38 >> 0x1f,0) & 1) != 0 || (SUB321(auVar38 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar38 >> 0x5f,0) & 1) != 0) || SUB321(auVar38 >> 0x7f,0) != '\0') ||
            (SUB321(auVar38 >> 0x9f,0) & 1) != 0) || SUB321(auVar38 >> 0xbf,0) != '\0') ||
          (SUB321(auVar38 >> 0xdf,0) & 1) != 0) || auVar38[0x1f] < '\0') {
        auVar20 = vunpcklpd_avx(auVar21,auVar12);
        auVar21 = vunpcklps_avx(auVar39,auVar52);
        auVar12 = vunpcklps_avx(auVar23,auVar76);
        auVar11 = vunpckhpd_avx(auVar21,auVar12);
        auVar57 = vunpcklpd_avx(auVar21,auVar12);
        auVar21 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar16);
        auVar12 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar16);
        auVar39 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar12);
        auVar52 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,auVar21);
        auVar39 = vblendps_avx(auVar52,auVar39,0x88);
        auVar52 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar12);
        auVar23 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,*(undefined1 (*) [32])(param_2 + lVar16));
        auVar52 = vblendps_avx(auVar23,auVar52,0x13);
        auVar47 = vperm2f128_avx(auVar39,auVar52,0x31);
        auVar21 = vblendps_avx(auVar12,auVar21,0x24);
        auVar21 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar21);
        auVar12 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,*(undefined1 (*) [32])(param_2 + lVar16));
        auVar23 = vblendps_avx(auVar21,auVar12,0xe0);
        auVar21 = *(undefined1 (*) [32])(param_3 + -0x40 + lVar16);
        auVar12 = *(undefined1 (*) [32])(param_3 + -0x20 + lVar16);
        auVar76 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar12);
        auVar27 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,auVar21);
        auVar76 = vblendps_avx(auVar27,auVar76,0x88);
        auVar27 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar12);
        auVar59 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,*(undefined1 (*) [32])(param_3 + lVar16));
        auVar27 = vblendps_avx(auVar59,auVar27,0x13);
        auVar59 = vperm2f128_avx(auVar76,auVar27,0x31);
        auVar21 = vblendps_avx(auVar12,auVar21,0x24);
        auVar21 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar21);
        auVar12 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,*(undefined1 (*) [32])(param_3 + lVar16));
        auVar21 = vblendps_avx(auVar21,auVar12,0xe0);
        auVar75._0_4_ = -(fVar3 * auVar76._0_4_) + auVar39._0_4_;
        auVar75._4_4_ = -(fVar3 * auVar76._4_4_) + auVar39._4_4_;
        auVar75._8_4_ = -(fVar3 * auVar76._8_4_) + auVar39._8_4_;
        auVar75._12_4_ = -(fVar3 * auVar76._12_4_) + auVar39._12_4_;
        auVar75._16_4_ = -(fVar3 * auVar27._0_4_) + auVar52._0_4_;
        auVar75._20_4_ = -(fVar3 * auVar27._4_4_) + auVar52._4_4_;
        auVar75._24_4_ = -(fVar3 * auVar27._8_4_) + auVar52._8_4_;
        auVar75._28_4_ = -(fVar3 * auVar27._12_4_) + auVar52._12_4_;
        auVar63._0_4_ = -(fVar3 * auVar59._0_4_) + auVar47._0_4_;
        auVar63._4_4_ = -(fVar3 * auVar59._4_4_) + auVar47._4_4_;
        auVar63._8_4_ = -(fVar3 * auVar59._8_4_) + auVar47._8_4_;
        auVar63._12_4_ = -(fVar3 * auVar59._12_4_) + auVar47._12_4_;
        auVar63._16_4_ = -(fVar3 * auVar59._16_4_) + auVar47._16_4_;
        auVar63._20_4_ = -(fVar3 * auVar59._20_4_) + auVar47._20_4_;
        auVar63._24_4_ = -(fVar3 * auVar59._24_4_) + auVar47._24_4_;
        auVar63._28_4_ = -(fVar3 * auVar59._28_4_) + auVar47._28_4_;
        auVar70._0_4_ = -(fVar3 * auVar21._0_4_) + auVar23._0_4_;
        auVar70._4_4_ = -(fVar3 * auVar21._4_4_) + auVar23._4_4_;
        auVar70._8_4_ = -(fVar3 * auVar21._8_4_) + auVar23._8_4_;
        auVar70._12_4_ = -(fVar3 * auVar21._12_4_) + auVar23._12_4_;
        auVar70._16_4_ = -(fVar3 * auVar21._16_4_) + auVar23._16_4_;
        auVar70._20_4_ = -(fVar3 * auVar21._20_4_) + auVar23._20_4_;
        auVar70._24_4_ = -(fVar3 * auVar21._24_4_) + auVar23._24_4_;
        auVar70._28_4_ = -(fVar3 * auVar21._28_4_) + auVar23._28_4_;
        auVar12 = vsubps_avx(auVar57,auVar75);
        auVar11 = vsubps_avx(auVar11,auVar63);
        auVar20 = vsubps_avx(auVar20,auVar70);
        fVar4 = auVar11._0_4_;
        fVar5 = auVar11._4_4_;
        fVar6 = auVar11._8_4_;
        fVar7 = auVar11._12_4_;
        fVar8 = auVar11._16_4_;
        fVar9 = auVar11._20_4_;
        fVar26 = auVar11._24_4_;
        fVar30 = auVar11._28_4_;
        fVar81 = auVar12._0_4_;
        fVar82 = auVar12._4_4_;
        fVar83 = auVar12._8_4_;
        fVar84 = auVar12._12_4_;
        fVar85 = auVar12._16_4_;
        fVar86 = auVar12._20_4_;
        fVar93 = auVar12._24_4_;
        fVar95 = auVar12._28_4_;
        fVar31 = auVar20._0_4_;
        auVar57._0_4_ = fVar31 * fVar31 + fVar81 * fVar81 + fVar4 * fVar4;
        fVar32 = auVar20._4_4_;
        auVar57._4_4_ = fVar32 * fVar32 + fVar82 * fVar82 + fVar5 * fVar5;
        fVar33 = auVar20._8_4_;
        auVar57._8_4_ = fVar33 * fVar33 + fVar83 * fVar83 + fVar6 * fVar6;
        fVar34 = auVar20._12_4_;
        auVar57._12_4_ = fVar34 * fVar34 + fVar84 * fVar84 + fVar7 * fVar7;
        fVar35 = auVar20._16_4_;
        auVar57._16_4_ = fVar35 * fVar35 + fVar85 * fVar85 + fVar8 * fVar8;
        fVar36 = auVar20._20_4_;
        auVar57._20_4_ = fVar36 * fVar36 + fVar86 * fVar86 + fVar9 * fVar9;
        fVar54 = auVar20._24_4_;
        auVar57._24_4_ = fVar54 * fVar54 + fVar93 * fVar93 + fVar26 * fVar26;
        fVar55 = auVar20._28_4_;
        auVar57._28_4_ = fVar55 * fVar55 + fVar95 * fVar95 + fVar30 * fVar30;
        auVar12 = vsqrtps_avx(auVar57);
        auVar11._4_4_ = param_5;
        auVar11._0_4_ = param_5;
        auVar11._8_4_ = param_5;
        auVar11._12_4_ = param_5;
        auVar11._16_4_ = param_5;
        auVar11._20_4_ = param_5;
        auVar11._24_4_ = param_5;
        auVar11._28_4_ = param_5;
        auVar12 = vdivps_avx(auVar11,auVar12);
        fVar64 = auVar12._0_4_;
        fVar65 = auVar12._4_4_;
        fVar66 = auVar12._8_4_;
        fVar67 = auVar12._12_4_;
        fVar68 = auVar12._16_4_;
        fVar69 = auVar12._20_4_;
        fVar78 = auVar12._24_4_;
        fVar80 = auVar12._28_4_;
        auVar20._0_4_ = -(auVar76._0_4_ * param_4) + auVar39._0_4_;
        auVar20._4_4_ = -(auVar76._4_4_ * param_4) + auVar39._4_4_;
        auVar20._8_4_ = -(auVar76._8_4_ * param_4) + auVar39._8_4_;
        auVar20._12_4_ = -(auVar76._12_4_ * param_4) + auVar39._12_4_;
        auVar20._16_4_ = -(auVar27._0_4_ * param_4) + auVar52._0_4_;
        auVar20._20_4_ = -(auVar27._4_4_ * param_4) + auVar52._4_4_;
        auVar20._24_4_ = -(auVar27._8_4_ * param_4) + auVar52._8_4_;
        auVar20._28_4_ = -(auVar27._12_4_ * param_4) + auVar52._12_4_;
        auVar39._4_4_ = __real_322bcc77;
        auVar39._0_4_ = __real_322bcc77;
        auVar39._8_4_ = __real_322bcc77;
        auVar39._12_4_ = __real_322bcc77;
        auVar39._16_4_ = __real_322bcc77;
        auVar39._20_4_ = __real_322bcc77;
        auVar39._24_4_ = __real_322bcc77;
        auVar39._28_4_ = __real_322bcc77;
        auVar39 = vcmpps_avx(auVar57,auVar39,1);
        auVar12._4_4_ = fVar10;
        auVar12._0_4_ = fVar10;
        auVar12._8_4_ = fVar10;
        auVar12._12_4_ = fVar10;
        auVar12._16_4_ = fVar10;
        auVar12._20_4_ = fVar10;
        auVar12._24_4_ = fVar10;
        auVar12._28_4_ = fVar10;
        auVar12 = vcmpps_avx(auVar57,auVar12,1);
        uVar87 = auVar12._0_4_;
        auVar52._0_4_ = uVar87 & (uint)(fVar64 * fVar81 + auVar75._0_4_);
        uVar88 = auVar12._4_4_;
        auVar52._4_4_ = uVar88 & (uint)(fVar65 * fVar82 + auVar75._4_4_);
        uVar89 = auVar12._8_4_;
        auVar52._8_4_ = uVar89 & (uint)(fVar66 * fVar83 + auVar75._8_4_);
        uVar90 = auVar12._12_4_;
        auVar52._12_4_ = uVar90 & (uint)(fVar67 * fVar84 + auVar75._12_4_);
        uVar91 = auVar12._16_4_;
        auVar52._16_4_ = uVar91 & (uint)(fVar68 * fVar85 + auVar75._16_4_);
        uVar92 = auVar12._20_4_;
        auVar52._20_4_ = uVar92 & (uint)(fVar69 * fVar86 + auVar75._20_4_);
        uVar94 = auVar12._24_4_;
        auVar52._24_4_ = uVar94 & (uint)(fVar78 * fVar93 + auVar75._24_4_);
        uVar96 = auVar12._28_4_;
        auVar52._28_4_ = uVar96 & (uint)(fVar80 * fVar95 + auVar75._28_4_);
        auVar77 = ZEXT1264(ZEXT412(0)) << 0x20;
        auVar12 = vblendvps_avx(auVar52,auVar20,auVar39);
        auVar52 = vcmpps_avx(ZEXT1232(ZEXT412(0)) << 0x20,auVar12,4);
        auVar76._0_4_ = auVar52._0_4_ & auVar38._0_4_;
        auVar76._4_4_ = auVar52._4_4_ & auVar38._4_4_;
        auVar76._8_4_ = auVar52._8_4_ & auVar38._8_4_;
        auVar76._12_4_ = auVar52._12_4_ & auVar38._12_4_;
        auVar76._16_4_ = auVar52._16_4_ & auVar38._16_4_;
        auVar76._20_4_ = auVar52._20_4_ & auVar38._20_4_;
        auVar76._24_4_ = auVar52._24_4_ & auVar38._24_4_;
        auVar76._28_4_ = auVar52._28_4_ & auVar38._28_4_;
        uVar15 = vmovmskps_avx(auVar76);
        if (uVar15 != 0) {
          auVar45._0_4_ = -(param_4 * auVar59._0_4_) + auVar47._0_4_;
          auVar45._4_4_ = -(param_4 * auVar59._4_4_) + auVar47._4_4_;
          auVar45._8_4_ = -(param_4 * auVar59._8_4_) + auVar47._8_4_;
          auVar45._12_4_ = -(param_4 * auVar59._12_4_) + auVar47._12_4_;
          auVar45._16_4_ = -(param_4 * auVar59._16_4_) + auVar47._16_4_;
          auVar45._20_4_ = -(param_4 * auVar59._20_4_) + auVar47._20_4_;
          auVar45._24_4_ = -(param_4 * auVar59._24_4_) + auVar47._24_4_;
          auVar45._28_4_ = -(param_4 * auVar59._28_4_) + auVar47._28_4_;
          auVar27._0_4_ = -(param_4 * auVar21._0_4_) + auVar23._0_4_;
          auVar27._4_4_ = -(param_4 * auVar21._4_4_) + auVar23._4_4_;
          auVar27._8_4_ = -(param_4 * auVar21._8_4_) + auVar23._8_4_;
          auVar27._12_4_ = -(param_4 * auVar21._12_4_) + auVar23._12_4_;
          auVar27._16_4_ = -(param_4 * auVar21._16_4_) + auVar23._16_4_;
          auVar27._20_4_ = -(param_4 * auVar21._20_4_) + auVar23._20_4_;
          auVar27._24_4_ = -(param_4 * auVar21._24_4_) + auVar23._24_4_;
          auVar27._28_4_ = -(param_4 * auVar21._28_4_) + auVar23._28_4_;
          auVar38._0_4_ = uVar87 & (uint)(fVar64 * fVar4 + auVar63._0_4_);
          auVar38._4_4_ = uVar88 & (uint)(fVar65 * fVar5 + auVar63._4_4_);
          auVar38._8_4_ = uVar89 & (uint)(fVar66 * fVar6 + auVar63._8_4_);
          auVar38._12_4_ = uVar90 & (uint)(fVar67 * fVar7 + auVar63._12_4_);
          auVar38._16_4_ = uVar91 & (uint)(fVar68 * fVar8 + auVar63._16_4_);
          auVar38._20_4_ = uVar92 & (uint)(fVar69 * fVar9 + auVar63._20_4_);
          auVar38._24_4_ = uVar94 & (uint)(fVar78 * fVar26 + auVar63._24_4_);
          auVar38._28_4_ = uVar96 & (uint)(fVar80 * fVar30 + auVar63._28_4_);
          auVar38 = vblendvps_avx(auVar38,auVar45,auVar39);
          auVar21._0_4_ = uVar87 & (uint)(fVar64 * fVar31 + auVar70._0_4_);
          auVar21._4_4_ = uVar88 & (uint)(fVar65 * fVar32 + auVar70._4_4_);
          auVar21._8_4_ = uVar89 & (uint)(fVar66 * fVar33 + auVar70._8_4_);
          auVar21._12_4_ = uVar90 & (uint)(fVar67 * fVar34 + auVar70._12_4_);
          auVar21._16_4_ = uVar91 & (uint)(fVar68 * fVar35 + auVar70._16_4_);
          auVar21._20_4_ = uVar92 & (uint)(fVar69 * fVar36 + auVar70._20_4_);
          auVar21._24_4_ = uVar94 & (uint)(fVar78 * fVar54 + auVar70._24_4_);
          auVar21._28_4_ = uVar96 & (uint)(fVar80 * fVar55 + auVar70._28_4_);
          auVar21 = vblendvps_avx(auVar21,auVar27,auVar39);
          cVar13 = (char)uVar15;
          if (cVar13 == -1) {
            auVar22 = vunpcklps_avx(auVar12,auVar38);
            auVar58 = vunpcklps_avx(auVar21,auVar46);
            auVar28 = vunpcklpd_avx(auVar22,auVar58);
            auVar22 = vunpckhpd_avx(auVar22,auVar58);
            auVar58 = vunpckhps_avx(auVar12,auVar38);
            auVar51 = vunpckhps_avx(auVar21,auVar46);
            auVar38 = vunpcklpd_avx(auVar58,auVar51);
            auVar46._16_16_ = auVar22._0_16_;
            auVar46._0_16_ = auVar28._0_16_;
            *pauVar19 = auVar46;
            auVar58 = vunpckhpd_avx(auVar58,auVar51);
            auVar51._16_16_ = auVar58._0_16_;
            auVar51._0_16_ = auVar38._0_16_;
            pauVar19[1] = auVar51;
            auVar22 = vperm2f128_avx(auVar28,auVar22,0x31);
            pauVar19[2] = auVar22;
            auVar22 = vperm2f128_avx(auVar38,auVar58,0x31);
            pauVar19[3] = auVar22;
          }
          else {
            auVar56 = auVar12._0_16_;
            auVar61 = auVar12._16_16_;
            auVar43 = auVar38._0_16_;
            auVar44 = auVar38._16_16_;
            auVar37 = auVar21._0_16_;
            auVar42 = auVar21._16_16_;
            if ((uVar15 & 1) != 0) {
              *(int *)*pauVar19 = auVar12._0_4_;
            }
            if ((uVar15 & 2) != 0) {
              uVar2 = vextractps_avx(auVar56,1);
              *(undefined4 *)(*pauVar19 + 0x10) = uVar2;
            }
            if ((uVar15 & 4) != 0) {
              uVar2 = vextractps_avx(auVar56,2);
              *(undefined4 *)pauVar19[1] = uVar2;
            }
            if ((uVar15 & 8) != 0) {
              uVar2 = vextractps_avx(auVar56,3);
              *(undefined4 *)(pauVar19[1] + 0x10) = uVar2;
            }
            if ((uVar15 & 0x10) != 0) {
              *(int *)pauVar19[2] = auVar12._16_4_;
            }
            if ((uVar15 & 0x20) != 0) {
              uVar2 = vextractps_avx(auVar61,1);
              *(undefined4 *)(pauVar19[2] + 0x10) = uVar2;
            }
            if ((uVar15 & 0x40) != 0) {
              uVar2 = vextractps_avx(auVar61,2);
              *(undefined4 *)pauVar19[3] = uVar2;
            }
            if (cVar13 < '\0') {
              uVar2 = vextractps_avx(auVar61,3);
              *(undefined4 *)(pauVar19[3] + 0x10) = uVar2;
            }
            if ((uVar15 & 1) != 0) {
              *(int *)(*pauVar19 + 4) = auVar38._0_4_;
            }
            if ((uVar15 & 2) != 0) {
              uVar2 = vextractps_avx(auVar43,1);
              *(undefined4 *)(*pauVar19 + 0x14) = uVar2;
            }
            if ((uVar15 & 4) != 0) {
              uVar2 = vextractps_avx(auVar43,2);
              *(undefined4 *)(pauVar19[1] + 4) = uVar2;
            }
            if ((uVar15 & 8) != 0) {
              uVar2 = vextractps_avx(auVar43,3);
              *(undefined4 *)(pauVar19[1] + 0x14) = uVar2;
            }
            if ((uVar15 & 0x10) != 0) {
              *(int *)(pauVar19[2] + 4) = auVar38._16_4_;
            }
            if ((uVar15 & 0x20) != 0) {
              uVar2 = vextractps_avx(auVar44,1);
              *(undefined4 *)(pauVar19[2] + 0x14) = uVar2;
            }
            if ((uVar15 & 0x40) != 0) {
              uVar2 = vextractps_avx(auVar44,2);
              *(undefined4 *)(pauVar19[3] + 4) = uVar2;
            }
            if (cVar13 < '\0') {
              uVar2 = vextractps_avx(auVar44,3);
              *(undefined4 *)(pauVar19[3] + 0x14) = uVar2;
            }
            if ((uVar15 & 1) != 0) {
              *(int *)(*pauVar19 + 8) = auVar21._0_4_;
            }
            if ((uVar15 & 2) != 0) {
              uVar2 = vextractps_avx(auVar37,1);
              *(undefined4 *)(*pauVar19 + 0x18) = uVar2;
            }
            if ((uVar15 & 4) != 0) {
              uVar2 = vextractps_avx(auVar37,2);
              *(undefined4 *)(pauVar19[1] + 8) = uVar2;
            }
            if ((uVar15 & 8) != 0) {
              uVar2 = vextractps_avx(auVar37,3);
              *(undefined4 *)(pauVar19[1] + 0x18) = uVar2;
            }
            if ((uVar15 & 0x10) != 0) {
              *(int *)(pauVar19[2] + 8) = auVar21._16_4_;
            }
            if ((uVar15 & 0x20) != 0) {
              uVar2 = vextractps_avx(auVar42,1);
              *(undefined4 *)(pauVar19[2] + 0x18) = uVar2;
            }
            if ((uVar15 & 0x40) != 0) {
              uVar2 = vextractps_avx(auVar42,2);
              *(undefined4 *)(pauVar19[3] + 8) = uVar2;
            }
            if (cVar13 < '\0') {
              uVar2 = vextractps_avx(auVar42,3);
              *(undefined4 *)(pauVar19[3] + 0x18) = uVar2;
            }
            if ((uVar15 & 1) != 0) {
              uVar2 = vextractps_avx(auVar22._0_16_,3);
              *(undefined4 *)(*pauVar19 + 0xc) = uVar2;
            }
            if ((uVar15 & 2) != 0) {
              uVar2 = vextractps_avx(auVar22._16_16_,3);
              *(undefined4 *)(*pauVar19 + 0x1c) = uVar2;
            }
            if ((uVar15 & 4) != 0) {
              uVar2 = vextractps_avx(auVar58._0_16_,3);
              *(undefined4 *)(pauVar19[1] + 0xc) = uVar2;
            }
            if ((uVar15 & 8) != 0) {
              uVar2 = vextractps_avx(auVar58._16_16_,3);
              *(undefined4 *)(pauVar19[1] + 0x1c) = uVar2;
            }
            if ((uVar15 & 0x10) != 0) {
              uVar2 = vextractps_avx(auVar51._0_16_,3);
              *(undefined4 *)(pauVar19[2] + 0xc) = uVar2;
            }
            if ((uVar15 & 0x20) != 0) {
              uVar2 = vextractps_avx(auVar51._16_16_,3);
              *(undefined4 *)(pauVar19[2] + 0x1c) = uVar2;
            }
            if ((uVar15 & 0x40) != 0) {
              uVar2 = vextractps_avx(auVar28._0_16_,3);
              *(undefined4 *)(pauVar19[3] + 0xc) = uVar2;
            }
            if (cVar13 < '\0') {
              uVar2 = vextractps_avx(auVar28._16_16_,3);
              *(undefined4 *)(pauVar19[3] + 0x1c) = uVar2;
            }
          }
        }
      }
      uVar18 = uVar18 + 8;
      pauVar19 = pauVar19 + 4;
      lVar16 = lVar16 + 0x60;
    } while (uVar18 < (uVar14 & 0xfffffff8));
    if ((int)param_7 <= (int)uVar18) {
      return;
    }
  }
  iVar17 = (int)uVar18;
  auVar22._4_4_ = iVar17;
  auVar22._0_4_ = iVar17;
  auVar22._8_4_ = iVar17;
  auVar22._12_4_ = iVar17;
  auVar22._16_4_ = iVar17;
  auVar22._20_4_ = iVar17;
  auVar22._24_4_ = iVar17;
  auVar22._28_4_ = iVar17;
  auVar22 = vpor_avx2(auVar22,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar58._4_4_ = param_7;
  auVar58._0_4_ = param_7;
  auVar58._8_4_ = param_7;
  auVar58._12_4_ = param_7;
  auVar58._16_4_ = param_7;
  auVar58._20_4_ = param_7;
  auVar58._24_4_ = param_7;
  auVar58._28_4_ = param_7;
  auVar22 = vpcmpgtd_avx2(auVar58,auVar22);
  lVar16 = (longlong)(param_6 + iVar17);
  pauVar19 = (undefined1 (*) [32])(param_1 + lVar16 * 0x10);
  iVar17 = vmovmskps_avx(auVar22);
  if (iVar17 == 0xff) {
    auVar51 = vperm2f128_avx(*pauVar19,pauVar19[2],0x20);
    auVar28 = vperm2f128_avx(*pauVar19,pauVar19[2],0x31);
    auVar38 = vperm2f128_avx(pauVar19[1],pauVar19[3],0x20);
    auVar21 = vperm2f128_avx(pauVar19[1],pauVar19[3],0x31);
    auVar58 = vunpcklps_avx(auVar51,auVar28);
    auVar51 = vunpckhps_avx(auVar51,auVar28);
    auVar46 = vunpcklps_avx(auVar38,auVar21);
    auVar28 = vunpckhps_avx(auVar38,auVar21);
    auVar38 = vunpcklpd_avx(auVar58,auVar46);
    auVar58 = vunpckhpd_avx(auVar58,auVar46);
    auVar46 = vunpcklpd_avx(auVar51,auVar28);
    auVar51 = vunpckhpd_avx(auVar51,auVar28);
  }
  else {
    auVar38 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar22);
    auVar58 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar22);
    auVar46 = vgatherdps(ZEXT832(0),auVar22);
    auVar51 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar22);
  }
  auVar28 = vmaskmovps_avx(auVar22,auVar38);
  auVar58 = vmaskmovps_avx(auVar22,auVar58);
  auVar38 = vmaskmovps_avx(auVar22,auVar46);
  auVar46 = vcmpps_avx(auVar51,ZEXT1232(ZEXT812(0)),4);
  auVar46 = auVar22 & auVar46;
  if ((((((((SUB321(auVar46 >> 0x1f,0) & 1) != 0 || (SUB321(auVar46 >> 0x3f,0) & 1) != 0) ||
          (SUB321(auVar46 >> 0x5f,0) & 1) != 0) || SUB321(auVar46 >> 0x7f,0) != '\0') ||
        (SUB321(auVar46 >> 0x9f,0) & 1) != 0) || SUB321(auVar46 >> 0xbf,0) != '\0') ||
      (SUB321(auVar46 >> 0xdf,0) & 1) != 0) || auVar46[0x1f] < '\0') {
    pauVar1 = (undefined1 (*) [32])(param_2 + lVar16 * 0xc);
    if ((char)iVar17 == -1) {
      auVar46 = pauVar1[1];
      auVar21 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar46);
      auVar12 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,*pauVar1);
      auVar21 = vblendps_avx(auVar12,auVar21,0x88);
      auVar12 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar46);
      auVar39 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,pauVar1[2]);
      auVar12 = vblendps_avx(auVar39,auVar12,0x13);
      auVar47._16_16_ = auVar12._0_16_;
      auVar47._0_16_ = auVar21._0_16_;
      auVar76 = vperm2f128_avx(auVar21,auVar12,0x31);
      auVar46 = vblendps_avx(auVar46,*pauVar1,0x24);
      auVar46 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar46);
      auVar21 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,pauVar1[2]);
      auVar39 = vblendps_avx(auVar46,auVar21,0xe0);
      auVar46 = *(undefined1 (*) [32])(param_3 + lVar16 * 0xc);
      auVar21 = *(undefined1 (*) [32])(param_3 + 0x20 + lVar16 * 0xc);
      auVar12 = *(undefined1 (*) [32])(param_3 + 0x40 + lVar16 * 0xc);
      auVar52 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar21);
      auVar23 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar46);
      auVar52 = vblendps_avx(auVar23,auVar52,0x88);
      auVar23 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar21);
      auVar27 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,auVar12);
      auVar23 = vblendps_avx(auVar27,auVar23,0x13);
      auVar59._16_16_ = auVar23._0_16_;
      auVar59._0_16_ = auVar52._0_16_;
      auVar52 = vperm2f128_avx(auVar52,auVar23,0x31);
      auVar46 = vblendps_avx(auVar21,auVar46,0x24);
      auVar46 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar46);
      auVar21 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,auVar12);
      auVar46 = vblendps_avx(auVar46,auVar21,0xe0);
    }
    else {
      auVar47 = vgatherdps(ZEXT832(0) << 0x20,auVar22);
      auVar76 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar22);
      auVar39 = vgatherdps(ZEXT832(0),auVar22);
      auVar59 = vgatherdps(ZEXT832(0) << 0x20,auVar22);
      auVar52 = vgatherdps(ZEXT832(0),auVar22);
      auVar46 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar22);
    }
    fVar3 = param_5 + param_4;
    auVar73._0_4_ = -(fVar3 * auVar59._0_4_) + auVar47._0_4_;
    auVar73._4_4_ = -(fVar3 * auVar59._4_4_) + auVar47._4_4_;
    auVar73._8_4_ = -(fVar3 * auVar59._8_4_) + auVar47._8_4_;
    auVar73._12_4_ = -(fVar3 * auVar59._12_4_) + auVar47._12_4_;
    auVar73._16_4_ = -(fVar3 * auVar59._16_4_) + auVar47._16_4_;
    auVar73._20_4_ = -(fVar3 * auVar59._20_4_) + auVar47._20_4_;
    auVar73._24_4_ = -(fVar3 * auVar59._24_4_) + auVar47._24_4_;
    auVar73._28_4_ = -(fVar3 * auVar59._28_4_) + auVar47._28_4_;
    auVar71._0_4_ = -(fVar3 * auVar52._0_4_) + auVar76._0_4_;
    auVar71._4_4_ = -(fVar3 * auVar52._4_4_) + auVar76._4_4_;
    auVar71._8_4_ = -(fVar3 * auVar52._8_4_) + auVar76._8_4_;
    auVar71._12_4_ = -(fVar3 * auVar52._12_4_) + auVar76._12_4_;
    auVar71._16_4_ = -(fVar3 * auVar52._16_4_) + auVar76._16_4_;
    auVar71._20_4_ = -(fVar3 * auVar52._20_4_) + auVar76._20_4_;
    auVar71._24_4_ = -(fVar3 * auVar52._24_4_) + auVar76._24_4_;
    auVar71._28_4_ = -(fVar3 * auVar52._28_4_) + auVar76._28_4_;
    auVar62._0_4_ = -(auVar46._0_4_ * fVar3) + auVar39._0_4_;
    auVar62._4_4_ = -(auVar46._4_4_ * fVar3) + auVar39._4_4_;
    auVar62._8_4_ = -(auVar46._8_4_ * fVar3) + auVar39._8_4_;
    auVar62._12_4_ = -(auVar46._12_4_ * fVar3) + auVar39._12_4_;
    auVar62._16_4_ = -(auVar46._16_4_ * fVar3) + auVar39._16_4_;
    auVar62._20_4_ = -(auVar46._20_4_ * fVar3) + auVar39._20_4_;
    auVar62._24_4_ = -(auVar46._24_4_ * fVar3) + auVar39._24_4_;
    auVar62._28_4_ = -(auVar46._28_4_ * fVar3) + auVar39._28_4_;
    auVar28 = vsubps_avx(auVar28,auVar73);
    auVar58 = vsubps_avx(auVar58,auVar71);
    auVar38 = vsubps_avx(auVar38,auVar62);
    fVar3 = auVar58._0_4_;
    fVar10 = auVar58._4_4_;
    fVar4 = auVar58._8_4_;
    fVar5 = auVar58._12_4_;
    fVar6 = auVar58._16_4_;
    fVar7 = auVar58._20_4_;
    fVar8 = auVar58._24_4_;
    fVar9 = auVar58._28_4_;
    fVar26 = auVar28._0_4_;
    fVar30 = auVar28._4_4_;
    fVar31 = auVar28._8_4_;
    fVar32 = auVar28._12_4_;
    fVar33 = auVar28._16_4_;
    fVar34 = auVar28._20_4_;
    fVar35 = auVar28._24_4_;
    fVar36 = auVar28._28_4_;
    fVar54 = auVar38._0_4_;
    auVar40._0_4_ = fVar54 * fVar54 + fVar26 * fVar26 + fVar3 * fVar3;
    fVar55 = auVar38._4_4_;
    auVar40._4_4_ = fVar55 * fVar55 + fVar30 * fVar30 + fVar10 * fVar10;
    fVar64 = auVar38._8_4_;
    auVar40._8_4_ = fVar64 * fVar64 + fVar31 * fVar31 + fVar4 * fVar4;
    fVar65 = auVar38._12_4_;
    auVar40._12_4_ = fVar65 * fVar65 + fVar32 * fVar32 + fVar5 * fVar5;
    fVar66 = auVar38._16_4_;
    auVar40._16_4_ = fVar66 * fVar66 + fVar33 * fVar33 + fVar6 * fVar6;
    fVar67 = auVar38._20_4_;
    auVar40._20_4_ = fVar67 * fVar67 + fVar34 * fVar34 + fVar7 * fVar7;
    fVar68 = auVar38._24_4_;
    auVar40._24_4_ = fVar68 * fVar68 + fVar35 * fVar35 + fVar8 * fVar8;
    fVar69 = auVar38._28_4_;
    auVar40._28_4_ = fVar69 * fVar69 + fVar36 * fVar36 + fVar9 * fVar9;
    auVar58 = vsqrtps_avx(auVar40);
    auVar79._4_4_ = param_5;
    auVar79._0_4_ = param_5;
    auVar79._8_4_ = param_5;
    auVar79._12_4_ = param_5;
    auVar79._16_4_ = param_5;
    auVar79._20_4_ = param_5;
    auVar79._24_4_ = param_5;
    auVar79._28_4_ = param_5;
    auVar58 = vdivps_avx(auVar79,auVar58);
    fVar78 = auVar58._0_4_;
    fVar80 = auVar58._4_4_;
    fVar81 = auVar58._8_4_;
    fVar82 = auVar58._12_4_;
    fVar83 = auVar58._16_4_;
    fVar84 = auVar58._20_4_;
    fVar85 = auVar58._24_4_;
    fVar86 = auVar58._28_4_;
    auVar60._0_4_ = -(param_4 * auVar59._0_4_) + auVar47._0_4_;
    auVar60._4_4_ = -(param_4 * auVar59._4_4_) + auVar47._4_4_;
    auVar60._8_4_ = -(param_4 * auVar59._8_4_) + auVar47._8_4_;
    auVar60._12_4_ = -(param_4 * auVar59._12_4_) + auVar47._12_4_;
    auVar60._16_4_ = -(param_4 * auVar59._16_4_) + auVar47._16_4_;
    auVar60._20_4_ = -(param_4 * auVar59._20_4_) + auVar47._20_4_;
    auVar60._24_4_ = -(param_4 * auVar59._24_4_) + auVar47._24_4_;
    auVar60._28_4_ = -(param_4 * auVar59._28_4_) + auVar47._28_4_;
    param_5 = param_5 * param_5;
    auVar28._4_4_ = param_5;
    auVar28._0_4_ = param_5;
    auVar28._8_4_ = param_5;
    auVar28._12_4_ = param_5;
    auVar28._16_4_ = param_5;
    auVar28._20_4_ = param_5;
    auVar28._24_4_ = param_5;
    auVar28._28_4_ = param_5;
    auVar58 = vcmpps_avx(auVar40,auVar28,1);
    auVar29._4_4_ = __real_322bcc77;
    auVar29._0_4_ = __real_322bcc77;
    auVar29._8_4_ = __real_322bcc77;
    auVar29._12_4_ = __real_322bcc77;
    auVar29._16_4_ = __real_322bcc77;
    auVar29._20_4_ = __real_322bcc77;
    auVar29._24_4_ = __real_322bcc77;
    auVar29._28_4_ = __real_322bcc77;
    auVar28 = vcmpps_avx(auVar40,auVar29,1);
    uVar15 = auVar58._0_4_;
    auVar48._0_4_ = uVar15 & (uint)(fVar78 * fVar26 + auVar73._0_4_);
    uVar87 = auVar58._4_4_;
    auVar48._4_4_ = uVar87 & (uint)(fVar80 * fVar30 + auVar73._4_4_);
    uVar88 = auVar58._8_4_;
    auVar48._8_4_ = uVar88 & (uint)(fVar81 * fVar31 + auVar73._8_4_);
    uVar89 = auVar58._12_4_;
    auVar48._12_4_ = uVar89 & (uint)(fVar82 * fVar32 + auVar73._12_4_);
    uVar90 = auVar58._16_4_;
    auVar48._16_4_ = uVar90 & (uint)(fVar83 * fVar33 + auVar73._16_4_);
    uVar91 = auVar58._20_4_;
    auVar48._20_4_ = uVar91 & (uint)(fVar84 * fVar34 + auVar73._20_4_);
    uVar92 = auVar58._24_4_;
    auVar48._24_4_ = uVar92 & (uint)(fVar85 * fVar35 + auVar73._24_4_);
    uVar94 = auVar58._28_4_;
    auVar48._28_4_ = uVar94 & (uint)(fVar86 * fVar36 + auVar73._28_4_);
    auVar58 = vblendvps_avx(auVar48,auVar60,auVar28);
    auVar38 = vcmpps_avx(auVar51,ZEXT432(0) << 0x20,4);
    auVar21 = vcmpps_avx(auVar58,ZEXT432(0) << 0x20,4);
    auVar23._0_4_ = auVar21._0_4_ & auVar38._0_4_ & auVar22._0_4_;
    auVar23._4_4_ = auVar21._4_4_ & auVar38._4_4_ & auVar22._4_4_;
    auVar23._8_4_ = auVar21._8_4_ & auVar38._8_4_ & auVar22._8_4_;
    auVar23._12_4_ = auVar21._12_4_ & auVar38._12_4_ & auVar22._12_4_;
    auVar23._16_4_ = auVar21._16_4_ & auVar38._16_4_ & auVar22._16_4_;
    auVar23._20_4_ = auVar21._20_4_ & auVar38._20_4_ & auVar22._20_4_;
    auVar23._24_4_ = auVar21._24_4_ & auVar38._24_4_ & auVar22._24_4_;
    auVar23._28_4_ = auVar21._28_4_ & auVar38._28_4_ & auVar22._28_4_;
    uVar14 = vmovmskps_avx(auVar23);
    if (uVar14 != 0) {
      auVar53._0_4_ = -(param_4 * auVar52._0_4_) + auVar76._0_4_;
      auVar53._4_4_ = -(param_4 * auVar52._4_4_) + auVar76._4_4_;
      auVar53._8_4_ = -(param_4 * auVar52._8_4_) + auVar76._8_4_;
      auVar53._12_4_ = -(param_4 * auVar52._12_4_) + auVar76._12_4_;
      auVar53._16_4_ = -(param_4 * auVar52._16_4_) + auVar76._16_4_;
      auVar53._20_4_ = -(param_4 * auVar52._20_4_) + auVar76._20_4_;
      auVar53._24_4_ = -(param_4 * auVar52._24_4_) + auVar76._24_4_;
      auVar53._28_4_ = -(param_4 * auVar52._28_4_) + auVar76._28_4_;
      auVar50._0_4_ = -(param_4 * auVar46._0_4_) + auVar39._0_4_;
      auVar50._4_4_ = -(param_4 * auVar46._4_4_) + auVar39._4_4_;
      auVar50._8_4_ = -(param_4 * auVar46._8_4_) + auVar39._8_4_;
      auVar50._12_4_ = -(param_4 * auVar46._12_4_) + auVar39._12_4_;
      auVar50._16_4_ = -(param_4 * auVar46._16_4_) + auVar39._16_4_;
      auVar50._20_4_ = -(param_4 * auVar46._20_4_) + auVar39._20_4_;
      auVar50._24_4_ = -(param_4 * auVar46._24_4_) + auVar39._24_4_;
      auVar50._28_4_ = -(param_4 * auVar46._28_4_) + auVar39._28_4_;
      auVar24._0_4_ = uVar15 & (uint)(fVar78 * fVar3 + auVar71._0_4_);
      auVar24._4_4_ = uVar87 & (uint)(fVar80 * fVar10 + auVar71._4_4_);
      auVar24._8_4_ = uVar88 & (uint)(fVar81 * fVar4 + auVar71._8_4_);
      auVar24._12_4_ = uVar89 & (uint)(fVar82 * fVar5 + auVar71._12_4_);
      auVar24._16_4_ = uVar90 & (uint)(fVar83 * fVar6 + auVar71._16_4_);
      auVar24._20_4_ = uVar91 & (uint)(fVar84 * fVar7 + auVar71._20_4_);
      auVar24._24_4_ = uVar92 & (uint)(fVar85 * fVar8 + auVar71._24_4_);
      auVar24._28_4_ = uVar94 & (uint)(fVar86 * fVar9 + auVar71._28_4_);
      auVar22 = vblendvps_avx(auVar24,auVar53,auVar28);
      auVar25._0_4_ = uVar15 & (uint)(fVar78 * fVar54 + auVar62._0_4_);
      auVar25._4_4_ = uVar87 & (uint)(fVar80 * fVar55 + auVar62._4_4_);
      auVar25._8_4_ = uVar88 & (uint)(fVar81 * fVar64 + auVar62._8_4_);
      auVar25._12_4_ = uVar89 & (uint)(fVar82 * fVar65 + auVar62._12_4_);
      auVar25._16_4_ = uVar90 & (uint)(fVar83 * fVar66 + auVar62._16_4_);
      auVar25._20_4_ = uVar91 & (uint)(fVar84 * fVar67 + auVar62._20_4_);
      auVar25._24_4_ = uVar92 & (uint)(fVar85 * fVar68 + auVar62._24_4_);
      auVar25._28_4_ = uVar94 & (uint)(fVar86 * fVar69 + auVar62._28_4_);
      auVar28 = vblendvps_avx(auVar25,auVar50,auVar28);
      cVar13 = (char)uVar14;
      if (cVar13 == -1) {
        auVar38 = vunpcklps_avx(auVar58,auVar22);
        auVar21 = vunpcklps_avx(auVar28,auVar51);
        auVar46 = vunpcklpd_avx(auVar38,auVar21);
        auVar38 = vunpckhpd_avx(auVar38,auVar21);
        auVar22 = vunpckhps_avx(auVar58,auVar22);
        auVar58 = vunpckhps_avx(auVar28,auVar51);
        auVar51 = vunpcklpd_avx(auVar22,auVar58);
        auVar49._16_16_ = auVar38._0_16_;
        auVar49._0_16_ = auVar46._0_16_;
        *pauVar19 = auVar49;
        auVar22 = vunpckhpd_avx(auVar22,auVar58);
        auVar41._16_16_ = auVar22._0_16_;
        auVar41._0_16_ = auVar51._0_16_;
        pauVar19[1] = auVar41;
        auVar58 = vperm2f128_avx(auVar46,auVar38,0x31);
        pauVar19[2] = auVar58;
        auVar22 = vperm2f128_avx(auVar51,auVar22,0x31);
        pauVar19[3] = auVar22;
      }
      else {
        auVar72 = auVar51._0_16_;
        auVar74 = auVar51._16_16_;
        auVar56 = auVar58._0_16_;
        auVar61 = auVar58._16_16_;
        auVar43 = auVar22._0_16_;
        auVar44 = auVar22._16_16_;
        auVar37 = auVar28._0_16_;
        auVar42 = auVar28._16_16_;
        if ((uVar14 & 1) != 0) {
          *(int *)*pauVar19 = auVar58._0_4_;
        }
        if ((uVar14 & 2) != 0) {
          uVar2 = vextractps_avx(auVar56,1);
          *(undefined4 *)(*pauVar19 + 0x10) = uVar2;
        }
        if ((uVar14 & 4) != 0) {
          uVar2 = vextractps_avx(auVar56,2);
          *(undefined4 *)pauVar19[1] = uVar2;
        }
        if ((uVar14 & 8) != 0) {
          uVar2 = vextractps_avx(auVar56,3);
          *(undefined4 *)(pauVar19[1] + 0x10) = uVar2;
        }
        if ((uVar14 & 0x10) != 0) {
          *(int *)pauVar19[2] = auVar58._16_4_;
        }
        if ((uVar14 & 0x20) != 0) {
          uVar2 = vextractps_avx(auVar61,1);
          *(undefined4 *)(pauVar19[2] + 0x10) = uVar2;
        }
        if ((uVar14 & 0x40) != 0) {
          uVar2 = vextractps_avx(auVar61,2);
          *(undefined4 *)pauVar19[3] = uVar2;
        }
        if (cVar13 < '\0') {
          uVar2 = vextractps_avx(auVar61,3);
          *(undefined4 *)(pauVar19[3] + 0x10) = uVar2;
        }
        if ((uVar14 & 1) != 0) {
          *(int *)(*pauVar19 + 4) = auVar22._0_4_;
        }
        if ((uVar14 & 2) != 0) {
          uVar2 = vextractps_avx(auVar43,1);
          *(undefined4 *)(*pauVar19 + 0x14) = uVar2;
        }
        if ((uVar14 & 4) != 0) {
          uVar2 = vextractps_avx(auVar43,2);
          *(undefined4 *)(pauVar19[1] + 4) = uVar2;
        }
        if ((uVar14 & 8) != 0) {
          uVar2 = vextractps_avx(auVar43,3);
          *(undefined4 *)(pauVar19[1] + 0x14) = uVar2;
        }
        if ((uVar14 & 0x10) != 0) {
          *(int *)(pauVar19[2] + 4) = auVar22._16_4_;
        }
        if ((uVar14 & 0x20) != 0) {
          uVar2 = vextractps_avx(auVar44,1);
          *(undefined4 *)(pauVar19[2] + 0x14) = uVar2;
        }
        if ((uVar14 & 0x40) != 0) {
          uVar2 = vextractps_avx(auVar44,2);
          *(undefined4 *)(pauVar19[3] + 4) = uVar2;
        }
        if (cVar13 < '\0') {
          uVar2 = vextractps_avx(auVar44,3);
          *(undefined4 *)(pauVar19[3] + 0x14) = uVar2;
        }
        if ((uVar14 & 1) != 0) {
          *(int *)(*pauVar19 + 8) = auVar28._0_4_;
        }
        if ((uVar14 & 2) != 0) {
          uVar2 = vextractps_avx(auVar37,1);
          *(undefined4 *)(*pauVar19 + 0x18) = uVar2;
        }
        if ((uVar14 & 4) != 0) {
          uVar2 = vextractps_avx(auVar37,2);
          *(undefined4 *)(pauVar19[1] + 8) = uVar2;
        }
        if ((uVar14 & 8) != 0) {
          uVar2 = vextractps_avx(auVar37,3);
          *(undefined4 *)(pauVar19[1] + 0x18) = uVar2;
        }
        if ((uVar14 & 0x10) != 0) {
          *(int *)(pauVar19[2] + 8) = auVar28._16_4_;
        }
        if ((uVar14 & 0x20) != 0) {
          uVar2 = vextractps_avx(auVar42,1);
          *(undefined4 *)(pauVar19[2] + 0x18) = uVar2;
        }
        if ((uVar14 & 0x40) != 0) {
          uVar2 = vextractps_avx(auVar42,2);
          *(undefined4 *)(pauVar19[3] + 8) = uVar2;
        }
        if (cVar13 < '\0') {
          uVar2 = vextractps_avx(auVar42,3);
          *(undefined4 *)(pauVar19[3] + 0x18) = uVar2;
        }
        if ((uVar14 & 1) != 0) {
          *(int *)(*pauVar19 + 0xc) = auVar51._0_4_;
        }
        if ((uVar14 & 2) != 0) {
          uVar2 = vextractps_avx(auVar72,1);
          *(undefined4 *)(*pauVar19 + 0x1c) = uVar2;
        }
        if ((uVar14 & 4) != 0) {
          uVar2 = vextractps_avx(auVar72,2);
          *(undefined4 *)(pauVar19[1] + 0xc) = uVar2;
        }
        if ((uVar14 & 8) != 0) {
          uVar2 = vextractps_avx(auVar72,3);
          *(undefined4 *)(pauVar19[1] + 0x1c) = uVar2;
        }
        if ((uVar14 & 0x10) != 0) {
          *(int *)(pauVar19[2] + 0xc) = auVar51._16_4_;
        }
        if ((uVar14 & 0x20) != 0) {
          uVar2 = vextractps_avx(auVar74,1);
          *(undefined4 *)(pauVar19[2] + 0x1c) = uVar2;
        }
        if ((uVar14 & 0x40) != 0) {
          uVar2 = vextractps_avx(auVar74,2);
          *(undefined4 *)(pauVar19[3] + 0xc) = uVar2;
        }
        if (cVar13 < '\0') {
          uVar2 = vextractps_avx(auVar74,3);
          *(undefined4 *)(pauVar19[3] + 0x1c) = uVar2;
        }
      }
    }
  }
  return;
}

// ApplySphericalBackstopConstraints_avx2 @ 14032e000

void ApplySphericalBackstopConstraints_avx2(void)

{
  ApplySphericalBackstopConstraintsWithMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_CunfCunfCunfCunfCuniCuni_avx2
            ();
  return;
}

