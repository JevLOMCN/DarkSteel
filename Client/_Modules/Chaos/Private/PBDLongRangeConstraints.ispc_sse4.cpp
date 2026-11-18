// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 8

// ApplyLongRangeConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFTether_5D__3E_CunfCunfCuniCuni_sse4 @ 1402f80c0

/* WARNING: Removing unreachable block (ram,0x0001402f8d7c) */
/* WARNING: Removing unreachable block (ram,0x0001402f8aa3) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLongRangeConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFTether_5D__3E_CunfCunfCuniCuni_sse4
               (longlong param_1,longlong param_2,float param_3,float param_4,uint param_5,
               int param_6)

{
  undefined1 (*pauVar1) [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  float *pfVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  bool bVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined4 uVar38;
  float fVar39;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar51;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar60;
  float fVar63;
  float fVar64;
  undefined1 unaff_XMM12 [16];
  float fVar65;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar66;
  float fVar70;
  float fVar71;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  
  uVar23 = param_5 + 3;
  if (-1 < (int)param_5) {
    uVar23 = param_5;
  }
  if ((int)(uVar23 & 0xfffffffc) < 1) {
    uVar13 = 0;
    if ((int)param_5 < 1) {
      return;
    }
  }
  else {
    pfVar15 = (float *)(param_2 + 0x20);
    uVar13 = 0;
    do {
      auVar35 = *(undefined1 (*) [16])(pfVar15 + -8);
      auVar69 = *(undefined1 (*) [16])(pfVar15 + -4);
      uVar38 = auVar69._0_4_;
      auVar32._4_4_ = uVar38;
      auVar32._0_4_ = uVar38;
      auVar32._8_4_ = uVar38;
      auVar32._12_4_ = uVar38;
      iVar14 = auVar35._12_4_;
      auVar74._0_8_ = CONCAT44(iVar14,auVar35._0_4_);
      auVar74._8_4_ = auVar35._4_4_;
      auVar74._12_4_ = iVar14;
      auVar32 = pblendw(auVar32,auVar74,0x3f);
      auVar72._0_8_ = CONCAT44(pfVar15[1],auVar69._8_4_);
      auVar72._8_4_ = auVar69._12_4_;
      auVar72._12_4_ = pfVar15[2];
      in_XMM5._8_8_ = auVar72._0_8_;
      in_XMM5._0_8_ = auVar74._0_8_;
      auVar45._0_8_ = auVar35._8_8_;
      auVar45._8_4_ = auVar35._8_4_;
      auVar45._12_4_ = iVar14;
      in_XMM1._8_8_ = auVar72._8_8_;
      in_XMM1._0_8_ = auVar32._8_8_;
      lVar9 = (longlong)((auVar35._0_4_ + param_6) * 0x10);
      lVar8 = (longlong)((iVar14 + param_6) * 0x10);
      lVar19 = (longlong)((auVar69._8_4_ + param_6) * 0x10);
      lVar18 = (longlong)(((int)pfVar15[1] + param_6) * 0x10);
      lVar17 = (longlong)((auVar32._8_4_ + param_6) * 0x10);
      auVar67 = insertps(ZEXT416(*(uint *)(param_1 + lVar9)),*(undefined4 *)(param_1 + lVar8),0x10);
      lVar10 = (longlong)((auVar32._12_4_ + param_6) * 0x10);
      lVar12 = (longlong)((auVar69._12_4_ + param_6) * 0x10);
      auVar32 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar9)),
                         *(undefined4 *)(param_1 + 4 + lVar8),0x10);
      auVar35 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar9)),
                         *(undefined4 *)(param_1 + 8 + lVar8),0x10);
      lVar8 = (longlong)(((int)pfVar15[2] + param_6) * 0x10);
      auVar68 = insertps(auVar67,*(undefined4 *)(param_1 + lVar19),0x20);
      auVar32 = insertps(auVar32,*(undefined4 *)(param_1 + 4 + lVar19),0x20);
      auVar67 = insertps(ZEXT416(*(uint *)(param_1 + lVar17)),*(undefined4 *)(param_1 + lVar10),0x10
                        );
      auVar35 = insertps(auVar35,*(undefined4 *)(param_1 + 8 + lVar19),0x20);
      auVar67 = insertps(auVar67,*(undefined4 *)(param_1 + lVar12),0x20);
      auVar68 = insertps(auVar68,*(undefined4 *)(param_1 + lVar18),0x30);
      auVar74 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar17)),
                         *(undefined4 *)(param_1 + 4 + lVar10),0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)(param_1 + 4 + lVar18),0x30);
      auVar75 = insertps(auVar74,*(undefined4 *)(param_1 + 4 + lVar12),0x20);
      auVar35 = insertps(auVar35,*(undefined4 *)(param_1 + 8 + lVar18),0x30);
      auVar72 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar17)),
                         *(undefined4 *)(param_1 + 8 + lVar10),0x10);
      auVar74 = insertps(auVar67,*(undefined4 *)(param_1 + lVar8),0x30);
      auVar67 = insertps(auVar72,*(undefined4 *)(param_1 + 8 + lVar12),0x20);
      auVar76 = insertps(auVar75,*(undefined4 *)(param_1 + 4 + lVar8),0x30);
      auVar45 = pblendw(auVar45,auVar69,0xc);
      auVar73 = insertps(auVar67,*(undefined4 *)(param_1 + 8 + lVar8),0x30);
      in_XMM4._0_8_ = auVar45._0_8_;
      in_XMM4._8_4_ = *pfVar15;
      in_XMM4._12_4_ = pfVar15[3];
      auVar46._0_4_ = auVar68._0_4_ - auVar74._0_4_;
      auVar46._4_4_ = auVar68._4_4_ - auVar74._4_4_;
      auVar46._8_4_ = auVar68._8_4_ - auVar74._8_4_;
      auVar46._12_4_ = auVar68._12_4_ - auVar74._12_4_;
      auVar68._0_4_ = auVar32._0_4_ - auVar76._0_4_;
      auVar68._4_4_ = auVar32._4_4_ - auVar76._4_4_;
      auVar68._8_4_ = auVar32._8_4_ - auVar76._8_4_;
      auVar68._12_4_ = auVar32._12_4_ - auVar76._12_4_;
      auVar67._0_4_ = auVar35._0_4_ - auVar73._0_4_;
      auVar67._4_4_ = auVar35._4_4_ - auVar73._4_4_;
      auVar67._8_4_ = auVar35._8_4_ - auVar73._8_4_;
      auVar67._12_4_ = auVar35._12_4_ - auVar73._12_4_;
      uVar38 = *(undefined4 *)(param_1 + 0xc + lVar17);
      uVar2 = *(undefined4 *)(param_1 + 0xc + lVar10);
      auVar35._0_4_ =
           auVar67._0_4_ * auVar67._0_4_ +
           auVar68._0_4_ * auVar68._0_4_ + auVar46._0_4_ * auVar46._0_4_;
      auVar35._4_4_ =
           auVar67._4_4_ * auVar67._4_4_ +
           auVar68._4_4_ * auVar68._4_4_ + auVar46._4_4_ * auVar46._4_4_;
      auVar35._8_4_ =
           auVar67._8_4_ * auVar67._8_4_ +
           auVar68._8_4_ * auVar68._8_4_ + auVar46._8_4_ * auVar46._8_4_;
      auVar35._12_4_ =
           auVar67._12_4_ * auVar67._12_4_ +
           auVar68._12_4_ * auVar68._12_4_ + auVar46._12_4_ * auVar46._12_4_;
      auVar72 = sqrtps(unaff_XMM12,auVar35);
      uVar21 = -(uint)(auVar72._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
      uVar24 = -(uint)(auVar72._4_4_ < _UNK_1506895e4);
      uVar26 = -(uint)(auVar72._8_4_ < _UNK_1506895e8);
      uVar28 = -(uint)(auVar72._12_4_ < _UNK_1506895ec);
      auVar69._4_4_ = uVar24;
      auVar69._0_4_ = uVar21;
      auVar69._8_4_ = uVar26;
      auVar69._12_4_ = uVar28;
      auVar75 = divps(auVar46,auVar72);
      auVar32 = divps(auVar68,auVar72);
      auVar35 = divps(auVar67,auVar72);
      auVar69 = blendvps(auVar75,___xmm_3f8000003f8000003f8000003f800000,auVar69);
      uVar3 = *(undefined4 *)(param_1 + 0xc + lVar12);
      fVar60 = auVar72._0_4_ - param_4 * auVar45._0_4_;
      fVar63 = auVar72._4_4_ - param_4 * auVar45._4_4_;
      fVar64 = auVar72._8_4_ - param_4 * *pfVar15;
      fVar65 = auVar72._12_4_ - param_4 * pfVar15[3];
      fVar39 = param_3 * fVar60;
      fVar42 = param_3 * fVar63;
      fVar43 = param_3 * fVar64;
      fVar44 = param_3 * fVar65;
      uVar22 = -(uint)(fVar60 < __xmm_00000000000000000000000000000000);
      uVar25 = -(uint)(fVar63 < _UNK_150aa8f64);
      uVar27 = -(uint)(fVar64 < (float)DAT_150aa8f68);
      uVar29 = -(uint)(fVar65 < DAT_150aa8f68._4_4_);
      uVar4 = *(undefined4 *)(param_1 + 0xc + lVar8);
      auVar75._0_4_ = (float)(~uVar22 & (uint)(auVar69._0_4_ * fVar39)) + auVar74._0_4_;
      auVar75._4_4_ = (float)(~uVar25 & (uint)(auVar69._4_4_ * fVar42)) + auVar74._4_4_;
      auVar75._8_4_ = (float)(~uVar27 & (uint)(auVar69._8_4_ * fVar43)) + auVar74._8_4_;
      auVar75._12_4_ = (float)(~uVar29 & (uint)(auVar69._12_4_ * fVar44)) + auVar74._12_4_;
      *(float *)(param_1 + lVar17) = auVar75._0_4_;
      uVar5 = extractps(auVar75,1);
      *(undefined8 *)(param_1 + lVar10) = uVar5;
      uVar5 = extractps(auVar75,2);
      *(undefined8 *)(param_1 + lVar12) = uVar5;
      auVar62._0_4_ =
           (float)(~uVar22 & (uint)((float)(~uVar21 & auVar32._0_4_) * fVar39)) + auVar76._0_4_;
      auVar62._4_4_ =
           (float)(~uVar25 & (uint)((float)(~uVar24 & auVar32._4_4_) * fVar42)) + auVar76._4_4_;
      auVar62._8_4_ =
           (float)(~uVar27 & (uint)((float)(~uVar26 & auVar32._8_4_) * fVar43)) + auVar76._8_4_;
      auVar62._12_4_ =
           (float)(~uVar29 & (uint)((float)(~uVar28 & auVar32._12_4_) * fVar44)) + auVar76._12_4_;
      uVar5 = extractps(auVar75,3);
      *(undefined8 *)(param_1 + lVar8) = uVar5;
      *(float *)(param_1 + 4 + lVar17) = auVar62._0_4_;
      uVar5 = extractps(auVar62,1);
      *(undefined8 *)(param_1 + 4 + lVar10) = uVar5;
      uVar5 = extractps(auVar62,2);
      *(undefined8 *)(param_1 + 4 + lVar12) = uVar5;
      unaff_XMM12._0_4_ =
           (float)(~uVar22 & (uint)(fVar39 * (float)(~uVar21 & auVar35._0_4_))) + auVar73._0_4_;
      unaff_XMM12._4_4_ =
           (float)(~uVar25 & (uint)(fVar42 * (float)(~uVar24 & auVar35._4_4_))) + auVar73._4_4_;
      unaff_XMM12._8_4_ =
           (float)(~uVar27 & (uint)(fVar43 * (float)(~uVar26 & auVar35._8_4_))) + auVar73._8_4_;
      unaff_XMM12._12_4_ =
           (float)(~uVar29 & (uint)(fVar44 * (float)(~uVar28 & auVar35._12_4_))) + auVar73._12_4_;
      uVar5 = extractps(auVar62,3);
      *(undefined8 *)(param_1 + 4 + lVar8) = uVar5;
      *(float *)(param_1 + 8 + lVar17) = unaff_XMM12._0_4_;
      uVar5 = extractps(unaff_XMM12,1);
      *(undefined8 *)(param_1 + 8 + lVar10) = uVar5;
      uVar5 = extractps(unaff_XMM12,2);
      *(undefined8 *)(param_1 + 8 + lVar12) = uVar5;
      uVar5 = extractps(unaff_XMM12,3);
      *(undefined8 *)(param_1 + 8 + lVar8) = uVar5;
      *(undefined4 *)(param_1 + 0xc + lVar17) = uVar38;
      *(undefined4 *)(param_1 + 0xc + lVar10) = uVar2;
      *(undefined4 *)(param_1 + 0xc + lVar12) = uVar3;
      *(undefined4 *)(param_1 + 0xc + lVar8) = uVar4;
      pfVar15 = pfVar15 + 0xc;
      uVar13 = uVar13 + 4;
    } while ((int)uVar13 < (int)(uVar23 & 0xfffffffc));
    if ((int)param_5 <= (int)uVar13) {
      return;
    }
  }
  auVar73._0_4_ =
       -(uint)((int)(uVar13 | (uint)__xmm_00000003000000020000000100000000) < (int)param_5);
  auVar73._4_4_ =
       -(uint)((int)(uVar13 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_5);
  auVar73._8_4_ = -(uint)((int)(uVar13 | _UNK_150631e08) < (int)param_5);
  auVar73._12_4_ = -(uint)((int)(uVar13 | _UNK_150631e0c) < (int)param_5);
  pauVar1 = (undefined1 (*) [16])(param_2 + (ulonglong)uVar13 * 0xc);
  iVar14 = movmskps(uVar13,auVar73);
  bVar7 = (char)((char)iVar14 << 4) >> 4;
  if (iVar14 == 0xf) {
    auVar35 = *pauVar1;
    auVar69 = pauVar1[1];
    uVar38 = auVar69._0_4_;
    auVar57._4_4_ = uVar38;
    auVar57._0_4_ = uVar38;
    auVar57._8_4_ = uVar38;
    auVar57._12_4_ = uVar38;
    uVar38 = auVar35._12_4_;
    auVar53._0_8_ = CONCAT44(uVar38,auVar35._0_4_);
    auVar53._8_4_ = auVar35._4_4_;
    auVar53._12_4_ = uVar38;
    auVar32 = pblendw(auVar57,auVar53,0x3f);
    auVar49._0_8_ = auVar35._8_8_;
    auVar49._8_4_ = auVar35._8_4_;
    auVar49._12_4_ = uVar38;
    auVar35 = pblendw(auVar49,auVar69,0xc);
    auVar41._0_8_ = CONCAT44(*(undefined4 *)(pauVar1[2] + 4),auVar69._8_4_);
    auVar41._8_4_ = auVar69._12_4_;
    auVar41._12_4_ = *(undefined4 *)(pauVar1[2] + 8);
    auVar76._8_8_ = auVar41._0_8_;
    auVar76._0_8_ = auVar53._0_8_;
    auVar34._8_8_ = auVar41._8_8_;
    auVar34._0_8_ = auVar32._8_8_;
    auVar48._0_8_ = auVar35._0_8_;
    auVar48._8_4_ = *(undefined4 *)pauVar1[2];
    auVar48._12_4_ = *(undefined4 *)(pauVar1[2] + 0xc);
    bVar20 = false;
  }
  else {
    auVar36._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar73._0_4_;
    auVar36._4_4_ = _UNK_150b50da4 & auVar73._4_4_;
    auVar36._8_4_ = _UNK_150b50da8 & auVar73._8_4_;
    auVar36._12_4_ = _UNK_150b50dac & auVar73._12_4_;
    lVar8 = extractps(auVar36,1);
    lVar9 = extractps(auVar36,2);
    lVar10 = extractps(auVar36,3);
    auVar76._4_4_ = *(undefined4 *)(*pauVar1 + lVar8);
    auVar76._0_4_ = *(undefined4 *)*pauVar1;
    auVar76._12_4_ = *(undefined4 *)(*pauVar1 + lVar10);
    auVar76._8_4_ = *(undefined4 *)(*pauVar1 + lVar9);
    auVar35 = ___xmm_000000280000001c0000001000000004 & auVar73;
    auVar34._4_4_ = *(undefined4 *)(*pauVar1 + auVar35._4_4_);
    auVar34._0_4_ = *(undefined4 *)(*pauVar1 + auVar35._0_4_);
    auVar34._12_4_ = *(undefined4 *)(*pauVar1 + auVar35._12_4_);
    auVar34._8_4_ = *(undefined4 *)(*pauVar1 + auVar35._8_4_);
    auVar35 = ___xmm_0000002c000000200000001400000008 & auVar73;
    auVar48._4_4_ = *(undefined4 *)(*pauVar1 + auVar35._4_4_);
    auVar48._0_4_ = *(undefined4 *)(*pauVar1 + auVar35._0_4_);
    auVar48._12_4_ = *(undefined4 *)(*pauVar1 + auVar35._12_4_);
    auVar48._8_4_ = *(undefined4 *)(*pauVar1 + auVar35._8_4_);
    bVar20 = (bVar7 & 1) == 0;
    auVar35 = in_XMM5;
    if (bVar20) goto LAB_1402f8568;
  }
  auVar35 = auVar76;
  auVar76 = auVar35;
LAB_1402f8568:
  if (bVar20) {
    auVar35 = pblendw(in_XMM5,auVar35,3);
    auVar69 = in_XMM4;
    auVar32 = in_XMM1;
  }
  else {
    auVar35 = pblendw(in_XMM5,auVar35,3);
    auVar69 = auVar48;
    auVar32 = auVar34;
  }
  if ((bVar7 & 2) == 0) {
    auVar32 = pblendw(in_XMM1,auVar32,3);
    auVar67 = pblendw(auVar35,auVar35,0xc);
    auVar35 = auVar32;
  }
  else {
    auVar32 = pblendw(in_XMM1,auVar32,3);
    auVar67 = pblendw(auVar35,auVar76,0xc);
    auVar35 = auVar34;
  }
  if ((bVar7 & 4) == 0) {
    auVar32 = pblendw(auVar32,auVar35,0xc);
    auVar35 = pblendw(auVar67,auVar67,0x30);
    auVar67 = auVar32;
  }
  else {
    auVar32 = pblendw(auVar32,auVar35,0xc);
    auVar35 = pblendw(auVar67,auVar76,0x30);
    auVar67 = auVar34;
  }
  if ((char)bVar7 < '\0') {
    auVar32 = pblendw(auVar32,auVar67,0x30);
  }
  else {
    auVar34 = pblendw(auVar32,auVar67,0x30);
    auVar76 = auVar35;
    auVar32 = auVar34;
  }
  auVar32 = pblendw(auVar32,auVar34,0xc0);
  auVar33._0_4_ = (auVar32._0_4_ + param_6) * 0x10;
  auVar33._4_4_ = (auVar32._4_4_ + param_6) * 0x10;
  auVar33._8_4_ = (auVar32._8_4_ + param_6) * 0x10;
  auVar33._12_4_ = (auVar32._12_4_ + param_6) * 0x10;
  auVar68 = auVar73 & auVar33;
  lVar8 = param_1 + auVar68._0_4_;
  lVar9 = param_1 + auVar68._4_4_;
  bVar20 = (bVar7 & 2) != 0;
  auVar35 = pblendw(auVar35,auVar76,0xc0);
  auVar47._0_4_ = (auVar35._0_4_ + param_6) * 0x10;
  auVar47._4_4_ = (auVar35._4_4_ + param_6) * 0x10;
  auVar47._8_4_ = (auVar35._8_4_ + param_6) * 0x10;
  auVar47._12_4_ = (auVar35._12_4_ + param_6) * 0x10;
  auVar47 = auVar47 & auVar73;
  auVar67 = ___xmm_00000004000000040000000400000004 & auVar73;
  uVar11 = (ulonglong)auVar67._0_4_;
  auVar32 = ___xmm_00000008000000080000000800000008 & auVar73;
  uVar16 = (ulonglong)auVar32._0_4_;
  auVar35 = ZEXT416(*(uint *)(param_1 + auVar68._0_4_));
  if (bVar20) {
    auVar35 = insertps(auVar35,*(undefined4 *)(param_1 + auVar68._4_4_),0x10);
  }
  auVar45 = ZEXT416(*(uint *)(uVar11 + lVar8));
  if (bVar20) {
    auVar45 = insertps(auVar45,*(undefined4 *)((ulonglong)auVar67._4_4_ + lVar9),0x10);
  }
  lVar10 = (longlong)auVar47._0_4_;
  auVar74 = ZEXT416(*(uint *)(uVar16 + lVar8));
  if (bVar20) {
    auVar74 = insertps(auVar74,*(undefined4 *)((ulonglong)auVar32._4_4_ + lVar9),0x10);
  }
  lVar12 = param_1 + lVar10;
  lVar17 = param_1 + auVar47._4_4_;
  auVar69 = blendps(in_XMM4,auVar69,1);
  if ((bVar7 & 2) == 0) {
    auVar62 = ZEXT416(*(uint *)(param_1 + lVar10));
    auVar75 = ZEXT416(*(uint *)(uVar11 + lVar12));
    auVar72 = ZEXT416(*(uint *)(uVar16 + lVar12));
    auVar46 = auVar69;
  }
  else {
    auVar62 = insertps(ZEXT416(*(uint *)(param_1 + lVar10)),*(undefined4 *)(param_1 + auVar47._4_4_)
                       ,0x10);
    auVar75 = insertps(ZEXT416(*(uint *)(uVar11 + lVar12)),
                       *(undefined4 *)((ulonglong)auVar67._4_4_ + lVar17),0x10);
    auVar72 = insertps(ZEXT416(*(uint *)(uVar16 + lVar12)),
                       *(undefined4 *)((ulonglong)auVar32._4_4_ + lVar17),0x10);
    auVar46 = auVar48;
  }
  lVar10 = param_1 + auVar68._8_4_;
  if ((bVar7 & 4) != 0) {
    auVar35 = insertps(auVar35,*(undefined4 *)(param_1 + auVar68._8_4_),0x20);
    auVar45 = insertps(auVar45,*(undefined4 *)((ulonglong)auVar67._8_4_ + lVar10),0x20);
    auVar74 = insertps(auVar74,*(undefined4 *)((ulonglong)auVar32._8_4_ + lVar10),0x20);
  }
  lVar12 = param_1 + auVar47._8_4_;
  auVar46 = blendps(auVar69,auVar46,2);
  auVar69 = auVar46;
  if ((bVar7 & 4) != 0) {
    auVar62 = insertps(auVar62,*(undefined4 *)(param_1 + auVar47._8_4_),0x20);
    auVar75 = insertps(auVar75,*(undefined4 *)((ulonglong)auVar67._8_4_ + lVar12),0x20);
    auVar72 = insertps(auVar72,*(undefined4 *)((ulonglong)auVar32._8_4_ + lVar12),0x20);
    auVar69 = auVar48;
  }
  uVar5 = param_1 + auVar68._12_4_;
  if ((char)bVar7 < '\0') {
    auVar35 = insertps(auVar35,*(undefined4 *)(param_1 + auVar68._12_4_),0x30);
    auVar45 = insertps(auVar45,*(undefined4 *)((ulonglong)auVar67._12_4_ + uVar5),0x30);
    auVar74 = insertps(auVar74,*(undefined4 *)((ulonglong)auVar32._12_4_ + uVar5),0x30);
    auVar69 = blendps(auVar46,auVar69,4);
  }
  else {
    auVar69 = blendps(auVar46,auVar69,4);
  }
  uVar6 = param_1 + auVar47._12_4_;
  auVar68 = auVar69;
  if ((char)bVar7 < '\0') {
    auVar62 = insertps(auVar62,*(undefined4 *)(param_1 + auVar47._12_4_),0x30);
    auVar75 = insertps(auVar75,*(undefined4 *)((ulonglong)auVar67._12_4_ + uVar6),0x30);
    auVar72 = insertps(auVar72,*(undefined4 *)((ulonglong)auVar32._12_4_ + uVar6),0x30);
    auVar68 = auVar48;
  }
  auVar73 = auVar73 & ___xmm_0000000c0000000c0000000c0000000c;
  auVar32 = insertps(ZEXT416(*(uint *)((ulonglong)auVar73._0_4_ + lVar8)),
                     *(undefined4 *)((ulonglong)auVar73._4_4_ + lVar9),0x10);
  auVar32 = insertps(auVar32,*(undefined4 *)((ulonglong)auVar73._8_4_ + lVar10),0x20);
  auVar67 = insertps(auVar32,*(undefined4 *)((ulonglong)auVar73._12_4_ + uVar5),0x30);
  auVar61._0_4_ = auVar62._0_4_ - auVar35._0_4_;
  auVar61._4_4_ = auVar62._4_4_ - auVar35._4_4_;
  auVar61._8_4_ = auVar62._8_4_ - auVar35._8_4_;
  auVar61._12_4_ = auVar62._12_4_ - auVar35._12_4_;
  fVar51 = auVar45._0_4_;
  auVar59._0_4_ = auVar75._0_4_ - fVar51;
  fVar54 = auVar45._4_4_;
  auVar59._4_4_ = auVar75._4_4_ - fVar54;
  fVar55 = auVar45._8_4_;
  auVar59._8_4_ = auVar75._8_4_ - fVar55;
  fVar56 = auVar45._12_4_;
  auVar59._12_4_ = auVar75._12_4_ - fVar56;
  fVar60 = auVar74._0_4_;
  auVar58._0_4_ = auVar72._0_4_ - fVar60;
  fVar63 = auVar74._4_4_;
  auVar58._4_4_ = auVar72._4_4_ - fVar63;
  fVar64 = auVar74._8_4_;
  auVar58._8_4_ = auVar72._8_4_ - fVar64;
  fVar65 = auVar74._12_4_;
  auVar58._12_4_ = auVar72._12_4_ - fVar65;
  auVar37._0_4_ = auVar59._0_4_ * auVar59._0_4_ + auVar61._0_4_ * auVar61._0_4_;
  auVar37._4_4_ = auVar59._4_4_ * auVar59._4_4_ + auVar61._4_4_ * auVar61._4_4_;
  auVar37._8_4_ = auVar59._8_4_ * auVar59._8_4_ + auVar61._8_4_ * auVar61._8_4_;
  auVar37._12_4_ = auVar59._12_4_ * auVar59._12_4_ + auVar61._12_4_ * auVar61._12_4_;
  auVar30._0_4_ = auVar58._0_4_ * auVar58._0_4_ + auVar37._0_4_;
  auVar30._4_4_ = auVar58._4_4_ * auVar58._4_4_ + auVar37._4_4_;
  auVar30._8_4_ = auVar58._8_4_ * auVar58._8_4_ + auVar37._8_4_;
  auVar30._12_4_ = auVar58._12_4_ * auVar58._12_4_ + auVar37._12_4_;
  auVar32 = sqrtps(auVar37,auVar30);
  uVar23 = -(uint)(auVar32._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
  uVar21 = -(uint)(auVar32._4_4_ < _UNK_1506895e4);
  uVar24 = -(uint)(auVar32._8_4_ < _UNK_1506895e8);
  uVar26 = -(uint)(auVar32._12_4_ < _UNK_1506895ec);
  auVar31._4_4_ = uVar21;
  auVar31._0_4_ = uVar23;
  auVar31._8_4_ = uVar24;
  auVar31._12_4_ = uVar26;
  auVar69 = blendps(auVar69,auVar68,8);
  auVar45 = divps(auVar61,auVar32);
  auVar68 = divps(auVar59,auVar32);
  auVar45 = blendvps(auVar45,___xmm_3f8000003f8000003f8000003f800000,auVar31);
  fVar39 = auVar32._0_4_ - param_4 * auVar69._0_4_;
  fVar42 = auVar32._4_4_ - param_4 * auVar69._4_4_;
  fVar43 = auVar32._8_4_ - param_4 * auVar69._8_4_;
  fVar44 = auVar32._12_4_ - param_4 * auVar69._12_4_;
  fVar66 = param_3 * fVar39;
  fVar70 = param_3 * fVar42;
  fVar71 = param_3 * fVar43;
  param_3 = param_3 * fVar44;
  uVar13 = -(uint)(fVar39 < 0.0);
  uVar22 = -(uint)(fVar42 < 0.0);
  uVar25 = -(uint)(fVar43 < 0.0);
  uVar27 = -(uint)(fVar44 < 0.0);
  auVar40._0_4_ = (float)(~uVar13 & (uint)(auVar45._0_4_ * fVar66)) + auVar35._0_4_;
  auVar40._4_4_ = (float)(~uVar22 & (uint)(auVar45._4_4_ * fVar70)) + auVar35._4_4_;
  auVar40._8_4_ = (float)(~uVar25 & (uint)(auVar45._8_4_ * fVar71)) + auVar35._8_4_;
  auVar40._12_4_ = (float)(~uVar27 & (uint)(auVar45._12_4_ * param_3)) + auVar35._12_4_;
  if ((bVar7 & 1) != 0) {
    *(float *)(param_1 + auVar33._0_4_) = auVar40._0_4_;
  }
  if ((bVar7 & 2) != 0) {
    uVar5 = extractps(auVar40,1);
    *(undefined8 *)(param_1 + auVar33._4_4_) = uVar5;
  }
  if ((bVar7 & 4) != 0) {
    uVar5 = extractps(auVar40,2);
    *(undefined8 *)(param_1 + auVar33._8_4_) = uVar5;
  }
  uVar4 = ~uVar27 & (uint)((float)(~uVar26 & auVar68._12_4_) * param_3);
  uVar3 = ~uVar25 & (uint)((float)(~uVar24 & auVar68._8_4_) * fVar71);
  uVar2 = ~uVar22 & (uint)((float)(~uVar21 & auVar68._4_4_) * fVar70);
  uVar38 = ~uVar13 & (uint)((float)(~uVar23 & auVar68._0_4_) * fVar66);
  if ((char)bVar7 < '\0') {
    uVar5 = extractps(auVar40,3);
    *(undefined8 *)(param_1 + auVar33._12_4_) = uVar5;
    auVar35 = divps(auVar58,auVar32);
    auVar52._0_4_ = fVar51 + (float)uVar38;
    auVar52._4_4_ = fVar54 + (float)uVar2;
    auVar52._8_4_ = fVar55 + (float)uVar3;
    auVar52._12_4_ = fVar56 + (float)uVar4;
  }
  else {
    auVar35 = divps(auVar58,auVar32);
    auVar52._0_4_ = fVar51 + (float)uVar38;
    auVar52._4_4_ = fVar54 + (float)uVar2;
    auVar52._8_4_ = fVar55 + (float)uVar3;
    auVar52._12_4_ = fVar56 + (float)uVar4;
  }
  if ((bVar7 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar33._0_4_) = auVar52._0_4_;
  }
  if ((bVar7 & 2) != 0) {
    uVar5 = extractps(auVar52,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar33._4_4_) = uVar5;
  }
  if ((bVar7 & 4) != 0) {
    uVar5 = extractps(auVar52,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar33._8_4_) = uVar5;
  }
  uVar4 = ~uVar27 & (uint)((float)(~uVar26 & auVar35._12_4_) * param_3);
  uVar3 = ~uVar25 & (uint)((float)(~uVar24 & auVar35._8_4_) * fVar71);
  uVar2 = ~uVar22 & (uint)((float)(~uVar21 & auVar35._4_4_) * fVar70);
  uVar38 = ~uVar13 & (uint)((float)(~uVar23 & auVar35._0_4_) * fVar66);
  if ((char)bVar7 < '\0') {
    uVar5 = extractps(auVar52,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar33._12_4_) = uVar5;
    auVar50._0_4_ = fVar60 + (float)uVar38;
    auVar50._4_4_ = fVar63 + (float)uVar2;
    auVar50._8_4_ = fVar64 + (float)uVar3;
    auVar50._12_4_ = fVar65 + (float)uVar4;
  }
  else {
    auVar50._0_4_ = fVar60 + (float)uVar38;
    auVar50._4_4_ = fVar63 + (float)uVar2;
    auVar50._8_4_ = fVar64 + (float)uVar3;
    auVar50._12_4_ = fVar65 + (float)uVar4;
  }
  if ((bVar7 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar33._0_4_) = auVar50._0_4_;
  }
  if ((bVar7 & 2) != 0) {
    uVar5 = extractps(auVar50,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar33._4_4_) = uVar5;
  }
  if ((bVar7 & 4) != 0) {
    uVar5 = extractps(auVar50,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar33._8_4_) = uVar5;
  }
  if ((char)bVar7 < '\0') {
    uVar5 = extractps(auVar50,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar33._12_4_) = uVar5;
  }
  if ((bVar7 & 1) != 0) {
    *(int *)(param_1 + 0xc + (longlong)auVar33._0_4_) = auVar67._0_4_;
  }
  if ((bVar7 & 2) != 0) {
    uVar5 = extractps(auVar67,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar33._4_4_) = uVar5;
  }
  if ((bVar7 & 4) != 0) {
    uVar5 = extractps(auVar67,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar33._8_4_) = uVar5;
  }
  if ((char)bVar7 < '\0') {
    uVar5 = extractps(auVar67,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar33._12_4_) = uVar5;
  }
  return;
}

// ApplyLongRangeConstraintsStiffnessWeightmap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFTether_5D__3E_un_3C_CunT_3E_un_3C_Cunf_3E_CunfCuniCuni_sse4 @ 1402f8d90

/* WARNING: Removing unreachable block (ram,0x0001402f9ba4) */
/* WARNING: Removing unreachable block (ram,0x0001402f98db) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLongRangeConstraintsStiffnessWeightmap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFTether_5D__3E_un_3C_CunT_3E_un_3C_Cunf_3E_CunfCuniCuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,float param_5,
               uint param_6,int param_7)

{
  undefined1 (*pauVar1) [16];
  undefined4 uVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte bVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  float *pfVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  bool bVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined4 uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar41 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar49;
  float fVar53;
  float fVar54;
  undefined1 auVar50 [16];
  float fVar55;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar56;
  float fVar57;
  float fVar62;
  float fVar64;
  undefined1 auVar58 [16];
  float fVar66;
  undefined1 auVar59 [16];
  float fVar63;
  float fVar65;
  float fVar67;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
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
  
  uVar17 = param_6 + 3;
  if (-1 < (int)param_6) {
    uVar17 = param_6;
  }
  uVar17 = uVar17 & 0xfffffffc;
  if ((int)uVar17 < 1) {
    uVar19 = 0;
    if ((int)param_6 < 1) {
      return;
    }
  }
  else {
    pfVar14 = (float *)(param_2 + 0x20);
    uVar19 = 0;
    do {
      auVar58 = *(undefined1 (*) [16])(pfVar14 + -8);
      auVar74 = *(undefined1 (*) [16])(pfVar14 + -4);
      uVar38 = auVar74._0_4_;
      auVar42._4_4_ = uVar38;
      auVar42._0_4_ = uVar38;
      auVar42._8_4_ = uVar38;
      auVar42._12_4_ = uVar38;
      iVar18 = auVar58._12_4_;
      auVar82._0_8_ = CONCAT44(iVar18,auVar58._0_4_);
      auVar82._8_4_ = auVar58._4_4_;
      auVar82._12_4_ = iVar18;
      auVar41._0_8_ = auVar58._8_8_;
      auVar41._8_4_ = auVar58._8_4_;
      auVar41._12_4_ = iVar18;
      auVar41 = pblendw(auVar41,auVar74,0xc);
      auVar42 = pblendw(auVar42,auVar82,0x3f);
      auVar81._0_8_ = CONCAT44(pfVar14[1],auVar74._8_4_);
      auVar81._8_4_ = auVar74._12_4_;
      auVar81._12_4_ = pfVar14[2];
      in_XMM4._8_8_ = auVar81._0_8_;
      in_XMM4._0_8_ = auVar82._0_8_;
      in_XMM3._8_8_ = auVar81._8_8_;
      in_XMM3._0_8_ = auVar42._8_8_;
      in_XMM2._0_8_ = auVar41._0_8_;
      in_XMM2._8_4_ = *pfVar14;
      in_XMM2._12_4_ = pfVar14[3];
      lVar11 = (longlong)((auVar58._0_4_ + param_7) * 0x10);
      lVar9 = (longlong)((iVar18 + param_7) * 0x10);
      lVar20 = (longlong)((auVar74._8_4_ + param_7) * 0x10);
      lVar10 = (longlong)(((int)pfVar14[1] + param_7) * 0x10);
      lVar16 = (longlong)((auVar42._8_4_ + param_7) * 0x10);
      lVar12 = (longlong)((auVar42._12_4_ + param_7) * 0x10);
      lVar21 = (longlong)((auVar74._12_4_ + param_7) * 0x10);
      auVar74 = insertps(ZEXT416(*(uint *)(param_1 + lVar11)),*(undefined4 *)(param_1 + lVar9),0x10)
      ;
      lVar22 = (longlong)(((int)pfVar14[2] + param_7) * 0x10);
      auVar58 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar11)),
                         *(undefined4 *)(param_1 + 4 + lVar9),0x10);
      auVar74 = insertps(auVar74,*(undefined4 *)(param_1 + lVar20),0x20);
      auVar81 = insertps(ZEXT416(*(uint *)(param_1 + lVar16)),*(undefined4 *)(param_1 + lVar12),0x10
                        );
      auVar58 = insertps(auVar58,*(undefined4 *)(param_1 + 4 + lVar20),0x20);
      auVar82 = insertps(auVar81,*(undefined4 *)(param_1 + lVar21),0x20);
      auVar81 = insertps(auVar74,*(undefined4 *)(param_1 + lVar10),0x30);
      auVar42 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar16)),
                         *(undefined4 *)(param_1 + 4 + lVar12),0x10);
      auVar74 = insertps(auVar58,*(undefined4 *)(param_1 + 4 + lVar10),0x30);
      auVar58 = insertps(auVar42,*(undefined4 *)(param_1 + 4 + lVar21),0x20);
      auVar83 = insertps(auVar82,*(undefined4 *)(param_1 + lVar22),0x30);
      auVar80 = insertps(auVar58,*(undefined4 *)(param_1 + 4 + lVar22),0x30);
      auVar58 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar11)),
                         *(undefined4 *)(param_1 + 8 + lVar9),0x10);
      auVar42 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar16)),
                         *(undefined4 *)(param_1 + 8 + lVar12),0x10);
      auVar58 = insertps(auVar58,*(undefined4 *)(param_1 + 8 + lVar20),0x20);
      auVar42 = insertps(auVar42,*(undefined4 *)(param_1 + 8 + lVar21),0x20);
      auVar58 = insertps(auVar58,*(undefined4 *)(param_1 + 8 + lVar10),0x30);
      auVar77 = insertps(auVar42,*(undefined4 *)(param_1 + 8 + lVar22),0x30);
      uVar38 = *(undefined4 *)(param_1 + 0xc + lVar16);
      uVar4 = *(undefined4 *)(param_1 + 0xc + lVar12);
      auVar79._0_4_ = auVar81._0_4_ - auVar83._0_4_;
      auVar79._4_4_ = auVar81._4_4_ - auVar83._4_4_;
      auVar79._8_4_ = auVar81._8_4_ - auVar83._8_4_;
      auVar79._12_4_ = auVar81._12_4_ - auVar83._12_4_;
      auVar75._0_4_ = auVar74._0_4_ - auVar80._0_4_;
      auVar75._4_4_ = auVar74._4_4_ - auVar80._4_4_;
      auVar75._8_4_ = auVar74._8_4_ - auVar80._8_4_;
      auVar75._12_4_ = auVar74._12_4_ - auVar80._12_4_;
      auVar74._0_4_ = auVar58._0_4_ - auVar77._0_4_;
      auVar74._4_4_ = auVar58._4_4_ - auVar77._4_4_;
      auVar74._8_4_ = auVar58._8_4_ - auVar77._8_4_;
      auVar74._12_4_ = auVar58._12_4_ - auVar77._12_4_;
      auVar72._0_4_ =
           auVar74._0_4_ * auVar74._0_4_ +
           auVar75._0_4_ * auVar75._0_4_ + auVar79._0_4_ * auVar79._0_4_;
      auVar72._4_4_ =
           auVar74._4_4_ * auVar74._4_4_ +
           auVar75._4_4_ * auVar75._4_4_ + auVar79._4_4_ * auVar79._4_4_;
      auVar72._8_4_ =
           auVar74._8_4_ * auVar74._8_4_ +
           auVar75._8_4_ * auVar75._8_4_ + auVar79._8_4_ * auVar79._8_4_;
      auVar72._12_4_ =
           auVar74._12_4_ * auVar74._12_4_ +
           auVar75._12_4_ * auVar75._12_4_ + auVar79._12_4_ * auVar79._12_4_;
      auVar82 = sqrtps(auVar72,auVar72);
      auVar42 = divps(auVar79,auVar82);
      auVar81 = divps(auVar75,auVar82);
      uVar24 = -(uint)(auVar82._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
      uVar26 = -(uint)(auVar82._4_4_ < _UNK_1506895e4);
      uVar28 = -(uint)(auVar82._8_4_ < _UNK_1506895e8);
      uVar30 = -(uint)(auVar82._12_4_ < _UNK_1506895ec);
      auVar58._4_4_ = uVar26;
      auVar58._0_4_ = uVar24;
      auVar58._8_4_ = uVar28;
      auVar58._12_4_ = uVar30;
      auVar75 = blendvps(auVar42,___xmm_3f8000003f8000003f8000003f800000,auVar58);
      auVar58 = insertps(ZEXT416(*(uint *)(param_4 +
                                          (ulonglong)*(byte *)(param_3 + (int)pfVar14[-7]) * 4)),
                         *(undefined4 *)
                          (param_4 + (ulonglong)((uint)*(byte *)(param_3 + (int)pfVar14[-4]) * 4)),
                         0x10);
      auVar42 = insertps(auVar58,*(undefined4 *)
                                  (param_4 + (ulonglong)*(byte *)(param_3 + (int)pfVar14[-1]) * 4),
                         0x20);
      auVar58 = divps(auVar74,auVar82);
      fVar68 = auVar82._0_4_ - param_5 * auVar41._0_4_;
      fVar69 = auVar82._4_4_ - param_5 * auVar41._4_4_;
      fVar70 = auVar82._8_4_ - param_5 * *pfVar14;
      fVar71 = auVar82._12_4_ - param_5 * pfVar14[3];
      uVar5 = *(undefined4 *)(param_1 + 0xc + lVar21);
      auVar74 = insertps(auVar42,*(undefined4 *)
                                  (param_4 + (ulonglong)*(byte *)(param_3 + (int)pfVar14[2]) * 4),
                         0x30);
      fVar56 = auVar74._0_4_ * fVar68;
      fVar62 = auVar74._4_4_ * fVar69;
      fVar64 = auVar74._8_4_ * fVar70;
      fVar66 = auVar74._12_4_ * fVar71;
      uVar25 = -(uint)(fVar68 < __xmm_00000000000000000000000000000000);
      uVar27 = -(uint)(fVar69 < _UNK_150aa8f64);
      uVar29 = -(uint)(fVar70 < (float)DAT_150aa8f68);
      uVar31 = -(uint)(fVar71 < DAT_150aa8f68._4_4_);
      uVar2 = *(undefined4 *)(param_1 + 0xc + lVar22);
      auVar59._0_4_ = (float)(~uVar25 & (uint)(auVar75._0_4_ * fVar56)) + auVar83._0_4_;
      auVar59._4_4_ = (float)(~uVar27 & (uint)(auVar75._4_4_ * fVar62)) + auVar83._4_4_;
      auVar59._8_4_ = (float)(~uVar29 & (uint)(auVar75._8_4_ * fVar64)) + auVar83._8_4_;
      auVar59._12_4_ = (float)(~uVar31 & (uint)(auVar75._12_4_ * fVar66)) + auVar83._12_4_;
      *(float *)(param_1 + lVar16) = auVar59._0_4_;
      uVar6 = extractps(auVar59,1);
      *(undefined8 *)(param_1 + lVar12) = uVar6;
      uVar6 = extractps(auVar59,2);
      *(undefined8 *)(param_1 + lVar21) = uVar6;
      auVar83._0_4_ =
           (float)(~uVar25 & (uint)((float)(~uVar24 & auVar81._0_4_) * fVar56)) + auVar80._0_4_;
      auVar83._4_4_ =
           (float)(~uVar27 & (uint)((float)(~uVar26 & auVar81._4_4_) * fVar62)) + auVar80._4_4_;
      auVar83._8_4_ =
           (float)(~uVar29 & (uint)((float)(~uVar28 & auVar81._8_4_) * fVar64)) + auVar80._8_4_;
      auVar83._12_4_ =
           (float)(~uVar31 & (uint)((float)(~uVar30 & auVar81._12_4_) * fVar66)) + auVar80._12_4_;
      uVar6 = extractps(auVar59,3);
      *(undefined8 *)(param_1 + lVar22) = uVar6;
      *(float *)(param_1 + 4 + lVar16) = auVar83._0_4_;
      uVar6 = extractps(auVar83,1);
      *(undefined8 *)(param_1 + 4 + lVar12) = uVar6;
      uVar6 = extractps(auVar83,2);
      *(undefined8 *)(param_1 + 4 + lVar21) = uVar6;
      auVar80._0_4_ =
           (float)(~uVar25 & (uint)(fVar56 * (float)(~uVar24 & auVar58._0_4_))) + auVar77._0_4_;
      auVar80._4_4_ =
           (float)(~uVar27 & (uint)(fVar62 * (float)(~uVar26 & auVar58._4_4_))) + auVar77._4_4_;
      auVar80._8_4_ =
           (float)(~uVar29 & (uint)(fVar64 * (float)(~uVar28 & auVar58._8_4_))) + auVar77._8_4_;
      auVar80._12_4_ =
           (float)(~uVar31 & (uint)(fVar66 * (float)(~uVar30 & auVar58._12_4_))) + auVar77._12_4_;
      uVar6 = extractps(auVar83,3);
      *(undefined8 *)(param_1 + 4 + lVar22) = uVar6;
      *(float *)(param_1 + 8 + lVar16) = auVar80._0_4_;
      uVar6 = extractps(auVar80,1);
      *(undefined8 *)(param_1 + 8 + lVar12) = uVar6;
      uVar6 = extractps(auVar80,2);
      *(undefined8 *)(param_1 + 8 + lVar21) = uVar6;
      uVar6 = extractps(auVar80,3);
      *(undefined8 *)(param_1 + 8 + lVar22) = uVar6;
      *(undefined4 *)(param_1 + 0xc + lVar16) = uVar38;
      *(undefined4 *)(param_1 + 0xc + lVar12) = uVar4;
      *(undefined4 *)(param_1 + 0xc + lVar21) = uVar5;
      *(undefined4 *)(param_1 + 0xc + lVar22) = uVar2;
      pfVar14 = pfVar14 + 0xc;
      uVar19 = uVar19 + 4;
    } while ((int)uVar19 < (int)uVar17);
    if ((int)param_6 <= (int)uVar19) {
      return;
    }
  }
  auVar77._0_4_ =
       -(uint)((int)(uVar19 | (uint)__xmm_00000003000000020000000100000000) < (int)param_6);
  auVar77._4_4_ =
       -(uint)((int)(uVar19 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_6);
  auVar77._8_4_ = -(uint)((int)(uVar19 | _UNK_150631e08) < (int)param_6);
  auVar77._12_4_ = -(uint)((int)(uVar19 | _UNK_150631e0c) < (int)param_6);
  pauVar1 = (undefined1 (*) [16])(param_2 + (ulonglong)uVar19 * 0xc);
  iVar18 = movmskps(uVar17,auVar77);
  bVar8 = (char)((char)iVar18 << 4) >> 4;
  if (iVar18 == 0xf) {
    auVar58 = *pauVar1;
    auVar74 = pauVar1[1];
    uVar38 = auVar74._0_4_;
    auVar61._4_4_ = uVar38;
    auVar61._0_4_ = uVar38;
    auVar61._8_4_ = uVar38;
    auVar61._12_4_ = uVar38;
    auVar37._8_4_ = auVar58._8_4_;
    auVar37._12_4_ = auVar58._12_4_;
    auVar52._0_8_ = CONCAT44(auVar37._12_4_,auVar58._0_4_);
    auVar52._8_4_ = auVar58._4_4_;
    auVar52._12_4_ = auVar37._12_4_;
    auVar81 = pblendw(auVar61,auVar52,0x3f);
    auVar37._0_8_ = auVar58._8_8_;
    auVar58 = pblendw(auVar37,auVar74,0xc);
    auVar40._0_8_ = CONCAT44(*(undefined4 *)(pauVar1[2] + 4),auVar74._8_4_);
    auVar40._8_4_ = auVar74._12_4_;
    auVar40._12_4_ = *(undefined4 *)(pauVar1[2] + 8);
    auVar50._8_8_ = auVar40._0_8_;
    auVar50._0_8_ = auVar52._0_8_;
    auVar43._8_8_ = auVar40._8_8_;
    auVar43._0_8_ = auVar81._8_8_;
    auVar33._0_8_ = auVar58._0_8_;
    auVar33._8_4_ = *(undefined4 *)pauVar1[2];
    auVar33._12_4_ = *(undefined4 *)(pauVar1[2] + 0xc);
    bVar23 = false;
  }
  else {
    auVar32._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar77._0_4_;
    auVar32._4_4_ = _UNK_150b50da4 & auVar77._4_4_;
    auVar32._8_4_ = _UNK_150b50da8 & auVar77._8_4_;
    auVar32._12_4_ = _UNK_150b50dac & auVar77._12_4_;
    lVar9 = extractps(auVar32,1);
    lVar10 = extractps(auVar32,2);
    lVar11 = extractps(auVar32,3);
    auVar50._4_4_ = *(undefined4 *)(*pauVar1 + lVar9);
    auVar50._0_4_ = *(undefined4 *)*pauVar1;
    auVar50._12_4_ = *(undefined4 *)(*pauVar1 + lVar11);
    auVar50._8_4_ = *(undefined4 *)(*pauVar1 + lVar10);
    auVar58 = ___xmm_000000280000001c0000001000000004 & auVar77;
    auVar43._4_4_ = *(undefined4 *)(*pauVar1 + auVar58._4_4_);
    auVar43._0_4_ = *(undefined4 *)(*pauVar1 + auVar58._0_4_);
    auVar43._12_4_ = *(undefined4 *)(*pauVar1 + auVar58._12_4_);
    auVar43._8_4_ = *(undefined4 *)(*pauVar1 + auVar58._8_4_);
    auVar58 = ___xmm_0000002c000000200000001400000008 & auVar77;
    auVar33._4_4_ = *(undefined4 *)(*pauVar1 + auVar58._4_4_);
    auVar33._0_4_ = *(undefined4 *)(*pauVar1 + auVar58._0_4_);
    auVar33._12_4_ = *(undefined4 *)(*pauVar1 + auVar58._12_4_);
    auVar33._8_4_ = *(undefined4 *)(*pauVar1 + auVar58._8_4_);
    bVar23 = (bVar8 & 1) == 0;
    auVar58 = in_XMM4;
    if (bVar23) goto LAB_1402f92c1;
  }
  auVar58 = auVar50;
  auVar50 = auVar58;
LAB_1402f92c1:
  if (bVar23) {
    auVar58 = pblendw(in_XMM4,auVar58,3);
    auVar74 = in_XMM2;
    auVar81 = in_XMM3;
  }
  else {
    auVar58 = pblendw(in_XMM4,auVar58,3);
    auVar74 = auVar33;
    auVar81 = auVar43;
  }
  if ((bVar8 & 2) == 0) {
    auVar81 = pblendw(in_XMM3,auVar81,3);
    auVar58 = pblendw(auVar58,auVar58,0xc);
    auVar41 = auVar81;
  }
  else {
    auVar81 = pblendw(in_XMM3,auVar81,3);
    auVar58 = pblendw(auVar58,auVar50,0xc);
    auVar41 = auVar43;
  }
  if ((bVar8 & 4) == 0) {
    auVar81 = pblendw(auVar81,auVar41,0xc);
    auVar58 = pblendw(auVar58,auVar58,0x30);
    auVar41 = auVar81;
  }
  else {
    auVar81 = pblendw(auVar81,auVar41,0xc);
    auVar58 = pblendw(auVar58,auVar50,0x30);
    auVar41 = auVar43;
  }
  if ((char)bVar8 < '\0') {
    auVar81 = pblendw(auVar81,auVar41,0x30);
  }
  else {
    auVar43 = pblendw(auVar81,auVar41,0x30);
    auVar50 = auVar58;
    auVar81 = auVar43;
  }
  auVar81 = pblendw(auVar81,auVar43,0xc0);
  auVar47._0_4_ = (auVar81._0_4_ + param_7) * 0x10;
  auVar47._4_4_ = (auVar81._4_4_ + param_7) * 0x10;
  auVar47._8_4_ = (auVar81._8_4_ + param_7) * 0x10;
  auVar47._12_4_ = (auVar81._12_4_ + param_7) * 0x10;
  auVar82 = auVar77 & auVar47;
  lVar9 = param_1 + auVar82._0_4_;
  lVar10 = param_1 + auVar82._4_4_;
  bVar23 = (bVar8 & 2) != 0;
  auVar58 = pblendw(auVar58,auVar50,0xc0);
  auVar44._0_4_ = (auVar58._0_4_ + param_7) * 0x10;
  auVar44._4_4_ = (auVar58._4_4_ + param_7) * 0x10;
  auVar44._8_4_ = (auVar58._8_4_ + param_7) * 0x10;
  auVar44._12_4_ = (auVar58._12_4_ + param_7) * 0x10;
  auVar44 = auVar44 & auVar77;
  auVar42 = ___xmm_00000004000000040000000400000004 & auVar77;
  uVar13 = (ulonglong)auVar42._0_4_;
  auVar41 = ___xmm_00000008000000080000000800000008 & auVar77;
  uVar15 = (ulonglong)auVar41._0_4_;
  auVar58 = ZEXT416(*(uint *)(param_1 + auVar82._0_4_));
  if (bVar23) {
    auVar58 = insertps(auVar58,*(undefined4 *)(param_1 + auVar82._4_4_),0x10);
  }
  auVar59 = ZEXT416(*(uint *)(uVar13 + lVar9));
  if (bVar23) {
    auVar59 = insertps(auVar59,*(undefined4 *)((ulonglong)auVar42._4_4_ + lVar10),0x10);
  }
  lVar11 = (longlong)auVar44._0_4_;
  auVar75 = ZEXT416(*(uint *)(uVar15 + lVar9));
  if (bVar23) {
    auVar75 = insertps(auVar75,*(undefined4 *)((ulonglong)auVar41._4_4_ + lVar10),0x10);
  }
  lVar12 = param_1 + lVar11;
  lVar16 = param_1 + auVar44._4_4_;
  auVar74 = blendps(in_XMM2,auVar74,1);
  if ((bVar8 & 2) == 0) {
    auVar79 = ZEXT416(*(uint *)(param_1 + lVar11));
    auVar80 = ZEXT416(*(uint *)(uVar13 + lVar12));
    auVar72 = ZEXT416(*(uint *)(uVar15 + lVar12));
    auVar83 = auVar74;
  }
  else {
    auVar79 = insertps(ZEXT416(*(uint *)(param_1 + lVar11)),*(undefined4 *)(param_1 + auVar44._4_4_)
                       ,0x10);
    auVar80 = insertps(ZEXT416(*(uint *)(uVar13 + lVar12)),
                       *(undefined4 *)((ulonglong)auVar42._4_4_ + lVar16),0x10);
    auVar72 = insertps(ZEXT416(*(uint *)(uVar15 + lVar12)),
                       *(undefined4 *)((ulonglong)auVar41._4_4_ + lVar16),0x10);
    auVar83 = auVar33;
  }
  lVar11 = param_1 + auVar82._8_4_;
  if ((bVar8 & 4) != 0) {
    auVar58 = insertps(auVar58,*(undefined4 *)(param_1 + auVar82._8_4_),0x20);
    auVar59 = insertps(auVar59,*(undefined4 *)((ulonglong)auVar42._8_4_ + lVar11),0x20);
    auVar75 = insertps(auVar75,*(undefined4 *)((ulonglong)auVar41._8_4_ + lVar11),0x20);
  }
  lVar12 = param_1 + auVar44._8_4_;
  auVar83 = blendps(auVar74,auVar83,2);
  auVar74 = auVar83;
  if ((bVar8 & 4) != 0) {
    auVar79 = insertps(auVar79,*(undefined4 *)(param_1 + auVar44._8_4_),0x20);
    auVar80 = insertps(auVar80,*(undefined4 *)((ulonglong)auVar42._8_4_ + lVar12),0x20);
    auVar72 = insertps(auVar72,*(undefined4 *)((ulonglong)auVar41._8_4_ + lVar12),0x20);
    auVar74 = auVar33;
  }
  uVar6 = param_1 + auVar82._12_4_;
  if ((char)bVar8 < '\0') {
    auVar58 = insertps(auVar58,*(undefined4 *)(param_1 + auVar82._12_4_),0x30);
    auVar59 = insertps(auVar59,*(undefined4 *)((ulonglong)auVar42._12_4_ + uVar6),0x30);
  }
  if ((char)bVar8 < '\0') {
    auVar75 = insertps(auVar75,*(undefined4 *)((ulonglong)auVar41._12_4_ + uVar6),0x30);
    auVar74 = blendps(auVar83,auVar74,4);
  }
  else {
    auVar74 = blendps(auVar83,auVar74,4);
  }
  uVar7 = param_1 + auVar44._12_4_;
  auVar82 = auVar74;
  if ((char)bVar8 < '\0') {
    auVar79 = insertps(auVar79,*(undefined4 *)(param_1 + auVar44._12_4_),0x30);
    auVar80 = insertps(auVar80,*(undefined4 *)((ulonglong)auVar42._12_4_ + uVar7),0x30);
    auVar72 = insertps(auVar72,*(undefined4 *)((ulonglong)auVar41._12_4_ + uVar7),0x30);
    auVar82 = auVar33;
  }
  auVar42 = blendps(auVar74,auVar82,8);
  auVar81 = auVar81 & auVar77;
  auVar74 = ___xmm_0000000c0000000c0000000c0000000c & auVar77;
  auVar82 = insertps(ZEXT416(*(uint *)((ulonglong)auVar74._0_4_ + lVar9)),
                     *(undefined4 *)((ulonglong)auVar74._4_4_ + lVar10),0x10);
  auVar82 = insertps(auVar82,*(undefined4 *)((ulonglong)auVar74._8_4_ + lVar11),0x20);
  auVar82 = insertps(auVar82,*(undefined4 *)((ulonglong)auVar74._12_4_ + uVar6),0x30);
  bVar3 = *(byte *)(param_3 + auVar81._8_4_);
  auVar45._0_4_ = (uint)*(byte *)(param_3 + auVar81._0_4_) << 2;
  auVar45._4_4_ = (uint)*(byte *)(param_3 + auVar81._4_4_) << 2;
  auVar45._8_4_ = (uint)bVar3 << 2;
  auVar45._12_4_ = (uint)*(byte *)(param_3 + auVar81._12_4_) << 2;
  auVar81 = pmovzxdq(auVar41,auVar45);
  auVar46._0_8_ = (ulonglong)bVar3 << 2;
  auVar46._8_4_ = auVar45._12_4_;
  auVar46._12_4_ = 0;
  auVar74 = pmovsxdq(auVar74,auVar77);
  auVar74 = blendvps((undefined1  [16])0x0,auVar81,auVar74);
  auVar34._4_4_ = auVar77._8_4_;
  auVar34._0_4_ = auVar77._8_4_;
  auVar34._8_4_ = auVar77._12_4_;
  auVar34._12_4_ = auVar77._12_4_;
  auVar81 = blendvps(ZEXT816(0),auVar46,auVar34);
  auVar74 = insertps(ZEXT416(*(uint *)(param_4 + auVar74._0_8_)),
                     *(undefined4 *)(param_4 + auVar74._8_8_),0x10);
  auVar74 = insertps(auVar74,*(undefined4 *)(param_4 + auVar81._0_8_),0x20);
  auVar74 = insertps(auVar74,*(undefined4 *)(param_4 + auVar81._8_8_),0x30);
  auVar78._0_4_ = auVar79._0_4_ - auVar58._0_4_;
  auVar78._4_4_ = auVar79._4_4_ - auVar58._4_4_;
  auVar78._8_4_ = auVar79._8_4_ - auVar58._8_4_;
  auVar78._12_4_ = auVar79._12_4_ - auVar58._12_4_;
  fVar57 = auVar59._0_4_;
  auVar76._0_4_ = auVar80._0_4_ - fVar57;
  fVar63 = auVar59._4_4_;
  auVar76._4_4_ = auVar80._4_4_ - fVar63;
  fVar65 = auVar59._8_4_;
  auVar76._8_4_ = auVar80._8_4_ - fVar65;
  fVar67 = auVar59._12_4_;
  auVar76._12_4_ = auVar80._12_4_ - fVar67;
  fVar49 = auVar75._0_4_;
  auVar73._0_4_ = auVar72._0_4_ - fVar49;
  fVar53 = auVar75._4_4_;
  auVar73._4_4_ = auVar72._4_4_ - fVar53;
  fVar54 = auVar75._8_4_;
  auVar73._8_4_ = auVar72._8_4_ - fVar54;
  fVar55 = auVar75._12_4_;
  auVar73._12_4_ = auVar72._12_4_ - fVar55;
  auVar48._0_4_ = auVar76._0_4_ * auVar76._0_4_ + auVar78._0_4_ * auVar78._0_4_;
  auVar48._4_4_ = auVar76._4_4_ * auVar76._4_4_ + auVar78._4_4_ * auVar78._4_4_;
  auVar48._8_4_ = auVar76._8_4_ * auVar76._8_4_ + auVar78._8_4_ * auVar78._8_4_;
  auVar48._12_4_ = auVar76._12_4_ * auVar76._12_4_ + auVar78._12_4_ * auVar78._12_4_;
  auVar35._0_4_ = auVar73._0_4_ * auVar73._0_4_ + auVar48._0_4_;
  auVar35._4_4_ = auVar73._4_4_ * auVar73._4_4_ + auVar48._4_4_;
  auVar35._8_4_ = auVar73._8_4_ * auVar73._8_4_ + auVar48._8_4_;
  auVar35._12_4_ = auVar73._12_4_ * auVar73._12_4_ + auVar48._12_4_;
  auVar81 = sqrtps(auVar48,auVar35);
  uVar17 = -(uint)(auVar81._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
  uVar24 = -(uint)(auVar81._4_4_ < _UNK_1506895e4);
  uVar26 = -(uint)(auVar81._8_4_ < _UNK_1506895e8);
  uVar28 = -(uint)(auVar81._12_4_ < _UNK_1506895ec);
  auVar36._4_4_ = uVar24;
  auVar36._0_4_ = uVar17;
  auVar36._8_4_ = uVar26;
  auVar36._12_4_ = uVar28;
  auVar41 = divps(auVar78,auVar81);
  auVar59 = blendvps(auVar41,___xmm_3f8000003f8000003f8000003f800000,auVar36);
  auVar41 = divps(auVar76,auVar81);
  fVar56 = auVar81._0_4_ - param_5 * auVar42._0_4_;
  fVar62 = auVar81._4_4_ - param_5 * auVar42._4_4_;
  fVar64 = auVar81._8_4_ - param_5 * auVar42._8_4_;
  fVar66 = auVar81._12_4_ - param_5 * auVar42._12_4_;
  fVar68 = auVar74._0_4_ * fVar56;
  fVar69 = auVar74._4_4_ * fVar62;
  fVar70 = auVar74._8_4_ * fVar64;
  fVar71 = auVar74._12_4_ * fVar66;
  uVar19 = -(uint)(fVar56 < 0.0);
  uVar25 = -(uint)(fVar62 < 0.0);
  uVar27 = -(uint)(fVar64 < 0.0);
  uVar29 = -(uint)(fVar66 < 0.0);
  auVar39._0_4_ = (float)(~uVar19 & (uint)(auVar59._0_4_ * fVar68)) + auVar58._0_4_;
  auVar39._4_4_ = (float)(~uVar25 & (uint)(auVar59._4_4_ * fVar69)) + auVar58._4_4_;
  auVar39._8_4_ = (float)(~uVar27 & (uint)(auVar59._8_4_ * fVar70)) + auVar58._8_4_;
  auVar39._12_4_ = (float)(~uVar29 & (uint)(auVar59._12_4_ * fVar71)) + auVar58._12_4_;
  if ((bVar8 & 1) != 0) {
    *(float *)(param_1 + auVar47._0_4_) = auVar39._0_4_;
  }
  fVar56 = (float)(~uVar17 & auVar41._0_4_);
  fVar62 = (float)(~uVar24 & auVar41._4_4_);
  fVar64 = (float)(~uVar26 & auVar41._8_4_);
  fVar66 = (float)(~uVar28 & auVar41._12_4_);
  if ((bVar8 & 2) != 0) {
    uVar6 = extractps(auVar39,1);
    *(undefined8 *)(param_1 + auVar47._4_4_) = uVar6;
  }
  if ((bVar8 & 4) == 0) {
    fVar56 = (float)(~uVar19 & (uint)(fVar56 * fVar68));
    fVar62 = (float)(~uVar25 & (uint)(fVar62 * fVar69));
    fVar64 = (float)(~uVar27 & (uint)(fVar64 * fVar70));
    fVar66 = (float)(~uVar29 & (uint)(fVar66 * fVar71));
  }
  else {
    uVar6 = extractps(auVar39,2);
    *(undefined8 *)(param_1 + auVar47._8_4_) = uVar6;
    fVar56 = (float)(~uVar19 & (uint)(fVar56 * fVar68));
    fVar62 = (float)(~uVar25 & (uint)(fVar62 * fVar69));
    fVar64 = (float)(~uVar27 & (uint)(fVar64 * fVar70));
    fVar66 = (float)(~uVar29 & (uint)(fVar66 * fVar71));
  }
  if ((char)bVar8 < '\0') {
    uVar6 = extractps(auVar39,3);
    *(undefined8 *)(param_1 + auVar47._12_4_) = uVar6;
    auVar58 = divps(auVar73,auVar81);
    auVar60._0_4_ = fVar57 + fVar56;
    auVar60._4_4_ = fVar63 + fVar62;
    auVar60._8_4_ = fVar65 + fVar64;
    auVar60._12_4_ = fVar67 + fVar66;
  }
  else {
    auVar58 = divps(auVar73,auVar81);
    auVar60._0_4_ = fVar57 + fVar56;
    auVar60._4_4_ = fVar63 + fVar62;
    auVar60._8_4_ = fVar65 + fVar64;
    auVar60._12_4_ = fVar67 + fVar66;
  }
  if ((bVar8 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar47._0_4_) = auVar60._0_4_;
  }
  if ((bVar8 & 2) != 0) {
    uVar6 = extractps(auVar60,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar47._4_4_) = uVar6;
  }
  if ((bVar8 & 4) != 0) {
    uVar6 = extractps(auVar60,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar47._8_4_) = uVar6;
  }
  uVar5 = ~uVar29 & (uint)((float)(~uVar28 & auVar58._12_4_) * fVar71);
  uVar4 = ~uVar27 & (uint)((float)(~uVar26 & auVar58._8_4_) * fVar70);
  uVar2 = ~uVar25 & (uint)((float)(~uVar24 & auVar58._4_4_) * fVar69);
  uVar38 = ~uVar19 & (uint)((float)(~uVar17 & auVar58._0_4_) * fVar68);
  if ((char)bVar8 < '\0') {
    uVar6 = extractps(auVar60,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar47._12_4_) = uVar6;
    auVar51._0_4_ = fVar49 + (float)uVar38;
    auVar51._4_4_ = fVar53 + (float)uVar2;
    auVar51._8_4_ = fVar54 + (float)uVar4;
    auVar51._12_4_ = fVar55 + (float)uVar5;
  }
  else {
    auVar51._0_4_ = fVar49 + (float)uVar38;
    auVar51._4_4_ = fVar53 + (float)uVar2;
    auVar51._8_4_ = fVar54 + (float)uVar4;
    auVar51._12_4_ = fVar55 + (float)uVar5;
  }
  if ((bVar8 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar47._0_4_) = auVar51._0_4_;
  }
  if ((bVar8 & 2) != 0) {
    uVar6 = extractps(auVar51,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar47._4_4_) = uVar6;
  }
  if ((bVar8 & 4) != 0) {
    uVar6 = extractps(auVar51,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar47._8_4_) = uVar6;
  }
  if ((char)bVar8 < '\0') {
    uVar6 = extractps(auVar51,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar47._12_4_) = uVar6;
  }
  if ((bVar8 & 1) != 0) {
    *(int *)(param_1 + 0xc + (longlong)auVar47._0_4_) = auVar82._0_4_;
  }
  if ((bVar8 & 2) != 0) {
    uVar6 = extractps(auVar82,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar47._4_4_) = uVar6;
  }
  if ((bVar8 & 4) != 0) {
    uVar6 = extractps(auVar82,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar47._8_4_) = uVar6;
  }
  if ((char)bVar8 < '\0') {
    uVar6 = extractps(auVar82,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar47._12_4_) = uVar6;
  }
  return;
}

// ApplyLongRangeConstraintsScaleWeightmap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFTether_5D__3E_Cunfun_3C_CunT_3E_un_3C_Cunf_3E_CuniCuni_sse4 @ 1402f9bb0

/* WARNING: Removing unreachable block (ram,0x0001402fa98f) */
/* WARNING: Removing unreachable block (ram,0x0001402fa6d9) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLongRangeConstraintsScaleWeightmap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFTether_5D__3E_Cunfun_3C_CunT_3E_un_3C_Cunf_3E_CuniCuni_sse4
               (longlong param_1,longlong param_2,float param_3,longlong param_4,longlong param_5,
               uint param_6,int param_7)

{
  undefined1 (*pauVar1) [16];
  undefined4 uVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  byte bVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  float *pfVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  bool bVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined4 uVar40;
  float fVar41;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar58;
  float fVar62;
  float fVar63;
  undefined1 auVar59 [16];
  float fVar64;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
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
  float fVar81;
  float fVar82;
  float fVar83;
  
  uVar25 = param_6 + 3;
  if (-1 < (int)param_6) {
    uVar25 = param_6;
  }
  if ((int)(uVar25 & 0xfffffffc) < 1) {
    uVar18 = 0;
    if ((int)param_6 < 1) {
      return;
    }
  }
  else {
    pfVar15 = (float *)(param_2 + 0x20);
    uVar18 = 0;
    do {
      auVar59 = *(undefined1 (*) [16])(pfVar15 + -8);
      auVar71 = *(undefined1 (*) [16])(pfVar15 + -4);
      uVar40 = auVar71._0_4_;
      auVar74._4_4_ = uVar40;
      auVar74._0_4_ = uVar40;
      auVar74._8_4_ = uVar40;
      auVar74._12_4_ = uVar40;
      iVar8 = auVar59._12_4_;
      auVar77._0_8_ = CONCAT44(iVar8,auVar59._0_4_);
      auVar77._8_4_ = auVar59._4_4_;
      auVar77._12_4_ = iVar8;
      auVar38._0_8_ = auVar59._8_8_;
      auVar38._8_4_ = auVar59._8_4_;
      auVar38._12_4_ = iVar8;
      auVar38 = pblendw(auVar38,auVar71,0xc);
      auVar49 = pblendw(auVar74,auVar77,0x3f);
      auVar78._0_8_ = CONCAT44(pfVar15[1],auVar71._8_4_);
      auVar78._8_4_ = auVar71._12_4_;
      auVar78._12_4_ = pfVar15[2];
      in_XMM4._8_8_ = auVar78._0_8_;
      in_XMM4._0_8_ = auVar77._0_8_;
      in_XMM3._8_8_ = auVar78._8_8_;
      in_XMM3._0_8_ = auVar49._8_8_;
      in_XMM1._0_8_ = auVar38._0_8_;
      in_XMM1._8_4_ = *pfVar15;
      in_XMM1._12_4_ = pfVar15[3];
      lVar12 = (longlong)((auVar59._0_4_ + param_7) * 0x10);
      lVar19 = (longlong)((iVar8 + param_7) * 0x10);
      lVar9 = (longlong)((auVar71._8_4_ + param_7) * 0x10);
      lVar11 = (longlong)(((int)pfVar15[1] + param_7) * 0x10);
      lVar17 = (longlong)((auVar49._8_4_ + param_7) * 0x10);
      lVar13 = (longlong)((auVar49._12_4_ + param_7) * 0x10);
      lVar20 = (longlong)((auVar71._12_4_ + param_7) * 0x10);
      auVar71 = insertps(ZEXT416(*(uint *)(param_1 + lVar12)),*(undefined4 *)(param_1 + lVar19),0x10
                        );
      lVar21 = (longlong)(((int)pfVar15[2] + param_7) * 0x10);
      auVar59 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar12)),
                         *(undefined4 *)(param_1 + 4 + lVar19),0x10);
      auVar71 = insertps(auVar71,*(undefined4 *)(param_1 + lVar9),0x20);
      auVar78 = insertps(ZEXT416(*(uint *)(param_1 + lVar17)),*(undefined4 *)(param_1 + lVar13),0x10
                        );
      auVar59 = insertps(auVar59,*(undefined4 *)(param_1 + 4 + lVar9),0x20);
      auVar79 = insertps(auVar78,*(undefined4 *)(param_1 + lVar20),0x20);
      auVar49 = insertps(auVar71,*(undefined4 *)(param_1 + lVar11),0x30);
      auVar78 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar17)),
                         *(undefined4 *)(param_1 + 4 + lVar13),0x10);
      auVar71 = insertps(auVar59,*(undefined4 *)(param_1 + 4 + lVar11),0x30);
      auVar59 = insertps(auVar78,*(undefined4 *)(param_1 + 4 + lVar20),0x20);
      auVar80 = insertps(auVar79,*(undefined4 *)(param_1 + lVar21),0x30);
      auVar77 = insertps(auVar59,*(undefined4 *)(param_1 + 4 + lVar21),0x30);
      auVar59 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar12)),
                         *(undefined4 *)(param_1 + 8 + lVar19),0x10);
      auVar78 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar17)),
                         *(undefined4 *)(param_1 + 8 + lVar13),0x10);
      auVar59 = insertps(auVar59,*(undefined4 *)(param_1 + 8 + lVar9),0x20);
      auVar78 = insertps(auVar78,*(undefined4 *)(param_1 + 8 + lVar20),0x20);
      auVar59 = insertps(auVar59,*(undefined4 *)(param_1 + 8 + lVar11),0x30);
      auVar74 = insertps(auVar78,*(undefined4 *)(param_1 + 8 + lVar21),0x30);
      uVar40 = *(undefined4 *)(param_1 + 0xc + lVar17);
      auVar78 = insertps(ZEXT416(*(uint *)(param_5 +
                                          (ulonglong)*(byte *)(param_4 + (int)pfVar15[-7]) * 4)),
                         *(undefined4 *)
                          (param_5 + (ulonglong)((uint)*(byte *)(param_4 + (int)pfVar15[-4]) * 4)),
                         0x10);
      auVar78 = insertps(auVar78,*(undefined4 *)
                                  (param_5 + (ulonglong)*(byte *)(param_4 + (int)pfVar15[-1]) * 4),
                         0x20);
      auVar39._0_4_ = auVar49._0_4_ - auVar80._0_4_;
      auVar39._4_4_ = auVar49._4_4_ - auVar80._4_4_;
      auVar39._8_4_ = auVar49._8_4_ - auVar80._8_4_;
      auVar39._12_4_ = auVar49._12_4_ - auVar80._12_4_;
      auVar76._0_4_ = auVar71._0_4_ - auVar77._0_4_;
      auVar76._4_4_ = auVar71._4_4_ - auVar77._4_4_;
      auVar76._8_4_ = auVar71._8_4_ - auVar77._8_4_;
      auVar76._12_4_ = auVar71._12_4_ - auVar77._12_4_;
      auVar69._0_4_ = auVar59._0_4_ - auVar74._0_4_;
      auVar69._4_4_ = auVar59._4_4_ - auVar74._4_4_;
      auVar69._8_4_ = auVar59._8_4_ - auVar74._8_4_;
      auVar69._12_4_ = auVar59._12_4_ - auVar74._12_4_;
      auVar49._0_4_ = auVar76._0_4_ * auVar76._0_4_ + auVar39._0_4_ * auVar39._0_4_;
      auVar49._4_4_ = auVar76._4_4_ * auVar76._4_4_ + auVar39._4_4_ * auVar39._4_4_;
      auVar49._8_4_ = auVar76._8_4_ * auVar76._8_4_ + auVar39._8_4_ * auVar39._8_4_;
      auVar49._12_4_ = auVar76._12_4_ * auVar76._12_4_ + auVar39._12_4_ * auVar39._12_4_;
      auVar79 = insertps(auVar78,*(undefined4 *)
                                  (param_5 + (ulonglong)*(byte *)(param_4 + (int)pfVar15[2]) * 4),
                         0x30);
      auVar59._0_4_ = auVar69._0_4_ * auVar69._0_4_ + auVar49._0_4_;
      auVar59._4_4_ = auVar69._4_4_ * auVar69._4_4_ + auVar49._4_4_;
      auVar59._8_4_ = auVar69._8_4_ * auVar69._8_4_ + auVar49._8_4_;
      auVar59._12_4_ = auVar69._12_4_ * auVar69._12_4_ + auVar49._12_4_;
      auVar59 = sqrtps(auVar49,auVar59);
      uVar23 = -(uint)(auVar59._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
      uVar26 = -(uint)(auVar59._4_4_ < _UNK_1506895e4);
      uVar28 = -(uint)(auVar59._8_4_ < _UNK_1506895e8);
      uVar30 = -(uint)(auVar59._12_4_ < _UNK_1506895ec);
      auVar71._4_4_ = uVar26;
      auVar71._0_4_ = uVar23;
      auVar71._8_4_ = uVar28;
      auVar71._12_4_ = uVar30;
      auVar78 = divps(auVar39,auVar59);
      auVar49 = blendvps(auVar78,___xmm_3f8000003f8000003f8000003f800000,auVar71);
      auVar78 = divps(auVar76,auVar59);
      uVar2 = *(undefined4 *)(param_1 + 0xc + lVar13);
      auVar71 = divps(auVar69,auVar59);
      uVar4 = *(undefined4 *)(param_1 + 0xc + lVar20);
      fVar41 = auVar59._0_4_ - auVar79._0_4_ * auVar38._0_4_;
      fVar46 = auVar59._4_4_ - auVar79._4_4_ * auVar38._4_4_;
      fVar47 = auVar59._8_4_ - auVar79._8_4_ * *pfVar15;
      fVar48 = auVar59._12_4_ - auVar79._12_4_ * pfVar15[3];
      fVar65 = param_3 * fVar41;
      fVar66 = param_3 * fVar46;
      fVar67 = param_3 * fVar47;
      fVar68 = param_3 * fVar48;
      uVar24 = -(uint)(fVar41 < __xmm_00000000000000000000000000000000);
      uVar27 = -(uint)(fVar46 < _UNK_150aa8f64);
      uVar29 = -(uint)(fVar47 < (float)DAT_150aa8f68);
      uVar31 = -(uint)(fVar48 < DAT_150aa8f68._4_4_);
      uVar5 = *(undefined4 *)(param_1 + 0xc + lVar21);
      auVar73._0_4_ = (float)(~uVar24 & (uint)(auVar49._0_4_ * fVar65)) + auVar80._0_4_;
      auVar73._4_4_ = (float)(~uVar27 & (uint)(auVar49._4_4_ * fVar66)) + auVar80._4_4_;
      auVar73._8_4_ = (float)(~uVar29 & (uint)(auVar49._8_4_ * fVar67)) + auVar80._8_4_;
      auVar73._12_4_ = (float)(~uVar31 & (uint)(auVar49._12_4_ * fVar68)) + auVar80._12_4_;
      *(float *)(param_1 + lVar17) = auVar73._0_4_;
      uVar6 = extractps(auVar73,1);
      *(undefined8 *)(param_1 + lVar13) = uVar6;
      uVar6 = extractps(auVar73,2);
      *(undefined8 *)(param_1 + lVar20) = uVar6;
      auVar80._0_4_ =
           (float)(~uVar24 & (uint)((float)(~uVar23 & auVar78._0_4_) * fVar65)) + auVar77._0_4_;
      auVar80._4_4_ =
           (float)(~uVar27 & (uint)((float)(~uVar26 & auVar78._4_4_) * fVar66)) + auVar77._4_4_;
      auVar80._8_4_ =
           (float)(~uVar29 & (uint)((float)(~uVar28 & auVar78._8_4_) * fVar67)) + auVar77._8_4_;
      auVar80._12_4_ =
           (float)(~uVar31 & (uint)((float)(~uVar30 & auVar78._12_4_) * fVar68)) + auVar77._12_4_;
      uVar6 = extractps(auVar73,3);
      *(undefined8 *)(param_1 + lVar21) = uVar6;
      *(float *)(param_1 + 4 + lVar17) = auVar80._0_4_;
      uVar6 = extractps(auVar80,1);
      *(undefined8 *)(param_1 + 4 + lVar13) = uVar6;
      uVar6 = extractps(auVar80,2);
      *(undefined8 *)(param_1 + 4 + lVar20) = uVar6;
      auVar79._0_4_ =
           (float)(~uVar24 & (uint)(fVar65 * (float)(~uVar23 & auVar71._0_4_))) + auVar74._0_4_;
      auVar79._4_4_ =
           (float)(~uVar27 & (uint)(fVar66 * (float)(~uVar26 & auVar71._4_4_))) + auVar74._4_4_;
      auVar79._8_4_ =
           (float)(~uVar29 & (uint)(fVar67 * (float)(~uVar28 & auVar71._8_4_))) + auVar74._8_4_;
      auVar79._12_4_ =
           (float)(~uVar31 & (uint)(fVar68 * (float)(~uVar30 & auVar71._12_4_))) + auVar74._12_4_;
      uVar6 = extractps(auVar80,3);
      *(undefined8 *)(param_1 + 4 + lVar21) = uVar6;
      *(float *)(param_1 + 8 + lVar17) = auVar79._0_4_;
      uVar6 = extractps(auVar79,1);
      *(undefined8 *)(param_1 + 8 + lVar13) = uVar6;
      uVar6 = extractps(auVar79,2);
      *(undefined8 *)(param_1 + 8 + lVar20) = uVar6;
      uVar6 = extractps(auVar79,3);
      *(undefined8 *)(param_1 + 8 + lVar21) = uVar6;
      *(undefined4 *)(param_1 + 0xc + lVar17) = uVar40;
      *(undefined4 *)(param_1 + 0xc + lVar13) = uVar2;
      *(undefined4 *)(param_1 + 0xc + lVar20) = uVar4;
      *(undefined4 *)(param_1 + 0xc + lVar21) = uVar5;
      pfVar15 = pfVar15 + 0xc;
      uVar18 = uVar18 + 4;
    } while ((int)uVar18 < (int)(uVar25 & 0xfffffffc));
    if ((int)param_6 <= (int)uVar18) {
      return;
    }
  }
  auVar54._0_4_ =
       -(uint)((int)(uVar18 | (uint)__xmm_00000003000000020000000100000000) < (int)param_6);
  auVar54._4_4_ =
       -(uint)((int)(uVar18 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_6);
  auVar54._8_4_ = -(uint)((int)(uVar18 | _UNK_150631e08) < (int)param_6);
  auVar54._12_4_ = -(uint)((int)(uVar18 | _UNK_150631e0c) < (int)param_6);
  pauVar1 = (undefined1 (*) [16])(param_2 + (ulonglong)uVar18 * 0xc);
  iVar8 = movmskps(uVar18 * 3,auVar54);
  bVar10 = (char)((char)iVar8 << 4) >> 4;
  if (iVar8 == 0xf) {
    auVar59 = *pauVar1;
    auVar71 = pauVar1[1];
    uVar40 = auVar71._0_4_;
    auVar61._4_4_ = uVar40;
    auVar61._0_4_ = uVar40;
    auVar61._8_4_ = uVar40;
    auVar61._12_4_ = uVar40;
    auVar37._8_4_ = auVar59._8_4_;
    auVar37._12_4_ = auVar59._12_4_;
    auVar57._0_8_ = CONCAT44(auVar37._12_4_,auVar59._0_4_);
    auVar57._8_4_ = auVar59._4_4_;
    auVar57._12_4_ = auVar37._12_4_;
    auVar38 = pblendw(auVar61,auVar57,0x3f);
    auVar37._0_8_ = auVar59._8_8_;
    auVar59 = pblendw(auVar37,auVar71,0xc);
    auVar45._0_8_ = CONCAT44(*(undefined4 *)(pauVar1[2] + 4),auVar71._8_4_);
    auVar45._8_4_ = auVar71._12_4_;
    auVar45._12_4_ = *(undefined4 *)(pauVar1[2] + 8);
    auVar55._8_8_ = auVar45._0_8_;
    auVar55._0_8_ = auVar57._0_8_;
    auVar50._8_8_ = auVar45._8_8_;
    auVar50._0_8_ = auVar38._8_8_;
    auVar33._0_8_ = auVar59._0_8_;
    auVar33._8_4_ = *(undefined4 *)pauVar1[2];
    auVar33._12_4_ = *(undefined4 *)(pauVar1[2] + 0xc);
    bVar22 = false;
  }
  else {
    auVar32._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar54._0_4_;
    auVar32._4_4_ = _UNK_150b50da4 & auVar54._4_4_;
    auVar32._8_4_ = _UNK_150b50da8 & auVar54._8_4_;
    auVar32._12_4_ = _UNK_150b50dac & auVar54._12_4_;
    lVar9 = extractps(auVar32,1);
    lVar11 = extractps(auVar32,2);
    lVar12 = extractps(auVar32,3);
    auVar55._4_4_ = *(undefined4 *)(*pauVar1 + lVar9);
    auVar55._0_4_ = *(undefined4 *)*pauVar1;
    auVar55._12_4_ = *(undefined4 *)(*pauVar1 + lVar12);
    auVar55._8_4_ = *(undefined4 *)(*pauVar1 + lVar11);
    auVar59 = ___xmm_000000280000001c0000001000000004 & auVar54;
    auVar50._4_4_ = *(undefined4 *)(*pauVar1 + auVar59._4_4_);
    auVar50._0_4_ = *(undefined4 *)(*pauVar1 + auVar59._0_4_);
    auVar50._12_4_ = *(undefined4 *)(*pauVar1 + auVar59._12_4_);
    auVar50._8_4_ = *(undefined4 *)(*pauVar1 + auVar59._8_4_);
    auVar59 = ___xmm_0000002c000000200000001400000008 & auVar54;
    auVar33._4_4_ = *(undefined4 *)(*pauVar1 + auVar59._4_4_);
    auVar33._0_4_ = *(undefined4 *)(*pauVar1 + auVar59._0_4_);
    auVar33._12_4_ = *(undefined4 *)(*pauVar1 + auVar59._12_4_);
    auVar33._8_4_ = *(undefined4 *)(*pauVar1 + auVar59._8_4_);
    bVar22 = (bVar10 & 1) == 0;
    auVar59 = in_XMM4;
    if (bVar22) goto LAB_1402fa0c3;
  }
  auVar59 = auVar55;
  auVar55 = auVar59;
LAB_1402fa0c3:
  if (bVar22) {
    auVar59 = pblendw(in_XMM4,auVar59,3);
    auVar71 = in_XMM1;
    auVar38 = in_XMM3;
  }
  else {
    auVar59 = pblendw(in_XMM4,auVar59,3);
    auVar71 = auVar33;
    auVar38 = auVar50;
  }
  if ((bVar10 & 2) == 0) {
    auVar38 = pblendw(in_XMM3,auVar38,3);
    auVar59 = pblendw(auVar59,auVar59,0xc);
    auVar78 = auVar38;
  }
  else {
    auVar38 = pblendw(in_XMM3,auVar38,3);
    auVar59 = pblendw(auVar59,auVar55,0xc);
    auVar78 = auVar50;
  }
  if ((bVar10 & 4) == 0) {
    auVar38 = pblendw(auVar38,auVar78,0xc);
    auVar59 = pblendw(auVar59,auVar59,0x30);
    auVar78 = auVar38;
  }
  else {
    auVar38 = pblendw(auVar38,auVar78,0xc);
    auVar59 = pblendw(auVar59,auVar55,0x30);
    auVar78 = auVar50;
  }
  if ((char)bVar10 < '\0') {
    auVar38 = pblendw(auVar38,auVar78,0x30);
  }
  else {
    auVar50 = pblendw(auVar38,auVar78,0x30);
    auVar55 = auVar59;
    auVar38 = auVar50;
  }
  auVar38 = pblendw(auVar38,auVar50,0xc0);
  auVar53._0_4_ = (auVar38._0_4_ + param_7) * 0x10;
  auVar53._4_4_ = (auVar38._4_4_ + param_7) * 0x10;
  auVar53._8_4_ = (auVar38._8_4_ + param_7) * 0x10;
  auVar53._12_4_ = (auVar38._12_4_ + param_7) * 0x10;
  auVar79 = auVar54 & auVar53;
  lVar9 = param_1 + auVar79._0_4_;
  lVar11 = param_1 + auVar79._4_4_;
  bVar22 = (bVar10 & 2) != 0;
  auVar59 = pblendw(auVar59,auVar55,0xc0);
  auVar51._0_4_ = (auVar59._0_4_ + param_7) * 0x10;
  auVar51._4_4_ = (auVar59._4_4_ + param_7) * 0x10;
  auVar51._8_4_ = (auVar59._8_4_ + param_7) * 0x10;
  auVar51._12_4_ = (auVar59._12_4_ + param_7) * 0x10;
  auVar51 = auVar51 & auVar54;
  auVar49 = ___xmm_00000004000000040000000400000004 & auVar54;
  uVar14 = (ulonglong)auVar49._0_4_;
  auVar78 = ___xmm_00000008000000080000000800000008 & auVar54;
  uVar16 = (ulonglong)auVar78._0_4_;
  auVar59 = ZEXT416(*(uint *)(param_1 + auVar79._0_4_));
  if (bVar22) {
    auVar59 = insertps(auVar59,*(undefined4 *)(param_1 + auVar79._4_4_),0x10);
  }
  auVar74 = ZEXT416(*(uint *)(uVar14 + lVar9));
  if (bVar22) {
    auVar74 = insertps(auVar74,*(undefined4 *)((ulonglong)auVar49._4_4_ + lVar11),0x10);
  }
  lVar12 = (longlong)auVar51._0_4_;
  auVar77 = ZEXT416(*(uint *)(uVar16 + lVar9));
  if (bVar22) {
    auVar77 = insertps(auVar77,*(undefined4 *)((ulonglong)auVar78._4_4_ + lVar11),0x10);
  }
  lVar13 = param_1 + lVar12;
  lVar17 = param_1 + auVar51._4_4_;
  auVar71 = blendps(in_XMM1,auVar71,1);
  if ((bVar10 & 2) == 0) {
    auVar76 = ZEXT416(*(uint *)(param_1 + lVar12));
    auVar73 = ZEXT416(*(uint *)(uVar14 + lVar13));
    auVar69 = ZEXT416(*(uint *)(uVar16 + lVar13));
    auVar39 = auVar71;
  }
  else {
    auVar76 = insertps(ZEXT416(*(uint *)(param_1 + lVar12)),*(undefined4 *)(param_1 + auVar51._4_4_)
                       ,0x10);
    auVar73 = insertps(ZEXT416(*(uint *)(uVar14 + lVar13)),
                       *(undefined4 *)((ulonglong)auVar49._4_4_ + lVar17),0x10);
    auVar69 = insertps(ZEXT416(*(uint *)(uVar16 + lVar13)),
                       *(undefined4 *)((ulonglong)auVar78._4_4_ + lVar17),0x10);
    auVar39 = auVar33;
  }
  lVar12 = param_1 + auVar79._8_4_;
  if ((bVar10 & 4) != 0) {
    auVar59 = insertps(auVar59,*(undefined4 *)(param_1 + auVar79._8_4_),0x20);
    auVar74 = insertps(auVar74,*(undefined4 *)((ulonglong)auVar49._8_4_ + lVar12),0x20);
    auVar77 = insertps(auVar77,*(undefined4 *)((ulonglong)auVar78._8_4_ + lVar12),0x20);
  }
  lVar13 = param_1 + auVar51._8_4_;
  auVar39 = blendps(auVar71,auVar39,2);
  auVar71 = auVar39;
  if ((bVar10 & 4) != 0) {
    auVar76 = insertps(auVar76,*(undefined4 *)(param_1 + auVar51._8_4_),0x20);
    auVar73 = insertps(auVar73,*(undefined4 *)((ulonglong)auVar49._8_4_ + lVar13),0x20);
    auVar69 = insertps(auVar69,*(undefined4 *)((ulonglong)auVar78._8_4_ + lVar13),0x20);
    auVar71 = auVar33;
  }
  uVar6 = param_1 + auVar79._12_4_;
  if ((char)bVar10 < '\0') {
    auVar59 = insertps(auVar59,*(undefined4 *)(param_1 + auVar79._12_4_),0x30);
    auVar74 = insertps(auVar74,*(undefined4 *)((ulonglong)auVar49._12_4_ + uVar6),0x30);
  }
  if ((char)bVar10 < '\0') {
    auVar77 = insertps(auVar77,*(undefined4 *)((ulonglong)auVar78._12_4_ + uVar6),0x30);
    auVar71 = blendps(auVar39,auVar71,4);
  }
  else {
    auVar71 = blendps(auVar39,auVar71,4);
  }
  uVar7 = param_1 + auVar51._12_4_;
  auVar79 = auVar71;
  if ((char)bVar10 < '\0') {
    auVar76 = insertps(auVar76,*(undefined4 *)(param_1 + auVar51._12_4_),0x30);
    auVar73 = insertps(auVar73,*(undefined4 *)((ulonglong)auVar49._12_4_ + uVar7),0x30);
    auVar69 = insertps(auVar69,*(undefined4 *)((ulonglong)auVar78._12_4_ + uVar7),0x30);
    auVar79 = auVar33;
  }
  auVar49 = blendps(auVar71,auVar79,8);
  auVar38 = auVar38 & auVar54;
  auVar71 = ___xmm_0000000c0000000c0000000c0000000c & auVar54;
  auVar79 = insertps(ZEXT416(*(uint *)((ulonglong)auVar71._0_4_ + lVar9)),
                     *(undefined4 *)((ulonglong)auVar71._4_4_ + lVar11),0x10);
  auVar79 = insertps(auVar79,*(undefined4 *)((ulonglong)auVar71._8_4_ + lVar12),0x20);
  auVar79 = insertps(auVar79,*(undefined4 *)((ulonglong)auVar71._12_4_ + uVar6),0x30);
  bVar3 = *(byte *)(param_4 + auVar38._8_4_);
  auVar42._0_4_ = (uint)*(byte *)(param_4 + auVar38._0_4_) << 2;
  auVar42._4_4_ = (uint)*(byte *)(param_4 + auVar38._4_4_) << 2;
  auVar42._8_4_ = (uint)bVar3 << 2;
  auVar42._12_4_ = (uint)*(byte *)(param_4 + auVar38._12_4_) << 2;
  auVar38 = pmovzxdq(auVar78,auVar42);
  auVar43._0_8_ = (ulonglong)bVar3 << 2;
  auVar43._8_4_ = auVar42._12_4_;
  auVar43._12_4_ = 0;
  auVar71 = pmovsxdq(auVar71,auVar54);
  auVar38 = blendvps((undefined1  [16])0x0,auVar38,auVar71);
  auVar34._4_4_ = auVar54._8_4_;
  auVar34._0_4_ = auVar54._8_4_;
  auVar34._8_4_ = auVar54._12_4_;
  auVar34._12_4_ = auVar54._12_4_;
  auVar71 = blendvps(ZEXT816(0),auVar43,auVar34);
  auVar38 = insertps(ZEXT416(*(uint *)(param_5 + auVar38._0_8_)),
                     *(undefined4 *)(param_5 + auVar38._8_8_),0x10);
  auVar38 = insertps(auVar38,*(undefined4 *)(param_5 + auVar71._0_8_),0x20);
  auVar38 = insertps(auVar38,*(undefined4 *)(param_5 + auVar71._8_8_),0x30);
  auVar75._0_4_ = auVar76._0_4_ - auVar59._0_4_;
  auVar75._4_4_ = auVar76._4_4_ - auVar59._4_4_;
  auVar75._8_4_ = auVar76._8_4_ - auVar59._8_4_;
  auVar75._12_4_ = auVar76._12_4_ - auVar59._12_4_;
  fVar58 = auVar74._0_4_;
  auVar72._0_4_ = auVar73._0_4_ - fVar58;
  fVar62 = auVar74._4_4_;
  auVar72._4_4_ = auVar73._4_4_ - fVar62;
  fVar63 = auVar74._8_4_;
  auVar72._8_4_ = auVar73._8_4_ - fVar63;
  fVar64 = auVar74._12_4_;
  auVar72._12_4_ = auVar73._12_4_ - fVar64;
  fVar65 = auVar77._0_4_;
  auVar70._0_4_ = auVar69._0_4_ - fVar65;
  fVar66 = auVar77._4_4_;
  auVar70._4_4_ = auVar69._4_4_ - fVar66;
  fVar67 = auVar77._8_4_;
  auVar70._8_4_ = auVar69._8_4_ - fVar67;
  fVar68 = auVar77._12_4_;
  auVar70._12_4_ = auVar69._12_4_ - fVar68;
  auVar44._0_4_ = auVar72._0_4_ * auVar72._0_4_ + auVar75._0_4_ * auVar75._0_4_;
  auVar44._4_4_ = auVar72._4_4_ * auVar72._4_4_ + auVar75._4_4_ * auVar75._4_4_;
  auVar44._8_4_ = auVar72._8_4_ * auVar72._8_4_ + auVar75._8_4_ * auVar75._8_4_;
  auVar44._12_4_ = auVar72._12_4_ * auVar72._12_4_ + auVar75._12_4_ * auVar75._12_4_;
  auVar35._0_4_ = auVar70._0_4_ * auVar70._0_4_ + auVar44._0_4_;
  auVar35._4_4_ = auVar70._4_4_ * auVar70._4_4_ + auVar44._4_4_;
  auVar35._8_4_ = auVar70._8_4_ * auVar70._8_4_ + auVar44._8_4_;
  auVar35._12_4_ = auVar70._12_4_ * auVar70._12_4_ + auVar44._12_4_;
  auVar71 = sqrtps(auVar44,auVar35);
  uVar25 = -(uint)(auVar71._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
  uVar23 = -(uint)(auVar71._4_4_ < _UNK_1506895e4);
  uVar26 = -(uint)(auVar71._8_4_ < _UNK_1506895e8);
  uVar28 = -(uint)(auVar71._12_4_ < _UNK_1506895ec);
  auVar36._4_4_ = uVar23;
  auVar36._0_4_ = uVar25;
  auVar36._8_4_ = uVar26;
  auVar36._12_4_ = uVar28;
  auVar78 = divps(auVar75,auVar71);
  auVar74 = blendvps(auVar78,___xmm_3f8000003f8000003f8000003f800000,auVar36);
  auVar78 = divps(auVar72,auVar71);
  fVar41 = auVar71._0_4_ - auVar38._0_4_ * auVar49._0_4_;
  fVar46 = auVar71._4_4_ - auVar38._4_4_ * auVar49._4_4_;
  fVar47 = auVar71._8_4_ - auVar38._8_4_ * auVar49._8_4_;
  fVar48 = auVar71._12_4_ - auVar38._12_4_ * auVar49._12_4_;
  fVar81 = param_3 * fVar41;
  fVar82 = param_3 * fVar46;
  fVar83 = param_3 * fVar47;
  param_3 = param_3 * fVar48;
  uVar18 = -(uint)(fVar41 < 0.0);
  uVar24 = -(uint)(fVar46 < 0.0);
  uVar27 = -(uint)(fVar47 < 0.0);
  uVar29 = -(uint)(fVar48 < 0.0);
  auVar52._0_4_ = (float)(~uVar18 & (uint)(auVar74._0_4_ * fVar81)) + auVar59._0_4_;
  auVar52._4_4_ = (float)(~uVar24 & (uint)(auVar74._4_4_ * fVar82)) + auVar59._4_4_;
  auVar52._8_4_ = (float)(~uVar27 & (uint)(auVar74._8_4_ * fVar83)) + auVar59._8_4_;
  auVar52._12_4_ = (float)(~uVar29 & (uint)(auVar74._12_4_ * param_3)) + auVar59._12_4_;
  if ((bVar10 & 1) != 0) {
    *(float *)(param_1 + auVar53._0_4_) = auVar52._0_4_;
  }
  fVar41 = (float)(~uVar25 & auVar78._0_4_);
  fVar46 = (float)(~uVar23 & auVar78._4_4_);
  fVar47 = (float)(~uVar26 & auVar78._8_4_);
  fVar48 = (float)(~uVar28 & auVar78._12_4_);
  if ((bVar10 & 2) != 0) {
    uVar6 = extractps(auVar52,1);
    *(undefined8 *)(param_1 + auVar53._4_4_) = uVar6;
  }
  if ((bVar10 & 4) == 0) {
    fVar41 = (float)(~uVar18 & (uint)(fVar41 * fVar81));
    fVar46 = (float)(~uVar24 & (uint)(fVar46 * fVar82));
    fVar47 = (float)(~uVar27 & (uint)(fVar47 * fVar83));
    fVar48 = (float)(~uVar29 & (uint)(fVar48 * param_3));
  }
  else {
    uVar6 = extractps(auVar52,2);
    *(undefined8 *)(param_1 + auVar53._8_4_) = uVar6;
    fVar41 = (float)(~uVar18 & (uint)(fVar41 * fVar81));
    fVar46 = (float)(~uVar24 & (uint)(fVar46 * fVar82));
    fVar47 = (float)(~uVar27 & (uint)(fVar47 * fVar83));
    fVar48 = (float)(~uVar29 & (uint)(fVar48 * param_3));
  }
  if ((char)bVar10 < '\0') {
    uVar6 = extractps(auVar52,3);
    *(undefined8 *)(param_1 + auVar53._12_4_) = uVar6;
    auVar59 = divps(auVar70,auVar71);
    auVar60._0_4_ = fVar58 + fVar41;
    auVar60._4_4_ = fVar62 + fVar46;
    auVar60._8_4_ = fVar63 + fVar47;
    auVar60._12_4_ = fVar64 + fVar48;
  }
  else {
    auVar59 = divps(auVar70,auVar71);
    auVar60._0_4_ = fVar58 + fVar41;
    auVar60._4_4_ = fVar62 + fVar46;
    auVar60._8_4_ = fVar63 + fVar47;
    auVar60._12_4_ = fVar64 + fVar48;
  }
  if ((bVar10 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar53._0_4_) = auVar60._0_4_;
  }
  if ((bVar10 & 2) != 0) {
    uVar6 = extractps(auVar60,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar53._4_4_) = uVar6;
  }
  if ((bVar10 & 4) != 0) {
    uVar6 = extractps(auVar60,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar53._8_4_) = uVar6;
  }
  uVar5 = ~uVar29 & (uint)((float)(~uVar28 & auVar59._12_4_) * param_3);
  uVar4 = ~uVar27 & (uint)((float)(~uVar26 & auVar59._8_4_) * fVar83);
  uVar2 = ~uVar24 & (uint)((float)(~uVar23 & auVar59._4_4_) * fVar82);
  uVar40 = ~uVar18 & (uint)((float)(~uVar25 & auVar59._0_4_) * fVar81);
  if ((char)bVar10 < '\0') {
    uVar6 = extractps(auVar60,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar53._12_4_) = uVar6;
    auVar56._0_4_ = fVar65 + (float)uVar40;
    auVar56._4_4_ = fVar66 + (float)uVar2;
    auVar56._8_4_ = fVar67 + (float)uVar4;
    auVar56._12_4_ = fVar68 + (float)uVar5;
  }
  else {
    auVar56._0_4_ = fVar65 + (float)uVar40;
    auVar56._4_4_ = fVar66 + (float)uVar2;
    auVar56._8_4_ = fVar67 + (float)uVar4;
    auVar56._12_4_ = fVar68 + (float)uVar5;
  }
  if ((bVar10 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar53._0_4_) = auVar56._0_4_;
  }
  if ((bVar10 & 2) != 0) {
    uVar6 = extractps(auVar56,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar53._4_4_) = uVar6;
  }
  if ((bVar10 & 4) != 0) {
    uVar6 = extractps(auVar56,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar53._8_4_) = uVar6;
  }
  if ((char)bVar10 < '\0') {
    uVar6 = extractps(auVar56,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar53._12_4_) = uVar6;
  }
  if ((bVar10 & 1) != 0) {
    *(int *)(param_1 + 0xc + (longlong)auVar53._0_4_) = auVar79._0_4_;
  }
  if ((bVar10 & 2) != 0) {
    uVar6 = extractps(auVar79,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar53._4_4_) = uVar6;
  }
  if ((bVar10 & 4) != 0) {
    uVar6 = extractps(auVar79,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar53._8_4_) = uVar6;
  }
  if ((char)bVar10 < '\0') {
    uVar6 = extractps(auVar79,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar53._12_4_) = uVar6;
  }
  return;
}

// ApplyLongRangeConstraintsStiffnessScaleWeightmaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFTether_5D__3E_un_3C_CunT_3E_un_3C_Cunf_3E_un_3C_CunT_3E_un_3C_Cunf_3E_CuniCuni_sse4 @ 1402fa9a0

/* WARNING: Removing unreachable block (ram,0x0001402fb863) */
/* WARNING: Removing unreachable block (ram,0x0001402fb59a) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLongRangeConstraintsStiffnessScaleWeightmaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFTether_5D__3E_un_3C_CunT_3E_un_3C_Cunf_3E_un_3C_CunT_3E_un_3C_Cunf_3E_CuniCuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,uint param_7,int param_8)

{
  undefined1 (*pauVar1) [16];
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  byte bVar9;
  float *pfVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  bool bVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined4 uVar40;
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
  float fVar54;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined1 auVar55 [16];
  float fVar59;
  float fVar62;
  float fVar63;
  undefined1 auVar60 [16];
  float fVar64;
  undefined1 auVar61 [16];
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
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  
  uVar22 = param_7 + 3;
  if (-1 < (int)param_7) {
    uVar22 = param_7;
  }
  if ((int)(uVar22 & 0xfffffffc) < 1) {
    uVar12 = 0;
    if ((int)param_7 < 1) {
      return;
    }
  }
  else {
    pfVar10 = (float *)(param_2 + 0x20);
    uVar12 = 0;
    do {
      auVar49 = *(undefined1 (*) [16])(pfVar10 + -8);
      auVar36 = *(undefined1 (*) [16])(pfVar10 + -4);
      uVar40 = auVar36._0_4_;
      auVar32._4_4_ = uVar40;
      auVar32._0_4_ = uVar40;
      auVar32._8_4_ = uVar40;
      auVar32._12_4_ = uVar40;
      auVar50._8_4_ = auVar49._8_4_;
      auVar50._12_4_ = auVar49._12_4_;
      auVar65._0_8_ = CONCAT44(auVar50._12_4_,auVar49._0_4_);
      auVar65._8_4_ = auVar49._4_4_;
      auVar65._12_4_ = auVar50._12_4_;
      auVar32 = pblendw(auVar32,auVar65,0x3f);
      auVar67._0_8_ = CONCAT44(pfVar10[1],auVar36._8_4_);
      auVar67._8_4_ = auVar36._12_4_;
      auVar67._12_4_ = pfVar10[2];
      in_XMM2._8_8_ = auVar67._0_8_;
      in_XMM2._0_8_ = auVar65._0_8_;
      in_XMM1._8_8_ = auVar67._8_8_;
      in_XMM1._0_8_ = auVar32._8_8_;
      auVar50._0_8_ = auVar49._8_8_;
      lVar14 = (longlong)((auVar49._0_4_ + param_8) * 0x10);
      lVar16 = (longlong)((auVar50._12_4_ + param_8) * 0x10);
      auVar49 = insertps(ZEXT416(*(uint *)(param_1 + lVar14)),*(undefined4 *)(param_1 + lVar16),0x10
                        );
      auVar67 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar14)),
                         *(undefined4 *)(param_1 + 4 + lVar16),0x10);
      auVar65 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar14)),
                         *(undefined4 *)(param_1 + 8 + lVar16),0x10);
      lVar14 = (longlong)((auVar36._8_4_ + param_8) * 0x10);
      auVar49 = insertps(auVar49,*(undefined4 *)(param_1 + lVar14),0x20);
      auVar68 = insertps(auVar67,*(undefined4 *)(param_1 + 4 + lVar14),0x20);
      lVar16 = (longlong)(((int)pfVar10[1] + param_8) * 0x10);
      auVar65 = insertps(auVar65,*(undefined4 *)(param_1 + 8 + lVar14),0x20);
      auVar67 = insertps(auVar49,*(undefined4 *)(param_1 + lVar16),0x30);
      auVar69 = insertps(auVar68,*(undefined4 *)(param_1 + 4 + lVar16),0x30);
      auVar68 = insertps(auVar65,*(undefined4 *)(param_1 + 8 + lVar16),0x30);
      lVar15 = (longlong)((auVar32._8_4_ + param_8) * 0x10);
      lVar17 = (longlong)((auVar32._12_4_ + param_8) * 0x10);
      lVar14 = (longlong)((auVar36._12_4_ + param_8) * 0x10);
      auVar32 = insertps(ZEXT416(*(uint *)(param_4 +
                                          (ulonglong)*(byte *)(param_3 + (int)pfVar10[-7]) * 4)),
                         *(undefined4 *)
                          (param_4 + (ulonglong)((uint)*(byte *)(param_3 + (int)pfVar10[-4]) * 4)),
                         0x10);
      auVar49 = insertps(ZEXT416(*(uint *)(param_6 +
                                          (ulonglong)*(byte *)(param_5 + (int)pfVar10[-7]) * 4)),
                         *(undefined4 *)
                          (param_6 + (ulonglong)((uint)*(byte *)(param_5 + (int)pfVar10[-4]) * 4)),
                         0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)
                                  (param_4 + (ulonglong)*(byte *)(param_3 + (int)pfVar10[-1]) * 4),
                         0x20);
      auVar49 = insertps(auVar49,*(undefined4 *)
                                  (param_6 + (ulonglong)*(byte *)(param_5 + (int)pfVar10[-1]) * 4),
                         0x20);
      auVar60 = insertps(auVar32,*(undefined4 *)
                                  (param_4 + (ulonglong)*(byte *)(param_3 + (int)pfVar10[2]) * 4),
                         0x30);
      auVar65 = insertps(auVar49,*(undefined4 *)
                                  (param_6 + (ulonglong)*(byte *)(param_5 + (int)pfVar10[2]) * 4),
                         0x30);
      lVar16 = (longlong)(((int)pfVar10[2] + param_8) * 0x10);
      auVar49 = insertps(ZEXT416(*(uint *)(param_1 + lVar15)),*(undefined4 *)(param_1 + lVar17),0x10
                        );
      auVar32 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar15)),
                         *(undefined4 *)(param_1 + 4 + lVar17),0x10);
      auVar49 = insertps(auVar49,*(undefined4 *)(param_1 + lVar14),0x20);
      auVar73 = insertps(auVar32,*(undefined4 *)(param_1 + 4 + lVar14),0x20);
      auVar32 = insertps(auVar49,*(undefined4 *)(param_1 + lVar16),0x30);
      auVar49 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar15)),
                         *(undefined4 *)(param_1 + 8 + lVar17),0x10);
      auVar74 = insertps(auVar73,*(undefined4 *)(param_1 + 4 + lVar16),0x30);
      auVar49 = insertps(auVar49,*(undefined4 *)(param_1 + 8 + lVar14),0x20);
      auVar71 = insertps(auVar49,*(undefined4 *)(param_1 + 8 + lVar16),0x30);
      auVar36 = pblendw(auVar50,auVar36,0xc);
      auVar73._0_4_ = auVar67._0_4_ - auVar32._0_4_;
      auVar73._4_4_ = auVar67._4_4_ - auVar32._4_4_;
      auVar73._8_4_ = auVar67._8_4_ - auVar32._8_4_;
      auVar73._12_4_ = auVar67._12_4_ - auVar32._12_4_;
      auVar46._0_4_ = auVar69._0_4_ - auVar74._0_4_;
      auVar46._4_4_ = auVar69._4_4_ - auVar74._4_4_;
      auVar46._8_4_ = auVar69._8_4_ - auVar74._8_4_;
      auVar46._12_4_ = auVar69._12_4_ - auVar74._12_4_;
      auVar37._0_4_ = auVar68._0_4_ - auVar71._0_4_;
      auVar37._4_4_ = auVar68._4_4_ - auVar71._4_4_;
      auVar37._8_4_ = auVar68._8_4_ - auVar71._8_4_;
      auVar37._12_4_ = auVar68._12_4_ - auVar71._12_4_;
      auVar69._0_4_ = auVar46._0_4_ * auVar46._0_4_ + auVar73._0_4_ * auVar73._0_4_;
      auVar69._4_4_ = auVar46._4_4_ * auVar46._4_4_ + auVar73._4_4_ * auVar73._4_4_;
      auVar69._8_4_ = auVar46._8_4_ * auVar46._8_4_ + auVar73._8_4_ * auVar73._8_4_;
      auVar69._12_4_ = auVar46._12_4_ * auVar46._12_4_ + auVar73._12_4_ * auVar73._12_4_;
      in_XMM3._0_8_ = auVar36._0_8_;
      in_XMM3._8_4_ = *pfVar10;
      in_XMM3._12_4_ = pfVar10[3];
      auVar68._0_4_ = auVar37._0_4_ * auVar37._0_4_ + auVar69._0_4_;
      auVar68._4_4_ = auVar37._4_4_ * auVar37._4_4_ + auVar69._4_4_;
      auVar68._8_4_ = auVar37._8_4_ * auVar37._8_4_ + auVar69._8_4_;
      auVar68._12_4_ = auVar37._12_4_ * auVar37._12_4_ + auVar69._12_4_;
      auVar67 = sqrtps(auVar69,auVar68);
      uVar20 = -(uint)(auVar67._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
      uVar23 = -(uint)(auVar67._4_4_ < _UNK_1506895e4);
      uVar25 = -(uint)(auVar67._8_4_ < _UNK_1506895e8);
      uVar27 = -(uint)(auVar67._12_4_ < _UNK_1506895ec);
      auVar49._4_4_ = uVar23;
      auVar49._0_4_ = uVar20;
      auVar49._8_4_ = uVar25;
      auVar49._12_4_ = uVar27;
      auVar50 = divps(auVar73,auVar67);
      auVar49 = blendvps(auVar50,___xmm_3f8000003f8000003f8000003f800000,auVar49);
      auVar68 = divps(auVar46,auVar67);
      uVar40 = *(undefined4 *)(param_1 + 0xc + lVar15);
      auVar50 = divps(auVar37,auVar67);
      uVar3 = *(undefined4 *)(param_1 + 0xc + lVar17);
      fVar54 = auVar67._0_4_ - auVar65._0_4_ * auVar36._0_4_;
      fVar56 = auVar67._4_4_ - auVar65._4_4_ * auVar36._4_4_;
      fVar57 = auVar67._8_4_ - auVar65._8_4_ * *pfVar10;
      fVar58 = auVar67._12_4_ - auVar65._12_4_ * pfVar10[3];
      uVar4 = *(undefined4 *)(param_1 + 0xc + lVar14);
      fVar59 = auVar60._0_4_ * fVar54;
      fVar62 = auVar60._4_4_ * fVar56;
      fVar63 = auVar60._8_4_ * fVar57;
      fVar64 = auVar60._12_4_ * fVar58;
      uVar21 = -(uint)(fVar54 < __xmm_00000000000000000000000000000000);
      uVar24 = -(uint)(fVar56 < _UNK_150aa8f64);
      uVar26 = -(uint)(fVar57 < (float)DAT_150aa8f68);
      uVar28 = -(uint)(fVar58 < DAT_150aa8f68._4_4_);
      uVar7 = *(undefined4 *)(param_1 + 0xc + lVar16);
      auVar60._0_4_ = (float)(~uVar21 & (uint)(auVar49._0_4_ * fVar59)) + auVar32._0_4_;
      auVar60._4_4_ = (float)(~uVar24 & (uint)(auVar49._4_4_ * fVar62)) + auVar32._4_4_;
      auVar60._8_4_ = (float)(~uVar26 & (uint)(auVar49._8_4_ * fVar63)) + auVar32._8_4_;
      auVar60._12_4_ = (float)(~uVar28 & (uint)(auVar49._12_4_ * fVar64)) + auVar32._12_4_;
      *(float *)(param_1 + lVar15) = auVar60._0_4_;
      uVar8 = extractps(auVar60,1);
      *(undefined8 *)(param_1 + lVar17) = uVar8;
      uVar8 = extractps(auVar60,2);
      *(undefined8 *)(param_1 + lVar14) = uVar8;
      auVar36._0_4_ =
           (float)(~uVar21 & (uint)((float)(~uVar20 & auVar68._0_4_) * fVar59)) + auVar74._0_4_;
      auVar36._4_4_ =
           (float)(~uVar24 & (uint)((float)(~uVar23 & auVar68._4_4_) * fVar62)) + auVar74._4_4_;
      auVar36._8_4_ =
           (float)(~uVar26 & (uint)((float)(~uVar25 & auVar68._8_4_) * fVar63)) + auVar74._8_4_;
      auVar36._12_4_ =
           (float)(~uVar28 & (uint)((float)(~uVar27 & auVar68._12_4_) * fVar64)) + auVar74._12_4_;
      uVar8 = extractps(auVar60,3);
      *(undefined8 *)(param_1 + lVar16) = uVar8;
      *(float *)(param_1 + 4 + lVar15) = auVar36._0_4_;
      uVar8 = extractps(auVar36,1);
      *(undefined8 *)(param_1 + 4 + lVar17) = uVar8;
      uVar8 = extractps(auVar36,2);
      *(undefined8 *)(param_1 + 4 + lVar14) = uVar8;
      auVar74._0_4_ =
           (float)(~uVar21 & (uint)(fVar59 * (float)(~uVar20 & auVar50._0_4_))) + auVar71._0_4_;
      auVar74._4_4_ =
           (float)(~uVar24 & (uint)(fVar62 * (float)(~uVar23 & auVar50._4_4_))) + auVar71._4_4_;
      auVar74._8_4_ =
           (float)(~uVar26 & (uint)(fVar63 * (float)(~uVar25 & auVar50._8_4_))) + auVar71._8_4_;
      auVar74._12_4_ =
           (float)(~uVar28 & (uint)(fVar64 * (float)(~uVar27 & auVar50._12_4_))) + auVar71._12_4_;
      uVar8 = extractps(auVar36,3);
      *(undefined8 *)(param_1 + 4 + lVar16) = uVar8;
      *(float *)(param_1 + 8 + lVar15) = auVar74._0_4_;
      uVar8 = extractps(auVar74,1);
      *(undefined8 *)(param_1 + 8 + lVar17) = uVar8;
      uVar8 = extractps(auVar74,2);
      *(undefined8 *)(param_1 + 8 + lVar14) = uVar8;
      uVar8 = extractps(auVar74,3);
      *(undefined8 *)(param_1 + 8 + lVar16) = uVar8;
      *(undefined4 *)(param_1 + 0xc + lVar15) = uVar40;
      *(undefined4 *)(param_1 + 0xc + lVar17) = uVar3;
      *(undefined4 *)(param_1 + 0xc + lVar14) = uVar4;
      *(undefined4 *)(param_1 + 0xc + lVar16) = uVar7;
      pfVar10 = pfVar10 + 0xc;
      uVar12 = uVar12 + 4;
    } while ((int)uVar12 < (int)(uVar22 & 0xfffffffc));
    if ((int)param_7 <= (int)uVar12) {
      return;
    }
  }
  auVar71._0_4_ =
       -(uint)((int)(uVar12 | (uint)__xmm_00000003000000020000000100000000) < (int)param_7);
  auVar71._4_4_ =
       -(uint)((int)(uVar12 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_7);
  auVar71._8_4_ = -(uint)((int)(uVar12 | _UNK_150631e08) < (int)param_7);
  auVar71._12_4_ = -(uint)((int)(uVar12 | _UNK_150631e0c) < (int)param_7);
  pauVar1 = (undefined1 (*) [16])(param_2 + (ulonglong)uVar12 * 0xc);
  iVar13 = movmskps(uVar12,auVar71);
  bVar9 = (char)((char)iVar13 << 4) >> 4;
  if (iVar13 == 0xf) {
    auVar49 = *pauVar1;
    auVar36 = pauVar1[1];
    uVar40 = auVar36._0_4_;
    auVar45._4_4_ = uVar40;
    auVar45._0_4_ = uVar40;
    auVar45._8_4_ = uVar40;
    auVar45._12_4_ = uVar40;
    uVar40 = auVar49._12_4_;
    auVar72._0_8_ = CONCAT44(uVar40,auVar49._0_4_);
    auVar72._8_4_ = auVar49._4_4_;
    auVar72._12_4_ = uVar40;
    auVar32 = pblendw(auVar45,auVar72,0x3f);
    auVar42._0_8_ = auVar49._8_8_;
    auVar42._8_4_ = auVar49._8_4_;
    auVar42._12_4_ = uVar40;
    auVar49 = pblendw(auVar42,auVar36,0xc);
    auVar48._0_8_ = CONCAT44(*(undefined4 *)(pauVar1[2] + 4),auVar36._8_4_);
    auVar48._8_4_ = auVar36._12_4_;
    auVar48._12_4_ = *(undefined4 *)(pauVar1[2] + 8);
    auVar70._8_8_ = auVar48._0_8_;
    auVar70._0_8_ = auVar72._0_8_;
    auVar33._8_8_ = auVar48._8_8_;
    auVar33._0_8_ = auVar32._8_8_;
    auVar41._0_8_ = auVar49._0_8_;
    auVar41._8_4_ = *(undefined4 *)pauVar1[2];
    auVar41._12_4_ = *(undefined4 *)(pauVar1[2] + 0xc);
    bVar19 = false;
  }
  else {
    auVar29._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar71._0_4_;
    auVar29._4_4_ = _UNK_150b50da4 & auVar71._4_4_;
    auVar29._8_4_ = _UNK_150b50da8 & auVar71._8_4_;
    auVar29._12_4_ = _UNK_150b50dac & auVar71._12_4_;
    lVar16 = extractps(auVar29,1);
    lVar15 = extractps(auVar29,2);
    lVar14 = extractps(auVar29,3);
    auVar70._4_4_ = *(undefined4 *)(*pauVar1 + lVar16);
    auVar70._0_4_ = *(undefined4 *)*pauVar1;
    auVar70._12_4_ = *(undefined4 *)(*pauVar1 + lVar14);
    auVar70._8_4_ = *(undefined4 *)(*pauVar1 + lVar15);
    auVar49 = ___xmm_000000280000001c0000001000000004 & auVar71;
    auVar33._4_4_ = *(undefined4 *)(*pauVar1 + auVar49._4_4_);
    auVar33._0_4_ = *(undefined4 *)(*pauVar1 + auVar49._0_4_);
    auVar33._12_4_ = *(undefined4 *)(*pauVar1 + auVar49._12_4_);
    auVar33._8_4_ = *(undefined4 *)(*pauVar1 + auVar49._8_4_);
    auVar49 = ___xmm_0000002c000000200000001400000008 & auVar71;
    auVar41._4_4_ = *(undefined4 *)(*pauVar1 + auVar49._4_4_);
    auVar41._0_4_ = *(undefined4 *)(*pauVar1 + auVar49._0_4_);
    auVar41._12_4_ = *(undefined4 *)(*pauVar1 + auVar49._12_4_);
    auVar41._8_4_ = *(undefined4 *)(*pauVar1 + auVar49._8_4_);
    bVar19 = (bVar9 & 1) == 0;
    auVar49 = in_XMM2;
    if (bVar19) goto LAB_1402faef6;
  }
  auVar49 = auVar70;
LAB_1402faef6:
  if (bVar19) {
    auVar49 = pblendw(in_XMM2,auVar49,3);
    auVar36 = in_XMM3;
    auVar32 = in_XMM1;
  }
  else {
    auVar49 = pblendw(in_XMM2,auVar49,3);
    auVar36 = auVar41;
    auVar32 = auVar33;
  }
  if ((bVar9 & 2) == 0) {
    auVar32 = pblendw(in_XMM1,auVar32,3);
    auVar49 = pblendw(auVar49,auVar49,0xc);
    auVar65 = auVar32;
  }
  else {
    auVar32 = pblendw(in_XMM1,auVar32,3);
    auVar49 = pblendw(auVar49,auVar70,0xc);
    auVar65 = auVar33;
  }
  if ((bVar9 & 4) == 0) {
    auVar32 = pblendw(auVar32,auVar65,0xc);
    auVar49 = pblendw(auVar49,auVar49,0x30);
    auVar65 = auVar32;
  }
  else {
    auVar32 = pblendw(auVar32,auVar65,0xc);
    auVar49 = pblendw(auVar49,auVar70,0x30);
    auVar65 = auVar33;
  }
  if ((char)bVar9 < '\0') {
    auVar32 = pblendw(auVar32,auVar65,0x30);
  }
  else {
    auVar33 = pblendw(auVar32,auVar65,0x30);
    auVar70 = auVar49;
    auVar32 = auVar33;
  }
  auVar65 = pblendw(auVar32,auVar33,0xc0);
  auVar39._0_4_ = (auVar65._0_4_ + param_8) * 0x10;
  auVar39._4_4_ = (auVar65._4_4_ + param_8) * 0x10;
  auVar39._8_4_ = (auVar65._8_4_ + param_8) * 0x10;
  auVar39._12_4_ = (auVar65._12_4_ + param_8) * 0x10;
  auVar67 = auVar71 & auVar39;
  lVar14 = param_1 + auVar67._0_4_;
  lVar16 = param_1 + auVar67._4_4_;
  bVar19 = (bVar9 & 2) != 0;
  auVar49 = pblendw(auVar49,auVar70,0xc0);
  auVar34._0_4_ = (auVar49._0_4_ + param_8) * 0x10;
  auVar34._4_4_ = (auVar49._4_4_ + param_8) * 0x10;
  auVar34._8_4_ = (auVar49._8_4_ + param_8) * 0x10;
  auVar34._12_4_ = (auVar49._12_4_ + param_8) * 0x10;
  auVar34 = auVar34 & auVar71;
  auVar50 = ___xmm_00000004000000040000000400000004 & auVar71;
  uVar18 = (ulonglong)auVar50._0_4_;
  auVar32 = ___xmm_00000008000000080000000800000008 & auVar71;
  uVar11 = (ulonglong)auVar32._0_4_;
  auVar49 = ZEXT416(*(uint *)(param_1 + auVar67._0_4_));
  if (bVar19) {
    auVar49 = insertps(auVar49,*(undefined4 *)(param_1 + auVar67._4_4_),0x10);
  }
  auVar68 = ZEXT416(*(uint *)(uVar18 + lVar14));
  if (bVar19) {
    auVar68 = insertps(auVar68,*(undefined4 *)((ulonglong)auVar50._4_4_ + lVar16),0x10);
  }
  lVar15 = (longlong)auVar34._0_4_;
  auVar60 = ZEXT416(*(uint *)(uVar11 + lVar14));
  if (bVar19) {
    auVar60 = insertps(auVar60,*(undefined4 *)((ulonglong)auVar32._4_4_ + lVar16),0x10);
  }
  lVar17 = param_1 + lVar15;
  lVar2 = param_1 + auVar34._4_4_;
  auVar36 = blendps(in_XMM3,auVar36,1);
  if ((bVar9 & 2) == 0) {
    auVar74 = ZEXT416(*(uint *)(param_1 + lVar15));
    auVar69 = ZEXT416(*(uint *)(uVar18 + lVar17));
    auVar73 = ZEXT416(*(uint *)(uVar11 + lVar17));
    auVar37 = auVar36;
  }
  else {
    auVar74 = insertps(ZEXT416(*(uint *)(param_1 + lVar15)),*(undefined4 *)(param_1 + auVar34._4_4_)
                       ,0x10);
    auVar69 = insertps(ZEXT416(*(uint *)(uVar18 + lVar17)),
                       *(undefined4 *)((ulonglong)auVar50._4_4_ + lVar2),0x10);
    auVar73 = insertps(ZEXT416(*(uint *)(uVar11 + lVar17)),
                       *(undefined4 *)((ulonglong)auVar32._4_4_ + lVar2),0x10);
    auVar37 = auVar41;
  }
  lVar15 = param_1 + auVar67._8_4_;
  if ((bVar9 & 4) != 0) {
    auVar49 = insertps(auVar49,*(undefined4 *)(param_1 + auVar67._8_4_),0x20);
    auVar68 = insertps(auVar68,*(undefined4 *)((ulonglong)auVar50._8_4_ + lVar15),0x20);
    auVar60 = insertps(auVar60,*(undefined4 *)((ulonglong)auVar32._8_4_ + lVar15),0x20);
  }
  lVar17 = param_1 + auVar34._8_4_;
  auVar37 = blendps(auVar36,auVar37,2);
  auVar36 = auVar37;
  if ((bVar9 & 4) != 0) {
    auVar74 = insertps(auVar74,*(undefined4 *)(param_1 + auVar34._8_4_),0x20);
    auVar69 = insertps(auVar69,*(undefined4 *)((ulonglong)auVar50._8_4_ + lVar17),0x20);
    auVar73 = insertps(auVar73,*(undefined4 *)((ulonglong)auVar32._8_4_ + lVar17),0x20);
    auVar36 = auVar41;
  }
  uVar8 = param_1 + auVar67._12_4_;
  if ((char)bVar9 < '\0') {
    auVar49 = insertps(auVar49,*(undefined4 *)(param_1 + auVar67._12_4_),0x30);
    auVar68 = insertps(auVar68,*(undefined4 *)((ulonglong)auVar50._12_4_ + uVar8),0x30);
  }
  if ((char)bVar9 < '\0') {
    auVar60 = insertps(auVar60,*(undefined4 *)((ulonglong)auVar32._12_4_ + uVar8),0x30);
    auVar36 = blendps(auVar37,auVar36,4);
  }
  else {
    auVar36 = blendps(auVar37,auVar36,4);
  }
  lVar17 = param_1 + auVar34._12_4_;
  auVar67 = auVar36;
  if ((char)bVar9 < '\0') {
    auVar74 = insertps(auVar74,*(undefined4 *)(param_1 + auVar34._12_4_),0x30);
    auVar69 = insertps(auVar69,*(undefined4 *)((ulonglong)auVar50._12_4_ + lVar17),0x30);
    auVar67 = auVar41;
  }
  if ((char)bVar9 < '\0') {
    auVar73 = insertps(auVar73,*(undefined4 *)((ulonglong)auVar32._12_4_ + lVar17),0x30);
  }
  auVar65 = auVar65 & auVar71;
  auVar72 = ___xmm_0000000c0000000c0000000c0000000c & auVar71;
  auVar32 = insertps(ZEXT416(*(uint *)((ulonglong)auVar72._0_4_ + lVar14)),
                     *(undefined4 *)((ulonglong)auVar72._4_4_ + lVar16),0x10);
  auVar70 = insertps(auVar32,*(undefined4 *)((ulonglong)auVar72._8_4_ + lVar15),0x20);
  bVar5 = *(byte *)(param_3 + auVar65._8_4_);
  bVar6 = *(byte *)(param_5 + auVar65._8_4_);
  auVar51._0_4_ = (uint)*(byte *)(param_3 + auVar65._0_4_) << 2;
  auVar51._4_4_ = (uint)*(byte *)(param_3 + auVar65._4_4_) << 2;
  auVar51._8_4_ = (uint)bVar5 << 2;
  auVar51._12_4_ = (uint)*(byte *)(param_3 + auVar65._12_4_) << 2;
  auVar50 = pmovzxdq(auVar34,auVar51);
  auVar32 = pmovsxdq(auVar65,auVar71);
  auVar46 = blendvps(ZEXT816(0),auVar50,auVar32);
  auVar52._0_8_ = (ulonglong)bVar5 << 2;
  auVar52._8_4_ = auVar51._12_4_;
  auVar52._12_4_ = 0;
  auVar35._4_4_ = auVar71._8_4_;
  auVar35._0_4_ = auVar71._8_4_;
  auVar35._8_4_ = auVar71._12_4_;
  auVar35._12_4_ = auVar71._12_4_;
  auVar50 = blendvps(ZEXT816(0),auVar52,auVar35);
  auVar43._0_4_ = (uint)*(byte *)(param_5 + auVar65._0_4_) << 2;
  auVar43._4_4_ = (uint)*(byte *)(param_5 + auVar65._4_4_) << 2;
  auVar43._8_4_ = (uint)bVar6 << 2;
  auVar43._12_4_ = (uint)*(byte *)(param_5 + auVar65._12_4_) << 2;
  auVar65 = pmovzxdq(auVar52,auVar43);
  auVar37 = blendvps(ZEXT816(0),auVar65,auVar32);
  auVar71 = insertps(auVar70,*(undefined4 *)((ulonglong)auVar72._12_4_ + uVar8),0x30);
  auVar32 = insertps(ZEXT416(*(uint *)(param_4 + auVar46._0_8_)),
                     *(undefined4 *)(param_4 + auVar46._8_8_),0x10);
  auVar32 = insertps(auVar32,*(undefined4 *)(param_4 + auVar50._0_8_),0x20);
  auVar32 = insertps(auVar32,*(undefined4 *)(param_4 + auVar50._8_8_),0x30);
  auVar44._0_8_ = (ulonglong)bVar6 << 2;
  auVar44._8_4_ = auVar43._12_4_;
  auVar44._12_4_ = 0;
  auVar65 = blendvps(ZEXT816(0),auVar44,auVar35);
  auVar50 = insertps(ZEXT416(*(uint *)(param_6 + auVar37._0_8_)),
                     *(undefined4 *)(param_6 + auVar37._8_8_),0x10);
  auVar50 = insertps(auVar50,*(undefined4 *)(param_6 + auVar65._0_8_),0x20);
  auVar50 = insertps(auVar50,*(undefined4 *)(param_6 + auVar65._8_8_),0x30);
  auVar36 = blendps(auVar36,auVar67,8);
  local_128 = auVar49._0_4_;
  fStack_124 = auVar49._4_4_;
  fStack_120 = auVar49._8_4_;
  fStack_11c = auVar49._12_4_;
  auVar66._0_4_ = auVar74._0_4_ - local_128;
  auVar66._4_4_ = auVar74._4_4_ - fStack_124;
  auVar66._8_4_ = auVar74._8_4_ - fStack_120;
  auVar66._12_4_ = auVar74._12_4_ - fStack_11c;
  local_118 = auVar68._0_4_;
  fStack_114 = auVar68._4_4_;
  fStack_110 = auVar68._8_4_;
  fStack_10c = auVar68._12_4_;
  auVar61._0_4_ = auVar69._0_4_ - local_118;
  auVar61._4_4_ = auVar69._4_4_ - fStack_114;
  auVar61._8_4_ = auVar69._8_4_ - fStack_110;
  auVar61._12_4_ = auVar69._12_4_ - fStack_10c;
  local_108 = auVar60._0_4_;
  fStack_104 = auVar60._4_4_;
  fStack_100 = auVar60._8_4_;
  fStack_fc = auVar60._12_4_;
  auVar55._0_4_ = auVar73._0_4_ - local_108;
  auVar55._4_4_ = auVar73._4_4_ - fStack_104;
  auVar55._8_4_ = auVar73._8_4_ - fStack_100;
  auVar55._12_4_ = auVar73._12_4_ - fStack_fc;
  auVar30._0_4_ =
       auVar55._0_4_ * auVar55._0_4_ + auVar61._0_4_ * auVar61._0_4_ + auVar66._0_4_ * auVar66._0_4_
  ;
  auVar30._4_4_ =
       auVar55._4_4_ * auVar55._4_4_ + auVar61._4_4_ * auVar61._4_4_ + auVar66._4_4_ * auVar66._4_4_
  ;
  auVar30._8_4_ =
       auVar55._8_4_ * auVar55._8_4_ + auVar61._8_4_ * auVar61._8_4_ + auVar66._8_4_ * auVar66._8_4_
  ;
  auVar30._12_4_ =
       auVar55._12_4_ * auVar55._12_4_ +
       auVar61._12_4_ * auVar61._12_4_ + auVar66._12_4_ * auVar66._12_4_;
  auVar49 = sqrtps(auVar65,auVar30);
  uVar22 = -(uint)(auVar49._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
  uVar20 = -(uint)(auVar49._4_4_ < _UNK_1506895e4);
  uVar23 = -(uint)(auVar49._8_4_ < _UNK_1506895e8);
  uVar25 = -(uint)(auVar49._12_4_ < _UNK_1506895ec);
  auVar31._4_4_ = uVar20;
  auVar31._0_4_ = uVar22;
  auVar31._8_4_ = uVar23;
  auVar31._12_4_ = uVar25;
  auVar67 = divps(auVar66,auVar49);
  auVar65 = divps(auVar61,auVar49);
  auVar67 = blendvps(auVar67,___xmm_3f8000003f8000003f8000003f800000,auVar31);
  fVar59 = auVar49._0_4_ - auVar50._0_4_ * auVar36._0_4_;
  fVar62 = auVar49._4_4_ - auVar50._4_4_ * auVar36._4_4_;
  fVar63 = auVar49._8_4_ - auVar50._8_4_ * auVar36._8_4_;
  fVar64 = auVar49._12_4_ - auVar50._12_4_ * auVar36._12_4_;
  fVar54 = auVar32._0_4_ * fVar59;
  fVar56 = auVar32._4_4_ * fVar62;
  fVar57 = auVar32._8_4_ * fVar63;
  fVar58 = auVar32._12_4_ * fVar64;
  uVar12 = -(uint)(fVar59 < 0.0);
  uVar21 = -(uint)(fVar62 < 0.0);
  uVar24 = -(uint)(fVar63 < 0.0);
  uVar26 = -(uint)(fVar64 < 0.0);
  auVar38._0_4_ = (float)(~uVar12 & (uint)(auVar67._0_4_ * fVar54)) + local_128;
  auVar38._4_4_ = (float)(~uVar21 & (uint)(auVar67._4_4_ * fVar56)) + fStack_124;
  auVar38._8_4_ = (float)(~uVar24 & (uint)(auVar67._8_4_ * fVar57)) + fStack_120;
  auVar38._12_4_ = (float)(~uVar26 & (uint)(auVar67._12_4_ * fVar58)) + fStack_11c;
  if ((bVar9 & 1) != 0) {
    *(float *)(param_1 + auVar39._0_4_) = auVar38._0_4_;
  }
  if ((bVar9 & 2) != 0) {
    uVar8 = extractps(auVar38,1);
    *(undefined8 *)(param_1 + auVar39._4_4_) = uVar8;
  }
  if ((bVar9 & 4) != 0) {
    uVar8 = extractps(auVar38,2);
    *(undefined8 *)(param_1 + auVar39._8_4_) = uVar8;
  }
  uVar7 = ~uVar26 & (uint)((float)(~uVar25 & auVar65._12_4_) * fVar58);
  uVar4 = ~uVar24 & (uint)((float)(~uVar23 & auVar65._8_4_) * fVar57);
  uVar3 = ~uVar21 & (uint)((float)(~uVar20 & auVar65._4_4_) * fVar56);
  uVar40 = ~uVar12 & (uint)((float)(~uVar22 & auVar65._0_4_) * fVar54);
  if ((char)bVar9 < '\0') {
    uVar8 = extractps(auVar38,3);
    *(undefined8 *)(param_1 + auVar39._12_4_) = uVar8;
    auVar49 = divps(auVar55,auVar49);
    auVar53._0_4_ = local_118 + (float)uVar40;
    auVar53._4_4_ = fStack_114 + (float)uVar3;
    auVar53._8_4_ = fStack_110 + (float)uVar4;
    auVar53._12_4_ = fStack_10c + (float)uVar7;
  }
  else {
    auVar49 = divps(auVar55,auVar49);
    auVar53._0_4_ = local_118 + (float)uVar40;
    auVar53._4_4_ = fStack_114 + (float)uVar3;
    auVar53._8_4_ = fStack_110 + (float)uVar4;
    auVar53._12_4_ = fStack_10c + (float)uVar7;
  }
  if ((bVar9 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar39._0_4_) = auVar53._0_4_;
  }
  if ((bVar9 & 2) != 0) {
    uVar8 = extractps(auVar53,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar39._4_4_) = uVar8;
  }
  if ((bVar9 & 4) != 0) {
    uVar8 = extractps(auVar53,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar39._8_4_) = uVar8;
  }
  uVar7 = ~uVar26 & (uint)((float)(~uVar25 & auVar49._12_4_) * fVar58);
  uVar4 = ~uVar24 & (uint)((float)(~uVar23 & auVar49._8_4_) * fVar57);
  uVar3 = ~uVar21 & (uint)((float)(~uVar20 & auVar49._4_4_) * fVar56);
  uVar40 = ~uVar12 & (uint)((float)(~uVar22 & auVar49._0_4_) * fVar54);
  if ((char)bVar9 < '\0') {
    uVar8 = extractps(auVar53,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar39._12_4_) = uVar8;
    auVar47._0_4_ = local_108 + (float)uVar40;
    auVar47._4_4_ = fStack_104 + (float)uVar3;
    auVar47._8_4_ = fStack_100 + (float)uVar4;
    auVar47._12_4_ = fStack_fc + (float)uVar7;
  }
  else {
    auVar47._0_4_ = local_108 + (float)uVar40;
    auVar47._4_4_ = fStack_104 + (float)uVar3;
    auVar47._8_4_ = fStack_100 + (float)uVar4;
    auVar47._12_4_ = fStack_fc + (float)uVar7;
  }
  if ((bVar9 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar39._0_4_) = auVar47._0_4_;
  }
  if ((bVar9 & 2) != 0) {
    uVar8 = extractps(auVar47,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar39._4_4_) = uVar8;
  }
  if ((bVar9 & 4) != 0) {
    uVar8 = extractps(auVar47,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar39._8_4_) = uVar8;
  }
  if ((char)bVar9 < '\0') {
    uVar8 = extractps(auVar47,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar39._12_4_) = uVar8;
  }
  if ((bVar9 & 1) != 0) {
    *(int *)(param_1 + 0xc + (longlong)auVar39._0_4_) = auVar71._0_4_;
  }
  if ((bVar9 & 2) != 0) {
    uVar8 = extractps(auVar71,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar39._4_4_) = uVar8;
  }
  if ((bVar9 & 4) != 0) {
    uVar8 = extractps(auVar71,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar39._8_4_) = uVar8;
  }
  if ((char)bVar9 < '\0') {
    uVar8 = extractps(auVar71,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar39._12_4_) = uVar8;
  }
  return;
}

// ApplyLongRangeConstraints_sse4 @ 1402fb870

/* WARNING: Removing unreachable block (ram,0x0001402fc52c) */
/* WARNING: Removing unreachable block (ram,0x0001402fc253) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLongRangeConstraints_sse4
               (longlong param_1,longlong param_2,float param_3,float param_4,uint param_5,
               int param_6)

{
  undefined1 (*pauVar1) [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  float *pfVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  bool bVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined4 uVar38;
  float fVar39;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar51;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar60;
  float fVar63;
  float fVar64;
  undefined1 unaff_XMM12 [16];
  float fVar65;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar66;
  float fVar70;
  float fVar71;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  
  uVar23 = param_5 + 3;
  if (-1 < (int)param_5) {
    uVar23 = param_5;
  }
  if ((int)(uVar23 & 0xfffffffc) < 1) {
    uVar13 = 0;
    if ((int)param_5 < 1) {
      return;
    }
  }
  else {
    pfVar15 = (float *)(param_2 + 0x20);
    uVar13 = 0;
    do {
      auVar35 = *(undefined1 (*) [16])(pfVar15 + -8);
      auVar69 = *(undefined1 (*) [16])(pfVar15 + -4);
      uVar38 = auVar69._0_4_;
      auVar32._4_4_ = uVar38;
      auVar32._0_4_ = uVar38;
      auVar32._8_4_ = uVar38;
      auVar32._12_4_ = uVar38;
      iVar14 = auVar35._12_4_;
      auVar74._0_8_ = CONCAT44(iVar14,auVar35._0_4_);
      auVar74._8_4_ = auVar35._4_4_;
      auVar74._12_4_ = iVar14;
      auVar32 = pblendw(auVar32,auVar74,0x3f);
      auVar72._0_8_ = CONCAT44(pfVar15[1],auVar69._8_4_);
      auVar72._8_4_ = auVar69._12_4_;
      auVar72._12_4_ = pfVar15[2];
      in_XMM5._8_8_ = auVar72._0_8_;
      in_XMM5._0_8_ = auVar74._0_8_;
      auVar45._0_8_ = auVar35._8_8_;
      auVar45._8_4_ = auVar35._8_4_;
      auVar45._12_4_ = iVar14;
      in_XMM1._8_8_ = auVar72._8_8_;
      in_XMM1._0_8_ = auVar32._8_8_;
      lVar9 = (longlong)((auVar35._0_4_ + param_6) * 0x10);
      lVar8 = (longlong)((iVar14 + param_6) * 0x10);
      lVar19 = (longlong)((auVar69._8_4_ + param_6) * 0x10);
      lVar18 = (longlong)(((int)pfVar15[1] + param_6) * 0x10);
      lVar17 = (longlong)((auVar32._8_4_ + param_6) * 0x10);
      auVar67 = insertps(ZEXT416(*(uint *)(param_1 + lVar9)),*(undefined4 *)(param_1 + lVar8),0x10);
      lVar10 = (longlong)((auVar32._12_4_ + param_6) * 0x10);
      lVar12 = (longlong)((auVar69._12_4_ + param_6) * 0x10);
      auVar32 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar9)),
                         *(undefined4 *)(param_1 + 4 + lVar8),0x10);
      auVar35 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar9)),
                         *(undefined4 *)(param_1 + 8 + lVar8),0x10);
      lVar8 = (longlong)(((int)pfVar15[2] + param_6) * 0x10);
      auVar68 = insertps(auVar67,*(undefined4 *)(param_1 + lVar19),0x20);
      auVar32 = insertps(auVar32,*(undefined4 *)(param_1 + 4 + lVar19),0x20);
      auVar67 = insertps(ZEXT416(*(uint *)(param_1 + lVar17)),*(undefined4 *)(param_1 + lVar10),0x10
                        );
      auVar35 = insertps(auVar35,*(undefined4 *)(param_1 + 8 + lVar19),0x20);
      auVar67 = insertps(auVar67,*(undefined4 *)(param_1 + lVar12),0x20);
      auVar68 = insertps(auVar68,*(undefined4 *)(param_1 + lVar18),0x30);
      auVar74 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar17)),
                         *(undefined4 *)(param_1 + 4 + lVar10),0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)(param_1 + 4 + lVar18),0x30);
      auVar75 = insertps(auVar74,*(undefined4 *)(param_1 + 4 + lVar12),0x20);
      auVar35 = insertps(auVar35,*(undefined4 *)(param_1 + 8 + lVar18),0x30);
      auVar72 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar17)),
                         *(undefined4 *)(param_1 + 8 + lVar10),0x10);
      auVar74 = insertps(auVar67,*(undefined4 *)(param_1 + lVar8),0x30);
      auVar67 = insertps(auVar72,*(undefined4 *)(param_1 + 8 + lVar12),0x20);
      auVar76 = insertps(auVar75,*(undefined4 *)(param_1 + 4 + lVar8),0x30);
      auVar45 = pblendw(auVar45,auVar69,0xc);
      auVar73 = insertps(auVar67,*(undefined4 *)(param_1 + 8 + lVar8),0x30);
      in_XMM4._0_8_ = auVar45._0_8_;
      in_XMM4._8_4_ = *pfVar15;
      in_XMM4._12_4_ = pfVar15[3];
      auVar46._0_4_ = auVar68._0_4_ - auVar74._0_4_;
      auVar46._4_4_ = auVar68._4_4_ - auVar74._4_4_;
      auVar46._8_4_ = auVar68._8_4_ - auVar74._8_4_;
      auVar46._12_4_ = auVar68._12_4_ - auVar74._12_4_;
      auVar68._0_4_ = auVar32._0_4_ - auVar76._0_4_;
      auVar68._4_4_ = auVar32._4_4_ - auVar76._4_4_;
      auVar68._8_4_ = auVar32._8_4_ - auVar76._8_4_;
      auVar68._12_4_ = auVar32._12_4_ - auVar76._12_4_;
      auVar67._0_4_ = auVar35._0_4_ - auVar73._0_4_;
      auVar67._4_4_ = auVar35._4_4_ - auVar73._4_4_;
      auVar67._8_4_ = auVar35._8_4_ - auVar73._8_4_;
      auVar67._12_4_ = auVar35._12_4_ - auVar73._12_4_;
      uVar38 = *(undefined4 *)(param_1 + 0xc + lVar17);
      uVar2 = *(undefined4 *)(param_1 + 0xc + lVar10);
      auVar35._0_4_ =
           auVar67._0_4_ * auVar67._0_4_ +
           auVar68._0_4_ * auVar68._0_4_ + auVar46._0_4_ * auVar46._0_4_;
      auVar35._4_4_ =
           auVar67._4_4_ * auVar67._4_4_ +
           auVar68._4_4_ * auVar68._4_4_ + auVar46._4_4_ * auVar46._4_4_;
      auVar35._8_4_ =
           auVar67._8_4_ * auVar67._8_4_ +
           auVar68._8_4_ * auVar68._8_4_ + auVar46._8_4_ * auVar46._8_4_;
      auVar35._12_4_ =
           auVar67._12_4_ * auVar67._12_4_ +
           auVar68._12_4_ * auVar68._12_4_ + auVar46._12_4_ * auVar46._12_4_;
      auVar72 = sqrtps(unaff_XMM12,auVar35);
      uVar21 = -(uint)(auVar72._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
      uVar24 = -(uint)(auVar72._4_4_ < _UNK_1506895e4);
      uVar26 = -(uint)(auVar72._8_4_ < _UNK_1506895e8);
      uVar28 = -(uint)(auVar72._12_4_ < _UNK_1506895ec);
      auVar69._4_4_ = uVar24;
      auVar69._0_4_ = uVar21;
      auVar69._8_4_ = uVar26;
      auVar69._12_4_ = uVar28;
      auVar75 = divps(auVar46,auVar72);
      auVar32 = divps(auVar68,auVar72);
      auVar35 = divps(auVar67,auVar72);
      auVar69 = blendvps(auVar75,___xmm_3f8000003f8000003f8000003f800000,auVar69);
      uVar3 = *(undefined4 *)(param_1 + 0xc + lVar12);
      fVar60 = auVar72._0_4_ - param_4 * auVar45._0_4_;
      fVar63 = auVar72._4_4_ - param_4 * auVar45._4_4_;
      fVar64 = auVar72._8_4_ - param_4 * *pfVar15;
      fVar65 = auVar72._12_4_ - param_4 * pfVar15[3];
      fVar39 = param_3 * fVar60;
      fVar42 = param_3 * fVar63;
      fVar43 = param_3 * fVar64;
      fVar44 = param_3 * fVar65;
      uVar22 = -(uint)(fVar60 < __xmm_00000000000000000000000000000000);
      uVar25 = -(uint)(fVar63 < _UNK_150aa8f64);
      uVar27 = -(uint)(fVar64 < (float)DAT_150aa8f68);
      uVar29 = -(uint)(fVar65 < DAT_150aa8f68._4_4_);
      uVar4 = *(undefined4 *)(param_1 + 0xc + lVar8);
      auVar75._0_4_ = (float)(~uVar22 & (uint)(auVar69._0_4_ * fVar39)) + auVar74._0_4_;
      auVar75._4_4_ = (float)(~uVar25 & (uint)(auVar69._4_4_ * fVar42)) + auVar74._4_4_;
      auVar75._8_4_ = (float)(~uVar27 & (uint)(auVar69._8_4_ * fVar43)) + auVar74._8_4_;
      auVar75._12_4_ = (float)(~uVar29 & (uint)(auVar69._12_4_ * fVar44)) + auVar74._12_4_;
      *(float *)(param_1 + lVar17) = auVar75._0_4_;
      uVar5 = extractps(auVar75,1);
      *(undefined8 *)(param_1 + lVar10) = uVar5;
      uVar5 = extractps(auVar75,2);
      *(undefined8 *)(param_1 + lVar12) = uVar5;
      auVar62._0_4_ =
           (float)(~uVar22 & (uint)((float)(~uVar21 & auVar32._0_4_) * fVar39)) + auVar76._0_4_;
      auVar62._4_4_ =
           (float)(~uVar25 & (uint)((float)(~uVar24 & auVar32._4_4_) * fVar42)) + auVar76._4_4_;
      auVar62._8_4_ =
           (float)(~uVar27 & (uint)((float)(~uVar26 & auVar32._8_4_) * fVar43)) + auVar76._8_4_;
      auVar62._12_4_ =
           (float)(~uVar29 & (uint)((float)(~uVar28 & auVar32._12_4_) * fVar44)) + auVar76._12_4_;
      uVar5 = extractps(auVar75,3);
      *(undefined8 *)(param_1 + lVar8) = uVar5;
      *(float *)(param_1 + 4 + lVar17) = auVar62._0_4_;
      uVar5 = extractps(auVar62,1);
      *(undefined8 *)(param_1 + 4 + lVar10) = uVar5;
      uVar5 = extractps(auVar62,2);
      *(undefined8 *)(param_1 + 4 + lVar12) = uVar5;
      unaff_XMM12._0_4_ =
           (float)(~uVar22 & (uint)(fVar39 * (float)(~uVar21 & auVar35._0_4_))) + auVar73._0_4_;
      unaff_XMM12._4_4_ =
           (float)(~uVar25 & (uint)(fVar42 * (float)(~uVar24 & auVar35._4_4_))) + auVar73._4_4_;
      unaff_XMM12._8_4_ =
           (float)(~uVar27 & (uint)(fVar43 * (float)(~uVar26 & auVar35._8_4_))) + auVar73._8_4_;
      unaff_XMM12._12_4_ =
           (float)(~uVar29 & (uint)(fVar44 * (float)(~uVar28 & auVar35._12_4_))) + auVar73._12_4_;
      uVar5 = extractps(auVar62,3);
      *(undefined8 *)(param_1 + 4 + lVar8) = uVar5;
      *(float *)(param_1 + 8 + lVar17) = unaff_XMM12._0_4_;
      uVar5 = extractps(unaff_XMM12,1);
      *(undefined8 *)(param_1 + 8 + lVar10) = uVar5;
      uVar5 = extractps(unaff_XMM12,2);
      *(undefined8 *)(param_1 + 8 + lVar12) = uVar5;
      uVar5 = extractps(unaff_XMM12,3);
      *(undefined8 *)(param_1 + 8 + lVar8) = uVar5;
      *(undefined4 *)(param_1 + 0xc + lVar17) = uVar38;
      *(undefined4 *)(param_1 + 0xc + lVar10) = uVar2;
      *(undefined4 *)(param_1 + 0xc + lVar12) = uVar3;
      *(undefined4 *)(param_1 + 0xc + lVar8) = uVar4;
      pfVar15 = pfVar15 + 0xc;
      uVar13 = uVar13 + 4;
    } while ((int)uVar13 < (int)(uVar23 & 0xfffffffc));
    if ((int)param_5 <= (int)uVar13) {
      return;
    }
  }
  auVar73._0_4_ =
       -(uint)((int)(uVar13 | (uint)__xmm_00000003000000020000000100000000) < (int)param_5);
  auVar73._4_4_ =
       -(uint)((int)(uVar13 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_5);
  auVar73._8_4_ = -(uint)((int)(uVar13 | _UNK_150631e08) < (int)param_5);
  auVar73._12_4_ = -(uint)((int)(uVar13 | _UNK_150631e0c) < (int)param_5);
  pauVar1 = (undefined1 (*) [16])(param_2 + (ulonglong)uVar13 * 0xc);
  iVar14 = movmskps(uVar13,auVar73);
  bVar7 = (char)((char)iVar14 << 4) >> 4;
  if (iVar14 == 0xf) {
    auVar35 = *pauVar1;
    auVar69 = pauVar1[1];
    uVar38 = auVar69._0_4_;
    auVar57._4_4_ = uVar38;
    auVar57._0_4_ = uVar38;
    auVar57._8_4_ = uVar38;
    auVar57._12_4_ = uVar38;
    uVar38 = auVar35._12_4_;
    auVar53._0_8_ = CONCAT44(uVar38,auVar35._0_4_);
    auVar53._8_4_ = auVar35._4_4_;
    auVar53._12_4_ = uVar38;
    auVar32 = pblendw(auVar57,auVar53,0x3f);
    auVar49._0_8_ = auVar35._8_8_;
    auVar49._8_4_ = auVar35._8_4_;
    auVar49._12_4_ = uVar38;
    auVar35 = pblendw(auVar49,auVar69,0xc);
    auVar41._0_8_ = CONCAT44(*(undefined4 *)(pauVar1[2] + 4),auVar69._8_4_);
    auVar41._8_4_ = auVar69._12_4_;
    auVar41._12_4_ = *(undefined4 *)(pauVar1[2] + 8);
    auVar76._8_8_ = auVar41._0_8_;
    auVar76._0_8_ = auVar53._0_8_;
    auVar34._8_8_ = auVar41._8_8_;
    auVar34._0_8_ = auVar32._8_8_;
    auVar48._0_8_ = auVar35._0_8_;
    auVar48._8_4_ = *(undefined4 *)pauVar1[2];
    auVar48._12_4_ = *(undefined4 *)(pauVar1[2] + 0xc);
    bVar20 = false;
  }
  else {
    auVar36._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar73._0_4_;
    auVar36._4_4_ = _UNK_150b50da4 & auVar73._4_4_;
    auVar36._8_4_ = _UNK_150b50da8 & auVar73._8_4_;
    auVar36._12_4_ = _UNK_150b50dac & auVar73._12_4_;
    lVar8 = extractps(auVar36,1);
    lVar9 = extractps(auVar36,2);
    lVar10 = extractps(auVar36,3);
    auVar76._4_4_ = *(undefined4 *)(*pauVar1 + lVar8);
    auVar76._0_4_ = *(undefined4 *)*pauVar1;
    auVar76._12_4_ = *(undefined4 *)(*pauVar1 + lVar10);
    auVar76._8_4_ = *(undefined4 *)(*pauVar1 + lVar9);
    auVar35 = ___xmm_000000280000001c0000001000000004 & auVar73;
    auVar34._4_4_ = *(undefined4 *)(*pauVar1 + auVar35._4_4_);
    auVar34._0_4_ = *(undefined4 *)(*pauVar1 + auVar35._0_4_);
    auVar34._12_4_ = *(undefined4 *)(*pauVar1 + auVar35._12_4_);
    auVar34._8_4_ = *(undefined4 *)(*pauVar1 + auVar35._8_4_);
    auVar35 = ___xmm_0000002c000000200000001400000008 & auVar73;
    auVar48._4_4_ = *(undefined4 *)(*pauVar1 + auVar35._4_4_);
    auVar48._0_4_ = *(undefined4 *)(*pauVar1 + auVar35._0_4_);
    auVar48._12_4_ = *(undefined4 *)(*pauVar1 + auVar35._12_4_);
    auVar48._8_4_ = *(undefined4 *)(*pauVar1 + auVar35._8_4_);
    bVar20 = (bVar7 & 1) == 0;
    auVar35 = in_XMM5;
    if (bVar20) goto LAB_1402fbd18;
  }
  auVar35 = auVar76;
  auVar76 = auVar35;
LAB_1402fbd18:
  if (bVar20) {
    auVar35 = pblendw(in_XMM5,auVar35,3);
    auVar69 = in_XMM4;
    auVar32 = in_XMM1;
  }
  else {
    auVar35 = pblendw(in_XMM5,auVar35,3);
    auVar69 = auVar48;
    auVar32 = auVar34;
  }
  if ((bVar7 & 2) == 0) {
    auVar32 = pblendw(in_XMM1,auVar32,3);
    auVar67 = pblendw(auVar35,auVar35,0xc);
    auVar35 = auVar32;
  }
  else {
    auVar32 = pblendw(in_XMM1,auVar32,3);
    auVar67 = pblendw(auVar35,auVar76,0xc);
    auVar35 = auVar34;
  }
  if ((bVar7 & 4) == 0) {
    auVar32 = pblendw(auVar32,auVar35,0xc);
    auVar35 = pblendw(auVar67,auVar67,0x30);
    auVar67 = auVar32;
  }
  else {
    auVar32 = pblendw(auVar32,auVar35,0xc);
    auVar35 = pblendw(auVar67,auVar76,0x30);
    auVar67 = auVar34;
  }
  if ((char)bVar7 < '\0') {
    auVar32 = pblendw(auVar32,auVar67,0x30);
  }
  else {
    auVar34 = pblendw(auVar32,auVar67,0x30);
    auVar76 = auVar35;
    auVar32 = auVar34;
  }
  auVar32 = pblendw(auVar32,auVar34,0xc0);
  auVar33._0_4_ = (auVar32._0_4_ + param_6) * 0x10;
  auVar33._4_4_ = (auVar32._4_4_ + param_6) * 0x10;
  auVar33._8_4_ = (auVar32._8_4_ + param_6) * 0x10;
  auVar33._12_4_ = (auVar32._12_4_ + param_6) * 0x10;
  auVar68 = auVar73 & auVar33;
  lVar8 = param_1 + auVar68._0_4_;
  lVar9 = param_1 + auVar68._4_4_;
  bVar20 = (bVar7 & 2) != 0;
  auVar35 = pblendw(auVar35,auVar76,0xc0);
  auVar47._0_4_ = (auVar35._0_4_ + param_6) * 0x10;
  auVar47._4_4_ = (auVar35._4_4_ + param_6) * 0x10;
  auVar47._8_4_ = (auVar35._8_4_ + param_6) * 0x10;
  auVar47._12_4_ = (auVar35._12_4_ + param_6) * 0x10;
  auVar47 = auVar47 & auVar73;
  auVar67 = ___xmm_00000004000000040000000400000004 & auVar73;
  uVar11 = (ulonglong)auVar67._0_4_;
  auVar32 = ___xmm_00000008000000080000000800000008 & auVar73;
  uVar16 = (ulonglong)auVar32._0_4_;
  auVar35 = ZEXT416(*(uint *)(param_1 + auVar68._0_4_));
  if (bVar20) {
    auVar35 = insertps(auVar35,*(undefined4 *)(param_1 + auVar68._4_4_),0x10);
  }
  auVar45 = ZEXT416(*(uint *)(uVar11 + lVar8));
  if (bVar20) {
    auVar45 = insertps(auVar45,*(undefined4 *)((ulonglong)auVar67._4_4_ + lVar9),0x10);
  }
  lVar10 = (longlong)auVar47._0_4_;
  auVar74 = ZEXT416(*(uint *)(uVar16 + lVar8));
  if (bVar20) {
    auVar74 = insertps(auVar74,*(undefined4 *)((ulonglong)auVar32._4_4_ + lVar9),0x10);
  }
  lVar12 = param_1 + lVar10;
  lVar17 = param_1 + auVar47._4_4_;
  auVar69 = blendps(in_XMM4,auVar69,1);
  if ((bVar7 & 2) == 0) {
    auVar62 = ZEXT416(*(uint *)(param_1 + lVar10));
    auVar75 = ZEXT416(*(uint *)(uVar11 + lVar12));
    auVar72 = ZEXT416(*(uint *)(uVar16 + lVar12));
    auVar46 = auVar69;
  }
  else {
    auVar62 = insertps(ZEXT416(*(uint *)(param_1 + lVar10)),*(undefined4 *)(param_1 + auVar47._4_4_)
                       ,0x10);
    auVar75 = insertps(ZEXT416(*(uint *)(uVar11 + lVar12)),
                       *(undefined4 *)((ulonglong)auVar67._4_4_ + lVar17),0x10);
    auVar72 = insertps(ZEXT416(*(uint *)(uVar16 + lVar12)),
                       *(undefined4 *)((ulonglong)auVar32._4_4_ + lVar17),0x10);
    auVar46 = auVar48;
  }
  lVar10 = param_1 + auVar68._8_4_;
  if ((bVar7 & 4) != 0) {
    auVar35 = insertps(auVar35,*(undefined4 *)(param_1 + auVar68._8_4_),0x20);
    auVar45 = insertps(auVar45,*(undefined4 *)((ulonglong)auVar67._8_4_ + lVar10),0x20);
    auVar74 = insertps(auVar74,*(undefined4 *)((ulonglong)auVar32._8_4_ + lVar10),0x20);
  }
  lVar12 = param_1 + auVar47._8_4_;
  auVar46 = blendps(auVar69,auVar46,2);
  auVar69 = auVar46;
  if ((bVar7 & 4) != 0) {
    auVar62 = insertps(auVar62,*(undefined4 *)(param_1 + auVar47._8_4_),0x20);
    auVar75 = insertps(auVar75,*(undefined4 *)((ulonglong)auVar67._8_4_ + lVar12),0x20);
    auVar72 = insertps(auVar72,*(undefined4 *)((ulonglong)auVar32._8_4_ + lVar12),0x20);
    auVar69 = auVar48;
  }
  uVar5 = param_1 + auVar68._12_4_;
  if ((char)bVar7 < '\0') {
    auVar35 = insertps(auVar35,*(undefined4 *)(param_1 + auVar68._12_4_),0x30);
    auVar45 = insertps(auVar45,*(undefined4 *)((ulonglong)auVar67._12_4_ + uVar5),0x30);
    auVar74 = insertps(auVar74,*(undefined4 *)((ulonglong)auVar32._12_4_ + uVar5),0x30);
    auVar69 = blendps(auVar46,auVar69,4);
  }
  else {
    auVar69 = blendps(auVar46,auVar69,4);
  }
  uVar6 = param_1 + auVar47._12_4_;
  auVar68 = auVar69;
  if ((char)bVar7 < '\0') {
    auVar62 = insertps(auVar62,*(undefined4 *)(param_1 + auVar47._12_4_),0x30);
    auVar75 = insertps(auVar75,*(undefined4 *)((ulonglong)auVar67._12_4_ + uVar6),0x30);
    auVar72 = insertps(auVar72,*(undefined4 *)((ulonglong)auVar32._12_4_ + uVar6),0x30);
    auVar68 = auVar48;
  }
  auVar73 = auVar73 & ___xmm_0000000c0000000c0000000c0000000c;
  auVar32 = insertps(ZEXT416(*(uint *)((ulonglong)auVar73._0_4_ + lVar8)),
                     *(undefined4 *)((ulonglong)auVar73._4_4_ + lVar9),0x10);
  auVar32 = insertps(auVar32,*(undefined4 *)((ulonglong)auVar73._8_4_ + lVar10),0x20);
  auVar67 = insertps(auVar32,*(undefined4 *)((ulonglong)auVar73._12_4_ + uVar5),0x30);
  auVar61._0_4_ = auVar62._0_4_ - auVar35._0_4_;
  auVar61._4_4_ = auVar62._4_4_ - auVar35._4_4_;
  auVar61._8_4_ = auVar62._8_4_ - auVar35._8_4_;
  auVar61._12_4_ = auVar62._12_4_ - auVar35._12_4_;
  fVar51 = auVar45._0_4_;
  auVar59._0_4_ = auVar75._0_4_ - fVar51;
  fVar54 = auVar45._4_4_;
  auVar59._4_4_ = auVar75._4_4_ - fVar54;
  fVar55 = auVar45._8_4_;
  auVar59._8_4_ = auVar75._8_4_ - fVar55;
  fVar56 = auVar45._12_4_;
  auVar59._12_4_ = auVar75._12_4_ - fVar56;
  fVar60 = auVar74._0_4_;
  auVar58._0_4_ = auVar72._0_4_ - fVar60;
  fVar63 = auVar74._4_4_;
  auVar58._4_4_ = auVar72._4_4_ - fVar63;
  fVar64 = auVar74._8_4_;
  auVar58._8_4_ = auVar72._8_4_ - fVar64;
  fVar65 = auVar74._12_4_;
  auVar58._12_4_ = auVar72._12_4_ - fVar65;
  auVar37._0_4_ = auVar59._0_4_ * auVar59._0_4_ + auVar61._0_4_ * auVar61._0_4_;
  auVar37._4_4_ = auVar59._4_4_ * auVar59._4_4_ + auVar61._4_4_ * auVar61._4_4_;
  auVar37._8_4_ = auVar59._8_4_ * auVar59._8_4_ + auVar61._8_4_ * auVar61._8_4_;
  auVar37._12_4_ = auVar59._12_4_ * auVar59._12_4_ + auVar61._12_4_ * auVar61._12_4_;
  auVar30._0_4_ = auVar58._0_4_ * auVar58._0_4_ + auVar37._0_4_;
  auVar30._4_4_ = auVar58._4_4_ * auVar58._4_4_ + auVar37._4_4_;
  auVar30._8_4_ = auVar58._8_4_ * auVar58._8_4_ + auVar37._8_4_;
  auVar30._12_4_ = auVar58._12_4_ * auVar58._12_4_ + auVar37._12_4_;
  auVar32 = sqrtps(auVar37,auVar30);
  uVar23 = -(uint)(auVar32._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
  uVar21 = -(uint)(auVar32._4_4_ < _UNK_1506895e4);
  uVar24 = -(uint)(auVar32._8_4_ < _UNK_1506895e8);
  uVar26 = -(uint)(auVar32._12_4_ < _UNK_1506895ec);
  auVar31._4_4_ = uVar21;
  auVar31._0_4_ = uVar23;
  auVar31._8_4_ = uVar24;
  auVar31._12_4_ = uVar26;
  auVar69 = blendps(auVar69,auVar68,8);
  auVar45 = divps(auVar61,auVar32);
  auVar68 = divps(auVar59,auVar32);
  auVar45 = blendvps(auVar45,___xmm_3f8000003f8000003f8000003f800000,auVar31);
  fVar39 = auVar32._0_4_ - param_4 * auVar69._0_4_;
  fVar42 = auVar32._4_4_ - param_4 * auVar69._4_4_;
  fVar43 = auVar32._8_4_ - param_4 * auVar69._8_4_;
  fVar44 = auVar32._12_4_ - param_4 * auVar69._12_4_;
  fVar66 = param_3 * fVar39;
  fVar70 = param_3 * fVar42;
  fVar71 = param_3 * fVar43;
  param_3 = param_3 * fVar44;
  uVar13 = -(uint)(fVar39 < 0.0);
  uVar22 = -(uint)(fVar42 < 0.0);
  uVar25 = -(uint)(fVar43 < 0.0);
  uVar27 = -(uint)(fVar44 < 0.0);
  auVar40._0_4_ = (float)(~uVar13 & (uint)(auVar45._0_4_ * fVar66)) + auVar35._0_4_;
  auVar40._4_4_ = (float)(~uVar22 & (uint)(auVar45._4_4_ * fVar70)) + auVar35._4_4_;
  auVar40._8_4_ = (float)(~uVar25 & (uint)(auVar45._8_4_ * fVar71)) + auVar35._8_4_;
  auVar40._12_4_ = (float)(~uVar27 & (uint)(auVar45._12_4_ * param_3)) + auVar35._12_4_;
  if ((bVar7 & 1) != 0) {
    *(float *)(param_1 + auVar33._0_4_) = auVar40._0_4_;
  }
  if ((bVar7 & 2) != 0) {
    uVar5 = extractps(auVar40,1);
    *(undefined8 *)(param_1 + auVar33._4_4_) = uVar5;
  }
  if ((bVar7 & 4) != 0) {
    uVar5 = extractps(auVar40,2);
    *(undefined8 *)(param_1 + auVar33._8_4_) = uVar5;
  }
  uVar4 = ~uVar27 & (uint)((float)(~uVar26 & auVar68._12_4_) * param_3);
  uVar3 = ~uVar25 & (uint)((float)(~uVar24 & auVar68._8_4_) * fVar71);
  uVar2 = ~uVar22 & (uint)((float)(~uVar21 & auVar68._4_4_) * fVar70);
  uVar38 = ~uVar13 & (uint)((float)(~uVar23 & auVar68._0_4_) * fVar66);
  if ((char)bVar7 < '\0') {
    uVar5 = extractps(auVar40,3);
    *(undefined8 *)(param_1 + auVar33._12_4_) = uVar5;
    auVar35 = divps(auVar58,auVar32);
    auVar52._0_4_ = fVar51 + (float)uVar38;
    auVar52._4_4_ = fVar54 + (float)uVar2;
    auVar52._8_4_ = fVar55 + (float)uVar3;
    auVar52._12_4_ = fVar56 + (float)uVar4;
  }
  else {
    auVar35 = divps(auVar58,auVar32);
    auVar52._0_4_ = fVar51 + (float)uVar38;
    auVar52._4_4_ = fVar54 + (float)uVar2;
    auVar52._8_4_ = fVar55 + (float)uVar3;
    auVar52._12_4_ = fVar56 + (float)uVar4;
  }
  if ((bVar7 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar33._0_4_) = auVar52._0_4_;
  }
  if ((bVar7 & 2) != 0) {
    uVar5 = extractps(auVar52,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar33._4_4_) = uVar5;
  }
  if ((bVar7 & 4) != 0) {
    uVar5 = extractps(auVar52,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar33._8_4_) = uVar5;
  }
  uVar4 = ~uVar27 & (uint)((float)(~uVar26 & auVar35._12_4_) * param_3);
  uVar3 = ~uVar25 & (uint)((float)(~uVar24 & auVar35._8_4_) * fVar71);
  uVar2 = ~uVar22 & (uint)((float)(~uVar21 & auVar35._4_4_) * fVar70);
  uVar38 = ~uVar13 & (uint)((float)(~uVar23 & auVar35._0_4_) * fVar66);
  if ((char)bVar7 < '\0') {
    uVar5 = extractps(auVar52,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar33._12_4_) = uVar5;
    auVar50._0_4_ = fVar60 + (float)uVar38;
    auVar50._4_4_ = fVar63 + (float)uVar2;
    auVar50._8_4_ = fVar64 + (float)uVar3;
    auVar50._12_4_ = fVar65 + (float)uVar4;
  }
  else {
    auVar50._0_4_ = fVar60 + (float)uVar38;
    auVar50._4_4_ = fVar63 + (float)uVar2;
    auVar50._8_4_ = fVar64 + (float)uVar3;
    auVar50._12_4_ = fVar65 + (float)uVar4;
  }
  if ((bVar7 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar33._0_4_) = auVar50._0_4_;
  }
  if ((bVar7 & 2) != 0) {
    uVar5 = extractps(auVar50,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar33._4_4_) = uVar5;
  }
  if ((bVar7 & 4) != 0) {
    uVar5 = extractps(auVar50,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar33._8_4_) = uVar5;
  }
  if ((char)bVar7 < '\0') {
    uVar5 = extractps(auVar50,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar33._12_4_) = uVar5;
  }
  if ((bVar7 & 1) != 0) {
    *(int *)(param_1 + 0xc + (longlong)auVar33._0_4_) = auVar67._0_4_;
  }
  if ((bVar7 & 2) != 0) {
    uVar5 = extractps(auVar67,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar33._4_4_) = uVar5;
  }
  if ((bVar7 & 4) != 0) {
    uVar5 = extractps(auVar67,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar33._8_4_) = uVar5;
  }
  if ((char)bVar7 < '\0') {
    uVar5 = extractps(auVar67,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar33._12_4_) = uVar5;
  }
  return;
}

// ApplyLongRangeConstraintsStiffnessWeightmap_sse4 @ 1402fc540

/* WARNING: Removing unreachable block (ram,0x0001402fd354) */
/* WARNING: Removing unreachable block (ram,0x0001402fd08b) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLongRangeConstraintsStiffnessWeightmap_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,float param_5,
               uint param_6,int param_7)

{
  undefined1 (*pauVar1) [16];
  undefined4 uVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte bVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  float *pfVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  bool bVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined4 uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar41 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar49;
  float fVar53;
  float fVar54;
  undefined1 auVar50 [16];
  float fVar55;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar56;
  float fVar57;
  float fVar62;
  float fVar64;
  undefined1 auVar58 [16];
  float fVar66;
  undefined1 auVar59 [16];
  float fVar63;
  float fVar65;
  float fVar67;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
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
  
  uVar17 = param_6 + 3;
  if (-1 < (int)param_6) {
    uVar17 = param_6;
  }
  uVar17 = uVar17 & 0xfffffffc;
  if ((int)uVar17 < 1) {
    uVar19 = 0;
    if ((int)param_6 < 1) {
      return;
    }
  }
  else {
    pfVar14 = (float *)(param_2 + 0x20);
    uVar19 = 0;
    do {
      auVar58 = *(undefined1 (*) [16])(pfVar14 + -8);
      auVar74 = *(undefined1 (*) [16])(pfVar14 + -4);
      uVar38 = auVar74._0_4_;
      auVar42._4_4_ = uVar38;
      auVar42._0_4_ = uVar38;
      auVar42._8_4_ = uVar38;
      auVar42._12_4_ = uVar38;
      iVar18 = auVar58._12_4_;
      auVar82._0_8_ = CONCAT44(iVar18,auVar58._0_4_);
      auVar82._8_4_ = auVar58._4_4_;
      auVar82._12_4_ = iVar18;
      auVar41._0_8_ = auVar58._8_8_;
      auVar41._8_4_ = auVar58._8_4_;
      auVar41._12_4_ = iVar18;
      auVar41 = pblendw(auVar41,auVar74,0xc);
      auVar42 = pblendw(auVar42,auVar82,0x3f);
      auVar81._0_8_ = CONCAT44(pfVar14[1],auVar74._8_4_);
      auVar81._8_4_ = auVar74._12_4_;
      auVar81._12_4_ = pfVar14[2];
      in_XMM4._8_8_ = auVar81._0_8_;
      in_XMM4._0_8_ = auVar82._0_8_;
      in_XMM3._8_8_ = auVar81._8_8_;
      in_XMM3._0_8_ = auVar42._8_8_;
      in_XMM2._0_8_ = auVar41._0_8_;
      in_XMM2._8_4_ = *pfVar14;
      in_XMM2._12_4_ = pfVar14[3];
      lVar11 = (longlong)((auVar58._0_4_ + param_7) * 0x10);
      lVar9 = (longlong)((iVar18 + param_7) * 0x10);
      lVar20 = (longlong)((auVar74._8_4_ + param_7) * 0x10);
      lVar10 = (longlong)(((int)pfVar14[1] + param_7) * 0x10);
      lVar16 = (longlong)((auVar42._8_4_ + param_7) * 0x10);
      lVar12 = (longlong)((auVar42._12_4_ + param_7) * 0x10);
      lVar21 = (longlong)((auVar74._12_4_ + param_7) * 0x10);
      auVar74 = insertps(ZEXT416(*(uint *)(param_1 + lVar11)),*(undefined4 *)(param_1 + lVar9),0x10)
      ;
      lVar22 = (longlong)(((int)pfVar14[2] + param_7) * 0x10);
      auVar58 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar11)),
                         *(undefined4 *)(param_1 + 4 + lVar9),0x10);
      auVar74 = insertps(auVar74,*(undefined4 *)(param_1 + lVar20),0x20);
      auVar81 = insertps(ZEXT416(*(uint *)(param_1 + lVar16)),*(undefined4 *)(param_1 + lVar12),0x10
                        );
      auVar58 = insertps(auVar58,*(undefined4 *)(param_1 + 4 + lVar20),0x20);
      auVar82 = insertps(auVar81,*(undefined4 *)(param_1 + lVar21),0x20);
      auVar81 = insertps(auVar74,*(undefined4 *)(param_1 + lVar10),0x30);
      auVar42 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar16)),
                         *(undefined4 *)(param_1 + 4 + lVar12),0x10);
      auVar74 = insertps(auVar58,*(undefined4 *)(param_1 + 4 + lVar10),0x30);
      auVar58 = insertps(auVar42,*(undefined4 *)(param_1 + 4 + lVar21),0x20);
      auVar83 = insertps(auVar82,*(undefined4 *)(param_1 + lVar22),0x30);
      auVar80 = insertps(auVar58,*(undefined4 *)(param_1 + 4 + lVar22),0x30);
      auVar58 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar11)),
                         *(undefined4 *)(param_1 + 8 + lVar9),0x10);
      auVar42 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar16)),
                         *(undefined4 *)(param_1 + 8 + lVar12),0x10);
      auVar58 = insertps(auVar58,*(undefined4 *)(param_1 + 8 + lVar20),0x20);
      auVar42 = insertps(auVar42,*(undefined4 *)(param_1 + 8 + lVar21),0x20);
      auVar58 = insertps(auVar58,*(undefined4 *)(param_1 + 8 + lVar10),0x30);
      auVar77 = insertps(auVar42,*(undefined4 *)(param_1 + 8 + lVar22),0x30);
      uVar38 = *(undefined4 *)(param_1 + 0xc + lVar16);
      uVar4 = *(undefined4 *)(param_1 + 0xc + lVar12);
      auVar79._0_4_ = auVar81._0_4_ - auVar83._0_4_;
      auVar79._4_4_ = auVar81._4_4_ - auVar83._4_4_;
      auVar79._8_4_ = auVar81._8_4_ - auVar83._8_4_;
      auVar79._12_4_ = auVar81._12_4_ - auVar83._12_4_;
      auVar75._0_4_ = auVar74._0_4_ - auVar80._0_4_;
      auVar75._4_4_ = auVar74._4_4_ - auVar80._4_4_;
      auVar75._8_4_ = auVar74._8_4_ - auVar80._8_4_;
      auVar75._12_4_ = auVar74._12_4_ - auVar80._12_4_;
      auVar74._0_4_ = auVar58._0_4_ - auVar77._0_4_;
      auVar74._4_4_ = auVar58._4_4_ - auVar77._4_4_;
      auVar74._8_4_ = auVar58._8_4_ - auVar77._8_4_;
      auVar74._12_4_ = auVar58._12_4_ - auVar77._12_4_;
      auVar72._0_4_ =
           auVar74._0_4_ * auVar74._0_4_ +
           auVar75._0_4_ * auVar75._0_4_ + auVar79._0_4_ * auVar79._0_4_;
      auVar72._4_4_ =
           auVar74._4_4_ * auVar74._4_4_ +
           auVar75._4_4_ * auVar75._4_4_ + auVar79._4_4_ * auVar79._4_4_;
      auVar72._8_4_ =
           auVar74._8_4_ * auVar74._8_4_ +
           auVar75._8_4_ * auVar75._8_4_ + auVar79._8_4_ * auVar79._8_4_;
      auVar72._12_4_ =
           auVar74._12_4_ * auVar74._12_4_ +
           auVar75._12_4_ * auVar75._12_4_ + auVar79._12_4_ * auVar79._12_4_;
      auVar82 = sqrtps(auVar72,auVar72);
      auVar42 = divps(auVar79,auVar82);
      auVar81 = divps(auVar75,auVar82);
      uVar24 = -(uint)(auVar82._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
      uVar26 = -(uint)(auVar82._4_4_ < _UNK_1506895e4);
      uVar28 = -(uint)(auVar82._8_4_ < _UNK_1506895e8);
      uVar30 = -(uint)(auVar82._12_4_ < _UNK_1506895ec);
      auVar58._4_4_ = uVar26;
      auVar58._0_4_ = uVar24;
      auVar58._8_4_ = uVar28;
      auVar58._12_4_ = uVar30;
      auVar75 = blendvps(auVar42,___xmm_3f8000003f8000003f8000003f800000,auVar58);
      auVar58 = insertps(ZEXT416(*(uint *)(param_4 +
                                          (ulonglong)*(byte *)(param_3 + (int)pfVar14[-7]) * 4)),
                         *(undefined4 *)
                          (param_4 + (ulonglong)((uint)*(byte *)(param_3 + (int)pfVar14[-4]) * 4)),
                         0x10);
      auVar42 = insertps(auVar58,*(undefined4 *)
                                  (param_4 + (ulonglong)*(byte *)(param_3 + (int)pfVar14[-1]) * 4),
                         0x20);
      auVar58 = divps(auVar74,auVar82);
      fVar68 = auVar82._0_4_ - param_5 * auVar41._0_4_;
      fVar69 = auVar82._4_4_ - param_5 * auVar41._4_4_;
      fVar70 = auVar82._8_4_ - param_5 * *pfVar14;
      fVar71 = auVar82._12_4_ - param_5 * pfVar14[3];
      uVar5 = *(undefined4 *)(param_1 + 0xc + lVar21);
      auVar74 = insertps(auVar42,*(undefined4 *)
                                  (param_4 + (ulonglong)*(byte *)(param_3 + (int)pfVar14[2]) * 4),
                         0x30);
      fVar56 = auVar74._0_4_ * fVar68;
      fVar62 = auVar74._4_4_ * fVar69;
      fVar64 = auVar74._8_4_ * fVar70;
      fVar66 = auVar74._12_4_ * fVar71;
      uVar25 = -(uint)(fVar68 < __xmm_00000000000000000000000000000000);
      uVar27 = -(uint)(fVar69 < _UNK_150aa8f64);
      uVar29 = -(uint)(fVar70 < (float)DAT_150aa8f68);
      uVar31 = -(uint)(fVar71 < DAT_150aa8f68._4_4_);
      uVar2 = *(undefined4 *)(param_1 + 0xc + lVar22);
      auVar59._0_4_ = (float)(~uVar25 & (uint)(auVar75._0_4_ * fVar56)) + auVar83._0_4_;
      auVar59._4_4_ = (float)(~uVar27 & (uint)(auVar75._4_4_ * fVar62)) + auVar83._4_4_;
      auVar59._8_4_ = (float)(~uVar29 & (uint)(auVar75._8_4_ * fVar64)) + auVar83._8_4_;
      auVar59._12_4_ = (float)(~uVar31 & (uint)(auVar75._12_4_ * fVar66)) + auVar83._12_4_;
      *(float *)(param_1 + lVar16) = auVar59._0_4_;
      uVar6 = extractps(auVar59,1);
      *(undefined8 *)(param_1 + lVar12) = uVar6;
      uVar6 = extractps(auVar59,2);
      *(undefined8 *)(param_1 + lVar21) = uVar6;
      auVar83._0_4_ =
           (float)(~uVar25 & (uint)((float)(~uVar24 & auVar81._0_4_) * fVar56)) + auVar80._0_4_;
      auVar83._4_4_ =
           (float)(~uVar27 & (uint)((float)(~uVar26 & auVar81._4_4_) * fVar62)) + auVar80._4_4_;
      auVar83._8_4_ =
           (float)(~uVar29 & (uint)((float)(~uVar28 & auVar81._8_4_) * fVar64)) + auVar80._8_4_;
      auVar83._12_4_ =
           (float)(~uVar31 & (uint)((float)(~uVar30 & auVar81._12_4_) * fVar66)) + auVar80._12_4_;
      uVar6 = extractps(auVar59,3);
      *(undefined8 *)(param_1 + lVar22) = uVar6;
      *(float *)(param_1 + 4 + lVar16) = auVar83._0_4_;
      uVar6 = extractps(auVar83,1);
      *(undefined8 *)(param_1 + 4 + lVar12) = uVar6;
      uVar6 = extractps(auVar83,2);
      *(undefined8 *)(param_1 + 4 + lVar21) = uVar6;
      auVar80._0_4_ =
           (float)(~uVar25 & (uint)(fVar56 * (float)(~uVar24 & auVar58._0_4_))) + auVar77._0_4_;
      auVar80._4_4_ =
           (float)(~uVar27 & (uint)(fVar62 * (float)(~uVar26 & auVar58._4_4_))) + auVar77._4_4_;
      auVar80._8_4_ =
           (float)(~uVar29 & (uint)(fVar64 * (float)(~uVar28 & auVar58._8_4_))) + auVar77._8_4_;
      auVar80._12_4_ =
           (float)(~uVar31 & (uint)(fVar66 * (float)(~uVar30 & auVar58._12_4_))) + auVar77._12_4_;
      uVar6 = extractps(auVar83,3);
      *(undefined8 *)(param_1 + 4 + lVar22) = uVar6;
      *(float *)(param_1 + 8 + lVar16) = auVar80._0_4_;
      uVar6 = extractps(auVar80,1);
      *(undefined8 *)(param_1 + 8 + lVar12) = uVar6;
      uVar6 = extractps(auVar80,2);
      *(undefined8 *)(param_1 + 8 + lVar21) = uVar6;
      uVar6 = extractps(auVar80,3);
      *(undefined8 *)(param_1 + 8 + lVar22) = uVar6;
      *(undefined4 *)(param_1 + 0xc + lVar16) = uVar38;
      *(undefined4 *)(param_1 + 0xc + lVar12) = uVar4;
      *(undefined4 *)(param_1 + 0xc + lVar21) = uVar5;
      *(undefined4 *)(param_1 + 0xc + lVar22) = uVar2;
      pfVar14 = pfVar14 + 0xc;
      uVar19 = uVar19 + 4;
    } while ((int)uVar19 < (int)uVar17);
    if ((int)param_6 <= (int)uVar19) {
      return;
    }
  }
  auVar77._0_4_ =
       -(uint)((int)(uVar19 | (uint)__xmm_00000003000000020000000100000000) < (int)param_6);
  auVar77._4_4_ =
       -(uint)((int)(uVar19 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_6);
  auVar77._8_4_ = -(uint)((int)(uVar19 | _UNK_150631e08) < (int)param_6);
  auVar77._12_4_ = -(uint)((int)(uVar19 | _UNK_150631e0c) < (int)param_6);
  pauVar1 = (undefined1 (*) [16])(param_2 + (ulonglong)uVar19 * 0xc);
  iVar18 = movmskps(uVar17,auVar77);
  bVar8 = (char)((char)iVar18 << 4) >> 4;
  if (iVar18 == 0xf) {
    auVar58 = *pauVar1;
    auVar74 = pauVar1[1];
    uVar38 = auVar74._0_4_;
    auVar61._4_4_ = uVar38;
    auVar61._0_4_ = uVar38;
    auVar61._8_4_ = uVar38;
    auVar61._12_4_ = uVar38;
    auVar37._8_4_ = auVar58._8_4_;
    auVar37._12_4_ = auVar58._12_4_;
    auVar52._0_8_ = CONCAT44(auVar37._12_4_,auVar58._0_4_);
    auVar52._8_4_ = auVar58._4_4_;
    auVar52._12_4_ = auVar37._12_4_;
    auVar81 = pblendw(auVar61,auVar52,0x3f);
    auVar37._0_8_ = auVar58._8_8_;
    auVar58 = pblendw(auVar37,auVar74,0xc);
    auVar40._0_8_ = CONCAT44(*(undefined4 *)(pauVar1[2] + 4),auVar74._8_4_);
    auVar40._8_4_ = auVar74._12_4_;
    auVar40._12_4_ = *(undefined4 *)(pauVar1[2] + 8);
    auVar50._8_8_ = auVar40._0_8_;
    auVar50._0_8_ = auVar52._0_8_;
    auVar43._8_8_ = auVar40._8_8_;
    auVar43._0_8_ = auVar81._8_8_;
    auVar33._0_8_ = auVar58._0_8_;
    auVar33._8_4_ = *(undefined4 *)pauVar1[2];
    auVar33._12_4_ = *(undefined4 *)(pauVar1[2] + 0xc);
    bVar23 = false;
  }
  else {
    auVar32._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar77._0_4_;
    auVar32._4_4_ = _UNK_150b50da4 & auVar77._4_4_;
    auVar32._8_4_ = _UNK_150b50da8 & auVar77._8_4_;
    auVar32._12_4_ = _UNK_150b50dac & auVar77._12_4_;
    lVar9 = extractps(auVar32,1);
    lVar10 = extractps(auVar32,2);
    lVar11 = extractps(auVar32,3);
    auVar50._4_4_ = *(undefined4 *)(*pauVar1 + lVar9);
    auVar50._0_4_ = *(undefined4 *)*pauVar1;
    auVar50._12_4_ = *(undefined4 *)(*pauVar1 + lVar11);
    auVar50._8_4_ = *(undefined4 *)(*pauVar1 + lVar10);
    auVar58 = ___xmm_000000280000001c0000001000000004 & auVar77;
    auVar43._4_4_ = *(undefined4 *)(*pauVar1 + auVar58._4_4_);
    auVar43._0_4_ = *(undefined4 *)(*pauVar1 + auVar58._0_4_);
    auVar43._12_4_ = *(undefined4 *)(*pauVar1 + auVar58._12_4_);
    auVar43._8_4_ = *(undefined4 *)(*pauVar1 + auVar58._8_4_);
    auVar58 = ___xmm_0000002c000000200000001400000008 & auVar77;
    auVar33._4_4_ = *(undefined4 *)(*pauVar1 + auVar58._4_4_);
    auVar33._0_4_ = *(undefined4 *)(*pauVar1 + auVar58._0_4_);
    auVar33._12_4_ = *(undefined4 *)(*pauVar1 + auVar58._12_4_);
    auVar33._8_4_ = *(undefined4 *)(*pauVar1 + auVar58._8_4_);
    bVar23 = (bVar8 & 1) == 0;
    auVar58 = in_XMM4;
    if (bVar23) goto LAB_1402fca71;
  }
  auVar58 = auVar50;
  auVar50 = auVar58;
LAB_1402fca71:
  if (bVar23) {
    auVar58 = pblendw(in_XMM4,auVar58,3);
    auVar74 = in_XMM2;
    auVar81 = in_XMM3;
  }
  else {
    auVar58 = pblendw(in_XMM4,auVar58,3);
    auVar74 = auVar33;
    auVar81 = auVar43;
  }
  if ((bVar8 & 2) == 0) {
    auVar81 = pblendw(in_XMM3,auVar81,3);
    auVar58 = pblendw(auVar58,auVar58,0xc);
    auVar41 = auVar81;
  }
  else {
    auVar81 = pblendw(in_XMM3,auVar81,3);
    auVar58 = pblendw(auVar58,auVar50,0xc);
    auVar41 = auVar43;
  }
  if ((bVar8 & 4) == 0) {
    auVar81 = pblendw(auVar81,auVar41,0xc);
    auVar58 = pblendw(auVar58,auVar58,0x30);
    auVar41 = auVar81;
  }
  else {
    auVar81 = pblendw(auVar81,auVar41,0xc);
    auVar58 = pblendw(auVar58,auVar50,0x30);
    auVar41 = auVar43;
  }
  if ((char)bVar8 < '\0') {
    auVar81 = pblendw(auVar81,auVar41,0x30);
  }
  else {
    auVar43 = pblendw(auVar81,auVar41,0x30);
    auVar50 = auVar58;
    auVar81 = auVar43;
  }
  auVar81 = pblendw(auVar81,auVar43,0xc0);
  auVar47._0_4_ = (auVar81._0_4_ + param_7) * 0x10;
  auVar47._4_4_ = (auVar81._4_4_ + param_7) * 0x10;
  auVar47._8_4_ = (auVar81._8_4_ + param_7) * 0x10;
  auVar47._12_4_ = (auVar81._12_4_ + param_7) * 0x10;
  auVar82 = auVar77 & auVar47;
  lVar9 = param_1 + auVar82._0_4_;
  lVar10 = param_1 + auVar82._4_4_;
  bVar23 = (bVar8 & 2) != 0;
  auVar58 = pblendw(auVar58,auVar50,0xc0);
  auVar44._0_4_ = (auVar58._0_4_ + param_7) * 0x10;
  auVar44._4_4_ = (auVar58._4_4_ + param_7) * 0x10;
  auVar44._8_4_ = (auVar58._8_4_ + param_7) * 0x10;
  auVar44._12_4_ = (auVar58._12_4_ + param_7) * 0x10;
  auVar44 = auVar44 & auVar77;
  auVar42 = ___xmm_00000004000000040000000400000004 & auVar77;
  uVar13 = (ulonglong)auVar42._0_4_;
  auVar41 = ___xmm_00000008000000080000000800000008 & auVar77;
  uVar15 = (ulonglong)auVar41._0_4_;
  auVar58 = ZEXT416(*(uint *)(param_1 + auVar82._0_4_));
  if (bVar23) {
    auVar58 = insertps(auVar58,*(undefined4 *)(param_1 + auVar82._4_4_),0x10);
  }
  auVar59 = ZEXT416(*(uint *)(uVar13 + lVar9));
  if (bVar23) {
    auVar59 = insertps(auVar59,*(undefined4 *)((ulonglong)auVar42._4_4_ + lVar10),0x10);
  }
  lVar11 = (longlong)auVar44._0_4_;
  auVar75 = ZEXT416(*(uint *)(uVar15 + lVar9));
  if (bVar23) {
    auVar75 = insertps(auVar75,*(undefined4 *)((ulonglong)auVar41._4_4_ + lVar10),0x10);
  }
  lVar12 = param_1 + lVar11;
  lVar16 = param_1 + auVar44._4_4_;
  auVar74 = blendps(in_XMM2,auVar74,1);
  if ((bVar8 & 2) == 0) {
    auVar79 = ZEXT416(*(uint *)(param_1 + lVar11));
    auVar80 = ZEXT416(*(uint *)(uVar13 + lVar12));
    auVar72 = ZEXT416(*(uint *)(uVar15 + lVar12));
    auVar83 = auVar74;
  }
  else {
    auVar79 = insertps(ZEXT416(*(uint *)(param_1 + lVar11)),*(undefined4 *)(param_1 + auVar44._4_4_)
                       ,0x10);
    auVar80 = insertps(ZEXT416(*(uint *)(uVar13 + lVar12)),
                       *(undefined4 *)((ulonglong)auVar42._4_4_ + lVar16),0x10);
    auVar72 = insertps(ZEXT416(*(uint *)(uVar15 + lVar12)),
                       *(undefined4 *)((ulonglong)auVar41._4_4_ + lVar16),0x10);
    auVar83 = auVar33;
  }
  lVar11 = param_1 + auVar82._8_4_;
  if ((bVar8 & 4) != 0) {
    auVar58 = insertps(auVar58,*(undefined4 *)(param_1 + auVar82._8_4_),0x20);
    auVar59 = insertps(auVar59,*(undefined4 *)((ulonglong)auVar42._8_4_ + lVar11),0x20);
    auVar75 = insertps(auVar75,*(undefined4 *)((ulonglong)auVar41._8_4_ + lVar11),0x20);
  }
  lVar12 = param_1 + auVar44._8_4_;
  auVar83 = blendps(auVar74,auVar83,2);
  auVar74 = auVar83;
  if ((bVar8 & 4) != 0) {
    auVar79 = insertps(auVar79,*(undefined4 *)(param_1 + auVar44._8_4_),0x20);
    auVar80 = insertps(auVar80,*(undefined4 *)((ulonglong)auVar42._8_4_ + lVar12),0x20);
    auVar72 = insertps(auVar72,*(undefined4 *)((ulonglong)auVar41._8_4_ + lVar12),0x20);
    auVar74 = auVar33;
  }
  uVar6 = param_1 + auVar82._12_4_;
  if ((char)bVar8 < '\0') {
    auVar58 = insertps(auVar58,*(undefined4 *)(param_1 + auVar82._12_4_),0x30);
    auVar59 = insertps(auVar59,*(undefined4 *)((ulonglong)auVar42._12_4_ + uVar6),0x30);
  }
  if ((char)bVar8 < '\0') {
    auVar75 = insertps(auVar75,*(undefined4 *)((ulonglong)auVar41._12_4_ + uVar6),0x30);
    auVar74 = blendps(auVar83,auVar74,4);
  }
  else {
    auVar74 = blendps(auVar83,auVar74,4);
  }
  uVar7 = param_1 + auVar44._12_4_;
  auVar82 = auVar74;
  if ((char)bVar8 < '\0') {
    auVar79 = insertps(auVar79,*(undefined4 *)(param_1 + auVar44._12_4_),0x30);
    auVar80 = insertps(auVar80,*(undefined4 *)((ulonglong)auVar42._12_4_ + uVar7),0x30);
    auVar72 = insertps(auVar72,*(undefined4 *)((ulonglong)auVar41._12_4_ + uVar7),0x30);
    auVar82 = auVar33;
  }
  auVar42 = blendps(auVar74,auVar82,8);
  auVar81 = auVar81 & auVar77;
  auVar74 = ___xmm_0000000c0000000c0000000c0000000c & auVar77;
  auVar82 = insertps(ZEXT416(*(uint *)((ulonglong)auVar74._0_4_ + lVar9)),
                     *(undefined4 *)((ulonglong)auVar74._4_4_ + lVar10),0x10);
  auVar82 = insertps(auVar82,*(undefined4 *)((ulonglong)auVar74._8_4_ + lVar11),0x20);
  auVar82 = insertps(auVar82,*(undefined4 *)((ulonglong)auVar74._12_4_ + uVar6),0x30);
  bVar3 = *(byte *)(param_3 + auVar81._8_4_);
  auVar45._0_4_ = (uint)*(byte *)(param_3 + auVar81._0_4_) << 2;
  auVar45._4_4_ = (uint)*(byte *)(param_3 + auVar81._4_4_) << 2;
  auVar45._8_4_ = (uint)bVar3 << 2;
  auVar45._12_4_ = (uint)*(byte *)(param_3 + auVar81._12_4_) << 2;
  auVar81 = pmovzxdq(auVar41,auVar45);
  auVar46._0_8_ = (ulonglong)bVar3 << 2;
  auVar46._8_4_ = auVar45._12_4_;
  auVar46._12_4_ = 0;
  auVar74 = pmovsxdq(auVar74,auVar77);
  auVar74 = blendvps((undefined1  [16])0x0,auVar81,auVar74);
  auVar34._4_4_ = auVar77._8_4_;
  auVar34._0_4_ = auVar77._8_4_;
  auVar34._8_4_ = auVar77._12_4_;
  auVar34._12_4_ = auVar77._12_4_;
  auVar81 = blendvps(ZEXT816(0),auVar46,auVar34);
  auVar74 = insertps(ZEXT416(*(uint *)(param_4 + auVar74._0_8_)),
                     *(undefined4 *)(param_4 + auVar74._8_8_),0x10);
  auVar74 = insertps(auVar74,*(undefined4 *)(param_4 + auVar81._0_8_),0x20);
  auVar74 = insertps(auVar74,*(undefined4 *)(param_4 + auVar81._8_8_),0x30);
  auVar78._0_4_ = auVar79._0_4_ - auVar58._0_4_;
  auVar78._4_4_ = auVar79._4_4_ - auVar58._4_4_;
  auVar78._8_4_ = auVar79._8_4_ - auVar58._8_4_;
  auVar78._12_4_ = auVar79._12_4_ - auVar58._12_4_;
  fVar57 = auVar59._0_4_;
  auVar76._0_4_ = auVar80._0_4_ - fVar57;
  fVar63 = auVar59._4_4_;
  auVar76._4_4_ = auVar80._4_4_ - fVar63;
  fVar65 = auVar59._8_4_;
  auVar76._8_4_ = auVar80._8_4_ - fVar65;
  fVar67 = auVar59._12_4_;
  auVar76._12_4_ = auVar80._12_4_ - fVar67;
  fVar49 = auVar75._0_4_;
  auVar73._0_4_ = auVar72._0_4_ - fVar49;
  fVar53 = auVar75._4_4_;
  auVar73._4_4_ = auVar72._4_4_ - fVar53;
  fVar54 = auVar75._8_4_;
  auVar73._8_4_ = auVar72._8_4_ - fVar54;
  fVar55 = auVar75._12_4_;
  auVar73._12_4_ = auVar72._12_4_ - fVar55;
  auVar48._0_4_ = auVar76._0_4_ * auVar76._0_4_ + auVar78._0_4_ * auVar78._0_4_;
  auVar48._4_4_ = auVar76._4_4_ * auVar76._4_4_ + auVar78._4_4_ * auVar78._4_4_;
  auVar48._8_4_ = auVar76._8_4_ * auVar76._8_4_ + auVar78._8_4_ * auVar78._8_4_;
  auVar48._12_4_ = auVar76._12_4_ * auVar76._12_4_ + auVar78._12_4_ * auVar78._12_4_;
  auVar35._0_4_ = auVar73._0_4_ * auVar73._0_4_ + auVar48._0_4_;
  auVar35._4_4_ = auVar73._4_4_ * auVar73._4_4_ + auVar48._4_4_;
  auVar35._8_4_ = auVar73._8_4_ * auVar73._8_4_ + auVar48._8_4_;
  auVar35._12_4_ = auVar73._12_4_ * auVar73._12_4_ + auVar48._12_4_;
  auVar81 = sqrtps(auVar48,auVar35);
  uVar17 = -(uint)(auVar81._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
  uVar24 = -(uint)(auVar81._4_4_ < _UNK_1506895e4);
  uVar26 = -(uint)(auVar81._8_4_ < _UNK_1506895e8);
  uVar28 = -(uint)(auVar81._12_4_ < _UNK_1506895ec);
  auVar36._4_4_ = uVar24;
  auVar36._0_4_ = uVar17;
  auVar36._8_4_ = uVar26;
  auVar36._12_4_ = uVar28;
  auVar41 = divps(auVar78,auVar81);
  auVar59 = blendvps(auVar41,___xmm_3f8000003f8000003f8000003f800000,auVar36);
  auVar41 = divps(auVar76,auVar81);
  fVar56 = auVar81._0_4_ - param_5 * auVar42._0_4_;
  fVar62 = auVar81._4_4_ - param_5 * auVar42._4_4_;
  fVar64 = auVar81._8_4_ - param_5 * auVar42._8_4_;
  fVar66 = auVar81._12_4_ - param_5 * auVar42._12_4_;
  fVar68 = auVar74._0_4_ * fVar56;
  fVar69 = auVar74._4_4_ * fVar62;
  fVar70 = auVar74._8_4_ * fVar64;
  fVar71 = auVar74._12_4_ * fVar66;
  uVar19 = -(uint)(fVar56 < 0.0);
  uVar25 = -(uint)(fVar62 < 0.0);
  uVar27 = -(uint)(fVar64 < 0.0);
  uVar29 = -(uint)(fVar66 < 0.0);
  auVar39._0_4_ = (float)(~uVar19 & (uint)(auVar59._0_4_ * fVar68)) + auVar58._0_4_;
  auVar39._4_4_ = (float)(~uVar25 & (uint)(auVar59._4_4_ * fVar69)) + auVar58._4_4_;
  auVar39._8_4_ = (float)(~uVar27 & (uint)(auVar59._8_4_ * fVar70)) + auVar58._8_4_;
  auVar39._12_4_ = (float)(~uVar29 & (uint)(auVar59._12_4_ * fVar71)) + auVar58._12_4_;
  if ((bVar8 & 1) != 0) {
    *(float *)(param_1 + auVar47._0_4_) = auVar39._0_4_;
  }
  fVar56 = (float)(~uVar17 & auVar41._0_4_);
  fVar62 = (float)(~uVar24 & auVar41._4_4_);
  fVar64 = (float)(~uVar26 & auVar41._8_4_);
  fVar66 = (float)(~uVar28 & auVar41._12_4_);
  if ((bVar8 & 2) != 0) {
    uVar6 = extractps(auVar39,1);
    *(undefined8 *)(param_1 + auVar47._4_4_) = uVar6;
  }
  if ((bVar8 & 4) == 0) {
    fVar56 = (float)(~uVar19 & (uint)(fVar56 * fVar68));
    fVar62 = (float)(~uVar25 & (uint)(fVar62 * fVar69));
    fVar64 = (float)(~uVar27 & (uint)(fVar64 * fVar70));
    fVar66 = (float)(~uVar29 & (uint)(fVar66 * fVar71));
  }
  else {
    uVar6 = extractps(auVar39,2);
    *(undefined8 *)(param_1 + auVar47._8_4_) = uVar6;
    fVar56 = (float)(~uVar19 & (uint)(fVar56 * fVar68));
    fVar62 = (float)(~uVar25 & (uint)(fVar62 * fVar69));
    fVar64 = (float)(~uVar27 & (uint)(fVar64 * fVar70));
    fVar66 = (float)(~uVar29 & (uint)(fVar66 * fVar71));
  }
  if ((char)bVar8 < '\0') {
    uVar6 = extractps(auVar39,3);
    *(undefined8 *)(param_1 + auVar47._12_4_) = uVar6;
    auVar58 = divps(auVar73,auVar81);
    auVar60._0_4_ = fVar57 + fVar56;
    auVar60._4_4_ = fVar63 + fVar62;
    auVar60._8_4_ = fVar65 + fVar64;
    auVar60._12_4_ = fVar67 + fVar66;
  }
  else {
    auVar58 = divps(auVar73,auVar81);
    auVar60._0_4_ = fVar57 + fVar56;
    auVar60._4_4_ = fVar63 + fVar62;
    auVar60._8_4_ = fVar65 + fVar64;
    auVar60._12_4_ = fVar67 + fVar66;
  }
  if ((bVar8 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar47._0_4_) = auVar60._0_4_;
  }
  if ((bVar8 & 2) != 0) {
    uVar6 = extractps(auVar60,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar47._4_4_) = uVar6;
  }
  if ((bVar8 & 4) != 0) {
    uVar6 = extractps(auVar60,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar47._8_4_) = uVar6;
  }
  uVar5 = ~uVar29 & (uint)((float)(~uVar28 & auVar58._12_4_) * fVar71);
  uVar4 = ~uVar27 & (uint)((float)(~uVar26 & auVar58._8_4_) * fVar70);
  uVar2 = ~uVar25 & (uint)((float)(~uVar24 & auVar58._4_4_) * fVar69);
  uVar38 = ~uVar19 & (uint)((float)(~uVar17 & auVar58._0_4_) * fVar68);
  if ((char)bVar8 < '\0') {
    uVar6 = extractps(auVar60,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar47._12_4_) = uVar6;
    auVar51._0_4_ = fVar49 + (float)uVar38;
    auVar51._4_4_ = fVar53 + (float)uVar2;
    auVar51._8_4_ = fVar54 + (float)uVar4;
    auVar51._12_4_ = fVar55 + (float)uVar5;
  }
  else {
    auVar51._0_4_ = fVar49 + (float)uVar38;
    auVar51._4_4_ = fVar53 + (float)uVar2;
    auVar51._8_4_ = fVar54 + (float)uVar4;
    auVar51._12_4_ = fVar55 + (float)uVar5;
  }
  if ((bVar8 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar47._0_4_) = auVar51._0_4_;
  }
  if ((bVar8 & 2) != 0) {
    uVar6 = extractps(auVar51,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar47._4_4_) = uVar6;
  }
  if ((bVar8 & 4) != 0) {
    uVar6 = extractps(auVar51,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar47._8_4_) = uVar6;
  }
  if ((char)bVar8 < '\0') {
    uVar6 = extractps(auVar51,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar47._12_4_) = uVar6;
  }
  if ((bVar8 & 1) != 0) {
    *(int *)(param_1 + 0xc + (longlong)auVar47._0_4_) = auVar82._0_4_;
  }
  if ((bVar8 & 2) != 0) {
    uVar6 = extractps(auVar82,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar47._4_4_) = uVar6;
  }
  if ((bVar8 & 4) != 0) {
    uVar6 = extractps(auVar82,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar47._8_4_) = uVar6;
  }
  if ((char)bVar8 < '\0') {
    uVar6 = extractps(auVar82,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar47._12_4_) = uVar6;
  }
  return;
}

// ApplyLongRangeConstraintsScaleWeightmap_sse4 @ 1402fd360

/* WARNING: Removing unreachable block (ram,0x0001402fe13f) */
/* WARNING: Removing unreachable block (ram,0x0001402fde89) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLongRangeConstraintsScaleWeightmap_sse4
               (longlong param_1,longlong param_2,float param_3,longlong param_4,longlong param_5,
               uint param_6,int param_7)

{
  undefined1 (*pauVar1) [16];
  undefined4 uVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  byte bVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  float *pfVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  bool bVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined4 uVar40;
  float fVar41;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar58;
  float fVar62;
  float fVar63;
  undefined1 auVar59 [16];
  float fVar64;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
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
  float fVar81;
  float fVar82;
  float fVar83;
  
  uVar25 = param_6 + 3;
  if (-1 < (int)param_6) {
    uVar25 = param_6;
  }
  if ((int)(uVar25 & 0xfffffffc) < 1) {
    uVar18 = 0;
    if ((int)param_6 < 1) {
      return;
    }
  }
  else {
    pfVar15 = (float *)(param_2 + 0x20);
    uVar18 = 0;
    do {
      auVar59 = *(undefined1 (*) [16])(pfVar15 + -8);
      auVar71 = *(undefined1 (*) [16])(pfVar15 + -4);
      uVar40 = auVar71._0_4_;
      auVar74._4_4_ = uVar40;
      auVar74._0_4_ = uVar40;
      auVar74._8_4_ = uVar40;
      auVar74._12_4_ = uVar40;
      iVar8 = auVar59._12_4_;
      auVar77._0_8_ = CONCAT44(iVar8,auVar59._0_4_);
      auVar77._8_4_ = auVar59._4_4_;
      auVar77._12_4_ = iVar8;
      auVar38._0_8_ = auVar59._8_8_;
      auVar38._8_4_ = auVar59._8_4_;
      auVar38._12_4_ = iVar8;
      auVar38 = pblendw(auVar38,auVar71,0xc);
      auVar49 = pblendw(auVar74,auVar77,0x3f);
      auVar78._0_8_ = CONCAT44(pfVar15[1],auVar71._8_4_);
      auVar78._8_4_ = auVar71._12_4_;
      auVar78._12_4_ = pfVar15[2];
      in_XMM4._8_8_ = auVar78._0_8_;
      in_XMM4._0_8_ = auVar77._0_8_;
      in_XMM3._8_8_ = auVar78._8_8_;
      in_XMM3._0_8_ = auVar49._8_8_;
      in_XMM1._0_8_ = auVar38._0_8_;
      in_XMM1._8_4_ = *pfVar15;
      in_XMM1._12_4_ = pfVar15[3];
      lVar12 = (longlong)((auVar59._0_4_ + param_7) * 0x10);
      lVar19 = (longlong)((iVar8 + param_7) * 0x10);
      lVar9 = (longlong)((auVar71._8_4_ + param_7) * 0x10);
      lVar11 = (longlong)(((int)pfVar15[1] + param_7) * 0x10);
      lVar17 = (longlong)((auVar49._8_4_ + param_7) * 0x10);
      lVar13 = (longlong)((auVar49._12_4_ + param_7) * 0x10);
      lVar20 = (longlong)((auVar71._12_4_ + param_7) * 0x10);
      auVar71 = insertps(ZEXT416(*(uint *)(param_1 + lVar12)),*(undefined4 *)(param_1 + lVar19),0x10
                        );
      lVar21 = (longlong)(((int)pfVar15[2] + param_7) * 0x10);
      auVar59 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar12)),
                         *(undefined4 *)(param_1 + 4 + lVar19),0x10);
      auVar71 = insertps(auVar71,*(undefined4 *)(param_1 + lVar9),0x20);
      auVar78 = insertps(ZEXT416(*(uint *)(param_1 + lVar17)),*(undefined4 *)(param_1 + lVar13),0x10
                        );
      auVar59 = insertps(auVar59,*(undefined4 *)(param_1 + 4 + lVar9),0x20);
      auVar79 = insertps(auVar78,*(undefined4 *)(param_1 + lVar20),0x20);
      auVar49 = insertps(auVar71,*(undefined4 *)(param_1 + lVar11),0x30);
      auVar78 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar17)),
                         *(undefined4 *)(param_1 + 4 + lVar13),0x10);
      auVar71 = insertps(auVar59,*(undefined4 *)(param_1 + 4 + lVar11),0x30);
      auVar59 = insertps(auVar78,*(undefined4 *)(param_1 + 4 + lVar20),0x20);
      auVar80 = insertps(auVar79,*(undefined4 *)(param_1 + lVar21),0x30);
      auVar77 = insertps(auVar59,*(undefined4 *)(param_1 + 4 + lVar21),0x30);
      auVar59 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar12)),
                         *(undefined4 *)(param_1 + 8 + lVar19),0x10);
      auVar78 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar17)),
                         *(undefined4 *)(param_1 + 8 + lVar13),0x10);
      auVar59 = insertps(auVar59,*(undefined4 *)(param_1 + 8 + lVar9),0x20);
      auVar78 = insertps(auVar78,*(undefined4 *)(param_1 + 8 + lVar20),0x20);
      auVar59 = insertps(auVar59,*(undefined4 *)(param_1 + 8 + lVar11),0x30);
      auVar74 = insertps(auVar78,*(undefined4 *)(param_1 + 8 + lVar21),0x30);
      uVar40 = *(undefined4 *)(param_1 + 0xc + lVar17);
      auVar78 = insertps(ZEXT416(*(uint *)(param_5 +
                                          (ulonglong)*(byte *)(param_4 + (int)pfVar15[-7]) * 4)),
                         *(undefined4 *)
                          (param_5 + (ulonglong)((uint)*(byte *)(param_4 + (int)pfVar15[-4]) * 4)),
                         0x10);
      auVar78 = insertps(auVar78,*(undefined4 *)
                                  (param_5 + (ulonglong)*(byte *)(param_4 + (int)pfVar15[-1]) * 4),
                         0x20);
      auVar39._0_4_ = auVar49._0_4_ - auVar80._0_4_;
      auVar39._4_4_ = auVar49._4_4_ - auVar80._4_4_;
      auVar39._8_4_ = auVar49._8_4_ - auVar80._8_4_;
      auVar39._12_4_ = auVar49._12_4_ - auVar80._12_4_;
      auVar76._0_4_ = auVar71._0_4_ - auVar77._0_4_;
      auVar76._4_4_ = auVar71._4_4_ - auVar77._4_4_;
      auVar76._8_4_ = auVar71._8_4_ - auVar77._8_4_;
      auVar76._12_4_ = auVar71._12_4_ - auVar77._12_4_;
      auVar69._0_4_ = auVar59._0_4_ - auVar74._0_4_;
      auVar69._4_4_ = auVar59._4_4_ - auVar74._4_4_;
      auVar69._8_4_ = auVar59._8_4_ - auVar74._8_4_;
      auVar69._12_4_ = auVar59._12_4_ - auVar74._12_4_;
      auVar49._0_4_ = auVar76._0_4_ * auVar76._0_4_ + auVar39._0_4_ * auVar39._0_4_;
      auVar49._4_4_ = auVar76._4_4_ * auVar76._4_4_ + auVar39._4_4_ * auVar39._4_4_;
      auVar49._8_4_ = auVar76._8_4_ * auVar76._8_4_ + auVar39._8_4_ * auVar39._8_4_;
      auVar49._12_4_ = auVar76._12_4_ * auVar76._12_4_ + auVar39._12_4_ * auVar39._12_4_;
      auVar79 = insertps(auVar78,*(undefined4 *)
                                  (param_5 + (ulonglong)*(byte *)(param_4 + (int)pfVar15[2]) * 4),
                         0x30);
      auVar59._0_4_ = auVar69._0_4_ * auVar69._0_4_ + auVar49._0_4_;
      auVar59._4_4_ = auVar69._4_4_ * auVar69._4_4_ + auVar49._4_4_;
      auVar59._8_4_ = auVar69._8_4_ * auVar69._8_4_ + auVar49._8_4_;
      auVar59._12_4_ = auVar69._12_4_ * auVar69._12_4_ + auVar49._12_4_;
      auVar59 = sqrtps(auVar49,auVar59);
      uVar23 = -(uint)(auVar59._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
      uVar26 = -(uint)(auVar59._4_4_ < _UNK_1506895e4);
      uVar28 = -(uint)(auVar59._8_4_ < _UNK_1506895e8);
      uVar30 = -(uint)(auVar59._12_4_ < _UNK_1506895ec);
      auVar71._4_4_ = uVar26;
      auVar71._0_4_ = uVar23;
      auVar71._8_4_ = uVar28;
      auVar71._12_4_ = uVar30;
      auVar78 = divps(auVar39,auVar59);
      auVar49 = blendvps(auVar78,___xmm_3f8000003f8000003f8000003f800000,auVar71);
      auVar78 = divps(auVar76,auVar59);
      uVar2 = *(undefined4 *)(param_1 + 0xc + lVar13);
      auVar71 = divps(auVar69,auVar59);
      uVar4 = *(undefined4 *)(param_1 + 0xc + lVar20);
      fVar41 = auVar59._0_4_ - auVar79._0_4_ * auVar38._0_4_;
      fVar46 = auVar59._4_4_ - auVar79._4_4_ * auVar38._4_4_;
      fVar47 = auVar59._8_4_ - auVar79._8_4_ * *pfVar15;
      fVar48 = auVar59._12_4_ - auVar79._12_4_ * pfVar15[3];
      fVar65 = param_3 * fVar41;
      fVar66 = param_3 * fVar46;
      fVar67 = param_3 * fVar47;
      fVar68 = param_3 * fVar48;
      uVar24 = -(uint)(fVar41 < __xmm_00000000000000000000000000000000);
      uVar27 = -(uint)(fVar46 < _UNK_150aa8f64);
      uVar29 = -(uint)(fVar47 < (float)DAT_150aa8f68);
      uVar31 = -(uint)(fVar48 < DAT_150aa8f68._4_4_);
      uVar5 = *(undefined4 *)(param_1 + 0xc + lVar21);
      auVar73._0_4_ = (float)(~uVar24 & (uint)(auVar49._0_4_ * fVar65)) + auVar80._0_4_;
      auVar73._4_4_ = (float)(~uVar27 & (uint)(auVar49._4_4_ * fVar66)) + auVar80._4_4_;
      auVar73._8_4_ = (float)(~uVar29 & (uint)(auVar49._8_4_ * fVar67)) + auVar80._8_4_;
      auVar73._12_4_ = (float)(~uVar31 & (uint)(auVar49._12_4_ * fVar68)) + auVar80._12_4_;
      *(float *)(param_1 + lVar17) = auVar73._0_4_;
      uVar6 = extractps(auVar73,1);
      *(undefined8 *)(param_1 + lVar13) = uVar6;
      uVar6 = extractps(auVar73,2);
      *(undefined8 *)(param_1 + lVar20) = uVar6;
      auVar80._0_4_ =
           (float)(~uVar24 & (uint)((float)(~uVar23 & auVar78._0_4_) * fVar65)) + auVar77._0_4_;
      auVar80._4_4_ =
           (float)(~uVar27 & (uint)((float)(~uVar26 & auVar78._4_4_) * fVar66)) + auVar77._4_4_;
      auVar80._8_4_ =
           (float)(~uVar29 & (uint)((float)(~uVar28 & auVar78._8_4_) * fVar67)) + auVar77._8_4_;
      auVar80._12_4_ =
           (float)(~uVar31 & (uint)((float)(~uVar30 & auVar78._12_4_) * fVar68)) + auVar77._12_4_;
      uVar6 = extractps(auVar73,3);
      *(undefined8 *)(param_1 + lVar21) = uVar6;
      *(float *)(param_1 + 4 + lVar17) = auVar80._0_4_;
      uVar6 = extractps(auVar80,1);
      *(undefined8 *)(param_1 + 4 + lVar13) = uVar6;
      uVar6 = extractps(auVar80,2);
      *(undefined8 *)(param_1 + 4 + lVar20) = uVar6;
      auVar79._0_4_ =
           (float)(~uVar24 & (uint)(fVar65 * (float)(~uVar23 & auVar71._0_4_))) + auVar74._0_4_;
      auVar79._4_4_ =
           (float)(~uVar27 & (uint)(fVar66 * (float)(~uVar26 & auVar71._4_4_))) + auVar74._4_4_;
      auVar79._8_4_ =
           (float)(~uVar29 & (uint)(fVar67 * (float)(~uVar28 & auVar71._8_4_))) + auVar74._8_4_;
      auVar79._12_4_ =
           (float)(~uVar31 & (uint)(fVar68 * (float)(~uVar30 & auVar71._12_4_))) + auVar74._12_4_;
      uVar6 = extractps(auVar80,3);
      *(undefined8 *)(param_1 + 4 + lVar21) = uVar6;
      *(float *)(param_1 + 8 + lVar17) = auVar79._0_4_;
      uVar6 = extractps(auVar79,1);
      *(undefined8 *)(param_1 + 8 + lVar13) = uVar6;
      uVar6 = extractps(auVar79,2);
      *(undefined8 *)(param_1 + 8 + lVar20) = uVar6;
      uVar6 = extractps(auVar79,3);
      *(undefined8 *)(param_1 + 8 + lVar21) = uVar6;
      *(undefined4 *)(param_1 + 0xc + lVar17) = uVar40;
      *(undefined4 *)(param_1 + 0xc + lVar13) = uVar2;
      *(undefined4 *)(param_1 + 0xc + lVar20) = uVar4;
      *(undefined4 *)(param_1 + 0xc + lVar21) = uVar5;
      pfVar15 = pfVar15 + 0xc;
      uVar18 = uVar18 + 4;
    } while ((int)uVar18 < (int)(uVar25 & 0xfffffffc));
    if ((int)param_6 <= (int)uVar18) {
      return;
    }
  }
  auVar54._0_4_ =
       -(uint)((int)(uVar18 | (uint)__xmm_00000003000000020000000100000000) < (int)param_6);
  auVar54._4_4_ =
       -(uint)((int)(uVar18 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_6);
  auVar54._8_4_ = -(uint)((int)(uVar18 | _UNK_150631e08) < (int)param_6);
  auVar54._12_4_ = -(uint)((int)(uVar18 | _UNK_150631e0c) < (int)param_6);
  pauVar1 = (undefined1 (*) [16])(param_2 + (ulonglong)uVar18 * 0xc);
  iVar8 = movmskps(uVar18 * 3,auVar54);
  bVar10 = (char)((char)iVar8 << 4) >> 4;
  if (iVar8 == 0xf) {
    auVar59 = *pauVar1;
    auVar71 = pauVar1[1];
    uVar40 = auVar71._0_4_;
    auVar61._4_4_ = uVar40;
    auVar61._0_4_ = uVar40;
    auVar61._8_4_ = uVar40;
    auVar61._12_4_ = uVar40;
    auVar37._8_4_ = auVar59._8_4_;
    auVar37._12_4_ = auVar59._12_4_;
    auVar57._0_8_ = CONCAT44(auVar37._12_4_,auVar59._0_4_);
    auVar57._8_4_ = auVar59._4_4_;
    auVar57._12_4_ = auVar37._12_4_;
    auVar38 = pblendw(auVar61,auVar57,0x3f);
    auVar37._0_8_ = auVar59._8_8_;
    auVar59 = pblendw(auVar37,auVar71,0xc);
    auVar45._0_8_ = CONCAT44(*(undefined4 *)(pauVar1[2] + 4),auVar71._8_4_);
    auVar45._8_4_ = auVar71._12_4_;
    auVar45._12_4_ = *(undefined4 *)(pauVar1[2] + 8);
    auVar55._8_8_ = auVar45._0_8_;
    auVar55._0_8_ = auVar57._0_8_;
    auVar50._8_8_ = auVar45._8_8_;
    auVar50._0_8_ = auVar38._8_8_;
    auVar33._0_8_ = auVar59._0_8_;
    auVar33._8_4_ = *(undefined4 *)pauVar1[2];
    auVar33._12_4_ = *(undefined4 *)(pauVar1[2] + 0xc);
    bVar22 = false;
  }
  else {
    auVar32._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar54._0_4_;
    auVar32._4_4_ = _UNK_150b50da4 & auVar54._4_4_;
    auVar32._8_4_ = _UNK_150b50da8 & auVar54._8_4_;
    auVar32._12_4_ = _UNK_150b50dac & auVar54._12_4_;
    lVar9 = extractps(auVar32,1);
    lVar11 = extractps(auVar32,2);
    lVar12 = extractps(auVar32,3);
    auVar55._4_4_ = *(undefined4 *)(*pauVar1 + lVar9);
    auVar55._0_4_ = *(undefined4 *)*pauVar1;
    auVar55._12_4_ = *(undefined4 *)(*pauVar1 + lVar12);
    auVar55._8_4_ = *(undefined4 *)(*pauVar1 + lVar11);
    auVar59 = ___xmm_000000280000001c0000001000000004 & auVar54;
    auVar50._4_4_ = *(undefined4 *)(*pauVar1 + auVar59._4_4_);
    auVar50._0_4_ = *(undefined4 *)(*pauVar1 + auVar59._0_4_);
    auVar50._12_4_ = *(undefined4 *)(*pauVar1 + auVar59._12_4_);
    auVar50._8_4_ = *(undefined4 *)(*pauVar1 + auVar59._8_4_);
    auVar59 = ___xmm_0000002c000000200000001400000008 & auVar54;
    auVar33._4_4_ = *(undefined4 *)(*pauVar1 + auVar59._4_4_);
    auVar33._0_4_ = *(undefined4 *)(*pauVar1 + auVar59._0_4_);
    auVar33._12_4_ = *(undefined4 *)(*pauVar1 + auVar59._12_4_);
    auVar33._8_4_ = *(undefined4 *)(*pauVar1 + auVar59._8_4_);
    bVar22 = (bVar10 & 1) == 0;
    auVar59 = in_XMM4;
    if (bVar22) goto LAB_1402fd873;
  }
  auVar59 = auVar55;
  auVar55 = auVar59;
LAB_1402fd873:
  if (bVar22) {
    auVar59 = pblendw(in_XMM4,auVar59,3);
    auVar71 = in_XMM1;
    auVar38 = in_XMM3;
  }
  else {
    auVar59 = pblendw(in_XMM4,auVar59,3);
    auVar71 = auVar33;
    auVar38 = auVar50;
  }
  if ((bVar10 & 2) == 0) {
    auVar38 = pblendw(in_XMM3,auVar38,3);
    auVar59 = pblendw(auVar59,auVar59,0xc);
    auVar78 = auVar38;
  }
  else {
    auVar38 = pblendw(in_XMM3,auVar38,3);
    auVar59 = pblendw(auVar59,auVar55,0xc);
    auVar78 = auVar50;
  }
  if ((bVar10 & 4) == 0) {
    auVar38 = pblendw(auVar38,auVar78,0xc);
    auVar59 = pblendw(auVar59,auVar59,0x30);
    auVar78 = auVar38;
  }
  else {
    auVar38 = pblendw(auVar38,auVar78,0xc);
    auVar59 = pblendw(auVar59,auVar55,0x30);
    auVar78 = auVar50;
  }
  if ((char)bVar10 < '\0') {
    auVar38 = pblendw(auVar38,auVar78,0x30);
  }
  else {
    auVar50 = pblendw(auVar38,auVar78,0x30);
    auVar55 = auVar59;
    auVar38 = auVar50;
  }
  auVar38 = pblendw(auVar38,auVar50,0xc0);
  auVar53._0_4_ = (auVar38._0_4_ + param_7) * 0x10;
  auVar53._4_4_ = (auVar38._4_4_ + param_7) * 0x10;
  auVar53._8_4_ = (auVar38._8_4_ + param_7) * 0x10;
  auVar53._12_4_ = (auVar38._12_4_ + param_7) * 0x10;
  auVar79 = auVar54 & auVar53;
  lVar9 = param_1 + auVar79._0_4_;
  lVar11 = param_1 + auVar79._4_4_;
  bVar22 = (bVar10 & 2) != 0;
  auVar59 = pblendw(auVar59,auVar55,0xc0);
  auVar51._0_4_ = (auVar59._0_4_ + param_7) * 0x10;
  auVar51._4_4_ = (auVar59._4_4_ + param_7) * 0x10;
  auVar51._8_4_ = (auVar59._8_4_ + param_7) * 0x10;
  auVar51._12_4_ = (auVar59._12_4_ + param_7) * 0x10;
  auVar51 = auVar51 & auVar54;
  auVar49 = ___xmm_00000004000000040000000400000004 & auVar54;
  uVar14 = (ulonglong)auVar49._0_4_;
  auVar78 = ___xmm_00000008000000080000000800000008 & auVar54;
  uVar16 = (ulonglong)auVar78._0_4_;
  auVar59 = ZEXT416(*(uint *)(param_1 + auVar79._0_4_));
  if (bVar22) {
    auVar59 = insertps(auVar59,*(undefined4 *)(param_1 + auVar79._4_4_),0x10);
  }
  auVar74 = ZEXT416(*(uint *)(uVar14 + lVar9));
  if (bVar22) {
    auVar74 = insertps(auVar74,*(undefined4 *)((ulonglong)auVar49._4_4_ + lVar11),0x10);
  }
  lVar12 = (longlong)auVar51._0_4_;
  auVar77 = ZEXT416(*(uint *)(uVar16 + lVar9));
  if (bVar22) {
    auVar77 = insertps(auVar77,*(undefined4 *)((ulonglong)auVar78._4_4_ + lVar11),0x10);
  }
  lVar13 = param_1 + lVar12;
  lVar17 = param_1 + auVar51._4_4_;
  auVar71 = blendps(in_XMM1,auVar71,1);
  if ((bVar10 & 2) == 0) {
    auVar76 = ZEXT416(*(uint *)(param_1 + lVar12));
    auVar73 = ZEXT416(*(uint *)(uVar14 + lVar13));
    auVar69 = ZEXT416(*(uint *)(uVar16 + lVar13));
    auVar39 = auVar71;
  }
  else {
    auVar76 = insertps(ZEXT416(*(uint *)(param_1 + lVar12)),*(undefined4 *)(param_1 + auVar51._4_4_)
                       ,0x10);
    auVar73 = insertps(ZEXT416(*(uint *)(uVar14 + lVar13)),
                       *(undefined4 *)((ulonglong)auVar49._4_4_ + lVar17),0x10);
    auVar69 = insertps(ZEXT416(*(uint *)(uVar16 + lVar13)),
                       *(undefined4 *)((ulonglong)auVar78._4_4_ + lVar17),0x10);
    auVar39 = auVar33;
  }
  lVar12 = param_1 + auVar79._8_4_;
  if ((bVar10 & 4) != 0) {
    auVar59 = insertps(auVar59,*(undefined4 *)(param_1 + auVar79._8_4_),0x20);
    auVar74 = insertps(auVar74,*(undefined4 *)((ulonglong)auVar49._8_4_ + lVar12),0x20);
    auVar77 = insertps(auVar77,*(undefined4 *)((ulonglong)auVar78._8_4_ + lVar12),0x20);
  }
  lVar13 = param_1 + auVar51._8_4_;
  auVar39 = blendps(auVar71,auVar39,2);
  auVar71 = auVar39;
  if ((bVar10 & 4) != 0) {
    auVar76 = insertps(auVar76,*(undefined4 *)(param_1 + auVar51._8_4_),0x20);
    auVar73 = insertps(auVar73,*(undefined4 *)((ulonglong)auVar49._8_4_ + lVar13),0x20);
    auVar69 = insertps(auVar69,*(undefined4 *)((ulonglong)auVar78._8_4_ + lVar13),0x20);
    auVar71 = auVar33;
  }
  uVar6 = param_1 + auVar79._12_4_;
  if ((char)bVar10 < '\0') {
    auVar59 = insertps(auVar59,*(undefined4 *)(param_1 + auVar79._12_4_),0x30);
    auVar74 = insertps(auVar74,*(undefined4 *)((ulonglong)auVar49._12_4_ + uVar6),0x30);
  }
  if ((char)bVar10 < '\0') {
    auVar77 = insertps(auVar77,*(undefined4 *)((ulonglong)auVar78._12_4_ + uVar6),0x30);
    auVar71 = blendps(auVar39,auVar71,4);
  }
  else {
    auVar71 = blendps(auVar39,auVar71,4);
  }
  uVar7 = param_1 + auVar51._12_4_;
  auVar79 = auVar71;
  if ((char)bVar10 < '\0') {
    auVar76 = insertps(auVar76,*(undefined4 *)(param_1 + auVar51._12_4_),0x30);
    auVar73 = insertps(auVar73,*(undefined4 *)((ulonglong)auVar49._12_4_ + uVar7),0x30);
    auVar69 = insertps(auVar69,*(undefined4 *)((ulonglong)auVar78._12_4_ + uVar7),0x30);
    auVar79 = auVar33;
  }
  auVar49 = blendps(auVar71,auVar79,8);
  auVar38 = auVar38 & auVar54;
  auVar71 = ___xmm_0000000c0000000c0000000c0000000c & auVar54;
  auVar79 = insertps(ZEXT416(*(uint *)((ulonglong)auVar71._0_4_ + lVar9)),
                     *(undefined4 *)((ulonglong)auVar71._4_4_ + lVar11),0x10);
  auVar79 = insertps(auVar79,*(undefined4 *)((ulonglong)auVar71._8_4_ + lVar12),0x20);
  auVar79 = insertps(auVar79,*(undefined4 *)((ulonglong)auVar71._12_4_ + uVar6),0x30);
  bVar3 = *(byte *)(param_4 + auVar38._8_4_);
  auVar42._0_4_ = (uint)*(byte *)(param_4 + auVar38._0_4_) << 2;
  auVar42._4_4_ = (uint)*(byte *)(param_4 + auVar38._4_4_) << 2;
  auVar42._8_4_ = (uint)bVar3 << 2;
  auVar42._12_4_ = (uint)*(byte *)(param_4 + auVar38._12_4_) << 2;
  auVar38 = pmovzxdq(auVar78,auVar42);
  auVar43._0_8_ = (ulonglong)bVar3 << 2;
  auVar43._8_4_ = auVar42._12_4_;
  auVar43._12_4_ = 0;
  auVar71 = pmovsxdq(auVar71,auVar54);
  auVar38 = blendvps((undefined1  [16])0x0,auVar38,auVar71);
  auVar34._4_4_ = auVar54._8_4_;
  auVar34._0_4_ = auVar54._8_4_;
  auVar34._8_4_ = auVar54._12_4_;
  auVar34._12_4_ = auVar54._12_4_;
  auVar71 = blendvps(ZEXT816(0),auVar43,auVar34);
  auVar38 = insertps(ZEXT416(*(uint *)(param_5 + auVar38._0_8_)),
                     *(undefined4 *)(param_5 + auVar38._8_8_),0x10);
  auVar38 = insertps(auVar38,*(undefined4 *)(param_5 + auVar71._0_8_),0x20);
  auVar38 = insertps(auVar38,*(undefined4 *)(param_5 + auVar71._8_8_),0x30);
  auVar75._0_4_ = auVar76._0_4_ - auVar59._0_4_;
  auVar75._4_4_ = auVar76._4_4_ - auVar59._4_4_;
  auVar75._8_4_ = auVar76._8_4_ - auVar59._8_4_;
  auVar75._12_4_ = auVar76._12_4_ - auVar59._12_4_;
  fVar58 = auVar74._0_4_;
  auVar72._0_4_ = auVar73._0_4_ - fVar58;
  fVar62 = auVar74._4_4_;
  auVar72._4_4_ = auVar73._4_4_ - fVar62;
  fVar63 = auVar74._8_4_;
  auVar72._8_4_ = auVar73._8_4_ - fVar63;
  fVar64 = auVar74._12_4_;
  auVar72._12_4_ = auVar73._12_4_ - fVar64;
  fVar65 = auVar77._0_4_;
  auVar70._0_4_ = auVar69._0_4_ - fVar65;
  fVar66 = auVar77._4_4_;
  auVar70._4_4_ = auVar69._4_4_ - fVar66;
  fVar67 = auVar77._8_4_;
  auVar70._8_4_ = auVar69._8_4_ - fVar67;
  fVar68 = auVar77._12_4_;
  auVar70._12_4_ = auVar69._12_4_ - fVar68;
  auVar44._0_4_ = auVar72._0_4_ * auVar72._0_4_ + auVar75._0_4_ * auVar75._0_4_;
  auVar44._4_4_ = auVar72._4_4_ * auVar72._4_4_ + auVar75._4_4_ * auVar75._4_4_;
  auVar44._8_4_ = auVar72._8_4_ * auVar72._8_4_ + auVar75._8_4_ * auVar75._8_4_;
  auVar44._12_4_ = auVar72._12_4_ * auVar72._12_4_ + auVar75._12_4_ * auVar75._12_4_;
  auVar35._0_4_ = auVar70._0_4_ * auVar70._0_4_ + auVar44._0_4_;
  auVar35._4_4_ = auVar70._4_4_ * auVar70._4_4_ + auVar44._4_4_;
  auVar35._8_4_ = auVar70._8_4_ * auVar70._8_4_ + auVar44._8_4_;
  auVar35._12_4_ = auVar70._12_4_ * auVar70._12_4_ + auVar44._12_4_;
  auVar71 = sqrtps(auVar44,auVar35);
  uVar25 = -(uint)(auVar71._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
  uVar23 = -(uint)(auVar71._4_4_ < _UNK_1506895e4);
  uVar26 = -(uint)(auVar71._8_4_ < _UNK_1506895e8);
  uVar28 = -(uint)(auVar71._12_4_ < _UNK_1506895ec);
  auVar36._4_4_ = uVar23;
  auVar36._0_4_ = uVar25;
  auVar36._8_4_ = uVar26;
  auVar36._12_4_ = uVar28;
  auVar78 = divps(auVar75,auVar71);
  auVar74 = blendvps(auVar78,___xmm_3f8000003f8000003f8000003f800000,auVar36);
  auVar78 = divps(auVar72,auVar71);
  fVar41 = auVar71._0_4_ - auVar38._0_4_ * auVar49._0_4_;
  fVar46 = auVar71._4_4_ - auVar38._4_4_ * auVar49._4_4_;
  fVar47 = auVar71._8_4_ - auVar38._8_4_ * auVar49._8_4_;
  fVar48 = auVar71._12_4_ - auVar38._12_4_ * auVar49._12_4_;
  fVar81 = param_3 * fVar41;
  fVar82 = param_3 * fVar46;
  fVar83 = param_3 * fVar47;
  param_3 = param_3 * fVar48;
  uVar18 = -(uint)(fVar41 < 0.0);
  uVar24 = -(uint)(fVar46 < 0.0);
  uVar27 = -(uint)(fVar47 < 0.0);
  uVar29 = -(uint)(fVar48 < 0.0);
  auVar52._0_4_ = (float)(~uVar18 & (uint)(auVar74._0_4_ * fVar81)) + auVar59._0_4_;
  auVar52._4_4_ = (float)(~uVar24 & (uint)(auVar74._4_4_ * fVar82)) + auVar59._4_4_;
  auVar52._8_4_ = (float)(~uVar27 & (uint)(auVar74._8_4_ * fVar83)) + auVar59._8_4_;
  auVar52._12_4_ = (float)(~uVar29 & (uint)(auVar74._12_4_ * param_3)) + auVar59._12_4_;
  if ((bVar10 & 1) != 0) {
    *(float *)(param_1 + auVar53._0_4_) = auVar52._0_4_;
  }
  fVar41 = (float)(~uVar25 & auVar78._0_4_);
  fVar46 = (float)(~uVar23 & auVar78._4_4_);
  fVar47 = (float)(~uVar26 & auVar78._8_4_);
  fVar48 = (float)(~uVar28 & auVar78._12_4_);
  if ((bVar10 & 2) != 0) {
    uVar6 = extractps(auVar52,1);
    *(undefined8 *)(param_1 + auVar53._4_4_) = uVar6;
  }
  if ((bVar10 & 4) == 0) {
    fVar41 = (float)(~uVar18 & (uint)(fVar41 * fVar81));
    fVar46 = (float)(~uVar24 & (uint)(fVar46 * fVar82));
    fVar47 = (float)(~uVar27 & (uint)(fVar47 * fVar83));
    fVar48 = (float)(~uVar29 & (uint)(fVar48 * param_3));
  }
  else {
    uVar6 = extractps(auVar52,2);
    *(undefined8 *)(param_1 + auVar53._8_4_) = uVar6;
    fVar41 = (float)(~uVar18 & (uint)(fVar41 * fVar81));
    fVar46 = (float)(~uVar24 & (uint)(fVar46 * fVar82));
    fVar47 = (float)(~uVar27 & (uint)(fVar47 * fVar83));
    fVar48 = (float)(~uVar29 & (uint)(fVar48 * param_3));
  }
  if ((char)bVar10 < '\0') {
    uVar6 = extractps(auVar52,3);
    *(undefined8 *)(param_1 + auVar53._12_4_) = uVar6;
    auVar59 = divps(auVar70,auVar71);
    auVar60._0_4_ = fVar58 + fVar41;
    auVar60._4_4_ = fVar62 + fVar46;
    auVar60._8_4_ = fVar63 + fVar47;
    auVar60._12_4_ = fVar64 + fVar48;
  }
  else {
    auVar59 = divps(auVar70,auVar71);
    auVar60._0_4_ = fVar58 + fVar41;
    auVar60._4_4_ = fVar62 + fVar46;
    auVar60._8_4_ = fVar63 + fVar47;
    auVar60._12_4_ = fVar64 + fVar48;
  }
  if ((bVar10 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar53._0_4_) = auVar60._0_4_;
  }
  if ((bVar10 & 2) != 0) {
    uVar6 = extractps(auVar60,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar53._4_4_) = uVar6;
  }
  if ((bVar10 & 4) != 0) {
    uVar6 = extractps(auVar60,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar53._8_4_) = uVar6;
  }
  uVar5 = ~uVar29 & (uint)((float)(~uVar28 & auVar59._12_4_) * param_3);
  uVar4 = ~uVar27 & (uint)((float)(~uVar26 & auVar59._8_4_) * fVar83);
  uVar2 = ~uVar24 & (uint)((float)(~uVar23 & auVar59._4_4_) * fVar82);
  uVar40 = ~uVar18 & (uint)((float)(~uVar25 & auVar59._0_4_) * fVar81);
  if ((char)bVar10 < '\0') {
    uVar6 = extractps(auVar60,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar53._12_4_) = uVar6;
    auVar56._0_4_ = fVar65 + (float)uVar40;
    auVar56._4_4_ = fVar66 + (float)uVar2;
    auVar56._8_4_ = fVar67 + (float)uVar4;
    auVar56._12_4_ = fVar68 + (float)uVar5;
  }
  else {
    auVar56._0_4_ = fVar65 + (float)uVar40;
    auVar56._4_4_ = fVar66 + (float)uVar2;
    auVar56._8_4_ = fVar67 + (float)uVar4;
    auVar56._12_4_ = fVar68 + (float)uVar5;
  }
  if ((bVar10 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar53._0_4_) = auVar56._0_4_;
  }
  if ((bVar10 & 2) != 0) {
    uVar6 = extractps(auVar56,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar53._4_4_) = uVar6;
  }
  if ((bVar10 & 4) != 0) {
    uVar6 = extractps(auVar56,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar53._8_4_) = uVar6;
  }
  if ((char)bVar10 < '\0') {
    uVar6 = extractps(auVar56,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar53._12_4_) = uVar6;
  }
  if ((bVar10 & 1) != 0) {
    *(int *)(param_1 + 0xc + (longlong)auVar53._0_4_) = auVar79._0_4_;
  }
  if ((bVar10 & 2) != 0) {
    uVar6 = extractps(auVar79,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar53._4_4_) = uVar6;
  }
  if ((bVar10 & 4) != 0) {
    uVar6 = extractps(auVar79,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar53._8_4_) = uVar6;
  }
  if ((char)bVar10 < '\0') {
    uVar6 = extractps(auVar79,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar53._12_4_) = uVar6;
  }
  return;
}

// ApplyLongRangeConstraintsStiffnessScaleWeightmaps_sse4 @ 1402fe150

/* WARNING: Removing unreachable block (ram,0x0001402ff013) */
/* WARNING: Removing unreachable block (ram,0x0001402fed4a) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLongRangeConstraintsStiffnessScaleWeightmaps_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,uint param_7,int param_8)

{
  undefined1 (*pauVar1) [16];
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  byte bVar9;
  float *pfVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  bool bVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined4 uVar40;
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
  float fVar54;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined1 auVar55 [16];
  float fVar59;
  float fVar62;
  float fVar63;
  undefined1 auVar60 [16];
  float fVar64;
  undefined1 auVar61 [16];
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
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  
  uVar22 = param_7 + 3;
  if (-1 < (int)param_7) {
    uVar22 = param_7;
  }
  if ((int)(uVar22 & 0xfffffffc) < 1) {
    uVar12 = 0;
    if ((int)param_7 < 1) {
      return;
    }
  }
  else {
    pfVar10 = (float *)(param_2 + 0x20);
    uVar12 = 0;
    do {
      auVar49 = *(undefined1 (*) [16])(pfVar10 + -8);
      auVar36 = *(undefined1 (*) [16])(pfVar10 + -4);
      uVar40 = auVar36._0_4_;
      auVar32._4_4_ = uVar40;
      auVar32._0_4_ = uVar40;
      auVar32._8_4_ = uVar40;
      auVar32._12_4_ = uVar40;
      auVar50._8_4_ = auVar49._8_4_;
      auVar50._12_4_ = auVar49._12_4_;
      auVar65._0_8_ = CONCAT44(auVar50._12_4_,auVar49._0_4_);
      auVar65._8_4_ = auVar49._4_4_;
      auVar65._12_4_ = auVar50._12_4_;
      auVar32 = pblendw(auVar32,auVar65,0x3f);
      auVar67._0_8_ = CONCAT44(pfVar10[1],auVar36._8_4_);
      auVar67._8_4_ = auVar36._12_4_;
      auVar67._12_4_ = pfVar10[2];
      in_XMM2._8_8_ = auVar67._0_8_;
      in_XMM2._0_8_ = auVar65._0_8_;
      in_XMM1._8_8_ = auVar67._8_8_;
      in_XMM1._0_8_ = auVar32._8_8_;
      auVar50._0_8_ = auVar49._8_8_;
      lVar14 = (longlong)((auVar49._0_4_ + param_8) * 0x10);
      lVar16 = (longlong)((auVar50._12_4_ + param_8) * 0x10);
      auVar49 = insertps(ZEXT416(*(uint *)(param_1 + lVar14)),*(undefined4 *)(param_1 + lVar16),0x10
                        );
      auVar67 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar14)),
                         *(undefined4 *)(param_1 + 4 + lVar16),0x10);
      auVar65 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar14)),
                         *(undefined4 *)(param_1 + 8 + lVar16),0x10);
      lVar14 = (longlong)((auVar36._8_4_ + param_8) * 0x10);
      auVar49 = insertps(auVar49,*(undefined4 *)(param_1 + lVar14),0x20);
      auVar68 = insertps(auVar67,*(undefined4 *)(param_1 + 4 + lVar14),0x20);
      lVar16 = (longlong)(((int)pfVar10[1] + param_8) * 0x10);
      auVar65 = insertps(auVar65,*(undefined4 *)(param_1 + 8 + lVar14),0x20);
      auVar67 = insertps(auVar49,*(undefined4 *)(param_1 + lVar16),0x30);
      auVar69 = insertps(auVar68,*(undefined4 *)(param_1 + 4 + lVar16),0x30);
      auVar68 = insertps(auVar65,*(undefined4 *)(param_1 + 8 + lVar16),0x30);
      lVar15 = (longlong)((auVar32._8_4_ + param_8) * 0x10);
      lVar17 = (longlong)((auVar32._12_4_ + param_8) * 0x10);
      lVar14 = (longlong)((auVar36._12_4_ + param_8) * 0x10);
      auVar32 = insertps(ZEXT416(*(uint *)(param_4 +
                                          (ulonglong)*(byte *)(param_3 + (int)pfVar10[-7]) * 4)),
                         *(undefined4 *)
                          (param_4 + (ulonglong)((uint)*(byte *)(param_3 + (int)pfVar10[-4]) * 4)),
                         0x10);
      auVar49 = insertps(ZEXT416(*(uint *)(param_6 +
                                          (ulonglong)*(byte *)(param_5 + (int)pfVar10[-7]) * 4)),
                         *(undefined4 *)
                          (param_6 + (ulonglong)((uint)*(byte *)(param_5 + (int)pfVar10[-4]) * 4)),
                         0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)
                                  (param_4 + (ulonglong)*(byte *)(param_3 + (int)pfVar10[-1]) * 4),
                         0x20);
      auVar49 = insertps(auVar49,*(undefined4 *)
                                  (param_6 + (ulonglong)*(byte *)(param_5 + (int)pfVar10[-1]) * 4),
                         0x20);
      auVar60 = insertps(auVar32,*(undefined4 *)
                                  (param_4 + (ulonglong)*(byte *)(param_3 + (int)pfVar10[2]) * 4),
                         0x30);
      auVar65 = insertps(auVar49,*(undefined4 *)
                                  (param_6 + (ulonglong)*(byte *)(param_5 + (int)pfVar10[2]) * 4),
                         0x30);
      lVar16 = (longlong)(((int)pfVar10[2] + param_8) * 0x10);
      auVar49 = insertps(ZEXT416(*(uint *)(param_1 + lVar15)),*(undefined4 *)(param_1 + lVar17),0x10
                        );
      auVar32 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar15)),
                         *(undefined4 *)(param_1 + 4 + lVar17),0x10);
      auVar49 = insertps(auVar49,*(undefined4 *)(param_1 + lVar14),0x20);
      auVar73 = insertps(auVar32,*(undefined4 *)(param_1 + 4 + lVar14),0x20);
      auVar32 = insertps(auVar49,*(undefined4 *)(param_1 + lVar16),0x30);
      auVar49 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar15)),
                         *(undefined4 *)(param_1 + 8 + lVar17),0x10);
      auVar74 = insertps(auVar73,*(undefined4 *)(param_1 + 4 + lVar16),0x30);
      auVar49 = insertps(auVar49,*(undefined4 *)(param_1 + 8 + lVar14),0x20);
      auVar71 = insertps(auVar49,*(undefined4 *)(param_1 + 8 + lVar16),0x30);
      auVar36 = pblendw(auVar50,auVar36,0xc);
      auVar73._0_4_ = auVar67._0_4_ - auVar32._0_4_;
      auVar73._4_4_ = auVar67._4_4_ - auVar32._4_4_;
      auVar73._8_4_ = auVar67._8_4_ - auVar32._8_4_;
      auVar73._12_4_ = auVar67._12_4_ - auVar32._12_4_;
      auVar46._0_4_ = auVar69._0_4_ - auVar74._0_4_;
      auVar46._4_4_ = auVar69._4_4_ - auVar74._4_4_;
      auVar46._8_4_ = auVar69._8_4_ - auVar74._8_4_;
      auVar46._12_4_ = auVar69._12_4_ - auVar74._12_4_;
      auVar37._0_4_ = auVar68._0_4_ - auVar71._0_4_;
      auVar37._4_4_ = auVar68._4_4_ - auVar71._4_4_;
      auVar37._8_4_ = auVar68._8_4_ - auVar71._8_4_;
      auVar37._12_4_ = auVar68._12_4_ - auVar71._12_4_;
      auVar69._0_4_ = auVar46._0_4_ * auVar46._0_4_ + auVar73._0_4_ * auVar73._0_4_;
      auVar69._4_4_ = auVar46._4_4_ * auVar46._4_4_ + auVar73._4_4_ * auVar73._4_4_;
      auVar69._8_4_ = auVar46._8_4_ * auVar46._8_4_ + auVar73._8_4_ * auVar73._8_4_;
      auVar69._12_4_ = auVar46._12_4_ * auVar46._12_4_ + auVar73._12_4_ * auVar73._12_4_;
      in_XMM3._0_8_ = auVar36._0_8_;
      in_XMM3._8_4_ = *pfVar10;
      in_XMM3._12_4_ = pfVar10[3];
      auVar68._0_4_ = auVar37._0_4_ * auVar37._0_4_ + auVar69._0_4_;
      auVar68._4_4_ = auVar37._4_4_ * auVar37._4_4_ + auVar69._4_4_;
      auVar68._8_4_ = auVar37._8_4_ * auVar37._8_4_ + auVar69._8_4_;
      auVar68._12_4_ = auVar37._12_4_ * auVar37._12_4_ + auVar69._12_4_;
      auVar67 = sqrtps(auVar69,auVar68);
      uVar20 = -(uint)(auVar67._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
      uVar23 = -(uint)(auVar67._4_4_ < _UNK_1506895e4);
      uVar25 = -(uint)(auVar67._8_4_ < _UNK_1506895e8);
      uVar27 = -(uint)(auVar67._12_4_ < _UNK_1506895ec);
      auVar49._4_4_ = uVar23;
      auVar49._0_4_ = uVar20;
      auVar49._8_4_ = uVar25;
      auVar49._12_4_ = uVar27;
      auVar50 = divps(auVar73,auVar67);
      auVar49 = blendvps(auVar50,___xmm_3f8000003f8000003f8000003f800000,auVar49);
      auVar68 = divps(auVar46,auVar67);
      uVar40 = *(undefined4 *)(param_1 + 0xc + lVar15);
      auVar50 = divps(auVar37,auVar67);
      uVar3 = *(undefined4 *)(param_1 + 0xc + lVar17);
      fVar54 = auVar67._0_4_ - auVar65._0_4_ * auVar36._0_4_;
      fVar56 = auVar67._4_4_ - auVar65._4_4_ * auVar36._4_4_;
      fVar57 = auVar67._8_4_ - auVar65._8_4_ * *pfVar10;
      fVar58 = auVar67._12_4_ - auVar65._12_4_ * pfVar10[3];
      uVar4 = *(undefined4 *)(param_1 + 0xc + lVar14);
      fVar59 = auVar60._0_4_ * fVar54;
      fVar62 = auVar60._4_4_ * fVar56;
      fVar63 = auVar60._8_4_ * fVar57;
      fVar64 = auVar60._12_4_ * fVar58;
      uVar21 = -(uint)(fVar54 < __xmm_00000000000000000000000000000000);
      uVar24 = -(uint)(fVar56 < _UNK_150aa8f64);
      uVar26 = -(uint)(fVar57 < (float)DAT_150aa8f68);
      uVar28 = -(uint)(fVar58 < DAT_150aa8f68._4_4_);
      uVar7 = *(undefined4 *)(param_1 + 0xc + lVar16);
      auVar60._0_4_ = (float)(~uVar21 & (uint)(auVar49._0_4_ * fVar59)) + auVar32._0_4_;
      auVar60._4_4_ = (float)(~uVar24 & (uint)(auVar49._4_4_ * fVar62)) + auVar32._4_4_;
      auVar60._8_4_ = (float)(~uVar26 & (uint)(auVar49._8_4_ * fVar63)) + auVar32._8_4_;
      auVar60._12_4_ = (float)(~uVar28 & (uint)(auVar49._12_4_ * fVar64)) + auVar32._12_4_;
      *(float *)(param_1 + lVar15) = auVar60._0_4_;
      uVar8 = extractps(auVar60,1);
      *(undefined8 *)(param_1 + lVar17) = uVar8;
      uVar8 = extractps(auVar60,2);
      *(undefined8 *)(param_1 + lVar14) = uVar8;
      auVar36._0_4_ =
           (float)(~uVar21 & (uint)((float)(~uVar20 & auVar68._0_4_) * fVar59)) + auVar74._0_4_;
      auVar36._4_4_ =
           (float)(~uVar24 & (uint)((float)(~uVar23 & auVar68._4_4_) * fVar62)) + auVar74._4_4_;
      auVar36._8_4_ =
           (float)(~uVar26 & (uint)((float)(~uVar25 & auVar68._8_4_) * fVar63)) + auVar74._8_4_;
      auVar36._12_4_ =
           (float)(~uVar28 & (uint)((float)(~uVar27 & auVar68._12_4_) * fVar64)) + auVar74._12_4_;
      uVar8 = extractps(auVar60,3);
      *(undefined8 *)(param_1 + lVar16) = uVar8;
      *(float *)(param_1 + 4 + lVar15) = auVar36._0_4_;
      uVar8 = extractps(auVar36,1);
      *(undefined8 *)(param_1 + 4 + lVar17) = uVar8;
      uVar8 = extractps(auVar36,2);
      *(undefined8 *)(param_1 + 4 + lVar14) = uVar8;
      auVar74._0_4_ =
           (float)(~uVar21 & (uint)(fVar59 * (float)(~uVar20 & auVar50._0_4_))) + auVar71._0_4_;
      auVar74._4_4_ =
           (float)(~uVar24 & (uint)(fVar62 * (float)(~uVar23 & auVar50._4_4_))) + auVar71._4_4_;
      auVar74._8_4_ =
           (float)(~uVar26 & (uint)(fVar63 * (float)(~uVar25 & auVar50._8_4_))) + auVar71._8_4_;
      auVar74._12_4_ =
           (float)(~uVar28 & (uint)(fVar64 * (float)(~uVar27 & auVar50._12_4_))) + auVar71._12_4_;
      uVar8 = extractps(auVar36,3);
      *(undefined8 *)(param_1 + 4 + lVar16) = uVar8;
      *(float *)(param_1 + 8 + lVar15) = auVar74._0_4_;
      uVar8 = extractps(auVar74,1);
      *(undefined8 *)(param_1 + 8 + lVar17) = uVar8;
      uVar8 = extractps(auVar74,2);
      *(undefined8 *)(param_1 + 8 + lVar14) = uVar8;
      uVar8 = extractps(auVar74,3);
      *(undefined8 *)(param_1 + 8 + lVar16) = uVar8;
      *(undefined4 *)(param_1 + 0xc + lVar15) = uVar40;
      *(undefined4 *)(param_1 + 0xc + lVar17) = uVar3;
      *(undefined4 *)(param_1 + 0xc + lVar14) = uVar4;
      *(undefined4 *)(param_1 + 0xc + lVar16) = uVar7;
      pfVar10 = pfVar10 + 0xc;
      uVar12 = uVar12 + 4;
    } while ((int)uVar12 < (int)(uVar22 & 0xfffffffc));
    if ((int)param_7 <= (int)uVar12) {
      return;
    }
  }
  auVar71._0_4_ =
       -(uint)((int)(uVar12 | (uint)__xmm_00000003000000020000000100000000) < (int)param_7);
  auVar71._4_4_ =
       -(uint)((int)(uVar12 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_7);
  auVar71._8_4_ = -(uint)((int)(uVar12 | _UNK_150631e08) < (int)param_7);
  auVar71._12_4_ = -(uint)((int)(uVar12 | _UNK_150631e0c) < (int)param_7);
  pauVar1 = (undefined1 (*) [16])(param_2 + (ulonglong)uVar12 * 0xc);
  iVar13 = movmskps(uVar12,auVar71);
  bVar9 = (char)((char)iVar13 << 4) >> 4;
  if (iVar13 == 0xf) {
    auVar49 = *pauVar1;
    auVar36 = pauVar1[1];
    uVar40 = auVar36._0_4_;
    auVar45._4_4_ = uVar40;
    auVar45._0_4_ = uVar40;
    auVar45._8_4_ = uVar40;
    auVar45._12_4_ = uVar40;
    uVar40 = auVar49._12_4_;
    auVar72._0_8_ = CONCAT44(uVar40,auVar49._0_4_);
    auVar72._8_4_ = auVar49._4_4_;
    auVar72._12_4_ = uVar40;
    auVar32 = pblendw(auVar45,auVar72,0x3f);
    auVar42._0_8_ = auVar49._8_8_;
    auVar42._8_4_ = auVar49._8_4_;
    auVar42._12_4_ = uVar40;
    auVar49 = pblendw(auVar42,auVar36,0xc);
    auVar48._0_8_ = CONCAT44(*(undefined4 *)(pauVar1[2] + 4),auVar36._8_4_);
    auVar48._8_4_ = auVar36._12_4_;
    auVar48._12_4_ = *(undefined4 *)(pauVar1[2] + 8);
    auVar70._8_8_ = auVar48._0_8_;
    auVar70._0_8_ = auVar72._0_8_;
    auVar33._8_8_ = auVar48._8_8_;
    auVar33._0_8_ = auVar32._8_8_;
    auVar41._0_8_ = auVar49._0_8_;
    auVar41._8_4_ = *(undefined4 *)pauVar1[2];
    auVar41._12_4_ = *(undefined4 *)(pauVar1[2] + 0xc);
    bVar19 = false;
  }
  else {
    auVar29._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar71._0_4_;
    auVar29._4_4_ = _UNK_150b50da4 & auVar71._4_4_;
    auVar29._8_4_ = _UNK_150b50da8 & auVar71._8_4_;
    auVar29._12_4_ = _UNK_150b50dac & auVar71._12_4_;
    lVar16 = extractps(auVar29,1);
    lVar15 = extractps(auVar29,2);
    lVar14 = extractps(auVar29,3);
    auVar70._4_4_ = *(undefined4 *)(*pauVar1 + lVar16);
    auVar70._0_4_ = *(undefined4 *)*pauVar1;
    auVar70._12_4_ = *(undefined4 *)(*pauVar1 + lVar14);
    auVar70._8_4_ = *(undefined4 *)(*pauVar1 + lVar15);
    auVar49 = ___xmm_000000280000001c0000001000000004 & auVar71;
    auVar33._4_4_ = *(undefined4 *)(*pauVar1 + auVar49._4_4_);
    auVar33._0_4_ = *(undefined4 *)(*pauVar1 + auVar49._0_4_);
    auVar33._12_4_ = *(undefined4 *)(*pauVar1 + auVar49._12_4_);
    auVar33._8_4_ = *(undefined4 *)(*pauVar1 + auVar49._8_4_);
    auVar49 = ___xmm_0000002c000000200000001400000008 & auVar71;
    auVar41._4_4_ = *(undefined4 *)(*pauVar1 + auVar49._4_4_);
    auVar41._0_4_ = *(undefined4 *)(*pauVar1 + auVar49._0_4_);
    auVar41._12_4_ = *(undefined4 *)(*pauVar1 + auVar49._12_4_);
    auVar41._8_4_ = *(undefined4 *)(*pauVar1 + auVar49._8_4_);
    bVar19 = (bVar9 & 1) == 0;
    auVar49 = in_XMM2;
    if (bVar19) goto LAB_1402fe6a6;
  }
  auVar49 = auVar70;
LAB_1402fe6a6:
  if (bVar19) {
    auVar49 = pblendw(in_XMM2,auVar49,3);
    auVar36 = in_XMM3;
    auVar32 = in_XMM1;
  }
  else {
    auVar49 = pblendw(in_XMM2,auVar49,3);
    auVar36 = auVar41;
    auVar32 = auVar33;
  }
  if ((bVar9 & 2) == 0) {
    auVar32 = pblendw(in_XMM1,auVar32,3);
    auVar49 = pblendw(auVar49,auVar49,0xc);
    auVar65 = auVar32;
  }
  else {
    auVar32 = pblendw(in_XMM1,auVar32,3);
    auVar49 = pblendw(auVar49,auVar70,0xc);
    auVar65 = auVar33;
  }
  if ((bVar9 & 4) == 0) {
    auVar32 = pblendw(auVar32,auVar65,0xc);
    auVar49 = pblendw(auVar49,auVar49,0x30);
    auVar65 = auVar32;
  }
  else {
    auVar32 = pblendw(auVar32,auVar65,0xc);
    auVar49 = pblendw(auVar49,auVar70,0x30);
    auVar65 = auVar33;
  }
  if ((char)bVar9 < '\0') {
    auVar32 = pblendw(auVar32,auVar65,0x30);
  }
  else {
    auVar33 = pblendw(auVar32,auVar65,0x30);
    auVar70 = auVar49;
    auVar32 = auVar33;
  }
  auVar65 = pblendw(auVar32,auVar33,0xc0);
  auVar39._0_4_ = (auVar65._0_4_ + param_8) * 0x10;
  auVar39._4_4_ = (auVar65._4_4_ + param_8) * 0x10;
  auVar39._8_4_ = (auVar65._8_4_ + param_8) * 0x10;
  auVar39._12_4_ = (auVar65._12_4_ + param_8) * 0x10;
  auVar67 = auVar71 & auVar39;
  lVar14 = param_1 + auVar67._0_4_;
  lVar16 = param_1 + auVar67._4_4_;
  bVar19 = (bVar9 & 2) != 0;
  auVar49 = pblendw(auVar49,auVar70,0xc0);
  auVar34._0_4_ = (auVar49._0_4_ + param_8) * 0x10;
  auVar34._4_4_ = (auVar49._4_4_ + param_8) * 0x10;
  auVar34._8_4_ = (auVar49._8_4_ + param_8) * 0x10;
  auVar34._12_4_ = (auVar49._12_4_ + param_8) * 0x10;
  auVar34 = auVar34 & auVar71;
  auVar50 = ___xmm_00000004000000040000000400000004 & auVar71;
  uVar18 = (ulonglong)auVar50._0_4_;
  auVar32 = ___xmm_00000008000000080000000800000008 & auVar71;
  uVar11 = (ulonglong)auVar32._0_4_;
  auVar49 = ZEXT416(*(uint *)(param_1 + auVar67._0_4_));
  if (bVar19) {
    auVar49 = insertps(auVar49,*(undefined4 *)(param_1 + auVar67._4_4_),0x10);
  }
  auVar68 = ZEXT416(*(uint *)(uVar18 + lVar14));
  if (bVar19) {
    auVar68 = insertps(auVar68,*(undefined4 *)((ulonglong)auVar50._4_4_ + lVar16),0x10);
  }
  lVar15 = (longlong)auVar34._0_4_;
  auVar60 = ZEXT416(*(uint *)(uVar11 + lVar14));
  if (bVar19) {
    auVar60 = insertps(auVar60,*(undefined4 *)((ulonglong)auVar32._4_4_ + lVar16),0x10);
  }
  lVar17 = param_1 + lVar15;
  lVar2 = param_1 + auVar34._4_4_;
  auVar36 = blendps(in_XMM3,auVar36,1);
  if ((bVar9 & 2) == 0) {
    auVar74 = ZEXT416(*(uint *)(param_1 + lVar15));
    auVar69 = ZEXT416(*(uint *)(uVar18 + lVar17));
    auVar73 = ZEXT416(*(uint *)(uVar11 + lVar17));
    auVar37 = auVar36;
  }
  else {
    auVar74 = insertps(ZEXT416(*(uint *)(param_1 + lVar15)),*(undefined4 *)(param_1 + auVar34._4_4_)
                       ,0x10);
    auVar69 = insertps(ZEXT416(*(uint *)(uVar18 + lVar17)),
                       *(undefined4 *)((ulonglong)auVar50._4_4_ + lVar2),0x10);
    auVar73 = insertps(ZEXT416(*(uint *)(uVar11 + lVar17)),
                       *(undefined4 *)((ulonglong)auVar32._4_4_ + lVar2),0x10);
    auVar37 = auVar41;
  }
  lVar15 = param_1 + auVar67._8_4_;
  if ((bVar9 & 4) != 0) {
    auVar49 = insertps(auVar49,*(undefined4 *)(param_1 + auVar67._8_4_),0x20);
    auVar68 = insertps(auVar68,*(undefined4 *)((ulonglong)auVar50._8_4_ + lVar15),0x20);
    auVar60 = insertps(auVar60,*(undefined4 *)((ulonglong)auVar32._8_4_ + lVar15),0x20);
  }
  lVar17 = param_1 + auVar34._8_4_;
  auVar37 = blendps(auVar36,auVar37,2);
  auVar36 = auVar37;
  if ((bVar9 & 4) != 0) {
    auVar74 = insertps(auVar74,*(undefined4 *)(param_1 + auVar34._8_4_),0x20);
    auVar69 = insertps(auVar69,*(undefined4 *)((ulonglong)auVar50._8_4_ + lVar17),0x20);
    auVar73 = insertps(auVar73,*(undefined4 *)((ulonglong)auVar32._8_4_ + lVar17),0x20);
    auVar36 = auVar41;
  }
  uVar8 = param_1 + auVar67._12_4_;
  if ((char)bVar9 < '\0') {
    auVar49 = insertps(auVar49,*(undefined4 *)(param_1 + auVar67._12_4_),0x30);
    auVar68 = insertps(auVar68,*(undefined4 *)((ulonglong)auVar50._12_4_ + uVar8),0x30);
  }
  if ((char)bVar9 < '\0') {
    auVar60 = insertps(auVar60,*(undefined4 *)((ulonglong)auVar32._12_4_ + uVar8),0x30);
    auVar36 = blendps(auVar37,auVar36,4);
  }
  else {
    auVar36 = blendps(auVar37,auVar36,4);
  }
  lVar17 = param_1 + auVar34._12_4_;
  auVar67 = auVar36;
  if ((char)bVar9 < '\0') {
    auVar74 = insertps(auVar74,*(undefined4 *)(param_1 + auVar34._12_4_),0x30);
    auVar69 = insertps(auVar69,*(undefined4 *)((ulonglong)auVar50._12_4_ + lVar17),0x30);
    auVar67 = auVar41;
  }
  if ((char)bVar9 < '\0') {
    auVar73 = insertps(auVar73,*(undefined4 *)((ulonglong)auVar32._12_4_ + lVar17),0x30);
  }
  auVar65 = auVar65 & auVar71;
  auVar72 = ___xmm_0000000c0000000c0000000c0000000c & auVar71;
  auVar32 = insertps(ZEXT416(*(uint *)((ulonglong)auVar72._0_4_ + lVar14)),
                     *(undefined4 *)((ulonglong)auVar72._4_4_ + lVar16),0x10);
  auVar70 = insertps(auVar32,*(undefined4 *)((ulonglong)auVar72._8_4_ + lVar15),0x20);
  bVar5 = *(byte *)(param_3 + auVar65._8_4_);
  bVar6 = *(byte *)(param_5 + auVar65._8_4_);
  auVar51._0_4_ = (uint)*(byte *)(param_3 + auVar65._0_4_) << 2;
  auVar51._4_4_ = (uint)*(byte *)(param_3 + auVar65._4_4_) << 2;
  auVar51._8_4_ = (uint)bVar5 << 2;
  auVar51._12_4_ = (uint)*(byte *)(param_3 + auVar65._12_4_) << 2;
  auVar50 = pmovzxdq(auVar34,auVar51);
  auVar32 = pmovsxdq(auVar65,auVar71);
  auVar46 = blendvps(ZEXT816(0),auVar50,auVar32);
  auVar52._0_8_ = (ulonglong)bVar5 << 2;
  auVar52._8_4_ = auVar51._12_4_;
  auVar52._12_4_ = 0;
  auVar35._4_4_ = auVar71._8_4_;
  auVar35._0_4_ = auVar71._8_4_;
  auVar35._8_4_ = auVar71._12_4_;
  auVar35._12_4_ = auVar71._12_4_;
  auVar50 = blendvps(ZEXT816(0),auVar52,auVar35);
  auVar43._0_4_ = (uint)*(byte *)(param_5 + auVar65._0_4_) << 2;
  auVar43._4_4_ = (uint)*(byte *)(param_5 + auVar65._4_4_) << 2;
  auVar43._8_4_ = (uint)bVar6 << 2;
  auVar43._12_4_ = (uint)*(byte *)(param_5 + auVar65._12_4_) << 2;
  auVar65 = pmovzxdq(auVar52,auVar43);
  auVar37 = blendvps(ZEXT816(0),auVar65,auVar32);
  auVar71 = insertps(auVar70,*(undefined4 *)((ulonglong)auVar72._12_4_ + uVar8),0x30);
  auVar32 = insertps(ZEXT416(*(uint *)(param_4 + auVar46._0_8_)),
                     *(undefined4 *)(param_4 + auVar46._8_8_),0x10);
  auVar32 = insertps(auVar32,*(undefined4 *)(param_4 + auVar50._0_8_),0x20);
  auVar32 = insertps(auVar32,*(undefined4 *)(param_4 + auVar50._8_8_),0x30);
  auVar44._0_8_ = (ulonglong)bVar6 << 2;
  auVar44._8_4_ = auVar43._12_4_;
  auVar44._12_4_ = 0;
  auVar65 = blendvps(ZEXT816(0),auVar44,auVar35);
  auVar50 = insertps(ZEXT416(*(uint *)(param_6 + auVar37._0_8_)),
                     *(undefined4 *)(param_6 + auVar37._8_8_),0x10);
  auVar50 = insertps(auVar50,*(undefined4 *)(param_6 + auVar65._0_8_),0x20);
  auVar50 = insertps(auVar50,*(undefined4 *)(param_6 + auVar65._8_8_),0x30);
  auVar36 = blendps(auVar36,auVar67,8);
  local_128 = auVar49._0_4_;
  fStack_124 = auVar49._4_4_;
  fStack_120 = auVar49._8_4_;
  fStack_11c = auVar49._12_4_;
  auVar66._0_4_ = auVar74._0_4_ - local_128;
  auVar66._4_4_ = auVar74._4_4_ - fStack_124;
  auVar66._8_4_ = auVar74._8_4_ - fStack_120;
  auVar66._12_4_ = auVar74._12_4_ - fStack_11c;
  local_118 = auVar68._0_4_;
  fStack_114 = auVar68._4_4_;
  fStack_110 = auVar68._8_4_;
  fStack_10c = auVar68._12_4_;
  auVar61._0_4_ = auVar69._0_4_ - local_118;
  auVar61._4_4_ = auVar69._4_4_ - fStack_114;
  auVar61._8_4_ = auVar69._8_4_ - fStack_110;
  auVar61._12_4_ = auVar69._12_4_ - fStack_10c;
  local_108 = auVar60._0_4_;
  fStack_104 = auVar60._4_4_;
  fStack_100 = auVar60._8_4_;
  fStack_fc = auVar60._12_4_;
  auVar55._0_4_ = auVar73._0_4_ - local_108;
  auVar55._4_4_ = auVar73._4_4_ - fStack_104;
  auVar55._8_4_ = auVar73._8_4_ - fStack_100;
  auVar55._12_4_ = auVar73._12_4_ - fStack_fc;
  auVar30._0_4_ =
       auVar55._0_4_ * auVar55._0_4_ + auVar61._0_4_ * auVar61._0_4_ + auVar66._0_4_ * auVar66._0_4_
  ;
  auVar30._4_4_ =
       auVar55._4_4_ * auVar55._4_4_ + auVar61._4_4_ * auVar61._4_4_ + auVar66._4_4_ * auVar66._4_4_
  ;
  auVar30._8_4_ =
       auVar55._8_4_ * auVar55._8_4_ + auVar61._8_4_ * auVar61._8_4_ + auVar66._8_4_ * auVar66._8_4_
  ;
  auVar30._12_4_ =
       auVar55._12_4_ * auVar55._12_4_ +
       auVar61._12_4_ * auVar61._12_4_ + auVar66._12_4_ * auVar66._12_4_;
  auVar49 = sqrtps(auVar65,auVar30);
  uVar22 = -(uint)(auVar49._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
  uVar20 = -(uint)(auVar49._4_4_ < _UNK_1506895e4);
  uVar23 = -(uint)(auVar49._8_4_ < _UNK_1506895e8);
  uVar25 = -(uint)(auVar49._12_4_ < _UNK_1506895ec);
  auVar31._4_4_ = uVar20;
  auVar31._0_4_ = uVar22;
  auVar31._8_4_ = uVar23;
  auVar31._12_4_ = uVar25;
  auVar67 = divps(auVar66,auVar49);
  auVar65 = divps(auVar61,auVar49);
  auVar67 = blendvps(auVar67,___xmm_3f8000003f8000003f8000003f800000,auVar31);
  fVar59 = auVar49._0_4_ - auVar50._0_4_ * auVar36._0_4_;
  fVar62 = auVar49._4_4_ - auVar50._4_4_ * auVar36._4_4_;
  fVar63 = auVar49._8_4_ - auVar50._8_4_ * auVar36._8_4_;
  fVar64 = auVar49._12_4_ - auVar50._12_4_ * auVar36._12_4_;
  fVar54 = auVar32._0_4_ * fVar59;
  fVar56 = auVar32._4_4_ * fVar62;
  fVar57 = auVar32._8_4_ * fVar63;
  fVar58 = auVar32._12_4_ * fVar64;
  uVar12 = -(uint)(fVar59 < 0.0);
  uVar21 = -(uint)(fVar62 < 0.0);
  uVar24 = -(uint)(fVar63 < 0.0);
  uVar26 = -(uint)(fVar64 < 0.0);
  auVar38._0_4_ = (float)(~uVar12 & (uint)(auVar67._0_4_ * fVar54)) + local_128;
  auVar38._4_4_ = (float)(~uVar21 & (uint)(auVar67._4_4_ * fVar56)) + fStack_124;
  auVar38._8_4_ = (float)(~uVar24 & (uint)(auVar67._8_4_ * fVar57)) + fStack_120;
  auVar38._12_4_ = (float)(~uVar26 & (uint)(auVar67._12_4_ * fVar58)) + fStack_11c;
  if ((bVar9 & 1) != 0) {
    *(float *)(param_1 + auVar39._0_4_) = auVar38._0_4_;
  }
  if ((bVar9 & 2) != 0) {
    uVar8 = extractps(auVar38,1);
    *(undefined8 *)(param_1 + auVar39._4_4_) = uVar8;
  }
  if ((bVar9 & 4) != 0) {
    uVar8 = extractps(auVar38,2);
    *(undefined8 *)(param_1 + auVar39._8_4_) = uVar8;
  }
  uVar7 = ~uVar26 & (uint)((float)(~uVar25 & auVar65._12_4_) * fVar58);
  uVar4 = ~uVar24 & (uint)((float)(~uVar23 & auVar65._8_4_) * fVar57);
  uVar3 = ~uVar21 & (uint)((float)(~uVar20 & auVar65._4_4_) * fVar56);
  uVar40 = ~uVar12 & (uint)((float)(~uVar22 & auVar65._0_4_) * fVar54);
  if ((char)bVar9 < '\0') {
    uVar8 = extractps(auVar38,3);
    *(undefined8 *)(param_1 + auVar39._12_4_) = uVar8;
    auVar49 = divps(auVar55,auVar49);
    auVar53._0_4_ = local_118 + (float)uVar40;
    auVar53._4_4_ = fStack_114 + (float)uVar3;
    auVar53._8_4_ = fStack_110 + (float)uVar4;
    auVar53._12_4_ = fStack_10c + (float)uVar7;
  }
  else {
    auVar49 = divps(auVar55,auVar49);
    auVar53._0_4_ = local_118 + (float)uVar40;
    auVar53._4_4_ = fStack_114 + (float)uVar3;
    auVar53._8_4_ = fStack_110 + (float)uVar4;
    auVar53._12_4_ = fStack_10c + (float)uVar7;
  }
  if ((bVar9 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar39._0_4_) = auVar53._0_4_;
  }
  if ((bVar9 & 2) != 0) {
    uVar8 = extractps(auVar53,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar39._4_4_) = uVar8;
  }
  if ((bVar9 & 4) != 0) {
    uVar8 = extractps(auVar53,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar39._8_4_) = uVar8;
  }
  uVar7 = ~uVar26 & (uint)((float)(~uVar25 & auVar49._12_4_) * fVar58);
  uVar4 = ~uVar24 & (uint)((float)(~uVar23 & auVar49._8_4_) * fVar57);
  uVar3 = ~uVar21 & (uint)((float)(~uVar20 & auVar49._4_4_) * fVar56);
  uVar40 = ~uVar12 & (uint)((float)(~uVar22 & auVar49._0_4_) * fVar54);
  if ((char)bVar9 < '\0') {
    uVar8 = extractps(auVar53,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar39._12_4_) = uVar8;
    auVar47._0_4_ = local_108 + (float)uVar40;
    auVar47._4_4_ = fStack_104 + (float)uVar3;
    auVar47._8_4_ = fStack_100 + (float)uVar4;
    auVar47._12_4_ = fStack_fc + (float)uVar7;
  }
  else {
    auVar47._0_4_ = local_108 + (float)uVar40;
    auVar47._4_4_ = fStack_104 + (float)uVar3;
    auVar47._8_4_ = fStack_100 + (float)uVar4;
    auVar47._12_4_ = fStack_fc + (float)uVar7;
  }
  if ((bVar9 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar39._0_4_) = auVar47._0_4_;
  }
  if ((bVar9 & 2) != 0) {
    uVar8 = extractps(auVar47,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar39._4_4_) = uVar8;
  }
  if ((bVar9 & 4) != 0) {
    uVar8 = extractps(auVar47,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar39._8_4_) = uVar8;
  }
  if ((char)bVar9 < '\0') {
    uVar8 = extractps(auVar47,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar39._12_4_) = uVar8;
  }
  if ((bVar9 & 1) != 0) {
    *(int *)(param_1 + 0xc + (longlong)auVar39._0_4_) = auVar71._0_4_;
  }
  if ((bVar9 & 2) != 0) {
    uVar8 = extractps(auVar71,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar39._4_4_) = uVar8;
  }
  if ((bVar9 & 4) != 0) {
    uVar8 = extractps(auVar71,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar39._8_4_) = uVar8;
  }
  if ((char)bVar9 < '\0') {
    uVar8 = extractps(auVar71,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar39._12_4_) = uVar8;
  }
  return;
}

